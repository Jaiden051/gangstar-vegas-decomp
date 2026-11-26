#include "Core/Utils/DecompTypes.h"
#include "iap_TransactionInfoLegacy.h"

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetSecondSinceTimeStamp  (binary VA: 0x15114a0)
// Original: iap::TransactionInfoLegacy::GetSecondSinceTimeStamp
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetSecondSinceTimeStamp(void **self)
{
  return iap::TransactionInfo::GetSecondSinceTimeStamp(self);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::ToString  (binary VA: 0x15114d0)
// Original: iap::TransactionInfoLegacy::ToString
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::ToString(int a1, int a2)
{
  uint8_t v3[20];

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v3);
  G4_VCALL<void>(a1, 12, v3);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v3, a2);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::write  (binary VA: 0x1511540)
// Original: iap::TransactionInfoLegacy::write
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::write(iap::TransactionInfoLegacy::Self *self, glwebtools::JsonWriter::Self *a2)
{
  iap::TransactionInfoLegacy::Self *v2;
  glwebtools::JsonWriter::Self *v3;
  char isObject;
  glwebtools::Json::Value::Self *v5;
  int v6;
  void *v7;
  void *v8;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  char v21;
  glwebtools::Json::Value::Self *v22;
  glwebtools::Self *v23;
  char v24;
  glwebtools::Json::Value::Self *v25;
  glwebtools::Self *v26;
  glwebtools::Json::Value::Self *v27;
  glwebtools::Json::Value::Self *v28;
  glwebtools::Json::Value::Self *v29;
  char v30;
  glwebtools::Json::Value::Self *v31;
  glwebtools::Self *v32;
  char v33;
  glwebtools::Json::Value::Self *v34;
  glwebtools::Self *v35;
  glwebtools::Json::Value::Self *v36;
  glwebtools::Json::Value::Self *v37;
  glwebtools::Json::Value::Self *v38;
  glwebtools::Json::Value::Self *v39;
  glwebtools::Json::Value::Self *v40;
  glwebtools::Json::Value::Self *v41;
  glwebtools::Json::Value::Self *v42;
  glwebtools::Json::Value::Self *v43;
  glwebtools::Json::Value::Self *v44;
  typedef glwebtools::Json::Value::Self *_g4_t_v45;
  typedef glwebtools::Json::Value::Self *_g4_t_v46;
  typedef glwebtools::Json::Value::Self *_g4_t_v47;
  typedef glwebtools::Json::Value::Self *_g4_t_v48;
  typedef glwebtools::Json::Value::Self *_g4_t_v49;
  typedef glwebtools::Json::Value::Self *_g4_t_v50;
  typedef glwebtools::Json::Value::Self *_g4_t_v51;
  typedef glwebtools::Json::Value::Self *_g4_t_v52;
  typedef glwebtools::Json::Value::Self *_g4_t_v53;
  typedef glwebtools::Json::Value::Self *_g4_t_v54;
  typedef glwebtools::Json::Value::Self *_g4_t_v55;
  typedef glwebtools::Json::Value::Self *_g4_t_v56;
  typedef glwebtools::Json::Value::Self *_g4_t_v57;
  typedef glwebtools::Json::Value::Self *_g4_t_v58;
  typedef glwebtools::Json::Value::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72[4];
  typedef int _g4_t_v73[4];
  typedef int _g4_t_v74[4];
  typedef int _g4_t_v75[4];
  typedef int _g4_t_v76[2];
  typedef uint8_t _g4_t_v77[16];
  typedef uint8_t _g4_t_v78[16];
  typedef uint8_t _g4_t_v79[16];
  typedef uint8_t _g4_t_v80[16];
  typedef uint8_t _g4_t_v81[16];
  typedef uint8_t _g4_t_v82[20];
  typedef uint32_t _g4_t_v83[11];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v46)) > _g4_s1 ? (0u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v47)) > _g4_s2 ? (0u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v48)) > _g4_s3 ? (0u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v49)) > _g4_s4 ? (0u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v50)) > _g4_s5 ? (0u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v51)) > _g4_s6 ? (0u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v52)) > _g4_s7 ? (0u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v53)) > _g4_s8 ? (0u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v54)) > _g4_s9 ? (0u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v55)) > _g4_s10 ? (0u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v56)) > _g4_s11 ? (0u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v57)) > _g4_s12 ? (0u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v58)) > _g4_s13 ? (0u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v59)) > _g4_s14 ? (0u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (13u + sizeof(_g4_t_v60)) > _g4_s15 ? (13u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v61)) > _g4_s16 ? (16u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v62)) > _g4_s17 ? (28u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v63)) > _g4_s18 ? (32u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v64)) > _g4_s19 ? (44u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v65)) > _g4_s20 ? (48u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v66)) > _g4_s21 ? (60u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v67)) > _g4_s22 ? (64u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v68)) > _g4_s23 ? (76u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v69)) > _g4_s24 ? (80u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v70)) > _g4_s25 ? (92u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v71)) > _g4_s26 ? (96u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v72)) > _g4_s27 ? (108u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v73)) > _g4_s28 ? (124u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v74)) > _g4_s29 ? (140u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v75)) > _g4_s30 ? (156u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v76)) > _g4_s31 ? (172u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v77)) > _g4_s32 ? (180u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (196u + sizeof(_g4_t_v78)) > _g4_s33 ? (196u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v79)) > _g4_s34 ? (212u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (228u + sizeof(_g4_t_v80)) > _g4_s35 ? (228u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (244u + sizeof(_g4_t_v81)) > _g4_s36 ? (244u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (260u + sizeof(_g4_t_v82)) > _g4_s37 ? (260u + sizeof(_g4_t_v82)) : _g4_s37,
    _g4_s39 = (280u + sizeof(_g4_t_v83)) > _g4_s38 ? (280u + sizeof(_g4_t_v83)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
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
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 13u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 108u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 124u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 140u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 156u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 172u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 180u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 196u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 212u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 228u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 244u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 260u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 280u);

  v83[7] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  iap::TransactionInfo::write(self, a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "item_id", (int)(uintptr_t)(&v60));
  v63 = (int)(uintptr_t)(v2) + 96;
  g4_std::string::construct_copy(v72, &v62);
  v72[1] = v63;
  if ( *(uint8_t *)(v63 + 6) != 0 )
  {
    v45 = (glwebtools::Json::Value::Self *)v63;
    isObject = glwebtools::JsonWriter::isObject(v3);
    v5 = v45;
    if ( isObject == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v77), (char *)&loc_6 + 1);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v3);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v77);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v77);
      v5 = v45;
    }
    v46 = v5;
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v83);
    v6 = -2147483646;
    if ( *((uint8_t *)v46 + 6) != 0 )
      v6 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v83, (int)(uintptr_t)(v46));
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v6) )
    {
      v47 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v83);
      v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(v3);
      v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v11, (char **)v72);
      glwebtools::Json::Value::opAssign(v12, v47);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v83);
  }
  v7 = (void *)(v72[0] - 12);
  if ( (uint32_t *)(v72[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v72[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v62 - 12);
  if ( (uint32_t *)(v62 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  if ( *((uint8_t *)v2 + 70) != 0 && *(uint32_t *)(*((uint32_t *)v2 + 16) - 12) != 0 )
  {
    glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v82, v3, "item");
    if ( *((uint8_t *)v2 + 70) == 0 || *(uint32_t *)(*((uint32_t *)v2 + 16) - 12) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "id", (int)(uintptr_t)(&v60) + 1);
      v65 = (int)(uintptr_t)(v2) + 64;
      g4_std::string::construct_copy(v73, &v64);
      v73[1] = v65;
      if ( *(uint8_t *)(v65 + 6) != 0 )
      {
        v55 = (glwebtools::Json::Value::Self *)v65;
        v33 = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v82);
        v34 = v55;
        if ( v33 == 0 )
        {
          glwebtools::Json::Value::Construct((int)(uintptr_t)(v78), (char *)&loc_6 + 1);
          v41 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
          glwebtools::Json::Value::opAssign(v41, (const glwebtools::Json::Value::Self *)v78);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v78);
          v34 = v55;
        }
        v56 = v34;
        glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v83);
        v35 = nullptr;
        if ( *((uint8_t *)v56 + 6) != 0 )
          v35 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v83, (int)(uintptr_t)(v56));
        if ( glwebtools::IsOperationSuccess(v35) )
        {
          v58 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v83);
          v39 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
          v40 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v39, (char **)v73);
          glwebtools::Json::Value::opAssign(v40, v58);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v83);
      }
      v13 = (void *)(v73[0] - 12);
      if ( (uint32_t *)(v73[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v73[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      v14 = (void *)(v64 - 12);
      if ( (uint32_t *)(v64 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      if ( *((uint8_t *)v2 + 78) == 0 )
        goto LABEL_23;
    }
    else if ( *((uint8_t *)v2 + 78) == 0 )
    {
      goto LABEL_23;
    }
    if ( *(uint32_t *)(*((uint32_t *)v2 + 18) - 12) == 0 )
    {
LABEL_26:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "amount", (int)(uintptr_t)(&v61));
      v69 = (int)(uintptr_t)(v2) + 88;
      g4_std::string::construct_copy(v75, &v68);
      v75[1] = v69;
      if ( *(uint8_t *)(v69 + 6) != 0 )
      {
        v48 = (glwebtools::Json::Value::Self *)v69;
        v21 = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v82);
        v22 = v48;
        if ( v21 == 0 )
        {
          glwebtools::Json::Value::Construct((int)(uintptr_t)(v80), (char *)&loc_6 + 1);
          v29 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
          glwebtools::Json::Value::opAssign(v29, (const glwebtools::Json::Value::Self *)v80);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v80);
          v22 = v48;
        }
        v49 = v22;
        glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v83);
        v23 = nullptr;
        if ( *((uint8_t *)v49 + 6) != 0 )
          v23 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v83, *(uint32_t *)v49);
        if ( glwebtools::IsOperationSuccess(v23) )
        {
          v52 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v83);
          v27 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
          v28 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v27, (char **)v75);
          glwebtools::Json::Value::opAssign(v28, v52);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v83);
      }
      v17 = (void *)(v75[0] - 12);
      if ( (uint32_t *)(v75[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v75[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v17);
      }
      v18 = (void *)(v68 - 12);
      if ( (uint32_t *)(v68 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v68 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
      if ( *((uint8_t *)v2 + 86) == 0 || *(uint32_t *)(*((uint32_t *)v2 + 20) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "virtual_cash_type", (int)(uintptr_t)(&v61) + 1);
        v71 = (int)(uintptr_t)(v2) + 80;
        g4_std::string::construct_copy(v76, &v70);
        v76[1] = v71;
        if ( *(uint8_t *)(v71 + 6) != 0 )
        {
          v53 = (glwebtools::Json::Value::Self *)v71;
          v30 = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v82);
          v31 = v53;
          if ( v30 == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v81), (char *)&loc_6 + 1);
            v44 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
            glwebtools::Json::Value::opAssign(v44, (const glwebtools::Json::Value::Self *)v81);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v81);
            v31 = v53;
          }
          v54 = v31;
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v83);
          v32 = nullptr;
          if ( *((uint8_t *)v54 + 6) != 0 )
            v32 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v83, (int)(uintptr_t)(v54));
          if ( glwebtools::IsOperationSuccess(v32) )
          {
            v59 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v83);
            v42 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
            v43 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v42, (char **)v76);
            glwebtools::Json::Value::opAssign(v43, v59);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v83);
        }
        v19 = (void *)(v76[0] - 12);
        if ( (uint32_t *)(v76[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v19);
        }
        v20 = (void *)(v70 - 12);
        if ( (uint32_t *)(v70 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v20);
        }
      }
      glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v82, (iap::TransactionInfoLegacy::Self *)((char *)v2 + 128));
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v82);
      goto LABEL_13;
    }
