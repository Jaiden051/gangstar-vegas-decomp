#include "Core/Utils/DecompTypes.h"
#include "oi_core.h"

// ============================================================================
// G4_UP8Shop/lib/oi/decompiled/oi_core.cpp
// Library: oi | Module: oi_core
// Binary Address Span: 0x153b700 .. 0x1543800 (109 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x153b700 (size: 75 bytes)
// Symbol:    _ZN2oi12OfflineStoreC2Ev
// Demangled: oi::OfflineStore::OfflineStore(void)
// ============================================================================
// Alternative name is '_ZN2oi12OfflineStoreC1Ev'
struct oi::OfflineStore::Self *oi::OfflineStore::OfflineStore(oi::OfflineStore::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 36) = 0;
  *((uint32_t *)self + 10) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::GetInstance  (binary VA: 0x153b750)
// Original: oi::OfflineStore::GetInstance
// ----------------------------------------------------------------------------
oi::OfflineStore::Self * oi::OfflineStore::GetInstance()
{
  oi::OfflineStore::Self *result;
  oi::OfflineStore::Self *v1;

  result = (oi::OfflineStore::Self *)oi::OfflineStore::s_instance;
  if ( oi::OfflineStore::s_instance == 0 )
  {
    v1 = (oi::OfflineStore::Self *)opNew(0x2Cu);
    oi::OfflineStore::OfflineStore(v1);
    oi::OfflineStore::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::ShutDown  (binary VA: 0x153b7b0)
// Original: oi::OfflineStore::ShutDown
// ----------------------------------------------------------------------------
int oi::OfflineStore::ShutDown(oi::OfflineStore::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = *(uint32_t *)self;
  *((uint8_t *)self + 8) = 0;
  if ( v1 != 0 )
    G4_VCALL<void>(v1, 24);
  *((uint32_t *)self + 4) = *((uint32_t *)self + 3);
  *((uint32_t *)self + 7) = *((uint32_t *)self + 6);
  if ( *((uint32_t *)self + 1) != 0 )
    oi::PromotionOI::Clear(*((oi::PromotionOI::Self **)self + 1));
  free(*((void **)self + 10));
  v2 = *(uint32_t *)self;
  *((uint32_t *)self + 10) = 0;
  if ( v2 != 0 )
    G4_VCALL<void>(v2, 40);
  v3 = *((uint32_t *)self + 1);
  *(uint32_t *)self = 0;
  if ( v3 != 0 )
    G4_VCALL<void>(v3, 12);
  *((uint32_t *)self + 1) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::Destroy  (binary VA: 0x153b840)
// Original: oi::OfflineStore::~OfflineStore
// ----------------------------------------------------------------------------
void oi::OfflineStore::Destroy(oi::OfflineStore::Self *self)
{
  int v1;

  oi::OfflineStore::ShutDown(self);
  if ( *(uint32_t *)self != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)self + 40))(*(uint32_t *)self);
  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 12))(*((uint32_t *)self + 1));
  if ( *((uint32_t *)self + 6) != 0 )
    sub_4EBEE0(*((uint32_t *)self + 6));
  if ( *((uint32_t *)self + 3) != 0 )
    sub_4EBEE0(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::DestroyInstance  (binary VA: 0x153b8a0)
// Original: oi::OfflineStore::DestroyInstance
// ----------------------------------------------------------------------------
int oi::OfflineStore::DestroyInstance()
{
  int result;
  oi::OfflineStore::Self *v1;

  result = 0;
  if ( oi::OfflineStore::s_instance != 0 )
  {
    oi::OfflineStore::ShutDown((oi::OfflineStore::Self *)(uintptr_t)(oi::OfflineStore::s_instance));
    v1 = (oi::OfflineStore::Self *)(uintptr_t)(oi::OfflineStore::s_instance);
    if ( oi::OfflineStore::s_instance != 0 )
    {
      oi::OfflineStore::Destroy((oi::OfflineStore::Self *)(uintptr_t)(oi::OfflineStore::s_instance));
      opDelete(v1);
    }
    oi::OfflineStore::s_instance = (uintptr_t)(uintptr_t)(nullptr);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::IsInitialized  (binary VA: 0x153b910)
// Original: oi::OfflineStore::IsInitialized
// ----------------------------------------------------------------------------
int oi::OfflineStore::IsInitialized(oi::OfflineStore::Self *self)
{
  return *((uint8_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::GetOfflineItemList  (binary VA: 0x153b920)
// Original: oi::OfflineStore::GetOfflineItemList
// ----------------------------------------------------------------------------
int oi::OfflineStore::GetOfflineItemList(oi::OfflineStore::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::checkMemmory  (binary VA: 0x153b930)
// Original: oi::OfflineStore::checkMemmory
// ----------------------------------------------------------------------------
int oi::OfflineStore::checkMemmory()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::Update  (binary VA: 0x153b940)
// Original: oi::OfflineStore::Update
// ----------------------------------------------------------------------------
void oi::OfflineStore::Update(oi::OfflineStore::Self *self)
{
  if ( *((uint8_t *)self + 36) != 0 && (uint8_t)oi::OfflineStore::checkMemmory() == 0 )
    glwebtools::Console::Print();
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::makeBackup  (binary VA: 0x153b9a0)
// Original: oi::OfflineStore::makeBackup
// ----------------------------------------------------------------------------
void oi::OfflineStore::makeBackup()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::Parse  (binary VA: 0x153b9b0)
// Original: oi::OfflineStore::Parse
// ----------------------------------------------------------------------------
int oi::OfflineStore::Parse(oi::OfflineStore::Self *a1, int a2)
{
  int v2;
  int v3;

  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)a1 + 4))(*(uint32_t *)a1, a2);
  if ( v2 != 0 )
  {
    glwebtools::Console::Print();
  }
  else
  {
    v3 = *((uint32_t *)a1 + 1);
    *((uint8_t *)a1 + 36) = 1;
    G4_VCALL<void>(v3, 4, a2);
    oi::OfflineStore::makeBackup();
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::Refresh  (binary VA: 0x153ba50)
// Original: oi::OfflineStore::Refresh
// ----------------------------------------------------------------------------
unsigned int oi::OfflineStore::Refresh(oi::OfflineStore::Self *a1, int a2)
{
  unsigned int v2;
  int v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v8);
  v2 = glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v8, a2);
  if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
  {
    glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)&v7);
    v4 = oi::OfflineStore::Parse(a1, (int)(uintptr_t)(&v7));
    v5 = (void *)(v7 - 12);
    if ( (uint32_t *)(v7 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    {
      v6 = v4;
      g4_std::string::Rep::M_destroy(v5);
      v4 = v6;
    }
    if ( v4 != 0 )
    {
      v2 = 0x8000001A;
      glwebtools::Console::Print();
    }
    else
    {
      v2 = 0;
    }
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v8);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::Initialize  (binary VA: 0x153bb40)
// Original: oi::OfflineStore::Initialize
// ----------------------------------------------------------------------------
int oi::OfflineStore::Initialize(oi::OfflineStore::Self *a1, int a2)
{
  int v2;
  oi::StoreOfflineItemArray::Self *v4;
  int v5;
  uint8_t v6[28];

  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v6);
  if ( *((uint8_t *)a1 + 8) != 0 )
  {
    v2 = 0;
    glwebtools::Console::Print();
  }
  else
  {
    v4 = (oi::StoreOfflineItemArray::Self *)opNew(0x10u);
    oi::StoreOfflineItemArray::Construct(v4);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    v5 = opNew(0x14u);
    *(uint8_t *)(v5 + 10) = 0;
    *(uint8_t *)(v5 + 18) = 0;
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&off_2096750);
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint32_t *)a1 + 1) = v5;
    v2 = oi::OfflineStore::Parse(a1, a2);
    if ( v2 != 0 )
      glwebtools::Console::Print();
    else
      *((uint8_t *)a1 + 8) = 1;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v6);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::DecryptOfflineItems  (binary VA: 0x153bc50)
// Original: oi::OfflineStore::DecryptOfflineItems
// ----------------------------------------------------------------------------
unsigned int oi::OfflineStore::DecryptOfflineItems(oi::OfflineStore::Self *self, const char **a2, size_t a3, void **a4, int *a5, unsigned int *a6)
{
  size_t *v6;
  uint32_t *v7;
  size_t n;
  void *v9;
  int v10;
  void *v11;
  size_t v13;
  char *s2;

  v6 = (size_t *)calloc(a3 + 1, 1u);
  if ( (uint8_t)glwebtools::Codec::DecryptXXTEA(
                          (int)(uintptr_t)(*a2),
                          (glwebtools::Codec::Self *)*a2,
                          a3,
                          (glwebtools::Codec::Self *)v6,
                          (void *)a3,
                          (unsigned int)(uintptr_t)(a6)) != 0 )
  {
    v7 = (uint32_t *)(calloc(0x21u, 1u));
    n = *v6;
    v9 = v7;
    v10 = *v6 + 4;
    *v7 = *(size_t *)((char *)v6 + v10);
    v7[1] = *(size_t *)((char *)v6 + v10 + 4);
    v7[2] = *(size_t *)((char *)v6 + v10 + 8);
    v7[3] = *(size_t *)((char *)v6 + v10 + 12);
    v7[4] = *(size_t *)((char *)v6 + v10 + 16);
    v7[5] = *(size_t *)((char *)v6 + v10 + 20);
    v7[6] = *(size_t *)((char *)v6 + v10 + 24);
    v7[7] = *(size_t *)((char *)v6 + v10 + 28);
    v13 = v10;
    s2 = (char *)calloc(0x21u, 1u);
    glwebtools::Codec::GenerateMD5((glwebtools::Codec::Self *)v6, v13, (unsigned int)(uintptr_t)(s2));
    if ( strcmp((const char *)v9, s2) == 0 )
    {
      v11 = calloc(n + 1, 1u);
      *a4 = v11;
      memcpy(v11, v6 + 1, n);
      *a5 = n;
      free(v6);
      free(v9);
      free(s2);
      return 0;
    }
    glwebtools::Console::Print();
  }
  free(v6);
  *a5 = 0;
  return 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::EncryptOfflineItems  (binary VA: 0x153bdd0)
// Original: oi::OfflineStore::EncryptOfflineItems
// ----------------------------------------------------------------------------
unsigned int oi::OfflineStore::EncryptOfflineItems(oi::OfflineStore::Self *self, void *src, size_t n, void **a4, int *a5, unsigned int *a6)
{
  uint32_t *v6;
  uint32_t *v7;
  glwebtools::Codec::Self *v8;
  uint32_t *v9;
  glwebtools::Codec::Self *v10;
  void *v11;
  glwebtools::Codec::Self *EncryptedXXTEADataSize;

  v6 = (uint32_t *)(calloc(0x21u, 1u));
  EncryptedXXTEADataSize = glwebtools::Codec::GetEncryptedXXTEADataSize((glwebtools::Codec::Self *)(n + 36));
  v7 = (uint32_t *)(calloc((size_t)EncryptedXXTEADataSize + 1, 1u));
  *v7 = n;
  v8 = (glwebtools::Codec::Self *)v7;
  memcpy(v7 + 1, src, n);
  v9 = (uint32_t *)((char *)v8 + n + 4);
  glwebtools::Codec::GenerateMD5(v8, n + 4, (unsigned int)(uintptr_t)(v6));
  *v9 = *v6;
  v9[1] = v6[1];
  v9[2] = v6[2];
  v9[3] = v6[3];
  v9[4] = v6[4];
  v9[5] = v6[5];
  v9[6] = v6[6];
  v9[7] = v6[7];
  v10 = glwebtools::Codec::GetEncryptedXXTEADataSize((glwebtools::Codec::Self *)(n + 36));
  if ( (uint8_t)glwebtools::Codec::EncryptXXTEA(v8, n + 36, v8, v10, (unsigned int)(uintptr_t)(a6)) != 0 )
  {
    *a5 = (int)(uintptr_t)(EncryptedXXTEADataSize);
    v11 = calloc((size_t)EncryptedXXTEADataSize + 1, 1u);
    *a4 = v11;
    memcpy(v11, v8, *a5);
    free(v8);
    free(v6);
    return 0;
  }
  else
  {
    glwebtools::Console::Print();
    free(v8);
    return 0x80000000;
  }
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::GetPromotionName  (binary VA: 0x153bf40)
// Original: oi::OfflineStore::GetPromotionName
// ----------------------------------------------------------------------------
int oi::OfflineStore::GetPromotionName(oi::PromotionOI::Self **self)
{
  int result;

  result = 0;
  if ( *(self + 1) != nullptr )
    return oi::PromotionOI::GetDescription(*(self + 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::OfflineStore::GetEndDate  (binary VA: 0x153bf70)
// Original: oi::OfflineStore::GetEndDate
// ----------------------------------------------------------------------------
int oi::OfflineStore::GetEndDate(oi::PromotionOI::Self **self)
{
  int result;

  result = 0;
  if ( *(self + 1) != nullptr )
    return oi::PromotionOI::GetEndTime(*(self + 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::Destroy  (binary VA: 0x153bff0)
// Original: oi::ItemPriceArray::~ItemPriceArray
// ----------------------------------------------------------------------------
void oi::ItemPriceArray::Destroy(oi::ItemPriceArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;

  v1 = *((uint32_t **)self + 2);
  v2 = *((uint32_t **)self + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096728);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v2;
      v4 = v2;
      v2 += 6;
      (*(void (**)(uint32_t *))(v3 + 16))(v4);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t **)self + 1);
  }
  if ( v2 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v2));
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::Destroy_ea153c050  (binary VA: 0x153c050)
// Original: oi::ItemPriceArray::~ItemPriceArray
// ----------------------------------------------------------------------------
void oi::ItemPriceArray::Destroy_ea153c050(oi::ItemPriceArray::Self *self)
{
  oi::ItemPriceArray::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::write  (binary VA: 0x153c090)
// Original: oi::ItemPriceArray::write
// ----------------------------------------------------------------------------
int oi::ItemPriceArray::write(oi::ItemPriceArray::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Json::Value::Self *v3;
  glwebtools::Self *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  typedef int _g4_t_i;
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[16];
  typedef int _g4_t_v12[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v12)) > _g4_s3 ? (60u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  v2 = *((uint32_t *)self + 1);
  for ( i = *((uint32_t *)self + 2); i != v2; v2 += 24 )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isArray(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v11), &loc_6);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v10), nullptr);
    v3 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::opAssign(v3, (const glwebtools::Json::Value::Self *)v10);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    v4 = (glwebtools::Self *)G4_VCALL<int>(v2, 4, v12);
    if ( glwebtools::IsOperationSuccess(v4) )
    {
      v6 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::append(v7, v6);
      v4 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    if ( !glwebtools::IsOperationSuccess(v4) )
      break;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::read  (binary VA: 0x153c1f0)
// Original: oi::ItemPriceArray::read
// ----------------------------------------------------------------------------
glwebtools::Self * oi::ItemPriceArray::read(int a1, int a2)
{
  glwebtools::Self *v2;
  glwebtools::Self *v3;
  int v4;
  glwebtools::Self *v5;
  typedef glwebtools::Self *_g4_t_v7;
  typedef glwebtools::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v2 = *(glwebtools::Self **)(a1 + 8);
  v8 = *(glwebtools::Self **)(a1 + 4);
  if ( v8 != v2 )
  {
    v3 = *(glwebtools::Self **)(a1 + 4);
    do
    {
      v4 = *(uint32_t *)v3;
      v7 = v3;
      v3 = (glwebtools::Self *)((char *)v3 + 24);
      (*(void (**)(glwebtools::Self *))(v4 + 16))(v7);
    }
    while ( v2 != v3 );
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v8);
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v9);
  v5 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v9, a2);
  if ( glwebtools::IsOperationSuccess(v5) )
    v5 = (glwebtools::Self *)(**(int (***)(int, uint8_t *))a1)(a1, v9);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::Destroy  (binary VA: 0x153c280)
// Original: oi::ItemPrice::~ItemPrice
// ----------------------------------------------------------------------------
void oi::ItemPrice::Destroy(oi::ItemPrice::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096708);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::Destroy_ea153c2e0  (binary VA: 0x153c2e0)
// Original: oi::ItemPrice::~ItemPrice
// ----------------------------------------------------------------------------
void oi::ItemPrice::Destroy_ea153c2e0(oi::ItemPrice::Self *self)
{
  oi::ItemPrice::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::Clear  (binary VA: 0x153c320)
// Original: oi::ItemPrice::Clear
// ----------------------------------------------------------------------------
int oi::ItemPrice::Clear(oi::ItemPrice::Self *self)
{
  int result;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);

  v3 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v3);
  result = (int)(uintptr_t)(v3);
  v2 = v3 - 3;
  if ( v3 - 3 != dword_213B808 && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 10) = 0;
  *(uint64_t *)((char *)self + 12) = 0;
  *((uint8_t *)self + 22) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::ToJsonString  (binary VA: 0x153c3b0)
// Original: oi::ItemPrice::ToJsonString
// ----------------------------------------------------------------------------
int oi::ItemPrice::ToJsonString(int a1, int a2)
{
  void *v2;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v5);
  G4_VCALL<void>(a1, 4, v5);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v4, (glwebtools::JsonWriter::Self *)v5);
  g4_std::string::assign_str(a2, &v4);
  v2 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::write  (binary VA: 0x153c460)
// Original: oi::ItemPrice::write
// ----------------------------------------------------------------------------
int oi::ItemPrice::write(oi::ItemPrice::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  int v3;
  void *v4;
  void *v5;
  char isObject;
  double *v7;
  int v8;
  void *v9;
  void *v10;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v13;
  glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  const glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  glwebtools::Json::Value::Self *v18;
  typedef double *_g4_t_v19;
  typedef double *_g4_t_v20;
  typedef const glwebtools::Json::Value::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef double *_g4_t_v26;
  typedef int _g4_t_v27[4];
  typedef int _g4_t_v28[3];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v22)) > _g4_s3 ? (30u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v23)) > _g4_s4 ? (36u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v24)) > _g4_s5 ? (40u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v25)) > _g4_s6 ? (52u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v26)) > _g4_s7 ? (56u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v27)) > _g4_s8 ? (68u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v28)) > _g4_s9 ? (84u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v29)) > _g4_s10 ? (96u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v30)) > _g4_s11 ? (112u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v31)) > _g4_s12 ? (128u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 30u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "currency", (int)(uintptr_t)(&v22));
  v24 = (char *)self + 4;
  g4_std::string::construct_copy(v27, &v23);
  v2 = (int)(uintptr_t)(v24);
  v27[1] = (int)(uintptr_t)(v24);
  if ( v24[6] != 0 )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v29), (char *)&loc_6 + 1);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v29);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v29);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v31);
    v3 = -2147483646;
    if ( *(uint8_t *)(v2 + 6) != 0 )
      v3 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v31, v2);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
    {
      v16 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v31);
      v17 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v18 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v17, (char **)v27);
      glwebtools::Json::Value::opAssign(v18, v16);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v31);
  }
  v4 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "price", (int)(uintptr_t)(&v22) + 1);
  v26 = (double *)((char *)self + 12);
  g4_std::string::construct_copy(v28, &v25);
  v28[1] = (int)(uintptr_t)(v26);
  if ( *((uint8_t *)v26 + 10) != 0 )
  {
    v19 = v26;
    isObject = glwebtools::JsonWriter::isObject(a2);
    v7 = v19;
    if ( isObject == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v30), (char *)&loc_6 + 1);
      v15 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(v15, (const glwebtools::Json::Value::Self *)v30);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v30);
      v7 = v19;
    }
    v20 = v7;
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v31);
    v8 = -2147483646;
    if ( *((uint8_t *)v20 + 10) != 0 )
      v8 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v31, *v20);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v8) )
    {
      v21 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v31);
      v13 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v14 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v13, (char **)v28);
      glwebtools::Json::Value::opAssign(v14, v21);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v31);
  }
  v9 = (void *)(v28[0] - 12);
  if ( (uint32_t *)(v28[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::read  (binary VA: 0x153c7b0)
// Original: oi::ItemPrice::read
// ----------------------------------------------------------------------------
int oi::ItemPrice::read(long double a1, oi::ItemPrice::Self *self, const glwebtools::JsonReader::Self *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8;
  void *v9;
  const glwebtools::Json::Value::Self *v11;
  const glwebtools::Json::Value::Self *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef void *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[2];
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef double _g4_t_v47;
  typedef uint32_t _g4_t_v48[7];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v21)) > _g4_s8 ? (36u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v22)) > _g4_s9 ? (36u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v23)) > _g4_s10 ? (36u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v24)) > _g4_s11 ? (36u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v25)) > _g4_s12 ? (36u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v26)) > _g4_s13 ? (40u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v27)) > _g4_s14 ? (44u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v28)) > _g4_s15 ? (48u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v29)) > _g4_s16 ? (56u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v30)) > _g4_s17 ? (60u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v31)) > _g4_s18 ? (64u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v32)) > _g4_s19 ? (68u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v33)) > _g4_s20 ? (72u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v34)) > _g4_s21 ? (76u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v35)) > _g4_s22 ? (80u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v36)) > _g4_s23 ? (84u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v37)) > _g4_s24 ? (88u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v38)) > _g4_s25 ? (92u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v39)) > _g4_s26 ? (96u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v40)) > _g4_s27 ? (100u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v41)) > _g4_s28 ? (104u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v42)) > _g4_s29 ? (108u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v43)) > _g4_s30 ? (112u + sizeof(_g4_t_v43)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v44)) > _g4_s31 ? (116u + sizeof(_g4_t_v44)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v45)) > _g4_s32 ? (120u + sizeof(_g4_t_v45)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v46)) > _g4_s33 ? (124u + sizeof(_g4_t_v46)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v47)) > _g4_s34 ? (128u + sizeof(_g4_t_v47)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v48)) > _g4_s35 ? (136u + sizeof(_g4_t_v48)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 124u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 128u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "currency", (int)(uintptr_t)(v28) + 1);
  v34 = (char *)self + 4;
  g4_std::string::construct_copy(&v41, &v33);
  v42 = v34;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(a3, (char **)&v41) )
    {
      v12 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v41);
      v17 = v48;
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v48, v12);
      v16 = &v29;
      v24 = v42;
      v29 = (int)(uintptr_t)(&dword_213B814);
      v8 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v48, (int)(uintptr_t)(&v29));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v8) )
      {
        v8 = 0;
        g4_std::string::assign_str(v24, &v29);
        v24[6] = 1;
      }
      v25 = (void *)(v29 - 12);
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v25);
      }
      v15 = dword_213B808;
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v48);
    }
    else
    {
      v8 = -2147483646;
    }
  }
  else
  {
    v8 = -2147483645;
  }
  v21 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = dword_213B808;
    g4_std::string::Rep::M_destroy(v21);
  }
  v22 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = dword_213B808;
    g4_std::string::Rep::M_destroy(v22);
  }
  if ( v8 != 0 )
  {
    glwebtools::Console::Print();
    G4_VCALL<void>(self, 8, "ItemPrice parse failed [0x%8x] on : %s\n", v8, "reader >> glwebtools::JsonReader::ByName(\"currency\", m_currency)", v13, v14, v15, (char *)self + 4, v16, v17, v18, v22, v26, v27, v28[0], v28[1], v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, LODWORD(v47), HIDWORD(v47), v48[0], v48[1], v48[2], v48[3]);
    return v8;
  }
  else if ( *((uint8_t *)self + 10) != 0 && *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "price", (int)(uintptr_t)(v28) + 2);
    v38 = (char *)self + 12;
    g4_std::string::construct_copy(&v45, &v37);
    v46 = v38;
    v23 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
    {
      v23 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a3, (char **)&v45) )
      {
        v11 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v45);
        v17 = v48;
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v48, v11);
        v20 = v46;
        v23 = glwebtools::JsonReader::read(a1, (glwebtools::JsonReader::Self *)v48, &v47);
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v23) )
        {
          v23 = 0;
          *(double *)v20 = v47;
          v20[10] = 1;
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v48);
      }
    }
    v19 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v9 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    if ( v23 != 0 )
    {
      glwebtools::Console::Print();
      G4_VCALL<void>(self, 8, "ItemPrice parse failed [0x%8x] on : %s\n", v23, "reader >> glwebtools::JsonReader::ByName(\"price\", m_price)", v13, v14, dword_213B808, &v37, (char *)self + 12, v17, v19, v23, v26, v27, v28[0], v28[1], v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, LODWORD(v47), HIDWORD(v47), v48[0], v48[1], v48[2], v48[3]);
      return a8;
    }
    else
    {
      if ( *(double *)((char *)self + 12) < 0.0 )
        return -2147483646;
      return v8;
    }
  }
  else
  {
    return -2147483646;
  }
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::GetPrice  (binary VA: 0x153cc90)
// Original: oi::ItemPrice::GetPrice
// ----------------------------------------------------------------------------
long double oi::ItemPrice::GetPrice(oi::ItemPrice::Self *self)
{
  long double result; // fst7

  result = 0.0;
  if ( *((uint8_t *)self + 22) != 0 )
  {
    result = *(double *)((char *)self + 12);
    if ( (int)*(double *)((char *)self + 12) <= 0 )
      return 0.0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::GetCurrency  (binary VA: 0x153ccc0)
// Original: oi::ItemPrice::GetCurrency
// ----------------------------------------------------------------------------
int oi::ItemPrice::GetCurrency(oi::ItemPrice::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
  {
    result = *((uint32_t *)self + 1);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::Print  (binary VA: 0x153cce0)
// Original: oi::ItemPrice::Print
// ----------------------------------------------------------------------------
void oi::ItemPrice::Print(oi::ItemPrice::Self *self)
{
  oi::ItemPrice::Self *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  char *v6;
  int64_t v7; // xmm0_8
  char *v8;
  typedef uint32_t _g4_t_v9[4];
  typedef uint32_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v13)) > _g4_s4 ? (40u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v14[3] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  glwebtools::Console::Print();
  if ( *((uint8_t *)v1 + 10) != 0 && *(uint32_t *)(*((uint32_t *)v1 + 1) - 12) != 0 )
  {
    g4_std::string::construct_copy(&v11, (char *)v1 + 4);
    g4_std::string::construct_copy(v10, &v11);
    g4_std::string::construct_copy(v9, v10);
    g4_std::string::construct_copy(v14, v9);
    g4_std::string::construct_copy(&v12, v14);
    v2 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    v3 = (void *)(v9[0] - 12);
    if ( (uint32_t *)(v9[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v10[0] - 12);
    if ( (uint32_t *)(v10[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    glwebtools::Console::Print();
    v6 = v12 - 12;
    if ( v12 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v12 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
  }
  if ( *((uint8_t *)v1 + 22) != 0 )
  {
    v7 = *(int64_t *)((char *)v1 + 12);
    if ( (int)*(double *)&v7 > 0 )
    {
      glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v13, v7, 2);
      glwebtools::Console::Print();
      v8 = v13 - 12;
      if ( v13 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v13 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPrice::totalSize  (binary VA: 0x153cf40)
// Original: oi::ItemPrice::totalSize
// ----------------------------------------------------------------------------
int oi::ItemPrice::totalSize(oi::ItemPrice::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
    result = *(uint32_t *)(*((uint32_t *)self + 1) - 12);
  if ( *((uint8_t *)self + 22) != 0 && (int)*(double *)((char *)self + 12) > 0 )
    result += 8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::Size  (binary VA: 0x153cf70)
// Original: oi::ItemPriceArray::Size
// ----------------------------------------------------------------------------
int oi::ItemPriceArray::Size(oi::ItemPriceArray::Self *self)
{
  return -1431655765 * ((*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 3);
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::Clear  (binary VA: 0x153cf90)
// Original: oi::ItemPriceArray::Clear
// ----------------------------------------------------------------------------
uint32_t * oi::ItemPriceArray::Clear(oi::ItemPriceArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;

  v1 = *((uint32_t **)self + 2);
  v6 = *((uint32_t **)self + 1);
  if ( v6 != v1 )
  {
    v2 = *((uint32_t **)self + 1);
    do
    {
      v3 = *v2;
      v5 = v2;
      v2 += 6;
      (*(void (**)(uint32_t *))(v3 + 16))(v5);
    }
    while ( v1 != v2 );
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v6);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::GetCurrency  (binary VA: 0x153cfd0)
// Original: oi::ItemPriceArray::GetCurrency
// ----------------------------------------------------------------------------
int oi::ItemPriceArray::GetCurrency(oi::ItemPriceArray::Self *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 1);
  result = 0;
  if ( a2 < -1431655765 * ((*((uint32_t *)self + 2) - v2) >> 3) )
    return oi::ItemPrice::GetCurrency((oi::ItemPrice::Self *)(v2 + 24 * a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::GetPrice  (binary VA: 0x153d030)
// Original: oi::ItemPriceArray::GetPrice
// ----------------------------------------------------------------------------
long double oi::ItemPriceArray::GetPrice(oi::ItemPriceArray::Self *self, unsigned int a2)
{
  long double result; // fst7
  int v3;

  result = 0.0;
  v3 = *((uint32_t *)self + 1);
  if ( a2 < -1431655765 * ((*((uint32_t *)self + 2) - v3) >> 3) )
    return oi::ItemPrice::GetPrice((oi::ItemPrice::Self *)(v3 + 24 * a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::GetPrice  (binary VA: 0x153d080)
// Original: oi::ItemPriceArray::GetPrice
// ----------------------------------------------------------------------------
long double oi::ItemPriceArray::GetPrice(int a1, char **a2)
{
  long double result; // fst7
  char *v3;
  int v4;
  int v5;
  unsigned int v6;
  const char *s1;
  char *s2;

  result = 0.0;
  v3 = *a2;
  if ( *a2 != nullptr )
  {
    v4 = *(uint32_t *)(a1 + 4);
    if ( -1431655765 * ((*(uint32_t *)(a1 + 8) - v4) >> 3) != 0 )
    {
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        s2 = v3;
        s1 = (const char *)oi::ItemPrice::GetCurrency((oi::ItemPrice::Self *)(v5 + v4));
        if ( strcmp(s1, s2) == 0 )
          return oi::ItemPrice::GetPrice((oi::ItemPrice::Self *)(*(uint32_t *)(a1 + 4) + v5));
        v4 = *(uint32_t *)(a1 + 4);
        ++v6;
        v5 += 24;
        if ( v6 >= -1431655765 * ((*(uint32_t *)(a1 + 8) - v4) >> 3) )
          break;
        v3 = *a2;
      }
      return 0.0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::GetItemPrice  (binary VA: 0x153d130)
// Original: oi::ItemPriceArray::GetItemPrice
// ----------------------------------------------------------------------------
unsigned int oi::ItemPriceArray::GetItemPrice(oi::ItemPriceArray::Self *self, unsigned int a2)
{
  return *((uint32_t *)self + 1) + 24 * a2;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::opIndex  (binary VA: 0x153d150)
// Original: oi::ItemPriceArray::operator[]
// ----------------------------------------------------------------------------
unsigned int oi::ItemPriceArray::opIndex(oi::ItemPriceArray::Self *self, unsigned int a2)
{
  return oi::ItemPriceArray::GetItemPrice(self, a2);
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::totalSize  (binary VA: 0x153d180)
// Original: oi::ItemPriceArray::totalSize
// ----------------------------------------------------------------------------
int oi::ItemPriceArray::totalSize(oi::ItemPriceArray::Self *self)
{
  int v1;
  int v2;
  unsigned int v3;
  int v4;
  oi::ItemPrice::Self *v6;
  int v7;

  v7 = 0;
  v1 = *((uint32_t *)self + 1);
  if ( -1431655765 * ((*((uint32_t *)self + 2) - v1) >> 3) != 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v6 = (oi::ItemPrice::Self *)(v2 + v1);
      v2 += 24;
      v4 = oi::ItemPrice::totalSize(v6);
      v1 = *((uint32_t *)self + 1);
      v7 += v4;
    }
    while ( v3 < -1431655765 * ((*((uint32_t *)self + 2) - v1) >> 3) );
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: oi::ItemPriceArray::read  (binary VA: 0x153d1f0)
// Original: oi::ItemPriceArray::read
// ----------------------------------------------------------------------------
int oi::ItemPriceArray::read(long double a1, oi::ItemPriceArray::Self *self, const glwebtools::JsonReader::Self *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  int v7;
  glwebtools::Self *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef bool _g4_t_IsOperationSuccess;
  typedef size_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef const glwebtools::JsonReader::Self *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef oi::ItemPriceArray::Self *_g4_t_v33;
  typedef char _g4_t_v34[16];
  typedef int _g4_t_v35[2];
  typedef uint8_t _g4_t_v36[8];
  typedef int _g4_t_v37[4];
  typedef uint32_t (**_g4_t_v38)(oi::ItemPrice::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v39;
  typedef char _g4_t_v40;
  typedef int64_t _g4_t_v41 __attribute__((aligned(1)));
  typedef char _g4_t_v42;
  typedef oi::ItemPriceArray::Self **_g4_t_v43;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v24)) > _g4_s7 ? (56u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v25)) > _g4_s8 ? (64u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_IsOperationSuccess)) > _g4_s9 ? (72u + sizeof(_g4_t_IsOperationSuccess)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v27)) > _g4_s10 ? (76u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v28)) > _g4_s11 ? (80u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v29)) > _g4_s12 ? (84u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v30)) > _g4_s13 ? (92u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v31)) > _g4_s14 ? (96u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v32)) > _g4_s15 ? (96u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v33)) > _g4_s16 ? (100u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v34)) > _g4_s17 ? (104u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v35)) > _g4_s18 ? (120u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v36)) > _g4_s19 ? (128u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v37)) > _g4_s20 ? (136u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v38)) > _g4_s21 ? (152u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v39)) > _g4_s22 ? (156u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (162u + sizeof(_g4_t_v40)) > _g4_s23 ? (162u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v41)) > _g4_s24 ? (164u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (174u + sizeof(_g4_t_v42)) > _g4_s25 ? (174u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v43)) > _g4_s26 ? (192u + sizeof(_g4_t_v43)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_IsOperationSuccess &IsOperationSuccess = *reinterpret_cast<_g4_t_IsOperationSuccess *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 100u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 104u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 136u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 152u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 156u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 162u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 164u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 174u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 192u);

  v43 = &self;
  v33 = self;
  v30 = a3;
  v3 = *((uint32_t **)self + 2);
  v31 = *((uint32_t **)self + 1);
  if ( v31 != v3 )
  {
    v4 = *((uint32_t **)self + 1);
    do
    {
      v5 = *v4;
      v17 = v4;
      v4 += 6;
      (*(void (**)(uint32_t *))(v5 + 16))(v17);
    }
    while ( v3 != v4 );
  }
  *((uint32_t *)v33 + 2) = (uint32_t)(uintptr_t)(v31);
  if ( (uint8_t)glwebtools::JsonReader::isArray(v30) != 0 )
  {
    v6 = glwebtools::JsonReader::size(v30);
    if ( v6 > 0xAAAAAAA )
      sub_1900180("vector::reserve");
    v7 = *((uint32_t *)v33 + 1);
    if ( v6 > -1431655765 * ((*((uint32_t *)v33 + 3) - v7) >> 3) )
    {
      v27 = 0;
      v29 = *((uint32_t *)v33 + 2);
      v32 = 0;
      v28 = -1431655765 * ((v29 - v7) >> 3);
      if ( v6 != 0 )
      {
        v25 = *((uint32_t *)v33 + 1);
        v27 = 24 * v6;
        v32 = sub_4EBE70(24 * v6, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v7 = v25;
      }
      if ( v7 != v29 )
      {
        v12 = v7;
        v13 = v32;
        do
        {
          if ( v13 != 0 )
          {
            v24 = v13 - v32;
            *(uint32_t *)v13 = ((uint32_t)(uintptr_t)&off_2096708);
            *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v13 + 4, v12 + 4);
            *(uint8_t *)(v24 + v32 + 4 + 6) = *(uint8_t *)(v12 + 10);
            *(uint64_t *)(v13 + 12) = *(uint64_t *)(v12 + 12);
            *(uint8_t *)(v32 + v24 + 22) = *(uint8_t *)(v12 + 22);
          }
          v12 += 24;
          v13 += 24;
        }
        while ( v29 != v12 );
      }
      v14 = *((uint32_t **)v33 + 2);
      v15 = *((uint32_t **)v33 + 1);
      if ( v14 != v15 )
      {
        do
        {
          v16 = *v15;
          v18 = v15;
          v15 += 6;
          (*(void (**)(uint32_t *))(v16 + 16))(v18);
        }
        while ( v14 != v15 );
        v15 = *((uint32_t **)v33 + 1);
      }
      if ( v15 != nullptr )
        sub_4EBEE0((int)(uintptr_t)(v15));
      *((uint32_t *)v33 + 1) = v32;
      *((uint32_t *)v33 + 2) = v32 + 24 * v28;
      *((uint32_t *)v33 + 3) = v32 + v27;
    }
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v35);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v36);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v35,
                              (const glwebtools::JsonReader::Iterator::Self *)v36) == 0 )
        break;
      v40 = 0;
      v42 = 0;
      v38 = (uint32_t (**)(oi::ItemPrice::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096708));
      v39 = &dword_213B814;
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v37,
        (glwebtools::Json::ValueIteratorBase::Self *)v35);
      v8 = (glwebtools::Self *)oi::ItemPrice::read(
                           a1,
                           (oi::ItemPrice::Self *)&v38,
                           (const glwebtools::JsonReader::Self *)v37,
                           v19,
                           v20,
                           v21,
                           v22,
                           v23);
      IsOperationSuccess = glwebtools::IsOperationSuccess(v8);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v37);
      if ( IsOperationSuccess )
      {
        v9 = *((uint32_t *)v33 + 2);
        if ( v9 == *((uint32_t *)v33 + 3) )
        {
          g4_std::vector_oi_ItemPrice_glwebtools_d78ead::M_insert_aux(
            (char *)v33 + 4,
            v9,
            &v38);
        }
        else
        {
          v10 = 0;
          if ( v9 != 0 )
          {
            *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2096708);
            *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v9 + 4, &v39);
            *(uint8_t *)(v9 + 10) = v40;
            *(uint64_t *)(v9 + 12) = v41;
            *(uint8_t *)(v9 + 22) = v42;
            v10 = *((uint32_t *)v33 + 2);
          }
          *((uint32_t *)v33 + 2) = v10 + 24;
        }
      }
      oi::ItemPrice::Destroy((oi::ItemPrice::Self *)&v38);
      v19 = 0;
      glwebtools::JsonReader::Iterator::opInc(
        (glwebtools::JsonReader::Iterator::Self *)v34,
        (glwebtools::JsonReader::Iterator::Self *)v35);
    }
    return 0;
  }
  else
  {
    glwebtools::Console::Print();
    return -2147483646;
  }
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::read  (binary VA: 0x153dad0)
// Original: oi::PromotionOI::read
// ----------------------------------------------------------------------------
int oi::PromotionOI::read(int (***a1)(uint32_t, uint8_t *), int a2)
{
  int v2;
  uint8_t v4[16];

  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v4, a2);
  v2 = (**a1)((uint32_t)(uintptr_t)(a1), v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::Destroy  (binary VA: 0x153db30)
// Original: oi::PromotionOI::~PromotionOI
// ----------------------------------------------------------------------------
void oi::PromotionOI::Destroy(oi::PromotionOI::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096750);
  v1 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::Destroy_ea153dbd0  (binary VA: 0x153dbd0)
// Original: oi::PromotionOI::~PromotionOI
// ----------------------------------------------------------------------------
void oi::PromotionOI::Destroy_ea153dbd0(oi::PromotionOI::Self *self)
{
  oi::PromotionOI::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::Clear  (binary VA: 0x153dc10)
// Original: oi::PromotionOI::Clear
// ----------------------------------------------------------------------------
int oi::PromotionOI::Clear(oi::PromotionOI::Self *self)
{
  uint32_t *v1;
  int result;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  v4 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v4);
  v1 = v4 - 3;
  if ( v4 - 3 != dword_213B808 && __sync_fetch_and_add(v4 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 10) = 0;
  v5 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 12, &v5);
  result = (int)(uintptr_t)(v5);
  v3 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  *((uint8_t *)self + 18) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::read  (binary VA: 0x153dce0)
// Original: oi::PromotionOI::read
// ----------------------------------------------------------------------------
int oi::PromotionOI::read(oi::PromotionOI::Self *self, const glwebtools::JsonReader::Self *a2)
{
  const glwebtools::Json::Value::Self *v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  void *v6;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Self *v8;
  void *v9;
  void *v10;
  void *v11;
  int v12;
  typedef char *_g4_t_v14;
  typedef oi::PromotionOI::Self *_g4_t_v15;
  typedef oi::PromotionOI::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef oi::PromotionOI::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef oi::PromotionOI::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint32_t _g4_t_v28[10];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v20)) > _g4_s6 ? (52u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v21)) > _g4_s7 ? (64u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v22)) > _g4_s8 ? (68u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v23)) > _g4_s9 ? (80u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v24)) > _g4_s10 ? (84u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v25)) > _g4_s11 ? (96u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v26)) > _g4_s12 ? (100u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v27)) > _g4_s13 ? (112u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v28)) > _g4_s14 ? (128u + sizeof(_g4_t_v28)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);

  v28[6] = (uint32_t)(uintptr_t)(&self);
  v15 = self;
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v27, a2, "promotion");
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v27) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "end_date", (int)(uintptr_t)(&v17));
    v20 = (char *)v15 + 4;
    g4_std::string::construct_copy(&v23, &v19);
    v24 = v20;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v27) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v27) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v27, (char **)&v23) )
    {
      v2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                              (glwebtools::Json::Value::Self *)v27,
                                              (const char **)&v23);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v28, v2);
      v18[0] = (int)(uintptr_t)(&dword_213B814);
      v14 = v24;
      v3 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v28, (int)(uintptr_t)(v18));
      if ( glwebtools::IsOperationSuccess(v3) )
      {
        g4_std::string::assign_str(v14, v18);
        v14[6] = 1;
      }
      v4 = (void *)(v18[0] - 12);
      if ( (uint32_t *)(v18[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v28);
    }
    v5 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "description", (int)(uintptr_t)(&v17) + 1);
    v22 = (oi::PromotionOI::Self *)((char *)v15 + 12);
    g4_std::string::construct_copy(&v25, &v21);
    v26 = v22;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v27) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v27) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v27, (char **)&v25) )
    {
      v7 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                              (glwebtools::Json::Value::Self *)v27,
                                              (const char **)&v25);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v28, v7);
      v18[0] = (int)(uintptr_t)(&dword_213B814);
      v16 = v26;
      v8 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v28, (int)(uintptr_t)(v18));
      if ( glwebtools::IsOperationSuccess(v8) )
      {
        g4_std::string::assign_str(v16, v18);
        *((uint8_t *)v16 + 6) = 1;
      }
      v9 = (void *)(v18[0] - 12);
      if ( (uint32_t *)(v18[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v28);
    }
    v10 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) == dword_213B808 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 0;
      if ( __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v11);
    }
  }
  else
  {
    v12 = -2147479542;
    oi::PromotionOI::Clear(v15);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v27);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::GetEndTime  (binary VA: 0x153e110)
