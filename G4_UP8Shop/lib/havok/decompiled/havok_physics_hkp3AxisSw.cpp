#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkp3AxisSw.h"

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getOffsetLowHigh32bit  (binary VA: 0x16a71c0)
// Original: hkp3AxisSweep::getOffsetLowHigh32bit
// ----------------------------------------------------------------------------
int hkp3AxisSweep::getOffsetLowHigh32bit(hkp3AxisSweep::Self *self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  int result;

  *(uint32_t *)a2 = *((uint32_t *)self + 28);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 29);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 30);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 31);
  *(uint32_t *)a3 = *((uint32_t *)self + 32);
  *((uint32_t *)a3 + 1) = *((uint32_t *)self + 33);
  *((uint32_t *)a3 + 2) = *((uint32_t *)self + 34);
  result = *((uint32_t *)self + 35);
  *((uint32_t *)a3 + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getType  (binary VA: 0x16a7210)
// Original: hkp3AxisSweep::getType
// ----------------------------------------------------------------------------
int hkp3AxisSweep::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::set32BitOffsetAndScale  (binary VA: 0x16a7220)
// Original: hkp3AxisSweep::set32BitOffsetAndScale
// ----------------------------------------------------------------------------
float * hkp3AxisSweep::set32BitOffsetAndScale(hkp3AxisSweep::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  float *result;
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm4_4

  result = (float *)self;
  *((uint32_t *)self + 28) = *(uint32_t *)a2;
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 31) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 32) = *(uint32_t *)a3;
  *((uint32_t *)self + 33) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 34) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 35) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 36) = *(uint32_t *)a4;
  *((uint32_t *)self + 37) = *((uint32_t *)a4 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a4 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a4 + 3);
  *((uint32_t *)self + 16) = *(uint32_t *)a2;
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 1);
  v5 = result[12] - result[8];
  v6 = hkp3AxisSweep::s_MaxVal;
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 2);
  v7 = result[13] - result[9];
  v8 = *(float *)(unk_20C7924);
  v9 = result[14] - result[10];
  v10 = *(float *)(unk_20C7928);
  *((float *)self + 20) = (float)(v5 / v6) + *((float *)self + 16);
  *((float *)self + 24) = v6 / v5;
  *((float *)self + 21) = (float)(v7 / v8) + *((float *)self + 17);
  *((float *)self + 25) = v8 / v7;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 23) = 0;
  *((float *)self + 22) = (float)(v9 / v10) + *((float *)self + 18);
  *((float *)self + 26) = v10 / v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::areAabbsOverlapping  (binary VA: 0x16a7350)
// Original: hkp3AxisSweep::areAabbsOverlapping
// ----------------------------------------------------------------------------
bool hkp3AxisSweep::areAabbsOverlapping(hkp3AxisSweep::Self *self, const hkpBroadPhaseHandle *a2, const hkpBroadPhaseHandle *a3)
{
  int v3;
  int v4;
  int v5;
  bool result;

  v3 = *((uint32_t *)self + 40);
  v4 = v3 + 16 * *(uint32_t *)a2;
  v5 = v3 + 16 * *(uint32_t *)a3;
  result = false;
  if ( (((*(uint16_t *)(v5 + 4) - *(uint16_t *)v4)
       | (*(uint16_t *)(v5 + 10) - *(uint16_t *)(v4 + 8))
       | (*(uint16_t *)(v4 + 4) - *(uint16_t *)v5)
       | (*(uint16_t *)(v4 + 10) - *(uint16_t *)(v5 + 8)))
      & 0x8000u) == 0 )
    return (((*(uint32_t *)(v4 + 4) - *(uint32_t *)v5) | (*(uint32_t *)(v5 + 4) - *(uint32_t *)v4)) & 0x80008000) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getNumObjects  (binary VA: 0x16a73c0)
// Original: hkp3AxisSweep::getNumObjects
// ----------------------------------------------------------------------------
int hkp3AxisSweep::getNumObjects(hkp3AxisSweep::Self *self)
{
  return *((uint32_t *)self + 41) - 1;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getAabbCacheSize  (binary VA: 0x16a73d0)
// Original: hkp3AxisSweep::getAabbCacheSize
// ----------------------------------------------------------------------------
int hkp3AxisSweep::getAabbCacheSize(hkp3AxisSweep::Self *self)
{
  return 24 * (*((uint32_t *)self + 41) - *((uint32_t *)self + 52)) + 36;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::checkDeterminism  (binary VA: 0x16a7400)
// Original: hkp3AxisSweep::checkDeterminism
// ----------------------------------------------------------------------------
void hkp3AxisSweep::checkDeterminism()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::Destroy  (binary VA: 0x16a7410)
// Original: hkp3AxisSweep::~hkp3AxisSweep
// ----------------------------------------------------------------------------
void hkp3AxisSweep::Destroy(hkp3AxisSweep::Self *self)
{
  int v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  hkp3AxisSweep::Self *v6;
  int address;
  int v8;
  int v9;
  uint32_t *v10;

  v1 = 0;
  v2 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
  v3 = *((uint32_t *)self + 52);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A108);
  if ( v3 > 0 )
  {
    do
    {
      v4 = (uint32_t *)(*((uint32_t *)self + 54) + 16 * v1);
      v5 = v4[3];
      v4[2] = 0;
      if ( v5 >= 0 )
      {
        v10 = v2;
        G4_VCALL<void>(v2, 20, v4[1], 2 * (v5 & 0x3FFFFFFF));
        v2 = v10;
      }
      v4[1] = 0;
      v4[3] = 0x80000000;
      ++v1;
    }
    while ( *((uint32_t *)self + 52) > v1 );
  }
  v6 = (hkp3AxisSweep::Self *)((char *)self + 208);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), *((hkMemoryAllocator::Self **)self + 54));
  do
  {
    v6 = (hkp3AxisSweep::Self *)((char *)v6 - 12);
    v8 = *((uint32_t *)v6 + 2);
    *((uint32_t *)v6 + 1) = 0;
    if ( v8 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)v6,
        4 * v8);
    *(uint32_t *)v6 = 0;
    *((uint32_t *)v6 + 2) = 0x80000000;
  }
  while ( (hkp3AxisSweep::Self *)((char *)self + 172) != v6 );
  v9 = *((uint32_t *)self + 42);
  *((uint32_t *)self + 41) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 40),
      16 * v9);
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 42) = 0x80000000;
  hkpBroadPhase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::Destroy_ea16a7580  (binary VA: 0x16a7580)
// Original: hkp3AxisSweep::~hkp3AxisSweep
// ----------------------------------------------------------------------------
void hkp3AxisSweep::Destroy_ea16a7580(hkp3AxisSweep::Self *self)
{
  int v1;
  int v2;

  hkp3AxisSweep::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 224;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::addObject  (binary VA: 0x16a75e0)
// Original: hkp3AxisSweep::addObject
// ----------------------------------------------------------------------------
int hkp3AxisSweep::addObject(float *a1, int a2, unsigned int *a3, int a4, int a5)
{
  float v5; // xmm7_4
  __m128i v6;
  float v7; // xmm6_4
  float v8; // xmm5_4
  __m128i v9;
  __m128i v10;
  __m128i v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  float v42;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[11];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v44)) > _g4_s0 ? (4u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v45)) > _g4_s1 ? (8u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v46)) > _g4_s2 ? (12u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v47)) > _g4_s3 ? (16u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v48)) > _g4_s4 ? (20u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v49)) > _g4_s5 ? (24u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v50)) > _g4_s6 ? (28u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v51)) > _g4_s7 ? (40u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v52)) > _g4_s8 ? (44u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v53)) > _g4_s9 ? (44u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v54)) > _g4_s10 ? (48u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v55)) > _g4_s11 ? (48u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v56)) > _g4_s12 ? (52u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v57)) > _g4_s13 ? (52u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v58)) > _g4_s14 ? (56u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v59)) > _g4_s15 ? (56u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v60)) > _g4_s16 ? (60u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v61)) > _g4_s17 ? (60u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v62)) > _g4_s18 ? (64u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v63)) > _g4_s19 ? (68u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v64)) > _g4_s20 ? (72u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v65)) > _g4_s21 ? (76u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v66)) > _g4_s22 ? (76u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v67)) > _g4_s23 ? (80u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v68)) > _g4_s24 ? (80u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v69)) > _g4_s25 ? (84u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v70)) > _g4_s26 ? (84u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v71)) > _g4_s27 ? (88u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v72)) > _g4_s28 ? (88u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v73)) > _g4_s29 ? (96u + sizeof(_g4_t_v73)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 84u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 84u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 88u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);

g4_m128_raw(v6) = *a3;
  v5 = a1[36];
  v65 = a1[39];
g4_m128_raw(v9) = a3[1];
g4_m128_raw(v10) = a3[2];
  *(float *)g4_m128_ptr<int32_t>(v6) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v6) + a1[28]) * v5, hkAabbUtil::hkAabbUint32MaxVal[0]);
g4_m128_raw(v11) = a3[3];
  v7 = a1[37];
  v8 = a1[38];
  *(float *)g4_m128_ptr<int32_t>(v9) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v9) + a1[29]) * v7, hkAabbUtil::hkAabbUint32MaxVal[1]);
  *(float *)g4_m128_ptr<int32_t>(v10) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v10) + a1[30]) * v8, hkAabbUtil::hkAabbUint32MaxVal[2]);
  *(float *)g4_m128_ptr<int32_t>(v11) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v11) + a1[31]) * v65, hkAabbUtil::hkAabbUint32MaxVal[3]);
  if ( *(float *)g4_m128_ptr<int32_t>(v6) <= 0.0 )
  {
    v12 = 0;
    v13 = -127;
    LOBYTE(v60) = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
    {
LABEL_3:
      v49 = _mm_cvtsi128_si32(v9);
      v58 = (v49 & 0x7F800000u) >> 23;
      v52 = v58 - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
        goto LABEL_4;
      goto LABEL_44;
    }
  }
  else
  {
    v12 = _mm_cvtsi128_si32(v6);
    v60 = (v12 & 0x7F800000u) >> 23;
    v13 = v60 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
      goto LABEL_3;
  }
  v52 = -127;
  LOBYTE(v58) = 0;
  v49 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
  {
LABEL_4:
    v50 = _mm_cvtsi128_si32(v10);
    v56 = (v50 & 0x7F800000u) >> 23;
    v51 = v56 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v11) > 0.0 )
      goto LABEL_5;
LABEL_45:
    v14 = -127;
    LOBYTE(v54) = 0;
    v48 = 0;
    if ( v13 < 0 )
      goto LABEL_46;
    goto LABEL_6;
  }
LABEL_44:
  v51 = -127;
  LOBYTE(v56) = 0;
  v50 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
    goto LABEL_45;
LABEL_5:
  v48 = _mm_cvtsi128_si32(v11);
  v54 = (v48 & 0x7F800000u) >> 23;
  v14 = v54 - 127;
  if ( v13 < 0 )
    goto LABEL_46;
LABEL_6:
  if ( v12 >= 0 )
  {
    v47 = v12 & 0x7FFFFF | 0x800000;
    if ( v13 > 23 )
    {
      v15 = -1;
      if ( v13 <= 31 )
        v15 = v47 << (v60 + 106);
    }
    else
    {
      v15 = v47 >> (-106 - v60);
    }
    v16 = v52;
    v67 = v15;
    if ( v52 < 0 )
      goto LABEL_47;
    goto LABEL_10;
  }
LABEL_46:
  v16 = v52;
  v67 = 0;
  if ( v52 < 0 )
    goto LABEL_47;
LABEL_10:
  if ( v49 >= 0 )
  {
    v17 = v49 & 0x7FFFFF | 0x800000;
    if ( v16 > 23 )
    {
      v18 = -1;
      if ( v52 <= 31 )
        v18 = v17 << (v58 + 106);
    }
    else
    {
      v18 = v17 >> (-106 - v58);
    }
    v69 = v18;
    v19 = v51;
    if ( v51 < 0 )
      goto LABEL_48;
    goto LABEL_14;
  }
LABEL_47:
  v69 = 0;
  v19 = v51;
  if ( v51 >= 0 )
  {
LABEL_14:
    if ( v50 >= 0 )
    {
      v20 = v50 & 0x7FFFFF | 0x800000;
      if ( v19 > 23 )
      {
        v21 = -1;
        if ( v51 <= 31 )
          v21 = v20 << (v56 + 106);
      }
      else
      {
        v21 = v20 >> (-106 - v56);
      }
      v71 = v21;
      if ( v14 < 0 )
        goto LABEL_49;
      goto LABEL_18;
    }
  }
LABEL_48:
  v71 = 0;
  if ( v14 < 0 )
    goto LABEL_49;
LABEL_18:
  if ( v48 < 0 )
  {
LABEL_49:
    v23 = 0;
    goto LABEL_21;
  }
  v22 = v48 & 0x7FFFFF | 0x800000;
  if ( v14 > 23 )
  {
    v23 = -1;
    if ( v14 <= 31 )
      v23 = v22 << (v54 + 106);
  }
  else
  {
    v23 = v22 >> (-106 - v54);
  }
LABEL_21:
g4_m128_raw(v24) = a3[4];
  *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) + a1[32];
g4_m128_raw(v25) = a3[5];
g4_m128_raw(v26) = a3[6];
g4_m128_raw(v27) = a3[7];
  v73[0] = v67;
  *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) + a1[33];
  v73[1] = v69;
  *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) + a1[34];
  *(float *)g4_m128_ptr<int32_t>(v27) = *(float *)g4_m128_ptr<int32_t>(v27) + a1[35];
  *(float *)g4_m128_ptr<int32_t>(v24) = fminf(*(float *)g4_m128_ptr<int32_t>(v24) * v5, hkAabbUtil::hkAabbUint32MaxVal[0]);
  v73[2] = v71;
  v73[3] = v23;
  *(float *)g4_m128_ptr<int32_t>(v25) = fminf(*(float *)g4_m128_ptr<int32_t>(v25) * v7, hkAabbUtil::hkAabbUint32MaxVal[1]);
  *(float *)g4_m128_ptr<int32_t>(v26) = fminf(*(float *)g4_m128_ptr<int32_t>(v26) * v8, hkAabbUtil::hkAabbUint32MaxVal[2]);
  *(float *)g4_m128_ptr<int32_t>(v27) = fminf(*(float *)g4_m128_ptr<int32_t>(v27) * v65, hkAabbUtil::hkAabbUint32MaxVal[3]);
  if ( *(float *)g4_m128_ptr<int32_t>(v24) <= 0.0 )
  {
    v28 = 0;
    v29 = -127;
    v63 = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
    {
LABEL_23:
      v30 = _mm_cvtsi128_si32(v25);
      v66 = (v30 & 0x7F800000u) >> 23;
      v61 = v66 - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v26) > 0.0 )
        goto LABEL_24;
      goto LABEL_54;
    }
  }
  else
  {
    v28 = _mm_cvtsi128_si32(v24);
    v63 = (v28 & 0x7F800000u) >> 23;
    v29 = v63 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
      goto LABEL_23;
  }
  v30 = 0;
  v61 = -127;
  v66 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v26) > 0.0 )
  {
LABEL_24:
    v53 = _mm_cvtsi128_si32(v26);
    v62 = (v53 & 0x7F800000u) >> 23;
    v57 = v62 - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v27) > 0.0 )
      goto LABEL_25;
LABEL_55:
    v59 = -127;
    v64 = 0;
    v55 = 0;
    if ( v29 < 0 )
      goto LABEL_56;
    goto LABEL_26;
  }
LABEL_54:
  v57 = -127;
  v62 = 0;
  v53 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v27) <= 0.0 )
    goto LABEL_55;
LABEL_25:
  v55 = _mm_cvtsi128_si32(v27);
  v64 = (v55 & 0x7F800000u) >> 23;
  v59 = v64 - 127;
  if ( v29 < 0 )
    goto LABEL_56;
LABEL_26:
  if ( v28 >= 0 )
  {
    v31 = v28 & 0x7FFFFF | 0x800000;
    if ( v29 > 23 )
    {
      v32 = -1;
      if ( v29 <= 31 )
        v32 = v31 << (v63 + 106);
    }
    else
    {
      v32 = v31 >> (-106 - v63);
    }
    v33 = v61;
    v68 = v32;
    if ( v61 < 0 )
      goto LABEL_57;
    goto LABEL_30;
  }
LABEL_56:
  v33 = v61;
  v68 = 0;
  if ( v61 < 0 )
    goto LABEL_57;
LABEL_30:
  if ( v30 >= 0 )
  {
    v34 = v30 & 0x7FFFFF | 0x800000;
    if ( v33 > 23 )
    {
      v35 = -1;
      if ( v61 <= 31 )
        v35 = v34 << (v66 + 106);
    }
    else
    {
      v35 = v34 >> (-106 - v66);
    }
    v36 = v57;
    v70 = v35;
    if ( v57 < 0 )
      goto LABEL_58;
    goto LABEL_34;
  }
LABEL_57:
  v36 = v57;
  v70 = 0;
  if ( v57 < 0 )
    goto LABEL_58;
LABEL_34:
  if ( v53 >= 0 )
  {
    v37 = v53 & 0x7FFFFF | 0x800000;
    if ( v36 > 23 )
    {
      v38 = -1;
      if ( v57 <= 31 )
        v38 = v37 << (v62 + 106);
    }
    else
    {
      v38 = v37 >> (-106 - v62);
    }
    v39 = v59;
    v72 = v38;
    if ( v59 < 0 )
      goto LABEL_59;
    goto LABEL_38;
  }
LABEL_58:
  v39 = v59;
  v72 = 0;
  if ( v59 < 0 )
    goto LABEL_59;
LABEL_38:
  if ( v55 < 0 )
  {
LABEL_59:
    v41 = 0;
    goto LABEL_41;
  }
  v40 = v55 & 0x7FFFFF | 0x800000;
  if ( v39 > 23 )
  {
    v41 = -1;
    if ( v59 <= 31 )
      v41 = v40 << (v64 + 106);
  }
  else
  {
    v41 = v40 >> (-106 - v64);
  }
LABEL_41:
  v42 = *a1;
  v73[4] = v68;
  v73[5] = v70;
  v73[6] = v72;
  v73[7] = v41;
  return (*(int (**)(float *, int, uint32_t *, int, uint32_t, int, int, int, unsigned int, int, int, int, int, uint32_t, int, int, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int, int))(LODWORD(v42) + 28))(
           a1,
           a2,
           v73,
           a4,
           (uint8_t)a5,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           a5,
           LODWORD(hkAabbUtil::hkAabbUint32MaxVal[0]),
           v51,
           v53,
           v55,
           v57,
           v59,
           v61,
           v62,
           v63,
           v64,
           v66,
           v68,
           v70,
           v72,
           v41);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getExtents  (binary VA: 0x16a7db0)
// Original: hkp3AxisSweep::getExtents
// ----------------------------------------------------------------------------
hkVector4f::Self * hkp3AxisSweep::getExtents(hkp3AxisSweep::Self *self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  __m128i v4;
  int v5;
  int v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  __m128i v9;
  int v10;
  float v11; // xmm3_4
  float v12; // xmm4_4
  __m128i v13;
  int v14;
  int v15;
  float v16; // xmm5_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm1_4

  *(float *)a2 = -*((float *)self + 16);
  *((float *)a2 + 1) = -*((float *)self + 17);
  *((float *)a2 + 2) = -*((float *)self + 18);
  *((float *)a2 + 3) = -*((float *)self + 19);
g4_m128_raw(v4) = *((unsigned int *)self + 24);
  v5 = _mm_cvtsi128_si32(v4);
  v6 = (2130706432 - v5) & ((v5 ^ (v5 + 2139095040)) >> 31);
  v7 = (float)(2.0
             - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)&v6)) * *(float *)&v6)))
     * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)&v6)) * *(float *)&v6);
  v8 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * v7)) * v7;
  *(float *)a3 = v8;
g4_m128_raw(v9) = *((unsigned int *)self + 25);
  v10 = _mm_cvtsi128_si32(v9);
  v11 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * COERCE_FLOAT((2130706432 - v10) & ((v10 ^ (v10 + 2139095040)) >> 31))))
      * COERCE_FLOAT((2130706432 - v10) & ((v10 ^ (v10 + 2139095040)) >> 31));
  v12 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v11)) * v11)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v11)) * v11);
  *((float *)a3 + 1) = v12;
g4_m128_raw(v13) = *((unsigned int *)self + 26);
  v14 = _mm_cvtsi128_si32(v13);
  v15 = (2130706432 - v14) & ((v14 ^ (v14 + 2139095040)) >> 31);
  *((uint32_t *)a3 + 3) = 1065353216;
  v16 = v8 * hkp3AxisSweep::s_MaxVal;
  v17 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v13)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)&v15)) * *(float *)&v15)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)&v15)) * *(float *)&v15);
  v18 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * v17);
  *(float *)g4_m128_ptr<int32_t>(v13) = (*(const float *)&unk_20C7924) * v12;
  v19 = v18 * v17;
  *((float *)a3 + 2) = v19;
  *(float *)g4_m128_ptr<int32_t>(v9) = (*(const float *)&unk_20C7928) * v19;
  v20 = (*(const double *)&unk_20C792C) * 1.0;
  *(float *)a3 = v16;
  *((uint32_t *)a3 + 1) =g4_m128_lane<int32_t>(v13, 0);
  *((uint32_t *)a3 + 2) =g4_m128_lane<int32_t>(v9, 0);
  *((float *)a3 + 3) = v20;
  *(float *)a3 = v16 + *(float *)a2;
  *((float *)a3 + 1) = *(float *)g4_m128_ptr<int32_t>(v13) + *((float *)a2 + 1);
  *((float *)a3 + 2) = *(float *)g4_m128_ptr<int32_t>(v9) + *((float *)a2 + 2);
  *((float *)a3 + 3) = v20 + *((float *)a2 + 3);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::shiftBroadPhase  (binary VA: 0x16a7fb0)
// Original: hkp3AxisSweep::shiftBroadPhase
// ----------------------------------------------------------------------------
float * hkp3AxisSweep::shiftBroadPhase(int a1, __m128 *a2, float *a3, int a4)
{
  __m128i v4;
  int v5;
  int v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm7_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12; // xmm2_4
  __m128i v13;
  int v14;
  int v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  __m128i v18;
  int v19;
  float v20; // xmm6_4
  float v21; // xmm4_4
  int v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  __m128i v25;
  int v26;
  int v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm7_4
  float v30; // xmm3_4
  __m128i v31;
  int v32;
  int v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm4_4
  __m128i v38;
  int v39;
  int v40; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef __m128 _g4_t_v51;
  typedef float _g4_t_v52[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v45)) > _g4_s1 ? (16u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v47)) > _g4_s3 ? (20u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v48)) > _g4_s4 ? (20u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v49)) > _g4_s5 ? (24u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v50)) > _g4_s6 ? (28u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v51)) > _g4_s7 ? (32u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v52)) > _g4_s8 ? (48u + sizeof(_g4_t_v52)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);

  v51 = _mm_xor_ps(*a2, G4_BITCAST<__m128>(xmmword_1C7C2A0));
  G4_VCALL<void>(a1, 96, &v51, v52, a4);
g4_m128_raw(v4) = *(unsigned int *)(a1 + 96);
  v5 = _mm_cvtsi128_si32(v4);
  v6 = (2130706432 - v5) & ((v5 ^ (v5 + 2139095040)) >> 31);
  v7 = *(float *)(a1 + 96) * *(float *)&v6;
  v8 = v52[3];
  v50 = v52[0] + *(float *)(a1 + 64);
  *(float *)(a1 + 64) = v50;
  v9 = v52[2] + *(float *)(a1 + 72);
  v10 = v52[1] + *(float *)(a1 + 68);
  v45 = v8 + *(float *)(a1 + 76);
  *(float *)(a1 + 76) = v45;
  v47 = v9;
  *(float *)(a1 + 72) = v9;
  v49 = v10;
  *(float *)(a1 + 68) = v10;
  v11 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * (float)((float)(2.0 - v7) * *(float *)&v6)))
      * (float)((float)(2.0 - v7) * *(float *)&v6);
  v12 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * v11);
g4_m128_raw(v13) = *(unsigned int *)(a1 + 100);
  v14 = _mm_cvtsi128_si32(v13);
  v15 = (2130706432 - v14) & ((v14 ^ (v14 + 2139095040)) >> 31);
  v16 = 2.0 - (float)(*(float *)(a1 + 100) * *(float *)&v15);
  *(float *)(a1 + 80) = (float)(v12 * v11) + v50;
  v17 = v16 * *(float *)&v15;
g4_m128_raw(v18) = *(unsigned int *)(a1 + 104);
  v19 = _mm_cvtsi128_si32(v18);
  v20 = *(float *)(a1 + 104);
  v21 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * v17)) * v17;
  v22 = (2130706432 - v19) & ((v19 ^ (v19 + 2139095040)) >> 31);
  *(float *)(a1 + 84) = v49 + (float)(v21 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * v21)));
  v23 = v52[0] + *(float *)(a1 + 112);
  v24 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * (float)((float)(2.0 - (float)(v20 * *(float *)&v22)) * *(float *)&v22)))
      * (float)((float)(2.0 - (float)(v20 * *(float *)&v22)) * *(float *)&v22);
  *(float *)(a1 + 92) = v45 + 1.0;
  *(float *)(a1 + 88) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v24)) * v24) + v47;
g4_m128_raw(v25) = *(unsigned int *)(a1 + 144);
  v26 = _mm_cvtsi128_si32(v25);
  *(float *)(a1 + 112) = v23;
  v27 = (2130706432 - v26) & ((v26 ^ (v26 + 2139095040)) >> 31);
  *(float *)g4_m128_ptr<int32_t>(v18) = v52[1] + *(float *)(a1 + 116);
  v28 = v52[3] + *(float *)(a1 + 124);
  v29 = v52[2] + *(float *)(a1 + 120);
  *(uint32_t *)(a1 + 116) =g4_m128_lane<int32_t>(v18, 0);
  v48 = *(float *)g4_m128_ptr<int32_t>(v18);
  *(float *)(a1 + 124) = v28;
  v44 = v28;
  *(float *)(a1 + 120) = v29;
  v46 = v29;
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)(2.0
                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)&v27))
                                                  * *(float *)&v27)))
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)&v27)) * *(float *)&v27);
  v30 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v18));
g4_m128_raw(v31) = *(unsigned int *)(a1 + 148);
  v32 = _mm_cvtsi128_si32(v31);
  v33 = (2130706432 - v32) & ((v32 ^ (v32 + 2139095040)) >> 31);
  v34 = (float)(v30 * *(float *)g4_m128_ptr<int32_t>(v18)) + v23;
  v35 = (float)(2.0 - (float)(*(float *)(a1 + 148) * *(float *)&v33)) * *(float *)&v33;
  v36 = *(float *)(a1 + 148);
  *(float *)(a1 + 128) = v34;
  v37 = (float)(2.0 - (float)(v36 * v35)) * v35;
g4_m128_raw(v38) = *(unsigned int *)(a1 + 152);
  v39 = _mm_cvtsi128_si32(v38);
  v40 = (2130706432 - v39) & ((v39 ^ (v39 + 2139095040)) >> 31);
  v42 = v37 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v31) * v37));
  v43 = (float)(2.0 - (float)(*(float *)(a1 + 152) * *(float *)&v40)) * *(float *)&v40;
  *(float *)g4_m128_ptr<int32_t>(v31) = v52[0];
  *(float *)(a1 + 132) = v48 + v42;
  *(float *)(a1 + 136) = (float)((float)(2.0
                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v38)
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v38) * v43)) * v43)))
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v38) * v43)) * v43))
                       + v46;
  *(float *)(a1 + 140) = v44 + 1.0;
  *a3 = -*(float *)g4_m128_ptr<int32_t>(v31);
  a3[1] = -v52[1];
  a3[2] = -v52[2];
  a3[3] = -v52[3];
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::castRay  (binary VA: 0x16a83c0)
// Original: hkp3AxisSweep::castRay
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkp3AxisSweep::castRay(int a1, float *a2, int a3, int a4)
{
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  int v8;
  signed int v9;
  signed int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  int v27;
  int v28;
  uint16_t *v29;
  char *v30;
  unsigned int v31;
  uint16_t *v32;
  int v33;
  hkLifoAllocator::Self *v34;
  int v35;
  signed int i;
  char *v37;
  int v38;
  __m128i *v39;
  float v40; // xmm5_4
  int v41;
  float v42; // xmm4_4
  __m128i v43;
  __m128i v44;
  float v45; // xmm5_4
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  __m128i v62;
  float v63; // xmm3_4
  float v64; // xmm5_4
  __m128i v65;
  float v66;
  float v67; // xmm5_4
  float v68; // xmm4_4
  float v69; // xmm2_4
  float v70;
  __m128i v71;
  bool v72;
  char v73; // si
  bool v74;
  char v75;
  char v76;
  char v77; // si
  char v78;
  char v79; // si
  float v80; // xmm2_4
  char v81;
  float v82; // xmm2_4
  uint16_t *v83;
  float v84; // xmm3_4
  float v85; // xmm1_4
  int v86;
  int v87;
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm2_4
  int v91;
  uint16_t *v92;
  uint16_t v93;
  int v94;
  uint16_t v95;
  int8_t *v96;
  uint8_t v97;
  int v98;
  unsigned int v99;
  uint16_t *v100;
  char *v101;
  unsigned int v102;
  uint16_t *v103;
  int v104;
  char *v105;
  int v106;
  int n;
  long double v108; // fst7
  int v109;
  char *v110;
  int v111;
  int m;
  long double v113; // fst7
  int v114;
  char *v115;
  int v116;
  int k;
  long double v118; // fst7
  int v119;
  char *v120;
  int v121;
  int j;
  long double v123; // fst7
  signed int v124;
  __m128i *v125;
  unsigned int v126;
  __m128i v127;
  int v128;
  hkLifoAllocator::Self *result;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef unsigned int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int *_g4_t_v133;
  typedef signed int _g4_t_v134;
  typedef unsigned int _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef char *_g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef int *_g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef char _g4_t_v155;
  typedef int _g4_t_v156;
  typedef float _g4_t_v157;
  typedef int _g4_t_v158;
  typedef float _g4_t_v159;
  typedef int _g4_t_v160;
  typedef float _g4_t_v161;
  typedef bool _g4_t_v162;
  typedef int _g4_t_v163;
  typedef signed int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef unsigned int _g4_t_v166;
  typedef unsigned int _g4_t_v167;
  typedef float _g4_t_v168;
  typedef int _g4_t_v169;
  typedef __m128i *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef float _g4_t_v173;
  typedef float _g4_t_v174;
  typedef unsigned int _g4_t_v175;
  typedef char *_g4_t_v176;
  typedef float _g4_t_v177;
  typedef char *_g4_t_v178;
  typedef float _g4_t_v179;
  typedef char *_g4_t_v180;
  typedef float _g4_t_v181;
  typedef char *_g4_t_v182;
  typedef float _g4_t_v183;
  typedef signed int _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef __m128i *_g4_t_v187;
  typedef float _g4_t_v188;
  typedef float _g4_t_v189;
  typedef int _g4_t_v190;
  typedef signed int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef unsigned int _g4_t_v193;
  typedef uint16_t *_g4_t_v194;
  typedef uint32_t *_g4_t_v195;
  typedef float _g4_t_v196;
  typedef uint16_t *_g4_t_v197;
  typedef float _g4_t_v198;
  typedef uint16_t *_g4_t_v199;
  typedef uint16_t *_g4_t_v200;
  typedef uint16_t *_g4_t_v201;
  typedef uint16_t *_g4_t_v202;
  typedef uint16_t *_g4_t_v203;
  typedef uint16_t *_g4_t_v204;
  typedef uint16_t *_g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef uint32_t _g4_t_v209[4];
  typedef float _g4_t_v210;
  typedef float _g4_t_v211;
  typedef float _g4_t_v212;
  typedef float _g4_t_v213;
  typedef float _g4_t_v214;
  typedef float _g4_t_v215;
  typedef float _g4_t_v216;
  typedef float _g4_t_v217;
  typedef float _g4_t_v218;
  typedef float _g4_t_v219;
  typedef float _g4_t_v220;
  typedef unsigned int _g4_t_v221;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_address)) > _g4_s0 ? (8u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v131)) > _g4_s1 ? (12u + sizeof(_g4_t_v131)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v132)) > _g4_s2 ? (16u + sizeof(_g4_t_v132)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v133)) > _g4_s3 ? (20u + sizeof(_g4_t_v133)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v134)) > _g4_s4 ? (36u + sizeof(_g4_t_v134)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v135)) > _g4_s5 ? (40u + sizeof(_g4_t_v135)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v136)) > _g4_s6 ? (48u + sizeof(_g4_t_v136)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v137)) > _g4_s7 ? (52u + sizeof(_g4_t_v137)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v138)) > _g4_s8 ? (56u + sizeof(_g4_t_v138)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v139)) > _g4_s9 ? (60u + sizeof(_g4_t_v139)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v140)) > _g4_s10 ? (68u + sizeof(_g4_t_v140)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v141)) > _g4_s11 ? (72u + sizeof(_g4_t_v141)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v142)) > _g4_s12 ? (76u + sizeof(_g4_t_v142)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v143)) > _g4_s13 ? (80u + sizeof(_g4_t_v143)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v144)) > _g4_s14 ? (88u + sizeof(_g4_t_v144)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v145)) > _g4_s15 ? (92u + sizeof(_g4_t_v145)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v146)) > _g4_s16 ? (96u + sizeof(_g4_t_v146)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v147)) > _g4_s17 ? (100u + sizeof(_g4_t_v147)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v148)) > _g4_s18 ? (104u + sizeof(_g4_t_v148)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v149)) > _g4_s19 ? (108u + sizeof(_g4_t_v149)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v150)) > _g4_s20 ? (112u + sizeof(_g4_t_v150)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v151)) > _g4_s21 ? (112u + sizeof(_g4_t_v151)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v152)) > _g4_s22 ? (116u + sizeof(_g4_t_v152)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v153)) > _g4_s23 ? (116u + sizeof(_g4_t_v153)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v154)) > _g4_s24 ? (116u + sizeof(_g4_t_v154)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v155)) > _g4_s25 ? (120u + sizeof(_g4_t_v155)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v156)) > _g4_s26 ? (124u + sizeof(_g4_t_v156)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v157)) > _g4_s27 ? (124u + sizeof(_g4_t_v157)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v158)) > _g4_s28 ? (128u + sizeof(_g4_t_v158)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v159)) > _g4_s29 ? (128u + sizeof(_g4_t_v159)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v160)) > _g4_s30 ? (132u + sizeof(_g4_t_v160)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v161)) > _g4_s31 ? (132u + sizeof(_g4_t_v161)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v162)) > _g4_s32 ? (132u + sizeof(_g4_t_v162)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v163)) > _g4_s33 ? (136u + sizeof(_g4_t_v163)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v164)) > _g4_s34 ? (136u + sizeof(_g4_t_v164)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v165)) > _g4_s35 ? (140u + sizeof(_g4_t_v165)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v166)) > _g4_s36 ? (140u + sizeof(_g4_t_v166)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v167)) > _g4_s37 ? (140u + sizeof(_g4_t_v167)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v168)) > _g4_s38 ? (140u + sizeof(_g4_t_v168)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v169)) > _g4_s39 ? (144u + sizeof(_g4_t_v169)) : _g4_s39,
    _g4_s41 = (144u + sizeof(_g4_t_v170)) > _g4_s40 ? (144u + sizeof(_g4_t_v170)) : _g4_s40,
    _g4_s42 = (148u + sizeof(_g4_t_v171)) > _g4_s41 ? (148u + sizeof(_g4_t_v171)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v172)) > _g4_s42 ? (148u + sizeof(_g4_t_v172)) : _g4_s42,
    _g4_s44 = (148u + sizeof(_g4_t_v173)) > _g4_s43 ? (148u + sizeof(_g4_t_v173)) : _g4_s43,
    _g4_s45 = (148u + sizeof(_g4_t_v174)) > _g4_s44 ? (148u + sizeof(_g4_t_v174)) : _g4_s44,
    _g4_s46 = (148u + sizeof(_g4_t_v175)) > _g4_s45 ? (148u + sizeof(_g4_t_v175)) : _g4_s45,
    _g4_s47 = (148u + sizeof(_g4_t_v176)) > _g4_s46 ? (148u + sizeof(_g4_t_v176)) : _g4_s46,
    _g4_s48 = (148u + sizeof(_g4_t_v177)) > _g4_s47 ? (148u + sizeof(_g4_t_v177)) : _g4_s47,
    _g4_s49 = (148u + sizeof(_g4_t_v178)) > _g4_s48 ? (148u + sizeof(_g4_t_v178)) : _g4_s48,
    _g4_s50 = (148u + sizeof(_g4_t_v179)) > _g4_s49 ? (148u + sizeof(_g4_t_v179)) : _g4_s49,
    _g4_s51 = (148u + sizeof(_g4_t_v180)) > _g4_s50 ? (148u + sizeof(_g4_t_v180)) : _g4_s50,
    _g4_s52 = (148u + sizeof(_g4_t_v181)) > _g4_s51 ? (148u + sizeof(_g4_t_v181)) : _g4_s51,
    _g4_s53 = (148u + sizeof(_g4_t_v182)) > _g4_s52 ? (148u + sizeof(_g4_t_v182)) : _g4_s52,
    _g4_s54 = (148u + sizeof(_g4_t_v183)) > _g4_s53 ? (148u + sizeof(_g4_t_v183)) : _g4_s53,
    _g4_s55 = (152u + sizeof(_g4_t_v184)) > _g4_s54 ? (152u + sizeof(_g4_t_v184)) : _g4_s54,
    _g4_s56 = (152u + sizeof(_g4_t_v185)) > _g4_s55 ? (152u + sizeof(_g4_t_v185)) : _g4_s55,
    _g4_s57 = (152u + sizeof(_g4_t_v186)) > _g4_s56 ? (152u + sizeof(_g4_t_v186)) : _g4_s56,
    _g4_s58 = (152u + sizeof(_g4_t_v187)) > _g4_s57 ? (152u + sizeof(_g4_t_v187)) : _g4_s57,
    _g4_s59 = (152u + sizeof(_g4_t_v188)) > _g4_s58 ? (152u + sizeof(_g4_t_v188)) : _g4_s58,
    _g4_s60 = (152u + sizeof(_g4_t_v189)) > _g4_s59 ? (152u + sizeof(_g4_t_v189)) : _g4_s59,
    _g4_s61 = (152u + sizeof(_g4_t_v190)) > _g4_s60 ? (152u + sizeof(_g4_t_v190)) : _g4_s60,
    _g4_s62 = (156u + sizeof(_g4_t_v191)) > _g4_s61 ? (156u + sizeof(_g4_t_v191)) : _g4_s61,
    _g4_s63 = (156u + sizeof(_g4_t_v192)) > _g4_s62 ? (156u + sizeof(_g4_t_v192)) : _g4_s62,
    _g4_s64 = (156u + sizeof(_g4_t_v193)) > _g4_s63 ? (156u + sizeof(_g4_t_v193)) : _g4_s63,
    _g4_s65 = (156u + sizeof(_g4_t_v194)) > _g4_s64 ? (156u + sizeof(_g4_t_v194)) : _g4_s64,
    _g4_s66 = (156u + sizeof(_g4_t_v195)) > _g4_s65 ? (156u + sizeof(_g4_t_v195)) : _g4_s65,
    _g4_s67 = (156u + sizeof(_g4_t_v196)) > _g4_s66 ? (156u + sizeof(_g4_t_v196)) : _g4_s66,
    _g4_s68 = (156u + sizeof(_g4_t_v197)) > _g4_s67 ? (156u + sizeof(_g4_t_v197)) : _g4_s67,
    _g4_s69 = (156u + sizeof(_g4_t_v198)) > _g4_s68 ? (156u + sizeof(_g4_t_v198)) : _g4_s68,
    _g4_s70 = (156u + sizeof(_g4_t_v199)) > _g4_s69 ? (156u + sizeof(_g4_t_v199)) : _g4_s69,
    _g4_s71 = (160u + sizeof(_g4_t_v200)) > _g4_s70 ? (160u + sizeof(_g4_t_v200)) : _g4_s70,
    _g4_s72 = (164u + sizeof(_g4_t_v201)) > _g4_s71 ? (164u + sizeof(_g4_t_v201)) : _g4_s71,
    _g4_s73 = (168u + sizeof(_g4_t_v202)) > _g4_s72 ? (168u + sizeof(_g4_t_v202)) : _g4_s72,
    _g4_s74 = (176u + sizeof(_g4_t_v203)) > _g4_s73 ? (176u + sizeof(_g4_t_v203)) : _g4_s73,
    _g4_s75 = (180u + sizeof(_g4_t_v204)) > _g4_s74 ? (180u + sizeof(_g4_t_v204)) : _g4_s74,
    _g4_s76 = (184u + sizeof(_g4_t_v205)) > _g4_s75 ? (184u + sizeof(_g4_t_v205)) : _g4_s75,
    _g4_s77 = (192u + sizeof(_g4_t_v206)) > _g4_s76 ? (192u + sizeof(_g4_t_v206)) : _g4_s76,
    _g4_s78 = (196u + sizeof(_g4_t_v207)) > _g4_s77 ? (196u + sizeof(_g4_t_v207)) : _g4_s77,
    _g4_s79 = (200u + sizeof(_g4_t_v208)) > _g4_s78 ? (200u + sizeof(_g4_t_v208)) : _g4_s78,
    _g4_s80 = (208u + sizeof(_g4_t_v209)) > _g4_s79 ? (208u + sizeof(_g4_t_v209)) : _g4_s79,
    _g4_s81 = (224u + sizeof(_g4_t_v210)) > _g4_s80 ? (224u + sizeof(_g4_t_v210)) : _g4_s80,
    _g4_s82 = (228u + sizeof(_g4_t_v211)) > _g4_s81 ? (228u + sizeof(_g4_t_v211)) : _g4_s81,
    _g4_s83 = (232u + sizeof(_g4_t_v212)) > _g4_s82 ? (232u + sizeof(_g4_t_v212)) : _g4_s82,
    _g4_s84 = (236u + sizeof(_g4_t_v213)) > _g4_s83 ? (236u + sizeof(_g4_t_v213)) : _g4_s83,
    _g4_s85 = (240u + sizeof(_g4_t_v214)) > _g4_s84 ? (240u + sizeof(_g4_t_v214)) : _g4_s84,
    _g4_s86 = (244u + sizeof(_g4_t_v215)) > _g4_s85 ? (244u + sizeof(_g4_t_v215)) : _g4_s85,
    _g4_s87 = (248u + sizeof(_g4_t_v216)) > _g4_s86 ? (248u + sizeof(_g4_t_v216)) : _g4_s86,
    _g4_s88 = (252u + sizeof(_g4_t_v217)) > _g4_s87 ? (252u + sizeof(_g4_t_v217)) : _g4_s87,
    _g4_s89 = (256u + sizeof(_g4_t_v218)) > _g4_s88 ? (256u + sizeof(_g4_t_v218)) : _g4_s88,
    _g4_s90 = (260u + sizeof(_g4_t_v219)) > _g4_s89 ? (260u + sizeof(_g4_t_v219)) : _g4_s89,
    _g4_s91 = (264u + sizeof(_g4_t_v220)) > _g4_s90 ? (264u + sizeof(_g4_t_v220)) : _g4_s90,
    _g4_s92 = (268u + sizeof(_g4_t_v221)) > _g4_s91 ? (268u + sizeof(_g4_t_v221)) : _g4_s91
  };
  alignas(16) uint8_t _g4_sf[_g4_s92];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 8u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 16u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 20u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 36u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 40u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 48u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 52u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 56u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 60u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 68u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 72u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 76u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 80u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 88u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 92u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 96u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 100u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 104u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 108u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 112u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 112u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 116u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 116u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 116u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 120u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 124u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 124u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 128u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 128u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 132u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 132u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 132u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 136u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 136u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 140u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 140u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 140u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 140u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 144u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 144u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 148u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 148u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 148u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 148u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 148u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 148u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 148u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 148u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 148u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 148u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 148u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 148u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 148u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 152u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 152u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 152u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 152u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 152u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 152u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 152u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 156u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 156u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 156u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 156u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 156u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 156u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 156u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 156u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 156u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 160u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 164u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 168u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 176u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 180u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 184u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 192u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 196u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 200u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 208u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 224u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 228u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 232u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 236u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 240u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 244u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 248u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 252u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 256u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 260u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 264u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 268u);

