#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMidphas.h"

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::getProcessTag  (binary VA: 0x1840fd0)
// Original: hkpMidphaseViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpMidphaseViewer::getProcessTag()
{
  return hkpMidphaseViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::worldAddedCallback  (binary VA: 0x1841000)
// Original: hkpMidphaseViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpMidphaseViewer::worldAddedCallback(hkpMidphaseViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpMidphaseViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::worldRemovedCallback  (binary VA: 0x1841040)
// Original: hkpMidphaseViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpMidphaseViewer::worldRemovedCallback(hkpMidphaseViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpMidphaseViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::Destroy  (binary VA: 0x1841080)
// Original: hkpMidphaseViewer::~hkpMidphaseViewer
// ----------------------------------------------------------------------------
void hkpMidphaseViewer::Destroy(hkpMidphaseViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;
  int v4;
  hkpWorld::Self *v5;
  void (**v6)(hkpWorld::Self *);
  int v7;
  hkpWorld::Self *v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3668);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A36A0);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A36CC);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A36E4);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpMidphaseViewer::Self *)((char *)self + 40));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v4 = *((uint32_t *)self + 12) - 1;
  v5 = (hkpWorld::Self *)(*((uint32_t *)self + 11) + (v4 << 7));
  if ( v4 >= 0 )
  {
    do
    {
      v6 = *(void (***)(hkpWorld::Self *))v5;
      --v4;
      v8 = v5;
      v5 = (hkpWorld::Self *)((char *)v5 - 128);
      (*v6)(v8);
    }
    while ( v4 != -1 );
  }
  v7 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      v7 << 7);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::Destroy_ea18411b0  (binary VA: 0x18411b0)
