#include "Core/Utils/DecompTypes.h"
#include "havok_internal_1.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_15C53A0  (binary VA: 0x15c53a0)
// Original: sub_15C53A0
// ----------------------------------------------------------------------------
int sub_15C53A0(int a1, int a2, uint32_t *a3, int *a4, int *a5, int *a6)
{
  int *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  uint16_t *v11;
  uint16_t *v12;
  unsigned int v13;
  int v14;
  void *v15;
  hkLifoAllocator::Self **v16;
  void *v17;
  int v18;
  int v19;
  hkLifoAllocator::Self *v20;
  signed int v21;
  int result;
  hkLifoAllocator::Self *v23;
  signed int v24;
  char *v25;
  int v26;
  typedef int *_g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef uint8_t *_g4_t_s;
  typedef void *_g4_t_sa;
  typedef void *_g4_t_sb;
  typedef char _g4_t_v37[4];
  typedef void *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef void *_g4_t_v43;
  typedef uint32_t _g4_t_v44[2];
  typedef int *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49;
  typedef uint8_t _g4_t_v50[3328];
  typedef int _g4_t_v51;
  typedef void *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  enum : size_t {
    _g4_s0 = 3632u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_address)) > _g4_s4 ? (24u + sizeof(_g4_t_address)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_s)) > _g4_s5 ? (32u + sizeof(_g4_t_s)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_sa)) > _g4_s6 ? (32u + sizeof(_g4_t_sa)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_sb)) > _g4_s7 ? (32u + sizeof(_g4_t_sb)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v37)) > _g4_s8 ? (36u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v38)) > _g4_s9 ? (40u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v39)) > _g4_s10 ? (44u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v40)) > _g4_s11 ? (48u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v41)) > _g4_s12 ? (52u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v42)) > _g4_s13 ? (56u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v43)) > _g4_s14 ? (60u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v44)) > _g4_s15 ? (72u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v45)) > _g4_s16 ? (80u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v46)) > _g4_s17 ? (84u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v47)) > _g4_s18 ? (88u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v48)) > _g4_s19 ? (92u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v49)) > _g4_s20 ? (96u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (200u + sizeof(_g4_t_v50)) > _g4_s21 ? (200u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (3528u + sizeof(_g4_t_v51)) > _g4_s22 ? (3528u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (3532u + sizeof(_g4_t_v52)) > _g4_s23 ? (3532u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (3536u + sizeof(_g4_t_v53)) > _g4_s24 ? (3536u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (3540u + sizeof(_g4_t_v54)) > _g4_s25 ? (3540u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (3552u + sizeof(_g4_t_v55)) > _g4_s26 ? (3552u + sizeof(_g4_t_v55)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 32u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 200u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 3528u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 3532u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 3536u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 3540u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 3552u);

  v55 = (uint32_t *)(&a3);
  v30 = a3;
  v29 = a4;
  v28 = a5;
  v27 = a6;
  v44[0] = ((uint32_t)(uintptr_t)&off_2097DB0);
  v44[1] = -65535;
  v45 = nullptr;
  v46 = 0;
  v47 = 0x80000000;
  v51 = 0;
  v52 = nullptr;
  v53 = 0x80000000;
  v54 = -1;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v37, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v45, 8, 4);
  v6 = v45;
  if ( 8 - v46 > 0 )
  {
    memset(&v45[v46], 0, 4 * (8 - v46));
    v6 = v45;
  }
  v46 = 8;
  v7 = v6[7];
  v8 = *v6;
  v6[3] = v6[3] & 0x3FFFFFFF | 0x40000000;
  v9 = v6[4] & 0x60000000;
  *v6 = v8 & 0x60000000;
  v6[2] = 4;
  v6[1] = 0;
  v6[5] = 0;
  v6[4] = v9;
  v6[6] = 4;
  v6[7] = v7 & 0x3FFFFFFF | 0x40000000;
  v48 = 0;
  v10 = &v49;
  s = v50;
  do
  {
    *(uint32_t *)v10 = 0;
    v12 = (uint16_t *)(s);
    v13 = 128;
    if ( ((uint8_t)(uintptr_t)s & 1) != 0 )
    {
      *s = 0;
      v12 = (uint16_t *)(s + 1);
      LOBYTE(v13) = 127;
      if ( ((unsigned int)(uintptr_t)(s + 1) & 2) == 0 )
        goto LABEL_5;
    }
    else if ( ((uint8_t)(uintptr_t)s & 2) == 0 )
    {
      goto LABEL_5;
    }
    *v12 = 0;
    v13 -= 2;
    ++v12;
LABEL_5:
    memset(v12, 0, 4 * (v13 >> 2));
    v11 = &v12[2 * (v13 >> 2)];
    if ( (v13 & 2) != 0 )
      *v11++ = 0;
    if ( (v13 & 1) != 0 )
      *(uint8_t *)v11 = 0;
    v10 += 4;
    s += 128;
  }
  while ( v10 != (char *)(v50) );
  hkcdPlanarSolid::classifyPolygons(a1, a2, *(uint32_t *)(a1 + 20), v30, v29, v28, v27, v44);
  v38 = nullptr;
  v39 = 0;
  v44[0] = ((uint32_t)(uintptr_t)&off_2097DB0);
  sa = v52;
  v40 = 0x80000000;
  v14 = ((int)(uintptr_t)(v52) + 31) >> 5;
  v42 = v14;
  if ( v14 == 0 )
  {
    v43 = v52;
    v41 = nullptr;
    v15 = nullptr;
    goto LABEL_15;
  }
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v23 = *address;
  v24 = (4 * v14 + 127) & 0xFFFFFF80;
  v25 = *((char **)*address + 3);
  if ( v24 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v25[v24]) <= *((uint32_t *)v23 + 4) )
    *((uint32_t *)v23 + 3) = (uint32_t)(uintptr_t)(&v25[v24]);
  else
    v25 = (char *)hkLifoAllocator::allocateFromNewSlab(v23, (4 * v14 + 127) & 0xFFFFFF80);
  v38 = v25;
  v41 = v25;
  v40 = v14 | 0x80000000;
  v43 = sa;
  if ( v14 <= (v14 & 0x3FFFFFFF) )
  {
    v15 = v25;
LABEL_15:
    sb = v15;
    v16 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v17 = sb;
  }
  else
  {
    v26 = 2 * (v14 & 0x3FFFFFFF);
    if ( v26 < v14 )
      v26 = v14;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v37,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v38,
      v26,
      4);
    v17 = v38;
    v16 = address;
  }
  v39 = v14;
  if ( v14 > 0 )
  {
    memset(v17, 0, 4 * v14);
    v17 = v38;
  }
  v18 = v54;
  if ( v54 != -1 )
  {
    while ( 1 )
    {
      *((uint32_t *)v17 + (v18 >> 5)) |= 1 << v18;
      v54 = *(uint32_t *)(v51 + 8 * v54);
      v18 = v54;
      if ( v54 == -1 )
        break;
      v17 = v38;
    }
    v17 = v38;
  }
  v19 = 0;
  v52 = nullptr;
  if ( v41 != v17 )
    v19 = v39;
  v39 = v19;
  v20 = *v16;
  v21 = (4 * v42 + 127) & 0xFFFFFF80;
  if ( v21 > *((uint32_t *)*v16 + 2) || *((void **)v20 + 3) != (char *)v41 + v21 || v41 == *((void **)v20 + 5) )
    hkLifoAllocator::slowBlockFree(v20, (char *)v41, (4 * v42 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v20 + 3) = (uint32_t)(uintptr_t)(v41);
  v39 = 0;
  if ( v40 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v38,
      4 * v40);
  v52 = nullptr;
  if ( v53 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v51,
      8 * v53);
  v51 = 0;
  v53 = 0x80000000;
  v44[0] = ((uint32_t)(uintptr_t)&off_2097D90);
  result = v47;
  v46 = 0;
  if ( v47 >= 0 )
    return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v45,
             4 * v47);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkHandle_unsigned_int_0u_71ac2d  (binary VA: 0x15c58f0)
// Original: hkAlgorithm::quickSortRecursive<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkAlgorithm::less<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>>>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkHandle_unsigned_int_0u_71ac2d(int a1, int a2, int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  unsigned int *v6;
  unsigned int v7;
  int v8;
  int result;
  int v10;
  unsigned int v11;
  int i;
  unsigned int *v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  int j;
  unsigned int *v19;
  unsigned int v20;
  int v21;
  bool v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int *v26;
  unsigned int v27;
  int v28;
  bool v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int *v33;
  unsigned int v34;
  int v35;
  bool v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int *v40;
  unsigned int v41;
  int v42;
  bool v43;
  int v44;
  int v45;
  unsigned int v46;
  unsigned int *v47;
  unsigned int v48;
  int v49;
  bool v50;
  int v51;
  unsigned int v52;
  int k;
  unsigned int *v54;
  unsigned int v55;
  int v56;
  int m;
  int v58;
  int v59;
  unsigned int v60;
  unsigned int *v61;
  unsigned int v62;
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

  while ( 1 )
  {
    v3 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v65 = a2 + 1;
    v4 = a2 + 1;
    v5 = a3;
    while ( 1 )
    {
      v70 = v4 - 1;
      if ( v3 <= *(uint32_t *)(a1 + 4 * v4 - 4) )
      {
        v6 = (unsigned int *)(a1 + 4 * v5);
        v7 = *v6;
        if ( v3 < *v6 )
        {
          v8 = a1 + 4 * v5 - 4;
          do
          {
            v6 = (unsigned int *)v8;
            v8 -= 4;
            v7 = *(uint32_t *)(v8 + 4);
            --v5;
          }
          while ( v3 < v7 );
        }
        if ( v5 < v70 )
          break;
        if ( v5 != v70 )
        {
          *v6 = *(uint32_t *)(a1 + 4 * v4 - 4);
          *(uint32_t *)(a1 + 4 * v4 - 4) = v7;
        }
        --v5;
        v70 = v4;
        if ( v5 < v4 )
          break;
      }
      ++v4;
    }
    v76 = v5;
    if ( a2 < v5 )
    {
      while ( 1 )
      {
        v10 = v76;
        v11 = *(uint32_t *)(a1 + 4 * ((v76 + a2) >> 1));
        for ( i = v65; ; ++i )
        {
          v71 = i - 1;
          if ( v11 <= *(uint32_t *)(a1 + 4 * i - 4) )
          {
            v13 = (unsigned int *)(a1 + 4 * v10);
            v14 = *v13;
            if ( v11 < *v13 )
            {
              v15 = a1 + 4 * v10 - 4;
              do
              {
                v13 = (unsigned int *)v15;
                v15 -= 4;
                v14 = *(uint32_t *)(v15 + 4);
                --v10;
              }
              while ( v11 < v14 );
            }
            if ( v10 < v71 )
              break;
            if ( v10 != v71 )
            {
              *v13 = *(uint32_t *)(a1 + 4 * i - 4);
              *(uint32_t *)(a1 + 4 * i - 4) = v14;
            }
            --v10;
            v71 = i;
            if ( v10 < i )
              break;
          }
        }
        v77 = v10;
        if ( a2 < v10 )
        {
          while ( 1 )
          {
            v16 = v77;
            v17 = *(uint32_t *)(a1 + 4 * ((v77 + a2) >> 1));
            for ( j = v65; ; ++j )
            {
              v72 = j - 1;
              if ( v17 <= *(uint32_t *)(a1 + 4 * j - 4) )
              {
                v19 = (unsigned int *)(a1 + 4 * v16);
                v20 = *v19;
                if ( v17 < *v19 )
                {
                  v21 = a1 + 4 * v16 - 4;
                  do
                  {
                    v19 = (unsigned int *)v21;
                    v21 -= 4;
                    v20 = *(uint32_t *)(v21 + 4);
                    --v16;
                  }
                  while ( v17 < v20 );
                }
                if ( v16 < v72 )
                  break;
                if ( v16 != v72 )
                {
                  *v19 = *(uint32_t *)(a1 + 4 * j - 4);
                  *(uint32_t *)(a1 + 4 * j - 4) = v20;
                }
                --v16;
                v72 = j;
                if ( v16 < j )
                  break;
              }
            }
            v78 = v16;
            if ( a2 < v16 )
            {
              while ( 1 )
              {
                v23 = *(uint32_t *)(a1 + 4 * ((v78 + a2) >> 1));
                v24 = v65;
                v25 = v78;
                while ( 1 )
                {
                  v74 = v24 - 1;
                  if ( v23 <= *(uint32_t *)(a1 + 4 * v24 - 4) )
                  {
                    v26 = (unsigned int *)(a1 + 4 * v25);
                    v27 = *v26;
                    if ( v23 >= *v26 )
                    {
                      v22 = v25 == v74;
                      if ( v25 < v74 )
                        break;
                    }
                    else
                    {
                      v28 = a1 + 4 * v25 - 4;
                      do
                      {
                        v26 = (unsigned int *)v28;
                        v28 -= 4;
                        v27 = *(uint32_t *)(v28 + 4);
                        --v25;
                      }
                      while ( v23 < v27 );
                      v22 = v25 == v74;
                      if ( v25 < v74 )
                        break;
                    }
                    if ( !v22 )
                    {
                      *v26 = *(uint32_t *)(a1 + 4 * v24 - 4);
                      *(uint32_t *)(a1 + 4 * v24 - 4) = v27;
                    }
                    --v25;
                    v74 = v24;
                    if ( v25 < v24 )
                      break;
                  }
                  ++v24;
                }
                v79 = v25;
                if ( a2 < v25 )
                {
                  while ( 1 )
                  {
                    v30 = v79;
                    v31 = v65;
                    v32 = *(uint32_t *)(a1 + 4 * ((v79 + a2) >> 1));
                    while ( 1 )
                    {
                      v75 = v31 - 1;
                      if ( v32 <= *(uint32_t *)(a1 + 4 * v31 - 4) )
                      {
                        v33 = (unsigned int *)(a1 + 4 * v30);
                        v34 = *v33;
                        if ( v32 >= *v33 )
                        {
                          v29 = v30 == v75;
                          if ( v30 < v75 )
                            break;
                        }
                        else
                        {
                          v35 = a1 + 4 * v30 - 4;
                          do
                          {
                            v33 = (unsigned int *)v35;
                            v35 -= 4;
                            v34 = *(uint32_t *)(v35 + 4);
                            --v30;
                          }
                          while ( v32 < v34 );
                          v29 = v30 == v75;
                          if ( v30 < v75 )
                            break;
                        }
                        if ( !v29 )
                        {
                          *v33 = *(uint32_t *)(a1 + 4 * v31 - 4);
                          *(uint32_t *)(a1 + 4 * v31 - 4) = v34;
                        }
                        --v30;
                        v75 = v31;
                        if ( v30 < v31 )
                          break;
                      }
                      ++v31;
                    }
                    v80 = v30;
                    if ( a2 < v30 )
                    {
                      while ( 1 )
                      {
                        v37 = v80;
                        v38 = v65;
                        v39 = *(uint32_t *)(a1 + 4 * ((v80 + a2) >> 1));
                        while ( 1 )
                        {
                          v69 = v38 - 1;
                          if ( v39 <= *(uint32_t *)(a1 + 4 * v38 - 4) )
                          {
                            v40 = (unsigned int *)(a1 + 4 * v37);
                            v41 = *v40;
                            if ( *v40 <= v39 )
                            {
                              v36 = v37 == v69;
                              if ( v37 < v69 )
                                break;
                            }
                            else
                            {
                              v42 = a1 + 4 * v37 - 4;
                              do
                              {
                                v40 = (unsigned int *)v42;
                                v42 -= 4;
                                v41 = *(uint32_t *)(v42 + 4);
                                --v37;
                              }
                              while ( v39 < v41 );
                              v36 = v37 == v69;
                              if ( v37 < v69 )
                                break;
                            }
                            if ( !v36 )
                            {
                              *v40 = *(uint32_t *)(a1 + 4 * v38 - 4);
                              *(uint32_t *)(a1 + 4 * v38 - 4) = v41;
                            }
                            --v37;
                            v69 = v38;
                            if ( v37 < v38 )
                              break;
                          }
                          ++v38;
                        }
                        v81 = v37;
                        if ( a2 < v37 )
                        {
                          while ( 1 )
                          {
                            v44 = v81;
                            v45 = v65;
                            v46 = *(uint32_t *)(a1 + 4 * ((v81 + a2) >> 1));
                            while ( 1 )
                            {
                              v67 = v45 - 1;
                              if ( v46 <= *(uint32_t *)(a1 + 4 * v45 - 4) )
                              {
                                v47 = (unsigned int *)(a1 + 4 * v44);
                                v48 = *v47;
                                if ( v46 >= *v47 )
                                {
                                  v43 = v44 == v67;
                                  if ( v44 < v67 )
                                    break;
                                }
                                else
                                {
                                  v49 = a1 + 4 * v44 - 4;
                                  do
                                  {
                                    v47 = (unsigned int *)v49;
                                    v49 -= 4;
                                    v48 = *(uint32_t *)(v49 + 4);
                                    --v44;
                                  }
                                  while ( v46 < v48 );
                                  v43 = v44 == v67;
                                  if ( v44 < v67 )
                                    break;
                                }
                                if ( !v43 )
                                {
                                  *v47 = *(uint32_t *)(a1 + 4 * v45 - 4);
                                  *(uint32_t *)(a1 + 4 * v45 - 4) = v48;
                                }
                                --v44;
                                v67 = v45;
                                if ( v44 < v45 )
                                  break;
                              }
                              ++v45;
                            }
                            v73 = v44;
                            if ( a2 < v44 )
                            {
                              while ( 1 )
                              {
                                v51 = v73;
                                v52 = *(uint32_t *)(a1 + 4 * ((v73 + a2) >> 1));
                                for ( k = v65; ; ++k )
                                {
                                  v66 = k - 1;
                                  if ( v52 <= *(uint32_t *)(a1 + 4 * k - 4) )
                                  {
                                    v54 = (unsigned int *)(a1 + 4 * v51);
                                    v55 = *v54;
                                    if ( v52 >= *v54 )
                                    {
                                      v50 = v51 == v66;
                                      if ( v51 < v66 )
                                        break;
                                    }
                                    else
                                    {
                                      v56 = a1 + 4 * v51 - 4;
                                      do
                                      {
                                        v54 = (unsigned int *)v56;
                                        v56 -= 4;
                                        v55 = *(uint32_t *)(v56 + 4);
                                        --v51;
                                      }
                                      while ( v52 < v55 );
                                      v50 = v51 == v66;
                                      if ( v51 < v66 )
                                        break;
                                    }
                                    if ( !v50 )
                                    {
                                      *v54 = *(uint32_t *)(a1 + 4 * k - 4);
                                      *(uint32_t *)(a1 + 4 * k - 4) = v55;
                                    }
                                    --v51;
                                    v66 = k;
                                    if ( v51 < k )
                                      break;
                                  }
                                }
                                v68 = v51;
                                if ( a2 < v51 )
                                {
                                  for ( m = v65; ; m = v64 + 1 )
                                  {
                                    v58 = m;
                                    v59 = v68;
                                    v60 = *(uint32_t *)(a1 + 4 * ((v68 + a2) >> 1));
                                    while ( 1 )
                                    {
                                      v64 = v58 - 1;
                                      if ( v60 <= *(uint32_t *)(a1 + 4 * v58 - 4) )
                                      {
                                        v61 = (unsigned int *)(a1 + 4 * v59);
                                        v62 = *v61;
                                        if ( v60 < *v61 )
                                        {
                                          v63 = a1 + 4 * v59 - 4;
                                          do
                                          {
                                            v61 = (unsigned int *)v63;
                                            v63 -= 4;
                                            v62 = *(uint32_t *)(v63 + 4);
                                            --v59;
                                          }
                                          while ( v60 < v62 );
                                        }
                                        if ( v59 < v64 )
                                          break;
                                        if ( v59 != v64 )
                                        {
                                          *v61 = *(uint32_t *)(a1 + 4 * v58 - 4);
                                          *(uint32_t *)(a1 + 4 * v58 - 4) = v62;
                                        }
                                        --v59;
                                        v64 = v58;
                                        if ( v59 < v58 )
                                          break;
                                      }
                                      ++v58;
                                    }
                                    if ( a2 < v59 )
                                      hkAlgorithm::quickSortRecursive_hkHandle_unsigned_int_0u_71ac2d(
                                        a1,
                                        a2,
                                        v59);
                                    if ( v68 <= v64 )
                                      break;
                                    a2 = v64;
                                  }
                                }
                                if ( v73 <= v66 )
                                  break;
                                a2 = v66;
                                v65 = v66 + 1;
                              }
                            }
                            if ( v81 <= v67 )
                              break;
                            a2 = v67;
                            v65 = v67 + 1;
                          }
                        }
                        if ( v80 <= v69 )
                          break;
                        a2 = v69;
                        v65 = v69 + 1;
                      }
                    }
                    if ( v79 <= v75 )
                      break;
                    a2 = v75;
                    v65 = v75 + 1;
                  }
                }
                if ( v78 <= v74 )
                  break;
                a2 = v74;
                v65 = v74 + 1;
              }
            }
            if ( v77 <= v72 )
              break;
            a2 = v72;
            v65 = v72 + 1;
          }
        }
        if ( v76 <= v71 )
          break;
        a2 = v71;
        v65 = v71 + 1;
      }
    }
    result = v70;
    if ( a3 <= v70 )
      return result;
    a2 = v70;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_15C6870  (binary VA: 0x15c6870)
// Original: sub_15C6870
// ----------------------------------------------------------------------------
int sub_15C6870(__m128i *a1, uint32_t *a2)
{
  int32_t v2;
  __m128i v3;
  __m128i v4;
  __m128i v5;
  unsigned int v6;
  uint64_t v7; // rax
  int v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  uint64_t v12; // kr18_8
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  char v16;
  int64_t v17; // rax
  int64_t v18; // rax
  int v19;
  int64_t v21; // kr30_8
  int64_t v22;
  int64_t v23;
  int64_t v24;
  unsigned int v26;
  uint64_t v27;
  unsigned int v28;
  uint64_t v29;
  signed int v30;
  int64_t v31;
  unsigned int v32;
  int64_t v33;
  unsigned int v34;
  uint64_t v35;
  int64_t v36;
  int v37;
  int64_t v38;
  signed int v39;
  int64_t v40;
  int v41;
  int v42;
  int v43;
  __m128i v44;
  __m128i v45;

  v35 =g4_m128_lane<uint64_t>(*(a1), 1);
  v2 =g4_m128_lane<int32_t>(*(a1), 0);
  v3 = a1[1];
  HIDWORD(v40) =g4_m128_lane<int32_t>(*(a1), 1);
  v27 = (uint64_t)g4_m128_lane<int64_t>(a1[1], 0) >> 14;
  v33 = -(int64_t)((g4_m128_lane<int64_t>(a1[1], 0) & 0x8000000000000000LL) >> 13);
  v4 = *a1;
  v5 = _mm_srli_epi64(*a1, 0xEu);
  v7 =g4_m128_lane<uint64_t>(a1[1], 1);
  v31 = -(int64_t)((v7 & 0x8000000000000000LL) >> 13);
  v29 = v7 >> 14;
  v38 = (__PAIR64__(HIDWORD(v40), v2) >> 14) | -(int64_t)((v40 & 0x8000000000000000LL) >> 13);
  v36 = (v35 >> 14) | -(int64_t)((v35 & 0x8000000000000000LL) >> 13);
  v6 = v27 | v33;
  LODWORD(v7) = (v7 >> 14) | -(int)((v7 & 0x8000000000000000LL) >> 13);
  v44 = _mm_or_si128(_mm_sub_epi64(g4_m128_from<__m128i>(0LL), _mm_srli_epi64(_mm_and_si128(v4, G4_BITCAST<__m128i>(xmmword_1C7CC60)), 0xDu)), v5);
  v8 = (((HIDWORD(v27) | HIDWORD(v33)) >> 31) & 4) + 8;
  v45 = _mm_or_si128(
          _mm_sub_epi64(g4_m128_from<__m128i>(0LL), _mm_srli_epi64(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7CC60), v3), 0xDu)),
          _mm_srli_epi64(v3, 0xEu));
  if ( (HIDWORD(v29) | HIDWORD(v31)) >= 0 )
    v8 = ((HIDWORD(v27) | HIDWORD(v33)) >> 31) & 4;
  v24 = -v38;
  v23 = -v36;
  v22 = -(int64_t)(v27 | v33);
  if ( (v8 & 1 | (v38 < 0)) != 0 )
  {
    v21 = -v38;
    v39 = (uint64_t)-v38 >> 32;
    v28 = v21;
  }
  else
  {
    v28 = v38;
    v39 = HIDWORD(v38);
  }
  if ( (v8 & 2 | (SHIDWORD(v36) >> 31) & 2) != 0 )
  {
    v30 = (uint64_t)-v36 >> 32;
    v32 = -(int)v36;
  }
  else
  {
    v30 = HIDWORD(v36);
    v32 = v36;
  }
  if ( (v8 & 4) != 0 )
  {
    v37 = HIDWORD(v22);
    v26 = v22;
    HIDWORD(v7) = HIDWORD(v29) | HIDWORD(v31);
    if ( (v8 & 8) == 0 )
      goto LABEL_9;
  }
  else
  {
    v26 = v6;
    v37 = HIDWORD(v27) | HIDWORD(v33);
    HIDWORD(v7) = HIDWORD(v29) | HIDWORD(v31);
    if ( (v8 & 8) == 0 )
    {
LABEL_9:
      v34 = HIDWORD(v7);
      v41 = v7;
      goto LABEL_10;
    }
  }
  v41 = -(int)v7;
  v34 = (uint64_t)-(int64_t)v7 >> 32;
LABEL_10:
  v9 = __PAIR64__(v32, v30);
  if ( v30 <= v39 )
  {
    if ( v30 >= v39 )
    {
      if ( v32 < v28 )
        v9 = __PAIR64__(v28, v39);
    }
    else
    {
      v9 = __PAIR64__(v28, v39);
    }
  }
  if ( (int)v9 <= v37 )
  {
    if ( (int)v9 >= v37 )
    {
      if ( HIDWORD(v9) < v26 )
        v9 = __PAIR64__(v26, v37);
    }
    else
    {
      v9 = __PAIR64__(v26, v37);
    }
  }
  v10 = v9 == __PAIR64__(v26, v37) ? 4 : 0;
  if ( v9 == __PAIR64__(v41, v34) )
    LOBYTE(v10) = v9 == __PAIR64__(v26, v37) ? 12 : 8;
  v11 = hkVector4Comparison_maskToFirstIndex[v10 & 7
                                           | (v9 == __PAIR64__(v28, v39))
                                           | (v9 == __PAIR64__(v32, v30) ? 2 : 0)];
  v42 =g4_m128_lane<int32_t>(v44, 2 * v11 + 1);
  v12 = __PAIR64__((v42 >> 31) ^ (unsigned int)v42, (unsigned int)(v42 >> 31) ^g4_m128_lane<int32_t>(v44, 2 * v11))
      - __PAIR64__(v42 >> 31, v42 >> 31);
  v13 = (HIDWORD(v12)
       | (HIDWORD(v12) >> 1)
       | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
       | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)
       | ((HIDWORD(v12)
         | (HIDWORD(v12) >> 1)
         | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
         | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)) >> 8)
       | ((HIDWORD(v12)
         | (HIDWORD(v12) >> 1)
         | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
         | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)
         | ((HIDWORD(v12)
           | (HIDWORD(v12) >> 1)
           | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
           | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)) >> 8)) >> 16))
      - (((HIDWORD(v12)
         | (HIDWORD(v12) >> 1)
         | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
         | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)
         | ((HIDWORD(v12)
           | (HIDWORD(v12) >> 1)
           | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
           | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)) >> 8)
         | ((HIDWORD(v12)
           | (HIDWORD(v12) >> 1)
           | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
           | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)
           | ((HIDWORD(v12)
             | (HIDWORD(v12) >> 1)
             | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)
             | ((HIDWORD(v12) | (HIDWORD(v12) >> 1) | ((unsigned int)(HIDWORD(v12) | (HIDWORD(v12) >> 1)) >> 2)) >> 4)) >> 8)) >> 16)) >> 1)
       & 0x55555555);
  v14 = 32
      - ((16843009
        * (((v13 & 0x33333333) + ((v13 >> 2) & 0x33333333) + (((v13 & 0x33333333) + ((v13 >> 2) & 0x33333333)) >> 4))
         & 0xF0F0F0F)) >> 24);
  if ( v14 == 32 )
  {
    v15 = (v12
         | ((unsigned int)v12 >> 1)
         | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
         | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)
         | (((unsigned int)v12
           | ((unsigned int)v12 >> 1)
           | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
           | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)) >> 8)
         | (((unsigned int)v12
           | ((unsigned int)v12 >> 1)
           | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
           | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)
           | (((unsigned int)v12
             | ((unsigned int)v12 >> 1)
             | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
             | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)) >> 8)) >> 16))
        - ((((unsigned int)v12
           | ((unsigned int)v12 >> 1)
           | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
           | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)
           | (((unsigned int)v12
             | ((unsigned int)v12 >> 1)
             | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
             | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)) >> 8)
           | (((unsigned int)v12
             | ((unsigned int)v12 >> 1)
             | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
             | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)
             | (((unsigned int)v12
               | ((unsigned int)v12 >> 1)
               | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)
               | (((unsigned int)v12 | ((unsigned int)v12 >> 1) | (((unsigned int)v12 | ((unsigned int)v12 >> 1)) >> 2)) >> 4)) >> 8)) >> 16)) >> 1)
         & 0x55555555);
    v14 = 64
        - ((16843009
          * (((v15 & 0x33333333) + ((v15 >> 2) & 0x33333333) + (((v15 & 0x33333333) + ((v15 >> 2) & 0x33333333)) >> 4))
           & 0xF0F0F0F)) >> 24);
  }
  v16 = 33 - v14;
  if ( (int)(33 - v14) < 0 )
    v16 = 0;
  if ( v42 < 0 )
  {
g4_m128_lane<int64_t>(v44, 0) = v24;
g4_m128_lane<int64_t>(v44, 1) = v23;
g4_m128_lane<int64_t>(v45, 0) = v22;
  }
  v17 =g4_m128_lane<int64_t>(v45, 0) >> (v16 & 0x1F);
  if ( (v16 & 0x20) != 0 )
    LODWORD(v17) = (uint64_t)(g4_m128_lane<int64_t>(v45, 0) >> (v16 & 0x1F)) >> 32;
  v43 = v17;
  v18 =g4_m128_lane<int64_t>(v44, 1) >> (v16 & 0x1F);
  if ( (v16 & 0x20) != 0 )
    LODWORD(v18) = (uint64_t)(g4_m128_lane<int64_t>(v44, 1) >> (v16 & 0x1F)) >> 32;
  v19 = (uint64_t)g4_m128_lane<int64_t>(v44, 0) >> v16;
  if ( (v16 & 0x20) != 0 )
    v19 =g4_m128_lane<int32_t>(v44, 1) >> v16;
  a2[1] = v18;
  *a2 = v19;
  a2[2] = v43;
  a2[3] = 0;
  return v43;
}

// ----------------------------------------------------------------------------
// Function: sub_15D1E30  (binary VA: 0x15d1e30)
// Original: sub_15D1E30
// ----------------------------------------------------------------------------
int32_t sub_15D1E30(int a1)
{
  volatile int32_t *v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t result;

  v2 = (volatile int32_t *)(a1 + 4);
  do
  {
    v4 = *(uint32_t *)(a1 + 4);
    HIWORD(v3) = HIWORD(v4);
    LOWORD(v3) = 0;
    result = __sync_val_compare_and_swap(v2, v4, v3 | (uint16_t)(v4 + 1));
  }
  while ( v4 != result );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15D1F10  (binary VA: 0x15d1f10)
// Original: sub_15D1F10
// ----------------------------------------------------------------------------
int sub_15D1F10(int a1, uint32_t *a2)
{
  int v3;
  int v4;
  unsigned int v5;
  uint64_t v6; // rt0
  int v7;
  int result;
  int v9;

  v3 = ((uint64_t)-(int64_t)((*(uint64_t *)a1 & 0x8000000000000000LL) >> 13) >> 32) | (*(uint32_t *)(a1 + 4) >> 14);
  *a2 = -(int)((*(uint64_t *)a1 & 0x8000000000000000LL) >> 13) | (*(uint64_t *)a1 >> 14);
  a2[1] = v3;
  v4 = ((uint64_t)-(int64_t)((*(uint64_t *)(a1 + 8) & 0x8000000000000000LL) >> 13) >> 32)
     | (*(uint32_t *)(a1 + 12) >> 14);
  a2[2] = -(int)((*(uint64_t *)(a1 + 8) & 0x8000000000000000LL) >> 13) | (*(uint64_t *)(a1 + 8) >> 14);
  a2[3] = v4;
  v5 = ((unsigned int)((*(uint64_t *)(a1 + 16) & 0x8000000000000000LL) >> 13) != 0)
     + ((*(uint32_t *)(a1 + 20) & 0x80000000) >> 13);
  v9 = *(uint32_t *)(a1 + 20) >> 14;
  a2[4] = -(int)((*(uint64_t *)(a1 + 16) & 0x8000000000000000LL) >> 13) | (*(uint64_t *)(a1 + 16) >> 14);
  a2[5] = -v5 | v9;
  v6 = *(uint64_t *)(a1 + 24) & 0x8000000000000000LL;
  v7 = *(uint32_t *)(a1 + 28) >> 14;
  a2[6] = (*(uint64_t *)(a1 + 24) >> 14) | -(int)(v6 >> 13);
  result = v7 | ((uint64_t)-(int64_t)(v6 >> 13) >> 32);
  a2[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15D2010  (binary VA: 0x15d2010)
// Original: sub_15D2010
// ----------------------------------------------------------------------------
int * sub_15D2010(int **a1, int a2)
{
  int *result;
  int address;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v16)) > _g4_s5 ? (16u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v17)) > _g4_s6 ? (20u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);

  v17[3] = (uint32_t)(uintptr_t)(&a2);
  result = *a1;
  if ( result == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                  *(uint32_t *)(*(uint32_t *)address + 44),
                  48,
                  v11,
                  v12,
                  v13,
                  v14,
                  v15,
                  v17[0],
                  v17[1],
                  v17[2]);
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0x80000000;
    v5[8] = 0;
    v5[9] = 0;
    v5[4] = 73856093;
    v5[5] = 19349663;
    v5[6] = 83492791;
    v5[7] = 52448047;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v17, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v5, 4096, 16);
    v6 = v5[1];
    v16 = 4096 - v6;
    v7 = 4096 - v6;
    v8 = *v5 + 16 * v6;
    v9 = 0;
    if ( v7 > 0 )
    {
      do
      {
        v10 = v9++;
        *(__m128i *)(v8 + 16 * v10) = g4_m128_from<__m128i>(-1LL);
      }
      while ( v16 != v9 );
    }
    v5[1] = 4096;
    *a1 = v5;
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15DE940  (binary VA: 0x15de940)
// Original: sub_15DE940
// ----------------------------------------------------------------------------
int sub_15DE940(int a1, uint32_t *a2)
{
  int v3;
  int v4;
  unsigned int v5;
  uint64_t v6; // rt0
  int v7;
  int result;
  int v9;

  v3 = ((uint64_t)-(int64_t)((*(uint64_t *)a1 & 0x8000000000000000LL) >> 13) >> 32) | (*(uint32_t *)(a1 + 4) >> 14);
  *a2 = -(int)((*(uint64_t *)a1 & 0x8000000000000000LL) >> 13) | (*(uint64_t *)a1 >> 14);
  a2[1] = v3;
  v4 = ((uint64_t)-(int64_t)((*(uint64_t *)(a1 + 8) & 0x8000000000000000LL) >> 13) >> 32)
     | (*(uint32_t *)(a1 + 12) >> 14);
  a2[2] = -(int)((*(uint64_t *)(a1 + 8) & 0x8000000000000000LL) >> 13) | (*(uint64_t *)(a1 + 8) >> 14);
  a2[3] = v4;
  v5 = ((unsigned int)((*(uint64_t *)(a1 + 16) & 0x8000000000000000LL) >> 13) != 0)
     + ((*(uint32_t *)(a1 + 20) & 0x80000000) >> 13);
  v9 = *(uint32_t *)(a1 + 20) >> 14;
  a2[4] = -(int)((*(uint64_t *)(a1 + 16) & 0x8000000000000000LL) >> 13) | (*(uint64_t *)(a1 + 16) >> 14);
  a2[5] = -v5 | v9;
  v6 = *(uint64_t *)(a1 + 24) & 0x8000000000000000LL;
  v7 = *(uint32_t *)(a1 + 28) >> 14;
  a2[6] = (*(uint64_t *)(a1 + 24) >> 14) | -(int)(v6 >> 13);
  result = v7 | ((uint64_t)-(int64_t)(v6 >> 13) >> 32);
  a2[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15DEA40  (binary VA: 0x15dea40)
// Original: sub_15DEA40
// ----------------------------------------------------------------------------
int sub_15DEA40(double *a1, double *a2, double *a3, double *a4, double *a5, double *a6, uint32_t *a7)
{
  double v7; // xmm0_8
  double v8; // xmm5_8
  double v9; // xmm4_8
  __m128i v10;
  int v11;
  int v12; // xmm2_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __m128i v15;
  int v16;
  int v17; // xmm6_4
  double v18; // xmm1_8
  float v19; // xmm6_4
  int v20;
  double v21; // xmm2_8
  int v22;
  double v23; // xmm4_8
  int v24;
  double v25; // xmm5_8
  double v26; // xmm6_8
  int v27;
  __m128i v28;
  int v29;
  int v30;
  int v31;
  double v32; // xmm3_8
  double v33; // xmm1_8
  double v34; // xmm3_8
  int v35;
  int v36; // xmm4_4
  float v37; // xmm4_4
  __m128i v38;
  int v39;
  int v40;
  int v41;
  int v42;
  double v43; // xmm0_8
  int v44;
  double v45; // xmm2_8
  int v46;
  double v47; // xmm3_8
  double v48; // xmm4_8
  double v49; // xmm5_8
  int v50;
  char v51;
  char v52;
  char v53;
  double v54; // xmm1_8
  double v55; // xmm2_8
  double v56; // xmm1_8
  int result;
  double v58;
  double v59;
  double v60;
  double v61;
  double v62;
  double v63;
  double v64;
  double v65;
  double v66;

  v7 = *a2;
  v8 = *a5 + *a1;
  v9 = *a1 - *a5;
  v65 = *a5;
  v63 = *a6;
  v61 = *a2 - *a6;
g4_m128_raw(v10) = *(uint64_t *)&v61;
  *(float *)g4_m128_ptr<int32_t>(v10) = v61;
  v11 = _mm_cvtsi128_si32(v10);
  v59 = v7 + *a6;
  v12 = (2130706432 - v11) & ((v11 ^ (v11 + 2139095040)) >> 31);
  v13 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v10)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v12)) * *(float *)&v12)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v12)) * *(float *)&v12);
  v14 = *(float *)g4_m128_ptr<int32_t>(v10) * v13;
g4_m128_raw(v15) = 0x40000000u;
  *(float *)g4_m128_ptr<int32_t>(v15) = v59;
  v16 = _mm_cvtsi128_si32(v15);
  v17 = (2130706432 - v16) & ((v16 ^ (v16 + 2139095040)) >> 31);
  v18 = (float)((float)(2.0 - v14) * v13) * v8;
  v19 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17)) * *(float *)&v17)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17)) * *(float *)&v17);
  v20 = v8 < 0.0;
  v21 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * v19)) * v19) * v9;
  if ( v9 < 0.0 )
  {
    v20 |= 2u;
    v22 = 4;
  }
  else
  {
    v22 = 4 * (v9 < 0.0);
  }
  v23 = *(double *)unk_1D12AE0;
  LOBYTE(v11) = v8 < 0.0;
  v24 = (v11 << 31 >> 31) & 8 | v20 | v22;
  if ( (v24 & 1) != 0 )
    v23 = -1.797e308;
  v25 = *(double *)unk_1D12AE8;
  if ( (v24 & 2) != 0 )
    v25 = -1.797e308;
  v26 = *(double *)unk_1D12AF0;
  if ( (v24 & 4) != 0 )
    v26 = -1.797e308;
  v58 = *(double *)(unk_1D12AF8);
  if ( (v24 & 8) != 0 )
    v58 = -1.797e308;
  v27 = 0;
g4_m128_raw(v28) = 0;
  if ( v61 == 0.0 )
  {
    LOBYTE(v24) = !__builtin_isnan(v61);
    v27 = v24;
  }
  v29 = (uint8_t)v27;
  if ( v59 == 0.0 )
  {
    v29 = (uint8_t)v27 | 2;
    v30 = 4;
  }
  else
  {
    v30 = 0;
  }
  v31 = (v27 << 31 >> 31) & 8 | v30 | v29;
  if ( (v31 & 1) == 0 )
    v23 = v18;
  if ( (v31 & 2) == 0 )
    v25 = v21;
  if ( (v31 & 4) != 0 )
    v21 = v26;
  if ( (v31 & 8) != 0 )
    v18 = v58;
  v32 = fmin(fmin(v23, v25), fmin(v21, v18));
  v60 = fmax(fmax(v23, v25), fmax(v21, v18));
  v62 = v32 - 0.000000059604644775390625 * v32;
  v33 = *a4 - v63;
  v34 = *a3 - v65;
  v66 = v65 + *a3;
  v64 = *a4 + v63;
  *(float *)g4_m128_ptr<int32_t>(v28) = v33;
  v35 = _mm_cvtsi128_si32(v28);
  v36 = (2130706432 - v35) & ((v35 ^ (v35 + 2139095040)) >> 31);
  v37 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v28)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)&v36)) * *(float *)&v36)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)&v36)) * *(float *)&v36);
  v38 = v28;
  *(float *)g4_m128_ptr<int32_t>(v38) = v64;
  v39 = _mm_cvtsi128_si32(v38);
  v40 = 2130706432 - v39;
  v41 = (2130706432 - v39) & ((v39 ^ (v39 + 2139095040)) >> 31);
  *(double *)g4_m128_ptr<int64_t>(v28) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * v37)) * v37) * v66;
  v42 = v66 < 0.0;
  v43 = (float)((float)(2.0
                      - (float)(*(float *)g4_m128_ptr<int32_t>(v38)
                              * (float)((float)(2.0
                                              - (float)(*(float *)g4_m128_ptr<int32_t>(v38)
                                                      * (float)((float)(2.0
                                                                      - (float)(*(float *)g4_m128_ptr<int32_t>(v38) * *(float *)&v41))
                                                              * *(float *)&v41)))
                                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v38) * *(float *)&v41))
                                              * *(float *)&v41))))
              * (float)((float)(2.0
                              - (float)(*(float *)g4_m128_ptr<int32_t>(v38)
                                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v38) * *(float *)&v41))
                                              * *(float *)&v41)))
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v38) * *(float *)&v41)) * *(float *)&v41)))
      * v34;
  if ( v34 < 0.0 )
  {
    v42 |= 2u;
    v44 = 4;
  }
  else
  {
    v44 = 4 * (v34 < 0.0);
  }
  v45 = *(double *)unk_1D12AE0;
  LOBYTE(v40) = v66 < 0.0;
  v46 = (v40 << 31 >> 31) & 8 | v42 | v44;
  if ( (v46 & 1) != 0 )
    v45 = -1.797e308;
  v47 = *(double *)unk_1D12AE8;
  if ( (v46 & 2) != 0 )
    v47 = -1.797e308;
  v48 = *(double *)unk_1D12AF0;
  if ( (v46 & 4) != 0 )
    v48 = -1.797e308;
  v49 = *(double *)(unk_1D12AF8);
  if ( (v46 & 8) != 0 )
    v49 = -1.797e308;
  v50 = 0;
  if ( v33 == 0.0 )
  {
    LOBYTE(v46) = !__builtin_isnan(v33);
    v50 = v46;
  }
  v51 = v50;
  if ( v64 == 0.0 )
  {
    v51 = v50 | 2;
    v52 = 4;
  }
  else
  {
    v52 = 0;
  }
  v53 = (v50 << 31 >> 31) & 8 | v52 | v51;
  if ( (v53 & 1) == 0 )
    v45 = *(double *)g4_m128_ptr<int64_t>(v28);
  if ( (v53 & 2) == 0 )
    v47 = v43;
  if ( (v53 & 4) != 0 )
    v43 = v48;
  if ( (v53 & 8) != 0 )
    *(double *)g4_m128_ptr<int64_t>(v28) = v49;
  v54 = v45;
  v55 = fmax(fmax(v45, v47), fmax(v43, *(double *)g4_m128_ptr<int64_t>(v28)));
  v56 = fmin(fmin(v54, v47), fmin(v43, *(double *)g4_m128_ptr<int64_t>(v28)));
  if ( v62 <= 0.000000059604644775390625 * v55 + v55 )
  {
    result = 0;
    if ( v56 - 0.000000059604644775390625 * v56 > 0.000000059604644775390625 * v60 + v60 )
    {
      *a7 = -1;
      return 1;
    }
  }
  else
  {
    *a7 = 1;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkInt128Vector4::setMul_3_7b7700  (binary VA: 0x15dff10)
// Original: hkInt128Vector4::setMul<3>
// ----------------------------------------------------------------------------
uint64_t hkInt128Vector4::setMul_3_7b7700(int a1, hkSimdInt<128> *a2, int *a3)
{
  uint64_t v3; // kr18_8
  int v4;
  uint64_t v5; // rax
  int64_t v7; // rax
  uint64_t v8; // kr10_8
  uint64_t v9; // rax
  int64_t v11;
  int64_t v12;
  int v13;
  unsigned int v14;
  int64_t v15;
  uint64_t v16;
  int v17;
  int v18;
  uint64_t v19;
  int v20;
  uint64_t v21;
  uint64_t v22;
  uint64_t v23;
  uint64_t v24;
  uint64_t v25; // 0:esi.4,4:edi.4

  v13 = *a3;
  v17 = a3[1];
  HIDWORD(v12) = *(uint32_t *)a2;
  LODWORD(v12) = *((uint32_t *)a2 + 1);
  HIDWORD(v11) = *((uint32_t *)a2 + 2);
  LODWORD(v11) = *((uint32_t *)a2 + 3);
  v18 = ((int)v11 >> 31) & 0xF;
  if ( v18 == 15 )
  {
    v20 = -HIDWORD(v12);
    v14 = (__PAIR64__(~(uint32_t)v12, ~HIDWORD(v12)) + 1) >> 32;
    v3 = __PAIR64__(~(uint32_t)v11, ~HIDWORD(v11)) + (__PAIR64__(~(uint32_t)v12, ~HIDWORD(v12)) == -1);
  }
  else
  {
    v20 = *(uint32_t *)a2;
    v14 = *((uint32_t *)a2 + 1);
    v3 = *((uint64_t *)a2 + 1);
  }
  v4 = (v17 >> 31) ^ v13;
  v23 = __PAIR64__((v17 >> 31) ^ (unsigned int)v17, v4) - __PAIR64__(v17 >> 31, v17 >> 31);
  v24 = __PAIR64__((v17 >> 31) ^ (unsigned int)v17, v4) - __PAIR64__(v17 >> 31, v17 >> 31);
  v16 = (unsigned int)(v4 - (v17 >> 31)) * (uint64_t)(unsigned int)v20;
  v5 = v14 * (uint64_t)(unsigned int)(v4 - (v17 >> 31));
  v25 = v16 + __PAIR64__(v5, 0);
  v19 = v16 + __PAIR64__(v5, 0) + __PAIR64__(HIDWORD(v23) * v20, 0);
  v21 = HIDWORD(v5)
      + ((HIDWORD(v23) * (uint64_t)(unsigned int)v20) >> 32)
      + HIDWORD(v23) * (uint64_t)v14
      + (unsigned int)v24 * (uint64_t)(unsigned int)v3;
  HIDWORD(v5) = HIDWORD(v24) * v3 + v24 * HIDWORD(v3);
  v15 = 1;
  LODWORD(v5) = 0;
  v22 = v5 + v21;
  if ( HIDWORD(v25) <= HIDWORD(v19) )
    v15 = HIDWORD(v25) >= HIDWORD(v19) && (unsigned int)v25 > (unsigned int)v19;
  v7 = v16 > v25;
  if ( (v18 & ~((v17 >> 31) & 0xF | ((v17 | v13) == 0 ? 0xF : 0))
      | (v17 >> 31) & 0xF & ~(v18 | ((v12 | v11) == 0 ? 0xF : 0))) == 0xF )
  {
    v9 = ~(v22 + v15 + v7) + (v19 == 0);
    v8 = -(int64_t)v19;
  }
  else
  {
    v8 = v19;
    v9 = v22 + v15 + v7;
  }
  *(uint32_t *)(a1 + 8) = v9;
  *(uint64_t *)a1 = v8;
  *(uint32_t *)(a1 + 12) = HIDWORD(v9);
  hkSimdInt_128_cf2f01::setMul((hkSimdInt<128> *)(a1 + 16), a2, *((uint64_t *)a3 + 1));
  return hkSimdInt_128_cf2f01::setMul((hkSimdInt<128> *)(a1 + 32), a2, *((uint64_t *)a3 + 2));
}

// ----------------------------------------------------------------------------
// Function: hkInt128Vector4::subMul_3_971188  (binary VA: 0x15e4120)
// Original: hkInt128Vector4::subMul<3>
// ----------------------------------------------------------------------------
uint64_t hkInt128Vector4::subMul_3_971188(int a1, hkSimdInt<128> *a2, int64_t *a3)
{
  int64_t v3; // rdi
  int64_t v4; // rdi
  bool v5;
  int64_t v6; // rax
  int v7;
  unsigned int v8; // kr2C_4
  int64_t v9; // rdi
  uint64_t result; // rax
  typedef int64_t _g4_t_v11;
  typedef int64_t _g4_t_v12;
  typedef uint64_t _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef int64_t _g4_t_v16;
  typedef int64_t _g4_t_v17;
  typedef int64_t _g4_t_v18;
  typedef int64_t _g4_t_v19;
  typedef uint64_t _g4_t_v20[2];
  typedef uint64_t _g4_t_v21[2];
  typedef uint64_t _g4_t_v22[5];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v12)) > _g4_s1 ? (0u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v16)) > _g4_s5 ? (16u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v17)) > _g4_s6 ? (16u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v18)) > _g4_s7 ? (24u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v19)) > _g4_s8 ? (24u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v20)) > _g4_s9 ? (32u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v21)) > _g4_s10 ? (48u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v22)) > _g4_s11 ? (64u + sizeof(_g4_t_v22)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  hkSimdInt_128_cf2f01::setMul((hkSimdInt<128> *)v20, a2, *a3);
  hkSimdInt_128_cf2f01::setMul((hkSimdInt<128> *)v21, a2, a3[1]);
  hkSimdInt_128_cf2f01::setMul((hkSimdInt<128> *)v22, a2, a3[2]);
  v16 = 1;
  v18 = *(uint64_t *)a1 - v20[0];
  v14 = *(uint32_t *)(a1 + 4);
  v11 = *(uint64_t *)(a1 + 8) + ~v20[1];
  if ( v14 <= HIDWORD(v18) )
    v16 = v14 >= HIDWORD(v18) && *(uint32_t *)a1 > (unsigned int)v18;
  LODWORD(v3) = -v20[0] >> 32;
  HIDWORD(v3) = -LODWORD(v20[0]);
  *(uint64_t *)a1 = v18;
  *(uint64_t *)(a1 + 8) = v11 + v16 + (v3 == 0);
  v17 = 1;
  HIDWORD(v4) = -LODWORD(v21[0]);
  LODWORD(v4) = -v21[0] >> 32;
  v19 = *(uint64_t *)(a1 + 16) - v21[0];
  v15 = *(uint32_t *)(a1 + 20);
  v12 = *(uint64_t *)(a1 + 24) + ~v21[1];
  if ( v15 <= HIDWORD(v19) )
    v17 = v15 >= HIDWORD(v19) && *(uint32_t *)(a1 + 16) > (unsigned int)v19;
  v5 = v4 == 0;
  *(uint32_t *)(a1 + 20) = HIDWORD(v19);
  v6 = v17 + (v4 == 0);
  v7 = ~LODWORD(v22[0]);
  v8 = v17 + v5;
  *(uint32_t *)(a1 + 24) = v12 + v8;
  *(uint32_t *)(a1 + 16) = v19;
  *(uint32_t *)(a1 + 28) = (v12 + __PAIR64__(HIDWORD(v6), v8)) >> 32;
  HIDWORD(v9) = v7 + 1;
  LODWORD(v9) = (__PAIR64__(~HIDWORD(v22[0]), v7) + 1) >> 32;
  v13 = *(uint64_t *)(a1 + 32);
  result = *(uint64_t *)(a1 + 40) + ~v22[1] + (v13 > __PAIR64__(v9, HIDWORD(v9)) + v13) + (uint64_t)(v9 == 0);
  *(uint64_t *)(a1 + 32) = __PAIR64__(v9, HIDWORD(v9)) + v13;
  *(uint64_t *)(a1 + 40) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSimdInt_256_cd9042::setShiftRight_128_839da1  (binary VA: 0x15e7650)
// Original: hkSimdInt<256>::setShiftRight<128>
// ----------------------------------------------------------------------------
void hkSimdInt_256_cd9042::setShiftRight_128_839da1(hkSimdInt<256> *self, const hkSimdInt<256> *a2)
{
  typedef __m128i _g4_t_v2;
  typedef uint32_t _g4_t_v3[4];
  typedef uint32_t _g4_t_v4[4];
  typedef __m128i _g4_t_v5;
  typedef __m128i _g4_t_v6;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v4)) > _g4_s2 ? (32u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v5)) > _g4_s3 ? (48u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v6)) > _g4_s4 ? (64u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 32u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 48u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 64u);

  v2 = *((__m128i *)a2 + 1);
  v5 = *(__m128i *)a2;
  v6 = v2;
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)v3, (const hkSimdInt<128> *)&v6, 128);
  hkSimdInt_128_cf2f01::setShiftLeft((hkSimdInt<128> *)v4, (const hkSimdInt<128> *)&v5, 0);
  *((uint32_t *)self + 4) = v3[0] | v4[0];
  *((uint32_t *)self + 5) = v3[1] | v4[1];
  *((uint32_t *)self + 6) = v3[2] | v4[2];
  *((uint32_t *)self + 7) = v3[3] | v4[3];
  hkSimdInt_128_cf2f01::setShiftRight(self, (const hkSimdInt<128> *)&v5, 128);
}

// ----------------------------------------------------------------------------
// Function: hkSimdInt_512_c37013::setShiftLeft_256_af816c  (binary VA: 0x15ebc00)
// Original: hkSimdInt<512>::setShiftLeft<256>
// ----------------------------------------------------------------------------
void hkSimdInt_512_c37013::setShiftLeft_256_af816c(hkSimdInt<512> *self, const hkSimdInt<512> *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[8];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef g4_int128_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v11)) > _g4_s5 ? (24u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v12)) > _g4_s6 ? (48u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v13)) > _g4_s7 ? (64u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v14)) > _g4_s8 ? (96u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v15)) > _g4_s9 ? (100u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v16)) > _g4_s10 ? (104u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v17)) > _g4_s11 ? (108u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v18)) > _g4_s12 ? (112u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v19)) > _g4_s13 ? (128u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v20)) > _g4_s14 ? (132u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v21)) > _g4_s15 ? (136u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v22)) > _g4_s16 ? (140u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v23)) > _g4_s17 ? (144u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (160u + sizeof(_g4_t_v24)) > _g4_s18 ? (160u + sizeof(_g4_t_v24)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 96u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 100u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 104u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 108u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 112u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 128u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 132u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 136u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 140u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 144u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 160u);

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v10 = *((uint32_t *)a2 + 9);
  v8 = *((uint32_t *)a2 + 11);
  v9 = *((uint32_t *)a2 + 8);
  v6 = *((uint32_t *)a2 + 14);
  v7 = *((uint32_t *)a2 + 10);
  v11 = *((uint32_t *)a2 + 12);
  v2 = *((uint32_t *)a2 + 15);
  v24[1] = *((uint32_t *)a2 + 13);
  v24[0] = v11;
  v24[2] = v6;
  v23[0] = v9;
  v23[1] = v10;
  v23[2] = v7;
  v24[3] = v2;
  v23[3] = v8;
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)v12, (const hkSimdInt<128> *)v24, 0);
  hkSimdInt_128_cf2f01::setShiftLeft((hkSimdInt<128> *)v13, (const hkSimdInt<128> *)v23, 128);
  v19 = v12[0] | v13[0];
  v20 = v12[1] | v13[1];
  v21 = v12[2] | v13[2];
  v22 = v12[3] | v13[3];
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)&v18, (const hkSimdInt<128> *)v23, 0);
  *((uint32_t *)self + 4) = v14 | v19;
  v3 = v15 | v20;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 5) = v3;
  v4 = v16 | v21;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 6) = v4;
  v5 = v17 | v22;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 7) = v5;
  *(g4_int128_t *)self = v18;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkSimdInt_512_c37013::setShiftRight_256_a7680b  (binary VA: 0x15ebe10)
// Original: hkSimdInt<512>::setShiftRight<256>
// ----------------------------------------------------------------------------
void hkSimdInt_512_c37013::setShiftRight_256_a7680b(hkSimdInt<512> *self, const hkSimdInt<512> *a2)
{
  __m128i v2;
  typedef __m128i _g4_t_v3;
  typedef int64_t _g4_t_v4;
  typedef int64_t _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  typedef uint32_t _g4_t_v7[4];
  typedef uint32_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  typedef __m128i _g4_t_v18;
  typedef __m128i _g4_t_v19;
  typedef __m128i _g4_t_v20;
  typedef __m128i _g4_t_v21;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v6)) > _g4_s3 ? (48u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v7)) > _g4_s4 ? (64u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v8)) > _g4_s5 ? (80u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v9)) > _g4_s6 ? (96u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v10)) > _g4_s7 ? (100u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v11)) > _g4_s8 ? (104u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v12)) > _g4_s9 ? (108u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v13)) > _g4_s10 ? (112u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v14)) > _g4_s11 ? (116u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v15)) > _g4_s12 ? (120u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v16)) > _g4_s13 ? (124u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v17)) > _g4_s14 ? (128u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v18)) > _g4_s15 ? (144u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v19)) > _g4_s16 ? (160u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (176u + sizeof(_g4_t_v20)) > _g4_s17 ? (176u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v21)) > _g4_s18 ? (192u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 48u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 64u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 80u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 96u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 100u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 104u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 108u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 112u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 116u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 120u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 124u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 128u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 144u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 160u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 176u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 192u);

  v2 = *((__m128i *)a2 + 1);
  HIDWORD(v5) = *((uint32_t *)a2 + 1);
  v4 = *((uint64_t *)a2 + 1);
  v3 = *((__m128i *)a2 + 2);
  v20 = *(__m128i *)a2;
  SLODWORD(v5) =g4_m128_lane<int32_t>(v20, 0);
  v21 = v2;
  v18 = g4_to_m128i(0);
  v19 = v3;
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)v7, (const hkSimdInt<128> *)&v19, 128);
  hkSimdInt_128_cf2f01::setShiftLeft((hkSimdInt<128> *)&v13, (const hkSimdInt<128> *)&v18, 0);
  v9 = v7[0] | v13;
  v10 = v7[1] | v14;
  v11 = v7[2] | v15;
  v12 = v7[3] | v16;
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)v8, (const hkSimdInt<128> *)&v18, 128);
  v18 = v20;
  v19 = v21;
  hkSimdInt_128_cf2f01::setShiftLeft((hkSimdInt<128> *)v6, (const hkSimdInt<128> *)&v18, -128);
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)v7, (const hkSimdInt<128> *)&v19, 256);
  v13 = v6[0] | v7[0];
  v14 = v6[1] | v7[1];
  v15 = v6[2] | v7[2];
  v16 = v6[3] | v7[3];
  hkSimdInt_128_cf2f01::setShiftLeft((hkSimdInt<128> *)v17, (const hkSimdInt<128> *)&v19, -128);
  memset(&v18, 0, sizeof(v18));
  *((uint32_t *)self + 12) = v9 | v17[0];
  *((uint32_t *)self + 13) = v10 | v17[1];
  *((uint32_t *)self + 14) = v11 | v17[2];
  *((uint32_t *)self + 15) = v12 | v17[3];
  *((uint32_t *)self + 8) = v8[0] | v13;
  *((uint32_t *)self + 9) = v8[1] | v14;
  *((uint32_t *)self + 10) = v8[2] | v15;
  *((uint32_t *)self + 11) = v8[3] | v16;
g4_m128_lane<int64_t>(v19, 0) = v5;
g4_m128_lane<int64_t>(v19, 1) = v4;
  hkSimdInt_128_cf2f01::setShiftRight((hkSimdInt<128> *)v6, (const hkSimdInt<128> *)&v19, 128);
  hkSimdInt_128_cf2f01::setShiftLeft((hkSimdInt<128> *)v7, (const hkSimdInt<128> *)&v18, 0);
  *((uint32_t *)self + 4) = v6[0] | v7[0];
  *((uint32_t *)self + 5) = v6[1] | v7[1];
  *((uint32_t *)self + 6) = v6[2] | v7[2];
  *((uint32_t *)self + 7) = v6[3] | v7[3];
  hkSimdInt_128_cf2f01::setShiftRight(self, (const hkSimdInt<128> *)&v18, 128);
}

// ----------------------------------------------------------------------------
// Function: nullsub_623  (binary VA: 0x15ef1c8)
// Original: nullsub_623
// ----------------------------------------------------------------------------
void nullsub_623()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_624  (binary VA: 0x15ef1d8)
// Original: nullsub_624
// ----------------------------------------------------------------------------
void nullsub_624()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15EF1E0  (binary VA: 0x15ef1e0)
// Original: sub_15EF1E0
// ----------------------------------------------------------------------------
int sub_15EF1E0(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1[22];
  a1[21] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[20],
      8 * v1);
  v2 = a1[19];
  a1[20] = 0;
  a1[22] = 0x80000000;
  a1[18] = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[17],
      2 * (v2 & 0x3FFFFFFF));
  v3 = a1[16];
  a1[17] = 0;
  a1[19] = 0x80000000;
  a1[15] = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[14],
      v3 & 0x3FFFFFFF);
  result = a1[2];
  a1[14] = 0;
  a1[16] = 0x80000000;
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               6 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EF330  (binary VA: 0x15ef330)
// Original: sub_15EF330
// ----------------------------------------------------------------------------
uint32_t * sub_15EF330()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticPvsBlockHeaderClass,
    "hkcdStaticPvsBlockHeader",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038F80,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticPvsBlockHeaderTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticPvsBlockHeader");
  *(uintptr_t *)(unk_21223B4) = (uintptr_t)("!hkcdStaticPvs::BlockHeader");
  *(uintptr_t *)(unk_21223B8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21223C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21223C4) = (uintptr_t)(8);
  *(uintptr_t *)(unk_21223BC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticPvsClass,
    "hkcdStaticPvs",
    nullptr,
    96,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098220,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticPvsTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdStaticPvs");
  hkcdStaticPvsTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdStaticPvs");
  hkcdStaticPvsTypeInfo[4] = 0;
  hkcdStaticPvsTypeInfo[5] = 96;
  hkcdStaticPvsTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdStaticPvsTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15EF1E0);
  return hkcdStaticPvsTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_625  (binary VA: 0x15ef4a8)
// Original: nullsub_625
// ----------------------------------------------------------------------------
void nullsub_625()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_626  (binary VA: 0x15ef4b8)
// Original: nullsub_626
// ----------------------------------------------------------------------------
void nullsub_626()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_627  (binary VA: 0x15ef4c8)
// Original: nullsub_627
// ----------------------------------------------------------------------------
void nullsub_627()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_628  (binary VA: 0x15ef4d8)
// Original: nullsub_628
// ----------------------------------------------------------------------------
void nullsub_628()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_629  (binary VA: 0x15ef4e8)
// Original: nullsub_629
// ----------------------------------------------------------------------------
void nullsub_629()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15EF590  (binary VA: 0x15ef590)
// Original: sub_15EF590
// ----------------------------------------------------------------------------
uint32_t * sub_15EF590()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeCodec3AxisClass,
    "hkcdStaticTreeCodec3Axis",
    nullptr,
    3,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039048,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeCodec3AxisTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeCodec3Axis");
  *(uintptr_t *)(unk_2122594) = (uintptr_t)("!hkcdStaticTree::Codec3Axis");
  *(uintptr_t *)(unk_2122598) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21225A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21225A4) = (uintptr_t)(3);
  *(uintptr_t *)(unk_212259C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeCodec3Axis4Class,
    "hkcdStaticTreeCodec3Axis4",
    (const hkClass::Self *)&hkcdStaticTreeCodec3AxisClass,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039030,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeCodec3Axis4TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeCodec3Axis4");
  *(uintptr_t *)(unk_2122534) = (uintptr_t)("!hkcdStaticTree::Codec3Axis4");
  *(uintptr_t *)(unk_2122538) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122540) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122544) = (uintptr_t)(4);
  *(uintptr_t *)(unk_212253C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeCodec3Axis5Class,
    "hkcdStaticTreeCodec3Axis5",
    (const hkClass::Self *)&hkcdStaticTreeCodec3AxisClass,
    5,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039000,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeCodec3Axis5TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeCodec3Axis5");
  *(uintptr_t *)(unk_21224D4) = (uintptr_t)("!hkcdStaticTree::Codec3Axis5");
  *(uintptr_t *)(unk_21224D8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21224E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21224E4) = (uintptr_t)(5);
  *(uintptr_t *)(unk_21224DC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeCodec3Axis6Class,
    "hkcdStaticTreeCodec3Axis6",
    (const hkClass::Self *)&hkcdStaticTreeCodec3AxisClass,
    6,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038FC0,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeCodec3Axis6TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeCodec3Axis6");
  *(uintptr_t *)(unk_2122474) = (uintptr_t)("!hkcdStaticTree::Codec3Axis6");
  *(uintptr_t *)(unk_2122478) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122480) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122484) = (uintptr_t)(6);
  *(uintptr_t *)(unk_212247C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeCodecRawClass,
    "hkcdStaticTreeCodecRaw",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20982B0,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeCodecRawTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdStaticTreeCodecRaw");
  hkcdStaticTreeCodecRawTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdStaticTree::CodecRaw");
  hkcdStaticTreeCodecRawTypeInfo[2] = 0;
  hkcdStaticTreeCodecRawTypeInfo[4] = 0;
  hkcdStaticTreeCodecRawTypeInfo[5] = 32;
  hkcdStaticTreeCodecRawTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdStaticTreeCodecRawTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_630  (binary VA: 0x15ef8f8)
// Original: nullsub_630
// ----------------------------------------------------------------------------
void nullsub_630()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_631  (binary VA: 0x15ef908)
// Original: nullsub_631
// ----------------------------------------------------------------------------
void nullsub_631()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15EF930  (binary VA: 0x15ef930)
// Original: sub_15EF930
// ----------------------------------------------------------------------------
uint32_t * sub_15EF930()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdFourAabbClass,
    "hkcdFourAabb",
    nullptr,
    96,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20390F0,
    1,
    (const hkClassMember::Self *)&off_2039060,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkcdFourAabbTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdFourAabb");
  hkcdFourAabbTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdFourAabb");
  hkcdFourAabbTypeInfo[4] = 0;
  hkcdFourAabbTypeInfo[5] = 96;
  hkcdFourAabbTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdFourAabbTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdFourAabbTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_632  (binary VA: 0x15efa08)
// Original: nullsub_632
// ----------------------------------------------------------------------------
void nullsub_632()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_633  (binary VA: 0x15efa18)
// Original: nullsub_633
// ----------------------------------------------------------------------------
void nullsub_633()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_634  (binary VA: 0x15efa28)
// Original: nullsub_634
// ----------------------------------------------------------------------------
void nullsub_634()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_635  (binary VA: 0x15efa38)
// Original: nullsub_635
// ----------------------------------------------------------------------------
void nullsub_635()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_636  (binary VA: 0x15efa48)
// Original: nullsub_636
// ----------------------------------------------------------------------------
void nullsub_636()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_637  (binary VA: 0x15efa58)
// Original: nullsub_637
// ----------------------------------------------------------------------------
void nullsub_637()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_638  (binary VA: 0x15efa68)
// Original: nullsub_638
// ----------------------------------------------------------------------------
void nullsub_638()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_639  (binary VA: 0x15efa78)
// Original: nullsub_639
// ----------------------------------------------------------------------------
void nullsub_639()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFA80  (binary VA: 0x15efa80)
// Original: sub_15EFA80
// ----------------------------------------------------------------------------
int sub_15EFA80(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFAE0  (binary VA: 0x15efae0)
// Original: sub_15EFAE0
// ----------------------------------------------------------------------------
int sub_15EFAE0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               5 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFB40  (binary VA: 0x15efb40)
// Original: sub_15EFB40
// ----------------------------------------------------------------------------
int sub_15EFB40(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               6 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFBA0  (binary VA: 0x15efba0)
// Original: sub_15EFBA0
// ----------------------------------------------------------------------------
int sub_15EFBA0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFC00  (binary VA: 0x15efc00)
// Original: sub_15EFC00
// ----------------------------------------------------------------------------
int sub_15EFC00(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFC60  (binary VA: 0x15efc60)
// Original: sub_15EFC60
// ----------------------------------------------------------------------------
int sub_15EFC60(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               5 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFCC0  (binary VA: 0x15efcc0)
// Original: sub_15EFCC0
// ----------------------------------------------------------------------------
int sub_15EFCC0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               6 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFD20  (binary VA: 0x15efd20)
// Original: sub_15EFD20
// ----------------------------------------------------------------------------
int sub_15EFD20(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15EFE00  (binary VA: 0x15efe00)
// Original: sub_15EFE00
// ----------------------------------------------------------------------------
uint32_t * sub_15EFE00()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDefaultTreeStorage32Class,
    "hkcdStaticTreeDefaultTreeStorage32",
    (const hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32Class,
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
  hkcdStaticTreeDefaultTreeStorage32TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDefaultTreeStorage32");
  *(uintptr_t *)(unk_21228F4) = (uintptr_t)("!hkcdStaticTree::DefaultTreeStorage32");
  *(uintptr_t *)(unk_2122900) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122904) = (uintptr_t)(48);
  *(uintptr_t *)(unk_21228F8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21228FC) = (uintptr_t)(sub_15EFD20);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDefaultTreeStorage4Class,
    "hkcdStaticTreeDefaultTreeStorage4",
    (const hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4Class,
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
  hkcdStaticTreeDefaultTreeStorage4TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDefaultTreeStorage4");
  *(uintptr_t *)(unk_2122894) = (uintptr_t)("!hkcdStaticTree::DefaultTreeStorage4");
  *(uintptr_t *)(unk_21228A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21228A4) = (uintptr_t)(48);
  *(uintptr_t *)(unk_2122898) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212289C) = (uintptr_t)(sub_15EFA80);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDefaultTreeStorage5Class,
    "hkcdStaticTreeDefaultTreeStorage5",
    (const hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5Class,
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
  hkcdStaticTreeDefaultTreeStorage5TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDefaultTreeStorage5");
  *(uintptr_t *)(unk_2122834) = (uintptr_t)("!hkcdStaticTree::DefaultTreeStorage5");
  *(uintptr_t *)(unk_2122840) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122844) = (uintptr_t)(48);
  *(uintptr_t *)(unk_2122838) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212283C) = (uintptr_t)(sub_15EFAE0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDefaultTreeStorage6Class,
    "hkcdStaticTreeDefaultTreeStorage6",
    (const hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6Class,
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
  hkcdStaticTreeDefaultTreeStorage6TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDefaultTreeStorage6");
  *(uintptr_t *)(unk_21227D4) = (uintptr_t)("!hkcdStaticTree::DefaultTreeStorage6");
  *(uintptr_t *)(unk_21227E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21227E4) = (uintptr_t)(48);
  *(uintptr_t *)(unk_21227D8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21227DC) = (uintptr_t)(sub_15EFB40);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32Class,
    "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStorage32Class,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098310,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32");
  *(uintptr_t *)(unk_2122774) = (uintptr_t)("!hkcdStaticTreeTreehkcdStaticTreeDynamicStorage32_typename");
  *(uintptr_t *)(unk_2122780) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122784) = (uintptr_t)(48);
  *(uintptr_t *)(unk_2122778) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212277C) = (uintptr_t)(sub_15EFBA0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4Class,
    "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStorage4Class,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20982F8,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4");
  *(uintptr_t *)(unk_2122714) = (uintptr_t)("!hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4_typename");
  *(uintptr_t *)(unk_2122720) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122724) = (uintptr_t)(48);
  *(uintptr_t *)(unk_2122718) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212271C) = (uintptr_t)(sub_15EFC00);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5Class,
    "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStorage5Class,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20982E0,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5");
  *(uintptr_t *)(unk_21226B4) = (uintptr_t)("!hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5_typename");
  *(uintptr_t *)(unk_21226C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21226C4) = (uintptr_t)(48);
  *(uintptr_t *)(unk_21226B8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21226BC) = (uintptr_t)(sub_15EFC60);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6Class,
    "hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStorage6Class,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20982C8,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo[0] = (uint32_t)(uintptr_t)("hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6");
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6_typename");
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo[4] = 0;
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo[5] = 48;
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo[3] = (uint32_t)(uintptr_t)(sub_15EFCC0);
  return hkcdStaticTreeTreehkcdStaticTreeDynamicStorage6TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_640  (binary VA: 0x15f0378)
// Original: nullsub_640
// ----------------------------------------------------------------------------
void nullsub_640()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_641  (binary VA: 0x15f0388)
// Original: nullsub_641
// ----------------------------------------------------------------------------
void nullsub_641()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_642  (binary VA: 0x15f0398)
// Original: nullsub_642
// ----------------------------------------------------------------------------
void nullsub_642()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_643  (binary VA: 0x15f03a8)
// Original: nullsub_643
// ----------------------------------------------------------------------------
void nullsub_643()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_644  (binary VA: 0x15f03b8)
// Original: nullsub_644
// ----------------------------------------------------------------------------
void nullsub_644()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_645  (binary VA: 0x15f03c8)
// Original: nullsub_645
// ----------------------------------------------------------------------------
void nullsub_645()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_646  (binary VA: 0x15f03d8)
// Original: nullsub_646
// ----------------------------------------------------------------------------
void nullsub_646()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_647  (binary VA: 0x15f03e8)
// Original: nullsub_647
// ----------------------------------------------------------------------------
void nullsub_647()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_648  (binary VA: 0x15f03f8)
// Original: nullsub_648
// ----------------------------------------------------------------------------
void nullsub_648()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_649  (binary VA: 0x15f0408)
// Original: nullsub_649
// ----------------------------------------------------------------------------
void nullsub_649()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_650  (binary VA: 0x15f0418)
// Original: nullsub_650
// ----------------------------------------------------------------------------
void nullsub_650()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_651  (binary VA: 0x15f0428)
// Original: nullsub_651
// ----------------------------------------------------------------------------
void nullsub_651()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_652  (binary VA: 0x15f0438)
// Original: nullsub_652
// ----------------------------------------------------------------------------
void nullsub_652()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_653  (binary VA: 0x15f0448)
// Original: nullsub_653
// ----------------------------------------------------------------------------
void nullsub_653()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_654  (binary VA: 0x15f0458)
// Original: nullsub_654
// ----------------------------------------------------------------------------
void nullsub_654()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F0520  (binary VA: 0x15f0520)
// Original: sub_15F0520
// ----------------------------------------------------------------------------
uint32_t * sub_15F0520()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodec18Class,
    "hkcdDynamicTreeCodec18",
    nullptr,
    18,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdDynamicTree::Codec18::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeCodec18TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodec18");
  *(uintptr_t *)(unk_2122BF4) = (uintptr_t)("!hkcdDynamicTree::Codec18");
  *(uintptr_t *)(unk_2122C00) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122C04) = (uintptr_t)(18);
  *(uintptr_t *)(unk_2122BF8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122BFC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodec32Class,
    "hkcdDynamicTreeCodec32",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdDynamicTree::Codec32::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeCodec32TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodec32");
  *(uintptr_t *)(unk_2122B94) = (uintptr_t)("!hkcdDynamicTree::Codec32");
  *(uintptr_t *)(unk_2122BA0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122BA4) = (uintptr_t)(32);
  *(uintptr_t *)(unk_2122B98) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122B9C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodecInt16IntAabbClass,
    "hkcdDynamicTreeCodecInt16IntAabb",
    (const hkClass::Self *)&hkAabb16Class,
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
  hkcdDynamicTreeCodecInt16IntAabbTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodecInt16IntAabb");
  *(uintptr_t *)(unk_2122B34) = (uintptr_t)("!hkcdDynamicTree::CodecInt16::IntAabb");
  *(uintptr_t *)(unk_2122B38) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122B40) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122B44) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2122B3C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodecInt16Class,
    "hkcdDynamicTreeCodecInt16",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdDynamicTree::CodecInt16::Members,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeCodecInt16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodecInt16");
  *(uintptr_t *)(unk_2122AD4) = (uintptr_t)("!hkcdDynamicTree::CodecInt16");
  *(uintptr_t *)(unk_2122AE0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122AE4) = (uintptr_t)(32);
  *(uintptr_t *)(unk_2122AD8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122ADC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodecRawUintClass,
    "hkcdDynamicTreeCodecRawUint",
    (const hkClass::Self *)&hkcdDynamicTreeCodecRawunsignedintClass,
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
  hkcdDynamicTreeCodecRawUintTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodecRawUint");
  *(uintptr_t *)(unk_2122A74) = (uintptr_t)("!hkcdDynamicTree::CodecRawUint");
  *(uintptr_t *)(unk_2122A80) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122A84) = (uintptr_t)(48);
  *(uintptr_t *)(unk_2122A78) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122A7C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodecRawUlongClass,
    "hkcdDynamicTreeCodecRawUlong",
    (const hkClass::Self *)&hkcdDynamicTreeCodecRawunsignedlongClass,
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
  hkcdDynamicTreeCodecRawUlongTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodecRawUlong");
  *(uintptr_t *)(unk_2122A14) = (uintptr_t)("!hkcdDynamicTree::CodecRawUlong");
  *(uintptr_t *)(unk_2122A20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122A24) = (uintptr_t)(48);
  *(uintptr_t *)(unk_2122A18) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122A1C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodecRawunsignedintClass,
    "hkcdDynamicTreeCodecRawunsignedint",
    nullptr,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdDynamicTree::CodecRaw<unsigned int>::Members,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeCodecRawunsignedintTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodecRawunsignedint");
  *(uintptr_t *)(unk_21229B4) = (uintptr_t)("!hkcdDynamicTreeCodecRawunsignedint_typename");
  *(uintptr_t *)(unk_21229C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21229C4) = (uintptr_t)(48);
  *(uintptr_t *)(unk_21229B8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21229BC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCodecRawunsignedlongClass,
    "hkcdDynamicTreeCodecRawunsignedlong",
    nullptr,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdDynamicTree::CodecRaw<unsigned long>::Members,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeCodecRawunsignedlongTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdDynamicTreeCodecRawunsignedlong");
  hkcdDynamicTreeCodecRawunsignedlongTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdDynamicTreeCodecRawunsignedlong_typename");
  hkcdDynamicTreeCodecRawunsignedlongTypeInfo[4] = 0;
  hkcdDynamicTreeCodecRawunsignedlongTypeInfo[5] = 48;
  hkcdDynamicTreeCodecRawunsignedlongTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdDynamicTreeCodecRawunsignedlongTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdDynamicTreeCodecRawunsignedlongTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_655  (binary VA: 0x15f0a98)
// Original: nullsub_655
// ----------------------------------------------------------------------------
void nullsub_655()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_656  (binary VA: 0x15f0aa8)
// Original: nullsub_656
// ----------------------------------------------------------------------------
void nullsub_656()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_657  (binary VA: 0x15f0ab8)
// Original: nullsub_657
// ----------------------------------------------------------------------------
void nullsub_657()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_658  (binary VA: 0x15f0ac8)
// Original: nullsub_658
// ----------------------------------------------------------------------------
void nullsub_658()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_659  (binary VA: 0x15f0ad8)
// Original: nullsub_659
// ----------------------------------------------------------------------------
void nullsub_659()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_660  (binary VA: 0x15f0ae8)
// Original: nullsub_660
// ----------------------------------------------------------------------------
void nullsub_660()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F0B50  (binary VA: 0x15f0b50)
// Original: sub_15F0B50
// ----------------------------------------------------------------------------
uint32_t * sub_15F0B50()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeAnisotropicMetricClass,
    "hkcdDynamicTreeAnisotropicMetric",
    nullptr,
    1,
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
  hkcdDynamicTreeAnisotropicMetricTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeAnisotropicMetric");
  *(uintptr_t *)(unk_2122D14) = (uintptr_t)("!hkcdDynamicTree::AnisotropicMetric");
  *(uintptr_t *)(unk_2122D20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122D24) = (uintptr_t)(1);
  *(uintptr_t *)(unk_2122D18) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122D1C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeBalanceMetricClass,
    "hkcdDynamicTreeBalanceMetric",
    nullptr,
    1,
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
  hkcdDynamicTreeBalanceMetricTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeBalanceMetric");
  *(uintptr_t *)(unk_2122CB4) = (uintptr_t)("!hkcdDynamicTree::BalanceMetric");
  *(uintptr_t *)(unk_2122CC0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122CC4) = (uintptr_t)(1);
  *(uintptr_t *)(unk_2122CB8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122CBC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeCentroidMetricClass,
    "hkcdDynamicTreeCentroidMetric",
    nullptr,
    1,
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
  hkcdDynamicTreeCentroidMetricTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdDynamicTreeCentroidMetric");
  hkcdDynamicTreeCentroidMetricTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdDynamicTree::CentroidMetric");
  hkcdDynamicTreeCentroidMetricTypeInfo[4] = 0;
  hkcdDynamicTreeCentroidMetricTypeInfo[5] = 1;
  hkcdDynamicTreeCentroidMetricTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdDynamicTreeCentroidMetricTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdDynamicTreeCentroidMetricTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_661  (binary VA: 0x15f0d78)
// Original: nullsub_661
// ----------------------------------------------------------------------------
void nullsub_661()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F0D80  (binary VA: 0x15f0d80)
// Original: sub_15F0D80
// ----------------------------------------------------------------------------
int sub_15F0D80(uint32_t *a1)
{
  int v1;
  int result;

  v1 = a1[27];
  a1[26] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[25],
      2 * (v1 & 0x3FFFFFFF));
  result = a1[24];
  a1[25] = 0;
  a1[27] = 0x80000000;
  a1[23] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a1[22],
               4 * result);
  a1[22] = 0;
  a1[24] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F0E30  (binary VA: 0x15f0e30)
// Original: sub_15F0E30
// ----------------------------------------------------------------------------
uint32_t * sub_15F0E30()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdAdfClass,
    "hkcdAdf",
    nullptr,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20984C0,
    7,
    nullptr,
    nullptr,
    0,
    0);
  hkcdAdfTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdAdf");
  hkcdAdfTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdAdf");
  hkcdAdfTypeInfo[4] = 0;
  hkcdAdfTypeInfo[5] = 112;
  hkcdAdfTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdAdfTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15F0D80);
  return hkcdAdfTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_662  (binary VA: 0x15f0f08)
// Original: nullsub_662
// ----------------------------------------------------------------------------
void nullsub_662()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_663  (binary VA: 0x15f0f18)
// Original: nullsub_663
// ----------------------------------------------------------------------------
void nullsub_663()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F0F20  (binary VA: 0x15f0f20)
// Original: sub_15F0F20
// ----------------------------------------------------------------------------
int sub_15F0F20(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15F0F40  (binary VA: 0x15f0f40)
// Original: sub_15F0F40
// ----------------------------------------------------------------------------
int sub_15F0F40(int a1, int a2)
{
  return (int)(uintptr_t)(hkcdSimdTree::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_15F0FB0  (binary VA: 0x15f0fb0)
// Original: sub_15F0FB0
// ----------------------------------------------------------------------------
uint32_t * sub_15F0FB0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkcdSimdTreeNodeClass,
    "hkcdSimdTreeNode",
    (const hkClass::Self *)&hkcdFourAabbClass,
    112,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039168,
    1,
    (const hkClassMember::Self *)&off_2039150,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdSimdTreeNodeTypeInfo = (uint32_t)(uintptr_t)("hkcdSimdTreeNode");
  *(uintptr_t *)(unk_2122E34) = (uintptr_t)("!hkcdSimdTree::Node");
  *(uintptr_t *)(unk_2122E40) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122E44) = (uintptr_t)(112);
  *(uintptr_t *)(unk_2122E38) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122E3C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdSimdTreeClass,
    "hkcdSimdTree",
    (const hkClass::Self *)&hkBaseObjectClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098568,
    1,
    nullptr,
    nullptr,
    0,
    1u);
  hkcdSimdTree::Construct(&v1, 0);
  hkcdSimdTreeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdSimdTree");
  hkcdSimdTreeTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15F0F40);
  hkcdSimdTreeTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15F0F20);
  hkcdSimdTreeTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdSimdTree");
  hkcdSimdTreeTypeInfo[4] = v1;
  hkcdSimdTreeTypeInfo[5] = 16;
  return hkcdSimdTreeTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_664  (binary VA: 0x15f1148)
// Original: nullsub_664
// ----------------------------------------------------------------------------
void nullsub_664()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_665  (binary VA: 0x15f1158)
// Original: nullsub_665
// ----------------------------------------------------------------------------
void nullsub_665()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_666  (binary VA: 0x15f1168)
// Original: nullsub_666
// ----------------------------------------------------------------------------
void nullsub_666()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_667  (binary VA: 0x15f1178)
// Original: nullsub_667
// ----------------------------------------------------------------------------
void nullsub_667()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_668  (binary VA: 0x15f1188)
// Original: nullsub_668
// ----------------------------------------------------------------------------
void nullsub_668()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_669  (binary VA: 0x15f1198)
// Original: nullsub_669
// ----------------------------------------------------------------------------
void nullsub_669()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_670  (binary VA: 0x15f11a8)
// Original: nullsub_670
// ----------------------------------------------------------------------------
void nullsub_670()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_671  (binary VA: 0x15f11b8)
// Original: nullsub_671
// ----------------------------------------------------------------------------
void nullsub_671()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_672  (binary VA: 0x15f11c8)
// Original: nullsub_672
// ----------------------------------------------------------------------------
void nullsub_672()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_673  (binary VA: 0x15f11d8)
// Original: nullsub_673
// ----------------------------------------------------------------------------
void nullsub_673()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_674  (binary VA: 0x15f11e8)
// Original: nullsub_674
// ----------------------------------------------------------------------------
void nullsub_674()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_675  (binary VA: 0x15f11f8)
// Original: nullsub_675
// ----------------------------------------------------------------------------
void nullsub_675()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1200  (binary VA: 0x15f1200)
// Original: sub_15F1200
// ----------------------------------------------------------------------------
int sub_15F1200(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1260  (binary VA: 0x15f1260)
// Original: sub_15F1260
// ----------------------------------------------------------------------------
int sub_15F1260(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F12C0  (binary VA: 0x15f12c0)
// Original: sub_15F12C0
// ----------------------------------------------------------------------------
int sub_15F12C0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1320  (binary VA: 0x15f1320)
// Original: sub_15F1320
// ----------------------------------------------------------------------------
int sub_15F1320(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1380  (binary VA: 0x15f1380)
// Original: sub_15F1380
// ----------------------------------------------------------------------------
int sub_15F1380(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F13E0  (binary VA: 0x15f13e0)
// Original: sub_15F13E0
// ----------------------------------------------------------------------------
int sub_15F13E0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1440  (binary VA: 0x15f1440)
// Original: sub_15F1440
// ----------------------------------------------------------------------------
int sub_15F1440(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F14A0  (binary VA: 0x15f14a0)
// Original: sub_15F14A0
// ----------------------------------------------------------------------------
int sub_15F14A0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1500  (binary VA: 0x15f1500)
// Original: sub_15F1500
// ----------------------------------------------------------------------------
int sub_15F1500(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1560  (binary VA: 0x15f1560)
// Original: sub_15F1560
// ----------------------------------------------------------------------------
int sub_15F1560(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F15C0  (binary VA: 0x15f15c0)
// Original: sub_15F15C0
// ----------------------------------------------------------------------------
int sub_15F15C0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1620  (binary VA: 0x15f1620)
// Original: sub_15F1620
// ----------------------------------------------------------------------------
int sub_15F1620(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1700  (binary VA: 0x15f1700)
// Original: sub_15F1700
// ----------------------------------------------------------------------------
uint32_t * sub_15F1700()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32Class,
    "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32Class,
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
  hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32");
  *(uintptr_t *)(unk_21232B4) = (uintptr_t)("!hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32_typename");
  *(uintptr_t *)(unk_21232C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21232C4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_21232B8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21232BC) = (uintptr_t)(sub_15F1500);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecInt16Class,
    "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecInt16",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecInt16Class,
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
  hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecInt16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecInt16");
  *(uintptr_t *)(unk_2123254) = (uintptr_t)("!hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecInt16_typename");
  *(uintptr_t *)(unk_2123260) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123264) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2123258) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212325C) = (uintptr_t)(sub_15F1320);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUintClass,
    "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUint",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUintClass,
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
  hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUintTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultDynamicStoragehkcdDyna"
                                                                            "micTreeCodecRawUint");
  *(uintptr_t *)(unk_21231F4) = (uintptr_t)("!hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUint_typename");
  *(uintptr_t *)(unk_2123200) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123204) = (uintptr_t)(16);
  *(uintptr_t *)(unk_21231F8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21231FC) = (uintptr_t)(sub_15F1440);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlongClass,
    "hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlong",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlongClass,
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
  hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlongTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultDynamicStoragehkcdDyn"
                                                                             "amicTreeCodecRawUlong");
  *(uintptr_t *)(unk_2123194) = (uintptr_t)("!hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlong_typename");
  *(uintptr_t *)(unk_21231A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21231A4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2123198) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212319C) = (uintptr_t)(sub_15F15C0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32Class,
    "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32",
    (const hkClass::Self *)&hkcdDynamicTreeAnisotropicMetricClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098640,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicS"
                                                                                                 "torage0hkcdDynamicTreeA"
                                                                                                 "nisotropicMetrichkcdDynamicTreeCodec32");
  *(uintptr_t *)(unk_2123134) = (uintptr_t)("!hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodec32_typename");
  *(uintptr_t *)(unk_2123140) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123144) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2123138) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212313C) = (uintptr_t)(sub_15F14A0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecInt16Class,
    "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecInt16",
    (const hkClass::Self *)&hkcdDynamicTreeAnisotropicMetricClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098600,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecInt16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecInt16");
  *(uintptr_t *)(unk_21230D4) = (uintptr_t)("!hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecInt16_typename");
  *(uintptr_t *)(unk_21230E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21230E4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_21230D8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21230DC) = (uintptr_t)(sub_15F1560);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUintClass,
    "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUint",
    (const hkClass::Self *)&hkcdDynamicTreeAnisotropicMetricClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20985C0,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUintTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUint");
  *(uintptr_t *)(unk_2123074) = (uintptr_t)("!hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUint_typename");
  *(uintptr_t *)(unk_2123080) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123084) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2123078) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212307C) = (uintptr_t)(sub_15F13E0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlongClass,
    "hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlong",
    (const hkClass::Self *)&hkcdDynamicTreeAnisotropicMetricClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098580,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlongTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlong");
  *(uintptr_t *)(unk_2123014) = (uintptr_t)("!hkcdDynamicTreeDynamicStorage0hkcdDynamicTreeAnisotropicMetrichkcdDynamicTreeCodecRawUlong_typename");
  *(uintptr_t *)(unk_2123020) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123024) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2123018) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212301C) = (uintptr_t)(sub_15F1200);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorage16Class,
    "hkcdDynamicTreeDynamicStorage16",
    (const hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodec32Class,
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
  hkcdDynamicTreeDynamicStorage16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStorage16");
  *(uintptr_t *)(unk_2122FB4) = (uintptr_t)("!hkcdDynamicTree::DynamicStorage16");
  *(uintptr_t *)(unk_2122FC0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122FC4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2122FB8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122FBC) = (uintptr_t)(sub_15F12C0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorage32Class,
    "hkcdDynamicTreeDynamicStorage32",
    (const hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUintClass,
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
  hkcdDynamicTreeDynamicStorage32TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStorage32");
  *(uintptr_t *)(unk_2122F54) = (uintptr_t)("!hkcdDynamicTree::DynamicStorage32");
  *(uintptr_t *)(unk_2122F60) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122F64) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2122F58) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122F5C) = (uintptr_t)(sub_15F1260);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStorageInt16Class,
    "hkcdDynamicTreeDynamicStorageInt16",
    (const hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecInt16Class,
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
  hkcdDynamicTreeDynamicStorageInt16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStorageInt16");
  *(uintptr_t *)(unk_2122EF4) = (uintptr_t)("!hkcdDynamicTree::DynamicStorageInt16");
  *(uintptr_t *)(unk_2122F00) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122F04) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2122EF8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2122EFC) = (uintptr_t)(sub_15F1380);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDynamicStoragePtrClass,
    "hkcdDynamicTreeDynamicStoragePtr",
    (const hkClass::Self *)&hkcdDynamicTreeDefaultDynamicStoragehkcdDynamicTreeCodecRawUlongClass,
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
  hkcdDynamicTreeDynamicStoragePtrTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdDynamicTreeDynamicStoragePtr");
  hkcdDynamicTreeDynamicStoragePtrTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdDynamicTree::DynamicStoragePtr");
  hkcdDynamicTreeDynamicStoragePtrTypeInfo[4] = 0;
  hkcdDynamicTreeDynamicStoragePtrTypeInfo[5] = 16;
  hkcdDynamicTreeDynamicStoragePtrTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdDynamicTreeDynamicStoragePtrTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15F1620);
  return hkcdDynamicTreeDynamicStoragePtrTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_15F1F10  (binary VA: 0x15f1f10)
// Original: sub_15F1F10
// ----------------------------------------------------------------------------
int sub_15F1F10(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15F1F30  (binary VA: 0x15f1f30)
// Original: sub_15F1F30
// ----------------------------------------------------------------------------
int sub_15F1F30(int a1, int a2)
{
  return hkcdStaticAabbTree::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_15F1F80  (binary VA: 0x15f1f80)
// Original: sub_15F1F80
// ----------------------------------------------------------------------------
uint32_t * sub_15F1F80()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticAabbTreeClass,
    "hkcdStaticAabbTree",
    (const hkClass::Self *)&hkReferencedObjectClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdStaticAabbTree::Members,
    2,
    nullptr,
    nullptr,
    0,
    1u);
  hkcdStaticAabbTree::Construct(&v1, 0);
  hkcdStaticAabbTreeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdStaticAabbTree");
  hkcdStaticAabbTreeTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15F1F30);
  hkcdStaticAabbTreeTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15F1F10);
  hkcdStaticAabbTreeTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdStaticAabbTree");
  hkcdStaticAabbTreeTypeInfo[4] = v1;
  hkcdStaticAabbTreeTypeInfo[5] = 16;
  return hkcdStaticAabbTreeTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_676  (binary VA: 0x15f2068)
// Original: nullsub_676
// ----------------------------------------------------------------------------
void nullsub_676()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_677  (binary VA: 0x15f2078)
// Original: nullsub_677
// ----------------------------------------------------------------------------
void nullsub_677()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_678  (binary VA: 0x15f2088)
// Original: nullsub_678
// ----------------------------------------------------------------------------
void nullsub_678()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_679  (binary VA: 0x15f2098)
// Original: nullsub_679
// ----------------------------------------------------------------------------
void nullsub_679()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_680  (binary VA: 0x15f20a8)
// Original: nullsub_680
// ----------------------------------------------------------------------------
void nullsub_680()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_681  (binary VA: 0x15f20b8)
// Original: nullsub_681
// ----------------------------------------------------------------------------
void nullsub_681()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_682  (binary VA: 0x15f20c8)
// Original: nullsub_682
// ----------------------------------------------------------------------------
void nullsub_682()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_683  (binary VA: 0x15f20d8)
// Original: nullsub_683
// ----------------------------------------------------------------------------
void nullsub_683()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F20E0  (binary VA: 0x15f20e0)
// Original: sub_15F20E0
// ----------------------------------------------------------------------------
int sub_15F20E0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2140  (binary VA: 0x15f2140)
// Original: sub_15F2140
// ----------------------------------------------------------------------------
int sub_15F2140(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F21A0  (binary VA: 0x15f21a0)
// Original: sub_15F21A0
// ----------------------------------------------------------------------------
int sub_15F21A0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2200  (binary VA: 0x15f2200)
// Original: sub_15F2200
// ----------------------------------------------------------------------------
int sub_15F2200(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2260  (binary VA: 0x15f2260)
// Original: sub_15F2260
// ----------------------------------------------------------------------------
int sub_15F2260(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F22C0  (binary VA: 0x15f22c0)
// Original: sub_15F22C0
// ----------------------------------------------------------------------------
int sub_15F22C0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               48 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2320  (binary VA: 0x15f2320)
// Original: sub_15F2320
// ----------------------------------------------------------------------------
int sub_15F2320(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2380  (binary VA: 0x15f2380)
// Original: sub_15F2380
// ----------------------------------------------------------------------------
int sub_15F2380(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2460  (binary VA: 0x15f2460)
// Original: sub_15F2460
// ----------------------------------------------------------------------------
uint32_t * sub_15F2460()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultTree32StorageClass,
    "hkcdDynamicTreeDefaultTree32Storage",
    (const hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16Class,
    28,
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
  hkcdDynamicTreeDefaultTree32StorageTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultTree32Storage");
  *(uintptr_t *)(unk_2123614) = (uintptr_t)("!hkcdDynamicTree::DefaultTree32Storage");
  *(uintptr_t *)(unk_2123620) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123624) = (uintptr_t)(28);
  *(uintptr_t *)(unk_2123618) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212361C) = (uintptr_t)(sub_15F21A0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultTree48StorageClass,
    "hkcdDynamicTreeDefaultTree48Storage",
    (const hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32Class,
    28,
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
  hkcdDynamicTreeDefaultTree48StorageTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultTree48Storage");
  *(uintptr_t *)(unk_21235B4) = (uintptr_t)("!hkcdDynamicTree::DefaultTree48Storage");
  *(uintptr_t *)(unk_21235C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21235C4) = (uintptr_t)(28);
  *(uintptr_t *)(unk_21235B8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21235BC) = (uintptr_t)(sub_15F2140);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultTreeInt16StorageClass,
    "hkcdDynamicTreeDefaultTreeInt16Storage",
    (const hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorageInt16Class,
    28,
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
  hkcdDynamicTreeDefaultTreeInt16StorageTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultTreeInt16Storage");
  *(uintptr_t *)(unk_2123554) = (uintptr_t)("!hkcdDynamicTree::DefaultTreeInt16Storage");
  *(uintptr_t *)(unk_2123560) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123564) = (uintptr_t)(28);
  *(uintptr_t *)(unk_2123558) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212355C) = (uintptr_t)(sub_15F2200);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeDefaultTreePtrStorageClass,
    "hkcdDynamicTreeDefaultTreePtrStorage",
    (const hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrClass,
    28,
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
  hkcdDynamicTreeDefaultTreePtrStorageTypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeDefaultTreePtrStorage");
  *(uintptr_t *)(unk_21234F4) = (uintptr_t)("!hkcdDynamicTree::DefaultTreePtrStorage");
  *(uintptr_t *)(unk_2123500) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123504) = (uintptr_t)(28);
  *(uintptr_t *)(unk_21234F8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21234FC) = (uintptr_t)(sub_15F2260);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16Class,
    "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorage16Class,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20392C0,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16");
  *(uintptr_t *)(unk_2123494) = (uintptr_t)("!hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage16_typename");
  *(uintptr_t *)(unk_21234A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21234A4) = (uintptr_t)(28);
  *(uintptr_t *)(unk_2123498) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212349C) = (uintptr_t)(sub_15F2320);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32Class,
    "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorage32Class,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039260,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32");
  *(uintptr_t *)(unk_2123434) = (uintptr_t)("!hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorage32_typename");
  *(uintptr_t *)(unk_2123440) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123444) = (uintptr_t)(28);
  *(uintptr_t *)(unk_2123438) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212343C) = (uintptr_t)(sub_15F22C0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorageInt16Class,
    "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorageInt16",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStorageInt16Class,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2039200,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorageInt16TypeInfo = (uint32_t)(uintptr_t)("hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorageInt16");
  *(uintptr_t *)(unk_21233D4) = (uintptr_t)("!hkcdDynamicTreeTreehkcdDynamicTreeDynamicStorageInt16_typename");
  *(uintptr_t *)(unk_21233E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21233E4) = (uintptr_t)(28);
  *(uintptr_t *)(unk_21233D8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21233DC) = (uintptr_t)(sub_15F2380);
  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrClass,
    "hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtr",
    (const hkClass::Self *)&hkcdDynamicTreeDynamicStoragePtrClass,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20391A0,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtr");
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtr_typename");
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo[4] = 0;
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo[5] = 28;
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15F20E0);
  return hkcdDynamicTreeTreehkcdDynamicTreeDynamicStoragePtrTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_684  (binary VA: 0x15f29d8)
// Original: nullsub_684
// ----------------------------------------------------------------------------
void nullsub_684()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_685  (binary VA: 0x15f29e8)
// Original: nullsub_685
// ----------------------------------------------------------------------------
void nullsub_685()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_686  (binary VA: 0x15f29f8)
// Original: nullsub_686
// ----------------------------------------------------------------------------
void nullsub_686()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_687  (binary VA: 0x15f2a08)
// Original: nullsub_687
// ----------------------------------------------------------------------------
void nullsub_687()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_688  (binary VA: 0x15f2a18)
// Original: nullsub_688
// ----------------------------------------------------------------------------
void nullsub_688()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_689  (binary VA: 0x15f2a28)
// Original: nullsub_689
// ----------------------------------------------------------------------------
void nullsub_689()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_690  (binary VA: 0x15f2a38)
// Original: nullsub_690
// ----------------------------------------------------------------------------
void nullsub_690()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2A40  (binary VA: 0x15f2a40)
// Original: sub_15F2A40
// ----------------------------------------------------------------------------
int sub_15F2A40(int a1, int a2)
{
  return ((hkcdStaticMeshTreeBase::Construct(a1, a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_15F2A70  (binary VA: 0x15f2a70)
// Original: sub_15F2A70
// ----------------------------------------------------------------------------
int sub_15F2A70(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int result;
  uint32_t *v10;

  v1 = a1[23];
  a1[22] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[21],
      2 * (v1 & 0x3FFFFFFF));
  v2 = a1[20];
  a1[21] = 0;
  a1[23] = 0x80000000;
  a1[19] = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[18],
      4 * v2);
  v3 = a1[16];
  a1[18] = 0;
  a1[20] = 0x80000000;
  v4 = v3 - 1;
  if ( v3 - 1 >= 0 )
  {
    v5 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v6 = 96 * v3 + a1[15];
    do
    {
      v7 = *(uint32_t *)(v6 - 88);
      *(uint32_t *)(v6 - 92) = 0;
      if ( v7 >= 0 )
      {
        v10 = v5;
        G4_VCALL<void>(v5, 20, *(uint32_t *)(v6 - 96), 4 * v7);
        v5 = v10;
      }
      --v4;
      *(uint32_t *)(v6 - 96) = 0;
      *(uint32_t *)(v6 - 88) = 0x80000000;
      v6 -= 96;
    }
    while ( v4 != -1 );
  }
  v8 = a1[17];
  a1[16] = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[15],
      96 * v8);
  result = a1[2];
  a1[15] = 0;
  a1[17] = 0x80000000;
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               5 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2BF0  (binary VA: 0x15f2bf0)
// Original: sub_15F2BF0
// ----------------------------------------------------------------------------
int sub_15F2BF0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F2D30  (binary VA: 0x15f2d30)
// Original: sub_15F2D30
// ----------------------------------------------------------------------------
uint32_t * sub_15F2D30()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBaseSectionSharedVerticesClass,
    "hkcdStaticMeshTreeBaseSectionSharedVertices",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdStaticMeshTreeBase::Section::SharedVertices::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticMeshTreeBaseSectionSharedVerticesTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBaseSectionSharedVertices");
  *(uintptr_t *)(unk_2123914) = (uintptr_t)("!hkcdStaticMeshTreeBase::Section::SharedVertices");
  *(uintptr_t *)(unk_2123918) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123920) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123924) = (uintptr_t)(4);
  *(uintptr_t *)(unk_212391C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBaseSectionPrimitivesClass,
    "hkcdStaticMeshTreeBaseSectionPrimitives",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdStaticMeshTreeBase::Section::Primitives::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticMeshTreeBaseSectionPrimitivesTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBaseSectionPrimitives");
  *(uintptr_t *)(unk_21238B4) = (uintptr_t)("!hkcdStaticMeshTreeBase::Section::Primitives");
  *(uintptr_t *)(unk_21238B8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21238C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21238C4) = (uintptr_t)(4);
  *(uintptr_t *)(unk_21238BC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBaseSectionDataRunsClass,
    "hkcdStaticMeshTreeBaseSectionDataRuns",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdStaticMeshTreeBase::Section::DataRuns::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticMeshTreeBaseSectionDataRunsTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBaseSectionDataRuns");
  *(uintptr_t *)(unk_2123854) = (uintptr_t)("!hkcdStaticMeshTreeBase::Section::DataRuns");
  *(uintptr_t *)(unk_2123858) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123860) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123864) = (uintptr_t)(4);
  *(uintptr_t *)(unk_212385C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBaseSectionClass,
    "hkcdStaticMeshTreeBaseSection",
    (const hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage4Class,
    96,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20393A8,
    1,
    (const hkClassMember::Self *)&off_2098760,
    12,
    nullptr,
    nullptr,
    0,
    3u);
  hkcdStaticMeshTreeBaseSectionTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBaseSection");
  *(uintptr_t *)(unk_21237F4) = (uintptr_t)("!hkcdStaticMeshTreeBase::Section");
  *(uintptr_t *)(unk_2123800) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123804) = (uintptr_t)(96);
  *(uintptr_t *)(unk_21237F8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21237FC) = (uintptr_t)(sub_15F2BF0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBasePrimitiveClass,
    "hkcdStaticMeshTreeBasePrimitive",
    nullptr,
    4,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2039358,
    1,
    (const hkClassMember::Self *)&off_2039340,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticMeshTreeBasePrimitiveTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBasePrimitive");
  *(uintptr_t *)(unk_2123794) = (uintptr_t)("!hkcdStaticMeshTreeBase::Primitive");
  *(uintptr_t *)(unk_2123798) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21237A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21237A4) = (uintptr_t)(4);
  *(uintptr_t *)(unk_212379C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBaseClass,
    "hkcdStaticMeshTreeBase",
    (const hkClass::Self *)&hkcdStaticTreeTreehkcdStaticTreeDynamicStorage5Class,
    96,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20393C4,
    1,
    (const hkClassMember::Self *)&off_20986C0,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticMeshTreeBaseTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBase");
  *(uintptr_t *)(unk_2123734) = (uintptr_t)("!hkcdStaticMeshTreeBase");
  *(uintptr_t *)(unk_2123740) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123744) = (uintptr_t)(96);
  *(uintptr_t *)(unk_2123738) = (uintptr_t)(sub_15F2A40);
  *(uintptr_t *)(unk_212373C) = (uintptr_t)(sub_15F2A70);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshortClass,
    "hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshort",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdStaticMeshTreeBase::PrimitiveDataRunBase<unsigned short>::Members,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshortTypeInfo = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshort");
  *(uintptr_t *)(unk_21236D4) = (uintptr_t)("!hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshort_typename");
  *(uintptr_t *)(unk_21236D8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21236E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21236E4) = (uintptr_t)(4);
  *(uintptr_t *)(unk_21236DC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticMeshTreeDefaultDataRunClass,
    "hkcdStaticMeshTreeDefaultDataRun",
    (const hkClass::Self *)&hkcdStaticMeshTreeBasePrimitiveDataRunBaseunsignedshortClass,
    4,
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
  hkcdStaticMeshTreeDefaultDataRunTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdStaticMeshTreeDefaultDataRun");
  hkcdStaticMeshTreeDefaultDataRunTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdStaticMeshTreeDefaultDataRun");
  hkcdStaticMeshTreeDefaultDataRunTypeInfo[2] = 0;
  hkcdStaticMeshTreeDefaultDataRunTypeInfo[4] = 0;
  hkcdStaticMeshTreeDefaultDataRunTypeInfo[5] = 4;
  hkcdStaticMeshTreeDefaultDataRunTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdStaticMeshTreeDefaultDataRunTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_691  (binary VA: 0x15f32a8)
// Original: nullsub_691
// ----------------------------------------------------------------------------
void nullsub_691()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_692  (binary VA: 0x15f32b8)
// Original: nullsub_692
// ----------------------------------------------------------------------------
void nullsub_692()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_693  (binary VA: 0x15f32c8)
// Original: nullsub_693
// ----------------------------------------------------------------------------
void nullsub_693()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_694  (binary VA: 0x15f32d8)
// Original: nullsub_694
// ----------------------------------------------------------------------------
void nullsub_694()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_695  (binary VA: 0x15f32e8)
// Original: nullsub_695
// ----------------------------------------------------------------------------
void nullsub_695()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_696  (binary VA: 0x15f32f8)
// Original: nullsub_696
// ----------------------------------------------------------------------------
void nullsub_696()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_697  (binary VA: 0x15f3308)
// Original: nullsub_697
// ----------------------------------------------------------------------------
void nullsub_697()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_698  (binary VA: 0x15f3318)
// Original: nullsub_698
// ----------------------------------------------------------------------------
void nullsub_698()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15F3320  (binary VA: 0x15f3320)
// Original: sub_15F3320
// ----------------------------------------------------------------------------
int sub_15F3320(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F3380  (binary VA: 0x15f3380)
// Original: sub_15F3380
// ----------------------------------------------------------------------------
int sub_15F3380(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               5 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F33E0  (binary VA: 0x15f33e0)
// Original: sub_15F33E0
// ----------------------------------------------------------------------------
int sub_15F33E0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               6 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F3440  (binary VA: 0x15f3440)
// Original: sub_15F3440
// ----------------------------------------------------------------------------
int sub_15F3440(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F34A0  (binary VA: 0x15f34a0)
// Original: sub_15F34A0
// ----------------------------------------------------------------------------
int sub_15F34A0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F3500  (binary VA: 0x15f3500)
// Original: sub_15F3500
// ----------------------------------------------------------------------------
int sub_15F3500(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               5 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F3560  (binary VA: 0x15f3560)
// Original: sub_15F3560
// ----------------------------------------------------------------------------
int sub_15F3560(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               6 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F35C0  (binary VA: 0x15f35c0)
// Original: sub_15F35C0
// ----------------------------------------------------------------------------
int sub_15F35C0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               32 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15F36A0  (binary VA: 0x15f36a0)
// Original: sub_15F36A0
// ----------------------------------------------------------------------------
uint32_t * sub_15F36A0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStorage32Class,
    "hkcdStaticTreeDynamicStorage32",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawClass,
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
  hkcdStaticTreeDynamicStorage32TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStorage32");
  *(uintptr_t *)(unk_2123C14) = (uintptr_t)("!hkcdStaticTree::DynamicStorage32");
  *(uintptr_t *)(unk_2123C20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123C24) = (uintptr_t)(12);
  *(uintptr_t *)(unk_2123C18) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2123C1C) = (uintptr_t)(sub_15F35C0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStorage4Class,
    "hkcdStaticTreeDynamicStorage4",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4Class,
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
  hkcdStaticTreeDynamicStorage4TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStorage4");
  *(uintptr_t *)(unk_2123BB4) = (uintptr_t)("!hkcdStaticTree::DynamicStorage4");
  *(uintptr_t *)(unk_2123BC0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123BC4) = (uintptr_t)(12);
  *(uintptr_t *)(unk_2123BB8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2123BBC) = (uintptr_t)(sub_15F3320);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStorage5Class,
    "hkcdStaticTreeDynamicStorage5",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5Class,
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
  hkcdStaticTreeDynamicStorage5TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStorage5");
  *(uintptr_t *)(unk_2123B54) = (uintptr_t)("!hkcdStaticTree::DynamicStorage5");
  *(uintptr_t *)(unk_2123B60) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123B64) = (uintptr_t)(12);
  *(uintptr_t *)(unk_2123B58) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2123B5C) = (uintptr_t)(sub_15F3380);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStorage6Class,
    "hkcdStaticTreeDynamicStorage6",
    (const hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6Class,
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
  hkcdStaticTreeDynamicStorage6TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStorage6");
  *(uintptr_t *)(unk_2123AF4) = (uintptr_t)("!hkcdStaticTree::DynamicStorage6");
  *(uintptr_t *)(unk_2123B00) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123B04) = (uintptr_t)(12);
  *(uintptr_t *)(unk_2123AF8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2123AFC) = (uintptr_t)(sub_15F33E0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4Class,
    "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20988C8,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4");
  *(uintptr_t *)(unk_2123A94) = (uintptr_t)("!hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis4_typename");
  *(uintptr_t *)(unk_2123AA0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123AA4) = (uintptr_t)(12);
  *(uintptr_t *)(unk_2123A98) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2123A9C) = (uintptr_t)(sub_15F34A0);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5Class,
    "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20988B0,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5");
  *(uintptr_t *)(unk_2123A34) = (uintptr_t)("!hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis5_typename");
  *(uintptr_t *)(unk_2123A40) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2123A44) = (uintptr_t)(12);
  *(uintptr_t *)(unk_2123A38) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2123A3C) = (uintptr_t)(sub_15F3500);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6Class,
    "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098898,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6TypeInfo = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6");
  *(uintptr_t *)(unk_21239D4) = (uintptr_t)("!hkcdStaticTreeDynamicStoragehkcdStaticTreeCodec3Axis6_typename");
  *(uintptr_t *)(unk_21239E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21239E4) = (uintptr_t)(12);
  *(uintptr_t *)(unk_21239D8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21239DC) = (uintptr_t)(sub_15F3560);
  hkClass::Construct(
    (hkClass::Self *)&hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawClass,
    "hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRaw",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2098880,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRaw");
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRaw_typename");
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo[4] = 0;
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo[5] = 12;
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15F3440);
  return hkcdStaticTreeDynamicStoragehkcdStaticTreeCodecRawTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_15F43F0  (binary VA: 0x15f43f0)
// Original: sub_15F43F0
// ----------------------------------------------------------------------------
int sub_15F43F0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int i;
  unsigned int v6;
  int j;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;

  v3 = 0;
  v4 = 112 * a2 + a1;
  for ( i = 0; i != 4; ++i )
  {
    v6 = *(uint32_t *)(v4 + 4 * i + 96);
    if ( v6 != 0 )
    {
      if ( (v6 & 1) != 0 )
      {
        ++v3;
      }
      else
      {
        v29 = v6 >> 1;
        v32 = i;
        v24 = a1 + 112 * (v6 >> 1);
        v25 = 0;
        v30 = v3;
        v31 = v4;
        for ( j = 0; j != 4; ++j )
        {
          v9 = *(uint32_t *)(v24 + 4 * j + 96);
          if ( v9 != 0 )
          {
            if ( (v9 & 1) != 0 )
            {
              ++v25;
            }
            else
            {
              v34 = v9 >> 1;
              v35 = j;
              v28 = a1 + 112 * (v9 >> 1);
              v10 = 0;
              v11 = 0;
              do
              {
                v12 = *(uint32_t *)(v28 + 4 * v10 + 96);
                if ( v12 != 0 )
                {
                  if ( (v12 & 1) != 0 )
                  {
                    ++v11;
                  }
                  else
                  {
                    v38 = v11;
                    v36 = v12 >> 1;
                    v33 = 0;
                    v14 = 0;
                    v37 = v10;
                    v15 = a1 + 112 * (v12 >> 1);
                    do
                    {
                      v16 = *(uint32_t *)(v15 + 4 * v14 + 96);
                      if ( v16 != 0 )
                      {
                        if ( (v16 & 1) != 0 )
                        {
                          ++v33;
                        }
                        else
                        {
                          v17 = v16 >> 1;
                          v18 = 0;
                          v19 = (uint32_t *)(a1 + 112 * v17);
                          v39 = v17;
                          v20 = v19[24];
                          if ( v20 != 0 )
                          {
                            LOWORD(v18) = 1;
                            if ( (v20 & 1) == 0 )
                            {
                              v42 = (uint32_t *)(a1 + 112 * v17);
                              v18 = sub_15F43F0(a3);
                              v19 = v42;
                            }
                          }
                          v21 = v19[25];
                          if ( v21 != 0 )
                          {
                            if ( (v21 & 1) != 0 )
                            {
                              ++v18;
                            }
                            else
                            {
                              v41 = v19;
                              v18 += sub_15F43F0(a3);
                              v19 = v41;
                            }
                          }
                          v22 = v19[26];
                          if ( v22 != 0 )
                          {
                            if ( (v22 & 1) != 0 )
                            {
                              ++v18;
                            }
                            else
                            {
                              v40 = v19;
                              v18 += sub_15F43F0(a3);
                              v19 = v40;
                            }
                          }
                          v23 = v19[27];
                          if ( v23 != 0 )
                          {
                            if ( (v23 & 1) != 0 )
                              ++v18;
                            else
                              v18 += sub_15F43F0(a3);
                          }
                          v33 += v18;
                          *(uint32_t *)(a3 + 4 * v39) = v18;
                        }
                      }
                      ++v14;
                    }
                    while ( v14 != 4 );
                    v10 = v37;
                    v11 = v33 + v38;
                    *(uint32_t *)(a3 + 4 * v36) = v33;
                  }
                }
                ++v10;
              }
              while ( v10 != 4 );
              v13 = v11;
              j = v35;
              v25 += v13;
              *(uint32_t *)(a3 + 4 * v34) = v13;
            }
          }
        }
        v4 = v31;
        i = v32;
        v3 = v25 + v30;
        *(uint32_t *)(a3 + 4 * v29) = v25;
      }
    }
  }
  *(uint32_t *)(a3 + 4 * a2) = v3;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_19571c  (binary VA: 0x15f86f0)
// Original: hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>>
// ----------------------------------------------------------------------------
int hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_19571c(uint32_t *a1, int a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  int32_t v23; // xmm7_4
  int32_t v24; // xmm7_4
  float v25; // xmm1_4
  int32_t v26; // xmm6_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  int result;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef __m128 _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef __m128 _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef __m128 _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef __m128 _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68[11];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v40)) > _g4_s0 ? (8u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v41)) > _g4_s1 ? (8u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v42)) > _g4_s2 ? (8u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v43)) > _g4_s3 ? (8u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v44)) > _g4_s4 ? (12u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v45)) > _g4_s5 ? (12u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v46)) > _g4_s6 ? (12u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v47)) > _g4_s7 ? (12u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v48)) > _g4_s8 ? (16u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v49)) > _g4_s9 ? (32u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v50)) > _g4_s10 ? (36u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v51)) > _g4_s11 ? (40u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v52)) > _g4_s12 ? (44u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v53)) > _g4_s13 ? (48u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v54)) > _g4_s14 ? (64u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v55)) > _g4_s15 ? (68u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v56)) > _g4_s16 ? (72u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v57)) > _g4_s17 ? (76u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v58)) > _g4_s18 ? (80u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v59)) > _g4_s19 ? (96u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v60)) > _g4_s20 ? (100u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v61)) > _g4_s21 ? (104u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v62)) > _g4_s22 ? (108u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v63)) > _g4_s23 ? (112u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v64)) > _g4_s24 ? (128u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v65)) > _g4_s25 ? (132u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v66)) > _g4_s26 ? (136u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v67)) > _g4_s27 ? (140u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v68)) > _g4_s28 ? (144u + sizeof(_g4_t_v68)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 96u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 100u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 104u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 108u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 136u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 140u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 144u);

  v3 = *(uint32_t *)(a3 + 96);
  if ( v3 != 0 )
  {
    if ( (v3 & 1) != 0 )
    {
      v4 = v3 >> 1;
      v5 = v4 & a1[3];
      v6 = v4 >> a1[2];
      v44 = v5;
      G4_VCALL<void>(*a1, 8, *(uint32_t *)(a1[1] + 16 * v6 + 12) & 0xC0FFFFFF, &v48);
      if ( v44 + 1 > 1 )
      {
        v7 = 16 * (v6 + 1);
        v40 = 1;
        do
        {
          v8 = *(uint32_t *)(a1[1] + v7 + 12) & 0xC0FFFFFF;
          v7 += 16;
          G4_VCALL<void>(*a1, 8, v8, v68);
          ++v40;
g4_m128_lane<uint64_t>(v48, 0) = __PAIR64__(
                              COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v48, 1), v68[1])),
                              COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v48, 0), v68[0])));
g4_m128_lane<uint64_t>(v48, 1) = __PAIR64__(
                              COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v48, 3), v68[3])),
                              COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v48, 2), v68[2])));
          v49 = fmaxf(v49, v68[4]);
          v50 = fmaxf(v50, v68[5]);
          v51 = fmaxf(v51, v68[6]);
          v52 = fmaxf(v52, v68[7]);
        }
        while ( v40 != v44 + 1 );
        v9 = *(uint32_t *)(a3 + 100);
        if ( v9 == 0 )
          goto LABEL_7;
        goto LABEL_18;
      }
    }
    else
    {
      hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v3 >> 1)), &v48);
    }
  }
  else
  {
g4_m128_lane<uint64_t>(v48, 0) = 0x7F7FFFEE7F7FFFEELL;
    v49 = -3.40282e38f;
g4_m128_lane<uint64_t>(v48, 1) = 0x7F7FFFEE7F7FFFEELL;
    v50 = -3.40282e38f;
    v51 = -3.40282e38f;
    v52 = -3.40282e38f;
  }
  v9 = *(uint32_t *)(a3 + 100);
  if ( v9 == 0 )
  {
LABEL_7:
g4_m128_lane<uint64_t>(v53, 0) = 0x7F7FFFEE7F7FFFEELL;
    v54 = -3.40282e38f;
g4_m128_lane<uint64_t>(v53, 1) = 0x7F7FFFEE7F7FFFEELL;
    v55 = -3.40282e38f;
    v56 = -3.40282e38f;
    v57 = -3.40282e38f;
    goto LABEL_8;
  }
LABEL_18:
  if ( (v9 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v9 >> 1)), &v53);
LABEL_8:
    v10 = *(uint32_t *)(a3 + 104);
    if ( v10 != 0 )
      goto LABEL_9;
LABEL_23:
g4_m128_lane<uint64_t>(v58, 0) = 0x7F7FFFEE7F7FFFEELL;
    v59 = -3.40282e38f;
g4_m128_lane<uint64_t>(v58, 1) = 0x7F7FFFEE7F7FFFEELL;
    v60 = -3.40282e38f;
    v61 = -3.40282e38f;
    v62 = -3.40282e38f;
    goto LABEL_24;
  }
  v30 = v9 >> 1;
  v31 = v30 & a1[3];
  v32 = v30 >> a1[2];
  v46 = v31;
  G4_VCALL<void>(*a1, 8, *(uint32_t *)(a1[1] + 16 * v32 + 12) & 0xC0FFFFFF, &v53);
  if ( v46 + 1 <= 1 )
    goto LABEL_8;
  v33 = 16 * (v32 + 1);
  v42 = 1;
  do
  {
    v34 = *(uint32_t *)(a1[1] + v33 + 12) & 0xC0FFFFFF;
    v33 += 16;
    G4_VCALL<void>(*a1, 8, v34, v68);
    ++v42;
g4_m128_lane<uint64_t>(v53, 0) = __PAIR64__(
                        COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v53, 1), v68[1])),
                        COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v53, 0), v68[0])));
g4_m128_lane<uint64_t>(v53, 1) = __PAIR64__(
                        COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v53, 3), v68[3])),
                        COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v53, 2), v68[2])));
    v54 = fmaxf(v54, v68[4]);
    v55 = fmaxf(v55, v68[5]);
    v56 = fmaxf(v56, v68[6]);
    v57 = fmaxf(v57, v68[7]);
  }
  while ( v42 != v46 + 1 );
  v10 = *(uint32_t *)(a3 + 104);
  if ( v10 == 0 )
    goto LABEL_23;
LABEL_9:
  if ( (v10 & 1) != 0 )
  {
    v11 = v10 >> 1;
    v12 = v11 & a1[3];
    v13 = v11 >> a1[2];
    v45 = v12;
    G4_VCALL<void>(*a1, 8, *(uint32_t *)(a1[1] + 16 * v13 + 12) & 0xC0FFFFFF, &v58);
    if ( v45 + 1 > 1 )
    {
      v14 = 16 * (v13 + 1);
      v41 = 1;
      do
      {
        v15 = *(uint32_t *)(a1[1] + v14 + 12) & 0xC0FFFFFF;
        v14 += 16;
        G4_VCALL<void>(*a1, 8, v15, v68);
        ++v41;
g4_m128_lane<uint64_t>(v58, 0) = __PAIR64__(
                            COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v58, 1), v68[1])),
                            COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v58, 0), v68[0])));
g4_m128_lane<uint64_t>(v58, 1) = __PAIR64__(
                            COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v58, 3), v68[3])),
                            COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v58, 2), v68[2])));
        v59 = fmaxf(v59, v68[4]);
        v60 = fmaxf(v60, v68[5]);
        v61 = fmaxf(v61, v68[6]);
        v62 = fmaxf(v62, v68[7]);
      }
      while ( v41 != v45 + 1 );
      v16 = *(uint32_t *)(a3 + 108);
      if ( v16 == 0 )
        goto LABEL_14;
      goto LABEL_25;
    }
  }
  else
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v10 >> 1)), &v58);
  }
LABEL_24:
  v16 = *(uint32_t *)(a3 + 108);
  if ( v16 == 0 )
  {
LABEL_14:
g4_m128_lane<uint64_t>(v63, 0) = 0x7F7FFFEE7F7FFFEELL;
    v17 = 3.40282e38f;
g4_m128_lane<int32_t>(v63, 2) = 2139095022;
    v18 = 3.40282e38f;
    v19 = -3.40282e38f;
    v20 = 3.40282e38f;
    v21 = -3.40282e38f;
    v22 = -3.40282e38f;
    goto LABEL_15;
  }
LABEL_25:
  if ( (v16 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v16 >> 1)), &v63);
    goto LABEL_31;
  }
  v35 = v16 >> 1;
  v36 = v35 & a1[3];
  v37 = v35 >> a1[2];
  v47 = v36;
  G4_VCALL<void>(*a1, 8, *(uint32_t *)(a1[1] + 16 * v37 + 12) & 0xC0FFFFFF, &v63);
  if ( v47 + 1 <= 1 )
  {
LABEL_31:
    v17 =g4_m128_lane<float>(v63, 0);
    v18 =g4_m128_lane<float>(v63, 1);
    v20 =g4_m128_lane<float>(v63, 2);
    v19 = v64;
    v21 = v65;
    v22 = v66;
    goto LABEL_15;
  }
  v38 = 16 * (v37 + 1);
  v43 = 1;
  do
  {
    v39 = *(uint32_t *)(a1[1] + v38 + 12) & 0xC0FFFFFF;
    v38 += 16;
    G4_VCALL<void>(*a1, 8, v39, v68);
    ++v43;
    v17 = fminf(g4_m128_lane<float>(v63, 0), v68[0]);
    v18 = fminf(g4_m128_lane<float>(v63, 1), v68[1]);
    v20 = fminf(g4_m128_lane<float>(v63, 2), v68[2]);
    v19 = fmaxf(v64, v68[4]);
    v21 = fmaxf(v65, v68[5]);
    v22 = fmaxf(v66, v68[6]);
g4_m128_lane<uint64_t>(v63, 0) = __PAIR64__(LODWORD(v18), LODWORD(v17));
g4_m128_lane<uint64_t>(v63, 1) = __PAIR64__(COERCE_UNSIGNED_INT(fminf(g4_m128_lane<float>(v63, 3), v68[3])), LODWORD(v20));
    v64 = v19;
    v65 = v21;
    v66 = v22;
    v67 = fmaxf(v67, v68[7]);
  }
  while ( v43 != v47 + 1 );
LABEL_15:
  v23 =g4_m128_lane<int32_t>(v48, 1);
g4_m128_lane<float>(v48, 3) = v17;
g4_m128_lane<int32_t>(v48, 1) =g4_m128_lane<int32_t>(v53, 0);
  *(uint32_t *)a3 =g4_m128_lane<int32_t>(v48, 0);
g4_m128_lane<int32_t>(v53, 0) = v23;
g4_m128_lane<float>(v53, 3) = v18;
  v24 =g4_m128_lane<int32_t>(v48, 2);
  v25 = v50;
g4_m128_lane<int32_t>(v48, 2) =g4_m128_lane<int32_t>(v58, 0);
  v26 =g4_m128_lane<int32_t>(v53, 2);
g4_m128_lane<int32_t>(v53, 2) =g4_m128_lane<int32_t>(v58, 1);
  v50 = v54;
  v54 = v25;
  v27 = v59;
  v59 = v51;
  v51 = v27;
  v28 = v56;
g4_m128_lane<uint64_t>(v58, 0) = __PAIR64__(v26, v24);
g4_m128_lane<float>(v58, 3) = v20;
  v52 = v19;
  v56 = v60;
  v60 = v28;
  v57 = v21;
  v62 = v22;
  *(uint64_t *)(a3 + 4) = *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v48) + 4);
  *(uint32_t *)(a3 + 12) =g4_m128_lane<int32_t>(v48, 3);
  *(float *)(a3 + 16) = v49;
  *(float *)(a3 + 20) = v50;
  *(float *)(a3 + 24) = v51;
  *(float *)(a3 + 28) = v52;
  *(__m128 *)(a3 + 32) = v53;
  *(float *)(a3 + 48) = v54;
  *(float *)(a3 + 52) = v55;
  *(float *)(a3 + 56) = v56;
  *(float *)(a3 + 60) = v57;
  *(__m128 *)(a3 + 64) = v58;
  *(float *)(a3 + 80) = v59;
  *(float *)(a3 + 84) = v60;
  *(float *)(a3 + 88) = v61;
  result = LODWORD(v62);
  *(float *)(a3 + 92) = v62;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_80437c  (binary VA: 0x15f9c70)
// Original: hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>>
// ----------------------------------------------------------------------------
int hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_80437c(int *a1, int a2, __m128 *a3)
{
  __m128 *v3;
  uint32_t v4;
  uint32_t v5;
  int v6;
  int v7;
  int v8;
  float *v9;
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm7_4
  int v19;
  int v20;
  int v21;
  float v22; // xmm7_4
  int v23;
  float *v24;
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  __m128i v29;
  float v30; // xmm1_4
  float v31; // xmm2_4
  int v32;
  float v33; // xmm5_4
  uint32_t v34;
  uint32_t v35;
  uint32_t v36;
  int v37;
  int v38;
  int v39;
  float *v40;
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v45; // xmm7_4
  float v46; // xmm6_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm7_4
  int v50;
  int v51;
  int v52;
  float v53; // xmm7_4
  float v54; // xmm5_4
  int v55;
  float *v56;
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm1_4
  __m128i v60;
  int v61;
  float v62; // xmm5_4
  float v63; // xmm4_4
  uint32_t v64;
  float v65; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm3_4
  int32_t v68; // xmm5_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  int32_t v71; // xmm0_4
  int32_t v72; // xmm4_4
  int32_t v73; // xmm4_4
  int32_t v74; // xmm4_4
  float v75; // xmm4_4
  float v76; // xmm4_4
  float v77; // xmm3_4
  int result;
  uint32_t v79;
  int v80;
  int v81;
  int v82;
  float *v83;
  float v84; // xmm0_4
  float v85; // xmm3_4
  float v86; // xmm4_4
  float v88; // xmm7_4
  float v89; // xmm6_4
  float v90; // xmm2_4
  float v91; // xmm1_4
  float v92; // xmm7_4
  int v93;
  int v94;
  int v95;
  float v96; // xmm7_4
  int v97;
  float *v98;
  float v99; // xmm0_4
  float v100; // xmm2_4
  float v101; // xmm5_4
  float v102; // xmm3_4
  float v103; // xmm1_4
  float v104; // xmm3_4
  __m128i v105;
  int v106;
  float v107; // xmm5_4
  uint32_t v108;
  int v109;
  int v110;
  int v111;
  float *v112;
  float v113; // xmm4_4
  float v114; // xmm4_4
  float v115; // xmm0_4
  float v116; // xmm0_4
  int v117;
  int v118;
  int v119;
  int v120;
  float v121; // xmm5_4
  int v122;
  float *v123;
  float v124; // xmm0_4
  float v125; // xmm3_4
  float v126; // xmm1_4
  float v127; // xmm4_4
  __m128 *v184;
  __m128 *v185;
  __m128 *v186;
  uint64_t v187; // 0:xmm5_4.4,4:xmm0_4.4
  uint64_t v188; // 0:xmm5_4.4,4:xmm0_4.4
  uint64_t v189; // 0:xmm5_4.4,4:xmm0_4.4
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef uint64_t _g4_t_v135 __attribute__((aligned(1)));
  typedef float _g4_t_v136;
  typedef uint64_t _g4_t_v137 __attribute__((aligned(1)));
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef int _g4_t_v155;
  typedef uint64_t _g4_t_v156;
  typedef float _g4_t_v157;
  typedef int _g4_t_v158;
  typedef float _g4_t_v159;
  typedef int _g4_t_v160;
  typedef float _g4_t_v161;
  typedef int _g4_t_v162;
  typedef float _g4_t_v163;
  typedef __m128 _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef int _g4_t_v168;
  typedef __m128 _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef int _g4_t_v173;
  typedef __m128 _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef int _g4_t_v178;
  typedef __m128 _g4_t_v179;
  typedef float _g4_t_v180;
  typedef float _g4_t_v181;
  typedef float _g4_t_v182;
  typedef float _g4_t_v183;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v128)) > _g4_s0 ? (12u + sizeof(_g4_t_v128)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v129)) > _g4_s1 ? (12u + sizeof(_g4_t_v129)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v130)) > _g4_s2 ? (12u + sizeof(_g4_t_v130)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v131)) > _g4_s3 ? (12u + sizeof(_g4_t_v131)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v132)) > _g4_s4 ? (16u + sizeof(_g4_t_v132)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v133)) > _g4_s5 ? (16u + sizeof(_g4_t_v133)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v134)) > _g4_s6 ? (16u + sizeof(_g4_t_v134)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v135)) > _g4_s7 ? (20u + sizeof(_g4_t_v135)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v136)) > _g4_s8 ? (20u + sizeof(_g4_t_v136)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v137)) > _g4_s9 ? (20u + sizeof(_g4_t_v137)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v138)) > _g4_s10 ? (20u + sizeof(_g4_t_v138)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v139)) > _g4_s11 ? (24u + sizeof(_g4_t_v139)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v140)) > _g4_s12 ? (24u + sizeof(_g4_t_v140)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v141)) > _g4_s13 ? (28u + sizeof(_g4_t_v141)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v142)) > _g4_s14 ? (28u + sizeof(_g4_t_v142)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v143)) > _g4_s15 ? (28u + sizeof(_g4_t_v143)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v144)) > _g4_s16 ? (28u + sizeof(_g4_t_v144)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v145)) > _g4_s17 ? (32u + sizeof(_g4_t_v145)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v146)) > _g4_s18 ? (32u + sizeof(_g4_t_v146)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v147)) > _g4_s19 ? (32u + sizeof(_g4_t_v147)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v148)) > _g4_s20 ? (32u + sizeof(_g4_t_v148)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v149)) > _g4_s21 ? (36u + sizeof(_g4_t_v149)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v150)) > _g4_s22 ? (36u + sizeof(_g4_t_v150)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v151)) > _g4_s23 ? (40u + sizeof(_g4_t_v151)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v152)) > _g4_s24 ? (40u + sizeof(_g4_t_v152)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v153)) > _g4_s25 ? (40u + sizeof(_g4_t_v153)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v154)) > _g4_s26 ? (40u + sizeof(_g4_t_v154)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v155)) > _g4_s27 ? (40u + sizeof(_g4_t_v155)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v156)) > _g4_s28 ? (40u + sizeof(_g4_t_v156)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v157)) > _g4_s29 ? (40u + sizeof(_g4_t_v157)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v158)) > _g4_s30 ? (44u + sizeof(_g4_t_v158)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v159)) > _g4_s31 ? (44u + sizeof(_g4_t_v159)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v160)) > _g4_s32 ? (44u + sizeof(_g4_t_v160)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v161)) > _g4_s33 ? (44u + sizeof(_g4_t_v161)) : _g4_s33,
    _g4_s35 = (44u + sizeof(_g4_t_v162)) > _g4_s34 ? (44u + sizeof(_g4_t_v162)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v163)) > _g4_s35 ? (44u + sizeof(_g4_t_v163)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v164)) > _g4_s36 ? (48u + sizeof(_g4_t_v164)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v165)) > _g4_s37 ? (64u + sizeof(_g4_t_v165)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v166)) > _g4_s38 ? (68u + sizeof(_g4_t_v166)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v167)) > _g4_s39 ? (72u + sizeof(_g4_t_v167)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v168)) > _g4_s40 ? (76u + sizeof(_g4_t_v168)) : _g4_s40,
    _g4_s42 = (80u + sizeof(_g4_t_v169)) > _g4_s41 ? (80u + sizeof(_g4_t_v169)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v170)) > _g4_s42 ? (96u + sizeof(_g4_t_v170)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v171)) > _g4_s43 ? (100u + sizeof(_g4_t_v171)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v172)) > _g4_s44 ? (104u + sizeof(_g4_t_v172)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v173)) > _g4_s45 ? (108u + sizeof(_g4_t_v173)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v174)) > _g4_s46 ? (112u + sizeof(_g4_t_v174)) : _g4_s46,
    _g4_s48 = (128u + sizeof(_g4_t_v175)) > _g4_s47 ? (128u + sizeof(_g4_t_v175)) : _g4_s47,
    _g4_s49 = (132u + sizeof(_g4_t_v176)) > _g4_s48 ? (132u + sizeof(_g4_t_v176)) : _g4_s48,
    _g4_s50 = (136u + sizeof(_g4_t_v177)) > _g4_s49 ? (136u + sizeof(_g4_t_v177)) : _g4_s49,
    _g4_s51 = (140u + sizeof(_g4_t_v178)) > _g4_s50 ? (140u + sizeof(_g4_t_v178)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v179)) > _g4_s51 ? (144u + sizeof(_g4_t_v179)) : _g4_s51,
    _g4_s53 = (160u + sizeof(_g4_t_v180)) > _g4_s52 ? (160u + sizeof(_g4_t_v180)) : _g4_s52,
    _g4_s54 = (164u + sizeof(_g4_t_v181)) > _g4_s53 ? (164u + sizeof(_g4_t_v181)) : _g4_s53,
    _g4_s55 = (168u + sizeof(_g4_t_v182)) > _g4_s54 ? (168u + sizeof(_g4_t_v182)) : _g4_s54,
    _g4_s56 = (172u + sizeof(_g4_t_v183)) > _g4_s55 ? (172u + sizeof(_g4_t_v183)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 12u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 12u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 12u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 16u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 16u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 16u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 20u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 20u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 20u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 20u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 24u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 24u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 28u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 28u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 28u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 28u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 32u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 32u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 32u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 32u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 36u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 36u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 40u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 40u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 40u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 40u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 40u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 40u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 40u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 44u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 44u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 44u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 44u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 44u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 44u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 48u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 64u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 68u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 72u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 76u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 80u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 96u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 100u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 104u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 108u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 112u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 128u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 132u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 136u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 140u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 144u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 160u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 164u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 168u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 172u);

  v3 = a3;
  v4 =g4_m128_lane<uint32_t>(a3[6], 0);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = v4 >> 1;
      v6 = a1[3] & (v4 >> 1);
      v7 = a1[1] + 16 * (v5 >> a1[2]);
      v8 = *a1;
      v9 = (float *)(16 * (*(uint32_t *)(v7 + 12) & 0xC0FFFFFF) + *a1);
      v10 = v9[3];
      v11 = *v9 - v10;
g4_m128_lane<float>(v164, 0) = v11;
      v12 = v9[1] - v10;
g4_m128_lane<float>(v164, 1) = v12;
      *(float *)&v187 = v9[2] - v10;
      *((float *)&v187 + 1) = v10 - v10;
g4_m128_lane<uint64_t>(v164, 1) = v187;
      v14 = v9[3];
      v15 = *v9 + v14;
      v165 = v15;
      v16 = v9[1] + v14;
      v166 = v16;
      v17 = v9[2] + v14;
      v167 = v17;
      v18 = v14 + v9[3];
      v168 = LODWORD(v18);
      if ( !__OFSUB__(v6 + 1, 1) && v6 != 0 )
      {
        v19 = 0;
        v141 = v17;
        v158 = 16 * v6;
        v145 = v18;
        v20 = v7;
        v135 = v187;
        v21 = v158;
        v132 = v12;
        v128 = v11;
        v22 = v16;
        while ( 1 )
        {
          v23 = *(uint32_t *)(v20 + v19 + 28);
          v19 += 16;
          v24 = (float *)(16 * (v23 & 0xC0FFFFFF) + v8);
          v25 = v24[3];
          v26 = v24[2];
          v27 = v24[1];
          v149 = v26 - v25;
          v15 = fmaxf(v15, *v24 + v25);
          v151 = v27 - v25;
          v159 = fminf(v128, *v24 - v25);
g4_m128_lane<float>(v164, 0) = v159;
          v22 = fmaxf(v22, v27 + v25);
          v28 = fmaxf(v141, v26 + v25);
          v165 = v15;
          v166 = v22;
          v152 = fminf(v132, v151);
g4_m128_lane<float>(v164, 1) = v152;
g4_m128_raw(v29) = (unsigned int)v135;
          v30 = v28;
          *(float *)g4_m128_ptr<int32_t>(v29) = fminf(*(float *)&v135, v149);
          v167 = v28;
          v31 = fmaxf(v145, v25 + v25);
g4_m128_lane<int32_t>(v164, 2) =g4_m128_lane<int32_t>(v29, 0);
          v32 = _mm_cvtsi128_si32(v29);
          v33 = fminf(*((float *)&v135 + 1), v25 - v25);
          v168 = LODWORD(v31);
g4_m128_lane<float>(v164, 3) = v33;
          if ( v19 == v21 )
            break;
          v135 = __PAIR64__(LODWORD(v33), v32);
          v128 = v159;
          v132 = v152;
          v141 = v30;
          v145 = v31;
        }
        v3 = a3;
        v34 =g4_m128_lane<uint32_t>(a3[6], 1);
        if ( v34 == 0 )
          goto LABEL_8;
        goto LABEL_20;
      }
    }
    else
    {
      hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v4 >> 1)), &v164);
    }
  }
  else
  {
g4_m128_lane<uint64_t>(v164, 0) = 0x7F7FFFEE7F7FFFEELL;
    v165 = -3.40282e38f;
g4_m128_lane<uint64_t>(v164, 1) = 0x7F7FFFEE7F7FFFEELL;
    v166 = -3.40282e38f;
    v167 = -3.40282e38f;
    v168 = -8388626;
  }
  v34 =g4_m128_lane<uint32_t>(a3[6], 1);
  if ( v34 == 0 )
  {
LABEL_8:
g4_m128_lane<uint64_t>(v169, 0) = 0x7F7FFFEE7F7FFFEELL;
    v170 = -3.40282e38f;
g4_m128_lane<uint64_t>(v169, 1) = 0x7F7FFFEE7F7FFFEELL;
    v171 = -3.40282e38f;
    v172 = -3.40282e38f;
    v173 = -8388626;
    goto LABEL_9;
  }
LABEL_20:
  if ( (v34 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v34 >> 1)), &v169);
LABEL_9:
    v35 =g4_m128_lane<uint32_t>(v3[6], 2);
    if ( v35 != 0 )
      goto LABEL_10;
LABEL_26:
g4_m128_lane<uint64_t>(v174, 0) = 0x7F7FFFEE7F7FFFEELL;
    v175 = -3.40282e38f;
g4_m128_lane<uint64_t>(v174, 1) = 0x7F7FFFEE7F7FFFEELL;
    v176 = -3.40282e38f;
    v177 = -3.40282e38f;
    v178 = -8388626;
    goto LABEL_27;
  }
  v79 = v34 >> 1;
  v80 = a1[3] & (v34 >> 1);
  v81 = a1[1] + 16 * (v79 >> a1[2]);
  v82 = *a1;
  v83 = (float *)(16 * (*(uint32_t *)(v81 + 12) & 0xC0FFFFFF) + *a1);
  v84 = v83[3];
  v85 = *v83 - v84;
g4_m128_lane<float>(v169, 0) = v85;
  v86 = v83[1] - v84;
g4_m128_lane<float>(v169, 1) = v86;
  *(float *)&v189 = v83[2] - v84;
  *((float *)&v189 + 1) = v84 - v84;
g4_m128_lane<uint64_t>(v169, 1) = v189;
  v88 = v83[3];
  v89 = *v83 + v88;
  v170 = v89;
  v90 = v83[1] + v88;
  v171 = v90;
  v91 = v83[2] + v88;
  v172 = v91;
  v92 = v88 + v83[3];
  v173 = LODWORD(v92);
  if ( __OFSUB__(v80 + 1, 1) || v80 == 0 )
    goto LABEL_9;
  v93 = 0;
  v147 = v91;
  v155 = 16 * v80;
  v143 = v92;
  v94 = v81;
  v137 = __PAIR64__(LODWORD(v85), LODWORD(v86));
  v95 = v155;
  v133 = *(float *)&v189;
  v185 = v3;
  v130 = *((float *)&v189 + 1);
  v96 = v90;
  while ( 1 )
  {
    v97 = *(uint32_t *)(v94 + v93 + 28);
    v93 += 16;
    v98 = (float *)(16 * (v97 & 0xC0FFFFFF) + v82);
    v99 = v98[3];
    v100 = v98[1];
    v89 = fmaxf(v89, *v98 + v99);
    v150 = v98[2] - v99;
    v101 = fminf(*((float *)&v137 + 1), *v98 - v99);
    v102 = fmaxf(v147, v98[2] + v99);
    v170 = v89;
g4_m128_lane<float>(v169, 0) = v101;
    v103 = v102;
    v172 = v102;
    v96 = fmaxf(v96, v100 + v99);
    v104 = fmaxf(v143, v99 + v99);
    v156 = __PAIR64__(LODWORD(v101), COERCE_UNSIGNED_INT(fminf(*(float *)&v137, v100 - v99)));
g4_m128_lane<int32_t>(v169, 1) = v156;
g4_m128_raw(v105) = LODWORD(v133);
    *(float *)g4_m128_ptr<int32_t>(v105) = fminf(v133, v150);
    v171 = v96;
    v173 = LODWORD(v104);
g4_m128_lane<int32_t>(v169, 2) =g4_m128_lane<int32_t>(v105, 0);
    v106 = _mm_cvtsi128_si32(v105);
    v107 = fminf(v130, v99 - v99);
g4_m128_lane<float>(v169, 3) = v107;
    if ( v93 == v95 )
      break;
    v133 = *(float *)&v106;
    v137 = v156;
    v130 = v107;
    v147 = v103;
    v143 = v104;
  }
  v3 = v185;
  v35 =g4_m128_lane<uint32_t>(v185[6], 2);
  if ( v35 == 0 )
    goto LABEL_26;
LABEL_10:
  if ( (v35 & 1) != 0 )
  {
    v36 = v35 >> 1;
    v37 = a1[3] & (v35 >> 1);
    v38 = a1[1] + 16 * (v36 >> a1[2]);
    v39 = *a1;
    v40 = (float *)(16 * (*(uint32_t *)(v38 + 12) & 0xC0FFFFFF) + *a1);
    v41 = v40[3];
    v42 = *v40 - v41;
g4_m128_lane<float>(v174, 0) = v42;
    v43 = v40[1] - v41;
g4_m128_lane<float>(v174, 1) = v43;
    *(float *)&v188 = v40[2] - v41;
    *((float *)&v188 + 1) = v41 - v41;
g4_m128_lane<uint64_t>(v174, 1) = v188;
    v45 = v40[3];
    v46 = *v40 + v45;
    v175 = v46;
    v47 = v40[1] + v45;
    v176 = v47;
    v48 = v40[2] + v45;
    v177 = v48;
    v49 = v45 + v40[3];
    v178 = LODWORD(v49);
    if ( !__OFSUB__(v37 + 1, 1) && v37 != 0 )
    {
      v50 = 0;
      v146 = v48;
      v160 = 16 * v37;
      v51 = v38;
      v142 = v49;
      v52 = v160;
      v136 = *(float *)&v188;
      v139 = v43;
      v184 = v3;
      v129 = *((float *)&v188 + 1);
      v53 = v47;
      v54 = v42;
      while ( 1 )
      {
        v55 = *(uint32_t *)(v51 + v50 + 28);
        v50 += 16;
        v56 = (float *)(16 * (v55 & 0xC0FFFFFF) + v39);
        v57 = v56[3];
        v46 = fmaxf(v46, *v56 + v57);
        v58 = v56[1];
        v53 = fmaxf(v53, v58 + v57);
        v153 = v58 - v57;
        v59 = v56[2];
        v161 = fminf(v54, *v56 - v57);
g4_m128_lane<float>(v174, 0) = v161;
        v175 = v46;
        v176 = v53;
        v154 = fminf(v139, v153);
g4_m128_lane<float>(v174, 1) = v154;
g4_m128_raw(v60) = LODWORD(v136);
        *(float *)g4_m128_ptr<int32_t>(v60) = fminf(v136, v59 - v57);
g4_m128_lane<int32_t>(v174, 2) =g4_m128_lane<int32_t>(v60, 0);
        v61 = _mm_cvtsi128_si32(v60);
        v62 = fminf(v129, v57 - v57);
g4_m128_lane<float>(v174, 3) = v62;
        v177 = fmaxf(v146, v59 + v57);
        v63 = fmaxf(v142, v57 + v57);
        v178 = LODWORD(v63);
        if ( v50 == v52 )
          break;
        v136 = *(float *)&v61;
        v129 = v62;
        v54 = v161;
        v139 = v154;
        v146 = v177;
        v142 = v63;
      }
      v3 = v184;
      v64 =g4_m128_lane<uint32_t>(v184[6], 3);
      if ( v64 == 0 )
        goto LABEL_16;
      goto LABEL_28;
    }
  }
  else
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v35 >> 1)), &v174);
  }
LABEL_27:
  v64 =g4_m128_lane<uint32_t>(v3[6], 3);
  if ( v64 == 0 )
  {
LABEL_16:
g4_m128_lane<uint64_t>(v179, 0) = 0x7F7FFFEE7F7FFFEELL;
    v65 = 3.40282e38f;
g4_m128_lane<int32_t>(v179, 2) = 2139095022;
    v66 = 3.40282e38f;
    v67 = -3.40282e38f;
    v68 = 2139095022;
    v69 = -3.40282e38f;
    v70 = -3.40282e38f;
    goto LABEL_17;
  }
LABEL_28:
  if ( (v64 & 1) != 0 )
  {
    v108 = v64 >> 1;
    v109 = a1[3] & (v64 >> 1);
    v110 = a1[1] + 16 * (v108 >> a1[2]);
    v111 = *a1;
    v112 = (float *)(16 * (*(uint32_t *)(v110 + 12) & 0xC0FFFFFF) + *a1);
    v113 = v112[3];
    v65 = *v112 - v113;
g4_m128_lane<float>(v179, 0) = v65;
    v66 = v112[1] - v113;
g4_m128_lane<float>(v179, 1) = v66;
    *(float *)&v68 = v112[2] - v113;
    v114 = v113 - v113;
g4_m128_lane<uint64_t>(v179, 1) = __PAIR64__(LODWORD(v114), v68);
    v115 = v112[3];
    v67 = *v112 + v115;
    v180 = v67;
    v69 = v112[1] + v115;
    v181 = v69;
    v70 = v112[2] + v115;
    v182 = v70;
    v116 = v115 + v112[3];
    v183 = v116;
    if ( !__OFSUB__(v109 + 1, 1) && v109 != 0 )
    {
      v186 = v3;
      v162 = 16 * v109;
      v117 = 0;
      v118 = v111;
      v119 = v110;
      v131 = *(float *)&v68;
      v120 = v162;
      v144 = v116;
      v121 = v69;
      v148 = v70;
      v138 = v114;
      v140 = v67;
      v134 = v66;
      while ( 1 )
      {
        v122 = *(uint32_t *)(v119 + v117 + 28);
        v117 += 16;
        v123 = (float *)(16 * (v122 & 0xC0FFFFFF) + v118);
        v124 = v123[3];
        v125 = *v123 + v124;
        v65 = fminf(v65, *v123 - v124);
        v163 = v123[1] - v124;
        v126 = v123[2];
        v121 = fmaxf(v121, v123[1] + v124);
g4_m128_lane<float>(v179, 0) = v65;
        v181 = v121;
        v66 = fminf(v134, v163);
        *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v179) + 4) = __PAIR64__(
                                                             COERCE_UNSIGNED_INT(fminf(v131, v126 - v124)),
                                                             LODWORD(v66));
        v157 = fminf(v138, v124 - v124);
g4_m128_lane<float>(v179, 3) = v157;
        v127 = fmaxf(v140, v125);
        v180 = v127;
        v182 = fmaxf(v148, v126 + v124);
        v70 = v182;
        v183 = fmaxf(v144, v124 + v124);
        if ( v117 == v120 )
          break;
        v134 = v66;
        v131 =g4_m128_lane<float>(v179, 2);
        v138 = v157;
        v140 = v127;
        v148 = v182;
        v144 = v183;
      }
      v69 = v121;
      v3 = v186;
      v68 =g4_m128_lane<int32_t>(v179, 2);
      v67 = v127;
    }
  }
  else
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v64 >> 1)), &v179);
    v65 =g4_m128_lane<float>(v179, 0);
    v66 =g4_m128_lane<float>(v179, 1);
    v68 =g4_m128_lane<int32_t>(v179, 2);
    v67 = v180;
    v69 = v181;
    v70 = v182;
  }
LABEL_17:
  v71 =g4_m128_lane<int32_t>(v169, 0);
  v72 =g4_m128_lane<int32_t>(v164, 1);
g4_m128_lane<int32_t>(*(v3), 0) =g4_m128_lane<int32_t>(v164, 0);
g4_m128_lane<int32_t>(v164, 1) = v71;
g4_m128_lane<int32_t>(v169, 0) = v72;
  v73 =g4_m128_lane<int32_t>(v164, 2);
g4_m128_lane<uint64_t>(v164, 1) = __PAIR64__(LODWORD(v65),g4_m128_lane<uint32_t>(v174, 0));
g4_m128_lane<int32_t>(v174, 0) = v73;
  v74 =g4_m128_lane<int32_t>(v169, 2);
g4_m128_lane<uint64_t>(v169, 1) = __PAIR64__(LODWORD(v66),g4_m128_lane<uint32_t>(v174, 1));
g4_m128_lane<int32_t>(v174, 1) = v74;
  v75 = v166;
  v166 = v170;
  v170 = v75;
  v168 = LODWORD(v67);
  v76 = v167;
  v77 = v172;
  v167 = v175;
g4_m128_lane<int32_t>(v174, 3) = v68;
  v175 = v76;
  v172 = v176;
  v176 = v77;
  v173 = LODWORD(v69);
  v178 = LODWORD(v70);
g4_m128_lane<int32_t>(*(v3), 1) = v71;
g4_m128_lane<uint64_t>(*(v3), 1) =g4_m128_lane<uint64_t>(v164, 1);
g4_m128_lane<float>(v3[1], 0) = v165;
g4_m128_lane<float>(v3[1], 1) = v166;
g4_m128_lane<float>(v3[1], 2) = v167;
g4_m128_lane<int32_t>(v3[1], 3) = v168;
  v3[2] = v169;
g4_m128_lane<float>(v3[3], 0) = v170;
g4_m128_lane<float>(v3[3], 1) = v171;
g4_m128_lane<float>(v3[3], 2) = v172;
g4_m128_lane<int32_t>(v3[3], 3) = v173;
  v3[4] = v174;
g4_m128_lane<float>(v3[5], 0) = v175;
g4_m128_lane<float>(v3[5], 1) = v176;
g4_m128_lane<float>(v3[5], 2) = v177;
  result = v178;
g4_m128_lane<int32_t>(v3[5], 3) = v178;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_dcc7df  (binary VA: 0x15fb8a0)
// Original: hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>
// ----------------------------------------------------------------------------
int hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_dcc7df(hkIntSpaceUtil::Self *a1, int a2, __m128 *a3)
{
  uint32_t v3;
  int32_t *v4;
  int32_t v5;
  int32_t v6;
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  uint32_t v16;
  uint32_t v17;
  uint32_t v18;
  int32_t v19; // xmm6_4
  int32_t v20; // xmm5_4
  int v21; // xmm3_4
  int32_t v22; // xmm4_4
  int v23; // xmm2_4
  int v24; // xmm1_4
  int32_t v25; // xmm0_4
  int32_t v26; // xmm7_4
  int32_t v27; // xmm7_4
  int32_t v28; // xmm6_4
  float v29; // xmm4_4
  int v30; // xmm4_4
  int v31; // xmm3_4
  int result;
  int32_t *v33;
  int32_t v34;
  int32_t v35;
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  typedef __m128 _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef __m128 _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef __m128 _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef __m128 _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v46)) > _g4_s1 ? (16u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v47)) > _g4_s2 ? (20u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v48)) > _g4_s3 ? (24u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v49)) > _g4_s4 ? (28u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v50)) > _g4_s5 ? (32u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v51)) > _g4_s6 ? (48u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v52)) > _g4_s7 ? (52u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v53)) > _g4_s8 ? (56u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v54)) > _g4_s9 ? (60u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v55)) > _g4_s10 ? (64u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v56)) > _g4_s11 ? (80u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v57)) > _g4_s12 ? (84u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v58)) > _g4_s13 ? (88u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v59)) > _g4_s14 ? (92u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v60)) > _g4_s15 ? (96u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v61)) > _g4_s16 ? (112u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v62)) > _g4_s17 ? (116u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v63)) > _g4_s18 ? (120u + sizeof(_g4_t_v63)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 88u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 92u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);

  v3 =g4_m128_lane<uint32_t>(a3[6], 0);
  if ( v3 == 0 )
  {
g4_m128_lane<uint64_t>(v45, 0) = 0x7F7FFFEE7F7FFFEELL;
    v46 = -3.40282e38f;
g4_m128_lane<uint64_t>(v45, 1) = 0x7F7FFFEE7F7FFFEELL;
    v47 = -3.40282e38f;
    v48 = -3.40282e38f;
    v49 = -3.40282e38f;
    goto LABEL_11;
  }
  if ( (v3 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v3 >> 1)), &v45);
LABEL_11:
    v16 =g4_m128_lane<uint32_t>(a3[6], 1);
    if ( v16 == 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  v4 = (int32_t *)(*((uint32_t *)a1 + 24) + (v3 >> 1) * *((uint32_t *)a1 + 25));
  v5 = *v4;
g4_m128_lane<int32_t>(v60, 1) = v4[1];
g4_m128_lane<int32_t>(v60, 0) = v5;
  v6 = v4[3];
g4_m128_lane<int32_t>(v60, 2) = v4[2];
g4_m128_lane<int32_t>(v60, 3) = v6;
  v7 = *((float *)a1 + 12);
  v8 = *(float *)a1;
  v9 = *((float *)a1 + 13);
  v10 = (float)HIWORD(v6) * *((float *)a1 + 15);
g4_m128_lane<float>(v45, 0) = (float)((float)(uint16_t)v5 * v7) - *(float *)a1;
g4_m128_lane<float>(v45, 1) = (float)((float)HIWORD(v5) * v9) - *((float *)a1 + 1);
  v11 = v10 - *((float *)a1 + 3);
  v12 = (float)((float)(uint16_t)v6 * *((float *)a1 + 14)) - *((float *)a1 + 2);
  v13 = (float)((float)g4_m128_lane<uint16_t>(v60, 5) * v9) - *((float *)a1 + 1);
g4_m128_lane<float>(v45, 2) = (float)((float)g4_m128_lane<uint16_t>(v60, 2) * *((float *)a1 + 14)) - *((float *)a1 + 2);
  v14 = (float)g4_m128_lane<uint16_t>(v60, 3) * *((float *)a1 + 15);
  v46 = (float)((float)g4_m128_lane<uint16_t>(v60, 4) * v7) - v8;
  v47 = v13;
  v48 = v12;
  v15 = v14 - *((float *)a1 + 3);
  v49 = v11;
  v16 =g4_m128_lane<uint32_t>(a3[6], 1);
g4_m128_lane<float>(v45, 3) = v15;
  if ( v16 == 0 )
  {
LABEL_4:
g4_m128_lane<uint64_t>(v50, 0) = 0x7F7FFFEE7F7FFFEELL;
    v51 = -3.40282e38f;
g4_m128_lane<uint64_t>(v50, 1) = 0x7F7FFFEE7F7FFFEELL;
    v52 = -3.40282e38f;
    v53 = -3.40282e38f;
    v54 = -3.40282e38f;
    goto LABEL_5;
  }
LABEL_12:
  if ( (v16 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v16 >> 1)), &v50);
LABEL_5:
    v17 =g4_m128_lane<uint32_t>(a3[6], 2);
    if ( v17 != 0 )
      goto LABEL_6;
LABEL_14:
g4_m128_lane<uint64_t>(v55, 0) = 0x7F7FFFEE7F7FFFEELL;
    v56 = -8388626;
g4_m128_lane<uint64_t>(v55, 1) = 0x7F7FFFEE7F7FFFEELL;
    v57 = -8388626;
    v58 = -8388626;
    v59 = -8388626;
    goto LABEL_15;
  }
  v33 = (int32_t *)(*((uint32_t *)a1 + 24) + (v16 >> 1) * *((uint32_t *)a1 + 25));
  v34 = *v33;
g4_m128_lane<int32_t>(v60, 1) = v33[1];
g4_m128_lane<int32_t>(v60, 0) = v34;
  v35 = v33[3];
g4_m128_lane<int32_t>(v60, 2) = v33[2];
g4_m128_lane<int32_t>(v60, 3) = v35;
  v36 = *((float *)a1 + 12);
  v37 = *(float *)a1;
  v38 = *((float *)a1 + 13);
  v39 = (float)HIWORD(v35) * *((float *)a1 + 15);
g4_m128_lane<float>(v50, 0) = (float)((float)(uint16_t)v34 * v36) - *(float *)a1;
g4_m128_lane<float>(v50, 1) = (float)((float)HIWORD(v34) * v38) - *((float *)a1 + 1);
  v40 = v39 - *((float *)a1 + 3);
  v41 = (float)((float)(uint16_t)v35 * *((float *)a1 + 14)) - *((float *)a1 + 2);
  v42 = (float)((float)g4_m128_lane<uint16_t>(v60, 5) * v38) - *((float *)a1 + 1);
g4_m128_lane<float>(v50, 2) = (float)((float)g4_m128_lane<uint16_t>(v60, 2) * *((float *)a1 + 14)) - *((float *)a1 + 2);
  v43 = (float)g4_m128_lane<uint16_t>(v60, 3) * *((float *)a1 + 15);
  v51 = (float)((float)g4_m128_lane<uint16_t>(v60, 4) * v36) - v37;
  v52 = v42;
  v53 = v41;
  v44 = v43 - *((float *)a1 + 3);
  v54 = v40;
  v17 =g4_m128_lane<uint32_t>(a3[6], 2);
g4_m128_lane<float>(v50, 3) = v44;
  if ( v17 == 0 )
    goto LABEL_14;
LABEL_6:
  if ( (v17 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v17 >> 1)), &v55);
LABEL_15:
    v18 =g4_m128_lane<uint32_t>(a3[6], 3);
    if ( v18 == 0 )
      goto LABEL_8;
    goto LABEL_16;
  }
  hkIntSpaceUtil::restoreAabb(
    a1,
    (const hkAabb16::Self *)(*((uint32_t *)a1 + 24) + *((uint32_t *)a1 + 25) * (v17 >> 1)),
    (hkAabb::Self *)&v55);
  v18 =g4_m128_lane<uint32_t>(a3[6], 3);
  if ( v18 == 0 )
  {
LABEL_8:
g4_m128_lane<uint64_t>(v60, 0) = 0x7F7FFFEE7F7FFFEELL;
    v19 = 2139095022;
g4_m128_lane<int32_t>(v60, 2) = 2139095022;
    v20 = 2139095022;
    v21 = -8388626;
    v22 = 2139095022;
    v23 = -8388626;
    v24 = -8388626;
    goto LABEL_9;
  }
LABEL_16:
  if ( (v18 & 1) != 0 )
    hkIntSpaceUtil::restoreAabb(
      a1,
      (const hkAabb16::Self *)(*((uint32_t *)a1 + 24) + *((uint32_t *)a1 + 25) * (v18 >> 1)),
      (hkAabb::Self *)&v60);
  else
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v18 >> 1)), &v60);
  v19 =g4_m128_lane<int32_t>(v60, 0);
  v20 =g4_m128_lane<int32_t>(v60, 1);
  v22 =g4_m128_lane<int32_t>(v60, 2);
  v21 = v61;
  v23 = v62;
  v24 = v63;
LABEL_9:
  v25 =g4_m128_lane<int32_t>(v50, 0);
  v26 =g4_m128_lane<int32_t>(v45, 1);
g4_m128_lane<int32_t>(*(a3), 0) =g4_m128_lane<int32_t>(v45, 0);
g4_m128_lane<int32_t>(v45, 1) = v25;
g4_m128_lane<int32_t>(v50, 0) = v26;
  v27 =g4_m128_lane<int32_t>(v45, 2);
g4_m128_lane<uint64_t>(v45, 1) = __PAIR64__(v19,g4_m128_lane<uint32_t>(v55, 0));
  v28 =g4_m128_lane<int32_t>(v50, 2);
g4_m128_lane<uint64_t>(v50, 1) = __PAIR64__(v20,g4_m128_lane<uint32_t>(v55, 1));
g4_m128_lane<int32_t>(v55, 3) = v22;
  v29 = v47;
  v47 = v51;
  v51 = v29;
  v49 = *(float *)&v21;
  v30 = LODWORD(v48);
  v31 = LODWORD(v53);
  v48 = *(float *)&v56;
g4_m128_lane<uint64_t>(v55, 0) = __PAIR64__(v28, v27);
  v56 = v30;
  v53 = *(float *)&v57;
  v57 = v31;
  v54 = *(float *)&v23;
  v59 = v24;
g4_m128_lane<int32_t>(*(a3), 1) = v25;
g4_m128_lane<uint64_t>(*(a3), 1) =g4_m128_lane<uint64_t>(v45, 1);
g4_m128_lane<float>(a3[1], 0) = v46;
g4_m128_lane<float>(a3[1], 1) = v47;
g4_m128_lane<float>(a3[1], 2) = v48;
g4_m128_lane<float>(a3[1], 3) = v49;
  a3[2] = v50;
g4_m128_lane<float>(a3[3], 0) = v51;
g4_m128_lane<float>(a3[3], 1) = v52;
g4_m128_lane<float>(a3[3], 2) = v53;
g4_m128_lane<float>(a3[3], 3) = v54;
  a3[4] = v55;
g4_m128_lane<int32_t>(a3[5], 0) = v56;
g4_m128_lane<int32_t>(a3[5], 1) = v57;
g4_m128_lane<int32_t>(a3[5], 2) = v58;
  result = v59;
g4_m128_lane<int32_t>(a3[5], 3) = v59;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_f16f63  (binary VA: 0x15fc0f0)
// Original: hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>>
// ----------------------------------------------------------------------------
int hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_f16f63(int *a1, int a2, __m128 *a3)
{
  __m128 *v3;
  uint32_t v4;
  uint32_t v5;
  int v6;
  int v7;
  __m128 *v8;
  int v9;
  float v10; // xmm4_4
  int v11;
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  int v15;
  float *v16;
  float v18; // xmm0_4
  float v19; // xmm1_4
  uint32_t v20;
  uint32_t v21;
  uint32_t v22;
  int v23;
  int v24;
  __m128 *v25;
  int v26;
  float v27; // xmm4_4
  int v28;
  float v29; // xmm7_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  int v32;
  float *v33;
  float v35; // xmm0_4
  float v36; // xmm1_4
  uint32_t v37;
  int32_t v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm3_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  int32_t v44; // xmm0_4
  int32_t v45; // xmm4_4
  int32_t v46; // xmm4_4
  int32_t v47; // xmm4_4
  int v48; // xmm4_4
  int v49; // xmm4_4
  int v50; // xmm3_4
  int result;
  uint32_t v52;
  int v53;
  int v54;
  __m128 *v55;
  int v56;
  float v57; // xmm4_4
  int v58;
  float v59; // xmm7_4
  float v60; // xmm3_4
  float v61; // xmm2_4
  int v62;
  float *v63;
  float v65; // xmm0_4
  float v66; // xmm1_4
  uint32_t v67;
  int v68;
  int v69;
  __m128 *v70;
  int v71;
  int v72;
  float v73; // xmm7_4
  float v74; // xmm0_4
  int v75;
  float *v76;
  float v77; // xmm4_4
  uint64_t v112; // 0:xmm6_4.4,4:xmm5_4.4
  uint64_t v113; // 0:xmm6_4.4,4:xmm5_4.4
  uint64_t v114; // 0:xmm6_4.4,4:xmm5_4.4
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_i;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef __m128 _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef __m128 _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef __m128 _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef __m128 _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v78)) > _g4_s0 ? (0u + sizeof(_g4_t_v78)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v79)) > _g4_s1 ? (0u + sizeof(_g4_t_v79)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v80)) > _g4_s2 ? (0u + sizeof(_g4_t_v80)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_i)) > _g4_s3 ? (0u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v82)) > _g4_s4 ? (4u + sizeof(_g4_t_v82)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v83)) > _g4_s5 ? (4u + sizeof(_g4_t_v83)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v84)) > _g4_s6 ? (4u + sizeof(_g4_t_v84)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v85)) > _g4_s7 ? (8u + sizeof(_g4_t_v85)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v86)) > _g4_s8 ? (8u + sizeof(_g4_t_v86)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v87)) > _g4_s9 ? (8u + sizeof(_g4_t_v87)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v88)) > _g4_s10 ? (28u + sizeof(_g4_t_v88)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v89)) > _g4_s11 ? (28u + sizeof(_g4_t_v89)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v90)) > _g4_s12 ? (28u + sizeof(_g4_t_v90)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v91)) > _g4_s13 ? (28u + sizeof(_g4_t_v91)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v92)) > _g4_s14 ? (32u + sizeof(_g4_t_v92)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v93)) > _g4_s15 ? (48u + sizeof(_g4_t_v93)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v94)) > _g4_s16 ? (52u + sizeof(_g4_t_v94)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v95)) > _g4_s17 ? (56u + sizeof(_g4_t_v95)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v96)) > _g4_s18 ? (60u + sizeof(_g4_t_v96)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v97)) > _g4_s19 ? (64u + sizeof(_g4_t_v97)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v98)) > _g4_s20 ? (80u + sizeof(_g4_t_v98)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v99)) > _g4_s21 ? (84u + sizeof(_g4_t_v99)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v100)) > _g4_s22 ? (88u + sizeof(_g4_t_v100)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v101)) > _g4_s23 ? (92u + sizeof(_g4_t_v101)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v102)) > _g4_s24 ? (96u + sizeof(_g4_t_v102)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v103)) > _g4_s25 ? (112u + sizeof(_g4_t_v103)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v104)) > _g4_s26 ? (116u + sizeof(_g4_t_v104)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v105)) > _g4_s27 ? (120u + sizeof(_g4_t_v105)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v106)) > _g4_s28 ? (124u + sizeof(_g4_t_v106)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v107)) > _g4_s29 ? (128u + sizeof(_g4_t_v107)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v108)) > _g4_s30 ? (144u + sizeof(_g4_t_v108)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v109)) > _g4_s31 ? (148u + sizeof(_g4_t_v109)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v110)) > _g4_s32 ? (152u + sizeof(_g4_t_v110)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v111)) > _g4_s33 ? (156u + sizeof(_g4_t_v111)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 0u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 0u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 4u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 4u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 8u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 8u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 28u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 48u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 52u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 56u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 60u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 64u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 80u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 84u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 88u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 92u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 96u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 116u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 120u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 124u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 128u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 144u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 148u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 152u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 156u);

  v3 = a3;
  v4 =g4_m128_lane<uint32_t>(a3[6], 0);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = v4 >> 1;
      v6 = a1[3] & (v4 >> 1);
      v7 = a1[1] + 16 * (v5 >> a1[2]);
      v88 = *a1;
      v8 = (__m128 *)(32 * (*(uint32_t *)(v7 + 12) & 0xC0FFFFFF) + *a1);
      v92 = *v8;
      v93 =g4_m128_lane<int32_t>(v8[1], 0);
      v94 =g4_m128_lane<int32_t>(v8[1], 1);
      v95 =g4_m128_lane<int32_t>(v8[1], 2);
      v96 =g4_m128_lane<int32_t>(v8[1], 3);
      if ( !__OFSUB__(v6 + 1, 1) && v6 != 0 )
      {
        v9 = 0;
        v10 = *(float *)&v96;
        v85 =g4_m128_lane<float>(v92, 2);
        v11 = 16 * v6;
        LODWORD(v112) =g4_m128_lane<int32_t>(v92, 1);
        v12 =g4_m128_lane<float>(v92, 3);
        v13 = *(float *)&v93;
        v14 = *(float *)&v94;
        v82 = *(float *)&v95;
        v78 =g4_m128_lane<float>(v92, 0);
        while ( 1 )
        {
          v15 = *(uint32_t *)(v7 + v9 + 28);
          v9 += 16;
          v16 = (float *)(32 * (v15 & 0xC0FFFFFF) + v88);
          *(float *)&v112 = fminf(*(float *)&v112, v16[1]);
          HIDWORD(v112) = fminf(v85, v16[2]);
          v18 = fminf(v78, *v16);
          v12 = fminf(v12, v16[3]);
          v13 = fmaxf(v13, v16[4]);
          v14 = fmaxf(v14, v16[5]);
          v19 = fmaxf(v82, v16[6]);
          v10 = fmaxf(v10, v16[7]);
g4_m128_lane<float>(v92, 0) = v18;
          *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v92) + 4) = v112;
g4_m128_lane<float>(v92, 3) = v12;
          *(float *)&v93 = v13;
          *(float *)&v94 = v14;
          v95 = LODWORD(v19);
          *(float *)&v96 = v10;
          if ( v9 == v11 )
            break;
          v78 = v18;
          v85 = *((float *)&v112 + 1);
          v82 = v19;
        }
        v3 = a3;
        v20 =g4_m128_lane<uint32_t>(a3[6], 1);
        if ( v20 == 0 )
          goto LABEL_8;
        goto LABEL_20;
      }
    }
    else
    {
      hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v4 >> 1)), &v92);
    }
  }
  else
  {
g4_m128_lane<uint64_t>(v92, 0) = 0x7F7FFFEE7F7FFFEELL;
    *(float *)&v93 = -3.40282e38f;
g4_m128_lane<uint64_t>(v92, 1) = 0x7F7FFFEE7F7FFFEELL;
    *(float *)&v94 = -3.40282e38f;
    v95 = -8388626;
    *(float *)&v96 = -3.40282e38f;
  }
  v20 =g4_m128_lane<uint32_t>(a3[6], 1);
  if ( v20 == 0 )
  {
LABEL_8:
g4_m128_lane<uint64_t>(v97, 0) = 0x7F7FFFEE7F7FFFEELL;
    *(float *)&v98 = -3.40282e38f;
g4_m128_lane<uint64_t>(v97, 1) = 0x7F7FFFEE7F7FFFEELL;
    *(float *)&v99 = -3.40282e38f;
    v100 = -8388626;
    *(float *)&v101 = -3.40282e38f;
    goto LABEL_9;
  }
LABEL_20:
  if ( (v20 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v20 >> 1)), &v97);
LABEL_9:
    v21 =g4_m128_lane<uint32_t>(v3[6], 2);
    if ( v21 != 0 )
      goto LABEL_10;
LABEL_26:
g4_m128_lane<uint64_t>(v102, 0) = 0x7F7FFFEE7F7FFFEELL;
    *(float *)&v103 = -3.40282e38f;
g4_m128_lane<uint64_t>(v102, 1) = 0x7F7FFFEE7F7FFFEELL;
    *(float *)&v104 = -3.40282e38f;
    v105 = -8388626;
    *(float *)&v106 = -3.40282e38f;
    goto LABEL_27;
  }
  v52 = v20 >> 1;
  v53 = a1[3] & (v20 >> 1);
  v54 = a1[1] + 16 * (v52 >> a1[2]);
  v90 = *a1;
  v55 = (__m128 *)(32 * (*(uint32_t *)(v54 + 12) & 0xC0FFFFFF) + *a1);
  v97 = *v55;
  v98 =g4_m128_lane<int32_t>(v55[1], 0);
  v99 =g4_m128_lane<int32_t>(v55[1], 1);
  v100 =g4_m128_lane<int32_t>(v55[1], 2);
  v101 =g4_m128_lane<int32_t>(v55[1], 3);
  if ( __OFSUB__(v53 + 1, 1) || v53 == 0 )
    goto LABEL_9;
  v56 = 0;
  v57 = *(float *)&v101;
  v87 =g4_m128_lane<float>(v97, 2);
  v58 = 16 * v53;
  LODWORD(v114) =g4_m128_lane<int32_t>(v97, 1);
  v59 =g4_m128_lane<float>(v97, 3);
  v60 = *(float *)&v98;
  v61 = *(float *)&v99;
  v80 = *(float *)&v100;
  v84 =g4_m128_lane<float>(v97, 0);
  while ( 1 )
  {
    v62 = *(uint32_t *)(v54 + v56 + 28);
    v56 += 16;
    v63 = (float *)(32 * (v62 & 0xC0FFFFFF) + v90);
    *(float *)&v114 = fminf(*(float *)&v114, v63[1]);
    HIDWORD(v114) = fminf(v87, v63[2]);
    v65 = fminf(v84, *v63);
    v59 = fminf(v59, v63[3]);
    v60 = fmaxf(v60, v63[4]);
    v61 = fmaxf(v61, v63[5]);
    v66 = fmaxf(v80, v63[6]);
    v57 = fmaxf(v57, v63[7]);
g4_m128_lane<float>(v97, 0) = v65;
    *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v97) + 4) = v114;
g4_m128_lane<float>(v97, 3) = v59;
    *(float *)&v98 = v60;
    *(float *)&v99 = v61;
    v100 = LODWORD(v66);
    *(float *)&v101 = v57;
    if ( v56 == v58 )
      break;
    v84 = v65;
    v87 = *((float *)&v114 + 1);
    v80 = v66;
  }
  v21 =g4_m128_lane<uint32_t>(v3[6], 2);
  if ( v21 == 0 )
    goto LABEL_26;
LABEL_10:
  if ( (v21 & 1) != 0 )
  {
    v22 = v21 >> 1;
    v23 = a1[3] & (v21 >> 1);
    v24 = a1[1] + 16 * (v22 >> a1[2]);
    v89 = *a1;
    v25 = (__m128 *)(32 * (*(uint32_t *)(v24 + 12) & 0xC0FFFFFF) + *a1);
    v102 = *v25;
    v103 =g4_m128_lane<int32_t>(v25[1], 0);
    v104 =g4_m128_lane<int32_t>(v25[1], 1);
    v105 =g4_m128_lane<int32_t>(v25[1], 2);
    v106 =g4_m128_lane<int32_t>(v25[1], 3);
    if ( !__OFSUB__(v23 + 1, 1) && v23 != 0 )
    {
      v26 = 0;
      v27 = *(float *)&v106;
      v86 =g4_m128_lane<float>(v102, 2);
      v28 = 16 * v23;
      LODWORD(v113) =g4_m128_lane<int32_t>(v102, 1);
      v29 =g4_m128_lane<float>(v102, 3);
      v30 = *(float *)&v103;
      v31 = *(float *)&v104;
      v79 = *(float *)&v105;
      v83 =g4_m128_lane<float>(v102, 0);
      while ( 1 )
      {
        v32 = *(uint32_t *)(v24 + v26 + 28);
        v26 += 16;
        v33 = (float *)(32 * (v32 & 0xC0FFFFFF) + v89);
        *(float *)&v113 = fminf(*(float *)&v113, v33[1]);
        HIDWORD(v113) = fminf(v86, v33[2]);
        v35 = fminf(v83, *v33);
        v29 = fminf(v29, v33[3]);
        v30 = fmaxf(v30, v33[4]);
        v31 = fmaxf(v31, v33[5]);
        v36 = fmaxf(v79, v33[6]);
        v27 = fmaxf(v27, v33[7]);
g4_m128_lane<float>(v102, 0) = v35;
        *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v102) + 4) = v113;
g4_m128_lane<float>(v102, 3) = v29;
        *(float *)&v103 = v30;
        *(float *)&v104 = v31;
        v105 = LODWORD(v36);
        *(float *)&v106 = v27;
        if ( v26 == v28 )
          break;
        v83 = v35;
        v86 = *((float *)&v113 + 1);
        v79 = v36;
      }
      v37 =g4_m128_lane<uint32_t>(v3[6], 3);
      if ( v37 == 0 )
        goto LABEL_16;
      goto LABEL_28;
    }
  }
  else
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v21 >> 1)), &v102);
  }
LABEL_27:
  v37 =g4_m128_lane<uint32_t>(v3[6], 3);
  if ( v37 == 0 )
  {
LABEL_16:
g4_m128_lane<uint64_t>(v107, 0) = 0x7F7FFFEE7F7FFFEELL;
    v38 = 2139095022;
g4_m128_lane<int32_t>(v107, 2) = 2139095022;
    v39 = 3.40282e38f;
    v40 = -3.40282e38f;
    v41 = 3.40282e38f;
    v42 = -3.40282e38f;
    v43 = -3.40282e38f;
    goto LABEL_17;
  }
LABEL_28:
  if ( (v37 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb((hkcdFourAabb::Self *)(a2 + 112 * (v37 >> 1)), &v107);
    goto LABEL_35;
  }
  v67 = v37 >> 1;
  v68 = a1[3] & (v37 >> 1);
  v69 = a1[1] + 16 * (v67 >> a1[2]);
  v91 = *a1;
  v70 = (__m128 *)(32 * (*(uint32_t *)(v69 + 12) & 0xC0FFFFFF) + *a1);
  v107 = *v70;
  v108 =g4_m128_lane<float>(v70[1], 0);
  v109 =g4_m128_lane<float>(v70[1], 1);
  v110 =g4_m128_lane<float>(v70[1], 2);
  v111 =g4_m128_lane<float>(v70[1], 3);
  if ( __OFSUB__(v68 + 1, 1) || v68 == 0 )
  {
LABEL_35:
    v38 =g4_m128_lane<int32_t>(v107, 0);
    v39 =g4_m128_lane<float>(v107, 1);
    v41 =g4_m128_lane<float>(v107, 2);
    v40 = v108;
    v42 = v109;
    v43 = v110;
    goto LABEL_17;
  }
  v71 = 0;
  v39 =g4_m128_lane<float>(v107, 1);
  v72 = 16 * v68;
  v41 =g4_m128_lane<float>(v107, 2);
  v73 =g4_m128_lane<float>(v107, 3);
  v40 = v108;
  v42 = v109;
  v43 = v110;
  v74 = v111;
  for ( i =g4_m128_lane<float>(v107, 0); ; i = v77 )
  {
    v75 = *(uint32_t *)(v69 + v71 + 28);
    v71 += 16;
    v76 = (float *)(32 * (v75 & 0xC0FFFFFF) + v91);
    v77 = fminf(i, *v76);
    v39 = fminf(v39, v76[1]);
    v41 = fminf(v41, v76[2]);
    v73 = fminf(v73, v76[3]);
    v40 = fmaxf(v40, v76[4]);
    v42 = fmaxf(v42, v76[5]);
    v43 = fmaxf(v43, v76[6]);
    v74 = fmaxf(v74, v76[7]);
g4_m128_lane<uint64_t>(v107, 0) = __PAIR64__(LODWORD(v39), LODWORD(v77));
g4_m128_lane<uint64_t>(v107, 1) = __PAIR64__(LODWORD(v73), LODWORD(v41));
    v108 = v40;
    v109 = v42;
    v110 = v43;
    v111 = v74;
    if ( v71 == v72 )
      break;
  }
  v38 = LODWORD(v77);
LABEL_17:
  v44 =g4_m128_lane<int32_t>(v97, 0);
  v45 =g4_m128_lane<int32_t>(v92, 1);
g4_m128_lane<int32_t>(*(v3), 0) =g4_m128_lane<int32_t>(v92, 0);
g4_m128_lane<int32_t>(v92, 1) = v44;
g4_m128_lane<int32_t>(v97, 0) = v45;
  v46 =g4_m128_lane<int32_t>(v92, 2);
g4_m128_lane<uint64_t>(v92, 1) = __PAIR64__(v38,g4_m128_lane<uint32_t>(v102, 0));
g4_m128_lane<int32_t>(v102, 0) = v46;
  v47 =g4_m128_lane<int32_t>(v97, 2);
g4_m128_lane<uint64_t>(v97, 1) = __PAIR64__(LODWORD(v39),g4_m128_lane<uint32_t>(v102, 1));
g4_m128_lane<int32_t>(v102, 1) = v47;
  v48 = v94;
  v94 = v98;
  v98 = v48;
  *(float *)&v96 = v40;
  v49 = v95;
  v50 = v100;
  v95 = v103;
g4_m128_lane<float>(v102, 3) = v41;
  v103 = v49;
  v100 = v104;
  v104 = v50;
  *(float *)&v101 = v42;
  *(float *)&v106 = v43;
g4_m128_lane<int32_t>(*(v3), 1) = v44;
g4_m128_lane<uint64_t>(*(v3), 1) =g4_m128_lane<uint64_t>(v92, 1);
g4_m128_lane<float>(v3[1], 0) = *(float *)&v93;
g4_m128_lane<float>(v3[1], 1) = *(float *)&v94;
g4_m128_lane<int32_t>(v3[1], 2) = v95;
g4_m128_lane<float>(v3[1], 3) = *(float *)&v96;
  v3[2] = v97;
g4_m128_lane<float>(v3[3], 0) = *(float *)&v98;
g4_m128_lane<float>(v3[3], 1) = *(float *)&v99;
g4_m128_lane<int32_t>(v3[3], 2) = v100;
g4_m128_lane<float>(v3[3], 3) = *(float *)&v101;
  v3[4] = v102;
g4_m128_lane<float>(v3[5], 0) = *(float *)&v103;
g4_m128_lane<float>(v3[5], 1) = *(float *)&v104;
g4_m128_lane<int32_t>(v3[5], 2) = v105;
  result = v106;
g4_m128_lane<float>(v3[5], 3) = *(float *)&v106;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_c3760f  (binary VA: 0x15fdcc0)
// Original: hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>>
// ----------------------------------------------------------------------------
void hkcdSimdTreeUtils::Build::IRefit::refitNode_hkcdSimdTreeUtils_Build_c3760f(hkcdSimdTreeUtils::Build::IRefit::Self *self, const hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *a2, __m128 *a3)
{
  __m128 *v3;
  uint32_t v4;
  uint32_t v5;
  uint32_t v6;
  uint32_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int64_t v13; // kr10_8
  int32_t *v14;
  int32_t v15;
  int32_t v16;
  float v17; // xmm0_4
  uint32_t v18;
  int32_t v19; // xmm7_4
  int32_t v20; // xmm6_4
  int v21; // xmm3_4
  int32_t v22; // xmm5_4
  int v23; // xmm2_4
  int v24; // xmm1_4
  int32_t v25; // xmm0_4
  int32_t v26; // xmm4_4
  int32_t v27; // xmm4_4
  int32_t v28; // xmm4_4
  float v29; // xmm4_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  uint32_t v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int32_t *v38;
  int32_t v39;
  int32_t v40;
  float v41; // xmm0_4
  uint32_t v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int64_t v48; // kr38_8
  uint32_t *v49;
  int v50; // kr40_4
  float v51; // xmm0_4
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef float _g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef uint64_t _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_i;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef __m128 *_g4_t_v104;
  typedef __m128 *_g4_t_v105;
  typedef __m128 *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef __m128 _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef __m128 _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef int _g4_t_v118;
  typedef __m128 _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  typedef __m128 _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v53)) > _g4_s1 ? (12u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v54)) > _g4_s2 ? (12u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v55)) > _g4_s3 ? (16u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v56)) > _g4_s4 ? (16u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v57)) > _g4_s5 ? (16u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v58)) > _g4_s6 ? (20u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v59)) > _g4_s7 ? (20u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v60)) > _g4_s8 ? (20u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v61)) > _g4_s9 ? (24u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v62)) > _g4_s10 ? (24u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v63)) > _g4_s11 ? (24u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v64)) > _g4_s12 ? (28u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v65)) > _g4_s13 ? (28u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v66)) > _g4_s14 ? (28u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v67)) > _g4_s15 ? (32u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v68)) > _g4_s16 ? (32u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v69)) > _g4_s17 ? (32u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v70)) > _g4_s18 ? (36u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v71)) > _g4_s19 ? (36u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v72)) > _g4_s20 ? (36u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v73)) > _g4_s21 ? (40u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v74)) > _g4_s22 ? (40u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v75)) > _g4_s23 ? (40u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v76)) > _g4_s24 ? (44u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v77)) > _g4_s25 ? (44u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v78)) > _g4_s26 ? (44u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v79)) > _g4_s27 ? (48u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v80)) > _g4_s28 ? (48u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v81)) > _g4_s29 ? (52u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v82)) > _g4_s30 ? (56u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v83)) > _g4_s31 ? (56u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v84)) > _g4_s32 ? (60u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v85)) > _g4_s33 ? (60u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v86)) > _g4_s34 ? (60u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v87)) > _g4_s35 ? (64u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v88)) > _g4_s36 ? (64u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v89)) > _g4_s37 ? (68u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_i)) > _g4_s38 ? (68u + sizeof(_g4_t_i)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v91)) > _g4_s39 ? (68u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v92)) > _g4_s40 ? (72u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v93)) > _g4_s41 ? (72u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v94)) > _g4_s42 ? (72u + sizeof(_g4_t_v94)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v95)) > _g4_s43 ? (76u + sizeof(_g4_t_v95)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v96)) > _g4_s44 ? (76u + sizeof(_g4_t_v96)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v97)) > _g4_s45 ? (76u + sizeof(_g4_t_v97)) : _g4_s45,
    _g4_s47 = (80u + sizeof(_g4_t_v98)) > _g4_s46 ? (80u + sizeof(_g4_t_v98)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v99)) > _g4_s47 ? (80u + sizeof(_g4_t_v99)) : _g4_s47,
    _g4_s49 = (80u + sizeof(_g4_t_v100)) > _g4_s48 ? (80u + sizeof(_g4_t_v100)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v101)) > _g4_s49 ? (84u + sizeof(_g4_t_v101)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v102)) > _g4_s50 ? (84u + sizeof(_g4_t_v102)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v103)) > _g4_s51 ? (84u + sizeof(_g4_t_v103)) : _g4_s51,
    _g4_s53 = (92u + sizeof(_g4_t_v104)) > _g4_s52 ? (92u + sizeof(_g4_t_v104)) : _g4_s52,
    _g4_s54 = (92u + sizeof(_g4_t_v105)) > _g4_s53 ? (92u + sizeof(_g4_t_v105)) : _g4_s53,
    _g4_s55 = (92u + sizeof(_g4_t_v106)) > _g4_s54 ? (92u + sizeof(_g4_t_v106)) : _g4_s54,
    _g4_s56 = (168u + sizeof(_g4_t_v107)) > _g4_s55 ? (168u + sizeof(_g4_t_v107)) : _g4_s55,
    _g4_s57 = (172u + sizeof(_g4_t_v108)) > _g4_s56 ? (172u + sizeof(_g4_t_v108)) : _g4_s56,
    _g4_s58 = (208u + sizeof(_g4_t_v109)) > _g4_s57 ? (208u + sizeof(_g4_t_v109)) : _g4_s57,
    _g4_s59 = (224u + sizeof(_g4_t_v110)) > _g4_s58 ? (224u + sizeof(_g4_t_v110)) : _g4_s58,
    _g4_s60 = (228u + sizeof(_g4_t_v111)) > _g4_s59 ? (228u + sizeof(_g4_t_v111)) : _g4_s59,
    _g4_s61 = (232u + sizeof(_g4_t_v112)) > _g4_s60 ? (232u + sizeof(_g4_t_v112)) : _g4_s60,
    _g4_s62 = (236u + sizeof(_g4_t_v113)) > _g4_s61 ? (236u + sizeof(_g4_t_v113)) : _g4_s61,
    _g4_s63 = (240u + sizeof(_g4_t_v114)) > _g4_s62 ? (240u + sizeof(_g4_t_v114)) : _g4_s62,
    _g4_s64 = (256u + sizeof(_g4_t_v115)) > _g4_s63 ? (256u + sizeof(_g4_t_v115)) : _g4_s63,
    _g4_s65 = (260u + sizeof(_g4_t_v116)) > _g4_s64 ? (260u + sizeof(_g4_t_v116)) : _g4_s64,
    _g4_s66 = (264u + sizeof(_g4_t_v117)) > _g4_s65 ? (264u + sizeof(_g4_t_v117)) : _g4_s65,
    _g4_s67 = (268u + sizeof(_g4_t_v118)) > _g4_s66 ? (268u + sizeof(_g4_t_v118)) : _g4_s66,
    _g4_s68 = (272u + sizeof(_g4_t_v119)) > _g4_s67 ? (272u + sizeof(_g4_t_v119)) : _g4_s67,
    _g4_s69 = (288u + sizeof(_g4_t_v120)) > _g4_s68 ? (288u + sizeof(_g4_t_v120)) : _g4_s68,
    _g4_s70 = (292u + sizeof(_g4_t_v121)) > _g4_s69 ? (292u + sizeof(_g4_t_v121)) : _g4_s69,
    _g4_s71 = (296u + sizeof(_g4_t_v122)) > _g4_s70 ? (296u + sizeof(_g4_t_v122)) : _g4_s70,
    _g4_s72 = (300u + sizeof(_g4_t_v123)) > _g4_s71 ? (300u + sizeof(_g4_t_v123)) : _g4_s71,
    _g4_s73 = (304u + sizeof(_g4_t_v124)) > _g4_s72 ? (304u + sizeof(_g4_t_v124)) : _g4_s72,
    _g4_s74 = (320u + sizeof(_g4_t_v125)) > _g4_s73 ? (320u + sizeof(_g4_t_v125)) : _g4_s73,
    _g4_s75 = (324u + sizeof(_g4_t_v126)) > _g4_s74 ? (324u + sizeof(_g4_t_v126)) : _g4_s74,
    _g4_s76 = (328u + sizeof(_g4_t_v127)) > _g4_s75 ? (328u + sizeof(_g4_t_v127)) : _g4_s75,
    _g4_s77 = (332u + sizeof(_g4_t_v128)) > _g4_s76 ? (332u + sizeof(_g4_t_v128)) : _g4_s76
  };
  alignas(16) uint8_t _g4_sf[_g4_s77];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 64u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 64u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 68u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 68u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 72u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 72u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 72u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 76u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 76u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 80u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 80u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 80u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 84u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 84u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 84u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 92u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 92u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 92u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 168u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 172u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 208u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 224u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 228u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 232u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 236u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 240u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 256u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 260u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 264u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 268u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 272u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 288u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 292u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 296u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 300u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 304u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 320u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 324u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 328u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 332u);

  v3 = a3;
  v4 =g4_m128_lane<uint32_t>(a3[6], 0);
  if ( v4 == 0 )
  {
g4_m128_lane<uint64_t>(v109, 0) = 0x7F7FFFEE7F7FFFEELL;
    v110 = -8388626;
g4_m128_lane<uint64_t>(v109, 1) = 0x7F7FFFEE7F7FFFEELL;
    v111 = -8388626;
    v112 = -8388626;
    v113 = -8388626;
    goto LABEL_15;
  }
  if ( (v4 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb(
      (const hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *)((char *)a2 + 112 * (v4 >> 1)),
      &v109);
    v3 = a3;
LABEL_15:
    v5 =g4_m128_lane<uint32_t>(v3[6], 1);
    if ( v5 == 0 )
      goto LABEL_4;
    goto LABEL_16;
  }
  hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>::opCall(
    self,
    v4 >> 1,
    (hkAabb::Self *)&v109);
  v3 = a3;
  v5 =g4_m128_lane<uint32_t>(a3[6], 1);
  if ( v5 == 0 )
  {
LABEL_4:
g4_m128_lane<uint64_t>(v114, 0) = 0x7F7FFFEE7F7FFFEELL;
    v115 = -3.40282e38f;
g4_m128_lane<uint64_t>(v114, 1) = 0x7F7FFFEE7F7FFFEELL;
    v116 = -3.40282e38f;
    v117 = -3.40282e38f;
    *(float *)&v118 = -3.40282e38f;
    goto LABEL_5;
  }
LABEL_16:
  v105 = v3;
  if ( (v5 & 1) == 0 )
  {
    hkcdFourAabb::getCompoundAabb(
      (const hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *)((char *)a2 + 112 * (v5 >> 1)),
      &v114);
    v3 = v105;
LABEL_5:
    v6 =g4_m128_lane<uint32_t>(v3[6], 2);
    if ( v6 != 0 )
      goto LABEL_6;
LABEL_22:
g4_m128_lane<uint64_t>(v119, 0) = 0x7F7FFFEE7F7FFFEELL;
    v120 = -3.40282e38f;
g4_m128_lane<uint64_t>(v119, 1) = 0x7F7FFFEE7F7FFFEELL;
    v121 = -3.40282e38f;
    v122 = -3.40282e38f;
    *(float *)&v123 = -3.40282e38f;
    goto LABEL_23;
  }
  v32 = v5 >> 1;
  v33 = v32 & *((uint32_t *)self + 30);
  v34 = 16 * (v32 >> *((uint32_t *)self + 29));
  hkIntSpaceUtil::restoreAabb(
    self,
    (const hkAabb16::Self *)(*((uint32_t *)self + 24)
                     + *((uint32_t *)self + 25) * (*(uint32_t *)(*((uint32_t *)self + 28) + v34 + 12) & 0xC0FFFFFF)),
    (hkAabb::Self *)&v114);
  v3 = v105;
  if ( v33 + 1 <= 1 )
    goto LABEL_5;
  v35 = *((uint32_t *)self + 25);
  v59 = *((uint32_t *)self + 24);
  v102 = *((float *)self + 12);
  v99 = *((float *)self + 13);
  v96 = *((float *)self + 14);
  v93 = *((float *)self + 15);
  v56 = *(float *)self;
  v62 = *((float *)self + 1);
  v65 = *((float *)self + 2);
  v68 = *((float *)self + 3);
  v85 =g4_m128_lane<float>(v114, 1);
  v74 =g4_m128_lane<float>(v114, 0);
  v80 =g4_m128_lane<uint64_t>(v114, 1);
  v87 = v115;
  v82 = v116;
  v36 = v34 + *((uint32_t *)self + 28);
  v71 = 16 * v33;
  v37 = 0;
  v53 = v36;
  v77 = v117;
  for ( i = *(float *)&v118; ; i = v41 )
  {
    v38 = (int32_t *)(v59 + v35 * (*(uint32_t *)(v36 + v37 + 28) & 0xC0FFFFFF));
    v37 += 16;
    v39 = *v38;
g4_m128_lane<int32_t>(v124, 1) = v38[1];
g4_m128_lane<int32_t>(v124, 0) = v39;
    v40 = v38[3];
g4_m128_lane<int32_t>(v124, 2) = v38[2];
g4_m128_lane<int32_t>(v124, 3) = v40;
g4_m128_lane<uint64_t>(v114, 0) = __PAIR64__(
                         COERCE_UNSIGNED_INT(fminf(v85, (float)((float)HIWORD(v39) * v99) - v62)),
                         COERCE_UNSIGNED_INT(fminf(v74, (float)((float)(uint16_t)v39 * v102) - v56)));
g4_m128_lane<uint64_t>(v114, 1) = __PAIR64__(
                         COERCE_UNSIGNED_INT(fminf(*((float *)&v80 + 1), (float)((float)g4_m128_lane<uint16_t>(v124, 3) * v93) - v68)),
                         COERCE_UNSIGNED_INT(fminf(*(float *)&v80, (float)((float)g4_m128_lane<uint16_t>(v124, 2) * v96) - v65)));
    v115 = fmaxf(v87, (float)((float)g4_m128_lane<uint16_t>(v124, 4) * v102) - v56);
    v116 = fmaxf(v82, (float)((float)g4_m128_lane<uint16_t>(v124, 5) * v99) - v62);
    v117 = fmaxf(v77, (float)((float)(uint16_t)v40 * v96) - v65);
    v41 = fmaxf(i, (float)((float)HIWORD(v40) * v93) - v68);
    *(float *)&v118 = v41;
    if ( v37 == v71 )
      break;
    v74 =g4_m128_lane<float>(v114, 0);
    v36 = v53;
    v80 =g4_m128_lane<uint64_t>(v114, 1);
    v85 =g4_m128_lane<float>(v114, 1);
    v87 = v115;
    v82 = v116;
    v77 = v117;
  }
  v3 = v105;
  v6 =g4_m128_lane<uint32_t>(v105[6], 2);
  if ( v6 == 0 )
    goto LABEL_22;
LABEL_6:
  v104 = v3;
  if ( (v6 & 1) != 0 )
  {
    v7 = v6 >> 1;
    v8 = v7 & *((uint32_t *)self + 30);
    v9 = 16 * (v7 >> *((uint32_t *)self + 29));
    hkIntSpaceUtil::restoreAabb(
      self,
      (const hkAabb16::Self *)(*((uint32_t *)self + 24)
                       + *((uint32_t *)self + 25) * (*(uint32_t *)(*((uint32_t *)self + 28) + v9 + 12) & 0xC0FFFFFF)),
      (hkAabb::Self *)&v119);
    v3 = v104;
    if ( v8 + 1 > 1 )
    {
      v64 = *((uint32_t *)self + 24);
      v101 = *((float *)self + 12);
      v98 = *((float *)self + 13);
      v95 = *((float *)self + 14);
      v92 = *((float *)self + 15);
      v61 = *(float *)self;
      v58 = *((float *)self + 1);
      v70 = *((float *)self + 2);
      v67 = *((float *)self + 3);
      v73 =g4_m128_lane<float>(v119, 0);
      v81 =g4_m128_lane<float>(v119, 3);
      v79 = v120;
      v76 = v121;
      v10 = v9 + *((uint32_t *)self + 28);
      v11 = *((uint32_t *)self + 25);
      v12 = 0;
      v55 = v10;
      v89 = v122;
      v84 = *(float *)&v123;
      v52 = 16 * v8;
      v13 = *(int64_t *)((char *)g4_m128_ptr<int64_t>(v119) + 4);
      while ( 1 )
      {
        v14 = (int32_t *)(v64 + v11 * (*(uint32_t *)(v10 + v12 + 28) & 0xC0FFFFFF));
        v12 += 16;
        v15 = *v14;
g4_m128_lane<int32_t>(v124, 1) = v14[1];
g4_m128_lane<int32_t>(v124, 0) = v15;
        v16 = v14[3];
g4_m128_lane<int32_t>(v124, 2) = v14[2];
g4_m128_lane<int32_t>(v124, 3) = v16;
g4_m128_lane<uint64_t>(v119, 0) = __PAIR64__(
                             COERCE_UNSIGNED_INT(fminf(*(float *)&v13, (float)((float)HIWORD(v15) * v98) - v58)),
                             COERCE_UNSIGNED_INT(fminf(v73, (float)((float)(uint16_t)v15 * v101) - v61)));
g4_m128_lane<uint64_t>(v119, 1) = __PAIR64__(
                             COERCE_UNSIGNED_INT(fminf(v81, (float)((float)g4_m128_lane<uint16_t>(v124, 3) * v92) - v67)),
                             COERCE_UNSIGNED_INT(fminf(*((float *)&v13 + 1), (float)((float)g4_m128_lane<uint16_t>(v124, 2) * v95) - v70)));
        v120 = fmaxf(v79, (float)((float)g4_m128_lane<uint16_t>(v124, 4) * v101) - v61);
        v121 = fmaxf(v76, (float)((float)g4_m128_lane<uint16_t>(v124, 5) * v98) - v58);
        v122 = fmaxf(v89, (float)((float)(uint16_t)v16 * v95) - v70);
        v17 = fmaxf(v84, (float)((float)HIWORD(v16) * v92) - v67);
        *(float *)&v123 = v17;
        if ( v12 == v52 )
          break;
        v73 =g4_m128_lane<float>(v119, 0);
        v10 = v55;
        v13 = *(int64_t *)((char *)g4_m128_ptr<int64_t>(v119) + 4);
        v81 =g4_m128_lane<float>(v119, 3);
        v79 = v120;
        v76 = v121;
        v89 = v122;
        v84 = v17;
      }
      v3 = v104;
      v18 =g4_m128_lane<uint32_t>(v104[6], 3);
      if ( v18 == 0 )
        goto LABEL_12;
      goto LABEL_24;
    }
  }
  else
  {
    hkcdFourAabb::getCompoundAabb(
      (const hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *)((char *)a2 + 112 * (v6 >> 1)),
      &v119);
    v3 = v104;
  }
LABEL_23:
  v18 =g4_m128_lane<uint32_t>(v3[6], 3);
  if ( v18 == 0 )
  {
LABEL_12:
g4_m128_lane<uint64_t>(v124, 0) = 0x7F7FFFEE7F7FFFEELL;
    v19 = 2139095022;
g4_m128_lane<int32_t>(v124, 2) = 2139095022;
    v20 = 2139095022;
    v21 = -8388626;
    v22 = 2139095022;
    v23 = -8388626;
    v24 = -8388626;
    goto LABEL_13;
  }
LABEL_24:
  v106 = v3;
  if ( (v18 & 1) != 0 )
  {
    v42 = v18 >> 1;
    v43 = v42 & *((uint32_t *)self + 30);
    v44 = 16 * (v42 >> *((uint32_t *)self + 29));
    hkIntSpaceUtil::restoreAabb(
      self,
      (const hkAabb16::Self *)(*((uint32_t *)self + 24)
                       + *((uint32_t *)self + 25) * (*(uint32_t *)(*((uint32_t *)self + 28) + v44 + 12) & 0xC0FFFFFF)),
      (hkAabb::Self *)&v124);
    v3 = v106;
    if ( v43 + 1 <= 1 )
    {
      v19 =g4_m128_lane<int32_t>(v124, 0);
      v20 =g4_m128_lane<int32_t>(v124, 1);
      v22 =g4_m128_lane<int32_t>(v124, 2);
      v21 = LODWORD(v125);
      v23 = LODWORD(v126);
      v24 = LODWORD(v127);
    }
    else
    {
      v45 = *((uint32_t *)self + 25);
      v57 = *((uint32_t *)self + 24);
      v103 = *((float *)self + 12);
      v100 = *((float *)self + 13);
      v97 = *((float *)self + 14);
      v94 = *((float *)self + 15);
      v66 = *(float *)self;
      v63 = *((float *)self + 1);
      v60 = *((float *)self + 2);
      v69 = *((float *)self + 3);
      v83 =g4_m128_lane<float>(v124, 0);
      v78 =g4_m128_lane<float>(v124, 3);
      v75 = v125;
      v88 = v126;
      v46 = v44 + *((uint32_t *)self + 28);
      v72 = 16 * v43;
      v47 = 0;
      v54 = v46;
      v86 = v127;
      v91 = v128;
      v48 = *(int64_t *)((char *)g4_m128_ptr<int64_t>(v124) + 4);
      while ( 1 )
      {
        v49 = (uint32_t *)(v57 + v45 * (*(uint32_t *)(v46 + v47 + 28) & 0xC0FFFFFF));
        v47 += 16;
        v107 = v49[2];
        v50 = v49[1];
        v108 = v49[3];
g4_m128_lane<uint64_t>(v124, 0) = __PAIR64__(
                             COERCE_UNSIGNED_INT(fminf(*(float *)&v48, (float)((float)(uint16_t)HIWORD(*v49)
                                                                             * v100) - v63)),
                             COERCE_UNSIGNED_INT(fminf(v83, (float)((float)(uint16_t)*v49 * v103) - v66)));
        v20 =g4_m128_lane<int32_t>(v124, 1);
        v19 =g4_m128_lane<int32_t>(v124, 0);
g4_m128_lane<uint64_t>(v124, 1) = __PAIR64__(
                             COERCE_UNSIGNED_INT(fminf(v78, (float)((float)HIWORD(v50) * v94) - v69)),
                             COERCE_UNSIGNED_INT(fminf(*((float *)&v48 + 1), (float)((float)(uint16_t)v50 * v97) - v60)));
        v22 =g4_m128_lane<int32_t>(v124, 2);
        v125 = fmaxf(v75, (float)((float)(uint16_t)v107 * v103) - v66);
        v21 = LODWORD(v125);
        v126 = fmaxf(v88, (float)((float)HIWORD(v107) * v100) - v63);
        v23 = LODWORD(v126);
        v127 = fmaxf(v86, (float)((float)(uint16_t)v108 * v97) - v60);
        v24 = LODWORD(v127);
        v51 = fmaxf(v91, (float)((float)HIWORD(v108) * v94) - v69);
        v128 = v51;
        if ( v47 == v72 )
          break;
        v83 =g4_m128_lane<float>(v124, 0);
        v46 = v54;
        v48 = *(int64_t *)((char *)g4_m128_ptr<int64_t>(v124) + 4);
        v78 =g4_m128_lane<float>(v124, 3);
        v75 = v125;
        v88 = v126;
        v86 = v127;
        v91 = v51;
      }
      v3 = v106;
    }
  }
  else
  {
    hkcdFourAabb::getCompoundAabb(
      (const hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *)((char *)a2 + 112 * (v18 >> 1)),
      &v124);
    v19 =g4_m128_lane<int32_t>(v124, 0);
    v3 = v106;
    v20 =g4_m128_lane<int32_t>(v124, 1);
    v22 =g4_m128_lane<int32_t>(v124, 2);
    v21 = LODWORD(v125);
    v23 = LODWORD(v126);
    v24 = LODWORD(v127);
  }
LABEL_13:
  v25 =g4_m128_lane<int32_t>(v114, 0);
  v26 =g4_m128_lane<int32_t>(v109, 1);
g4_m128_lane<int32_t>(*(v3), 0) =g4_m128_lane<int32_t>(v109, 0);
g4_m128_lane<int32_t>(v109, 1) = v25;
g4_m128_lane<int32_t>(v114, 0) = v26;
  v27 =g4_m128_lane<int32_t>(v109, 2);
g4_m128_lane<uint64_t>(v109, 1) = __PAIR64__(v19,g4_m128_lane<uint32_t>(v119, 0));
g4_m128_lane<int32_t>(v119, 0) = v27;
  v28 =g4_m128_lane<int32_t>(v114, 2);
g4_m128_lane<uint64_t>(v114, 1) = __PAIR64__(v20,g4_m128_lane<uint32_t>(v119, 1));
g4_m128_lane<int32_t>(v119, 1) = v28;
  v29 = *(float *)&v111;
  v111 = LODWORD(v115);
  v115 = v29;
  v113 = v21;
  v30 = *(float *)&v112;
  v31 = v117;
  v112 = LODWORD(v120);
g4_m128_lane<int32_t>(v119, 3) = v22;
  v120 = v30;
  v117 = v121;
  v121 = v31;
  v118 = v23;
  v123 = v24;
g4_m128_lane<int32_t>(*(v3), 1) = v25;
g4_m128_lane<uint64_t>(*(v3), 1) =g4_m128_lane<uint64_t>(v109, 1);
g4_m128_lane<int32_t>(v3[1], 0) = v110;
g4_m128_lane<int32_t>(v3[1], 1) = v111;
g4_m128_lane<int32_t>(v3[1], 2) = v112;
g4_m128_lane<int32_t>(v3[1], 3) = v113;
  v3[2] = v114;
g4_m128_lane<float>(v3[3], 0) = v115;
g4_m128_lane<float>(v3[3], 1) = v116;
g4_m128_lane<float>(v3[3], 2) = v117;
g4_m128_lane<float>(v3[3], 3) = *(float *)&v118;
  v3[4] = v119;
g4_m128_lane<float>(v3[5], 0) = v120;
g4_m128_lane<float>(v3[5], 1) = v121;
g4_m128_lane<float>(v3[5], 2) = v122;
g4_m128_lane<float>(v3[5], 3) = *(float *)&v123;
}

// ----------------------------------------------------------------------------
// Function: sub_1604490  (binary VA: 0x1604490)
// Original: sub_1604490
// ----------------------------------------------------------------------------
int sub_1604490(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_16044B0  (binary VA: 0x16044b0)
// Original: sub_16044B0
// ----------------------------------------------------------------------------
int sub_16044B0(int a1, int a2)
{
  return hkcdDynamicAabbTree::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1604500  (binary VA: 0x1604500)
// Original: sub_1604500
// ----------------------------------------------------------------------------
uint32_t * sub_1604500()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkcdDynamicAabbTreeClass,
    "hkcdDynamicAabbTree",
    (const hkClass::Self *)&hkReferencedObjectClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdDynamicAabbTree::Members,
    2,
    nullptr,
    nullptr,
    0,
    1u);
  hkcdDynamicAabbTree::Construct(&v1, 0);
  hkcdDynamicAabbTreeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdDynamicAabbTree");
  hkcdDynamicAabbTreeTypeInfo[2] = (uint32_t)(uintptr_t)(sub_16044B0);
  hkcdDynamicAabbTreeTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1604490);
  hkcdDynamicAabbTreeTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdDynamicAabbTree");
  hkcdDynamicAabbTreeTypeInfo[4] = v1;
  hkcdDynamicAabbTreeTypeInfo[5] = 16;
  return hkcdDynamicAabbTreeTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_c276a4  (binary VA: 0x1605250)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>>>
// ----------------------------------------------------------------------------
int32_t hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_c276a4(unsigned int *a1, int32_t *a2, float *a3)
{
  int32_t result;
  float v4; // xmm6_4
  float v5; // xmm1_4
  float v6; // xmm7_4
  float v7; // xmm4_4
  __m128 v8;
  float v9; // xmm3_4
  __m128i v10;
  float v11;
  float v12; // xmm5_4
  int v13;
  __m128 v14;
  __m128 v15;
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v29;
  int v30;
  int v31;
  uint8_t v32;
  int v33;
  uint8_t v34;
  uint8_t v35; // si
  int v36;
  int v37;
  float v38; // xmm4_4
  float v39; // xmm1_4
  __m128i v40;
  float v41; // xmm3_4
  __m128i v42;
  float v43; // xmm0_4
  unsigned int v44;
  __m128i v45;
  float v46; // xmm7_4
  __m128i v47;
  __m128i v48;
  float v49; // xmm1_4
  int v50;
  __m128i v51;
  float v52;
  __m128i v53;
  float v54; // xmm4_4
  float v55;
  float v56;
  float v57;
  float v58; // xmm5_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  float v61; // xmm7_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm2_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  float v67; // xmm0_4
  float v68; // xmm3_4
  float v69; // xmm2_4
  float v70; // xmm6_4
  float v71; // xmm7_4
  float v72; // xmm1_4
  float v73; // xmm0_4
  __m128 v74;
  __m128 v75;
  bool v76;
  __m128 v77;
  float v78; // xmm7_4
  float v79; // xmm6_4
  float v80; // xmm5_4
  float v81; // xmm4_4
  float v82; // xmm7_4
  float v83; // xmm6_4
  float v84; // xmm0_4
  float v85; // xmm3_4
  float v86; // xmm7_4
  float v87; // xmm6_4
  int v88;
  int32_t v89; // xmm0_4
  char v90;
  float v91;
  int32_t v92;
  int v93;
  int32_t *v94;
  int32_t v95;
  int32_t v96;
  int32_t v97;
  uint32_t *v98;
  uint64_t *v99;
  uint64_t *v100;
  int v101;
  typedef uint64_t *_g4_t_v102;
  typedef int32_t _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef int _g4_t_v109;
  typedef float _g4_t_v110;
  typedef int _g4_t_v111;
  typedef float _g4_t_v112;
  typedef int _g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef __m128 _g4_t_v122;
  typedef unsigned int _g4_t_v123;
  typedef int32_t _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef unsigned int _g4_t_v127;
  typedef int32_t _g4_t_v128;
  typedef int _g4_t_v129;
  typedef uint8_t *_g4_t_v130;
  typedef uint64_t _g4_t_v131;
  typedef unsigned int _g4_t_v132;
  typedef int32_t _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef int32_t _g4_t_v137;
  typedef int _g4_t_v138;
  typedef uint8_t *_g4_t_v139;
  typedef uint64_t _g4_t_v140;
  typedef unsigned int _g4_t_v141;
  typedef int32_t _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef unsigned int _g4_t_v145;
  typedef int32_t _g4_t_v146;
  typedef int _g4_t_v147;
  typedef uint8_t *_g4_t_v148;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v102)) > _g4_s0 ? (4u + sizeof(_g4_t_v102)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v103)) > _g4_s1 ? (28u + sizeof(_g4_t_v103)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v104)) > _g4_s2 ? (32u + sizeof(_g4_t_v104)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v105)) > _g4_s3 ? (32u + sizeof(_g4_t_v105)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v106)) > _g4_s4 ? (36u + sizeof(_g4_t_v106)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v107)) > _g4_s5 ? (36u + sizeof(_g4_t_v107)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v108)) > _g4_s6 ? (40u + sizeof(_g4_t_v108)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v109)) > _g4_s7 ? (44u + sizeof(_g4_t_v109)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v110)) > _g4_s8 ? (44u + sizeof(_g4_t_v110)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v111)) > _g4_s9 ? (48u + sizeof(_g4_t_v111)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v112)) > _g4_s10 ? (48u + sizeof(_g4_t_v112)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v113)) > _g4_s11 ? (52u + sizeof(_g4_t_v113)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v114)) > _g4_s12 ? (52u + sizeof(_g4_t_v114)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v115)) > _g4_s13 ? (52u + sizeof(_g4_t_v115)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v116)) > _g4_s14 ? (56u + sizeof(_g4_t_v116)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v117)) > _g4_s15 ? (56u + sizeof(_g4_t_v117)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v118)) > _g4_s16 ? (56u + sizeof(_g4_t_v118)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v119)) > _g4_s17 ? (60u + sizeof(_g4_t_v119)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v120)) > _g4_s18 ? (60u + sizeof(_g4_t_v120)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v121)) > _g4_s19 ? (60u + sizeof(_g4_t_v121)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v122)) > _g4_s20 ? (64u + sizeof(_g4_t_v122)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v123)) > _g4_s21 ? (80u + sizeof(_g4_t_v123)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v124)) > _g4_s22 ? (84u + sizeof(_g4_t_v124)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v125)) > _g4_s23 ? (88u + sizeof(_g4_t_v125)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v126)) > _g4_s24 ? (92u + sizeof(_g4_t_v126)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v127)) > _g4_s25 ? (96u + sizeof(_g4_t_v127)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v128)) > _g4_s26 ? (100u + sizeof(_g4_t_v128)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v129)) > _g4_s27 ? (104u + sizeof(_g4_t_v129)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v130)) > _g4_s28 ? (108u + sizeof(_g4_t_v130)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v131)) > _g4_s29 ? (120u + sizeof(_g4_t_v131)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v132)) > _g4_s30 ? (128u + sizeof(_g4_t_v132)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v133)) > _g4_s31 ? (132u + sizeof(_g4_t_v133)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v134)) > _g4_s32 ? (136u + sizeof(_g4_t_v134)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v135)) > _g4_s33 ? (140u + sizeof(_g4_t_v135)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v136)) > _g4_s34 ? (144u + sizeof(_g4_t_v136)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v137)) > _g4_s35 ? (148u + sizeof(_g4_t_v137)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v138)) > _g4_s36 ? (152u + sizeof(_g4_t_v138)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v139)) > _g4_s37 ? (156u + sizeof(_g4_t_v139)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v140)) > _g4_s38 ? (168u + sizeof(_g4_t_v140)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v141)) > _g4_s39 ? (176u + sizeof(_g4_t_v141)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v142)) > _g4_s40 ? (180u + sizeof(_g4_t_v142)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v143)) > _g4_s41 ? (184u + sizeof(_g4_t_v143)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v144)) > _g4_s42 ? (188u + sizeof(_g4_t_v144)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v145)) > _g4_s43 ? (192u + sizeof(_g4_t_v145)) : _g4_s43,
    _g4_s45 = (196u + sizeof(_g4_t_v146)) > _g4_s44 ? (196u + sizeof(_g4_t_v146)) : _g4_s44,
    _g4_s46 = (200u + sizeof(_g4_t_v147)) > _g4_s45 ? (200u + sizeof(_g4_t_v147)) : _g4_s45,
    _g4_s47 = (204u + sizeof(_g4_t_v148)) > _g4_s46 ? (204u + sizeof(_g4_t_v148)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 4u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 32u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 32u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 36u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 36u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 40u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 44u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 44u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 48u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 52u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 52u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 60u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 60u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 64u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 80u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 84u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 88u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 92u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 96u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 100u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 104u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 108u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 120u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 128u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 132u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 136u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 140u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 144u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 148u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 152u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 156u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 168u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 176u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 180u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 184u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 188u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 192u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 196u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 200u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 204u);

  result = (int32_t)(uintptr_t)(a1);
  if ( a1[1] != 0 )
  {
    v129 = 0;
g4_m128_raw(v14) = *((unsigned int *)a3 + 16);
    v4 = a3[4];
    v5 = a3[12];
    v6 = a3[11];
    v103 = a2[1];
g4_m128_lane<int32_t>(v122, 2) = a1[4];
g4_m128_raw(v8) =g4_m128_lane<uint32_t>(v122, 2);
g4_m128_lane<int32_t>(v122, 3) = a1[5];
    v123 = a1[6];
    v7 = *(float *)&v123 -g4_m128_lane<float>(v14, 0);
g4_m128_lane<float>(v8, 0) = (float)((float)(g4_m128_lane<float>(v122, 2) -g4_m128_lane<float>(v14, 0)) - v4) * v5;
    v124 = a1[7];
    v125 = *((float *)a1 + 8);
    v126 = *((float *)a1 + 9);
    v9 = v126 +g4_m128_lane<float>(v14, 0);
    v127 = a1[10];
g4_m128_raw(v10) = v127;
    *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)&v127 +g4_m128_lane<float>(v14, 0);
    v128 = a1[11];
    result = (int32_t)(uintptr_t)(a1);
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    v12 =g4_m128_lane<float>(v122, 3) -g4_m128_lane<float>(v14, 0);
    v13 = *a1;
    v130 = (uint8_t *)*a1;
g4_m128_lane<float>(v14, 0) = (float)((float)(g4_m128_lane<float>(v14, 0) + v125) - v4) * v5;
g4_m128_lane<int32_t>(v15, 0) = 0;
g4_m128_lane<int32_t>(v122, 0) = 0;
    if (g4_m128_lane<float>(v8, 0) >g4_m128_lane<float>(v14, 0) )
    {
      v16 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v14, v15), v14), 0);
      v17 = fminf(v6,g4_m128_lane<float>(v8, 0));
    }
    else
    {
      v16 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v8, v15), v8), 0);
      v17 = fminf(v6,g4_m128_lane<float>(v14, 0));
    }
    v18 = a3[13];
    v19 = (float)(v12 - a3[5]) * v18;
    v20 = (float)(v9 - a3[5]) * v18;
    if ( v19 > v20 )
    {
      v21 = fmaxf(v16, v20);
      v22 = fminf(v17, v19);
    }
    else
    {
      v21 = fmaxf(v16, v19);
      v22 = fminf(v17, v20);
    }
    v23 = a3[6];
    v24 = a3[14];
    v25 = (float)(v7 - v23) * v24;
    v26 = (float)(v11 - v23) * v24;
    if ( v25 > v26 )
    {
      v27 = fmaxf(v21, v26);
      v28 = fminf(v22, v25);
    }
    else
    {
      v27 = fmaxf(v21, v25);
      v28 = fminf(v22, v26);
    }
    if ( v28 >= v27 )
    {
g4_m128_lane<float>(v122, 1) = v6;
      v29 = v13;
      while ( 1 )
      {
        v90 = *(uint8_t *)(v29 + 3);
        if ( v90 < 0 )
        {
          v138 = v129 + 1;
          v147 = v129 + 2 * (*(uint16_t *)(v29 + 4) | ((v90 & 0x7F) << 16));
          v30 = *a1;
          v139 = (uint8_t *)(*a1 + 6 * (v129 + 1));
          v148 = (uint8_t *)(v30 + 6 * v147);
          v31 = (int)*v139 >> 4;
          v111 = *v139 & 0xF;
          v32 = v139[1];
          v33 = v32;
          v109 = v32 & 0xF;
          v34 = v139[2];
          v113 = v33;
          v119 = *v148;
          v35 = v148[1];
          v106 = v119 & 0xF;
          v116 = v35;
          v104 = v35 & 0xF;
          LOBYTE(v30) = v148[2];
          v36 = (uint8_t)v30;
          v37 = v30 & 0xF;
          v38 = (float)(v126 -g4_m128_lane<float>(v122, 3)) * 0.0044247787f;
          v39 = (float)(v125 -g4_m128_lane<float>(v122, 2)) * 0.0044247787f;
g4_m128_raw(v40) =g4_m128_lane<uint32_t>(v122, 0);
          v133 =g4_m128_lane<int32_t>(v122, 0);
          v41 = 0.0044247787f * (float)(*(float *)&v127 - *(float *)&v123);
          v137 =g4_m128_lane<int32_t>(v122, 0);
          *(float *)g4_m128_ptr<int32_t>(v40) = (float)((v113 >> 4) * (v113 >> 4));
          *(float *)&v114 = (float)((float)(((int)v34 >> 4) * ((int)v34 >> 4)) * v41) + *(float *)&v123;
          v132 = v114;
          v134 = v125 - (float)((float)(v111 * v111) * v39);
g4_m128_raw(v42) = LODWORD(v126);
          *(float *)g4_m128_ptr<int32_t>(v42) = v126 - (float)((float)(v109 * v109) * v38);
          v43 = (float)((v34 & 0xF) * (v34 & 0xF)) * v41;
          v44 = _mm_cvtsi128_si32(v42);
          v135 = *(float *)g4_m128_ptr<int32_t>(v42);
g4_m128_raw(v45) = v127;
          v46 = (float)((float)(v31 * v31) * v39) +g4_m128_lane<float>(v122, 2);
          *(float *)g4_m128_ptr<int32_t>(v45) = *(float *)&v127 - v43;
g4_m128_raw(v47) =g4_m128_lane<uint32_t>(v122, 0);
          v142 =g4_m128_lane<int32_t>(v122, 0);
          v146 =g4_m128_lane<int32_t>(v122, 0);
          v136 = *(float *)g4_m128_ptr<int32_t>(v45);
          *(float *)&v131 = v46;
          *(float *)&v140 = (float)((float)((v119 >> 4) * (v119 >> 4)) * v39) +g4_m128_lane<float>(v122, 2);
          v120 = 0.0044247787f * (float)(*(float *)&v127 - *(float *)&v123);
          *((float *)&v131 + 1) = (float)(*(float *)g4_m128_ptr<int32_t>(v40) * v38) +g4_m128_lane<float>(v122, 3);
          *((float *)&v140 + 1) = (float)((float)((v116 >> 4) * (v116 >> 4)) * v38) +g4_m128_lane<float>(v122, 3);
          *(float *)&v141 = (float)((float)((v36 >> 4) * (v36 >> 4)) * v120) + *(float *)&v123;
g4_m128_raw(v48) = v127;
          v117 = v125 - (float)(v39 * (float)(v106 * v106));
          v143 = v117;
          v144 = v126 - (float)((float)(v104 * v104) * v38);
          *(float *)g4_m128_ptr<int32_t>(v48) = *(float *)&v127 - (float)((float)(v37 * v37) * v120);
          v49 = a3[16];
          *(float *)g4_m128_ptr<int32_t>(v40) = *((float *)&v131 + 1) - v49;
          *(float *)g4_m128_ptr<int32_t>(v47) = *(float *)&v141 - v49;
          *(float *)&v50 = COERCE_FLOAT(_mm_cvtsi128_si32(v48));
          v145 =g4_m128_lane<uint32_t>(v48, 0);
          v51 = _mm_cvtsi32_si128(v44);
          v52 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
          *(float *)g4_m128_ptr<int32_t>(v51) = *(float *)g4_m128_ptr<int32_t>(v51) + v49;
g4_m128_raw(v53) = v114;
          *(float *)g4_m128_ptr<int32_t>(v53) = *(float *)&v114 - v49;
          v115 = v144 + v49;
          v107 = *(float *)&v140 - v49;
          v54 = *(float *)&v50;
          v55 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
          v56 = COERCE_FLOAT(_mm_cvtsi128_si32(v51));
          v57 = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
          v105 = *((float *)&v140 + 1) - v49;
          v118 = v117 + v49;
          v58 = a3[4];
          v108 = v54 + v49;
          v59 = a3[12];
          v110 = COERCE_FLOAT(_mm_cvtsi128_si32(v45)) + v49;
          v60 = (float)((float)(v46 - v49) - v58) * v59;
          v61 = (float)((float)(v134 + v49) - v58) * v59;
          if ( v60 > v61 )
          {
            v62 = fmaxf(g4_m128_lane<float>(v122, 0), v61);
            v63 = fminf(g4_m128_lane<float>(v122, 1), v60);
          }
          else
          {
            v62 = fmaxf(g4_m128_lane<float>(v122, 0), v60);
            v63 = fminf(g4_m128_lane<float>(v122, 1), v61);
          }
          v112 = a3[13];
          v121 = a3[5];
          v64 = (float)(v52 - v121) * v112;
          v65 = (float)(v56 - v121) * v112;
          if ( v64 > v65 )
          {
            v66 = fmaxf(v62, v65);
            v67 = fminf(v63, v64);
          }
          else
          {
            v66 = fmaxf(v62, v64);
            v67 = fminf(v63, v65);
          }
          v68 = a3[6];
          v69 = a3[14];
          v70 = (float)(v57 - v68) * v69;
          v71 = (float)(v110 - v68) * v69;
          if ( v70 > v71 )
          {
            v72 = fmaxf(v66, v71);
            v73 = fminf(v67, v70);
          }
          else
          {
            v72 = fmaxf(v66, v70);
            v73 = fminf(v67, v71);
          }
g4_m128_raw(v74) = LODWORD(v118);
g4_m128_raw(v77) = LODWORD(v107);
g4_m128_lane<float>(v74, 0) = v118 - v58;
g4_m128_lane<float>(v77, 0) = v107 - v58;
          v75 = v74;
g4_m128_lane<float>(v75, 0) =g4_m128_lane<float>(v74, 0) * v59;
          v76 = v73 >= v72;
g4_m128_lane<float>(v77, 0) =g4_m128_lane<float>(v77, 0) * v59;
          if (g4_m128_lane<float>(v77, 0) > (float)(g4_m128_lane<float>(v74, 0) * v59) )
          {
            v78 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v75, v122), v75), 0);
            v79 = fminf(g4_m128_lane<float>(v122, 1),g4_m128_lane<float>(v77, 0));
          }
          else
          {
            v78 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v77, v122), v77), 0);
            v79 = fminf(g4_m128_lane<float>(v122, 1),g4_m128_lane<float>(v75, 0));
          }
          v80 = (float)(v105 - v121) * v112;
          v81 = (float)(v115 - v121) * v112;
          if ( v80 > v81 )
          {
            v82 = fmaxf(v78, v81);
            v83 = fminf(v79, v80);
          }
          else
          {
            v82 = fmaxf(v78, v80);
            v83 = fminf(v79, v81);
          }
          v84 = (float)(v55 - v68) * v69;
          v85 = (float)(v108 - v68) * v69;
          if ( v84 > v85 )
          {
            v86 = fmaxf(v82, v85);
            v87 = fminf(v83, v84);
          }
          else
          {
            v86 = fmaxf(v82, v84);
            v87 = fminf(v83, v85);
          }
          v88 = v76 | (v87 >= v86 ? 2 : 0);
          switch ( v88 )
          {
            case 3:
              v94 = a2;
              v95 = v72 > v86;
              *((uint32_t *)a3 + 17) = v95;
              v96 = a2[1];
              if ( v96 == (a2[2] & 0x3FFFFFFF) )
              {
g4_m128_lane<int32_t>(v122, 1) = v72 > v86;
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)a2,
                  48,
                  (int)(uintptr_t)(v102));
                v95 =g4_m128_lane<int32_t>(v122, 1);
                v94 = a2;
                v96 = a2[1];
              }
              v97 = v96 + 1;
g4_m128_lane<int32_t>(v122, 1) = *v94;
              v98 = (uint32_t *)(g4_m128_lane<int32_t>(v122, 1) + 48 * v96);
              a2[1] = v97;
              v99 = &v131 + 6 * (1 - v95);
              *v98 = *(uint32_t *)v99;
              v98[1] = *((uint32_t *)v99 + 1);
              v98[2] = *((uint32_t *)v99 + 2);
              v98[3] = *((uint32_t *)v99 + 3);
              v98[4] = *((uint32_t *)v99 + 4);
              v98[5] = *((uint32_t *)v99 + 5);
              v98[6] = *((uint32_t *)v99 + 6);
              v98[7] = *((uint32_t *)v99 + 7);
              v98[8] = *((uint32_t *)v99 + 8);
              v100 = &v131 + 6 * v95;
g4_m128_lane<uint64_t>(v122, 1) = *v100;
              v123 = *((unsigned int *)v100 + 2);
              v124 = *((uint32_t *)v100 + 3);
              v125 = *((float *)v100 + 4);
              v126 = *((float *)v100 + 5);
              v127 = *((unsigned int *)v100 + 6);
              v128 = *((uint32_t *)v100 + 7);
              v89 = *((uint32_t *)a3 + 11);
              v101 = *((uint32_t *)v100 + 8);
              v29 = *((uint32_t *)v100 + 9);
              v129 = v101;
              v130 = (uint8_t *)v29;
              goto LABEL_26;
            case 1:
              v89 =g4_m128_lane<int32_t>(v122, 1);
g4_m128_lane<uint64_t>(v122, 1) = v131;
              v123 = v132;
              v124 = v133;
              v125 = v134;
              v126 = v135;
              *(float *)&v127 = v136;
              v128 = v137;
              v129 = v138;
              v29 = (int)(uintptr_t)(v139);
              v130 = v139;
              goto LABEL_26;
            case 2:
              v89 =g4_m128_lane<int32_t>(v122, 1);
g4_m128_lane<uint64_t>(v122, 1) = v140;
              v123 = v141;
              v124 = v142;
              v125 = v143;
              v126 = v144;
              v127 = v145;
              v128 = v146;
              v129 = v147;
              v29 = (int)(uintptr_t)(v148);
              v130 = v148;
              goto LABEL_26;
            default:
              break;
          }
        }
        else
        {
          LODWORD(v131) =g4_m128_lane<int32_t>(v122, 1);
          v91 = *a3;
          v102 = &v131;
          *(uint32_t *)(LODWORD(v91) + 4) |= (*(int (**)(uint32_t, int, uint8_t *))(***(uint32_t ***)a3 + 8))(
                                             **(uint32_t **)a3,
                                             *(uint16_t *)(v29 + 4) | (*(uint8_t *)(v29 + 3) << 16),
                                             &g4_m128_lane<uint8_t>(v122, 8));
          *((uint32_t *)a3 + 11) = v131;
        }
        result = a2[1];
        if ( v103 >= result )
          return result;
        v92 = result - 1;
        v93 = *a2 + 48 * v92;
        a2[1] = v92;
        v89 = *((uint32_t *)a3 + 11);
        v129 = *(uint32_t *)(v93 + 32);
        v29 = 3 * *(uint32_t *)(v93 + 32) + 3 * *(uint32_t *)(v93 + 32) + *a1;
        v130 = (uint8_t *)v29;
g4_m128_lane<uint64_t>(v122, 1) = *(uint64_t *)v93;
        v123 = *(unsigned int *)(v93 + 8);
        v124 = *(uint32_t *)(v93 + 12);
        v125 = *(float *)(v93 + 16);
        v126 = *(float *)(v93 + 20);
        v127 = *(unsigned int *)(v93 + 24);
        v128 = *(uint32_t *)(v93 + 28);
LABEL_26:
g4_m128_lane<int32_t>(v122, 1) = v89;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_ec58bc  (binary VA: 0x1606220)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdStaticTree::DefaultTreeStorage6>>>
// ----------------------------------------------------------------------------
uint8_t * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_ec58bc(int *a1, uint32_t *a2, float *a3)
{
  uint8_t *result;
  int v4;
  int v5;
  float v6; // xmm2_4
  uint8_t v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  uint8_t v10; // si
  uint8_t v11;
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  int v19;
  bool v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  typedef int _g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t *_g4_t_v40;
  typedef uint32_t *_g4_t_i;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef uint8_t *_g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v35)) > _g4_s6 ? (36u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v36)) > _g4_s7 ? (52u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v37)) > _g4_s8 ? (56u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v38)) > _g4_s9 ? (60u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v39)) > _g4_s10 ? (68u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v40)) > _g4_s11 ? (72u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_i)) > _g4_s12 ? (76u + sizeof(_g4_t_i)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v42)) > _g4_s13 ? (80u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v43)) > _g4_s14 ? (84u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v44)) > _g4_s15 ? (88u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v45)) > _g4_s16 ? (92u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v46)) > _g4_s17 ? (96u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v47)) > _g4_s18 ? (100u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v48)) > _g4_s19 ? (104u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v49)) > _g4_s20 ? (108u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v50)) > _g4_s21 ? (112u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v51)) > _g4_s22 ? (116u + sizeof(_g4_t_v51)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);

  result = (uint8_t *)a1[1];
  if ( result != nullptr )
  {
    v4 = *a1;
    v51 = (uint8_t *)*a1;
    v50 = 0;
    v29 = a2[1];
    v42 = *((float *)a1 + 4);
    v43 = *((float *)a1 + 5);
    v44 = *((float *)a1 + 6);
    v45 = (uint8_t *)a1[7];
    v46 = *((float *)a1 + 8);
    v47 = *((float *)a1 + 9);
    v48 = *((float *)a1 + 10);
    v49 = (uint8_t *)a1[11];
    result = *((uint8_t **)a3 + 1);
    if ( result != nullptr
      && a3[4] <= v46
      && a3[5] <= v47
      && a3[6] <= v48
      && v42 <= a3[8]
      && v43 <= a3[9]
      && v44 <= a3[10] )
    {
      for ( i = *((uint32_t **)a3 + 1); ; i = *((uint32_t **)a3 + 1) )
      {
LABEL_10:
        v5 = *(uint8_t *)(v4 + 3);
        if ( (v5 & 0x80u) == 0 )
        {
LABEL_29:
          v20 = false;
          if ( i != nullptr )
            v20 = (*(int (**)(uint32_t, int, float *))(***(uint32_t ***)a3 + 8))(
                    **(uint32_t **)a3,
                    *(uint16_t *)(v4 + 4) | (v5 << 16),
                    &v42) != 0;
          *((uint32_t *)a3 + 1) = v20;
        }
        else
        {
          while ( 1 )
          {
            v32 = v50 + 1;
            v31 = v50 + 2 * (*(uint16_t *)(v4 + 4) | ((v5 & 0x7F) << 16));
            v30 = (uint8_t *)(*a1 + 6 * (v50 + 1));
            v40 = (uint8_t *)(*a1 + 6 * v31);
            v6 = (float)(v46 - v42) * 0.0044247787f;
            v7 = v30[1];
            v8 = (float)(v47 - v43) * 0.0044247787f;
            v9 = (float)(v48 - v44) * 0.0044247787f;
            v39 = *v40;
            v10 = v40[1];
            v11 = v40[2];
            v34 = (float)((float)(((int)v7 >> 4) * ((int)v7 >> 4)) * v8) + v43;
            v35 = (float)((float)(((int)*v30 >> 4) * ((int)*v30 >> 4)) * v6) + v42;
            v33 = (float)((float)(((int)v30[2] >> 4) * ((int)v30[2] >> 4)) * v9) + v44;
            v38 = v46 - (float)((float)((*v30 & 0xF) * (*v30 & 0xF)) * v6);
            v37 = v47 - (float)((float)((v7 & 0xF) * (v7 & 0xF)) * v8);
            v12 = (float)((float)((v39 >> 4) * (v39 >> 4)) * v6) + v42;
            v13 = (float)((float)(((int)v10 >> 4) * ((int)v10 >> 4)) * v8) + v43;
            v36 = v48 - (float)((float)((v30[2] & 0xF) * (v30[2] & 0xF)) * v9);
            v14 = (float)((float)(((int)v11 >> 4) * ((int)v11 >> 4)) * v9) + v44;
            v15 = v46 - (float)((float)((v39 & 0xF) * (v39 & 0xF)) * v6);
            v16 = v47 - (float)((float)((v10 & 0xF) * (v10 & 0xF)) * v8);
            v17 = v48 - (float)((float)((v11 & 0xF) * (v11 & 0xF)) * v9);
            if ( i == nullptr )
              break;
            v18 = a3[4];
            v19 = 0;
            if ( v18 <= v38 && a3[5] <= v37 && a3[6] <= v36 && v35 <= a3[8] && v34 <= a3[9] )
              v19 = v33 <= a3[10];
            if ( v18 <= v15 && a3[5] <= v16 && a3[6] <= v17 && v12 <= a3[8] && v13 <= a3[9] && v14 <= a3[10] )
              v19 |= 2u;
            switch ( v19 )
            {
              case 1:
                v45 = nullptr;
                ++v50;
                v4 = (int)(uintptr_t)(v30);
                v49 = nullptr;
                v51 = v30;
                v42 = v35;
                v43 = v34;
                v44 = v33;
                v46 = v38;
                v47 = v37;
                v48 = v36;
                v5 = v30[3];
                if ( (v5 & 0x80u) == 0 )
                  goto LABEL_29;
                break;
              case 2:
                v45 = nullptr;
                v50 = v31;
                v42 = v12;
                v49 = nullptr;
                v43 = v13;
                v51 = v40;
                v44 = v14;
                v4 = (int)(uintptr_t)(v40);
                v46 = v15;
                v47 = v16;
                v48 = v17;
                goto LABEL_10;
              case 3:
                v24 = a2;
                v25 = a2[1];
                if ( v25 == (a2[2] & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)a2,
                    48,
                    v29);
                  v24 = a2;
                  v25 = a2[1];
                }
                v26 = v25 + 1;
                v27 = *v24 + 48 * v25;
                a2[1] = v26;
                *(uint32_t *)(v27 + 32) = v31;
                *(float *)v27 = v12;
                *(uint32_t *)(v27 + 12) = 0;
                *(float *)(v27 + 4) = v13;
                *(uint32_t *)(v27 + 28) = 0;
                *(float *)(v27 + 8) = v14;
                v45 = nullptr;
                *(float *)(v27 + 16) = v15;
                *(float *)(v27 + 20) = v16;
                *(float *)(v27 + 24) = v17;
                v50 = v32;
                v28 = *((uint32_t **)a3 + 1);
                v42 = v35;
                v49 = nullptr;
                v43 = v34;
                v51 = v30;
                v44 = v33;
                v4 = (int)(uintptr_t)(v30);
                v46 = v38;
                v47 = v37;
                v48 = v36;
                i = v28;
                goto LABEL_10;
              default:
                goto LABEL_32;
            }
          }
        }
LABEL_32:
        result = (uint8_t *)a2;
        v21 = a2[1];
        if ( v29 >= v21 )
          break;
        v22 = v21 - 1;
        v23 = *a2 + 48 * v22;
        a2[1] = v22;
        v50 = *(uint32_t *)(v23 + 32);
        v4 = 3 * *(uint32_t *)(v23 + 32) + 3 * *(uint32_t *)(v23 + 32) + *a1;
        v51 = (uint8_t *)v4;
        v42 = *(float *)v23;
        v43 = *(float *)(v23 + 4);
        v44 = *(float *)(v23 + 8);
        v45 = *(uint8_t **)(v23 + 12);
        v46 = *(float *)(v23 + 16);
        v47 = *(float *)(v23 + 20);
        v48 = *(float *)(v23 + 24);
        v49 = *(uint8_t **)(v23 + 28);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_35cc02  (binary VA: 0x1606aa0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdStaticTree::DefaultTreeStorage6>>>
// ----------------------------------------------------------------------------
float * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_35cc02(float *a1, uint32_t *a2, float *a3)
{
  float *result;
  float v4; // xmm7_4
  uint8_t *v5;
  float v6; // xmm5_4
  float v7; // xmm4_4
  int v8;
  int v9;
  int v10;
  int v11;
  float v12; // xmm2_4
  uint8_t v13; // si
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  int v17;
  int v18;
  int v19;
  int v20;
  float *v21;
  int v22;
  int **v23;
  int *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef uint8_t *_g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef uint8_t *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint8_t *_g4_t_v47;
  typedef int _g4_t_v48[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v32)) > _g4_s1 ? (16u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v33)) > _g4_s2 ? (20u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v34)) > _g4_s3 ? (24u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v35)) > _g4_s4 ? (28u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v36)) > _g4_s5 ? (40u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v37)) > _g4_s6 ? (44u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v38)) > _g4_s7 ? (48u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v39)) > _g4_s8 ? (52u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v40)) > _g4_s9 ? (64u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v41)) > _g4_s10 ? (68u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v42)) > _g4_s11 ? (72u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v43)) > _g4_s12 ? (76u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v44)) > _g4_s13 ? (76u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v45)) > _g4_s14 ? (80u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v46)) > _g4_s15 ? (80u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v47)) > _g4_s16 ? (80u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v48)) > _g4_s17 ? (84u + sizeof(_g4_t_v48)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 84u);

  result = a1;
  if ( *((uint32_t *)a1 + 1) != 0 )
  {
    v32 = a2[1];
    v4 = a1[8];
    v5 = *(uint8_t **)a1;
    v42 = a1[5];
    v43 = a1[6];
    v6 = a1[10];
    v7 = a1[9];
    result = a3;
    v45 = a1[4];
    if ( a3[4] <= v4 && a3[5] <= v7 && a3[6] <= v6 && a1[4] <= a3[8] && a1[5] <= a3[9] && a1[6] <= a3[10] )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = v5[3];
        if ( (v9 & 0x80u) == 0 )
          break;
LABEL_10:
        v33 = v8 + 1;
        v10 = *((uint16_t *)v5 + 2) | ((v9 & 0x7F) << 16);
        v11 = 3 * (v8 + 1);
        v8 += v10 + v10;
        v5 = (uint8_t *)(*(uint32_t *)a1 + 2 * v11);
        v40 = (uint8_t *)(*(uint32_t *)a1 + 6 * v8);
        v12 = (float)(v4 - v45) * 0.0044247787f;
        v13 = v5[2];
        v41 = (float)(v7 - v42) * 0.0044247787f;
        v14 = (float)(v6 - v43) * 0.0044247787f;
        LOBYTE(v11) = v40[2];
        v15 = (float)((float)(((int)*v5 >> 4) * ((int)*v5 >> 4)) * v12) + v45;
        v35 = (float)((float)(((int)v5[1] >> 4) * ((int)v5[1] >> 4)) * v41) + v42;
        v34 = (float)((float)(((int)v13 >> 4) * ((int)v13 >> 4)) * v14) + v43;
        v39 = v4 - (float)((float)((*v5 & 0xF) * (*v5 & 0xF)) * v12);
        v38 = v7 - (float)((float)((v5[1] & 0xF) * (v5[1] & 0xF)) * v41);
        v37 = v6 - (float)((float)((v13 & 0xF) * (v13 & 0xF)) * v14);
        v45 = (float)((float)(((int)*v40 >> 4) * ((int)*v40 >> 4)) * v12) + v45;
        v42 = (float)((float)(((int)v40[1] >> 4) * ((int)v40[1] >> 4)) * v41) + v42;
        v43 = (float)((float)(((int)(uint8_t)v11 >> 4) * ((int)(uint8_t)v11 >> 4)) * v14) + v43;
        v4 = v4 - (float)((float)((*v40 & 0xF) * (*v40 & 0xF)) * v12);
        v7 = v7 - (float)((float)((v40[1] & 0xF) * (v40[1] & 0xF)) * v41);
        v6 = v6 - (float)((float)((v11 & 0xF) * (v11 & 0xF)) * v14);
        v16 = a3[4];
        if ( v16 > v39 || a3[5] > v38 || a3[6] > v37 || v15 > a3[8] || v35 > a3[9] )
        {
          v17 = 2;
          v18 = 0;
        }
        else
        {
          v17 = (v34 <= a3[10]) + 2;
          v18 = v34 <= a3[10];
        }
        if ( v16 <= v4 && a3[5] <= v7 && a3[6] <= v6 && v45 <= a3[8] && v42 <= a3[9] && v43 <= a3[10] )
          v18 = v17;
        if ( v18 == 2 )
        {
          v5 = (uint8_t *)(*(uint32_t *)a1 + 6 * v8);
        }
        else
        {
          if ( v18 == 3 )
          {
            v27 = a2;
            v28 = a2[1];
            if ( v28 == (a2[2] & 0x3FFFFFFF) )
            {
              v36 = v5;
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)a2,
                48,
                v31);
              v5 = v36;
              v27 = a2;
              v28 = a2[1];
            }
            v29 = v28 + 1;
            v30 = *v27 + 48 * v28;
            a2[1] = v29;
            *(float *)v30 = v45;
            *(uint32_t *)(v30 + 12) = 0;
            *(uint32_t *)(v30 + 28) = 0;
            *(float *)(v30 + 4) = v42;
            *(uint32_t *)(v30 + 32) = v8;
            *(float *)(v30 + 8) = v43;
            *(float *)(v30 + 16) = v4;
            *(float *)(v30 + 20) = v7;
            *(float *)(v30 + 24) = v6;
          }
          else if ( v18 != 1 )
          {
            goto LABEL_26;
          }
          v8 = v33;
          v6 = v37;
          v7 = v38;
          v4 = v39;
          v43 = v34;
          v42 = v35;
          v45 = v15;
        }
      }
      while ( 1 )
      {
        v23 = *(int ***)a3;
        if ( **(uint32_t **)(*(uint32_t *)a3 + 4) != 0 )
          break;
        v24 = *v23;
        v46 = (*v23)[1];
        v44 = v46 + 1;
        v25 = (*v23)[2] & 0x3FFFFFFF;
        if ( v46 + 1 > v25 )
        {
          v47 = v5;
          v26 = 2 * v25;
          if ( v26 < v44 )
            v26 = v44;
          hkArrayUtil::reserve((hkArrayUtil::Self *)v48, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, v24, v26, 4);
          if ( v48[0] != 0 )
          {
            *v23[1] = 1;
            break;
          }
          v24 = *v23;
          v5 = v47;
          v9 = v47[3];
          v46 = (*v23)[1];
        }
        *(uint32_t *)(*v24 + 4 * v46) = *((uint16_t *)v5 + 2) | (v9 << 16);
        result = (float *)a2;
        ++v24[1];
        v19 = a2[1];
        if ( v32 >= v19 )
          return result;
LABEL_27:
        v20 = v19 - 1;
        v21 = result;
        v22 = *(uint32_t *)result + 48 * v20;
        *((uint32_t *)v21 + 1) = v20;
        v8 = *(uint32_t *)(v22 + 32);
        v45 = *(float *)v22;
        v42 = *(float *)(v22 + 4);
        v43 = *(float *)(v22 + 8);
        v4 = *(float *)(v22 + 16);
        v7 = *(float *)(v22 + 20);
        v5 = (uint8_t *)(*(uint32_t *)a1 + 6 * v8);
        v6 = *(float *)(v22 + 24);
        v9 = v5[3];
        if ( (v9 & 0x80u) != 0 )
          goto LABEL_10;
      }
LABEL_26:
      result = (float *)a2;
      v19 = a2[1];
      if ( v32 < v19 )
        goto LABEL_27;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_b263fc  (binary VA: 0x1607230)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdStaticTree::DefaultTreeStorage6>>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_b263fc(int a1, int *a2, float *a3)
{
  int result;
  int v4;
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  uint8_t *v10;
  float v11; // xmm3_4
  float *v12;
  char v13;
  int v14;
  uint8_t v15; // di
  uint8_t v16; // si
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  __m128i v21;
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24;
  float v25; // xmm3_4
  __m128i v26;
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29;
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm5_4
  int v37;
  int v38;
  float v39; // xmm0_4
  int v40;
  int v41;
  int v42;
  int v43;
  int *v44;
  bool v45;
  int v46;
  uint32_t *v47;
  float *v48;
  float *v49;
  int v50;
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  typedef float *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef int *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float *_g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint8_t *_g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef uint8_t *_g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef uint8_t *_g4_t_v97;
  typedef int *_g4_t_v98;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v55)) > _g4_s1 ? (20u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v56)) > _g4_s2 ? (24u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v57)) > _g4_s3 ? (56u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v58)) > _g4_s4 ? (60u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v59)) > _g4_s5 ? (64u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v60)) > _g4_s6 ? (64u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v61)) > _g4_s7 ? (68u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v62)) > _g4_s8 ? (68u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v63)) > _g4_s9 ? (76u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v64)) > _g4_s10 ? (76u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v65)) > _g4_s11 ? (76u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v66)) > _g4_s12 ? (76u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v67)) > _g4_s13 ? (80u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v68)) > _g4_s14 ? (84u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v69)) > _g4_s15 ? (88u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v70)) > _g4_s16 ? (92u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v71)) > _g4_s17 ? (96u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v72)) > _g4_s18 ? (100u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v73)) > _g4_s19 ? (104u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v74)) > _g4_s20 ? (108u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v75)) > _g4_s21 ? (112u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v76)) > _g4_s22 ? (116u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v77)) > _g4_s23 ? (120u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v78)) > _g4_s24 ? (132u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v79)) > _g4_s25 ? (136u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v80)) > _g4_s26 ? (140u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v81)) > _g4_s27 ? (144u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v82)) > _g4_s28 ? (148u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v83)) > _g4_s29 ? (152u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v84)) > _g4_s30 ? (156u + sizeof(_g4_t_v84)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v85)) > _g4_s31 ? (160u + sizeof(_g4_t_v85)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v87)) > _g4_s32 ? (168u + sizeof(_g4_t_v87)) : _g4_s32,
    _g4_s34 = (180u + sizeof(_g4_t_v88)) > _g4_s33 ? (180u + sizeof(_g4_t_v88)) : _g4_s33,
    _g4_s35 = (184u + sizeof(_g4_t_v89)) > _g4_s34 ? (184u + sizeof(_g4_t_v89)) : _g4_s34,
    _g4_s36 = (188u + sizeof(_g4_t_v90)) > _g4_s35 ? (188u + sizeof(_g4_t_v90)) : _g4_s35,
    _g4_s37 = (192u + sizeof(_g4_t_v91)) > _g4_s36 ? (192u + sizeof(_g4_t_v91)) : _g4_s36,
    _g4_s38 = (196u + sizeof(_g4_t_v92)) > _g4_s37 ? (196u + sizeof(_g4_t_v92)) : _g4_s37,
    _g4_s39 = (200u + sizeof(_g4_t_v93)) > _g4_s38 ? (200u + sizeof(_g4_t_v93)) : _g4_s38,
    _g4_s40 = (204u + sizeof(_g4_t_v94)) > _g4_s39 ? (204u + sizeof(_g4_t_v94)) : _g4_s39,
    _g4_s41 = (208u + sizeof(_g4_t_v95)) > _g4_s40 ? (208u + sizeof(_g4_t_v95)) : _g4_s40,
    _g4_s42 = (212u + sizeof(_g4_t_v96)) > _g4_s41 ? (212u + sizeof(_g4_t_v96)) : _g4_s41,
    _g4_s43 = (216u + sizeof(_g4_t_v97)) > _g4_s42 ? (216u + sizeof(_g4_t_v97)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v98)) > _g4_s43 ? (236u + sizeof(_g4_t_v98)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 100u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 104u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 108u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 112u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 116u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 120u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 132u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 136u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 140u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 144u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 148u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 152u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 156u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 160u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 168u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 180u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 184u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 188u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 192u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 196u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 200u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 204u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 208u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 212u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 216u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 236u);

  v98 = &a1;
  result = a1;
  v58 = (int *)a1;
  v57 = a2;
  if ( *(uint32_t *)(a1 + 4) != 0 )
  {
    v4 = a2[1];
    v76 = 0;
    v5 = a3[4];
    v55 = v4;
    v6 = a3[5];
    v7 = a3[6];
    v68 = *(float *)(a1 + 16);
    v69 = *(float *)(a1 + 20);
    v70 = *(float *)(a1 + 24);
    v71 = *(float *)(a1 + 28);
    v72 = *(float *)(a1 + 32);
    v73 = *(float *)(a1 + 36);
    v74 = *(float *)(a1 + 40);
    v8 = fminf(v72, fmaxf(v68, v5));
    v9 = fminf(v73, fmaxf(v69, v6));
    result = *(int *)(a1 + 44);
    v10 = *(uint8_t **)a1;
    v75 = *(float *)&result;
    v77 = v10;
    v11 = fminf(v74, fmaxf(v70, v7));
    if ( a3[8] >= (float)((float)((float)((float)(v5 - v8) * (float)(v5 - v8))
                                + (float)((float)(v6 - v9) * (float)(v6 - v9)))
                        + (float)((float)(v7 - v11) * (float)(v7 - v11))) )
    {
      v12 = a3;
      while ( 1 )
      {
LABEL_4:
        while ( 1 )
        {
          v13 = v10[3];
          if ( v13 >= 0 )
            break;
          while ( 1 )
          {
            v96 = v76 + 2 * (*((uint16_t *)v10 + 2) | ((v13 & 0x7F) << 16));
            v14 = *v58;
            v87 = (uint8_t *)(*v58 + 6 * (v76 + 1));
            v97 = (uint8_t *)(3 * v96 + 3 * v96 + v14);
            v63 = *v87;
            LOBYTE(v14) = v87[1];
            v15 = v87[2];
            v61 = *v97;
            v59 = v97[1];
            v16 = v97[2];
            v56 = v97[1] & 0xF;
            v81 = 0.0;
            v85 = 0.0;
            v17 = (float)(v72 - v68) * 0.0044247787f;
            v18 = (float)(v73 - v69) * 0.0044247787f;
            v19 = (float)(v74 - v70) * 0.0044247787f;
            v78 = (float)((float)((v63 >> 4) * (v63 >> 4)) * v17) + v68;
            v82 = v72 - (float)((float)((v63 & 0xF) * (v63 & 0xF)) * v17);
            v83 = v73 - (float)((float)((v14 & 0xF) * (v14 & 0xF)) * v18);
            v79 = (float)((float)(((int)(uint8_t)v14 >> 4) * ((int)(uint8_t)v14 >> 4)) * v18) + v69;
            v80 = (float)((float)(((int)v15 >> 4) * ((int)v15 >> 4)) * v19) + v70;
            v84 = v74 - (float)((float)((v15 & 0xF) * (v15 & 0xF)) * v19);
            v91 = 0.0;
            v95 = 0.0;
            v88 = v68 + (float)((float)((v61 >> 4) * (v61 >> 4)) * v17);
            v20 = (float)((v59 >> 4) * (v59 >> 4)) * v18;
g4_m128_raw(v21) = LODWORD(v72);
            *(float *)g4_m128_ptr<int32_t>(v21) = v72 - (float)(v17 * (float)((v61 & 0xF) * (v61 & 0xF)));
            v22 = (float)(((int)v16 >> 4) * ((int)v16 >> 4)) * v19;
            v23 = (float)(v56 * v56) * v18;
            v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
            v25 = (float)((v16 & 0xF) * (v16 & 0xF)) * v19;
            v92 = *(float *)g4_m128_ptr<int32_t>(v21);
g4_m128_raw(v26) = LODWORD(v74);
            *(float *)g4_m128_ptr<int32_t>(v21) = v73 - v23;
            v27 = v12[5];
            *(float *)g4_m128_ptr<int32_t>(v26) = v74 - v25;
            v28 = v12[6];
            v60 = *(float *)g4_m128_ptr<int32_t>(v21);
            v93 = *(float *)g4_m128_ptr<int32_t>(v21);
            v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
            v94 = *(float *)g4_m128_ptr<int32_t>(v26);
g4_m128_lane<int32_t>(v26, 0) = (int32_t)v12[4];
            v64 = v28;
            v89 = v20 + v69;
            v90 = v22 + v70;
            v30 = fminf(v83, fmaxf(v79, v27));
            v31 = fminf(v84, fmaxf(v80, v28));
            v32 = *(float *)g4_m128_ptr<int32_t>(v26) - fminf(v82, fmaxf(v78, *(float *)g4_m128_ptr<int32_t>(v26)));
            *(float *)g4_m128_ptr<int32_t>(v21) = (float)(v32 * v32) + (float)((float)(v27 - v30) * (float)(v27 - v30));
            v33 = fminf(v60, fmaxf(v20 + v69, v27));
            v34 = fminf(v29, fmaxf(v22 + v70, v64));
            v35 = *(float *)g4_m128_ptr<int32_t>(v21) + (float)((float)(v64 - v31) * (float)(v64 - v31));
            *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) - fminf(v24, fmaxf(v88, *(float *)g4_m128_ptr<int32_t>(v26)));
            v36 = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26))
                        + (float)((float)(v27 - v33) * (float)(v27 - v33)))
                + (float)((float)(v64 - v34) * (float)(v64 - v34));
            result = (v12[8] >= v35) | (v12[8] >= v36 ? 2 : 0);
            switch ( result )
            {
              case 1:
                v68 = v78;
                v69 = v79;
                v70 = v80;
                v71 = v81;
                v72 = v82;
                v73 = v83;
                v74 = v84;
                v75 = v85;
                ++v76;
                v77 = v87;
                v10 = v87;
                goto LABEL_4;
              case 2:
                v68 = v88;
                v69 = v89;
                v70 = v90;
                v71 = v91;
                v72 = v92;
                v73 = v93;
                v74 = v94;
                v75 = v95;
                v76 = v96;
                v10 = v97;
                v77 = v97;
                v13 = v97[3];
                if ( v13 >= 0 )
                  goto LABEL_9;
                break;
              case 3:
                goto LABEL_16;
              default:
                goto LABEL_13;
            }
          }
LABEL_16:
          v44 = v57;
          v45 = v35 > v36;
          *((uint32_t *)v12 + 9) = v45;
          v46 = v57[1];
          if ( v46 == (v57[2] & 0x3FFFFFFF) )
          {
            v66 = v12;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)v57,
              48,
              (int)(uintptr_t)(v54));
            v46 = v57[1];
            v12 = v66;
            v44 = v57;
          }
          v65 = *v44;
          v44[1] = v46 + 1;
          v47 = (uint32_t *)(v65 + 48 * v46);
          v48 = &v78 + 12 * (v35 <= v36);
          *v47 = *(uint32_t *)v48;
          v47[1] = *((uint32_t *)v48 + 1);
          v47[2] = *((uint32_t *)v48 + 2);
          v47[3] = *((uint32_t *)v48 + 3);
          v47[4] = *((uint32_t *)v48 + 4);
          v47[5] = *((uint32_t *)v48 + 5);
          v47[6] = *((uint32_t *)v48 + 6);
          v47[7] = *((uint32_t *)v48 + 7);
          v47[8] = *((uint32_t *)v48 + 8);
          v49 = &v78 + 12 * v45;
          v68 = *v49;
          v69 = v49[1];
          v70 = v49[2];
          v71 = v49[3];
          v72 = v49[4];
          v73 = v49[5];
          v74 = v49[6];
          v75 = v49[7];
          v10 = *((uint8_t **)v49 + 9);
          v50 = *((uint32_t *)v49 + 8);
          v77 = v10;
          v76 = v50;
        }
LABEL_9:
        v37 = *(uint32_t *)v12;
        v78 = v12[4];
        v79 = v12[5];
        v80 = v12[6];
        result = *((int *)v12 + 7);
        v81 = *(float *)&result;
        v38 = *(uint32_t *)(v37 + 32);
        if ( v38 != 0 )
        {
          v62 = v12;
          v54 = &v68;
          *(float *)&result = COERCE_FLOAT((*(int (**)(float *))(*(uint32_t *)v38 + 8))(&v67));
          v12 = v62;
          v39 = v67;
        }
        else
        {
          v78 = fminf(fmaxf(v78, v68), v72);
          v79 = fminf(fmaxf(v79, v69), v73);
          v51 = v78 - v12[4];
          v52 = v79 - v12[5];
          v80 = fminf(fmaxf(v80, v70), v74);
          v53 = (float)(v80 - v12[6]) * (float)(v80 - v12[6]);
          v81 = fminf(fmaxf(v81, v71), v75);
          v39 = (float)((float)(v51 * v51) + (float)(v52 * v52)) + v53;
        }
        if ( v12[8] > v39 )
        {
          v12[8] = v39;
          *(float *)(v37 + 16) = v78;
          *(float *)(v37 + 20) = v79;
          *(float *)(v37 + 24) = v80;
          *(float *)(v37 + 28) = v81;
          result = *((uint16_t *)v77 + 2) | (v77[3] << 16);
          *(float *)v37 = *(float *)&result;
        }
LABEL_13:
        v40 = v57[1];
        if ( v55 >= v40 )
          break;
        v41 = v40 - 1;
        v57[1] = v41;
        v42 = *v57 + 48 * v41;
        v43 = *v58;
        v76 = *(uint32_t *)(v42 + 32);
        v10 = (uint8_t *)(v43 + 6 * *(uint32_t *)(v42 + 32));
        v77 = v10;
        v68 = *(float *)v42;
        v69 = *(float *)(v42 + 4);
        v70 = *(float *)(v42 + 8);
        v71 = *(float *)(v42 + 12);
        v72 = *(float *)(v42 + 16);
        v73 = *(float *)(v42 + 20);
        v74 = *(float *)(v42 + 24);
        v75 = *(float *)(v42 + 28);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdStaticTree_DefaultTr_e859c6  (binary VA: 0x1607dd0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdStaticTree::DefaultTreeStorage6>>>
// ----------------------------------------------------------------------------
float hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdStaticTree_DefaultTr_e859c6(float result, char a2, int a3, int a4, hkMemoryAllocator::Self *a5, uint32_t **a6, int a7, int a8)
{
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint8_t v17;
  int v18;
  float v19; // xmm6_4
  int v20;
  float v21; // xmm5_4
  int v22;
  bool v23;
  float v24; // xmm3_4
  hkMemoryAllocator::Self *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  int v34;
  float v35;
  float v36;
  int v37;
  int v38;
  int v39;
  uint8_t *v40;
  int v41;
  uint8_t *v42;
  uint8_t *v43;
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm6_4
  uint8_t v47; // si
  float v48; // xmm3_4
  float v49; // xmm7_4
  char v50;
  float v51; // xmm5_4
  bool v52;
  hkMemoryAllocator::Self *v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm0_4
  uint8_t *v68;
  uint8_t *v69;
  uint8_t v70; // si
  uint8_t v71; // si
  float v72; // xmm6_4
  bool v73;
  float v74; // xmm4_4
  float v75; // xmm6_4
  float v76; // xmm2_4
  bool v77;
  bool v78;
  int v79;
  int v80;
  int v81;
  hkMemoryAllocator::Self *v82;
  int v83;
  int v84;
  int v85;
  char v86;
  int v87;
  int v88;
  int v89;
  float v90; // xmm2_4
  float v91; // xmm3_4
  int v92;
  float v93; // xmm5_4
  int v94;
  int v95;
  float v96; // xmm0_4
  float v97; // xmm1_4
  float v98; // xmm1_4
  float v99; // xmm7_4
  float v100; // xmm6_4
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  hkMemoryAllocator::Self *v106;
  int v107;
  int v108;
  int v109;
  int v110;
  hkMemoryAllocator::Self *v111;
  int v112;
  int v113;
  int v114;
  int v115;
  typedef int _g4_t_v116;
  typedef bool _g4_t_v117;
  typedef uint8_t _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef float _g4_t_v123;
  typedef uint8_t _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef float _g4_t_v129;
  typedef uint8_t _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef float _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef float _g4_t_v138;
  typedef bool _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef int _g4_t_v144;
  typedef uint8_t _g4_t_v145;
  typedef float _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef float _g4_t_v149;
  typedef uint8_t _g4_t_v150;
  typedef float _g4_t_v151;
  typedef int _g4_t_v152;
  typedef float _g4_t_v153;
  typedef uint8_t *_g4_t_v154;
  typedef float _g4_t_v155;
  typedef int _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef int _g4_t_v164;
  typedef float _g4_t_v165;
  typedef uint8_t _g4_t_v166;
  typedef float _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef int _g4_t_v173;
  typedef float _g4_t_v174;
  typedef uint8_t *_g4_t_v175;
  typedef float _g4_t_v176;
  typedef int _g4_t_v177;
  typedef float _g4_t_v178;
  typedef int _g4_t_v179;
  typedef float _g4_t_v180;
  typedef float _g4_t_v181;
  typedef float _g4_t_v182;
  typedef float _g4_t_v183;
  typedef bool _g4_t_v184;
  typedef uint64_t _g4_t_v185;
  typedef float _g4_t_v186;
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef float _g4_t_v189;
  typedef float _g4_t_v190;
  typedef float _g4_t_v191;
  typedef int _g4_t_v192;
  typedef float _g4_t_v193;
  typedef uint8_t *_g4_t_v194;
  typedef int _g4_t_v195;
  typedef float _g4_t_v196;
  typedef int _g4_t_v197;
  typedef float _g4_t_v198;
  typedef float _g4_t_v199;
  typedef int _g4_t_v200;
  typedef float _g4_t_v201;
  typedef float _g4_t_v202;
  typedef float _g4_t_v203;
  typedef int _g4_t_v204;
  typedef float _g4_t_v205;
  typedef float _g4_t_v206;
  typedef uint64_t _g4_t_v207;
  typedef int _g4_t_v208;
  typedef uint8_t *_g4_t_v209;
  typedef float _g4_t_v210;
  typedef float _g4_t_v211;
  typedef float _g4_t_v212;
  typedef int _g4_t_v213;
  typedef float _g4_t_v214;
  typedef float _g4_t_v215;
  typedef float _g4_t_v216;
  typedef float _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef float _g4_t_v220;
  typedef float _g4_t_v221;
  typedef float _g4_t_v222;
  typedef int _g4_t_v223;
  typedef float _g4_t_v224;
  typedef float _g4_t_v225;
  typedef float _g4_t_v226;
  typedef int _g4_t_v227;
  typedef int _g4_t_v228;
  typedef float _g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef int _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef float _g4_t_v235;
  typedef float _g4_t_v236;
  typedef int _g4_t_v237;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (12u + sizeof(_g4_t_v116)) > _g4_s0 ? (12u + sizeof(_g4_t_v116)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v117)) > _g4_s1 ? (20u + sizeof(_g4_t_v117)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v118)) > _g4_s2 ? (44u + sizeof(_g4_t_v118)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v119)) > _g4_s3 ? (44u + sizeof(_g4_t_v119)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v120)) > _g4_s4 ? (48u + sizeof(_g4_t_v120)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v121)) > _g4_s5 ? (48u + sizeof(_g4_t_v121)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v122)) > _g4_s6 ? (52u + sizeof(_g4_t_v122)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v123)) > _g4_s7 ? (52u + sizeof(_g4_t_v123)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v124)) > _g4_s8 ? (56u + sizeof(_g4_t_v124)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v125)) > _g4_s9 ? (56u + sizeof(_g4_t_v125)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v126)) > _g4_s10 ? (60u + sizeof(_g4_t_v126)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v127)) > _g4_s11 ? (60u + sizeof(_g4_t_v127)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v128)) > _g4_s12 ? (64u + sizeof(_g4_t_v128)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v129)) > _g4_s13 ? (64u + sizeof(_g4_t_v129)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v130)) > _g4_s14 ? (68u + sizeof(_g4_t_v130)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v131)) > _g4_s15 ? (68u + sizeof(_g4_t_v131)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v132)) > _g4_s16 ? (68u + sizeof(_g4_t_v132)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v133)) > _g4_s17 ? (72u + sizeof(_g4_t_v133)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v134)) > _g4_s18 ? (76u + sizeof(_g4_t_v134)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v135)) > _g4_s19 ? (76u + sizeof(_g4_t_v135)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v136)) > _g4_s20 ? (76u + sizeof(_g4_t_v136)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v137)) > _g4_s21 ? (76u + sizeof(_g4_t_v137)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v138)) > _g4_s22 ? (76u + sizeof(_g4_t_v138)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v139)) > _g4_s23 ? (76u + sizeof(_g4_t_v139)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v140)) > _g4_s24 ? (80u + sizeof(_g4_t_v140)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v141)) > _g4_s25 ? (80u + sizeof(_g4_t_v141)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v142)) > _g4_s26 ? (84u + sizeof(_g4_t_v142)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v143)) > _g4_s27 ? (84u + sizeof(_g4_t_v143)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v144)) > _g4_s28 ? (84u + sizeof(_g4_t_v144)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v145)) > _g4_s29 ? (84u + sizeof(_g4_t_v145)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v146)) > _g4_s30 ? (88u + sizeof(_g4_t_v146)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v147)) > _g4_s31 ? (88u + sizeof(_g4_t_v147)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v148)) > _g4_s32 ? (88u + sizeof(_g4_t_v148)) : _g4_s32,
    _g4_s34 = (88u + sizeof(_g4_t_v149)) > _g4_s33 ? (88u + sizeof(_g4_t_v149)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v150)) > _g4_s34 ? (88u + sizeof(_g4_t_v150)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v151)) > _g4_s35 ? (92u + sizeof(_g4_t_v151)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v152)) > _g4_s36 ? (92u + sizeof(_g4_t_v152)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v153)) > _g4_s37 ? (92u + sizeof(_g4_t_v153)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v154)) > _g4_s38 ? (92u + sizeof(_g4_t_v154)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v155)) > _g4_s39 ? (100u + sizeof(_g4_t_v155)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v156)) > _g4_s40 ? (100u + sizeof(_g4_t_v156)) : _g4_s40,
    _g4_s42 = (100u + sizeof(_g4_t_v157)) > _g4_s41 ? (100u + sizeof(_g4_t_v157)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v158)) > _g4_s42 ? (100u + sizeof(_g4_t_v158)) : _g4_s42,
    _g4_s44 = (104u + sizeof(_g4_t_v159)) > _g4_s43 ? (104u + sizeof(_g4_t_v159)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v160)) > _g4_s44 ? (104u + sizeof(_g4_t_v160)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v161)) > _g4_s45 ? (108u + sizeof(_g4_t_v161)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v162)) > _g4_s46 ? (108u + sizeof(_g4_t_v162)) : _g4_s46,
    _g4_s48 = (108u + sizeof(_g4_t_v163)) > _g4_s47 ? (108u + sizeof(_g4_t_v163)) : _g4_s47,
    _g4_s49 = (112u + sizeof(_g4_t_v164)) > _g4_s48 ? (112u + sizeof(_g4_t_v164)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_v165)) > _g4_s49 ? (112u + sizeof(_g4_t_v165)) : _g4_s49,
    _g4_s51 = (112u + sizeof(_g4_t_v166)) > _g4_s50 ? (112u + sizeof(_g4_t_v166)) : _g4_s50,
    _g4_s52 = (128u + sizeof(_g4_t_v167)) > _g4_s51 ? (128u + sizeof(_g4_t_v167)) : _g4_s51,
    _g4_s53 = (128u + sizeof(_g4_t_v168)) > _g4_s52 ? (128u + sizeof(_g4_t_v168)) : _g4_s52,
    _g4_s54 = (128u + sizeof(_g4_t_v169)) > _g4_s53 ? (128u + sizeof(_g4_t_v169)) : _g4_s53,
    _g4_s55 = (132u + sizeof(_g4_t_v170)) > _g4_s54 ? (132u + sizeof(_g4_t_v170)) : _g4_s54,
    _g4_s56 = (132u + sizeof(_g4_t_v171)) > _g4_s55 ? (132u + sizeof(_g4_t_v171)) : _g4_s55,
    _g4_s57 = (132u + sizeof(_g4_t_v172)) > _g4_s56 ? (132u + sizeof(_g4_t_v172)) : _g4_s56,
    _g4_s58 = (132u + sizeof(_g4_t_v173)) > _g4_s57 ? (132u + sizeof(_g4_t_v173)) : _g4_s57,
    _g4_s59 = (136u + sizeof(_g4_t_v174)) > _g4_s58 ? (136u + sizeof(_g4_t_v174)) : _g4_s58,
    _g4_s60 = (136u + sizeof(_g4_t_v175)) > _g4_s59 ? (136u + sizeof(_g4_t_v175)) : _g4_s59,
    _g4_s61 = (136u + sizeof(_g4_t_v176)) > _g4_s60 ? (136u + sizeof(_g4_t_v176)) : _g4_s60,
    _g4_s62 = (136u + sizeof(_g4_t_v177)) > _g4_s61 ? (136u + sizeof(_g4_t_v177)) : _g4_s61,
    _g4_s63 = (136u + sizeof(_g4_t_v178)) > _g4_s62 ? (136u + sizeof(_g4_t_v178)) : _g4_s62,
    _g4_s64 = (136u + sizeof(_g4_t_v179)) > _g4_s63 ? (136u + sizeof(_g4_t_v179)) : _g4_s63,
    _g4_s65 = (136u + sizeof(_g4_t_v180)) > _g4_s64 ? (136u + sizeof(_g4_t_v180)) : _g4_s64,
    _g4_s66 = (140u + sizeof(_g4_t_v181)) > _g4_s65 ? (140u + sizeof(_g4_t_v181)) : _g4_s65,
    _g4_s67 = (140u + sizeof(_g4_t_v182)) > _g4_s66 ? (140u + sizeof(_g4_t_v182)) : _g4_s66,
    _g4_s68 = (140u + sizeof(_g4_t_v183)) > _g4_s67 ? (140u + sizeof(_g4_t_v183)) : _g4_s67,
    _g4_s69 = (140u + sizeof(_g4_t_v184)) > _g4_s68 ? (140u + sizeof(_g4_t_v184)) : _g4_s68,
    _g4_s70 = (144u + sizeof(_g4_t_v185)) > _g4_s69 ? (144u + sizeof(_g4_t_v185)) : _g4_s69,
    _g4_s71 = (144u + sizeof(_g4_t_v186)) > _g4_s70 ? (144u + sizeof(_g4_t_v186)) : _g4_s70,
    _g4_s72 = (144u + sizeof(_g4_t_v187)) > _g4_s71 ? (144u + sizeof(_g4_t_v187)) : _g4_s71,
    _g4_s73 = (148u + sizeof(_g4_t_v188)) > _g4_s72 ? (148u + sizeof(_g4_t_v188)) : _g4_s72,
    _g4_s74 = (148u + sizeof(_g4_t_v189)) > _g4_s73 ? (148u + sizeof(_g4_t_v189)) : _g4_s73,
    _g4_s75 = (152u + sizeof(_g4_t_v190)) > _g4_s74 ? (152u + sizeof(_g4_t_v190)) : _g4_s74,
    _g4_s76 = (152u + sizeof(_g4_t_v191)) > _g4_s75 ? (152u + sizeof(_g4_t_v191)) : _g4_s75,
    _g4_s77 = (152u + sizeof(_g4_t_v192)) > _g4_s76 ? (152u + sizeof(_g4_t_v192)) : _g4_s76,
    _g4_s78 = (152u + sizeof(_g4_t_v193)) > _g4_s77 ? (152u + sizeof(_g4_t_v193)) : _g4_s77,
    _g4_s79 = (156u + sizeof(_g4_t_v194)) > _g4_s78 ? (156u + sizeof(_g4_t_v194)) : _g4_s78,
    _g4_s80 = (156u + sizeof(_g4_t_v195)) > _g4_s79 ? (156u + sizeof(_g4_t_v195)) : _g4_s79,
    _g4_s81 = (156u + sizeof(_g4_t_v196)) > _g4_s80 ? (156u + sizeof(_g4_t_v196)) : _g4_s80,
    _g4_s82 = (156u + sizeof(_g4_t_v197)) > _g4_s81 ? (156u + sizeof(_g4_t_v197)) : _g4_s81,
    _g4_s83 = (156u + sizeof(_g4_t_v198)) > _g4_s82 ? (156u + sizeof(_g4_t_v198)) : _g4_s82,
    _g4_s84 = (156u + sizeof(_g4_t_v199)) > _g4_s83 ? (156u + sizeof(_g4_t_v199)) : _g4_s83,
    _g4_s85 = (156u + sizeof(_g4_t_v200)) > _g4_s84 ? (156u + sizeof(_g4_t_v200)) : _g4_s84,
    _g4_s86 = (160u + sizeof(_g4_t_v201)) > _g4_s85 ? (160u + sizeof(_g4_t_v201)) : _g4_s85,
    _g4_s87 = (164u + sizeof(_g4_t_v202)) > _g4_s86 ? (164u + sizeof(_g4_t_v202)) : _g4_s86,
    _g4_s88 = (168u + sizeof(_g4_t_v203)) > _g4_s87 ? (168u + sizeof(_g4_t_v203)) : _g4_s87,
    _g4_s89 = (172u + sizeof(_g4_t_v204)) > _g4_s88 ? (172u + sizeof(_g4_t_v204)) : _g4_s88,
    _g4_s90 = (176u + sizeof(_g4_t_v205)) > _g4_s89 ? (176u + sizeof(_g4_t_v205)) : _g4_s89,
    _g4_s91 = (180u + sizeof(_g4_t_v206)) > _g4_s90 ? (180u + sizeof(_g4_t_v206)) : _g4_s90,
    _g4_s92 = (184u + sizeof(_g4_t_v207)) > _g4_s91 ? (184u + sizeof(_g4_t_v207)) : _g4_s91,
    _g4_s93 = (192u + sizeof(_g4_t_v208)) > _g4_s92 ? (192u + sizeof(_g4_t_v208)) : _g4_s92,
    _g4_s94 = (196u + sizeof(_g4_t_v209)) > _g4_s93 ? (196u + sizeof(_g4_t_v209)) : _g4_s93,
    _g4_s95 = (208u + sizeof(_g4_t_v210)) > _g4_s94 ? (208u + sizeof(_g4_t_v210)) : _g4_s94,
    _g4_s96 = (212u + sizeof(_g4_t_v211)) > _g4_s95 ? (212u + sizeof(_g4_t_v211)) : _g4_s95,
    _g4_s97 = (216u + sizeof(_g4_t_v212)) > _g4_s96 ? (216u + sizeof(_g4_t_v212)) : _g4_s96,
    _g4_s98 = (220u + sizeof(_g4_t_v213)) > _g4_s97 ? (220u + sizeof(_g4_t_v213)) : _g4_s97,
    _g4_s99 = (224u + sizeof(_g4_t_v214)) > _g4_s98 ? (224u + sizeof(_g4_t_v214)) : _g4_s98,
    _g4_s100 = (228u + sizeof(_g4_t_v215)) > _g4_s99 ? (228u + sizeof(_g4_t_v215)) : _g4_s99,
    _g4_s101 = (232u + sizeof(_g4_t_v216)) > _g4_s100 ? (232u + sizeof(_g4_t_v216)) : _g4_s100,
    _g4_s102 = (236u + sizeof(_g4_t_v217)) > _g4_s101 ? (236u + sizeof(_g4_t_v217)) : _g4_s101,
    _g4_s103 = (240u + sizeof(_g4_t_v218)) > _g4_s102 ? (240u + sizeof(_g4_t_v218)) : _g4_s102,
    _g4_s104 = (244u + sizeof(_g4_t_v219)) > _g4_s103 ? (244u + sizeof(_g4_t_v219)) : _g4_s103,
    _g4_s105 = (256u + sizeof(_g4_t_v220)) > _g4_s104 ? (256u + sizeof(_g4_t_v220)) : _g4_s104,
    _g4_s106 = (260u + sizeof(_g4_t_v221)) > _g4_s105 ? (260u + sizeof(_g4_t_v221)) : _g4_s105,
    _g4_s107 = (264u + sizeof(_g4_t_v222)) > _g4_s106 ? (264u + sizeof(_g4_t_v222)) : _g4_s106,
    _g4_s108 = (268u + sizeof(_g4_t_v223)) > _g4_s107 ? (268u + sizeof(_g4_t_v223)) : _g4_s107,
    _g4_s109 = (272u + sizeof(_g4_t_v224)) > _g4_s108 ? (272u + sizeof(_g4_t_v224)) : _g4_s108,
    _g4_s110 = (276u + sizeof(_g4_t_v225)) > _g4_s109 ? (276u + sizeof(_g4_t_v225)) : _g4_s109,
    _g4_s111 = (280u + sizeof(_g4_t_v226)) > _g4_s110 ? (280u + sizeof(_g4_t_v226)) : _g4_s110,
    _g4_s112 = (284u + sizeof(_g4_t_v227)) > _g4_s111 ? (284u + sizeof(_g4_t_v227)) : _g4_s111,
    _g4_s113 = (288u + sizeof(_g4_t_v228)) > _g4_s112 ? (288u + sizeof(_g4_t_v228)) : _g4_s112,
    _g4_s114 = (304u + sizeof(_g4_t_v229)) > _g4_s113 ? (304u + sizeof(_g4_t_v229)) : _g4_s113,
    _g4_s115 = (308u + sizeof(_g4_t_v230)) > _g4_s114 ? (308u + sizeof(_g4_t_v230)) : _g4_s114,
    _g4_s116 = (312u + sizeof(_g4_t_v231)) > _g4_s115 ? (312u + sizeof(_g4_t_v231)) : _g4_s115,
    _g4_s117 = (316u + sizeof(_g4_t_v232)) > _g4_s116 ? (316u + sizeof(_g4_t_v232)) : _g4_s116,
    _g4_s118 = (320u + sizeof(_g4_t_v233)) > _g4_s117 ? (320u + sizeof(_g4_t_v233)) : _g4_s117,
    _g4_s119 = (324u + sizeof(_g4_t_v234)) > _g4_s118 ? (324u + sizeof(_g4_t_v234)) : _g4_s118,
    _g4_s120 = (328u + sizeof(_g4_t_v235)) > _g4_s119 ? (328u + sizeof(_g4_t_v235)) : _g4_s119,
    _g4_s121 = (332u + sizeof(_g4_t_v236)) > _g4_s120 ? (332u + sizeof(_g4_t_v236)) : _g4_s120,
    _g4_s122 = (336u + sizeof(_g4_t_v237)) > _g4_s121 ? (336u + sizeof(_g4_t_v237)) : _g4_s121
  };
  alignas(16) uint8_t _g4_sf[_g4_s122];
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 12u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 20u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 44u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 44u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 48u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 48u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 52u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 52u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 56u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 56u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 60u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 60u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 64u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 64u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 68u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 68u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 68u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 72u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 76u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 76u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 76u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 76u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 76u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 76u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 80u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 80u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 84u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 84u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 84u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 84u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 88u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 88u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 88u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 88u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 88u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 92u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 92u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 92u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 92u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 100u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 100u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 100u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 100u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 104u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 104u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 108u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 108u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 108u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 112u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 112u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 112u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 128u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 128u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 128u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 132u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 132u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 132u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 132u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 136u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 136u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 136u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 136u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 136u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 136u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 136u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 140u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 140u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 140u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 140u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 144u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 144u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 144u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 148u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 148u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 152u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 152u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 152u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 152u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 156u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 156u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 156u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 156u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 156u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 156u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 156u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 160u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 164u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 168u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 172u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 176u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 180u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 184u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 192u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 196u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 208u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 212u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 216u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 220u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 224u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 228u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 232u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 236u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 240u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 244u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 256u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 260u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 264u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 268u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 272u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 276u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 280u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 284u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 288u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 304u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 308u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 312u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 316u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 320u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 324u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 328u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 332u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 336u);

  if ( *(uint32_t *)(a3 + 4) != 0 && *(uint32_t *)(a4 + 4) != 0 )
  {
    v133 = *((uint32_t *)a5 + 1);
    if ( a7 != 0 )
    {
      v201 = *(float *)a7;
      v202 = *(float *)(a7 + 4);
      v203 = *(float *)(a7 + 8);
      v204 = *(uint32_t *)(a7 + 12);
      v205 = *(float *)(a7 + 16);
      v206 = *(float *)(a7 + 20);
      v207 = *(uint64_t *)(a7 + 24);
      v8 = *(uint8_t **)(a7 + 36);
      v208 = *(uint32_t *)(a7 + 32);
      v209 = v8;
    }
    else
    {
      v208 = 0;
      v201 = *(float *)(a3 + 16);
      v202 = *(float *)(a3 + 20);
      v203 = *(float *)(a3 + 24);
      v204 = *(uint32_t *)(a3 + 28);
      v205 = *(float *)(a3 + 32);
      v206 = *(float *)(a3 + 36);
      v207 = *(uint64_t *)(a3 + 40);
      v209 = *(uint8_t **)a3;
    }
    if ( a8 != 0 )
    {
      v210 = *(float *)a8;
      v211 = *(float *)(a8 + 4);
      v212 = *(float *)(a8 + 8);
      v213 = *(uint32_t *)(a8 + 12);
      v214 = *(float *)(a8 + 16);
      v215 = *(float *)(a8 + 20);
      v216 = *(float *)(a8 + 24);
      v217 = *(float *)(a8 + 28);
      v9 = *(uint32_t *)(a8 + 36);
      v218 = *(uint32_t *)(a8 + 32);
      v219 = v9;
      v194 = (uint8_t *)v9;
      v10 = v218;
    }
    else
    {
      v218 = 0;
      v210 = *(float *)(a4 + 16);
      v211 = *(float *)(a4 + 20);
      v212 = *(float *)(a4 + 24);
      v213 = *(uint32_t *)(a4 + 28);
      v214 = *(float *)(a4 + 32);
      v215 = *(float *)(a4 + 36);
      v216 = *(float *)(a4 + 40);
      v217 = *(float *)(a4 + 44);
      v219 = *(uint32_t *)a4;
      v194 = (uint8_t *)v219;
      v10 = 0;
    }
    HIDWORD(v185) = HIDWORD(v207);
    v11 = v208;
    v181 = v210;
    v174 = v211;
    v170 = v212;
    v134 = v213;
    v151 = v214;
    v159 = v203;
    v146 = v216;
    result = v217;
    v155 = v205;
    v142 = v217;
    if ( a2 != 0
      || v201 <= v214
      && v202 <= v215
      && (result = v203, v203 <= v216)
      && (result = v210, v210 <= v205)
      && (result = v211, v211 <= v206)
      && (result = v212, v212 <= *(float *)&v207) )
    {
      LODWORD(v185) = v207;
      v12 = v209;
      v167 = v206;
      v164 = v204;
      v140 = v202;
      v190 = v201;
      v161 = v215;
      while ( 1 )
      {
        if ( a2 != 0 && v12 == v194 )
        {
          v86 = v12[3];
          if ( v86 >= 0 )
            goto LABEL_29;
          v11 = v208 + 1;
          v173 = v208 + 2 * (*((uint16_t *)v12 + 2) | ((v86 & 0x7F) << 16));
          v158 = v202;
          v154 = (uint8_t *)(*(uint32_t *)a3 + 6 * (v208 + 1));
          v87 = *(uint32_t *)a3 + 6 * v173;
          v166 = *v154;
          v150 = v154[1];
          v145 = v154[2];
          v88 = *(uint8_t *)v87;
          v192 = *(uint8_t *)v87 & 0xF;
          v89 = *(uint8_t *)(v87 + 1);
          v199 = v203;
          v179 = *(uint8_t *)(v87 + 1) & 0xF;
          v90 = (float)(v205 - v201) * 0.0044247787f;
          v91 = (float)(v206 - v202) * 0.0044247787f;
          v185 = __PAIR64__(LODWORD(v205), LODWORD(v206));
          v183 = *(float *)&v207;
          LOBYTE(v87) = *(uint8_t *)(v87 + 2);
          v92 = (v87 & 0xF) * (v87 & 0xF);
          v169 = 0.0044247787f * (float)(*(float *)&v207 - v203);
          v129 = v202 + (float)((float)((v89 >> 4) * (v89 >> 4)) * v91);
          v223 = 0;
          v227 = 0;
          v221 = v129;
          v228 = v173;
          v230 = v129;
          v232 = 0;
          v93 = (float)((float)((v88 >> 4) * (v88 >> 4)) * v90) + v201;
          v236 = 0.0;
          v237 = v173;
          v163 = (float)((float)(((int)(uint8_t)v87 >> 4) * ((int)(uint8_t)v87 >> 4)) * v169) + v203;
          v220 = v93;
          v229 = v93;
          v138 = v205 - (float)((float)(v192 * v192) * v90);
          v94 = *((uint32_t *)a5 + 1);
          v95 = *((uint32_t *)a5 + 2);
          v224 = v138;
          v180 = v206 - (float)((float)(v179 * v179) * v91);
          v233 = v138;
          v225 = v180;
          v234 = v180;
          v132 = *(float *)&v207 - (float)((float)v92 * v169);
          v96 = v163;
          v226 = v132;
          v235 = v132;
          v222 = v163;
          v231 = v163;
          v97 = v201;
          if ( v94 == (v95 & 0x3FFFFFFF) )
          {
            v193 = v201;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
            v96 = v163;
            v97 = v193;
            v94 = *((uint32_t *)a5 + 1);
          }
          v190 = v97 + (float)((float)(((int)v166 >> 4) * ((int)v166 >> 4)) * v90);
          v98 = v199 + (float)((float)(((int)v145 >> 4) * ((int)v145 >> 4)) * v169);
          v99 = (float)((float)(((int)v150 >> 4) * ((int)v150 >> 4)) * v91) + v158;
          v155 = *((float *)&v185 + 1) - (float)(v90 * (float)((v166 & 0xF) * (v166 & 0xF)));
          v100 = *(float *)&v185 - (float)((float)((v150 & 0xF) * (v150 & 0xF)) * v91);
          v140 = v99;
          v159 = v98;
          v161 = v100;
          v200 = *(uint32_t *)a5;
          *((uint32_t *)a5 + 1) = v94 + 1;
          v101 = v200 + 96 * v94;
          *(float *)&v185 = v183 - (float)((float)((v145 & 0xF) * (v145 & 0xF)) * v169);
          *(float *)v101 = v220;
          *(float *)(v101 + 4) = v221;
          *(float *)(v101 + 8) = v222;
          *(uint32_t *)(v101 + 12) = v223;
          *(float *)(v101 + 16) = v224;
          *(float *)(v101 + 20) = v225;
          *(float *)(v101 + 24) = v226;
          *(uint32_t *)(v101 + 28) = v227;
          *(uint32_t *)(v101 + 32) = v228;
          *(float *)(v101 + 48) = v229;
          *(float *)(v101 + 52) = v230;
          *(float *)(v101 + 56) = v231;
          *(uint32_t *)(v101 + 60) = v232;
          *(float *)(v101 + 64) = v233;
          *(float *)(v101 + 68) = v234;
          *(float *)(v101 + 72) = v235;
          *(float *)(v101 + 76) = v236;
          *(uint32_t *)(v101 + 80) = v237;
          if ( v190 <= v138
            && v99 <= v180
            && v98 <= v132
            && v93 <= (float)(*((float *)&v185 + 1) - (float)(v90 * (float)((v166 & 0xF) * (v166 & 0xF))))
            && v129 <= v100
            && v96 <= *(float *)&v185 )
          {
            v102 = *((uint32_t *)a5 + 2);
            v222 = v98;
            v237 = v173;
            v103 = *((uint32_t *)a5 + 1);
            v229 = v93;
            v223 = 0;
            v225 = v100;
            v227 = 0;
            v228 = v11;
            v234 = v180;
            v232 = 0;
            v236 = 0.0;
            v220 = v190;
            v221 = v99;
            v224 = *((float *)&v185 + 1) - (float)(v90 * (float)((v166 & 0xF) * (v166 & 0xF)));
            v226 = v183 - (float)((float)((v145 & 0xF) * (v145 & 0xF)) * v169);
            v230 = v129;
            v231 = v96;
            v233 = v138;
            v235 = v132;
            if ( v103 == (v102 & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
              v103 = *((uint32_t *)a5 + 1);
            }
            v104 = v103 + 1;
            v105 = *(uint32_t *)a5 + 96 * v103;
            *((uint32_t *)a5 + 1) = v104;
            *(float *)v105 = v220;
            *(float *)(v105 + 4) = v221;
            *(float *)(v105 + 8) = v222;
            *(uint32_t *)(v105 + 12) = v223;
            *(float *)(v105 + 16) = v224;
            *(float *)(v105 + 20) = v225;
            *(float *)(v105 + 24) = v226;
            *(uint32_t *)(v105 + 28) = v227;
            *(uint32_t *)(v105 + 32) = v228;
            *(float *)(v105 + 48) = v229;
            *(float *)(v105 + 52) = v230;
            *(float *)(v105 + 56) = v231;
            *(uint32_t *)(v105 + 60) = v232;
            *(float *)(v105 + 64) = v233;
            *(float *)(v105 + 68) = v234;
            *(float *)(v105 + 72) = v235;
            *(float *)(v105 + 76) = v236;
            *(uint32_t *)(v105 + 80) = v237;
          }
          v206 = v100;
          v208 = v11;
          v209 = v154;
          *(float *)&v207 = v183 - (float)((float)((v145 & 0xF) * (v145 & 0xF)) * v169);
          v218 = v11;
          v219 = (int)(uintptr_t)(v154);
          v194 = v154;
          v210 = v190;
          v12 = v154;
          v10 = v11;
          result = 0.0;
          v201 = v190;
          v215 = v100;
          v203 = v98;
          v212 = v98;
          v216 = *(float *)&v207;
          v146 = *(float *)&v207;
          v202 = v99;
          v204 = 0;
          v205 = *((float *)&v185 + 1) - (float)(v90 * (float)((v166 & 0xF) * (v166 & 0xF)));
          HIDWORD(v207) = 0;
          v211 = v99;
          v213 = 0;
          v214 = v205;
          v217 = 0.0;
          v151 = v205;
          v170 = v98;
          v174 = v99;
          v181 = v190;
          v167 = v100;
          v142 = 0.0;
          v134 = 0;
          HIDWORD(v185) = 0;
          v164 = 0;
        }
        else
        {
          v13 = v12[3];
          if ( (v13 & 0x80u) != 0 )
          {
            v128 = v208 + 1;
            v127 = v208 + 2 * (*((uint16_t *)v12 + 2) | ((v13 & 0x7F) << 16));
            v42 = (uint8_t *)(*(uint32_t *)a3 + 6 * (v208 + 1));
            v43 = (uint8_t *)(*(uint32_t *)a3 + 6 * v127);
            v44 = (float)(v206 - v202) * 0.0044247787f;
            v45 = (float)(v205 - v201) * 0.0044247787f;
            v46 = (float)(*(float *)&v207 - v203) * 0.0044247787f;
            v188 = v42[2];
            v156 = v188 & 0xF;
            v47 = v43[1];
            v191 = (float)((float)(((int)v42[1] >> 4) * ((int)v42[1] >> 4)) * v44) + v202;
            v48 = (float)((float)(((int)*v42 >> 4) * ((int)*v42 >> 4)) * v45) + v201;
            v189 = (float)((float)((v188 >> 4) * (v188 >> 4)) * v46) + v203;
            v165 = v205 - (float)((float)((*v42 & 0xF) * (*v42 & 0xF)) * v45);
            v160 = v206 - (float)((float)((v42[1] & 0xF) * (v42[1] & 0xF)) * v44);
            v157 = *(float *)&v207 - (float)((float)(v156 * v156) * v46);
            v186 = (float)((float)(((int)v43[2] >> 4) * ((int)v43[2] >> 4)) * v46) + v203;
            v49 = (float)((float)(((int)*v43 >> 4) * ((int)*v43 >> 4)) * v45) + v201;
            v141 = v205 - (float)(v45 * (float)((*v43 & 0xF) * (*v43 & 0xF)));
            v50 = v194[3];
            v51 = (float)((float)(((int)v47 >> 4) * ((int)v47 >> 4)) * v44) + v202;
            v131 = v206 - (float)((float)((v47 & 0xF) * (v47 & 0xF)) * v44);
            v168 = *(float *)&v207 - (float)((float)((v43[2] & 0xF) * (v43[2] & 0xF)) * v46);
            if ( v50 < 0 )
            {
              v121 = v218 + 1;
              v119 = v218 + 2 * (*((uint16_t *)v194 + 2) | ((v50 & 0x7F) << 16));
              v65 = (float)(v214 - v210) * 0.0044247787f;
              v66 = (float)(v215 - v211) * 0.0044247787f;
              v67 = (float)(v216 - v212) * 0.0044247787f;
              v68 = (uint8_t *)(*(uint32_t *)a4 + 6 * (v218 + 1));
              v69 = (uint8_t *)(*(uint32_t *)a4 + 6 * v119);
              v197 = v68[2];
              v148 = v197 & 0xF;
              v70 = v69[1];
              v136 = v70 & 0xF;
              v177 = (int)v70 >> 4;
              v71 = v69[2];
              v153 = (float)((float)(((int)*v68 >> 4) * ((int)*v68 >> 4)) * v65) + v210;
              v125 = (float)((float)(((int)v68[1] >> 4) * ((int)v68[1] >> 4)) * v66) + v211;
              v123 = (float)((float)((v197 >> 4) * (v197 >> 4)) * v67) + v212;
              v198 = v214 - (float)((float)((*v68 & 0xF) * (*v68 & 0xF)) * v65);
              v172 = v215 - (float)((float)((v68[1] & 0xF) * (v68[1] & 0xF)) * v66);
              v162 = v216 - (float)((float)(v148 * v148) * v67);
              v149 = v210 + (float)((float)(((int)*v69 >> 4) * ((int)*v69 >> 4)) * v65);
              v72 = (float)(v177 * v177) * v66;
              v178 = (float)((float)(((int)v71 >> 4) * ((int)v71 >> 4)) * v67) + v212;
              v73 = false;
              v74 = v214 - (float)((float)((*v69 & 0xF) * (*v69 & 0xF)) * v65);
              v75 = v72 + v211;
              v76 = v215 - (float)((float)(v136 * v136) * v66);
              result = v216 - (float)((float)((v71 & 0xF) * (v71 & 0xF)) * v67);
              v182 = result;
              if ( v48 <= v198 && v191 <= v172 && v189 <= v162 && v153 <= v165 && v125 <= v160 )
                v73 = v123 <= v157;
              v77 = false;
              if ( v48 <= v74 && v191 <= v76 && v189 <= result && v149 <= v165 && v75 <= v160 )
                v77 = v178 <= v157;
              v78 = false;
              if ( v49 <= v198 && v51 <= v172 && v186 <= v162 && v153 <= v141 && v125 <= v131 )
                v78 = v123 <= v168;
              if ( v49 <= v74 && v51 <= v76 && v186 <= result )
              {
                result = v149;
                if ( v149 <= v141 && v75 <= v131 )
                {
                  result = v178;
                  if ( v178 <= v168 )
                  {
                    v228 = v127;
                    v237 = v119;
                    v222 = v186;
                    v223 = 0;
                    v79 = *((uint32_t *)a5 + 2);
                    v224 = v141;
                    v80 = *((uint32_t *)a5 + 1);
                    v225 = v131;
                    v227 = 0;
                    v232 = 0;
                    v226 = v168;
                    v236 = 0.0;
                    v229 = v149;
                    v144 = v80;
                    result = v178;
                    v220 = v49;
                    v221 = v51;
                    v230 = v75;
                    v231 = v178;
                    v233 = v74;
                    v234 = v215 - (float)((float)(v136 * v136) * v66);
                    v235 = v182;
                    if ( v80 == (v79 & 0x3FFFFFFF) )
                    {
                      v117 = v73;
                      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                      v73 = v117;
                      v80 = *((uint32_t *)a5 + 1);
                      v144 = v80;
                    }
                    v137 = *(uint32_t *)a5;
                    *((uint32_t *)a5 + 1) = v80 + 1;
                    v81 = v137 + 96 * v144;
                    *(float *)v81 = v220;
                    *(float *)(v81 + 4) = v221;
                    *(float *)(v81 + 8) = v222;
                    *(uint32_t *)(v81 + 12) = v223;
                    *(float *)(v81 + 16) = v224;
                    *(float *)(v81 + 20) = v225;
                    *(float *)(v81 + 24) = v226;
                    *(uint32_t *)(v81 + 28) = v227;
                    *(uint32_t *)(v81 + 32) = v228;
                    *(float *)(v81 + 48) = v229;
                    *(float *)(v81 + 52) = v230;
                    *(float *)(v81 + 56) = v231;
                    *(uint32_t *)(v81 + 60) = v232;
                    *(float *)(v81 + 64) = v233;
                    *(float *)(v81 + 68) = v234;
                    *(float *)(v81 + 72) = v235;
                    *(float *)(v81 + 76) = v236;
                    *(uint32_t *)(v81 + 80) = v237;
                  }
                }
              }
              if ( v78 )
              {
                v221 = v51;
                v228 = v127;
                v222 = v186;
                v106 = a5;
                v224 = v141;
                v237 = v121;
                v225 = v131;
                v223 = 0;
                v107 = *((uint32_t *)a5 + 2);
                v226 = v168;
                v108 = *((uint32_t *)a5 + 1);
                v229 = v153;
                v227 = 0;
                v230 = v125;
                v232 = 0;
                v236 = 0.0;
                v231 = v123;
                v233 = v198;
                v234 = v172;
                v220 = v49;
                v235 = v162;
                if ( v108 == (v107 & 0x3FFFFFFF) )
                {
                  v139 = v73;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                  v73 = v139;
                  v106 = a5;
                  v108 = *((uint32_t *)a5 + 1);
                }
                v109 = v108 + 1;
                v110 = *(uint32_t *)v106 + 96 * v108;
                *((uint32_t *)a5 + 1) = v109;
                *(float *)v110 = v220;
                *(float *)(v110 + 4) = v221;
                *(float *)(v110 + 8) = v222;
                *(uint32_t *)(v110 + 12) = v223;
                *(float *)(v110 + 16) = v224;
                *(float *)(v110 + 20) = v225;
                *(float *)(v110 + 24) = v226;
                *(uint32_t *)(v110 + 28) = v227;
                *(uint32_t *)(v110 + 32) = v228;
                *(float *)(v110 + 48) = v229;
                *(float *)(v110 + 52) = v230;
                *(float *)(v110 + 56) = v231;
                *(uint32_t *)(v110 + 60) = v232;
                *(float *)(v110 + 64) = v233;
                *(float *)(v110 + 68) = v234;
                *(float *)(v110 + 72) = v235;
                *(float *)(v110 + 76) = v236;
                *(uint32_t *)(v110 + 80) = v237;
              }
              if ( v77 )
              {
                v221 = v191;
                v228 = v128;
                v111 = a5;
                v237 = v119;
                v222 = v189;
                v223 = 0;
                v224 = v165;
                v227 = 0;
                v112 = *((uint32_t *)a5 + 2);
                v225 = v160;
                v113 = *((uint32_t *)a5 + 1);
                v226 = v157;
                v232 = 0;
                v229 = v149;
                v236 = 0.0;
                v231 = v178;
                v220 = v48;
                v230 = v75;
                v233 = v74;
                v234 = v76;
                v235 = v182;
                if ( v113 == (v112 & 0x3FFFFFFF) )
                {
                  v184 = v73;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                  v73 = v184;
                  v111 = a5;
                  v113 = *((uint32_t *)a5 + 1);
                }
                v114 = v113 + 1;
                v115 = *(uint32_t *)v111 + 96 * v113;
                *((uint32_t *)a5 + 1) = v114;
                *(float *)v115 = v220;
                *(float *)(v115 + 4) = v221;
                *(float *)(v115 + 8) = v222;
                *(uint32_t *)(v115 + 12) = v223;
                *(float *)(v115 + 16) = v224;
                *(float *)(v115 + 20) = v225;
                *(float *)(v115 + 24) = v226;
                *(uint32_t *)(v115 + 28) = v227;
                *(uint32_t *)(v115 + 32) = v228;
                *(float *)(v115 + 48) = v229;
                *(float *)(v115 + 52) = v230;
                *(float *)(v115 + 56) = v231;
                *(uint32_t *)(v115 + 60) = v232;
                *(float *)(v115 + 64) = v233;
                *(float *)(v115 + 68) = v234;
                *(float *)(v115 + 72) = v235;
                *(float *)(v115 + 76) = v236;
                *(uint32_t *)(v115 + 80) = v237;
              }
              if ( v73 )
              {
                v220 = v48;
                v228 = v128;
                v221 = v191;
                v82 = a5;
                v222 = v189;
                v237 = v121;
                v224 = v165;
                v223 = 0;
                v83 = *((uint32_t *)a5 + 2);
                v225 = v160;
                v84 = *((uint32_t *)a5 + 1);
                v226 = v157;
                v227 = 0;
                v229 = v153;
                v232 = 0;
                v236 = 0.0;
                v230 = v125;
                v231 = v123;
                v233 = v198;
                v234 = v172;
                v235 = v162;
                if ( v84 == (v83 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                  v82 = a5;
                  v84 = *((uint32_t *)a5 + 1);
                }
                v85 = v84 + 1;
                v61 = *(uint32_t *)v82 + 96 * v84;
                *((uint32_t *)a5 + 1) = v85;
                goto LABEL_57;
              }
            }
            else
            {
              result = v214;
              v52 = false;
              if ( v48 <= v214 && v191 <= v215 && v189 <= v216 && v210 <= v165 && v211 <= v160 )
                v52 = v212 <= v157;
              if ( v49 <= v214 && v51 <= v215 && v186 <= v216 )
              {
                result = v210;
                if ( v210 <= v141 )
                {
                  result = v211;
                  if ( v211 <= v131 )
                  {
                    result = v212;
                    if ( v212 <= v168 )
                    {
                      v221 = v51;
                      v53 = a5;
                      v226 = v168;
                      v228 = v127;
                      v229 = v181;
                      v223 = 0;
                      v54 = *((uint32_t *)a5 + 2);
                      v230 = v174;
                      v55 = *((uint32_t *)a5 + 1);
                      v231 = v170;
                      v227 = 0;
                      v232 = v134;
                      v237 = v10;
                      v233 = v151;
                      v234 = v161;
                      v235 = v146;
                      v220 = v49;
                      v222 = v186;
                      v224 = v141;
                      v225 = v131;
                      v236 = v142;
                      if ( v55 == (v54 & 0x3FFFFFFF) )
                      {
                        v187 = v10;
                        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                        v10 = v187;
                        v53 = a5;
                        v55 = *((uint32_t *)a5 + 1);
                      }
                      v56 = v55 + 1;
                      v57 = *(uint32_t *)v53 + 96 * v55;
                      *((uint32_t *)a5 + 1) = v56;
                      *(float *)v57 = v220;
                      *(float *)(v57 + 4) = v221;
                      *(float *)(v57 + 8) = v222;
                      *(uint32_t *)(v57 + 12) = v223;
                      *(float *)(v57 + 16) = v224;
                      *(float *)(v57 + 20) = v225;
                      *(float *)(v57 + 24) = v226;
                      *(uint32_t *)(v57 + 28) = v227;
                      *(uint32_t *)(v57 + 32) = v228;
                      *(float *)(v57 + 48) = v229;
                      *(float *)(v57 + 52) = v230;
                      *(float *)(v57 + 56) = v231;
                      *(uint32_t *)(v57 + 60) = v232;
                      *(float *)(v57 + 64) = v233;
                      *(float *)(v57 + 68) = v234;
                      *(float *)(v57 + 72) = v235;
                      *(float *)(v57 + 76) = v236;
                      *(uint32_t *)(v57 + 80) = v237;
                    }
                  }
                }
              }
              if ( v52 )
              {
                v220 = v48;
                v221 = v191;
                v228 = v128;
                v222 = v189;
                v223 = 0;
                v58 = *((uint32_t *)a5 + 2);
                v224 = v165;
                v59 = *((uint32_t *)a5 + 1);
                v225 = v160;
                v227 = 0;
                v226 = v157;
                v237 = v10;
                v229 = v181;
                v230 = v174;
                v231 = v170;
                v232 = v134;
                v233 = v151;
                v234 = v161;
                v235 = v146;
                v236 = v142;
                if ( v59 == (v58 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                  v59 = *((uint32_t *)a5 + 1);
                }
                v60 = *(uint32_t *)a5;
                *((uint32_t *)a5 + 1) = v59 + 1;
                v61 = v60 + 96 * v59;
LABEL_57:
                *(float *)v61 = v220;
                *(float *)(v61 + 4) = v221;
                *(float *)(v61 + 8) = v222;
                *(uint32_t *)(v61 + 12) = v223;
                *(float *)(v61 + 16) = v224;
                *(float *)(v61 + 20) = v225;
                *(float *)(v61 + 24) = v226;
                *(uint32_t *)(v61 + 28) = v227;
LABEL_61:
                *(uint32_t *)(v61 + 32) = v228;
                *(float *)(v61 + 48) = v229;
                *(float *)(v61 + 52) = v230;
                *(float *)(v61 + 56) = v231;
                *(uint32_t *)(v61 + 60) = v232;
                *(float *)(v61 + 64) = v233;
                *(float *)(v61 + 68) = v234;
                *(float *)(v61 + 72) = v235;
                *(float *)(v61 + 76) = v236;
                *(uint32_t *)(v61 + 80) = v237;
              }
            }
          }
          else
          {
            v14 = v194[3];
            if ( (v14 & 0x80u) == 0 )
            {
              v116 = *((uint16_t *)v194 + 2) | (v14 << 16);
              G4_VCALL<void>(**a6, 8, *((uint16_t *)v12 + 2) | (v13 << 16),
                &v201);
              goto LABEL_29;
            }
            v122 = v218 + 1;
            v152 = (*((uint16_t *)v194 + 2) | ((v14 & 0x7F) << 16))
                 + (*((uint16_t *)v194 + 2) | ((v14 & 0x7F) << 16))
                 + v218;
            v15 = *(uint32_t *)a4 + 6 * (v218 + 1);
            v175 = (uint8_t *)(*(uint32_t *)a4 + 6 * v152);
            v16 = *(uint8_t *)v15;
            v195 = *(uint8_t *)v15 & 0xF;
            v17 = *(uint8_t *)(v15 + 1);
            LOBYTE(v15) = *(uint8_t *)(v15 + 2);
            v147 = v17 & 0xF;
            v135 = (float)(v215 - v211) * 0.0044247787f;
            v126 = 0.0044247787f * (float)(v216 - v212);
            v118 = *v175;
            v18 = *v175 & 0xF;
            v19 = (float)(v214 - v210) * 0.0044247787f;
            v130 = v175[1];
            v124 = v175[2];
            v176 = (float)((float)((v16 >> 4) * (v16 >> 4)) * v19) + v210;
            v120 = (float)((float)(((int)v17 >> 4) * ((int)v17 >> 4)) * v135) + v211;
            v171 = (float)((float)(((int)(uint8_t)v15 >> 4) * ((int)(uint8_t)v15 >> 4)) * v126) + v212;
            v20 = v15 & 0xF;
            v21 = v215 - (float)((float)(v147 * v147) * v135);
            v22 = v18 * v18;
            v23 = false;
            v196 = v214 - (float)((float)(v195 * v195) * v19);
            result = v216 - (float)((float)(v20 * v20) * v126);
            v143 = result;
            v24 = v214 - (float)((float)v22 * v19);
            if ( v201 <= v196 && v202 <= v21 && v203 <= result && v176 <= v205 && v120 <= v206 )
              v23 = v171 <= *(float *)&v207;
            if ( v201 <= v24 )
            {
              result = (float)(v215 - v211) * 0.0044247787f;
              if ( v202 <= (float)(v215 - (float)((float)((v130 & 0xF) * (v130 & 0xF)) * v135))
                && v203 <= (float)(v216 - (float)((float)((v124 & 0xF) * (v124 & 0xF)) * v126))
                && (float)((float)((float)(((int)v118 >> 4) * ((int)v118 >> 4)) * v19) + v210) <= v205 )
              {
                result = v211 + (float)(v135 * (float)(((int)v130 >> 4) * ((int)v130 >> 4)));
                if ( result <= v206
                  && (float)((float)((float)(((int)v124 >> 4) * ((int)v124 >> 4)) * v126) + v212) <= *(float *)&v207 )
                {
                  v25 = a5;
                  v237 = v152;
                  v228 = v11;
                  v232 = 0;
                  v229 = (float)((float)(((int)v118 >> 4) * ((int)v118 >> 4)) * v19) + v210;
                  v236 = 0.0;
                  v230 = v211 + (float)(v135 * (float)(((int)v130 >> 4) * ((int)v130 >> 4)));
                  v26 = *((uint32_t *)a5 + 1);
                  v27 = *((uint32_t *)a5 + 2) & 0x3FFFFFFF;
                  v231 = (float)((float)(((int)v124 >> 4) * ((int)v124 >> 4)) * v126) + v212;
                  v233 = v24;
                  v234 = v215 - (float)((float)((v130 & 0xF) * (v130 & 0xF)) * v135);
                  v235 = v216 - (float)((float)((v124 & 0xF) * (v124 & 0xF)) * v126);
                  if ( v26 == v27 )
                  {
                    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                    v25 = a5;
                    v26 = *((uint32_t *)a5 + 1);
                  }
                  v28 = v26 + 1;
                  v29 = *(uint32_t *)v25 + 96 * v26;
                  *((uint32_t *)a5 + 1) = v28;
                  v30 = v228;
                  *(float *)v29 = v190;
                  *(uint32_t *)(v29 + 32) = v30;
                  v31 = v229;
                  *(float *)(v29 + 4) = v140;
                  *(float *)(v29 + 48) = v31;
                  v32 = v230;
                  *(float *)(v29 + 8) = v159;
                  *(float *)(v29 + 52) = v32;
                  v33 = v231;
                  *(uint32_t *)(v29 + 12) = v164;
                  *(float *)(v29 + 56) = v33;
                  v34 = v232;
                  *(float *)(v29 + 16) = v155;
                  *(uint32_t *)(v29 + 60) = v34;
                  v35 = v233;
                  *(float *)(v29 + 20) = v167;
                  *(float *)(v29 + 64) = v35;
                  v36 = v234;
                  *(uint64_t *)(v29 + 24) = v185;
                  *(float *)(v29 + 68) = v36;
                  *(float *)(v29 + 72) = v235;
                  *(float *)(v29 + 76) = v236;
                  *(uint32_t *)(v29 + 80) = v237;
                }
              }
            }
            if ( v23 )
            {
              v237 = v122;
              v228 = v11;
              v229 = v176;
              v232 = 0;
              v62 = *((uint32_t *)a5 + 2);
              v230 = v120;
              v63 = *((uint32_t *)a5 + 1);
              v231 = v171;
              v236 = 0.0;
              v233 = v196;
              v234 = v21;
              v235 = v143;
              if ( v63 == (v62 & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 96, v116);
                v63 = *((uint32_t *)a5 + 1);
              }
              v64 = *(uint32_t *)a5;
              *((uint32_t *)a5 + 1) = v63 + 1;
              v61 = v64 + 96 * v63;
              *(float *)v61 = v190;
              *(float *)(v61 + 4) = v140;
              *(float *)(v61 + 8) = v159;
              *(uint32_t *)(v61 + 12) = v164;
              *(float *)(v61 + 16) = v155;
              *(float *)(v61 + 20) = v167;
              *(uint64_t *)(v61 + 24) = v185;
              goto LABEL_61;
            }
          }
LABEL_29:
          v37 = *((uint32_t *)a5 + 1);
          if ( v133 >= v37 )
            return result;
          v38 = v37 - 1;
          *((uint32_t *)a5 + 1) = v38;
          v39 = *(uint32_t *)a5 + 96 * v38;
          v190 = *(float *)v39;
          v185 = *(uint64_t *)(v39 + 24);
          v11 = *(uint32_t *)(v39 + 32);
          v159 = *(float *)(v39 + 8);
          v181 = *(float *)(v39 + 48);
          v164 = *(uint32_t *)(v39 + 12);
          v174 = *(float *)(v39 + 52);
          v167 = *(float *)(v39 + 20);
          v170 = *(float *)(v39 + 56);
          result = *(float *)(v39 + 76);
          v134 = *(uint32_t *)(v39 + 60);
          v161 = *(float *)(v39 + 68);
          v140 = *(float *)(v39 + 4);
          v155 = *(float *)(v39 + 16);
          v151 = *(float *)(v39 + 64);
          v146 = *(float *)(v39 + 72);
          v142 = result;
          v10 = *(uint32_t *)(v39 + 80);
          v208 = v11;
          v203 = v159;
          v218 = v10;
          v205 = v155;
          v40 = *(uint8_t **)a3;
          v204 = v164;
          v12 = &v40[6 * v11];
          v209 = v12;
          v206 = v167;
          v41 = *(uint32_t *)a4;
          v202 = v140;
          v219 = 3 * v10 + 3 * v10 + v41;
          v210 = v181;
          v214 = v151;
          v201 = v190;
          v207 = v185;
          v211 = v174;
          v212 = v170;
          v213 = v134;
          v215 = v161;
          v216 = v146;
          v217 = result;
          v194 = (uint8_t *)v219;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_2a3d83  (binary VA: 0x160aaa0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdStaticTree_DefaultTr_2a3d83(int a1, int32_t *a2, float *a3)
{
  int result;
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm4_4
  __m128 v7;
  __m128 v8;
  __m128 v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24;
  int v25;
  uint8_t v26;
  int v27;
  uint8_t v28; // si
  uint8_t v29;
  uint8_t v30; // si
  int v31;
  int v32;
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm6_4
  __m128i v37;
  float v38;
  float v39; // xmm6_4
  float v40; // xmm7_4
  float v41; // xmm5_4
  __m128i v42;
  __m128i v43;
  unsigned int v44;
  float v45;
  float v46; // xmm5_4
  __m128i v47;
  float v48; // xmm4_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51;
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm6_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm6_4
  float v62; // xmm7_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  __m128i v65;
  bool v66;
  __m128 m128i_i128;
  __m128 v68;
  float v69; // xmm4_4
  float v70; // xmm0_4
  float v71; // xmm6_4
  float v72; // xmm5_4
  float v73; // xmm4_4
  float v74; // xmm0_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm4_4
  float v78; // xmm0_4
  int v79;
  int32_t v80; // xmm0_4
  char v81;
  float v82;
  int v83;
  int v84;
  int32_t v85;
  int32_t *v86;
  int32_t v87;
  int32_t v88;
  uint32_t *v89;
  float *v90;
  float *v91;
  int v92;
  typedef float *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef float _g4_t_v97;
  typedef int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef float _g4_t_v107;
  typedef __m128 _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef int32_t _g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef float _g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef int32_t _g4_t_v115;
  typedef int _g4_t_v116;
  typedef uint8_t *_g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef int32_t _g4_t_v121;
  typedef unsigned int _g4_t_v122;
  typedef float _g4_t_v123;
  typedef unsigned int _g4_t_v124;
  typedef int32_t _g4_t_v125;
  typedef int _g4_t_v126;
  typedef uint8_t *_g4_t_v127;
  typedef int32_t _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef int32_t _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef int32_t _g4_t_v135;
  typedef int _g4_t_v136;
  typedef uint8_t *_g4_t_v137;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v93)) > _g4_s0 ? (8u + sizeof(_g4_t_v93)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v94)) > _g4_s1 ? (28u + sizeof(_g4_t_v94)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v95)) > _g4_s2 ? (32u + sizeof(_g4_t_v95)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v96)) > _g4_s3 ? (36u + sizeof(_g4_t_v96)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v97)) > _g4_s4 ? (36u + sizeof(_g4_t_v97)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v98)) > _g4_s5 ? (40u + sizeof(_g4_t_v98)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v99)) > _g4_s6 ? (40u + sizeof(_g4_t_v99)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v100)) > _g4_s7 ? (44u + sizeof(_g4_t_v100)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v101)) > _g4_s8 ? (44u + sizeof(_g4_t_v101)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v102)) > _g4_s9 ? (48u + sizeof(_g4_t_v102)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v103)) > _g4_s10 ? (48u + sizeof(_g4_t_v103)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v104)) > _g4_s11 ? (52u + sizeof(_g4_t_v104)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v105)) > _g4_s12 ? (52u + sizeof(_g4_t_v105)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v106)) > _g4_s13 ? (56u + sizeof(_g4_t_v106)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v107)) > _g4_s14 ? (56u + sizeof(_g4_t_v107)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v108)) > _g4_s15 ? (64u + sizeof(_g4_t_v108)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v109)) > _g4_s16 ? (80u + sizeof(_g4_t_v109)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v110)) > _g4_s17 ? (84u + sizeof(_g4_t_v110)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v111)) > _g4_s18 ? (88u + sizeof(_g4_t_v111)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v112)) > _g4_s19 ? (92u + sizeof(_g4_t_v112)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v113)) > _g4_s20 ? (96u + sizeof(_g4_t_v113)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v114)) > _g4_s21 ? (100u + sizeof(_g4_t_v114)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v115)) > _g4_s22 ? (104u + sizeof(_g4_t_v115)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v116)) > _g4_s23 ? (108u + sizeof(_g4_t_v116)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v117)) > _g4_s24 ? (112u + sizeof(_g4_t_v117)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v118)) > _g4_s25 ? (124u + sizeof(_g4_t_v118)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v119)) > _g4_s26 ? (128u + sizeof(_g4_t_v119)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v120)) > _g4_s27 ? (132u + sizeof(_g4_t_v120)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v121)) > _g4_s28 ? (136u + sizeof(_g4_t_v121)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v122)) > _g4_s29 ? (140u + sizeof(_g4_t_v122)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v123)) > _g4_s30 ? (144u + sizeof(_g4_t_v123)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v124)) > _g4_s31 ? (148u + sizeof(_g4_t_v124)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v125)) > _g4_s32 ? (152u + sizeof(_g4_t_v125)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v126)) > _g4_s33 ? (156u + sizeof(_g4_t_v126)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v127)) > _g4_s34 ? (160u + sizeof(_g4_t_v127)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v128)) > _g4_s35 ? (172u + sizeof(_g4_t_v128)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v129)) > _g4_s36 ? (176u + sizeof(_g4_t_v129)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v130)) > _g4_s37 ? (180u + sizeof(_g4_t_v130)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v131)) > _g4_s38 ? (184u + sizeof(_g4_t_v131)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v132)) > _g4_s39 ? (188u + sizeof(_g4_t_v132)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v133)) > _g4_s40 ? (192u + sizeof(_g4_t_v133)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v134)) > _g4_s41 ? (196u + sizeof(_g4_t_v134)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v135)) > _g4_s42 ? (200u + sizeof(_g4_t_v135)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v136)) > _g4_s43 ? (204u + sizeof(_g4_t_v136)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v137)) > _g4_s44 ? (208u + sizeof(_g4_t_v137)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 8u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 28u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 32u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 36u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 36u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 40u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 52u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 56u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 56u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 64u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 80u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 84u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 88u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 92u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 96u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 100u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 104u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 108u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 112u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 124u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 128u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 132u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 136u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 140u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 144u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 148u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 152u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 156u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 160u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 172u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 176u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 180u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 184u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 188u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 192u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 196u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 200u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 204u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 208u);

  result = a1;
  if ( *(uint32_t *)(a1 + 4) != 0 )
  {
    v116 = 0;
    v4 = a3[4];
    v5 = a3[12];
    v6 = a3[11];
    v94 = a2[1];
g4_m128_lane<int32_t>(v108, 3) = *(uint32_t *)(a1 + 16);
g4_m128_raw(v7) =g4_m128_lane<uint32_t>(v108, 3);
    v109 = *(float *)(a1 + 20);
g4_m128_lane<float>(v7, 0) = (float)(g4_m128_lane<float>(v108, 3) - v4) * v5;
    v110 = *(float *)(a1 + 24);
    v111 = *(uint32_t *)(a1 + 28);
    v112 = *(unsigned int *)(a1 + 32);
g4_m128_raw(v8) = v112;
    v113 = *(float *)(a1 + 36);
g4_m128_lane<float>(v8, 0) = (float)(*(float *)&v112 - v4) * v5;
g4_m128_lane<int32_t>(v9, 0) = 0;
    v114 = *(unsigned int *)(a1 + 40);
    v115 = *(uint32_t *)(a1 + 44);
    result = *(uint32_t *)a1;
    v117 = *(uint8_t **)a1;
g4_m128_lane<int32_t>(v108, 0) = 0;
    if (g4_m128_lane<float>(v7, 0) >g4_m128_lane<float>(v8, 0) )
    {
      v10 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v8, v9), v8), 0);
      v11 = fminf(v6,g4_m128_lane<float>(v7, 0));
    }
    else
    {
      v10 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v7, v9), v7), 0);
      v11 = fminf(v6,g4_m128_lane<float>(v8, 0));
    }
    v12 = a3[5];
    v13 = a3[13];
    v14 = (float)(v109 - v12) * v13;
    v15 = (float)(v113 - v12) * v13;
    if ( v14 > v15 )
    {
      v16 = fmaxf(v10, v15);
      v17 = fminf(v11, v14);
    }
    else
    {
      v16 = fmaxf(v10, v14);
      v17 = fminf(v11, v15);
    }
    v18 = a3[6];
    v19 = a3[14];
    v20 = (float)(v110 - v18) * v19;
    v21 = (float)(*(float *)&v114 - v18) * v19;
    if ( v20 > v21 )
    {
      v22 = fmaxf(v16, v21);
      v23 = fminf(v17, v20);
    }
    else
    {
      v22 = fmaxf(v16, v20);
      v23 = fminf(v17, v21);
    }
    if ( v23 >= v22 )
    {
g4_m128_lane<float>(v108, 1) = v6;
      while ( 1 )
      {
        v81 = *(uint8_t *)(result + 3);
        if ( v81 < 0 )
        {
          v126 = v116 + 1;
          v136 = v116 + 2 * (*(uint16_t *)(result + 4) | ((v81 & 0x7F) << 16));
          v24 = *(uint32_t *)a1;
          v127 = (uint8_t *)(*(uint32_t *)a1 + 6 * (v116 + 1));
          v137 = (uint8_t *)(v24 + 6 * v136);
          v25 = *v127;
          v102 = *v127 & 0xF;
          v26 = v127[1];
          v27 = v26;
          v28 = v127[2];
          v100 = v26 & 0xF;
          v29 = v28;
g4_m128_lane<int32_t>(v108, 2) = v27;
          v98 = v28 & 0xF;
          v106 = *v137;
          v30 = v137[1];
          v96 = v106 & 0xF;
g4_m128_lane<int32_t>(v108, 2) = v27 >> 4;
          v104 = v30;
          v31 = v30 & 0xF;
          LOBYTE(v24) = v137[2];
          v32 = (uint8_t)v24;
          v95 = v24 & 0xF;
          v33 = (float)(*(float *)&v112 -g4_m128_lane<float>(v108, 3)) * 0.0044247787f;
          v34 = (float)(v113 - v109) * 0.0044247787f;
          v35 = (float)(*(float *)&v114 - v110) * 0.0044247787f;
          v121 =g4_m128_lane<int32_t>(v108, 0);
          v125 =g4_m128_lane<int32_t>(v108, 0);
          v36 = (float)(g4_m128_lane<int32_t>(v108, 2) *g4_m128_lane<int32_t>(v108, 2));
g4_m128_lane<float>(v108, 2) = *(float *)&v112 - (float)((float)(v102 * v102) * v33);
          v122 =g4_m128_lane<uint32_t>(v108, 2);
g4_m128_raw(v37) = v114;
          v103 = v113 - (float)((float)(v100 * v100) * v34);
          v123 = v103;
          *(float *)g4_m128_ptr<int32_t>(v37) = *(float *)&v114 - (float)((float)(v98 * v98) * v35);
          v131 =g4_m128_lane<int32_t>(v108, 0);
          v135 =g4_m128_lane<int32_t>(v108, 0);
          v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
          v124 =g4_m128_lane<uint32_t>(v37, 0);
          v107 = (float)((float)((v106 >> 4) * (v106 >> 4)) * v33) +g4_m128_lane<float>(v108, 3);
          v128 = LODWORD(v107);
          v39 = (float)(v36 * v34) + v109;
          v40 = (float)((float)(((int)v29 >> 4) * ((int)v29 >> 4)) * v35) + v110;
          v118 = (float)((float)((v25 >> 4) * (v25 >> 4)) * v33) +g4_m128_lane<float>(v108, 3);
          v119 = v39;
          v120 = v40;
          v105 = (float)((float)((v104 >> 4) * (v104 >> 4)) * v34) + v109;
          v129 = v105;
          v101 = (float)((float)((v32 >> 4) * (v32 >> 4)) * v35) + v110;
          v130 = v101;
          v41 = (float)(v96 * v96) * v33;
g4_m128_raw(v42) = v112;
          *(float *)g4_m128_ptr<int32_t>(v42) = *(float *)&v112 - v41;
g4_m128_raw(v43) = LODWORD(v113);
          v44 = _mm_cvtsi128_si32(v42);
          v132 = *(float *)g4_m128_ptr<int32_t>(v42);
          *(float *)g4_m128_ptr<int32_t>(v43) = v113 - (float)((float)(v31 * v31) * v34);
          v133 = *(float *)g4_m128_ptr<int32_t>(v43);
          v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
          v46 = a3[4];
          *(float *)g4_m128_ptr<int32_t>(v42) = (float)(v95 * v95) * v35;
g4_m128_raw(v47) = v114;
          *(float *)g4_m128_ptr<int32_t>(v47) = *(float *)&v114 - *(float *)g4_m128_ptr<int32_t>(v42);
          v48 = a3[12];
          v49 = (float)(v118 - v46) * v48;
          v50 = (float)(g4_m128_lane<float>(v108, 2) - v46) * v48;
          v134 = *(float *)g4_m128_ptr<int32_t>(v47);
          v51 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
          if ( v49 > v50 )
          {
g4_m128_lane<int32_t>(v108, 2) = fmaxf(g4_m128_lane<float>(v108, 0), v50);
            v53 = fminf(g4_m128_lane<float>(v108, 1), v49);
          }
          else
          {
            v52 = fmaxf(g4_m128_lane<float>(v108, 0), v49);
            v53 = fminf(g4_m128_lane<float>(v108, 1), v50);
g4_m128_lane<float>(v108, 2) = v52;
          }
          v99 = a3[13];
          v97 = a3[5];
          v54 = (float)(v39 - v97) * v99;
          v55 = (float)(v103 - v97) * v99;
          if ( v54 > v55 )
          {
            v56 = fmaxf(g4_m128_lane<float>(v108, 2), v55);
            v57 = fminf(v53, v54);
          }
          else
          {
            v56 = fmaxf(g4_m128_lane<float>(v108, 2), v54);
            v57 = fminf(v53, v55);
          }
g4_m128_lane<float>(v108, 2) = v56;
          v58 = v56;
          v59 = a3[6];
          v60 = a3[14];
          v61 = (float)(v40 - v59) * v60;
          v62 = (float)(v38 - v59) * v60;
          if ( v61 > v62 )
          {
            v63 = fmaxf(v58, v62);
            v64 = fminf(v57, v61);
          }
          else
          {
            v63 = fmaxf(v58, v61);
            v64 = fminf(v57, v62);
          }
g4_m128_lane<float>(v108, 2) = v63;
          v65 = _mm_cvtsi32_si128(v44);
          *(float *)g4_m128_ptr<int32_t>(v65) = *(float *)g4_m128_ptr<int32_t>(v65) - v46;
          v66 = v64 < v63;
g4_m128_raw(v68) = LODWORD(v107);
g4_m128_lane<float>(v68, 0) = v107 - v46;
          m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v65));
g4_m128_lane<float>(m128i_i128, 0) = *(float *)g4_m128_ptr<int32_t>(v65) * v48;
g4_m128_lane<float>(v68, 0) =g4_m128_lane<float>(v68, 0) * v48;
          if (g4_m128_lane<float>(v68, 0) > (float)(*(float *)g4_m128_ptr<int32_t>(v65) * v48) )
          {
            v69 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(m128i_i128, v108), m128i_i128), 0);
            v70 = fminf(g4_m128_lane<float>(v108, 1),g4_m128_lane<float>(v68, 0));
          }
          else
          {
            v69 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v68, v108), v68), 0);
            v70 = fminf(g4_m128_lane<float>(v108, 1),g4_m128_lane<float>(m128i_i128, 0));
          }
          v71 = (float)(v45 - v97) * v99;
          v72 = (float)(v105 - v97) * v99;
          if ( v72 > v71 )
          {
            v73 = fmaxf(v69, v71);
            v74 = fminf(v70, v72);
          }
          else
          {
            v73 = fmaxf(v69, v72);
            v74 = fminf(v70, v71);
          }
          v75 = (float)(v101 - v59) * v60;
          v76 = (float)(v51 - v59) * v60;
          if ( v75 > v76 )
          {
            v77 = fmaxf(v73, v76);
            v78 = fminf(v74, v75);
          }
          else
          {
            v77 = fmaxf(v73, v75);
            v78 = fminf(v74, v76);
          }
          v79 = !v66 | (v78 >= v77 ? 2 : 0);
          switch ( v79 )
          {
            case 3:
              v85 =g4_m128_lane<float>(v108, 2) > v77;
              v86 = a2;
              *((uint32_t *)a3 + 16) = v85;
              v87 = a2[1];
              if ( v87 == (a2[2] & 0x3FFFFFFF) )
              {
g4_m128_lane<int32_t>(v108, 2) = v85;
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)a2,
                  48,
                  (int)(uintptr_t)(v93));
                v85 =g4_m128_lane<int32_t>(v108, 2);
                v86 = a2;
                v87 = a2[1];
              }
              v88 = v87 + 1;
g4_m128_lane<int32_t>(v108, 2) = *v86;
              v89 = (uint32_t *)(g4_m128_lane<int32_t>(v108, 2) + 48 * v87);
              a2[1] = v88;
              v90 = &v118 + 12 * (1 - v85);
              *v89 = *(uint32_t *)v90;
              v89[1] = *((uint32_t *)v90 + 1);
              v89[2] = *((uint32_t *)v90 + 2);
              v89[3] = *((uint32_t *)v90 + 3);
              v89[4] = *((uint32_t *)v90 + 4);
              v89[5] = *((uint32_t *)v90 + 5);
              v89[6] = *((uint32_t *)v90 + 6);
              v89[7] = *((uint32_t *)v90 + 7);
              v89[8] = *((uint32_t *)v90 + 8);
              v91 = &v118 + 12 * v85;
g4_m128_lane<float>(v108, 3) = *v91;
              v109 = v91[1];
              v110 = v91[2];
              v111 = *((uint32_t *)v91 + 3);
              v112 = *((unsigned int *)v91 + 4);
              v113 = v91[5];
              v114 = *((unsigned int *)v91 + 6);
              v115 = *((uint32_t *)v91 + 7);
              v80 = *((uint32_t *)a3 + 11);
              v92 = *((uint32_t *)v91 + 8);
              result = *((uint32_t *)v91 + 9);
              v116 = v92;
              v117 = (uint8_t *)result;
              goto LABEL_26;
            case 1:
              v80 =g4_m128_lane<int32_t>(v108, 1);
g4_m128_lane<float>(v108, 3) = v118;
              v109 = v119;
              v110 = v120;
              v111 = v121;
              v112 = v122;
              v113 = v123;
              v114 = v124;
              v115 = v125;
              v116 = v126;
              result = (int)(uintptr_t)(v127);
              v117 = v127;
              goto LABEL_26;
            case 2:
              v80 =g4_m128_lane<int32_t>(v108, 1);
g4_m128_lane<int32_t>(v108, 3) = v128;
              v109 = v129;
              v110 = v130;
              v111 = v131;
              *(float *)&v112 = v132;
              v113 = v133;
              *(float *)&v114 = v134;
              v115 = v135;
              v116 = v136;
              result = (int)(uintptr_t)(v137);
              v117 = v137;
              goto LABEL_26;
            default:
              break;
          }
        }
        else
        {
          v118 =g4_m128_lane<float>(v108, 1);
          v82 = *a3;
          v93 = &v118;
          *(uint32_t *)(LODWORD(v82) + 4) |= (*(int (**)(uint32_t, int, int8_t *))(***(uint32_t ***)a3 + 8))(
                                             **(uint32_t **)a3,
                                             *(uint16_t *)(result + 4)
                                           | (*(uint8_t *)(result + 3) << 16),
                                             &g4_m128_lane<int8_t>(v108, 12));
          a3[11] = v118;
        }
        result = a2[1];
        if ( v94 >= result )
          return result;
        v83 = result - 1;
        v84 = *a2 + 48 * v83;
        a2[1] = v83;
        v80 = *((uint32_t *)a3 + 11);
        v116 = *(uint32_t *)(v84 + 32);
        result = 3 * *(uint32_t *)(v84 + 32) + 3 * *(uint32_t *)(v84 + 32) + *(uint32_t *)a1;
        v117 = (uint8_t *)result;
g4_m128_lane<int32_t>(v108, 3) = *(uint32_t *)v84;
        v109 = *(float *)(v84 + 4);
        v110 = *(float *)(v84 + 8);
        v111 = *(uint32_t *)(v84 + 12);
        v112 = *(unsigned int *)(v84 + 16);
        v113 = *(float *)(v84 + 20);
        v114 = *(unsigned int *)(v84 + 24);
        v115 = *(uint32_t *)(v84 + 28);
LABEL_26:
g4_m128_lane<int32_t>(v108, 1) = v80;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::copyTo_hkcdDynamicTree_Tree_hkc_ca3b00  (binary VA: 0x160e610)
// Original: hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::copyTo<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>>
// ----------------------------------------------------------------------------
int hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::copyTo_hkcdDynamicTree_Tree_hkc_ca3b00(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *self, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *a2)
{
  int *v2;
  int v3;
  int *v4;
  int result;
  int v6;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
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
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[71];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v17)) > _g4_s1 ? (20u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v24)) > _g4_s8 ? (36u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v25)) > _g4_s9 ? (40u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v27)) > _g4_s11 ? (48u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v28)) > _g4_s12 ? (56u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v29)) > _g4_s13 ? (60u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v30)) > _g4_s14 ? (64u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v31)) > _g4_s15 ? (68u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v32)) > _g4_s16 ? (72u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v33)) > _g4_s17 ? (76u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v34)) > _g4_s18 ? (80u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v35)) > _g4_s19 ? (84u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v36)) > _g4_s20 ? (88u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v37)) > _g4_s21 ? (92u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v38)) > _g4_s22 ? (96u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v39)) > _g4_s23 ? (100u + sizeof(_g4_t_v39)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);

  v39[67] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)a2;
  v18 = self;
  v3 = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 1) = 0;
  if ( v3 >= 0 )
  {
    v20 = (int)(uintptr_t)(v2);
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *v2,
      48 * v3);
    v2 = (int *)v20;
  }
  *v2 = 0;
  v2[2] = 0x80000000;
  v2[3] = 0;
  v2[6] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v21 = (int)(uintptr_t)(v2);
  hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
    (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)v24,
    v2,
    2 * *((uint32_t *)v18 + 4));
  v4 = (int *)v21;
  if ( *((uint32_t *)v18 + 6) != 0 )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0x80000000;
    v6 = *((uint32_t *)v18 + 1);
    if ( v6 > 0 )
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v24, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v25, v6, 4);
      v4 = (int *)v21;
      if ( v6 - v26 > 0 )
      {
        memset((void *)(v25 + 4 * v26), 0, 4 * (v6 - v26));
        v4 = (int *)v21;
      }
    }
    v36 = v39;
    v7 = v18;
    v26 = v6;
    v38 = -2147483584;
    v39[0] = 0;
    v37 = 1;
    v17 = 0;
    v22 = v4;
    v8 = *((uint32_t *)v18 + 6);
    while ( 1 )
    {
      v9 = (int *)(*(uint32_t *)v7 + 48 * v8);
      v28 = *v9;
      v29 = v9[1];
      v30 = v9[2];
      v31 = v9[3];
      v32 = v9[4];
      v33 = v9[5];
      v34 = v9[6];
      v35 = v9[7];
      v19 = *(uint32_t *)(v25 + 4 * v8);
      v10 = v22[3];
      if ( v10 == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)v24,
          v22,
          1);
        v10 = v22[3];
      }
      v11 = (int *)(*v22 + 48 * v10);
      v22[3] = *v11;
      *v11 = v28;
      v11[1] = v29;
      v11[2] = v30;
      v11[3] = v31;
      v11[4] = v32;
      v11[5] = v33;
      v11[6] = v34;
      v12 = v35;
      v11[8] = v19;
      v11[7] = v12;
      if ( v19 != 0 )
      {
        *(uint32_t *)(*v22 + 48 * v19 + 4 * (v17 + 8) + 4) = v10;
        v8 = v9[9];
        v13 = v9[10];
        if ( v8 == 0 )
          goto LABEL_11;
LABEL_14:
        *(uint32_t *)(v25 + 4 * v8) = v10;
        *(uint32_t *)(v25 + 4 * v13) = v10;
        v15 = v37;
        if ( v37 == (v38 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v36,
            4,
            v16);
          v15 = v37;
        }
        v17 = 0;
        v36[v15] = v13;
        v7 = v18;
        ++v37;
      }
      else
      {
        v22[6] = v10;
        v8 = v9[9];
        v13 = v9[10];
        if ( v8 != 0 )
          goto LABEL_14;
LABEL_11:
        v14 = v37;
        v11[9] = 0;
        v11[10] = v13;
        v8 = v36[v14 - 1];
        v37 = v14 - 1;
        if ( v8 == 0 )
        {
          v4 = v22;
          v37 = 0;
          if ( v38 >= 0 )
          {
            (*(void (**)(int *, uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
              v22,
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v36,
              4 * v38);
            v4 = v22;
          }
          v36 = nullptr;
          v38 = 0x80000000;
          v26 = 0;
          if ( v27 >= 0 )
          {
            v23 = (int)(uintptr_t)(v4);
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v25,
              4 * v27);
            v4 = (int *)v23;
          }
          break;
        }
        v17 = 1;
        v7 = v18;
      }
    }
  }
  v4[4] = *((uint32_t *)v18 + 4);
  result = *((uint32_t *)v18 + 5);
  v4[5] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_329be1  (binary VA: 0x160ec00)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>>>
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_329be1(int32_t *a1, hkMemoryAllocator::Self *a2, int a3)
{
  hkMemoryAllocator::Self *result;
  float v4; // xmm5_4
  int32_t v5;
  int v6;
  float v7; // xmm1_4
  float v8; // xmm7_4
  float v9; // xmm4_4
  __m128i v10;
  float v11; // xmm6_4
  float v12;
  float v13; // xmm3_4
  __m128 v14;
  __m128 v15;
  __m128 v16;
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  int32_t v29;
  __m128i v30;
  float v31;
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm7_4
  float v35; // xmm6_4
  __m128 v36;
  __m128 v37;
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm2_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm1_4
  float v48; // xmm7_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  __m128 v51;
  __m128 v52;
  float v53; // xmm0_4
  float v54; // xmm7_4
  float v55; // xmm6_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  float v58; // xmm7_4
  float v59; // xmm5_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm7_4
  int v63;
  int32_t v64; // xmm0_4
  int32_t v65;
  float v66; // xmm3_4
  int v67;
  int v68;
  int32_t v69;
  int32_t *v70;
  int32_t v71;
  int v72;
  float *v73;
  hkMemoryAllocator::Self *v74;
  int32_t v75;
  typedef float *_g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef bool _g4_t_v84;
  typedef __m128 _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef int _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef hkMemoryAllocator::Self *_g4_t_v92;
  typedef int32_t _g4_t_v93;
  typedef int32_t _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef hkMemoryAllocator::Self *_g4_t_v102;
  typedef int32_t _g4_t_v103;
  typedef uint32_t _g4_t_v104[3];
  typedef int32_t _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef int _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef hkMemoryAllocator::Self *_g4_t_v112;
  typedef int32_t _g4_t_v113;
  typedef int32_t _g4_t_v114;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v76)) > _g4_s0 ? (8u + sizeof(_g4_t_v76)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v77)) > _g4_s1 ? (32u + sizeof(_g4_t_v77)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v78)) > _g4_s2 ? (36u + sizeof(_g4_t_v78)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v79)) > _g4_s3 ? (40u + sizeof(_g4_t_v79)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v80)) > _g4_s4 ? (44u + sizeof(_g4_t_v80)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v81)) > _g4_s5 ? (48u + sizeof(_g4_t_v81)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v82)) > _g4_s6 ? (52u + sizeof(_g4_t_v82)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v83)) > _g4_s7 ? (56u + sizeof(_g4_t_v83)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v84)) > _g4_s8 ? (60u + sizeof(_g4_t_v84)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v85)) > _g4_s9 ? (64u + sizeof(_g4_t_v85)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v86)) > _g4_s10 ? (80u + sizeof(_g4_t_v86)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v87)) > _g4_s11 ? (84u + sizeof(_g4_t_v87)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v88)) > _g4_s12 ? (88u + sizeof(_g4_t_v88)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v89)) > _g4_s13 ? (92u + sizeof(_g4_t_v89)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v90)) > _g4_s14 ? (96u + sizeof(_g4_t_v90)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v91)) > _g4_s15 ? (100u + sizeof(_g4_t_v91)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v92)) > _g4_s16 ? (104u + sizeof(_g4_t_v92)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v93)) > _g4_s17 ? (108u + sizeof(_g4_t_v93)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v94)) > _g4_s18 ? (112u + sizeof(_g4_t_v94)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v95)) > _g4_s19 ? (124u + sizeof(_g4_t_v95)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v96)) > _g4_s20 ? (128u + sizeof(_g4_t_v96)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v97)) > _g4_s21 ? (132u + sizeof(_g4_t_v97)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v98)) > _g4_s22 ? (136u + sizeof(_g4_t_v98)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v99)) > _g4_s23 ? (140u + sizeof(_g4_t_v99)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v100)) > _g4_s24 ? (144u + sizeof(_g4_t_v100)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v101)) > _g4_s25 ? (148u + sizeof(_g4_t_v101)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v102)) > _g4_s26 ? (152u + sizeof(_g4_t_v102)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v103)) > _g4_s27 ? (156u + sizeof(_g4_t_v103)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v104)) > _g4_s28 ? (160u + sizeof(_g4_t_v104)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v105)) > _g4_s29 ? (172u + sizeof(_g4_t_v105)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v106)) > _g4_s30 ? (176u + sizeof(_g4_t_v106)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v107)) > _g4_s31 ? (180u + sizeof(_g4_t_v107)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v108)) > _g4_s32 ? (184u + sizeof(_g4_t_v108)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v109)) > _g4_s33 ? (188u + sizeof(_g4_t_v109)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v110)) > _g4_s34 ? (192u + sizeof(_g4_t_v110)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v111)) > _g4_s35 ? (196u + sizeof(_g4_t_v111)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v112)) > _g4_s36 ? (200u + sizeof(_g4_t_v112)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v113)) > _g4_s37 ? (204u + sizeof(_g4_t_v113)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v114)) > _g4_s38 ? (208u + sizeof(_g4_t_v114)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 48u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 92u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 96u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 100u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 104u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 108u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 112u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 124u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 128u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 132u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 136u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 140u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 144u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 148u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 152u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 156u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 160u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 172u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 176u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 180u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 184u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 188u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 192u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 196u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 200u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 204u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 208u);

  result = (hkMemoryAllocator::Self *)a1[6];
  if ( result != nullptr )
  {
    v94 = a1[6];
g4_m128_raw(v16) = *(unsigned int *)(a3 + 64);
    v4 = *(float *)(a3 + 16);
    v5 = *a1 + 48 * (uint32_t)(uintptr_t)(result);
    v6 = *((uint32_t *)a2 + 1);
    v93 = v5;
    v7 = *(float *)(a3 + 48);
    v8 = *(float *)(a3 + 44);
g4_m128_lane<int32_t>(v85, 3) = *(uint32_t *)v5;
g4_m128_raw(v14) =g4_m128_lane<uint32_t>(v85, 3);
    v86 = *(float *)(v5 + 4);
    v87 = *(float *)(v5 + 8);
    v9 = v86 -g4_m128_lane<float>(v16, 0);
    v88 = *(uint32_t *)(v5 + 12);
    v89 = *(float *)(v5 + 16);
    v90 = *(float *)(v5 + 20);
g4_m128_raw(v10) = LODWORD(v90);
    v91 = *(float *)(v5 + 24);
    *(float *)g4_m128_ptr<int32_t>(v10) = v90 +g4_m128_lane<float>(v16, 0);
    v11 = v91 +g4_m128_lane<float>(v16, 0);
    result = *(hkMemoryAllocator::Self **)(v5 + 28);
    v92 = result;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    v13 = v87 -g4_m128_lane<float>(v16, 0);
g4_m128_lane<float>(v14, 0) = (float)((float)(g4_m128_lane<float>(v85, 3) -g4_m128_lane<float>(v16, 0)) - v4) * v7;
g4_m128_lane<float>(v16, 0) = (float)(g4_m128_lane<float>(v16, 0) + v89) - v4;
g4_m128_lane<int32_t>(v15, 0) = 0;
g4_m128_lane<int32_t>(v85, 0) = 0;
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v16, 0) * v7;
    if (g4_m128_lane<float>(v14, 0) >g4_m128_lane<float>(v16, 0) )
    {
      v17 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v16, v15), v16), 0);
      v18 = fminf(v8,g4_m128_lane<float>(v14, 0));
    }
    else
    {
      v17 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v14, v15), v14), 0);
      v18 = fminf(v8,g4_m128_lane<float>(v16, 0));
    }
    v19 = (float)(v9 - *(float *)(a3 + 20)) * *(float *)(a3 + 52);
    v20 = (float)(v12 - *(float *)(a3 + 20)) * *(float *)(a3 + 52);
    if ( v19 > v20 )
    {
      v21 = fmaxf(v17, v20);
      v22 = fminf(v18, v19);
    }
    else
    {
      v21 = fmaxf(v17, v19);
      v22 = fminf(v18, v20);
    }
    v23 = *(float *)(a3 + 24);
    v24 = *(float *)(a3 + 56);
    v25 = (float)(v13 - v23) * v24;
    v26 = (float)(v11 - v23) * v24;
    if ( v25 > v26 )
    {
      v27 = fmaxf(v21, v26);
      v28 = fminf(v22, v25);
    }
    else
    {
      v27 = fmaxf(v21, v25);
      v28 = fminf(v22, v26);
    }
    if ( v28 >= v27 )
    {
g4_m128_lane<float>(v85, 2) = v8;
      while ( 1 )
      {
        v65 = *(uint32_t *)(v5 + 36);
        if ( v65 != 0 )
        {
          v104[0] = *(uint32_t *)(v5 + 36);
g4_m128_lane<int32_t>(v85, 1) = *a1;
          v29 =g4_m128_lane<int32_t>(v85, 1) + 48 * v65;
          v103 = v29;
          v95 = *(float *)v29;
          v96 = *(float *)(v29 + 4);
          v97 = *(float *)(v29 + 8);
          v98 = *(uint32_t *)(v29 + 12);
          v99 = *(float *)(v29 + 16);
          v100 = *(float *)(v29 + 20);
          v101 = *(unsigned int *)(v29 + 24);
          v102 = *(hkMemoryAllocator::Self **)(v29 + 28);
          v114 = *(uint32_t *)(v5 + 40);
          v5 =g4_m128_lane<int32_t>(v85, 1) + 48 * v114;
          v113 = v5;
          v105 = *(int32_t *)v5;
          v106 = *(float *)(v5 + 4);
          v107 = *(float *)(v5 + 8);
          v108 = *(uint32_t *)(v5 + 12);
g4_m128_raw(v37) = *(unsigned int *)(a3 + 64);
          v109 = *(float *)(v5 + 16);
g4_m128_raw(v30) = v101;
          *(float *)g4_m128_ptr<int32_t>(v30) = *(float *)&v101 +g4_m128_lane<float>(v37, 0);
          v110 = *(float *)(v5 + 20);
          v111 = *(float *)(v5 + 24);
          v112 = *(hkMemoryAllocator::Self **)(v5 + 28);
          v31 = COERCE_FLOAT(_mm_cvtsi128_si32(v30));
          v83 = v109 +g4_m128_lane<float>(v37, 0);
          v32 = v100 +g4_m128_lane<float>(v37, 0);
          v33 = v96 -g4_m128_lane<float>(v37, 0);
g4_m128_raw(v36) = LODWORD(v95);
          v34 = v97 -g4_m128_lane<float>(v37, 0);
          v78 = v107 -g4_m128_lane<float>(v37, 0);
          v82 = v110 +g4_m128_lane<float>(v37, 0);
          v81 = v111 +g4_m128_lane<float>(v37, 0);
          v77 = *(float *)(a3 + 16);
          v80 = *(float *)&v105 -g4_m128_lane<float>(v37, 0);
          v35 = *(float *)(a3 + 48);
          v79 = v106 -g4_m128_lane<float>(v37, 0);
g4_m128_lane<float>(v36, 0) = (float)((float)(v95 -g4_m128_lane<float>(v37, 0)) - v77) * v35;
g4_m128_lane<float>(v37, 0) = (float)((float)(g4_m128_lane<float>(v37, 0) + v99) - v77) * v35;
          if (g4_m128_lane<float>(v36, 0) >g4_m128_lane<float>(v37, 0) )
          {
            v38 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v37, v85), v37), 0);
            v39 = fminf(g4_m128_lane<float>(v85, 2),g4_m128_lane<float>(v36, 0));
          }
          else
          {
            v38 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v36, v85), v36), 0);
            v39 = fminf(g4_m128_lane<float>(v85, 2),g4_m128_lane<float>(v37, 0));
          }
          v40 = *(float *)(a3 + 52);
g4_m128_lane<int32_t>(v85, 1) = *(uint32_t *)(a3 + 20);
          v41 = (float)(v33 -g4_m128_lane<float>(v85, 1)) * v40;
          v42 = (float)(v32 -g4_m128_lane<float>(v85, 1)) * v40;
          if ( v41 > v42 )
          {
            v43 = fmaxf(v38, v42);
            v44 = fminf(v39, v41);
          }
          else
          {
            v43 = fmaxf(v38, v41);
            v44 = fminf(v39, v42);
          }
          v45 = *(float *)(a3 + 24);
          v46 = *(float *)(a3 + 56);
          v47 = (float)(v34 - v45) * v46;
          v48 = (float)(v31 - v45) * v46;
          if ( v47 > v48 )
          {
            v49 = fmaxf(v43, v48);
            v50 = fminf(v44, v47);
          }
          else
          {
            v49 = fmaxf(v43, v47);
            v50 = fminf(v44, v48);
          }
g4_m128_raw(v51) = LODWORD(v80);
g4_m128_raw(v52) = LODWORD(v83);
          v84 = v50 >= v49;
g4_m128_lane<float>(v51, 0) = (float)(v80 - v77) * v35;
g4_m128_lane<float>(v52, 0) = (float)(v83 - v77) * v35;
          if (g4_m128_lane<float>(v51, 0) >g4_m128_lane<float>(v52, 0) )
          {
            v53 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v52, v85), v52), 0);
            v54 = fminf(g4_m128_lane<float>(v85, 2),g4_m128_lane<float>(v51, 0));
          }
          else
          {
            v53 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v51, v85), v51), 0);
            v54 = fminf(g4_m128_lane<float>(v85, 2),g4_m128_lane<float>(v52, 0));
          }
          v55 = (float)(v79 -g4_m128_lane<float>(v85, 1)) * v40;
          v56 = (float)(v82 -g4_m128_lane<float>(v85, 1)) * v40;
          if ( v55 > v56 )
          {
            v57 = fmaxf(v53, v56);
            v58 = fminf(v54, v55);
          }
          else
          {
            v57 = fmaxf(v53, v55);
            v58 = fminf(v54, v56);
          }
          v59 = (float)(v78 - v45) * v46;
          v60 = (float)(v81 - v45) * v46;
          if ( v59 > v60 )
          {
            v61 = fmaxf(v57, v60);
            v62 = fminf(v58, v59);
          }
          else
          {
            v61 = fmaxf(v57, v59);
            v62 = fminf(v58, v60);
          }
          v63 = v84 | (v62 >= v61 ? 2 : 0);
          switch ( v63 )
          {
            case 3:
              v71 = v49 > v61;
              *(uint32_t *)(a3 + 68) = v71;
              v72 = *((uint32_t *)a2 + 1);
              if ( v72 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
              {
g4_m128_lane<int32_t>(v85, 2) = v49 > v61;
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, (int)(uintptr_t)(v76));
                v71 =g4_m128_lane<int32_t>(v85, 2);
                v72 = *((uint32_t *)a2 + 1);
              }
g4_m128_lane<int32_t>(v85, 2) = *(uint32_t *)a2;
              *((uint32_t *)a2 + 1) = v72 + 1;
              *(uint32_t *)(g4_m128_lane<int32_t>(v85, 2) + 4 * v72) = v104[12 * (1 - v71)];
              v64 = *(uint32_t *)(a3 + 44);
              v73 = &v95 + 12 * v71;
              v5 = *((uint32_t *)v73 + 8);
g4_m128_lane<float>(v85, 3) = *v73;
              v86 = v73[1];
              v87 = v73[2];
              v88 = *((uint32_t *)v73 + 3);
              v89 = v73[4];
              v90 = v73[5];
              v91 = v73[6];
              v74 = *((hkMemoryAllocator::Self **)v73 + 7);
              v75 = *((uint32_t *)v73 + 9);
              v92 = v74;
              v93 = v5;
              v94 = v75;
              goto LABEL_26;
            case 1:
              v93 = v29;
g4_m128_lane<float>(v85, 3) = v95;
              v86 = v96;
              v87 = v97;
              v88 = v98;
              v89 = v99;
              v90 = v100;
              v91 = *(float *)&v101;
              v92 = v102;
              v94 = v65;
              v64 =g4_m128_lane<int32_t>(v85, 2);
              v5 = v29;
              goto LABEL_26;
            case 2:
              v93 = v5;
              v64 =g4_m128_lane<int32_t>(v85, 2);
g4_m128_lane<int32_t>(v85, 3) = v105;
              v86 = v106;
              v87 = v107;
              v88 = v108;
              v89 = v109;
              v90 = v110;
              v91 = v111;
              v92 = v112;
              v94 = v114;
              goto LABEL_26;
            default:
              break;
          }
        }
        else
        {
          v66 =g4_m128_lane<float>(v85, 2);
g4_m128_lane<int32_t>(v85, 2) = *(uint32_t *)a3;
          v95 = v66;
          v76 = &v95;
          *(uint32_t *)(g4_m128_lane<int32_t>(v85, 2) + 4) |= (*(int (**)(uint32_t, uint32_t, int8_t *))(**(uint32_t **)g4_m128_lane<int32_t>(v85, 2)
                                                                                           + 8))(
                                                *(uint32_t *)g4_m128_lane<int32_t>(v85, 2),
                                                *(uint32_t *)(v5 + 40),
                                                &g4_m128_lane<int8_t>(v85, 12));
          *(float *)(a3 + 44) = v95;
        }
        result = a2;
        v67 = *((uint32_t *)a2 + 1);
        if ( v6 >= v67 )
          return result;
        v68 = v67 - 1;
        v69 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v68;
        v64 = *(uint32_t *)(a3 + 44);
        v70 = (int32_t *)(v69 + 4 * v68);
        v94 = *v70;
        v5 = *a1 + 48 * *v70;
        v93 = v5;
g4_m128_lane<int32_t>(v85, 3) = *(uint32_t *)v5;
        v86 = *(float *)(v5 + 4);
        v87 = *(float *)(v5 + 8);
        v88 = *(uint32_t *)(v5 + 12);
        v89 = *(float *)(v5 + 16);
        v90 = *(float *)(v5 + 20);
        v91 = *(float *)(v5 + 24);
        v92 = *(hkMemoryAllocator::Self **)(v5 + 28);
LABEL_26:
g4_m128_lane<int32_t>(v85, 2) = v64;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_710b97  (binary VA: 0x160f950)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdDynamicTree::DefaultTree48Storage>>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_710b97(int *a1, hkMemoryAllocator::Self *a2, float *a3)
{
  int result;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float *v13;
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef uint32_t *_g4_t_i;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef int _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef int _g4_t_v42;
  typedef float *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v27)) > _g4_s1 ? (16u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v28)) > _g4_s2 ? (20u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v29)) > _g4_s3 ? (24u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v30)) > _g4_s4 ? (28u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v31)) > _g4_s5 ? (32u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v32)) > _g4_s6 ? (36u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v33)) > _g4_s7 ? (40u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_i)) > _g4_s8 ? (44u + sizeof(_g4_t_i)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v35)) > _g4_s9 ? (48u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v36)) > _g4_s10 ? (52u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v37)) > _g4_s11 ? (56u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v38)) > _g4_s12 ? (60u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v39)) > _g4_s13 ? (64u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v40)) > _g4_s14 ? (68u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v41)) > _g4_s15 ? (72u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v42)) > _g4_s16 ? (76u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v43)) > _g4_s17 ? (80u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v44)) > _g4_s18 ? (84u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v45)) > _g4_s19 ? (96u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v46)) > _g4_s20 ? (100u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v47)) > _g4_s21 ? (104u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v48)) > _g4_s22 ? (108u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v49)) > _g4_s23 ? (112u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v50)) > _g4_s24 ? (116u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v51)) > _g4_s25 ? (120u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v52)) > _g4_s26 ? (124u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v53)) > _g4_s27 ? (144u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v54)) > _g4_s28 ? (148u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v55)) > _g4_s29 ? (152u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v56)) > _g4_s30 ? (156u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v57)) > _g4_s31 ? (160u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v58)) > _g4_s32 ? (164u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v59)) > _g4_s33 ? (168u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v60)) > _g4_s34 ? (172u + sizeof(_g4_t_v60)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
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
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 108u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 144u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 148u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 152u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 156u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 160u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 164u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 168u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);

  result = a1[6];
  if ( result != 0 )
  {
    v44 = (uint32_t *)a1[6];
    v4 = *a1 + 48 * result;
    v5 = *((uint32_t *)a2 + 1);
    v43 = (float *)v4;
    v31 = v5;
    v35 = *(float *)v4;
    v36 = *(float *)(v4 + 4);
    v37 = *(float *)(v4 + 8);
    v38 = *(uint32_t *)(v4 + 12);
    v39 = *(float *)(v4 + 16);
    v40 = *(float *)(v4 + 20);
    v41 = *(float *)(v4 + 24);
    v42 = *(uint32_t *)(v4 + 28);
    result = *((uint32_t *)a3 + 1);
    if ( result != 0 && a3[4] <= v39 && a3[5] <= v40 && a3[6] <= v41 && v35 <= a3[8] && v36 <= a3[9] && v37 <= a3[10] )
    {
      for ( i = *((uint32_t **)a3 + 1); ; i = *((uint32_t **)a3 + 1) )
      {
LABEL_10:
        v6 = *(uint32_t **)(v4 + 36);
        if ( v6 != nullptr )
        {
          while ( 1 )
          {
            v7 = *a1;
            v4 = 48 * (uint32_t)(uintptr_t)(v6) + *a1;
            v33 = *(float *)(v4 + 8);
            v45 = *(float *)v4;
            v8 = *(float *)v4;
            v9 = *(float *)(v4 + 4);
            v46 = v9;
            v10 = *(float *)(v4 + 16);
            v11 = *(float *)(v4 + 20);
            v47 = *(float *)(v4 + 8);
            v12 = *(float *)(v4 + 24);
            v48 = *(uint32_t *)(v4 + 12);
            v49 = *(float *)(v4 + 16);
            v50 = *(float *)(v4 + 20);
            v51 = *(float *)(v4 + 24);
            v52 = *(uint32_t *)(v4 + 28);
            v32 = *((uint32_t *)v43 + 10);
            v13 = (float *)(48 * v32 + v7);
            v53 = *v13;
            v54 = v13[1];
            v55 = v13[2];
            v56 = *((uint32_t *)v13 + 3);
            v57 = v13[4];
            v14 = v13[1];
            v58 = v13[5];
            v15 = *v13;
            v59 = v13[6];
            v16 = v13[2];
            v28 = v14;
            v17 = v13[6];
            v60 = *((uint32_t *)v13 + 7);
            v29 = v15;
            v27 = v16;
            v18 = v13[4];
            v19 = v13[5];
            if ( i == nullptr )
              break;
            v20 = 0;
            if ( a3[4] <= v10 && a3[5] <= v11 && a3[6] <= v12 && v8 <= a3[8] && v9 <= a3[9] )
              v20 = v33 <= a3[10];
            if ( a3[4] <= v18 && a3[5] <= v19 && a3[6] <= v17 && v29 <= a3[8] && v28 <= a3[9] && v27 <= a3[10] )
              v20 |= 2u;
            switch ( v20 )
            {
              case 1:
                v45 = v8;
                v46 = v9;
                v35 = v8;
                v47 = v33;
                v36 = v9;
                v44 = v6;
                v37 = v33;
                v38 = v48;
                v43 = (float *)v4;
                v49 = v10;
                v50 = v11;
                v39 = v10;
                v51 = v12;
                v40 = v11;
                v41 = v12;
                v42 = v52;
                v6 = *(uint32_t **)(v4 + 36);
                if ( v6 == nullptr )
                  goto LABEL_29;
                break;
              case 2:
                v43 = v13;
                v53 = v29;
                v35 = v29;
                v54 = v28;
                v36 = v28;
                v55 = v27;
                v37 = v27;
                v38 = v56;
                v4 = (int)(uintptr_t)(v13);
                v57 = v18;
                v58 = v19;
                v39 = v18;
                v59 = v17;
                v40 = v19;
                v41 = v17;
                v42 = v60;
                v44 = (uint32_t *)v32;
                goto LABEL_10;
              case 3:
                v24 = *((uint32_t *)a2 + 1);
                if ( v24 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
                {
                  v30 = v6;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, SLODWORD(v12));
                  v6 = v30;
                  v12 = v26;
                  v24 = *((uint32_t *)a2 + 1);
                }
                v45 = v8;
                v46 = v9;
                v47 = v33;
                v25 = *(uint32_t *)a2;
                v49 = v10;
                v50 = v11;
                v51 = v12;
                *((uint32_t *)a2 + 1) = v24 + 1;
                *(uint32_t *)(v25 + 4 * v24) = v32;
                v35 = v45;
                v36 = v46;
                v37 = v47;
                v38 = v48;
                v39 = v49;
                v40 = v50;
                v41 = v51;
                v42 = v52;
                v43 = (float *)v4;
                v44 = v6;
                i = *((uint32_t **)a3 + 1);
                goto LABEL_10;
              default:
                goto LABEL_32;
            }
          }
        }
        else
        {
LABEL_29:
          if ( i != nullptr )
            v6 = (uint32_t *)((*(int (**)(uint32_t, uint32_t, float *))(***(uint32_t ***)a3 + 8))(
                              **(uint32_t **)a3,
                              *(uint32_t *)(v4 + 40),
                              &v35) != 0);
          *((uint32_t *)a3 + 1) = (uint32_t)(uintptr_t)(v6);
        }
LABEL_32:
        result = *((uint32_t *)a2 + 1);
        if ( v31 >= result )
          break;
        v21 = result - 1;
        v22 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v21;
        v23 = (uint32_t *)(v22 + 4 * v21);
        v44 = (uint32_t *)*v23;
        v4 = *a1 + 48 * *v23;
        v43 = (float *)v4;
        v35 = *(float *)v4;
        v36 = *(float *)(v4 + 4);
        v37 = *(float *)(v4 + 8);
        v38 = *(uint32_t *)(v4 + 12);
        v39 = *(float *)(v4 + 16);
        v40 = *(float *)(v4 + 20);
        v41 = *(float *)(v4 + 24);
        v42 = *(uint32_t *)(v4 + 28);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_cae3c5  (binary VA: 0x16100d0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdDynamicTree::DefaultTree48Storage>>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_cae3c5(uint32_t *a1, uint32_t *a2, float *a3)
{
  int result;
  int v4;
  int v5;
  float *v6;
  int v7;
  float v8; // xmm0_4
  float *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int **v14;
  int *v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float *_g4_t_v23;
  typedef float *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v21)) > _g4_s1 ? (20u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v22)) > _g4_s2 ? (28u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v23)) > _g4_s3 ? (28u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v27)) > _g4_s7 ? (36u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v28)) > _g4_s8 ? (40u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);

  result = a1[6];
  if ( result != 0 )
  {
    v4 = 3 * result;
    result = (int)(uintptr_t)(a1);
    v5 = *a1 + 16 * v4;
    v27 = a2[1];
    if ( a3[4] <= *(float *)(v5 + 16)
      && a3[5] <= *(float *)(v5 + 20)
      && a3[6] <= *(float *)(v5 + 24)
      && *(float *)v5 <= a3[8]
      && *(float *)(v5 + 4) <= a3[9]
      && *(float *)(v5 + 8) <= a3[10] )
    {
      v6 = a3;
      while ( 1 )
      {
        v7 = *(uint32_t *)(v5 + 36);
        if ( v7 == 0 )
          break;
LABEL_10:
        v8 = v6[4];
        v25 = *(uint32_t *)(v5 + 40);
        v5 = 48 * v25 + *a1;
        v9 = (float *)(48 * v7 + *a1);
        if ( v8 > v9[4] || v6[5] > v9[5] || v6[6] > v9[6] || *v9 > v6[8] || v9[1] > v6[9] )
        {
          v11 = 2;
          v10 = 0;
        }
        else
        {
          v10 = v9[2] <= v6[10];
          v11 = v10 + 2;
        }
        if ( v8 <= *(float *)(v5 + 16)
          && v6[5] <= *(float *)(v5 + 20)
          && v6[6] <= *(float *)(v5 + 24)
          && *(float *)v5 <= v6[8]
          && *(float *)(v5 + 4) <= v6[9]
          && *(float *)(v5 + 8) <= v6[10] )
        {
          v10 = v11;
        }
        if ( v10 != 2 )
        {
          if ( v10 == 3 )
          {
            v18 = a2;
            v19 = a2[1];
            if ( v19 == (a2[2] & 0x3FFFFFFF) )
            {
              v24 = v6;
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)a2,
                4,
                v20);
              v6 = v24;
              v18 = a2;
              v19 = a2[1];
            }
            v18[1] = v19 + 1;
            *(uint32_t *)(*v18 + 4 * v19) = v25;
            v5 = (int)(uintptr_t)(v9);
          }
          else
          {
            if ( v10 != 1 )
              goto LABEL_26;
            v5 = (int)(uintptr_t)(v9);
          }
        }
      }
      while ( 1 )
      {
        v14 = *(int ***)v6;
        if ( **(uint32_t **)(*(uint32_t *)v6 + 4) != 0 )
          break;
        v15 = *v14;
        v16 = v5;
        v22 = (*v14)[1];
        v26 = (*v14)[2] & 0x3FFFFFFF;
        v21 = v22 + 1;
        if ( v22 + 1 > v26 )
        {
          v23 = v6;
          v17 = v21;
          if ( 2 * v26 >= v21 )
            v17 = 2 * v26;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v28,
            (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
            *v14,
            v17,
            4);
          v6 = v23;
          if ( v28[0] != 0 )
          {
            *v14[1] = 1;
            break;
          }
          v15 = *v14;
          v5 = v16;
          v22 = (*v14)[1];
        }
        *(uint32_t *)(*v15 + 4 * v22) = *(uint32_t *)(v5 + 40);
        ++v15[1];
        result = a2[1];
        if ( v27 >= result )
          return result;
LABEL_27:
        v12 = result - 1;
        v13 = *a2;
        a2[1] = v12;
        v5 = *a1 + 48 * *(uint32_t *)(v13 + 4 * v12);
        v7 = *(uint32_t *)(v5 + 36);
        if ( v7 != 0 )
          goto LABEL_10;
      }
LABEL_26:
      result = a2[1];
      if ( v27 < result )
        goto LABEL_27;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_e4c7c3  (binary VA: 0x16105d0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdDynamicTree::DefaultTree48Storage>>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_e4c7c3(int *a1, int *a2, float *a3)
{
  int result;
  float *v4;
  float v5; // xmm0_4
  int v6;
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float *i;
  int v13;
  int v14;
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  int v26;
  int v27;
  int v28;
  float v29; // xmm0_4
  int v30;
  int v31;
  int *v32;
  int *v33;
  bool v34;
  int v35;
  float *v36;
  float v37;
  int v38;
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  typedef float *_g4_t_v42;
  typedef float _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t _g4_t_v70[3];
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int **_g4_t_v81;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v43)) > _g4_s1 ? (32u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (96u + sizeof(_g4_t_v44)) > _g4_s2 ? (96u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (100u + sizeof(_g4_t_v45)) > _g4_s3 ? (100u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (104u + sizeof(_g4_t_v46)) > _g4_s4 ? (104u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v47)) > _g4_s5 ? (108u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v48)) > _g4_s6 ? (112u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v49)) > _g4_s7 ? (112u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (116u + sizeof(_g4_t_v50)) > _g4_s8 ? (116u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (120u + sizeof(_g4_t_v51)) > _g4_s9 ? (120u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v52)) > _g4_s10 ? (124u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v53)) > _g4_s11 ? (128u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v54)) > _g4_s12 ? (132u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v55)) > _g4_s13 ? (136u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v56)) > _g4_s14 ? (140u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v57)) > _g4_s15 ? (144u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_v58)) > _g4_s16 ? (148u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v59)) > _g4_s17 ? (152u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v60)) > _g4_s18 ? (156u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (168u + sizeof(_g4_t_v61)) > _g4_s19 ? (168u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (172u + sizeof(_g4_t_v62)) > _g4_s20 ? (172u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v63)) > _g4_s21 ? (176u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (180u + sizeof(_g4_t_v64)) > _g4_s22 ? (180u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v65)) > _g4_s23 ? (184u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v66)) > _g4_s24 ? (188u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v67)) > _g4_s25 ? (192u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v68)) > _g4_s26 ? (196u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v69)) > _g4_s27 ? (200u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v70)) > _g4_s28 ? (204u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (216u + sizeof(_g4_t_v71)) > _g4_s29 ? (216u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (220u + sizeof(_g4_t_v72)) > _g4_s30 ? (220u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (224u + sizeof(_g4_t_v73)) > _g4_s31 ? (224u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (228u + sizeof(_g4_t_v74)) > _g4_s32 ? (228u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (232u + sizeof(_g4_t_v75)) > _g4_s33 ? (232u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (236u + sizeof(_g4_t_v76)) > _g4_s34 ? (236u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (240u + sizeof(_g4_t_v77)) > _g4_s35 ? (240u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (244u + sizeof(_g4_t_v78)) > _g4_s36 ? (244u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (248u + sizeof(_g4_t_v79)) > _g4_s37 ? (248u + sizeof(_g4_t_v79)) : _g4_s37,
    _g4_s39 = (252u + sizeof(_g4_t_v80)) > _g4_s38 ? (252u + sizeof(_g4_t_v80)) : _g4_s38,
    _g4_s40 = (272u + sizeof(_g4_t_v81)) > _g4_s39 ? (272u + sizeof(_g4_t_v81)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 100u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 120u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 144u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 148u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 152u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 156u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 168u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 172u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 176u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 180u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 184u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 188u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 192u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 196u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 200u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 204u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 216u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 220u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 224u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 228u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 232u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 236u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 240u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 244u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 248u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 252u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 272u);

  v81 = &a1;
  v47 = a1;
  v46 = a2;
  result = a1[6];
  v4 = a3;
  if ( result != 0 )
  {
    v60 = a1[6];
    v5 = a3[4];
    v6 = a2[1];
    result = *a1 + 48 * result;
    v59 = (float *)result;
    v45 = v6;
    v7 = a3[5];
    v8 = a3[6];
    v51 = *(float *)result;
    v52 = *(float *)(result + 4);
    v53 = *(float *)(result + 8);
    v54 = *(float *)(result + 12);
    v55 = *(float *)(result + 16);
    v56 = *(float *)(result + 20);
    v9 = fminf(v55, fmaxf(v51, v5));
    v10 = fminf(v56, fmaxf(v52, v7));
    v57 = *(float *)(result + 24);
    v58 = *(float *)(result + 28);
    v11 = fminf(v57, fmaxf(v53, v8));
    if ( a3[8] >= (float)((float)((float)((float)(v5 - v9) * (float)(v5 - v9))
                                + (float)((float)(v7 - v10) * (float)(v7 - v10)))
                        + (float)((float)(v8 - v11) * (float)(v8 - v11))) )
    {
      for ( i = (float *)result; ; v58 = i[7] )
      {
LABEL_4:
        while ( 1 )
        {
          v13 = *((uint32_t *)i + 9);
          if ( v13 == 0 )
            break;
          while ( 1 )
          {
            v70[0] = v13;
            v48 = *v47;
            v14 = 48 * v13 + *v47;
            v69 = v14;
            v61 = *(float *)v14;
            v62 = *(float *)(v14 + 4);
            v63 = *(float *)(v14 + 8);
            v64 = *(float *)(v14 + 12);
            v65 = *(float *)(v14 + 16);
            v66 = *(float *)(v14 + 20);
            v67 = *(float *)(v14 + 24);
            v68 = *(float *)(v14 + 28);
            v44 = *((uint32_t *)i + 10);
            v80 = v44;
            i = (float *)(v48 + 48 * v44);
            v79 = i;
            v15 = v4[4];
            v16 = v4[5];
            v71 = *i;
            v17 = v4[6];
            v72 = i[1];
            v18 = fminf(v66, fmaxf(v62, v16));
            v73 = i[2];
            v19 = fminf(v67, fmaxf(v63, v17));
            v74 = i[3];
            v20 = v15 - fminf(v65, fmaxf(v61, v15));
            v75 = i[4];
            v76 = i[5];
            v77 = i[6];
            v43 = i[7];
            v78 = v43;
            v21 = (float)((float)(v20 * v20) + (float)((float)(v16 - v18) * (float)(v16 - v18)))
                + (float)((float)(v17 - v19) * (float)(v17 - v19));
            v22 = fminf(v75, fmaxf(v71, v15));
            v23 = fminf(v76, fmaxf(v72, v16));
            v24 = fminf(v77, fmaxf(v73, v17));
            v25 = (float)((float)((float)(v15 - v22) * (float)(v15 - v22))
                        + (float)((float)(v16 - v23) * (float)(v16 - v23)))
                + (float)((float)(v17 - v24) * (float)(v17 - v24));
            v26 = (v4[8] >= v21) | (v4[8] >= v25 ? 2 : 0);
            switch ( v26 )
            {
              case 1:
                v59 = (float *)v14;
                v51 = v61;
                v52 = v62;
                v53 = v63;
                v54 = v64;
                v55 = v65;
                v56 = v66;
                v57 = v67;
                v58 = v68;
                v60 = v13;
                i = (float *)v14;
                goto LABEL_4;
              case 2:
                v59 = (float *)(v48 + 48 * v44);
                v51 = v71;
                v52 = v72;
                v53 = v73;
                v54 = v74;
                v55 = v75;
                v56 = v76;
                v57 = v77;
                v58 = v43;
                v60 = v44;
                v13 = *((uint32_t *)i + 9);
                if ( v13 == 0 )
                  goto LABEL_9;
                break;
              case 3:
                goto LABEL_16;
              default:
                goto LABEL_13;
            }
          }
LABEL_16:
          v33 = v46;
          v34 = v21 > v25;
          *((uint32_t *)v4 + 9) = v34;
          v35 = v46[1];
          if ( v35 == (v46[2] & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)v46,
              4,
              (int)(uintptr_t)(v42));
            v35 = v46[1];
            v34 = v21 > v25;
            v33 = v46;
          }
          v49 = *v33;
          v33[1] = v35 + 1;
          *(uint32_t *)(v49 + 4 * v35) = v70[12 * (1 - v34)];
          v36 = &v61 + 12 * v34;
          i = *((float **)v36 + 8);
          v51 = *v36;
          v52 = v36[1];
          v53 = v36[2];
          v54 = v36[3];
          v55 = v36[4];
          v56 = v36[5];
          v57 = v36[6];
          v37 = v36[7];
          v38 = *((uint32_t *)v36 + 9);
          v58 = v37;
          v59 = i;
          v60 = v38;
        }
LABEL_9:
        v27 = *(uint32_t *)v4;
        v61 = v4[4];
        v62 = v4[5];
        v63 = v4[6];
        v64 = v4[7];
        v28 = *(uint32_t *)(v27 + 32);
        if ( v28 != 0 )
        {
          v42 = &v51;
          (*(void (**)(float *))(*(uint32_t *)v28 + 8))(&v50);
          v29 = v50;
        }
        else
        {
          v61 = fminf(fmaxf(v61, v51), v55);
          v62 = fminf(fmaxf(v62, v52), v56);
          v39 = v61 - v4[4];
          v40 = v62 - v4[5];
          v63 = fminf(fmaxf(v63, v53), v57);
          v41 = (float)(v63 - v4[6]) * (float)(v63 - v4[6]);
          v64 = fminf(fmaxf(v64, v54), v58);
          v29 = (float)((float)(v39 * v39) + (float)(v40 * v40)) + v41;
        }
        if ( v4[8] > v29 )
        {
          v4[8] = v29;
          *(float *)(v27 + 16) = v61;
          *(float *)(v27 + 20) = v62;
          *(float *)(v27 + 24) = v63;
          *(float *)(v27 + 28) = v64;
          *(float *)v27 = v59[10];
        }
LABEL_13:
        result = v46[1];
        if ( v45 >= result )
          break;
        v30 = result - 1;
        v31 = *v46;
        v46[1] = v30;
        v32 = (int *)(v31 + 4 * v30);
        v60 = *v32;
        i = (float *)(*v47 + 48 * *v32);
        v59 = i;
        v51 = *i;
        v52 = i[1];
        v53 = i[2];
        v54 = i[3];
        v55 = i[4];
        v56 = i[5];
        v57 = i[6];
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_DefaultT_04f866  (binary VA: 0x16110b0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdDynamicTree::DefaultTree48Storage>>>
// ----------------------------------------------------------------------------
float hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_DefaultT_04f866(float result, char a2, int *a3, uint32_t *a4, hkMemoryAllocator::Self *a5, uint32_t **a6, int a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float *v16;
  int v17;
  float *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float *v30;
  float v31; // xmm7_4
  float v32; // xmm4_4
  float v33; // xmm6_4
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  uint32_t *v41;
  float *v42;
  float *v43;
  float v44;
  float v45; // xmm1_4
  bool v46;
  int v47;
  uint32_t *v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  float v53; // xmm5_4
  float v54; // xmm7_4
  float v55; // xmm6_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float *v58;
  float v59; // xmm3_4
  int v60;
  uint32_t *v61;
  int v62;
  uint32_t *v63;
  int v64;
  int v65;
  uint32_t *v66;
  int v67;
  int v68;
  uint32_t *v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef bool _g4_t_v79;
  typedef int _g4_t_v80;
  typedef bool _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef bool _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef bool _g4_t_v101;
  typedef int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef bool _g4_t_v108;
  typedef int _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef int _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef int _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef int _g4_t_v137;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v70)) > _g4_s0 ? (12u + sizeof(_g4_t_v70)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v71)) > _g4_s1 ? (20u + sizeof(_g4_t_v71)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v72)) > _g4_s2 ? (24u + sizeof(_g4_t_v72)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v73)) > _g4_s3 ? (28u + sizeof(_g4_t_v73)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v74)) > _g4_s4 ? (32u + sizeof(_g4_t_v74)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v75)) > _g4_s5 ? (36u + sizeof(_g4_t_v75)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v76)) > _g4_s6 ? (40u + sizeof(_g4_t_v76)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v77)) > _g4_s7 ? (44u + sizeof(_g4_t_v77)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v78)) > _g4_s8 ? (48u + sizeof(_g4_t_v78)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v79)) > _g4_s9 ? (52u + sizeof(_g4_t_v79)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v80)) > _g4_s10 ? (52u + sizeof(_g4_t_v80)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v81)) > _g4_s11 ? (56u + sizeof(_g4_t_v81)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v82)) > _g4_s12 ? (60u + sizeof(_g4_t_v82)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v83)) > _g4_s13 ? (64u + sizeof(_g4_t_v83)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v84)) > _g4_s14 ? (68u + sizeof(_g4_t_v84)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v85)) > _g4_s15 ? (72u + sizeof(_g4_t_v85)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v86)) > _g4_s16 ? (76u + sizeof(_g4_t_v86)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v87)) > _g4_s17 ? (76u + sizeof(_g4_t_v87)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v88)) > _g4_s18 ? (80u + sizeof(_g4_t_v88)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v89)) > _g4_s19 ? (80u + sizeof(_g4_t_v89)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v90)) > _g4_s20 ? (84u + sizeof(_g4_t_v90)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v91)) > _g4_s21 ? (84u + sizeof(_g4_t_v91)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v92)) > _g4_s22 ? (88u + sizeof(_g4_t_v92)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v93)) > _g4_s23 ? (88u + sizeof(_g4_t_v93)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v94)) > _g4_s24 ? (92u + sizeof(_g4_t_v94)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v95)) > _g4_s25 ? (92u + sizeof(_g4_t_v95)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v96)) > _g4_s26 ? (92u + sizeof(_g4_t_v96)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v97)) > _g4_s27 ? (92u + sizeof(_g4_t_v97)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v98)) > _g4_s28 ? (92u + sizeof(_g4_t_v98)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v99)) > _g4_s29 ? (96u + sizeof(_g4_t_v99)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v100)) > _g4_s30 ? (104u + sizeof(_g4_t_v100)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v101)) > _g4_s31 ? (104u + sizeof(_g4_t_v101)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v102)) > _g4_s32 ? (104u + sizeof(_g4_t_v102)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v103)) > _g4_s33 ? (104u + sizeof(_g4_t_v103)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v104)) > _g4_s34 ? (104u + sizeof(_g4_t_v104)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v105)) > _g4_s35 ? (108u + sizeof(_g4_t_v105)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v106)) > _g4_s36 ? (108u + sizeof(_g4_t_v106)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v107)) > _g4_s37 ? (108u + sizeof(_g4_t_v107)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v108)) > _g4_s38 ? (108u + sizeof(_g4_t_v108)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v109)) > _g4_s39 ? (108u + sizeof(_g4_t_v109)) : _g4_s39,
    _g4_s41 = (112u + sizeof(_g4_t_v110)) > _g4_s40 ? (112u + sizeof(_g4_t_v110)) : _g4_s40,
    _g4_s42 = (116u + sizeof(_g4_t_v111)) > _g4_s41 ? (116u + sizeof(_g4_t_v111)) : _g4_s41,
    _g4_s43 = (120u + sizeof(_g4_t_v112)) > _g4_s42 ? (120u + sizeof(_g4_t_v112)) : _g4_s42,
    _g4_s44 = (124u + sizeof(_g4_t_v113)) > _g4_s43 ? (124u + sizeof(_g4_t_v113)) : _g4_s43,
    _g4_s45 = (128u + sizeof(_g4_t_v114)) > _g4_s44 ? (128u + sizeof(_g4_t_v114)) : _g4_s44,
    _g4_s46 = (132u + sizeof(_g4_t_v115)) > _g4_s45 ? (132u + sizeof(_g4_t_v115)) : _g4_s45,
    _g4_s47 = (136u + sizeof(_g4_t_v116)) > _g4_s46 ? (136u + sizeof(_g4_t_v116)) : _g4_s46,
    _g4_s48 = (140u + sizeof(_g4_t_v117)) > _g4_s47 ? (140u + sizeof(_g4_t_v117)) : _g4_s47,
    _g4_s49 = (144u + sizeof(_g4_t_v118)) > _g4_s48 ? (144u + sizeof(_g4_t_v118)) : _g4_s48,
    _g4_s50 = (148u + sizeof(_g4_t_v119)) > _g4_s49 ? (148u + sizeof(_g4_t_v119)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v120)) > _g4_s50 ? (160u + sizeof(_g4_t_v120)) : _g4_s50,
    _g4_s52 = (164u + sizeof(_g4_t_v121)) > _g4_s51 ? (164u + sizeof(_g4_t_v121)) : _g4_s51,
    _g4_s53 = (168u + sizeof(_g4_t_v122)) > _g4_s52 ? (168u + sizeof(_g4_t_v122)) : _g4_s52,
    _g4_s54 = (172u + sizeof(_g4_t_v123)) > _g4_s53 ? (172u + sizeof(_g4_t_v123)) : _g4_s53,
    _g4_s55 = (176u + sizeof(_g4_t_v124)) > _g4_s54 ? (176u + sizeof(_g4_t_v124)) : _g4_s54,
    _g4_s56 = (180u + sizeof(_g4_t_v125)) > _g4_s55 ? (180u + sizeof(_g4_t_v125)) : _g4_s55,
    _g4_s57 = (184u + sizeof(_g4_t_v126)) > _g4_s56 ? (184u + sizeof(_g4_t_v126)) : _g4_s56,
    _g4_s58 = (188u + sizeof(_g4_t_v127)) > _g4_s57 ? (188u + sizeof(_g4_t_v127)) : _g4_s57,
    _g4_s59 = (192u + sizeof(_g4_t_v128)) > _g4_s58 ? (192u + sizeof(_g4_t_v128)) : _g4_s58,
    _g4_s60 = (196u + sizeof(_g4_t_v129)) > _g4_s59 ? (196u + sizeof(_g4_t_v129)) : _g4_s59,
    _g4_s61 = (208u + sizeof(_g4_t_v130)) > _g4_s60 ? (208u + sizeof(_g4_t_v130)) : _g4_s60,
    _g4_s62 = (212u + sizeof(_g4_t_v131)) > _g4_s61 ? (212u + sizeof(_g4_t_v131)) : _g4_s61,
    _g4_s63 = (216u + sizeof(_g4_t_v132)) > _g4_s62 ? (216u + sizeof(_g4_t_v132)) : _g4_s62,
    _g4_s64 = (220u + sizeof(_g4_t_v133)) > _g4_s63 ? (220u + sizeof(_g4_t_v133)) : _g4_s63,
    _g4_s65 = (224u + sizeof(_g4_t_v134)) > _g4_s64 ? (224u + sizeof(_g4_t_v134)) : _g4_s64,
    _g4_s66 = (228u + sizeof(_g4_t_v135)) > _g4_s65 ? (228u + sizeof(_g4_t_v135)) : _g4_s65,
    _g4_s67 = (232u + sizeof(_g4_t_v136)) > _g4_s66 ? (232u + sizeof(_g4_t_v136)) : _g4_s66,
    _g4_s68 = (236u + sizeof(_g4_t_v137)) > _g4_s67 ? (236u + sizeof(_g4_t_v137)) : _g4_s67
  };
  alignas(16) uint8_t _g4_sf[_g4_s68];
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 24u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 36u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 68u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 76u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 80u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 80u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 84u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 84u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 88u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 88u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 92u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 92u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 92u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 96u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 104u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 104u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 108u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 108u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 108u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 108u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 108u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 112u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 116u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 120u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 124u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 128u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 132u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 136u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 140u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 144u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 148u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 160u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 164u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 168u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 172u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 176u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 180u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 184u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 188u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 192u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 196u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 208u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 212u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 216u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 220u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 224u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 228u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 232u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 236u);

  v8 = a3[6];
  v105 = a4[6];
  if ( v8 != 0 && a4[6] != 0 )
  {
    v99 = *((uint32_t *)a5 + 1);
    if ( a7 != 0 )
    {
      v110 = *(float *)a7;
      v111 = *(float *)(a7 + 4);
      v112 = *(float *)(a7 + 8);
      v113 = *(uint32_t *)(a7 + 12);
      v114 = *(float *)(a7 + 16);
      v115 = *(float *)(a7 + 20);
      v116 = *(float *)(a7 + 24);
      v117 = *(uint32_t *)(a7 + 28);
      v9 = *(uint32_t *)(a7 + 36);
      v118 = *(uint32_t *)(a7 + 32);
      v119 = v9;
    }
    else
    {
      v119 = a3[6];
      v118 = *a3 + 48 * v8;
      v110 = *(float *)v118;
      v111 = *(float *)(v118 + 4);
      v112 = *(float *)(v118 + 8);
      v113 = *(uint32_t *)(v118 + 12);
      v114 = *(float *)(v118 + 16);
      v115 = *(float *)(v118 + 20);
      v116 = *(float *)(v118 + 24);
      v117 = *(uint32_t *)(v118 + 28);
    }
    if ( a8 != 0 )
    {
      v120 = *(float *)a8;
      v121 = *(float *)(a8 + 4);
      v122 = *(float *)(a8 + 8);
      v123 = *(uint32_t *)(a8 + 12);
      v124 = *(float *)(a8 + 16);
      v125 = *(float *)(a8 + 20);
      v126 = *(float *)(a8 + 24);
      v127 = *(uint32_t *)(a8 + 28);
      v10 = *(uint32_t *)(a8 + 32);
      v11 = *(uint32_t *)(a8 + 36);
      v128 = v10;
      v129 = v11;
      v12 = v11;
    }
    else
    {
      v12 = v105;
      v129 = v105;
      v128 = *a4 + 48 * v105;
      v120 = *(float *)v128;
      v121 = *(float *)(v128 + 4);
      v122 = *(float *)(v128 + 8);
      v123 = *(uint32_t *)(v128 + 12);
      v124 = *(float *)(v128 + 16);
      v125 = *(float *)(v128 + 20);
      v126 = *(float *)(v128 + 24);
      v127 = *(uint32_t *)(v128 + 28);
      v10 = v128;
    }
    v106 = v119;
    if ( a2 != 0
      || (result = v110, v110 <= v124)
      && (result = v111, v111 <= v125)
      && (result = v112, v112 <= v126)
      && (result = v120, v120 <= v114)
      && (result = v121, v121 <= v115)
      && (result = v122, v122 <= v116) )
    {
      v13 = v118;
      while ( 1 )
      {
        v14 = *(uint32_t *)(v13 + 36);
        if ( a2 != 0 && v10 == v13 )
        {
          v106 = *(uint32_t *)(v13 + 36);
          if ( v14 == 0 )
            goto LABEL_29;
          v102 = *a3;
          v52 = *(uint32_t *)(v10 + 40);
          v13 = 48 * v14 + *a3;
          v53 = *(float *)v13;
          v54 = *(float *)(v13 + 4);
          v130 = *(float *)v13;
          v55 = *(float *)(v13 + 8);
          result = *(float *)(v13 + 16);
          v131 = *(float *)(v13 + 4);
          v56 = *(float *)(v13 + 20);
          v57 = *(float *)(v13 + 24);
          v132 = *(float *)(v13 + 8);
          v133 = *(uint32_t *)(v13 + 12);
          v134 = *(float *)(v13 + 16);
          v135 = *(float *)(v13 + 20);
          v136 = *(float *)(v13 + 24);
          v137 = *(uint32_t *)(v13 + 28);
          v58 = (float *)(v102 + 48 * v52);
          v93 = *v58;
          v89 = v58[2];
          v91 = v58[1];
          v59 = v58[4];
          v103 = v58[5];
          v95 = v58[6];
          v60 = *((uint32_t *)a5 + 1);
          if ( v60 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
          {
            v80 = v52;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
            v60 = *((uint32_t *)a5 + 1);
            v52 = v80;
          }
          *((uint32_t *)a5 + 1) = v60 + 1;
          v61 = (uint32_t *)(*(uint32_t *)a5 + 8 * v60);
          *v61 = v52;
          v61[1] = v52;
          if ( v53 <= v59 && v54 <= v103 && v55 <= v95 && v93 <= result && v91 <= v56 && v89 <= v57 )
          {
            v62 = *((uint32_t *)a5 + 1);
            if ( v62 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
            {
              v87 = v52;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
              v62 = *((uint32_t *)a5 + 1);
              v52 = v87;
            }
            *((uint32_t *)a5 + 1) = v62 + 1;
            v63 = (uint32_t *)(*(uint32_t *)a5 + 8 * v62);
            *v63 = v106;
            v63[1] = v52;
          }
          v130 = v53;
          v131 = v54;
          v110 = v53;
          v132 = v55;
          v111 = v54;
          v120 = v53;
          v112 = v55;
          v134 = result;
          v113 = v133;
          v135 = v56;
          v114 = result;
          v121 = v54;
          v115 = v56;
          v136 = v57;
          v122 = v55;
          v116 = v57;
          v123 = v133;
          v117 = v137;
          v118 = v13;
          v119 = v106;
          v124 = result;
          v125 = v56;
          v126 = v57;
          v127 = v137;
          v128 = v13;
          v129 = v106;
          v10 = v13;
          v12 = v106;
        }
        else
        {
          v100 = *(uint32_t *)(v13 + 36);
          if ( v14 != 0 )
          {
            v25 = *(uint32_t *)(v13 + 40);
            v26 = *a3 + 48 * v100;
            v27 = *(float *)(v26 + 24);
            result = *(float *)v26;
            v28 = *(float *)(v26 + 4);
            v29 = *(float *)(v26 + 16);
            v94 = *(float *)(v26 + 8);
            v90 = *(float *)(v26 + 20);
            v30 = (float *)(*a3 + 48 * v25);
            v92 = v30[4];
            v86 = v27;
            v31 = v30[1];
            v32 = *v30;
            v33 = v30[2];
            v88 = v30[5];
            v107 = *(uint32_t *)(v10 + 36);
            v85 = v30[6];
            if ( v107 != 0 )
            {
              v81 = false;
              v42 = (float *)(48 * v107 + *a4);
              v75 = *v42;
              v73 = v42[1];
              v71 = v42[2];
              v84 = v42[4];
              v82 = v42[5];
              v77 = v42[6];
              v76 = *(uint32_t *)(v10 + 40);
              v43 = (float *)(48 * v76 + *a4);
              v44 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)v43)));
              v74 = v43[1];
              v83 = v43[5];
              v72 = v43[2];
              v78 = v43[6];
              v45 = v43[4];
              if ( result <= v84 && v28 <= v82 && v94 <= v77 && v75 <= v29 && v73 <= v90 )
                v81 = v71 <= v86;
              v79 = false;
              if ( result <= v45 && v28 <= v83 && v94 <= v78 && v44 <= v29 && v74 <= v90 )
                v79 = v72 <= v86;
              v46 = false;
              if ( v32 <= v84 && v31 <= v82 && v33 <= v77 && v75 <= v92 && v73 <= v88 )
                v46 = v71 <= v85;
              if ( v32 <= v45 && v31 <= v83 && v33 <= v78 && v44 <= v92 && v74 <= v88 && v72 <= v85 )
              {
                v47 = *((uint32_t *)a5 + 1);
                if ( v47 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  v98 = v46;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                  v47 = *((uint32_t *)a5 + 1);
                  v46 = v98;
                }
                *((uint32_t *)a5 + 1) = v47 + 1;
                v48 = (uint32_t *)(*(uint32_t *)a5 + 8 * v47);
                *v48 = v25;
                v48[1] = v76;
              }
              if ( v46 )
              {
                v64 = *((uint32_t *)a5 + 1);
                if ( v64 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                  v64 = *((uint32_t *)a5 + 1);
                }
                v65 = *(uint32_t *)a5;
                *((uint32_t *)a5 + 1) = v64 + 1;
                v66 = (uint32_t *)(v65 + 8 * v64);
                *v66 = v25;
                v66[1] = v107;
              }
              if ( v79 )
              {
                v67 = *((uint32_t *)a5 + 1);
                if ( v67 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                  v67 = *((uint32_t *)a5 + 1);
                }
                v68 = *(uint32_t *)a5;
                *((uint32_t *)a5 + 1) = v67 + 1;
                v69 = (uint32_t *)(v68 + 8 * v67);
                *v69 = v100;
                v69[1] = v76;
              }
              if ( v81 )
              {
                v49 = *((uint32_t *)a5 + 1);
                if ( v49 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                  v49 = *((uint32_t *)a5 + 1);
                }
                v50 = *(uint32_t *)a5;
                *((uint32_t *)a5 + 1) = v49 + 1;
                v51 = (uint32_t *)(v50 + 8 * v49);
                *v51 = v100;
                v51[1] = v107;
              }
            }
            else
            {
              v108 = false;
              if ( result <= v124 && v28 <= v125 && v94 <= v126 )
              {
                result = v120;
                if ( v120 <= v29 )
                {
                  result = v121;
                  if ( v121 <= v90 )
                  {
                    result = v122;
                    v108 = v122 <= v86;
                  }
                }
              }
              if ( v32 <= v124 && v31 <= v125 && v33 <= v126 )
              {
                result = v120;
                if ( v120 <= v92 )
                {
                  result = v121;
                  if ( v121 <= v88 )
                  {
                    result = v122;
                    if ( v122 <= v85 )
                    {
                      v34 = *((uint32_t *)a5 + 1);
                      if ( v34 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                      {
                        v97 = v12;
                        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                        v34 = *((uint32_t *)a5 + 1);
                        v12 = v97;
                      }
                      *((uint32_t *)a5 + 1) = v34 + 1;
                      v35 = (uint32_t *)(*(uint32_t *)a5 + 8 * v34);
                      *v35 = v25;
                      v35[1] = v12;
                    }
                  }
                }
              }
              if ( v108 )
              {
                v36 = *((uint32_t *)a5 + 1);
                if ( v36 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  v109 = v12;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                  v36 = *((uint32_t *)a5 + 1);
                  v12 = v109;
                }
                v37 = *(uint32_t *)a5;
                *((uint32_t *)a5 + 1) = v36 + 1;
                v38 = (uint32_t *)(v37 + 8 * v36);
                *v38 = v100;
                v38[1] = v12;
              }
            }
          }
          else
          {
            v15 = *(uint32_t *)(v10 + 36);
            if ( v15 != 0 )
            {
              v16 = (float *)(48 * v15 + *a4);
              v17 = *(uint32_t *)(v10 + 40);
              v18 = (float *)(*a4 + 48 * v17);
              v101 = false;
              result = v18[4];
              if ( v110 <= v16[4] && v111 <= v16[5] && v112 <= v16[6] && *v16 <= v114 && v16[1] <= v115 )
                v101 = v16[2] <= v116;
              if ( v110 <= result )
              {
                result = v111;
                if ( v111 <= v18[5] )
                {
                  result = v112;
                  if ( v112 <= v18[6] && *v18 <= v114 && v18[1] <= v115 && v18[2] <= v116 )
                  {
                    v19 = *((uint32_t *)a5 + 1);
                    if ( v19 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                    {
                      v96 = v15;
                      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                      v19 = *((uint32_t *)a5 + 1);
                      v15 = v96;
                    }
                    *((uint32_t *)a5 + 1) = v19 + 1;
                    v20 = (uint32_t *)(*(uint32_t *)a5 + 8 * v19);
                    *v20 = v106;
                    v20[1] = v17;
                  }
                }
              }
              if ( v101 )
              {
                v39 = *((uint32_t *)a5 + 1);
                if ( v39 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
                {
                  v104 = v15;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v70);
                  v39 = *((uint32_t *)a5 + 1);
                  v15 = v104;
                }
                v40 = *(uint32_t *)a5;
                *((uint32_t *)a5 + 1) = v39 + 1;
                v41 = (uint32_t *)(v40 + 8 * v39);
                *v41 = v106;
                v41[1] = v15;
              }
            }
            else
            {
              v70 = *(uint32_t *)(v10 + 40);
              G4_VCALL<void>(**a6, 8, *(uint32_t *)(v13 + 40), &v110);
            }
          }
LABEL_29:
          v21 = *((uint32_t *)a5 + 1);
          if ( v99 >= v21 )
            return result;
          v22 = v21 - 1;
          v23 = *(uint32_t *)a5;
          *((uint32_t *)a5 + 1) = v22;
          v24 = (int *)(v23 + 8 * v22);
          v12 = v24[1];
          v106 = *v24;
          v119 = v106;
          v13 = *a3 + 48 * v106;
          v118 = v13;
          v110 = *(float *)v13;
          v111 = *(float *)(v13 + 4);
          v112 = *(float *)(v13 + 8);
          v113 = *(uint32_t *)(v13 + 12);
          v114 = *(float *)(v13 + 16);
          v115 = *(float *)(v13 + 20);
          v116 = *(float *)(v13 + 24);
          v117 = *(uint32_t *)(v13 + 28);
          v129 = v12;
          v10 = *a4 + 48 * v12;
          v128 = v10;
          v120 = *(float *)v10;
          v121 = *(float *)(v10 + 4);
          v122 = *(float *)(v10 + 8);
          v123 = *(uint32_t *)(v10 + 12);
          v124 = *(float *)(v10 + 16);
          v125 = *(float *)(v10 + 20);
          v126 = *(float *)(v10 + 24);
          v127 = *(uint32_t *)(v10 + 28);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_3199ab  (binary VA: 0x16161e0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkcdDynamicTree_DefaultT_3199ab(int *a1, hkMemoryAllocator::Self *a2, float *a3)
{
  int result;
  float v4; // xmm3_4
  float v5; // xmm1_4
  g4_int128_t v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24;
  int v25;
  float v26; // xmm5_4
  float v27; // xmm7_4
  __m128 v28;
  __m128 v29;
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm2_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  bool v41;
  __m128 v42;
  __m128 v43;
  float v44; // xmm3_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm7_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm0_4
  int v54;
  g4_int128_t v55;
  int v56;
  float v57;
  int v58;
  int v59;
  int v60;
  int *v61;
  int32_t v62;
  int v63;
  int v64;
  float *v65;
  int v66;
  typedef float *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef __m128 _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef int _g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint32_t _g4_t_v89[3];
  typedef unsigned int _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v67)) > _g4_s0 ? (8u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v68)) > _g4_s1 ? (24u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v69)) > _g4_s2 ? (28u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v70)) > _g4_s3 ? (32u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v71)) > _g4_s4 ? (48u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v72)) > _g4_s5 ? (52u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v73)) > _g4_s6 ? (56u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v74)) > _g4_s7 ? (60u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v75)) > _g4_s8 ? (64u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v76)) > _g4_s9 ? (68u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v77)) > _g4_s10 ? (72u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v78)) > _g4_s11 ? (76u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v79)) > _g4_s12 ? (80u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v80)) > _g4_s13 ? (92u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v81)) > _g4_s14 ? (96u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v82)) > _g4_s15 ? (100u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v83)) > _g4_s16 ? (104u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v84)) > _g4_s17 ? (108u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v85)) > _g4_s18 ? (112u + sizeof(_g4_t_v85)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v86)) > _g4_s19 ? (116u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v87)) > _g4_s20 ? (120u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v88)) > _g4_s21 ? (124u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v89)) > _g4_s22 ? (128u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v90)) > _g4_s23 ? (140u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v91)) > _g4_s24 ? (144u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v92)) > _g4_s25 ? (148u + sizeof(_g4_t_v92)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v93)) > _g4_s26 ? (152u + sizeof(_g4_t_v93)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v94)) > _g4_s27 ? (156u + sizeof(_g4_t_v94)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v95)) > _g4_s28 ? (160u + sizeof(_g4_t_v95)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v96)) > _g4_s29 ? (164u + sizeof(_g4_t_v96)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v97)) > _g4_s30 ? (168u + sizeof(_g4_t_v97)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v98)) > _g4_s31 ? (172u + sizeof(_g4_t_v98)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v99)) > _g4_s32 ? (176u + sizeof(_g4_t_v99)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 100u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 116u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 120u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 124u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 128u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 140u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 144u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 148u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 152u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 156u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 160u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 164u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 168u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 172u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 176u);

  result = a1[6];
  if ( result != 0 )
  {
    v79 = a1[6];
    v4 = a3[4];
    v5 = a3[12];
    v6 = *((unsigned int *)a3 + 11);
    v68 = *((uint32_t *)a2 + 1);
    result = *a1 + 48 * result;
    v78 = result;
g4_m128_lane<int32_t>(v70, 3) = *(uint32_t *)result;
g4_m128_raw(v7) =g4_m128_lane<uint32_t>(v70, 3);
    v71 = *(float *)(result + 4);
    v72 = *(float *)(result + 8);
    v73 = *(uint32_t *)(result + 12);
    v74 = *(unsigned int *)(result + 16);
g4_m128_raw(v8) = v74;
    v75 = *(float *)(result + 20);
g4_m128_lane<float>(v7, 0) = (float)(g4_m128_lane<float>(v70, 3) - v4) * v5;
    v76 = *(float *)(result + 24);
    v77 = *(uint32_t *)(result + 28);
g4_m128_lane<float>(v8, 0) = (float)(*(float *)&v74 - v4) * v5;
g4_m128_lane<int32_t>(v9, 0) = 0;
g4_m128_lane<int32_t>(v70, 0) = 0;
    if (g4_m128_lane<float>(v7, 0) >g4_m128_lane<float>(v8, 0) )
    {
      v10 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v8, v9), v8), 0);
      v11 = fminf(*(float *)&v6,g4_m128_lane<float>(v7, 0));
    }
    else
    {
      v10 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v7, v9), v7), 0);
      v11 = fminf(*(float *)&v6,g4_m128_lane<float>(v8, 0));
    }
    v12 = a3[5];
    v13 = a3[13];
    v14 = (float)(v71 - v12) * v13;
    v15 = (float)(v75 - v12) * v13;
    if ( v14 > v15 )
    {
      v16 = fmaxf(v10, v15);
      v17 = fminf(v11, v14);
    }
    else
    {
      v16 = fmaxf(v10, v14);
      v17 = fminf(v11, v15);
    }
    v18 = a3[6];
    v19 = a3[14];
    v20 = (float)(v72 - v18) * v19;
    v21 = (float)(v76 - v18) * v19;
    if ( v20 > v21 )
    {
      v22 = fmaxf(v16, v21);
      v23 = fminf(v17, v20);
    }
    else
    {
      v22 = fmaxf(v16, v20);
      v23 = fminf(v17, v21);
    }
    if ( v23 >= v22 )
    {
      while ( 1 )
      {
        v56 = *(uint32_t *)(result + 36);
        if ( v56 != 0 )
        {
          v89[0] = *(uint32_t *)(result + 36);
          v24 = *a1;
          v25 = 48 * v56 + *a1;
          v88 = v25;
          v80 = *(float *)v25;
          v81 = *(float *)(v25 + 4);
          v82 = *(float *)(v25 + 8);
          v83 = *(uint32_t *)(v25 + 12);
          v84 = *(unsigned int *)(v25 + 16);
          v85 = *(float *)(v25 + 20);
          v86 = *(float *)(v25 + 24);
          v87 = *(uint32_t *)(v25 + 28);
          v99 = *(uint32_t *)(result + 40);
          result = 48 * v99 + v24;
          v98 = result;
          v90 = *(unsigned int *)result;
          v91 = *(float *)(result + 4);
          v92 = *(float *)(result + 8);
          v93 = *(uint32_t *)(result + 12);
          v94 = *(unsigned int *)(result + 16);
g4_m128_raw(v28) = LODWORD(v80);
          v95 = *(float *)(result + 20);
g4_m128_raw(v29) = v84;
          v96 = *(float *)(result + 24);
          v97 = *(uint32_t *)(result + 28);
          v26 = a3[4];
          v27 = a3[12];
g4_m128_lane<float>(v28, 0) = (float)(v80 - v26) * v27;
g4_m128_lane<float>(v29, 0) = (float)(*(float *)&v84 - v26) * v27;
          if (g4_m128_lane<float>(v28, 0) >g4_m128_lane<float>(v29, 0) )
          {
            v30 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v29, v70), v29), 0);
            v31 = fminf(*(float *)&v6,g4_m128_lane<float>(v28, 0));
          }
          else
          {
            v30 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v28, v70), v28), 0);
            v31 = fminf(*(float *)&v6,g4_m128_lane<float>(v29, 0));
          }
g4_m128_lane<float>(v70, 2) = a3[5];
          v69 = a3[13];
          v32 = (float)(v81 -g4_m128_lane<float>(v70, 2)) * v69;
          v33 = (float)(v85 -g4_m128_lane<float>(v70, 2)) * v69;
          if ( v32 > v33 )
          {
            v34 = fmaxf(v30, v33);
            v35 = fminf(v31, v32);
          }
          else
          {
            v34 = fmaxf(v30, v32);
            v35 = fminf(v31, v33);
          }
          v36 = a3[6];
g4_m128_lane<float>(v70, 1) = a3[14];
          v37 = (float)(v82 - v36) *g4_m128_lane<float>(v70, 1);
          v38 = (float)(v86 - v36) *g4_m128_lane<float>(v70, 1);
          if ( v37 > v38 )
          {
            v39 = fmaxf(v34, v38);
            v40 = fminf(v35, v37);
          }
          else
          {
            v39 = fmaxf(v34, v37);
            v40 = fminf(v35, v38);
          }
g4_m128_raw(v42) = v94;
          v41 = v40 < v39;
g4_m128_raw(v43) = v90;
g4_m128_lane<float>(v42, 0) = (float)(*(float *)&v94 - v26) * v27;
g4_m128_lane<float>(v43, 0) = (float)(*(float *)&v90 - v26) * v27;
          if (g4_m128_lane<float>(v43, 0) >g4_m128_lane<float>(v42, 0) )
          {
            v44 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v42, v70), v42), 0);
            v45 = fminf(*(float *)&v6,g4_m128_lane<float>(v43, 0));
          }
          else
          {
            v44 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v43, v70), v43), 0);
            v45 = fminf(*(float *)&v6,g4_m128_lane<float>(v42, 0));
          }
          v46 = (float)(v91 -g4_m128_lane<float>(v70, 2)) * v69;
          v47 = (float)(v95 -g4_m128_lane<float>(v70, 2)) * v69;
          if ( v46 > v47 )
          {
            v48 = fmaxf(v44, v47);
            v49 = fminf(v45, v46);
          }
          else
          {
            v48 = fmaxf(v44, v46);
            v49 = fminf(v45, v47);
          }
          v50 = (float)(v92 - v36) *g4_m128_lane<float>(v70, 1);
          v51 = (float)(v96 - v36) *g4_m128_lane<float>(v70, 1);
          if ( v50 > v51 )
          {
            v52 = fmaxf(v48, v51);
            v53 = fminf(v49, v50);
          }
          else
          {
            v52 = fmaxf(v48, v50);
            v53 = fminf(v49, v51);
          }
          v54 = !v41 | (v53 >= v52 ? 2 : 0);
          switch ( v54 )
          {
            case 3:
              v62 = v39 > v52;
              *((uint32_t *)a3 + 16) = v62;
              v63 = *((uint32_t *)a2 + 1);
              if ( v63 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
              {
g4_m128_lane<int32_t>(v70, 2) = v39 > v52;
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, (int)(uintptr_t)(v67));
                v62 =g4_m128_lane<int32_t>(v70, 2);
                v63 = *((uint32_t *)a2 + 1);
              }
              v64 = *(uint32_t *)a2;
              *((uint32_t *)a2 + 1) = v63 + 1;
              *(uint32_t *)(v64 + 4 * v63) = v89[12 * (1 - v62)];
              v55 = *((unsigned int *)a3 + 11);
              v65 = &v80 + 12 * v62;
g4_m128_lane<float>(v70, 3) = *v65;
              v71 = v65[1];
              v72 = v65[2];
              v73 = *((uint32_t *)v65 + 3);
              v74 = *((unsigned int *)v65 + 4);
              v75 = v65[5];
              v76 = v65[6];
              v77 = *((uint32_t *)v65 + 7);
              result = *((uint32_t *)v65 + 8);
              v66 = *((uint32_t *)v65 + 9);
              v78 = result;
              v79 = v66;
              goto LABEL_26;
            case 1:
              v78 = v25;
g4_m128_lane<float>(v70, 3) = v80;
              v71 = v81;
              v72 = v82;
              v73 = v83;
              v74 = v84;
              v75 = v85;
              v76 = v86;
              v77 = v87;
              v79 = v56;
              v55 = v6;
              result = v25;
              goto LABEL_26;
            case 2:
g4_m128_lane<int32_t>(v70, 3) = v90;
              v71 = v91;
              v72 = v92;
              v73 = v93;
              v74 = v94;
              v75 = v95;
              v76 = v96;
              v77 = v97;
              v78 = result;
              v79 = v99;
              v55 = v6;
              goto LABEL_26;
            default:
              break;
          }
        }
        else
        {
          v80 = *(float *)&v6;
          v57 = *a3;
          v67 = &v80;
          *(uint32_t *)(LODWORD(v57) + 4) |= (*(int (**)(uint32_t, uint32_t, int8_t *))(***(uint32_t ***)a3 + 8))(
                                             **(uint32_t **)a3,
                                             *(uint32_t *)(result + 40),
                                             &g4_m128_lane<int8_t>(v70, 12));
          a3[11] = v80;
        }
        result = (int)(uintptr_t)(a2);
        v58 = *((uint32_t *)a2 + 1);
        if ( v68 >= v58 )
          return result;
        v59 = v58 - 1;
        v60 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v59;
        v61 = (int *)(v60 + 4 * v59);
        v79 = *v61;
        result = *a1 + 48 * *v61;
        v78 = result;
        v55 = *((unsigned int *)a3 + 11);
g4_m128_lane<int32_t>(v70, 3) = *(uint32_t *)result;
        v71 = *(float *)(result + 4);
        v72 = *(float *)(result + 8);
        v73 = *(uint32_t *)(result + 12);
        v74 = *(unsigned int *)(result + 16);
        v75 = *(float *)(result + 20);
        v76 = *(float *)(result + 24);
        v77 = *(uint32_t *)(result + 28);
LABEL_26:
        v6 = v55;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435  (binary VA: 0x1617480)
// Original: hkcdStaticTree::Filtering<1>::computeFilter<hkcdStaticMeshTreeBase>
// ----------------------------------------------------------------------------
int hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  float v7; // xmm5_4
  int v8;
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  int v13;
  uint8_t v14;
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef float _g4_t_v25[9];
  typedef uint8_t *_g4_t_v26;
  typedef float _g4_t_v27[8];
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v20)) > _g4_s1 ? (20u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v21)) > _g4_s2 ? (28u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v22)) > _g4_s3 ? (32u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v23)) > _g4_s4 ? (40u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v24)) > _g4_s5 ? (44u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v26)) > _g4_s7 ? (84u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v27)) > _g4_s8 ? (96u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v28)) > _g4_s9 ? (128u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v29)) > _g4_s10 ? (132u + sizeof(_g4_t_v29)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);

  v3 = *(uint32_t *)(a2 + 36);
  if ( *(char *)(v3 + 3) < 0 )
  {
    v7 = *(float *)(a2 + 20);
    v8 = *(uint32_t *)(a2 + 32);
    v9 = *(float *)(a2 + 24);
    LODWORD(v25[8]) = v8 + 1;
    v10 = *(float *)a2;
    v11 = *(float *)(a2 + 16);
    v28 = v8 + 2 * (*(uint8_t *)(v3 + 4) | ((*(uint8_t *)(v3 + 3) & 0x7F) << 8));
    v12 = v7 - *(float *)(a2 + 4);
    v13 = 5 * v28 + *a1;
    v26 = (uint8_t *)(*a1 + 5 * (v8 + 1));
    v29 = v13;
    v24 = *v26;
    v14 = v26[2];
    v20 = v26[1] & 0xF;
    v23 = (int)v26[1] >> 4;
    v22 = (int)*(uint8_t *)v13 >> 4;
    v19 = *(uint8_t *)v13 & 0xF;
    v15 = (float)(v9 - *(float *)(a2 + 8)) * 0.0044247787f;
    v21 = *(uint8_t *)(v13 + 1);
    v16 = (float)(v11 - v10) * 0.0044247787f;
    v17 = v12 * 0.0044247787f;
    LOBYTE(v13) = *(uint8_t *)(v13 + 2);
    v25[3] = 0.0;
    v25[7] = 0.0;
    v27[3] = 0.0;
    v27[7] = 0.0;
    v25[0] = (float)((float)((v24 >> 4) * (v24 >> 4)) * v16) + v10;
    v25[1] = (float)((float)(v23 * v23) * v17) + *(float *)(a2 + 4);
    v25[2] = (float)((float)(((int)v14 >> 4) * ((int)v14 >> 4)) * v15) + *(float *)(a2 + 8);
    v25[4] = v11 - (float)((float)((v24 & 0xF) * (v24 & 0xF)) * v16);
    v25[5] = v7 - (float)((float)(v20 * v20) * v17);
    v25[6] = v9 - (float)((float)((v14 & 0xF) * (v14 & 0xF)) * v15);
    v27[0] = (float)((float)(v22 * v22) * v16) + v10;
    v27[1] = (float)((float)((v21 >> 4) * (v21 >> 4)) * v17) + *(float *)(a2 + 4);
    v27[2] = (float)((float)(((int)(uint8_t)v13 >> 4) * ((int)(uint8_t)v13 >> 4)) * v15)
           + *(float *)(a2 + 8);
    v27[4] = v11 - (float)((float)(v19 * v19) * v16);
    v27[5] = v7 - (float)((float)((v21 & 0xF) * (v21 & 0xF)) * v17);
    v27[6] = v9 - (float)((float)((v13 & 0xF) * (v13 & 0xF)) * v15);
    v18 = hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435(a1, v25, a3);
    result = v18 | hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435(a1, v27, a3);
    *(uint32_t *)(a3 + 4 * (*(uint32_t *)(a2 + 32) / 32)) = *(uint32_t *)(a3 + 4 * (*(uint32_t *)(a2 + 32) / 32))
                                                      & __builtin_rotateleft32(-2, *(uint32_t *)(a2 + 32) % 32)
                                                      | ((uint8_t)result << (*(uint32_t *)(a2 + 32) % 32));
  }
  else
  {
    v4 = *(uint32_t *)(a2 + 32);
    v5 = v4 + 31;
    if ( v4 >= 0 )
      v5 = *(uint32_t *)(a2 + 32);
    return (*(uint32_t *)(a3 + 4 * (v5 >> 5)) >> (*(uint32_t *)(a2 + 32) % 32)) & 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435  (binary VA: 0x16177e0)
// Original: hkcdStaticTree::Filtering<1>::computeFilter<hkcdStaticMeshTreeBase>
// ----------------------------------------------------------------------------
int hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435(hkcdStaticTree::Filtering<1> *self, const hkcdStaticMeshTreeBase::Self *a2)
{
  int result;
  int v3;
  uint32_t v4[12];

  result = 0;
  if ( *((uint32_t *)self + 1) != 0 )
  {
    v3 = *((uint32_t *)self + 4);
    v4[8] = 0;
    v4[0] = v3;
    v4[1] = *((uint32_t *)self + 5);
    v4[2] = *((uint32_t *)self + 6);
    v4[3] = *((uint32_t *)self + 7);
    v4[4] = *((uint32_t *)self + 8);
    v4[5] = *((uint32_t *)self + 9);
    v4[6] = *((uint32_t *)self + 10);
    v4[7] = *((uint32_t *)self + 11);
    v4[9] = *(uint32_t *)self;
    return hkcdStaticTree::Filtering_1_2bf985::computeFilter_hkcdStaticMeshTreeBase_30a435(self, (int)(uintptr_t)(v4), (int)(uintptr_t)(a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1617AA0  (binary VA: 0x1617aa0)
// Original: sub_1617AA0
// ----------------------------------------------------------------------------
uint32_t * sub_1617AA0()
{
  hkcdStaticMeshTreeBase::s_zeroDistance[0] = 953267991;
  return (uint32_t *)(hkcdStaticMeshTreeBase::s_zeroDistance);
}

// ----------------------------------------------------------------------------
// Function: sub_1617D80  (binary VA: 0x1617d80)
// Original: sub_1617D80
// ----------------------------------------------------------------------------
uint32_t * sub_1617D80()
{
  hkcdStaticTree::Codec3Axis::v_mask[0] = 15;
  hkcdStaticTree::Codec3Axis::v_mask[1] = 15;
  hkcdStaticTree::Codec3Axis::v_mask[2] = 15;
  hkcdStaticTree::Codec3Axis::v_mask[3] = 0;
  return (uint32_t *)(hkcdStaticTree::Codec3Axis::v_mask);
}

// ----------------------------------------------------------------------------
// Function: hashTriangle  (binary VA: 0x1619640)
// Original: hashTriangle
// ----------------------------------------------------------------------------
int hashTriangle(const hkGeometry::Triangle::Self *a1)
{
  return *((uint32_t *)a1 + 2) & 0x1FFFFF | (*((uint32_t *)a1 + 1) << 21);
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_triInfo_sortByKey_ce60e7  (binary VA: 0x1620e90)
// Original: hkAlgorithm::quickSortRecursive<triInfo,sortByKey>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_triInfo_sortByKey_ce60e7(int a1, int a2, int a3)
{
  int result;
  int v4;
  uint32_t *v5;
  int64_t v6; // rdi
  int v7;
  int v8;
  int64_t v9; // rax
  uint32_t *j;
  int v12;
  int v13;
  int v14;
  int i;
  int v16;
  uint64_t v17; // 0:edx.4,4:^1C.4

  while ( 2 )
  {
    v4 = a3;
    v5 = (uint32_t *)(a1 + 12 * ((a3 + a2) >> 1));
    LODWORD(v6) = v5[1];
    HIDWORD(v17) = *v5;
    v16 = v5[2];
    v7 = a2 + 1;
    v8 = a1 + 12 * a2;
    for ( i = a2 + 1; ; v7 = i )
    {
      while ( 1 )
      {
        v14 = v7 - 1;
        if ( __PAIR64__(v6, HIDWORD(v17)) > *(uint64_t *)v8 )
          goto LABEL_18;
        LODWORD(v9) = *(uint32_t *)(v8 + 4);
        HIDWORD(v9) = *(uint32_t *)v8;
        if ( v9 != __PAIR64__(HIDWORD(v17), v6) || v16 <= *(uint32_t *)(v8 + 8) )
          break;
        ++i;
        v8 += 12;
        v7 = i;
      }
      for ( j = (uint32_t *)(a1 + 12 * v4); ; j -= 3 )
      {
        LODWORD(v17) = j[1];
        HIDWORD(v6) = *j;
        if ( __PAIR64__(v6, HIDWORD(v17)) >= __PAIR64__(v17, HIDWORD(v6)) )
        {
          if ( v6 != v17 )
          {
            v12 = j[1];
            goto LABEL_5;
          }
          if ( v16 >= j[2] )
            break;
        }
        --v4;
      }
      HIDWORD(v6) = HIDWORD(v17);
      v12 = v6;
LABEL_5:
      if ( v14 > v4 )
        break;
      if ( v14 != v4 )
      {
        v13 = j[2];
        *j = *(uint32_t *)v8;
        j[1] = *(uint32_t *)(v8 + 4);
        j[2] = *(uint32_t *)(v8 + 8);
        *(uint32_t *)v8 = HIDWORD(v6);
        *(uint32_t *)(v8 + 4) = v12;
        *(uint32_t *)(v8 + 8) = v13;
      }
      --v4;
      v14 = i;
      if ( v4 < i )
        break;
LABEL_18:
      ++i;
      v8 += 12;
    }
    if ( a2 < v4 )
    {
      hkAlgorithm::quickSortRecursive_triInfo_sortByKey_ce60e7(a1, a2, v4);
      result = v14;
      if ( a3 > v14 )
      {
LABEL_8:
        a2 = result;
        continue;
      }
    }
    else
    {
      result = v14;
      if ( a3 > v14 )
        goto LABEL_8;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_triInfo_sortByIndex_411b83  (binary VA: 0x1621070)
// Original: hkAlgorithm::quickSortRecursive<triInfo,sortByIndex>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_triInfo_sortByIndex_411b83(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int *i;
  int v10;
  int v11;
  int v12;
  int v13;

  while ( 1 )
  {
    v3 = a3;
    v4 = *(uint32_t *)(a1 + 12 * ((a3 + a2) >> 1) + 8);
    v10 = a2 + 1;
    for ( i = (int *)(a1 + 12 * a2); ; i += 3 )
    {
      v11 = v10 - 1;
      if ( i[2] >= v4 )
      {
        v5 = (int *)(a1 + 12 * v3);
        v6 = v5[2];
        if ( v6 > v4 )
        {
          v7 = a1 + 12 * v3 - 12;
          do
          {
            v5 = (int *)v7;
            v7 -= 12;
            v6 = *(uint32_t *)(v7 + 20);
            --v3;
          }
          while ( v6 > v4 );
        }
        if ( v3 < v11 )
          break;
        if ( v3 != v11 )
        {
          v13 = v5[1];
          v12 = *v5;
          *v5 = *i;
          v5[1] = i[1];
          v5[2] = i[2];
          *i = v12;
          i[1] = v13;
          i[2] = v6;
        }
        --v3;
        v11 = v10;
        if ( v3 < v10 )
          break;
      }
      ++v10;
    }
    if ( a2 < v3 )
      break;
    result = v11;
    if ( a3 <= v11 )
      return result;
LABEL_9:
    a2 = result;
  }
  hkAlgorithm::quickSortRecursive_triInfo_sortByIndex_411b83(a1, a2, v3);
  result = v11;
  if ( a3 > v11 )
    goto LABEL_9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_weldVerticesVirtualNs_Ve_4fe33e  (binary VA: 0x16216d0)
// Original: hkAlgorithm::quickSortRecursive<weldVerticesVirtualNs::VertexRef,hkAlgorithm::less<weldVerticesVirtualNs::VertexRef>>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_weldVerticesVirtualNs_Ve_4fe33e(int a1, int a2, int a3)
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
  float v13; // xmm1_4
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  float v18; // xmm0_4
  int j;
  int v20;
  float v21; // xmm1_4
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  float v26; // xmm0_4
  int k;
  int v28;
  float v29; // xmm1_4
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  float v34; // xmm0_4
  int m;
  float v36; // xmm1_4
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  float v41; // xmm0_4
  int n;
  int v43;
  int v44;
  int v45;
  float v46; // xmm1_4
  int v47;
  uint32_t *jj;
  int v49;
  float v50; // xmm0_4
  int v51;
  int v52;
  int v53;
  float v54; // xmm1_4
  int v55;
  uint32_t *kk;
  int v57;
  float v58; // xmm0_4
  int v59;
  int v60;
  int v61;
  float v62; // xmm1_4
  int v63;
  uint32_t *mm;
  int v65;
  float v66; // xmm0_4
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int nn;
  float v74; // xmm1_4
  uint32_t *i1;
  int v76;
  float v77; // xmm0_4
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int ii;
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

  while ( 1 )
  {
    v3 = *(float *)(a1 + 8 * ((a3 + a2) >> 1));
    v4 = (uint32_t *)(a1 + 8 * a2);
    v5 = a2 + 1;
    v6 = a3;
    while ( 1 )
    {
      v88 = v5 - 1;
      if ( v3 <= *(float *)v4 )
      {
        v7 = a1 + 8 * v6;
        v8 = *(float *)v7;
        for ( i = v7 - 8; v8 > v3; --v6 )
        {
          v7 = i;
          i -= 8;
          v8 = *(float *)(i + 8);
        }
        if ( v6 < v88 )
          break;
        if ( v6 != v88 )
        {
          *(uint32_t *)v7 = *v4;
          v10 = *(uint32_t *)(v7 + 4);
          *(uint32_t *)(v7 + 4) = v4[1];
          v4[1] = v10;
          *(float *)v4 = v8;
        }
        --v6;
        v88 = v5;
        if ( v6 < v5 )
          break;
      }
      v4 += 2;
      ++v5;
    }
    v94 = v6;
    v11 = a2 + 1;
    if ( a2 < v6 )
    {
      while ( 1 )
      {
        v13 = *(float *)(a1 + 8 * ((v94 + a2) >> 1));
        v14 = v11;
        v15 = (uint32_t *)(a1 + 8 * a2);
        v16 = v94;
        while ( 1 )
        {
          v89 = v14 - 1;
          if ( v13 <= *(float *)v15 )
          {
            v17 = a1 + 8 * v16;
            v18 = *(float *)v17;
            for ( j = v17 - 8; v18 > v13; --v16 )
            {
              v17 = j;
              j -= 8;
              v18 = *(float *)(j + 8);
            }
            if ( v16 < v89 )
              break;
            if ( v16 != v89 )
            {
              *(uint32_t *)v17 = *v15;
              v20 = *(uint32_t *)(v17 + 4);
              *(uint32_t *)(v17 + 4) = v15[1];
              v15[1] = v20;
              *(float *)v15 = v18;
            }
            --v16;
            v89 = v14;
            if ( v16 < v14 )
              break;
          }
          v15 += 2;
          ++v14;
        }
        v95 = v16;
        if ( a2 < v16 )
        {
          while ( 1 )
          {
            v21 = *(float *)(a1 + 8 * ((v95 + a2) >> 1));
            v22 = v11;
            v23 = (uint32_t *)(a1 + 8 * a2);
            v24 = v95;
            while ( 1 )
            {
              v90 = v22 - 1;
              if ( v21 <= *(float *)v23 )
              {
                v25 = a1 + 8 * v24;
                v26 = *(float *)v25;
                for ( k = v25 - 8; v26 > v21; --v24 )
                {
                  v25 = k;
                  k -= 8;
                  v26 = *(float *)(k + 8);
                }
                if ( v24 < v90 )
                  break;
                if ( v24 != v90 )
                {
                  *(uint32_t *)v25 = *v23;
                  v28 = *(uint32_t *)(v25 + 4);
                  *(uint32_t *)(v25 + 4) = v23[1];
                  v23[1] = v28;
                  *(float *)v23 = v26;
                }
                --v24;
                v90 = v22;
                if ( v24 < v22 )
                  break;
              }
              v23 += 2;
              ++v22;
            }
            v96 = v24;
            if ( a2 < v24 )
            {
              while ( 1 )
              {
                v29 = *(float *)(a1 + 8 * ((v96 + a2) >> 1));
                v30 = v11;
                v31 = (uint32_t *)(a1 + 8 * a2);
                v32 = v96;
                while ( 1 )
                {
                  v92 = v30 - 1;
                  if ( v29 <= *(float *)v31 )
                  {
                    v33 = a1 + 8 * v32;
                    v34 = *(float *)v33;
                    for ( m = v33 - 8; v34 > v29; --v32 )
                    {
                      v33 = m;
                      m -= 8;
                      v34 = *(float *)(m + 8);
                    }
                    if ( v32 < v92 )
                      break;
                    if ( v32 != v92 )
                    {
                      *(uint32_t *)v33 = *v31;
                      v44 = *(uint32_t *)(v33 + 4);
                      *(uint32_t *)(v33 + 4) = v31[1];
                      v31[1] = v44;
                      *(float *)v31 = v34;
                    }
                    --v32;
                    v92 = v30;
                    if ( v32 < v30 )
                      break;
                  }
                  v31 += 2;
                  ++v30;
                }
                v97 = v32;
                if ( a2 < v32 )
                {
                  while ( 1 )
                  {
                    v36 = *(float *)(a1 + 8 * ((v97 + a2) >> 1));
                    v37 = v11;
                    v38 = (uint32_t *)(a1 + 8 * a2);
                    v39 = v97;
                    while ( 1 )
                    {
                      v93 = v37 - 1;
                      if ( v36 <= *(float *)v38 )
                      {
                        v40 = a1 + 8 * v39;
                        v41 = *(float *)v40;
                        for ( n = v40 - 8; v41 > v36; --v39 )
                        {
                          v40 = n;
                          n -= 8;
                          v41 = *(float *)(n + 8);
                        }
                        if ( v39 < v93 )
                          break;
                        if ( v39 != v93 )
                        {
                          *(uint32_t *)v40 = *v38;
                          v43 = *(uint32_t *)(v40 + 4);
                          *(uint32_t *)(v40 + 4) = v38[1];
                          v38[1] = v43;
                          *(float *)v38 = v41;
                        }
                        --v39;
                        v93 = v37;
                        if ( v39 < v37 )
                          break;
                      }
                      v38 += 2;
                      ++v37;
                    }
                    v98 = v39;
                    if ( a2 < v39 )
                    {
                      for ( ii = v11; ; ii = v100 + 1 )
                      {
                        v45 = v98;
                        v46 = *(float *)(a1 + 8 * ((v98 + a2) >> 1));
                        v47 = ii;
                        for ( jj = (uint32_t *)(a1 + 8 * a2); ; jj += 2 )
                        {
                          v49 = v47 - 1;
                          if ( v46 <= *(float *)jj )
                          {
                            v81 = a1 + 8 * v45;
                            v50 = *(float *)v81;
                            v51 = v81 - 8;
                            if ( *(float *)v81 > v46 )
                            {
                              do
                              {
                                v52 = v51;
                                v51 -= 8;
                                v50 = *(float *)(v51 + 8);
                                --v45;
                              }
                              while ( v50 > v46 );
                              v81 = v52;
                            }
                            if ( v45 < v49 )
                              break;
                            if ( v45 != v49 )
                            {
                              *(uint32_t *)v81 = *jj;
                              v71 = *(uint32_t *)(v81 + 4);
                              *(uint32_t *)(v81 + 4) = jj[1];
                              *(float *)jj = v50;
                              jj[1] = v71;
                            }
                            --v45;
                            v49 = v47;
                            if ( v45 < v47 )
                              break;
                          }
                          ++v47;
                        }
                        v99 = v45;
                        v100 = v49;
                        if ( a2 < v45 )
                        {
                          while ( 1 )
                          {
                            v53 = v99;
                            v54 = *(float *)(a1 + 8 * ((v99 + a2) >> 1));
                            v55 = ii;
                            for ( kk = (uint32_t *)(a1 + 8 * a2); ; kk += 2 )
                            {
                              v57 = v55 - 1;
                              if ( v54 <= *(float *)kk )
                              {
                                v82 = a1 + 8 * v53;
                                v58 = *(float *)v82;
                                v59 = v82 - 8;
                                if ( *(float *)v82 > v54 )
                                {
                                  do
                                  {
                                    v60 = v59;
                                    v59 -= 8;
                                    v58 = *(float *)(v59 + 8);
                                    --v53;
                                  }
                                  while ( v58 > v54 );
                                  v82 = v60;
                                }
                                if ( v53 < v57 )
                                  break;
                                if ( v53 != v57 )
                                {
                                  *(uint32_t *)v82 = *kk;
                                  v70 = *(uint32_t *)(v82 + 4);
                                  *(uint32_t *)(v82 + 4) = kk[1];
                                  *(float *)kk = v58;
                                  kk[1] = v70;
                                }
                                --v53;
                                v57 = v55;
                                if ( v53 < v55 )
                                  break;
                              }
                              ++v55;
                            }
                            v91 = v53;
                            v101 = v57;
                            if ( a2 < v53 )
                            {
                              while ( 1 )
                              {
                                v61 = v91;
                                v62 = *(float *)(a1 + 8 * ((v91 + a2) >> 1));
                                v63 = ii;
                                for ( mm = (uint32_t *)(a1 + 8 * a2); ; mm += 2 )
                                {
                                  v65 = v63 - 1;
                                  if ( v62 <= *(float *)mm )
                                  {
                                    v83 = a1 + 8 * v61;
                                    v66 = *(float *)v83;
                                    v67 = v83 - 8;
                                    if ( *(float *)v83 > v62 )
                                    {
                                      do
                                      {
                                        v68 = v67;
                                        v67 -= 8;
                                        v66 = *(float *)(v67 + 8);
                                        --v61;
                                      }
                                      while ( v66 > v62 );
                                      v83 = v68;
                                    }
                                    if ( v61 < v65 )
                                      break;
                                    if ( v61 != v65 )
                                    {
                                      *(uint32_t *)v83 = *mm;
                                      v69 = *(uint32_t *)(v83 + 4);
                                      *(uint32_t *)(v83 + 4) = mm[1];
                                      *(float *)mm = v66;
                                      mm[1] = v69;
                                    }
                                    --v61;
                                    v65 = v63;
                                    if ( v61 < v63 )
                                      break;
                                  }
                                  ++v63;
                                }
                                v87 = v65;
                                if ( a2 < v61 )
                                {
                                  v85 = v61;
                                  v72 = ii;
                                  for ( nn = v61; ; nn = v85 )
                                  {
                                    v74 = *(float *)(a1 + 8 * ((nn + a2) >> 1));
                                    for ( i1 = (uint32_t *)(a1 + 8 * a2); ; i1 += 2 )
                                    {
                                      v76 = v72 - 1;
                                      if ( v74 <= *(float *)i1 )
                                      {
                                        v84 = a1 + 8 * nn;
                                        v77 = *(float *)v84;
                                        v78 = v84 - 8;
                                        if ( *(float *)v84 > v74 )
                                        {
                                          do
                                          {
                                            v79 = v78;
                                            v78 -= 8;
                                            v77 = *(float *)(v78 + 8);
                                            --nn;
                                          }
                                          while ( v77 > v74 );
                                          v84 = v79;
                                        }
                                        if ( nn < v76 )
                                          break;
                                        if ( nn != v76 )
                                        {
                                          *(uint32_t *)v84 = *i1;
                                          v80 = *(uint32_t *)(v84 + 4);
                                          *(uint32_t *)(v84 + 4) = i1[1];
                                          *(float *)i1 = v77;
                                          i1[1] = v80;
                                        }
                                        --nn;
                                        v76 = v72;
                                        if ( nn < v72 )
                                          break;
                                      }
                                      ++v72;
                                    }
                                    if ( a2 < nn )
                                      hkAlgorithm::quickSortRecursive_weldVerticesVirtualNs_Ve_4fe33e(
                                        a1,
                                        a2,
                                        nn);
                                    if ( v85 <= v76 )
                                      break;
                                    a2 = v76;
                                    v72 = v76 + 1;
                                  }
                                }
                                if ( v91 <= v87 )
                                  break;
                                a2 = v87;
                                ii = v87 + 1;
                              }
                            }
                            if ( v99 <= v101 )
                              break;
                            a2 = v101;
                            ii = v101 + 1;
                          }
                        }
                        if ( v98 <= v100 )
                          break;
                        a2 = v100;
                      }
                    }
                    if ( v97 <= v93 )
                      break;
                    a2 = v93;
                    v11 = v93 + 1;
                  }
                }
                if ( v96 <= v92 )
                  break;
                a2 = v92;
                v11 = v92 + 1;
              }
            }
            if ( v95 <= v90 )
              break;
            a2 = v90;
            v11 = v90 + 1;
          }
        }
        if ( v94 <= v89 )
          break;
        a2 = v89;
        v11 = v89 + 1;
      }
    }
    result = v88;
    if ( a3 <= v88 )
      break;
    a2 = v88;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1623530  (binary VA: 0x1623530)
// Original: sub_1623530
// ----------------------------------------------------------------------------
float sub_1623530(__m128i a1)
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
// Function: sub_16235C0  (binary VA: 0x16235c0)
// Original: sub_16235C0
// ----------------------------------------------------------------------------
int sub_16235C0(hkMemoryAllocator::Self *a1)
{
  int v1;
  uint32_t *v2;
  int v3;
  int v4;
  hkMemoryAllocator::Self *v6;

  v1 = *((uint32_t *)a1 + 1);
  if ( v1 == (*((uint32_t *)a1 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a1, 8, (int)(uintptr_t)(a1));
    a1 = v6;
    v1 = *((uint32_t *)v6 + 1);
  }
  v2 = (uint32_t *)(*(uint32_t *)a1 + 8 * v1);
  *v2 = 0;
  v2[1] = 1602224112;
  v3 = *((uint32_t *)a1 + 1);
  v4 = *(uint32_t *)a1;
  *((uint32_t *)a1 + 1) = v3 + 1;
  return v4 + 8 * v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1623640  (binary VA: 0x1623640)
// Original: sub_1623640
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_1623640(hkMemoryAllocator::Self *result, uint32_t *a2)
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
// Function: sub_16236B0  (binary VA: 0x16236b0)
// Original: sub_16236B0
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_16236B0(hkMemoryAllocator::Self *result, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  hkMemoryAllocator::Self *v5;
  uint32_t *v6;

  v2 = *((uint32_t *)result + 1);
  if ( v2 == (*((uint32_t *)result + 2) & 0x3FFFFFFF) )
  {
    v6 = a2;
    v5 = result;
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, result, 16, v4);
    result = v5;
    a2 = v6;
    v2 = *((uint32_t *)v5 + 1);
  }
  v3 = (uint32_t *)(*(uint32_t *)result + 16 * v2);
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  v3[3] = a2[3];
  ++*((uint32_t *)result + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1623730  (binary VA: 0x1623730)
// Original: sub_1623730
// ----------------------------------------------------------------------------
hkArrayUtil::Self * sub_1623730(hkArrayUtil::Self *result, int *a2, int a3)
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
    hkArrayUtil::reserve(result, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v4, 16);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_16237A0  (binary VA: 0x16237a0)
// Original: sub_16237A0
// ----------------------------------------------------------------------------
int sub_16237A0(uint32_t *a1)
{
  char *v1;
  signed int v2;
  hkLifoAllocator::Self *v3;
  int result;

  v1 = (char *)a1[3];
  if ( (char *)*a1 == v1 )
    a1[1] = 0;
  v2 = (24 * a1[4] + 127) & 0xFFFFFF80;
  v3 = *(hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  if ( v2 > *((uint32_t *)v3 + 2) || *((char **)v3 + 3) != &v1[v2] || v1 == *((char **)v3 + 5) )
    hkLifoAllocator::slowBlockFree(v3, v1, v2);
  else
    *((uint32_t *)v3 + 3) = (uint32_t)(uintptr_t)(v1);
  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               24 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1623C00  (binary VA: 0x1623c00)
// Original: sub_1623C00
// ----------------------------------------------------------------------------
int sub_1623C00(int result)
{
  uint32_t *v1;
  float v2; // xmm7_4
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  int v11;
  float v12; // xmm4_4
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;

  v1 = *(uint32_t **)(result + 32);
  *(g4_int128_t *)(result + 112) = 0;
  if ( v1 != nullptr )
  {
    v17 = *(float *)(result + 256);
    v16 = *(float *)(result + 260);
    v15 = *(float *)(result + 264);
    v18 = *(float *)(result + 224);
    v14 = *(float *)(result + 228);
    v2 = 0.0;
    v3 = 0.0;
    v4 = 0.0;
    v13 = *(float *)(result + 232);
    v5 = 0.0;
    v6 = (float)(*(float *)(result + 268) * 0.0) + *(float *)(result + 236);
    while ( 1 )
    {
      v2 = v2 + v6;
      v19 = v1[10];
      v7 = (float)((float)((float)(int)v1[8] * v17) + v18) + v4;
      v8 = v2;
      v9 = (float)((float)((float)(int)v1[9] * v16) + v14) + v3;
      v10 = (float)((float)((float)v19 * v15) + v13) + v5;
      *(float *)(result + 112) = v7;
      *(float *)(result + 116) = v9;
      *(float *)(result + 120) = v10;
      *(float *)(result + 124) = v2;
      v1 = (uint32_t *)*v1;
      if ( v1 == nullptr )
        break;
      v5 = (float)((float)((float)v19 * v15) + v13) + v5;
      v3 = v9;
      v4 = v7;
    }
  }
  else
  {
    v8 = 0.0;
    v10 = 0.0;
    v9 = 0.0;
    v7 = 0.0;
  }
  v11 = *(uint32_t *)(result + 36);
  if ( v11 != 0 )
  {
    v12 = 1.0 / (float)v11;
    *(float *)(result + 112) = v7 * v12;
    *(float *)(result + 116) = v9 * v12;
    *(float *)(result + 120) = v10 * v12;
    *(float *)(result + 124) = v8 * v12;
  }
  *(uint32_t *)(result + 124) = 0;
  return result;
}



// ============================================================================
// Address:   0x1629570 (size: 254 bytes)
// Symbol:    _ZN10hkVector4f18normalizeIfNotZeroILi3EL18hkMathAccuracyMode1EL17hkMathNegSqrtMode1EEEjv
// Demangled: unsigned int hkVector4f::normalizeIfNotZero<3,(hkMathAccuracyMode)1,(hkMathNegSqrtMode)1>(void)
// ============================================================================
template <>
unsigned int hkVector4f::normalizeIfNotZero<3,(hkMathAccuracyMode)1,(hkMathNegSqrtMode)1>(hkVector4f::Self *self)
{
  float v1; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm1_4
  __m128i v4; // xmm0
  int v6; // xmm5_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm4_4

  v1 = *(float *)self;
  v2 = *((float *)self + 1);
g4_m128_raw(v4) = *(unsigned int *)self;
  v3 = *((float *)self + 2);
  *(float *)g4_m128_ptr<int32_t>(v4) = (float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v3 * v3);
  if ( *(float *)g4_m128_ptr<int32_t>(v4) <= 0.0 )
    return 0;
  v6 = ((_mm_cvtsi128_si32(v4) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v4) >> 1));
  v7 = (float)(*(float *)&v6 * 1.5)
     - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4)) * *(float *)&v6) * (float)(*(float *)&v6 * *(float *)&v6));
  v8 = (float)(1.5
             * (float)((float)(v7 * 1.5)
                     - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4)) * v7) * (float)(v7 * v7))))
     - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4))
                     * (float)((float)(v7 * 1.5)
                             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4)) * v7) * (float)(v7 * v7))))
             * (float)((float)((float)(v7 * 1.5)
                             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4)) * v7) * (float)(v7 * v7)))
                     * (float)((float)(v7 * 1.5)
                             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v4)) * v7) * (float)(v7 * v7)))));
  v9 = v1 * v8;
  v10 = v2 * v8;
  v11 = v3 * v8;
  v12 = v8 * *((float *)self + 3);
  *(float *)self = v9;
  *((float *)self + 1) = v10;
  *((float *)self + 2) = v11;
  *((float *)self + 3) = v12;
  return 1;
}
// ----------------------------------------------------------------------------
// Function: hkMxVectorf_Implementation::reduceAddH_3_8f1f53  (binary VA: 0x162a9e0)
// Original: hkMxVectorf_Implementation::reduceAddH<3>
// ----------------------------------------------------------------------------
void hkMxVectorf_Implementation::reduceAddH_3_8f1f53(hkMxVectorf_Implementation::Self *self, const hkVector4f::Self *a2)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  *(uint32_t *)a2 = *(uint32_t *)self;
  v2 = *(float *)a2;
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 1);
  v3 = *((float *)a2 + 1);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 2);
  v4 = *((float *)a2 + 2);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 3);
  v5 = v2 + *((float *)self + 4);
  v6 = *((float *)a2 + 3);
  *(float *)a2 = v5;
  v7 = v3 + *((float *)self + 5);
  *((float *)a2 + 1) = v7;
  v8 = v4 + *((float *)self + 6);
  *((float *)a2 + 2) = v8;
  v9 = v6 + *((float *)self + 7);
  *((float *)a2 + 3) = v9;
  *(float *)a2 = v5 + *((float *)self + 8);
  *((float *)a2 + 1) = v7 + *((float *)self + 9);
  *((float *)a2 + 2) = v8 + *((float *)self + 10);
  *((float *)a2 + 3) = v9 + *((float *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Trian_d66e8c  (binary VA: 0x162aad0)
// Original: hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::Triangle *,hkgpConvexHullImpl::Triangle::SortByPlaneId>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Trian_d66e8c(int a1, int a2, int a3)
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
    v4 = *(uint32_t *)(v10 + 52);
    v5 = a2 + 1;
    for ( i = a2 + 1; ; v5 = i )
    {
      v12 = v5 - 1;
      v11 = *(uint32_t *)(a1 + 4 * v5 - 4);
      if ( *(uint32_t *)(v11 + 52) < v4 )
        goto LABEL_14;
      v6 = (int *)(a1 + 4 * v3);
      v7 = *v6;
      if ( *(uint32_t *)(*v6 + 52) > v4 )
      {
        v8 = (int *)(a1 + 4 * v3 - 4);
        do
        {
          v7 = *v8;
          --v3;
          v6 = v8--;
        }
        while ( *(uint32_t *)(v7 + 52) > v4 );
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
      v4 = *(uint32_t *)(v10 + 52);
LABEL_14:
      ++i;
    }
    if ( a2 < v3 )
    {
      hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Trian_d66e8c(
        a1,
        a2,
        v3);
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
// Function: hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_696be2  (binary VA: 0x162abf0)
// Original: hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::SortedEdge,hkAlgorithm::less<hkgpConvexHullImpl::SortedEdge>>
// ----------------------------------------------------------------------------
int * hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_696be2(int a1, int a2, int a3)
{
  int i;
  int v4;
  float v5; // xmm2_4
  int v6;
  float *j;
  int v8;
  float v9; // xmm0_4
  int *result;
  int *v11;
  float *v12;
  float v13;
  float *v14;
  int *v15;

  for ( i = a2; ; i = v8 )
  {
    v4 = a3;
    v5 = *(float *)(a1 + 12 * ((a3 + i) >> 1) + 8);
    v6 = a2 + 1;
    for ( j = (float *)(a1 + 12 * a2); ; j += 3 )
    {
      v8 = v6 - 1;
      if ( (float)(j[2] - v5) >= 0.0 )
      {
        v14 = (float *)(a1 + 12 * v4);
        v9 = v14[2];
        result = (int *)(v14 - 3);
        if ( (float)(v5 - v9) < 0.0 )
        {
          do
          {
            v9 = *((float *)result + 2);
            --v4;
            v11 = result;
            result -= 3;
          }
          while ( (float)(v5 - v9) < 0.0 );
          v14 = (float *)v11;
        }
        if ( v4 < v8 )
          break;
        if ( v4 != v8 )
        {
          v12 = v14;
          v13 = *v14;
          v15 = *((int **)v14 + 1);
          *v12 = *j;
          v12[1] = j[1];
          v12[2] = j[2];
          result = v15;
          *j = v13;
          *((uint32_t *)j + 1) = (uint32_t)(uintptr_t)(v15);
          j[2] = v9;
        }
        --v4;
        v8 = v6;
        if ( v4 < v6 )
          break;
      }
      ++v6;
    }
    if ( a2 < v4 )
      break;
    if ( a3 <= v8 )
      return result;
LABEL_10:
    a2 = v8;
  }
  result = (int *)hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_696be2(
                    a1,
                    a2,
                    v4);
  if ( a3 > v8 )
    goto LABEL_10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_ad904a  (binary VA: 0x162ae10)
// Original: hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::SortedTriangle,hkAlgorithm::less<hkgpConvexHullImpl::SortedTriangle>>
// ----------------------------------------------------------------------------
float * hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_ad904a(int a1, int a2, int a3)
{
  int v3;
  float v4; // xmm2_4
  int i;
  int v6;
  int v7;
  float *result;
  float *v9;
  float v10; // xmm0_4
  int v11;
  uint32_t *v12;
  float v13;
  int v14;
  int v15;

  v3 = a2;
LABEL_2:
  v15 = a3;
  v4 = *(float *)(a1 + 8 * ((a3 + v3) >> 1) + 4);
  for ( i = a2 + 1; ; ++i )
  {
    v6 = i - 1;
    if ( (float)(*(float *)(a1 + 8 * i - 4) - v4) <= 0.0 )
    {
      v7 = v15;
      result = (float *)(a1 + 8 * v15);
      v9 = result - 2;
      v10 = result[1];
      if ( (float)(v4 - v10) > 0.0 )
      {
        do
        {
          v10 = v9[1];
          --v7;
          result = v9;
          v9 -= 2;
        }
        while ( (float)(v4 - v10) > 0.0 );
        v15 = v7;
      }
      if ( v15 < v6 )
      {
        v11 = v15;
        if ( a2 < v15 )
          goto LABEL_16;
LABEL_10:
        if ( a3 <= v6 )
          return result;
LABEL_11:
        a2 = v6;
        v3 = v6;
        goto LABEL_2;
      }
      if ( v15 != v6 )
      {
        v12 = (uint32_t *)(result);
        v13 = *result;
        v14 = *(uint32_t *)(a1 + 8 * i - 4);
        result = *(float **)(a1 + 8 * i - 8);
        *v12 = (uint32_t)(uintptr_t)(result);
        v12[1] = v14;
        *(float *)(a1 + 8 * i - 4) = v10;
        *(float *)(a1 + 8 * i - 8) = v13;
      }
      --v15;
      v6 = i;
      if ( v15 < i )
        break;
    }
  }
  v11 = v15;
  if ( a2 >= v15 )
    goto LABEL_10;
LABEL_16:
  result = (float *)hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_ad904a(
                      a1,
                      a2,
                      v11);
  if ( a3 > v6 )
    goto LABEL_11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkgpConvexHullImpl::buildIndices_hkgpConvexHullImpl_Posit_0450a3  (binary VA: 0x162af40)
// Original: hkgpConvexHullImpl::buildIndices<hkgpConvexHullImpl::PositionAsTransform>
// ----------------------------------------------------------------------------
void hkgpConvexHullImpl::buildIndices_hkgpConvexHullImpl_Posit_0450a3(hkgpConvexHullImpl::Self *self)
{
  hkgpConvexHullImpl::Self *v1;
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  float *j;
  int k;
  float *v9;
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v12;
  int v13;
  int **v14;
  int v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __m128i v19;
  __m128i v20;
  int v21;
  unsigned int v22;
  unsigned int i;
  __m128i v24;
  __m128i v25;
  float v26; // xmm6_4
  float v27; // xmm3_4
  __m128i v28;
  int v29;
  float v30; // xmm5_4
  int v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  int v35;
  int v36;
  unsigned int v37;
  uint32_t *v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  int v42;
  float v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  unsigned int *v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  int v51;
  int *v52;
  int *v53;
  float v54; // xmm4_4
  __m128i v55;
  float v56; // xmm2_4
  int *v57;
  int v58;
  float v59; // xmm3_4
  float v60; // xmm2_4
  __m128i v61;
  float v62; // xmm5_4
  float v63; // xmm1_4
  int v64;
  __m128i v65;
  float v66; // xmm6_4
  float v67; // xmm1_4
  __m128i v68;
  float v69; // xmm5_4
  int v70;
  float v71; // xmm4_4
  float v72; // xmm3_4
  float v73; // xmm6_4
  int *v74;
  __m128i v75;
  float v76; // xmm3_4
  float v77; // xmm2_4
  __m128i v78;
  float v79; // xmm1_4
  float v80; // xmm5_4
  int v81;
  int v82;
  float v83; // xmm1_4
  float v84; // xmm0_4
  typedef int _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef int _g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef hkgpConvexHullImpl::Self *_g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef char _g4_t_v99;
  typedef float _g4_t_v100;
  typedef hkgpConvexHullImpl::Self *_g4_t_v101;
  typedef hkgpConvexHullImpl::Self *_g4_t_v102;
  typedef hkgpConvexHullImpl::Self *_g4_t_v103;
  typedef hkgpConvexHullImpl::Self *_g4_t_v104;
  typedef unsigned int _g4_t_v105;
  typedef float _g4_t_v106;
  typedef char _g4_t_v107[4];
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef uint32_t _g4_t_v111[4];
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef unsigned int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef hkgpConvexHullImpl::Self **_g4_t_v125;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v85)) > _g4_s0 ? (12u + sizeof(_g4_t_v85)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v86)) > _g4_s1 ? (36u + sizeof(_g4_t_v86)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v87)) > _g4_s2 ? (40u + sizeof(_g4_t_v87)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v88)) > _g4_s3 ? (44u + sizeof(_g4_t_v88)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v89)) > _g4_s4 ? (52u + sizeof(_g4_t_v89)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v90)) > _g4_s5 ? (56u + sizeof(_g4_t_v90)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v91)) > _g4_s6 ? (56u + sizeof(_g4_t_v91)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v92)) > _g4_s7 ? (60u + sizeof(_g4_t_v92)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v93)) > _g4_s8 ? (60u + sizeof(_g4_t_v93)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v94)) > _g4_s9 ? (80u + sizeof(_g4_t_v94)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v95)) > _g4_s10 ? (80u + sizeof(_g4_t_v95)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v96)) > _g4_s11 ? (80u + sizeof(_g4_t_v96)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v97)) > _g4_s12 ? (80u + sizeof(_g4_t_v97)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v98)) > _g4_s13 ? (100u + sizeof(_g4_t_v98)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v99)) > _g4_s14 ? (100u + sizeof(_g4_t_v99)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v100)) > _g4_s15 ? (100u + sizeof(_g4_t_v100)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v101)) > _g4_s16 ? (104u + sizeof(_g4_t_v101)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v102)) > _g4_s17 ? (104u + sizeof(_g4_t_v102)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v103)) > _g4_s18 ? (112u + sizeof(_g4_t_v103)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v104)) > _g4_s19 ? (116u + sizeof(_g4_t_v104)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v105)) > _g4_s20 ? (120u + sizeof(_g4_t_v105)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v106)) > _g4_s21 ? (120u + sizeof(_g4_t_v106)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v107)) > _g4_s22 ? (124u + sizeof(_g4_t_v107)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v108)) > _g4_s23 ? (128u + sizeof(_g4_t_v108)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v109)) > _g4_s24 ? (132u + sizeof(_g4_t_v109)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v110)) > _g4_s25 ? (136u + sizeof(_g4_t_v110)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v111)) > _g4_s26 ? (144u + sizeof(_g4_t_v111)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v112)) > _g4_s27 ? (160u + sizeof(_g4_t_v112)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v113)) > _g4_s28 ? (164u + sizeof(_g4_t_v113)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v114)) > _g4_s29 ? (168u + sizeof(_g4_t_v114)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v115)) > _g4_s30 ? (176u + sizeof(_g4_t_v115)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v116)) > _g4_s31 ? (180u + sizeof(_g4_t_v116)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v117)) > _g4_s32 ? (184u + sizeof(_g4_t_v117)) : _g4_s32,
    _g4_s34 = (192u + sizeof(_g4_t_v118)) > _g4_s33 ? (192u + sizeof(_g4_t_v118)) : _g4_s33,
    _g4_s35 = (196u + sizeof(_g4_t_v119)) > _g4_s34 ? (196u + sizeof(_g4_t_v119)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v120)) > _g4_s35 ? (200u + sizeof(_g4_t_v120)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v121)) > _g4_s36 ? (208u + sizeof(_g4_t_v121)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v122)) > _g4_s37 ? (212u + sizeof(_g4_t_v122)) : _g4_s37,
    _g4_s39 = (216u + sizeof(_g4_t_v123)) > _g4_s38 ? (216u + sizeof(_g4_t_v123)) : _g4_s38,
    _g4_s40 = (220u + sizeof(_g4_t_v124)) > _g4_s39 ? (220u + sizeof(_g4_t_v124)) : _g4_s39,
    _g4_s41 = (232u + sizeof(_g4_t_v125)) > _g4_s40 ? (232u + sizeof(_g4_t_v125)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 12u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 52u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 56u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 60u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 80u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 80u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 80u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 80u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 100u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 100u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 100u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 116u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 120u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 120u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 124u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 128u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 132u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 136u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 144u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 160u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 164u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 168u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 176u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 180u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 184u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 192u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 196u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 200u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 208u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 212u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 216u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 220u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 232u);

  v125 = &self;
  v1 = self;
  if ( *((uint8_t *)self + 422) != 0 )
    return;
  v2 = *((uint32_t *)self + 13);
  v108 = 0;
  v109 = 0;
  v110 = 0x80000000;
  v111[0] = 0;
  v111[1] = 0;
  v111[2] = -1;
  v112 = 0;
  v113 = 0;
  v114 = 0x80000000;
  if ( v2 != 0 )
  {
    if ( v2 > 0 )
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v107, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v108, v2, 8);
      v13 = v109;
      v12 = v108;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = *((int ***)v1 + 12);
    if ( v14 != nullptr )
    {
      while ( 1 )
      {
        v94 = v12 + 8 * v13;
        v109 = v13 + 1;
        *(uint32_t *)v94 = (uint32_t)(uintptr_t)(v14);
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v121, (const Vertex *)v1, v14[4]);
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v118, (const Vertex *)v1, v14[3]);
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v115, (const Vertex *)v1, v14[2]);
g4_m128_raw(v19) = (unsigned int)v119;
        *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)&v119 - v116;
        v20 = v19;
        *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)&v119 - v116) * (float)(v123 - v117))
                                - (float)((float)(v120 - v117) * (float)(v122 - v116));
        *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20))
                                        + (float)((float)((float)((float)(v120 - v117) * (float)(v121 - v115))
                                                        - (float)((float)(v123 - v117) * (float)(*(float *)&v118 - v115)))
                                                * (float)((float)((float)(v120 - v117) * (float)(v121 - v115))
                                                        - (float)((float)(v123 - v117) * (float)(*(float *)&v118 - v115)))))
                                + (float)((float)((float)((float)(v122 - v116) * (float)(*(float *)&v118 - v115))
                                                - (float)((float)(v121 - v115) * (float)(*(float *)&v119 - v116)))
                                        * (float)((float)((float)(v122 - v116) * (float)(*(float *)&v118 - v115))
                                                - (float)((float)(v121 - v115) * (float)(*(float *)&v119 - v116))));
        if ( *(float *)g4_m128_ptr<int32_t>(v20) > 0.0 )
        {
          v15 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
          v16 = (float)(*(float *)&v15 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * *(float *)&v15)
                      * (float)(*(float *)&v15 * *(float *)&v15));
          v17 = (float)(v16 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v16) * (float)(v16 * v16));
          v18 = (float)((float)(1.5 * v17)
                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v17) * (float)(v17 * v17)))
              * *(float *)g4_m128_ptr<int32_t>(v20);
        }
        else
        {
          v18 = 0.0;
        }
        *(float *)(v94 + 4) = v18;
        v14 = (int **)*v14;
        if ( v14 == nullptr )
          break;
        v12 = v108;
        v13 = v109;
      }
      v13 = v109;
      v12 = v108;
    }
    if ( v13 > 1 )
    {
      LOBYTE(v85) = 0;
      hkAlgorithm::quickSortRecursive_hkgpConvexHullImpl_Sorte_ad904a(
        v12,
        0,
        v13 - 1);
    }
    hkMapBase_unsigned_long_unsigned_l_393416::reserve(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v111,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      *((uint32_t *)v1 + 13));
    v21 = *((uint32_t *)v1 + 13);
    sub_1623730((hkArrayUtil::Self *)v107, &v112, v21);
    v113 = v21;
    v22 = *((uint32_t *)v1 + 12);
    if ( v22 != 0 )
    {
      for ( i = 0; ; i = v95 + 1 )
      {
        v95 = i;
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v111,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v22,
          i);
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v121, (const Vertex *)v1, *(int **)(v22 + 16));
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v118, (const Vertex *)v1, *(int **)(v22 + 12));
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v115, (const Vertex *)v1, *(int **)(v22 + 8));
        v98 = v115;
g4_m128_raw(v24) = (unsigned int)v119;
        v90 = v117;
        *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)&v119 - v116;
        v92 = v116;
        v25 = v24;
        *(float *)g4_m128_ptr<int32_t>(v25) = (float)((float)(*(float *)&v119 - v116) * (float)(v123 - v117))
                                - (float)((float)(v120 - v117) * (float)(v122 - v116));
        v26 = (float)((float)(v120 - v117) * (float)(v121 - v115))
            - (float)((float)(v123 - v117) * (float)(*(float *)&v118 - v115));
        v27 = (float)((float)(v122 - v116) * (float)(*(float *)&v118 - v115))
            - (float)((float)(v121 - v115) * (float)(*(float *)&v119 - v116));
        v28 = v25;
        *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v26 * v26))
                                + (float)(v27 * v27);
        if ( *(float *)g4_m128_ptr<int32_t>(v28) > 0.0 )
        {
          v30 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v28);
          v31 = ((_mm_cvtsi128_si32(v28) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v28) >> 1));
          v32 = (float)(1.5 * *(float *)&v31)
              - (float)((float)(v30 * *(float *)&v31) * (float)(*(float *)&v31 * *(float *)&v31));
          v33 = (float)(1.5 * v32) - (float)((float)(v30 * v32) * (float)(v32 * v32));
          v34 = (float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33));
          v27 = v27 * v34;
          v26 = v26 * v34;
          *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) * v34;
        }
        v29 = v112 + 16 * v95;
        *(float *)(v29 + 8) = v27;
        *(uint32_t *)v29 =g4_m128_lane<int32_t>(v25, 0);
        *(float *)(v29 + 4) = v26;
        *(float *)(v29 + 12) = -(float)((float)((float)(v98 * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v92 * v26))
                                      + (float)(v27 * v90));
        *(uint32_t *)(v22 + 52) = -1;
        *(uint32_t *)(v22 + 60) = v95;
        v22 = *(uint32_t *)v22;
        if ( v22 == 0 )
          break;
      }
    }
  }
  v3 = *((uint32_t **)v1 + 8);
  v4 = 0;
  if ( v3 != nullptr )
  {
    while ( 1 )
    {
      v3[13] = v4;
      v3 = (uint32_t *)*v3;
      if ( v3 == nullptr )
        break;
      ++v4;
    }
  }
  v5 = *((uint32_t *)v1 + 102);
  *((uint32_t *)v1 + 19) = 0;
  if ( v5 == 3 )
  {
    v35 = v109;
    v121 = 0.0;
    v122 = 0.0;
    v123 = -0.0;
    if ( v109 > 0 )
    {
      v36 = 0;
      v96 = v1;
      do
      {
        while ( 1 )
        {
          v37 = *(uint32_t *)(v108 + 8 * v36);
          v105 = v37;
          if ( *(uint32_t *)(v37 + 52) == -1 )
            break;
          if ( ++v36 >= v35 )
            goto LABEL_52;
        }
        v38 = *(uint32_t **)(v108 + 8 * v36);
        v39 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v111,
                v37,
                0xFFFFFFFF);
        v101 = (hkgpConvexHullImpl::Self *)(v112 + 16 * v39);
        v38[13] = *((uint32_t *)v96 + 19);
        sub_16236B0((hkgpConvexHullImpl::Self *)((char *)v96 + 72), v101);
        v122 = 0.0;
        v40 = v38[5] & 0xFFFFFFFC;
        v119 = v38[5] & 3;
        v118 = v40;
        hkArrayBase_hkgpConvexHullImpl_Edge_92b73a::pushBack(
          (hkMemoryAllocator::Self *)&v121,
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v118);
        v41 = v38[6] & 3;
        v118 = v38[6] & 0xFFFFFFFC;
        v119 = v41;
        hkArrayBase_hkgpConvexHullImpl_Edge_92b73a::pushBack(
          (hkMemoryAllocator::Self *)&v121,
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v118);
        v42 = v38[7];
LABEL_47:
        v118 = v42 & 0xFFFFFFFC;
        v119 = v42 & 3;
        hkArrayBase_hkgpConvexHullImpl_Edge_92b73a::pushBack(
          (hkMemoryAllocator::Self *)&v121,
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v118);
LABEL_48:
        v43 = v122;
        while ( v43 != 0.0 )
        {
          v44 = *(uint32_t *)(LODWORD(v121) + 8 * LODWORD(v43) - 8);
          v45 = *(uint32_t *)(LODWORD(v121) + 8 * LODWORD(v43)-- - 4);
          v122 = v43;
          if ( *(uint32_t *)(v44 + 52) == -1 )
          {
            v99 = v45;
            v46 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v111,
                    v44,
                    0xFFFFFFFF);
            v47 = (unsigned int *)(v112 + 16 * v46);
g4_m128_raw(v48) = *v47;
            if ( (_mm_cvtsi128_si32(v48) & 0x7F800000) == 0x7F800000
              || (g4_m128_raw(v49) = v47[1], (_mm_cvtsi128_si32(v49) & 0x7F800000) == 0x7F800000)
              || (g4_m128_raw(v50) = v47[2], (_mm_cvtsi128_si32(v50) & 0x7F800000) == 0x7F800000)
              || fabs(
                   (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48))
                                 + (float)(*(float *)g4_m128_ptr<int32_t>(v49) * *(float *)g4_m128_ptr<int32_t>(v49)))
                         + (float)(*(float *)g4_m128_ptr<int32_t>(v50) * *(float *)g4_m128_ptr<int32_t>(v50)))
                 - 1.0) >= 0.0001f
              || (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)v101)
                               + (float)(*(float *)g4_m128_ptr<int32_t>(v49) * *((float *)v101 + 1)))
                       + (float)(*(float *)g4_m128_ptr<int32_t>(v50) * *((float *)v101 + 2))) >= *((float *)v96 + 1) )
            {
              *(uint32_t *)(v44 + 52) = *(uint32_t *)(v105 + 52);
              v51 = *(uint32_t *)(v44 + 4 * ((9 >> (2 * v99)) & 3) + 20);
              v118 = v51 & 0xFFFFFFFC;
              v119 = v51 & 3;
              hkArrayBase_hkgpConvexHullImpl_Edge_92b73a::pushBack(
                (hkMemoryAllocator::Self *)&v121,
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (int *)&v118);
              v42 = *(uint32_t *)(v44 + 4 * ((18 >> (2 * v99)) & 3) + 20);
              goto LABEL_47;
            }
            goto LABEL_48;
          }
        }
        v35 = v109;
        ++v36;
      }
      while ( v36 < v109 );
LABEL_52:
      v1 = v96;
      v122 = 0.0;
      if ( !__builtin_signbit(v123) )
        (*(void (**)(uint32_t *, float, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          COERCE_FLOAT(LODWORD(v121)),
          8 * LODWORD(v123),
          v85);
    }
  }
  else if ( v5 == 2 )
  {
    if ( *((float *)v1 + 31) == 3.40282e38f )
      sub_1623C00((int)(uintptr_t)(v1));
    v52 = *((int **)v1 + 8);
    v89 = *((float *)v1 + 28);
    v53 = v52;
    v91 = *((float *)v1 + 29);
    v93 = *((float *)v1 + 30);
    if ( v52 != nullptr )
    {
      while ( *v53 != 0 )
        v53 = (int *)*v53;
      hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v118, (const Vertex *)v1, v53);
      while ( 1 )
      {
        *(float *)&v102 = v120;
        v100 = *(float *)&v118;
        v97 = *(float *)&v119;
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v121, (const Vertex *)v1, v52);
        v58 = *((uint32_t *)v1 + 19);
g4_m128_raw(v61) = LODWORD(v123);
        v59 = v121 - v100;
        v60 = v122 - v97;
        *(float *)g4_m128_ptr<int32_t>(v61) = v123 - *(float *)&v102;
        if ( v58 == (*((uint32_t *)v1 + 20) & 0x3FFFFFFF) )
        {
          *(float *)&v86 = v123 - *(float *)&v102;
          v87 = v122 - v97;
          v88 = v121 - v100;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkgpConvexHullImpl::Self *)((char *)v1 + 72),
            16,
            v85);
g4_m128_raw(v61) = v86;
          v58 = *((uint32_t *)v1 + 19);
          v60 = v87;
          v59 = v88;
        }
        v62 = *((float *)v1 + 53);
        v65 = v61;
        v63 = *((float *)v1 + 54);
        *((uint32_t *)v1 + 19) = v58 + 1;
        v64 = *((uint32_t *)v1 + 18) + 16 * v58;
        *(float *)g4_m128_ptr<int32_t>(v65) = (float)(*(float *)g4_m128_ptr<int32_t>(v61) * v62) - (float)(v60 * v63);
        v66 = *((float *)v1 + 52);
        *(uint32_t *)(v64 + 12) = 0;
        v67 = (float)(v63 * v59) - (float)(*(float *)g4_m128_ptr<int32_t>(v61) * v66);
        *(uint32_t *)v64 =g4_m128_lane<int32_t>(v65, 0);
        v56 = (float)(v60 * v66) - (float)(v59 * v62);
        v68 = v65;
        *(float *)(v64 + 4) = v67;
        *(float *)(v64 + 8) = v56;
        *(float *)g4_m128_ptr<int32_t>(v68) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v65) * *(float *)g4_m128_ptr<int32_t>(v65)) + (float)(v67 * v67))
                                + (float)(v56 * v56);
        if ( *(float *)g4_m128_ptr<int32_t>(v68) > 0.0 )
        {
          v69 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v68);
          v70 = ((_mm_cvtsi128_si32(v68) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v68) >> 1));
          v71 = (float)(*(float *)&v70 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v68)) * *(float *)&v70)
                      * (float)(*(float *)&v70 * *(float *)&v70));
          v72 = (float)(v71 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v68)) * v71) * (float)(v71 * v71));
          v73 = (float)(1.5 * v72) - (float)((float)(v69 * v72) * (float)(v72 * v72));
          *(float *)g4_m128_ptr<int32_t>(v65) = *(float *)g4_m128_ptr<int32_t>(v65) * v73;
          v67 = v67 * v73;
          v56 = v56 * v73;
          *(float *)(v64 + 12) = 0.0 * v73;
          *(uint32_t *)v64 =g4_m128_lane<int32_t>(v65, 0);
          *(float *)(v64 + 4) = v67;
          *(float *)(v64 + 8) = v56;
        }
        v54 = (float)((float)(v100 * *(float *)g4_m128_ptr<int32_t>(v65)) + (float)(v97 * v67)) + (float)(*(float *)&v102 * v56);
g4_m128_raw(v55) = LODWORD(v89);
        *(float *)(v64 + 12) = -v54;
        *(float *)g4_m128_ptr<int32_t>(v55) = (float)((float)((float)(v89 * *(float *)g4_m128_ptr<int32_t>(v65)) + (float)(v91 * v67))
                                        + (float)(v93 * v56))
                                - v54;
        if ( _mm_cvtsi128_si32(v55) < 0 )
        {
          *(float *)(v64 + 4) = v67;
          v54 = -v54;
        }
        else
        {
          *(float *)v64 = -*(float *)g4_m128_ptr<int32_t>(v65);
          v56 = -v56;
          *(float *)(v64 + 4) = -v67;
        }
        *(float *)(v64 + 8) = v56;
        *(float *)(v64 + 12) = v54;
        if ( *v52 == 0 )
          break;
        v57 = v52;
        v52 = (int *)*v52;
        hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v118, (const Vertex *)v1, v57);
      }
    }
  }
  else
  {
    v6 = 0;
    if ( v5 != 1 )
      goto LABEL_10;
    hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v115, (const Vertex *)v1, *((int **)v1 + 8));
    v74 = *((int **)v1 + 8);
    *(float *)&v104 = v115;
    v106 = v116;
    *(float *)&v103 = v117;
    if ( v74 != nullptr )
    {
      while ( *v74 != 0 )
        v74 = (int *)*v74;
    }
    hkgpConvexHullImpl::transform((hkgpConvexHullImpl::Self *)&v118, (const Vertex *)v1, v74);
g4_m128_raw(v75) = v118;
    *(float *)g4_m128_ptr<int32_t>(v75) = *(float *)&v118 - *(float *)&v104;
    v78 = v75;
    v76 = *(float *)&v119 - v106;
    v77 = v120 - *(float *)&v103;
    *(float *)g4_m128_ptr<int32_t>(v78) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v75) * *(float *)g4_m128_ptr<int32_t>(v75))
                                    + (float)((float)(*(float *)&v119 - v106) * (float)(*(float *)&v119 - v106)))
                            + (float)((float)(v120 - *(float *)&v103) * (float)(v120 - *(float *)&v103));
    v79 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v78) > 0.0 )
    {
      v80 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v78);
      v81 = _mm_cvtsi128_si32(v78) >> 1;
      v82 = (_mm_cvtsi128_si32(v78) + 2139095040) >> 31;
      v83 = (float)(1.5 * COERCE_FLOAT(v82 & (1597463174 - v81)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v78)) * COERCE_FLOAT(v82 & (1597463174 - v81)))
                  * (float)(COERCE_FLOAT(v82 & (1597463174 - v81)) * COERCE_FLOAT(v82 & (1597463174 - v81))));
      v84 = (float)(1.5 * v83) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v78)) * v83) * (float)(v83 * v83));
      v79 = (float)(1.5 * v84) - (float)((float)(v80 * v84) * (float)(v84 * v84));
    }
    v122 = v76 * v79;
    v123 = v79 * v77;
    v121 = *(float *)g4_m128_ptr<int32_t>(v75) * v79;
    v124 = -(float)((float)((float)(*(float *)&v118 * (float)(*(float *)g4_m128_ptr<int32_t>(v75) * v79))
                          + (float)((float)(v76 * v79) * *(float *)&v119))
                  + (float)((float)(v79 * v77) * v120));
    sub_16236B0((hkgpConvexHullImpl::Self *)((char *)v1 + 72), &v121);
    v121 = -v121;
    v122 = -v122;
    v123 = -v123;
    v124 = -(float)((float)((float)(v121 * *(float *)&v104) + (float)(v122 * v106)) + (float)(v123 * *(float *)&v103));
    sub_16236B0((hkgpConvexHullImpl::Self *)((char *)v1 + 72), &v121);
  }
  v6 = *((uint32_t *)v1 + 19);
LABEL_10:
  if ( *((uint8_t *)v1 + 14) != 0 )
  {
    for ( j = *((float **)v1 + 8); j != nullptr; j = *(float **)j )
    {
      if ( v6 > 0 )
      {
        for ( k = 0; k < v6; ++k )
        {
          v9 = (float *)(*((uint32_t *)v1 + 18) + 16 * k);
          v10 = v9[3];
          v11 = (float)((float)((float)(*v9 * j[4]) + (float)(v9[1] * j[5])) + (float)(v9[2] * j[6])) + v10;
          if ( v11 > 0.0 )
          {
            v9[3] = v10 - v11;
            v6 = *((uint32_t *)v1 + 19);
          }
        }
      }
    }
  }
  if ( v6 != 0 && (*((uint32_t *)v1 + 20) & 0x3FFFFFFF) > v6 )
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)v1 + 18, 16, 0, v6);
  *((uint8_t *)v1 + 422) = 1;
  hkArray_hkVector4f_hkContainerHe_7b80b9::clearAndDeallocate((hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v112);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v111,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v109 = 0;
  if ( v110 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v108,
      8 * v110);
}

// ----------------------------------------------------------------------------
// Function: sub_162CA30  (binary VA: 0x162ca30)
// Original: sub_162CA30
// ----------------------------------------------------------------------------
void sub_162CA30(char **a1)
{
  char *v2;
  int v3;
  int v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v6, (hkString::Self *)v7, 512);
  v2 = *a1;
  v3 = hkOstream::opShl((int)(uintptr_t)(v6), (hkString::Self *)"No index available (");
  v4 = hkOstream::opShl(v3, v2);
  hkOstream::opShl(v4, (hkString::Self *)") hkgpConvexHull::buildIndices need to be called before this operation.");
  if ( hkError::messageError(
         (hkError::Self *)0x79F9D886,
         (int)(uintptr_t)(v7),
         "../../Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h",
         (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_164)->st_name + 2,
         v5) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v6);
}

// ----------------------------------------------------------------------------
// Function: sub_162D820  (binary VA: 0x162d820)
// Original: sub_162D820
// ----------------------------------------------------------------------------
float * sub_162D820(float *a1, int a2, unsigned int a3, int a4, int a5, float *a6, float *a7)
{
  float *v7;
  float *v8;
  float *v9;
  float *v10;
  float v11; // xmm0_4
  float v12; // xmm1_4
  float *result;
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  typedef float *_g4_t_v25;
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
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float *_g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef char _g4_t_v52;
  typedef int _g4_t_v53;
  typedef __m128 _g4_t_v54;
  typedef __m128 _g4_t_v55;
  typedef __m128 _g4_t_v56;
  typedef __m128 _g4_t_v57;
  typedef __m128 _g4_t_v58;
  typedef __m128 _g4_t_v59;
  typedef __m128 _g4_t_v60;
  typedef __m128 _g4_t_v61;
  typedef __m128 _g4_t_v62;
  typedef __m128 _g4_t_v63;
  typedef __m128 _g4_t_v64;
  typedef __m128 _g4_t_v65;
  typedef __m128 _g4_t_v66;
  typedef __m128 _g4_t_v67;
  typedef __m128 _g4_t_v68;
  typedef __m128 _g4_t_v69;
  typedef __m128 _g4_t_v70;
  typedef __m128 _g4_t_v71;
  typedef __m128 _g4_t_v72;
  typedef __m128 _g4_t_v73;
  typedef unsigned int *_g4_t_v74;
  enum : size_t {
    _g4_s0 = 576u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v27)) > _g4_s1 ? (40u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v28)) > _g4_s2 ? (44u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v29)) > _g4_s3 ? (48u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v30)) > _g4_s4 ? (52u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v31)) > _g4_s5 ? (56u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v32)) > _g4_s6 ? (60u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v33)) > _g4_s7 ? (64u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v34)) > _g4_s8 ? (68u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v35)) > _g4_s9 ? (72u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v36)) > _g4_s10 ? (76u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v37)) > _g4_s11 ? (80u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v38)) > _g4_s12 ? (84u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v39)) > _g4_s13 ? (88u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v40)) > _g4_s14 ? (92u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v41)) > _g4_s15 ? (96u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v42)) > _g4_s16 ? (100u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v43)) > _g4_s17 ? (108u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v45)) > _g4_s18 ? (120u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v46)) > _g4_s19 ? (124u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v47)) > _g4_s20 ? (128u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v48)) > _g4_s21 ? (132u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v49)) > _g4_s22 ? (136u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v50)) > _g4_s23 ? (140u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v51)) > _g4_s24 ? (144u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (155u + sizeof(_g4_t_v52)) > _g4_s25 ? (155u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v53)) > _g4_s26 ? (156u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v54)) > _g4_s27 ? (160u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v55)) > _g4_s28 ? (176u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v56)) > _g4_s29 ? (192u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (208u + sizeof(_g4_t_v57)) > _g4_s30 ? (208u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (224u + sizeof(_g4_t_v58)) > _g4_s31 ? (224u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (240u + sizeof(_g4_t_v59)) > _g4_s32 ? (240u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (256u + sizeof(_g4_t_v60)) > _g4_s33 ? (256u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (272u + sizeof(_g4_t_v61)) > _g4_s34 ? (272u + sizeof(_g4_t_v61)) : _g4_s34,
    _g4_s36 = (288u + sizeof(_g4_t_v62)) > _g4_s35 ? (288u + sizeof(_g4_t_v62)) : _g4_s35,
    _g4_s37 = (304u + sizeof(_g4_t_v63)) > _g4_s36 ? (304u + sizeof(_g4_t_v63)) : _g4_s36,
    _g4_s38 = (320u + sizeof(_g4_t_v64)) > _g4_s37 ? (320u + sizeof(_g4_t_v64)) : _g4_s37,
    _g4_s39 = (336u + sizeof(_g4_t_v65)) > _g4_s38 ? (336u + sizeof(_g4_t_v65)) : _g4_s38,
    _g4_s40 = (352u + sizeof(_g4_t_v66)) > _g4_s39 ? (352u + sizeof(_g4_t_v66)) : _g4_s39,
    _g4_s41 = (368u + sizeof(_g4_t_v67)) > _g4_s40 ? (368u + sizeof(_g4_t_v67)) : _g4_s40,
    _g4_s42 = (384u + sizeof(_g4_t_v68)) > _g4_s41 ? (384u + sizeof(_g4_t_v68)) : _g4_s41,
    _g4_s43 = (400u + sizeof(_g4_t_v69)) > _g4_s42 ? (400u + sizeof(_g4_t_v69)) : _g4_s42,
    _g4_s44 = (416u + sizeof(_g4_t_v70)) > _g4_s43 ? (416u + sizeof(_g4_t_v70)) : _g4_s43,
    _g4_s45 = (432u + sizeof(_g4_t_v71)) > _g4_s44 ? (432u + sizeof(_g4_t_v71)) : _g4_s44,
    _g4_s46 = (448u + sizeof(_g4_t_v72)) > _g4_s45 ? (448u + sizeof(_g4_t_v72)) : _g4_s45,
    _g4_s47 = (464u + sizeof(_g4_t_v73)) > _g4_s46 ? (464u + sizeof(_g4_t_v73)) : _g4_s46,
    _g4_s48 = (488u + sizeof(_g4_t_v74)) > _g4_s47 ? (488u + sizeof(_g4_t_v74)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 124u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 128u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 132u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 136u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 140u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 144u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 155u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 192u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 208u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 224u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 240u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 256u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 272u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 288u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 304u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 320u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 336u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 352u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 368u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 384u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 400u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 416u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 432u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 448u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 464u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 488u);

  v74 = &a3;
  v25 = a6;
  v45 = a7;
  v7 = (float *)(16 * HIWORD(a3) + a4);
  v28 = *v7;
  v29 = v7[1];
  v31 = v7[3];
  v8 = (float *)(a5 + ((uint16_t)a3 << 6));
  v30 = v7[2];
  v9 = (float *)(a5 + (HIWORD(a3) << 6));
  v10 = (float *)(a4 + 16 * (uint16_t)a3);
  v32 = v10[1];
  v27 = *v10;
  v33 = v10[2];
  v34 = v10[3];
  v40 = *v9 + *v8;
  v39 = v9[1] + v8[1];
  v46 = v9[7] + v8[7];
  v36 = v9[4] + v8[4];
  v50 = v9[9] + v8[9];
  v35 = v9[5] + v8[5];
  v38 = v9[2] + v8[2];
  v37 = v9[3] + v8[3];
  v48 = v9[11] + v8[11];
  v47 = v9[6] + v8[6];
  v51 = v9[8] + v8[8];
  v49 = v9[10] + v8[10];
  v43 = v9[12] + v8[12];
  v11 = v9[13] + v8[13];
  v12 = v9[14] + v8[14];
g4_m128_lane<float>(v54, 0) = v40;
  v42 = v12;
  v41 = v9[15] + v8[15];
g4_m128_lane<uint64_t>(v54, 1) = LODWORD(v51);
g4_m128_lane<uint64_t>(v55, 0) = __PAIR64__(LODWORD(v35), LODWORD(v39));
g4_m128_lane<float>(v54, 1) = v36;
g4_m128_lane<uint64_t>(v55, 1) = LODWORD(v50);
g4_m128_lane<uint64_t>(v56, 0) = __PAIR64__(LODWORD(v47), LODWORD(v38));
g4_m128_lane<uint64_t>(v56, 1) = LODWORD(v49);
g4_m128_lane<uint64_t>(v57, 0) = __PAIR64__(LODWORD(v46), LODWORD(v37));
g4_m128_lane<uint64_t>(v57, 1) = LODWORD(v48) | 0x3F80000000000000LL;
  hkMatrix4f::setInverse((int)(uintptr_t)(&v53));
  if ( v53 != 0 )
    goto LABEL_2;
  v70 = v54;
  v71 = v55;
  v72 = v56;
  v73 = v57;
  hkMatrix4f::transpose((hkMatrix4f::Self *)&v70);
g4_m128_lane<uint64_t>(v18, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v70), 0),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 0)), 0);
g4_m128_lane<uint64_t>(v18, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 0),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 0)), 0);
g4_m128_lane<uint64_t>(v19, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v70), 1),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 1)), 0);
g4_m128_lane<uint64_t>(v19, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 1),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 1)), 0);
g4_m128_lane<uint64_t>(v20, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v70), 2),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 2)), 0);
g4_m128_lane<uint64_t>(v20, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 2),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 2)), 0);
g4_m128_raw(v21) =g4_m128_lane<uint32_t>(v70, 3);
  v70 = v58;
g4_m128_lane<uint64_t>(v22, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v21,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 3)), 0);
g4_m128_lane<uint64_t>(v22, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 3),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 3)), 0);
  v62 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v58, v58, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v58, v58, 170), v20)),
          _mm_mul_ps(_mm_shuffle_ps(v58, v58, 255), v22));
  v63 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v59, v59, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v59, v59, 170), v20)),
          _mm_mul_ps(_mm_shuffle_ps(v59, v59, 255), v22));
  v64 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v60, v60, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v60, v60, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v60, v60, 170), v20)),
          _mm_mul_ps(_mm_shuffle_ps(v60, v60, 255), v22));
  v65 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v61, v61, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v61, v61, 170), v20)),
          _mm_mul_ps(_mm_shuffle_ps(v61, v61, 255), v22));
  v71 = v59;
  v72 = v60;
  v73 = v61;
  hkMatrix4f::transpose((hkMatrix4f::Self *)&v70);
g4_m128_raw(v23) =g4_m128_lane<uint32_t>(v70, 1);
g4_m128_lane<uint64_t>(v18, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v70), 0),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 0)), 0);
g4_m128_lane<uint64_t>(v70, 0) = 1065353216;
g4_m128_lane<uint64_t>(v18, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 0),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 0)), 0);
g4_m128_lane<uint64_t>(v19, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v23,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 1)), 0);
g4_m128_lane<uint64_t>(v19, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 1),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 1)), 0);
g4_m128_lane<uint64_t>(v23, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v70), 2),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 2)), 0);
g4_m128_lane<uint64_t>(v23, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 2),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 2)), 0);
g4_m128_raw(v24) =g4_m128_lane<uint32_t>(v70, 3);
g4_m128_lane<uint64_t>(v70, 1) = 0;
g4_m128_lane<uint64_t>(v22, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v24,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v71), 3)), 0);
g4_m128_lane<uint64_t>(v22, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v72), 3),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 3)), 0);
  v66 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v54, v54, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v54, v54, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v54, v54, 170), v23)),
          _mm_mul_ps(_mm_shuffle_ps(v54, v54, 255), v22));
  v67 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v55, v55, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v55, v55, 170), v23)),
          _mm_mul_ps(_mm_shuffle_ps(v55, v55, 255), v22));
  v68 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v56, v56, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v56, v56, 170), v23)),
          _mm_mul_ps(_mm_shuffle_ps(v56, v56, 255), v22));
  v69 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v57, v57, 0), v18), _mm_mul_ps(_mm_shuffle_ps(v57, v57, 85), v19)),
            _mm_mul_ps(_mm_shuffle_ps(v57, v57, 170), v23)),
          _mm_mul_ps(_mm_shuffle_ps(v57, v57, 255), v22));
g4_m128_lane<uint64_t>(v71, 0) = 0x3F80000000000000LL;
g4_m128_lane<uint64_t>(v71, 1) = 0;
g4_m128_lane<uint64_t>(v72, 0) = 0;
g4_m128_lane<uint64_t>(v72, 1) = 1065353216;
g4_m128_lane<uint64_t>(v73, 0) = 0;
g4_m128_lane<uint64_t>(v73, 1) = 0x3F80000000000000LL;
  hkMatrix4f::sub((hkMatrix4f::Self *)&v62, (const hkMatrix4f::Self *)&v70);
  hkMatrix4f::sub((hkMatrix4f::Self *)&v66, (const hkMatrix4f::Self *)&v70);
  if ( *v45 <= fmaxf(
                 fmaxf(
                   fmaxf(
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v62, 0)), fabs(g4_m128_lane<float>(v66, 0))),
                       fmaxf(fabs(g4_m128_lane<float>(v62, 1)), fabs(g4_m128_lane<float>(v66, 1)))),
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v62, 2)), fabs(g4_m128_lane<float>(v66, 2))),
                       fmaxf(fabs(g4_m128_lane<float>(v62, 3)), fabs(g4_m128_lane<float>(v66, 3))))),
                   fmaxf(
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v63, 0)), fabs(g4_m128_lane<float>(v67, 0))),
                       fmaxf(fabs(g4_m128_lane<float>(v63, 1)), fabs(g4_m128_lane<float>(v67, 1)))),
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v63, 2)), fabs(g4_m128_lane<float>(v67, 2))),
                       fmaxf(fabs(g4_m128_lane<float>(v63, 3)), fabs(g4_m128_lane<float>(v67, 3)))))),
                 fmaxf(
                   fmaxf(
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v64, 0)), fabs(g4_m128_lane<float>(v68, 0))),
                       fmaxf(fabs(g4_m128_lane<float>(v64, 1)), fabs(g4_m128_lane<float>(v68, 1)))),
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v64, 2)), fabs(g4_m128_lane<float>(v68, 2))),
                       fmaxf(fabs(g4_m128_lane<float>(v64, 3)), fabs(g4_m128_lane<float>(v68, 3))))),
                   fmaxf(
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v65, 0)), fabs(g4_m128_lane<float>(v69, 0))),
                       fmaxf(fabs(g4_m128_lane<float>(v65, 1)), fabs(g4_m128_lane<float>(v69, 1)))),
                     fmaxf(
                       fmaxf(fabs(g4_m128_lane<float>(v65, 2)), fabs(g4_m128_lane<float>(v69, 2))),
                       fmaxf(fabs(g4_m128_lane<float>(v65, 3)), fabs(g4_m128_lane<float>(v69, 3)))))))
    || (*(uint64_t *)a1 =g4_m128_lane<uint64_t>(v61, 0),
        a1[2] =g4_m128_lane<float>(v61, 2),
        a1[3] = 1.0,
        hkgpConvexHull::isPointInside(&v52, a2, a1, 1, *v25),
        v52 == 0) )
  {
LABEL_2:
    result = a1;
    v14 = (float)(v28 + v27) * 0.5;
    v15 = (float)(v32 + v29) * 0.5;
    v16 = (float)(v33 + v30) * 0.5;
    v17 = (float)(v34 + v31) * 0.5;
    *a1 = v14;
    a1[1] = v15;
    a1[2] = v16;
    a1[3] = v17;
  }
  else
  {
    result = a1;
    v14 = *a1;
    v15 = a1[1];
    v16 = a1[2];
    v17 = a1[3];
  }
  result[4] = fmaxf(
                0.0,
                (float)((float)((float)((float)((float)((float)(v38 * v16) + (float)(v37 * v17))
                                              + (float)((float)(v40 * v14) + (float)(v39 * v15)))
                                      * v14)
                              + (float)((float)((float)((float)(v47 * v16) + (float)(v46 * v17))
                                              + (float)((float)(v36 * v14) + (float)(v35 * v15)))
                                      * v15))
                      + (float)((float)((float)((float)(v49 * v16) + (float)(v48 * v17))
                                      + (float)((float)(v51 * v14) + (float)(v50 * v15)))
                              * v16))
              + (float)((float)((float)((float)(v16 * v42) + (float)(v41 * v17))
                              + (float)((float)(v14 * v43) + (float)(v15 * v11)))
                      * v17));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1630240  (binary VA: 0x1630240)
// Original: sub_1630240
// ----------------------------------------------------------------------------
float * sub_1630240(int a1, hkgpConvexHull::Self *a2)
{
  float *v4;
  float v5; // xmm6_4
  float v6; // xmm5_4
  float *result;
  float v8; // xmm0_4
  float v9;
  float v10;
  float *Plane;
  float v12;

  Plane = (float *)hkgpConvexHull::getPlane(a2, *(uint32_t *)(a1 + 8));
  v4 = (float *)hkgpConvexHull::getPlane(a2, *(uint32_t *)(a1 + 4));
  v5 = Plane[2];
  v6 = Plane[1];
  v9 = (float)(v4[1] * v5) - (float)(v4[2] * v6);
  v10 = (float)(v4[2] * *Plane) - (float)(v5 * *v4);
  v12 = (float)(*v4 * v6) - (float)(*Plane * v4[1]);
  result = (float *)hkgpConvexHull::getPlane(a2, *(uint32_t *)(a1 + 12));
  v8 = (float)((float)(v9 * *result) + (float)(v10 * result[1])) + (float)(v12 * result[2]);
  *(float *)(a1 + 16) = v8;
  *(float *)(a1 + 20) = fabs(v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_16304D0  (binary VA: 0x16304d0)
// Original: sub_16304D0
// ----------------------------------------------------------------------------
float * sub_16304D0(int a1, hkgpConvexHull::Self *a2, int a3)
{
  float *v5;
  float v6; // xmm6_4
  float v7; // xmm5_4
  float *result;
  float v9; // xmm0_4
  float v10; // xmm1_4
  g4_int128_t v11;
  unsigned int v12;
  unsigned int v13;
  float v14;
  float v15;
  float *Plane;
  float v17;
  unsigned int v18;

  v13 = *(uint32_t *)a1;
  v12 = *(uint32_t *)(a1 + 8);
  v18 = *(uint32_t *)(a1 + 12);
  Plane = (float *)hkgpConvexHull::getPlane(a2, v12);
  v5 = (float *)hkgpConvexHull::getPlane(a2, a3);
  v6 = Plane[2];
  v7 = Plane[1];
  v14 = (float)(v5[1] * v6) - (float)(v5[2] * v7);
  v15 = (float)(v5[2] * *Plane) - (float)(v6 * *v5);
  v17 = (float)(*v5 * v7) - (float)(*Plane * v5[1]);
  result = (float *)hkgpConvexHull::getPlane(a2, v18);
  v9 = (float)((float)(v14 * *result) + (float)(v15 * result[1])) + (float)(v17 * result[2]);
  v10 = fabs(v9);
  if ( v10 > *(float *)(a1 + 20) )
  {
    *(float *)(a1 + 16) = v9;
    *(float *)(a1 + 20) = v10;
    *(uint64_t *)&v11 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(a3)), 0);
    *((uint64_t *)&v11 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v18)), 0);
    *(g4_int128_t *)a1 = v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1630600  (binary VA: 0x1630600)
// Original: sub_1630600
// ----------------------------------------------------------------------------
float * sub_1630600(int a1, hkgpConvexHull::Self *a2, int a3)
{
  float *v5;
  float v6; // xmm6_4
  float v7; // xmm5_4
  float *result;
  float v9; // xmm0_4
  float v10; // xmm1_4
  g4_int128_t v11;
  unsigned int v12;
  float v13;
  float v14;
  float *Plane;
  float v16;
  unsigned int v17;
  unsigned int v18;

  v12 = *(uint32_t *)a1;
  v17 = *(uint32_t *)(a1 + 12);
  v18 = *(uint32_t *)(a1 + 4);
  Plane = (float *)hkgpConvexHull::getPlane(a2, a3);
  v5 = (float *)hkgpConvexHull::getPlane(a2, v18);
  v6 = Plane[2];
  v7 = Plane[1];
  v13 = (float)(v5[1] * v6) - (float)(v5[2] * v7);
  v14 = (float)(v5[2] * *Plane) - (float)(v6 * *v5);
  v16 = (float)(*v5 * v7) - (float)(*Plane * v5[1]);
  result = (float *)hkgpConvexHull::getPlane(a2, v17);
  v9 = (float)((float)(v13 * *result) + (float)(v14 * result[1])) + (float)(v16 * result[2]);
  v10 = fabs(v9);
  if ( v10 > *(float *)(a1 + 20) )
  {
    *(float *)(a1 + 16) = v9;
    *(uint64_t *)&v11 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v18)), 0);
    *(float *)(a1 + 20) = v10;
    *((uint64_t *)&v11 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(v17)), 0);
    *(g4_int128_t *)a1 = v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1630740  (binary VA: 0x1630740)
// Original: sub_1630740
// ----------------------------------------------------------------------------
float * sub_1630740(int a1, hkgpConvexHull::Self *a2, int a3)
{
  float *v5;
  float v6; // xmm6_4
  float v7; // xmm5_4
  float *result;
  float v9; // xmm0_4
  float v10; // xmm1_4
  g4_int128_t v11;
  unsigned int v12;
  unsigned int v13;
  float v14;
  float v15;
  float *Plane;
  float v17;
  unsigned int v18;

  v13 = *(uint32_t *)a1;
  v12 = *(uint32_t *)(a1 + 8);
  v18 = *(uint32_t *)(a1 + 4);
  Plane = (float *)hkgpConvexHull::getPlane(a2, v12);
  v5 = (float *)hkgpConvexHull::getPlane(a2, v18);
  v6 = Plane[2];
  v7 = Plane[1];
  v14 = (float)(v5[1] * v6) - (float)(v5[2] * v7);
  v15 = (float)(v5[2] * *Plane) - (float)(v6 * *v5);
  v17 = (float)(*v5 * v7) - (float)(*Plane * v5[1]);
  result = (float *)hkgpConvexHull::getPlane(a2, a3);
  v9 = (float)((float)(v14 * *result) + (float)(v15 * result[1])) + (float)(v17 * result[2]);
  v10 = fabs(v9);
  if ( v10 > *(float *)(a1 + 20) )
  {
    *(float *)(a1 + 16) = v9;
    *(float *)(a1 + 20) = v10;
    *(uint64_t *)&v11 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v18)), 0);
    *((uint64_t *)&v11 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(a3)), 0);
    *(g4_int128_t *)a1 = v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1639BB0  (binary VA: 0x1639bb0)
// Original: sub_1639BB0
// ----------------------------------------------------------------------------
void sub_1639BB0(char **a1)
{
  char *v2;
  int v3;
  int v4;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v5, (hkString::Self *)v6, 512);
  v2 = *a1;
  v3 = hkOstream::opShl((int)(uintptr_t)(v5), (hkString::Self *)"No mass properties available (");
  v4 = hkOstream::opShl(v3, v2);
  hkOstream::opShl(
    v4,
    (hkString::Self *)") hkgpConvexHull::buildMassProperties need to be called before this operation.");
  if ( hkError::messageError(
         (hkError::Self *)0x79F9D887,
         (int)(uintptr_t)(v6),
         "../../Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h",
         (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_164)->st_size + 2) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v5);
}

// ----------------------------------------------------------------------------
// Function: sub_163FF50  (binary VA: 0x163ff50)
// Original: sub_163FF50
// ----------------------------------------------------------------------------
int sub_163FF50(int *a1, int a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);

  v21[3] = (uint32_t)(uintptr_t)(&a3);
  v4 = a2;
  v5 = a1[1];
  v19 = v5;
  v6 = a2 + v5;
  v20 = a2 + v5 - 1;
  v7 = a1[2] & 0x3FFFFFFF;
  if ( v6 > v7 )
  {
    v8 = 2 * v7;
    if ( v8 < v6 )
      v8 = v6;
    v18 = v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v21, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v8, 20);
    v5 = a1[1];
    v4 = v18;
  }
  v9 = *a1;
  v10 = (uint32_t *)(*a1 + 20 * v5);
  if ( v4 > 0 )
  {
    v11 = &v10[5 * v4];
    do
    {
      *v10 = 0;
      v10[1] = 0;
      v10 += 5;
    }
    while ( v10 != v11 );
    v5 = a1[1];
    v9 = *a1;
  }
  v12 = v4 + v5;
  v13 = v20;
  a1[1] = v12;
  v14 = v19;
  if ( v19 < v20 )
  {
    v15 = 20 * v19;
    while ( 1 )
    {
      *(uint32_t *)(v9 + v15 + 16) = v14 + 1;
      *(uint32_t *)(*a1 + v15 + 8) = v14;
      v15 += 20;
      v9 = *a1;
      if ( v20 == v14 + 1 )
        break;
      ++v14;
    }
    v13 = v20;
  }
  v16 = 20 * v13;
  *(uint32_t *)(v9 + v16 + 16) = a1[5];
  *(uint32_t *)(*a1 + v16 + 8) = v13;
  a1[5] = v19;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: sub_1640070  (binary VA: 0x1640070)
// Original: sub_1640070
// ----------------------------------------------------------------------------
hkArrayUtil::Self * sub_1640070(hkArrayUtil::Self *result, int *a2, int a3)
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
// Function: sub_16400E0  (binary VA: 0x16400e0)
// Original: sub_16400E0
// ----------------------------------------------------------------------------
hkArrayUtil::Self * sub_16400E0(int *a1, int a2, int a3)
{
  int v4;
  hkArrayUtil::Self *result;
  int v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef bool _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v18)) > _g4_s4 ? (8u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v19)) > _g4_s5 ? (12u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);

  v19[3] = (uint32_t)(uintptr_t)(&a3);
  v4 = a1[3];
  v15 = v4;
  v17 = v4 < a2;
  if ( v4 < a2 && v4 > 0 )
  {
    v12 = (v4 - 1) >> 5;
    v13 = v4 - 32 * v12;
    if ( v13 <= 31 )
      *(uint32_t *)(*a1 + 4 * v12) &= ~(-1 << v13);
  }
  result = (hkArrayUtil::Self *)(a1[2] & 0x3FFFFFFF);
  a1[3] = a2;
  v6 = (a2 + 31) >> 5;
  if ( v6 > (int)(uintptr_t)(result) )
  {
    v7 = 2 * (uint32_t)(uintptr_t)(result);
    if ( v7 < v6 )
      v7 = (a2 + 31) >> 5;
    v14 = a2;
    result = hkArrayUtil::reserve(
               (hkArrayUtil::Self *)v19,
               (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
               a1,
               v7,
               4);
    a2 = v14;
  }
  a1[1] = v6;
  if ( v17 )
  {
    v8 = v15;
    v18 = a2 >> 5;
    v16 = v15 >> 5;
    v9 = -1 << v8;
    v10 = -1 << a2;
    v11 = *a1;
    result = (hkArrayUtil::Self *)~v10;
    if ( v16 == v18 )
    {
      result = (hkArrayUtil::Self *)(v9 & (unsigned int)(uintptr_t)(result));
      if ( result != nullptr )
      {
        result = (hkArrayUtil::Self *)~(unsigned int)(uintptr_t)(result);
        *(uint32_t *)(v11 + 4 * v16) &= (unsigned int)(uintptr_t)(result);
      }
    }
    else
    {
      *(uint32_t *)(v11 + 4 * v16) &= ~v9;
      if ( result != nullptr )
      {
        result = (hkArrayUtil::Self *)~(unsigned int)(uintptr_t)(result);
        *(uint32_t *)(v11 + 4 * v18) &= (unsigned int)(uintptr_t)(result);
      }
      if ( v18 - v16 > 1 )
        return (hkArrayUtil::Self *)memset((void *)(v11 + 4 * v16 + 4), 0, 4 * (v18 - v16) - 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1640600  (binary VA: 0x1640600)
// Original: sub_1640600
// ----------------------------------------------------------------------------
int * sub_1640600(int *result, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int i;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int *_g4_t_v13;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);

  v15[3] = (uint32_t)(uintptr_t)(&a3);
  v3 = result[1];
  v4 = a3;
  v5 = result[2] & 0x3FFFFFFF;
  v11 = a3 + v3;
  if ( (int)(a3 + v3) > v5 )
  {
    v9 = 2 * v5;
    if ( v9 < (int)(a3 + v3) )
      v9 = a3 + v3;
    v13 = result;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, result, v9, 4);
    result = v13;
    v3 = v13[1];
  }
  v6 = *result + 4 * v3;
  if ( (int)v4 > 0 )
  {
    if ( (a2 >= v6 + 16 || v6 >= a2 + 16) && v4 > 0xB )
    {
      v7 = 0;
      v12 = 0;
      v10 = 4 * (v4 >> 2);
      do
      {
        ++v12;
        *(__m128i *)(v6 + v7) = *(__m128i *)(a2 + v7);
        v7 += 16;
      }
      while ( v4 >> 2 > v12 );
      if ( v4 != v10 )
      {
        *(uint32_t *)(v6 + 16 * (v4 >> 2)) = *(uint32_t *)(a2 + 16 * (v4 >> 2));
        if ( (int)v4 > v10 + 1 )
        {
          *(uint32_t *)(v6 + 4 * (v10 + 1)) = *(uint32_t *)(a2 + 4 * (v10 + 1));
          if ( (int)v4 > v10 + 2 )
            *(uint32_t *)(v6 + 4 * (v10 + 2)) = *(uint32_t *)(a2 + 4 * (v10 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v4; ++i )
        *(uint32_t *)(v6 + 4 * i) = *(uint32_t *)(a2 + 4 * i);
    }
  }
  result[1] = v11;
  return result;
}


