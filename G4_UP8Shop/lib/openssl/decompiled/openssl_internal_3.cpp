#include "Core/Utils/DecompTypes.h"
#include "openssl_internal_3.h"
extern "C" int g4_noop_ret0();

// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_3.cpp
// Library: openssl | Module: openssl_internal_3
// Binary Address Span: 0x1ace420 .. 0x1b12ee0 (91 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1ace420 (size: 460 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN23hkGeomConvexHullBuilder12WeightedLineEPF6hkBoolRKS2_S5_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkGeomConvexHullBuilder::WeightedLine,hkBool (*)(hkGeomConvexHullBuilder::WeightedLine const&,hkGeomConvexHullBuilder::WeightedLine const&)>(hkGeomConvexHullBuilder::WeightedLine *,int,int,hkBool (*)(hkGeomConvexHullBuilder::WeightedLine const&,hkGeomConvexHullBuilder::WeightedLine const&))
// ============================================================================
int hkAlgorithm::quickSortRecursive_7cb336(
        int a1,
        int a2,
        int a3,
        void (*a4)(char *))
{
  int i;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int result;
  uint32_t *v12;
  int v13; // xmm0_4
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_j;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef void (*_g4_t_v25)(char *);
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v21)) > _g4_s6 ? (20u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_j)) > _g4_s7 ? (24u + sizeof(_g4_t_j)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v23)) > _g4_s8 ? (28u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (47u + sizeof(_g4_t_v26)) > _g4_s11 ? (47u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v27)) > _g4_s12 ? (48u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v28)) > _g4_s13 ? (52u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v29)) > _g4_s14 ? (56u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v30)) > _g4_s15 ? (60u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v31)) > _g4_s16 ? (64u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v32)) > _g4_s17 ? (88u + sizeof(_g4_t_v32)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 47u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);

  v32 = &a1;
  v18 = a1;
  v16 = a2;
  v15 = a3;
  v25 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v15;
    v6 = (int *)(v18 + 20 * ((v15 + i) >> 1));
    v27 = *v6;
    v28 = v6[1];
    v29 = v6[2];
    v7 = v6[3];
    v8 = v6[4];
    v30 = v7;
    v31 = v8;
    v21 = (uint32_t *)(v18 + 20 * i);
    v9 = i + 1;
    for ( j = i + 1; ; v9 = j )
    {
      v19 = v9 - 1;
      v25(&v26);
      if ( v26 == 0 )
      {
        v10 = (uint32_t *)(v18 + 20 * v5);
        while ( 1 )
        {
          v23 = v10;
          v25(&v26);
          v10 -= 5;
          if ( v26 == 0 )
            break;
          --v5;
        }
        if ( v19 > v5 )
          break;
        if ( v19 != v5 )
        {
          v12 = v23;
          v13 = v23[4];
          v20 = v23[2];
          v17 = v23[3];
          v24 = *v23;
          v14 = v12[1];
          *v12 = *v21;
          v12[1] = v21[1];
          v12[2] = v21[2];
          v12[3] = v21[3];
          v12[4] = v21[4];
          v21[1] = v14;
          v21[2] = v20;
          *v21 = v24;
          v21[3] = v17;
          v21[4] = v13;
        }
        --v5;
        v19 = j;
        if ( v5 < j )
          break;
      }
      ++j;
      v21 += 5;
    }
    if ( v16 < v5 )
      break;
    result = v19;
    if ( v15 <= v19 )
      return result;
LABEL_10:
    v16 = result;
  }
  hkAlgorithm::quickSortRecursive_7cb336(
    v18,
    v16,
    v5,
    v25);
  result = v19;
  if ( v15 > v19 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x1ace5f0 (size: 353 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN23hkGeomConvexHullBuilder17WeightedNeighbourEPF6hkBoolRKS2_S5_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkGeomConvexHullBuilder::WeightedNeighbour,hkBool (*)(hkGeomConvexHullBuilder::WeightedNeighbour const&,hkGeomConvexHullBuilder::WeightedNeighbour const&)>(hkGeomConvexHullBuilder::WeightedNeighbour *,int,int,hkBool (*)(hkGeomConvexHullBuilder::WeightedNeighbour const&,hkGeomConvexHullBuilder::WeightedNeighbour const&))
// ============================================================================
int hkAlgorithm::quickSortRecursive_778b5a(
        int a1,
        int a2,
        int a3,
        void (*a4)(char *))
{
  int i;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int result;
  int v12; // xmm0_4
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_j;
  typedef int *_g4_t_v21;
  typedef void (*_g4_t_v22)(char *);
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_j)) > _g4_s5 ? (20u + sizeof(_g4_t_j)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v23)) > _g4_s8 ? (43u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v26)) > _g4_s11 ? (68u + sizeof(_g4_t_v26)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 43u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);

  v26 = &a1;
  v17 = a1;
  v16 = a2;
  v15 = a3;
  v22 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v15;
    v6 = (int *)(v17 + 8 * ((v15 + i) >> 1));
    v7 = *v6;
    v8 = v6[1];
    v24 = v7;
    v9 = i + 1;
    v25 = v8;
    v19 = i + 1;
    for ( j = (int *)(v17 + 8 * i); ; j += 2 )
    {
      v18 = v9 - 1;
      v22(&v23);
      if ( v23 == 0 )
      {
        v10 = (int *)(v17 + 8 * v5);
        while ( 1 )
        {
          v21 = v10;
          v22(&v23);
          v10 -= 2;
          if ( v23 == 0 )
            break;
          --v5;
        }
        if ( v18 > v5 )
          break;
        if ( v18 != v5 )
        {
          v12 = v21[1];
          v13 = j[1];
          v14 = *v21;
          *v21 = *j;
          v21[1] = v13;
          j[1] = v12;
          *j = v14;
        }
        --v5;
        v18 = v19;
        if ( v5 < v19 )
          break;
      }
      v9 = ++v19;
    }
    if ( v16 < v5 )
      break;
    result = v18;
    if ( v15 <= v18 )
      return result;
LABEL_10:
    v16 = result;
  }
  hkAlgorithm::quickSortRecursive_778b5a(
    v17,
    v16,
    v5,
    v22);
  result = v18;
  if ( v15 > v18 )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_1ACE760  (binary VA: 0x1ace760)
