#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSUserData.h"

// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_SNSUserData.cpp
// Library: sociallib | Module: sociallib_SNSUserData
// Binary Address Span: 0x143b100 .. 0x14426e0 (11 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x143b100 (size: 155 bytes)
// Symbol:    _ZN9sociallib11SNSUserDataC2ERKS0_
// Demangled: sociallib::SNSUserData::SNSUserData(sociallib::SNSUserData const&)
// ============================================================================
// Alternative name is '_ZN9sociallib11SNSUserDataC1ERKS0_'
void (**sociallib::SNSUserData::Construct(
        sociallib::SNSUserData::Self *self,
        const sociallib::SNSUserData::Self *a2))(sociallib::CDynamicMemoryStream::Self * self)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *i;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  v2 = *((uint32_t **)a2 + 2);
  if ( v2 != nullptr )
  {
    v3 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
           (int)(uintptr_t)(self),
           v2,
           (int)(uintptr_t)(self) + 4);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
    for ( i = v3; i[2] != 0; i = (uint32_t *)i[2] )
      ;
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
    while ( v3[3] != 0 )
      v3 = (uint32_t *)v3[3];
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  }
  *((uint8_t *)self + 24) = *((uint8_t *)a2 + 24);
  return (void (**)(sociallib::CDynamicMemoryStream::Self *))(uintptr_t)(sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
           (sociallib::SNSUserData::Self *)((char *)self + 28),
           (const sociallib::SNSUserData::Self *)((char *)a2 + 28)));
}


// ============================================================================
// Address:   0x1441b20 (size: 101 bytes)
// Symbol:    _ZN9sociallib11SNSUserDataC2Ev
// Demangled: sociallib::SNSUserData::SNSUserData(void)
// ============================================================================
// Alternative name is '_ZN9sociallib11SNSUserDataC1Ev'
void (**sociallib::SNSUserData::Construct(
        sociallib::SNSUserData::Self *self))(sociallib::CDynamicMemoryStream::Self * self)
{
  void (**result)(sociallib::CDynamicMemoryStream::Self *);

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  result = sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
             (sociallib::SNSUserData::Self *)((char *)self + 28),
             nullptr,
             0);
  *((uint8_t *)self + 24) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::SetImageData  (binary VA: 0x1441b90)
// Original: sociallib::SNSUserData::SetImageData
// ----------------------------------------------------------------------------
sociallib::CMemoryStream::Self * sociallib::SNSUserData::SetImageData(sociallib::SNSUserData::Self *self, sociallib::CDynamicMemoryStream::Self *a2)
{
  return sociallib::CMemoryStream::opAssign((sociallib::SNSUserData::Self *)((char *)self + 28), a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::GetParamValue  (binary VA: 0x1441bc0)
// Original: sociallib::SNSUserData::GetParamValue
// ----------------------------------------------------------------------------
void * sociallib::SNSUserData::GetParamValue(int a1, void **a2)
{
  int v2;
  size_t v3;
  size_t v4;
  size_t n;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  size_t v12;
  size_t v13;
  size_t v14;
  int v15;
  int v16;
  size_t v17;
  int v18;
  size_t v19;
  size_t v20;
  int v21;
  int v22;
  void *v23;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v27)) > _g4_s2 ? (4u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v28)) > _g4_s3 ? (8u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v29)) > _g4_s4 ? (12u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v30)) > _g4_s5 ? (31u + sizeof(_g4_t_v30)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 31u);

  v29 = *(uint32_t *)(a1 + 8);
  if ( v29 == 0 )
    goto LABEL_33;
  v2 = *(uint32_t *)(a1 + 8);
  v28 = a1 + 4;
  v26 = a1 + 4;
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      n = v4;
      if ( v3 <= v4 )
        n = v3;
      v6 = v4 - v3;
      v7 = memcmp(*(const void **)(v2 + 16), s2, n);
      if ( v7 != 0 )
        v6 = v7;
      if ( v6 < 0 )
        break;
      v26 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_10;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_10:
  if ( v28 == v26 )
    goto LABEL_33;
  v8 = *(uint32_t *)(*(uint32_t *)(v26 + 16) - 12);
  v9 = v8;
  if ( v3 <= v8 )
    v9 = v3;
  v10 = memcmp(s2, *(const void **)(v26 + 16), v9);
  if ( v10 == 0 )
    v10 = v3 - v8;
  if ( v10 < 0 )
  {
LABEL_33:
    v23 = &unk_2119B20;
    if ( byte_2119B18 == 0 )
    {
      v23 = &unk_2119B20;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119B18) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119B20), (char *)&unk_1B15112, (int)(uintptr_t)(v30));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_2119B18);
        __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119B20, &unk_20D1280);
      }
    }
  }
  else
  {
    v11 = v29;
    v27 = a1 + 4;
    v12 = v3;
    do
    {
      while ( 1 )
      {
        v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v14 = v13;
        if ( v12 <= v13 )
          v14 = v12;
        v15 = v13 - v12;
        v16 = memcmp(*(const void **)(v11 + 16), s2, v14);
        if ( v16 != 0 )
          v15 = v16;
        if ( v15 < 0 )
          break;
        v27 = v11;
        v11 = *(uint32_t *)(v11 + 8);
        if ( v11 == 0 )
          goto LABEL_24;
      }
      v11 = *(uint32_t *)(v11 + 12);
    }
    while ( v11 != 0 );
LABEL_24:
    v17 = v12;
    v18 = v27;
    if ( v28 != v27 )
    {
      v19 = *(uint32_t *)(*(uint32_t *)(v27 + 16) - 12);
      v20 = v19;
      if ( v17 <= v19 )
        v20 = v17;
      v21 = v17 - v19;
      v22 = memcmp(s2, *(const void **)(v27 + 16), v20);
      if ( v22 == 0 )
        v22 = v21;
      if ( v22 < 0 )
        v18 = a1 + 4;
    }
    return (void *)(v18 + 20);
  }
  return v23;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::HasParam  (binary VA: 0x1441d90)