g4_m128_raw(v4) = *(unsigned int *)a2;
g4_m128_raw(v5) = *((unsigned int *)a2 + 1);
  *(float *)g4_m128_ptr<int32_t>(v4) = fminf(
                             (float)(*(float *)g4_m128_ptr<int32_t>(v4) + *(float *)(a1 + 64)) * *(float *)(a1 + 96),
                             hkp3AxisSweep::s_MaxVal);
g4_m128_raw(v6) = *((unsigned int *)a2 + 2);
  *(float *)g4_m128_ptr<int32_t>(v5) = fminf(
                             (float)(*(float *)g4_m128_ptr<int32_t>(v5) + *(float *)(a1 + 68)) * *(float *)(a1 + 100),
                             unk_20C7924);
g4_m128_raw(v7) = *((unsigned int *)a2 + 3);
  *(float *)g4_m128_ptr<int32_t>(v6) = fminf(
                             (float)(*(float *)g4_m128_ptr<int32_t>(v6) + *(float *)(a1 + 72)) * *(float *)(a1 + 104),
                             unk_20C7928);
  *(float *)g4_m128_ptr<int32_t>(v7) = fminf(
                             (float)(*(float *)g4_m128_ptr<int32_t>(v7) + *(float *)(a1 + 76)) * *(float *)(a1 + 108),
                             (*(const float *)unk_20C792C));
  if ( *(float *)g4_m128_ptr<int32_t>(v4) <= 0.0 )
  {
    v8 = 0;
    v9 = -127;
    if ( *(float *)g4_m128_ptr<int32_t>(v5) > 0.0 )
    {
LABEL_3:
      v171 = _mm_cvtsi128_si32(v5);
      v10 = ((v171 & 0x7F800000u) >> 23) - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v6) > 0.0 )
        goto LABEL_4;
      goto LABEL_156;
    }
  }
  else
  {
    v8 = _mm_cvtsi128_si32(v4);
    v9 = ((v8 & 0x7F800000u) >> 23) - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v5) > 0.0 )
      goto LABEL_3;
  }
  v10 = -127;
  v171 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v6) > 0.0 )
  {
LABEL_4:
    v169 = _mm_cvtsi128_si32(v6);
    v191 = ((v169 & 0x7F800000u) >> 23) - 127;
    if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
      goto LABEL_5;
    goto LABEL_157;
  }
LABEL_156:
  v191 = -127;
  v169 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
  {
LABEL_5:
    v165 = _mm_cvtsi128_si32(v7);
    v184 = ((v165 & 0x7F800000u) >> 23) - 127;
    if ( v9 >= 0 )
      goto LABEL_6;
    goto LABEL_158;
  }
LABEL_157:
  v184 = -127;
  v165 = 0;
  if ( v9 >= 0 )
  {
LABEL_6:
    v11 = v8 & 0x7FFFFF | 0x800000;
    if ( v9 <= 23 )
      v12 = v11 >> (23 - v9);
    else
      v12 = v11 << (v9 - 23);
    LODWORD(v218) = v8 & 0x80000000 | (v12 * ((v8 >> 31) | 1)) & 0x7FFFFFFF;
    if ( v10 >= 0 )
      goto LABEL_9;
    goto LABEL_159;
  }
LABEL_158:
  v218 = 0.0;
  if ( v10 >= 0 )
  {
LABEL_9:
    v13 = v171 & 0x7FFFFF | 0x800000;
    if ( v10 <= 23 )
      v14 = v13 >> (23 - v10);
    else
      v14 = v13 << (v10 - 23);
    v15 = v171 & 0x80000000 | (((v171 >> 31) | 1) * v14) & 0x7FFFFFFF;
    goto LABEL_12;
  }
LABEL_159:
  *(float *)&v15 = 0.0;
LABEL_12:
  v219 = *(float *)&v15;
  if ( v191 < 0 )
  {
    *(float *)&v18 = 0.0;
  }
  else
  {
    v16 = v169 & 0x7FFFFF | 0x800000;
    if ( v191 <= 23 )
      v17 = v16 >> (23 - v191);
    else
      v17 = v16 << (v191 - 23);
    v18 = v169 & 0x80000000 | (((v169 >> 31) | 1) * v17) & 0x7FFFFFFF;
  }
  v220 = *(float *)&v18;
  if ( v184 < 0 )
  {
    v21 = 0;
  }
  else
  {
    v19 = v165 & 0x7FFFFF | 0x800000;
    if ( v184 <= 23 )
      v20 = v19 >> (23 - v184);
    else
      v20 = v19 << (v184 - 23);
    v21 = v165 & 0x80000000 | (v20 * ((v165 >> 31) | 1)) & 0x7FFFFFFF;
  }
  v221 = v21;
  *(float *)v209 = v218;
  *(float *)&v209[2] = v220;
  v170 = nullptr;
  *(float *)&v209[1] = v219;
  v209[3] = v21;
  v192 = *(uint32_t *)(a1 + 164);
  v22 = v192;
  if ( v192 == -16
    || (LODWORD(v218) = v192 + 16,
        v170 = (__m128i *)(*(int (**)(uint32_t *, float *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                            (uint32_t *)(hkContainerTempAllocator::s_alloc),
                            &v218),
        v132 = LODWORD(v218),
        v22 = *(uint32_t *)(a1 + 164),
        v218 == 0.0) )
  {
    v132 = 0x80000000;
  }
  v23 = v22 >> 4;
  v24 = 0;
  if ( v23 >= 0 )
  {
    v185 = v23 + 1;
    do
    {
      v25 = v24++;
g4_m128_lane<int32_t>(v170[v25], 0) = 0;
g4_m128_lane<int32_t>(v170[v25], 1) = 0;
g4_m128_lane<int32_t>(v170[v25], 2) = 0;
g4_m128_lane<int32_t>(v170[v25], 3) = 0;
    }
    while ( v24 != v185 );
  }
  v156 = 0;
  v155 = 17;
  v26 = *((int **)a2 + 7);
  if ( v26 == nullptr )
    v26 = (int *)(a1 + 172);
  v152 = v26;
  do
  {
    v27 = v152[1];
    v28 = *v152;
    v193 = v209[v156];
    if ( v193 >= *(uint16_t *)(*v152 + 4 * (v27 >> 1)) )
    {
      v175 = v28 + 16;
      v99 = v28 + 4 * v27 - 8;
      if ( v28 + 16 > v99 )
      {
        v100 = (uint16_t *)(v28 + 4 * v27 - 8);
      }
      else if ( v193 >= *(uint16_t *)(v28 + 4 * v27 - 20) )
      {
        v100 = (uint16_t *)(v28 + 4 * v27 - 8);
      }
      else
      {
        v100 = (uint16_t *)(v28 + 4 * v27 - 8);
        do
        {
g4_m128_lane<int8_t>(*(v170), v100[1]) ^= v155;
          v101 = (char *)v100 - v99;
          v100 -= 8;
g4_m128_lane<int8_t>(*(v170), *(uint16_t *)&v101[v99 - 2]) ^= v155;
g4_m128_lane<int8_t>(*(v170), *(uint16_t *)&v101[v99 - 6]) ^= v155;
g4_m128_lane<int8_t>(*(v170), *(uint16_t *)&v101[v99 - 10]) ^= v155;
        }
        while ( v175 <= (unsigned int)(uintptr_t)(v100) && v193 < *(v100 - 6) );
      }
      if ( v193 < *v100 )
      {
        v102 = v193;
        v199 = v100;
        do
        {
          v103 = v199;
          v199 -= 2;
g4_m128_lane<int8_t>(*(v170), v103[1]) ^= v155;
        }
        while ( v102 < *v199 );
        v100 = v199;
      }
      v29 = v100 + 2;
    }
    else
    {
      v166 = v28 + 4 * v27 - 16;
      v172 = v28 + 4;
      if ( v166 <= v28 + 4 )
      {
        v29 = (uint16_t *)(v28 + 4);
      }
      else if ( v193 < *(uint16_t *)(v28 + 16) )
      {
        v29 = (uint16_t *)(v28 + 4);
      }
      else
      {
        v29 = (uint16_t *)(v28 + 4);
        v186 = -(v28 + 4);
        v163 = v28 + 8;
        v160 = v28 + 12;
        v158 = v28 + 16;
        do
        {
g4_m128_lane<int8_t>(*(v170), v29[1]) ^= v155;
          v30 = (char *)v29 + v186;
          v29 += 8;
g4_m128_lane<int8_t>(*(v170), *(uint16_t *)&v30[v163 + 2]) ^= v155;
g4_m128_lane<int8_t>(*(v170), *(uint16_t *)&v30[v160 + 2]) ^= v155;
g4_m128_lane<int8_t>(*(v170), *(uint16_t *)&v30[v158 + 2]) ^= v155;
        }
        while ( v166 > (unsigned int)(uintptr_t)(v29) && v193 >= *(uint16_t *)((char *)v29 + v186 + v172 + 12) );
      }
      if ( v193 >= *v29 )
      {
        v31 = v193;
        v194 = v29;
        do
        {
          v32 = v194;
          v194 += 2;
g4_m128_lane<int8_t>(*(v170), v32[1]) ^= v155;
        }
        while ( v31 >= *v194 );
        v29 = v194;
      }
    }
    v33 = v156;
    v155 *= 2;
    ++v156;
    v152 += 3;
    (&v200)[v33] = v29;
  }
  while ( v156 != 3 );
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v34 = *address;
  v144 = *((char **)*address + 3);
  v134 = (4 * *((uint32_t *)a2 + 4) + 127) & 0xFFFFFF80;
  if ( v134 <= *((uint32_t *)*address + 2)
    && (unsigned int)(v35 = v134 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v34 + 4) )
  {
    *((uint32_t *)v34 + 3) = v35;
  }
  else
  {
    v144 = (char *)hkLifoAllocator::allocateFromNewSlab(v34, v134);
  }
  for ( i = 0; *((uint32_t *)a2 + 4) > i; ++i )
    *(uint32_t *)&v144[4 * i] = 1065353216;
  v187 = v170;
  v37 = v144;
  v195 = *(uint32_t **)(a1 + 160);
  v167 = (unsigned int)(uintptr_t)(g4_m128_lane<uint32_t>(*(v170), (*(int *)(a1 + 164) >> 2) + 1));
  if ( v167 > (unsigned int)(uintptr_t)(v170) )
  {
    while ( ((g4_m128_lane<int32_t>(*(v187), 0) + 16843009) & 0x8080808) == 0 )
    {
      if ( ((g4_m128_lane<int32_t>(*(v187), 1) + 16843009) & 0x8080808) != 0 )
      {
LABEL_55:
        v195 += 16;
        v187 = (__m128i *)((char *)v187 + 4);
        if ( (unsigned int)(uintptr_t)(v187) >= v167 )
          goto LABEL_56;
      }
      else
      {
        if ( ((g4_m128_lane<int32_t>(*(v187), 2) + 16843009) & 0x8080808) != 0 )
        {
          v195 += 32;
          v187 = (__m128i *)((char *)v187 + 8);
        }
        else
        {
          v195 += 48;
          v187 = (__m128i *)((char *)v187 + 12);
        }
        if ( (unsigned int)(uintptr_t)(v187) >= v167 )
          goto LABEL_56;
      }
    }
    if (g4_m128_lane<int8_t>(*(v187), 0) == 119 && (v195[3] & 1) == 0 && *((int *)a2 + 4) > 0 )
    {
      v119 = 0;
      v120 = v37;
      v121 = a3;
      for ( j = v195[3]; ; j = v195[3] )
      {
        v182 = v120;
        v123 = ((long double (*)(int, int, int))*(uint32_t *)(*(uint32_t *)v121 + 8))(v121, j, v119);
        v120 = v182;
        v183 = v123;
        v121 += a4;
        *(float *)&v120[4 * v119] = fminf(*(float *)&v120[4 * v119], v183);
        if ( *((uint32_t *)a2 + 4) <= ++v119 )
          break;
      }
      v37 = v120;
    }
    if (g4_m128_lane<int8_t>(*(v187), 1) == 119 && (v195[7] & 1) == 0 && *((int *)a2 + 4) > 0 )
    {
      v114 = 0;
      v115 = v37;
      v116 = a3;
      for ( k = v195[7]; ; k = v195[7] )
      {
        v180 = v115;
        v118 = ((long double (*)(int, int, int))*(uint32_t *)(*(uint32_t *)v116 + 8))(v116, k, v114);
        v115 = v180;
        v181 = v118;
        v116 += a4;
        *(float *)&v115[4 * v114] = fminf(*(float *)&v115[4 * v114], v181);
        if ( *((uint32_t *)a2 + 4) <= ++v114 )
          break;
      }
      v37 = v115;
    }
    if (g4_m128_lane<int8_t>(*(v187), 2) == 119 && (v195[11] & 1) == 0 && *((int *)a2 + 4) > 0 )
    {
      v109 = 0;
      v110 = v37;
      v111 = a3;
      for ( m = v195[11]; ; m = v195[11] )
      {
        v178 = v110;
        v113 = ((long double (*)(int, int, int))*(uint32_t *)(*(uint32_t *)v111 + 8))(v111, m, v109);
        v110 = v178;
        v179 = v113;
        v111 += a4;
        *(float *)&v110[4 * v109] = fminf(*(float *)&v110[4 * v109], v179);
        if ( *((uint32_t *)a2 + 4) <= ++v109 )
          break;
      }
      v37 = v110;
    }
    if (g4_m128_lane<int8_t>(*(v187), 3) == 119 && (v195[15] & 1) == 0 && *((int *)a2 + 4) > 0 )
    {
      v104 = 0;
      v105 = v37;
      v106 = a3;
      for ( n = v195[15]; ; n = v195[15] )
      {
        v176 = v105;
        v108 = ((long double (*)(int, int, int))*(uint32_t *)(*(uint32_t *)v106 + 8))(v106, n, v104);
        v105 = v176;
        v177 = v108;
        v106 += a4;
        *(float *)&v105[4 * v104] = fminf(*(float *)&v105[4 * v104], v177);
        if ( *((uint32_t *)a2 + 4) <= ++v104 )
          break;
      }
      v37 = v105;
    }
    goto LABEL_55;
  }
LABEL_56:
g4_m128_lane<int8_t>(*(v170), 0) = -120;
  if ( *((int *)a2 + 4) <= 0 )
    goto LABEL_138;
  v38 = *(int *)(a1 + 164) >> 2;
  v164 = 0;
  v135 = (unsigned int)(uintptr_t)(g4_m128_lane<uint32_t>(*(v170), v38 + 1));
  v131 = ((unsigned int)(4 * v38 + 3) >> 3) + 1;
  v39 = &v170[v131 >> 1];
  if ( v131 <= 1 || 2 * (v131 >> 1) == 0 )
    v39 = v170;
  v133 = (int *)v39;
  do
  {
    v204 = v201;
    v205 = v202;
    v40 = *(float *)&v144[4 * v164];
    v41 = *((uint32_t *)a2 + 5) + v164 * *((uint32_t *)a2 + 6);
    v42 = *(float *)(v41 + 4);
g4_m128_raw(v43) = *(unsigned int *)(v41 + 8);
g4_m128_raw(v44) = *((unsigned int *)a2 + 3);
    v203 = v200;
    v168 = v40;
    v45 = *(float *)v41;
    v157 = v42;
    v46 = v44;
    v146 = *(float *)(v41 + 12);
    v188 = *(float *)(a1 + 96);
    v153 = a2[1];
    v196 = (float)(*(float *)v41 - *a2) * v188;
g4_m128_raw(v47) = LODWORD(v157);
    v173 = *(float *)(a1 + 100);
    v139 = *(float *)g4_m128_ptr<int32_t>(v43);
    v150 = a2[2];
    v161 = *(float *)(a1 + 104);
    *(float *)g4_m128_ptr<int32_t>(v47) = (float)(v157 - v153) * v173;
    v49 = v43;
g4_m128_raw(v48) = LODWORD(v146);
    *(float *)g4_m128_ptr<int32_t>(v48) = v146 - *(float *)g4_m128_ptr<int32_t>(v44);
    *(float *)g4_m128_ptr<int32_t>(v49) = (float)(*(float *)g4_m128_ptr<int32_t>(v43) - v150) * v161;
    v50 = v48;
    *(float *)g4_m128_ptr<int32_t>(v50) = *(float *)g4_m128_ptr<int32_t>(v48) * *(float *)(a1 + 108);
    v159 = *(float *)(a1 + 108);
    v149 = fabs(v196);
    v142 = fabs(*(float *)g4_m128_ptr<int32_t>(v47));
    v51 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v196)));
    v52 = 2130706432 - v51;
    v53 = (v51 ^ (v51 + 2139095040)) >> 31;
    v54 = _mm_cvtsi128_si32(v47);
    v148 = fabs(*(float *)g4_m128_ptr<int32_t>(v49));
    v141 = fabs(*(float *)g4_m128_ptr<int32_t>(v50));
g4_m128_lane<int32_t>(v43, 0) = v52 & v53;
    v55 = 2130706432 - v54;
    v143 = *(float *)g4_m128_ptr<int32_t>(v50);
    *(float *)g4_m128_ptr<int32_t>(v43) = (float)(2.0
                                    - (float)(v196
                                            * (float)((float)(2.0 - (float)(v196 * *(float *)g4_m128_ptr<int32_t>(v43)))
                                                    * *(float *)g4_m128_ptr<int32_t>(v43))))
                            * (float)((float)(2.0 - (float)(v196 * *(float *)g4_m128_ptr<int32_t>(v43))) * *(float *)g4_m128_ptr<int32_t>(v43));
    v56 = (v54 ^ (v54 + 2139095040)) >> 31;
    v57 = _mm_cvtsi128_si32(v49);
    v58 = v55 & v56;
    v59 = 2130706432 - v57;
    v138 = *(float *)g4_m128_ptr<int32_t>(v43) * (float)(2.0 - (float)(v196 * *(float *)g4_m128_ptr<int32_t>(v43)));
    *(float *)g4_m128_ptr<int32_t>(v43) = (float)(2.0
                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v47)
                                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v47) * *(float *)&v58))
                                                    * *(float *)&v58)))
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v47) * *(float *)&v58)) * *(float *)&v58);
    v60 = v57 ^ (v57 + 2139095040);
    v61 = _mm_cvtsi128_si32(v50);
    v137 = *(float *)g4_m128_ptr<int32_t>(v43) * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v47) * *(float *)g4_m128_ptr<int32_t>(v43)));
    *(float *)g4_m128_ptr<int32_t>(v43) = (float)(2.0
                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v49)
                                            * (float)((float)(2.0
                                                            - (float)(*(float *)g4_m128_ptr<int32_t>(v49)
                                                                    * COERCE_FLOAT(v59 & (v60 >> 31))))
                                                    * COERCE_FLOAT(v59 & (v60 >> 31)))))
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v49) * COERCE_FLOAT(v59 & (v60 >> 31))))
                                    * COERCE_FLOAT(v59 & (v60 >> 31)));
    *(float *)g4_m128_ptr<int32_t>(v48) = *(float *)g4_m128_ptr<int32_t>(v43)
                            * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v49) * *(float *)g4_m128_ptr<int32_t>(v43)));
g4_m128_lane<int32_t>(v43, 0) = (2130706432 - v61) & ((v61 ^ (v61 + 2139095040)) >> 31);
    v145 = *(float *)g4_m128_ptr<int32_t>(v48);
    v136 = (float)((float)(2.0
                         - (float)(*(float *)g4_m128_ptr<int32_t>(v50)
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v50) * *(float *)g4_m128_ptr<int32_t>(v43)))
                                         * *(float *)g4_m128_ptr<int32_t>(v43))))
                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v50) * *(float *)g4_m128_ptr<int32_t>(v43)))
                         * *(float *)g4_m128_ptr<int32_t>(v43)))
         * (float)(2.0
                 - (float)(*(float *)g4_m128_ptr<int32_t>(v50)
                         * (float)((float)(2.0
                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v50)
                                                 * (float)((float)(2.0
                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v50)
                                                                         * *(float *)g4_m128_ptr<int32_t>(v43)))
                                                         * *(float *)g4_m128_ptr<int32_t>(v43))))
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v50) * *(float *)g4_m128_ptr<int32_t>(v43)))
                                         * *(float *)g4_m128_ptr<int32_t>(v43)))));
g4_m128_lane<int32_t>(v48, 0) = *(uint32_t *)(a1 + 64);
g4_m128_raw(v62) = *(unsigned int *)a2;
    v147 = *(float *)(a1 + 68);
    v63 = *(float *)(a1 + 72);
g4_m128_lane<int32_t>(v50, 0) = *(uint32_t *)(a1 + 76);
    *(float *)g4_m128_ptr<int32_t>(v62) = (float)(*a2 + *(float *)g4_m128_ptr<int32_t>(v48)) * v188;
    v64 = v45 + *(float *)g4_m128_ptr<int32_t>(v48);
    v65 = v62;
    v140 = (float)(*(float *)g4_m128_ptr<int32_t>(v46) + *(float *)g4_m128_ptr<int32_t>(v50)) * v159;
    v154 = (float)(v153 + v147) * v173;
    v151 = (float)(v150 + v63) * v161;
    *(float *)g4_m128_ptr<int32_t>(v46) = v140 * 0.00000011920929f;
    v66 = COERCE_FLOAT(_mm_cvtsi128_si32(v46));
    v67 = fabs((float)(v64 * v188) * 0.00000011920929f);
    v68 = fabs((float)((float)(v157 + v147) * v173) * 0.00000011920929f);
    v189 = fabs((float)((float)(v63 + v139) * v161) * 0.00000011920929f);
    v174 = *(float *)g4_m128_ptr<int32_t>(v62);
    *(float *)g4_m128_ptr<int32_t>(v65) = *(float *)g4_m128_ptr<int32_t>(v62) * 0.00000011920929f;
    v69 = fabs((float)((float)(v146 + *(float *)g4_m128_ptr<int32_t>(v50)) * v159) * 0.00000011920929f);
    v70 = COERCE_FLOAT(_mm_cvtsi128_si32(v65));
g4_m128_raw(v71) = LODWORD(v154);
    *(float *)g4_m128_ptr<int32_t>(v71) = v154 * 0.00000011920929f;
    v162 = fabs(v70) > v149;
    v72 = fabs(COERCE_FLOAT(_mm_cvtsi128_si32(v71))) > v142;
    v73 = v72 + v72 + 4;
    if ( fabs(v151 * 0.00000011920929f) <= v148 )
      v73 = 2 * v72;
    v74 = fabs(v66) > v141;
    v75 = 8 * v74 + 2;
    v76 = 8 * v74;
    v213 = v136;
    v77 = (v162 || v67 > v149) | v73;
    if ( v68 > v142 )
      v76 = v75;
    v78 = 4 * (v189 > v148) + 8;
    if ( v69 <= v141 )
      v78 = 4 * (v189 > v148);
    v212 = v145;
    v79 = v76 | v78 | v77;
    v211 = v137;
    v80 = *(float *)(a1 + 220);
    v210 = v138;
    v214 = (float)(v174 - v80) * v138;
    v215 = (float)(v154 - v80) * v137;
    v216 = (float)(v151 - v80) * v145;
    v217 = (float)(v140 - v80) * v136;
    v81 = 4 * (*(float *)g4_m128_ptr<int32_t>(v49) < 0.0);
    if ( v143 < 0.0 )
      v81 = 4 * (*(float *)g4_m128_ptr<int32_t>(v49) < 0.0) + 8;
    if ( (v79 & 1) != 0 )
    {
      v210 = 0.0;
      v214 = -2.0;
    }
    else if ( (v81 & 1 | (v196 < 0.0)) != 0 )
    {
      v206 = -4;
      v203 = v200 - 2;
    }
    else
    {
      v206 = 4;
    }
    if ( (v79 & 2) != 0 )
    {
      v211 = 0.0;
      v215 = -2.0;
    }
    else if ( (v81 & 2 | (uint8_t)(2 * (*(float *)g4_m128_ptr<int32_t>(v47) < 0.0))) != 0 )
    {
      v207 = -4;
      v204 = v201 - 2;
    }
    else
    {
      v207 = 4;
    }
    if ( (v79 & 4) != 0 )
    {
      v212 = 0.0;
      v82 = 0.0;
      v216 = -2.0;
      v83 = v205;
      v84 = -2.0;
    }
    else
    {
      v208 = 4;
      if ( (v81 & 4) != 0 )
      {
        v208 = -4;
        v82 = v212;
        v83 = v205 - 2;
        v84 = v216;
        v205 -= 2;
      }
      else
      {
        v82 = v212;
        v83 = v205;
        v84 = v216;
      }
    }
    v85 = (float)*v83;
    v86 = *v204;
    v87 = *v203;
    v88 = (float)(v85 * v82) - v84;
    v220 = v88;
    v89 = (float)((float)v86 * v211) - v215;
    v90 = (float)((float)v87 * v210) - v214;
    v219 = v89;
    v218 = v90;
    while ( 1 )
    {
      v91 = 1;
      if ( v90 <= v89 )
      {
        v89 = v90;
        LOBYTE(v91) = 0;
      }
      v190 = 2;
      if ( v89 <= v88 )
      {
        v88 = v89;
        v190 = v91;
      }
      if ( v88 > v168 )
        break;
      v197 = (&v203)[v190];
      v92 = v197;
      while ( 1 )
      {
        v95 = v92[1];
        v96 = &g4_m128_lane<int8_t>(*(v170), v95);
        v97 = *v96 ^ (1 << (v190 + 4));
        *v96 = v97;
        if ( v97 > 0x6Fu )
          break;
LABEL_84:
        v93 = *v92;
        v92 = (uint16_t *)((char *)v197 + *(&v206 + v190));
        (&v203)[v190] = v92;
        v197 = v92;
        v94 = *v92;
        if ( v93 != (uint16_t)v94 )
        {
          *(&v218 + v190) = (float)((float)((float)((float)0 * 65536.0) + (float)v94) * *(&v210 + v190))
                          - *(&v214 + v190);
          goto LABEL_127;
        }
      }
      if ( v95 != 0 )
      {
        v98 = *(uint32_t *)(a1 + 160) + 16 * v95;
        if ( (*(uint32_t *)(v98 + 12) & 1) == 0 )
        {
          v198 = ((long double (*)(int, uint32_t, signed int))*(uint32_t *)(*(uint32_t *)a3 + 8))(
                   a3,
                   *(uint32_t *)(v98 + 12),
                   v164);
          if ( v198 <= v168 )
            v168 = v198;
          v197 = (&v203)[v190];
        }
        goto LABEL_84;
      }
      *(&v218 + v190) = 2.0;
LABEL_127:
      v88 = v220;
      v90 = v218;
      v89 = v219;
    }
    v124 = *((uint32_t *)a2 + 4);
    if ( v164 < v124 - 1 && v135 > (unsigned int)(uintptr_t)(v170) )
    {
      if ( v131 <= 1 || 2 * (v131 >> 1) == 0 )
        goto LABEL_135;
      v125 = v170;
      v126 = 0;
      do
      {
        v127 = _mm_and_si128(*v125, G4_BITCAST<__m128i>(xmmword_1C7CA80));
        ++v126;
        ++v125;
        v125[-1] = _mm_or_si128(_mm_slli_epi32(v127, 4u), v127);
      }
      while ( v126 < v131 >> 1 );
      if ( 2 * (v131 >> 1) != v131 )
      {
LABEL_135:
        v128 = v133[1] & 0xF0F0F0F | (16 * (v133[1] & 0xF0F0F0F));
        *v133 = *v133 & 0xF0F0F0F | (16 * (*v133 & 0xF0F0F0F));
        v133[1] = v128;
      }
      v124 = *((uint32_t *)a2 + 4);
    }
    ++v164;
    a3 += a4;
  }
  while ( v164 < v124 );