// Original: sub_1ACE760
// ----------------------------------------------------------------------------
int sub_1ACE760(int a1, int a2)
{
  int v2;
  int v3;
  float v4; // xmm1_4
  float *v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  int i;
  float v16; // xmm1_4
  float *j;
  int v18;
  int v19;
  int v20;
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v28;
  int v29;
  int v30;
  int v32;
  int v33;

  v2 = a2;
  v30 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(float *)(a1 + 8 * ((v2 + v3) >> 1) + 4);
    v5 = (float *)(a1 + 8 * v3);
    v6 = v3 + 1;
    v33 = v3 + 1;
    while ( 1 )
    {
      v7 = v6 - 1;
      if ( v4 <= v5[1] )
      {
        v28 = a1 + 8 * v2;
        v8 = *(float *)(v28 + 4);
        v9 = v28 - 8;
        if ( v8 > v4 )
        {
          do
          {
            v8 = *(float *)(v9 + 4);
            --v2;
            v10 = v9;
            v9 -= 8;
          }
          while ( v8 > v4 );
          v28 = v10;
        }
        if ( v2 < v7 )
          break;
        if ( v2 != v7 )
        {
          v13 = *((uint32_t *)v5 + 1);
          v25 = *(uint32_t *)v28;
          *(float *)v28 = *v5;
          *(uint32_t *)(v28 + 4) = v13;
          *(uint32_t *)v5 = v25;
          v5[1] = v8;
        }
        --v2;
        v7 = v6;
        if ( v2 < v6 )
          break;
      }
      v5 += 2;
      ++v6;
    }
    v32 = v7;
    v11 = v33;
    if ( v30 < v2 )
    {
      v29 = v2;
      v14 = v2;
      for ( i = v30; ; i = v18 )
      {
        v26 = v14;
        v16 = *(float *)(a1 + 8 * ((i + v14) >> 1) + 4);
        for ( j = (float *)(a1 + 8 * i); ; j += 2 )
        {
          v18 = v11 - 1;
          if ( v16 <= j[1] )
          {
            v19 = a1 + 8 * v26;
            v20 = v19 - 8;
            v21 = *(float *)(v19 + 4);
            if ( v21 > v16 )
            {
              v22 = v26;
              do
              {
                v21 = *(float *)(v20 + 4);
                --v22;
                v19 = v20;
                v20 -= 8;
              }
              while ( v21 > v16 );
              v26 = v22;
            }
            if ( v26 < v18 )
              break;
            if ( v26 != v18 )
            {
              v23 = *(uint32_t *)v19;
              v24 = *((uint32_t *)j + 1);
              *(float *)v19 = *j;
              *(uint32_t *)(v19 + 4) = v24;
              *(uint32_t *)j = v23;
              j[1] = v21;
            }
            --v26;
            v18 = v11;
            if ( v26 < v11 )
              break;
          }
          ++v11;
        }
        if ( v30 < v26 )
          hkAlgorithm::quickSortRecursive_778b5a(
            a1,
            v30,
            v26,
            (void (*)(char *))sub_1AC6680);
        if ( v18 >= v29 )
          break;
        v30 = v18;
        v11 = v18 + 1;
        v14 = v29;
      }
    }
    result = v32;
    if ( a2 <= v32 )
      break;
    v30 = v32;
    v3 = v32;
    v2 = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1AD19F0  (binary VA: 0x1ad19f0)
// Original: sub_1AD19F0
// ----------------------------------------------------------------------------
void sub_1AD19F0()
{
  byte_2142CA0 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3C60  (binary VA: 0x1ad3c60)
// Original: sub_1AD3C60
// ----------------------------------------------------------------------------
int sub_1AD3C60(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3C80  (binary VA: 0x1ad3c80)
// Original: sub_1AD3C80
// ----------------------------------------------------------------------------
int sub_1AD3C80(int a1, int a2)
{
  return (int)(uintptr_t)(hkpTriSampledHeightFieldCollection::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3CD0  (binary VA: 0x1ad3cd0)
// Original: sub_1AD3CD0
// ----------------------------------------------------------------------------
uint32_t * sub_1AD3CD0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpTriSampledHeightFieldCollectionClass,
    "hkpTriSampledHeightFieldCollection",
    (const hkClass::Self *)&hkpShapeCollectionClass,
    64,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpTriSampledHeightFieldCollection::Members,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkpTriSampledHeightFieldCollection::Construct((int)(uintptr_t)(&v1), 0);
  hkpTriSampledHeightFieldCollectionTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpTriSampledHeightFieldCollection");
  hkpTriSampledHeightFieldCollectionTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1AD3C80);
  hkpTriSampledHeightFieldCollectionTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1AD3C60);
  hkpTriSampledHeightFieldCollectionTypeInfo[0] = (uint32_t)(uintptr_t)("hkpTriSampledHeightFieldCollection");
  hkpTriSampledHeightFieldCollectionTypeInfo[4] = v1;
  hkpTriSampledHeightFieldCollectionTypeInfo[5] = 64;
  return hkpTriSampledHeightFieldCollectionTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3DB0  (binary VA: 0x1ad3db0)
// Original: sub_1AD3DB0
// ----------------------------------------------------------------------------
int sub_1AD3DB0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3DD0  (binary VA: 0x1ad3dd0)
// Original: sub_1AD3DD0
// ----------------------------------------------------------------------------
int sub_1AD3DD0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3DF0  (binary VA: 0x1ad3df0)
// Original: sub_1AD3DF0
// ----------------------------------------------------------------------------
int sub_1AD3DF0(int a1, int a2)
{
  return ((hkpStorageMeshShape::Construct((uint32_t *)(uintptr_t)(a1), a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3E20  (binary VA: 0x1ad3e20)
// Original: sub_1AD3E20
// ----------------------------------------------------------------------------
int sub_1AD3E20(int a1)
{
  return (int)(uintptr_t)(hkpStorageMeshShape::SubpartStorage::Construct(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1AD3E90  (binary VA: 0x1ad3e90)
// Original: sub_1AD3E90
// ----------------------------------------------------------------------------
uint32_t * sub_1AD3E90()
{
  uint32_t v1[31];

  hkClass::Construct(
    (hkClass::Self *)&hkpStorageMeshShapeSubpartStorageClass,
    "hkpStorageMeshShapeSubpartStorage",
    (const hkClass::Self *)&hkReferencedObjectClass,
    80,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20472C0,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkpStorageMeshShape::SubpartStorage::Construct(v1);
  *(uintptr_t *)(unk_2142D74) = (uintptr_t)("!hkpStorageMeshShape::SubpartStorage");
  *(uintptr_t *)(unk_2142D78) = (uintptr_t)(sub_1AD3E20);
  *(uintptr_t *)(unk_2142D7C) = (uintptr_t)(sub_1AD3DB0);
  *(uintptr_t *)(unk_2142D80) = (uintptr_t)(v1[0]);
  hkpStorageMeshShapeSubpartStorageTypeInfo = (uint32_t)(uintptr_t)("hkpStorageMeshShapeSubpartStorage");
  *(uintptr_t *)(unk_2142D84) = (uintptr_t)(80);
  hkClass::Construct(
    (hkClass::Self *)&hkpStorageMeshShapeClass,
    "hkpStorageMeshShape",
    (const hkClass::Self *)&hkpMeshShapeClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpStorageMeshShape::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkpStorageMeshShape::Construct(v1, 0);
  hkpStorageMeshShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpStorageMeshShape");
  hkpStorageMeshShapeTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1AD3DF0);
  hkpStorageMeshShapeTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1AD3DD0);
  hkpStorageMeshShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpStorageMeshShape");
  hkpStorageMeshShapeTypeInfo[4] = v1[0];
  hkpStorageMeshShapeTypeInfo[5] = 112;
  return hkpStorageMeshShapeTypeInfo;
}



// ============================================================================
// Address:   0x1ad4050 (size: 10 bytes)
// Symbol:    _ZThn16_NK34hkpTriSampledHeightFieldCollection11getFirstKeyEv
// Demangled: `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getFirstKey(void)const
// ============================================================================
static int g4_thunk_1()
{
  return hkpTriSampledHeightFieldCollection::getFirstKey();
}


// ============================================================================
// Address:   0x1ad40e0 (size: 10 bytes)
// Symbol:    _ZThn16_NK34hkpTriSampledHeightFieldCollection22getCollisionFilterInfoEj
// Demangled: `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getCollisionFilterInfo(unsigned int)const
// ============================================================================
static int g4_thunk_2()
{
  return hkpTriSampledHeightFieldCollection::getCollisionFilterInfo();
}


// ============================================================================
// Address:   0x1ad4140 (size: 10 bytes)
// Symbol:    _ZThn16_NK34hkpTriSampledHeightFieldCollection10getNextKeyEj
// Demangled: `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getNextKey(unsigned int)const
// ============================================================================
static unsigned int g4_thunk_3(
        hkpTriSampledHeightFieldCollection::Self *self,
        unsigned int a2)
{
  return hkpTriSampledHeightFieldCollection::getNextKey((hkpTriSampledHeightFieldCollection::Self *)((char *)self - 16), a2);
}


// ============================================================================
// Address:   0x1ad4220 (size: 10 bytes)
// Symbol:    _ZThn16_N34hkpTriSampledHeightFieldCollectionD1Ev
// Demangled: `non-virtual thunk to'hkpTriSampledHeightFieldCollection::Destroy()
// ============================================================================
static void g4_thunk_4(
        hkpTriSampledHeightFieldCollection::Self *self)
{
  hkpTriSampledHeightFieldCollection::Destroy((hkpTriSampledHeightFieldCollection::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1ad4290 (size: 10 bytes)
// Symbol:    _ZThn16_N34hkpTriSampledHeightFieldCollectionD0Ev
// Demangled: `non-virtual thunk to'hkpTriSampledHeightFieldCollection::Destroy()
// ============================================================================
static void g4_thunk_5(
        hkpTriSampledHeightFieldCollection::Self *self)
{
  hkpTriSampledHeightFieldCollection::Destroy((hkpTriSampledHeightFieldCollection::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1ad4770 (size: 10 bytes)
// Symbol:    _ZThn16_NK34hkpTriSampledHeightFieldCollection13getChildShapeEjR21hkpShapeBufferStorage
// Demangled: `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// ============================================================================
static uint32_t *g4_thunk_6(
        int a1,
        unsigned int a2,
        int a3)
{
  return hkpTriSampledHeightFieldCollection::getChildShape((hkpTriSampledHeightFieldCollection::Self *)(a1 - 16), a2, a3);
}


// ============================================================================
// Address:   0x1ad4930 (size: 27 bytes)
// Symbol:    _ZltRK7hkEntryS1_
// Demangled: operator<(hkEntry const&,hkEntry const&)
// ============================================================================
bool *g4_hkEntry_lt(bool *a1, int a2, int a3)
{
  *a1 = *(float *)(a3 + 8) > *(float *)(a2 + 8);
  return a1;
}


// ============================================================================
// Address:   0x1ad4950 (size: 63 bytes)
// Symbol:    _ZneRK7hkEntryS1_
// Demangled: operator!=(hkEntry const&,hkEntry const&)
// ============================================================================
bool *g4_hkEntry_ne(bool *a1, int a2, int a3)
{
  *a1 = fabs(*(float *)(a2 + 8) - *(float *)(a3 + 8)) > 0.001f;
  return a1;
}


// ============================================================================
// Address:   0x1ad63d0 (size: 396 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveI7hkEntryNS_4lessIS1_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkEntry,hkAlgorithm::less<hkEntry>>(hkEntry *,int,int,hkAlgorithm::less<hkEntry>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_5ae545(int a1, int a2, int a3)
{
  int i;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11; // xmm2_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_j;
  typedef int *_g4_t_v20;
  typedef bool _g4_t_v21;
  typedef uint32_t _g4_t_v22[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_j)) > _g4_s5 ? (20u + sizeof(_g4_t_j)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (39u + sizeof(_g4_t_v21)) > _g4_s7 ? (39u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v22)) > _g4_s8 ? (40u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 39u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);

  v22[6] = (uint32_t)(uintptr_t)(&a1);
  v16 = a1;
  v15 = a2;
  v14 = a3;
  for ( i = a2; ; i = result )
  {
    v4 = v14;
    v5 = (uint32_t *)(v16 + 12 * ((v14 + i) >> 1));
    v22[0] = *v5;
    v6 = v5[1];
    v7 = v5[2];
    v22[1] = v6;
    v22[2] = v7;
    v18 = (int *)(v16 + 12 * i);
    v8 = i + 1;
    for ( j = i + 1; ; v8 = j )
    {
      v17 = v8 - 1;
      g4_hkEntry_lt(&v21, (int)(uintptr_t)(v18), (int)(uintptr_t)(v22));
      if ( !v21 )
      {
        v9 = v16 + 12 * v4;
        while ( 1 )
        {
          v20 = (int *)v9;
          g4_hkEntry_lt(&v21, (int)(uintptr_t)(v22), v9);
          v9 -= 12;
          if ( !v21 )
            break;
          --v4;
        }
        if ( v17 > v4 )
          break;
        if ( v17 != v4 )
        {
          v11 = *v20;
          v12 = v20[1];
          v13 = v20[2];
          *v20 = *v18;
          v20[1] = v18[1];
          v20[2] = v18[2];
          *v18 = v11;
          v18[1] = v12;
          v18[2] = v13;
        }
        --v4;
        v17 = j;
        if ( v4 < j )
          break;
      }
      ++j;
      v18 += 3;
    }
    if ( v15 < v4 )
      break;
    result = v17;
    if ( v14 <= v17 )
      return result;
LABEL_10:
    v15 = result;
  }
  hkAlgorithm::quickSortRecursive_5ae545(v16);
  result = v17;
  if ( v14 > v17 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x1adc240 (size: 64 bytes)
// Symbol:    _Z21hasDifferentMaterialsRK10hkGeometry
// Demangled: hasDifferentMaterials(hkGeometry const&)
// ============================================================================
int hasDifferentMaterials(const hkGeometry::Self *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = *((uint32_t *)a1 + 5);
  v2 = *((uint32_t *)a1 + 6);
  v3 = *(uint32_t *)(v1 + 12);
  if ( v2 <= 1 )
    return 0;
  if ( v3 == *(uint32_t *)(v1 + 28) )
  {
    v4 = 1;
    while ( ++v4 != v2 )
    {
      if ( v3 != *(uint32_t *)(v1 + 16 * v4 + 12) )
        return 1;
    }
    return 0;
  }
  return 1;
}


// ============================================================================
// Address:   0x1add8f0 (size: 323 bytes)
// Symbol:    _Z9addVertexR10hkGeometryRK10hkVector4f
// Demangled: addVertex(hkGeometry &,hkVector4f const&)
// ============================================================================
int addVertex(hkGeometry::Self *a1, const hkVector4f::Self *a2)
{
  hkGeometry::Self *v2;
  const hkVector4f::Self *v3;
  int v4;
  float *v5;
  float v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  int v9;
  int v10;
  bool v11;
  float v12; // xmm1_4
  int v13;
  bool v14;
  int result;
  uint32_t *v16;
  int v17;

  v2 = a1;
  v3 = a2;
  v4 = *((uint32_t *)a1 + 3);
  if ( v4 > 0 )
  {
    v5 = *((float **)a1 + 2);
    v6 = *(float *)a2;
    v17 = 0;
    v7 = *((float *)a2 + 2);
    v8 = *((float *)a2 + 3);
    do
    {
      v12 = *v5;
      if ( *((float *)a2 + 1) == v5[1] )
      {
        v9 = 2;
        v10 = 6;
        if ( v7 != v5[2] )
          v10 = 2;
        if ( !__builtin_isunordered(v7, v5[2]) )
          v9 = v10;
        v11 = v8 == v5[3];
      }
      else
      {
        v9 = 0;
        v13 = 4;
        if ( v7 != v5[2] )
          v13 = 0;
        if ( !__builtin_isunordered(v7, v5[2]) )
          v9 = v13;
        v11 = v8 == v5[3];
      }
      if ( v11 )
      {
        v14 = false;
        if ( v12 == v6 )
          v14 = !__builtin_isunordered(v12, v6);
        if ( (v9 | v14 | 8) == 0xF )
          return v17;
      }
      ++v17;
      v5 += 4;
    }
    while ( v17 != v4 );
    v3 = a2;
    v2 = a1;
  }
  if ( v4 == (*((uint32_t *)v2 + 4) & 0x3FFFFFFF) )
  {
    G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), 
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkGeometry::Self *)((char *)a1 + 8),
      16,
      v17);
    v4 = *((uint32_t *)a1 + 3);
  }
  v16 = (uint32_t *)(*((uint32_t *)a1 + 2) + 16 * v4);
  *v16 = *(uint32_t *)v3;
  v16[1] = *((uint32_t *)v3 + 1);
  v16[2] = *((uint32_t *)v3 + 2);
  v16[3] = *((uint32_t *)v3 + 3);
  result = *((uint32_t *)a1 + 3);
  *((uint32_t *)a1 + 3) = result + 1;
  return result;
}


// ============================================================================
// Address:   0x1ae2180 (size: 1189 bytes)
// Symbol:    _Z13projectOnEdgeR10hkVector4fRKS_S2_
// Demangled: projectOnEdge(hkVector4f &,hkVector4f const&,hkVector4f const&)
// ============================================================================
void projectOnEdge(hkVector4f::Self *a1, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  __m128i v3; // xmm7
  __m128i v4; // xmm0
  float v5; // xmm3_4
  int v6; // xmm2_4
  __m128i v7; // xmm4
  float v8; // xmm1_4
  int v9;
  int v10;
  __m128i v11; // xmm0
  int v12;
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  __m128i v17; // xmm0
  int v18;
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  int v22;
  int v23;
  int v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef int _g4_t_v34[3];
  typedef int _g4_t_v35[135];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v27)) > _g4_s2 ? (8u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v28)) > _g4_s3 ? (12u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v29)) > _g4_s4 ? (16u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v30)) > _g4_s5 ? (32u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v31)) > _g4_s6 ? (36u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v32)) > _g4_s7 ? (40u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v33)) > _g4_s8 ? (44u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v34)) > _g4_s9 ? (52u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v35)) > _g4_s10 ? (64u + sizeof(_g4_t_v35)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);

  v27 = *(float *)a2;
  v29 = *((float *)a2 + 2);
  v3 = _mm_cvtsi32_si128(*(uint32_t *)a3);
  *(float *)g4_m128_ptr<int32_t>(v3) = *(float *)g4_m128_ptr<int32_t>(v3) - *(float *)a2;
  v28 = *((float *)a2 + 1);
  v4 = v3;
  v30 = *((float *)a3 + 1) - v28;
  v32 = *((float *)a3 + 3);
  v33 = *((float *)a2 + 3);
  v31 = *((float *)a3 + 2) - v29;
  *(float *)g4_m128_ptr<int32_t>(v4) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)g4_m128_ptr<int32_t>(v4)) + (float)(v30 * v30))
                         + (float)(v31 * v31);
  if ( *(float *)g4_m128_ptr<int32_t>(v4) <= 0.0 )
  {
    v26 = 0.0;
  }
  else
  {
    v5 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v4);
    v6 = ((_mm_cvtsi128_si32(v4) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v4) >> 1));
g4_m128_raw(v7) = 0x3FC00000u;
    v8 = (float)(*(float *)&v6 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4)) * *(float *)&v6) * (float)(*(float *)&v6 * *(float *)&v6));
    *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(1.5
                                           * (float)((float)(v8 * 1.5) - (float)((float)(v5 * v8) * (float)(v8 * v8))))
                                   - (float)((float)(v5
                                                   * (float)((float)(v8 * 1.5)
                                                           - (float)((float)(v5 * v8) * (float)(v8 * v8))))
                                           * (float)((float)((float)(v8 * 1.5)
                                                           - (float)((float)(v5 * v8) * (float)(v8 * v8)))
                                                   * (float)((float)(v8 * 1.5)
                                                           - (float)((float)(v5 * v8) * (float)(v8 * v8))))))
                           * *(float *)g4_m128_ptr<int32_t>(v4);
    v9 = _mm_cvtsi128_si32(v7);
    v10 = (2130706432 - v9) & ((v9 ^ (v9 + 2139095040)) >> 31);
    v26 = (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v7)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)&v10))
                                        * *(float *)&v10)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)&v10)) * *(float *)&v10))
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v7)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v7)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)&v10))
                                                        * *(float *)&v10)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)&v10))
                                        * *(float *)&v10))));
  }
