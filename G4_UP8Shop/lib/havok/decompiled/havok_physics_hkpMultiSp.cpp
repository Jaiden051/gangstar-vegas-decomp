#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMultiSp.h"

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::staticClass  (binary VA: 0x16933d0)
// Original: hkpMultiSphereShape::staticClass
// ----------------------------------------------------------------------------
void * hkpMultiSphereShape::staticClass()
{
  return &hkpMultiSphereShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::getNumCollisionSpheres  (binary VA: 0x16c2200)
// Original: hkpMultiSphereShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpMultiSphereShape::getNumCollisionSpheres(hkpMultiSphereShape::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::getCollisionSpheres  (binary VA: 0x16c2210)
// Original: hkpMultiSphereShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpMultiSphereShape::getCollisionSpheres(hkpMultiSphereShape::Self *self, hkSphere::Self *a2)
{
  hkSphere::Self *result;
  int v3;
  hkpMultiSphereShape::Self *v4;
  hkSphere::Self *i;

  result = a2;
  v3 = 0;
  v4 = self;
  for ( i = a2; *((uint32_t *)self + 4) > v3; i = (hkSphere::Self *)((char *)i + 16) )
  {
    ++v3;
    *(uint32_t *)i = *((uint32_t *)v4 + 8);
    *((uint32_t *)i + 1) = *((uint32_t *)v4 + 9);
    *((uint32_t *)i + 2) = *((uint32_t *)v4 + 10);
    *((uint32_t *)i + 3) = *((uint32_t *)v4 + 11);
    v4 = (hkpMultiSphereShape::Self *)((char *)v4 + 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::Destroy  (binary VA: 0x16c2260)
// Original: hkpMultiSphereShape::~hkpMultiSphereShape
// ----------------------------------------------------------------------------
void hkpMultiSphereShape::Destroy(hkpMultiSphereShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::Destroy_ea16c2280  (binary VA: 0x16c2280)
// Original: hkpMultiSphereShape::~hkpMultiSphereShape
// ----------------------------------------------------------------------------
void hkpMultiSphereShape::Destroy_ea16c2280(hkpMultiSphereShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 160;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::castRay  (binary VA: 0x16c25d0)
// Original: hkpMultiSphereShape::castRay
// ----------------------------------------------------------------------------
char * hkpMultiSphereShape::castRay(char *a1, int a2, float *a3, int a4)
{
  int v4;
  float v5; // xmm0_4
  int v6;
  int i;
  float v8; // xmm1_4
  bool v9; // cc
  float v10; // xmm1_4
  int v11;
  float *v12;
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  __m128i v27;
  int v28;
  int v29; // xmm5_4
  char v30;
  float v31; // xmm5_4
  float v32; // xmm0_4
  typedef float _g4_t_v34;
  typedef float _g4_t_v35[8];
  typedef uint32_t _g4_t_v36[15];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v36)) > _g4_s2 ? (48u + sizeof(_g4_t_v36)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);

  v4 = sub_16C22E0(a3, (float *)(a2 + 32), *(uint32_t *)(a2 + 16), (int)(uintptr_t)(v35), (int)(uintptr_t)(v36));
  v5 = *(float *)(a4 + 16);
  if ( v4 <= 0 )
    goto LABEL_9;
  v6 = -1;
  for ( i = 0; i != v4; ++i )
  {
    v8 = v35[i];
    v9 = v5 <= v8;
    v10 = fminf(v8, v5);
    if ( !v9 )
      v6 = i;
    v5 = v10;
  }
  if ( v6 == -1 )
  {
LABEL_9:
    v30 = 0;
  }
  else
  {
    v11 = v36[v6];
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    *(float *)(a4 + 16) = v10;
    v12 = (float *)(a2 + 32 + 16 * v11);
    v13 = v12[1];
    v14 = a3[1] - v13;
    v15 = v12[2];
    v16 = v12[3];
    v34 = *a3 - *v12;
    v17 = a3[3] - v16;
    v18 = a3[2] - v15;
    v19 = (float)(a3[5] - v13) - v14;
    v20 = a3[6] - v15;
    v21 = v14 + (float)(v19 * v5);
    v22 = (float)((float)(a3[7] - v16) - v17) * v5;
    v23 = (float)((float)(a3[4] - *v12) - v34) * v5;
    *(float *)(a4 + 4) = v21;
    v24 = (float)((float)(v20 - v18) * v5) + v18;
    v25 = v22 + v17;
    v26 = v23 + v34;
    *(float *)(a4 + 8) = v24;
    *(float *)(a4 + 12) = v25;
    *(float *)a4 = v26;
g4_m128_raw(v27) = *((unsigned int *)v12 + 3);
    v28 = _mm_cvtsi128_si32(v27);
    v29 = (2130706432 - v28) & ((v28 ^ (v28 + 2139095040)) >> 31);
    v30 = 1;
    v31 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v27)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)&v29)) * *(float *)&v29)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)&v29)) * *(float *)&v29);
    v32 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * v31)) * v31;
    *(float *)a4 = v26 * v32;
    *(float *)(a4 + 4) = v21 * v32;
    *(float *)(a4 + 8) = v24 * v32;
    *(float *)(a4 + 12) = v25 * v32;
    *(uint32_t *)(a4 + 20) = v11;
  }
  *a1 = v30;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::getAabb  (binary VA: 0x16c27d0)
// Original: hkpMultiSphereShape::getAabb
// ----------------------------------------------------------------------------
hkAabb::Self * hkpMultiSphereShape::getAabb(hkpMultiSphereShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  int v4;
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float *v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  float *v11;
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm1_4
  float *v18;
  hkpMultiSphereShape::Self *v19;
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef uint8_t _g4_t_v41[140];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v32)) > _g4_s7 ? (36u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v33)) > _g4_s8 ? (40u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v34)) > _g4_s9 ? (44u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v35)) > _g4_s10 ? (48u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v36)) > _g4_s11 ? (52u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v37)) > _g4_s12 ? (56u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v38)) > _g4_s13 ? (56u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v39)) > _g4_s14 ? (60u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v40)) > _g4_s15 ? (60u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v41)) > _g4_s16 ? (64u + sizeof(_g4_t_v41)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);

  v26 = *(float *)a2;
  v36 = *((float *)a2 + 1);
  v25 = *((uint32_t *)self + 4);
  v35 = *((float *)a2 + 2);
  v4 = v25 - 1;
  v34 = *((float *)a2 + 3);
  v33 = *((float *)a2 + 4);
  v32 = *((float *)a2 + 5);
  v31 = *((float *)a2 + 6);
  v37 = *((float *)a2 + 7);
  v39 = *((float *)a2 + 8);
  v27 = *((float *)a2 + 9);
  v28 = *((float *)a2 + 10);
  v29 = *((float *)a2 + 11);
  v30 = *((float *)a2 + 12);
  v5 = *((float *)a2 + 13);
  v6 = *((float *)a2 + 14);
  v7 = *((float *)a2 + 15);
  v8 = (float *)((char *)self + 16 * v25 + 20);
  do
  {
    v9 = *(v8 - 1);
    v10 = *v8;
    v11 = (float *)&v41[(uint32_t)(uintptr_t)((char *)v8 - 4 - ((uint32_t)(uintptr_t)(self) + 32))];
    v8 -= 4;
    v12 = v8[5];
    --v4;
    *v11 = (float)((float)((float)(v26 * v9) + (float)(v33 * v10)) + (float)(v39 * v12)) + v30;
    v11[1] = (float)((float)((float)(v36 * v9) + (float)(v32 * v10)) + (float)(v27 * v12)) + v5;
    v11[2] = (float)((float)((float)(v35 * v9) + (float)(v31 * v10)) + (float)(v28 * v12)) + v6;
    v11[3] = (float)((float)((float)(v9 * v34) + (float)(v10 * v37)) + (float)(v12 * v29)) + v7;
  }
  while ( v4 >= 0 );
  v13 = 3.40282e38f;
  v14 = 3.40282e38f;
  v15 = 3.40282e38f;
  v16 = -3.40282e38f;
  v17 = -3.40282e38f;
  v40 = -3.40282e38f;
  if ( v25 > 0 )
  {
    v18 = (float *)v41;
    v19 = self;
    v20 = 0;
    do
    {
      ++v20;
      v21 = *((float *)v19 + 11);
      v22 = *v18 - v21;
      v38 = *v18;
      v19 = (hkpMultiSphereShape::Self *)((char *)v19 + 16);
      v18 += 4;
      v23 = *(v18 - 3);
      v13 = fminf(v13, v22);
      v17 = fmaxf(v17, v23 + v21);
      v14 = fminf(v14, v23 - v21);
      v15 = fminf(v15, *(v18 - 2) - v21);
      v16 = fmaxf(v16, v38 + v21);
      v40 = fmaxf(v40, v21 + *(v18 - 2));
    }
    while ( v20 != v25 );
  }
  *(float *)a4 = v13 - a3;
  *((uint32_t *)a4 + 3) = 0;
  *((uint32_t *)a4 + 7) = 0;
  *((float *)a4 + 1) = v14 - a3;
  *((float *)a4 + 2) = v15 - a3;
  *((float *)a4 + 4) = v16 + a3;
  *((float *)a4 + 5) = v17 + a3;
  *((float *)a4 + 6) = v40 + a3;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::castRayWithCollector  (binary VA: 0x16c2ad0)