LABEL_138:
  result = *address;
  if ( v134 > *((uint32_t *)*address + 2) || *((char **)result + 3) != &v144[v134] || v144 == *((char **)result + 5) )
    result = hkLifoAllocator::slowBlockFree(*address, v144, v134);
  else
    *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v144);
  if ( v132 >= 0 )
    return (hkLifoAllocator::Self *)(*(int (**)(uint32_t *, __m128i *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                                (uint32_t *)(hkContainerTempAllocator::s_alloc),
                                v170,
                                v132 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::castAabb  (binary VA: 0x16a9af0)
// Original: hkp3AxisSweep::castAabb
// ----------------------------------------------------------------------------
int hkp3AxisSweep::castAabb(int a1, int a2, int a3)
{
  float v3; // xmm6_4
  float v4; // xmm2_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  __m128i v30;
  int v31;
  signed int v32;
  int v33;
  int v34;
  int v35;
  float v36;
  int v37;
  int v38;
  float v39;
  int v40;
  int v41;
  float v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int *v50;
  int v51;
  int v52;
  uint16_t *v53;
  char *v54;
  uint16_t v55; // si
  unsigned int v56;
  uint16_t *v57;
  unsigned int v58;
  uint16_t v59;
  int v60;
  uint8_t *v61;
  uint32_t *v62;
  unsigned int v63;
  float v64; // xmm0_4
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  __m128i v70;
  __m128i v71;
  int v72;
  __m128i v73;
  __m128i v74;
  int v75; // xmm6_4
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  float v81; // xmm6_4
  int v82; // xmm6_4
  float v83; // xmm7_4
  int v84;
  int v85;
  float v86; // xmm6_4
  int v87; // xmm6_4
  float v88; // xmm6_4
  float v89; // xmm7_4
  float v90; // xmm1_4
  char v91;
  float v92; // xmm6_4
  char v93; // di
  float v94; // xmm4_4
  float v95; // xmm5_4
  float v96; // xmm0_4
  float v97; // xmm6_4
  float v98; // xmm5_4
  float v99; // xmm6_4
  bool v100;
  float v101; // xmm3_4
  char v102; // si
  char v103;
  float v104; // xmm5_4
  char v105; // si
  char v106;
  char v107; // si
  uint16_t *v108;
  uint16_t *v109;
  uint16_t *v110;
  uint16_t *v111;
  int v112;
  float v113; // xmm5_4
  int v114;
  int v115;
  float v116; // xmm6_4
  int v117;
  float v118; // xmm6_4
  float v119; // xmm3_4
  int result;
  float v121; // xmm5_4
  float v122; // xmm1_4
  float v123; // xmm2_4
  float v124; // xmm4_4
  float v125; // xmm0_4
  uint16_t *v126;
  uint16_t v127;
  uint16_t v128; // di
  int v129;
  uint8_t *v130;
  uint8_t v131;
  int v132;
  float v133; // xmm1_4
  float v134; // xmm1_4
  uint16_t *v135;
  int16_t v136;
  uint8_t *v137;
  int v138;
  float v139; // xmm1_4
  float v140; // xmm1_4
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  uint16_t *v144;
  char *v145;
  uint16_t v146; // si
  uint16_t *v147;
  uint16_t *v148;
  uint16_t v149;
  int v150;
  uint16_t *v151;
  typedef int _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef int _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef float _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef float _g4_t_v178;
  typedef float _g4_t_v179;
  typedef float _g4_t_v180;
  typedef int *_g4_t_v181;
  typedef float _g4_t_v182;
  typedef float _g4_t_v183;
  typedef float _g4_t_v184;
  typedef signed int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef float _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef float _g4_t_v190;
  typedef signed int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef float _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef float _g4_t_v196;
  typedef signed int _g4_t_v197;
  typedef int _g4_t_v198;
  typedef float _g4_t_v199;
  typedef float _g4_t_v200;
  typedef int _g4_t_v201;
  typedef signed int _g4_t_v202;
  typedef signed int _g4_t_v203;
  typedef unsigned int _g4_t_v204;
  typedef float _g4_t_v205;
  typedef uint16_t *_g4_t_v206;
  typedef int _g4_t_v207;
  typedef unsigned int _g4_t_v208;
  typedef char _g4_t_v209;
  typedef int _g4_t_v210;
  typedef unsigned int _g4_t_v211;
  typedef unsigned int _g4_t_v212;
  typedef unsigned int _g4_t_v213;
  typedef unsigned int _g4_t_v214;
  typedef unsigned int _g4_t_v215;
  typedef float _g4_t_v216;
  typedef uint16_t *_g4_t_v217;
  typedef int _g4_t_v218;
  typedef signed int _g4_t_v219;
  typedef uint8_t *_g4_t_v220;
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef char _g4_t_v223;
  typedef int _g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef int _g4_t_v227;
  typedef float _g4_t_v228;
  typedef uint16_t *_g4_t_v229;
  typedef uint16_t *_g4_t_v230;
  typedef float _g4_t_v231;
  typedef uint16_t *_g4_t_v232;
  typedef float _g4_t_v233;
  typedef signed int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef uint16_t *_g4_t_v237;
  typedef float _g4_t_v238;
  typedef float _g4_t_v239;
  typedef float _g4_t_v240;
  typedef float _g4_t_v241;
  typedef float _g4_t_v242;
  typedef uint16_t *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef unsigned int _g4_t_v245;
  typedef uint16_t *_g4_t_v246;
  typedef int _g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef uint16_t *_g4_t_v256;
  typedef uint16_t *_g4_t_v257;
  typedef uint16_t *_g4_t_v258;
  typedef uint16_t *_g4_t_v259;
  typedef uint16_t *_g4_t_v260;
  typedef uint16_t *_g4_t_v261;
  typedef uint32_t _g4_t_v262[3];
  typedef uint32_t _g4_t_v263[3];
  typedef uint32_t _g4_t_v264[4];
  typedef uint32_t _g4_t_v265[4];
  typedef float _g4_t_v266;
  typedef float _g4_t_v267;
  typedef float _g4_t_v268;
  typedef float _g4_t_v269;
  typedef float _g4_t_v270;
  typedef float _g4_t_v271;
  typedef float _g4_t_v272;
  typedef float _g4_t_v273;
  typedef float _g4_t_v274;
  typedef float _g4_t_v275;
  typedef float _g4_t_v276;
  typedef float _g4_t_v277;
  typedef float _g4_t_v278;
  typedef float _g4_t_v279;
  typedef float _g4_t_v280;
  typedef float _g4_t_v281;
  typedef float _g4_t_v282;
  typedef float _g4_t_v283;
  typedef unsigned int _g4_t_v284;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v152)) > _g4_s0 ? (4u + sizeof(_g4_t_v152)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v153)) > _g4_s1 ? (8u + sizeof(_g4_t_v153)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v154)) > _g4_s2 ? (12u + sizeof(_g4_t_v154)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v155)) > _g4_s3 ? (16u + sizeof(_g4_t_v155)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v156)) > _g4_s4 ? (20u + sizeof(_g4_t_v156)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v157)) > _g4_s5 ? (24u + sizeof(_g4_t_v157)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v158)) > _g4_s6 ? (28u + sizeof(_g4_t_v158)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v159)) > _g4_s7 ? (32u + sizeof(_g4_t_v159)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v160)) > _g4_s8 ? (36u + sizeof(_g4_t_v160)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v161)) > _g4_s9 ? (40u + sizeof(_g4_t_v161)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v162)) > _g4_s10 ? (40u + sizeof(_g4_t_v162)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v163)) > _g4_s11 ? (44u + sizeof(_g4_t_v163)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v164)) > _g4_s12 ? (48u + sizeof(_g4_t_v164)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v165)) > _g4_s13 ? (48u + sizeof(_g4_t_v165)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v166)) > _g4_s14 ? (52u + sizeof(_g4_t_v166)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v167)) > _g4_s15 ? (52u + sizeof(_g4_t_v167)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v168)) > _g4_s16 ? (56u + sizeof(_g4_t_v168)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v169)) > _g4_s17 ? (56u + sizeof(_g4_t_v169)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v170)) > _g4_s18 ? (60u + sizeof(_g4_t_v170)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v171)) > _g4_s19 ? (60u + sizeof(_g4_t_v171)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v172)) > _g4_s20 ? (64u + sizeof(_g4_t_v172)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v173)) > _g4_s21 ? (68u + sizeof(_g4_t_v173)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v174)) > _g4_s22 ? (68u + sizeof(_g4_t_v174)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v175)) > _g4_s23 ? (68u + sizeof(_g4_t_v175)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v176)) > _g4_s24 ? (72u + sizeof(_g4_t_v176)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v177)) > _g4_s25 ? (72u + sizeof(_g4_t_v177)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v178)) > _g4_s26 ? (76u + sizeof(_g4_t_v178)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v179)) > _g4_s27 ? (76u + sizeof(_g4_t_v179)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v180)) > _g4_s28 ? (80u + sizeof(_g4_t_v180)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v181)) > _g4_s29 ? (80u + sizeof(_g4_t_v181)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v182)) > _g4_s30 ? (80u + sizeof(_g4_t_v182)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v183)) > _g4_s31 ? (84u + sizeof(_g4_t_v183)) : _g4_s31,
    _g4_s33 = (84u + sizeof(_g4_t_v184)) > _g4_s32 ? (84u + sizeof(_g4_t_v184)) : _g4_s32,
    _g4_s34 = (88u + sizeof(_g4_t_v185)) > _g4_s33 ? (88u + sizeof(_g4_t_v185)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v186)) > _g4_s34 ? (88u + sizeof(_g4_t_v186)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v187)) > _g4_s35 ? (88u + sizeof(_g4_t_v187)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v188)) > _g4_s36 ? (92u + sizeof(_g4_t_v188)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v189)) > _g4_s37 ? (92u + sizeof(_g4_t_v189)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v190)) > _g4_s38 ? (92u + sizeof(_g4_t_v190)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v191)) > _g4_s39 ? (96u + sizeof(_g4_t_v191)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v192)) > _g4_s40 ? (96u + sizeof(_g4_t_v192)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v193)) > _g4_s41 ? (96u + sizeof(_g4_t_v193)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v194)) > _g4_s42 ? (100u + sizeof(_g4_t_v194)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v195)) > _g4_s43 ? (100u + sizeof(_g4_t_v195)) : _g4_s43,
    _g4_s45 = (100u + sizeof(_g4_t_v196)) > _g4_s44 ? (100u + sizeof(_g4_t_v196)) : _g4_s44,
    _g4_s46 = (104u + sizeof(_g4_t_v197)) > _g4_s45 ? (104u + sizeof(_g4_t_v197)) : _g4_s45,
    _g4_s47 = (104u + sizeof(_g4_t_v198)) > _g4_s46 ? (104u + sizeof(_g4_t_v198)) : _g4_s46,
    _g4_s48 = (104u + sizeof(_g4_t_v199)) > _g4_s47 ? (104u + sizeof(_g4_t_v199)) : _g4_s47,
    _g4_s49 = (104u + sizeof(_g4_t_v200)) > _g4_s48 ? (104u + sizeof(_g4_t_v200)) : _g4_s48,
    _g4_s50 = (104u + sizeof(_g4_t_v201)) > _g4_s49 ? (104u + sizeof(_g4_t_v201)) : _g4_s49,
    _g4_s51 = (108u + sizeof(_g4_t_v202)) > _g4_s50 ? (108u + sizeof(_g4_t_v202)) : _g4_s50,
    _g4_s52 = (108u + sizeof(_g4_t_v203)) > _g4_s51 ? (108u + sizeof(_g4_t_v203)) : _g4_s51,
    _g4_s53 = (108u + sizeof(_g4_t_v204)) > _g4_s52 ? (108u + sizeof(_g4_t_v204)) : _g4_s52,
    _g4_s54 = (108u + sizeof(_g4_t_v205)) > _g4_s53 ? (108u + sizeof(_g4_t_v205)) : _g4_s53,
    _g4_s55 = (108u + sizeof(_g4_t_v206)) > _g4_s54 ? (108u + sizeof(_g4_t_v206)) : _g4_s54,
    _g4_s56 = (108u + sizeof(_g4_t_v207)) > _g4_s55 ? (108u + sizeof(_g4_t_v207)) : _g4_s55,
    _g4_s57 = (108u + sizeof(_g4_t_v208)) > _g4_s56 ? (108u + sizeof(_g4_t_v208)) : _g4_s56,
    _g4_s58 = (108u + sizeof(_g4_t_v209)) > _g4_s57 ? (108u + sizeof(_g4_t_v209)) : _g4_s57,
    _g4_s59 = (112u + sizeof(_g4_t_v210)) > _g4_s58 ? (112u + sizeof(_g4_t_v210)) : _g4_s58,
    _g4_s60 = (112u + sizeof(_g4_t_v211)) > _g4_s59 ? (112u + sizeof(_g4_t_v211)) : _g4_s59,
    _g4_s61 = (112u + sizeof(_g4_t_v212)) > _g4_s60 ? (112u + sizeof(_g4_t_v212)) : _g4_s60,
    _g4_s62 = (112u + sizeof(_g4_t_v213)) > _g4_s61 ? (112u + sizeof(_g4_t_v213)) : _g4_s61,
    _g4_s63 = (112u + sizeof(_g4_t_v214)) > _g4_s62 ? (112u + sizeof(_g4_t_v214)) : _g4_s62,
    _g4_s64 = (112u + sizeof(_g4_t_v215)) > _g4_s63 ? (112u + sizeof(_g4_t_v215)) : _g4_s63,
    _g4_s65 = (112u + sizeof(_g4_t_v216)) > _g4_s64 ? (112u + sizeof(_g4_t_v216)) : _g4_s64,
    _g4_s66 = (112u + sizeof(_g4_t_v217)) > _g4_s65 ? (112u + sizeof(_g4_t_v217)) : _g4_s65,
    _g4_s67 = (112u + sizeof(_g4_t_v218)) > _g4_s66 ? (112u + sizeof(_g4_t_v218)) : _g4_s66,
    _g4_s68 = (116u + sizeof(_g4_t_v219)) > _g4_s67 ? (116u + sizeof(_g4_t_v219)) : _g4_s67,
    _g4_s69 = (116u + sizeof(_g4_t_v220)) > _g4_s68 ? (116u + sizeof(_g4_t_v220)) : _g4_s68,
    _g4_s70 = (120u + sizeof(_g4_t_v221)) > _g4_s69 ? (120u + sizeof(_g4_t_v221)) : _g4_s69,
    _g4_s71 = (120u + sizeof(_g4_t_v222)) > _g4_s70 ? (120u + sizeof(_g4_t_v222)) : _g4_s70,
    _g4_s72 = (120u + sizeof(_g4_t_v223)) > _g4_s71 ? (120u + sizeof(_g4_t_v223)) : _g4_s71,
    _g4_s73 = (120u + sizeof(_g4_t_v224)) > _g4_s72 ? (120u + sizeof(_g4_t_v224)) : _g4_s72,
    _g4_s74 = (120u + sizeof(_g4_t_v225)) > _g4_s73 ? (120u + sizeof(_g4_t_v225)) : _g4_s73,
    _g4_s75 = (120u + sizeof(_g4_t_v226)) > _g4_s74 ? (120u + sizeof(_g4_t_v226)) : _g4_s74,
    _g4_s76 = (120u + sizeof(_g4_t_v227)) > _g4_s75 ? (120u + sizeof(_g4_t_v227)) : _g4_s75,
    _g4_s77 = (120u + sizeof(_g4_t_v228)) > _g4_s76 ? (120u + sizeof(_g4_t_v228)) : _g4_s76,
    _g4_s78 = (120u + sizeof(_g4_t_v229)) > _g4_s77 ? (120u + sizeof(_g4_t_v229)) : _g4_s77,
    _g4_s79 = (120u + sizeof(_g4_t_v230)) > _g4_s78 ? (120u + sizeof(_g4_t_v230)) : _g4_s78,
    _g4_s80 = (120u + sizeof(_g4_t_v231)) > _g4_s79 ? (120u + sizeof(_g4_t_v231)) : _g4_s79,
    _g4_s81 = (120u + sizeof(_g4_t_v232)) > _g4_s80 ? (120u + sizeof(_g4_t_v232)) : _g4_s80,
    _g4_s82 = (124u + sizeof(_g4_t_v233)) > _g4_s81 ? (124u + sizeof(_g4_t_v233)) : _g4_s81,
    _g4_s83 = (124u + sizeof(_g4_t_v234)) > _g4_s82 ? (124u + sizeof(_g4_t_v234)) : _g4_s82,
    _g4_s84 = (124u + sizeof(_g4_t_v235)) > _g4_s83 ? (124u + sizeof(_g4_t_v235)) : _g4_s83,
    _g4_s85 = (124u + sizeof(_g4_t_v236)) > _g4_s84 ? (124u + sizeof(_g4_t_v236)) : _g4_s84,
    _g4_s86 = (124u + sizeof(_g4_t_v237)) > _g4_s85 ? (124u + sizeof(_g4_t_v237)) : _g4_s85,
    _g4_s87 = (124u + sizeof(_g4_t_v238)) > _g4_s86 ? (124u + sizeof(_g4_t_v238)) : _g4_s86,
    _g4_s88 = (124u + sizeof(_g4_t_v239)) > _g4_s87 ? (124u + sizeof(_g4_t_v239)) : _g4_s87,
    _g4_s89 = (124u + sizeof(_g4_t_v240)) > _g4_s88 ? (124u + sizeof(_g4_t_v240)) : _g4_s88,
    _g4_s90 = (124u + sizeof(_g4_t_v241)) > _g4_s89 ? (124u + sizeof(_g4_t_v241)) : _g4_s89,
    _g4_s91 = (124u + sizeof(_g4_t_v242)) > _g4_s90 ? (124u + sizeof(_g4_t_v242)) : _g4_s90,
    _g4_s92 = (124u + sizeof(_g4_t_v243)) > _g4_s91 ? (124u + sizeof(_g4_t_v243)) : _g4_s91,
    _g4_s93 = (124u + sizeof(_g4_t_v244)) > _g4_s92 ? (124u + sizeof(_g4_t_v244)) : _g4_s92,
    _g4_s94 = (124u + sizeof(_g4_t_v245)) > _g4_s93 ? (124u + sizeof(_g4_t_v245)) : _g4_s93,
    _g4_s95 = (124u + sizeof(_g4_t_v246)) > _g4_s94 ? (124u + sizeof(_g4_t_v246)) : _g4_s94,
    _g4_s96 = (128u + sizeof(_g4_t_v247)) > _g4_s95 ? (128u + sizeof(_g4_t_v247)) : _g4_s95,
    _g4_s97 = (132u + sizeof(_g4_t_v248)) > _g4_s96 ? (132u + sizeof(_g4_t_v248)) : _g4_s96,
    _g4_s98 = (136u + sizeof(_g4_t_v249)) > _g4_s97 ? (136u + sizeof(_g4_t_v249)) : _g4_s97,
    _g4_s99 = (144u + sizeof(_g4_t_v250)) > _g4_s98 ? (144u + sizeof(_g4_t_v250)) : _g4_s98,
    _g4_s100 = (148u + sizeof(_g4_t_v251)) > _g4_s99 ? (148u + sizeof(_g4_t_v251)) : _g4_s99,
    _g4_s101 = (152u + sizeof(_g4_t_v252)) > _g4_s100 ? (152u + sizeof(_g4_t_v252)) : _g4_s100,
    _g4_s102 = (160u + sizeof(_g4_t_v253)) > _g4_s101 ? (160u + sizeof(_g4_t_v253)) : _g4_s101,
    _g4_s103 = (164u + sizeof(_g4_t_v254)) > _g4_s102 ? (164u + sizeof(_g4_t_v254)) : _g4_s102,
    _g4_s104 = (168u + sizeof(_g4_t_v255)) > _g4_s103 ? (168u + sizeof(_g4_t_v255)) : _g4_s103,
    _g4_s105 = (176u + sizeof(_g4_t_v256)) > _g4_s104 ? (176u + sizeof(_g4_t_v256)) : _g4_s104,
    _g4_s106 = (180u + sizeof(_g4_t_v257)) > _g4_s105 ? (180u + sizeof(_g4_t_v257)) : _g4_s105,
    _g4_s107 = (184u + sizeof(_g4_t_v258)) > _g4_s106 ? (184u + sizeof(_g4_t_v258)) : _g4_s106,
    _g4_s108 = (188u + sizeof(_g4_t_v259)) > _g4_s107 ? (188u + sizeof(_g4_t_v259)) : _g4_s107,
    _g4_s109 = (192u + sizeof(_g4_t_v260)) > _g4_s108 ? (192u + sizeof(_g4_t_v260)) : _g4_s108,
    _g4_s110 = (196u + sizeof(_g4_t_v261)) > _g4_s109 ? (196u + sizeof(_g4_t_v261)) : _g4_s109,
    _g4_s111 = (200u + sizeof(_g4_t_v262)) > _g4_s110 ? (200u + sizeof(_g4_t_v262)) : _g4_s110,
    _g4_s112 = (212u + sizeof(_g4_t_v263)) > _g4_s111 ? (212u + sizeof(_g4_t_v263)) : _g4_s111,
    _g4_s113 = (224u + sizeof(_g4_t_v264)) > _g4_s112 ? (224u + sizeof(_g4_t_v264)) : _g4_s112,
    _g4_s114 = (240u + sizeof(_g4_t_v265)) > _g4_s113 ? (240u + sizeof(_g4_t_v265)) : _g4_s113,
    _g4_s115 = (256u + sizeof(_g4_t_v266)) > _g4_s114 ? (256u + sizeof(_g4_t_v266)) : _g4_s114,
    _g4_s116 = (260u + sizeof(_g4_t_v267)) > _g4_s115 ? (260u + sizeof(_g4_t_v267)) : _g4_s115,
    _g4_s117 = (264u + sizeof(_g4_t_v268)) > _g4_s116 ? (264u + sizeof(_g4_t_v268)) : _g4_s116,
    _g4_s118 = (268u + sizeof(_g4_t_v269)) > _g4_s117 ? (268u + sizeof(_g4_t_v269)) : _g4_s117,
    _g4_s119 = (272u + sizeof(_g4_t_v270)) > _g4_s118 ? (272u + sizeof(_g4_t_v270)) : _g4_s118,
    _g4_s120 = (276u + sizeof(_g4_t_v271)) > _g4_s119 ? (276u + sizeof(_g4_t_v271)) : _g4_s119,
    _g4_s121 = (280u + sizeof(_g4_t_v272)) > _g4_s120 ? (280u + sizeof(_g4_t_v272)) : _g4_s120,
    _g4_s122 = (284u + sizeof(_g4_t_v273)) > _g4_s121 ? (284u + sizeof(_g4_t_v273)) : _g4_s121,
    _g4_s123 = (288u + sizeof(_g4_t_v274)) > _g4_s122 ? (288u + sizeof(_g4_t_v274)) : _g4_s122,
    _g4_s124 = (292u + sizeof(_g4_t_v275)) > _g4_s123 ? (292u + sizeof(_g4_t_v275)) : _g4_s123,
    _g4_s125 = (296u + sizeof(_g4_t_v276)) > _g4_s124 ? (296u + sizeof(_g4_t_v276)) : _g4_s124,
    _g4_s126 = (300u + sizeof(_g4_t_v277)) > _g4_s125 ? (300u + sizeof(_g4_t_v277)) : _g4_s125,
    _g4_s127 = (304u + sizeof(_g4_t_v278)) > _g4_s126 ? (304u + sizeof(_g4_t_v278)) : _g4_s126,
    _g4_s128 = (308u + sizeof(_g4_t_v279)) > _g4_s127 ? (308u + sizeof(_g4_t_v279)) : _g4_s127,
    _g4_s129 = (312u + sizeof(_g4_t_v280)) > _g4_s128 ? (312u + sizeof(_g4_t_v280)) : _g4_s128,
    _g4_s130 = (320u + sizeof(_g4_t_v281)) > _g4_s129 ? (320u + sizeof(_g4_t_v281)) : _g4_s129,
    _g4_s131 = (324u + sizeof(_g4_t_v282)) > _g4_s130 ? (324u + sizeof(_g4_t_v282)) : _g4_s130,
    _g4_s132 = (328u + sizeof(_g4_t_v283)) > _g4_s131 ? (328u + sizeof(_g4_t_v283)) : _g4_s131,
    _g4_s133 = (332u + sizeof(_g4_t_v284)) > _g4_s132 ? (332u + sizeof(_g4_t_v284)) : _g4_s132
  };
  alignas(16) uint8_t _g4_sf[_g4_s133];
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 4u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 8u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 12u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 16u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 20u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 24u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 28u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 32u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 36u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 40u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 40u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 44u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 48u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 48u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 52u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 52u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 56u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 56u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 60u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 60u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 64u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 68u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 68u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 68u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 72u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 72u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 76u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 76u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 80u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 80u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 80u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 84u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 84u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 88u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 88u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 88u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 92u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 92u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 92u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 96u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 96u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 96u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 100u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 100u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 100u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 104u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 104u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 104u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 104u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 104u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 108u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 108u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 108u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 108u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 108u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 108u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 108u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 108u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 112u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 112u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 112u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 112u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 112u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 112u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 112u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 112u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 112u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 116u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 116u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 120u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 120u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 120u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 120u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 120u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 120u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 120u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 120u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 120u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 120u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 120u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 120u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 124u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 124u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 124u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 124u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 124u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 124u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 124u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 124u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 124u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 124u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 124u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 124u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 124u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 124u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 128u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 132u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 136u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 144u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 148u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 152u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 160u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 164u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 168u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 176u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 180u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 184u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 188u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 192u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 196u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 200u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 212u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 224u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 240u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 256u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 260u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 264u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 268u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 272u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 276u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 280u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 284u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 288u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 292u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 296u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 300u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 304u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 308u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 312u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 320u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 324u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 328u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 332u);

  v3 = *(float *)(a2 + 32);
  v4 = *(float *)(a2 + 40);
  v170 = *(float *)a2 - v3;
  v5 = *(float *)(a2 + 36);
  v163 = *(float *)a2 + v3;
  v168 = *(float *)(a2 + 4) - v5;
  v233 = *(float *)(a2 + 8);
  v161 = *(float *)(a2 + 4) + v5;
  v6 = *(float *)(a2 + 44);
  v166 = v233 - v4;
  v7 = *(float *)(a2 + 12);
  v160 = v233 + v4;
  v159 = v7 + v6;
  v164 = v7 - v6;
g4_m128_raw(v8) = *(unsigned int *)(a1 + 68);
g4_m128_raw(v9) = *(unsigned int *)(a1 + 64);
  v183 = *(float *)(a1 + 72);
g4_m128_raw(v11) = LODWORD(v170);
  v180 = *(float *)(a1 + 96);
  v178 = *(float *)(a1 + 100);
g4_m128_raw(v12) = LODWORD(v168);
  v176 = *(float *)(a1 + 104);
g4_m128_raw(v10) = *(unsigned int *)(a1 + 76);
  *(float *)g4_m128_ptr<int32_t>(v11) = fminf((float)(v170 + *(float *)g4_m128_ptr<int32_t>(v9)) * v180, hkp3AxisSweep::s_MaxVal);
g4_m128_raw(v13) = COERCE_UNSIGNED_INT(v233 - v4);
  *(float *)g4_m128_ptr<int32_t>(v12) = fminf((float)(v168 + *(float *)g4_m128_ptr<int32_t>(v8)) * v178, unk_20C7924);
  v173 = *(float *)(a1 + 108);
g4_m128_raw(v14) = LODWORD(v164);
  *(float *)g4_m128_ptr<int32_t>(v13) = fminf((float)(v166 + v183) * v176, unk_20C7928);
  *(float *)g4_m128_ptr<int32_t>(v14) = fminf((float)(v164 + *(float *)g4_m128_ptr<int32_t>(v10)) * v173, (*(const float *)unk_20C792C));
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
  {
    v202 = -127;
    v15 = 0;
  }
  else
  {
    v15 = _mm_cvtsi128_si32(v11);
    v202 = ((v15 & 0x7F800000u) >> 23) - 127;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v12) <= 0.0 )
  {
    v197 = -127;
    v16 = 0;
  }
  else
  {
    v16 = _mm_cvtsi128_si32(v12);
    v197 = ((v16 & 0x7F800000u) >> 23) - 127;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v13) <= 0.0 )
  {
    v191 = -127;
    v194 = 0;
  }
  else
  {
    v194 = _mm_cvtsi128_si32(v13);
    v191 = ((v194 & 0x7F800000u) >> 23) - 127;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v14) > 0.0 )
  {
    v17 = v202;
    v188 = _mm_cvtsi128_si32(v14);
    v185 = ((v188 & 0x7F800000u) >> 23) - 127;
    if ( v202 >= 0 )
      goto LABEL_9;
LABEL_190:
    v20 = v197;
    v281 = 0.0;
    if ( v197 >= 0 )
      goto LABEL_12;
LABEL_191:
    v23 = v191;
    v282 = 0.0;
    if ( v191 >= 0 )
      goto LABEL_15;
    goto LABEL_192;
  }
  v17 = v202;
  v185 = -127;
  v188 = 0;
  if ( v202 < 0 )
    goto LABEL_190;
LABEL_9:
  v18 = v15 & 0x7FFFFF | 0x800000;
  if ( v17 > 23 )
    v19 = v18 << (v17 - 23);
  else
    v19 = v18 >> (23 - v202);
  v20 = v197;
  LODWORD(v281) = v15 & 0x80000000 | (v19 * ((v15 >> 31) | 1)) & 0x7FFFFFFF;
  if ( v197 < 0 )
    goto LABEL_191;
LABEL_12:
  v21 = v16 & 0x7FFFFF | 0x800000;
  if ( v20 <= 23 )
    v22 = v21 >> (23 - v197);
  else
    v22 = v21 << (v20 - 23);
  v23 = v191;
  LODWORD(v282) = v16 & 0x80000000 | (v22 * ((v16 >> 31) | 1)) & 0x7FFFFFFF;
  if ( v191 >= 0 )
  {
LABEL_15:
    v24 = v194 & 0x7FFFFF | 0x800000;
    if ( v23 <= 23 )
      v25 = v24 >> (23 - v191);
    else
      v25 = v24 << (v23 - 23);
    v26 = v185;
    LODWORD(v283) = v194 & 0x80000000 | (v25 * ((v194 >> 31) | 1)) & 0x7FFFFFFF;
    if ( v185 >= 0 )
      goto LABEL_18;
LABEL_193:
    v29 = 0;
    goto LABEL_21;
  }
LABEL_192:
  v26 = v185;
  v283 = 0.0;
  if ( v185 < 0 )
    goto LABEL_193;
LABEL_18:
  v27 = v188 & 0x7FFFFF | 0x800000;
  if ( v26 <= 23 )
    v28 = v27 >> (23 - v185);
  else
    v28 = v27 << (v26 - 23);
  v29 = v188 & 0x80000000 | (v28 * ((v188 >> 31) | 1)) & 0x7FFFFFFF;
LABEL_21:
g4_m128_raw(v30) = LODWORD(v183);
  *(float *)v264 = v281;
  *(float *)&v264[1] = v282;
  *(float *)g4_m128_ptr<int32_t>(v9) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v9) + v163) * v180, hkp3AxisSweep::s_MaxVal);
  *(float *)&v264[2] = v283;
  v264[3] = v29;
  *(float *)g4_m128_ptr<int32_t>(v8) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v8) + v161) * v178, unk_20C7924);
  *(float *)g4_m128_ptr<int32_t>(v30) = fminf((float)(v183 + v160) * v176, unk_20C7928);
  *(float *)g4_m128_ptr<int32_t>(v10) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v10) + v159) * v173, (*(const float *)unk_20C792C));
  if ( *(float *)g4_m128_ptr<int32_t>(v9) <= 0.0 )
  {
    v32 = -127;
    v31 = 0;
  }
  else
  {
    v31 = _mm_cvtsi128_si32(v9);
    v32 = ((v31 & 0x7F800000u) >> 23) - 127;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v8) <= 0.0 )
  {
    v234 = -127;
    v33 = 0;
  }
  else
  {
    v33 = _mm_cvtsi128_si32(v8);
    v234 = ((v33 & 0x7F800000u) >> 23) - 127;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v30) <= 0.0 )
  {
    v219 = -127;
    v221 = 0;
  }
  else
  {
    v221 = _mm_cvtsi128_si32(v30);
    v219 = ((v221 & 0x7F800000u) >> 23) - 127;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v10) <= 0.0 )
  {
    v203 = -127;
    v210 = 0;
    if ( v32 >= 0 )
      goto LABEL_29;
LABEL_198:
    v36 = 0.0;
    goto LABEL_32;
  }
  v210 = _mm_cvtsi128_si32(v10);
  v203 = ((v210 & 0x7F800000u) >> 23) - 127;
  if ( v32 < 0 )
    goto LABEL_198;
LABEL_29:
  v34 = v31 & 0x7FFFFF | 0x800000;
  if ( v32 <= 23 )
    v35 = v34 >> (23 - v32);
  else
    v35 = v34 << (v32 - 23);
  LODWORD(v36) = v31 & 0x80000000 | (v35 * ((v31 >> 31) | 1)) & 0x7FFFFFFF;