g4_m128_raw(v11) = *(unsigned int *)a1;
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) - v27)
                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v11) - v27))
                                  + (float)((float)(*((float *)a1 + 1) - v28) * (float)(*((float *)a1 + 1) - v28)))
                          + (float)((float)(*((float *)a1 + 2) - v29) * (float)(*((float *)a1 + 2) - v29));
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.0 )
  {
    v15 = 0.0;
  }
  else
  {
    v12 = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
    v13 = (float)(*(float *)&v12 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * *(float *)&v12)
                * (float)(*(float *)&v12 * *(float *)&v12));
    v14 = (float)(v13 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v13) * (float)(v13 * v13));
    v15 = (float)((float)(1.5 * v14)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v14) * (float)(v14 * v14)))
        * *(float *)g4_m128_ptr<int32_t>(v11);
  }
  v17 = _mm_cvtsi32_si128(*(uint32_t *)a3);
  v16 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) - *(float *)a1)
                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v17) - *(float *)a1))
                                  + (float)((float)(*((float *)a3 + 1) - *((float *)a1 + 1))
                                          * (float)(*((float *)a3 + 1) - *((float *)a1 + 1))))
                          + (float)((float)(*((float *)a3 + 2) - *((float *)a1 + 2))
                                  * (float)(*((float *)a3 + 2) - *((float *)a1 + 2)));
  if ( *(float *)g4_m128_ptr<int32_t>(v17) > 0.0 )
  {
    v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)(v19 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v19) * (float)(v19 * v19));
    v16 = (float)((float)(1.5 * v20)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v20) * (float)(v20 * v20)))
        * *(float *)g4_m128_ptr<int32_t>(v17);
  }
  v21 = v15 * v26;
  if ( v21 >= 0.0 && v21 <= 1.0 )
  {
    *(float *)a1 = (float)(*(float *)g4_m128_ptr<int32_t>(v3) * v21) + v27;
    *((float *)a1 + 1) = (float)(v30 * v21) + *((float *)a2 + 1);
    *((float *)a1 + 2) = (float)(v31 * v21) + *((float *)a2 + 2);
    *((float *)a1 + 3) = (float)((float)(v32 - v33) * v21) + *((float *)a2 + 3);
  }
  else
  {
    hkErrStream::Construct((hkErrStream::Self *)v34, (hkString::Self *)v35, 512);
    v22 = hkOstream::opShl((int)(uintptr_t)(v34), (hkString::Self *)"ratio: ");
    v23 = hkOstream::opShl(v22, LODWORD(v21));
    v24 = hkOstream::opShl(v23, (hkString::Self *)", ");
    hkOstream::opShl(v24, 1.0 - (float)(v16 * v26));
    hkError::messageReport(
      (hkError::Self *)0xFFFFFFFF,
      (int)(uintptr_t)(v35),
      "Shape/Deprecated/CompressedMesh/hkpCompressedMeshShapeBuilder.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_404)->st_size + 1,
      v25);
    hkErrStream::Destroy((hkErrStream::Self *)v34);
  }
}


// ============================================================================
// Address:   0x1ae6be0 (size: 96 bytes)
// Symbol:    sub_1AE6BE0
// Demangled: sub_1AE6BE0
// ============================================================================
int sub_1AE6BE0(int a1, int a2, int a3)
{
  int result;
  float v4; // xmm0_4
  uint32_t *v5;

  result = a1;
  v4 = *(float *)(a3 + 16);
  if ( *(float *)(a1 + 4) > v4 )
  {
    *(float *)(a1 + 4) = v4;
    v5 = *(uint32_t **)(a1 + 12);
    *v5 = *(uint32_t *)a3;
    v5[1] = *(uint32_t *)(a3 + 4);
    v5[2] = *(uint32_t *)(a3 + 8);
    v5[3] = *(uint32_t *)(a3 + 12);
    *(uint32_t *)(*(uint32_t *)(a1 + 12) + 16) = *(uint32_t *)(a3 + 16);
    *(uint32_t *)(*(uint32_t *)(a1 + 12) + 20) = *(uint32_t *)(a3 + 20);
    *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * *(uint32_t *)(*(uint32_t *)(a1 + 12) + 64) + 32) = -1;
    *(uint8_t *)(a1 + 8) = 1;
  }
  return result;
}


// ============================================================================
// Address:   0x1ae6e70 (size: 29 bytes)
// Symbol:    sub_1AE6E70
// Demangled: sub_1AE6E70
// ============================================================================
uint32_t *sub_1AE6E70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20551F0);
  return a1;
}


// ============================================================================
// Address:   0x1ae6e90 (size: 29 bytes)
// Symbol:    sub_1AE6E90
// Demangled: sub_1AE6E90
// ============================================================================
uint32_t *sub_1AE6E90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20551F0);
  return a1;
}


// ============================================================================
// Address:   0x1ae6eb0 (size: 45 bytes)
// Symbol:    sub_1AE6EB0
// Demangled: sub_1AE6EB0
// ============================================================================
void sub_1AE6EB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20551F0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1ae6ee0 (size: 45 bytes)
// Symbol:    sub_1AE6EE0
// Demangled: sub_1AE6EE0
// ============================================================================
void sub_1AE6EE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20551F0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1ae7050 (size: 286 bytes)
// Symbol:    sub_1AE7050
// Demangled: sub_1AE7050
// ============================================================================
int sub_1AE7050(int a1, int a2, int a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float *v5;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  void (***v11)(uint32_t, int, float *);
  int result;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v20)) > _g4_s7 ? (28u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v3 = *(float *)(a3 + 4);
  v4 = *(float *)(a3 + 8);
  v13 = *(float *)a3;
  v14 = *(float *)(a3 + 4);
  v15 = *(float *)(a3 + 8);
  v16 = *(float *)(a3 + 12);
  v17 = *(uint32_t *)(a3 + 16);
  v18 = *(uint32_t *)(a3 + 20);
  v19 = *(uint32_t *)(a3 + 24);
  v20 = *(uint32_t *)(a3 + 28);
  v5 = *(float **)(a2 + 8);
  v6 = (float)(v5[1] * v13) + (float)(v5[5] * v3);
  v7 = (float)(v5[2] * v13) + (float)(v5[6] * v3);
  v8 = (float)(v5[3] * v13) + (float)(v5[7] * v3);
  v13 = (float)((float)(v13 * *v5) + (float)(v3 * v5[4])) + (float)(v5[8] * v4);
  v14 = v6 + (float)(v5[9] * v4);
  v9 = v5[10] * v4;
  v10 = v4 * v5[11];
  v11 = *(void (****)(uint32_t, int, float *))(a1 + 8);
  v15 = v7 + v9;
  v16 = v8 + v10;
  (**v11)((uint32_t)(uintptr_t)(v11), a2, &v13);
  result = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(result + 4);
  return result;
}


// ============================================================================
// Address:   0x1ae7a40 (size: 179 bytes)
// Symbol:    _Z13equalVerticesRK10hkVector4fS1_RK13hkSimdFloat32
// Demangled: equalVertices(hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&)
// ============================================================================
char equalVertices(float *a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm0_4
  float v6; // xmm5_4
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  char result;
  bool v12;

  v3 = a1[1];
  v4 = a2[1];
  v5 = *a1;
  v6 = *a2;
  if ( v3 == v4 )
  {
    v7 = 6;
    v8 = 2;
  }
  else
  {
    v7 = 4;
    v8 = 0;
  }
  v9 = a1[2];
  v10 = a2[2];
  if ( v9 != v10 )
    v7 = v8;
  if ( !__builtin_isunordered(v9, v10) )
    v8 = v7;
  if ( a1[3] != a2[3] )
    return (float)(*a3 * *a3) >= (float)((float)((float)((float)(v5 - v6) * (float)(v5 - v6))
                                               + (float)((float)(v3 - v4) * (float)(v3 - v4)))
                                       + (float)((float)(v9 - v10) * (float)(v9 - v10)));
  v12 = false;
  if ( v5 == v6 )
    v12 = !__builtin_isunordered(v5, v6);
  result = 1;
  if ( (v8 | v12 | 8) != 0xF )
    return (float)(*a3 * *a3) >= (float)((float)((float)((float)(v5 - v6) * (float)(v5 - v6))
                                               + (float)((float)(v3 - v4) * (float)(v3 - v4)))
                                       + (float)((float)(v9 - v10) * (float)(v9 - v10)));
  return result;
}


// ============================================================================
// Address:   0x1ae8f18 (size: 1 bytes)
// Symbol:    nullsub_883
// Demangled: nullsub_883
// ============================================================================
void nullsub_883()
{
  ;
}


// ============================================================================
// Address:   0x1ae8f20 (size: 20 bytes)
// Symbol:    sub_1AE8F20
// Demangled: sub_1AE8F20
// ============================================================================
int sub_1AE8F20(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1ae8f40 (size: 82 bytes)
// Symbol:    sub_1AE8F40
// Demangled: sub_1AE8F40
// ============================================================================
int sub_1AE8F40(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               16 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}


// ============================================================================
// Address:   0x1ae8fa0 (size: 45 bytes)
// Symbol:    sub_1AE8FA0
// Demangled: sub_1AE8FA0
// ============================================================================
void (**sub_1AE8FA0(int a1, int a2))(hkpSampledHeightFieldShape::Self *__hidden self)
{
  return hkpSampledHeightFieldShape::Construct(a1, a2);
}


// ============================================================================
// Address:   0x1ae9010 (size: 415 bytes)
// Symbol:    sub_1AE9010
// Demangled: sub_1AE9010
// ============================================================================
uint32_t *sub_1AE9010()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpSampledHeightFieldShapeCoarseMinMaxLevelClass,
    "hkpSampledHeightFieldShapeCoarseMinMaxLevel",
    nullptr,
    20,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2047380,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkpSampledHeightFieldShapeCoarseMinMaxLevelTypeInfo = (uint32_t)(uintptr_t)("hkpSampledHeightFieldShapeCoarseMinMaxLevel");
  *(uintptr_t *)(unk_2142E54) = (uintptr_t)("!hkpSampledHeightFieldShape::CoarseMinMaxLevel");
  *(uintptr_t *)(unk_2142E60) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142E64) = (uintptr_t)(20);
  *(uintptr_t *)(unk_2142E58) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2142E5C) = (uintptr_t)(((int (*)(uint32_t *))sub_1AE8F40));
  dword_20D0808 = (int)hkpSampledHeightFieldShapeHeightFieldTypeEnum;
  hkClass::Construct(
    (hkClass::Self *)&hkpSampledHeightFieldShapeClass,
    "hkpSampledHeightFieldShape",
    (const hkClass::Self *)&hkpHeightFieldShapeClass,
    128,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20473C8,
    1,
    (const hkClassMember::Self *)&off_20D0740,
    13,
    &unk_1D37700,
    nullptr,
    0,
    1u);
  hkpSampledHeightFieldShape::Construct((int)(uintptr_t)(&v1), 0);
  hkpSampledHeightFieldShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpSampledHeightFieldShape");
  hkpSampledHeightFieldShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((void (** (*)(int, int a2))(hkpSampledHeightFieldShape::Self *__hidden))sub_1AE8FA0));
  hkpSampledHeightFieldShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1AE8F20));
  hkpSampledHeightFieldShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpSampledHeightFieldShape");
  hkpSampledHeightFieldShapeTypeInfo[4] = v1;
  hkpSampledHeightFieldShapeTypeInfo[5] = 128;
  return hkpSampledHeightFieldShapeTypeInfo;
}


// ============================================================================
// Address:   0x1ae9ec0 (size: 10 bytes)
// Symbol:    _ZThn16_N19hkpStorageMeshShapeD1Ev
// Demangled: `non-virtual thunk to'hkpStorageMeshShape::Destroy()
// ============================================================================
static void g4_thunk_7(hkpStorageMeshShape::Self *self)
{
  hkpStorageMeshShape::Destroy((hkpStorageMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1ae9f30 (size: 10 bytes)
// Symbol:    _ZThn16_N19hkpStorageMeshShapeD0Ev
// Demangled: `non-virtual thunk to'hkpStorageMeshShape::Destroy()
// ============================================================================
static void g4_thunk_8(hkpStorageMeshShape::Self *self)
{
  hkpStorageMeshShape::Destroy((hkpStorageMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aeb4f8 (size: 1 bytes)
// Symbol:    nullsub_884
// Demangled: nullsub_884
// ============================================================================
void nullsub_884()
{
  ;
}


// ============================================================================
// Address:   0x1aeb500 (size: 20 bytes)
// Symbol:    sub_1AEB500
// Demangled: sub_1AEB500
// ============================================================================
int sub_1AEB500(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1aeb520 (size: 45 bytes)
// Symbol:    sub_1AEB520
// Demangled: sub_1AEB520
// ============================================================================
int sub_1AEB520(int a1, int a2)
{
  return (int)(uintptr_t)(hkpMeshShape::Construct(a1, a2));
}


// ============================================================================
// Address:   0x1aeb590 (size: 440 bytes)
// Symbol:    sub_1AEB590
// Demangled: sub_1AEB590
// ============================================================================
uint32_t *sub_1AEB590()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  dword_20D09A8 = (int)hkpMeshShapeMeshShapeIndexStridingTypeEnum;
  dword_20D09C0 = (int)hkpMeshShapeMeshShapeMaterialIndexStridingTypeEnum;
  hkClass::Construct(
    (hkClass::Self *)&hkpMeshShapeSubpartClass,
    "hkpMeshShapeSubpart",
    nullptr,
    56,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20D0940,
    15,
    &unk_1D377C0,
    nullptr,
    0,
    0);
  *(uintptr_t *)(unk_2142F14) = (uintptr_t)("!hkpMeshShape::Subpart");
  *(uintptr_t *)(unk_2142F1C) = (uintptr_t)((&g4_noop_ret0));
  hkpMeshShapeSubpartTypeInfo = (uint32_t)(uintptr_t)("hkpMeshShapeSubpart");
  *(uintptr_t *)(unk_2142F18) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142F20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142F24) = (uintptr_t)(56);
  *(uintptr_t *)(unk_20D08E8) = (uintptr_t)(hkpWeldingUtilityWeldingTypeEnum[0]);
  hkClass::Construct(
    (hkClass::Self *)&hkpMeshShapeClass,
    "hkpMeshShape",
    (const hkClass::Self *)&hkpShapeCollectionClass,
    96,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2047400,
    2,
    (const hkClassMember::Self *)&hkpMeshShape::Members,
    7,
    &unk_1D377A0,
    nullptr,
    0,
    0);
  hkpMeshShape::Construct(&v1, 0);
  hkpMeshShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMeshShape");
  hkpMeshShapeTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(int, int))sub_1AEB520));
  hkpMeshShapeTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1AEB500));
  hkpMeshShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMeshShape");
  hkpMeshShapeTypeInfo[4] = v1;
  hkpMeshShapeTypeInfo[5] = 96;
  return hkpMeshShapeTypeInfo;
}


// ============================================================================
// Address:   0x1aeb9b0 (size: 10 bytes)
// Symbol:    _ZThn16_NK12hkpMeshShape13getChildShapeEjR21hkpShapeBufferStorage
// Demangled: `non-virtual thunk to'hkpMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// ============================================================================
static int g4_thunk_9(int a1, unsigned int a2, int a3)
{
  return hkpMeshShape::getChildShape(a1 - 16, a2, a3);
}


