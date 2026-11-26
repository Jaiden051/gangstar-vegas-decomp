#include "Core/Utils/DecompTypes.h"
#include "iap_PromotionLegacyArray.h"

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacyArray::read  (binary VA: 0x1505a50)
// Original: iap::PromotionLegacyArray::read
// ----------------------------------------------------------------------------
int iap::PromotionLegacyArray::read(int (***a1)(uint32_t, uint8_t *), int a2)
{
  int v2;
  uint8_t v4[16];

  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v4);
  glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v4, a2);
  v2 = (**a1)((uint32_t)(uintptr_t)(a1), v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacyArray::Destroy  (binary VA: 0x1505b20)
// Original: iap::PromotionLegacyArray::~PromotionLegacyArray
// ----------------------------------------------------------------------------
void iap::PromotionLegacyArray::Destroy(iap::PromotionLegacyArray::Self *self)
{
  int *v1;
  int *v2;
  int v3;
  int v4;
  int *v5;

  v1 = *((int **)self + 4);
  v2 = *((int **)self + 3);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096118);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v2;
      v5 = v2;
      v2 += 18;
      (*(void (**)(int *))(v3 + 8))(v5);
    }
    while ( v1 != v2 );
    v2 = *((int **)self + 3);
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
// Function: iap::PromotionLegacyArray::Destroy_ea1505bb0  (binary VA: 0x1505bb0)
// Original: iap::PromotionLegacyArray::~PromotionLegacyArray
// ----------------------------------------------------------------------------
void iap::PromotionLegacyArray::Destroy_ea1505bb0(iap::PromotionLegacyArray::Self *self)
{
  iap::PromotionLegacyArray::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacyArray::Clear  (binary VA: 0x1505e10)
// Original: iap::PromotionLegacyArray::Clear
// ----------------------------------------------------------------------------
int * iap::PromotionLegacyArray::Clear(iap::PromotionLegacyArray::Self *self)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  typedef int *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef int *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (42u + sizeof(_g4_t_v9)) > _g4_s3 ? (42u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v10)) > _g4_s4 ? (44u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 42u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v9));
  g4_std::string::assign_str((char *)self + 4, v10);
  v1 = v10[0];
  *((uint8_t *)self + 10) = 1;
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    v7 = (char *)&v9 + 1;
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((int **)self + 4);
  v8 = *((int **)self + 3);
  if ( v8 != v2 )
  {
    v3 = *((int **)self + 3);
    do
    {
      v4 = *v3;
      v6 = v3;
      v3 += 18;
      (*(void (**)(int *, char *))(v4 + 8))(v6, v7);
    }
    while ( v2 != v3 );
  }
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v8);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacyArray::Size  (binary VA: 0x1505ec0)
// Original: iap::PromotionLegacyArray::Size
// ----------------------------------------------------------------------------
int iap::PromotionLegacyArray::Size(iap::PromotionLegacyArray::Self *self)
{
  return 954437177 * ((*((uint32_t *)self + 4) - *((uint32_t *)self + 3)) >> 3);
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacyArray::opIndex  (binary VA: 0x1505ee0)
// Original: iap::PromotionLegacyArray::operator[]
// ----------------------------------------------------------------------------
int iap::PromotionLegacyArray::opIndex(iap::PromotionLegacyArray::Self *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 3);
  result = 0;
  if ( a2 < 954437177 * ((*((uint32_t *)self + 4) - v2) >> 3) )
    return v2 + 72 * a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::PromotionLegacyArray::GetRequestServerTime  (binary VA: 0x1505f10)
// Original: iap::PromotionLegacyArray::GetRequestServerTime
// ----------------------------------------------------------------------------
int iap::PromotionLegacyArray::GetRequestServerTime(iap::PromotionLegacyArray::Self *self)
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
// Function: iap::PromotionLegacyArray::read  (binary VA: 0x15074c0)
// Original: iap::PromotionLegacyArray::read
// ----------------------------------------------------------------------------
int iap::PromotionLegacyArray::read(iap::PromotionLegacyArray::Self *self, const glwebtools::JsonReader::Self *a2)
{
  glwebtools::Json::Value::Self *v2;
  const glwebtools::Json::Value::Self *v3;
  int v4;
  void *v5;
  void *v6;
  void *v7;
  iap::PromotionLegacyArray::Self *v8;
  void *v9;
  void *v10;
  const glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self **v13;
  glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  int v16;
  glwebtools::Self *v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  glwebtools::JsonReader::Self *v22;
  int v23;
  glwebtools::Json::Value::Self *v24;
  int v25;
  int i;
  glwebtools::Json::Value::Self **v27;
  glwebtools::Json::Value::Self *v28;
  typedef glwebtools::Json::Value::Self *_g4_t_v29;
  typedef glwebtools::JsonReader::Self *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char _g4_t_IsValid;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef glwebtools::Self *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef glwebtools::Json::Value::Self **_g4_t_v37;
  typedef iap::PromotionLegacyArray::Self *_g4_t_v38;
  typedef glwebtools::Json::Value::Self *_g4_t_v39;
  typedef glwebtools::Json::Value::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[7];
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef glwebtools::Json::Value::Self **_g4_t_v47;
  typedef int _g4_t_v48;
  typedef glwebtools::Json::Value::Self **_g4_t_v49;
  typedef int _g4_t_v50[2];
  typedef uint8_t _g4_t_v51[8];
  typedef uint8_t _g4_t_v52[16];
  typedef int _g4_t_v53[4];
  typedef uint8_t _g4_t_v54[16];
  typedef uint32_t _g4_t_v55[2];
  typedef char _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef glwebtools::Json::Value::Self *_g4_t_v63;
  typedef glwebtools::Json::Value::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int *_g4_t_v68;
  typedef int *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef iap::PromotionLegacyArray::Self **_g4_t_v71;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v30)) > _g4_s1 ? (32u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v31)) > _g4_s2 ? (36u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_IsValid)) > _g4_s3 ? (36u + sizeof(_g4_t_IsValid)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v33)) > _g4_s4 ? (44u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v34)) > _g4_s5 ? (52u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v35)) > _g4_s6 ? (52u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v36)) > _g4_s7 ? (56u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v37)) > _g4_s8 ? (56u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v38)) > _g4_s9 ? (60u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v39)) > _g4_s10 ? (64u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v40)) > _g4_s11 ? (64u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (81u + sizeof(_g4_t_v41)) > _g4_s12 ? (81u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (85u + sizeof(_g4_t_v42)) > _g4_s13 ? (85u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v43)) > _g4_s14 ? (92u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v44)) > _g4_s15 ? (104u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v45)) > _g4_s16 ? (108u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v46)) > _g4_s17 ? (120u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v47)) > _g4_s18 ? (124u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v48)) > _g4_s19 ? (136u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v49)) > _g4_s20 ? (140u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v50)) > _g4_s21 ? (152u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (160u + sizeof(_g4_t_v51)) > _g4_s22 ? (160u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v52)) > _g4_s23 ? (168u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (184u + sizeof(_g4_t_v53)) > _g4_s24 ? (184u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (200u + sizeof(_g4_t_v54)) > _g4_s25 ? (200u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (216u + sizeof(_g4_t_v55)) > _g4_s26 ? (216u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (226u + sizeof(_g4_t_v56)) > _g4_s27 ? (226u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (228u + sizeof(_g4_t_v57)) > _g4_s28 ? (228u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (234u + sizeof(_g4_t_v58)) > _g4_s29 ? (234u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (236u + sizeof(_g4_t_v59)) > _g4_s30 ? (236u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (242u + sizeof(_g4_t_v60)) > _g4_s31 ? (242u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (244u + sizeof(_g4_t_v61)) > _g4_s32 ? (244u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (250u + sizeof(_g4_t_v62)) > _g4_s33 ? (250u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v63)) > _g4_s34 ? (252u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (256u + sizeof(_g4_t_v64)) > _g4_s35 ? (256u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (260u + sizeof(_g4_t_v65)) > _g4_s36 ? (260u + sizeof(_g4_t_v65)) : _g4_s36,
    _g4_s38 = (268u + sizeof(_g4_t_v66)) > _g4_s37 ? (268u + sizeof(_g4_t_v66)) : _g4_s37,
    _g4_s39 = (272u + sizeof(_g4_t_v67)) > _g4_s38 ? (272u + sizeof(_g4_t_v67)) : _g4_s38,
    _g4_s40 = (276u + sizeof(_g4_t_v68)) > _g4_s39 ? (276u + sizeof(_g4_t_v68)) : _g4_s39,
    _g4_s41 = (280u + sizeof(_g4_t_v69)) > _g4_s40 ? (280u + sizeof(_g4_t_v69)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v70)) > _g4_s41 ? (284u + sizeof(_g4_t_v70)) : _g4_s41,
    _g4_s43 = (304u + sizeof(_g4_t_v71)) > _g4_s42 ? (304u + sizeof(_g4_t_v71)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_IsValid &IsValid = *reinterpret_cast<_g4_t_IsValid *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 81u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 85u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 140u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 152u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 168u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 184u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 200u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 216u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 226u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 228u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 234u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 236u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 242u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 244u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 250u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 252u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 256u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 260u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 268u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 272u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 276u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 280u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 284u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 304u);

  v71 = &self;
  v2 = (glwebtools::Json::Value::Self *)(a2);
  v38 = self;
  v31 = (char *)self + 4;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42[3]), "server_time", (int)(uintptr_t)(&v41));
  v43 = v31;
  g4_std::string::construct_copy(&v44, &v42[3]);
  v45 = v43;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(v2) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(v2, (char **)&v44) )
    {
      v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v2, (const char **)&v44);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v55, v3);
      v36 = v45;
      v53[0] = (int)(uintptr_t)(&dword_213B814);
      v4 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v55, (int)(uintptr_t)(v53));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
      {
        v4 = 0;
        g4_std::string::assign_str(v36, v53);
        v36[6] = 1;
      }
      v5 = (void *)(v53[0] - 12);
      if ( (uint32_t *)(v53[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v55);
    }
    else
    {
      v4 = -2147483646;
    }
  }
  else
  {
    v4 = -2147483645;
  }
  v6 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(*(uint32_t *)&v42[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v42[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v42[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = v38;
  if ( v4 != 0 )
    goto LABEL_20;
  if ( *((uint8_t *)v38 + 10) == 0 || *(uint32_t *)(*((uint32_t *)v38 + 1) - 12) == 0 )
    return -2147483646;
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v52, v2, "promo_tags");
  IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v52);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v52);
  if ( IsValid == 0 )
    return -2147479542;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "promo_tags", (int)(uintptr_t)(v42));
  v47 = (glwebtools::Json::Value::Self **)((char *)v38 + 12);
  g4_std::string::construct_copy(&v48, &v46);
  v49 = v47;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(v2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(v2) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(v2, (char **)&v48) )
    {
      v12 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v2, (const char **)&v48);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v53, v12);
      v13 = v49;
      v37 = v49;
      v39 = *v49;
      if ( *v49 != v49[1] )
      {
        v14 = *v49;
        v15 = v49[1];
        do
        {
          v16 = *(uint32_t *)v14;
          v29 = v14;
          v14 = (glwebtools::Json::Value::Self *)((char *)v14 + 72);
          (*(void (**)(glwebtools::Json::Value::Self *))(v16 + 8))(v29);
        }
        while ( v15 != v14 );
        v4 = 0;
        v13 = v37;
      }
      v13[1] = v39;
      glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v50);
      v33 = v4;
      while ( 1 )
      {
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v51);
        if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                (glwebtools::JsonReader::Iterator::Self *)v50,
                                (const glwebtools::JsonReader::Iterator::Self *)v51) == 0 )
        {
          v4 = v33;
          goto LABEL_64;
        }
        v56 = 0;
        v58 = 0;
        v60 = 0;
        v62 = 0;
        v63 = nullptr;
        v64 = nullptr;
        v55[0] = (uint32_t)(uintptr_t)(&off_2096100);
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v70 = 0;
        v57 = &dword_213B814;
        v59 = &dword_213B814;
        v68 = &v66;
        v69 = &v66;
        glwebtools::JsonReader::Iterator::opMul(
          (glwebtools::JsonReader::Iterator::Self *)v54,
          (glwebtools::Json::ValueIteratorBase::Self *)v50);
        v34 = -2147483645;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v54) != 0 )
          v34 = (*(int (**)(uint32_t *, uint8_t *))v55[0])(v55, v54);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v54);
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v34) )
          break;
        v17 = (glwebtools::Self *)(v37[1]);
        if ( v17 == (glwebtools::Self *)(v37[2]) )
        {
          g4_std::vector_iap_PromotionLegacy_glwe_1e255d::M_insert_aux(
            v37,
            v17,
            v55);
        }
        else
        {
          if ( v17 != nullptr )
          {
            *(uint32_t *)v17 = (uint32_t)(uintptr_t)(&off_2096100);
            *((uint32_t *)v17 + 1) = v55[1];
            *((uint8_t *)v17 + 10) = v56;
            *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str((char *)v17 + 12, &v57);
            *((uint8_t *)v17 + 18) = v58;
            *((uint32_t *)v17 + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str((char *)v17 + 20, &v59);
            *((uint8_t *)v17 + 26) = v60;
            *((uint32_t *)v17 + 7) = v61;
            *((uint8_t *)v17 + 34) = v62;
            v19 = v64 - v63;
            *((uint32_t *)v17 + 9) = 0;
            v20 = v19 >> 2;
            *((uint32_t *)v17 + 10) = 0;
            *((uint32_t *)v17 + 11) = 0;
            if ( v20 != 0 )
            {
              if ( v20 > 0x3FFFFFFF )
                sub_18FFEE0(v18, v20);
              v30 = (glwebtools::JsonReader::Self *)(4 * v20);
              v21 = opNew(4 * v20);
              v22 = v30;
            }
            else
            {
              v22 = nullptr;
              v21 = 0;
            }
            *((uint32_t *)v17 + 9) = v21;
            *((uint32_t *)v17 + 10) = v21;
            *((uint32_t *)v17 + 11) = (uint32_t)(uintptr_t)((char *)v22 + v21);
            v40 = v64;
            if ( v64 != v63 )
            {
              v35 = v17;
              v23 = v21;
              v24 = v63;
              do
              {
                if ( v23 != 0 )
                  g4_std::string::construct_copy(v23, v24);
                v23 += 4;
                v24 = (glwebtools::Json::Value::Self *)((char *)v24 + 4);
              }
              while ( v40 != v24 );
              v21 = v23;
              v17 = v35;
            }
            *((uint32_t *)v17 + 10) = v21;
            *((uint32_t *)v17 + 13) = 0;
            *((uint32_t *)v17 + 14) = 0;
            *((uint32_t *)v17 + 17) = 0;
            *((uint32_t *)v17 + 15) = (uint32_t)(uintptr_t)((char *)v17 + 52);
            *((uint32_t *)v17 + 16) = (uint32_t)(uintptr_t)((char *)v17 + 52);
            if ( v67 != 0 )
            {
              v25 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                      (char *)v17 + 48,
                      v67,
                      (char *)v17 + 52));
              *((uint32_t *)v17 + 14) = v25;
              for ( i = v25; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
                ;
              *((uint32_t *)v17 + 15) = i;
              while ( *(uint32_t *)(v25 + 12) != 0 )
                v25 = *(uint32_t *)(v25 + 12);
              *((uint32_t *)v17 + 16) = v25;
              *((uint32_t *)v17 + 17) = v70;
            }
            v27 = v37;
            v28 = v37[1];
          }
          else
          {
            v28 = nullptr;
            v27 = v37;
          }
          v27[1] = (glwebtools::Json::Value::Self *)((char *)v28 + 72);
        }
        iap::PromotionLegacy::Destroy((iap::PromotionLegacy::Self *)v55);
        glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v50);
      }
      iap::PromotionLegacy::Destroy((iap::PromotionLegacy::Self *)v55);
      v4 = v34;
LABEL_64:
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v53);
    }
    else
    {
      v4 = -2147483646;
    }
  }
  else
  {
    v4 = -2147483645;
  }
  v9 = (void *)(v48 - 12);
  if ( (uint32_t *)(v48 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  if ( v4 != 0 )
  {
    v8 = v38;
LABEL_20:
    iap::PromotionLegacyArray::Clear(v8);
    return v4;
  }
  return v4;
}