LABEL_23:
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "type", (int)(uintptr_t)(&v60) + 2);
    v67 = (int)(uintptr_t)(v2) + 72;
    g4_std::string::construct_copy(v74, &v66);
    v74[1] = v67;
    if ( *(uint8_t *)(v67 + 6) != 0 )
    {
      v50 = (glwebtools::Json::Value::Self *)v67;
      v24 = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v82);
      v25 = v50;
      if ( v24 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v79), (char *)&loc_6 + 1);
        v38 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
        glwebtools::Json::Value::opAssign(v38, (const glwebtools::Json::Value::Self *)v79);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v79);
        v25 = v50;
      }
      v51 = v25;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v83);
      v26 = nullptr;
      if ( *((uint8_t *)v51 + 6) != 0 )
        v26 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v83, (int)(uintptr_t)(v51));
      if ( glwebtools::IsOperationSuccess(v26) )
      {
        v57 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v83);
        v36 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v82);
        v37 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v36, (char **)v74);
        glwebtools::Json::Value::opAssign(v37, v57);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v83);
    }
    v15 = (void *)(v74[0] - 12);
    if ( (uint32_t *)(v74[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v74[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v66 - 12);
    if ( (uint32_t *)(v66 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    goto LABEL_26;
  }
LABEL_13:
  glwebtools::JsonWriter::write(v3, (iap::TransactionInfoLegacy::Self *)((char *)v2 + 104));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::Clear  (binary VA: 0x1512060)
// Original: iap::TransactionInfoLegacy::Clear
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::Clear(iap::TransactionInfoLegacy::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int result;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v7)) > _g4_s2 ? (32u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);

  v5 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 64, &v5);
  v1 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 70) = 0;
  v6 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 72, &v6);
  v2 = v6 - 3;
  if ( v6 - 3 != dword_213B808 && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 78) = 0;
  v7 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 80, &v7);
  result = (int)(uintptr_t)(v7);
  v4 = v7 - 3;
  if ( v7 - 3 != dword_213B808 && __sync_fetch_and_add(v7 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 86) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint8_t *)self + 94) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::read  (binary VA: 0x1512180)