// ============================================================================
// Address:   0x1aeba20 (size: 10 bytes)
// Symbol:    _ZThn16_NK12hkpMeshShape22getCollisionFilterInfoEj
// Demangled: `non-virtual thunk to'hkpMeshShape::getCollisionFilterInfo(unsigned int)const
// ============================================================================
static int g4_thunk_10(hkpMeshShape::Self *self, unsigned int a2)
{
  return hkpMeshShape::getCollisionFilterInfo((hkpMeshShape::Self *)((char *)self - 16), a2);
}


// ============================================================================
// Address:   0x1aebcb0 (size: 10 bytes)
// Symbol:    _ZThn16_NK12hkpMeshShape10getNextKeyEj
// Demangled: `non-virtual thunk to'hkpMeshShape::getNextKey(unsigned int)const
// ============================================================================
static int g4_thunk_11(hkpMeshShape::Self *self, unsigned int a2)
{
  return hkpMeshShape::getNextKey((hkpMeshShape::Self *)((char *)self - 16), a2);
}


// ============================================================================
// Address:   0x1aebe90 (size: 10 bytes)
// Symbol:    _ZThn16_NK12hkpMeshShape11getFirstKeyEv
// Demangled: `non-virtual thunk to'hkpMeshShape::getFirstKey(void)const
// ============================================================================
static int g4_thunk_12(hkpMeshShape::Self *self)
{
  return hkpMeshShape::getFirstKey((hkpMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aebf60 (size: 10 bytes)
// Symbol:    _ZThn16_N12hkpMeshShapeD1Ev
// Demangled: `non-virtual thunk to'hkpMeshShape::Destroy()
// ============================================================================
static void g4_thunk_13(hkpMeshShape::Self *self)
{
  hkpMeshShape::Destroy((hkpMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aec070 (size: 10 bytes)
// Symbol:    _ZThn16_N12hkpMeshShapeD0Ev
// Demangled: `non-virtual thunk to'hkpMeshShape::Destroy()
// ============================================================================
static void g4_thunk_14(hkpMeshShape::Self *self)
{
  hkpMeshShape::Destroy((hkpMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aecc50 (size: 10 bytes)
// Symbol:    _ZThn16_NK18hkpSimpleMeshShape13getChildShapeEjR21hkpShapeBufferStorage
// Demangled: `non-virtual thunk to'hkpSimpleMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// ============================================================================
static int g4_thunk_15(int a1, int a2, int a3)
{
  return hkpSimpleMeshShape::getChildShape(a1 - 16, a2, a3);
}


// ============================================================================
// Address:   0x1aecd50 (size: 10 bytes)
// Symbol:    _ZThn16_N18hkpSimpleMeshShapeD1Ev
// Demangled: `non-virtual thunk to'hkpSimpleMeshShape::Destroy()
// ============================================================================
static void g4_thunk_16(hkpSimpleMeshShape::Self *self)
{
  hkpSimpleMeshShape::Destroy((hkpSimpleMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aece10 (size: 10 bytes)
// Symbol:    _ZThn16_NK18hkpSimpleMeshShape11getFirstKeyEv
// Demangled: `non-virtual thunk to'hkpSimpleMeshShape::getFirstKey(void)const
// ============================================================================
static int g4_thunk_17(hkpSimpleMeshShape::Self *self)
{
  return hkpSimpleMeshShape::getFirstKey((hkpSimpleMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aecef0 (size: 10 bytes)
// Symbol:    _ZThn16_NK18hkpSimpleMeshShape10getNextKeyEj
// Demangled: `non-virtual thunk to'hkpSimpleMeshShape::getNextKey(unsigned int)const
// ============================================================================
static int g4_thunk_18(hkpSimpleMeshShape::Self *self, unsigned int a2)
{
  return hkpSimpleMeshShape::getNextKey((hkpSimpleMeshShape::Self *)((char *)self - 16), a2);
}


// ============================================================================
// Address:   0x1aed030 (size: 10 bytes)
// Symbol:    _ZThn16_N18hkpSimpleMeshShapeD0Ev
// Demangled: `non-virtual thunk to'hkpSimpleMeshShape::Destroy()
// ============================================================================
static void g4_thunk_19(hkpSimpleMeshShape::Self *self)
{
  hkpSimpleMeshShape::Destroy((hkpSimpleMeshShape::Self *)((char *)self - 16));
}


// ============================================================================
// Address:   0x1aed150 (size: 144 bytes)
// Symbol:    sub_1AED150
// Demangled: sub_1AED150
// ============================================================================
void sub_1AED150()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpHeightFieldShapeClass,
    "hkpHeightFieldShape",
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
// Address:   0x1aed1f0 (size: 10 bytes)
// Symbol:    _ZThn8_N25hkpNullBroadPhaseListener16addCollisionPairER28hkpTypedBroadPhaseHandlePair
// Demangled: `non-virtual thunk to'hkpNullBroadPhaseListener::addCollisionPair(hkpTypedBroadPhaseHandlePair &)
// ============================================================================
static void g4_thunk_20()
{
  hkpNullBroadPhaseListener::addCollisionPair();
}


// ============================================================================
// Address:   0x1aed210 (size: 10 bytes)
// Symbol:    _ZThn8_N25hkpNullBroadPhaseListener19removeCollisionPairER28hkpTypedBroadPhaseHandlePair
// Demangled: `non-virtual thunk to'hkpNullBroadPhaseListener::removeCollisionPair(hkpTypedBroadPhaseHandlePair &)
// ============================================================================
static void g4_thunk_21()
{
  hkpNullBroadPhaseListener::removeCollisionPair();
}


// ============================================================================
// Address:   0x1aed250 (size: 10 bytes)
// Symbol:    _ZThn8_N25hkpNullBroadPhaseListenerD1Ev
// Demangled: `non-virtual thunk to'hkpNullBroadPhaseListener::Destroy()
// ============================================================================
static void g4_thunk_22(
        hkpNullBroadPhaseListener::Self *self)
{
  hkpNullBroadPhaseListener::Destroy((hkpNullBroadPhaseListener::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x1aed2d0 (size: 7 bytes)
// Symbol:    _ZThn8_N25hkpNullBroadPhaseListenerD0Ev
// Demangled: `non-virtual thunk to'hkpNullBroadPhaseListener::Destroy()
// ============================================================================
static void g4_thunk_23(
        hkpNullBroadPhaseListener::Self *self)
{
  hkpNullBroadPhaseListener::Destroy((hkpNullBroadPhaseListener::Self *)((char *)self - 8));
}


// ============================================================================
// Address:   0x1afa5b0 (size: 23 bytes)
// Symbol:    sub_1AFA5B0
// Demangled: sub_1AFA5B0
// ============================================================================
void sub_1AFA5B0()
{
  byte_2142FB0 = 0;
}


// ============================================================================
// Address:   0x1afed40 (size: 4706 bytes)
// Symbol:    sub_1AFED40
// Demangled: sub_1AFED40
// ============================================================================
int sub_1AFED40(int a1, float *a2, float a3, uint32_t *a4, int a5, float *a6)
{
  int result;
  float *v8;
  float *v9;
  float v10; // xmm5_4
  float v11; // xmm4_4
  float *v12;
  int v13;
  float *v14;
  float *v15;
  float *v16;
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float *v20;
  float *v21;
  float *v22;
  float v23; // xmm4_4
  float v24; // xmm6_4
  float v25; // xmm3_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  int v29;
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  int v33;
  int v34;
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm6_4
  float v39; // xmm5_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  typedef float *_g4_t_v46;
  typedef float *_g4_t_v47;
  typedef float *_g4_t_v48;
  typedef float *_g4_t_v49;
  typedef float *_g4_t_v50;
  typedef float *_g4_t_v51;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float *_g4_t_v60;
  typedef float *_g4_t_v61;
  typedef float *_g4_t_v62;
  typedef float *_g4_t_v63;
  typedef float *_g4_t_v64;
  typedef float *_g4_t_v66;
  typedef float _g4_t_v67;
  typedef float *_g4_t_v68;
  typedef float *_g4_t_v69;
  typedef float *_g4_t_v70;
  typedef float *_g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float *_g4_t_v82;
  typedef float *_g4_t_v83;
  typedef float _g4_t_v84;
  typedef float *_g4_t_v85;
  typedef float _g4_t_v86;
  typedef float *_g4_t_v87;
  typedef float *_g4_t_v88;
  typedef float _g4_t_v89;
  typedef float *_g4_t_v90;
  typedef float _g4_t_v91;
  typedef float *_g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float *_g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float *_g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145[5];
  typedef float _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef float _g4_t_v151;
  typedef int _g4_t_v152;
  typedef __int128 _g4_t_v153;
  typedef __int128 _g4_t_v154;
  typedef __int128 _g4_t_v155;
  typedef int _g4_t_v156;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v50)) > _g4_s4 ? (24u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v51)) > _g4_s5 ? (28u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v55)) > _g4_s6 ? (44u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v56)) > _g4_s7 ? (48u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v57)) > _g4_s8 ? (52u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v58)) > _g4_s9 ? (56u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v59)) > _g4_s10 ? (60u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v60)) > _g4_s11 ? (64u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v61)) > _g4_s12 ? (68u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v62)) > _g4_s13 ? (72u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v63)) > _g4_s14 ? (76u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v64)) > _g4_s15 ? (80u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v66)) > _g4_s16 ? (88u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v67)) > _g4_s17 ? (92u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v68)) > _g4_s18 ? (96u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v69)) > _g4_s19 ? (100u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v70)) > _g4_s20 ? (104u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v71)) > _g4_s21 ? (108u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v72)) > _g4_s22 ? (112u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v73)) > _g4_s23 ? (116u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v74)) > _g4_s24 ? (120u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v75)) > _g4_s25 ? (124u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v76)) > _g4_s26 ? (128u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v77)) > _g4_s27 ? (132u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v78)) > _g4_s28 ? (136u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v79)) > _g4_s29 ? (140u + sizeof(_g4_t_v79)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v80)) > _g4_s30 ? (144u + sizeof(_g4_t_v80)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v81)) > _g4_s31 ? (148u + sizeof(_g4_t_v81)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v82)) > _g4_s32 ? (152u + sizeof(_g4_t_v82)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v83)) > _g4_s33 ? (156u + sizeof(_g4_t_v83)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v84)) > _g4_s34 ? (160u + sizeof(_g4_t_v84)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v85)) > _g4_s35 ? (164u + sizeof(_g4_t_v85)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v86)) > _g4_s36 ? (168u + sizeof(_g4_t_v86)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v87)) > _g4_s37 ? (172u + sizeof(_g4_t_v87)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v88)) > _g4_s38 ? (176u + sizeof(_g4_t_v88)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v89)) > _g4_s39 ? (176u + sizeof(_g4_t_v89)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v90)) > _g4_s40 ? (180u + sizeof(_g4_t_v90)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v91)) > _g4_s41 ? (180u + sizeof(_g4_t_v91)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v92)) > _g4_s42 ? (184u + sizeof(_g4_t_v92)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v93)) > _g4_s43 ? (184u + sizeof(_g4_t_v93)) : _g4_s43,
    _g4_s45 = (188u + sizeof(_g4_t_v94)) > _g4_s44 ? (188u + sizeof(_g4_t_v94)) : _g4_s44,
    _g4_s46 = (192u + sizeof(_g4_t_v95)) > _g4_s45 ? (192u + sizeof(_g4_t_v95)) : _g4_s45,
    _g4_s47 = (196u + sizeof(_g4_t_v96)) > _g4_s46 ? (196u + sizeof(_g4_t_v96)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v97)) > _g4_s47 ? (200u + sizeof(_g4_t_v97)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v98)) > _g4_s48 ? (200u + sizeof(_g4_t_v98)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v99)) > _g4_s49 ? (204u + sizeof(_g4_t_v99)) : _g4_s49,
    _g4_s51 = (204u + sizeof(_g4_t_v100)) > _g4_s50 ? (204u + sizeof(_g4_t_v100)) : _g4_s50,
    _g4_s52 = (208u + sizeof(_g4_t_v101)) > _g4_s51 ? (208u + sizeof(_g4_t_v101)) : _g4_s51,
    _g4_s53 = (208u + sizeof(_g4_t_v102)) > _g4_s52 ? (208u + sizeof(_g4_t_v102)) : _g4_s52,
    _g4_s54 = (212u + sizeof(_g4_t_v103)) > _g4_s53 ? (212u + sizeof(_g4_t_v103)) : _g4_s53,
    _g4_s55 = (212u + sizeof(_g4_t_v104)) > _g4_s54 ? (212u + sizeof(_g4_t_v104)) : _g4_s54,
    _g4_s56 = (212u + sizeof(_g4_t_v105)) > _g4_s55 ? (212u + sizeof(_g4_t_v105)) : _g4_s55,
    _g4_s57 = (216u + sizeof(_g4_t_v106)) > _g4_s56 ? (216u + sizeof(_g4_t_v106)) : _g4_s56,
    _g4_s58 = (216u + sizeof(_g4_t_v107)) > _g4_s57 ? (216u + sizeof(_g4_t_v107)) : _g4_s57,
    _g4_s59 = (216u + sizeof(_g4_t_v108)) > _g4_s58 ? (216u + sizeof(_g4_t_v108)) : _g4_s58,
    _g4_s60 = (220u + sizeof(_g4_t_v109)) > _g4_s59 ? (220u + sizeof(_g4_t_v109)) : _g4_s59,
    _g4_s61 = (220u + sizeof(_g4_t_v110)) > _g4_s60 ? (220u + sizeof(_g4_t_v110)) : _g4_s60,
    _g4_s62 = (220u + sizeof(_g4_t_v111)) > _g4_s61 ? (220u + sizeof(_g4_t_v111)) : _g4_s61,
    _g4_s63 = (224u + sizeof(_g4_t_v112)) > _g4_s62 ? (224u + sizeof(_g4_t_v112)) : _g4_s62,
    _g4_s64 = (224u + sizeof(_g4_t_v113)) > _g4_s63 ? (224u + sizeof(_g4_t_v113)) : _g4_s63,
    _g4_s65 = (224u + sizeof(_g4_t_v114)) > _g4_s64 ? (224u + sizeof(_g4_t_v114)) : _g4_s64,
    _g4_s66 = (228u + sizeof(_g4_t_v115)) > _g4_s65 ? (228u + sizeof(_g4_t_v115)) : _g4_s65,
    _g4_s67 = (228u + sizeof(_g4_t_v116)) > _g4_s66 ? (228u + sizeof(_g4_t_v116)) : _g4_s66,
    _g4_s68 = (228u + sizeof(_g4_t_v117)) > _g4_s67 ? (228u + sizeof(_g4_t_v117)) : _g4_s67,
    _g4_s69 = (232u + sizeof(_g4_t_v118)) > _g4_s68 ? (232u + sizeof(_g4_t_v118)) : _g4_s68,
    _g4_s70 = (232u + sizeof(_g4_t_v119)) > _g4_s69 ? (232u + sizeof(_g4_t_v119)) : _g4_s69,
    _g4_s71 = (232u + sizeof(_g4_t_v120)) > _g4_s70 ? (232u + sizeof(_g4_t_v120)) : _g4_s70,
    _g4_s72 = (236u + sizeof(_g4_t_v121)) > _g4_s71 ? (236u + sizeof(_g4_t_v121)) : _g4_s71,
    _g4_s73 = (236u + sizeof(_g4_t_v122)) > _g4_s72 ? (236u + sizeof(_g4_t_v122)) : _g4_s72,
    _g4_s74 = (236u + sizeof(_g4_t_v123)) > _g4_s73 ? (236u + sizeof(_g4_t_v123)) : _g4_s73,
    _g4_s75 = (240u + sizeof(_g4_t_v124)) > _g4_s74 ? (240u + sizeof(_g4_t_v124)) : _g4_s74,
    _g4_s76 = (240u + sizeof(_g4_t_v125)) > _g4_s75 ? (240u + sizeof(_g4_t_v125)) : _g4_s75,
    _g4_s77 = (240u + sizeof(_g4_t_v126)) > _g4_s76 ? (240u + sizeof(_g4_t_v126)) : _g4_s76,
    _g4_s78 = (244u + sizeof(_g4_t_v127)) > _g4_s77 ? (244u + sizeof(_g4_t_v127)) : _g4_s77,
    _g4_s79 = (244u + sizeof(_g4_t_v128)) > _g4_s78 ? (244u + sizeof(_g4_t_v128)) : _g4_s78,
    _g4_s80 = (244u + sizeof(_g4_t_v129)) > _g4_s79 ? (244u + sizeof(_g4_t_v129)) : _g4_s79,
    _g4_s81 = (248u + sizeof(_g4_t_v130)) > _g4_s80 ? (248u + sizeof(_g4_t_v130)) : _g4_s80,
    _g4_s82 = (248u + sizeof(_g4_t_v131)) > _g4_s81 ? (248u + sizeof(_g4_t_v131)) : _g4_s81,
    _g4_s83 = (248u + sizeof(_g4_t_v132)) > _g4_s82 ? (248u + sizeof(_g4_t_v132)) : _g4_s82,
    _g4_s84 = (252u + sizeof(_g4_t_v133)) > _g4_s83 ? (252u + sizeof(_g4_t_v133)) : _g4_s83,
    _g4_s85 = (252u + sizeof(_g4_t_v134)) > _g4_s84 ? (252u + sizeof(_g4_t_v134)) : _g4_s84,
    _g4_s86 = (256u + sizeof(_g4_t_v135)) > _g4_s85 ? (256u + sizeof(_g4_t_v135)) : _g4_s85,
    _g4_s87 = (256u + sizeof(_g4_t_v136)) > _g4_s86 ? (256u + sizeof(_g4_t_v136)) : _g4_s86,
    _g4_s88 = (256u + sizeof(_g4_t_v137)) > _g4_s87 ? (256u + sizeof(_g4_t_v137)) : _g4_s87,
    _g4_s89 = (260u + sizeof(_g4_t_v138)) > _g4_s88 ? (260u + sizeof(_g4_t_v138)) : _g4_s88,
    _g4_s90 = (260u + sizeof(_g4_t_v139)) > _g4_s89 ? (260u + sizeof(_g4_t_v139)) : _g4_s89,
    _g4_s91 = (264u + sizeof(_g4_t_v140)) > _g4_s90 ? (264u + sizeof(_g4_t_v140)) : _g4_s90,
    _g4_s92 = (264u + sizeof(_g4_t_v141)) > _g4_s91 ? (264u + sizeof(_g4_t_v141)) : _g4_s91,
    _g4_s93 = (264u + sizeof(_g4_t_v142)) > _g4_s92 ? (264u + sizeof(_g4_t_v142)) : _g4_s92,
    _g4_s94 = (268u + sizeof(_g4_t_v143)) > _g4_s93 ? (268u + sizeof(_g4_t_v143)) : _g4_s93,
    _g4_s95 = (268u + sizeof(_g4_t_v144)) > _g4_s94 ? (268u + sizeof(_g4_t_v144)) : _g4_s94,
    _g4_s96 = (272u + sizeof(_g4_t_v145)) > _g4_s95 ? (272u + sizeof(_g4_t_v145)) : _g4_s95,
    _g4_s97 = (292u + sizeof(_g4_t_v146)) > _g4_s96 ? (292u + sizeof(_g4_t_v146)) : _g4_s96,
    _g4_s98 = (296u + sizeof(_g4_t_v147)) > _g4_s97 ? (296u + sizeof(_g4_t_v147)) : _g4_s97,
    _g4_s99 = (300u + sizeof(_g4_t_v148)) > _g4_s98 ? (300u + sizeof(_g4_t_v148)) : _g4_s98,
    _g4_s100 = (304u + sizeof(_g4_t_v149)) > _g4_s99 ? (304u + sizeof(_g4_t_v149)) : _g4_s99,
    _g4_s101 = (308u + sizeof(_g4_t_v150)) > _g4_s100 ? (308u + sizeof(_g4_t_v150)) : _g4_s100,
    _g4_s102 = (312u + sizeof(_g4_t_v151)) > _g4_s101 ? (312u + sizeof(_g4_t_v151)) : _g4_s101,
    _g4_s103 = (316u + sizeof(_g4_t_v152)) > _g4_s102 ? (316u + sizeof(_g4_t_v152)) : _g4_s102,
    _g4_s104 = (320u + sizeof(_g4_t_v153)) > _g4_s103 ? (320u + sizeof(_g4_t_v153)) : _g4_s103,
    _g4_s105 = (336u + sizeof(_g4_t_v154)) > _g4_s104 ? (336u + sizeof(_g4_t_v154)) : _g4_s104,
    _g4_s106 = (352u + sizeof(_g4_t_v155)) > _g4_s105 ? (352u + sizeof(_g4_t_v155)) : _g4_s105,
    _g4_s107 = (368u + sizeof(_g4_t_v156)) > _g4_s106 ? (368u + sizeof(_g4_t_v156)) : _g4_s106
  };
  alignas(16) uint8_t _g4_sf[_g4_s107];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 92u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 108u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 116u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 120u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 124u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 132u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 136u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 140u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 144u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 148u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 152u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 156u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 160u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 164u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 168u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 172u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 176u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 176u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 180u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 180u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 184u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 184u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 188u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 192u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 196u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 200u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 200u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 204u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 204u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 208u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 208u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 212u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 212u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 212u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 216u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 216u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 216u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 220u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 220u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 220u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 224u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 224u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 224u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 228u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 228u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 228u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 232u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 232u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 232u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 236u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 236u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 236u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 240u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 240u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 240u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 244u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 244u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 244u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 248u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 248u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 248u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 252u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 252u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 256u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 256u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 256u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 260u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 260u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 264u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 264u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 264u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 268u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 268u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 272u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 292u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 296u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 300u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 304u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 308u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 312u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 316u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 320u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 336u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 352u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 368u);

  result = (int)(uintptr_t)(a2);
  if ( a1 > 0 )
  {
    v55 = a1 - 1;
    v82 = a6 + 12;
    v71 = a2;
    v63 = a6 + 12;
    v69 = a6 + 12;
    v83 = a6 + 16;
    v85 = a6 + 20;
    v60 = a2 + 8;
    v62 = a2 + 8;
    v61 = a6 + 20;
    v68 = a6 + 16;
    v70 = a6 + 20;
    v66 = a6 + 16;
    v64 = a6;
    v96 = 0;
    v78 = 0.0;
    v77 = 0.0;
    v72 = 0.0;
    v95 = 0.0;
    v94 = 0.0;
    v86 = 0.0;
    v84 = 0.0;
    v67 = 0.0;
    v76 = 0.0;
    v56 = 0.0;
    v74 = 0.0;
    v79 = 0.0;
    v57 = 0.0;
    v47 = a2 + 5;
    v75 = 0.0;
    v80 = 0.0;
    v48 = a6 + 4;
    v58 = 0.0;
    v46 = a6 + 8;
    v81 = 0.0;
    v51 = a6 + 24;
    v59 = 0.0;
    v50 = a6 + 28;
    v73 = 0;
    v49 = a6 + 32;
    while ( 1 )
    {
      v97 = 0;
      v8 = (float *)(*a4 + a5);
      v9 = (float *)(a4[1] + a5);
      v103 = v8[12];
      v101 = v8[13];
      v99 = v8[14];
      v10 = v9[15];
      v138 = v9[12];
      v11 = v8[15];
      v87 = v145;
      v135 = v145;
      v143 = v9[13];
      v133 = v9[14];
      v92 = &v60[v96];
      v88 = &v47[v96];
      v90 = v71;
      do
      {
        v12 = v90;
        v13 = v97;
        v130 = *v90;
        v14 = v90 + 8;
        v127 = v90[1];
        v15 = v90 + 5;
        v124 = v90[2];
        v121 = *(v88 - 1);
        v118 = *v88;
        v115 = v88[1];
        v112 = *v92;
        v109 = v92[1];
        v140 = v87;
        v106 = v92[2];
        do
        {
          v16 = v140;
          v17 = v130 * *v12;
          v15 += 12;
          v12 += 12;
          v18 = v112 * *v14;
          v140 += 4;
          v14 += 12;
          v19 = (float)((float)((float)((float)(v124 * *(v12 - 10)) * v11) + (float)((float)(v124 * *(v12 - 10)) * v10))
                      + (float)((float)((float)(v115 * *(v15 - 11)) * v99) + (float)((float)(v106 * *(v14 - 10)) * v133)))
              + (float)((float)((float)((float)((float)(v118 * *(v15 - 12)) * v101)
                                      + (float)((float)(v109 * *(v14 - 11)) * v143))
                              + (float)((float)((float)(v127 * *(v12 - 11)) * v11)
                                      + (float)((float)(v127 * *(v12 - 11)) * v10)))
                      + (float)((float)((float)((float)(v121 * *(v15 - 13)) * v103) + (float)(v18 * v138))
                              + (float)((float)(v17 * v11) + (float)(v17 * v10))));
          *v16 = v19;
          v135[v13++] = v19;
        }
        while ( v13 <= 2 );
        ++v97;
        v90 += 12;
        v88 += 12;
        v92 += 12;
        v87 += 5;
        v135 += 4;
      }
      while ( v97 != 3 );
      v151 = v151 + a3;
      v145[0] = a3 + v145[0];
      v146 = v146 + a3;
      v153 = 0;
      v154 = 0;
      v155 = 0;
      if ( v73 >= v55 )
      {
        v105 = 0.0;
        v132 = 0.0;
        v134 = 0.0;
        v126 = 0.0;
        v137 = 0.0;
        v139 = 0.0;
        v129 = 0.0;
        v142 = 0.0;
        v144 = 0.0;
      }
      else
      {
        v141 = v71[24];
        v20 = v71;
        v136 = v71[25];
        v131 = v71[26];
        v128 = v62[24];
        v125 = v62[25];
        v122 = v62[26];
        v119 = v71[12];
        v116 = v71[13];
        v113 = v71[14];
        v110 = v62[12];
        v107 = v62[13];
        v104 = v62[14];
        v102 = *v71;
        v100 = v71[1];
        v98 = v71[2];
        v93 = *(float *)((char *)v60 + ((char *)v62 - (char *)a2) - 32);
        v91 = *(float *)((char *)v60 + ((char *)v62 - (char *)a2) - 28);
        v89 = *(float *)((char *)v60 + ((char *)v62 - (char *)a2) - 24);
        v21 = &a2[v96 + 40];
        v22 = (float *)&v153;
        do
        {
          v23 = v20[36];
          v22 += 4;
          v24 = *v21;
          v20 += 12;
          v21 += 12;
          v25 = *(v21 - 11);
          v26 = (float)((float)((float)(v125 * v25) * v143) - (float)((float)(v136 * v20[25]) * v10))
              + (float)((float)((float)(v128 * v24) * v138) - (float)((float)(v141 * v23) * v10));
          v27 = (float)((float)((float)(v107 * v25) * v143) - (float)((float)(v116 * v20[25]) * v10))
              + (float)((float)((float)(v110 * v24) * v138) - (float)((float)(v119 * v23) * v10));
          v28 = (float)(v113 * v20[26]) * v10;
          *(v22 - 4) = (float)((float)((float)(v89 * *(v21 - 10)) * v133) - (float)((float)(v98 * v20[26]) * v10))
                     + (float)((float)((float)((float)(v25 * v91) * v143) - (float)((float)(v100 * v20[25]) * v10))
                             + (float)((float)((float)(v24 * v93) * v138) - (float)((float)(v23 * v102) * v10)));
          *(v22 - 3) = (float)((float)((float)(v104 * *(v21 - 10)) * v133) - v28) + v27;
          *(v22 - 1) = 0.0;
          *(v22 - 2) = (float)((float)((float)(v122 * *(v21 - 10)) * v133) - (float)((float)(v131 * v20[26]) * v10))
                     + v26;
        }
        while ( v22 != (float *)&v156 );
        v105 = *((float *)&v155 + 2);
        v132 = *((float *)&v155 + 1);
        v134 = *(float *)&v155;
        v126 = *((float *)&v154 + 2);
        v137 = *((float *)&v154 + 1);
        v139 = *(float *)&v154;
        v129 = *((float *)&v153 + 2);
        v142 = *((float *)&v153 + 1);
        v144 = *(float *)&v153;
      }
      *v64 = v59;
      v64[1] = v81;
      v64[2] = v58;
      v64[3] = v58;
      v48[v96] = v80;
      v48[v96 + 1] = v75;
      v48[v96 + 2] = v57;
      v48[v96 + 3] = v57;
      v46[v96 + 1] = v74;
      v46[v96] = v79;
      v46[v96 + 2] = v56;
      v46[v96 + 3] = v56;
      v29 = (char *)v63 - (char *)a6;
      v30 = (float)((float)(v76 * v58) + (float)(v67 * v57)) + (float)(v84 * v56);
      v31 = (float)((float)(v86 * v58) + (float)(v94 * v57)) + (float)(v95 * v56);
      *(float *)((char *)a6 + v29) = v145[0];
      *(float *)((char *)v82 + v29 - 44) = v145[1];
      *(float *)((char *)v82 + v29 - 40) = v145[2];
      v32 = (float)((float)(v72 * v58) + (float)(v57 * v77)) + (float)(v78 * v56);
      *(float *)((char *)v82 + v29 - 36) = v145[3];
      v33 = (char *)v68 - (char *)a6;
      *(float *)((char *)a6 + v33) = v145[4];
      *(float *)((char *)v83 + v33 - 60) = v146;
      *(uint32_t *)((char *)v83 + v33 - 56) = v147;
      *(uint32_t *)((char *)v83 + v33 - 52) = v148;
      v34 = (char *)v61 - (char *)a6;
      *(uint32_t *)((char *)a6 + v34) = v149;
      *(uint32_t *)((char *)v85 + v34 - 76) = v150;
      *(float *)((char *)v85 + v34 - 72) = v151;
      *(uint32_t *)((char *)v85 + v34 - 68) = v152;
      v35 = *v69 - (float)((float)((float)(v76 * v59) + (float)(v80 * v67)) + (float)(v79 * v84));
      *(float *)((char *)a6 + v29) = v35;
      *(float *)((char *)a6 + v29 + 4) = v69[1]
                                       - (float)((float)((float)(v76 * v81) + (float)(v67 * v75)) + (float)(v74 * v84));
      *(float *)((char *)a6 + v29 + 8) = v69[2] - v30;
      *(float *)((char *)a6 + v29 + 12) = v69[3] - v30;
      *(float *)((char *)a6 + v33) = *v66
                                   - (float)((float)((float)(v86 * v59) + (float)(v80 * v94)) + (float)(v79 * v95));
      v36 = v66[1] - (float)((float)((float)(v86 * v81) + (float)(v94 * v75)) + (float)(v95 * v74));
      *(float *)((char *)v83 + v33 - 60) = v36;
      *(float *)((char *)a6 + v33 + 8) = v66[2] - v31;
      *(float *)((char *)a6 + v33 + 12) = v66[3] - v31;
      *(float *)((char *)a6 + v34) = *v70
                                   - (float)((float)((float)(v59 * v72) + (float)(v80 * v77)) + (float)(v79 * v78));
      *(float *)((char *)a6 + v34 + 4) = v70[1]
                                       - (float)((float)((float)(v72 * v81) + (float)(v77 * v75)) + (float)(v78 * v74));
      v37 = v70[2] - v32;
      *(float *)((char *)v85 + v34 - 72) = v37;
      *(float *)((char *)a6 + v34 + 12) = v70[3] - v32;
      a6[v96 + 12] = fmaxf(v35, 0.00034526698f);
      a6[v96 + 17] = fmaxf(v36, 0.00034526698f);
      a6[v96 + 22] = fmaxf(v37, 0.00034526698f);
      hkMatrix3f_invertSymmetric((hkMatrix3f::Self *)&v82[v96]);
      v38 = *v69;
      v117 = v66[1];
      v114 = v66[2];
      v120 = v69[3];
      v39 = *v66;
      v111 = v66[3];
      v123 = v69[2];
      v40 = *v70;
      v108 = v69[1];
      v51[v96] = (float)((float)(v142 * *v66) + (float)(v144 * *v69)) + (float)(v129 * *v70);
      v76 = (float)((float)(v142 * v39) + (float)(v144 * v38)) + (float)(v129 * v40);
      v41 = v70[1];
      v51[v96 + 1] = (float)((float)(v117 * v142) + (float)(v144 * v108)) + (float)(v129 * v41);
      v67 = (float)((float)(v117 * v142) + (float)(v144 * v108)) + (float)(v129 * v41);
      v42 = v70[2];
      v51[v96 + 2] = (float)((float)(v114 * v142) + (float)(v123 * v144)) + (float)(v129 * v42);
      v84 = (float)((float)(v114 * v142) + (float)(v123 * v144)) + (float)(v129 * v42);
      v43 = v70[3];
      v51[v96 + 3] = (float)((float)(v120 * v144) + (float)(v111 * v142)) + (float)(v129 * v43);
      v50[v96] = (float)((float)(v137 * v39) + (float)(v139 * v38)) + (float)(v126 * v40);
      v86 = (float)((float)(v137 * v39) + (float)(v139 * v38)) + (float)(v126 * v40);
      v50[v96 + 1] = (float)((float)(v117 * v137) + (float)(v108 * v139)) + (float)(v126 * v41);
      v94 = (float)((float)(v117 * v137) + (float)(v108 * v139)) + (float)(v126 * v41);
      ++v73;
      ++a4;
      v50[v96 + 2] = (float)((float)(v114 * v137) + (float)(v123 * v139)) + (float)(v126 * v42);
      v95 = (float)((float)(v114 * v137) + (float)(v123 * v139)) + (float)(v126 * v42);
      v50[v96 + 3] = (float)((float)(v120 * v139) + (float)(v111 * v137)) + (float)(v126 * v43);
      v44 = (float)((float)(v39 * v132) + (float)(v38 * v134)) + (float)(v40 * v105);
      v49[v96] = v44;
      v72 = v44;
      v45 = (float)((float)(v117 * v132) + (float)(v108 * v134)) + (float)(v41 * v105);
      v49[v96 + 1] = v45;
      v77 = v45;
      v49[v96 + 2] = (float)((float)(v114 * v132) + (float)(v123 * v134)) + (float)(v42 * v105);
      v78 = (float)((float)(v114 * v132) + (float)(v123 * v134)) + (float)(v42 * v105);
      v49[v96 + 3] = (float)((float)(v120 * v134) + (float)(v111 * v132)) + (float)(v43 * v105);
      v96 += 36;
      v64 += 36;
      v69 += 36;
      v66 += 36;
      v70 += 36;
      v63 += 36;
      v68 += 36;
      v61 += 36;
      v71 += 36;
      v62 += 36;
      result = a1;
      if ( v73 == a1 )
        break;
      v74 = v126;
      v75 = v137;
      v80 = v142;
      v56 = v105;
      v79 = v129;
      v57 = v132;
      v58 = v134;
      v81 = v139;
      v59 = v144;
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1afffb0 (size: 43 bytes)
// Symbol:    _Z67buildConstraintMatrixLuDecompositionForBallAndSocketChain_outOfLineifP19hkp1Lin2AngJacobianP28hkpVelocityAccumulatorOffsetPK22hkpVelocityAccumulatorP30hkpConstraintChainMatrixTriplei
// Demangled: buildConstraintMatrixLuDecompositionForBallAndSocketChain_outOfLine(int,float,hkp1Lin2AngJacobian *,hkpVelocityAccumulatorOffset *,hkpVelocityAccumulator const*,hkpConstraintChainMatrixTriple *,int)
// ============================================================================
int buildConstraintMatrixLuDecompositionForBallAndSocketChain_outOfLine(
        int a1,
        float a2,
        float *a3,
        uint32_t *a4,
        int a5,
        float *a6)
{
  return sub_1AFED40(a1, a3, a2, a4, a5, a6);
}


// ============================================================================
// Address:   0x1b02d48 (size: 1 bytes)
// Symbol:    nullsub_885
// Demangled: nullsub_885
// ============================================================================
void nullsub_885()
{
  ;
}


// ============================================================================
// Address:   0x1b02d50 (size: 20 bytes)
// Symbol:    sub_1B02D50
// Demangled: sub_1B02D50
// ============================================================================
int sub_1B02D50(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}


// ============================================================================
// Address:   0x1b02d70 (size: 45 bytes)
// Symbol:    sub_1B02D70
// Demangled: sub_1B02D70
// ============================================================================
int sub_1B02D70(hkpConstraintData::Self *a1, int a2)
{
  return (int)(uintptr_t)hkpPoweredChainData::Construct(a1, a2);
}


// ============================================================================
// Address:   0x1b02de0 (size: 397 bytes)
// Symbol:    sub_1B02DE0
// Demangled: sub_1B02DE0
// ============================================================================
uint32_t *sub_1B02DE0()
{
  uint32_t v1[22];

  hkClass::Construct(
    (hkClass::Self *)&hkpPoweredChainDataConstraintInfoClass,
    "hkpPoweredChainDataConstraintInfo",
    nullptr,
    80,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20B20E0,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkpPoweredChainDataConstraintInfoTypeInfo = (uint32_t)(uintptr_t)("hkpPoweredChainDataConstraintInfo");
  *(uintptr_t *)(unk_2143014) = (uintptr_t)("!hkpPoweredChainData::ConstraintInfo");
  *(uintptr_t *)(unk_2143018) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2143020) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2143024) = (uintptr_t)(80);
  *(uintptr_t *)(unk_214301C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpPoweredChainDataClass,
    "hkpPoweredChainData",
    (const hkClass::Self *)&hkpConstraintChainDataClass,
    80,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20B2000,
    9,
    &unk_1D37C60,
    nullptr,
    0,
    0);
  hkpPoweredChainData::Construct((hkpConstraintData::Self *)v1, 0);
  hkpPoweredChainDataTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpPoweredChainData");
  hkpPoweredChainDataTypeInfo[2] = (uint32_t)(uintptr_t)(((int (*)(hkpConstraintData::Self *, int))sub_1B02D70));
  hkpPoweredChainDataTypeInfo[3] = (uint32_t)(uintptr_t)(((int (*)(int (***)(uint32_t)))sub_1B02D50));
  hkpPoweredChainDataTypeInfo[0] = (uint32_t)(uintptr_t)("hkpPoweredChainData");
  hkpPoweredChainDataTypeInfo[4] = v1[0];
  hkpPoweredChainDataTypeInfo[5] = 80;
  return hkpPoweredChainDataTypeInfo;
}


// ============================================================================
// Address:   0x1b06440 (size: 711 bytes)
// Symbol:    sub_1B06440
// Demangled: sub_1B06440
// ============================================================================
int sub_1B06440(uint32_t *a1, uint32_t *a2, hkpMoppCodeGenerator::Self *a3, uint32_t *a4)
{
  hkpMoppCodeGenerator::Self *v5;
  size_t v6;
  int v7;
  int v8;
  int v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v18;
  size_t v19;
  int v20;
  size_t v21;
  int v22;
  bool v23; // cc
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v25;
  signed int v26;
  int v27;
  int v28;
  uint32_t *v29;
  hkLifoAllocator::Self *v30;
  int v31;
  int v32;
  int v33;
  char *v35;
  int v36;
  int v37;
  hkLifoAllocator::Self **v38;
  hkpMoppCodeGenerator::Self *v39;

  v5 = a3;
  v6 = *((uint32_t *)a3 + 3);
  v32 = -*((uint8_t *)a3 + 12) & 3;
  if ( *a1 != 0 )
  {
    v7 = a4[1];
    if ( v7 != 0 )
    {
      v18 = (*(int (**)(uint32_t, uint32_t, int))(*(uint32_t *)*a1 + 8))(*a1, *a4, v7);
      v19 = v18;
      if ( v18 > 0 )
      {
        v20 = 0;
        v21 = v18;
        do
        {
          *(uint8_t *)(a2[4] + a2[2] - a2[3] - 1) = -51;
          v22 = a2[3] + 1;
          v23 = v22 < a2[2];
          a2[3] = v22;
          if ( !v23 )
            hkpMoppCodeGenerator::resize((hkpMoppCodeGenerator::Self *)a2);
          ++v20;
        }
        while ( v20 != v21 );
        v19 = v21;
        v5 = a3;
      }
      address = (hkLifoAllocator::Self **)_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v25 = *address;
      v38 = address;
      v26 = (v19 + 127) & 0xFFFFFF80;
      v37 = v26;
      v27 = *((uint32_t *)*address + 3);
      if ( v26 <= *((uint32_t *)v25 + 2) && (unsigned int)(v28 = v27 + v26) <= *((uint32_t *)v25 + 4) )
        *((uint32_t *)v25 + 3) = v28;
      else
        v27 = hkLifoAllocator::allocateFromNewSlab(v25, v37);
      v29 = a1;
      v35 = (char *)v27;
      v31 = v27;
      (*(void (**)(uint32_t, uint32_t, uint32_t))(*(uint32_t *)*v29 + 12))(*v29, *a4, a4[1]);
      hkString::memCpy((hkString::Self *)(a2[4] + a2[2] - a2[3]), v35, v19);
      v30 = *v38;
      if ( (signed int)((v19 + 127) & 0xFFFFFF80) > *((uint32_t *)*v38 + 2)
        || *((char **)v30 + 3) != &v35[v37]
        || v35 == *((char **)v30 + 5) )
      {
        hkLifoAllocator::slowBlockFree(v30, v35, v37);
        v6 = *((uint32_t *)v5 + 3);
      }
      else
      {
        *((uint32_t *)v30 + 3) = (uint32_t)(uintptr_t)(v35);
        v6 = *((uint32_t *)v5 + 3);
      }
    }
  }
  else
  {
    a4[1] = 0;
    v6 = *((uint32_t *)a3 + 3);
  }
  v8 = a2[3];
  v36 = v8;
  v9 = a2[2];
  if ( (int)(v6 + v32) > 0 )
  {
    v39 = v5;
    v10 = v6 + v32;
    v11 = 0;
    do
    {
      *(uint8_t *)(a2[4] + v9 - v8 - 1) = -51;
      v8 = a2[3] + 1;
      v9 = a2[2];
      a2[3] = v8;
      if ( v8 >= v9 )
      {
        hkpMoppCodeGenerator::resize((hkpMoppCodeGenerator::Self *)a2);
        v9 = a2[2];
        v8 = a2[3];
      }
      ++v11;
    }
    while ( v11 != v10 );
    v5 = v39;
    v6 = *((uint32_t *)v39 + 3);
  }
  hkString::memCpy((hkString::Self *)(a2[4] + v9 - v8), (void *)(*((uint32_t *)v5 + 4) + *((uint32_t *)v5 + 2) - v6), v6);
  v12 = 0;
  hkpMoppCodeGenerator::validateJumpCommands(v5);
  v33 = a2[3] - *((uint32_t *)v5 + 3);
  if ( *((int *)v5 + 6) > 0 )
  {
    do
    {
      v16 = a2[6];
      if ( v16 == (a2[7] & 0x3FFFFFFF) )
      {
        G4_MEM_CALL((uintptr_t)(hkArrayUtil::_reserveMore), 
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(a2 + 5),
          8,
          v31);
        v16 = a2[6];
      }
      v13 = a2[5];
      a2[6] = v16 + 1;
      v14 = (int *)(v13 + 8 * v16);
      v14[1] = *(uint32_t *)(*((uint32_t *)v5 + 5) + 8 * v12 + 4);
      v15 = *(uint32_t *)(*((uint32_t *)v5 + 5) + 8 * v12++) + v33;
      *v14 = v15;
    }
    while ( v12 < *((uint32_t *)v5 + 6) );
  }
  hkpMoppCodeGenerator::validateJumpCommands((hkpMoppCodeGenerator::Self *)a2);
  return a2[3] - v36;
}


// ============================================================================
// Address:   0x1b0c750 (size: 6197 bytes)
// Symbol:    sub_1B0C750
// Demangled: sub_1B0C750
// ============================================================================


// ============================================================================
// Address:   0x1b0ec50 (size: 349 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveI24hkpMoppCompilerPrimitiveNS_4lessIS1_EEEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkpMoppCompilerPrimitive,hkAlgorithm::less<hkpMoppCompilerPrimitive>>(hkpMoppCompilerPrimitive *,int,int,hkAlgorithm::less<hkpMoppCompilerPrimitive>)
// ============================================================================
int hkAlgorithm::quickSortRecursive_a47532(
        int a1,
        int a2,
        int a3)
{
  float v3; // xmm1_4
  int v4;
  float *v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  int v9;
  int v10;
  int result;
  float v12;
  int v13; // xmm2_4
  int v14;
  int v15;
  int v16;
  int v17;

  while ( 1 )
  {
    v3 = *(float *)(a1 + 20 * ((a3 + a2) >> 1) + 8);
    v4 = a2 + 1;
    v5 = (float *)(a1 + 20 * a2);
    v16 = a3;
    while ( 1 )
    {
      v6 = v4 - 1;
      if ( v3 <= v5[2] )
      {
        v7 = a1 + 20 * v16;
        v8 = *(float *)(v7 + 8);
        v9 = v7 - 20;
        if ( v8 > v3 )
        {
          v10 = v16;
          do
          {
            v7 = v9;
            v9 -= 20;
            v8 = *(float *)(v9 + 28);
            --v10;
          }
          while ( v8 > v3 );
          v16 = v10;
        }
        if ( v16 < v6 )
          break;
        if ( v16 != v6 )
        {
          v12 = *(float *)v7;
          *(float *)v7 = *v5;
          v13 = *(uint32_t *)(v7 + 12);
          v14 = *(uint32_t *)(v7 + 4);
          *(float *)(v7 + 4) = v5[1];
          *(float *)(v7 + 8) = v5[2];
          *(float *)(v7 + 12) = v5[3];
          v17 = v14;
          v15 = *(uint32_t *)(v7 + 16);
          *(float *)(v7 + 16) = v5[4];
          *v5 = v12;
          *((uint32_t *)v5 + 4) = v15;
          v5[2] = v8;
          *((uint32_t *)v5 + 1) = v17;
          *((uint32_t *)v5 + 3) = v13;
        }
        --v16;
        v6 = v4;
        if ( v16 < v4 )
          break;
      }
      ++v4;
      v5 += 5;
    }
    result = v16;
    if ( a2 < v16 )
      break;
    if ( a3 <= v6 )
      return result;
LABEL_10:
    a2 = v6;
  }
  result = hkAlgorithm::quickSortRecursive_a47532(
             a1,
             a2,
             v16);
  if ( a3 > v6 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x1b10210 (size: 186 bytes)
// Symbol:    sub_1B10210
// Demangled: sub_1B10210
// ============================================================================
void (**sub_1B10210(std::exception *a1))()
{
  int v1;
  uint32_t *v2;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20B25C4);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B2548);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)a1 + 6);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)a1 + 6)) != 0 )
    *((uint32_t *)a1 + 6) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = (uint32_t *)(*((uint32_t *)a1 + 4) - 12);
  if ( v2 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)a1 + 4) - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  return (void (**)(void))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A93D0));
}


