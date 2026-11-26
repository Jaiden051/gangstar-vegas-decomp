#include "Core/Utils/DecompTypes.h"
#include "iap_Store.h"

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessCompleteTransactionResponse  (binary VA: 0x14f45c0)
// Original: iap::Store::ProcessCompleteTransactionResponse
// ----------------------------------------------------------------------------
void iap::Store::ProcessCompleteTransactionResponse()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessRestoreResponse  (binary VA: 0x14f45d0)
// Original: iap::Store::ProcessRestoreResponse
// ----------------------------------------------------------------------------
int iap::Store::ProcessRestoreResponse(iap::Store::Self *self, iap::Store::Self *a2)
{
  char *v2;
  unsigned int v3;
  uint32_t *v4;
  int result;
  uint32_t *v6;
  typedef unsigned int _g4_t_v7[2];
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v8 = &dword_213B814;
  v9 = &dword_213B814;
  *((uint32_t *)self + 14) = 0;
  v2 = *((char **)a2 + 3);
  v3 = *((uint32_t *)v2 - 3);
  if ( v3 != 0 )
    glwebtools::SecureString::Set((unsigned int (*)[2])v7, v2, v3);
  else
    glwebtools::SecureString::Set((unsigned int (*)[2])v7, nullptr, 0);
  *(uint64_t *)((char *)self + 60) = *(uint64_t *)v7;
  g4_std::string::assign_str((char *)self + 68, &v8);
  g4_std::string::assign_str((char *)self + 72, &v9);
  glwebtools::SecureString::Set((unsigned int (*)[2])v7, nullptr, 0);
  v4 = v9 - 3;
  if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  result = (int)(uintptr_t)(v8);
  v6 = v8 - 3;
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
    { g4_std::string::Rep::M_destroy(v6); return 0; }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessDownloadResponse  (binary VA: 0x14f4710)
// Original: iap::Store::ProcessDownloadResponse
// ----------------------------------------------------------------------------
char * iap::Store::ProcessDownloadResponse(iap::Store::Self *self, iap::Store::Self *a2)
{
  const glwebtools::Json::Value::Self *v2;
  void *v3;
  void *v4;
  const glwebtools::Json::Value::Self *v5;
  void *v6;
  void *v7;
  void *v8;
  char *v9;
  char *result;
  char *v11;
  FILE *v12;
  typedef FILE *_g4_t_v13;
  typedef int _g4_t_v14[2];
  typedef char *_g4_t_v15;
  typedef const char *_g4_t_v16;
  typedef int _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef const char **_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef const char **_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[28];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v14)) > _g4_s1 ? (15u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v17)) > _g4_s4 ? (56u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v18)) > _g4_s5 ? (72u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v19)) > _g4_s6 ? (76u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v20)) > _g4_s7 ? (88u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v21)) > _g4_s8 ? (92u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v22)) > _g4_s9 ? (104u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v23)) > _g4_s10 ? (108u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v24)) > _g4_s11 ? (120u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v25)) > _g4_s12 ? (124u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v26)) > _g4_s13 ? (136u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v27)) > _g4_s14 ? (152u + sizeof(_g4_t_v27)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 15u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 136u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 152u);

  v15 = (char *)&dword_213B814;
  v16 = (const char *)&dword_213B814;
  v17[0] = (int)(uintptr_t)(&dword_213B814);
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v26, (int)(uintptr_t)(a2) + 16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "icon_name", (int)(uintptr_t)(v14));
  v19 = &v16;
  g4_std::string::construct_copy(&v22, &v18);
  v23 = v19;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v26) != 0
    && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v26) != 0
    && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v26, (char **)&v22) )
  {
    v2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                            (glwebtools::Json::Value::Self *)v26,
                                            (const char **)&v22);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v27, v2);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v27, (int)(uintptr_t)(v23));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v27);
  }
  v3 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "icon_data", (int)(uintptr_t)(v14) + 1);
  v21 = v17;
  g4_std::string::construct_copy(&v24, &v20);
  v25 = v21;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v26) != 0
    && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v26) != 0
    && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v26, (char **)&v24) )
  {
    v5 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                            (glwebtools::Json::Value::Self *)v26,
                                            (const char **)&v24);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v27, v5);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v27, (int)(uintptr_t)(v25));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v27);
  }
  v6 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  glwebtools::Codec::DecodeUrl(v17, (int)(uintptr_t)(&v15));
  if ( *v16 != 0 )
  {
    v12 = fopen(v16, "wb");
    if ( v12 != nullptr )
    {
      v13 = v12;
      fwrite(v15, *((uint32_t *)v15 - 3), 1u, v12);
      fclose(v13);
    }
  }
  --*((uint32_t *)self + 43);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v26);
  v8 = (void *)(v17[0] - 12);
  if ( (uint32_t *)(v17[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (char *)(v16 - 12);
  if ( v16 - 12 != (const char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v16 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  result = v15;
  v11 = v15 - 12;
  if ( v15 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(v11), (char *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessTransactionResponse  (binary VA: 0x14f4ae0)
// Original: iap::Store::ProcessTransactionResponse
// ----------------------------------------------------------------------------
void iap::Store::ProcessTransactionResponse(iap::Store::Self *self, iap::Store::Self *a2)
{
  iap::Store::Self *v2;
  iap::Store::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  char *v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef unsigned int _g4_t_v13[2];
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint32_t _g4_t_v17[22];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v12)) > _g4_s1 ? (32u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v13)) > _g4_s2 ? (48u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v14)) > _g4_s3 ? (56u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v15)) > _g4_s4 ? (60u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v16)) > _g4_s5 ? (68u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v17)) > _g4_s6 ? (84u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);

  v17[21] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  *((uint32_t *)self + 19) = 0;
  if ( *(uint32_t *)(*((uint32_t *)v3 + 4) - 12) != 0 )
  {
    v4 = *((uint32_t *)v2 + 41);
    if ( v4 > 0 )
      *((uint32_t *)v2 + 41) = v4 - 1;
    v5 = *((uint32_t *)v2 + 42);
    if ( v5 > 0 )
      *((uint32_t *)v2 + 42) = v5 - 1;
    glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v16, (int)(uintptr_t)(v3) + 16);
    iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v17);
    memset(&v17[16], 0, 12);
    v17[0] = ((uint32_t)(uintptr_t)&off_20960C8);
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v16) != 0
      && (*(int (**)(uint32_t *, uint8_t *))(v17[0] + 8))(v17, v16) == 0 )
    {
      iap::TransactionInfo::UpdateTimeStamp((iap::TransactionInfo::Self *)v17);
      iap::TransactionInfoExtended::ToString((iap::TransactionInfoExtended::Self *)&v12);
      v14 = &dword_213B814;
      v15 = &dword_213B814;
      if ( *((uint32_t *)v12 - 3) != 0 )
        glwebtools::SecureString::Set((unsigned int (*)[2])v13, v12, *((uint32_t *)v12 - 3));
      else
        glwebtools::SecureString::Set((unsigned int (*)[2])v13, nullptr, 0);
      v11 = (char *)v2 + 92;
      v6 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v7 = v6;
      if ( v6 != -8 )
      {
        *(uint32_t *)(v6 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
        *(uint32_t *)(v6 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
        *(uint64_t *)(v6 + 8) = *(uint64_t *)v13;
        g4_std::string::assign_str(v6 + 16, &v14);
        g4_std::string::assign_str(v7 + 20, &v15);
      }
      sub_1901920(v7, v11);
      glwebtools::SecureString::Set((unsigned int (*)[2])v13, nullptr, 0);
      v8 = v15 - 3;
      if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v8);
      v9 = v14 - 3;
      if ( v14 - 3 != dword_213B808 && __sync_fetch_and_add(v14 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v9);
      v10 = v12 - 12;
      if ( v12 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v12 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
    }
    iap::TransactionInfoExtended::Destroy((iap::TransactionInfoExtended::Self *)v17);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v16);
  }
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessBuyResponse  (binary VA: 0x14f4dc0)
// Original: iap::Store::ProcessBuyResponse
// ----------------------------------------------------------------------------
void iap::Store::ProcessBuyResponse(iap::Store::Self *self, iap::Store::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef unsigned int _g4_t_v8[2];
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint8_t _g4_t_v11[16];
  typedef uint32_t _g4_t_v12[16];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  if ( *(uint32_t *)(*((uint32_t *)a2 + 4) - 12) != 0 )
  {
    v2 = *((uint32_t *)self + 41);
    if ( v2 > 0 )
      *((uint32_t *)self + 41) = v2 - 1;
    glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v11, (int)(uintptr_t)(a2) + 16);
    iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v12);
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v11) != 0
      && (*(int (**)(uint32_t *, uint8_t *))(v12[0] + 8))(v12, v11) == 0 )
    {
      v9 = &dword_213B814;
      v10 = &dword_213B814;
      v3 = *((char **)a2 + 4);
      if ( *((uint32_t *)v3 - 3) != 0 )
        glwebtools::SecureString::Set((unsigned int (*)[2])v8, v3, *((uint32_t *)v3 - 3));
      else
        glwebtools::SecureString::Set((unsigned int (*)[2])v8, nullptr, 0);
      v4 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v5 = v4;
      if ( v4 != -8 )
      {
        *(uint32_t *)(v4 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
        *(uint32_t *)(v4 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
        *(uint64_t *)(v4 + 8) = *(uint64_t *)v8;
        g4_std::string::assign_str(v4 + 16, &v9);
        g4_std::string::assign_str(v5 + 20, &v10);
      }
      sub_1901920(v5, (char *)self + 92);
      glwebtools::SecureString::Set((unsigned int (*)[2])v8, nullptr, 0);
      v6 = v10 - 3;
      if ( v10 - 3 != dword_213B808 && __sync_fetch_and_add(v10 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v6);
      v7 = v9 - 3;
      if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
    }
    iap::TransactionInfo::Destroy((iap::TransactionInfo::Self *)v12);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
}



// ============================================================================
// Address:   0x14f5660 (size: 778 bytes)
// Symbol:    _ZN3iap5Store19ProcessItemResponseERS0_PKNS_22EventCommandResultDataE
// Demangled: iap::Store::ProcessItemResponse(iap::Store&,iap::EventCommandResultData const*)
// ============================================================================
uint32_t (*iap::Store::ProcessItemResponse(
        iap::Store::Self *self,
        iap::Store::Self *a2))(iap::Store::Self * self, iap::Store::Self *, const iap::EventCommandResultData::Self *)
{
  char *v2;
  uint32_t *v3;
  uint32_t *v4;
  char *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t (*result)(iap::Store::Self *, iap::Store::Self *, const iap::EventCommandResultData::Self *);
  uint32_t *v9;
  unsigned int v10;
  uint32_t *v11;
  typedef uint32_t *_g4_t_v12;
  typedef unsigned int _g4_t_v13[2];
  typedef unsigned int _g4_t_v14[2];
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef unsigned int _g4_t_v17[2];
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v18)) > _g4_s6 ? (56u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v19)) > _g4_s7 ? (60u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  *((uint32_t *)self + 3) = 0;
  v15 = &dword_213B814;
  v16 = &dword_213B814;
  v2 = *((char **)a2 + 3);
  if ( *((uint32_t *)v2 - 3) != 0 )
    glwebtools::SecureString::Set((unsigned int (*)[2])v14, v2, *((uint32_t *)v2 - 3));
  else
    glwebtools::SecureString::Set((unsigned int (*)[2])v14, nullptr, 0);
  *((uint64_t *)self + 3) = *(uint64_t *)v14;
  g4_std::string::assign_str((char *)self + 32, &v15);
  g4_std::string::assign_str((char *)self + 36, &v16);
  glwebtools::SecureString::Set((unsigned int (*)[2])v14, nullptr, 0);
  v3 = v16 - 3;
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v4 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v18 = &dword_213B814;
  v19 = &dword_213B814;
  v5 = *((char **)a2 + 4);
  if ( *((uint32_t *)v5 - 3) != 0 )
    glwebtools::SecureString::Set((unsigned int (*)[2])v17, v5, *((uint32_t *)v5 - 3));
  else
    glwebtools::SecureString::Set((unsigned int (*)[2])v17, nullptr, 0);
  *((uint64_t *)self + 5) = *(uint64_t *)v17;
  g4_std::string::assign_str((char *)self + 48, &v18);
  g4_std::string::assign_str((char *)self + 52, &v19);
  glwebtools::SecureString::Set((unsigned int (*)[2])v17, nullptr, 0);
  v6 = v19 - 3;
  if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  v7 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  result = (uint32_t (*)(iap::Store::Self *, iap::Store::Self *, const iap::EventCommandResultData::Self *))glwebtools::SecureString::size((iap::Store::Self *)((char *)self + 40));
  if ( result != nullptr )
  {
    result = (uint32_t (*)(iap::Store::Self *, iap::Store::Self *, const iap::EventCommandResultData::Self *))iap::Controller::ExecuteCommand(*(iap::Controller::Self **)self, *((const char **)self + 31), "check_limitations", *((const char **)a2 + 4), (unsigned int *)self + 5);
    if ( result == nullptr )
    {
      v9 = *((uint32_t **)self + 27);
      v10 = *((uint32_t *)self + 5);
      v11 = (uint32_t *)((char *)self + 104);
      if ( v9 == nullptr )
        goto LABEL_21;
      do
      {
        while ( v9[4] >= v10 )
        {
          v11 = v9;
          v9 = (uint32_t *)v9[2];
          if ( v9 == nullptr )
            goto LABEL_19;
        }
        v9 = (uint32_t *)v9[3];
      }
      while ( v9 != nullptr );
LABEL_19:
      if ( v11 == (uint32_t *)((char *)self + 104) || v10 < v11[4] )
      {
LABEL_21:
        v13[0] = *((uint32_t *)self + 5);
        v13[1] = 0;
        sub_14F4FE0((int *)&v12, (uint32_t *)self + 25, v11, v13);
        v11 = v12;
      }
      v11[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessCheckLimitations);
      return (uint32_t (*)(iap::Store::Self *, iap::Store::Self *, const iap::EventCommandResultData::Self *))(uintptr_t)(iap::Store::ProcessCheckLimitations);
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessConfirmProducts  (binary VA: 0x14f5970)
// Original: iap::Store::ProcessConfirmProducts
// ----------------------------------------------------------------------------
void iap::Store::ProcessConfirmProducts(iap::Store::Self *self, iap::Store::Self *a2)
{
  iap::Store::Self *v2;
  char *v3;
  uint32_t *v4;
  uint32_t *v5;
  char *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  iap::Store::Self *v11;
  unsigned int v12;
  iap::Store::Self *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef glwebtools::JsonReader::Iterator::Self *_g4_t_v24;
  typedef glwebtools::JsonReader::Iterator::Self *_g4_t_v25;
  typedef iap::Store::Self *_g4_t_v26;
  typedef int _g4_t_v27[3];
  typedef uint32_t _g4_t_v28[2];
  typedef uint32_t _g4_t_v29[2];
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32[2];
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef unsigned int _g4_t_v35[2];
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t _g4_t_v38[4];
  typedef uint32_t _g4_t_v39[10];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v22)) > _g4_s8 ? (40u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v23)) > _g4_s9 ? (44u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v24)) > _g4_s10 ? (48u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v25)) > _g4_s11 ? (52u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v26)) > _g4_s12 ? (56u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v27)) > _g4_s13 ? (64u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v28)) > _g4_s14 ? (76u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v29)) > _g4_s15 ? (84u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v30)) > _g4_s16 ? (92u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v31)) > _g4_s17 ? (96u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v32)) > _g4_s18 ? (100u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v33)) > _g4_s19 ? (108u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v34)) > _g4_s20 ? (112u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v35)) > _g4_s21 ? (116u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v36)) > _g4_s22 ? (124u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v37)) > _g4_s23 ? (128u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v38)) > _g4_s24 ? (132u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v39)) > _g4_s25 ? (148u + sizeof(_g4_t_v39)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 148u);

  v39[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v26 = a2;
  *((uint32_t *)self + 3) = 0;
  v33 = &dword_213B814;
  v34 = &dword_213B814;
  v3 = *((char **)v26 + 3);
  if ( *((uint32_t *)v3 - 3) != 0 )
    glwebtools::SecureString::Set((unsigned int (*)[2])v32, v3, *((uint32_t *)v3 - 3));
  else
    glwebtools::SecureString::Set((unsigned int (*)[2])v32, nullptr, 0);
  *((uint64_t *)v2 + 3) = *(uint64_t *)v32;
  g4_std::string::assign_str((char *)v2 + 32, &v33);
  g4_std::string::assign_str((char *)v2 + 36, &v34);
  glwebtools::SecureString::Set((unsigned int (*)[2])v32, nullptr, 0);
  v4 = v34 - 3;
  if ( v34 - 3 != dword_213B808 && __sync_fetch_and_add(v34 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v5 = v33 - 3;
  if ( v33 - 3 != dword_213B808 && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v36 = &dword_213B814;
  v37 = &dword_213B814;
  v6 = *((char **)v26 + 4);
  if ( *((uint32_t *)v6 - 3) != 0 )
    glwebtools::SecureString::Set((unsigned int (*)[2])v35, v6, *((uint32_t *)v6 - 3));
  else
    glwebtools::SecureString::Set((unsigned int (*)[2])v35, nullptr, 0);
  *((uint64_t *)v2 + 5) = *(uint64_t *)v35;
  g4_std::string::assign_str((char *)v2 + 48, &v36);
  g4_std::string::assign_str((char *)v2 + 52, &v37);
  glwebtools::SecureString::Set((unsigned int (*)[2])v35, nullptr, 0);
  v7 = v37 - 3;
  if ( v37 - 3 != dword_213B808 && __sync_fetch_and_add(v37 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  v8 = v36 - 3;
  if ( v36 - 3 != dword_213B808 && __sync_fetch_and_add(v36 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v38, (int)(uintptr_t)(v26) + 16);
  v24 = (glwebtools::JsonReader::Iterator::Self *)v39;
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v39, (glwebtools::Json::Value::Self *)v38, "items");
  glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v38, (const glwebtools::Json::Value::Self *)v39);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v39);
  if ( glwebtools::SecureString::size((iap::Store::Self *)((char *)v2 + 40)) != 0
    && (v24 = (glwebtools::JsonReader::Iterator::Self *)v29,
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v29),
        v25 = (glwebtools::JsonReader::Iterator::Self *)v28,
        glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v28),
        (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                           (glwebtools::JsonReader::Iterator::Self *)v28,
                           (const glwebtools::JsonReader::Iterator::Self *)v29) != 0) )
  {
    v10 = iap::Controller::ExecuteCommand(
            *(iap::Controller::Self **)v2,
            *((const char **)v2 + 31),
            "check_limitations",
            *((const char **)v26 + 4),
            (unsigned int *)v2 + 5);
    v9 = 1;
    if ( v10 == 0 )
    {
      v26 = (iap::Store::Self *)((char *)v2 + 104);
      v11 = *((iap::Store::Self **)v2 + 27);
      v12 = *((uint32_t *)v2 + 5);
      v13 = (iap::Store::Self *)((char *)v2 + 104);
      if ( v11 == nullptr )
        goto LABEL_24;
      do
      {
        if ( v12 <= *((uint32_t *)v11 + 4) )
        {
          v13 = v11;
          v11 = *((iap::Store::Self **)v11 + 2);
        }
        else
        {
          v11 = *((iap::Store::Self **)v11 + 3);
        }
      }
      while ( v11 != nullptr );
      if ( v13 == v26 || v12 < *((uint32_t *)v13 + 4) )
      {
LABEL_24:
        v30 = *((uint32_t *)v2 + 5);
        v31 = 0;
        sub_14F4FE0(v27, (uint32_t *)v2 + 25, v13, &v30);
        v13 = (iap::Store::Self *)v27[0];
      }
      v9 = 1;
      *((uint32_t *)v13 + 5) = (uint32_t)(uintptr_t)(iap::Store::ProcessCheckLimitations);
    }
  }
  else
  {
    v9 = 0;
  }
  (*((void (**)(int, int, int, int, int, int, int, int, int, int, int, glwebtools::JsonReader::Iterator::Self *, glwebtools::JsonReader::Iterator::Self *, iap::Store::Self *, unsigned int *, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, unsigned int, int, unsigned int, unsigned int, uint32_t *, uint32_t *, unsigned int, unsigned int, uint32_t *, uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))v2
   + 2))(
    v9,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v35,
    v27[0],
    v27[1],
    v27[2],
    v28[0],
    v28[1],
    v29[0],
    v29[1],
    v30,
    v31,
    v32[0],
    v32[1],
    v33,
    v34,
    v35[0],
    v35[1],
    v36,
    v37,
    v38[0],
    v38[1],
    v38[2],
    v38[3],
    v39[0],
    v39[1],
    v39[2],
    v39[3],
    v39[4]);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v38);
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessMetadataResponse  (binary VA: 0x14f5d50)
// Original: iap::Store::ProcessMetadataResponse
// ----------------------------------------------------------------------------
int iap::Store::ProcessMetadataResponse(iap::Store::Self *self, iap::Store::Self *a2)
{
  const glwebtools::Json::Value::Self *v2;
  void *v3;
  void *v4;
  const glwebtools::Json::Value::Self *v5;
  void *v6;
  void *v7;
  char *v8;
  size_t v9;
  size_t v10;
  FILE *v11;
  char *v12;
  char *v13;
  int result;
  void *v15;
  uint32_t *v16;
  unsigned int v17;
  uint32_t *v18;
  char *v19;
  char *v20;
  void *v21;
  struct stat buf;
  typedef char *_g4_t_v22;
  typedef __off_t _g4_t_st_size;
  typedef char *_g4_t_v24;
  typedef void *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27[3];
  typedef int _g4_t_v28[4];
  typedef const char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef const char **_g4_t_v32;
  typedef int _g4_t_v33;
  typedef const char **_g4_t_v34;
  typedef int _g4_t_v35;
  typedef const char **_g4_t_v36;
  typedef int _g4_t_v37;
  typedef const char **_g4_t_v38;
  typedef unsigned int _g4_t_v39[2];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_st_size)) > _g4_s1 ? (12u + sizeof(_g4_t_st_size)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v26)) > _g4_s4 ? (24u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v27)) > _g4_s5 ? (32u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v29)) > _g4_s7 ? (60u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v30)) > _g4_s8 ? (76u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v31)) > _g4_s9 ? (92u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v32)) > _g4_s10 ? (96u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v33)) > _g4_s11 ? (108u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v34)) > _g4_s12 ? (112u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v35)) > _g4_s13 ? (124u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v36)) > _g4_s14 ? (128u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v37)) > _g4_s15 ? (140u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v38)) > _g4_s16 ? (144u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v39)) > _g4_s17 ? (148u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v40)) > _g4_s18 ? (156u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_v41)) > _g4_s19 ? (172u + sizeof(_g4_t_v41)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_st_size &st_size = *reinterpret_cast<_g4_t_st_size *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 148u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 156u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);

  v28[0] = (int)(uintptr_t)(&dword_213B814);
  v29 = (const char *)&dword_213B814;
  v30 = (char *)&dword_213B814;
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v40, (int)(uintptr_t)(a2) + 16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "icon_hash", (int)(uintptr_t)(v27));
  v32 = &v29;
  g4_std::string::construct_copy(&v35, &v31);
  v36 = v32;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v40) != 0
    && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v40) != 0
    && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v40, (char **)&v35) )
  {
    v2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                            (glwebtools::Json::Value::Self *)v40,
                                            (const char **)&v35);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v41, v2);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v41, (int)(uintptr_t)(v36));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v41);
  }
  v3 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "asset_name", (int)(uintptr_t)(v27) + 1);
  v34 = (const char **)&v30;
  g4_std::string::construct_copy(&v37, &v33);
  v38 = v34;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v40) != 0
    && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v40) != 0
    && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v40, (char **)&v37) )
  {
    v5 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                            (glwebtools::Json::Value::Self *)v40,
                                            (const char **)&v37);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v41, v5);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v41, (int)(uintptr_t)(v38));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v41);
  }
  v6 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = *((char **)self + 32);
  v9 = strlen(v8);
  g4_std::string::append((int)(uintptr_t)(v28), v8, v9);
  v22 = v30;
  v10 = strlen(v30);
  g4_std::string::append((int)(uintptr_t)(v28), v22, v10);
  v11 = fopen((const char *)v28[0], "rb");
  if ( v11 != nullptr )
  {
    stat((const char *)v28[0], &buf);
    st_size = buf.st_size;
    v25 = calloc(buf.st_size, 1u);
    v24 = (char *)calloc(0x41u, 1u);
    fread(v25, st_size, 1u, v11);
    fclose(v11);
    glwebtools::Codec::GenerateSHA256((glwebtools::Codec::Self *)v25, st_size, (unsigned int)(uintptr_t)(v24));
    if ( strcasecmp(v24, v29) == 0 )
    {
      --*((uint32_t *)self + 43);
    }
    else if ( iap::Controller::ExecuteCommand(
                *(iap::Controller::Self **)self,
                *((const char **)self + 31),
                "download_icons",
                v30,
                (unsigned int *)self + 4) == 0 )
    {
      v16 = *((uint32_t **)self + 27);
      v17 = *((uint32_t *)self + 4);
      v18 = (uint32_t *)((char *)self + 104);
      if ( v16 == nullptr )
        goto LABEL_34;
      do
      {
        if ( v17 <= v16[4] )
        {
          v18 = v16;
          v16 = (uint32_t *)v16[2];
        }
        else
        {
          v16 = (uint32_t *)v16[3];
        }
      }
      while ( v16 != nullptr );
      if ( (uint32_t *)((char *)self + 104) == v18 || v17 < v18[4] )
      {
LABEL_34:
        v39[0] = *((uint32_t *)self + 4);
        v39[1] = 0;
        sub_14F4FE0((int *)&v26, (uint32_t *)self + 25, v18, v39);
        v18 = v26;
      }
      v18[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessDownloadResponse);
    }
    free(v25);
    free(v24);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v40);
    v12 = v30 - 12;
    if ( v30 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v30 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v12);
    v13 = (char *)(v29 - 12);
    if ( v29 - 12 != (const char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v29 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    result = v28[0];
    v15 = (void *)(v28[0] - 12);
    if ( (uint32_t *)(v28[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v15)), (int)0);
    }
  }
  else
  {
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v40);
    v19 = v30 - 12;
    if ( v30 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v30 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v19);
    v20 = (char *)(v29 - 12);
    if ( v29 - 12 != (const char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v29 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    result = v28[0];
    v21 = (void *)(v28[0] - 12);
    if ( (uint32_t *)(v28[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v21)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Construct  (binary VA: 0x14f6350)
// Original: iap::Store::Store
// ----------------------------------------------------------------------------
iap::Store::Self * iap::Store::Construct(iap::Store::Self *self)
{
  iap::Store::Self *result;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  glwebtools::SecureString::Set((unsigned int (*)[2])((unsigned int *)self + 3), nullptr, 0);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::SecureString::Set((unsigned int (*)[2])((unsigned int *)self + 5), nullptr, 0);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 14) = 0;
  glwebtools::SecureString::Set((unsigned int (*)[2])((char *)self + 60), nullptr, 0);
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 36) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 37) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 30000;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 30000;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)((char *)self + 92);
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)((char *)self + 92);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)((char *)self + 104);
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 104);
  result = (iap::Store::Self *)glwebtools::SecureString::Set((unsigned int (*)[2])((unsigned int *)self + 17), nullptr, 0);
  *((uint8_t *)self + 152) = 0;
  *((uint8_t *)self + 153) = 0;
  *((uint32_t *)self + 39) = 51934;
  *((uint32_t *)self + 40) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = -1;
  *((uint8_t *)self + 176) = 1;
  *((uint8_t *)self + 177) = 0;
  *((uint8_t *)self + 178) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetInstance  (binary VA: 0x14f64d0)
