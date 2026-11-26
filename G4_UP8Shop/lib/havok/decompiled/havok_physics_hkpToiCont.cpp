#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpToiCont.h"

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::getProcessTag  (binary VA: 0x18386f0)
// Original: hkpToiContactPointViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpToiContactPointViewer::getProcessTag()
{
  return hkpToiContactPointViewer::s_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::init  (binary VA: 0x1838720)
// Original: hkpToiContactPointViewer::init
// ----------------------------------------------------------------------------
int hkpToiContactPointViewer::init(hkpToiContactPointViewer::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(*(uint32_t *)(result + 108) + 4 * v2++);
      G4_VCALL<void>(self, 36, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( result != 0 && v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::worldAddedCallback  (binary VA: 0x1838780)
// Original: hkpToiContactPointViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpToiContactPointViewer::worldAddedCallback(hkpToiContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addContactListener(a2, (int)(uintptr_t)(self) + 40);
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::worldRemovedCallback  (binary VA: 0x18387c0)
// Original: hkpToiContactPointViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
uint32_t * hkpToiContactPointViewer::worldRemovedCallback(hkpToiContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeContactListener(a2, (int)(uintptr_t)(self) + 40);
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::Destroy  (binary VA: 0x1838800)
// Original: hkpToiContactPointViewer::~hkpToiContactPointViewer
// ----------------------------------------------------------------------------
void hkpToiContactPointViewer::Destroy(hkpToiContactPointViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A2F48);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A2F84);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A2FB0);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_20A2FC8);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpToiContactPointViewer::worldRemovedCallback(self, v3);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v1 != 0 && v2 < *(uint32_t *)(v1 + 112) );
  }
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054FC8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::Destroy_ea18388c0  (binary VA: 0x18388c0)
// Original: hkpToiContactPointViewer::~hkpToiContactPointViewer
// ----------------------------------------------------------------------------
void hkpToiContactPointViewer::Destroy_ea18388c0(hkpToiContactPointViewer::Self *self)
{
  int v1;
  int v2;

  hkpToiContactPointViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::contactPointCallback  (binary VA: 0x1838950)
// Original: hkpToiContactPointViewer::contactPointCallback
// ----------------------------------------------------------------------------
uint32_t * hkpToiContactPointViewer::contactPointCallback(uint32_t *a1, int a2)
{
  uint32_t *result;
  float *v3;
  int v4;
  int address;
  __m128i v6;
  __m128 v7;
  float v8; // xmm0_4
  __m128i v9;
  uint32_t *v10;
  uint64_t v11; // rax
  float v12; // xmm6_4
  __m128 v13;
  __m128 v14;
  float v15; // xmm4_4
  int v16;
  int v17;
  bool v18; // cc
  __m128 v19;
  int32_t v20; // xmm0_4
  float v21; // xmm5_4
  int v22; // xmm2_4
  float v23; // xmm0_4
  __m128i v24;
  int v25;
  int v26;
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm6_4
  float v33; // xmm3_4
  int v34;
  float v35; // xmm5_4
  float v36; // xmm2_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float v39; // xmm5_4
  float v40; // xmm7_4
  float v41; // xmm4_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  uint32_t *v45;
  uint64_t v46; // rax
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef char _g4_t_v60[4];
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v48)) > _g4_s1 ? (8u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v49)) > _g4_s2 ? (8u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v50)) > _g4_s3 ? (12u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v51)) > _g4_s4 ? (12u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v52)) > _g4_s5 ? (16u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v53)) > _g4_s6 ? (16u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v54)) > _g4_s7 ? (20u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v55)) > _g4_s8 ? (24u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v56)) > _g4_s9 ? (24u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v57)) > _g4_s10 ? (24u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v58)) > _g4_s11 ? (24u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v59)) > _g4_s12 ? (28u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v60)) > _g4_s13 ? (40u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v61)) > _g4_s14 ? (44u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v62)) > _g4_s15 ? (48u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v63)) > _g4_s16 ? (52u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v64)) > _g4_s17 ? (56u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v65)) > _g4_s18 ? (60u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v66)) > _g4_s19 ? (64u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v67)) > _g4_s20 ? (68u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v68)) > _g4_s21 ? (72u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v69)) > _g4_s22 ? (76u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v70)) > _g4_s23 ? (80u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v71)) > _g4_s24 ? (84u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v72)) > _g4_s25 ? (88u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v73)) > _g4_s26 ? (92u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v74)) > _g4_s27 ? (96u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v75)) > _g4_s28 ? (100u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v76)) > _g4_s29 ? (104u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v77)) > _g4_s30 ? (116u + sizeof(_g4_t_v77)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 84u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 92u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 116u);

  v77 = (uint32_t *)(&a1);
  result = a1;
  if ( *(int *)(a2 + 16) <= 0 )
  {
    v3 = *(float **)(a2 + 20);
    v48 = v3[4];
    v50 = v3[5];
    v52 = v3[6];
    v4 = a1[6];
    result = &g_vectorfConstants;
    v55 = (float)((float)(v48 * v48) + (float)(v50 * v50)) + (float)(v52 * v52);
    if ( v55 > 0.00000011920929f )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance));