// ============================================================================
// Address:   0x1b102d0 (size: 18 bytes)
// Symbol:    sub_1B102D0
// Demangled: sub_1B102D0
// ============================================================================
void (**sub_1B102D0(std::exception *a1))()
{
  return sub_1B10210((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x1b102f0 (size: 10 bytes)
// Symbol:    sub_1B102F0
// Demangled: sub_1B102F0
// ============================================================================
void (**sub_1B102F0(int a1))()
{
  return sub_1B10210((std::exception *)(a1 - 20));
}


// ============================================================================
// Address:   0x1b103d0 (size: 193 bytes)
// Symbol:    sub_1B103D0
// Demangled: sub_1B103D0
// ============================================================================
void sub_1B103D0(std::exception *a1)
{
  int v1;
  uint32_t *v2;

  *((uint32_t *)a1 + 10) = (uint32_t)(uintptr_t)(&off_20B25C4);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B2548);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)a1 + 6);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)a1 + 6)) != 0 )
    *((uint32_t *)a1 + 6) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = (uint32_t *)(*((uint32_t *)a1 + 4) - 12);
  if ( v2 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)a1 + 4) - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  sub_1903D80(a1);
  *((uint32_t *)a1 + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  operator delete(a1);
}


// ============================================================================
// Address:   0x1b104a0 (size: 18 bytes)
// Symbol:    sub_1B104A0
// Demangled: sub_1B104A0
// ============================================================================
void sub_1B104A0(std::exception *a1)
{
  sub_1B103D0((std::exception *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 20)));
}