// Original: hkpMidphaseViewer::~hkpMidphaseViewer
// ----------------------------------------------------------------------------
void hkpMidphaseViewer::Destroy_ea18411b0(hkpMidphaseViewer::Self *self)
{
  int v1;
  int v2;

  hkpMidphaseViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::postSimulationCallback  (binary VA: 0x1841240)
// Original: hkpMidphaseViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpMidphaseViewer::postSimulationCallback(hkpMidphaseViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  hkpMidphaseViewer::Self *v6;
  int v7;
  void (***v8)(uint32_t);
  void (**v9)(uint32_t);
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __m128i v22;
  int v23;
  int v24; // xmm1_4
  float v25; // xmm1_4
  __m128i v26;
  int v27;
  int v28;
  float v29; // xmm3_4
  __m128i v30;
  int v31;
  float v32; // xmm4_4
  float v33; // xmm6_4
  int v34;
  int v35;
  float v36; // xmm7_4
  float v37; // xmm6_4
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint64_t v44; // rax
  int v45;
  uint32_t *v46;
  typedef void (***_g4_t_v48)(uint32_t);
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef hkpWorld::Self *_g4_t_v58;
  typedef hkVector4f::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef hkpMidphaseViewer::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef hkpMidphaseViewer::Self **_g4_t_v97;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v48)) > _g4_s0 ? (4u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v49)) > _g4_s1 ? (28u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v50)) > _g4_s2 ? (36u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v51)) > _g4_s3 ? (36u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v52)) > _g4_s4 ? (40u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_i)) > _g4_s5 ? (44u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v54)) > _g4_s6 ? (48u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v55)) > _g4_s7 ? (52u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v56)) > _g4_s8 ? (56u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v57)) > _g4_s9 ? (64u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v58)) > _g4_s10 ? (68u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v59)) > _g4_s11 ? (76u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v60)) > _g4_s12 ? (80u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v61)) > _g4_s13 ? (84u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v62)) > _g4_s14 ? (88u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v63)) > _g4_s15 ? (92u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v64)) > _g4_s16 ? (96u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v65)) > _g4_s17 ? (100u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v66)) > _g4_s18 ? (104u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v67)) > _g4_s19 ? (108u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v68)) > _g4_s20 ? (108u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v69)) > _g4_s21 ? (108u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v70)) > _g4_s22 ? (112u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v71)) > _g4_s23 ? (116u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v72)) > _g4_s24 ? (120u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v73)) > _g4_s25 ? (124u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v74)) > _g4_s26 ? (128u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v75)) > _g4_s27 ? (132u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v76)) > _g4_s28 ? (136u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v77)) > _g4_s29 ? (140u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v78)) > _g4_s30 ? (144u + sizeof(_g4_t_v78)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v79)) > _g4_s31 ? (148u + sizeof(_g4_t_v79)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v80)) > _g4_s32 ? (152u + sizeof(_g4_t_v80)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v81)) > _g4_s33 ? (156u + sizeof(_g4_t_v81)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v82)) > _g4_s34 ? (160u + sizeof(_g4_t_v82)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v83)) > _g4_s35 ? (164u + sizeof(_g4_t_v83)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v84)) > _g4_s36 ? (168u + sizeof(_g4_t_v84)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v85)) > _g4_s37 ? (172u + sizeof(_g4_t_v85)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v86)) > _g4_s38 ? (176u + sizeof(_g4_t_v86)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v87)) > _g4_s39 ? (180u + sizeof(_g4_t_v87)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v88)) > _g4_s40 ? (184u + sizeof(_g4_t_v88)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v89)) > _g4_s41 ? (188u + sizeof(_g4_t_v89)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v90)) > _g4_s42 ? (192u + sizeof(_g4_t_v90)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v91)) > _g4_s43 ? (196u + sizeof(_g4_t_v91)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v92)) > _g4_s44 ? (200u + sizeof(_g4_t_v92)) : _g4_s44,
    _g4_s46 = (204u + sizeof(_g4_t_v93)) > _g4_s45 ? (204u + sizeof(_g4_t_v93)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v94)) > _g4_s46 ? (208u + sizeof(_g4_t_v94)) : _g4_s46,
    _g4_s48 = (212u + sizeof(_g4_t_v95)) > _g4_s47 ? (212u + sizeof(_g4_t_v95)) : _g4_s47,
    _g4_s49 = (216u + sizeof(_g4_t_v96)) > _g4_s48 ? (216u + sizeof(_g4_t_v96)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v97)) > _g4_s49 ? (220u + sizeof(_g4_t_v97)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 100u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 108u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 108u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 120u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 124u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 140u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 144u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 148u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 152u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 156u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 168u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 172u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 176u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 180u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 184u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 188u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 192u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 196u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 200u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 204u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 208u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 212u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 216u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 220u);

  v97 = &self;
  v64 = self;
  v58 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v50 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpMidphaseViewer");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v6 = v64;
  v67 = *((uint32_t *)v64 + 12);
  v7 = v67 - 1;
  v8 = (void (***)(uint32_t))(*((uint32_t *)v64 + 11) + ((v67 - 1) << 7));
  if ( v67 - 1 >= 0 )
  {
    do
    {
      v9 = *v8;
      --v7;
      v48 = v8;
      v8 -= 32;
      (*v9)((uint32_t)(uintptr_t)(v48));
    }
    while ( v7 != -1 );
    v6 = v64;
  }
  *((uint32_t *)v6 + 12) = 0;
  v54 = (uint32_t *)((char *)v58 + 40);
  v52 = 2;
  v10 = 0;
  v11 = (char *)v58 + 40;
  while ( 1 )
  {
    v12 = *((uint32_t *)v11 + 1);
    if ( v12 > 0 )
    {
      for ( i = 0; i < v12; ++i )
      {
        v55 = *(uint32_t *)(*v54 + 4 * i);
        v13 = *(uint32_t *)(v55 + 80);
        if ( v13 > 0 )
        {
          v56 = 0;
          v14 = v10;
          do
          {
            v15 = *(uint32_t *)(*(uint32_t *)(v55 + 76) + 4 * v56);
            v60 = v15;
            v16 = *(uint32_t *)(v15 + 84);
            if ( v16 != 0 && *(uint16_t *)(v15 + 80) != 0 )
            {
              v65 = v14;
              v63 = 0;
              v57 = (int *)((char *)v64 + 44);
              v62 = 1065353216;
              v59 = (hkVector4f::Self *)&v91;
              while ( 1 )
              {
                v17 = *(uint8_t *)(v16 + 15);
                v68 = *((uint32_t *)v58 + 28);
                v18 = *(uint32_t *)(v16 + 4) - (*(uint8_t *)(v16 + 13) << v17);
                v19 = *(uint32_t *)(v16 + 8) - (*(uint8_t *)(v16 + 14) << v17);
                v79 = *(uint32_t *)v16 - (*(uint8_t *)(v16 + 12) << v17);
                v80 = v18;
                v81 = v19;
                v20 = *(uint32_t *)(v16 + 20) + (*(uint8_t *)(v16 + 29) << v17);
                v21 = *(uint32_t *)(v16 + 24) + (*(uint8_t *)(v16 + 30) << v17);
                v83 = *(uint32_t *)(v16 + 16) + (*(uint8_t *)(v16 + 28) << v17);
                v71 = v79;
                v84 = v20;
                v85 = v21;
                LOWORD(v76) = v20;
                v75 = v83;
                v72 = v80;
                v73 = v19;
                LOWORD(v77) = v21;
                HIBYTE(v76) = HIBYTE(v20);
g4_m128_raw(v22) = *(unsigned int *)(v68 + 64);
                BYTE2(v77) = BYTE2(v21);
                BYTE2(v76) = BYTE2(v20);
                HIBYTE(v77) = HIBYTE(v21);
                v23 = _mm_cvtsi128_si32(v22);
                v24 = (2130706432 - v23) & ((v23 ^ (v23 + 2139095040)) >> 31);
                v25 = (float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v22)
                                    * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)&v24))
                                            * *(float *)&v24)))
                    * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)&v24)) * *(float *)&v24);
                v66 = v25 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v25));
