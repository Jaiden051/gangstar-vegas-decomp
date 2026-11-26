#include "Core/Utils/DecompTypes.h"
#include "iap_android_billing.h"

// ----------------------------------------------------------------------------
// Function: iap::android_billing::TransactionInfo::Destroy  (binary VA: 0x152ba50)
// Original: iap::android_billing::TransactionInfo::~TransactionInfo
// ----------------------------------------------------------------------------
void iap::android_billing::TransactionInfo::Destroy(iap::android_billing::TransactionInfo::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096688);
  v1 = *((uint32_t *)self + 22);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 21);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 20);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 19);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 18);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 16);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  iap::TransactionInfo::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::android_billing::TransactionInfo::Destroy_ea152bbb0  (binary VA: 0x152bbb0)
// Original: iap::android_billing::TransactionInfo::~TransactionInfo
// ----------------------------------------------------------------------------
void iap::android_billing::TransactionInfo::Destroy_ea152bbb0(iap::android_billing::TransactionInfo::Self *self)
{
  iap::android_billing::TransactionInfo::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::android_billing::TransactionInfo::read  (binary VA: 0x152c740)
// Original: iap::android_billing::TransactionInfo::read
// ----------------------------------------------------------------------------
int iap::android_billing::TransactionInfo::read(int a1, iap::android_billing::TransactionInfo::Self *self, const glwebtools::JsonReader::Self *a3)
{
  glwebtools::Json::Value::Self *v3;
  const glwebtools::Json::Value::Self *v4;
  char *v5;
  void *v6;
  const glwebtools::Json::Value::Self *v7;
  char *v8;
  void *v9;
  const glwebtools::Json::Value::Self *v10;
  char *v11;
  void *v12;
  const glwebtools::Json::Value::Self *v13;
  char *v14;
  void *v15;
  const glwebtools::Json::Value::Self *v16;
  char *v17;
  void *v18;
  const glwebtools::Json::Value::Self *v19;
  char *v20;
  void *v21;
  const glwebtools::Json::Value::Self *v22;
  char *v23;
  void *v24;
  const glwebtools::Json::Value::Self *v25;
  char *v26;
  void *v27;
  iap::android_billing::TransactionInfo::Self *v28;
  const glwebtools::JsonReader::Self *v29;
  int result;
  glwebtools::Json::Value::Self *v31;
  iap::android_billing::TransactionInfo::Self *v32;
  int v33;
  int v34;
  int v35;
  int retaddr;
  typedef int _g4_t_v36;
  typedef iap::android_billing::TransactionInfo::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef char *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef int *_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef uint8_t _g4_t_v76[20];
  typedef glwebtools::JsonReader::Self *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (0u + sizeof(_g4_t_v36)) > _g4_s0 ? (0u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v38)) > _g4_s2 ? (24u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v39)) > _g4_s3 ? (28u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v40)) > _g4_s4 ? (48u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v41)) > _g4_s5 ? (52u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v42)) > _g4_s6 ? (64u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v43)) > _g4_s7 ? (68u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v44)) > _g4_s8 ? (80u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v45)) > _g4_s9 ? (84u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v46)) > _g4_s10 ? (96u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v47)) > _g4_s11 ? (100u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v48)) > _g4_s12 ? (112u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v49)) > _g4_s13 ? (116u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v50)) > _g4_s14 ? (128u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v51)) > _g4_s15 ? (132u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v52)) > _g4_s16 ? (144u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v53)) > _g4_s17 ? (148u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (160u + sizeof(_g4_t_v54)) > _g4_s18 ? (160u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (164u + sizeof(_g4_t_v55)) > _g4_s19 ? (164u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v56)) > _g4_s20 ? (176u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (180u + sizeof(_g4_t_v57)) > _g4_s21 ? (180u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (192u + sizeof(_g4_t_v58)) > _g4_s22 ? (192u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (196u + sizeof(_g4_t_v59)) > _g4_s23 ? (196u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v60)) > _g4_s24 ? (208u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (212u + sizeof(_g4_t_v61)) > _g4_s25 ? (212u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (224u + sizeof(_g4_t_v62)) > _g4_s26 ? (224u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (228u + sizeof(_g4_t_v63)) > _g4_s27 ? (228u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (240u + sizeof(_g4_t_v64)) > _g4_s28 ? (240u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (244u + sizeof(_g4_t_v65)) > _g4_s29 ? (244u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (256u + sizeof(_g4_t_v66)) > _g4_s30 ? (256u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (260u + sizeof(_g4_t_v67)) > _g4_s31 ? (260u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (272u + sizeof(_g4_t_v68)) > _g4_s32 ? (272u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (276u + sizeof(_g4_t_v69)) > _g4_s33 ? (276u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v70)) > _g4_s34 ? (288u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (292u + sizeof(_g4_t_v71)) > _g4_s35 ? (292u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (304u + sizeof(_g4_t_v72)) > _g4_s36 ? (304u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (320u + sizeof(_g4_t_v73)) > _g4_s37 ? (320u + sizeof(_g4_t_v73)) : _g4_s37,
    _g4_s39 = (336u + sizeof(_g4_t_v74)) > _g4_s38 ? (336u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (352u + sizeof(_g4_t_v75)) > _g4_s39 ? (352u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (368u + sizeof(_g4_t_v76)) > _g4_s40 ? (368u + sizeof(_g4_t_v76)) : _g4_s40,
    _g4_s42 = (392u + sizeof(_g4_t_v77)) > _g4_s41 ? (392u + sizeof(_g4_t_v77)) : _g4_s41,
    _g4_s43 = (396u + sizeof(_g4_t_v78)) > _g4_s42 ? (396u + sizeof(_g4_t_v78)) : _g4_s42,
    _g4_s44 = (400u + sizeof(_g4_t_v79)) > _g4_s43 ? (400u + sizeof(_g4_t_v79)) : _g4_s43,
    _g4_s45 = (404u + sizeof(_g4_t_v80)) > _g4_s44 ? (404u + sizeof(_g4_t_v80)) : _g4_s44,
    _g4_s46 = (408u + sizeof(_g4_t_v81)) > _g4_s45 ? (408u + sizeof(_g4_t_v81)) : _g4_s45,
    _g4_s47 = (412u + sizeof(_g4_t_v82)) > _g4_s46 ? (412u + sizeof(_g4_t_v82)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 180u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 192u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 196u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 208u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 212u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 228u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 240u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 244u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 256u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 260u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 272u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 276u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 288u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 292u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 304u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 320u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 336u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 352u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 368u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 392u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 396u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 400u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 404u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 408u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 412u);

  v28 = self;
  v29 = a3;
  result = iap::TransactionInfo::read(self, a3);
  if ( result == 0 )
  {
    v31 = (glwebtools::Json::Value::Self *)(v29);
    v32 = v28;
    v33 = v80;
    v34 = v81;
    v35 = v82;
    v82 = retaddr;
    v81 = a1;
    v80 = v35;
    v79 = v34;
    v3 = v31;
    v78 = v33;
    v77 = (glwebtools::JsonReader::Self *)&self;
    v37 = v32;
    v36 = (int)(uintptr_t)(v32) + 64;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "item_id", (int)(uintptr_t)(&v39) + 3);
    v55 = v36;
    g4_std::string::construct_copy(&v56, &v54);
    v57 = v55;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(v3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(v3) != 0
      && glwebtools::Json::Value::isMember(v3, &v56) )
    {
      v4 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v3, (const char **)&v56);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v4);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v76, v57);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v5 = v56 - 12;
    if ( v56 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v56 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v6 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "quantity", (int)(uintptr_t)(&v39) + 2);
    v53 = (int *)((char *)v37 + 68);
    g4_std::string::construct_copy(&v58, &v52);
    v59 = v53;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(v3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(v3) != 0
      && glwebtools::Json::Value::isMember(v3, &v58) )
    {
      v7 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v3, (const char **)&v58);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v7);
      glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v76, v59);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v8 = v58 - 12;
    if ( v58 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v58 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
    v9 = (void *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "transaction_notify", (int)(uintptr_t)(&v39) + 1);
    v51 = (int)(uintptr_t)(v37) + 72;
    g4_std::string::construct_copy(&v60, &v50);
    v61 = v51;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(v3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(v3) != 0
      && glwebtools::Json::Value::isMember(v3, &v60) )
    {
      v10 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v3, (const char **)&v60);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v10);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v76, v61);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v11 = v60 - 12;
    if ( v60 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v60 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    v12 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "shop_name", (int)(uintptr_t)(&v39));
    v49 = (int)(uintptr_t)(v37) + 88;
    g4_std::string::construct_copy(&v62, &v48);
    v63 = v49;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(v3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(v3) != 0
      && glwebtools::Json::Value::isMember(v3, &v62) )
    {
      v13 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v3, (const char **)&v62);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v13);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v76, v63);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v14 = v62 - 12;
    if ( v62 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v62 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v14);
    v15 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "id", (int)(uintptr_t)(&v38) + 3);
    v47 = (int)(uintptr_t)(v37) + 76;
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v75, v3, "item");
    g4_std::string::construct_copy(&v64, &v46);
    v65 = v47;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v75) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v75) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v75, &v64) )
    {
      v16 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                               (glwebtools::Json::Value::Self *)v75,
                                               (const char **)&v64);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v16);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v76, v65);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v17 = v64 - 12;
    if ( v64 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v64 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v17);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v75);
    v18 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "type", (int)(uintptr_t)(&v38) + 2);
    v45 = (int)(uintptr_t)(v37) + 80;
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v74, v3, "item");
    g4_std::string::construct_copy(&v66, &v44);
    v67 = v45;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v74) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v74) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v74, &v66) )
    {
      v19 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                               (glwebtools::Json::Value::Self *)v74,
                                               (const char **)&v66);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v19);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v76, v67);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v20 = v66 - 12;
    if ( v66 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v66 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v20);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v74);
    v21 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "amount", (int)(uintptr_t)(&v38) + 1);
    v43 = (int *)((char *)v37 + 68);
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v73, v3, "item");
    g4_std::string::construct_copy(&v68, &v42);
    v69 = v43;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v73) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v73) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v73, &v68) )
    {
      v22 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                               (glwebtools::Json::Value::Self *)v73,
                                               (const char **)&v68);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v22);
      glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v76, v69);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v23 = v68 - 12;
    if ( v68 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v68 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v23);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
    v24 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v24);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "virtual_cash_type", (int)(uintptr_t)(&v38));
    v41 = (int)(uintptr_t)(v37) + 84;
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v72, v3, "item");
    g4_std::string::construct_copy(&v70, &v40);
    v71 = v41;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v72) != 0
      && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v72) != 0
      && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v72, &v70) )
    {
      v25 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                               (glwebtools::Json::Value::Self *)v72,
                                               (const char **)&v70);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v76, v25);
      glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v76, v71);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v76);
    }
    v26 = v70 - 12;
    if ( v70 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v70 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v26);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v72);
    v27 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v27);
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::android_billing::TransactionInfo::write  (binary VA: 0x152d520)
// Original: iap::android_billing::TransactionInfo::write
// ----------------------------------------------------------------------------
int iap::android_billing::TransactionInfo::write(iap::android_billing::TransactionInfo::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  iap::TransactionInfo::Self *v4;

  v2 = iap::TransactionInfo::write(self, a2);
  if ( v2 == 0 )
    sub_152C7B0((int)(uintptr_t)(self), a2, (int)(uintptr_t)(v4));
  return v2;
}