// ============================================================================
// Address:   0x1b104c0 (size: 10 bytes)
// Symbol:    sub_1B104C0
// Demangled: sub_1B104C0
// ============================================================================
void sub_1B104C0(int a1)
{
  sub_1B103D0((std::exception *)(a1 - 20));
}


// ============================================================================
// Address:   0x1b104d0 (size: 274 bytes)
// Symbol:    sub_1B104D0
// Demangled: sub_1B104D0
// ============================================================================
void __noreturn sub_1B104D0(int a1)
{
  void *exception;
  int v2;
  int v3;

  exception = _cxa_allocate_exception(0x2Cu);
  *((uint32_t *)exception + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  *(uint32_t *)exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy((size_t **)exception + 1, (size_t **)(a1 + 4));
  *(uint32_t *)exception = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = *(uint32_t *)(a1 + 12);
  *((uint32_t *)exception + 2) = *(uint32_t *)(a1 + 8);
  *((uint32_t *)exception + 3) = v2;
  g4_std_compat::string_construct_copy((size_t **)exception + 4, (size_t **)(a1 + 16));
  *((uint32_t *)exception + 5) = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = *(uint32_t *)(a1 + 24);
  *((uint32_t *)exception + 6) = v3;
  if ( v3 != 0 )
    (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  *((uint32_t *)exception + 7) = *(uint32_t *)(a1 + 28);
  *((uint32_t *)exception + 8) = *(uint32_t *)(a1 + 32);
  *((uint32_t *)exception + 9) = *(uint32_t *)(a1 + 36);
  *(uint32_t *)exception = ((uint32_t)(uintptr_t)&off_20B258C);
  *((uint32_t *)exception + 5) = ((uint32_t)(uintptr_t)&off_20B25A8);
  *((uint32_t *)exception + 10) = (uint32_t)(uintptr_t)(&off_20B25C4);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_4cd268626d,
    (void (*)(void *))((void (** (*)(std::exception *a1))())((void (** (*)(std::exception *a1))())sub_1B10210)));
}
// ----------------------------------------------------------------------------
// Function: sub_1B105F0  (binary VA: 0x1b105f0)
// Original: sub_1B105F0
// ----------------------------------------------------------------------------
void sub_1B105F0(uint32_t *a1)
{
  sub_1B104D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 16));
}