LABEL_32:
  v281 = v36;
  if ( v234 < 0 )
  {
    v39 = 0.0;
  }
  else
  {
    v37 = v33 & 0x7FFFFF | 0x800000;
    if ( v234 <= 23 )
      v38 = v37 >> (23 - v234);
    else
      v38 = v37 << (v234 - 23);
    LODWORD(v39) = v33 & 0x80000000 | (v38 * ((v33 >> 31) | 1)) & 0x7FFFFFFF;
  }
  v282 = v39;
  if ( v219 < 0 )
  {
    v42 = 0.0;
  }
  else
  {
    v40 = v221 & 0x7FFFFF | 0x800000;
    if ( v219 <= 23 )
      v41 = v40 >> (23 - v219);
    else
      v41 = v40 << (v219 - 23);
    LODWORD(v42) = v221 & 0x80000000 | (v41 * ((v221 >> 31) | 1)) & 0x7FFFFFFF;
  }
  v283 = v42;
  if ( v203 < 0 )
  {
    v45 = 0;
  }
  else
  {
    v43 = v210 & 0x7FFFFF | 0x800000;
    if ( v203 <= 23 )
      v44 = v43 >> (23 - v203);
    else
      v44 = v43 << (v203 - 23);
    v45 = v210 & 0x80000000 | (v44 * ((v210 >> 31) | 1)) & 0x7FFFFFFF;
  }
  v284 = v45;
  *(float *)v265 = v281;
  *(float *)&v265[2] = v283;
  v220 = nullptr;
  *(float *)&v265[1] = v282;
  v265[3] = v45;
  v235 = *(uint32_t *)(a1 + 164);
  v46 = v235;
  if ( v235 == -16
    || (LODWORD(v281) = v235 + 16,
        v220 = (uint8_t *)(*(int (**)(uint32_t *, float *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                          (uint32_t *)(hkContainerTempAllocator::s_alloc),
                          &v281),
        v152 = LODWORD(v281),
        v46 = *(uint32_t *)(a1 + 164),
        v281 == 0.0) )
  {
    v152 = 0x80000000;
  }
  v47 = v46 >> 4;
  v48 = 0;
  if ( v47 >= 0 )
  {
    v222 = v47 + 1;
    do
    {
      v49 = 16 * v48++;
      *(uint32_t *)&v220[v49] = 0;
      *(uint32_t *)&v220[v49 + 4] = 0;
      *(uint32_t *)&v220[v49 + 8] = 0;
      *(uint32_t *)&v220[v49 + 12] = 0;
    }
    while ( v48 != v222 );
  }
  v192 = 0;
  v223 = 1;
  v50 = *(int **)(a2 + 48);
  if ( v50 == nullptr )
    v50 = (int *)(a1 + 172);
  v181 = v50;
  do
  {
    v51 = v181[1];
    v52 = *v181;
    v211 = v264[v192];
    if ( v211 >= *(uint16_t *)(*v181 + 4 * (v51 >> 1)) )
    {
      v141 = v52 + 16;
      v142 = v52 + 4 * v51 - 8;
      v208 = v142;
      if ( v141 > v142 )
      {
        v144 = (uint16_t *)v142;
        v143 = v265[v192];
      }
      else
      {
        v143 = v265[v192];
        if ( *(uint16_t *)(v142 - 12) <= v143 )
        {
          v144 = (uint16_t *)v142;
        }
        else
        {
          v144 = (uint16_t *)v142;
          do
          {
            v220[v144[1]] ^= v223;
            v145 = (char *)v144 - v208;
            v144 -= 8;
            v220[*(uint16_t *)&v145[v208 - 2]] ^= v223;
            v220[*(uint16_t *)&v145[v208 - 6]] ^= v223;
            v220[*(uint16_t *)&v145[v208 - 10]] ^= v223;
          }
          while ( v141 <= (unsigned int)(uintptr_t)(v144) && *(v144 - 6) > v143 );
        }
      }
      v146 = *v144;
      v245 = *v144;
      if ( v245 > v143 )
      {
        v246 = v144;
        do
        {
          v147 = v246;
          v246 -= 2;
          v220[v147[1]] ^= v223;
          v146 = *v246;
        }
        while ( *v246 > v143 );
        v144 = v246;
        v245 = v146;
      }
      v209 = v146;
      v148 = v144 + 2;
      (&v259)[v192] = v144 + 2;
      if ( v211 < v245 )
      {
        LOBYTE(v149) = v209;
        do
        {
          v150 = v144[1];
          v144 -= 2;
          v220[v150] ^= v223 & (uint8_t)-(v149 & 1);
          v149 = *v144;
        }
        while ( v211 < *v144 );
        v148 = v144 + 2;
      }
      (&v256)[v192] = v148;
    }
    else
    {
      v204 = v52 + 4 * v51 - 16;
      v186 = v52 + 4;
      if ( v204 <= v52 + 4 )
      {
        v53 = (uint16_t *)(v52 + 4);
      }
      else if ( v211 < *(uint16_t *)(v52 + 16) )
      {
        v53 = (uint16_t *)(v52 + 4);
      }
      else
      {
        v53 = (uint16_t *)(v52 + 4);
        v236 = -(v52 + 4);
        v198 = v52 + 8;
        v195 = v52 + 12;
        v189 = v52 + 16;
        do
        {
          v220[v53[1]] ^= v223;
          v54 = (char *)v53 + v236;
          v53 += 8;
          v220[*(uint16_t *)&v54[v198 + 2]] ^= v223;
          v220[*(uint16_t *)&v54[v195 + 2]] ^= v223;
          v220[*(uint16_t *)&v54[v189 + 2]] ^= v223;
        }
        while ( v204 > (unsigned int)(uintptr_t)(v53) && v211 >= *(uint16_t *)((char *)v53 + v236 + v186 + 12) );
      }
      v55 = *v53;
      v56 = *v53;
      if ( v211 >= v56 )
      {
        v237 = v53;
        do
        {
          v57 = v237;
          v237 += 2;
          v220[v57[1]] ^= v223;
          v55 = *v237;
          v56 = *v237;
        }
        while ( v211 >= v56 );
        v53 = v237;
      }
      (&v256)[v192] = v53;
      v58 = v265[v192];
      if ( v58 >= v56 )
      {
        LOBYTE(v59) = v55;
        do
        {
          v60 = v53[1];
          v53 += 2;
          v220[v60] ^= v223 & (uint8_t)((v59 & 1) - 1);
          v59 = *v53;
        }
        while ( *v53 <= v58 );
      }
      (&v259)[v192] = v53;
    }
    v223 *= 2;
    ++v192;
    v181 += 3;
  }
  while ( v192 != 3 );
  v61 = v220;
  *(float *)&v158 = 1.0;
  v62 = *(uint32_t **)(a1 + 160);
  v63 = (unsigned int)(uintptr_t)(&v220[4 * (*(int *)(a1 + 164) >> 2) + 4]);
  if ( (unsigned int)(uintptr_t)(v220) >= v63 )
    goto LABEL_84;
  v64 = 1.0;
  v65 = a3;
  do
  {
    while ( 1 )
    {
      if ( ((*(uint32_t *)v61 + 16843009) & 0x8080808) == 0 )
        goto LABEL_72;
      if ( *v61 != 7 || ((v66 = v62[3]) & 1) != 0 )
      {
        if ( v61[1] != 7 )
          goto LABEL_70;
      }
      else
      {
        v212 = v63;
        v224 = v65;
        v238 = ((long double (*)(int, int, uint32_t))*(uint32_t *)(*(uint32_t *)v65 + 8))(v65, v66, 0);
        v65 = v224;
        v63 = v212;
        v64 = fminf(v64, v238);
        if ( v61[1] != 7 )
          goto LABEL_70;
      }
      v67 = v62[7];
      if ( (v67 & 1) != 0 )
      {
LABEL_70:
        if ( v61[2] != 7 )
          goto LABEL_71;
        goto LABEL_79;
      }
      v213 = v63;
      v225 = v65;
      v239 = ((long double (*)(int, int, uint32_t))*(uint32_t *)(*(uint32_t *)v65 + 8))(v65, v67, 0);
      v65 = v225;
      v63 = v213;
      v64 = fminf(v64, v239);
      if ( v61[2] == 7 )
      {
LABEL_79:
        v68 = v62[11];
        if ( (v68 & 1) == 0 )
          break;
      }
LABEL_71:
      if ( v61[3] == 7 )
        goto LABEL_81;
LABEL_72:
      v61 += 4;
      v62 += 16;
      if ( v63 <= (unsigned int)(uintptr_t)(v61) )
        goto LABEL_83;
    }
    v214 = v63;
    v226 = v65;
    v240 = ((long double (*)(int, int, uint32_t))*(uint32_t *)(*(uint32_t *)v65 + 8))(v65, v68, 0);
    v65 = v226;
    v63 = v214;
    v64 = fminf(v64, v240);
    if ( v61[3] != 7 )
      goto LABEL_72;
LABEL_81:
    v69 = v62[15];
    if ( (v69 & 1) != 0 )
      goto LABEL_72;
    v215 = v63;
    v227 = v65;
    v61 += 4;
    v241 = ((long double (*)(int, int, uint32_t))*(uint32_t *)(*(uint32_t *)v65 + 8))(v65, v69, 0);
    v63 = v215;
    v62 += 16;
    v64 = fminf(v64, v241);
    v65 = v227;
  }
  while ( v215 > (unsigned int)(uintptr_t)(v61) );
LABEL_83:
  *(float *)&v158 = v64;
LABEL_84:
g4_m128_raw(v74) = *(unsigned int *)(a2 + 24);
g4_m128_raw(v73) = *(unsigned int *)(a2 + 20);
  v154 = *(float *)g4_m128_ptr<int32_t>(v74);
  v153 = *(float *)(a2 + 28);
g4_m128_raw(v70) = LODWORD(v153);
  v156 = *(float *)(a2 + 16);
g4_m128_raw(v71) = LODWORD(v156);
  v155 = *(float *)g4_m128_ptr<int32_t>(v73);
  v242 = *(float *)(a1 + 96);
  v174 = *(float *)(a1 + 100);
  *(float *)g4_m128_ptr<int32_t>(v71) = (float)(v156 - *(float *)a2) * v242;
  v228 = *(float *)(a1 + 104);
  v72 = _mm_cvtsi128_si32(v71);
  *(float *)g4_m128_ptr<int32_t>(v73) = (float)(*(float *)g4_m128_ptr<int32_t>(v73) - *(float *)(a2 + 4)) * v174;
  v216 = *(float *)(a1 + 108);
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)(*(float *)g4_m128_ptr<int32_t>(v74) - *(float *)(a2 + 8)) * v228;
  v184 = fabs(*(float *)g4_m128_ptr<int32_t>(v71));
  *(float *)g4_m128_ptr<int32_t>(v70) = (float)(v153 - *(float *)(a2 + 12)) * v216;
  LODWORD(v182) =g4_m128_lane<int32_t>(v73, 0) & 0x7FFFFFFF;
  LODWORD(v179) =g4_m128_lane<int32_t>(v74, 0) & 0x7FFFFFFF;
  v75 = (2130706432 - v72) & ((v72 ^ (v72 + 2139095040)) >> 31);
  v177 = fabs(*(float *)g4_m128_ptr<int32_t>(v70));
  v76 = _mm_cvtsi128_si32(v73);
  v77 = (v76 ^ (v76 + 2139095040)) >> 31;
  v78 = 2130706432 - v76;
  v79 = _mm_cvtsi128_si32(v74);
  v80 = 2130706432 - v79;
  v81 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v71)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)&v75)) * *(float *)&v75)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)&v75)) * *(float *)&v75);
  v190 = v81 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v71) * v81));
  v82 = v78 & v77;
  v83 = *(float *)g4_m128_ptr<int32_t>(v73) * COERCE_FLOAT(v78 & v77);
  v84 = v79 ^ (v79 + 2139095040);
  v85 = _mm_cvtsi128_si32(v70);
  v86 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v73) * (float)((float)(2.0 - v83) * *(float *)&v82)))
      * (float)((float)(2.0 - v83) * *(float *)&v82);
  v187 = v86 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v73) * v86));
  v87 = (2130706432 - v85) & ((v85 ^ (v85 + 2139095040)) >> 31);
  v172 = (float)((float)(2.0
                       - (float)(*(float *)g4_m128_ptr<int32_t>(v74)
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v74) * COERCE_FLOAT(v80 & (v84 >> 31))))
                                       * COERCE_FLOAT(v80 & (v84 >> 31)))))
               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v74) * COERCE_FLOAT(v80 & (v84 >> 31))))
                       * COERCE_FLOAT(v80 & (v84 >> 31))))
       * (float)(2.0
               - (float)(*(float *)g4_m128_ptr<int32_t>(v74)
                       * (float)((float)(2.0
                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v74)
                                               * (float)((float)(2.0
                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v74)
                                                                       * COERCE_FLOAT(v80 & (v84 >> 31))))
                                                       * COERCE_FLOAT(v80 & (v84 >> 31)))))
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v74) * COERCE_FLOAT(v80 & (v84 >> 31))))
                                       * COERCE_FLOAT(v80 & (v84 >> 31))))));
  v88 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v70)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v70) * *(float *)&v87)) * *(float *)&v87)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v70) * *(float *)&v87)) * *(float *)&v87);
  v89 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v70) * v88)) * v88;
  v266 = v190;
  v267 = v187;
  v268 = v172;
  v90 = *(float *)(a1 + 220);
  v269 = v89;
  v91 = 4 * (*(float *)g4_m128_ptr<int32_t>(v74) > 0.0) + 8;
  v92 = v170;
  if ( *(float *)g4_m128_ptr<int32_t>(v70) <= 0.0 )
    v91 = 4 * (*(float *)g4_m128_ptr<int32_t>(v74) > 0.0);
  v93 = v91 | (*(float *)g4_m128_ptr<int32_t>(v71) > 0.0) | (2 * (*(float *)g4_m128_ptr<int32_t>(v73) > 0.0));
  if ( (v91 & 1 | (*(float *)g4_m128_ptr<int32_t>(v71) > 0.0)) == 0 )
    v92 = v163;
  v199 = v168;
  if ( (v91 & 2 | (uint8_t)(2 * (*(float *)g4_m128_ptr<int32_t>(v73) > 0.0))) == 0 )
    v199 = v161;
  v94 = v166;
  if ( (v93 & 4) == 0 )
    v94 = v160;
  v157 = v164;
  if ( (v93 & 8) == 0 )
    v157 = v159;
  if ( (v93 & 1) == 0 )
    v163 = v170;
  v171 = v161;
  if ( (v93 & 2) == 0 )
    v171 = v168;
  v169 = v160;
  if ( (v93 & 4) == 0 )
    v169 = v166;
  v167 = v159;
  if ( (v93 & 8) == 0 )
    v167 = v164;
  v196 = *(float *)(a1 + 72);
  v193 = *(float *)(a1 + 76);
  v95 = v199 + *(float *)(a1 + 68);
  v200 = *(float *)(a1 + 68);
  v96 = v174;
  v97 = (float)(v92 + *(float *)(a1 + 64)) * v242;
  v205 = *(float *)(a1 + 64);
  v175 = v95 * v174;
  v98 = 0.00000011920929f * v97;
  v99 = v97 - v90;
  v165 = (float)(v94 + v196) * v228;
  v100 = v98 > v184;
  v162 = (float)(v157 + v193) * v216;
  v101 = v162 * 0.00000011920929f;
  v102 = ((float)(v175 * 0.00000011920929f) > v182) + ((float)(v175 * 0.00000011920929f) > v182) + 4;
  if ( (float)(v165 * 0.00000011920929f) <= v179 )
    v102 = 2 * ((float)(v175 * 0.00000011920929f) > v182);
  v103 = 8 * (v101 > v177);
  v104 = (float)((float)(v154 + v196) * v228) * 0.00000011920929f;
  v105 = ((float)((float)((float)(v156 + v205) * v242) * 0.00000011920929f) > v184 || v100) | v102;
  v270 = v99 * v190;
  if ( (float)((float)((float)(v155 + v200) * v96) * 0.00000011920929f) > v182 )
    v103 = 8 * (v101 > v177) + 2;
  v106 = 4 * (v104 > v179) + 8;
  v274 = (float)((float)((float)(v205 + v163) * v242) - v90) * v190;
  if ( (float)((float)((float)(v153 + v193) * v216) * 0.00000011920929f) <= v177 )
    v106 = 4 * (v104 > v179);
  v107 = v103 | v106 | v105;
  v271 = (float)(v175 - v90) * v187;
  v272 = (float)(v165 - v90) * v172;
  v273 = (float)(v162 - v90) * v89;
  v275 = (float)((float)((float)(v200 + v171) * v96) - v90) * v187;
  v276 = (float)((float)((float)(v196 + v169) * v228) - v90) * v172;
  v277 = (float)((float)((float)(v193 + v167) * v216) - v90) * v89;
  if ( (v93 & 1) != 0 )
  {
    v247 = 4;
    v229 = v256;
    v253 = 0;
    v250 = 1;
    v243 = v259;
  }
  else
  {
    v108 = v256 - 2;
    v247 = -4;
    v229 = v259 - 2;
    v256 = v259 - 2;
    v243 = v108;
    v259 = v108;
    v253 = 1;
    v250 = 0;
  }
  if ( (v107 & 1) != 0 )
  {
    v270 = -2.0;
    v266 = 0.0;
    v274 = -2.0;
  }
  if ( (v93 & 2) != 0 )
  {
    v248 = 4;
    v217 = v257;
    v254 = 0;
    v251 = 1;
    v206 = v260;
  }
  else
  {
    v109 = v257 - 2;
    v248 = -4;
    v217 = v260 - 2;
    v257 = v260 - 2;
    v206 = v109;
    v260 = v109;
    v254 = 1;
    v251 = 0;
  }
  if ( (v107 & 2) != 0 )
  {
    v271 = -2.0;
    v267 = 0.0;
    v275 = -2.0;
  }
  if ( (v93 & 4) != 0 )
  {
    v249 = 4;
    v255 = 0;
    v252 = 1;
    v110 = v258;
    v111 = v261;
  }
  else
  {
    v151 = v258;
    v110 = v261 - 2;
    v249 = -4;
    v258 = v261 - 2;
    v255 = 1;
    v252 = 0;
    v111 = v151 - 2;
    v261 = v151 - 2;
  }
  if ( (v107 & 4) != 0 )
  {
    v272 = -2.0;
    v268 = 0.0;
    v276 = -2.0;
  }
  v263[0] = (uint32_t)(uintptr_t)(v243);
  v262[2] = (uint32_t)(uintptr_t)(v110);
  v112 = *v110;
  v262[1] = (uint32_t)(uintptr_t)(v217);
  v113 = (float)v112;
  v114 = *v229;
  v263[1] = (uint32_t)(uintptr_t)(v206);
  v115 = *v217;
  v262[0] = (uint32_t)(uintptr_t)(v229);
  v116 = (float)v114;
  v117 = *v206;
  v263[2] = (uint32_t)(uintptr_t)(v111);
  v118 = (float)(v116 * v266) - v270;
  v119 = (float)((float)v115 * v267) - v271;
  result = (int)(uintptr_t)(v220);
  v121 = (float)(v113 * v268) - v272;
  v122 = (float)((float)v117 * v267) - v275;
  v123 = (float)((float)*v111 * v268) - v276;
  v124 = (float)((float)*v243 * v266) - v274;
  v278 = v118;
  v279 = v119;
  v280 = v121;
  v282 = v122;
  v281 = v124;
  v283 = v123;
  *v220 = 8;
  v201 = 1;
  if ( v118 <= v119 )
  {
    v119 = v118;
    v201 = 0;
  }
  if ( v119 > v121 )
  {
    v119 = v121;
    v201 = 2;
  }
  v244 = 1;
  if ( v124 <= v122 )
  {
    v122 = v124;
    v244 = 0;
  }
  if ( v122 > v123 )
    v244 = 2;
  else
    v123 = v122;
  v125 = *(float *)&v158;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v119 <= v123 )
        goto LABEL_145;
LABEL_130:
      if ( v123 > v125 )
        goto LABEL_173;
      v230 = (uint16_t *)v263[v244];
      v126 = v230;
      v207 = *(&v250 + v244);
      v127 = *v230;
      while ( 2 )
      {
        v128 = v126[1];
        v129 = (v207 ^ v127 & 1) << v244;
        v130 = &v220[v128];
        v131 = *v130 ^ v129;
        *v130 = v131;
        if ( v131 <= 6u )
        {
LABEL_139:
          v127 = *v126;
          v126 = (uint16_t *)((char *)v230 + *(&v247 + v244));
          v230 = v126;
          v263[v244] = (uint32_t)(uintptr_t)(v126);
          if ( v127 != *v126 )
          {
            result = v244;
            v133 = (float)((float)((float)((float)0 * 65536.0) + (float)*v126) * *(&v266 + v244)) - *(&v274 + v244);
            goto LABEL_141;
          }
          continue;
        }
        break;
      }
      if ( v128 != 0 )
      {
        if ( v129 != 0 )
        {
          v132 = *(uint32_t *)(*(uint32_t *)(a1 + 160) + 16 * v128 + 12);
          if ( (v132 & 1) == 0 )
          {
            v231 = ((long double (*)(int, int, uint32_t))*(uint32_t *)(*(uint32_t *)a3 + 8))(a3, v132, 0);
            if ( v231 <= v125 )
              v125 = v231;
            v230 = (uint16_t *)v263[v244];
          }
        }
        goto LABEL_139;
      }
      v133 = 2.0;
      result = v244;
LABEL_141:
      *(&v281 + result) = v133;
      v244 = 1;
      v134 = v282;
      if ( v281 <= v282 )
      {
        v134 = v281;
        v244 = 0;
      }
      v123 = v283;
      if ( v134 <= v283 )
      {
        v123 = v134;
        continue;
      }
      break;
    }
    v244 = 2;
    if ( v119 > v283 )
      goto LABEL_130;
LABEL_145:
    if ( v119 <= v125 )
    {
      v218 = *(&v253 + v201);
      v135 = (uint16_t *)v262[v201];
      v232 = v135;
      v136 = *v135;
      do
      {
        v137 = &v220[(uint16_t)v135[1]];
        v138 = (uint8_t)*v137 ^ ((v218 ^ v136 & 1) << v201);
        *v137 = v138;
        if ( (uint8_t)v138 > 8u )
        {
          v139 = 2.0;
          result = v201;
          goto LABEL_150;
        }
        v136 = *v135;
        v232 = (uint16_t *)((char *)v232 + *(&v247 + v201));
        v135 = v232;
        v262[v201] = (uint32_t)(uintptr_t)(v232);
      }
      while ( v136 == *v232 );
      result = v201;
      v139 = (float)((float)((float)((float)0 * 65536.0) + (float)(uint16_t)*v232) * *(&v266 + v201))
           - *(&v270 + v201);
LABEL_150:
      *(&v278 + result) = v139;
      v201 = 1;
      v140 = v279;
      if ( v278 <= v279 )
      {
        v140 = v278;
        v201 = 0;
      }
      v119 = v280;
      if ( v140 <= v280 )
        v119 = v140;
      else
        v201 = 2;
      continue;
    }
    break;
  }
