#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPhysics.h"

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::staticClass  (binary VA: 0x1748930)
// Original: hkpPhysicsSystem::staticClass
// ----------------------------------------------------------------------------
void * hkpPhysicsSystem::staticClass()
{
  return &hkpPhysicsSystemClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::hasContacts  (binary VA: 0x1763b10)
// Original: hkpPhysicsSystem::hasContacts
// ----------------------------------------------------------------------------
hkpPhysicsSystem::Self * hkpPhysicsSystem::hasContacts(hkpPhysicsSystem::Self *self)
{
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::Construct  (binary VA: 0x1763b20)
// Original: hkpPhysicsSystem::hkpPhysicsSystem
// ----------------------------------------------------------------------------
void hkpPhysicsSystem::Construct(hkpPhysicsSystem::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FFA8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  hkStringPtr::Construct((hkpPhysicsSystem::Self *)((char *)self + 56), nullptr);
  *((uint32_t *)self + 15) = 0;
  *((uint8_t *)self + 64) = 1;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::clone  (binary VA: 0x1763bc0)
// Original: hkpPhysicsSystem::clone
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::clone(int a1, int a2)
{
  int v2;
  int address;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  int v46;
  uint32_t *v47;
  uint32_t *v49;
  int savedregs;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef hkpConstraintInstance::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_i;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef hkpConstraintData::Self *_g4_t_v69;
  typedef hkpConstraintData::Self *_g4_t_v70;
  typedef hkpConstraintData::Self *_g4_t_v71;
  typedef hkpConstraintData::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
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
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef hkArrayUtil::Self *_g4_t_v103;
  typedef int _g4_t_v104;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v50)) > _g4_s0 ? (8u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v52)) > _g4_s2 ? (16u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v53)) > _g4_s3 ? (20u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v54)) > _g4_s4 ? (24u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v55)) > _g4_s5 ? (28u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v56)) > _g4_s6 ? (32u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v57)) > _g4_s7 ? (36u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v58)) > _g4_s8 ? (40u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v59)) > _g4_s9 ? (44u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v60)) > _g4_s10 ? (44u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v61)) > _g4_s11 ? (44u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v62)) > _g4_s12 ? (48u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v63)) > _g4_s13 ? (48u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_i)) > _g4_s14 ? (48u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v65)) > _g4_s15 ? (52u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v66)) > _g4_s16 ? (52u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v67)) > _g4_s17 ? (52u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v68)) > _g4_s18 ? (52u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v69)) > _g4_s19 ? (56u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v70)) > _g4_s20 ? (56u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v71)) > _g4_s21 ? (56u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v72)) > _g4_s22 ? (56u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v73)) > _g4_s23 ? (60u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v74)) > _g4_s24 ? (60u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v75)) > _g4_s25 ? (64u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v76)) > _g4_s26 ? (64u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v77)) > _g4_s27 ? (68u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v78)) > _g4_s28 ? (68u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v79)) > _g4_s29 ? (68u + sizeof(_g4_t_v79)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v80)) > _g4_s30 ? (68u + sizeof(_g4_t_v80)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v81)) > _g4_s31 ? (68u + sizeof(_g4_t_v81)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v82)) > _g4_s32 ? (68u + sizeof(_g4_t_v82)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v83)) > _g4_s33 ? (72u + sizeof(_g4_t_v83)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v84)) > _g4_s34 ? (76u + sizeof(_g4_t_v84)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v85)) > _g4_s35 ? (80u + sizeof(_g4_t_v85)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v86)) > _g4_s36 ? (84u + sizeof(_g4_t_v86)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v87)) > _g4_s37 ? (88u + sizeof(_g4_t_v87)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v88)) > _g4_s38 ? (92u + sizeof(_g4_t_v88)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v89)) > _g4_s39 ? (96u + sizeof(_g4_t_v89)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v90)) > _g4_s40 ? (100u + sizeof(_g4_t_v90)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v91)) > _g4_s41 ? (104u + sizeof(_g4_t_v91)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v92)) > _g4_s42 ? (108u + sizeof(_g4_t_v92)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v93)) > _g4_s43 ? (112u + sizeof(_g4_t_v93)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v94)) > _g4_s44 ? (116u + sizeof(_g4_t_v94)) : _g4_s44,
    _g4_s46 = (120u + sizeof(_g4_t_v95)) > _g4_s45 ? (120u + sizeof(_g4_t_v95)) : _g4_s45,
    _g4_s47 = (124u + sizeof(_g4_t_v96)) > _g4_s46 ? (124u + sizeof(_g4_t_v96)) : _g4_s46,
    _g4_s48 = (128u + sizeof(_g4_t_v97)) > _g4_s47 ? (128u + sizeof(_g4_t_v97)) : _g4_s47,
    _g4_s49 = (132u + sizeof(_g4_t_v98)) > _g4_s48 ? (132u + sizeof(_g4_t_v98)) : _g4_s48,
    _g4_s50 = (136u + sizeof(_g4_t_v99)) > _g4_s49 ? (136u + sizeof(_g4_t_v99)) : _g4_s49,
    _g4_s51 = (140u + sizeof(_g4_t_v100)) > _g4_s50 ? (140u + sizeof(_g4_t_v100)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v101)) > _g4_s51 ? (144u + sizeof(_g4_t_v101)) : _g4_s51,
    _g4_s53 = (148u + sizeof(_g4_t_v102)) > _g4_s52 ? (148u + sizeof(_g4_t_v102)) : _g4_s52,
    _g4_s54 = (152u + sizeof(_g4_t_v103)) > _g4_s53 ? (152u + sizeof(_g4_t_v103)) : _g4_s53,
    _g4_s55 = (164u + sizeof(_g4_t_v104)) > _g4_s54 ? (164u + sizeof(_g4_t_v104)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 68u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 68u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 68u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 68u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 72u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 76u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 96u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 100u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 104u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 108u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 112u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 116u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 120u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 124u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 128u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 132u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 136u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 140u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 144u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 148u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 152u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 164u);

  v103 = (hkArrayUtil::Self *)&a1;
  v2 = a1;
  v73 = a1;
  v65 = a2;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v76 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, hkpConstraintInstance::Self *, int, int, int, hkpConstraintData::Self *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          68,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v62,
          v65,
          v69,
          v73,
          v75,
          v77,
          v83,
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
          v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
  hkpPhysicsSystem::Construct((hkpPhysicsSystem::Self *)v76);
  hkStringPtr::opAssign((hkStringPtr::Self *)(v76 + 56), (const hkStringPtr::Self *)(v2 + 56));
  *(uint32_t *)(v76 + 60) = *(uint32_t *)(v2 + 60);
  *(uint8_t *)(v76 + 64) = *(uint8_t *)(v2 + 64);
  v4 = *(uint32_t *)(v2 + 12);
  v5 = *(uint32_t *)(v76 + 16) & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    savedregs = 4;
    v103 = (hkArrayUtil::Self *)&v84;
    if ( v6 < v4 )
      v6 = v4;
    hkArrayUtil::reserve(
      v103,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v76 + 8),
      v6,
      savedregs);
  }
  v7 = v74;
  *(uint32_t *)(v76 + 12) = v4;
  v8 = v74[12];
  v9 = *(uint32_t *)(v76 + 52) & 0x3FFFFFFF;
  if ( v8 > v9 )
  {
    v10 = 2 * v9;
    savedregs = 4;
    v103 = (hkArrayUtil::Self *)&v84;
    if ( v10 < v8 )
      v10 = v8;
    hkArrayUtil::reserve(
      v103,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v76 + 44),
      v10,
      savedregs);
    v7 = v74;
  }
  *(uint32_t *)(v76 + 48) = v8;
  v11 = v7[6];
  v12 = *(uint32_t *)(v76 + 28) & 0x3FFFFFFF;
  if ( v11 > v12 )
  {
    v13 = 2 * v12;
    savedregs = 4;
    v103 = (hkArrayUtil::Self *)&v84;
    if ( v13 < v11 )
      v13 = v11;
    hkArrayUtil::reserve(
      v103,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v76 + 20),
      v13,
      savedregs);
    v7 = v74;
  }
  *(uint32_t *)(v76 + 24) = v11;
  v14 = v7[9];
  v15 = *(uint32_t *)(v76 + 40) & 0x3FFFFFFF;
  if ( v14 > v15 )
  {
    v16 = 2 * v15;
    savedregs = 4;
    v103 = (hkArrayUtil::Self *)&v84;
    if ( v16 < v14 )
      v16 = v14;
    hkArrayUtil::reserve(
      v103,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v76 + 32),
      v16,
      savedregs);
  }
  *(uint32_t *)(v76 + 36) = v14;
  v17 = v74;
  v18 = 0;
  if ( (int)v74[3] > 0 )
  {
    do
    {
      v78 = (uint32_t *)(*(uint32_t *)(v76 + 8) + 4 * v18);
      v19 = *(uint32_t *)(v74[2] + 4 * v18++);
      *v78 = G4_VCALL<int>(v19, 36);
    }
    while ( v74[3] > v18 );
    v17 = v74;
  }
  v20 = 0;
  if ( (int)v17[12] > 0 )
  {
    v21 = v17;
    do
    {
      v79 = (uint32_t *)(*(uint32_t *)(v76 + 44) + 4 * v20);
      v22 = *(uint32_t *)(v21[11] + 4 * v20++);
      *v79 = G4_VCALL<int>(v22, 56);
    }
    while ( v21[12] > v20 );
  }
  v80 = 0;
  if ( (int)v74[6] > 0 )
  {
    while ( 1 )
    {
      v60 = 4 * v80;
      v23 = v74[3];
      v70 = *(hkpConstraintData::Self **)(v74[5] + 4 * v80);
      v24 = *((uint32_t *)v70 + 5);
      if ( v23 <= 0 )
        goto LABEL_29;
      v25 = (uint32_t *)v74[2];
      if ( v24 != *v25 )
        break;
      v27 = 0;
LABEL_30:
      v63 = *(uint32_t *)(*(uint32_t *)(v76 + 8) + v27);
      hkpConstraintInstance::isConstrainedToWorld((hkpConstraintInstance::Self *)((char *)&v83 + 3), (int)(uintptr_t)(v70));
      v28 = 0;
      if ( HIBYTE(v83) != 0 )
        goto LABEL_38;
      v29 = *((uint32_t *)v70 + 6);
      v30 = v74[3];
      if ( v30 > 0 )
      {
        v31 = (uint32_t *)v74[2];
        if ( v29 == *v31 )
        {
          v33 = 0;
          goto LABEL_37;
        }
        v32 = 0;
        while ( ++v32 != v30 )
        {
          v33 = 4 * v32;
          if ( v29 == v31[v32] )
            goto LABEL_37;
        }
      }
      v33 = -4;
LABEL_37:
      v28 = *(uint32_t *)(*(uint32_t *)(v76 + 8) + v33);
LABEL_38:
      switch ( v66 )
      {
        case 0:
          v49 = (uint32_t *)(*(uint32_t *)(v76 + 20) + v60);
          v104 = 0;
LABEL_78:
          *v49 = hkpConstraintInstance::clone(v70, v63, v28, v104);
          break;
        case 1:
          v49 = (uint32_t *)(*(uint32_t *)(v76 + 20) + v60);
          v104 = 1;
          goto LABEL_78;
        case 2:
          v49 = (uint32_t *)(*(uint32_t *)(v76 + 20) + v60);
          v104 = 2;
          goto LABEL_78;
        default:
          break;
      }
      if ( v74[6] <= ++v80 )
        goto LABEL_42;
    }
    v26 = 0;
    while ( ++v26 != v23 )
    {
      v27 = 4 * v26;
      if ( v24 == v25[v26] )
        goto LABEL_30;
    }
LABEL_29:
    v27 = -4;
    goto LABEL_30;
  }
LABEL_42:
  for ( i = 0; v74[9] > i; ++i )
  {
    v34 = *(uint32_t *)(v74[8] + 4 * i);
    v61 = v34;
    if ( v34 != 0 )
    {
      v85 = 0;
      v86 = 0;
      v87 = 0x80000000;
      G4_VCALL<void>(v34, 24, &v85);
      v89 = 0;
      v90 = 0;
      v91 = 0x80000000;
      v67 = v86;
      if ( v86 > 0 )
      {
        v35 = v86;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v84,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v89,
          v86,
          4);
        v90 = v35;
        v81 = 0;
        while ( 1 )
        {
          v71 = (hkpConstraintData::Self *)(4 * v81);
          v36 = *(uint32_t *)(v85 + 4 * v81);
          v37 = v74[3];
          if ( v37 > 0 )
          {
            v38 = (uint32_t *)v74[2];
            if ( v36 == *v38 )
            {
              v40 = 0;
              goto LABEL_52;
            }
            v39 = 0;
            while ( ++v39 != v37 )
            {
              v40 = 4 * v39;
              if ( v36 == v38[v39] )
                goto LABEL_52;
            }
          }
          v40 = -4;
LABEL_52:
          ++v81;
          *(uint32_t *)((char *)v71 + v89) = *(uint32_t *)(*(uint32_t *)(v76 + 8) + v40);
          if ( v81 == v67 )
            goto LABEL_53;
        }
      }
      v90 = v86;
LABEL_53:
      v93 = 0;
      v94 = 0;
      v95 = 0x80000000;
      G4_VCALL<void>(v61, 28, &v93);
      v97 = 0;
      v98 = 0;
      v99 = 0x80000000;
      v68 = v94;
      if ( v94 > 0 )
      {
        v41 = v94;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v84,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v97,
          v94,
          4);
        v98 = v41;
        v82 = 0;
        while ( 1 )
        {
          v72 = (hkpConstraintData::Self *)(4 * v82);
          v42 = *(uint32_t *)(v93 + 4 * v82);
          v43 = v74[12];
          if ( v43 > 0 )
          {
            v44 = (uint32_t *)v74[11];
            if ( v42 == *v44 )
            {
              v46 = 0;
              goto LABEL_61;
            }
            v45 = 0;
            while ( ++v45 != v43 )
            {
              v46 = 4 * v45;
              if ( v42 == v44[v45] )
                goto LABEL_61;
            }
          }
          v46 = -4;
LABEL_61:
          ++v82;
          *(uint32_t *)((char *)v72 + v97) = *(uint32_t *)(*(uint32_t *)(v76 + 44) + v46);
          if ( v82 == v68 )
            goto LABEL_62;
        }
      }
      v98 = v94;