g4_m128_raw(v26) = *(unsigned int *)(v68 + 68);
                v27 = _mm_cvtsi128_si32(v26);
                v28 = v68;
g4_m128_lane<int32_t>(v22, 0) = (2130706432 - v27) & ((v27 ^ (v27 + 2139095040)) >> 31);
                v29 = (float)(2.0 - (float)(*(float *)(v68 + 68) * *(float *)g4_m128_ptr<int32_t>(v22))) * *(float *)g4_m128_ptr<int32_t>(v22);
                *(float *)g4_m128_ptr<int32_t>(v22) = (float)(2.0 - (float)(*(float *)(v68 + 68) * v29)) * v29;
g4_m128_raw(v30) = *(unsigned int *)(v68 + 72);
                v31 = _mm_cvtsi128_si32(v30);
                *(float *)g4_m128_ptr<int32_t>(v26) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v22)))
                                        * *(float *)g4_m128_ptr<int32_t>(v22);
g4_m128_lane<int32_t>(v22, 0) = (2130706432 - v31) & ((v31 ^ (v31 + 2139095040)) >> 31);
                v32 = (float)(2.0 - (float)(*(float *)(v68 + 72) * *(float *)g4_m128_ptr<int32_t>(v22))) * *(float *)g4_m128_ptr<int32_t>(v22);
                *(float *)g4_m128_ptr<int32_t>(v30) = (float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v30)
                                                        * (float)((float)(2.0 - (float)(*(float *)(v68 + 72) * v32))
                                                                * v32)))
                                        * (float)((float)(2.0 - (float)(*(float *)(v68 + 72) * v32)) * v32);
                v33 = (float)v19 * *(float *)g4_m128_ptr<int32_t>(v30);
                v61 = *(float *)g4_m128_ptr<int32_t>(v30) * (float)v77;
                v34 = v65;
                v69 = *(float *)(v68 + 32);
                v35 = *((uint32_t *)v64 + 13) & 0x3FFFFFFF;
                v87 = (float)((float)v79 * v66) - v69;