// Original: oi::PromotionOI::GetEndTime
// ----------------------------------------------------------------------------
int oi::PromotionOI::GetEndTime(oi::PromotionOI::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
  {
    result = *((uint32_t *)self + 1);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::GetDescription  (binary VA: 0x153e130)
// Original: oi::PromotionOI::GetDescription
// ----------------------------------------------------------------------------
int oi::PromotionOI::GetDescription(oi::PromotionOI::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 18) != 0 )
  {
    result = *((uint32_t *)self + 3);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::PromotionOI::Print  (binary VA: 0x153e150)
// Original: oi::PromotionOI::Print
// ----------------------------------------------------------------------------
void oi::PromotionOI::Print(oi::PromotionOI::Self *self)
{
  if ( *((uint8_t *)self + 18) != 0 && *(uint32_t *)(*((uint32_t *)self + 3) - 12) != 0 )
    glwebtools::Console::Print();
  if ( *((uint8_t *)self + 10) != 0 && *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0 )
    glwebtools::Console::Print();
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::write  (binary VA: 0x153e220)
// Original: oi::StoreOfflineItem::write
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::write()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::GetItemCount  (binary VA: 0x153e230)
// Original: oi::StoreOfflineItemArray::GetItemCount
// ----------------------------------------------------------------------------
int oi::StoreOfflineItemArray::GetItemCount(oi::StoreOfflineItemArray::Self *self)
{
  return -286331153 * ((*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 2);
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::GetItem  (binary VA: 0x153e250)
// Original: oi::StoreOfflineItemArray::GetItem
// ----------------------------------------------------------------------------
unsigned int oi::StoreOfflineItemArray::GetItem(oi::StoreOfflineItemArray::Self *self, unsigned int a2)
{
  return *((uint32_t *)self + 1) + 60 * a2;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::Clear  (binary VA: 0x153e260)
// Original: oi::StoreOfflineItemArray::Clear
// ----------------------------------------------------------------------------
uint32_t * oi::StoreOfflineItemArray::Clear(oi::StoreOfflineItemArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;

  v1 = *((uint32_t **)self + 2);
  v6 = *((uint32_t **)self + 1);
  if ( v6 != v1 )
  {
    v2 = *((uint32_t **)self + 1);
    do
    {
      v3 = *v2;
      v5 = v2;
      v2 += 15;
      (*(void (**)(uint32_t *))(v3 + 8))(v5);
    }
    while ( v1 != v2 );
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v6);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::opIndex  (binary VA: 0x153e2a0)
// Original: oi::StoreOfflineItemArray::operator[]
// ----------------------------------------------------------------------------
int oi::StoreOfflineItemArray::opIndex(oi::StoreOfflineItemArray::Self *self, unsigned int a2)
{
  return G4_VCALL<int>(self, 12, a2);
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::read  (binary VA: 0x153e2c0)
// Original: oi::StoreOfflineItemArray::read
// ----------------------------------------------------------------------------
glwebtools::Self * oi::StoreOfflineItemArray::read(int (***a1)(uint32_t, uint8_t *), int a2)
{
  glwebtools::Self *v2;
  uint8_t v4[28];

  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v4);
  v2 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v4, a2);
  if ( glwebtools::IsOperationSuccess(v2) )
    v2 = (glwebtools::Self *)(**a1)((uint32_t)(uintptr_t)(a1), v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::Destroy  (binary VA: 0x153e340)
// Original: oi::StoreOfflineItemArray::~StoreOfflineItemArray
// ----------------------------------------------------------------------------
void oi::StoreOfflineItemArray::Destroy(oi::StoreOfflineItemArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;

  v1 = *((uint32_t **)self + 2);
  v2 = *((uint32_t **)self + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20967A8);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v2;
      v4 = v2;
      v2 += 15;
      (*(void (**)(uint32_t *))(v3 + 8))(v4);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t **)self + 1);
  }
  if ( v2 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v2));
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::Destroy_ea153e3a0  (binary VA: 0x153e3a0)
// Original: oi::StoreOfflineItemArray::~StoreOfflineItemArray
// ----------------------------------------------------------------------------
void oi::StoreOfflineItemArray::Destroy_ea153e3a0(oi::StoreOfflineItemArray::Self *self)
{
  oi::StoreOfflineItemArray::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::opIndex  (binary VA: 0x153e3e0)
// Original: oi::StoreOfflineItemArray::operator[]
// ----------------------------------------------------------------------------
int oi::StoreOfflineItemArray::opIndex(int a1, int a2)
{
  int (*v2)(int, uint32_t *);
  int result;
  void *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v2 = *(int (**)(int, uint32_t *))(*(uint32_t *)a1 + 16);
  g4_std::string::construct_copy(v6, a2);
  result = v2(a1, v6);
  v4 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = result;
    g4_std::string::Rep::M_destroy(v4);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::Destroy  (binary VA: 0x153e470)
// Original: oi::StoreOfflineItem::~StoreOfflineItem
// ----------------------------------------------------------------------------
void oi::StoreOfflineItem::Destroy(oi::StoreOfflineItem::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096778);
  oi::BillingMethodArray::Destroy((oi::StoreOfflineItem::Self *)((char *)self + 44));
  v1 = *((uint32_t **)self + 9);
  v2 = *((uint32_t **)self + 8);
  if ( v1 != v2 )
  {
    do
    {
      v3 = (uint32_t *)(*v2 - 12);
      if ( v3 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v2 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v3);
      ++v2;
    }
    while ( v1 != v2 );
    v2 = *((uint32_t **)self + 8);
  }
  if ( v2 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v2));
  v4 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::Destroy_ea153e540  (binary VA: 0x153e540)
// Original: oi::StoreOfflineItem::~StoreOfflineItem
// ----------------------------------------------------------------------------
void oi::StoreOfflineItem::Destroy_ea153e540(oi::StoreOfflineItem::Self *self)
{
  oi::StoreOfflineItem::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::Clear  (binary VA: 0x153e580)
// Original: oi::StoreOfflineItem::Clear
// ----------------------------------------------------------------------------
uint32_t * oi::StoreOfflineItem::Clear(oi::StoreOfflineItem::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v8)) > _g4_s1 ? (32u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v8 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v8);
  v1 = v8 - 3;
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  v2 = *((uint32_t **)self + 8);
  v3 = *((uint32_t **)self + 9);
  *((uint8_t *)self + 10) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 18) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint8_t *)self + 26) = 0;
  v7 = v2;
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
  }
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v7);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::ToJsonString  (binary VA: 0x153e670)
// Original: oi::StoreOfflineItem::ToJsonString
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::ToJsonString(int a1, int a2)
{
  void *v2;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v5);
  G4_VCALL<void>(a1, 4, v5);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v4, (glwebtools::JsonWriter::Self *)v5);
  g4_std::string::assign_str(a2, &v4);
  v2 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetName  (binary VA: 0x153e720)
