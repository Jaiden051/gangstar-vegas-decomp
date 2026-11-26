#include "Core/Utils/DecompTypes.h"
#include "iap_BillingMethodAndroid.h"

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodAndroid::Construct  (binary VA: 0x151eb40)
// Original: iap::BillingMethodAndroid::BillingMethodAndroid
// ----------------------------------------------------------------------------
iap::BillingMethodAndroid::Self * iap::BillingMethodAndroid::Construct(iap::BillingMethodAndroid::Self *self, const iap::BillingMethodAndroid::Self *a2)
{
  char v2;
  char v3;
  char v4;
  char v5;
  char v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *i;
  char v10;
  int v11;
  int v12;
  iap::BillingMethodAndroid::Self *result;
  unsigned int v14;
  int v15;
  int j;
  iap::BillingMethodAndroid::Self *v17;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096048);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)self + 4, (char *)a2 + 4);
  v2 = *((uint8_t *)a2 + 10);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 10) = v2;
  g4_std::string::assign_str((char *)self + 12, (char *)a2 + 12);
  v3 = *((uint8_t *)a2 + 18);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 18) = v3;
  g4_std::string::assign_str((char *)self + 20, (char *)a2 + 20);
  v4 = *((uint8_t *)a2 + 26);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 26) = v4;
  g4_std::string::assign_str((char *)self + 28, (char *)a2 + 28);
  *((uint8_t *)self + 34) = *((uint8_t *)a2 + 34);
  *(uint64_t *)((char *)self + 36) = *(uint64_t *)((char *)a2 + 36);
  v5 = *((uint8_t *)a2 + 46);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 46) = v5;
  g4_std::string::assign_str((char *)self + 48, (char *)a2 + 48);
  *((uint8_t *)self + 54) = *((uint8_t *)a2 + 54);
  *((uint64_t *)self + 7) = *((uint64_t *)a2 + 7);
  v6 = *((uint8_t *)a2 + 66);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 66) = v6;
  g4_std::string::assign_str((char *)self + 68, (char *)a2 + 68);
  *((uint8_t *)self + 74) = *((uint8_t *)a2 + 74);
  g4_std::string::construct_copy((char *)self + 76, (char *)a2 + 76);
  g4_std::string::construct_copy((char *)self + 80, (char *)a2 + 80);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)((char *)self + 88);
  v7 = *((uint32_t **)a2 + 23);
  if ( v7 != nullptr )
  {
    v8 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
           (int)(uintptr_t)(self) + 84,
           v7,
           (int)(uintptr_t)(self) + 88);
    *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v8);
    for ( i = v8; i[2] != 0; i = (uint32_t *)i[2] )
      ;
    *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(i);
    while ( v8[3] != 0 )
      v8 = (uint32_t *)v8[3];
    *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(v8);
    *((uint32_t *)self + 26) = *((uint32_t *)a2 + 26);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20966C8);
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)self + 108, (char *)a2 + 108);
  v10 = *((uint8_t *)a2 + 114);
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 114) = v10;
  v11 = 0;
  g4_std::string::assign_str((char *)self + 116, (char *)a2 + 116);
  *((uint8_t *)self + 122) = *((uint8_t *)a2 + 122);
  result = nullptr;
  v14 = (*((uint32_t *)a2 + 32) - *((uint32_t *)a2 + 31)) >> 3;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  if ( v14 != 0 )
  {
    if ( v14 > 0x1FFFFFFF )
      sub_18FFEE0(v12, v14);
    v11 = 8 * v14;
    result = (iap::BillingMethodAndroid::Self *)opNew(8 * v14);
  }
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)((char *)result + v11);
  v15 = *((uint32_t *)a2 + 32);
  for ( j = *((uint32_t *)a2 + 31); v15 != j; result = (iap::BillingMethodAndroid::Self *)((char *)result + 8) )
  {
    if ( result != nullptr )
    {
      v17 = result;
      g4_std::string::construct_copy(result, j);
      g4_std::string::construct_copy((char *)v17 + 4, j + 4);
      result = v17;
    }
    j += 8;
  }
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodAndroid::Clear  (binary VA: 0x1539b90)
// Original: iap::BillingMethodAndroid::Clear
// ----------------------------------------------------------------------------
glwebtools::JSONObject::Self * iap::BillingMethodAndroid::Clear(glwebtools::JSONObject::Self ***self)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  iap::BillingMethod::Clear((iap::BillingMethod::Self *)self);
  v5 = &dword_213B814;
  g4_std::string::assign_str(self + 27, &v5);
  v1 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 114) = 0;
  v4 = &dword_213B814;
  g4_std::string::assign_str(self + 29, &v4);
  v2 = v4 - 3;
  if ( v4 - 3 != dword_213B808 && __sync_fetch_and_add(v4 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 122) = 0;
  return glwebtools::JSONObject::Clear(self + 31);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodAndroid::Destroy  (binary VA: 0x1539c70)
// Original: iap::BillingMethodAndroid::~BillingMethodAndroid
// ----------------------------------------------------------------------------
void iap::BillingMethodAndroid::Destroy(iap::BillingMethodAndroid::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20966C8);
  v1 = *((uint32_t **)self + 31);
  v7 = *((uint32_t **)self + 32);
  if ( v7 != v1 )
  {
    v2 = *((uint32_t **)self + 31);
    do
    {
      v3 = v2[1];
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v4 = (uint32_t *)(*v2 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v2 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      v2 += 2;
    }
    while ( v7 != v2 );
    v1 = *((uint32_t **)self + 31);
  }
  if ( v1 != nullptr )
    opDelete(v1);
  v5 = *((uint32_t *)self + 29);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 27);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  iap::BillingMethod::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodAndroid::Destroy_ea1539db0  (binary VA: 0x1539db0)
// Original: iap::BillingMethodAndroid::~BillingMethodAndroid
// ----------------------------------------------------------------------------
void iap::BillingMethodAndroid::Destroy_ea1539db0(iap::BillingMethodAndroid::Self *self)
{
  iap::BillingMethodAndroid::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodAndroid::write  (binary VA: 0x1539df0)
// Original: iap::BillingMethodAndroid::write
// ----------------------------------------------------------------------------
int iap::BillingMethodAndroid::write(iap::BillingMethodAndroid::Self *self, glwebtools::JsonWriter::Self *a2)
{
  char isObject;
  int v3;
  int v4;
  void *v5;
  int v6;
  void *v7;
  void *v8;
  glwebtools::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef const glwebtools::Json::Value::Self *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28[3];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v22)) > _g4_s4 ? (30u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v23)) > _g4_s5 ? (36u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v24)) > _g4_s6 ? (40u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v25)) > _g4_s7 ? (52u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v26)) > _g4_s8 ? (68u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v27)) > _g4_s9 ? (72u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v28)) > _g4_s10 ? (84u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v29)) > _g4_s11 ? (96u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v30)) > _g4_s12 ? (112u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v31)) > _g4_s13 ? (128u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 30u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);

  iap::BillingMethod::write(self, a2);
  if ( *((uint8_t *)self + 114) != 0 && *(uint32_t *)(*((uint32_t *)self + 27) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "content_id", (int)(uintptr_t)(&v22));
    v24 = (char *)self + 108;
    g4_std::string::construct_copy(v25, &v23);
    v25[1] = (int)(uintptr_t)(v24);
    if ( v24[6] != 0 )
    {
      v18 = v24;
      isObject = glwebtools::JsonWriter::isObject(a2);
      v3 = (int)(uintptr_t)(v18);
      if ( isObject == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v29), (char *)&loc_6 + 1);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v29);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v29);
        v3 = (int)(uintptr_t)(v18);
      }
      v19 = v3;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v31);
      v4 = -2147483646;
      if ( *(uint8_t *)(v19 + 6) != 0 )
        v4 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v31, v19);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
      {
        v20 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v31);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v11, (char **)v25);
        glwebtools::Json::Value::opAssign(v12, v20);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v31);
    }
    v21 = (void *)(v25[0] - 12);
    if ( (uint32_t *)(v25[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    v5 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
  }
  if ( *((uint8_t *)self + 122) == 0 || *(uint32_t *)(*((uint32_t *)self + 29) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "replaced_content_id", (int)(uintptr_t)(&v22) + 3);
    v27 = (char *)self + 116;
    g4_std::string::construct_copy(v28, &v26);
    v6 = (int)(uintptr_t)(v27);
    v28[1] = (int)(uintptr_t)(v27);
    if ( v27[6] != 0 )
    {
      if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v30), (char *)&loc_6 + 1);
        v17 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v17, (const glwebtools::Json::Value::Self *)v30);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v30);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v31);
      v10 = nullptr;
      if ( *(uint8_t *)(v6 + 6) != 0 )
        v10 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v31, v6);
      if ( glwebtools::IsOperationSuccess(v10) )
      {
        v14 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v31);
        v15 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v16 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v15, (char **)v28);
        glwebtools::Json::Value::opAssign(v16, v14);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v31);
    }
    v7 = (void *)(v28[0] - 12);
    if ( (uint32_t *)(v28[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodAndroid::read  (binary VA: 0x153a1d0)
// Original: iap::BillingMethodAndroid::read
// ----------------------------------------------------------------------------
int iap::BillingMethodAndroid::read(long double a1, iap::BillingMethodAndroid::Self *self, const glwebtools::JsonReader::Self *a3, int a4, int a5, int a6, int a7)
{
  int v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  const glwebtools::Json::Value::Self *v13;
  void *v14;
  const glwebtools::Json::Value::Self *v15;
  void *v16;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef glwebtools::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
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
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64[7];
  typedef char *_g4_t_v65;
  typedef const char *_g4_t_v66;
  typedef const char *_g4_t_v67;
  typedef const char *_g4_t_v68;
  typedef const char *_g4_t_v69;
  typedef const char *_g4_t_v70;
  typedef const char *_g4_t_v71;
  typedef const char *_g4_t_v72;
  typedef const char *_g4_t_v73;
  typedef char *_g4_t_v74;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v22)) > _g4_s5 ? (20u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v26)) > _g4_s9 ? (28u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v27)) > _g4_s10 ? (32u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v28)) > _g4_s11 ? (32u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v29)) > _g4_s12 ? (32u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v30)) > _g4_s13 ? (36u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v31)) > _g4_s14 ? (40u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v32)) > _g4_s15 ? (40u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v33)) > _g4_s16 ? (40u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v34)) > _g4_s17 ? (44u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v35)) > _g4_s18 ? (48u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v36)) > _g4_s19 ? (48u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v37)) > _g4_s20 ? (52u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v38)) > _g4_s21 ? (56u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v39)) > _g4_s22 ? (56u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v40)) > _g4_s23 ? (60u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v41)) > _g4_s24 ? (60u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v42)) > _g4_s25 ? (64u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v43)) > _g4_s26 ? (68u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v44)) > _g4_s27 ? (72u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v45)) > _g4_s28 ? (76u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v46)) > _g4_s29 ? (80u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v47)) > _g4_s30 ? (84u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v48)) > _g4_s31 ? (88u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v49)) > _g4_s32 ? (92u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v50)) > _g4_s33 ? (96u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v51)) > _g4_s34 ? (100u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v52)) > _g4_s35 ? (104u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v53)) > _g4_s36 ? (108u + sizeof(_g4_t_v53)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v54)) > _g4_s37 ? (112u + sizeof(_g4_t_v54)) : _g4_s37,
    _g4_s39 = (116u + sizeof(_g4_t_v55)) > _g4_s38 ? (116u + sizeof(_g4_t_v55)) : _g4_s38,
    _g4_s40 = (120u + sizeof(_g4_t_v56)) > _g4_s39 ? (120u + sizeof(_g4_t_v56)) : _g4_s39,
    _g4_s41 = (124u + sizeof(_g4_t_v57)) > _g4_s40 ? (124u + sizeof(_g4_t_v57)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v58)) > _g4_s41 ? (128u + sizeof(_g4_t_v58)) : _g4_s41,
    _g4_s43 = (132u + sizeof(_g4_t_v59)) > _g4_s42 ? (132u + sizeof(_g4_t_v59)) : _g4_s42,
    _g4_s44 = (136u + sizeof(_g4_t_v60)) > _g4_s43 ? (136u + sizeof(_g4_t_v60)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v61)) > _g4_s44 ? (140u + sizeof(_g4_t_v61)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v62)) > _g4_s45 ? (144u + sizeof(_g4_t_v62)) : _g4_s45,
    _g4_s47 = (148u + sizeof(_g4_t_v63)) > _g4_s46 ? (148u + sizeof(_g4_t_v63)) : _g4_s46,
    _g4_s48 = (152u + sizeof(_g4_t_v64)) > _g4_s47 ? (152u + sizeof(_g4_t_v64)) : _g4_s47,
    _g4_s49 = (180u + sizeof(_g4_t_v65)) > _g4_s48 ? (180u + sizeof(_g4_t_v65)) : _g4_s48,
    _g4_s50 = (184u + sizeof(_g4_t_v66)) > _g4_s49 ? (184u + sizeof(_g4_t_v66)) : _g4_s49,
    _g4_s51 = (188u + sizeof(_g4_t_v67)) > _g4_s50 ? (188u + sizeof(_g4_t_v67)) : _g4_s50,
    _g4_s52 = (192u + sizeof(_g4_t_v68)) > _g4_s51 ? (192u + sizeof(_g4_t_v68)) : _g4_s51,
    _g4_s53 = (196u + sizeof(_g4_t_v69)) > _g4_s52 ? (196u + sizeof(_g4_t_v69)) : _g4_s52,
    _g4_s54 = (200u + sizeof(_g4_t_v70)) > _g4_s53 ? (200u + sizeof(_g4_t_v70)) : _g4_s53,
    _g4_s55 = (204u + sizeof(_g4_t_v71)) > _g4_s54 ? (204u + sizeof(_g4_t_v71)) : _g4_s54,
    _g4_s56 = (208u + sizeof(_g4_t_v72)) > _g4_s55 ? (208u + sizeof(_g4_t_v72)) : _g4_s55,
    _g4_s57 = (212u + sizeof(_g4_t_v73)) > _g4_s56 ? (212u + sizeof(_g4_t_v73)) : _g4_s56,
    _g4_s58 = (216u + sizeof(_g4_t_v74)) > _g4_s57 ? (216u + sizeof(_g4_t_v74)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 132u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 136u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 140u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 148u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 152u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 180u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 184u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 188u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 192u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 196u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 200u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 204u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 208u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 212u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 216u);

  v7 = iap::BillingMethod::read(
         a1,
         (iap::BillingMethod::Self *)self,
         a3,
         v19,
         v21,
         v23,
         v25,
         v27,
         v30,
         v31,
         v34,
         v35,
         v37,
         v38,
         v40,
         v42,
         v43,
         v44,
         v45,
         v46,
         v47,
         v48);
  if ( v7 != 0 )
  {
LABEL_12:
    G4_VCALL<void>(self, 8, v17);
    return v7;
  }
  v28 = (int *)((char *)self + 108);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "content_id", (int)(uintptr_t)(&v42));
  v49 = (char *)self + 108;
  g4_std::string::construct_copy(&v52, &v48);
  v53 = v49;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(a3, (char **)&v52) )
    {
      v15 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v52);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v65, v15);
      v32 = v53;
      v64[0] = (int)(uintptr_t)(&dword_213B814);
      v28 = v64;
      v36 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)&v65, (int)(uintptr_t)(v64));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v36) )
      {
        g4_std::string::assign_str(v32, v64);
        v36 = 0;
        v32[6] = 1;
      }
      v16 = (void *)(v64[0] - 12);
      if ( (uint32_t *)(v64[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v18 = (char *)&v42 + 1;
        g4_std::string::Rep::M_destroy(v16);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v65);
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
  v8 = (void *)(v52 - 12);
  if ( (uint32_t *)(v52 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
  {
    v18 = (char *)&v42 + 2;
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v48 - 12);
  if ( (uint32_t *)(v48 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
  {
    v18 = (char *)&v42 + 3;
    g4_std::string::Rep::M_destroy(v9);
  }
  if ( v36 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "replaced_content_id", (int)(uintptr_t)(&v43));
    v57 = (char *)self + 116;
    g4_std::string::construct_copy(&v60, &v56);
    v61 = v57;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
      && glwebtools::Json::Value::isMember(a3, (char **)&v60) )
    {
      v13 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v60);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v64, v13);
      v33 = v61;
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v64) != 0 )
      {
        v44 = (int)(uintptr_t)(&dword_213B814);
        v29 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v64, (int)(uintptr_t)(&v44));
        if ( glwebtools::IsOperationSuccess(v29) )
        {
          g4_std::string::assign_str(v33, &v44);
          v33[6] = 1;
        }
        else
        {
          v7 = (int)(uintptr_t)(v29);
        }
        v14 = (void *)(v44 - 12);
        if ( (uint32_t *)(v44 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
        {
          v17 = (char *)&v43 + 1;
          g4_std::string::Rep::M_destroy(v14);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v64);
    }
    v10 = (void *)(v60 - 12);
    if ( (uint32_t *)(v60 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
    {
      v17 = (char *)&v43 + 2;
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v56 - 12);
    if ( (uint32_t *)(v56 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
    {
      v17 = (char *)&v43 + 3;
      g4_std::string::Rep::M_destroy(v11);
    }
    if ( v7 == 0 )
    {
      v65 = "content_id";
      v66 = "replaced_content_id";
      v67 = "name";
      v68 = "currency";
      v69 = "currency_symbol";
      v70 = "price";
      v71 = "display_price";
      v72 = "replaced_price";
      v73 = "replaced_display_price";
      v7 = glwebtools::JsonReader::exclude(
             a3,
             (const char **)&v65,
             (const char **)&v74,
             (iap::BillingMethodAndroid::Self *)((char *)self + 124));
      if ( v7 == 0 )
        return v7;
    }
    goto LABEL_12;
  }
  G4_VCALL<void>(self, 8, v18, v20, v22, v24, v26, v28, &v48, v32, "content_id", v36, dword_213B808, v39, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64[0], v64[1], v64[2], v64[3], v64[4], v64[5], v64[6], v65, v66, v67, v68, v69, v70, v71, v72, v73);
  return a7;
}