LABEL_62:
      v47 = (uint32_t *)(*(uint32_t *)(v76 + 32) + 4 * i);
      *v47 = G4_VCALL<int>(v61, 36, &v89, &v97);
      v98 = 0;
      if ( v99 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v97,
          4 * v99);
      v97 = 0;
      v99 = 0x80000000;
      v94 = 0;
      if ( v95 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v93,
          4 * v95);
      v93 = 0;
      v95 = 0x80000000;
      v90 = 0;
      if ( v91 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v89,
          4 * v91);
      v89 = 0;
      v91 = 0x80000000;
      v86 = 0;
      if ( v87 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v85,
          4 * v87);
    }
    else
    {
      *(uint32_t *)(*(uint32_t *)(v76 + 32) + 4 * i) = 0;
    }
  }
  return v76;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::removeAll  (binary VA: 0x17642f0)
// Original: hkpPhysicsSystem::removeAll
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::removeAll(hkpPhysicsSystem::Self *self)
{
  int v1;
  int result;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int v17;
  int v18;
  int32_t v19; // kr08_4
  int32_t v20;
  int32_t v21; // ett
  int v22;
  int v23;
  int v24;
  int v25;
  int32_t v26; // kr0C_4
  int32_t v27;
  int32_t v28; // ett
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;

  v1 = 0;
  if ( *((int *)self + 3) > 0 )
  {
    v29 = *((uint32_t *)self + 3);
    do
    {
      result = *((uint32_t *)self + 2);
      v3 = *(uint32_t *)(result + 4 * v1);
      if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
      {
        v30 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6);
        }
        while ( v7 != result );
        v1 = v30;
        if ( (uint16_t)v6 == 0 )
          result = G4_VCALL<int>(v3, 16);
      }
      ++v1;
    }
    while ( v1 != v29 );
  }
  v8 = *((uint32_t *)self + 12);
  v9 = 0;
  *((uint32_t *)self + 3) = 0;
  if ( v8 > 0 )
  {
    do
    {
      result = *((uint32_t *)self + 11);
      v10 = *(uint32_t *)(result + 4 * v9);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v31 = v9;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13);
        }
        while ( v14 != result );
        v9 = v31;
        if ( (uint16_t)v13 == 0 )
          result = G4_VCALL<int>(v10, 16);
      }
      ++v9;
    }
    while ( v9 != v8 );
  }
  v15 = *((uint32_t *)self + 6);
  v16 = 0;
  *((uint32_t *)self + 12) = 0;
  if ( v15 > 0 )
  {
    do
    {
      result = *((uint32_t *)self + 5);
      v17 = *(uint32_t *)(result + 4 * v16);
      if ( v17 != 0 && *(uint16_t *)(v17 + 6) != 0 )
      {
        v32 = v16;
        do
        {
          v19 = *(uint32_t *)(v17 + 4);
          HIWORD(v18) = HIWORD(v19);
          LOWORD(v18) = 0;
          v20 = v18 | (uint16_t)(v19 - 1);
          v21 = v19;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v17 + 4), v21, v20);
        }
        while ( v21 != result );
        v16 = v32;
        if ( (uint16_t)v20 == 0 )
          result = G4_VCALL<int>(v17, 16);
      }
      ++v16;
    }
    while ( v16 != v15 );
  }
  v22 = *((uint32_t *)self + 9);
  v23 = 0;
  *((uint32_t *)self + 6) = 0;
  if ( v22 > 0 )
  {
    do
    {
      result = *((uint32_t *)self + 8);
      v24 = *(uint32_t *)(result + 4 * v23);
      if ( v24 != 0 && *(uint16_t *)(v24 + 6) != 0 )
      {
        v33 = v23;
        do
        {
          v26 = *(uint32_t *)(v24 + 4);
          HIWORD(v25) = HIWORD(v26);
          LOWORD(v25) = 0;
          v27 = v25 | (uint16_t)(v26 - 1);
          v28 = v26;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v24 + 4), v28, v27);
        }
        while ( v28 != result );
        v23 = v33;
        if ( (uint16_t)v27 == 0 )
          result = G4_VCALL<int>(v24, 16);
      }
      ++v23;
    }
    while ( v23 != v22 );
  }
  *((uint32_t *)self + 9) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::Destroy  (binary VA: 0x17644d0)
// Original: hkpPhysicsSystem::~hkpPhysicsSystem
// ----------------------------------------------------------------------------
void hkpPhysicsSystem::Destroy(hkpPhysicsSystem::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FFA8);
  hkpPhysicsSystem::removeAll(self);
  hkStringPtr::Destroy((hkpPhysicsSystem::Self *)((char *)self + 56));
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v1);
  v2 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v2);
  v3 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v3);
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v4);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::Destroy_ea1764600  (binary VA: 0x1764600)
// Original: hkpPhysicsSystem::~hkpPhysicsSystem
// ----------------------------------------------------------------------------
void hkpPhysicsSystem::Destroy_ea1764600(hkpPhysicsSystem::Self *self)
{
  int v1;
  int v2;

  hkpPhysicsSystem::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 68;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::copy  (binary VA: 0x1764660)
// Original: hkpPhysicsSystem::copy
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::copy(hkpPhysicsSystem::Self *self, const hkpPhysicsSystem::Self *a2)
{
  int v2;
  const hkpPhysicsSystem::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  const hkpPhysicsSystem::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  const hkpPhysicsSystem::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  const hkpPhysicsSystem::Self *v18;
  int v19;
  unsigned int v20;
  int result;
  int v22;
  int v23;
  int i;
  int k;
  int m;
  int j;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef uint32_t _g4_t_v45[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v34)) > _g4_s6 ? (20u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v35)) > _g4_s7 ? (20u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v36)) > _g4_s8 ? (20u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v37)) > _g4_s9 ? (24u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v38)) > _g4_s10 ? (24u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v39)) > _g4_s11 ? (24u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v40)) > _g4_s12 ? (24u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v41)) > _g4_s13 ? (28u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v42)) > _g4_s14 ? (28u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v43)) > _g4_s15 ? (28u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v44)) > _g4_s16 ? (28u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v45)) > _g4_s17 ? (32u + sizeof(_g4_t_v45)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);

  v2 = *((uint32_t *)a2 + 3);
  if ( (*((uint32_t *)self + 4) & 0x3FFFFFFF) < v2 )
  {
    if ( *((int *)self + 4) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 2),
        4 * *((uint32_t *)self + 4));
      v2 = *((uint32_t *)a2 + 3);
    }
    v45[0] = 4 * v2;
    v22 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v45);
    v23 = v45[0];
    *((uint32_t *)self + 2) = v22;
    v41 = v22;
    v3 = a2;
    *((uint32_t *)self + 4) = v23 / 4;
    v2 = *((uint32_t *)a2 + 3);
  }
  else
  {
    v41 = *((uint32_t *)self + 2);
    v3 = a2;
  }
  *((uint32_t *)self + 3) = v2;
  v37 = *((uint32_t *)v3 + 2);
  if ( v2 > 0 )
  {
    if ( (v37 >= v41 + 16 || v41 >= v37 + 16) && (unsigned int)v2 > 0xB )
    {
      v4 = 0;
      v33 = 0;
      v29 = 4 * ((unsigned int)v2 >> 2);
      do
      {
        ++v33;
        *(__m128i *)(v41 + v4) = *(__m128i *)(v37 + v4);
        v4 += 16;
      }
      while ( (unsigned int)v2 >> 2 > v33 );
      if ( v2 != v29 )
      {
        *(uint32_t *)(v41 + 16 * ((unsigned int)v2 >> 2)) = *(uint32_t *)(v37 + 16 * ((unsigned int)v2 >> 2));
        if ( v2 > v29 + 1 )
        {
          *(uint32_t *)(v41 + 4 * (v29 + 1)) = *(uint32_t *)(v37 + 4 * (v29 + 1));
          if ( v2 > v29 + 2 )
            *(uint32_t *)(v41 + 4 * (v29 + 2)) = *(uint32_t *)(v37 + 4 * (v29 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v2; ++i )
        *(uint32_t *)(v41 + 4 * i) = *(uint32_t *)(v37 + 4 * i);
    }
  }
  v5 = *((uint32_t *)a2 + 12);
  if ( (*((uint32_t *)self + 13) & 0x3FFFFFFF) >= v5 )
  {
    v42 = *((uint32_t *)self + 11);
    v8 = a2;
  }
  else
  {
    if ( *((int *)self + 13) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 11),
        4 * *((uint32_t *)self + 13));
      v5 = *((uint32_t *)a2 + 12);
    }
    v45[0] = 4 * v5;
    v6 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v45);
    v7 = v45[0];
    *((uint32_t *)self + 11) = v6;
    v42 = v6;
    v8 = a2;
    *((uint32_t *)self + 13) = v7 / 4;
    v5 = *((uint32_t *)a2 + 12);
  }
  *((uint32_t *)self + 12) = v5;
  v38 = *((uint32_t *)v8 + 11);
  if ( v5 > 0 )
  {
    if ( (v38 >= v42 + 16 || v42 >= v38 + 16) && (unsigned int)v5 > 0xB )
    {
      v9 = 0;
      v34 = 0;
      v30 = 4 * ((unsigned int)v5 >> 2);
      do
      {
        ++v34;
        *(__m128i *)(v42 + v9) = *(__m128i *)(v38 + v9);
        v9 += 16;
      }
      while ( (unsigned int)v5 >> 2 > v34 );
      if ( v5 != v30 )
      {
        *(uint32_t *)(v42 + 16 * ((unsigned int)v5 >> 2)) = *(uint32_t *)(v38 + 16 * ((unsigned int)v5 >> 2));
        if ( v5 > v30 + 1 )
        {
          *(uint32_t *)(v42 + 4 * (v30 + 1)) = *(uint32_t *)(v38 + 4 * (v30 + 1));
          if ( v5 > v30 + 2 )
            *(uint32_t *)(v42 + 4 * (v30 + 2)) = *(uint32_t *)(v38 + 4 * (v30 + 2));
        }
      }
    }
    else
    {
      for ( j = 0; j != v5; ++j )
        *(uint32_t *)(v42 + 4 * j) = *(uint32_t *)(v38 + 4 * j);
    }
  }
  v10 = *((uint32_t *)a2 + 6);
  if ( (*((uint32_t *)self + 7) & 0x3FFFFFFF) >= v10 )
  {
    v43 = *((uint32_t *)self + 5);
    v13 = a2;
  }
  else
  {
    if ( *((int *)self + 7) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 5),
        4 * *((uint32_t *)self + 7));
      v10 = *((uint32_t *)a2 + 6);
    }
    v45[0] = 4 * v10;
    v11 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v45);
    v12 = v45[0];
    *((uint32_t *)self + 5) = v11;
    v43 = v11;
    v13 = a2;
    *((uint32_t *)self + 7) = v12 / 4;
    v10 = *((uint32_t *)a2 + 6);
  }
  *((uint32_t *)self + 6) = v10;
  v39 = *((uint32_t *)v13 + 5);
  if ( v10 > 0 )
  {
    if ( (v39 >= v43 + 16 || v43 >= v39 + 16) && (unsigned int)v10 > 0xB )
    {
      v14 = 0;
      v35 = 0;
      v31 = 4 * ((unsigned int)v10 >> 2);
      do
      {
        ++v35;
        *(__m128i *)(v43 + v14) = *(__m128i *)(v39 + v14);
        v14 += 16;
      }
      while ( (unsigned int)v10 >> 2 > v35 );
      if ( v10 != v31 )
      {
        *(uint32_t *)(v43 + 16 * ((unsigned int)v10 >> 2)) = *(uint32_t *)(v39 + 16 * ((unsigned int)v10 >> 2));
        if ( v31 + 1 < v10 )
        {
          *(uint32_t *)(v43 + 4 * (v31 + 1)) = *(uint32_t *)(v39 + 4 * (v31 + 1));
          if ( v31 + 2 < v10 )
            *(uint32_t *)(v43 + 4 * (v31 + 2)) = *(uint32_t *)(v39 + 4 * (v31 + 2));
        }
      }
    }
    else
    {
      for ( k = 0; k != v10; ++k )
        *(uint32_t *)(v43 + 4 * k) = *(uint32_t *)(v39 + 4 * k);
    }
  }
  v15 = *((uint32_t *)a2 + 9);
  if ( (*((uint32_t *)self + 10) & 0x3FFFFFFF) >= v15 )
  {
    v44 = *((uint32_t *)self + 8);
    v18 = a2;
  }
  else
  {
    if ( *((int *)self + 10) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 8),
        4 * *((uint32_t *)self + 10));
      v15 = *((uint32_t *)a2 + 9);
    }
    v45[0] = 4 * v15;
    v16 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v45);
    v17 = v45[0];
    *((uint32_t *)self + 8) = v16;
    v44 = v16;
    v18 = a2;
    *((uint32_t *)self + 10) = v17 / 4;
    v15 = *((uint32_t *)a2 + 9);
  }
  *((uint32_t *)self + 9) = v15;
  v40 = *((uint32_t *)v18 + 8);
  if ( v15 > 0 )
  {
    if ( (v40 >= v44 + 16 || v44 >= v40 + 16) && (unsigned int)v15 > 0xB )
    {
      v28 = v15;
      v19 = 0;
      v36 = 0;
      v32 = 4 * ((unsigned int)v15 >> 2);
      v20 = (unsigned int)v15 >> 2;
      do
      {
        ++v36;
        *(__m128i *)(v44 + v19) = *(__m128i *)(v40 + v19);
        v19 += 16;
      }
      while ( v36 < v20 );
      if ( v28 != v32 )
      {
        *(uint32_t *)(v44 + 4 * v32) = *(uint32_t *)(v40 + 4 * v32);
        if ( v28 > v32 + 1 )
        {
          *(uint32_t *)(v44 + 4 * (v32 + 1)) = *(uint32_t *)(v40 + 4 * (v32 + 1));
          if ( v32 + 2 < v28 )
            *(uint32_t *)(v44 + 4 * (v32 + 2)) = *(uint32_t *)(v40 + 4 * (v32 + 2));
        }
      }
    }
    else
    {
      for ( m = 0; m != v15; ++m )
        *(uint32_t *)(v44 + 4 * m) = *(uint32_t *)(v40 + 4 * m);
    }
  }
  hkStringPtr::opAssign((hkpPhysicsSystem::Self *)((char *)self + 56), (const hkpPhysicsSystem::Self *)((char *)a2 + 56));
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  result = *((uint8_t *)a2 + 64);
  *((uint8_t *)self + 64) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::addRigidBody  (binary VA: 0x1764cc0)