g4_m128_lane<int32_t>(v30, 0) = *(uint32_t *)(v28 + 36);
                v88 = (float)((float)v80 * *(float *)g4_m128_ptr<int32_t>(v26)) - *(float *)g4_m128_ptr<int32_t>(v30);
                v36 = *(float *)(v28 + 40);
                v89 = v33 - v36;
                v37 = *(float *)(v28 + 44);
                v91 = (float)((float)v83 * v66) - v69;
                v92 = (float)((float)v76 * *(float *)g4_m128_ptr<int32_t>(v26)) - *(float *)g4_m128_ptr<int32_t>(v30);
                v93 = v61 - v36;
                v90 = (float)((float)v74 * 1.0) - v37;
                v94 = (float)((float)v78 * 1.0) - v37;
                if ( v65 + 1 > v35 )
                {
                  v38 = 2 * v35;
                  if ( v65 + 1 >= v38 )
                    v38 = v65 + 1;
                  hkArrayUtil::reserve(
                    (hkArrayUtil::Self *)&v70,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                    v57,
                    v38,
                    128);
                  v34 = *((uint32_t *)v64 + 12);
                }
                v16 += 32;
                v67 = 0x40000000;
                hkDisplayAABB::Construct((hkDisplayAABB::Self *)(*((uint32_t *)v64 + 11) + (v34 << 7)));
                ++*((uint32_t *)v64 + 12);
                hkDisplayAABB::setExtents(
                  (hkDisplayAABB::Self *)(*((uint32_t *)v64 + 11) + (v65 << 7)),
                  (const hkVector4f::Self *)&v87,
                  (const hkVector4f::Self *)&v91);
                if ( *(uint16_t *)(v60 + 80) <= ++v63 )
                  break;
                v65 = *((uint32_t *)v64 + 12);
              }
              v13 = *(uint32_t *)(v55 + 80);
              v14 = *((uint32_t *)v64 + 12);
            }
            ++v56;
          }
          while ( v56 < v13 );
          v10 = v14;
          v12 = v54[1];
        }
      }
    }
    if ( --v52 == 0 )
      break;
    v11 = (char *)v58 + 52;
    v54 = (uint32_t *)((char *)v58 + 52);
  }
  v39 = 0;
  v87 = 0.0;
  v88 = 0.0;
  v89 = -0.0;
  if ( v10 != 0
    && (v79 = 4 * v10,
        v39 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                &v79),
        v41 = v79 / 4,
        v79 / 4 != 0) )
  {
    v40 = v41 & 0x3FFFFFFF;
  }
  else
  {
    v40 = 0;
    v41 = 0x80000000;
  }
  v87 = *(float *)&v39;
  v88 = *(float *)&v10;
  v89 = *(float *)&v41;
  if ( v40 < v10 )
  {
    v42 = 2 * v40;
    if ( v42 < v10 )
      v42 = v10;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v70,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v87,
      v42,
      4);
  }
  v43 = 0;
  v88 = *(float *)&v10;
  if ( v10 > 0 )
  {
    do
    {
      *(uint32_t *)(LODWORD(v87) + 4 * v43) = *((uint32_t *)v64 + 11) + (v43 << 7);
      ++v43;
    }
    while ( v43 != v10 );
  }
  (*(void (**)(int *, uint32_t, float *, int, uint32_t, uint32_t, int, int, int *, uint32_t, int, uint32_t *, int, int, int *, int *, hkpWorld::Self *, float *, hkVector4f::Self *, int, float, int, int, hkpMidphaseViewer::Self *, int, float, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float, int, int, hkpMidphaseViewer::Self **))(**((uint32_t **)v64 + 6) + 116))(
    &v70,
    *((uint32_t *)v64 + 6),
    &v87,
    -23296,
    0,
    hkpMidphaseViewer::m_tag,
    v49,
    (int)(uintptr_t)(v58) + 52,
    v50,
    0,
    i,
    v54,
    v55,
    v56,
    &v70,
    v57,
    v58,
    &v87,
    v59,
    v60,
    COERCE_FLOAT(LODWORD(v61)),
    v62,
    v63,
    v64,
    v65,
    COERCE_FLOAT(LODWORD(v66)),
    v67,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    COERCE_FLOAT(LODWORD(v87)),
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v89)),
    COERCE_FLOAT(LODWORD(v90)),
    COERCE_FLOAT(LODWORD(v91)),
    COERCE_FLOAT(LODWORD(v92)),
    COERCE_FLOAT(LODWORD(v93)),
    COERCE_FLOAT(LODWORD(v94)),
    v95,
    v96,
    v97);
  LODWORD(v44) = (uint32_t)(uintptr_t)(v51);
  v45 = *v51;
  v46 = *(uint32_t **)(*v51 + 4);
  if ( (unsigned int)(uintptr_t)(v46) < *(uint32_t *)(*v51 + 12) )
  {
    *v46 = (uint32_t)(uintptr_t)("Et");
    v44 = __rdtsc();
    v46[1] = v44;
    *(uint32_t *)(v45 + 4) = (uint32_t)(uintptr_t)(v46 + 3);
  }
  v88 = 0.0;
  if ( !__builtin_signbit(v89) )
    LODWORD(v44) = (*(int (**)(uint32_t *, float, int))(hkContainerHeapAllocator::s_alloc + 20))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     COERCE_FLOAT(LODWORD(v87)),
                     4 * LODWORD(v89));
  return v44;
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::registerViewer  (binary VA: 0x18419b0)
// Original: hkpMidphaseViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpMidphaseViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Midphase",
             hkpMidphaseViewer::create);
  hkpMidphaseViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::Construct  (binary VA: 0x1841a00)
// Original: hkpMidphaseViewer::hkpMidphaseViewer
// ----------------------------------------------------------------------------
int hkpMidphaseViewer::Construct(uint32_t *a1, int a2)
{
  int result;
  int v3;
  hkpWorld::Self *v4;

  hkpWorldViewerBase::Construct(a1, a2);
  a1[11] = 0;
  a1[12] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3668);
  a1[13] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A36A0);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A36E4);
  result = a1[9];
  a1[8] = ((uint32_t)(uintptr_t)&off_20A36CC);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v3++);
      hkpWorld::addWorldPostSimulationListener(v4, (hkpWorldPostSimulationListener::Self *)(a1 + 10));
      result = a1[9];
    }
    while ( v3 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMidphaseViewer::create  (binary VA: 0x1841aa0)
// Original: hkpMidphaseViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpMidphaseViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpMidphaseViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