// Original: iap::Store::GetInstance
// ----------------------------------------------------------------------------
iap::Store::Self * iap::Store::GetInstance()
{
  iap::Store::Self *result;
  iap::Store::Self *v1;

  result = (iap::Store::Self *)iap::Store::s_instance;
  if ( iap::Store::s_instance == 0 )
  {
    v1 = (iap::Store::Self *)opNew(0xB4u);
    iap::Store::Construct(v1);
    iap::Store::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::IsInitialized  (binary VA: 0x14f6530)
// Original: iap::Store::IsInitialized
// ----------------------------------------------------------------------------
int iap::Store::IsInitialized(iap::Store::Self *self)
{
  return *((uint8_t *)self + 177);
}

// ----------------------------------------------------------------------------
// Function: iap::Store::IsRuleSetAvailable  (binary VA: 0x14f6540)
// Original: iap::Store::IsRuleSetAvailable
// ----------------------------------------------------------------------------
int iap::Store::IsRuleSetAvailable(iap::Store::Self *self, const char *a2)
{
  char IsInitialized;
  int v3;
  iap::Controller::Self *v4;

  IsInitialized = iap::Store::IsInitialized(self);
  v3 = 0;
  if ( IsInitialized != 0 )
  {
    v4 = *(iap::Controller::Self **)self;
    if ( a2 != nullptr && v4 != nullptr )
      return iap::Controller::IsRuleSetAvailable(v4, a2);
    else
      return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Update  (binary VA: 0x14f65b0)
// Original: iap::Store::Update
// ----------------------------------------------------------------------------
void iap::Store::Update(iap::Store::Self *self, unsigned int a2)
{
  int Data;
  char *v3;
  unsigned int v4;
  char *v5;
  int v6;
  int v7;
  uint32_t *v8;
  unsigned int v9;
  uint32_t *v10;
  typedef char *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint8_t _g4_t_v13[4];
  typedef unsigned int _g4_t_v14[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 177) == 0 || *(uint32_t *)self == 0 )
    return;
  if ( *((uint32_t *)self + 43) != 0 )
  {
    iap::Controller::Update(*(iap::Controller::Self **)self);
    if ( *((uint32_t *)self + 19) != 0 )
      goto LABEL_5;
LABEL_18:
    v6 = *((uint32_t *)self + 20) - a2;
    *((uint32_t *)self + 20) = v6;
    if ( v6 < 0 )
    {
      if ( iap::Controller::ExecuteCommand(
             *(iap::Controller::Self **)self,
             *((const char **)self + 31),
             "get_transaction",
             (const char *)&unk_1B15112,
             (unsigned int *)self + 19) == 0 )
      {
        v8 = *((uint32_t **)self + 27);
        v9 = *((uint32_t *)self + 19);
        v10 = (uint32_t *)((char *)self + 104);
        if ( v8 == nullptr )
          goto LABEL_37;
        do
        {
          if ( v9 <= v8[4] )
          {
            v10 = v8;
            v8 = (uint32_t *)v8[2];
          }
          else
          {
            v8 = (uint32_t *)v8[3];
          }
        }
        while ( v8 != nullptr );
        if ( (uint32_t *)((char *)self + 104) == v10 || v9 < v10[4] )
        {
LABEL_37:
          v14[0] = *((uint32_t *)self + 19);
          v14[1] = 0;
          sub_14F4FE0((int *)&v12, (uint32_t *)self + 25, v10, v14);
          v10 = v12;
        }
        v10[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessTransactionResponse);
      }
      if ( *((int *)self + 41) > 0 || *((int *)self + 42) > 0 )
        *((uint32_t *)self + 20) = 1000;
      else
        *((uint32_t *)self + 20) = 30000;
    }
    goto LABEL_5;
  }
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 43) = -1;
  (*((void (**)(void))self + 1))();
  iap::Controller::Update(*(iap::Controller::Self **)self);
  if ( *((uint32_t *)self + 19) == 0 )
    goto LABEL_18;
LABEL_5:
  iap::Event::Construct((iap::Event::Self *)v13);
  v11 = (char *)self + 104;
  while ( (uint8_t)iap::Controller::HasEvent(*(iap::Controller::Self **)self) != 0 )
  {
    if ( iap::Controller::PopEvent(*(iap::Controller::Self **)self, (iap::Event::Self *)v13) == 0
      && strcmp((const char *)iap::Event::GetType((iap::Event::Self *)v13), "command_result") == 0 )
    {
      Data = iap::Event::GetData((iap::Event::Self *)v13);
      if ( Data != 0 )
      {
        v3 = *((char **)self + 27);
        if ( v3 != nullptr )
        {
          v4 = *(uint32_t *)(Data + 4);
          v5 = (char *)self + 104;
          do
          {
            if ( *((uint32_t *)v3 + 4) >= v4 )
            {
              v5 = v3;
              v3 = *((char **)v3 + 2);
            }
            else
            {
              v3 = *((char **)v3 + 3);
            }
          }
          while ( v3 != nullptr );
          if ( v11 != v5 && *((uint32_t *)v5 + 4) <= v4 )
          {
            (*((void (**)(iap::Store::Self *, int))v5 + 5))(self, Data);
            v7 = sub_1904AE0(v5, v11);
            sub_4EBEE0(v7);
            --*((uint32_t *)self + 30);
          }
        }
      }
    }
  }
  iap::Event::Destroy((iap::Event::Self *)v13);
}

// ----------------------------------------------------------------------------
// Function: iap::Store::RefreshStore  (binary VA: 0x14f6810)
// Original: iap::Store::RefreshStore
// ----------------------------------------------------------------------------
int iap::Store::RefreshStore(iap::Store::Self *self)
{
  int v1;
  uint32_t *v3;
  unsigned int v4;
  uint32_t *v5;
  typedef int _g4_t_v6[3];
  typedef unsigned int _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v1 = -2147483645;
  if ( *((uint8_t *)self + 177) != 0 && *(uint32_t *)self != 0 )
  {
    LOWORD(v1) = 4;
    if ( *((uint32_t *)self + 3) == 0 )
    {
      v1 = iap::Controller::ExecuteCommand(
             *(iap::Controller::Self **)self,
             *((const char **)self + 31),
             "get_product_list",
             (const char *)&unk_1B15112,
             (unsigned int *)self + 3);
      if ( v1 == 0 )
      {
        v3 = *((uint32_t **)self + 27);
        v4 = *((uint32_t *)self + 3);
        v5 = (uint32_t *)((char *)self + 104);
        if ( v3 == nullptr )
          goto LABEL_13;
        do
        {
          while ( v3[4] >= v4 )
          {
            v5 = v3;
            v3 = (uint32_t *)v3[2];
            if ( v3 == nullptr )
              goto LABEL_11;
          }
          v3 = (uint32_t *)v3[3];
        }
        while ( v3 != nullptr );
LABEL_11:
        if ( (uint32_t *)((char *)self + 104) == v5 || v4 < v5[4] )
        {
LABEL_13:
          v7[0] = *((uint32_t *)self + 3);
          v7[1] = 0;
          sub_14F4FE0(v6, (uint32_t *)self + 25, v5, v7);
          v5 = (uint32_t *)v6[0];
        }
        v5[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessItemResponse);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::RefreshCRMStore  (binary VA: 0x14f6910)
// Original: iap::Store::RefreshCRMStore
// ----------------------------------------------------------------------------
int iap::Store::RefreshCRMStore(int a1, const char **a2, int a3)
{
  int v3;
  iap::Controller::Self *v4;
  int v5;
  uint32_t *v7;
  unsigned int v8;
  uint32_t *v9;
  typedef int _g4_t_v10[3];
  typedef unsigned int _g4_t_v11[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v11)) > _g4_s1 ? (24u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  v3 = -2147483645;
  if ( *(uint8_t *)(a1 + 177) != 0 )
  {
    v4 = *(iap::Controller::Self **)a1;
    if ( *(uint32_t *)a1 != 0 )
    {
      v5 = *(uint32_t *)(a1 + 12);
      *(uint32_t *)(a1 + 8) = a3;
      LOWORD(v3) = 4;
      if ( v5 == 0 )
      {
        v3 = iap::Controller::ExecuteCommand(
               v4,
               *(const char **)(a1 + 124),
               "confirm_products",
               *a2,
               (unsigned int *)(a1 + 12));
        if ( v3 == 0 )
        {
          v7 = *(uint32_t **)(a1 + 108);
          v8 = *(uint32_t *)(a1 + 12);
          v9 = (uint32_t *)(a1 + 104);
          if ( v7 == nullptr )
            goto LABEL_13;
          do
          {
            while ( v7[4] >= v8 )
            {
              v9 = v7;
              v7 = (uint32_t *)v7[2];
              if ( v7 == nullptr )
                goto LABEL_11;
            }
            v7 = (uint32_t *)v7[3];
          }
          while ( v7 != nullptr );
LABEL_11:
          if ( (uint32_t *)(a1 + 104) == v9 || v8 < v9[4] )
          {
LABEL_13:
            v11[0] = *(uint32_t *)(a1 + 12);
            v11[1] = 0;
            sub_14F4FE0(v10, (uint32_t *)(a1 + 100), v9, v11);
            v9 = (uint32_t *)v10[0];
          }
          v9[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessConfirmProducts);
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::RestoreCompletedTransaction  (binary VA: 0x14f6a10)
// Original: iap::Store::RestoreCompletedTransaction
// ----------------------------------------------------------------------------
int iap::Store::RestoreCompletedTransaction(iap::Store::Self *self)
{
  int v1;
  uint32_t *v3;
  unsigned int v4;
  uint32_t *v5;
  typedef int _g4_t_v6[3];
  typedef unsigned int _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v1 = -2147483645;
  if ( *((uint8_t *)self + 177) != 0 && *(uint32_t *)self != 0 )
  {
    LOWORD(v1) = 4;
    if ( *((uint32_t *)self + 3) == 0 )
    {
      glwebtools::SecureString::Set((unsigned int (*)[2])((char *)self + 60), nullptr, 0);
      v1 = iap::Controller::ExecuteCommand(
             *(iap::Controller::Self **)self,
             *((const char **)self + 31),
             "restore_purchase",
             (const char *)&unk_1B15112,
             (unsigned int *)self + 14);
      if ( v1 == 0 )
      {
        v3 = *((uint32_t **)self + 27);
        ++*((uint32_t *)self + 42);
        *((uint32_t *)self + 20) = 1000;
        v4 = *((uint32_t *)self + 14);
        v5 = (uint32_t *)((char *)self + 104);
        if ( v3 == nullptr )
          goto LABEL_13;
        do
        {
          while ( v3[4] >= v4 )
          {
            v5 = v3;
            v3 = (uint32_t *)v3[2];
            if ( v3 == nullptr )
              goto LABEL_11;
          }
          v3 = (uint32_t *)v3[3];
        }
        while ( v3 != nullptr );
LABEL_11:
        if ( (uint32_t *)((char *)self + 104) == v5 || v4 < v5[4] )
        {
LABEL_13:
          v7[0] = *((uint32_t *)self + 14);
          v7[1] = 0;
          sub_14F4FE0(v6, (uint32_t *)self + 25, v5, v7);
          v5 = (uint32_t *)v6[0];
        }
        v5[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessRestoreResponse);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::IsStoreRefreshing  (binary VA: 0x14f6b30)
// Original: iap::Store::IsStoreRefreshing
// ----------------------------------------------------------------------------
bool iap::Store::IsStoreRefreshing(iap::Store::Self *self)
{
  return *((uint32_t *)self + 3) != 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::IsStoreDownloading  (binary VA: 0x14f6b40)
// Original: iap::Store::IsStoreDownloading
// ----------------------------------------------------------------------------
bool iap::Store::IsStoreDownloading(iap::Store::Self *self)
{
  return *((uint32_t *)self + 4) != 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetStoreRefreshResult  (binary VA: 0x14f6b50)
// Original: iap::Store::GetStoreRefreshResult
// ----------------------------------------------------------------------------
int iap::Store::GetStoreRefreshResult(int a1, int a2)
{
  void *v2;
  char IsValid;
  int v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[16];
  typedef uint32_t _g4_t_v14[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v12)) > _g4_s5 ? (28u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v13)) > _g4_s6 ? (32u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v14)) > _g4_s7 ? (48u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  v14[14] = (uint32_t)(uintptr_t)(&a1);
  v8 = a2;
  v10 = a1 + 24;
  v9 = (int *)(a1 + 32);
  glwebtools::SecureString::decrypt(&v11, (int *)(a1 + 32), a1 + 24);
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v13, (int)(uintptr_t)(&v11));
  v2 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  iap::Result::Result((iap::Result::Self *)v14);
  IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v13);
  v4 = -2147483645;
  if ( IsValid != 0 )
  {
    v4 = (*(int (**)(uint32_t *, uint8_t *))(v14[0] + 8))(v14, v13);
    if ( v4 == 0 )
    {
      glwebtools::SecureString::decrypt(&v12, v9, v10);
      g4_std::string::assign_str(v8, &v12);
      v6 = (void *)(v12 - 12);
      if ( (uint32_t *)(v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v4 = v14[1];
    }
  }
  v7 = v4;
  iap::Result::Destroy((iap::Result::Self *)v14);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v13);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetStoreDataJsonString  (binary VA: 0x14f6cb0)
// Original: iap::Store::GetStoreDataJsonString
// ----------------------------------------------------------------------------
int iap::Store::GetStoreDataJsonString(int a1, int a2)
{
  void *v2;
  char IsValid;
  int v4;
  uint32_t *v6;
  volatile int32_t *v7;
  size_t v8;
  void *v9;
  int v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef bool _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_s2;
  typedef uint8_t _g4_t_v19[16];
  typedef uint32_t _g4_t_v20[15];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v13)) > _g4_s2 ? (19u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_s2)) > _g4_s7 ? (44u + sizeof(_g4_t_s2)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v20)) > _g4_s9 ? (64u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 19u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  v20[14] = (uint32_t)(uintptr_t)(&a1);
  v15 = a1;
  v14 = a2;
  glwebtools::SecureString::decrypt(&v16, (int *)(a1 + 32), a1 + 24);
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v19, (int)(uintptr_t)(&v16));
  v2 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  iap::Result::Result((iap::Result::Self *)v20);
  IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v19);
  v4 = -2147483645;
  if ( IsValid != 0 )
  {
    v4 = (*(int (**)(uint32_t *, uint8_t *))(v20[0] + 8))(v20, v19);
    if ( v4 == 0 )
    {
      glwebtools::SecureString::hash(&s2, (glwebtools::Codec::Self **)(v15 + 48));
      v13 = false;
      v6 = *(uint32_t **)(v15 + 52);
      v7 = (volatile int32_t *)s2;
      v8 = *(v6 - 3);
      if ( v8 == *((uint32_t *)s2 - 3) )
      {
        v12 = (volatile int32_t *)s2;
        v10 = memcmp(v6, s2, v8);
        v7 = v12;
        v13 = v10 == 0;
      }
      if ( v7 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v7 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v7 - 3));
      v4 = -2147467263;
      if ( v13 )
      {
        glwebtools::SecureString::decrypt(&v17, (int *)(v15 + 48), v15 + 40);
        g4_std::string::assign_str(v14, &v17);
        v9 = (void *)(v17 - 12);
        if ( (uint32_t *)(v17 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        v4 = v20[1];
      }
    }
  }
  v11 = v4;
  iap::Result::Destroy((iap::Result::Self *)v20);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v19);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::IsStoreRestoring  (binary VA: 0x14f6eb0)
// Original: iap::Store::IsStoreRestoring
// ----------------------------------------------------------------------------
bool iap::Store::IsStoreRestoring(iap::Store::Self *self)
{
  return *((uint32_t *)self + 14) != 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetStoreRestoringResult  (binary VA: 0x14f6ec0)
// Original: iap::Store::GetStoreRestoringResult
// ----------------------------------------------------------------------------
int iap::Store::GetStoreRestoringResult(int a1, int a2)
{
  void *v2;
  char IsValid;
  int v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[16];
  typedef uint32_t _g4_t_v14[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v12)) > _g4_s5 ? (28u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v13)) > _g4_s6 ? (32u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v14)) > _g4_s7 ? (48u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  v14[14] = (uint32_t)(uintptr_t)(&a1);
  v8 = a2;
  v10 = a1 + 60;
  v9 = (int *)(a1 + 68);
  glwebtools::SecureString::decrypt(&v11, (int *)(a1 + 68), a1 + 60);
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v13, (int)(uintptr_t)(&v11));
  v2 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  iap::Result::Result((iap::Result::Self *)v14);
  IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v13);
  v4 = -2147483645;
  if ( IsValid != 0 )
  {
    v4 = (*(int (**)(uint32_t *, uint8_t *))(v14[0] + 8))(v14, v13);
    if ( v4 == 0 )
    {
      glwebtools::SecureString::decrypt(&v12, v9, v10);
      g4_std::string::assign_str(v8, &v12);
      v6 = (void *)(v12 - 12);
      if ( (uint32_t *)(v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v4 = v14[1];
    }
  }
  v7 = v4;
  iap::Result::Destroy((iap::Result::Self *)v14);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v13);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Buy  (binary VA: 0x14f7020)
// Original: iap::Store::Buy
// ----------------------------------------------------------------------------
glwebtools::Self * iap::Store::Buy(iap::Store::Self *self, char *a2, char *a3, char *a4)
{
  char *v4;
  char *v5;
  char *v6;
  int v7;
  uint32_t *v8;
  char *v9;
  int v10;
  uint32_t *v11;
  glwebtools::JSONValue::Self *v13;
  void *v14;
  char **v15;
  glwebtools::Self *v16;
  uint32_t *v17;
  unsigned int v18;
  uint32_t *v19;
  typedef char *_g4_t_v20;
  typedef glwebtools::Self *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef iap::Store::Self *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29[3];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[4];
  typedef unsigned int _g4_t_v32[2];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef const char *_g4_t_v36;
  typedef unsigned int _g4_t_v37[2];
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef char _g4_t_v46[16];
  typedef char _g4_t_v47[20];
  typedef uint8_t _g4_t_v48[20];
  typedef uint32_t _g4_t_v49[11];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v26)) > _g4_s6 ? (16u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v27)) > _g4_s7 ? (16u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v28)) > _g4_s8 ? (16u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v29)) > _g4_s9 ? (20u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (34u + sizeof(_g4_t_v30)) > _g4_s10 ? (34u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v31)) > _g4_s11 ? (40u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v32)) > _g4_s12 ? (56u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v33)) > _g4_s13 ? (64u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v34)) > _g4_s14 ? (68u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v35)) > _g4_s15 ? (72u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v36)) > _g4_s16 ? (76u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v37)) > _g4_s17 ? (80u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v38)) > _g4_s18 ? (88u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v39)) > _g4_s19 ? (92u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v40)) > _g4_s20 ? (96u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v41)) > _g4_s21 ? (104u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v42)) > _g4_s22 ? (108u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v43)) > _g4_s23 ? (112u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v44)) > _g4_s24 ? (124u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v45)) > _g4_s25 ? (140u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v46)) > _g4_s26 ? (156u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v47)) > _g4_s27 ? (172u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v48)) > _g4_s28 ? (192u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (212u + sizeof(_g4_t_v49)) > _g4_s29 ? (212u + sizeof(_g4_t_v49)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 34u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 140u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 156u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 172u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 192u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 212u);

  v49[7] = (uint32_t)(uintptr_t)(&self);
  v4 = a3;
  v5 = a4;
  v26 = self;
  v20 = a2;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v44);
  v38 = nullptr;
  v39 = nullptr;
  v40 = 0;
  v41 = nullptr;
  v42 = nullptr;
  v43 = 0;
  v21 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v44, v20);
  if ( v21 == nullptr )
  {
    v21 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v44, (glwebtools::JSONObject::Self *)&v38);
    if ( v21 == nullptr )
    {
      if ( v5 == nullptr )
        goto LABEL_24;
      v21 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v44, v5);
      if ( v21 == nullptr )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "user_data", (int)(uintptr_t)(&v30));
        v13 = (glwebtools::JSONValue::Self *)glwebtools::JSONObject::opIndex((int *)&v38, (int)(uintptr_t)(&v33));
        v21 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v44, v13);
        v14 = (void *)(v33 - 12);
        if ( (uint32_t *)(v33 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v14);
        }
        if ( v21 == nullptr )
        {
LABEL_24:
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v47);
          glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v48, (glwebtools::JsonWriter::Self *)v47, "item");
          v21 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v48, (const glwebtools::JSONObject::Self *)&v38);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v48);
          if ( v21 != nullptr )
            goto LABEL_25;
          glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v44, v4);
          v21 = (glwebtools::Self *)glwebtools::JsonReader::read(
                                (glwebtools::JsonReader::Self *)v44,
                                (glwebtools::JSONObject::Self *)&v41);
          if ( v21 != nullptr )
            goto LABEL_25;
          glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v49, (glwebtools::JsonWriter::Self *)v47, "billing");
          v21 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v49, (const glwebtools::JSONObject::Self *)&v41);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v49);
          if ( v21 != nullptr )
            goto LABEL_25;
          v31[0] = (int)(uintptr_t)(&dword_213B814);
          glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v45, (glwebtools::Json::Value::Self *)v44, "type");
          v21 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v45, (int)(uintptr_t)(v31));
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v45);
          if ( v21 != nullptr )
          {
LABEL_29:
            g4_std::string::Destroy(v31);
LABEL_25:
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v47);
            goto LABEL_2;
          }
          g4_std::string::construct_copy(&v34, v31);
          sub_1939F80((int)(uintptr_t)(&v34), (char *)&off_1B5AAE7 + 2);
          glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v46, (glwebtools::Json::Value::Self *)v44, "name");
          v21 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v46, (int)(uintptr_t)(v31));
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v46);
          if ( v21 != nullptr )
            goto LABEL_41;
          g4_std::string::append_str(&v34, v31);
          v32[0] = 0;
          if ( strcmp((const char *)v34, "ios_partner_ios_partner") == 0 )
          {
            v15 = &v35;
            glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v35, (glwebtools::JsonWriter::Self *)v47);
            v16 = (glwebtools::Self *)iap::Controller::ExecuteCommand(
                                  *(iap::Controller::Self **)v26,
                                  "ios_ios",
                                  "buy_product",
                                  v35,
                                  v32);
          }
          else
          {
            v15 = (char **)&v36;
            glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v36, (glwebtools::JsonWriter::Self *)v47);
            v16 = (glwebtools::Self *)iap::Controller::ExecuteCommand(
                                  *(iap::Controller::Self **)v26,
                                  (const char *)v34,
                                  "buy_product",
                                  v36,
                                  v32);
          }
          v21 = v16;
          g4_std::string::Destroy(v15);
          if ( v21 != nullptr )
          {
LABEL_41:
            g4_std::string::Destroy(&v34);
            goto LABEL_29;
          }
          v17 = *((uint32_t **)v26 + 27);
          ++*((uint32_t *)v26 + 41);
          *((uint32_t *)v26 + 20) = 1000;
          if ( v17 != nullptr )
          {
            v18 = v32[0];
            v19 = (uint32_t *)((char *)v26 + 104);
            do
            {
              if ( v32[0] > v17[4] )
              {
                v17 = (uint32_t *)v17[3];
              }
              else
              {
                v19 = v17;
                v17 = (uint32_t *)v17[2];
              }
            }
            while ( v17 != nullptr );
            if ( (uint32_t *)((char *)v26 + 104) != v19 && v32[0] >= v19[4] )
              goto LABEL_53;
          }
          else
          {
            v19 = (uint32_t *)((char *)v26 + 104);
            v18 = v32[0];
          }
          v37[0] = v18;
          v37[1] = 0;
          sub_14F4FE0(v29, (uint32_t *)v26 + 25, v19, v37);
          v19 = (uint32_t *)v29[0];
