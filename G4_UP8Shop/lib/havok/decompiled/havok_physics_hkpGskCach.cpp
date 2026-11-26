#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGskCach.h"

// ----------------------------------------------------------------------------
// Function: hkpGskCache::init  (binary VA: 0x18193d0)
// Original: hkpGskCache::init
// ----------------------------------------------------------------------------
hkpGskCache::Self * hkpGskCache::init(hkpGskCache::Self *self, const hkpConvexShape::Self *a2, const hkpConvexShape::Self *a3, const hkTransformf::Self *a4)
{
  int v5;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  int v9;
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  int v17;
  int v18;
  char v19;
  char v20; // si
  bool v21; // cc
  char v22;
  char v23;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef uint16_t _g4_t_v27[8];
  typedef float _g4_t_v28[4];
  typedef float _g4_t_v29[4];
  typedef float _g4_t_v30[4];
  typedef float _g4_t_v31[4];
  typedef float _g4_t_v32[4];
  typedef uint16_t _g4_t_v33[14];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v28)) > _g4_s3 ? (32u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v29)) > _g4_s4 ? (48u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v30)) > _g4_s5 ? (64u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v31)) > _g4_s6 ? (80u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v32)) > _g4_s7 ? (96u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v33)) > _g4_s8 ? (112u + sizeof(_g4_t_v33)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);

  v27[0] = 0;
  G4_VCALL<void>(a2, 44, v27, 1, v28);
  G4_VCALL<void>(a3, 44, v27, 1, v29);
  v5 = *(uint32_t *)a2;
  v25 = (float)((float)((float)(*(float *)a4 * v29[0]) + (float)(*((float *)a4 + 4) * v29[1]))
              + (float)(*((float *)a4 + 8) * v29[2]))
      + *((float *)a4 + 12);
  v26 = (float)((float)((float)(*((float *)a4 + 1) * v29[0]) + (float)(*((float *)a4 + 5) * v29[1]))
              + (float)(*((float *)a4 + 9) * v29[2]))
      + *((float *)a4 + 13);
  v6 = (float)((float)((float)(*((float *)a4 + 2) * v29[0]) + (float)(*((float *)a4 + 6) * v29[1]))
             + (float)(*((float *)a4 + 10) * v29[2]))
     + *((float *)a4 + 14);
  v7 = (float)((float)((float)(v29[0] * *((float *)a4 + 3)) + (float)(v29[1] * *((float *)a4 + 7)))
             + (float)(v29[2] * *((float *)a4 + 11)))
     + *((float *)a4 + 15);
  v30[0] = v25 - v28[0];
  v30[1] = v26 - v28[1];
  v30[2] = v6 - v28[2];
  v30[3] = v7 - v28[3];
  (*(void (**)(const hkpConvexShape::Self *, float *, float *))(v5 + 40))(a2, v30, v31);
  v8 = *(float *)a4;
  v9 = *(uint32_t *)a3;
  v30[3] = v7 - v31[3];
  v10 = *((float *)a4 + 5);
  v11 = (float)(v8 * (float)(v25 - v31[0])) + (float)(*((float *)a4 + 1) * (float)(v26 - v31[1]));
  v12 = *((float *)a4 + 4);
  v30[0] = v25 - v31[0];
  v30[1] = v26 - v31[1];
  v13 = (float)(v26 - v31[1]) * *((float *)a4 + 9);
  v14 = (float)(v25 - v31[0]) * *((float *)a4 + 8);
  v30[2] = v6 - v31[2];
  v15 = (float)(v14 + v13) + (float)(*((float *)a4 + 10) * (float)(v6 - v31[2]));
  v16 = v11 + (float)((float)(v6 - v31[2]) * *((float *)a4 + 2));
  v32[1] = -(float)((float)((float)(v12 * (float)(v25 - v31[0])) + (float)(v10 * (float)(v26 - v31[1])))
                  + (float)(*((float *)a4 + 6) * (float)(v6 - v31[2])));
  v32[2] = -v15;
  v32[0] = -v16;
  v32[3] = -v15;
  (*(void (**)(const hkpConvexShape::Self *, float *, uint16_t *))(v9 + 40))(a3, v32, v33);
  *((uint16_t *)self + 1) = v33[6];
  *(uint16_t *)self = LOWORD(v31[3]);
  *((uint16_t *)self + 2) = 0;
  *((uint16_t *)self + 3) = 0;
  *((uint8_t *)self + 8) = 1;
  *((uint8_t *)self + 9) = 1;
  v17 = G4_VCALL<int>(a2, 52);
  v18 = G4_VCALL<int>(a3, 52);
  v19 = v17 & 0xF;
  if ( v17 > 3 )
    v19 = 15;
  v20 = v18 & 0xF;
  v21 = v18 <= 3;
  v22 = 15;
  if ( v21 )
    v22 = v20;
  v23 = (16 * v22) | v19;
  *((uint8_t *)self + 10) = v23;
  *((uint8_t *)self + 11) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpGskCache::initTriangle  (binary VA: 0x18196c0)