LABEL_173:
  if ( v152 >= 0 )
    return (*(int (**)(uint32_t *, uint8_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v220,
             v152 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::beginOverlap  (binary VA: 0x16ab670)
// Original: hkp3AxisSweep::beginOverlap
// ----------------------------------------------------------------------------
uint32_t * hkp3AxisSweep::beginOverlap(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int v4;
  uint32_t *result;
  int v6;

  v3 = *((uint32_t *)a3 + 1);
  if ( v3 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 8, v6);
    v3 = *((uint32_t *)a3 + 1);
  }
  v4 = *(uint32_t *)a3;
  *((uint32_t *)a3 + 1) = v3 + 1;
  result = (uint32_t *)(v4 + 8 * v3);
  *result = *(uint32_t *)(a1 + 12);
  result[1] = *(uint32_t *)(a2 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::endOverlap  (binary VA: 0x16ab6e0)
// Original: hkp3AxisSweep::endOverlap
// ----------------------------------------------------------------------------
uint32_t * hkp3AxisSweep::endOverlap(int a1, int a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int v4;
  uint32_t *result;
  int v6;

  v3 = *((uint32_t *)a3 + 1);
  if ( v3 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 8, v6);
    v3 = *((uint32_t *)a3 + 1);
  }
  v4 = *(uint32_t *)a3;
  *((uint32_t *)a3 + 1) = v3 + 1;
  result = (uint32_t *)(v4 + 8 * v3);
  *result = *(uint32_t *)(a1 + 12);
  result[1] = *(uint32_t *)(a2 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::beginOverlapCheckMarker  (binary VA: 0x16ab750)
// Original: hkp3AxisSweep::beginOverlapCheckMarker
// ----------------------------------------------------------------------------
uint32_t * hkp3AxisSweep::beginOverlapCheckMarker(int a1, int a2, int16_t a3, int a4, hkMemoryAllocator::Self *a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *result;
  int v9;
  int v10;
  int v11;

  v5 = *(uint32_t *)(a4 + 12);
  if ( (v5 & 1) != 0 )
  {
    v6 = (uint32_t *)(a1 + (v5 & 0xFFFFFFFE));
    v7 = v6[2];
    if ( v7 == (v6[3] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v6 + 1),
        2,
        v11);
      v7 = v6[2];
    }
    result = (uint32_t *)v6[1];
    *((uint16_t *)result + v7) = a3;
    ++v6[2];
  }
  else
  {
    v9 = *((uint32_t *)a5 + 1);
    if ( v9 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v11);
      v9 = *((uint32_t *)a5 + 1);
    }
    v10 = *(uint32_t *)a5;
    *((uint32_t *)a5 + 1) = v9 + 1;
    result = (uint32_t *)(v10 + 8 * v9);
    *result = *(uint32_t *)(a2 + 12);
    result[1] = *(uint32_t *)(a4 + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::endOverlapCheckMarker  (binary VA: 0x16ab830)
// Original: hkp3AxisSweep::endOverlapCheckMarker
// ----------------------------------------------------------------------------
int hkp3AxisSweep::endOverlapCheckMarker(int a1, int a2, int16_t a3, int a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  uint16_t *v8;
  int result;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;

  v5 = *(uint32_t *)(a4 + 12);
  if ( (v5 & 1) != 0 )
  {
    v6 = a1 + (v5 & 0xFFFFFFFE);
    v7 = *(uint32_t *)(v6 + 8);
    v8 = *(uint16_t **)(v6 + 4);
    if ( v7 > 0 )
    {
      if ( a3 == *v8 )
      {
        v10 = 0;
        result = 0;
LABEL_8:
        v11 = v7 - 1;
        *(uint32_t *)(v6 + 8) = v11;
        if ( result != v11 )
        {
          result = (uint16_t)v8[v11];
          v8[v10] = result;
        }
        return result;
      }
      result = 0;
      while ( ++result != v7 )
      {
        v10 = result;
        if ( a3 == v8[result] )
          goto LABEL_8;
      }
    }
    v10 = -1;
    result = -1;
    goto LABEL_8;
  }
  v12 = a5;
  v13 = a5[1];
  if ( v13 == (a5[2] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a5, 8, v15);
    v12 = a5;
    v13 = a5[1];
  }
  v14 = *v12;
  v12[1] = v13 + 1;
  result = v14 + 8 * v13;
  *(uint32_t *)result = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(result + 4) = *(uint32_t *)(a4 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::fixDeterministicOrderAfterNodeIdWasDecreased  (binary VA: 0x16ab920)
// Original: hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased
// ----------------------------------------------------------------------------
uint16_t * hkp3AxisSweep::fixDeterministicOrderAfterNodeIdWasDecreased(hkp3AxisSweep::Self *self, unsigned int a2)
{
  hkp3AxisSweep::Self *v2;
  uint16_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  uint16_t *v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  uint16_t *v27;
  uint16_t *v28;
  uint16_t *v29;
  uint16_t *v30;
  unsigned int v31;
  uint16_t *v32;
  int v33;
  int v34;
  uint16_t *v35;
  uint16_t *v36;
  uint16_t *v37;
  uint16_t *v38;
  uint16_t *v39;
  uint16_t *v40;
  uint16_t *v41;
  uint16_t *v42;
  uint16_t *v43;

  v2 = self;
  v34 = *((uint32_t *)self + 40);
  result = (uint16_t *)(16 * a2 + v34);
  v4 = result[4];
  v5 = *((uint32_t *)self + 43) + 4 * v4;
  if ( *(uint16_t *)v5 == *(uint16_t *)(v5 - 4) && a2 < *(uint16_t *)(v5 - 2) )
  {
    v31 = *(uint16_t *)(v5 - 2);
    v32 = (uint16_t *)(v5 - 8);
    do
    {
      v33 = *(uint32_t *)(v5 - 4);
      v5 -= 4;
      *(uint32_t *)(v5 + 4) = v33;
      *(uint16_t *)(v34 + 16 * v31 + 8) = v4;
      LOWORD(v4) = v4 - 1;
      if ( *(uint16_t *)v5 != *v32 )
        break;
      v31 = (uint16_t)v32[1];
      v32 -= 2;
    }
    while ( a2 < v31 );
    result = (uint16_t *)(16 * a2 + v34);
    v2 = self;
  }
  *(uint16_t *)(v5 + 2) = a2;
  result[4] = v4;
  v6 = result[5];
  v7 = *((uint32_t *)v2 + 43) + 4 * v6;
  if ( *(uint16_t *)v7 == *(uint16_t *)(v7 - 4) && a2 < *(uint16_t *)(v7 - 2) )
  {
    v40 = result;
    v36 = (uint16_t *)(v7 - 8);
    v16 = *(uint16_t *)(v7 - 2);
    do
    {
      v17 = *(uint32_t *)(v7 - 4);
      v7 -= 4;
      *(uint32_t *)(v7 + 4) = v17;
      *(uint16_t *)(v34 + 16 * v16 + 10) = v6;
      LOWORD(v6) = v6 - 1;
      if ( *(uint16_t *)v7 != *v36 )
        break;
      v27 = v36;
      v36 -= 2;
      v16 = (uint16_t)v27[1];
    }
    while ( a2 < v16 );
    result = v40;
  }
  *(uint16_t *)(v7 + 2) = a2;
  result[5] = v6;
  v8 = *result;
  v9 = *((uint32_t *)v2 + 46) + 4 * v8;
  if ( *(uint16_t *)v9 == *(uint16_t *)(v9 - 4) && a2 < *(uint16_t *)(v9 - 2) )
  {
    v43 = result;
    v39 = (uint16_t *)(v9 - 8);
    v25 = *(uint16_t *)(v9 - 2);
    do
    {
      v26 = *(uint32_t *)(v9 - 4);
      v9 -= 4;
      *(uint32_t *)(v9 + 4) = v26;
      *(uint16_t *)(v34 + 16 * v25) = v8;
      LOWORD(v8) = v8 - 1;
      if ( *(uint16_t *)v9 != *v39 )
        break;
      v28 = v39;
      v39 -= 2;
      v25 = (uint16_t)v28[1];
    }
    while ( a2 < v25 );
    result = v43;
  }
  *(uint16_t *)(v9 + 2) = a2;
  *result = v8;
  v10 = result[2];
  v11 = *((uint32_t *)v2 + 46) + 4 * v10;
  if ( *(uint16_t *)v11 == *(uint16_t *)(v11 - 4) && a2 < *(uint16_t *)(v11 - 2) )
  {
    v42 = result;
    v38 = (uint16_t *)(v11 - 8);
    v23 = *(uint16_t *)(v11 - 2);
    do
    {
      v24 = *(uint32_t *)(v11 - 4);
      v11 -= 4;
      *(uint32_t *)(v11 + 4) = v24;
      *(uint16_t *)(v34 + 16 * v23 + 4) = v10;
      LOWORD(v10) = v10 - 1;
      if ( *(uint16_t *)v11 != *v38 )
        break;
      v29 = v38;
      v38 -= 2;
      v23 = (uint16_t)v29[1];
    }
    while ( a2 < v23 );
    result = v42;
  }
  *(uint16_t *)(v11 + 2) = a2;
  result[2] = v10;
  v12 = result[1];
  v13 = *((uint32_t *)v2 + 49) + 4 * v12;
  if ( *(uint16_t *)v13 == *(uint16_t *)(v13 - 4) && a2 < *(uint16_t *)(v13 - 2) )
  {
    v41 = result;
    v37 = (uint16_t *)(v13 - 8);
    v21 = *(uint16_t *)(v13 - 2);
    do
    {
      v22 = *(uint32_t *)(v13 - 4);
      v13 -= 4;
      *(uint32_t *)(v13 + 4) = v22;
      *(uint16_t *)(v34 + 16 * v21 + 2) = v12;
      LOWORD(v12) = v12 - 1;
      if ( *(uint16_t *)v13 != *v37 )
        break;
      v30 = v37;
      v37 -= 2;
      v21 = (uint16_t)v30[1];
    }
    while ( a2 < v21 );
    result = v41;
  }
  *(uint16_t *)(v13 + 2) = a2;
  result[1] = v12;
  v14 = result[3];
  v15 = *((uint32_t *)v2 + 49) + 4 * v14;
  if ( *(uint16_t *)v15 == *(uint16_t *)(v15 - 4) && (v18 = *(uint16_t *)(v15 - 2), a2 < v18) )
  {
    v19 = (uint16_t *)(v15 - 8);
    v35 = result;
    do
    {
      v20 = *(uint32_t *)(v15 - 4);
      v15 -= 4;
      *(uint32_t *)(v15 + 4) = v20;
      *(uint16_t *)(v34 + 16 * v18 + 6) = v14;
      LOWORD(v14) = v14 - 1;
      if ( *(uint16_t *)v15 != *v19 )
        break;
      v18 = (uint16_t)v19[1];
      v19 -= 2;
    }
    while ( a2 < v18 );
    *(uint16_t *)(v15 + 2) = a2;
    v35[3] = v14;
    return v35;
  }
  else
  {
    *(uint16_t *)(v15 + 2) = a2;
    result[3] = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::updateAabb  (binary VA: 0x16abc90)
// Original: hkp3AxisSweep::updateAabb
// ----------------------------------------------------------------------------
int hkp3AxisSweep::updateAabb(uint32_t *a1, unsigned int *a2, unsigned int *a3, hkMemoryAllocator::Self *a4, int *a5)
{
  uint16_t *v5;
  int v6;
  int v7;
  uint16_t v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint16_t *i;
  int v18;
  uint16_t v19;
  int v20;
  unsigned int v21;
  uint16_t *v22;
  uint16_t *v23;
  int v24;
  uint16_t v25;
  int v26;
  uint16_t v27;
  int v28;
  uint16_t *j;
  int v30;
  uint16_t v31;
  int v32;
  int v33;
  int v34;
  uint16_t v35; // di
  int v36;
  int v37;
  uint16_t v38;
  int v39;
  int16_t v40;
  int v41;
  int v42;
  uint16_t *v43;
  int v44;
  int v45;
  uint16_t *k;
  int16_t v47;
  uint16_t v48;
  uint16_t *v49;
  uint16_t v50;
  unsigned int v51;
  uint16_t *v52;
  uint16_t *m;
  int16_t v54;
  uint16_t v55;
  uint16_t *v56;
  uint16_t v57;
  int v58;
  uint16_t *n;
  int16_t v60;
  uint16_t v61;
  int v62;
  int v63;
  uint16_t *v64;
  uint16_t v65;
  int v66;
  int v67;
  uint16_t v68;
  int v69;
  int16_t v70;
  int v71;
  int v72;
  uint16_t *v73;
  int v74;
  uint16_t *ii;
  int16_t v76;
  int16_t v77;
  uint16_t v78;
  uint16_t *v79;
  unsigned int v80;
  uint16_t *v81;
  uint16_t *jj;
  uint16_t v83;
  uint16_t v84;
  uint16_t *v85;
  uint16_t v86; // di
  int v87;
  uint16_t *v88;
  int16_t v89;
  int16_t v90;
  uint16_t v91;
  int v92;
  int v93;
  uint16_t *v94;
  unsigned int v96;
  uint16_t *v97;
  int v98;
  unsigned int v99;
  uint16_t *v100;
  unsigned int v101;
  uint16_t *v102;
  unsigned int v103;
  uint16_t *v104;
  unsigned int v105;
  uint16_t *v106;
  unsigned int v107;
  uint16_t *v108;
  int v109;
  unsigned int v110;
  uint16_t *v111;
  int v112;
  unsigned int v113;
  uint16_t *v114;
  unsigned int v115;
  uint16_t *v116;
  unsigned int v117;
  int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  uint16_t v123;
  unsigned int v124;
  uint16_t v125;
  unsigned int v126;
  uint16_t *kk;
  int v128;
  int v129;
  uint16_t *v130;
  int v131;
  uint16_t v132;
  int v133;
  int v134;
  int16_t v135;
  int v136;
  uint16_t v137;
  int16_t v138;
  int16_t v139;
  int16_t v140;
  int v141;
  int v142;
  uint16_t v143;
  int v144;
  int16_t v145;
  int v146;
  int v147;
  int v148;
  uint32_t *v149;

  v118 = a1[40];
  v117 = *a2;
  v5 = (uint16_t *)(16 * *a2 + v118);
  v6 = v5[4];
  v122 = a3[4];
  v119 = *a3;
  v7 = a1[43] + 4 * v6;
  v8 = *(uint16_t *)(v7 - 4);
  v9 = v8;
  if ( *a3 < v8 )
  {
    v146 = v7 - 4;
    v141 = v7 - 8;
    v149 = (uint32_t *)(16 * v117 + v118);
    v10 = -v7;
    do
    {
      v12 = v7 + v10;
      v7 -= 4;
      v13 = 16 * *(uint16_t *)(v146 + v12 + 2);
      *(uint32_t *)(v7 + 4) = *(uint32_t *)v7;
      v14 = v118 + v13;
      if ( (v8 & 1) != 0 )
      {
        v11 = ((v149[1] - *(uint32_t *)v14) | (*(uint32_t *)(v14 + 4) - *v149)) & 0x80008000;
        *(uint16_t *)(v14 + 10) = v6;
        if ( v11 == 0 )
          hkp3AxisSweep::beginOverlapCheckMarker(a1[54], (int)(uintptr_t)(v149), v117, v14, a4);
      }
      else
      {
        *(uint16_t *)(v14 + 8) = v6;
      }
      LOWORD(v6) = v6 - 1;
      v8 = *(uint16_t *)(v141 + v7 + v10 + 4);
      v9 = v8;
    }
    while ( v119 < v8 );
    v5 = (uint16_t *)(16 * v117 + v118);
  }
  if ( v119 == v9 )
  {
    v96 = *(uint16_t *)(v7 - 2);
    if ( v117 < v96 )
    {
      v97 = (uint16_t *)(v7 - 8);
      do
      {
        v98 = *(uint32_t *)(v7 - 4);
        v7 -= 4;
        *(uint32_t *)(v7 + 4) = v98;
        *(uint16_t *)(v118 + 16 * v96 + 8) = v6;
        LOWORD(v6) = v6 - 1;
        if ( v119 != *v97 )
          break;
        v96 = v97[1];
        v97 -= 2;
      }
      while ( v117 < v96 );
    }
  }
  *(uint16_t *)(v7 + 2) = v117;
  *(uint16_t *)v7 = v119;
  v15 = v5[5];
  v5[4] = v6;
  v16 = a1[43] + 4 * v15;
  for ( i = (uint16_t *)(v16 + 4); ; i += 2 )
  {
    v19 = *i;
    if ( v122 <= *i )
      break;
    ++v15;
    *(uint32_t *)v16 = *(uint32_t *)(v16 + 4);
    v16 += 4;
    v20 = v118 + 16 * i[1];
    if ( (v19 & 1) != 0 )
    {
      --*(uint16_t *)(v20 + 10);
    }
    else
    {
      v128 = *(uint32_t *)(v20 + 4);
      v136 = *((uint32_t *)v5 + 1) - *(uint32_t *)v20;
      v18 = *(uint32_t *)v5;
      --*(uint16_t *)(v20 + 8);
      if ( ((v136 | (v128 - v18)) & 0x80008000) == 0 )
      {
        v129 = v15;
        hkp3AxisSweep::beginOverlapCheckMarker(a1[54], (int)(uintptr_t)(v5), v117, v20, a4);
        v15 = v129;
      }
    }
  }
  if ( v122 == v19 )
  {
    v21 = *(uint16_t *)(v16 + 6);
    if ( v117 > v21 && *(uint16_t *)(v16 + 6) != 0 )
    {
      v22 = (uint16_t *)(v16 + 8);
      do
      {
        LOWORD(v15) = v15 + 1;
        *(uint32_t *)v16 = *(uint32_t *)(v16 + 4);
        v16 += 4;
        --*(uint16_t *)(v118 + 16 * v21 + 10);
        if ( v122 != *v22 )
          break;
        v21 = v22[1];
        if ( v117 <= v21 )
          break;
        v22 += 2;
      }
      while ( v21 != 0 );
    }
  }
  v23 = (uint16_t *)(v16 - 4);
  v137 = v15;
  while ( 1 )
  {
    v25 = *v23;
    if ( v122 >= *v23 )
      break;
    --v137;
    *(uint32_t *)v16 = *(uint32_t *)(v16 - 4);
    v16 -= 4;
    v26 = v118 + 16 * v23[1];
    if ( (v25 & 1) != 0 )
    {
      ++*(uint16_t *)(v26 + 10);
    }
    else
    {
      v24 = (*((uint32_t *)v5 + 1) - *(uint32_t *)v26) | (*(uint32_t *)(v26 + 4) - *(uint32_t *)v5);
      ++*(uint16_t *)(v26 + 8);
      if ( (v24 & 0x80008000) == 0 )
        hkp3AxisSweep::endOverlapCheckMarker(a1[54], (int)(uintptr_t)(v5), v117, v26, a5);
    }
    v23 -= 2;
  }
  v27 = v137;
  if ( v122 == v25 )
  {
    v115 = *(uint16_t *)(v16 - 2);
    if ( v117 < v115 )
    {
      v116 = (uint16_t *)(v16 - 8);
      do
      {
        --v27;
        *(uint32_t *)v16 = *(uint32_t *)(v16 - 4);
        v16 -= 4;
        ++*(uint16_t *)(v118 + 16 * v115 + 10);
        if ( v122 != *v116 )
          break;
        v115 = v116[1];
        v116 -= 2;
      }
      while ( v117 < v115 );
    }
  }
  v5[5] = v27;
  *(uint16_t *)v16 = v122;
  *(uint16_t *)(v16 + 2) = v117;
  v123 = v5[4];
  v28 = a1[43] + 4 * v123;
  for ( j = (uint16_t *)(v28 + 4); ; j += 2 )
  {
    v31 = *j;
    if ( v119 <= *j )
      break;
    v32 = *(uint32_t *)(v28 + 4);
    ++v123;
    v28 += 4;
    v33 = 16 * j[1];
    *(uint32_t *)(v28 - 4) = v32;
    v34 = v118 + v33;
    if ( (v31 & 1) != 0 )
    {
      v30 = (*((uint32_t *)v5 + 1) - *(uint32_t *)v34) | (*(uint32_t *)(v34 + 4) - *(uint32_t *)v5);
      --*(uint16_t *)(v34 + 10);
      if ( (v30 & 0x80008000) == 0 )
      {
        v130 = j;
        hkp3AxisSweep::endOverlapCheckMarker(a1[54], (int)(uintptr_t)(v5), v117, v34, a5);
        j = v130;
      }
    }
    else
    {
      --*(uint16_t *)(v34 + 8);
    }
  }
  v35 = v123;
  if ( v119 == v31 )
  {
    v113 = *(uint16_t *)(v28 + 6);
    if ( v117 > v113 )
    {
      v114 = (uint16_t *)(v28 + 8);
      do
      {
        ++v35;
        *(uint32_t *)v28 = *(uint32_t *)(v28 + 4);
        v28 += 4;
        --*(uint16_t *)(v118 + 16 * v113 + 8);
        if ( v119 != *v114 )
          break;
        v113 = v114[1];
        v114 += 2;
      }
      while ( v117 > v113 );
    }
  }
  v5[4] = v35;
  *(uint16_t *)(v28 + 2) = v117;
  *(uint16_t *)v28 = v119;
  v36 = *v5;
  v124 = a3[5];
  v120 = a3[1];
  v37 = a1[46] + 4 * v36;
  v38 = *(uint16_t *)(v37 - 4);
  v39 = v38;
  if ( v120 < v38 )
  {
    v147 = v37 - 4;
    v142 = v37 - 8;
    v131 = -v37;
    do
    {
      v41 = v37 + v131;
      v37 -= 4;
      v42 = 16 * *(uint16_t *)(v147 + v41 + 2);
      *(uint32_t *)(v37 + 4) = *(uint32_t *)v37;
      v43 = (uint16_t *)(v118 + v42);
      if ( (v38 & 1) != 0 )
      {
        v40 = (v43[5] - v5[4]) | (v43[3] - v5[1]) | (v5[5] - v43[4]) | (v5[3] - v43[1]);
        v43[2] = v36;
        if ( v40 >= 0 )
          hkp3AxisSweep::beginOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v43), a4);
      }
      else
      {
        *v43 = v36;
      }
      LOWORD(v36) = v36 - 1;
      v38 = *(uint16_t *)(v142 + v37 + v131 + 4);
      v39 = v38;
    }
    while ( v120 < v38 );
  }
  if ( v120 == v39 )
  {
    v110 = *(uint16_t *)(v37 - 2);
    if ( v117 < v110 )
    {
      v111 = (uint16_t *)(v37 - 8);
      do
      {
        v112 = *(uint32_t *)(v37 - 4);
        v37 -= 4;
        *(uint32_t *)(v37 + 4) = v112;
        *(uint16_t *)(v118 + 16 * v110) = v36;
        LOWORD(v36) = v36 - 1;
        if ( v120 != *v111 )
          break;
        v110 = v111[1];
        v111 -= 2;
      }
      while ( v117 < v110 );
    }
  }
  *(uint16_t *)(v37 + 2) = v117;
  *(uint16_t *)v37 = v120;
  v44 = v5[2];
  *v5 = v36;
  v132 = v44;
  v45 = a1[46] + 4 * v44;
  for ( k = (uint16_t *)(v45 + 4); ; k += 2 )
  {
    v48 = *k;
    if ( v124 <= *k )
      break;
    ++v132;
    *(uint32_t *)v45 = *(uint32_t *)(v45 + 4);
    v45 += 4;
    v49 = (uint16_t *)(v118 + 16 * k[1]);
    if ( (v48 & 1) != 0 )
    {
      --v49[2];
    }
    else
    {
      v47 = (v49[5] - v5[4]) | (v49[3] - v5[1]) | (v5[5] - v49[4]) | (v5[3] - v49[1]);
      --*v49;
      if ( v47 >= 0 )
        hkp3AxisSweep::beginOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v49), a4);
    }
  }
  v50 = v132;
  if ( v124 == v48 )
  {
    v51 = *(uint16_t *)(v45 + 6);
    if ( v117 > v51 && *(uint16_t *)(v45 + 6) != 0 )
    {
      v52 = (uint16_t *)(v45 + 8);
      do
      {
        ++v50;
        *(uint32_t *)v45 = *(uint32_t *)(v45 + 4);
        v45 += 4;
        --*(uint16_t *)(v118 + 16 * v51 + 4);
        if ( v124 != *v52 )
          break;
        v51 = v52[1];
        if ( v117 <= v51 )
          break;
        v52 += 2;
      }
      while ( v51 != 0 );
    }
  }
  v143 = v50;
  for ( m = (uint16_t *)(v45 - 4); ; m -= 2 )
  {
    v55 = *m;
    if ( v124 >= *m )
      break;
    --v143;
    *(uint32_t *)v45 = *(uint32_t *)(v45 - 4);
    v45 -= 4;
    v56 = (uint16_t *)(v118 + 16 * m[1]);
    if ( (v55 & 1) != 0 )
    {
      ++v56[2];
    }
    else
    {
      v54 = (v56[5] - v5[4]) | (v56[3] - v5[1]) | (v5[5] - v56[4]) | (v5[3] - v56[1]);
      ++*v56;
      if ( v54 >= 0 )
        hkp3AxisSweep::endOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v56), (hkMemoryAllocator::Self *)a5);
    }
  }
  v57 = v143;
  if ( v124 == v55 )
  {
    v101 = *(uint16_t *)(v45 - 2);
    if ( v117 < v101 )
    {
      v102 = (uint16_t *)(v45 - 8);
      do
      {
        --v57;
        *(uint32_t *)v45 = *(uint32_t *)(v45 - 4);
        v45 -= 4;
        ++*(uint16_t *)(v118 + 16 * v101 + 4);
        if ( v124 != *v102 )
          break;
        v101 = v102[1];
        v102 -= 2;
      }
      while ( v117 < v101 );
    }
  }
  v5[2] = v57;
  *(uint16_t *)v45 = v124;
  *(uint16_t *)(v45 + 2) = v117;
  v125 = *v5;
  v58 = a1[46] + 4 * *v5;
  for ( n = (uint16_t *)(v58 + 4); ; n += 2 )
  {
    v61 = *n;
    if ( v120 <= *n )
      break;
    v62 = *(uint32_t *)(v58 + 4);
    ++v125;
    v58 += 4;
    v63 = 16 * n[1];
    *(uint32_t *)(v58 - 4) = v62;
    v64 = (uint16_t *)(v118 + v63);
    if ( (v61 & 1) != 0 )
    {
      v60 = (v64[5] - v5[4]) | (v64[3] - v5[1]) | (v5[5] - v64[4]) | (v5[3] - v64[1]);
      --v64[2];
      if ( v60 >= 0 )
        hkp3AxisSweep::endOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v64), (hkMemoryAllocator::Self *)a5);
    }
    else
    {
      --*v64;
    }
  }
  v65 = v125;
  if ( v120 == v61 )
  {
    v99 = *(uint16_t *)(v58 + 6);
    if ( v117 > v99 )
    {
      v100 = (uint16_t *)(v58 + 8);
      do
      {
        ++v65;
        *(uint32_t *)v58 = *(uint32_t *)(v58 + 4);
        v58 += 4;
        --*(uint16_t *)(v118 + 16 * v99);
        if ( v120 != *v100 )
          break;
        v99 = v100[1];
        v100 += 2;
      }
      while ( v117 > v99 );
    }
  }
  *v5 = v65;
  *(uint16_t *)(v58 + 2) = v117;
  *(uint16_t *)v58 = v120;
  v66 = v5[1];
  v126 = a3[6];
  v121 = a3[2];
  v67 = a1[49] + 4 * v66;
  v68 = *(uint16_t *)(v67 - 4);
  v69 = v68;
  if ( v121 < v68 )
  {
    v148 = v67 - 4;
    v144 = v67 - 8;
    v133 = -v67;
    do
    {
      v71 = v67 + v133;
      v67 -= 4;
      v72 = 16 * *(uint16_t *)(v148 + v71 + 2);
      *(uint32_t *)(v67 + 4) = *(uint32_t *)v67;
      v73 = (uint16_t *)(v118 + v72);
      if ( (v68 & 1) != 0 )
      {
        v70 = (v73[2] - *v5) | (v73[5] - v5[4]);
        v138 = (v5[2] - *v73) | (v5[5] - v73[4]);
        v73[3] = v66;
        if ( ((v70 | v138) & 0x8000u) == 0 )
          hkp3AxisSweep::beginOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v73), a4);
      }
      else
      {
        v73[1] = v66;
      }
      LOWORD(v66) = v66 - 1;
      v68 = *(uint16_t *)(v144 + v67 + v133 + 4);
      v69 = v68;
    }
    while ( v121 < v68 );
  }
  if ( v121 == v69 )
  {
    v107 = *(uint16_t *)(v67 - 2);
    if ( v117 < v107 )
    {
      v108 = (uint16_t *)(v67 - 8);
      do
      {
        v109 = *(uint32_t *)(v67 - 4);
        v67 -= 4;
        *(uint32_t *)(v67 + 4) = v109;
        *(uint16_t *)(v118 + 16 * v107 + 2) = v66;
        LOWORD(v66) = v66 - 1;
        if ( v121 != *v108 )
          break;
        v107 = v108[1];
        v108 -= 2;
      }
      while ( v117 < v107 );
    }
  }
  *(uint16_t *)(v67 + 2) = v117;
  *(uint16_t *)v67 = v121;
  v5[1] = v66;
  v134 = v5[3];
  v74 = a1[49] + 4 * v134;
  for ( ii = (uint16_t *)(v74 + 4); ; ii += 2 )
  {
    v78 = *ii;
    if ( v126 <= *ii )
      break;
    LOWORD(v134) = v134 + 1;
    *(uint32_t *)v74 = *(uint32_t *)(v74 + 4);
    v74 += 4;
    v79 = (uint16_t *)(v118 + 16 * ii[1]);
    if ( (v78 & 1) != 0 )
    {
      --v79[3];
    }
    else
    {
      v76 = v79[5] - v5[4];
      v77 = v79[2] - *v5;
      v139 = (v5[2] - *v79) | (v5[5] - v79[4]);
      --v79[1];
      if ( ((v77 | v76 | v139) & 0x8000u) == 0 )
        hkp3AxisSweep::beginOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v79), a4);
    }
  }
  if ( v126 == v78 )
  {
    v80 = *(uint16_t *)(v74 + 6);
    if ( v117 > v80 && *(uint16_t *)(v74 + 6) != 0 )
    {
      v81 = (uint16_t *)(v74 + 8);
      do
      {
        LOWORD(v134) = v134 + 1;
        *(uint32_t *)v74 = *(uint32_t *)(v74 + 4);
        v74 += 4;
        --*(uint16_t *)(v118 + 16 * v80 + 6);
        if ( v126 != *v81 )
          break;
        v80 = v81[1];
        if ( v117 <= v80 )
          break;
        v81 += 2;
      }
      while ( v80 != 0 );
    }
  }
  for ( jj = (uint16_t *)(v74 - 4); ; jj -= 2 )
  {
    v84 = *jj;
    if ( v126 >= *jj )
      break;
    LOWORD(v134) = v134 - 1;
    *(uint32_t *)v74 = *(uint32_t *)(v74 - 4);
    v74 -= 4;
    v85 = (uint16_t *)(v118 + 16 * jj[1]);
    if ( (v84 & 1) != 0 )
    {
      ++v85[3];
    }
    else
    {
      v145 = v5[2] - *v85;
      v140 = (v85[2] - *v5) | (v85[5] - v5[4]);
      v83 = v5[5];
      ++v85[1];
      if ( ((v140 | v145 | (v83 - v85[4])) & 0x8000u) == 0 )
        hkp3AxisSweep::endOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v85), (hkMemoryAllocator::Self *)a5);
    }
  }
  if ( v126 == v84 )
  {
    v105 = *(uint16_t *)(v74 - 2);
    if ( v117 < v105 )
    {
      v106 = (uint16_t *)(v74 - 8);
      do
      {
        *(uint32_t *)v74 = *(uint32_t *)(v74 - 4);
        LOWORD(v134) = v134 - 1;
        v74 -= 4;
        ++*(uint16_t *)(v118 + 16 * v105 + 6);
        if ( v126 != *v106 )
          break;
        v105 = v106[1];
        v106 -= 2;
      }
      while ( v117 < v105 );
    }
  }
  v5[3] = v134;
  *(uint16_t *)v74 = v126;
  *(uint16_t *)(v74 + 2) = v117;
  v86 = v5[1];
  v87 = a1[49] + 4 * v86;
  v88 = (uint16_t *)(v87 + 4);
  for ( kk = (uint16_t *)(v87 + 4); ; v88 = kk )
  {
    v91 = *v88;
    if ( v121 <= *v88 )
      break;
    v92 = *(uint32_t *)(v87 + 4);
    ++v86;
    v87 += 4;
    v93 = kk[1];
    *(uint32_t *)(v87 - 4) = v92;
    v94 = (uint16_t *)(v118 + 16 * v93);
    if ( (v91 & 1) != 0 )
    {
      v89 = v94[5] - v5[4];
      v90 = v94[2] - *v5;
      v135 = (v5[2] - *v94) | (v5[5] - v94[4]);
      --v94[3];
      if ( ((v90 | v89 | v135) & 0x8000u) == 0 )
        hkp3AxisSweep::endOverlap((int)(uintptr_t)(v5), (int)(uintptr_t)(v94), (hkMemoryAllocator::Self *)a5);
    }
    else
    {
      --v94[1];
    }
    kk += 2;
  }
  if ( v121 == v91 )
  {
    v103 = *(uint16_t *)(v87 + 6);
    if ( v117 > v103 )
    {
      v104 = (uint16_t *)(v87 + 8);
      do
      {
        ++v86;
        *(uint32_t *)v87 = *(uint32_t *)(v87 + 4);
        v87 += 4;
        --*(uint16_t *)(v118 + 16 * v103 + 2);
        if ( v121 != *v104 )
          break;
        v103 = v104[1];
        v104 += 2;
      }
      while ( v117 > v103 );
    }
  }
  v5[1] = v86;
  *(uint16_t *)(v87 + 2) = v117;
  *(uint16_t *)v87 = v121;
  return (uint16_t)v121;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::updateAabbs  (binary VA: 0x16acb60)
// Original: hkp3AxisSweep::updateAabbs
// ----------------------------------------------------------------------------
unsigned int ** hkp3AxisSweep::updateAabbs(int a1, unsigned int **a2, unsigned int *a3, int a4, hkMemoryAllocator::Self *a5, int *a6)
{
  unsigned int **result;
  unsigned int *v7;
  int v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  int v12;
  float v13; // xmm7_4
  float v14; // xmm6_4
  __m128i v15;
  float v16; // xmm5_4
  __m128i v17;
  __m128i v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  result = &a2[a4];
  v19 = (unsigned int)(uintptr_t)(result);
  if ( a2 < result )
  {
    v7 = a3 + 4;
    do
    {
      v13 = *(float *)(a1 + 96);
g4_m128_raw(v15) = *a3;
g4_m128_raw(v18) = a3[2];
g4_m128_raw(v17) = a3[1];
      v14 = *(float *)(a1 + 100);
      *(float *)g4_m128_ptr<int32_t>(v15) = fminf(
                                  (float)(*(float *)g4_m128_ptr<int32_t>(v15) + *(float *)(a1 + 64)) * v13,
                                  hkp3AxisSweep::s_MaxVal);
      v16 = *(float *)(a1 + 104);
      *(float *)g4_m128_ptr<int32_t>(v17) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v17) + *(float *)(a1 + 68)) * v14, unk_20C7924);
      *(float *)g4_m128_ptr<int32_t>(v18) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v18) + *(float *)(a1 + 72)) * v16, unk_20C7928);
      if ( *(float *)g4_m128_ptr<int32_t>(v15) > 0.0 )
      {
        *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) + 65536.0;
        v22 = ((unsigned int)_mm_cvtsi128_si32(v15) >> 7) & 0xFFFE;
        if ( *(float *)g4_m128_ptr<int32_t>(v17) > 0.0 )
          goto LABEL_4;
      }
      else
      {
        v22 = 0;
        if ( *(float *)g4_m128_ptr<int32_t>(v17) > 0.0 )
        {
LABEL_4:
          *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) + 65536.0;
          v21 = ((unsigned int)_mm_cvtsi128_si32(v17) >> 7) & 0xFFFE;
          if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
            goto LABEL_16;
          goto LABEL_5;
        }
      }
      v21 = 0;
      if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
      {
LABEL_16:
        v20 = 0;
        goto LABEL_6;
      }
LABEL_5:
      *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) + 65536.0;
      v20 = ((unsigned int)_mm_cvtsi128_si32(v18) >> 7) & 0xFFFE;
LABEL_6:
g4_m128_raw(v9) = *v7;
      v8 = 1;
      *(float *)g4_m128_ptr<int32_t>(v9) = (float)(*(float *)g4_m128_ptr<int32_t>(v9) + *(float *)(a1 + 80)) * v13;
g4_m128_raw(v10) = v7[1];
      *(float *)g4_m128_ptr<int32_t>(v9) = fminf(*(float *)g4_m128_ptr<int32_t>(v9), hkp3AxisSweep::s_MaxVal);
      *(float *)g4_m128_ptr<int32_t>(v10) = (float)(*(float *)g4_m128_ptr<int32_t>(v10) + *(float *)(a1 + 84)) * v14;
g4_m128_raw(v11) = v7[2];
      *(float *)g4_m128_ptr<int32_t>(v10) = fminf(*(float *)g4_m128_ptr<int32_t>(v10), unk_20C7924);
      *(float *)g4_m128_ptr<int32_t>(v11) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v11) + *(float *)(a1 + 88)) * v16, unk_20C7928);
      if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
      {
        *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) + 65536.0;
        v8 = (uint16_t)((unsigned int)_mm_cvtsi128_si32(v9) >> 7) | 1;
      }
      v12 = 1;
      if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
      {
        *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)g4_m128_ptr<int32_t>(v10) + 65536.0;
        v12 = (uint16_t)((unsigned int)_mm_cvtsi128_si32(v10) >> 7) | 1;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
      {
        v23 = 1;
      }
      else
      {
        *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) + 65536.0;
        v23 = (uint16_t)((unsigned int)_mm_cvtsi128_si32(v11) >> 7) | 1;
      }
      v24[4] = v8;
      v24[0] = v22;
      v24[1] = v21;
      v24[2] = v20;
      v24[6] = v23;
      v24[5] = v12;
      v7 += 8;
      hkp3AxisSweep::updateAabb((uint32_t *)a1, *a2, v24, a5, a6);
      a3 += 8;
      ++a2;
      result = (unsigned int **)v19;
    }
    while ( v19 > (unsigned int)(uintptr_t)(a2) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::updateAabbsUint32  (binary VA: 0x16acde0)
// Original: hkp3AxisSweep::updateAabbsUint32
// ----------------------------------------------------------------------------
unsigned int ** hkp3AxisSweep::updateAabbsUint32(uint32_t *a1, unsigned int **a2, uint32_t *a3, int a4, hkMemoryAllocator::Self *a5, int *a6)
{
  unsigned int **result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef unsigned int _g4_t_v20[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  result = &a2[a4];
  v18 = (unsigned int)(uintptr_t)(result);
  if ( a2 < result )
  {
    do
    {
      v9 = 0xFFFF;
      v10 = a3[4] >> 15;
      v19 = *a3 >> 15;
      v11 = a3[1] >> 15;
      v12 = a3[2] >> 15;
      if ( v10 != 0xFFFF )
        v9 = (v10 + 1) | 1;
      v13 = a3[5];
      v20[4] = v9;
      v14 = v13 >> 15;
      v15 = 0xFFFF;
      if ( v14 != 0xFFFF )
        v15 = (v14 + 1) | 1;
      v16 = a3[6];
      v20[5] = v15;
      v17 = v16 >> 15;
      if ( v17 == 0xFFFF )
        v8 = 0xFFFF;
      else
        v8 = (v17 + 1) | 1;
      v20[6] = v8;
      v20[0] = v19 & 0xFFFE;
      v20[1] = v11 & 0xFFFE;
      v20[2] = v12 & 0xFFFE;
      a3 += 8;
      hkp3AxisSweep::updateAabb(a1, *a2++, v20, a5, a6);
      result = (unsigned int **)v18;
    }
    while ( v18 > (unsigned int)(uintptr_t)(a2) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::shiftAllObjects  (binary VA: 0x16acf00)
// Original: hkp3AxisSweep::shiftAllObjects
// ----------------------------------------------------------------------------
int hkp3AxisSweep::shiftAllObjects(int a1, int a2, int a3, hkMemoryAllocator::Self *a4)
{
  int v4;
  float v5;
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11;
  int v12;
  int v13;
  uint16_t *v14;
  uint16_t v15; // si
  int v16;
  int v17;
  uint16_t *v18;
  int v19;
  int v20;
  int result;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint16_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int64_t _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint64_t _g4_t_v38[3];
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40[11];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (10u + sizeof(_g4_t_v24)) > _g4_s2 ? (10u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v29)) > _g4_s7 ? (32u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v30)) > _g4_s8 ? (36u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v31)) > _g4_s9 ? (48u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v32)) > _g4_s10 ? (52u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v33)) > _g4_s11 ? (56u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v34)) > _g4_s12 ? (64u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v36)) > _g4_s14 ? (72u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v37)) > _g4_s15 ? (76u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v38)) > _g4_s16 ? (80u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v39)) > _g4_s17 ? (104u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v40)) > _g4_s18 ? (112u + sizeof(_g4_t_v40)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 10u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 104u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);

  v4 = *(uint32_t *)(a2 + 12);
  v34 = *(float *)a2;
  v35 = *(float *)(a2 + 4);
  v5 = *(float *)(a2 + 8);
  v6 = *(float *)(a1 + 96);
  v37 = v4;
  v36 = v5;
  HIDWORD(v27) = (uint64_t)(int64_t)(float)(v34 * v6) >> 32;
  LODWORD(v27) = (int64_t)(float)(v34 * v6) & 0xFFFFFFFE;
  v38[0] = v27;
  *(float *)&v27 = (float)v27;
  v7 = *(float *)&v27 / v6;
  v8 = *(float *)(a1 + 100);
  v34 = v7;
  HIDWORD(v27) = (uint64_t)(int64_t)(float)(v35 * v8) >> 32;
  LODWORD(v27) = (int64_t)(float)(v35 * v8) & 0xFFFFFFFE;
  v38[1] = v27;
  *(float *)&v27 = (float)v27;
  v9 = *(float *)&v27 / v8;
  v10 = *(float *)(a1 + 104);
  HIDWORD(v27) = (uint64_t)(int64_t)(float)(v5 * v10) >> 32;
  LODWORD(v27) = (int64_t)(float)(v5 * v10) & 0xFFFFFFFE;
  HIDWORD(v38[2]) = HIDWORD(v27);
  *(float *)&v27 = (float)v27;
  LODWORD(v38[2]) = (int64_t)(float)(v5 * v10) & 0xFFFFFFFE;
  *(float *)a3 = v34;
  v35 = v9;
  *(float *)(a3 + 4) = v9;
  v36 = *(float *)&v27 / v10;
  *(float *)(a3 + 8) = *(float *)&v27 / v10;
  v31 = 0;
  v32 = 0;
  v33 = 0x80000000;
  *(uint32_t *)(a3 + 12) = v4;
  v22 = (int *)v38;
  v28 = (uint32_t *)(a1 + 172);
  do
  {
    v23 = *v22;
    v11 = v28[1];
    if ( *v22 < 0 )
    {
      v26 = 1;
      v29 = v11 - 1;
      v12 = 1;
    }
    else
    {
      v12 = v11 - 2;
      v26 = -1;
      v29 = 0;
    }
    v30 = 4 * v12;
    v13 = v12 + v26;
    if ( v12 != v29 )
    {
      while ( 1 )
      {
        v14 = (uint16_t *)(*v28 + v30);
        if ( (unsigned int)*v14 - 2 <= 0xFFF9 )
        {
          v15 = *v14 & 1;
          v24 = v14[1];
          v16 = v15 | (v23 + *v14) & 0xFFFFFFFE;
          v17 = *(uint32_t *)(a1 + 160);
          if ( v16 < 0 )
          {
            v16 = v15;
          }
          else if ( v16 > 65531 )
          {
            v16 = v15 | 0xFFFC;
          }
          *v14 = v16;
          if ( v16 == 65533 || v16 == 0 )
          {
            v18 = (uint16_t *)(v17 + 16 * v24);
            v19 = *(uint32_t *)(a1 + 172);
            v25 = *(uint32_t *)(a1 + 184);
            v40[0] = *(uint16_t *)(v19 + 4 * v18[4]);
            v40[1] = *(uint16_t *)(v25 + 4 * *v18);
            v20 = *(uint32_t *)(a1 + 196);
            v40[2] = *(uint16_t *)(v20 + 4 * v18[1]);
            v40[4] = *(uint16_t *)(v19 + 4 * v18[5]);
            v40[5] = *(uint16_t *)(v25 + 4 * v18[2]);
            v40[6] = *(uint16_t *)(v20 + 4 * v18[3]);
            hkp3AxisSweep::updateAabb((uint32_t *)a1, *((unsigned int **)v18 + 3), v40, a4, &v31);
          }
        }
        v30 += 4 * v26;
        if ( v29 == v13 )
          break;
        v13 += v26;
      }
    }
    v22 += 2;
    v28 += 3;
  }
  while ( v22 != &v39 );
  result = v33;
  v32 = 0;
  if ( v33 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v31,
             8 * v33);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::Construct  (binary VA: 0x16ad2c0)
// Original: hkp3AxisSweep::hkp3AxisSweep
// ----------------------------------------------------------------------------
void hkp3AxisSweep::Construct(hkp3AxisSweep::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, int a4)
{
  hkp3AxisSweep::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm6_4
  int v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  uint16_t *v24;
  int v25;
  int v26;
  uint16_t *v27;
  int v28;
  int v29;
  uint16_t *v30;
  uint32_t *v31;
  uint16_t *v32;
  int v33;
  int v34;
  uint16_t *v35;
  int v36;
  int v37;
  uint16_t *v38;
  int address;
  uint32_t *v40;
  int v41;
  int v42;
  int v43;
  uint16_t *v44;
  int v45;
  uint16_t *v46;
  int v47;
  uint32_t *v48;
  int v49;
  int v50;
  int v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef const hkVector4f::Self *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef const hkVector4f::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v52)) > _g4_s0 ? (8u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v53)) > _g4_s1 ? (20u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v54)) > _g4_s2 ? (24u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v55)) > _g4_s3 ? (28u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v56)) > _g4_s4 ? (28u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v57)) > _g4_s5 ? (32u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v58)) > _g4_s6 ? (32u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v59)) > _g4_s7 ? (32u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v60)) > _g4_s8 ? (36u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v61)) > _g4_s9 ? (36u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v62)) > _g4_s10 ? (36u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v63)) > _g4_s11 ? (36u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v64)) > _g4_s12 ? (36u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v65)) > _g4_s13 ? (36u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v66)) > _g4_s14 ? (36u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v67)) > _g4_s15 ? (40u + sizeof(_g4_t_v67)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);

  v67[3] = (uint32_t)(uintptr_t)(&self);
  v4 = self;
  v5 = a4;
  v57 = a2;
  v60 = a3;
  hkpBroadPhase::Construct(self, 0, 224, 4123);
  *((uint32_t *)v4 + 40) = 0;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_209A108);
  *((uint32_t *)v4 + 41) = 0;
  *((uint32_t *)v4 + 42) = 0x80000000;
  *((uint32_t *)v4 + 43) = 0;
  *((uint32_t *)v4 + 44) = 0;
  *((uint32_t *)v4 + 45) = 0x80000000;
  *((uint32_t *)v4 + 46) = 0;
  *((uint32_t *)v4 + 47) = 0;
  *((uint32_t *)v4 + 48) = 0x80000000;
  *((uint32_t *)v4 + 49) = 0;
  *((uint32_t *)v4 + 50) = 0;
  *((uint32_t *)v4 + 51) = 0x80000000;
  *((uint32_t *)v4 + 8) = *(uint32_t *)v57;
  *((uint32_t *)v4 + 9) = *((uint32_t *)v57 + 1);
  *((uint32_t *)v4 + 10) = *((uint32_t *)v57 + 2);
  *((uint32_t *)v4 + 11) = *((uint32_t *)v57 + 3);
  *((uint32_t *)v4 + 12) = *(uint32_t *)v60;
  *((uint32_t *)v4 + 13) = *((uint32_t *)v60 + 1);
  *((uint32_t *)v4 + 14) = *((uint32_t *)v60 + 2);
  *((uint32_t *)v4 + 15) = *((uint32_t *)v60 + 3);
  if ( v5 == 0 )
  {
    LOWORD(v5) = 1;
    goto LABEL_3;
  }
  if ( v5 > 0 )
  {
LABEL_3:
    v6 = -1;
    do
    {
      ++v6;
      v5 >>= 1;
    }
    while ( v5 != 0 );
    v58 = (1 << v6) + (1 << v6) + 510;
    v55 = (1 << v6) - 1;
    goto LABEL_6;
  }
  v55 = -1;
  v58 = 510;
  v6 = -1;
LABEL_6:
  v7 = *((uint32_t *)v4 + 42);
  v54 = (int *)((char *)v4 + 160);
  if ( (v7 & 0x3FFFFFFFu) <= 0xFE )
  {
    v8 = 255;
    if ( 2 * (v7 & 0x3FFFFFFFu) >= 0xFF )
      v8 = 2 * (v7 & 0x3FFFFFFF);
    v61 = v6;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v67, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v54, v8, 16);
    v7 = *((uint32_t *)v4 + 42);
    v6 = v61;
  }
  *((g4_int128_t *)v4 + 4) = 0;
  *((g4_int128_t *)v4 + 5) = 0;
  v9 = 10.0;
  *((uint32_t *)v4 + 24) = 1065353216;
  v10 = *((float *)v4 + 24);
  *((uint32_t *)v4 + 25) = 1065353216;
  *((uint32_t *)v4 + 26) = 1065353216;
  *((uint32_t *)v4 + 27) = 1065353216;
  v11 = 23;
g4_m128_raw(v12) = 0x41300000u;
  do
  {
    while ( 1 )
    {
      v13 = v12;
      *(float *)g4_m128_ptr<int32_t>(v13) = (float)(*(float *)g4_m128_ptr<int32_t>(v12) + v9) * 0.5;
      v14 = v13;
      *(float *)g4_m128_ptr<int32_t>(v14) = fminf(
                                  (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) + 1.0) + 0.0) * v10,
                                  hkp3AxisSweep::s_MaxVal);
      if ( *(float *)g4_m128_ptr<int32_t>(v14) <= 0.0 )
        break;
      *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) + 65536.0;
      if ( ((uint16_t)((unsigned int)_mm_cvtsi128_si32(v14) >> 7) | 1u) <= 0xB )
        break;
      --v11;
      v12 = v13;
      if ( v11 == 0 )
        goto LABEL_15;
    }
    --v11;
    v9 = (float)(*(float *)g4_m128_ptr<int32_t>(v12) + v9) * 0.5;
  }
  while ( v11 != 0 );