// ----------------------------------------------------------------------------
// Function: sub_1B10610  (binary VA: 0x1b10610)
// Original: sub_1B10610
// ----------------------------------------------------------------------------
uint32_t * sub_1B10610(uint32_t *a1, int a2, int a3, char *a4)
{
  void *v4;
  uint32_t v6[4];

  g4_std::string::construct_from_cstr(v6, a4);
  sub_19042E0(a1, (int)(uintptr_t)(v6));
  v4 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  *a1 = ((uint32_t)(uintptr_t)&off_2048428);
  a1[2] = a2;
  a1[3] = a3;
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: sub_1B106D0  (binary VA: 0x1b106d0)
// Original: sub_1B106D0
// ----------------------------------------------------------------------------
uint32_t * sub_1B106D0(uint32_t *a1)
{
  int64_t v1; // rax
  int v2;
  bool v3;
  typedef struct timespec _g4_t_tp;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_tp)) > _g4_s0 ? (8u + sizeof(_g4_t_tp)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 8u);

  clock_gettime(0, &tp);
  v1 = 1000000000LL * tp.tv_sec;
  v2 = tp.tv_nsec >> 31;
  v3 = __CFADD__(tp.tv_nsec, (uint32_t)v1);
  *a1 = tp.tv_nsec + v1;
  a1[1] = v2 + v3 + HIDWORD(v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1B10730  (binary VA: 0x1b10730)
// Original: sub_1B10730
// ----------------------------------------------------------------------------
int64_t sub_1B10730(uint64_t *a1)
{
  return *a1 / 1000000000LL;
}

// ----------------------------------------------------------------------------
// Function: sub_1B10790  (binary VA: 0x1b10790)
// Original: sub_1B10790
// ----------------------------------------------------------------------------
uint32_t * sub_1B10790(uint32_t *a1)
{
  int64_t v1; // rax
  int v2;
  bool v3;
  typedef struct timespec _g4_t_tp;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_tp)) > _g4_s0 ? (8u + sizeof(_g4_t_tp)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 8u);

  clock_gettime(1, &tp);
  v1 = 1000000000LL * tp.tv_sec;
  v2 = tp.tv_nsec >> 31;
  v3 = __CFADD__(tp.tv_nsec, (uint32_t)v1);
  *a1 = tp.tv_nsec + v1;
  a1[1] = v2 + v3 + HIDWORD(v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1B107F0  (binary VA: 0x1b107f0)
// Original: sub_1B107F0
// ----------------------------------------------------------------------------
void sub_1B107F0(int a1)
{
  void *exception;
  int v2;
  int v3;
  int v4;
  bool v5;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int (**_g4_t_v9)(std::exception *);
  typedef size_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef size_t *_g4_t_v13;
  typedef void (**_g4_t_v14)(boost::exception_detail::error_info_injector<boost::system::system_error::Self> *);
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v14)) > _g4_s7 ? (32u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  exception = _cxa_allocate_exception(0x2Cu);
  v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9AA8));
  g4_std::string::construct_copy(&v10, (size_t **)(a1 + 4));
  v2 = *(uint32_t *)(a1 + 12);
  v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2048428));
  v11 = *(uint32_t *)(a1 + 8);
  v12 = v2;
  g4_std::string::construct_copy(&v13, (size_t **)(a1 + 16));
  v15 = 0;
  v16 = 0;
  v9 = (int (**)(std::exception *))((uint32_t)(uintptr_t)&off_20B2548);
  v17 = 0;
  v14 = (void (**)(boost::exception_detail::error_info_injector<boost::system::system_error::Self> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B255C));
  v18 = -1;
  *((uint32_t *)exception + 10) = ((uint32_t)(uintptr_t)&off_20A93D0);
  *(uint32_t *)exception = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std::string::construct_copy((size_t **)exception + 1, &v10);
  *(uint32_t *)exception = ((uint32_t)(uintptr_t)&off_2048428);
  v3 = v12;
  *((uint32_t *)exception + 2) = v11;
  *((uint32_t *)exception + 3) = v3;
  g4_std::string::construct_copy((size_t **)exception + 4, &v13);
  *((uint32_t *)exception + 5) = ((uint32_t)(uintptr_t)&off_2093808);
  v4 = v15;
  v5 = v15 == 0;
  *((uint32_t *)exception + 6) = v15;
  if ( !v5 )
    G4_VCALL<void>(v4, 12);
  *((uint32_t *)exception + 7) = v16;
  *((uint32_t *)exception + 8) = v17;
  *((uint32_t *)exception + 9) = v18;
  *(uint32_t *)exception = ((uint32_t)(uintptr_t)&off_20B258C);
  *((uint32_t *)exception + 5) = ((uint32_t)(uintptr_t)&off_20B25A8);
  *((uint32_t *)exception + 10) = (uint32_t)(uintptr_t)(&off_20B25C4);
  v7 = 0;
  if ( v15 != 0 )
  {
    (*(void (**)(int *))(*(uint32_t *)v15 + 20))(&v8);
    v7 = v8;
    if ( v8 != 0 )
      G4_VCALL<void>(v8, 12);
    if ( v8 != 0 )
      G4_VCALL<void>(v8, 16);
  }
  *((uint32_t *)exception + 8) = v17;
  *((uint32_t *)exception + 9) = v18;
  *((uint32_t *)exception + 7) = v16;
  v6 = *((uint32_t *)exception + 6);
  if ( v6 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v6 + 16))(*((uint32_t *)exception + 6));
  *((uint32_t *)exception + 6) = v7;
  if ( v7 != 0 )
  {
    G4_VCALL<void>(v7, 12);
    G4_VCALL<void>(v7, 16);
  }
  v9 = (int (**)(std::exception *))((uint32_t)(uintptr_t)&off_20B2548);
  v14 = (void (**)(boost::exception_detail::error_info_injector<boost::system::system_error::Self> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B255C));
  g4_noop_dtor((boost::exception *)&v14);
  sub_542030((std::exception *)&v9);
  _cxa_throw(
    exception,
    (type_info *)&g4_typeinfo_4cd268626d,
    (void (*)(void *))((void (** (*)(std::exception *a1))())((void (** (*)(std::exception *a1))())sub_1B10210)));
}