LABEL_53:
          v19[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessBuyResponse);
          goto LABEL_41;
        }
      }
    }
  }
LABEL_2:
  v6 = v41;
  v24 = v42;
  v27 = v41;
  if ( v42 != v41 )
  {
    v22 = (uint32_t *)(v41 + 4);
    do
    {
      v7 = *(uint32_t *)((char *)v22  + ((uintptr_t)(v6) - (uintptr_t)(v27)));
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
      }
      v8 = (uint32_t *)(*(uint32_t *)v6 - 12);
      if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v6 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v8);
      v6 += 8;
    }
    while ( v24 != v6 );
    v27 = v41;
  }
  if ( v27 != nullptr )
    opDelete(v27);
  v25 = v39;
  v28 = v38;
  if ( v39 != v38 )
  {
    v9 = v38;
    v23 = v38 + 4;
    do
    {
      v10 = *(uint32_t *)&v23[v9 - v28];
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
      }
      v11 = (uint32_t *)(*(uint32_t *)v9 - 12);
      if ( v11 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v9 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v11);
      v9 += 8;
    }
    while ( v25 != v9 );
    v28 = v38;
  }
  if ( v28 != nullptr )
    opDelete(v28);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v44);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Buy  (binary VA: 0x14f76f0)
// Original: iap::Store::Buy
// ----------------------------------------------------------------------------
glwebtools::Self * iap::Store::Buy(iap::Store::Self *self, char *a2, char *a3)
{
  char *v3;
  char *v4;
  int v5;
  uint32_t *v6;
  char *v8;
  typedef glwebtools::Self *_g4_t_v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef iap::Store::Self *_g4_t_v13;
  typedef iap::Store::Self *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef iap::Store::Self *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint32_t _g4_t_v22[11];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v14)) > _g4_s5 ? (16u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v16)) > _g4_s7 ? (36u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v17)) > _g4_s8 ? (40u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v18)) > _g4_s9 ? (44u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v19)) > _g4_s10 ? (48u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v20)) > _g4_s11 ? (64u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v21)) > _g4_s12 ? (80u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v22)) > _g4_s13 ? (96u + sizeof(_g4_t_v22)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);

  v22[7] = (uint32_t)(uintptr_t)(&self);
  v3 = a2;
  v13 = self;
  v11 = a3;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v19);
  v16 = nullptr;
  v17 = nullptr;
  v18 = 0;
  v9 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v19, v3);
  if ( v9 == nullptr )
  {
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v20, (glwebtools::Json::Value::Self *)v19, "billing_methods");
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v21, (glwebtools::Json::Value::Self *)v20, 0);
    v9 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v21, (glwebtools::JSONObject::Self *)&v16);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v21);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v20);
    if ( v9 == nullptr )
    {
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v22);
      v9 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v22, (const glwebtools::JSONObject::Self *)&v16);
      if ( v9 == nullptr )
      {
        glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v15, (glwebtools::JsonWriter::Self *)v22);
        v9 = iap::Store::Buy(v13, v3, v15, v11);
        v8 = v15 - 12;
        if ( v15 - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v22);
    }
  }
  v12 = v17;
  v14 = v16;
  if ( v17 != (char *)v16 )
  {
    v4 = (char *)v16;
    v10 = (char *)v16 + 4;
    do
    {
      v5 = *(uint32_t *)&v10[v4 - (char *)v14];
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      v6 = (uint32_t *)(*(uint32_t *)v4 - 12);
      if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v6);
      v4 += 8;
    }
    while ( v12 != v4 );
    v14 = v16;
  }
  if ( v14 != nullptr )
    opDelete(v14);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v19);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::HasTransactions  (binary VA: 0x14f7950)