// Original: hkpPhysicsSystem::addRigidBody
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::addRigidBody(hkpPhysicsSystem::Self *self, hkpRigidBody::Self *a2)
{
  int v2;
  int result;
  int v4;
  int32_t v5; // kr00_4
  int v6;

  if ( a2 != nullptr )
  {
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v5 = *((uint32_t *)a2 + 1);
        HIWORD(v4) = HIWORD(v5);
        LOWORD(v4) = 0;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
      v2 = *((uint32_t *)self + 3);
      if ( v2 != (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
        goto LABEL_4;
    }
    else
    {
      v2 = *((uint32_t *)self + 3);
      if ( v2 != (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
      {
LABEL_4:
        result = *((uint32_t *)self + 2);
        *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
        ++*((uint32_t *)self + 3);
        return result;
      }
    }
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhysicsSystem::Self *)((char *)self + 8),
      4,
      v6);
    v2 = *((uint32_t *)self + 3);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::addPhantom  (binary VA: 0x1764d60)
// Original: hkpPhysicsSystem::addPhantom
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::addPhantom(hkpPhysicsSystem::Self *self, hkpPhantom::Self *a2)
{
  int v2;
  int result;
  int v4;
  int32_t v5; // kr00_4
  int v6;

  if ( a2 != nullptr )
  {
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v5 = *((uint32_t *)a2 + 1);
        HIWORD(v4) = HIWORD(v5);
        LOWORD(v4) = 0;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
      v2 = *((uint32_t *)self + 12);
      if ( v2 != (*((uint32_t *)self + 13) & 0x3FFFFFFF) )
        goto LABEL_4;
    }
    else
    {
      v2 = *((uint32_t *)self + 12);
      if ( v2 != (*((uint32_t *)self + 13) & 0x3FFFFFFF) )
      {
LABEL_4:
        result = *((uint32_t *)self + 11);
        *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
        ++*((uint32_t *)self + 12);
        return result;
      }
    }
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhysicsSystem::Self *)((char *)self + 44),
      4,
      v6);
    v2 = *((uint32_t *)self + 12);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::addConstraint  (binary VA: 0x1764e00)
// Original: hkpPhysicsSystem::addConstraint
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::addConstraint(hkpPhysicsSystem::Self *self, hkpConstraintInstance::Self *a2)
{
  int v2;
  int result;
  int v4;
  int32_t v5; // kr00_4
  int v6;

  if ( a2 != nullptr )
  {
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v5 = *((uint32_t *)a2 + 1);
        HIWORD(v4) = HIWORD(v5);
        LOWORD(v4) = 0;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
      v2 = *((uint32_t *)self + 6);
      if ( v2 != (*((uint32_t *)self + 7) & 0x3FFFFFFF) )
        goto LABEL_4;
    }
    else
    {
      v2 = *((uint32_t *)self + 6);
      if ( v2 != (*((uint32_t *)self + 7) & 0x3FFFFFFF) )
      {
LABEL_4:
        result = *((uint32_t *)self + 5);
        *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
        ++*((uint32_t *)self + 6);
        return result;
      }
    }
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhysicsSystem::Self *)((char *)self + 20),
      4,
      v6);
    v2 = *((uint32_t *)self + 6);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::addAction  (binary VA: 0x1764ea0)
// Original: hkpPhysicsSystem::addAction
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::addAction(hkpPhysicsSystem::Self *self, hkpAction::Self *a2)
{
  int v2;
  int result;
  int v4;
  int32_t v5; // kr00_4
  int v6;

  if ( a2 != nullptr )
  {
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v5 = *((uint32_t *)a2 + 1);
        HIWORD(v4) = HIWORD(v5);
        LOWORD(v4) = 0;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
      v2 = *((uint32_t *)self + 9);
      if ( v2 != (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
        goto LABEL_4;
    }
    else
    {
      v2 = *((uint32_t *)self + 9);
      if ( v2 != (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
      {
LABEL_4:
        result = *((uint32_t *)self + 8);
        *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
        ++*((uint32_t *)self + 9);
        return result;
      }
    }
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhysicsSystem::Self *)((char *)self + 32),
      4,
      v6);
    v2 = *((uint32_t *)self + 9);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::removeRigidBody  (binary VA: 0x1764f40)
// Original: hkpPhysicsSystem::removeRigidBody
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::removeRigidBody(hkpPhysicsSystem::Self *self, int a2)
{
  hkpPhysicsSystem::Self *v2;
  int result;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  v2 = self;
  result = *((uint32_t *)self + 2);
  v4 = *(uint32_t *)(result + 4 * a2);
  if ( *(uint16_t *)(v4 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
    v2 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
    result = *((uint32_t *)self + 2);
  }
  v9 = *((uint32_t *)v2 + 3) - 1;
  *((uint32_t *)v2 + 3) = v9;
  if ( a2 != v9 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::removePhantom  (binary VA: 0x1764fc0)
// Original: hkpPhysicsSystem::removePhantom
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::removePhantom(hkpPhysicsSystem::Self *self, int a2)
{
  hkpPhysicsSystem::Self *v2;
  int result;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  v2 = self;
  result = *((uint32_t *)self + 11);
  v4 = *(uint32_t *)(result + 4 * a2);
  if ( *(uint16_t *)(v4 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
    v2 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
    result = *((uint32_t *)self + 11);
  }
  v9 = *((uint32_t *)v2 + 12) - 1;
  *((uint32_t *)v2 + 12) = v9;
  if ( a2 != v9 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::removeConstraint  (binary VA: 0x1765040)
// Original: hkpPhysicsSystem::removeConstraint
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::removeConstraint(hkpPhysicsSystem::Self *self, int a2)
{
  hkpPhysicsSystem::Self *v2;
  int result;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  v2 = self;
  result = *((uint32_t *)self + 5);
  v4 = *(uint32_t *)(result + 4 * a2);
  if ( *(uint16_t *)(v4 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
    v2 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
    result = *((uint32_t *)self + 5);
  }
  v9 = *((uint32_t *)v2 + 6) - 1;
  *((uint32_t *)v2 + 6) = v9;
  if ( a2 != v9 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::removeAction  (binary VA: 0x17650c0)
// Original: hkpPhysicsSystem::removeAction
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::removeAction(hkpPhysicsSystem::Self *self, int a2)
{
  hkpPhysicsSystem::Self *v2;
  int result;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  v2 = self;
  result = *((uint32_t *)self + 8);
  v4 = *(uint32_t *)(result + 4 * a2);
  if ( *(uint16_t *)(v4 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
    v2 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
    result = *((uint32_t *)self + 8);
  }
  v9 = *((uint32_t *)v2 + 9) - 1;
  *((uint32_t *)v2 + 9) = v9;
  if ( a2 != v9 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::removeNullPhantoms  (binary VA: 0x1765140)
// Original: hkpPhysicsSystem::removeNullPhantoms
// ----------------------------------------------------------------------------
int hkpPhysicsSystem::removeNullPhantoms(hkpPhysicsSystem::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int i;
  uint32_t *v9;

  result = 4 * *((uint32_t *)self + 12);
  v2 = *((uint32_t *)self + 12) - 1;
  if ( v2 >= 0 )
  {
    do
    {
      v3 = result - 4;
      v4 = *((uint32_t *)self + 11);
      v9 = (uint32_t *)(v4 + result - 4);
      if ( *v9 == 0 )
      {
        v5 = *((uint32_t *)self + 12) - 1;
        v6 = result + v4;
        *((uint32_t *)self + 12) = v5;
        v7 = 4 * (v5 - v2);
        if ( v7 > 0 )
        {
          for ( i = 0; i < v7; i += 4 )
            v9[i / 4u] = *(uint32_t *)(v6 + i);
        }
      }
      --v2;
      result = v3;
    }
    while ( v2 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystem::transform  (binary VA: 0x17651e0)
// Original: hkpPhysicsSystem::transform
// ----------------------------------------------------------------------------
float * hkpPhysicsSystem::transform(hkpPhysicsSystem::Self *self, const hkTransformf::Self *a2)
{
  int v2;
  hkpPhysicsSystem::Self *v3;
  hkpRigidBody::Self *v4;
  int v5;
  hkpConstraintInstance::Self *v6;
  int v7;
  float *result;
  int v9;
  float *v10;
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14;
  float v15; // xmm0_4
  typedef hkpPhysicsSystem::Self *_g4_t_v16;
  typedef hkpPhysicsSystem::Self *_g4_t_v17;
  typedef hkpPhysicsSystem::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v23)) > _g4_s7 ? (28u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v25)) > _g4_s9 ? (36u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v26)) > _g4_s10 ? (40u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v27)) > _g4_s11 ? (44u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v28)) > _g4_s12 ? (48u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v29)) > _g4_s13 ? (52u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v30)) > _g4_s14 ? (56u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v31)) > _g4_s15 ? (60u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v32)) > _g4_s16 ? (64u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v33)) > _g4_s17 ? (68u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v34)) > _g4_s18 ? (72u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v35)) > _g4_s19 ? (76u + sizeof(_g4_t_v35)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);

  v2 = 0;
  v3 = self;
  if ( *((int *)self + 3) > 0 )
  {
    do
    {
      v20 = *(float *)a2;
      v21 = *((float *)a2 + 1);
      v22 = *((float *)a2 + 2);
      v23 = *((float *)a2 + 3);
      v24 = *((float *)a2 + 4);
      v25 = *((float *)a2 + 5);
      v26 = *((float *)a2 + 6);
      v27 = *((float *)a2 + 7);
      v28 = *((uint32_t *)a2 + 8);
      v29 = *((uint32_t *)a2 + 9);
      v30 = *((uint32_t *)a2 + 10);
      v31 = *((uint32_t *)a2 + 11);
      v32 = *((uint32_t *)a2 + 12);
      v33 = *((uint32_t *)a2 + 13);
      v34 = *((uint32_t *)a2 + 14);
      v35 = *((uint32_t *)a2 + 15);
      v16 = v3;
      hkTransformf::setMulEq(
        (hkTransformf::Self *)&v20,
        (const hkTransformf::Self *)(*(uint32_t *)(*((uint32_t *)v3 + 2) + 4 * v2) + 240));
      v4 = *(hkpRigidBody::Self **)(*((uint32_t *)v16 + 2) + 4 * v2++);
      hkpRigidBody::setTransform(v4, (const hkTransformf::Self *)&v20);
      v3 = v16;
    }
    while ( *((uint32_t *)v16 + 3) > v2 );
  }
  v5 = 0;
  if ( *((int *)v3 + 6) > 0 )
  {
    do
    {
      v18 = v3;
      v6 = *(hkpConstraintInstance::Self **)(*((uint32_t *)v3 + 5) + 4 * v5++);
      hkpConstraintInstance::transform(v6, a2);
      v3 = v18;
    }
    while ( *((uint32_t *)v18 + 6) > v5 );
  }
  v7 = 0;
  for ( result = &v20; *((uint32_t *)v3 + 12) > v7; v7 = v9 + 1 )
  {
    while ( 1 )
    {
      v17 = v3;
      v19 = v7;
      v10 = *(float **)(*((uint32_t *)v3 + 11) + 4 * v7);
      result = (float *)G4_VCALL<int>(v10, 32);
      v9 = v19;
      v3 = v17;
      if ( result != nullptr )
        break;
      v20 = v10[40];
      v11 = *((float *)a2 + 12);
      v21 = v10[41];
      v22 = v10[42];
      v12 = *((float *)a2 + 13);
      v23 = v10[43];
      v13 = *((float *)a2 + 14);
      v24 = v10[44];
      v25 = v10[45];
      v26 = v10[46];
      v14 = v10[47];
      v20 = v20 + v11;
      v27 = v14;
      v21 = v21 + v12;
      v24 = v11 + v24;
      v22 = v22 + v13;
      v15 = *((float *)a2 + 15);
      v23 = v23 + v15;
      v25 = v12 + v25;
      v26 = v13 + v26;
      v27 = v15 + v14;
      result = (float *)hkpAabbPhantom::setAabb((hkpAabbPhantom::Self *)v10, (const hkAabb::Self *)&v20);
      v3 = v17;
      v7 = v19 + 1;
      if ( *((uint32_t *)v17 + 12) <= v19 + 1 )
        return result;
    }
    if ( (unsigned int)(uintptr_t)(result) <= 2 )
    {
      v20 = v10[40];
      v21 = v10[41];
      v22 = v10[42];
      v23 = v10[43];
      v24 = v10[44];
      v25 = v10[45];
      v26 = v10[46];
      v27 = v10[47];
      v28 = *((uint32_t *)v10 + 48);
      v29 = *((uint32_t *)v10 + 49);
      v30 = *((uint32_t *)v10 + 50);
      v31 = *((uint32_t *)v10 + 51);
      v32 = *((uint32_t *)v10 + 52);
      v33 = *((uint32_t *)v10 + 53);
      v34 = *((uint32_t *)v10 + 54);
      v35 = *((uint32_t *)v10 + 55);
      hkTransformf::setMulEq((hkTransformf::Self *)&v20, a2);
      result = (float *)hkpShapePhantom::setTransform((hkpShapePhantom::Self *)v10, (const hkTransformf::Self *)&v20);
      v3 = v17;
      v9 = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::staticClass  (binary VA: 0x1828e50)
// Original: hkpPhysicsData::staticClass
// ----------------------------------------------------------------------------
void * hkpPhysicsData::staticClass()
{
  return &hkpPhysicsDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::staticClass  (binary VA: 0x1828fb0)
// Original: hkpPhysicsSystemWithContacts::staticClass
// ----------------------------------------------------------------------------
void * hkpPhysicsSystemWithContacts::staticClass()
{
  return &hkpPhysicsSystemWithContactsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::hasContacts  (binary VA: 0x182c320)
// Original: hkpPhysicsSystemWithContacts::hasContacts
// ----------------------------------------------------------------------------
hkpPhysicsSystemWithContacts::Self * hkpPhysicsSystemWithContacts::hasContacts(hkpPhysicsSystemWithContacts::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::clone  (binary VA: 0x182c330)
// Original: hkpPhysicsSystemWithContacts::clone
// ----------------------------------------------------------------------------
int hkpPhysicsSystemWithContacts::clone()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::Destroy  (binary VA: 0x182c340)
// Original: hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts
// ----------------------------------------------------------------------------
void hkpPhysicsSystemWithContacts::Destroy(hkpPhysicsSystemWithContacts::Self *self)
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
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1B88);
  v9 = *((uint32_t *)self + 18);
  if ( v9 > 0 )
  {
    do
    {
      v2 = *(uint32_t *)(*((uint32_t *)self + 17) + 4 * v1);
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
  v7 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 18) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      4 * v7);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  hkpPhysicsSystem::Destroy((hkpPhysicsSystem::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::Destroy_ea182c410  (binary VA: 0x182c410)
// Original: hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts
// ----------------------------------------------------------------------------
void hkpPhysicsSystemWithContacts::Destroy_ea182c410(hkpPhysicsSystemWithContacts::Self *self)
{
  int v1;
  int v2;

  hkpPhysicsSystemWithContacts::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::copy  (binary VA: 0x182c470)
// Original: hkpPhysicsSystemWithContacts::copy
// ----------------------------------------------------------------------------
unsigned int hkpPhysicsSystemWithContacts::copy(hkpPhysicsSystemWithContacts::Self *self, const hkpPhysicsSystemWithContacts::Self *a2)
{
  int v2;
  unsigned int v3;
  unsigned int result;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  hkpPhysicsSystem::copy((hkpPhysicsSystem::Self *)(self), (const hkpPhysicsSystem::Self *)(a2));
  v2 = *((uint32_t *)self + 19);
  v3 = *((uint32_t *)a2 + 18);
  if ( (v2 & 0x3FFFFFFF) < (int)v3 )
  {
    if ( v2 >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 17),
        4 * *((uint32_t *)self + 19));
      v3 = *((uint32_t *)a2 + 18);
    }
    v13 = 4 * v3;
    v7 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           &v13);
    v8 = v13;
    *((uint32_t *)self + 17) = v7;
    v12 = v7;
    *((uint32_t *)self + 19) = v8 / 4;
    v3 = *((uint32_t *)a2 + 18);
  }
  else
  {
    v12 = *((uint32_t *)self + 17);
  }
  *((uint32_t *)self + 18) = v3;
  result = *((uint32_t *)a2 + 17);
  v11 = result;
  if ( (int)v3 > 0 )
  {
    if ( (v12 >= *((uint32_t *)a2 + 17) + 16 || result >= v12 + 16) && v3 > 0xB )
    {
      v5 = 0;
      v6 = 0;
      v10 = 4 * (v3 >> 2);
      do
      {
        ++v6;
        *(__m128i *)(v12 + v5) = *(__m128i *)(result + v5);
        v5 += 16;
      }
      while ( v3 >> 2 > v6 );
      result = 4 * (v3 >> 2);
      if ( v3 != v10 )
      {
        *(uint32_t *)(v12 + 16 * (v3 >> 2)) = *(uint32_t *)(v11 + 16 * (v3 >> 2));
        if ( v10 + 1 < (int)v3 )
        {
          *(uint32_t *)(v12 + 4 * (v10 + 1)) = *(uint32_t *)(v11 + 4 * (v10 + 1));
          if ( (int)v3 > v10 + 2 )
          {
            result = v12;
            *(uint32_t *)(v12 + 4 * (v10 + 2)) = *(uint32_t *)(v11 + 4 * (v10 + 2));
          }
        }
      }
    }
    else
    {
      v9 = 0;
      result = v12;
      do
      {
        *(uint32_t *)(v12 + 4 * v9) = *(uint32_t *)(v11 + 4 * v9);
        ++v9;
      }
      while ( v9 != v3 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::addContact  (binary VA: 0x182c610)
// Original: hkpPhysicsSystemWithContacts::addContact
// ----------------------------------------------------------------------------
int hkpPhysicsSystemWithContacts::addContact(hkpPhysicsSystemWithContacts::Self *self, hkpSerializedAgentNnEntry::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4
  int v4;
  int result;
  int v6;

  if ( a2 != nullptr )
  {
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
    v4 = *((uint32_t *)self + 18);
    if ( v4 == (*((uint32_t *)self + 19) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpPhysicsSystemWithContacts::Self *)((char *)self + 68),
        4,
        v6);
      v4 = *((uint32_t *)self + 18);
    }
    result = *((uint32_t *)self + 17);
    *(uint32_t *)(result + 4 * v4) = (uint32_t)(uintptr_t)(a2);
    ++*((uint32_t *)self + 18);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsSystemWithContacts::removeContact  (binary VA: 0x182c6a0)
// Original: hkpPhysicsSystemWithContacts::removeContact
// ----------------------------------------------------------------------------
int hkpPhysicsSystemWithContacts::removeContact(hkpPhysicsSystemWithContacts::Self *self, int a2)
{
  hkpPhysicsSystemWithContacts::Self *v2;
  int result;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  v2 = self;
  result = *((uint32_t *)self + 17);
  v4 = *(uint32_t *)(result + 4 * a2);
  if ( *(uint16_t *)(v4 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
    v2 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
    result = *((uint32_t *)self + 17);
  }
  v9 = *((uint32_t *)v2 + 18) - 1;
  *((uint32_t *)v2 + 18) = v9;
  if ( a2 != v9 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::getType  (binary VA: 0x182c920)
// Original: hkpPhysicsContext::getType
// ----------------------------------------------------------------------------
const char * hkpPhysicsContext::getType()
{
  return "Physics 2012";
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::actionAddedCallback  (binary VA: 0x182c9b0)
// Original: hkpPhysicsContext::actionAddedCallback
// ----------------------------------------------------------------------------
hkVisualDebugger::Self * hkpPhysicsContext::actionAddedCallback(hkpPhysicsContext::Self *self, hkpAction::Self *a2)
{
  hkVisualDebugger::Self *result;

  result = *((hkVisualDebugger::Self **)self + 3);
  if ( result != nullptr )
    return (hkVisualDebugger::Self *)hkVisualDebugger::addTrackedObject(
                                 result,
                                 a2,
                                 (const hkClass::Self *)&hkpActionClass,
                                 "Actions",
                                 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::entityAddedCallback  (binary VA: 0x182ca10)
// Original: hkpPhysicsContext::entityAddedCallback
// ----------------------------------------------------------------------------
hkVisualDebugger::Self * hkpPhysicsContext::entityAddedCallback(hkpPhysicsContext::Self *self, hkpEntity::Self *a2)
{
  hkVisualDebugger::Self *result;

  result = *((hkVisualDebugger::Self **)self + 3);
  if ( result != nullptr )
    return (hkVisualDebugger::Self *)hkVisualDebugger::addTrackedObject(
                                 result,
                                 a2,
                                 (const hkClass::Self *)&hkpEntityClass,
                                 "Entities",
                                 (unsigned int)(uintptr_t)(a2) + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::phantomAddedCallback  (binary VA: 0x182ca70)
// Original: hkpPhysicsContext::phantomAddedCallback
// ----------------------------------------------------------------------------
hkVisualDebugger::Self * hkpPhysicsContext::phantomAddedCallback(hkpPhysicsContext::Self *self, hkpPhantom::Self *a2)
{
  hkVisualDebugger::Self *result;

  result = *((hkVisualDebugger::Self **)self + 3);
  if ( result != nullptr )
    return (hkVisualDebugger::Self *)hkVisualDebugger::addTrackedObject(
                                 result,
                                 a2,
                                 (const hkClass::Self *)&hkpPhantomClass,
                                 "Phantoms",
                                 (unsigned int)(uintptr_t)(a2) + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::entityRemovedCallback  (binary VA: 0x182cad0)
// Original: hkpPhysicsContext::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpPhysicsContext::entityRemovedCallback(hkpPhysicsContext::Self *self, hkpEntity::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 3);
  if ( result != 0 )
    return hkVisualDebugger::removeTrackedObject(*((hkVisualDebugger::Self **)self + 3), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::phantomRemovedCallback  (binary VA: 0x182cb20)
// Original: hkpPhysicsContext::phantomRemovedCallback
// ----------------------------------------------------------------------------
int hkpPhysicsContext::phantomRemovedCallback(hkpPhysicsContext::Self *self, hkpPhantom::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 3);
  if ( result != 0 )
    return hkVisualDebugger::removeTrackedObject(*((hkVisualDebugger::Self **)self + 3), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::actionRemovedCallback  (binary VA: 0x182cb70)
// Original: hkpPhysicsContext::actionRemovedCallback
// ----------------------------------------------------------------------------
int hkpPhysicsContext::actionRemovedCallback(hkpPhysicsContext::Self *self, hkpAction::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 3);
  if ( result != 0 )
    return hkVisualDebugger::removeTrackedObject(*((hkVisualDebugger::Self **)self + 3), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::constraintRemovedCallback  (binary VA: 0x182cbc0)
// Original: hkpPhysicsContext::constraintRemovedCallback
// ----------------------------------------------------------------------------
void hkpPhysicsContext::constraintRemovedCallback(hkVisualDebugger::Self **self, hkpConstraintInstance::Self *a2)
{
  int v2;

  if ( *(self + 3) != nullptr )
  {
    v2 = *((uint32_t *)a2 + 3);
    if ( v2 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v2 + 20))(*((uint32_t *)a2 + 3)) != 11 )
      hkVisualDebugger::removeTrackedObject(*(self + 3), a2);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::constraintAddedCallback  (binary VA: 0x182cc20)
// Original: hkpPhysicsContext::constraintAddedCallback
// ----------------------------------------------------------------------------
int hkpPhysicsContext::constraintAddedCallback(hkpPhysicsContext::Self *self, hkpConstraintInstance::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 3);
  if ( result != 0 )
  {
    result = *((uint32_t *)a2 + 3);
    if ( result != 0 )
    {
      result = (*(int (**)(uint32_t))(*(uint32_t *)result + 20))(*((uint32_t *)a2 + 3));
      if ( result != 11 )
        return hkVisualDebugger::addTrackedObject(
                 *((hkVisualDebugger::Self **)self + 3),
                 a2,
                 (const hkClass::Self *)&hkpConstraintInstanceClass,
                 "Constraints",
                 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::registerAllPhysicsProcesses  (binary VA: 0x182cca0)
// Original: hkpPhysicsContext::registerAllPhysicsProcesses
// ----------------------------------------------------------------------------
int hkpPhysicsContext::registerAllPhysicsProcesses()
{
  hkpBroadphaseViewer::Self *v1;
  hkpMidphaseViewer::Self *v2;
  hkpRigidBodyCentreOfMassViewer::Self *v3;
  hkpRigidBodyLocalFrameViewer::Self *v4;
  hkpConstraintViewer::Self *v5;
  hkpConvexRadiusViewer::Self *v6;
  hkpActiveContactPointViewer::Self *v7;
  hkpInactiveContactPointViewer::Self *v8;
  hkpToiContactPointViewer::Self *v9;
  hkpToiCountViewer::Self *v10;
  hkpRigidBodyInertiaViewer::Self *v11;
  hkpMousePickingViewer::Self *v12;
  hkpPhantomDisplayViewer::Self *v13;
  hkpShapeDisplayViewer::Self *v14;
  hkpSimulationIslandViewer::Self *v15;
  hkpSweptTransformDisplayViewer::Self *v16;
  hkpVehicleViewer::Self *v17;
  hkpWorldSnapshotViewer::Self *v18;
  hkpWeldingViewer::Self *v19;
  hkpInconsistentWindingViewer::Self *v20;
  hkpSingleBodyConstraintViewer::Self *v21;

  hkpBroadphaseViewer::registerViewer(v1);
  hkpMidphaseViewer::registerViewer(v2);
  hkpRigidBodyCentreOfMassViewer::registerViewer(v3);
  hkpRigidBodyLocalFrameViewer::registerViewer(v4);
  hkpConstraintViewer::registerViewer(v5);
  hkpConvexRadiusViewer::registerViewer(v6);
  hkpActiveContactPointViewer::registerViewer(v7);
  hkpInactiveContactPointViewer::registerViewer(v8);
  hkpToiContactPointViewer::registerViewer(v9);
  hkpToiCountViewer::registerViewer(v10);
  hkpRigidBodyInertiaViewer::registerViewer(v11);
  hkpMousePickingViewer::registerViewer(v12);
  hkpPhantomDisplayViewer::registerViewer(v13);
  hkpShapeDisplayViewer::registerViewer(v14);
  hkpSimulationIslandViewer::registerViewer(v15);
  hkpSweptTransformDisplayViewer::registerViewer(v16);
  hkpVehicleViewer::registerViewer(v17);
  hkpWorldSnapshotViewer::registerViewer(v18);
  hkpWeldingViewer::registerViewer(v19);
  hkpInconsistentWindingViewer::registerViewer(v20);
  return hkpSingleBodyConstraintViewer::registerViewer(v21);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::Construct  (binary VA: 0x182cd30)
// Original: hkpPhysicsContext::hkpPhysicsContext
// ----------------------------------------------------------------------------
void hkpPhysicsContext::Construct(hkpPhysicsContext::Self *self)
{
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 28);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)((char *)self + 64);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1C48);
  *((uint32_t *)self + 6) = -2147483642;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A1C90);
  *((uint32_t *)self + 22) = ((uint32_t)(uintptr_t)&off_20A1CA8);
  *((uint32_t *)self + 23) = ((uint32_t)(uintptr_t)&off_20A1CC0);
  *((uint32_t *)self + 24) = ((uint32_t)(uintptr_t)&off_20A1CE4);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = -2147483642;
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_20A1D04);
  *((uint32_t *)self + 26) = ((uint32_t)(uintptr_t)&off_20A1D2C);
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0x80000000;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0x80000000;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::addForInspection  (binary VA: 0x182ce00)
// Original: hkpPhysicsContext::addForInspection
// ----------------------------------------------------------------------------
void hkpPhysicsContext::addForInspection(hkpPhysicsContext::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  void *v5;
  hkVisualDebugger::Self *v6;
  int v7;
  hkpPhysicsSystem::Self *WorldAsOneSystem;
  int i;
  int j;
  int k;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  hkpConstraintListener::Self *v16;
  hkpConstraintListener::Self *v17;
  hkpConstraintListener::Self *v18;
  hkpConstraintListener::Self *v19;
  char *v20;

  if ( *((uint32_t *)self + 3) != 0 && a2 != nullptr )
  {
    hkpWorld::lock(a2);
    hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 92);
    hkpWorld::addPhantomListener(a2, (hkpPhysicsContext::Self *)((char *)self + 96));
    hkpWorld::addActionListener(a2, (hkpPhysicsContext::Self *)((char *)self + 104));
    hkpWorld::addConstraintListener(a2, (hkpPhysicsContext::Self *)((char *)self + 100));
    v2 = *((uint32_t *)self + 31);
    if ( v2 == (*((uint32_t *)self + 32) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpPhysicsContext::Self *)((char *)self + 120),
        240,
        (int)(uintptr_t)(v20));
      v2 = *((uint32_t *)self + 31);
    }
    hkpWorldCinfo::Construct((hkpWorldCinfo::Self *)(*((uint32_t *)self + 30) + 240 * v2));
    v3 = *((uint32_t *)self + 31);
    v4 = (uint32_t *)(*((uint32_t *)self + 30) + 240 * v3);
    *((uint32_t *)self + 31) = v3 + 1;
    v5 = v4;
    hkpWorld::getCinfo(a2, v4);
    v6 = *((hkVisualDebugger::Self **)self + 3);
    if ( v6 != nullptr )
      hkVisualDebugger::addTrackedObject(v6, v5, (const hkClass::Self *)&hkpWorldCinfoClass, "hkpWorldCinfo", 0);
    v7 = 0;
    WorldAsOneSystem = hkpWorld::getWorldAsOneSystem(a2);
    if ( *((int *)WorldAsOneSystem + 3) > 0 )
    {
      do
      {
        v16 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 2) + 4 * v7++);
        G4_VCALL<void>(self, 32, v16);
      }
      while ( *((uint32_t *)WorldAsOneSystem + 3) > v7 );
    }
    for ( i = 0; *((uint32_t *)WorldAsOneSystem + 12) > i; ++i )
    {
      v17 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 11) + 4 * i);
      G4_VCALL<void>(self, 40, v17);
    }
    for ( j = 0; *((uint32_t *)WorldAsOneSystem + 9) > j; ++j )
    {
      v18 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 8) + 4 * j);
      G4_VCALL<void>(self, 56, v18);
    }
    for ( k = 0; *((uint32_t *)WorldAsOneSystem + 6) > k; ++k )
    {
      v19 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 5) + 4 * k);
      G4_VCALL<void>(self, 48, v19);
    }
    if ( *((uint16_t *)WorldAsOneSystem + 3) != 0 )
    {
      do
      {
        v13 = *((uint32_t *)WorldAsOneSystem + 1);
        HIWORD(v12) = HIWORD(v13);
        LOWORD(v12) = 0;
        v14 = v12 | (uint16_t)(v13 - 1);
        v15 = v13;
      }
      while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)WorldAsOneSystem + 1, v15, v14) );
      if ( (uint16_t)v14 == 0 )
        G4_VCALL<void>(WorldAsOneSystem, 16);
    }
    hkpWorld::unlock(a2);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::addWorld  (binary VA: 0x182d040)
// Original: hkpPhysicsContext::addWorld
// ----------------------------------------------------------------------------
void hkpPhysicsContext::addWorld(hkpPhysicsContext::Self *self, hkpWorld::Self *a2)
{
  int v2;
  hkpWorld::Self **v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = *((uint32_t *)self + 28);
  if ( v2 > 0 )
  {
    v3 = *((hkpWorld::Self ***)self + 27);
    if ( *v3 == a2 )
      return;
    v4 = 0;
    while ( ++v4 != v2 )
    {
      if ( v3[v4] == a2 )
      {
        if ( v4 < 0 )
          break;
        return;
      }
    }
  }
  hkpWorld::addWorldDeletionListener(a2, (hkpPhysicsContext::Self *)((char *)self + 88));
  v5 = *((uint32_t *)self + 28);
  if ( v5 == (*((uint32_t *)self + 29) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhysicsContext::Self *)((char *)self + 108),
      4,
      v9);
    v5 = *((uint32_t *)self + 28);
  }
  v6 = 0;
  *(uint32_t *)(*((uint32_t *)self + 27) + 4 * v5) = (uint32_t)(uintptr_t)(a2);
  v7 = *((uint32_t *)self + 34);
  ++*((uint32_t *)self + 28);
  if ( v7 > 0 )
  {
    do
    {
      v8 = *(uint32_t *)(*((uint32_t *)self + 33) + 4 * v6++);
      G4_VCALL<void>(v8, 8, a2);
    }
    while ( *((uint32_t *)self + 34) > v6 );
  }
  hkpPhysicsContext::addForInspection(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::removeFromInspection  (binary VA: 0x182d120)
// Original: hkpPhysicsContext::removeFromInspection
// ----------------------------------------------------------------------------
int hkpPhysicsContext::removeFromInspection(hkpPhysicsContext::Self *self, hkpWorld::Self *a2)
{
  int result;
  int v3;
  hkpWorld::Self **v4;
  int v5;
  int v6;
  hkpPhysicsSystem::Self *WorldAsOneSystem;
  int j;
  int k;
  int v10;
  int v11;
  int32_t v12; // kr00_4
  int32_t v13;
  int32_t v14; // ett
  hkVisualDebugger::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int i;
  int v21;
  hkpConstraintListener::Self *v22;
  hkpConstraintListener::Self *v23;
  hkpConstraintListener::Self *v24;
  hkpConstraintListener::Self *v25;
  int v26;
  int v27;

  result = *((uint32_t *)self + 3);
  if ( result != 0 && a2 != nullptr )
  {
    hkpWorld::removeEntityListener(a2, (int)(uintptr_t)(self) + 92);
    hkpWorld::removePhantomListener(a2, (hkpPhysicsContext::Self *)((char *)self + 96));
    hkpWorld::removeActionListener(a2, (hkpPhysicsContext::Self *)((char *)self + 104));
    hkpWorld::removeConstraintListener(a2, (hkpPhysicsContext::Self *)((char *)self + 100));
    v3 = *((uint32_t *)self + 28);
    if ( v3 > 0 )
    {
      v4 = *((hkpWorld::Self ***)self + 27);
      if ( *v4 == a2 )
      {
        v15 = *((hkVisualDebugger::Self **)self + 3);
        if ( v15 != nullptr )
        {
          v5 = 0;
          v26 = 0;
LABEL_23:
          v16 = 240 * v5;
          hkVisualDebugger::removeTrackedObject(v15, (void *)(v16 + *((uint32_t *)self + 30)));
          (**(void (***)(int))(*((uint32_t *)self + 30) + v16))(*((uint32_t *)self + 30) + v16);
          v17 = *((uint32_t *)self + 31) - 1;
          *((uint32_t *)self + 31) = v17;
          if ( v26 != v17 )
          {
            v18 = *((uint32_t *)self + 30);
            v19 = v18 + v16;
            v27 = v18 + 240 * v17;
            for ( i = 0; i != 30; ++i )
            {
              v21 = *(uint32_t *)(v27 + 8 * i);
              *(uint32_t *)(v19 + 8 * i + 4) = *(uint32_t *)(v27 + 8 * i + 4);
              *(uint32_t *)(v19 + 8 * i) = v21;
            }
          }
        }
      }
      else
      {
        v5 = 0;
        while ( ++v5 != v3 )
        {
          if ( v4[v5] == a2 )
          {
            v15 = *((hkVisualDebugger::Self **)self + 3);
            if ( v15 != nullptr && v5 != -1 )
            {
              v26 = v5;
              goto LABEL_23;
            }
            break;
          }
        }
      }
    }
    v6 = 0;
    WorldAsOneSystem = hkpWorld::getWorldAsOneSystem(a2);
    if ( *((int *)WorldAsOneSystem + 3) > 0 )
    {
      do
      {
        v22 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 2) + 4 * v6++);
        G4_VCALL<void>(self, 36, v22);
      }
      while ( *((uint32_t *)WorldAsOneSystem + 3) > v6 );
    }
    for ( j = 0; *((uint32_t *)WorldAsOneSystem + 12) > j; ++j )
    {
      v23 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 11) + 4 * j);
      G4_VCALL<void>(self, 44, v23);
    }
    for ( k = 0; *((uint32_t *)WorldAsOneSystem + 9) > k; ++k )
    {
      v24 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 8) + 4 * k);
      G4_VCALL<void>(self, 60, v24);
    }
    result = *((uint32_t *)WorldAsOneSystem + 6);
    v10 = 0;
    if ( result > 0 )
    {
      do
      {
        v25 = *(hkpConstraintListener::Self **)(*((uint32_t *)WorldAsOneSystem + 5) + 4 * v10++);
        result = G4_VCALL<int>(self, 52, v25);
      }
      while ( *((uint32_t *)WorldAsOneSystem + 6) > v10 );
    }
    if ( *((uint16_t *)WorldAsOneSystem + 3) != 0 )
    {
      do
      {
        v12 = *((uint32_t *)WorldAsOneSystem + 1);
        HIWORD(v11) = HIWORD(v12);
        LOWORD(v11) = 0;
        v13 = v11 | (uint16_t)(v12 - 1);
        v14 = v12;
        result = __sync_val_compare_and_swap((volatile int32_t *)WorldAsOneSystem + 1, v14, v13);
      }
      while ( v14 != result );
      if ( (uint16_t)v13 == 0 )
        return G4_VCALL<int>(WorldAsOneSystem, 16);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::removeWorld  (binary VA: 0x182d370)
// Original: hkpPhysicsContext::removeWorld
// ----------------------------------------------------------------------------
void hkpPhysicsContext::removeWorld(hkpPhysicsContext::Self *self, hkpWorld::Self *a2)
{
  int v2;
  hkpWorld::Self **v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = *((uint32_t *)self + 28);
  if ( v2 > 0 )
  {
    v3 = *((hkpWorld::Self ***)self + 27);
    if ( *v3 == a2 )
    {
      v9 = 0;
LABEL_9:
      v5 = 0;
      hkpWorld::removeWorldDeletionListener(a2, (hkpPhysicsContext::Self *)((char *)self + 88));
      if ( *((int *)self + 34) > 0 )
      {
        do
        {
          v6 = *(uint32_t *)(*((uint32_t *)self + 33) + 4 * v5++);
          G4_VCALL<void>(v6, 12, a2);
        }
        while ( *((uint32_t *)self + 34) > v5 );
      }
      hkpPhysicsContext::removeFromInspection(self, a2);
      v7 = *((uint32_t *)self + 27);
      v8 = *((uint32_t *)self + 28) - 1;
      *((uint32_t *)self + 28) = v8;
      if ( v9 != v8 )
        *(uint32_t *)(v7 + 4 * v9) = *(uint32_t *)(v7 + 4 * v8);
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        if ( v3[v4] == a2 )
        {
          if ( v4 < 0 )
            return;
          v9 = v4;
          goto LABEL_9;
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::worldDeletedCallback  (binary VA: 0x182d450)
// Original: hkpPhysicsContext::worldDeletedCallback
// ----------------------------------------------------------------------------
void hkpPhysicsContext::worldDeletedCallback(hkpPhysicsContext::Self *self, hkpWorld::Self *a2)
{
  hkpPhysicsContext::removeWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::Destroy  (binary VA: 0x182d490)
// Original: hkpPhysicsContext::~hkpPhysicsContext
// ----------------------------------------------------------------------------
void hkpPhysicsContext::Destroy(hkpPhysicsContext::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  hkProcessContext::Self *v6;
  void (**v7)(hkProcessContext::Self *);
  int v8;
  int v9;
  hkProcessContext::Self *v10;
  hkpWorld::Self *v11;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1C48);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A1C90);
  *((uint32_t *)self + 22) = ((uint32_t)(uintptr_t)&off_20A1CA8);
  *((uint32_t *)self + 23) = ((uint32_t)(uintptr_t)&off_20A1CC0);
  *((uint32_t *)self + 24) = ((uint32_t)(uintptr_t)&off_20A1CE4);
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_20A1D04);
  *((uint32_t *)self + 26) = ((uint32_t)(uintptr_t)&off_20A1D2C);
  v1 = *((uint32_t *)self + 28) - 1;
  v2 = 4 * v1;
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      v11 = *(hkpWorld::Self **)(*((uint32_t *)self + 27) + v2);
      v2 -= 4;
      hkpPhysicsContext::removeWorld(self, v11);
    }
    while ( v1 != -1 );
  }
  v3 = *((uint32_t *)self + 35);
  *((uint32_t *)self + 34) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 33),
      4 * v3);
  v4 = *((uint32_t *)self + 31);
  *((uint32_t *)self + 33) = 0;
  v5 = v4 - 1;
  *((uint32_t *)self + 35) = 0x80000000;
  if ( v5 >= 0 )
  {
    v6 = (hkProcessContext::Self *)(240 * v5 + *((uint32_t *)self + 30));
    do
    {
      v7 = *(void (***)(hkProcessContext::Self *))v6;
      --v5;
      v10 = v6;
      v6 = (hkProcessContext::Self *)((char *)v6 - 240);
      (*v7)(v10);
    }
    while ( v5 != -1 );
  }
  v8 = *((uint32_t *)self + 32);
  *((uint32_t *)self + 31) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 30),
      240 * (v8 & 0x3FFFFFFF));
  v9 = *((uint32_t *)self + 29);
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 32) = 0x80000000;
  *((uint32_t *)self + 28) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 27),
      4 * v9);
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 29) = 0x80000000;
  *((uint32_t *)self + 26) = ((uint32_t)(uintptr_t)&off_20A1C10);
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_209EC68);
  *((uint32_t *)self + 24) = ((uint32_t)(uintptr_t)&off_20A1C28);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)self + 22) = ((uint32_t)(uintptr_t)&off_209E850);
  hkProcessContext::Destroy((hkpPhysicsContext::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::Destroy_ea182d6d0  (binary VA: 0x182d6d0)
// Original: hkpPhysicsContext::~hkpPhysicsContext
// ----------------------------------------------------------------------------
void hkpPhysicsContext::Destroy_ea182d6d0(hkpPhysicsContext::Self *self)
{
  int v1;
  int v2;

  hkpPhysicsContext::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::setOwner  (binary VA: 0x182d790)
// Original: hkpPhysicsContext::setOwner
// ----------------------------------------------------------------------------
void hkpPhysicsContext::setOwner(hkpPhysicsContext::Self *self, hkVisualDebugger::Self *a2)
{
  int v2;
  int v3;
  int v4;
  hkpWorld::Self *v5;
  hkpWorld::Self *v6;

  if ( *((uint32_t *)self + 3) != 0 )
  {
    v2 = *((uint32_t *)self + 28) - 1;
    if ( v2 >= 0 )
    {
      v3 = 4 * v2;
      do
      {
        --v2;
        v5 = *(hkpWorld::Self **)(*((uint32_t *)self + 27) + v3);
        v3 -= 4;
        hkpPhysicsContext::removeFromInspection(self, v5);
      }
      while ( v2 != -1 );
    }
  }
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr && *((int *)self + 28) > 0 )
  {
    v4 = 0;
    do
    {
      v6 = *(hkpWorld::Self **)(*((uint32_t *)self + 27) + 4 * v4++);
      hkpPhysicsContext::addForInspection(self, v6);
    }
    while ( *((uint32_t *)self + 28) > v4 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::findWorld  (binary VA: 0x182d840)
// Original: hkpPhysicsContext::findWorld
// ----------------------------------------------------------------------------
int hkpPhysicsContext::findWorld(hkpPhysicsContext::Self *self, hkpWorld::Self *a2)
{
  int v2;
  hkpWorld::Self **v3;
  int result;

  v2 = *((uint32_t *)self + 28);
  if ( v2 <= 0 )
    return -1;
  v3 = *((hkpWorld::Self ***)self + 27);
  result = 0;
  if ( *v3 != a2 )
  {
    while ( ++result != v2 )
    {
      if ( v3[result] == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::addWorldAddedListener  (binary VA: 0x182d880)
// Original: hkpPhysicsContext::addWorldAddedListener
// ----------------------------------------------------------------------------
void hkpPhysicsContext::addWorldAddedListener(hkpPhysicsContext::Self *self, hkpPhysicsContextWorldListener::Self *a2)
{
  int v2;
  hkpPhysicsContextWorldListener::Self **v3;
  int v4;
  int v5;

  v2 = *((uint32_t *)self + 34);
  if ( v2 > 0 )
  {
    v3 = *((hkpPhysicsContextWorldListener::Self ***)self + 33);
    if ( *v3 == a2 )
      return;
    v4 = 0;
    while ( ++v4 != v2 )
    {
      if ( v3[v4] == a2 )
        return;
    }
  }
  if ( v2 == (*((uint32_t *)self + 35) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpPhysicsContext::Self *)((char *)self + 132),
      4,
      v5);
    v2 = *((uint32_t *)self + 34);
  }
  *(uint32_t *)(*((uint32_t *)self + 33) + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 34);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContext::removeWorldAddedListener  (binary VA: 0x182d920)
// Original: hkpPhysicsContext::removeWorldAddedListener
// ----------------------------------------------------------------------------
void hkpPhysicsContext::removeWorldAddedListener(hkpPhysicsContext::Self *self, hkpPhysicsContextWorldListener::Self *a2)
{
  int v2;
  hkpPhysicsContextWorldListener::Self **v3;
  int v4;
  int v5;
  int v6;

  v2 = *((uint32_t *)self + 34);
  if ( v2 > 0 )
  {
    v3 = *((hkpPhysicsContextWorldListener::Self ***)self + 33);
    if ( *v3 == a2 )
    {
      v5 = 0;
      v4 = 0;
LABEL_8:
      v6 = v2 - 1;
      *((uint32_t *)self + 34) = v6;
      if ( v4 != v6 )
        v3[v5] = v3[v6];
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        v5 = v4;
        if ( v3[v4] == a2 )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::Destroy  (binary VA: 0x1845060)
// Original: hkpPhysicsData::~hkpPhysicsData
// ----------------------------------------------------------------------------
void hkpPhysicsData::Destroy(hkpPhysicsData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int i;
  int v8;
  int v9;
  int32_t v10; // kr04_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int v14;

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3928);
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
  v6 = *((uint32_t *)self + 4);
  for ( i = 0; i < v6; ++i )
  {
    v8 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * i);
    if ( *(uint16_t *)(v8 + 6) != 0 )
    {
      v14 = i;
      do
      {
        v10 = *(uint32_t *)(v8 + 4);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
        v11 = v9 | (uint16_t)(v10 - 1);
        v12 = v10;
      }
      while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11) );
      i = v14;
      if ( (uint16_t)v11 == 0 )
        G4_VCALL<void>(v8, 16);
      v6 = *((uint32_t *)self + 4);
    }
  }
  v13 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      4 * v13);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::Destroy_ea1845170  (binary VA: 0x1845170)
// Original: hkpPhysicsData::~hkpPhysicsData
// ----------------------------------------------------------------------------
void hkpPhysicsData::Destroy_ea1845170(hkpPhysicsData::Self *self)
{
  int v1;
  int v2;

  hkpPhysicsData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::Construct  (binary VA: 0x18451d0)
// Original: hkpPhysicsData::hkpPhysicsData
// ----------------------------------------------------------------------------
void hkpPhysicsData::Construct(hkpPhysicsData::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3928);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 2) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::populateFromWorld  (binary VA: 0x1845210)
// Original: hkpPhysicsData::populateFromWorld
// ----------------------------------------------------------------------------
int hkpPhysicsData::populateFromWorld(hkpPhysicsData::Self *self, const hkpWorld::Self *a2, int a3)
{
  hkpWorldCinfo::Self *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int address;
  hkpWorldCinfo::Self *v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[4];
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v3 = *((hkpWorldCinfo::Self **)self + 2);
  if ( v3 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v9 = (hkpWorldCinfo::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)address + 44),
                            240);
    hkpWorldCinfo::Construct(v9);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v9);
    v3 = v9;
  }
  hkpWorld::getCinfo(a2, v3);
  hkpWorld::getWorldAsSystems(a2, (hkpPhysicsData::Self *)((char *)self + 12));
  result = a3;
  if ( (uint8_t)a3 != 0 )
  {
    v11[0] = 0;
    v12 = 0;
    v5 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v5 + 44) + 8))(*(uint32_t *)(*(uint32_t *)v5 + 44), 80);
    hkpPhysicsSystem::Construct((hkpPhysicsSystem::Self *)v6);
    *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_20A1B88);
    *(uint32_t *)(v6 + 68) = 0;
    *(uint32_t *)(v6 + 72) = 0;
    *(uint32_t *)(v6 + 76) = 0x80000000;
    hkpSaveContactPointsUtil::saveContactPoints(v11, a2, v6);
    *(uint8_t *)(v6 + 64) = 0;
    v7 = *((uint32_t *)self + 4);
    if ( v7 == (*((uint32_t *)self + 5) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpPhysicsData::Self *)((char *)self + 12),
        4,
        v10);
      v7 = *((uint32_t *)self + 4);
    }
    result = *((uint32_t *)self + 3);
    *(uint32_t *)(result + 4 * v7) = v6;
    ++*((uint32_t *)self + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::createWorld  (binary VA: 0x1845360)
// Original: hkpPhysicsData::createWorld
// ----------------------------------------------------------------------------
hkpAgentRegisterUtil::Self ** hkpPhysicsData::createWorld(int a1, char a2)
{
  int v2;
  int address;
  int i;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  volatile int32_t *v10;
  int v11;
  int32_t v12; // kr00_4
  int32_t v13;
  int32_t v14; // ett
  uint32_t *v15;
  volatile int32_t *v16;
  int v17;
  int32_t v18; // kr04_4
  int32_t v19;
  int32_t v20; // ett
  uint32_t *v21;
  volatile int32_t *v22;
  int v23;
  int32_t v24; // kr08_4
  int32_t v25;
  int32_t v26; // ett
  int v28;
  typedef char _g4_t_v29;
  typedef hkpAgentRegisterUtil::Self **_g4_t_v30;
  typedef uint8_t _g4_t_v31[5];
  typedef uint8_t _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint32_t _g4_t_v37[21];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef hkpAgentRegisterUtil::Self **_g4_t_v43;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v30)) > _g4_s1 ? (8u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v31)) > _g4_s2 ? (15u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v32)) > _g4_s3 ? (20u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v33)) > _g4_s4 ? (24u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (29u + sizeof(_g4_t_v35)) > _g4_s6 ? (29u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (30u + sizeof(_g4_t_v36)) > _g4_s7 ? (30u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v37)) > _g4_s8 ? (32u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v38)) > _g4_s9 ? (116u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v39)) > _g4_s10 ? (120u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v40)) > _g4_s11 ? (136u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (280u + sizeof(_g4_t_v41)) > _g4_s12 ? (280u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (284u + sizeof(_g4_t_v42)) > _g4_s13 ? (284u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (288u + sizeof(_g4_t_v43)) > _g4_s14 ? (288u + sizeof(_g4_t_v43)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 15u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 29u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 30u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 280u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 284u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 288u);

  v41 = &a1;
  v2 = a1;
  v29 = a2;
  hkpWorldCinfo::Construct((hkpWorldCinfo::Self *)v37);
  if ( *(uint32_t *)(v2 + 8) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v30 = (hkpAgentRegisterUtil::Self **)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                     *(uint32_t *)(*(uint32_t *)address + 44),
                                     896);
    hkpWorld::Construct((hkpWorld::Self *)v30, *(const hkpWorldCinfo::Self **)(v2 + 8), (char *)((uint8_t *)(uintptr_t)0x1335041u) + 3);
  }
  else
  {
    v28 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v30 = (hkpAgentRegisterUtil::Self **)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v28 + 44) + 8))(
                                     *(uint32_t *)(*(uint32_t *)v28 + 44),
                                     896);
    hkpWorld::Construct((hkpWorld::Self *)v30, (const hkpWorldCinfo::Self *)v37, (char *)((uint8_t *)(uintptr_t)0x1335041u) + 3);
  }
  if ( v29 != 0 )
    hkpAgentRegisterUtil::registerAllAgents(v30[30]);
  for ( i = 0; *(uint32_t *)(v2 + 16) > i; ++i )
  {
    while ( 1 )
    {
      hkpWorld::addPhysicsSystem((hkpWorld::Self *)v30, *(const hkpPhysicsSystem::Self **)(*(uint32_t *)(v2 + 12) + 4 * i));
      v5 = **(uint32_t **)(*(uint32_t *)(v2 + 12) + 4 * i);
      v42 = *(uint32_t *)(*(uint32_t *)(v2 + 12) + 4 * i);
      (*(void (**)(uint8_t *))(v5 + 24))(v31);
      if ( v31[0] != 0 )
        break;
      if ( *(uint32_t *)(v2 + 16) <= ++i )
        goto LABEL_10;
    }
    v32[0] = 0;
    v43 = v30;
    v6 = *(uint32_t *)(v2 + 12);
    v32[1] = 0;
    v33 = 0;
    v34 = 1;
    v35 = 1;
    v36 = 0;
    v7 = *(uint32_t *)(v6 + 4 * i);
    hkpSaveContactPointsUtil::loadContactPoints(v32, v7, v30);
  }
LABEL_10:
  v8 = *(uint32_t *)(v2 + 8);
  if ( v8 != 0 && *(uint32_t *)(v8 + 84) != 0 )
    hkpWorld::updateCollisionFilterOnWorld((int)(uintptr_t)(v30), 0, 1);
  v9 = (uint32_t *)v40;
  v37[0] = ((uint32_t)(uintptr_t)&off_20550C8);
  if ( v40 != 0 && *(uint16_t *)(v40 + 6) != 0 )
  {
    v10 = (volatile int32_t *)(v40 + 4);
    do
    {
      v12 = v9[1];
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      v13 = v11 | (uint16_t)(v12 - 1);
      v14 = v12;
    }
    while ( v14 != __sync_val_compare_and_swap(v10, v14, v13) );
    if ( (uint16_t)v13 == 0 )
      G4_VCALL<void>(v9, 16);
  }
  v15 = (uint32_t *)v39;
  v40 = 0;
  if ( v39 != 0 && *(uint16_t *)(v39 + 6) != 0 )
  {
    v16 = (volatile int32_t *)(v39 + 4);
    do
    {
      v18 = v15[1];
      HIWORD(v17) = HIWORD(v18);
      LOWORD(v17) = 0;
      v19 = v17 | (uint16_t)(v18 - 1);
      v20 = v18;
    }
    while ( v20 != __sync_val_compare_and_swap(v16, v20, v19) );
    if ( (uint16_t)v19 == 0 )
      G4_VCALL<void>(v15, 16);
  }
  v21 = (uint32_t *)v38;
  v39 = 0;
  if ( v38 != 0 && *(uint16_t *)(v38 + 6) != 0 )
  {
    v22 = (volatile int32_t *)(v38 + 4);
    do
    {
      v24 = v21[1];
      HIWORD(v23) = HIWORD(v24);
      LOWORD(v23) = 0;
      v25 = v23 | (uint16_t)(v24 - 1);
      v26 = v24;
    }
    while ( v26 != __sync_val_compare_and_swap(v22, v26, v25) );
    if ( (uint16_t)v25 == 0 )
      G4_VCALL<void>(v21, 16);
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::splitPhysicsSystems  (binary VA: 0x1845650)
// Original: hkpPhysicsData::splitPhysicsSystems
// ----------------------------------------------------------------------------
int hkpPhysicsData::splitPhysicsSystems(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int address;
  hkpRigidBody::Self *v5;
  int i;
  hkpAction::Self *v7;
  int j;
  hkpConstraintInstance::Self *v9;
  int k;
  hkpPhantom::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int m;
  int v19;
  char v20; // si
  char v21;
  int v22;
  bool v23;
  int v24;
  char v25;
  char v26;
  hkpPhysicsSystem::Self *v27;
  uint32_t *v28;
  int v29;
  hkpPhysicsSystem::Self *v30;
  hkpPhantom::Self *v31;
  int v33;
  hkpRigidBody::Self *v34;
  int v35;
  hkpRigidBody::Self **v36;
  int v37;
  int v38;
  hkpRigidBody::Self **v39;
  int v40;
  hkpPhysicsSystem::Self *v41;
  int v42;
  hkpRigidBody::Self *v43;
  int v44;
  hkpRigidBody::Self **v45;
  int v46;
  int v47;
  hkpRigidBody::Self **v48;
  int v49;
  hkpPhysicsSystem::Self *v50;
  hkpPhysicsSystem::Self *v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef hkpPhysicsSystem::Self *_g4_t_v56;
  typedef hkpPhysicsSystem::Self *_g4_t_v57;
  typedef hkpPhysicsSystem::Self *_g4_t_v58;
  typedef hkpPhysicsSystem::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef hkpPhysicsSystem::Self **_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef hkpEntity::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef hkpPhysicsSystem::Self *_g4_t_v74;
  typedef hkpPhysicsSystem::Self *_g4_t_v75;
  typedef hkpPhysicsSystem::Self *_g4_t_v76;
  typedef hkpPhysicsSystem::Self *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef hkpRigidBody::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef char _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef uint32_t *_g4_t_v91;
  typedef int _g4_t_v92;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v53)) > _g4_s1 ? (16u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v54)) > _g4_s2 ? (20u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v55)) > _g4_s3 ? (20u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v56)) > _g4_s4 ? (24u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v57)) > _g4_s5 ? (24u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v58)) > _g4_s6 ? (28u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v59)) > _g4_s7 ? (28u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v60)) > _g4_s8 ? (32u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v61)) > _g4_s9 ? (32u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v62)) > _g4_s10 ? (36u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v63)) > _g4_s11 ? (36u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v64)) > _g4_s12 ? (40u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v65)) > _g4_s13 ? (44u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v66)) > _g4_s14 ? (48u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v67)) > _g4_s15 ? (48u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v68)) > _g4_s16 ? (52u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v69)) > _g4_s17 ? (56u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v70)) > _g4_s18 ? (56u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v71)) > _g4_s19 ? (60u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v72)) > _g4_s20 ? (60u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v73)) > _g4_s21 ? (60u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v74)) > _g4_s22 ? (64u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v75)) > _g4_s23 ? (64u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v76)) > _g4_s24 ? (68u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v77)) > _g4_s25 ? (68u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v78)) > _g4_s26 ? (72u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v79)) > _g4_s27 ? (72u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v80)) > _g4_s28 ? (76u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v81)) > _g4_s29 ? (76u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v82)) > _g4_s30 ? (76u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v83)) > _g4_s31 ? (76u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v84)) > _g4_s32 ? (80u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v85)) > _g4_s33 ? (84u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v86)) > _g4_s34 ? (88u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v87)) > _g4_s35 ? (92u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v88)) > _g4_s36 ? (96u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (100u + sizeof(_g4_t_v89)) > _g4_s37 ? (100u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v90)) > _g4_s38 ? (104u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v91)) > _g4_s39 ? (108u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (120u + sizeof(_g4_t_v92)) > _g4_s40 ? (120u + sizeof(_g4_t_v92)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 72u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 76u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 84u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 88u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 92u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 96u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 100u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 104u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 108u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 120u);

  v2 = 0;
  v91 = (uint32_t *)(&a1);
  v60 = a2;
  v3 = a1;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v77 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int, int, int, int, hkpPhysicsSystem::Self *, hkpPhysicsSystem::Self *, int, int, hkpEntity::Self *, int, int, int, int, int, hkpPhysicsSystem::Self *, hkpPhysicsSystem::Self *, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              68,
                              v52,
                              address,
                              v54,
                              v56,
                              v58,
                              v60,
                              v62,
                              v64,
                              v65,
                              v66,
                              v68,
                              v69,
                              v71,
                              v74,
                              v76,
                              v78,
                              v80,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90);
  hkpPhysicsSystem::Construct(v77);
  if ( (int)v3[3] > 0 )
  {
    do
    {
      v5 = *(hkpRigidBody::Self **)(v3[2] + 4 * v2++);
      hkpPhysicsSystem::addRigidBody(v77, v5);
    }
    while ( v3[3] > v2 );
  }
  for ( i = 0; v3[9] > i; ++i )
  {
    v7 = *(hkpAction::Self **)(v3[8] + 4 * i);
    hkpPhysicsSystem::addAction(v77, v7);
  }
  for ( j = 0; v3[6] > j; ++j )
  {
    v9 = *(hkpConstraintInstance::Self **)(v3[5] + 4 * j);
    hkpPhysicsSystem::addConstraint(v77, v9);
  }
  for ( k = 0; v3[12] > k; ++k )
  {
    v11 = *(hkpPhantom::Self **)(v3[11] + 4 * k);
    hkpPhysicsSystem::addPhantom(v77, v11);
  }
  v12 = v53;
  v59 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v53 + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)v53 + 44),
                              68);
  hkpPhysicsSystem::Construct(v59);
  hkStringPtr::opAssign((hkpPhysicsSystem::Self *)((char *)v59 + 56), (hkString::Self *)"Unconstrained Rigid Bodies");
  v13 = *((uint32_t *)v77 + 15);
  *((uint8_t *)v59 + 64) = 0;
  *((uint32_t *)v59 + 15) = v13;
  v57 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v12 + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)v12 + 44),
                              68);
  hkpPhysicsSystem::Construct(v57);
  hkStringPtr::opAssign((hkpPhysicsSystem::Self *)((char *)v57 + 56), (hkString::Self *)"Fixed Rigid Bodies");
  v14 = *((uint32_t *)v77 + 15);
  *((uint8_t *)v57 + 64) = 0;
  *((uint32_t *)v57 + 15) = v14;
  v55 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v12 + 44) + 8))(*(uint32_t *)(*(uint32_t *)v12 + 44), 68);
  hkpPhysicsSystem::Construct((hkpPhysicsSystem::Self *)v55);
  hkStringPtr::opAssign((hkStringPtr::Self *)(v55 + 56), (hkString::Self *)"Keyframed Rigid Bodies");
  v15 = *((uint32_t *)v77 + 15);
  *(uint8_t *)(v55 + 64) = 0;
  *(uint32_t *)(v55 + 60) = v15;