LABEL_15:
  v15 = *((uint32_t *)v4 + 41);
  *((uint32_t *)v4 + 24) = 0;
  *((uint32_t *)v4 + 25) = 0;
  *((uint32_t *)v4 + 26) = 0;
  *((uint32_t *)v4 + 27) = 0;
  *((float *)v4 + 55) = (float)((float)(v9 + *(float *)g4_m128_ptr<int32_t>(v12)) * 0.5) - 11.0;
  if ( v15 == (v7 & 0x3FFFFFFF) )
  {
    v66 = v6;
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v54, 16, v52);
    v15 = *((uint32_t *)v4 + 41);
    v6 = v66;
  }
  v53 = *((uint32_t *)v4 + 40) + 16 * v15;
  *((uint32_t *)v4 + 41) = v15 + 1;
  *(uint16_t *)(v53 + 2) = 0;
  *(uint16_t *)v53 = 0;
  *(uint16_t *)(v53 + 8) = 0;
  *(uint32_t *)(v53 + 12) = 0;
  v16 = *((uint32_t *)v4 + 45) & 0x3FFFFFFF;
  if ( v58 > v16 )
  {
    v17 = 2 * v16;
    if ( v58 >= v17 )
      v17 = v58;
    v62 = v6;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v67,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v4 + 43,
      v17,
      4);
    v6 = v62;
  }
  v18 = *((uint32_t *)v4 + 48) & 0x3FFFFFFF;
  if ( v18 <= 0x1FF )
  {
    v19 = 2 * v18;
    v20 = 512;
    if ( v19 >= 512 )
      v20 = v19;
    v63 = v6;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v67,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v4 + 46,
      v20,
      4);
    v6 = v63;
  }
  v21 = *((uint32_t *)v4 + 51) & 0x3FFFFFFF;
  if ( v21 <= 0x1FF )
  {
    v22 = 2 * v21;
    v23 = 512;
    if ( v22 >= 512 )
      v23 = v22;
    v64 = v6;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v67,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v4 + 49,
      v23,
      4);
    v6 = v64;
  }
  v24 = (uint16_t *)(*((uint32_t *)v4 + 43) + 4 * *((uint32_t *)v4 + 44));
  *v24 = 0;
  v24[1] = 0;
  v25 = *((uint32_t *)v4 + 47);
  v26 = *((uint32_t *)v4 + 46);
  ++*((uint32_t *)v4 + 44);
  v27 = (uint16_t *)(v26 + 4 * v25);
  *v27 = 0;
  v27[1] = 0;
  v28 = *((uint32_t *)v4 + 50);
  v29 = *((uint32_t *)v4 + 49);
  ++*((uint32_t *)v4 + 47);
  v30 = (uint16_t *)(v29 + 4 * v28);
  *v30 = 0;
  v30[1] = 0;
  ++*((uint32_t *)v4 + 50);
  *((uint32_t *)v4 + 53) = v6;
  *((uint32_t *)v4 + 52) = v55;
  *((uint32_t *)v4 + 54) = 0;
  if ( v55 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v40 = hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), (hkMemoryAllocator::Self *)(16 * v55));
    v41 = *((uint32_t *)v4 + 52);
    *((uint32_t *)v4 + 54) = (uint32_t)(uintptr_t)(v40);
    if ( v41 > 0 )
    {
      v65 = 0;
      while ( 1 )
      {
        v47 = v65++;
        v56 = 16 * v47;
        v48 = &v40[4 * v47];
        *(uint16_t *)v48 = 0;
        *((uint16_t *)v48 + 1) = 0;
        v48[1] = 0;
        v48[2] = 0;
        v48[3] = 0x80000000;
        v59 = *((uint32_t *)v4 + 41);
        v49 = 16 - *((uint32_t *)v4 + 53);
        *(uint16_t *)v48 = v59;
        v50 = v65 << v49;
        *((uint16_t *)v48 + 1) = v65 << v49;
        v51 = *((uint32_t *)v4 + 41);
        if ( v51 == (*((uint32_t *)v4 + 42) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)v54,
            16,
            v52);
          v51 = *((uint32_t *)v4 + 41);
        }
        v42 = v51;
        v43 = *((uint32_t *)v4 + 40) + 16 * v51;
        *((uint32_t *)v4 + 41) = v42 + 1;
        *(uint16_t *)(v43 + 8) = *((uint32_t *)v4 + 44);
        v44 = (uint16_t *)(*((uint32_t *)v4 + 43) + 4 * *((uint32_t *)v4 + 44));
        *v44 = v50;
        v44[1] = v59;
        v45 = *((uint32_t *)v4 + 44) + 1;
        *((uint32_t *)v4 + 44) = v45;
        *(uint16_t *)(v43 + 10) = v45;
        v46 = (uint16_t *)(*((uint32_t *)v4 + 43) + 4 * *((uint32_t *)v4 + 44));
        *v46 = v50 | 1;
        v46[1] = v59;
        ++*((uint32_t *)v4 + 44);
        *(uint32_t *)(v43 + 12) = v56 | 1;
        *(uint16_t *)(v43 + 2) = 0;
        *(uint16_t *)v43 = 0;
        *(uint16_t *)(v43 + 6) = 1;
        *(uint16_t *)(v43 + 4) = 1;
        if ( *((uint32_t *)v4 + 52) <= v65 )
          break;
        v40 = *((uint32_t **)v4 + 54);
      }
    }
  }
  v31 = *((uint32_t **)v4 + 40);
  *(uint32_t *)v53 = *v31;
  *(uint32_t *)(v53 + 4) = v31[1];
  *(uint32_t *)(v53 + 8) = v31[2];
  *(uint32_t *)(v53 + 12) = v31[3];
  *(uint16_t *)(v53 + 10) = *((uint32_t *)v4 + 44);
  *(uint16_t *)(v53 + 4) = *((uint32_t *)v4 + 47);
  *(uint16_t *)(v53 + 6) = *((uint32_t *)v4 + 50);
  v32 = (uint16_t *)(*((uint32_t *)v4 + 43) + 4 * *((uint32_t *)v4 + 44));
  *v32 = -3;
  v32[1] = 0;
  v33 = *((uint32_t *)v4 + 47);
  v34 = *((uint32_t *)v4 + 46);
  ++*((uint32_t *)v4 + 44);
  v35 = (uint16_t *)(v34 + 4 * v33);
  *v35 = -3;
  v35[1] = 0;
  v36 = *((uint32_t *)v4 + 50);
  v37 = *((uint32_t *)v4 + 49);
  ++*((uint32_t *)v4 + 47);
  v38 = (uint16_t *)(v37 + 4 * v36);
  *v38 = -3;
  v38[1] = 0;
  ++*((uint32_t *)v4 + 50);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::hkpBpAxis::insert  (binary VA: 0x16ada10)
// Original: hkp3AxisSweep::hkpBpAxis::insert
// ----------------------------------------------------------------------------
uint16_t * hkp3AxisSweep::hkpBpAxis::insert(int *a1, int a2, unsigned int a3, uint16_t a4, uint16_t a5, uint16_t *a6, uint16_t *a7)
{
  unsigned int v7;
  int v8;
  int v9;
  uint16_t v10; // di
  uint16_t v11;
  int v12;
  uint32_t *v13;
  int *v14;
  uint16_t v15;
  int v16;
  int v17;
  uint16_t v18;
  int v19;
  int v20;
  typedef uint16_t _g4_t_v22;
  typedef uint16_t *_g4_t_v23;
  typedef uint16_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint16_t _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef uint16_t _g4_t_v28;
  typedef uint32_t _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v29)) > _g4_s7 ? (32u + sizeof(_g4_t_v29)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  v29[3] = (uint32_t)(uintptr_t)(&a1);
  v28 = a5;
  v27 = a1;
  v7 = a3;
  v23 = a7;
  v25 = a1[1];
  v8 = a1[2] & 0x3FFFFFFF;
  v9 = v25 + 2;
  v26 = a4;
  v24 = a6;
  v10 = a4;
  v11 = a5;
  if ( v25 + 2 > v8 )
  {
    v12 = 2 * v8;
    v22 = a5;
    if ( v12 < v9 )
      v12 = v25 + 2;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v29, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v12, 4);
    v11 = v22;
    v9 = v25 + 2;
  }
  v27[1] = v9;
  v13 = (uint32_t *)(*v27 + 4 * v25 - 4);
  v13[2] = *v13;
  v14 = (int *)(v13 - 1);
  v15 = *((uint16_t *)v13 - 2);
  if ( v28 < v15 )
  {
    do
    {
      v16 = *v14--;
      v14[3] = v16;
      v15 = *(uint16_t *)v14;
    }
    while ( *(uint16_t *)v14 > v11 );
  }
  if ( v28 == v15 )
  {
    do
    {
      if ( *((uint16_t *)v14 + 1) <= v7 )
        break;
      v17 = *v14--;
      v14[3] = v17;
    }
    while ( v11 == *(uint16_t *)v14 );
  }
  *((uint16_t *)v14 + 4) = v28;
  *((uint16_t *)v14 + 5) = v7;
  *v23 = (((int)(uintptr_t)(v14) - *v27) >> 2) + 2;
  v18 = *(uint16_t *)v14;
  if ( v26 < *(uint16_t *)v14 )
  {
    do
    {
      v19 = *v14--;
      v14[2] = v19;
      v18 = *(uint16_t *)v14;
    }
    while ( *(uint16_t *)v14 > v10 );
  }
  if ( v26 == v18 )
  {
    do
    {
      if ( *((uint16_t *)v14 + 1) <= v7 )
        break;
      v20 = *v14--;
      v14[2] = v20;
    }
    while ( v10 == *(uint16_t *)v14 );
  }
  *((uint16_t *)v14 + 3) = v7;
  *((uint16_t *)v14 + 2) = v26;
  *v24 = (((int)(uintptr_t)(v14) - *v27) >> 2) + 1;
  return v24;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::hkpBpAxis::remove  (binary VA: 0x16adb90)
// Original: hkp3AxisSweep::hkpBpAxis::remove
// ----------------------------------------------------------------------------
unsigned int hkp3AxisSweep::hkpBpAxis::remove(hkp3AxisSweep::hkpBpAxis::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  unsigned int result;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int i;
  int v10;

  v3 = *(uint32_t *)self;
  v4 = *(uint32_t *)self + 4 * a3;
  result = *(uint32_t *)self + 4 * a2;
  if ( v4 - 4 > result )
  {
    v6 = *(uint32_t *)self + 4 * a2;
    do
    {
      v7 = *(uint32_t *)(v6 + 4);
      v6 += 4;
      *(uint32_t *)(v6 - 4) = v7;
    }
    while ( v4 - 4 > v6 );
    result += 4 * ((v4 - 5 - result) >> 2) + 4;
    v3 = *(uint32_t *)self;
  }
  v8 = *((uint32_t *)self + 1) - 2;
  *((uint32_t *)self + 1) = v8;
  for ( i = v3 + 4 * v8; result < i; *(uint32_t *)(result - 4) = v10 )
  {
    v10 = *(uint32_t *)(result + 8);
    result += 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::updateNodesAfterInsert  (binary VA: 0x16adc10)
// Original: hkp3AxisSweep::updateNodesAfterInsert
// ----------------------------------------------------------------------------
unsigned int hkp3AxisSweep::updateNodesAfterInsert(int a1, unsigned int a2, int a3, uint16_t *a4)
{
  unsigned int result;
  uint16_t v5; // si
  uint16_t v6; // bp
  uint16_t v7; // di
  int v8;
  int16_t v9;
  int v10;
  int16_t v11;
  int v12;
  int16_t v13;
  int v14;
  int16_t v15;
  int v16;
  int16_t v17;
  int v18;
  int v19;
  uint16_t v20;
  uint16_t v21;
  int v22;

  result = a2;
  v22 = 16 * a3;
  v5 = a4[4] - 1;
  v20 = *a4 - 1;
  v21 = a4[2] - 2;
  v6 = a4[1] - 1;
  v7 = a4[3] - 2;
  if ( a2 < a2 + v22 )
  {
    v19 = (uint16_t)(a4[5] - 2);
    do
    {
      v8 = *(uint16_t *)(result + 8);
      result += 16;
      v9 = v8 + ((unsigned int)(v19 - v8) >> 31) + (((unsigned int)v5 - v8) >> 31);
      v10 = *(uint16_t *)(result - 16);
      *(uint16_t *)(result - 8) = v9;
      v11 = v10 + (((unsigned int)v21 - v10) >> 31) + (((unsigned int)v20 - v10) >> 31);
      v12 = *(uint16_t *)(result - 6);
      *(uint16_t *)(result - 16) = v11;
      v13 = v12 + ((unsigned int)(v19 - v12) >> 31) + (((unsigned int)v5 - v12) >> 31);
      v14 = *(uint16_t *)(result - 12);
      *(uint16_t *)(result - 6) = v13;
      v15 = v14 + (((unsigned int)v21 - v14) >> 31) + (((unsigned int)v20 - v14) >> 31);
      v16 = *(uint16_t *)(result - 14);
      *(uint16_t *)(result - 12) = v15;
      v17 = v16 + (((unsigned int)v7 - v16) >> 31) + (((unsigned int)v6 - v16) >> 31);
      v18 = *(uint16_t *)(result - 10);
      *(uint16_t *)(result - 14) = v17;
      *(uint16_t *)(result - 10) = v18 + (((unsigned int)v7 - v18) >> 31) + (((unsigned int)v6 - v18) >> 31);
    }
    while ( a2 + v22 > result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::collide1Axis  (binary VA: 0x16add60)
// Original: hkp3AxisSweep::collide1Axis
// ----------------------------------------------------------------------------
int hkp3AxisSweep::collide1Axis(int a1, int a2, int a3, int a4, int a5, int a6, hkMemoryAllocator::Self *a7)
{
  uint16_t v8;
  int result;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint16_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint16_t *v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  hkMemoryAllocator::Self *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  uint16_t v32;
  uint16_t v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;

  v38 = *(uint32_t *)(a1 + 216);
  do
  {
    while ( 1 )
    {
      v8 = *(uint16_t *)(a2 + 8);
      result = *(uint16_t *)(a4 + 8);
      if ( v8 > (uint16_t)result )
        break;
      v16 = a4;
      v33 = *(uint16_t *)(a2 + 10);
      if ( (uint16_t)result < v33 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (((*(uint32_t *)(a2 + 4) - *(uint32_t *)v16) | (*(uint32_t *)(v16 + 4) - *(uint32_t *)a2)) & 0x80008000) == 0 )
            {
              v17 = *(uint32_t *)(v16 + 12);
              if ( (v17 & 1) == 0 )
              {
                v22 = *((uint32_t *)a7 + 1);
                if ( v22 == (*((uint32_t *)a7 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a7, 8, v31);
                  v22 = *((uint32_t *)a7 + 1);
                }
                v23 = *(uint32_t *)a7;
                *((uint32_t *)a7 + 1) = v22 + 1;
                v24 = (uint32_t *)(v23 + 8 * v22);
                *v24 = *(uint32_t *)(a2 + 12);
                v24[1] = *(uint32_t *)(v16 + 12);
                goto LABEL_22;
              }
              if ( a6 != 1 )
                break;
            }
LABEL_22:
            v16 += 16;
            result = v33;
            if ( v33 <= *(uint16_t *)(v16 + 8) )
              goto LABEL_35;
          }
          v18 = (uint32_t *)(v38 + (v17 & 0xFFFFFFFE));
          v35 = v18;
          v19 = **(uint32_t **)(a2 + 12);
          if ( a6 == 0 )
          {
            v29 = v18[2];
            if ( v29 == (v18[3] & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)(v18 + 1),
                2,
                v31);
              v29 = v35[2];
            }
            *(uint16_t *)(v35[1] + 2 * v29) = v19;
            ++v35[2];
            goto LABEL_22;
          }
          v37 = v18[2];
          v20 = (uint16_t *)v18[1];
          if ( v37 <= 0 )
            goto LABEL_32;
          if ( (uint16_t)v19 != *v20 )
            break;
          v40 = 0;
          v21 = 0;
LABEL_33:
          v35[2] = v37 - 1;
          if ( v37 - 1 == v21 )
            goto LABEL_22;
          v16 += 16;
          v20[v40] = v20[v37 - 1];
          result = v33;
          if ( v33 <= *(uint16_t *)(v16 + 8) )
            goto LABEL_35;
        }
        v21 = 0;
        while ( ++v21 != v37 )
        {
          if ( (uint16_t)v19 == v20[v21] )
          {
            v40 = v21;
            goto LABEL_33;
          }
        }
LABEL_32:
        v40 = -1;
        v21 = -1;
        goto LABEL_33;
      }
LABEL_35:
      --a3;
      a2 += 16;
      if ( a3 <= 0 )
        return result;
    }
    v10 = a2;
    result = *(uint16_t *)(a4 + 10);
    v32 = *(uint16_t *)(a4 + 10);
    if ( v8 < (uint16_t)result )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (((*(uint32_t *)(a4 + 4) - *(uint32_t *)v10) | (*(uint32_t *)(v10 + 4) - *(uint32_t *)a4)) & 0x80008000) == 0 )
          {
            v11 = *(uint32_t *)(a4 + 12);
            if ( (v11 & 1) == 0 )
            {
              v25 = a7;
              v26 = *((uint32_t *)a7 + 1);
              if ( v26 == (*((uint32_t *)a7 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a7, 8, v31);
                v25 = a7;
                v26 = *((uint32_t *)a7 + 1);
              }
              v27 = *(uint32_t *)a7;
              *((uint32_t *)v25 + 1) = v26 + 1;
              v28 = (uint32_t *)(v27 + 8 * v26);
              *v28 = *(uint32_t *)(v10 + 12);
              v28[1] = *(uint32_t *)(a4 + 12);
              goto LABEL_5;
            }
            if ( a6 != 1 )
              break;
          }
LABEL_5:
          v10 += 16;
          result = v32;
          if ( v32 <= *(uint16_t *)(v10 + 8) )
            goto LABEL_18;
        }
        v12 = (uint32_t *)(v38 + (v11 & 0xFFFFFFFE));
        v34 = v12;
        v13 = **(uint32_t **)(v10 + 12);
        if ( a6 == 0 )
        {
          v30 = v12[2];
          if ( v30 == (v12[3] & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v12 + 1),
              2,
              v31);
            v30 = v34[2];
          }
          *(uint16_t *)(v34[1] + 2 * v30) = v13;
          ++v34[2];
          goto LABEL_5;
        }
        v36 = v12[2];
        v14 = (uint16_t *)v12[1];
        if ( v36 <= 0 )
          goto LABEL_15;
        if ( (uint16_t)v13 != *v14 )
          break;
        v39 = 0;
        v15 = 0;
LABEL_16:
        v34[2] = v36 - 1;
        if ( v36 - 1 == v15 )
          goto LABEL_5;
        v10 += 16;
        v14[v39] = v14[v36 - 1];
        result = v32;
        if ( v32 <= *(uint16_t *)(v10 + 8) )
          goto LABEL_18;
      }
      v15 = 0;
      while ( ++v15 != v36 )
      {
        if ( (uint16_t)v13 == v14[v15] )
        {
          v39 = v15;
          goto LABEL_16;
        }
      }
LABEL_15:
      v39 = -1;
      v15 = -1;
      goto LABEL_16;
    }
LABEL_18:
    --a5;
    a4 += 16;
  }
  while ( a5 > 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::collide1Axis  (binary VA: 0x16ae1b0)
// Original: hkp3AxisSweep::collide1Axis
// ----------------------------------------------------------------------------
void hkp3AxisSweep::collide1Axis(int a1, int a2, int a3, hkMemoryAllocator::Self *a4)
{
  uint16_t v6; // bp
  int i;
  int v8;
  uint32_t *v9;
  hkMemoryAllocator::Self *v10;

  while ( --a3 > 0 )
  {
    a2 += 16;
    v6 = *(uint16_t *)(a2 - 6);
    for ( i = a2; v6 > *(uint16_t *)(i + 8); i += 16 )
    {
      if ( (((*(uint32_t *)(a2 - 12) - *(uint32_t *)i) | (*(uint32_t *)(i + 4) - *(uint32_t *)(a2 - 16))) & 0x80008000) == 0
        && (*(uint8_t *)(i + 12) & 1) == 0 )
      {
        v8 = *((uint32_t *)a4 + 1);
        if ( v8 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 8, (int)(uintptr_t)(a4));
          a4 = v10;
          v8 = *((uint32_t *)v10 + 1);
        }
        *((uint32_t *)a4 + 1) = v8 + 1;
        v9 = (uint32_t *)(*(uint32_t *)a4 + 8 * v8);
        *v9 = *(uint32_t *)(a2 - 4);
        v9[1] = *(uint32_t *)(i + 12);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::updateNodesAfterBatchTailInsert  (binary VA: 0x16ae280)
// Original: hkp3AxisSweep::updateNodesAfterBatchTailInsert
// ----------------------------------------------------------------------------
unsigned int hkp3AxisSweep::updateNodesAfterBatchTailInsert(int a1, unsigned int a2, int a3, int16_t a4, uint16_t *a5)
{
  unsigned int result;
  uint16_t v6; // di
  uint16_t v7; // si
  unsigned int v8;
  int16_t v9;
  unsigned int v10;
  int16_t v11;
  unsigned int v12;
  int16_t v13;
  unsigned int v14;
  int16_t v15;
  int v16;
  int16_t v17;
  int v18;
  int v19;
  unsigned int v20;

  result = a2;
  v20 = a2 + 16 * a3;
  v6 = *a5 - 1;
  v7 = a5[2] - 1;
  if ( a2 < v20 )
  {
    v19 = (uint16_t)(a5[4] - 1);
    do
    {
      v8 = *(uint16_t *)(result + 8);
      result += 16;
      v9 = v8 + ((uint8_t)a4 & (v6 < v8));
      v10 = *(uint16_t *)(result - 16);
      *(uint16_t *)(result - 8) = v9;
      v11 = v10 + ((uint8_t)a4 & (v7 < v10));
      v12 = *(uint16_t *)(result - 6);
      *(uint16_t *)(result - 16) = v11;
      v13 = v12 + ((uint8_t)a4 & (v6 < v12));
      v14 = *(uint16_t *)(result - 12);
      *(uint16_t *)(result - 6) = v13;
      v15 = v14 + ((uint8_t)a4 & (v7 < v14));
      v16 = *(uint16_t *)(result - 14);
      *(uint16_t *)(result - 12) = v15;
      v17 = v16 + ((uint8_t)a4 & (v19 - v16 < 0));
      v18 = *(uint16_t *)(result - 10);
      *(uint16_t *)(result - 14) = v17;
      *(uint16_t *)(result - 10) = v18 + ((uint8_t)a4 & (v19 - v18 < 0));
    }
    while ( v20 > result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::updateNodesAfterDelete  (binary VA: 0x16af110)
// Original: hkp3AxisSweep::updateNodesAfterDelete
// ----------------------------------------------------------------------------
int hkp3AxisSweep::updateNodesAfterDelete(int a1, int a2, int a3, uint16_t *a4)
{
  int result;
  uint16_t v5; // si
  int v6;
  int v7;
  int v8;
  int v9;
  uint16_t v10;
  uint16_t v11;
  int v12;

  result = a2;
  v12 = 16 * a3;
  v10 = a4[2];
  v5 = *a4;
  v11 = a4[1];
  if ( a2 != a2 + v12 )
  {
    v9 = a4[5];
    v8 = a4[4];
    v6 = a4[3];
    do
    {
      v7 = *(uint16_t *)(result + 8);
      result += 16;
      *(uint16_t *)(result - 8) = v7 - (((unsigned int)(v9 - v7) >> 31) + ((unsigned int)(v8 - v7) >> 31));
      *(uint16_t *)(result - 6) -= ((v9 - (unsigned int)*(uint16_t *)(result - 6)) >> 31)
                              + ((v8 - (unsigned int)*(uint16_t *)(result - 6)) >> 31);
      *(uint16_t *)(result - 16) -= (v10 < (unsigned int)*(uint16_t *)(result - 16))
                               + (v5 < (unsigned int)*(uint16_t *)(result - 16));
      *(uint16_t *)(result - 12) -= (v10 < (unsigned int)*(uint16_t *)(result - 12))
                               + (v5 < (unsigned int)*(uint16_t *)(result - 12));
      *(uint16_t *)(result - 14) -= ((v6 - (unsigned int)*(uint16_t *)(result - 14)) >> 31)
                               + (v11 < (unsigned int)*(uint16_t *)(result - 14));
      *(uint16_t *)(result - 10) = (__PAIR64__(*(uint16_t *)(result - 10), v11)
                               - __PAIR64__(
                                   (v6 - (unsigned int)*(uint16_t *)(result - 10)) >> 31,
                                   *(uint16_t *)(result - 10))) >> 32;
    }
    while ( a2 + v12 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::setBitsBasedOnXInterval  (binary VA: 0x16af240)
// Original: hkp3AxisSweep::setBitsBasedOnXInterval
// ----------------------------------------------------------------------------
unsigned int hkp3AxisSweep::setBitsBasedOnXInterval(uint32_t *a1, int a2, int a3, int a4, int16_t a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  uint16_t *v12;
  uint16_t *v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  uint16_t v19;
  unsigned int result;
  int v21;
  uint16_t v22;
  uint16_t v23;
  unsigned int v24;
  uint16_t *v25;
  int v26;
  unsigned int v27;

  v6 = a6;
  v22 = *(uint16_t *)(a4 + 10);
  v7 = 0;
  v23 = *(uint16_t *)(a4 + 8);
  if ( a2 >> 7 >= 0 )
  {
    do
    {
      v8 = 16 * v7++;
      *(uint32_t *)(a6 + v8) = 0;
      *(uint32_t *)(a6 + v8 + 4) = 0;
      *(uint32_t *)(a6 + v8 + 8) = 0;
      *(uint32_t *)(a6 + v8 + 12) = 0;
    }
    while ( (a2 >> 7) + 1 != v7 );
    v6 = a6;
  }
  v9 = a1[43];
  v10 = v9 + 4;
  if ( a1[52] != 0 )
  {
    v11 = 16 - a1[53];
    if ( a3 >> v11 > 0 )
    {
      v12 = (uint16_t *)(a1[54] + 16 * ((a3 >> v11) + 0xFFFFFFF));
      *(uint32_t *)(v6 + ((*v12 >> 3) & 0x1FFC)) ^= 1 << *v12;
      v13 = *((uint16_t **)v12 + 1);
      v25 = &v13[*((uint32_t *)v12 + 2)];
      if ( *((int *)v12 + 2) > 0 )
      {
        do
        {
          v14 = *v13;
          if ( (uint16_t)v14 != a5 )
            *(uint32_t *)(v6 + ((v14 >> 3) & 0x1FFC)) ^= 1 << v14;
          ++v13;
        }
        while ( v13 != v25 );
      }
      v26 = a1[40] + 16 * *v12;
      v15 = a1[43];
      v10 = v15 + 4 * *(uint16_t *)(v26 + 8) + 4;
      v16 = v15 + 4 * *(uint16_t *)(v26 + 10);
      if ( v10 >= v16 )
      {
        v9 = a1[43];
      }
      else
      {
        do
        {
          if ( (*(uint8_t *)v10 & 1) == 0 )
          {
            v17 = (*(uint16_t *)(v10 + 2) >> 3) & 0x1FFC;
            *(uint32_t *)(v6 + v17) &= ~(1 << *(uint16_t *)(v10 + 2));
          }
          v10 += 4;
        }
        while ( v10 < v16 );
        v9 = a1[43];
        v10 = v9 + 4 * *(uint16_t *)(v26 + 8) + 4;
      }
    }
  }
  v24 = v9 + 4 * v23;
  if ( v10 < v24 )
  {
    v18 = v10;
    do
    {
      v19 = *(uint16_t *)(v18 + 2);
      v18 += 4;
      *(uint32_t *)(v6 + ((v19 >> 3) & 0x1FFC)) ^= 1 << v19;
    }
    while ( v18 < v24 );
    v10 += 4 * ((v24 + ~v10) >> 2) + 4;
    v9 = a1[43];
  }
  result = v10 + 4;
  v27 = v9 + 4 * v22;
  if ( v10 + 4 < v27 )
  {
    do
    {
      if ( (*(uint8_t *)result & 1) == 0 )
      {
        v21 = (*(uint16_t *)(result + 2) >> 3) & 0x1FFC;
        *(uint32_t *)(v6 + v21) ^= 1 << *(uint16_t *)(result + 2);
      }
      result += 4;
    }
    while ( result < v27 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::reQuerySingleObject  (binary VA: 0x16af4c0)
// Original: hkp3AxisSweep::reQuerySingleObject
// ----------------------------------------------------------------------------
uint32_t * hkp3AxisSweep::reQuerySingleObject(uint32_t *a1, uint32_t *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  uint32_t *result;
  unsigned int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v10)) > _g4_s1 ? (36u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v11)) > _g4_s2 ? (40u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v12)) > _g4_s3 ? (44u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v14)) > _g4_s5 ? (52u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v15)) > _g4_s6 ? (56u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v16)) > _g4_s7 ? (60u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v17)) > _g4_s8 ? (60u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v18)) > _g4_s9 ? (64u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);

  v12 = 0;
  v16 = a1[41];
  if ( v16 >> 5 == -8
    || (v18 = 4 * ((v16 >> 5) + 8),
        v12 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                (uint32_t *)(hkContainerTempAllocator::s_alloc),
                &v18),
        v11 = v18 / 4,
        v18 / 4 == 0) )
  {
    v11 = 0x80000000;
  }
  v3 = a1[40] + 16 * *a2;
  hkp3AxisSweep::setBitsBasedOnXInterval(
    a1,
    v16,
    *(uint16_t *)(a1[43] + 4 * *(uint16_t *)(v3 + 8)),
    v3,
    *a2,
    v12);
  v15 = (uint32_t *)a1[40];
  v17 = (uint32_t *)v12;
  result = (uint32_t *)(v12 + 4 * ((int)a1[41] >> 5) + 4);
  v13 = result;
  if ( (unsigned int)(uintptr_t)(result) > v12 )
  {
    result = (uint32_t *)v12;
    do
    {
      v5 = *result;
      v6 = v15;
      while ( v5 != 0 )
      {
        while ( (uint8_t)v5 == 0 )
        {
          v5 >>= 8;
          v6 += 32;
          if ( v5 == 0 )
            goto LABEL_9;
        }
        if ( (v5 & 1) != 0 && (((v6[1] - *(uint32_t *)v3) | (*(uint32_t *)(v3 + 4) - *v6)) & 0x80008000) == 0 )
        {
          v14 = v6[3];
          if ( (v14 & 1) == 0 )
          {
            v7 = *((uint32_t *)a3 + 1);
            if ( v7 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
            {
              v10 = v5;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 8, v9);
              v7 = *((uint32_t *)a3 + 1);
              v5 = v10;
            }
            v8 = (uint32_t *)(*(uint32_t *)a3 + 8 * v7);
            *v8 = (uint32_t)(uintptr_t)(a2);
            v8[1] = v14;
            ++*((uint32_t *)a3 + 1);
          }
        }
        v5 >>= 1;
        v6 += 4;
      }
LABEL_9:
      ++v17;
      v15 += 128;
      result = v17;
    }
    while ( v13 > v17 );
  }
  if ( v11 >= 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, unsigned int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                       (uint32_t *)(hkContainerTempAllocator::s_alloc),
                       v12,
                       4 * v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::querySingleAabbAddObject  (binary VA: 0x16af6e0)
// Original: hkp3AxisSweep::querySingleAabbAddObject
// ----------------------------------------------------------------------------
int hkp3AxisSweep::querySingleAabbAddObject(uint32_t *a1, int a2, int16_t a3, unsigned int *a4, uint32_t *a5, hkMemoryAllocator::Self *a6)
{
  int result;
  uint32_t *v7;
  unsigned int j;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  unsigned int i;
  unsigned int v17;
  unsigned int v18;

  v15 = (uint32_t *)a1[40];
  result = (int)(uintptr_t)(&a4[((int)a1[41] >> 5) + 1]);
  for ( i = result; i > (unsigned int)(uintptr_t)(a4); result = i )
  {
    v7 = v15;
    for ( j = *a4; j != 0; v7 += 4 )
    {
      while ( (uint8_t)j == 0 )
      {
        j >>= 8;
        v7 += 32;
        if ( j == 0 )
          goto LABEL_13;
      }
      if ( (j & 1) != 0 && (((v7[1] - *a5) | (a5[1] - *v7)) & 0x80008000) == 0 )
      {
        v9 = v7[3];
        if ( (v9 & 1) != 0 )
        {
          v12 = (uint32_t *)(a1[54] + (v9 & 0xFFFFFFFE));
          v13 = v12[2];
          if ( v13 == (v12[3] & 0x3FFFFFFF) )
          {
            v18 = j;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v12 + 1),
              2,
              v14);
            v13 = v12[2];
            j = v18;
          }
          *(uint16_t *)(v12[1] + 2 * v13) = a3;
          ++v12[2];
        }
        else
        {
          v10 = *((uint32_t *)a6 + 1);
          if ( v10 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
          {
            v17 = j;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 8, v14);
            v10 = *((uint32_t *)a6 + 1);
            j = v17;
          }
          v11 = (uint32_t *)(*(uint32_t *)a6 + 8 * v10);
          *v11 = a2;
          v11[1] = v9;
          ++*((uint32_t *)a6 + 1);
        }
      }
      j >>= 1;
    }
LABEL_13:
    v15 += 128;
    ++a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::addObject  (binary VA: 0x16af890)
// Original: hkp3AxisSweep::addObject
// ----------------------------------------------------------------------------
int hkp3AxisSweep::addObject(int *a1, unsigned int *a2, uint32_t *a3, hkMemoryAllocator::Self *a4, char a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int *v18;
  int v19;
  int result;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef uint32_t _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v28)) > _g4_s7 ? (36u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v29)) > _g4_s8 ? (40u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v30)) > _g4_s9 ? (40u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v31)) > _g4_s10 ? (44u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v32)) > _g4_s11 ? (48u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v33)) > _g4_s12 ? (52u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v34)) > _g4_s13 ? (52u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v35)) > _g4_s14 ? (56u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v36)) > _g4_s15 ? (56u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v37)) > _g4_s16 ? (60u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v38)) > _g4_s17 ? (64u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v39)) > _g4_s18 ? (80u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v40)) > _g4_s19 ? (84u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v41)) > _g4_s20 ? (88u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v42)) > _g4_s21 ? (92u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v43)) > _g4_s22 ? (96u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v44)) > _g4_s23 ? (100u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v45)) > _g4_s24 ? (104u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v46)) > _g4_s25 ? (108u + sizeof(_g4_t_v46)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);

  v33 = 0xFFFF;
  v5 = a3[4] >> 15;
  v6 = *a3 >> 15;
  v7 = a3[1] >> 15;
  v8 = a3[2] >> 15;
  if ( v5 != 0xFFFF )
    v33 = (v5 + 1) | 1;
  v35 = 0xFFFF;
  v43 = v33;
  v9 = a3[5] >> 15;
  if ( v9 != 0xFFFF )
    v35 = (v9 + 1) | 1;
  v10 = a3[6] >> 15;
  v44 = v35;
  if ( v10 == 0xFFFF )
    v11 = 0xFFFF;
  else
    v11 = (v10 + 1) | 1;
  v12 = v6 & 0xFFFE;
  v13 = v7 & 0xFFFE;
  v14 = v8 & 0xFFFE;
  v45 = v11;
  v39 = v12;
  v40 = v13;
  v41 = v14;
  if ( a5 != 0 )
  {
    v39 = v12 >= 0x7FFE ? 0xFFFC : 0;
    v31 = v39;
    v43 = v43 < 0x7FFE ? 1 : 65533;
    LOWORD(v33) = v43;
    v32 = v13 >= 0x7FFE ? 0xFFFC : 0;
    v40 = v32;
    v44 = v44 < 0x7FFE ? 1 : 65533;
    LOWORD(v35) = v44;
    v41 = v14 >= 0x7FFE ? 0xFFFC : 0;
    v28 = v41;
    v11 = v45 < 0x7FFE ? 1 : 65533;
  }
  else
  {
    v28 = v14;
    v32 = v13;
    v31 = v12;
  }
  v37 = a1[41];
  v15 = v37;
  if ( v37 == (a1[42] & 0x3FFFFFFF) )
  {
    v30 = v11;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(a1 + 40),
      16,
      v21);
    v11 = v30;
    v15 = a1[41];
  }
  v29 = v11;
  v16 = a1[40];
  a1[41] = v15 + 1;
  v17 = 16 * v15 + v16;
  hkp3AxisSweep::hkpBpAxis::insert(a1 + 43, v16, v37, v31, v33, (uint16_t *)(v17 + 8), (uint16_t *)(v17 + 10));
  hkp3AxisSweep::hkpBpAxis::insert(a1 + 46, v16, v37, v32, v35, (uint16_t *)v17, (uint16_t *)(v17 + 4));
  hkp3AxisSweep::hkpBpAxis::insert(a1 + 49, v16, v37, v28, v29, (uint16_t *)(v17 + 2), (uint16_t *)(v17 + 6));
  hkp3AxisSweep::updateNodesAfterInsert((int)(uintptr_t)(a1), v16, v37, (uint16_t *)v17);
  *(uint32_t *)(v17 + 12) = (uint32_t)(uintptr_t)(a2);
  v18 = nullptr;
  *a2 = v37;
  v19 = a1[41];
  if ( v19 >> 5 == -8
    || (v38[0] = 4 * ((a1[41] >> 5) + 8),
        v34 = v19,
        v18 = (unsigned int *)(*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                                (uint32_t *)(hkContainerTempAllocator::s_alloc),
                                v38),
        v19 = v34,
        v36 = v38[0] / 4,
        v38[0] / 4 == 0) )
  {
    hkp3AxisSweep::setBitsBasedOnXInterval((uint32_t *)(a1), v19, v31, v17, v37, (int)(uintptr_t)(v18));
    return hkp3AxisSweep::querySingleAabbAddObject((uint32_t *)(a1), (int)(uintptr_t)(a2), v37, v18, (uint32_t *)v17, a4);
  }
  else
  {
    hkp3AxisSweep::setBitsBasedOnXInterval((uint32_t *)(a1), v34, v31, v17, v37, (int)(uintptr_t)(v18));
    hkp3AxisSweep::querySingleAabbAddObject((uint32_t *)(a1), (int)(uintptr_t)(a2), v37, v18, (uint32_t *)v17, a4);
    result = v36;
    if ( v36 >= 0 )
      return (*(int (**)(uint32_t *, unsigned int *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, unsigned int, uint32_t, uint32_t, uint32_t, uint32_t, int, unsigned int, int, int, unsigned int, unsigned int, unsigned int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               v18,
               4 * v36,
               v22,
               v23,
               v24,
               v25,
               v26,
               v27,
               v28,
               v29,
               v31,
               v32,
               v34,
               v36,
               v37,
               v38[0],
               v38[1],
               v38[2],
               v38[3],
               v39,
               v40,
               v41,
               v42,
               v43,
               v44,
               v45,
               v46);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::querySingleAabbRemoveObject  (binary VA: 0x16afcc0)
// Original: hkp3AxisSweep::querySingleAabbRemoveObject
// ----------------------------------------------------------------------------
unsigned int hkp3AxisSweep::querySingleAabbRemoveObject(uint32_t *a1, int a2, int16_t a3, unsigned int *a4, uint32_t *a5, hkMemoryAllocator::Self *a6)
{
  unsigned int result;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  uint16_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  uint32_t *v18;
  unsigned int v19;

  v18 = (uint32_t *)a1[40];
  result = (unsigned int)(uintptr_t)(&a4[((int)a1[41] >> 5) + 1]);
  v19 = result;
  if ( (unsigned int)(uintptr_t)(a4) < result )
  {
    while ( *a4 == 0 )
    {
LABEL_18:
      v18 += 128;
      ++a4;
      result = v19;
      if ( v19 <= (unsigned int)(uintptr_t)(a4) )
        return result;
    }
    v7 = *a4;
    v8 = v18;
    while ( 1 )
    {
      while ( (uint8_t)v7 == 0 )
      {
        v7 >>= 8;
        v8 += 32;
        if ( v7 == 0 )
          goto LABEL_18;
      }
      if ( (v7 & 1) == 0 || (((v8[1] - *a5) | (a5[1] - *v8)) & 0x80008000) != 0 )
        goto LABEL_17;
      v9 = v8[3];
      if ( (v9 & 1) == 0 )
      {
        v12 = *((uint32_t *)a6 + 1);
        if ( v12 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 8, v7);
          v7 = v15;
          v12 = *((uint32_t *)a6 + 1);
        }
        v13 = (uint32_t *)(*(uint32_t *)a6 + 8 * v12);
        v13[1] = v9;
        *v13 = a2;
        ++*((uint32_t *)a6 + 1);
        goto LABEL_17;
      }
      v14 = a1[54] + (v9 & 0xFFFFFFFE);
      v16 = *(uint32_t *)(v14 + 8);
      v10 = *(uint16_t **)(v14 + 4);
      if ( v16 <= 0 )
        goto LABEL_14;
      if ( a3 != *v10 )
        break;
      v17 = 0;
      v11 = 0;
LABEL_15:
      *(uint32_t *)(v14 + 8) = v16 - 1;
      if ( v11 != v16 - 1 )
        v10[v17] = v10[v16 - 1];
LABEL_17:
      v7 >>= 1;
      v8 += 4;
      if ( v7 == 0 )
        goto LABEL_18;
    }
    v11 = 0;
    while ( ++v11 != v16 )
    {
      if ( a3 == v10[v11] )
      {
        v17 = v11;
        goto LABEL_15;
      }
    }
LABEL_14:
    v17 = -1;
    v11 = -1;
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::checkConsistency  (binary VA: 0x16afeb0)
// Original: hkp3AxisSweep::checkConsistency
// ----------------------------------------------------------------------------
void hkp3AxisSweep::checkConsistency()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::hkpBpAxis::find  (binary VA: 0x16b0320)
// Original: hkp3AxisSweep::hkpBpAxis::find
// ----------------------------------------------------------------------------
char * hkp3AxisSweep::hkpBpAxis::find(int a1, char *a2, char *a3, uint16_t a4)
{
  char *result;

  result = a2;
  while ( a3 - result > 67 )
  {
    if ( *(uint16_t *)&result[4 * ((a3 - result) >> 3)] >= a4 )
      a3 = &result[4 * ((a3 - result) >> 3)];
    else
      result += 4 * ((a3 - result) >> 3);
  }
  for ( ; a4 > *(uint16_t *)result; result += 4 )
    ;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::querySingleAabbSub  (binary VA: 0x16b0370)
// Original: hkp3AxisSweep::querySingleAabbSub
// ----------------------------------------------------------------------------
int hkp3AxisSweep::querySingleAabbSub(int a1, int a2, unsigned int *a3, uint32_t *a4, int a5, hkMemoryAllocator::Self *a6, uint32_t *a7, int a8)
{
  int result;
  unsigned int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  unsigned int i;
  int v26;
  int v27;
  int v28;
  int v29;

  v24 = *(uint32_t **)(a1 + 160);
  result = (int)(uintptr_t)(&a3[(*(int *)(a1 + 164) >> 5) + 1]);
  for ( i = result; i > (unsigned int)(uintptr_t)(a3); result = i )
  {
    v9 = *a3;
    if ( *a3 != 0 )
    {
      v10 = v24;
      do
      {
        if ( (v9 & 0xF) != 0 )
        {
          if ( (v9 & 1) != 0 && (((v10[1] - *a4) | (a4[1] - *v10)) & 0x80008000) == 0 )
          {
            v11 = v10[3];
            if ( (v11 & 1) == 0 )
            {
              if ( a5 != 0 )
              {
                if ( a5 == 1 )
                  *(uint32_t *)(*a7 + 4 * a7[1]++) = (uint32_t)(uintptr_t)(v10);
                else
                  G4_VCALL<void>(a8, 8, v11, 0);
              }
              else
              {
                v17 = *((uint32_t *)a6 + 1);
                if ( v17 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
                {
                  v26 = v10[3];
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 8, v23);
                  v17 = *((uint32_t *)a6 + 1);
                  v11 = v26;
                }
                v18 = (uint32_t *)(*(uint32_t *)a6 + 8 * v17);
                v18[1] = v11;
                *v18 = a2;
                ++*((uint32_t *)a6 + 1);
              }
            }
          }
          if ( (v9 & 2) != 0 && (((v10[5] - *a4) | (a4[1] - v10[4])) & 0x80008000) == 0 )
          {
            v12 = v10[7];
            if ( (v12 & 1) == 0 )
            {
              if ( a5 != 0 )
              {
                if ( a5 == 1 )
                  *(uint32_t *)(*a7 + 4 * a7[1]++) = (uint32_t)(uintptr_t)(v10 + 4);
                else
                  G4_VCALL<void>(a8, 8, v12, 0);
              }
              else
              {
                v19 = *((uint32_t *)a6 + 1);
                if ( v19 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
                {
                  v27 = v10[7];
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 8, v23);
                  v19 = *((uint32_t *)a6 + 1);
                  v12 = v27;
                }
                v20 = (uint32_t *)(*(uint32_t *)a6 + 8 * v19);
                v20[1] = v12;
                *v20 = a2;
                ++*((uint32_t *)a6 + 1);
              }
            }
          }
          if ( (v9 & 4) != 0 && (((v10[9] - *a4) | (a4[1] - v10[8])) & 0x80008000) == 0 )
          {
            v13 = v10[11];
            if ( (v13 & 1) == 0 )
            {
              if ( a5 != 0 )
              {
                if ( a5 == 1 )
                  *(uint32_t *)(*a7 + 4 * a7[1]++) = (uint32_t)(uintptr_t)(v10 + 8);
                else
                  G4_VCALL<void>(a8, 8, v13, 0);
              }
              else
              {
                v21 = *((uint32_t *)a6 + 1);
                if ( v21 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
                {
                  v28 = v10[11];
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 8, v23);
                  v21 = *((uint32_t *)a6 + 1);
                  v13 = v28;
                }
                v22 = (uint32_t *)(*(uint32_t *)a6 + 8 * v21);
                v22[1] = v13;
                *v22 = a2;
                ++*((uint32_t *)a6 + 1);
              }
            }
          }
          if ( (v9 & 8) != 0 && (((v10[13] - *a4) | (a4[1] - v10[12])) & 0x80008000) == 0 )
          {
            v14 = v10[15];
            if ( (v14 & 1) == 0 )
            {
              if ( a5 != 0 )
              {
                if ( a5 == 1 )
                  *(uint32_t *)(*a7 + 4 * a7[1]++) = (uint32_t)(uintptr_t)(v10 + 12);
                else
                  G4_VCALL<void>(a8, 8, v14, 0);
              }
              else
              {
                v15 = *((uint32_t *)a6 + 1);
                if ( v15 == (*((uint32_t *)a6 + 2) & 0x3FFFFFFF) )
                {
                  v29 = v10[15];
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a6, 8, v23);
                  v15 = *((uint32_t *)a6 + 1);
                  v14 = v29;
                }
                v16 = (uint32_t *)(*(uint32_t *)a6 + 8 * v15);
                v16[1] = v14;
                *v16 = a2;
                ++*((uint32_t *)a6 + 1);
              }
            }
          }
        }
        v10 += 16;
        v9 >>= 4;
      }
      while ( v9 != 0 );
    }
    v24 += 128;
    ++a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::querySingleAabb  (binary VA: 0x16b07b0)
// Original: hkp3AxisSweep::_querySingleAabb
// ----------------------------------------------------------------------------
int hkp3AxisSweep::querySingleAabb(int a1, unsigned int *a2, int a3, hkMemoryAllocator::Self *a4, uint32_t *a5, int a6)
{
  unsigned int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  __m128i v14;
  __m128i v15;
  __m128i v16;
  unsigned int v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  uint16_t *v21;
  int v22;
  uint16_t *v23;
  uint16_t *v24;
  uint16_t v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  int v29;
  int16_t v30;
  unsigned int i;
  unsigned int v32;
  int v33;
  int result;
  typedef int _g4_t_v35;
  typedef uint16_t _g4_t_v36;
  typedef uint16_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef uint16_t *_g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef int16_t _g4_t_v48;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v37)) > _g4_s2 ? (16u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v38)) > _g4_s3 ? (24u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v43)) > _g4_s8 ? (40u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v44)) > _g4_s9 ? (40u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v46)) > _g4_s11 ? (48u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v47)) > _g4_s12 ? (52u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (54u + sizeof(_g4_t_v48)) > _g4_s13 ? (54u + sizeof(_g4_t_v48)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 54u);

  v6 = nullptr;
  v7 = *(uint32_t *)(a1 + 164);
  if ( v7 >> 5 == -8
    || (v46 = 4 * ((*(int *)(a1 + 164) >> 5) + 8),
        v6 = (unsigned int *)(*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                               (uint32_t *)(hkContainerTempAllocator::s_alloc),
                               &v46),
        v38 = v46 / 4,
        v46 / 4 == 0) )
  {
    v38 = 0x80000000;
  }
  v8 = v7 >> 7;
  v9 = 0;
  if ( v8 >= 0 )
  {
    do
    {
      v10 = 4 * v9++;
      v6[v10] = 0;
      v6[v10 + 1] = 0;
      v6[v10 + 2] = 0;
      v6[v10 + 3] = 0;
    }
    while ( v9 != v8 + 1 );
  }
  v11 = *(float *)(a1 + 96);
g4_m128_raw(v14) = *a2;
  v12 = *(float *)(a1 + 100);
g4_m128_raw(v15) = a2[1];
  v13 = *(float *)(a1 + 104);
g4_m128_raw(v16) = a2[2];
  *(float *)g4_m128_ptr<int32_t>(v14) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v14) + *(float *)(a1 + 64)) * v11, hkp3AxisSweep::s_MaxVal);
  *(float *)g4_m128_ptr<int32_t>(v15) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v15) + *(float *)(a1 + 68)) * v12, unk_20C7924);
  *(float *)g4_m128_ptr<int32_t>(v16) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v16) + *(float *)(a1 + 72)) * v13, unk_20C7928);
  if ( *(float *)g4_m128_ptr<int32_t>(v14) <= 0.0 )
  {
    v45 = 0;
    LOWORD(v17) = 0;
  }
  else
  {
    *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) + 65536.0;
    v17 = ((unsigned int)_mm_cvtsi128_si32(v14) >> 7) & 0xFFFFFFFE;
    v45 = (uint16_t)v17;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v15) <= 0.0 )
  {
    LOWORD(v40) = 0;
  }
  else
  {
    *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) + 65536.0;
    v40 = ((unsigned int)_mm_cvtsi128_si32(v15) >> 7) & 0xFFFE;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
  {
    LOWORD(v39) = 0;
  }
  else
  {
    *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) + 65536.0;
    v39 = ((unsigned int)_mm_cvtsi128_si32(v16) >> 7) & 0xFFFE;
  }