// Original: iap::Store::HasTransactions
// ----------------------------------------------------------------------------
bool iap::Store::HasTransactions(iap::Store::Self *self)
{
  return *((uint32_t *)self + 23) != (uint32_t)(uintptr_t)(self) + 92;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetTransactionCount  (binary VA: 0x14f7960)
// Original: iap::Store::GetTransactionCount
// ----------------------------------------------------------------------------
int iap::Store::GetTransactionCount(iap::Store::Self *self)
{
  iap::Store::Self *v1;
  int result;

  v1 = *((iap::Store::Self **)self + 23);
  for ( result = 0; (iap::Store::Self *)((char *)self + 92) != v1; ++result )
    v1 = *(iap::Store::Self **)v1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::PopTransaction  (binary VA: 0x14f7980)
// Original: iap::Store::PopTransaction
// ----------------------------------------------------------------------------
int iap::Store::PopTransaction(iap::Store::Self *a1, int a2)
{
  bool HasTransactions;
  int v3;
  int v4;
  const void *s1;
  volatile int32_t *v6;
  bool v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  typedef bool _g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_s2;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v17)) > _g4_s1 ? (24u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_s2)) > _g4_s2 ? (28u + sizeof(_g4_t_s2)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);

  HasTransactions = iap::Store::HasTransactions(a1);
  v3 = -2147483645;
  if ( HasTransactions )
  {
    v4 = *((uint32_t *)a1 + 23);
    glwebtools::SecureString::hash(&s2, (glwebtools::Codec::Self **)(v4 + 16));
    s1 = *(const void **)(v4 + 20);
    v6 = (volatile int32_t *)s2;
    v7 = false;
    if ( *((uint32_t *)s1 - 3) == *((uint32_t *)s2 - 3) )
      v7 = memcmp(s1, s2, *((uint32_t *)s1 - 3)) == 0;
    if ( v6 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
    {
      v16 = v7;
      g4_std::string::Rep::M_destroy((void *)(v6 - 3));
      v7 = v16;
    }
    if ( v7 )
    {
      glwebtools::SecureString::decrypt(&v17, (int *)(*((uint32_t *)a1 + 23) + 16), *((uint32_t *)a1 + 23) + 8);
      g4_std::string::assign_str(a2, &v17);
      v8 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      v9 = *((uint32_t *)a1 + 23);
      sub_1901940(v9);
      glwebtools::SecureString::Set((unsigned int (*)[2])(v9 + 8), nullptr, 0);
      v10 = *(uint32_t *)(v9 + 20);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
      }
      v11 = *(uint32_t *)(v9 + 16);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
      }
      sub_4EBEE0(v9);
      return 0;
    }
    else
    {
      v13 = *((uint32_t *)a1 + 23);
      sub_1901940(v13);
      glwebtools::SecureString::Set((unsigned int (*)[2])(v13 + 8), nullptr, 0);
      v14 = *(uint32_t *)(v13 + 20);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v14 - 12));
      }
      v15 = *(uint32_t *)(v13 + 16);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v15 - 12));
      }
      sub_4EBEE0(v13);
      return -2147467263;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::PushBackTransaction  (binary VA: 0x14f7bf0)
// Original: iap::Store::PushBackTransaction
// ----------------------------------------------------------------------------
int iap::Store::PushBackTransaction(iap::Store::Self *self, char *a2)
{
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  typedef unsigned int _g4_t_v11[2];
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t _g4_t_v14[16];
  typedef uint32_t _g4_t_v15[19];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v12)) > _g4_s4 ? (44u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v14)) > _g4_s6 ? (56u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v15)) > _g4_s7 ? (72u + sizeof(_g4_t_v15)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);

  if ( a2 == nullptr )
    return -2147483646;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v14, a2);
  v8 = -2147483646;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v14) != 0 )
  {
    iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v15);
    memset(&v15[16], 0, 12);
    v15[0] = ((uint32_t)(uintptr_t)&off_20960C8);
    v8 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v14) != 0 )
    {
      v8 = (*(int (**)(uint32_t *, uint8_t *))(v15[0] + 8))(v15, v14);
      if ( v8 == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), a2, (int)(uintptr_t)(&v9));
        v12 = &dword_213B814;
        v13 = &dword_213B814;
        if ( *(uint32_t *)(v10[0] - 12) != 0 )
          glwebtools::SecureString::Set((unsigned int (*)[2])v11, (char *)v10[0], *(uint32_t *)(v10[0] - 12));
        else
          glwebtools::SecureString::Set((unsigned int (*)[2])v11, nullptr, 0);
        v3 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v4 = v3;
        if ( v3 != -8 )
        {
          *(uint32_t *)(v3 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint32_t *)(v3 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint64_t *)(v3 + 8) = *(uint64_t *)v11;
          g4_std::string::assign_str(v3 + 16, &v12);
          g4_std::string::assign_str(v4 + 20, &v13);
        }
        sub_1901920(v4, (char *)self + 92);
        glwebtools::SecureString::Set((unsigned int (*)[2])v11, nullptr, 0);
        v5 = v13 - 3;
        if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v5);
        v6 = v12 - 3;
        if ( v12 - 3 != dword_213B808 && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v6);
        v7 = (void *)(v10[0] - 12);
        if ( (uint32_t *)(v10[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
      }
    }
    iap::TransactionInfoExtended::Destroy((iap::TransactionInfoExtended::Self *)v15);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v14);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::CompleteTransaction  (binary VA: 0x14f7eb0)