// Original: oi::StoreOfflineItem::GetName
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetName(oi::StoreOfflineItem::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
  {
    result = *((uint32_t *)self + 1);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::GetItem  (binary VA: 0x153e740)
// Original: oi::StoreOfflineItemArray::GetItem
// ----------------------------------------------------------------------------
int oi::StoreOfflineItemArray::GetItem(int a1, char **a2)
{
  char *v2;
  int v3;
  int result;
  int v5;
  unsigned int v6;
  const char *s1;
  char *s2;

  v2 = *a2;
  if ( *a2 == nullptr )
    return 0;
  v3 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( -286331153 * ((*(uint32_t *)(a1 + 8) - v3) >> 2) != 0 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      s2 = v2;
      s1 = (const char *)oi::StoreOfflineItem::GetName((oi::StoreOfflineItem::Self *)(v5 + v3));
      if ( strcmp(s1, s2) == 0 )
        break;
      v3 = *(uint32_t *)(a1 + 4);
      ++v6;
      v5 += 60;
      if ( v6 >= -286331153 * ((*(uint32_t *)(a1 + 8) - v3) >> 2) )
        return 0;
      v2 = *a2;
    }
    return v5 + *(uint32_t *)(a1 + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetAmount  (binary VA: 0x153e7f0)
// Original: oi::StoreOfflineItem::GetAmount
// ----------------------------------------------------------------------------
long double oi::StoreOfflineItem::GetAmount(oi::StoreOfflineItem::Self *self)
{
  long double result; // fst7
  int v2;

  result = 0.0;
  if ( *((uint8_t *)self + 18) != 0 )
  {
    v2 = *((uint32_t *)self + 3);
    if ( v2 > 0 )
      return (double)v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetRegularAmount  (binary VA: 0x153e820)
// Original: oi::StoreOfflineItem::GetRegularAmount
// ----------------------------------------------------------------------------
long double oi::StoreOfflineItem::GetRegularAmount(oi::StoreOfflineItem::Self *self)
{
  int v1;
  long double result; // fst7

  v1 = *((uint32_t *)self + 5);
  if ( *((uint8_t *)self + 26) == 0 )
    return (double)v1;
  result = 0.0;
  if ( v1 > 0 )
    return (double)v1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::HasAmountPromotion  (binary VA: 0x153e860)
// Original: oi::StoreOfflineItem::HasAmountPromotion
// ----------------------------------------------------------------------------
bool oi::StoreOfflineItem::HasAmountPromotion(oi::StoreOfflineItem::Self *self)
{
  bool result;
  int v2;

  result = false;
  if ( *((uint8_t *)self + 26) != 0 )
  {
    v2 = *((uint32_t *)self + 5);
    if ( v2 > 0 )
      return *((uint32_t *)self + 3) > v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetAmountReductionPercent  (binary VA: 0x153e880)
// Original: oi::StoreOfflineItem::GetAmountReductionPercent
// ----------------------------------------------------------------------------
long double oi::StoreOfflineItem::GetAmountReductionPercent(oi::StoreOfflineItem::Self *self)
{
  double v1; // xmm0_8
  double RegularAmount;
  double Amount;

  v1 = 0.0;
  if ( oi::StoreOfflineItem::HasAmountPromotion(self) )
  {
    RegularAmount = oi::StoreOfflineItem::GetRegularAmount(self);
    Amount = oi::StoreOfflineItem::GetAmount(self);
    return (RegularAmount - Amount) * 100.0 / (double)oi::StoreOfflineItem::GetRegularAmount(self);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetPrices  (binary VA: 0x153e900)
// Original: oi::StoreOfflineItem::GetPrices
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetPrices(oi::StoreOfflineItem::Self *self, const oi::BillingMethod::Self *a2)
{
  return (int)(uintptr_t)(oi::BillingMethod::GetItemPrices(a2));
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetRegularPrices  (binary VA: 0x153e930)
// Original: oi::StoreOfflineItem::GetRegularPrices
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetRegularPrices(oi::StoreOfflineItem::Self *self, const oi::BillingMethod::Self *a2)
{
  return (int)(uintptr_t)(oi::BillingMethod::GetItemRegularPrices(a2));
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::HasPricePromotion  (binary VA: 0x153e960)
// Original: oi::StoreOfflineItem::HasPricePromotion
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::HasPricePromotion(oi::StoreOfflineItem::Self *self, const oi::BillingMethod::Self *a2)
{
  oi::ItemPriceArray::Self *ItemPrices;
  int v3;
  oi::ItemPriceArray::Self *ItemRegularPrices;
  oi::ItemPriceArray::Self *v6;
  const char *s2;
  oi::ItemPriceArray::Self *v8;
  const char *s1;
  oi::ItemPriceArray::Self *v10;
  oi::ItemPriceArray::Self *v11;
  int v12;
  double Price;

  ItemPrices = (oi::ItemPriceArray::Self *)oi::BillingMethod::GetItemPrices(a2);
  v3 = 0;
  if ( oi::ItemPriceArray::Size(ItemPrices) == 1 )
  {
    ItemRegularPrices = (oi::ItemPriceArray::Self *)oi::BillingMethod::GetItemRegularPrices(a2);
    if ( oi::ItemPriceArray::Size(ItemRegularPrices) == 1 )
    {
      v6 = (oi::ItemPriceArray::Self *)oi::BillingMethod::GetItemRegularPrices(a2);
      s2 = (const char *)oi::ItemPriceArray::GetCurrency(v6, 0);
      v8 = (oi::ItemPriceArray::Self *)oi::BillingMethod::GetItemPrices(a2);
      s1 = (const char *)oi::ItemPriceArray::GetCurrency(v8, 0);
      if ( strcmp(s1, s2) == 0 )
      {
        v10 = (oi::ItemPriceArray::Self *)oi::BillingMethod::GetItemPrices(a2);
        Price = oi::ItemPriceArray::GetPrice(v10, 0);
        v11 = (oi::ItemPriceArray::Self *)oi::BillingMethod::GetItemRegularPrices(a2);
        LOBYTE(v12) = (double)oi::ItemPriceArray::GetPrice(v11, 0) > Price;
        return v12;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetPriceReductionPercent  (binary VA: 0x153ea60)
// Original: oi::StoreOfflineItem::GetPriceReductionPercent
// ----------------------------------------------------------------------------
long double oi::StoreOfflineItem::GetPriceReductionPercent(oi::StoreOfflineItem::Self *self, const oi::BillingMethod::Self *a2)
{
  double v2; // xmm0_8
  oi::ItemPriceArray::Self *RegularPrices;
  oi::ItemPriceArray::Self *Prices;
  oi::ItemPriceArray::Self *v5;
  double Price;
  double v8;

  v2 = 0.0;
  if ( (uint8_t)oi::StoreOfflineItem::HasPricePromotion(self, a2) != 0 )
  {
    RegularPrices = (oi::ItemPriceArray::Self *)oi::StoreOfflineItem::GetRegularPrices(self, a2);
    Price = oi::ItemPriceArray::GetPrice(RegularPrices, 0);
    Prices = (oi::ItemPriceArray::Self *)oi::StoreOfflineItem::GetPrices(self, a2);
    v8 = oi::ItemPriceArray::GetPrice(Prices, 0);
    v5 = (oi::ItemPriceArray::Self *)oi::StoreOfflineItem::GetRegularPrices(self, a2);
    return (Price - v8) * 100.0 / (double)oi::ItemPriceArray::GetPrice(v5, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetCategoryCount  (binary VA: 0x153eb30)
// Original: oi::StoreOfflineItem::GetCategoryCount
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetCategoryCount(oi::StoreOfflineItem::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetCategory  (binary VA: 0x153eb40)
// Original: oi::StoreOfflineItem::GetCategory
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetCategory(oi::StoreOfflineItem::Self *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 8);
  result = 0;
  if ( a2 < (*((uint32_t *)self + 9) - v2) >> 2 )
    return *(uint32_t *)(v2 + 4 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetBillingMethodCount  (binary VA: 0x153eb60)
// Original: oi::StoreOfflineItem::GetBillingMethodCount
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetBillingMethodCount(oi::StoreOfflineItem::Self *self)
{
  return oi::BillingMethodArray::Size((oi::StoreOfflineItem::Self *)((char *)self + 44));
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetBillingMethod  (binary VA: 0x153eb90)
// Original: oi::StoreOfflineItem::GetBillingMethod
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetBillingMethod(oi::StoreOfflineItem::Self *self, unsigned int a2)
{
  return oi::BillingMethodArray::GetBillingMethod((oi::StoreOfflineItem::Self *)((char *)self + 44), a2);
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::isPromotionSet  (binary VA: 0x153ebc0)
// Original: oi::StoreOfflineItemArray::isPromotionSet
// ----------------------------------------------------------------------------
int oi::StoreOfflineItemArray::isPromotionSet(oi::StoreOfflineItemArray::Self *self)
{
  unsigned int v1;
  oi::StoreOfflineItem::Self *v2;
  unsigned int i;
  oi::StoreOfflineItem::Self *v4;
  oi::StoreOfflineItem::Self *v5;
  oi::StoreOfflineItem::Self *v6;
  oi::BillingMethod::Self *BillingMethod;
  uint8_t v9;

  v1 = 0;
  v9 = 0;
  if ( G4_VCALL<int>(self, 8) == 0 )
    return v9;
  while ( 1 )
  {
    v2 = (oi::StoreOfflineItem::Self *)G4_VCALL<int>(self, 12, v1);
    if ( oi::StoreOfflineItem::HasAmountPromotion(v2) )
      return 1;
    for ( i = 0; ; ++i )
    {
      v6 = (oi::StoreOfflineItem::Self *)G4_VCALL<int>(self, 12, v1);
      if ( i >= oi::StoreOfflineItem::GetBillingMethodCount(v6) )
      {
        ++v1;
        goto LABEL_8;
      }
      v4 = (oi::StoreOfflineItem::Self *)G4_VCALL<int>(self, 12, v1);
      BillingMethod = (oi::BillingMethod::Self *)oi::StoreOfflineItem::GetBillingMethod(v4, i);
      v5 = (oi::StoreOfflineItem::Self *)G4_VCALL<int>(self, 12, v1);
      if ( (uint8_t)oi::StoreOfflineItem::HasPricePromotion(v5, BillingMethod) != 0 )
        break;
    }
    v9 = 1;
    ++v1;
LABEL_8:
    if ( v1 >= G4_VCALL<int>(self, 8) )
      return v9;
  }
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::GetBillingMethod  (binary VA: 0x153ecb0)
// Original: oi::StoreOfflineItem::GetBillingMethod
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::GetBillingMethod(oi::StoreOfflineItem::Self *self, char *a2, char *a3)
{
  int result;
  void *v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v10)) > _g4_s4 ? (32u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), a3, (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), a2, (int)(uintptr_t)(&v8));
  result = oi::BillingMethodArray::GetBillingMethod((char *)self + 44, &v10, v9);
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = result;
    g4_std::string::Rep::M_destroy(v4);
    result = v6;
  }
  v5 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v7 = result;
    g4_std::string::Rep::M_destroy(v5);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::Print  (binary VA: 0x153eda0)
// Original: oi::StoreOfflineItem::Print
// ----------------------------------------------------------------------------
unsigned int oi::StoreOfflineItem::Print(oi::StoreOfflineItem::Self *self)
{
  oi::StoreOfflineItem::Self *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  char *v6;
  char *v7;
  char *v8;
  unsigned int v9;
  unsigned int v10;
  oi::BillingMethodArray::Self *v11;
  oi::BillingMethod::Self *v12;
  unsigned int result;
  typedef uint32_t _g4_t_v14[4];
  typedef uint32_t _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[4];
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef uint32_t _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v15)) > _g4_s1 ? (20u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v16)) > _g4_s2 ? (36u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v17)) > _g4_s3 ? (52u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v18)) > _g4_s4 ? (56u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v19)) > _g4_s5 ? (60u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v20)) > _g4_s6 ? (64u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  v20[3] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  glwebtools::Console::Print();
  if ( *((uint8_t *)v1 + 10) != 0 && *(uint32_t *)(*((uint32_t *)v1 + 1) - 12) != 0 )
  {
    g4_std::string::construct_copy(v16, (char *)v1 + 4);
    g4_std::string::construct_copy(v15, v16);
    g4_std::string::construct_copy(v14, v15);
    g4_std::string::construct_copy(v20, v14);
    g4_std::string::construct_copy(&v17, v20);
    v2 = (void *)(v20[0] - 12);
    if ( (uint32_t *)(v20[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    v3 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v15[0] - 12);
    if ( (uint32_t *)(v15[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v16[0] - 12);
    if ( (uint32_t *)(v16[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    glwebtools::Console::Print();
    v6 = v17 - 12;
    if ( v17 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v17 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
  }
  if ( *((uint8_t *)v1 + 18) != 0 && *((int *)v1 + 3) > 0 )
  {
    glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v18, *((uint32_t *)v1 + 3));
    glwebtools::Console::Print();
    v7 = v18 - 12;
    if ( v18 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v18 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v7);
  }
  if ( *((uint8_t *)v1 + 26) == 0 || *((int *)v1 + 5) > 0 )
  {
    glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v19, *((uint32_t *)v1 + 5));
    glwebtools::Console::Print();
    v8 = v19 - 12;
    if ( v19 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v19 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
  }
  if ( *((uint32_t *)v1 + 7) != 0 )
  {
    v9 = 0;
    do
    {
      ++v9;
      glwebtools::Console::Print();
    }
    while ( *((uint32_t *)v1 + 7) > v9 );
  }
  v10 = 0;
  v11 = (oi::BillingMethodArray::Self *)((oi::StoreOfflineItem::Self *)((char *)v1 + 44));
  while ( 1 )
  {
    result = oi::BillingMethodArray::Size(v11);
    if ( v10 >= result )
      break;
    v12 = (oi::BillingMethod::Self *)oi::BillingMethodArray::opIndex(v11, v10++);
    oi::BillingMethod::Print(v12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::Print  (binary VA: 0x153f0e0)
// Original: oi::StoreOfflineItemArray::Print
// ----------------------------------------------------------------------------
unsigned int oi::StoreOfflineItemArray::Print(oi::StoreOfflineItemArray::Self *self)
{
  oi::StoreOfflineItem::Self *i;
  unsigned int result;
  oi::StoreOfflineItem::Self *v3;

  for ( i = *((oi::StoreOfflineItem::Self **)self + 1);
        *((oi::StoreOfflineItem::Self **)self + 2) != i;
        result = oi::StoreOfflineItem::Print(v3) )
  {
    v3 = i;
    i = (oi::StoreOfflineItem::Self *)((char *)i + 60);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::totalSize  (binary VA: 0x153f120)
// Original: oi::StoreOfflineItem::totalSize
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::totalSize(oi::StoreOfflineItem::Self *self)
{
  int v1;
  int v2;
  int i;
  int v4;

  v1 = 0;
  if ( *((uint8_t *)self + 10) != 0 )
    v1 = *(uint32_t *)(*((uint32_t *)self + 1) - 12);
  if ( *((uint8_t *)self + 18) != 0 && *((int *)self + 3) > 0 )
    v1 += 8;
  if ( *((uint8_t *)self + 26) == 0 || *((int *)self + 5) > 0 )
    v1 += 8;
  v2 = *((uint32_t *)self + 7);
  if ( v2 != 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 8) + 4 * i);
      v1 += *(uint32_t *)(v4 - 12);
    }
  }
  oi::BillingMethodArray::totalSize((oi::StoreOfflineItem::Self *)((char *)self + 44));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::Construct  (binary VA: 0x153f1a0)
// Original: oi::StoreOfflineItemArray::StoreOfflineItemArray
// ----------------------------------------------------------------------------
oi::StoreOfflineItemArray::Self * oi::StoreOfflineItemArray::Construct(oi::StoreOfflineItemArray::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20967A8);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::totalSize  (binary VA: 0x153f1d0)
// Original: oi::StoreOfflineItemArray::totalSize
// ----------------------------------------------------------------------------
int oi::StoreOfflineItemArray::totalSize(oi::StoreOfflineItemArray::Self *self)
{
  int v1;
  int v2;
  unsigned int v3;
  int v4;
  oi::StoreOfflineItem::Self *v6;
  int v7;

  v7 = 0;
  v1 = *((uint32_t *)self + 1);
  if ( -286331153 * ((*((uint32_t *)self + 2) - v1) >> 2) != 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v6 = (oi::StoreOfflineItem::Self *)(v2 + v1);
      v2 += 60;
      v4 = oi::StoreOfflineItem::totalSize(v6);
      v1 = *((uint32_t *)self + 1);
      v7 += v4;
    }
    while ( v3 < -286331153 * ((*((uint32_t *)self + 2) - v1) >> 2) );
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::read  (binary VA: 0x153f240)
// Original: oi::StoreOfflineItem::read
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::read(oi::StoreOfflineItem::Self *self, const glwebtools::JsonReader::Self *a2)
{
  oi::StoreOfflineItem::Self *v2;
  int v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  char IsValid;
  void *v9;
  void *v10;
  int v11;
  int v12;
  void *v13;
  const glwebtools::Json::Value::Self *v15;
  char *v16;
  char v17;
  int v18;
  void *v19;
  void *v20;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v23;
  char *v24;
  char v25;
  glwebtools::Self *v26;
  const glwebtools::Json::Value::Self *v27;
  int v28;
  int v29;
  void *v30;
  int v31;
  char v32;
  bool v33;
  const glwebtools::Json::Value::Self *v34;
  int (***v35)(uint32_t, uint32_t *);
  char v36;
  int v37;
  const glwebtools::Json::Value::Self *v38;
  bool IsOperationSuccess;
  glwebtools::Self *v40;
  void *v41;
  bool v42;
  int v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef glwebtools::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef glwebtools::Self *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef glwebtools::Json::Value::Self *_g4_t_v59;
  typedef glwebtools::Json::Value::Self *_g4_t_v60;
  typedef glwebtools::Self *_g4_t_v61;
  typedef const glwebtools::JsonReader::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef oi::BillingMethodArray::Self *_g4_t_v64;
  typedef oi::BillingMethodArray::Self *_g4_t_v65;
  typedef char _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69[3];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef glwebtools::Json::Value::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef char *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef oi::BillingMethodArray::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef char *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef char *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int (***_g4_t_v86)(uint32_t, uint32_t *);
  typedef uint8_t _g4_t_v87[8];
  typedef uint8_t _g4_t_v88[8];
  typedef int _g4_t_v89[4];
  typedef uint32_t _g4_t_v90[10];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v44)) > _g4_s0 ? (0u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v45)) > _g4_s1 ? (0u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v46)) > _g4_s2 ? (0u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v47)) > _g4_s3 ? (0u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v48)) > _g4_s4 ? (0u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v49)) > _g4_s5 ? (0u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v50)) > _g4_s6 ? (0u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v51)) > _g4_s7 ? (0u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v52)) > _g4_s8 ? (0u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v53)) > _g4_s9 ? (0u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v54)) > _g4_s10 ? (0u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v55)) > _g4_s11 ? (0u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v56)) > _g4_s12 ? (0u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v57)) > _g4_s13 ? (0u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v58)) > _g4_s14 ? (0u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v59)) > _g4_s15 ? (4u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v60)) > _g4_s16 ? (4u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v61)) > _g4_s17 ? (4u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v62)) > _g4_s18 ? (12u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v63)) > _g4_s19 ? (16u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v64)) > _g4_s20 ? (16u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v65)) > _g4_s21 ? (16u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (25u + sizeof(_g4_t_v66)) > _g4_s22 ? (25u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (26u + sizeof(_g4_t_v67)) > _g4_s23 ? (26u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v68)) > _g4_s24 ? (32u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v69)) > _g4_s25 ? (40u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v70)) > _g4_s26 ? (52u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v71)) > _g4_s27 ? (56u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v72)) > _g4_s28 ? (60u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v73)) > _g4_s29 ? (72u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v74)) > _g4_s30 ? (76u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v75)) > _g4_s31 ? (88u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v76)) > _g4_s32 ? (92u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v77)) > _g4_s33 ? (104u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v78)) > _g4_s34 ? (108u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v79)) > _g4_s35 ? (120u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v80)) > _g4_s36 ? (124u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v81)) > _g4_s37 ? (136u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v82)) > _g4_s38 ? (140u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v83)) > _g4_s39 ? (152u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v84)) > _g4_s40 ? (156u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (168u + sizeof(_g4_t_v85)) > _g4_s41 ? (168u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v86)) > _g4_s42 ? (172u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v87)) > _g4_s43 ? (184u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v88)) > _g4_s44 ? (192u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (200u + sizeof(_g4_t_v89)) > _g4_s45 ? (200u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v90)) > _g4_s46 ? (216u + sizeof(_g4_t_v90)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 0u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 25u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 26u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 88u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 120u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 124u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 136u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 140u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 152u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 156u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 168u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 172u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 184u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 192u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 200u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 216u);

  v90[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v62 = a2;
  v59 = (glwebtools::Json::Value::Self *)((oi::StoreOfflineItem::Self *)((char *)self + 4));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "item", (int)(uintptr_t)(&v66));
  v72 = v59;
  g4_std::string::construct_copy(&v75, &v71);
  v76 = (oi::BillingMethodArray::Self *)(v72);
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(v62, (char **)&v75) )
    {
      v38 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v75);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v90, v38);
      v65 = v76;
      v89[0] = (int)(uintptr_t)(&dword_213B814);
      v50 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v90, (int)(uintptr_t)(v89));
      IsOperationSuccess = glwebtools::IsOperationSuccess(v50);
      v40 = v50;
      if ( IsOperationSuccess )
      {
        g4_std::string::assign_str(v65, v89);
        *((uint8_t *)v65 + 6) = 1;
        v40 = nullptr;
      }
      v41 = (void *)(v89[0] - 12);
      if ( (uint32_t *)(v89[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v89[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v57 = v40;
        g4_std::string::Rep::M_destroy(v41);
        v40 = v57;
      }
      v51 = (int)(uintptr_t)(v40);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v90);
      v3 = v51;
    }
    else
    {
      v3 = -2147483646;
    }
  }
  else
  {
    v3 = -2147483645;
  }
  v4 = (void *)(v75 - 12);
  if ( (uint32_t *)(v75 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
  {
    v52 = v3;
    g4_std::string::Rep::M_destroy(v4);
    v3 = v52;
  }
  v5 = (void *)(v71 - 12);
  if ( (uint32_t *)(v71 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
  {
    v53 = v3;
    g4_std::string::Rep::M_destroy(v5);
    v3 = v53;
  }
  if ( v3 == 0 )
  {
    if ( *((uint8_t *)v2 + 10) == 0 || *(uint32_t *)(*((uint32_t *)v2 + 1) - 12) == 0 )
      return -2147483646;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "quantity", (int)(uintptr_t)(&v67));
    v74 = (char *)v2 + 12;
    g4_std::string::construct_copy(&v77, &v73);
    v78 = v74;
    v63 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
    {
      v63 = -2147483646;
      if ( glwebtools::Json::Value::isMember(v62, (char **)&v77) )
      {
        v15 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v77);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v90, v15);
        v16 = v78;
        v63 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v90, &v70);
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v63) )
        {
          v63 = 0;
          *(uint32_t *)v16 = v70;
          v16[6] = 1;
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v90);
      }
    }
    v6 = (void *)(v77 - 12);
    if ( (uint32_t *)(v77 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v73 - 12);
    if ( (uint32_t *)(v73 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    if ( v63 != 0 )
    {
      glwebtools::Console::Print();
      oi::StoreOfflineItem::Clear(v2);
      return v63;
    }
    if ( *((uint8_t *)v2 + 18) == 0 || *((int *)v2 + 3) <= 0 )
      return -2147483646;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "replaced_quantity", (int)(uintptr_t)(&v68));
    v80 = (char *)v2 + 20;
    g4_std::string::construct_copy(&v83, &v79);
    v84 = v80;
    IsValid = glwebtools::JsonReader::IsValid(v62);
    v3 = 0;
    if ( IsValid != 0 )
    {
      isObject = glwebtools::JsonReader::isObject(v62);
      v3 = 0;
      if ( isObject != 0 )
      {
        isMember = glwebtools::Json::Value::isMember(v62, (char **)&v83);
        v3 = 0;
        if ( isMember )
        {
          v23 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v83);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v90, v23);
          v24 = v84;
          v25 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v90);
          v26 = nullptr;
          if ( v25 != 0 )
          {
            v61 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v90, &v70);
            v42 = glwebtools::IsOperationSuccess(v61);
            v26 = nullptr;
            if ( v42 )
            {
              v43 = v70;
              v24[6] = 1;
              *(uint32_t *)v24 = v43;
            }
            else
            {
              v26 = v61;
            }
          }
          v48 = (int)(uintptr_t)(v26);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v90);
          v3 = v48;
        }
      }
    }
    v9 = (void *)(v83 - 12);
    if ( (uint32_t *)(v83 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
    {
      v58 = v3;
      g4_std::string::Rep::M_destroy(v9);
      v3 = v58;
    }
    v10 = (void *)(v79 - 12);
    if ( (uint32_t *)(v79 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
    {
      v54 = v3;
      g4_std::string::Rep::M_destroy(v10);
      v3 = v54;
    }
    if ( v3 == 0 )
    {
      if ( *((uint8_t *)v2 + 26) != 0 && *((int *)v2 + 5) <= 0 )
        return -2147483646;
      glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v89, v62, "category");
      *((uint32_t *)v2 + 7) = glwebtools::JsonReader::size((glwebtools::JsonReader::Self *)v89);
      glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v87);
      while ( 1 )
      {
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v88);
        if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                (glwebtools::JsonReader::Iterator::Self *)v87,
                                (const glwebtools::JsonReader::Iterator::Self *)v88) == 0 )
          break;
        v69[0] = (int)(uintptr_t)(&dword_213B814);
        v64 = (oi::BillingMethodArray::Self *)glwebtools::JsonReader::Iterator::index((glwebtools::JsonReader::Iterator::Self *)v87);
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v89) == 0
          || (uint8_t)glwebtools::JsonReader::isArray((glwebtools::JsonReader::Self *)v89) == 0 )
        {
          v11 = -2147483645;
          goto LABEL_24;
        }
        if ( !glwebtools::Json::Value::isValidIndex((glwebtools::Json::Value::Self *)v89, (unsigned int)(uintptr_t)(v64)) )
        {
          v11 = -2147483646;
          goto LABEL_24;
        }
        v27 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                 (glwebtools::Json::Value::Self *)v89,
                                                 (unsigned int)(uintptr_t)(v64));
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v90, v27);
        v60 = (glwebtools::Json::Value::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v90, (int)(uintptr_t)(v69));
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v90);
        if ( v60 != nullptr )
        {
          v11 = (int)(uintptr_t)(v60);
LABEL_24:
          v44 = v11;
          glwebtools::Console::Print();
          oi::StoreOfflineItem::Clear(v2);
          v12 = v44;
          v13 = (void *)(v69[0] - 12);
          if ( (uint32_t *)(v69[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v13);
            v12 = v44;
          }
          goto LABEL_25;
        }
        v28 = *((uint32_t *)v2 + 9);
        if ( v28 == *((uint32_t *)v2 + 10) )
        {
          g4_std::vector_string_glwebtools_SAlloc_a09d9d::M_insert_aux(
            (char *)v2 + 32,
            *((uint32_t *)v2 + 9),
            v69);
        }
        else
        {
          v29 = 0;
          if ( v28 != 0 )
          {
            g4_std::string::construct_copy(v28, v69);
            v29 = *((uint32_t *)v2 + 9);
          }
          *((uint32_t *)v2 + 9) = v29 + 4;
        }
        v30 = (void *)(v69[0] - 12);
        if ( (uint32_t *)(v69[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
        glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v87);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "billing_methods", (int)(uintptr_t)(&v68) + 1);
      v82 = (char *)v2 + 44;
      g4_std::string::construct_copy(&v85, &v81);
      v86 = (int (***)(uint32_t, uint32_t *))v82;
      v17 = glwebtools::JsonReader::IsValid(v62);
      v18 = -2147483645;
      if ( v17 != 0 )
      {
        v32 = glwebtools::JsonReader::isObject(v62);
        v18 = -2147483645;
        if ( v32 != 0 )
        {
          v33 = glwebtools::Json::Value::isMember(v62, (char **)&v85);
          v18 = -2147483646;
          if ( v33 )
          {
            v34 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v85);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v90, v34);
            v35 = v86;
            v36 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v90);
            v37 = -2147483645;
            if ( v36 != 0 )
              v37 = (**v35)((uint32_t)(uintptr_t)(v35), v90);
            v49 = v37;
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v90);
            v18 = v49;
          }
        }
      }
      v19 = (void *)(v85 - 12);
      if ( (uint32_t *)(v85 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v85 - 4), 0xFFFFFFFF) <= 0 )
      {
        v56 = v18;
        g4_std::string::Rep::M_destroy(v19);
        v18 = v56;
      }
      v20 = (void *)(v81 - 12);
      if ( (uint32_t *)(v81 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
      {
        v55 = v18;
        g4_std::string::Rep::M_destroy(v20);
        v18 = v55;
      }
      if ( v18 != 0 )
      {
        v47 = v18;
        glwebtools::Console::Print();
        oi::StoreOfflineItem::Clear(v2);
        v12 = v47;
      }
      else
      {
        v31 = oi::BillingMethodArray::Size((oi::StoreOfflineItem::Self *)((char *)v2 + 44));
        v12 = 0;
        if ( v31 == 0 )
          v12 = -2147483646;
      }
LABEL_25:
      v45 = v12;
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v89);
      return v45;
    }
  }
  v46 = v3;
  glwebtools::Console::Print();
  oi::StoreOfflineItem::Clear(v2);
  return v46;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItemArray::read  (binary VA: 0x153fe70)
