#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShape.h"

// ----------------------------------------------------------------------------
// Function: hkpShape::staticClass  (binary VA: 0x1696ef0)
// Original: hkpShape::staticClass
// ----------------------------------------------------------------------------
void * hkpShape::staticClass()
{
  return &hkpShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShape::getMaximumProjection  (binary VA: 0x16990e0)
// Original: hkpShape::getMaximumProjection
// ----------------------------------------------------------------------------
long double hkpShape::getMaximumProjection(hkpShape::Self *self, const hkVector4f::Self *a2, int a3, float a4, float a5, float a6, int a7, float a8, float a9, float a10)
{
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[19];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19[0] = 1065353216;
  memset(&v19[1], 0, 16);
  v19[5] = 1065353216;
  memset(&v19[6], 0, 16);
  v19[10] = 1065353216;
  memset(&v19[11], 0, 20);
  G4_VCALL<void>(self, 24, v19, 0, &v18, v14, v15, v16, v17);
  v10 = (float)(a9 - a5) * 0.5;
  v11 = (float)(a8 - a4) * 0.5;
  if ( *(int *)a2 >= 0 )
  {
    if ( *((int *)a2 + 1) >= 0 )
      goto LABEL_3;
LABEL_6:
    v10 = -v10;
    v12 = (float)(a10 - a6) * 0.5;
    if ( *((int *)a2 + 2) >= 0 )
      return (float)((float)((float)((float)((float)((float)(a4 + a8) * 0.5) + v11) * *(float *)a2)
                           + (float)(*((float *)a2 + 1) * (float)((float)((float)(a9 + a5) * 0.5) + v10)))
                   + (float)((float)(v12 + (float)((float)(a10 + a6) * 0.5)) * *((float *)a2 + 2)));
LABEL_7:
    v12 = -v12;
    return (float)((float)((float)((float)((float)((float)(a4 + a8) * 0.5) + v11) * *(float *)a2)
                         + (float)(*((float *)a2 + 1) * (float)((float)((float)(a9 + a5) * 0.5) + v10)))
                 + (float)((float)(v12 + (float)((float)(a10 + a6) * 0.5)) * *((float *)a2 + 2)));
  }
  v11 = -v11;
  if ( *((int *)a2 + 1) < 0 )
    goto LABEL_6;
LABEL_3:
  v12 = (float)(a10 - a6) * 0.5;
  if ( *((int *)a2 + 2) < 0 )
    goto LABEL_7;
  return (float)((float)((float)((float)((float)((float)(a4 + a8) * 0.5) + v11) * *(float *)a2)
                       + (float)(*((float *)a2 + 1) * (float)((float)((float)(a9 + a5) * 0.5) + v10)))
               + (float)((float)(v12 + (float)((float)(a10 + a6) * 0.5)) * *((float *)a2 + 2)));
}

// ----------------------------------------------------------------------------
// Function: hkpShape::calcSizeForSpu  (binary VA: 0x16992b0)
// Original: hkpShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpShape::calcSizeForSpu()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpShape::Destroy  (binary VA: 0x16992c0)
// Original: hkpShape::~hkpShape
// ----------------------------------------------------------------------------
void hkpShape::Destroy(hkpShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpShape::Destroy_ea16992e0  (binary VA: 0x16992e0)
// Original: hkpShape::~hkpShape
// ----------------------------------------------------------------------------
void hkpShape::Destroy_ea16992e0(hkpShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpShape::castRayBundle  (binary VA: 0x1699340)
// Original: hkpShape::castRayBundle
// ----------------------------------------------------------------------------
uint32_t * hkpShape::castRayBundle(uint32_t *a1, uint32_t *a2, int *a3, int a4, int *a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8; // xmm1_4
  int v9; // xmm1_4
  int v10;
  int v11;
  int v12;
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm0_4
  int v16;
  int v17; // xmm1_4
  int v18;
  int v19; // xmm1_4
  int v20;
  int v21; // xmm1_4
  int v22;
  int v23;
  int v24; // xmm0_4
  int v25;
  int v27;
  typedef uint32_t *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
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
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
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
  typedef uint32_t *_g4_t_v75;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v30)) > _g4_s2 ? (15u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v33)) > _g4_s5 ? (24u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v34)) > _g4_s6 ? (28u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v35)) > _g4_s7 ? (32u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v36)) > _g4_s8 ? (36u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v37)) > _g4_s9 ? (40u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v38)) > _g4_s10 ? (44u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v39)) > _g4_s11 ? (48u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v40)) > _g4_s12 ? (52u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v41)) > _g4_s13 ? (56u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v42)) > _g4_s14 ? (60u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v43)) > _g4_s15 ? (64u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v44)) > _g4_s16 ? (68u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v45)) > _g4_s17 ? (72u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v46)) > _g4_s18 ? (76u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v47)) > _g4_s19 ? (80u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v48)) > _g4_s20 ? (84u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v49)) > _g4_s21 ? (88u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v50)) > _g4_s22 ? (92u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v51)) > _g4_s23 ? (96u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v52)) > _g4_s24 ? (100u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v53)) > _g4_s25 ? (104u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v54)) > _g4_s26 ? (108u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v55)) > _g4_s27 ? (112u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v56)) > _g4_s28 ? (116u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v57)) > _g4_s29 ? (120u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v58)) > _g4_s30 ? (124u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v59)) > _g4_s31 ? (128u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v60)) > _g4_s32 ? (132u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v61)) > _g4_s33 ? (136u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v62)) > _g4_s34 ? (140u + sizeof(_g4_t_v62)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v63)) > _g4_s35 ? (144u + sizeof(_g4_t_v63)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v64)) > _g4_s36 ? (148u + sizeof(_g4_t_v64)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v65)) > _g4_s37 ? (152u + sizeof(_g4_t_v65)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v66)) > _g4_s38 ? (156u + sizeof(_g4_t_v66)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_v67)) > _g4_s39 ? (160u + sizeof(_g4_t_v67)) : _g4_s39,
    _g4_s41 = (164u + sizeof(_g4_t_v68)) > _g4_s40 ? (164u + sizeof(_g4_t_v68)) : _g4_s40,
    _g4_s42 = (168u + sizeof(_g4_t_v69)) > _g4_s41 ? (168u + sizeof(_g4_t_v69)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v70)) > _g4_s42 ? (172u + sizeof(_g4_t_v70)) : _g4_s42,
    _g4_s44 = (176u + sizeof(_g4_t_v71)) > _g4_s43 ? (176u + sizeof(_g4_t_v71)) : _g4_s43,
    _g4_s45 = (180u + sizeof(_g4_t_v72)) > _g4_s44 ? (180u + sizeof(_g4_t_v72)) : _g4_s44,
    _g4_s46 = (184u + sizeof(_g4_t_v73)) > _g4_s45 ? (184u + sizeof(_g4_t_v73)) : _g4_s45,
    _g4_s47 = (188u + sizeof(_g4_t_v74)) > _g4_s46 ? (188u + sizeof(_g4_t_v74)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v75)) > _g4_s47 ? (200u + sizeof(_g4_t_v75)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 15u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 84u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 112u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 116u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 120u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 124u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 128u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 132u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 136u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 140u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 144u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 148u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 152u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 156u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 160u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 164u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 168u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 172u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 176u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 180u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 184u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 188u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 200u);

  v75 = (uint32_t *)(&a1);
  v28 = a1;
  v5 = a2;
  v29 = a5;
  v6 = *a3;
  v44 = a3[1];
  v45 = a3[2];
  v46 = a3[3];
  v47 = a3[4];
  v48 = a3[5];
  v49 = a3[6];
  v50 = a3[7];
  v7 = a3[8];
  v43 = v6;
  v51 = v7;
  v8 = v44;
  v52 = a3[9];
  v44 = v47;
  v53 = a3[10];
  v47 = v8;
  v9 = v45;
  v54 = a3[11];
  v45 = v7;
  v10 = a3[13];
  v11 = a3[12];
  v55 = v46;
  v60 = v10;
  v12 = a3[14];
  v51 = v9;
  v58 = 0;
  v13 = v49;
  v46 = 0;
  v49 = v52;
  v59 = v11;
  v14 = v50;
  v50 = 0;
  v56 = v14;
  v15 = v54;
  v54 = 0;
  v52 = v13;
  v57 = v15;
  v61 = v12;
  v16 = a3[15];
  v74 = 0;
  v17 = v60;
  v62 = v16;
  v63 = a3[16];
  v64 = a3[17];
  v60 = v63;
  v18 = a3[18];
  v63 = v17;
  v65 = v18;
  v19 = v61;
  v66 = a3[19];
  v67 = a3[20];
  v68 = a3[21];
  v61 = v67;
  v69 = a3[22];
  v67 = v19;
  v20 = a3[23];
  v71 = v62;
  v70 = v20;
  v62 = 0;
  v21 = v65;
  v65 = v68;
  v68 = v21;
  v22 = a3[26];
  v39 = a3[24];
  v40 = v22;
  v23 = 0;
  v72 = v66;
  v66 = 0;
  v24 = v70;
  v41 = 0;
  v25 = *a5;
  v70 = 0;
  v42 = 0;
  v73 = v24;
  if ( (v25 & 1) != 0 )
  {
    v31 = v6;
    v32 = v44;
    v33 = v45;
    v34 = v46;
    v36 = v60;
    v37 = v61;
    v38 = v62;
    v27 = *a2;
    v35 = v11;
    (*(void (**)(char *))(v27 + 28))(&v30);
    v23 = v30 != 0;
    v25 = *v29;
    if ( (*v29 & 2) == 0 )
    {
LABEL_3:
      if ( (v25 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else if ( (v25 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v31 = v47;
  v32 = v48;
  v33 = v49;
  v34 = v50;
  v35 = v63;
  v36 = v64;
  v37 = v65;
  v38 = v66;
  (*(void (**)(char *))(*v5 + 28))(&v30);
  if ( v30 != 0 )
    v23 |= 2u;
  v25 = *v29;
  if ( (*v29 & 4) == 0 )
  {
LABEL_4:
    if ( (v25 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_10:
  v31 = v51;
  v32 = v52;
  v33 = v53;
  v34 = v54;
  v35 = v67;
  v36 = v68;
  v37 = v69;
  v38 = v70;
  (*(void (**)(char *))(*v5 + 28))(&v30);
  if ( v30 != 0 )
    v23 |= 4u;
  if ( (*v29 & 8) != 0 )
  {
LABEL_13:
    v31 = v55;
    v32 = v56;
    v33 = v57;
    v34 = v58;
    v35 = v71;
    v36 = v72;
    v37 = v73;
    v38 = v74;
    (*(void (**)(char *))(*v5 + 28))(&v30);
    if ( v30 != 0 )
      v23 |= 8u;
  }
LABEL_5:
  *v28 = v23;
  return v28;
}



// ============================================================================
// Address:   0x16997d0 (size: 65 bytes)
// Symbol:    _ZN8hkpShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpShape::hkpShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN8hkpShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpShape::hkpShape(int a1, int a2))(hkpShape::Self * self)
{
  void (**result)(hkpShape::Self *);

  hkpShapeBase::hkpShapeBase(a1, a2);
  result = (void (**)(hkpShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20996A8));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20996A8);
  if ( a2 != 0 )
    *(uint8_t *)(a1 + 8) = 34;
  return result;
}