// Original: hkpMultiSphereShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpMultiSphereShape::castRayWithCollector(int a1, float *a2, int a3, void (***a4)(uint32_t, int, float *))
{
  int result;
  int v5;
  float *v6;
  int v7;
  float v8; // xmm0_4
  int v9;
  float v10; // xmm1_4
  bool v11; // cc
  float v12; // xmm1_4
  int v13;
  float v14; // xmm7_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  __m128i v17;
  int v18;
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  int v25;
  float *v26;
  float v27; // xmm4_4
  float v28; // xmm6_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm5_4
  void (**v35)(uint32_t, int, float *);
  int v36; // xmm0_4
  typedef float *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[8];
  typedef uint32_t _g4_t_v41[8];
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v37)) > _g4_s0 ? (8u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v38)) > _g4_s1 ? (12u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v39)) > _g4_s2 ? (12u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v40)) > _g4_s3 ? (16u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v41)) > _g4_s4 ? (48u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v42)) > _g4_s5 ? (80u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v43)) > _g4_s6 ? (84u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v44)) > _g4_s7 ? (88u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v45)) > _g4_s8 ? (92u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v46)) > _g4_s9 ? (96u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v47)) > _g4_s10 ? (100u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v48)) > _g4_s11 ? (112u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v49)) > _g4_s12 ? (144u + sizeof(_g4_t_v49)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 144u);

  result = sub_16C22E0(a2, (float *)(a1 + 32), *(uint32_t *)(a1 + 16), (int)(uintptr_t)(v40), (int)(uintptr_t)(v41));
  v46 = 1065353216;
  if ( result != 0 )
  {
    v5 = result;
    v6 = a2;
    do
    {
      v7 = 0;
      v46 = 1065353216;
      v47 = -1;
      v49 = 0;
      v48 = -1;
      v8 = 1.0;
      v9 = -1;
      if ( v5 <= 0 )
        goto LABEL_11;
      do
      {
        v10 = *(float *)&v40[v7];
        v11 = v8 <= v10;
        v12 = fminf(v10, v8);
        if ( !v11 )
          v9 = v7;
        ++v7;
        v8 = v12;
      }
      while ( v7 != v5 );
      if ( v9 == -1 )
      {
LABEL_11:
        v24 = v42;
        v22 = v43;
        v23 = v44;
      }
      else
      {
        v13 = a1 + 32 + 16 * v41[v9];
        v14 = *(float *)v13;
        v46 = LODWORD(v12);
        v15 = *(float *)(v13 + 4);
        v16 = *(float *)(v13 + 8);
g4_m128_raw(v17) = *(unsigned int *)(v13 + 12);
        v18 = _mm_cvtsi128_si32(v17);
        v38 = (2130706432 - v18) & ((v18 ^ (v18 + 2139095040)) >> 31);
        v19 = (float)(v6[1] - v15) + (float)((float)((float)(v6[5] - v15) - (float)(v6[1] - v15)) * v12);
        v20 = (float)(v6[3] - *(float *)g4_m128_ptr<int32_t>(v17))
            + (float)((float)((float)(v6[7] - *(float *)g4_m128_ptr<int32_t>(v17)) - (float)(v6[3] - *(float *)g4_m128_ptr<int32_t>(v17))) * v8);
        v21 = (float)(2.0
                    - (float)(*(float *)g4_m128_ptr<int32_t>(v17)
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v38)) * *(float *)&v38)))
            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v38)) * *(float *)&v38);
        *(float *)g4_m128_ptr<int32_t>(v17) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * v21)) * v21;
        v22 = v19 * *(float *)g4_m128_ptr<int32_t>(v17);
        v23 = (float)((float)(v6[2] - v16) + (float)((float)((float)(v6[6] - v16) - (float)(v6[2] - v16)) * v8))
            * *(float *)g4_m128_ptr<int32_t>(v17);
        v24 = (float)((float)(*v6 - v14) + (float)((float)((float)(v6[4] - v14) - (float)(*v6 - v14)) * v8))
            * *(float *)g4_m128_ptr<int32_t>(v17);
        v42 = v24;
        v25 = v41[v9];
        v43 = v22;
        v47 = v25;
        v44 = v23;
        v45 = v20 * *(float *)g4_m128_ptr<int32_t>(v17);
      }
      v37 = v6;
      v39 = v5;
      v26 = *(float **)(a3 + 8);
      v27 = (float)(v26[1] * v24) + (float)(v26[5] * v22);
      v28 = v26[7] * v22;
      v29 = (float)(v26[2] * v24) + (float)(v26[6] * v22);
      v30 = v26[3] * v24;
      v31 = (float)((float)(v24 * *v26) + (float)(v22 * v26[4])) + (float)(v26[8] * v23);
      v32 = v27 + (float)(v26[9] * v23);
      v33 = v26[10] * v23;
      v34 = v23 * v26[11];
      v42 = v31;
      v43 = v32;
      v35 = *a4;
      v44 = v29 + v33;
      v45 = (float)(v30 + v28) + v34;
      (*v35)((uint32_t)(uintptr_t)(a4), a3, &v42);
      v6 = v37;
      v5 = v39 - 1;
      v36 = v40[v39 - 1];
      result = v41[v39 - 1];
      v41[v9] = result;
      v40[v9] = v36;
    }
    while ( v39 != 1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereShape::Construct  (binary VA: 0x16c2e40)
// Original: hkpMultiSphereShape::hkpMultiSphereShape
// ----------------------------------------------------------------------------
void hkpMultiSphereShape::Construct(hkpMultiSphereShape::Self *self, const hkVector4f::Self *a2, int a3)
{
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A7E8);
  v3 = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 25;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( a3 > 0 )
  {
    do
    {
      *(uint32_t *)((char *)self + v3 + 32) = *(uint32_t *)((char *)a2 + v3);
      *(uint32_t *)((char *)self + v3 + 36) = *(uint32_t *)((char *)a2 + v3 + 4);
      *(uint32_t *)((char *)self + v3 + 40) = *(uint32_t *)((char *)a2 + v3 + 8);
      *(uint32_t *)((char *)self + v3 + 44) = *(uint32_t *)((char *)a2 + v3 + 12);
      v3 += 16;
    }
    while ( v3 != 16 * a3 );
  }
  *((uint32_t *)self + 4) = a3;
}