// Original: oi::StoreOfflineItemArray::read
// ----------------------------------------------------------------------------
char * oi::StoreOfflineItemArray::read(oi::StoreOfflineItemArray::Self *self, const glwebtools::JsonReader::Self *a2)
{
  oi::StoreOfflineItemArray::Self *v2;
  char IsValid;
  unsigned int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  const oi::StoreOfflineItem::Self *v8;
  int v9;
  char v10;
  int v11;
  unsigned int v13;
  const oi::StoreOfflineItem::Self *v14;
  oi::StoreOfflineItem::Self *v15;
  oi::StoreOfflineItem::Self *v16;
  oi::StoreOfflineItem::Self *v17;
  const oi::StoreOfflineItem::Self *v18;
  int v19;
  typedef uint32_t *_g4_t_v20;
  typedef const oi::StoreOfflineItem::Self *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef oi::StoreOfflineItemArray::Self *_g4_t_v25;
  typedef oi::StoreOfflineItem::Self *_g4_t_v26;
  typedef oi::StoreOfflineItem::Self *_g4_t_v27;
  typedef oi::StoreOfflineItem::Self *_g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef const oi::StoreOfflineItem::Self *_g4_t_v32;
  typedef const oi::StoreOfflineItem::Self *_g4_t_v33;
  typedef uint8_t _g4_t_v34[8];
  typedef uint8_t _g4_t_v35[8];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint32_t _g4_t_v38[2];
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t (**_g4_t_v45)(oi::BillingMethodArray::Self *, const glwebtools::JsonReader::Self *);
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef oi::StoreOfflineItemArray::Self **_g4_t_v49;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v22)) > _g4_s2 ? (48u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v23)) > _g4_s3 ? (48u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v24)) > _g4_s4 ? (48u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v25)) > _g4_s5 ? (52u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v26)) > _g4_s6 ? (56u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v27)) > _g4_s7 ? (60u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v28)) > _g4_s8 ? (60u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v29)) > _g4_s9 ? (64u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v30)) > _g4_s10 ? (64u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v31)) > _g4_s11 ? (68u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v32)) > _g4_s12 ? (68u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v33)) > _g4_s13 ? (68u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v34)) > _g4_s14 ? (72u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v35)) > _g4_s15 ? (80u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v36)) > _g4_s16 ? (88u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v37)) > _g4_s17 ? (104u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v38)) > _g4_s18 ? (120u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (130u + sizeof(_g4_t_v39)) > _g4_s19 ? (130u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (138u + sizeof(_g4_t_v40)) > _g4_s20 ? (138u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (146u + sizeof(_g4_t_v41)) > _g4_s21 ? (146u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v42)) > _g4_s22 ? (152u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v43)) > _g4_s23 ? (156u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v44)) > _g4_s24 ? (160u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v45)) > _g4_s25 ? (164u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v46)) > _g4_s26 ? (168u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v47)) > _g4_s27 ? (172u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v48)) > _g4_s28 ? (176u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v49)) > _g4_s29 ? (192u + sizeof(_g4_t_v49)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 120u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 130u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 138u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 146u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 164u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 168u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 172u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 176u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 192u);

  v49 = &self;
  v2 = self;
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v36, a2, "prices");
  IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v36);
  v4 = 0x80000000;
  if ( IsValid != 0 )
  {
    v31 = *((uint32_t *)v2 + 1);
    if ( v31 != *((uint32_t *)v2 + 2) )
    {
      v29 = (size_t)v2;
      v5 = *((uint32_t **)v2 + 1);
      v6 = *((uint32_t **)v2 + 2);
      do
      {
        v7 = *v5;
        v20 = v5;
        v5 += 15;
        (*(void (**)(uint32_t *))(v7 + 8))(v20);
      }
      while ( v6 != v5 );
      v2 = (oi::StoreOfflineItemArray::Self *)v29;
    }
    *((uint32_t *)v2 + 2) = v31;
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v34);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v35);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v34,
                              (const glwebtools::JsonReader::Iterator::Self *)v35) == 0 )
      {
        v4 = 0;
        goto LABEL_17;
      }
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v38[0] = ((uint32_t)(uintptr_t)&off_2096778);
      v46 = 0;
      v47 = 0;
      v38[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v48 = 0;
      v45 = (uint32_t (**)(oi::BillingMethodArray::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096828);
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v37,
        (glwebtools::Json::ValueIteratorBase::Self *)v34);
      v10 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v37);
      v11 = -2147483645;
      if ( v10 != 0 )
        v11 = (*(int (**)(uint32_t *, uint8_t *))v38[0])(v38, v37);
      v22 = (char *)v11;
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v37);
      if ( v22 != nullptr )
        break;
      v8 = *((const oi::StoreOfflineItem::Self **)v2 + 2);
      if ( v8 == *((const oi::StoreOfflineItem::Self **)v2 + 3) )
      {
        v30 = 60;
        v13 = -286331153 * (((int)(uintptr_t)(v8) - *((uint32_t *)v2 + 1)) >> 2);
        if ( v13 != 0 )
        {
          if ( v13 > 2 * v13 || (unsigned int)(-572662306 * (((int)(uintptr_t)(v8) - *((uint32_t *)v2 + 1)) >> 2)) > 0x4444444 )
            v30 = -16;
          else
            v30 = 8 * (((int)(uintptr_t)(v8) - *((uint32_t *)v2 + 1)) >> 2);
        }
        v24 = (char *)(-286331153 * (((int)(uintptr_t)(v8) - *((uint32_t *)v2 + 1)) >> 2));
        v26 = (oi::StoreOfflineItem::Self *)sub_4EBE70(v30, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v27 = (oi::StoreOfflineItem::Self *)((char *)v26 + 60);
        if ( (oi::StoreOfflineItem::Self *)((char *)v26 + 60 * (uint32_t)(uintptr_t)(v24)) != nullptr )
          oi::StoreOfflineItem::Construct(
            (oi::StoreOfflineItem::Self *)((char *)v26 + 60 * (uint32_t)(uintptr_t)(v24)),
            (const oi::StoreOfflineItem::Self *)v38);
        if ( v8 != *((const oi::StoreOfflineItem::Self **)v2 + 1) )
        {
          v32 = v8;
          v28 = (oi::StoreOfflineItem::Self *)(v2);
          v14 = *((const oi::StoreOfflineItem::Self **)v2 + 1);
          v15 = v26;
          do
          {
            if ( v15 != nullptr )
              oi::StoreOfflineItem::Construct(v15, v14);
            v14 = (const oi::StoreOfflineItem::Self *)((char *)v14 + 60);
            v15 = (oi::StoreOfflineItem::Self *)((char *)v15 + 60);
          }
          while ( v32 != v14 );
          v8 = v32;
          v16 = (oi::StoreOfflineItem::Self *)((char *)v15 + 60);
          v2 = (oi::StoreOfflineItemArray::Self *)(v28);
          v27 = v16;
        }
        v33 = *((const oi::StoreOfflineItem::Self **)v2 + 2);
        if ( v8 != v33 )
        {
          v25 = v2;
          v17 = v27;
          do
          {
            if ( v17 != nullptr )
              oi::StoreOfflineItem::Construct(v17, v8);
            v8 = (const oi::StoreOfflineItem::Self *)((char *)v8 + 60);
            v17 = (oi::StoreOfflineItem::Self *)((char *)v17 + 60);
          }
          while ( v33 != v8 );
          v27 = v17;
          v2 = v25;
          v33 = *((const oi::StoreOfflineItem::Self **)v25 + 2);
        }
        v18 = *((const oi::StoreOfflineItem::Self **)v2 + 1);
        if ( v18 != v33 )
        {
          do
          {
            v19 = *(uint32_t *)v18;
            v21 = v18;
            v18 = (const oi::StoreOfflineItem::Self *)((char *)v18 + 60);
            (*(void (**)(const oi::StoreOfflineItem::Self *))(v19 + 8))(v21);
          }
          while ( v18 != v33 );
          v18 = *((const oi::StoreOfflineItem::Self **)v2 + 1);
        }
        if ( v18 != nullptr )
          sub_4EBEE0((int)(uintptr_t)(v18));
        *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v26);
        *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(v27);
        *((uint32_t *)v2 + 3) = (uint32_t)(uintptr_t)((char *)v26 + v30);
      }
      else
      {
        v9 = 0;
        if ( v8 != nullptr )
        {
          oi::StoreOfflineItem::Construct(*((oi::StoreOfflineItem::Self **)v2 + 2), (const oi::StoreOfflineItem::Self *)v38);
          v9 = *((uint32_t *)v2 + 2);
        }
        *((uint32_t *)v2 + 2) = v9 + 60;
      }
      oi::StoreOfflineItem::Destroy((oi::StoreOfflineItem::Self *)v38);
      glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v34);
    }
    glwebtools::Console::Print();
    G4_VCALL<void>(v2, 24, "StoreOfflineItem parse failed [0x%8x] on : %s\n", v22, "(*it) >> item");
    oi::StoreOfflineItem::Destroy((oi::StoreOfflineItem::Self *)v38);
    v4 = (unsigned int)(uintptr_t)(v22);
  }