// Original: iap::TransactionInfoLegacy::read
// ----------------------------------------------------------------------------
char * iap::TransactionInfoLegacy::read(long double a1, iap::TransactionInfoLegacy::Self *self, const glwebtools::JsonReader::Self *a3)
{
  iap::TransactionInfoLegacy::Self *v3;
  glwebtools::JsonReader::Self *v4;
  int v5;
  void *v6;
  void *v7;
  const glwebtools::Json::Value::Self *v9;
  glwebtools::Self *v10;
  char *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  const glwebtools::Json::Value::Self *v20;
  char *v21;
  void *v22;
  const glwebtools::Json::Value::Self *v23;
  void *v24;
  const glwebtools::Json::Value::Self *v25;
  void *v26;
  const glwebtools::Json::Value::Self *v27;
  char *v28;
  int v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef glwebtools::Self *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41[3];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef char *_g4_t_v62;
  typedef uint8_t _g4_t_v63[16];
  typedef char *_g4_t_v64[4];
  typedef char *_g4_t_v65[12];
  typedef char *_g4_t_v66[3];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v32)) > _g4_s2 ? (8u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v33)) > _g4_s3 ? (8u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v35)) > _g4_s5 ? (16u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v36)) > _g4_s6 ? (16u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v37)) > _g4_s7 ? (20u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v38)) > _g4_s8 ? (28u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (45u + sizeof(_g4_t_v39)) > _g4_s9 ? (45u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v40)) > _g4_s10 ? (48u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v41)) > _g4_s11 ? (64u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v42)) > _g4_s12 ? (76u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v43)) > _g4_s13 ? (80u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v44)) > _g4_s14 ? (84u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v45)) > _g4_s15 ? (96u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v46)) > _g4_s16 ? (100u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v47)) > _g4_s17 ? (112u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v48)) > _g4_s18 ? (116u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v49)) > _g4_s19 ? (128u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v50)) > _g4_s20 ? (132u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v51)) > _g4_s21 ? (144u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v52)) > _g4_s22 ? (148u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v53)) > _g4_s23 ? (160u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v54)) > _g4_s24 ? (164u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v55)) > _g4_s25 ? (176u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v56)) > _g4_s26 ? (180u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v57)) > _g4_s27 ? (192u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (196u + sizeof(_g4_t_v58)) > _g4_s28 ? (196u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v59)) > _g4_s29 ? (208u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v60)) > _g4_s30 ? (212u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (224u + sizeof(_g4_t_v61)) > _g4_s31 ? (224u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (228u + sizeof(_g4_t_v62)) > _g4_s32 ? (228u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (240u + sizeof(_g4_t_v63)) > _g4_s33 ? (240u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (256u + sizeof(_g4_t_v64)) > _g4_s34 ? (256u + sizeof(_g4_t_v64)) : _g4_s34,
    _g4_s36 = (272u + sizeof(_g4_t_v65)) > _g4_s35 ? (272u + sizeof(_g4_t_v65)) : _g4_s35,
    _g4_s37 = (320u + sizeof(_g4_t_v66)) > _g4_s36 ? (320u + sizeof(_g4_t_v66)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 45u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 132u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 144u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 148u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 160u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 164u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 196u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 208u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 212u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 224u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 228u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 240u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 256u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 272u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 320u);

  v66[2] = (char *)&self;
  v3 = self;
  v4 = (glwebtools::JsonReader::Self *)(a3);
  v38 = iap::TransactionInfo::read(self, a3);
  if ( v38 != 0 )
  {
    iap::TransactionInfoLegacy::Clear(v3);
    return (char *)v38;
  }
  else
  {
    v65[10] = "item_id";
    v65[0] = "content_id";
    v65[1] = "payment_state";
    v65[2] = "transaction_state";
    v65[3] = "billing_type";
    v65[4] = "billing_name";
    v65[5] = "error";
    v65[6] = "error_string";
    v65[7] = "error_message";
    v65[8] = "process_count";
    v65[9] = "timestamp";
    v65[11] = "item";
    v5 = glwebtools::JsonReader::exclude(
           a1,
           v4,
           (const char **)v65,
           (const char **)v66,
           (iap::TransactionInfoLegacy::Self *)((char *)v3 + 104));
    if ( v5 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "item_id", (int)(uintptr_t)(&v39));
      v44 = (char *)v3 + 96;
      g4_std::string::construct_copy(&v53, &v43);
      v54 = v44;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(v4) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(v4) != 0
        && glwebtools::Json::Value::isMember(v4, (char **)&v53) )
      {
        v9 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v4, (const char **)&v53);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v65, v9);
        v37 = v54;
        v64[0] = (char *)&dword_213B814;
        v10 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v65, (int)(uintptr_t)(v64));
        if ( glwebtools::IsOperationSuccess(v10) )
        {
          g4_std::string::assign_str(v37, v64);
          v37[6] = 1;
        }
        v11 = v64[0] - 12;
        if ( (uint32_t *)v64[0] - 3 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v64[0] - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v65);
      }
      v6 = (void *)(v53 - 12);
      if ( (uint32_t *)(v53 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v7 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v63, v4, "item");
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v63) == 0 )
        goto LABEL_7;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "id", (int)(uintptr_t)(&v39) + 1);
      v46 = (char *)v3 + 64;
      g4_std::string::construct_copy(&v57, &v45);
      v58 = v46;
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v63) != 0
        && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v63) != 0
        && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v63, (char **)&v57) )
      {
        v20 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                 (glwebtools::Json::Value::Self *)v63,
                                                 (const char **)&v57);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v65, v20);
        v21 = v58;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v65) != 0 )
        {
          v41[0] = (int)(uintptr_t)(&dword_213B814);
          v34 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v65, (int)(uintptr_t)(v41));
          if ( glwebtools::IsOperationSuccess(v34) )
          {
            g4_std::string::assign_str(v21, v41);
            v21[6] = 1;
          }
          else
          {
            v38 = (int)(uintptr_t)(v34);
          }
          v22 = (void *)(v41[0] - 12);
          if ( (uint32_t *)(v41[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v22);
          }
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v65);
      }
      v12 = (void *)(v57 - 12);
      if ( (uint32_t *)(v57 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v13 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      if ( v38 == 0 )
      {
        if ( *((uint8_t *)v3 + 70) != 0 && *(uint32_t *)(*((uint32_t *)v3 + 16) - 12) == 0 )
          goto LABEL_38;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "type", (int)(uintptr_t)(&v39) + 2);
        v48 = (char *)v3 + 72;
        g4_std::string::construct_copy(&v59, &v47);
        v60 = v48;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v63) != 0
          && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v63) != 0
          && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v63, (char **)&v59) )
        {
          v23 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                   (glwebtools::Json::Value::Self *)v63,
                                                   (const char **)&v59);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v65, v23);
          v35 = v60;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v65) != 0 )
          {
            v41[0] = (int)(uintptr_t)(&dword_213B814);
            v31 = (char *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v65, (int)(uintptr_t)(v41));
            if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v31) )
            {
              g4_std::string::assign_str(v35, v41);
              v35[6] = 1;
            }
            else
            {
              v38 = (int)(uintptr_t)(v31);
            }
            v24 = (void *)(v41[0] - 12);
            if ( (uint32_t *)(v41[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v24);
            }
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v65);
        }
        v14 = (void *)(v59 - 12);
        if ( (uint32_t *)(v59 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v14);
        }
        v15 = (void *)(v47 - 12);
        if ( (uint32_t *)(v47 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v15);
        }
        if ( v38 == 0 )
        {
          if ( *((uint8_t *)v3 + 78) != 0 && *(uint32_t *)(*((uint32_t *)v3 + 18) - 12) == 0 )
            goto LABEL_38;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "virtual_cash_type", (int)(uintptr_t)(&v40));
          v50 = (char *)v3 + 80;
          g4_std::string::construct_copy(&v61, &v49);
          v62 = v50;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v63) != 0
            && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v63) != 0
            && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v63, (char **)&v61) )
          {
            v25 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                     (glwebtools::Json::Value::Self *)v63,
                                                     (const char **)&v61);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v65, v25);
            v36 = v62;
            if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v65) != 0 )
            {
              v41[0] = (int)(uintptr_t)(&dword_213B814);
              v32 = (char *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v65, (int)(uintptr_t)(v41));
              if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v32) )
              {
                g4_std::string::assign_str(v36, v41);
                v36[6] = 1;
              }
              else
              {
                v38 = (int)(uintptr_t)(v32);
              }
              v26 = (void *)(v41[0] - 12);
              if ( (uint32_t *)(v41[0] - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v26);
              }
            }
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v65);
          }
          v16 = (void *)(v61 - 12);
          if ( (uint32_t *)(v61 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v16);
          }
          v17 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v17);
          }
          if ( v38 == 0 )
          {
            if ( *((uint8_t *)v3 + 86) == 0 || *(uint32_t *)(*((uint32_t *)v3 + 20) - 12) != 0 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "amount", (int)(uintptr_t)(&v40) + 1);
              v52 = (char *)v3 + 88;
              g4_std::string::construct_copy(&v55, &v51);
              v56 = v52;
              if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v63) != 0
                && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v63) != 0
                && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v63, (char **)&v55) )
              {
                v27 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                         (glwebtools::Json::Value::Self *)v63,
                                                         (const char **)&v55);
                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v65, v27);
                v28 = v56;
                if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v65) != 0 )
                {
                  v33 = (char *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v65, &v42);
                  if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v33) )
                  {
                    v29 = v42;
                    v28[6] = 1;
                    *(uint32_t *)v28 = v29;
                  }
                  else
                  {
                    v38 = (int)(uintptr_t)(v33);
                  }
                }
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v65);
              }
              v18 = (void *)(v55 - 12);
              if ( (uint32_t *)(v55 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v18);
              }
              v19 = (void *)(v51 - 12);
              if ( (uint32_t *)(v51 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v19);
              }
              if ( v38 == 0 )
              {
                v64[0] = "id";
                v64[1] = "type";
                v64[2] = "subtype";
                v64[3] = "amount";
                v38 = glwebtools::JsonReader::exclude(
                        (glwebtools::JsonReader::Self *)v63,
                        (const char **)v64,
                        (const char **)v65,
                        (iap::TransactionInfoLegacy::Self *)((char *)v3 + 128));
                if ( v38 == 0 )
                  goto LABEL_7;
              }
              goto LABEL_36;
            }
