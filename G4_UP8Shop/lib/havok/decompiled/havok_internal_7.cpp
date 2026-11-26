#include "Core/Utils/DecompTypes.h"
#include "havok_internal_7.h"

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::copySimpleValue_hkDataArray_Value_159c73  (binary VA: 0x18d02d0)
// Original: hkDataWorldCloner::copySimpleValue<hkDataArray_Value>
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataWorldCloner::copySimpleValue_hkDataArray_Value_159c73(hkDataObject::Self *a1, int a2, int a3, uint32_t *a4)
{
  hkTypeManager::Type::Self *result;
  hkTypeManager::Type::Self *v5;
  int v6; // kr00_4
  int v7;
  int v8;
  int16_t v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef hkTypeManager::Type::Self *_g4_t_v23;
  typedef hkTypeManager::Type::Self *_g4_t_v24;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef hkTypeManager::Type::Self *_g4_t_v29;
  typedef uint32_t _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v25)) > _g4_s7 ? (32u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v26)) > _g4_s8 ? (36u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v27)) > _g4_s9 ? (40u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v28)) > _g4_s10 ? (44u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v29)) > _g4_s11 ? (48u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v30)) > _g4_s12 ? (52u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);

  result = (hkTypeManager::Type::Self *)G4_VCALL<int>(*a4, 8, v18, v19, v20, v21, v22, v23, a3, v27, v28, v29, v30[0], v30[1], v30[2], v30[3]);
  v5 = result;
  if ( *(uint32_t *)result <= 9u )
  {
    v6 = *(uint32_t *)result;
    result = (hkTypeManager::Type::Self *)((char *)dword_20B9FF4 + (uint32_t)jpt_18D0311[*(uint32_t *)result]);
    switch ( v6 )
    {
      case 0:
      case 1:
      case 8:
        return result;
      case 2:
      case 4:
        v16 = G4_VCALL<int>(*a4, 72, a4[1]);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 76, v26, v16);
        break;
      case 3:
        v25 = ((long double (*)(uint32_t, uint32_t))*(uint32_t *)(*(uint32_t *)*a4 + 64))(*a4, a4[1]);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 68, v26, LODWORD(v25));
        break;
      case 5:
        v17 = G4_VCALL<int>(*a4, 56, a4[1]);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 60, v26, v17);
        break;
      case 6:
      case 7:
        v7 = G4_VCALL<int>(*a4, 88, a4[1]);
        v29 = (hkTypeManager::Type::Self *)v7;
        if ( v7 != 0 )
        {
          v8 = *(uint32_t *)(v7 + 4);
          ++*(uint32_t *)(v7 + 8);
          v9 = v8;
          LOWORD(v8) = 0;
          *(uint32_t *)(v7 + 4) = v8 | (uint16_t)(v9 + 1);
        }
        hkDataWorldCloner::copyObject((hkDataWorldCloner::Self *)v30, a1, (hkDataObject::Self *)&v29);
        G4_VCALL<void>(a2, 92, v26, v30[0]);
        v10 = (uint32_t *)v30[0];
        if ( v30[0] != 0 )
        {
          v11 = *(uint32_t *)(v30[0] + 4);
          v12 = *(uint32_t *)(v30[0] + 8);
          LOWORD(v11) = 0;
          *(uint32_t *)(v30[0] + 4) = v11 | (uint16_t)(*(uint32_t *)(v30[0] + 4) - 1);
          v10[2] = v12 - 1;
          if ( v12 == 1 )
            G4_VCALL<void>(v10, 4);
        }
        result = v29;
        if ( v29 != nullptr )
        {
          v13 = *((uint32_t *)v29 + 1);
          v14 = *((uint32_t *)v29 + 2);
          LOWORD(v13) = 0;
          *((uint32_t *)v29 + 1) = v13 | (uint16_t)(*((uint32_t *)v29 + 1) - 1);
          *((uint32_t *)result + 2) = v14 - 1;
          if ( v14 == 1 )
            result = (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
        }
        break;
      case 9:
        result = *((hkTypeManager::Type::Self **)v5 + 1);
        if ( *(uint32_t *)result == 3 )
        {
          v24 = v5;
          hkTypeManager::Type::getTupleSize(v5);
          hkTypeManager::Type::getTupleSize(v24);
          v15 = G4_VCALL<int>(*a4, 48, a4[1]);
          result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 52, v26, v15);
        }
        break;
      default:
        abort();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDataWorldCloner::copySimpleValue_hkDataObject_Value_2e47fa  (binary VA: 0x18d0df0)