// Original: hkpGskCache::initTriangle
// ----------------------------------------------------------------------------
int hkpGskCache::initTriangle(hkpGskCache::Self *self, const hkpConvexShape::Self *a2, const hkpTriangleShape::Self *a3, const hkTransformf::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, float a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, float a19, float a20, float a21, float a22, float a23, float a24, float a25, float a26, int a27, int a28, int a29, int a30, int16_t a31)
{
  float v31; // xmm2_4
  float v32; // xmm7_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm4_4
  float v36; // xmm2_4
  float v37; // xmm5_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm5_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm2_4
  __m128i v47;
  int16_t v48;
  int result;
  char v50;
  typedef int _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
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
  typedef int _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v52)) > _g4_s1 ? (8u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v53)) > _g4_s2 ? (12u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v54)) > _g4_s3 ? (20u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v55)) > _g4_s4 ? (24u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v56)) > _g4_s5 ? (28u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v57)) > _g4_s6 ? (32u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v58)) > _g4_s7 ? (36u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v59)) > _g4_s8 ? (40u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v60)) > _g4_s9 ? (44u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v61)) > _g4_s10 ? (48u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v62)) > _g4_s11 ? (52u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v63)) > _g4_s12 ? (56u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v64)) > _g4_s13 ? (60u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v65)) > _g4_s14 ? (64u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v66)) > _g4_s15 ? (68u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v67)) > _g4_s16 ? (72u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v68)) > _g4_s17 ? (76u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v69)) > _g4_s18 ? (96u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v70)) > _g4_s19 ? (128u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v71)) > _g4_s20 ? (132u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v72)) > _g4_s21 ? (136u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v73)) > _g4_s22 ? (140u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v74)) > _g4_s23 ? (144u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v75)) > _g4_s24 ? (148u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v76)) > _g4_s25 ? (152u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v77)) > _g4_s26 ? (156u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v78)) > _g4_s27 ? (160u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v79)) > _g4_s28 ? (164u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v80)) > _g4_s29 ? (168u + sizeof(_g4_t_v80)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v81)) > _g4_s30 ? (172u + sizeof(_g4_t_v81)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 128u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 132u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 136u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 140u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 144u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 148u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 152u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 156u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 160u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 164u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 168u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 172u);

  if ( *((uint8_t *)a3 + 23) != 0 )
    return (int)(uintptr_t)(hkpGskCache::init(self, a2, a3, a4));
  *((uint16_t *)self + 1) = 0;
  *((uint16_t *)self + 2) = 1;
  *((uint16_t *)self + 3) = 2;
  v64 = *((float *)a4 + 3);
  v63 = *((float *)a4 + 5);
  v61 = *((float *)a4 + 7);
  v58 = *((float *)a4 + 10);
  v65 = *((float *)a4 + 2);
  v62 = *((float *)a4 + 6);
  v59 = *((float *)a4 + 9);
  v67 = *((float *)a4 + 15);
  v31 = *((float *)a3 + 16);
  v32 = *(float *)a4;
  v60 = *((float *)a4 + 8);
  v57 = *((float *)a4 + 11);
  v68 = *((float *)a4 + 13);
  v33 = *((float *)a3 + 17);
  v66 = *((float *)a4 + 14);
  v34 = *((float *)a3 + 18);
  v55 = *((float *)a4 + 4);
  v56 = *((float *)a4 + 12);
  v54 = *((float *)a4 + 1);
  v78 = (float)((float)((float)(v55 * v33) + (float)(v31 * *(float *)a4)) + (float)(v60 * v34)) + v56;
  v53 = (float)((float)((float)(v63 * v33) + (float)(v54 * v31)) + (float)(v59 * v34)) + v68;
  v79 = v53;
  v35 = (float)(v62 * v33) + (float)(v65 * v31);
  v36 = (float)(v31 * v64) + (float)(v33 * v61);
  v37 = v58 * v34;
  v38 = *((float *)a3 + 13);
  v39 = v36 + (float)(v34 * v57);
  v40 = *((float *)a3 + 14);
  v52 = (float)(v37 + v35) + v66;
  v80 = v52;
  v81 = v39 + v67;
  v41 = *((float *)a3 + 12);
  v74 = (float)((float)((float)(v55 * v38) + (float)(v41 * v32)) + (float)(v60 * v40)) + v56;
  v75 = (float)((float)((float)(v54 * v41) + (float)(v63 * v38)) + (float)(v59 * v40)) + v68;
  v42 = (float)((float)((float)(v65 * v41) + (float)(v62 * v38)) + (float)(v58 * v40)) + v66;
  v76 = v42;
  v43 = *((float *)a3 + 8);
  v44 = (float)(v41 * v64) + (float)(v38 * v61);
  v45 = *((float *)a3 + 10);
  v77 = (float)(v44 + (float)(v40 * v57)) + v67;
  v46 = *((float *)a3 + 9);
  v70 = (float)((float)((float)(v55 * v46) + (float)(v32 * v43)) + (float)(v60 * v45)) + v56;
  v71 = (float)((float)((float)(v54 * v43) + (float)(v63 * v46)) + (float)(v59 * v45)) + v68;
  v72 = (float)((float)((float)(v65 * v43) + (float)(v62 * v46)) + (float)(v58 * v45)) + v66;
  v73 = (float)((float)((float)(v43 * v64) + (float)(v46 * v61)) + (float)(v45 * v57)) + v67;
  G4_VCALL<void>(a2, 44, (char *)self + 2, 1, &v69, v51, COERCE_FLOAT(LODWORD(v74)), LODWORD(v52), LODWORD(v53), COERCE_FLOAT(LODWORD(v78)), COERCE_FLOAT(LODWORD(v54)), COERCE_FLOAT(LODWORD(v55)), COERCE_FLOAT(LODWORD(v56)), COERCE_FLOAT(LODWORD(v57)), COERCE_FLOAT(LODWORD(v58)), COERCE_FLOAT(LODWORD(v59)), COERCE_FLOAT(LODWORD(v70)), COERCE_FLOAT(LODWORD(v61)), COERCE_FLOAT(LODWORD(v62)), COERCE_FLOAT(LODWORD(v63)), COERCE_FLOAT(LODWORD(v64)), COERCE_FLOAT(LODWORD(v65)), COERCE_FLOAT(LODWORD(v66)), COERCE_FLOAT(LODWORD(v71)), COERCE_FLOAT(LODWORD(v72)), (float)((float)(v75 - v71) * (float)(v52 - v42)) - (float)((float)(v42 - v72) * (float)(v53 - v75)), (float)((float)(v42 - v72) * (float)(v78 - v74)) - (float)((float)(v52 - v42) * (float)(v74 - v70)), (float)((float)(v53 - v75) * (float)(v74 - v70)) - (float)((float)(v78 - v74) * (float)(v75 - v71)), 0);
g4_m128_raw(v47) = LODWORD(a24);
  *(float *)g4_m128_ptr<int32_t>(v47) = (float)((float)((float)(a24 - a11) * a20) + (float)((float)(a25 - a18) * a21))
                          + (float)((float)(a26 - a19) * a22);
  if ( _mm_cvtsi128_si32(v47) < 0 )
  {
    a20 = -a20;
    a21 = -a21;
    a22 = -a22;
    a23 = -a23;
  }
  G4_VCALL<void>(a2, 40, &a20, &a28);
  v48 = a31;
  *((uint8_t *)self + 8) = 1;
  *(uint16_t *)self = v48;
  *((uint8_t *)self + 9) = 3;
  result = G4_VCALL<int>(a2, 52);
  v50 = 15;
  *((uint8_t *)self + 11) = 0;
  if ( result <= 3 )
    v50 = result & 0xF;
  *((uint8_t *)self + 10) = v50 | 0x30;
  return result;
}


