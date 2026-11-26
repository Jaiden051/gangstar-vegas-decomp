#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpContact.h"

// ----------------------------------------------------------------------------
// Function: hkpContactMgr::cleanup  (binary VA: 0x16e97f0)
// Original: hkpContactMgr::cleanup
// ----------------------------------------------------------------------------
void hkpContactMgr::cleanup()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpContactMgr::Destroy  (binary VA: 0x16e9820)
// Original: hkpContactMgr::~hkpContactMgr
// ----------------------------------------------------------------------------
void hkpContactMgr::Destroy(hkpContactMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpContactMgr::Destroy_ea16ea5a0  (binary VA: 0x16ea5a0)
// Original: hkpContactMgr::~hkpContactMgr
// ----------------------------------------------------------------------------
void hkpContactMgr::Destroy_ea16ea5a0(hkpContactMgr::Self *self)
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
// Function: hkpContactMgrFactory::Destroy  (binary VA: 0x1733230)
// Original: hkpContactMgrFactory::~hkpContactMgrFactory
// ----------------------------------------------------------------------------
void hkpContactMgrFactory::Destroy(hkpContactMgrFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpContactMgrFactory::Destroy_ea17334c0  (binary VA: 0x17334c0)
// Original: hkpContactMgrFactory::~hkpContactMgrFactory
// ----------------------------------------------------------------------------
void hkpContactMgrFactory::Destroy_ea17334c0(hkpContactMgrFactory::Self *self)
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
// Function: hkpContactPointViewer::init  (binary VA: 0x18537b0)
// Original: hkpContactPointViewer::init
// ----------------------------------------------------------------------------
int hkpContactPointViewer::init(hkpContactPointViewer::Self *self)
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
// Function: hkpContactPointViewer::worldAddedCallback  (binary VA: 0x1853810)
// Original: hkpContactPointViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpContactPointViewer::worldAddedCallback(hkpContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpContactPointViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpContactPointViewer::worldRemovedCallback  (binary VA: 0x1853850)
// Original: hkpContactPointViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpContactPointViewer::worldRemovedCallback(hkpContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpContactPointViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpContactPointViewer::Destroy  (binary VA: 0x1853890)
// Original: hkpContactPointViewer::~hkpContactPointViewer
// ----------------------------------------------------------------------------
void hkpContactPointViewer::Destroy(hkpContactPointViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4308);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A4344);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A4370);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A4388);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpContactPointViewer::worldRemovedCallback(self, v3);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v1 != 0 && v2 < *(uint32_t *)(v1 + 112) );
  }
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpContactPointViewer::Destroy_ea1853950  (binary VA: 0x1853950)
// Original: hkpContactPointViewer::~hkpContactPointViewer
// ----------------------------------------------------------------------------
void hkpContactPointViewer::Destroy_ea1853950(hkpContactPointViewer::Self *self)
{
  int v1;
  int v2;

  hkpContactPointViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpContactPointViewer::Construct  (binary VA: 0x18539e0)
// Original: hkpContactPointViewer::hkpContactPointViewer
// ----------------------------------------------------------------------------
int hkpContactPointViewer::Construct(uint32_t *a1, uint32_t *a2, int a3)
{
  hkpWorldViewerBase::Construct((int)(uintptr_t)(a1), a2);
  a1[11] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A4308);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A4344);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A4388);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A4370);
  a1[12] = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpContactPointViewer::drawAllContactPointsInIsland  (binary VA: 0x1853a40)