LABEL_17:
  v23 = (char *)v4;
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v36);
  return v23;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::Construct  (binary VA: 0x1540510)
// Original: oi::StoreOfflineItem::StoreOfflineItem
// ----------------------------------------------------------------------------
int oi::StoreOfflineItem::Construct(oi::StoreOfflineItem::Self *self, const oi::StoreOfflineItem::Self *a2)
{
  int v2;
  const oi::StoreOfflineItem::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  int v24;
  oi::StoreOfflineItem::Self *v25;
  oi::StoreOfflineItem::Self *v26;
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
  char *v37;
  char *v38;
  char *v39;
  oi::StoreOfflineItem::Self *v40;
  int v41;

  v2 = 0;
  v3 = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096778);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)self + 4, (char *)a2 + 4);
  *((uint8_t *)self + 10) = *((uint8_t *)a2 + 10);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint8_t *)self + 18) = *((uint8_t *)a2 + 18);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint8_t *)self + 26) = *((uint8_t *)a2 + 26);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  v4 = *((uint32_t *)v3 + 9) - *((uint32_t *)v3 + 8);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  v5 = 0;
  v6 = v4 >> 2;
  if ( v6 != 0 )
  {
    v2 = 4 * v6;
    v5 = sub_4EBE70(4 * v6, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  }
  *((uint32_t *)self + 8) = v5;
  *((uint32_t *)self + 9) = v5;
  *((uint32_t *)self + 10) = v5 + v2;
  v7 = *((uint32_t *)a2 + 8);
  if ( *((uint32_t *)a2 + 9) != v7 )
  {
    v8 = *((uint32_t *)a2 + 9);
    do
    {
      if ( v5 != 0 )
        g4_std::string::construct_copy(v5, v7);
      v7 += 4;
      v5 += 4;
    }
    while ( v8 != v7 );
    v3 = a2;
  }
  v9 = 0;
  v40 = nullptr;
  *((uint32_t *)self + 9) = v5;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_2096828);
  v10 = (*((uint32_t *)v3 + 13) - *((uint32_t *)v3 + 12)) >> 2;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  if ( -991146299 * v10 != 0 )
  {
    v9 = 4 * v10;
    v40 = (oi::StoreOfflineItem::Self *)sub_4EBE70(4 * v10, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  }
  result = (int)(uintptr_t)(v40);
  v39 = (char *)v40;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v40);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v40);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)((char *)v40 + v9);
  v12 = *((uint32_t *)v3 + 13);
  v13 = *((uint32_t *)v3 + 12);
  v41 = v12;
  if ( v12 != v13 )
  {
    v36 = v13;
    do
    {
      result = (int)(uintptr_t)(v39);
      if ( v39 != nullptr )
      {
        *(uint32_t *)v39 = ((uint32_t)(uintptr_t)&off_2096808);
        *((uint32_t *)v39 + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
        v35 = v39 - (char *)v40;
        g4_std::string::assign_str(v39 + 4, v36 + 4);
        *((uint8_t *)v40 + v35 + 10) = *(uint8_t *)(v36 + 10);
        *((uint32_t *)v39 + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v39 + 12, v36 + 12);
        *((uint8_t *)v40 + v35 + 18) = *(uint8_t *)(v36 + 18);
        v14 = (char *)v40 + 24;
        v37 = (char *)v40 + 24;
        *((uint32_t *)v39 + 5) = (uint32_t)(uintptr_t)(&off_2096728);
        v15 = *(uint32_t *)(v36 + 28) - *(uint32_t *)(v36 + 24);
        *((uint32_t *)v39 + 6) = 0;
        v16 = v15 >> 3;
        v17 = 0;
        *(uint32_t *)&v14[v35 + 4] = 0;
        *(uint32_t *)&v14[v35 + 8] = 0;
        v18 = 0;
        if ( -1431655765 * v16 != 0 )
        {
          v18 = 8 * v16;
          v17 = sub_4EBE70(8 * v16, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        }
        *(uint32_t *)&v37[v35 + 8] = v17 + v18;
        *(uint32_t *)&v37[v35] = v17;
        *(uint32_t *)&v37[v35 + 4] = v17;
        v33 = *(uint32_t *)(v36 + 28);
        v19 = v17;
        v20 = *(uint32_t *)(v36 + 24);
        if ( v33 != v20 )
        {
          v21 = *(uint32_t *)(v36 + 24);
          do
          {
            if ( v19 != 0 )
            {
              v31 = v19 - v17;
              *(uint32_t *)v19 = ((uint32_t)(uintptr_t)&off_2096708);
              *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
              v29 = v20;
              g4_std::string::assign_str(v19 + 4, v21 + 4);
              v20 = v29;
              *(uint8_t *)(v31 + v17 + 4 + 6) = *(uint8_t *)(v21 + 10);
              *(uint64_t *)(v19 + 12) = *(uint64_t *)(v21 + 12);
              *(uint8_t *)(v17 + v31 + 22) = *(uint8_t *)(v21 + 22);
            }
            v19 += 24;
            v21 += 24;
          }
          while ( v33 != v21 );
        }
        *(uint32_t *)&v37[v35 + 4] = v19;
        v22 = v39 - (char *)v40;
        *((uint32_t *)v39 + 9) = (uint32_t)(uintptr_t)(&off_2096728);
        result = (*(uint32_t *)(v36 + 44) - *(uint32_t *)(v36 + 40)) >> 3;
        v38 = (char *)v40 + 40;
        v23 = (char *)v40 + 40;
        *((uint32_t *)v39 + 10) = 0;
        *(uint32_t *)&v23[v35 + 4] = 0;
        *(uint32_t *)&v23[v35 + 8] = 0;
        v24 = 0;
        v25 = nullptr;
        if ( -1431655765 * result != 0 )
        {
          v24 = 8 * result;
          result = sub_4EBE70(8 * result, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          v25 = (oi::StoreOfflineItem::Self *)result;
          v22 = v39 - (char *)v40;
        }
        *(uint32_t *)&v38[v22 + 8] = (uint32_t)(uintptr_t)((char *)v25 + v24);
        *(uint32_t *)&v38[v22] = (uint32_t)(uintptr_t)(v25);
        *(uint32_t *)&v38[v22 + 4] = (uint32_t)(uintptr_t)(v25);
        v34 = *(uint32_t *)(v36 + 44);
        v26 = v25;
        v27 = *(uint32_t *)(v36 + 40);
        if ( v34 != v27 )
        {
          v28 = *(uint32_t *)(v36 + 40);
          do
          {
            if ( v26 != nullptr )
            {
              v32 = v26 - v25;
              *(uint32_t *)v26 = ((uint32_t)(uintptr_t)&off_2096708);
              *((uint32_t *)v26 + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
              v30 = v27;
              g4_std::string::assign_str((char *)v26 + 4, v28 + 4);
              v27 = v30;
              *((uint8_t *)v25 + v32 + 10) = *(uint8_t *)(v28 + 10);
              *(uint64_t *)((char *)v26 + 12) = *(uint64_t *)(v28 + 12);
              result = *(uint8_t *)(v28 + 22);
              *((uint8_t *)v25 + v32 + 22) = result;
            }
            v26 = (oi::StoreOfflineItem::Self *)((char *)v26 + 24);
            v28 += 24;
          }
          while ( v34 != v28 );
        }
        *(uint32_t *)&v38[v35 + 4] = (uint32_t)(uintptr_t)(v26);
      }
      v36 += 52;
      v39 += 52;
    }
    while ( v41 != v36 );
  }
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v39);
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::StoreOfflineItem::opAssign  (binary VA: 0x1540ea0)
// Original: oi::StoreOfflineItem::operator=
// ----------------------------------------------------------------------------
oi::StoreOfflineItem::Self * oi::StoreOfflineItem::opAssign(oi::StoreOfflineItem::Self *self, const oi::StoreOfflineItem::Self *a2)
{
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v2;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  int v7;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v8;
  int v9;
  uint32_t *v10;
  oi::StoreOfflineItem::Self *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int *v32;
  int v33;
  oi::StoreOfflineItem::Self *v34;
  int v35;
  unsigned int v37;
  int v38;
  unsigned int v39;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v40;
  int v41;
  uint8_t *v42;
  char *v43;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v44;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v45;
  int v46;
  int v47;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint8_t *v52;
  char *v53;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v54;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v55;
  uint32_t *v56;
  int v57;
  char *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  char *v64;
  int v65;
  uint32_t *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  typedef size_t _g4_t_v72;
  typedef size_t _g4_t_v73;
  typedef size_t _g4_t_v74;
  typedef size_t _g4_t_v75;
  typedef std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *_g4_t_v76;
  typedef std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *_g4_t_v77;
  typedef std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *_g4_t_v78;
  typedef std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *_g4_t_v79;
  typedef std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef char *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef char *_g4_t_v101;
  typedef char *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef unsigned int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef char *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef char *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef size_t _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v72)) > _g4_s0 ? (0u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v73)) > _g4_s1 ? (0u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v74)) > _g4_s2 ? (0u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v75)) > _g4_s3 ? (0u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v76)) > _g4_s4 ? (4u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v77)) > _g4_s5 ? (4u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v78)) > _g4_s6 ? (4u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v79)) > _g4_s7 ? (4u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v80)) > _g4_s8 ? (4u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v81)) > _g4_s9 ? (52u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v82)) > _g4_s10 ? (52u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v83)) > _g4_s11 ? (52u + sizeof(_g4_t_v83)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v84)) > _g4_s12 ? (52u + sizeof(_g4_t_v84)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v85)) > _g4_s13 ? (52u + sizeof(_g4_t_v85)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v86)) > _g4_s14 ? (56u + sizeof(_g4_t_v86)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v87)) > _g4_s15 ? (56u + sizeof(_g4_t_v87)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v88)) > _g4_s16 ? (56u + sizeof(_g4_t_v88)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v89)) > _g4_s17 ? (56u + sizeof(_g4_t_v89)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v90)) > _g4_s18 ? (56u + sizeof(_g4_t_v90)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v91)) > _g4_s19 ? (56u + sizeof(_g4_t_v91)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v92)) > _g4_s20 ? (56u + sizeof(_g4_t_v92)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v93)) > _g4_s21 ? (60u + sizeof(_g4_t_v93)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v94)) > _g4_s22 ? (64u + sizeof(_g4_t_v94)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v95)) > _g4_s23 ? (64u + sizeof(_g4_t_v95)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v96)) > _g4_s24 ? (64u + sizeof(_g4_t_v96)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v97)) > _g4_s25 ? (64u + sizeof(_g4_t_v97)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v98)) > _g4_s26 ? (72u + sizeof(_g4_t_v98)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v99)) > _g4_s27 ? (72u + sizeof(_g4_t_v99)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v100)) > _g4_s28 ? (72u + sizeof(_g4_t_v100)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v101)) > _g4_s29 ? (72u + sizeof(_g4_t_v101)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v102)) > _g4_s30 ? (76u + sizeof(_g4_t_v102)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v103)) > _g4_s31 ? (76u + sizeof(_g4_t_v103)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v104)) > _g4_s32 ? (76u + sizeof(_g4_t_v104)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v105)) > _g4_s33 ? (80u + sizeof(_g4_t_v105)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v106)) > _g4_s34 ? (80u + sizeof(_g4_t_v106)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v107)) > _g4_s35 ? (80u + sizeof(_g4_t_v107)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v108)) > _g4_s36 ? (80u + sizeof(_g4_t_v108)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v109)) > _g4_s37 ? (84u + sizeof(_g4_t_v109)) : _g4_s37,
    _g4_s39 = (84u + sizeof(_g4_t_v110)) > _g4_s38 ? (84u + sizeof(_g4_t_v110)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v111)) > _g4_s39 ? (88u + sizeof(_g4_t_v111)) : _g4_s39,
    _g4_s41 = (88u + sizeof(_g4_t_v112)) > _g4_s40 ? (88u + sizeof(_g4_t_v112)) : _g4_s40,
    _g4_s42 = (92u + sizeof(_g4_t_v113)) > _g4_s41 ? (92u + sizeof(_g4_t_v113)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v114)) > _g4_s42 ? (96u + sizeof(_g4_t_v114)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v115)) > _g4_s43 ? (100u + sizeof(_g4_t_v115)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v116)) > _g4_s44 ? (104u + sizeof(_g4_t_v116)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v117)) > _g4_s45 ? (108u + sizeof(_g4_t_v117)) : _g4_s45,
    _g4_s47 = (126u + sizeof(_g4_t_v118)) > _g4_s46 ? (126u + sizeof(_g4_t_v118)) : _g4_s46,
    _g4_s48 = (127u + sizeof(_g4_t_v119)) > _g4_s47 ? (127u + sizeof(_g4_t_v119)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 0u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 0u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 4u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 4u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 4u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 4u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 52u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 52u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 56u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 56u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 56u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 56u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 64u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 64u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 64u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 64u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 72u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 72u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 72u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 76u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 76u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 80u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 80u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 80u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 80u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 84u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 84u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 88u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 88u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 92u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 96u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 100u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 104u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 108u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 126u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 127u);

  g4_std::string::assign_str((char *)self + 4, (char *)a2 + 4);
  *((uint8_t *)self + 10) = *((uint8_t *)a2 + 10);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint8_t *)self + 18) = *((uint8_t *)a2 + 18);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint8_t *)self + 26) = *((uint8_t *)a2 + 26);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  if ( a2 != self )
  {
    v2 = *((std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> **)a2 + 9);
    v3 = *((std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> **)a2 + 8);
    v4 = (v2 - v3) >> 2;
    v5 = *((char **)self + 8);
    v86 = v4;
    if ( v4 > (*((uint32_t *)self + 10) - (int)(uintptr_t)(v5)) >> 2 )
    {
      v100 = 0;
      v93 = 0;
      if ( v4 != 0 )
      {
        v83 = *((std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> **)a2 + 9);
        v100 = 4 * v4;
        v93 = sub_4EBE70(4 * v4, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v2 = v83;
      }
      if ( v3 != v2 )
      {
        v47 = v93;
        v48 = v2;
        do
        {
          if ( v47 != 0 )
            g4_std::string::construct_copy(v47, v3);
          v3 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)((char *)v3 + 4);
          v47 += 4;
        }
        while ( v48 != v3 );
      }
      v49 = *((uint32_t **)self + 9);
      v50 = *((uint32_t **)self + 8);
      if ( v49 != v50 )
      {
        do
        {
          v51 = (uint32_t *)(*v50 - 12);
          if ( v51 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v50 - 4), 0xFFFFFFFF) <= 0 )
          {
            v76 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)&v118;
            g4_std::string::Rep::M_destroy(v51);
          }
          ++v50;
        }
        while ( v49 != v50 );
        v50 = *((uint32_t **)self + 8);
      }
      if ( v50 != nullptr )
        sub_4EBEE0((int)(uintptr_t)(v50));
      v11 = self;
      *((uint32_t *)self + 8) = v93;
      v12 = v93 + v100;
      *((uint32_t *)self + 10) = v93 + v100;
    }
    else
    {
      v6 = *((char **)self + 9);
      v7 = (v6 - v5) >> 2;
      if ( v86 > (unsigned int)v7 )
      {
        v37 = (unsigned int)(uintptr_t)(v3) + 4 * v7;
        if ( v7 > 0 )
        {
          v38 = (*((uint32_t *)self + 9) - (int)(uintptr_t)(v5)) >> 2;
          do
          {
            v78 = v3;
            v74 = (size_t)v5;
            v3 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)((char *)v3 + 4);
            v5 += 4;
            g4_std::string::assign_str(v74, v78);
            --v38;
          }
          while ( v38 != 0 );
          v6 = *((char **)self + 9);
          v5 = *((char **)self + 8);
          v2 = *((std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> **)a2 + 9);
          v37 = *((uint32_t *)a2 + 8) + ((v6 - v5) & 0xFFFFFFFC);
        }
        if ( v2 == (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)v37 )
        {
          v11 = self;
          v12 = (int)(uintptr_t)(&v5[4 * v86]);
        }
        else
        {
          v39 = v37;
          v40 = v2;
          do
          {
            if ( v6 != nullptr )
              g4_std::string::construct_copy(v6, v39);
            v39 += 4;
            v6 += 4;
          }
          while ( (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)v39 != v40 );
          v11 = self;
          v12 = *((uint32_t *)self + 8) + 4 * v86;
        }
      }
      else
      {
        if ( v86 > 0 )
        {
          v102 = *((char **)self + 9);
          v98 = *((uint32_t *)self + 8);
          v8 = *((std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> **)a2 + 8);
          v9 = (*((uint32_t *)a2 + 9) - (int)(uintptr_t)(v3)) >> 2;
          do
          {
            v77 = v8;
            v72 = (size_t)v5;
            v8 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)((char *)v8 + 4);
            v5 += 4;
            g4_std::string::assign_str(v72, v77);
            --v9;
          }
          while ( v9 != 0 );
          v6 = v102;
          v5 = (char *)(v98 + 4 * v86);
        }
        if ( v6 == v5 )
        {
          v11 = self;
          v12 = *((uint32_t *)self + 8) + 4 * v86;
        }
        else
        {
          do
          {
            v10 = (uint32_t *)(*(uint32_t *)v5 - 12);
            if ( v10 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v5 - 4), 0xFFFFFFFF) <= 0 )
            {
              v76 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)&v119;
              g4_std::string::Rep::M_destroy(v10);
            }
            v5 += 4;
          }
          while ( v6 != v5 );
          v11 = self;
          v12 = *((uint32_t *)self + 8) + 4 * v86;
        }
      }
    }
    *((uint32_t *)v11 + 9) = v12;
    v113 = *((uint32_t *)a2 + 12);
    v13 = (*((uint32_t *)a2 + 13) - v113) >> 2;
    v115 = *((uint32_t *)a2 + 13);
    v116 = -991146299 * v13;
    v87 = -991146299 * v13;
    v14 = *((char **)v11 + 12);
    if ( -991146299 * v13 <= (unsigned int)(-991146299 * ((*((uint32_t *)v11 + 14) - (int)(uintptr_t)(v14)) >> 2)) )
    {
      v112 = *((char **)v11 + 13);
      v41 = (v112 - v14) >> 2;
      if ( v116 > (unsigned int)(-991146299 * v41) )
      {
        v114 = v113 + 4 * v41;
        v90 = -991146299 * v41;
        if ( -991146299 * v41 > 0 )
        {
          v52 = *((uint8_t **)a2 + 12);
          v53 = v14;
          do
          {
            g4_std::string::assign_str(v53 + 4, v52 + 4);
            v53[10] = v52[10];
            g4_std::string::assign_str(v53 + 12, v52 + 12);
            v53[18] = v52[18];
            g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(
              (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v53 + 24),
              (const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v52 + 24));
            v54 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v52 + 40);
            v52 += 52;
            v80 = v54;
            v55 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v53 + 40);
            v53 += 52;
            g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(v55, v80);
            --v90;
          }
          while ( v90 != 0 );
          v112 = *((char **)self + 13);
          v115 = *((uint32_t *)a2 + 13);
          v14 = *((char **)self + 12);
          v114 = *((uint32_t *)a2 + 12) + ((v112 - v14) & 0xFFFFFFFC);
        }
        v104 = v114;
        v110 = v112;
        if ( v115 == v114 )
        {
          v35 = (int)(uintptr_t)(&v14[52 * v116]);
          v34 = self;
        }
        else
        {
          do
          {
            if ( v110 != nullptr )
            {
              *(uint32_t *)v110 = ((uint32_t)(uintptr_t)&off_2096808);
              *((uint32_t *)v110 + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
              v101 = (char *)(v110 - v112);
              g4_std::string::assign_str(v110 + 4, v104 + 4);
              v101[(uint32_t)(uintptr_t)(v112) + 10] = *(uint8_t *)(v104 + 10);
              *((uint32_t *)v110 + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
              g4_std::string::assign_str(v110 + 12, v104 + 12);
              v101[(uint32_t)(uintptr_t)(v112) + 18] = *(uint8_t *)(v104 + 18);
              v56 = (uint32_t *)(v112 + 24);
              v107 = (uint32_t *)(v112 + 24);
              *((uint32_t *)v110 + 5) = (uint32_t)(uintptr_t)(&off_2096728);
              v57 = (*(uint32_t *)(v104 + 28) - *(uint32_t *)(v104 + 24)) >> 3;
              v58 = (char *)(v110 - v112);
              *((uint32_t *)v110 + 6) = 0;
              v59 = 0;
              *(uint32_t *)((char *)v56 + (uint32_t)(uintptr_t)(v101) + 4) = 0;
              *(uint32_t *)((char *)v56 + (uint32_t)(uintptr_t)(v101) + 8) = 0;
              v60 = 0;
              if ( -1431655765 * v57 != 0 )
              {
                v60 = 8 * v57;
                v59 = sub_4EBE70(8 * v57, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
                v58 = (char *)(v110 - v112);
              }
              *(uint32_t *)((char *)v107 + (uint32_t)(uintptr_t)(v58) + 8) = v59 + v60;
              *(uint32_t *)((char *)v107 + (uint32_t)(uintptr_t)(v58)) = v59;
              *(uint32_t *)((char *)v107 + (uint32_t)(uintptr_t)(v58) + 4) = v59;
              v96 = *(uint32_t *)(v104 + 28);
              v61 = v59;
              v62 = *(uint32_t *)(v104 + 24);
              if ( v96 != v62 )
              {
                v63 = *(uint32_t *)(v104 + 24);
                do
                {
                  if ( v61 != 0 )
                  {
                    v91 = v61 - v59;
                    *(uint32_t *)v61 = ((uint32_t)(uintptr_t)&off_2096708);
                    *(uint32_t *)(v61 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                    v84 = v62;
                    g4_std::string::assign_str(v61 + 4, v63 + 4);
                    v62 = v84;
                    *(uint8_t *)(v91 + v59 + 4 + 6) = *(uint8_t *)(v63 + 10);
                    *(uint64_t *)(v61 + 12) = *(uint64_t *)(v63 + 12);
                    *(uint8_t *)(v59 + v91 + 22) = *(uint8_t *)(v63 + 22);
                  }
                  v61 += 24;
                  v63 += 24;
                }
                while ( v96 != v63 );
              }
              *(uint32_t *)((char *)v107 + (uint32_t)(uintptr_t)(v101) + 4) = v61;
              v64 = (char *)(v110 - v112);
              *((uint32_t *)v110 + 9) = (uint32_t)(uintptr_t)(&off_2096728);
              v65 = (*(uint32_t *)(v104 + 44) - *(uint32_t *)(v104 + 40)) >> 3;
              v108 = (uint32_t *)(v112 + 40);
              v66 = (uint32_t *)(v112 + 40);
              *((uint32_t *)v110 + 10) = 0;
              *(uint32_t *)((char *)v66 + (uint32_t)(uintptr_t)(v101) + 4) = 0;
              *(uint32_t *)((char *)v66 + (uint32_t)(uintptr_t)(v101) + 8) = 0;
              v67 = 0;
              v68 = 0;
              if ( -1431655765 * v65 != 0 )
              {
                v67 = 8 * v65;
                v68 = sub_4EBE70(8 * v65, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
                v64 = (char *)(v110 - v112);
              }
              *(uint32_t *)((char *)v108 + (uint32_t)(uintptr_t)(v64) + 8) = v68 + v67;
              *(uint32_t *)((char *)v108 + (uint32_t)(uintptr_t)(v64)) = v68;
              *(uint32_t *)((char *)v108 + (uint32_t)(uintptr_t)(v64) + 4) = v68;
              v97 = *(uint32_t *)(v104 + 44);
              v69 = v68;
              v70 = *(uint32_t *)(v104 + 40);
              if ( v97 != v70 )
              {
                v71 = *(uint32_t *)(v104 + 40);
                do
                {
                  if ( v69 != 0 )
                  {
                    v92 = v69 - v68;
                    *(uint32_t *)v69 = ((uint32_t)(uintptr_t)&off_2096708);
                    *(uint32_t *)(v69 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                    v85 = v70;
                    g4_std::string::assign_str(v69 + 4, v71 + 4);
                    v70 = v85;
                    *(uint8_t *)(v92 + v68 + 4 + 6) = *(uint8_t *)(v71 + 10);
                    *(uint64_t *)(v69 + 12) = *(uint64_t *)(v71 + 12);
                    *(uint8_t *)(v68 + v92 + 22) = *(uint8_t *)(v71 + 22);
                  }
                  v69 += 24;
                  v71 += 24;
                }
                while ( v97 != v71 );
              }
              *(uint32_t *)((char *)v108 + (uint32_t)(uintptr_t)(v101) + 4) = v69;
            }
            v104 += 52;
            v110 += 52;
          }
          while ( v104 != v115 );
          v34 = self;
          v35 = *((uint32_t *)self + 12) + 52 * v116;
        }
      }
      else
      {
        if ( v116 > 0 )
        {
          v42 = *((uint8_t **)a2 + 12);
          v43 = v14;
          do
          {
            g4_std::string::assign_str(v43 + 4, v42 + 4);
            v43[10] = v42[10];
            g4_std::string::assign_str(v43 + 12, v42 + 12);
            v43[18] = v42[18];
            g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(
              (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v43 + 24),
              (const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v42 + 24));
            v44 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v42 + 40);
            v42 += 52;
            v79 = v44;
            v45 = (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(v43 + 40);
            v43 += 52;
            g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(v45, v79);
            --v87;
          }
          while ( v87 != 0 );
          v14 += 52 * v116;
        }
        while ( v112 != v14 )
        {
          v46 = *(uint32_t *)v14;
          v75 = (size_t)v14;
          v14 += 52;
          (*(void (**)(size_t, std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *))(v46 + 16))(
            v75,
            v76);
        }
        v34 = self;
        v35 = *((uint32_t *)self + 12) + 52 * v116;
      }
    }
    else
    {
      v117 = 0;
      v111 = 0;
      if ( v116 != 0 )
      {
        v117 = 4 * v13;
        v111 = sub_4EBE70(4 * v13, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      }
      if ( v113 != v115 )
      {
        v103 = v113;
        v109 = (uint32_t *)v111;
        do
        {
          if ( v109 != nullptr )
          {
            *v109 = ((uint32_t)(uintptr_t)&off_2096808);
            v109[1] = (uint32_t)(uintptr_t)(&dword_213B814);
            v99 = (char *)v109 - v111;
            g4_std::string::assign_str(v109 + 1, v103 + 4);
            v99[v111 + 10] = *(uint8_t *)(v103 + 10);
            v109[3] = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v109 + 3, v103 + 12);
            v99[v111 + 18] = *(uint8_t *)(v103 + 18);
            v15 = v111 + 24;
            v105 = v111 + 24;
            v109[5] = (uint32_t)(uintptr_t)(&off_2096728);
            v16 = *(uint32_t *)(v103 + 28) - *(uint32_t *)(v103 + 24);
            v109[6] = 0;
            v17 = v16 >> 3;
            *(uint32_t *)&v99[v15 + 4] = 0;
            *(uint32_t *)&v99[v15 + 8] = 0;
            v18 = 0;
            v19 = 0;
            if ( -1431655765 * v17 != 0 )
            {
              v19 = 8 * v17;
              v18 = sub_4EBE70(8 * v17, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            }
            *(uint32_t *)&v99[v105 + 8] = v18 + v19;
            *(uint32_t *)&v99[v105] = v18;
            *(uint32_t *)&v99[v105 + 4] = v18;
            v94 = *(uint32_t *)(v103 + 28);
            v20 = v18;
            v21 = *(uint32_t *)(v103 + 24);
            if ( v94 != v21 )
            {
              v22 = *(uint32_t *)(v103 + 24);
              do
              {
                if ( v20 != 0 )
                {
                  v88 = v20 - v18;
                  *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_2096708);
                  *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                  v81 = v21;
                  g4_std::string::assign_str(v20 + 4, v22 + 4);
                  v21 = v81;
                  *(uint8_t *)(v88 + v18 + 4 + 6) = *(uint8_t *)(v22 + 10);
                  *(uint64_t *)(v20 + 12) = *(uint64_t *)(v22 + 12);
                  *(uint8_t *)(v18 + v88 + 22) = *(uint8_t *)(v22 + 22);
                }
                v20 += 24;
                v22 += 24;
              }
              while ( v94 != v22 );
            }
            *(uint32_t *)&v99[v105 + 4] = v20;
            v23 = (char *)v109 - v111;
            v109[9] = (uint32_t)(uintptr_t)(&off_2096728);
            v24 = (*(uint32_t *)(v103 + 44) - *(uint32_t *)(v103 + 40)) >> 3;
            v106 = v111 + 40;
            v25 = v111 + 40;
            v109[10] = 0;
            *(uint32_t *)&v99[v25 + 4] = 0;
            *(uint32_t *)&v99[v25 + 8] = 0;
            v26 = 0;
            v27 = 0;
            if ( -1431655765 * v24 != 0 )
            {
              v26 = 8 * v24;
              v27 = sub_4EBE70(8 * v24, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
              v23 = (char *)v109 - v111;
            }
            *(uint32_t *)&v23[v106 + 8] = v27 + v26;
            *(uint32_t *)&v23[v106] = v27;
            *(uint32_t *)&v23[v106 + 4] = v27;
            v95 = *(uint32_t *)(v103 + 44);
            v28 = v27;
            v29 = *(uint32_t *)(v103 + 40);
            if ( v95 != v29 )
            {
              v30 = *(uint32_t *)(v103 + 40);
              do
              {
                if ( v28 != 0 )
                {
                  v89 = v28 - v27;
                  *(uint32_t *)v28 = ((uint32_t)(uintptr_t)&off_2096708);
                  *(uint32_t *)(v28 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                  v82 = v29;
                  g4_std::string::assign_str(v28 + 4, v30 + 4);
                  v29 = v82;
                  *(uint8_t *)(v89 + v27 + 4 + 6) = *(uint8_t *)(v30 + 10);
                  *(uint64_t *)(v28 + 12) = *(uint64_t *)(v30 + 12);
                  *(uint8_t *)(v89 + v27 + 22) = *(uint8_t *)(v30 + 22);
                }
                v28 += 24;
                v30 += 24;
              }
              while ( v95 != v30 );
            }
            *(uint32_t *)&v99[v106 + 4] = v28;
          }
          v103 += 52;
          v109 += 13;
        }
        while ( v115 != v103 );
      }
      v31 = *((int **)self + 13);
      v32 = *((int **)self + 12);
      if ( v31 != v32 )
      {
        do
        {
          v33 = *v32;
          v73 = (size_t)v32;
          v32 += 13;
          (*(void (**)(size_t, std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *))(v33 + 16))(
            v73,
            v76);
        }
        while ( v31 != v32 );
        v32 = *((int **)self + 12);
      }
      if ( v32 != nullptr )
        sub_4EBEE0((int)(uintptr_t)(v32));
      v34 = self;
      v35 = v111 + v117;
      *((uint32_t *)self + 12) = v111;
      *((uint32_t *)self + 14) = v111 + v117;
    }
    *((uint32_t *)v34 + 13) = v35;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::Destroy  (binary VA: 0x1541ca0)
// Original: oi::BillingMethodArray::~BillingMethodArray
// ----------------------------------------------------------------------------
void oi::BillingMethodArray::Destroy(oi::BillingMethodArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;

  v1 = *((uint32_t **)self + 2);
  v2 = *((uint32_t **)self + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096828);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v2;
      v4 = v2;
      v2 += 13;
      (*(void (**)(uint32_t *))(v3 + 16))(v4);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t **)self + 1);
  }
  if ( v2 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v2));
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::Destroy_ea1541d00  (binary VA: 0x1541d00)
// Original: oi::BillingMethodArray::~BillingMethodArray
// ----------------------------------------------------------------------------
void oi::BillingMethodArray::Destroy_ea1541d00(oi::BillingMethodArray::Self *self)
{
  oi::BillingMethodArray::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::write  (binary VA: 0x1541d40)
// Original: oi::BillingMethodArray::write
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::write(oi::BillingMethodArray::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Json::Value::Self *v3;
  glwebtools::Self *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  typedef int _g4_t_i;
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[16];
  typedef int _g4_t_v12[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v12)) > _g4_s3 ? (60u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  v2 = *((uint32_t *)self + 1);
  for ( i = *((uint32_t *)self + 2); i != v2; v2 += 52 )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isArray(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v11), &loc_6);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v10), nullptr);
    v3 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::opAssign(v3, (const glwebtools::Json::Value::Self *)v10);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    v4 = (glwebtools::Self *)G4_VCALL<int>(v2, 4, v12);
    if ( glwebtools::IsOperationSuccess(v4) )
    {
      v6 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::append(v7, v6);
      v4 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    if ( !glwebtools::IsOperationSuccess(v4) )
      break;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::read  (binary VA: 0x1541ea0)
// Original: oi::BillingMethodArray::read
// ----------------------------------------------------------------------------
glwebtools::Self * oi::BillingMethodArray::read(int a1, int a2)
{
  glwebtools::Self *v2;
  glwebtools::Self *v3;
  int v4;
  glwebtools::Self *v5;
  typedef glwebtools::Self *_g4_t_v7;
  typedef glwebtools::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v2 = *(glwebtools::Self **)(a1 + 8);
  v8 = *(glwebtools::Self **)(a1 + 4);
  if ( v8 != v2 )
  {
    v3 = *(glwebtools::Self **)(a1 + 4);
    do
    {
      v4 = *(uint32_t *)v3;
      v7 = v3;
      v3 = (glwebtools::Self *)((char *)v3 + 52);
      (*(void (**)(glwebtools::Self *))(v4 + 16))(v7);
    }
    while ( v2 != v3 );
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v8);
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v9);
  v5 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v9, a2);
  if ( glwebtools::IsOperationSuccess(v5) )
    v5 = (glwebtools::Self *)(**(int (***)(int, uint8_t *))a1)(a1, v9);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::Destroy  (binary VA: 0x1541f30)
// Original: oi::BillingMethod::~BillingMethod
// ----------------------------------------------------------------------------
void oi::BillingMethod::Destroy(oi::BillingMethod::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096808);
  oi::ItemPriceArray::Destroy((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 36)));
  oi::ItemPriceArray::Destroy((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20)));
  v1 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::Destroy_ea1541fe0  (binary VA: 0x1541fe0)