LABEL_10:
  if ( *((int *)v77 + 3) <= 0 )
    goto LABEL_44;
  do
  {
    v75 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v53 + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)v53 + 44),
                                68);
    hkpPhysicsSystem::Construct(v75);
    hkStringPtr::opAssign((hkpPhysicsSystem::Self *)((char *)v75 + 56), (hkString::Self *)"Constrained System");
    *((uint32_t *)v75 + 15) = *((uint32_t *)v77 + 15);
    hkpEntity::isActive((hkpEntity::Self *)((char *)&v84 + 3), **((uint32_t **)v77 + 2));
    *((uint8_t *)v75 + 64) = HIBYTE(v84);
    hkpPhysicsSystem::addRigidBody(v75, **((hkpRigidBody::Self ***)v77 + 2));
    hkpPhysicsSystem::removeRigidBody(v77, 0);
    v16 = *((uint32_t *)v75 + 3);
    while ( v16 > 0 )
    {
      v63 = 0;
      v81 = 0;
      do
      {
        v17 = 0;
        v79 = *(hkpRigidBody::Self **)(*((uint32_t *)v75 + 2) + 4 * v63);
        for ( m = *((uint32_t *)v77 + 6); v17 < m; m = *((uint32_t *)v77 + 6) )
        {
          while ( 1 )
          {
            v19 = *(uint32_t *)(*((uint32_t *)v77 + 5) + 4 * v17);
            if ( v79 == *(hkpRigidBody::Self **)(v19 + 20) || v79 == *(hkpRigidBody::Self **)(v19 + 24) )
              break;
            if ( ++v17 >= m )
              goto LABEL_19;
          }
          hkpPhysicsSystem::addConstraint(v75, *(hkpConstraintInstance::Self **)(*((uint32_t *)v77 + 5) + 4 * v17));
          v42 = *(uint32_t *)(*((uint32_t *)v77 + 5) + 4 * v17);
          v43 = (hkpRigidBody::Self *)((unsigned int)(uintptr_t)(v79) ^ *(uint32_t *)(v42 + 24) ^ *(uint32_t *)(v42 + 20));
          if ( v43 == nullptr
            || *((uint8_t *)&dword_E8 + ((unsigned int)(uintptr_t)(v79) ^ *(uint32_t *)(v42 + 24) ^ *(uint32_t *)(v42 + 20))) == 5 )
          {
            goto LABEL_98;
          }
          v44 = *((uint32_t *)v77 + 3);
          if ( v44 > 0 )
          {
            v45 = *((hkpRigidBody::Self ***)v77 + 2);
            if ( v43 == *v45 )
            {
              v83 = 0;
              goto LABEL_89;
            }
            v46 = 0;
            while ( ++v46 != v44 )
            {
              if ( v43 == v45[v46] )
              {
                v83 = v46;
                goto LABEL_89;
              }
            }
          }
          v83 = -1;
LABEL_89:
          v47 = *((uint32_t *)v75 + 3);
          if ( v47 > 0 )
          {
            v48 = *((hkpRigidBody::Self ***)v75 + 2);
            if ( v43 == *v48 )
              goto LABEL_98;
            v49 = 0;
            while ( ++v49 != v47 )
            {
              if ( v43 == v48[v49] )
              {
                if ( v49 == -1 )
                  break;
                goto LABEL_98;
              }
            }
          }
          if ( v83 != -1 )
          {
            v50 = v75;
            if ( *((uint8_t *)v75 + 64) != 0 )
            {
              *((uint8_t *)v75 + 64) = 1;
            }
            else
            {
              hkpEntity::isActive((hkpEntity::Self *)((char *)&v84 + 3), (int)(uintptr_t)(v43));
              v50 = v75;
              *((uint8_t *)v75 + 64) = HIBYTE(v84) != 0;
            }
            hkpPhysicsSystem::addRigidBody(v50, v43);
            hkpPhysicsSystem::removeRigidBody(v77, v83);
          }
LABEL_98:
          hkpPhysicsSystem::removeConstraint(v77, v17);
          v81 = 1;
        }
LABEL_19:
        if ( *((int *)v77 + 9) <= 0 )
          goto LABEL_31;
        v70 = 0;
        v20 = v81;
        while ( 2 )
        {
          v85 = 0;
          v86 = 0;
          v87 = 0x80000000;
          (*(void (**)(uint32_t, int *))(**(uint32_t **)(*((uint32_t *)v77 + 8) + 4 * v70) + 24))(
            *(uint32_t *)(*((uint32_t *)v77 + 8) + 4 * v70),
            &v85);
          if ( v86 <= 0 )
            goto LABEL_26;
          v82 = v86;
          v21 = 0;
          v22 = 0;
          while ( 2 )
          {
            if ( v79 != *(hkpRigidBody::Self **)(v85 + 4 * v22) )
              goto LABEL_24;
            v72 = v22;
            hkpPhysicsSystem::addAction(v75, *(hkpAction::Self **)(*((uint32_t *)v77 + 8) + 4 * v70));
            hkpPhysicsSystem::removeAction(v77, v70);
            if ( v86 <= 0 )
            {
              v20 = 1;
              goto LABEL_27;
            }
            v82 = v86;
            v33 = 0;
            v67 = v72;
            while ( 2 )
            {
              v34 = *(hkpRigidBody::Self **)(v85 + 4 * v33);
              if ( v79 != v34 && v34 != nullptr && *((uint8_t *)v34 + 232) != 5 )
              {
                v35 = *((uint32_t *)v77 + 3);
                if ( v35 <= 0 )
                  goto LABEL_65;
                v36 = *((hkpRigidBody::Self ***)v77 + 2);
                if ( v34 == *v36 )
                {
                  v73 = 0;
                }
                else
                {
                  v37 = 0;
                  while ( ++v37 != v35 )
                  {
                    if ( v34 == v36[v37] )
                    {
                      v73 = v37;
                      goto LABEL_66;
                    }
                  }
LABEL_65:
                  v73 = -1;
                }
LABEL_66:
                v38 = *((uint32_t *)v75 + 3);
                if ( v38 <= 0 )
                {
LABEL_71:
                  if ( v73 != -1 )
                  {
                    v41 = v75;
                    if ( *((uint8_t *)v75 + 64) != 0 )
                    {
                      *((uint8_t *)v75 + 64) = 1;
                    }
                    else
                    {
                      hkpEntity::isActive((hkpEntity::Self *)((char *)&v84 + 3), (int)(uintptr_t)(v34));
                      v41 = v75;
                      *((uint8_t *)v75 + 64) = HIBYTE(v84) != 0;
                    }
                    hkpPhysicsSystem::addRigidBody(v41, v34);
                    hkpPhysicsSystem::removeRigidBody(v77, v73);
                    v82 = v86;
                  }
                }
                else
                {
                  v39 = *((hkpRigidBody::Self ***)v75 + 2);
                  if ( v34 != *v39 )
                  {
                    v40 = 0;
                    while ( ++v40 != v38 )
                    {
                      if ( v34 == v39[v40] )
                      {
                        if ( v40 == -1 )
                          goto LABEL_71;
                        goto LABEL_75;
                      }
                    }
                    goto LABEL_71;
                  }
                }
              }
LABEL_75:
              if ( ++v33 < v82 )
                continue;
              break;
            }
            v22 = v67;
            v21 = 1;
            v20 = 1;
LABEL_24:
            if ( ++v22 < v82 )
              continue;
            break;
          }
          if ( v21 == 0 )
LABEL_26:
            ++v70;
LABEL_27:
          v86 = 0;
          if ( v87 >= 0 )
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v85,
              4 * v87);
          if ( v70 < *((uint32_t *)v77 + 9) )
            continue;
          break;
        }
        v81 = v20;
LABEL_31:
        ++v63;
        v16 = *((uint32_t *)v75 + 3);
      }
      while ( v16 > v63 );
      if ( v81 == 0 )
        break;
    }
    if ( *((uint32_t *)v75 + 6) != 0 || *((uint32_t *)v75 + 9) != 0 )
    {
      v51 = v61[5];
      if ( v51 == (hkpPhysicsSystem::Self *)((unsigned int)(uintptr_t)(v61[6]) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v61 + 4),
          4,
          v92);
        v51 = v61[5];
      }
      *((uint32_t *)v61[4] + (uint32_t)(uintptr_t)(v51)) = (uint32_t)(uintptr_t)(v75);
      v61[5] = (hkpPhysicsSystem::Self *)((char *)v61[5] + 1);
      goto LABEL_10;
    }
    v23 = true;
    v24 = **((uint32_t **)v75 + 2);
    if ( *(uint32_t *)(v24 + 200) != 0 )
    {
      hkpEntity::isActive((hkpEntity::Self *)((char *)&v84 + 3), v24);
      v23 = HIBYTE(v84) != 0;
    }
    v25 = *(uint8_t *)(v24 + 232);
    if ( v25 == 4 )
    {
      v26 = 1;
      v27 = (hkpPhysicsSystem::Self *)v55;
LABEL_40:
      if ( *((uint8_t *)v27 + 64) == 0 )
        v26 = v23;
      *((uint8_t *)v27 + 64) = v26;
      hkpPhysicsSystem::addRigidBody(v27, (hkpRigidBody::Self *)v24);
    }
    else
    {
      if ( v25 != 5 )
      {
        v26 = 1;
        v27 = v59;
        goto LABEL_40;
      }
      hkpPhysicsSystem::addRigidBody(v57, (hkpRigidBody::Self *)v24);
    }
    G4_VCALL<void>(v75, 4);
  }
  while ( *((int *)v77 + 3) > 0 );