// Original: hkpContactPointViewer::drawAllContactPointsInIsland
// ----------------------------------------------------------------------------
int hkpContactPointViewer::drawAllContactPointsInIsland(hkpContactPointViewer::Self *self, const hkpSimulationIsland::Self *a2)
{
  const hkpSimulationIsland::Self *v2;
  uint32_t *v3;
  uint64_t v4; // rax
  uint64_t v5; // rax
  int v6;
  int v7;
  int **v8;
  int *v9;
  uint16_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  __m128i v15;
  float v16; // xmm6_4
  __m128 v17;
  __m128i v18;
  __m128 v19;
  __m128 v20;
  float v21; // xmm7_4
  float v22; // xmm2_4
  int v23;
  int v24;
  __m128 v25;
  int32_t v26; // xmm7_4
  float v27; // xmm5_4
  __m128i v28;
  float v29; // xmm3_4
  int v30;
  int v31;
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm5_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  int v39;
  int v40;
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  uint64_t v49; // rax
  int v50;
  signed int v51;
  int *v52;
  uint32_t *v53;
  typedef int _g4_t_v55;
  typedef int _g4_t_i;
  typedef uint16_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int **_g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int *_g4_t_address;
  typedef unsigned int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef unsigned int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef hkpContactPointViewer::Self *_g4_t_v74;
  typedef char _g4_t_v75[4];
  typedef uint32_t _g4_t_v76[4];
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
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
  typedef uint16_t *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef void *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef hkpContactPointViewer::Self **_g4_t_v98;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_i)) > _g4_s1 ? (8u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v57)) > _g4_s2 ? (12u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v58)) > _g4_s3 ? (16u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v59)) > _g4_s4 ? (28u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v60)) > _g4_s5 ? (32u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v61)) > _g4_s6 ? (36u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v62)) > _g4_s7 ? (40u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v63)) > _g4_s8 ? (44u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_address)) > _g4_s9 ? (48u + sizeof(_g4_t_address)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v65)) > _g4_s10 ? (52u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v66)) > _g4_s11 ? (56u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v67)) > _g4_s12 ? (56u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v68)) > _g4_s13 ? (60u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v69)) > _g4_s14 ? (60u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v70)) > _g4_s15 ? (76u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v71)) > _g4_s16 ? (80u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v72)) > _g4_s17 ? (84u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v73)) > _g4_s18 ? (88u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v74)) > _g4_s19 ? (92u + sizeof(_g4_t_v74)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v75)) > _g4_s20 ? (96u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v76)) > _g4_s21 ? (100u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v77)) > _g4_s22 ? (116u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v78)) > _g4_s23 ? (120u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v79)) > _g4_s24 ? (124u + sizeof(_g4_t_v79)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v80)) > _g4_s25 ? (128u + sizeof(_g4_t_v80)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v81)) > _g4_s26 ? (132u + sizeof(_g4_t_v81)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v82)) > _g4_s27 ? (136u + sizeof(_g4_t_v82)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v83)) > _g4_s28 ? (140u + sizeof(_g4_t_v83)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v84)) > _g4_s29 ? (144u + sizeof(_g4_t_v84)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v85)) > _g4_s30 ? (148u + sizeof(_g4_t_v85)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v86)) > _g4_s31 ? (152u + sizeof(_g4_t_v86)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v87)) > _g4_s32 ? (156u + sizeof(_g4_t_v87)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v88)) > _g4_s33 ? (160u + sizeof(_g4_t_v88)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v89)) > _g4_s34 ? (164u + sizeof(_g4_t_v89)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v90)) > _g4_s35 ? (168u + sizeof(_g4_t_v90)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v91)) > _g4_s36 ? (172u + sizeof(_g4_t_v91)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v92)) > _g4_s37 ? (176u + sizeof(_g4_t_v92)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v93)) > _g4_s38 ? (180u + sizeof(_g4_t_v93)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v94)) > _g4_s39 ? (184u + sizeof(_g4_t_v94)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v95)) > _g4_s40 ? (188u + sizeof(_g4_t_v95)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v96)) > _g4_s41 ? (192u + sizeof(_g4_t_v96)) : _g4_s41,
    _g4_s43 = (196u + sizeof(_g4_t_v97)) > _g4_s42 ? (196u + sizeof(_g4_t_v97)) : _g4_s42,
    _g4_s44 = (220u + sizeof(_g4_t_v98)) > _g4_s43 ? (220u + sizeof(_g4_t_v98)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 84u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 92u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 96u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 100u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 116u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 120u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 124u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 132u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 136u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 140u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 144u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 148u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 152u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 156u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 160u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 164u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 168u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 172u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 176u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 180u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 184u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 188u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 192u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 196u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 220u);

  v98 = &self;
  v74 = self;
  v2 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v55 = *address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TthkpContactPointViewer::drawAllContactPointsInIsland");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v55 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  v76[0] = (uint32_t)(uintptr_t)((char *)v2 + 112);
  v76[1] = (uint32_t)(uintptr_t)((char *)v2 + 92);
  for ( i = 0; i != 2; ++i )
  {
    v58 = 0;
    v57 = (uint16_t *)v76[i];
    LODWORD(v5) = *((uint32_t *)v57 + 2);
    while ( v58 < (int)v5 )
    {
      v6 = v58++;
      v72 = *(uint32_t *)(*((uint32_t *)v57 + 1) + 4 * v6);
      v65 = v72 + 512;
      if ( v58 == (uint32_t)v5 )
        v65 = v72 + *v57;
      if ( v65 <= v72 )
        continue;
      do
      {
        v7 = *(uint32_t *)(v72 + 8);
        if ( G4_VCALL<int>(v7, 60) == 0 )
        {
          v93 = nullptr;
          v94 = 0;
          v95 = 0x80000000;
          v97 = 256;
          v8 = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          v9 = *v8;
          v59 = v8;
          v10 = (uint16_t *)(*v8)[3];
          if ( v9[2] > 511 && (unsigned int)(uintptr_t)(v10 + 256) <= v9[4] )
            v9[3] = (int)(uintptr_t)(v10 + 256);
          else
            v10 = (uint16_t *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v9, 512);
          v93 = v10;
          v95 = -2147483392;
          v96 = v10;
          G4_VCALL<void>(v7, 56, &v93);
          if ( v94 > 0 )
          {
            v11 = v7;
            v12 = 0;
            while ( 1 )
            {
              v73 = G4_VCALL<int>(v11, 52, v93[v12]);
              if ( *((float *)v74 + 11) > *(float *)(*(int (**)(int, uint32_t))(*(uint32_t *)v11 + 48))(
                                                      v11,
                                                      v93[v12]) )
                goto LABEL_17;
              (*(void (**)(int))(*((uint32_t *)v74 + 2) + 8))((int)(uintptr_t)(v74) + 8);
              v71 = *((uint32_t *)v74 + 6);
              v70 = *address;
              v13 = *(uint32_t **)(*address + 4);
              v68 = v13;
              if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*address + 12) )
              {
                *v13 = (uint32_t)(uintptr_t)("TthkContactPointViewer_displayArrow");
                v14 = __rdtsc();
                v13[1] = v14;
                v13 += 3;
                *(uint32_t *)(v70 + 4) = (uint32_t)(uintptr_t)(v68 + 3);
              }
g4_m128_raw(v15) = *(unsigned int *)(v73 + 16);
              v16 = *(float *)(v73 + 20);
              v18 = v15;
g4_m128_raw(v17) = *(unsigned int *)(v73 + 24);
              *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15))
                                              + (float)(v16 * v16))
                                      + (float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0));
              if ( *(float *)g4_m128_ptr<int32_t>(v18) < 0.00000011920929f )
              {
                if ( *(uint32_t *)(v70 + 12) > (unsigned int)(uintptr_t)(v13) )
                {
                  *v13 = (uint32_t)(uintptr_t)("Et");
                  goto LABEL_32;
                }
LABEL_17:
                if ( v94 <= ++v12 )
                  break;
              }
              else
              {
                v77 = *(float *)v73 + *(float *)g4_m128_ptr<int32_t>(v15);
                v63 = v77;
                v78 = *(float *)(v73 + 4) + v16;
                v62 = v78;
                v79 = *(float *)(v73 + 8) +g4_m128_lane<float>(v17, 0);
                v61 = v79;
                v19 = _mm_and_ps(v17, *(__m128 *)&dword_1C7C1C0);
g4_m128_lane<int32_t>(v20, 0) = fabs(v16);
                v60 = *(float *)(v73 + 12) + *(float *)(v73 + 28);
                v80 = v60;
                v21 = fabs(*(float *)g4_m128_ptr<int32_t>(v15));
                if ( v21 >g4_m128_lane<float>(v20, 0) )
                {
                  v22 = v16;
                  v23 = 0;
                  v16 = *(float *)g4_m128_ptr<int32_t>(v15);
                  v24 = 1;
                }
                else
                {
                  v22 = *(float *)g4_m128_ptr<int32_t>(v15);
g4_m128_lane<float>(v20, 0) = v21;
                  v23 = 1;
                  v24 = 0;
                }
                v25 = _mm_cmplt_ss(v19, v20);
                v26 = LODWORD(v22) &g4_m128_lane<int32_t>(v25, 0);
                v27 =g4_m128_lane<float>(_mm_andnot_ps(v25, v17), 0);
                if (g4_m128_lane<float>(v20, 0) <=g4_m128_lane<float>(v19, 0) )
                  v24 = 2;
                v81 = 0.0;
                v82 = 0.0;
                v83 = 0.0;
                v84 = 0.0;
                *((uint32_t *)&v81 + v23) = LODWORD(v27) | v26;
                *(&v81 + v24) = -v16;
g4_m128_raw(v28) = LODWORD(v81);
                *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)g4_m128_ptr<int32_t>(v28))
                                                + (float)(v82 * v82))
                                        + (float)(v83 * v83);
                if ( *(float *)g4_m128_ptr<int32_t>(v28) <= 0.0 )
                {
                  v33 = 0.0;
                }
                else
                {
                  v29 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v28);
                  v30 = _mm_cvtsi128_si32(v28) >> 1;
                  v31 = (_mm_cvtsi128_si32(v28) + 2139095040) >> 31;
                  v32 = (float)(1.5 * COERCE_FLOAT(v31 & (1597463174 - v30)))
                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * COERCE_FLOAT(v31 & (1597463174 - v30)))
                              * (float)(COERCE_FLOAT(v31 & (1597463174 - v30)) * COERCE_FLOAT(v31 & (1597463174 - v30))));
                  v33 = (float)(1.5 * (float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32))))
                      - (float)((float)(v29
                                      * (float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32))))
                              * (float)((float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32)))
                                      * (float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32)))));
                }
                v34 = v81 * v33;
                v35 = v82 * v33;
                v36 = v83 * v33;
                v66 = v33 * v84;
                v37 = 0.0;
                if ( *(float *)g4_m128_ptr<int32_t>(v18) > 0.0 )
                {
                  v38 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
                  v39 = _mm_cvtsi128_si32(v18) >> 1;
                  v40 = (_mm_cvtsi128_si32(v18) + 2139095040) >> 31;
                  v41 = (float)(1.5 * COERCE_FLOAT(v40 & (1597463174 - v39)))
                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * COERCE_FLOAT(v40 & (1597463174 - v39)))
                              * (float)(COERCE_FLOAT(v40 & (1597463174 - v39)) * COERCE_FLOAT(v40 & (1597463174 - v39))));
                  v37 = (float)((float)(1.5
                                      * (float)((float)(1.5 * v41) - (float)((float)(v38 * v41) * (float)(v41 * v41))))
                              - (float)((float)(v38
                                              * (float)((float)(1.5 * v41)
                                                      - (float)((float)(v38 * v41) * (float)(v41 * v41))))
                                      * (float)((float)((float)(1.5 * v41)
                                                      - (float)((float)(v38 * v41) * (float)(v41 * v41)))
                                              * (float)((float)(1.5 * v41)
                                                      - (float)((float)(v38 * v41) * (float)(v41 * v41))))))
                      * *(float *)g4_m128_ptr<int32_t>(v18);
                }
                v42 = v34 * v37;
                v43 = v35 * v37;
                v69 = v36 * v37;
                v67 = v37 * v66;
                v44 = (float)((float)(v63 - *(float *)v73) * 0.85f) + *(float *)v73;
                v45 = (float)((float)(v62 - *(float *)(v73 + 4)) * 0.85f) + *(float *)(v73 + 4);
                v46 = (float)((float)(v61 - *(float *)(v73 + 8)) * 0.85f) + *(float *)(v73 + 8);
                v47 = (float)((float)(v60 - *(float *)(v73 + 12)) * 0.85f) + *(float *)(v73 + 12);
                v85 = v44 + (float)(v42 * (float)(1.0 - 0.85f));
                v86 = (float)(v43 * (float)(1.0 - 0.85f)) + v45;
                v87 = (float)((float)(v36 * v37) * (float)(1.0 - 0.85f)) + v46;
                v48 = -(float)(1.0 - 0.85f);
                v88 = (float)(v67 * (float)(1.0 - 0.85f)) + v47;
                v89 = (float)(v42 * v48) + v44;
                v90 = (float)(v43 * v48) + v45;
                v91 = (float)(v69 * v48) + v46;
                v92 = (float)(v48 * v67) + v47;
                (*(void (**)(char *))(*(uint32_t *)v71 + 72))(v75);
                (*(void (**)(char *))(*(uint32_t *)v71 + 72))(v75);
                (*(void (**)(char *))(*(uint32_t *)v71 + 72))(v75);
                v13 = *(uint32_t **)(v70 + 4);
                if ( (unsigned int)(uintptr_t)(v13) >= *(uint32_t *)(v70 + 12) )
                  goto LABEL_17;
                *v13 = (uint32_t)(uintptr_t)("Et");