// Original: iap::Store::CompleteTransaction
// ----------------------------------------------------------------------------
int iap::Store::CompleteTransaction(iap::Store::Self *self, const char *a2)
{
  int result;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef unsigned int _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v6 = 0;
  result = iap::Controller::ExecuteCommand(
             *(iap::Controller::Self **)self,
             *((const char **)self + 31),
             "complete_transaction",
             a2,
             &v6);
  if ( result == 0 )
  {
    v3 = *((uint32_t **)self + 27);
    v4 = (uint32_t *)((char *)self + 104);
    if ( v3 == nullptr )
      goto LABEL_9;
    do
    {
      while ( v3[4] >= v6 )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_7;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_7:
    if ( v4 == (uint32_t *)((char *)self + 104) || v6 < v4[4] )
    {
LABEL_9:
      v7[0] = v6;
      v7[1] = 0;
      sub_14F4FE0((int *)&v5, (uint32_t *)self + 25, v4, v7);
      v4 = v5;
    }
    v4[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessCompleteTransactionResponse);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ReprocessTransaction  (binary VA: 0x14f7f90)
// Original: iap::Store::ReprocessTransaction
// ----------------------------------------------------------------------------
int iap::Store::ReprocessTransaction(iap::Store::Self *self, const char *a2)
{
  int result;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef unsigned int _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v6 = 0;
  result = iap::Controller::ExecuteCommand(
             *(iap::Controller::Self **)self,
             *((const char **)self + 31),
             "reprocess_transaction",
             a2,
             &v6);
  if ( result == 0 )
  {
    v3 = *((uint32_t **)self + 27);
    v4 = (uint32_t *)((char *)self + 104);
    if ( v3 == nullptr )
      goto LABEL_9;
    do
    {
      while ( v3[4] >= v6 )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_7;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_7:
    if ( v4 == (uint32_t *)((char *)self + 104) || v6 < v4[4] )
    {
LABEL_9:
      v7[0] = v6;
      v7[1] = 0;
      sub_14F4FE0((int *)&v5, (uint32_t *)self + 25, v4, v7);
      v4 = v5;
    }
    v4[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessTransactionResponse);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::UpdateSettings  (binary VA: 0x14f8070)
// Original: iap::Store::UpdateSettings
// ----------------------------------------------------------------------------
int iap::Store::UpdateSettings(iap::Controller::Self **self, const glwebtools::CustomAttribute::Self *a2)
{
  int result;
  glwebtools::CustomAttribute::Self *v3;
  char *v4;
  const char **v5;
  char IsRuleSetAvailable;
  char *v7;
  glwebtools::CustomArgument::Self *v8;

  result = -2147483645;
  if ( *((uint8_t *)self + 177) != 0 && *self != nullptr )
  {
    v3 = glwebtools::CustomAttribute::key(a2);
    if ( g4_std::string::compare((int)(uintptr_t)(v3), "default_ruleset") == 0 )
    {
      v4 = glwebtools::CustomAttribute::value(a2);
      v5 = (const char **)glwebtools::CustomArgument::ToString((glwebtools::CustomArgument::Self *)v4);
      IsRuleSetAvailable = iap::Controller::IsRuleSetAvailable(*self, *v5);
      result = -2147483646;
      if ( IsRuleSetAvailable == 0 )
        return result;
      v7 = glwebtools::CustomAttribute::value(a2);
      v8 = glwebtools::CustomArgument::ToString((glwebtools::CustomArgument::Self *)v7);
      g4_std::string::assign_str(self + 31, v8);
    }
    return iap::Controller::UpdateSettings(*self, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::ProcessCheckLimitations  (binary VA: 0x14f8130)
// Original: iap::Store::ProcessCheckLimitations
// ----------------------------------------------------------------------------
void iap::Store::ProcessCheckLimitations(iap::Store::Self *self, iap::Store::Self *a2)
{
  const glwebtools::Json::Value::Self *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[3];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef bool *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef bool *_g4_t_v18;
  typedef uint32_t _g4_t_v19[2];
  typedef uint8_t _g4_t_v20[16];
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[3];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v11)) > _g4_s1 ? (15u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v17)) > _g4_s7 ? (56u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v18)) > _g4_s8 ? (60u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v19)) > _g4_s9 ? (64u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v20)) > _g4_s10 ? (72u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v21)) > _g4_s11 ? (88u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v22)) > _g4_s12 ? (92u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 15u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);

  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v20);
  *((uint32_t *)self + 5) = 0;
  if ( glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v20, (int)(uintptr_t)(a2) + 16) != 0 )
  {
    *((uint8_t *)self + 178) = 0;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "enabled", (int)(uintptr_t)(&v12));
    v16 = (bool *)self + 178;
    g4_std::string::construct_copy(&v17, &v15);
    v18 = v16;
    v10 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v20) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v20) != 0 )
    {
      v10 = -2147483646;
      if ( glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v20, (char **)&v17) )
      {
        v2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                (glwebtools::Json::Value::Self *)v20,
                                                (const char **)&v17);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v21, v2);
        v10 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)&v21, v18);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v21);
      }
    }
    v3 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( v10 == 0 )
    {
      glwebtools::CustomAttribute::CustomAttribute((glwebtools::CustomAttribute::Self *)&v21);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "spent_limits_result", (int)(uintptr_t)(&v11));
      glwebtools::CustomAttribute::key((int)(uintptr_t)(&v21), (int)(uintptr_t)(&v14));
      v5 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      g4_std::string::construct_copy(v13, (char *)a2 + 16);
      glwebtools::CustomArgument::Construct((int)(uintptr_t)(v19), (int)(uintptr_t)(v13));
      glwebtools::CustomArgument::opAssign((glwebtools::CustomArgument::Self *)v22, (const glwebtools::CustomArgument::Self *)v19);
      v6 = (void *)(v19[0] - 12);
      if ( (uint32_t *)(v19[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v7 = (void *)(v13[0] - 12);
      if ( (uint32_t *)(v13[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      iap::Store::UpdateSettings((iap::Controller::Self **)self, (const glwebtools::CustomAttribute::Self *)&v21);
      v8 = (void *)(v22[0] - 12);
      if ( (uint32_t *)(v22[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      v9 = (void *)(v21 - 12);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
    }
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v20);
}

// ----------------------------------------------------------------------------
// Function: iap::Store::FileExist  (binary VA: 0x14f84a0)
// Original: iap::Store::FileExist
// ----------------------------------------------------------------------------
bool iap::Store::FileExist(int a1, const char **a2)
{
  struct stat buf;

  return stat(*a2, &buf) == 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::checkFileIsUpToDate  (binary VA: 0x14f84e0)
// Original: iap::Store::checkFileIsUpToDate
// ----------------------------------------------------------------------------
int iap::Store::checkFileIsUpToDate(int a1, const char **a2)
{
  char *v2;
  size_t v3;
  size_t v4;
  bool v5;
  int result;
  void *v7;
  uint32_t *v8;
  unsigned int v9;
  uint32_t *v10;
  uint32_t *v11;
  unsigned int v12;
  uint32_t *v13;
  typedef const char *_g4_t_v14;
  typedef unsigned int *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17[5];
  typedef int _g4_t_v18[4];
  typedef unsigned int _g4_t_v19[2];
  typedef unsigned int _g4_t_v20[5];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v17)) > _g4_s3 ? (44u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v18)) > _g4_s4 ? (64u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v19)) > _g4_s5 ? (80u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v20)) > _g4_s6 ? (88u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);

  v2 = *(char **)(a1 + 128);
  v18[0] = (int)(uintptr_t)(&dword_213B814);
  v3 = strlen(v2);
  g4_std::string::append((int)(uintptr_t)(v18), v2, v3);
  v16 = (char *)*a2;
  v4 = strlen(*a2);
  g4_std::string::append((int)(uintptr_t)(v18), v16, v4);
  ++*(uint32_t *)(a1 + 172);
  v5 = iap::Store::FileExist(a1, (const char **)v18);
  v15 = (unsigned int *)(a1 + 16);
  v14 = *a2;
  if ( v5 )
  {
    if ( iap::Controller::ExecuteCommand(
           *(iap::Controller::Self **)a1,
           *(const char **)(a1 + 124),
           "check_metadata",
           v14,
           v15) == 0 )
    {
      v11 = *(uint32_t **)(a1 + 108);
      v12 = *(uint32_t *)(a1 + 16);
      v13 = (uint32_t *)(a1 + 104);
      if ( v11 == nullptr )
        goto LABEL_22;
      do
      {
        while ( v11[4] >= v12 )
        {
          v13 = v11;
          v11 = (uint32_t *)v11[2];
          if ( v11 == nullptr )
            goto LABEL_20;
        }
        v11 = (uint32_t *)v11[3];
      }
      while ( v11 != nullptr );
LABEL_20:
      if ( v13 == (uint32_t *)(a1 + 104) || v13[4] > v12 )
      {
LABEL_22:
        v19[0] = *(uint32_t *)(a1 + 16);
        v19[1] = 0;
        sub_14F4FE0(v17, (uint32_t *)(a1 + 100), v13, v19);
        v13 = (uint32_t *)v17[0];
      }
      v13[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessMetadataResponse);
    }
  }
  else if ( iap::Controller::ExecuteCommand(
              *(iap::Controller::Self **)a1,
              *(const char **)(a1 + 124),
              "download_icons",
              v14,
              v15) == 0 )
  {
    v8 = *(uint32_t **)(a1 + 108);
    v9 = *(uint32_t *)(a1 + 16);
    v10 = (uint32_t *)(a1 + 104);
    if ( v8 == nullptr )
      goto LABEL_13;
    do
    {
      while ( v8[4] >= v9 )
      {
        v10 = v8;
        v8 = (uint32_t *)v8[2];
        if ( v8 == nullptr )
          goto LABEL_11;
      }
      v8 = (uint32_t *)v8[3];
    }
    while ( v8 != nullptr );
LABEL_11:
    if ( (uint32_t *)(a1 + 104) == v10 || v9 < v10[4] )
    {
LABEL_13:
      v20[0] = *(uint32_t *)(a1 + 16);
      v20[1] = 0;
      sub_14F4FE0(v17, (uint32_t *)(a1 + 100), v10, v20);
      v10 = (uint32_t *)v17[0];
    }
    v10[5] = (uint32_t)(uintptr_t)(iap::Store::ProcessDownloadResponse);
  }
  result = v18[0];
  v7 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::DownloadIcons  (binary VA: 0x14f86d0)
// Original: iap::Store::DownloadIcons
// ----------------------------------------------------------------------------
int iap::Store::DownloadIcons(int a1, int a2, int a3)
{
  int v3;
  iap::Store::Self *v4;
  int v5;
  bool v6;
  const glwebtools::Json::Value::Self *v7;
  void *v8;
  void *v9;
  const char *v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef const char *_g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef const char **_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[8];
  typedef char _g4_t_v20[8];
  typedef char _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint32_t _g4_t_v24[10];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v17)) > _g4_s5 ? (56u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v18)) > _g4_s6 ? (60u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v19)) > _g4_s7 ? (72u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v20)) > _g4_s8 ? (80u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v21)) > _g4_s9 ? (88u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v22)) > _g4_s10 ? (104u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v23)) > _g4_s11 ? (120u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (136u + sizeof(_g4_t_v24)) > _g4_s12 ? (136u + sizeof(_g4_t_v24)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 120u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 136u);

  v3 = -2147483645;
  v24[6] = (uint32_t)(uintptr_t)(&a1);
  v4 = (iap::Store::Self *)a1;
  v12 = a1;
  v5 = a2;
  v6 = *(uint8_t *)(a1 + 177) == 0;
  *(uint32_t *)(a1 + 4) = a3;
  if ( !v6 && *(uint32_t *)v4 != 0 && !iap::Store::IsStoreDownloading(v4) )
  {
    *(uint32_t *)(v12 + 172) = 0;
    glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v21, v5);
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v22, (glwebtools::Json::Value::Self *)v21, "items");
    glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v21, (const glwebtools::Json::Value::Self *)v22);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v22);
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v19);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v20);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v19,
                              (const glwebtools::JsonReader::Iterator::Self *)v20) == 0 )
        break;
      v14[0] = (const char *)&dword_213B814;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "icon", (int)(uintptr_t)(&v13));
      v16 = v14;
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v23,
        (glwebtools::Json::ValueIteratorBase::Self *)v19);
      g4_std::string::construct_copy(&v17, &v15);
      v18 = (int)(uintptr_t)(v16);
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v23) != 0
        && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v23) != 0
        && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v23, (char **)&v17) )
      {
        v7 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                (glwebtools::Json::Value::Self *)v23,
                                                (const char **)&v17);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v24, v7);
        glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v24, v18);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v24);
      }
      v8 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v23);
      v9 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      v10 = v14[0];
      if ( strcmp(v14[0], "icon_not_available.jpg") != 0 )
      {
        iap::Store::checkFileIsUpToDate(v12, v14);
        v10 = v14[0];
      }
      if ( v10 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v10 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
      }
      glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v19);
    }
    v3 = 0;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v21);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::CheckIfLimitationsActive  (binary VA: 0x14f89d0)
// Original: iap::Store::CheckIfLimitationsActive
// ----------------------------------------------------------------------------
int iap::Store::CheckIfLimitationsActive(iap::Store::Self *self)
{
  return *((uint8_t *)self + 178);
}