LABEL_38:
            v38 = -2147483646;
            goto LABEL_7;
          }
        }
      }
LABEL_36:
      iap::TransactionInfoLegacy::Clear(v3);
LABEL_7:
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v63);
      return (char *)v38;
    }
    v30 = (char *)v5;
    iap::TransactionInfoLegacy::Clear(v3);
    return v30;
  }
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::Print  (binary VA: 0x1512d60)
// Original: iap::TransactionInfoLegacy::Print
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * iap::TransactionInfoLegacy::Print(iap::TransactionInfoLegacy::Self *self)
{
  int i;
  glwebtools::CustomAttributeList::Self *result;
  uint32_t v3[8];

  glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v3, (int)(uintptr_t)(self) + 104);
  for ( i = v3[0]; ; i = sub_19048E0(i) )
  {
    result = glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v3, (int)(uintptr_t)(self) + 104);
    if ( i == v3[0] )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetItemId  (binary VA: 0x1512dd0)
// Original: iap::TransactionInfoLegacy::GetItemId
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetItemId(iap::TransactionInfoLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 70) != 0 )
  {
    result = *((uint32_t *)self + 16);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetItemType  (binary VA: 0x1512df0)
// Original: iap::TransactionInfoLegacy::GetItemType
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetItemType(iap::TransactionInfoLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 78) != 0 )
  {
    result = *((uint32_t *)self + 18);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetItemSubtype  (binary VA: 0x1512e10)
// Original: iap::TransactionInfoLegacy::GetItemSubtype
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetItemSubtype(iap::TransactionInfoLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 86) != 0 )
  {
    result = *((uint32_t *)self + 20);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetItemAmount  (binary VA: 0x1512e30)
// Original: iap::TransactionInfoLegacy::GetItemAmount
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetItemAmount(iap::TransactionInfoLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 94) != 0 )
    return *((uint32_t *)self + 22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetContentId  (binary VA: 0x1512e40)
// Original: iap::TransactionInfoLegacy::GetContentId
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetContentId(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 24);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetExtendedField  (binary VA: 0x1512e50)
// Original: iap::TransactionInfoLegacy::GetExtendedField
// ----------------------------------------------------------------------------
iap::TransactionInfoLegacy::Self * iap::TransactionInfoLegacy::GetExtendedField(iap::TransactionInfoLegacy::Self *self, const char *a2, char *a3)
{
  char *v3;
  void *v4;
  uint16_t v6[3];

  if ( a3 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6[1]), a3, (int)(uintptr_t)(v6));
    v3 = glwebtools::CustomAttributeList::opIndex((glwebtools::CustomAttribute::Self *)(a2 + 104), (int)(uintptr_t)(&v6[1]));
    glwebtools::CustomArgument::Construct(self, (const glwebtools::CustomArgument::Self *)v3);
    v4 = (void *)(*(uint32_t *)&v6[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v6[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v6[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  else
  {
    glwebtools::CustomArgument::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetPaymentState  (binary VA: 0x1512f00)
// Original: iap::TransactionInfoLegacy::GetPaymentState
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetPaymentState(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetTransactionState  (binary VA: 0x1512f10)
// Original: iap::TransactionInfoLegacy::GetTransactionState
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetTransactionState(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetBillingType  (binary VA: 0x1512f20)
// Original: iap::TransactionInfoLegacy::GetBillingType
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetBillingType(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetBillingName  (binary VA: 0x1512f30)
// Original: iap::TransactionInfoLegacy::GetBillingName
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetBillingName(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetProcessCount  (binary VA: 0x1512f40)
// Original: iap::TransactionInfoLegacy::GetProcessCount
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetProcessCount(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetError  (binary VA: 0x1512f50)
// Original: iap::TransactionInfoLegacy::GetError
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetError(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetEcommTransaction  (binary VA: 0x1512f60)
// Original: iap::TransactionInfoLegacy::GetEcommTransaction
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetEcommTransaction(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::IsTransactionRestore  (binary VA: 0x1512f70)
// Original: iap::TransactionInfoLegacy::IsTransactionRestore
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::IsTransactionRestore(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint8_t *)self + 32);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetErrorString  (binary VA: 0x1512f80)
// Original: iap::TransactionInfoLegacy::GetErrorString
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetErrorString(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetErrorMessage  (binary VA: 0x1512f90)
// Original: iap::TransactionInfoLegacy::GetErrorMessage
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetErrorMessage(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetNextTransactionTime  (binary VA: 0x1512fa0)
// Original: iap::TransactionInfoLegacy::GetNextTransactionTime
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetNextTransactionTime(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 14);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::GetSecondsBeforeNextTransaction  (binary VA: 0x1512fb0)
// Original: iap::TransactionInfoLegacy::GetSecondsBeforeNextTransaction
// ----------------------------------------------------------------------------
int iap::TransactionInfoLegacy::GetSecondsBeforeNextTransaction(iap::TransactionInfoLegacy::Self *self)
{
  return *((uint32_t *)self + 15);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::Destroy  (binary VA: 0x1512fc0)
// Original: iap::TransactionInfoLegacy::~TransactionInfoLegacy
// ----------------------------------------------------------------------------
void iap::TransactionInfoLegacy::Destroy(iap::TransactionInfoLegacy::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20961C8);
  v1 = *((uint32_t **)self + 32);
  v9 = *((uint32_t **)self + 33);
  if ( v9 != v1 )
  {
    v2 = *((uint32_t **)self + 32);
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
    while ( v9 != v2 );
    v1 = *((uint32_t **)self + 32);
  }
  if ( v1 != nullptr )
    opDelete(v1);
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
    (int)(uintptr_t)(self) + 104,
    *((uint32_t **)self + 28));
  v5 = *((uint32_t *)self + 24);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 20);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 18);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 16);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  iap::TransactionInfo::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoLegacy::Destroy_ea15131b0  (binary VA: 0x15131b0)
// Original: iap::TransactionInfoLegacy::~TransactionInfoLegacy
// ----------------------------------------------------------------------------
void iap::TransactionInfoLegacy::Destroy_ea15131b0(iap::TransactionInfoLegacy::Self *self)
{
  iap::TransactionInfoLegacy::Destroy(self);
  opDelete(self);
}