// Original: sociallib::SNSUserData::HasParam
// ----------------------------------------------------------------------------
bool sociallib::SNSUserData::HasParam(int a1, void **a2)
{
  int v2;
  bool result;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v14;

  v2 = *(uint32_t *)(a1 + 8);
  result = false;
  if ( v2 != 0 )
  {
    v14 = a1 + 4;
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
        n = v5;
        if ( v4 <= v5 )
          n = v4;
        v7 = v5 - v4;
        v8 = memcmp(*(const void **)(v2 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v14 = v2;
        v2 = *(uint32_t *)(v2 + 8);
        if ( v2 == 0 )
          goto LABEL_10;
      }
      v2 = *(uint32_t *)(v2 + 12);
    }
    while ( v2 != 0 );
LABEL_10:
    result = false;
    if ( a1 + 4 != v14 )
    {
      v9 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      v10 = v9;
      if ( v4 <= v9 )
        v10 = v4;
      v11 = v4 - v9;
      v12 = memcmp(s2, *(const void **)(v14 + 16), v10);
      if ( v12 == 0 )
        v12 = v11;
      return v12 >= 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::GetFirstName  (binary VA: 0x1441e50)
// Original: sociallib::SNSUserData::GetFirstName
// ----------------------------------------------------------------------------
sociallib::SNSUserData::Self * sociallib::SNSUserData::GetFirstName(sociallib::SNSUserData::Self *self, int a2)
{
  void *ParamValue;
  uint32_t *v3;
  uint32_t *v4;
  char *v5;
  char *v6;
  uint32_t *v7;
  void *v8;
  char *v9;
  char *v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[7];
  typedef uint8_t _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[29];
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (14u + sizeof(_g4_t_v12)) > _g4_s0 ? (14u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v20)) > _g4_s8 ? (48u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v21)) > _g4_s9 ? (76u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v22)) > _g4_s10 ? (80u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v23)) > _g4_s11 ? (84u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v24)) > _g4_s12 ? (88u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v25)) > _g4_s13 ? (204u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (205u + sizeof(_g4_t_v26)) > _g4_s14 ? (205u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v27)) > _g4_s15 ? (208u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (212u + sizeof(_g4_t_v28)) > _g4_s16 ? (212u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (216u + sizeof(_g4_t_v29)) > _g4_s17 ? (216u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (220u + sizeof(_g4_t_v30)) > _g4_s18 ? (220u + sizeof(_g4_t_v30)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 14u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 204u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 205u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 208u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 212u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 216u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 220u);

  ParamValue = sociallib::SNSUserData::GetParamValue(a2, (void **)&sociallib::SNSUserData::k_userName);
  g4_std::string::construct_copy(&v13, ParamValue);
  sub_1900810(v24);
  v24[28] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v24[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v30 = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AADEC);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  memset(&v20[1], 0, 24);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
  v24[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v21);
  v22 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v23), v13, *((uint32_t *)v13 - 3), (int)(uintptr_t)(&v12) + 1);
  v22 = 8;
  sub_1931CD0(v20, v23, 0, 0);
  sub_19119D0(v24, v20);
  v15 = nullptr;
  v16 = nullptr;
  v17 = nullptr;
  v14 = &dword_213B814;
  while ( 1 )
  {
    v3 = (uint32_t *)sub_1905A30(&v18, &v14, 32);
    if ( (*((uint8_t *)v3 + *(uint32_t *)(*v3 - 12) + 20) & 5) != 0 )
      break;
    if ( v16 == v17 )
    {
      g4_std::vector_string_86c307::M_insert_aux((int *)&v15, v16, (int)(uintptr_t)(&v14));
    }
    else
    {
      v11 = nullptr;
      if ( v16 != nullptr )
      {
        g4_std::string::construct_copy(v16, &v14);
        v11 = v16;
      }
      v16 = v11 + 4;
    }
  }
  if ( (unsigned int)(v16 - (char *)((uint8_t *)v15)) >> 2 != 0 )
    g4_std::string::construct_copy(self, v15);
  else
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  v4 = v14 - 3;
  if ( v14 - 3 != dword_213B808 && __sync_fetch_and_add(v14 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v5 = v16;
  v6 = (char *)v15;
  if ( v16 != v15 )
  {
    do
    {
      v7 = (uint32_t *)(*(uint32_t *)v6 - 12);
      if ( v7 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v6 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      v6 += 4;
    }
    while ( v5 != v6 );
    v6 = (char *)v15;
  }
  if ( v6 != nullptr )
    opDelete(v6);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
  v24[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v8 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v21);
  v18 = (int (**)(int))(uintptr_t)(&off_20AADEC);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
  v19 = 0;
  v24[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v24);
  v9 = (char *)v13 - 12;
  if ( (char *)v13 - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v13 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::Construct  (binary VA: 0x1442280)
// Original: sociallib::SNSUserData::SNSUserData
// ----------------------------------------------------------------------------
sociallib::SNSUserData::Self * sociallib::SNSUserData::Construct(sociallib::SNSUserData::Self *self, const std::map<std::string,std::string> *a2, const sociallib::CDynamicMemoryStream::Self *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *i;
  char *v7;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  v7 = (char *)self + 4;
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream((sociallib::SNSUserData::Self *)((char *)self + 28), nullptr, 0);
  if ( a2 != (const std::map<std::string, std::string> *)(uintptr_t)(self) )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(self),
      *((void **)self + 2));
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v7);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v7);
    *((uint32_t *)self + 5) = 0;
    v3 = *((uint32_t **)a2 + 2);
    if ( v3 != nullptr )
    {
      v4 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             (int)(uintptr_t)(self),
             v3,
             (int)(uintptr_t)(v7));
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v4);
      for ( i = v4; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
      while ( v4[3] != 0 )
        v4 = (uint32_t *)v4[3];
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v4);
      *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
    }
  }
  *((uint8_t *)self + 24) = 1;
  return (sociallib::SNSUserData::Self *)(sociallib::CMemoryStream::opAssign((sociallib::SNSUserData::Self *)((char *)self + 28), a3));
}