// Original: hkDataWorldCloner::copySimpleValue<hkDataObject_Value>
// ----------------------------------------------------------------------------
hkTypeManager::Type::Self * hkDataWorldCloner::copySimpleValue_hkDataObject_Value_2e47fa(hkDataObject::Self *a1, int a2, int a3, hkDataObject_Value::Self *a4)
{
  hkTypeManager::Type::Self *result;
  hkTypeManager::Type::Self *v5;
  int v6; // kr00_4
  int v7;
  int v8;
  int16_t v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef hkTypeManager::Type::Self *_g4_t_v22;
  typedef hkTypeManager::Type::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_TupleSize;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef hkTypeManager::Type::Self *_g4_t_v32;
  typedef uint32_t _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_TupleSize)) > _g4_s6 ? (20u + sizeof(_g4_t_TupleSize)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v26)) > _g4_s7 ? (20u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v27)) > _g4_s8 ? (24u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v28)) > _g4_s9 ? (24u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v29)) > _g4_s10 ? (24u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v30)) > _g4_s11 ? (28u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v31)) > _g4_s12 ? (32u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v32)) > _g4_s13 ? (36u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v33)) > _g4_s14 ? (40u + sizeof(_g4_t_v33)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_TupleSize &TupleSize = *reinterpret_cast<_g4_t_TupleSize *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);

  result = (hkTypeManager::Type::Self *)hkDataObject_Value::getType(a4);
  v5 = result;
  if ( *(uint32_t *)result <= 9u )
  {
    v6 = *(uint32_t *)result;
    result = (hkTypeManager::Type::Self *)((char *)dword_20B9FF4 + (uint32_t)jpt_18D0E2F[*(uint32_t *)result]);
    switch ( v6 )
    {
      case 0:
      case 1:
      case 8:
        return result;
      case 2:
      case 4:
        v17 = (*(int (**)(uint32_t, uint32_t, int, int, int, hkTypeManager::Type::Self *, int, int, int, int, hkTypeManager::Type::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)a4 + 52))(
                *(uint32_t *)a4,
                *((uint32_t *)a4 + 1),
                v19,
                v20,
                v21,
                v22,
                v24,
                a3,
                v30,
                v31,
                v32,
                v33[0],
                v33[1],
                v33[2],
                v33[3]);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 96, v27, v17);
        break;
      case 3:
        v26 = ((long double (*)(uint32_t, uint32_t, int, int, int, hkTypeManager::Type::Self *, int, int, int, int, hkTypeManager::Type::Self *, uint32_t, uint32_t, uint32_t, uint32_t))*(uint32_t *)(**(uint32_t **)a4 + 64))(
                *(uint32_t *)a4,
                *((uint32_t *)a4 + 1),
                v19,
                v20,
                v21,
                v22,
                v24,
                a3,
                v30,
                v31,
                v32,
                v33[0],
                v33[1],
                v33[2],
                v33[3]);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 84, v28, LODWORD(v26));
        break;
      case 5:
        v18 = (*(int (**)(uint32_t, uint32_t, int, int, int, hkTypeManager::Type::Self *, int, int, int, int, hkTypeManager::Type::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)a4 + 48))(
                *(uint32_t *)a4,
                *((uint32_t *)a4 + 1),
                v19,
                v20,
                v21,
                v22,
                v24,
                a3,
                v30,
                v31,
                v32,
                v33[0],
                v33[1],
                v33[2],
                v33[3]);
        result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 80, v29, v18);
        break;
      case 6:
      case 7:
        v7 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)a4 + 56))(*(uint32_t *)a4, *((uint32_t *)a4 + 1));
        v32 = (hkTypeManager::Type::Self *)v7;
        if ( v7 != 0 )
        {
          v8 = *(uint32_t *)(v7 + 4);
          ++*(uint32_t *)(v7 + 8);
          v9 = v8;
          LOWORD(v8) = 0;
          *(uint32_t *)(v7 + 4) = v8 | (uint16_t)(v9 + 1);
        }
        hkDataWorldCloner::copyObject((hkDataWorldCloner::Self *)v33, a1, (hkDataObject::Self *)&v32);
        G4_VCALL<void>(a2, 72, a3, v33[0]);
        v10 = (uint32_t *)v33[0];
        if ( v33[0] != 0 )
        {
          v11 = *(uint32_t *)(v33[0] + 4);
          v12 = *(uint32_t *)(v33[0] + 8);
          LOWORD(v11) = 0;
          *(uint32_t *)(v33[0] + 4) = v11 | (uint16_t)(*(uint32_t *)(v33[0] + 4) - 1);
          v10[2] = v12 - 1;
          if ( v12 == 1 )
            G4_VCALL<void>(v10, 4);
        }
        result = v32;
        if ( v32 != nullptr )
        {
          v13 = *((uint32_t *)v32 + 1);
          v14 = *((uint32_t *)v32 + 2);
          LOWORD(v13) = 0;
          *((uint32_t *)v32 + 1) = v13 | (uint16_t)(*((uint32_t *)v32 + 1) - 1);
          *((uint32_t *)result + 2) = v14 - 1;
          if ( v14 == 1 )
            result = (hkTypeManager::Type::Self *)G4_VCALL<int>(result, 4);
        }
        break;
      case 9:
        result = *((hkTypeManager::Type::Self **)v5 + 1);
        if ( *(uint32_t *)result == 3 )
        {
          v23 = v5;
          TupleSize = hkTypeManager::Type::getTupleSize(v5);
          v15 = hkTypeManager::Type::getTupleSize(v23);
          v16 = (*(int (**)(uint32_t, uint32_t, int))(**(uint32_t **)a4 + 60))(
                  *(uint32_t *)a4,
                  *((uint32_t *)a4 + 1),
                  v15);
          result = (hkTypeManager::Type::Self *)G4_VCALL<int>(a2, 92, a3, v16, TupleSize);
        }
        break;
      default:
        abort();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18D15E0  (binary VA: 0x18d15e0)
