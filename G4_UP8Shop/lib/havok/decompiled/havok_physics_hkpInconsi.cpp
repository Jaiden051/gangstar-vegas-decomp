#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpInconsi.h"

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::getProcessTag  (binary VA: 0x18392d0)
// Original: hkpInconsistentWindingViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpInconsistentWindingViewer::getProcessTag()
{
  return hkpInconsistentWindingViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::init  (binary VA: 0x1839300)
// Original: hkpInconsistentWindingViewer::init
// ----------------------------------------------------------------------------
int hkpInconsistentWindingViewer::init(hkpInconsistentWindingViewer::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorldPostSimulationListener::Self *v8;
  hkpWorldPostSimulationListener::Self *v9;
  int i;
  hkpWorld::Self *v11;
  int v12;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v12 = 0;
    v2 = 0;
    do
    {
      v11 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v2);
      hkpWorld::addWorldPostSimulationListener(v11, (hkpInconsistentWindingViewer::Self *)((char *)self + 40));
      hkpWorld::addEntityListener(v11, (int)(uintptr_t)(self) + 44);
      v3 = *((uint32_t *)v11 + 14);
      for ( i = 0; i < v3; ++i )
      {
        v4 = *(uint32_t *)(*((uint32_t *)v11 + 13) + 4 * i);
        if ( *(int *)(v4 + 80) > 0 )
        {
          v5 = 0;
          do
          {
            v8 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v4 + 76) + 4 * v5++);
            G4_VCALL<void>(self, 52, v8);
          }
          while ( *(uint32_t *)(v4 + 80) > v5 );
          v3 = *((uint32_t *)v11 + 14);
        }
      }
      v6 = *((uint32_t *)v11 + 8);
      if ( v6 != 0 && *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v9 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 52, v9);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
      }
      result = *((uint32_t *)self + 9);
      v2 = ++v12;
    }
    while ( v12 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::worldAddedCallback  (binary VA: 0x1839450)
// Original: hkpInconsistentWindingViewer::worldAddedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpInconsistentWindingViewer::worldAddedCallback(hkpInconsistentWindingViewer::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorldPostSimulationListener::Self *v8;
  hkpWorldPostSimulationListener::Self *v9;
  int v10;

  hkpWorld::addWorldPostSimulationListener(a2, (hkpInconsistentWindingViewer::Self *)((char *)self + 40));
  hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 44);
  result = a2;
  v10 = 0;
  v3 = *((uint32_t *)a2 + 14);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v10);
      if ( *(int *)(v4 + 80) > 0 )
      {
        v5 = 0;
        do
        {
          v8 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v4 + 76) + 4 * v5++);
          G4_VCALL<void>(self, 52, v8);
        }
        while ( *(uint32_t *)(v4 + 80) > v5 );
        v3 = *((uint32_t *)a2 + 14);
      }
      ++v10;
    }
    while ( v10 < v3 );
    result = a2;
  }
  v6 = *((uint32_t *)result + 8);
  if ( v6 != 0 )
  {
    result = *(hkpWorld::Self **)(v6 + 80);
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v7 = 0;
      do
      {
        v9 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
        result = (hkpWorld::Self *)G4_VCALL<int>(self, 52, v9);
      }
      while ( *(uint32_t *)(v6 + 80) > v7 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::worldRemovedCallback  (binary VA: 0x1839560)
// Original: hkpInconsistentWindingViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
uint32_t * hkpInconsistentWindingViewer::worldRemovedCallback(hkpInconsistentWindingViewer::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::removeWorldPostSimulationListener(a2, (hkpInconsistentWindingViewer::Self *)((char *)self + 40));
  return hkpWorld::removeEntityListener(a2, (int)(uintptr_t)(self) + 44);
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::Destroy  (binary VA: 0x18395c0)
// Original: hkpInconsistentWindingViewer::~hkpInconsistentWindingViewer
// ----------------------------------------------------------------------------
void hkpInconsistentWindingViewer::Destroy(hkpInconsistentWindingViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3088);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A30C8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A30F4);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A310C);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A3124);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpInconsistentWindingViewer::Self *)((char *)self + 40));
      ++v2;
      hkpWorld::removeEntityListener(v3, (int)(uintptr_t)(self) + 44);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::Destroy_ea18396c0  (binary VA: 0x18396c0)