g4_m128_raw(v18) = a2[4];
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)(*(float *)g4_m128_ptr<int32_t>(v18) + *(float *)(a1 + 80)) * v11;
g4_m128_raw(v19) = a2[5];
  *(float *)g4_m128_ptr<int32_t>(v18) = fminf(*(float *)g4_m128_ptr<int32_t>(v18), hkp3AxisSweep::s_MaxVal);
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)(*(float *)g4_m128_ptr<int32_t>(v19) + *(float *)(a1 + 84)) * v12;
g4_m128_raw(v20) = a2[6];
  *(float *)g4_m128_ptr<int32_t>(v19) = fminf(*(float *)g4_m128_ptr<int32_t>(v19), unk_20C7924);
  *(float *)g4_m128_ptr<int32_t>(v20) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v20) + *(float *)(a1 + 88)) * v13, unk_20C7928);
  if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
  {
    v42 = 1;
  }
  else
  {
    *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) + 65536.0;
    v42 = (uint16_t)((unsigned int)_mm_cvtsi128_si32(v18) >> 7) | 1;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v19) <= 0.0 )
  {
    v37 = 1;
  }
  else
  {
    *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v19) + 65536.0;
    v37 = ((unsigned int)_mm_cvtsi128_si32(v19) >> 7) | 1;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v20) <= 0.0 )
  {
    v36 = 1;
  }
  else
  {
    *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) + 65536.0;
    v36 = ((unsigned int)_mm_cvtsi128_si32(v20) >> 7) | 1;
  }
  v21 = (uint16_t *)(*(uint32_t *)(a1 + 172) + 4);
  if ( *(uint32_t *)(a1 + 208) != 0 )
  {
    v22 = (int)(uint16_t)v17 >> (16 - *(uint8_t *)(a1 + 212));
    if ( v22 != 0 )
    {
      v23 = (uint16_t *)(*(uint32_t *)(a1 + 216) + 16 * (v22 + 0xFFFFFFF));
      *(unsigned int *)((char *)v6 + ((*v23 >> 3) & 0x1FFC)) ^= 1 << *v23;
      v24 = *((uint16_t **)v23 + 1);
      if ( *((int *)v23 + 2) > 0 )
      {
        v41 = &v24[*((uint32_t *)v23 + 2)];
        do
        {
          v25 = *v24;
          v26 = *v24++;
          *(unsigned int *)((char *)v6 + ((v26 >> 3) & 0x1FFC)) ^= 1 << v25;
        }
        while ( v24 != v41 );
      }
      v35 = *(uint32_t *)(a1 + 160) + 16 * *v23;
      v27 = *(uint32_t *)(a1 + 172);
      v21 = (uint16_t *)(v27 + 4 * *(uint16_t *)(v35 + 8) + 4);
      v28 = v27 + 4 * *(uint16_t *)(v35 + 10);
      if ( (unsigned int)(uintptr_t)(v21) < v28 )
      {
        do
        {
          if ( (*(uint8_t *)v21 & 1) == 0 )
          {
            v29 = (v21[1] >> 3) & 0x1FFC;
            *(unsigned int *)((char *)v6 + v29) &= ~(1 << v21[1]);
          }
          v21 += 2;
        }
        while ( (unsigned int)(uintptr_t)(v21) < v28 );
        v21 = (uint16_t *)(*(uint32_t *)(a1 + 172) + 4 * *(uint16_t *)(v35 + 8) + 4);
      }
    }
  }
  v30 = *v21;
  for ( i = *v21; i < v45; i = *v21 )
  {
    v32 = v21[1];
    v21 += 2;
    *(unsigned int *)((char *)v6 + ((v32 >> 3) & 0x1FFC)) ^= 1 << v32;
    v30 = *v21;
  }
  if ( v42 > i )
  {
    do
    {
      if ( (v30 & 1) == 0 )
      {
        v33 = (v21[1] >> 3) & 0x1FFC;
        *(unsigned int *)((char *)v6 + v33) ^= 1 << v21[1];
      }
      v21 += 2;
      v30 = *v21;
    }
    while ( *v21 < v42 );
  }
  v43 = *(uint32_t *)(a1 + 184);
  LOWORD(v46) = (int)(uintptr_t)&hkp3AxisSweep::hkpBpAxis::find(
                        a1 + 184,
                        (char *)(v43 + 4),
                        (char *)(v43 + 4 * *(uint32_t *)(a1 + 188) - 8),
                        v40)[-v43] >> 2;
  v47 = (int)(uintptr_t)&hkp3AxisSweep::hkpBpAxis::find(
                a1 + 184,
                (char *)(v43 + 4),
                (char *)(*(uint32_t *)(a1 + 184) + 4 * *(uint32_t *)(a1 + 188) - 8),
                v37)[-v43 - 4] >> 2;
  v44 = *(uint32_t *)(a1 + 196);
  HIWORD(v46) = (int)(uintptr_t)&hkp3AxisSweep::hkpBpAxis::find(
                        a1 + 196,
                        (char *)(v44 + 4),
                        (char *)(v44 + 4 * *(uint32_t *)(a1 + 200) - 8),
                        v39)[-v44] >> 2;
  v48 = (int)(uintptr_t)&hkp3AxisSweep::hkpBpAxis::find(
                a1 + 196,
                (char *)(v44 + 4),
                (char *)(*(uint32_t *)(a1 + 196) + 4 * *(uint32_t *)(a1 + 200) - 8),
                v36)[-v44 - 4] >> 2;
  hkp3AxisSweep::querySingleAabbSub(a1, 0, v6, (uint32_t *)(&v46), a3, a4, a5, a6);
  result = v38;
  if ( v38 >= 0 )
    return (*(int (**)(uint32_t *, unsigned int *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v6,
             4 * v38);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::querySingleAabb  (binary VA: 0x16b0dc0)
// Original: hkp3AxisSweep::querySingleAabb
// ----------------------------------------------------------------------------
int hkp3AxisSweep::querySingleAabb(int a1, unsigned int *a2, hkMemoryAllocator::Self *a3)
{
  return hkp3AxisSweep::querySingleAabb(a1, a2, 0, a3, nullptr, 0);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::querySingleAabbWithCollector  (binary VA: 0x16b0e10)
// Original: hkp3AxisSweep::querySingleAabbWithCollector
// ----------------------------------------------------------------------------
int hkp3AxisSweep::querySingleAabbWithCollector(int a1, unsigned int *a2, int a3)
{
  return hkp3AxisSweep::querySingleAabb(a1, a2, 2, nullptr, nullptr, a3);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getAabbFromNode  (binary VA: 0x16b0e60)
// Original: hkp3AxisSweep::getAabbFromNode
// ----------------------------------------------------------------------------
float * hkp3AxisSweep::getAabbFromNode(int a1, uint16_t *a2, float *a3)
{
  __m128i v3;
  int v4;
  int v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  __m128i v8;
  int v9;
  int v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  __m128i v13;
  int v14;
  int v15;
  int v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  __m128i v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  float v26; // xmm6_4
  float v27; // xmm3_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm6_4
  float v31; // xmm3_4
  float v33;
  float v34;
  float v35;

g4_m128_raw(v3) = *(unsigned int *)(a1 + 96);
  v4 = _mm_cvtsi128_si32(v3);
  v5 = (2130706432 - v4) & ((v4 ^ (v4 + 2139095040)) >> 31);
  v6 = (float)(2.0 - (float)(*(float *)(a1 + 96) * *(float *)&v5)) * *(float *)&v5;
  v7 = (float)(2.0 - (float)(*(float *)(a1 + 96) * v6)) * v6;
  *(float *)g4_m128_ptr<int32_t>(v3) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v7)) * v7;
g4_m128_raw(v8) = *(unsigned int *)(a1 + 100);
  v9 = _mm_cvtsi128_si32(v8);
  v10 = (2130706432 - v9) & ((v9 ^ (v9 + 2139095040)) >> 31);
  v11 = (float)(2.0 - (float)(*(float *)(a1 + 100) * *(float *)&v10)) * *(float *)&v10;
  v12 = (float)(2.0 - (float)(*(float *)(a1 + 100) * v11)) * v11;
g4_m128_raw(v13) = *(unsigned int *)(a1 + 104);
  v14 = _mm_cvtsi128_si32(v13);
  v15 = *(uint32_t *)(a1 + 196);
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v12)) * v12;
  v16 = (2130706432 - v14) & ((v14 ^ (v14 + 2139095040)) >> 31);
  v17 = (float)(2.0 - (float)(*(float *)(a1 + 104) * *(float *)&v16)) * *(float *)&v16;
  v18 = (float)(2.0 - (float)(*(float *)(a1 + 104) * v17)) * v17;
g4_m128_raw(v19) = *(unsigned int *)(a1 + 108);
  v20 = _mm_cvtsi128_si32(v19);
  v21 = 2130706432 - v20;
  v22 = (v20 ^ (v20 + 2139095040)) >> 31;
  v23 = *(uint32_t *)(a1 + 184);
  v24 = v21 & v22;
  v25 = *(uint32_t *)(a1 + 172);
  *(float *)g4_m128_ptr<int32_t>(v13) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * v18)) * v18;
  v26 = (float)(2.0 - (float)(*(float *)(a1 + 108) * *(float *)&v24)) * *(float *)&v24;
  v27 = (float)(2.0 - (float)(*(float *)(a1 + 108) * v26)) * v26;
  v28 = (float)*(uint16_t *)(v25 + 4 * a2[4]) * *(float *)g4_m128_ptr<int32_t>(v3);
  v33 = *(float *)(a1 + 64);
  v34 = *(float *)(a1 + 68);
  v35 = *(float *)(a1 + 72);
  v29 = (float)((float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * v27)) * v27) * 0.0) - *(float *)(a1 + 76);
  v30 = (float)*(uint16_t *)(v23 + 4 * *a2) * *(float *)g4_m128_ptr<int32_t>(v8);
  v31 = (float)*(uint16_t *)(v25 + 4 * a2[5]) * *(float *)g4_m128_ptr<int32_t>(v3);
  *(float *)g4_m128_ptr<int32_t>(v3) = (float)*(uint16_t *)(v23 + 4 * a2[2]) * *(float *)g4_m128_ptr<int32_t>(v8);
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)*(uint16_t *)(v15 + 4 * a2[1]) * *(float *)g4_m128_ptr<int32_t>(v13);
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)*(uint16_t *)(v15 + 4 * a2[3]) * *(float *)g4_m128_ptr<int32_t>(v13);
  *a3 = v28 - v33;
  a3[3] = v29;
  a3[4] = v31 - v33;
  a3[7] = v29;
  a3[1] = v30 - v34;
  a3[5] = *(float *)g4_m128_ptr<int32_t>(v3) - v34;
  a3[2] = *(float *)g4_m128_ptr<int32_t>(v19) - v35;
  a3[6] = *(float *)g4_m128_ptr<int32_t>(v8) - v35;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getAabb  (binary VA: 0x16b1100)
// Original: hkp3AxisSweep::getAabb
// ----------------------------------------------------------------------------
float * hkp3AxisSweep::getAabb(hkp3AxisSweep::Self *self, const hkpBroadPhaseHandle *a2, hkAabb::Self *a3)
{
  return hkp3AxisSweep::getAabbFromNode(
           (int)(uintptr_t)(self),
           (uint16_t *)(*((uint32_t *)self + 40) + 16 * *(uint32_t *)a2),
           (float *)a3);
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getAllAabbs  (binary VA: 0x16b1140)
// Original: hkp3AxisSweep::getAllAabbs
// ----------------------------------------------------------------------------
float * hkp3AxisSweep::getAllAabbs(uint32_t *a1, int *a2)
{
  int *v2;
  float *result;
  int v4;
  int v5;
  int i;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);

  v2 = a2;
  result = (float *)(a1[41] - a1[52]);
  if ( (int)(uintptr_t)(result) > (a2[2] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v8,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      a2,
      a1[41] - a1[52],
      32);
    v2 = a2;
    result = (float *)(a1[41] - a1[52]);
  }
  v2[1] = (int)(uintptr_t)(result);
  v4 = a1[41];
  v5 = 0;
  for ( i = 0; v5 < v4; i = v7 )
  {
    while ( 1 )
    {
      result = (float *)(a1[40] + 16 * v5);
      if ( ((uint8_t)result[3] & 1) == 0 )
        break;
      if ( ++v5 >= v4 )
        return result;
    }
    v7 = i + 1;
    ++v5;
    result = hkp3AxisSweep::getAabbFromNode((int)(uintptr_t)(a1), (uint16_t *)result, (float *)(*a2 + 32 * i));
    v4 = a1[41];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::getOriginalAabb  (binary VA: 0x16b1220)
// Original: hkp3AxisSweep::getOriginalAabb
// ----------------------------------------------------------------------------
char * hkp3AxisSweep::getOriginalAabb(hkp3AxisSweep::Self *self)
{
  return (char *)self + 32;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::addObjectBatch  (binary VA: 0x16b16e0)
// Original: hkp3AxisSweep::addObjectBatch
// ----------------------------------------------------------------------------
int hkp3AxisSweep::addObjectBatch(int a1, uint32_t *a2, uint32_t *a3, hkMemoryAllocator::Self *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float v8;
  float v9; // xmm7_4
  float v10; // xmm6_4
  int v11;
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __m128i v16;
  __m128i v17;
  __m128i v18;
  int v19;
  uint32_t *v20;
  uint16_t *v21;
  float *v22;
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  __m128i v26;
  __m128i v27;
  __m128i v28;
  int m;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int16_t v37; // si
  int16_t v38; // si
  int v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint32_t *v48;
  int v49;
  int v50;
  int v51;
  char *v52;
  int inserted;
  uint16_t *v54;
  int v55;
  uint16_t *v56;
  int v57;
  uint16_t v58; // di
  unsigned int v59;
  int v60;
  uint16_t *v61;
  int v62;
  uint16_t v63; // di
  unsigned int v64;
  int v65;
  uint16_t *v66;
  int v67;
  uint16_t v68; // di
  int v69;
  int v70;
  int v71;
  bool v72;
  int v73;
  int v74;
  unsigned int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef hkMemoryAllocator::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef int16_t _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int16_t _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int16_t _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint16_t *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef uint16_t *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef uint16_t _g4_t_v109;
  typedef uint16_t _g4_t_v110;
  typedef uint16_t _g4_t_v111;
  typedef uint16_t *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint16_t _g4_t_v115;
  typedef uint16_t _g4_t_v116;
  typedef uint16_t _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int16_t _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int16_t _g4_t_i;
  typedef int16_t _g4_t_j;
  typedef int16_t _g4_t_k;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef float _g4_t_v132;
  typedef int16_t _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef uint8_t _g4_t_v137[4];
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef uint32_t _g4_t_v141[3];
  typedef char _g4_t_v142;
  typedef int _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef int *_g4_t_v151;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v80)) > _g4_s0 ? (12u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v81)) > _g4_s1 ? (48u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v82)) > _g4_s2 ? (52u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v83)) > _g4_s3 ? (56u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v84)) > _g4_s4 ? (60u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v85)) > _g4_s5 ? (72u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v86)) > _g4_s6 ? (76u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v87)) > _g4_s7 ? (80u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v88)) > _g4_s8 ? (84u + sizeof(_g4_t_v88)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v89)) > _g4_s9 ? (88u + sizeof(_g4_t_v89)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v90)) > _g4_s10 ? (92u + sizeof(_g4_t_v90)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v91)) > _g4_s11 ? (96u + sizeof(_g4_t_v91)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v92)) > _g4_s12 ? (100u + sizeof(_g4_t_v92)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v93)) > _g4_s13 ? (104u + sizeof(_g4_t_v93)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v94)) > _g4_s14 ? (104u + sizeof(_g4_t_v94)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v95)) > _g4_s15 ? (108u + sizeof(_g4_t_v95)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v96)) > _g4_s16 ? (108u + sizeof(_g4_t_v96)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v97)) > _g4_s17 ? (112u + sizeof(_g4_t_v97)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v98)) > _g4_s18 ? (112u + sizeof(_g4_t_v98)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v99)) > _g4_s19 ? (116u + sizeof(_g4_t_v99)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v100)) > _g4_s20 ? (116u + sizeof(_g4_t_v100)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v101)) > _g4_s21 ? (116u + sizeof(_g4_t_v101)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v102)) > _g4_s22 ? (120u + sizeof(_g4_t_v102)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v103)) > _g4_s23 ? (120u + sizeof(_g4_t_v103)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v104)) > _g4_s24 ? (120u + sizeof(_g4_t_v104)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v105)) > _g4_s25 ? (124u + sizeof(_g4_t_v105)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v106)) > _g4_s26 ? (128u + sizeof(_g4_t_v106)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v107)) > _g4_s27 ? (128u + sizeof(_g4_t_v107)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v108)) > _g4_s28 ? (128u + sizeof(_g4_t_v108)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v109)) > _g4_s29 ? (128u + sizeof(_g4_t_v109)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v110)) > _g4_s30 ? (128u + sizeof(_g4_t_v110)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v111)) > _g4_s31 ? (128u + sizeof(_g4_t_v111)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v112)) > _g4_s32 ? (132u + sizeof(_g4_t_v112)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v113)) > _g4_s33 ? (132u + sizeof(_g4_t_v113)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v114)) > _g4_s34 ? (132u + sizeof(_g4_t_v114)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v115)) > _g4_s35 ? (132u + sizeof(_g4_t_v115)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v116)) > _g4_s36 ? (132u + sizeof(_g4_t_v116)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v117)) > _g4_s37 ? (132u + sizeof(_g4_t_v117)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v118)) > _g4_s38 ? (136u + sizeof(_g4_t_v118)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v119)) > _g4_s39 ? (140u + sizeof(_g4_t_v119)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v120)) > _g4_s40 ? (140u + sizeof(_g4_t_v120)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v121)) > _g4_s41 ? (140u + sizeof(_g4_t_v121)) : _g4_s41,
    _g4_s43 = (140u + sizeof(_g4_t_v122)) > _g4_s42 ? (140u + sizeof(_g4_t_v122)) : _g4_s42,
    _g4_s44 = (140u + sizeof(_g4_t_v123)) > _g4_s43 ? (140u + sizeof(_g4_t_v123)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v124)) > _g4_s44 ? (140u + sizeof(_g4_t_v124)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v125)) > _g4_s45 ? (144u + sizeof(_g4_t_v125)) : _g4_s45,
    _g4_s47 = (144u + sizeof(_g4_t_v126)) > _g4_s46 ? (144u + sizeof(_g4_t_v126)) : _g4_s46,
    _g4_s48 = (144u + sizeof(_g4_t_i)) > _g4_s47 ? (144u + sizeof(_g4_t_i)) : _g4_s47,
    _g4_s49 = (144u + sizeof(_g4_t_j)) > _g4_s48 ? (144u + sizeof(_g4_t_j)) : _g4_s48,
    _g4_s50 = (144u + sizeof(_g4_t_k)) > _g4_s49 ? (144u + sizeof(_g4_t_k)) : _g4_s49,
    _g4_s51 = (144u + sizeof(_g4_t_v130)) > _g4_s50 ? (144u + sizeof(_g4_t_v130)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v131)) > _g4_s51 ? (144u + sizeof(_g4_t_v131)) : _g4_s51,
    _g4_s53 = (148u + sizeof(_g4_t_v132)) > _g4_s52 ? (148u + sizeof(_g4_t_v132)) : _g4_s52,
    _g4_s54 = (148u + sizeof(_g4_t_v133)) > _g4_s53 ? (148u + sizeof(_g4_t_v133)) : _g4_s53,
    _g4_s55 = (148u + sizeof(_g4_t_v134)) > _g4_s54 ? (148u + sizeof(_g4_t_v134)) : _g4_s54,
    _g4_s56 = (148u + sizeof(_g4_t_v135)) > _g4_s55 ? (148u + sizeof(_g4_t_v135)) : _g4_s55,
    _g4_s57 = (148u + sizeof(_g4_t_v136)) > _g4_s56 ? (148u + sizeof(_g4_t_v136)) : _g4_s56,
    _g4_s58 = (152u + sizeof(_g4_t_v137)) > _g4_s57 ? (152u + sizeof(_g4_t_v137)) : _g4_s57,
    _g4_s59 = (156u + sizeof(_g4_t_v138)) > _g4_s58 ? (156u + sizeof(_g4_t_v138)) : _g4_s58,
    _g4_s60 = (160u + sizeof(_g4_t_v139)) > _g4_s59 ? (160u + sizeof(_g4_t_v139)) : _g4_s59,
    _g4_s61 = (164u + sizeof(_g4_t_v140)) > _g4_s60 ? (164u + sizeof(_g4_t_v140)) : _g4_s60,
    _g4_s62 = (172u + sizeof(_g4_t_v141)) > _g4_s61 ? (172u + sizeof(_g4_t_v141)) : _g4_s61,
    _g4_s63 = (184u + sizeof(_g4_t_v142)) > _g4_s62 ? (184u + sizeof(_g4_t_v142)) : _g4_s62,
    _g4_s64 = (188u + sizeof(_g4_t_v143)) > _g4_s63 ? (188u + sizeof(_g4_t_v143)) : _g4_s63,
    _g4_s65 = (192u + sizeof(_g4_t_v144)) > _g4_s64 ? (192u + sizeof(_g4_t_v144)) : _g4_s64,
    _g4_s66 = (196u + sizeof(_g4_t_v145)) > _g4_s65 ? (196u + sizeof(_g4_t_v145)) : _g4_s65,
    _g4_s67 = (200u + sizeof(_g4_t_v146)) > _g4_s66 ? (200u + sizeof(_g4_t_v146)) : _g4_s66,
    _g4_s68 = (204u + sizeof(_g4_t_v147)) > _g4_s67 ? (204u + sizeof(_g4_t_v147)) : _g4_s67,
    _g4_s69 = (208u + sizeof(_g4_t_v148)) > _g4_s68 ? (208u + sizeof(_g4_t_v148)) : _g4_s68,
    _g4_s70 = (212u + sizeof(_g4_t_v149)) > _g4_s69 ? (212u + sizeof(_g4_t_v149)) : _g4_s69,
    _g4_s71 = (216u + sizeof(_g4_t_v150)) > _g4_s70 ? (216u + sizeof(_g4_t_v150)) : _g4_s70,
    _g4_s72 = (228u + sizeof(_g4_t_v151)) > _g4_s71 ? (228u + sizeof(_g4_t_v151)) : _g4_s71
  };
  alignas(16) uint8_t _g4_sf[_g4_s72];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 12u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 48u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 76u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 80u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 92u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 96u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 100u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 104u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 104u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 108u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 108u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 112u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 112u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 116u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 116u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 120u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 120u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 120u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 124u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 128u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 128u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 128u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 128u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 128u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 128u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 132u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 132u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 132u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 132u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 132u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 132u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 136u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 140u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 140u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 140u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 140u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 140u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 140u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 144u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 144u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 144u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 144u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 144u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 144u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 144u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 148u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 148u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 148u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 148u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 148u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 152u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 156u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 160u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 164u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 172u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 184u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 188u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 192u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 196u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 200u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 204u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 208u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 212u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 216u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 228u);

  v151 = &a1;
  v105 = a1;
  v88 = a2;
  result = (int)(uintptr_t)(a3);
  v85 = a4;
  v87 = a3;
  if ( (int)a3[1] <= 0 )
    return result;
  v89 = *(uint32_t *)(a1 + 164);
  v118 = a2[1];
  v86 = 2 * v118;
  if ( 2 * v118 != 0 )
  {
    v143 = 8 * v118;
    v92 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            &v143);
    v70 = v143;
    v71 = v143 + 3;
    v72 = v143 < 0;
    v143 = 8 * v118;
    if ( v72 )
      v70 = v71;
    v73 = v70 >> 2;
    if ( v73 == 0 )
      v73 = 0x80000000;
    v84 = v73;
    v91 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            &v143);
    v74 = v143;
    v75 = 0x80000000;
    v76 = v143 + 3;
    v72 = v143 < 0;
    v143 = 8 * v118;
    if ( v72 )
      v74 = v76;
    v77 = v74 >> 2;
    if ( v77 != 0 )
      v75 = v77;
    v83 = v75;
    v90 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            &v143);
    v81 = v143 / 4;
    if ( v143 / 4 != 0 )
      goto LABEL_5;
  }
  else
  {
    v91 = 0;
    v92 = 0;
    v83 = 0x80000000;
    v84 = 0x80000000;
    v90 = 0;
  }
  v81 = 0x80000000;
