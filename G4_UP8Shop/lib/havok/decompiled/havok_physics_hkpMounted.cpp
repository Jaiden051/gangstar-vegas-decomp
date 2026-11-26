#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMounted.h"

// ----------------------------------------------------------------------------
// Function: hkpMountedBallGun::staticClass  (binary VA: 0x18313e0)
// Original: hkpMountedBallGun::staticClass
// ----------------------------------------------------------------------------
void * hkpMountedBallGun::staticClass()
{
  return &hkpMountedBallGunClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMountedBallGun::Destroy  (binary VA: 0x18484d0)
// Original: hkpMountedBallGun::~hkpMountedBallGun
// ----------------------------------------------------------------------------
void hkpMountedBallGun::Destroy(hkpMountedBallGun::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3C68);
  hkpBallGun::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMountedBallGun::Destroy_ea1848500  (binary VA: 0x1848500)
// Original: hkpMountedBallGun::~hkpMountedBallGun
// ----------------------------------------------------------------------------
void hkpMountedBallGun::Destroy_ea1848500(hkpMountedBallGun::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3C68);
  hkpBallGun::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMountedBallGun::fireGun  (binary VA: 0x1848570)
// Original: hkpMountedBallGun::fireGun
// ----------------------------------------------------------------------------
uint32_t * hkpMountedBallGun::fireGun(hkpMountedBallGun::Self *self, hkpWorld::Self *a2, const hkTransformf::Self *a3)
{
  hkpMountedBallGun::Self *v3;
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm7_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  hkpSphereShape::Self *v10;
  int v11;
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  hkpSphereShape::Self *v17;
  int v18;
  int32_t v19; // kr00_4
  int32_t v20;
  int32_t v21; // ett
  hkpEntity::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  hkString::Self *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *result;
  int v33;
  int v34;
  int v35;
  bool v36;
  hkpMountedBallGun::Self *v37;
  int v38;
  int v39;
  int v40;
  hkpEntity::Self *v41;
  int v42;
  int32_t v43; // kr04_4
  int32_t v44;
  int32_t v45; // ett
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  float *savedregs;
  g4_int128_t *retaddr;
  typedef size_t _g4_t_v52;
  typedef int _g4_t_address;
  typedef hkpRigidBodyCinfo::Self *_g4_t_v54;
  typedef hkpRigidBodyCinfo::Self *_g4_t_v55;
  typedef hkpRigidBodyCinfo::Self *_g4_t_v56;
  typedef hkpRigidBodyCinfo::Self *_g4_t_v57;
  typedef hkpWorld::Self *_g4_t_v58;
  typedef hkpWorld::Self *_g4_t_v59;
  typedef hkpWorld::Self *_g4_t_v60;
  typedef hkpWorld::Self *_g4_t_v61;
  typedef hkpWorld::Self *_g4_t_v62;
  typedef hkpWorld::Self *_g4_t_v63;
  typedef float _g4_t_v64;
  typedef volatile int32_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef hkString::Self *_g4_t_v68;
  typedef hkString::Self *_g4_t_v69;
  typedef float _g4_t_v70;
  typedef hkpEntity::Self *_g4_t_v71;
  typedef hkpEntity::Self *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef int _g4_t_v74;
  typedef float _g4_t_v75[4];
  typedef float _g4_t_v76[4];
  typedef g4_int128_t _g4_t_v77;
  typedef g4_int128_t _g4_t_v78[3];
  typedef char _g4_t_v79[4];
  typedef hkpSphereShape::Self *_g4_t_v80;
  typedef uint32_t _g4_t_v81[8];
  typedef float _g4_t_v82[24];
  typedef float _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef char _g4_t_v88;
  typedef int _g4_t_v89;
  typedef char _g4_t_v90;
  typedef hkString::Self *_g4_t_v91;
  typedef hkpWorld::Self *_g4_t_v92;
  typedef float *_g4_t_v93;
  typedef int _g4_t_v94;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_address)) > _g4_s1 ? (4u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v54)) > _g4_s2 ? (8u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v55)) > _g4_s3 ? (8u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v56)) > _g4_s4 ? (8u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v57)) > _g4_s5 ? (8u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v58)) > _g4_s6 ? (12u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v59)) > _g4_s7 ? (12u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v60)) > _g4_s8 ? (12u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v61)) > _g4_s9 ? (12u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v62)) > _g4_s10 ? (12u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v63)) > _g4_s11 ? (12u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v64)) > _g4_s12 ? (16u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v65)) > _g4_s13 ? (16u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v66)) > _g4_s14 ? (16u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v67)) > _g4_s15 ? (16u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v68)) > _g4_s16 ? (16u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v69)) > _g4_s17 ? (16u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v70)) > _g4_s18 ? (20u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v71)) > _g4_s19 ? (20u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v72)) > _g4_s20 ? (20u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (27u + sizeof(_g4_t_v73)) > _g4_s21 ? (27u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v74)) > _g4_s22 ? (28u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v75)) > _g4_s23 ? (32u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v76)) > _g4_s24 ? (48u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v77)) > _g4_s25 ? (64u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v78)) > _g4_s26 ? (80u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v79)) > _g4_s27 ? (128u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v80)) > _g4_s28 ? (132u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v81)) > _g4_s29 ? (144u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v82)) > _g4_s30 ? (176u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (272u + sizeof(_g4_t_v83)) > _g4_s31 ? (272u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (276u + sizeof(_g4_t_v84)) > _g4_s32 ? (276u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (280u + sizeof(_g4_t_v85)) > _g4_s33 ? (280u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v86)) > _g4_s34 ? (288u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (296u + sizeof(_g4_t_v87)) > _g4_s35 ? (296u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (308u + sizeof(_g4_t_v88)) > _g4_s36 ? (308u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (312u + sizeof(_g4_t_v89)) > _g4_s37 ? (312u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (328u + sizeof(_g4_t_v90)) > _g4_s38 ? (328u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (344u + sizeof(_g4_t_v91)) > _g4_s39 ? (344u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (348u + sizeof(_g4_t_v92)) > _g4_s40 ? (348u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (352u + sizeof(_g4_t_v93)) > _g4_s41 ? (352u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (356u + sizeof(_g4_t_v94)) > _g4_s42 ? (356u + sizeof(_g4_t_v94)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 27u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 64u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 132u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 144u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 176u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 272u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 276u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 280u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 288u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 296u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 308u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 312u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 328u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 344u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 348u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 352u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 356u);

  v91 = (hkString::Self *)&self;
  v58 = a2;
  v3 = self;
  v4 = *(float *)a3;
  v5 = *((float *)a3 + 14) + *((float *)a3 + 2);
  v6 = *((float *)a3 + 12);
  v64 = *((float *)a3 + 2);
  v7 = *((float *)a3 + 15) + *((float *)a3 + 3);
  v70 = *((float *)a3 + 3);
  v8 = *((float *)a3 + 1);
  v9 = *((float *)a3 + 13);
  v75[0] = v6 + *(float *)a3;
  v75[1] = v9 + v8;
  v76[0] = (float)(v6 + v4) + (float)(v4 * 200.0);
  v75[2] = v5;
  v75[3] = v7;
  v76[1] = (float)(v9 + v8) + (float)(v8 * 200.0);
  v76[2] = (float)(v64 * 200.0) + v5;
  v76[3] = (float)(200.0 * v70) + v7;
  hkpRigidBodyCinfo::Construct((hkpRigidBodyCinfo::Self *)v79);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v10 = (hkpSphereShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)address + 44),
                            32);
  hkpSphereShape::Construct(v10, *((float *)v3 + 8));
  v11 = *((uint32_t *)v3 + 24);
  v83 = *((float *)v3 + 10);
  v81[0] = v11;
  v81[1] = *((uint32_t *)v3 + 25);
  v81[2] = *((uint32_t *)v3 + 26);
  v81[3] = *((uint32_t *)v3 + 27);
  v80 = v10;
  v90 = 6;
  v89 = 1008981770;
  v87 = 1045220557;
  v86 = 1065353216;
  v88 = 2;
  hkpInertiaTensorComputer::setShapeVolumeMassProperties(v10, COERCE_UNSIGNED_INT(v83 + v83), COERCE_FLOAT(v79));
  v12 = *((float *)v3 + 10);
  savedregs = v76;
  retaddr = v78;
  v94 = 1028443341;
  v93 = v75;
  v92 = v58;
  v84 = 0;
  v83 = v12;
  v85 = 1053609165;
  hkpFirstPersonGun::sweepSphere(&v74);
  if ( v74 != 0 )
  {
    v13 = *((float *)v3 + 9);
    v82[0] = v4 * v13;
    v82[1] = v8 * v13;
    v82[2] = v64 * v13;
    v82[3] = v13 * v70;
  }
  else
  {
    savedregs = v82;
    hkpFirstPersonGun::calcVelocityToTarget(
      (hkpFirstPersonGun::Self *)v81,
      (const hkVector4f::Self *)v78,
      (hkpWorld::Self *)((char *)v58 + 16),
      *((float *)v3 + 9),
      v82);
  }
  v14 = *((uint32_t *)v3 + 6);
  v77 = v78[0];
  v15 = 0;
  if ( v14 > 0 )
  {
    do
    {
      v16 = *(uint32_t *)(*((uint32_t *)v3 + 5) + 4 * v15++);
      G4_VCALL<void>(v16, 28, (int)(uintptr_t)(v3) + 96, &v77);
    }
    while ( *((uint32_t *)v3 + 6) > v15 );
  }
  v71 = (hkpEntity::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       544);
  hkpRigidBody::Construct(v71, (const hkpRigidBodyCinfo::Self *)v79);
  v17 = v80;
  if ( *((uint16_t *)v80 + 3) != 0 )
  {
    v65 = (volatile int32_t *)((char *)v80 + 4);
    do
    {
      v19 = *((uint32_t *)v17 + 1);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
      v20 = v18 | (uint16_t)(v19 - 1);
      v21 = v19;
    }
    while ( v21 != __sync_val_compare_and_swap(v65, v21, v20) );
    if ( (uint16_t)v20 == 0 )
      G4_VCALL<void>(v17, 16);
  }
  v22 = v71;
  *((uint32_t *)v71 + 38) = *((uint32_t *)v3 + 11);
  v23 = 0;
  if ( *((int *)v3 + 6) > 0 )
  {
    do
    {
      v24 = *(uint32_t *)(*((uint32_t *)v3 + 5) + 4 * v23++);
      G4_VCALL<void>(v24, 20, v71);
    }
    while ( *((uint32_t *)v3 + 6) > v23 );
    v22 = v71;
  }
  hkpWorld::addEntity(v58, v22, 1);
  v25 = *((uint32_t *)v3 + 20);
  v26 = *(uint32_t *)(v25 + 4);
  if ( *(uint32_t *)(v25 + 16) < v26 )
  {
LABEL_14:
    v27 = *(hkString::Self **)v25;
    goto LABEL_15;
  }
  if ( v26 != 0 )
  {
    v67 = 2 * v26;
    if ( v26 < 2 * v26 )
    {
      v27 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)address + 44),
                          8 * v26);
      v59 = *(hkpWorld::Self **)v25;
      if ( v27 != nullptr && *(uint32_t *)v25 != 0 )
      {
        v46 = *(uint32_t *)(v25 + 16);
        if ( v46 != 0 )
        {
          v54 = *(hkpRigidBodyCinfo::Self **)(v25 + 12);
          v47 = *(uint32_t *)(v25 + 8);
          if ( (int)(uintptr_t)(v54) > v47 )
          {
            v91 = v27;
            v93 = (float *)(4 * v46);
            v55 = (hkpRigidBodyCinfo::Self *)(v27);
            v92 = (hkpWorld::Self *)((char *)v59 + 4 * v47);
          }
          else
          {
            v52 = 4 * (*(uint32_t *)(v25 + 4) - v47);
            v60 = (hkpWorld::Self *)(v27);
            hkString::memCpy(v27, (void *)(*(uint32_t *)v25 + 4 * v47), v52);
            v93 = (float *)(4 * (uint32_t)(uintptr_t)(v54));
            v92 = *(hkpWorld::Self **)v25;
            v55 = (hkpRigidBodyCinfo::Self *)(v60);
            v91 = (hkString::Self *)((hkpWorld::Self *)((char *)v60 + v52));
          }
          hkString::memCpy(v91, v92, (size_t)v93);
          v46 = *(uint32_t *)(v25 + 16);
          v59 = *(hkpWorld::Self **)v25;
          v27 = (hkString::Self *)(v55);
        }
        *(uint32_t *)(v25 + 8) = 0;
        *(uint32_t *)(v25 + 12) = v46;
      }
      v48 = *(uint32_t *)(v25 + 4);
      if ( v48 != 0 )
      {
        v57 = (hkpRigidBodyCinfo::Self *)(v27);
        (*(void (**)(uint32_t, hkpWorld::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v59,
          4 * v48);
        v27 = (hkString::Self *)(v57);
      }
      v28 = *(uint32_t *)(v25 + 12);
      *(uint32_t *)v25 = (uint32_t)(uintptr_t)(v27);
      *(uint32_t *)(v25 + 4) = v67;
      if ( v28 != v67 )
        goto LABEL_16;
      goto LABEL_40;
    }
    goto LABEL_14;
  }
  v27 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)address + 44),
                      32);
  v68 = *(hkString::Self **)v25;
  if ( v27 != nullptr && *(uint32_t *)v25 != 0 )
  {
    v49 = *(uint32_t *)(v25 + 16);
    if ( v49 != 0 )
    {
      v61 = *(hkpWorld::Self **)(v25 + 12);
      v50 = *(uint32_t *)(v25 + 8);
      if ( (int)(uintptr_t)(v61) > v50 )
      {
        v91 = v27;
        v93 = (float *)(4 * v49);
        v62 = (hkpWorld::Self *)(v27);
        v92 = (hkpWorld::Self *)((hkString::Self *)((char *)v68 + 4 * v50));
      }
      else
      {
        v56 = (hkpRigidBodyCinfo::Self *)(4 * (*(uint32_t *)(v25 + 4) - v50));
        v69 = v27;
        hkString::memCpy(v27, (void *)(*(uint32_t *)v25 + 4 * v50), (size_t)v56);
        v93 = (float *)(4 * (uint32_t)(uintptr_t)(v61));
        v92 = *(hkpWorld::Self **)v25;
        v62 = (hkpWorld::Self *)(v69);
        v91 = (hkString::Self *)((hkpRigidBodyCinfo::Self *)((char *)v56 + (uint32_t)(uintptr_t)(v69)));
      }
      hkString::memCpy(v91, v92, (size_t)v93);
      v49 = *(uint32_t *)(v25 + 16);
      v68 = *(hkString::Self **)v25;
      v27 = (hkString::Self *)(v62);
    }
    *(uint32_t *)(v25 + 8) = 0;
    *(uint32_t *)(v25 + 12) = v49;
  }
  v51 = *(uint32_t *)(v25 + 4);
  if ( v51 != 0 )
  {
    v63 = (hkpWorld::Self *)(v27);
    (*(void (**)(uint32_t, hkString::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v68,
      4 * v51);
    v27 = (hkString::Self *)(v63);
  }
  *(uint32_t *)v25 = (uint32_t)(uintptr_t)(v27);
  *(uint32_t *)(v25 + 4) = 8;
  v26 = 8;
LABEL_15:
  v28 = *(uint32_t *)(v25 + 12);
  if ( v28 != v26 )
  {
LABEL_16:
    v29 = v28;
    v30 = 4 * v28;
    v31 = v29 + 1;
    goto LABEL_17;
  }
LABEL_40:
  v30 = 0;
  v31 = 1;
LABEL_17:
  *(uint32_t *)(v25 + 12) = v31;
  *(uint32_t *)((char *)v27 + v30) = (uint32_t)(uintptr_t)(v71);
  ++*(uint32_t *)(v25 + 16);
  result = *((uint32_t **)v3 + 20);
  v33 = result[4];
  if ( v33 > *((uint32_t *)v3 + 12) )
  {
    v34 = result[2];
    v35 = *(uint32_t *)(*result + 4 * v34++);
    v36 = v34 == result[1];
    v66 = v35;
    result[2] = v34;
    if ( v36 )
      result[2] = 0;
    v37 = v3;
    result[4] = v33 - 1;
    v38 = *((uint32_t *)v3 + 6) - 1;
    v39 = 4 * v38;
    if ( v38 >= 0 )
    {
      do
      {
        v72 = (hkpEntity::Self *)(v37);
        --v38;
        v40 = *(uint32_t *)(*((uint32_t *)v37 + 5) + v39);
        v39 -= 4;
        G4_VCALL<void>(v40, 24, v66);
        v37 = (hkpMountedBallGun::Self *)(v72);
      }
      while ( v38 != -1 );
    }
    v41 = *(hkpEntity::Self **)(v66 + 8);
    if ( v41 != nullptr )
      hkpWorld::removeEntity((hkpWorld::Self *)&v73, v41, (hkpWorld::Self *)v66);
    result = (uint32_t *)v66;
    if ( *(uint16_t *)(v66 + 6) != 0 )
    {
      do
      {
        v43 = *(uint32_t *)(v66 + 4);
        HIWORD(v42) = HIWORD(v43);
        LOWORD(v42) = 0;
        v44 = v42 | (uint16_t)(v43 - 1);
        v45 = v43;
        result = (uint32_t *)__sync_val_compare_and_swap((volatile int32_t *)(v66 + 4), v45, v44);
      }
      while ( (uint32_t *)v45 != result );
      if ( (uint16_t)v44 == 0 )
        return (uint32_t *)G4_VCALL<int>(v66, 16);
    }
  }
  return result;
}



// ============================================================================
// Address:   0x1848da0 (size: 534 bytes)
// Symbol:    _ZN17hkpMountedBallGunC1E24hkFinishLoadedObjectFlag
// Demangled: hkpMountedBallGun::hkpMountedBallGun(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN17hkpMountedBallGunC2E24hkFinishLoadedObjectFlag'
void (**hkpMountedBallGun::Construct(int a1, int a2))(hkpMountedBallGun::Self * self)
{
  int address;
  int v3;
  int v4;
  int v5;
  int v6;
  hkString::Self *v7;
  char *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  hkString::Self *v14;
  hkString::Self *v15;
  hkString::Self *v16;
  hkString::Self *v17;
  int v18;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A35C8);
  hkStringPtr::Construct();
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0x80000000;
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 1;
    *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A3228);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           20);
    *(uint32_t *)v3 = 0;
    *(uint32_t *)(v3 + 4) = 0;
    *(uint32_t *)(v3 + 8) = 0;
    *(uint32_t *)(v3 + 12) = 0;
    *(uint32_t *)(v3 + 16) = 0;
    *(uint32_t *)(a1 + 80) = v3;
    v4 = *(uint32_t *)(a1 + 48);
    v5 = *(uint32_t *)(v3 + 4);
    if ( v4 > v5 )
    {
      v6 = 2 * v5;
      if ( v6 >= v4 )
        v4 = v6;
      v12 = v4;
      v7 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         4 * v4);
      v8 = *(char **)v3;
      if ( v7 != nullptr && v8 != nullptr )
      {
        v9 = *(uint32_t *)(v3 + 16);
        if ( v9 != 0 )
        {
          v16 = v7;
          v18 = *(uint32_t *)(v3 + 12);
          v13 = *(uint32_t *)(v3 + 8);
          if ( v18 > v13 )
          {
            hkString::memCpy(v7, &v8[4 * v13], 4 * *(uint32_t *)(v3 + 16));
            v9 = *(uint32_t *)(v3 + 16);
            v8 = *(char **)v3;
            v7 = v16;
          }
          else
          {
            v17 = (hkString::Self *)(4 * (*(uint32_t *)(v3 + 4) - v13));
            v14 = v7;
            hkString::memCpy(v7, &v8[4 * *(uint32_t *)(v3 + 8)], (size_t)v17);
            hkString::memCpy((hkString::Self *)((char *)v17 + (uint32_t)(uintptr_t)(v14)), *(void **)v3, 4 * v18);
            v9 = *(uint32_t *)(v3 + 16);
            v8 = *(char **)v3;
            v7 = v14;
          }
        }
        *(uint32_t *)(v3 + 8) = 0;
        *(uint32_t *)(v3 + 12) = v9;
      }
      v10 = *(uint32_t *)(v3 + 4);
      if ( v10 != 0 )
      {
        v15 = v7;
        (*(void (**)(uint32_t, char *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v8,
          4 * v10);
        v7 = v15;
      }
      *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v7);
      *(uint32_t *)(v3 + 4) = v12;
    }
    *(uint8_t *)(a1 + 8) = 4;
    *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A3C68);
    return (void (**)(hkpMountedBallGun::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A3C68));
  }
  else
  {
    *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A3C68);
    return (void (**)(hkpMountedBallGun::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A3C68));
  }
}
// ----------------------------------------------------------------------------
// Function: hkpMountedBallGun::Construct  (binary VA: 0x1848fc0)
// Original: hkpMountedBallGun::hkpMountedBallGun
// ----------------------------------------------------------------------------
void hkpMountedBallGun::Construct(hkpMountedBallGun::Self *self, int a2)
{
  hkpBallGun::Construct(self, a2);
  *((uint8_t *)self + 8) = 4;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3C68);
  hkStringPtr::opAssign((hkpMountedBallGun::Self *)((char *)self + 12), (hkString::Self *)"MountedBallGun");
  *((uint32_t *)self + 25) = 1120403456;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
}