g4_m128_raw(v6) = LODWORD(v55);
g4_m128_raw(v7) = LODWORD(v52);
      v54 = *(uint32_t **)address;
      v8 = v50;
      *(float *)g4_m128_ptr<int32_t>(v9) = v48;
      v10 = *(uint32_t **)(*(uint32_t *)address + 4);
      if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*(uint32_t *)address + 12) )
      {
        *v10 = (uint32_t)(uintptr_t)("TtToiDisplayArrow");
        v11 = __rdtsc();
        v10[1] = v11;
        v54[1] = (uint32_t)(uintptr_t)(v10 + 3);
g4_m128_raw(v9) = *((unsigned int *)v3 + 4);
        v8 = v3[5];
        v6 = v9;
g4_m128_raw(v7) = *((unsigned int *)v3 + 6);
        *(float *)g4_m128_ptr<int32_t>(v6) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)) + (float)(v8 * v8))
                               + (float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v7, 0));
      }
      v61 = *v3 + *(float *)g4_m128_ptr<int32_t>(v9);
      v53 = v61;
      v62 = v3[1] + v8;
      v51 = v62;
      v63 = v3[2] +g4_m128_lane<float>(v7, 0);
      v49 = v63;
      v12 = fabs(*(float *)g4_m128_ptr<int32_t>(v9));
g4_m128_lane<int32_t>(v13, 0) = fabs(v8);
      v14 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v7);
      v47 = v3[3] + v3[7];
      v64 = v47;
      if ( v12 >g4_m128_lane<float>(v13, 0) )
      {
        v16 = 0;
        v17 = 1;
      }
      else
      {
        v15 = *(float *)g4_m128_ptr<int32_t>(v9);
        v16 = 1;
        *(float *)g4_m128_ptr<int32_t>(v9) = v8;
        v17 = 0;
        v8 = v15;
g4_m128_lane<float>(v13, 0) = v12;
      }
      v18 =g4_m128_lane<float>(v13, 0) <=g4_m128_lane<float>(v14, 0);
      v19 = _mm_cmplt_ss(v14, v13);
      v20 = LODWORD(v8) &g4_m128_lane<int32_t>(v19, 0);
      v21 =g4_m128_lane<float>(_mm_andnot_ps(v19, v7), 0);
      if ( v18 )
        v17 = 2;
      v22 = LODWORD(v21) | v20;
      v23 = 0.0;
      v65 = 0.0;
      v66 = 0.0;
      v67 = 0.0;
      v68 = 0.0;
      *((uint32_t *)&v65 + v16) = v22;
      *(&v65 + v17) = -*(float *)g4_m128_ptr<int32_t>(v9);