// Original: oi::BillingMethod::~BillingMethod
// ----------------------------------------------------------------------------
void oi::BillingMethod::Destroy_ea1541fe0(oi::BillingMethod::Self *self)
{
  oi::BillingMethod::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::ToJsonString  (binary VA: 0x1542020)
// Original: oi::BillingMethod::ToJsonString
// ----------------------------------------------------------------------------
int oi::BillingMethod::ToJsonString(int a1, int a2)
{
  void *v2;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v5);
  G4_VCALL<void>(a1, 4, v5);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v4, (glwebtools::JsonWriter::Self *)v5);
  g4_std::string::assign_str(a2, &v4);
  v2 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::Clear  (binary VA: 0x15420d0)
// Original: oi::BillingMethod::Clear
// ----------------------------------------------------------------------------
uint32_t * oi::BillingMethod::Clear(oi::BillingMethod::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  v4 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v4);
  v1 = v4 - 3;
  if ( v4 - 3 != dword_213B808 && __sync_fetch_and_add(v4 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 10) = 0;
  v5 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 12, &v5);
  v2 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 18) = 0;
  oi::ItemPriceArray::Clear((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20)));
  return oi::ItemPriceArray::Clear((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 36)));
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::write  (binary VA: 0x15421b0)
// Original: oi::BillingMethod::write
// ----------------------------------------------------------------------------
int oi::BillingMethod::write(oi::BillingMethod::Self *self, glwebtools::JsonWriter::Self *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, char *a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, char *a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59)
{
  int v59;
  int v60;
  void *v61;
  void *v62;
  char isObject;
  int v64;
  int v65;
  void *v66;
  void *v67;
  glwebtools::Json::Value::Self *v68;
  glwebtools::Self *v69;
  void *v70;
  void *v71;
  glwebtools::Json::Value::Self *v72;
  glwebtools::Self *v73;
  void *v74;
  void *v75;
  glwebtools::Json::Value::Self *v77;
  glwebtools::Json::Value::Self *v78;
  glwebtools::Json::Value::Self *v79;
  glwebtools::Json::Value::Self *v80;
  glwebtools::Json::Value::Self *v81;
  glwebtools::Json::Value::Self *v82;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v84;
  glwebtools::Json::Value::Self *v85;
  glwebtools::Json::Value::Self *v86;
  const glwebtools::Json::Value::Self *v87;
  glwebtools::Json::Value::Self *v88;
  glwebtools::Json::Value::Self *v89;
  const glwebtools::Json::Value::Self *retaddr;
  char *v110;
  typedef char *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef const glwebtools::Json::Value::Self *_g4_t_v92;
  typedef char *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef char *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef char *_g4_t_v100;
  typedef uint32_t _g4_t_v101[8];
  typedef int _g4_t_v102[4];
  typedef int _g4_t_v103[3];
  typedef uint8_t _g4_t_v104[16];
  typedef uint8_t _g4_t_v105[16];
  typedef uint8_t _g4_t_v106[16];
  typedef uint8_t _g4_t_v107[48];
  typedef uint32_t _g4_t_v108[8];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v90)) > _g4_s0 ? (12u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v91)) > _g4_s1 ? (12u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v92)) > _g4_s2 ? (12u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v93)) > _g4_s3 ? (20u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v94)) > _g4_s4 ? (32u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v95)) > _g4_s5 ? (44u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v96)) > _g4_s6 ? (48u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v97)) > _g4_s7 ? (60u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v98)) > _g4_s8 ? (64u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v99)) > _g4_s9 ? (76u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v100)) > _g4_s10 ? (80u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v101)) > _g4_s11 ? (108u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v102)) > _g4_s12 ? (140u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (156u + sizeof(_g4_t_v103)) > _g4_s13 ? (156u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v104)) > _g4_s14 ? (168u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (184u + sizeof(_g4_t_v105)) > _g4_s15 ? (184u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (200u + sizeof(_g4_t_v106)) > _g4_s16 ? (200u + sizeof(_g4_t_v106)) : _g4_s16,
    _g4_s18 = (216u + sizeof(_g4_t_v107)) > _g4_s17 ? (216u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (264u + sizeof(_g4_t_v108)) > _g4_s18 ? (264u + sizeof(_g4_t_v108)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 12u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 20u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 44u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 48u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 60u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 64u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 76u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 80u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 108u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 140u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 156u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 168u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 184u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 200u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 216u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 264u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "type", (int)(uintptr_t)(&v94));
  v96 = (char *)self + 12;
  g4_std::string::construct_copy(v102, &v95);
  v59 = (int)(uintptr_t)(v96);
  v102[1] = (int)(uintptr_t)(v96);
  if ( v96[6] != 0 )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v104), (char *)&loc_6 + 1);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v104);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v104);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v108);
    v60 = -2147483646;
    if ( *(uint8_t *)(v59 + 6) != 0 )
      v60 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v108, v59);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v60) )
    {
      v87 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v108);
      v88 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v89 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v88, (char **)v102);
      glwebtools::Json::Value::opAssign(v89, v87);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v108);
  }
  v61 = (void *)(v102[0] - 12);
  if ( (uint32_t *)(v102[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v102[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v61);
  }
  v62 = (void *)(v95 - 12);
  if ( (uint32_t *)(v95 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v62);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v97), "name", (int)(uintptr_t)(&v94) + 1);
  v98 = (char *)self + 4;
  g4_std::string::construct_copy(v103, &v97);
  v103[1] = (int)(uintptr_t)(v98);
  if ( v98[6] != 0 )
  {
    v90 = v98;
    isObject = glwebtools::JsonWriter::isObject(a2);
    v64 = (int)(uintptr_t)(v90);
    if ( isObject == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v105), (char *)&loc_6 + 1);
      v86 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(v86, (const glwebtools::Json::Value::Self *)v105);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
      v64 = (int)(uintptr_t)(v90);
    }
    v91 = v64;
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v108);
    v65 = -2147483646;
    if ( *(uint8_t *)(v91 + 6) != 0 )
      v65 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v108, v91);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v65) )
    {
      v92 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v108);
      v84 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v85 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v84, (char **)v103);
      glwebtools::Json::Value::opAssign(v85, v92);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v108);
  }
  v66 = (void *)(v103[0] - 12);
  if ( (uint32_t *)(v103[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v103[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v66);
  }
  v67 = (void *)(v97 - 12);
  if ( (uint32_t *)(v97 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v67);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v99), "price", (int)(uintptr_t)(&v94) + 2);
  v100 = (char *)self + 20;
  g4_std::string::construct_copy(v101, &v99);
  v93 = v100;
  v101[1] = (uint32_t)(uintptr_t)(v100);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v107), (char *)&loc_6 + 1);
    v77 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v77, (const glwebtools::Json::Value::Self *)v107);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v107);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v108);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(v106), nullptr);
  v68 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v108);
  glwebtools::Json::Value::opAssign(v68, (const glwebtools::Json::Value::Self *)v106);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v106);
  v69 = (glwebtools::Self *)G4_VCALL<int>(v93, 8, v108);
  if ( glwebtools::IsOperationSuccess(v69) )
  {
    retaddr = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v108);
    v81 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v82 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v81, (char **)&a24);
    glwebtools::Json::Value::opAssign(v82, retaddr);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v108);
  v70 = (void *)(a24 - 12);
  if ( (uint32_t *)(a24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a24 - 4), 0xFFFFFFFF) <= 0 )
  {
    v108[6] = (uint32_t)(uintptr_t)(&a7);
    g4_std::string::Rep::M_destroy(v70);
  }
  v71 = (void *)(a16 - 12);
  if ( (uint32_t *)(a16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a16 - 4), 0xFFFFFFFF) <= 0 )
  {
    v108[6] = (uint32_t)(uintptr_t)((char *)&a7 + 1);
    g4_std::string::Rep::M_destroy(v71);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&a20), "replaced_price", (int)(uintptr_t)(&a5) + 3);
  a21 = (char *)self + 36;
  g4_std::string::construct_copy(&a28, &a20);
  v110 = a21;
  a29 = a21;
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(&a59), (char *)&loc_6 + 1);
    v80 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v80, (const glwebtools::Json::Value::Self *)&a59);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&a59);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v108);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(&a55), nullptr);
  v72 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v108);
  glwebtools::Json::Value::opAssign(v72, (const glwebtools::Json::Value::Self *)&a55);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&a55);
  v73 = (glwebtools::Self *)G4_VCALL<int>(v110, 8, v108);
  if ( glwebtools::IsOperationSuccess(v73) )
  {
    retaddr = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v108);
    v78 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v79 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v78, (char **)&a28);
    glwebtools::Json::Value::opAssign(v79, retaddr);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v108);
  v74 = (void *)(a28 - 12);
  if ( (uint32_t *)(a28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a28 - 4), 0xFFFFFFFF) <= 0 )
  {
    v108[6] = (uint32_t)(uintptr_t)((char *)&a7 + 2);
    g4_std::string::Rep::M_destroy(v74);
  }
  v75 = (void *)(a20 - 12);
  if ( (uint32_t *)(a20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a20 - 4), 0xFFFFFFFF) <= 0 )
  {
    v108[6] = (uint32_t)(uintptr_t)((char *)&a7 + 3);
    g4_std::string::Rep::M_destroy(v75);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::read  (binary VA: 0x15428d0)
// Original: oi::BillingMethod::read
// ----------------------------------------------------------------------------
int oi::BillingMethod::read(oi::BillingMethod::Self *self, const glwebtools::JsonReader::Self *a2, int a3, int a4, int a5, int a6)
{
  const glwebtools::Json::Value::Self *v6;
  uint32_t *v7;
  void *v8;
  void *v9;
  const glwebtools::Json::Value::Self *v10;
  uint32_t *v11;
  void *v12;
  void *v13;
  char IsValid;
  int v15;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v18;
  char v19;
  int v20;
  const glwebtools::Json::Value::Self *v21;
  char *v22;
  void *v23;
  void *v24;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t **_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef char *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef oi::ItemPriceArray::Self *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef void *_g4_t_v41;
  typedef void *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[2];
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef char *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef char *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t _g4_t_v82[7];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v33)) > _g4_s7 ? (20u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v34)) > _g4_s8 ? (20u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v36)) > _g4_s10 ? (32u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v37)) > _g4_s11 ? (36u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v38)) > _g4_s12 ? (36u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v39)) > _g4_s13 ? (36u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v40)) > _g4_s14 ? (40u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v41)) > _g4_s15 ? (40u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v42)) > _g4_s16 ? (40u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v43)) > _g4_s17 ? (44u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v44)) > _g4_s18 ? (48u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v45)) > _g4_s19 ? (56u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v46)) > _g4_s20 ? (60u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v47)) > _g4_s21 ? (64u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v48)) > _g4_s22 ? (68u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v49)) > _g4_s23 ? (72u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v50)) > _g4_s24 ? (76u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v51)) > _g4_s25 ? (80u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v52)) > _g4_s26 ? (84u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v53)) > _g4_s27 ? (88u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v54)) > _g4_s28 ? (92u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v55)) > _g4_s29 ? (96u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v56)) > _g4_s30 ? (100u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v57)) > _g4_s31 ? (104u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v58)) > _g4_s32 ? (108u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v59)) > _g4_s33 ? (112u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v60)) > _g4_s34 ? (116u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v61)) > _g4_s35 ? (120u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v62)) > _g4_s36 ? (124u + sizeof(_g4_t_v62)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v63)) > _g4_s37 ? (128u + sizeof(_g4_t_v63)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v64)) > _g4_s38 ? (132u + sizeof(_g4_t_v64)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v65)) > _g4_s39 ? (136u + sizeof(_g4_t_v65)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v66)) > _g4_s40 ? (140u + sizeof(_g4_t_v66)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v67)) > _g4_s41 ? (144u + sizeof(_g4_t_v67)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v68)) > _g4_s42 ? (148u + sizeof(_g4_t_v68)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v69)) > _g4_s43 ? (152u + sizeof(_g4_t_v69)) : _g4_s43,
    _g4_s45 = (156u + sizeof(_g4_t_v70)) > _g4_s44 ? (156u + sizeof(_g4_t_v70)) : _g4_s44,
    _g4_s46 = (160u + sizeof(_g4_t_v71)) > _g4_s45 ? (160u + sizeof(_g4_t_v71)) : _g4_s45,
    _g4_s47 = (164u + sizeof(_g4_t_v72)) > _g4_s46 ? (164u + sizeof(_g4_t_v72)) : _g4_s46,
    _g4_s48 = (168u + sizeof(_g4_t_v73)) > _g4_s47 ? (168u + sizeof(_g4_t_v73)) : _g4_s47,
    _g4_s49 = (172u + sizeof(_g4_t_v74)) > _g4_s48 ? (172u + sizeof(_g4_t_v74)) : _g4_s48,
    _g4_s50 = (176u + sizeof(_g4_t_v75)) > _g4_s49 ? (176u + sizeof(_g4_t_v75)) : _g4_s49,
    _g4_s51 = (180u + sizeof(_g4_t_v76)) > _g4_s50 ? (180u + sizeof(_g4_t_v76)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v77)) > _g4_s51 ? (184u + sizeof(_g4_t_v77)) : _g4_s51,
    _g4_s53 = (188u + sizeof(_g4_t_v78)) > _g4_s52 ? (188u + sizeof(_g4_t_v78)) : _g4_s52,
    _g4_s54 = (192u + sizeof(_g4_t_v79)) > _g4_s53 ? (192u + sizeof(_g4_t_v79)) : _g4_s53,
    _g4_s55 = (196u + sizeof(_g4_t_v80)) > _g4_s54 ? (196u + sizeof(_g4_t_v80)) : _g4_s54,
    _g4_s56 = (200u + sizeof(_g4_t_v81)) > _g4_s55 ? (200u + sizeof(_g4_t_v81)) : _g4_s55,
    _g4_s57 = (204u + sizeof(_g4_t_v82)) > _g4_s56 ? (204u + sizeof(_g4_t_v82)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 132u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 136u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 156u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 164u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 172u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 176u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 180u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 184u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 188u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 192u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 196u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 200u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 204u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "type", (int)(uintptr_t)(&v43) + 2);
  v51 = (char *)self + 12;
  g4_std::string::construct_copy(&v62, &v50);
  v63 = v51;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(a2, (char **)&v62) )
    {
      v6 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v62);
      v40 = v82;
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v82, v6);
      v37 = v63;
      v29 = &v46;
      v46 = &dword_213B814;
      v36 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v82, (int)(uintptr_t)(&v46));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v36) )
      {
        g4_std::string::assign_str(v37, &v46);
        v36 = 0;
        v37[6] = 1;
      }
      v7 = v46 - 3;
      if ( v46 - 3 != dword_213B808 && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v82);
    }
    else
    {
      v36 = -2147483646;
    }
  }
  else
  {
    v36 = -2147483645;
  }
  v8 = (void *)(v62 - 12);
  if ( (uint32_t *)(v62 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v50 - 12);
  if ( (uint32_t *)(v50 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  if ( v36 != 0 )
  {
    glwebtools::Console::Print();
    G4_VCALL<void>(self, 8, "BillingMethod parse failed [0x%8x] on : %s\n", v36, "reader >> glwebtools::JsonReader::ByName(\"type\", m_type)", v27, v28, v29, (char *)self + 12, v35, v36, v37, v40, v43, v44[0], v44[1], v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82[0], v82[1], v82[2], v82[3]);
    return a5;
  }
  else
  {
    if ( *((uint8_t *)self + 18) == 0 || *(uint32_t *)(*((uint32_t *)self + 3) - 12) == 0 )
      return -2147483646;
    v30 = (char *)self + 4;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "name", (int)(uintptr_t)(&v43) + 3);
    v55 = (char *)self + 4;
    g4_std::string::construct_copy(&v66, &v54);
    v67 = v55;
    v38 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
    {
      v38 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a2, (char **)&v66) )
      {
        v10 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v66);
        v40 = v82;
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v82, v10);
        v35 = v67;
        v30 = (char *)&v46;
        v46 = &dword_213B814;
        v38 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v82, (int)(uintptr_t)(&v46));
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v38) )
        {
          g4_std::string::assign_str(v35, &v46);
          v38 = 0;
          v35[6] = 1;
        }
        v11 = v46 - 3;
        if ( v46 - 3 != dword_213B808 && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v11);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v82);
      }
    }
    v12 = (void *)(v66 - 12);
    if ( (uint32_t *)(v66 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    if ( v38 != 0 )
    {
      glwebtools::Console::Print();
      G4_VCALL<void>(self, 8, "BillingMethod parse failed [0x%8x] on : %s\n", v38, "reader >> glwebtools::JsonReader::ByName(\"name\", m_name)", v27, v28, v30, &v54, v35, 0, v38, v40, v43, v44[0], v44[1], v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82[0], v82[1], v82[2], v82[3]);
      return a6;
    }
    else
    {
      if ( *((uint8_t *)self + 10) == 0 || *(uint32_t *)(*((uint32_t *)self + 1) - 12) == 0 )
        return -2147483646;
      v39 = (oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "price", (int)(uintptr_t)(v44));
      v59 = (char *)self + 20;
      g4_std::string::construct_copy(&v70, &v58);
      v71 = v59;
      IsValid = glwebtools::JsonReader::IsValid(a2);
      v15 = -2147483645;
      if ( IsValid != 0 )
      {
        isObject = glwebtools::JsonReader::isObject(a2);
        v15 = -2147483645;
        if ( isObject != 0 )
        {
          isMember = glwebtools::Json::Value::isMember(a2, (char **)&v70);
          v15 = -2147483646;
          if ( isMember )
          {
            v18 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v70);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v82, v18);
            v35 = v71;
            v19 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v82);
            v20 = -2147483645;
            if ( v19 != 0 )
              v20 = (**(int (***)(char *, uint32_t *))v35)(v35, v82);
            v31 = v20;
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v82);
            v15 = v31;
          }
        }
      }
      v41 = (void *)(v70 - 12);
      if ( (uint32_t *)(v70 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
      {
        v34 = v15;
        g4_std::string::Rep::M_destroy(v41);
        v15 = v34;
      }
      v42 = (void *)(v58 - 12);
      if ( (uint32_t *)(v58 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
      {
        v33 = v15;
        g4_std::string::Rep::M_destroy(v42);
        v15 = v33;
      }
      if ( v15 == 0 )
      {
        if ( oi::ItemPriceArray::Size(v39) != 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "replaced_price", (int)(uintptr_t)(&v45) + 1);
          v75 = (char *)self + 36;
          g4_std::string::construct_copy(&v78, &v74);
          v79 = v75;
          if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
            && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
            && glwebtools::Json::Value::isMember(a2, (char **)&v78) )
          {
            v21 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v78);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v82, v21);
            v22 = v79;
            if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v82) != 0 )
              (**(void (***)(char *, uint32_t *))v22)(v22, v82);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v82);
          }
          v23 = (void *)(v78 - 12);
          if ( (uint32_t *)(v78 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v23);
          }
          v24 = (void *)(v74 - 12);
          if ( (uint32_t *)(v74 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v24);
          }
          return v36;
        }
        return -2147483646;
      }
      v26 = v15;
      v32 = v15;
      glwebtools::Console::Print();
      G4_VCALL<void>(self, 8, "BillingMethod parse failed [0x%8x] on : %s\n", v26, "reader >> glwebtools::JsonReader::ByName(\"price\", m_itemPrices)", v27, v28, v32, &v58, v35, 0, v39, v42, v43, v44[0], v44[1], v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82[0], v82[1], v82[2], v82[3]);
      return (int)(uintptr_t)(a2);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::GetName  (binary VA: 0x1543110)