// ============================================================================
// Address:   0x16c2ec0 (size: 59 bytes)
// Symbol:    _ZN19hkpMultiSphereShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpMultiSphereShape::hkpMultiSphereShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN19hkpMultiSphereShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpMultiSphereShape::Construct(int a1, int a2))(hkpMultiSphereShape::Self * self)
{
  hkpShape::hkpShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 25;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209A7E8);
  return (void (**)(hkpMultiSphereShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209A7E8));
}
// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::cleanup  (binary VA: 0x16cefd0)
// Original: hkpMultiSphereAgent::cleanup
// ----------------------------------------------------------------------------
int hkpMultiSphereAgent::cleanup(hkpMultiSphereAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int i;
  int v3;

  for ( i = 0; *((uint32_t *)self + 4) > i; ++i )
  {
    v3 = *(uint32_t *)(*((uint32_t *)self + 3) + 8 * i + 4);
    G4_VCALL<void>(v3, 36, a2);
  }
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::Destroy  (binary VA: 0x16cf0e0)
// Original: hkpMultiSphereAgent::~hkpMultiSphereAgent
// ----------------------------------------------------------------------------
void hkpMultiSphereAgent::Destroy(hkpMultiSphereAgent::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AE68);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::Destroy_ea16cf230  (binary VA: 0x16cf230)
// Original: hkpMultiSphereAgent::~hkpMultiSphereAgent
// ----------------------------------------------------------------------------
void hkpMultiSphereAgent::Destroy_ea16cf230(hkpMultiSphereAgent::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AE68);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::staticGetClosestPoints  (binary VA: 0x16cf390)
// Original: hkpMultiSphereAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::staticGetClosestPoints(int *a1, int a2, uint32_t *a3, int a4)
{
  uint32_t *result;
  float *v5;
  int v6;
  float v7; // xmm3_4
  float v8; // xmm5_4
  float *v9;
  float v10; // xmm4_4
  int v11; // xmm0_4
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef float _g4_t_v19[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  std::memcpy(v19, (const void *)a1[2], 176);
  v13 = *a1;
  hkpSphereShape::Construct((hkpSphereShape::Self *)v17, 0.0);
  v16[3] = (uint32_t)(uintptr_t)(a1);
  v16[2] = (uint32_t)(uintptr_t)(v19);
  result = (uint32_t *)v13;
  v5 = (float *)(v13 + 32);
  v12 = *(uint8_t *)(*(uint32_t *)a2 + 8);
  v6 = 0;
  if ( *(int *)(v13 + 16) > 0 )
  {
    result = a3;
    do
    {
      v7 = *v5;
      v8 = v5[1];
      v5 += 4;
      v9 = (float *)a1[2];
      v10 = *(v5 - 2);
      v19[12] = (float)((float)((float)(v7 * v19[0]) + (float)(v8 * v19[4])) + (float)(v10 * v19[8])) + v9[12];
      v19[13] = (float)((float)((float)(v19[1] * v7) + (float)(v19[5] * v8)) + (float)(v19[9] * v10)) + v9[13];
      v19[14] = (float)((float)((float)(v19[2] * v7) + (float)(v19[6] * v8)) + (float)(v19[10] * v10)) + v9[14];
      v15 = *result;
      v19[15] = (float)((float)((float)(v19[3] * v7) + (float)(v19[7] * v8)) + (float)(v19[11] * v10)) + v9[15];
      v11 = *((uint32_t *)v5 - 1);
      v16[0] = (uint32_t)(uintptr_t)(v17);
      v16[1] = v6++;
      v18 = v11;
      v14 = result;
      (*(void (**)(uint32_t *, int, uint32_t *, int))(v15
                                                        + 20 * *(uint8_t *)(v12 + v15 + 35 * v17[8] + 416)
                                                        + 2876))(
        v16,
        a2,
        result,
        a4);
      result = v14;
    }
    while ( *(uint32_t *)(v13 + 16) > v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::linearCast  (binary VA: 0x16cf600)
// Original: hkpMultiSphereAgent::linearCast
// ----------------------------------------------------------------------------
int hkpMultiSphereAgent::linearCast(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm5_4
  float *v11;
  float v12; // xmm4_4
  int v13; // xmm0_4
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  typedef uint32_t _g4_t_v17[8];
  typedef float _g4_t_v18[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v18)) > _g4_s4 ? (64u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);

  v14 = *a2;
  std::memcpy(v18, (const void *)a2[2], 176);
  hkpSphereShape::Construct((hkpSphereShape::Self *)v17, 0.0);
  v16[3] = (uint32_t)(uintptr_t)(a2);
  v16[2] = (uint32_t)(uintptr_t)(v18);
  v15 = *(uint32_t *)(a1 + 12);
  result = *(uint32_t *)(a1 + 16) - 1;
  if ( result >= 0 )
  {
    v7 = *(uint32_t *)(a1 + 16) - 1;
    v8 = v14 + 16 * result + 36;
    do
    {
      v9 = *(float *)(v8 - 4);
      v10 = *(float *)v8;
      v8 -= 16;
      v11 = (float *)a2[2];
      v12 = *(float *)(v8 + 20);
      v18[12] = (float)((float)((float)(v9 * v18[0]) + (float)(v10 * v18[4])) + (float)(v12 * v18[8])) + v11[12];
      v18[13] = (float)((float)((float)(v18[1] * v9) + (float)(v18[5] * v10)) + (float)(v18[9] * v12)) + v11[13];
      v18[14] = (float)((float)((float)(v18[2] * v9) + (float)(v18[6] * v10)) + (float)(v18[10] * v12)) + v11[14];
      v18[15] = (float)((float)((float)(v18[3] * v9) + (float)(v18[7] * v10)) + (float)(v18[11] * v12)) + v11[15];
      v13 = *(uint32_t *)(v8 + 24);
      v16[0] = (uint32_t)(uintptr_t)(v17);
      v16[1] = v7;
      v17[4] = v13;
      --v7;
      result = (*(int (**)(uint32_t, uint32_t *, int, int, int, int))(**(uint32_t **)(v15 + 4) + 28))(
                 *(uint32_t *)(v15 + 4),
                 v16,
                 a3,
                 a4,
                 a5,
                 a6);
    }
    while ( v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::staticLinearCast  (binary VA: 0x16cf930)
// Original: hkpMultiSphereAgent::staticLinearCast
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::staticLinearCast(int *a1, int a2, uint32_t *a3, int a4, int a5)
{
  float *v5;
  uint32_t *result;
  int v7;
  float v8; // xmm3_4
  float v9; // xmm5_4
  float *v10;
  float v11; // xmm4_4
  int v12; // xmm0_4
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[16];
  typedef int _g4_t_v19;
  typedef float _g4_t_v20[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v20)) > _g4_s6 ? (64u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  std::memcpy(v20, (const void *)a1[2], 176);
  v15 = *a1;
  hkpSphereShape::Construct((hkpSphereShape::Self *)v18, 0.0);
  v17[3] = (uint32_t)(uintptr_t)(a1);
  v17[2] = (uint32_t)(uintptr_t)(v20);
  v5 = (float *)(v15 + 32);
  result = *(uint32_t **)(v15 + 16);
  v14 = *(uint8_t *)(*(uint32_t *)a2 + 8);
  v7 = 0;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    result = a3;
    do
    {
      v8 = *v5;
      v9 = v5[1];
      v5 += 4;
      v10 = (float *)a1[2];
      v11 = *(v5 - 2);
      v20[12] = (float)((float)((float)(v8 * v20[0]) + (float)(v9 * v20[4])) + (float)(v11 * v20[8])) + v10[12];
      v20[13] = (float)((float)((float)(v20[1] * v8) + (float)(v20[5] * v9)) + (float)(v20[9] * v11)) + v10[13];
      v20[14] = (float)((float)((float)(v20[2] * v8) + (float)(v20[6] * v9)) + (float)(v20[10] * v11)) + v10[14];
      v20[15] = (float)((float)((float)(v20[3] * v8) + (float)(v20[7] * v9)) + (float)(v20[11] * v11)) + v10[15];
      v12 = *((uint32_t *)v5 - 1);
      v17[0] = (uint32_t)(uintptr_t)(v18);
      v13 = *result;
      v17[1] = v7++;
      v19 = v12;
      v16 = result;
      (*(void (**)(uint32_t *, int, uint32_t *, int, int))(v13
                                                             + 20 * *(uint8_t *)(v14 + v13 + 35 * v18[8] + 416)
                                                             + 2880))(
        v17,
        a2,
        result,
        a4,
        a5);
      result = v16;
    }
    while ( *(uint32_t *)(v15 + 16) > v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::getClosestPoints  (binary VA: 0x16cfc60)
// Original: hkpMultiSphereAgent::getClosestPoints
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::getClosestPoints(int a1, int *a2, int a3, int a4, int a5)
{
  uint32_t *result;
  uint32_t *v6;
  int v7;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm5_4
  float *v11;
  float v12; // xmm4_4
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[8];
  typedef float _g4_t_v17[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v17)) > _g4_s4 ? (64u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);

  std::memcpy(v17, (const void *)a2[2], 176);
  v13 = *a2;
  hkpSphereShape::Construct((hkpSphereShape::Self *)v16, 0.0);
  v15[3] = (uint32_t)(uintptr_t)(a2);
  v15[2] = (uint32_t)(uintptr_t)(v17);
  v14 = v13 + 32;
  result = v15;
  if ( *(uint32_t *)(a1 + 16) - 1 >= 0 )
  {
    v6 = *(uint32_t **)(a1 + 12);
    v7 = *(uint32_t *)(a1 + 16) - 1;
    do
    {
      v8 = v14 + 16 * *v6;
      v9 = *(float *)v8;
      v6 += 2;
      v10 = *(float *)(v8 + 4);
      v15[1] = v7;
      v11 = (float *)a2[2];
      --v7;
      v12 = *(float *)(v8 + 8);
      v17[12] = (float)((float)((float)(v9 * v17[0]) + (float)(v10 * v17[4])) + (float)(v12 * v17[8])) + v11[12];
      v17[13] = (float)((float)((float)(v17[1] * v9) + (float)(v17[5] * v10)) + (float)(v17[9] * v12)) + v11[13];
      v17[14] = (float)((float)((float)(v17[2] * v9) + (float)(v17[6] * v10)) + (float)(v17[10] * v12)) + v11[14];
      v17[15] = (float)((float)((float)(v17[3] * v9) + (float)(v17[7] * v10)) + (float)(v17[11] * v12)) + v11[15];
      v16[4] = *(uint32_t *)(v8 + 12);
      v15[0] = (uint32_t)(uintptr_t)(v16);
      result = (uint32_t *)G4_VCALL<int>(*(v6 - 1), 24, v15, a3, a4, a5);
    }
    while ( v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::staticGetPenetrations  (binary VA: 0x16cfe90)
// Original: hkpMultiSphereAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::staticGetPenetrations(int *a1, int a2, uint32_t *a3, int a4)
{
  int v4;
  uint32_t *result;
  int v6;
  float v7; // xmm3_4
  float v8; // xmm5_4
  float *v9;
  float v10; // xmm4_4
  int v11; // xmm0_4
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef float _g4_t_v19[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  std::memcpy(v19, (const void *)a1[2], 176);
  v13 = *a1;
  hkpSphereShape::Construct((hkpSphereShape::Self *)v17, 0.0);
  v16[3] = (uint32_t)(uintptr_t)(a1);
  v16[2] = (uint32_t)(uintptr_t)(v19);
  v4 = v13 + 32;
  result = *(uint32_t **)(v13 + 16);
  v12 = *(uint8_t *)(*(uint32_t *)a2 + 8);
  v6 = 0;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    result = a3;
    do
    {
      v7 = *(float *)v4;
      v8 = *(float *)(v4 + 4);
      v9 = (float *)a1[2];
      v10 = *(float *)(v4 + 8);
      v19[12] = (float)((float)((float)(*(float *)v4 * v19[0]) + (float)(v8 * v19[4])) + (float)(v10 * v19[8])) + v9[12];
      v19[13] = (float)((float)((float)(v19[1] * v7) + (float)(v19[5] * v8)) + (float)(v19[9] * v10)) + v9[13];
      v19[14] = (float)((float)((float)(v19[2] * v7) + (float)(v19[6] * v8)) + (float)(v19[10] * v10)) + v9[14];
      v15 = *result;
      v19[15] = (float)((float)((float)(v19[3] * v7) + (float)(v19[7] * v8)) + (float)(v19[11] * v10)) + v9[15];
      v11 = *(uint32_t *)(v4 + 12);
      v16[0] = (uint32_t)(uintptr_t)(v17);
      v16[1] = v6;
      v18 = v11;
      v14 = result;
      (*(void (**)(uint32_t *, int, uint32_t *, int))(v15
                                                        + 20 * *(uint8_t *)(v12 + v15 + 35 * v17[8] + 416)
                                                        + 2872))(
        v16,
        a2,
        result,
        a4);
      result = (uint32_t *)a4;
      if ( *(uint8_t *)(a4 + 4) != 0 )
        break;
      ++v6;
      v4 += 16;
      result = v14;
    }
    while ( *(uint32_t *)(v13 + 16) > v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::getPenetrations  (binary VA: 0x16d0100)
// Original: hkpMultiSphereAgent::getPenetrations
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::getPenetrations(int a1, int *a2, int a3, int a4, uint8_t *a5)
{
  int v5;
  int v6;
  uint32_t *result;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm5_4
  float *v11;
  float v12; // xmm4_4
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[8];
  typedef float _g4_t_v17[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v17)) > _g4_s4 ? (64u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);

  std::memcpy(v17, (const void *)a2[2], 176);
  v13 = *a2;
  hkpSphereShape::Construct((hkpSphereShape::Self *)v16, 0.0);
  v15[3] = (uint32_t)(uintptr_t)(a2);
  v15[2] = (uint32_t)(uintptr_t)(v17);
  v5 = *(uint32_t *)(a1 + 12);
  v14 = v13 + 32;
  v6 = *(uint32_t *)(a1 + 16) - 1;
  result = v15;
  if ( v6 >= 0 )
  {
    do
    {
      v8 = v14 + 16 * *(uint32_t *)v5;
      v9 = *(float *)v8;
      v10 = *(float *)(v8 + 4);
      v15[1] = v6;
      v11 = (float *)a2[2];
      v12 = *(float *)(v8 + 8);
      v17[12] = (float)((float)((float)(v9 * v17[0]) + (float)(v10 * v17[4])) + (float)(v12 * v17[8])) + v11[12];
      v17[13] = (float)((float)((float)(v17[1] * v9) + (float)(v17[5] * v10)) + (float)(v17[9] * v12)) + v11[13];
      v17[14] = (float)((float)((float)(v17[2] * v9) + (float)(v17[6] * v10)) + (float)(v17[10] * v12)) + v11[14];
      v17[15] = (float)((float)((float)(v17[3] * v9) + (float)(v17[7] * v10)) + (float)(v17[11] * v12)) + v11[15];
      v16[4] = *(uint32_t *)(v8 + 12);
      v15[0] = (uint32_t)(uintptr_t)(v16);
      (*(void (**)(uint32_t, uint32_t *, int, int, uint8_t *))(**(uint32_t **)(v5 + 4) + 20))(
        *(uint32_t *)(v5 + 4),
        v15,
        a3,
        a4,
        a5);
      result = (uint32_t *)(a5);
      if ( a5[4] != 0 )
        break;
      --v6;
      v5 += 8;
    }
    while ( v6 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::processCollision  (binary VA: 0x16d0330)
// Original: hkpMultiSphereAgent::processCollision
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::processCollision(int a1, int *a2, int a3, int a4, int a5)
{
  uint32_t *result;
  uint32_t *v6;
  int v7;
  int v8;
  float v9; // xmm5_4
  float *v10;
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef uint32_t _g4_t_v20[8];
  typedef float _g4_t_v21[47];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v21)) > _g4_s4 ? (64u + sizeof(_g4_t_v21)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  std::memcpy(v21, (const void *)a2[2], 176);
  v17 = *a2;
  hkpSphereShape::Construct((hkpSphereShape::Self *)v20, 0.0);
  v19[3] = (uint32_t)(uintptr_t)(a2);
  v19[2] = (uint32_t)(uintptr_t)(v21);
  v18 = v17 + 32;
  result = v19;
  if ( *(uint32_t *)(a1 + 16) - 1 >= 0 )
  {
    v6 = *(uint32_t **)(a1 + 12);
    v7 = *(uint32_t *)(a1 + 16) - 1;
    do
    {
      v8 = v18 + 16 * *v6;
      v6 += 2;
      v9 = *(float *)(v8 + 4);
      v10 = (float *)a2[2];
      v11 = *(float *)(v8 + 8);
      v12 = (float)((float)(v21[0] * *(float *)v8) + (float)(v21[4] * v9)) + (float)(v21[8] * v11);
      v13 = (float)((float)(v21[1] * *(float *)v8) + (float)(v21[5] * v9)) + (float)(v21[9] * v11);
      v14 = (float)((float)(v21[2] * *(float *)v8) + (float)(v21[6] * v9)) + (float)(v21[10] * v11);
      v15 = (float)((float)(*(float *)v8 * v21[3]) + (float)(v9 * v21[7])) + (float)(v11 * v21[11]);
      v21[12] = v12 + v10[12];
      v21[13] = v10[13] + v13;
      v21[14] = v10[14] + v14;
      v21[15] = v10[15] + v15;
      v21[16] = v10[16] + v12;
      v21[17] = v10[17] + v13;
      v21[18] = v10[18] + v14;
      v21[19] = v10[19] + v15;
      v19[1] = v7--;
      v21[20] = v12 + v10[20];
      v21[21] = v13 + v10[21];
      v21[22] = v14 + v10[22];
      v16 = v15 + v10[23];
      v19[0] = (uint32_t)(uintptr_t)(v20);
      v21[23] = v16;
      v20[4] = *(uint32_t *)(v8 + 12);
      result = (uint32_t *)G4_VCALL<int>(*(v6 - 1), 32, v19, a3, a4, a5);
    }
    while ( v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::registerAgent  (binary VA: 0x16d0760)
// Original: hkpMultiSphereAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpMultiSphereAgent::registerAgent(hkpMultiSphereAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpMultiSphereAgent::createListBAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 25);
  v2[0] = (uint32_t)(uintptr_t)(hkpMultiSphereAgent::createListAAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpMultiSphereAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpMultiSphereAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 256;
  v2[3] = (uint32_t)(uintptr_t)(((uint32_t * (*)(int *, int, uint32_t *, int, int))hkpMultiSphereAgent::staticLinearCast));
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 25, -1);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::Construct  (binary VA: 0x16d0830)
// Original: hkpMultiSphereAgent::hkpMultiSphereAgent
// ----------------------------------------------------------------------------
float * hkpMultiSphereAgent::Construct(uint32_t *a1, int *a2, int a3, uint32_t *a4, int a5)
{
  uint32_t *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  float *result;
  int v12;
  int v13;
  int v14;
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35[4];
  typedef uint32_t _g4_t_v36[2];
  typedef float *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef uint8_t _g4_t_v39[16];
  typedef int _g4_t_v40;
  typedef float _g4_t_v41[50];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v32)) > _g4_s7 ? (36u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v33)) > _g4_s8 ? (36u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v34)) > _g4_s9 ? (36u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v35)) > _g4_s10 ? (40u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v36)) > _g4_s11 ? (44u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v37)) > _g4_s12 ? (52u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v38)) > _g4_s13 ? (56u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v39)) > _g4_s14 ? (60u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v40)) > _g4_s15 ? (76u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v41)) > _g4_s16 ? (92u + sizeof(_g4_t_v41)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);

  LODWORD(v41[46]) = (uint32_t)(uintptr_t)(&a1);
  v5 = a1;
  v27 = a1;
  v26 = a2;
  v6 = a2;
  v31 = a3;
  v30 = a4;
  v25 = a5;
  v7 = a5;
  a1[1] = -65535;
  v27[2] = v7;
  *v27 = ((uint32_t)(uintptr_t)&off_209AE68);
  v27[4] = 0;
  v27[5] = -2147483644;
  v27[3] = (uint32_t)(uintptr_t)(v27 + 6);
  v8 = *v6;
  v28 = *(uint32_t *)(*v6 + 16);
  if ( v28 <= 4 )
  {
    v34 = *v6;
    hkpSphereShape::Construct((hkpSphereShape::Self *)v39, 0.0);
    result = (float *)v26[2];
    std::memcpy(v41, result, 176);
    v38 = v26;
    v12 = v34 + 32;
    v37 = v41;
    if ( v28 <= 0 )
      return result;
  }
  else
  {
    v9 = *(uint32_t *)(*v6 + 16);
    v10 = 8;
    if ( v9 > 7 )
      v10 = v9;
    v32 = v8;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v35, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v5 + 3, v10, 8);
    hkpSphereShape::Construct((hkpSphereShape::Self *)v39, 0.0);
    result = (float *)v26[2];
    std::memcpy(v41, result, 176);
    v38 = v26;
    v12 = v32 + 32;
    v37 = v41;
  }
  v13 = 0;
  while ( 1 )
  {
    v15 = *(float *)(v12 + 4);
    v16 = *(float *)(v12 + 8);
    v17 = (float)((float)(v41[0] * *(float *)v12) + (float)(v41[4] * v15)) + (float)(v41[8] * v16);
    v18 = (float)((float)(v41[1] * *(float *)v12) + (float)(v41[5] * v15)) + (float)(v41[9] * v16);
    v19 = (float)((float)(v41[2] * *(float *)v12) + (float)(v41[6] * v15)) + (float)(v41[10] * v16);
    v20 = (float)((float)(*(float *)v12 * v41[3]) + (float)(v15 * v41[7])) + (float)(v16 * v41[11]);
    v41[12] = v17 + result[12];
    v41[13] = result[13] + v18;
    v41[14] = result[14] + v19;
    v41[15] = result[15] + v20;
    v41[16] = result[16] + v17;
    v41[17] = result[17] + v18;
    v41[18] = result[18] + v19;
    v41[19] = result[19] + v20;
    v41[20] = v17 + result[20];
    v41[21] = v18 + result[21];
    v41[22] = v19 + result[22];
    v41[23] = v20 + result[23];
    v21 = *(uint32_t *)(v12 + 12);
    v36[0] = (uint32_t)(uintptr_t)(v39);
    v36[1] = v13;
    v40 = v21;
    v22 = v27[3];
    v33 = v27[4];
    v27[4] = v33 + 1;
    v29 = (uint32_t *)(v22 + 8 * v33);
    v23 = *v30 + 35 * v39[8];
    v24 = *(uint8_t *)(*(uint32_t *)v31 + 8);
    v14 = v30[6] != 0 ? *(uint8_t *)(v24 + v23 + 1641) : *(uint8_t *)(v24 + v23 + 416);
    result = (float *)(*(int (**)(uint32_t *, int, uint32_t *, int))(*v30 + 20 * v14 + 2868))(v36, v31, v30, v25);
    v12 += 16;
    *v29 = v13++;
    v29[1] = (uint32_t)(uintptr_t)(result);
    if ( v13 == v28 )
      break;
    result = (float *)v26[2];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::createListAAgent  (binary VA: 0x16d0c30)
// Original: hkpMultiSphereAgent::createListAAgent
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::createListAAgent(int *a1, int a2, uint32_t *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpMultiSphereAgent::Construct(v5, a1, a2, a3, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereAgent::createListBAgent  (binary VA: 0x16d0ca0)
// Original: hkpMultiSphereAgent::createListBAgent
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereAgent::createListBAgent(int a1, int *a2, uint32_t *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpMultiSphereAgent::Construct(v5, a2, a1, a3, a4);
  *v5 = ((uint32_t)(uintptr_t)&off_209AE08);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::cleanup  (binary VA: 0x16db670)
// Original: hkpMultiSphereTriangleAgent::cleanup
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::cleanup(hkpMultiSphereTriangleAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  uint16_t *v2;
  int result;

  v2 = (uint16_t *)self;
  do
  {
    result = v2[14];
    if ( (uint16_t)result != 0xFFFF )
      result = (*(int (**)(uint32_t, int, hkpConstraintOwner::Self *))(**((uint32_t **)self + 2) + 28))(
                 *((uint32_t *)self + 2),
                 result,
                 a2);
    ++v2;
  }
  while ( v2 != (uint16_t *)((char *)self + 16) );
  if ( self != nullptr )
    return G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::Destroy  (binary VA: 0x16db6e0)
// Original: hkpMultiSphereTriangleAgent::~hkpMultiSphereTriangleAgent
// ----------------------------------------------------------------------------
void hkpMultiSphereTriangleAgent::Destroy(hkpMultiSphereTriangleAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::Destroy_ea16db8b0  (binary VA: 0x16db8b0)
// Original: hkpMultiSphereTriangleAgent::~hkpMultiSphereTriangleAgent
// ----------------------------------------------------------------------------
void hkpMultiSphereTriangleAgent::Destroy_ea16db8b0(hkpMultiSphereTriangleAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent  (binary VA: 0x16db910)
// Original: hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent(int a1, uint32_t *a2, int a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  v5[1] = -65535;
  v5[2] = a4;
  v5[7] = -1;
  *v5 = ((uint32_t)(uintptr_t)&off_209B468);
  v5[8] = -1;
  v5[9] = -1;
  v5[10] = -1;
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(*a2 + 32, v5 + 3);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent  (binary VA: 0x16db9a0)
// Original: hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent
// ----------------------------------------------------------------------------
uint32_t * hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent(uint32_t *a1, int a2, int a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  v5[1] = -65535;
  v5[2] = a4;
  v5[7] = -1;
  *v5 = ((uint32_t)(uintptr_t)&off_209B468);
  v5[8] = -1;
  v5[9] = -1;
  v5[10] = -1;
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(*a1 + 32, v5 + 3);
  *v5 = ((uint32_t)(uintptr_t)&off_209B408);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::getPenetrations  (binary VA: 0x16dc320)
// Original: hkpMultiSphereTriangleAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::getPenetrations(int a1, int *a2, float **a3, int a4, int a5)
{
  float *v5;
  float v6; // xmm6_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18;
  float *v19;
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  int result;
  float v24; // xmm3_4
  float v25; // xmm2_4
  float *v26;
  float v27; // xmm1_4
  int v28;
  float *v29;
  uint8_t *v30;
  typedef int _g4_t_v31;
  typedef float *_g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
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
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef uint8_t *_g4_t_v61;
  typedef float _g4_t_v62[8];
  typedef float _g4_t_v63[12];
  typedef uint8_t _g4_t_v64[140];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v34)) > _g4_s3 ? (12u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v37)) > _g4_s6 ? (16u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v38)) > _g4_s7 ? (20u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v39)) > _g4_s8 ? (20u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v40)) > _g4_s9 ? (24u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v41)) > _g4_s10 ? (24u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v42)) > _g4_s11 ? (28u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v43)) > _g4_s12 ? (28u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v44)) > _g4_s13 ? (32u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v45)) > _g4_s14 ? (32u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v46)) > _g4_s15 ? (36u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v47)) > _g4_s16 ? (36u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v48)) > _g4_s17 ? (40u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v49)) > _g4_s18 ? (40u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v50)) > _g4_s19 ? (44u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v51)) > _g4_s20 ? (44u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v52)) > _g4_s21 ? (48u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v53)) > _g4_s22 ? (48u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v54)) > _g4_s23 ? (52u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v55)) > _g4_s24 ? (52u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v56)) > _g4_s25 ? (56u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v57)) > _g4_s26 ? (56u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v58)) > _g4_s27 ? (56u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v59)) > _g4_s28 ? (60u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v60)) > _g4_s29 ? (60u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v61)) > _g4_s30 ? (60u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v62)) > _g4_s31 ? (64u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v63)) > _g4_s32 ? (96u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v64)) > _g4_s33 ? (144u + sizeof(_g4_t_v64)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 144u);

  v31 = *a2;
  v32 = *a3;
  v5 = a3[2];
  v34 = v5[3];
  v54 = v5[6];
  v52 = v5[7];
  v6 = *v5;
  v40 = v5[1];
  v59 = v5[2];
  v7 = v5[4];
  v8 = v5[8];
  v56 = v5[5];
  v50 = v5[9];
  v48 = v5[10];
  v46 = v5[11];
  v38 = v5[14];
  v36 = v5[15];
  v9 = (*a3)[17];
  v10 = (*a3)[16];
  v44 = v5[12];
  v42 = v5[13];
  v11 = (*a3)[18];
  v63[8] = (float)((float)((float)(v10 * *v5) + (float)(v9 * v7)) + (float)(v11 * v8)) + v44;
  v63[9] = (float)((float)((float)(v40 * v10) + (float)(v56 * v9)) + (float)(v50 * v11)) + v42;
  v63[10] = (float)((float)((float)(v59 * v10) + (float)(v54 * v9)) + (float)(v48 * v11)) + v38;
  v63[11] = (float)((float)((float)(v10 * v34) + (float)(v9 * v52)) + (float)(v11 * v46)) + v36;
  v12 = v32[12];
  v13 = v32[13];
  v14 = v32[14];
  v63[4] = (float)((float)((float)(v12 * v6) + (float)(v13 * v7)) + (float)(v14 * v8)) + v44;
  v63[5] = (float)((float)((float)(v40 * v12) + (float)(v56 * v13)) + (float)(v50 * v14)) + v42;
  v63[6] = (float)((float)((float)(v59 * v12) + (float)(v54 * v13)) + (float)(v48 * v14)) + v38;
  v63[7] = (float)((float)((float)(v12 * v34) + (float)(v13 * v52)) + (float)(v14 * v46)) + v36;
  v15 = v32[8];
  v16 = v32[9];
  v17 = v32[10];
  v63[0] = (float)((float)((float)(v6 * v15) + (float)(v7 * v16)) + (float)(v8 * v17)) + v44;
  v63[1] = (float)((float)((float)(v40 * v15) + (float)(v56 * v16)) + (float)(v50 * v17)) + v42;
  v63[2] = (float)((float)((float)(v59 * v15) + (float)(v54 * v16)) + (float)(v48 * v17)) + v38;
  v63[3] = (float)((float)((float)(v15 * v34) + (float)(v16 * v52)) + (float)(v17 * v46)) + v36;
  v55 = *(uint32_t *)(v31 + 16);
  v18 = v55 - 1;
  v19 = (float *)a2[2];
  v51 = *v19;
  v49 = v19[1];
  v47 = v19[2];
  v45 = v19[3];
  v43 = v19[4];
  v41 = v19[5];
  v39 = v19[6];
  v37 = v19[7];
  v35 = v19[8];
  v33 = v19[9];
  v53 = v19[10];
  v57 = v19[11];
  v60 = v19[12];
  v20 = v19[14];
  v21 = v19[13];
  v22 = v19[15];
  result = v31 + 32 + 16 * (v55 - 1) + 4;
  do
  {
    v24 = *(float *)(result - 4);
    v25 = *(float *)result;
    v26 = (float *)&v64[result + -4 - (v31 + 32)];
    result -= 16;
    v27 = *(float *)(result + 20);
    --v18;
    *v26 = (float)((float)((float)(v51 * v24) + (float)(v43 * v25)) + (float)(v35 * v27)) + v60;
    v26[1] = (float)((float)((float)(v49 * v24) + (float)(v41 * v25)) + (float)(v33 * v27)) + v21;
    v26[2] = (float)((float)((float)(v47 * v24) + (float)(v39 * v25)) + (float)(v53 * v27)) + v20;
    v26[3] = (float)((float)((float)(v24 * v45) + (float)(v25 * v37)) + (float)(v27 * v57)) + v22;
  }
  while ( v18 >= 0 );
  if ( v55 > 0 )
  {
    v28 = 0;
    v29 = (float *)(v31 + 44);
    v30 = v64;
    while ( 1 )
    {
      v61 = v30;
      v58 = v32[4] + *v29;
      result = hkpCollideTriangleUtil::closestPointTriangle(v30, v63, a1 + 12, v62, 0);
      if ( v58 > v62[4] )
        break;
      ++v28;
      v29 += 4;
      v30 = v61 + 16;
      if ( v28 == v55 )
        return result;
    }
    return G4_VCALL<int>(a5, 8, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::staticGetPenetrations  (binary VA: 0x16dc930)
// Original: hkpMultiSphereTriangleAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::staticGetPenetrations(int *a1, float **a2, int a3, int a4)
{
  float *v4;
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v17;
  float *v18;
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  float *v22;
  float v23; // xmm3_4
  float v24; // xmm2_4
  float *v25;
  float v26; // xmm1_4
  int result;
  int v28;
  float *v29;
  uint8_t *v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float *_g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
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
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef uint8_t *_g4_t_v62;
  typedef uint8_t _g4_t_v63[16];
  typedef float _g4_t_v64[8];
  typedef float _g4_t_v65[12];
  typedef uint8_t _g4_t_v66[140];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v32)) > _g4_s1 ? (16u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v33)) > _g4_s2 ? (20u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v34)) > _g4_s3 ? (24u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v35)) > _g4_s4 ? (28u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v36)) > _g4_s5 ? (28u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v37)) > _g4_s6 ? (32u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v38)) > _g4_s7 ? (32u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v39)) > _g4_s8 ? (36u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v40)) > _g4_s9 ? (36u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v41)) > _g4_s10 ? (40u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v42)) > _g4_s11 ? (40u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v43)) > _g4_s12 ? (44u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v44)) > _g4_s13 ? (44u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v45)) > _g4_s14 ? (48u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v46)) > _g4_s15 ? (48u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v47)) > _g4_s16 ? (52u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v48)) > _g4_s17 ? (52u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v49)) > _g4_s18 ? (56u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v50)) > _g4_s19 ? (56u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v51)) > _g4_s20 ? (60u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v52)) > _g4_s21 ? (60u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v53)) > _g4_s22 ? (64u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v54)) > _g4_s23 ? (64u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v55)) > _g4_s24 ? (68u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v56)) > _g4_s25 ? (68u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v57)) > _g4_s26 ? (72u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v58)) > _g4_s27 ? (72u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v59)) > _g4_s28 ? (72u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v60)) > _g4_s29 ? (76u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v61)) > _g4_s30 ? (76u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v62)) > _g4_s31 ? (76u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v63)) > _g4_s32 ? (80u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v64)) > _g4_s33 ? (96u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v65)) > _g4_s34 ? (128u + sizeof(_g4_t_v65)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v66)) > _g4_s35 ? (176u + sizeof(_g4_t_v66)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 128u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);

  v31 = *a1;
  v33 = *a2;
  v32 = (int)(uintptr_t)(*a2 + 8);
  v4 = a2[2];
  v35 = v4[3];
  v55 = v4[6];
  v53 = v4[7];
  v5 = *v4;
  v41 = v4[1];
  v60 = v4[2];
  v6 = v4[4];
  v7 = v4[8];
  v57 = v4[5];
  v51 = v4[9];
  v49 = v4[10];
  v47 = v4[11];
  v39 = v4[14];
  v37 = v4[15];
  v8 = (*a2)[17];
  v9 = (*a2)[16];
  v45 = v4[12];
  v43 = v4[13];
  v10 = (*a2)[18];
  v65[8] = (float)((float)((float)(v9 * *v4) + (float)(v8 * v6)) + (float)(v10 * v7)) + v45;
  v65[9] = (float)((float)((float)(v41 * v9) + (float)(v57 * v8)) + (float)(v51 * v10)) + v43;
  v65[10] = (float)((float)((float)(v60 * v9) + (float)(v55 * v8)) + (float)(v49 * v10)) + v39;
  v65[11] = (float)((float)((float)(v9 * v35) + (float)(v8 * v53)) + (float)(v10 * v47)) + v37;
  v11 = v33[12];
  v12 = v33[13];
  v13 = v33[14];
  v65[4] = (float)((float)((float)(v11 * v5) + (float)(v12 * v6)) + (float)(v13 * v7)) + v45;
  v65[5] = (float)((float)((float)(v41 * v11) + (float)(v57 * v12)) + (float)(v51 * v13)) + v43;
  v65[6] = (float)((float)((float)(v60 * v11) + (float)(v55 * v12)) + (float)(v49 * v13)) + v39;
  v65[7] = (float)((float)((float)(v11 * v35) + (float)(v12 * v53)) + (float)(v13 * v47)) + v37;
  v14 = v33[8];
  v15 = v33[9];
  v16 = v33[10];
  v65[0] = (float)((float)((float)(v5 * v14) + (float)(v6 * v15)) + (float)(v7 * v16)) + v45;
  v65[1] = (float)((float)((float)(v41 * v14) + (float)(v57 * v15)) + (float)(v51 * v16)) + v43;
  v65[2] = (float)((float)((float)(v60 * v14) + (float)(v55 * v15)) + (float)(v49 * v16)) + v39;
  v65[3] = (float)((float)((float)(v14 * v35) + (float)(v15 * v53)) + (float)(v16 * v47)) + v37;
  v56 = *(uint32_t *)(v31 + 16);
  v17 = v56 - 1;
  v18 = (float *)a1[2];
  v52 = *v18;
  v50 = v18[1];
  v48 = v18[2];
  v46 = v18[3];
  v44 = v18[4];
  v42 = v18[5];
  v40 = v18[6];
  v38 = v18[7];
  v36 = v18[8];
  v34 = v18[9];
  v54 = v18[10];
  v58 = v18[11];
  v61 = v18[12];
  v19 = v18[14];
  v20 = v18[13];
  v21 = v18[15];
  v22 = (float *)(v31 + 32 + 16 * (v56 - 1) + 4);
  do
  {
    v23 = *(v22 - 1);
    v24 = *v22;
    v25 = (float *)&v66[(uint32_t)(uintptr_t)((char *)v22 - 4 - (v31 + 32))];
    v22 -= 4;
    v26 = v22[5];
    --v17;
    *v25 = (float)((float)((float)(v52 * v23) + (float)(v44 * v24)) + (float)(v36 * v26)) + v61;
    v25[1] = (float)((float)((float)(v50 * v23) + (float)(v42 * v24)) + (float)(v34 * v26)) + v20;
    v25[2] = (float)((float)((float)(v48 * v23) + (float)(v40 * v24)) + (float)(v54 * v26)) + v19;
    v25[3] = (float)((float)((float)(v23 * v46) + (float)(v24 * v38)) + (float)(v26 * v58)) + v21;
  }
  while ( v17 >= 0 );
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(v32, v63);
  if ( v56 > 0 )
  {
    v28 = 0;
    v29 = (float *)(v31 + 44);
    v30 = v66;
    while ( 1 )
    {
      v62 = v30;
      v59 = v33[4] + *v29;
      result = hkpCollideTriangleUtil::closestPointTriangle(v30, v65, v63, v64, 0);
      if ( v59 > v64[4] )
        break;
      ++v28;
      v29 += 4;
      v30 = v62 + 16;
      if ( v28 == v56 )
        return result;
    }
    return G4_VCALL<int>(a4, 8, a1, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::staticGetClosestPoints  (binary VA: 0x16dcf50)
// Original: hkpMultiSphereTriangleAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::staticGetClosestPoints(int *a1, float **a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float *v8;
  float *v9;
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22;
  float *v23;
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm4_4
  float *v27;
  float v28; // xmm3_4
  float v29; // xmm2_4
  float *v30;
  float v31; // xmm1_4
  float *v32;
  float v33; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  uint64_t v38; // rax
  int v39;
  uint32_t *v40;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
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
  typedef int _g4_t_v67;
  typedef float *_g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef int _g4_t_i;
  typedef uint8_t _g4_t_v75[16];
  typedef float _g4_t_v76[16];
  typedef float _g4_t_v77[12];
  typedef float _g4_t_v78[16];
  typedef uint8_t _g4_t_v79[140];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (8u + sizeof(_g4_t_v42)) > _g4_s0 ? (8u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v43)) > _g4_s1 ? (12u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v44)) > _g4_s2 ? (16u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v45)) > _g4_s3 ? (20u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v46)) > _g4_s4 ? (24u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v47)) > _g4_s5 ? (24u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v49)) > _g4_s7 ? (28u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v50)) > _g4_s8 ? (32u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v51)) > _g4_s9 ? (32u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v52)) > _g4_s10 ? (36u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v53)) > _g4_s11 ? (36u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v54)) > _g4_s12 ? (40u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v55)) > _g4_s13 ? (40u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v56)) > _g4_s14 ? (44u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v57)) > _g4_s15 ? (44u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v58)) > _g4_s16 ? (48u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v59)) > _g4_s17 ? (48u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v60)) > _g4_s18 ? (52u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v61)) > _g4_s19 ? (52u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v62)) > _g4_s20 ? (56u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v63)) > _g4_s21 ? (56u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v64)) > _g4_s22 ? (60u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v65)) > _g4_s23 ? (60u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v66)) > _g4_s24 ? (64u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v67)) > _g4_s25 ? (64u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v68)) > _g4_s26 ? (68u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v69)) > _g4_s27 ? (72u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v70)) > _g4_s28 ? (72u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v71)) > _g4_s29 ? (72u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v72)) > _g4_s30 ? (76u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v73)) > _g4_s31 ? (76u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_i)) > _g4_s32 ? (76u + sizeof(_g4_t_i)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v75)) > _g4_s33 ? (80u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v76)) > _g4_s34 ? (96u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v77)) > _g4_s35 ? (160u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v78)) > _g4_s36 ? (208u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (272u + sizeof(_g4_t_v79)) > _g4_s37 ? (272u + sizeof(_g4_t_v79)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 160u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 208u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 272u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v43 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtMultiSphereTriangle");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = (float *)v79;
  v42 = *a1;
  v68 = *a2;
  v44 = (int)(uintptr_t)(*a2 + 8);
  v9 = a2[2];
  v46 = v9[3];
  v48 = v9[5];
  v50 = v9[6];
  v72 = v9[7];
  v64 = v9[10];
  v10 = *v9;
  v69 = v9[1];
  v66 = v9[2];
  v11 = v9[4];
  v12 = v9[8];
  v62 = v9[9];
  v60 = v9[11];
  v58 = v9[12];
  v56 = v9[13];
  v54 = v9[14];
  v52 = v9[15];
  v13 = (*a2)[16];
  v14 = (*a2)[17];
  v15 = (*a2)[18];
  v77[8] = (float)((float)((float)(*v9 * v13) + (float)(v11 * v14)) + (float)(v12 * v15)) + v58;
  v77[9] = (float)((float)((float)(v69 * v13) + (float)(v48 * v14)) + (float)(v62 * v15)) + v56;
  v77[10] = (float)((float)((float)(v66 * v13) + (float)(v50 * v14)) + (float)(v64 * v15)) + v54;
  v77[11] = (float)((float)((float)(v13 * v46) + (float)(v14 * v72)) + (float)(v15 * v60)) + v52;
  v16 = v68[12];
  v17 = v68[13];
  v18 = v68[14];
  v77[4] = (float)((float)((float)(v10 * v16) + (float)(v11 * v17)) + (float)(v12 * v18)) + v58;
  v77[5] = (float)((float)((float)(v69 * v16) + (float)(v48 * v17)) + (float)(v62 * v18)) + v56;
  v77[6] = (float)((float)((float)(v66 * v16) + (float)(v50 * v17)) + (float)(v64 * v18)) + v54;
  v77[7] = (float)((float)((float)(v16 * v46) + (float)(v17 * v72)) + (float)(v18 * v60)) + v52;
  v19 = v68[8];
  v20 = v68[9];
  v21 = v68[10];
  v77[0] = (float)((float)((float)(v10 * v19) + (float)(v11 * v20)) + (float)(v12 * v21)) + v58;
  v77[1] = (float)((float)((float)(v69 * v19) + (float)(v48 * v20)) + (float)(v62 * v21)) + v56;
  v77[2] = (float)((float)((float)(v66 * v19) + (float)(v50 * v20)) + (float)(v64 * v21)) + v54;
  v77[3] = (float)((float)((float)(v19 * v46) + (float)(v20 * v72)) + (float)(v21 * v60)) + v52;
  v67 = *(uint32_t *)(v42 + 16);
  v22 = v67 - 1;
  v23 = (float *)a1[2];
  v73 = *v23;
  v70 = v23[1];
  v65 = v23[2];
  v63 = v23[3];
  v61 = v23[4];
  v59 = v23[5];
  v57 = v23[6];
  v55 = v23[7];
  v53 = v23[8];
  v51 = v23[9];
  v49 = v23[10];
  v47 = v23[11];
  v45 = v23[12];
  v24 = v23[14];
  v25 = v23[13];
  v26 = v23[15];
  v27 = (float *)(v42 + 32 + 16 * (v67 - 1) + 4);
  do
  {
    v28 = *(v27 - 1);
    v29 = *v27;
    v30 = (float *)&v79[(uint32_t)(uintptr_t)((char *)v27 - 4 - (v42 + 32))];
    v27 -= 4;
    v31 = v27[5];
    --v22;
    *v30 = (float)((float)((float)(v73 * v28) + (float)(v61 * v29)) + (float)(v53 * v31)) + v45;
    v30[1] = (float)((float)((float)(v70 * v28) + (float)(v59 * v29)) + (float)(v51 * v31)) + v25;
    v30[2] = (float)((float)((float)(v65 * v28) + (float)(v57 * v29)) + (float)(v49 * v31)) + v24;
    v30[3] = (float)((float)((float)(v28 * v63) + (float)(v29 * v55)) + (float)(v31 * v47)) + v26;
  }
  while ( v22 >= 0 );
  hkpCollideTriangleUtil::setupClosestPointTriangleCache(v44, v75);
  if ( v67 > 0 )
  {
    v32 = (float *)(v42 + 44);
    for ( i = 0; i != v67; ++i )
    {
      v71 = v68[4] + *v32;
      hkpCollideTriangleUtil::closestPointTriangle(v8, v77, v75, v76, 0);
      if ( (float)(*(float *)(a3 + 12) + v71) > v76[4] )
      {
        v33 = v68[4] - v76[4];
        v76[14] = v76[2];
        v76[12] = v76[0];
        v78[4] = v76[0];
        v76[13] = v76[1];
        v78[5] = v76[1];
        v34 = (float)(v76[0] * v33) + *v8;
        v35 = (float)(v76[1] * v33) + v8[1];
        v36 = (float)(v76[2] * v33) + v8[2];
        v37 = (float)(v33 * v76[3]) + v8[3];
        v76[15] = v76[4] - v71;
        v76[8] = v34;
        v76[9] = v35;
        v78[0] = v34;
        v76[10] = v36;
        v76[11] = v37;
        v78[1] = v35;
        v78[2] = v36;
        v78[3] = v37;
        v78[6] = v76[2];
        v78[7] = v76[4] - v71;
        LODWORD(v78[12]) = (uint32_t)(uintptr_t)(a1);
        LODWORD(v78[13]) = (uint32_t)(uintptr_t)(a2);
        v78[10] = v76[2];
        v78[11] = v76[4] - v71;
        v78[8] = v76[0];
        v78[9] = v76[1];
        G4_VCALL<void>(a4, 8, v78);
      }
      v32 += 4;
      v8 += 4;
    }
  }
  LODWORD(v38) = (uint32_t)(uintptr_t)(v43);
  v39 = *v43;
  v40 = *(uint32_t **)(*v43 + 4);
  if ( (unsigned int)(uintptr_t)(v40) < *(uint32_t *)(*v43 + 12) )
  {
    *v40 = (uint32_t)(uintptr_t)("Et");
    v38 = __rdtsc();
    v40[1] = v38;
    *(uint32_t *)(v39 + 4) = (uint32_t)(uintptr_t)(v40 + 3);
  }
  return v38;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::getClosestPoints  (binary VA: 0x16dd720)
// Original: hkpMultiSphereTriangleAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::getClosestPoints(int a1, int *a2, float **a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  float *v9;
  float *v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;
  float *v24;
  float v25; // xmm5_4
  float v26; // xmm6_4
  float v27; // xmm4_4
  float *v28;
  float v29; // xmm3_4
  float v30; // xmm2_4
  float *v31;
  float v32; // xmm1_4
  float *v33;
  float v34; // xmm2_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  uint64_t v39; // rax
  int v40;
  uint32_t *v41;
  typedef int _g4_t_v43;
  typedef int *_g4_t_v44;
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
  typedef int _g4_t_v67;
  typedef float *_g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef int _g4_t_i;
  typedef float _g4_t_v75[16];
  typedef float _g4_t_v76[12];
  typedef float _g4_t_v77[16];
  typedef uint8_t _g4_t_v78[140];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (12u + sizeof(_g4_t_v43)) > _g4_s0 ? (12u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v44)) > _g4_s1 ? (16u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v45)) > _g4_s2 ? (20u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v46)) > _g4_s3 ? (24u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v49)) > _g4_s6 ? (28u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v50)) > _g4_s7 ? (32u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v51)) > _g4_s8 ? (32u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v52)) > _g4_s9 ? (36u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v53)) > _g4_s10 ? (36u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v54)) > _g4_s11 ? (40u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v55)) > _g4_s12 ? (40u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v56)) > _g4_s13 ? (44u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v57)) > _g4_s14 ? (44u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v58)) > _g4_s15 ? (48u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v59)) > _g4_s16 ? (48u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v60)) > _g4_s17 ? (52u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v61)) > _g4_s18 ? (52u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v62)) > _g4_s19 ? (56u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v63)) > _g4_s20 ? (56u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v64)) > _g4_s21 ? (60u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v65)) > _g4_s22 ? (60u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v66)) > _g4_s23 ? (64u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v67)) > _g4_s24 ? (64u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v68)) > _g4_s25 ? (68u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v69)) > _g4_s26 ? (72u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v70)) > _g4_s27 ? (72u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v71)) > _g4_s28 ? (72u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v72)) > _g4_s29 ? (76u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v73)) > _g4_s30 ? (76u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_i)) > _g4_s31 ? (76u + sizeof(_g4_t_i)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v75)) > _g4_s32 ? (80u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v76)) > _g4_s33 ? (144u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v77)) > _g4_s34 ? (192u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (256u + sizeof(_g4_t_v78)) > _g4_s35 ? (256u + sizeof(_g4_t_v78)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 144u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 192u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 256u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v44 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtMultiSphereTriangle");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = (float *)v78;
  v43 = *a2;
  v68 = *a3;
  v10 = a3[2];
  v46 = v10[3];
  v50 = v10[6];
  v48 = v10[5];
  v72 = v10[7];
  v64 = v10[10];
  v60 = v10[11];
  v11 = *v10;
  v69 = v10[1];
  v66 = v10[2];
  v12 = v10[4];
  v13 = v10[8];
  v62 = v10[9];
  v58 = v10[12];
  v56 = v10[13];
  v54 = v10[14];
  v14 = (*a3)[16];
  v52 = v10[15];
  v15 = (*a3)[17];
  v16 = (*a3)[18];
  v76[8] = (float)((float)((float)(*v10 * v14) + (float)(v12 * v15)) + (float)(v13 * v16)) + v58;
  v76[9] = (float)((float)((float)(v69 * v14) + (float)(v48 * v15)) + (float)(v62 * v16)) + v56;
  v76[10] = (float)((float)((float)(v66 * v14) + (float)(v50 * v15)) + (float)(v64 * v16)) + v54;
  v76[11] = (float)((float)((float)(v14 * v46) + (float)(v15 * v72)) + (float)(v16 * v60)) + v52;
  v17 = v68[12];
  v18 = v68[13];
  v19 = v68[14];
  v76[4] = (float)((float)((float)(v11 * v17) + (float)(v12 * v18)) + (float)(v13 * v19)) + v58;
  v76[5] = (float)((float)((float)(v69 * v17) + (float)(v48 * v18)) + (float)(v62 * v19)) + v56;
  v76[6] = (float)((float)((float)(v66 * v17) + (float)(v50 * v18)) + (float)(v64 * v19)) + v54;
  v76[7] = (float)((float)((float)(v17 * v46) + (float)(v18 * v72)) + (float)(v19 * v60)) + v52;
  v20 = v68[8];
  v21 = v68[9];
  v22 = v68[10];
  v76[0] = (float)((float)((float)(v11 * v20) + (float)(v12 * v21)) + (float)(v13 * v22)) + v58;
  v76[1] = (float)((float)((float)(v69 * v20) + (float)(v48 * v21)) + (float)(v62 * v22)) + v56;
  v76[2] = (float)((float)((float)(v66 * v20) + (float)(v50 * v21)) + (float)(v64 * v22)) + v54;
  v76[3] = (float)((float)((float)(v20 * v46) + (float)(v21 * v72)) + (float)(v22 * v60)) + v52;
  v67 = *(uint32_t *)(v43 + 16);
  v23 = v67 - 1;
  v24 = (float *)a2[2];
  v73 = *v24;
  v70 = v24[1];
  v65 = v24[2];
  v63 = v24[3];
  v61 = v24[4];
  v59 = v24[5];
  v57 = v24[6];
  v55 = v24[7];
  v53 = v24[8];
  v51 = v24[9];
  v49 = v24[10];
  v47 = v24[11];
  v45 = v24[12];
  v25 = v24[14];
  v26 = v24[13];
  v27 = v24[15];
  v28 = (float *)(v43 + 32 + 16 * (v67 - 1) + 4);
  do
  {
    v29 = *(v28 - 1);
    v30 = *v28;
    v31 = (float *)&v78[(uint32_t)(uintptr_t)((char *)v28 - 4 - (v43 + 32))];
    v28 -= 4;
    v32 = v28[5];
    --v23;
    *v31 = (float)((float)((float)(v73 * v29) + (float)(v61 * v30)) + (float)(v53 * v32)) + v45;
    v31[1] = (float)((float)((float)(v70 * v29) + (float)(v59 * v30)) + (float)(v51 * v32)) + v26;
    v31[2] = (float)((float)((float)(v65 * v29) + (float)(v57 * v30)) + (float)(v49 * v32)) + v25;
    v31[3] = (float)((float)((float)(v29 * v63) + (float)(v30 * v55)) + (float)(v32 * v47)) + v27;
  }
  while ( v23 >= 0 );
  if ( v67 > 0 )
  {
    v33 = (float *)(v43 + 44);
    for ( i = 0; i != v67; ++i )
    {
      v71 = v68[4] + *v33;
      hkpCollideTriangleUtil::closestPointTriangle(v9, v76, a1 + 12, v75, 0);
      if ( (float)(*(float *)(a4 + 12) + v71) > v75[4] )
      {
        v34 = v68[4] - v75[4];
        v75[14] = v75[2];
        v75[12] = v75[0];
        v77[4] = v75[0];
        v75[13] = v75[1];
        v77[5] = v75[1];
        v35 = (float)(v75[0] * v34) + *v9;
        v36 = (float)(v75[1] * v34) + v9[1];
        v37 = (float)(v75[2] * v34) + v9[2];
        v38 = (float)(v34 * v75[3]) + v9[3];
        v75[15] = v75[4] - v71;
        v75[8] = v35;
        v75[9] = v36;
        v77[0] = v35;
        v75[10] = v37;
        v75[11] = v38;
        v77[1] = v36;
        v77[2] = v37;
        v77[3] = v38;
        v77[6] = v75[2];
        v77[7] = v75[4] - v71;
        LODWORD(v77[12]) = (uint32_t)(uintptr_t)(a2);
        LODWORD(v77[13]) = (uint32_t)(uintptr_t)(a3);
        v77[10] = v75[2];
        v77[11] = v75[4] - v71;
        v77[8] = v75[0];
        v77[9] = v75[1];
        G4_VCALL<void>(a5, 8, v77);
      }
      v33 += 4;
      v9 += 4;
    }
  }
  LODWORD(v39) = (uint32_t)(uintptr_t)(v44);
  v40 = *v44;
  v41 = *(uint32_t **)(*v44 + 4);
  if ( (unsigned int)(uintptr_t)(v41) < *(uint32_t *)(*v44 + 12) )
  {
    *v41 = (uint32_t)(uintptr_t)("Et");
    v39 = __rdtsc();
    v41[1] = v39;
    *(uint32_t *)(v40 + 4) = (uint32_t)(uintptr_t)(v41 + 3);
  }
  return v39;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::processCollision  (binary VA: 0x16dded0)
// Original: hkpMultiSphereTriangleAgent::processCollision
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::processCollision(int a1, int *a2, float **a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  float *v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  float *v25;
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm4_4
  int v29;
  int v30;
  float *v31;
  float *v32;
  float v33; // xmm3_4
  float v34; // xmm2_4
  float *v35;
  float v36; // xmm1_4
  int v37;
  int v38;
  float v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  uint16_t *v45;
  int v46;
  uint64_t v47; // rax
  int v48;
  uint32_t *v49;
  uint16_t v50;
  typedef int *_g4_t_v52;
  typedef int _g4_t_v53;
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
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float *_g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef uint16_t *_g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef int _g4_t_v83;
  typedef float _g4_t_v84[8];
  typedef float _g4_t_v85[12];
  typedef uint8_t _g4_t_v86[140];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v53)) > _g4_s1 ? (16u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v54)) > _g4_s2 ? (20u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v55)) > _g4_s3 ? (24u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v56)) > _g4_s4 ? (24u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v57)) > _g4_s5 ? (28u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v58)) > _g4_s6 ? (28u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v59)) > _g4_s7 ? (32u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v60)) > _g4_s8 ? (32u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v61)) > _g4_s9 ? (36u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v62)) > _g4_s10 ? (36u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v63)) > _g4_s11 ? (40u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v64)) > _g4_s12 ? (40u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v65)) > _g4_s13 ? (44u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v66)) > _g4_s14 ? (44u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v67)) > _g4_s15 ? (48u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v68)) > _g4_s16 ? (48u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v69)) > _g4_s17 ? (52u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v70)) > _g4_s18 ? (52u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v71)) > _g4_s19 ? (56u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v72)) > _g4_s20 ? (56u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v73)) > _g4_s21 ? (60u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v74)) > _g4_s22 ? (60u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v75)) > _g4_s23 ? (64u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v76)) > _g4_s24 ? (68u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v77)) > _g4_s25 ? (68u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v78)) > _g4_s26 ? (68u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v79)) > _g4_s27 ? (72u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v80)) > _g4_s28 ? (72u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v81)) > _g4_s29 ? (72u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v82)) > _g4_s30 ? (76u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v83)) > _g4_s31 ? (76u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v84)) > _g4_s32 ? (80u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v85)) > _g4_s33 ? (112u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v86)) > _g4_s34 ? (160u + sizeof(_g4_t_v86)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 68u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 72u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 160u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v52 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtMultiSphereTri");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *a2;
  v75 = *a3;
  v10 = a3[2];
  v55 = v10[3];
  v71 = v10[6];
  v82 = v10[5];
  v73 = v10[7];
  v69 = v10[10];
  v67 = v10[11];
  v11 = *v10;
  v63 = v10[1];
  v79 = v10[2];
  v12 = v10[4];
  v13 = v10[8];
  v76 = v10[9];
  v65 = v10[12];
  v61 = v10[13];
  v59 = v10[14];
  v14 = (*a3)[16];
  v15 = (*a3)[17];
  v57 = v10[15];
  v16 = (*a3)[18];
  v85[8] = (float)((float)((float)(v14 * *v10) + (float)(v12 * v15)) + (float)(v16 * v13)) + v65;
  v85[9] = (float)((float)((float)(v63 * v14) + (float)(v82 * v15)) + (float)(v76 * v16)) + v61;
  v85[10] = (float)((float)((float)(v79 * v14) + (float)(v71 * v15)) + (float)(v69 * v16)) + v59;
  v85[11] = (float)((float)((float)(v14 * v55) + (float)(v15 * v73)) + (float)(v16 * v67)) + v57;
  v17 = v75[12];
  v18 = v75[13];
  v19 = v75[14];
  v85[4] = (float)((float)((float)(v17 * v11) + (float)(v12 * v18)) + (float)(v19 * v13)) + v65;
  v85[5] = (float)((float)((float)(v63 * v17) + (float)(v82 * v18)) + (float)(v76 * v19)) + v61;
  v85[6] = (float)((float)((float)(v79 * v17) + (float)(v71 * v18)) + (float)(v69 * v19)) + v59;
  v85[7] = (float)((float)((float)(v17 * v55) + (float)(v18 * v73)) + (float)(v19 * v67)) + v57;
  v20 = v75[8];
  v21 = v75[9];
  v22 = v75[10];
  v23 = (float)((float)(v11 * v20) + (float)(v12 * v21)) + (float)(v13 * v22);
  v24 = v82 * v21;
  v83 = v9 + 32;
  v25 = (float *)a2[2];
  v85[0] = v23 + v65;
  v85[1] = (float)((float)((float)(v63 * v20) + v24) + (float)(v76 * v22)) + v61;
  v85[2] = (float)((float)((float)(v79 * v20) + (float)(v71 * v21)) + (float)(v69 * v22)) + v59;
  v85[3] = (float)((float)((float)(v20 * v55) + (float)(v21 * v73)) + (float)(v22 * v67)) + v57;
  v77 = *v25;
  v74 = v25[1];
  v72 = v25[2];
  v70 = v25[3];
  v68 = v25[4];
  v66 = v25[5];
  v64 = v25[6];
  v62 = v25[7];
  v60 = v25[8];
  v80 = v25[9];
  v56 = v25[10];
  v54 = v25[11];
  v58 = v25[12];
  v26 = v25[14];
  v27 = v25[13];
  v28 = v25[15];
  v29 = *(uint32_t *)(v9 + 16) - 1;
  v53 = v29;
  v30 = -4 - (v9 + 32);
  v31 = (float *)v86;
  v32 = (float *)(v9 + 32 + 16 * v29 + 4);
  do
  {
    v33 = *(v32 - 1);
    v34 = *v32;
    v35 = (float *)&v86[(uint32_t)(uintptr_t)(v32) + v30];
    v32 -= 4;
    v36 = v32[5];
    --v29;
    *v35 = (float)((float)((float)(v77 * v33) + (float)(v68 * v34)) + (float)(v60 * v36)) + v58;
    v35[1] = (float)((float)((float)(v74 * v33) + (float)(v66 * v34)) + (float)(v80 * v36)) + v27;
    v35[2] = (float)((float)((float)(v72 * v33) + (float)(v64 * v34)) + (float)(v56 * v36)) + v26;
    v35[3] = (float)((float)((float)(v33 * v70) + (float)(v34 * v62)) + (float)(v36 * v54)) + v28;
  }
  while ( v29 >= 0 );
  if ( v53 >= 0 )
  {
    v37 = a1 + 2 * v53 + 28;
    do
    {
      v78 = (uint16_t *)v37;
      v81 = v75[4] + *(float *)(v83 + 12);
      hkpCollideTriangleUtil::closestPointTriangle(v31, v85, a1 + 12, v84, 0);
      v45 = v78;
      if ( (float)(*(float *)(a4 + 12) + v81) > v84[4] )
      {
        v38 = *a5;
        v39 = v75[4] - v84[4];
        v40 = (float)(v84[1] * v39) + v31[1];
        v41 = (float)(v84[2] * v39) + v31[2];
        v42 = (float)(v84[3] * v39) + v31[3];
        v43 = (float)(v39 * v84[0]) + *v31;
        *(float *)(v38 + 4) = v40;
        *(float *)(v38 + 8) = v41;
        *(float *)(v38 + 12) = v42;
        *(float *)v38 = v43;
        *(float *)(v38 + 16) = v84[0];
        v44 = v84[4];
        *(float *)(v38 + 20) = v84[1];
        *(float *)(v38 + 24) = v84[2];
        *(float *)(v38 + 28) = v44 - v81;
        if ( *v78 != 0xFFFF
          || (v50 = (*(int (**)(uint32_t, int *, float **, int, int *, uint32_t, int))(**(uint32_t **)(a1 + 8) + 20))(
                      *(uint32_t *)(a1 + 8),
                      a2,
                      a3,
                      a4,
                      a5,
                      0,
                      v38),
              v45 = v78,
              *v78 = v50,
              v50 != 0xFFFF) )
        {
          *a5 += 48;
          *(uint32_t *)(v38 + 32) = *v45;
        }
      }
      else
      {
        v46 = *v78;
        if ( (uint16_t)v46 != 0xFFFF )
        {
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 28))(*(uint32_t *)(a1 + 8), v46, a5[1]);
          v45 = v78;
          *v78 = 0xFFFFu;
        }
      }
      v31 += 4;
      v83 += 16;
      v37 = (int)(uintptr_t)(v45 - 1);
    }
    while ( v37 != a1 + 26 );
  }
  LODWORD(v47) = (uint32_t)(uintptr_t)(v52);
  v48 = *v52;
  v49 = *(uint32_t **)(*v52 + 4);
  if ( (unsigned int)(uintptr_t)(v49) < *(uint32_t *)(*v52 + 12) )
  {
    *v49 = (uint32_t)(uintptr_t)("Et");
    v47 = __rdtsc();
    v49[1] = v47;
    *(uint32_t *)(v48 + 4) = (uint32_t)(uintptr_t)(v49 + 3);
  }
  return v47;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiSphereTriangleAgent::registerAgent  (binary VA: 0x16de600)
// Original: hkpMultiSphereTriangleAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpMultiSphereTriangleAgent::registerAgent(hkpMultiSphereTriangleAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticLinearCast);
  LOWORD(v2[4]) = 1;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 2, 25);
  v2[0] = (uint32_t)(uintptr_t)(hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpMultiSphereTriangleAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpMultiSphereTriangleAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 0;
  v2[3] = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 25, 2);
}


