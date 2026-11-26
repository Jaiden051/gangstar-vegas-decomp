#include "Core/Utils/DecompTypes.h"
#include "vox_GroupManager.h"

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::Construct  (binary VA: 0x10588c0)
// Original: vox::GroupManager::GroupManager
// ----------------------------------------------------------------------------
void vox::GroupManager::Construct(vox::GroupManager::Self *self)
{
  int v1;
  int v2;
  int v3;
  vox::VoxGroupsSnapshotsManager::Self *v4;
  typedef uint8_t _g4_t_v5[4];
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
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
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v9)) > _g4_s4 ? (16u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v10)) > _g4_s5 ? (20u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v11)) > _g4_s6 ? (24u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v12)) > _g4_s7 ? (28u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v13)) > _g4_s8 ? (32u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v14)) > _g4_s9 ? (36u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v15)) > _g4_s10 ? (40u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v16)) > _g4_s11 ? (44u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v17)) > _g4_s12 ? (48u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (49u + sizeof(_g4_t_v18)) > _g4_s13 ? (49u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v19)) > _g4_s14 ? (52u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v20)) > _g4_s15 ? (56u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v21)) > _g4_s16 ? (60u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v22)) > _g4_s17 ? (64u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v23)) > _g4_s18 ? (68u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v24)) > _g4_s19 ? (72u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v25)) > _g4_s20 ? (76u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v26)) > _g4_s21 ? (80u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v27)) > _g4_s22 ? (84u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v28)) > _g4_s23 ? (88u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v29)) > _g4_s24 ? (92u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v30)) > _g4_s25 ? (96u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v31)) > _g4_s26 ? (100u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v32)) > _g4_s27 ? (104u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v33)) > _g4_s28 ? (108u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v34)) > _g4_s29 ? (112u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v35)) > _g4_s30 ? (116u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v36)) > _g4_s31 ? (120u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v37)) > _g4_s32 ? (124u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v38)) > _g4_s33 ? (128u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v39)) > _g4_s34 ? (132u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v40)) > _g4_s35 ? (136u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v41)) > _g4_s36 ? (140u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v42)) > _g4_s37 ? (144u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v43)) > _g4_s38 ? (148u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v44)) > _g4_s39 ? (152u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (153u + sizeof(_g4_t_v45)) > _g4_s40 ? (153u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v46)) > _g4_s41 ? (156u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (160u + sizeof(_g4_t_v47)) > _g4_s42 ? (160u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (164u + sizeof(_g4_t_v48)) > _g4_s43 ? (164u + sizeof(_g4_t_v48)) : _g4_s43,
    _g4_s45 = (168u + sizeof(_g4_t_v49)) > _g4_s44 ? (168u + sizeof(_g4_t_v49)) : _g4_s44,
    _g4_s46 = (172u + sizeof(_g4_t_v50)) > _g4_s45 ? (172u + sizeof(_g4_t_v50)) : _g4_s45,
    _g4_s47 = (176u + sizeof(_g4_t_v51)) > _g4_s46 ? (176u + sizeof(_g4_t_v51)) : _g4_s46,
    _g4_s48 = (180u + sizeof(_g4_t_v52)) > _g4_s47 ? (180u + sizeof(_g4_t_v52)) : _g4_s47,
    _g4_s49 = (184u + sizeof(_g4_t_v53)) > _g4_s48 ? (184u + sizeof(_g4_t_v53)) : _g4_s48,
    _g4_s50 = (188u + sizeof(_g4_t_v54)) > _g4_s49 ? (188u + sizeof(_g4_t_v54)) : _g4_s49,
    _g4_s51 = (192u + sizeof(_g4_t_v55)) > _g4_s50 ? (192u + sizeof(_g4_t_v55)) : _g4_s50,
    _g4_s52 = (196u + sizeof(_g4_t_v56)) > _g4_s51 ? (196u + sizeof(_g4_t_v56)) : _g4_s51,
    _g4_s53 = (200u + sizeof(_g4_t_v57)) > _g4_s52 ? (200u + sizeof(_g4_t_v57)) : _g4_s52,
    _g4_s54 = (204u + sizeof(_g4_t_v58)) > _g4_s53 ? (204u + sizeof(_g4_t_v58)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 49u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 120u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 124u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 132u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 140u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 144u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 148u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 152u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 153u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 156u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 164u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 168u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 176u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 180u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 184u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 188u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 192u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 196u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 200u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 204u);

  vox::Group::Construct((vox::Group::Self *)v5);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  v1 = VoxAllocInternal(0x68u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  v2 = v1 + 104;
  *(uint32_t *)self = v1;
  *((uint32_t *)self + 1) = v1;
  *((uint32_t *)self + 2) = v1 + 104;
  if ( v1 != 0 )
  {
    *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208DC40);
    *(uint32_t *)(v1 + 4) = v6;
    *(uint32_t *)(v1 + 8) = v7;
    *(uint32_t *)(v1 + 12) = v8;
    *(uint32_t *)(v1 + 16) = v9;
    *(uint32_t *)(v1 + 20) = v10;
    *(uint32_t *)(v1 + 24) = v11;
    *(uint32_t *)(v1 + 28) = v12;
    *(uint32_t *)(v1 + 32) = v13;
    *(uint32_t *)(v1 + 36) = v14;
    *(uint32_t *)(v1 + 40) = v15;
    *(uint32_t *)(v1 + 44) = v16;
    *(uint8_t *)(v1 + 48) = v17;
    *(uint8_t *)(v1 + 49) = v18;
    *(uint32_t *)(v1 + 52) = v19;
    *(uint32_t *)(v1 + 56) = v20;
    *(uint32_t *)(v1 + 60) = v21;
    *(uint32_t *)(v1 + 64) = v22;
    *(uint32_t *)(v1 + 68) = v23;
    *(uint32_t *)(v1 + 72) = v24;
    *(uint32_t *)(v1 + 76) = v25;
    *(uint32_t *)(v1 + 80) = v26;
    *(uint32_t *)(v1 + 84) = v27;
    *(uint32_t *)(v1 + 88) = v28;
    *(uint32_t *)(v1 + 92) = v29;
    *(uint32_t *)(v1 + 96) = v30;
    *(uint32_t *)(v1 + 100) = v31;
    v2 = *((uint32_t *)self + 2);
  }
  *((uint32_t *)self + 1) = v2;
  vox::Group::Destroy((vox::Group::Self *)v5);
  vox::Group::Construct((vox::Group::Self *)v32, 0, "master", 0xFFFFFFFF);
  v3 = *(uint32_t *)self;
  *(uint32_t *)(v3 + 4) = v33;
  *(uint32_t *)(v3 + 8) = v34;
  *(uint32_t *)(v3 + 12) = v35;
  *(uint32_t *)(v3 + 16) = v36;
  *(uint32_t *)(v3 + 20) = v37;
  *(uint32_t *)(v3 + 24) = v38;
  *(uint32_t *)(v3 + 28) = v39;
  *(uint32_t *)(v3 + 32) = v40;
  *(uint32_t *)(v3 + 36) = v41;
  *(uint32_t *)(v3 + 40) = v42;
  *(uint32_t *)(v3 + 44) = v43;
  *(uint8_t *)(v3 + 48) = v44;
  *(uint8_t *)(v3 + 49) = v45;
  *(uint32_t *)(v3 + 52) = v46;
  *(uint32_t *)(v3 + 56) = v47;
  *(uint32_t *)(v3 + 60) = v48;
  *(uint32_t *)(v3 + 64) = v49;
  *(uint8_t *)(v3 + 68) = v50;
  *(uint32_t *)(v3 + 72) = v51;
  *(uint32_t *)(v3 + 76) = v52;
  *(uint32_t *)(v3 + 80) = v53;
  *(uint32_t *)(v3 + 84) = v54;
  *(uint32_t *)(v3 + 88) = v55;
  *(uint8_t *)(v3 + 92) = v56;
  *(uint32_t *)(v3 + 96) = v57;
  *(uint32_t *)(v3 + 100) = v58;
  v4 = (vox::VoxGroupsSnapshotsManager::Self *)VoxAllocInternal(
                                           0x20u,
                                           0,
                                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_group.cpp"),
                                           (int)(uintptr_t)("GroupManager"),
                                           214);
  vox::VoxGroupsSnapshotsManager::VoxGroupsSnapshotsManager(v4);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
  vox::Group::Destroy((vox::Group::Self *)v32);
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::Destroy  (binary VA: 0x1058ba0)
// Original: vox::GroupManager::~GroupManager
// ----------------------------------------------------------------------------
void vox::GroupManager::Destroy(vox::VoxGroupsSnapshotsManager::Self **self)
{
  vox::VoxGroupsSnapshotsManager::Self *v1;
  vox::VoxGroupsSnapshotsManager::Self *v2;
  bool v3;
  void (**v4)(vox::VoxGroupsSnapshotsManager::Self *);
  vox::VoxGroupsSnapshotsManager::Self *v5;

  if ( *(self + 3) != nullptr )
  {
    vox::VoxGroupsSnapshotsManager::Destroy(*(self + 3));
    VoxFreeInternal(*(self + 3));
  }
  v1 = *(self + 1);
  v2 = *self;
  v3 = v1 == *self;
  *(self + 3) = nullptr;
  if ( !v3 )
  {
    do
    {
      v4 = *(void (***)(vox::VoxGroupsSnapshotsManager::Self *))v2;
      v5 = v2;
      v2 = (vox::VoxGroupsSnapshotsManager::Self *)((char *)v2 + 104);
      (*v4)(v5);
    }
    while ( v1 != v2 );
    v2 = *self;
  }
  if ( v2 != nullptr )
    VoxFreeInternal(v2);
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetGroupId  (binary VA: 0x1058c10)
// Original: vox::GroupManager::GetGroupId
// ----------------------------------------------------------------------------
int vox::GroupManager::GetGroupId(vox::GroupManager::Self *self, char *s1)
{
  int v2;
  int v3;
  char *s2;

  v2 = -1;
  if ( s1 != nullptr )
  {
    v3 = *(uint32_t *)self;
    if ( -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) != 0 )
    {
      v2 = 0;
      while ( 1 )
      {
        if ( vox::Group::GetId((vox::Group::Self *)(104 * v2 + v3)) != -1 )
        {
          s2 = vox::Group::GetName((vox::Group::Self *)(*(uint32_t *)self + 104 * v2));
          if ( strncasecmp(s1, s2, 0x1Fu) == 0 )
            break;
        }
        v3 = *(uint32_t *)self;
        if ( ++v2 >= (unsigned int)(-991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3)) )
          return -1;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetGroupName  (binary VA: 0x1058cc0)
// Original: vox::GroupManager::GetGroupName
// ----------------------------------------------------------------------------
int vox::GroupManager::GetGroupName(vox::GroupManager::Self *self, unsigned int a2, char *dest, size_t n)
{
  int v4;
  char *s;
  char *src;
  unsigned int v8;

  v4 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    v8 = 104 * a2;
    if ( vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1 )
    {
      s = vox::Group::GetName((vox::Group::Self *)(*(uint32_t *)self + v8));
      if ( strlen(s) + 1 <= n )
      {
        v4 = 1;
        src = vox::Group::GetName((vox::Group::Self *)(*(uint32_t *)self + v8));
        strncpy(dest, src, n);
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::IsChild  (binary VA: 0x1058d80)
// Original: vox::GroupManager::IsChild
// ----------------------------------------------------------------------------
int vox::GroupManager::IsChild(vox::GroupManager::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  int Parent;

  v3 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    v3 = 1;
    if ( a2 != a3 )
    {
      Parent = vox::Group::GetParent((vox::Group::Self *)(104 * a2 + *(uint32_t *)self));
      v3 = 0;
      if ( Parent != -1 )
      {
        v3 = 1;
        if ( a3 != Parent )
        {
          do
          {
            Parent = vox::Group::GetParent((vox::Group::Self *)(*(uint32_t *)self + 104 * Parent));
            if ( Parent == -1 )
              return 0;
          }
          while ( a3 != Parent );
          return 1;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::IsGroupValid  (binary VA: 0x1058e30)
// Original: vox::GroupManager::IsGroupValid
// ----------------------------------------------------------------------------
bool vox::GroupManager::IsGroupValid(vox::GroupManager::Self *self, unsigned int a2)
{
  bool result;

  result = false;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
    return vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::ReconfigureGroup  (binary VA: 0x1058e90)
// Original: vox::GroupManager::ReconfigureGroup
// ----------------------------------------------------------------------------
int vox::GroupManager::ReconfigureGroup(vox::GroupManager::Self *a1, unsigned int a2, int a3)
{
  int v3;
  unsigned int v5;
  int v6;
  int v7;

  v3 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3) )
  {
    v6 = 104 * a2;
    if ( vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)a1)) != -1 && *(uint32_t *)a3 != 0 )
    {
      v3 = 1;
      vox::Group::SetEnable((vox::Group::Self *)(*(uint32_t *)a1 + v6), *(uint8_t *)(a3 + 16), 0.0);
      vox::Group::SetVolume((vox::Group::Self *)(*(uint32_t *)a1 + v6), *(float *)(a3 + 8), 0.0);
      vox::Group::SetName((vox::Group::Self *)(*(uint32_t *)a1 + v6), *(char **)a3);
      vox::Group::SetPitch((vox::Group::Self *)(*(uint32_t *)a1 + v6), *(float *)(a3 + 12), 0.0);
      v7 = *(uint32_t *)(a3 + 4);
      if ( v7 != vox::Group::GetParent((vox::Group::Self *)(*(uint32_t *)a1 + v6)) )
      {
        v5 = *(uint32_t *)(a3 + 4);
        if ( __PAIR64__(v5, a2) != 0 )
        {
          v3 = 0;
          if ( v5 < -991146299 * ((*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3) && (a2 == 0 || a2 != v5) )
          {
            if ( a2 != 0 || (v3 = 0, v5 == 0) )
            {
              v3 = 0;
              if ( (uint8_t)vox::GroupManager::IsChild(a1, v5, a2) == 0 )
              {
                v3 = 1;
                vox::Group::SetParent((vox::Group::Self *)(*(uint32_t *)a1 + v6), *(uint32_t *)(a3 + 4));
              }
            }
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetEnable  (binary VA: 0x1059020)
// Original: vox::GroupManager::GetEnable
// ----------------------------------------------------------------------------
int vox::GroupManager::GetEnable(vox::GroupManager::Self *self, unsigned int a2)
{
  int v2;

  v2 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3)
    && vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1 )
  {
    return vox::Group::GetEnable((vox::Group::Self *)(*(uint32_t *)self + 104 * a2));
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::SetEnable  (binary VA: 0x10590a0)
// Original: vox::GroupManager::SetEnable
// ----------------------------------------------------------------------------
int vox::GroupManager::SetEnable(vox::GroupManager::Self *self, unsigned int a2, bool a3, float a4)
{
  int v4;

  v4 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3)
    && vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1 )
  {
    v4 = 1;
    vox::Group::SetEnable((vox::Group::Self *)(*(uint32_t *)self + 104 * a2), a3, a4);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetVolume  (binary VA: 0x1059140)
// Original: vox::GroupManager::GetVolume
// ----------------------------------------------------------------------------
long double vox::GroupManager::GetVolume(vox::GroupManager::Self *self, unsigned int a2)
{
  long double result; // fst7

  result = 0.0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    result = (float)0.0;
    if ( vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1 )
      return vox::Group::GetVolume((vox::Group::Self *)(*(uint32_t *)self + 104 * a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::SetVolume  (binary VA: 0x10591c0)
// Original: vox::GroupManager::SetVolume
// ----------------------------------------------------------------------------
int vox::GroupManager::SetVolume(vox::GroupManager::Self *self, unsigned int a2, float a3, float a4)
{
  int v4;
  unsigned int v6;

  v4 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    v6 = 104 * a2;
    if ( vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1
      && (uint8_t)vox::Group::IsSnapshotControlled((vox::Group::Self *)(v6 + *(uint32_t *)self)) == 0 )
    {
      v4 = 1;
      vox::Group::SetVolume((vox::Group::Self *)(*(uint32_t *)self + v6), a3, a4);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetPitch  (binary VA: 0x1059260)
// Original: vox::GroupManager::GetPitch
// ----------------------------------------------------------------------------
long double vox::GroupManager::GetPitch(vox::GroupManager::Self *self, unsigned int a2)
{
  long double result; // fst7

  result = 0.0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    result = (float)0.0;
    if ( vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1 )
      return vox::Group::GetPitch((vox::Group::Self *)(*(uint32_t *)self + 104 * a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::SetPitch  (binary VA: 0x10592e0)
// Original: vox::GroupManager::SetPitch
// ----------------------------------------------------------------------------
int vox::GroupManager::SetPitch(vox::GroupManager::Self *self, unsigned int a2, float a3, float a4)
{
  int v4;

  v4 = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3)
    && vox::Group::GetId((vox::Group::Self *)(104 * a2 + *(uint32_t *)self)) != -1 )
  {
    v4 = 1;
    vox::Group::SetPitch((vox::Group::Self *)(*(uint32_t *)self + 104 * a2), a3, a4);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetEffectiveVolume  (binary VA: 0x1059370)
// Original: vox::GroupManager::GetEffectiveVolume
// ----------------------------------------------------------------------------
long double vox::GroupManager::GetEffectiveVolume(vox::GroupManager::Self *self, unsigned int a2)
{
  float v2; // xmm0_4
  long double FaderVolume; // fst7
  int v5;
  int v6;
  float v7;
  int Parent;
  float i;

  v2 = 1.0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    Parent = vox::Group::GetParent((vox::Group::Self *)(104 * a2 + *(uint32_t *)self));
    FaderVolume = vox::Group::GetFaderVolume((vox::Group::Self *)(*(uint32_t *)self + 104 * a2));
    v5 = Parent;
    for ( i = FaderVolume; v5 != -1; v5 = vox::Group::GetParent((vox::Group::Self *)(*(uint32_t *)self + v6)) )
    {
      v6 = 104 * v5;
      v7 = vox::Group::GetFaderVolume((vox::Group::Self *)(104 * v5 + *(uint32_t *)self));
      i = v7 * i;
    }
    return fminf(i, 2.0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetEffectivePitch  (binary VA: 0x1059430)
// Original: vox::GroupManager::GetEffectivePitch
// ----------------------------------------------------------------------------
long double vox::GroupManager::GetEffectivePitch(vox::GroupManager::Self *self, unsigned int a2)
{
  float v2; // xmm0_4
  long double FaderPitch; // fst7
  int v5;
  int v6;
  float v7;
  int Parent;
  float i;

  v2 = 1.0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
  {
    Parent = vox::Group::GetParent((vox::Group::Self *)(104 * a2 + *(uint32_t *)self));
    FaderPitch = vox::Group::GetFaderPitch((vox::Group::Self *)(*(uint32_t *)self + 104 * a2));
    v5 = Parent;
    for ( i = FaderPitch; v5 != -1; v5 = vox::Group::GetParent((vox::Group::Self *)(*(uint32_t *)self + v6)) )
    {
      v6 = 104 * v5;
      v7 = vox::Group::GetFaderPitch((vox::Group::Self *)(104 * v5 + *(uint32_t *)self));
      i = v7 * i;
    }
    return fminf(i, 2.0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::Update  (binary VA: 0x10594f0)
// Original: vox::GroupManager::Update
// ----------------------------------------------------------------------------
int vox::GroupManager::Update(vox::GroupManager::Self *self, float a2)
{
  vox::VoxGroupsSnapshotsManager::Self *v2;
  int result;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;

  v2 = *((vox::VoxGroupsSnapshotsManager::Self **)self + 3);
  if ( v2 != nullptr )
    vox::VoxGroupsSnapshotsManager::Update(v2, a2, self);
  result = *(uint32_t *)self;
  if ( -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) != 0 )
  {
    v4 = 0;
    do
    {
      if ( vox::Group::GetId((vox::Group::Self *)(104 * v4 + result)) != -1 )
        vox::Group::Update((vox::Group::Self *)(*(uint32_t *)self + 104 * v4), a2);
      result = *(uint32_t *)self;
      ++v4;
      v5 = -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3);
    }
    while ( v4 < v5 );
    if ( v5 != 0 )
    {
      v6 = 0;
      do
      {
        v7 = 104 * v6;
        if ( vox::Group::GetId((vox::Group::Self *)(104 * v6 + result)) != -1 )
        {
          v9 = v7 + *(uint32_t *)self;
          *(float *)(v9 + 96) = vox::GroupManager::GetEffectiveVolume(self, v6);
          v8 = *(uint32_t *)self + v7;
          *(float *)(v8 + 100) = vox::GroupManager::GetEffectivePitch(self, v6);
        }
        result = *(uint32_t *)self;
        ++v6;
      }
      while ( v6 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::Serialize  (binary VA: 0x10595f0)
// Original: vox::GroupManager::Serialize
// ----------------------------------------------------------------------------
int vox::GroupManager::Serialize(int *a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  void *v12;
  int v14;
  int v15;
  int v16;

  v3 = *(uint32_t *)(a2 + 200);
  v15 = a2 + 12;
  if ( v3 != a2 + 200 && *(uint8_t *)(v3 + 8) != 0 )
  {
    v14 = *(uint32_t *)(a2 + 192);
    if ( v14 == a2 + 192 )
      goto LABEL_8;
    if ( *(uint8_t *)(v14 + 8) != 0 )
      *(uint8_t *)(v14 + 8) = 0;
    else
      g4_std_compat::ostream_write(v15, ",", 1);
  }
  v4 = *(uint32_t *)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v4);
  v6 = *(uint32_t *)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 1;
  sub_1901920(v7, v6);
  g4_std_compat::ostream_write(v15, "[", 1);
LABEL_8:
  v8 = *a1;
  v16 = -991146299 * ((a1[1] - *a1) >> 3);
  if ( v16 != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = v8 + 104 * v9++;
      vox::Group::Serialize(v10, a2, a3);
      if ( v9 == v16 )
        break;
      v8 = *a1;
    }
  }
  v11 = *(void **)(a2 + 192);
  if ( v11 != (void *)(a2 + 192) && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(*(uint32_t *)(a2 + 192));
    opDelete(v11);
    v12 = *(void **)(a2 + 200);
    sub_1901940(v12);
    opDelete(v12);
    g4_std_compat::ostream_write(a2 + 12, "]", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetGroupName  (binary VA: 0x10597c0)
// Original: vox::GroupManager::GetGroupName
// ----------------------------------------------------------------------------
char * vox::GroupManager::GetGroupName(vox::GroupManager::Self *self, unsigned int a2)
{
  char *result;

  result = nullptr;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
    return vox::Group::GetName((vox::Group::Self *)(104 * a2 + *(uint32_t *)self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::LoadSnapshotConfiguration  (binary VA: 0x1059810)
// Original: vox::GroupManager::LoadSnapshotConfiguration
// ----------------------------------------------------------------------------
int vox::GroupManager::LoadSnapshotConfiguration(vox::GroupManager::Self *self, const char *a2)
{
  int result;
  vox::VoxGroupsSnapshotsManager::Self *v3;

  result = 0;
  v3 = *((vox::VoxGroupsSnapshotsManager::Self **)self + 3);
  if ( v3 != nullptr )
    return vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration(v3, a2, self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::PushGroupSnapshot  (binary VA: 0x1059850)
// Original: vox::GroupManager::PushGroupSnapshot
// ----------------------------------------------------------------------------
int vox::GroupManager::PushGroupSnapshot(vox::GroupManager::Self *self, char *a2)
{
  int result;
  int v3;

  result = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
    return vox::VoxGroupsSnapshotsManager::PushGroupSnapshot(v3, a2, (int)(uintptr_t)(self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::PopGroupSnapshot  (binary VA: 0x1059890)
// Original: vox::GroupManager::PopGroupSnapshot
// ----------------------------------------------------------------------------
int vox::GroupManager::PopGroupSnapshot(vox::GroupManager::Self *self, char *a2)
{
  int result;
  int v3;

  result = 0;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
    return vox::VoxGroupsSnapshotsManager::PopGroupSnapshot(v3, a2, (int)(uintptr_t)(self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::ResetGroupSnapshot  (binary VA: 0x10598d0)
// Original: vox::GroupManager::ResetGroupSnapshot
// ----------------------------------------------------------------------------
vox::VoxGroupsSnapshotsManager::Self * vox::GroupManager::ResetGroupSnapshot(vox::GroupManager::Self *self)
{
  vox::VoxGroupsSnapshotsManager::Self *result;

  result = *((vox::VoxGroupsSnapshotsManager::Self **)self + 3);
  if ( result != nullptr )
    return (vox::VoxGroupsSnapshotsManager::Self *)vox::VoxGroupsSnapshotsManager::Reset(result, self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::SetSnapshotControlled  (binary VA: 0x1059900)
// Original: vox::GroupManager::SetSnapshotControlled
// ----------------------------------------------------------------------------
unsigned int vox::GroupManager::SetSnapshotControlled(vox::GroupManager::Self *self, unsigned int a2, bool a3)
{
  unsigned int result;

  result = -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3);
  if ( a2 < result )
    return (unsigned int)(uintptr_t)(vox::Group::SetSnapshotControlled((vox::Group::Self *)(104 * a2 + *(uint32_t *)self), a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::IsSnapshotControlled  (binary VA: 0x1059960)
// Original: vox::GroupManager::IsSnapshotControlled
// ----------------------------------------------------------------------------
int vox::GroupManager::IsSnapshotControlled(vox::GroupManager::Self *self, unsigned int a2)
{
  int result;

  result = 0;
  if ( a2 < -991146299 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3) )
    return vox::Group::IsSnapshotControlled((vox::Group::Self *)(104 * a2 + *(uint32_t *)self));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::GetGroupArray  (binary VA: 0x10599b0)
// Original: vox::GroupManager::GetGroupArray
// ----------------------------------------------------------------------------
vox::GroupManager::Self * vox::GroupManager::GetGroupArray(vox::GroupManager::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::GroupManager::AddGroup  (binary VA: 0x10599c0)
// Original: vox::GroupManager::AddGroup
// ----------------------------------------------------------------------------
int vox::GroupManager::AddGroup(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  unsigned int v4;
  unsigned int v5;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  vox::Group::Self *v13;
  void (**v14)(vox::Group::Self *);
  vox::VoxGroupsSnapshotsManager::Self *v15;
  typedef vox::Group::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef vox::Group::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[104];
  typedef char _g4_t_v24[4];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v17)) > _g4_s1 ? (24u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v23)) > _g4_s7 ? (48u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (152u + sizeof(_g4_t_v24)) > _g4_s8 ? (152u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (156u + sizeof(_g4_t_v25)) > _g4_s9 ? (156u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (160u + sizeof(_g4_t_v26)) > _g4_s10 ? (160u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (164u + sizeof(_g4_t_v27)) > _g4_s11 ? (164u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (168u + sizeof(_g4_t_v28)) > _g4_s12 ? (168u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (172u + sizeof(_g4_t_v29)) > _g4_s13 ? (172u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (176u + sizeof(_g4_t_v30)) > _g4_s14 ? (176u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v31)) > _g4_s15 ? (180u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (184u + sizeof(_g4_t_v32)) > _g4_s16 ? (184u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (188u + sizeof(_g4_t_v33)) > _g4_s17 ? (188u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v34)) > _g4_s18 ? (192u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (196u + sizeof(_g4_t_v35)) > _g4_s19 ? (196u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (200u + sizeof(_g4_t_v36)) > _g4_s20 ? (200u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (201u + sizeof(_g4_t_v37)) > _g4_s21 ? (201u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (204u + sizeof(_g4_t_v38)) > _g4_s22 ? (204u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (208u + sizeof(_g4_t_v39)) > _g4_s23 ? (208u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (212u + sizeof(_g4_t_v40)) > _g4_s24 ? (212u + sizeof(_g4_t_v40)) : _g4_s24,
    _g4_s26 = (216u + sizeof(_g4_t_v41)) > _g4_s25 ? (216u + sizeof(_g4_t_v41)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v42)) > _g4_s26 ? (220u + sizeof(_g4_t_v42)) : _g4_s26,
    _g4_s28 = (224u + sizeof(_g4_t_v43)) > _g4_s27 ? (224u + sizeof(_g4_t_v43)) : _g4_s27,
    _g4_s29 = (228u + sizeof(_g4_t_v44)) > _g4_s28 ? (228u + sizeof(_g4_t_v44)) : _g4_s28,
    _g4_s30 = (232u + sizeof(_g4_t_v45)) > _g4_s29 ? (232u + sizeof(_g4_t_v45)) : _g4_s29,
    _g4_s31 = (236u + sizeof(_g4_t_v46)) > _g4_s30 ? (236u + sizeof(_g4_t_v46)) : _g4_s30,
    _g4_s32 = (240u + sizeof(_g4_t_v47)) > _g4_s31 ? (240u + sizeof(_g4_t_v47)) : _g4_s31,
    _g4_s33 = (244u + sizeof(_g4_t_v48)) > _g4_s32 ? (244u + sizeof(_g4_t_v48)) : _g4_s32,
    _g4_s34 = (248u + sizeof(_g4_t_v49)) > _g4_s33 ? (248u + sizeof(_g4_t_v49)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v50)) > _g4_s34 ? (252u + sizeof(_g4_t_v50)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 152u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 156u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 160u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 164u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 168u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 172u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 176u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 180u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 184u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 188u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 192u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 196u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 200u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 201u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 204u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 208u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 212u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 216u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 220u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 224u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 228u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 232u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 236u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 240u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 244u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 248u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 252u);

  v2 = a2;
  v3 = a1;
  v4 = 0xFFFFFFFF;
  if ( *a2 != 0 )
  {
    v5 = a2[1];
    if ( v5 < -991146299 * ((a1[1] - *a1) >> 3) && vox::Group::GetId((vox::Group::Self *)(104 * v5 + *a1)) != -1 )
    {
      v7 = *a1;
      v8 = 0;
      v4 = 0;
      if ( -991146299 * ((a1[1] - *a1) >> 3) == 0 )
        goto LABEL_6;
      do
      {
        if ( vox::Group::GetId((vox::Group::Self *)(104 * v4 + v7)) == -1 )
          break;
        v7 = *a1;
        ++v4;
      }
      while ( v4 < -991146299 * ((a1[1] - *a1) >> 3) );
      if ( v4 > 0x1F4 )
        return -1;
      v8 = 104 * v4;
      if ( -991146299 * ((a1[1] - *a1) >> 3) <= v4 )
      {
LABEL_6:
        v17 = v8;
        vox::Group::Construct((vox::Group::Self *)v23);
        v9 = v4 + 1;
        v20 = (vox::Group::Self *)a1[1];
        v10 = v17;
        v11 = -991146299 * (((int)(uintptr_t)(v20) - *a1) >> 3);
        if ( v4 + 1 > v11 )
        {
          g4_std::vector_vox_Group_vox_SAllocator_af16e1::M_fill_insert(
            a1,
            v20,
            v9 - -991146299 * (((int)(uintptr_t)(v20) - *a1) >> 3),
            v23);
          v10 = v17;
        }
        else if ( v4 + 1 < v11 )
        {
          v21 = *a1 + 104 * v9;
          v12 = v21;
          if ( v20 != (vox::Group::Self *)v21 )
          {
            v13 = (vox::Group::Self *)(*a1 + 104 * v9);
            do
            {
              v14 = *(void (***)(vox::Group::Self *))v13;
              v16 = v13;
              v13 = (vox::Group::Self *)((char *)v13 + 104);
              (*v14)(v16);
            }
            while ( v20 != v13 );
            v10 = v17;
            v3 = a1;
            v2 = a2;
            v12 = v21;
          }
          v3[1] = v12;
        }
        v18 = v10;
        vox::Group::Destroy((vox::Group::Self *)v23);
        v8 = v18;
      }
      v19 = v8;
      vox::Group::Construct((vox::Group::Self *)v24, v4, (char *)*v2, v2[1]);
      v22 = v19 + *v3;
      *(uint32_t *)(v22 + 4) = v25;
      *(uint32_t *)(v22 + 8) = v26;
      *(uint32_t *)(v22 + 12) = v27;
      *(uint32_t *)(v22 + 16) = v28;
      *(uint32_t *)(v22 + 20) = v29;
      *(uint32_t *)(v22 + 24) = v30;
      *(uint32_t *)(v22 + 28) = v31;
      *(uint32_t *)(v22 + 32) = v32;
      *(uint32_t *)(v22 + 36) = v33;
      *(uint32_t *)(v22 + 40) = v34;
      *(uint32_t *)(v22 + 44) = v35;
      *(uint8_t *)(v22 + 48) = v36;
      *(uint8_t *)(v22 + 49) = v37;
      *(uint32_t *)(v22 + 52) = v38;
      *(uint32_t *)(v22 + 56) = v39;
      *(uint32_t *)(v22 + 60) = v40;
      *(uint32_t *)(v22 + 64) = v41;
      *(uint8_t *)(v22 + 68) = v42;
      *(uint32_t *)(v22 + 72) = v43;
      *(uint32_t *)(v22 + 76) = v44;
      *(uint32_t *)(v22 + 80) = v45;
      *(uint32_t *)(v22 + 84) = v46;
      *(uint32_t *)(v22 + 88) = v47;
      *(uint8_t *)(v22 + 92) = v48;
      *(uint32_t *)(v22 + 96) = v49;
      *(uint32_t *)(v22 + 100) = v50;
      vox::Group::Destroy((vox::Group::Self *)v24);
      vox::Group::SetVolume((vox::Group::Self *)(v19 + *v3), *((float *)v2 + 2), 0.0);
      vox::Group::SetEnable((vox::Group::Self *)(v19 + *v3), *((uint8_t *)v2 + 16), 0.0);
      vox::Group::SetPitch((vox::Group::Self *)(v19 + *v3), *((float *)v2 + 3), 0.0);
      v15 = (vox::VoxGroupsSnapshotsManager::Self *)v3[3];
      if ( v15 != nullptr )
        vox::VoxGroupsSnapshotsManager::AddGroup(v15, (vox::Group::Self *)(*v3 + v19), (vox::Group::Self *)(*v3 + 104 * v2[1]));
    }
  }
  return v4;
}