// ----------------------------------------------------------------------------
// Function: sub_1B10B10  (binary VA: 0x1b10b10)
// Original: sub_1B10B10
// ----------------------------------------------------------------------------
uint32_t * sub_1B10B10(uint32_t *a1, uint32_t *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int64_t v7; // rax
  int v8;
  bool v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  typedef struct timespec _g4_t_tp;
  typedef int _g4_t_v15[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_tp)) > _g4_s0 ? (4u + sizeof(_g4_t_tp)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  if ( clock_gettime(0, &tp) != 0 )
  {
    if ( a2 == nullptr )
    {
      v10 = sub_18F81E0();
      v13 = (int *)__errno(v12, v11);
      sub_1B10610(v15, *v13, (int)(uintptr_t)(v10), "chrono::system_clock");
      sub_1B107F0((int)(uintptr_t)(v15));
    }
    v2 = sub_18F81E0();
    v5 = *(uint32_t *)__errno(v4, v3);
    *a1 = 0;
    *a2 = v5;
    a2[1] = (uint32_t)(uintptr_t)(v2);
    a1[1] = 0;
    return a1;
  }
  else
  {
    if ( a2 != nullptr )
    {
      *a2 = 0;
      a2[1] = (uint32_t)(uintptr_t)(sub_18F81E0());
    }
    v7 = 1000000000LL * tp.tv_sec;
    v8 = tp.tv_nsec >> 31;
    v9 = __CFADD__(tp.tv_nsec, (uint32_t)v7);
    *a1 = tp.tv_nsec + v7;
    a1[1] = v8 + v9 + HIDWORD(v7);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1B10C00  (binary VA: 0x1b10c00)
// Original: sub_1B10C00
// ----------------------------------------------------------------------------
uint32_t * sub_1B10C00(uint32_t *a1, uint32_t *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int64_t v7; // rax
  int v8;
  bool v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  typedef struct timespec _g4_t_tp;
  typedef int _g4_t_v15[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_tp)) > _g4_s0 ? (4u + sizeof(_g4_t_tp)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  if ( clock_gettime(1, &tp) != 0 )
  {
    if ( a2 == nullptr )
    {
      v10 = sub_18F81E0();
      v13 = (int *)__errno(v12, v11);
      sub_1B10610(v15, *v13, (int)(uintptr_t)(v10), "chrono::steady_clock");
      sub_1B107F0((int)(uintptr_t)(v15));
    }
    v2 = sub_18F81E0();
    v5 = *(uint32_t *)__errno(v4, v3);
    *a1 = 0;
    *a2 = v5;
    a2[1] = (uint32_t)(uintptr_t)(v2);
    a1[1] = 0;
    return a1;
  }
  else
  {
    if ( a2 != nullptr )
    {
      *a2 = 0;
      a2[1] = (uint32_t)(uintptr_t)(sub_18F81E0());
    }
    v7 = 1000000000LL * tp.tv_sec;
    v8 = tp.tv_nsec >> 31;
    v9 = __CFADD__(tp.tv_nsec, (uint32_t)v7);
    *a1 = tp.tv_nsec + v7;
    a1[1] = v8 + v9 + HIDWORD(v7);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1B10CF0  (binary VA: 0x1b10cf0)
// Original: sub_1B10CF0
// ----------------------------------------------------------------------------
int sub_1B10CF0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v1 = opNew(0x2Cu);
  *(uint32_t *)(v1 + 40) = ((uint32_t)(uintptr_t)&off_20A93D0);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std::string::construct_copy((size_t **)(v1 + 4), (size_t **)(a1 + 4));
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(v1 + 8) = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(v1 + 12) = v2;
  g4_std::string::construct_copy((size_t **)(v1 + 16), (size_t **)(a1 + 16));
  *(uint32_t *)(v1 + 20) = ((uint32_t)(uintptr_t)&off_2093808);
  v3 = *(uint32_t *)(a1 + 24);
  *(uint32_t *)(v1 + 24) = v3;
  if ( v3 != 0 )
    G4_VCALL<void>(v3, 12);
  v4 = 0;
  *(uint32_t *)(v1 + 28) = *(uint32_t *)(a1 + 28);
  *(uint32_t *)(v1 + 32) = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(v1 + 36) = *(uint32_t *)(a1 + 36);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20B258C);
  *(uint32_t *)(v1 + 20) = ((uint32_t)(uintptr_t)&off_20B25A8);
  *(uint32_t *)(v1 + 40) = (uint32_t)(uintptr_t)(&off_20B25C4);
  v5 = *(uint32_t *)(a1 + 24);
  v8 = 0;
  if ( v5 != 0 )
  {
    (*(void (**)(uint32_t *))(*(uint32_t *)v5 + 20))(v9);
    v4 = v9[0];
    v8 = v9[0];
    if ( v9[0] != 0 )
      G4_VCALL<void>(v9[0], 12);
    if ( v9[0] != 0 )
      G4_VCALL<void>(v9[0], 16);
  }
  *(uint32_t *)(v1 + 32) = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(v1 + 36) = *(uint32_t *)(a1 + 36);
  *(uint32_t *)(v1 + 28) = *(uint32_t *)(a1 + 28);
  v6 = *(uint32_t *)(v1 + 24);
  if ( v6 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v6 + 16))(*(uint32_t *)(v1 + 24));
  *(uint32_t *)(v1 + 24) = v4;
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 12);
  if ( v8 != 0 )
    G4_VCALL<void>(v8, 16);
  return *(uint32_t *)(*(uint32_t *)v1 - 12) + v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1B10EF0  (binary VA: 0x1b10ef0)
// Original: sub_1B10EF0
// ----------------------------------------------------------------------------
int sub_1B10EF0(uint32_t *a1)
{
  return sub_1B10CF0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1B10F10  (binary VA: 0x1b10f10)
// Original: sub_1B10F10
// ----------------------------------------------------------------------------
int sub_1B10F10()
{
  sub_1900D70();
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2143070, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: SSLeay_version  (binary VA: 0x1b10f60)
// Original: SSLeay_version
// ----------------------------------------------------------------------------
const char * SSLeay_version(int a1)
{
  const char *result;

  result = "OpenSSL 1.0.0d 8 Feb 2011";
  if ( a1 != 0 )
  {
    result = "built on: date not available";
    if ( a1 != 3 )
    {
      result = "compiler: information not available";
      if ( a1 != 2 )
      {
        result = "platform: information not available";
        if ( a1 != 4 )
        {
          result = "OPENSSLDIR: \"/usr/local/ssl\"";
          if ( a1 != 5 )
            return "not available";
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSLeay  (binary VA: 0x1b10fb0)
// Original: SSLeay
// ----------------------------------------------------------------------------
int SSLeay()
{
  return 268435535;
}

// ----------------------------------------------------------------------------
// Function: sub_1B10FC0  (binary VA: 0x1b10fc0)
// Original: sub_1B10FC0
// ----------------------------------------------------------------------------
int sub_1B10FC0(const void *a1, int a2, uint32_t *a3)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int result;

  v3 = 4;
  if ( a2 <= 4 )
    v3 = a2;
  if ( memcmp(a1, &off_1B23A1E, v3) == 0 )
  {
    *a3 |= 0xFFFFu;
    return 1;
  }
  else
  {
    v4 = 4;
    if ( a2 <= 4 )
      v4 = a2;
    if ( memcmp(a1, "RSA", v4) == 0 )
    {
      *a3 |= 1u;
      return 1;
    }
    else
    {
      v5 = 4;
      if ( a2 <= 4 )
        v5 = a2;
      if ( memcmp(a1, "DSA", v5) == 0 )
      {
        *a3 |= 2u;
        return 1;
      }
      else
      {
        v6 = 5;
        if ( a2 <= 5 )
          v6 = a2;
        if ( memcmp(a1, "ECDH", v6) == 0 )
        {
          *a3 |= 0x10u;
          return 1;
        }
        else
        {
          v7 = 6;
          if ( a2 <= 6 )
            v7 = a2;
          if ( memcmp(a1, "ECDSA", v7) == 0 )
          {
            *a3 |= 0x20u;
            return 1;
          }
          else
          {
            v8 = 3;
            if ( a2 <= 3 )
              v8 = a2;
            if ( memcmp(a1, "DH", v8) == 0 )
            {
              *a3 |= 4u;
              return 1;
            }
            else
            {
              v9 = 5;
              if ( a2 <= 5 )
                v9 = a2;
              if ( memcmp(a1, "RAND", v9) == 0 )
              {
                *a3 |= 8u;
                return 1;
              }
              else
              {
                v10 = 8;
                if ( a2 <= 8 )
                  v10 = a2;
                if ( memcmp(a1, "CIPHERS", v10) == 0 )
                {
                  *a3 |= 0x40u;
                  return 1;
                }
                else
                {
                  v11 = 8;
                  if ( a2 <= 8 )
                    v11 = a2;
                  if ( memcmp(a1, "DIGESTS", v11) == 0 )
                  {
                    *a3 |= 0x80u;
                    return 1;
                  }
                  else
                  {
                    v12 = 5;
                    if ( a2 <= 5 )
                      v12 = a2;
                    if ( memcmp(a1, "PKEY", v12) == 0 )
                    {
                      *a3 |= 0x600u;
                      return 1;
                    }
                    else
                    {
                      v13 = 12;
                      if ( a2 <= 12 )
                        v13 = a2;
                      if ( memcmp(a1, "PKEY_CRYPTO", v13) == 0 )
                      {
                        *a3 |= 0x200u;
                        return 1;
                      }
                      else
                      {
                        v14 = 10;
                        if ( a2 <= 10 )
                          v14 = a2;
                        result = 0;
                        if ( memcmp(a1, "PKEY_ASN1", v14) == 0 )
                        {
                          *a3 |= 0x400u;
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1B11AA0  (binary VA: 0x1b11aa0)
// Original: sub_1B11AA0
// ----------------------------------------------------------------------------
int sub_1B11AA0(int *a1, char *a2, int *a3, int *a4)
{
  int v4;
  int i;
  int *v6;
  int attr_gen;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  char v14; // di
  int v15;
  size_t v16;
  int v17;
  typedef size_t *_g4_t_v19;
  typedef char *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v21)) > _g4_s1 ? (28u + sizeof(_g4_t_v21)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);

  v4 = 0;
  for ( i = sk_num((int)(uintptr_t)(a1)); v4 < i; i = sk_num((int)(uintptr_t)(a1)) )
  {
    v6 = (int *)sk_value(a1, v4);
    attr_gen = PKCS12_get_attr_gen(v6[2], 156);
    v19 = nullptr;
    if ( attr_gen != 0 )
      v19 = *(size_t **)(attr_gen + 4);
    v8 = 0;
    v9 = PKCS12_get_attr_gen(v6[2], 157);
    if ( v9 != 0 )
      v8 = *(uint32_t *)(v9 + 4);
    v10 = OBJ_obj2nid(*v6);
    if ( v10 == 151 )
    {
      if ( a3 != nullptr && *a3 == 0 )
      {
        v13 = PKCS12_decrypt_skey((int)(uintptr_t)(v6), a2, -1);
        v14 = v13;
        if ( v13 == 0 )
          return 0;
        *a3 = EVP_PKCS82PKEY(v13);
        PKCS8_PRIV_KEY_INFO_free(v14);
        if ( *a3 == 0 )
          return 0;
      }
    }
    else if ( v10 <= 151 )
    {
      if ( v10 == 150 && a3 != nullptr && *a3 == 0 )
      {
        v15 = EVP_PKCS82PKEY(v6[1]);
        *a3 = v15;
        if ( v15 == 0 )
          return 0;
      }
    }
    else if ( v10 == 152 )
    {
      if ( OBJ_obj2nid(*(uint32_t *)v6[1]) == 158 )
      {
        v12 = PKCS12_certbag2x509((int)(uintptr_t)(v6));
        if ( v12 == 0 )
          return 0;
        if ( v8 != 0 && X509_keyid_set1(v12, *(char **)(v8 + 8), *(uint32_t *)v8) == 0
          || v19 != nullptr
          && (int)(v16 = ASN1_STRING_to_UTF8(&v21, v19)) > 0
          && (v17 = X509_alias_set1(v12, v21, v16), CRYPTO_free(v21), v17 == 0)
          || sk_push(a4, v12) == 0 )
        {
          X509_free(v12);
          return 0;
        }
      }
    }
    else if ( v10 == 155 && sub_1B11AA0(a3, a4) == 0 )
    {
      return 0;
    }
    ++v4;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_issetugid  (binary VA: 0x1b12ee0)
// Original: OPENSSL_issetugid
// ----------------------------------------------------------------------------
bool OPENSSL_issetugid()
{
  __uid_t v0;
  __gid_t v2;

  v0 = getuid();
  if ( v0 != geteuid() )
    return true;
  v2 = getgid();
  return v2 != getegid();
}