// ============================================================================
// Address:   0x1442370 (size: 207 bytes)
// Symbol:    _ZN9sociallib11SNSUserDataC1ERKSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEE
// Demangled: sociallib::SNSUserData::SNSUserData(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// ============================================================================
// Alternative name is '_ZN9sociallib11SNSUserDataC2ERKSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEE'
void (**sociallib::SNSUserData::Construct(
        sociallib::SNSUserData::Self *self,
        const std::map<std::string,std::string> *a2))(sociallib::CDynamicMemoryStream::Self * self)
{
  char *v2;
  void (**result)(sociallib::CDynamicMemoryStream::Self *);
  uint32_t *v4;
  uint32_t *i;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  v2 = (char *)self + 4;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  result = sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
             (sociallib::SNSUserData::Self *)((char *)self + 28),
             nullptr,
             0);
  if ( a2 != (const std::map<std::string, std::string> *)(uintptr_t)(self) )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(self),
      *((void **)self + 2));
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v2);
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v2);
    *((uint32_t *)self + 5) = 0;
    result = *((void (***)(sociallib::CDynamicMemoryStream::Self *))a2 + 2);
    if ( result != nullptr )
    {
      v4 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             (int)(uintptr_t)(self),
             result,
             (int)(uintptr_t)(self) + 4);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v4);
      for ( i = v4; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
      while ( v4[3] != 0 )
        v4 = (uint32_t *)v4[3];
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v4);
      result = *((void (***)(sociallib::CDynamicMemoryStream::Self *))a2 + 5);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
    }
  }
  *((uint8_t *)self + 24) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::SetIfUnavailable  (binary VA: 0x1442440)