// Original: sub_18D15E0
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * sub_18D15E0(hkOArchive::Self *a1, int a2, unsigned int a3, char *a4)
{
  hkLifoAllocator::Self *v4;
  char *v5;
  unsigned int v6;
  int v7;
  __m128i v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  hkLifoAllocator::Self *result;
  int i;
  int v16;
  unsigned int v17;
  hkLifoAllocator::Self **address;
  signed int v21;

  if ( a2 == 4 )
    return (hkLifoAllocator::Self *)hkOArchive::writeArrayGeneric(a1, a4, 4, a3);
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v4 = *address;
  v21 = (8 * a3 + 127) & 0xFFFFFF80;
  v5 = *((char **)*address + 3);
  if ( v21 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v5[v21]) <= *((uint32_t *)v4 + 4) )
    *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(&v5[v21]);
  else
    v5 = (char *)hkLifoAllocator::allocateFromNewSlab(v4, v21);
  if ( (int)a3 > 0 )
  {
    if ( (v5 >= &a4[4 * a3] || a4 >= &v5[8 * a3]) && a3 > 0xB )
    {
      v6 = 0;
      v7 = 0;
      v17 = 4 * (a3 >> 2);
      do
      {
        ++v6;
        v8 = _mm_unpackhi_epi32(*(__m128i *)&a4[v7], g4_m128_from<__m128i>(0LL));
        *(__m128i *)&v5[2 * v7] = _mm_unpacklo_epi32(*(__m128i *)&a4[v7], g4_m128_from<__m128i>(0LL));
        *(__m128i *)&v5[2 * v7 + 16] = v8;
        v7 += 16;
      }
      while ( a3 >> 2 > v6 );
      if ( a3 != v17 )
      {
        v9 = *(uint32_t *)&a4[16 * (a3 >> 2)];
        *(uint32_t *)&v5[32 * (a3 >> 2) + 4] = 0;
        *(uint32_t *)&v5[32 * (a3 >> 2)] = v9;
        v10 = v17 + 1;
        if ( (int)a3 > (int)(v17 + 1) )
        {
          v11 = *(uint32_t *)&a4[4 * v10];
          *(uint32_t *)&v5[8 * v10 + 4] = 0;
          *(uint32_t *)&v5[8 * v10] = v11;
          v12 = v17 + 2;
          if ( (int)a3 > (int)(v17 + 2) )
          {
            v13 = *(uint32_t *)&a4[4 * v12];
            *(uint32_t *)&v5[8 * v12 + 4] = 0;
            *(uint32_t *)&v5[8 * v12] = v13;
          }
        }
      }
    }
    else
    {
      for ( i = 0; i != a3; ++i )
      {
        v16 = *(uint32_t *)&a4[4 * i];
        *(uint32_t *)&v5[8 * i + 4] = 0;
        *(uint32_t *)&v5[8 * i] = v16;
      }
    }
  }
  hkOArchive::writeArrayGeneric(a1, v5, a2, a3);
  result = *address;
  if ( v21 > *((uint32_t *)*address + 2) || *((char **)result + 3) != &v5[v21] || v5 == *((char **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, v5, v21);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18D17F0  (binary VA: 0x18d17f0)
// Original: sub_18D17F0
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * sub_18D17F0(int a1)
{
  char v2; // di
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v4;
  hkLifoAllocator::Self **v5;
  int v6;
  int v7;
  hkLifoAllocator::Self *result;
  hkLifoAllocator::Self **v9;
  hkLifoAllocator::Self **v10;

  v2 = G4_VCALL<int>(a1, 40);
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v4 = *address;
  v5 = address;
  v6 = *((uint32_t *)*address + 3);
  if ( *((int *)*address + 2) > 127 && (unsigned int)(v6 + 128) <= *((uint32_t *)v4 + 4) )
  {
    *((uint32_t *)v4 + 3) = v6 + 128;
  }
  else
  {
    v9 = address;
    v6 = hkLifoAllocator::allocateFromNewSlab(v4, 128);
    v5 = v9;
  }
  v7 = v2 & 0xF;
  *(uint32_t *)v6 = 0;
  *(uint32_t *)(v6 + 4) = 0;
  *(uint32_t *)(v6 + 8) = 0;
  *(uint32_t *)(v6 + 12) = 0;
  if ( v7 != 0 )
  {
    v10 = v5;
    G4_VCALL<void>(a1, 24, v6, 16 - v7);
    v5 = v10;
  }
  result = *v5;
  if ( *((int *)*v5 + 2) <= 127 || *((uint32_t *)result + 3) != v6 + 128 || v6 == *((uint32_t *)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, (char *)v6, 128);
  *((uint32_t *)result + 3) = v6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18D18E0  (binary VA: 0x18d18e0)
// Original: sub_18D18E0
// ----------------------------------------------------------------------------
hkClass::Self * sub_18D18E0(hkClass::Self *a1, hkClass::Self *a2, hkClassMember::Self *a3, const void **a4, int a5)
{
  hkClassMember::Self *Member;
  hkClassMember::Self *v7;
  int v8;
  hkClassMember::Self *v9;
  int v10;
  hkClassMember::Self *v11;
  int v12;
  hkClassMember::Self *v13;
  int v14;
  hkClassMember::Self *v15;
  int v16;
  int v17;
  hkClassMember::Self *v18;
  int v19;
  hkClassMember::Self *v20;
  hkClass::Self *v21;
  hkStreamWriter::Self *nn;
  hkClassMember::Self *v23;
  int v24;
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
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef const void **_g4_t_ii;
  typedef hkClass::Self *_g4_t_v45;
  typedef const void **_g4_t_n;
  typedef hkClass::Self *_g4_t_v47;
  typedef const void **_g4_t_m;
  typedef hkClass::Self *_g4_t_v49;
  typedef const void **_g4_t_k;
  typedef hkClass::Self *_g4_t_v51;
  typedef const void **_g4_t_j;
  typedef hkClass::Self *_g4_t_v53;
  typedef hkClass::Self *_g4_t_Class;
  typedef const void **_g4_t_i;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef const void **_g4_t_jj;
  typedef hkClass::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_CstyleArraySize;
  typedef int _g4_t_v63;
  typedef hkClass::Self *_g4_t_v64;
  typedef const void **_g4_t_kk;
  typedef int _g4_t_mm;
  typedef int _g4_t_v67;
  typedef uint32_t _g4_t_v68[7];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v31)) > _g4_s5 ? (24u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v37)) > _g4_s11 ? (48u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v39)) > _g4_s13 ? (56u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v40)) > _g4_s14 ? (60u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v41)) > _g4_s15 ? (64u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v42)) > _g4_s16 ? (68u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v43)) > _g4_s17 ? (72u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_ii)) > _g4_s18 ? (76u + sizeof(_g4_t_ii)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v45)) > _g4_s19 ? (80u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_n)) > _g4_s20 ? (84u + sizeof(_g4_t_n)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v47)) > _g4_s21 ? (88u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_m)) > _g4_s22 ? (92u + sizeof(_g4_t_m)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v49)) > _g4_s23 ? (96u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_k)) > _g4_s24 ? (100u + sizeof(_g4_t_k)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v51)) > _g4_s25 ? (104u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_j)) > _g4_s26 ? (108u + sizeof(_g4_t_j)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v53)) > _g4_s27 ? (112u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_Class)) > _g4_s28 ? (116u + sizeof(_g4_t_Class)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_i)) > _g4_s29 ? (120u + sizeof(_g4_t_i)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v56)) > _g4_s30 ? (124u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v57)) > _g4_s31 ? (128u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v58)) > _g4_s32 ? (132u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_jj)) > _g4_s33 ? (136u + sizeof(_g4_t_jj)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v60)) > _g4_s34 ? (140u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v61)) > _g4_s35 ? (144u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_CstyleArraySize)) > _g4_s36 ? (148u + sizeof(_g4_t_CstyleArraySize)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v63)) > _g4_s37 ? (152u + sizeof(_g4_t_v63)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v64)) > _g4_s38 ? (156u + sizeof(_g4_t_v64)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_kk)) > _g4_s39 ? (160u + sizeof(_g4_t_kk)) : _g4_s39,
    _g4_s41 = (164u + sizeof(_g4_t_mm)) > _g4_s40 ? (164u + sizeof(_g4_t_mm)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v67)) > _g4_s41 ? (172u + sizeof(_g4_t_v67)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v68)) > _g4_s42 ? (176u + sizeof(_g4_t_v68)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_ii &ii = *reinterpret_cast<_g4_t_ii *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_m &m = *reinterpret_cast<_g4_t_m *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 100u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 104u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 108u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 112u);
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 116u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_jj &jj = *reinterpret_cast<_g4_t_jj *>(_g4_sf + 136u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 140u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 144u);
  _g4_t_CstyleArraySize &CstyleArraySize = *reinterpret_cast<_g4_t_CstyleArraySize *>(_g4_sf + 148u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 152u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 156u);
  _g4_t_kk &kk = *reinterpret_cast<_g4_t_kk *>(_g4_sf + 160u);
  _g4_t_mm &mm = *reinterpret_cast<_g4_t_mm *>(_g4_sf + 164u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 172u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 176u);

  hkClass::getDefault(a1, a2, a4, a5);
  if ( *((uint8_t *)a3 + 12) == 25 )
  {
    Class = (hkClass::Self *)hkClassMember::getClass(a3);
    if ( Class != nullptr )
    {
      if ( hkClassMember::getCstyleArraySize(a3) == 0 )
      {
        v38 = 1;
LABEL_6:
        v39 = 0;
        while ( 1 )
        {
          for ( i = nullptr; (int)(uintptr_t)(i) < hkClass::getNumMembers(Class); i = (const void **)((char *)i + 1) )
          {
            Member = (hkClassMember::Self *)hkClass::getMember(Class, (int)(uintptr_t)(i));
            hkClass::getDefault((hkClass::Self *)v68, Class, i, a5);
            v42 = v68[0];
            if ( *((uint8_t *)Member + 12) == 25 )
            {
              v53 = (hkClass::Self *)hkClassMember::getClass(Member);
              if ( v53 != nullptr )
              {
                if ( hkClassMember::getCstyleArraySize(Member) == 0 )
                {
                  v36 = 1;
LABEL_16:
                  v37 = 0;
LABEL_17:
                  for ( j = nullptr; ; j = (const void **)((char *)j + 1) )
                  {
                    if ( (int)(uintptr_t)(j) >= hkClass::getNumMembers(v53) )
                    {
                      if ( ++v37 >= v36 )
                        goto LABEL_10;
                      goto LABEL_17;
                    }
                    v7 = (hkClassMember::Self *)hkClass::getMember(v53, (int)(uintptr_t)(j));
                    hkClass::getDefault((hkClass::Self *)v68, v53, j, a5);
                    v43 = v68[0];
                    if ( *((uint8_t *)v7 + 12) == 25 )
                    {
                      v51 = (hkClass::Self *)hkClassMember::getClass(v7);
                      if ( v51 != nullptr )
                      {
                        if ( hkClassMember::getCstyleArraySize(v7) == 0 )
                        {
                          v34 = 1;
LABEL_30:
                          v35 = 0;
LABEL_31:
                          for ( k = nullptr; ; k = (const void **)((char *)k + 1) )
                          {
                            if ( (int)(uintptr_t)(k) >= hkClass::getNumMembers(v51) )
                            {
                              if ( ++v35 >= v34 )
                                goto LABEL_20;
                              goto LABEL_31;
                            }
                            v9 = (hkClassMember::Self *)hkClass::getMember(v51, (int)(uintptr_t)(k));
                            hkClass::getDefault((hkClass::Self *)v68, v51, k, a5);
                            v40 = v68[0];
                            if ( *((uint8_t *)v9 + 12) == 25 )
                            {
                              v49 = (hkClass::Self *)hkClassMember::getClass(v9);
                              if ( v49 != nullptr )
                              {
                                if ( hkClassMember::getCstyleArraySize(v9) == 0 )
                                {
                                  v32 = 1;
LABEL_44:
                                  v33 = 0;
LABEL_45:
                                  for ( m = nullptr; ; m = (const void **)((char *)m + 1) )
                                  {
                                    if ( (int)(uintptr_t)(m) >= hkClass::getNumMembers(v49) )
                                    {
                                      if ( ++v33 >= v32 )
                                        goto LABEL_34;
                                      goto LABEL_45;
                                    }
                                    v11 = (hkClassMember::Self *)hkClass::getMember(v49, (int)(uintptr_t)(m));
                                    hkClass::getDefault((hkClass::Self *)v68, v49, m, a5);
                                    v41 = v68[0];
                                    if ( *((uint8_t *)v11 + 12) == 25 )
                                    {
                                      v47 = (hkClass::Self *)hkClassMember::getClass(v11);
                                      if ( v47 != nullptr )
                                      {
                                        if ( hkClassMember::getCstyleArraySize(v11) == 0 )
                                        {
                                          v30 = 1;
LABEL_58:
                                          v31 = 0;
LABEL_59:
                                          for ( n = nullptr; ; n = (const void **)((char *)n + 1) )
                                          {
                                            if ( (int)(uintptr_t)(n) >= hkClass::getNumMembers(v47) )
                                            {
                                              if ( ++v31 >= v30 )
                                                goto LABEL_48;
                                              goto LABEL_59;
                                            }
                                            v13 = (hkClassMember::Self *)hkClass::getMember(v47, (int)(uintptr_t)(n));
                                            hkClass::getDefault((hkClass::Self *)v68, v47, n, a5);
                                            v56 = v68[0];
                                            if ( *((uint8_t *)v13 + 12) == 25 )
                                            {
                                              v45 = (hkClass::Self *)hkClassMember::getClass(v13);
                                              if ( v45 != nullptr )
                                              {
                                                if ( hkClassMember::getCstyleArraySize(v13) == 0 )
                                                {
                                                  v28 = 1;
LABEL_72:
                                                  v29 = 0;
LABEL_73:
                                                  for ( ii = nullptr; ; ii = (const void **)((char *)ii + 1) )
                                                  {
                                                    if ( (int)(uintptr_t)(ii) >= hkClass::getNumMembers(v45) )
                                                    {
                                                      if ( ++v29 >= v28 )
                                                        goto LABEL_62;
                                                      goto LABEL_73;
                                                    }
                                                    v15 = (hkClassMember::Self *)hkClass::getMember(v45, (int)(uintptr_t)(ii));
                                                    hkClass::getDefault((hkClass::Self *)v68, v45, ii, a5);
                                                    v58 = v68[0];
                                                    if ( *((uint8_t *)v15 + 12) == 25 )
                                                    {
                                                      v60 = (hkClass::Self *)hkClassMember::getClass(v15);
                                                      if ( v60 != nullptr )
                                                      {
                                                        if ( hkClassMember::getCstyleArraySize(v15) == 0 )
                                                        {
                                                          v26 = 1;
LABEL_88:
                                                          v27 = 0;
LABEL_89:
                                                          for ( jj = nullptr; ; jj = (const void **)((char *)jj + 1) )
                                                          {
                                                            if ( (int)(uintptr_t)(jj) >= hkClass::getNumMembers(v60) )
                                                            {
                                                              if ( ++v27 >= v26 )
                                                                goto LABEL_75;
                                                              goto LABEL_89;
                                                            }
                                                            v18 = (hkClassMember::Self *)hkClass::getMember(v60, (int)(uintptr_t)(jj));
                                                            hkClass::getDefault((hkClass::Self *)v68, v60, jj, a5);
                                                            v63 = v68[0];
                                                            if ( *((uint8_t *)v18 + 12) == 25 )
                                                            {
                                                              v64 = (hkClass::Self *)hkClassMember::getClass(v18);
                                                              if ( v64 != nullptr )
                                                              {
                                                                if ( hkClassMember::getCstyleArraySize(v18) == 0 )
                                                                {
                                                                  v57 = 1;
LABEL_98:
                                                                  v61 = 0;
LABEL_99:
                                                                  for ( kk = nullptr; ; kk = (const void **)((char *)kk + 1) )
                                                                  {
                                                                    if ( (int)(uintptr_t)(kk) >= hkClass::getNumMembers(v64) )
                                                                    {
                                                                      if ( ++v61 >= v57 )
                                                                        goto LABEL_90;
                                                                      goto LABEL_99;
                                                                    }
                                                                    v20 = (hkClassMember::Self *)hkClass::getMember(
                                                                                             v64,
                                                                                             (int)(uintptr_t)(kk));
                                                                    hkClass::getDefault((hkClass::Self *)v68, v64, kk, a5);
                                                                    v67 = v68[0];
                                                                    if ( *((uint8_t *)v20 + 12) == 25 )
                                                                    {
                                                                      v21 = (hkClass::Self *)hkClassMember::getClass(v20);
                                                                      if ( v21 != nullptr )
                                                                      {
                                                                        if ( hkClassMember::getCstyleArraySize(v20) != 0 )
                                                                        {
                                                                          CstyleArraySize = hkClassMember::getCstyleArraySize(v20);
                                                                          if ( CstyleArraySize <= 0 )
                                                                            goto LABEL_100;
                                                                        }
                                                                        else
                                                                        {
                                                                          CstyleArraySize = 1;
                                                                        }
                                                                        for ( mm = 0; mm < CstyleArraySize; ++mm )
                                                                        {
                                                                          for ( nn = nullptr;
                                                                                (int)(uintptr_t)(nn) < hkClass::getNumMembers(v21);
                                                                                nn = (hkStreamWriter::Self *)((char *)nn + 1) )
                                                                          {
                                                                            v23 = (hkClassMember::Self *)hkClass::getMember(
                                                                                                     v21,
                                                                                                     (int)(uintptr_t)(nn));
                                                                            sub_18D18E0(v23, nn, a5);
                                                                            v24 = 0;
                                                                            if ( v68[0] != 0 )
                                                                              v24 = v67;
                                                                            v67 = v24;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
LABEL_100:
                                                                    v19 = 0;
                                                                    if ( v67 != 0 )
                                                                      v19 = v63;
                                                                    v63 = v19;
                                                                  }
                                                                }
                                                                v57 = hkClassMember::getCstyleArraySize(v18);
                                                                if ( v57 > 0 )
                                                                  goto LABEL_98;
                                                              }
                                                            }
LABEL_90:
                                                            v17 = 0;
                                                            if ( v63 != 0 )
                                                              v17 = v58;
                                                            v58 = v17;
                                                          }
                                                        }
                                                        v26 = hkClassMember::getCstyleArraySize(v15);
                                                        if ( v26 > 0 )
                                                          goto LABEL_88;
                                                      }
                                                    }
LABEL_75:
                                                    v16 = 0;
                                                    if ( v58 != 0 )
                                                      v16 = v56;
                                                    v56 = v16;
                                                  }
                                                }
                                                v28 = hkClassMember::getCstyleArraySize(v13);
                                                if ( v28 > 0 )
                                                  goto LABEL_72;
                                              }
                                            }
LABEL_62:
                                            v14 = 0;
                                            if ( v56 != 0 )
                                              v14 = v41;
                                            v41 = v14;
                                          }
                                        }
                                        v30 = hkClassMember::getCstyleArraySize(v11);
                                        if ( v30 > 0 )
                                          goto LABEL_58;
                                      }
                                    }
LABEL_48:
                                    v12 = 0;
                                    if ( v41 != 0 )
                                      v12 = v40;
                                    v40 = v12;
                                  }
                                }
                                v32 = hkClassMember::getCstyleArraySize(v9);
                                if ( v32 > 0 )
                                  goto LABEL_44;
                              }
                            }
LABEL_34:
                            v10 = 0;
                            if ( v40 != 0 )
                              v10 = v43;
                            v43 = v10;
                          }
                        }
                        v34 = hkClassMember::getCstyleArraySize(v7);
                        if ( v34 > 0 )
                          goto LABEL_30;
                      }
                    }
LABEL_20:
                    v8 = 0;
                    if ( v43 != 0 )
                      v8 = v42;
                    v42 = v8;
                  }
                }
                v36 = hkClassMember::getCstyleArraySize(Member);
                if ( v36 > 0 )
                  goto LABEL_16;
              }
            }
LABEL_10:
            if ( v42 == 0 )
              *(uint32_t *)a1 = 0;
          }
          if ( ++v39 >= v38 )
            return a1;
        }
      }
      v38 = hkClassMember::getCstyleArraySize(a3);
      if ( v38 > 0 )
        goto LABEL_6;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_18D5F80  (binary VA: 0x18d5f80)
// Original: sub_18D5F80
// ----------------------------------------------------------------------------
int sub_18D5F80(int *a1, int a2, float a3, int a4)
{
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  float *v15;
  int v16;
  __m128i v17;
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  __m128i v21;
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  __m128i v25;
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm5_4
  __m128i v29;
  float v30; // xmm4_4
  float v31; // xmm6_4
  int v32; // xmm3_4
  float v33; // xmm4_4
  __m128i v34;
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm5_4
  __m128i v38;
  float v39; // xmm4_4
  float v40; // xmm6_4
  int v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  int *v44;
  uint32_t *v45;
  int v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef float *_g4_t_v50;
  typedef float *_g4_t_v51;
  typedef float *_g4_t_v52;
  typedef float *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t _g4_t_v61[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v47)) > _g4_s0 ? (8u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v48)) > _g4_s1 ? (16u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v49)) > _g4_s2 ? (20u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v50)) > _g4_s3 ? (24u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v51)) > _g4_s4 ? (28u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v52)) > _g4_s5 ? (32u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v53)) > _g4_s6 ? (36u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v54)) > _g4_s7 ? (40u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v55)) > _g4_s8 ? (44u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v56)) > _g4_s9 ? (44u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v57)) > _g4_s10 ? (48u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v59)) > _g4_s11 ? (52u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v60)) > _g4_s12 ? (56u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v61)) > _g4_s13 ? (60u + sizeof(_g4_t_v61)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);

  v61[3] = (uint32_t)(uintptr_t)(&a4);
  result = a4;
  v57 = a4;
  if ( a4 != 0 )
  {
    v47 = 16 * a2;
    do
    {
      v60 = a1[3];
      v6 = a1[4] & 0x3FFFFFFF;
      v7 = v60 + 3;
      v54 = a1[6];
      v8 = v54;
      if ( v60 + 3 > v6 )
      {
        v9 = 2 * v6;
        if ( v9 >= v7 )
          v7 = v9;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v61,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          a1 + 2,
          v7,
          16);
        v7 = a1[3] + 3;
        v8 = a1[6];
      }
      v10 = a1[7];
      a1[3] = v7;
      v11 = v10 & 0x3FFFFFFF;
      v12 = v8 + 3;
      if ( v8 + 3 > v11 )
      {
        v13 = 2 * v11;
        if ( v12 >= v13 )
          v13 = v8 + 3;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v61,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          a1 + 5,
          v13,
          16);
        v12 = a1[6] + 3;
      }
      v14 = (int *)(a1[5] + v47);
      a1[6] = v12;
      v55 = a1[2];
      v53 = (float *)(v55 + 16 * *v14);
      v15 = (float *)(v55 + 16 * v14[1]);
      v52 = (float *)(16 * v14[2] + v55);
      v49 = v60 + 1;
      v16 = v55 + 16 * v60;
      v51 = (float *)(v16 + 16);
      v48 = v60 + 2;
