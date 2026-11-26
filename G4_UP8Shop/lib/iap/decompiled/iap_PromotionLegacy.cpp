#include "Core/Utils/DecompTypes.h"
#include "iap_PromotionLegacy.h"

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::read  (binary VA: 0x1505ac0)
// Original: iap::PromotionLegacy::read
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::read(int (***a1)(uint32_t, uint8_t *), int a2)
{
  int v2;
  uint8_t v4[16];

  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v4, a2);
  v2 = (**a1)((uint32_t)(uintptr_t)(a1), v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::GetId  (binary VA: 0x1505bf0)
// Original: iap::PromotionLegacy::GetId
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetId(iap::PromotionLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
    return *((uint32_t *)self + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::GetStartTime  (binary VA: 0x1505c00)
// Original: iap::PromotionLegacy::GetStartTime
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetStartTime(iap::PromotionLegacy::Self *self)
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
// Function: iap::PromotionLegacy::GetEndTime  (binary VA: 0x1505c20)
// Original: iap::PromotionLegacy::GetEndTime
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetEndTime(iap::PromotionLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 26) != 0 )
  {
    result = *((uint32_t *)self + 5);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::GetReduction  (binary VA: 0x1505c40)
// Original: iap::PromotionLegacy::GetReduction
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetReduction(iap::PromotionLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 34) != 0 )
    return *((uint32_t *)self + 7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::GetItemId  (binary VA: 0x1505c50)
// Original: iap::PromotionLegacy::GetItemId
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetItemId(iap::PromotionLegacy::Self *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 9);
  result = 0;
  if ( a2 < (*((uint32_t *)self + 10) - v2) >> 2 )
    return *(uint32_t *)(v2 + 4 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::GetItemCount  (binary VA: 0x1505c70)
// Original: iap::PromotionLegacy::GetItemCount
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetItemCount(iap::PromotionLegacy::Self *self)
{
  return (*((uint32_t *)self + 10) - *((uint32_t *)self + 9)) >> 2;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::GetDescription  (binary VA: 0x1505c80)
// Original: iap::PromotionLegacy::GetDescription
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::GetDescription(iap::PromotionLegacy::Self *self, char *a2)
{
  int result;
  char *v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  typedef size_t _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef uint16_t _g4_t_v16[15];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v16)) > _g4_s4 ? (30u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 30u);

  result = 0;
  if ( a2 == nullptr )
    return result;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16[1]), a2, (int)(uintptr_t)(v16));
  v3 = *((char **)self + 14);
  v13 = (char *)self + 52;
  if ( v3 != nullptr )
  {
    v15 = *(char **)&v16[1];
    v14 = (char *)self + 52;
    v4 = *(uint32_t *)(*(uint32_t *)&v16[1] - 12);
    do
    {
      while ( 1 )
      {
        v5 = v4;
        v6 = *(uint32_t *)(*((uint32_t *)v3 + 4) - 12);
        v12 = v4;
        if ( v6 <= v4 )
          v5 = *(uint32_t *)(*((uint32_t *)v3 + 4) - 12);
        v7 = memcmp(*((const void **)v3 + 4), v15, v5);
        v4 = v12;
        v8 = v6 - v12;
        if ( v7 != 0 )
          v8 = v7;
        if ( v8 < 0 )
          break;
        v14 = v3;
        v3 = *((char **)v3 + 2);
        if ( v3 == nullptr )
          goto LABEL_11;
      }
      v3 = *((char **)v3 + 3);
    }
    while ( v3 != nullptr );
LABEL_11:
    if ( v13 != v14 )
    {
      v9 = v12;
      v10 = *(uint32_t *)(*((uint32_t *)v14 + 4) - 12);
      if ( v10 <= v12 )
        v9 = *(uint32_t *)(*((uint32_t *)v14 + 4) - 12);
      v11 = memcmp(v15, *((const void **)v14 + 4), v9);
      if ( v11 == 0 )
        v11 = v12 - v10;
      if ( v11 >= 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v15 = *(char **)&v16[1];
  }
  v14 = (char *)self + 52;
LABEL_17:
  if ( v15 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v15 - 12);
  if ( v13 == v14 )
    return 0;
  else
    return *((uint32_t *)v14 + 5);
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::Print  (binary VA: 0x1505dd0)
// Original: iap::PromotionLegacy::Print
// ----------------------------------------------------------------------------
iap::PromotionLegacy::Self * iap::PromotionLegacy::Print(iap::PromotionLegacy::Self *self)
{
  iap::PromotionLegacy::Self *result;

  for ( result = *((iap::PromotionLegacy::Self **)self + 15);
        result != (iap::PromotionLegacy::Self *)((char *)self + 52);
        result = (iap::PromotionLegacy::Self *)sub_19048E0(result) )
  {
    ;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::Destroy  (binary VA: 0x1505f30)
// Original: iap::PromotionLegacy::~PromotionLegacy
// ----------------------------------------------------------------------------
void iap::PromotionLegacy::Destroy(iap::PromotionLegacy::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096100);
  g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
    (char *)self + 48,
    *((uint32_t *)self + 14));
  v1 = *((uint32_t **)self + 10);
  v2 = *((uint32_t **)self + 9);
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
    v2 = *((uint32_t **)self + 9);
  }
  if ( v2 != nullptr )
    opDelete(v2);
  v4 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::Destroy_ea1506030  (binary VA: 0x1506030)
// Original: iap::PromotionLegacy::~PromotionLegacy
// ----------------------------------------------------------------------------
void iap::PromotionLegacy::Destroy_ea1506030(iap::PromotionLegacy::Self *self)
{
  iap::PromotionLegacy::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::Clear  (binary VA: 0x1506070)
// Original: iap::PromotionLegacy::Clear
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::Clear(iap::PromotionLegacy::Self *self)
{
  iap::PromotionLegacy::Self *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  bool v12;
  int v13;
  int i;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v20)) > _g4_s4 ? (48u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (54u + sizeof(_g4_t_v21)) > _g4_s5 ? (54u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v23)) > _g4_s7 ? (68u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v24)) > _g4_s8 ? (72u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v25)) > _g4_s9 ? (80u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v26)) > _g4_s10 ? (84u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v27)) > _g4_s11 ? (88u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v28)) > _g4_s12 ? (92u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v29)) > _g4_s13 ? (96u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v30)) > _g4_s14 ? (100u + sizeof(_g4_t_v30)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 54u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);

  v1 = self;
  v19 = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint8_t *)self + 10) = 0;
  v18 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 12, &v18);
  v2 = v18;
  *((uint8_t *)self + 18) = 1;
  if ( v2 - 3 != dword_213B808 && __sync_fetch_and_add(v2 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2 - 3);
  v21 = 0;
  v20 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 20, &v20);
  v3 = v20;
  *((uint8_t *)self + 26) = 1;
  if ( v3 - 3 != dword_213B808 && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3 - 3);
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 34) = 0;
  v22 = nullptr;
  v23 = nullptr;
  v24 = 0;
  if ( &v22 != (uint32_t **)((char *)self + 36) )
  {
    v4 = *((uint32_t **)self + 9);
    v17 = *((uint32_t **)self + 10);
    v5 = nullptr;
    v6 = nullptr;
    if ( v4 != v17 )
    {
      v7 = *((uint32_t **)self + 9);
      do
      {
        v8 = (uint32_t *)(*v7 - 12);
        if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v7 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v8);
        ++v7;
      }
      while ( v17 != v7 );
      v4 = *((uint32_t **)self + 9);
      v6 = v23;
      v5 = v22;
    }
    *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v4);
    if ( v5 != v6 )
    {
      v9 = v6;
      do
      {
        v10 = (uint32_t *)(*v5 - 12);
        if ( v10 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v10);
        ++v5;
      }
      while ( v5 != v9 );
      v1 = self;
      v5 = v22;
    }
    if ( v5 != nullptr )
      opDelete(v5);
  }
  v28 = &v26;
  v29 = &v26;
  v26 = 0;
  v27 = 0;
  v30 = 0;
  v16 = 0;
  if ( (int *)((char *)v1 + 48) != &v25 )
  {
    g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
      (char *)v1 + 48,
      *((uint32_t *)v1 + 14));
    v11 = v27;
    v12 = v27 == 0;
    *((uint32_t *)v1 + 15) = (uint32_t)(uintptr_t)((char *)v1 + 52);
    *((uint32_t *)v1 + 14) = 0;
    *((uint32_t *)v1 + 16) = (uint32_t)(uintptr_t)((char *)v1 + 52);
    *((uint32_t *)v1 + 17) = 0;
    if ( !v12 )
    {
      v13 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
              (char *)v1 + 48,
              v11,
              (char *)v1 + 52));
      *((uint32_t *)v1 + 14) = v13;
      for ( i = v13; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
        ;
      *((uint32_t *)v1 + 15) = i;
      while ( *(uint32_t *)(v13 + 12) != 0 )
        v13 = *(uint32_t *)(v13 + 12);
      *((uint32_t *)v1 + 16) = v13;
      *((uint32_t *)v1 + 17) = v30;
      v16 = v27;
    }
  }
  return ((g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
           &v25,
           v16)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacy::read  (binary VA: 0x1506320)
// Original: iap::PromotionLegacy::read
// ----------------------------------------------------------------------------
int iap::PromotionLegacy::read(iap::PromotionLegacy::Self *self, const glwebtools::JsonReader::Self *a2)
{
  iap::PromotionLegacy::Self *v2;
  void *v3;
  void *v4;
  const glwebtools::Json::Value::Self *v5;
  void *v6;
  void *v7;
  void *v8;
  const glwebtools::Json::Value::Self *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  const glwebtools::Json::Value::Self *v16;
  glwebtools::Self **v17;
  glwebtools::Self *v18;
  uint32_t *v19;
  glwebtools::Self *v20;
  void *v21;
  glwebtools::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  glwebtools::Self *v27;
  glwebtools::Json::Value::Self *v28;
  glwebtools::Self *v29;
  uint32_t *v30;
  void *v31;
  void *v32;
  void *v33;
  void *v34;
  const glwebtools::Json::Value::Self *v36;
  glwebtools::Json::Value::Self *v37;
  const glwebtools::Json::Value::Self *v38;
  const glwebtools::Json::Value::Self *v39;
  unsigned int v40;
  size_t v41;
  void *v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef glwebtools::Json::Value::Self *_g4_t_v45;
  typedef glwebtools::Json::Value::Self *_g4_t_v46;
  typedef glwebtools::Json::Value::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef iap::PromotionLegacy::Self *_g4_t_v51;
  typedef glwebtools::Self *_g4_t_v52;
  typedef glwebtools::Self *_g4_t_v53;
  typedef glwebtools::Self *_g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef glwebtools::Self *_g4_t_v56;
  typedef glwebtools::Self *_g4_t_v57;
  typedef glwebtools::JsonReader::Self *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef glwebtools::Self **_g4_t_v61;
  typedef const glwebtools::JsonReader::Self *_g4_t_v62;
  typedef glwebtools::Json::Value::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68[4];
  typedef int _g4_t_v69;
  typedef char _g4_t_v70[4];
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef glwebtools::Json::Value::Self *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef char *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef glwebtools::Json::Value::Self *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef char *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef glwebtools::Self **_g4_t_v88;
  typedef int _g4_t_v89;
  typedef glwebtools::Json::Value::Self *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef char *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef glwebtools::Self **_g4_t_v94;
  typedef int _g4_t_v95;
  typedef glwebtools::Json::Value::Self *_g4_t_v96;
  typedef uint8_t _g4_t_v97[8];
  typedef uint8_t _g4_t_v98[8];
  typedef int _g4_t_v99[4];
  typedef uint8_t _g4_t_v100[16];
  typedef uint8_t _g4_t_v101[16];
  typedef uint32_t _g4_t_v102[10];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v44)) > _g4_s1 ? (0u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v45)) > _g4_s2 ? (4u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v46)) > _g4_s3 ? (4u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v47)) > _g4_s4 ? (4u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v48)) > _g4_s5 ? (8u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v49)) > _g4_s6 ? (12u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v50)) > _g4_s7 ? (16u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v51)) > _g4_s8 ? (20u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v52)) > _g4_s9 ? (24u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v53)) > _g4_s10 ? (28u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v54)) > _g4_s11 ? (28u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v55)) > _g4_s12 ? (28u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v56)) > _g4_s13 ? (28u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v57)) > _g4_s14 ? (28u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v58)) > _g4_s15 ? (32u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v59)) > _g4_s16 ? (36u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v60)) > _g4_s17 ? (36u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v61)) > _g4_s18 ? (36u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v62)) > _g4_s19 ? (40u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v63)) > _g4_s20 ? (40u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v64)) > _g4_s21 ? (44u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (54u + sizeof(_g4_t_v65)) > _g4_s22 ? (54u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (55u + sizeof(_g4_t_v66)) > _g4_s23 ? (55u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (65u + sizeof(_g4_t_v67)) > _g4_s24 ? (65u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v68)) > _g4_s25 ? (80u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v69)) > _g4_s26 ? (96u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v70)) > _g4_s27 ? (100u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v71)) > _g4_s28 ? (104u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v72)) > _g4_s29 ? (108u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v73)) > _g4_s30 ? (112u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v74)) > _g4_s31 ? (116u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v75)) > _g4_s32 ? (128u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v76)) > _g4_s33 ? (132u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v77)) > _g4_s34 ? (144u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v78)) > _g4_s35 ? (148u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v79)) > _g4_s36 ? (160u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v80)) > _g4_s37 ? (164u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v81)) > _g4_s38 ? (176u + sizeof(_g4_t_v81)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v82)) > _g4_s39 ? (180u + sizeof(_g4_t_v82)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v83)) > _g4_s40 ? (192u + sizeof(_g4_t_v83)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v84)) > _g4_s41 ? (196u + sizeof(_g4_t_v84)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v85)) > _g4_s42 ? (208u + sizeof(_g4_t_v85)) : _g4_s42,
    _g4_s44 = (212u + sizeof(_g4_t_v86)) > _g4_s43 ? (212u + sizeof(_g4_t_v86)) : _g4_s43,
    _g4_s45 = (224u + sizeof(_g4_t_v87)) > _g4_s44 ? (224u + sizeof(_g4_t_v87)) : _g4_s44,
    _g4_s46 = (228u + sizeof(_g4_t_v88)) > _g4_s45 ? (228u + sizeof(_g4_t_v88)) : _g4_s45,
    _g4_s47 = (240u + sizeof(_g4_t_v89)) > _g4_s46 ? (240u + sizeof(_g4_t_v89)) : _g4_s46,
    _g4_s48 = (244u + sizeof(_g4_t_v90)) > _g4_s47 ? (244u + sizeof(_g4_t_v90)) : _g4_s47,
    _g4_s49 = (256u + sizeof(_g4_t_v91)) > _g4_s48 ? (256u + sizeof(_g4_t_v91)) : _g4_s48,
    _g4_s50 = (260u + sizeof(_g4_t_v92)) > _g4_s49 ? (260u + sizeof(_g4_t_v92)) : _g4_s49,
    _g4_s51 = (272u + sizeof(_g4_t_v93)) > _g4_s50 ? (272u + sizeof(_g4_t_v93)) : _g4_s50,
    _g4_s52 = (276u + sizeof(_g4_t_v94)) > _g4_s51 ? (276u + sizeof(_g4_t_v94)) : _g4_s51,
    _g4_s53 = (288u + sizeof(_g4_t_v95)) > _g4_s52 ? (288u + sizeof(_g4_t_v95)) : _g4_s52,
    _g4_s54 = (292u + sizeof(_g4_t_v96)) > _g4_s53 ? (292u + sizeof(_g4_t_v96)) : _g4_s53,
    _g4_s55 = (304u + sizeof(_g4_t_v97)) > _g4_s54 ? (304u + sizeof(_g4_t_v97)) : _g4_s54,
    _g4_s56 = (312u + sizeof(_g4_t_v98)) > _g4_s55 ? (312u + sizeof(_g4_t_v98)) : _g4_s55,
    _g4_s57 = (320u + sizeof(_g4_t_v99)) > _g4_s56 ? (320u + sizeof(_g4_t_v99)) : _g4_s56,
    _g4_s58 = (336u + sizeof(_g4_t_v100)) > _g4_s57 ? (336u + sizeof(_g4_t_v100)) : _g4_s57,
    _g4_s59 = (352u + sizeof(_g4_t_v101)) > _g4_s58 ? (352u + sizeof(_g4_t_v101)) : _g4_s58,
    _g4_s60 = (368u + sizeof(_g4_t_v102)) > _g4_s59 ? (368u + sizeof(_g4_t_v102)) : _g4_s59
  };
  alignas(16) uint8_t _g4_sf[_g4_s60];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 54u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 55u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 65u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 100u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 108u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 112u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 116u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 132u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 144u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 148u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 160u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 164u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 176u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 180u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 192u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 196u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 208u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 212u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 224u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 228u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 240u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 244u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 256u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 260u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 272u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 276u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 288u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 292u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 304u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 312u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 320u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 336u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 352u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 368u);

  v102[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v62 = a2;
  v45 = (glwebtools::Json::Value::Self *)((iap::PromotionLegacy::Self *)((char *)self + 4));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "promo_id", (int)(uintptr_t)(&v65));
  v74 = v45;
  g4_std::string::construct_copy(&v79, &v73);
  v80 = v74;
  v64 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
  {
    v64 = -2147483646;
    if ( glwebtools::Json::Value::isMember(v62, (char **)&v79) )
    {
      v36 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v79);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v101, v36);
      v37 = v80;
      v64 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v101, &v71);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v64) )
      {
        v64 = 0;
        *(uint32_t *)v37 = v71;
        *((uint8_t *)v37 + 6) = 1;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
    }
  }
  v3 = (void *)(v79 - 12);
  if ( (uint32_t *)(v79 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v73 - 12);
  if ( (uint32_t *)(v73 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( v64 == 0 )
  {
    v64 = -2147483646;
    if ( *((uint8_t *)v2 + 10) == 0 )
      return v64;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "promo_start", (int)(uintptr_t)(&v66));
    v76 = (char *)v2 + 12;
    g4_std::string::construct_copy(&v81, &v75);
    v82 = v76;
    v64 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
    {
      v64 = -2147483646;
      if ( glwebtools::Json::Value::isMember(v62, (char **)&v81) )
      {
        v5 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v81);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v101, v5);
        v59 = v82;
        v99[0] = (int)(uintptr_t)(&dword_213B814);
        v64 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v101, (int)(uintptr_t)(v99));
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v64) )
        {
          g4_std::string::assign_str(v59, v99);
          v64 = 0;
          v59[6] = 1;
        }
        v6 = (void *)(v99[0] - 12);
        if ( (uint32_t *)(v99[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v99[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
      }
    }
    v7 = (void *)(v81 - 12);
    if ( (uint32_t *)(v81 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v75 - 12);
    if ( (uint32_t *)(v75 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( v64 == 0 )
    {
      v64 = -2147483646;
      if ( *((uint8_t *)v2 + 18) == 0 || *(uint32_t *)(*((uint32_t *)v2 + 3) - 12) == 0 )
        return v64;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "promo_end", (int)(uintptr_t)(&v66) + 1);
      v78 = (char *)v2 + 20;
      g4_std::string::construct_copy(&v83, &v77);
      v84 = v78;
      v64 = -2147483645;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
      {
        v64 = -2147483646;
        if ( glwebtools::Json::Value::isMember(v62, (char **)&v83) )
        {
          v9 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v83);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v101, v9);
          v60 = v84;
          v99[0] = (int)(uintptr_t)(&dword_213B814);
          v64 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v101, (int)(uintptr_t)(v99));
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v64) )
          {
            g4_std::string::assign_str(v60, v99);
            v64 = 0;
            v60[6] = 1;
          }
          v10 = (void *)(v99[0] - 12);
          if ( (uint32_t *)(v99[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v99[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
        }
      }
      v11 = (void *)(v83 - 12);
      if ( (uint32_t *)(v83 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      v12 = (void *)(v77 - 12);
      if ( (uint32_t *)(v77 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      if ( v64 == 0 )
      {
        v64 = -2147483646;
        if ( *((uint8_t *)v2 + 26) == 0 || *(uint32_t *)(*((uint32_t *)v2 + 5) - 12) == 0 )
          return v64;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v85), "reduction_percentage", (int)(uintptr_t)(&v67));
        v86 = (char *)v2 + 28;
        g4_std::string::construct_copy(&v91, &v85);
        v92 = v86;
        v64 = -2147483645;
        if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
          && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
        {
          v64 = -2147483646;
          if ( glwebtools::Json::Value::isMember(v62, (char **)&v91) )
          {
            v38 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v91);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v101, v38);
            v44 = v92;
            v64 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v101, (int *)&v71);
            if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v64) )
            {
              v64 = 0;
              *(uint32_t *)v44 = v71;
              v44[6] = 1;
            }
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
          }
        }
        v13 = (void *)(v91 - 12);
        if ( (uint32_t *)(v91 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v91 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
        }
        v14 = (void *)(v85 - 12);
        if ( (uint32_t *)(v85 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v85 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v14);
        }
        if ( v64 == 0 )
        {
          if ( *((uint8_t *)v2 + 34) == 0 )
            return -2147483646;
          glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v99, v62, "promo_tags");
          glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)v68);
          glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v100, v62, "promo_tags");
          glwebtools::JsonReader::ToString((glwebtools::JsonReader::Self *)&v72);
          v58 = (glwebtools::JsonReader::Self *)(v72 - 12);
          if ( (uint32_t *)(v72 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v58);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v100);
          v15 = (void *)(v68[0] - 12);
          if ( (uint32_t *)(v68[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
          }
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v99) != 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v87), "items_list", (int)(uintptr_t)(&v67) + 1);
            v88 = (glwebtools::Self **)((char *)v2 + 36);
            g4_std::string::construct_copy(&v93, &v87);
            v94 = v88;
            if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
              && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
            {
              if ( glwebtools::Json::Value::isMember(v62, (char **)&v93) )
              {
                v16 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v93);
                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v101, v16);
                v17 = v94;
                v61 = v94;
                v18 = *v94;
                v52 = *v94;
                v53 = v94[1];
                if ( *v94 != v53 )
                {
                  do
                  {
                    v19 = (uint32_t *)(*(uint32_t *)v18 - 12);
                    if ( v19 != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v18 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      v47 = (glwebtools::Json::Value::Self *)(v18);
                      g4_std::string::Rep::M_destroy(v19);
                      v18 = (glwebtools::Self *)(v47);
                    }
                    v18 = (glwebtools::Self *)((char *)v18 + 4);
                  }
                  while ( v53 != v18 );
                  v18 = v52;
                  v17 = v61;
                }
                v17[1] = v18;
                glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v97);
                v51 = v2;
                while ( 1 )
                {
                  glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v98);
                  if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                          (glwebtools::JsonReader::Iterator::Self *)v97,
                                          (const glwebtools::JsonReader::Iterator::Self *)v98) == 0 )
                  {
                    v2 = v51;
                    goto LABEL_78;
                  }
                  v69 = (int)(uintptr_t)(&dword_213B814);
                  glwebtools::JsonReader::Iterator::opMul(
                    (glwebtools::JsonReader::Iterator::Self *)v102,
                    (glwebtools::Json::ValueIteratorBase::Self *)v97);
                  v54 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v102, (int)(uintptr_t)(&v69));
                  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v102);
                  if ( !glwebtools::IsOperationSuccess(v54) )
                    break;
                  v22 = v61[1];
                  if ( v22 == v61[2] )
                  {
                    v23 = (v22 - *v61) >> 2;
                    v50 = 4;
                    v55 = v23;
                    if ( v23 != 0 && (v40 = 2 * v23, v50 = 0xFFFFFFFC, v55 <= v40) )
                    {
                      v41 = 8 * v55;
                      if ( v40 > 0x3FFFFFFF )
                        v41 = 0xFFFFFFFC;
                      v50 = v41;
                      v24 = opNew(v41);
                    }
                    else
                    {
                      v24 = opNew(v50);
                    }
                    v49 = v24;
                    v48 = v24 + 4;
                    v25 = v24 + 4 * v55;
                    if ( v25 != 0 )
                      g4_std::string::construct_copy(v25, &v69);
                    if ( v22 != *v61 )
                    {
                      v56 = v22;
                      v26 = v49;
                      v27 = *v61;
                      do
                      {
                        if ( v26 != 0 )
                        {
                          v43 = v26;
                          g4_std::string::construct_copy(v26, v27);
                          v26 = v43;
                        }
                        v27 = (glwebtools::Self *)((char *)v27 + 4);
                        v26 += 4;
                      }
                      while ( v56 != v27 );
                      v22 = v56;
                      v48 = v26 + 4;
                    }
                    v57 = v61[1];
                    if ( v22 != v57 )
                    {
                      v28 = (glwebtools::Json::Value::Self *)v48;
                      do
                      {
                        if ( v28 != nullptr )
                        {
                          v46 = v28;
                          g4_std::string::construct_copy(v28, v22);
                          v28 = v46;
                        }
                        v22 = (glwebtools::Self *)((char *)v22 + 4);
                        v28 = (glwebtools::Json::Value::Self *)((char *)v28 + 4);
                      }
                      while ( v57 != v22 );
                      v48 = (int)(uintptr_t)(v28);
                      v57 = v61[1];
                    }
                    v29 = *v61;
                    if ( v57 != *v61 )
                    {
                      do
                      {
                        v30 = (uint32_t *)(*(uint32_t *)v29 - 12);
                        if ( v30 != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v29 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy(v30);
                        }
                        v29 = (glwebtools::Self *)((char *)v29 + 4);
                      }
                      while ( v57 != v29 );
                      v29 = *v61;
                    }
                    if ( v29 != nullptr )
                      opDelete(v29);
                    *v61 = (glwebtools::Self *)v49;
                    v61[1] = (glwebtools::Self *)v48;
                    v61[2] = (glwebtools::Self *)(v50 + v49);
                  }
                  else
                  {
                    v20 = nullptr;
                    if ( v22 != nullptr )
                    {
                      g4_std::string::construct_copy(v22, &v69);
                      v20 = v61[1];
                    }
                    v61[1] = (glwebtools::Self *)((char *)v20 + 4);
                  }
                  v21 = (void *)(v69 - 12);
                  if ( (uint32_t *)(v69 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v21);
                  }
                  glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v97);
                }
                v2 = v51;
                v42 = (void *)(v69 - 12);
                if ( (uint32_t *)(v69 - 12) == dword_213B808 )
                {
                  v64 = (int)(uintptr_t)(v54);
                }
                else
                {
                  v64 = (int)(uintptr_t)(v54);
                  if ( __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
                    g4_std::string::Rep::M_destroy(v42);
                }
LABEL_78:
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
              }
              else
              {
                v64 = -2147483646;
              }
            }
            else
            {
              v64 = -2147483645;
            }
            v31 = (void *)(v93 - 12);
            if ( (uint32_t *)(v93 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v93 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v31);
            }
            v32 = (void *)(v87 - 12);
            if ( (uint32_t *)(v87 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v32);
            }
            if ( v64 != 0 )
              goto LABEL_100;
          }
          g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
            (char *)v2 + 48,
            *((uint32_t *)v2 + 14));
          *((uint32_t *)v2 + 14) = 0;
          *((uint32_t *)v2 + 17) = 0;
          *((uint32_t *)v2 + 15) = (uint32_t)(uintptr_t)((char *)v2 + 52);
          *((uint32_t *)v2 + 16) = (uint32_t)(uintptr_t)((char *)v2 + 52);
          iap::PairedStringMapReader::Construct(v70, (char *)v2 + 48);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v89), "promo_descriptions", (int)(uintptr_t)(&v67) + 2);
          v90 = (glwebtools::Json::Value::Self *)v70;
          g4_std::string::construct_copy(&v95, &v89);
          v96 = v90;
          v64 = -2147483645;
          if ( (uint8_t)glwebtools::JsonReader::IsValid(v62) != 0
            && (uint8_t)glwebtools::JsonReader::isObject(v62) != 0 )
          {
            v64 = -2147483646;
            if ( glwebtools::Json::Value::isMember(v62, (char **)&v95) )
            {
              v39 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v62, (const char **)&v95);
              glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v101, v39);
              v63 = v96;
              v64 = -2147483645;
              if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v101) != 0 )
                v64 = iap::PairedStringMapReader::read(v63, (const glwebtools::JsonReader::Self *)v101);
              glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v101);
            }
          }
          v33 = (void *)(v95 - 12);
          if ( (uint32_t *)(v95 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v33);
          }
          v34 = (void *)(v89 - 12);
          if ( (uint32_t *)(v89 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v89 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v34);
          }
          if ( v64 != 0 )
LABEL_100:
            iap::PromotionLegacy::Clear(v2);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v99);
          return v64;
        }
      }
    }
  }
  iap::PromotionLegacy::Clear(v2);
  return v64;
}