// ----------------------------------------------------------------------------
// Function: iap::Store::setFederationMode  (binary VA: 0x14f89e0)
// Original: iap::Store::setFederationMode
// ----------------------------------------------------------------------------
int iap::Store::setFederationMode(iap::Controller::Self **self, bool a2)
{
  void *v2;
  void *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[2];
  typedef uint32_t _g4_t_v11[2];
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  glwebtools::CustomAttribute::CustomAttribute((glwebtools::CustomAttribute::Self *)&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "no_fed", (int)(uintptr_t)(&v8));
  glwebtools::CustomAttribute::key((int)(uintptr_t)(&v12), (int)(uintptr_t)(&v9));
  v2 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( a2 )
  {
    glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v10, (char *)&a0[2]);
    glwebtools::CustomArgument::opAssign((glwebtools::CustomArgument::Self *)v13, (const glwebtools::CustomArgument::Self *)v10);
    v3 = (void *)(v10[0] - 12);
    if ( (uint32_t *)(v10[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    iap::Store::UpdateSettings(self, (const glwebtools::CustomAttribute::Self *)&v12);
    *((uint8_t *)self + 176) = 0;
  }
  else
  {
    glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v11, "1");
    glwebtools::CustomArgument::opAssign((glwebtools::CustomArgument::Self *)v13, (const glwebtools::CustomArgument::Self *)v11);
    v7 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    iap::Store::UpdateSettings(self, (const glwebtools::CustomAttribute::Self *)&v12);
    *((uint8_t *)self + 176) = 1;
  }
  v4 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  result = v12;
  v6 = (void *)(v12 - 12);
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::isFederationOffline  (binary VA: 0x14f8be0)
// Original: iap::Store::isFederationOffline
// ----------------------------------------------------------------------------
int iap::Store::isFederationOffline(iap::Store::Self *self)
{
  return *((uint8_t *)self + 176);
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetEcommerceReceiptID  (binary VA: 0x14f8bf0)
// Original: iap::Store::GetEcommerceReceiptID
// ----------------------------------------------------------------------------
char * iap::Store::GetEcommerceReceiptID(iap::Store::Self *self)
{
  return (char *)self + 160;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetItemByEntryId  (binary VA: 0x14f8c00)
// Original: iap::Store::GetItemByEntryId
// ----------------------------------------------------------------------------
int iap::Store::GetItemByEntryId(int a1)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::GetPromoEndDate  (binary VA: 0x14f8c50)
// Original: iap::Store::GetPromoEndDate
// ----------------------------------------------------------------------------
iap::Store::Self * iap::Store::GetPromoEndDate(iap::Store::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Initialize  (binary VA: 0x14f8ca0)
// Original: iap::Store::Initialize
// ----------------------------------------------------------------------------
int iap::Store::Initialize(iap::Store::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  void *v3;
  int v4;
  iap::Controller::Self *v5;
  SecureStorageManager::Self *Instance;
  int v7;
  void *v8;
  void *v9;
  void *v10;
  uint32_t *v11;
  uint32_t *v12;
  void *v13;
  const glwebtools::Json::Value::Self *v14;
  void *v15;
  void *v16;
  glwebtools::Self *v17;
  void *v18;
  void *v19;
  void *v20;
  gaia::Gaia::Self *v21;
  glwebtools::Self *v22;
  void *v23;
  void *v24;
  glwebtools::Self *v25;
  void *v26;
  void *v27;
  glwebtools::Json::Value::Self *v28;
  char *v29;
  void *v30;
  char *v31;
  void *v32;
  uint32_t *v34;
  glwebtools::Json::Value::Self *v35;
  glwebtools::Json::Value::Self *v36;
  unsigned int v37;
  size_t v38;
  int v39;
  const void **v40;
  uint32_t *v41;
  size_t v42;
  int v43;
  int v44;
  glwebtools::Json::Value::Self *v45;
  void *v46;
  void *v47;
  const glwebtools::Json::Value::Self *v48;
  void *v49;
  void *v50;
  char IsRuleSetAvailable;
  int v52;
  glwebtools::Json::Value::Self *v53;
  glwebtools::Json::Value::Self *v54;
  glwebtools::Json::Value::Self *v55;
  glwebtools::Json::Value::Self *v56;
  glwebtools::Json::Value::Self *v57;
  glwebtools::Json::Value::Self *v58;
  glwebtools::Json::Value::Self *v59;
  glwebtools::Json::Value::Self *v60;
  glwebtools::Json::Value::Self *Root;
  int v62;
  int v63;
  size_t v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  glwebtools::Json::Value::Self *v68;
  size_t v69;
  int v70;
  int v71;
  glwebtools::Json::Value::Self *v72;
  typedef uint32_t *_g4_t_s2;
  typedef glwebtools::Json::Value::Self *_g4_t_v74;
  typedef glwebtools::Json::Value::Self *_g4_t_v75;
  typedef glwebtools::Json::Value::Self *_g4_t_v76;
  typedef glwebtools::Json::Value::Self *_g4_t_v77;
  typedef glwebtools::Json::Value::Self *_g4_t_v78;
  typedef glwebtools::Json::Value::Self *_g4_t_v79;
  typedef glwebtools::Json::Value::Self *_g4_t_v80;
  typedef glwebtools::Json::Value::Self *_g4_t_v81;
  typedef glwebtools::Json::Value::Self *_g4_t_v82;
  typedef glwebtools::Json::Value::Self *_g4_t_v83;
  typedef glwebtools::Json::Value::Self *_g4_t_v84;
  typedef glwebtools::Json::Value::Self *_g4_t_v85;
  typedef glwebtools::Json::Value::Self *_g4_t_v86;
  typedef glwebtools::Json::Value::Self *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef glwebtools::Json::Value::Self *_g4_t_v89;
  typedef iap::Controller::Self *_g4_t_v90;
  typedef char *_g4_t_s1;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef iap::Store::Self *_g4_t_v95;
  typedef glwebtools::JsonWriter::Self *_g4_t_v96;
  typedef char _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef char _g4_t_v102;
  typedef unsigned int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107[4];
  typedef glwebtools::Codec::Self *_g4_t_v108;
  typedef int _g4_t_v109[4];
  typedef uint32_t _g4_t_v110[4];
  typedef char *_g4_t_v111[4];
  typedef int _g4_t_v112[4];
  typedef uint32_t _g4_t_v113[4];
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef bool *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef int *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef uint32_t *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint32_t *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef void *_g4_t_v128;
  typedef uint32_t *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef bool *_g4_t_v133;
  typedef int _g4_t_v134[4];
  typedef int _g4_t_v135[4];
  typedef int _g4_t_v136[4];
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef unsigned int _g4_t_v139[2];
  typedef uint32_t *_g4_t_v140;
  typedef uint32_t *_g4_t_v141;
  typedef uint8_t _g4_t_v142[16];
  typedef uint8_t _g4_t_v143[16];
  typedef uint8_t _g4_t_v144[16];
  typedef uint8_t _g4_t_v145[16];
  typedef uint8_t _g4_t_v146[16];
  typedef uint8_t _g4_t_v147[16];
  typedef int _g4_t_v148;
  typedef char _g4_t_v149[8];
  typedef int _g4_t_v150;
  typedef char _g4_t_v151[32];
  typedef char _g4_t_v152;
  typedef iap::Store::Self **_g4_t_v153;
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v74)) > _g4_s1 ? (4u + sizeof(_g4_t_v74)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v75)) > _g4_s2 ? (4u + sizeof(_g4_t_v75)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v76)) > _g4_s3 ? (4u + sizeof(_g4_t_v76)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v77)) > _g4_s4 ? (4u + sizeof(_g4_t_v77)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v78)) > _g4_s5 ? (4u + sizeof(_g4_t_v78)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v79)) > _g4_s6 ? (4u + sizeof(_g4_t_v79)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v80)) > _g4_s7 ? (4u + sizeof(_g4_t_v80)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v81)) > _g4_s8 ? (4u + sizeof(_g4_t_v81)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v82)) > _g4_s9 ? (4u + sizeof(_g4_t_v82)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v83)) > _g4_s10 ? (4u + sizeof(_g4_t_v83)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v84)) > _g4_s11 ? (4u + sizeof(_g4_t_v84)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v85)) > _g4_s12 ? (4u + sizeof(_g4_t_v85)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v86)) > _g4_s13 ? (4u + sizeof(_g4_t_v86)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v87)) > _g4_s14 ? (4u + sizeof(_g4_t_v87)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v88)) > _g4_s15 ? (8u + sizeof(_g4_t_v88)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v89)) > _g4_s16 ? (16u + sizeof(_g4_t_v89)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v90)) > _g4_s17 ? (20u + sizeof(_g4_t_v90)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_s1)) > _g4_s18 ? (28u + sizeof(_g4_t_s1)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_n)) > _g4_s19 ? (32u + sizeof(_g4_t_n)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_na)) > _g4_s20 ? (32u + sizeof(_g4_t_na)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_nb)) > _g4_s21 ? (32u + sizeof(_g4_t_nb)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v95)) > _g4_s22 ? (36u + sizeof(_g4_t_v95)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v96)) > _g4_s23 ? (40u + sizeof(_g4_t_v96)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v97)) > _g4_s24 ? (44u + sizeof(_g4_t_v97)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v98)) > _g4_s25 ? (48u + sizeof(_g4_t_v98)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v99)) > _g4_s26 ? (48u + sizeof(_g4_t_v99)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v100)) > _g4_s27 ? (48u + sizeof(_g4_t_v100)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v101)) > _g4_s28 ? (48u + sizeof(_g4_t_v101)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v102)) > _g4_s29 ? (48u + sizeof(_g4_t_v102)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v103)) > _g4_s30 ? (48u + sizeof(_g4_t_v103)) : _g4_s30,
    _g4_s32 = (78u + sizeof(_g4_t_v104)) > _g4_s31 ? (78u + sizeof(_g4_t_v104)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v105)) > _g4_s32 ? (80u + sizeof(_g4_t_v105)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v106)) > _g4_s33 ? (84u + sizeof(_g4_t_v106)) : _g4_s33,
    _g4_s35 = (112u + sizeof(_g4_t_v107)) > _g4_s34 ? (112u + sizeof(_g4_t_v107)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v108)) > _g4_s35 ? (128u + sizeof(_g4_t_v108)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v109)) > _g4_s36 ? (144u + sizeof(_g4_t_v109)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v110)) > _g4_s37 ? (160u + sizeof(_g4_t_v110)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v111)) > _g4_s38 ? (176u + sizeof(_g4_t_v111)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v112)) > _g4_s39 ? (192u + sizeof(_g4_t_v112)) : _g4_s39,
    _g4_s41 = (208u + sizeof(_g4_t_v113)) > _g4_s40 ? (208u + sizeof(_g4_t_v113)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v114)) > _g4_s41 ? (224u + sizeof(_g4_t_v114)) : _g4_s41,
    _g4_s43 = (228u + sizeof(_g4_t_v115)) > _g4_s42 ? (228u + sizeof(_g4_t_v115)) : _g4_s42,
    _g4_s44 = (232u + sizeof(_g4_t_v116)) > _g4_s43 ? (232u + sizeof(_g4_t_v116)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v117)) > _g4_s44 ? (236u + sizeof(_g4_t_v117)) : _g4_s44,
    _g4_s46 = (240u + sizeof(_g4_t_v118)) > _g4_s45 ? (240u + sizeof(_g4_t_v118)) : _g4_s45,
    _g4_s47 = (244u + sizeof(_g4_t_v119)) > _g4_s46 ? (244u + sizeof(_g4_t_v119)) : _g4_s46,
    _g4_s48 = (256u + sizeof(_g4_t_v120)) > _g4_s47 ? (256u + sizeof(_g4_t_v120)) : _g4_s47,
    _g4_s49 = (260u + sizeof(_g4_t_v121)) > _g4_s48 ? (260u + sizeof(_g4_t_v121)) : _g4_s48,
    _g4_s50 = (272u + sizeof(_g4_t_v122)) > _g4_s49 ? (272u + sizeof(_g4_t_v122)) : _g4_s49,
    _g4_s51 = (276u + sizeof(_g4_t_v123)) > _g4_s50 ? (276u + sizeof(_g4_t_v123)) : _g4_s50,
    _g4_s52 = (288u + sizeof(_g4_t_v124)) > _g4_s51 ? (288u + sizeof(_g4_t_v124)) : _g4_s51,
    _g4_s53 = (292u + sizeof(_g4_t_v125)) > _g4_s52 ? (292u + sizeof(_g4_t_v125)) : _g4_s52,
    _g4_s54 = (304u + sizeof(_g4_t_v126)) > _g4_s53 ? (304u + sizeof(_g4_t_v126)) : _g4_s53,
    _g4_s55 = (308u + sizeof(_g4_t_v127)) > _g4_s54 ? (308u + sizeof(_g4_t_v127)) : _g4_s54,
    _g4_s56 = (320u + sizeof(_g4_t_v128)) > _g4_s55 ? (320u + sizeof(_g4_t_v128)) : _g4_s55,
    _g4_s57 = (324u + sizeof(_g4_t_v129)) > _g4_s56 ? (324u + sizeof(_g4_t_v129)) : _g4_s56,
    _g4_s58 = (336u + sizeof(_g4_t_v130)) > _g4_s57 ? (336u + sizeof(_g4_t_v130)) : _g4_s57,
    _g4_s59 = (340u + sizeof(_g4_t_v131)) > _g4_s58 ? (340u + sizeof(_g4_t_v131)) : _g4_s58,
    _g4_s60 = (352u + sizeof(_g4_t_v132)) > _g4_s59 ? (352u + sizeof(_g4_t_v132)) : _g4_s59,
    _g4_s61 = (356u + sizeof(_g4_t_v133)) > _g4_s60 ? (356u + sizeof(_g4_t_v133)) : _g4_s60,
    _g4_s62 = (368u + sizeof(_g4_t_v134)) > _g4_s61 ? (368u + sizeof(_g4_t_v134)) : _g4_s61,
    _g4_s63 = (384u + sizeof(_g4_t_v135)) > _g4_s62 ? (384u + sizeof(_g4_t_v135)) : _g4_s62,
    _g4_s64 = (400u + sizeof(_g4_t_v136)) > _g4_s63 ? (400u + sizeof(_g4_t_v136)) : _g4_s63,
    _g4_s65 = (416u + sizeof(_g4_t_v137)) > _g4_s64 ? (416u + sizeof(_g4_t_v137)) : _g4_s64,
    _g4_s66 = (420u + sizeof(_g4_t_v138)) > _g4_s65 ? (420u + sizeof(_g4_t_v138)) : _g4_s65,
    _g4_s67 = (432u + sizeof(_g4_t_v139)) > _g4_s66 ? (432u + sizeof(_g4_t_v139)) : _g4_s66,
    _g4_s68 = (440u + sizeof(_g4_t_v140)) > _g4_s67 ? (440u + sizeof(_g4_t_v140)) : _g4_s67,
    _g4_s69 = (444u + sizeof(_g4_t_v141)) > _g4_s68 ? (444u + sizeof(_g4_t_v141)) : _g4_s68,
    _g4_s70 = (448u + sizeof(_g4_t_v142)) > _g4_s69 ? (448u + sizeof(_g4_t_v142)) : _g4_s69,
    _g4_s71 = (464u + sizeof(_g4_t_v143)) > _g4_s70 ? (464u + sizeof(_g4_t_v143)) : _g4_s70,
    _g4_s72 = (480u + sizeof(_g4_t_v144)) > _g4_s71 ? (480u + sizeof(_g4_t_v144)) : _g4_s71,
    _g4_s73 = (496u + sizeof(_g4_t_v145)) > _g4_s72 ? (496u + sizeof(_g4_t_v145)) : _g4_s72,
    _g4_s74 = (512u + sizeof(_g4_t_v146)) > _g4_s73 ? (512u + sizeof(_g4_t_v146)) : _g4_s73,
    _g4_s75 = (528u + sizeof(_g4_t_v147)) > _g4_s74 ? (528u + sizeof(_g4_t_v147)) : _g4_s74,
    _g4_s76 = (544u + sizeof(_g4_t_v148)) > _g4_s75 ? (544u + sizeof(_g4_t_v148)) : _g4_s75,
    _g4_s77 = (548u + sizeof(_g4_t_v149)) > _g4_s76 ? (548u + sizeof(_g4_t_v149)) : _g4_s76,
    _g4_s78 = (556u + sizeof(_g4_t_v150)) > _g4_s77 ? (556u + sizeof(_g4_t_v150)) : _g4_s77,
    _g4_s79 = (576u + sizeof(_g4_t_v151)) > _g4_s78 ? (576u + sizeof(_g4_t_v151)) : _g4_s78,
    _g4_s80 = (608u + sizeof(_g4_t_v152)) > _g4_s79 ? (608u + sizeof(_g4_t_v152)) : _g4_s79,
    _g4_s81 = (648u + sizeof(_g4_t_v153)) > _g4_s80 ? (648u + sizeof(_g4_t_v153)) : _g4_s80
  };
  alignas(16) uint8_t _g4_sf[_g4_s81];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 4u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 4u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 4u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 4u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 4u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 4u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 4u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 4u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 4u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 4u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 4u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 4u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 16u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 32u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 44u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 48u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 48u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 48u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 48u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 78u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 80u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 84u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 112u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 128u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 144u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 160u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 176u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 192u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 208u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 224u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 228u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 232u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 236u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 240u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 244u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 256u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 260u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 272u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 276u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 288u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 292u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 304u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 308u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 320u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 324u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 336u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 340u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 352u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 356u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 368u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 384u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 400u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 416u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 420u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 432u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 440u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 444u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 448u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 464u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 480u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 496u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 512u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 528u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 544u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 548u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 556u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 576u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 608u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 648u);

  v153 = &self;
  v95 = self;
  v96 = a2;
  v2 = -2147483645;
  if ( *((uint8_t *)self + 177) != 0 )
    return v2;
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v114, a2);
  v3 = (void *)(v114 - 12);
  v4 = *(uint32_t *)(v114 - 12);
  if ( (uint32_t *)(v114 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v114 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v2 = -2147483646;
  if ( v4 == 0 )
    return v2;
  v5 = (iap::Controller::Self *)sub_4EBE70(0x64u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  iap::Controller::Controller(v5);
  *(uint32_t *)v95 = (uint32_t)(uintptr_t)(v5);
  if ( v5 == nullptr )
    return -2147483643;
  Instance = SecureStorageManager::GetInstance();
  SecureStorageManager::GetValueFromUserDefaults((SecureStorageManager::Self *)v107, (const char *)Instance);
  if ( *(uint32_t *)(v107[0] - 12) != 0 )
    *((uint8_t *)v95 + 152) = 1;
  v90 = *(iap::Controller::Self **)v95;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v112), "AndroidBilling", (int)(uintptr_t)(&v105));
  v7 = v112[0];
  if ( *(uint32_t *)(v112[0] - 12) == 0 )
    goto LABEL_10;
  if ( (uint8_t)iap::ServiceFactoryRegistry::IsServiceRegistered(v90, v112) != 0 )
    goto LABEL_9;
  v34 = (uint32_t *)sub_4EBE70(4u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  *v34 = ((uint32_t)(uintptr_t)&off_2096360);
  v88 = v34;
  g4_std::string::construct_copy(v113, v112);
  g4_std::string::construct_copy(&v130, v113);
  v131 = v88;
  g4_std::string::construct_copy(&v128, &v130);
  v129 = v131;
  v35 = *((glwebtools::Json::Value::Self **)v90 + 2);
  v89 = (glwebtools::Json::Value::Self *)((iap::Controller::Self *)((char *)v90 + 4));
  if ( v35 == nullptr )
  {
    v40 = (const void **)((char *)v90 + 4);
    goto LABEL_82;
  }
  s1 = (char *)v128;
  v101 = *((uint32_t *)v128 - 3);
  while ( 1 )
  {
    s2 = *((uint32_t **)v35 + 4);
    v37 = *(s2 - 3);
    v38 = v101;
    v75 = v35;
    if ( v101 > v37 )
      v38 = *(s2 - 3);
    n = v38;
    v39 = memcmp(s1, s2, v38);
    v40 = (const void **)v75;
    if ( v39 == 0 )
      v39 = v101 - v37;
    if ( v39 >= 0 )
      break;
    v36 = *((glwebtools::Json::Value::Self **)v75 + 2);
    v97 = 1;
    if ( v36 == nullptr )
      goto LABEL_59;
LABEL_52:
    v35 = v36;
  }
  v36 = *((glwebtools::Json::Value::Self **)v75 + 3);
  v97 = 0;
  if ( v36 != nullptr )
    goto LABEL_52;
LABEL_59:
  v41 = s2;
  v42 = n;
  if ( v97 == 0 )
    goto LABEL_60;
LABEL_82:
  if ( *((const void ***)v90 + 3) == v40 )
  {
    v102 = 1;
    if ( v89 != (glwebtools::Json::Value::Self *)v40 )
    {
      v103 = *((uint32_t *)v128 - 3);
      nb = *((uint32_t *)v40[4] - 3);
      v69 = v103;
      if ( nb <= v103 )
        v69 = *((uint32_t *)v40[4] - 3);
      v83 = (glwebtools::Json::Value::Self *)v40;
      v70 = memcmp(v128, v40[4], v69);
      v40 = (const void **)v83;
      if ( v70 == 0 )
        v70 = v103 - nb;
      v102 = v70 < 0;
    }
    v84 = (glwebtools::Json::Value::Self *)v40;
    v71 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    v72 = v84;
    if ( v71 != -16 )
    {
      g4_std::string::construct_copy(v71 + 16, &v128);
      *(uint32_t *)(v71 + 20) = (uint32_t)(uintptr_t)(v129);
      v72 = v84;
    }
    sub_1904970(v102, v71, v72, v89);
    s1 = (char *)v128;
    ++*((uint32_t *)v90 + 5);
  }
  else
  {
    v81 = (glwebtools::Json::Value::Self *)v40;
    v62 = sub_19048F0(v40);
    v40 = (const void **)v81;
    s1 = (char *)v128;
    v41 = *(uint32_t **)(v62 + 16);
    v101 = *((uint32_t *)v128 - 3);
    v42 = v101;
    v37 = *(v41 - 3);
    if ( v101 > v37 )
      v42 = *(v41 - 3);
LABEL_60:
    v76 = (glwebtools::Json::Value::Self *)v40;
    v43 = memcmp(v41, s1, v42);
    v44 = v37 - v101;
    v45 = v76;
    if ( v43 == 0 )
      v43 = v44;
    if ( v43 < 0 )
    {
      LOBYTE(na) = 1;
      if ( v89 != v76 )
      {
        v63 = *((uint32_t *)v76 + 4);
        v64 = v101;
        v65 = *(uint32_t *)(v63 - 12);
        if ( v101 > v65 )
          v64 = *(uint32_t *)(v63 - 12);
        v66 = memcmp(s1, *((const void **)v76 + 4), v64);
        v45 = v76;
        if ( v66 == 0 )
          v66 = v101 - v65;
        na = v66 >> 31;
      }
      v82 = v45;
      v67 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v68 = v82;
      if ( v67 != -16 )
      {
        g4_std::string::construct_copy(v67 + 16, &v128);
        *(uint32_t *)(v67 + 20) = (uint32_t)(uintptr_t)(v129);
        v68 = v82;
      }
      sub_1904970(na, v67, v68, v89);
      s1 = (char *)v128;
      ++*((uint32_t *)v90 + 5);
    }
  }
  if ( s1 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s1 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(s1 - 12);
  v46 = (void *)(v130 - 12);
  if ( (uint32_t *)(v130 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v130 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v46);
  }
  v47 = (void *)(v113[0] - 12);
  if ( (uint32_t *)(v113[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v113[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v47);
  }
LABEL_9:
  v7 = v112[0];
LABEL_10:
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v115),
    "ArTsURF0URLkxcH.UQK0UfvkbnLOeco2_VwgxchSUGr0-6K0URF0UgLH_Vw5UQK0crTsURF0URF0URli-6K0URF0URF0URF0URFGxchTectk~yUMUvJh"
    "R08LR6.i-6K0URF0URF0URF0URF0URF0URF0URLybBvHbBhTUQK0UfhO_fbd~fH2~nLObnwQCvtpD4UJUFTsURF0URF0URF0URF0URF0URF0URFG~pwy"
    "Cf.Qb4UMURLl_foy_p.86f.J_V.kbyUhRGF0URF0URF0URF0URF0URlt-6K0URF0URF0URF0URlC1RFhRGF0URF0URF0URF0URLkxcH.UQK0UfC.Cvtr"
    "~ft8CchTBp3d~j6G-6K0URF0URF0UnTJUFTsURF0URF0URli-6K0URF0URF0URF0URFGxchTectk~yUMUvJhRGF0URF0URF0URF0URF0URli-6K0URF0"
    "URF0URF0URF0URF0URF0URLybBvHbBhTUQK0UgL.~joO~fw2~nwyxpPP~p9G1RFhRGF0URF0URF0URF0URF0URF0URF0Ugh.~gbdxp9GNGFG6cS8~ftd"
    "bXLd_V3d_f~G-6K0URF0URF0URF0URF0URF026TsURF0URF0URF0URF0B4r0-6K0URF0URF0URF0URFG_fvab4UMURLybBhT_jL.BjlH~fhKxBh.U0Ts"
    "URF0URF0URlt1RFhRGF0URF0URF0ArTsURF0URF0URF0URF0UfvQCV.O_gDGNGl_-6K0URF0URF0URF0URF0URF0ArTsURF0URF0URF0URF0URF0URF0"
    "URFG~fw3Ccw5CRUMURLgbBo2CnLP_ghPxjod_p7G1RFhRGF0URF0URF0URF0URF0URF0URF0Ugh.~gbdxp9GNGFG6cS8~ftdbXLd_V3d_f~G-6K0URF0"
    "URF0URF0URF0URF026TsURF0URF0URF0URF0B4r0-6K0URF0URF0URF0URFG_fvab4UMURLgbBo2CnLP_ghPxjod_p7G-6K0URF0URF0UnTJUFTsURF0"
    "URF0URli-6K0URF0URF0URF0URFGxchTectk~yUMUvJhRGF0URF0URF0URF0URF0URli-6K0URF0URF0URF0URF0URF0URF0URLybBvHbBhTUQK0Ufbd"
    "_f.5evtT~fvk~pvQCV.O_GUJUFTsURF0URF0URF0URF0URF0URF0URFG~pwyCf.Qb4UMURLl_foy_p.86f.J_V.kbyUhRGF0URF0URF0URF0URF0URlt"
    "-6K0URF0URF0URF0URlC1RFhRGF0URF0URF0URF0URLkxcH.UQK0UfhO_BlJbBo.BjoyxcS5xchTectkU0TsURF0URF0URlt1RFhRGF0URF0URF0ArTs"
    "URF0URF0URF0URF0UfvQCV.O_gDGNGl_-6K0URF0URF0URF0URF0URF0ArTsURF0URF0URF0URF0URF0URF0URFG~fw3Ccw5CRUMURLQeVwQeHtr_V.a"
    "eB6G1RFhRGF0URF0URF0URF0URF0URF0URF0Ugh.~gbdxp9GNGFG6cS8~ftdbXLd_V3d_f~G-6K0URF0URF0URF0URF0URF024rLR68LR6TsURF0URF0"
    "URF0URF0URF0UnJhRGF0URF0URF0URF0URF0URF0URF0UgL.~Bw.~j6GNGFGxgwSBjly_poHxj6G1RFhRGF0URF0URF0URF0URF0URF0URF0Ugh.~gbd"
    "xp9GNGFG6cS8~ftdbXLd_V3d_f~G-6K0URF0URF0URF0URF0URF026TsURF0URF0URF0URF0B4r0-6K0URF0URF0URF0URFG_fvab4UMURLGCB.2~nLO"
    "bnwQCRUhRGF0URF0URF024r0-6K0URF0URF0UnJhRGF0URF0URF0URF0URLPxjod_pS5UQK0crTsURF0URF0URF0URF0URF0UnJhRGF0URF0URF0URF0"
    "URF0URF0URF0UgL.~Bw.~j6GNGFG~fwr~ftQbBh5BjoyxcS5xchTectkUGr0-6K0URF0URF0URF0URF0URF0URF0URL5bBLpech.UQK0U8vkbnLOecoR"
    "ec3JecSgU0TsURF0URF0URF0URF0URF0UnThRGF0URF0URF0URF0UvTJUFTsURF0URF0URF0URF0UfSP_c9GNGFG~fwr~ftQbBh5BjoyxcS5xchTectk"
    "U0TsURF0URF0URlt-6K0URF0B6Ts26Ts",
    (int)(uintptr_t)(&v104));
  v140 = &dword_213B814;
  v141 = &dword_213B814;
  glwebtools::SecureString::Set((int)(uintptr_t)(v139), (int)(uintptr_t)(&v115), 1994397501, 1188740935);
  v8 = (void *)(v115 - 12);
  if ( (uint32_t *)(v115 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v115 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  glwebtools::SecureString::decrypt(&v116, (int *)&v140, (int)(uintptr_t)(v139));
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v142, (int)(uintptr_t)(&v116));
  v9 = (void *)(v116 - 12);
  if ( (uint32_t *)(v116 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v116 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  iap::RuleSet::Construct((iap::RuleSet::Self *)&v148);
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v142) != 0
    && iap::RuleSet::read((iap::RuleSet::Self *)&v148, (const glwebtools::JsonReader::Self *)v142) == 0
    && iap::Controller::AddRuleSet(*(iap::Controller::Self **)v95, (const iap::RuleSet::Self *)&v148) == 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(v95) + 124, "android_legacy", 0xEu);
  }
  g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
    v149,
    v150);
  v10 = (void *)(v148 - 12);
  if ( (uint32_t *)(v148 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v142);
  glwebtools::SecureString::Set((unsigned int (*)[2])v139, nullptr, 0);
  v11 = v141 - 3;
  if ( v141 - 3 != dword_213B808 && __sync_fetch_and_add(v141 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11);
  v12 = v140 - 3;
  if ( v140 - 3 != dword_213B808 && __sync_fetch_and_add(v140 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v117, v96);
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v143, (int)(uintptr_t)(&v117));
  v13 = (void *)(v117 - 12);
  if ( (uint32_t *)(v117 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v117 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v118), "app_validation", (int)(uintptr_t)(&v105) + 1);
  v119 = (bool *)v95 + 153;
  g4_std::string::construct_copy(&v132, &v118);
  v133 = v119;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v143) != 0
    && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v143) != 0
    && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v143, (char **)&v132) )
  {
    v14 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                             (glwebtools::Json::Value::Self *)v143,
                                             (const char **)&v132);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v148, v14);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)&v148, v133);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v148);
  }
  v15 = (void *)(v132 - 12);
  if ( (uint32_t *)(v132 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v132 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v118 - 12);
  if ( (uint32_t *)(v118 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v118 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v108 = (glwebtools::Codec::Self *)&dword_213B814;
  glwebtools::Socket::GetMacAddressFromIndex(0, (int)(uintptr_t)(&v108));
  glwebtools::Codec::GenerateMD5(v108, 0x11u, (unsigned int)(uintptr_t)(v151));
  v152 = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v109), v151, (int)(uintptr_t)(&v104) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v120), "device_uuid", (int)(uintptr_t)(&v105) + 2);
  v121 = v109;
  g4_std::string::construct_copy(v134, &v120);
  v98 = (int)(uintptr_t)(v121);
  v134[1] = (int)(uintptr_t)(v121);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(v96) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v145), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v96);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v145);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v145);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v148);
  v17 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)&v148, v98);
  if ( glwebtools::IsOperationSuccess(v17) )
  {
    v80 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v148);
    v59 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v96);
    v60 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v59, (char **)v134);
    glwebtools::Json::Value::opAssign(v60, v80);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v148);
  v18 = (void *)(v134[0] - 12);
  if ( (uint32_t *)(v134[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v134[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v120 - 12);
  if ( (uint32_t *)(v120 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v120 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v109[0] - 12);
  if ( (uint32_t *)(v109[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v109[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  v110[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v21 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
  gaia::Gaia::GetCredentialDetails(v21, 19, 2, (gaia::Gaia::Self *)v110);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v122), "federation_credential", (int)(uintptr_t)(&v105) + 3);
  v123 = v110;
  g4_std::string::construct_copy(v135, &v122);
  v99 = (int)(uintptr_t)(v123);
  v135[1] = (int)(uintptr_t)(v123);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(v96) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v146), (char *)&loc_6 + 1);
    v58 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v96);
    glwebtools::Json::Value::opAssign(v58, (const glwebtools::Json::Value::Self *)v146);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v146);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v148);
  v22 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)&v148, v99);
  if ( glwebtools::IsOperationSuccess(v22) )
  {
    v79 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v148);
    v56 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v96);
    v57 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v56, (char **)v135);
    glwebtools::Json::Value::opAssign(v57, v79);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v148);
  v23 = (void *)(v135[0] - 12);
  if ( (uint32_t *)(v135[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v135[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  v24 = (void *)(v122 - 12);
  if ( (uint32_t *)(v122 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v122 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v124), "anonymous_credential", (int)(uintptr_t)(&v106));
  v125 = v110;
  g4_std::string::construct_copy(v136, &v124);
  v100 = (int)(uintptr_t)(v125);
  v136[1] = (int)(uintptr_t)(v125);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(v96) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v147), (char *)&loc_6 + 1);
    v55 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v96);
    glwebtools::Json::Value::opAssign(v55, (const glwebtools::Json::Value::Self *)v147);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v147);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v148);
  v25 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)&v148, v100);
  if ( glwebtools::IsOperationSuccess(v25) )
  {
    v78 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v148);
    v53 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v96);
    v54 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v53, (char **)v136);
    glwebtools::Json::Value::opAssign(v54, v78);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v148);
  v26 = (void *)(v136[0] - 12);
  if ( (uint32_t *)(v136[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v136[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  v27 = (void *)(v124 - 12);
  if ( (uint32_t *)(v124 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v124 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v27);
  }
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v111, v96);
  v28 = (glwebtools::Json::Value::Self *)iap::Controller::Initialize(*(iap::Controller::Self **)v95, v111[0]);
  if ( v28 == nullptr )
  {
    glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v144, (int)(uintptr_t)(v111));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v126), "default_ruleset", (int)(uintptr_t)(&v106) + 1);
    v127 = (int)(uintptr_t)(v95) + 124;
    g4_std::string::construct_copy(&v137, &v126);
    v138 = v127;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v144) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v144) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v144, (char **)&v137) )
    {
      v48 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                               (glwebtools::Json::Value::Self *)v144,
                                               (const char **)&v137);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v148, v48);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)&v148, v138);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v148);
    }
    v49 = (void *)(v137 - 12);
    if ( (uint32_t *)(v137 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v137 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v49);
    }
    v50 = (void *)(v126 - 12);
    if ( (uint32_t *)(v126 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v126 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v50);
    }
    IsRuleSetAvailable = iap::Controller::IsRuleSetAvailable(*(iap::Controller::Self **)v95, *((const char **)v95 + 31));
    v52 = 0;
    if ( IsRuleSetAvailable != 0 )
      *((uint8_t *)v95 + 177) = 1;
    else
      v52 = -2147483641;
    v77 = (glwebtools::Json::Value::Self *)v52;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v144);
    v28 = v77;
  }
  v29 = v111[0] - 12;
  if ( (uint32_t *)v111[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v111[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    v86 = v28;
    g4_std::string::Rep::M_destroy(v29);
    v28 = v86;
  }
  v30 = (void *)(v110[0] - 12);
  if ( (uint32_t *)(v110[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v110[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v87 = v28;
    g4_std::string::Rep::M_destroy(v30);
    v28 = v87;
  }
  v31 = (char *)v108 - 12;
  if ( (uint32_t *)((char *)v108 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v108 - 1, 0xFFFFFFFF) <= 0 )
  {
    v85 = v28;
    g4_std::string::Rep::M_destroy(v31);
    v28 = v85;
  }
  v74 = v28;
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v143);
  v2 = (int)(uintptr_t)(v74);
  v32 = (void *)(v107[0] - 12);
  if ( (uint32_t *)(v107[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v107[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v32);
    return (int)(uintptr_t)(v74);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Shutdown  (binary VA: 0x14fa0b0)
// Original: iap::Store::Shutdown
// ----------------------------------------------------------------------------
int iap::Store::Shutdown(iap::Controller::Self **self)
{
  iap::Controller::Self **v1;
  iap::Controller::Self *v2;
  char **v3;
  char *v4;
  char *v5;
  uint32_t *i;
  int v7;
  int v8;
  unsigned int *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v27;
  uint32_t *v28;
  unsigned int *v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  iap::Controller::Self *v42;

  v1 = self;
  if ( *self != nullptr )
  {
    iap::Controller::Shutdown(*self);
    v2 = *self;
    v42 = *self;
    if ( *self != nullptr )
    {
      v3 = *((char ***)v2 + 22);
      v4 = (char *)v2 + 88;
      if ( v3 != (char **)((char *)v2 + 88) )
      {
        while ( 1 )
        {
          v5 = *v3;
          iap::Event::Destroy((iap::Event::Self *)(v3 + 2));
          sub_4EBEE0((int)(uintptr_t)(v3));
          if ( v5 == v4 )
            break;
          v3 = (char **)v5;
        }
      }
      v30 = *((uint32_t **)v42 + 20);
      if ( v30 != (uint32_t *)((char *)v42 + 80) )
      {
        for ( i = *((uint32_t **)v42 + 20); ; i = v41 )
        {
          v41 = (uint32_t *)*i;
          v7 = v30[15];
          if ( (uint32_t *)(v7 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v7 - 12));
          }
          iap::Event::Destroy((iap::Event::Self *)(v30 + 14));
          v8 = v30[11];
          v29 = (unsigned int *)v30[12];
          v27 = v8;
          if ( v29 != (unsigned int *)v8 )
          {
            v9 = (unsigned int *)v30[11];
            v40 = v8 + 84;
            v39 = v8 + 80;
            v38 = v8 + 64;
            v37 = v8 + 60;
            v36 = v8 + 48;
            v35 = v8 + 44;
            v34 = v8 + 32;
            v33 = v8 + 28;
            v32 = v8 + 16;
            v31 = v8 + 12;
            do
            {
              glwebtools::SecureString::Set((unsigned int (*)[2])(v9 + 9), nullptr, 0);
              v10 = (char *)v9 - v27;
              v11 = *(unsigned int *)((char *)v9 + v40 - v27);
              if ( (uint32_t *)(v11 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v11 - 12));
              }
              v12 = *(uint32_t *)&v10[v39];
              if ( (uint32_t *)(v12 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v12 - 12));
              }
              glwebtools::SecureString::Set((unsigned int (*)[2])(v9 + 13), nullptr, 0);
              v13 = *(uint32_t *)&v10[v38];
              if ( (uint32_t *)(v13 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v13 - 12));
              }
              v14 = *(uint32_t *)&v10[v37];
              if ( (uint32_t *)(v14 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v14 - 12));
              }
              glwebtools::SecureString::Set((unsigned int (*)[2])(v9 + 9), nullptr, 0);
              v15 = *(uint32_t *)&v10[v36];
              if ( (uint32_t *)(v15 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v15 - 12));
              }
              v16 = *(uint32_t *)&v10[v35];
              if ( (uint32_t *)(v16 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v16 - 12));
              }
              glwebtools::SecureString::Set((unsigned int (*)[2])(v9 + 5), nullptr, 0);
              v17 = *(uint32_t *)&v10[v34];
              if ( (uint32_t *)(v17 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v17 - 12));
              }
              v18 = *(uint32_t *)&v10[v33];
              if ( (uint32_t *)(v18 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v18 - 12));
              }
              glwebtools::SecureString::Set((unsigned int (*)[2])(v9 + 1), nullptr, 0);
              v19 = *(uint32_t *)&v10[v32];
              if ( (uint32_t *)(v19 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v19 - 12));
              }
              v20 = *(uint32_t *)&v10[v31];
              if ( (uint32_t *)(v20 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v20 - 12));
              }
              v9 += 22;
            }
            while ( v29 != v9 );
            v27 = v30[11];
          }
          if ( v27 != 0 )
            sub_4EBEE0(v27);
          v21 = v30[4];
          v28 = (uint32_t *)v30[5];
          if ( v28 != (uint32_t *)v21 )
          {
            v22 = (uint32_t *)v30[4];
            do
            {
              v23 = v22[1];
              if ( (uint32_t *)(v23 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v23 - 12));
              }
              v24 = (uint32_t *)(*v22 - 12);
              if ( v24 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v22 - 4), 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy(v24);
              v22 += 2;
            }
            while ( v28 != v22 );
            v21 = v30[4];
          }
          if ( v21 != 0 )
            sub_4EBEE0(v21);
          v25 = v30[3];
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v25 - 12));
          }
          sub_4EBEE0((int)(uintptr_t)(v30));
          if ( v41 == (uint32_t *)((char *)v42 + 80) )
            break;
          v30 = v41;
        }
      }
      g4_std::Rb_tree_iap_RuleSet_iap_RuleSet_86d84f::M_erase(
        (char *)v42 + 56,
        *((uint32_t *)v42 + 16));
      g4_std::Rb_tree_string_pair_string_const_26d452::M_erase(
        (char *)v42 + 24,
        *((uint32_t *)v42 + 8));
      g4_std::Rb_tree_string_pair_string_const_cfc3ba::M_erase(
        v42,
        *((uint32_t *)v42 + 2));
      sub_4EBEE0((int)(uintptr_t)(*self));
    }
    v1 = self;
    *self = nullptr;
  }
  v1[3] = nullptr;
  v1[4] = nullptr;
  v1[14] = nullptr;
  v1[5] = nullptr;
  v1[20] = (iap::Controller::Self *)(&stru_7524 + 12);
  *((uint8_t *)v1 + 177) = 0;
  v1[43] = (iap::Controller::Self *)-1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Store::Destroy  (binary VA: 0x14fa6a0)