g4_m128_raw(v17) = *(unsigned int *)v53;
      *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) + *v15;
      v50 = (float *)(v16 + 32);
      *(uint32_t *)v16 =g4_m128_lane<int32_t>(v17, 0);
      v21 = v17;
      v18 = v53[1] + v15[1];
      *(float *)(v16 + 4) = v18;
      v19 = v53[2] + v15[2];
      *(float *)(v16 + 8) = v19;
      v20 = v53[3] + v15[3];
      *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v17)) + (float)(v18 * v18))
                              + (float)(v19 * v19);
      v22 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v21) > 0.0 )
      {
        v23 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v21);
        v56 = ((_mm_cvtsi128_si32(v21) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v21) >> 1));
        v24 = (float)(1.5 * *(float *)&v56)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * *(float *)&v56)
                    * (float)(*(float *)&v56 * *(float *)&v56));
        v22 = (float)(1.5 * (float)((float)(1.5 * v24) - (float)((float)(v23 * v24) * (float)(v24 * v24))))
            - (float)((float)(v23 * (float)((float)(1.5 * v24) - (float)((float)(v23 * v24) * (float)(v24 * v24))))
                    * (float)((float)((float)(1.5 * v24) - (float)((float)(v23 * v24) * (float)(v24 * v24)))
                            * (float)((float)(1.5 * v24) - (float)((float)(v23 * v24) * (float)(v24 * v24)))));
      }
      *(float *)v16 = (float)(*(float *)g4_m128_ptr<int32_t>(v17) * v22) * a3;
      *(float *)(v16 + 4) = (float)(v18 * v22) * a3;
      *(float *)(v16 + 8) = (float)(v19 * v22) * a3;
      *(float *)(v16 + 12) = (float)(v20 * v22) * a3;