// Original: oi::BillingMethod::GetName
// ----------------------------------------------------------------------------
int oi::BillingMethod::GetName(oi::BillingMethod::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
  {
    result = *((uint32_t *)self + 1);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::GetType  (binary VA: 0x1543130)
// Original: oi::BillingMethod::GetType
// ----------------------------------------------------------------------------
int oi::BillingMethod::GetType(oi::BillingMethod::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 18) != 0 )
  {
    result = *((uint32_t *)self + 3);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::GetItemPrices  (binary VA: 0x1543150)
// Original: oi::BillingMethod::GetItemPrices
// ----------------------------------------------------------------------------
char * oi::BillingMethod::GetItemPrices(oi::BillingMethod::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::GetItemRegularPrices  (binary VA: 0x1543160)
// Original: oi::BillingMethod::GetItemRegularPrices
// ----------------------------------------------------------------------------
char * oi::BillingMethod::GetItemRegularPrices(oi::BillingMethod::Self *self)
{
  return (char *)self + 36;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::Print  (binary VA: 0x1543170)
// Original: oi::BillingMethod::Print
// ----------------------------------------------------------------------------
unsigned int oi::BillingMethod::Print(oi::BillingMethod::Self *self)
{
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  oi::ItemPriceArray::Self *v11;
  unsigned int v12;
  oi::ItemPrice::Self *v13;
  unsigned int v14;
  oi::ItemPriceArray::Self *v15;
  oi::ItemPrice::Self *v16;
  unsigned int result;
  typedef unsigned int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef uint32_t _g4_t_v20[4];
  typedef uint32_t _g4_t_v21[4];
  typedef uint32_t _g4_t_v22[4];
  typedef uint32_t _g4_t_v23[4];
  typedef uint32_t _g4_t_v24[4];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v19)) > _g4_s1 ? (48u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v20)) > _g4_s2 ? (64u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v21)) > _g4_s3 ? (80u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (96u + sizeof(_g4_t_v22)) > _g4_s4 ? (96u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (112u + sizeof(_g4_t_v23)) > _g4_s5 ? (112u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (128u + sizeof(_g4_t_v24)) > _g4_s6 ? (128u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (144u + sizeof(_g4_t_v25)) > _g4_s7 ? (144u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (148u + sizeof(_g4_t_v26)) > _g4_s8 ? (148u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (152u + sizeof(_g4_t_v27)) > _g4_s9 ? (152u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (156u + sizeof(_g4_t_v28)) > _g4_s10 ? (156u + sizeof(_g4_t_v28)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 128u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 144u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 148u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 152u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 156u);

  glwebtools::Console::Print();
  if ( *((uint8_t *)self + 18) != 0 && *(uint32_t *)(*((uint32_t *)self + 3) - 12) != 0 )
  {
    g4_std::string::construct_copy(v21, (char *)self + 12);
    g4_std::string::construct_copy(v20, v21);
    g4_std::string::construct_copy(v19, v20);
    g4_std::string::construct_copy(&v27, v19);
    g4_std::string::construct_copy(&v25, &v27);
    v1 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v1);
    }
    v2 = (void *)(v19[0] - 12);
    if ( (uint32_t *)(v19[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    v3 = (void *)(v20[0] - 12);
    if ( (uint32_t *)(v20[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v21[0] - 12);
    if ( (uint32_t *)(v21[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    glwebtools::Console::Print();
    v5 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
  }
  if ( *((uint8_t *)self + 10) != 0 && *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0 )
  {
    g4_std::string::construct_copy(v24, (char *)self + 4);
    g4_std::string::construct_copy(v23, v24);
    g4_std::string::construct_copy(v22, v23);
    g4_std::string::construct_copy(v28, v22);
    g4_std::string::construct_copy(&v26, v28);
    v6 = (void *)(v28[0] - 12);
    if ( (uint32_t *)(v28[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v22[0] - 12);
    if ( (uint32_t *)(v22[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v23[0] - 12);
    if ( (uint32_t *)(v23[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v24[0] - 12);
    if ( (uint32_t *)(v24[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    glwebtools::Console::Print();
    v10 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
  }
  v11 = (oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20));
  v12 = 0;
  while ( v12 < oi::ItemPriceArray::Size(v11) )
  {
    v18 = v12++;
    v13 = (oi::ItemPrice::Self *)oi::ItemPriceArray::opIndex((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20)), v18);
    oi::ItemPrice::Print(v13);
    v11 = (oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20));
  }
  v14 = 0;
  v15 = (oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 36));
  while ( 1 )
  {
    result = oi::ItemPriceArray::Size(v15);
    if ( v14 >= result )
      break;
    v16 = (oi::ItemPrice::Self *)oi::ItemPriceArray::opIndex(v15, v14++);
    oi::ItemPrice::Print(v16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethod::totalSize  (binary VA: 0x1543590)
// Original: oi::BillingMethod::totalSize
// ----------------------------------------------------------------------------
int oi::BillingMethod::totalSize(oi::BillingMethod::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  if ( *((uint8_t *)self + 18) != 0 )
    v1 = *(uint32_t *)(*((uint32_t *)self + 3) - 12);
  if ( *((uint8_t *)self + 10) != 0 )
  {
    v2 = *(uint32_t *)(*((uint32_t *)self + 1) - 12);
    if ( v2 != 0 )
      v1 += v2;
  }
  v3 = oi::ItemPriceArray::totalSize((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 20))) + v1;
  return v3 + oi::ItemPriceArray::totalSize((oi::ItemPriceArray::Self *)((oi::BillingMethod::Self *)((char *)self + 36)));
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::Size  (binary VA: 0x1543600)
// Original: oi::BillingMethodArray::Size
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::Size(oi::BillingMethodArray::Self *self)
{
  return -991146299 * ((*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 2);
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::GetBillingMethod  (binary VA: 0x1543620)
// Original: oi::BillingMethodArray::GetBillingMethod
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::GetBillingMethod(oi::BillingMethodArray::Self *self, unsigned int a2)
{
  int result;
  int v3;

  result = 0;
  v3 = *((uint32_t *)self + 1);
  if ( a2 < -991146299 * ((*((uint32_t *)self + 2) - v3) >> 2) )
    return v3 + 52 * a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::GetBillingMethod  (binary VA: 0x1543650)
// Original: oi::BillingMethodArray::GetBillingMethod
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::GetBillingMethod(int a1, const char **a2, const char **a3)
{
  int v3;
  int result;
  unsigned int v5;
  int v6;
  const char *s2;
  const char *s1;
  const char *v9;
  const char *Name;

  if ( *a3 == nullptr )
    return 0;
  v3 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( -991146299 * ((*(uint32_t *)(a1 + 8) - v3) >> 2) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = 52 * v5;
      s2 = *a2;
      s1 = (const char *)oi::BillingMethod::GetType((oi::BillingMethod::Self *)(52 * v5 + v3));
      if ( strcmp(s1, s2) == 0 )
      {
        v9 = *a3;
        Name = (const char *)oi::BillingMethod::GetName((oi::BillingMethod::Self *)(*(uint32_t *)(a1 + 4) + v6));
        if ( strcmp(Name, v9) == 0 )
          break;
      }
      ++v5;
      v3 = *(uint32_t *)(a1 + 4);
      if ( v5 >= -991146299 * ((*(uint32_t *)(a1 + 8) - v3) >> 2) )
        return 0;
    }
    return v6 + *(uint32_t *)(a1 + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::Clear  (binary VA: 0x1543720)
// Original: oi::BillingMethodArray::Clear
// ----------------------------------------------------------------------------
uint32_t * oi::BillingMethodArray::Clear(oi::BillingMethodArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;

  v1 = *((uint32_t **)self + 2);
  v6 = *((uint32_t **)self + 1);
  if ( v6 != v1 )
  {
    v2 = *((uint32_t **)self + 1);
    do
    {
      v3 = *v2;
      v5 = v2;
      v2 += 13;
      (*(void (**)(uint32_t *))(v3 + 16))(v5);
    }
    while ( v1 != v2 );
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v6);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::opIndex  (binary VA: 0x1543760)
// Original: oi::BillingMethodArray::operator[]
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::opIndex(oi::BillingMethodArray::Self *self, unsigned int a2)
{
  return oi::BillingMethodArray::GetBillingMethod(self, a2);
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::totalSize  (binary VA: 0x1543790)
// Original: oi::BillingMethodArray::totalSize
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::totalSize(oi::BillingMethodArray::Self *self)
{
  int v1;
  int v2;
  unsigned int v3;
  int v4;

  v1 = 0;
  v2 = *((uint32_t *)self + 1);
  if ( -991146299 * ((*((uint32_t *)self + 2) - v2) >> 2) != 0 )
  {
    v3 = 0;
    do
    {
      v4 = 52 * v3++;
      v1 += oi::BillingMethod::totalSize((oi::BillingMethod::Self *)(v4 + v2));
      v2 = *((uint32_t *)self + 1);
    }
    while ( v3 < -991146299 * ((*((uint32_t *)self + 2) - v2) >> 2) );
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: oi::BillingMethodArray::read  (binary VA: 0x1543800)
// Original: oi::BillingMethodArray::read
// ----------------------------------------------------------------------------
int oi::BillingMethodArray::read(oi::BillingMethodArray::Self *self, const glwebtools::JsonReader::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  unsigned int v5;
  glwebtools::Self *v6;
  int v7;
  int v8;
  char v9;
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
  int v20;
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
  uint32_t *v32;
  uint32_t *v33;
  int v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef bool _g4_t_IsOperationSuccess;
  typedef size_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef const glwebtools::JsonReader::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef oi::BillingMethodArray::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char _g4_t_v67[16];
  typedef int _g4_t_v68[2];
  typedef uint8_t _g4_t_v69[8];
  typedef int _g4_t_v70[4];
  typedef uint32_t (**_g4_t_v71)(oi::BillingMethod::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef char _g4_t_v75;
  typedef uint32_t (**_g4_t_v76)(oi::ItemPriceArray::Self *, const glwebtools::JsonReader::Self *);
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint32_t (**_g4_t_v80)(oi::ItemPriceArray::Self *, const glwebtools::JsonReader::Self *);
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef oi::BillingMethodArray::Self **_g4_t_v84;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v36)) > _g4_s1 ? (8u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v37)) > _g4_s2 ? (16u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v38)) > _g4_s3 ? (20u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v39)) > _g4_s4 ? (24u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v40)) > _g4_s5 ? (28u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v41)) > _g4_s6 ? (52u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_IsOperationSuccess)) > _g4_s7 ? (64u + sizeof(_g4_t_IsOperationSuccess)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v43)) > _g4_s8 ? (72u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v44)) > _g4_s9 ? (76u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v45)) > _g4_s10 ? (80u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v46)) > _g4_s11 ? (84u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v47)) > _g4_s12 ? (88u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v48)) > _g4_s13 ? (92u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v49)) > _g4_s14 ? (96u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v50)) > _g4_s15 ? (100u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v51)) > _g4_s16 ? (104u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v52)) > _g4_s17 ? (104u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v53)) > _g4_s18 ? (104u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v54)) > _g4_s19 ? (108u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v55)) > _g4_s20 ? (108u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v56)) > _g4_s21 ? (108u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v57)) > _g4_s22 ? (112u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v58)) > _g4_s23 ? (112u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v59)) > _g4_s24 ? (112u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v60)) > _g4_s25 ? (116u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v61)) > _g4_s26 ? (124u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v62)) > _g4_s27 ? (124u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v63)) > _g4_s28 ? (132u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v64)) > _g4_s29 ? (132u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v65)) > _g4_s30 ? (132u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v66)) > _g4_s31 ? (132u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v67)) > _g4_s32 ? (136u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v68)) > _g4_s33 ? (152u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v69)) > _g4_s34 ? (160u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v70)) > _g4_s35 ? (168u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v71)) > _g4_s36 ? (184u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v72)) > _g4_s37 ? (188u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (194u + sizeof(_g4_t_v73)) > _g4_s38 ? (194u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (196u + sizeof(_g4_t_v74)) > _g4_s39 ? (196u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (202u + sizeof(_g4_t_v75)) > _g4_s40 ? (202u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v76)) > _g4_s41 ? (204u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v77)) > _g4_s42 ? (208u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (212u + sizeof(_g4_t_v78)) > _g4_s43 ? (212u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (216u + sizeof(_g4_t_v79)) > _g4_s44 ? (216u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (220u + sizeof(_g4_t_v80)) > _g4_s45 ? (220u + sizeof(_g4_t_v80)) : _g4_s45,
    _g4_s47 = (224u + sizeof(_g4_t_v81)) > _g4_s46 ? (224u + sizeof(_g4_t_v81)) : _g4_s46,
    _g4_s48 = (228u + sizeof(_g4_t_v82)) > _g4_s47 ? (228u + sizeof(_g4_t_v82)) : _g4_s47,
    _g4_s49 = (232u + sizeof(_g4_t_v83)) > _g4_s48 ? (232u + sizeof(_g4_t_v83)) : _g4_s48,
    _g4_s50 = (256u + sizeof(_g4_t_v84)) > _g4_s49 ? (256u + sizeof(_g4_t_v84)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_IsOperationSuccess &IsOperationSuccess = *reinterpret_cast<_g4_t_IsOperationSuccess *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 100u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 104u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 108u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 108u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 132u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 132u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 132u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 136u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 152u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 160u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 184u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 188u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 194u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 196u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 202u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 204u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 208u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 212u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 216u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 220u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 224u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 228u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 232u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 256u);

  v84 = &self;
  v48 = self;
  v45 = a2;
  v2 = *((uint32_t **)self + 2);
  v63 = *((uint32_t **)self + 1);
  if ( v63 != v2 )
  {
    v3 = *((uint32_t **)self + 1);
    do
    {
      v4 = *v3;
      v35 = v3;
      v3 += 13;
      (*(void (**)(uint32_t *))(v4 + 16))(v35);
    }
    while ( v2 != v3 );
  }
  *((uint32_t *)v48 + 2) = (uint32_t)(uintptr_t)(v63);
  if ( (uint8_t)glwebtools::JsonReader::isArray(v45) != 0 )
  {
    v5 = glwebtools::JsonReader::size(v45);
    if ( v5 > 0x4EC4EC4 )
      sub_1900180("vector::reserve");
    v47 = *((uint32_t *)v48 + 1);
    if ( v5 > -991146299 * ((*((uint32_t *)v48 + 3) - v47) >> 2) )
    {
      v43 = 0;
      v44 = *((uint32_t *)v48 + 2);
      v49 = 0;
      if ( v5 != 0 )
      {
        v43 = 52 * v5;
        v49 = sub_4EBE70(52 * v5, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      }
      if ( v47 != v44 )
      {
        v59 = v47;
        v50 = (uint32_t *)v49;
        do
        {
          if ( v50 != nullptr )
          {
            *v50 = ((uint32_t)(uintptr_t)&off_2096808);
            v60 = (char *)v50 - v49;
            v50[1] = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v50 + 1, v59 + 4);
            v60[v49 + 10] = *(uint8_t *)(v59 + 10);
            v50[3] = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v50 + 3, v59 + 12);
            v60[v49 + 18] = *(uint8_t *)(v59 + 18);
            v50[5] = (uint32_t)(uintptr_t)(&off_2096728);
            v22 = (*(uint32_t *)(v59 + 28) - *(uint32_t *)(v59 + 24)) >> 3;
            v50[6] = 0;
            v52 = v49 + 24;
            *(uint32_t *)&v60[v52 + 4] = 0;
            *(uint32_t *)&v60[v52 + 8] = 0;
            v23 = 0;
            v24 = 0;
            if ( -1431655765 * v22 != 0 )
            {
              v23 = 8 * v22;
              v24 = sub_4EBE70(8 * v22, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            }
            *(uint32_t *)&v60[v52] = v24;
            *(uint32_t *)&v60[v52 + 4] = v24;
            *(uint32_t *)&v60[v52 + 8] = v24 + v23;
            v55 = *(uint32_t *)(v59 + 28);
            v25 = v24;
            if ( v55 != *(uint32_t *)(v59 + 24) )
            {
              v26 = *(uint32_t *)(v59 + 24);
              v41 = v24;
              do
              {
                if ( v25 != 0 )
                {
                  *(uint32_t *)v25 = ((uint32_t)(uintptr_t)&off_2096708);
                  v65 = v25 - v41;
                  *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                  g4_std::string::assign_str(v25 + 4, v26 + 4);
                  *(uint8_t *)(v65 + v41 + 4 + 6) = *(uint8_t *)(v26 + 10);
                  *(uint64_t *)(v25 + 12) = *(uint64_t *)(v26 + 12);
                  *(uint8_t *)(v41 + v65 + 22) = *(uint8_t *)(v26 + 22);
                }
                v25 += 24;
                v26 += 24;
              }
              while ( v55 != v26 );
            }
            *(uint32_t *)&v60[v52 + 4] = v25;
            v50[9] = (uint32_t)(uintptr_t)(&off_2096728);
            v53 = v49 + 40;
            v27 = (*(uint32_t *)(v59 + 44) - *(uint32_t *)(v59 + 40)) >> 3;
            v50[10] = 0;
            *(uint32_t *)&v60[v53 + 4] = 0;
            *(uint32_t *)&v60[v53 + 8] = 0;
            v28 = 0;
            v29 = 0;
            if ( -1431655765 * v27 != 0 )
            {
              v28 = 8 * v27;
              v29 = sub_4EBE70(8 * v27, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            }
            *(uint32_t *)&v60[v53] = v29;
            *(uint32_t *)&v60[v53 + 4] = v29;
            *(uint32_t *)&v60[v53 + 8] = v29 + v28;
            v56 = *(uint32_t *)(v59 + 44);
            v30 = v29;
            if ( v56 != *(uint32_t *)(v59 + 40) )
            {
              v31 = *(uint32_t *)(v59 + 40);
              v46 = v29;
              do
              {
                if ( v30 != 0 )
                {
                  *(uint32_t *)v30 = ((uint32_t)(uintptr_t)&off_2096708);
                  v66 = v30 - v46;
                  *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                  g4_std::string::assign_str(v30 + 4, v31 + 4);
                  *(uint8_t *)(v66 + v46 + 4 + 6) = *(uint8_t *)(v31 + 10);
                  *(uint64_t *)(v30 + 12) = *(uint64_t *)(v31 + 12);
                  *(uint8_t *)(v46 + v66 + 22) = *(uint8_t *)(v31 + 22);
                }
                v30 += 24;
                v31 += 24;
              }
              while ( v56 != v31 );
            }
            *(uint32_t *)&v60[v53 + 4] = v30;
          }
          v59 += 52;
          v50 += 13;
        }
        while ( v44 != v59 );
      }
      v32 = *((uint32_t **)v48 + 2);
      v33 = *((uint32_t **)v48 + 1);
      if ( v32 != v33 )
      {
        do
        {
          v34 = *v33;
          v36 = v33;
          v33 += 13;
          (*(void (**)(uint32_t *))(v34 + 16))(v36);
        }
        while ( v32 != v33 );
        v33 = *((uint32_t **)v48 + 1);
      }
      if ( v33 != nullptr )
        sub_4EBEE0((int)(uintptr_t)(v33));
      *((uint32_t *)v48 + 1) = v49;
      *((uint32_t *)v48 + 2) = v49 + 4 * ((v44 - v47) >> 2);
      *((uint32_t *)v48 + 3) = v43 + v49;
    }
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v68);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v69);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v68,
                              (const glwebtools::JsonReader::Iterator::Self *)v69) == 0 )
        break;
      v73 = 0;
      v75 = 0;
      v77 = 0;
      v71 = (uint32_t (**)(oi::BillingMethod::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096808));
      v72 = &dword_213B814;
      v74 = &dword_213B814;
      v78 = 0;
      v76 = (uint32_t (**)(oi::ItemPriceArray::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096728);
      v80 = (uint32_t (**)(oi::ItemPriceArray::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096728);
      v79 = 0;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v70,
        (glwebtools::Json::ValueIteratorBase::Self *)v68);
      v6 = (glwebtools::Self *)oi::BillingMethod::read(
                           (oi::BillingMethod::Self *)&v71,
                           (const glwebtools::JsonReader::Self *)v70,
                           v37,
                           v38,
                           v39,
                           v40);
      IsOperationSuccess = glwebtools::IsOperationSuccess(v6);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v70);
      if ( IsOperationSuccess )
      {
        v7 = *((uint32_t *)v48 + 2);
        v64 = (uint32_t *)v7;
        if ( v7 == *((uint32_t *)v48 + 3) )
        {
          g4_std::vector_oi_BillingMethod_glwebto_98e51d::M_insert_aux(
            (char *)v48 + 4,
            v7,
            &v71);
        }
        else
        {
          v8 = 0;
          if ( v7 != 0 )
          {
            *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_2096808);
            *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v7 + 4, &v72);
            v9 = v73;
            *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
            *(uint8_t *)(v7 + 10) = v9;
            g4_std::string::assign_str(v7 + 12, &v74);
            v10 = 0;
            *(uint8_t *)(v7 + 18) = v75;
            *(uint32_t *)(v7 + 20) = (uint32_t)(uintptr_t)(&off_2096728);
            v11 = v78 - v77;
            *(uint32_t *)(v7 + 28) = 0;
            v12 = v11 >> 3;
            *(uint32_t *)(v7 + 24) = 0;
            *(uint32_t *)(v7 + 32) = 0;
            v13 = 0;
            if ( -1431655765 * v12 != 0 )
            {
              v13 = 8 * v12;
              v10 = sub_4EBE70(8 * v12, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            }
            v64[6] = v10;
            v64[7] = v10;
            v64[8] = v10 + v13;
            v57 = v78;
            v14 = v10;
            if ( v78 != v77 )
            {
              v15 = v77;
              v51 = v10;
              do
              {
                if ( v14 != 0 )
                {
                  *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_2096708);
                  v61 = v14 - v51;
                  *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                  g4_std::string::assign_str(v14 + 4, v15 + 4);
                  *(uint8_t *)(v61 + v51 + 4 + 6) = *(uint8_t *)(v15 + 10);
                  *(uint64_t *)(v14 + 12) = *(uint64_t *)(v15 + 12);
                  *(uint8_t *)(v51 + v61 + 22) = *(uint8_t *)(v15 + 22);
                }
                v14 += 24;
                v15 += 24;
              }
              while ( v57 != v15 );
            }
            v64[7] = v14;
            v64[9] = (uint32_t)(uintptr_t)(&off_2096728);
            v16 = (v82 - v81) >> 3;
            v17 = 0;
            v64[10] = 0;
            v64[11] = 0;
            v64[12] = 0;
            v18 = 0;
            if ( -1431655765 * v16 != 0 )
            {
              v18 = 8 * v16;
              v17 = sub_4EBE70(8 * v16, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            }
            v64[10] = v17;
            v64[11] = v17;
            v64[12] = v17 + v18;
            v58 = v82;
            v19 = v17;
            if ( v82 != v81 )
            {
              v20 = v81;
              v54 = v17;
              do
              {
                if ( v19 != 0 )
                {
                  *(uint32_t *)v19 = ((uint32_t)(uintptr_t)&off_2096708);
                  v62 = v19 - v54;
                  *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
                  g4_std::string::assign_str(v19 + 4, v20 + 4);
                  *(uint8_t *)(v62 + v54 + 4 + 6) = *(uint8_t *)(v20 + 10);
                  *(uint64_t *)(v19 + 12) = *(uint64_t *)(v20 + 12);
                  *(uint8_t *)(v62 + v54 + 22) = *(uint8_t *)(v20 + 22);
                }
                v19 += 24;
                v20 += 24;
              }
              while ( v58 != v20 );
            }
            v64[11] = v19;
            v8 = *((uint32_t *)v48 + 2);
          }
          *((uint32_t *)v48 + 2) = v8 + 52;
        }
      }
      oi::BillingMethod::Destroy((oi::BillingMethod::Self *)&v71);
      v37 = 0;
      glwebtools::JsonReader::Iterator::opInc(
        (glwebtools::JsonReader::Iterator::Self *)v67,
        (glwebtools::JsonReader::Iterator::Self *)v68);
    }
    return 0;
  }
  else
  {
    glwebtools::Console::Print();
    return -2147483646;
  }
}