LABEL_44:
  if ( *(uint32_t *)(v55 + 12) != 0 )
  {
    v61[1] = (hkpPhysicsSystem::Self *)v55;
  }
  else
  {
    G4_VCALL<void>(v55, 4);
    v61[1] = nullptr;
  }
  if ( *((uint32_t *)v57 + 3) != 0 )
  {
    *v61 = v57;
  }
  else
  {
    G4_VCALL<void>(v57, 4);
    *v61 = nullptr;
  }
  if ( *((uint32_t *)v59 + 3) != 0 )
  {
    v61[2] = v59;
  }
  else
  {
    G4_VCALL<void>(v59, 4);
    v61[2] = nullptr;
  }
  if ( *((int *)v77 + 12) <= 0 )
  {
    v61[3] = nullptr;
  }
  else
  {
    v28 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v53 + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)v53 + 44),
                      68);
    hkpPhysicsSystem::Construct((hkpPhysicsSystem::Self *)v28);
    hkStringPtr::opAssign((hkStringPtr::Self *)(v28 + 14), (hkString::Self *)"Phantoms");
    v28[15] = *((uint32_t *)v77 + 15);
    v29 = 0;
    v61[3] = (hkpPhysicsSystem::Self *)v28;
    if ( *((int *)v77 + 12) > 0 )
    {
      v30 = v77;
      do
      {
        v31 = *(hkpPhantom::Self **)(*((uint32_t *)v30 + 11) + 4 * v29++);
        hkpPhysicsSystem::addPhantom((hkpPhysicsSystem::Self *)v28, v31);
        v30 = v77;
      }
      while ( *((uint32_t *)v77 + 12) > v29 );
    }
  }
  return G4_VCALL<int>(v77, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::findPhysicsSystemByName  (binary VA: 0x1845ed0)
// Original: hkpPhysicsData::findPhysicsSystemByName
// ----------------------------------------------------------------------------
int hkpPhysicsData::findPhysicsSystemByName(hkpPhysicsData::Self *self, char *a2)
{
  int v2;
  int i;

  v2 = *((uint32_t *)self + 4);
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      if ( (*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 4 * i) + 56) & 0xFFFFFFFE) != 0 )
      {
        if ( hkString::strCasecmp(
               (hkString::Self *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 4 * i) + 56) & 0xFFFFFFFE),
               a2) == 0 )
          return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * i);
        v2 = *((uint32_t *)self + 4);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsData::findRigidBodyByName  (binary VA: 0x1845f50)