g4_m128_raw(v25) = *(unsigned int *)v15;
      *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) + *v52;
      *v51 = *(float *)g4_m128_ptr<int32_t>(v25);
      v29 = v25;
      v26 = v15[1] + v52[1];
      *(float *)(v16 + 20) = v26;
      v27 = v15[2] + v52[2];
      *(float *)(v16 + 24) = v27;
      v28 = v15[3] + v52[3];
      *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v26 * v26))
                              + (float)(v27 * v27);
      v30 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v29) > 0.0 )
      {
        v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
        v32 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
        v33 = (float)(1.5 * *(float *)&v32)
            - (float)((float)(v31 * *(float *)&v32) * (float)(*(float *)&v32 * *(float *)&v32));
        v30 = (float)(1.5 * (float)((float)(1.5 * v33) - (float)((float)(v31 * v33) * (float)(v33 * v33))))
            - (float)((float)(v31 * (float)((float)(1.5 * v33) - (float)((float)(v31 * v33) * (float)(v33 * v33))))
                    * (float)((float)((float)(1.5 * v33) - (float)((float)(v31 * v33) * (float)(v33 * v33)))
                            * (float)((float)(1.5 * v33) - (float)((float)(v31 * v33) * (float)(v33 * v33)))));
      }
      *v51 = (float)(*(float *)g4_m128_ptr<int32_t>(v25) * v30) * a3;
      *(float *)(v16 + 20) = (float)(v26 * v30) * a3;
      *(float *)(v16 + 24) = (float)(v27 * v30) * a3;
      *(float *)(v16 + 28) = (float)(v28 * v30) * a3;
