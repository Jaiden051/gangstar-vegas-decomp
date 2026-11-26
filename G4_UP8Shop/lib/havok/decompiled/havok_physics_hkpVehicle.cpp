#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpVehicle.h"

// ----------------------------------------------------------------------------
// Function: hkpVehicleFrictionDescription::Destroy  (binary VA: 0x1728e90)
// Original: hkpVehicleFrictionDescription::~hkpVehicleFrictionDescription
// ----------------------------------------------------------------------------
void hkpVehicleFrictionDescription::Destroy(hkpVehicleFrictionDescription::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleFrictionDescription::Destroy_ea1728eb0  (binary VA: 0x1728eb0)
// Original: hkpVehicleFrictionDescription::~hkpVehicleFrictionDescription
// ----------------------------------------------------------------------------
void hkpVehicleFrictionDescription::Destroy_ea1728eb0(hkpVehicleFrictionDescription::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 216;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleFrictionDescription::AxisDescription::staticClass  (binary VA: 0x1728f10)
// Original: hkpVehicleFrictionDescription::AxisDescription::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleFrictionDescription::AxisDescription::staticClass()
{
  return &hkpVehicleFrictionDescriptionAxisDescriptionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleFrictionDescription::staticClass  (binary VA: 0x1728f30)
// Original: hkpVehicleFrictionDescription::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleFrictionDescription::staticClass()
{
  return &hkpVehicleFrictionDescriptionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleFrictionStatus::AxisStatus::staticClass  (binary VA: 0x1728f50)
// Original: hkpVehicleFrictionStatus::AxisStatus::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleFrictionStatus::AxisStatus::staticClass()
{
  return &hkpVehicleFrictionStatusAxisStatusClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleFrictionStatus::staticClass  (binary VA: 0x1728f70)
// Original: hkpVehicleFrictionStatus::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleFrictionStatus::staticClass()
{
  return &hkpVehicleFrictionStatusClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::getProcessTag  (binary VA: 0x18471e0)
// Original: hkpVehicleViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpVehicleViewer::getProcessTag()
{
  return (int)(uintptr_t)(hkpVehicleViewer::m_tag);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::init  (binary VA: 0x1847210)
// Original: hkpVehicleViewer::init
// ----------------------------------------------------------------------------
int hkpVehicleViewer::init(hkpVehicleViewer::Self *self)
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
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::worldRemovedCallback  (binary VA: 0x1847270)
// Original: hkpVehicleViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpVehicleViewer::worldRemovedCallback(hkpVehicleViewer::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::removeActionListener(a2, (hkpVehicleViewer::Self *)((char *)self + 40));
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpVehicleViewer::Self *)((char *)self + 44));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::Destroy  (binary VA: 0x18472d0)
// Original: hkpVehicleViewer::~hkpVehicleViewer
// ----------------------------------------------------------------------------
void hkpVehicleViewer::Destroy(hkpVehicleViewer::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkpWorld::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3B88);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3BCC);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A3BF8);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A3C10);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A3C28);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpVehicleViewer::worldRemovedCallback(self, v4);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v3 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v3);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A1C10);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::actionAddedCallback  (binary VA: 0x18473e0)
// Original: hkpVehicleViewer::actionAddedCallback
// ----------------------------------------------------------------------------
hkpVehicleViewer::Self * hkpVehicleViewer::actionAddedCallback(hkpVehicleViewer::Self *self, hkpAction::Self *a2)
{
  uint32_t *v2;
  int v3;
  const hkClass::Self *v4;
  int v5;
  hkpVehicleViewer::Self *result;
  hkpAction::Self *v7;
  int32_t v8;
  int v9;
  int v10;
  int savedregs;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v2 = (uint32_t *)(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
  v3 = (*(int (**)(uint32_t *, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance
                                                                                + 24))(
         hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance,
         v11,
         v12,
         v13[0],
         v13[1],
         v13[2],
         v13[3]);
  v4 = (const hkClass::Self *)G4_VCALL<int>(v3, 24, "hkpVehicleInstance");
  v5 = G4_VCALL<int>(v2, 28);
  result = (hkpVehicleViewer::Self *)G4_VCALL<int>(v5, 28, a2);
  if ( result != nullptr && v4 != nullptr )
  {
    result = (hkpVehicleViewer::Self *)(hkClass::isSuperClass((hkClass::Self *)((char *)v13 + 3), v4, result));
    if ( HIBYTE(v13[0]) != 0 )
    {
      v7 = a2;
      if ( *((uint16_t *)a2 + 3) != 0 )
      {
        while ( 1 )
        {
          v8 = *((uint32_t *)v7 + 1);
          HIWORD(v9) = HIWORD(v8);
          LOWORD(v9) = 0;
          if ( v8 == __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v8, v9 | (uint16_t)(v8 + 1)) )
            break;
          v7 = a2;
        }
      }
      v10 = *((uint32_t *)self + 13);
      if ( v10 == (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpVehicleViewer::Self *)((char *)self + 48),
          4,
          savedregs);
        v10 = *((uint32_t *)self + 13);
      }
      *(uint32_t *)(*((uint32_t *)self + 12) + 4 * v10) = (uint32_t)(uintptr_t)(a2);
      ++*((uint32_t *)self + 13);
      return self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::worldAddedCallback  (binary VA: 0x1847500)
// Original: hkpVehicleViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpVehicleViewer::worldAddedCallback(hkpVehicleViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  hkpPhysicsSystem::Self *WorldAsOneSystem;
  int result;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  hkpWorldPostSimulationListener::Self *v9;

  hkpWorld::addActionListener(a2, (hkpVehicleViewer::Self *)((char *)self + 40));
  hkpWorld::addWorldPostSimulationListener(a2, (hkpVehicleViewer::Self *)((char *)self + 44));
  v2 = 0;
  WorldAsOneSystem = hkpWorld::getWorldAsOneSystem(a2);
  result = *((uint32_t *)WorldAsOneSystem + 9);
  if ( result > 0 )
  {
    do
    {
      v9 = *(hkpWorldPostSimulationListener::Self **)(*((uint32_t *)WorldAsOneSystem + 8) + 4 * v2++);
      result = G4_VCALL<int>(self, 52, v9);
    }
    while ( *((uint32_t *)WorldAsOneSystem + 9) > v2 );
  }
  if ( *((uint16_t *)WorldAsOneSystem + 3) != 0 )
  {
    do
    {
      v6 = *((uint32_t *)WorldAsOneSystem + 1);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
      result = __sync_val_compare_and_swap((volatile int32_t *)WorldAsOneSystem + 1, v8, v7);
    }
    while ( v8 != result );
    if ( (uint16_t)v7 == 0 )
      return G4_VCALL<int>(WorldAsOneSystem, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::Destroy_ea18475d0  (binary VA: 0x18475d0)
// Original: hkpVehicleViewer::~hkpVehicleViewer
// ----------------------------------------------------------------------------
void hkpVehicleViewer::Destroy_ea18475d0(hkpVehicleViewer::Self *self)
{
  int v1;
  int v2;

  hkpVehicleViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 60;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::postSimulationCallback  (binary VA: 0x1847670)
// Original: hkpVehicleViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpVehicleViewer::postSimulationCallback(hkpVehicleViewer::Self *self)
{
  int *address;
  uint32_t *v2;
  uint64_t v3; // rax
  hkLifoAllocator::Self *v4;
  char *v5;
  float *v6;
  float v7; // xmm0_4
  const hkVector4f::Self *v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  float v13; // xmm0_4
  __m128i v14;
  float v15; // xmm4_4
  float v16; // xmm3_4
  __m128i v17;
  int v18;
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  int v23;
  int v24;
  float v25; // xmm0_4
  int v26;
  float *v27;
  uint32_t *v28;
  int v29;
  float *v30;
  hkLifoAllocator::Self *v31;
  int result;
  uint32_t *v33;
  uint64_t v34; // rax
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef hkLifoAllocator::Self **_g4_t_v37;
  typedef int _g4_t_v38;
  typedef signed int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef float *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef hkpVehicleViewer::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef hkVector4f::Self *_g4_t_v48;
  typedef char _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint8_t _g4_t_v53[4];
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef uint8_t _g4_t_v58[16];
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef hkpVehicleViewer::Self **_g4_t_v67;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v36)) > _g4_s1 ? (4u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v37)) > _g4_s2 ? (8u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v38)) > _g4_s3 ? (12u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v39)) > _g4_s4 ? (20u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v40)) > _g4_s5 ? (28u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v42)) > _g4_s7 ? (48u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v43)) > _g4_s8 ? (48u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v44)) > _g4_s9 ? (52u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v45)) > _g4_s10 ? (56u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v46)) > _g4_s11 ? (60u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v47)) > _g4_s12 ? (60u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v48)) > _g4_s13 ? (64u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v49)) > _g4_s14 ? (64u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v50)) > _g4_s15 ? (68u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v51)) > _g4_s16 ? (72u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v52)) > _g4_s17 ? (80u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v53)) > _g4_s18 ? (88u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v54)) > _g4_s19 ? (92u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v55)) > _g4_s20 ? (96u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v56)) > _g4_s21 ? (100u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v57)) > _g4_s22 ? (104u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v58)) > _g4_s23 ? (108u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v59)) > _g4_s24 ? (124u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v60)) > _g4_s25 ? (128u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v61)) > _g4_s26 ? (132u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v62)) > _g4_s27 ? (136u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v63)) > _g4_s28 ? (140u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v64)) > _g4_s29 ? (144u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v65)) > _g4_s30 ? (148u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v66)) > _g4_s31 ? (152u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (340u + sizeof(_g4_t_v67)) > _g4_s32 ? (340u + sizeof(_g4_t_v67)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 132u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 136u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 140u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 144u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 148u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 152u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 340u);

  v67 = &self;
  v45 = self;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v35 = *address;
  v2 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v2) < *(uint32_t *)(*address + 12) )
  {
    *v2 = (uint32_t)(uintptr_t)("TthkpVehicleViewer::step");
    v3 = __rdtsc();
    v2[1] = v3;
    *(uint32_t *)(v35 + 4) = (uint32_t)(uintptr_t)(v2 + 3);
  }
  v36 = *((uint32_t *)v45 + 13);
  if ( byte_2137770 != 0 || _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2137770) == 0 )
  {
    if ( byte_2137760 != 0 )
      goto LABEL_5;
  }
  else
  {
    dword_2137720 = -4419697;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2137770);
    if ( byte_2137760 != 0 )
      goto LABEL_5;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2137760) != 0 )
  {
    dword_2137710 = -657931;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2137760);
    if ( byte_2137750 != 0 )
      goto LABEL_6;
    goto LABEL_61;
  }
LABEL_5:
  if ( byte_2137750 == 0 )
  {
LABEL_61:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2137750) != 0 )
    {
      dword_2137700 = -65536;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_2137750);
      if ( byte_2137740 != 0 )
        goto LABEL_7;
      goto LABEL_63;
    }
  }
LABEL_6:
  if ( byte_2137740 == 0 )
  {
LABEL_63:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2137740) != 0 )
    {
      dword_21376F0 = -6632142;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_2137740);
      if ( byte_2137730 != 0 )
        goto LABEL_8;
      goto LABEL_65;
    }
  }
LABEL_7:
  if ( byte_2137730 == 0 )
  {
LABEL_65:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2137730) != 0 )
    {
      dword_21376E0 = -256;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_2137730);
    }
  }
LABEL_8:
  if ( v36 > 0 )
  {
    v37 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v38 = 0;
    while ( 1 )
    {
      v52 = *(uint32_t **)(*((uint32_t *)v45 + 12) + 4 * v38);
      v44 = v52[20];
      v39 = (16 * v44 + 127) & 0xFFFFFF80;
      v4 = *v37;
      v5 = *((char **)*v37 + 3);
      v40 = v5;
      if ( v39 <= *((uint32_t *)*v37 + 2) && (unsigned int)(uintptr_t)(&v5[v39]) <= *((uint32_t *)v4 + 4) )
        *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(&v5[v39]);
      else
        v40 = (char *)hkLifoAllocator::allocateFromNewSlab(v4, v39);
      if ( v44 > 0 )
        break;
LABEL_32:
      v51 = 0;
      v28 = (uint32_t *)v52[7];
      v43 = v28[39];
      if ( v43 > 0 )
      {
        while ( 1 )
        {
          v47 = *(char *)(v28[38] + v51);
          if ( v44 > 0 )
          {
            v29 = 0;
            v50 = 0;
            v49 = 1;
            v30 = (float *)v40;
            while ( 1 )
            {
              if ( *(char *)(v28[35] + 40 * v29 + 36) == v51 )
              {
                ++v50;
                v59 = v63;
                v60 = v64;
                v61 = v65;
                v62 = v66;
                v63 = *v30;
                v64 = v30[1];
                v65 = v30[2];
                v66 = v30[3];
                if ( v49 == 0 )
                  (*(void (**)(uint8_t *))(**((uint32_t **)v45 + 6) + 72))(v53);
                if ( v50 == v47 )
                  break;
                ++v29;
                v30 += 4;
                v49 = 0;
                if ( v29 == v44 )
                  break;
              }
              else
              {
                ++v29;
                v30 += 4;
                if ( v29 == v44 )
                  break;
              }
              v28 = (uint32_t *)v52[7];
            }
          }
          if ( ++v51 == v43 )
            break;
          v28 = (uint32_t *)v52[7];
        }
      }
      v31 = *v37;
      if ( v39 > *((uint32_t *)*v37 + 2) || *((char **)v31 + 3) != &v40[v39] || v40 == *((char **)v31 + 5) )
        hkLifoAllocator::slowBlockFree(*v37, v40, v39);
      else
        *((uint32_t *)v31 + 3) = (uint32_t)(uintptr_t)(v40);
      if ( ++v38 == v36 )
        goto LABEL_51;
    }
    v41 = 0;
    v42 = (float *)v40;
LABEL_15:
    v6 = (float *)(*(uint32_t *)(v52[7] + 140) + 40 * v41);
    v7 = *(float *)(*(uint32_t *)(v52[13] + 8) + 48 * v41 + 32);
    v48 = (hkVector4f::Self *)(v52[19] + 224 * v41);
    v8 = (hkVector4f::Self *)((char *)v48 + 80);
    v9 = *((uint32_t *)v48 + 9);
    v10 = v9 == 0;
    v11 = v9 + 16;
    if ( v10 )
      v11 = 0;
    v46 = v11;
    *v42 = (float)(*((float *)v48 + 32) * v7) + *((float *)v48 + 20);
    v42[1] = (float)(*((float *)v48 + 33) * v7) + *((float *)v48 + 21);
    v42[2] = (float)(*((float *)v48 + 34) * v7) + *((float *)v48 + 22);
    v42[3] = (float)(v7 * *((float *)v48 + 35)) + *((float *)v48 + 23);
    (*(void (**)(uint8_t *, uint32_t, const hkVector4f::Self *))(**((uint32_t **)v45 + 6) + 72))(
      v53,
      *((uint32_t *)v45 + 6),
      v8);
    if ( *((uint32_t *)v48 + 9) != 0 )
      v12 = dword_2137700;
    else
      v12 = dword_2137720;
    (*(void (**)(uint8_t *, uint32_t, float *, hkVector4f::Self *, int, int, int))(**((uint32_t **)v45 + 6) + 72))(
      v53,
      *((uint32_t *)v45 + 6),
      v42,
      v48,
      v12,
      v46,
      hkpVehicleViewer::m_tag[0]);
    hkDebugDisplayHandler::displayStar(
      *((hkDebugDisplayHandler::Self **)v45 + 6),
      v8,
      0.05f,
      dword_21376E0,
      v46,
      hkpVehicleViewer::m_tag[0]);
    hkDebugDisplayHandler::displayStar(
      *((hkDebugDisplayHandler::Self **)v45 + 6),
      v48,
      0.05f,
      dword_21376E0,
      v46,
      hkpVehicleViewer::m_tag[0]);
    v54 = *((float *)v48 + 32);
    v55 = *((float *)v48 + 33);
    v56 = *((float *)v48 + 34);
    v13 = *((float *)v48 + 50);
    v57 = *((float *)v48 + 35);
    hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v58, (hkVector4f::Self *)((char *)v48 + 160), -v13);
    hkVector4f::setRotatedDir((hkVector4f::Self *)&v54, (const hkQuaternionf::Self *)v58, (const hkVector4f::Self *)&v54);
g4_m128_raw(v14) = LODWORD(v54);
    v15 = v55;
    v17 = v14;
    v16 = v56;
    *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v15 * v15))
                            + (float)(v16 * v16);
    if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
    {
      v21 = 0.0;
    }
    else
    {
      v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
      v19 = (float)(*(float *)&v18 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * *(float *)&v18)
                  * (float)(*(float *)&v18 * *(float *)&v18));
      v20 = (float)(v19 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v19) * (float)(v19 * v19));
      v21 = (float)(1.5 * v20) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v20) * (float)(v20 * v20));
    }
    v54 = v54 * v21;
    v55 = v55 * v21;
    v56 = v56 * v21;
    v57 = v21 * v57;
    v22 = *v6;
    v54 = (float)(*(float *)g4_m128_ptr<int32_t>(v14) * v21) * *v6;
    v55 = (float)(v15 * v21) * v22;
    v56 = (float)(v16 * v21) * v22;
    v57 = v22 * v57;
    v59 = *v42 + v54;
    v60 = v42[1] + v55;
    v61 = v42[2] + v56;
    v62 = v42[3] + v57;
    v63 = *v42 - v54;
    v64 = v42[1] - v55;
    v65 = v42[2] - v56;
    v23 = *((uint32_t *)v45 + 6);
    v66 = v42[3] - v57;
    if ( *((uint32_t *)v48 + 9) != 0 )
      v24 = dword_2137710;
    else
      v24 = dword_2137720;
    (*(void (**)(uint8_t *, int, float *, float *, int, int, int))(*(uint32_t *)v23 + 72))(
      v53,
      v23,
      &v59,
      &v63,
      v24,
      v46,
      hkpVehicleViewer::m_tag[0]);
    v25 = *v6;
    v63 = *((float *)v48 + 32) * *v6;
    v64 = *((float *)v48 + 33) * v25;
    v65 = *((float *)v48 + 34) * v25;
    v26 = 0;
    v66 = v25 * *((float *)v48 + 35);
    hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)&v59, (hkVector4f::Self *)((char *)v48 + 160), 0.5235988f);
    v27 = &v63;
    while ( v26 + 1 > 11 )
    {
      if ( v26 != 12 )
        goto LABEL_25;
LABEL_26:
      (*(void (**)(uint8_t *))(**((uint32_t **)v45 + 6) + 72))(v53);
      if ( v26 == 12 )
      {
        ++v41;
        v42 += 4;
        if ( v41 == v44 )
          goto LABEL_32;
        goto LABEL_15;
      }
LABEL_27:
      v27 += 4;
      ++v26;
    }
    hkVector4f::setRotatedDir((hkVector4f::Self *)(v27 + 4), (const hkQuaternionf::Self *)&v59, (const hkVector4f::Self *)v27);
LABEL_25:
    *v27 = *v27 + *v42;
    v27[1] = v27[1] + v42[1];
    v27[2] = v27[2] + v42[2];
    v27[3] = v27[3] + v42[3];
    if ( v26 == 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
LABEL_51:
  result = v35;
  v33 = *(uint32_t **)(v35 + 4);
  if ( (unsigned int)(uintptr_t)(v33) < *(uint32_t *)(v35 + 12) )
  {
    *v33 = (uint32_t)(uintptr_t)("Et");
    v34 = __rdtsc();
    v33[1] = v34;
    result = v35;
    *(uint32_t *)(v35 + 4) = (uint32_t)(uintptr_t)(v33 + 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::actionRemovedCallback  (binary VA: 0x1848300)
// Original: hkpVehicleViewer::actionRemovedCallback
// ----------------------------------------------------------------------------
void hkpVehicleViewer::actionRemovedCallback(hkpVehicleViewer::Self *self, hkpAction::Self *a2)
{
  int v2;
  hkpAction::Self **v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett

  v2 = *((uint32_t *)self + 13);
  if ( v2 > 0 )
  {
    v3 = *((hkpAction::Self ***)self + 12);
    if ( a2 == *v3 )
    {
      v5 = 0;
      v4 = 0;
LABEL_8:
      v6 = v2 - 1;
      *((uint32_t *)self + 13) = v6;
      if ( v4 != v6 )
        v3[v5] = v3[v6];
      if ( *((uint16_t *)a2 + 3) != 0 )
      {
        do
        {
          v8 = *((uint32_t *)a2 + 1);
          HIWORD(v7) = HIWORD(v8);
          LOWORD(v7) = 0;
          v9 = v7 | (uint16_t)(v8 - 1);
          v10 = v8;
        }
        while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9) );
        if ( (uint16_t)v9 == 0 )
          G4_VCALL<void>(a2, 16);
      }
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        v5 = v4;
        if ( a2 == v3[v4] )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::registerViewer  (binary VA: 0x18483b0)
// Original: hkpVehicleViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpVehicleViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Vehicles",
             hkpVehicleViewer::create);
  hkpVehicleViewer::m_tag[0] = result;
  return result;
}



// ============================================================================
// Address:   0x1848400 (size: 107 bytes)
// Symbol:    _ZN16hkpVehicleViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpVehicleViewer::hkpVehicleViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN16hkpVehicleViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpVehicleViewer::hkpVehicleViewer(uint32_t *a1, uint32_t *a2))(hkpVehicleViewer::Self * self)
{
  hkpWorldViewerBase::Construct((int)(uintptr_t)(a1), a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3B88);
  a1[14] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3BCC);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A3BF8);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A3C10);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A3C28);
  return (void (**)(hkpVehicleViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A3C28));
}
// ----------------------------------------------------------------------------
// Function: hkpVehicleViewer::create  (binary VA: 0x1848470)
// Original: hkpVehicleViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpVehicleViewer::create(uint32_t *a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   60);
  hkpVehicleViewer::hkpVehicleViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::staticClass  (binary VA: 0x185cbf0)
// Original: hkpVehicleLinearCastBatchingManager::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleLinearCastBatchingManager::staticClass()
{
  return &hkpVehicleLinearCastBatchingManagerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteering::Destroy  (binary VA: 0x185cce0)
// Original: hkpVehicleSteering::~hkpVehicleSteering
// ----------------------------------------------------------------------------
void hkpVehicleSteering::Destroy(hkpVehicleSteering::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSteering::calcSteering  (binary VA: 0x185cd00)
// Original: hkpVehicleDefaultSteering::calcSteering
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSteering::calcSteering(uint32_t *a1, int64_t a2, int a3, uint32_t *a4)
{
  int result;

  G4_VCALL<void>(a1, 24, a2, HIDWORD(a2), a3, a4);
  for ( result = 0; a1[5] > result; ++result )
  {
    while ( *(uint8_t *)(a1[4] + result) != 0 )
    {
      *(uint32_t *)(a4[2] + 4 * result++) = *a4;
      if ( a1[5] <= result )
        return result;
    }
    *(uint32_t *)(a4[2] + 4 * result) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSteering::calcMainSteeringAngle  (binary VA: 0x185cd80)
// Original: hkpVehicleDefaultSteering::calcMainSteeringAngle
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSteering::calcMainSteeringAngle(int a1, int a2, int a3, int a4, float *a5)
{
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  int result;
  __m128i v9;
  float v10; // xmm1_4
  int v11;
  float v12; // xmm2_4
  float v13[7];

  v5 = *(float *)(a1 + 8) * *(float *)(a4 + 8);
  *a5 = v5;
  a5[1] = v5;
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v13,
    (const hkMatrix3f::Self *)(*(uint32_t *)(a3 + 24) + 240),
    (const hkVector4f::Self *)(*(uint32_t *)(a3 + 28) + 64));
  v6 = *(uint32_t *)(a3 + 24);
g4_m128_raw(v9) = *(unsigned int *)(v6 + 432);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v13[0]) + (float)(*(float *)(v6 + 436) * v13[1]);
  v7 = *(float *)(v6 + 440) * v13[2];
  result = a1;
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) + v7;
  v10 = *(float *)(a1 + 12);
  if ( *(float *)g4_m128_ptr<int32_t>(v9) > v10 )
  {
    v11 = _mm_cvtsi128_si32(v9);
    result = (2130706432 - v11) & ((v11 ^ (v11 + 2139095040)) >> 31);
    v12 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v9)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&result)) * *(float *)&result)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&result)) * *(float *)&result);
    *a5 = (float)((float)((float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v12)) * v12) * v10)
                * (float)((float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v12)) * v12) * v10))
        * *a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSteering::Destroy  (binary VA: 0x185cea0)
// Original: hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSteering::Destroy(hkpVehicleDefaultSteering::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4468);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      v1 & 0x3FFFFFFF);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteering::Destroy_ea185cf50  (binary VA: 0x185cf50)
// Original: hkpVehicleSteering::~hkpVehicleSteering
// ----------------------------------------------------------------------------
void hkpVehicleSteering::Destroy_ea185cf50(hkpVehicleSteering::Self *self)
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
// Function: hkpVehicleDefaultSteering::Destroy_ea185cfb0  (binary VA: 0x185cfb0)
// Original: hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSteering::Destroy_ea185cfb0(hkpVehicleDefaultSteering::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4468);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      v1 & 0x3FFFFFFF);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSteering::Construct  (binary VA: 0x185d020)
// Original: hkpVehicleDefaultSteering::hkpVehicleDefaultSteering
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSteering::Construct(hkpVehicleDefaultSteering::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4468);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::staticClass  (binary VA: 0x185d070)
// Original: hkpVehicleCastBatchingManager::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleCastBatchingManager::staticClass()
{
  return &hkpVehicleCastBatchingManagerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleEngine::Destroy  (binary VA: 0x185d130)
// Original: hkpVehicleEngine::~hkpVehicleEngine
// ----------------------------------------------------------------------------
void hkpVehicleEngine::Destroy(hkpVehicleEngine::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleEngine::Destroy_ea185d190  (binary VA: 0x185d190)
// Original: hkpVehicleEngine::~hkpVehicleEngine
// ----------------------------------------------------------------------------
void hkpVehicleEngine::Destroy_ea185d190(hkpVehicleEngine::Self *self)
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
// Function: hkpVehicleDefaultEngine::staticClass  (binary VA: 0x185d1f0)
// Original: hkpVehicleDefaultEngine::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultEngine::staticClass()
{
  return &hkpVehicleDefaultEngineClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::getPhantoms  (binary VA: 0x185d2e0)
// Original: hkpVehicleInstance::getPhantoms
// ----------------------------------------------------------------------------
int hkpVehicleInstance::getPhantoms(int a1, int a2)
{
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 60) + 28))(*(uint32_t *)(a1 + 60), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::handleFixedGroundAccum  (binary VA: 0x185d300)
// Original: hkpVehicleInstance::handleFixedGroundAccum
// ----------------------------------------------------------------------------
int hkpVehicleInstance::handleFixedGroundAccum(int a1, int a2, int a3)
{
  *(uint32_t *)(a3 + 8) = 0;
  *(uint32_t *)(a3 + 48) = 0;
  *(uint8_t *)(a3 + 1) = 0;
  *(uint32_t *)(a3 + 64) = 1065353216;
  *(uint32_t *)(a3 + 68) = 0;
  *(uint32_t *)(a3 + 72) = 0;
  *(uint32_t *)(a3 + 76) = 0;
  *(uint32_t *)(a3 + 80) = 0;
  *(uint32_t *)(a3 + 52) = 0;
  *(uint8_t *)a3 = 1;
  *(uint32_t *)(a3 + 56) = 0;
  *(uint32_t *)(a3 + 60) = 0;
  *(uint32_t *)(a3 + 16) = 0;
  *(uint32_t *)(a3 + 20) = 0;
  *(uint32_t *)(a3 + 24) = 0;
  *(uint32_t *)(a3 + 28) = 0;
  *(uint32_t *)(a3 + 32) = 0;
  *(uint32_t *)(a3 + 36) = 0;
  *(uint32_t *)(a3 + 40) = 0;
  *(uint32_t *)(a3 + 44) = 0;
  *(uint32_t *)(a3 + 112) = 0;
  *(uint32_t *)(a3 + 116) = 0;
  *(uint32_t *)(a3 + 120) = 0;
  *(uint32_t *)(a3 + 124) = 0;
  *(uint32_t *)(a3 + 84) = 1065353216;
  *(uint32_t *)(a3 + 88) = 0;
  *(uint32_t *)(a3 + 92) = 0;
  *(uint32_t *)(a3 + 96) = 0;
  *(uint32_t *)(a3 + 100) = 0;
  *(uint32_t *)(a3 + 104) = 1065353216;
  *(uint32_t *)(a3 + 108) = 0;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::calcRPM  (binary VA: 0x185d3f0)
// Original: hkpVehicleInstance::calcRPM
// ----------------------------------------------------------------------------
long double hkpVehicleInstance::calcRPM(hkpVehicleInstance::Self *self)
{
  return *((float *)self + 29);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::addToWorld  (binary VA: 0x185d410)
// Original: hkpVehicleInstance::addToWorld
// ----------------------------------------------------------------------------
int hkpVehicleInstance::addToWorld(hkpEntity::Self **self, hkpWorld::Self *a2)
{
  hkpWorld::addEntity(a2, *(self + 6), 1);
  G4_VCALL<void>(*(self + 15), 40, a2);
  return G4_VCALL<int>(*(self + 18), 28, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::removeFromWorld  (binary VA: 0x185d470)
// Original: hkpVehicleInstance::removeFromWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpVehicleInstance::removeFromWorld(hkpVehicleInstance::Self *self)
{
  uint8_t v3[9];

  (*(void (**)(uint32_t))(**((uint32_t **)self + 18) + 32))(*((uint32_t *)self + 18));
  (*(void (**)(uint32_t))(**((uint32_t **)self + 15) + 44))(*((uint32_t *)self + 15));
  return hkpWorld::removeEntity((hkpWorld::Self *)v3, *(hkpEntity::Self **)(*((uint32_t *)self + 6) + 8), *((hkpWorld::Self **)self + 6));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::calcMPH  (binary VA: 0x185d4c0)
// Original: hkpVehicleInstance::calcMPH
// ----------------------------------------------------------------------------
long double hkpVehicleInstance::calcMPH(hkpVehicleInstance::Self *self)
{
  int v1;
  __m128i v2;
  float v3; // xmm1_4
  int v4;
  float v5; // xmm3_4
  float v6; // xmm2_4

  v1 = *((uint32_t *)self + 6);
g4_m128_raw(v2) = *(unsigned int *)(v1 + 432);
  *(float *)g4_m128_ptr<int32_t>(v2) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v2) * *(float *)g4_m128_ptr<int32_t>(v2))
                                 + (float)(*(float *)(v1 + 436) * *(float *)(v1 + 436)))
                         + (float)(*(float *)(v1 + 440) * *(float *)(v1 + 440));
  v3 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v2) > 0.0 )
  {
    v4 = ((_mm_cvtsi128_si32(v2) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v2) >> 1));
    v5 = (float)(*(float *)&v4 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v2)) * *(float *)&v4) * (float)(*(float *)&v4 * *(float *)&v4));
    v6 = (float)(v5 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v2)) * v5) * (float)(v5 * v5));
    return (float)((float)((float)((float)((float)(1.5 * v6)
                                         - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v2)) * v6) * (float)(v6 * v6)))
                                 * *(float *)g4_m128_ptr<int32_t>(v2))
                         / 1609.3f)
                 * 3600.0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::calcKMPH  (binary VA: 0x185d5c0)
// Original: hkpVehicleInstance::calcKMPH
// ----------------------------------------------------------------------------
long double hkpVehicleInstance::calcKMPH(hkpVehicleInstance::Self *self)
{
  int v1;
  __m128i v2;
  float v3; // xmm1_4
  int v4;
  float v5; // xmm3_4
  float v6; // xmm2_4

  v1 = *((uint32_t *)self + 6);
g4_m128_raw(v2) = *(unsigned int *)(v1 + 432);
  *(float *)g4_m128_ptr<int32_t>(v2) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v2) * *(float *)g4_m128_ptr<int32_t>(v2))
                                 + (float)(*(float *)(v1 + 436) * *(float *)(v1 + 436)))
                         + (float)(*(float *)(v1 + 440) * *(float *)(v1 + 440));
  v3 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v2) > 0.0 )
  {
    v4 = ((_mm_cvtsi128_si32(v2) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v2) >> 1));
    v5 = (float)(*(float *)&v4 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v2)) * *(float *)&v4) * (float)(*(float *)&v4 * *(float *)&v4));
    v6 = (float)(v5 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v2)) * v5) * (float)(v5 * v5));
    return (float)((float)((float)((float)((float)(1.5 * v6)
                                         - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v2)) * v6) * (float)(v6 * v6)))
                                 * *(float *)g4_m128_ptr<int32_t>(v2))
                         / 1000.0)
                 * 3600.0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::calcCurrentPositionAndRotation  (binary VA: 0x185d6c0)
// Original: hkpVehicleInstance::calcCurrentPositionAndRotation
// ----------------------------------------------------------------------------
float * hkpVehicleInstance::calcCurrentPositionAndRotation(hkpVehicleInstance::Self *self, const hkpRigidBody::Self *a2, const hkpVehicleSuspension::Self *a3, int a4, hkVector4f::Self *a5, hkQuaternionf::Self *a6)
{
  float *v6;
  int v7;
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm7_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm4_4
  float *result;
  float v29; // xmm6_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41[4];
  typedef uint8_t _g4_t_v42[16];
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v39)) > _g4_s0 ? (8u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v40)) > _g4_s1 ? (12u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v42)) > _g4_s3 ? (32u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v43)) > _g4_s4 ? (48u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v44)) > _g4_s5 ? (52u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v45)) > _g4_s6 ? (56u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v46)) > _g4_s7 ? (60u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v47)) > _g4_s8 ? (64u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v48)) > _g4_s9 ? (68u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v49)) > _g4_s10 ? (72u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v50)) > _g4_s11 ? (76u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v51)) > _g4_s12 ? (80u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v52)) > _g4_s13 ? (84u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v53)) > _g4_s14 ? (88u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v54)) > _g4_s15 ? (92u + sizeof(_g4_t_v54)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);

  v6 = (float *)(*((uint32_t *)self + 19) + 224 * a4);
  v7 = *((uint32_t *)self + 7);
  v43 = *(float *)(v7 + 64);
  v44 = *(float *)(v7 + 68);
  v45 = *(float *)(v7 + 72);
  v46 = *(float *)(v7 + 76);
  v47 = *(uint32_t *)(v7 + 48);
  v48 = *(uint32_t *)(v7 + 52);
  v49 = *(uint32_t *)(v7 + 56);
  v50 = *(uint32_t *)(v7 + 60);
  v51 = *(uint32_t *)(v7 + 80);
  v52 = *(uint32_t *)(v7 + 84);
  v53 = *(uint32_t *)(v7 + 88);
  v54 = *(uint32_t *)(v7 + 92);
  hkQuaternionf::set((hkQuaternionf::Self *)v41, (const hkRotationf::Self *)&v43);
  v39 = v6[50];
  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)v42, (const hkQuaternionf::Self *)v41, (const hkVector4f::Self *)(v6 + 36));
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)&v43, (const hkVector4f::Self *)v42, -v39);
  v9 = *((float *)a2 + 89);
  v10 = v6[45];
  v11 = v6[44];
  v12 = *((float *)a2 + 88);
  v13 = (float)((float)((float)(v6[46] * v9) - (float)(*((float *)a2 + 90) * v10)) + (float)(*((float *)a2 + 91) * v11))
      + (float)(v6[47] * v12);
  v14 = (float)((float)((float)(*((float *)a2 + 90) * v11) - (float)(v6[46] * v12)) + (float)(*((float *)a2 + 91) * v10))
      + (float)(v6[47] * v9);
  v15 = (float)((float)((float)(*((float *)a2 + 88) * v10) - (float)(v9 * v11)) + (float)(*((float *)a2 + 91) * v6[46]))
      + (float)(*((float *)a2 + 90) * v6[47]);
  v40 = (float)(*((float *)a2 + 91) * v6[47])
      - (float)((float)((float)(v12 * v11) + (float)(v10 * v9)) + (float)(*((float *)a2 + 90) * v6[46]));
  v16 = (float)((float)((float)(v41[2] * v14) - (float)(v41[1] * v15)) + (float)(v40 * v41[0])) + (float)(v41[3] * v13);
  v17 = (float)((float)((float)(v15 * v41[0]) - (float)(v41[2] * v13)) + (float)(v41[1] * v40)) + (float)(v41[3] * v14);
  v18 = (float)((float)((float)(v41[1] * v13) - (float)(v14 * v41[0])) + (float)(v40 * v41[2])) + (float)(v41[3] * v15);
  v19 = (float)(v40 * v41[3]) - (float)((float)((float)(v13 * v41[0]) + (float)(v14 * v41[1])) + (float)(v15 * v41[2]));
  v20 = v43;
  v21 = (float)(v16 * v43) + (float)(v44 * v17);
  *(float *)a6 = (float)((float)((float)(v45 * v17) - (float)(v44 * v18)) + (float)(v19 * v43)) + (float)(v46 * v16);
  v22 = v45 * v16;
  v23 = (float)(v16 * v44) - (float)(v20 * v17);
  *((float *)a6 + 1) = (float)((float)((float)(v18 * v20) - v22) + (float)(v44 * v19)) + (float)(v46 * v17);
  v24 = v45 * v19;
  v25 = v19 * v46;
  v26 = v21 + (float)(v18 * v45);
  *((float *)a6 + 2) = (float)(v23 + v24) + (float)(v46 * v18);
  *((float *)a6 + 3) = v25 - v26;
  v27 = fmaxf(0.0, v6[28]);
  result = (float *)(*((uint32_t *)a3 + 2) + 48 * a4);
  v29 = result[1];
  v30 = result[2];
  v31 = (float)((float)(*((float *)a2 + 61) * *result) + (float)(*((float *)a2 + 65) * v29))
      + (float)(*((float *)a2 + 69) * v30);
  v32 = (float)((float)(*((float *)a2 + 62) * *result) + (float)(*((float *)a2 + 66) * v29))
      + (float)(*((float *)a2 + 70) * v30);
  v33 = (float)(*((float *)a2 + 63) * *result) + (float)(*((float *)a2 + 67) * v29);
  v34 = *((float *)a2 + 71) * v30;
  v35 = (float)((float)((float)(*result * *((float *)a2 + 60)) + (float)(v29 * *((float *)a2 + 64)))
              + (float)(v30 * *((float *)a2 + 68)))
      + *((float *)a2 + 72);
  *(float *)a5 = v35;
  v36 = v31 + *((float *)a2 + 73);
  *((float *)a5 + 1) = v36;
  v37 = v32 + *((float *)a2 + 74);
  *((float *)a5 + 2) = v37;
  v38 = (float)(v33 + v34) + *((float *)a2 + 75);
  *((float *)a5 + 3) = v38;
  *(float *)a5 = (float)(v6[32] * v27) + v35;
  *((float *)a5 + 1) = (float)(v6[33] * v27) + v36;
  *((float *)a5 + 2) = (float)(v6[34] * v27) + v37;
  *((float *)a5 + 3) = (float)(v27 * v6[35]) + v38;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::Destroy  (binary VA: 0x185dbc0)
// Original: hkpVehicleInstance::~hkpVehicleInstance
// ----------------------------------------------------------------------------
void hkpVehicleInstance::Destroy(hkpVehicleInstance::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  int32_t v13; // kr08_4
  int32_t v14;
  int32_t v15; // ett
  int v16;
  int v17;
  int32_t v18; // kr0C_4
  int32_t v19;
  int32_t v20; // ett
  int v21;
  int v22;
  int32_t v23; // kr10_4
  int32_t v24;
  int32_t v25; // ett
  int v26;
  int v27;
  int32_t v28; // kr14_4
  int32_t v29;
  int32_t v30; // ett
  int v31;
  int v32;
  int32_t v33; // kr18_4
  int32_t v34;
  int32_t v35; // ett
  int v36;
  int v37;
  int32_t v38; // kr1C_4
  int32_t v39;
  int32_t v40; // ett
  int v41;
  int v42;
  int32_t v43; // kr20_4
  int32_t v44;
  int32_t v45; // ett
  int v46;
  int v47;
  int32_t v48; // kr24_4
  int32_t v49;
  int32_t v50; // ett
  int v51;
  int v52;
  int32_t v53; // kr28_4
  int32_t v54;
  int32_t v55; // ett
  int v56;
  int v57;
  int32_t v58; // kr2C_4
  int32_t v59;
  int32_t v60; // ett
  int v61;
  int v62;
  int32_t v63; // kr30_4
  int32_t v64;
  int32_t v65; // ett
  int v66;
  int v67;
  int v68;

  v1 = *((uint32_t *)self + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A44E8);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = *((uint32_t *)self + 8);
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  v11 = *((uint32_t *)self + 9);
  if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
  {
    do
    {
      v13 = *(uint32_t *)(v11 + 4);
      HIWORD(v12) = HIWORD(v13);
      LOWORD(v12) = 0;
      v14 = v12 | (uint16_t)(v13 - 1);
      v15 = v13;
    }
    while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
    if ( (uint16_t)v14 == 0 )
      G4_VCALL<void>(v11, 16);
  }
  v16 = *((uint32_t *)self + 10);
  if ( v16 != 0 && *(uint16_t *)(v16 + 6) != 0 )
  {
    do
    {
      v18 = *(uint32_t *)(v16 + 4);
      HIWORD(v17) = HIWORD(v18);
      LOWORD(v17) = 0;
      v19 = v17 | (uint16_t)(v18 - 1);
      v20 = v18;
    }
    while ( v20 != __sync_val_compare_and_swap((volatile int32_t *)(v16 + 4), v20, v19) );
    if ( (uint16_t)v19 == 0 )
      G4_VCALL<void>(v16, 16);
  }
  v21 = *((uint32_t *)self + 11);
  if ( v21 != 0 && *(uint16_t *)(v21 + 6) != 0 )
  {
    do
    {
      v23 = *(uint32_t *)(v21 + 4);
      HIWORD(v22) = HIWORD(v23);
      LOWORD(v22) = 0;
      v24 = v22 | (uint16_t)(v23 - 1);
      v25 = v23;
    }
    while ( v25 != __sync_val_compare_and_swap((volatile int32_t *)(v21 + 4), v25, v24) );
    if ( (uint16_t)v24 == 0 )
      G4_VCALL<void>(v21, 16);
  }
  v26 = *((uint32_t *)self + 12);
  if ( v26 != 0 && *(uint16_t *)(v26 + 6) != 0 )
  {
    do
    {
      v28 = *(uint32_t *)(v26 + 4);
      HIWORD(v27) = HIWORD(v28);
      LOWORD(v27) = 0;
      v29 = v27 | (uint16_t)(v28 - 1);
      v30 = v28;
    }
    while ( v30 != __sync_val_compare_and_swap((volatile int32_t *)(v26 + 4), v30, v29) );
    if ( (uint16_t)v29 == 0 )
      G4_VCALL<void>(v26, 16);
  }
  v31 = *((uint32_t *)self + 13);
  if ( v31 != 0 && *(uint16_t *)(v31 + 6) != 0 )
  {
    do
    {
      v33 = *(uint32_t *)(v31 + 4);
      HIWORD(v32) = HIWORD(v33);
      LOWORD(v32) = 0;
      v34 = v32 | (uint16_t)(v33 - 1);
      v35 = v33;
    }
    while ( v35 != __sync_val_compare_and_swap((volatile int32_t *)(v31 + 4), v35, v34) );
    if ( (uint16_t)v34 == 0 )
      G4_VCALL<void>(v31, 16);
  }
  v36 = *((uint32_t *)self + 14);
  if ( v36 != 0 && *(uint16_t *)(v36 + 6) != 0 )
  {
    do
    {
      v38 = *(uint32_t *)(v36 + 4);
      HIWORD(v37) = HIWORD(v38);
      LOWORD(v37) = 0;
      v39 = v37 | (uint16_t)(v38 - 1);
      v40 = v38;
    }
    while ( v40 != __sync_val_compare_and_swap((volatile int32_t *)(v36 + 4), v40, v39) );
    if ( (uint16_t)v39 == 0 )
      G4_VCALL<void>(v36, 16);
  }
  v41 = *((uint32_t *)self + 15);
  if ( v41 != 0 && *(uint16_t *)(v41 + 6) != 0 )
  {
    do
    {
      v43 = *(uint32_t *)(v41 + 4);
      HIWORD(v42) = HIWORD(v43);
      LOWORD(v42) = 0;
      v44 = v42 | (uint16_t)(v43 - 1);
      v45 = v43;
    }
    while ( v45 != __sync_val_compare_and_swap((volatile int32_t *)(v41 + 4), v45, v44) );
    if ( (uint16_t)v44 == 0 )
      G4_VCALL<void>(v41, 16);
  }
  v46 = *((uint32_t *)self + 17);
  if ( v46 != 0 && *(uint16_t *)(v46 + 6) != 0 )
  {
    do
    {
      v48 = *(uint32_t *)(v46 + 4);
      HIWORD(v47) = HIWORD(v48);
      LOWORD(v47) = 0;
      v49 = v47 | (uint16_t)(v48 - 1);
      v50 = v48;
    }
    while ( v50 != __sync_val_compare_and_swap((volatile int32_t *)(v46 + 4), v50, v49) );
    if ( (uint16_t)v49 == 0 )
      G4_VCALL<void>(v46, 16);
  }
  v51 = *((uint32_t *)self + 22);
  if ( v51 != 0 && *(uint16_t *)(v51 + 6) != 0 )
  {
    do
    {
      v53 = *(uint32_t *)(v51 + 4);
      HIWORD(v52) = HIWORD(v53);
      LOWORD(v52) = 0;
      v54 = v52 | (uint16_t)(v53 - 1);
      v55 = v53;
    }
    while ( v55 != __sync_val_compare_and_swap((volatile int32_t *)(v51 + 4), v55, v54) );
    if ( (uint16_t)v54 == 0 )
      G4_VCALL<void>(v51, 16);
  }
  v56 = *((uint32_t *)self + 18);
  if ( v56 != 0 && *(uint16_t *)(v56 + 6) != 0 )
  {
    do
    {
      v58 = *(uint32_t *)(v56 + 4);
      HIWORD(v57) = HIWORD(v58);
      LOWORD(v57) = 0;
      v59 = v57 | (uint16_t)(v58 - 1);
      v60 = v58;
    }
    while ( v60 != __sync_val_compare_and_swap((volatile int32_t *)(v56 + 4), v60, v59) );
    if ( (uint16_t)v59 == 0 )
      G4_VCALL<void>(v56, 16);
  }
  v61 = *((uint32_t *)self + 16);
  if ( v61 != 0 && *(uint16_t *)(v61 + 6) != 0 )
  {
    do
    {
      v63 = *(uint32_t *)(v61 + 4);
      HIWORD(v62) = HIWORD(v63);
      LOWORD(v62) = 0;
      v64 = v62 | (uint16_t)(v63 - 1);
      v65 = v63;
    }
    while ( v65 != __sync_val_compare_and_swap((volatile int32_t *)(v61 + 4), v65, v64) );
    if ( (uint16_t)v64 == 0 )
      G4_VCALL<void>(v61, 16);
  }
  v66 = *((uint32_t *)self + 34);
  *((uint32_t *)self + 33) = 0;
  if ( v66 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 32),
      4 * v66);
  v67 = *((uint32_t *)self + 25);
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 34) = 0x80000000;
  *((uint32_t *)self + 24) = 0;
  if ( v67 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 23),
      v67 & 0x3FFFFFFF);
  v68 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 0x80000000;
  *((uint32_t *)self + 20) = 0;
  if ( v68 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 19),
      224 * (v68 & 0x3FFFFFFF));
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 21) = 0x80000000;
  hkpUnaryAction::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::Destroy_ea185e010  (binary VA: 0x185e010)
// Original: hkpVehicleInstance::~hkpVehicleInstance
// ----------------------------------------------------------------------------
void hkpVehicleInstance::Destroy_ea185e010(hkpVehicleInstance::Self *self)
{
  int v1;
  int v2;

  hkpVehicleInstance::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 148;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::Construct  (binary VA: 0x185e070)
// Original: hkpVehicleInstance::hkpVehicleInstance
// ----------------------------------------------------------------------------
void hkpVehicleInstance::Construct(hkpVehicleInstance::Self *self, hkpRigidBody::Self *a2)
{
  hkpUnaryAction::Construct(self, a2, 0);
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A44E8);
  *((uint32_t *)self + 21) = 0x80000000;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0x80000000;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 18) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::clone  (binary VA: 0x185e160)
// Original: hkpVehicleInstance::clone
// ----------------------------------------------------------------------------
int * hkpVehicleInstance::clone(uint32_t *a1, hkpRigidBody::Self ***a2, int a3)
{
  uint32_t *v3;
  int address;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15; // xmm0_4
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27; // kr00_4
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  __m128 v32;
  int v33; // xmm0_4
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v47;
  int32_t v48; // kr04_4
  int v49;
  int32_t v50; // kr08_4
  int v51;
  int32_t v52; // kr0C_4
  int v53;
  int32_t v54; // kr10_4
  int v55;
  int32_t v56; // kr14_4
  int v57;
  int32_t v58; // kr18_4
  int v59;
  int32_t v60; // kr1C_4
  int v61;
  int32_t v62; // kr20_4
  int v63;
  int32_t v64; // kr24_4
  int v65;
  int32_t v66; // kr28_4
  int i;
  int savedregs;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef hkpRigidBody::Self *_g4_t_v75;
  typedef hkpRigidBody::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef uint32_t *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint32_t *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint32_t *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef uint32_t *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef uint32_t _g4_t_v114[10];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v68)) > _g4_s0 ? (4u + sizeof(_g4_t_v68)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v69)) > _g4_s1 ? (8u + sizeof(_g4_t_v69)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v70)) > _g4_s2 ? (12u + sizeof(_g4_t_v70)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v71)) > _g4_s3 ? (16u + sizeof(_g4_t_v71)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v72)) > _g4_s4 ? (16u + sizeof(_g4_t_v72)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v73)) > _g4_s5 ? (20u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v74)) > _g4_s6 ? (20u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v75)) > _g4_s7 ? (24u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v76)) > _g4_s8 ? (24u + sizeof(_g4_t_v76)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v77)) > _g4_s9 ? (28u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v78)) > _g4_s10 ? (28u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v79)) > _g4_s11 ? (32u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v80)) > _g4_s12 ? (32u + sizeof(_g4_t_v80)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v81)) > _g4_s13 ? (36u + sizeof(_g4_t_v81)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v82)) > _g4_s14 ? (36u + sizeof(_g4_t_v82)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v83)) > _g4_s15 ? (40u + sizeof(_g4_t_v83)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v84)) > _g4_s16 ? (40u + sizeof(_g4_t_v84)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v85)) > _g4_s17 ? (44u + sizeof(_g4_t_v85)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v86)) > _g4_s18 ? (44u + sizeof(_g4_t_v86)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v87)) > _g4_s19 ? (48u + sizeof(_g4_t_v87)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v88)) > _g4_s20 ? (48u + sizeof(_g4_t_v88)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v89)) > _g4_s21 ? (52u + sizeof(_g4_t_v89)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v90)) > _g4_s22 ? (52u + sizeof(_g4_t_v90)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v91)) > _g4_s23 ? (56u + sizeof(_g4_t_v91)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v92)) > _g4_s24 ? (56u + sizeof(_g4_t_v92)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v93)) > _g4_s25 ? (60u + sizeof(_g4_t_v93)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v94)) > _g4_s26 ? (60u + sizeof(_g4_t_v94)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v95)) > _g4_s27 ? (64u + sizeof(_g4_t_v95)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v96)) > _g4_s28 ? (64u + sizeof(_g4_t_v96)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v97)) > _g4_s29 ? (68u + sizeof(_g4_t_v97)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v98)) > _g4_s30 ? (68u + sizeof(_g4_t_v98)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v99)) > _g4_s31 ? (72u + sizeof(_g4_t_v99)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v100)) > _g4_s32 ? (72u + sizeof(_g4_t_v100)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v101)) > _g4_s33 ? (76u + sizeof(_g4_t_v101)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v102)) > _g4_s34 ? (76u + sizeof(_g4_t_v102)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v103)) > _g4_s35 ? (80u + sizeof(_g4_t_v103)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v104)) > _g4_s36 ? (80u + sizeof(_g4_t_v104)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v105)) > _g4_s37 ? (84u + sizeof(_g4_t_v105)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v106)) > _g4_s38 ? (88u + sizeof(_g4_t_v106)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v107)) > _g4_s39 ? (88u + sizeof(_g4_t_v107)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v108)) > _g4_s40 ? (92u + sizeof(_g4_t_v108)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v109)) > _g4_s41 ? (96u + sizeof(_g4_t_v109)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v110)) > _g4_s42 ? (96u + sizeof(_g4_t_v110)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v111)) > _g4_s43 ? (100u + sizeof(_g4_t_v111)) : _g4_s43,
    _g4_s45 = (100u + sizeof(_g4_t_v112)) > _g4_s44 ? (100u + sizeof(_g4_t_v112)) : _g4_s44,
    _g4_s46 = (104u + sizeof(_g4_t_v113)) > _g4_s45 ? (104u + sizeof(_g4_t_v113)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v114)) > _g4_s46 ? (108u + sizeof(_g4_t_v114)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 4u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 16u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 16u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 20u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 20u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 28u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 28u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 32u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 40u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 48u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 52u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 52u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 60u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 64u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 64u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 68u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 68u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 72u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 76u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 80u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 80u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 84u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 88u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 88u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 92u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 96u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 96u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 100u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 100u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 104u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 108u);

  v114[6] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v79 = a1;
  v71 = a3;
  v75 = **a2;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, hkpRigidBody::Self *, int, uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                148,
                v68,
                v69,
                v70,
                v71,
                v73,
                v75,
                v77,
                v79,
                v81,
                v83,
                v85,
                v87,
                v89,
                v91,
                v93,
                v95,
                v97,
                v99,
                v101,
                v103,
                v105,
                v106,
                v108,
                v109,
                v111,
                v113,
                v114[0],
                v114[1],
                v114[2],
                v114[3],
                v114[4],
                v114[5]);
  v112 = v5;
  hkpVehicleInstance::Construct((hkpVehicleInstance::Self *)v5, v76);
  v5[2] = v3[2];
  v5[3] = v3[3];
  v5[4] = v3[4];
  hkStringPtr::opAssign((hkStringPtr::Self *)(v5 + 5), (const hkStringPtr::Self *)(v3 + 5));
  v5[6] = v3[6];
  v5[7] = v3[7];
  v5[8] = v3[8];
  v5[9] = v3[9];
  v5[10] = v3[10];
  v5[11] = v3[11];
  v5[12] = v3[12];
  v5[13] = v3[13];
  v5[14] = v3[14];
  v5[15] = v3[15];
  v5[16] = v3[16];
  v5[17] = v3[17];
  v5[18] = v3[18];
  v6 = v5[20];
  v7 = v3[20];
  v78 = v7;
  if ( v7 <= v6 )
    v6 = v3[20];
  v74 = v6;
  v8 = v5[21] & 0x3FFFFFFF;
  if ( v7 > v8 )
  {
    v9 = 2 * v8;
    savedregs = 224;
    if ( v9 < v7 )
      v9 = v7;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v113,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v5 + 19,
      v9,
      savedregs);
  }
  v10 = *(uint32_t **)(v80 + 76);
  v11 = (uint32_t *)v5[19];
  if ( v74 > 0 )
  {
    v82 = v11 + 4;
    v90 = v11 + 44;
    v12 = 0;
    v100 = v10 + 4;
    v13 = v10 + 44;
    v104 = v11 + 20;
    v92 = v10 + 20;
    v102 = v11 + 24;
    v88 = v10 + 24;
    v98 = v11 + 32;
    v86 = v10 + 32;
    v96 = v11 + 36;
    v84 = v10 + 36;
    v94 = v11 + 40;
    v14 = v10 + 40;
    do
    {
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v82[v12] = v100[v12];
      v82[v12 + 1] = v100[v12 + 1];
      v82[v12 + 2] = v100[v12 + 2];
      v82[v12 + 3] = v100[v12 + 3];
      v11[8] = v10[8];
      v11[9] = v10[9];
      v11[10] = v10[10];
      v11[11] = v10[11];
      v11[12] = v10[12];
      v11[13] = v10[13];
      v11[14] = v10[14];
      v11[15] = v10[15];
      v11[16] = v10[16];
      v11[17] = v10[17];
      v104[v12] = v92[v12];
      v104[v12 + 1] = v92[v12 + 1];
      v104[v12 + 2] = v92[v12 + 2];
      v104[v12 + 3] = v92[v12 + 3];
      v102[v12] = v88[v12];
      v102[v12 + 1] = v88[v12 + 1];
      v102[v12 + 2] = v88[v12 + 2];
      v102[v12 + 3] = v88[v12 + 3];
      v11[28] = v10[28];
      v98[v12] = v86[v12];
      v98[v12 + 1] = v86[v12 + 1];
      v98[v12 + 2] = v86[v12 + 2];
      v98[v12 + 3] = v86[v12 + 3];
      v96[v12] = v84[v12];
      v96[v12 + 1] = v84[v12 + 1];
      v96[v12 + 2] = v84[v12 + 2];
      v96[v12 + 3] = v84[v12 + 3];
      v94[v12] = v14[v12];
      v94[v12 + 1] = v14[v12 + 1];
      v94[v12 + 2] = v14[v12 + 2];
      v94[v12 + 3] = v14[v12 + 3];
      v90[v12] = v13[v12];
      v90[v12 + 1] = v13[v12 + 1];
      v90[v12 + 2] = v13[v12 + 2];
      v90[v12 + 3] = v13[v12 + 3];
      v11[48] = v10[48];
      v12 += 56;
      v15 = v10[49];
      v10 += 56;
      v11[49] = v15;
      v11 += 56;
      *(v11 - 6) = *(v10 - 6);
      *(v11 - 5) = *(v10 - 5);
      *(v11 - 4) = *(v10 - 4);
      *(v11 - 3) = *(v10 - 3);
      *(v11 - 2) = *(v10 - 2);
    }
    while ( v12 != 56 * v74 );
    v10 = *(uint32_t **)(v80 + 76);
    v11 = (uint32_t *)v112[19];
  }
  if ( v78 - v74 > 0 )
  {
    v16 = 0;
    v17 = &v10[56 * v74];
    do
    {
      v18 = &v17[v16];
      v19 = &v11[56 * v74 + v16];
      v16 += 56;
      std::memcpy(v19, v18, 224);
    }
    while ( v16 != 56 * (v78 - v74) );
  }
  v112[20] = v78;
  v112[22] = *(uint32_t *)(v80 + 88);
  v20 = v112[25];
  v21 = *(uint32_t *)(v80 + 96);
  if ( (v20 & 0x3FFFFFFF) >= v21 )
  {
    v22 = v112[23];
  }
  else
  {
    if ( v20 >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v112[23],
        v20 & 0x3FFFFFFF);
      v21 = *(uint32_t *)(v80 + 96);
    }
    v114[0] = v21;
    v22 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v114);
    v112[25] = v114[0];
    v112[23] = v22;
    v21 = *(uint32_t *)(v80 + 96);
  }
  v23 = 0;
  v112[24] = v21;
  v24 = *(uint32_t *)(v80 + 92);
  if ( v21 > 0 )
  {
    do
    {
      *(uint8_t *)(v22 + v23) = *(uint8_t *)(v24 + v23);
      ++v23;
    }
    while ( v23 != v21 );
  }
  v112[26] = *(uint32_t *)(v80 + 104);
  *((uint8_t *)v112 + 108) = *(uint8_t *)(v80 + 108);
  v25 = v112[34];
  v112[28] = *(uint32_t *)(v80 + 112);
  v112[29] = *(uint32_t *)(v80 + 116);
  v112[30] = *(uint32_t *)(v80 + 120);
  v112[31] = *(uint32_t *)(v80 + 124);
  v26 = *(uint32_t *)(v80 + 132);
  if ( (v25 & 0x3FFFFFFF) >= v26 )
  {
    v28 = *(uint32_t *)(v80 + 132);
    v110 = v112[32];
  }
  else
  {
    if ( v25 >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v112[32],
        4 * v25);
      v26 = *(uint32_t *)(v80 + 132);
    }
    v114[0] = 4 * v26;
    v110 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v114);
    v27 = v114[0];
    v112[32] = v110;
    v112[34] = v27 / 4;
    v28 = *(uint32_t *)(v80 + 132);
  }
  v112[33] = v28;
  v29 = *(uint32_t *)(v80 + 128);
  if ( (int)v28 > 0 )
  {
    if ( (v110 >= v29 + 16 || v29 >= v110 + 16) && v28 > 0xB )
    {
      v30 = 0;
      v31 = 0;
      v107 = 4 * (v28 >> 2);
      do
      {
        ++v31;
        v32 = _mm_loadh_ps((const double *)(v29 + v30 + 8));
        _mm_storel_ps((double *)(v110 + v30), v32);
        _mm_storeh_ps((double *)(v110 + v30 + 8), v32);
        v30 += 16;
      }
      while ( v31 < v28 >> 2 );
      if ( v28 != v107 )
      {
        *(uint32_t *)(v110 + 16 * (v28 >> 2)) = *(uint32_t *)(v29 + 16 * (v28 >> 2));
        if ( v107 + 1 < (int)v28 )
        {
          *(uint32_t *)(v110 + 4 * (v107 + 1)) = *(uint32_t *)(v29 + 4 * (v107 + 1));
          if ( v107 + 2 < (int)v28 )
            *(uint32_t *)(v110 + 4 * (v107 + 2)) = *(uint32_t *)(v29 + 4 * (v107 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v28; ++i )
        *(uint32_t *)(v110 + 4 * i) = *(uint32_t *)(v29 + 4 * i);
    }
  }
  *((uint8_t *)v112 + 140) = *(uint8_t *)(v80 + 140);
  *((uint8_t *)v112 + 141) = *(uint8_t *)(v80 + 141);
  *((uint8_t *)v112 + 142) = *(uint8_t *)(v80 + 142);
  v33 = *(uint32_t *)(v80 + 144);
  v112[6] = (int)(uintptr_t)(v76);
  v112[36] = v33;
  v112[2] = 0;
  v112[3] = 0;
  v34 = (*(int (**)(uint32_t, hkpRigidBody::Self *, int))(**(uint32_t **)(v80 + 60) + 36))(
          *(uint32_t *)(v80 + 60),
          v76,
          v72);
  v112[15] = v34;
  *(uint8_t *)(v34 + 8) = 1;
  v112[18] = (*(int (**)(uint32_t, int *))(**(uint32_t **)(v80 + 72) + 24))(*(uint32_t *)(v80 + 72), v112);
  v35 = (*(int (**)(uint32_t))(**(uint32_t **)(v80 + 88) + 20))(*(uint32_t *)(v80 + 88));
  v36 = v112[7];
  v112[22] = v35;
  if ( *(uint16_t *)(v36 + 6) != 0 )
  {
    do
    {
      v66 = *(uint32_t *)(v36 + 4);
      HIWORD(v65) = HIWORD(v66);
      LOWORD(v65) = 0;
    }
    while ( v66 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v36 + 4),
                     v66,
                     v65 | (uint16_t)(v66 + 1)) );
  }
  v37 = v112[8];
  if ( *(uint16_t *)(v37 + 6) != 0 )
  {
    do
    {
      v64 = *(uint32_t *)(v37 + 4);
      HIWORD(v63) = HIWORD(v64);
      LOWORD(v63) = 0;
    }
    while ( v64 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v37 + 4),
                     v64,
                     v63 | (uint16_t)(v64 + 1)) );
  }
  v38 = v112[9];
  if ( *(uint16_t *)(v38 + 6) != 0 )
  {
    do
    {
      v62 = *(uint32_t *)(v38 + 4);
      HIWORD(v61) = HIWORD(v62);
      LOWORD(v61) = 0;
    }
    while ( v62 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v38 + 4),
                     v62,
                     v61 | (uint16_t)(v62 + 1)) );
  }
  v39 = v112[10];
  if ( *(uint16_t *)(v39 + 6) != 0 )
  {
    do
    {
      v60 = *(uint32_t *)(v39 + 4);
      HIWORD(v59) = HIWORD(v60);
      LOWORD(v59) = 0;
    }
    while ( v60 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v39 + 4),
                     v60,
                     v59 | (uint16_t)(v60 + 1)) );
  }
  v40 = v112[11];
  if ( *(uint16_t *)(v40 + 6) != 0 )
  {
    do
    {
      v58 = *(uint32_t *)(v40 + 4);
      HIWORD(v57) = HIWORD(v58);
      LOWORD(v57) = 0;
    }
    while ( v58 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v40 + 4),
                     v58,
                     v57 | (uint16_t)(v58 + 1)) );
  }
  v41 = v112[12];
  if ( *(uint16_t *)(v41 + 6) != 0 )
  {
    do
    {
      v56 = *(uint32_t *)(v41 + 4);
      HIWORD(v55) = HIWORD(v56);
      LOWORD(v55) = 0;
    }
    while ( v56 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v41 + 4),
                     v56,
                     v55 | (uint16_t)(v56 + 1)) );
  }
  v42 = v112[13];
  if ( *(uint16_t *)(v42 + 6) != 0 )
  {
    do
    {
      v54 = *(uint32_t *)(v42 + 4);
      HIWORD(v53) = HIWORD(v54);
      LOWORD(v53) = 0;
    }
    while ( v54 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v42 + 4),
                     v54,
                     v53 | (uint16_t)(v54 + 1)) );
  }
  v43 = v112[14];
  if ( *(uint16_t *)(v43 + 6) != 0 )
  {
    do
    {
      v52 = *(uint32_t *)(v43 + 4);
      HIWORD(v51) = HIWORD(v52);
      LOWORD(v51) = 0;
    }
    while ( v52 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v43 + 4),
                     v52,
                     v51 | (uint16_t)(v52 + 1)) );
  }
  v44 = v112[17];
  if ( *(uint16_t *)(v44 + 6) != 0 )
  {
    do
    {
      v50 = *(uint32_t *)(v44 + 4);
      HIWORD(v49) = HIWORD(v50);
      LOWORD(v49) = 0;
    }
    while ( v50 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v44 + 4),
                     v50,
                     v49 | (uint16_t)(v50 + 1)) );
  }
  if ( *(uint32_t *)(v80 + 64) == 0 )
    return v112;
  v45 = v112[16];
  if ( *(uint16_t *)(v45 + 6) == 0 )
    return v112;
  do
  {
    v48 = *(uint32_t *)(v45 + 4);
    HIWORD(v47) = HIWORD(v48);
    LOWORD(v47) = 0;
  }
  while ( v48 != __sync_val_compare_and_swap(
                   (volatile int32_t *)(v45 + 4),
                   v48,
                   v47 | (uint16_t)(v48 + 1)) );
  return v112;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::setChassis  (binary VA: 0x185eac0)
// Original: hkpVehicleInstance::setChassis
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpVehicleInstance::setChassis(hkpWorld::Self **self, hkpRigidBody::Self *a2)
{
  return hkpUnaryAction::setEntity(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::WheelInfo::init  (binary VA: 0x185eaf0)
// Original: hkpVehicleInstance::WheelInfo::init
// ----------------------------------------------------------------------------
hkpVehicleInstance::WheelInfo::Self * hkpVehicleInstance::WheelInfo::init(hkpVehicleInstance::WheelInfo::Self *self)
{
  *((uint32_t *)self + 7) = 1065353216;
  *((uint32_t *)self + 8) = 0;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = -1;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 47) = 1065353216;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 36) = 1065353216;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::init  (binary VA: 0x185ec70)
// Original: hkpVehicleInstance::init
// ----------------------------------------------------------------------------
int hkpVehicleInstance::init(hkpVehicleInstance::Self *self)
{
  hkpVehicleInstance::Self *v1;
  int v2;
  float v3; // xmm4_4
  float v4; // xmm6_4
  float v5; // xmm5_4
  int v6;
  int v7;
  int v8;
  int v9;
  float v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  hkpVehicleDefaultSimulation::Self *v21;
  int address;
  hkpVehicleDefaultSimulation::Self *v24;
  typedef hkpRigidBody::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_Mass;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef hkpVehicleInstance::Self **_g4_t_v50;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v32)) > _g4_s7 ? (36u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v33)) > _g4_s8 ? (40u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_Mass)) > _g4_s9 ? (44u + sizeof(_g4_t_Mass)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v35)) > _g4_s10 ? (48u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v36)) > _g4_s11 ? (52u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v37)) > _g4_s12 ? (56u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v38)) > _g4_s13 ? (60u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v39)) > _g4_s14 ? (64u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v40)) > _g4_s15 ? (68u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v41)) > _g4_s16 ? (72u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v42)) > _g4_s17 ? (76u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v43)) > _g4_s18 ? (80u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v44)) > _g4_s19 ? (84u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v45)) > _g4_s20 ? (88u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v46)) > _g4_s21 ? (92u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v47)) > _g4_s22 ? (96u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v48)) > _g4_s23 ? (100u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v49)) > _g4_s24 ? (104u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v50)) > _g4_s25 ? (108u + sizeof(_g4_t_v50)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_Mass &Mass = *reinterpret_cast<_g4_t_Mass *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 92u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);

  v50 = &self;
  v1 = self;
  v2 = *((uint32_t *)self + 7);
  if ( *(uint8_t *)(v2 + 192) == 0 )
  {
    G4_VCALL<void>(v2, 20, *((uint32_t *)self + 13) + 8, *((uint32_t *)self + 6));
    v2 = *((uint32_t *)v1 + 7);
  }
  v3 = *(float *)(v2 + 116);
  v4 = *(float *)(v2 + 120);
  v5 = *(float *)(v2 + 124);
  v31 = (float)((float)(fabs(*(float *)(v2 + 48)) * v3) + (float)(fabs(*(float *)(v2 + 64)) * v4))
      + (float)(fabs(*(float *)(v2 + 80)) * v5);
  v32 = (float)((float)(fabs(*(float *)(v2 + 52)) * v3) + (float)(fabs(*(float *)(v2 + 68)) * v4))
      + (float)(fabs(*(float *)(v2 + 84)) * v5);
  v33 = (float)((float)(fabs(*(float *)(v2 + 56)) * v3) + (float)(fabs(*(float *)(v2 + 72)) * v4))
      + (float)(fabs(*(float *)(v2 + 88)) * v5);
  Mass = hkpMotion::getMass((hkpMotion::Self *)(*((uint32_t *)v1 + 6) + 224));
  v25 = *((hkpRigidBody::Self **)v1 + 6);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v36 = v31 * Mass;
  v47 = 0;
  v41 = v32 * Mass;
  v46 = v33 * Mass;
  hkpRigidBody::setInertiaLocal(v25, (const hkMatrix3f::Self *)&v36);
  v6 = *((uint32_t *)v1 + 7);
  v7 = *((uint32_t *)v1 + 21) & 0x3FFFFFFF;
  v8 = *(char *)(v6 + 32);
  if ( v8 <= v7 )
  {
    *((uint32_t *)v1 + 20) = v8;
    if ( v8 <= 0 )
      goto LABEL_10;
  }
  else
  {
    v9 = 2 * v7;
    if ( v9 < v8 )
      v9 = *(char *)(v6 + 32);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v35,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v1 + 19,
      v9,
      224);
    *((uint32_t *)v1 + 20) = v8;
  }
  v10 = 0.0;
  v11 = 0;
  do
  {
    Mass = v10;
    hkpVehicleInstance::WheelInfo::init((hkpVehicleInstance::WheelInfo::Self *)(*((uint32_t *)v1 + 19) + LODWORD(v10)));
    ++v11;
    LODWORD(v10) = LODWORD(Mass) + 224;
  }
  while ( *((uint32_t *)v1 + 20) > v11 );
  v6 = *((uint32_t *)v1 + 7);
LABEL_10:
  v12 = *(char *)(v6 + 32);
  v13 = *((uint32_t *)v1 + 25) & 0x3FFFFFFF;
  if ( v12 <= v13 )
  {
    *((uint32_t *)v1 + 24) = v12;
    if ( v12 <= 0 )
      goto LABEL_17;
  }
  else
  {
    v14 = 2 * v13;
    if ( v14 < v12 )
      v14 = *(char *)(v6 + 32);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v35,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v1 + 23,
      v14,
      1);
    *((uint32_t *)v1 + 24) = v12;
  }
  v15 = 0;
  do
    *(uint8_t *)(*((uint32_t *)v1 + 23) + v15++) = 0;
  while ( *((uint32_t *)v1 + 24) > v15 );
  v6 = *((uint32_t *)v1 + 7);
LABEL_17:
  *((uint32_t *)v1 + 26) = 0;
  *((uint32_t *)v1 + 30) = 0;
  *((uint32_t *)v1 + 31) = 0;
  v16 = *(char *)(v6 + 32);
  v17 = *((uint32_t *)v1 + 34) & 0x3FFFFFFF;
  if ( v16 <= v17 )
  {
    *((uint32_t *)v1 + 33) = v16;
    if ( v16 <= 0 )
      goto LABEL_23;
  }
  else
  {
    v18 = 2 * v17;
    if ( v18 < v16 )
      v18 = v16;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v35,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v1 + 32,
      v18,
      4);
    *((uint32_t *)v1 + 33) = v16;
  }
  v19 = 0;
  do
    *(uint32_t *)(*((uint32_t *)v1 + 32) + 4 * v19++) = 0;
  while ( *((uint32_t *)v1 + 33) > v19 );
LABEL_23:
  v20 = *((uint32_t *)v1 + 15);
  *((uint32_t *)v1 + 28) = 0;
  *((uint32_t *)v1 + 29) = 0;
  *((uint8_t *)v1 + 140) = 0;
  *((uint8_t *)v1 + 141) = 0;
  *((uint8_t *)v1 + 142) = 0;
  *((uint32_t *)v1 + 36) = 0;
  G4_VCALL<void>(v20, 20, v1, v26, v27, v28, v29, v30, COERCE_FLOAT(LODWORD(v31)), COERCE_FLOAT(LODWORD(v32)), COERCE_FLOAT(LODWORD(v33)), COERCE_FLOAT(LODWORD(Mass)), v35, COERCE_FLOAT(LODWORD(v36)), v37, v38, v39, v40, COERCE_FLOAT(LODWORD(v41)), v42, v43, v44, v45, COERCE_FLOAT(LODWORD(v46)), v47, v48, v49);
  *(uint8_t *)(*((uint32_t *)v1 + 15) + 8) = 1;
  v21 = *((hkpVehicleDefaultSimulation::Self **)v1 + 18);
  if ( v21 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v24 = (hkpVehicleDefaultSimulation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)address + 44),
                                           84);
    hkpVehicleDefaultSimulation::Construct(v24);
    *((uint32_t *)v1 + 18) = (uint32_t)(uintptr_t)(v24);
    v21 = v24;
  }
  return G4_VCALL<int>(v21, 20, v1);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateBeforeCollisionDetection  (binary VA: 0x185f030)
// Original: hkpVehicleInstance::updateBeforeCollisionDetection
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateBeforeCollisionDetection(hkpVehicleInstance::Self *self)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  float *v6;
  int v7;
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  uint64_t v11; // rax
  int v12;
  uint32_t *v13;
  hkTransformf::Self *i;
  int v16;
  int *v17;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v17 = address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TtUpdateBeforeCD");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  v5 = 0;
  for ( i = (hkTransformf::Self *)(*((uint32_t *)self + 6) + 240); *(char *)(*((uint32_t *)self + 7) + 32) > v5; v6[27] = v10 )
  {
    v6 = (float *)(*((uint32_t *)self + 19) + 224 * v5);
    v16 = 48 * v5;
    hkVector4f::setRotatedDir(
      (hkVector4f::Self *)(v6 + 32),
      i,
      (const hkVector4f::Self *)(*(uint32_t *)(*((uint32_t *)self + 13) + 8) + 48 * v5 + 16));
    hkVector4f::setTransformedPos(
      (hkVector4f::Self *)(v6 + 20),
      i,
      (const hkVector4f::Self *)(48 * v5 + *(uint32_t *)(*((uint32_t *)self + 13) + 8)));
    v7 = 5 * v5++;
    v8 = *(float *)(*(uint32_t *)(*((uint32_t *)self + 13) + 8) + v16 + 32)
       + *(float *)(*(uint32_t *)(*((uint32_t *)self + 7) + 140) + 8 * v7);
    v6[24] = (float)(v6[32] * v8) + v6[20];
    v6[25] = (float)(v6[33] * v8) + v6[21];
    v9 = (float)(v6[34] * v8) + v6[22];
    v10 = (float)(v8 * v6[35]) + v6[23];
    v6[26] = v9;
  }
  (*(void (**)(uint32_t, hkpVehicleInstance::Self *))(**((uint32_t **)self + 15) + 32))(*((uint32_t *)self + 15), self);
  LODWORD(v11) = (uint32_t)(uintptr_t)(v17);
  v12 = *v17;
  v13 = *(uint32_t **)(*v17 + 4);
  if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*v17 + 12) )
  {
    *v13 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v13[1] = v11;
    *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateWheels  (binary VA: 0x185f1c0)
// Original: hkpVehicleInstance::updateWheels
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateWheels(uint32_t *a1, int a2, uint32_t *a3)
{
  int result;
  float v5; // xmm5_4
  int v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  float v14; // xmm2_4
  int v15;
  __m128i v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  __m128i v19;
  typedef const hkMatrix3f::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);

  result = a1[7];
  if ( *(char *)(result + 32) > 0 )
  {
    v22 = 0;
    v20 = (const hkMatrix3f::Self *)(a1[6] + 240);
    do
    {
      v11 = a1[19] + 224 * v22;
      *(uint32_t *)(v11 + 112) = a3[18];
      v12 = (uint32_t *)(a1[19] + 224 * v22);
      v21 = v11;
      *v12 = *a3;
      v12[1] = a3[1];
      v12[2] = a3[2];
      v12[3] = a3[3];
      v12[4] = a3[4];
      v12[5] = a3[5];
      v12[6] = a3[6];
      v12[7] = a3[7];
      v13 = 224 * v22;
      *(uint32_t *)(a1[19] + v13 + 32) = a3[8];
      *(uint32_t *)(a1[19] + v13 + 36) = a3[9];
      *(uint32_t *)(a1[19] + v13 + 40) = a3[10];
      *(uint32_t *)(a1[19] + v13 + 44) = a3[11];
      *(uint32_t *)(a1[19] + v13 + 48) = a3[12];
      *(uint32_t *)(a1[19] + v13 + 52) = a3[13];
      *(uint32_t *)(a1[19] + v13 + 56) = a3[14];
      *(uint32_t *)(a1[19] + v13 + 60) = a3[15];
      *(uint32_t *)(a1[19] + v13 + 64) = a3[16];
      *(uint32_t *)(a1[19] + v13 + 68) = a3[17];
      v14 = 0.5 * *(float *)(a1[32] + 4 * v22);
      v15 = *(uint32_t *)(a1[13] + 8) + 48 * v22;
g4_m128_raw(v16) = *(unsigned int *)(v15 + 16);
      *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) * v14;
      v17 = *(float *)(v15 + 20) * v14;
      v18 = v14 * *(float *)(v15 + 24);
      v19 = v16;
      *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16))
                                              + (float)(v17 * v17))
                                      + (float)(v18 * v18))
                              + 1.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
      {
        v5 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v19);
        v6 = ((_mm_cvtsi128_si32(v19) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v19) >> 1));
        v7 = (float)(*(float *)&v6 * 1.5)
           - (float)((float)(v5 * *(float *)&v6) * (float)(*(float *)&v6 * *(float *)&v6));
        v8 = (float)(v7 * 1.5) - (float)((float)(v5 * v7) * (float)(v7 * v7));
        v9 = (float)(v8 * 1.5) - (float)((float)(v5 * v8) * (float)(v8 * v8));
      }
      else
      {
        v9 = 0.0;
      }
      *(float *)(v21 + 188) = v9;
      a3 += 24;
      *(float *)(v21 + 176) = *(float *)g4_m128_ptr<int32_t>(v16) * v9;
      *(float *)(v21 + 180) = v17 * v9;
      *(float *)(v21 + 184) = v18 * v9;
      v10 = (uint32_t *)a1[7];
      *(uint32_t *)(v21 + 144) = v10[20];
      *(uint32_t *)(v21 + 148) = v10[21];
      *(uint32_t *)(v21 + 152) = v10[22];
      *(uint32_t *)(v21 + 156) = v10[23];
      hkVector4f::setRotatedDir((hkVector4f::Self *)v23, (const hkQuaternionf::Self *)(v21 + 176), (const hkVector4f::Self *)(v21 + 144));
      hkVector4f::setRotatedDir((hkVector4f::Self *)(v21 + 160), v20, (const hkVector4f::Self *)v23);
      ++v22;
      result = *(char *)(a1[7] + 32);
    }
    while ( result > v22 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateDriverInput  (binary VA: 0x185f4d0)
// Original: hkpVehicleInstance::updateDriverInput
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateDriverInput(int a1, int a2, int a3)
{
  int result;

  *(uint8_t *)(a3 + 13) = *(uint8_t *)(a1 + 108);
  (*(void (**)(uint32_t, int, int, uint32_t, int))(**(uint32_t **)(a1 + 32) + 20))(
    *(uint32_t *)(a1 + 32),
    a2,
    a1,
    *(uint32_t *)(a1 + 88),
    a3);
  result = *(uint8_t *)(a3 + 13);
  *(uint8_t *)(a1 + 108) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateSteering  (binary VA: 0x185f520)
// Original: hkpVehicleInstance::updateSteering
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateSteering(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4; // xmm0_4
  int v5;
  int v6; // xmm0_4
  int v7;
  int v8;
  int v9; // xmm1_4
  int v10;
  int v11;
  int v12;
  int v13;
  int result;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[41];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v22)) > _g4_s7 ? (28u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  v23[37] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a1[30];
  v20 = v23;
  v18 = v4;
  v5 = a3;
  v6 = a1[31];
  v21 = 0;
  v7 = a1[33];
  v22 = -2147483616;
  v8 = v7;
  v9 = a2;
  v19 = v6;
  if ( v7 > 32 )
  {
    v10 = 64;
    if ( v7 > 63 )
      v10 = v7;
    v16 = v7;
    v15 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v17,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v20,
      v10,
      4);
    v8 = v3[33];
    v7 = v16;
  }
  v21 = v7;
  v11 = 0;
  if ( v8 > 0 )
  {
    do
    {
      v20[v11] = *(uint32_t *)(v3[32] + 4 * v11);
      ++v11;
    }
    while ( v3[33] > v11 );
  }
  G4_VCALL<void>(v3[9], 20, v9, v3, v5, &v18, v15, v16, v17);
  v12 = v3[33];
  v3[30] = v18;
  v13 = 0;
  v3[31] = v19;
  if ( v12 > 0 )
  {
    do
    {
      *(uint32_t *)(v3[32] + 4 * v13) = v20[v13];
      ++v13;
    }
    while ( v3[33] > v13 );
  }
  result = v22;
  v21 = 0;
  if ( v22 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v20,
             4 * v22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateTransmission  (binary VA: 0x185f6d0)
// Original: hkpVehicleInstance::updateTransmission
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateTransmission(int a1, int a2, int a3)
{
  int result;

  *(uint8_t *)(a3 + 12) = *(uint8_t *)(*(uint32_t *)(a1 + 28) + 32);
  *(uint8_t *)(a3 + 13) = *(uint8_t *)(a1 + 140);
  *(uint8_t *)(a3 + 14) = *(uint8_t *)(a1 + 141);
  *(uint8_t *)(a3 + 15) = *(uint8_t *)(a1 + 142);
  *(uint32_t *)(a3 + 16) = *(uint32_t *)(a1 + 144);
  (*(void (**)(uint32_t, int, int, int))(**(uint32_t **)(a1 + 44) + 20))(*(uint32_t *)(a1 + 44), a2, a1, a3);
  *(uint8_t *)(a1 + 140) = *(uint8_t *)(a3 + 13);
  *(uint8_t *)(a1 + 141) = *(uint8_t *)(a3 + 14);
  result = *(uint8_t *)(a3 + 15);
  *(uint8_t *)(a1 + 142) = result;
  *(uint32_t *)(a1 + 144) = *(uint32_t *)(a3 + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateEngine  (binary VA: 0x185f770)
// Original: hkpVehicleInstance::updateEngine
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateEngine(int a1, int a2, int a3, int a4)
{
  int result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v6 = *(uint32_t *)(a1 + 116);
  v5 = *(uint32_t *)(a1 + 112);
  result = (*(int (**)(uint32_t, int, int, int, int, int *))(**(uint32_t **)(a1 + 40) + 20))(
             *(uint32_t *)(a1 + 40),
             a2,
             a1,
             a3,
             a4,
             &v5);
  *(uint32_t *)(a1 + 116) = v6;
  *(uint32_t *)(a1 + 112) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateBrake  (binary VA: 0x185f7e0)
// Original: hkpVehicleInstance::updateBrake
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateBrake(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int result;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);

  v4 = *(uint32_t *)(a1 + 96);
  v5 = a4[37] & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    v14 = *(uint32_t *)(a1 + 96);
    if ( v6 < v4 )
      v6 = *(uint32_t *)(a1 + 96);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4 + 35, v6, 1);
    v4 = v14;
  }
  v7 = a4[2];
  a4[36] = v4;
  v8 = v7 & 0x3FFFFFFF;
  v9 = *(uint32_t *)(a1 + 96);
  if ( v9 > v8 )
  {
    v10 = 2 * v8;
    if ( v10 < v9 )
      v10 = *(uint32_t *)(a1 + 96);
    v14 = *(uint32_t *)(a1 + 96);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v10, 4);
    v9 = v14;
  }
  a4[1] = v9;
  for ( i = 0; *(uint32_t *)(a1 + 96) > i; ++i )
    *(uint8_t *)(a4[35] + i) = *(uint8_t *)(*(uint32_t *)(a1 + 92) + i);
  a4[46] = *(uint32_t *)(a1 + 104);
  (*(void (**)(uint32_t, int, int, int, int *, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(a1 + 48)
                                                                                                + 20))(
    *(uint32_t *)(a1 + 48),
    a2,
    a1,
    a3,
    a4,
    v13,
    v14,
    v15[0],
    v15[1],
    v15[2],
    v15[3]);
  for ( result = 0; a4[36] > result; ++result )
    *(uint8_t *)(*(uint32_t *)(a1 + 92) + result) = *(uint8_t *)(a4[35] + result);
  *(uint32_t *)(a1 + 104) = a4[46];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateSuspension  (binary VA: 0x185f930)
// Original: hkpVehicleInstance::updateSuspension
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateSuspension(int a1, int a2, int a3, uint32_t *a4)
{
  return (*(int (**)(uint32_t, int, int, int, uint32_t))(**(uint32_t **)(a1 + 52) + 20))(
           *(uint32_t *)(a1 + 52),
           a2,
           a1,
           a3,
           *a4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateAerodynamics  (binary VA: 0x185f970)
// Original: hkpVehicleInstance::updateAerodynamics
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateAerodynamics(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a1 + 56) + 20))(*(uint32_t *)(a1 + 56), a2, a1, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::updateComponents  (binary VA: 0x185f9b0)
// Original: hkpVehicleInstance::updateComponents
// ----------------------------------------------------------------------------
int hkpVehicleInstance::updateComponents(uint32_t *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6)
{
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  hkLifoAllocator::Self **v10;
  hkLifoAllocator::Self *v11;
  char *v12;
  signed int v13;
  int v14;
  int v15;
  int v16;
  int i;
  float v18; // xmm0_4
  signed int v19;
  hkLifoAllocator::Self *v20;
  int v21;
  uint32_t *v22;
  uint64_t v23; // rax
  int result;
  typedef hkLifoAllocator::Self **_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[8];
  typedef char *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v29)) > _g4_s4 ? (32u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v30)) > _g4_s5 ? (40u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v31)) > _g4_s6 ? (64u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v32)) > _g4_s7 ? (68u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v33)) > _g4_s8 ? (72u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v34)) > _g4_s9 ? (76u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (204u + sizeof(_g4_t_v35)) > _g4_s10 ? (204u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (208u + sizeof(_g4_t_v36)) > _g4_s11 ? (208u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (212u + sizeof(_g4_t_v37)) > _g4_s12 ? (212u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (216u + sizeof(_g4_t_v38)) > _g4_s13 ? (216u + sizeof(_g4_t_v38)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 204u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 208u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 212u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 216u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v26 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtUpdateComponents");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  v31 = &v34;
  v35 = &v38;
  v32 = 0;
  v33 = -2147483616;
  v36 = 0;
  v37 = -2147483616;
  v10 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v11 = *v10;
  v25 = v10;
  v12 = *((char **)*v10 + 3);
  v13 = (4 * *(char *)(a1[7] + 32) + 127) & 0xFFFFFF80;
  if ( v13 <= *((uint32_t *)v11 + 2) && (unsigned int)(uintptr_t)(&v12[v13]) <= *((uint32_t *)v11 + 4) )
    *((uint32_t *)v11 + 3) = (uint32_t)(uintptr_t)(&v12[v13]);
  else
    v12 = (char *)hkLifoAllocator::allocateFromNewSlab(v11, (4 * *(char *)(a1[7] + 32) + 127) & 0xFFFFFF80);
  v30 = v12;
  v27 = *(uint32_t *)(a2 + 8);
  hkpVehicleInstance::updateWheels(a1, v27, a3);
  hkpVehicleInstance::updateDriverInput((int)(uintptr_t)(a1), v27, (int)(uintptr_t)(v28));
  hkpVehicleInstance::updateSteering(a1, v27, (int)(uintptr_t)(v28));
  hkpVehicleInstance::updateTransmission((int)(uintptr_t)(a1), v27, (int)(uintptr_t)(v29));
  hkpVehicleInstance::updateEngine((int)(uintptr_t)(a1), v27, (int)(uintptr_t)(v28), (int)(uintptr_t)(v29));
  hkpVehicleInstance::updateBrake((int)(uintptr_t)(a1), v27, (int)(uintptr_t)(v28), (int *)&v31);
  hkpVehicleInstance::updateSuspension((int)(uintptr_t)(a1), v27, (int)(uintptr_t)(a3), a5);
  hkpVehicleInstance::updateAerodynamics((int)(uintptr_t)(a1), v27, a4);
  v14 = a1[7];
  v15 = *(char *)(v14 + 32);
  if ( v15 > 0 )
  {
    v16 = 0;
    for ( i = 0; i < v15; ++i )
    {
      v18 = (float)(*(float *)&v31[i] + *(float *)&v30[4 * i]) / *(float *)(*(uint32_t *)(v14 + 140) + v16);
      v16 += 40;
      *(float *)(*a6 + 4 * i) = v18;
      v14 = a1[7];
      v15 = *(char *)(v14 + 32);
    }
  }
  v19 = (4 * v15 + 127) & 0xFFFFFF80;
  v20 = *v25;
  if ( v19 > *((uint32_t *)*v25 + 2) || *((char **)v20 + 3) != &v30[v19] || v30 == *((char **)v20 + 5) )
    hkLifoAllocator::slowBlockFree(v20, v30, (4 * v15 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v20 + 3) = (uint32_t)(uintptr_t)(v30);
  v21 = *v26;
  v22 = *(uint32_t **)(*v26 + 4);
  if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(*v26 + 12) )
  {
    *v22 = (uint32_t)(uintptr_t)("Et");
    v23 = __rdtsc();
    v22[1] = v23;
    *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
  }
  v36 = 0;
  if ( v37 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v35,
      v37 & 0x3FFFFFFF);
  result = v33;
  v35 = nullptr;
  v37 = 0x80000000;
  v32 = 0;
  if ( v33 >= 0 )
    return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v31,
             4 * v33);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::simulateVehicle  (binary VA: 0x185fce0)
// Original: hkpVehicleInstance::simulateVehicle
// ----------------------------------------------------------------------------
int hkpVehicleInstance::simulateVehicle(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *address;
  int v7;
  int *v8;
  uint32_t *v9;
  uint64_t v10; // rax
  uint64_t v11; // rax
  int v12;
  uint32_t *v13;
  uint32_t v15[10];

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v8 = address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("TtSimulateVehicle");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  v15[0] = a3;
  v15[1] = a4;
  v15[2] = a5;
  LODWORD(v11) = (*(int (**)(uint32_t, int, int, uint32_t *, int))(**(uint32_t **)(a1 + 72) + 36))(
                   *(uint32_t *)(a1 + 72),
                   a1,
                   a2,
                   v15,
                   a6);
  v12 = *v8;
  v13 = *(uint32_t **)(*v8 + 4);
  if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*v8 + 12) )
  {
    *v13 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v13[1] = v11;
    *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::stepVehicleUsingWheelCollideOutput  (binary VA: 0x185fd90)
// Original: hkpVehicleInstance::stepVehicleUsingWheelCollideOutput
// ----------------------------------------------------------------------------
int hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(uint32_t *a1, int a2, uint32_t *a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  int result;
  typedef int *_g4_t_v13;
  typedef uint8_t _g4_t_v14[32];
  typedef int *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v15)) > _g4_s2 ? (48u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v16)) > _g4_s3 ? (52u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v17)) > _g4_s4 ? (56u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v18)) > _g4_s5 ? (60u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (128u + sizeof(_g4_t_v19)) > _g4_s6 ? (128u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (132u + sizeof(_g4_t_v20)) > _g4_s7 ? (132u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (136u + sizeof(_g4_t_v21)) > _g4_s8 ? (136u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (140u + sizeof(_g4_t_v22)) > _g4_s9 ? (140u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 128u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 132u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 136u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 140u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v13 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtDoVehicle");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = a1[7];
  v19 = &v22;
  v17 = -2147483632;
  v21 = -2147483632;
  v8 = *(char *)(v7 + 32);
  v15 = &v18;
  v16 = v8;
  v20 = v8;
  hkpVehicleInstance::updateComponents(a1, a2, a3, (int)(uintptr_t)(v14), (uint32_t *)(&v15), (uint32_t *)(&v19));
  hkpVehicleInstance::simulateVehicle((int)(uintptr_t)(a1), a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v19), 0);
  v9 = *v13;
  v10 = *(uint32_t **)(*v13 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v13 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v11 = __rdtsc();
    v10[1] = v11;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  v20 = 0;
  if ( v21 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v19,
      4 * v21);
  result = v17;
  v19 = nullptr;
  v21 = 0x80000000;
  v16 = 0;
  if ( v17 >= 0 )
    return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v15,
             4 * v17);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::stepVehicle  (binary VA: 0x185ff20)
// Original: hkpVehicleInstance::stepVehicle
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpVehicleInstance::stepVehicle(hkpVehicleInstance::Self *a1, int a2)
{
  signed int v2;
  signed int v3;
  char *v4;
  hkLifoAllocator::Self *result;
  int address;
  hkLifoAllocator::Self *v7;
  int v8;
  int v9;
  int v10;
  hkLifoAllocator::Self **v11;

  hkpVehicleInstance::updateBeforeCollisionDetection(a1);
  v2 = *(char *)(*((uint32_t *)a1 + 7) + 32);
  if ( *(uint8_t *)(*((uint32_t *)a1 + 7) + 32) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v7 = *(hkLifoAllocator::Self **)address;
    v10 = address;
    v2 = (96 * v2 + 127) & 0xFFFFFF80;
    v8 = *(uint32_t *)(*(uint32_t *)address + 12);
    if ( v2 <= *((uint32_t *)v7 + 2) && (unsigned int)(v2 + v8) <= *((uint32_t *)v7 + 4) )
      *((uint32_t *)v7 + 3) = v2 + v8;
    else
      v8 = hkLifoAllocator::allocateFromNewSlab(v7, v2);
    v3 = v2;
    v11 = (hkLifoAllocator::Self **)v10;
    v4 = (char *)v8;
  }
  else
  {
    v11 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v3 = 0;
    v4 = nullptr;
  }
  v9 = v3;
  (*(void (**)(uint32_t, uint32_t, hkpVehicleInstance::Self *, char *))(**((uint32_t **)a1 + 15) + 24))(
    *((uint32_t *)a1 + 15),
    *(uint32_t *)(a2 + 8),
    a1,
    v4);
  hkpVehicleInstance::stepVehicleUsingWheelCollideOutput((uint32_t *)(a1), a2, (uint32_t *)(v4));
  result = *v11;
  if ( *((uint32_t *)*v11 + 2) < v2 || *((char **)result + 3) != &v4[v9] || v4 == *((char **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, v4, v9);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::applyAction  (binary VA: 0x1860030)
// Original: hkpVehicleInstance::applyAction
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpVehicleInstance::applyAction(hkpVehicleInstance::Self *a1, int a2)
{
  return hkpVehicleInstance::stepVehicle(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSimulation::staticClass  (binary VA: 0x1860060)
// Original: hkpVehicleSimulation::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleSimulation::staticClass()
{
  return &hkpVehicleSimulationClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleAerodynamics::Destroy  (binary VA: 0x1860110)
// Original: hkpVehicleAerodynamics::~hkpVehicleAerodynamics
// ----------------------------------------------------------------------------
void hkpVehicleAerodynamics::Destroy(hkpVehicleAerodynamics::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleAerodynamics::Destroy_ea1860170  (binary VA: 0x1860170)
// Original: hkpVehicleAerodynamics::~hkpVehicleAerodynamics
// ----------------------------------------------------------------------------
void hkpVehicleAerodynamics::Destroy_ea1860170(hkpVehicleAerodynamics::Self *self)
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
// Function: hkpVehicleDefaultAerodynamics::staticClass  (binary VA: 0x18601d0)
// Original: hkpVehicleDefaultAerodynamics::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultAerodynamics::staticClass()
{
  return &hkpVehicleDefaultAerodynamicsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleVelocityDamper::Destroy  (binary VA: 0x18602c0)
// Original: hkpVehicleVelocityDamper::~hkpVehicleVelocityDamper
// ----------------------------------------------------------------------------
void hkpVehicleVelocityDamper::Destroy(hkpVehicleVelocityDamper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleVelocityDamper::Destroy_ea1860320  (binary VA: 0x1860320)
// Original: hkpVehicleVelocityDamper::~hkpVehicleVelocityDamper
// ----------------------------------------------------------------------------
void hkpVehicleVelocityDamper::Destroy_ea1860320(hkpVehicleVelocityDamper::Self *self)
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
// Function: hkpVehicleDefaultVelocityDamper::staticClass  (binary VA: 0x1860380)
// Original: hkpVehicleDefaultVelocityDamper::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultVelocityDamper::staticClass()
{
  return &hkpVehicleDefaultVelocityDamperClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSimulation::addToWorld  (binary VA: 0x1860470)
// Original: hkpVehicleSimulation::addToWorld
// ----------------------------------------------------------------------------
void hkpVehicleSimulation::addToWorld()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSimulation::removeFromWorld  (binary VA: 0x1860480)
// Original: hkpVehicleSimulation::removeFromWorld
// ----------------------------------------------------------------------------
void hkpVehicleSimulation::removeFromWorld()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSimulation::Destroy  (binary VA: 0x1860490)
// Original: hkpVehicleSimulation::~hkpVehicleSimulation
// ----------------------------------------------------------------------------
void hkpVehicleSimulation::Destroy(hkpVehicleSimulation::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSimulation::Destroy_ea1860520  (binary VA: 0x1860520)
// Original: hkpVehicleSimulation::~hkpVehicleSimulation
// ----------------------------------------------------------------------------
void hkpVehicleSimulation::Destroy_ea1860520(hkpVehicleSimulation::Self *self)
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
// Function: hkpVehiclePerWheelSimulation::WheelData::staticClass  (binary VA: 0x18605f0)
// Original: hkpVehiclePerWheelSimulation::WheelData::staticClass
// ----------------------------------------------------------------------------
void * hkpVehiclePerWheelSimulation::WheelData::staticClass()
{
  return &hkpVehiclePerWheelSimulationWheelDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::staticClass  (binary VA: 0x1860610)
// Original: hkpVehiclePerWheelSimulation::staticClass
// ----------------------------------------------------------------------------
void * hkpVehiclePerWheelSimulation::staticClass()
{
  return &hkpVehiclePerWheelSimulationClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::init  (binary VA: 0x18607b0)
// Original: hkpVehicleDefaultSimulation::init
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::init(hkpVehicleDefaultSimulation::Self *self, hkpVehicleInstance::Self *a2)
{
  int v2;
  int v3;
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6;
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // xmm0_4
  int v18;
  int *v19;
  int v20; // xmm0_4
  int v21;
  int v22;
  float *v23;
  float v24; // xmm0_4
  float *v25;
  float *v26;
  int address;
  volatile int32_t *v28;
  volatile int32_t *v29;
  int v30;
  int32_t v31; // kr00_4
  int32_t v32;
  int32_t v33; // ett
  void *retaddr;
  volatile int32_t *v79;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
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
  typedef uint32_t _g4_t_v52[8];
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef uint32_t _g4_t_v69[12];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v38)) > _g4_s3 ? (24u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v43)) > _g4_s8 ? (44u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v44)) > _g4_s9 ? (48u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v45)) > _g4_s10 ? (52u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v46)) > _g4_s11 ? (56u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v47)) > _g4_s12 ? (60u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v48)) > _g4_s13 ? (64u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v49)) > _g4_s14 ? (68u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v50)) > _g4_s15 ? (72u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v51)) > _g4_s16 ? (76u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v52)) > _g4_s17 ? (80u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v53)) > _g4_s18 ? (112u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v54)) > _g4_s19 ? (116u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v55)) > _g4_s20 ? (120u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v56)) > _g4_s21 ? (124u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v57)) > _g4_s22 ? (128u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v58)) > _g4_s23 ? (132u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v59)) > _g4_s24 ? (136u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v60)) > _g4_s25 ? (140u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v61)) > _g4_s26 ? (144u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v62)) > _g4_s27 ? (148u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v63)) > _g4_s28 ? (152u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v64)) > _g4_s29 ? (156u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v65)) > _g4_s30 ? (160u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (164u + sizeof(_g4_t_v66)) > _g4_s31 ? (164u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v67)) > _g4_s32 ? (168u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v68)) > _g4_s33 ? (172u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v69)) > _g4_s34 ? (176u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (224u + sizeof(_g4_t_v70)) > _g4_s35 ? (224u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (228u + sizeof(_g4_t_v71)) > _g4_s36 ? (228u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (232u + sizeof(_g4_t_v72)) > _g4_s37 ? (232u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v73)) > _g4_s38 ? (236u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (240u + sizeof(_g4_t_v74)) > _g4_s39 ? (240u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (244u + sizeof(_g4_t_v75)) > _g4_s40 ? (244u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (248u + sizeof(_g4_t_v76)) > _g4_s41 ? (248u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (252u + sizeof(_g4_t_v77)) > _g4_s42 ? (252u + sizeof(_g4_t_v77)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 112u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 116u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 136u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 140u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 144u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 148u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 152u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 156u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 160u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 164u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 168u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 172u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 176u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 224u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 228u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 232u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 236u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 240u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 244u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 248u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 252u);

  v2 = *((uint32_t *)a2 + 6);
  v3 = *((uint32_t *)a2 + 7);
  v4 = *(float *)(v3 + 176);
  v5 = *(float *)(v2 + 240) * v4;
  v53 = *(uint32_t *)(v2 + 368);
  v54 = *(uint32_t *)(v2 + 372);
  v6 = *(uint32_t *)(v2 + 376);
  v40 = v5;
  v55 = v6;
  v7 = *(float *)(v2 + 244) * v4;
  v56 = *(uint32_t *)(v2 + 380);
  v41 = v7;
  v8 = *(float *)(v2 + 248) * v4;
  v9 = v4 * *(float *)(v2 + 252);
  v42 = v8;
  v43 = v9;
  v10 = *(float *)(v3 + 180);
  v44 = *(float *)(v2 + 256) * v10;
  v45 = *(float *)(v2 + 260) * v10;
  v11 = *(float *)(v2 + 264) * v10;
  v12 = v10 * *(float *)(v2 + 268);
  v46 = v11;
  v47 = v12;
  v13 = *(float *)(v3 + 184);
  v48 = *(float *)(v2 + 272) * v13;
  v49 = *(float *)(v2 + 276) * v13;
  v14 = *(float *)(v2 + 280) * v13;
  v15 = v13 * *(float *)(v2 + 284);
  v50 = v14;
  v51 = v15;
  hkMatrix3f::setMulInverse((hkMatrix3f::Self *)v69, (const hkMatrix3f::Self *)&v40, (const hkRotationf::Self *)(v2 + 240));
  v70 = *(uint32_t *)(v2 + 428);
  v65 = fabs(*(float *)(v3 + 48));
  v66 = fabs(*(float *)(v3 + 52));
  v67 = fabs(*(float *)(v3 + 56));
  v68 = fabs(*(float *)(v3 + 60));
  v61 = fabs(*(float *)(v3 + 64));
  v62 = fabs(*(float *)(v3 + 68));
  v63 = fabs(*(float *)(v3 + 72));
  v64 = fabs(*(float *)(v3 + 76));
  v57 = fabs(*(float *)(v3 + 80));
  v58 = fabs(*(float *)(v3 + 84));
  v59 = fabs(*(float *)(v3 + 88));
  v16 = fabs(*(float *)(v3 + 92));
  v17 = *(uint32_t *)(v3 + 128);
  v71 = 0;
  v60 = v16;
  v72 = 0;
  v75 = v17;
  if ( *(char *)(v3 + 32) > 0 )
  {
    v38 = 0;
    v18 = 0;
    v39 = 0;
    v36 = *((uint32_t *)a2 + 13);
    do
    {
      ++v39;
      v19 = (int *)(*(uint32_t *)(v3 + 140) + v18);
      v20 = *v19;
      v37 = *((char *)v19 + 36);
      v21 = v38;
      v38 += 48;
      v22 = v37 + 36;
      v52[v22 + 3] = v20;
      v23 = (float *)(*(uint32_t *)(v36 + 8) + v21);
      v24 = v23[8];
      v25 = (float *)&v52[4 * v37];
      *v25 = (float)(v23[4] * v24) + *v23;
      v25[1] = (float)(v23[5] * v24) + v23[1];
      v25[2] = (float)(v23[6] * v24) + v23[2];
      v25[3] = (float)(v24 * v23[7]) + v23[3];
      v26 = (float *)(*(uint32_t *)(v3 + 140) + v18);
      v18 += 40;
      *(float *)&v52[v22 + 1] = (float)(*v26 * v26[1]) + *(float *)&v52[v37 + 37];
    }
    while ( *(char *)(v3 + 32) > v39 );
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v28 = (volatile int32_t *)(*(int (**)(uint32_t, int, int, int, uint32_t *, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                     *(uint32_t *)(*(uint32_t *)address + 44),
                                     216,
                                     v35,
                                     v36,
                                     v52,
                                     v37,
                                     v38,
                                     v39,
                                     COERCE_FLOAT(LODWORD(v40)),
                                     COERCE_FLOAT(LODWORD(v41)),
                                     COERCE_FLOAT(LODWORD(v42)),
                                     COERCE_FLOAT(LODWORD(v43)),
                                     COERCE_FLOAT(LODWORD(v44)),
                                     COERCE_FLOAT(LODWORD(v45)),
                                     COERCE_FLOAT(LODWORD(v46)),
                                     COERCE_FLOAT(LODWORD(v47)),
                                     COERCE_FLOAT(LODWORD(v48)),
                                     COERCE_FLOAT(LODWORD(v49)),
                                     COERCE_FLOAT(LODWORD(v50)),
                                     COERCE_FLOAT(LODWORD(v51)),
                                     v52[0],
                                     v52[1],
                                     v52[2],
                                     v52[3],
                                     v52[4],
                                     v52[5],
                                     v52[6],
                                     v52[7],
                                     v53,
                                     v54,
                                     v55,
                                     v56,
                                     COERCE_FLOAT(LODWORD(v57)),
                                     COERCE_FLOAT(LODWORD(v58)),
                                     COERCE_FLOAT(LODWORD(v59)),
                                     COERCE_FLOAT(LODWORD(v60)),
                                     COERCE_FLOAT(LODWORD(v61)),
                                     COERCE_FLOAT(LODWORD(v62)),
                                     COERCE_FLOAT(LODWORD(v63)),
                                     COERCE_FLOAT(LODWORD(v64)),
                                     COERCE_FLOAT(LODWORD(v65)),
                                     COERCE_FLOAT(LODWORD(v66)),
                                     COERCE_FLOAT(LODWORD(v67)),
                                     COERCE_FLOAT(LODWORD(v68)),
                                     v69[0],
                                     v69[1],
                                     v69[2],
                                     v69[3],
                                     v69[4],
                                     v69[5],
                                     v69[6],
                                     v69[7],
                                     v69[8],
                                     v69[9],
                                     v69[10],
                                     v69[11],
                                     v70,
                                     v71,
                                     v72,
                                     v73,
                                     v74,
                                     v75,
                                     v76,
                                     v77);
  *((uint32_t *)v28 + 1) = -65535;
  *v28 = (volatile int32_t)((uint32_t)(uintptr_t)&off_209DD00);
  v29 = *((volatile int32_t **)self + 20);
  if ( v29 != nullptr && v28 != v29 && *((uint16_t *)v29 + 3) != 0 )
  {
    v79 = v28;
    do
    {
      v31 = *((uint32_t *)v29 + 1);
      HIWORD(v30) = HIWORD(v31);
      LOWORD(v30) = 0;
      v32 = v30 | (uint16_t)(v31 - 1);
      v33 = v31;
    }
    while ( v33 != __sync_val_compare_and_swap(v29 + 1, v33, v32) );
    v28 = v79;
    if ( (uint16_t)v32 == 0 )
      G4_VCALL<void>(v29, 16);
  }
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v28);
  return ((hkVehicleFrictionDescriptionInitValues(retaddr, v28)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::Destroy  (binary VA: 0x1860bb0)
// Original: hkpVehicleDefaultSimulation::~hkpVehicleDefaultSimulation
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSimulation::Destroy(hkpVehicleDefaultSimulation::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 20);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4748);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  *((uint32_t *)self + 20) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::Destroy_ea1860c30  (binary VA: 0x1860c30)
// Original: hkpVehicleDefaultSimulation::~hkpVehicleDefaultSimulation
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSimulation::Destroy_ea1860c30(hkpVehicleDefaultSimulation::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  v1 = *((uint32_t *)self + 20);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4748);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  *((uint32_t *)self + 20) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 84;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::Construct  (binary VA: 0x1860cf0)
// Original: hkpVehicleDefaultSimulation::hkpVehicleDefaultSimulation
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSimulation::Construct(hkpVehicleDefaultSimulation::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4748);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::clone  (binary VA: 0x1860d80)
// Original: hkpVehicleDefaultSimulation::clone
// ----------------------------------------------------------------------------
hkpVehicleDefaultSimulation::Self * hkpVehicleDefaultSimulation::clone(hkpVehicleDefaultSimulation::Self *self)
{
  int address;
  hkpVehicleDefaultSimulation::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  hkpVehicleDefaultSimulation::Self *v12;
  hkpVehicleDefaultSimulation::Self *v13;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpVehicleDefaultSimulation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                        *(uint32_t *)(*(uint32_t *)address + 44),
                                        84);
  hkpVehicleDefaultSimulation::Construct(v2);
  v3 = *((uint32_t *)self + 20);
  if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
  {
    v12 = v2;
    do
    {
      v5 = *(uint32_t *)(v3 + 4);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v5, v4 | (uint16_t)(v5 + 1)) );
    v2 = v12;
  }
  v6 = *((uint32_t *)v2 + 20);
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    v13 = v2;
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    v2 = v13;
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  *((uint32_t *)v2 + 20) = *((uint32_t *)self + 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::handleFixedGroundAccum  (binary VA: 0x1860e50)
// Original: hkpVehicleDefaultSimulation::handleFixedGroundAccum
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::handleFixedGroundAccum(int a1, int a2, int a3)
{
  *(uint32_t *)(a3 + 8) = 0;
  *(uint32_t *)(a3 + 48) = 0;
  *(uint8_t *)(a3 + 1) = 0;
  *(uint32_t *)(a3 + 64) = 1065353216;
  *(uint32_t *)(a3 + 68) = 0;
  *(uint32_t *)(a3 + 72) = 0;
  *(uint32_t *)(a3 + 76) = 0;
  *(uint32_t *)(a3 + 80) = 0;
  *(uint32_t *)(a3 + 52) = 0;
  *(uint8_t *)a3 = 1;
  *(uint32_t *)(a3 + 56) = 0;
  *(uint32_t *)(a3 + 60) = 0;
  *(uint32_t *)(a3 + 16) = 0;
  *(uint32_t *)(a3 + 20) = 0;
  *(uint32_t *)(a3 + 24) = 0;
  *(uint32_t *)(a3 + 28) = 0;
  *(uint32_t *)(a3 + 32) = 0;
  *(uint32_t *)(a3 + 36) = 0;
  *(uint32_t *)(a3 + 40) = 0;
  *(uint32_t *)(a3 + 44) = 0;
  *(uint32_t *)(a3 + 112) = 0;
  *(uint32_t *)(a3 + 116) = 0;
  *(uint32_t *)(a3 + 120) = 0;
  *(uint32_t *)(a3 + 124) = 0;
  *(uint32_t *)(a3 + 84) = 1065353216;
  *(uint32_t *)(a3 + 88) = 0;
  *(uint32_t *)(a3 + 92) = 0;
  *(uint32_t *)(a3 + 96) = 0;
  *(uint32_t *)(a3 + 100) = 0;
  *(uint32_t *)(a3 + 104) = 1065353216;
  *(uint32_t *)(a3 + 108) = 0;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::getAxleParamsFromWheel  (binary VA: 0x1860f40)
// Original: hkpVehicleDefaultSimulation::getAxleParamsFromWheel
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::getAxleParamsFromWheel(int a1, uint32_t *a2, int a3, float a4, float a5, float a6, int a7)
{
  int result;
  int v8;
  float *v9;
  float v10; // xmm6_4
  float v11; // xmm4_4
  __m128i v12;
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128i v16;
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  int v20;
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm6_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  bool v33;
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  bool v37;
  float v38; // xmm0_4
  float v39;
  float v40;
  float v41;

  result = a7;
  v8 = 40 * a3;
  v9 = (float *)(a2[19] + 224 * a3);
  v10 = v9[42];
  v11 = v9[41];
  v39 = v9[5];
g4_m128_raw(v12) = LODWORD(v39);
  v40 = v9[6];
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)(v39 * v10) - (float)(v40 * v11);
  v13 = v9[40];
  v41 = v9[4];
  v14 = (float)(v40 * v13) - (float)(v41 * v10);
  v15 = (float)(v41 * v11) - (float)(v39 * v13);
  v16 = v12;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v14 * v14))
                          + (float)(v15 * v15);
  if ( *(float *)g4_m128_ptr<int32_t>(v16) < 0.00000011920929f )
  {
    v17 = v9[32];
g4_m128_raw(v12) = *((unsigned int *)v9 + 41);
    v18 = v9[34];
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)(v11 * v18) - (float)(v9[33] * v10);
    v14 = (float)(v10 * v17) - (float)(v18 * v13);
    v15 = (float)(v13 * v9[33]) - (float)(v11 * v17);
    v16 = v12;
    *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v14 * v14))
                            + (float)(v15 * v15);
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
  {
    v24 = 0.0;
    v23 = 0.0;
  }
  else
  {
    v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
    v20 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
    v21 = (float)(*(float *)&v20 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v20)
                * (float)(*(float *)&v20 * *(float *)&v20));
    v22 = (float)(v21 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v21) * (float)(v21 * v21));
    v23 = (float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22));
    v24 = 0.0 * v23;
  }
  v25 = *(float *)g4_m128_ptr<int32_t>(v12) * v23;
  v26 = v14 * v23;
  v27 = v23 * v15;
  v28 = 1.0 / (float)*(char *)(*(uint32_t *)(a2[7] + 152) + *(char *)(*(uint32_t *)(a2[7] + 140) + 40 * a3 + 36));
  v29 = v9[8] * v28;
  *(float *)a7 = (float)(*v9 * v28) + *(float *)a7;
  *(float *)(a7 + 4) = (float)(v9[1] * v28) + *(float *)(a7 + 4);
  *(float *)(a7 + 8) = (float)(v9[2] * v28) + *(float *)(a7 + 8);
  *(float *)(a7 + 12) = (float)(v9[3] * v28) + *(float *)(a7 + 12);
  *(float *)(a7 + 16) = (float)((float)(v40 * v26) - (float)(v39 * v27)) + *(float *)(a7 + 16);
  *(float *)(a7 + 20) = (float)((float)(v41 * v27) - (float)(v40 * v25)) + *(float *)(a7 + 20);
  v30 = v39 * v25;
  v31 = v25 + *(float *)(a7 + 32);
  v32 = (float)(v30 - (float)(v41 * v26)) + *(float *)(a7 + 24);
  *(float *)(a7 + 28) = *(float *)(a7 + 28) + 0.0;
  *(float *)(a7 + 24) = v32;
  *(float *)(a7 + 32) = v31;
  v33 = *(uint8_t *)(a7 + 80) == 0;
  v34 = v27 + *(float *)(a7 + 40);
  v35 = v24 + *(float *)(a7 + 44);
  *(float *)(a7 + 36) = v26 + *(float *)(a7 + 36);
  *(float *)(a7 + 40) = v34;
  *(float *)(a7 + 44) = v35;
  *(float *)(a7 + 56) = (float)(*(float *)(*(uint32_t *)(a2[7] + 140) + v8 + 12) * v29) + *(float *)(a7 + 56);
  *(float *)(a7 + 60) = (float)(*(float *)(*(uint32_t *)(a2[7] + 140) + v8 + 16) * v29) + *(float *)(a7 + 60);
  v36 = v29 * *(float *)(*(uint32_t *)(a2[7] + 140) + v8 + 20);
  v37 = true;
  *(float *)(a7 + 68) = a5 + *(float *)(a7 + 68);
  v38 = a4 + *(float *)(a7 + 72);
  *(float *)(a7 + 64) = v36 + *(float *)(a7 + 64);
  *(float *)(a7 + 72) = v38;
  if ( v33 )
    v37 = *(uint8_t *)(a2[23] + a3) != 0;
  *(uint8_t *)(a7 + 80) = v37;
  *(float *)(a7 + 76) = (float)((float)(v28 * *(float *)(*(uint32_t *)(a2[7] + 140) + v8 + 24)) * a6)
                      + *(float *)(a7 + 76);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::prepareAxleParams  (binary VA: 0x1861310)
// Original: hkpVehicleDefaultSimulation::prepareAxleParams
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::prepareAxleParams(int a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, float *a8, int a9, int a10)
{
  int v10;
  __m128i v11;
  int v12; // xmm2_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  int v22;
  float v23; // xmm3_4
  float *v24;
  __m128i v25;
  float v26; // xmm0_4
  float v27; // xmm5_4
  float v28; // xmm2_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm7_4
  int v32;
  float v33; // xmm4_4
  int v34;
  int v35;
  int v36;
  int v37;
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm3_4
  float v41; // xmm6_4
  int v42;
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm7_4
  __m128i v47;
  float v48; // xmm4_4
  float v49; // xmm3_4
  __m128i v50;
  int v51;
  float v52; // xmm2_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm5_4
  float v56; // xmm4_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  __m128i v59;
  float v60; // xmm4_4
  float v61; // xmm3_4
  __m128i v62;
  int v63;
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm5_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  int v71;
  int v72;
  int v73; // xmm4_4
  float v74; // xmm0_4
  int v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef float *_g4_t_v84;
  typedef float *_g4_t_v85;
  typedef float *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef float _g4_t_v88;
  typedef int _g4_t_v89;
  typedef float *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef uint32_t *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef float _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint32_t *_g4_t_v102;
  typedef int _g4_t_v103[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v76)) > _g4_s0 ? (4u + sizeof(_g4_t_v76)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v77)) > _g4_s1 ? (8u + sizeof(_g4_t_v77)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v78)) > _g4_s2 ? (12u + sizeof(_g4_t_v78)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v79)) > _g4_s3 ? (20u + sizeof(_g4_t_v79)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v80)) > _g4_s4 ? (24u + sizeof(_g4_t_v80)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v81)) > _g4_s5 ? (28u + sizeof(_g4_t_v81)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v82)) > _g4_s6 ? (32u + sizeof(_g4_t_v82)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v83)) > _g4_s7 ? (36u + sizeof(_g4_t_v83)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v84)) > _g4_s8 ? (40u + sizeof(_g4_t_v84)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v85)) > _g4_s9 ? (44u + sizeof(_g4_t_v85)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v86)) > _g4_s10 ? (48u + sizeof(_g4_t_v86)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v87)) > _g4_s11 ? (52u + sizeof(_g4_t_v87)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v88)) > _g4_s12 ? (52u + sizeof(_g4_t_v88)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v89)) > _g4_s13 ? (56u + sizeof(_g4_t_v89)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v90)) > _g4_s14 ? (60u + sizeof(_g4_t_v90)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v91)) > _g4_s15 ? (64u + sizeof(_g4_t_v91)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v92)) > _g4_s16 ? (68u + sizeof(_g4_t_v92)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v93)) > _g4_s17 ? (72u + sizeof(_g4_t_v93)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v94)) > _g4_s18 ? (76u + sizeof(_g4_t_v94)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v95)) > _g4_s19 ? (80u + sizeof(_g4_t_v95)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v96)) > _g4_s20 ? (84u + sizeof(_g4_t_v96)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v97)) > _g4_s21 ? (92u + sizeof(_g4_t_v97)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v98)) > _g4_s22 ? (96u + sizeof(_g4_t_v98)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v99)) > _g4_s23 ? (100u + sizeof(_g4_t_v99)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v100)) > _g4_s24 ? (104u + sizeof(_g4_t_v100)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v101)) > _g4_s25 ? (104u + sizeof(_g4_t_v101)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v102)) > _g4_s26 ? (108u + sizeof(_g4_t_v102)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v103)) > _g4_s27 ? (112u + sizeof(_g4_t_v103)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 4u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 12u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 20u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 52u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 52u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 56u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 60u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 64u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 68u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 72u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 76u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 80u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 84u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 92u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 96u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 100u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 108u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);

  v10 = a2[6];
g4_m128_raw(v11) = *(unsigned int *)(v10 + 432);
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11))
                                  + (float)(*(float *)(v10 + 436) * *(float *)(v10 + 436)))
                          + (float)(*(float *)(v10 + 440) * *(float *)(v10 + 440));
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
  {
    v100 = 0.0;
  }
  else
  {
    v12 = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
    v13 = (float)(*(float *)&v12 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * *(float *)&v12)
                * (float)(*(float *)&v12 * *(float *)&v12));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v13) * (float)(v13 * v13));
    v100 = *(float *)g4_m128_ptr<int32_t>(v11)
         * (float)((float)(1.5 * v14)
                 - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v14) * (float)(v14 * v14)));
  }
  v15 = a2[7];
  if ( *(char *)(v15 + 32) > 0 )
  {
    v16 = 0;
    do
    {
      v17 = *(uint32_t *)(v15 + 140);
      v18 = *(uint32_t *)(a2[19] + 224 * v16 + 36);
      v19 = *(char *)(v17 + 40 * v16 + 36);
      if ( v18 != 0 )
      {
        v102 = &a6[v19];
        if ( *v102 == 0 || *(float *)(*v102 + 428) > *(float *)(v18 + 428) )
          *v102 = v18;
      }
      hkpVehicleDefaultSimulation::getAxleParamsFromWheel(
        a1,
        a2,
        v16,
        *(float *)(*a5 + 4 * v16),
        *(float *)(*a4 + 4 * v16),
        v100,
        (int)(uintptr_t)(&a7[24 * v19]));
      v15 = a2[7];
      ++v16;
    }
    while ( *(char *)(v15 + 32) > v16 );
  }
  a7[48] = *(uint32_t *)(v15 + 112);
  result = a2[7];
  if ( *(int *)(result + 156) > 0 )
  {
    v95 = a7;
    v77 = a9 + 48;
    v90 = (float *)(a9 + 48);
    v82 = a9 + 48;
    v99 = a9;
    v93 = a7 + 4;
    v89 = a10 + 32;
    v83 = a10 + 32;
    v76 = a9 + 64;
    v84 = (float *)(a9 + 64);
    v96 = a10;
    v94 = a9 + 80;
    v91 = a9 + 96;
    v86 = (float *)(a9 + 96);
    v85 = (float *)(a9 + 80);
    v21 = 0;
    v22 = 0;
    v101 = 0;
    v92 = a7 + 8;
    do
    {
g4_m128_raw(v47) = *(unsigned int *)((char *)v93 + v21);
      v48 = *(float *)((char *)v93 + v21 + 4);
      v50 = v47;
      v49 = *(float *)((char *)v93 + v21 + 8);
      *(float *)g4_m128_ptr<int32_t>(v50) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v47) * *(float *)g4_m128_ptr<int32_t>(v47)) + (float)(v48 * v48))
                              + (float)(v49 * v49);
      if ( *(float *)g4_m128_ptr<int32_t>(v50) <= 0.0 )
      {
        v54 = 0.0;
      }
      else
      {
        v51 = ((_mm_cvtsi128_si32(v50) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v50) >> 1));
        v52 = (float)(*(float *)&v51 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v50)) * *(float *)&v51)
                    * (float)(*(float *)&v51 * *(float *)&v51));
        v53 = (float)(v52 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v50)) * v52) * (float)(v52 * v52));
        v54 = (float)(1.5 * v53) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v50)) * v53) * (float)(v53 * v53));
      }
      v55 = *(float *)g4_m128_ptr<int32_t>(v47) * v54;
      v56 = v48 * v54;
      v57 = v49 * v54;
      v58 = v54 * *(float *)((char *)v93 + v21 + 12);
      *(float *)((char *)v93 + v21) = v55;
      *(float *)((char *)v93 + v21 + 4) = v56;
      *(float *)((char *)v93 + v21 + 8) = v57;
      *(float *)((char *)v93 + v21 + 12) = v58;
g4_m128_raw(v59) = *(unsigned int *)((char *)v92 + v21);
      v60 = *(float *)((char *)v92 + v21 + 4);
      v62 = v59;
      v61 = *(float *)((char *)v92 + v21 + 8);
      *(float *)g4_m128_ptr<int32_t>(v62) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v59) * *(float *)g4_m128_ptr<int32_t>(v59)) + (float)(v60 * v60))
                              + (float)(v61 * v61);
      if ( *(float *)g4_m128_ptr<int32_t>(v62) <= 0.0 )
      {
        v66 = 0.0;
      }
      else
      {
        v63 = ((_mm_cvtsi128_si32(v62) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v62) >> 1));
        v64 = (float)(*(float *)&v63 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v62)) * *(float *)&v63)
                    * (float)(*(float *)&v63 * *(float *)&v63));
        v65 = (float)(v64 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v62)) * v64) * (float)(v64 * v64));
        v66 = (float)(1.5 * v65) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v62)) * v65) * (float)(v65 * v65));
      }
      v67 = *(float *)g4_m128_ptr<int32_t>(v59) * v66;
      v68 = v60 * v66;
      v69 = v61 * v66;
      v70 = v66 * *(float *)((char *)v92 + v21 + 12);
      *(float *)((char *)v92 + v21) = v67;
      *(float *)((char *)v92 + v21 + 4) = v68;
      *(float *)((char *)v92 + v21 + 8) = v69;
      *(float *)((char *)v92 + v21 + 12) = v70;
      v71 = a6[v101];
      v95[12] = v99;
      v95[13] = v99;
      if ( v71 != 0 )
      {
        if ( *(uint8_t *)(v71 + 232) == 5 )
        {
          hkpVehicleDefaultSimulation::handleFixedGroundAccum(a1, v71, v99);
        }
        else if ( v101 != 0 && *a6 == v71 )
        {
          v95[12] = a7[12];
          v95[13] = a7[13];
        }
        else
        {
          v103[0] = v71 + 224;
          hkRigidMotionUtilBuildAccumulators(a8, (int)(uintptr_t)(v103), 1, 0, v99);
          v23 = *(float *)(a2[6] + 428);
          v24 = (float *)v103[0];
g4_m128_raw(v25) = *(unsigned int *)(v103[0] + 204);
          if ( *(float *)g4_m128_ptr<int32_t>(v25) > (float)(*(float *)(a2[7] + 136) * v23) )
          {
            v72 = _mm_cvtsi128_si32(v25);
            v73 = (2130706432 - v72) & ((v72 ^ (v72 + 2139095040)) >> 31);
            v98 = v82 - a9;
            v74 = (float)((float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                                * (float)((float)(2.0
                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                                                        * (float)((float)(2.0
                                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                                                                                * *(float *)&v73))
                                                                                * *(float *)&v73)))
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                                                                * *(float *)&v73))
                                                                * *(float *)&v73))))
                                * (float)((float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v25)
                                                                                * *(float *)&v73))
                                                                * *(float *)&v73)))
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)&v73))
                                                * *(float *)&v73)))
                        * v23)
                * *(float *)(a2[7] + 136);
            *(float *)(v98 + a9) = *v90 * v74;
            *(float *)(v98 + a9 + 48 - 44) = v74 * v90[1];
            *(float *)(v98 + a9 + 48 - 40) = v74 * v90[2];
            *(float *)(v98 + a9 + 48 - 36) = v74 * v90[3];
          }
          v26 = v24[27];
          v78 = v21;
          v81 = v24[24] - v24[20];
          v27 = v24[26] - v24[22];
          v28 = v24[42];
          v79 = v26 - v24[23];
          v29 = v24[40] * v26;
          v30 = v24[41];
          v80 = v24[25] - v24[21];
          *(uint8_t *)v96 = *(uint8_t *)v99;
          *(uint8_t *)(v96 + 1) = *(uint8_t *)(v99 + 1);
          v31 = v30 * v26;
          *(uint32_t *)(v96 + 4) = *(uint32_t *)(v99 + 4);
          v32 = a10 + 16;
          v33 = v28 * v26;
          *(uint32_t *)(v96 + 8) = *(uint32_t *)(v99 + 8);
          *(uint32_t *)(a10 + v22 + 16) = *(uint32_t *)(a9 + v22 + 16);
          *(uint32_t *)(v32 + v22 + 4) = *(uint32_t *)(a9 + 16 + v22 + 4);
          *(uint32_t *)(v32 + v22 + 8) = *(uint32_t *)(a9 + 16 + v22 + 8);
          *(uint32_t *)(v32 + v22 + 12) = *(uint32_t *)(a9 + 16 + v22 + 12);
          v97 = v83 - a10;
          *(uint32_t *)(v97 + a10) = *(uint32_t *)(a9 + v22 + 32);
          *(uint32_t *)(v97 + v89 - 28) = *(uint32_t *)(a9 + 32 + v22 + 4);
          *(uint32_t *)(v97 + v89 - 24) = *(uint32_t *)(a9 + 32 + v22 + 8);
          *(uint32_t *)(v97 + v89 - 20) = *(uint32_t *)(a9 + 32 + v22 + 12);
          *(float *)(a10 + v22 + 48) = *v90;
          v34 = a10 + 48;
          *(float *)(v34 + v22 + 4) = v90[1];
          *(float *)(v34 + v22 + 8) = v90[2];
          *(float *)(v34 + v22 + 12) = v90[3];
          v35 = a10 + 64;
          *(float *)(a10 + v22 + 64) = *v84;
          *(float *)(v35 + v22 + 4) = v84[1];
          *(float *)(v35 + v22 + 8) = v84[2];
          *(float *)(v35 + v22 + 12) = v84[3];
          v36 = a10 + 80;
          *(float *)(a10 + v22 + 80) = *v85;
          *(float *)(v36 + v22 + 4) = v85[1];
          *(float *)(v36 + v22 + 8) = v85[2];
          *(float *)(v36 + v22 + 12) = v85[3];
          *(float *)(a10 + v22 + 96) = *v86;
          v37 = a10 + 96;
          *(float *)(v37 + v22 + 4) = v86[1];
          *(float *)(v37 + v22 + 8) = v86[2];
          *(float *)(v37 + v22 + 12) = v86[3];
          v87 = a10 + 112;
          *(uint32_t *)(a10 + v22 + 112) = *(uint32_t *)(a9 + v22 + 112);
          *(uint32_t *)(v87 + v22 + 4) = *(uint32_t *)(a9 + 112 + v22 + 4);
          *(uint32_t *)(v87 + v22 + 8) = *(uint32_t *)(a9 + 112 + v22 + 8);
          *(uint32_t *)(a10 + 112 + v22 + 12) = *(uint32_t *)(a9 + 112 + v22 + 12);
          v95[13] = v96;
          v38 = *v84 * v29;
          *(float *)(v97 + a10) = v38;
          v39 = v84[1] * v29;
          *(float *)(v97 + v89 - 28) = v39;
          v40 = v84[2] * v29;
          *(float *)(v97 + v89 - 24) = v40;
          v41 = v29 * v84[3];
          v42 = v83 - a10;
          v88 = v40;
          *(float *)(v97 + v89 - 20) = v41;
          v43 = (float)(v31 * *v85) + v38;
          *(float *)(v42 + a10) = v43;
          v44 = (float)(v31 * v85[1]) + v39;
          *(float *)(v42 + v89 - 28) = v44;
          v45 = (float)(v31 * v85[2]) + v88;
          *(float *)(v42 + v89 - 24) = v45;
          v46 = (float)(v31 * v85[3]) + v41;
          *(float *)(v42 + v89 - 20) = v46;
          *(float *)(v42 + a10) = (float)(v33 * *v86) + v43;
          *(float *)(v42 + v89 - 28) = (float)(v86[1] * v33) + v44;
          *(float *)(v42 + v89 - 24) = (float)(v86[2] * v33) + v45;
          v21 = v78;
          *(float *)(v42 + v89 - 20) = (float)(v33 * v86[3]) + v46;
          *(float *)(a10 + v22 + 16) = v81 * v26;
          *(float *)(a10 + v22 + 24) = v27 * v26;
          *(float *)(a10 + v22 + 20) = v80 * v26;
          *(float *)(a10 + v22 + 28) = v26 * v79;
        }
      }
      else
      {
        *(uint8_t *)(a9 + v22 + 1) = 0;
        v75 = v82 - a9;
        *(uint8_t *)v99 = 1;
        *(uint32_t *)(v99 + 8) = 0;
        *(uint32_t *)(v75 + a9) = 0;
        *(uint32_t *)(v75 + v77 - 44) = 0;
        *(uint32_t *)(v75 + v77 - 40) = 0;
        *(uint32_t *)(v75 + v77 - 36) = 0;
        *(uint32_t *)(a9 + v22 + 16) = 0;
        *(uint32_t *)(a9 + v22 + 20) = 0;
        *(uint32_t *)(a9 + v22 + 24) = 0;
        *(uint32_t *)(a9 + v22 + 28) = 0;
        *(uint32_t *)(a9 + v22 + 32) = 0;
        *(uint32_t *)(a9 + v22 + 36) = 0;
        *(uint32_t *)(a9 + v22 + 40) = 0;
        *(uint32_t *)(a9 + v22 + 44) = 0;
        *(uint32_t *)(a9 + v22 + 112) = 0;
        *(uint32_t *)(a9 + v22 + 116) = 0;
        *(uint32_t *)(a9 + v22 + 120) = 0;
        *(uint32_t *)(a9 + v22 + 124) = 0;
        *(uint32_t *)(v76 + v22) = 1065353216;
        *(uint32_t *)(v76 + v22 + 4) = 0;
        *(uint32_t *)(v76 + v22 + 8) = 0;
        *(uint32_t *)(v76 + v22 + 12) = 0;
        *(uint32_t *)(v94 + v22) = 0;
        *(uint32_t *)(v94 + v22 + 4) = 1065353216;
        *(uint32_t *)(v94 + v22 + 8) = 0;
        *(uint32_t *)(v94 + v22 + 12) = 0;
        *(uint32_t *)(v91 + v22) = 0;
        *(uint32_t *)(v91 + v22 + 4) = 0;
        *(uint32_t *)(v91 + v22 + 8) = 1065353216;
        *(uint32_t *)(v91 + v22 + 12) = 0;
      }
      ++v101;
      v21 += 96;
      v22 += 128;
      v99 += 128;
      v82 += 128;
      v95 += 24;
      v96 += 128;
      result = a2[7];
      v83 += 128;
      v90 += 32;
      v84 += 32;
      v85 += 32;
      v86 += 32;
    }
    while ( *(uint32_t *)(result + 156) > v101 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::prepareChassisParams  (binary VA: 0x1861f40)
// Original: hkpVehicleDefaultSimulation::prepareChassisParams
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpVehicleDefaultSimulation::prepareChassisParams(int a1, int a2, float *a3, int a4)
{
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int v19; // xmm0_4
  int v20;
  hkVector4f::Self *result;
  typedef int _g4_t_v22;
  typedef float *_g4_t_v23;
  typedef float _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v24)) > _g4_s2 ? (32u + sizeof(_g4_t_v24)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v23 = (float *)(*(uint32_t *)(a2 + 24) + 224);
  hkRigidMotionUtilBuildAccumulators(a3, (int)(uintptr_t)(&v23), 1, 0, a4 + 208);
  v4 = v23[27];
  v5 = v23[24];
  v6 = v23[25];
  v7 = v23[26];
  v24[0] = v23[40] * v4;
  v8 = v4 - v23[23];
  v9 = (float)(v5 - v23[20]) * v4;
  v10 = (float)(v6 - v23[21]) * v4;
  v11 = (float)(v7 - v23[22]) * v4;
  v24[1] = v23[41] * v4;
  v12 = v8 * v4;
  v13 = v23[42] * v4;
  v14 = v4 * v23[43];
  v15 = *(uint32_t **)(a2 + 28);
  v16 = v15[44];
  v24[2] = v13;
  *(uint32_t *)(a4 + 256) = v16;
  v24[3] = v14;
  v17 = v15[45];
  *(uint32_t *)(a4 + 260) = v17;
  v18 = v15[46];
  *(uint32_t *)(a4 + 264) = v18;
  v22 = v15[47];
  *(uint32_t *)(a4 + 268) = v22;
  *(uint8_t *)(a4 + 336) = *(uint8_t *)(a4 + 208);
  *(uint8_t *)(a4 + 337) = *(uint8_t *)(a4 + 209);
  *(uint32_t *)(a4 + 340) = *(uint32_t *)(a4 + 212);
  *(uint32_t *)(a4 + 352) = *(uint32_t *)(a4 + 224);
  *(uint32_t *)(a4 + 356) = *(uint32_t *)(a4 + 228);
  *(uint32_t *)(a4 + 360) = *(uint32_t *)(a4 + 232);
  *(uint32_t *)(a4 + 364) = *(uint32_t *)(a4 + 236);
  *(uint32_t *)(a4 + 368) = *(uint32_t *)(a4 + 240);
  *(uint32_t *)(a4 + 372) = *(uint32_t *)(a4 + 244);
  *(uint32_t *)(a4 + 376) = *(uint32_t *)(a4 + 248);
  *(uint32_t *)(a4 + 380) = *(uint32_t *)(a4 + 252);
  *(uint32_t *)(a4 + 396) = v22;
  *(uint32_t *)(a4 + 400) = *(uint32_t *)(a4 + 272);
  *(uint32_t *)(a4 + 404) = *(uint32_t *)(a4 + 276);
  *(uint32_t *)(a4 + 408) = *(uint32_t *)(a4 + 280);
  v19 = *(uint32_t *)(a4 + 216);
  *(uint32_t *)(a4 + 412) = *(uint32_t *)(a4 + 284);
  v20 = *(uint32_t *)(a4 + 288);
  *(uint32_t *)(a4 + 384) = v16;
  *(uint32_t *)(a4 + 344) = v19;
  *(uint32_t *)(a4 + 388) = v17;
  *(uint32_t *)(a4 + 392) = v18;
  *(uint32_t *)(a4 + 416) = v20;
  *(uint32_t *)(a4 + 420) = *(uint32_t *)(a4 + 292);
  *(uint32_t *)(a4 + 424) = *(uint32_t *)(a4 + 296);
  *(uint32_t *)(a4 + 428) = *(uint32_t *)(a4 + 300);
  *(uint32_t *)(a4 + 432) = *(uint32_t *)(a4 + 304);
  *(uint32_t *)(a4 + 436) = *(uint32_t *)(a4 + 308);
  *(uint32_t *)(a4 + 440) = *(uint32_t *)(a4 + 312);
  *(uint32_t *)(a4 + 444) = *(uint32_t *)(a4 + 316);
  *(uint32_t *)(a4 + 448) = *(uint32_t *)(a4 + 320);
  *(uint32_t *)(a4 + 452) = *(uint32_t *)(a4 + 324);
  *(uint32_t *)(a4 + 456) = *(uint32_t *)(a4 + 328);
  *(uint32_t *)(a4 + 460) = *(uint32_t *)(a4 + 332);
  result = hkVector4f::setRotatedDir((hkVector4f::Self *)(a4 + 368), (const hkMatrix3f::Self *)(a4 + 272), (const hkVector4f::Self *)v24);
  *(float *)(a4 + 352) = v9;
  *(float *)(a4 + 356) = v10;
  *(float *)(a4 + 360) = v11;
  *(float *)(a4 + 364) = v12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::applyAerodynamicDrag  (binary VA: 0x1862240)
// Original: hkpVehicleDefaultSimulation::applyAerodynamicDrag
// ----------------------------------------------------------------------------
float * hkpVehicleDefaultSimulation::applyAerodynamicDrag(int a1, int a2, float *a3, float *a4, float a5)
{
  float *v6;
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm4_4
  float v24;
  float v25;
  float v26;
  float v27;

  v6 = *(float **)(a2 + 24);
  v7 = v6[107];
  v8 = (float)((float)(a3[2] * a5) * v7) + a4[58];
  v9 = (float)((float)(*a3 * a5) * v7) + a4[56];
  v10 = (float)((float)(a3[3] * a5) * v7) + a4[59];
  a4[57] = (float)((float)(a3[1] * a5) * v7) + a4[57];
  a4[58] = v8;
  a4[56] = v9;
  a4[59] = v10;
  v11 = a3[4] * a5;
  v12 = a3[5] * a5;
  v24 = v6[62];
  v13 = v6[64];
  v27 = v6[65];
  v25 = v6[66];
  v14 = v6[68];
  v15 = a5 * a3[6];
  v26 = v6[69];
  v16 = (float)((float)(v11 * v13) + (float)(v27 * v12)) + (float)(v25 * v15);
  v17 = (float)((float)((float)(v11 * v6[60]) + (float)(v6[61] * v12)) + (float)(v24 * v15)) * v6[104];
  v18 = (float)((float)(v11 * v14) + (float)(v12 * v26)) + (float)(v15 * v6[70]);
  v19 = v6[70];
  v20 = v16 * v6[105];
  v21 = v18 * v6[106];
  v22 = (float)((float)(v6[60] * v17) + (float)(v13 * v20)) + (float)(v14 * v21);
  v23 = v6[61] * v17;
  a4[63] = (float)((float)((float)(v6[63] * v17) + (float)(v6[67] * v20)) + (float)(v6[71] * v21)) + a4[63];
  a4[60] = v22 + a4[60];
  a4[61] = (float)((float)(v23 + (float)(v27 * v20)) + (float)(v26 * v21)) + a4[61];
  a4[62] = (float)((float)((float)(v17 * v24) + (float)(v25 * v20)) + (float)(v21 * v19)) + a4[62];
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::applyVelocityDamping  (binary VA: 0x18624a0)
// Original: hkpVehicleDefaultSimulation::applyVelocityDamping
// ----------------------------------------------------------------------------
unsigned int * hkpVehicleDefaultSimulation::applyVelocityDamping(int a1, float a2, unsigned int *a3, float *a4)
{
  unsigned int *result;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  float v8; // xmm6_4
  __m128 v9;
  uint64_t v10; // xmm2_8
  uint64_t v11; // xmm7_8
  __m128 v12;
  __m128 v13;
  result = a3;
g4_m128_raw(v5) = a3[60];
g4_m128_raw(v6) = a3[61];
g4_m128_raw(v7) = a3[62];
  if ( (float)((float)((float)(g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v5, 0)) + (float)(g4_m128_lane<float>(v6, 0) *g4_m128_lane<float>(v6, 0)))
             + (float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v7, 0))) <= (float)(a4[4] * a4[4]) )
    v8 = a2 * a4[2];
  else
    v8 = a2 * a4[3];
g4_m128_raw(v9) = 0x3F800000u;
g4_m128_lane<float>(v9, 0) = 1.0 - v8;
  if ( (float)(1.0 - v8) < 0.0 )
g4_m128_raw(v9) = 0;
  v10 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v7, v9), 0);
  v11 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, G4_BITCAST<__m128>(a3[63])), 0);
g4_m128_lane<uint64_t>(v12, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v5, v6), 0);
g4_m128_lane<uint64_t>(v13, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v9), 0);
g4_m128_lane<uint64_t>(v12, 1) = v11;
g4_m128_lane<uint64_t>(v13, 1) = v10;
  *((__m128 *)a3 + 15) = _mm_mul_ps(v12, v13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::applySuspensionForces  (binary VA: 0x1862560)
// Original: hkpVehicleDefaultSimulation::applySuspensionForces
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::applySuspensionForces(int a1, uint32_t *a2, float a3, uint32_t *a4, int a5, float *a6, uint32_t *a7)
{
  int result;
  int v8;
  float v9; // xmm0_4
  __m128 v10;
  __m128 v11;
  __m128 v12;
  float v13; // xmm0_4
  __m128i m128_i128;
  float v15; // xmm6_4
  int v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  g4_int128_t v19;
  int v20;
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float *v28;
  float v29; // xmm2_4
  float v30; // xmm7_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float *v43;
  float *v44;
  float *v45;
  float v46; // xmm4_4
  float v47; // xmm0_4
  float *v48;
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm4_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm5_4
  float v57; // xmm4_4
  float v58; // xmm6_4
  float v59; // xmm2_4
  float v60; // xmm7_4
  float v61; // xmm1_4
  float v62; // xmm3_4
  float v63; // xmm5_4
  float v64; // xmm0_4
  float v65; // xmm2_4
  int v66;
  float v67;
  char v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float Mass;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v85;
  float v86;
  float v87;
  int v88;
  float v89;
  int v90;

  result = a2[7];
  v66 = result;
  if ( *(uint8_t *)(result + 32) != 0 )
  {
    v90 = 0;
    do
    {
      v20 = a2[19] + 224 * v90;
      v88 = *(uint32_t *)(v20 + 36);
      v21 = *(float *)(*a4 + 4 * v90);
      v22 = *(float *)(v20 + 20) * (float)(a3 * v21);
      v23 = *(float *)(v20 + 24) * (float)(a3 * v21);
      v86 = *(float *)(v20 + 16) * (float)(a3 * v21);
      v74 = v22;
      v73 = v23;
      v72 = (float)(a3 * v21) * *(float *)(v20 + 28);
      if ( v21 > 0.0 )
      {
        v24 = *(float *)(v20 + 24) * (float)(a3 * v21);
        v25 = *(float *)(a2[6] + 428);
        a6[56] = (float)((float)(*(float *)(v20 + 16) * (float)(a3 * v21)) * v25) + a6[56];
        a6[57] = (float)(v22 * v25) + a6[57];
        v26 = v23 * v25;
        v27 = (float)(v25 * v72) + a6[59];
        a6[58] = v26 + a6[58];
        a6[59] = v27;
        v28 = (float *)a2[6];
        v29 = *(float *)(v20 + 84) - v28[81];
        v30 = *(float *)(v20 + 88) - v28[82];
        v31 = *(float *)(v20 + 80) - v28[80];
        v32 = v23 * v29;
        v33 = v28[60];
        v34 = v32 - (float)(v22 * v30);
        v67 = v28[65];
        v35 = (float)(v30 * v86) - (float)(v24 * v31);
        v36 = (float)(v31 * v22) - (float)(v29 * v86);
        v71 = v28[61];
        v82 = v28[62];
        v69 = v28[64];
        v79 = v28[66];
        v37 = v28[69];
        v38 = v28[68];
        v76 = v28[70];
        v39 = (float)((float)((float)(v34 * v33) + (float)(v71 * v35)) + (float)(v82 * v36)) * v28[104];
        v40 = (float)((float)((float)(v69 * v34) + (float)(v67 * v35)) + (float)(v79 * v36)) * v28[105];
        v41 = (float)((float)((float)(v34 * v38) + (float)(v35 * v37)) + (float)(v36 * v76)) * v28[106];
        a6[63] = (float)((float)((float)(v28[63] * v39) + (float)(v28[67] * v40)) + (float)(v28[71] * v41)) + a6[63];
        a6[60] = (float)((float)((float)(v33 * v39) + (float)(v69 * v40)) + (float)(v38 * v41)) + a6[60];
        a6[61] = (float)((float)((float)(v71 * v39) + (float)(v67 * v40)) + (float)(v37 * v41)) + a6[61];
        a6[62] = (float)((float)((float)(v82 * v39) + (float)(v40 * v79)) + (float)(v41 * v76)) + a6[62];
      }
      if ( v88 != 0 && *(uint8_t *)(v88 + 232) != 5 )
      {
        v8 = *(uint32_t *)(v66 + 140) + 40 * v90;
        v68 = *(uint8_t *)(v8 + 36);
        v9 = -*(float *)(v8 + 28);
        v70 = v86 * v9;
        v85 = v9 * v72;
        Mass = hkpMotion::getMass((hkpMotion::Self *)(v88 + 224));
g4_m128_raw(v10) = LODWORD(v70);
g4_m128_raw(v11) = COERCE_UNSIGNED_INT(v74 * v9);
        m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v10));
g4_m128_raw(v12) = COERCE_UNSIGNED_INT(v73 * v9);
        v13 = (float)(Mass * *(float *)(*(uint32_t *)(v66 + 140) + 40 * v90 + 32)) * a3;
        *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v10, 0) *g4_m128_lane<float>(v10, 0))
                                              + (float)(g4_m128_lane<float>(v11, 0) *g4_m128_lane<float>(v11, 0)))
                                      + (float)(g4_m128_lane<float>(v12, 0) *g4_m128_lane<float>(v12, 0));
        if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > (float)(v13 * v13) )
        {
          v15 = 0.0;
          if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
          {
            v81 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
            v16 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31)
                & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
            v17 = (float)(*(float *)&v16 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v16)
                        * (float)(*(float *)&v16 * *(float *)&v16));
            v15 = (float)(1.5 * (float)((float)(v17 * 1.5) - (float)((float)(v81 * v17) * (float)(v17 * v17))))
                - (float)((float)(v81 * (float)((float)(v17 * 1.5) - (float)((float)(v81 * v17) * (float)(v17 * v17))))
                        * (float)((float)((float)(v17 * 1.5) - (float)((float)(v81 * v17) * (float)(v17 * v17)))
                                * (float)((float)(v17 * 1.5) - (float)((float)(v81 * v17) * (float)(v17 * v17)))));
          }
          v18 = v15 * v13;
g4_m128_lane<float>(v10, 0) = v70 * v18;
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0) * v18;
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0) * v18;
          v85 = v18 * v85;
        }
        if ( *(uint32_t *)(a5 + 4 * v68) == v88 )
        {
          v42 = *(float *)(v88 + 428);
          v43 = (float *)v88;
          v44 = &a6[24 * v68];
          v45 = *((float **)v44 + 12);
          v45[4] = (float)(g4_m128_lane<float>(v10, 0) * v42) + v45[4];
          v45[5] = (float)(v42 *g4_m128_lane<float>(v11, 0)) + v45[5];
          v46 = v42 *g4_m128_lane<float>(v12, 0);
          v47 = (float)(v42 * v85) + v45[7];
          v45[6] = v46 + v45[6];
          v45[7] = v47;
          v48 = *((float **)v44 + 12);
          v49 = *(float *)(v20 + 84) - *(float *)(v88 + 324);
          v50 = *(float *)(v20 + 80) - *(float *)(v88 + 320);
          v51 = (float)(*(float *)(v20 + 88) - *(float *)(v88 + 328)) *g4_m128_lane<float>(v11, 0);
          v52 = (float)(*(float *)(v20 + 88) - *(float *)(v88 + 328)) *g4_m128_lane<float>(v10, 0);
          v53 =g4_m128_lane<float>(v11, 0) * v50;
          v54 = (float)(v49 *g4_m128_lane<float>(v12, 0)) - v51;
          v55 =g4_m128_lane<float>(v10, 0) * v49;
          v56 = *(float *)(v88 + 244);
          v57 = v52 - (float)(g4_m128_lane<float>(v12, 0) * v50);
          v58 = *(float *)(v88 + 240);
          v59 = v53 - v55;
          v89 = *(float *)(v88 + 248);
          v77 = v43[64];
          v75 = v43[65];
          v80 = v56;
          v87 = v43[66];
          v60 = v43[69];
          v61 = v43[68];
          v83 = v43[70];
          v62 = (float)((float)((float)(v54 * v58) + (float)(v56 * v57)) + (float)(v89 * v59)) * v43[104];
          v63 = (float)((float)((float)(v77 * v54) + (float)(v75 * v57)) + (float)(v87 * v59)) * v43[105];
          v64 = (float)((float)((float)(v54 * v61) + (float)(v57 * v60)) + (float)(v59 * v83)) * v43[106];
          v65 = (float)((float)(v43[63] * v62) + (float)(v43[67] * v63)) + (float)(v43[71] * v64);
          v48[8] = (float)((float)((float)(v58 * v62) + (float)(v77 * v63)) + (float)(v61 * v64)) + v48[8];
          v48[11] = v65 + v48[11];
          v48[9] = (float)((float)((float)(v80 * v62) + (float)(v75 * v63)) + (float)(v60 * v64)) + v48[9];
          v48[10] = (float)((float)((float)(v62 * v89) + (float)(v87 * v63)) + (float)(v64 * v83)) + v48[10];
          *a7 = 0;
          a7[1] = 0;
          a7[2] = 0;
          a7[3] = 0;
        }
        else
        {
          *(uint64_t *)&v19 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v10, v11), 0);
          *((uint64_t *)&v19 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v12, g4_m128_from<__m128>(LODWORD(v85))), 0);
          *(g4_int128_t *)a7 = v19;
        }
      }
      else
      {
        *(g4_int128_t *)a7 = 0;
      }
      ++v90;
      a7 += 4;
      result = *(uint8_t *)(a2[7] + 32);
    }
    while ( result > v90 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::applyDampingToAxleAccumulators  (binary VA: 0x1862ce0)
// Original: hkpVehicleDefaultSimulation::applyDampingToAxleAccumulators
// ----------------------------------------------------------------------------
__m128 * hkpVehicleDefaultSimulation::applyDampingToAxleAccumulators(int a1, int a2, __m128 **a3, int a4, uint32_t *a5, uint32_t *a6)
{
  float v6; // xmm0_4
  __m128 *v7;
  __m128 *result;
  __m128 v9;
  float v10; // xmm2_4
  float v11; // xmm0_4
  __m128 v12;
  __m128 v13;
  __m128 v14;
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 *v23;
  __m128 v24;
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  float v29; // xmm5_4
  float v30; // xmm7_4
  __m128 v31;
  __m128 v32;

  v6 = *(float *)(a2 + 8);
  v7 = *a3;
  if ( *a3 != nullptr &&g4_m128_lane<int8_t>(v7[14], 8) != 5 )
  {
g4_m128_raw(v20) = 0x3F800000u;
g4_m128_lane<float>(v20, 0) = 1.0 - (float)(COERCE_FLOAT(g4_m128_lane<int16_t>(v7[25], 2) << 16) * v6);
g4_m128_raw(v21) = 0;
    v22 = _mm_andnot_ps(_mm_cmplt_ss(v20, g4_m128_from<__m128>(0LL)), v20);
g4_m128_lane<float>(v20, 0) = COERCE_FLOAT(g4_m128_lane<int16_t>(v7[25], 3) << 16) * v6;
    v23 = *(__m128 **)(a4 + 48);
g4_m128_lane<float>(v21, 0) = fmaxf(0.0, 1.0 -g4_m128_lane<float>(v20, 0));
    v24 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v23[2]);
    v32 = _mm_mul_ps(v23[1], _mm_shuffle_ps(v22, v22, 0));
    v23[1] = v32;
    v23[2] = v24;
    *a5 =g4_m128_lane<int32_t>(v32, 0);
    a5[1] =g4_m128_lane<int32_t>(v23[1], 1);
    a5[2] =g4_m128_lane<int32_t>(v23[1], 2);
    a5[3] =g4_m128_lane<int32_t>(v23[1], 3);
    *a6 =g4_m128_lane<int32_t>(v23[2], 0);
    a6[1] =g4_m128_lane<int32_t>(v23[2], 1);
    a6[2] =g4_m128_lane<int32_t>(v23[2], 2);
    a6[3] =g4_m128_lane<int32_t>(v23[2], 3);
    v25 =g4_m128_lane<float>(v23[2], 0);
    v26 =g4_m128_lane<float>(v23[2], 1);
    v27 =g4_m128_lane<float>(v23[2], 2);
g4_m128_lane<float>(v20, 0) = (float)(g4_m128_lane<float>(v23[4], 1) * v25) + (float)(g4_m128_lane<float>(v23[5], 1) * v26);
g4_m128_lane<float>(v22, 0) = (float)(g4_m128_lane<float>(v23[4], 2) * v25) + (float)(g4_m128_lane<float>(v23[5], 2) * v26);
g4_m128_lane<float>(v24, 0) = (float)(g4_m128_lane<float>(v23[5], 3) * v26) + (float)(g4_m128_lane<float>(v23[4], 3) * v25);
    v28 = (float)((float)(v25 *g4_m128_lane<float>(v23[4], 0)) + (float)(v26 *g4_m128_lane<float>(v23[5], 0)))
        + (float)(g4_m128_lane<float>(v23[6], 0) * v27);
    v29 =g4_m128_lane<float>(v23[6], 1) * v27;
g4_m128_lane<float>(v23[2], 0) = v28;
g4_m128_lane<float>(v23[2], 1) =g4_m128_lane<float>(v20, 0) + v29;
g4_m128_lane<float>(v20, 0) =g4_m128_lane<float>(v23[6], 2) * v27;
    v30 = v27 *g4_m128_lane<float>(v23[6], 3);
g4_m128_lane<float>(v23[2], 2) =g4_m128_lane<float>(v22, 0) +g4_m128_lane<float>(v20, 0);
g4_m128_lane<float>(v23[2], 3) = v30 +g4_m128_lane<float>(v24, 0);
  }
  result = a3[1];
  if ( result != nullptr &&g4_m128_lane<int8_t>(result[14], 8) != 5 && result != *a3 )
  {
g4_m128_raw(v9) = 0x3F800000u;
    v10 = COERCE_FLOAT(g4_m128_lane<int16_t>(result[25], 2) << 16) * v6;
    v11 = v6 * COERCE_FLOAT(g4_m128_lane<int16_t>(result[25], 3) << 16);
g4_m128_lane<float>(v9, 0) = 1.0 - v10;
g4_m128_raw(v12) = 0;
    result = *(__m128 **)(a4 + 144);
g4_m128_lane<float>(v12, 0) = fmaxf(0.0, 1.0 - v11);
    v13 = _mm_andnot_ps(_mm_cmplt_ss(v9, g4_m128_from<__m128>(0LL)), v9);
    v14 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), result[2]);
    v31 = _mm_mul_ps(result[1], _mm_shuffle_ps(v13, v13, 0));
    result[1] = v31;
    result[2] = v14;
    a5[4] =g4_m128_lane<int32_t>(v31, 0);
    a5[5] =g4_m128_lane<int32_t>(result[1], 1);
    a5[6] =g4_m128_lane<int32_t>(result[1], 2);
    a5[7] =g4_m128_lane<int32_t>(result[1], 3);
    a6[4] =g4_m128_lane<int32_t>(result[2], 0);
    a6[5] =g4_m128_lane<int32_t>(result[2], 1);
    a6[6] =g4_m128_lane<int32_t>(result[2], 2);
    a6[7] =g4_m128_lane<int32_t>(result[2], 3);
g4_m128_lane<int32_t>(v13, 0) =g4_m128_lane<int32_t>(result[2], 0);
g4_m128_lane<int32_t>(v9, 0) =g4_m128_lane<int32_t>(result[2], 1);
g4_m128_lane<float>(v14, 0) = (float)(g4_m128_lane<float>(result[4], 1) *g4_m128_lane<float>(v13, 0)) + (float)(g4_m128_lane<float>(result[5], 1) *g4_m128_lane<float>(v9, 0));
    v15 =g4_m128_lane<float>(result[5], 3) *g4_m128_lane<float>(v9, 0);
    v16 =g4_m128_lane<float>(result[2], 2);
    v17 = (float)(g4_m128_lane<float>(result[4], 2) *g4_m128_lane<float>(v13, 0)) + (float)(g4_m128_lane<float>(result[5], 2) *g4_m128_lane<float>(v9, 0));
    v18 =g4_m128_lane<float>(result[4], 3);
g4_m128_lane<float>(result[2], 0) = (float)((float)(g4_m128_lane<float>(v13, 0) *g4_m128_lane<float>(result[4], 0))
                                  + (float)(g4_m128_lane<float>(v9, 0) *g4_m128_lane<float>(result[5], 0)))
                          + (float)(g4_m128_lane<float>(result[6], 0) * v16);
g4_m128_lane<float>(result[2], 1) =g4_m128_lane<float>(v14, 0) + (float)(g4_m128_lane<float>(result[6], 1) * v16);
    v19 = (float)((float)(v18 *g4_m128_lane<float>(v13, 0)) + v15) + (float)(v16 *g4_m128_lane<float>(result[6], 3));
g4_m128_lane<float>(result[2], 2) = v17 + (float)(g4_m128_lane<float>(result[6], 2) * v16);
g4_m128_lane<float>(result[2], 3) = v19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::applyDampingToChassisAccumulator  (binary VA: 0x1862fe0)
// Original: hkpVehicleDefaultSimulation::applyDampingToChassisAccumulator
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::applyDampingToChassisAccumulator(int a1, int a2, int a3, int a4)
{
  __m128 v4;
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4

g4_m128_raw(v4) = 0x3F800000u;
  v6 = *(float *)(a3 + 36);
  v7 = *(float *)(a3 + 92);
g4_m128_lane<float>(v4, 0) = 1.0 - (float)(COERCE_FLOAT(*(int16_t *)(a4 + 180) << 16) * *(float *)(a2 + 8));
  v8 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v4, g4_m128_from<__m128>(0LL)), v4), 0);
  v9 = fmaxf(0.0, 1.0 - (float)(*(float *)(a2 + 8) * COERCE_FLOAT(*(int16_t *)(a4 + 182) << 16)));
g4_m128_lane<int32_t>(v4, 0) = *(uint32_t *)(a3 + 32);
  v10 = *(float *)(a3 + 68);
  *(float *)(a3 + 16) = *(float *)(a3 + 16) * v8;
g4_m128_lane<float>(v4, 0) =g4_m128_lane<float>(v4, 0) * v9;
  v11 = v6 * v9;
  v12 = v9 * *(float *)(a3 + 40);
  *(float *)(a3 + 20) = *(float *)(a3 + 20) * v8;
  v13 = *(float *)(a3 + 24) * v8;
  v14 = v8 * *(float *)(a3 + 28);
  *(float *)(a3 + 24) = v13;
  *(float *)(a3 + 28) = v14;
  v15 = (float)(v10 *g4_m128_lane<float>(v4, 0)) + (float)(*(float *)(a3 + 84) * v11);
  v16 = (float)(*(float *)(a3 + 72) *g4_m128_lane<float>(v4, 0)) + (float)(*(float *)(a3 + 88) * v11);
  v17 = *(float *)(a3 + 76);
  *(float *)(a3 + 32) = (float)((float)(g4_m128_lane<float>(v4, 0) * *(float *)(a3 + 64)) + (float)(v11 * *(float *)(a3 + 80)))
                      + (float)(*(float *)(a3 + 96) * v12);
  *(float *)(a3 + 36) = v15 + (float)(*(float *)(a3 + 100) * v12);
  *(float *)(a3 + 40) = v16 + (float)(*(float *)(a3 + 104) * v12);
  *(float *)(a3 + 44) = (float)((float)(v17 *g4_m128_lane<float>(v4, 0)) + (float)(v7 * v11)) + (float)(v12 * *(float *)(a3 + 108));
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::getExtraTorqueFactor  (binary VA: 0x1863130)
// Original: hkpVehicleDefaultSimulation::getExtraTorqueFactor
// ----------------------------------------------------------------------------
float * hkpVehicleDefaultSimulation::getExtraTorqueFactor(int a1, int a2, float a3, float *a4)
{
  float *result;
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4

  result = *(float **)(a2 + 28);
  v5 = result[27];
  if ( v5 != 0.0 )
  {
    v6 = (float)(v5 * *(float *)(a2 + 124)) * a3;
    v7 = (float)((float)(result[13] * v6) * result[45]) + a4[9];
    v8 = (float)((float)(result[14] * v6) * result[46]) + a4[10];
    v9 = (float)((float)(result[15] * v6) * result[47]) + a4[11];
    v10 = (float)((float)(v6 * result[12]) * result[44]) + a4[8];
    a4[9] = v7;
    a4[10] = v8;
    a4[11] = v9;
    a4[8] = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::applyFrictionSolver  (binary VA: 0x18631e0)
// Original: hkpVehicleDefaultSimulation::applyFrictionSolver
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::applyFrictionSolver(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[0] = *(uint32_t *)(a3 + 8);
  v6[1] = *(uint32_t *)(a3 + 12);
  return (int)(uintptr_t)(hkVehicleFrictionApplyVehicleFriction(v6, *(uint32_t *)(a1 + 80), a4, a5));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::calcChassisVelocities  (binary VA: 0x1863240)
// Original: hkpVehicleDefaultSimulation::calcChassisVelocities
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::calcChassisVelocities(int a1, int a2, int a3, int a4)
{
  float *v5;
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4

  v5 = *(float **)(a2 + 24);
  *(uint32_t *)a4 = *(uint32_t *)(a3 + 16);
  *(uint32_t *)(a4 + 4) = *(uint32_t *)(a3 + 20);
  *(uint32_t *)(a4 + 8) = *(uint32_t *)(a3 + 24);
  *(uint32_t *)(a4 + 12) = *(uint32_t *)(a3 + 28);
  v6 = *(float *)(a3 + 32);
  v7 = v5[60] * v6;
  v8 = *(float *)(a3 + 36);
  v9 = *(float *)(a3 + 40);
  *(float *)(a4 + 16) = v7;
  v10 = v5[61] * v6;
  *(float *)(a4 + 20) = v10;
  v11 = v5[62] * v6;
  *(float *)(a4 + 24) = v11;
  v12 = v5[63] * v6;
  *(float *)(a4 + 28) = v12;
  v13 = (float)(v5[64] * v8) + v7;
  *(float *)(a4 + 16) = v13;
  v14 = (float)(v5[65] * v8) + v10;
  *(float *)(a4 + 20) = v14;
  v15 = (float)(v5[66] * v8) + v11;
  *(float *)(a4 + 24) = v15;
  v16 = (float)(v8 * v5[67]) + v12;
  *(float *)(a4 + 28) = v16;
  *(float *)(a4 + 16) = (float)(v5[68] * v9) + v13;
  *(float *)(a4 + 20) = (float)(v5[69] * v9) + v14;
  *(float *)(a4 + 24) = (float)(v5[70] * v9) + v15;
  *(float *)(a4 + 28) = (float)(v9 * v5[71]) + v16;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::calcGroundBodyVelocities  (binary VA: 0x1863360)
// Original: hkpVehicleDefaultSimulation::calcGroundBodyVelocities
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::calcGroundBodyVelocities(int a1, int a2, float a3, int a4, uint32_t *a5, int a6, float *a7, float *a8)
{
  int result;
  int v10;
  __m128 v11;
  int v12;
  __m128 v13;
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  __m128 v20;
  __m128 v21;
  __m128 v22;
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm6_4
  __m128 v26;
  float v27; // xmm0_4
  unsigned int v28;
  __m128 v29;
  __m128 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  int v38;
  int v39;
  int v40;
  int v41;
  float v42;

  result = *(uint32_t *)(a2 + 28);
  v35 = result;
  if ( *(int *)(result + 156) > 0 )
  {
    v39 = a6;
    v40 = a6 + 4;
    v38 = a6 + 8;
    v41 = a6 + 12;
    result = 0;
    do
    {
      *(uint32_t *)(a6 + 4 * result + 96) = 0;
      v10 = a5[result];
      if ( v10 != 0 && *(uint8_t *)(v10 + 232) != 5 && (result == 0 || *a5 != a5[1]) )
      {
g4_m128_lane<int32_t>(v11, 0) = 0;
        v12 = *(uint32_t *)(a4 + 48);
g4_m128_raw(v13) = *(unsigned int *)(v12 + 32);
        v14 = *(float *)(v12 + 36);
        v15 = *(float *)(v12 + 80) *g4_m128_lane<float>(v13, 0);
        v16 = *(float *)(v12 + 40);
        v17 = (float)(*(float *)(v12 + 64) *g4_m128_lane<float>(v13, 0)) + (float)(*(float *)(v12 + 68) * v14);
        v18 = *(float *)(v12 + 72) * v16;
g4_m128_lane<float>(v13, 0) = (float)((float)(g4_m128_lane<float>(v13, 0) * *(float *)(v12 + 96)) + (float)(*(float *)(v12 + 100) * v14))
                        + (float)(*(float *)(v12 + 104) * v16);
        v19 = (float)(v15 + (float)(v14 * *(float *)(v12 + 84))) + (float)(v16 * *(float *)(v12 + 88));
        v20 = v13;
g4_m128_lane<float>(v20, 0) =g4_m128_lane<float>(v13, 0) - a8[3];
        v21 = _mm_cmplt_ss(v20, v11);
g4_m128_lane<int32_t>(v11, 0) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v21, g4_m128_from<__m128>(0LL)), 0))
                        |g4_m128_lane<int32_t>(v20, 0) &g4_m128_lane<int32_t>(v21, 0);
        v22 = _mm_cmplt_ss(g4_m128_from<__m128>(0LL), v11);
g4_m128_lane<float>(v20, 0) = -(float)(10.0 * a3);
        v23 = fmaxf(fminf((float)(v17 + v18) - *a8, 10.0 * a3),g4_m128_lane<float>(v20, 0)) + *a8;
        v24 = fmaxf(fminf(v19 - a8[1], 10.0 * a3),g4_m128_lane<float>(v20, 0)) + a8[1];
        v25 = fmaxf(fminf(g4_m128_lane<float>(v13, 0) - a8[2], 10.0 * a3),g4_m128_lane<float>(v20, 0)) + a8[2];
        v31 = COERCE_FLOAT(
                COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v22, g4_m128_from<__m128>(0x80000000)), 0))
              |g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<int32_t>(v22, 0))
            + a8[3];
        v34 = a7[1];
        v33 = a7[2];
        v32 = a7[3];
g4_m128_raw(v26) = (g4_int128_t)_mm_cvtsi32_si128(*(uint32_t *)(v12 + 28));
g4_m128_lane<float>(v26, 0) =g4_m128_lane<float>(v26, 0) - v32;
        v27 = fmaxf(fminf(*(float *)(v12 + 20) - v34, 10.0 * a3),g4_m128_lane<float>(v20, 0));
        v28 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v26)));
        v42 = fminf(*(float *)(v12 + 24) - v33, 10.0 * a3);
g4_m128_lane<int32_t>(v26, 0) = 0;
        v29 = _mm_cmplt_ss(g4_m128_from<__m128>(_mm_cvtsi32_si128(v28)), v26);
        *(float *)(v39 + 32) = fmaxf(fminf(*(float *)(v12 + 16) - *a7, 10.0 * a3),g4_m128_lane<float>(v20, 0)) + *a7;
g4_m128_lane<int32_t>(v29, 0) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v29, g4_m128_from<__m128>(0LL)), 0)
                        | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v28)), v29)));
        *(float *)(v40 + 32) = v34 + v27;
        v30 = _mm_cmplt_ss(g4_m128_from<__m128>(0LL), v29);
        *(float *)(v38 + 32) = fmaxf(v42,g4_m128_lane<float>(v20, 0)) + v33;
        *(float *)(v41 + 32) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v30, g4_m128_from<__m128>(0x80000000)), 0) |g4_m128_lane<int32_t>(v29, 0)
                                                                                               &g4_m128_lane<int32_t>(v30, 0))
                             + v32;
        *(float *)(v39 + 64) = v23;
        *(float *)(v40 + 64) = v24;
        *(float *)(v38 + 64) = v25;
        *(float *)(v41 + 64) = v31;
        *(uint32_t *)(a6 + 4 * result + 96) = a5[result];
      }
      ++result;
      v39 += 16;
      v40 += 16;
      v38 += 16;
      v41 += 16;
      a7 += 4;
      a4 += 96;
      a8 += 4;
    }
    while ( *(uint32_t *)(v35 + 156) > result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::simulateVehicle  (binary VA: 0x18636a0)
// Original: hkpVehicleDefaultSimulation::simulateVehicle
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSimulation::simulateVehicle(int a1, hkpVehicleInstance::Self *a2, float *a3, int a4, hkpVehicleJobResults::Self *a5)
{
  uint32_t *v5;
  hkpVehicleJobResults::Self *v6;
  int v7;
  float v8; // xmm6_4
  int result;
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  int v13;
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  int v17;
  int v18;
  float v19; // xmm1_4
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef float *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef hkpVehicleJobResults::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef __m128 *_g4_t_v31[2];
  typedef float _g4_t_v32[4];
  typedef float _g4_t_v33[8];
  typedef float _g4_t_v34[8];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef g4_int128_t _g4_t_v37[13];
  typedef float _g4_t_v38[64];
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 1808u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v26)) > _g4_s6 ? (20u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v29)) > _g4_s9 ? (28u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v30)) > _g4_s10 ? (28u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v31)) > _g4_s11 ? (40u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v33)) > _g4_s13 ? (64u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v34)) > _g4_s14 ? (96u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v35)) > _g4_s15 ? (128u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (384u + sizeof(_g4_t_v36)) > _g4_s16 ? (384u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (640u + sizeof(_g4_t_v37)) > _g4_s17 ? (640u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (848u + sizeof(_g4_t_v38)) > _g4_s18 ? (848u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (1104u + sizeof(_g4_t_v39)) > _g4_s19 ? (1104u + sizeof(_g4_t_v39)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 384u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 640u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 848u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 1104u);

  memset(v37, 0, 81);
  v5 = *(uint32_t **)(a4 + 4);
  v28 = *(uint32_t **)(a4 + 8);
  v25 = *(float **)a4;
  v20 = *((uint32_t *)a2 + 7);
  v21 = *((int *)a3 + 2);
  memset(&v37[6], 0, 81);
  v31[0] = nullptr;
  v31[1] = nullptr;
  v22 = v5;
  hkpVehicleDefaultSimulation::prepareAxleParams(a1, (uint32_t *)(a2), v21, v5, v28, (uint32_t *)(v31), v37, a3, (int)(uintptr_t)(&v35), (int)(uintptr_t)(&v36));
  hkpVehicleDefaultSimulation::prepareChassisParams(a1, (int)(uintptr_t)(a2), a3, (int)(uintptr_t)(v37));
  v6 = (hkpVehicleJobResults::Self *)&v39;
  if ( a5 != nullptr )
    v6 = a5;
  v29 = v6;
  hkpVehicleDefaultSimulation::applyAerodynamicDrag(a1, (int)(uintptr_t)(a2), v25, (float *)v37, *(float *)&v21);
  hkpVehicleDefaultSimulation::applyVelocityDamping(a1, *(float *)&v21, (unsigned int *)v37, *((float **)a2 + 17));
  hkpVehicleDefaultSimulation::applySuspensionForces(
    a1,
    (uint32_t *)(a2),
    *(float *)&v21,
    v22,
    (int)(uintptr_t)(v31),
    (float *)v37,
    (uint32_t *)v29 + 28);
  hkpVehicleDefaultSimulation::applyDampingToAxleAccumulators(a1, (int)(uintptr_t)(a3), v31, (int)(uintptr_t)(v37), (uint32_t *)(v33), (uint32_t *)(v34));
  hkpVehicleDefaultSimulation::applyDampingToChassisAccumulator(a1, (int)(uintptr_t)(a3), (int)(uintptr_t)(v38), *((uint32_t *)a2 + 6) + 224);
  hkpVehicleDefaultSimulation::getExtraTorqueFactor(a1, (int)(uintptr_t)(a2), *(float *)&v21, v38);
  hkpVehicleDefaultSimulation::applyFrictionSolver(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), (int)(uintptr_t)(v37), a1 + 8);
  hkpVehicleDefaultSimulation::calcChassisVelocities(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(v38), (int)(uintptr_t)(v29));
  hkpVehicleDefaultSimulation::calcGroundBodyVelocities(a1, (int)(uintptr_t)(a2), *(float *)&v21, (int)(uintptr_t)(v37), (uint32_t *)(v31), (int)(uintptr_t)(v29), v33, v34);
  v7 = v20;
  if ( a5 == nullptr )
  {
    hkpVehicleJobResults::applyForcesFromStep(v29, a2);
    v7 = v20;
  }
  v23 = v7;
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v32,
    (const hkMatrix3f::Self *)(*((uint32_t *)a2 + 6) + 240),
    (const hkVector4f::Self *)(v7 + 64));
  v8 = v32[0];
  result = *((uint32_t *)a2 + 7);
  v10 = v32[1];
  v11 = v32[2];
  v12 = (float)((float)(v38[4] * v32[0]) + (float)(v38[5] * v32[1])) + (float)(v38[6] * v32[2]);
  if ( *(uint8_t *)(result + 32) != 0 )
  {
    v26 = 0;
    v30 = 0;
    v27 = 0;
    v13 = v23;
    do
    {
      v24 = *(char *)(*(uint32_t *)(v13 + 140) + v26 + 36);
      v17 = a1 + 36 * v24;
      v18 = *((uint32_t *)a2 + 19) + v30;
      v19 = *(float *)(v17 + 8);
      *(float *)(v18 + 212) = v19;
      *(uint32_t *)(v18 + 208) = *(uint32_t *)(v17 + 20);
      *(uint32_t *)(v18 + 216) = *(uint32_t *)(v17 + 12);
      *(uint32_t *)(v18 + 204) = *(uint32_t *)(v17 + 16);
      if ( *(uint8_t *)(*((uint32_t *)a2 + 23) + v27) != 0 )
      {
        v16 = *(float *)(*((uint32_t *)a2 + 19) + v30 + 200);
        *(uint32_t *)(v18 + 192) = 0;
        *(float *)(v18 + 200) = v16;
        *(uint32_t *)(v18 + 196) = 0;
        if ( v16 <= 3141.5928f )
          goto LABEL_14;
      }
      else
      {
        if ( v31[v24] != nullptr )
          v14 = v12
              - (float)((float)((float)(*(float *)(LODWORD(v37[6 * v24 + 3]) + 16) * v8)
                              + (float)(*(float *)(LODWORD(v37[6 * v24 + 3]) + 20) * v10))
                      + (float)(*(float *)(LODWORD(v37[6 * v24 + 3]) + 24) * v11));
        else
          v14 = v12;
        *(float *)(v18 + 196) = v14 / *(float *)(*(uint32_t *)(v13 + 140) + v26);
        v15 = (float)(v19 + v14) / *(float *)(*(uint32_t *)(v13 + 140) + v26);
        *(float *)(v18 + 192) = v15;
        v16 = (float)(v15 * *(float *)&v21) + *(float *)(*((uint32_t *)a2 + 19) + v30 + 200);
        *(float *)(v18 + 200) = v16;
        if ( v16 <= 3141.5928f )
        {
LABEL_14:
          if ( v16 < -3141.5928f )
            *(float *)(v18 + 200) = v16 + 3141.5928f;
          goto LABEL_11;
        }
      }
      *(float *)(v18 + 200) = v16 - 3141.5928f;
LABEL_11:
      ++v27;
      v30 += 224;
      v26 += 40;
      result = *(uint8_t *)(*((uint32_t *)a2 + 7) + 32);
    }
    while ( result > v27 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleTransmission::staticClass  (binary VA: 0x1863d60)
// Original: hkpVehicleTransmission::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleTransmission::staticClass()
{
  return &hkpVehicleTransmissionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleTransmission::Destroy  (binary VA: 0x1863e10)
// Original: hkpVehicleTransmission::~hkpVehicleTransmission
// ----------------------------------------------------------------------------
void hkpVehicleTransmission::Destroy(hkpVehicleTransmission::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::getCurrentRatio  (binary VA: 0x1863e30)
// Original: hkpVehicleDefaultTransmission::getCurrentRatio
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultTransmission::getCurrentRatio(int a1, int a2, int a3)
{
  float v3; // xmm0_4

  if ( *(uint8_t *)(a3 + 13) != 0 )
    v3 = -*(float *)(a1 + 24);
  else
    v3 = *(float *)(*(uint32_t *)(a1 + 28) + 4 * *(char *)(a3 + 14));
  return (float)(v3 * *(float *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::calcTransmission  (binary VA: 0x1863e90)
// Original: hkpVehicleDefaultTransmission::calcTransmission
// ----------------------------------------------------------------------------
int hkpVehicleDefaultTransmission::calcTransmission(uint32_t *a1, int64_t a2, int a3)
{
  int v4;
  typedef float _g4_t_v6;
  typedef float _g4_t_v7;
  typedef uint8_t _g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v8)) > _g4_s2 ? (15u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);

  (*(void (**)(uint8_t *, uint32_t *, uint32_t, int))(*a1 + 32))(v8, a1, HIDWORD(a2), a3);
  *(uint8_t *)(a3 + 13) = v8[0];
  v6 = ((long double (*)(uint32_t *))*(uint32_t *)(*a1 + 24))(a1);
  *(float *)(a3 + 4) = v6;
  v7 = ((long double (*)(uint32_t *, uint32_t, int))*(uint32_t *)(*a1 + 28))(a1, HIDWORD(a2), a3);
  v4 = 0;
  for ( *(float *)a3 = v7; a1[11] > v4; ++v4 )
    *(float *)(*(uint32_t *)(a3 + 8) + 4 * v4) = *(float *)(a3 + 4) * *(float *)(a1[10] + 4 * v4);
  return G4_VCALL<int>(a1, 36, a2, HIDWORD(a2), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::calcTransmissionRPM  (binary VA: 0x1863f60)
// Original: hkpVehicleDefaultTransmission::calcTransmissionRPM
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultTransmission::calcTransmissionRPM(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v11;

  v3 = *(char *)(*(uint32_t *)(a2 + 28) + 32);
  if ( (char)v3 <= 0 )
  {
    v7 = 0.0;
  }
  else
  {
    v4 = *(uint32_t *)(a2 + 76);
    v5 = 0;
    v6 = 4 * v3;
    v7 = 0.0;
    do
    {
      v8 = *(float *)(v4 + 196);
      v4 += 224;
      v9 = (float)((float)(v8 * 60.0) * 0.15915494f) * *(float *)(a1[10] + v5);
      v5 += 4;
      v7 = v7 + v9;
    }
    while ( v5 != v6 );
  }
  v11 = ((long double (*)(uint32_t *, int, int))*(uint32_t *)(*a1 + 40))(a1, a2, a3);
  return fmaxf(0.0, v11 * v7);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::calcMainTransmittedTorque  (binary VA: 0x1864030)
// Original: hkpVehicleDefaultTransmission::calcMainTransmittedTorque
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultTransmission::calcMainTransmittedTorque(int a1, int a2, int a3)
{
  float v4;
  float v5;

  if ( *(uint8_t *)(a3 + 15) != 0 )
    return 0.0;
  v4 = *(float *)(a2 + 112);
  v5 = ((long double (*)(int, int, int))*(uint32_t *)(*(uint32_t *)a1 + 40))(a1, a2, a3);
  return (float)(v5 * v4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::calcIsReversing  (binary VA: 0x1864090)
// Original: hkpVehicleDefaultTransmission::calcIsReversing
// ----------------------------------------------------------------------------
bool * hkpVehicleDefaultTransmission::calcIsReversing(bool *a1, int a2, int a3, int a4)
{
  bool *result;

  result = a1;
  *a1 = *(uint8_t *)(a3 + 108) != 0 && *(char *)(a4 + 14) <= 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::updateCurrentGear  (binary VA: 0x18640c0)
// Original: hkpVehicleDefaultTransmission::updateCurrentGear
// ----------------------------------------------------------------------------
int hkpVehicleDefaultTransmission::updateCurrentGear(int a1, float a2, int a3, int a4)
{
  int result;
  float v5; // xmm0_4
  bool v6;
  float v7; // xmm0_4
  char v8;
  int v9; // xmm1_4
  char v10;
  int v11; // xmm0_4

  result = a4;
  v5 = *(float *)(a4 + 16) - a2;
  v6 = *(uint8_t *)(a4 + 15) == 0;
  *(float *)(a4 + 16) = v5;
  if ( !v6 && v5 <= 0.0 )
    *(uint8_t *)(a4 + 15) = 0;
  if ( *(uint8_t *)(a4 + 13) == 0 )
  {
    v7 = *(float *)a4;
    if ( *(float *)(a1 + 8) > *(float *)a4 )
    {
      v8 = *(uint8_t *)(a4 + 14);
      if ( v8 > 0 )
      {
        *(uint8_t *)(a4 + 14) = v8 - 1;
        v9 = *(uint32_t *)(a1 + 20);
        *(uint8_t *)(a4 + 15) = 1;
        *(uint32_t *)(a4 + 16) = v9;
      }
    }
    if ( v7 > *(float *)(a1 + 12) )
    {
      v10 = *(uint8_t *)(a4 + 14);
      if ( v10 + 1 < *(uint32_t *)(a1 + 32) )
      {
        *(uint8_t *)(a4 + 14) = v10 + 1;
        v11 = *(uint32_t *)(a1 + 20);
        *(uint8_t *)(a4 + 15) = 1;
        *(uint32_t *)(a4 + 16) = v11;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleTransmission::Destroy_ea1864160  (binary VA: 0x1864160)
// Original: hkpVehicleTransmission::~hkpVehicleTransmission
// ----------------------------------------------------------------------------
void hkpVehicleTransmission::Destroy_ea1864160(hkpVehicleTransmission::Self *self)
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
// Function: hkpVehicleDefaultTransmission::Destroy  (binary VA: 0x18641c0)
// Original: hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission
// ----------------------------------------------------------------------------
void hkpVehicleDefaultTransmission::Destroy(hkpVehicleDefaultTransmission::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A47C8);
  v1 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 11) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 10),
      4 * v1);
  v2 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 7),
      4 * v2);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::Destroy_ea1864270  (binary VA: 0x1864270)
// Original: hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission
// ----------------------------------------------------------------------------
void hkpVehicleDefaultTransmission::Destroy_ea1864270(hkpVehicleDefaultTransmission::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A47C8);
  v1 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 11) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 10),
      4 * v1);
  v2 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 7),
      4 * v2);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::Construct  (binary VA: 0x1864350)
// Original: hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission
// ----------------------------------------------------------------------------
void hkpVehicleDefaultTransmission::Construct(hkpVehicleDefaultTransmission::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A47C8);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0x80000000;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatio  (binary VA: 0x18643c0)
// Original: hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatio
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatio(hkpVehicleDefaultTransmission::Self *self, float a2, float a3, float a4)
{
  return (float)((float)(a3
                       / (float)((float)((float)((float)((float)(1.609f * *(float *)&self) / 3.6f) / a2) * 60.0)
                               / 6.2831855f))
               / a4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatioKPH  (binary VA: 0x1864420)
// Original: hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatioKPH
// ----------------------------------------------------------------------------
void hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatioKPH(hkpVehicleDefaultTransmission::Self *self, int64_t a2, float a3)
{
  hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatio(
    (hkpVehicleDefaultTransmission::Self *)(uintptr_t)(COERCE_UNSIGNED_INT(*(float *)&self * 0.621f)),
    *(float *)&a2,
    *((float *)&a2 + 1),
    a3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::staticClass  (binary VA: 0x18644c0)
// Original: hkpVehicleRayCastBatchingManager::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleRayCastBatchingManager::staticClass()
{
  return &hkpVehicleRayCastBatchingManagerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSimulation::staticClass  (binary VA: 0x18645f0)
// Original: hkpVehicleDefaultSimulation::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultSimulation::staticClass()
{
  return &hkpVehicleDefaultSimulationClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleIntegrateJob::setRunsOnSpuOrPpu  (binary VA: 0x18646e0)
// Original: hkpVehicleIntegrateJob::setRunsOnSpuOrPpu
// ----------------------------------------------------------------------------
void hkpVehicleIntegrateJob::setRunsOnSpuOrPpu()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleJobResults::applyForcesFromStep  (binary VA: 0x18646f0)
// Original: hkpVehicleJobResults::applyForcesFromStep
// ----------------------------------------------------------------------------
int hkpVehicleJobResults::applyForcesFromStep(hkpVehicleJobResults::Self *self, const hkpVehicleInstance::Self *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  int v6;
  float *v7;
  int v8;
  float v9; // xmm1_4
  int v10;
  int v11;
  hkpEntity::Self *v12;
  int v13;
  char *v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  int v19;
  int *v20;
  g4_int128_t v21;
  int v22;
  int v23;
  hkpEntity::Self *v24;
  int v25;
  int *savedregs;
  hkpEntity::Self *v27;
  hkpEntity::Self *v28;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v20 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtApplyVehicleForces");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v6 = *(uint8_t *)(*((uint32_t *)a2 + 7) + 32);
  if ( (uint8_t)v6 != 0 )
  {
    v25 = v6 + 1;
    v7 = (float *)((char *)self + 112);
    v8 = 1;
    do
    {
      while ( 1 )
      {
        v9 = fabs(v7[2]);
        LOBYTE(v10) = v9 <= 0.001f ? 4 : 0;
        if ( fabs(v7[3]) <= 0.001f )
          v10 = v9 > 0.001f ? 8 : 12;
        if ( (v10 & 7 | (fabs(*v7) <= 0.001f) | (fabs(v7[1]) <= 0.001f ? 2 : 0)) != 7 )
          break;
        ++v8;
        v7 += 4;
        if ( v8 == v25 )
          goto LABEL_10;
      }
      v11 = 224 * v8;
      v22 = 981668463;
      ++v8;
      v21 = 0x7FFFFFFFu;
      v23 = *((uint32_t *)a2 + 19) + v11 - 224;
      v24 = *(hkpEntity::Self **)(v23 + 36);
      hkpEntity::activate(v24);
      (*(void (**)(uint32_t *, float *, int, int *))(*((uint32_t *)v24 + 56) + 100))(
        (uint32_t *)v24 + 56,
        v7,
        v23 + 80,
        v20);
      v7 += 4;
    }
    while ( v8 != v25 );
  }
LABEL_10:
  v12 = *((hkpEntity::Self **)a2 + 6);
  hkpEntity::activate(v12);
  (*(void (**)(uint32_t *, char *, int, int *, uint32_t, uint32_t, uint32_t, uint32_t, int, int, hkpEntity::Self *, int))(*((uint32_t *)v12 + 56) + 84))(
    (uint32_t *)v12 + 56,
    (char *)self + 16,
    v19,
    v20,
    LODWORD(v21),
    DWORD1(v21),
    DWORD2(v21),
    HIDWORD(v21),
    v22,
    v23,
    v24,
    v25);
  hkpEntity::activate(v12);
  (*(void (**)(uint32_t *, hkpVehicleJobResults::Self *))(*((uint32_t *)v12 + 56) + 80))((uint32_t *)v12 + 56, self);
  v13 = 0;
  v14 = (char *)self + 64;
  do
  {
    if ( *((uint32_t *)self + v13 + 24) != 0 )
    {
      v27 = *((hkpEntity::Self **)self + v13 + 24);
      hkpEntity::activate(v27);
      (*(void (**)(uint32_t *, char *))(*((uint32_t *)v27 + 56) + 84))((uint32_t *)v27 + 56, v14);
      v28 = *((hkpEntity::Self **)self + v13 + 24);
      hkpEntity::activate(v28);
      (*(void (**)(uint32_t *, char *))(*((uint32_t *)v28 + 56) + 80))((uint32_t *)v28 + 56, v14 - 32);
    }
    ++v13;
    v14 += 16;
  }
  while ( v13 != 2 );
  LODWORD(v15) = (uint32_t)(uintptr_t)(savedregs);
  v16 = *savedregs;
  v17 = *(uint32_t **)(*savedregs + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*savedregs + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v17[1] = v15;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleVelocityDamper::staticClass  (binary VA: 0x1864940)
// Original: hkpVehicleVelocityDamper::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleVelocityDamper::staticClass()
{
  return &hkpVehicleVelocityDamperClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInput::staticClass  (binary VA: 0x18649f0)
// Original: hkpVehicleDriverInput::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDriverInput::staticClass()
{
  return &hkpVehicleDriverInputClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInputStatus::staticClass  (binary VA: 0x1864a10)
// Original: hkpVehicleDriverInputStatus::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDriverInputStatus::staticClass()
{
  return &hkpVehicleDriverInputStatusClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleData::WheelComponentParams::staticClass  (binary VA: 0x1864b90)
// Original: hkpVehicleData::WheelComponentParams::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleData::WheelComponentParams::staticClass()
{
  return &hkpVehicleDataWheelComponentParamsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleData::staticClass  (binary VA: 0x1864bb0)
// Original: hkpVehicleData::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleData::staticClass()
{
  return &hkpVehicleDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleData::Destroy  (binary VA: 0x1864d50)
// Original: hkpVehicleData::~hkpVehicleData
// ----------------------------------------------------------------------------
void hkpVehicleData::Destroy(hkpVehicleData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4A08);
  v1 = *((uint32_t *)self + 40);
  *((uint32_t *)self + 39) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 38),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 40) = 0x80000000;
  *((uint32_t *)self + 36) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 35),
      40 * v2);
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 37) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleData::init  (binary VA: 0x1864e20)
// Original: hkpVehicleData::init
// ----------------------------------------------------------------------------
int hkpVehicleData::init(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int i;
  uint8_t *v13;
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm4_4
  int v28;
  int v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v31)) > _g4_s1 ? (4u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v32)) > _g4_s2 ? (8u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);

  v33[3] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v31 = a3;
  v4 = *(char *)(a1 + 32);
  *(uint8_t *)(a1 + 192) = 1;
  if ( (char)v4 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v30 = v3;
    v5 = 0;
    v32 = 40 * v4;
    v6 = *(uint32_t *)(v3 + 140);
    v7 = 0;
    do
    {
      v8 = *(char *)(v6 + v7 + 36);
      v7 += 40;
      if ( v8 >= v5 )
        v5 = v8 + 1;
    }
    while ( v7 != v32 );
    v3 = v30;
  }
  v9 = *(uint32_t *)(v3 + 156);
  if ( v9 < v5 )
  {
    v28 = *(uint32_t *)(v3 + 160) & 0x3FFFFFFF;
    if ( v28 < v5 )
    {
      v29 = 2 * v28;
      if ( v5 >= v29 )
        v29 = v5;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v33,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)(v3 + 152),
        v29,
        1);
    }
    *(uint32_t *)(v3 + 156) = v5;
    v9 = v5;
  }
  v10 = 0;
  if ( v9 > 0 )
  {
    do
      *(uint8_t *)(*(uint32_t *)(v3 + 152) + v10++) = 0;
    while ( *(uint32_t *)(v3 + 156) > v10 );
  }
  v11 = 0;
  for ( i = 0; *(char *)(v3 + 32) > i; ++*v13 )
  {
    ++i;
    v13 = (uint8_t *)(*(uint32_t *)(v3 + 152) + *(char *)(*(uint32_t *)(v3 + 140) + v11 + 36));
    v11 += 40;
  }
  v15 = *(float *)(v3 + 104) / *(float *)(v3 + 116);
  v16 = *(float *)(v3 + 96) / *(float *)(v3 + 120);
  v17 = *(float *)(v3 + 100) / *(float *)(v3 + 124);
  v18 = fabs(*(float *)(v3 + 52));
  v19 = fabs(*(float *)(v3 + 68));
  v20 = *(float *)(v31 + 428);
  v21 = fabs(*(float *)(v3 + 72));
  *(float *)(v3 + 188) = v20;
  v22 = (float)((float)(v18 * v15) + (float)(v19 * v16)) + (float)(fabs(*(float *)(v3 + 84)) * v17);
  v23 = (float)(fabs(*(float *)(v3 + 56)) * v15) + (float)(v21 * v16);
  v24 = fabs(*(float *)(v3 + 88)) * v17;
  *(float *)(v3 + 180) = v22 * v20;
  v25 = (float)(v23 + v24) * v20;
  v26 = (float)(fabs(*(float *)(v3 + 48)) * v15) + (float)(fabs(*(float *)(v3 + 64)) * v16);
  v27 = *(float *)(v3 + 80);
  *(float *)(v3 + 184) = v25;
  *(float *)(v3 + 176) = (float)(v26 + (float)(fabs(v27) * v17)) * v20;
  return v31;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleData::Destroy_ea1865040  (binary VA: 0x1865040)
// Original: hkpVehicleData::~hkpVehicleData
// ----------------------------------------------------------------------------
void hkpVehicleData::Destroy_ea1865040(hkpVehicleData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4A08);
  v1 = *((uint32_t *)self + 40);
  *((uint32_t *)self + 39) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 38),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 40) = 0x80000000;
  *((uint32_t *)self + 36) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 35),
      40 * v2);
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 37) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 208;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleData::Construct  (binary VA: 0x1865140)
// Original: hkpVehicleData::hkpVehicleData
// ----------------------------------------------------------------------------
void hkpVehicleData::Construct(hkpVehicleData::Self *self)
{
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4A08);
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0x80000000;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0x80000000;
  *((uint8_t *)self + 32) = 0;
  *((uint32_t *)self + 28) = 1092616192;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint64_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 1065353216;
  *(uint64_t *)((char *)self + 124) = 1065353216;
  *((uint32_t *)self + 33) = 1036831949;
  *((uint32_t *)self + 44) = 0;
  *((uint8_t *)self + 192) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 34) = 1106247680;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::getBufferSize  (binary VA: 0x1865270)
// Original: hkpVehicleRayCastBatchingManager::getBufferSize
// ----------------------------------------------------------------------------
unsigned int hkpVehicleRayCastBatchingManager::getBufferSize(int a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;

  v3 = *(uint32_t *)(a3 + 4);
  if ( v3 <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v4 = *(int **)a3;
    v5 = 0;
    do
    {
      v6 = *v4++;
      v5 += *(uint8_t *)(*(uint32_t *)(v6 + 28) + 32);
    }
    while ( v4 != (int *)(*(uint32_t *)a3 + 4 * v3) );
    v7 = 160 * v5;
  }
  return 16 * a2 + ((v3 + 15) & 0xFFFFFFF0) + v7;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::Destroy  (binary VA: 0x18652c0)
// Original: hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager
// ----------------------------------------------------------------------------
void hkpVehicleRayCastBatchingManager::Destroy(hkpVehicleRayCastBatchingManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A54A8);
  hkpVehicleManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::Destroy_ea18652f0  (binary VA: 0x18652f0)
// Original: hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager
// ----------------------------------------------------------------------------
void hkpVehicleRayCastBatchingManager::Destroy_ea18652f0(hkpVehicleRayCastBatchingManager::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A54A8);
  hkpVehicleManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer  (binary VA: 0x1865360)
// Original: hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer
// ----------------------------------------------------------------------------
int hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer(int a1, int a2, int a3, uint32_t *a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;

  v5 = *(uint32_t *)(a5 + 4);
  if ( v5 <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v6 = *(int **)a5;
    v7 = 0;
    do
    {
      v8 = *v6++;
      v7 += *(uint8_t *)(*(uint32_t *)(v8 + 28) + 32);
    }
    while ( v6 != (int *)(*(uint32_t *)a5 + 4 * v5) );
    v9 = 80 * v7;
  }
  v10 = a2 + v9;
  result = a2 + v9 + v9;
  *a4 = a2;
  a4[1] = v10;
  a4[2] = result;
  a4[3] = result + ((v5 + 15) & 0xFFFFFFF0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::buildAndAddCastJobs  (binary VA: 0x18653c0)
// Original: hkpVehicleRayCastBatchingManager::buildAndAddCastJobs
// ----------------------------------------------------------------------------
int hkpVehicleRayCastBatchingManager::buildAndAddCastJobs(int a1, int a2, int a3, int a4, pthread_mutex_t *a5, int a6, int a7, uint32_t *a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[4];
  typedef uint32_t _g4_t_v30[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v19)) > _g4_s1 ? (24u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v20)) > _g4_s2 ? (28u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v25)) > _g4_s7 ? (40u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v26)) > _g4_s8 ? (40u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v28)) > _g4_s10 ? (44u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v29)) > _g4_s11 ? (48u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v30)) > _g4_s12 ? (64u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);

  v24 = *(uint32_t *)(a2 + 116);
  v8 = a8[1];
  v22 = v8;
  hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer(a1, a7, a4, v29, (int)(uintptr_t)(a8));
  v27 = v29[0];
  if ( v8 <= 0 )
  {
    v20 = 0;
  }
  else
  {
    v9 = 0;
    v20 = 0;
    v25 = v29[1];
    do
    {
      while ( 1 )
      {
        v18 = *(uint32_t *)(*(uint32_t *)(*a8 + 4 * v9) + 60);
        v11 = G4_VCALL<int>(v18, 56, *(uint32_t *)(*a8 + 4 * v9), v24, a3, v27, v25);
        if ( v11 <= 0 )
          break;
        v20 += v11;
        *(uint8_t *)(v29[2] + v9++) = v11;
        v10 = 80 * v11;
        v27 += v10;
        v25 += v10;
        if ( v9 == v22 )
          goto LABEL_6;
      }
      *(uint8_t *)(v29[2] + v9++) = 0;
    }
    while ( v9 != v22 );
  }
LABEL_6:
  v12 = v20;
  if ( v20 > a4 )
    v12 = a4;
  v23 = v12;
  if ( v12 != 0 )
  {
    v13 = v29[3];
    v14 = v20 % v12;
    v21 = v20 / v12;
    v19 = v14;
    v26 = v29[0];
    if ( v12 > 0 )
    {
      v28 = 0;
      do
      {
        v30[3] = v13;
        v15 = v21 + (v28 < v19);
        LOWORD(v30[0]) = 768;
        v30[1] = -65488;
        v30[4] = 0;
        v16 = *(uint32_t *)(a2 + 112);
        BYTE2(v30[0]) = 1;
        v30[5] = v16;
        v30[2] = a6;
        v30[7] = v26;
        v30[6] = 90;
        v30[8] = v15;
        v13 += 16;
        *(uint32_t *)(v13 - 16) = (v15 - 1) / 90 + 1;
        hkpShapeRayCastJob::setRunsOnSpuOrPpu((hkpShapeRayCastJob::Self *)v30);
        hkJobQueue::addJob(a5, v30, 1);
        ++v28;
        v26 += 80 * v15;
      }
      while ( v28 != v23 );
    }
  }
  return v23;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastBatchingManager::stepVehiclesUsingCastResults  (binary VA: 0x18655e0)
// Original: hkpVehicleRayCastBatchingManager::stepVehiclesUsingCastResults
// ----------------------------------------------------------------------------
int hkpVehicleRayCastBatchingManager::stepVehiclesUsingCastResults(int a1, int a2, int a3, int a4, uint32_t *a5)
{
  int **address;
  int *v6;
  uint32_t *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  hkLifoAllocator::Self *v15;
  signed int v16;
  int result;
  typedef int **_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef signed int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26;
  typedef char _g4_t_v27[4];
  typedef uint32_t _g4_t_v28[4];
  typedef uint32_t *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef void *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int *_g4_t_v34;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v26)) > _g4_s8 ? (43u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v28)) > _g4_s10 ? (48u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v29)) > _g4_s11 ? (64u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v30)) > _g4_s12 ? (68u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v31)) > _g4_s13 ? (72u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v32)) > _g4_s14 ? (76u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v33)) > _g4_s15 ? (80u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v34)) > _g4_s16 ? (104u + sizeof(_g4_t_v34)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 43u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 104u);

  v34 = &a1;
  v19 = a2;
  v21 = a5;
  v20 = a5[1];
  hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer(a1, a4, a3, v28, (int)(uintptr_t)(a5));
  v29 = nullptr;
  v24 = v28[0];
  v30 = 0;
  v31 = 0x80000000;
  v33 = 16;
  address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v6 = *address;
  v18 = address;
  v7 = (uint32_t *)(*address)[3];
  if ( v6[2] > 1535 && (unsigned int)(uintptr_t)(v7 + 384) <= v6[4] )
    v6[3] = (int)(uintptr_t)(v7 + 384);
  else
    v7 = (uint32_t *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v6, 1536);
  v29 = v7;
  v31 = -2147483632;
  v32 = v7;
  if ( v20 <= 0 )
    goto LABEL_21;
  v8 = -2147483632;
  v23 = 0;
  while ( 1 )
  {
    v9 = v8 & 0x3FFFFFFF;
    v25 = *(uint32_t *)(*v21 + 4 * v23);
    v10 = *(uint8_t *)(*(uint32_t *)(v25 + 28) + 32);
    v22 = v10;
    if ( v10 > v9 )
    {
      v11 = 2 * v9;
      if ( v11 < (int)v10 )
        v11 = *(uint8_t *)(*(uint32_t *)(v25 + 28) + 32);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v27,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v29,
        v11,
        96);
      v22 = *(uint8_t *)(*(uint32_t *)(v25 + 28) + 32);
    }
    v30 = v10;
    v12 = *(uint32_t *)(v25 + 60);
    if ( v22 != 0 )
    {
      v26 = 0;
      do
      {
        while ( *(uint8_t *)(v28[2] + v23) == 0 )
        {
          v14 = 24 * (char)v26;
          G4_VCALL<void>(v12, 72, v25, v26, &v29[v14]);
          G4_VCALL<void>(v12, 52, v25, v26++, &v29[v14]);
          if ( (char)v26 >= v22 )
            goto LABEL_17;
        }
        v13 = 24 * (char)v26;
        if ( *(uint32_t *)(v24 + 72) != 0 )
          G4_VCALL<void>(v12, 68, v25, v26, *(uint32_t *)(v24 + 64), &v29[v13]);
        else
          G4_VCALL<void>(v12, 72, v25, v26, &v29[v13]);
        G4_VCALL<void>(v12, 52, v25, v26++, &v29[v13]);
        v24 += 80;
      }
      while ( (char)v26 < v22 );
    }
LABEL_17:
    hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(*(uint32_t **)(*v21 + 4 * v23++), v19, v29);
    if ( v23 == v20 )
      break;
    v8 = v31;
  }
  v7 = (uint32_t *)(v32);
  if ( v29 == v32 )
LABEL_21:
    v30 = 0;
  v15 = (hkLifoAllocator::Self *)*v18;
  v16 = (96 * v33 + 127) & 0xFFFFFF80;
  if ( v16 > (*v18)[2] || *((uint32_t **)v15 + 3) != (uint32_t *)((char *)v7 + v16) || *((uint32_t **)v15 + 5) == v7 )
    hkLifoAllocator::slowBlockFree(v15, (char *)v7, (96 * v33 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v15 + 3) = (uint32_t)(uintptr_t)(v7);
  result = v31;
  v30 = 0;
  if ( v31 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v29,
             96 * v31);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::addVehicle  (binary VA: 0x1865940)
// Original: hkpVehicleManager::addVehicle
// ----------------------------------------------------------------------------
int hkpVehicleManager::addVehicle(hkpVehicleManager::Self *self, hkpVehicleInstance::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4
  int v4;
  int result;
  int v6;

  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
  v4 = *((uint32_t *)self + 3);
  if ( v4 == (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpVehicleManager::Self *)((char *)self + 8),
      4,
      v6);
    v4 = *((uint32_t *)self + 3);
  }
  result = *((uint32_t *)self + 2);
  *(uint32_t *)(result + 4 * v4) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::Destroy  (binary VA: 0x18659d0)
// Original: hkpVehicleManager::~hkpVehicleManager
// ----------------------------------------------------------------------------
void hkpVehicleManager::Destroy(hkpVehicleManager::Self *self)
{
  int v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4AA8);
  v9 = *((uint32_t *)self + 3);
  if ( v9 > 0 )
  {
    do
    {
      v2 = *(uint32_t *)(*((uint32_t *)self + 2) + 4 * v1);
      if ( *(uint16_t *)(v2 + 6) != 0 )
      {
        v8 = v1;
        do
        {
          v4 = *(uint32_t *)(v2 + 4);
          HIWORD(v3) = HIWORD(v4);
          LOWORD(v3) = 0;
          v5 = v3 | (uint16_t)(v4 - 1);
          v6 = v4;
        }
        while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
        v1 = v8;
        if ( (uint16_t)v5 == 0 )
          G4_VCALL<void>(v2, 16);
      }
      ++v1;
    }
    while ( v1 != v9 );
  }
  v7 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v7);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::Destroy_ea1865aa0  (binary VA: 0x1865aa0)
// Original: hkpVehicleManager::~hkpVehicleManager
// ----------------------------------------------------------------------------
void hkpVehicleManager::Destroy_ea1865aa0(hkpVehicleManager::Self *self)
{
  int v1;
  int v2;

  hkpVehicleManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::removeVehicle  (binary VA: 0x1865b00)
// Original: hkpVehicleManager::removeVehicle
// ----------------------------------------------------------------------------
int hkpVehicleManager::removeVehicle(hkpVehicleManager::Self *self, hkpVehicleInstance::Self *a2)
{
  int v2;
  hkpVehicleInstance::Self **v3;
  int result;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett

  v2 = *((uint32_t *)self + 3);
  v3 = *((hkpVehicleInstance::Self ***)self + 2);
  if ( v2 <= 0 )
  {
LABEL_6:
    v5 = -1;
    result = -1;
    goto LABEL_7;
  }
  if ( *v3 != a2 )
  {
    result = 0;
    while ( ++result != v2 )
    {
      v5 = result;
      if ( v3[result] == a2 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
  v5 = 0;
  result = 0;
LABEL_7:
  v6 = v2 - 1;
  *((uint32_t *)self + 3) = v6;
  if ( result != v6 )
  {
    result = (int)(uintptr_t)(v3[v6]);
    v3[v5] = (hkpVehicleInstance::Self *)result;
  }
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v8 = *((uint32_t *)a2 + 1);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9);
    }
    while ( v10 != result );
    if ( (uint16_t)v9 == 0 )
      return G4_VCALL<int>(a2, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::stepVehicleArray  (binary VA: 0x1865ba0)
// Original: hkpVehicleManager::stepVehicleArray
// ----------------------------------------------------------------------------
int hkpVehicleManager::stepVehicleArray(uint32_t *a1, int a2)
{
  int **address;
  int *v3;
  void *v4;
  hkLifoAllocator::Self *v5;
  char *v6;
  hkLifoAllocator::Self *v7;
  char *v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint64_t v18; // rax
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  signed int v22;
  hkLifoAllocator::Self *v23;
  int v24;
  hkLifoAllocator::Self *v25;
  signed int v26;
  unsigned int v27;
  hkLifoAllocator::Self *v28;
  signed int v29;
  int result;
  typedef int **_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int _g4_t_i;
  typedef char _g4_t_v39[4];
  typedef uint32_t *_g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef void *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef void *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t _g4_t_v55[14];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v37)) > _g4_s6 ? (24u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_i)) > _g4_s7 ? (36u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v39)) > _g4_s8 ? (40u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v40)) > _g4_s9 ? (44u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v41)) > _g4_s10 ? (48u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v42)) > _g4_s11 ? (52u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v43)) > _g4_s12 ? (56u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v44)) > _g4_s13 ? (60u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v45)) > _g4_s14 ? (76u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v46)) > _g4_s15 ? (80u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v47)) > _g4_s16 ? (84u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v48)) > _g4_s17 ? (88u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v49)) > _g4_s18 ? (92u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v50)) > _g4_s19 ? (108u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v51)) > _g4_s20 ? (112u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v52)) > _g4_s21 ? (116u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v53)) > _g4_s22 ? (120u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v54)) > _g4_s23 ? (124u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v55)) > _g4_s24 ? (140u + sizeof(_g4_t_v55)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 116u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 120u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 124u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 140u);

  v55[10] = (uint32_t)(uintptr_t)(&a1);
  v36 = a1;
  v34 = a2;
  v40 = nullptr;
  v41 = 0;
  v42 = 0x80000000;
  v44 = 32;
  address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v3 = *address;
  v31 = address;
  v4 = (void *)(*address)[3];
  if ( v3[2] > 3071 && (unsigned int)(uintptr_t)(v4) + 3072 <= v3[4] )
    v3[3] = (int)(uintptr_t)(v4) + 3072;
  else
    v4 = (void *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v3, 3072);
  v43 = v4;
  v40 = (uint32_t *)(v4);
  v49 = 32;
  v42 = -2147483616;
  v47 = 0x80000000;
  v45 = nullptr;
  v46 = 0;
  v5 = (hkLifoAllocator::Self *)*v31;
  v6 = (char *)(*v31)[3];
  if ( (*v31)[2] > 127 && (unsigned int)(uintptr_t)(v6 + 128) <= *((uint32_t *)v5 + 4) )
    *((uint32_t *)v5 + 3) = (uint32_t)(uintptr_t)(v6 + 128);
  else
    v6 = (char *)hkLifoAllocator::allocateFromNewSlab(v5, 128);
  v48 = v6;
  v45 = v6;
  v54 = 32;
  v47 = -2147483616;
  v52 = 0x80000000;
  v50 = nullptr;
  v51 = 0;
  v7 = (hkLifoAllocator::Self *)*v31;
  v8 = (char *)(*v31)[3];
  if ( (*v31)[2] > 127 && (unsigned int)(uintptr_t)(v8 + 128) <= *((uint32_t *)v7 + 4) )
    *((uint32_t *)v7 + 3) = (uint32_t)(uintptr_t)(v8 + 128);
  else
    v8 = (char *)hkLifoAllocator::allocateFromNewSlab(v7, 128);
  v50 = v8;
  v52 = -2147483616;
  v53 = v8;
  v35 = v36[1];
  if ( v35 <= 0 )
    goto LABEL_30;
  v37 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  for ( i = 0; i != v35; ++i )
  {
    v9 = *(uint32_t *)(*v36 + 4 * i);
    v10 = *(uint8_t *)(*(uint32_t *)(v9 + 28) + 32);
    v11 = v10;
    if ( v10 > (v42 & 0x3FFFFFFFu) )
    {
      v12 = 2 * (v42 & 0x3FFFFFFF);
      v32 = *(uint8_t *)(*(uint32_t *)(v9 + 28) + 32);
      if ( v12 < (int)v10 )
        v12 = *(uint8_t *)(*(uint32_t *)(v9 + 28) + 32);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v39,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v40,
        v12,
        96);
      v10 = v32;
      v11 = *(uint8_t *)(*(uint32_t *)(v9 + 28) + 32);
    }
    v41 = v10;
    v13 = v11;
    if ( (v47 & 0x3FFFFFFF) < v11 )
    {
      v14 = 2 * (v47 & 0x3FFFFFFF);
      if ( v11 >= v14 )
        v14 = v11;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v39,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v45,
        v14,
        4);
      v13 = *(uint8_t *)(*(uint32_t *)(v9 + 28) + 32);
    }
    v46 = v11;
    if ( (v52 & 0x3FFFFFFF) < v13 )
    {
      v15 = 2 * (v52 & 0x3FFFFFFF);
      v33 = v13;
      if ( v13 >= v15 )
        v15 = v13;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v39,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v50,
        v15,
        4);
      v13 = v33;
    }
    v51 = v13;
    hkpVehicleInstance::updateBeforeCollisionDetection((hkpVehicleInstance::Self *)v9);
    v16 = *v37;
    v17 = *(uint32_t **)(*v37 + 4);
    if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*v37 + 12) )
    {
      *v17 = (uint32_t)(uintptr_t)("TtVehicleJob");
      v18 = __rdtsc();
      v17[1] = v18;
      *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
    }
    (*(void (**)(uint32_t, uint32_t, int, uint32_t *))(**(uint32_t **)(v9 + 60) + 24))(
      *(uint32_t *)(v9 + 60),
      *(uint32_t *)(v34 + 8),
      v9,
      v40);
    hkpVehicleInstance::updateComponents((uint32_t *)v9, v34, v40, (int)(uintptr_t)(v55), (uint32_t *)(&v45), (uint32_t *)(&v50));
    hkpVehicleInstance::simulateVehicle(v9, v34, (int)(uintptr_t)(v55), (int)(uintptr_t)(&v45), (int)(uintptr_t)(&v50), 0);
    v19 = *v37;
    v20 = *(uint32_t **)(*v37 + 4);
    if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*v37 + 12) )
    {
      *v20 = (uint32_t)(uintptr_t)("Et");
      v21 = __rdtsc();
      v20[1] = v21;
      *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
    }
  }
  v8 = (char *)v53;
  if ( v50 == v53 )
LABEL_30:
    v51 = 0;
  v22 = (4 * v54 + 127) & 0xFFFFFF80;
  v23 = (hkLifoAllocator::Self *)*v31;
  if ( v22 > (*v31)[2] || *((char **)v23 + 3) != &v8[v22] || *((char **)v23 + 5) == v8 )
    hkLifoAllocator::slowBlockFree(v23, v8, (4 * v54 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v23 + 3) = (uint32_t)(uintptr_t)(v8);
  v51 = 0;
  if ( v52 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v50,
      4 * v52);
  v24 = 0;
  if ( v45 != v48 )
    v24 = v46;
  v46 = v24;
  v52 = 0x80000000;
  v25 = (hkLifoAllocator::Self *)*v31;
  v26 = (4 * v49 + 127) & 0xFFFFFF80;
  v50 = nullptr;
  if ( v26 > *((uint32_t *)v25 + 2) || *((void **)v25 + 3) != (char *)v48 + v26 || v48 == *((void **)v25 + 5) )
    hkLifoAllocator::slowBlockFree(v25, (char *)v48, (4 * v49 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v25 + 3) = (uint32_t)(uintptr_t)(v48);
  v46 = 0;
  if ( v47 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v45,
      4 * v47);
  v27 = 0;
  if ( v40 != v43 )
    v27 = v41;
  v41 = v27;
  v47 = 0x80000000;
  v45 = nullptr;
  v28 = (hkLifoAllocator::Self *)*v31;
  v29 = (96 * v44 + 127) & 0xFFFFFF80;
  if ( v29 > (*v31)[2] || *((void **)v28 + 3) != (char *)v43 + v29 || v43 == *((void **)v28 + 5) )
    hkLifoAllocator::slowBlockFree(v28, (char *)v43, (96 * v44 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v28 + 3) = (uint32_t)(uintptr_t)(v43);
  result = v42;
  v41 = 0;
  if ( v42 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v40,
             96 * v42);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::getActiveVehicles  (binary VA: 0x1866170)
// Original: hkpVehicleManager::getActiveVehicles
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpVehicleManager::getActiveVehicles(hkpEntity::Self *a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  hkpEntity::Self *result;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8[25];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v8)) > _g4_s2 ? (27u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 27u);

  v2 = 0;
  for ( result = a1; *((uint32_t *)a1 + 3) > v2; ++*((uint32_t *)a2 + 1) )
  {
    while ( 1 )
    {
      v7 = *(uint32_t *)(*((uint32_t *)a1 + 2) + 4 * v2);
      result = hkpEntity::isActive((hkpEntity::Self *)v8, *(uint32_t *)(v7 + 24));
      v4 = v7;
      if ( v8[0] != 0 )
        break;
      if ( *((uint32_t *)a1 + 3) <= ++v2 )
        return result;
    }
    v5 = *((uint32_t *)a2 + 1);
    if ( v5 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v6);
      v4 = v7;
      v5 = *((uint32_t *)a2 + 1);
    }
    ++v2;
    *(uint32_t *)(*(uint32_t *)a2 + 4 * v5) = v4;
    result = (hkpEntity::Self *)(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::stepVehicles  (binary VA: 0x1866230)
// Original: hkpVehicleManager::stepVehicles
// ----------------------------------------------------------------------------
int hkpVehicleManager::stepVehicles(hkpEntity::Self *a1, int a2)
{
  int v2;
  hkLifoAllocator::Self **v3;
  char *v4;
  int v5;
  hkLifoAllocator::Self *v6;
  signed int v7;
  int result;
  hkLifoAllocator::Self *v9;
  signed int v10;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef signed int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_address)) > _g4_s0 ? (12u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v12 = nullptr;
  v13 = 0;
  v14 = 0x80000000;
  v16 = *((uint32_t *)a1 + 3);
  v2 = v16;
  if ( v16 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v9 = *address;
    v10 = (4 * v16 + 127) & 0xFFFFFF80;
    v4 = *((char **)*address + 3);
    if ( v10 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v4[v10]) <= *((uint32_t *)v9 + 4) )
      *((uint32_t *)v9 + 3) = (uint32_t)(uintptr_t)(&v4[v10]);
    else
      v4 = (char *)hkLifoAllocator::allocateFromNewSlab(v9, (4 * v16 + 127) & 0xFFFFFF80);
    v3 = address;
  }
  else
  {
    v3 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v4 = nullptr;
  }
  v14 = v2 | 0x80000000;
  v12 = v4;
  v15 = v4;
  hkpVehicleManager::getActiveVehicles(a1, (hkMemoryAllocator::Self *)&v12);
  if ( v13 != 0 )
    hkpVehicleManager::stepVehicleArray(&v12, a2);
  v5 = 0;
  if ( v12 != v15 )
    v5 = v13;
  v6 = *v3;
  v13 = v5;
  v7 = (4 * v16 + 127) & 0xFFFFFF80;
  if ( v7 > *((uint32_t *)v6 + 2) || *((char **)v6 + 3) != &v15[v7] || v15 == *((char **)v6 + 5) )
    hkLifoAllocator::slowBlockFree(v6, v15, (4 * v16 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(v15);
  result = v14;
  v13 = 0;
  if ( v14 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v12,
             4 * v14);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::addToWorld  (binary VA: 0x18663a0)
// Original: hkpVehicleManager::addToWorld
// ----------------------------------------------------------------------------
int hkpVehicleManager::addToWorld(hkpVehicleManager::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 2) + 4 * v2++);
      result = G4_VCALL<int>(v4, 44, a2);
    }
    while ( v2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::removeFromWorld  (binary VA: 0x18663f0)
// Original: hkpVehicleManager::removeFromWorld
// ----------------------------------------------------------------------------
int hkpVehicleManager::removeFromWorld(hkpVehicleManager::Self *self)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 0;
  v2 = *((uint32_t *)self + 3);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 2) + 4 * v1++);
      result = G4_VCALL<int>(v3, 48);
    }
    while ( v1 != v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInputAnalogStatus::Destroy  (binary VA: 0x1866430)
// Original: hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus
// ----------------------------------------------------------------------------
void hkpVehicleDriverInputAnalogStatus::Destroy(hkpVehicleDriverInputAnalogStatus::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInput::Destroy  (binary VA: 0x1866450)
// Original: hkpVehicleDriverInput::~hkpVehicleDriverInput
// ----------------------------------------------------------------------------
void hkpVehicleDriverInput::Destroy(hkpVehicleDriverInput::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::calcAcceleratorInput  (binary VA: 0x1866470)
// Original: hkpVehicleDefaultAnalogDriverInput::calcAcceleratorInput
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultAnalogDriverInput::calcAcceleratorInput(int a1, int a2, int a3, int a4)
{
  long double result; // fst7
  float v5; // xmm0_4

  if ( *(uint8_t *)(a3 + 140) == 0 )
  {
    result = 0.0;
    v5 = *(float *)(a4 + 12);
    if ( v5 > (float)0.0 )
      return result;
    return (float)-v5;
  }
  if ( *(uint8_t *)(a1 + 20) == 0 )
    return 1.0;
  result = 0.0;
  v5 = -*(float *)(a4 + 12);
  if ( v5 <= (float)0.0 )
    return (float)-v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::calcBrakeInput  (binary VA: 0x1866500)
// Original: hkpVehicleDefaultAnalogDriverInput::calcBrakeInput
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultAnalogDriverInput::calcBrakeInput(int a1, int a2, int a3, int a4)
{
  float v4; // xmm1_4

  if ( *(uint8_t *)(a3 + 140) != 0 && *(uint8_t *)(a1 + 20) != 0 )
    v4 = -*(float *)(a4 + 12);
  else
    v4 = *(float *)(a4 + 12);
  return fmaxf(0.0, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::calcSteeringInput  (binary VA: 0x1866560)
// Original: hkpVehicleDefaultAnalogDriverInput::calcSteeringInput
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultAnalogDriverInput::calcSteeringInput(float *a1, int a2, int a3, int a4)
{
  __m128 v4;
  float v5; // xmm2_4
  float v6; // xmm0_4
  __m128 v7;
  float v8; // xmm3_4
  float v9; // xmm1_4

g4_m128_lane<int32_t>(v4, 0) = *(uint32_t *)(a4 + 8);
  v5 = a1[4];
  v6 = fabs(g4_m128_lane<float>(v4, 0));
  if ( v5 > v6 )
    return 0.0;
  v7 = _mm_cmplt_ss(g4_m128_from<__m128>(0LL), v4);
  v8 = a1[2];
  LODWORD(v9) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v7, g4_m128_from<__m128>(0xBF800000)), 0) |g4_m128_lane<int32_t>(v7, 0) & 0x3F800000;
  if ( v8 > v6 )
    return (float)((float)((float)(v6 - v5) * a1[3]) * v9);
  else
    return (float)((float)((float)((float)(v6 - v8)
                                 * (float)((float)(1.0 - (float)(a1[3] * (float)(v8 - v5)))
                                         / (float)((float)(1.0 - v5) - (float)(v8 - v5))))
                         + (float)(a1[3] * (float)(v8 - v5)))
                 * v9);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::calcDriverInput  (binary VA: 0x1866640)
// Original: hkpVehicleDefaultAnalogDriverInput::calcDriverInput
// ----------------------------------------------------------------------------
int hkpVehicleDefaultAnalogDriverInput::calcDriverInput(int a1, int64_t a2, int a3, int a4)
{
  int result;
  typedef float _g4_t_v6;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8;
  typedef uint8_t _g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v9)) > _g4_s3 ? (15u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);

  v6 = ((long double (*)(int, uint32_t, uint32_t, int, int))*(uint32_t *)(*(uint32_t *)a1 + 24))(
         a1,
         a2,
         HIDWORD(a2),
         a3,
         a4);
  *(float *)a4 = v6;
  v7 = ((long double (*)(int, uint32_t, uint32_t, int, int))*(uint32_t *)(*(uint32_t *)a1 + 28))(
         a1,
         a2,
         HIDWORD(a2),
         a3,
         a4);
  *(float *)(a4 + 4) = v7;
  v8 = ((long double (*)(int, uint32_t, uint32_t, int, int))*(uint32_t *)(*(uint32_t *)a1 + 36))(
         a1,
         a2,
         HIDWORD(a2),
         a3,
         a4);
  *(float *)(a4 + 8) = v8;
  *(uint8_t *)(a4 + 12) = *(uint8_t *)(a3 + 16);
  result = (*(int (**)(uint8_t *, int, uint32_t, uint32_t, int, int, uint32_t))(*(uint32_t *)a1 + 32))(
             v9,
             a1,
             a2,
             HIDWORD(a2),
             a3,
             a4,
             LODWORD(v8));
  *(uint8_t *)(a4 + 13) = v9[0];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::Destroy  (binary VA: 0x1866730)
// Original: hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAnalogDriverInput::Destroy(hkpVehicleDefaultAnalogDriverInput::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::Destroy_ea1866750  (binary VA: 0x1866750)
// Original: hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAnalogDriverInput::Destroy_ea1866750(hkpVehicleDefaultAnalogDriverInput::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInputAnalogStatus::clone  (binary VA: 0x18667b0)
// Original: hkpVehicleDriverInputAnalogStatus::clone
// ----------------------------------------------------------------------------
int hkpVehicleDriverInputAnalogStatus::clone(hkpVehicleDriverInputAnalogStatus::Self *self)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             20);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A4B28);
  *(uint32_t *)(result + 8) = *((uint32_t *)self + 2);
  *(uint32_t *)(result + 12) = *((uint32_t *)self + 3);
  *(uint8_t *)(result + 16) = *((uint8_t *)self + 16);
  *(uint8_t *)(result + 17) = *((uint8_t *)self + 17);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInput::Destroy_ea1866830  (binary VA: 0x1866830)
// Original: hkpVehicleDriverInput::~hkpVehicleDriverInput
// ----------------------------------------------------------------------------
void hkpVehicleDriverInput::Destroy_ea1866830(hkpVehicleDriverInput::Self *self)
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
// Function: hkpVehicleDriverInputAnalogStatus::Destroy_ea1866890  (binary VA: 0x1866890)
// Original: hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus
// ----------------------------------------------------------------------------
void hkpVehicleDriverInputAnalogStatus::Destroy_ea1866890(hkpVehicleDriverInputAnalogStatus::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::calcTryingToReverse  (binary VA: 0x1866950)
// Original: hkpVehicleDefaultAnalogDriverInput::calcTryingToReverse
// ----------------------------------------------------------------------------
bool * hkpVehicleDefaultAnalogDriverInput::calcTryingToReverse(bool *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  __m128i v7;
  int v8;
  int v9;
  int v10;
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __m128i v16;
  int v17;
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  bool v21;
  float v22; // xmm1_4
  float *v23;
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm5_4
  __m128i v27;
  float v28; // xmm1_4
  float v29; // xmm5_4
  int v30; // xmm2_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  __m128i v34;
  float v35; // xmm7_4
  float v36; // xmm4_4
  int v37; // xmm2_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v42;
  float v43;
  float v44;
  bool v45;
  float v46;
  float v47;

  if ( *(uint8_t *)(a2 + 20) != 0 )
  {
    v5 = *(uint32_t *)(a4 + 24);
    v6 = *(uint32_t *)(a4 + 80);
    v43 = *(float *)(v5 + 436);
g4_m128_raw(v7) = *(unsigned int *)(v5 + 432);
    v42 = *(float *)(v5 + 440);
    if ( v6 > 0 )
    {
      v8 = *(uint32_t *)(a4 + 76);
      v9 = 0;
      while ( 1 )
      {
        v10 = *(uint32_t *)(v8 + 36);
        if ( v10 != 0 && *(uint8_t *)(v10 + 232) != 5 )
          break;
        ++v9;
        v8 += 224;
        if ( v9 == v6 )
          goto LABEL_8;
      }
      v11 = *(float *)(v8 + 4) - *(float *)(v10 + 324);
      v12 = *(float *)v8 - *(float *)(v10 + 320);
      v13 = *(float *)(v8 + 8) - *(float *)(v10 + 328);
      v14 = *(float *)(v10 + 456);
      v15 = *(float *)(v10 + 448);
      *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v7)
                             - (float)((float)((float)(*(float *)(v10 + 452) * v13) - (float)(v11 * v14))
                                     + *(float *)(v10 + 432));
      v43 = v43 - (float)((float)((float)(v14 * v12) - (float)(v13 * v15)) + *(float *)(v10 + 436));
      v42 = v42 - (float)((float)((float)(v11 * v15) - (float)(v12 * *(float *)(v10 + 452))) + *(float *)(v10 + 440));
    }
LABEL_8:
    v16 = v7;
    *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v43 * v43))
                            + (float)(v42 * v42);
    if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
    {
      v20 = 0.0;
      v21 = true;
    }
    else
    {
      v17 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
      v18 = (float)(*(float *)&v17 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v17)
                  * (float)(*(float *)&v17 * *(float *)&v17));
      v19 = (float)(v18 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v18) * (float)(v18 * v18));
      v20 = (float)((float)(1.5 * v19)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v19) * (float)(v19 * v19)))
          * *(float *)g4_m128_ptr<int32_t>(v16);
      v21 = v20 < 1.388889f;
    }
    v22 = *(float *)(a5 + 12);
    v45 = v22 > 0.1f;
    if ( v22 > 0.1f && v20 > 0.00000011920929f )
    {
g4_m128_raw(v27) = *(unsigned int *)(v5 + 240);
      v23 = *(float **)(a4 + 28);
      v24 = v23[16];
      v25 = v23[17];
      v26 = v23[18];
      *(float *)g4_m128_ptr<int32_t>(v27) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * v24) + (float)(*(float *)(v5 + 256) * v25))
                              + (float)(*(float *)(v5 + 272) * v26);
      v28 = (float)((float)(*(float *)(v5 + 244) * v24) + (float)(*(float *)(v5 + 260) * v25))
          + (float)(*(float *)(v5 + 276) * v26);
      v46 = (float)((float)(v25 * *(float *)(v5 + 264)) + (float)(v24 * *(float *)(v5 + 248)))
          + (float)(v26 * *(float *)(v5 + 280));
      if ( *(float *)g4_m128_ptr<int32_t>(v16) <= 0.0 )
      {
        v33 = 0.0;
      }
      else
      {
        v29 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
        v30 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
        v31 = (float)(*(float *)&v30 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v30)
                    * (float)(*(float *)&v30 * *(float *)&v30));
        v32 = (float)(v31 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v31) * (float)(v31 * v31));
        v33 = (float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32));
      }
      v34 = v27;
      v47 = *(float *)g4_m128_ptr<int32_t>(v7) * v33;
      *(float *)g4_m128_ptr<int32_t>(v34) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v27)) + (float)(v28 * v28))
                              + (float)(v46 * v46);
      v44 = v43 * v33;
      v35 = v42 * v33;
      if ( *(float *)g4_m128_ptr<int32_t>(v34) <= 0.0 )
      {
        v40 = 0.0;
      }
      else
      {
        v36 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v34);
        v37 = ((_mm_cvtsi128_si32(v34) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v34) >> 1));
        v38 = (float)(*(float *)&v37 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * *(float *)&v37)
                    * (float)(*(float *)&v37 * *(float *)&v37));
        v39 = (float)(v38 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * v38) * (float)(v38 * v38));
        v40 = (float)(1.5 * v39) - (float)((float)(v36 * v39) * (float)(v39 * v39));
      }
      if ( (float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * v40) * v47) + (float)((float)(v28 * v40) * v44))
                 + (float)((float)(v40 * v46) * v35)) < 0.00000011920929f )
        goto LABEL_19;
    }
    if ( *(uint8_t *)(a4 + 140) != 0 )
    {
      if ( !v21 )
      {
LABEL_19:
        *a1 = true;
        return a1;
      }
      *a1 = v45;
      return a1;
    }
    else
    {
      if ( v21 && v45 )
        goto LABEL_19;
      *a1 = false;
      return a1;
    }
  }
  else
  {
    *a1 = *(uint8_t *)(a5 + 17);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::Construct  (binary VA: 0x1866e40)
// Original: hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAnalogDriverInput::Construct(hkpVehicleDefaultAnalogDriverInput::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4B48);
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 20) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::Destroy  (binary VA: 0x1866e80)
// Original: hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager
// ----------------------------------------------------------------------------
void hkpVehicleLinearCastBatchingManager::Destroy(hkpVehicleLinearCastBatchingManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A54A8);
  hkpVehicleManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::Destroy_ea1866eb0  (binary VA: 0x1866eb0)
// Original: hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager
// ----------------------------------------------------------------------------
void hkpVehicleLinearCastBatchingManager::Destroy_ea1866eb0(hkpVehicleLinearCastBatchingManager::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A54A8);
  hkpVehicleManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::getTotalNumCommands  (binary VA: 0x1866f20)
// Original: hkpVehicleLinearCastBatchingManager::getTotalNumCommands
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastBatchingManager::getTotalNumCommands(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  int result;
  int v7;
  int v8;
  uint32_t *v9;

  v4 = 0;
  v5 = a3;
  *a3 = 0;
  *a4 = 0;
  result = a2[1];
  if ( result > 0 )
  {
    do
    {
      v9 = v5;
      v7 = (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(*a2 + 4 * v4) + 60) + 56))(*(uint32_t *)(*(uint32_t *)(*a2 + 4 * v4) + 60));
      v5 = v9;
      *v9 += v7;
      v8 = *(uint32_t *)(*a2 + 4 * v4++);
      result = *(uint8_t *)(*(uint32_t *)(v8 + 28) + 32);
      *a4 += result;
    }
    while ( a2[1] > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::getBufferSize  (binary VA: 0x1866f90)
// Original: hkpVehicleLinearCastBatchingManager::getBufferSize
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastBatchingManager::getBufferSize(int a1, int a2, uint32_t *a3)
{
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  hkpVehicleLinearCastBatchingManager::getTotalNumCommands(a1, a3, (uint32_t *)(&v4), v5);
  return 16 * a2 + 80 * v5[0] + (v4 << 6) + 48 * v4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer  (binary VA: 0x1866ff0)
// Original: hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  hkpVehicleLinearCastBatchingManager::getTotalNumCommands(a1, a5, (uint32_t *)(&v10), v11);
  v5 = v11[0];
  v6 = v10;
  *a4 = a2;
  v7 = 80 * v5 + a2;
  a4[1] = v7;
  v8 = (v6 << 6) + v7;
  a4[2] = v8;
  result = v8 + 48 * v6;
  a4[3] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::buildAndAddCastJobs  (binary VA: 0x1867060)
// Original: hkpVehicleLinearCastBatchingManager::buildAndAddCastJobs
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastBatchingManager::buildAndAddCastJobs(int a1, int a2, int a3, int a4, pthread_mutex_t *a5, int a6, int a7, uint32_t *a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17; // et2
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[4];
  typedef uint32_t _g4_t_v35[19];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v28)) > _g4_s5 ? (16u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v29)) > _g4_s6 ? (20u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v30)) > _g4_s7 ? (20u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v31)) > _g4_s8 ? (24u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v32)) > _g4_s9 ? (28u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v33)) > _g4_s10 ? (28u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v34)) > _g4_s11 ? (32u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v35)) > _g4_s12 ? (48u + sizeof(_g4_t_v35)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);

  v25 = *(uint32_t *)(a2 + 116);
  v8 = a8[1];
  v23 = v8;
  hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer(a1, a7, a4, v34, a8);
  v32 = v34[0];
  v31 = v34[1];
  v9 = v34[2];
  if ( v8 <= 0 )
  {
    v27 = 0;
  }
  else
  {
    v10 = 0;
    v27 = 0;
    do
    {
      v29 = v9;
      v11 = *(uint32_t *)(*a8 + 4 * v10++);
      v12 = (*(int (**)(uint32_t, int, int, int, int, int))(**(uint32_t **)(v11 + 60) + 64))(
              *(uint32_t *)(v11 + 60),
              v11,
              v25,
              v32,
              v31,
              v9);
      v27 += v12;
      v32 += 80 * *(uint8_t *)(*(uint32_t *)(v11 + 28) + 32);
      v31 += v12 << 6;
      v9 = 48 * v12 + v29;
    }
    while ( v10 != v23 );
  }
  v13 = v27;
  v14 = v27;
  if ( v27 > a4 )
    v14 = a4;
  v15 = v14;
  v28 = v14;
  if ( v14 != 0 )
  {
    v17 = v13 % v14;
    v16 = v13 / v14;
    v18 = (uint32_t *)v34[3];
    v26 = v16;
    v24 = v17;
    v33 = v34[1];
    if ( v15 > 0 )
    {
      v19 = 0;
      do
      {
        v30 = v19;
        v35[3] = (uint32_t)(uintptr_t)(v18);
        LOWORD(v35[0]) = 515;
        v20 = v26 + (v19 < v24);
        v35[12] = v20;
        BYTE2(v35[0]) = 2;
        v35[1] = -65472;
        v35[5] = 0;
        v35[4] = *(uint32_t *)(a2 + 112);
        v21 = v20 - 1;
        v35[2] = a6;
        if ( v20 - 1 < 0 )
          v21 = v20 + 126;
        v35[11] = v33;
        v35[6] = 0;
        v35[10] = 128;
        v35[7] = 872415232;
        v35[8] = 1008981770;
        v35[9] = 10;
        *v18 = (v21 >> 7) + 1;
        hkpPairLinearCastJob::setRunsOnSpuOrPpu((hkpPairLinearCastJob::Self *)v35);
        v18 += 4;
        hkJobQueue::addJob(a5, v35, 1);
        v33 += v20 << 6;
        v19 = v30 + 1;
      }
      while ( v30 + 1 != v28 );
    }
  }
  return v28;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastBatchingManager::stepVehiclesUsingCastResults  (binary VA: 0x18672a0)
// Original: hkpVehicleLinearCastBatchingManager::stepVehiclesUsingCastResults
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastBatchingManager::stepVehiclesUsingCastResults(int a1, int a2, int a3, int a4, uint32_t *a5)
{
  int **address;
  int *v6;
  uint32_t *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  hkLifoAllocator::Self *v17;
  signed int v18;
  int result;
  typedef int **_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30[4];
  typedef uint32_t _g4_t_v31[4];
  typedef uint32_t *_g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v27)) > _g4_s7 ? (36u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v28)) > _g4_s8 ? (43u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v29)) > _g4_s9 ? (44u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v30)) > _g4_s10 ? (48u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v31)) > _g4_s11 ? (52u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v32)) > _g4_s12 ? (68u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v33)) > _g4_s13 ? (72u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v34)) > _g4_s14 ? (76u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v35)) > _g4_s15 ? (80u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v36)) > _g4_s16 ? (84u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v37)) > _g4_s17 ? (108u + sizeof(_g4_t_v37)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 43u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);

  v37 = &a1;
  v21 = a2;
  v23 = a5;
  v22 = a5[1];
  hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer(a1, a4, a3, v31, a5);
  v32 = nullptr;
  v27 = v31[1];
  v33 = 0;
  v34 = 0x80000000;
  v36 = 16;
  address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v6 = *address;
  v20 = address;
  v7 = (uint32_t *)(*address)[3];
  if ( v6[2] > 1535 && (unsigned int)(uintptr_t)(v7 + 384) <= v6[4] )
    v6[3] = (int)(uintptr_t)(v7 + 384);
  else
    v7 = (uint32_t *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v6, 1536);
  v32 = v7;
  v34 = -2147483632;
  v35 = v7;
  if ( v22 <= 0 )
  {
LABEL_19:
    v33 = 0;
    goto LABEL_20;
  }
  v8 = -2147483632;
  v24 = 0;
  while ( 1 )
  {
    v9 = v8 & 0x3FFFFFFF;
    v29 = *(uint32_t *)(*v23 + 4 * v24);
    v10 = *(uint8_t *)(*(uint32_t *)(v29 + 28) + 32);
    v25 = v10;
    if ( v10 <= v9 )
    {
      v33 = *(uint8_t *)(*(uint32_t *)(v29 + 28) + 32);
      v12 = *(uint32_t *)(v29 + 60);
      if ( v10 == 0 )
        goto LABEL_16;
    }
    else
    {
      v11 = 2 * v9;
      if ( v11 < (int)v10 )
        v11 = *(uint8_t *)(*(uint32_t *)(v29 + 28) + 32);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v30,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v32,
        v11,
        96);
      v33 = v10;
      v12 = *(uint32_t *)(v29 + 60);
    }
    v13 = 0;
    v28 = 0;
    v14 = 0;
    do
    {
      v26 = v14;
      v16 = G4_VCALL<int>(v12, 68, v13, v27);
      if ( v16 != 0 )
        G4_VCALL<void>(v12, 76, v29, v13, v16, &v32[24 * v26]);
      else
        G4_VCALL<void>(v12, 80, v29, v13, &v32[24 * v26]);
      G4_VCALL<void>(v12, 52, v29, v13, &v32[24 * v26]);
      v15 = G4_VCALL<int>(v12, 60, v13);
      v13 = ++v28;
      v27 += v15 << 6;
      v14 = v28;
    }
    while ( v25 > v28 );
LABEL_16:
    hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(*(uint32_t **)(*v23 + 4 * v24++), v21, v32);
    if ( v24 == v22 )
      break;
    v8 = v34;
  }
  v7 = (uint32_t *)(v35);
  if ( v32 == v35 )
    goto LABEL_19;
LABEL_20:
  v17 = (hkLifoAllocator::Self *)*v20;
  v18 = (96 * v36 + 127) & 0xFFFFFF80;
  if ( v18 > (*v20)[2] || *((uint32_t **)v17 + 3) != (uint32_t *)((char *)v7 + v18) || *((uint32_t **)v17 + 5) == v7 )
    hkLifoAllocator::slowBlockFree(v17, (char *)v7, (96 * v36 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(v7);
  result = v34;
  v33 = 0;
  if ( v34 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v32,
             96 * v34);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultBrake::WheelBrakingProperties::staticClass  (binary VA: 0x1867650)
// Original: hkpVehicleDefaultBrake::WheelBrakingProperties::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultBrake::WheelBrakingProperties::staticClass()
{
  return &hkpVehicleDefaultBrakeWheelBrakingPropertiesClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultBrake::staticClass  (binary VA: 0x1867670)
// Original: hkpVehicleDefaultBrake::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultBrake::staticClass()
{
  return &hkpVehicleDefaultBrakeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::WheelState::staticClass  (binary VA: 0x1867900)
// Original: hkpVehicleLinearCastWheelCollide::WheelState::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleLinearCastWheelCollide::WheelState::staticClass()
{
  return &hkpVehicleLinearCastWheelCollideWheelStateClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::staticClass  (binary VA: 0x1867920)
// Original: hkpVehicleLinearCastWheelCollide::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleLinearCastWheelCollide::staticClass()
{
  return &hkpVehicleLinearCastWheelCollideClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleBrake::staticClass  (binary VA: 0x1867ac0)
// Original: hkpVehicleBrake::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleBrake::staticClass()
{
  return &hkpVehicleBrakeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAnalogDriverInput::staticClass  (binary VA: 0x1867bf0)
// Original: hkpVehicleDefaultAnalogDriverInput::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultAnalogDriverInput::staticClass()
{
  return &hkpVehicleDefaultAnalogDriverInputClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDriverInputAnalogStatus::staticClass  (binary VA: 0x1867c10)
// Original: hkpVehicleDriverInputAnalogStatus::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDriverInputAnalogStatus::staticClass()
{
  return &hkpVehicleDriverInputAnalogStatusClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::staticClass  (binary VA: 0x1867e30)
// Original: hkpVehicleRayCastWheelCollide::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleRayCastWheelCollide::staticClass()
{
  return &hkpVehicleRayCastWheelCollideClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSuspension::calcSuspension  (binary VA: 0x1867f20)
// Original: hkpVehicleDefaultSuspension::calcSuspension
// ----------------------------------------------------------------------------
int hkpVehicleDefaultSuspension::calcSuspension(int a1, int a2, int a3, unsigned int a4, int a5)
{
  long double Mass; // fst7
  int v6;
  int64_t v7; // rax
  float v8; // xmm2_4
  float v9; // xmm1_4
  float *v10;
  float v12;

  Mass = hkpMotion::getMass((hkpMotion::Self *)(*(uint32_t *)(a3 + 24) + 224));
  v6 = 0;
  v7 = a4;
  if ( *(char *)(*(uint32_t *)(a3 + 28) + 32) > 0 )
  {
    do
    {
      if ( *(uint32_t *)(v7 + 36) != 0 )
      {
        v9 = *(float *)(v7 + 76);
        v10 = (float *)(v6 + *(uint32_t *)(a1 + 20));
        if ( v9 >= 0.0 )
          v8 = v10[2];
        else
          v8 = v10[1];
        v12 = Mass;
        *(float *)(a5 + 4 * HIDWORD(v7)) = (float)((float)((float)((float)(*(float *)(*(uint32_t *)(a1 + 8) + 4 * v6 + 32)
                                                                         - *(float *)(v7 + 72))
                                                                 * *v10)
                                                         * *(float *)(v7 + 80))
                                                 - (float)(v9 * v8))
                                         * v12;
      }
      else
      {
        *(uint32_t *)(a5 + 4 * HIDWORD(v7)) = 0;
      }
      ++HIDWORD(v7);
      LODWORD(v7) = v7 + 96;
      v6 += 12;
    }
    while ( *(char *)(*(uint32_t *)(a3 + 28) + 32) > SHIDWORD(v7) );
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSuspension::Destroy  (binary VA: 0x1868000)
// Original: hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSuspension::Destroy(hkpVehicleDefaultSuspension::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4D88);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      12 * v1);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054EA8);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      48 * v2);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSuspension::Destroy_ea18680f0  (binary VA: 0x18680f0)
// Original: hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension
// ----------------------------------------------------------------------------
void hkpVehicleDefaultSuspension::Destroy_ea18680f0(hkpVehicleDefaultSuspension::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4D88);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      12 * v1);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054EA8);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      48 * v2);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAerodynamics::calcAerodynamicDrag  (binary VA: 0x1868260)
// Original: hkpVehicleDefaultAerodynamics::calcAerodynamicDrag
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultAerodynamics::calcAerodynamicDrag(hkpVehicleDefaultAerodynamics::Self *self, float a2)
{
  return (float)((float)((float)((float)((float)(-0.5 * *((float *)self + 2)) * *((float *)self + 4))
                               * *((float *)self + 3))
                       * fabs(a2))
               * a2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAerodynamics::calcAerodynamicLift  (binary VA: 0x18682b0)
// Original: hkpVehicleDefaultAerodynamics::calcAerodynamicLift
// ----------------------------------------------------------------------------
long double hkpVehicleDefaultAerodynamics::calcAerodynamicLift(hkpVehicleDefaultAerodynamics::Self *self, float a2)
{
  return (float)((float)((float)((float)((float)(0.5 * *((float *)self + 2)) * *((float *)self + 5))
                               * *((float *)self + 3))
                       * a2)
               * a2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAerodynamics::Destroy  (binary VA: 0x1868300)
// Original: hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAerodynamics::Destroy(hkpVehicleDefaultAerodynamics::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAerodynamics::Destroy_ea1868320  (binary VA: 0x1868320)
// Original: hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAerodynamics::Destroy_ea1868320(hkpVehicleDefaultAerodynamics::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAerodynamics::calcAerodynamics  (binary VA: 0x1868380)
// Original: hkpVehicleDefaultAerodynamics::calcAerodynamics
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAerodynamics::calcAerodynamics(float *a1, int a2, int a3, int a4)
{
  float *v4;
  float v5; // xmm4_4
  hkpMotion::Self *v6;
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm5_4
  float v20;
  float Mass;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;

  v4 = *(float **)(a3 + 28);
  v5 = v4[16];
  v6 = (hkpMotion::Self *)(*(uint32_t *)(a3 + 24) + 224);
  v7 = v4[17];
  v8 = *(float *)(*(uint32_t *)(a3 + 24) + 240);
  v9 = v4[18];
  v10 = *(float *)(*(uint32_t *)(a3 + 24) + 272);
  v11 = (float)((float)(v5 * v8) + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 256) * v7)) + (float)(v9 * v10);
  v12 = *(float *)(*(uint32_t *)(a3 + 24) + 276);
  v20 = (float)((float)(*(float *)(*(uint32_t *)(a3 + 24) + 260) * v7)
              + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 244) * v5))
      + (float)(v9 * v12);
  v22 = (float)((float)(*(float *)(*(uint32_t *)(a3 + 24) + 264) * v7)
              + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 248) * v5))
      + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 280) * v9);
  v23 = (float)((float)(v7 * *(float *)(*(uint32_t *)(a3 + 24) + 268))
              + (float)(v5 * *(float *)(*(uint32_t *)(a3 + 24) + 252)))
      + (float)(v9 * *(float *)(*(uint32_t *)(a3 + 24) + 284));
  v13 = v4[12];
  v14 = v4[13];
  v15 = v4[14];
  v16 = (float)((float)(v8 * v13) + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 256) * v14)) + (float)(v10 * v15);
  v17 = (float)((float)(*(float *)(*(uint32_t *)(a3 + 24) + 244) * v13)
              + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 260) * v14))
      + (float)(v12 * v15);
  v18 = (float)((float)(*(float *)(*(uint32_t *)(a3 + 24) + 248) * v13)
              + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 264) * v14))
      + (float)(*(float *)(*(uint32_t *)(a3 + 24) + 280) * v15);
  v19 = (float)((float)(v13 * *(float *)(*(uint32_t *)(a3 + 24) + 252))
              + (float)(v14 * *(float *)(*(uint32_t *)(a3 + 24) + 268)))
      + (float)(v15 * *(float *)(*(uint32_t *)(a3 + 24) + 284));
  v27 = (float)((float)(v11 * *(float *)(*(uint32_t *)(a3 + 24) + 432))
              + (float)(v20 * *(float *)(*(uint32_t *)(a3 + 24) + 436)))
      + (float)(v22 * *(float *)(*(uint32_t *)(a3 + 24) + 440));
  v24 = ((long double (*)(float *, uint32_t))*(uint32_t *)(*(uint32_t *)a1 + 24))(a1, LODWORD(v27));
  v26 = v24;
  v25 = ((long double (*)(float *, uint32_t))*(uint32_t *)(*(uint32_t *)a1 + 28))(a1, LODWORD(v27));
  *(float *)a4 = (float)(v11 * v26) + (float)(v16 * v25);
  *(float *)(a4 + 4) = (float)(v20 * v26) + (float)(v17 * v25);
  *(float *)(a4 + 8) = (float)(v22 * v26) + (float)(v18 * v25);
  *(float *)(a4 + 12) = (float)(v26 * v23) + (float)(v19 * v25);
  Mass = hkpMotion::getMass(v6);
  *(float *)a4 = (float)(a1[8] * Mass) + *(float *)a4;
  *(float *)(a4 + 4) = (float)(a1[9] * Mass) + *(float *)(a4 + 4);
  *(float *)(a4 + 8) = (float)(a1[10] * Mass) + *(float *)(a4 + 8);
  *(float *)(a4 + 12) = (float)(Mass * a1[11]) + *(float *)(a4 + 12);
  *(uint32_t *)(a4 + 16) = 0;
  *(uint32_t *)(a4 + 20) = 0;
  *(uint32_t *)(a4 + 24) = 0;
  *(uint32_t *)(a4 + 28) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultAerodynamics::Construct  (binary VA: 0x1868680)
// Original: hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics
// ----------------------------------------------------------------------------
void hkpVehicleDefaultAerodynamics::Construct(hkpVehicleDefaultAerodynamics::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4DC8);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultEngine::calcEngineInfo  (binary VA: 0x18686d0)
// Original: hkpVehicleDefaultEngine::calcEngineInfo
// ----------------------------------------------------------------------------
float * hkpVehicleDefaultEngine::calcEngineInfo(float *a1, int a2, int a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm0_4
  float *result;
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm5_4

  v6 = *a5;
  result = a1;
  a6[1] = *a5;
  v8 = a1[2];
  v9 = *a4;
  if ( v8 > v6 )
  {
    v10 = a1[11] * v9;
    if ( (float)(0.5 * v8) <= v6 )
    {
      v6 = (float)((float)((float)(v6 - (float)(0.5 * v8)) * v10) / (float)(v8 - (float)(0.5 * v8))) + v8;
      a6[1] = v6;
    }
    else
    {
      v11 = v8 + v10;
      a6[1] = v11;
      v6 = v11;
    }
  }
  v12 = a1[3];
  v13 = v6 - v12;
  v14 = 0.0;
  if ( (float)(v6 - v12) < 0.0 )
  {
    v17 = a1[2];
    v18 = a1[5];
    v19 = 1.0 / (float)(v17 - v12);
    v16 = (float)((float)((float)((float)(a1[8] - a1[9]) * v19) * v13) + a1[9]) * v18;
    v14 = (float)((float)((float)(v13 * v13) * (float)((float)((float)(a1[6] - 1.0) * v19) * v19)) + 1.0) * v18;
    if ( v17 <= *a5 )
      goto LABEL_7;
    *a6 = (float)(v14 * v9) - (float)(v16 * (float)(*a5 / v17));
  }
  else
  {
    v15 = a1[4];
    if ( v15 <= v6 )
    {
      a6[1] = v15;
      v16 = a1[10] * a1[5];
LABEL_7:
      *a6 = (float)(v14 * v9) - v16;
      return result;
    }
    *a6 = (float)((float)((float)((float)((float)(v13 * v13)
                                        * (float)((float)((float)(a1[7] - 1.0) * (float)(1.0 / (float)(v15 - v12)))
                                                * (float)(1.0 / (float)(v15 - v12))))
                                + 1.0)
                        * a1[5])
                * v9)
        - (float)((float)((float)((float)((float)(a1[10] - a1[9]) * (float)(1.0 / (float)(v15 - v12))) * v13) + a1[9])
                * a1[5]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultEngine::Destroy  (binary VA: 0x1868890)
// Original: hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine
// ----------------------------------------------------------------------------
void hkpVehicleDefaultEngine::Destroy(hkpVehicleDefaultEngine::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultEngine::Destroy_ea18688b0  (binary VA: 0x18688b0)
// Original: hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine
// ----------------------------------------------------------------------------
void hkpVehicleDefaultEngine::Destroy_ea18688b0(hkpVehicleDefaultEngine::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultEngine::Construct  (binary VA: 0x1868910)
// Original: hkpVehicleDefaultEngine::hkpVehicleDefaultEngine
// ----------------------------------------------------------------------------
void hkpVehicleDefaultEngine::Construct(hkpVehicleDefaultEngine::Self *self)
{
  *((uint32_t *)self + 6) = 1065353216;
  *((uint32_t *)self + 7) = 1065353216;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4E08);
  *((uint32_t *)self + 2) = 1148846080;
  *((uint32_t *)self + 3) = 1165623296;
  *((uint32_t *)self + 4) = 1169915904;
  *((uint32_t *)self + 5) = 1145569280;
  *((uint32_t *)self + 11) = 1157234688;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleManager::staticClass  (binary VA: 0x1868ac0)
// Original: hkpVehicleManager::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleManager::staticClass()
{
  return &hkpVehicleManagerClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSteering::staticClass  (binary VA: 0x1868bf0)
// Original: hkpVehicleDefaultSteering::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultSteering::staticClass()
{
  return &hkpVehicleDefaultSteeringClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultVelocityDamper::Destroy  (binary VA: 0x1868ce0)
// Original: hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper
// ----------------------------------------------------------------------------
void hkpVehicleDefaultVelocityDamper::Destroy(hkpVehicleDefaultVelocityDamper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultVelocityDamper::applyVelocityDamping  (binary VA: 0x1868d00)
// Original: hkpVehicleDefaultVelocityDamper::applyVelocityDamping
// ----------------------------------------------------------------------------
int hkpVehicleDefaultVelocityDamper::applyVelocityDamping(hkpVehicleDefaultVelocityDamper::Self *self, float a2, hkpVehicleInstance::Self *a3)
{
  uint32_t *v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  float v7; // xmm6_4
  __m128 v8;
  uint64_t v9; // xmm2_8
  uint64_t v10; // xmm7_8
  __m128 v11;
  __m128 v12;
  typedef hkpEntity::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef __m128 _g4_t_v17;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  v3 = *((uint32_t **)a3 + 6);
g4_m128_raw(v4) = (unsigned int)v3[112];
g4_m128_raw(v5) = (unsigned int)v3[113];
g4_m128_raw(v6) = (unsigned int)v3[114];
  if ( (float)((float)((float)(g4_m128_lane<float>(v4, 0) *g4_m128_lane<float>(v4, 0)) + (float)(g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v5, 0)))
             + (float)(g4_m128_lane<float>(v6, 0) *g4_m128_lane<float>(v6, 0))) <= (float)(*((float *)self + 4) * *((float *)self + 4)) )
    v7 = a2 * *((float *)self + 2);
  else
    v7 = a2 * *((float *)self + 3);
g4_m128_raw(v8) = 0x3F800000u;
g4_m128_lane<float>(v8, 0) = 1.0 - v7;
  if ( (float)(1.0 - v7) < 0.0 )
g4_m128_raw(v8) = 0;
  v9 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, v8), 0);
  v10 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, g4_to_m128((unsigned int)(v3[115]))), 0);
g4_m128_lane<uint64_t>(v11, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v4, v5), 0);
g4_m128_lane<uint64_t>(v12, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v8), 0);
g4_m128_lane<uint64_t>(v11, 1) = v10;
g4_m128_lane<uint64_t>(v12, 1) = v9;
  v14 = *((hkpEntity::Self **)a3 + 6);
  v17 = _mm_mul_ps(v11, v12);
  hkpEntity::activate(v14);
  return (*(int (**)(uint32_t *, __m128 *, int, int))(v3[56] + 84))(v3 + 56, &v17, v15, v16);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultVelocityDamper::Destroy_ea1868df0  (binary VA: 0x1868df0)
// Original: hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper
// ----------------------------------------------------------------------------
void hkpVehicleDefaultVelocityDamper::Destroy_ea1868df0(hkpVehicleDefaultVelocityDamper::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultVelocityDamper::Construct  (binary VA: 0x1868e50)
// Original: hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper
// ----------------------------------------------------------------------------
void hkpVehicleDefaultVelocityDamper::Construct(hkpVehicleDefaultVelocityDamper::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4EA8);
  *((uint32_t *)self + 4) = 1065353216;
}



// ============================================================================
// Address:   0x1868f60 (size: 150 bytes)
// Symbol:    _ZN18hkpVehicleInstanceC2E24hkFinishLoadedObjectFlag
// Demangled: hkpVehicleInstance::hkpVehicleInstance(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN18hkpVehicleInstanceC1E24hkFinishLoadedObjectFlag'
void (**hkpVehicleInstance::Construct(uint32_t *a1, int a2))(hkpVehicleInstance::Self * self)
{
  void (**result)(hkpVehicleInstance::Self *);
  int address;
  hkpVehicleDefaultSimulation::Self *v4;

  *a1 = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Construct();
  result = (void (**)(hkpVehicleInstance::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A44E8));
  *a1 = ((uint32_t)(uintptr_t)&off_20A44E8);
  if ( a2 != 0 && a1[18] == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (hkpVehicleDefaultSimulation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                          *(uint32_t *)(*(uint32_t *)address + 44),
                                          84);
    hkpVehicleDefaultSimulation::Construct(v4);
    a1[18] = (uint32_t)(uintptr_t)(v4);
    return (void (**)(hkpVehicleInstance::Self *))G4_VCALL<int>(v4, 20, a1);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::WheelInfo::staticClass  (binary VA: 0x1869000)
// Original: hkpVehicleInstance::WheelInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleInstance::WheelInfo::staticClass()
{
  return &hkpVehicleInstanceWheelInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleInstance::staticClass  (binary VA: 0x1869020)
// Original: hkpVehicleInstance::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleInstance::staticClass()
{
  return &hkpVehicleInstanceClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleWheelCollide::staticClass  (binary VA: 0x1869620)
// Original: hkpVehicleWheelCollide::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleWheelCollide::staticClass()
{
  return &hkpVehicleWheelCollideClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::collideWheels  (binary VA: 0x1869f00)
// Original: hkpVehicleLinearCastWheelCollide::collideWheels
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::collideWheels(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int result;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef uint32_t _g4_t_v13[18];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v9)) > _g4_s1 ? (40u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v10)) > _g4_s2 ? (44u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v11)) > _g4_s3 ? (50u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (51u + sizeof(_g4_t_v12)) > _g4_s4 ? (51u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v13)) > _g4_s5 ? (52u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 50u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 51u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);

  v13[15] = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v10 = a3;
  result = a4;
  v11 = *(uint8_t *)(*(uint32_t *)(a3 + 28) + 32);
  if ( v11 != 0 )
  {
    v9 = a4;
    v6 = 0;
    do
    {
      (*(void (**)(char *))(*v4 + 72))(&v12);
      v7 = *v4;
      if ( v12 != 0 )
        (*(void (**)(int *, int, int, uint32_t *, int))(v7 + 76))(v4, v10, v6, v13, v9);
      else
        (*(void (**)(int *, int, int, int))(v7 + 80))(v4, v10, v6, v9);
      v8 = v6++;
      G4_VCALL<void>(v4, 52, v10, v8, v9);
      v9 += 96;
      result = v6;
    }
    while ( v11 > (uint8_t)v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::getTotalNumCommands  (binary VA: 0x1869ff0)
// Original: hkpVehicleLinearCastWheelCollide::getTotalNumCommands
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::getTotalNumCommands(hkpVehicleLinearCastWheelCollide::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v5 = *((uint32_t *)self + 5);
  if ( v5 <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  do
  {
    ++v2;
    v3 += G4_VCALL<int>(self, 60, v1);
    v1 = (uint8_t)v2;
  }
  while ( v5 > (uint8_t)v2 );
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::getNumCommands  (binary VA: 0x186a040)
// Original: hkpVehicleLinearCastWheelCollide::getNumCommands
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::getNumCommands(hkpVehicleLinearCastWheelCollide::Self *self, uint8_t a2)
{
  uint32_t *v2;

  v2 = *(uint32_t **)(*((uint32_t *)self + 4) + 96 * a2);
  G4_VCALL<void>(v2, 52);
  return v2[49];
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::determineNearestHit  (binary VA: 0x186a070)
// Original: hkpVehicleLinearCastWheelCollide::determineNearestHit
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::determineNearestHit(int a1, uint8_t a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v3 = G4_VCALL<int>(a1, 60, a2);
  if ( v3 <= 0 )
    return 0;
  v4 = a3;
  v5 = v3 << 6;
  result = 0;
  v7 = a3 + v5;
  do
  {
    if ( *(uint32_t *)(v4 + 48) != 0 )
    {
      if ( result != 0 )
      {
        if ( *(float *)(result + 28) > *(float *)(*(uint32_t *)(v4 + 40) + 28) )
          result = *(uint32_t *)(v4 + 40);
      }
      else
      {
        result = *(uint32_t *)(v4 + 40);
      }
    }
    v4 += 64;
  }
  while ( v4 != v7 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit  (binary VA: 0x186a0e0)
// Original: hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit(int a1, int a2, uint8_t a3, int a4)
{
  int v5;
  int v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4

  v5 = *(uint32_t *)(a2 + 76) + 224 * a3;
  v6 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 52) + 8) + 48 * a3 + 32);
  *(uint32_t *)(a4 + 36) = 0;
  *(uint32_t *)(a4 + 72) = v6;
  *(uint32_t *)(a4 + 76) = 0;
  *(uint32_t *)a4 = *(uint32_t *)(v5 + 96);
  *(uint32_t *)(a4 + 4) = *(uint32_t *)(v5 + 100);
  *(uint32_t *)(a4 + 8) = *(uint32_t *)(v5 + 104);
  *(uint32_t *)(a4 + 12) = *(uint32_t *)(v5 + 108);
  v7 = -*(float *)(v5 + 132);
  v8 = -*(float *)(v5 + 136);
  v9 = -*(float *)(v5 + 128);
  *(uint32_t *)(a4 + 80) = 1065353216;
  *(float *)(a4 + 16) = v9;
  *(float *)(a4 + 20) = v7;
  *(float *)(a4 + 24) = v8;
  *(uint32_t *)(a4 + 28) = v6;
  *(uint32_t *)(a4 + 32) = 0;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo  (binary VA: 0x186a1a0)
// Original: hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo(hkpVehicleLinearCastWheelCollide::Self *self, unsigned int a2)
{
  int64_t v2; // rax
  int v3;
  int v4;

  v2 = 0;
  v3 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 3) = a2;
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 4) + HIDWORD(v2));
      if ( v4 != 0 )
        *(uint32_t *)(v4 + 44) = a2;
      LODWORD(v2) = v2 + 1;
      HIDWORD(v2) += 96;
    }
    while ( (uint32_t)v2 != v3 );
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::buildLinearCastCommands  (binary VA: 0x186a1e0)
// Original: hkpVehicleLinearCastWheelCollide::buildLinearCastCommands
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::buildLinearCastCommands(int a1, int a2, int a3, int a4, char *a5, int a6)
{
  uint32_t *v6;
  int v7;
  int v8;
  char *v9;
  char v10;
  char *v11;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  char v18;
  int v19;
  int v20;

  v20 = *(uint32_t *)(a1 + 20);
  if ( v20 <= 0 )
    return 0;
  v18 = 0;
  v13 = 0;
  v19 = a4 + 24;
  v14 = a4;
  while ( 1 )
  {
    v6 = (uint32_t *)(*(uint32_t *)(a1 + 16) + 96 * v18);
    v7 = v6[1];
    *(uint32_t *)(v14 + 12) = 0;
    *(uint32_t *)v14 = v7;
    *(uint32_t *)(v14 + 8) = (uint32_t)(uintptr_t)(v6 + 4);
    *(uint32_t *)(v14 + 4) = -1;
    *(uint8_t *)(v14 + 16) = 0;
    *(uint32_t *)(v14 + 20) = 0;
    *(uint8_t *)v19 = 0;
    *(uint32_t *)(v19 + 4) = 0;
    *(uint8_t *)(v19 + 2) = -1;
    *(uint8_t *)(v19 + 1) = 127;
    hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)(v14 + 32));
    *(uint32_t *)(v14 + 76) = -1082130432;
    *(uint8_t *)(v19 + 1) = -20;
    *(uint8_t *)(v14 + 17) = 8;
    *(uint16_t *)(v14 + 18) = 0;
    G4_VCALL<void>(*v6, 52);
    v8 = v13;
    v15 = *v6;
    v16 = *(uint32_t *)(*v6 + 196);
    v9 = a5;
    if ( v16 > 0 )
    {
      v17 = (uint32_t *)(a5 + 16);
      do
      {
        *((uint32_t *)v9 + 8) = v14;
        v10 = v8++ - v13;
        *((uint32_t *)v9 + 9) = *(uint32_t *)(*(uint32_t *)(v15 + 192) + 4 * v10);
        *(uint32_t *)v9 = v6[16];
        *((uint32_t *)v9 + 1) = v6[17];
        *((uint32_t *)v9 + 2) = v6[18];
        *((uint32_t *)v9 + 3) = v6[19];
        v11 = (char *)(v9 - a5);
        v9 += 64;
        *(uint32_t *)&v11[(uint32_t)(uintptr_t)(v17)] = v6[20];
        *(uint32_t *)&v11[(uint32_t)(uintptr_t)(v17) + 4] = v6[21];
        *(uint32_t *)&v11[(uint32_t)(uintptr_t)(v17) + 8] = v6[22];
        *(uint32_t *)&v11[(uint32_t)(uintptr_t)(v17) + 12] = v6[23];
        *((uint32_t *)v9 - 6) = a6;
        *((uint32_t *)v9 - 5) = 1;
        *((uint32_t *)v9 - 4) = 0;
        *((uint32_t *)v9 - 2) = 0;
        a6 += 48;
      }
      while ( v16 > (char)(v8 - v13) );
    }
    ++v18;
    v14 += 80;
    v19 += 80;
    if ( v20 <= v18 )
      break;
    v13 = v8;
    a5 = v9;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::castSingleWheel  (binary VA: 0x186a3d0)
// Original: hkpVehicleLinearCastWheelCollide::castSingleWheel
// ----------------------------------------------------------------------------
char * hkpVehicleLinearCastWheelCollide::castSingleWheel(char *a1, int a2, int a3, uint8_t a4, uint32_t *a5)
{
  int v5;
  int v6;
  float v7; // xmm0_4
  float v8; // xmm0_4
  int v9;
  bool v10;
  uint32_t *v11;
  char v12;
  int v13;
  typedef float _g4_t_v15[8];
  typedef uint32_t _g4_t_v16[8];
  typedef uint32_t _g4_t_v17[12];
  typedef uint32_t _g4_t_v18[11];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v16)) > _g4_s1 ? (32u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v17)) > _g4_s2 ? (64u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v18)) > _g4_s3 ? (112u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (156u + sizeof(_g4_t_v19)) > _g4_s4 ? (156u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (160u + sizeof(_g4_t_v20)) > _g4_s5 ? (160u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (164u + sizeof(_g4_t_v21)) > _g4_s6 ? (164u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (168u + sizeof(_g4_t_v22)) > _g4_s7 ? (168u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (172u + sizeof(_g4_t_v23)) > _g4_s8 ? (172u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 112u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 156u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 160u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 164u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 168u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 172u);

  v5 = *(uint32_t *)(a2 + 16) + 96 * a4;
  v6 = *(uint32_t *)(v5 + 4);
  v16[3] = 0;
  v16[0] = v6;
  v16[2] = v5 + 16;
  v16[1] = -1;
  v16[4] = 2048;
  v16[5] = 0;
  LOBYTE(v16[6]) = 0;
  v16[7] = 0;
  *(uint16_t *)((char *)&v16[6] + 1) = -129;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v17);
  v17[11] = -1082130432;
  v7 = *(float *)(a2 + 44);
  BYTE1(v16[6]) = -20;
  v15[4] = v7;
  v8 = *(float *)(a2 + 48);
  v9 = *(uint32_t *)(a2 + 12);
  v18[1] = 2139095022;
  v16[7] = v9;
  v15[0] = *(float *)(v5 + 80);
  v15[1] = *(float *)(v5 + 84);
  v15[2] = *(float *)(v5 + 88);
  v15[3] = *(float *)(v5 + 92);
  v10 = *(uint8_t *)(a2 + 52) == 0;
  v18[0] = ((uint32_t)(uintptr_t)&off_20998B0);
  v15[5] = v8;
  v20 = 0;
  v19 = 2139095022;
  if ( v10 )
    v11 = nullptr;
  else
    v11 = v18;
  hkpAabbPhantom::linearCast(*(uint32_t **)v5, v16, v15, (int)(uintptr_t)(v18), (int)(uintptr_t)(v11));
  v12 = 0;
  if ( v20 != 0 )
  {
    v13 = v18[4];
    a5[8] = v20;
    *a5 = v13;
    a5[1] = v18[5];
    a5[2] = v18[6];
    a5[3] = v18[7];
    a5[4] = v18[8];
    a5[5] = v18[9];
    a5[6] = v18[10];
    a5[7] = v19;
    a5[9] = v21;
    a5[10] = v22;
    a5[11] = v23;
    v12 = 1;
  }
  *a1 = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::getPhantoms  (binary VA: 0x186a5d0)
// Original: hkpVehicleLinearCastWheelCollide::getPhantoms
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::getPhantoms(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = a1;
  result = *(uint32_t *)(a1 + 20);
  v7 = result;
  if ( result > 0 )
  {
    result = *((uint32_t *)a2 + 1);
    v4 = 0;
    do
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v2 + 16) + 96 * v4);
      if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) == result )
      {
        v8 = v2;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v6);
        result = *((uint32_t *)a2 + 1);
        v2 = v8;
      }
      ++v4;
      *(uint32_t *)(*(uint32_t *)a2 + 4 * result) = v5;
      result = *((uint32_t *)a2 + 1) + 1;
      *((uint32_t *)a2 + 1) = result;
    }
    while ( v4 != v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::addToWorld  (binary VA: 0x186a670)
// Original: hkpVehicleLinearCastWheelCollide::addToWorld
// ----------------------------------------------------------------------------
hkpPhantom::Self * hkpVehicleLinearCastWheelCollide::addToWorld(hkpVehicleLinearCastWheelCollide::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  hkpPhantom::Self *result;

  v2 = 0;
  v3 = *((uint32_t *)self + 5);
  if ( v3 > 0 )
  {
    do
    {
      v4 = 3 * v2++;
      result = hkpWorld::addPhantom(a2, *(hkpPhantom::Self **)(*((uint32_t *)self + 4) + 32 * v4));
    }
    while ( v2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::removeFromWorld  (binary VA: 0x186a6c0)
// Original: hkpVehicleLinearCastWheelCollide::removeFromWorld
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::removeFromWorld(hkpVehicleLinearCastWheelCollide::Self *self)
{
  int v1;
  int v2;
  int v3;
  int result;
  hkpWorld::Self **v5;

  v1 = 0;
  v2 = *((uint32_t *)self + 5);
  if ( v2 > 0 )
  {
    do
    {
      v3 = 3 * v1++;
      v5 = *(hkpWorld::Self ***)(*((uint32_t *)self + 4) + 32 * v3);
      result = hkpWorld::removePhantom(v5[2], (hkpPhantom::Self *)v5);
    }
    while ( v1 != v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult  (binary VA: 0x186a710)
// Original: hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult(int a1, uint32_t *a2, uint8_t a3, float *a4, int a5)
{
  int result;
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  float v10; // xmm3_4
  float v11; // xmm2_4
  __m128i v12;
  int v13;
  __m128i v14;
  int v15;
  int v16;
  float v17; // xmm4_4
  int v18;
  float v19; // xmm4_4
  float *v20;
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;

  result = a5;
  v6 = *(float *)(*(uint32_t *)(a2[13] + 8) + 48 * a3 + 32);
  v7 = a2[19] + 224 * a3;
  *(float *)a5 = *a4;
  *(float *)(a5 + 4) = a4[1];
  *(float *)(a5 + 8) = a4[2];
  *(float *)(a5 + 12) = a4[3];
  *(float *)(a5 + 16) = a4[4];
  *(float *)(a5 + 20) = a4[5];
  *(float *)(a5 + 24) = a4[6];
  *(float *)(a5 + 28) = a4[7];
  v8 = *((uint32_t *)a4 + 10);
  v9 = 0;
  if ( *(uint8_t *)(v8 + 24) == 1 )
    v9 = *(char *)(v8 + 16) + v8;
  v10 = *(float *)(a5 + 16);
  *(uint32_t *)(a5 + 36) = v9;
  *(uint32_t *)(a5 + 32) = *(uint32_t *)(v9 + 140);
  *(float *)(a5 + 40) = a4[11];
  *(uint32_t *)(a5 + 44) = -1;
  v11 = *(float *)(a5 + 20);
  v28 = *(float *)(a5 + 24);
  *(float *)(a5 + 72) = v6 * a4[7];
g4_m128_raw(v12) = *(unsigned int *)(v7 + 128);
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * v10) + (float)(*(float *)(v7 + 132) * v11))
                          + (float)(*(float *)(v7 + 136) * v28);
  v13 = a2[7];
g4_m128_raw(v14) = *(unsigned int *)(v13 + 132);
  if ( (float)-*(float *)(v13 + 132) > *(float *)g4_m128_ptr<int32_t>(v12) )
  {
    v18 = _mm_cvtsi128_si32(v12);
    v19 = *(float *)(a5 + 4);
    v20 = (float *)a2[6];
    v26 = *(float *)a5 - *(float *)(v9 + 320);
    v27 = v19 - v20[81];
    v21 = *(float *)(a5 + 8) - v20[82];
    v22 = *(float *)(a5 + 8) - *(float *)(v9 + 328);
    v25 = v19 - *(float *)(v9 + 324);
    v23 = *(float *)a5 - v20[80];
    v24 = (2130706432 - v18) & ((v18 ^ (v18 + 2139095040)) >> 31);
    v17 = -(float)((float)(2.0
                         - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                 * (float)((float)(2.0
                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                         * (float)((float)(2.0
                                                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                                 * *(float *)&v24))
                                                                 * *(float *)&v24)))
                                         * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v24))
                                                 * *(float *)&v24))))
                 * (float)((float)(2.0
                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                         * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v24))
                                                 * *(float *)&v24)))
                         * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v24)) * *(float *)&v24)));
    *(float *)(a5 + 76) = (float)((float)((float)((float)((float)((float)((float)(v20[113] * v21)
                                                                        - (float)(v27 * v20[114]))
                                                                + v20[108])
                                                        - (float)((float)((float)(*(float *)(v9 + 452) * v22)
                                                                        - (float)(v25 * *(float *)(v9 + 456)))
                                                                + *(float *)(v9 + 432)))
                                                * v10)
                                        + (float)((float)((float)((float)((float)(v20[114] * v23)
                                                                        - (float)(v21 * v20[112]))
                                                                + v20[109])
                                                        - (float)((float)((float)(v26 * *(float *)(v9 + 456))
                                                                        - (float)(v22 * *(float *)(v9 + 448)))
                                                                + *(float *)(v9 + 436)))
                                                * v11))
                                + (float)((float)((float)((float)((float)(v27 * v20[112]) - (float)(v23 * v20[113]))
                                                        + v20[110])
                                                - (float)((float)((float)(v25 * *(float *)(v9 + 448))
                                                                - (float)(v26 * *(float *)(v9 + 452)))
                                                        + *(float *)(v9 + 440)))
                                        * v28))
                        * v17;
  }
  else
  {
    v15 = _mm_cvtsi128_si32(v14);
    v16 = (2130706432 - v15) & ((v15 ^ (v15 + 2139095040)) >> 31);
    *(uint32_t *)(a5 + 76) = 0;
    v17 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v14)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v14)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v16))
                                                        * *(float *)&v16)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v16))
                                        * *(float *)&v16))))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v14)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v16))
                                        * *(float *)&v16)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)&v16)) * *(float *)&v16));
  }
  *(float *)(a5 + 80) = v17;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::Destroy  (binary VA: 0x186aa90)
// Original: hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide
// ----------------------------------------------------------------------------
void hkpVehicleLinearCastWheelCollide::Destroy(hkpVehicleLinearCastWheelCollide::Self *self)
{
  int v1;
  int *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;
  int32_t v10; // kr04_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int v14;
  int v15;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5428);
  v15 = *((uint32_t *)self + 5);
  if ( v15 > 0 )
  {
    while ( 1 )
    {
      v2 = (int *)(*((uint32_t *)self + 4) + 96 * v1);
      v3 = v2[1];
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v14 = *((uint32_t *)self + 4) + 96 * v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v2 = (int *)v14;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
      }
      v8 = *v2;
      if ( *((uint16_t *)self + 3) == 0 )
        goto LABEL_10;
      if ( *(uint16_t *)(v8 + 6) != 0 )
        break;
LABEL_14:
      if ( ++v1 == v15 )
        goto LABEL_15;
    }
    hkpPhantom::removePhantomOverlapListener((hkpPhantom::Self *)v8, (hkpVehicleLinearCastWheelCollide::Self *)((char *)self + 36));
LABEL_10:
    if ( *(uint16_t *)(v8 + 6) != 0 )
    {
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
    }
    goto LABEL_14;
  }
LABEL_15:
  hkpRejectChassisListener::Destroy((hkpVehicleLinearCastWheelCollide::Self *)((char *)self + 28));
  v13 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      96 * v13);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::Destroy_ea186abe0  (binary VA: 0x186abe0)
// Original: hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide
// ----------------------------------------------------------------------------
void hkpVehicleLinearCastWheelCollide::Destroy_ea186abe0(hkpVehicleLinearCastWheelCollide::Self *self)
{
  int v1;
  int v2;

  hkpVehicleLinearCastWheelCollide::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::Construct  (binary VA: 0x186ac40)
// Original: hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide
// ----------------------------------------------------------------------------
void hkpVehicleLinearCastWheelCollide::Construct(hkpVehicleLinearCastWheelCollide::Self *self)
{
  *((uint32_t *)self + 11) = 872415232;
  *((uint32_t *)self + 12) = 872415232;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5428);
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 8) = -65535;
  *((uint32_t *)self + 7) = ((uint32_t)(uintptr_t)&off_20A4E48);
  *((uint32_t *)self + 9) = ((uint32_t)(uintptr_t)&off_20A4E6C);
  *((uint8_t *)self + 52) = 0;
  *((uint8_t *)self + 9) = 2;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::clone  (binary VA: 0x186acc0)
// Original: hkpVehicleLinearCastWheelCollide::clone
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::clone(int a1, int a2, int a3)
{
  int v3;
  int address;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int i;
  int32_t v15;
  int v16;
  int v17;
  int32_t v18; // kr00_4
  int savedregs;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef hkpPhantomOverlapListener::Self *_g4_t_v30;
  typedef hkpPhantomOverlapListener::Self *_g4_t_v31;
  typedef hkpPhantomOverlapListener::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40;
  typedef uint32_t _g4_t_v41[3];
  typedef hkArrayUtil::Self *_g4_t_v42;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v29)) > _g4_s9 ? (28u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v30)) > _g4_s10 ? (32u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v31)) > _g4_s11 ? (32u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v32)) > _g4_s12 ? (36u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v33)) > _g4_s13 ? (40u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v34)) > _g4_s14 ? (40u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v35)) > _g4_s15 ? (44u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v36)) > _g4_s16 ? (44u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v37)) > _g4_s17 ? (48u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v38)) > _g4_s18 ? (48u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v39)) > _g4_s19 ? (52u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (55u + sizeof(_g4_t_v40)) > _g4_s20 ? (55u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v41)) > _g4_s21 ? (56u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v42)) > _g4_s22 ? (68u + sizeof(_g4_t_v42)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 55u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);

  v42 = (hkArrayUtil::Self *)&a1;
  v37 = a1;
  v3 = a2;
  v33 = a3;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, int, hkpPhantomOverlapListener::Self *, hkpPhantomOverlapListener::Self *, int, int, int, int, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         56,
         v20,
         v21,
         v22,
         v23,
         v25,
         v26,
         v28,
         v30,
         v32,
         v33,
         v35,
         v37,
         v39,
         v41[0],
         v41[1],
         v41[2]);
  hkpVehicleLinearCastWheelCollide::Construct((hkpVehicleLinearCastWheelCollide::Self *)v5);
  v6 = *(uint32_t *)(v38 + 20);
  v36 = v6;
  v7 = *(uint32_t *)(v5 + 24) & 0x3FFFFFFF;
  if ( v6 <= v7 )
  {
    *(uint32_t *)(v5 + 20) = v6;
    if ( v6 <= 0 )
      goto LABEL_16;
  }
  else
  {
    v8 = 2 * v7;
    savedregs = 96;
    v42 = (hkArrayUtil::Self *)v41;
    if ( v8 < v6 )
      v8 = v6;
    hkArrayUtil::reserve(v42, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)(v5 + 16), v8, savedregs);
    *(uint32_t *)(v5 + 20) = v36;
  }
  v40 = 0;
  v31 = (hkpPhantomOverlapListener::Self *)(v5 + 36);
  v9 = v3 + 16;
  v10 = 0;
  v29 = v9;
  do
  {
    v12 = (uint32_t *)(96 * v10 + *(uint32_t *)(v5 + 16));
    v13 = *(uint32_t *)(*(uint32_t *)(v38 + 16) + 96 * v10 + 4);
    v12[1] = v13;
    if ( *(uint16_t *)(v13 + 6) != 0 )
    {
      v24 = v12;
      for ( i = v13; ; i = v13 )
      {
        v15 = *(uint32_t *)(i + 4);
        HIWORD(v16) = HIWORD(v15);
        LOWORD(v16) = 0;
        if ( v15 == __sync_val_compare_and_swap(
                      (volatile int32_t *)(v13 + 4),
                      v15,
                      v16 | (uint16_t)(v15 + 1)) )
          break;
      }
      v12 = v24;
    }
    v11 = *(uint32_t *)(*v34 + 4 * v10);
    *v12 = v11;
    if ( *(uint16_t *)(v11 + 6) != 0 )
    {
      v27 = v5;
      do
      {
        v18 = *(uint32_t *)(v11 + 4);
        HIWORD(v17) = HIWORD(v18);
        LOWORD(v17) = 0;
      }
      while ( v18 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v11 + 4),
                       v18,
                       v17 | (uint16_t)(v18 + 1)) );
      v5 = v27;
    }
    hkpPhantom::removePhantomOverlapListener((hkpPhantom::Self *)v11, (hkpPhantomOverlapListener::Self *)(v38 + 36));
    hkpPhantom::addPhantomOverlapListener((hkpPhantom::Self *)v11, v31);
    v10 = ++v40;
    *(uint32_t *)(v5 + 40) = v29;
  }
  while ( v36 > v40 );
LABEL_16:
  *(uint32_t *)(v5 + 12) = *(uint32_t *)(v38 + 12);
  *(uint32_t *)(v5 + 44) = *(uint32_t *)(v38 + 44);
  *(uint32_t *)(v5 + 48) = *(uint32_t *)(v38 + 48);
  *(uint8_t *)(v5 + 52) = *(uint8_t *)(v38 + 52);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::setWheelShapes  (binary VA: 0x186aeb0)
// Original: hkpVehicleLinearCastWheelCollide::setWheelShapes
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::setWheelShapes(int *a1, int a2, uint32_t *a3)
{
  uint32_t *v3;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr00_4
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int *_g4_t_v15;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  v16[3] = (uint32_t)(uintptr_t)(&a1);
  v15 = a1;
  v3 = a3;
  v4 = *(uint8_t *)(*(uint32_t *)(a2 + 28) + 32);
  v14 = v4;
  if ( v4 <= (a1[6] & 0x3FFFFFFFu) )
  {
    result = *(uint8_t *)(*(uint32_t *)(a2 + 28) + 32);
    a1[5] = v4;
    if ( v4 == 0 )
      return result;
  }
  else
  {
    v5 = 2 * (a1[6] & 0x3FFFFFFF);
    v6 = *(uint8_t *)(*(uint32_t *)(a2 + 28) + 32);
    if ( v5 < (int)v4 )
      v5 = *(uint8_t *)(*(uint32_t *)(a2 + 28) + 32);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v16, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1 + 4, v5, 96);
    v15[5] = v6;
  }
  v7 = 0;
  result = 0;
  do
  {
    while ( 1 )
    {
      *(uint32_t *)(v15[4] + 96 * result + 4) = *(uint32_t *)(*v3 + 4 * result);
      v9 = *(uint32_t *)(*v3 + 4 * result);
      if ( *(uint16_t *)(v9 + 6) != 0 )
        break;
      result = (uint8_t)++v7;
      if ( v14 <= (uint8_t)v7 )
        return result;
    }
    v10 = *(uint32_t *)(*v3 + 4 * result);
    v13 = v3;
    do
    {
      v12 = *(uint32_t *)(v10 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
    }
    while ( v12 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v9 + 4),
                     v12,
                     v11 | (uint16_t)(v12 + 1)) );
    ++v7;
    v3 = v13;
    result = (uint8_t)v7;
  }
  while ( v14 > (uint8_t)v7 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::createWheelShape  (binary VA: 0x186afd0)
// Original: hkpVehicleLinearCastWheelCollide::createWheelShape
// ----------------------------------------------------------------------------
hkpCylinderShape::Self * hkpVehicleLinearCastWheelCollide::createWheelShape(hkpVehicleLinearCastWheelCollide::Self *self, float a2, float a3)
{
  int address;
  hkpCylinderShape::Self *v4;
  typedef float _g4_t_v6[4];
  typedef float _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v7[0] = -0.0;
  v7[1] = -0.0;
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 0.5 * a2;
  v6[3] = 0.0;
  v7[2] = -(float)(0.5 * a2);
  v7[3] = 0.0;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (hkpCylinderShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             96);
  hkpCylinderShape::Construct(v4, (const hkVector4f::Self *)v6, (const hkVector4f::Self *)v7, a3, 0.0);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::calcAabbOfWheel  (binary VA: 0x186b0a0)
// Original: hkpVehicleLinearCastWheelCollide::calcAabbOfWheel
// ----------------------------------------------------------------------------
float * hkpVehicleLinearCastWheelCollide::calcAabbOfWheel(hkpVehicleLinearCastWheelCollide::Self *self, const hkpVehicleInstance::Self *a2, uint8_t a3, hkAabb::Self *a4)
{
  float *v4;
  float v5; // xmm1_4
  float *result;
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13;
  float v14;

  v4 = (float *)(*(uint32_t *)(*((uint32_t *)a2 + 7) + 140) + 40 * a3);
  v5 = 0.5 * v4[2];
  result = (float *)(*((uint32_t *)self + 4) + 96 * a3);
  v13 = result[20];
  v14 = result[23];
  v7 = (float)(fabs(result[12] * v5) + 0.0) + (float)(fabs(result[4] * *v4) + fabs(result[8] * *v4));
  v8 = (float)(fabs(result[5] * *v4) + fabs(result[9] * *v4)) + (float)(fabs(result[13] * v5) + 0.0);
  v9 = (float)(fabs(result[10] * *v4) + fabs(result[6] * *v4)) + (float)(fabs(result[14] * v5) + 0.0);
  v10 = result[21];
  v11 = (float)(fabs(result[7] * *v4) + fabs(*v4 * result[11])) + (float)(fabs(v5 * result[15]) + 0.0);
  v12 = result[22];
  *((float *)a4 + 4) = v13 + v7;
  *(float *)a4 = v13 - v7;
  *((float *)a4 + 5) = v10 + v8;
  *((float *)a4 + 6) = v12 + v9;
  *((float *)a4 + 7) = v14 + v11;
  *((float *)a4 + 1) = v10 - v8;
  *((float *)a4 + 2) = v12 - v9;
  *((float *)a4 + 3) = v14 - v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::updateWheelState  (binary VA: 0x186b270)
// Original: hkpVehicleLinearCastWheelCollide::updateWheelState
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::updateWheelState(hkpVehicleLinearCastWheelCollide::Self *self, const hkpVehicleInstance::Self *a2, uint8_t a3)
{
  int v3;
  float v4; // xmm5_4
  int v5;
  float *v6;
  float v7; // xmm4_4
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  uint32_t *v11;
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm5_4
  float v32; // xmm1_4
  int result;
  float v34; // xmm0_4
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39[4];
  typedef uint32_t _g4_t_v40[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v36)) > _g4_s1 ? (4u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v37)) > _g4_s2 ? (8u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v38)) > _g4_s3 ? (12u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v39)) > _g4_s4 ? (16u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);

  v3 = *((uint32_t *)a2 + 19) + 224 * a3;
  v4 = *(float *)(v3 + 180);
  v5 = *((uint32_t *)self + 4) + 96 * a3;
  v6 = *((float **)a2 + 6);
  v7 = v6[89];
  v8 = v6[88];
  v9 = v6[90];
  v10 = v6[91];
  v11 = *((uint32_t **)a2 + 7);
  v12 = (float)(*(float *)(v3 + 176) * v8) + (float)(v7 * v4);
  v13 = *(float *)(v3 + 184) * v8;
  v35 = (float)((float)((float)(*(float *)(v3 + 184) * v7) - (float)(v9 * v4)) + (float)(*(float *)(v3 + 176) * v10))
      + (float)(*(float *)(v3 + 188) * v8);
  v14 = (float)((float)(*(float *)(v3 + 176) * v9) - v13) + (float)(v10 * v4);
  v15 = *(float *)(v3 + 188) * v7;
  v16 = v7 * *(float *)(v3 + 176);
  v36 = v14 + v15;
  v17 = *(float *)(v3 + 184) * v10;
  v18 = v10 * *(float *)(v3 + 188);
  v19 = v12 + (float)(v9 * *(float *)(v3 + 184));
  v37 = (float)((float)((float)(v4 * v8) - v16) + v17) + (float)(*(float *)(v3 + 188) * v9);
  v38 = v18 - v19;
  v20 = v11[17];
  v40[0] = v11[16];
  v21 = v11[18];
  v40[1] = v20;
  v40[2] = v21;
  v22 = v11[12];
  v40[3] = v11[19];
  v40[4] = v22;
  v23 = v11[14];
  v40[5] = v11[13];
  v40[6] = v23;
  v24 = v11[20];
  v40[7] = v11[15];
  v40[8] = v24;
  v25 = v11[21];
  v26 = v11[22];
  v27 = v11[23];
  v40[9] = v25;
  v40[11] = v27;
  v40[10] = v26;
  hkQuaternionf::set((hkQuaternionf::Self *)v39, (const hkRotationf::Self *)v40);
  v28 = v35;
  v29 = (float)(v35 * v39[0]) + (float)(v36 * v39[1]);
  v30 = v39[2] * v35;
  v35 = (float)((float)((float)(v39[2] * v36) - (float)(v37 * v39[1])) + (float)(v38 * v39[0])) + (float)(v39[3] * v35);
  v31 = (float)(v39[1] * v28) - (float)(v39[0] * v36);
  v36 = (float)((float)((float)(v37 * v39[0]) - v30) + (float)(v38 * v39[1])) + (float)(v39[3] * v36);
  v32 = v29 + (float)(v37 * v39[2]);
  v37 = (float)(v31 + (float)(v38 * v39[2])) + (float)(v39[3] * v37);
  v38 = (float)(v38 * v39[3]) - v32;
  hkRotationf::set((hkRotationf::Self *)(v5 + 16), (const hkQuaternionf::Self *)&v35);
  *(uint32_t *)(v5 + 64) = *(uint32_t *)(v3 + 80);
  *(uint32_t *)(v5 + 68) = *(uint32_t *)(v3 + 84);
  *(uint32_t *)(v5 + 72) = *(uint32_t *)(v3 + 88);
  *(uint32_t *)(v5 + 76) = *(uint32_t *)(v3 + 92);
  result = *((uint32_t *)a2 + 13);
  v34 = *(float *)(*(uint32_t *)(result + 8) + 48 * a3 + 32);
  *(float *)(v5 + 80) = (float)(*(float *)(v3 + 128) * v34) + *(float *)(v3 + 80);
  *(float *)(v5 + 84) = (float)(*(float *)(v3 + 132) * v34) + *(float *)(v3 + 84);
  *(float *)(v5 + 88) = (float)(*(float *)(v3 + 136) * v34) + *(float *)(v3 + 88);
  *(float *)(v5 + 92) = (float)(v34 * *(float *)(v3 + 140)) + *(float *)(v3 + 92);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection  (binary VA: 0x186b5c0)
// Original: hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection(hkpVehicleLinearCastWheelCollide::Self *self, const hkpVehicleInstance::Self *a2)
{
  int result;
  uint8_t v3;
  int v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8;
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v9)) > _g4_s4 ? (16u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  result = *((uint32_t *)self + 5);
  v5 = result;
  if ( result > 0 )
  {
    v3 = 0;
    v4 = 0;
    result = 0;
    do
    {
      v6 = result;
      v7 = v4;
      v8 = v3;
      hkpVehicleLinearCastWheelCollide::updateWheelState(self, a2, v3);
      hkpVehicleLinearCastWheelCollide::calcAabbOfWheel(self, a2, v8, (hkAabb::Self *)v9);
      hkpAabbPhantom::setAabb(*(hkpAabbPhantom::Self **)(*((uint32_t *)self + 4) + 96 * v6), (const hkAabb::Self *)v9);
      v4 = v7 + 1;
      result = (uint8_t)(v7 + 1);
      v3 = v7 + 1;
    }
    while ( v5 > result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::init  (binary VA: 0x186b660)
// Original: hkpVehicleLinearCastWheelCollide::init
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::init(hkpVehicleLinearCastWheelCollide::Self *self, const hkpVehicleInstance::Self *a2)
{
  unsigned int *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  hkAabb::Self *v8;
  signed int v9;
  float *v10;
  int v11;
  typedef int _g4_t_address;
  typedef signed int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15;
  typedef hkpAabbPhantom::Self *_g4_t_v16;
  typedef hkAabb::Self *_g4_t_v17;
  typedef hkpVehicleInstance::Self *_g4_t_v18;
  typedef char _g4_t_v19[4];
  typedef uint32_t _g4_t_v20[14];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_address)) > _g4_s0 ? (0u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v17)) > _g4_s5 ? (20u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v20)) > _g4_s8 ? (32u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);

  v20[10] = (uint32_t)(uintptr_t)(&self);
  v2 = (unsigned int *)self;
  v18 = (hkpVehicleInstance::Self *)(a2);
  v13 = *(uint8_t *)(*((uint32_t *)a2 + 7) + 32);
  if ( *((uint32_t *)self + 5) != 0 )
  {
    result = *((uint32_t *)a2 + 6) + 16;
    *((uint32_t *)self + 10) = result;
    if ( v13 == 0 )
      return result;
  }
  else
  {
    v6 = *((uint32_t *)self + 6) & 0x3FFFFFFF;
    if ( v13 <= v6 )
    {
      *((uint32_t *)self + 5) = v13;
      if ( v13 == 0 )
      {
        result = *((uint32_t *)v18 + 6) + 16;
        v2[10] = result;
        return result;
      }
    }
    else
    {
      v7 = 2 * v6;
      if ( v7 < v13 )
        v7 = *(uint8_t *)(*((uint32_t *)a2 + 7) + 32);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v19,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)self + 4,
        v7,
        96);
      v2[5] = v13;
    }
    v8 = nullptr;
    v9 = 0;
    do
    {
      v17 = v8;
      v10 = (float *)(*(uint32_t *)(*((uint32_t *)v18 + 7) + 140) + 40 * v9);
      v11 = v2[4] + 96 * v9;
      *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(hkpVehicleLinearCastWheelCollide::createWheelShape(
                               (hkpVehicleLinearCastWheelCollide::Self *)v2,
                               v10[2],
                               *v10));
      v8 = (hkAabb::Self *)((char *)v17 + 1);
      v9 = (uint8_t)((uint8_t)(uintptr_t)(v17) + 1);
    }
    while ( v13 > v9 );
    v2[10] = *((uint32_t *)v18 + 6) + 16;
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  LOBYTE(result) = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    v15 = result;
    v14 = v4;
    hkpVehicleLinearCastWheelCollide::updateWheelState((hkpVehicleLinearCastWheelCollide::Self *)v2, v18, result);
    hkpVehicleLinearCastWheelCollide::calcAabbOfWheel((hkpVehicleLinearCastWheelCollide::Self *)v2, v18, v15, (hkAabb::Self *)v20);
    v16 = (hkpAabbPhantom::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              208);
    hkpAabbPhantom::Construct(v16, (const hkAabb::Self *)v20, v2[3]);
    *(uint32_t *)(v2[4] + 96 * v5) = (uint32_t)(uintptr_t)(v16);
    hkpPhantom::addPhantomOverlapListener(*(hkpPhantom::Self **)(v2[4] + 96 * v5), (hkpPhantomOverlapListener::Self *)(v2 + 9));
    v4 = v14 + 1;
    v5 = (uint8_t)(v14 + 1);
    result = v5;
  }
  while ( v13 > v5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::centerWheelContactPoint  (binary VA: 0x186b860)
// Original: hkpVehicleLinearCastWheelCollide::centerWheelContactPoint
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::centerWheelContactPoint(int a1, int a2, uint8_t a3, hkVector4f::Self *a4)
{
  const hkTransformf::Self *v4;
  int result;
  typedef uint32_t _g4_t_v6[4];
  typedef uint32_t _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v4 = (const hkTransformf::Self *)(*(uint32_t *)(a1 + 16) + 96 * a3 + 16);
  hkVector4f::setTransformedInversePos((hkVector4f::Self *)v6, v4, a4);
  v6[2] = 0;
  hkVector4f::setTransformedPos((hkVector4f::Self *)v7, v4, (const hkVector4f::Self *)v6);
  *(uint32_t *)a4 = v7[0];
  *((uint32_t *)a4 + 1) = v7[1];
  *((uint32_t *)a4 + 2) = v7[2];
  result = v7[3];
  *((uint32_t *)a4 + 3) = v7[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleLinearCastWheelCollide::wheelCollideCallback  (binary VA: 0x186b8f0)
// Original: hkpVehicleLinearCastWheelCollide::wheelCollideCallback
// ----------------------------------------------------------------------------
int hkpVehicleLinearCastWheelCollide::wheelCollideCallback(int a1, int a2, char a3, hkVector4f::Self *a4)
{
  return hkpVehicleLinearCastWheelCollide::centerWheelContactPoint(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::updateBeforeCollisionDetection  (binary VA: 0x186ba60)
// Original: hkpVehicleCastBatchingManager::updateBeforeCollisionDetection
// ----------------------------------------------------------------------------
int hkpVehicleCastBatchingManager::updateBeforeCollisionDetection(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  hkpVehicleInstance::Self *v4;
  int result;

  v2 = 0;
  v3 = a2[1];
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(hkpVehicleInstance::Self **)(*a2 + 4 * v2++);
      result = hkpVehicleInstance::updateBeforeCollisionDetection(v4);
    }
    while ( v2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::Destroy  (binary VA: 0x186baa0)
// Original: hkpVehicleCastBatchingManager::~hkpVehicleCastBatchingManager
// ----------------------------------------------------------------------------
void hkpVehicleCastBatchingManager::Destroy(hkpVehicleCastBatchingManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A54A8);
  hkpVehicleManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::Destroy_ea186bad0  (binary VA: 0x186bad0)
// Original: hkpVehicleCastBatchingManager::~hkpVehicleCastBatchingManager
// ----------------------------------------------------------------------------
void hkpVehicleCastBatchingManager::Destroy_ea186bad0(hkpVehicleCastBatchingManager::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A54A8);
  hkpVehicleManager::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::getStandardFilterSize  (binary VA: 0x186bb40)
// Original: hkpVehicleCastBatchingManager::getStandardFilterSize
// ----------------------------------------------------------------------------
int hkpVehicleCastBatchingManager::getStandardFilterSize(hkpVehicleCastBatchingManager::Self *self)
{
  int result;

  result = 256;
  if ( *(uint32_t *)(*((uint32_t *)self + 29) + 32) != 2 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::stepVehiclesSynchronously  (binary VA: 0x186bb60)
// Original: hkpVehicleCastBatchingManager::stepVehiclesSynchronously
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpVehicleCastBatchingManager::stepVehiclesSynchronously(int a1, hkpWorld::Self *a2, int a3, int a4, pthread_mutex_t *a5, int a6, int a7)
{
  int v7;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v9;
  unsigned int v10;
  bool v11; // cc
  char *v12;
  int StandardFilterSize;
  int v14;
  int v15;
  hkLifoAllocator::Self *result;
  hkSemaphore::Self *v17;
  signed int v18;
  unsigned int v19;
  int (*v20)(int, hkpWorld::Self *, int, int, pthread_mutex_t *, hkSemaphore::Self *, char *, int);
  int v21;
  int v22;

  G4_VCALL<void>(a1, 36, a7);
  v7 = G4_VCALL<int>(a1, 40, a6, a7) + 127;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v9 = *address;
  v18 = v7 & 0xFFFFFF80;
  v10 = v7 & 0xFFFFFF80;
  v19 = v7 & 0xFFFFFF80;
  v11 = (int)(v7 & 0xFFFFFF80) <= *((uint32_t *)*address + 2);
  v12 = *((char **)*address + 3);
  if ( v11 && (unsigned int)(uintptr_t)(&v12[v10]) <= *((uint32_t *)v9 + 4) )
    *((uint32_t *)v9 + 3) = (uint32_t)(uintptr_t)(&v12[v10]);
  else
    v12 = (char *)hkLifoAllocator::allocateFromNewSlab(v9, v19);
  v17 = (hkSemaphore::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*address + 11) + 8))(
                         *((uint32_t *)*address + 11),
                         20);
  hkSemaphore::Construct(v17, 0, 1000, 0);
  v20 = *(int (**)(int, hkpWorld::Self *, int, int, pthread_mutex_t *, hkSemaphore::Self *, char *, int))(*(uint32_t *)a1 + 44);
  StandardFilterSize = hkpVehicleCastBatchingManager::getStandardFilterSize((hkpVehicleCastBatchingManager::Self *)(a2));
  v14 = v20(a1, a2, StandardFilterSize, a6, a5, v17, v12, a7);
  v15 = v14;
  if ( v14 != 0 )
  {
    v21 = v14;
    hkpWorld::lockReadOnly();
    G4_VCALL<void>(a4, 20, a5, 15);
    hkJobQueue::processAllJobs(a5, false);
    G4_VCALL<void>(a4, 32);
    hkSemaphore::acquire(v17);
    hkpWorld::unlockReadOnly();
    v15 = v21;
  }
  if ( v17 != nullptr )
  {
    v22 = v15;
    hkSemaphore::Destroy(v17);
    (*(void (**)(uint32_t, hkSemaphore::Self *, int))(**((uint32_t **)*address + 11) + 12))(
      *((uint32_t *)*address + 11),
      v17,
      20);
    v15 = v22;
  }
  G4_VCALL<void>(a1, 48, a3, v15, v12, a7);
  result = *address;
  if ( v18 > *((uint32_t *)*address + 2) || *((char **)result + 3) != &v12[v19] || v12 == *((char **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, v12, v19);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::addVehicle  (binary VA: 0x186bd90)
// Original: hkpVehicleCastBatchingManager::addVehicle
// ----------------------------------------------------------------------------
int hkpVehicleCastBatchingManager::addVehicle(hkpVehicleCastBatchingManager::Self *self, hkpVehicleInstance::Self *a2)
{
  int result;

  hkpVehicleManager::addVehicle((hkpVehicleManager::Self *)(self), a2);
  result = *(uint8_t *)(*((uint32_t *)a2 + 7) + 32);
  *((uint16_t *)self + 10) += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleCastBatchingManager::removeVehicle  (binary VA: 0x186bdd0)
// Original: hkpVehicleCastBatchingManager::removeVehicle
// ----------------------------------------------------------------------------
int hkpVehicleCastBatchingManager::removeVehicle(hkpVehicleCastBatchingManager::Self *self, hkpVehicleInstance::Self *a2)
{
  int result;

  hkpVehicleManager::removeVehicle((hkpVehicleManager::Self *)(self), a2);
  result = *(uint8_t *)(*((uint32_t *)a2 + 7) + 32);
  *((uint16_t *)self + 10) -= result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSuspension::WheelSpringSuspensionParameters::staticClass  (binary VA: 0x186be60)
// Original: hkpVehicleDefaultSuspension::WheelSpringSuspensionParameters::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultSuspension::WheelSpringSuspensionParameters::staticClass()
{
  return &hkpVehicleDefaultSuspensionWheelSpringSuspensionParametersClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultSuspension::staticClass  (binary VA: 0x186be80)
// Original: hkpVehicleDefaultSuspension::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultSuspension::staticClass()
{
  return &hkpVehicleDefaultSuspensionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultTransmission::staticClass  (binary VA: 0x186c1a0)
// Original: hkpVehicleDefaultTransmission::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleDefaultTransmission::staticClass()
{
  return &hkpVehicleDefaultTransmissionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::staticClass  (binary VA: 0x186c2d0)
// Original: hkpVehicleSteeringAckerman::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleSteeringAckerman::staticClass()
{
  return &hkpVehicleSteeringAckermanClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::addToWorld  (binary VA: 0x186c3c0)
// Original: hkpVehiclePerWheelSimulation::addToWorld
// ----------------------------------------------------------------------------
int hkpVehiclePerWheelSimulation::addToWorld(hkpVehiclePerWheelSimulation::Self *self, hkpWorld::Self *a2)
{
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpVehiclePerWheelSimulation::Self *)((char *)self + 8));
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::init  (binary VA: 0x186c3f0)
// Original: hkpVehiclePerWheelSimulation::init
// ----------------------------------------------------------------------------
hkpWheelFrictionConstraintData::Self * hkpVehiclePerWheelSimulation::init(hkpVehiclePerWheelSimulation::Self *self, hkpVehicleInstance::Self *a2)
{
  hkpVehicleInstance::Self *v2;
  hkpVehiclePerWheelSimulation::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  hkpWheelFrictionConstraintData::Self *result;
  int v21;
  int v22;
  float v23; // xmm0_4
  int v24;
  float v25; // xmm0_4
  float *v26;
  float v27; // xmm0_4
  typedef int _g4_t_v28;
  typedef hkpVehiclePerWheelSimulation::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t _g4_t_v42[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v31)) > _g4_s3 ? (36u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v32)) > _g4_s4 ? (40u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v33)) > _g4_s5 ? (44u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v34)) > _g4_s6 ? (48u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v35)) > _g4_s7 ? (52u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v36)) > _g4_s8 ? (52u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v37)) > _g4_s9 ? (56u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v38)) > _g4_s10 ? (60u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v39)) > _g4_s11 ? (60u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v40)) > _g4_s12 ? (64u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v41)) > _g4_s13 ? (64u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v42)) > _g4_s14 ? (68u + sizeof(_g4_t_v42)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);

  v42[3] = (uint32_t)(uintptr_t)(&self);
  v29 = self;
  v2 = a2;
  v3 = self;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  v34 = *((uint32_t *)v2 + 7);
  v4 = *(char *)(v34 + 32);
  v28 = v4;
  v5 = *((uint32_t *)v3 + 12) & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    if ( v6 < v4 )
      v6 = *(char *)(v34 + 32);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v42,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v29 + 10,
      v6,
      320);
  }
  v7 = *((uint32_t *)v29 + 11);
  v8 = *((uint32_t *)v29 + 10);
  v9 = v7 - v28 - 1;
  if ( v9 >= 0 )
  {
    v10 = (char *)(v8 + 320 * v28 + 320 * v9 + 48);
    v40 = v10;
    v38 = (uint32_t *)(v10);
    v37 = (uint32_t *)(v10);
    v35 = (uint32_t *)(v10);
    do
    {
      *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_209D8C8);
      v11 = (char *)(v10 - v40);
      --v9;
      v10 -= 320;
      *(uint32_t *)((char *)v38 + (uint32_t)(uintptr_t)(v11)) = ((uint32_t)(uintptr_t)&off_209D2A8);
      *(uint32_t *)((char *)v37 + (uint32_t)(uintptr_t)(v11)) = ((uint32_t)(uintptr_t)&off_2096D68);
      *(uint32_t *)((char *)v35 + (uint32_t)(uintptr_t)(v11)) = ((uint32_t)(uintptr_t)&off_2054CB8);
    }
    while ( v9 != -1 );
    v7 = *((uint32_t *)v29 + 11);
    v8 = *((uint32_t *)v29 + 10);
  }
  v12 = v28 - v7;
  v13 = v8 + 320 * v7;
  v36 = v13;
  if ( v12 > 0 )
  {
    v31 = v13 + 48;
    v39 = (uint32_t *)(v13 + 48);
    v41 = (uint32_t *)(v13 + 48);
    v33 = v13 + 320 * v12;
    v30 = v13 + 64;
    v32 = v13 + 208;
    v14 = v13 + 48;
    v15 = v13;
    v16 = v13 + 228;
    do
    {
      v17 = v15 - v36;
      v14 += 320;
      v15 += 320;
      *(uint32_t *)(v17 + v31) = ((uint32_t)(uintptr_t)&off_2054CB8);
      v18 = v39;
      v39 += 80;
      *v18 = ((uint32_t)(uintptr_t)&off_2096D68);
      v18[1] = -65535;
      *(uint32_t *)(v14 - 320) = ((uint32_t)(uintptr_t)&off_209D2A8);
      *(uint32_t *)(v14 - 312) = 0;
      *v41 = ((uint32_t)(uintptr_t)&off_209D8C8);
      v16 += 320;
      *(uint16_t *)(v17 + v30) = 2;
      *(uint16_t *)(v17 + v32) = 28;
      v19 = v41;
      *(uint8_t *)(v16 - 338) = 1;
      *(uint32_t *)(v16 - 320) = 0;
      *(uint32_t *)(v16 - 316) = 0;
      *(uint32_t *)(v16 - 312) = 0;
      *(uint32_t *)(v16 - 308) = 0;
      v41 += 80;
      v19[49] = 0;
      *(uint32_t *)(v15 - 64) = 0;
    }
    while ( v15 != v33 );
  }
  result = (hkpWheelFrictionConstraintData::Self *)v28;
  v21 = 0;
  for ( *((uint32_t *)v29 + 11) = v28;
        *((uint32_t *)v29 + 11) > v21;
        result = hkpWheelFrictionConstraintData::init(
                   (hkpWheelFrictionConstraintData::Self *)(*((uint32_t *)v29 + 10) + v22 + 48),
                   (hkpWheelFrictionConstraintAtom::Axle::Self *)(*((uint32_t *)v29 + 10) + v22),
                   *v26) )
  {
    v26 = (float *)(*(uint32_t *)(v34 + 140) + 40 * v21);
    v27 = v26[1];
    if ( v27 == 0.0 )
    {
      v22 = 320 * v21;
      v25 = 0.0;
      v24 = *((uint32_t *)v29 + 10) + 320 * v21;
      *(uint32_t *)(v24 + 8) = 1;
      *(uint32_t *)(v24 + 20) = 0;
    }
    else
    {
      v22 = 320 * v21;
      v23 = (float)(v27 * *v26) * *v26;
      v24 = *((uint32_t *)v29 + 10) + 320 * v21;
      *(uint32_t *)(v24 + 8) = 1;
      *(float *)(v24 + 20) = 2.0 / v23;
      if ( (float)(2.0 / v23) == 0.0 )
        v25 = 0.0;
      else
        v25 = 1.0 / (float)(2.0 / v23);
    }
    *(float *)(v24 + 24) = v25;
    *(uint32_t *)v24 = 0;
    *(uint32_t *)(v24 + 4) = 0;
    *(uint32_t *)(v24 + 12) = 0;
    *(uint32_t *)(v24 + 16) = 0;
    *(uint8_t *)(v24 + 36) = 0;
    *(uint32_t *)(v24 + 28) = 1065353216;
    *(uint32_t *)(v24 + 32) = 2139095022;
    *(uint32_t *)(v24 + 40) = 0;
    ++v21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::Construct  (binary VA: 0x186c7b0)
// Original: hkpVehiclePerWheelSimulation::hkpVehiclePerWheelSimulation
// ----------------------------------------------------------------------------
void hkpVehiclePerWheelSimulation::Construct(hkpVehiclePerWheelSimulation::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5528);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A555C);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0x80000000;
  *((uint32_t *)self + 5) = 1050253722;
  *((uint32_t *)self + 6) = 1028443341;
  *((uint32_t *)self + 7) = 0x40000000;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 1092616192;
  *((uint32_t *)self + 4) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::clone  (binary VA: 0x186c820)
// Original: hkpVehiclePerWheelSimulation::clone
// ----------------------------------------------------------------------------
hkpVehiclePerWheelSimulation::Self * hkpVehiclePerWheelSimulation::clone(hkpVehiclePerWheelSimulation::Self *self, hkpVehicleInstance::Self *a2)
{
  int address;
  hkpVehiclePerWheelSimulation::Self *v3;
  int v4;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkpVehiclePerWheelSimulation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                         *(uint32_t *)(*(uint32_t *)address + 44),
                                         52);
  hkpVehiclePerWheelSimulation::Construct(v3);
  *((uint32_t *)v3 + 5) = *((uint32_t *)self + 5);
  v4 = *(uint32_t *)v3;
  *((uint32_t *)v3 + 6) = *((uint32_t *)self + 6);
  *((uint32_t *)v3 + 7) = *((uint32_t *)self + 7);
  *((uint32_t *)v3 + 8) = *((uint32_t *)self + 8);
  *((uint32_t *)v3 + 9) = *((uint32_t *)self + 9);
  (*(void (**)(hkpVehiclePerWheelSimulation::Self *, hkpVehicleInstance::Self *))(v4 + 20))(v3, a2);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::applySuspensionForces  (binary VA: 0x186c8b0)
// Original: hkpVehiclePerWheelSimulation::applySuspensionForces
// ----------------------------------------------------------------------------
uint32_t * hkpVehiclePerWheelSimulation::applySuspensionForces(int a1, int a2, int a3)
{
  uint32_t *result;
  hkpEntity::Self *v5;
  int i;
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  typedef int _g4_t_v11;
  typedef float *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef float _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  result = *(uint32_t **)(a1 + 12);
  v5 = (hkpEntity::Self *)result[6];
  if ( *(uint8_t *)(result[7] + 32) != 0 )
  {
    v13 = *(uint8_t *)(result[7] + 32) - 1;
    for ( i = 0; ; ++i )
    {
      result = (uint32_t *)result[19];
      v7 = *(float *)(**(uint32_t **)(a3 + 4) + 4 * i);
      if ( v7 > 0.0 )
      {
        v11 = a3;
        v8 = v7 * *(float *)(a2 + 8);
        v12 = (float *)&result[56 * i];
        v14[0] = v12[4] * v8;
        v14[1] = v12[5] * v8;
        v9 = v12[6] * v8;
        v10 = v8 * v12[7];
        v14[2] = v9;
        v14[3] = v10;
        hkpEntity::activate(v5);
        result = (uint32_t *)(*(int (**)(uint32_t *, float *, float *))(*((uint32_t *)v5 + 56) + 100))(
                             (uint32_t *)v5 + 56,
                             v14,
                             v12 + 20);
        a3 = v11;
      }
      if ( i == v13 )
        break;
      result = *(uint32_t **)(a1 + 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::applyAerodynamicForces  (binary VA: 0x186c9b0)
// Original: hkpVehiclePerWheelSimulation::applyAerodynamicForces
// ----------------------------------------------------------------------------
int hkpVehiclePerWheelSimulation::applyAerodynamicForces(int a1, int a2, float **a3)
{
  int v3;
  float v4; // xmm0_4
  float *v5;
  float *v6;
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v27)) > _g4_s7 ? (28u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v28)) > _g4_s8 ? (32u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v29)) > _g4_s9 ? (36u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v30)) > _g4_s10 ? (40u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v31)) > _g4_s11 ? (44u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);

  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 24);
  v22 = *(float *)(a2 + 8);
  v4 = v22 * *(float *)(v3 + 428);
  v28 = *(float *)(v3 + 432);
  v29 = *(float *)(v3 + 436);
  v30 = *(float *)(v3 + 440);
  v31 = *(float *)(v3 + 444);
  v5 = *a3;
  v28 = (float)(**a3 * v4) + v28;
  v29 = (float)(v5[1] * v4) + v29;
  v30 = (float)(v5[2] * v4) + v30;
  v31 = (float)(v4 * v5[3]) + v31;
  hkpEntity::activate((hkpEntity::Self *)v3);
  G4_VCALL<void>(v3 + 224, 80, &v28);
  v6 = *(float **)(*(uint32_t *)(a1 + 12) + 24);
  v27 = v6[66];
  v26 = v6[68];
  v25 = v6[69];
  v7 = v22;
  v8 = (*a3)[4] * v22;
  v9 = (*a3)[5] * v22;
  v10 = v6[60];
  v24 = v6[70];
  v21 = v6[61];
  v11 = v6[64];
  v20 = v6[62];
  v23 = v6[65];
  v12 = v7 * (*a3)[6];
  v13 = (float)((float)((float)(v10 * v8) + (float)(v21 * v9)) + (float)(v20 * v12)) * *(float *)(v3 + 416);
  v14 = (float)((float)((float)(v8 * v11) + (float)(v23 * v9)) + (float)(v27 * v12)) * *(float *)(v3 + 420);
  v15 = (float)((float)((float)(v8 * v26) + (float)(v9 * v25)) + (float)(v12 * v24)) * *(float *)(v3 + 424);
  v16 = (float)((float)(v6[63] * v13) + (float)(v6[67] * v14)) + (float)(v6[71] * v15);
  v32[0] = (float)((float)((float)(v10 * v13) + (float)(v11 * v14)) + (float)(v26 * v15)) + *(float *)(v3 + 448);
  v17 = (float)(v21 * v13) + (float)(v23 * v14);
  v32[3] = v16 + *(float *)(v3 + 460);
  v18 = (float)((float)((float)(v13 * v20) + (float)(v14 * v27)) + (float)(v15 * v24)) + *(float *)(v3 + 456);
  v32[1] = (float)(v17 + (float)(v25 * v15)) + *(float *)(v3 + 452);
  v32[2] = v18;
  hkpEntity::activate((hkpEntity::Self *)v3);
  return G4_VCALL<int>(v3 + 224, 84, v32);
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::removeFrictionConstraint  (binary VA: 0x186cc80)
// Original: hkpVehiclePerWheelSimulation::removeFrictionConstraint
// ----------------------------------------------------------------------------
int hkpVehiclePerWheelSimulation::removeFrictionConstraint(hkpVehiclePerWheelSimulation::Self *self, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  uint8_t v9[25];

  v2 = *((uint32_t *)self + 10) + 320 * a2;
  hkpWorld::removeConstraint((hkpWorld::Self *)v9, *(hkpConstraintInstance::Self **)(*(uint32_t *)(*((uint32_t *)self + 3) + 24) + 8));
  v3 = *(uint32_t *)(v2 + 256);
  result = v3 + 4;
  if ( *(uint16_t *)(v3 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v3 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
      result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v7);
    }
    while ( v8 != result );
    if ( (uint16_t)v7 == 0 )
      result = G4_VCALL<int>(v3, 16);
  }
  *(uint32_t *)(v2 + 256) = 0;
  --*(uint32_t *)(v2 + 40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::removeFromWorld  (binary VA: 0x186cd30)
// Original: hkpVehiclePerWheelSimulation::removeFromWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpVehiclePerWheelSimulation::removeFromWorld(hkpWorld::Self **self)
{
  int v1;
  hkpWorld::Self *result;
  int v3;

  v1 = 0;
  result = hkpWorld::removeWorldPostSimulationListener(*(self + 4), (hkpWorldPostSimulationListener::Self *)(self + 2));
  v3 = (int)(uintptr_t)(*(self + 11));
  *(self + 4) = nullptr;
  if ( v3 > 0 )
  {
    do
    {
      result = *((hkpWorld::Self **)*(self + 10) + 80 * v1 + 64);
      if ( result != nullptr )
      {
        result = (hkpWorld::Self *)hkpVehiclePerWheelSimulation::removeFrictionConstraint(
                               (hkpVehiclePerWheelSimulation::Self *)self,
                               v1);
        v3 = (int)(uintptr_t)(*(self + 11));
      }
      ++v1;
    }
    while ( v1 < v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::Destroy  (binary VA: 0x186cdb0)
// Original: hkpVehiclePerWheelSimulation::~hkpVehiclePerWheelSimulation
// ----------------------------------------------------------------------------
void hkpVehiclePerWheelSimulation::Destroy(hkpVehiclePerWheelSimulation::Self *self)
{
  hkpVehiclePerWheelSimulation::Self *v1;
  int v2;
  int v3;
  char *v4;
  uint32_t *v5;
  char *v6;
  int v7;
  char *v8;
  uint32_t *v9;
  uint32_t *v10;

  v1 = self;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5528);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A555C);
  if ( v2 != 0 )
    hkpVehiclePerWheelSimulation::removeFromWorld((hkpWorld::Self **)self);
  v3 = *((uint32_t *)self + 11) - 1;
  if ( v3 >= 0 )
  {
    v4 = (char *)(*((uint32_t *)self + 10) + 320 * v3 + 48);
    v8 = v4;
    v9 = (uint32_t *)(v4);
    v10 = (uint32_t *)(v4);
    v5 = (uint32_t *)(v4);
    do
    {
      *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_209D8C8);
      v6 = (char *)(v4 - v8);
      --v3;
      v4 -= 320;
      *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v6)) = ((uint32_t)(uintptr_t)&off_209D2A8);
      *(uint32_t *)((char *)v10 + (uint32_t)(uintptr_t)(v6)) = ((uint32_t)(uintptr_t)&off_2096D68);
      *(uint32_t *)((char *)v5 + (uint32_t)(uintptr_t)(v6)) = ((uint32_t)(uintptr_t)&off_2054CB8);
    }
    while ( v3 != -1 );
    v1 = self;
  }
  v7 = *((uint32_t *)v1 + 12);
  *((uint32_t *)v1 + 11) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 10),
      320 * v7);
  *((uint32_t *)v1 + 10) = 0;
  *((uint32_t *)v1 + 12) = 0x80000000;
  *((uint32_t *)v1 + 2) = ((uint32_t)(uintptr_t)&off_209E868);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::Destroy_ea186cf10  (binary VA: 0x186cf10)
// Original: hkpVehiclePerWheelSimulation::~hkpVehiclePerWheelSimulation
// ----------------------------------------------------------------------------
void hkpVehiclePerWheelSimulation::Destroy_ea186cf10(hkpVehiclePerWheelSimulation::Self *self)
{
  int v1;
  int v2;

  hkpVehiclePerWheelSimulation::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::setupFriction  (binary VA: 0x186cf80)
// Original: hkpVehiclePerWheelSimulation::setupFriction
// ----------------------------------------------------------------------------
hkpVehiclePerWheelSimulation::Self * hkpVehiclePerWheelSimulation::setupFriction(hkpVehiclePerWheelSimulation::Self *a1, int a2, int a3)
{
  uint32_t *v3;
  hkpVehiclePerWheelSimulation::Self *result;
  int i;
  float v6; // xmm1_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  __m128i v13;
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  __m128i v18;
  float v19; // xmm6_4
  int v20;
  int v21;
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  __m128i v29;
  float v30; // xmm5_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  __m128i v33;
  float v34; // xmm6_4
  int v35;
  int v36;
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm5_4
  float v40; // xmm2_4
  hkpWheelFrictionConstraintData::Self *v41;
  int v42;
  int v43;
  float v44; // xmm6_4
  int v45;
  int v46; // xmm0_4
  char v47;
  float v48; // xmm0_4
  int address;
  hkpConstraintInstance::Self *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  float v55;
  float *v56;
  int v57;
  int v58;

  v3 = *((uint32_t **)a1 + 3);
  v51 = v3[6];
  result = *((hkpVehiclePerWheelSimulation::Self **)a1 + 11);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v58 = 0;
    for ( i = 0; ; i = v58 )
    {
      v54 = 4 * i;
      v42 = *((uint32_t *)a1 + 10) + 320 * i;
      v43 = v3[19] + 224 * i;
      v56 = (float *)(*(uint32_t *)(v3[7] + 140) + 40 * i);
      v57 = *(uint32_t *)(v43 + 36);
      v44 = *(float *)(**(uint32_t **)(a3 + 8) + 4 * v58) * *v56;
      v45 = *(uint32_t *)(v42 + 256);
      v55 = v44;
      if ( v45 != 0 && v57 != *(uint32_t *)(v45 + 24) )
      {
        v53 = *((uint32_t *)a1 + 10) + 320 * i;
        hkpVehiclePerWheelSimulation::removeFrictionConstraint(a1, v58);
        v42 = v53;
        v3 = *((uint32_t **)a1 + 3);
      }
      v46 = 0;
      v47 = *(uint8_t *)(v3[23] + v58);
      *(uint8_t *)(v42 + 36) = v47;
      if ( v47 == 0 )
        v46 = *(uint32_t *)(v43 + 192);
      *(uint32_t *)v42 = v46;
      if ( v57 != 0 )
      {
        v6 = *(float *)(v43 + 16);
        v7 = *(float *)(v43 + 20);
        v8 = *(float *)(v43 + 168);
        v9 = *(float *)(v43 + 164);
        v10 = *(float *)(**(uint32_t **)(a3 + 4) + v54);
        v11 = *(float *)(v43 + 24);
        v12 = (float)((float)((float)(*(float *)(v43 + 128) * v10) * v6)
                    + (float)((float)(*(float *)(v43 + 132) * v10) * v7))
            + (float)((float)(v10 * *(float *)(v43 + 136)) * v11);
g4_m128_raw(v13) = LODWORD(v7);
        *(float *)g4_m128_ptr<int32_t>(v13) = (float)(v7 * v8) - (float)(v11 * v9);
        v14 = *(float *)(v43 + 160);
        v15 = (float)(v11 * v14) - (float)(v8 * v6);
        v16 = (float)(v6 * v9) - (float)(v7 * v14);
        v18 = v13;
        v17 = (float)(fabs(v12) * v56[3]) * *(float *)(v43 + 32);
        *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v15 * v15))
                                + (float)(v16 * v16);
        if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
        {
          v25 = 0.0;
          v24 = 0.0;
        }
        else
        {
          v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
          v20 = _mm_cvtsi128_si32(v18) >> 1;
          v21 = (_mm_cvtsi128_si32(v18) + 2139095040) >> 31;
          v22 = (float)(1.5 * COERCE_FLOAT(v21 & (1597463174 - v20)))
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * COERCE_FLOAT(v21 & (1597463174 - v20)))
                      * (float)(COERCE_FLOAT(v21 & (1597463174 - v20)) * COERCE_FLOAT(v21 & (1597463174 - v20))));
          v23 = (float)(1.5 * v22) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * v22) * (float)(v22 * v22));
          v24 = (float)(1.5 * v23) - (float)((float)(v19 * v23) * (float)(v23 * v23));
          v25 = 0.0 * v24;
        }
        v26 = *(float *)g4_m128_ptr<int32_t>(v13) * v24;
        v27 = v15 * v24;
        v28 = v16 * v24;
        *(float *)(v42 + 284) = v25;
        *(float *)(v42 + 272) = v26;
        *(float *)(v42 + 276) = v27;
        *(float *)(v42 + 280) = v28;
g4_m128_raw(v29) = *(unsigned int *)(v43 + 24);
        *(float *)g4_m128_ptr<int32_t>(v29) = (float)(*(float *)g4_m128_ptr<int32_t>(v29) * v27) - (float)(*(float *)(v43 + 20) * v28);
        v30 = *(float *)(v43 + 16);
        v31 = (float)(v28 * v30) - (float)(*(float *)(v43 + 24) * v26);
        v32 = (float)(v26 * *(float *)(v43 + 20)) - (float)(v27 * v30);
        v33 = v29;
        *(float *)g4_m128_ptr<int32_t>(v33) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) * *(float *)g4_m128_ptr<int32_t>(v29)) + (float)(v31 * v31))
                                + (float)(v32 * v32);
        if ( *(float *)g4_m128_ptr<int32_t>(v33) <= 0.0 )
        {
          v40 = 0.0;
          v39 = 0.0;
        }
        else
        {
          v34 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v33);
          v35 = _mm_cvtsi128_si32(v33) >> 1;
          v36 = (_mm_cvtsi128_si32(v33) + 2139095040) >> 31;
          v37 = (float)(1.5 * COERCE_FLOAT(v36 & (1597463174 - v35)))
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v33)) * COERCE_FLOAT(v36 & (1597463174 - v35)))
                      * (float)(COERCE_FLOAT(v36 & (1597463174 - v35)) * COERCE_FLOAT(v36 & (1597463174 - v35))));
          v38 = (float)(1.5 * v37) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v33)) * v37) * (float)(v37 * v37));
          v39 = (float)(1.5 * v38) - (float)((float)(v34 * v38) * (float)(v38 * v38));
          v40 = 0.0 * v39;
        }
        v41 = (hkpWheelFrictionConstraintData::Self *)(v42 + 48);
        *(float *)(v42 + 300) = v40;
        v52 = v42;
        *(float *)(v42 + 288) = *(float *)g4_m128_ptr<int32_t>(v29) * v39;
        *(float *)(v42 + 292) = v31 * v39;
        *(float *)(v42 + 296) = v39 * v32;
        *(float *)(v42 + 304) = *(float *)v43 - *(float *)(v51 + 320);
        *(float *)(v42 + 308) = *(float *)(v43 + 4) - *(float *)(v51 + 324);
        *(float *)(v42 + 312) = *(float *)(v43 + 8) - *(float *)(v51 + 328);
        *(float *)(v42 + 316) = *(float *)(v43 + 12) - *(float *)(v51 + 332);
        hkpWheelFrictionConstraintData::setInWorldSpace(
          (hkpWheelFrictionConstraintData::Self *)(v42 + 48),
          (const hkTransformf::Self *)(v51 + 240),
          (const hkTransformf::Self *)(v57 + 240),
          (const hkVector4f::Self *)v43,
          (const hkVector4f::Self *)(v42 + 272),
          (const hkVector4f::Self *)(v42 + 288));
        hkpWheelFrictionConstraintData::setMaxFrictionForce(v41, v17);
        hkpWheelFrictionConstraintData::setTorque(v41, v55);
        hkpWheelFrictionConstraintData::setImpulseScaling(v41, *((float *)a1 + 6), *((float *)a1 + 7));
        if ( *(uint32_t *)(v52 + 256) == 0 )
        {
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v50 = (hkpConstraintInstance::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)address + 44),
                                           56);
          hkpConstraintInstance::Construct((int)(uintptr_t)(v50), v51, v57, (int)(uintptr_t)(v41), 1);
          *(uint32_t *)(v52 + 256) = (uint32_t)(uintptr_t)(v50);
          hkpWorld::addConstraint(*(hkpWorld::Self **)(v51 + 8), v50);
          ++*(uint32_t *)(v52 + 40);
        }
      }
      else
      {
        *(uint32_t *)(v43 + 212) = 0;
        *(uint32_t *)(v43 + 204) = 0;
        *(uint32_t *)(v43 + 208) = 0;
        if ( *(uint8_t *)(v42 + 36) != 0 )
        {
          v48 = *(float *)v42;
        }
        else
        {
          v48 = (float)((float)(v44 * *(float *)(a2 + 8)) * *(float *)(v42 + 20)) + *(float *)v42;
          *(float *)v42 = v48;
        }
        *(float *)(v43 + 196) = v48;
        *(uint32_t *)(v43 + 212) = 0;
      }
      result = a1;
      if ( *((uint32_t *)a1 + 11) <= ++v58 )
        break;
      v3 = *((uint32_t **)a1 + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::simulateVehicle  (binary VA: 0x186d540)
// Original: hkpVehiclePerWheelSimulation::simulateVehicle
// ----------------------------------------------------------------------------
hkpVehiclePerWheelSimulation::Self * hkpVehiclePerWheelSimulation::simulateVehicle(hkpVehiclePerWheelSimulation::Self *a1, int a2, int a3, float **a4)
{
  hkpVehiclePerWheelSimulation::applySuspensionForces((int)(uintptr_t)(a1), a3, (int)(uintptr_t)(a4));
  hkpVehiclePerWheelSimulation::applyAerodynamicForces((int)(uintptr_t)(a1), a3, a4);
  return hkpVehiclePerWheelSimulation::setupFriction(a1, a3, (int)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::computeAngularChassisAcceleration  (binary VA: 0x186d5a0)
// Original: hkpVehiclePerWheelSimulation::computeAngularChassisAcceleration
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpVehiclePerWheelSimulation::computeAngularChassisAcceleration(hkpVehiclePerWheelSimulation::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, hkVector4f::Self *a4)
{
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm2_4
  float *v7;
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v18[4];

  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = (float)(*((float *)a3 + 1) * v5) - (float)(*((float *)a3 + 2) * v4);
  v7 = *(float **)(*((uint32_t *)self + 3) + 24);
  v8 = v7[60];
  v7 += 60;
  v9 = (float)(*((float *)a3 + 2) * *(float *)a2) - (float)(v5 * *(float *)a3);
  v10 = (float)(*(float *)a3 * v4) - (float)(*(float *)a2 * *((float *)a3 + 1));
  v11 = (float)(v8 * v6) + (float)(v7[1] * v9);
  v12 = (float)(v7[4] * v6) + (float)(v7[5] * v9);
  v13 = (float)((float)(v6 * v7[8]) + (float)(v9 * v7[9])) + (float)(v7[10] * v10);
  v14 = (float)(v11 + (float)(v10 * v7[2])) * v7[44];
  v18[1] = (float)(v12 + (float)(v7[6] * v10)) * v7[45];
  v15 = v7[46] * v13;
  v16 = v13 * v7[47];
  v18[0] = v14;
  v18[2] = v15;
  v18[3] = v16;
  return hkVector4f::setRotatedDir(a4, (const hkMatrix3f::Self *)v7, (const hkVector4f::Self *)v18);
}

// ----------------------------------------------------------------------------
// Function: hkpVehiclePerWheelSimulation::postSimulationCallback  (binary VA: 0x186d6d0)
// Original: hkpVehiclePerWheelSimulation::postSimulationCallback
// ----------------------------------------------------------------------------
float * hkpVehiclePerWheelSimulation::postSimulationCallback(hkpVehiclePerWheelSimulation::Self *self, hkpWorld::Self *a2)
{
  uint32_t *v2;
  float *result;
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  int v13;
  int v14;
  float v15; // xmm0_4
  int v16;
  int v17; // xmm0_4
  typedef float *_g4_t_v18;
  typedef float _g4_t_ForwardSlipImpulse;
  typedef float _g4_t_SideSlipImpulse;
  typedef float _g4_t_SideFrictionImpulse;
  typedef float _g4_t_Mass;
  typedef float *_g4_t_v23;
  typedef float _g4_t_v24;
  typedef hkpWheelFrictionConstraintData::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_ForwardSlipImpulse)) > _g4_s1 ? (12u + sizeof(_g4_t_ForwardSlipImpulse)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_SideSlipImpulse)) > _g4_s2 ? (12u + sizeof(_g4_t_SideSlipImpulse)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_SideFrictionImpulse)) > _g4_s3 ? (12u + sizeof(_g4_t_SideFrictionImpulse)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_Mass)) > _g4_s4 ? (12u + sizeof(_g4_t_Mass)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v25)) > _g4_s7 ? (24u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v26)) > _g4_s8 ? (28u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v27)) > _g4_s9 ? (32u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v28)) > _g4_s10 ? (36u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v29)) > _g4_s11 ? (40u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v30)) > _g4_s12 ? (44u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v31)) > _g4_s13 ? (48u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_ForwardSlipImpulse &ForwardSlipImpulse = *reinterpret_cast<_g4_t_ForwardSlipImpulse *>(_g4_sf + 12u);
  _g4_t_SideSlipImpulse &SideSlipImpulse = *reinterpret_cast<_g4_t_SideSlipImpulse *>(_g4_sf + 12u);
  _g4_t_SideFrictionImpulse &SideFrictionImpulse = *reinterpret_cast<_g4_t_SideFrictionImpulse *>(_g4_sf + 12u);
  _g4_t_Mass &Mass = *reinterpret_cast<_g4_t_Mass *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);

  v2 = *((uint32_t **)self + 3);
  result = (float *)self;
  v24 = *((float *)a2 + 122);
  if ( *((int *)self + 11) > 0 )
  {
    v26 = 0;
    result = (float *)v2[6];
    while ( 1 )
    {
      v13 = *((uint32_t *)self + 10) + 320 * v26;
      v14 = v2[19] + 224 * v26;
      v15 = *(float *)(v14 + 200);
      v16 = *(uint32_t *)(v2[7] + 140);
      if ( v15 > 3141.5928f )
        break;
      if ( v15 >= -3141.5928f )
        goto LABEL_4;
      *(float *)(v14 + 200) = v15 + 3141.5928f;
      if ( *(uint32_t *)(v13 + 256) == 0 )
      {
LABEL_13:
        v17 = *(uint32_t *)(v14 + 192);
        *(uint32_t *)(v14 + 204) = 0;
        *(uint32_t *)(v14 + 208) = 0;
        *(uint32_t *)(v14 + 212) = 0;
        *(uint32_t *)(v14 + 196) = v17;
        *(uint32_t *)(v14 + 216) = 0;
        goto LABEL_8;
      }
LABEL_5:
      v18 = result;
      v23 = (float *)(v16 + 40 * v26);
      v25 = (hkpWheelFrictionConstraintData::Self *)(v13 + 48);
      ForwardSlipImpulse = hkpWheelFrictionConstraintData::getForwardSlipImpulse((hkpWheelFrictionConstraintData::Self *)(v13 + 48));
      v27 = *(float *)(v13 + 272) * ForwardSlipImpulse;
      v28 = *(float *)(v13 + 276) * ForwardSlipImpulse;
      v4 = ForwardSlipImpulse * *(float *)(v13 + 284);
      v29 = *(float *)(v13 + 280) * ForwardSlipImpulse;
      v30 = v4;
      SideSlipImpulse = hkpWheelFrictionConstraintData::getSideSlipImpulse((hkpWheelFrictionConstraintData::Self *)(v13 + 48));
      v27 = (float)(*(float *)(v13 + 288) * SideSlipImpulse) + v27;
      v28 = (float)(*(float *)(v13 + 292) * SideSlipImpulse) + v28;
      v5 = (float)(SideSlipImpulse * *(float *)(v13 + 300)) + v30;
      v29 = (float)(*(float *)(v13 + 296) * SideSlipImpulse) + v29;
      v30 = v5;
      hkpVehiclePerWheelSimulation::computeAngularChassisAcceleration(
        self,
        (const hkVector4f::Self *)&v27,
        (const hkVector4f::Self *)(v13 + 304),
        (hkVector4f::Self *)v31);
      v6 = *(float *)(v13 + 312);
      v7 = *(float *)(v13 + 308);
      v8 = v18[107];
      v9 = (float)((float)(v31[1] * v6) - (float)(v31[2] * v7)) + (float)(v27 * v8);
      v10 = (float)((float)(v31[2] * *(float *)(v13 + 304)) - (float)(v6 * v31[0])) + (float)(v28 * v8);
      v11 = (float)((float)(v31[0] * v7) - (float)(v31[1] * *(float *)(v13 + 304))) + (float)(v8 * v29);
      if ( *(uint8_t *)(v13 + 36) == 0 )
        *(float *)v13 = *(float *)v13
                      - (float)((float)((float)((float)((float)((float)(*(float *)(v13 + 272) * v9)
                                                              + (float)(*(float *)(v13 + 276) * v10))
                                                      + (float)(*(float *)(v13 + 280) * v11))
                                              / *v23)
                                      * *((float *)self + 5))
                              * v24);
      SideFrictionImpulse = hkpWheelFrictionConstraintData::getSideFrictionImpulse(v25);
      *(float *)(v14 + 208) = SideFrictionImpulse / v24;
      *(float *)(v14 + 216) = (float)((float)(v9 * *(float *)(v13 + 288)) + (float)(v10 * *(float *)(v13 + 292)))
                            + (float)(v11 * *(float *)(v13 + 296));
      Mass = hkpMotion::getMass((hkpMotion::Self *)(v18 + 56));
      *(float *)(v14 + 204) = (float)((float)(Mass * 0.5)
                                    * (float)((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11)))
                            * 0.001f;
      hkpWheelFrictionConstraintData::resetSolverData(v25);
      result = v18;
      v12 = (float)((float)((float)((float)((float)((float)(*(float *)(v13 + 308) * result[114])
                                                  - (float)(*(float *)(v13 + 312) * result[113]))
                                          + result[108])
                                  * *(float *)(v13 + 272))
                          + (float)((float)((float)((float)(*(float *)(v13 + 312) * result[112])
                                                  - (float)(result[114] * *(float *)(v13 + 304)))
                                          + result[109])
                                  * *(float *)(v13 + 276)))
                  + (float)((float)((float)((float)(*(float *)(v13 + 304) * result[113])
                                          - (float)(result[112] * *(float *)(v13 + 308)))
                                  + result[110])
                          * *(float *)(v13 + 280)))
          / *v23;
      *(float *)(v14 + 196) = v12;
      *(float *)(v14 + 212) = (float)(*(float *)v13 - v12) * *v23;
LABEL_8:
      *(uint32_t *)(v14 + 192) = *(uint32_t *)v13;
      ++v26;
      *(float *)(v14 + 200) = (float)(v24 * *(float *)v13) + *(float *)(v14 + 200);
      if ( *((uint32_t *)self + 11) <= v26 )
        return result;
      v2 = *((uint32_t **)self + 3);
    }
    *(float *)(v14 + 200) = v15 - 3141.5928f;
LABEL_4:
    if ( *(uint32_t *)(v13 + 256) == 0 )
      goto LABEL_13;
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSuspension::SuspensionWheelParameters::staticClass  (binary VA: 0x186dbf0)
// Original: hkpVehicleSuspension::SuspensionWheelParameters::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleSuspension::SuspensionWheelParameters::staticClass()
{
  return &hkpVehicleSuspensionSuspensionWheelParametersClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSuspension::staticClass  (binary VA: 0x186dc10)
// Original: hkpVehicleSuspension::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleSuspension::staticClass()
{
  return &hkpVehicleSuspensionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleAerodynamics::staticClass  (binary VA: 0x186dd70)
// Original: hkpVehicleAerodynamics::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleAerodynamics::staticClass()
{
  return &hkpVehicleAerodynamicsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::Destroy  (binary VA: 0x186de20)
// Original: hkpVehicleSteeringAckerman::~hkpVehicleSteeringAckerman
// ----------------------------------------------------------------------------
void hkpVehicleSteeringAckerman::Destroy(hkpVehicleSteeringAckerman::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A55A8);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      v1 & 0x3FFFFFFF);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 36;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::Destroy_ea186ded0  (binary VA: 0x186ded0)
// Original: hkpVehicleSteeringAckerman::~hkpVehicleSteeringAckerman
// ----------------------------------------------------------------------------
void hkpVehicleSteeringAckerman::Destroy_ea186ded0(hkpVehicleSteeringAckerman::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A55A8);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      v1 & 0x3FFFFFFF);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::Construct  (binary VA: 0x186df40)
// Original: hkpVehicleSteeringAckerman::hkpVehicleSteeringAckerman
// ----------------------------------------------------------------------------
void hkpVehicleSteeringAckerman::Construct(hkpVehicleSteeringAckerman::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A55A8);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 8) = 1075419546;
  *((uint32_t *)self + 7) = 1074580685;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::calcMainSteeringAngle  (binary VA: 0x186dfa0)
// Original: hkpVehicleSteeringAckerman::calcMainSteeringAngle
// ----------------------------------------------------------------------------
int hkpVehicleSteeringAckerman::calcMainSteeringAngle(int a1, int a2, int a3, int a4, float *a5)
{
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  int result;
  __m128i v9;
  float v10; // xmm1_4
  int v11;
  float v12; // xmm2_4
  float v13[7];

  v5 = *(float *)(a1 + 8) * *(float *)(a4 + 8);
  *a5 = v5;
  a5[1] = v5;
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v13,
    (const hkMatrix3f::Self *)(*(uint32_t *)(a3 + 24) + 240),
    (const hkVector4f::Self *)(*(uint32_t *)(a3 + 28) + 64));
  v6 = *(uint32_t *)(a3 + 24);
g4_m128_raw(v9) = *(unsigned int *)(v6 + 432);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v13[0]) + (float)(*(float *)(v6 + 436) * v13[1]);
  v7 = *(float *)(v6 + 440) * v13[2];
  result = a1;
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) + v7;
  v10 = *(float *)(a1 + 12);
  if ( *(float *)g4_m128_ptr<int32_t>(v9) > v10 )
  {
    v11 = _mm_cvtsi128_si32(v9);
    result = (2130706432 - v11) & ((v11 ^ (v11 + 2139095040)) >> 31);
    v12 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v9)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&result)) * *(float *)&result)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&result)) * *(float *)&result);
    *a5 = (float)((float)((float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v12)) * v12) * v10)
                * (float)((float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v12)) * v12) * v10))
        * *a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::calcAckermanOuterAngles  (binary VA: 0x186e0c0)
// Original: hkpVehicleSteeringAckerman::calcAckermanOuterAngles
// ----------------------------------------------------------------------------
int hkpVehicleSteeringAckerman::calcAckermanOuterAngles(int a1, int a2, int a3)
{
  float *v3;
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm4_4
  int64_t v8; // rax
  int v9;
  int v10;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  int v24;
  float v25;

  v18 = *(float *)a3;
  v3 = *(float **)(a2 + 24);
  v14 = v3[80];
  v21 = v3[82];
  v15 = v3[68];
  v16 = v3[69];
  v20 = v3[81];
  v17 = v3[70];
  v13 = *(float *)(a1 + 28);
  v12 = *(float *)(a1 + 32);
  v19 = fabs(*(float *)a3);
  v22 = sinf(v19);
  v4 = v22;
  v23 = cosf(v19);
  v5 = v16;
  v6 = v15;
  if ( fabs(v4 / v23) >= 0.00000011920929f )
  {
    v25 = atan2f(1.0, (float)(1.0 / (float)(v4 / v23)) + (float)(v13 / v12));
    v7 = v25;
    v5 = v16;
    v6 = v15;
    if ( *(float *)a3 >= 0.0 )
      goto LABEL_3;
  }
  else
  {
    v7 = 0.0;
    if ( v18 >= 0.0 )
      goto LABEL_3;
  }
  v7 = -v7;
LABEL_3:
  v8 = 0;
  if ( *(int *)(a1 + 20) > 0 )
  {
    v24 = 0;
    v9 = a1;
    do
    {
      if ( *(uint8_t *)(*(uint32_t *)(v9 + 16) + v8) != 0 )
      {
        v10 = *(uint32_t *)(a3 + 8);
        if ( (float)((float)((float)((float)((float)(*(float *)(*(uint32_t *)(a2 + 76) + v24 + 80) - v14) * v6)
                                   + (float)((float)(*(float *)(*(uint32_t *)(a2 + 76) + v24 + 84) - v20) * v5))
                           + (float)((float)(*(float *)(*(uint32_t *)(a2 + 76) + v24 + 88) - v21) * v17))
                   * *(float *)a3) >= 0.00000011920929f )
          *(uint32_t *)(v10 + HIDWORD(v8)) = *(uint32_t *)a3;
        else
          *(float *)(v10 + HIDWORD(v8)) = v7;
      }
      else
      {
        *(uint32_t *)(*(uint32_t *)(a3 + 8) + HIDWORD(v8)) = 0;
      }
      v9 = a1;
      LODWORD(v8) = v8 + 1;
      HIDWORD(v8) += 4;
      v24 += 224;
    }
    while ( *(uint32_t *)(a1 + 20) > (int)v8 );
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteeringAckerman::calcSteering  (binary VA: 0x186e340)
// Original: hkpVehicleSteeringAckerman::calcSteering
// ----------------------------------------------------------------------------
int hkpVehicleSteeringAckerman::calcSteering(int a1, int64_t a2, int a3, float *a4)
{
  hkpVehicleSteeringAckerman::calcMainSteeringAngle(a1, a2, SHIDWORD(a2), a3, a4);
  return hkpVehicleSteeringAckerman::calcAckermanOuterAngles(a1, SHIDWORD(a2), (int)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleSteering::staticClass  (binary VA: 0x186e3a0)
// Original: hkpVehicleSteering::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleSteering::staticClass()
{
  return &hkpVehicleSteeringClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleEngine::staticClass  (binary VA: 0x186e450)
// Original: hkpVehicleEngine::staticClass
// ----------------------------------------------------------------------------
void * hkpVehicleEngine::staticClass()
{
  return &hkpVehicleEngineClass;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::calcWheelsAABB  (binary VA: 0x186ec00)
// Original: hkpVehicleRayCastWheelCollide::calcWheelsAABB
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::calcWheelsAABB(hkpVehicleRayCastWheelCollide::Self *self, const hkpVehicleInstance::Self *a2, hkAabb::Self *a3)
{
  float *v3;
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float *v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  int result;
  int v14;
  float *v15;
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4

  v3 = *((float **)a2 + 19);
  v4 = fminf(v3[20], v3[24]);
  *(float *)a3 = v4;
  v5 = fminf(v3[21], v3[25]);
  *((float *)a3 + 1) = v5;
  v6 = fminf(v3[22], v3[26]);
  *((float *)a3 + 2) = v6;
  v7 = fminf(v3[23], v3[27]);
  *((float *)a3 + 3) = v7;
  v8 = *((float **)a2 + 19);
  v9 = fmaxf(v8[20], v8[24]);
  *((float *)a3 + 4) = v9;
  v10 = fmaxf(v8[21], v8[25]);
  *((float *)a3 + 5) = v10;
  v11 = fmaxf(v8[22], v8[26]);
  *((float *)a3 + 6) = v11;
  v12 = fmaxf(v8[23], v8[27]);
  *((float *)a3 + 7) = v12;
  result = *((uint32_t *)a2 + 7);
  if ( *(char *)(result + 32) > 1 )
  {
    v14 = 1;
    do
    {
      v15 = (float *)(*((uint32_t *)a2 + 19) + 224 * v14++);
      v16 = fminf(v4, v15[24]);
      *(float *)a3 = v16;
      v17 = fminf(v5, v15[25]);
      *((float *)a3 + 1) = v17;
      v18 = fminf(v6, v15[26]);
      *((float *)a3 + 2) = v18;
      v19 = fminf(v7, v15[27]);
      *((float *)a3 + 3) = v19;
      v4 = fminf(v16, v15[20]);
      *(float *)a3 = v4;
      v5 = fminf(v17, v15[21]);
      *((float *)a3 + 1) = v5;
      v6 = fminf(v18, v15[22]);
      *((float *)a3 + 2) = v6;
      v7 = fminf(v19, v15[23]);
      *((float *)a3 + 3) = v7;
      v20 = fmaxf(v9, v15[24]);
      *((float *)a3 + 4) = v20;
      v21 = fmaxf(v10, v15[25]);
      *((float *)a3 + 5) = v21;
      v22 = fmaxf(v11, v15[26]);
      *((float *)a3 + 6) = v22;
      v23 = fmaxf(v12, v15[27]);
      *((float *)a3 + 7) = v23;
      v9 = fmaxf(v20, v15[20]);
      *((float *)a3 + 4) = v9;
      v10 = fmaxf(v21, v15[21]);
      *((float *)a3 + 5) = v10;
      v11 = fmaxf(v22, v15[22]);
      *((float *)a3 + 6) = v11;
      v12 = fmaxf(v23, v15[23]);
      *((float *)a3 + 7) = v12;
      result = *(char *)(*((uint32_t *)a2 + 7) + 32);
    }
    while ( result > v14 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::collideWheels  (binary VA: 0x186ed60)
// Original: hkpVehicleRayCastWheelCollide::collideWheels
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::collideWheels(int *a1, int a2, int a3, int a4)
{
  int result;
  char v5;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[17];
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v10)) > _g4_s1 ? (32u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v11)) > _g4_s2 ? (40u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v12)) > _g4_s3 ? (44u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (116u + sizeof(_g4_t_v14)) > _g4_s5 ? (116u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 116u);

  result = a3;
  v5 = *(uint8_t *)(*(uint32_t *)(a3 + 28) + 32);
  if ( v5 != 0 )
  {
    v12 = 0;
    v11 = 0;
    v10 = 224 * ((uint8_t)(v5 - 1) + 1);
    do
    {
      v7 = *a1;
      v13[4] = 1065353216;
      v13[5] = -1;
      v13[16] = 0;
      v13[8] = -1;
      v14 = 0;
      (*(void (**)(int *, int, uint32_t *))(v7 + 64))(a1, *(uint32_t *)(a3 + 76) + v12, v13);
      v8 = *a1;
      if ( v14 != 0 )
        (*(void (**)(int *, int, int, uint32_t *, int))(v8 + 68))(a1, a3, v11, v13, a4);
      else
        (*(void (**)(int *, int, int, int))(v8 + 72))(a1, a3, v11, a4);
      v9 = a4;
      a4 += 96;
      G4_VCALL<void>(a1, 52, a3, v11++, v9);
      v12 += 224;
      result = v10;
    }
    while ( v12 != v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::getCollisionOutputWithoutHit  (binary VA: 0x186ee90)
// Original: hkpVehicleRayCastWheelCollide::getCollisionOutputWithoutHit
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::getCollisionOutputWithoutHit(int a1, int a2, uint8_t a3, int a4)
{
  int v5;
  int v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4

  v5 = *(uint32_t *)(a2 + 76) + 224 * a3;
  v6 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 52) + 8) + 48 * a3 + 32);
  *(uint32_t *)(a4 + 36) = 0;
  *(uint32_t *)(a4 + 72) = v6;
  *(uint32_t *)(a4 + 76) = 0;
  *(uint32_t *)a4 = *(uint32_t *)(v5 + 96);
  *(uint32_t *)(a4 + 4) = *(uint32_t *)(v5 + 100);
  *(uint32_t *)(a4 + 8) = *(uint32_t *)(v5 + 104);
  *(uint32_t *)(a4 + 12) = *(uint32_t *)(v5 + 108);
  v7 = -*(float *)(v5 + 132);
  v8 = -*(float *)(v5 + 136);
  v9 = -*(float *)(v5 + 128);
  *(uint32_t *)(a4 + 80) = 1065353216;
  *(float *)(a4 + 16) = v9;
  *(float *)(a4 + 20) = v7;
  *(float *)(a4 + 24) = v8;
  *(uint32_t *)(a4 + 32) = 0;
  *(uint32_t *)(a4 + 28) = v6;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::buildRayCastCommands  (binary VA: 0x186ef50)
// Original: hkpVehicleRayCastWheelCollide::buildRayCastCommands
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::buildRayCastCommands(int a1, int a2, int a3, int a4, uint32_t *a5, int a6)
{
  int v6;
  int v7;
  char *v8;
  uint32_t *v9;
  uint32_t *v10;
  char *v11;
  int v13;
  int v14;
  int v15;
  char v16;

  v6 = a6;
  (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 16) + 52))(*(uint32_t *)(a1 + 16));
  v14 = *(uint32_t *)(*(uint32_t *)(a1 + 16) + 196);
  if ( v14 <= 0 )
    return 0;
  v16 = *(uint8_t *)(*(uint32_t *)(a2 + 28) + 32);
  if ( v16 > 0 )
  {
    v7 = a3 + 16;
    v13 = 0;
    if ( a3 == 0 )
      v7 = 0;
    v15 = v7;
    v8 = (char *)a5;
    v9 = a5 + 4;
    do
    {
      v10 = (uint32_t *)(*(uint32_t *)(a2 + 76) + v13);
      *(uint32_t *)v8 = v10[20];
      *((uint32_t *)v8 + 1) = v10[21];
      *((uint32_t *)v8 + 2) = v10[22];
      *((uint32_t *)v8 + 3) = v10[23];
      v11 = (char *)(v8 - (char *)a5);
      v8 += 80;
      *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v11)) = v10[24];
      *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v11) + 4) = v10[25];
      *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v11) + 8) = v10[26];
      *(uint32_t *)((char *)v9 + (uint32_t)(uintptr_t)(v11) + 12) = v10[27];
      *((uint32_t *)v8 - 12) = *(uint32_t *)(a1 + 12);
      *((uint32_t *)v8 - 11) = v15;
      *((uint32_t *)v8 - 8) = *(uint32_t *)(a3 + 32);
      *((uint32_t *)v8 - 7) = a4;
      *((uint8_t *)a5 + (uint32_t)(uintptr_t)(v11) + 76) = 0;
      *((uint32_t *)v8 - 6) = *(uint32_t *)(*(uint32_t *)(a1 + 16) + 192);
      *((uint32_t *)v8 - 4) = v6;
      *((uint32_t *)v8 - 5) = v14;
      *((uint32_t *)v8 - 3) = 1;
      *((uint32_t *)v8 - 2) = 0;
      v6 += 80;
      v13 += 224;
    }
    while ( v6 != a6 + 16 * (5 * (uint8_t)(v16 - 1) + 5) );
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::setCollisionFilterInfo  (binary VA: 0x186f0c0)
// Original: hkpVehicleRayCastWheelCollide::setCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::setCollisionFilterInfo(hkpVehicleRayCastWheelCollide::Self *self, unsigned int a2)
{
  int result;

  *((uint32_t *)self + 3) = a2;
  result = *((uint32_t *)self + 4);
  if ( result != 0 )
    *(uint32_t *)(result + 44) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::getPhantoms  (binary VA: 0x186f0e0)
// Original: hkpVehicleRayCastWheelCollide::getPhantoms
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::getPhantoms(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = *(uint32_t *)(a1 + 16);
  v3 = *((uint32_t *)a2 + 1);
  if ( v3 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v5);
    v3 = *((uint32_t *)a2 + 1);
  }
  result = *(uint32_t *)a2;
  *(uint32_t *)(*(uint32_t *)a2 + 4 * v3) = v2;
  ++*((uint32_t *)a2 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection  (binary VA: 0x186f140)
// Original: hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection(hkpAabbPhantom::Self **self, const hkpVehicleInstance::Self *a2)
{
  uint8_t v3[44];

  (*((void (**)(hkpAabbPhantom::Self **, const hkpVehicleInstance::Self *, uint8_t *))*self + 15))(self, a2, v3);
  return hkpAabbPhantom::setAabb(*(self + 4), (const hkAabb::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::castSingleWheel  (binary VA: 0x186f190)
// Original: hkpVehicleRayCastWheelCollide::castSingleWheel
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::castSingleWheel(int a1, uint32_t *a2, hkVector4f::Self *a3)
{
  int v3;
  uint32_t v5[12];

  v5[10] = 0;
  LOBYTE(v5[8]) = 1;
  v5[0] = a2[20];
  v5[1] = a2[21];
  v5[2] = a2[22];
  v5[3] = a2[23];
  v5[4] = a2[24];
  v5[5] = a2[25];
  v3 = a2[27];
  v5[6] = a2[26];
  v5[7] = v3;
  v5[9] = *(uint32_t *)(a1 + 12);
  return hkpAabbPhantom::castRay(*(uint32_t **)(a1 + 16), (int)(uintptr_t)(v5), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::addToWorld  (binary VA: 0x186f220)
// Original: hkpVehicleRayCastWheelCollide::addToWorld
// ----------------------------------------------------------------------------
hkpPhantom::Self * hkpVehicleRayCastWheelCollide::addToWorld(hkpPhantom::Self **self, hkpWorld::Self *a2)
{
  return hkpWorld::addPhantom(a2, *(self + 4));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::removeFromWorld  (binary VA: 0x186f250)
// Original: hkpVehicleRayCastWheelCollide::removeFromWorld
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::removeFromWorld(hkpVehicleRayCastWheelCollide::Self *self)
{
  return hkpWorld::removePhantom(*(hkpWorld::Self **)(*((uint32_t *)self + 4) + 8), *((hkpPhantom::Self **)self + 4));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::init  (binary VA: 0x186f280)
// Original: hkpVehicleRayCastWheelCollide::init
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::init(hkpVehicleRayCastWheelCollide::Self *self, const hkpVehicleInstance::Self *a2)
{
  int address;
  hkpAabbPhantom::Self *v3;
  uint8_t v5[44];

  G4_VCALL<void>(self, 60, a2, v5);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkpAabbPhantom::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           208);
  hkpAabbPhantom::Construct(v3, (const hkAabb::Self *)v5, *((uint32_t *)self + 3));
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 6) + 16;
  return hkpPhantom::addPhantomOverlapListener(v3, (hkpVehicleRayCastWheelCollide::Self *)((char *)self + 28));
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::getCollisionOutputFromCastResult  (binary VA: 0x186f320)
// Original: hkpVehicleRayCastWheelCollide::getCollisionOutputFromCastResult
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::getCollisionOutputFromCastResult(int a1, uint32_t *a2, uint8_t a3, int a4, int a5)
{
  int result;
  float v6; // xmm6_4
  float v7; // xmm0_4
  float *v8;
  float v9; // xmm5_4
  float v10; // xmm4_4
  float *v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  __m128i v19;
  float *v20;
  float v21; // xmm7_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm3_4
  float v25; // xmm3_4
  int v26;
  int v27; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  int v39;
  float v40;
  int v41;
  float v42;
  float *v43;

  result = a5;
  v6 = *(float *)a4;
  v7 = *(float *)(*(uint32_t *)(a2[13] + 8) + 48 * a3 + 32);
  v8 = (float *)(a2[19] + 224 * a3);
  *(uint32_t *)(a5 + 16) = *(uint32_t *)a4;
  v9 = *(float *)(a4 + 4);
  *(float *)(a5 + 20) = v9;
  v10 = *(float *)(a4 + 8);
  *(float *)(a5 + 24) = v10;
  if ( a5 + 40 >= (unsigned int)(a4 + 48) || a4 + 32 >= (unsigned int)(a5 + 56) )
  {
    *(__m128i *)(a5 + 40) = *(__m128i *)(a4 + 32);
    *(__m128i *)(a5 + 56) = *(__m128i *)(a4 + 48);
  }
  else
  {
    *(uint32_t *)(a5 + 40) = *(uint32_t *)(a4 + 32);
    *(uint32_t *)(a5 + 44) = *(uint32_t *)(a4 + 36);
    *(uint32_t *)(a5 + 48) = *(uint32_t *)(a4 + 40);
    *(uint32_t *)(a5 + 52) = *(uint32_t *)(a4 + 44);
    *(uint32_t *)(a5 + 56) = *(uint32_t *)(a4 + 48);
    *(uint32_t *)(a5 + 60) = *(uint32_t *)(a4 + 52);
    *(uint32_t *)(a5 + 64) = *(uint32_t *)(a4 + 56);
    *(uint32_t *)(a5 + 68) = *(uint32_t *)(a4 + 60);
  }
  v41 = 0;
  v39 = *(uint32_t *)(a4 + 68);
  if ( *(uint8_t *)(v39 + 24) == 1 )
    v41 = *(char *)(v39 + 16) + v39;
  *(uint32_t *)(a5 + 36) = v41;
  v11 = (float *)v41;
  v12 = *(float *)(*(uint32_t *)(a2[7] + 140) + 40 * a3);
  v13 = (float)(v7 + v12) * *(float *)(a4 + 16);
  v14 = v13 - v12;
  *(float *)(a5 + 72) = v13 - v12;
  v15 = (float)(v8[32] * v13) + v8[20];
  v16 = (float)(v8[33] * v13) + v8[21];
  v17 = (float)(v8[34] * v13) + v8[22];
  v18 = (float)(v13 * v8[35]) + v8[23];
  *(float *)(a5 + 28) = v14;
  *(float *)a5 = v15;
  *(float *)(a5 + 4) = v16;
  *(float *)(a5 + 8) = v17;
  *(float *)(a5 + 12) = v18;
  *(uint32_t *)(a5 + 32) = *(uint32_t *)(v41 + 140);
g4_m128_raw(v19) = *((unsigned int *)v8 + 32);
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * v6) + (float)(v8[33] * v9))
                          + (float)(v8[34] * v10);
  if ( (float)-*(float *)(a2[7] + 132) > *(float *)g4_m128_ptr<int32_t>(v19) )
  {
    v20 = (float *)a2[6];
    v38 = v15 - *(float *)(v41 + 320);
    v36 = *(float *)(v41 + 452);
    v35 = *(float *)(v41 + 448);
    v34 = v15 - v20[80];
    v40 = v16 - v20[81];
    v21 = v17 - v20[82];
    v37 = v16 - *(float *)(v41 + 324);
    v42 = *(float *)(v41 + 456);
    v22 = v17 - v11[82];
    v33 = v21;
    v23 = (float)((float)((float)((float)(v20[113] * v21) - (float)(v40 * v20[114])) + v20[108])
                - (float)((float)((float)(v36 * v22) - (float)(v37 * v42)) + v11[108]))
        * v6;
    v24 = (float)(v42 * v38) - (float)(v22 * v35);
    v43 = v11;
    v25 = v24 + v11[109];
    v26 = _mm_cvtsi128_si32(v19);
    v27 = (2130706432 - v26) & ((v26 ^ (v26 + 2139095040)) >> 31);
    v28 = v23
        + (float)((float)((float)((float)((float)(v20[114] * v34) - (float)(v33 * v20[112])) + v20[109]) - v25) * v9);
    v29 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v19)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v27)) * *(float *)&v27)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)&v27)) * *(float *)&v27);
    v30 = -(float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v19) * v29)) * v29);
    v31 = (float)((float)(v40 * v20[112]) - (float)(v20[113] * v34)) + v20[110];
    v32 = (float)((float)(v37 * v35) - (float)(v38 * v36)) + v43[110];
    *(float *)(a5 + 80) = v30;
    *(float *)(a5 + 76) = (float)(v28 + (float)((float)(v31 - v32) * v10)) * v30;
  }
  else
  {
    *(uint32_t *)(a5 + 76) = 0;
    *(float *)(a5 + 80) = 1.0 / *(float *)(a2[7] + 132);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::Destroy  (binary VA: 0x186f760)
// Original: hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide
// ----------------------------------------------------------------------------
void hkpVehicleRayCastWheelCollide::Destroy(hkpVehicleRayCastWheelCollide::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5628);
  if ( v1 != 0 )
  {
    if ( *((uint32_t *)self + 8) != 0 )
    {
      hkpPhantom::removePhantomOverlapListener((hkpPhantom::Self *)v1, (hkpVehicleRayCastWheelCollide::Self *)((char *)self + 28));
      v1 = *((uint32_t *)self + 4);
    }
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
  }
  hkpRejectChassisListener::Destroy((hkpVehicleRayCastWheelCollide::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::Destroy_ea186f800  (binary VA: 0x186f800)
// Original: hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide
// ----------------------------------------------------------------------------
void hkpVehicleRayCastWheelCollide::Destroy_ea186f800(hkpVehicleRayCastWheelCollide::Self *self)
{
  int v1;
  int v2;

  hkpVehicleRayCastWheelCollide::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 36;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::Construct  (binary VA: 0x186f860)
// Original: hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide
// ----------------------------------------------------------------------------
void hkpVehicleRayCastWheelCollide::Construct(hkpVehicleRayCastWheelCollide::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5628);
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = -65535;
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A4E48);
  *((uint32_t *)self + 7) = ((uint32_t)(uintptr_t)&off_20A4E6C);
  *((uint8_t *)self + 9) = 1;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleRayCastWheelCollide::clone  (binary VA: 0x186f8c0)
// Original: hkpVehicleRayCastWheelCollide::clone
// ----------------------------------------------------------------------------
int hkpVehicleRayCastWheelCollide::clone(int a1, int a2, int **a3)
{
  int address;
  int v4;
  int v5;
  hkpPhantom::Self *v6;
  volatile int32_t *v7;
  int v8;
  int32_t v9; // kr00_4
  int v11;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         36);
  hkpVehicleRayCastWheelCollide::Construct((hkpVehicleRayCastWheelCollide::Self *)v4);
  v5 = **a3;
  *(uint32_t *)(v4 + 16) = v5;
  v6 = (hkpPhantom::Self *)v5;
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    v7 = (volatile int32_t *)(v5 + 4);
    v11 = v5;
    do
    {
      v9 = *(uint32_t *)(v11 + 4);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
    }
    while ( v9 != __sync_val_compare_and_swap(v7, v9, v8 | (uint16_t)(v9 + 1)) );
    v6 = *(hkpPhantom::Self **)(v4 + 16);
  }
  hkpPhantom::removePhantomOverlapListener(v6, (hkpPhantomOverlapListener::Self *)(a1 + 28));
  hkpPhantom::addPhantomOverlapListener(*(hkpPhantom::Self **)(v4 + 16), (hkpPhantomOverlapListener::Self *)(v4 + 28));
  *(uint32_t *)(v4 + 32) = a2 + 16;
  *(uint32_t *)(v4 + 12) = *(uint32_t *)(a1 + 12);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultBrake::calcBreakingInfo  (binary VA: 0x186f980)
// Original: hkpVehicleDefaultBrake::calcBreakingInfo
// ----------------------------------------------------------------------------
int hkpVehicleDefaultBrake::calcBreakingInfo(int a1, float a2, int a3, int a4, int a5)
{
  float v5; // xmm2_4
  int v6;
  char v7;
  float *v8;
  char v9; // di
  float *v10;
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int result;
  bool v15;
  char v16;

  v5 = *(float *)(a4 + 4);
  if ( *(char *)(*(uint32_t *)(a3 + 28) + 32) <= 0 )
    goto LABEL_18;
  v16 = 0;
  v15 = *(uint8_t *)(a4 + 12) != 0;
  v6 = 0;
  do
  {
    *(uint8_t *)(*(uint32_t *)(a5 + 140) + v6) = v15 && *(uint8_t *)(*(uint32_t *)(a1 + 8) + 12 * v6 + 8) != 0;
    v8 = (float *)(*(uint32_t *)(a1 + 8) + 12 * v6);
    v9 = v16;
    if ( v5 > v8[1] )
      v9 = 1;
    v16 = v9;
    v10 = (float *)(*(uint32_t *)(*(uint32_t *)(a3 + 28) + 140) + 40 * v6);
    v11 = (float)((float)-(float)(*(float *)(*(uint32_t *)(a3 + 76) + 224 * v6 + 192) * *v10)
                * (float)(v10[1] * (float)(1.0 / a2)))
        * *v10;
    v12 = *v8 * v5;
    if ( fabs(v11) > v12 )
    {
      if ( v11 <= 0.0 )
        v12 = -v12;
      v11 = v12;
    }
    *(float *)(*(uint32_t *)a5 + 4 * v6++) = v11;
    v7 = *(uint8_t *)(*(uint32_t *)(a3 + 28) + 32);
  }
  while ( v7 > v6 );
  if ( v16 != 0 )
  {
    v13 = *(float *)(a5 + 184);
    if ( v13 < *(float *)(a1 + 20) )
    {
      *(float *)(a5 + 184) = a2 + v13;
      return a5;
    }
    else
    {
      for ( result = 0; v7 > result; ++result )
      {
        if ( v5 > *(float *)(*(uint32_t *)(a1 + 8) + 12 * result + 4) )
        {
          *(uint8_t *)(*(uint32_t *)(a5 + 140) + result) = 1;
          v7 = *(uint8_t *)(*(uint32_t *)(a3 + 28) + 32);
        }
      }
    }
  }
  else
  {
LABEL_18:
    result = a5;
    *(uint32_t *)(a5 + 184) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultBrake::Destroy  (binary VA: 0x186fb50)
// Original: hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake
// ----------------------------------------------------------------------------
void hkpVehicleDefaultBrake::Destroy(hkpVehicleDefaultBrake::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5688);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      12 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultBrake::Destroy_ea186fc00  (binary VA: 0x186fc00)
// Original: hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake
// ----------------------------------------------------------------------------
void hkpVehicleDefaultBrake::Destroy_ea186fc00(hkpVehicleDefaultBrake::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5688);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      12 * v1);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpVehicleDefaultBrake::Construct  (binary VA: 0x186fc70)
// Original: hkpVehicleDefaultBrake::hkpVehicleDefaultBrake
// ----------------------------------------------------------------------------
void hkpVehicleDefaultBrake::Construct(hkpVehicleDefaultBrake::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A5688);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *((uint32_t *)self + 5) = 0;
}