LABEL_5:
  v138 = 0;
  v139 = 0;
  v140 = 0x80000000;
  if ( v89 > 0 )
    hkArrayUtil::reserve((hkArrayUtil::Self *)v137, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v138, v89, 4);
  v82 = (int *)(v105 + 160);
  v5 = *(uint32_t *)(v105 + 168) & 0x3FFFFFFF;
  v6 = *(uint32_t *)(v105 + 164) + v118;
  if ( v6 > v5 )
  {
    v7 = 2 * v5;
    if ( v7 >= v6 )
      v6 = v7;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v137, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v82, v6, 16);
    v6 = *(uint32_t *)(v105 + 164) + v118;
  }
  *(uint32_t *)(v105 + 164) = v6;
  v143 = 2139095022;
  v144 = 3.40282e38f;
  v145 = 3.40282e38f;
  v146 = 3.40282e38f;
  v141[0] = v92;
  v141[1] = v91;
  v141[2] = v90;
  v147 = -3.40282e38f;
  v148 = -3.40282e38f;
  v149 = -3.40282e38f;
  v150 = -3.40282e38f;
  if ( v118 > 0 )
  {
    v112 = (uint16_t *)v90;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i((unsigned int)v143)));
    v119 = 16 * v89;
    v132 = -3.40282e38f;
    v106 = (uint16_t *)v92;
    v9 = -3.40282e38f;
    v102 = (uint16_t *)v91;
    v10 = -3.40282e38f;
    v11 = 0;
    v12 = 3.40282e38f;
    v13 = 3.40282e38f;
    v14 = v144;
    v15 = -3.40282e38f;
    while ( 1 )
    {
      v22 = (float *)(*v87 + 32 * v11);
      v143 = fminf(v8, *v22);
      v144 = fminf(v14, v22[1]);
      v145 = fminf(v13, v22[2]);
      v146 = fminf(v12, v22[3]);
      v23 = *(float *)(v105 + 104);
      v147 = fmaxf(v10, v22[4]);
      v24 = *(float *)(v105 + 100);
      v148 = fmaxf(v9, v22[5]);
      v25 = *(float *)(v105 + 96);
      v149 = fmaxf(v15, v22[6]);
      v150 = fmaxf(v132, v22[7]);
g4_m128_raw(v26) = *(unsigned int *)v22;
g4_m128_raw(v27) = *((unsigned int *)v22 + 1);
g4_m128_raw(v28) = *((unsigned int *)v22 + 2);
      *(float *)g4_m128_ptr<int32_t>(v26) = fminf(
                                  (float)(*(float *)g4_m128_ptr<int32_t>(v26) + *(float *)(v105 + 64)) * v25,
                                  hkp3AxisSweep::s_MaxVal);
      *(float *)g4_m128_ptr<int32_t>(v27) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v27) + *(float *)(v105 + 68)) * v24, unk_20C7924);
      *(float *)g4_m128_ptr<int32_t>(v28) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v28) + *(float *)(v105 + 72)) * v23, unk_20C7928);
      if ( *(float *)g4_m128_ptr<int32_t>(v26) > 0.0 )
      {
        *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) + 65536.0;
        v99 = ((unsigned int)_mm_cvtsi128_si32(v26) >> 7) & 0xFFFE;
        if ( *(float *)g4_m128_ptr<int32_t>(v27) > 0.0 )
          goto LABEL_14;
      }
      else
      {
        v99 = 0;
        if ( *(float *)g4_m128_ptr<int32_t>(v27) > 0.0 )
        {
LABEL_14:
          *(float *)g4_m128_ptr<int32_t>(v27) = *(float *)g4_m128_ptr<int32_t>(v27) + 65536.0;
          v97 = ((unsigned int)_mm_cvtsi128_si32(v27) >> 7) & 0xFFFE;
          if ( *(float *)g4_m128_ptr<int32_t>(v28) > 0.0 )
            goto LABEL_15;
          goto LABEL_27;
        }
      }
      v97 = 0;
      if ( *(float *)g4_m128_ptr<int32_t>(v28) > 0.0 )
      {
LABEL_15:
        *(float *)g4_m128_ptr<int32_t>(v28) = *(float *)g4_m128_ptr<int32_t>(v28) + 65536.0;
        v95 = ((unsigned int)_mm_cvtsi128_si32(v28) >> 7) & 0xFFFE;
        goto LABEL_16;
      }
LABEL_27:
      v95 = 0;
LABEL_16:
g4_m128_raw(v16) = *((unsigned int *)v22 + 4);
      *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v16) + *(float *)(v105 + 80)) * v25;
g4_m128_raw(v17) = *((unsigned int *)v22 + 5);
      *(float *)g4_m128_ptr<int32_t>(v16) = fminf(*(float *)g4_m128_ptr<int32_t>(v16), hkp3AxisSweep::s_MaxVal);
      *(float *)g4_m128_ptr<int32_t>(v17) = (float)(*(float *)g4_m128_ptr<int32_t>(v17) + *(float *)(v105 + 84)) * v24;
g4_m128_raw(v18) = *((unsigned int *)v22 + 6);
      *(float *)g4_m128_ptr<int32_t>(v17) = fminf(*(float *)g4_m128_ptr<int32_t>(v17), unk_20C7924);
      *(float *)g4_m128_ptr<int32_t>(v18) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v18) + *(float *)(v105 + 88)) * v23, unk_20C7928);
      if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
      {
        v133 = 1;
      }
      else
      {
        *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) + 65536.0;
        v133 = ((unsigned int)_mm_cvtsi128_si32(v16) >> 7) | 1;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
      {
        v125 = 1;
      }
      else
      {
        *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) + 65536.0;
        v125 = ((unsigned int)_mm_cvtsi128_si32(v17) >> 7) | 1;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
      {
        v93 = 1;
      }
      else
      {
        *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) + 65536.0;
        v93 = ((unsigned int)_mm_cvtsi128_si32(v18) >> 7) | 1;
      }
      v19 = v119;
      v119 += 16;
      v20 = *(uint32_t **)(*v88 + 4 * v11);
      *(uint32_t *)(*(uint32_t *)(v105 + 160) + v19 + 12) = (uint32_t)(uintptr_t)(v20);
      *v20 = v11 + v89;
      v21 = v106;
      v106 += 4;
      *v21 = v99;
      LOWORD(v20) = v11 + v89;
      v21[2] = v133;
      v21[1] = v11 + v89;
      v21[3] = v11++ + v89;
      *v102 = v97;
      v102[2] = v125;
      v102[1] = (uint16_t)(uintptr_t)(v20);
      v102[3] = (uint16_t)(uintptr_t)(v20);
      *v112 = v95;
      v112[1] = (uint16_t)(uintptr_t)(v20);
      v112[2] = v93;
      v112[3] = (uint16_t)(uintptr_t)(v20);
      v102 += 4;
      v112 += 4;
      if ( v11 == v118 )
        break;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i((unsigned int)v143)));
      v14 = v144;
      v13 = v145;
      v12 = v146;
      v10 = v147;
      v9 = v148;
      v15 = v149;
      v132 = v150;
    }
  }
  *(uint32_t *)(v105 + 164) = v89;
  hkp3AxisSweep::querySingleAabb(v105, (unsigned int *)&v143, 1, nullptr, &v138, 0);
  v49 = *(uint32_t *)(v105 + 168) & 0x3FFFFFFF;
  v50 = *(uint32_t *)(v105 + 164) + v118;
  if ( v50 > v49 )
  {
    v69 = 2 * v49;
    if ( v69 >= v50 )
      v50 = v69;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v137, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v82, v50, 16);
    v51 = v105;
    v50 = *(uint32_t *)(v105 + 164) + v118;
  }
  else
  {
    v51 = v105;
  }
  *(uint32_t *)(v51 + 164) = v50;
  v136 = *(uint32_t *)(v51 + 160);
  if ( v86 > 1 )
  {
    v52 = (char *)v141;
    do
    {
      v80 = *(uint32_t *)v52;
      v52 += 4;
      hkAlgorithm::quickSortRecursive_09325f(
        v80,
        0,
        v86 - 1);
    }
    while ( v52 != &v142 );
  }
  inserted = hkp3AxisSweep::hkpBpAxis::insertTail<0>((int *)(v105 + 172), v136, v92, v86);
  v101 = hkp3AxisSweep::hkpBpAxis::insertTail<1>((int *)(v105 + 184), v136, v91, v86);
  v98 = hkp3AxisSweep::hkpBpAxis::insertTail<2>((int *)(v105 + 196), v136, v90, v86);
  v54 = (uint16_t *)(8 * v118 - 4 + v92);
  v104 = 8 * v118 - 4;
  v55 = *(uint32_t *)(v105 + 172);
  v56 = (uint16_t *)(v55 + 4 * (inserted - v86) - 4);
  v122 = v55 + 4 * inserted - 8;
  v115 = *v56;
  v109 = *v54;
  for ( i = inserted - 2; ; --i )
  {
    if ( v115 > v109 )
    {
      v57 = *(uint32_t *)v56;
      v56 -= 2;
      *(uint32_t *)(v122 + 4) = v57;
      *(uint16_t *)((&hkp3AxisSweep::hkpBpNode::s_memberOffsets)[v56[2] & 1] + v136 + 16 * v56[3]) = i + 1;
      v115 = *v56;
      goto LABEL_82;
    }
    *(uint32_t *)(v122 + 4) = *(uint32_t *)v54;
    *(uint16_t *)((&hkp3AxisSweep::hkpBpNode::s_memberOffsets)[*v54 & 1] + v136 + 16 * v54[1]) = i + 1;
    if ( (unsigned int)(uintptr_t)(v54 - 2) < v92 )
      break;
    v58 = *(v54 - 2);
    v54 -= 2;
    v109 = v58;
LABEL_82:
    v122 -= 4;
  }
  v59 = v104 + v91;
  v60 = *(uint32_t *)(v105 + 184);
  v61 = (uint16_t *)(v60 + 4 * (v101 - v86) - 4);
  v123 = v60 + 4 * v101 - 8;
  v116 = *v61;
  v110 = *(uint16_t *)(v104 + v91);
  for ( j = v101 - 2; ; --j )
  {
    if ( v116 > v110 )
    {
      v62 = *(uint32_t *)v61;
      v61 -= 2;
      *(uint32_t *)(v123 + 4) = v62;
      *(uint16_t *)((&hkp3AxisSweep::hkpBpNode::s_memberOffsets)[(v61[2] & 1) + 2] + v136 + 16 * v61[3]) = j + 1;
      v116 = *v61;
      goto LABEL_88;
    }
    *(uint32_t *)(v123 + 4) = *(uint32_t *)v59;
    *(uint16_t *)((&hkp3AxisSweep::hkpBpNode::s_memberOffsets)[(*(uint16_t *)v59 & 1) + 2]
             + v136
             + 16 * *(uint16_t *)(v59 + 2)) = j + 1;
    if ( v59 - 4 < v91 )
      break;
    v63 = *(uint16_t *)(v59 - 4);
    v59 -= 4;
    v110 = v63;
LABEL_88:
    v123 -= 4;
  }
  v64 = v90 + v104;
  v65 = *(uint32_t *)(v105 + 196);
  v66 = (uint16_t *)(v65 + 4 * (v98 - v86) - 4);
  v124 = v65 + 4 * v98 - 8;
  v117 = *v66;
  v111 = *(uint16_t *)(v90 + v104);
  for ( k = v98 - 2; ; --k )
  {
    if ( v117 > v111 )
    {
      v67 = *(uint32_t *)v66;
      v66 -= 2;
      *(uint32_t *)(v124 + 4) = v67;
      *(uint16_t *)((&hkp3AxisSweep::hkpBpNode::s_memberOffsets)[(v66[2] & 1) + 4] + v136 + 16 * v66[3]) = k + 1;
      v117 = *v66;
      goto LABEL_94;
    }
    *(uint32_t *)(v124 + 4) = *(uint32_t *)v64;
    *(uint16_t *)((&hkp3AxisSweep::hkpBpNode::s_memberOffsets)[(*(uint16_t *)v64 & 1) + 4]
             + v136
             + 16 * *(uint16_t *)(v64 + 2)) = k + 1;
    if ( v90 > v64 - 4 )
      break;
    v68 = *(uint16_t *)(v64 - 4);
    v64 -= 4;
    v111 = v68;
LABEL_94:
    v124 -= 4;
  }
  for ( m = 0; m < *(uint32_t *)(v105 + 208); *(uint16_t *)(v31 + 6) += v86 )
  {
    v30 = m++;
    v31 = *(uint32_t *)(v105 + 160) + 16 * *(uint16_t *)(*(uint32_t *)(v105 + 216) + 16 * v30);
    *(uint16_t *)(v31 + 4) += v86;
  }
  if ( v118 == -1 )
  {
    v32 = 0;
    goto LABEL_32;
  }
  v141[0] = 16 * (v118 + 1);
  v32 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v141);
  v96 = v141[0] / 16;
  if ( v141[0] / 16 == 0 )
LABEL_32:
    v96 = 0x80000000;
  v33 = v118 + 4;
  if ( v118 == -4 )
  {
    v107 = 0x80000000;
    v134 = 0;
    v120 = 0;
    goto LABEL_35;
  }
  v131 = 4 * v33;
  v141[0] = 4 * v33;
  v134 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
           (uint32_t *)(hkContainerTempAllocator::s_alloc),
           v141);
  v79 = v141[0] / 4;
  if ( v141[0] / 4 == 0 )
    v79 = 0x80000000;
  v141[0] = v131;
  v107 = v79;
  v120 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
           (uint32_t *)(hkContainerTempAllocator::s_alloc),
           v141);
  v113 = v141[0] / 4;
  if ( v141[0] / 4 == 0 )
LABEL_35:
    v113 = 0x80000000;
  if ( v118 > 0 )
  {
    v34 = v134;
    v35 = 16 * v89;
    v36 = 0;
    do
    {
      v34 += 4;
      v37 = v36++ + v89;
      *(uint16_t *)(v34 - 2) = v37;
      v38 = *(uint16_t *)(*(uint32_t *)(v105 + 160) + v35 + 8);
      v35 += 16;
      *(uint16_t *)(v34 - 4) = v38;
    }
    while ( v36 != v118 );
  }
  *(uint16_t *)(v134 + 4 * v118) = -1;
  v39 = 4 * v118;
  *(uint16_t *)(v134 + v39 + 4) = -1;
  *(uint16_t *)(v134 + v39 + 8) = -1;
  hkRadixSort::sort16(v134, (v118 + 3) & 0xFFFFFFFC, v120);
  v40 = 0;
  if ( v118 > 0 )
  {
    do
    {
      v41 = (uint32_t *)(*(uint32_t *)(v105 + 160) + 16 * *(uint16_t *)(v134 + v40 + 2));
      *(uint32_t *)(v32 + 4 * v40) = *v41;
      *(uint32_t *)(v32 + 4 * v40 + 4) = v41[1];
      *(uint32_t *)(v32 + 4 * v40 + 8) = v41[2];
      *(uint32_t *)(v32 + 4 * v40 + 12) = v41[3];
      v40 += 4;
    }
    while ( v40 != v39 );
  }
  *(uint16_t *)(v32 + 16 * v118 + 8) = -1;
  if ( v113 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v120,
      4 * v113);
  if ( v107 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v134,
      4 * v107);
  v114 = 0;
  v121 = v139;
  if ( v139 == -1
    || (v141[0] = 16 * (v139 + 1),
        v114 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                 (uint32_t *)(hkContainerTempAllocator::s_alloc),
                 v141),
        v94 = v141[0] / 16,
        v141[0] / 16 == 0) )
  {
    v94 = 0x80000000;
  }
  v42 = v121 + 4;
  if ( v121 == -4 )
  {
    v100 = 0x80000000;
    v135 = 0;
    v108 = 0;
    goto LABEL_49;
  }
  v130 = 4 * v42;
  v141[0] = 4 * v42;
  v135 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
           (uint32_t *)(hkContainerTempAllocator::s_alloc),
           v141);
  v78 = v141[0] / 4;
  if ( v141[0] / 4 == 0 )
    v78 = 0x80000000;
  v141[0] = v130;
  v100 = v78;
  v108 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
           (uint32_t *)(hkContainerTempAllocator::s_alloc),
           v141);
  v103 = v141[0] / 4;
  if ( v141[0] / 4 == 0 )
LABEL_49:
    v103 = 0x80000000;
  v43 = v135;
  v126 = *(uint32_t *)(v105 + 160);
  v44 = 0;
  if ( v121 > 0 )
  {
    do
    {
      v43 += 4;
      v45 = *(uint32_t *)(v138 + v44);
      v44 += 4;
      *(uint16_t *)(v43 - 2) = (v45 - v126) >> 4;
      *(uint16_t *)(v43 - 4) = *(uint16_t *)(v45 + 8);
    }
    while ( v44 != 4 * v121 );
    v43 = v135;
  }
  *(uint16_t *)(v43 + 4 * v121) = -1;
  v46 = 4 * v121;
  *(uint16_t *)(v43 + v46 + 4) = -1;
  *(uint16_t *)(v43 + v46 + 8) = -1;
  hkRadixSort::sort16(v43, (v121 + 3) & 0xFFFFFFFC, v108);
  v47 = 0;
  if ( v121 > 0 )
  {
    do
    {
      v48 = (uint32_t *)(*(uint32_t *)(v105 + 160) + 16 * *(uint16_t *)(v135 + v47 + 2));
      *(uint32_t *)(v114 + 4 * v47) = *v48;
      *(uint32_t *)(v114 + 4 * v47 + 4) = v48[1];
      *(uint32_t *)(v114 + 4 * v47 + 8) = v48[2];
      *(uint32_t *)(v114 + 4 * v47 + 12) = v48[3];
      v47 += 4;
    }
    while ( v47 != v46 );
  }
  *(uint16_t *)(v114 + 16 * v121 + 8) = -1;
  if ( v103 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v108,
      4 * v103);
  if ( v100 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v135,
      4 * v100);
  hkp3AxisSweep::collide1Axis(v105, v32, v118, v85);
  hkp3AxisSweep::collide1Axis(v105, v32, v118, v114, v121, 0, v85);
  if ( v94 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v114,
      16 * v94);
  if ( v96 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v32,
      16 * v96);
  result = v140;
  v139 = 0;
  if ( v140 >= 0 )
    result = (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               v138,
               4 * v140);
  v138 = 0;
  v140 = 0x80000000;
  if ( v81 >= 0 )
    result = (*(int (**)(uint32_t *, unsigned int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               v90,
               4 * v81);
  if ( v83 >= 0 )
    result = (*(int (**)(uint32_t *, unsigned int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               v91,
               4 * v83);
  if ( v84 >= 0 )
    return (*(int (**)(uint32_t *, unsigned int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v92,
             4 * v84);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::calcAabbCacheInternal  (binary VA: 0x16b2740)
// Original: hkp3AxisSweep::calcAabbCacheInternal
// ----------------------------------------------------------------------------
uint16_t * hkp3AxisSweep::calcAabbCacheInternal(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  uint16_t *v6;
  int v7;
  int v8;
  uint16_t *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint16_t *v17;
  int v18;
  int v19;
  uint16_t *v20;
  int v21;
  int v22;
  uint16_t *result;
  int v24;

  v3 = *(uint32_t *)(a2 + 4);
  *(uint32_t *)a3 = a3 + 36;
  *(uint32_t *)(a3 + 28) = 0;
  v4 = v3 + 1;
  *(uint32_t *)(a3 + 16) = 0;
  *(uint16_t *)(a3 + 36) = 0;
  *(uint16_t *)(a3 + 38) = 0;
  v5 = (2 * (v3 + 1)) | 0x80000000;
  *(uint32_t *)(a3 + 4) = 1;
  v6 = (uint16_t *)(a3 + 36 + 8 * v4);
  *(uint32_t *)(a3 + 8) = v5;
  *(uint32_t *)(a3 + 12) = (uint32_t)(uintptr_t)(v6);
  *(uint32_t *)(a3 + 20) = v5;
  *(uint32_t *)(a3 + 24) = a3 + 36 + 16 * v4;
  *(uint32_t *)(a3 + 32) = v5;
  *v6 = 0;
  v6[1] = 0;
  v7 = *(uint32_t *)(a3 + 28);
  v8 = *(uint32_t *)(a3 + 24);
  ++*(uint32_t *)(a3 + 16);
  v9 = (uint16_t *)(v8 + 4 * v7);
  *v9 = 0;
  v9[1] = 0;
  ++*(uint32_t *)(a3 + 28);
  v10 = *(int **)a2;
  v24 = *(uint32_t *)(a2 + 4) - 1;
  if ( v24 >= 0 )
  {
    do
    {
      v11 = *v10++;
      *(uint32_t *)(*(uint32_t *)a3 + 4 * *(uint32_t *)(a3 + 4)) = *(uint32_t *)(a1[43] + 4 * *(uint16_t *)(v11 + 8));
      v12 = *(uint32_t *)(a3 + 4) + 1;
      *(uint32_t *)(a3 + 4) = v12;
      *(uint32_t *)(*(uint32_t *)a3 + 4 * v12) = *(uint32_t *)(a1[43] + 4 * *(uint16_t *)(*(v10 - 1) + 10));
      ++*(uint32_t *)(a3 + 4);
      *(uint32_t *)(*(uint32_t *)(a3 + 12) + 4 * *(uint32_t *)(a3 + 16)) = *(uint32_t *)(a1[46]
                                                                               + 4 * *(uint16_t *)*(v10 - 1));
      v13 = *(uint32_t *)(a3 + 16) + 1;
      *(uint32_t *)(a3 + 16) = v13;
      *(uint32_t *)(*(uint32_t *)(a3 + 12) + 4 * v13) = *(uint32_t *)(a1[46] + 4 * *(uint16_t *)(*(v10 - 1) + 4));
      ++*(uint32_t *)(a3 + 16);
      *(uint32_t *)(*(uint32_t *)(a3 + 24) + 4 * *(uint32_t *)(a3 + 28)) = *(uint32_t *)(a1[49]
                                                                               + 4
                                                                               * *(uint16_t *)(*(v10 - 1) + 2));
      v14 = *(uint32_t *)(a3 + 28) + 1;
      --v24;
      *(uint32_t *)(a3 + 28) = v14;
      *(uint32_t *)(*(uint32_t *)(a3 + 24) + 4 * v14) = *(uint32_t *)(a1[49] + 4 * *(uint16_t *)(*(v10 - 1) + 6));
      ++*(uint32_t *)(a3 + 28);
    }
    while ( v24 != -1 );
  }
  v15 = (uint32_t *)a3;
  do
  {
    v16 = v15[1];
    if ( v16 > 2 )
      hkAlgorithm::quickSortRecursive_09325f(
        *v15 + 4,
        0,
        v16 - 2);
    v15 += 3;
  }
  while ( v15 != (uint32_t *)(a3 + 36) );
  v17 = (uint16_t *)(*(uint32_t *)a3 + 4 * *(uint32_t *)(a3 + 4));
  *v17 = -4;
  v17[1] = 0;
  v18 = *(uint32_t *)(a3 + 16);
  v19 = *(uint32_t *)(a3 + 12);
  ++*(uint32_t *)(a3 + 4);
  v20 = (uint16_t *)(v19 + 4 * v18);
  *v20 = -4;
  v20[1] = 0;
  v21 = *(uint32_t *)(a3 + 28);
  v22 = *(uint32_t *)(a3 + 24);
  ++*(uint32_t *)(a3 + 16);
  result = (uint16_t *)(v22 + 4 * v21);
  *result = -4;
  result[1] = 0;
  ++*(uint32_t *)(a3 + 28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::calcAabbCache  (binary VA: 0x16b2940)
// Original: hkp3AxisSweep::calcAabbCache
// ----------------------------------------------------------------------------
int hkp3AxisSweep::calcAabbCache(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  hkLifoAllocator::Self **v4;
  int v5;
  hkLifoAllocator::Self *v6;
  signed int v7;
  int result;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  bool v16; // cc
  typedef hkLifoAllocator::Self **_g4_t_v17;
  typedef signed int _g4_t_v18;
  typedef char *_g4_t_i;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef signed int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_i)) > _g4_s2 ? (12u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v20 = nullptr;
  v21 = 0;
  v22 = 0x80000000;
  v24 = a2[1];
  v3 = v24;
  if ( v24 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v10 = *address;
    v17 = address;
    v18 = (4 * v24 + 127) & 0xFFFFFF80;
    v11 = *((char **)*address + 3);
    if ( v18 <= *((uint32_t *)v10 + 2) && (unsigned int)(uintptr_t)(&v11[v18]) <= *((uint32_t *)v10 + 4) )
      *((uint32_t *)v10 + 3) = (uint32_t)(uintptr_t)(&v11[v18]);
    else
      v11 = (char *)hkLifoAllocator::allocateFromNewSlab(v10, v18);
    v12 = a2[1];
    v20 = v11;
    v22 = v3 | 0x80000000;
    v23 = v11;
    if ( v12 > 0 )
    {
      v13 = v21;
      v14 = 0;
      for ( i = v11; ; i = v20 )
      {
        v15 = *(uint32_t *)(*a2 + 4 * v14++);
        *(uint32_t *)&i[4 * v13] = a1[40] + 16 * *(uint32_t *)(v15 + 20);
        v13 = v21 + 1;
        v16 = a2[1] <= v14;
        ++v21;
        if ( v16 )
          break;
      }
    }
    v4 = v17;
  }
  else
  {
    v4 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v20 = nullptr;
    v22 = 0x80000000;
    v23 = nullptr;
  }
  hkp3AxisSweep::calcAabbCacheInternal(a1, (int)(uintptr_t)(&v20), a3);
  v5 = 0;
  if ( v20 != v23 )
    v5 = v21;
  v21 = v5;
  v6 = *v4;
  v7 = (4 * v24 + 127) & 0xFFFFFF80;
  if ( v7 > *((uint32_t *)*v4 + 2) || *((char **)v6 + 3) != &v23[v7] || v23 == *((char **)v6 + 5) )
    hkLifoAllocator::slowBlockFree(v6, v23, (4 * v24 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(v23);
  result = v22;
  v21 = 0;
  if ( v22 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v20,
             4 * v22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::calcAabbCache  (binary VA: 0x16b2b30)
// Original: hkp3AxisSweep::calcAabbCache
// ----------------------------------------------------------------------------
int hkp3AxisSweep::calcAabbCache(hkp3AxisSweep::Self *self, const hkAabb::Self *a2, char *a3)
{
  hkp3AxisSweep::Self *v3;
  unsigned int *v4;
  int result;
  typedef const hkAabb::Self *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef hkp3AxisSweep::Self **_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v10)) > _g4_s4 ? (16u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v11)) > _g4_s5 ? (20u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v12)) > _g4_s6 ? (36u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);

  v12 = &self;
  v3 = self;
  v4 = (unsigned int *)a2;
  v7 = a3;
  v9 = 0;
  v10 = 0;
  v11 = 0x80000000;
  if ( *((int *)self + 41) > 0 )
  {
    v6 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v8,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      &v9,
      *((uint32_t *)self + 41),
      4);
    v4 = (unsigned int *)v6;
  }
  hkp3AxisSweep::querySingleAabb((int)(uintptr_t)(v3), v4, 1, nullptr, &v9, 0);
  hkp3AxisSweep::calcAabbCacheInternal((uint32_t *)(v3), (int)(uintptr_t)(&v9), (int)(uintptr_t)(v7));
  result = v11;
  v10 = 0;
  if ( v11 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v9,
             4 * v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkp3AxisSweep::defragment  (binary VA: 0x16b3550)
// Original: hkp3AxisSweep::defragment
// ----------------------------------------------------------------------------
uint16_t * hkp3AxisSweep::defragment(hkp3AxisSweep::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  hkp3AxisSweep::Self *v5;
  int v6;
  int16_t v7;
  uint16_t *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint16_t *v21;
  int *v22;
  int v23;
  int i;
  bool v25;
  uint16_t *result;
  signed int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  bool v32;
  unsigned int v33;
  int v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint16_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v36)) > _g4_s1 ? (16u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v38)) > _g4_s3 ? (24u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v43)) > _g4_s8 ? (44u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v44)) > _g4_s9 ? (44u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v46)) > _g4_s11 ? (44u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v47)) > _g4_s12 ? (48u + sizeof(_g4_t_v47)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);

  v1 = *((uint32_t *)self + 41);
  v38 = v1;
  if ( v1 == 0 )
  {
    v41 = 0;
    v37 = 0x80000000;
    v39 = 0x80000000;
    v42 = 0;
    v2 = 0;
    goto LABEL_3;
  }
  v47[0] = 16 * v1;
  v41 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v47);
  v28 = v47[0] / 16;
  if ( v47[0] / 16 == 0 )
    v28 = 0x80000000;
  v29 = 4 * v1;
  v39 = v28;
  v47[0] = v29;
  v42 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v47);
  v30 = v47[0];
  v31 = v47[0] + 3;
  v32 = v47[0] < 0;
  v47[0] = v29;
  if ( v32 )
    v30 = v31;
  v33 = 0x80000000;
  v34 = v30 >> 2;
  if ( v34 != 0 )
    v33 = v34;
  v37 = v33;
  v2 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
         (uint32_t *)(hkContainerTempAllocator::s_alloc),
         v47);
  v40 = v47[0] / 4;
  v1 = *((uint32_t *)self + 41);
  if ( v47[0] / 4 == 0 )
  {
LABEL_3:
    v40 = 0x80000000;
    if ( v1 > 0 )
      goto LABEL_4;
LABEL_46:
    v9 = v1;
    goto LABEL_7;
  }
  if ( v1 <= 0 )
    goto LABEL_46;
LABEL_4:
  v36 = v2;
  v3 = v41;
  v43 = (uint16_t *)v42;
  v4 = 0;
  v5 = self;
  do
  {
    v6 = *((uint32_t *)v5 + 40);
    v3 += 16;
    *(uint32_t *)(v3 - 16) = *(uint32_t *)(v6 + 16 * v4);
    *(uint32_t *)(v3 - 12) = *(uint32_t *)(v6 + 16 * v4 + 4);
    *(uint32_t *)(v3 - 8) = *(uint32_t *)(v6 + 16 * v4 + 8);
    v5 = self;
    *(uint32_t *)(v3 - 4) = *(uint32_t *)(v6 + 16 * v4 + 12);
    v7 = *(uint16_t *)(*((uint32_t *)self + 40) + 16 * v4 + 8);
    v8 = v43;
    v43 += 2;
    v8[1] = v4;
    *v8 = v7;
    ++v4;
    v9 = *((uint32_t *)self + 41);
  }
  while ( v9 > v4 );
  v2 = v36;
LABEL_7:
  if ( v38 > 2 )
  {
    v35 = 0;
    hkAlgorithm::quickSortRecursive_c3373e(
      v42 + 4,
      0,
      v38 - 2);
    v9 = *((uint32_t *)self + 41);
  }
  if ( v9 > 0 )
  {
    v10 = 0;
    do
    {
      v11 = *(uint16_t *)(v42 + 4 * v10 + 2);
      *(uint32_t *)(v2 + 4 * v11) = v10;
      v12 = (uint32_t *)(v41 + 16 * v11);
      v13 = (uint32_t *)(*((uint32_t *)self + 40) + 16 * v10++);
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      v14 = *((uint32_t *)self + 41);
    }
    while ( v14 > v10 );
    if ( v14 > 1 )
    {
      v15 = 1;
      do
      {
        while ( 1 )
        {
          v16 = *(uint32_t *)(*((uint32_t *)self + 40) + 16 * v15 + 12);
          if ( (v16 & 1) != 0 )
            break;
          *(uint32_t *)v16 = v15++;
          if ( *((uint32_t *)self + 41) <= v15 )
            goto LABEL_17;
        }
        *(uint16_t *)(*((uint32_t *)self + 54) + (v16 & 0xFFFFFFFE)) = v15++;
      }
      while ( *((uint32_t *)self + 41) > v15 );
    }
  }
LABEL_17:
  v44 = 0;
  v17 = *((uint32_t *)self + 52);
  if ( v17 > 0 )
  {
    do
    {
      v18 = *((uint32_t *)self + 54) + 16 * v44;
      v19 = *(uint32_t *)(v18 + 8) - 1;
      if ( v19 >= 0 )
      {
        v20 = 2 * v19;
        do
        {
          v21 = (uint16_t *)(*(uint32_t *)(v18 + 4) + v20);
          v20 -= 2;
          *v21 = *(uint32_t *)(v2 + 4 * (uint16_t)*v21);
        }
        while ( v20 != -2 );
        v17 = *((uint32_t *)self + 52);
      }
      ++v44;
    }
    while ( v44 < v17 );
  }
  v45 = 3;
  v22 = (int *)((char *)self + 172);
  do
  {
    v23 = 0;
    for ( i = *v22; v22[1] > v23; ++v23 )
      *(uint16_t *)(i + 4 * v23 + 2) = *(uint32_t *)(v2 + 4 * *(uint16_t *)(i + 4 * v23 + 2));
    v25 = v45-- == 1;
    v22 += 3;
  }
  while ( !v25 );
  result = (uint16_t *)self;
  if ( *((int *)self + 41) > 1 )
  {
    v46 = v2;
    v27 = 1;
    do
      result = hkp3AxisSweep::fixDeterministicOrderAfterNodeIdWasDecreased(self, v27++);
    while ( *((uint32_t *)self + 41) > v27 );
    v2 = v46;
  }
  if ( v40 >= 0 )
    result = (uint16_t *)(*(int (**)(uint32_t *, int, int, char))(hkContainerTempAllocator::s_alloc[0] + 20))(
                                   (uint32_t *)(hkContainerTempAllocator::s_alloc),
                                   v2,
                                   4 * v40,
                                   v35);
  if ( v37 >= 0 )
    result = (uint16_t *)(*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                                   (uint32_t *)(hkContainerTempAllocator::s_alloc),
                                   v42,
                                   4 * v37);
  if ( v39 >= 0 )
    return (uint16_t *)(*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                                 (uint32_t *)(hkContainerTempAllocator::s_alloc),
                                 v41,
                                 16 * v39);
  return result;
}