// Original: hkpPhysicsData::findRigidBodyByName
// ----------------------------------------------------------------------------
int hkpPhysicsData::findRigidBodyByName(hkpPhysicsData::Self *self, char *a2)
{
  int v2;
  int v3;
  int v4;
  int i;
  int v6;
  int v8;

  v8 = 0;
  v2 = *((uint32_t *)self + 4);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * v8);
      v4 = *(uint32_t *)(v3 + 12);
      if ( v4 > 0 )
      {
        for ( i = 0; i < v4; ++i )
        {
          v6 = *(uint32_t *)(*(uint32_t *)(v3 + 8) + 4 * i);
          if ( (*(uint32_t *)(v6 + 120) & 0xFFFFFFFE) != 0 )
          {
            if ( hkString::strCasecmp((hkString::Self *)(*(uint32_t *)(v6 + 120) & 0xFFFFFFFE), a2) == 0 )
              return v6;
            v4 = *(uint32_t *)(v3 + 12);
          }
        }
        v2 = *((uint32_t *)self + 4);
      }
      ++v8;
    }
    while ( v8 < v2 );
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContextWorldListener::Destroy  (binary VA: 0x18467e0)
// Original: hkpPhysicsContextWorldListener::~hkpPhysicsContextWorldListener
// ----------------------------------------------------------------------------
void hkpPhysicsContextWorldListener::Destroy(hkpPhysicsContextWorldListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3A30);
}

// ----------------------------------------------------------------------------
// Function: hkpPhysicsContextWorldListener::Destroy_ea18468b0  (binary VA: 0x18468b0)
// Original: hkpPhysicsContextWorldListener::~hkpPhysicsContextWorldListener
// ----------------------------------------------------------------------------
void hkpPhysicsContextWorldListener::Destroy_ea18468b0(hkpPhysicsContextWorldListener::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3A30);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpPhysicsContextWorldListener::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}


