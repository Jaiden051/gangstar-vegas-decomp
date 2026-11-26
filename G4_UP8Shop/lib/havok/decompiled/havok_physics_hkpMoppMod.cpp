#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppMod.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppModifier::Destroy  (binary VA: 0x1697220)
// Original: hkpMoppModifier::~hkpMoppModifier
// ----------------------------------------------------------------------------
void hkpMoppModifier::Destroy(hkpMoppModifier::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099518);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppModifier::Destroy_ea1697290  (binary VA: 0x1697290)
// Original: hkpMoppModifier::~hkpMoppModifier
// ----------------------------------------------------------------------------
void hkpMoppModifier::Destroy_ea1697290(hkpMoppModifier::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099518);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppModifyVirtualMachine::queryModicationPointsRecursive  (binary VA: 0x17c62b0)
// Original: hkpMoppModifyVirtualMachine::queryModicationPointsRecursive
// ----------------------------------------------------------------------------
bool * hkpMoppModifyVirtualMachine::queryModicationPointsRecursive(bool *a1, int a2, int *a3, uint8_t *a4, int a5)
{
  int *v5;
  uint8_t v6;
  int v7;
  uint8_t *v8;
  int *v9;
  int v10;
  bool *v11;
  bool *result;
  int v13;
  int v14;
  int v15;
  uint8_t v16;
  uint8_t *v17;
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
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint8_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint8_t v39;
  int v40;
  uint8_t v41;
  int v42;
  bool v43;
  bool v44; // di
  bool *v45;
  bool v46;
  bool v47;
  typedef uint32_t _g4_t_v48[76];
  typedef int *_g4_t_v49;
  typedef int *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef bool *_g4_t_v60;
  typedef char _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef bool **_g4_t_v78;
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (0u + sizeof(_g4_t_v48)) > _g4_s0 ? (0u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (304u + sizeof(_g4_t_v49)) > _g4_s1 ? (304u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (308u + sizeof(_g4_t_v50)) > _g4_s2 ? (308u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (312u + sizeof(_g4_t_v51)) > _g4_s3 ? (312u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (316u + sizeof(_g4_t_v52)) > _g4_s4 ? (316u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (328u + sizeof(_g4_t_v53)) > _g4_s5 ? (328u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (332u + sizeof(_g4_t_v54)) > _g4_s6 ? (332u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (336u + sizeof(_g4_t_v55)) > _g4_s7 ? (336u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (340u + sizeof(_g4_t_v56)) > _g4_s8 ? (340u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (344u + sizeof(_g4_t_v57)) > _g4_s9 ? (344u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (348u + sizeof(_g4_t_v58)) > _g4_s10 ? (348u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (352u + sizeof(_g4_t_v59)) > _g4_s11 ? (352u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (356u + sizeof(_g4_t_v60)) > _g4_s12 ? (356u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (363u + sizeof(_g4_t_v61)) > _g4_s13 ? (363u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (364u + sizeof(_g4_t_v62)) > _g4_s14 ? (364u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (368u + sizeof(_g4_t_v63)) > _g4_s15 ? (368u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (372u + sizeof(_g4_t_v64)) > _g4_s16 ? (372u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (376u + sizeof(_g4_t_v65)) > _g4_s17 ? (376u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (380u + sizeof(_g4_t_v66)) > _g4_s18 ? (380u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (384u + sizeof(_g4_t_v67)) > _g4_s19 ? (384u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (388u + sizeof(_g4_t_v68)) > _g4_s20 ? (388u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (392u + sizeof(_g4_t_v69)) > _g4_s21 ? (392u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (396u + sizeof(_g4_t_v70)) > _g4_s22 ? (396u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (400u + sizeof(_g4_t_v71)) > _g4_s23 ? (400u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (404u + sizeof(_g4_t_v72)) > _g4_s24 ? (404u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (408u + sizeof(_g4_t_v73)) > _g4_s25 ? (408u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (412u + sizeof(_g4_t_v74)) > _g4_s26 ? (412u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (416u + sizeof(_g4_t_v75)) > _g4_s27 ? (416u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (420u + sizeof(_g4_t_v76)) > _g4_s28 ? (420u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (424u + sizeof(_g4_t_v77)) > _g4_s29 ? (424u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (436u + sizeof(_g4_t_v78)) > _g4_s30 ? (436u + sizeof(_g4_t_v78)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 304u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 308u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 312u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 316u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 328u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 332u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 336u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 340u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 344u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 348u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 352u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 356u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 363u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 364u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 368u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 372u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 376u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 380u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 384u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 388u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 392u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 396u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 400u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 404u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 408u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 412u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 416u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 420u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 424u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 436u);

  v78 = &a1;
  v60 = a1;
  v58 = a2;
  v5 = a3;
  v55 = a5;
  v6 = *a4;
  LOBYTE(v56) = a4[3];
  v7 = v6;
  LOBYTE(v57) = a4[2];
  LOBYTE(v59) = a4[1];
  v53 = (int)(uintptr_t)(&v62);
  v8 = a4;
  while ( v6 > 0x70u )
  {
LABEL_60:
    __builtin_debugtrap();
    LOBYTE(v54) = v56;
LABEL_10:
    LOBYTE(v56) = v54;
  }
  switch ( v7 )
  {
    case 0:
      goto LABEL_7;
    case 1:
    case 2:
    case 3:
    case 4:
      v13 = v5[12] + v7;
      v59 = (uint8_t)v59;
      v59 = v5[8] + (uint8_t)v59;
      v8 += 4;
      v59 <<= v6;
      v70 = v59;
      v57 = (uint8_t)v57;
      v57 = v5[9] + (uint8_t)v57;
      v57 <<= v6;
      v71 = v57;
      v56 = (uint8_t)v56;
      v14 = v5[10];
      v74 = v13;
      v56 = v14 + (uint8_t)v56;
      v56 <<= v6;
      LOBYTE(v13) = 16 - v13;
      v72 = v56;
      v66 = (*(int *)(v58 + 32) >> v13) - v59;
      v67 = (*(int *)(v58 + 36) >> v13) - v57;
      v68 = (*(int *)(v58 + 40) >> v13) - v56;
      v62 = 1 - v59 + (*(int *)(v58 + 16) >> v13);
      v63 = 1 - v57 + (*(int *)(v58 + 20) >> v13);
      v64 = 1 - v56 + (*(int *)(v58 + 24) >> v13);
      v75 = v5[13];
      v73 = v5[11];
      v5 = (int *)v53;
      v6 = *v8;
      LOBYTE(v59) = v8[1];
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 5:
      v8 += (uint8_t)v59 + 2;
      goto LABEL_9;
    case 6:
      v8 += 256 * (uint8_t)v59 + (uint8_t)v57 + 3;
      goto LABEL_9;
    case 7:
      v8 += 0x10000 * (uint8_t)v59 + 256 * (uint8_t)v57 + (uint8_t)v56 + 4;
      goto LABEL_9;
    case 8:
      v8 += 0x1000000 * v59 + 0x10000 * (uint8_t)v57 + 256 * (uint8_t)v56 + v8[4] + 5;
      goto LABEL_9;
    case 9:
      if ( v5 != (int *)v53 )
      {
        v62 = *v5;
        v63 = v5[1];
        v64 = v5[2];
        v65 = v5[3];
        v66 = v5[4];
        v67 = v5[5];
        v68 = v5[6];
        v69 = v5[7];
        v70 = v5[8];
        v71 = v5[9];
        v72 = v5[10];
        v73 = v5[11];
        v74 = v5[12];
        v75 = v5[13];
        v76 = v5[14];
        v77 = v5[15];
      }
      v73 += (uint8_t)v59;
      v8 += 2;
      v5 = (int *)v53;
      v6 = *v8;
      LOBYTE(v59) = v8[1];
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 10:
      if ( v5 != (int *)v53 )
      {
        v62 = *v5;
        v63 = v5[1];
        v64 = v5[2];
        v65 = v5[3];
        v66 = v5[4];
        v67 = v5[5];
        v68 = v5[6];
        v69 = v5[7];
        v70 = v5[8];
        v71 = v5[9];
        v72 = v5[10];
        v73 = v5[11];
        v74 = v5[12];
        v75 = v5[13];
        v76 = v5[14];
        v77 = v5[15];
      }
      v73 += (uint8_t)v57 + ((uint8_t)v59 << 8);
      v8 += 3;
      v5 = (int *)v53;
      v6 = *v8;
      LOBYTE(v59) = v8[1];
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 11:
      v15 = v8[4] + ((uint8_t)v57 << 16) + (v59 << 24) + ((uint8_t)v56 << 8);
      if ( v5 != (int *)v53 )
      {
        v62 = *v5;
        v63 = v5[1];
        v64 = v5[2];
        v65 = v5[3];
        v66 = v5[4];
        v67 = v5[5];
        v68 = v5[6];
        v69 = v5[7];
        v70 = v5[8];
        v71 = v5[9];
        v72 = v5[10];
        v73 = v5[11];
        v74 = v5[12];
        v75 = v5[13];
        v76 = v5[14];
        v77 = v5[15];
      }
      v73 = v15;
      v8 += 5;
      v5 = (int *)v53;
      v6 = *v8;
      LOBYTE(v59) = v8[1];
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 12:
      v55 = (uint8_t)v59 << 8;
      v55 |= (uint8_t)v57;
      v55 <<= 9;
      v8 = (uint8_t *)(*(uint32_t *)(*(uint32_t *)(v58 + 48) + 32) + v55);
      goto LABEL_9;
    case 13:
      v16 = v8[6];
      v8 += 5;
      v6 = *v8;
      LOBYTE(v59) = v16;
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 14:
    case 15:
    case 29:
    case 30:
    case 31:
    case 44:
    case 45:
    case 46:
    case 47:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 108:
    case 109:
    case 110:
    case 111:
      goto LABEL_60;
    case 16:
    case 17:
    case 18:
      v17 = v8;
      v53 = (uint8_t)v59;
      v54 = (uint8_t)v57;
      v18 = v7 + 1073741808;
      v19 = v5[v7 - 12];
      v20 = v5[v18];
      goto LABEL_28;
    case 19:
      v17 = v8;
      v21 = v5[1];
      v53 = 2 * (uint8_t)v59;
      v54 = 2 * (uint8_t)v57;
      v20 = v5[2] + v21;
      v19 = v5[6] + v5[5];
      goto LABEL_28;
    case 20:
      v17 = v8;
      v22 = v5[1];
      v53 = (uint8_t)v59 + (uint8_t)v59 - 255;
      v54 = 2 * (uint8_t)v57 - 255;
      v20 = v22 - v5[6];
      v19 = v5[5] - v5[2];
      goto LABEL_28;
    case 21:
      v17 = v8;
      v23 = *v5;
      v53 = 2 * (uint8_t)v59;
      v54 = 2 * (uint8_t)v57;
      v20 = v5[2] + v23;
      v19 = v5[6] + v5[4];
      goto LABEL_28;
    case 22:
      v17 = v8;
      v24 = *v5;
      v53 = (uint8_t)v59 + (uint8_t)v59 - 255;
      v54 = 2 * (uint8_t)v57 - 255;
      v20 = v24 - v5[6];
      v19 = v5[4] - v5[2];
      goto LABEL_28;
    case 23:
      v17 = v8;
      v20 = v5[1] + *v5;
      v53 = 2 * (uint8_t)v59;
      v54 = 2 * (uint8_t)v57;
      v19 = v5[5] + v5[4];
      goto LABEL_28;
    case 24:
      v17 = v8;
      v25 = *v5;
      v53 = (uint8_t)v59 + (uint8_t)v59 - 255;
      v20 = v25 - v5[5];
      v54 = 2 * (uint8_t)v57 - 255;
      v19 = v5[4] - v5[1];
      goto LABEL_28;
    case 25:
      v17 = v8;
      v26 = v5[1] + *v5;
      v53 = 3 * (uint8_t)v59;
      v54 = 3 * (uint8_t)v57;
      v20 = v5[2] + v26;
      v19 = v5[6] + v5[5] + v5[4];
      goto LABEL_28;
    case 26:
      v17 = v8;
      v27 = *v5;
      v53 = 3 * (uint8_t)v59 - 255;
      v28 = v5[1] + v27;
      v54 = 3 * (uint8_t)v57 - 255;
      v20 = v28 - v5[6];
      v19 = v5[5] + v5[4] - v5[2];
      goto LABEL_28;
    case 27:
      v17 = v8;
      v29 = *v5;
      v53 = 3 * (uint8_t)v59 - 255;
      v30 = v29 - v5[5];
      v54 = 3 * (uint8_t)v57 - 255;
      v20 = v5[2] + v30;
      v19 = v5[6] + v5[4] - v5[1];
      goto LABEL_28;
    case 28:
      v17 = v8;
      v31 = *v5;
      v53 = 3 * (uint8_t)v59 - 510;
      v32 = v31 - v5[5];
      v54 = 3 * (uint8_t)v57 - 510;
      v20 = v32 - v5[6];
      v19 = v5[4] - v5[1] - v5[2];
      goto LABEL_28;
    case 32:
    case 33:
    case 34:
      v17 = v8 - 1;
      v54 = (uint8_t)v59;
      v53 = (uint8_t)v59 + 1;
      v33 = v7 + 1073741792;
      v19 = v5[v7 - 28];
      v20 = v5[v33];
      LOBYTE(v56) = v57;
LABEL_28:
      v57 = (uint8_t)v56;
      v59 = (int)(uintptr_t)(v17 + 4);
      v56 = 0;
      goto LABEL_29;
    case 35:
    case 36:
    case 37:
      v34 = v8 + 7;
      v53 = (uint8_t)v59;
      v54 = (uint8_t)v57;
      v35 = v7 + 1073741789;
      v19 = v5[v7 - 31];
      v20 = v5[v35];
      v59 = (uint8_t)v56;
      v36 = (uint8_t)*(v34 - 3);
      v59 = (uint8_t)v56 << 8;
      v57 = v36;
      v56 = v36 + v59;
      v59 = (uint8_t)*(v34 - 2);
      v37 = (uint8_t)*(v34 - 1);
      v59 <<= 8;
      v57 = v37 + v59;
      v59 = (int)(uintptr_t)(v34);
LABEL_29:
      if ( v20 > v54 )
      {
        if ( v19 >= v53 )
        {
          v52 = v55;
          v49 = (int *)v58;
          v51 = (uint32_t *)(v57 + v59);
          v50 = v5;
          hkpMoppModifyVirtualMachine::queryModicationPointsRecursive(&v61);
          LOBYTE(v43) = v61 != 0;
          v44 = false;
          goto LABEL_63;
        }
        v52 = v55;
        v51 = (uint32_t *)(v56 + v59);
        v49 = (int *)v58;
        v50 = v5;
        hkpMoppModifyVirtualMachine::queryModicationPointsRecursive(&v61);
        LOBYTE(v54) = v61;
        v52 = v55;
        v51 = (uint32_t *)(v57 + v59);
        v49 = (int *)v58;
        v50 = v5;
        hkpMoppModifyVirtualMachine::queryModicationPointsRecursive(&v61);
        v46 = v61 == 0;
        v47 = (uint8_t)v54 != 0;
        v43 = v61 != 0 && (uint8_t)v54 == 0;
        v44 = (uint8_t)v54 != 0 && v61 != 0;
      }
      else
      {
        if ( v19 >= v53 )
        {
LABEL_31:
          result = v60;
          *v60 = false;
          return result;
        }
        v52 = v55;
        v51 = (uint32_t *)(v56 + v59);
        v49 = (int *)v58;
        v50 = v5;
        hkpMoppModifyVirtualMachine::queryModicationPointsRecursive(&v61);
        v47 = v61 != 0;
        v46 = true;
        v44 = false;
        v43 = false;
      }
      if ( v47 && v46 )
      {
        v55 = v43;
        (*(void (**)(uint32_t, int))(**(uint32_t **)(v58 + 60) + 12))(
          *(uint32_t *)(v58 + 60),
          v56 - *(uint32_t *)(*(uint32_t *)(v58 + 48) + 32) + v59);
        LOBYTE(v43) = v55;
      }
LABEL_63:
      if ( v43 )
        (*(void (**)(uint32_t, int))(**(uint32_t **)(v58 + 60) + 12))(
          *(uint32_t *)(v58 + 60),
          v57 - *(uint32_t *)(*(uint32_t *)(v58 + 48) + 32) + v59);
      v45 = v60;
      *v60 = v44;
      return v45;
    case 38:
    case 39:
    case 40:
      v38 = v7 + 1073741786;
      if ( v5[v38 + 4] >= (uint8_t)v57 || v5[v38] < (uint8_t)v59 )
        goto LABEL_31;
      v39 = v8[4];
      v8 += 3;
      v6 = v56;
      LOBYTE(v59) = v39;
      v7 = (uint8_t)v56;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 41:
    case 42:
    case 43:
      v40 = 4 * v7 - 164;
      if ( *(uint32_t *)(v58 + v40 + 32) > v8[6] + (v8[4] << 16) + (v8[5] << 8)
        || *(uint32_t *)(v58 + v40 + 16) < (uint8_t)v56
                                       + ((uint8_t)v59 << 16)
                                       + ((uint8_t)v57 << 8) )
      {
        goto LABEL_31;
      }
      v41 = v8[8];
      v8 += 7;
      v6 = *v8;
      LOBYTE(v59) = v41;
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
      v57 = v7 - 48;
      goto LABEL_6;
    case 80:
      v57 = (uint8_t)v59;
      goto LABEL_6;
    case 81:
      v57 = (uint8_t)v57 + ((uint8_t)v59 << 8);
      goto LABEL_6;
    case 82:
      v57 = (uint8_t)v56 + ((uint8_t)v57 << 8) + ((uint8_t)v59 << 16);
      goto LABEL_6;
    case 83:
      v57 = ((uint8_t)v56 << 8) + (v59 << 24) + ((uint8_t)v57 << 16) + v8[4];
LABEL_6:
      v9 = *(int **)(v58 + 60);
      v59 = *v9;
      v51 = (uint32_t *)(v5 + 13);
      v10 = (v5[11] + v57) | *(uint32_t *)(v58 + 64) & (v55 >> 9 << 8);
      v49 = v9;
      v50 = (int *)v10;
      (*(void (**)(char *))(v59 + 8))(&v61);
      *(uint8_t *)(v58 + 56) = v61;
LABEL_7:
      v11 = v60;
      *v60 = *(uint8_t *)(v58 + 56);
      return v11;
    case 96:
    case 97:
    case 98:
    case 99:
      v8 += 2;
      v48[v7 + 8] = (uint8_t)v59;
      goto LABEL_55;
    case 100:
    case 101:
    case 102:
    case 103:
      v8 += 3;
      v48[v7 + 4] = (uint8_t)v57 + ((uint8_t)v59 << 8);
      goto LABEL_55;
    case 104:
    case 105:
    case 106:
    case 107:
      v8 += 5;
      v48[v7] = *(v8 - 1) + ((uint8_t)v57 << 16) + (v59 << 24) + ((uint8_t)v56 << 8);
LABEL_55:
      v42 = v75;
      if ( v5 != (int *)v53 )
      {
        v62 = *v5;
        v63 = v5[1];
        v64 = v5[2];
        v65 = v5[3];
        v66 = v5[4];
        v67 = v5[5];
        v68 = v5[6];
        v69 = v5[7];
        v70 = v5[8];
        v71 = v5[9];
        v72 = v5[10];
        v73 = v5[11];
        v74 = v5[12];
        v75 = v5[13];
        v76 = v5[14];
        v77 = v5[15];
      }
      v75 = v42;
      v5 = (int *)v53;
      v6 = *v8;
      LOBYTE(v59) = v8[1];
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    case 112:
      v55 = v8[4] + ((uint8_t)v57 << 16) + (v59 << 24) + ((uint8_t)v56 << 8);
      v8 = (uint8_t *)(*(uint32_t *)(*(uint32_t *)(v58 + 48) + 32) + v55);
LABEL_9:
      v6 = *v8;
      LOBYTE(v59) = v8[1];
      v7 = v6;
      LOBYTE(v57) = v8[2];
      LOBYTE(v54) = v8[3];
      goto LABEL_10;
    default:
      abort();
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppModifyVirtualMachine::queryAabb  (binary VA: 0x17c6e30)
// Original: hkpMoppModifyVirtualMachine::queryAabb
// ----------------------------------------------------------------------------
bool * hkpMoppModifyVirtualMachine::queryAabb(hkpMoppModifyVirtualMachine::Self *self, const hkpMoppCode::Self *a2, const hkAabb::Self *a3, hkpMoppModifier::Self *a4)
{
  hkpMoppModifyVirtualMachine::Self *v4;
  bool *result;
  float v6; // xmm0_4
  float v7; // xmm2_4
  __m128i v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  signed int v14;
  __m128i v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  float v22; // xmm2_4
  __m128i v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  signed int v29;
  __m128i v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  signed int v36;
  float v37; // xmm2_4
  __m128i v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  signed int v44;
  __m128i v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  int v50;
  signed int v51;
  int v52;
  uint8_t *v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef hkpMoppModifier::Self *_g4_t_v64;
  typedef const hkpMoppCode::Self *_g4_t_v65;
  typedef unsigned int *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef bool _g4_t_v68;
  typedef int _g4_t_v69[22];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v55)) > _g4_s1 ? (4u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v58)) > _g4_s4 ? (16u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v59)) > _g4_s5 ? (16u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v60)) > _g4_s6 ? (16u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v61)) > _g4_s7 ? (16u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v62)) > _g4_s8 ? (16u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v63)) > _g4_s9 ? (16u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v64)) > _g4_s10 ? (20u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v65)) > _g4_s11 ? (24u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v66)) > _g4_s12 ? (28u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v67)) > _g4_s13 ? (28u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (35u + sizeof(_g4_t_v68)) > _g4_s14 ? (35u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v69)) > _g4_s15 ? (36u + sizeof(_g4_t_v69)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 35u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);

  v69[18] = (int)(uintptr_t)(&self);
  v65 = a2;
  v66 = (unsigned int *)a3;
  v4 = self;
  v64 = a4;
  if ( byte_2136220 != 0
    || (hkpCheckKeycode(), result = (bool *)hkpProcessFlyingColors(&byte_2136220), byte_2136220 != 0) )
  {
    *((uint32_t *)v4 + 12) = (uint32_t)(uintptr_t)(v65);
    *((uint32_t *)v4 + 15) = (uint32_t)(uintptr_t)(v64);
    *(uint32_t *)v4 = 0;
    v6 = *((float *)v65 + 7);
    v7 = *((float *)v65 + 4);
g4_m128_raw(v8) = *v66;
    *(float *)g4_m128_ptr<int32_t>(v8) = (float)(*(float *)g4_m128_ptr<int32_t>(v8) - v7) * v6;
    v9 = _mm_cvtsi128_si32(v8);
    v10 = (v9 & 0x7F800000u) >> 23;
    v58 = v10 - 127;
    if ( v10 < 0x7F )
    {
      v57 = -1;
      v14 = -1;
    }
    else
    {
      v11 = _mm_cvtsi128_si32(v8) & 0x7FFFFF | 0x800000;
      v12 = (_mm_cvtsi128_si32(v8) >> 31) | 1;
      if ( v58 > 23 )
        v13 = v11 << (v10 + 106);
      else
        v13 = v11 >> (23 - v58);
      v14 = (v9 & 0x80000000 | (v13 * v12) & 0x7FFFFFFF) - 1;
      v57 = v14 >> 16;
    }
    *((uint32_t *)v4 + 8) = v14;
g4_m128_raw(v15) = v66[4];
    *(float *)g4_m128_ptr<int32_t>(v15) = (float)(*(float *)g4_m128_ptr<int32_t>(v15) - v7) * v6;
    v16 = _mm_cvtsi128_si32(v15);
    v17 = (v16 & 0x7F800000u) >> 23;
    v59 = v17 - 127;
    if ( v17 < 0x7F )
    {
      v56 = 1;
      v21 = 1;
    }
    else
    {
      v18 = _mm_cvtsi128_si32(v15) & 0x7FFFFF | 0x800000;
      v19 = (_mm_cvtsi128_si32(v15) >> 31) | 1;
      if ( v59 <= 23 )
        v20 = v18 >> (23 - v59);
      else
        v20 = v18 << (v17 + 106);
      v21 = (v16 & 0x80000000 | (v20 * v19) & 0x7FFFFFFF) + 1;
      v56 = (v21 >> 16) + 1;
    }
    *((uint32_t *)v4 + 4) = v21;
    v22 = *((float *)v65 + 5);
g4_m128_raw(v23) = v66[1];
    *(float *)g4_m128_ptr<int32_t>(v23) = (float)(*(float *)g4_m128_ptr<int32_t>(v23) - v22) * v6;
    v24 = _mm_cvtsi128_si32(v23);
    v25 = (v24 & 0x7F800000u) >> 23;
    v60 = v25 - 127;
    if ( v25 < 0x7F )
    {
      v55 = -1;
      v29 = -1;
    }
    else
    {
      v26 = _mm_cvtsi128_si32(v23) & 0x7FFFFF | 0x800000;
      v27 = (_mm_cvtsi128_si32(v23) >> 31) | 1;
      if ( v60 <= 23 )
        v28 = v26 >> (23 - v60);
      else
        v28 = v26 << (v25 + 106);
      v29 = (v24 & 0x80000000 | (v28 * v27) & 0x7FFFFFFF) - 1;
      v55 = v29 >> 16;
    }
    *((uint32_t *)v4 + 9) = v29;
g4_m128_raw(v30) = v66[5];
    *(float *)g4_m128_ptr<int32_t>(v30) = (float)(*(float *)g4_m128_ptr<int32_t>(v30) - v22) * v6;
    v31 = _mm_cvtsi128_si32(v30);
    v32 = (v31 & 0x7F800000u) >> 23;
    v61 = v32 - 127;
    if ( v32 < 0x7F )
    {
      v54 = 1;
      v36 = 1;
    }
    else
    {
      v33 = _mm_cvtsi128_si32(v30) & 0x7FFFFF | 0x800000;
      v34 = (_mm_cvtsi128_si32(v30) >> 31) | 1;
      if ( v61 <= 23 )
        v35 = v33 >> (23 - v61);
      else
        v35 = v33 << (v32 + 106);
      v36 = (v31 & 0x80000000 | (v35 * v34) & 0x7FFFFFFF) + 1;
      v54 = (v36 >> 16) + 1;
    }
    *((uint32_t *)v4 + 5) = v36;
    v37 = *((float *)v65 + 6);
g4_m128_raw(v38) = v66[2];
    *(float *)g4_m128_ptr<int32_t>(v38) = (float)(*(float *)g4_m128_ptr<int32_t>(v38) - v37) * v6;
    v39 = _mm_cvtsi128_si32(v38);
    v40 = (v39 & 0x7F800000u) >> 23;
    v62 = v40 - 127;
    if ( v40 < 0x7F )
    {
      v63 = -1;
      v44 = -1;
    }
    else
    {
      v41 = _mm_cvtsi128_si32(v38) & 0x7FFFFF | 0x800000;
      v42 = (_mm_cvtsi128_si32(v38) >> 31) | 1;
      if ( v62 <= 23 )
        v43 = v41 >> (23 - v62);
      else
        v43 = v41 << (v40 + 106);
      v44 = (v39 & 0x80000000 | (v43 * v42) & 0x7FFFFFFF) - 1;
      v63 = v44 >> 16;
    }
    *((uint32_t *)v4 + 10) = v44;
g4_m128_raw(v45) = v66[6];
    *(float *)g4_m128_ptr<int32_t>(v45) = (float)(*(float *)g4_m128_ptr<int32_t>(v45) - v37) * v6;
    v46 = _mm_cvtsi128_si32(v45);
    v47 = (v46 & 0x7F800000u) >> 23;
    v67 = v47 - 127;
    if ( v47 < 0x7F )
    {
      v52 = 1;
      v51 = 1;
    }
    else
    {
      v48 = _mm_cvtsi128_si32(v45) & 0x7FFFFF | 0x800000;
      v49 = (_mm_cvtsi128_si32(v45) >> 31) | 1;
      if ( v67 <= 23 )
        v50 = v48 >> (23 - v67);
      else
        v50 = v48 << (v47 + 106);
      v51 = (v46 & 0x80000000 | (v50 * v49) & 0x7FFFFFFF) + 1;
      v52 = (v51 >> 16) + 1;
    }
    v69[2] = v52;
    *((uint32_t *)v4 + 6) = v51;
    v69[4] = v57;
    v69[0] = v56;
    v53 = *((uint8_t **)v65 + 8);
    v69[5] = v55;
    memset(&v69[8], 0, 24);
    v69[1] = v54;
    v69[6] = v63;
    *((uint32_t *)v4 + 16) = -(*v53 == 13);
    result = hkpMoppModifyVirtualMachine::queryModicationPointsRecursive(&v68, (int)(uintptr_t)(v4), v69, v53, 0);
    if ( v68 )
      return (bool *)G4_VCALL<int>(v64, 12, 5 * (**(uint8_t **)(*((uint32_t *)v4 + 12) + 32) == 13));
  }
  return result;
}