LABEL_32:
                v49 = __rdtsc();
                v13[1] = v49;
                ++v12;
                *(uint32_t *)(v70 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
                if ( v94 <= v12 )
                  break;
              }
            }
          }
          v50 = 0;
          if ( v93 != v96 )
            v50 = v94;
          v94 = v50;
          v51 = (v97 + v97 + 127) & 0xFFFFFF80;
          v52 = *v59;
          if ( v51 > (*v59)[2] || (void *)v52[3] != (char *)v96 + v51 || v96 == (void *)v52[5] )
            hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v52, (char *)v96, (v97 + v97 + 127) & 0xFFFFFF80);
          else
            v52[3] = (int)(uintptr_t)(v96);
          v94 = 0;
          if ( v95 >= 0 )
            (*(void (**)(uint32_t *, uint16_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v93,
              2 * (v95 & 0x3FFFFFFF));
        }
        v72 += *(uint8_t *)(v72 + 3);
      }
      while ( v65 > v72 );
      LODWORD(v5) = *((uint32_t *)v57 + 2);
    }
  }
  v53 = *(uint32_t **)(v55 + 4);
  if ( (unsigned int)(uintptr_t)(v53) < *(uint32_t *)(v55 + 12) )
  {
    *v53 = (uint32_t)(uintptr_t)("Et");
    v5 = __rdtsc();
    v53[1] = v5;
    *(uint32_t *)(v55 + 4) = (uint32_t)(uintptr_t)(v53 + 3);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpContactPointViewer::postSimulationCallback  (binary VA: 0x1854360)
// Original: hkpContactPointViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpContactPointViewer::postSimulationCallback(hkpContactPointViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  uint32_t *v3;
  uint64_t v4; // rax
  uint32_t *v5;
  int i;
  int result;
  uint32_t *v8;
  uint64_t v9; // rax
  hkpSimulationIsland::Self *v10;
  int v11;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v11 = *address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TthkpActiveContactPointViewer::postSimulationCallback");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  v5 = (uint32_t *)G4_VCALL<int>(self, 48, a2);
  for ( i = 0; v5[1] > i; ++i )
  {
    v10 = *(hkpSimulationIsland::Self **)(*v5 + 4 * i);
    hkpContactPointViewer::drawAllContactPointsInIsland(self, v10);
  }
  result = v11;
  v8 = *(uint32_t **)(v11 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v11 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
    return v11;
  }
  return result;
}


