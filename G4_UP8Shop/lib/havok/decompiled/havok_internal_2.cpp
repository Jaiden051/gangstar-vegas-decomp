#include "Core/Utils/DecompTypes.h"
#include "havok_internal_2.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_192716::copyTo_hkcdDynamicTree_Tree_hkc_f62c5a  (binary VA: 0x1647d70)
// Original: hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::copyTo<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>
// ----------------------------------------------------------------------------
void hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_192716::copyTo_hkcdDynamicTree_Tree_hkc_f62c5a(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self> *self, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self> *a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self> *v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self> *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23[4];
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
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[71];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v25)) > _g4_s10 ? (44u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v26)) > _g4_s11 ? (48u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v27)) > _g4_s12 ? (56u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v28)) > _g4_s13 ? (60u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v29)) > _g4_s14 ? (64u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v30)) > _g4_s15 ? (68u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v31)) > _g4_s16 ? (72u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v32)) > _g4_s17 ? (76u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v33)) > _g4_s18 ? (80u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v34)) > _g4_s19 ? (84u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v35)) > _g4_s20 ? (88u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v36)) > _g4_s21 ? (92u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v37)) > _g4_s22 ? (96u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v38)) > _g4_s23 ? (100u + sizeof(_g4_t_v38)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);

  v38[67] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)a2;
  v17 = self;
  v3 = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 1) = 0;
  if ( v3 >= 0 )
  {
    v19 = (int)(uintptr_t)(v2);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *v2,
      48 * v3);
    v2 = (int *)v19;
  }
  *v2 = 0;
  v2[2] = 0x80000000;
  v2[3] = 0;
  v2[6] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v20 = (int)(uintptr_t)(v2);
  hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_0051bb::reserveNodes(
    (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v23,
    v2,
    2 * *((uint32_t *)v17 + 4));
  v4 = (int *)v20;
  if ( *((uint32_t *)v17 + 6) != 0 )
  {
    v24 = 0;
    v25 = 0;
    v26 = 0x80000000;
    v5 = *((uint32_t *)v17 + 1);
    if ( v5 > 0 )
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v23, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v24, v5, 4);
      v4 = (int *)v20;
      if ( v5 - v25 > 0 )
      {
        memset((void *)(v24 + 4 * v25), 0, 4 * (v5 - v25));
        v4 = (int *)v20;
      }
    }
    v35 = v38;
    v6 = v17;
    v25 = v5;
    v37 = -2147483584;
    v38[0] = 0;
    v36 = 1;
    v16 = 0;
    v21 = v4;
    v7 = *((uint32_t *)v17 + 6);
    while ( 1 )
    {
      v8 = (int *)(*(uint32_t *)v6 + 48 * v7);
      v27 = *v8;
      v28 = v8[1];
      v29 = v8[2];
      v30 = v8[3];
      v31 = v8[4];
      v32 = v8[5];
      v33 = v8[6];
      v34 = v8[7];
      v18 = *(uint32_t *)(v24 + 4 * v7);
      v9 = v21[3];
      if ( v9 == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_0051bb::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v23,
          v21,
          1);
        v9 = v21[3];
      }
      v10 = (int *)(*v21 + 48 * v9);
      v21[3] = *v10;
      *v10 = v27;
      v10[1] = v28;
      v10[2] = v29;
      v10[3] = v30;
      v10[4] = v31;
      v10[5] = v32;
      v10[6] = v33;
      v11 = v34;
      v10[8] = v18;
      v10[7] = v11;
      if ( v18 != 0 )
      {
        *(uint32_t *)(*v21 + 48 * v18 + 4 * (v16 + 8) + 4) = v9;
        v7 = v8[9];
        v12 = v8[10];
        if ( v7 == 0 )
          goto LABEL_11;
LABEL_14:
        *(uint32_t *)(v24 + 4 * v7) = v9;
        *(uint32_t *)(v24 + 4 * v12) = v9;
        v14 = v36;
        if ( v36 == (v37 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v35,
            4,
            v15);
          v14 = v36;
        }
        v16 = 0;
        v35[v14] = v12;
        v6 = v17;
        ++v36;
      }
      else
      {
        v21[6] = v9;
        v7 = v8[9];
        v12 = v8[10];
        if ( v7 != 0 )
          goto LABEL_14;
LABEL_11:
        v13 = v36;
        v10[9] = 0;
        v10[10] = v12;
        v7 = v35[v13 - 1];
        v36 = v13 - 1;
        if ( v7 == 0 )
        {
          v4 = v21;
          v36 = 0;
          if ( v37 >= 0 )
          {
            (*(void (**)(int *, uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
              v21,
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v35,
              4 * v37);
            v4 = v21;
          }
          v35 = nullptr;
          v37 = 0x80000000;
          v25 = 0;
          if ( v26 >= 0 )
          {
            v22 = (int)(uintptr_t)(v4);
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v24,
              4 * v26);
            v4 = (int *)v22;
          }
          break;
        }
        v16 = 1;
        v6 = v17;
      }
    }
  }
  v4[4] = *((uint32_t *)v17 + 4);
  v4[5] = *((uint32_t *)v17 + 5);
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_5bfde3  (binary VA: 0x1648210)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<hkGeometryProcessingInternals::NearestFeaturePolicy>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_5bfde3(int *a1, hkMemoryAllocator::Self *a2, int a3)
{
  int result;
  int v4;
  float v5; // xmm6_4
  int v6;
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  int v13;
  int v14;
  int v15;
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;
  int *v24;
  float v25; // xmm4_4
  int v26;
  int v27;
  bool v28;
  int v29;
  float *v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[3];
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v32)) > _g4_s1 ? (48u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v33)) > _g4_s2 ? (52u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v34)) > _g4_s3 ? (56u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v35)) > _g4_s4 ? (60u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v36)) > _g4_s5 ? (64u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v37)) > _g4_s6 ? (68u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v38)) > _g4_s7 ? (72u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v39)) > _g4_s8 ? (76u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v40)) > _g4_s9 ? (76u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v41)) > _g4_s10 ? (80u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v42)) > _g4_s11 ? (84u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v43)) > _g4_s12 ? (88u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v44)) > _g4_s13 ? (92u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v45)) > _g4_s14 ? (96u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v46)) > _g4_s15 ? (100u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v47)) > _g4_s16 ? (104u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v48)) > _g4_s17 ? (108u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v49)) > _g4_s18 ? (112u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v50)) > _g4_s19 ? (116u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v51)) > _g4_s20 ? (128u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v52)) > _g4_s21 ? (132u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v53)) > _g4_s22 ? (136u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v54)) > _g4_s23 ? (140u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v55)) > _g4_s24 ? (144u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v56)) > _g4_s25 ? (148u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v57)) > _g4_s26 ? (152u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v58)) > _g4_s27 ? (156u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v59)) > _g4_s28 ? (160u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v60)) > _g4_s29 ? (164u + sizeof(_g4_t_v60)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 108u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 132u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 148u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 152u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 156u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 160u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 164u);

  result = a1[6];
  if ( result != 0 )
  {
    v4 = 3 * result;
    result = (int)(uintptr_t)(a1);
    v5 = *(float *)(a3 + 24);
    v6 = *a1 + 16 * v4;
    v32 = *((uint32_t *)a2 + 1);
    v7 = *(float *)v6;
    v37 = *(float *)(v6 + 16);
    v38 = *(float *)(v6 + 24);
    v8 = *(float *)(a3 + 16);
    v35 = *(float *)(v6 + 4);
    v36 = *(float *)(v6 + 8);
    v39 = *(float *)(v6 + 20);
    v9 = *(float *)(a3 + 20);
    v10 = fminf(v39, fmaxf(v35, v9));
    v11 = v8 - fminf(v37, fmaxf(*(float *)v6, v8));
    v12 = v5 - fminf(v38, fmaxf(v36, v5));
    if ( *(float *)(a3 + 32) >= (float)((float)((float)(v11 * v11) + (float)((float)(v9 - v10) * (float)(v9 - v10)))
                                      + (float)(v12 * v12)) )
    {
      v34 = *(float *)(a3 + 32);
      while ( 1 )
      {
LABEL_4:
        while ( 1 )
        {
          v13 = *(uint32_t *)(v6 + 36);
          if ( v13 == 0 )
            break;
          while ( 1 )
          {
            v50[0] = v13;
            v14 = *a1;
            v15 = *a1 + 48 * v13;
            v49 = v15;
            v41 = *(float *)v15;
            v42 = *(float *)(v15 + 4);
            v43 = *(float *)(v15 + 8);
            v44 = *(uint32_t *)(v15 + 12);
            v45 = *(float *)(v15 + 16);
            v46 = *(float *)(v15 + 20);
            v47 = *(float *)(v15 + 24);
            v48 = *(uint32_t *)(v15 + 28);
            v60 = *(uint32_t *)(v6 + 40);
            v6 = 48 * v60 + v14;
            v59 = v6;
            v51 = *(float *)v6;
            v52 = *(float *)(v6 + 4);
            v53 = *(float *)(v6 + 8);
            v54 = *(uint32_t *)(v6 + 12);
            v55 = *(float *)(v6 + 16);
            v56 = *(float *)(v6 + 20);
            v7 = v41;
            v57 = *(float *)(v6 + 24);
            v58 = *(uint32_t *)(v6 + 28);
            v35 = v42;
            v36 = v43;
            v37 = v45;
            v16 = fminf(v45, fmaxf(v41, v8));
            v39 = v46;
            v17 = fminf(v46, fmaxf(v42, v9));
            v38 = v47;
            v18 = fminf(v47, fmaxf(v43, v5));
            v19 = (float)((float)((float)(v8 - v16) * (float)(v8 - v16)) + (float)((float)(v9 - v17) * (float)(v9 - v17)))
                + (float)((float)(v5 - v18) * (float)(v5 - v18));
            v20 = fminf(v56, fmaxf(v52, v9));
            v33 = fminf(v57, fmaxf(v53, v5));
            v21 = v8 - fminf(v55, fmaxf(v51, v8));
            v22 = (float)((float)(v21 * v21) + (float)((float)(v9 - v20) * (float)(v9 - v20)))
                + (float)((float)(v5 - v33) * (float)(v5 - v33));
            v23 = (v34 >= v19) | (v34 >= v22 ? 2 : 0);
            switch ( v23 )
            {
              case 1:
                v6 = v15;
                goto LABEL_4;
              case 2:
                v13 = *(uint32_t *)(v6 + 36);
                v38 = v57;
                v39 = v56;
                v37 = v55;
                v36 = v53;
                v35 = v52;
                v7 = v51;
                if ( v13 == 0 )
                  goto LABEL_9;
                break;
              case 3:
                goto LABEL_14;
              default:
                goto LABEL_11;
            }
          }
LABEL_14:
          v28 = v19 > v22;
          *(uint32_t *)(a3 + 36) = v28;
          v29 = *((uint32_t *)a2 + 1);
          if ( v29 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v31);
            v29 = *((uint32_t *)a2 + 1);
            v28 = v19 > v22;
          }
          v40 = *(uint32_t *)a2;
          *((uint32_t *)a2 + 1) = v29 + 1;
          *(uint32_t *)(v40 + 4 * v29) = v50[12 * (1 - v28)];
          v34 = *(float *)(a3 + 32);
          v30 = &v41 + 12 * v28;
          v6 = *((uint32_t *)v30 + 8);
          v35 = v30[1];
          v36 = v30[2];
          v37 = v30[4];
          v39 = v30[5];
          v38 = v30[6];
          v7 = *v30;
          v8 = *(float *)(a3 + 16);
          v9 = *(float *)(a3 + 20);
          v5 = *(float *)(a3 + 24);
        }
LABEL_9:
        v24 = *(int **)a3;
        v25 = (float)((float)((float)(v8 - (float)((float)(v7 + v37) * 0.5))
                            * (float)(v8 - (float)((float)(v7 + v37) * 0.5)))
                    + (float)((float)(v9 - (float)((float)(v39 + v35) * 0.5))
                            * (float)(v9 - (float)((float)(v39 + v35) * 0.5))))
            + (float)((float)(v5 - (float)((float)(v36 + v38) * 0.5)) * (float)(v5 - (float)((float)(v36 + v38) * 0.5)));
        if ( v34 > v25 )
        {
          *(float *)(a3 + 32) = v25;
          *v24 = v6;
        }
LABEL_11:
        result = *((uint32_t *)a2 + 1);
        if ( v32 >= result )
          break;
        v26 = result - 1;
        v27 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v26;
        v34 = *(float *)(a3 + 32);
        v5 = *(float *)(a3 + 24);
        v6 = *a1 + 48 * *(uint32_t *)(v27 + 4 * v26);
        v35 = *(float *)(v6 + 4);
        v36 = *(float *)(v6 + 8);
        v37 = *(float *)(v6 + 16);
        v39 = *(float *)(v6 + 20);
        v38 = *(float *)(v6 + 24);
        v7 = *(float *)v6;
        v8 = *(float *)(a3 + 16);
        v9 = *(float *)(a3 + 20);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_3abaaf  (binary VA: 0x16488b0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkGeometryProcessingInternals::TJunctionsQuery>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_3abaaf(uint32_t *a1, hkMemoryAllocator::Self *a2, float *a3)
{
  int result;
  float *v4;
  hkMemoryAllocator::Self *v5;
  int v6;
  float *v7;
  float v8;
  float v9; // xmm2_4
  int v10;
  int v11;
  int v12;
  float v13;
  unsigned int v14;
  float *v15;
  __m128i v16;
  __m128i v17;
  float v18; // xmm6_4
  float v19; // xmm7_4
  __m128i v20;
  int v21;
  float v22; // xmm7_4
  float v23; // xmm5_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  float v34;
  int v35;
  uint32_t *v36;
  hkMemoryAllocator::Self *v37;
  int v38;
  unsigned int v39;
  int v40;
  float v41;
  int v42;
  hkMemoryAllocator::Self *v43;
  hkMemoryAllocator::Self *v44;
  float v45;
  float v46;
  uint32_t *v47;
  float v48;
  float v49;
  float v50;

  result = a1[6];
  if ( result != 0 )
  {
    v4 = (float *)(*a1 + 48 * result);
    result = *((uint32_t *)a3 + 1);
    v38 = *((uint32_t *)a2 + 1);
    if ( result != 0
      && a3[4] <= v4[4]
      && a3[5] <= v4[5]
      && a3[6] <= v4[6]
      && *v4 <= a3[8]
      && v4[1] <= a3[9]
      && v4[2] <= a3[10] )
    {
      v33 = *((uint32_t *)a3 + 1);
      v5 = a2;
      while ( 1 )
      {
        v6 = *((uint32_t *)v4 + 9);
        if ( v6 == 0 )
          break;
LABEL_11:
        v39 = *((uint32_t *)v4 + 10);
        v7 = (float *)(48 * v6 + *a1);
        v4 = (float *)(48 * v39 + *a1);
        v8 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)v4)));
        if ( v33 == 0 )
          goto LABEL_28;
        v9 = a3[4];
        v10 = 0;
        if ( v9 <= v7[4] && a3[5] <= v7[5] && a3[6] <= v7[6] && *v7 <= a3[8] && v7[1] <= a3[9] )
          v10 = v7[2] <= a3[10];
        if ( v9 <= v4[4] && a3[5] <= v4[5] && a3[6] <= v4[6] && v8 <= a3[8] && v4[1] <= a3[9] && v4[2] <= a3[10] )
          v10 |= 2u;
        if ( v10 != 2 )
        {
          if ( v10 == 3 )
          {
            v31 = *((uint32_t *)v5 + 1);
            if ( v31 == (*((uint32_t *)v5 + 2) & 0x3FFFFFFF) )
            {
              v37 = v5;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v5, 4, v32);
              v5 = v37;
              v31 = *((uint32_t *)v37 + 1);
            }
            *((uint32_t *)v5 + 1) = v31 + 1;
            *(uint32_t *)(*(uint32_t *)v5 + 4 * v31) = v39;
            v33 = *((uint32_t *)a3 + 1);
            v4 = v7;
          }
          else
          {
            if ( v10 != 1 )
            {
LABEL_28:
              result = *((uint32_t *)v5 + 1);
              if ( v38 < result )
                goto LABEL_29;
              return result;
            }
            v4 = v7;
          }
        }
      }
      while ( 1 )
      {
        v13 = *a3;
        if ( v33 != 0 && *(uint8_t *)LODWORD(v13) == 0 )
        {
          v14 = *((uint32_t *)v4 + 10);
          if ( v14 == *(uint32_t *)(LODWORD(v13) + 20) )
            goto LABEL_47;
          if ( v14 == *(uint32_t *)(LODWORD(v13) + 24) )
            goto LABEL_47;
          if ( v14 == *(uint32_t *)(LODWORD(v13) + 28) )
            goto LABEL_47;
          v47 = *(uint32_t **)(LODWORD(v13) + 8);
          v15 = (float *)(v47[2] + 16 * v14);
          v48 = *v15;
          v46 = v15[1];
g4_m128_raw(v16) = *(unsigned int *)(LODWORD(v13) + 32);
          v45 = v15[2];
          v17 = v16;
          *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v16) - *(float *)(LODWORD(v13) + 48);
          v18 = *(float *)(LODWORD(v13) + 36);
          v50 = *(float *)(LODWORD(v13) + 56);
          v34 = v18 - *(float *)(LODWORD(v13) + 52);
          v49 = *(float *)(LODWORD(v13) + 40);
          v19 = *(float *)g4_m128_ptr<int32_t>(v16) - *v15;
          v20 = v17;
          *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v17))
                                          + (float)(v34 * v34))
                                  + (float)((float)(v49 - v50) * (float)(v49 - v50));
          v21 = _mm_cvtsi128_si32(v20);
          v40 = (2130706432 - v21) & ((v21 ^ (v21 + 2139095040)) >> 31);
          *(float *)g4_m128_ptr<int32_t>(v16) = (float)(2.0
                                          - (float)(*(float *)g4_m128_ptr<int32_t>(v20)
                                                  * (float)((float)(2.0
                                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)&v40))
                                                          * *(float *)&v40)))
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)&v40))
                                          * *(float *)&v40);
          *(float *)g4_m128_ptr<int32_t>(v20) = fmaxf(
                                      0.0,
                                      fminf(
                                        (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * v19)
                                                      + (float)((float)(v18 - v46) * v34))
                                              + (float)((float)(v49 - v45) * (float)(v49 - v50)))
                                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v16)))
                                              * *(float *)g4_m128_ptr<int32_t>(v16)),
                                        1.0));
          v22 = v19 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v20));
          v23 = (float)(v18 - v46) - (float)(v34 * *(float *)g4_m128_ptr<int32_t>(v20));
          v24 = (float)(v49 - v45) - (float)((float)(v49 - v50) * *(float *)g4_m128_ptr<int32_t>(v20));
          v25 = *(float *)(LODWORD(v13) + 4);
          if ( v25 < (float)((float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v24 * v24))
            || (v26 = v22 + v48,
                v27 = v23 + v46,
                v28 = v24 + v45,
                (float)((float)((float)((float)(v26 - *(float *)(LODWORD(v13) + 32))
                                      * (float)(v26 - *(float *)(LODWORD(v13) + 32)))
                              + (float)((float)(v27 - *(float *)(LODWORD(v13) + 36))
                                      * (float)(v27 - *(float *)(LODWORD(v13) + 36))))
                      + (float)((float)(v28 - v49) * (float)(v28 - v49))) <= v25)
            || (float)((float)((float)((float)(v26 - *(float *)(LODWORD(v13) + 48))
                                     * (float)(v26 - *(float *)(LODWORD(v13) + 48)))
                             + (float)((float)(v27 - *(float *)(LODWORD(v13) + 52))
                                     * (float)(v27 - *(float *)(LODWORD(v13) + 52))))
                     + (float)((float)(v28 - v50) * (float)(v28 - v50))) <= v25 )
          {
LABEL_47:
            v6 = 1;
          }
          else
          {
            v35 = v47[6];
            if ( v35 == (v47[7] & 0x3FFFFFFF) )
            {
              v43 = v5;
              v41 = *a3;
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)(v47 + 5),
                16,
                v32);
              v5 = v43;
              v13 = v41;
              v35 = v47[6];
            }
            v44 = v5;
            v29 = v35;
            v42 = v47[5];
            v47[6] = v35 + 1;
            v36 = (uint32_t *)(*(uint32_t *)(*(uint32_t *)(LODWORD(v13) + 8) + 20)
                           + 16 * *(uint32_t *)(*(uint32_t *)(LODWORD(v13) + 12) + 32));
            v30 = (uint32_t *)(v42 + 16 * v29);
            *v30 = *v36;
            v30[1] = v36[1];
            v30[2] = v36[2];
            v30[3] = v36[3];
            *v30 = *(uint32_t *)(LODWORD(v13) + 24);
            v30[1] = *(uint32_t *)(LODWORD(v13) + 28);
            v30[2] = v14;
            *v36 = *(uint32_t *)(LODWORD(v13) + 28);
            v36[1] = *(uint32_t *)(LODWORD(v13) + 20);
            v36[2] = v14;
            *(uint8_t *)LODWORD(v13) = 1;
            v5 = v44;
          }
        }
        *((uint32_t *)a3 + 1) = v6;
        result = *((uint32_t *)v5 + 1);
        if ( v38 >= result )
          break;
LABEL_29:
        v11 = *(uint32_t *)v5;
        v12 = result - 1;
        *((uint32_t *)v5 + 1) = v12;
        v4 = (float *)(*a1 + 48 * *(uint32_t *)(v11 + 4 * v12));
        v33 = *((uint32_t *)a3 + 1);
        v6 = *((uint32_t *)v4 + 9);
        if ( v6 != 0 )
          goto LABEL_11;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::explicitStackQuickSort_unsigned_long_hkcdDynami_0e3dd1  (binary VA: 0x1649060)
// Original: hkAlgorithm::_explicitStackQuickSort<unsigned long,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin::Sorter>
// ----------------------------------------------------------------------------
uint32_t * hkAlgorithm::explicitStackQuickSort_unsigned_long_hkcdDynami_0e3dd1(uint32_t *a1, int a2, int a3, int *a4)
{
  uint32_t *result;
  float *v5;
  char *v6;
  int v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float *v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  int v15;
  float *v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20;
  int i;
  char *v22;
  char *v23;
  int v24;
  int v25;
  char *v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  uint32_t v40[32];
  uint32_t v41[35];

  result = a1;
  if ( a2 > 1 )
  {
    v40[0] = (uint32_t)(uintptr_t)(a1);
    v41[0] = (uint32_t)(uintptr_t)(&a1[a2 - 1]);
    v22 = (char *)v41[0];
    v23 = (char *)a1;
    for ( i = 0; ; v22 = (char *)v41[i] )
    {
      do
      {
        while ( 1 )
        {
          v26 = v23;
          v24 = 48 * *(uint32_t *)&v23[4 * ((v22 - v23) >> 3)];
          v5 = (float *)(*a4 + v24);
          v6 = v22;
          v7 = *a4;
          v8 = v5[4] + *v5;
          v9 = v5[5] + v5[1];
          v10 = v5[3] + v5[7];
          v31 = v5[2] + v5[6];
          while ( 1 )
          {
            while ( 1 )
            {
              v25 = *(uint32_t *)v26;
              v11 = (float *)(48 * *(uint32_t *)v26 + v7);
              v12 = v11[1] + v11[5];
              v13 = v11[2] + v11[6];
              v14 = v11[4] + *v11;
              v35 = (float)(v11[7] + v11[3]) * 0.5;
              v36 = v8 * 0.5;
              v32 = v14 * 0.5;
              v33 = v12 * 0.5;
              v34 = v13 * 0.5;
              v37 = v9 * 0.5;
              v38 = v31 * 0.5;
              v39 = v10 * 0.5;
              if ( *(&v36 + a3) <= *(&v32 + a3) )
                break;
              v26 += 4;
            }
            v30 = (float)(*v5 + v5[4]) * 0.5;
            v28 = (float)(v5[6] + v5[2]) * 0.5;
            v27 = (float)(v5[3] + v5[7]) * 0.5;
            v29 = (float)(v5[1] + v5[5]) * 0.5;
            while ( 1 )
            {
              v15 = *(uint32_t *)v6;
              v32 = v30;
              v33 = v29;
              v34 = v28;
              v35 = v27;
              v16 = (float *)(48 * v15 + v7);
              v17 = (float)(v16[5] + v16[1]) * 0.5;
              v18 = (float)(v16[2] + v16[6]) * 0.5;
              v19 = (float)(v16[3] + v16[7]) * 0.5;
              v36 = (float)(v16[4] + *v16) * 0.5;
              v37 = v17;
              v38 = v18;
              v39 = v19;
              if ( *(&v36 + a3) <= *(&v32 + a3) )
                break;
              v6 -= 4;
            }
            if ( v26 > v6 )
              break;
            if ( v26 != v6 )
            {
              *(uint32_t *)v6 = v25;
              *(uint32_t *)v26 = v15;
            }
            v6 -= 4;
            v26 += 4;
            if ( v26 > v6 )
              break;
            v7 = *a4;
            v5 = (float *)(*a4 + v24);
            v8 = v5[4] + *v5;
            v9 = v5[1] + v5[5];
            v31 = v5[6] + v5[2];
            v10 = v5[3] + v5[7];
          }
          if ( v23 >= v6 )
            break;
          if ( v22 <= v26 )
          {
            v22 = v6;
          }
          else
          {
            if ( (v22 - v26) >> 2 <= (v6 - v23) >> 2 )
            {
              v41[i] = (uint32_t)(uintptr_t)(v6);
              v40[i] = (uint32_t)(uintptr_t)(v23);
              v20 = i + 1;
              v23 = v26;
            }
            else
            {
              v40[i] = (uint32_t)(uintptr_t)(v26);
              v41[i] = (uint32_t)(uintptr_t)(v22);
              v20 = i + 1;
              v22 = v6;
            }
            i = v20;
          }
        }
        v23 = v26;
      }
      while ( v22 > v26 );
      result = (uint32_t *)--i;
      if ( i == -1 )
        break;
      v23 = (char *)v40[i];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::explicitStackQuickSort_unsigned_int_hkcdDynamic_ab6e97  (binary VA: 0x1649420)
// Original: hkAlgorithm::_explicitStackQuickSort<unsigned int,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin::Sorter>
// ----------------------------------------------------------------------------
uint32_t * hkAlgorithm::explicitStackQuickSort_unsigned_int_hkcdDynamic_ab6e97(uint32_t *a1, int a2, int a3, int *a4)
{
  uint32_t *result;
  float *v5;
  char *v6;
  int v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float *v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  int v15;
  float *v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20;
  int i;
  char *v22;
  char *v23;
  int v24;
  int v25;
  char *v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  uint32_t v40[32];
  uint32_t v41[35];

  result = a1;
  if ( a2 > 1 )
  {
    v40[0] = (uint32_t)(uintptr_t)(a1);
    v41[0] = (uint32_t)(uintptr_t)(&a1[a2 - 1]);
    v22 = (char *)v41[0];
    v23 = (char *)a1;
    for ( i = 0; ; v22 = (char *)v41[i] )
    {
      do
      {
        while ( 1 )
        {
          v26 = v23;
          v24 = 48 * *(uint32_t *)&v23[4 * ((v22 - v23) >> 3)];
          v5 = (float *)(*a4 + v24);
          v6 = v22;
          v7 = *a4;
          v8 = v5[4] + *v5;
          v9 = v5[5] + v5[1];
          v10 = v5[3] + v5[7];
          v31 = v5[2] + v5[6];
          while ( 1 )
          {
            while ( 1 )
            {
              v25 = *(uint32_t *)v26;
              v11 = (float *)(48 * *(uint32_t *)v26 + v7);
              v12 = v11[1] + v11[5];
              v13 = v11[2] + v11[6];
              v14 = v11[4] + *v11;
              v35 = (float)(v11[7] + v11[3]) * 0.5;
              v36 = v8 * 0.5;
              v32 = v14 * 0.5;
              v33 = v12 * 0.5;
              v34 = v13 * 0.5;
              v37 = v9 * 0.5;
              v38 = v31 * 0.5;
              v39 = v10 * 0.5;
              if ( *(&v36 + a3) <= *(&v32 + a3) )
                break;
              v26 += 4;
            }
            v30 = (float)(*v5 + v5[4]) * 0.5;
            v28 = (float)(v5[6] + v5[2]) * 0.5;
            v27 = (float)(v5[3] + v5[7]) * 0.5;
            v29 = (float)(v5[1] + v5[5]) * 0.5;
            while ( 1 )
            {
              v15 = *(uint32_t *)v6;
              v32 = v30;
              v33 = v29;
              v34 = v28;
              v35 = v27;
              v16 = (float *)(48 * v15 + v7);
              v17 = (float)(v16[5] + v16[1]) * 0.5;
              v18 = (float)(v16[2] + v16[6]) * 0.5;
              v19 = (float)(v16[3] + v16[7]) * 0.5;
              v36 = (float)(v16[4] + *v16) * 0.5;
              v37 = v17;
              v38 = v18;
              v39 = v19;
              if ( *(&v36 + a3) <= *(&v32 + a3) )
                break;
              v6 -= 4;
            }
            if ( v26 > v6 )
              break;
            if ( v26 != v6 )
            {
              *(uint32_t *)v6 = v25;
              *(uint32_t *)v26 = v15;
            }
            v6 -= 4;
            v26 += 4;
            if ( v26 > v6 )
              break;
            v7 = *a4;
            v5 = (float *)(*a4 + v24);
            v8 = v5[4] + *v5;
            v9 = v5[1] + v5[5];
            v31 = v5[6] + v5[2];
            v10 = v5[3] + v5[7];
          }
          if ( v23 >= v6 )
            break;
          if ( v22 <= v26 )
          {
            v22 = v6;
          }
          else
          {
            if ( (v22 - v26) >> 2 <= (v6 - v23) >> 2 )
            {
              v41[i] = (uint32_t)(uintptr_t)(v6);
              v40[i] = (uint32_t)(uintptr_t)(v23);
              v20 = i + 1;
              v23 = v26;
            }
            else
            {
              v40[i] = (uint32_t)(uintptr_t)(v26);
              v41[i] = (uint32_t)(uintptr_t)(v22);
              v20 = i + 1;
              v22 = v6;
            }
            i = v20;
          }
        }
        v23 = v26;
      }
      while ( v22 > v26 );
      result = (uint32_t *)--i;
      if ( i == -1 )
        break;
      v23 = (char *)v40[i];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkgpIndexedMeshDefinitio_c07736  (binary VA: 0x1653010)
// Original: hkAlgorithm::quickSortRecursive<hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMeshInternals::TriangleSortLess>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkgpIndexedMeshDefinitio_c07736(int a1, int a2, int a3)
{
  unsigned int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int result;
  int v9;
  unsigned int v10;
  int *v11;
  int v12;
  int *v13;
  int v14;
  unsigned int v15;
  int *v16;
  int v17;
  int *v18;
  bool v19;
  int v20;
  unsigned int v21;
  int *v22;
  int v23;
  int *v24;
  bool v25;
  int v26;
  unsigned int v27;
  int v28;
  int *v29;
  int v30;
  int *v31;
  bool v32;
  int v33;
  unsigned int v34;
  int v35;
  int *v36;
  int v37;
  int *v38;
  bool v39;
  int v40;
  unsigned int v41;
  int v42;
  int *v43;
  int v44;
  int *v45;
  bool v46;
  int v47;
  unsigned int v48;
  int v49;
  int *v50;
  int v51;
  int *v52;
  int v53;
  int v54;
  unsigned int v55;
  int *v56;
  int v57;
  int *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;

  while ( 2 )
  {
    v91 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v3 = *(uint32_t *)(v91 + 32);
    v80 = a2 + 1;
    v4 = a2 + 1;
    v69 = a3;
    while ( 1 )
    {
      v66 = v4 - 1;
      v82 = *(uint32_t *)(a1 + 4 * v4 - 4);
      if ( *(uint32_t *)(v82 + 32) < v3 )
        goto LABEL_11;
      v5 = (int *)(a1 + 4 * v69);
      v6 = *v5;
      if ( *(uint32_t *)(*v5 + 32) > v3 )
      {
        v7 = (int *)(a1 + 4 * v69 - 4);
        do
        {
          v6 = *v7;
          --v69;
          v5 = v7--;
        }
        while ( *(uint32_t *)(v6 + 32) > v3 );
      }
      if ( v69 < v66 )
        break;
      if ( v69 != v66 )
      {
        *v5 = v82;
        *(uint32_t *)(a1 + 4 * v4 - 4) = v6;
      }
      --v69;
      v66 = v4;
      if ( v69 < v4 )
        break;
      v3 = *(uint32_t *)(v91 + 32);
LABEL_11:
      ++v4;
    }
    if ( a2 >= v69 )
      goto LABEL_13;
    while ( 2 )
    {
      v68 = v69;
      v9 = v80;
      v92 = *(uint32_t *)(a1 + 4 * ((v69 + a2) >> 1));
      v10 = *(uint32_t *)(v92 + 32);
      while ( 2 )
      {
        v65 = v9 - 1;
        v83 = *(uint32_t *)(a1 + 4 * v9 - 4);
        if ( *(uint32_t *)(v83 + 32) < v10 )
        {
LABEL_28:
          ++v9;
          continue;
        }
        break;
      }
      v11 = (int *)(a1 + 4 * v68);
      v12 = *v11;
      if ( *(uint32_t *)(*v11 + 32) > v10 )
      {
        v13 = (int *)(a1 + 4 * v68 - 4);
        do
        {
          v12 = *v13;
          --v68;
          v11 = v13--;
        }
        while ( *(uint32_t *)(v12 + 32) > v10 );
      }
      if ( v68 >= v65 )
      {
        if ( v68 != v65 )
        {
          *v11 = v83;
          *(uint32_t *)(a1 + 4 * v9 - 4) = v12;
        }
        --v68;
        v65 = v9;
        if ( v68 >= v9 )
        {
          v10 = *(uint32_t *)(v92 + 32);
          goto LABEL_28;
        }
      }
      if ( a2 >= v68 )
        goto LABEL_16;
      while ( 2 )
      {
        v67 = v68;
        v14 = v80;
        v93 = *(uint32_t *)(a1 + 4 * ((v68 + a2) >> 1));
        v15 = *(uint32_t *)(v93 + 32);
        while ( 2 )
        {
          v64 = v14 - 1;
          v84 = *(uint32_t *)(a1 + 4 * v14 - 4);
          if ( *(uint32_t *)(v84 + 32) < v15 )
          {
LABEL_43:
            ++v14;
            continue;
          }
          break;
        }
        v16 = (int *)(a1 + 4 * v67);
        v17 = *v16;
        if ( *(uint32_t *)(*v16 + 32) > v15 )
        {
          v18 = (int *)(a1 + 4 * v67 - 4);
          do
          {
            v17 = *v18;
            --v67;
            v16 = v18--;
          }
          while ( *(uint32_t *)(v17 + 32) > v15 );
        }
        if ( v67 >= v64 )
        {
          if ( v67 != v64 )
          {
            *v16 = v84;
            *(uint32_t *)(a1 + 4 * v14 - 4) = v17;
          }
          --v67;
          v64 = v14;
          if ( v67 >= v14 )
          {
            v15 = *(uint32_t *)(v93 + 32);
            goto LABEL_43;
          }
        }
        if ( a2 >= v67 )
          goto LABEL_31;
        while ( 2 )
        {
          v71 = v67;
          v20 = v80;
          v94 = *(uint32_t *)(a1 + 4 * ((v67 + a2) >> 1));
          v21 = *(uint32_t *)(v94 + 32);
          while ( 2 )
          {
            v62 = v20 - 1;
            v85 = *(uint32_t *)(a1 + 4 * v20 - 4);
            if ( *(uint32_t *)(v85 + 32) < v21 )
            {
LABEL_58:
              ++v20;
              continue;
            }
            break;
          }
          v22 = (int *)(a1 + 4 * v71);
          v23 = *v22;
          if ( *(uint32_t *)(*v22 + 32) <= v21 )
          {
            v19 = v71 == v62;
            if ( v71 < v62 )
              goto LABEL_45;
          }
          else
          {
            v24 = (int *)(a1 + 4 * v71 - 4);
            do
            {
              v23 = *v24;
              --v71;
              v22 = v24--;
            }
            while ( *(uint32_t *)(v23 + 32) > v21 );
            v19 = v71 == v62;
            if ( v71 < v62 )
              goto LABEL_45;
          }
          if ( !v19 )
          {
            *v22 = v85;
            *(uint32_t *)(a1 + 4 * v20 - 4) = v23;
          }
          --v71;
          v62 = v20;
          if ( v71 >= v20 )
          {
            v21 = *(uint32_t *)(v94 + 32);
            goto LABEL_58;
          }
LABEL_45:
          if ( a2 >= v71 )
            goto LABEL_46;
          while ( 2 )
          {
            v26 = v71;
            v95 = v80;
            v86 = *(uint32_t *)(a1 + 4 * ((v71 + a2) >> 1));
            v27 = *(uint32_t *)(v86 + 32);
            v28 = v80;
            while ( 2 )
            {
              v61 = v28 - 1;
              v76 = *(uint32_t *)(a1 + 4 * v28 - 4);
              if ( *(uint32_t *)(v76 + 32) < v27 )
              {
LABEL_73:
                v28 = ++v95;
                continue;
              }
              break;
            }
            v29 = (int *)(4 * v26 + a1);
            v30 = *v29;
            if ( *(uint32_t *)(*v29 + 32) <= v27 )
            {
              v25 = v26 == v61;
              if ( v26 < v61 )
                goto LABEL_60;
            }
            else
            {
              v31 = (int *)(a1 + 4 * v26 - 4);
              do
              {
                v30 = *v31;
                --v26;
                v29 = v31--;
              }
              while ( *(uint32_t *)(v30 + 32) > v27 );
              v25 = v26 == v61;
              if ( v26 < v61 )
                goto LABEL_60;
            }
            if ( !v25 )
            {
              *v29 = v76;
              *(uint32_t *)(a1 + 4 * v95 - 4) = v30;
            }
            --v26;
            v61 = v95;
            if ( v26 >= v95 )
            {
              v27 = *(uint32_t *)(v86 + 32);
              goto LABEL_73;
            }
LABEL_60:
            v60 = v26;
            if ( a2 >= v26 )
              goto LABEL_61;
            while ( 2 )
            {
              v33 = v60;
              v96 = v80;
              v77 = *(uint32_t *)(a1 + 4 * ((v60 + a2) >> 1));
              v34 = *(uint32_t *)(v77 + 32);
              v35 = v80;
              while ( 2 )
              {
                v70 = v35 - 1;
                v87 = *(uint32_t *)(a1 + 4 * v35 - 4);
                if ( *(uint32_t *)(v87 + 32) < v34 )
                {
LABEL_88:
                  v35 = ++v96;
                  continue;
                }
                break;
              }
              v36 = (int *)(4 * v33 + a1);
              v37 = *v36;
              if ( *(uint32_t *)(*v36 + 32) <= v34 )
              {
                v32 = v33 == v70;
                if ( v33 < v70 )
                  goto LABEL_75;
              }
              else
              {
                v38 = (int *)(a1 + 4 * v33 - 4);
                do
                {
                  v37 = *v38;
                  --v33;
                  v36 = v38--;
                }
                while ( *(uint32_t *)(v37 + 32) > v34 );
                v32 = v33 == v70;
                if ( v33 < v70 )
                  goto LABEL_75;
              }
              if ( !v32 )
              {
                *v36 = v87;
                *(uint32_t *)(a1 + 4 * v96 - 4) = v37;
              }
              --v33;
              v70 = v96;
              if ( v33 >= v96 )
              {
                v34 = *(uint32_t *)(v77 + 32);
                goto LABEL_88;
              }
LABEL_75:
              v59 = v33;
              if ( a2 >= v33 )
                goto LABEL_76;
              while ( 2 )
              {
                v40 = v59;
                v97 = v80;
                v78 = *(uint32_t *)(a1 + 4 * ((v59 + a2) >> 1));
                v41 = *(uint32_t *)(v78 + 32);
                v42 = v80;
                while ( 2 )
                {
                  v73 = v42 - 1;
                  v88 = *(uint32_t *)(a1 + 4 * v42 - 4);
                  if ( *(uint32_t *)(v88 + 32) < v41 )
                  {
LABEL_103:
                    v42 = ++v97;
                    continue;
                  }
                  break;
                }
                v43 = (int *)(a1 + 4 * v40);
                v44 = *v43;
                if ( *(uint32_t *)(*v43 + 32) <= v41 )
                {
                  v39 = v40 == v73;
                  if ( v40 < v73 )
                    goto LABEL_90;
                }
                else
                {
                  v45 = (int *)(a1 + 4 * v40 - 4);
                  do
                  {
                    v44 = *v45;
                    --v40;
                    v43 = v45--;
                  }
                  while ( *(uint32_t *)(v44 + 32) > v41 );
                  v39 = v40 == v73;
                  if ( v40 < v73 )
                    goto LABEL_90;
                }
                if ( !v39 )
                {
                  *v43 = v88;
                  *(uint32_t *)(a1 + 4 * v97 - 4) = v44;
                }
                --v40;
                v73 = v97;
                if ( v40 >= v97 )
                {
                  v41 = *(uint32_t *)(v78 + 32);
                  goto LABEL_103;
                }
LABEL_90:
                v63 = v40;
                if ( a2 >= v40 )
                  goto LABEL_91;
                while ( 2 )
                {
                  v47 = v63;
                  v98 = v80;
                  v74 = *(uint32_t *)(a1 + 4 * ((v63 + a2) >> 1));
                  v48 = *(uint32_t *)(v74 + 32);
                  v49 = v80;
                  while ( 2 )
                  {
                    v79 = v49 - 1;
                    v89 = *(uint32_t *)(a1 + 4 * v49 - 4);
                    if ( *(uint32_t *)(v89 + 32) < v48 )
                    {
LABEL_118:
                      v49 = ++v98;
                      continue;
                    }
                    break;
                  }
                  v50 = (int *)(a1 + 4 * v47);
                  v51 = *v50;
                  if ( *(uint32_t *)(*v50 + 32) <= v48 )
                  {
                    v46 = v47 == v79;
                    if ( v47 < v79 )
                      goto LABEL_105;
                  }
                  else
                  {
                    v52 = (int *)(a1 + 4 * v47 - 4);
                    do
                    {
                      v51 = *v52;
                      --v47;
                      v50 = v52--;
                    }
                    while ( *(uint32_t *)(v51 + 32) > v48 );
                    v46 = v47 == v79;
                    if ( v47 < v79 )
                      goto LABEL_105;
                  }
                  if ( !v46 )
                  {
                    *v50 = v89;
                    *(uint32_t *)(a1 + 4 * v98 - 4) = v51;
                  }
                  --v47;
                  v79 = v98;
                  if ( v47 >= v98 )
                  {
                    v48 = *(uint32_t *)(v74 + 32);
                    goto LABEL_118;
                  }
LABEL_105:
                  v72 = v47;
                  if ( a2 >= v47 )
                    goto LABEL_106;
                  v53 = v80;
                  while ( 2 )
                  {
                    v54 = v72;
                    v99 = v53;
                    v75 = *(uint32_t *)(a1 + 4 * ((v72 + a2) >> 1));
                    v55 = *(uint32_t *)(v75 + 32);
                    while ( 2 )
                    {
                      v90 = v53 - 1;
                      v81 = *(uint32_t *)(a1 + 4 * v53 - 4);
                      if ( *(uint32_t *)(v81 + 32) < v55 )
                      {
LABEL_134:
                        v53 = ++v99;
                        continue;
                      }
                      break;
                    }
                    v56 = (int *)(a1 + 4 * v54);
                    v57 = *v56;
                    if ( *(uint32_t *)(*v56 + 32) > v55 )
                    {
                      v58 = (int *)(a1 + 4 * v54 - 4);
                      do
                      {
                        v57 = *v58;
                        --v54;
                        v56 = v58--;
                      }
                      while ( *(uint32_t *)(v57 + 32) > v55 );
                    }
                    if ( v90 <= v54 )
                    {
                      if ( v90 != v54 )
                      {
                        *v56 = v81;
                        *(uint32_t *)(a1 + 4 * v99 - 4) = v57;
                      }
                      --v54;
                      v90 = v99;
                      if ( v54 >= v99 )
                      {
                        v55 = *(uint32_t *)(v75 + 32);
                        goto LABEL_134;
                      }
                    }
                    if ( a2 < v54 )
                      hkAlgorithm::quickSortRecursive_hkgpIndexedMeshDefinitio_c07736(
                        a1,
                        a2,
                        v54);
                    if ( v72 > v90 )
                    {
                      a2 = v90;
                      v53 = v90 + 1;
                      continue;
                    }
                    break;
                  }
LABEL_106:
                  if ( v63 > v79 )
                  {
                    a2 = v79;
                    v80 = v79 + 1;
                    continue;
                  }
                  break;
                }
LABEL_91:
                if ( v59 > v73 )
                {
                  a2 = v73;
                  v80 = v73 + 1;
                  continue;
                }
                break;
              }
LABEL_76:
              if ( v60 > v70 )
              {
                a2 = v70;
                v80 = v70 + 1;
                continue;
              }
              break;
            }
LABEL_61:
            if ( v71 > v61 )
            {
              a2 = v61;
              v80 = v61 + 1;
              continue;
            }
            break;
          }
LABEL_46:
          if ( v67 > v62 )
          {
            a2 = v62;
            v80 = v62 + 1;
            continue;
          }
          break;
        }
LABEL_31:
        if ( v68 > v64 )
        {
          a2 = v64;
          v80 = v64 + 1;
          continue;
        }
        break;
      }
LABEL_16:
      if ( v69 > v65 )
      {
        a2 = v65;
        v80 = v65 + 1;
        continue;
      }
      break;
    }
LABEL_13:
    result = v66;
    if ( a3 > v66 )
    {
      a2 = v66;
      continue;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkgpIndexedMeshDefinitio_8690b8  (binary VA: 0x1653b30)
// Original: hkAlgorithm::quickSortRecursive<hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMesh::SortByAscendingReferences>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkgpIndexedMeshDefinitio_8690b8(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int result;
  uint32_t *v11;
  int v12;
  int i;
  int v14;
  uint32_t *v15;
  int v16;

  while ( 2 )
  {
    v11 = *(uint32_t **)(a1 + 4 * ((a3 + a2) >> 1));
    v3 = *(uint32_t *)(v11[2] + 16) + *(uint32_t *)(v11[3] + 16);
    v14 = a3;
    v4 = *(uint32_t *)(v11[4] + 16);
    v5 = a2 + 1;
    for ( i = a2 + 1; ; v5 = i )
    {
      v12 = v5 - 1;
      v6 = *(uint32_t **)(a1 + 4 * v5 - 4);
      v16 = v3 + v4;
      if ( *(uint32_t *)(v6[4] + 16) + *(uint32_t *)(v6[3] + 16) + *(uint32_t *)(v6[2] + 16) < v3 + v4 )
        goto LABEL_15;
      v15 = (uint32_t *)(a1 + 4 * v14);
      v7 = (uint32_t *)*v15;
      if ( v16 < *(uint32_t *)(*(uint32_t *)(*v15 + 16) + 16)
               + *(uint32_t *)(*(uint32_t *)(*v15 + 12) + 16)
               + *(uint32_t *)(*(uint32_t *)(*v15 + 8) + 16) )
      {
        v8 = v14;
        v9 = (uint32_t *)(a1 + 4 * v14 - 4);
        do
        {
          v7 = (uint32_t *)*v9;
          --v8;
          v15 = v9--;
        }
        while ( v16 < *(uint32_t *)(v7[4] + 16) + *(uint32_t *)(v7[3] + 16) + *(uint32_t *)(v7[2] + 16) );
        v14 = v8;
      }
      if ( v12 > v14 )
        break;
      if ( v12 != v14 )
      {
        *v15 = (uint32_t)(uintptr_t)(v6);
        *(uint32_t *)(a1 + 4 * i - 4) = (uint32_t)(uintptr_t)(v7);
      }
      --v14;
      v12 = i;
      if ( v14 < i )
        break;
      v3 = *(uint32_t *)(v11[2] + 16) + *(uint32_t *)(v11[3] + 16);
      v4 = *(uint32_t *)(v11[4] + 16);
LABEL_15:
      ++i;
    }
    if ( a2 < v14 )
    {
      hkAlgorithm::quickSortRecursive_hkgpIndexedMeshDefinitio_8690b8(
        a1,
        a2,
        v14);
      result = v12;
      if ( a3 > v12 )
      {
LABEL_10:
        a2 = result;
        continue;
      }
    }
    else
    {
      result = v12;
      if ( a3 > v12 )
        goto LABEL_10;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_16544A0  (binary VA: 0x16544a0)
// Original: sub_16544A0
// ----------------------------------------------------------------------------
float sub_16544A0(__m128i a1)
{
  int v1;
  float v2; // xmm2_4
  float v3; // xmm1_4

  v1 = ((_mm_cvtsi128_si32(a1) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(a1) >> 1));
  v2 = (float)(*(float *)&v1 * 1.5)
     - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(a1)) * *(float *)&v1) * (float)(*(float *)&v1 * *(float *)&v1));
  v3 = (float)(v2 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(a1)) * v2) * (float)(v2 * v2));
  return (float)(1.5 * v3) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(a1)) * v3) * (float)(v3 * v3));
}

// ----------------------------------------------------------------------------
// Function: IConvexOverlapImpl::checkOverlap  (binary VA: 0x16547a0)
// Original: IConvexOverlapImpl::checkOverlap
// ----------------------------------------------------------------------------
bool IConvexOverlapImpl::checkOverlap(IConvexOverlapImpl::Self *self, const hkgpMesh::IConvexOverlap::IConvexShape *a2, const hkgpMesh::IConvexOverlap::IConvexShape *a3, float a4)
{
  float v5;

  v5 = ((long double (*)(IConvexOverlapImpl::Self *, const hkgpMesh::IConvexOverlap::IConvexShape *, const hkgpMesh::IConvexOverlap::IConvexShape *, int))*(uint32_t *)(*(uint32_t *)self + 8))(
         self,
         a2,
         a3,
         1);
  return a4 >= v5;
}

// ----------------------------------------------------------------------------
// Function: IConvexOverlapImpl::Destroy  (binary VA: 0x1654810)
// Original: IConvexOverlapImpl::~IConvexOverlapImpl
// ----------------------------------------------------------------------------
void IConvexOverlapImpl::Destroy(IConvexOverlapImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2098D68);
}

// ----------------------------------------------------------------------------
// Function: IConvexOverlapImpl::ShapeInterface::Destroy  (binary VA: 0x1654830)
// Original: IConvexOverlapImpl::ShapeInterface::~ShapeInterface
// ----------------------------------------------------------------------------
void IConvexOverlapImpl::ShapeInterface::Destroy(IConvexOverlapImpl::ShapeInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2098DE0);
}

// ----------------------------------------------------------------------------
// Function: IConvexOverlapImpl::Destroy_ea16548f0  (binary VA: 0x16548f0)
// Original: IConvexOverlapImpl::~IConvexOverlapImpl
// ----------------------------------------------------------------------------
void IConvexOverlapImpl::Destroy_ea16548f0(IConvexOverlapImpl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2098D68);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: sub_1654A00  (binary VA: 0x1654a00)
// Original: sub_1654A00
// ----------------------------------------------------------------------------
int sub_1654A00(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  int result;

  a3[9] = *a2;
  v3 = (uint32_t *)(*a1 + 48 * *a2);
  a3[8] = (uint32_t)(uintptr_t)(v3);
  *a3 = *v3;
  a3[1] = v3[1];
  a3[2] = v3[2];
  a3[3] = v3[3];
  a3[4] = v3[4];
  a3[5] = v3[5];
  a3[6] = v3[6];
  result = v3[7];
  a3[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: IConvexOverlapImpl::ShapeInterface::Destroy_ea1654af0  (binary VA: 0x1654af0)
// Original: IConvexOverlapImpl::ShapeInterface::~ShapeInterface
// ----------------------------------------------------------------------------
void IConvexOverlapImpl::ShapeInterface::Destroy_ea1654af0(IConvexOverlapImpl::ShapeInterface::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2098DE0);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, IConvexOverlapImpl::ShapeInterface::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: sub_1654BF0  (binary VA: 0x1654bf0)
// Original: sub_1654BF0
// ----------------------------------------------------------------------------
hkArrayUtil::Self * sub_1654BF0(hkArrayUtil::Self *result, int *a2, int a3)
{
  int v3;
  int v4;
  hkArrayUtil::Self *v5;

  v3 = a2[2] & 0x3FFFFFFF;
  if ( v3 >= a3 )
  {
    *(uint32_t *)result = 0;
  }
  else
  {
    v4 = 2 * v3;
    if ( v4 < a3 )
      v4 = a3;
    v5 = result;
    hkArrayUtil::reserve(result, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v4, 4);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1654C60  (binary VA: 0x1654c60)
// Original: sub_1654C60
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_1654C60(hkMemoryAllocator::Self *result, uint32_t *a2)
{
  int v2;
  int v3;
  hkMemoryAllocator::Self *v4;
  uint32_t *v5;

  v2 = *((uint32_t *)result + 1);
  if ( v2 == (*((uint32_t *)result + 2) & 0x3FFFFFFF) )
  {
    v5 = a2;
    v4 = result;
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, result, 4, v3);
    result = v4;
    a2 = v5;
    v2 = *((uint32_t *)v4 + 1);
  }
  *(uint32_t *)(*(uint32_t *)result + 4 * v2) = *a2;
  ++*((uint32_t *)result + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1654CD0  (binary VA: 0x1654cd0)
// Original: sub_1654CD0
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_1654CD0(hkMemoryAllocator::Self *result, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  hkMemoryAllocator::Self *v6;
  uint32_t *v7;

  v2 = *((uint32_t *)result + 1);
  if ( v2 == (*((uint32_t *)result + 2) & 0x3FFFFFFF) )
  {
    v7 = a2;
    v6 = result;
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, result, 8, v5);
    result = v6;
    a2 = v7;
    v2 = *((uint32_t *)v6 + 1);
  }
  v3 = *(uint32_t *)result;
  v4 = *a2;
  *(uint32_t *)(v3 + 8 * v2 + 4) = a2[1];
  *(uint32_t *)(v3 + 8 * v2) = v4;
  ++*((uint32_t *)result + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1654D40  (binary VA: 0x1654d40)
// Original: sub_1654D40
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_1654D40(hkMemoryAllocator::Self *result, uint32_t *a2)
{
  int v2;
  int v3;
  hkMemoryAllocator::Self *v4;
  uint32_t *v5;

  v2 = *((uint32_t *)result + 1);
  if ( v2 == (*((uint32_t *)result + 2) & 0x3FFFFFFF) )
  {
    v5 = a2;
    v4 = result;
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, result, 4, v3);
    result = v4;
    a2 = v5;
    v2 = *((uint32_t *)v4 + 1);
  }
  *(uint32_t *)(*(uint32_t *)result + 4 * v2) = *a2;
  ++*((uint32_t *)result + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1654DB0  (binary VA: 0x1654db0)
// Original: sub_1654DB0
// ----------------------------------------------------------------------------
int sub_1654DB0(int *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  int result;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t _g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v24)) > _g4_s1 ? (0u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v26)) > _g4_s3 ? (4u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v27)) > _g4_s4 ? (8u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);

  v27[3] = (uint32_t)(uintptr_t)(&a2);
  v3 = *a1;
  v4 = a1[1];
  v5 = v4 - 1;
  if ( v4 - 1 >= 0 )
  {
    v6 = v3 + 12 * v4;
    v7 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v8 = *(uint32_t *)(v6 - 4);
      *(uint32_t *)(v6 - 8) = 0;
      if ( v8 >= 0 )
      {
        v23 = v5;
        v25 = v7;
        G4_VCALL<void>(v7, 20, v7, *(uint32_t *)(v6 - 12), 20 * v8);
        v5 = v23;
        v7 = v25;
      }
      --v5;
      *(uint32_t *)(v6 - 12) = 0;
      *(uint32_t *)(v6 - 4) = 0x80000000;
      v6 -= 12;
    }
    while ( v5 != -1 );
  }
  v9 = a1[2];
  a1[1] = 0;
  v10 = v9 & 0x3FFFFFFF;
  a1[3] = 0;
  if ( v10 > 0x2010 )
  {
    v20 = (uint32_t *)*a1;
    v19 = 8209;
LABEL_16:
    v21 = &v20[3 * v19];
    do
    {
      *v20 = 0;
      v20[1] = 0;
      v20[2] = 0x80000000;
      v20 += 3;
    }
    while ( v20 != v21 );
    v14 = *a1;
    goto LABEL_19;
  }
  v11 = 2 * v10;
  v12 = 8209;
  if ( v11 >= 8209 )
    v12 = v11;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v27, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v12, 12);
  v13 = a1[1];
  v14 = *a1;
  v15 = v13 - 8210;
  if ( v13 - 8210 >= 0 )
  {
    v16 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v17 = v14 + 12 * v15;
    do
    {
      v18 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_180D4)->st_name + v17);
      *(uint32_t *)(v17 + 98512) = 0;
      if ( v18 >= 0 )
      {
        v24 = v15;
        v26 = v16;
        G4_VCALL<void>(v16, 20, v16, *(uint32_t *)(v17 + 98508), 20 * v18);
        v15 = v24;
        v16 = v26;
      }
      --v15;
      *(uint32_t *)(v17 + 98508) = 0;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_180D4)->st_name + v17) = 0x80000000;
      v17 -= 12;
    }
    while ( v15 != -1 );
    v13 = a1[1];
    v14 = *a1;
  }
  v19 = 8209 - v13;
  v20 = (uint32_t *)(v14 + 12 * v13);
  if ( v19 > 0 )
    goto LABEL_16;
LABEL_19:
  a1[1] = 8209;
  result = 0;
  while ( 1 )
  {
    *(uint32_t *)(v14 + result + 4) = 0;
    result += 12;
    if ( result == 98508 )
      break;
    v14 = *a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_16551E0  (binary VA: 0x16551e0)
// Original: sub_16551E0
// ----------------------------------------------------------------------------
int * sub_16551E0(int *result, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int *_g4_t_v12;
  typedef uint8_t _g4_t_v13[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v12)) > _g4_s3 ? (8u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v13)) > _g4_s4 ? (12u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v3 = result[1];
  v10 = a3 + v3;
  v4 = result[2] & 0x3FFFFFFF;
  if ( a3 + v3 > v4 )
  {
    v9 = a2;
    v8 = 2 * v4;
    if ( v8 < v10 )
      v8 = a3 + result[1];
    v12 = result;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v13, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, result, v8, 8);
    result = v12;
    a2 = v9;
    v3 = v12[1];
  }
  v5 = *result + 8 * v3;
  v6 = 0;
  if ( a3 > 0 )
  {
    v11 = a2;
    do
    {
      v7 = *(uint32_t *)(v11 + 8 * v6 + 4);
      *(uint32_t *)(v5 + 8 * v6) = *(uint32_t *)(v11 + 8 * v6);
      *(uint32_t *)(v5 + 8 * v6++ + 4) = v7;
    }
    while ( v6 != a3 );
  }
  result[1] = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_16556B0  (binary VA: 0x16556b0)
// Original: sub_16556B0
// ----------------------------------------------------------------------------
int sub_16556B0(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;

  v2 = *a2;
  if ( *a2 == 0 )
    return 0;
  if ( *(uint32_t *)a1 == 0 )
    return 0;
  v3 = a2[1];
  v4 = *(uint32_t *)(v2 + 4 * v3 + 8);
  v5 = *(uint32_t *)(v2 + 4 * ((9 >> (2 * v3)) & 3) + 8);
  v6 = **(uint32_t **)a1
     + 12
     * (((unsigned int)(3424933 * (*(uint32_t *)(v4 + 12) + (*(uint32_t *)(v4 + 8) << 15)))
       ^ (uint64_t)(unsigned int)(1661161 * (*(uint32_t *)(v5 + 12) + (*(uint32_t *)(v5 + 8) << 15))))
      % *(unsigned int *)(*(uint32_t *)a1 + 4));
  v7 = *(uint32_t *)(v6 + 4);
  if ( v7 <= 0 )
    return 0;
  v8 = *(uint32_t **)v6;
  v9 = 0;
  while ( v4 != *v8 || v5 != v8[1] )
  {
    ++v9;
    v8 += 4;
    if ( v9 == v7 )
      return 0;
  }
  if ( v8 != nullptr )
    return v8[3];
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: IConvexOverlapImpl::ShapeInterface::getSupportingVertices  (binary VA: 0x16558a0)
// Original: IConvexOverlapImpl::ShapeInterface::getSupportingVertices
// ----------------------------------------------------------------------------
float * IConvexOverlapImpl::ShapeInterface::getSupportingVertices(int a1, int *a2, float *a3, int a4, float *a5, int a6, float *a7, float *a8)
{
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  int v12;
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25[7];

  v9 = -*a3;
  v10 = -a3[1];
  v11 = -a3[2];
  v12 = *a2;
  v13 = (float)(*a5 * v9) + (float)(a5[1] * v10);
  v14 = (float)(a5[4] * v9) + (float)(a5[5] * v10);
  v15 = (float)(v9 * a5[8]) + (float)(v10 * a5[9]);
  v16 = a5[10] * v11;
  v17 = v13 + (float)(v11 * a5[2]);
  v25[1] = v14 + (float)(a5[6] * v11);
  v25[2] = v15 + v16;
  v25[0] = v17;
  v25[3] = v15 + v16;
  (*(void (**)(int *, float *, int))(v12 + 12))(a2, a3, a6);
  G4_VCALL<void>(a4, 12, v25, a7);
  v19 = a7[1];
  v20 = a7[2];
  v21 = (float)((float)(a5[1] * *a7) + (float)(a5[5] * v19)) + (float)(a5[9] * v20);
  v22 = (float)((float)(a5[2] * *a7) + (float)(a5[6] * v19)) + (float)(a5[10] * v20);
  v23 = (float)(a5[3] * *a7) + (float)(a5[7] * v19);
  v24 = a5[11] * v20;
  *a8 = (float)((float)((float)(*a7 * *a5) + (float)(v19 * a5[4])) + (float)(v20 * a5[8])) + a5[12];
  a8[1] = v21 + a5[13];
  a8[2] = v22 + a5[14];
  a8[3] = (float)(v23 + v24) + a5[15];
  return a8;
}

// ----------------------------------------------------------------------------
// Function: sub_1655A50  (binary VA: 0x1655a50)
// Original: sub_1655A50
// ----------------------------------------------------------------------------
int sub_1655A50(uint32_t *a1, int a2, uint32_t *a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int result;

  v3 = *(uint32_t *)(*(uint32_t *)a2 + 36);
  a3[9] = v3;
  v4 = (uint32_t *)(*a1 + 48 * v3);
  a3[8] = (uint32_t)(uintptr_t)(v4);
  *a3 = *v4;
  a3[1] = v4[1];
  a3[2] = v4[2];
  a3[3] = v4[3];
  a3[4] = v4[4];
  a3[5] = v4[5];
  a3[6] = v4[6];
  a3[7] = v4[7];
  v5 = *(uint32_t *)(*(uint32_t *)a2 + 40);
  a3[21] = v5;
  v6 = (uint32_t *)(*a1 + 48 * v5);
  a3[20] = (uint32_t)(uintptr_t)(v6);
  a3[12] = *v6;
  a3[13] = v6[1];
  a3[14] = v6[2];
  a3[15] = v6[3];
  a3[16] = v6[4];
  a3[17] = v6[5];
  a3[18] = v6[6];
  result = v6[7];
  a3[19] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1655AE0  (binary VA: 0x1655ae0)
// Original: sub_1655AE0
// ----------------------------------------------------------------------------
int sub_1655AE0(int a1)
{
  int i;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint16_t *v8;
  unsigned int v9;
  uint16_t *v10;
  int j;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int k;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  uint32_t *v29;
  void *v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  int v35;
  int v37;
  uint32_t *v38;
  uint32_t *jj;
  uint32_t *v40;
  int v41;
  int v42;
  uint32_t *v43;
  uint32_t *ii;
  uint32_t *v45;
  int v46;
  int v47;
  uint32_t *v48;
  uint32_t *n;
  uint32_t *v50;
  int v51;
  int v52;
  uint32_t *v53;
  uint32_t *m;
  uint32_t *v55;
  int v56;
  int v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  int v61;
  int v62;
  uint32_t *v63;
  int v64;
  uint32_t *kk;
  uint32_t *v66;
  int v67;
  int v68;
  int v69;
  uint32_t *v70;
  uint32_t *v71;
  uint32_t *v72;
  uint32_t *v73;
  int v74;
  int v75;

  for ( i = *(uint32_t *)(a1 + 16); i != 0; i = *(uint32_t *)(a1 + 16) )
  {
    v4 = *(uint32_t *)(i + 1540);
    if ( v4 != 0 )
      *(uint32_t *)(v4 + 1544) = *(uint32_t *)(i + 1544);
    else
      *(uint32_t *)(a1 + 16) = *(uint32_t *)(i + 1544);
    v3 = *(uint32_t *)(i + 1544);
    if ( v3 != 0 )
      *(uint32_t *)(v3 + 1540) = *(uint32_t *)(i + 1540);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      i,
      1552);
  }
  v5 = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(a1 + 20) = 0;
  for ( *(uint32_t *)(a1 + 24) = 0; v5 != 0; v5 = *(uint32_t *)(a1 + 32) )
  {
    v7 = *(uint32_t *)(v5 + 2052);
    if ( v7 != 0 )
      *(uint32_t *)(v7 + 2056) = *(uint32_t *)(v5 + 2056);
    else
      *(uint32_t *)(a1 + 32) = *(uint32_t *)(v5 + 2056);
    v6 = *(uint32_t *)(v5 + 2056);
    if ( v6 != 0 )
      *(uint32_t *)(v6 + 2052) = *(uint32_t *)(v5 + 2052);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v5,
      2064);
  }
  v8 = (uint16_t *)(a1 + 580);
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  v9 = 1024;
  if ( ((a1 + 580) & 1) != 0 )
  {
    v8 = (uint16_t *)(a1 + 581);
    *(uint8_t *)(a1 + 580) = 0;
    LOWORD(v9) = 1023;
    if ( ((a1 + 581) & 2) == 0 )
      goto LABEL_19;
  }
  else if ( ((uint8_t)(uintptr_t)v8 & 2) == 0 )
  {
    goto LABEL_19;
  }
  *v8 = 0;
  v9 -= 2;
  ++v8;
LABEL_19:
  memset(v8, 0, 4 * (v9 >> 2));
  v10 = &v8[2 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
    *v10++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v10 = 0;
  for ( j = *(uint32_t *)(a1 + 576); j != 0; j = *(uint32_t *)(a1 + 576) )
  {
    v13 = *(uint32_t *)(j + 1540);
    if ( v13 != 0 )
      *(uint32_t *)(v13 + 1544) = *(uint32_t *)(j + 1544);
    else
      *(uint32_t *)(a1 + 576) = *(uint32_t *)(j + 1544);
    v12 = *(uint32_t *)(j + 1544);
    if ( v12 != 0 )
      *(uint32_t *)(v12 + 1540) = *(uint32_t *)(j + 1540);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      j,
      1552);
  }
  v14 = *(uint32_t **)(a1 + 572);
  if ( v14 != nullptr )
  {
    v15 = 0;
    for ( k = 0; k < v14[1]; v15 += 12 )
    {
      ++k;
      *(uint32_t *)(*v14 + v15 + 4) = 0;
    }
    v14[3] = 0;
  }
  v17 = *(uint32_t **)(a1 + 16);
  if ( v17 != nullptr )
  {
    v18 = (uint32_t *)v17[384];
    v72 = v18;
    if ( v18 != nullptr )
      goto LABEL_37;
  }
  v17 = (uint32_t *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    1552);
  if ( v17 != nullptr )
  {
    v52 = 32;
    v53 = v17 + 372;
    for ( m = nullptr; ; m = v55 )
    {
      *v53 = (uint32_t)(uintptr_t)(m);
      v55 = v53;
      v53 -= 12;
      if ( --v52 == 0 )
        break;
    }
    v17[387] = 0;
    v17[384] = (uint32_t)(uintptr_t)(v17);
    v17[385] = 0;
    v17[386] = *(uint32_t *)(a1 + 16);
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v17);
    v56 = v17[386];
    if ( v56 != 0 )
      *(uint32_t *)(v56 + 1540) = (uint32_t)(uintptr_t)(v17);
    v72 = (uint32_t *)v17[384];
    v18 = v72;
LABEL_37:
    v17[384] = *v18;
    v18[8] = (uint32_t)(uintptr_t)(v17);
    ++v17[387];
    goto LABEL_38;
  }
  v72 = nullptr;
  v18 = nullptr;
LABEL_38:
  *v18 = 0;
  v18[1] = 0;
  *v18 = *(uint32_t *)(a1 + 20);
  v19 = *(uint32_t *)(a1 + 20);
  if ( v19 != 0 )
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v18);
  ++*(uint32_t *)(a1 + 24);
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v72);
  v72[2] = 0;
  *((uint8_t *)v72 + 16) &= 0xFCu;
  v72[3] = 0;
  v72[4] |= 0xFFFFFFFC;
  v20 = *(uint32_t **)(a1 + 16);
  if ( v20 != nullptr )
  {
    v68 = v20[384];
    if ( v68 != 0 )
      goto LABEL_42;
  }
  v20 = (uint32_t *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    1552);
  if ( v20 != nullptr )
  {
    v47 = 32;
    v48 = v20 + 372;
    for ( n = nullptr; ; n = v50 )
    {
      *v48 = (uint32_t)(uintptr_t)(n);
      v50 = v48;
      v48 -= 12;
      if ( --v47 == 0 )
        break;
    }
    v20[387] = 0;
    v20[384] = (uint32_t)(uintptr_t)(v20);
    v20[385] = 0;
    v20[386] = *(uint32_t *)(a1 + 16);
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v20);
    v51 = v20[386];
    if ( v51 != 0 )
      *(uint32_t *)(v51 + 1540) = (uint32_t)(uintptr_t)(v20);
    v68 = v20[384];
LABEL_42:
    v21 = (uint32_t *)v68;
    v20[384] = *(uint32_t *)v68;
    *(uint32_t *)(v68 + 32) = (uint32_t)(uintptr_t)(v20);
    ++v20[387];
    goto LABEL_43;
  }
  v68 = 0;
  v21 = nullptr;
LABEL_43:
  *v21 = 0;
  v21[1] = 0;
  *v21 = *(uint32_t *)(a1 + 20);
  v22 = *(uint32_t *)(a1 + 20);
  if ( v22 != 0 )
    *(uint32_t *)(v22 + 4) = (uint32_t)(uintptr_t)(v21);
  ++*(uint32_t *)(a1 + 24);
  *(uint32_t *)(a1 + 20) = v68;
  *(uint32_t *)(v68 + 8) = 0;
  *(uint8_t *)(v68 + 16) &= 0xFCu;
  *(uint32_t *)(v68 + 12) = 0x7FFF;
  *(uint32_t *)(v68 + 16) |= 0xFFFFFFFC;
  v23 = *(uint32_t **)(a1 + 16);
  if ( v23 != nullptr )
  {
    v69 = v23[384];
    if ( v69 != 0 )
      goto LABEL_47;
  }
  v23 = (uint32_t *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    1552);
  if ( v23 != nullptr )
  {
    v42 = 32;
    v43 = v23 + 372;
    for ( ii = nullptr; ; ii = v45 )
    {
      *v43 = (uint32_t)(uintptr_t)(ii);
      v45 = v43;
      v43 -= 12;
      if ( --v42 == 0 )
        break;
    }
    v23[387] = 0;
    v23[384] = (uint32_t)(uintptr_t)(v23);
    v23[385] = 0;
    v23[386] = *(uint32_t *)(a1 + 16);
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v23);
    v46 = v23[386];
    if ( v46 != 0 )
      *(uint32_t *)(v46 + 1540) = (uint32_t)(uintptr_t)(v23);
    v69 = v23[384];
LABEL_47:
    v24 = (uint32_t *)v69;
    v23[384] = *(uint32_t *)v69;
    *(uint32_t *)(v69 + 32) = (uint32_t)(uintptr_t)(v23);
    ++v23[387];
    goto LABEL_48;
  }
  v69 = 0;
  v24 = nullptr;
LABEL_48:
  *v24 = 0;
  v24[1] = 0;
  *v24 = *(uint32_t *)(a1 + 20);
  v25 = *(uint32_t *)(a1 + 20);
  if ( v25 != 0 )
    *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(v24);
  ++*(uint32_t *)(a1 + 24);
  *(uint32_t *)(a1 + 20) = v69;
  *(uint32_t *)(v69 + 8) = 0x7FFF;
  *(uint8_t *)(v69 + 16) &= 0xFCu;
  *(uint32_t *)(v69 + 12) = 0;
  *(uint32_t *)(v69 + 16) |= 0xFFFFFFFC;
  v26 = *(uint32_t **)(a1 + 16);
  if ( v26 != nullptr )
  {
    v27 = v26[384];
    if ( v27 != 0 )
      goto LABEL_52;
  }
  v26 = (uint32_t *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    1552);
  if ( v26 != nullptr )
  {
    v37 = 32;
    v38 = v26 + 372;
    for ( jj = nullptr; ; jj = v40 )
    {
      *v38 = (uint32_t)(uintptr_t)(jj);
      v40 = v38;
      v38 -= 12;
      if ( --v37 == 0 )
        break;
    }
    v26[387] = 0;
    v26[384] = (uint32_t)(uintptr_t)(v26);
    v26[385] = 0;
    v26[386] = *(uint32_t *)(a1 + 16);
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v26);
    v41 = v26[386];
    if ( v41 != 0 )
      *(uint32_t *)(v41 + 1540) = (uint32_t)(uintptr_t)(v26);
    v27 = v26[384];
LABEL_52:
    v26[384] = *(uint32_t *)v27;
    *(uint32_t *)(v27 + 32) = (uint32_t)(uintptr_t)(v26);
    ++v26[387];
    goto LABEL_53;
  }
  v27 = 0;
LABEL_53:
  *(uint32_t *)v27 = 0;
  *(uint32_t *)(v27 + 4) = 0;
  *(uint32_t *)v27 = *(uint32_t *)(a1 + 20);
  v28 = *(uint32_t *)(a1 + 20);
  if ( v28 != 0 )
    *(uint32_t *)(v28 + 4) = v27;
  ++*(uint32_t *)(a1 + 24);
  *(uint32_t *)(a1 + 20) = v27;
  *(uint32_t *)(v27 + 8) = 0x7FFF;
  *(uint8_t *)(v27 + 16) &= 0xFCu;
  *(uint32_t *)(v27 + 12) = 0x7FFF;
  *(uint32_t *)(v27 + 16) |= 0xFFFFFFFC;
  v29 = *(uint32_t **)(a1 + 32);
  if ( v29 != nullptr )
  {
    v73 = (uint32_t *)v29[512];
    if ( v73 != nullptr )
      goto LABEL_57;
  }
  v29 = (uint32_t *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    2064);
  if ( v29 != nullptr )
  {
    v57 = 32;
    v58 = v29 + 496;
    v59 = nullptr;
    v74 = v27;
    while ( 1 )
    {
      *v58 = (uint32_t)(uintptr_t)(v59);
      v60 = v58;
      v58 -= 16;
      if ( --v57 == 0 )
        break;
      v59 = v60;
    }
    v29[515] = 0;
    v29[512] = (uint32_t)(uintptr_t)(v29);
    v29[513] = 0;
    v29[514] = *(uint32_t *)(a1 + 32);
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v29);
    v61 = v29[514];
    v27 = v74;
    if ( v61 != 0 )
      *(uint32_t *)(v61 + 2052) = (uint32_t)(uintptr_t)(v29);
    v73 = (uint32_t *)v29[512];
LABEL_57:
    v30 = v73;
    v29[512] = *v73;
    v73[12] = (uint32_t)(uintptr_t)(v29);
    ++v29[515];
    v75 = (int)(uintptr_t)(v73) + 2;
    goto LABEL_58;
  }
  v73 = nullptr;
  v75 = 2;
  v30 = nullptr;
LABEL_58:
  memset(v30, 0, 0x20u);
  *v73 = *(uint32_t *)(a1 + 36);
  v31 = *(uint32_t *)(a1 + 36);
  if ( v31 != 0 )
    *(uint32_t *)(v31 + 4) = (uint32_t)(uintptr_t)(v73);
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v73);
  ++*(uint32_t *)(a1 + 40);
  v73[3] = v69;
  *((uint8_t *)v73 + 32) &= 0xE0u;
  v73[2] = (uint32_t)(uintptr_t)(v72);
  *((uint16_t *)v73 + 16) &= 0x1Fu;
  v73[4] = v27;
  *((uint16_t *)v73 + 17) = 0;
  *(uint32_t *)(a1
            + 4
            * (((*(uint32_t *)(v27 + 8) + *(uint32_t *)(v69 + 8) + 2 * v72[2]) >> 13)
             + 16 * ((*(uint32_t *)(v27 + 12) + v72[3] + v72[3] + *(uint32_t *)(v69 + 12)) >> 13)
             + 144)
            + 4) = (uint32_t)(uintptr_t)(v73);
  *((uint8_t *)v73 + 32) |= 8u;
  v32 = *(uint32_t **)(a1 + 32);
  v70 = v32;
  if ( v32 != nullptr )
  {
    v33 = (uint32_t *)v32[512];
    if ( v33 != nullptr )
      goto LABEL_62;
  }
  v62 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          2064);
  v70 = (uint32_t *)v62;
  if ( v62 != 0 )
  {
    v63 = (uint32_t *)(v62 + 1984);
    v64 = 32;
    for ( kk = nullptr; ; kk = v66 )
    {
      *v63 = (uint32_t)(uintptr_t)(kk);
      v66 = v63;
      v63 -= 16;
      if ( --v64 == 0 )
        break;
    }
    v70[515] = 0;
    v70[512] = (uint32_t)(uintptr_t)(v70);
    v70[513] = 0;
    v70[514] = *(uint32_t *)(a1 + 32);
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v70);
    v67 = v70[514];
    if ( v67 != 0 )
      *(uint32_t *)(v67 + 2052) = (uint32_t)(uintptr_t)(v70);
    v33 = (uint32_t *)v70[512];
LABEL_62:
    v34 = v70;
    v71 = v33;
    v34[512] = *v33;
    v33[12] = (uint32_t)(uintptr_t)(v34);
    ++v34[515];
    goto LABEL_63;
  }
  v71 = nullptr;
  v33 = nullptr;
LABEL_63:
  memset(v33, 0, 0x20u);
  *v33 = *(uint32_t *)(a1 + 36);
  v35 = *(uint32_t *)(a1 + 36);
  if ( v35 != 0 )
    *(uint32_t *)(v35 + 4) = (uint32_t)(uintptr_t)(v33);
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v33);
  ++*(uint32_t *)(a1 + 40);
  v33[3] = v27;
  *((uint8_t *)v33 + 32) &= 0xE0u;
  v33[4] = v68;
  *((uint16_t *)v33 + 16) &= 0x1Fu;
  v33[2] = (uint32_t)(uintptr_t)(v72);
  *((uint16_t *)v33 + 17) = 0;
  *(uint32_t *)(a1
            + 4
            * (((*(uint32_t *)(v68 + 8) + *(uint32_t *)(v27 + 8) + 2 * v72[2]) >> 13)
             + 16 * ((*(uint32_t *)(v68 + 12) + v72[3] + v72[3] + *(uint32_t *)(v27 + 12)) >> 13)
             + 144)
            + 4) = (uint32_t)(uintptr_t)(v33);
  *((uint8_t *)v33 + 32) |= 8u;
  v73[6] = 0;
  v73[5] = 0;
  v33[7] = 0;
  v33[6] = 0;
  v73[7] = (uint32_t)(uintptr_t)(v71);
  v33[5] = v75;
  return v75;
}

// ----------------------------------------------------------------------------
// Function: sub_16566B0  (binary VA: 0x16566b0)
// Original: sub_16566B0
// ----------------------------------------------------------------------------
float * sub_16566B0(float *a1, uint32_t *a2, int a3)
{
  int v4;
  int v6;
  const hkVector4f::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  bool v13; // cc
  int v14;
  uint32_t *v15;
  typedef hkAabb::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef hkAabbUtil::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[14];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v26)) > _g4_s9 ? (48u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v27)) > _g4_s10 ? (52u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v28)) > _g4_s11 ? (56u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v29)) > _g4_s12 ? (64u + sizeof(_g4_t_v29)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);

  v29[10] = (int)(uintptr_t)(&a3);
  v4 = a2[1];
  if ( v4 == 0 )
  {
    *a1 = 0.0;
    return a1;
  }
  v26 = nullptr;
  v27 = 0;
  v28 = 0x80000000;
  if ( 2 * v4 > 0 )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v25,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v26,
      2 * v4,
      16);
    v6 = a2[1];
    v7 = (const hkVector4f::Self *)v27;
  }
  else
  {
    v6 = v4;
    v7 = nullptr;
  }
  if ( v6 > 0 )
  {
    v24 = a2;
    v8 = 0;
    do
    {
      v14 = 8 * v8;
      v15 = *(uint32_t **)(*(uint32_t *)(*v24 + 8 * v8) + 4 * *(uint32_t *)(*v24 + 8 * v8 + 4) + 8);
      if ( (const hkVector4f::Self *)(v28 & 0x3FFFFFFF) == v7 )
      {
        v22 = 8 * v8;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v26,
          16,
          (int)(uintptr_t)(v16));
        v7 = (const hkVector4f::Self *)v27;
        v14 = 8 * v8;
      }
      v9 = (uint32_t *)((char *)v26 + 16 * (uint32_t)(uintptr_t)(v7));
      *v9 = v15[8];
      v9[1] = v15[9];
      v9[2] = v15[10];
      v9[3] = v15[11];
      v10 = v27 + 1;
      v27 = v10;
      v11 = *(uint32_t **)(*(uint32_t *)(*v24 + v14) + 4 * ((9 >> (2 * *(uint8_t *)(*v24 + v14 + 4))) & 3) + 8);
      if ( v10 == (v28 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v26,
          16,
          (int)(uintptr_t)(v16));
        v10 = v27;
      }
      v12 = (uint32_t *)((char *)v26 + 16 * v10);
      ++v8;
      *v12 = v11[8];
      v12[1] = v11[9];
      v12[2] = v11[10];
      v12[3] = v11[11];
      v7 = (const hkVector4f::Self *)(v27 + 1);
      v13 = v24[1] <= v8;
      ++v27;
    }
    while ( !v13 );
  }
  hkAabbUtil::calcAabb(v26, v7, (int)(uintptr_t)(v29), v16);
  v27 = 0;
  *a1 = (float)(*(float *)&v29[6] - *(float *)&v29[2])
      + (float)((float)(*(float *)&v29[4] - *(float *)v29) + (float)(*(float *)&v29[5] - *(float *)&v29[1]));
  if ( v28 < 0 )
    return a1;
  (*(void (**)(uint32_t *, hkAabbUtil::Self *, int, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc
                                                                                   + 20))(
    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
    v26,
    16 * v28,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkcdGskBase::checkTriangleBoundaries_true_id_fef2ed  (binary VA: 0x165b810)
// Original: hkcdGskBase::_checkTriangleBoundaries<true>
// ----------------------------------------------------------------------------
int hkcdGskBase::checkTriangleBoundaries_true_id_fef2ed(hkcdGskBase::Self *self, const hkVector4f::Self *a2, hkVector4f::Self *a3, hkVector4f::Self *a4)
{
  float v4; // xmm7_4
  float v5; // xmm3_4
  hkcdGskBase::Self *v6;
  float v7; // xmm6_4
  hkVector4f::Self *v8;
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  unsigned int v21; // xmm2_4
  int result;
  float v23; // xmm6_4
  __m128i v24;
  float v25;
  float v26;
  int v27;
  int v28;
  int v29;
  float v30; // xmm2_4
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;

  v4 = *((float *)a3 + 4);
  v5 = *((float *)a3 + 5);
  v6 = self;
  v7 = *((float *)a3 + 6);
  v8 = a4;
  v40 = *((float *)a3 + 8) - v4;
  v35 = v4 - *(float *)a3;
  v9 = *((float *)a3 + 9) - v5;
  v10 = *((float *)a3 + 10) - v7;
  v38 = *(float *)a3 - *((float *)a3 + 8);
  v39 = *((float *)a3 + 1) - *((float *)a3 + 9);
  v34 = v5 - *((float *)a3 + 1);
  v36 = *((float *)a3 + 2) - *((float *)a3 + 10);
  v37 = (float)(v36 * v9) - (float)(v39 * v10);
  v11 = (float)(v38 * v10) - (float)(v36 * v40);
  v12 = (float)(v39 * v40) - (float)(v38 * v9);
  v13 = *(float *)a2 - v4;
  v14 = *((float *)a2 + 1);
  v31 = v13;
  v15 = v14 - v5;
  v16 = *((float *)a2 + 2);
  v32 = v15;
  v17 = v14 - *((float *)a3 + 9);
  v33 = v14 - *((float *)a3 + 1);
  v18 = (float)((float)((float)((float)(v32 * v10) - (float)(v9 * (float)(v16 - v7))) * v37)
              + (float)((float)((float)((float)(v16 - v7) * v40) - (float)(v10 * v31)) * v11))
      + (float)((float)((float)(v9 * v31) - (float)(v40 * v32)) * v12);
  v19 = (float)((float)((float)((float)(v17 * v36) - (float)(v39 * (float)(v16 - *((float *)a3 + 10)))) * v37)
              + (float)((float)((float)((float)(v16 - *((float *)a3 + 10)) * v38)
                              - (float)(v36 * (float)(*(float *)a2 - *((float *)a3 + 8))))
                      * v11))
      + (float)((float)((float)(v39 * (float)(*(float *)a2 - *((float *)a3 + 8))) - (float)(v38 * v17)) * v12);
  v20 = (float)((float)((float)((float)(v33 * (float)(v7 - *((float *)a3 + 2)))
                              - (float)(v34 * (float)(v16 - *((float *)a3 + 2))))
                      * v37)
              + (float)((float)((float)((float)(v16 - *((float *)a3 + 2)) * v35)
                              - (float)((float)(v7 - *((float *)a3 + 2)) * (float)(*(float *)a2 - *(float *)a3)))
                      * v11))
      + (float)((float)((float)(v34 * (float)(*(float *)a2 - *(float *)a3)) - (float)(v35 * v33)) * v12);
  v21 = 0;
  result = (v18 < 0.0) | (2 * (v19 < 0.0));
  if ( v20 < 0.0
    && (result |= 4u,
        v24 = _mm_cvtsi32_si128(*((uint32_t *)self + 9)),
        *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) - *((float *)self + 25),
        v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v24)),
        result == 7)
    && (float)((float)((float)((float)(*((float *)self + 8) - *((float *)self + 24)) * v37) + (float)(v25 * v11))
             + (float)((float)(*((float *)self + 10) - *((float *)self + 26)) * v12)) < 0.0 )
  {
    v26 = *(float *)a3;
    *(uint32_t *)a3 = *((uint32_t *)a3 + 4);
    v41 = v26;
    v27 = *((uint32_t *)a3 + 1);
    *((uint32_t *)a3 + 1) = *((uint32_t *)a3 + 5);
    v28 = *((uint32_t *)a3 + 2);
    *((uint32_t *)a3 + 2) = *((uint32_t *)a3 + 6);
    v23 = -v37;
    v29 = *((uint32_t *)a3 + 3);
    v11 = -v11;
    v12 = -v12;
    *((uint32_t *)a3 + 3) = *((uint32_t *)a3 + 7);
    v30 = v18;
    *((uint32_t *)a3 + 6) = v28;
    *((float *)a3 + 4) = v41;
    *((uint32_t *)a3 + 7) = v29;
    v18 = v19;
    *((uint32_t *)a3 + 5) = v27;
    v19 = v30;
    result = 7;
    v6 = self;
    v21 = 0x80000000;
    v8 = a4;
  }
  else
  {
    v23 = v37;
  }
  *(float *)v8 = v23;
  *((float *)v8 + 1) = v11;
  *((float *)v8 + 2) = v12;
  *((uint32_t *)v8 + 3) = v21;
  *((uint32_t *)v6 + 3) = 0;
  *(float *)v6 = v18;
  *((float *)v6 + 1) = v19;
  *((float *)v6 + 2) = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkgpTopology::Edge_hkgpMeshBase_Edge_hkgpMe_5ece7f::applyFan_hkgpMesh_FanEdgeCollecto_df357c  (binary VA: 0x165f790)
// Original: hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::applyFan<hkgpMesh::FanEdgeCollector>
// ----------------------------------------------------------------------------
int hkgpTopology::Edge_hkgpMeshBase_Edge_hkgpMe_5ece7f::applyFan_hkgpMesh_FanEdgeCollecto_df357c(unsigned int *a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);

  v2 = a1[1];
  v11 = *a1;
  v12 = *a1;
  v13 = v2;
  v3 = *((uint32_t *)a2 + 1);
  while ( 1 )
  {
    if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) == v3 )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 8, v10);
      v3 = *((uint32_t *)a2 + 1);
    }
    v4 = v12;
    v5 = *(uint32_t *)a2;
    *(uint32_t *)(v5 + 8 * v3 + 4) = v13;
    *(uint32_t *)(v5 + 8 * v3) = v4;
    v3 = *((uint32_t *)a2 + 1) + 1;
    *((uint32_t *)a2 + 1) = v3;
    v6 = *(uint32_t *)(v12 + 4 * ((18 >> (2 * v13)) & 3) + 20);
    v12 = v6 & 0xFFFFFFFC;
    v13 = v6 & 3;
    if ( (v6 & 0xFFFFFFFC) == 0 )
      break;
    if ( v6 == v2 + v11 )
      return 1;
  }
  v8 = *(uint32_t *)(v11 + 4 * v2 + 20);
  v12 = v8 & 0xFFFFFFFC;
  v13 = (9 >> (2 * (v8 & 3))) & 3;
  if ( (v8 & 0xFFFFFFFC) == 0 )
    return 1;
  do
  {
    sub_1654CD0(a2, &v12);
    v9 = *(uint32_t *)(v12 + 4 * v13 + 20);
    v12 = v9 & 0xFFFFFFFC;
    v13 = (9 >> (2 * (v9 & 3))) & 3;
  }
  while ( (v9 & 0xFFFFFFFC) != 0 );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkgpMesh_hkgpMeshInterna_0eec35  (binary VA: 0x1661e90)
// Original: hkAlgorithm::quickSortRecursive<hkgpMesh *,hkgpMeshInternals::CompareSetSize>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkgpMesh_hkgpMeshInterna_0eec35(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int result;
  int v10;
  int v11;
  int v12;
  int i;

  while ( 2 )
  {
    v3 = a3;
    v10 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v4 = *(uint32_t *)(v10 + 32);
    v5 = a2 + 1;
    for ( i = a2 + 1; ; v5 = i )
    {
      v12 = v5 - 1;
      v11 = *(uint32_t *)(a1 + 4 * v5 - 4);
      if ( *(uint32_t *)(v11 + 32) < v4 )
        goto LABEL_14;
      v6 = (int *)(a1 + 4 * v3);
      v7 = *v6;
      if ( *(uint32_t *)(*v6 + 32) > v4 )
      {
        v8 = (int *)(a1 + 4 * v3 - 4);
        do
        {
          v7 = *v8;
          --v3;
          v6 = v8--;
        }
        while ( *(uint32_t *)(v7 + 32) > v4 );
      }
      if ( v3 < v12 )
        break;
      if ( v3 != v12 )
      {
        *v6 = v11;
        *(uint32_t *)(a1 + 4 * i - 4) = v7;
      }
      --v3;
      v12 = i;
      if ( v3 < i )
        break;
      v4 = *(uint32_t *)(v10 + 32);
LABEL_14:
      ++i;
    }
    if ( a2 < v3 )
    {
      hkAlgorithm::quickSortRecursive_hkgpMesh_hkgpMeshInterna_0eec35(a1, a2, v3);
      result = v12;
      if ( a3 > v12 )
      {
LABEL_9:
        a2 = result;
        continue;
      }
    }
    else
    {
      result = v12;
      if ( a3 > v12 )
        goto LABEL_9;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkgpMeshBase_Triangle_hk_b04abe  (binary VA: 0x1663cf0)
// Original: hkAlgorithm::quickSortRecursive<hkgpMeshBase::Triangle *,hkgpMesh::SortByArea>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkgpMeshBase_Triangle_hk_b04abe(int a1, int a2, int a3)
{
  float *v3;
  float *v4;
  float *v5;
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  __m128i v11;
  int v12;
  int v13;
  float v14; // xmm1_4
  float v15; // xmm0_4
  float *v16;
  int v17;
  float *v18;
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  __m128i v24;
  float v25; // xmm6_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  __m128i v32;
  int v33;
  float v34; // xmm2_4
  float v35; // xmm1_4
  uint32_t *v36;
  int v37;
  float *v38;
  int v39;
  float *v40;
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  __m128i v46;
  float v47; // xmm6_4
  float v48; // xmm3_4
  float v49; // xmm5_4
  float v50; // xmm7_4
  float v51; // xmm6_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  __m128i v54;
  float v55; // xmm3_4
  int v56;
  int v57;
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  int result;
  float *v63;
  float *v64;
  float *v65;
  float v66; // xmm1_4
  float v67; // xmm2_4
  uint32_t *v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  int v74;
  uint32_t *v75;
  int v76;
  float v77;
  int v78;
  float v79;
  uint32_t *v80;
  float v81;
  float v82;
  float v83;
  float v84;
  int v85;

  while ( 2 )
  {
    v68 = *(uint32_t **)(a1 + 4 * ((a3 + a2) >> 1));
    v3 = (float *)v68[4];
    v4 = (float *)v68[3];
    v5 = (float *)v68[2];
    v6 = v5[9];
    v81 = v5[10];
    v7 = v5[8];
    v73 = v4[9] - v6;
    v76 = a2 + 1;
    v70 = v3[9] - v6;
    v85 = a3;
    v8 = v3[8] - v7;
    v77 = v4[8] - v7;
    v72 = v8;
    v71 = v4[10] - v81;
    v9 = v71;
    v69 = v3[10] - v81;
    v10 = v69;
    while ( 1 )
    {
g4_m128_raw(v11) = LODWORD(v73);
      v74 = v76 - 1;
      v75 = *(uint32_t **)(a1 + 4 * v76 - 4);
      *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)((float)((float)(v73 * v10) - (float)(v9 * v70))
                                              * (float)((float)(v73 * v10) - (float)(v9 * v70)))
                                      + (float)((float)((float)(v9 * v8) - (float)(v77 * v10))
                                              * (float)((float)(v9 * v8) - (float)(v77 * v10))))
                              + (float)((float)((float)(v77 * v70) - (float)(v73 * v8))
                                      * (float)((float)(v77 * v70) - (float)(v73 * v8)));
      if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
      {
        v79 = 0.0;
      }
      else
      {
        v12 = _mm_cvtsi128_si32(v11) >> 1;
        v13 = (_mm_cvtsi128_si32(v11) + 2139095040) >> 31;
        v14 = (float)(1.5 * COERCE_FLOAT(v13 & (1597463174 - v12)))
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * COERCE_FLOAT(v13 & (1597463174 - v12)))
                    * (float)(COERCE_FLOAT(v13 & (1597463174 - v12)) * COERCE_FLOAT(v13 & (1597463174 - v12))));
        v15 = (float)(1.5 * v14) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v14) * (float)(v14 * v14));
        v79 = (float)((float)(1.5 * v15)
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v15) * (float)(v15 * v15)))
            * *(float *)g4_m128_ptr<int32_t>(v11);
      }
      v16 = (float *)v75[4];
      v17 = v75[3];
      v18 = (float *)v75[2];
      v19 = v18[8];
      v20 = *(float *)(v17 + 32) - v19;
      v21 = v18[9];
      v22 = v16[8] - v19;
      v23 = v18[10];
g4_m128_raw(v24) = *(unsigned int *)(v17 + 36);
      *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) - v21;
      v25 = *(float *)(v17 + 40) - v23;
      v26 = v16[9] - v21;
      v27 = v16[10] - v23;
      v82 = v22;
      v32 = v24;
      v28 = v25 * v26;
      *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v24) * v27;
      v29 = v27 * v20;
      v30 = v26 * v20;
      v31 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v32) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v32) - v28)
                                              * (float)(*(float *)g4_m128_ptr<int32_t>(v32) - v28))
                                      + (float)((float)((float)(v25 * v82) - v29) * (float)((float)(v25 * v82) - v29)))
                              + (float)((float)(v30 - (float)(v82 * *(float *)g4_m128_ptr<int32_t>(v24)))
                                      * (float)(v30 - (float)(v82 * *(float *)g4_m128_ptr<int32_t>(v24))));
      if ( *(float *)g4_m128_ptr<int32_t>(v32) > 0.0 )
      {
        v33 = ((_mm_cvtsi128_si32(v32) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v32) >> 1));
        v34 = (float)(*(float *)&v33 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * *(float *)&v33)
                    * (float)(*(float *)&v33 * *(float *)&v33));
        v35 = (float)(v34 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * v34) * (float)(v34 * v34));
        v31 = (float)((float)(1.5 * v35)
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * v35) * (float)(v35 * v35)))
            * *(float *)g4_m128_ptr<int32_t>(v32);
      }
      if ( v31 <= v79 )
        break;
LABEL_22:
      v10 = v69;
      ++v76;
      v9 = v71;
      v8 = v72;
    }
    v83 = *(float *)g4_m128_ptr<int32_t>(v11);
    v78 = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
    v36 = (uint32_t *)(a1 + 4 * v85);
    while ( 1 )
    {
      v37 = *v36;
      v80 = v36;
      v38 = *(float **)(*v36 + 16);
      v39 = *(uint32_t *)(*v36 + 12);
      v40 = *(float **)(*v36 + 8);
      v41 = v40[8];
      v42 = *(float *)(v39 + 32) - v41;
      v43 = v40[9];
      v44 = v38[8] - v41;
      v45 = v40[10];
g4_m128_raw(v46) = *(unsigned int *)(v39 + 36);
      *(float *)g4_m128_ptr<int32_t>(v46) = *(float *)g4_m128_ptr<int32_t>(v46) - v43;
      v47 = *(float *)(v39 + 40) - v45;
      v48 = v38[9] - v43;
      v49 = v38[10] - v45;
      v54 = v46;
      v50 = v47 * v48;
      v51 = v47 * v44;
      v52 = v44 * *(float *)g4_m128_ptr<int32_t>(v46);
      *(float *)g4_m128_ptr<int32_t>(v54) = (float)(*(float *)g4_m128_ptr<int32_t>(v46) * v49) - v50;
      v53 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v54) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)g4_m128_ptr<int32_t>(v54))
                                      + (float)((float)(v51 - (float)(v49 * v42)) * (float)(v51 - (float)(v49 * v42))))
                              + (float)((float)((float)(v48 * v42) - v52) * (float)((float)(v48 * v42) - v52));
      if ( *(float *)g4_m128_ptr<int32_t>(v54) > 0.0 )
      {
        v55 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v54);
        v56 = _mm_cvtsi128_si32(v54) >> 1;
        v57 = (_mm_cvtsi128_si32(v54) + 2139095040) >> 31;
        v58 = (float)(1.5 * COERCE_FLOAT(v57 & (1597463174 - v56)))
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v54)) * COERCE_FLOAT(v57 & (1597463174 - v56)))
                    * (float)(COERCE_FLOAT(v57 & (1597463174 - v56)) * COERCE_FLOAT(v57 & (1597463174 - v56))));
        v53 = (float)((float)(1.5 * (float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58))))
                    - (float)((float)(v55
                                    * (float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58))))
                            * (float)((float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58)))
                                    * (float)((float)(1.5 * v58) - (float)((float)(v55 * v58) * (float)(v58 * v58))))))
            * *(float *)g4_m128_ptr<int32_t>(v54);
      }
      v59 = 0.0;
      if ( v83 > 0.0 )
      {
        v60 = (float)(1.5 * *(float *)&v78)
            - (float)((float)((float)(0.5 * v83) * *(float *)&v78) * (float)(*(float *)&v78 * *(float *)&v78));
        v61 = (float)(1.5 * v60) - (float)((float)((float)(0.5 * v83) * v60) * (float)(v60 * v60));
        v59 = (float)((float)(1.5 * v61) - (float)((float)((float)(0.5 * v83) * v61) * (float)(v61 * v61))) * v83;
      }
      --v36;
      if ( v59 <= v53 )
        break;
      --v85;
    }
    if ( v74 <= v85 )
    {
      if ( v74 != v85 )
      {
        *v80 = (uint32_t)(uintptr_t)(v75);
        *(uint32_t *)(a1 + 4 * v76 - 4) = v37;
      }
      --v85;
      v74 = v76;
      if ( v85 >= v76 )
      {
        v63 = (float *)v68[4];
        v64 = (float *)v68[3];
        v65 = (float *)v68[2];
        v66 = v65[9];
        v84 = v65[10];
        v67 = v65[8];
        v73 = v64[9] - v66;
        v77 = v64[8] - v67;
        v72 = v63[8] - v67;
        v70 = v63[9] - v66;
        v71 = v64[10] - v84;
        v69 = v63[10] - v84;
        goto LABEL_22;
      }
    }
    if ( a2 < v85 )
    {
      hkAlgorithm::quickSortRecursive_hkgpMeshBase_Triangle_hk_b04abe(a1, a2, v85);
      result = v74;
      if ( a3 > v74 )
      {
LABEL_17:
        a2 = result;
        continue;
      }
    }
    else
    {
      result = v74;
      if ( a3 > v74 )
        goto LABEL_17;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1667CA0  (binary VA: 0x1667ca0)
// Original: sub_1667CA0
// ----------------------------------------------------------------------------
int sub_1667CA0(__m128 *a1, int a2, hkVector4f::Self *a3)
{
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm2_4
  float v14; // xmm1_4
  __m128i v15;
  int v16;
  int v17;
  float v18; // xmm0_4
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v26[4];
  typedef float _g4_t_v27[16];
  typedef uint32_t _g4_t_v28[19];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v27)) > _g4_s6 ? (48u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v28)) > _g4_s7 ? (112u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);

  v27[0] = 1.0;
  memset(&v27[1], 0, 16);
  v27[5] = 1.0;
  memset(&v27[6], 0, 16);
  v27[10] = 1.0;
  memset(&v27[11], 0, 16);
  v3 = *(float *)a3;
  v4 = *((float *)a3 + 1);
  v5 = *((float *)a3 + 2);
  v27[15] = 1.0;
  v6 = (float)((float)(v3 * 0.0) + (float)(v4 * 0.0)) + (float)(v5 * 1.0);
  if ( v6 > 0.99999f )
  {
    memset(v26, 0, 12);
    v26[3] = 1.0;
  }
  else if ( v6 < -0.99999f )
  {
    hkQuaternionf::setFlippedRotation((hkQuaternionf::Self *)v26, a3);
  }
  else
  {
    v7 = (float)(v6 + 1.0) * 0.5;
    v8 = fsqrt(v7);
    if ( __builtin_isnan(v8) )
    {
      v23 = sqrtf(v7);
      v8 = v23;
    }
    v9 = *((float *)a3 + 1);
    v21 = *((float *)a3 + 2);
    v10 = 0.5 / v8;
    v20 = (float)(1.0 * v9) - (float)(v21 * 0.0);
    v11 = (float)(v21 * 0.0) - (float)(1.0 * *(float *)a3);
    v12 = (float)(0.0 * *(float *)a3) - (float)(0.0 * v9);
    if ( v6 < -0.999f )
    {
      v19 = fsqrt((float)(v8 * v8) - v6);
      if ( __builtin_isnan(v19) )
        v19 = sqrtf((float)(v8 * v8) - v6);
g4_m128_raw(v15) = LODWORD(v20);
      v14 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)) + (float)(v11 * v11))
                              + (float)(v12 * v12);
      if ( *(float *)g4_m128_ptr<int32_t>(v15) > 0.0 )
      {
        v16 = _mm_cvtsi128_si32(v15) >> 1;
        v17 = (_mm_cvtsi128_si32(v15) + 2139095040) >> 31;
        v22 = (float)(1.5 * COERCE_FLOAT(v17 & (1597463174 - v16)))
            - (float)((float)(COERCE_FLOAT(v17 & (1597463174 - v16)) * COERCE_FLOAT(v17 & (1597463174 - v16)))
                    * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * COERCE_FLOAT(v17 & (1597463174 - v16))));
        v18 = (float)(1.5 * v22) - (float)((float)(v22 * v22) * (float)(v22 * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15))));
        v14 = (float)((float)(1.5 * v18)
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v18) * (float)(v18 * v18)))
            * *(float *)g4_m128_ptr<int32_t>(v15);
      }
      v10 = v10 * (float)((float)((float)(v19 + v19) * v8) / v14);
    }
    v26[3] = v8;
    v26[0] = v20 * v10;
    v26[1] = v11 * v10;
    v26[2] = v12 * v10;
  }
  hkRotationf::set((hkRotationf::Self *)v28, (const hkQuaternionf::Self *)v26);
  v27[0] = *(float *)v28;
  v27[1] = *(float *)&v28[1];
  v27[2] = *(float *)&v28[2];
  v27[4] = *(float *)&v28[4];
  v27[5] = *(float *)&v28[5];
  v27[6] = *(float *)&v28[6];
  v27[8] = *(float *)&v28[8];
  v27[9] = *(float *)&v28[9];
  memset(&v28[12], 0, 16);
  v27[10] = *(float *)&v28[10];
  v27[3] = 0.0;
  v27[7] = 0.0;
  memset(&v27[11], 0, 16);
  v27[15] = 1.0;
  return hkgpTriangulatorType<hkContainerHeapAllocator::Self,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkContainerHeapAllocator::Self>,-1,4,15,false>::setDomainFromPoints(
           a1,
           a2,
           v27,
           1u,
           1);
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_626708  (binary VA: 0x1668640)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<NearestFeaturePolicy>>
// ----------------------------------------------------------------------------
uint32_t * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_626708(uint32_t *a1, int *a2, float *a3)
{
  uint32_t *result;
  float *v4;
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float *v11;
  float *v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  int v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int *v34;
  int *v35;
  bool v36;
  int v37;
  unsigned int v38;
  int v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int *_g4_t_v47;
  typedef float _g4_t_v48;
  typedef g4_int128_t _g4_t_v49;
  typedef g4_int128_t _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t _g4_t_v70[4];
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_v77;
  typedef float *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint32_t **_g4_t_v80;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v40)) > _g4_s0 ? (12u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v41)) > _g4_s1 ? (40u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v42)) > _g4_s2 ? (68u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (108u + sizeof(_g4_t_v43)) > _g4_s3 ? (108u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (112u + sizeof(_g4_t_v44)) > _g4_s4 ? (112u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (112u + sizeof(_g4_t_v45)) > _g4_s5 ? (112u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (116u + sizeof(_g4_t_v46)) > _g4_s6 ? (116u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (120u + sizeof(_g4_t_v47)) > _g4_s7 ? (120u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (124u + sizeof(_g4_t_v48)) > _g4_s8 ? (124u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v49)) > _g4_s9 ? (128u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v50)) > _g4_s10 ? (144u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v51)) > _g4_s11 ? (160u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v52)) > _g4_s12 ? (164u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (168u + sizeof(_g4_t_v53)) > _g4_s13 ? (168u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (172u + sizeof(_g4_t_v54)) > _g4_s14 ? (172u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (176u + sizeof(_g4_t_v55)) > _g4_s15 ? (176u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (180u + sizeof(_g4_t_v56)) > _g4_s16 ? (180u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (184u + sizeof(_g4_t_v57)) > _g4_s17 ? (184u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (188u + sizeof(_g4_t_v58)) > _g4_s18 ? (188u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (192u + sizeof(_g4_t_v59)) > _g4_s19 ? (192u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (196u + sizeof(_g4_t_v60)) > _g4_s20 ? (196u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (208u + sizeof(_g4_t_v61)) > _g4_s21 ? (208u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (212u + sizeof(_g4_t_v62)) > _g4_s22 ? (212u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (216u + sizeof(_g4_t_v63)) > _g4_s23 ? (216u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (220u + sizeof(_g4_t_v64)) > _g4_s24 ? (220u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v65)) > _g4_s25 ? (224u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (228u + sizeof(_g4_t_v66)) > _g4_s26 ? (228u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v67)) > _g4_s27 ? (232u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v68)) > _g4_s28 ? (236u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (240u + sizeof(_g4_t_v69)) > _g4_s29 ? (240u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (244u + sizeof(_g4_t_v70)) > _g4_s30 ? (244u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (260u + sizeof(_g4_t_v71)) > _g4_s31 ? (260u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (264u + sizeof(_g4_t_v72)) > _g4_s32 ? (264u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (268u + sizeof(_g4_t_v73)) > _g4_s33 ? (268u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (272u + sizeof(_g4_t_v74)) > _g4_s34 ? (272u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (276u + sizeof(_g4_t_v75)) > _g4_s35 ? (276u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (280u + sizeof(_g4_t_v76)) > _g4_s36 ? (280u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (284u + sizeof(_g4_t_v77)) > _g4_s37 ? (284u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (288u + sizeof(_g4_t_v78)) > _g4_s38 ? (288u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (292u + sizeof(_g4_t_v79)) > _g4_s39 ? (292u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (312u + sizeof(_g4_t_v80)) > _g4_s40 ? (312u + sizeof(_g4_t_v80)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 116u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 120u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 124u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 164u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 168u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 172u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 196u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 208u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 212u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 216u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 220u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 224u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 228u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 232u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 236u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 240u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 244u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 260u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 264u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 268u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 272u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 276u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 280u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 284u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 288u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 292u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 312u);

  v80 = &a1;
  result = a1;
  v47 = (int *)(a1);
  v46 = a2;
  v4 = a3;
  if ( a1[6] != 0 )
  {
    v43 = a2[1];
    result = (uint32_t *)sub_1654A00(a1, a1 + 6, &v51);
    v5 = v4[4];
    v6 = v4[5];
    v7 = v4[6];
    v8 = fminf(v55, fmaxf(v51, v5));
    v9 = fminf(v56, fmaxf(v52, v6));
    v10 = fminf(v57, fmaxf(v53, v7));
    if ( v4[8] >= (float)((float)((float)((float)(v5 - v8) * (float)(v5 - v8))
                                + (float)((float)(v6 - v9) * (float)(v6 - v9)))
                        + (float)((float)(v7 - v10) * (float)(v7 - v10))) )
    {
      v11 = v59;
      v12 = v4;
      while ( 1 )
      {
LABEL_4:
        while ( 1 )
        {
          v13 = *((uint32_t *)v11 + 9);
          if ( v13 == 0 )
            break;
          while ( 1 )
          {
            v70[0] = v13;
            v14 = *v47;
            v15 = 48 * v13 + *v47;
            v69 = v15;
            v61 = *(float *)v15;
            v62 = *(float *)(v15 + 4);
            v63 = *(float *)(v15 + 8);
            v64 = *(uint32_t *)(v15 + 12);
            v65 = *(float *)(v15 + 16);
            v66 = *(float *)(v15 + 20);
            v67 = *(float *)(v15 + 24);
            v68 = *(uint32_t *)(v15 + 28);
            v79 = *((uint32_t *)v59 + 10);
            v11 = (float *)(48 * v79 + v14);
            v78 = v11;
            v42 = *v11;
            *(float *)&v70[3] = v42;
            v16 = v12[4];
            v17 = v12[5];
            v71 = v11[1];
            v18 = v12[6];
            v72 = v11[2];
            v19 = fminf(v66, fmaxf(v62, v17));
            v73 = *((uint32_t *)v11 + 3);
            v20 = fminf(v67, fmaxf(v63, v18));
            v74 = v11[4];
            v75 = v11[5];
            v21 = v16 - fminf(v65, fmaxf(v61, v16));
            v76 = v11[6];
            v41 = *((uint32_t *)v11 + 7);
            v77 = v41;
            v22 = (float)((float)(v21 * v21) + (float)((float)(v17 - v19) * (float)(v17 - v19)))
                + (float)((float)(v18 - v20) * (float)(v18 - v20));
            v23 = fminf(v74, fmaxf(v42, v16));
            v24 = fminf(v75, fmaxf(v71, v17));
            v25 = fminf(v76, fmaxf(v72, v18));
            v26 = (float)((float)((float)(v16 - v23) * (float)(v16 - v23))
                        + (float)((float)(v17 - v24) * (float)(v17 - v24)))
                + (float)((float)(v18 - v25) * (float)(v18 - v25));
            v27 = (v12[8] >= v22) | (v12[8] >= v26 ? 2 : 0);
            switch ( v27 )
            {
              case 1:
                v59 = (float *)v15;
                v51 = v61;
                v52 = v62;
                v53 = v63;
                v54 = v64;
                v55 = v65;
                v56 = v66;
                v57 = v67;
                v58 = v68;
                v60 = v13;
                v11 = (float *)v15;
                goto LABEL_4;
              case 2:
                v59 = v11;
                v51 = v42;
                v52 = v71;
                v53 = v72;
                v54 = v73;
                v55 = v74;
                v56 = v75;
                v57 = v76;
                v58 = v41;
                v60 = v79;
                v13 = *((uint32_t *)v11 + 9);
                if ( v13 == 0 )
                  goto LABEL_9;
                break;
              case 3:
                goto LABEL_14;
              default:
                goto LABEL_11;
            }
          }
LABEL_14:
          v35 = v46;
          v36 = v22 > v26;
          *((uint32_t *)v12 + 9) = v36;
          v37 = v46[1];
          if ( v37 == (v46[2] & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)v46,
              4,
              v40);
            v37 = v46[1];
            v36 = v22 > v26;
            v35 = v46;
          }
          v45 = *v35;
          v35[1] = v37 + 1;
          *(uint32_t *)(v45 + 4 * v37) = v70[12 * (1 - v36)];
          v38 = 48 * v36;
          v39 = v70[v38 / 4];
          v51 = *(float *)((char *)&v61 + v38);
          v52 = *(float *)((char *)&v61 + v38 + 4);
          v53 = *(float *)((char *)&v63 + v38);
          v54 = *(int *)((char *)&v64 + v38);
          v55 = *(float *)((char *)&v65 + v38);
          v56 = *(float *)((char *)&v66 + v38);
          v57 = *(float *)((char *)&v67 + v38);
          v58 = *(int *)((char *)&v68 + v38);
          v11 = (float *)v70[v38 / 4 - 1];
          v59 = v11;
          v60 = v39;
        }
LABEL_9:
        v28 = *(uint32_t *)v12;
        v44 = *((uint32_t **)v11 + 10);
        v29 = v44[2];
        v61 = *(float *)(v29 + 32);
        v62 = *(float *)(v29 + 36);
        v63 = *(float *)(v29 + 40);
        v64 = *(uint32_t *)(v29 + 44);
        v30 = v44[3];
        v65 = *(float *)(v30 + 32);
        v66 = *(float *)(v30 + 36);
        v67 = *(float *)(v30 + 40);
        v68 = *(uint32_t *)(v30 + 44);
        v31 = (uint32_t *)v44[4];
        v69 = v31[8];
        v70[0] = v31[9];
        v70[1] = v31[10];
        v70[2] = v31[11];
        hkGeometryProcessing::squaredDistanceFromPointToTriangle(
          (hkGeometryProcessing::Self *)&v48,
          (const hkVector4f::Self *)(v12 + 4),
          (const hkVector4f::Self *)&v61,
          (const hkVector4f::Self *)&v65,
          (const hkVector4f::Self *)&v69,
          (hkVector4f::Self *)&v49,
          (hkVector4f::Self *)&v50);
        if ( v12[8] > v48 )
        {
          v12[8] = v48;
          *(g4_int128_t *)v28 = v49;
          *(g4_int128_t *)(v28 + 16) = v50;
          *(uint32_t *)(v28 + 32) = (uint32_t)(uintptr_t)(v44);
        }
LABEL_11:
        result = (uint32_t *)v46[1];
        if ( v43 >= (int)(uintptr_t)(result) )
          break;
        v32 = (int)(uintptr_t)(result) - 1;
        v33 = *v46;
        v46[1] = v32;
        v34 = (int *)(v33 + 4 * v32);
        v60 = *v34;
        v11 = (float *)(*v47 + 48 * *v34);
        v59 = v11;
        v51 = *v11;
        v52 = v11[1];
        v53 = v11[2];
        v54 = *((uint32_t *)v11 + 3);
        v55 = v11[4];
        v56 = v11[5];
        v57 = v11[6];
        v58 = *((uint32_t *)v11 + 7);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_15ebe3  (binary VA: 0x1668cd0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<CollideShapeTriangle>>
// ----------------------------------------------------------------------------
uint32_t * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_15ebe3(uint32_t *a1, int *a2, int *a3)
{
  uint32_t *result;
  int v4;
  float *v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  float *v25;
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29;
  float v30; // xmm0_4
  int *v31;
  int v32;
  int v33;
  int v34;
  hkMemoryAllocator::Self *v35;
  typedef int _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef int _g4_t_v46;
  typedef float _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float *_g4_t_v49;
  typedef uint32_t _g4_t_v50[2];
  typedef uint32_t _g4_t_v51[4];
  typedef float _g4_t_v52[4];
  typedef uint32_t _g4_t_v53[8];
  typedef float *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v37)) > _g4_s1 ? (36u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v38)) > _g4_s2 ? (40u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v39)) > _g4_s3 ? (44u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v40)) > _g4_s4 ? (48u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v41)) > _g4_s5 ? (52u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v42)) > _g4_s6 ? (56u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v43)) > _g4_s7 ? (56u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v44)) > _g4_s8 ? (60u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v45)) > _g4_s9 ? (60u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v46)) > _g4_s10 ? (60u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v47)) > _g4_s11 ? (60u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v48)) > _g4_s12 ? (60u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v49)) > _g4_s13 ? (64u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v50)) > _g4_s14 ? (72u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v51)) > _g4_s15 ? (80u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v52)) > _g4_s16 ? (96u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v53)) > _g4_s17 ? (112u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v54)) > _g4_s18 ? (144u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (148u + sizeof(_g4_t_v55)) > _g4_s19 ? (148u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v56)) > _g4_s20 ? (160u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v57)) > _g4_s21 ? (164u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v58)) > _g4_s22 ? (168u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v59)) > _g4_s23 ? (172u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v60)) > _g4_s24 ? (176u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v61)) > _g4_s25 ? (180u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v62)) > _g4_s26 ? (184u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v63)) > _g4_s27 ? (188u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v64)) > _g4_s28 ? (208u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (212u + sizeof(_g4_t_v65)) > _g4_s29 ? (212u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (216u + sizeof(_g4_t_v66)) > _g4_s30 ? (216u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (220u + sizeof(_g4_t_v67)) > _g4_s31 ? (220u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (224u + sizeof(_g4_t_v68)) > _g4_s32 ? (224u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (228u + sizeof(_g4_t_v69)) > _g4_s33 ? (228u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (232u + sizeof(_g4_t_v70)) > _g4_s34 ? (232u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (236u + sizeof(_g4_t_v71)) > _g4_s35 ? (236u + sizeof(_g4_t_v71)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 96u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 112u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 160u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 168u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 172u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 176u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 180u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 184u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 188u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 208u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 212u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 216u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 220u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 224u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 228u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 232u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 236u);

  result = a1;
  if ( a1[6] != 0 )
  {
    v40 = a2[1];
    sub_1654A00(a1, a1 + 6, v53);
    result = (uint32_t *)(a3);
    v4 = a3[1];
    if ( v4 != 0 )
    {
      result = (uint32_t *)hkAabb::overlaps((hkAabb::Self *)(a3 + 4), (const hkAabb::Self *)v53);
      if ( result != nullptr )
      {
        v5 = v54;
        v44 = v4;
LABEL_5:
        while ( 1 )
        {
          v6 = *((uint32_t *)v5 + 9);
          if ( v6 == 0 )
            break;
          while ( 1 )
          {
            v7 = *a1;
            v8 = 48 * v6 + *a1;
            v56 = *(float *)v8;
            v57 = *(float *)(v8 + 4);
            v58 = *(float *)(v8 + 8);
            v59 = *(uint32_t *)(v8 + 12);
            v9 = *(float *)(v8 + 8);
            v10 = *(float *)v8;
            v11 = *(float *)(v8 + 4);
            v60 = *(float *)(v8 + 16);
            v42 = v9;
            v61 = *(float *)(v8 + 20);
            v62 = *(float *)(v8 + 24);
            v63 = *(uint32_t *)(v8 + 28);
            v12 = *(float *)(v8 + 16);
            v41 = *((uint32_t *)v5 + 10);
            v13 = *(float *)(v8 + 20);
            v14 = *(float *)(v8 + 24);
            v5 = (float *)(48 * v41 + v7);
            v64 = *v5;
            v65 = v5[1];
            v66 = v5[2];
            v67 = *((uint32_t *)v5 + 3);
            v15 = v5[1];
            v38 = *v5;
            v16 = v5[2];
            v68 = v5[4];
            v37 = v15;
            v69 = v5[5];
            v70 = v5[6];
            v71 = *((uint32_t *)v5 + 7);
            v17 = v5[4];
            v18 = v5[5];
            v39 = v5[6];
            if ( v44 == 0 )
              break;
            v19 = 0;
            if ( *((float *)a3 + 4) <= v12
              && *((float *)a3 + 5) <= v13
              && *((float *)a3 + 6) <= v14
              && v10 <= *((float *)a3 + 8)
              && v11 <= *((float *)a3 + 9) )
            {
              v19 = v42 <= *((float *)a3 + 10);
            }
            if ( *((float *)a3 + 4) <= v17
              && *((float *)a3 + 5) <= v18
              && *((float *)a3 + 6) <= v39
              && v38 <= *((float *)a3 + 8)
              && v37 <= *((float *)a3 + 9)
              && v16 <= *((float *)a3 + 10) )
            {
              v19 |= 2u;
            }
            switch ( v19 )
            {
              case 1:
                v56 = v10;
                v57 = v11;
                *(float *)v53 = v10;
                v58 = v42;
                *(float *)&v53[1] = v11;
                v55 = v6;
                *(float *)&v53[2] = v42;
                v60 = v12;
                v53[3] = v59;
                v54 = (float *)v8;
                v61 = v13;
                *(float *)&v53[4] = v12;
                v62 = v14;
                *(float *)&v53[5] = v13;
                *(float *)&v53[6] = v14;
                v53[7] = v63;
                v5 = (float *)v8;
                v6 = *(uint32_t *)(v8 + 36);
                if ( v6 == 0 )
                  goto LABEL_24;
                break;
              case 2:
                v64 = v38;
                *(float *)v53 = v38;
                v65 = v37;
                *(float *)&v53[1] = v37;
                v66 = v16;
                *(float *)&v53[2] = v16;
                v53[3] = v67;
                v54 = v5;
                v68 = v17;
                v69 = v18;
                *(float *)&v53[4] = v17;
                v70 = v39;
                *(float *)&v53[5] = v18;
                v55 = v41;
                *(float *)&v53[6] = v39;
                v53[7] = v71;
                goto LABEL_5;
              case 3:
                v31 = a2;
                v32 = a2[1];
                if ( v32 == (a2[2] & 0x3FFFFFFF) )
                {
                  v48 = v6;
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)a2,
                    4,
                    v36);
                  v6 = v48;
                  v31 = a2;
                  v32 = a2[1];
                }
                v46 = *v31;
                v31[1] = v32 + 1;
                *(uint32_t *)(v46 + 4 * v32) = v41;
                v54 = (float *)v8;
                v56 = v10;
                v57 = v11;
                *(float *)v53 = v10;
                v58 = v42;
                *(float *)&v53[1] = v11;
                v55 = v6;
                v60 = v12;
                *(float *)&v53[2] = v42;
                v61 = v13;
                v62 = v14;
                v53[3] = v59;
                *(float *)&v53[4] = v12;
                *(float *)&v53[5] = v13;
                *(float *)&v53[6] = v14;
                v53[7] = v63;
                v44 = a3[1];
                v5 = (float *)v8;
                goto LABEL_5;
              default:
                goto LABEL_26;
            }
          }
LABEL_26:
          result = (uint32_t *)a2[1];
          if ( v40 >= (int)(uintptr_t)(result) )
            return result;
          v22 = (int)(uintptr_t)(result) - 1;
          v23 = *a2;
          a2[1] = v22;
          v44 = a3[1];
          v24 = (int *)(v23 + 4 * v22);
          v55 = *v24;
          v5 = (float *)(*a1 + 48 * *v24);
          v54 = v5;
          std::memcpy(v53, v5, sizeof(v53));
        }
LABEL_24:
        v20 = 0;
        v21 = *a3;
        if ( v44 != 0 )
        {
          v25 = *((float **)v5 + 10);
          v43 = v6;
          v26 = -v25[8];
          v49 = v25;
          v52[0] = v26;
          v27 = -v25[9];
          *(float *)v51 = v25[8];
          v52[1] = v27;
          v28 = v25[10];
          *(float *)&v51[1] = v25[9];
          v29 = *((uint32_t *)v25 + 10);
          v52[2] = -v28;
          v51[2] = v29;
          v30 = -v25[11];
          *(float *)&v51[3] = v25[11];
          v52[3] = v30;
          v45 = fmaxf(0.000001f, -*(float *)v21);
          (*(void (**)(uint32_t, uint32_t *, float *))(**(uint32_t **)(v21 + 8) + 12))(
            *(uint32_t *)(v21 + 8),
            v51,
            &v56);
          if ( v45 <= (float)((float)((float)((float)(v49[8] * v56) + (float)(v49[9] * v57)) + (float)(v49[10] * v58))
                            + v49[11]) )
          {
            (*(void (**)(uint32_t, float *, float *))(**(uint32_t **)(v21 + 8) + 12))(
              *(uint32_t *)(v21 + 8),
              v52,
              &v56);
            if ( (float)((float)((float)((float)(v49[8] * v56) + (float)(v49[9] * v57)) + (float)(v49[10] * v58))
                       + v49[11]) <= (float)-v45 )
            {
              v50[1] = (uint32_t)(uintptr_t)(v49);
              v33 = *(uint32_t *)(v21 + 4);
              v34 = *(uint8_t *)(v21 + 17);
              v50[0] = ((uint32_t)(uintptr_t)&off_2098D80);
              v36 = v34;
              v47 = ((long double (*)(int, uint32_t, uint32_t *))*(uint32_t *)(*(uint32_t *)v33 + 8))(
                      v33,
                      *(uint32_t *)(v21 + 8),
                      v50);
              if ( *(float *)v21 >= v47 )
              {
                v35 = *(hkMemoryAllocator::Self **)(v21 + 12);
                *(uint8_t *)(v21 + 16) = 1;
                v20 = v43;
                if ( v35 == nullptr )
                  goto LABEL_25;
                sub_1654D40(v35, &v49);
              }
            }
          }
          v20 = 1;
        }
LABEL_25:
        a3[1] = v20;
        goto LABEL_26;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_c56f53  (binary VA: 0x16699f0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::SimpleCollector>>
// ----------------------------------------------------------------------------
uint32_t * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_c56f53(uint32_t *a1, hkMemoryAllocator::Self *a2, int a3)
{
  uint32_t *result;
  float *i;
  int v5;
  int v6;
  hkMemoryAllocator::Self *v7;
  char *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm6_4
  int v24;
  int v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef float *_g4_t_v37;
  typedef float _g4_t_v38[8];
  typedef float *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[5];
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
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v28)) > _g4_s1 ? (24u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v30)) > _g4_s3 ? (32u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v31)) > _g4_s4 ? (36u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v32)) > _g4_s5 ? (44u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v33)) > _g4_s6 ? (48u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v34)) > _g4_s7 ? (52u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v35)) > _g4_s8 ? (56u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v36)) > _g4_s9 ? (60u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v37)) > _g4_s10 ? (60u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v38)) > _g4_s11 ? (64u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v39)) > _g4_s12 ? (96u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v40)) > _g4_s13 ? (100u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v41)) > _g4_s14 ? (112u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v42)) > _g4_s15 ? (132u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v43)) > _g4_s16 ? (136u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v44)) > _g4_s17 ? (140u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (160u + sizeof(_g4_t_v45)) > _g4_s18 ? (160u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (164u + sizeof(_g4_t_v46)) > _g4_s19 ? (164u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (168u + sizeof(_g4_t_v47)) > _g4_s20 ? (168u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (172u + sizeof(_g4_t_v48)) > _g4_s21 ? (172u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v49)) > _g4_s22 ? (176u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v50)) > _g4_s23 ? (180u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (184u + sizeof(_g4_t_v51)) > _g4_s24 ? (184u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v52)) > _g4_s25 ? (188u + sizeof(_g4_t_v52)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 164u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 168u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 172u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 176u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 180u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 184u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);

  result = a1;
  if ( a1[6] != 0 )
  {
    v34 = *((uint32_t *)a2 + 1);
    sub_1654A00(a1, a1 + 6, v38);
    result = (uint32_t *)a3;
    if ( *(uint32_t *)(a3 + 4) != 0 )
    {
      v36 = *(uint32_t *)(a3 + 4);
      result = (uint32_t *)hkAabb::overlaps((hkAabb::Self *)(a3 + 16), (const hkAabb::Self *)v38);
      if ( result != nullptr )
      {
        for ( i = v39; ; i = (float *)v12 )
        {
LABEL_5:
          v5 = *((uint32_t *)i + 9);
          v35 = v5;
          if ( v5 == 0 )
          {
LABEL_6:
            v6 = 0;
            v7 = *(hkMemoryAllocator::Self **)a3;
            if ( v36 != 0 )
            {
              v24 = *((uint32_t *)v7 + 1);
              if ( v24 == (*((uint32_t *)v7 + 2) & 0x3FFFFFFF) )
              {
                v37 = i;
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v7, 4, v27);
                v24 = *((uint32_t *)v7 + 1);
                i = v37;
              }
              *(float *)(*(uint32_t *)v7 + 4 * v24) = i[10];
              v6 = 1;
              ++*((uint32_t *)v7 + 1);
            }
            *(uint32_t *)(a3 + 4) = v6;
            goto LABEL_8;
          }
          while ( 1 )
          {
            v32 = *((uint32_t *)i + 10);
            v11 = *a1;
            v12 = 48 * v5 + *a1;
            v33 = *(float *)(v12 + 8);
            v41[0] = *(uint32_t *)v12;
            i = (float *)(48 * v32 + v11);
            v13 = *(float *)v12;
            v41[1] = *(uint32_t *)(v12 + 4);
            v14 = *(float *)(v12 + 4);
            v15 = *(float *)(v12 + 16);
            v41[2] = *(uint32_t *)(v12 + 8);
            v16 = *(float *)(v12 + 20);
            v17 = *(float *)(v12 + 24);
            v41[3] = *(uint32_t *)(v12 + 12);
            v41[4] = *(uint32_t *)(v12 + 16);
            v42 = *(float *)(v12 + 20);
            v43 = *(float *)(v12 + 24);
            v44 = *(float *)(v12 + 28);
            v45 = *i;
            v46 = i[1];
            v47 = i[2];
            v48 = i[3];
            v49 = i[4];
            v18 = i[1];
            v50 = i[5];
            v19 = *i;
            v51 = i[6];
            v20 = i[2];
            v30 = v18;
            v21 = i[6];
            v52 = i[7];
            v31 = v19;
            v29 = v20;
            v22 = i[4];
            v23 = i[5];
            if ( v36 != 0 )
            {
              v28 = 0;
              if ( *(float *)(a3 + 16) <= v15
                && *(float *)(a3 + 20) <= v16
                && *(float *)(a3 + 24) <= v17
                && v13 <= *(float *)(a3 + 32)
                && v14 <= *(float *)(a3 + 36) )
              {
                v28 = v33 <= *(float *)(a3 + 40);
              }
              if ( *(float *)(a3 + 16) <= v22
                && *(float *)(a3 + 20) <= v23
                && *(float *)(a3 + 24) <= v21
                && v31 <= *(float *)(a3 + 32)
                && v30 <= *(float *)(a3 + 36)
                && v29 <= *(float *)(a3 + 40) )
              {
                v28 |= 2u;
              }
              if ( v28 == 2 )
              {
                v45 = v31;
                v38[0] = v31;
                v46 = v30;
                v38[1] = v30;
                v47 = v29;
                v38[2] = v29;
                v38[3] = v48;
                v39 = (float *)(48 * v32 + v11);
                v49 = v22;
                v50 = v23;
                v38[4] = v22;
                v51 = v21;
                v38[5] = v23;
                v40 = v32;
                v38[6] = v21;
                v38[7] = v52;
                goto LABEL_5;
              }
              if ( v28 == 3 )
              {
                v25 = *((uint32_t *)a2 + 1);
                if ( v25 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v27);
                  v25 = *((uint32_t *)a2 + 1);
                }
                *((uint32_t *)a2 + 1) = v25 + 1;
                v26 = *(uint32_t *)a2;
                *(float *)v41 = v13;
                *(float *)&v41[1] = v14;
                *(float *)&v41[2] = v33;
                *(uint32_t *)(v26 + 4 * v25) = v32;
                v39 = (float *)v12;
                *(float *)&v41[4] = v15;
                std::memcpy(v38, v41, 20);
                v42 = v16;
                v43 = v17;
                v38[5] = v16;
                v38[6] = v17;
                v38[7] = v44;
                v40 = v35;
                v36 = *(uint32_t *)(a3 + 4);
                i = (float *)v12;
                goto LABEL_5;
              }
              if ( v28 == 1 )
                break;
            }
LABEL_8:
            result = *((uint32_t **)a2 + 1);
            if ( v34 >= (int)(uintptr_t)(result) )
              return result;
            v8 = (char *)result - 1;
            v9 = *(uint32_t *)a2;
            *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(v8);
            v10 = (int *)(v9 + 4 * (uint32_t)(uintptr_t)(v8));
            v40 = *v10;
            i = (float *)(*a1 + 48 * *v10);
            v39 = i;
            v38[0] = *i;
            v38[1] = i[1];
            v38[2] = i[2];
            v38[3] = i[3];
            v38[4] = i[4];
            v38[5] = i[5];
            v38[6] = i[6];
            v36 = *(uint32_t *)(a3 + 4);
            v38[7] = i[7];
            v5 = *((uint32_t *)i + 9);
            v35 = v5;
            if ( v5 == 0 )
              goto LABEL_6;
          }
          *(float *)v41 = v13;
          *(float *)&v41[1] = v14;
          v38[0] = v13;
          *(float *)&v41[2] = v33;
          v38[1] = v14;
          v39 = (float *)v12;
          *(float *)&v41[4] = v15;
          v38[2] = v33;
          v42 = v16;
          v43 = v17;
          v38[3] = *(float *)&v41[3];
          v38[4] = v15;
          v38[5] = v16;
          v38[6] = v17;
          v38[7] = v44;
          v40 = v35;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_437bbb  (binary VA: 0x166a3a0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::TriangleOverlap>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_Tree_hkc_437bbb(int *a1, hkMemoryAllocator::Self *a2, float *a3)
{
  int result;
  int v4;
  float *i;
  int v6;
  float *v7;
  float v8; // xmm6_4
  int v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  bool v19;
  float v20;
  uint32_t *v21;
  float *v22;
  float *v23;
  uint32_t *v24;
  int v25;
  bool v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[8];
  typedef float *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45[3];
  typedef int _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v32)) > _g4_s1 ? (16u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v33)) > _g4_s2 ? (24u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v34)) > _g4_s3 ? (28u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v35)) > _g4_s4 ? (28u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v36)) > _g4_s5 ? (32u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v37)) > _g4_s6 ? (36u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v38)) > _g4_s7 ? (40u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v39)) > _g4_s8 ? (44u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v40)) > _g4_s9 ? (44u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v41)) > _g4_s10 ? (44u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v42)) > _g4_s11 ? (48u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v43)) > _g4_s12 ? (80u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v44)) > _g4_s13 ? (84u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v45)) > _g4_s14 ? (96u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v46)) > _g4_s15 ? (108u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v47)) > _g4_s16 ? (112u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v48)) > _g4_s17 ? (116u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v49)) > _g4_s18 ? (120u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v50)) > _g4_s19 ? (124u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v51)) > _g4_s20 ? (128u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v52)) > _g4_s21 ? (132u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v53)) > _g4_s22 ? (136u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v54)) > _g4_s23 ? (140u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v55)) > _g4_s24 ? (144u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v56)) > _g4_s25 ? (148u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v57)) > _g4_s26 ? (152u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v58)) > _g4_s27 ? (156u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v59)) > _g4_s28 ? (160u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v60)) > _g4_s29 ? (164u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v61)) > _g4_s30 ? (168u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v62)) > _g4_s31 ? (172u + sizeof(_g4_t_v62)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 132u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 148u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 152u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 156u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 160u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 164u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 168u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 172u);

  result = (int)(uintptr_t)(a1);
  if ( a1[6] != 0 )
  {
    v36 = *((uint32_t *)a2 + 1);
    result = sub_1654A00(a1, a1 + 6, v42);
    v4 = *((uint32_t *)a3 + 1);
    if ( v4 != 0 )
    {
      result = hkAabb::overlaps((hkAabb::Self *)(a3 + 4), (const hkAabb::Self *)v42);
      if ( result != 0 )
      {
        for ( i = v43; ; std::memcpy(v42, i, sizeof(v42)) )
        {
LABEL_5:
          v6 = *((uint32_t *)i + 9);
          if ( v6 != 0 )
          {
            while ( 1 )
            {
              v39 = *a1;
              v7 = (float *)(48 * v6 + *a1);
              v45[0] = *v7;
              v45[1] = v7[1];
              v45[2] = v7[2];
              v46 = *((uint32_t *)v7 + 3);
              v8 = v7[2];
              v9 = *(int *)v7;
              v10 = v7[1];
              v47 = v7[4];
              v38 = v8;
              v48 = v7[5];
              v49 = v7[6];
              v50 = *((uint32_t *)v7 + 7);
              v11 = v7[4];
              v37 = *((uint32_t *)i + 10);
              v12 = v7[5];
              v13 = v7[6];
              i = (float *)(v39 + 48 * v37);
              v55 = *i;
              v56 = i[1];
              v57 = i[2];
              v58 = *((uint32_t *)i + 3);
              v14 = *i;
              v15 = i[1];
              v16 = i[2];
              v59 = i[4];
              v33 = v14;
              v60 = i[5];
              v32 = v16;
              v61 = i[6];
              v62 = *((uint32_t *)i + 7);
              v17 = i[4];
              v18 = i[5];
              v34 = i[6];
              if ( v4 == 0 )
                break;
              v40 = 0;
              if ( a3[4] <= v11 && a3[5] <= v12 && a3[6] <= v13 && *(float *)&v9 <= a3[8] && v10 <= a3[9] )
                v40 = v38 <= a3[10];
              if ( a3[4] <= v17 && a3[5] <= v18 && a3[6] <= v34 && v33 <= a3[8] && v15 <= a3[9] && v32 <= a3[10] )
                v40 |= 2u;
              switch ( v40 )
              {
                case 1:
                  LODWORD(v45[0]) = v9;
                  v45[1] = v10;
                  v42[0] = v9;
                  v45[2] = v38;
                  *(float *)&v42[1] = v10;
                  v44 = v6;
                  *(float *)&v42[2] = v38;
                  v47 = v11;
                  v42[3] = v46;
                  v43 = v7;
                  v48 = v12;
                  *(float *)&v42[4] = v11;
                  v49 = v13;
                  *(float *)&v42[5] = v12;
                  *(float *)&v42[6] = v13;
                  v42[7] = v50;
                  i = v7;
                  v6 = *((uint32_t *)v7 + 9);
                  if ( v6 == 0 )
                    goto LABEL_24;
                  break;
                case 2:
                  v55 = v33;
                  *(float *)v42 = v33;
                  v56 = v15;
                  *(float *)&v42[1] = v15;
                  v57 = v32;
                  *(float *)&v42[2] = v32;
                  v42[3] = v58;
                  v43 = i;
                  v59 = v17;
                  v60 = v18;
                  *(float *)&v42[4] = v17;
                  v61 = v34;
                  *(float *)&v42[5] = v18;
                  v44 = v37;
                  *(float *)&v42[6] = v34;
                  v42[7] = v62;
                  goto LABEL_5;
                case 3:
                  v30 = *((uint32_t *)a2 + 1);
                  if ( v30 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                  {
                    v35 = v6;
                    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v9);
                    v6 = v35;
                    v9 = v31;
                    v30 = *((uint32_t *)a2 + 1);
                  }
                  v41 = *(uint32_t *)a2;
                  *((uint32_t *)a2 + 1) = v30 + 1;
                  *(uint32_t *)(v41 + 4 * v30) = v37;
                  v43 = v7;
                  LODWORD(v45[0]) = v9;
                  v45[1] = v10;
                  v42[0] = v9;
                  v45[2] = v38;
                  *(float *)&v42[1] = v10;
                  v44 = v6;
                  v47 = v11;
                  *(float *)&v42[2] = v38;
                  v48 = v12;
                  v49 = v13;
                  v42[3] = v46;
                  *(float *)&v42[4] = v11;
                  *(float *)&v42[5] = v12;
                  *(float *)&v42[6] = v13;
                  v42[7] = v50;
                  v4 = *((uint32_t *)a3 + 1);
                  i = v7;
                  goto LABEL_5;
                default:
                  goto LABEL_27;
              }
            }
          }
          else
          {
LABEL_24:
            v19 = false;
            v20 = *a3;
            if ( v4 != 0 )
            {
              v21 = *((uint32_t **)i + 10);
              v22 = (float *)v21[2];
              v45[0] = v22[8];
              v45[1] = v22[9];
              v45[2] = v22[10];
              v46 = *((uint32_t *)v22 + 11);
              v23 = (float *)v21[3];
              v47 = v23[8];
              v48 = v23[9];
              v49 = v23[10];
              v50 = *((uint32_t *)v23 + 11);
              v24 = (uint32_t *)v21[4];
              v51 = v24[8];
              v52 = v24[9];
              v53 = v24[10];
              v54 = v24[11];
              v25 = hkcdIntersectTriangleTriangle(
                      (const hkVector4f::Self (*)[3])(LODWORD(v20) + 16),
                      (const hkVector4f::Self (*)[3])v45);
              v26 = (v25 | *(uint32_t *)LODWORD(v20)) == 0;
              *(uint32_t *)LODWORD(v20) |= v25;
              v19 = v26;
            }
            *((uint32_t *)a3 + 1) = v19;
          }
LABEL_27:
          result = *((uint32_t *)a2 + 1);
          if ( v36 >= result )
            break;
          v27 = result - 1;
          v28 = *(uint32_t *)a2;
          *((uint32_t *)a2 + 1) = v27;
          v29 = (int *)(v28 + 4 * v27);
          v44 = *v29;
          i = (float *)(*a1 + 48 * *v29);
          v43 = i;
          v4 = *((uint32_t *)a3 + 1);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_166BDC0  (binary VA: 0x166bdc0)
// Original: sub_166BDC0
// ----------------------------------------------------------------------------
int sub_166BDC0(int result, unsigned int a2, int a3, int a4)
{
  int v4;
  int v5;
  bool v6;
  int v7;

  v4 = a4;
  if ( *(uint8_t *)a4 != 0 )
  {
    v7 = result;
    hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkContainerHeapAllocator::Self>::setEdgeData<hkgpTriangulatorType<hkContainerHeapAllocator::Self,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkContainerHeapAllocator::Self>,-1,4,15,false>::Edge>(
      result + 572,
      &a2,
      (uint32_t *)(a4 + 4));
    result = v7;
  }
  v5 = *(uint32_t *)(a2 + 4 * a3 + 20);
  if ( (v5 & 0xFFFFFFFC) != 0 )
  {
    v6 = *(uint8_t *)(v4 + 24) == 0;
    a2 = *(uint32_t *)(a2 + 4 * a3 + 20) & 0xFFFFFFFC;
    a3 = v5 & 3;
    if ( !v6 )
      return ((hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkContainerHeapAllocator::Self>::setEdgeData<hkgpTriangulatorType<hkContainerHeapAllocator::Self,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator::Self>,hkContainerHeapAllocator::Self>,-1,4,15,false>::Edge>(
               result + 572,
               &a2,
               (uint32_t *)(v4 + 28))), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_d92e81  (binary VA: 0x166bec0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<TrianglePairCollector>>
// ----------------------------------------------------------------------------
float * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_d92e81(char a1, int *a2, uint32_t *a3, hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self>, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self>>> *a4, hkMemoryAllocator::Self ***a5, float *a6, uint32_t *a7)
{
  char v7;
  float *result;
  float v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  int v15;
  float *v16;
  int v17;
  float v18;
  int v19;
  float *v20;
  int v21;
  int v22;
  float *v23;
  hkMemoryAllocator::Self *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  bool v31;
  int v32;
  float *v33;
  hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self>, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr::Self>>> *v34;
  int v35;
  float *v36;
  bool v37;
  int v38;
  int v39;
  float *v40;
  int v41;
  uint32_t *v42;
  uint32_t *v43;
  float *v44;
  uint32_t *v45;
  float *v46;
  float *v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef bool _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef bool _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef bool _g4_t_v61;
  typedef bool _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef bool _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char _g4_t_v67;
  typedef float _g4_t_v68[12];
  typedef uint32_t _g4_t_v69[12];
  typedef uint32_t _g4_t_v70[8];
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[8];
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76[12];
  typedef uint32_t _g4_t_v77[15];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v48)) > _g4_s0 ? (12u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v49)) > _g4_s1 ? (20u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v50)) > _g4_s2 ? (24u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v51)) > _g4_s3 ? (28u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v52)) > _g4_s4 ? (28u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v53)) > _g4_s5 ? (28u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v54)) > _g4_s6 ? (28u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v55)) > _g4_s7 ? (32u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v56)) > _g4_s8 ? (32u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v57)) > _g4_s9 ? (32u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v58)) > _g4_s10 ? (32u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v59)) > _g4_s11 ? (36u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v60)) > _g4_s12 ? (44u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v61)) > _g4_s13 ? (44u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v62)) > _g4_s14 ? (44u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v63)) > _g4_s15 ? (44u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v64)) > _g4_s16 ? (44u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v65)) > _g4_s17 ? (44u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v66)) > _g4_s18 ? (44u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v67)) > _g4_s19 ? (44u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v68)) > _g4_s20 ? (48u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v69)) > _g4_s21 ? (96u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v70)) > _g4_s22 ? (144u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v71)) > _g4_s23 ? (176u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v72)) > _g4_s24 ? (180u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v73)) > _g4_s25 ? (192u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (224u + sizeof(_g4_t_v74)) > _g4_s26 ? (224u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (228u + sizeof(_g4_t_v75)) > _g4_s27 ? (228u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (240u + sizeof(_g4_t_v76)) > _g4_s28 ? (240u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (288u + sizeof(_g4_t_v77)) > _g4_s29 ? (288u + sizeof(_g4_t_v77)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 144u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 176u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 180u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 224u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 228u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 240u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 288u);

  v7 = a1;
  result = a6;
  if ( a2[6] != 0 && a3[6] != 0 )
  {
    v59 = *((uint32_t *)a4 + 1);
    if ( a6 != nullptr )
    {
      v68[0] = *a6;
      v68[1] = a6[1];
      v68[2] = a6[2];
      v68[3] = a6[3];
      v68[4] = a6[4];
      v68[5] = a6[5];
      v68[6] = a6[6];
      v68[7] = a6[7];
      v9 = a6[9];
      v68[8] = a6[8];
      v68[9] = v9;
    }
    else
    {
      sub_1654A00(a2, a2 + 6, v68);
      v7 = a1;
    }
    if ( a7 != nullptr )
    {
      v69[0] = *a7;
      v69[1] = a7[1];
      v69[2] = a7[2];
      v69[3] = a7[3];
      v69[4] = a7[4];
      v69[5] = a7[5];
      v69[6] = a7[6];
      v69[7] = a7[7];
      v69[8] = a7[8];
      v69[9] = a7[9];
      v10 = *(float *)&v69[9];
    }
    else
    {
      v67 = v7;
      sub_1654A00(a3, a3 + 6, v69);
      v10 = *(float *)&v69[9];
      v7 = v67;
    }
    v11 = v68[9];
    if ( v7 != 0 || (result = (float *)hkAabb::overlaps((hkAabb::Self *)v68, (const hkAabb::Self *)v69)) != nullptr )
    {
      v12 = v68[8];
      v60 = *(float *)&v69[8];
      while ( 1 )
      {
        if ( a1 != 0 && LODWORD(v12) == LODWORD(v60) )
        {
          if ( *(uint32_t *)(LODWORD(v12) + 36) == 0 )
            goto LABEL_29;
          sub_1655A50(a2, (int)(uintptr_t)(&v68[8]), v76);
          v41 = v77[9];
          v11 = v76[9];
          v42 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *v42 = v41;
          v42[1] = v41;
          if ( hkAabb::overlaps((hkAabb::Self *)v76, (const hkAabb::Self *)v77) )
          {
            v47 = (float *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                             a4,
                             (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            *v47 = v11;
            *((uint32_t *)v47 + 1) = v41;
          }
          std::memcpy(v68, v76, 40);
          std::memcpy(v69, v76, 40);
          v10 = v11;
          v12 = v76[8];
          v60 = v76[8];
        }
        else
        {
          v13 = *(uint32_t *)(LODWORD(v12) + 36);
          if ( v13 != 0 )
          {
            v72 = *(uint32_t *)(LODWORD(v12) + 36);
            v56 = *a2;
            v71 = (uint32_t *)(48 * v13 + *a2);
            v70[0] = *v71;
            v70[1] = v71[1];
            v70[2] = v71[2];
            v70[3] = v71[3];
            v70[4] = v71[4];
            v70[5] = v71[5];
            v28 = v71[7];
            v70[6] = v71[6];
            v70[7] = v28;
            v29 = *(uint32_t *)(LODWORD(v12) + 40);
            v75 = v29;
            v74 = (uint32_t *)(v56 + 48 * v29);
            v73[0] = *v74;
            v73[1] = v74[1];
            v73[2] = v74[2];
            v73[3] = v74[3];
            v73[4] = v74[4];
            v73[5] = v74[5];
            v30 = v74[7];
            v73[6] = v74[6];
            v73[7] = v30;
            if ( *(uint32_t *)(LODWORD(v60) + 36) != 0 )
            {
              v49 = v13;
              sub_1655A50(a3, (int)(uintptr_t)(&v69[8]), v76);
              v65 = hkAabb::overlaps((hkAabb::Self *)v70, (const hkAabb::Self *)v76);
              v57 = hkAabb::overlaps((hkAabb::Self *)v70, (const hkAabb::Self *)v77);
              v53 = hkAabb::overlaps((hkAabb::Self *)v73, (const hkAabb::Self *)v76);
              v37 = hkAabb::overlaps((hkAabb::Self *)v73, (const hkAabb::Self *)v77);
              v50 = v76[9];
              v38 = v49;
              v39 = v77[9];
              if ( v37 )
              {
                v45 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                                  a4,
                                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
                *v45 = v29;
                v45[1] = v39;
                v38 = v49;
              }
              if ( v53 )
              {
                v54 = v38;
                v44 = (float *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                                 a4,
                                 (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
                *(uint32_t *)v44 = v29;
                v44[1] = v50;
                v38 = v54;
              }
              if ( v57 )
              {
                v58 = v38;
                v43 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                                  a4,
                                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
                v38 = v58;
                v43[1] = v39;
                *v43 = v58;
              }
              if ( v65 )
              {
                v66 = v38;
                v40 = (float *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                                 a4,
                                 (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
                *(uint32_t *)v40 = v66;
                v40[1] = v50;
              }
            }
            else
            {
              v52 = v13;
              v62 = hkAabb::overlaps((hkAabb::Self *)v70, (const hkAabb::Self *)v69);
              v31 = hkAabb::overlaps((hkAabb::Self *)v73, (const hkAabb::Self *)v69);
              v32 = v52;
              if ( v31 )
              {
                v46 = (float *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                                 a4,
                                 (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
                *(uint32_t *)v46 = v29;
                v46[1] = v10;
                v32 = v52;
              }
              if ( v62 )
              {
                v63 = v32;
                v33 = (float *)hkArrayBase_hkcdTreeQueries_hkcdTree_fa5312::expandOne(
                                 a4,
                                 (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
                v33[1] = v10;
                *(uint32_t *)v33 = v63;
              }
            }
          }
          else
          {
            v14 = v60;
            v15 = *(uint32_t *)(LODWORD(v60) + 36);
            if ( v15 != 0 )
            {
              v61 = false;
              v55 = *(uint32_t *)(LODWORD(v14) + 40);
              v16 = (float *)(48 * v15 + *a3);
              v17 = 48 * v55 + *a3;
              v18 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(v17 + 4))));
              if ( v68[0] <= v16[4] && v68[1] <= v16[5] && v68[2] <= v16[6] && *v16 <= v68[4] && v16[1] <= v68[5] )
                v61 = v16[2] <= v68[6];
              if ( v68[0] <= *(float *)(v17 + 16)
                && v68[1] <= *(float *)(v17 + 20)
                && v68[2] <= *(float *)(v17 + 24)
                && *(float *)v17 <= v68[4]
                && v18 <= v68[5]
                && *(float *)(v17 + 8) <= v68[6] )
              {
                v19 = *((uint32_t *)a4 + 1);
                if ( v19 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 8, v48);
                  v19 = *((uint32_t *)a4 + 1);
                }
                v51 = *(uint32_t *)a4;
                *((uint32_t *)a4 + 1) = v19 + 1;
                v20 = (float *)(v51 + 8 * v19);
                *v20 = v11;
                *((uint32_t *)v20 + 1) = v55;
              }
              if ( v61 )
              {
                v34 = a4;
                v35 = *((uint32_t *)a4 + 1);
                if ( v35 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 8, v48);
                  v34 = a4;
                  v35 = *((uint32_t *)a4 + 1);
                }
                v64 = *(uint32_t *)v34;
                *((uint32_t *)a4 + 1) = v35 + 1;
                v36 = (float *)(v64 + 8 * v35);
                *v36 = v11;
                *((uint32_t *)v36 + 1) = v15;
              }
            }
            else
            {
              v24 = **a5;
              v25 = *((uint32_t *)v24 + 1);
              if ( v25 == (*((uint32_t *)v24 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v24, 8, v48);
                v25 = *((uint32_t *)v24 + 1);
              }
              v26 = *(uint32_t *)v24;
              *((uint32_t *)v24 + 1) = v25 + 1;
              v27 = (uint32_t *)(v26 + 8 * v25);
              *v27 = *(uint32_t *)(LODWORD(v68[8]) + 40);
              v27[1] = *(uint32_t *)(v69[8] + 40);
            }
          }
LABEL_29:
          result = *((float **)a4 + 1);
          if ( v59 >= (int)(uintptr_t)(result) )
            return result;
          v21 = (int)(uintptr_t)(result) - 1;
          v22 = *(uint32_t *)a4;
          *((uint32_t *)a4 + 1) = v21;
          v23 = (float *)(v22 + 8 * v21);
          v11 = *v23;
          v10 = v23[1];
          v68[9] = v11;
          LODWORD(v12) = *a2 + 48 * LODWORD(v11);
          v68[8] = v12;
          std::memcpy(v68, (const void *)LODWORD(v12), 32);
          *(float *)&v69[9] = v10;
          v69[8] = *a3 + 48 * LODWORD(v10);
          std::memcpy(v69, (const void *)v69[8], 32);
          v60 = *(float *)&v69[8];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_166C800  (binary VA: 0x166c800)
// Original: sub_166C800
// ----------------------------------------------------------------------------
int sub_166C800()
{
  dword_2123D60 = (int)((uint32_t)(uintptr_t)&off_2098E80);
  return __cxa_atexit((void (*)(void *))IConvexOverlapImpl::Destroy, &dword_2123D60, &unk_20D1280);
}



// ============================================================================
// Address:   0x1671cb0 (size: 210 bytes)
// Symbol:    sub_1671CB0
// Demangled: sub_1671CB0
// ============================================================================
uint32_t *sub_1671CB0(uint32_t *a1)
{
  int v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v5, (hkString::Self *)v6, 512);
  hkOstream::opShl((int)(uintptr_t)(v5), (hkString::Self *)"Cycle detected during point location");
  if ( hkError::messageError(
         (hkError::Self *)0xB8C66B5F,
         (int)(uintptr_t)(v6),
         "../../Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl",
         (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_3A4)->st_value + 2,
         v4) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v5);
  if ( LOBYTE(g4_guard_25b7a50124[0]) == 0
    && _cxa_guard_acquire(g4_guard_25b7a50124) != 0 )
  {
    g4_fnstatic_25185ba0b9 = 0;
    *(uintptr_t *)(unk_2123D74) = (uintptr_t)(0);
    _cxa_guard_release(g4_guard_25b7a50124);
  }
  v2 = (int)(uintptr_t)(unk_2123D74);
  a1[1] = g4_fnstatic_25185ba0b9;
  *a1 = 4;
  a1[2] = v2;
  return a1;
}


// ============================================================================
// Address:   0x16752d0 (size: 120 bytes)
// Symbol:    sub_16752D0
// Demangled: sub_16752D0
// ============================================================================
void sub_16752D0()
{
  typedef int _g4_t_v0[3];
  typedef int _g4_t_v1[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (4u + sizeof(_g4_t_v0)) > _g4_s0 ? (4u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v1)) > _g4_s1 ? (16u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 4u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v0, (hkString::Self *)v1, 512);
  hkOstream::opShl((int)(uintptr_t)(v0), (hkString::Self *)"Infinite cycle detected during triangulation");
  hkError::messageWarning(
    (hkError::Self *)0xD26E67D,
    (int)(uintptr_t)(v1),
    "../../Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl",
    (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_7E4)->st_shndx);
  hkErrStream::Destroy((hkErrStream::Self *)v0);
}


// ============================================================================
// Address:   0x167ff30 (size: 627 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN18hkgpConvexHullImpl6VertexENS_4lessIS2_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::Vertex,hkAlgorithm::less<hkgpConvexHullImpl::Vertex>>(hkgpConvexHullImpl::Vertex *,int,int,hkAlgorithm::less<hkgpConvexHullImpl::Vertex>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_67b7b5(
        int a1,
        int a2,
        int a3)
{
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *i;
  char *v11;
  int v12; // xmm1_4
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
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

  while ( 1 )
  {
    v4 = (uint32_t *)(a1 + ((a3 + a2) >> 1 << 6));
    v16 = a2 + 1;
    v5 = v4[8];
    v6 = v4[9];
    v17 = v4[10];
    v7 = a1 + (a2 << 6);
    v13 = v7 + 16;
    v8 = (uint32_t *)(v7 + 32);
    v9 = a3;
    v14 = -64 * a2 - a1;
    while ( 1 )
    {
      v18 = v16 - 1;
      if ( v5 <= *v8 && (v5 < *v8 || v8[1] >= v6 && (v8[1] > v6 || v17 <= v8[2])) )
      {
        for ( i = (uint32_t *)(a1 + (v9 << 6)); v5 < i[8] || v5 <= i[8] && (i[9] > v6 || i[9] >= v6 && v17 < i[10]); i -= 16 )
          --v9;
        if ( v18 > v9 )
          break;
        if ( v18 != v9 )
        {
          v21 = i[4];
          v15 = v9;
          v23 = i[6];
          v22 = i[5];
          v24 = i[7];
          v25 = i[8];
          v26 = i[9];
          v27 = i[10];
          v20 = i[12];
          v11 = (char *)v8 + v14;
          v19 = i[13];
          v12 = i[11];
          i[4] = *(uint32_t *)((char *)v8 + v14 + v13 - 32);
          i[5] = *(uint32_t *)((char *)v8 + v14 + v13 - 28);
          i[6] = *(uint32_t *)((char *)v8 + v14 + v13 - 24);
          i[7] = *(uint32_t *)((char *)v8 + v14 + v13 - 20);
          i[8] = *v8;
          i[9] = v8[1];
          i[10] = v8[2];
          i[11] = v8[3];
          i[12] = v8[4];
          i[13] = v8[5];
          *(uint32_t *)&v11[v13 - 32] = v21;
          *(uint32_t *)&v11[v13 - 28] = v22;
          *(uint32_t *)&v11[v13 - 24] = v23;
          *(uint32_t *)&v11[v13 - 20] = v24;
          v8[3] = v12;
          *v8 = v25;
          v8[1] = v26;
          v8[2] = v27;
          v8[4] = v20;
          v8[5] = v19;
          v9 = v15;
        }
        --v9;
        v18 = v16;
        if ( v9 < v16 )
          break;
      }
      v8 += 16;
      ++v16;
    }
    if ( a2 < v9 )
      break;
    result = v18;
    if ( a3 <= v18 )
      return result;
LABEL_4:
    a2 = result;
  }
  hkAlgorithm::quickSortRecursive_67b7b5(a1, a2, v9);
  result = v18;
  if ( a3 > v18 )
    goto LABEL_4;
  return result;
}


// ============================================================================
// Address:   0x16853e0 (size: 732 bytes)
// Symbol:    sub_16853E0
// Demangled: sub_16853E0
// ============================================================================
int sub_16853E0(uint32_t *a1, uint32_t *a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int result;
  int v19;
  uint32_t *v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int *_g4_t_v23;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v22)) > _g4_s1 ? (32u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v23)) > _g4_s2 ? (32u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v26)) > _g4_s3 ? (44u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v27)) > _g4_s4 ? (48u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v28)) > _g4_s5 ? (52u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v29)) > _g4_s6 ? (52u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v30)) > _g4_s7 ? (56u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v31)) > _g4_s8 ? (60u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);

  v31[3] = (uint32_t)(uintptr_t)(&a3);
  v3 = a3;
  a3[1] = 0;
  v4 = a1[1];
  v5 = a2[1];
  v6 = v3[2] & 0x3FFFFFFF;
  if ( v5 + v4 <= v6 )
  {
    v27 = a2[1];
    v26 = v4;
  }
  else
  {
    v7 = 2 * v6;
    if ( v7 < v5 + v4 )
      v7 = v5 + v4;
    G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserve), (hkArrayUtil::Self *)v31, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3, v7, 4);
    v26 = a1[1];
    v27 = a2[1];
  }
  v30 = 0;
  v28 = 0;
LABEL_6:
  if ( v30 < v27 )
  {
    while ( v28 < v26 )
    {
      v8 = (int *)(*a1 + 4 * v28);
      v9 = (int *)(*a2 + 4 * v30);
      v10 = *v8;
      v11 = *v9;
      if ( *v8 < *v9 )
      {
        v17 = v3[1];
        ++v28;
        if ( v17 == (v3[2] & 0x3FFFFFFF) )
        {
          G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v21);
          v17 = v3[1];
          v10 = *v8;
        }
        *(uint32_t *)(*v3 + 4 * v17) = v10;
        ++v3[1];
        goto LABEL_6;
      }
      if ( *v8 <= *v9 )
      {
        v16 = v3[1];
        if ( v16 == (v3[2] & 0x3FFFFFFF) )
        {
          G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v21);
          v16 = v3[1];
          v10 = *v8;
        }
        ++v28;
        ++v30;
        *(uint32_t *)(*v3 + 4 * v16) = v10;
        ++v3[1];
        goto LABEL_6;
      }
      v12 = v3[1];
      ++v30;
      if ( v12 == (v3[2] & 0x3FFFFFFF) )
      {
        v23 = v9;
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v21);
        v12 = v3[1];
        v11 = *v23;
      }
      *(uint32_t *)(*v3 + 4 * v12) = v11;
      ++v3[1];
      if ( v30 >= v27 )
        break;
    }
  }
  if ( v26 > v28 )
  {
    v13 = v3[1];
    v14 = 4 * v28;
    do
    {
      v15 = (uint32_t *)(v14 + *a1);
      if ( (v3[2] & 0x3FFFFFFF) == v13 )
      {
        v22 = (uint32_t *)(v14 + *a1);
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v21);
        v13 = v3[1];
        v15 = v22;
      }
      ++v28;
      v14 += 4;
      *(uint32_t *)(*v3 + 4 * v13) = *v15;
      v13 = v3[1] + 1;
      v3[1] = v13;
    }
    while ( v28 != v26 );
  }
  result = v30;
  if ( v27 > v30 )
  {
    result = v3[1];
    v19 = 4 * v30;
    do
    {
      v20 = (uint32_t *)(v19 + *a2);
      if ( (v3[2] & 0x3FFFFFFF) == result )
      {
        v29 = (uint32_t *)(v19 + *a2);
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v21);
        result = v3[1];
        v20 = v29;
      }
      ++v30;
      v19 += 4;
      *(uint32_t *)(*v3 + 4 * result) = *v20;
      result = v3[1] + 1;
      v3[1] = result;
    }
    while ( v30 != v27 );
  }
  return result;
}


// ============================================================================
// Address:   0x16856c0 (size: 744 bytes)
// Symbol:    sub_16856C0
// Demangled: sub_16856C0
// ============================================================================
int sub_16856C0(uint32_t *a1, uint32_t *a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int result;
  int v17;
  uint32_t *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v20)) > _g4_s1 ? (32u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v21)) > _g4_s2 ? (32u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v22)) > _g4_s3 ? (36u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v23)) > _g4_s4 ? (36u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v24)) > _g4_s5 ? (36u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v29)) > _g4_s8 ? (48u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v30)) > _g4_s9 ? (52u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v31)) > _g4_s10 ? (56u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v32)) > _g4_s11 ? (56u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v33)) > _g4_s12 ? (60u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);

  v33[3] = (uint32_t)(uintptr_t)(&a3);
  v3 = a3;
  a3[1] = 0;
  v4 = a1[1];
  v5 = a2[1];
  v6 = v3[2] & 0x3FFFFFFF;
  if ( v5 + v4 <= v6 )
  {
    v30 = a2[1];
    v28 = v4;
  }
  else
  {
    v7 = 2 * v6;
    if ( v7 < v5 + v4 )
      v7 = v5 + v4;
    G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserve), (hkArrayUtil::Self *)v33, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3, v7, 4);
    v28 = a1[1];
    v30 = a2[1];
  }
  v31 = 0;
  v8 = 0;
LABEL_6:
  if ( v31 < v30 )
  {
    while ( v8 < v28 )
    {
      v22 = *a2 + 4 * v31;
      v9 = *(uint32_t *)(*(uint32_t *)v22 + 32);
      v10 = *a1 + 4 * v8;
      if ( *(uint32_t *)(*(uint32_t *)v10 + 32) < v9 )
      {
        v15 = v3[1];
        ++v8;
        if ( v15 == (v3[2] & 0x3FFFFFFF) )
        {
          v25 = v8;
          G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v19);
          v15 = v3[1];
          v8 = v25;
        }
        *(uint32_t *)(*v3 + 4 * v15) = *(uint32_t *)v10;
        ++v3[1];
        goto LABEL_6;
      }
      if ( *(uint32_t *)(*(uint32_t *)v10 + 32) <= v9 )
      {
        v14 = v3[1];
        if ( v14 == (v3[2] & 0x3FFFFFFF) )
        {
          v24 = v8;
          G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v19);
          v14 = v3[1];
          v8 = v24;
        }
        ++v8;
        ++v31;
        *(uint32_t *)(*v3 + 4 * v14) = *(uint32_t *)v10;
        ++v3[1];
        goto LABEL_6;
      }
      v11 = v3[1];
      ++v31;
      if ( v11 == (v3[2] & 0x3FFFFFFF) )
      {
        v21 = v8;
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v19);
        v11 = v3[1];
        v8 = v21;
      }
      *(uint32_t *)(*v3 + 4 * v11) = *(uint32_t *)v22;
      ++v3[1];
      if ( v31 >= v30 )
        break;
    }
  }
  if ( v28 > v8 )
  {
    v12 = v3[1];
    v23 = 4 * v8;
    do
    {
      v13 = (uint32_t *)(*a1 + v23);
      if ( (v3[2] & 0x3FFFFFFF) == v12 )
      {
        v20 = v8;
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v19);
        v12 = v3[1];
        v8 = v20;
      }
      ++v8;
      v23 += 4;
      *(uint32_t *)(*v3 + 4 * v12) = *v13;
      v12 = v3[1] + 1;
      v3[1] = v12;
    }
    while ( v8 != v28 );
  }
  result = v31;
  if ( v30 > v31 )
  {
    v17 = v31;
    result = v3[1];
    v32 = 4 * v31;
    do
    {
      v18 = (uint32_t *)(*a2 + v32);
      if ( (v3[2] & 0x3FFFFFFF) == result )
      {
        v29 = v17;
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v3, 4, v19);
        result = v3[1];
        v17 = v29;
      }
      ++v17;
      v32 += 4;
      *(uint32_t *)(*v3 + 4 * result) = *v18;
      result = v3[1] + 1;
      v3[1] = result;
    }
    while ( v17 != v30 );
  }
  return result;
}


// ============================================================================
// Address:   0x1689d80 (size: 1445 bytes)
// Symbol:    _ZNK12hkSortedTreeIPN15hkgpCgoInternal8EdgeInfoES1_iLi16EE14traverseMinMaxINS0_14ErrorCollectorEEEvRT_i
// Demangled: void hkSortedTree<hkgpCgoInternal::EdgeInfo *,hkgpCgoInternal::EdgeInfo,int,16>::traverseMinMax<hkgpCgoInternal::ErrorCollector>(hkgpCgoInternal::ErrorCollector &,int)const
// ============================================================================
template <> template <>
int hkSortedTree<hkgpCgoInternal::EdgeInfo *,hkgpCgoInternal::EdgeInfo,int,16>::traverseMinMax<hkgpCgoInternal::ErrorCollector>(
        uint32_t *a1,
        hkMemoryAllocator::Self *a2,
        int a3)
{
  int result;
  uint32_t *v4;
  int v5;
  float v6; // xmm0_4
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  float v12; // xmm0_4
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  float v17; // xmm0_4
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  float v22; // xmm0_4
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  float v27; // xmm0_4
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  float v32; // xmm0_4
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  float v37; // xmm0_4
  int v38;
  uint32_t *i;
  uint32_t *v40;
  int v41;
  float v42; // xmm0_4
  int v43;
  int v44;
  int v45;
  float v46; // xmm0_4
  uint32_t *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;

  result = a3;
  if ( a3 != 0 || (result = a1[4]) != 0 )
  {
    do
    {
      v7 = *a1;
      v61 = (uint32_t *)(*a1 + 16 * result);
      v8 = v61[1];
      if ( v8 == 0 )
      {
        v4 = v61;
        v5 = *v61;
        v6 = *(float *)(*v61 + 32);
        if ( v6 < 3.40282e38f )
          goto LABEL_9;
        goto LABEL_6;
      }
      while ( 2 )
      {
        v62 = (uint32_t *)(v7 + 16 * v8);
        v13 = v62[1];
        if ( v13 == 0 )
        {
          v10 = v62;
          v11 = *v62;
          v12 = *(float *)(*v62 + 32);
          if ( v12 < 3.40282e38f )
            goto LABEL_17;
          goto LABEL_13;
        }
        while ( 2 )
        {
          v63 = (uint32_t *)(v7 + 16 * v13);
          v18 = v63[1];
          if ( v18 == 0 )
          {
            v15 = v63;
            v16 = *v63;
            v17 = *(float *)(*v63 + 32);
            if ( v17 < 3.40282e38f )
              goto LABEL_25;
            goto LABEL_21;
          }
          while ( 2 )
          {
            v60 = (uint32_t *)(v7 + 16 * v18);
            v23 = v60[1];
            if ( v23 == 0 )
            {
              v20 = v60;
              v21 = *v60;
              v22 = *(float *)(*v60 + 32);
              if ( v22 < 3.40282e38f )
                goto LABEL_33;
              goto LABEL_29;
            }
            while ( 2 )
            {
              v59 = (uint32_t *)(v7 + 16 * v23);
              v28 = v59[1];
              if ( v28 == 0 )
              {
                v25 = v59;
                v26 = *v59;
                v27 = *(float *)(*v59 + 32);
                if ( v27 >= 3.40282e38f )
                  goto LABEL_37;
LABEL_41:
                v29 = *((uint32_t *)a2 + 1);
                if ( v29 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
                  v27 = *(float *)(v26 + 32);
                  v29 = *((uint32_t *)a2 + 1);
                }
                *(float *)(*(uint32_t *)a2 + 4 * v29) = v27;
                v25 = v59;
                ++*((uint32_t *)a2 + 1);
                goto LABEL_37;
              }
              while ( 2 )
              {
                v58 = (uint32_t *)(v7 + 16 * v28);
                v33 = v58[1];
                if ( v33 == 0 )
                {
                  v30 = v58;
                  v31 = *v58;
                  v32 = *(float *)(*v58 + 32);
                  if ( v32 < 3.40282e38f )
                    goto LABEL_49;
                  goto LABEL_45;
                }
                while ( 1 )
                {
                  v57 = (uint32_t *)(v7 + 16 * v33);
                  v38 = v57[1];
                  if ( v38 != 0 )
                  {
                    for ( i = a1; ; v7 = *i )
                    {
                      v53 = (uint32_t *)(v7 + 16 * v38);
                      v43 = v53[1];
                      if ( v43 != 0 )
                        break;
LABEL_57:
                      v40 = v53;
                      v41 = *v53;
                      v42 = *(float *)(*v53 + 32);
                      if ( v42 < 3.40282e38f )
                      {
                        v50 = *((uint32_t *)a2 + 1);
                        if ( v50 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                        {
                          v56 = i;
                          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
                          v50 = *((uint32_t *)a2 + 1);
                          i = v56;
                          v42 = *(float *)(v41 + 32);
                        }
                        *(float *)(*(uint32_t *)a2 + 4 * v50) = v42;
                        v40 = v53;
                        ++*((uint32_t *)a2 + 1);
                      }
                      v38 = v40[2];
                      if ( v38 == 0 )
                        goto LABEL_52;
                    }
                    v44 = v7;
                    while ( 2 )
                    {
                      v47 = (uint32_t *)(v44 + 16 * v43);
                      v48 = v47[1];
                      if ( v48 != 0 )
                      {
                        v54 = i;
                        hkSortedTree<hkgpCgoInternal::EdgeInfo *,hkgpCgoInternal::EdgeInfo,int,16>::traverseMinMax<hkgpCgoInternal::ErrorCollector>(
                          i,
                          a2,
                          v48);
                        v45 = *v47;
                        i = v54;
                        v46 = *(float *)(*v47 + 32);
                        if ( v46 < 3.40282e38f )
                        {
LABEL_67:
                          v49 = *((uint32_t *)a2 + 1);
                          if ( v49 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                          {
                            v55 = i;
                            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
                            v49 = *((uint32_t *)a2 + 1);
                            i = v55;
                            v46 = *(float *)(v45 + 32);
                          }
                          *(float *)(*(uint32_t *)a2 + 4 * v49) = v46;
                          ++*((uint32_t *)a2 + 1);
                        }
                      }
                      else
                      {
                        v45 = *v47;
                        v46 = *(float *)(*v47 + 32);
                        if ( v46 < 3.40282e38f )
                          goto LABEL_67;
                      }
                      v43 = v47[2];
                      if ( v43 == 0 )
                        goto LABEL_57;
                      v44 = *i;
                      continue;
                    }
                  }
LABEL_52:
                  v35 = v57;
                  v36 = *v57;
                  v37 = *(float *)(*v57 + 32);
                  if ( v37 < 3.40282e38f )
                  {
                    v51 = *((uint32_t *)a2 + 1);
                    if ( v51 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
                      v37 = *(float *)(v36 + 32);
                      v51 = *((uint32_t *)a2 + 1);
                    }
                    *(float *)(*(uint32_t *)a2 + 4 * v51) = v37;
                    v35 = v57;
                    ++*((uint32_t *)a2 + 1);
                  }
                  v33 = v35[2];
                  if ( v33 == 0 )
                    break;
                  v7 = *a1;
                }
                v30 = v58;
                v31 = *v58;
                v32 = *(float *)(*v58 + 32);
                if ( v32 < 3.40282e38f )
                {
LABEL_49:
                  v34 = *((uint32_t *)a2 + 1);
                  if ( v34 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
                    v32 = *(float *)(v31 + 32);
                    v34 = *((uint32_t *)a2 + 1);
                  }
                  *(float *)(*(uint32_t *)a2 + 4 * v34) = v32;
                  v30 = v58;
                  ++*((uint32_t *)a2 + 1);
                }
LABEL_45:
                v28 = v30[2];
                if ( v28 != 0 )
                {
                  v7 = *a1;
                  continue;
                }
                break;
              }
              v25 = v59;
              v26 = *v59;
              v27 = *(float *)(*v59 + 32);
              if ( v27 < 3.40282e38f )
                goto LABEL_41;
LABEL_37:
              v23 = v25[2];
              if ( v23 != 0 )
              {
                v7 = *a1;
                continue;
              }
              break;
            }
            v20 = v60;
            v21 = *v60;
            v22 = *(float *)(*v60 + 32);
            if ( v22 < 3.40282e38f )
            {
LABEL_33:
              v24 = *((uint32_t *)a2 + 1);
              if ( v24 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
                v22 = *(float *)(v21 + 32);
                v24 = *((uint32_t *)a2 + 1);
              }
              *(float *)(*(uint32_t *)a2 + 4 * v24) = v22;
              v20 = v60;
              ++*((uint32_t *)a2 + 1);
            }
LABEL_29:
            v18 = v20[2];
            if ( v18 != 0 )
            {
              v7 = *a1;
              continue;
            }
            break;
          }
          v15 = v63;
          v16 = *v63;
          v17 = *(float *)(*v63 + 32);
          if ( v17 < 3.40282e38f )
          {
LABEL_25:
            v19 = *((uint32_t *)a2 + 1);
            if ( v19 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
              v17 = *(float *)(v16 + 32);
              v19 = *((uint32_t *)a2 + 1);
            }
            *(float *)(*(uint32_t *)a2 + 4 * v19) = v17;
            v15 = v63;
            ++*((uint32_t *)a2 + 1);
          }
LABEL_21:
          v13 = v15[2];
          if ( v13 != 0 )
          {
            v7 = *a1;
            continue;
          }
          break;
        }
        v10 = v62;
        v11 = *v62;
        v12 = *(float *)(*v62 + 32);
        if ( v12 < 3.40282e38f )
        {
LABEL_17:
          v14 = *((uint32_t *)a2 + 1);
          if ( v14 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
            v12 = *(float *)(v11 + 32);
            v14 = *((uint32_t *)a2 + 1);
          }
          *(float *)(*(uint32_t *)a2 + 4 * v14) = v12;
          v10 = v62;
          ++*((uint32_t *)a2 + 1);
        }
LABEL_13:
        v8 = v10[2];
        if ( v8 != 0 )
        {
          v7 = *a1;
          continue;
        }
        break;
      }
      v4 = v61;
      v5 = *v61;
      v6 = *(float *)(*v61 + 32);
      if ( v6 >= 3.40282e38f )
        goto LABEL_6;
LABEL_9:
      v9 = *((uint32_t *)a2 + 1);
      if ( v9 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v52);
        v6 = *(float *)(v5 + 32);
        v9 = *((uint32_t *)a2 + 1);
      }
      *(float *)(*(uint32_t *)a2 + 4 * v9) = v6;
      v4 = v61;
      ++*((uint32_t *)a2 + 1);
LABEL_6:
      result = v4[2];
    }
    while ( result != 0 );
  }
  return result;
}


// ============================================================================
// Address:   0x168a330 (size: 2331 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN15hkgpCgoInternal3SetENS_7greaterIS2_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkgpCgoInternal::Set,hkAlgorithm::greater<hkgpCgoInternal::Set>>(hkgpCgoInternal::Set *,int,int,hkAlgorithm::greater<hkgpCgoInternal::Set>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_8c20f3(
        int a1,
        int a2,
        int a3)
{
  float v3; // xmm1_4
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  int i;
  int v10;
  int v11;
  int result;
  int v13;
  float v14; // xmm1_4
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  float v19; // xmm0_4
  int j;
  int v21;
  int v22;
  float v23; // xmm1_4
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  float v28; // xmm0_4
  int k;
  int v30;
  int v31;
  float v32; // xmm1_4
  int v33;
  uint32_t *v34;
  int v35;
  int v36;
  float v37; // xmm0_4
  int m;
  float v39; // xmm1_4
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  float v44; // xmm0_4
  int n;
  int v46;
  int v47;
  float v48; // xmm1_4
  int v49;
  uint32_t *jj;
  int v51;
  int v52;
  float v53; // xmm0_4
  int v54;
  int v55;
  float v56; // xmm1_4
  int v57;
  uint32_t *kk;
  int v59;
  int v60;
  float v61; // xmm0_4
  int v62;
  int v63;
  float v64; // xmm1_4
  int v65;
  uint32_t *mm;
  int v67;
  int v68;
  float v69; // xmm0_4
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int nn;
  float v80; // xmm1_4
  uint32_t *i1;
  int v82;
  int v83;
  float v84; // xmm0_4
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int ii;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;

  while ( 1 )
  {
    v3 = *(float *)(a1 + 8 * ((a3 + a2) >> 1));
    v4 = (uint32_t *)(a1 + 8 * a2);
    v5 = a2 + 1;
    v6 = a3;
    while ( 1 )
    {
      v105 = v5 - 1;
      if ( *(float *)v4 <= v3 )
      {
        v7 = a1 + 8 * v6;
        v8 = *(float *)v7;
        for ( i = v7 - 8; v3 > v8; --v6 )
        {
          v7 = i;
          i -= 8;
          v8 = *(float *)(i + 8);
        }
        if ( v6 < v105 )
          break;
        if ( v6 != v105 )
        {
          v10 = v4[1];
          v97 = *(uint32_t *)(v7 + 4);
          *(uint32_t *)v7 = *v4;
          *(uint32_t *)(v7 + 4) = v10;
          v4[1] = v97;
          *(float *)v4 = v8;
        }
        --v6;
        v105 = v5;
        if ( v6 < v5 )
          break;
      }
      v4 += 2;
      ++v5;
    }
    v111 = v6;
    v11 = a2 + 1;
    if ( a2 < v6 )
    {
      while ( 1 )
      {
        v89 = v11;
        v14 = *(float *)(a1 + 8 * ((v111 + a2) >> 1));
        v15 = v11;
        v16 = (uint32_t *)(a1 + 8 * a2);
        v17 = v111;
        while ( 1 )
        {
          v106 = v15 - 1;
          if ( *(float *)v16 <= v14 )
          {
            v18 = a1 + 8 * v17;
            v19 = *(float *)v18;
            for ( j = v18 - 8; v14 > v19; --v17 )
            {
              v18 = j;
              j -= 8;
              v19 = *(float *)(j + 8);
            }
            if ( v17 < v106 )
              break;
            if ( v17 != v106 )
            {
              v21 = v16[1];
              v98 = *(uint32_t *)(v18 + 4);
              *(uint32_t *)v18 = *v16;
              *(uint32_t *)(v18 + 4) = v21;
              v16[1] = v98;
              *(float *)v16 = v19;
            }
            --v17;
            v106 = v15;
            if ( v17 < v15 )
              break;
          }
          v16 += 2;
          ++v15;
        }
        v112 = v17;
        v13 = v89;
        if ( a2 < v17 )
        {
          while ( 1 )
          {
            v90 = v13;
            v23 = *(float *)(a1 + 8 * ((v112 + a2) >> 1));
            v24 = v13;
            v25 = (uint32_t *)(a1 + 8 * a2);
            v26 = v112;
            while ( 1 )
            {
              v107 = v24 - 1;
              if ( *(float *)v25 <= v23 )
              {
                v27 = a1 + 8 * v26;
                v28 = *(float *)v27;
                for ( k = v27 - 8; v23 > v28; --v26 )
                {
                  v27 = k;
                  k -= 8;
                  v28 = *(float *)(k + 8);
                }
                if ( v26 < v107 )
                  break;
                if ( v26 != v107 )
                {
                  v30 = v25[1];
                  v99 = *(uint32_t *)(v27 + 4);
                  *(uint32_t *)v27 = *v25;
                  *(uint32_t *)(v27 + 4) = v30;
                  v25[1] = v99;
                  *(float *)v25 = v28;
                }
                --v26;
                v107 = v24;
                if ( v26 < v24 )
                  break;
              }
              v25 += 2;
              ++v24;
            }
            v113 = v26;
            v22 = v90;
            if ( a2 < v26 )
            {
              while ( 1 )
              {
                v91 = v22;
                v32 = *(float *)(a1 + 8 * ((v113 + a2) >> 1));
                v33 = v22;
                v34 = (uint32_t *)(a1 + 8 * a2);
                v35 = v113;
                while ( 1 )
                {
                  v109 = v33 - 1;
                  if ( *(float *)v34 <= v32 )
                  {
                    v36 = a1 + 8 * v35;
                    v37 = *(float *)v36;
                    for ( m = v36 - 8; v32 > v37; --v35 )
                    {
                      v36 = m;
                      m -= 8;
                      v37 = *(float *)(m + 8);
                    }
                    if ( v35 < v109 )
                      break;
                    if ( v35 != v109 )
                    {
                      v47 = v34[1];
                      v101 = *(uint32_t *)(v36 + 4);
                      *(uint32_t *)v36 = *v34;
                      *(uint32_t *)(v36 + 4) = v47;
                      v34[1] = v101;
                      *(float *)v34 = v37;
                    }
                    --v35;
                    v109 = v33;
                    if ( v35 < v33 )
                      break;
                  }
                  v34 += 2;
                  ++v33;
                }
                v114 = v35;
                v31 = v91;
                if ( a2 < v35 )
                {
                  while ( 1 )
                  {
                    v92 = v31;
                    v39 = *(float *)(a1 + 8 * ((v114 + a2) >> 1));
                    v40 = v31;
                    v41 = (uint32_t *)(a1 + 8 * a2);
                    v42 = v114;
                    while ( 1 )
                    {
                      v110 = v40 - 1;
                      if ( *(float *)v41 <= v39 )
                      {
                        v43 = a1 + 8 * v42;
                        v44 = *(float *)v43;
                        for ( n = v43 - 8; v39 > v44; --v42 )
                        {
                          v43 = n;
                          n -= 8;
                          v44 = *(float *)(n + 8);
                        }
                        if ( v42 < v110 )
                          break;
                        if ( v42 != v110 )
                        {
                          v46 = v41[1];
                          v100 = *(uint32_t *)(v43 + 4);
                          *(uint32_t *)v43 = *v41;
                          *(uint32_t *)(v43 + 4) = v46;
                          v41[1] = v100;
                          *(float *)v41 = v44;
                        }
                        --v42;
                        v110 = v40;
                        if ( v42 < v40 )
                          break;
                      }
                      v41 += 2;
                      ++v40;
                    }
                    v115 = v42;
                    if ( a2 < v42 )
                    {
                      for ( ii = v92; ; ii = v117 + 1 )
                      {
                        v93 = v115;
                        v48 = *(float *)(a1 + 8 * ((v115 + a2) >> 1));
                        v49 = ii;
                        for ( jj = (uint32_t *)(a1 + 8 * a2); ; jj += 2 )
                        {
                          v51 = v49 - 1;
                          if ( *(float *)jj <= v48 )
                          {
                            v52 = a1 + 8 * v93;
                            v53 = *(float *)v52;
                            v54 = v52 - 8;
                            if ( v48 > *(float *)v52 )
                            {
                              v55 = v93;
                              do
                              {
                                v52 = v54;
                                v54 -= 8;
                                v53 = *(float *)(v54 + 8);
                                --v55;
                              }
                              while ( v48 > v53 );
                              v93 = v55;
                            }
                            if ( v93 < v51 )
                              break;
                            if ( v93 != v51 )
                            {
                              v76 = *(uint32_t *)(v52 + 4);
                              v77 = jj[1];
                              *(uint32_t *)v52 = *jj;
                              *(uint32_t *)(v52 + 4) = v77;
                              jj[1] = v76;
                              *(float *)jj = v53;
                            }
                            --v93;
                            v51 = v49;
                            if ( v93 < v49 )
                              break;
                          }
                          ++v49;
                        }
                        v116 = v93;
                        v117 = v51;
                        if ( a2 < v93 )
                        {
                          while ( 1 )
                          {
                            v94 = v116;
                            v56 = *(float *)(a1 + 8 * ((v116 + a2) >> 1));
                            v57 = ii;
                            for ( kk = (uint32_t *)(a1 + 8 * a2); ; kk += 2 )
                            {
                              v59 = v57 - 1;
                              if ( *(float *)kk <= v56 )
                              {
                                v60 = a1 + 8 * v94;
                                v61 = *(float *)v60;
                                v62 = v60 - 8;
                                if ( v56 > *(float *)v60 )
                                {
                                  v63 = v94;
                                  do
                                  {
                                    v60 = v62;
                                    v62 -= 8;
                                    v61 = *(float *)(v62 + 8);
                                    --v63;
                                  }
                                  while ( v56 > v61 );
                                  v94 = v63;
                                }
                                if ( v94 < v59 )
                                  break;
                                if ( v94 != v59 )
                                {
                                  v74 = *(uint32_t *)(v60 + 4);
                                  v75 = kk[1];
                                  *(uint32_t *)v60 = *kk;
                                  *(uint32_t *)(v60 + 4) = v75;
                                  kk[1] = v74;
                                  *(float *)kk = v61;
                                }
                                --v94;
                                v59 = v57;
                                if ( v94 < v57 )
                                  break;
                              }
                              ++v57;
                            }
                            v108 = v94;
                            v118 = v59;
                            if ( a2 < v94 )
                            {
                              while ( 1 )
                              {
                                v95 = v108;
                                v64 = *(float *)(a1 + 8 * ((v108 + a2) >> 1));
                                v65 = ii;
                                for ( mm = (uint32_t *)(a1 + 8 * a2); ; mm += 2 )
                                {
                                  v67 = v65 - 1;
                                  if ( *(float *)mm <= v64 )
                                  {
                                    v68 = a1 + 8 * v95;
                                    v69 = *(float *)v68;
                                    v70 = v68 - 8;
                                    if ( v64 > *(float *)v68 )
                                    {
                                      v71 = v95;
                                      do
                                      {
                                        v68 = v70;
                                        v70 -= 8;
                                        v69 = *(float *)(v70 + 8);
                                        --v71;
                                      }
                                      while ( v64 > v69 );
                                      v95 = v71;
                                    }
                                    if ( v95 < v67 )
                                      break;
                                    if ( v95 != v67 )
                                    {
                                      v72 = *(uint32_t *)(v68 + 4);
                                      v73 = mm[1];
                                      *(uint32_t *)v68 = *mm;
                                      *(uint32_t *)(v68 + 4) = v73;
                                      mm[1] = v72;
                                      *(float *)mm = v69;
                                    }
                                    --v95;
                                    v67 = v65;
                                    if ( v95 < v65 )
                                      break;
                                  }
                                  ++v65;
                                }
                                v104 = v67;
                                if ( a2 < v95 )
                                {
                                  v102 = v95;
                                  v78 = ii;
                                  for ( nn = v95; ; nn = v102 )
                                  {
                                    v96 = nn;
                                    v80 = *(float *)(a1 + 8 * ((nn + a2) >> 1));
                                    for ( i1 = (uint32_t *)(a1 + 8 * a2); ; i1 += 2 )
                                    {
                                      v82 = v78 - 1;
                                      if ( *(float *)i1 <= v80 )
                                      {
                                        v83 = a1 + 8 * v96;
                                        v84 = *(float *)v83;
                                        v85 = v83 - 8;
                                        if ( v80 > *(float *)v83 )
                                        {
                                          v86 = v96;
                                          do
                                          {
                                            v83 = v85;
                                            v85 -= 8;
                                            v84 = *(float *)(v85 + 8);
                                            --v86;
                                          }
                                          while ( v80 > v84 );
                                          v96 = v86;
                                        }
                                        if ( v96 < v82 )
                                          break;
                                        if ( v96 != v82 )
                                        {
                                          v87 = *(uint32_t *)(v83 + 4);
                                          v88 = i1[1];
                                          *(uint32_t *)v83 = *i1;
                                          *(uint32_t *)(v83 + 4) = v88;
                                          i1[1] = v87;
                                          *(float *)i1 = v84;
                                        }
                                        --v96;
                                        v82 = v78;
                                        if ( v96 < v78 )
                                          break;
                                      }
                                      ++v78;
                                    }
                                    if ( a2 < v96 )
                                      hkAlgorithm::quickSortRecursive_8c20f3(
                                        a1,
                                        a2,
                                        v96);
                                    if ( v102 <= v82 )
                                      break;
                                    a2 = v82;
                                    v78 = v82 + 1;
                                  }
                                }
                                if ( v108 <= v104 )
                                  break;
                                a2 = v104;
                                ii = v104 + 1;
                              }
                            }
                            if ( v116 <= v118 )
                              break;
                            a2 = v118;
                            ii = v118 + 1;
                          }
                        }
                        if ( v115 <= v117 )
                          break;
                        a2 = v117;
                      }
                    }
                    if ( v114 <= v110 )
                      break;
                    a2 = v110;
                    v31 = v110 + 1;
                  }
                }
                if ( v113 <= v109 )
                  break;
                a2 = v109;
                v22 = v109 + 1;
              }
            }
            if ( v112 <= v107 )
              break;
            a2 = v107;
            v13 = v107 + 1;
          }
        }
        if ( v111 <= v106 )
          break;
        a2 = v106;
        v11 = v106 + 1;
      }
    }
    result = v105;
    if ( a3 <= v105 )
      break;
    a2 = v105;
  }
  return result;
}


// ============================================================================
// Address:   0x168ac50 (size: 1845 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIiNS_4lessIiEEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<int,hkAlgorithm::less<int>>(int *,int,int,hkAlgorithm::less<int>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_f41303(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int i;
  int *v11;
  int v12;
  int v13;
  int v14;
  int j;
  int *v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int k;
  int *v22;
  int v23;
  int v24;
  bool v25;
  int v26;
  int v27;
  int m;
  int *v29;
  int v30;
  int v31;
  bool v32;
  int v33;
  int v34;
  int n;
  int *v36;
  int v37;
  int v38;
  bool v39;
  int v40;
  int v41;
  int ii;
  int *v43;
  int v44;
  int v45;
  bool v46;
  int v47;
  int v48;
  int jj;
  int *v50;
  int v51;
  int v52;
  int kk;
  int v54;
  int v55;
  int *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;

  while ( 1 )
  {
    v3 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v75 = a2 + 1;
    v4 = a2 + 1;
    v69 = a3;
    while ( 1 )
    {
      v66 = v4 - 1;
      if ( v3 <= *(uint32_t *)(a1 + 4 * v4 - 4) )
      {
        v5 = (int *)(a1 + 4 * v69);
        v6 = *v5;
        if ( v3 < *v5 )
        {
          v7 = a1 + 4 * v69 - 4;
          do
          {
            v5 = (int *)v7;
            v7 -= 4;
            v6 = *(uint32_t *)(v7 + 4);
            --v69;
          }
          while ( v3 < v6 );
        }
        if ( v69 < v66 )
          break;
        if ( v69 != v66 )
        {
          *v5 = *(uint32_t *)(a1 + 4 * v4 - 4);
          *(uint32_t *)(a1 + 4 * v4 - 4) = v6;
        }
        --v69;
        v66 = v4;
        if ( v69 < v4 )
          break;
      }
      ++v4;
    }
    if ( a2 < v69 )
    {
      while ( 1 )
      {
        v68 = v69;
        v9 = *(uint32_t *)(a1 + 4 * ((v69 + a2) >> 1));
        for ( i = v75; ; ++i )
        {
          v65 = i - 1;
          if ( v9 <= *(uint32_t *)(a1 + 4 * i - 4) )
          {
            v11 = (int *)(a1 + 4 * v68);
            v12 = *v11;
            if ( v9 < *v11 )
            {
              v13 = a1 + 4 * v68 - 4;
              do
              {
                v11 = (int *)v13;
                v13 -= 4;
                v12 = *(uint32_t *)(v13 + 4);
                --v68;
              }
              while ( v9 < v12 );
            }
            if ( v68 < v65 )
              break;
            if ( v68 != v65 )
            {
              *v11 = *(uint32_t *)(a1 + 4 * i - 4);
              *(uint32_t *)(a1 + 4 * i - 4) = v12;
            }
            --v68;
            v65 = i;
            if ( v68 < i )
              break;
          }
        }
        if ( a2 < v68 )
        {
          while ( 1 )
          {
            v67 = v68;
            v14 = *(uint32_t *)(a1 + 4 * ((v68 + a2) >> 1));
            for ( j = v75; ; ++j )
            {
              v64 = j - 1;
              if ( v14 <= *(uint32_t *)(a1 + 4 * j - 4) )
              {
                v16 = (int *)(a1 + 4 * v67);
                v17 = *v16;
                if ( v14 < *v16 )
                {
                  v18 = a1 + 4 * v67 - 4;
                  do
                  {
                    v16 = (int *)v18;
                    v18 -= 4;
                    v17 = *(uint32_t *)(v18 + 4);
                    --v67;
                  }
                  while ( v14 < v17 );
                }
                if ( v67 < v64 )
                  break;
                if ( v67 != v64 )
                {
                  *v16 = *(uint32_t *)(a1 + 4 * j - 4);
                  *(uint32_t *)(a1 + 4 * j - 4) = v17;
                }
                --v67;
                v64 = j;
                if ( v67 < j )
                  break;
              }
            }
            if ( a2 < v67 )
            {
              while ( 1 )
              {
                v71 = v67;
                v20 = *(uint32_t *)(a1 + 4 * ((v67 + a2) >> 1));
                for ( k = v75; ; ++k )
                {
                  v62 = k - 1;
                  if ( v20 <= *(uint32_t *)(a1 + 4 * k - 4) )
                  {
                    v22 = (int *)(a1 + 4 * v71);
                    v23 = *v22;
                    if ( v20 >= *v22 )
                    {
                      v19 = v71 == v62;
                      if ( v71 < v62 )
                        break;
                    }
                    else
                    {
                      v24 = a1 + 4 * v71 - 4;
                      do
                      {
                        v22 = (int *)v24;
                        v24 -= 4;
                        v23 = *(uint32_t *)(v24 + 4);
                        --v71;
                      }
                      while ( v20 < v23 );
                      v19 = v71 == v62;
                      if ( v71 < v62 )
                        break;
                    }
                    if ( !v19 )
                    {
                      *v22 = *(uint32_t *)(a1 + 4 * k - 4);
                      *(uint32_t *)(a1 + 4 * k - 4) = v23;
                    }
                    --v71;
                    v62 = k;
                    if ( v71 < k )
                      break;
                  }
                }
                if ( a2 < v71 )
                {
                  while ( 1 )
                  {
                    v26 = v71;
                    v82 = v75;
                    v27 = *(uint32_t *)(a1 + 4 * ((v71 + a2) >> 1));
                    for ( m = v75; ; m = v82 )
                    {
                      v61 = m - 1;
                      v77 = *(uint32_t *)(a1 + 4 * m - 4);
                      if ( v27 <= v77 )
                      {
                        v29 = (int *)(4 * v26 + a1);
                        v30 = *v29;
                        if ( v27 >= *v29 )
                        {
                          v25 = v26 == v61;
                          if ( v26 < v61 )
                            break;
                        }
                        else
                        {
                          v31 = a1 + 4 * v26 - 4;
                          do
                          {
                            v29 = (int *)v31;
                            v31 -= 4;
                            v30 = *(uint32_t *)(v31 + 4);
                            --v26;
                          }
                          while ( v27 < v30 );
                          v25 = v26 == v61;
                          if ( v26 < v61 )
                            break;
                        }
                        if ( !v25 )
                        {
                          *v29 = v77;
                          *(uint32_t *)(a1 + 4 * v82 - 4) = v30;
                        }
                        --v26;
                        v61 = v82;
                        if ( v26 < v82 )
                          break;
                      }
                      ++v82;
                    }
                    v60 = v26;
                    if ( a2 < v26 )
                    {
                      while ( 1 )
                      {
                        v33 = v60;
                        v83 = v75;
                        v34 = *(uint32_t *)(a1 + 4 * ((v60 + a2) >> 1));
                        for ( n = v75; ; n = v83 )
                        {
                          v70 = n - 1;
                          v78 = *(uint32_t *)(a1 + 4 * n - 4);
                          if ( v34 <= v78 )
                          {
                            v36 = (int *)(a1 + 4 * v33);
                            v37 = *v36;
                            if ( v34 >= *v36 )
                            {
                              v32 = v33 == v70;
                              if ( v33 < v70 )
                                break;
                            }
                            else
                            {
                              v38 = a1 + 4 * v33 - 4;
                              do
                              {
                                v36 = (int *)v38;
                                v38 -= 4;
                                v37 = *(uint32_t *)(v38 + 4);
                                --v33;
                              }
                              while ( v34 < v37 );
                              v32 = v33 == v70;
                              if ( v33 < v70 )
                                break;
                            }
                            if ( !v32 )
                            {
                              *v36 = v78;
                              *(uint32_t *)(a1 + 4 * v83 - 4) = v37;
                            }
                            --v33;
                            v70 = v83;
                            if ( v33 < v83 )
                              break;
                          }
                          ++v83;
                        }
                        v59 = v33;
                        if ( a2 < v33 )
                        {
                          while ( 1 )
                          {
                            v40 = v59;
                            v84 = v75;
                            v41 = *(uint32_t *)(a1 + 4 * ((v59 + a2) >> 1));
                            for ( ii = v75; ; ii = v84 )
                            {
                              v73 = ii - 1;
                              v79 = *(uint32_t *)(a1 + 4 * ii - 4);
                              if ( v41 <= v79 )
                              {
                                v43 = (int *)(4 * v40 + a1);
                                v44 = *v43;
                                if ( *v43 <= v41 )
                                {
                                  v39 = v40 == v73;
                                  if ( v40 < v73 )
                                    break;
                                }
                                else
                                {
                                  v45 = a1 + 4 * v40 - 4;
                                  do
                                  {
                                    v43 = (int *)v45;
                                    v45 -= 4;
                                    v44 = *(uint32_t *)(v45 + 4);
                                    --v40;
                                  }
                                  while ( v41 < v44 );
                                  v39 = v40 == v73;
                                  if ( v40 < v73 )
                                    break;
                                }
                                if ( !v39 )
                                {
                                  *v43 = v79;
                                  *(uint32_t *)(a1 + 4 * v84 - 4) = v44;
                                }
                                --v40;
                                v73 = v84;
                                if ( v40 < v84 )
                                  break;
                              }
                              ++v84;
                            }
                            v63 = v40;
                            if ( a2 < v40 )
                            {
                              while ( 1 )
                              {
                                v47 = v63;
                                v48 = *(uint32_t *)(a1 + 4 * ((v63 + a2) >> 1));
                                v85 = v75;
                                for ( jj = v75; ; jj = v85 )
                                {
                                  v74 = jj - 1;
                                  v80 = *(uint32_t *)(a1 + 4 * jj - 4);
                                  if ( v48 <= v80 )
                                  {
                                    v50 = (int *)(a1 + 4 * v47);
                                    v51 = *v50;
                                    if ( *v50 <= v48 )
                                    {
                                      v46 = v47 == v74;
                                      if ( v47 < v74 )
                                        break;
                                    }
                                    else
                                    {
                                      v52 = a1 + 4 * v47 - 4;
                                      do
                                      {
                                        v50 = (int *)v52;
                                        v52 -= 4;
                                        v51 = *(uint32_t *)(v52 + 4);
                                        --v47;
                                      }
                                      while ( v48 < v51 );
                                      v46 = v47 == v74;
                                      if ( v47 < v74 )
                                        break;
                                    }
                                    if ( !v46 )
                                    {
                                      *v50 = v80;
                                      *(uint32_t *)(a1 + 4 * v85 - 4) = v51;
                                    }
                                    --v47;
                                    v74 = v85;
                                    if ( v47 < v85 )
                                      break;
                                  }
                                  ++v85;
                                }
                                v72 = v47;
                                if ( a2 < v47 )
                                {
                                  for ( kk = v75; ; kk = v81 + 1 )
                                  {
                                    v86 = kk;
                                    v54 = *(uint32_t *)(a1 + 4 * ((v72 + a2) >> 1));
                                    v55 = v72;
                                    while ( 1 )
                                    {
                                      v81 = kk - 1;
                                      v76 = *(uint32_t *)(a1 + 4 * kk - 4);
                                      if ( v54 <= v76 )
                                      {
                                        v56 = (int *)(a1 + 4 * v55);
                                        v57 = *v56;
                                        if ( v54 < *v56 )
                                        {
                                          v58 = a1 + 4 * v55 - 4;
                                          do
                                          {
                                            v56 = (int *)v58;
                                            v58 -= 4;
                                            v57 = *(uint32_t *)(v58 + 4);
                                            --v55;
                                          }
                                          while ( v54 < v57 );
                                        }
                                        if ( v55 < v81 )
                                          break;
                                        if ( v55 != v81 )
                                        {
                                          *v56 = v76;
                                          *(uint32_t *)(a1 + 4 * v86 - 4) = v57;
                                        }
                                        --v55;
                                        v81 = v86;
                                        if ( v55 < v86 )
                                          break;
                                      }
                                      kk = ++v86;
                                    }
                                    if ( a2 < v55 )
                                      hkAlgorithm::quickSortRecursive_f41303(a1, a2, v55);
                                    if ( v72 <= v81 )
                                      break;
                                    a2 = v81;
                                  }
                                }
                                if ( v63 <= v74 )
                                  break;
                                a2 = v74;
                                v75 = v74 + 1;
                              }
                            }
                            if ( v59 <= v73 )
                              break;
                            a2 = v73;
                            v75 = v73 + 1;
                          }
                        }
                        if ( v60 <= v70 )
                          break;
                        a2 = v70;
                        v75 = v70 + 1;
                      }
                    }
                    if ( v71 <= v61 )
                      break;
                    a2 = v61;
                    v75 = v61 + 1;
                  }
                }
                if ( v67 <= v62 )
                  break;
                a2 = v62;
                v75 = v62 + 1;
              }
            }
            if ( v68 <= v64 )
              break;
            a2 = v64;
            v75 = v64 + 1;
          }
        }
        if ( v69 <= v65 )
          break;
        a2 = v65;
        v75 = v65 + 1;
      }
    }
    result = v66;
    if ( a3 <= v66 )
      return result;
    a2 = v66;
  }
}


// ============================================================================
// Address:   0x168b390 (size: 2201 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN15hkgpCgoInternal9HTriangleENS_4lessIS2_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkgpCgoInternal::HTriangle,hkAlgorithm::less<hkgpCgoInternal::HTriangle>>(hkgpCgoInternal::HTriangle *,int,int,hkAlgorithm::less<hkgpCgoInternal::HTriangle>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_1fe190(
        int a1,
        int a2,
        int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int result;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int *v18;
  bool v19;
  int v20;
  unsigned int v21;
  int v22;
  int *v23;
  int v24;
  int *v25;
  bool v26;
  int v27;
  int v28;
  unsigned int v29;
  int *v30;
  int v31;
  int *v32;
  bool v33;
  int v34;
  int v35;
  unsigned int v36;
  int *v37;
  int v38;
  int *v39;
  bool v40;
  int v41;
  int v42;
  unsigned int v43;
  int *v44;
  int v45;
  int *v46;
  bool v47;
  int v48;
  int v49;
  unsigned int v50;
  int *v51;
  int v52;
  int *v53;
  int v54;
  int v55;
  unsigned int v56;
  int *v57;
  int v58;
  int *v59;
  int v60;
  int v61;
  int *v62;
  int *v63;
  int *v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;

  while ( 2 )
  {
    v3 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v60 = a2 + 1;
    v4 = a2 + 1;
    v5 = *(uint32_t *)(v3 + 32);
    v75 = a3;
    while ( 1 )
    {
      v78 = v4 - 1;
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v4 - 4) + 32) < v5 )
        goto LABEL_11;
      v62 = (int *)(a1 + 4 * v75);
      v6 = *v62;
      if ( *(uint32_t *)(*v62 + 32) > v5 )
      {
        v7 = (int *)(a1 + 4 * v75 - 4);
        do
        {
          v6 = *v7;
          --v75;
          v62 = v7--;
        }
        while ( *(uint32_t *)(v6 + 32) > v5 );
      }
      if ( v75 < v78 )
        break;
      if ( v75 != v78 )
      {
        *v62 = *(uint32_t *)(a1 + 4 * v4 - 4);
        *(uint32_t *)(a1 + 4 * v4 - 4) = v6;
      }
      --v75;
      v78 = v4;
      if ( v75 < v4 )
        break;
      v5 = *(uint32_t *)(v3 + 32);
LABEL_11:
      ++v4;
    }
    if ( a2 >= v75 )
      goto LABEL_13;
    while ( 2 )
    {
      v9 = v60;
      v76 = v75;
      v10 = *(uint32_t *)(a1 + 4 * ((v75 + a2) >> 1));
      v11 = *(uint32_t *)(v10 + 32);
      while ( 2 )
      {
        v79 = v9 - 1;
        if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v9 - 4) + 32) < v11 )
        {
LABEL_28:
          ++v9;
          continue;
        }
        break;
      }
      v63 = (int *)(a1 + 4 * v76);
      v12 = *v63;
      if ( *(uint32_t *)(*v63 + 32) > v11 )
      {
        v13 = (int *)(a1 + 4 * v76 - 4);
        do
        {
          v12 = *v13;
          --v76;
          v63 = v13--;
        }
        while ( *(uint32_t *)(v12 + 32) > v11 );
      }
      if ( v76 >= v79 )
      {
        if ( v76 != v79 )
        {
          *v63 = *(uint32_t *)(a1 + 4 * v9 - 4);
          *(uint32_t *)(a1 + 4 * v9 - 4) = v12;
        }
        --v76;
        v79 = v9;
        if ( v76 >= v9 )
        {
          v11 = *(uint32_t *)(v10 + 32);
          goto LABEL_28;
        }
      }
      if ( a2 >= v76 )
        goto LABEL_16;
      while ( 2 )
      {
        v14 = v60;
        v77 = v76;
        v15 = *(uint32_t *)(a1 + 4 * ((v76 + a2) >> 1));
        v16 = *(uint32_t *)(v15 + 32);
        while ( 2 )
        {
          v80 = v14 - 1;
          if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v14 - 4) + 32) < v16 )
          {
LABEL_43:
            ++v14;
            continue;
          }
          break;
        }
        v64 = (int *)(a1 + 4 * v77);
        v17 = *v64;
        if ( *(uint32_t *)(*v64 + 32) > v16 )
        {
          v18 = (int *)(a1 + 4 * v77 - 4);
          do
          {
            v17 = *v18;
            --v77;
            v64 = v18--;
          }
          while ( *(uint32_t *)(v17 + 32) > v16 );
        }
        if ( v77 >= v80 )
        {
          if ( v77 != v80 )
          {
            *v64 = *(uint32_t *)(a1 + 4 * v14 - 4);
            *(uint32_t *)(a1 + 4 * v14 - 4) = v17;
          }
          --v77;
          v80 = v14;
          if ( v77 >= v14 )
          {
            v16 = *(uint32_t *)(v15 + 32);
            goto LABEL_43;
          }
        }
        if ( a2 >= v77 )
          goto LABEL_31;
        while ( 2 )
        {
          v20 = v60;
          v65 = *(uint32_t *)(a1 + 4 * ((v77 + a2) >> 1));
          v21 = *(uint32_t *)(v65 + 32);
          v22 = v77;
          while ( 2 )
          {
            v82 = v20 - 1;
            if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v20 - 4) + 32) < v21 )
            {
LABEL_58:
              ++v20;
              continue;
            }
            break;
          }
          v23 = (int *)(a1 + 4 * v22);
          v24 = *v23;
          if ( *(uint32_t *)(*v23 + 32) <= v21 )
          {
            v19 = v22 == v82;
            if ( v22 < v82 )
              goto LABEL_45;
          }
          else
          {
            v25 = (int *)(a1 + 4 * v22 - 4);
            do
            {
              v24 = *v25;
              --v22;
              v23 = v25--;
            }
            while ( *(uint32_t *)(v24 + 32) > v21 );
            v19 = v22 == v82;
            if ( v22 < v82 )
              goto LABEL_45;
          }
          if ( !v19 )
          {
            *v23 = *(uint32_t *)(a1 + 4 * v20 - 4);
            *(uint32_t *)(a1 + 4 * v20 - 4) = v24;
          }
          --v22;
          v82 = v20;
          if ( v22 >= v20 )
          {
            v21 = *(uint32_t *)(v65 + 32);
            goto LABEL_58;
          }
LABEL_45:
          v84 = v22;
          if ( a2 >= v22 )
            goto LABEL_46;
          while ( 2 )
          {
            v27 = v84;
            v28 = v60;
            v66 = *(uint32_t *)(a1 + 4 * ((v84 + a2) >> 1));
            v29 = *(uint32_t *)(v66 + 32);
            while ( 2 )
            {
              v83 = v28 - 1;
              if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v28 - 4) + 32) < v29 )
              {
LABEL_73:
                ++v28;
                continue;
              }
              break;
            }
            v30 = (int *)(a1 + 4 * v27);
            v31 = *v30;
            if ( *(uint32_t *)(*v30 + 32) <= v29 )
            {
              v26 = v27 == v83;
              if ( v27 < v83 )
                goto LABEL_60;
            }
            else
            {
              v32 = (int *)(a1 + 4 * v27 - 4);
              do
              {
                v31 = *v32;
                --v27;
                v30 = v32--;
              }
              while ( *(uint32_t *)(v31 + 32) > v29 );
              v26 = v27 == v83;
              if ( v27 < v83 )
                goto LABEL_60;
            }
            if ( !v26 )
            {
              *v30 = *(uint32_t *)(a1 + 4 * v28 - 4);
              *(uint32_t *)(a1 + 4 * v28 - 4) = v31;
            }
            --v27;
            v83 = v28;
            if ( v27 >= v28 )
            {
              v29 = *(uint32_t *)(v66 + 32);
              goto LABEL_73;
            }
LABEL_60:
            v85 = v27;
            if ( a2 >= v27 )
              goto LABEL_61;
            while ( 2 )
            {
              v34 = v85;
              v35 = v60;
              v67 = *(uint32_t *)(a1 + 4 * ((v85 + a2) >> 1));
              v36 = *(uint32_t *)(v67 + 32);
              while ( 2 )
              {
                v74 = v35 - 1;
                if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v35 - 4) + 32) < v36 )
                {
LABEL_88:
                  ++v35;
                  continue;
                }
                break;
              }
              v37 = (int *)(a1 + 4 * v34);
              v38 = *v37;
              if ( *(uint32_t *)(*v37 + 32) <= v36 )
              {
                v33 = v34 == v74;
                if ( v34 < v74 )
                  goto LABEL_75;
              }
              else
              {
                v39 = (int *)(a1 + 4 * v34 - 4);
                do
                {
                  v38 = *v39;
                  --v34;
                  v37 = v39--;
                }
                while ( *(uint32_t *)(v38 + 32) > v36 );
                v33 = v34 == v74;
                if ( v34 < v74 )
                  goto LABEL_75;
              }
              if ( !v33 )
              {
                *v37 = *(uint32_t *)(a1 + 4 * v35 - 4);
                *(uint32_t *)(a1 + 4 * v35 - 4) = v38;
              }
              --v34;
              v74 = v35;
              if ( v34 >= v35 )
              {
                v36 = *(uint32_t *)(v67 + 32);
                goto LABEL_88;
              }
LABEL_75:
              v86 = v34;
              if ( a2 >= v34 )
                goto LABEL_76;
              while ( 2 )
              {
                v41 = v86;
                v42 = v60;
                v68 = *(uint32_t *)(a1 + 4 * ((v86 + a2) >> 1));
                v43 = *(uint32_t *)(v68 + 32);
                while ( 2 )
                {
                  v72 = v42 - 1;
                  if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v42 - 4) + 32) < v43 )
                  {
LABEL_103:
                    ++v42;
                    continue;
                  }
                  break;
                }
                v44 = (int *)(a1 + 4 * v41);
                v45 = *v44;
                if ( *(uint32_t *)(*v44 + 32) <= v43 )
                {
                  v40 = v41 == v72;
                  if ( v41 < v72 )
                    goto LABEL_90;
                }
                else
                {
                  v46 = (int *)(a1 + 4 * v41 - 4);
                  do
                  {
                    v45 = *v46;
                    --v41;
                    v44 = v46--;
                  }
                  while ( *(uint32_t *)(v45 + 32) > v43 );
                  v40 = v41 == v72;
                  if ( v41 < v72 )
                    goto LABEL_90;
                }
                if ( !v40 )
                {
                  *v44 = *(uint32_t *)(a1 + 4 * v42 - 4);
                  *(uint32_t *)(a1 + 4 * v42 - 4) = v45;
                }
                --v41;
                v72 = v42;
                if ( v41 >= v42 )
                {
                  v43 = *(uint32_t *)(v68 + 32);
                  goto LABEL_103;
                }
LABEL_90:
                v81 = v41;
                if ( a2 >= v41 )
                  goto LABEL_91;
                while ( 2 )
                {
                  v48 = v81;
                  v49 = v60;
                  v70 = *(uint32_t *)(a1 + 4 * ((v81 + a2) >> 1));
                  v50 = *(uint32_t *)(v70 + 32);
                  while ( 2 )
                  {
                    v69 = v49 - 1;
                    if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v49 - 4) + 32) < v50 )
                    {
LABEL_118:
                      ++v49;
                      continue;
                    }
                    break;
                  }
                  v51 = (int *)(a1 + 4 * v48);
                  v52 = *v51;
                  if ( *(uint32_t *)(*v51 + 32) <= v50 )
                  {
                    v47 = v48 == v69;
                    if ( v48 < v69 )
                      goto LABEL_105;
                  }
                  else
                  {
                    v53 = (int *)(a1 + 4 * v48 - 4);
                    do
                    {
                      v52 = *v53;
                      --v48;
                      v51 = v53--;
                    }
                    while ( *(uint32_t *)(v52 + 32) > v50 );
                    v47 = v48 == v69;
                    if ( v48 < v69 )
                      goto LABEL_105;
                  }
                  if ( !v47 )
                  {
                    *v51 = *(uint32_t *)(a1 + 4 * v49 - 4);
                    *(uint32_t *)(a1 + 4 * v49 - 4) = v52;
                  }
                  --v48;
                  v69 = v49;
                  if ( v48 >= v49 )
                  {
                    v50 = *(uint32_t *)(v70 + 32);
                    goto LABEL_118;
                  }
LABEL_105:
                  v73 = v48;
                  if ( a2 >= v48 )
                    goto LABEL_106;
                  v54 = v60;
                  while ( 2 )
                  {
                    v55 = v73;
                    v71 = *(uint32_t *)(a1 + 4 * ((v73 + a2) >> 1));
                    v56 = *(uint32_t *)(v71 + 32);
                    while ( 2 )
                    {
                      v61 = v54 - 1;
                      if ( *(uint32_t *)(*(uint32_t *)(a1 + 4 * v54 - 4) + 32) < v56 )
                      {
LABEL_134:
                        ++v54;
                        continue;
                      }
                      break;
                    }
                    v57 = (int *)(a1 + 4 * v55);
                    v58 = *v57;
                    if ( *(uint32_t *)(*v57 + 32) > v56 )
                    {
                      v59 = (int *)(a1 + 4 * v55 - 4);
                      do
                      {
                        v58 = *v59;
                        --v55;
                        v57 = v59--;
                      }
                      while ( *(uint32_t *)(v58 + 32) > v56 );
                    }
                    if ( v61 <= v55 )
                    {
                      if ( v61 != v55 )
                      {
                        *v57 = *(uint32_t *)(a1 + 4 * v54 - 4);
                        *(uint32_t *)(a1 + 4 * v54 - 4) = v58;
                      }
                      --v55;
                      v61 = v54;
                      if ( v55 >= v54 )
                      {
                        v56 = *(uint32_t *)(v71 + 32);
                        goto LABEL_134;
                      }
                    }
                    if ( a2 < v55 )
                      hkAlgorithm::quickSortRecursive_1fe190(
                        a1,
                        a2,
                        v55);
                    if ( v73 > v61 )
                    {
                      a2 = v61;
                      v54 = v61 + 1;
                      continue;
                    }
                    break;
                  }
LABEL_106:
                  if ( v81 > v69 )
                  {
                    a2 = v69;
                    v60 = v69 + 1;
                    continue;
                  }
                  break;
                }
LABEL_91:
                if ( v86 > v72 )
                {
                  a2 = v72;
                  v60 = v72 + 1;
                  continue;
                }
                break;
              }
LABEL_76:
              if ( v85 > v74 )
              {
                a2 = v74;
                v60 = v74 + 1;
                continue;
              }
              break;
            }
LABEL_61:
            if ( v84 > v83 )
            {
              a2 = v83;
              v60 = v83 + 1;
              continue;
            }
            break;
          }
LABEL_46:
          if ( v77 > v82 )
          {
            a2 = v82;
            v60 = v82 + 1;
            continue;
          }
          break;
        }
LABEL_31:
        if ( v76 > v80 )
        {
          a2 = v80;
          v60 = v80 + 1;
          continue;
        }
        break;
      }
LABEL_16:
      if ( v75 > v79 )
      {
        a2 = v79;
        v60 = v79 + 1;
        continue;
      }
      break;
    }
LABEL_13:
    result = v78;
    if ( a3 > v78 )
    {
      a2 = v78;
      continue;
    }
    return result;
  }
}


// ============================================================================
// Address:   0x168e6b0 (size: 344 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN7hkgpCgo11ClusterDataENS_4lessIS2_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkgpCgo::ClusterData,hkAlgorithm::less<hkgpCgo::ClusterData>>(hkgpCgo::ClusterData *,int,int,hkAlgorithm::less<hkgpCgo::ClusterData>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_3cd30b(
        int a1,
        int a2,
        int a3)
{
  float v3; // xmm1_4
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  float v12;
  int v13;
  int v14;

  while ( 1 )
  {
    v3 = *(float *)(a1 + 12 * ((a3 + a2) >> 1));
    v4 = (uint32_t *)(a1 + 12 * a2);
    v5 = a2 + 1;
    v11 = a3;
    while ( 1 )
    {
      v10 = v5 - 1;
      if ( v3 <= *(float *)v4 )
      {
        v6 = a1 + 12 * v11;
        v7 = v6 - 12;
        if ( *(float *)v6 > v3 )
        {
          v8 = v11;
          do
          {
            v6 = v7;
            v7 -= 12;
            --v8;
          }
          while ( *(float *)(v7 + 12) > v3 );
          v11 = v8;
        }
        if ( v11 < v10 )
          break;
        if ( v11 != v10 )
        {
          v13 = *(uint32_t *)(v6 + 4);
          v12 = *(float *)v6;
          v14 = *(uint32_t *)(v6 + 8);
          *(uint32_t *)v6 = *v4;
          *(uint32_t *)(v6 + 4) = v4[1];
          *(uint32_t *)(v6 + 8) = v4[2];
          *(float *)v4 = v12;
          v4[1] = v13;
          v4[2] = v14;
        }
        --v11;
        v10 = v5;
        if ( v11 < v5 )
          break;
      }
      v4 += 3;
      ++v5;
    }
    if ( a2 < v11 )
      break;
    result = v10;
    if ( a3 <= v10 )
      return result;
LABEL_10:
    a2 = result;
  }
  hkAlgorithm::quickSortRecursive_3cd30b(a1, a2, v11);
  result = v10;
  if ( a3 > v10 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x168f0a0 (size: 1545 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIfNS_4lessIfEEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<float,hkAlgorithm::less<float>>(float *,int,int,hkAlgorithm::less<float>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_89cb11(int a1, int a2, int a3)
{
  int result;
  float v5; // xmm1_4
  int v6;
  int v7;
  float v8; // xmm2_4
  float *v9;
  float *v10;
  float i; // xmm0_4
  int j;
  int v13;
  float v14; // xmm1_4
  float v15; // xmm2_4
  float *v16;
  float *v17;
  float k; // xmm0_4
  int m;
  int v20;
  float v21; // xmm1_4
  float v22; // xmm2_4
  float *v23;
  float *v24;
  float n; // xmm0_4
  int ii;
  int v27;
  float v28; // xmm1_4
  float v29; // xmm2_4
  float *v30;
  float *v31;
  float jj; // xmm0_4
  int kk;
  int v34;
  float v35; // xmm1_4
  float v36; // xmm2_4
  float *v37;
  float *v38;
  float mm; // xmm0_4
  int nn;
  int v41;
  float v42; // xmm1_4
  float v43; // xmm2_4
  float *v44;
  float *v45;
  float i1; // xmm0_4
  int i2;
  int v48;
  float v49; // xmm1_4
  float v50; // xmm2_4
  float *v51;
  float *v52;
  float i3; // xmm0_4
  int v54;
  int i4;
  int v56;
  float v57; // xmm1_4
  float v58; // xmm2_4
  float *v59;
  float *v60;
  float i5; // xmm0_4
  int i6;
  int v63;
  float v64; // xmm1_4
  float v65; // xmm2_4
  float *v66;
  float *v67;
  float i7; // xmm0_4
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;

  result = a2;
  while ( 1 )
  {
    v5 = *(float *)(a1 + 4 * ((a3 + result) >> 1));
    v6 = a2 + 1;
    v84 = a2 + 1;
    v7 = a3;
    while ( 1 )
    {
      v8 = *(float *)(a1 + 4 * v6 - 4);
      v80 = v6 - 1;
      if ( v5 <= v8 )
      {
        v9 = (float *)(a1 + 4 * v7);
        v10 = v9 - 1;
        for ( i = *v9; i > v5; --v7 )
        {
          v9 = v10--;
          i = v10[1];
        }
        if ( v7 < v80 )
          break;
        if ( v7 != v80 )
        {
          *v9 = v8;
          *(float *)(a1 + 4 * v6 - 4) = i;
        }
        --v7;
        v80 = v6;
        if ( v7 < v6 )
          break;
      }
      ++v6;
    }
    v74 = v7;
    if ( a2 < v7 )
    {
      for ( j = a2 + 1; ; j = v79 + 1 )
      {
        v13 = v74;
        v14 = *(float *)(a1 + 4 * ((v74 + a2) >> 1));
        while ( 1 )
        {
          v15 = *(float *)(a1 + 4 * j - 4);
          v79 = j - 1;
          if ( v14 <= v15 )
          {
            v16 = (float *)(a1 + 4 * v13);
            v17 = v16 - 1;
            for ( k = *v16; k > v14; --v13 )
            {
              v16 = v17--;
              k = v17[1];
            }
            if ( v13 < v79 )
              break;
            if ( v13 != v79 )
            {
              *v16 = v15;
              *(float *)(a1 + 4 * j - 4) = k;
            }
            --v13;
            v79 = j;
            if ( v13 < j )
              break;
          }
          ++j;
        }
        v73 = v13;
        if ( a2 < v13 )
        {
          for ( m = v84; ; m = v78 + 1 )
          {
            v20 = v73;
            v21 = *(float *)(a1 + 4 * ((v73 + a2) >> 1));
            while ( 1 )
            {
              v22 = *(float *)(a1 + 4 * m - 4);
              v78 = m - 1;
              if ( v21 <= v22 )
              {
                v23 = (float *)(a1 + 4 * v20);
                v24 = v23 - 1;
                for ( n = *v23; n > v21; --v20 )
                {
                  v23 = v24--;
                  n = v24[1];
                }
                if ( v20 < v78 )
                  break;
                if ( v20 != v78 )
                {
                  *v23 = v22;
                  *(float *)(a1 + 4 * m - 4) = n;
                }
                --v20;
                v78 = m;
                if ( v20 < m )
                  break;
              }
              ++m;
            }
            v72 = v20;
            if ( a2 < v20 )
            {
              for ( ii = v84; ; ii = v76 + 1 )
              {
                v27 = v72;
                v28 = *(float *)(a1 + 4 * ((v72 + a2) >> 1));
                while ( 1 )
                {
                  v29 = *(float *)(a1 + 4 * ii - 4);
                  v76 = ii - 1;
                  if ( v28 <= v29 )
                  {
                    v30 = (float *)(a1 + 4 * v27);
                    v31 = v30 - 1;
                    for ( jj = *v30; jj > v28; --v27 )
                    {
                      v30 = v31--;
                      jj = v31[1];
                    }
                    if ( v27 < v76 )
                      break;
                    if ( v27 != v76 )
                    {
                      *v30 = v29;
                      *(float *)(a1 + 4 * ii - 4) = jj;
                    }
                    --v27;
                    v76 = ii;
                    if ( v27 < ii )
                      break;
                  }
                  ++ii;
                }
                v71 = v27;
                if ( a2 < v27 )
                {
                  for ( kk = v84; ; kk = v75 + 1 )
                  {
                    v34 = v71;
                    v35 = *(float *)(a1 + 4 * ((v71 + a2) >> 1));
                    while ( 1 )
                    {
                      v36 = *(float *)(a1 + 4 * kk - 4);
                      v75 = kk - 1;
                      if ( v35 <= v36 )
                      {
                        v37 = (float *)(a1 + 4 * v34);
                        v38 = v37 - 1;
                        for ( mm = *v37; mm > v35; --v34 )
                        {
                          v37 = v38--;
                          mm = v38[1];
                        }
                        if ( v34 < v75 )
                          break;
                        if ( v34 != v75 )
                        {
                          *v37 = v36;
                          *(float *)(a1 + 4 * kk - 4) = mm;
                        }
                        --v34;
                        v75 = kk;
                        if ( v34 < kk )
                          break;
                      }
                      ++kk;
                    }
                    v70 = v34;
                    if ( a2 < v34 )
                    {
                      for ( nn = v84; ; nn = v81 + 1 )
                      {
                        v41 = v70;
                        v42 = *(float *)(a1 + 4 * ((v70 + a2) >> 1));
                        while ( 1 )
                        {
                          v43 = *(float *)(a1 + 4 * nn - 4);
                          v81 = nn - 1;
                          if ( v42 <= v43 )
                          {
                            v44 = (float *)(a1 + 4 * v41);
                            v45 = v44 - 1;
                            for ( i1 = *v44; i1 > v42; --v41 )
                            {
                              v44 = v45--;
                              i1 = v45[1];
                            }
                            if ( v41 < v81 )
                              break;
                            if ( v41 != v81 )
                            {
                              *v44 = v43;
                              *(float *)(a1 + 4 * nn - 4) = i1;
                            }
                            --v41;
                            v81 = nn;
                            if ( v41 < nn )
                              break;
                          }
                          ++nn;
                        }
                        v69 = v41;
                        if ( a2 < v41 )
                        {
                          for ( i2 = v84; ; i2 = v82 + 1 )
                          {
                            v48 = v69;
                            v49 = *(float *)(a1 + 4 * ((v69 + a2) >> 1));
                            while ( 1 )
                            {
                              v50 = *(float *)(a1 + 4 * i2 - 4);
                              v82 = i2 - 1;
                              if ( v49 <= v50 )
                              {
                                v51 = (float *)(a1 + 4 * v48);
                                v52 = v51 - 1;
                                for ( i3 = *v51; i3 > v49; --v48 )
                                {
                                  v51 = v52--;
                                  i3 = v52[1];
                                }
                                if ( v48 < v82 )
                                  break;
                                if ( v48 != v82 )
                                {
                                  *v51 = v50;
                                  *(float *)(a1 + 4 * i2 - 4) = i3;
                                }
                                --v48;
                                v82 = i2;
                                if ( v48 < i2 )
                                  break;
                              }
                              ++i2;
                            }
                            v77 = v48;
                            if ( a2 < v48 )
                            {
                              v86 = a1;
                              v54 = a1;
                              for ( i4 = v84; ; i4 = v83 + 1 )
                              {
                                v56 = v77;
                                v57 = *(float *)(v54 + 4 * ((v77 + a2) >> 1));
                                while ( 1 )
                                {
                                  v58 = *(float *)(v54 + 4 * i4 - 4);
                                  v83 = i4 - 1;
                                  if ( v57 <= v58 )
                                  {
                                    v59 = (float *)(v54 + 4 * v56);
                                    v60 = v59 - 1;
                                    for ( i5 = *v59; i5 > v57; --v56 )
                                    {
                                      v59 = v60--;
                                      i5 = v60[1];
                                    }
                                    if ( v56 < v83 )
                                      break;
                                    if ( v56 != v83 )
                                    {
                                      *v59 = v58;
                                      *(float *)(v54 + 4 * i4 - 4) = i5;
                                    }
                                    --v56;
                                    v83 = i4;
                                    if ( v56 < i4 )
                                      break;
                                  }
                                  ++i4;
                                }
                                if ( a2 < v56 )
                                {
                                  for ( i6 = v84; ; i6 = v85 + 1 )
                                  {
                                    v63 = v56;
                                    v64 = *(float *)(v86 + 4 * ((v56 + a2) >> 1));
                                    while ( 1 )
                                    {
                                      v65 = *(float *)(v86 + 4 * i6 - 4);
                                      v85 = i6 - 1;
                                      if ( v64 <= v65 )
                                      {
                                        v66 = (float *)(v86 + 4 * v63);
                                        v67 = v66 - 1;
                                        for ( i7 = *v66; i7 > v64; --v63 )
                                        {
                                          v66 = v67--;
                                          i7 = v67[1];
                                        }
                                        if ( v63 < v85 )
                                          break;
                                        if ( v63 != v85 )
                                        {
                                          *v66 = v65;
                                          *(float *)(v86 + 4 * i6 - 4) = i7;
                                        }
                                        --v63;
                                        v85 = i6;
                                        if ( v63 < i6 )
                                          break;
                                      }
                                      ++i6;
                                    }
                                    if ( a2 < v63 )
                                      hkAlgorithm::quickSortRecursive_89cb11(v86, a2, v63);
                                    if ( v56 <= v85 )
                                      break;
                                    a2 = v85;
                                  }
                                }
                                if ( v77 <= v83 )
                                  break;
                                a2 = v83;
                                v84 = v83 + 1;
                                v54 = v86;
                              }
                              a1 = v86;
                            }
                            if ( v69 <= v82 )
                              break;
                            a2 = v82;
                            v84 = v82 + 1;
                          }
                        }
                        if ( v70 <= v81 )
                          break;
                        a2 = v81;
                        v84 = v81 + 1;
                      }
                    }
                    if ( v71 <= v75 )
                      break;
                    a2 = v75;
                    v84 = v75 + 1;
                  }
                }
                if ( v72 <= v76 )
                  break;
                a2 = v76;
                v84 = v76 + 1;
              }
            }
            if ( v73 <= v78 )
              break;
            a2 = v78;
            v84 = v78 + 1;
          }
        }
        if ( v74 <= v79 )
          break;
        a2 = v79;
        v84 = v79 + 1;
      }
    }
    result = v80;
    if ( a3 <= v80 )
      break;
    a2 = v80;
  }
  return result;
}


// ============================================================================
// Address:   0x1690478 (size: 1 bytes)
// Symbol:    nullsub_699
// Demangled: nullsub_699
// ============================================================================
void nullsub_699()
{
  ;
}


// ============================================================================
// Address:   0x16904a0 (size: 193 bytes)
// Symbol:    sub_16904A0
// Demangled: sub_16904A0
// ============================================================================
uint32_t *sub_16904A0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpCdBodyClass,
    "hkpCdBody",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpCdBody::Members,
    4,
    nullptr,
    nullptr,
    0,
    1u);
  hkpCdBodyTypeInfo[0] = (uint32_t)(uintptr_t)("hkpCdBody");
  hkpCdBodyTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpCdBody");
  hkpCdBodyTypeInfo[2] = 0;
  hkpCdBodyTypeInfo[4] = 0;
  hkpCdBodyTypeInfo[5] = 16;
  hkpCdBodyTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkpCdBodyTypeInfo;
}


// ============================================================================
// Address:   0x1690808 (size: 1 bytes)
// Symbol:    nullsub_700
// Demangled: nullsub_700
// ============================================================================
void nullsub_700()
{
  ;
}


// ============================================================================
// Address:   0x1690810 (size: 20 bytes)
// Symbol:    sub_1690810
// Demangled: sub_1690810
// ============================================================================
int sub_1690810(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1690830 (size: 45 bytes)
// Symbol:    sub_1690830
// Demangled: sub_1690830
// ============================================================================
int sub_1690830(int a1, int a2)
{
  return (int)(uintptr_t)(hkpListShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x16908a0 (size: 397 bytes)
// Symbol:    sub_16908A0
// Demangled: sub_16908A0
// ============================================================================
uint32_t *sub_16908A0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpListShapeChildInfoClass,
    "hkpListShapeChildInfo",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2099060,
    5,
    nullptr,
    nullptr,
    0,
    1u);
  hkpListShapeChildInfoTypeInfo = (uint32_t)(uintptr_t)("hkpListShapeChildInfo");
  *(uintptr_t *)(unk_2123E74) = (uintptr_t)("!hkpListShape::ChildInfo");
  *(uintptr_t *)(unk_2123E78) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123E80) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123E84) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2123E7C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpListShapeClass,
    "hkpListShape",
    (const hkClass::Self *)&hkpShapeCollectionClass,
    112,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039490,
    1,
    (const hkClassMember::Self *)&off_2098FC0,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkpListShape::Construct(&v1, 0);
  hkpListShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpListShape");
  hkpListShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1690830));
  hkpListShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1690810));
  hkpListShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpListShape");
  hkpListShapeTypeInfo[4] = v1;
  hkpListShapeTypeInfo[5] = 112;
  return hkpListShapeTypeInfo;
}


// ============================================================================
// Address:   0x1690a50 (size: 45 bytes)
// Symbol:    sub_1690A50
// Demangled: sub_1690A50
// ============================================================================
void sub_1690A50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20551F0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1690da0 (size: 96 bytes)
// Symbol:    sub_1690DA0
// Demangled: sub_1690DA0
// ============================================================================
int sub_1690DA0(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return (*(int (**)(int, int, int))(*(uint32_t *)v1 + 12))(v1, a1, v2);
}


// ============================================================================
// Address:   0x1692900 (size: 73 bytes)
// Symbol:    sub_1692900
// Demangled: sub_1692900
// ============================================================================
uint32_t *sub_1692900(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_20992C8);
  a1[2] = ((uint32_t)(uintptr_t)&off_2099300);
  a1[3] = ((uint32_t)(uintptr_t)&off_2099314);
  a1[4] = (uint32_t)(uintptr_t)(&off_2099330);
  a1[5] = ((uint32_t)(uintptr_t)&off_2099344);
  if ( a2 != 0 )
    a1[8] = 1;
  return result;
}


// ============================================================================
// Address:   0x1692950 (size: 20 bytes)
// Symbol:    sub_1692950
// Demangled: sub_1692950
// ============================================================================
int sub_1692950(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1692970 (size: 45 bytes)
// Symbol:    sub_1692970
// Demangled: sub_1692970
// ============================================================================
void sub_1692970(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2054DD0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x16929a0 (size: 45 bytes)
// Symbol:    sub_16929A0
// Demangled: sub_16929A0
// ============================================================================
void sub_16929A0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2054D80);
  operator delete(a1);
}


// ============================================================================
// Address:   0x16929d0 (size: 45 bytes)
// Symbol:    sub_16929D0
// Demangled: sub_16929D0
// ============================================================================
void sub_16929D0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2054DB0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1692a00 (size: 45 bytes)
// Symbol:    sub_1692A00
// Demangled: sub_1692A00
// ============================================================================
void sub_1692A00(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2054D98);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1692a50 (size: 200 bytes)
// Symbol:    sub_1692A50
// Demangled: sub_1692A50
// ============================================================================
uint32_t *sub_1692A50()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpNullCollisionFilterClass,
    "hkpNullCollisionFilter",
    (const hkClass::Self *)&hkpCollisionFilterClass,
    48,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpNullCollisionFilterTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpNullCollisionFilter");
  hkpNullCollisionFilterTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *, int))sub_1692900));
  hkpNullCollisionFilterTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1692950));
  hkpNullCollisionFilterTypeInfo[0] = (uint32_t)(uintptr_t)("hkpNullCollisionFilter");
  hkpNullCollisionFilterTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20992C8);
  hkpNullCollisionFilterTypeInfo[5] = 48;
  return hkpNullCollisionFilterTypeInfo;
}


// ============================================================================
// Address:   0x1692b20 (size: 20 bytes)
// Symbol:    sub_1692B20
// Demangled: sub_1692B20
// ============================================================================
int sub_1692B20(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1692b40 (size: 45 bytes)
// Symbol:    sub_1692B40
// Demangled: sub_1692B40
// ============================================================================
int sub_1692B40(int a1, int a2)
{
  return (int)(uintptr_t)(hkpTriangleShape::hkpTriangleShape(a1, a2));
}


// ============================================================================
// Address:   0x1692b90 (size: 239 bytes)
// Symbol:    sub_1692B90
// Demangled: sub_1692B90
// ============================================================================
uint32_t *sub_1692B90()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  *(uintptr_t *)(unk_20C7520) = (uintptr_t)(hkpWeldingUtilityWeldingTypeEnum[0]);
  hkClass::Construct(
    (hkClass::Self *)&hkpTriangleShapeClass,
    "hkpTriangleShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    96,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpTriangleShape::Members,
    7,
    &unk_1D15D80,
    nullptr,
    0,
    0);
  hkpTriangleShape::hkpTriangleShape(&v1, 0);
  hkpTriangleShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpTriangleShape");
  hkpTriangleShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1692B40));
  hkpTriangleShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1692B20));
  hkpTriangleShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpTriangleShape");
  hkpTriangleShapeTypeInfo[4] = v1;
  hkpTriangleShapeTypeInfo[5] = 96;
  return hkpTriangleShapeTypeInfo;
}


// ============================================================================
// Address:   0x1692c80 (size: 20 bytes)
// Symbol:    sub_1692C80
// Demangled: sub_1692C80
// ============================================================================
int sub_1692C80(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1692ca0 (size: 175 bytes)
// Symbol:    sub_1692CA0
// Demangled: sub_1692CA0
// ============================================================================
void (**sub_1692CA0(int a1, int a2))(hkpSingleShapeContainer::Self *__hidden self)
{
  void (**result)(hkpSingleShapeContainer::Self *__hidden);
  uint32_t *v3;

  hkpBvTreeShape::hkpBvTreeShape(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B0E8);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 16) = 0;
    *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B168);
    result = (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)((void (**))(uintptr_t)(((uint32_t)(uintptr_t)&off_20994E8)));
    *(uint32_t *)(a1 + 48) = ((uint32_t)(uintptr_t)&off_20994E8);
    if ( a2 == 1 )
    {
      v3 = *(uint32_t **)(a1 + 20);
      *(uint8_t *)(a1 + 8) = 9;
      *(uint32_t *)(a1 + 32) = v3[4];
      *(uint32_t *)(a1 + 36) = v3[5];
      *(uint32_t *)(a1 + 40) = v3[6];
      *(uint32_t *)(a1 + 44) = v3[7];
      *(uint32_t *)(a1 + 24) = v3[8];
      result = (void (**)(hkpSingleShapeContainer::Self *__hidden))v3[9];
      *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(result);
    }
  }
  else
  {
    *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B168);
    *(uint32_t *)(a1 + 48) = ((uint32_t)(uintptr_t)&off_20994E8);
    return (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20994E8));
  }
  return (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)(result);
}


// ============================================================================
// Address:   0x1692d90 (size: 346 bytes)
// Symbol:    sub_1692D90
// Demangled: sub_1692D90
// ============================================================================
uint32_t *sub_1692D90()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkMoppBvTreeShapeBaseClass,
    "hkMoppBvTreeShapeBase",
    (const hkClass::Self *)&hkpBvTreeShapeClass,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20991A0,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&hkpMoppBvTreeShapeClass,
    "hkpMoppBvTreeShape",
    (const hkClass::Self *)&hkMoppBvTreeShapeBaseClass,
    64,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpMoppBvTreeShape::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpBvTreeShape::hkpBvTreeShape(&v1, 0);
  hkpMoppBvTreeShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMoppBvTreeShape");
  hkpMoppBvTreeShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((void (** (*)(int, int a2))(hkpSingleShapeContainer::Self *__hidden))sub_1692CA0));
  hkpMoppBvTreeShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1692C80));
  hkpMoppBvTreeShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMoppBvTreeShape");
  hkpMoppBvTreeShapeTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209B168);
  hkpMoppBvTreeShapeTypeInfo[5] = 64;
  return hkpMoppBvTreeShapeTypeInfo;
}


// ============================================================================
// Address:   0x1693288 (size: 1 bytes)
// Symbol:    nullsub_701
// Demangled: nullsub_701
// ============================================================================
void nullsub_701()
{
  ;
}


// ============================================================================
// Address:   0x16932b0 (size: 193 bytes)
// Symbol:    sub_16932B0
// Demangled: sub_16932B0
// ============================================================================
uint32_t *sub_16932B0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpMeshMaterialClass,
    "hkpMeshMaterial",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20394B4,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpMeshMaterialTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMeshMaterial");
  hkpMeshMaterialTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMeshMaterial");
  hkpMeshMaterialTypeInfo[2] = 0;
  hkpMeshMaterialTypeInfo[4] = 0;
  hkpMeshMaterialTypeInfo[5] = 4;
  hkpMeshMaterialTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkpMeshMaterialTypeInfo;
}


// ============================================================================
// Address:   0x1693380 (size: 20 bytes)
// Symbol:    sub_1693380
// Demangled: sub_1693380
// ============================================================================
int sub_1693380(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16933a0 (size: 45 bytes)
// Symbol:    sub_16933A0
// Demangled: sub_16933A0
// ============================================================================
int sub_16933A0(int a1, int a2)
{
  return (int)(uintptr_t)(hkpMultiSphereShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x16933f0 (size: 226 bytes)
// Symbol:    sub_16933F0
// Demangled: sub_16933F0
// ============================================================================
uint32_t *sub_16933F0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpMultiSphereShapeClass,
    "hkpMultiSphereShape",
    (const hkClass::Self *)&hkpSphereRepShapeClass,
    160,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpMultiSphereShape::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpMultiSphereShape::Construct(&v1, 0);
  hkpMultiSphereShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMultiSphereShape");
  hkpMultiSphereShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_16933A0));
  hkpMultiSphereShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1693380));
  hkpMultiSphereShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMultiSphereShape");
  hkpMultiSphereShapeTypeInfo[4] = v1;
  hkpMultiSphereShapeTypeInfo[5] = 160;
  return hkpMultiSphereShapeTypeInfo;
}


// ============================================================================
// Address:   0x16934f0 (size: 7 bytes)
// Symbol:    _ZThn8_NK22hkpNullCollisionFilter18isCollisionEnabledERK13hkpCollidableS2_
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// ============================================================================
static hkpNullCollisionFilter::Self *g4_thunk_24(
        hkpNullCollisionFilter::Self *self,
        const hkpCollidable::Self *a2,
        const hkpCollidable::Self *a3)
{
  return hkpNullCollisionFilter::isCollisionEnabled(self, (const hkpCollidable::Self *)((char *)a2 - 8), a3);
}


// ============================================================================
// Address:   0x1693510 (size: 7 bytes)
// Symbol:    _ZThn12_NK22hkpNullCollisionFilter18isCollisionEnabledERK17hkpCollisionInputRK9hkpCdBodyS5_RK17hkpShapeContainerj
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// ============================================================================
static uint8_t *g4_thunk_25(uint8_t *a1)
{
  return hkpNullCollisionFilter::isCollisionEnabled(a1);
}


// ============================================================================
// Address:   0x1693530 (size: 7 bytes)
// Symbol:    _ZThn12_NK22hkpNullCollisionFilter18isCollisionEnabledERK17hkpCollisionInputRK9hkpCdBodyS5_RK17hkpShapeContainerS8_jj
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// ============================================================================
static uint8_t *g4_thunk_26(uint8_t *a1)
{
  return hkpNullCollisionFilter::isCollisionEnabled(a1);
}


// ============================================================================
// Address:   0x1693550 (size: 7 bytes)
// Symbol:    _ZThn16_NK22hkpNullCollisionFilter18isCollisionEnabledERK20hkpShapeRayCastInputRK17hkpShapeContainerj
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// ============================================================================
static uint8_t *g4_thunk_27(uint8_t *a1)
{
  return hkpNullCollisionFilter::isCollisionEnabled(a1);
}


// ============================================================================
// Address:   0x1693570 (size: 7 bytes)
// Symbol:    _ZThn20_NK22hkpNullCollisionFilter18isCollisionEnabledERK20hkpWorldRayCastInputRK13hkpCollidable
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// ============================================================================
static uint8_t *g4_thunk_28(uint8_t *a1)
{
  return hkpNullCollisionFilter::isCollisionEnabled(a1);
}


// ============================================================================
// Address:   0x16935d0 (size: 10 bytes)
// Symbol:    _ZThn8_N22hkpNullCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_29(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16935e0 (size: 10 bytes)
// Symbol:    _ZThn12_N22hkpNullCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_30(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 12));
}


// ============================================================================
// Address:   0x16935f0 (size: 10 bytes)
// Symbol:    _ZThn16_N22hkpNullCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_31(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1693600 (size: 10 bytes)
// Symbol:    _ZThn20_N22hkpNullCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_32(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 20));
}


// ============================================================================
// Address:   0x1693670 (size: 10 bytes)
// Symbol:    _ZThn8_N22hkpNullCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_33(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x1693680 (size: 10 bytes)
// Symbol:    _ZThn12_N22hkpNullCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_34(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 12));
}


// ============================================================================
// Address:   0x1693690 (size: 10 bytes)
// Symbol:    _ZThn16_N22hkpNullCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_35(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16936a0 (size: 10 bytes)
// Symbol:    _ZThn20_N22hkpNullCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpNullCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_36(hkpNullCollisionFilter::Self *self)
{
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)((char *)self - 20));
}


// ============================================================================
// Address:   0x16936b0 (size: 20 bytes)
// Symbol:    sub_16936B0
// Demangled: sub_16936B0
// ============================================================================
int sub_16936B0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16936d0 (size: 63 bytes)
// Symbol:    sub_16936D0
// Demangled: sub_16936D0
// ============================================================================
int (**sub_16936D0(int a1, int a2))(int)
{
  hkpShape::hkpShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 29;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20552A8);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20552A8));
}


// ============================================================================
// Address:   0x1693730 (size: 226 bytes)
// Symbol:    sub_1693730
// Demangled: sub_1693730
// ============================================================================
uint32_t *sub_1693730()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpSphereRepShapeClass,
    "hkpSphereRepShape",
    (const hkClass::Self *)&hkpShapeClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpShape::hkpShape(&v1, 0);
  hkpSphereRepShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpSphereRepShape");
  hkpSphereRepShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (** (*)(int, int a2))(int))sub_16936D0));
  hkpSphereRepShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16936B0));
  hkpSphereRepShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpSphereRepShape");
  hkpSphereRepShapeTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20552A8);
  hkpSphereRepShapeTypeInfo[5] = 16;
  return hkpSphereRepShapeTypeInfo;
}


// ============================================================================
// Address:   0x1693820 (size: 20 bytes)
// Symbol:    sub_1693820
// Demangled: sub_1693820
// ============================================================================
int sub_1693820(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1693840 (size: 45 bytes)
// Symbol:    sub_1693840
// Demangled: sub_1693840
// ============================================================================
int sub_1693840(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConvexVerticesShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x1693890 (size: 228 bytes)
// Symbol:    sub_1693890
// Demangled: sub_1693890
// ============================================================================
uint32_t *sub_1693890()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpConvexVerticesShapeClass,
    "hkpConvexVerticesShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2099360,
    7,
    &unk_1D15DCC,
    nullptr,
    0,
    6u);
  hkpConvexVerticesShape::Construct(&v1, 0);
  hkpConvexVerticesShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConvexVerticesShape");
  hkpConvexVerticesShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1693840));
  hkpConvexVerticesShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1693820));
  hkpConvexVerticesShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConvexVerticesShape");
  hkpConvexVerticesShapeTypeInfo[4] = v1;
  hkpConvexVerticesShapeTypeInfo[5] = 112;
  return hkpConvexVerticesShapeTypeInfo;
}


// ============================================================================
// Address:   0x16939a0 (size: 162 bytes)
// Symbol:    sub_16939A0
// Demangled: sub_16939A0
// ============================================================================
void sub_16939A0()
{
  dword_20C75E0 = (int)hkpCollisionFilterhkpFilterTypeEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkpCollisionFilterClass,
    "hkpCollisionFilter",
    (const hkClass::Self *)&hkReferencedObjectClass,
    48,
    nullptr,
    4,
    (const hkClassEnum::Self *)&off_2039520,
    1,
    (const hkClassMember::Self *)&off_20C75C0,
    3,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x1693a50 (size: 20 bytes)
// Symbol:    sub_1693A50
// Demangled: sub_1693A50
// ============================================================================
int sub_1693A50(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1693a70 (size: 45 bytes)
// Symbol:    sub_1693A70
// Demangled: sub_1693A70
// ============================================================================
int sub_1693A70(int a1, int a2)
{
  return (int)(uintptr_t)(hkpCapsuleShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x1693ac0 (size: 225 bytes)
// Symbol:    sub_1693AC0
// Demangled: sub_1693AC0
// ============================================================================
uint32_t *sub_1693AC0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpCapsuleShapeClass,
    "hkpCapsuleShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    64,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039580,
    1,
    (const hkClassMember::Self *)&hkpCapsuleShape::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpCapsuleShape::Construct(&v1, 0);
  hkpCapsuleShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpCapsuleShape");
  hkpCapsuleShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1693A70));
  hkpCapsuleShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1693A50));
  hkpCapsuleShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpCapsuleShape");
  hkpCapsuleShapeTypeInfo[4] = v1;
  hkpCapsuleShapeTypeInfo[5] = 64;
  return hkpCapsuleShapeTypeInfo;
}


// ============================================================================
// Address:   0x1693bd0 (size: 142 bytes)
// Symbol:    sub_1693BD0
// Demangled: sub_1693BD0
// ============================================================================
void sub_1693BD0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpRayCollidableFilterClass,
    "hkpRayCollidableFilter",
    nullptr,
    4,
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x16968e0 (size: 73 bytes)
// Symbol:    sub_16968E0
// Demangled: sub_16968E0
// ============================================================================
uint32_t *sub_16968E0(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_209A1A8);
  a1[2] = ((uint32_t)(uintptr_t)&off_209A1E4);
  a1[3] = ((uint32_t)(uintptr_t)&off_209A1F8);
  a1[4] = (uint32_t)(uintptr_t)(&off_209A214);
  a1[5] = ((uint32_t)(uintptr_t)&off_209A228);
  if ( a2 != 0 )
    a1[8] = 2;
  return result;
}


// ============================================================================
// Address:   0x1696930 (size: 20 bytes)
// Symbol:    sub_1696930
// Demangled: sub_1696930
// ============================================================================
int sub_1696930(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1696970 (size: 202 bytes)
// Symbol:    sub_1696970
// Demangled: sub_1696970
// ============================================================================
uint32_t *sub_1696970()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpGroupFilterClass,
    "hkpGroupFilter",
    (const hkClass::Self *)&hkpCollisionFilterClass,
    256,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039600,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkpGroupFilterTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpGroupFilter");
  hkpGroupFilterTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *, int))sub_16968E0));
  hkpGroupFilterTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1696930));
  hkpGroupFilterTypeInfo[0] = (uint32_t)(uintptr_t)("hkpGroupFilter");
  hkpGroupFilterTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209A1A8);
  hkpGroupFilterTypeInfo[5] = 256;
  return hkpGroupFilterTypeInfo;
}


// ============================================================================
// Address:   0x1696a40 (size: 20 bytes)
// Symbol:    sub_1696A40
// Demangled: sub_1696A40
// ============================================================================
int sub_1696A40(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1696a60 (size: 45 bytes)
// Symbol:    sub_1696A60
// Demangled: sub_1696A60
// ============================================================================
int sub_1696A60(int a1, int a2)
{
  return (int)(uintptr_t)(hkpBoxShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x1696ab0 (size: 223 bytes)
// Symbol:    sub_1696AB0
// Demangled: sub_1696AB0
// ============================================================================
uint32_t *sub_1696AB0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpBoxShapeClass,
    "hkpBoxShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpBoxShape::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpBoxShape::Construct(&v1, 0);
  hkpBoxShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpBoxShape");
  hkpBoxShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1696A60));
  hkpBoxShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1696A40));
  hkpBoxShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpBoxShape");
  hkpBoxShapeTypeInfo[4] = v1;
  hkpBoxShapeTypeInfo[5] = 48;
  return hkpBoxShapeTypeInfo;
}


// ============================================================================
// Address:   0x1696bb0 (size: 164 bytes)
// Symbol:    sub_1696BB0
// Demangled: sub_1696BB0
// ============================================================================
void sub_1696BB0()
{
  dword_20C7658 = (int)hkpBvTreeShapeBvTreeTypeEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkpBvTreeShapeClass,
    "hkpBvTreeShape",
    (const hkClass::Self *)&hkpShapeClass,
    20,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039660,
    1,
    (const hkClassMember::Self *)&off_20C7650,
    1,
    &unk_1D15DFC,
    nullptr,
    0,
    1u);
}


// ============================================================================
// Address:   0x1696ea0 (size: 20 bytes)
// Symbol:    sub_1696EA0
// Demangled: sub_1696EA0
// ============================================================================
int sub_1696EA0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1696ec0 (size: 45 bytes)
// Symbol:    sub_1696EC0
// Demangled: sub_1696EC0
// ============================================================================
int sub_1696EC0(int a1, int a2)
{
  return (int)(uintptr_t)(hkpShape::hkpShape(a1, a2));
}


// ============================================================================
// Address:   0x1696f10 (size: 223 bytes)
// Symbol:    sub_1696F10
// Demangled: sub_1696F10
// ============================================================================
uint32_t *sub_1696F10()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpShapeClass,
    "hkpShape",
    (const hkClass::Self *)&hkpShapeBaseClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20396B0,
    1,
    nullptr,
    nullptr,
    0,
    1u);
  hkpShape::hkpShape(&v1, 0);
  hkpShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpShape");
  hkpShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1696EC0));
  hkpShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1696EA0));
  hkpShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpShape");
  hkpShapeTypeInfo[4] = v1;
  hkpShapeTypeInfo[5] = 16;
  return hkpShapeTypeInfo;
}


// ============================================================================
// Address:   0x1697240 (size: 37 bytes)
// Symbol:    sub_1697240
// Demangled: sub_1697240
// ============================================================================
uint32_t *sub_1697240(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209A288);
  a1[2] = ((uint32_t)(uintptr_t)&off_209A2AC);
  return a1;
}


// ============================================================================
// Address:   0x1697270 (size: 20 bytes)
// Symbol:    sub_1697270
// Demangled: sub_1697270
// ============================================================================
int sub_1697270(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16972e0 (size: 202 bytes)
// Symbol:    sub_16972E0
// Demangled: sub_16972E0
// ============================================================================
uint32_t *sub_16972E0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpRemoveTerminalsMoppModifierClass,
    "hkpRemoveTerminalsMoppModifier",
    (const hkClass::Self *)&hkReferencedObjectClass,
    28,
    nullptr,
    1,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpRemoveTerminalsMoppModifier::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpRemoveTerminalsMoppModifierTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpRemoveTerminalsMoppModifier");
  hkpRemoveTerminalsMoppModifierTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *))sub_1697240));
  hkpRemoveTerminalsMoppModifierTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1697270));
  hkpRemoveTerminalsMoppModifierTypeInfo[0] = (uint32_t)(uintptr_t)("hkpRemoveTerminalsMoppModifier");
  hkpRemoveTerminalsMoppModifierTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209A288);
  hkpRemoveTerminalsMoppModifierTypeInfo[5] = 28;
  return hkpRemoveTerminalsMoppModifierTypeInfo;
}


// ============================================================================
// Address:   0x16973b0 (size: 29 bytes)
// Symbol:    sub_16973B0
// Demangled: sub_16973B0
// ============================================================================
uint32_t *sub_16973B0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20995E8);
  return a1;
}


// ============================================================================
// Address:   0x16973d0 (size: 20 bytes)
// Symbol:    sub_16973D0
// Demangled: sub_16973D0
// ============================================================================
int sub_16973D0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16976a0 (size: 202 bytes)
// Symbol:    sub_16976A0
// Demangled: sub_16976A0
// ============================================================================
uint32_t *sub_16976A0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpShapeInfoClass,
    "hkpShapeInfo",
    (const hkClass::Self *)&hkReferencedObjectClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2099540,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkpShapeInfoTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpShapeInfo");
  hkpShapeInfoTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *))sub_16973B0));
  hkpShapeInfoTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16973D0));
  hkpShapeInfoTypeInfo[0] = (uint32_t)(uintptr_t)("hkpShapeInfo");
  hkpShapeInfoTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20995E8);
  hkpShapeInfoTypeInfo[5] = 112;
  return hkpShapeInfoTypeInfo;
}


// ============================================================================
// Address:   0x1698ed8 (size: 1 bytes)
// Symbol:    nullsub_702
// Demangled: nullsub_702
// ============================================================================
void nullsub_702()
{
  ;
}


// ============================================================================
// Address:   0x1698f00 (size: 193 bytes)
// Symbol:    sub_1698F00
// Demangled: sub_1698F00
// ============================================================================
uint32_t *sub_1698F00()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpWeldingUtilityClass,
    "hkpWeldingUtility",
    nullptr,
    1,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039720,
    3,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpWeldingUtilityTypeInfo[0] = (uint32_t)(uintptr_t)("hkpWeldingUtility");
  hkpWeldingUtilityTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpWeldingUtility");
  hkpWeldingUtilityTypeInfo[2] = 0;
  hkpWeldingUtilityTypeInfo[4] = 0;
  hkpWeldingUtilityTypeInfo[5] = 1;
  hkpWeldingUtilityTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkpWeldingUtilityTypeInfo;
}


// ============================================================================
// Address:   0x1698fd8 (size: 1 bytes)
// Symbol:    nullsub_703
// Demangled: nullsub_703
// ============================================================================
void nullsub_703()
{
  ;
}


// ============================================================================
// Address:   0x1698fe8 (size: 1 bytes)
// Symbol:    nullsub_704
// Demangled: nullsub_704
// ============================================================================
void nullsub_704()
{
  ;
}


// ============================================================================
// Address:   0x1699010 (size: 195 bytes)
// Symbol:    sub_1699010
// Demangled: sub_1699010
// ============================================================================
uint32_t *sub_1699010()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpBroadPhaseHandleClass,
    "hkpBroadPhaseHandle",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20397E0,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpBroadPhaseHandleTypeInfo[0] = (uint32_t)(uintptr_t)("hkpBroadPhaseHandle");
  hkpBroadPhaseHandleTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpBroadPhaseHandle");
  hkpBroadPhaseHandleTypeInfo[4] = 0;
  hkpBroadPhaseHandleTypeInfo[5] = 4;
  hkpBroadPhaseHandleTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkpBroadPhaseHandleTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkpBroadPhaseHandleTypeInfo;
}


// ============================================================================
// Address:   0x1699840 (size: 164 bytes)
// Symbol:    sub_1699840
// Demangled: sub_1699840
// ============================================================================
void sub_1699840()
{
  dword_20C76A0 = (int)hkpShapeCollectionCollectionTypeEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkpShapeCollectionClass,
    "hkpShapeCollection",
    (const hkClass::Self *)&hkpShapeClass,
    24,
    nullptr,
    1,
    (const hkClassEnum::Self *)&off_2039800,
    1,
    (const hkClassMember::Self *)&off_20C7680,
    2,
    &unk_1D15E70,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x16998f0 (size: 37 bytes)
// Symbol:    sub_16998F0
// Demangled: sub_16998F0
// ============================================================================
void sub_16998F0(int a1)
{
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 4));
}


// ============================================================================
// Address:   0x1699920 (size: 48 bytes)
// Symbol:    sub_1699920
// Demangled: sub_1699920
// ============================================================================
void sub_1699920()
{
  hkStringPtr::Construct();
}


// ============================================================================
// Address:   0x1699970 (size: 197 bytes)
// Symbol:    sub_1699970
// Demangled: sub_1699970
// ============================================================================
uint32_t *sub_1699970()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpNamedMeshMaterialClass,
    "hkpNamedMeshMaterial",
    (const hkClass::Self *)&hkpMeshMaterialClass,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039860,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpNamedMeshMaterialTypeInfo[0] = (uint32_t)(uintptr_t)("hkpNamedMeshMaterial");
  hkpNamedMeshMaterialTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpNamedMeshMaterial");
  hkpNamedMeshMaterialTypeInfo[4] = 0;
  hkpNamedMeshMaterialTypeInfo[5] = 8;
  hkpNamedMeshMaterialTypeInfo[2] = (uint32_t)(uintptr_t)(((void (*)(void))sub_1699920));
  hkpNamedMeshMaterialTypeInfo[3] = (uint32_t)(uintptr_t)(((void (*)(int))sub_16998F0));
  return hkpNamedMeshMaterialTypeInfo;
}


// ============================================================================
// Address:   0x1699a40 (size: 20 bytes)
// Symbol:    sub_1699A40
// Demangled: sub_1699A40
// ============================================================================
int sub_1699A40(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1699a60 (size: 45 bytes)
// Symbol:    sub_1699A60
// Demangled: sub_1699A60
// ============================================================================
void (**sub_1699A60(int a1, int a2))(hkpSphereShape::Self *__hidden self)
{
  return hkpSphereShape::Construct(a1, a2);
}


// ============================================================================
// Address:   0x1699ab0 (size: 223 bytes)
// Symbol:    sub_1699AB0
// Demangled: sub_1699AB0
// ============================================================================
uint32_t *sub_1699AB0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpSphereShapeClass,
    "hkpSphereShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039878,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpSphereShape::Construct((int)(uintptr_t)(&v1), 0);
  hkpSphereShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpSphereShape");
  hkpSphereShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((void (** (*)(int, int a2))(hkpSphereShape::Self *__hidden))sub_1699A60));
  hkpSphereShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1699A40));
  hkpSphereShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpSphereShape");
  hkpSphereShapeTypeInfo[4] = v1;
  hkpSphereShapeTypeInfo[5] = 32;
  return hkpSphereShapeTypeInfo;
}


// ============================================================================
// Address:   0x1699b98 (size: 1 bytes)
// Symbol:    nullsub_705
// Demangled: nullsub_705
// ============================================================================
void nullsub_705()
{
  ;
}


// ============================================================================
// Address:   0x1699ba0 (size: 20 bytes)
// Symbol:    sub_1699BA0
// Demangled: sub_1699BA0
// ============================================================================
int sub_1699BA0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1699bc0 (size: 20 bytes)
// Symbol:    sub_1699BC0
// Demangled: sub_1699BC0
// ============================================================================
int sub_1699BC0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1699be0 (size: 20 bytes)
// Symbol:    sub_1699BE0
// Demangled: sub_1699BE0
// ============================================================================
int sub_1699BE0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1699c00 (size: 45 bytes)
// Symbol:    sub_1699C00
// Demangled: sub_1699C00
// ============================================================================
int sub_1699C00(int a1, int a2)
{
  return ((hkpStorageExtendedMeshShape::Construct((uint32_t *)(uintptr_t)(a1), (uint32_t *)(uintptr_t)(a2))), (int)0);
}


// ============================================================================
// Address:   0x1699c30 (size: 45 bytes)
// Symbol:    sub_1699C30
// Demangled: sub_1699C30
// ============================================================================
int sub_1699C30(int a1)
{
  return (int)(uintptr_t)(hkpStorageExtendedMeshShape::ShapeSubpartStorage::Construct(a1));
}


// ============================================================================
// Address:   0x1699c60 (size: 45 bytes)
// Symbol:    sub_1699C60
// Demangled: sub_1699C60
// ============================================================================
int sub_1699C60(int a1)
{
  return (int)(uintptr_t)(hkpStorageExtendedMeshShape::MeshSubpartStorage::Construct(a1));
}


// ============================================================================
// Address:   0x1699c90 (size: 777 bytes)
// Symbol:    sub_1699C90
// Demangled: sub_1699C90
// ============================================================================
uint32_t *sub_1699C90()
{
  uint32_t v1[71];

  hkClass::Construct(
    (hkClass::Self *)&hkpStorageExtendedMeshShapeMaterialClass,
    "hkpStorageExtendedMeshShapeMaterial",
    (const hkClass::Self *)&hkpMeshMaterialClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20398A0,
    3,
    nullptr,
    nullptr,
    0,
    1u);
  hkpStorageExtendedMeshShapeMaterialTypeInfo = (uint32_t)(uintptr_t)("hkpStorageExtendedMeshShapeMaterial");
  *(uintptr_t *)(unk_2124794) = (uintptr_t)("!hkpStorageExtendedMeshShape::Material");
  *(uintptr_t *)(unk_2124798) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21247A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21247A4) = (uintptr_t)(12);
  *(uintptr_t *)(unk_212479C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpStorageExtendedMeshShapeMeshSubpartStorageClass,
    "hkpStorageExtendedMeshShapeMeshSubpartStorage",
    (const hkClass::Self *)&hkReferencedObjectClass,
    104,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2099760,
    8,
    nullptr,
    nullptr,
    0,
    3u);
  hkpStorageExtendedMeshShape::MeshSubpartStorage::Construct(v1);
  *(uintptr_t *)(unk_2124734) = (uintptr_t)("!hkpStorageExtendedMeshShape::MeshSubpartStorage");
  *(uintptr_t *)(unk_2124738) = (uintptr_t)(((int (*)(int))sub_1699C60));
  *(uintptr_t *)(unk_212473C) = (uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1699BA0));
  *(uintptr_t *)(unk_2124740) = (uintptr_t)(v1[0]);
  hkpStorageExtendedMeshShapeMeshSubpartStorageTypeInfo = (uint32_t)(uintptr_t)("hkpStorageExtendedMeshShapeMeshSubpartStorage");
  *(uintptr_t *)(unk_2124744) = (uintptr_t)(104);
  hkClass::Construct(
    (hkClass::Self *)&hkpStorageExtendedMeshShapeShapeSubpartStorageClass,
    "hkpStorageExtendedMeshShapeShapeSubpartStorage",
    (const hkClass::Self *)&hkReferencedObjectClass,
    44,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2099700,
    3,
    nullptr,
    nullptr,
    0,
    2u);
  hkpStorageExtendedMeshShape::ShapeSubpartStorage::Construct(v1);
  *(uintptr_t *)(unk_21246D4) = (uintptr_t)("!hkpStorageExtendedMeshShape::ShapeSubpartStorage");
  *(uintptr_t *)(unk_21246D8) = (uintptr_t)(((int (*)(int))sub_1699C30));
  *(uintptr_t *)(unk_21246DC) = (uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1699BC0));
  *(uintptr_t *)(unk_21246E0) = (uintptr_t)(v1[0]);
  hkpStorageExtendedMeshShapeShapeSubpartStorageTypeInfo = (uint32_t)(uintptr_t)("hkpStorageExtendedMeshShapeShapeSubpartStorage");
  *(uintptr_t *)(unk_21246E4) = (uintptr_t)(44);
  hkClass::Construct(
    (hkClass::Self *)&hkpStorageExtendedMeshShapeClass,
    "hkpStorageExtendedMeshShape",
    (const hkClass::Self *)&hkpExtendedMeshShapeClass,
    272,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpStorageExtendedMeshShape::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpStorageExtendedMeshShape::Construct((uint32_t *)(v1), (uint32_t *)(uintptr_t)(0));
  hkpStorageExtendedMeshShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpStorageExtendedMeshShape");
  hkpStorageExtendedMeshShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1699C00));
  hkpStorageExtendedMeshShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1699BE0));
  hkpStorageExtendedMeshShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpStorageExtendedMeshShape");
  hkpStorageExtendedMeshShapeTypeInfo[4] = v1[0];
  hkpStorageExtendedMeshShapeTypeInfo[5] = 272;
  return hkpStorageExtendedMeshShapeTypeInfo;
}


// ============================================================================
// Address:   0x169a070 (size: 268 bytes)
// Symbol:    sub_169A070
// Demangled: sub_169A070
// ============================================================================
void sub_169A070()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpConvexShapeClass,
    "hkpConvexShape",
    (const hkClass::Self *)&hkpSphereRepShapeClass,
    20,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20398E8,
    1,
    (const hkClassMember::Self *)&hkpConvexShape::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&hkpConvexTransformShapeBaseClass,
    "hkpConvexTransformShapeBase",
    (const hkClass::Self *)&hkpConvexShapeClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpConvexTransformShapeBase::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x169a1a0 (size: 142 bytes)
// Symbol:    sub_169A1A0
// Demangled: sub_169A1A0
// ============================================================================
void sub_169A1A0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpRayShapeCollectionFilterClass,
    "hkpRayShapeCollectionFilter",
    nullptr,
    4,
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x169a390 (size: 78 bytes)
// Symbol:    sub_169A390
// Demangled: sub_169A390
// ============================================================================
int sub_169A390(uint32_t *a1)
{
  int address;

  *a1 = ((uint32_t)(uintptr_t)&off_2055250);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a1,
           8);
}


// ============================================================================
// Address:   0x169a400 (size: 142 bytes)
// Symbol:    sub_169A400
// Demangled: sub_169A400
// ============================================================================
void sub_169A400()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpShapeCollectionFilterClass,
    "hkpShapeCollectionFilter",
    nullptr,
    4,
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x169a4b0 (size: 45 bytes)
// Symbol:    sub_169A4B0
// Demangled: sub_169A4B0
// ============================================================================
void sub_169A4B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2055238);
  operator delete(a1);
}


// ============================================================================
// Address:   0x169ac68 (size: 1 bytes)
// Symbol:    nullsub_706
// Demangled: nullsub_706
// ============================================================================
void nullsub_706()
{
  ;
}


// ============================================================================
// Address:   0x169ac70 (size: 20 bytes)
// Symbol:    sub_169AC70
// Demangled: sub_169AC70
// ============================================================================
int sub_169AC70(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x169ac90 (size: 45 bytes)
// Symbol:    sub_169AC90
// Demangled: sub_169AC90
// ============================================================================
int sub_169AC90(int a1, int a2)
{
  return (int)(uintptr_t)(hkpMultiRayShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x169ad00 (size: 392 bytes)
// Symbol:    sub_169AD00
// Demangled: sub_169AD00
// ============================================================================
uint32_t *sub_169AD00()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpMultiRayShapeRayClass,
    "hkpMultiRayShapeRay",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039940,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpMultiRayShapeRayTypeInfo = (uint32_t)(uintptr_t)("hkpMultiRayShapeRay");
  *(uintptr_t *)(unk_2124954) = (uintptr_t)("!hkpMultiRayShape::Ray");
  *(uintptr_t *)(unk_2124958) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2124960) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2124964) = (uintptr_t)(32);
  *(uintptr_t *)(unk_212495C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpMultiRayShapeClass,
    "hkpMultiRayShape",
    (const hkClass::Self *)&hkpShapeClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpMultiRayShape::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpMultiRayShape::Construct(&v1, 0);
  hkpMultiRayShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMultiRayShape");
  hkpMultiRayShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_169AC90));
  hkpMultiRayShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_169AC70));
  hkpMultiRayShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMultiRayShape");
  hkpMultiRayShapeTypeInfo[4] = v1;
  hkpMultiRayShapeTypeInfo[5] = 32;
  return hkpMultiRayShapeTypeInfo;
}


// ============================================================================
// Address:   0x169aea0 (size: 10 bytes)
// Symbol:    _ZThn12_NK18hkpCollisionFilter28numShapeKeyHitsLimitBreachedERK17hkpCollisionInputRK9hkpCdBodyS5_PK14hkpBvTreeShapeR6hkAabbPji
// Demangled: `non-virtual thunk to'hkpCollisionFilter::numShapeKeyHitsLimitBreached(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpBvTreeShape const*,hkAabb::Self &,unsigned int *,int)const
// ============================================================================
static int g4_thunk_37(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return hkpCollisionFilter::numShapeKeyHitsLimitBreached(a1 - 12, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================================
// Address:   0x169af00 (size: 10 bytes)
// Symbol:    _ZThn20_N18hkpCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_38(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 20));
}


// ============================================================================
// Address:   0x169af10 (size: 10 bytes)
// Symbol:    _ZThn16_N18hkpCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_39(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x169af20 (size: 10 bytes)
// Symbol:    _ZThn12_N18hkpCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_40(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 12));
}


// ============================================================================
// Address:   0x169af30 (size: 10 bytes)
// Symbol:    _ZThn8_N18hkpCollisionFilterD1Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_41(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x169afd0 (size: 10 bytes)
// Symbol:    _ZThn20_N18hkpCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_42(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 20));
}


// ============================================================================
// Address:   0x169afe0 (size: 10 bytes)
// Symbol:    _ZThn16_N18hkpCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_43(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x169aff0 (size: 10 bytes)
// Symbol:    _ZThn12_N18hkpCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_44(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 12));
}


// ============================================================================
// Address:   0x169b000 (size: 10 bytes)
// Symbol:    _ZThn8_N18hkpCollisionFilterD0Ev
// Demangled: `non-virtual thunk to'hkpCollisionFilter::Destroy()
// ============================================================================
static void g4_thunk_45(hkpCollisionFilter::Self *self)
{
  hkpCollisionFilter::Destroy((hkpCollisionFilter::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x169b080 (size: 144 bytes)
// Symbol:    sub_169B080
// Demangled: sub_169B080
// ============================================================================
void sub_169B080()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpPhantomCallbackShapeClass,
    "hkpPhantomCallbackShape",
    (const hkClass::Self *)&hkpShapeClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x169b110 (size: 78 bytes)
// Symbol:    sub_169B110
// Demangled: sub_169B110
// ============================================================================
int sub_169B110(int a1, int a2)
{
  int result;

  result = a1;
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 64) = 0;
    *(uint16_t *)(a1 + 66) = 0;
    *(uint32_t *)(a1 + 68) = 0;
    *(uint32_t *)(a1 + 72) = 0;
    *(uint32_t *)(a1 + 32) = 1;
    *(uint32_t *)(a1 + 48) = 0;
    *(uint8_t *)(a1 + 25) = -20;
  }
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0x80000000;
  return result;
}


// ============================================================================
// Address:   0x169b160 (size: 84 bytes)
// Symbol:    sub_169B160
// Demangled: sub_169B160
// ============================================================================
int sub_169B160(uint32_t *a1)
{
  int result;

  result = a1[22];
  a1[21] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a1[20],
               8 * result);
  a1[20] = 0;
  a1[22] = 0x80000000;
  return result;
}


// ============================================================================
// Address:   0x169b1e0 (size: 197 bytes)
// Symbol:    sub_169B1E0
// Demangled: sub_169B1E0
// ============================================================================
uint32_t *sub_169B1E0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpLinkedCollidableClass,
    "hkpLinkedCollidable",
    (const hkClass::Self *)&hkpCollidableClass,
    92,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpLinkedCollidable::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpLinkedCollidableTypeInfo[0] = (uint32_t)(uintptr_t)("hkpLinkedCollidable");
  hkpLinkedCollidableTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpLinkedCollidable");
  hkpLinkedCollidableTypeInfo[4] = 0;
  hkpLinkedCollidableTypeInfo[5] = 92;
  hkpLinkedCollidableTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_169B110));
  hkpLinkedCollidableTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(uint32_t *))sub_169B160));
  return hkpLinkedCollidableTypeInfo;
}


// ============================================================================
// Address:   0x169b2b8 (size: 1 bytes)
// Symbol:    nullsub_707
// Demangled: nullsub_707
// ============================================================================
void nullsub_707()
{
  ;
}


// ============================================================================
// Address:   0x169b2c8 (size: 1 bytes)
// Symbol:    nullsub_708
// Demangled: nullsub_708
// ============================================================================
void nullsub_708()
{
  ;
}


// ============================================================================
// Address:   0x169b2d8 (size: 1 bytes)
// Symbol:    nullsub_709
// Demangled: nullsub_709
// ============================================================================
void nullsub_709()
{
  ;
}


// ============================================================================
// Address:   0x169b2e8 (size: 1 bytes)
// Symbol:    nullsub_710
// Demangled: nullsub_710
// ============================================================================
void nullsub_710()
{
  ;
}


// ============================================================================
// Address:   0x169b2f0 (size: 20 bytes)
// Symbol:    sub_169B2F0
// Demangled: sub_169B2F0
// ============================================================================
int sub_169B2F0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x169b310 (size: 45 bytes)
// Symbol:    sub_169B310
// Demangled: sub_169B310
// ============================================================================
int sub_169B310(int a1, int a2)
{
  return ((hkpExtendedMeshShape::Construct((__m128i *)(uintptr_t)(a1), a2)), (int)0);
}


// ============================================================================
// Address:   0x169b340 (size: 34 bytes)
// Symbol:    sub_169B340
// Demangled: sub_169B340
// ============================================================================
void sub_169B340(hkpExtendedMeshShape::ShapesSubpart::Self *a1)
{
  hkpExtendedMeshShape::ShapesSubpart::Destroy(a1);
}


// ============================================================================
// Address:   0x169b370 (size: 45 bytes)
// Symbol:    sub_169B370
// Demangled: sub_169B370
// ============================================================================
int sub_169B370(int a1, int a2)
{
  return hkpExtendedMeshShape::ShapesSubpart::Construct(a1, a2);
}


// ============================================================================
// Address:   0x169b420 (size: 769 bytes)
// Symbol:    sub_169B420
// Demangled: sub_169B420
// ============================================================================
uint32_t *sub_169B420()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpExtendedMeshShapeSubpartClass,
    "hkpExtendedMeshShapeSubpart",
    nullptr,
    20,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpExtendedMeshShape::Subpart::Members,
    7,
    &unk_1D15F70,
    nullptr,
    0,
    3u);
  hkpExtendedMeshShapeSubpartTypeInfo = (uint32_t)(uintptr_t)("hkpExtendedMeshShapeSubpart");
  *(uintptr_t *)(unk_2124B74) = (uintptr_t)("!hkpExtendedMeshShape::Subpart");
  *(uintptr_t *)(unk_2124B80) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2124B84) = (uintptr_t)(20);
  *(uintptr_t *)(unk_2124B78) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2124B7C) = (uintptr_t)((&g4_noop_ret0));
  dword_20C78B0 = (int)hkpExtendedMeshShapeIndexStridingTypeEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkpExtendedMeshShapeTrianglesSubpartClass,
    "hkpExtendedMeshShapeTrianglesSubpart",
    (const hkClass::Self *)&hkpExtendedMeshShapeSubpartClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20C7800,
    11,
    &unk_1D15F40,
    nullptr,
    0,
    3u);
  hkpExtendedMeshShapeTrianglesSubpartTypeInfo = (uint32_t)(uintptr_t)("hkpExtendedMeshShapeTrianglesSubpart");
  *(uintptr_t *)(unk_2124B14) = (uintptr_t)("!hkpExtendedMeshShape::TrianglesSubpart");
  *(uintptr_t *)(unk_2124B20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2124B24) = (uintptr_t)(112);
  *(uintptr_t *)(unk_2124B18) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2124B1C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpExtendedMeshShapeShapesSubpartClass,
    "hkpExtendedMeshShapeShapesSubpart",
    (const hkClass::Self *)&hkpExtendedMeshShapeSubpartClass,
    64,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpExtendedMeshShape::ShapesSubpart::Members,
    3,
    nullptr,
    nullptr,
    0,
    1u);
  *(uintptr_t *)(unk_2124AB4) = (uintptr_t)("!hkpExtendedMeshShape::ShapesSubpart");
  *(uintptr_t *)(unk_2124AB8) = (uintptr_t)(((int (*)(int, int))sub_169B370));
  *(uintptr_t *)(unk_2124ABC) = (uintptr_t)(((void (*)(hkpExtendedMeshShape::ShapesSubpart::Self *))sub_169B340));
  hkpExtendedMeshShapeShapesSubpartTypeInfo = (uint32_t)(uintptr_t)("hkpExtendedMeshShapeShapesSubpart");
  *(uintptr_t *)(unk_2124AC0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2124AC4) = (uintptr_t)(64);
  *(uintptr_t *)(unk_20C7788) = (uintptr_t)(hkpWeldingUtilityWeldingTypeEnum[0]);
  hkClass::Construct(
    (hkClass::Self *)&hkpExtendedMeshShapeClass,
    "hkpExtendedMeshShape",
    (const hkClass::Self *)&hkpShapeCollectionClass,
    240,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20399A0,
    4,
    (const hkClassMember::Self *)&hkpExtendedMeshShape::Members,
    13,
    &unk_1D15F00,
    nullptr,
    0,
    4u);
  hkpExtendedMeshShape::Construct((__m128i *)&v1, 0);
  hkpExtendedMeshShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpExtendedMeshShape");
  hkpExtendedMeshShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_169B310));
  hkpExtendedMeshShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_169B2F0));
  hkpExtendedMeshShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpExtendedMeshShape");
  hkpExtendedMeshShapeTypeInfo[4] = v1;
  hkpExtendedMeshShapeTypeInfo[5] = 240;
  return hkpExtendedMeshShapeTypeInfo;
}


// ============================================================================
// Address:   0x169b738 (size: 1 bytes)
// Symbol:    nullsub_711
// Demangled: nullsub_711
// ============================================================================
void nullsub_711()
{
  ;
}


// ============================================================================
// Address:   0x169b748 (size: 1 bytes)
// Symbol:    nullsub_712
// Demangled: nullsub_712
// ============================================================================
void nullsub_712()
{
  ;
}


// ============================================================================
// Address:   0x169b770 (size: 195 bytes)
// Symbol:    sub_169B770
// Demangled: sub_169B770
// ============================================================================
uint32_t *sub_169B770()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpAgent1nSectorClass,
    "hkpAgent1nSector",
    nullptr,
    512,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039B60,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkpAgent1nSectorTypeInfo[0] = (uint32_t)(uintptr_t)("hkpAgent1nSector");
  hkpAgent1nSectorTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpAgent1nSector");
  hkpAgent1nSectorTypeInfo[4] = 0;
  hkpAgent1nSectorTypeInfo[5] = 512;
  hkpAgent1nSectorTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkpAgent1nSectorTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkpAgent1nSectorTypeInfo;
}


// ============================================================================
// Address:   0x169ba50 (size: 20 bytes)
// Symbol:    sub_169BA50
// Demangled: sub_169BA50
// ============================================================================
int sub_169BA50(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x169ba70 (size: 45 bytes)
// Symbol:    sub_169BA70
// Demangled: sub_169BA70
// ============================================================================
int sub_169BA70(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConvexListShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x169bac0 (size: 228 bytes)
// Symbol:    sub_169BAC0
// Demangled: sub_169BAC0
// ============================================================================
uint32_t *sub_169BAC0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpConvexListShapeClass,
    "hkpConvexListShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    80,
    nullptr,
    1,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpConvexListShape::Members,
    5,
    &unk_1D15F8C,
    nullptr,
    0,
    0);
  hkpConvexListShape::Construct(&v1, 0);
  hkpConvexListShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConvexListShape");
  hkpConvexListShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_169BA70));
  hkpConvexListShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_169BA50));
  hkpConvexListShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConvexListShape");
  hkpConvexListShapeTypeInfo[4] = v1;
  hkpConvexListShapeTypeInfo[5] = 80;
  return hkpConvexListShapeTypeInfo;
}


// ============================================================================
// Address:   0x169bbb0 (size: 20 bytes)
// Symbol:    sub_169BBB0
// Demangled: sub_169BBB0
// ============================================================================
int sub_169BBB0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x169bbd0 (size: 45 bytes)
// Symbol:    sub_169BBD0
// Demangled: sub_169BBD0
// ============================================================================
void (**sub_169BBD0(int a1, int a2))(hkpCylinderShape::Self *__hidden self)
{
  return hkpCylinderShape::Construct(a1, a2);
}


// ============================================================================
// Address:   0x169bc20 (size: 230 bytes)
// Symbol:    sub_169BC20
// Demangled: sub_169BC20
// ============================================================================
uint32_t *sub_169BC20()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpCylinderShapeClass,
    "hkpCylinderShape",
    (const hkClass::Self *)&hkpConvexShapeClass,
    96,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039BE0,
    1,
    (const hkClassMember::Self *)&hkpCylinderShape::Members,
    6,
    &unk_1D15FA0,
    nullptr,
    0,
    0);
  hkpCylinderShape::Construct((int)(uintptr_t)(&v1), 0);
  hkpCylinderShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpCylinderShape");
  hkpCylinderShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((void (** (*)(int, int a2))(hkpCylinderShape::Self *__hidden))sub_169BBD0));
  hkpCylinderShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_169BBB0));
  hkpCylinderShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpCylinderShape");
  hkpCylinderShapeTypeInfo[4] = v1;
  hkpCylinderShapeTypeInfo[5] = 96;
  return hkpCylinderShapeTypeInfo;
}


// ============================================================================
// Address:   0x169bd10 (size: 73 bytes)
// Symbol:    sub_169BD10
// Demangled: sub_169BD10
// ============================================================================
uint32_t *sub_169BD10(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_209BB08);
  a1[2] = ((uint32_t)(uintptr_t)&off_209BB40);
  a1[3] = ((uint32_t)(uintptr_t)&off_209BB54);
  a1[4] = (uint32_t)(uintptr_t)(&off_209BB70);
  a1[5] = ((uint32_t)(uintptr_t)&off_209BB84);
  if ( a2 != 0 )
    a1[8] = 3;
  return result;
}


// ============================================================================
// Address:   0x169bd60 (size: 20 bytes)
// Symbol:    sub_169BD60
// Demangled: sub_169BD60
// ============================================================================
int sub_169BD60(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x169bda0 (size: 202 bytes)
// Symbol:    sub_169BDA0
// Demangled: sub_169BDA0
// ============================================================================
uint32_t *sub_169BDA0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpCollisionFilterListClass,
    "hkpCollisionFilterList",
    (const hkClass::Self *)&hkpCollisionFilterClass,
    60,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpCollisionFilterList::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpCollisionFilterListTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpCollisionFilterList");
  hkpCollisionFilterListTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *, int))sub_169BD10));
  hkpCollisionFilterListTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_169BD60));
  hkpCollisionFilterListTypeInfo[0] = (uint32_t)(uintptr_t)("hkpCollisionFilterList");
  hkpCollisionFilterListTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209BB08);
  hkpCollisionFilterListTypeInfo[5] = 60;
  return hkpCollisionFilterListTypeInfo;
}


// ============================================================================
// Address:   0x169c8b0 (size: 78 bytes)
// Symbol:    sub_169C8B0
// Demangled: sub_169C8B0
// ============================================================================
int sub_169C8B0(uint32_t *a1)
{
  int address;

  *a1 = ((uint32_t)(uintptr_t)&off_2055268);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a1,
           8);
}


// ============================================================================
// Address:   0x169e7f0 (size: 611 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveI14hkpRootCdPointNS_4lessIS1_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkpRootCdPoint,hkAlgorithm::less<hkpRootCdPoint>>(hkpRootCdPoint *,int,int,hkAlgorithm::less<hkpRootCdPoint>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_6204ce(int a1, int a2, int a3)
{
  float v3; // xmm1_4
  int v4;
  float *v5;
  float *v6;
  float *v7;
  int v8;
  int result;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  float v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  while ( 1 )
  {
    v18 = a3;
    v3 = *(float *)(a1 + 48 * ((a3 + a2) >> 1) + 28);
    v4 = a2 + 1;
    v5 = (float *)(a1 + 48 * a2);
    v11 = (int *)(v5 + 4);
    v12 = -48 * a2 - a1;
    while ( 1 )
    {
      v16 = v4 - 1;
      if ( v3 <= v5[7] )
      {
        v6 = (float *)(a1 + 48 * v18);
        v7 = v6 - 12;
        if ( v6[7] > v3 )
        {
          v8 = v18;
          do
          {
            v6 = v7;
            v7 -= 12;
            --v8;
          }
          while ( v7[19] > v3 );
          v18 = v8;
        }
        if ( v18 < v16 )
          break;
        if ( v18 != v16 )
        {
          v19 = *v6;
          v20 = *((uint32_t *)v6 + 1);
          v21 = *((uint32_t *)v6 + 2);
          v22 = *((uint32_t *)v6 + 3);
          v23 = *((uint32_t *)v6 + 4);
          v24 = *((uint32_t *)v6 + 5);
          v25 = *((uint32_t *)v6 + 6);
          v26 = *((uint32_t *)v6 + 7);
          v15 = *((uint32_t *)v6 + 9);
          v17 = *((uint32_t *)v6 + 8);
          v14 = *((uint32_t *)v6 + 10);
          v13 = *((uint32_t *)v6 + 11);
          *v6 = *v5;
          v6[1] = v5[1];
          v6[2] = v5[2];
          v6[3] = v5[3];
          v10 = (int)(uintptr_t)(v5) + v12;
          v6[4] = *(float *)((char *)v11 + (uint32_t)(uintptr_t)(v5) + v12);
          v6[5] = *(float *)((char *)v11 + (uint32_t)(uintptr_t)(v5) + v12 + 4);
          v6[6] = *(float *)((char *)v11 + (uint32_t)(uintptr_t)(v5) + v12 + 8);
          v6[7] = *(float *)((char *)v11 + (uint32_t)(uintptr_t)(v5) + v12 + 12);
          v6[8] = v5[8];
          v6[9] = v5[9];
          v6[10] = v5[10];
          v6[11] = v5[11];
          *v5 = v19;
          *((uint32_t *)v5 + 1) = v20;
          *((uint32_t *)v5 + 2) = v21;
          *((uint32_t *)v5 + 3) = v22;
          *(int *)((char *)v11 + v10) = v23;
          *(int *)((char *)v11 + v10 + 4) = v24;
          *(int *)((char *)v11 + v10 + 8) = v25;
          *(int *)((char *)v11 + v10 + 12) = v26;
          *((uint32_t *)v5 + 8) = v17;
          *((uint32_t *)v5 + 9) = v15;
          *((uint32_t *)v5 + 10) = v14;
          *((uint32_t *)v5 + 11) = v13;
        }
        --v18;
        v16 = v4;
        if ( v18 < v4 )
          break;
      }
      ++v4;
      v5 += 12;
    }
    if ( a2 < v18 )
      break;
    result = v16;
    if ( a3 <= v16 )
      return result;
LABEL_10:
    a2 = result;
  }
  hkAlgorithm::quickSortRecursive_6204ce(a1, a2, v18);
  result = v16;
  if ( a3 > v16 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x169eab0 (size: 29 bytes)
// Symbol:    sub_169EAB0
// Demangled: sub_169EAB0
// ============================================================================
uint32_t *sub_169EAB0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209B888);
  return a1;
}


// ============================================================================
// Address:   0x169ead0 (size: 20 bytes)
// Symbol:    sub_169EAD0
// Demangled: sub_169EAD0
// ============================================================================
int sub_169EAD0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x169eb10 (size: 202 bytes)
// Symbol:    sub_169EB10
// Demangled: sub_169EB10
// ============================================================================
uint32_t *sub_169EB10()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpConvexVerticesConnectivityClass,
    "hkpConvexVerticesConnectivity",
    (const hkClass::Self *)&hkReferencedObjectClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039CE0,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpConvexVerticesConnectivityTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConvexVerticesConnectivity");
  hkpConvexVerticesConnectivityTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *))sub_169EAB0));
  hkpConvexVerticesConnectivityTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_169EAD0));
  hkpConvexVerticesConnectivityTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConvexVerticesConnectivity");
  hkpConvexVerticesConnectivityTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209B888);
  hkpConvexVerticesConnectivityTypeInfo[5] = 32;
  return hkpConvexVerticesConnectivityTypeInfo;
}


// ============================================================================
// Address:   0x16a1160 (size: 23 bytes)
// Symbol:    sub_16A1160
// Demangled: sub_16A1160
// ============================================================================
uint8_t *sub_16A1160()
{
  hkpBoxBoxAgent::m_attemptToFindAllEdges[0] = 0;
  return (uint8_t *)(hkpBoxBoxAgent::m_attemptToFindAllEdges);
}


// ============================================================================
// Address:   0x16a3850 (size: 20 bytes)
// Symbol:    sub_16A3850
// Demangled: sub_16A3850
// ============================================================================
int sub_16A3850(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16a3870 (size: 45 bytes)
// Symbol:    sub_16A3870
// Demangled: sub_16A3870
// ============================================================================
int sub_16A3870(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConvexTranslateShape::hkpConvexTranslateShape(a1, a2));
}


// ============================================================================
// Address:   0x16a38c0 (size: 223 bytes)
// Symbol:    sub_16A38C0
// Demangled: sub_16A38C0
// ============================================================================
uint32_t *sub_16A38C0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpConvexTranslateShapeClass,
    "hkpConvexTranslateShape",
    (const hkClass::Self *)&hkpConvexTransformShapeBaseClass,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpConvexTranslateShape::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpConvexTranslateShape::hkpConvexTranslateShape(&v1, 0);
  hkpConvexTranslateShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConvexTranslateShape");
  hkpConvexTranslateShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_16A3870));
  hkpConvexTranslateShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16A3850));
  hkpConvexTranslateShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConvexTranslateShape");
  hkpConvexTranslateShapeTypeInfo[4] = v1;
  hkpConvexTranslateShapeTypeInfo[5] = 48;
  return hkpConvexTranslateShapeTypeInfo;
}


// ============================================================================
// Address:   0x16a39b0 (size: 7 bytes)
// Symbol:    _ZThn16_NK18hkpShapeCollection16isWeldingEnabledEv
// Demangled: `non-virtual thunk to'hkpShapeCollection::isWeldingEnabled(void)const
// ============================================================================
static bool g4_thunk_46(hkpShapeCollection::Self *self)
{
  return hkpShapeCollection::isWeldingEnabled((hkpShapeCollection::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16a39d0 (size: 7 bytes)
// Symbol:    _ZThn16_NK12hkpListShape17getNumChildShapesEv
// Demangled: `non-virtual thunk to'hkpListShape::getNumChildShapes(void)const
// ============================================================================
static int g4_thunk_47(hkpListShape::Self *self)
{
  return hkpListShape::getNumChildShapes((hkpListShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16a3a00 (size: 10 bytes)
// Symbol:    _ZThn16_NK12hkpListShape13getChildShapeEjR21hkpShapeBufferStorage
// Demangled: `non-virtual thunk to'hkpListShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// ============================================================================
static int g4_thunk_48(int a1, int a2)
{
  return hkpListShape::getChildShape(a1 - 16, a2);
}


// ============================================================================
// Address:   0x16a3a30 (size: 10 bytes)
// Symbol:    _ZThn16_NK12hkpListShape22getCollisionFilterInfoEj
// Demangled: `non-virtual thunk to'hkpListShape::getCollisionFilterInfo(unsigned int)const
// ============================================================================
static int g4_thunk_49(hkpListShape::Self *self, unsigned int a2)
{
  return hkpListShape::getCollisionFilterInfo((hkpListShape::Self *)((char *)self - 16), a2);
}


// ============================================================================
// Address:   0x16a3b60 (size: 7 bytes)
// Symbol:    _ZThn16_NK12hkpListShape10getNextKeyEj
// Demangled: `non-virtual thunk to'hkpListShape::getNextKey(unsigned int)const
// ============================================================================
static unsigned int g4_thunk_50(hkpListShape::Self *self, unsigned int a2)
{
  return hkpListShape::getNextKey((hkpListShape::Self *)((char *)self - 16), a2);
}


// ============================================================================
// Address:   0x16a40e0 (size: 7 bytes)
// Symbol:    _ZThn16_NK12hkpListShape11getFirstKeyEv
// Demangled: `non-virtual thunk to'hkpListShape::getFirstKey(void)const
// ============================================================================
static int g4_thunk_51(hkpListShape::Self *self)
{
  return hkpListShape::getFirstKey((hkpListShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16a41e0 (size: 10 bytes)
// Symbol:    _ZThn16_N12hkpListShapeD1Ev
// Demangled: `non-virtual thunk to'hkpListShape::Destroy()
// ============================================================================
static void g4_thunk_52(hkpListShape::Self *self)
{
  hkpListShape::Destroy((hkpListShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16a4250 (size: 10 bytes)
// Symbol:    _ZThn16_N12hkpListShapeD0Ev
// Demangled: `non-virtual thunk to'hkpListShape::Destroy()
// ============================================================================
static void g4_thunk_53(hkpListShape::Self *self)
{
  hkpListShape::Destroy((hkpListShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16b1230 (size: 284 bytes)
// Symbol:    _ZN13hkp3AxisSweep9hkpBpAxis10insertTailILi0EEEiPNS_9hkpBpNodeEPNS_13hkpBpEndPointEi
// Demangled: int hkp3AxisSweep::hkpBpAxis::insertTail<0>(hkp3AxisSweep::hkpBpNode *,hkp3AxisSweep::hkpBpEndPoint *,int)
// ============================================================================
template <>
int hkp3AxisSweep::hkpBpAxis::insertTail<0>(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint16_t *v13;
  uint32_t *v14;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint16_t _g4_t_v18;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);

  v4 = a1;
  v5 = a1[1];
  v6 = v5 + a4;
  v7 = a1[2] & 0x3FFFFFFF;
  if ( v5 + a4 > v7 )
  {
    v8 = 2 * v7;
    if ( v8 < v6 )
      v8 = v5 + a4;
    v17 = a1[1];
    G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserve), (hkArrayUtil::Self *)v19, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v8, 4);
    v5 = v17;
  }
  a1[1] = v6;
  v18 = *(uint16_t *)(a3 + 4 * a4 - 4);
  v9 = *a1 + 4 * v5 - 4;
  v16 = (uint32_t *)(*a1 + 4 * v6 - 4);
  *v16 = *(uint32_t *)v9;
  *(uint16_t *)(hkp3AxisSweep::hkpBpNode::s_memberOffsets[*(uint16_t *)v9 & 1] + a2 + 16 * *(uint16_t *)(v9 + 2)) = ((int)(uintptr_t)(v16) - *a1) >> 2;
  v10 = v16 - 1;
  v11 = v9 - 4;
  if ( v18 < *(uint16_t *)(v9 - 4) )
  {
    do
    {
      *v10 = *(uint32_t *)v11;
      v12 = *(uint16_t *)v11 & 1;
      v11 -= 4;
      v13 = (uint16_t *)(hkp3AxisSweep::hkpBpNode::s_memberOffsets[v12] + a2 + 16 * *(uint16_t *)(v11 + 6));
      v14 = v10--;
      *v13 = ((int)(uintptr_t)(v14) - *a1) >> 2;
    }
    while ( v18 < *(uint16_t *)v11 );
    v4 = a1;
  }
  return (((int)(uintptr_t)(v10) - *v4) >> 2) + 1;
}


// ============================================================================
// Address:   0x16b1350 (size: 287 bytes)
// Symbol:    _ZN13hkp3AxisSweep9hkpBpAxis10insertTailILi1EEEiPNS_9hkpBpNodeEPNS_13hkpBpEndPointEi
// Demangled: int hkp3AxisSweep::hkpBpAxis::insertTail<1>(hkp3AxisSweep::hkpBpNode *,hkp3AxisSweep::hkpBpEndPoint *,int)
// ============================================================================
template <>
int hkp3AxisSweep::hkpBpAxis::insertTail<1>(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint16_t *v13;
  uint32_t *v14;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint16_t _g4_t_v18;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);

  v4 = a1;
  v5 = a1[1];
  v6 = v5 + a4;
  v7 = a1[2] & 0x3FFFFFFF;
  if ( v5 + a4 > v7 )
  {
    v8 = 2 * v7;
    if ( v8 < v6 )
      v8 = v5 + a4;
    v17 = a1[1];
    G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserve), (hkArrayUtil::Self *)v19, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v8, 4);
    v5 = v17;
  }
  a1[1] = v6;
  v18 = *(uint16_t *)(a3 + 4 * a4 - 4);
  v9 = *a1 + 4 * v5 - 4;
  v16 = (uint32_t *)(*a1 + 4 * v6 - 4);
  *v16 = *(uint32_t *)v9;
  *(uint16_t *)(hkp3AxisSweep::hkpBpNode::s_memberOffsets[(*(uint16_t *)v9 & 1) + 2] + a2 + 16 * *(uint16_t *)(v9 + 2)) = ((int)(uintptr_t)(v16) - *a1) >> 2;
  v10 = v16 - 1;
  v11 = v9 - 4;
  if ( v18 < *(uint16_t *)(v9 - 4) )
  {
    do
    {
      *v10 = *(uint32_t *)v11;
      v12 = *(uint16_t *)v11 & 1;
      v11 -= 4;
      v13 = (uint16_t *)(hkp3AxisSweep::hkpBpNode::s_memberOffsets[v12 + 2] + a2 + 16 * *(uint16_t *)(v11 + 6));
      v14 = v10--;
      *v13 = ((int)(uintptr_t)(v14) - *a1) >> 2;
    }
    while ( v18 < *(uint16_t *)v11 );
    v4 = a1;
  }
  return (((int)(uintptr_t)(v10) - *v4) >> 2) + 1;
}


// ============================================================================
// Address:   0x16b1470 (size: 287 bytes)
// Symbol:    _ZN13hkp3AxisSweep9hkpBpAxis10insertTailILi2EEEiPNS_9hkpBpNodeEPNS_13hkpBpEndPointEi
// Demangled: int hkp3AxisSweep::hkpBpAxis::insertTail<2>(hkp3AxisSweep::hkpBpNode *,hkp3AxisSweep::hkpBpEndPoint *,int)
// ============================================================================
template <>
int hkp3AxisSweep::hkpBpAxis::insertTail<2>(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint16_t *v13;
  uint32_t *v14;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint16_t _g4_t_v18;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);

  v4 = a1;
  v5 = a1[1];
  v6 = v5 + a4;
  v7 = a1[2] & 0x3FFFFFFF;
  if ( v5 + a4 > v7 )
  {
    v8 = 2 * v7;
    if ( v8 < v6 )
      v8 = v5 + a4;
    v17 = a1[1];
    G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserve), (hkArrayUtil::Self *)v19, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v8, 4);
    v5 = v17;
  }
  a1[1] = v6;
  v18 = *(uint16_t *)(a3 + 4 * a4 - 4);
  v9 = *a1 + 4 * v5 - 4;
  v16 = (uint32_t *)(*a1 + 4 * v6 - 4);
  *v16 = *(uint32_t *)v9;
  *(uint16_t *)(hkp3AxisSweep::hkpBpNode::s_memberOffsets[(*(uint16_t *)v9 & 1) + 4] + a2 + 16 * *(uint16_t *)(v9 + 2)) = ((int)(uintptr_t)(v16) - *a1) >> 2;
  v10 = v16 - 1;
  v11 = v9 - 4;
  if ( v18 < *(uint16_t *)(v9 - 4) )
  {
    do
    {
      *v10 = *(uint32_t *)v11;
      v12 = *(uint16_t *)v11 & 1;
      v11 -= 4;
      v13 = (uint16_t *)(hkp3AxisSweep::hkpBpNode::s_memberOffsets[v12 + 4] + a2 + 16 * *(uint16_t *)(v11 + 6));
      v14 = v10--;
      *v13 = ((int)(uintptr_t)(v14) - *a1) >> 2;
    }
    while ( v18 < *(uint16_t *)v11 );
    v4 = a1;
  }
  return (((int)(uintptr_t)(v10) - *v4) >> 2) + 1;
}


// ============================================================================
// Address:   0x16b1590 (size: 332 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN13hkp3AxisSweep13hkpBpEndPointENS_4lessIS2_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkp3AxisSweep::hkpBpEndPoint,hkAlgorithm::less<hkp3AxisSweep::hkpBpEndPoint>>(hkp3AxisSweep::hkpBpEndPoint *,int,int,hkAlgorithm::less<hkp3AxisSweep::hkpBpEndPoint>)
// ============================================================================
uint16_t *hkAlgorithm::quickSortRecursive_09325f(
        int a1,
        int a2,
        int a3)
{
  int v3;
  uint16_t *v4;
  uint16_t v5; // si
  uint16_t *v6;
  uint16_t *v7;
  uint16_t *v8;
  uint16_t *result;
  uint16_t v10;
  uint16_t *i;
  uint16_t v12;
  uint16_t v13;

  while ( 2 )
  {
    v3 = a3;
    v4 = (uint16_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v5 = *v4;
    v12 = v4[1];
    v6 = (uint16_t *)(a1 + 4 * a2);
    v7 = (uint16_t *)(a2 + 1);
    for ( i = (uint16_t *)(a2 + 1); ; v7 = i )
    {
      while ( 1 )
      {
        v8 = (uint16_t *)((char *)v7 - 1);
        if ( v5 > *v6 )
          goto LABEL_16;
        if ( v5 != *v6 || v12 <= v6[1] )
          break;
        i = (uint16_t *)((char *)i + 1);
        v6 += 2;
        v7 = i;
      }
      for ( result = (uint16_t *)(a1 + 4 * v3); ; result -= 2 )
      {
        v10 = *result;
        if ( v5 >= *result )
        {
          if ( v5 != v10 )
            goto LABEL_3;
          if ( v12 >= result[1] )
            break;
        }
        --v3;
      }
      v10 = v5;
LABEL_3:
      if ( (int)(uintptr_t)(v8) > v3 )
        break;
      if ( v8 != (uint16_t *)v3 )
      {
        v13 = result[1];
        *(uint32_t *)result = *(uint32_t *)v6;
        *v6 = v10;
        v6[1] = v13;
      }
      result = i;
      --v3;
      v8 = i;
      if ( v3 < (int)(uintptr_t)(i) )
        break;
LABEL_16:
      i = (uint16_t *)((char *)i + 1);
      v6 += 2;
    }
    if ( a2 < v3 )
    {
      result = (uint16_t *)hkAlgorithm::quickSortRecursive_09325f(
                                     a1,
                                     a2,
                                     v3);
      if ( a3 > (int)(uintptr_t)(v8) )
      {
LABEL_6:
        a2 = (int)(uintptr_t)(v8);
        continue;
      }
    }
    else if ( a3 > (int)(uintptr_t)(v8) )
    {
      goto LABEL_6;
    }
    return result;
  }
}


// ============================================================================
// Address:   0x16b2c30 (size: 2325 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveI12ValueIntPairItENS_4lessIS2_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<ValueIntPair<unsigned short>,hkAlgorithm::less<ValueIntPair<unsigned short>>>(ValueIntPair<unsigned short> *,int,int,hkAlgorithm::less<ValueIntPair<unsigned short>>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_c3373e(
        int a1,
        int a2,
        int a3)
{
  uint16_t v3; // bp
  int v4;
  int v5;
  uint16_t *v6;
  uint16_t v7;
  int v8;
  int result;
  uint16_t v10; // bp
  int v11;
  int i;
  uint16_t *v13;
  uint16_t v14;
  int v15;
  uint16_t v16; // bp
  int v17;
  int j;
  uint16_t *v19;
  uint16_t v20;
  int v21;
  bool v22;
  uint16_t v23; // bp
  int v24;
  int k;
  uint16_t *v26;
  uint16_t v27;
  int v28;
  bool v29;
  int v30;
  uint16_t v31; // si
  int v32;
  int m;
  uint16_t *v34;
  uint16_t v35;
  int v36;
  bool v37;
  int v38;
  uint16_t v39;
  int v40;
  int n;
  uint16_t *v42;
  uint16_t v43; // si
  int v44;
  bool v45;
  int v46;
  uint16_t v47;
  int v48;
  int ii;
  uint16_t *v50;
  uint16_t v51; // si
  int v52;
  bool v53;
  int v54;
  uint16_t v55;
  int v56;
  int jj;
  uint16_t *v58;
  uint16_t v59; // si
  int v60;
  int kk;
  uint16_t v62; // si
  int v63;
  int mm;
  uint16_t *v65;
  uint16_t v66;
  int v67;
  uint16_t v68;
  uint16_t v69;
  uint16_t v70;
  uint16_t v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  uint16_t v77;
  uint16_t v78;
  uint16_t v79;
  uint16_t v80;
  int v81;
  uint16_t v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;

  while ( 1 )
  {
    v3 = *(uint16_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v4 = a1 + 4 * a2;
    v86 = a2 + 1;
    v5 = a2 + 1;
    v89 = a3;
    while ( 1 )
    {
      v92 = v5 - 1;
      if ( v3 <= *(uint16_t *)v4 )
      {
        v6 = (uint16_t *)(a1 + 4 * v89);
        v7 = *v6;
        if ( v3 < *v6 )
        {
          v8 = a1 + 4 * v89 - 4;
          do
          {
            v6 = (uint16_t *)v8;
            v8 -= 4;
            v7 = *(uint16_t *)(v8 + 4);
            --v89;
          }
          while ( v3 < v7 );
        }
        if ( v89 < v92 )
          break;
        if ( v89 != v92 )
        {
          v68 = v6[1];
          *(uint32_t *)v6 = *(uint32_t *)v4;
          *(uint16_t *)v4 = v7;
          *(uint16_t *)(v4 + 2) = v68;
        }
        --v89;
        v92 = v5;
        if ( v89 < v5 )
          break;
      }
      v4 += 4;
      ++v5;
    }
    if ( a2 < v89 )
    {
      while ( 1 )
      {
        v90 = v89;
        v10 = *(uint16_t *)(a1 + 4 * ((v89 + a2) >> 1));
        v11 = v86;
        for ( i = a1 + 4 * a2; ; i += 4 )
        {
          v93 = v11 - 1;
          if ( v10 <= *(uint16_t *)i )
          {
            v13 = (uint16_t *)(a1 + 4 * v90);
            v14 = *v13;
            if ( v10 < *v13 )
            {
              v15 = a1 + 4 * v90 - 4;
              do
              {
                v13 = (uint16_t *)v15;
                v15 -= 4;
                v14 = *(uint16_t *)(v15 + 4);
                --v90;
              }
              while ( v10 < v14 );
            }
            if ( v90 < v93 )
              break;
            if ( v90 != v93 )
            {
              v69 = v13[1];
              *(uint32_t *)v13 = *(uint32_t *)i;
              *(uint16_t *)i = v14;
              *(uint16_t *)(i + 2) = v69;
            }
            --v90;
            v93 = v11;
            if ( v90 < v11 )
              break;
          }
          ++v11;
        }
        if ( a2 < v90 )
        {
          while ( 1 )
          {
            v91 = v90;
            v16 = *(uint16_t *)(a1 + 4 * ((v90 + a2) >> 1));
            v17 = v86;
            for ( j = a1 + 4 * a2; ; j += 4 )
            {
              v94 = v17 - 1;
              if ( v16 <= *(uint16_t *)j )
              {
                v19 = (uint16_t *)(a1 + 4 * v91);
                v20 = *v19;
                if ( v16 < *v19 )
                {
                  v21 = a1 + 4 * v91 - 4;
                  do
                  {
                    v19 = (uint16_t *)v21;
                    v21 -= 4;
                    v20 = *(uint16_t *)(v21 + 4);
                    --v91;
                  }
                  while ( v16 < v20 );
                }
                if ( v91 < v94 )
                  break;
                if ( v91 != v94 )
                {
                  v70 = v19[1];
                  *(uint32_t *)v19 = *(uint32_t *)j;
                  *(uint16_t *)j = v20;
                  *(uint16_t *)(j + 2) = v70;
                }
                --v91;
                v94 = v17;
                if ( v91 < v17 )
                  break;
              }
              ++v17;
            }
            if ( a2 < v91 )
            {
              while ( 1 )
              {
                v87 = v91;
                v23 = *(uint16_t *)(a1 + 4 * ((v91 + a2) >> 1));
                v24 = v86;
                for ( k = a1 + 4 * a2; ; k += 4 )
                {
                  v96 = v24 - 1;
                  if ( v23 <= *(uint16_t *)k )
                  {
                    v26 = (uint16_t *)(a1 + 4 * v87);
                    v27 = *v26;
                    if ( v23 >= *v26 )
                    {
                      v22 = v87 == v96;
                      if ( v87 < v96 )
                        break;
                    }
                    else
                    {
                      v28 = a1 + 4 * v87 - 4;
                      do
                      {
                        v26 = (uint16_t *)v28;
                        v28 -= 4;
                        v27 = *(uint16_t *)(v28 + 4);
                        --v87;
                      }
                      while ( v23 < v27 );
                      v22 = v87 == v96;
                      if ( v87 < v96 )
                        break;
                    }
                    if ( !v22 )
                    {
                      v71 = v26[1];
                      *(uint32_t *)v26 = *(uint32_t *)k;
                      *(uint16_t *)k = v27;
                      *(uint16_t *)(k + 2) = v71;
                    }
                    --v87;
                    v96 = v24;
                    if ( v87 < v24 )
                      break;
                  }
                  ++v24;
                }
                if ( a2 < v87 )
                {
                  while ( 1 )
                  {
                    v30 = v87;
                    v72 = v86;
                    v31 = *(uint16_t *)(a1 + 4 * ((v87 + a2) >> 1));
                    v32 = a1 + 4 * a2;
                    for ( m = v86; ; m = v72 )
                    {
                      v97 = m - 1;
                      if ( v31 <= *(uint16_t *)v32 )
                      {
                        v34 = (uint16_t *)(a1 + 4 * v30);
                        v35 = *v34;
                        if ( v31 >= *v34 )
                        {
                          v29 = v30 == v97;
                          if ( v30 < v97 )
                            break;
                        }
                        else
                        {
                          v36 = a1 + 4 * v30 - 4;
                          do
                          {
                            v34 = (uint16_t *)v36;
                            v36 -= 4;
                            v35 = *(uint16_t *)(v36 + 4);
                            --v30;
                          }
                          while ( v31 < v35 );
                          v29 = v30 == v97;
                          if ( v30 < v97 )
                            break;
                        }
                        if ( !v29 )
                        {
                          v77 = v34[1];
                          *(uint32_t *)v34 = *(uint32_t *)v32;
                          *(uint16_t *)v32 = v35;
                          *(uint16_t *)(v32 + 2) = v77;
                        }
                        --v30;
                        v97 = v72;
                        if ( v30 < v72 )
                          break;
                      }
                      ++v72;
                      v32 += 4;
                    }
                    v98 = v30;
                    if ( a2 < v30 )
                    {
                      while ( 1 )
                      {
                        v38 = v98;
                        v73 = v86;
                        v39 = *(uint16_t *)(a1 + 4 * ((v98 + a2) >> 1));
                        v40 = a1 + 4 * a2;
                        for ( n = v86; ; n = v73 )
                        {
                          v88 = n - 1;
                          if ( v39 <= *(uint16_t *)v40 )
                          {
                            v42 = (uint16_t *)(a1 + 4 * v38);
                            v43 = *v42;
                            if ( v39 >= *v42 )
                            {
                              v37 = v38 == v88;
                              if ( v38 < v88 )
                                break;
                            }
                            else
                            {
                              v44 = a1 + 4 * v38 - 4;
                              do
                              {
                                v42 = (uint16_t *)v44;
                                v44 -= 4;
                                v43 = *(uint16_t *)(v44 + 4);
                                --v38;
                              }
                              while ( v39 < v43 );
                              v37 = v38 == v88;
                              if ( v38 < v88 )
                                break;
                            }
                            if ( !v37 )
                            {
                              v78 = v42[1];
                              *(uint32_t *)v42 = *(uint32_t *)v40;
                              *(uint16_t *)v40 = v43;
                              *(uint16_t *)(v40 + 2) = v78;
                            }
                            --v38;
                            v88 = v73;
                            if ( v38 < v73 )
                              break;
                          }
                          ++v73;
                          v40 += 4;
                        }
                        v99 = v38;
                        if ( a2 < v38 )
                        {
                          while ( 1 )
                          {
                            v46 = v99;
                            v74 = v86;
                            v47 = *(uint16_t *)(a1 + 4 * ((v99 + a2) >> 1));
                            v48 = a1 + 4 * a2;
                            for ( ii = v86; ; ii = v74 )
                            {
                              v84 = ii - 1;
                              if ( v47 <= *(uint16_t *)v48 )
                              {
                                v50 = (uint16_t *)(a1 + 4 * v46);
                                v51 = *v50;
                                if ( *v50 <= v47 )
                                {
                                  v45 = v46 == v84;
                                  if ( v46 < v84 )
                                    break;
                                }
                                else
                                {
                                  v52 = a1 + 4 * v46 - 4;
                                  do
                                  {
                                    v50 = (uint16_t *)v52;
                                    v52 -= 4;
                                    v51 = *(uint16_t *)(v52 + 4);
                                    --v46;
                                  }
                                  while ( v47 < v51 );
                                  v45 = v46 == v84;
                                  if ( v46 < v84 )
                                    break;
                                }
                                if ( !v45 )
                                {
                                  v79 = v50[1];
                                  *(uint32_t *)v50 = *(uint32_t *)v48;
                                  *(uint16_t *)v48 = v51;
                                  *(uint16_t *)(v48 + 2) = v79;
                                }
                                --v46;
                                v84 = v74;
                                if ( v46 < v74 )
                                  break;
                              }
                              ++v74;
                              v48 += 4;
                            }
                            v95 = v46;
                            if ( a2 < v46 )
                            {
                              while ( 1 )
                              {
                                v54 = v95;
                                v75 = v86;
                                v55 = *(uint16_t *)(a1 + 4 * ((v95 + a2) >> 1));
                                v56 = a1 + 4 * a2;
                                for ( jj = v86; ; jj = v75 )
                                {
                                  v83 = jj - 1;
                                  if ( v55 <= *(uint16_t *)v56 )
                                  {
                                    v58 = (uint16_t *)(a1 + 4 * v54);
                                    v59 = *v58;
                                    if ( *v58 <= v55 )
                                    {
                                      v53 = v54 == v83;
                                      if ( v54 < v83 )
                                        break;
                                    }
                                    else
                                    {
                                      v60 = a1 + 4 * v54 - 4;
                                      do
                                      {
                                        v58 = (uint16_t *)v60;
                                        v60 -= 4;
                                        v59 = *(uint16_t *)(v60 + 4);
                                        --v54;
                                      }
                                      while ( v55 < v59 );
                                      v53 = v54 == v83;
                                      if ( v54 < v83 )
                                        break;
                                    }
                                    if ( !v53 )
                                    {
                                      v80 = v58[1];
                                      *(uint32_t *)v58 = *(uint32_t *)v56;
                                      *(uint16_t *)v56 = v59;
                                      *(uint16_t *)(v56 + 2) = v80;
                                    }
                                    --v54;
                                    v83 = v75;
                                    if ( v54 < v75 )
                                      break;
                                  }
                                  ++v75;
                                  v56 += 4;
                                }
                                v85 = v54;
                                if ( a2 < v54 )
                                {
                                  for ( kk = v86; ; kk = v81 + 1 )
                                  {
                                    v76 = kk;
                                    v62 = *(uint16_t *)(a1 + 4 * ((v85 + a2) >> 1));
                                    v63 = v85;
                                    for ( mm = a1 + 4 * a2; ; mm += 4 )
                                    {
                                      v81 = kk - 1;
                                      if ( v62 <= *(uint16_t *)mm )
                                      {
                                        v65 = (uint16_t *)(a1 + 4 * v63);
                                        v66 = *v65;
                                        if ( v62 < *v65 )
                                        {
                                          v67 = a1 + 4 * v63 - 4;
                                          do
                                          {
                                            v65 = (uint16_t *)v67;
                                            v67 -= 4;
                                            v66 = *(uint16_t *)(v67 + 4);
                                            --v63;
                                          }
                                          while ( v62 < v66 );
                                        }
                                        if ( v63 < v81 )
                                          break;
                                        if ( v63 != v81 )
                                        {
                                          v82 = v65[1];
                                          *(uint32_t *)v65 = *(uint32_t *)mm;
                                          *(uint16_t *)mm = v66;
                                          *(uint16_t *)(mm + 2) = v82;
                                        }
                                        --v63;
                                        v81 = v76;
                                        if ( v63 < v76 )
                                          break;
                                      }
                                      kk = ++v76;
                                    }
                                    if ( a2 < v63 )
                                      hkAlgorithm::quickSortRecursive_c3373e(
                                        a1,
                                        a2,
                                        v63);
                                    if ( v85 <= v81 )
                                      break;
                                    a2 = v81;
                                  }
                                }
                                if ( v95 <= v83 )
                                  break;
                                a2 = v83;
                                v86 = v83 + 1;
                              }
                            }
                            if ( v99 <= v84 )
                              break;
                            a2 = v84;
                            v86 = v84 + 1;
                          }
                        }
                        if ( v98 <= v88 )
                          break;
                        a2 = v88;
                        v86 = v88 + 1;
                      }
                    }
                    if ( v87 <= v97 )
                      break;
                    a2 = v97;
                    v86 = v97 + 1;
                  }
                }
                if ( v91 <= v96 )
                  break;
                a2 = v96;
                v86 = v96 + 1;
              }
            }
            if ( v90 <= v94 )
              break;
            a2 = v94;
            v86 = v94 + 1;
          }
        }
        if ( v89 <= v93 )
          break;
        a2 = v93;
        v86 = v93 + 1;
      }
    }
    result = v92;
    if ( a3 <= v92 )
      return result;
    a2 = v92;
  }
}


// ============================================================================
// Address:   0x16b3930 (size: 113 bytes)
// Symbol:    sub_16B3930
// Demangled: sub_16B3930
// ============================================================================
void sub_16B3930()
{
  hkp3AxisSweep::hkpBpNode::s_memberOffsets[0] = 8;
  hkp3AxisSweep::hkpBpNode::s_memberOffsets[1] = 10;
  hkp3AxisSweep::hkpBpNode::s_memberOffsets[2] = 0;
  hkp3AxisSweep::hkpBpNode::s_memberOffsets[3] = 4;
  hkp3AxisSweep::hkpBpNode::s_memberOffsets[4] = 2;
  hkp3AxisSweep::hkpBpNode::s_memberOffsets[5] = 6;
  hkOptionalComponent::Construct(
    (hkOptionalComponent::Self *)&hkOptionalComponent_hkp3AxisSweep,
    "hkp3AxisSweep",
    &hkpBroadPhase::s_createSweepAndPruneBroadPhaseFunction,
    hk3AxisSweep16CreateBroadPhase);
}


// ============================================================================
// Address:   0x16b3a10 (size: 10 bytes)
// Symbol:    _ZThn8_N14hkpGroupFilterD1Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_54(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16b3a20 (size: 10 bytes)
// Symbol:    _ZThn12_N14hkpGroupFilterD1Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_55(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 12));
}


// ============================================================================
// Address:   0x16b3a30 (size: 10 bytes)
// Symbol:    _ZThn16_N14hkpGroupFilterD1Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_56(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16b3a40 (size: 10 bytes)
// Symbol:    _ZThn20_N14hkpGroupFilterD1Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_57(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 20));
}


// ============================================================================
// Address:   0x16b3ab0 (size: 10 bytes)
// Symbol:    _ZThn8_N14hkpGroupFilterD0Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_58(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16b3ac0 (size: 10 bytes)
// Symbol:    _ZThn12_N14hkpGroupFilterD0Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_59(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 12));
}


// ============================================================================
// Address:   0x16b3ad0 (size: 10 bytes)
// Symbol:    _ZThn16_N14hkpGroupFilterD0Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_60(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16b3ae0 (size: 10 bytes)
// Symbol:    _ZThn20_N14hkpGroupFilterD0Ev
// Demangled: `non-virtual thunk to'hkpGroupFilter::Destroy()
// ============================================================================
static void g4_thunk_61(hkpGroupFilter::Self *self)
{
  hkpGroupFilter::Destroy((hkpGroupFilter::Self *)((char *)self - 20));
}


// ============================================================================
// Address:   0x16b3c80 (size: 10 bytes)
// Symbol:    _ZThn8_NK14hkpGroupFilter18isCollisionEnabledERK13hkpCollidableS2_
// Demangled: `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// ============================================================================
static hkpGroupFilter::Self *g4_thunk_62(
        hkpGroupFilter::Self *self,
        const hkpCollidable::Self *a2,
        const hkpCollidable::Self *a3,
        int a4)
{
  return hkpGroupFilter::isCollisionEnabled(self, (const hkpCollidable::Self *)((char *)a2 - 8), a3, a4);
}


// ============================================================================
// Address:   0x16b3d30 (size: 10 bytes)
// Symbol:    _ZThn12_NK14hkpGroupFilter18isCollisionEnabledERK17hkpCollisionInputRK9hkpCdBodyS5_RK17hkpShapeContainerS8_jj
// Demangled: `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// ============================================================================
static hkpGroupFilter::Self *g4_thunk_63(
        hkpGroupFilter::Self *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return hkpGroupFilter::isCollisionEnabled(a1, a2 - 12, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================================
// Address:   0x16b3da0 (size: 10 bytes)
// Symbol:    _ZThn16_NK14hkpGroupFilter18isCollisionEnabledERK20hkpShapeRayCastInputRK17hkpShapeContainerj
// Demangled: `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// ============================================================================
static hkpGroupFilter::Self *g4_thunk_64(
        hkpGroupFilter::Self *a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  return hkpGroupFilter::isCollisionEnabled(a1, a2 - 16, a3, a4, a5);
}


// ============================================================================
// Address:   0x16b3e00 (size: 10 bytes)
// Symbol:    _ZThn20_NK14hkpGroupFilter18isCollisionEnabledERK20hkpWorldRayCastInputRK13hkpCollidable
// Demangled: `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// ============================================================================
static hkpGroupFilter::Self *g4_thunk_65(
        hkpGroupFilter::Self *a1,
        int a2,
        int a3,
        int a4)
{
  return hkpGroupFilter::isCollisionEnabled(a1, a2 - 20, a3, a4);
}


// ============================================================================
// Address:   0x16b3f50 (size: 10 bytes)
// Symbol:    _ZThn12_NK14hkpGroupFilter18isCollisionEnabledERK17hkpCollisionInputRK9hkpCdBodyS5_RK17hkpShapeContainerj
// Demangled: `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// ============================================================================
static hkpGroupFilter::Self *g4_thunk_66(
        hkpGroupFilter::Self *a1,
        int a2,
        uint32_t *a3,
        uint32_t *a4,
        int a5,
        int a6,
        int a7)
{
  return hkpGroupFilter::isCollisionEnabled(a1, a2 - 12, a3, a4, a5, a6, a7);
}


// ============================================================================
// Address:   0x16b40d0 (size: 10 bytes)
// Symbol:    _ZThn8_N30hkpRemoveTerminalsMoppModifier23shouldTerminalBeRemovedEjPKj
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved(unsigned int,unsigned int const*)
// ============================================================================
static hkpRemoveTerminalsMoppModifier::Self *g4_thunk_67(
        hkpRemoveTerminalsMoppModifier::Self *self,
        unsigned int a2,
        const unsigned int *a3)
{
  return hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved(self, a2 - 8, a3);
}


// ============================================================================
// Address:   0x16b4110 (size: 10 bytes)
// Symbol:    _ZThn8_N31hkpRemoveTerminalsMoppModifier223shouldTerminalBeRemovedEjPKj
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved(unsigned int,unsigned int const*)
// ============================================================================
static int64_t g4_thunk_68(
        hkpRemoveTerminalsMoppModifier2::Self *self,
        unsigned int a2,
        const unsigned int *a3)
{
  return hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved(self, a2 - 8, a3);
}


// ============================================================================
// Address:   0x16b41a0 (size: 10 bytes)
// Symbol:    _ZThn8_N30hkpRemoveTerminalsMoppModifierD1Ev
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::Destroy()
// ============================================================================
static void g4_thunk_69(
        hkpRemoveTerminalsMoppModifier::Self *self)
{
  hkpRemoveTerminalsMoppModifier::Destroy((hkpRemoveTerminalsMoppModifier::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16b41f0 (size: 10 bytes)
// Symbol:    _ZThn8_N31hkpRemoveTerminalsMoppModifier2D1Ev
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::Destroy()
// ============================================================================
static void g4_thunk_70(
        hkpRemoveTerminalsMoppModifier2::Self *self)
{
  hkpRemoveTerminalsMoppModifier2::Destroy((hkpRemoveTerminalsMoppModifier2::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16b4270 (size: 10 bytes)
// Symbol:    _ZThn8_N30hkpRemoveTerminalsMoppModifier21addTerminalRemoveInfoEi
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo(int)
// ============================================================================
static int g4_thunk_71(
        hkpRemoveTerminalsMoppModifier::Self *self,
        int a2)
{
  return hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo((hkpRemoveTerminalsMoppModifier::Self *)((char *)self - 8), a2);
}


// ============================================================================
// Address:   0x16b42f0 (size: 7 bytes)
// Symbol:    _ZThn8_N31hkpRemoveTerminalsMoppModifier2D0Ev
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::Destroy()
// ============================================================================
static void g4_thunk_72(
        hkpRemoveTerminalsMoppModifier2::Self *self)
{
  hkpRemoveTerminalsMoppModifier2::Destroy((hkpRemoveTerminalsMoppModifier2::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16b4360 (size: 10 bytes)
// Symbol:    _ZThn8_N30hkpRemoveTerminalsMoppModifierD0Ev
// Demangled: `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::Destroy()
// ============================================================================
static void g4_thunk_73(
        hkpRemoveTerminalsMoppModifier::Self *self)
{
  hkpRemoveTerminalsMoppModifier::Destroy((hkpRemoveTerminalsMoppModifier::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x16b4740 (size: 29 bytes)
// Symbol:    sub_16B4740
// Demangled: sub_16B4740
// ============================================================================
uint32_t *sub_16B4740(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20994E8);
  return a1;
}


// ============================================================================
// Address:   0x16b4760 (size: 20 bytes)
// Symbol:    sub_16B4760
// Demangled: sub_16B4760
// ============================================================================
int sub_16B4760(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16b47c0 (size: 316 bytes)
// Symbol:    sub_16B47C0
// Demangled: sub_16B47C0
// ============================================================================
uint32_t *sub_16B47C0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpShapeContainerClass,
    "hkpShapeContainer",
    nullptr,
    4,
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&hkpSingleShapeContainerClass,
    "hkpSingleShapeContainer",
    (const hkClass::Self *)&hkpShapeContainerClass,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpSingleShapeContainer::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpSingleShapeContainerTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpSingleShapeContainer");
  hkpSingleShapeContainerTypeInfo[2] = (uint32_t)(uintptr_t)(((uint32_t * (*)(uint32_t *))sub_16B4740));
  hkpSingleShapeContainerTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16B4760));
  hkpSingleShapeContainerTypeInfo[0] = (uint32_t)(uintptr_t)("hkpSingleShapeContainer");
  hkpSingleShapeContainerTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20994E8);
  hkpSingleShapeContainerTypeInfo[5] = 8;
  return (uint32_t *)(hkpSingleShapeContainerTypeInfo);
}


// ============================================================================
// Address:   0x16b4900 (size: 20 bytes)
// Symbol:    sub_16B4900
// Demangled: sub_16B4900
// ============================================================================
int sub_16B4900(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16b4920 (size: 45 bytes)
// Symbol:    sub_16B4920
// Demangled: sub_16B4920
// ============================================================================
int sub_16B4920(int a1, int a2)
{
  return (int)(uintptr_t)(hkpTransformShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x16b4970 (size: 226 bytes)
// Symbol:    sub_16B4970
// Demangled: sub_16B4970
// ============================================================================
uint32_t *sub_16B4970()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpTransformShapeClass,
    "hkpTransformShape",
    (const hkClass::Self *)&hkpShapeClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpTransformShape::Members,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkpTransformShape::Construct(&v1, 0);
  hkpTransformShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpTransformShape");
  hkpTransformShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_16B4920));
  hkpTransformShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16B4900));
  hkpTransformShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpTransformShape");
  hkpTransformShapeTypeInfo[4] = v1;
  hkpTransformShapeTypeInfo[5] = 112;
  return (uint32_t *)(hkpTransformShapeTypeInfo);
}


// ============================================================================
// Address:   0x16b4a60 (size: 20 bytes)
// Symbol:    sub_16B4A60
// Demangled: sub_16B4A60
// ============================================================================
int sub_16B4A60(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16b4a80 (size: 45 bytes)
// Symbol:    sub_16B4A80
// Demangled: sub_16B4A80
// ============================================================================
int sub_16B4A80(int a1, int a2)
{
  return (int)(uintptr_t)(hkpConvexTransformShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x16b4ad0 (size: 226 bytes)
// Symbol:    sub_16B4AD0
// Demangled: sub_16B4AD0
// ============================================================================
uint32_t *sub_16B4AD0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpConvexTransformShapeClass,
    "hkpConvexTransformShape",
    (const hkClass::Self *)&hkpConvexTransformShapeBaseClass,
    96,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpConvexTransformShape::Members,
    2,
    nullptr,
    nullptr,
    0,
    2u);
  hkpConvexTransformShape::Construct(&v1, 0);
  hkpConvexTransformShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConvexTransformShape");
  hkpConvexTransformShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_16B4A80));
  hkpConvexTransformShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16B4A60));
  hkpConvexTransformShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConvexTransformShape");
  hkpConvexTransformShapeTypeInfo[4] = v1;
  hkpConvexTransformShapeTypeInfo[5] = 96;
  return (uint32_t *)(hkpConvexTransformShapeTypeInfo);
}


// ============================================================================
// Address:   0x16b6640 (size: 20 bytes)
// Symbol:    sub_16B6640
// Demangled: sub_16B6640
// ============================================================================
int sub_16B6640(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16b6660 (size: 45 bytes)
// Symbol:    sub_16B6660
// Demangled: sub_16B6660
// ============================================================================
int sub_16B6660(int a1, int a2)
{
  return (int)(uintptr_t)(hkpBvShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x16b66b0 (size: 223 bytes)
// Symbol:    sub_16B66B0
// Demangled: sub_16B66B0
// ============================================================================
uint32_t *sub_16B66B0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpBvShapeClass,
    "hkpBvShape",
    (const hkClass::Self *)&hkpShapeClass,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_209A460,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpBvShape::Construct(&v1, 0);
  hkpBvShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpBvShape");
  hkpBvShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_16B6660));
  hkpBvShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16B6640));
  hkpBvShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpBvShape");
  hkpBvShapeTypeInfo[4] = v1;
  hkpBvShapeTypeInfo[5] = 28;
  return (uint32_t *)(hkpBvShapeTypeInfo);
}


// ============================================================================
// Address:   0x16b9a70 (size: 10 bytes)
// Symbol:    _ZThn16_N27hkpStorageExtendedMeshShapeD1Ev
// Demangled: `non-virtual thunk to'hkpStorageExtendedMeshShape::Destroy()
// ============================================================================
static void g4_thunk_74(
        hkpStorageExtendedMeshShape::Self *self)
{
  hkpStorageExtendedMeshShape::Destroy((hkpStorageExtendedMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16b9ae0 (size: 10 bytes)
// Symbol:    _ZThn16_N27hkpStorageExtendedMeshShapeD0Ev
// Demangled: `non-virtual thunk to'hkpStorageExtendedMeshShape::Destroy()
// ============================================================================
static void g4_thunk_75(
        hkpStorageExtendedMeshShape::Self *self)
{
  hkpStorageExtendedMeshShape::Destroy((hkpStorageExtendedMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x16bbbf8 (size: 1 bytes)
// Symbol:    nullsub_713
// Demangled: nullsub_713
// ============================================================================
void nullsub_713()
{
  ;
}


// ============================================================================
// Address:   0x16bbc08 (size: 1 bytes)
// Symbol:    nullsub_714
// Demangled: nullsub_714
// ============================================================================
void nullsub_714()
{
  ;
}


// ============================================================================
// Address:   0x16bbc30 (size: 197 bytes)
// Symbol:    sub_16BBC30
// Demangled: sub_16BBC30
// ============================================================================
uint32_t *sub_16BBC30()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpTypedBroadPhaseHandleClass,
    "hkpTypedBroadPhaseHandle",
    (const hkClass::Self *)&hkpBroadPhaseHandleClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpTypedBroadPhaseHandle::Members,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkpTypedBroadPhaseHandleTypeInfo[0] = (uint32_t)(uintptr_t)("hkpTypedBroadPhaseHandle");
  hkpTypedBroadPhaseHandleTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpTypedBroadPhaseHandle");
  hkpTypedBroadPhaseHandleTypeInfo[4] = 0;
  hkpTypedBroadPhaseHandleTypeInfo[5] = 12;
  hkpTypedBroadPhaseHandleTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkpTypedBroadPhaseHandleTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return (uint32_t *)(hkpTypedBroadPhaseHandleTypeInfo);
}


// ============================================================================
// Address:   0x16bff90 (size: 20 bytes)
// Symbol:    sub_16BFF90
// Demangled: sub_16BFF90
// ============================================================================
int sub_16BFF90(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16bffb0 (size: 45 bytes)
// Symbol:    sub_16BFFB0
// Demangled: sub_16BFFB0
// ============================================================================
void (**sub_16BFFB0(int a1, int a2))(hkpShapeBase::Self * self)
{
  return hkpShapeBase::hkpShapeBase(a1, a2);
}


// ============================================================================
// Address:   0x16c0000 (size: 221 bytes)
// Symbol:    sub_16C0000
// Demangled: sub_16C0000
// ============================================================================
uint32_t *sub_16C0000()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpShapeBaseClass,
    "hkpShapeBase",
    (const hkClass::Self *)&hkcdShapeClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpShapeBase::hkpShapeBase((int)(uintptr_t)(&v1), 0);
  hkpShapeBaseTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpShapeBase");
  hkpShapeBaseTypeInfo[2] = (uint32_t)(uintptr_t)(((void (** (*)(int, int a2))(hkpShapeBase::Self *))sub_16BFFB0));
  hkpShapeBaseTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16BFF90));
  hkpShapeBaseTypeInfo[0] = (uint32_t)(uintptr_t)("hkpShapeBase");
  hkpShapeBaseTypeInfo[4] = v1;
  hkpShapeBaseTypeInfo[5] = 12;
  return (uint32_t *)(hkpShapeBaseTypeInfo);
}


// ============================================================================
// Address:   0x16c0100 (size: 142 bytes)
// Symbol:    sub_16C0100
// Demangled: sub_16C0100
// ============================================================================
void sub_16C0100()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpCollidableCollidableFilterClass,
    "hkpCollidableCollidableFilter",
    nullptr,
    4,
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}


// ============================================================================
// Address:   0x16c1c88 (size: 1 bytes)
// Symbol:    nullsub_715
// Demangled: nullsub_715
// ============================================================================
void nullsub_715()
{
  ;
}


// ============================================================================
// Address:   0x16c1c98 (size: 1 bytes)
// Symbol:    nullsub_716
// Demangled: nullsub_716
// ============================================================================
void nullsub_716()
{
  ;
}


// ============================================================================
// Address:   0x16c1ca8 (size: 1 bytes)
// Symbol:    nullsub_717
// Demangled: nullsub_717
// ============================================================================
void nullsub_717()
{
  ;
}


// ============================================================================
// Address:   0x16c1cb0 (size: 20 bytes)
// Symbol:    sub_16C1CB0
// Demangled: sub_16C1CB0
// ============================================================================
int sub_16C1CB0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x16c1cd0 (size: 45 bytes)
// Symbol:    sub_16C1CD0
// Demangled: sub_16C1CD0
// ============================================================================
int sub_16C1CD0(int a1, int a2)
{
  return (int)(uintptr_t)(hkpCompressedMeshShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x16c1d00 (size: 88 bytes)
// Symbol:    sub_16C1D00
// Demangled: sub_16C1D00
// ============================================================================
int sub_16C1D00(uint32_t *a1)
{
  int result;

  result = a1[6];
  a1[5] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a1[4],
               2 * (result & 0x3FFFFFFF));
  a1[4] = 0;
  a1[6] = 0x80000000;
  return result;
}


// ============================================================================
// Address:   0x16c1d60 (size: 268 bytes)
// Symbol:    sub_16C1D60
// Demangled: sub_16C1D60
// ============================================================================
int sub_16C1D60(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1[15];
  a1[14] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[13],
      2 * (v1 & 0x3FFFFFFF));
  v2 = a1[12];
  a1[13] = 0;
  a1[15] = 0x80000000;
  a1[11] = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[10],
      2 * (v2 & 0x3FFFFFFF));
  v3 = a1[9];
  a1[10] = 0;
  a1[12] = 0x80000000;
  a1[8] = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[7],
      2 * (v3 & 0x3FFFFFFF));
  result = a1[6];
  a1[7] = 0;
  a1[9] = 0x80000000;
  a1[5] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a1[4],
               2 * (result & 0x3FFFFFFF));
  a1[4] = 0;
  a1[6] = 0x80000000;
  return result;
}


// ============================================================================
// Address:   0x16c1ef0 (size: 771 bytes)
// Symbol:    sub_16C1EF0
// Demangled: sub_16C1EF0
// ============================================================================
uint32_t *sub_16C1EF0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpCompressedMeshShapeChunkClass,
    "hkpCompressedMeshShapeChunk",
    nullptr,
    80,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039EE0,
    8,
    nullptr,
    nullptr,
    0,
    4u);
  hkpCompressedMeshShapeChunkTypeInfo = (uint32_t)(uintptr_t)("hkpCompressedMeshShapeChunk");
  unk_2125234 = (uintptr_t)("!hkpCompressedMeshShape::Chunk");
  unk_2125240 = (uintptr_t)(0);
  unk_2125244 = (uintptr_t)(80);
  unk_2125238 = (uintptr_t)((&g4_noop_ret0));
  unk_212523C = (uintptr_t)(((int (*)(uint32_t *))sub_16C1D60));
  hkClass::Construct(
    (hkClass::Self *)&hkpCompressedMeshShapeBigTriangleClass,
    "hkpCompressedMeshShapeBigTriangle",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039E40,
    6,
    &unk_1D164FC,
    nullptr,
    0,
    2u);
  hkpCompressedMeshShapeBigTriangleTypeInfo = (uint32_t)(uintptr_t)("hkpCompressedMeshShapeBigTriangle");
  unk_21251D4 = (uintptr_t)("!hkpCompressedMeshShape::BigTriangle");
  unk_21251D8 = (uintptr_t)(0);
  unk_21251E0 = (uintptr_t)(0);
  unk_21251E4 = (uintptr_t)(16);
  unk_21251DC = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpCompressedMeshShapeConvexPieceClass,
    "hkpCompressedMeshShapeConvexPiece",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039DE0,
    4,
    nullptr,
    nullptr,
    0,
    4u);
  hkpCompressedMeshShapeConvexPieceTypeInfo = (uint32_t)(uintptr_t)("hkpCompressedMeshShapeConvexPiece");
  unk_2125174 = (uintptr_t)("!hkpCompressedMeshShape::ConvexPiece");
  unk_2125180 = (uintptr_t)(0);
  unk_2125184 = (uintptr_t)(32);
  unk_2125178 = (uintptr_t)((&g4_noop_ret0));
  unk_212517C = (uintptr_t)(((int (*)(uint32_t *))sub_16C1D00));
  dword_20C79C0 = (int)hkpWeldingUtilityWeldingTypeEnum[0];
  dword_20C79D8 = (int)hkpCompressedMeshShapeMaterialTypeEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkpCompressedMeshShapeClass,
    "hkpCompressedMeshShape",
    (const hkClass::Self *)&hkpShapeCollectionClass,
    224,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039FA0,
    1,
    (const hkClassMember::Self *)&off_20C7940,
    22,
    &unk_1D164A0,
    nullptr,
    0,
    0xBu);
  hkpCompressedMeshShape::Construct(&v1, 0);
  hkpCompressedMeshShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpCompressedMeshShape");
  hkpCompressedMeshShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_16C1CD0));
  hkpCompressedMeshShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_16C1CB0));
  hkpCompressedMeshShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpCompressedMeshShape");
  hkpCompressedMeshShapeTypeInfo[4] = v1;
  hkpCompressedMeshShapeTypeInfo[5] = 224;
  return (uint32_t *)(hkpCompressedMeshShapeTypeInfo);
}


// ============================================================================
// Address:   0x16c22e0 (size: 743 bytes)
// Symbol:    sub_16C22E0
// Demangled: sub_16C22E0
// ============================================================================
int sub_16C22E0(float *a1, float *a2, int a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  float *v9;
  int v10;
  __m128i v11; // xmm6
  float v12; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  __m128i v18; // xmm3
  float v19; // xmm2_4
  float v20; // xmm1_4
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  float v23; // xmm5_4
  int v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  int v27;
  int v28; // xmm2_4
  int v29;
  int v30;
  uint32_t *v31;
  uint64_t v32; // rax
  int *v34;
  int v36;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v34 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtrcMultiSpher");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  if ( a3 <= 0 )
  {
    v36 = 0;
  }
  else
  {
    v9 = a2;
    v10 = 0;
    v36 = 0;
    do
    {
      while ( 1 )
      {
g4_m128_raw(v11) = *(unsigned int *)a1;
g4_m128_raw(v18) = *((unsigned int *)a1 + 4);
        *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) - *v9;
        v12 = v9[1];
        v13 = a1[1] - v12;
        v14 = a1[5] - v12;
        v15 = v9[2];
        v16 = a1[2] - v15;
        v17 = a1[6] - v15;
        v21 = v11;
        *(float *)g4_m128_ptr<int32_t>(v18) = (float)(*(float *)g4_m128_ptr<int32_t>(v18) - *v9) - *(float *)g4_m128_ptr<int32_t>(v11);
        v19 = v14 - v13;
        v20 = v17 - v16;
        *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v13 * v19))
                                + (float)(v16 * v20);
        *(float *)g4_m128_ptr<int32_t>(v21) = *(float *)g4_m128_ptr<int32_t>(v21) + *(float *)g4_m128_ptr<int32_t>(v21);
        if ( *(float *)g4_m128_ptr<int32_t>(v21) < 0.0 )
        {
          *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18))
                                          + (float)(v19 * v19))
                                  + (float)(v20 * v20);
          v22 = v21;
          *(float *)g4_m128_ptr<int32_t>(v22) = (float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)g4_m128_ptr<int32_t>(v21))
                                  - (float)((float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11)
                                                                          * *(float *)g4_m128_ptr<int32_t>(v11))
                                                                  + (float)(v13 * v13))
                                                          + (float)(v16 * v16))
                                                  - (float)(v9[3] * v9[3]))
                                          * (float)(4.0 * *(float *)g4_m128_ptr<int32_t>(v18)));
          if ( *(float *)g4_m128_ptr<int32_t>(v22) > 0.0 )
          {
            v23 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v22);
            v24 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
            v25 = (float)(1.5 * *(float *)&v24)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v24)
                        * (float)(*(float *)&v24 * *(float *)&v24));
            v26 = (float)((float)-*(float *)g4_m128_ptr<int32_t>(v21)
                        - (float)((float)((float)(1.5
                                                * (float)((float)(1.5 * v25)
                                                        - (float)((float)(v23 * v25) * (float)(v25 * v25))))
                                        - (float)((float)(v23
                                                        * (float)((float)(1.5 * v25)
                                                                - (float)((float)(v23 * v25) * (float)(v25 * v25))))
                                                * (float)((float)((float)(1.5 * v25)
                                                                - (float)((float)(v23 * v25) * (float)(v25 * v25)))
                                                        * (float)((float)(1.5 * v25)
                                                                - (float)((float)(v23 * v25) * (float)(v25 * v25))))))
                                * *(float *)g4_m128_ptr<int32_t>(v22)))
                * 0.5;
            if ( v26 < *(float *)g4_m128_ptr<int32_t>(v18) && v26 >= 0.0 )
              break;
          }
        }
        ++v10;
        v9 += 4;
        if ( v10 == a3 )
          goto LABEL_11;
      }
      v27 = _mm_cvtsi128_si32(v18);
      v28 = (2130706432 - v27) & ((v27 ^ (v27 + 2139095040)) >> 31);
      v29 = v36++;
      v9 += 4;
      *(float *)(a4 + 4 * v29) = (float)((float)(2.0
                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                                                       * (float)((float)(2.0
                                                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                                                                               * (float)((float)(2.0
                                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v28))
                                                                                       * *(float *)&v28)))
                                                               * (float)((float)(2.0
                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                                                                                       * *(float *)&v28))
                                                                       * *(float *)&v28))))
                                       * (float)((float)(2.0
                                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                                                               * (float)((float)(2.0
                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                                                                                       * *(float *)&v28))
                                                                       * *(float *)&v28)))
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v28))
                                                       * *(float *)&v28)))
                               * v26;
      *(uint32_t *)(a5 + 4 * v29) = v10++;
    }
    while ( v10 != a3 );
  }
LABEL_11:
  v30 = *v34;
  v31 = *(uint32_t **)(*v34 + 4);
  if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*v34 + 12) )
  {
    *v31 = (uint32_t)(uintptr_t)("Et");
    v32 = __rdtsc();
    v31[1] = v32;
    *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
  }
  return v36;
}