g4_m128_raw(v24) = LODWORD(v65);
      *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)g4_m128_ptr<int32_t>(v24)) + (float)(v66 * v66))
                              + (float)(v67 * v67);
      if ( *(float *)g4_m128_ptr<int32_t>(v24) <= 0.0 )
      {
        v29 = 0.0;
      }
      else
      {
        v25 = _mm_cvtsi128_si32(v24) >> 1;
        v26 = (_mm_cvtsi128_si32(v24) + 2139095040) >> 31;
        v56 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v24);
        v27 = (float)(1.5 * COERCE_FLOAT(v26 & (1597463174 - v25)))
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * COERCE_FLOAT(v26 & (1597463174 - v25)))
                    * (float)(COERCE_FLOAT(v26 & (1597463174 - v25)) * COERCE_FLOAT(v26 & (1597463174 - v25))));
        v28 = (float)(1.5 * v27) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * v27) * (float)(v27 * v27));
        v29 = (float)(1.5 * v28) - (float)((float)(v56 * v28) * (float)(v28 * v28));
      }
      v30 = v66 * v29;
      v31 = v67 * v29;
      v32 = v65 * v29;
      v33 = v29 * v68;
      v57 = v30;
      if ( *(float *)g4_m128_ptr<int32_t>(v6) > 0.0 )
      {
        v34 = ((_mm_cvtsi128_si32(v6) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v6) >> 1));
        v35 = (float)(*(float *)&v34 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * *(float *)&v34)
                    * (float)(*(float *)&v34 * *(float *)&v34));
        v36 = (float)(v35 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * v35) * (float)(v35 * v35));
        v23 = (float)((float)(1.5 * v36)
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * v36) * (float)(v36 * v36)))
            * *(float *)g4_m128_ptr<int32_t>(v6);
      }
      v37 = v57;
      v58 = v33 * v23;
      v38 = v32 * v23;
      v39 = v37 * v23;
      v40 = (float)((float)(v53 - *v3) * 0.85f) + *v3;
      v59 = v31 * v23;
      v41 = (float)((float)(v51 - v3[1]) * 0.85f) + v3[1];
      v42 = (float)((float)(v49 - v3[2]) * 0.85f) + v3[2];
      v43 = (float)((float)(v47 - v3[3]) * 0.85f) + v3[3];
      v69 = v40 + (float)(v38 * (float)(1.0 - 0.85f));
      v70 = (float)(v39 * (float)(1.0 - 0.85f)) + v41;
      v71 = (float)(v59 * (float)(1.0 - 0.85f)) + v42;
      v44 = -(float)(1.0 - 0.85f);
      v72 = (float)(v58 * (float)(1.0 - 0.85f)) + v43;
      v74 = (float)(v39 * v44) + v41;
      v73 = (float)(v38 * v44) + v40;
      v75 = (float)(v59 * v44) + v42;
      v76 = (float)(v44 * v58) + v43;
      (*(void (**)(char *))(*(uint32_t *)v4 + 72))(v60);
      (*(void (**)(char *))(*(uint32_t *)v4 + 72))(v60);
      (*(void (**)(char *))(*(uint32_t *)v4 + 72))(v60);
      result = v54;
      v45 = (uint32_t *)v54[1];
      if ( (unsigned int)(uintptr_t)(v45) < v54[3] )
      {
        *v45 = (uint32_t)(uintptr_t)("Et");
        v46 = __rdtsc();
        v45[1] = v46;
        v54[1] = (uint32_t)(uintptr_t)(v45 + 3);
        return v54;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::registerViewer  (binary VA: 0x1838ed0)
// Original: hkpToiContactPointViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpToiContactPointViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Contact Points (TOI)",
             hkpToiContactPointViewer::create);
  hkpToiContactPointViewer::s_tag = result;
  return result;
}



// ============================================================================
// Address:   0x1838f20 (size: 77 bytes)
// Symbol:    _ZN24hkpToiContactPointViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpToiContactPointViewer::hkpToiContactPointViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN24hkpToiContactPointViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
int (**hkpToiContactPointViewer::hkpToiContactPointViewer(uint32_t *a1, int a2))(int)
{
  hkpWorldViewerBase::Construct(a1, a2);
  *a1 = ((uint32_t)(uintptr_t)&off_20A2F48);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A2F84);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A2FB0);
  a1[10] = (uint32_t)(uintptr_t)(&off_20A2FC8);
  return (int (**)(int))(uintptr_t)(&off_20A2FC8);
}
// ----------------------------------------------------------------------------
// Function: hkpToiContactPointViewer::create  (binary VA: 0x1838f70)
// Original: hkpToiContactPointViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpToiContactPointViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  hkpToiContactPointViewer::hkpToiContactPointViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