// Original: hkpInconsistentWindingViewer::~hkpInconsistentWindingViewer
// ----------------------------------------------------------------------------
void hkpInconsistentWindingViewer::Destroy_ea18396c0(hkpInconsistentWindingViewer::Self *self)
{
  int v1;
  int v2;

  hkpInconsistentWindingViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::entityAddedCallback  (binary VA: 0x1839760)
// Original: hkpInconsistentWindingViewer::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpInconsistentWindingViewer::entityAddedCallback(hkpInconsistentWindingViewer::Self *self, hkpEntity::Self *a2)
{
  hkpEntity::Self *v2;
  int result;
  hkGeometry::Self *v4;
  int v5;
  int v6;
  int v7;
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  int v25;
  int v26;
  float *v27;
  int v28;
  float *v29;
  int v30;
  float *v31;
  int v32;
  uint32_t *v33;
  hkDisplayConvex::Self *v34;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef int _g4_t_address;
  typedef float *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef hkMemoryAllocator::Self *_g4_t_v57;
  typedef float _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef hkGeometry::Self *_g4_t_v69;
  typedef hkpInconsistentWindingViewer::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint8_t _g4_t_v73[4];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t _g4_t_v77[134];
  enum : size_t {
    _g4_s0 = 768u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v36)) > _g4_s1 ? (32u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v37)) > _g4_s2 ? (36u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v38)) > _g4_s3 ? (40u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v39)) > _g4_s4 ? (44u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_address)) > _g4_s5 ? (48u + sizeof(_g4_t_address)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v41)) > _g4_s6 ? (52u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v42)) > _g4_s7 ? (56u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v43)) > _g4_s8 ? (56u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v44)) > _g4_s9 ? (60u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v45)) > _g4_s10 ? (64u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v46)) > _g4_s11 ? (68u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v47)) > _g4_s12 ? (72u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v48)) > _g4_s13 ? (76u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v49)) > _g4_s14 ? (80u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v50)) > _g4_s15 ? (84u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v51)) > _g4_s16 ? (88u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v52)) > _g4_s17 ? (92u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v53)) > _g4_s18 ? (96u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v54)) > _g4_s19 ? (100u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v55)) > _g4_s20 ? (104u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v56)) > _g4_s21 ? (108u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v57)) > _g4_s22 ? (108u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v58)) > _g4_s23 ? (112u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v59)) > _g4_s24 ? (112u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v60)) > _g4_s25 ? (112u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v61)) > _g4_s26 ? (112u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v62)) > _g4_s27 ? (116u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v63)) > _g4_s28 ? (116u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v64)) > _g4_s29 ? (120u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v65)) > _g4_s30 ? (120u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v66)) > _g4_s31 ? (124u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v67)) > _g4_s32 ? (124u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v68)) > _g4_s33 ? (124u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v69)) > _g4_s34 ? (128u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v70)) > _g4_s35 ? (132u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (136u + sizeof(_g4_t_v71)) > _g4_s36 ? (136u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v72)) > _g4_s37 ? (144u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v73)) > _g4_s38 ? (148u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v74)) > _g4_s39 ? (152u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v75)) > _g4_s40 ? (156u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v76)) > _g4_s41 ? (160u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v77)) > _g4_s42 ? (168u + sizeof(_g4_t_v77)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
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
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 112u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 120u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 124u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 124u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 128u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 132u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 136u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 144u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 148u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 152u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 156u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 160u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 168u);

  v77[130] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v70 = self;
  result = *((uint32_t *)a2 + 4);
  v71 = result;
  if ( result != 0 && *(uint8_t *)(result + 8) == 9 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (hkGeometry::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         32);
    *((uint32_t *)v4 + 1) = -65535;
    v69 = v4;
    *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_20586B8);
    *((uint32_t *)v4 + 2) = 0;
    *((uint32_t *)v4 + 3) = 0;
    *((uint32_t *)v4 + 4) = 0x80000000;
    *((uint32_t *)v4 + 5) = 0;
    *((uint32_t *)v4 + 6) = 0;
    *((uint32_t *)v4 + 7) = 0x80000000;
    v72 = *(uint32_t *)(v71 + 52);
    v5 = G4_VCALL<int>(v72 + 16, 12);
    if ( v5 != -1 )
    {
      v41 = (float *)v2;
      v6 = v72 + 16;
      do
      {
        v7 = (*(int (**)(int, int, uint32_t *))(*(uint32_t *)(v72 + 16) + 24))(v6, v5, v77);
        if ( *(uint8_t *)(v7 + 8) == 2 && (uint8_t)(*(uint8_t *)(v7 + 22) - 5) > 1u && *(char *)(v7 + 21) < 0 )
        {
          v8 = *(float *)(v7 + 36);
          v53 = v41[62];
          v52 = v41[63];
          v49 = v41[67];
          v9 = *(float *)(v7 + 32);
          v47 = v41[69];
          v39 = v41[64];
          v51 = v41[65];
          v50 = v41[66];
          v45 = v41[71];
          v54 = v41[61];
          v48 = v41[68];
          v10 = *(float *)(v7 + 40);
          v46 = v41[70];
          v62 = v41[72];
          v38 = (float)((float)((float)(v39 * v8) + (float)(v41[60] * v9)) + (float)(v48 * v10)) + v62;
          v58 = v41[73];
          v37 = v41[60];
          v56 = v41[74];
          v11 = (float)((float)((float)(v54 * v9) + (float)(v51 * v8)) + (float)(v47 * v10)) + v58;
          v12 = (float)(v53 * v9) + (float)(v50 * v8);
          v55 = v41[75];
          v13 = (float)(v9 * v52) + (float)(v8 * v49);
          v14 = *(float *)(v7 + 52);
          v15 = (float)(v12 + (float)(v46 * v10)) + v56;
          v16 = v13 + (float)(v10 * v45);
          v17 = *(float *)(v7 + 56);
          v18 = v16 + v55;
          v19 = *(float *)(v7 + 48);
          v36 = (float)((float)((float)(v39 * v14) + (float)(v37 * v19)) + (float)(v48 * v17)) + v62;
          v44 = (float)((float)((float)(v51 * v14) + (float)(v54 * v19)) + (float)(v47 * v17)) + v58;
          v42 = (float)(v50 * v14) + (float)(v53 * v19);
          v20 = (float)((float)((float)(v19 * v52) + (float)(v14 * v49)) + (float)(v17 * v45)) + v55;
          v43 = (float)(v42 + (float)(v46 * v17)) + v56;
          v66 = *(float *)(v7 + 64);
          v64 = *(float *)(v7 + 72);
          v21 = *(float *)(v7 + 68);
          v22 = (float)((float)((float)(v37 * v66) + (float)(v39 * v21)) + (float)(v48 * v64)) + v62;
          v23 = (float)((float)((float)(v54 * v66) + (float)(v51 * v21)) + (float)(v47 * v64)) + v58;
          v24 = (float)((float)((float)(v53 * v66) + (float)(v50 * v21)) + (float)(v46 * v64)) + v56;
          v67 = (float)((float)((float)(v49 * v21) + (float)(v66 * v52)) + (float)(v45 * v64)) + v55;
          v25 = *((uint32_t *)v69 + 3);
          v65 = v25 + 1;
          v63 = v25 + 2;
          v57 = (hkMemoryAllocator::Self *)((hkGeometry::Self *)((char *)v69 + 8));
          v26 = v25;
          if ( v25 == (*((uint32_t *)v69 + 4) & 0x3FFFFFFF) )
          {
            v60 = *((uint32_t *)v69 + 3);
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v57, 16, v35);
            v25 = v60;
            v26 = *((uint32_t *)v69 + 3);
          }
          v27 = (float *)(*((uint32_t *)v69 + 2) + 16 * v26);
          *v27 = v38;
          v27[3] = v18;
          v27[1] = v11;
          v27[2] = v15;
          v28 = *((uint32_t *)v69 + 3) + 1;
          *((uint32_t *)v69 + 3) = v28;
          if ( v28 == (*((uint32_t *)v69 + 4) & 0x3FFFFFFF) )
          {
            v59 = v25;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v57, 16, v35);
            v25 = v59;
            v28 = *((uint32_t *)v69 + 3);
          }
          v29 = (float *)(*((uint32_t *)v69 + 2) + 16 * v28);
          *v29 = v36;
          v29[1] = v44;
          v29[2] = v43;
          v29[3] = v20;
          v30 = *((uint32_t *)v69 + 3) + 1;
          *((uint32_t *)v69 + 3) = v30;
          if ( v30 == (*((uint32_t *)v69 + 4) & 0x3FFFFFFF) )
          {
            v61 = v25;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v57, 16, v35);
            v25 = v61;
            v30 = *((uint32_t *)v69 + 3);
          }
          v31 = (float *)(*((uint32_t *)v69 + 2) + 16 * v30);
          *v31 = v22;
          v31[1] = v23;
          v31[2] = v24;
          v31[3] = v67;
          ++*((uint32_t *)v69 + 3);
          v32 = *((uint32_t *)v69 + 6);
          if ( v32 == (*((uint32_t *)v69 + 7) & 0x3FFFFFFF) )
          {
            v68 = v25;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkGeometry::Self *)((char *)v69 + 20),
              16,
              v35);
            v25 = v68;
            v32 = *((uint32_t *)v69 + 6);
          }
          v33 = (uint32_t *)(*((uint32_t *)v69 + 5) + 16 * v32);
          *v33 = v25;
          v33[1] = v65;
          v33[2] = v63;
          v33[3] = 0;
          ++*((uint32_t *)v69 + 6);
        }
        v5 = (*(int (**)(int, int))(*(uint32_t *)(v72 + 16) + 16))(v6, v5);
      }
      while ( v5 != -1 );
    }
    if ( *((uint32_t *)v69 + 3) != 0 && *((uint32_t *)v69 + 6) != 0 )
    {
      v74 = 0;
      v75 = 0;
      v76 = 0x80000000;
      v34 = (hkDisplayConvex::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                 *(uint32_t *)(*(uint32_t *)address + 44),
                                 96);
      hkDisplayConvex::Construct(v34, v69);
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v74, 4, v35);
      *(uint32_t *)(v74 + 4 * v75++) = (uint32_t)(uintptr_t)(v34);
      (*(void (**)(uint8_t *, uint32_t, int *, g4_int128_t *, int, uint32_t, int, uint32_t))(**((uint32_t **)v70 + 6) + 12))(
        v73,
        *((uint32_t *)v70 + 6),
        &v74,
        (g4_int128_t *)(&xmmword_1D12FD0),
        v72,
        hkpInconsistentWindingViewer::m_tag,
        v71,
        0);
      (*(void (**)(uint8_t *, uint32_t, int, int, uint32_t))(**((uint32_t **)v70 + 6) + 28))(
        v73,
        *((uint32_t *)v70 + 6),
        -16744448,
        v72,
        hkpInconsistentWindingViewer::m_tag);
      result = v76;
      v75 = 0;
      if ( v76 >= 0 )
        return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v74,
                 4 * v76);
    }
    else
    {
      return G4_VCALL<int>(v69, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::postSimulationCallback  (binary VA: 0x183a1d0)
// Original: hkpInconsistentWindingViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpInconsistentWindingViewer::postSimulationCallback(hkpInconsistentWindingViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  uint32_t *v3;
  uint64_t v4; // rax
  hkpPhysicsSystem::Self *WorldAsOneSystem;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm7_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm7_4
  float v26; // xmm4_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm4_4
  int v31;
  int v32;
  int v33;
  int32_t v34; // kr00_4
  int32_t v35;
  int32_t v36; // ett
  uint64_t v37; // rax
  uint32_t *v38;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float *_g4_t_v49;
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
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef hkpWorld::Self *_g4_t_v65;
  typedef hkpInconsistentWindingViewer::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef hkVector4f::Self *_g4_t_v71;
  typedef hkpPhysicsSystem::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef uint8_t _g4_t_v75[4];
  typedef float _g4_t_v76[4];
  typedef uint8_t _g4_t_v77[16];
  typedef float _g4_t_v78[4];
  typedef float _g4_t_v79[4];
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef uint32_t _g4_t_v84[134];
  enum : size_t {
    _g4_s0 = 848u,
    _g4_s1 = (8u + sizeof(_g4_t_v40)) > _g4_s0 ? (8u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v41)) > _g4_s1 ? (16u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v42)) > _g4_s2 ? (32u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v43)) > _g4_s3 ? (36u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v44)) > _g4_s4 ? (40u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v45)) > _g4_s5 ? (44u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v46)) > _g4_s6 ? (48u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v47)) > _g4_s7 ? (56u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v48)) > _g4_s8 ? (56u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v49)) > _g4_s9 ? (60u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v50)) > _g4_s10 ? (64u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v51)) > _g4_s11 ? (68u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v52)) > _g4_s12 ? (72u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v53)) > _g4_s13 ? (76u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v54)) > _g4_s14 ? (80u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v55)) > _g4_s15 ? (84u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v56)) > _g4_s16 ? (88u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v57)) > _g4_s17 ? (92u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v58)) > _g4_s18 ? (96u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v59)) > _g4_s19 ? (100u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v60)) > _g4_s20 ? (104u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v61)) > _g4_s21 ? (104u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v62)) > _g4_s22 ? (108u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v63)) > _g4_s23 ? (112u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v64)) > _g4_s24 ? (116u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v65)) > _g4_s25 ? (120u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v66)) > _g4_s26 ? (124u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v67)) > _g4_s27 ? (128u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v68)) > _g4_s28 ? (132u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v69)) > _g4_s29 ? (136u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v70)) > _g4_s30 ? (136u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v71)) > _g4_s31 ? (136u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v72)) > _g4_s32 ? (140u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v73)) > _g4_s33 ? (148u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v74)) > _g4_s34 ? (152u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v75)) > _g4_s35 ? (156u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v76)) > _g4_s36 ? (160u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v77)) > _g4_s37 ? (176u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v78)) > _g4_s38 ? (192u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (208u + sizeof(_g4_t_v79)) > _g4_s39 ? (208u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (224u + sizeof(_g4_t_v80)) > _g4_s40 ? (224u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (228u + sizeof(_g4_t_v81)) > _g4_s41 ? (228u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (232u + sizeof(_g4_t_v82)) > _g4_s42 ? (232u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v83)) > _g4_s43 ? (236u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v84)) > _g4_s44 ? (240u + sizeof(_g4_t_v84)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 104u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 108u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 124u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 128u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 132u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 136u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 136u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 140u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 148u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 152u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 156u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 160u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 176u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 192u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 208u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 224u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 228u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 232u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 236u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 240u);

  v84[130] = (uint32_t)(uintptr_t)(&self);
  v66 = self;
  v65 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v63 = *address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TthkpInconsistentWindingViewer::postSimulationCallback");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v63 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  hkpWorld::lock(v65);
  WorldAsOneSystem = hkpWorld::getWorldAsOneSystem(v65);
  v6 = *((uint32_t *)WorldAsOneSystem + 3);
  v72 = WorldAsOneSystem;
  v74 = 0;
  if ( v6 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(uint32_t *)(*((uint32_t *)v72 + 2) + 4 * v74);
        v8 = *(uint32_t *)(v7 + 16);
        if ( *(uint8_t *)(v8 + 8) == 9 )
          break;
        if ( ++v74 >= v6 )
          goto LABEL_19;
      }
      v73 = *(uint32_t *)(v8 + 52);
      v9 = G4_VCALL<int>(v73 + 16, 12);
      v67 = v7 + 16;
      if ( v9 != -1 )
      {
        v49 = (float *)v7;
        v10 = v9;
        v11 = v73 + 16;
        do
        {
          v12 = (*(int (**)(int, int, uint32_t *))(*(uint32_t *)(v73 + 16) + 24))(v11, v10, v84);
          if ( *(uint8_t *)(v12 + 8) == 2 && (uint8_t)(*(uint8_t *)(v12 + 22) - 5) > 1u )
          {
            v68 = (hkpMeshWeldingUtility::Self *)*(uint16_t *)(v12 + 20);
            if ( (unsigned int)(uintptr_t)(v68) >> 15 != 0 )
            {
              v13 = *(float *)(v12 + 32);
              v57 = v49[62];
              v54 = v49[67];
              v53 = v49[68];
              v56 = v49[63];
              v14 = *(float *)(v12 + 36);
              v64 = v49[72];
              v69 = v49[64];
              v55 = v49[65];
              v47 = v49[66];
              v15 = *(float *)(v12 + 40);
              v51 = v49[70];
              v16 = v49[60];
              v58 = v49[61];
              v52 = v49[69];
              v50 = v49[71];
              v17 = v49[73];
              v78[0] = (float)((float)((float)(v69 * v14) + (float)(v16 * v13)) + (float)(v53 * v15)) + v64;
              v62 = v17;
              v43 = v16;
              v60 = v49[74];
              v46 = (float)((float)((float)(v55 * v14) + (float)(v58 * v13)) + (float)(v52 * v15)) + v17;
              v78[1] = v46;
              v18 = (float)(v47 * v14) + (float)(v57 * v13);
              v19 = v51 * v15;
              v20 = (float)((float)(v14 * v54) + (float)(v13 * v56)) + (float)(v15 * v50);
              v21 = *(float *)(v12 + 52);
              v59 = v49[75];
              v22 = v20 + v59;
              v23 = *(float *)(v12 + 56);
              v45 = (float)(v19 + v18) + v60;
              v78[2] = v45;
              v44 = v22;
              v78[3] = v22;
              v24 = *(float *)(v12 + 48);
              v79[0] = (float)((float)((float)(v16 * v24) + (float)(v69 * v21)) + (float)(v53 * v23)) + v64;
              v42 = (float)((float)((float)(v55 * v21) + (float)(v58 * v24)) + (float)(v52 * v23)) + v62;
              v79[1] = v42;
              v25 = v47;
              v26 = (float)((float)(v47 * v21) + (float)(v57 * v24)) + (float)(v51 * v23);
              v27 = *(float *)(v12 + 64);
              v28 = (float)((float)(v24 * v56) + (float)(v21 * v54)) + (float)(v23 * v50);
              v29 = v69 * *(float *)(v12 + 68);
              v70 = *(float *)(v12 + 68);
              v48 = v26 + v60;
              v79[2] = v26 + v60;
              v30 = *(float *)(v12 + 72);
              v79[3] = v28 + v59;
              v80 = (float)((float)((float)(v43 * v27) + v29) + (float)(v53 * v30)) + v64;
              v81 = (float)((float)((float)(v58 * v27) + (float)(v55 * v70)) + (float)(v52 * v30)) + v62;
              v82 = (float)((float)((float)(v57 * v27) + (float)(v25 * v70)) + (float)(v51 * v30)) + v60;
              v83 = (float)((float)((float)(v27 * v56) + (float)(v54 * v70)) + (float)(v30 * v50)) + v59;
              v76[0] = (float)((float)(v79[0] + v78[0]) + v80) * 0.33333334f;
              v76[3] = (float)((float)((float)(v28 + v59) + v44) + v83) * 0.33333334f;
              v76[1] = (float)((float)(v46 + v42) + v81) * 0.33333334f;
              v76[2] = (float)((float)(v45 + v48) + v82) * 0.33333334f;
              hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(
                (hkpMeshWeldingUtility::Self *)v78,
                (const hkVector4f::Self *)v79,
                (const hkVector4f::Self *)&v80,
                (const hkVector4f::Self *)v77,
                (hkVector4f::Self *)v41);
              hkDebugDisplayHandler::displayArrow(
                *((hkDebugDisplayHandler::Self **)v66 + 6),
                (const hkVector4f::Self *)v76,
                (const hkVector4f::Self *)v77,
                0xFFFFA500,
                v67,
                hkpInconsistentWindingViewer::m_tag);
              v31 = 0;
              v71 = (hkVector4f::Self *)v78;
              v61 = v11;
              while ( 1 )
              {
                v32 = v31 + 1;
                if ( hkpMeshWeldingUtility::calcSingleEdgeBitcode(v68, v31, v40) == 31 )
                {
                  v40 = (int)(uintptr_t)(v71);
                  v41 = -65536;
                }
                else
                {
                  v41 = -16776961;
                  v40 = (int)(uintptr_t)(v71);
                }
                (*(void (**)(uint8_t *))(**((uint32_t **)v66 + 6) + 72))(v75);
                v71 = (hkVector4f::Self *)((char *)v71 + 16);
                if ( v32 == 3 )
                  break;
                v31 = v32;
              }
              v11 = v61;
            }
          }
          v10 = (*(int (**)(int, int))(*(uint32_t *)(v73 + 16) + 16))(v11, v10);
        }
        while ( v10 != -1 );
      }
      ++v74;
      v6 = *((uint32_t *)v72 + 3);
    }
    while ( v74 < v6 );
LABEL_19:
    WorldAsOneSystem = v72;
  }
  if ( *((uint16_t *)WorldAsOneSystem + 3) != 0 )
  {
    do
    {
      v34 = *((uint32_t *)v72 + 1);
      HIWORD(v33) = HIWORD(v34);
      LOWORD(v33) = 0;
      v35 = v33 | (uint16_t)(v34 - 1);
      v36 = v34;
    }
    while ( v36 != __sync_val_compare_and_swap((volatile int32_t *)WorldAsOneSystem + 1, v36, v35) );
    if ( (uint16_t)v35 == 0 )
      G4_VCALL<void>(v72, 16);
  }
  LODWORD(v37) = hkpWorld::unlock(v65);
  v38 = *(uint32_t **)(v63 + 4);
  if ( (unsigned int)(uintptr_t)(v38) < *(uint32_t *)(v63 + 12) )
  {
    *v38 = (uint32_t)(uintptr_t)("Et");
    v37 = __rdtsc();
    v38[1] = v37;
    *(uint32_t *)(v63 + 4) = (uint32_t)(uintptr_t)(v38 + 3);
  }
  return v37;
}

// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::registerViewer  (binary VA: 0x183aa50)
// Original: hkpInconsistentWindingViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpInconsistentWindingViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "InconsistentWindingViewer",
             hkpInconsistentWindingViewer::create);
  hkpInconsistentWindingViewer::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x183aaa0 (size: 86 bytes)
// Symbol:    _ZN28hkpInconsistentWindingViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpInconsistentWindingViewer::hkpInconsistentWindingViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN28hkpInconsistentWindingViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpInconsistentWindingViewer::hkpInconsistentWindingViewer(
        uint32_t *a1,
        int a2))(hkpInconsistentWindingViewer::Self * self)
{
  hkpWorldViewerBase::Construct(a1, a2);
  *a1 = ((uint32_t)(uintptr_t)&off_20A3088);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A30C8);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A30F4);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A310C);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A3124);
  return (void (**)(hkpInconsistentWindingViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A3124));
}
// ----------------------------------------------------------------------------
// Function: hkpInconsistentWindingViewer::create  (binary VA: 0x183ab00)
// Original: hkpInconsistentWindingViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpInconsistentWindingViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   48);
  hkpInconsistentWindingViewer::hkpInconsistentWindingViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}