// Original: sociallib::SNSUserData::SetIfUnavailable
// ----------------------------------------------------------------------------
int sociallib::SNSUserData::SetIfUnavailable(uint32_t *a1, void **a2)
{
  int result;
  int v3;
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  uint32_t *v13;
  void *v14;
  volatile int32_t *v15;
  uint32_t *v16;
  typedef const void *_g4_t_s2;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[4];
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v21)) > _g4_s4 ? (36u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v23)) > _g4_s6 ? (44u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  result = sociallib::SNSUserData::HasParam((int)(uintptr_t)(a1), a2);
  if ( (uint8_t)result != 0 )
    return result;
  v20 = &dword_213B814;
  v3 = a1[2];
  if ( v3 != 0 )
  {
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    v18 = (int)(uintptr_t)(a1 + 1);
    do
    {
      while ( 1 )
      {
        n = v4;
        v6 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        if ( v6 <= v4 )
          n = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        v7 = v6 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 == 0 )
          v8 = v7;
        if ( v8 < 0 )
          break;
        v18 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_11;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_11:
    if ( a1 + 1 != (uint32_t *)v18 )
    {
      v9 = v4;
      v10 = *(uint32_t *)(*(uint32_t *)(v18 + 16) - 12);
      if ( v10 <= v4 )
        v9 = *(uint32_t *)(*(uint32_t *)(v18 + 16) - 12);
      v11 = v4 - v10;
      v12 = memcmp(s2, *(const void **)(v18 + 16), v9);
      if ( v12 == 0 )
        v12 = v11;
      if ( v12 >= 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v18 = (int)(uintptr_t)(a1 + 1);
  }
  v21 = &dword_213B814;
  g4_std::string::construct_copy(&v22, a2);
  g4_std::string::construct_copy(v23, &v21);
  g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
    v19,
    a1,
    v18,
    (const void **)&v22);
  v18 = v19[0];
  v14 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = v22 - 3;
  if ( v22 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v15);
  v16 = v21 - 3;
  if ( v21 - 3 != dword_213B808 && __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v16);
LABEL_17:
  g4_std::string::assign_str(v18 + 20, &v20);
  result = (int)(uintptr_t)(v20);
  v13 = v20 - 3;
  if ( v20 - 3 != dword_213B808 && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
    return ((g4_std::string::Rep::M_destroy(v13)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::EnsureParamExistence  (binary VA: 0x1442680)
// Original: sociallib::SNSUserData::EnsureParamExistence
// ----------------------------------------------------------------------------
int sociallib::SNSUserData::EnsureParamExistence(sociallib::SNSUserData::Self *self)
{
  sociallib::SNSUserData::SetIfUnavailable((uint32_t *)(self), (void **)&sociallib::SNSUserData::k_userName);
  sociallib::SNSUserData::SetIfUnavailable((uint32_t *)(self), (void **)(&sociallib::SNSUserData::k_userId));
  return sociallib::SNSUserData::SetIfUnavailable((uint32_t *)(self), (void **)(&sociallib::SNSUserData::k_userPicture));
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSUserData::SetTextMapData  (binary VA: 0x14426e0)
// Original: sociallib::SNSUserData::SetTextMapData
// ----------------------------------------------------------------------------
int sociallib::SNSUserData::SetTextMapData(sociallib::SNSUserData::Self *self, const std::map<std::string,std::string> *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *i;

  if ( a2 != (const std::map<std::string, std::string> *)(uintptr_t)(self) )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(self),
      *((void **)self + 2));
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
    *((uint32_t *)self + 5) = 0;
    v2 = *((uint32_t **)a2 + 2);
    if ( v2 != nullptr )
    {
      v3 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             (int)(uintptr_t)(self),
             v2,
             (int)(uintptr_t)(self) + 4);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
      for ( i = v3; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
      while ( v3[3] != 0 )
        v3 = (uint32_t *)v3[3];
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
      *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
    }
  }
  return sociallib::SNSUserData::EnsureParamExistence(self);
}