g4_m128_raw(v34) = *(unsigned int *)v52;
      *(float *)g4_m128_ptr<int32_t>(v34) = *(float *)g4_m128_ptr<int32_t>(v34) + *v53;
      *v50 = *(float *)g4_m128_ptr<int32_t>(v34);
      v38 = v34;
      v35 = v52[1] + v53[1];
      *(float *)(v16 + 36) = v35;
      v36 = v52[2] + v53[2];
      *(float *)(v16 + 40) = v36;
      v37 = v52[3] + v53[3];
      *(float *)g4_m128_ptr<int32_t>(v38) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v34) * *(float *)g4_m128_ptr<int32_t>(v34)) + (float)(v35 * v35))
                              + (float)(v36 * v36);
      v39 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v38) > 0.0 )
      {
        v40 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v38);
        v41 = ((_mm_cvtsi128_si32(v38) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v38) >> 1));
        v42 = (float)(1.5 * *(float *)&v41)
            - (float)((float)(v40 * *(float *)&v41) * (float)(*(float *)&v41 * *(float *)&v41));
        v39 = (float)(1.5 * (float)((float)(1.5 * v42) - (float)((float)(v40 * v42) * (float)(v42 * v42))))
            - (float)((float)(v40 * (float)((float)(1.5 * v42) - (float)((float)(v40 * v42) * (float)(v42 * v42))))
                    * (float)((float)((float)(1.5 * v42) - (float)((float)(v40 * v42) * (float)(v42 * v42)))
                            * (float)((float)(1.5 * v42) - (float)((float)(v40 * v42) * (float)(v42 * v42)))));
      }
      *v50 = (float)(*(float *)g4_m128_ptr<int32_t>(v34) * v39) * a3;
      *(float *)(v16 + 40) = (float)(v36 * v39) * a3;
      v43 = a3;
      *(float *)(v16 + 36) = (float)(v35 * v39) * a3;
      *(float *)(v16 + 44) = (float)(v37 * v39) * a3;
      v44 = (int *)(16 * v54 + a1[5]);
      v45 = (uint32_t *)(v44 + 4);
      v59 = v44 + 8;
      *v44 = *v14;
      v44[1] = v60;
      v44[2] = v48;
      v44[4] = v60;
      v46 = v14[1];
      v45[2] = v49;
      v45[1] = v46;
      *v59 = v48;
      v59[1] = v49;
      v59[2] = v14[2];
      *v14 = v60;
      v14[1] = v49;
      v14[2] = v48;
      --v57;
      a3 = v43;
      sub_18D5F80(v57);
      sub_18D5F80(v57);
      result = sub_18D5F80(v57);
    }
    while ( v57 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18D8F40  (binary VA: 0x18d8f40)
// Original: sub_18D8F40
// ----------------------------------------------------------------------------
int sub_18D8F40(int a1)
{
  int result;
  int v3;
  int v4;
  int64_t v5; // rax
  int64_t v6;
  int64_t v7; // rax
  typedef int _g4_t_v8[3];
  typedef uint8_t _g4_t_v9[540];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  if ( *(uint8_t *)(a1 + 104) != 0 && *(uint8_t *)(a1 + 140) != 0 )
  {
    LODWORD(v5) = hkStopwatch::getTickCounter();
    v6 = *(uint64_t *)(a1 + 116) + v5 - *(uint64_t *)(a1 + 108);
    v7 = *(uint64_t *)(a1 + 132) + v5 - *(uint64_t *)(a1 + 124);
    *(uint8_t *)(a1 + 140) = 0;
    *(uint64_t *)(a1 + 116) = v6;
    *(uint64_t *)(a1 + 132) = v7;
    ++*(uint32_t *)(a1 + 144);
  }
  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 52))(*(uint32_t *)(a1 + 8));
    v3 = result;
    if ( result != 0 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v8, (hkString::Self *)v9, 512);
      hkOstream::opShl(
        (int)(uintptr_t)(v8),
        (hkString::Self *)"A new network client has been received (host name not available at present)");
      hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v9), "hkVisualDebugger.cpp", &stru_134[4]);
      hkErrStream::Destroy((hkErrStream::Self *)v8);
      result = hkVisualDebugger::createClient(
                 (hkVisualDebugger::Self *)a1,
                 (hkSocket::Self *)v3,
                 (hkStreamReader::Self *)(v3 + 8),
                 (hkStreamWriter::Self *)(v3 + 20));
    }
  }
  if ( *(uint8_t *)(a1 + 104) != 0 )
  {
    *(uint8_t *)(a1 + 140) = 1;
    result = hkStopwatch::getTickCounter();
    *(uint32_t *)(a1 + 108) = result;
    *(uint32_t *)(a1 + 112) = v4;
    *(uint32_t *)(a1 + 124) = result;
    *(uint32_t *)(a1 + 128) = v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::thunk_consumeCommand  (binary VA: 0x18d9580)
// Original: `non-virtual thunk to'hkInspectProcess::consumeCommand
// ----------------------------------------------------------------------------
void hkInspectProcess::thunk_consumeCommand(hkIArchive::Self **self, uint8_t a2)
{
  hkInspectProcess::consumeCommand(self - 2, a2);
}