// Original: iap::Store::~Store
// ----------------------------------------------------------------------------
void iap::Store::Destroy(iap::Store::Self *self)
{
  iap::Store::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int i;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  iap::Store::Self *v20;
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
  int v34;
  int v35;
  int v36;

  v1 = self;
  iap::Store::Shutdown((iap::Controller::Self **)self);
  v2 = *((uint32_t *)self + 40);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  glwebtools::SecureString::Set((unsigned int (*)[2])((unsigned int *)self + 17), nullptr, 0);
  v3 = *((uint32_t *)self + 37);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 36);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 33);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 32);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 31);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v31 = *((uint32_t *)self + 27);
  if ( v31 != 0 )
  {
    for ( i = *((uint32_t *)self + 27); ; i = v18 )
    {
      v32 = *(uint32_t *)(i + 12);
      if ( v32 != 0 )
      {
        while ( 1 )
        {
          v33 = *(uint32_t *)(v32 + 12);
          if ( v33 != 0 )
          {
            while ( 1 )
            {
              v34 = *(uint32_t *)(v33 + 12);
              if ( v34 != 0 )
              {
                while ( 1 )
                {
                  v35 = *(uint32_t *)(v34 + 12);
                  if ( v35 != 0 )
                  {
                    while ( 1 )
                    {
                      v36 = *(uint32_t *)(v35 + 12);
                      if ( v36 != 0 )
                      {
                        while ( 1 )
                        {
                          v30 = *(uint32_t *)(v36 + 12);
                          if ( v30 != 0 )
                          {
                            while ( 1 )
                            {
                              v29 = *(uint32_t *)(v30 + 12);
                              if ( v29 != 0 )
                              {
                                while ( 1 )
                                {
                                  v9 = *(uint32_t *)(v29 + 12);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_unsigned_int_pair_unsign_743ce8::M_erase(
                                        (char *)self + 100,
                                        *(uint32_t *)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      sub_4EBEE0(v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = *(uint32_t *)(v29 + 8);
                                  sub_4EBEE0(v29);
                                  if ( v11 == 0 )
                                    break;
                                  v29 = v11;
                                }
                              }
                              v12 = *(uint32_t *)(v30 + 8);
                              sub_4EBEE0(v30);
                              if ( v12 == 0 )
                                break;
                              v30 = v12;
                            }
                          }
                          v13 = *(uint32_t *)(v36 + 8);
                          sub_4EBEE0(v36);
                          if ( v13 == 0 )
                            break;
                          v36 = v13;
                        }
                      }
                      v14 = *(uint32_t *)(v35 + 8);
                      sub_4EBEE0(v35);
                      if ( v14 == 0 )
                        break;
                      v35 = v14;
                    }
                  }
                  v15 = *(uint32_t *)(v34 + 8);
                  sub_4EBEE0(v34);
                  if ( v15 == 0 )
                    break;
                  v34 = v15;
                }
              }
              v16 = *(uint32_t *)(v33 + 8);
              sub_4EBEE0(v33);
              if ( v16 == 0 )
                break;
              v33 = v16;
            }
          }
          v17 = *(uint32_t *)(v32 + 8);
          sub_4EBEE0(v32);
          if ( v17 == 0 )
            break;
          v32 = v17;
        }
      }
      v18 = *(uint32_t *)(v31 + 8);
      sub_4EBEE0(v31);
      if ( v18 == 0 )
        break;
      v31 = v18;
    }
    v1 = self;
  }
  v19 = *((uint32_t *)v1 + 23);
  if ( (iap::Store::Self *)v19 != (iap::Store::Self *)((char *)v1 + 92) )
  {
    while ( 1 )
    {
      v20 = *(iap::Store::Self **)v19;
      glwebtools::SecureString::Set((unsigned int (*)[2])(v19 + 8), nullptr, 0);
      v21 = *(uint32_t *)(v19 + 20);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v21 - 12));
      }
      v22 = *(uint32_t *)(v19 + 16);
      if ( (uint32_t *)(v22 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v22 - 12));
      }
      sub_4EBEE0(v19);
      if ( v20 == (iap::Store::Self *)((char *)v1 + 92) )
        break;
      v19 = (int)(uintptr_t)(v20);
    }
  }
  glwebtools::SecureString::Set((unsigned int (*)[2])((char *)v1 + 60), nullptr, 0);
  v23 = *((uint32_t *)v1 + 18);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v23 - 12));
  }
  v24 = *((uint32_t *)v1 + 17);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v24 - 12));
  }
  glwebtools::SecureString::Set((unsigned int (*)[2])((unsigned int *)v1 + 5), nullptr, 0);
  v25 = *((uint32_t *)v1 + 13);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v25 - 12));
  }
  v26 = *((uint32_t *)v1 + 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v26 - 12));
  }
  glwebtools::SecureString::Set((unsigned int (*)[2])((unsigned int *)v1 + 3), nullptr, 0);
  v27 = *((uint32_t *)v1 + 9);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v27 - 12));
  }
  v28 = *((uint32_t *)v1 + 8);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v28 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::Store::DestroyInstance  (binary VA: 0x14fac40)
// Original: iap::Store::DestroyInstance
// ----------------------------------------------------------------------------
void iap::Store::DestroyInstance()
{
  iap::Store::Self *v0;

  v0 = (iap::Store::Self *)(uintptr_t)(iap::Store::s_instance);
  if ( iap::Store::s_instance != 0 )
  {
    iap::Store::Destroy((iap::Store::Self *)(uintptr_t)(iap::Store::s_instance));
    opDelete(v0);
    iap::Store::s_instance = (uintptr_t)(uintptr_t)(nullptr);
  }
}


