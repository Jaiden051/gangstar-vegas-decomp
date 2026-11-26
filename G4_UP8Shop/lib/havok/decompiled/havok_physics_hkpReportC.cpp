#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpReportC.h"

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::reserveContactPointsImpl  (binary VA: 0x1777c20)
// Original: hkpReportContactMgr::reserveContactPointsImpl
// ----------------------------------------------------------------------------
hkpReportContactMgr::Self * hkpReportContactMgr::reserveContactPointsImpl(hkpReportContactMgr::Self *self, int a2)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::cleanup  (binary VA: 0x1777c30)
// Original: hkpReportContactMgr::cleanup
// ----------------------------------------------------------------------------
hkpReportContactMgr::Self * hkpReportContactMgr::cleanup(hkpReportContactMgr::Self *self)
{
  hkpReportContactMgr::Self *result;

  result = self;
  if ( self != nullptr )
    return (hkpReportContactMgr::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::getType  (binary VA: 0x1777c50)
// Original: hkpReportContactMgr::getType
// ----------------------------------------------------------------------------
int hkpReportContactMgr::getType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Destroy  (binary VA: 0x1777c60)
// Original: hkpReportContactMgr::~hkpReportContactMgr
// ----------------------------------------------------------------------------
void hkpReportContactMgr::Destroy(hkpReportContactMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Factory::Destroy  (binary VA: 0x1777c80)
// Original: hkpReportContactMgr::Factory::~Factory
// ----------------------------------------------------------------------------
void hkpReportContactMgr::Factory::Destroy(hkpReportContactMgr::Factory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::removeContactPointImpl  (binary VA: 0x1777ca0)
// Original: hkpReportContactMgr::removeContactPointImpl
// ----------------------------------------------------------------------------
int hkpReportContactMgr::removeContactPointImpl(hkpReportContactMgr::Self *self, uint16_t a2, hkpConstraintOwner::Self *a3)
{
  int v3;
  int v4;
  int result;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v7[5] = (uint32_t)(uintptr_t)(self);
  LOWORD(v7[0]) = a2;
  v7[6] = (uint32_t)(uintptr_t)(a3);
  v3 = *((uint32_t *)self + 4);
  v4 = *((uint32_t *)self + 5);
  v6 = *((uint32_t *)self + 3);
  v7[1] = 0;
  v7[2] = v3;
  v7[3] = v4;
  result = hkpWorldCallbackUtil::fireContactPointRemoved(v6, (int)(uintptr_t)(v7));
  if ( *(uint16_t *)(v3 + 516) != 0 )
    result = hkpEntityCallbackUtil::fireContactPointRemovedInternal(v3, v7);
  if ( *(uint16_t *)(v4 + 516) != 0 )
    return hkpEntityCallbackUtil::fireContactPointRemovedInternal(v4, v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::confirmToi  (binary VA: 0x1777d40)
// Original: hkpReportContactMgr::confirmToi
// ----------------------------------------------------------------------------
int hkpReportContactMgr::confirmToi(int a1, uint32_t *a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  uint32_t v8[19];

  v8[4] = 0;
  LOWORD(v8[7]) = 0;
  BYTE2(v8[7]) = 0;
  v8[11] = 0;
  v8[12] = 0;
  v3 = a2[3];
  v4 = a2[5];
  v8[2] = a2[4];
  v8[3] = v4;
  v8[1] = v3;
  v8[5] = (uint32_t)(uintptr_t)(a2 + 20);
  v8[6] = (uint32_t)(uintptr_t)(a2 + 6);
  v8[8] = (uint32_t)(uintptr_t)(a2 + 1);
  v8[9] = (uint32_t)(uintptr_t)(&a3);
  v8[10] = (uint32_t)(uintptr_t)(a2 + 11);
  v5 = *(uint32_t *)(v3 + 8);
  v8[0] = 2;
  hkpWorldCallbackUtil::fireContactPointCallback(v5, (int)(uintptr_t)(v8));
  v6 = a2[3];
  v8[0] = 0;
  if ( *(uint16_t *)(v6 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointCallbackInternal(v6, v8);
  result = a2[4];
  v8[0] = 1;
  if ( *(uint16_t *)(result + 516) != 0 )
    return hkpEntityCallbackUtil::fireContactPointCallbackInternal(result, v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::processContactImpl  (binary VA: 0x1777f30)
// Original: hkpReportContactMgr::processContactImpl
// ----------------------------------------------------------------------------
uint32_t * hkpReportContactMgr::processContactImpl(int a1, int a2, int a3, int a4, uint32_t *a5)
{
  uint32_t *result;
  int16_t v6;

  result = (uint32_t *)a1;
  v6 = *(uint16_t *)(a1 + 24);
  *(uint16_t *)(a1 + 24) = v6 - 1;
  if ( v6 == 0 )
    return (uint32_t *)(uintptr_t)(sub_1777E30(a1, a2, a3, a5));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Factory::Destroy_ea1777f70  (binary VA: 0x1777f70)
// Original: hkpReportContactMgr::Factory::~Factory
// ----------------------------------------------------------------------------
void hkpReportContactMgr::Factory::Destroy_ea1777f70(hkpReportContactMgr::Factory::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Destroy_ea1777fd0  (binary VA: 0x1777fd0)
// Original: hkpReportContactMgr::~hkpReportContactMgr
// ----------------------------------------------------------------------------
void hkpReportContactMgr::Destroy_ea1777fd0(hkpReportContactMgr::Self *self)
{
  int v1;
  int v2;

  hkpReportContactMgr::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::removeToiImpl  (binary VA: 0x1778030)
// Original: hkpReportContactMgr::removeToiImpl
// ----------------------------------------------------------------------------
uint32_t * hkpReportContactMgr::removeToiImpl(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *result;
  uint32_t v7[11];

  LOWORD(v7[0]) = -1;
  v7[1] = a3;
  v3 = *(uint32_t *)(a1 + 16);
  v4 = *(uint32_t *)(a1 + 20);
  v5 = *(uint32_t *)(v3 + 8);
  v7[5] = a1;
  v7[6] = a2;
  v7[2] = v3;
  v7[3] = v4;
  hkpWorldCallbackUtil::fireContactPointRemoved(v5, (int)(uintptr_t)(v7));
  result = v7;
  if ( *(uint16_t *)(v3 + 516) != 0 )
  {
    hkpEntityCallbackUtil::fireContactPointRemovedInternal(v3, v7);
    result = v7;
  }
  if ( *(uint16_t *)(v4 + 516) != 0 )
    return (uint32_t *)hkpEntityCallbackUtil::fireContactPointRemovedInternal(v4, v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::addToiImpl  (binary VA: 0x17780d0)
// Original: hkpReportContactMgr::addToiImpl
// ----------------------------------------------------------------------------
int hkpReportContactMgr::addToiImpl(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9, uint8_t *a10)
{
  int result;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v14)) > _g4_s3 ? (44u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v15)) > _g4_s4 ? (48u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v16)) > _g4_s5 ? (52u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v17)) > _g4_s6 ? (56u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v18)) > _g4_s7 ? (60u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v19)) > _g4_s8 ? (64u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  v13[2] = 0;
  v13[6] = (uint32_t)(uintptr_t)(a10);
  v16 = a1;
  v15 = 0;
  a10[12] = 0;
  a10[14] = 0;
  a10[13] = 0;
  a10[15] = 1;
  v14 = *a9;
  v13[0] = a2;
  v19 = a6;
  v13[1] = a3;
  v13[4] = a7;
  v13[5] = a8;
  v17 = a4;
  v18 = a5;
  v12 = a1[5];
  v11 = a1[4];
  hkpWorldCallbackUtil::fireContactPointAdded(a1[3], (int)(uintptr_t)(v13));
  if ( *(uint16_t *)(v11 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointAddedInternal(v11, v13);
  if ( *(uint16_t *)(v12 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointAddedInternal(v12, v13);
  result = v15;
  if ( v15 == 1 )
  {
    G4_VCALL<void>(a1, 40, *(uint32_t *)(a5 + 4), a10);
    return v15;
  }
  else
  {
    *a9 = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::addContactPointImpl  (binary VA: 0x1778200)
// Original: hkpReportContactMgr::addContactPointImpl
// ----------------------------------------------------------------------------
int hkpReportContactMgr::addContactPointImpl(int a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  float *v7;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  int v15;
  int16_t v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef float *_g4_t_v21;
  typedef float _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef float *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v25)) > _g4_s7 ? (40u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v27)) > _g4_s9 ? (48u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v28)) > _g4_s10 ? (52u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v29)) > _g4_s11 ? (56u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v30)) > _g4_s12 ? (60u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v31)) > _g4_s13 ? (64u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v32)) > _g4_s14 ? (68u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v33)) > _g4_s15 ? (72u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v34)) > _g4_s16 ? (76u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v35)) > _g4_s17 ? (80u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v36)) > _g4_s18 ? (84u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v37)) > _g4_s19 ? (88u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v38)) > _g4_s20 ? (92u + sizeof(_g4_t_v38)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);

  v7 = *(float **)(a1 + 16);
  v8 = *(uint32_t *)(a1 + 20);
  v9 = a7[1] - *(float *)(v8 + 324);
  v10 = *a7 - *(float *)(v8 + 320);
  v11 = *a7 - v7[80];
  v12 = a7[2];
  v22 = a7[1] - v7[81];
  v13 = (float)((float)((float)((float)((float)(*(float *)(v8 + 452) * (float)(v12 - *(float *)(v8 + 328)))
                                      - (float)(*(float *)(v8 + 456) * v9))
                              + *(float *)(v8 + 432))
                      - (float)((float)((float)(v7[113] * (float)(v12 - v7[82])) - (float)(v22 * v7[114])) + v7[108]))
              * a7[4])
      + (float)((float)((float)((float)((float)(*(float *)(v8 + 456) * v10)
                                      - (float)((float)(v12 - *(float *)(v8 + 328)) * *(float *)(v8 + 448)))
                              + *(float *)(v8 + 436))
                      - (float)((float)((float)(v7[114] * v11) - (float)((float)(v12 - v7[82]) * v7[112])) + v7[109]))
              * a7[5]);
  v14 = (float)((float)((float)((float)(v9 * *(float *)(v8 + 448)) - (float)(v10 * *(float *)(v8 + 452)))
                      + *(float *)(v8 + 440))
              - (float)((float)((float)(v22 * v7[112]) - (float)(v11 * v7[113])) + v7[110]))
      * a7[6];
  v23 = a2;
  v27 = a7;
  v24 = a3;
  v28 = a6;
  v34 = a5;
  v15 = *(uint32_t *)(a1 + 8);
  v33 = a4;
  v16 = 0;
  v25 = 1;
  v29 = 0;
  v32 = a1;
  v30 = v13 + v14;
  v31 = 0;
  LOWORD(v35) = 0;
  if ( v15 == 0 )
    v16 = *(uint16_t *)(a1 + 18);
  v21 = v7;
  HIWORD(v35) = v16;
  hkpWorldCallbackUtil::fireContactPointAdded(*(uint32_t *)(a1 + 12), (int)(uintptr_t)(&v23));
  if ( *((uint16_t *)v21 + 258) != 0 )
    hkpEntityCallbackUtil::fireContactPointAddedInternal(v21, &v23);
  if ( *(uint16_t *)(v8 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointAddedInternal(v8, &v23);
  if ( v31 == 1 )
  {
    G4_VCALL<void>(a1, 28, 0, *(uint32_t *)(a5 + 4), v18, v19, v20, v21, &v23, v23, v24, v25, v26, v27, v28, v29, COERCE_FLOAT(LODWORD(v30)), 1, v32, v33, v34, v35, v36, v37, v38);
    return -1;
  }
  else
  {
    *(uint16_t *)(a1 + 24) = HIWORD(v35);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Construct  (binary VA: 0x1778460)
// Original: hkpReportContactMgr::hkpReportContactMgr
// ----------------------------------------------------------------------------
void hkpReportContactMgr::Construct(hkpReportContactMgr::Self *self, hkpWorld::Self *a2, hkpRigidBody::Self *a3, hkpRigidBody::Self *a4)
{
  uint16_t v4; // si

  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A08C8);
  v4 = *((uint16_t *)a3 + 83);
  if ( *((uint16_t *)a4 + 83) <= v4 )
    v4 = *((uint16_t *)a4 + 83);
  *((uint16_t *)self + 12) = v4;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a4);
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Factory::createContactMgr  (binary VA: 0x17784c0)
// Original: hkpReportContactMgr::Factory::createContactMgr
// ----------------------------------------------------------------------------
hkpReportContactMgr::Self * hkpReportContactMgr::Factory::createContactMgr(int a1, int a2, int a3)
{
  hkpRigidBody::Self *v3;
  hkpRigidBody::Self *v4;
  int address;
  hkpReportContactMgr::Self *v6;

  v3 = (hkpRigidBody::Self *)(a3 + *(char *)(a3 + 16));
  v4 = (hkpRigidBody::Self *)(a2 + *(char *)(a2 + 16));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (hkpReportContactMgr::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)address + 44),
                                28);
  hkpReportContactMgr::Construct(v6, *(hkpWorld::Self **)(a1 + 8), v4, v3);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkpReportContactMgr::Factory::Construct  (binary VA: 0x1778540)
// Original: hkpReportContactMgr::Factory::Factory
// ----------------------------------------------------------------------------
hkpReportContactMgr::Factory::Self * hkpReportContactMgr::Factory::Construct(hkpReportContactMgr::Factory::Self *self, hkpWorld::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0928);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  return self;
}


