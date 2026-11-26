#include "Core/Utils/DecompTypes.h"
#include "iap_BillingMethod.h"

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::ToJsonString  (binary VA: 0x14fd350)
// Original: iap::BillingMethod::ToJsonString
// ----------------------------------------------------------------------------
int iap::BillingMethod::ToJsonString(int a1, int a2)
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
// Function: iap::BillingMethod::Clear  (binary VA: 0x14fd400)
// Original: iap::BillingMethod::Clear
// ----------------------------------------------------------------------------
int iap::BillingMethod::Clear(iap::BillingMethod::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v10)) > _g4_s2 ? (32u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v11)) > _g4_s3 ? (48u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v12)) > _g4_s4 ? (64u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v13)) > _g4_s5 ? (80u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 80u);

  v9 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v9);
  v1 = v9 - 3;
  if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 10) = 0;
  v10 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 12, &v10);
  v2 = v10 - 3;
  if ( v10 - 3 != dword_213B808 && __sync_fetch_and_add(v10 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 18) = 0;
  v11 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 20, &v11);
  v3 = v11 - 3;
  if ( v11 - 3 != dword_213B808 && __sync_fetch_and_add(v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  *((uint8_t *)self + 26) = 0;
  v12 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 28, &v12);
  v4 = v12 - 3;
  if ( v12 - 3 != dword_213B808 && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 34) = 0;
  *(uint64_t *)((char *)self + 36) = 0;
  *((uint8_t *)self + 46) = 0;
  v13 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 48, &v13);
  v5 = v13 - 3;
  if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  *((uint8_t *)self + 54) = 0;
  *((uint8_t *)self + 66) = 0;
  *((uint64_t *)self + 7) = 0;
  v8 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 68, &v8);
  v6 = v8 - 3;
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  *((uint8_t *)self + 74) = 0;
  g4_std::string::clear((char *)self + 76, 0, *(uint32_t *)(*((uint32_t *)self + 19) - 12), 0);
  return (int)(uintptr_t)(g4_std::string::clear((char *)self + 80, 0, *(uint32_t *)(*((uint32_t *)self + 20) - 12), 0));
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::read  (binary VA: 0x14fd6a0)
// Original: iap::BillingMethod::read
// ----------------------------------------------------------------------------
int iap::BillingMethod::read(long double a1, iap::BillingMethod::Self *self, const glwebtools::JsonReader::Self *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22)
{
  const glwebtools::Json::Value::Self *v22;
  bool IsOperationSuccess;
  glwebtools::Self *v24;
  int v25;
  int v26;
  const glwebtools::Json::Value::Self *v27;
  void *v28;
  void *v29;
  void *v30;
  const glwebtools::Json::Value::Self *v31;
  void *v32;
  void *v33;
  void *v34;
  const glwebtools::Json::Value::Self *v35;
  void *v36;
  void *v37;
  void *v38;
  char IsValid;
  int v40;
  const glwebtools::Json::Value::Self *v41;
  void *v42;
  void *v43;
  void *v44;
  void *v45;
  void *v46;
  void *v47;
  void *v48;
  int v49;
  int v50;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v54;
  const glwebtools::Json::Value::Self *v55;
  const glwebtools::Json::Value::Self *v56;
  void *v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef double *_g4_t_v61;
  typedef glwebtools::Self *_g4_t_v62;
  typedef glwebtools::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef glwebtools::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef glwebtools::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef char *_g4_t_v72;
  typedef double *_g4_t_v73;
  typedef char *_g4_t_v74;
  typedef char *_g4_t_v75;
  typedef char *_g4_t_v76;
  typedef char *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef void *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef void *_g4_t_v83;
  typedef void *_g4_t_v84;
  typedef void *_g4_t_v85;
  typedef void *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef glwebtools::Self *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97[4];
  typedef int _g4_t_v98;
  typedef char *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef char *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef char *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef char *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef char *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef char *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef char *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef char *_g4_t_v113;
  typedef int _g4_t_v114;
  typedef double *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef char *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef double *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef char *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef double *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef double *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef char *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef char *_g4_t_v129;
  typedef double _g4_t_v130 __attribute__((aligned(1)));
  typedef int _g4_t_v131[4];
  typedef const char *_g4_t_v132[8];
  typedef char *_g4_t_v133;
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_v58)) > _g4_s0 ? (0u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v59)) > _g4_s1 ? (0u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v60)) > _g4_s2 ? (0u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v61)) > _g4_s3 ? (44u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v62)) > _g4_s4 ? (44u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v63)) > _g4_s5 ? (48u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v64)) > _g4_s6 ? (48u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v65)) > _g4_s7 ? (48u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v66)) > _g4_s8 ? (48u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v67)) > _g4_s9 ? (48u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v68)) > _g4_s10 ? (48u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v69)) > _g4_s11 ? (48u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v70)) > _g4_s12 ? (48u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v71)) > _g4_s13 ? (48u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v72)) > _g4_s14 ? (52u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v73)) > _g4_s15 ? (60u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v74)) > _g4_s16 ? (72u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v75)) > _g4_s17 ? (76u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v76)) > _g4_s18 ? (80u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v77)) > _g4_s19 ? (88u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v78)) > _g4_s20 ? (96u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v79)) > _g4_s21 ? (96u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v80)) > _g4_s22 ? (96u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v81)) > _g4_s23 ? (96u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v82)) > _g4_s24 ? (96u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v83)) > _g4_s25 ? (104u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v84)) > _g4_s26 ? (104u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v85)) > _g4_s27 ? (104u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v86)) > _g4_s28 ? (104u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v87)) > _g4_s29 ? (104u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v88)) > _g4_s30 ? (104u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (110u + sizeof(_g4_t_v89)) > _g4_s31 ? (110u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v90)) > _g4_s32 ? (112u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v91)) > _g4_s33 ? (116u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v92)) > _g4_s34 ? (120u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v93)) > _g4_s35 ? (124u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v94)) > _g4_s36 ? (128u + sizeof(_g4_t_v94)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v95)) > _g4_s37 ? (132u + sizeof(_g4_t_v95)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v96)) > _g4_s38 ? (136u + sizeof(_g4_t_v96)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v97)) > _g4_s39 ? (140u + sizeof(_g4_t_v97)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v98)) > _g4_s40 ? (156u + sizeof(_g4_t_v98)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v99)) > _g4_s41 ? (160u + sizeof(_g4_t_v99)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v100)) > _g4_s42 ? (172u + sizeof(_g4_t_v100)) : _g4_s42,
    _g4_s44 = (176u + sizeof(_g4_t_v101)) > _g4_s43 ? (176u + sizeof(_g4_t_v101)) : _g4_s43,
    _g4_s45 = (188u + sizeof(_g4_t_v102)) > _g4_s44 ? (188u + sizeof(_g4_t_v102)) : _g4_s44,
    _g4_s46 = (192u + sizeof(_g4_t_v103)) > _g4_s45 ? (192u + sizeof(_g4_t_v103)) : _g4_s45,
    _g4_s47 = (204u + sizeof(_g4_t_v104)) > _g4_s46 ? (204u + sizeof(_g4_t_v104)) : _g4_s46,
    _g4_s48 = (208u + sizeof(_g4_t_v105)) > _g4_s47 ? (208u + sizeof(_g4_t_v105)) : _g4_s47,
    _g4_s49 = (220u + sizeof(_g4_t_v106)) > _g4_s48 ? (220u + sizeof(_g4_t_v106)) : _g4_s48,
    _g4_s50 = (224u + sizeof(_g4_t_v107)) > _g4_s49 ? (224u + sizeof(_g4_t_v107)) : _g4_s49,
    _g4_s51 = (236u + sizeof(_g4_t_v108)) > _g4_s50 ? (236u + sizeof(_g4_t_v108)) : _g4_s50,
    _g4_s52 = (240u + sizeof(_g4_t_v109)) > _g4_s51 ? (240u + sizeof(_g4_t_v109)) : _g4_s51,
    _g4_s53 = (252u + sizeof(_g4_t_v110)) > _g4_s52 ? (252u + sizeof(_g4_t_v110)) : _g4_s52,
    _g4_s54 = (256u + sizeof(_g4_t_v111)) > _g4_s53 ? (256u + sizeof(_g4_t_v111)) : _g4_s53,
    _g4_s55 = (268u + sizeof(_g4_t_v112)) > _g4_s54 ? (268u + sizeof(_g4_t_v112)) : _g4_s54,
    _g4_s56 = (272u + sizeof(_g4_t_v113)) > _g4_s55 ? (272u + sizeof(_g4_t_v113)) : _g4_s55,
    _g4_s57 = (284u + sizeof(_g4_t_v114)) > _g4_s56 ? (284u + sizeof(_g4_t_v114)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v115)) > _g4_s57 ? (288u + sizeof(_g4_t_v115)) : _g4_s57,
    _g4_s59 = (300u + sizeof(_g4_t_v116)) > _g4_s58 ? (300u + sizeof(_g4_t_v116)) : _g4_s58,
    _g4_s60 = (304u + sizeof(_g4_t_v117)) > _g4_s59 ? (304u + sizeof(_g4_t_v117)) : _g4_s59,
    _g4_s61 = (316u + sizeof(_g4_t_v118)) > _g4_s60 ? (316u + sizeof(_g4_t_v118)) : _g4_s60,
    _g4_s62 = (320u + sizeof(_g4_t_v119)) > _g4_s61 ? (320u + sizeof(_g4_t_v119)) : _g4_s61,
    _g4_s63 = (332u + sizeof(_g4_t_v120)) > _g4_s62 ? (332u + sizeof(_g4_t_v120)) : _g4_s62,
    _g4_s64 = (336u + sizeof(_g4_t_v121)) > _g4_s63 ? (336u + sizeof(_g4_t_v121)) : _g4_s63,
    _g4_s65 = (348u + sizeof(_g4_t_v122)) > _g4_s64 ? (348u + sizeof(_g4_t_v122)) : _g4_s64,
    _g4_s66 = (352u + sizeof(_g4_t_v123)) > _g4_s65 ? (352u + sizeof(_g4_t_v123)) : _g4_s65,
    _g4_s67 = (364u + sizeof(_g4_t_v124)) > _g4_s66 ? (364u + sizeof(_g4_t_v124)) : _g4_s66,
    _g4_s68 = (368u + sizeof(_g4_t_v125)) > _g4_s67 ? (368u + sizeof(_g4_t_v125)) : _g4_s67,
    _g4_s69 = (380u + sizeof(_g4_t_v126)) > _g4_s68 ? (380u + sizeof(_g4_t_v126)) : _g4_s68,
    _g4_s70 = (384u + sizeof(_g4_t_v127)) > _g4_s69 ? (384u + sizeof(_g4_t_v127)) : _g4_s69,
    _g4_s71 = (396u + sizeof(_g4_t_v128)) > _g4_s70 ? (396u + sizeof(_g4_t_v128)) : _g4_s70,
    _g4_s72 = (400u + sizeof(_g4_t_v129)) > _g4_s71 ? (400u + sizeof(_g4_t_v129)) : _g4_s71,
    _g4_s73 = (404u + sizeof(_g4_t_v130)) > _g4_s72 ? (404u + sizeof(_g4_t_v130)) : _g4_s72,
    _g4_s74 = (412u + sizeof(_g4_t_v131)) > _g4_s73 ? (412u + sizeof(_g4_t_v131)) : _g4_s73,
    _g4_s75 = (428u + sizeof(_g4_t_v132)) > _g4_s74 ? (428u + sizeof(_g4_t_v132)) : _g4_s74,
    _g4_s76 = (460u + sizeof(_g4_t_v133)) > _g4_s75 ? (460u + sizeof(_g4_t_v133)) : _g4_s75
  };
  alignas(16) uint8_t _g4_sf[_g4_s76];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 0u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 96u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 96u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 104u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 104u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 104u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 104u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 110u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 112u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 116u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 120u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 124u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 128u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 132u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 136u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 140u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 156u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 160u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 172u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 176u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 188u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 192u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 204u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 208u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 220u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 224u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 236u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 240u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 252u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 256u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 268u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 272u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 284u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 288u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 300u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 304u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 316u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 320u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 332u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 336u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 348u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 352u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 364u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 368u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 380u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 384u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 396u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 400u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 404u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 412u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 428u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 460u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v98), "type", (int)(uintptr_t)(&v89));
  v99 = (char *)self + 4;
  g4_std::string::construct_copy(&v106, &v98);
  v107 = v99;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(a3, (char **)&v106) )
    {
      v22 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v106);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v132, v22);
      v78 = v107;
      v131[0] = (int)(uintptr_t)(&dword_213B814);
      v63 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v132, (int)(uintptr_t)(v131));
      IsOperationSuccess = glwebtools::IsOperationSuccess(v63);
      v24 = v63;
      if ( IsOperationSuccess )
      {
        g4_std::string::assign_str(v78, v131);
        v24 = nullptr;
        v78[6] = 1;
      }
      v79 = (void *)(v131[0] - 12);
      if ( (uint32_t *)(v131[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v131[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v58 = (char *)&v90 + 2;
        v69 = v24;
        g4_std::string::Rep::M_destroy(v79);
        v24 = v69;
      }
      v64 = (int)(uintptr_t)(v24);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v132);
      v25 = v64;
    }
    else
    {
      v25 = -2147483646;
    }
  }
  else
  {
    v25 = -2147483645;
  }
  v83 = (void *)(v106 - 12);
  if ( (uint32_t *)(v106 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v106 - 4), 0xFFFFFFFF) <= 0 )
  {
    v58 = (char *)&v90 + 3;
    v67 = v25;
    g4_std::string::Rep::M_destroy(v83);
    v25 = v67;
  }
  v84 = (void *)(v98 - 12);
  if ( (uint32_t *)(v98 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v98 - 4), 0xFFFFFFFF) <= 0 )
  {
    v58 = (char *)&v91;
    v68 = v25;
    g4_std::string::Rep::M_destroy(v84);
    v25 = v68;
  }
  if ( v25 == 0 )
  {
    v26 = -2147483646;
    if ( *((uint8_t *)self + 10) == 0 || *(uint32_t *)(*((uint32_t *)self + 1) - 12) == 0 )
      return v26;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v100), "name", (int)(uintptr_t)(&v89) + 1);
    v101 = (char *)self + 12;
    g4_std::string::construct_copy(&v108, &v100);
    v109 = v101;
    v80 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
    {
      v80 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a3, (char **)&v108) )
      {
        v27 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v108);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v132, v27);
        v77 = v109;
        v131[0] = (int)(uintptr_t)(&dword_213B814);
        v80 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v132, (int)(uintptr_t)(v131));
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v80) )
        {
          g4_std::string::assign_str(v77, v131);
          v80 = 0;
          v77[6] = 1;
        }
        v28 = (void *)(v131[0] - 12);
        if ( (uint32_t *)(v131[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v131[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v59 = (char *)&v91 + 1;
          g4_std::string::Rep::M_destroy(v28);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v132);
      }
    }
    v29 = (void *)(v108 - 12);
    if ( (uint32_t *)(v108 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v108 - 4), 0xFFFFFFFF) <= 0 )
    {
      v59 = (char *)&v91 + 2;
      g4_std::string::Rep::M_destroy(v29);
    }
    v30 = (void *)(v100 - 12);
    if ( (uint32_t *)(v100 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v100 - 4), 0xFFFFFFFF) <= 0 )
    {
      v59 = (char *)&v91 + 3;
      g4_std::string::Rep::M_destroy(v30);
    }
    if ( v80 != 0 )
      goto LABEL_88;
    v26 = -2147483646;
    if ( *((uint8_t *)self + 18) == 0 || *(uint32_t *)(*((uint32_t *)self + 3) - 12) == 0 )
      return v26;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v102), "currency", (int)(uintptr_t)(&v90));
    v103 = (char *)self + 20;
    g4_std::string::construct_copy(&v110, &v102);
    v111 = v103;
    v81 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
    {
      v81 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a3, (char **)&v110) )
      {
        v31 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v110);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v132, v31);
        v76 = v111;
        v131[0] = (int)(uintptr_t)(&dword_213B814);
        v81 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v132, (int)(uintptr_t)(v131));
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v81) )
        {
          g4_std::string::assign_str(v76, v131);
          v81 = 0;
          v76[6] = 1;
        }
        v32 = (void *)(v131[0] - 12);
        if ( (uint32_t *)(v131[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v131[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v59 = (char *)&v92;
          g4_std::string::Rep::M_destroy(v32);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v132);
      }
    }
    v33 = (void *)(v110 - 12);
    if ( (uint32_t *)(v110 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v110 - 4), 0xFFFFFFFF) <= 0 )
    {
      v59 = (char *)&v92 + 1;
      g4_std::string::Rep::M_destroy(v33);
    }
    v34 = (void *)(v102 - 12);
    if ( (uint32_t *)(v102 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v102 - 4), 0xFFFFFFFF) <= 0 )
    {
      v59 = (char *)&v92 + 2;
      g4_std::string::Rep::M_destroy(v34);
    }
    if ( v81 != 0 )
      goto LABEL_88;
    v26 = -2147483646;
    if ( *((uint8_t *)self + 26) == 0 || *(uint32_t *)(*((uint32_t *)self + 5) - 12) == 0 )
      return v26;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v104), "currency_symbol", (int)(uintptr_t)(&v90) + 1);
    v105 = (char *)self + 28;
    g4_std::string::construct_copy(&v112, &v104);
    v113 = v105;
    v82 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
    {
      v82 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a3, (char **)&v112) )
      {
        v35 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v112);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v132, v35);
        v75 = v113;
        v131[0] = (int)(uintptr_t)(&dword_213B814);
        v82 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v132, (int)(uintptr_t)(v131));
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v82) )
        {
          g4_std::string::assign_str(v75, v131);
          v82 = 0;
          v75[6] = 1;
        }
        v36 = (void *)(v131[0] - 12);
        if ( (uint32_t *)(v131[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v131[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v59 = (char *)&v92 + 3;
          g4_std::string::Rep::M_destroy(v36);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v132);
      }
    }
    v37 = (void *)(v112 - 12);
    if ( (uint32_t *)(v112 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v112 - 4), 0xFFFFFFFF) <= 0 )
    {
      v59 = (char *)&v93;
      g4_std::string::Rep::M_destroy(v37);
    }
    v38 = (void *)(v104 - 12);
    if ( (uint32_t *)(v104 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v104 - 4), 0xFFFFFFFF) <= 0 )
    {
      v59 = (char *)&v93 + 1;
      g4_std::string::Rep::M_destroy(v38);
    }
    if ( v82 != 0 )
    {
LABEL_88:
      G4_VCALL<void>(self, 8, v59);
      return a22;
    }
    v26 = -2147483646;
    if ( *((uint8_t *)self + 34) == 0 || *(uint32_t *)(*((uint32_t *)self + 7) - 12) == 0 )
      return v26;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v114), "price", (int)(uintptr_t)(&v93) + 2);
    v115 = (double *)((char *)self + 36);
    g4_std::string::construct_copy(&v122, &v114);
    v123 = v115;
    IsValid = glwebtools::JsonReader::IsValid(a3);
    v40 = -2147483645;
    if ( IsValid != 0 )
    {
      isObject = glwebtools::JsonReader::isObject(a3);
      v40 = -2147483645;
      if ( isObject != 0 )
      {
        isMember = glwebtools::Json::Value::isMember(a3, (char **)&v122);
        v40 = -2147483646;
        if ( isMember )
        {
          v54 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v122);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v131, v54);
          v61 = v123;
          v88 = (glwebtools::Self *)glwebtools::JsonReader::read(a1, (glwebtools::JsonReader::Self *)v131, &v130);
          if ( glwebtools::IsOperationSuccess(v88) )
          {
            v88 = nullptr;
            *v61 = v130;
            *((uint8_t *)v61 + 10) = 1;
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v131);
          v40 = (int)(uintptr_t)(v88);
        }
      }
    }
    v85 = (void *)(v122 - 12);
    if ( (uint32_t *)(v122 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v122 - 4), 0xFFFFFFFF) <= 0 )
    {
      v58 = (char *)&v94 + 2;
      v70 = v40;
      g4_std::string::Rep::M_destroy(v85);
      v40 = v70;
    }
    v86 = (void *)(v114 - 12);
    if ( (uint32_t *)(v114 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v114 - 4), 0xFFFFFFFF) <= 0 )
    {
      v58 = (char *)&v94 + 3;
      v71 = v40;
      g4_std::string::Rep::M_destroy(v86);
      v40 = v71;
    }
    if ( v40 == 0 )
    {
      v26 = -2147483646;
      if ( *((uint8_t *)self + 46) == 0 || *(double *)((char *)self + 36) <= 0.0 )
        return v26;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v116), "display_price", (int)(uintptr_t)(&v93) + 3);
      v117 = (char *)self + 48;
      g4_std::string::construct_copy(&v128, &v116);
      v129 = v117;
      v87 = -2147483645;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
      {
        v87 = -2147483646;
        if ( glwebtools::Json::Value::isMember(a3, (char **)&v128) )
        {
          v41 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v128);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v131, v41);
          v74 = v129;
          v97[0] = (int)(uintptr_t)(&dword_213B814);
          v87 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v131, (int)(uintptr_t)(v97));
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v87) )
          {
            g4_std::string::assign_str(v74, v97);
            v87 = 0;
            v74[6] = 1;
          }
          v42 = (void *)(v97[0] - 12);
          if ( (uint32_t *)(v97[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v97[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v60 = (char *)&v95;
            g4_std::string::Rep::M_destroy(v42);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v131);
        }
      }
      v43 = (void *)(v128 - 12);
      if ( (uint32_t *)(v128 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v128 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v95 + 1;
        g4_std::string::Rep::M_destroy(v43);
      }
      v44 = (void *)(v116 - 12);
      if ( (uint32_t *)(v116 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v116 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v95 + 2;
        g4_std::string::Rep::M_destroy(v44);
      }
      if ( v87 != 0 )
        goto LABEL_91;
      v26 = -2147483646;
      if ( *((uint8_t *)self + 54) == 0 || *(uint32_t *)(*((uint32_t *)self + 12) - 12) == 0 )
        return v26;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v118), "replaced_price", (int)(uintptr_t)(&v94));
      v119 = (double *)((char *)self + 56);
      g4_std::string::construct_copy(&v124, &v118);
      v125 = v119;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
        && glwebtools::Json::Value::isMember(a3, (char **)&v124) )
      {
        v55 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v124);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v131, v55);
        v73 = v125;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v131) != 0 )
        {
          v62 = (glwebtools::Self *)glwebtools::JsonReader::read(a1, (glwebtools::JsonReader::Self *)v131, &v130);
          if ( glwebtools::IsOperationSuccess(v62) )
          {
            *v73 = v130;
            *((uint8_t *)v73 + 10) = 1;
          }
          else
          {
            v87 = (int)(uintptr_t)(v62);
          }
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v131);
      }
      v45 = (void *)(v124 - 12);
      if ( (uint32_t *)(v124 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v124 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v95 + 3;
        g4_std::string::Rep::M_destroy(v45);
      }
      v46 = (void *)(v118 - 12);
      if ( (uint32_t *)(v118 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v118 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v96;
        g4_std::string::Rep::M_destroy(v46);
      }
      if ( v87 != 0 )
        goto LABEL_91;
      if ( *((uint8_t *)self + 66) != 0 )
      {
        v26 = -2147483646;
        if ( *((double *)self + 7) <= 0.0 )
          return v26;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v120), "replaced_display_price", (int)(uintptr_t)(&v94) + 1);
      v121 = (char *)self + 68;
      g4_std::string::construct_copy(&v126, &v120);
      v127 = v121;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
        && glwebtools::Json::Value::isMember(a3, (char **)&v126) )
      {
        v56 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v126);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v131, v56);
        v72 = v127;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v131) != 0 )
        {
          v97[0] = (int)(uintptr_t)(&dword_213B814);
          v66 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v131, (int)(uintptr_t)(v97));
          if ( glwebtools::IsOperationSuccess(v66) )
          {
            g4_std::string::assign_str(v72, v97);
            v72[6] = 1;
          }
          else
          {
            v87 = (int)(uintptr_t)(v66);
          }
          v57 = (void *)(v97[0] - 12);
          if ( (uint32_t *)(v97[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v97[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v60 = (char *)&v96 + 1;
            g4_std::string::Rep::M_destroy(v57);
          }
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v131);
      }
      v47 = (void *)(v126 - 12);
      if ( (uint32_t *)(v126 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v126 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v96 + 2;
        g4_std::string::Rep::M_destroy(v47);
      }
      v48 = (void *)(v120 - 12);
      if ( (uint32_t *)(v120 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v120 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v96 + 3;
        g4_std::string::Rep::M_destroy(v48);
      }
      if ( v87 != 0 )
      {
LABEL_91:
        G4_VCALL<void>(self, 8, v60);
        return v87;
      }
      if ( *((uint8_t *)self + 74) != 0 )
      {
        v26 = -2147483646;
        if ( *(uint32_t *)(*((uint32_t *)self + 17) - 12) == 0 )
          return v26;
      }
      v132[0] = "type";
      v132[1] = "name";
      v132[2] = "currency";
      v132[3] = "currency_symbol";
      v132[4] = "price";
      v132[5] = "display_price";
      v132[6] = "replaced_price";
      v132[7] = "replaced_display_price";
      v26 = glwebtools::JsonReader::exclude(
              a1,
              a3,
              v132,
              (const char **)&v133,
              (iap::BillingMethod::Self *)((char *)self + 84));
      if ( v26 == 0 )
      {
        if ( *((uint8_t *)self + 54) != 0 && *(uint32_t *)(*((uint32_t *)self + 12) - 12) != 0 )
        {
          g4_std::string::assign_str((char *)self + 76, (char *)self + 48);
          v49 = g4_std_compat::string_find((char *)self + 76, *((uint32_t *)self + 7), 0, *(uint32_t *)(*((uint32_t *)self + 7) - 12));
          v26 = 0;
          if ( v49 != -1 )
          {
            sub_193A9B0(
              (int)(uintptr_t)(self) + 76,
              v49,
              *(uint32_t *)(*((uint32_t *)self + 7) - 12),
              *((void **)self + 5),
              *(uint32_t *)(*((uint32_t *)self + 5) - 12));
            v26 = 0;
          }
        }
        if ( *((uint8_t *)self + 74) != 0 && *(uint32_t *)(*((uint32_t *)self + 17) - 12) != 0 )
        {
          v65 = v26;
          g4_std::string::assign_str((char *)self + 80, (char *)self + 68);
          v50 = g4_std_compat::string_find((char *)self + 80, *((uint32_t *)self + 7), 0, *(uint32_t *)(*((uint32_t *)self + 7) - 12));
          v26 = v65;
          if ( v50 != -1 )
          {
            sub_193A9B0(
              (int)(uintptr_t)(self) + 80,
              v50,
              *(uint32_t *)(*((uint32_t *)self + 7) - 12),
              *((void **)self + 5),
              *(uint32_t *)(*((uint32_t *)self + 5) - 12));
            return v65;
          }
        }
        return v26;
      }
    }
  }
  G4_VCALL<void>(self, 8, v58);
  return a10;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::write  (binary VA: 0x14fea10)
// Original: iap::BillingMethod::write
// ----------------------------------------------------------------------------
int iap::BillingMethod::write(iap::BillingMethod::Self *self, glwebtools::JsonWriter::Self *a2)
{
  char isObject;
  int v3;
  int v4;
  void *v5;
  void *v6;
  char v7;
  int v8;
  int v9;
  void *v10;
  void *v11;
  char v12;
  int v13;
  int v14;
  void *v15;
  void *v16;
  char v17;
  int v18;
  int v19;
  void *v20;
  void *v21;
  char v22;
  double *v23;
  int v24;
  void *v25;
  void *v26;
  char v27;
  int v28;
  int v29;
  void *v30;
  void *v31;
  void *v32;
  void *v33;
  void *v34;
  void *v35;
  char v37;
  int v38;
  glwebtools::Self *v39;
  char v40;
  double *v41;
  glwebtools::Self *v42;
  glwebtools::Json::Value::Self *v43;
  glwebtools::Json::Value::Self *v44;
  glwebtools::Json::Value::Self *v45;
  glwebtools::Json::Value::Self *v46;
  glwebtools::Json::Value::Self *v47;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v49;
  glwebtools::Json::Value::Self *v50;
  glwebtools::Json::Value::Self *v51;
  glwebtools::Json::Value::Self *v52;
  glwebtools::Json::Value::Self *v53;
  glwebtools::Json::Value::Self *v54;
  glwebtools::Json::Value::Self *v55;
  glwebtools::Json::Value::Self *v56;
  glwebtools::Json::Value::Self *v57;
  glwebtools::Json::Value::Self *v58;
  glwebtools::Json::Value::Self *v59;
  glwebtools::Json::Value::Self *v60;
  glwebtools::Json::Value::Self *v61;
  glwebtools::Json::Value::Self *v62;
  glwebtools::Json::Value::Self *v63;
  glwebtools::Json::Value::Self *v64;
  glwebtools::Json::Value::Self *v65;
  glwebtools::Json::Value::Self *v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef char *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef double *_g4_t_v75;
  typedef double *_g4_t_v76;
  typedef char *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef char *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef double *_g4_t_v81;
  typedef double *_g4_t_v82;
  typedef const glwebtools::Json::Value::Self *_g4_t_v83;
  typedef const glwebtools::Json::Value::Self *_g4_t_v84;
  typedef const glwebtools::Json::Value::Self *_g4_t_v85;
  typedef const glwebtools::Json::Value::Self *_g4_t_v86;
  typedef const glwebtools::Json::Value::Self *_g4_t_v87;
  typedef const glwebtools::Json::Value::Self *_g4_t_v88;
  typedef const glwebtools::Json::Value::Self *_g4_t_v89;
  typedef const glwebtools::Json::Value::Self *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef char *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef char *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef char *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef double *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef char *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef double *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef char *_g4_t_v108;
  typedef int _g4_t_v109[4];
  typedef int _g4_t_v110[4];
  typedef int _g4_t_v111[4];
  typedef int _g4_t_v112[4];
  typedef int _g4_t_v113[4];
  typedef int _g4_t_v114[4];
  typedef int _g4_t_v115[4];
  typedef int _g4_t_v116[3];
  typedef uint8_t _g4_t_v117[16];
  typedef uint8_t _g4_t_v118[16];
  typedef uint8_t _g4_t_v119[16];
  typedef uint8_t _g4_t_v120[16];
  typedef uint8_t _g4_t_v121[16];
  typedef uint8_t _g4_t_v122[16];
  typedef uint8_t _g4_t_v123[16];
  typedef uint8_t _g4_t_v124[16];
  typedef uint8_t _g4_t_v125[32];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (4u + sizeof(_g4_t_v67)) > _g4_s0 ? (4u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v68)) > _g4_s1 ? (4u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v69)) > _g4_s2 ? (4u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v70)) > _g4_s3 ? (4u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v71)) > _g4_s4 ? (4u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v72)) > _g4_s5 ? (4u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v73)) > _g4_s6 ? (4u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v74)) > _g4_s7 ? (4u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v75)) > _g4_s8 ? (4u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v76)) > _g4_s9 ? (4u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v77)) > _g4_s10 ? (4u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v78)) > _g4_s11 ? (4u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v79)) > _g4_s12 ? (4u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v80)) > _g4_s13 ? (4u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v81)) > _g4_s14 ? (4u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v82)) > _g4_s15 ? (4u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v83)) > _g4_s16 ? (4u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v84)) > _g4_s17 ? (4u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (4u + sizeof(_g4_t_v85)) > _g4_s18 ? (4u + sizeof(_g4_t_v85)) : _g4_s18,
    _g4_s20 = (4u + sizeof(_g4_t_v86)) > _g4_s19 ? (4u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (4u + sizeof(_g4_t_v87)) > _g4_s20 ? (4u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (4u + sizeof(_g4_t_v88)) > _g4_s21 ? (4u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (4u + sizeof(_g4_t_v89)) > _g4_s22 ? (4u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (4u + sizeof(_g4_t_v90)) > _g4_s23 ? (4u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (16u + sizeof(_g4_t_v91)) > _g4_s24 ? (16u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v92)) > _g4_s25 ? (20u + sizeof(_g4_t_v92)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v93)) > _g4_s26 ? (40u + sizeof(_g4_t_v93)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v94)) > _g4_s27 ? (44u + sizeof(_g4_t_v94)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v95)) > _g4_s28 ? (56u + sizeof(_g4_t_v95)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v96)) > _g4_s29 ? (60u + sizeof(_g4_t_v96)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v97)) > _g4_s30 ? (72u + sizeof(_g4_t_v97)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v98)) > _g4_s31 ? (76u + sizeof(_g4_t_v98)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v99)) > _g4_s32 ? (88u + sizeof(_g4_t_v99)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v100)) > _g4_s33 ? (92u + sizeof(_g4_t_v100)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v101)) > _g4_s34 ? (104u + sizeof(_g4_t_v101)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v102)) > _g4_s35 ? (108u + sizeof(_g4_t_v102)) : _g4_s35,
    _g4_s37 = (120u + sizeof(_g4_t_v103)) > _g4_s36 ? (120u + sizeof(_g4_t_v103)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v104)) > _g4_s37 ? (124u + sizeof(_g4_t_v104)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v105)) > _g4_s38 ? (136u + sizeof(_g4_t_v105)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v106)) > _g4_s39 ? (140u + sizeof(_g4_t_v106)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v107)) > _g4_s40 ? (152u + sizeof(_g4_t_v107)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v108)) > _g4_s41 ? (156u + sizeof(_g4_t_v108)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v109)) > _g4_s42 ? (168u + sizeof(_g4_t_v109)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v110)) > _g4_s43 ? (184u + sizeof(_g4_t_v110)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v111)) > _g4_s44 ? (200u + sizeof(_g4_t_v111)) : _g4_s44,
    _g4_s46 = (216u + sizeof(_g4_t_v112)) > _g4_s45 ? (216u + sizeof(_g4_t_v112)) : _g4_s45,
    _g4_s47 = (232u + sizeof(_g4_t_v113)) > _g4_s46 ? (232u + sizeof(_g4_t_v113)) : _g4_s46,
    _g4_s48 = (248u + sizeof(_g4_t_v114)) > _g4_s47 ? (248u + sizeof(_g4_t_v114)) : _g4_s47,
    _g4_s49 = (264u + sizeof(_g4_t_v115)) > _g4_s48 ? (264u + sizeof(_g4_t_v115)) : _g4_s48,
    _g4_s50 = (280u + sizeof(_g4_t_v116)) > _g4_s49 ? (280u + sizeof(_g4_t_v116)) : _g4_s49,
    _g4_s51 = (292u + sizeof(_g4_t_v117)) > _g4_s50 ? (292u + sizeof(_g4_t_v117)) : _g4_s50,
    _g4_s52 = (308u + sizeof(_g4_t_v118)) > _g4_s51 ? (308u + sizeof(_g4_t_v118)) : _g4_s51,
    _g4_s53 = (324u + sizeof(_g4_t_v119)) > _g4_s52 ? (324u + sizeof(_g4_t_v119)) : _g4_s52,
    _g4_s54 = (340u + sizeof(_g4_t_v120)) > _g4_s53 ? (340u + sizeof(_g4_t_v120)) : _g4_s53,
    _g4_s55 = (356u + sizeof(_g4_t_v121)) > _g4_s54 ? (356u + sizeof(_g4_t_v121)) : _g4_s54,
    _g4_s56 = (372u + sizeof(_g4_t_v122)) > _g4_s55 ? (372u + sizeof(_g4_t_v122)) : _g4_s55,
    _g4_s57 = (388u + sizeof(_g4_t_v123)) > _g4_s56 ? (388u + sizeof(_g4_t_v123)) : _g4_s56,
    _g4_s58 = (404u + sizeof(_g4_t_v124)) > _g4_s57 ? (404u + sizeof(_g4_t_v124)) : _g4_s57,
    _g4_s59 = (420u + sizeof(_g4_t_v125)) > _g4_s58 ? (420u + sizeof(_g4_t_v125)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 4u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 4u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 4u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 4u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 4u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 4u);
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
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 4u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 4u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 4u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 20u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 56u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 60u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 72u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 76u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 88u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 92u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 108u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 120u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 124u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 136u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 140u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 152u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 156u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 168u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 184u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 200u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 216u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 232u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 248u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 264u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 280u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 292u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 308u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 324u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 340u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 356u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 372u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 388u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 404u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 420u);

  if ( *((uint8_t *)self + 10) != 0 && *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v93), "type", (int)(uintptr_t)(&v91));
    v94 = (char *)self + 4;
    g4_std::string::construct_copy(v109, &v93);
    v109[1] = (int)(uintptr_t)(v94);
    if ( v94[6] != 0 )
    {
      v67 = v94;
      isObject = glwebtools::JsonWriter::isObject(a2);
      v3 = (int)(uintptr_t)(v67);
      if ( isObject == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v117), (char *)&loc_6 + 1);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v117);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v117);
        v3 = (int)(uintptr_t)(v67);
      }
      v68 = v3;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v4 = -2147483646;
      if ( *(uint8_t *)(v68 + 6) != 0 )
        v4 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, v68);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
      {
        v86 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v55 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v56 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v55, (char **)v109);
        glwebtools::Json::Value::opAssign(v56, v86);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v5 = (void *)(v109[0] - 12);
    if ( (uint32_t *)(v109[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v109[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v93 - 12);
    if ( (uint32_t *)(v93 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v93 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
  }
  if ( *((uint8_t *)self + 18) != 0 && *(uint32_t *)(*((uint32_t *)self + 3) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "name", (int)(uintptr_t)(&v91) + 1);
    v96 = (char *)self + 12;
    g4_std::string::construct_copy(v110, &v95);
    v110[1] = (int)(uintptr_t)(v96);
    if ( v96[6] != 0 )
    {
      v69 = v96;
      v7 = glwebtools::JsonWriter::isObject(a2);
      v8 = (int)(uintptr_t)(v69);
      if ( v7 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v118), (char *)&loc_6 + 1);
        v49 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v49, (const glwebtools::Json::Value::Self *)v118);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v118);
        v8 = (int)(uintptr_t)(v69);
      }
      v70 = v8;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v9 = -2147483646;
      if ( *(uint8_t *)(v70 + 6) != 0 )
        v9 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, v70);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v9) )
      {
        v84 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v51 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v52 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v51, (char **)v110);
        glwebtools::Json::Value::opAssign(v52, v84);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v10 = (void *)(v110[0] - 12);
    if ( (uint32_t *)(v110[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v110[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v95 - 12);
    if ( (uint32_t *)(v95 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
  }
  if ( *((uint8_t *)self + 26) != 0 && *(uint32_t *)(*((uint32_t *)self + 5) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v97), "currency", (int)(uintptr_t)(&v91) + 2);
    v98 = (char *)self + 20;
    g4_std::string::construct_copy(v111, &v97);
    v111[1] = (int)(uintptr_t)(v98);
    if ( v98[6] != 0 )
    {
      v71 = v98;
      v12 = glwebtools::JsonWriter::isObject(a2);
      v13 = (int)(uintptr_t)(v71);
      if ( v12 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v119), (char *)&loc_6 + 1);
        v50 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v50, (const glwebtools::Json::Value::Self *)v119);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v119);
        v13 = (int)(uintptr_t)(v71);
      }
      v72 = v13;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v14 = -2147483646;
      if ( *(uint8_t *)(v72 + 6) != 0 )
        v14 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, v72);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v14) )
      {
        v83 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v43 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v44 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v43, (char **)v111);
        glwebtools::Json::Value::opAssign(v44, v83);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v15 = (void *)(v111[0] - 12);
    if ( (uint32_t *)(v111[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v111[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v97 - 12);
    if ( (uint32_t *)(v97 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
  }
  if ( *((uint8_t *)self + 34) != 0 && *(uint32_t *)(*((uint32_t *)self + 7) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v99), "currency_symbol", (int)(uintptr_t)(&v91) + 3);
    v100 = (char *)self + 28;
    g4_std::string::construct_copy(v112, &v99);
    v112[1] = (int)(uintptr_t)(v100);
    if ( v100[6] != 0 )
    {
      v73 = v100;
      v17 = glwebtools::JsonWriter::isObject(a2);
      v18 = (int)(uintptr_t)(v73);
      if ( v17 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v120), (char *)&loc_6 + 1);
        v46 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v46, (const glwebtools::Json::Value::Self *)v120);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v120);
        v18 = (int)(uintptr_t)(v73);
      }
      v74 = v18;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v19 = -2147483646;
      if ( *(uint8_t *)(v74 + 6) != 0 )
        v19 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, v74);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v19) )
      {
        v88 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v59 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v60 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v59, (char **)v112);
        glwebtools::Json::Value::opAssign(v60, v88);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v20 = (void *)(v112[0] - 12);
    if ( (uint32_t *)(v112[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v112[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v99 - 12);
    if ( (uint32_t *)(v99 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v99 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
  }
  if ( *((uint8_t *)self + 46) != 0 && *(double *)((char *)self + 36) > 0.0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v101), "price", (int)(uintptr_t)(&v92));
    v102 = (double *)((char *)self + 36);
    g4_std::string::construct_copy(v113, &v101);
    v113[1] = (int)(uintptr_t)(v102);
    if ( *((uint8_t *)v102 + 10) != 0 )
    {
      v75 = v102;
      v22 = glwebtools::JsonWriter::isObject(a2);
      v23 = v75;
      if ( v22 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v121), (char *)&loc_6 + 1);
        v47 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v47, (const glwebtools::Json::Value::Self *)v121);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v121);
        v23 = v75;
      }
      v76 = v23;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v24 = -2147483646;
      if ( *((uint8_t *)v76 + 10) != 0 )
        v24 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, *v76);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v24) )
      {
        v85 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v53 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v54 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v53, (char **)v113);
        glwebtools::Json::Value::opAssign(v54, v85);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v25 = (void *)(v113[0] - 12);
    if ( (uint32_t *)(v113[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v113[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v25);
    }
    v26 = (void *)(v101 - 12);
    if ( (uint32_t *)(v101 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v101 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
  }
  if ( *((uint8_t *)self + 54) != 0 && *(uint32_t *)(*((uint32_t *)self + 12) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v103), "display_price", (int)(uintptr_t)(&v92) + 1);
    v104 = (char *)self + 48;
    g4_std::string::construct_copy(v114, &v103);
    v114[1] = (int)(uintptr_t)(v104);
    if ( v104[6] != 0 )
    {
      v77 = v104;
      v27 = glwebtools::JsonWriter::isObject(a2);
      v28 = (int)(uintptr_t)(v77);
      if ( v27 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v122), (char *)&loc_6 + 1);
        v45 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v45, (const glwebtools::Json::Value::Self *)v122);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v122);
        v28 = (int)(uintptr_t)(v77);
      }
      v78 = v28;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v29 = -2147483646;
      if ( *(uint8_t *)(v78 + 6) != 0 )
        v29 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, v78);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v29) )
      {
        v87 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v57 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v58 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v57, (char **)v114);
        glwebtools::Json::Value::opAssign(v58, v87);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v30 = (void *)(v114[0] - 12);
    if ( (uint32_t *)(v114[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v114[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    v31 = (void *)(v103 - 12);
    if ( (uint32_t *)(v103 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v103 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v31);
    }
  }
  if ( *((uint8_t *)self + 66) == 0 || *((double *)self + 7) > 0.0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v105), "replaced_price", (int)(uintptr_t)(&v92) + 2);
    v106 = (double *)((char *)self + 56);
    g4_std::string::construct_copy(v115, &v105);
    v115[1] = (int)(uintptr_t)(v106);
    if ( *((uint8_t *)v106 + 10) != 0 )
    {
      v81 = v106;
      v40 = glwebtools::JsonWriter::isObject(a2);
      v41 = v81;
      if ( v40 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v123), (char *)&loc_6 + 1);
        v66 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v66, (const glwebtools::Json::Value::Self *)v123);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v123);
        v41 = v81;
      }
      v82 = v41;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v42 = nullptr;
      if ( *((uint8_t *)v82 + 10) != 0 )
        v42 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, *v82);
      if ( glwebtools::IsOperationSuccess(v42) )
      {
        v90 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v64 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v65 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v64, (char **)v115);
        glwebtools::Json::Value::opAssign(v65, v90);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v32 = (void *)(v115[0] - 12);
    if ( (uint32_t *)(v115[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v115[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v32);
    }
    v33 = (void *)(v105 - 12);
    if ( (uint32_t *)(v105 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v105 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v33);
    }
  }
  if ( *((uint8_t *)self + 74) == 0 || *(uint32_t *)(*((uint32_t *)self + 17) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v107), "replaced_display_price", (int)(uintptr_t)(&v92) + 3);
    v108 = (char *)self + 68;
    g4_std::string::construct_copy(v116, &v107);
    v116[1] = (int)(uintptr_t)(v108);
    if ( v108[6] != 0 )
    {
      v79 = v108;
      v37 = glwebtools::JsonWriter::isObject(a2);
      v38 = (int)(uintptr_t)(v79);
      if ( v37 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v124), (char *)&loc_6 + 1);
        v63 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v63, (const glwebtools::Json::Value::Self *)v124);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v124);
        v38 = (int)(uintptr_t)(v79);
      }
      v80 = v38;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v125);
      v39 = nullptr;
      if ( *(uint8_t *)(v80 + 6) != 0 )
        v39 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v125, v80);
      if ( glwebtools::IsOperationSuccess(v39) )
      {
        v89 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v125);
        v61 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v62 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v61, (char **)v116);
        glwebtools::Json::Value::opAssign(v62, v89);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v125);
    }
    v34 = (void *)(v116[0] - 12);
    if ( (uint32_t *)(v116[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v116[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v34);
    }
    v35 = (void *)(v107 - 12);
    if ( (uint32_t *)(v107 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v107 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v35);
    }
  }
  glwebtools::JsonWriter::write(a2, (iap::BillingMethod::Self *)((char *)self + 84));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::Print  (binary VA: 0x14ff8e0)
// Original: iap::BillingMethod::Print
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * iap::BillingMethod::Print(iap::BillingMethod::Self *self)
{
  int i;
  glwebtools::CustomAttributeList::Self *result;
  uint32_t v3[8];

  glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v3, (int)(uintptr_t)(self) + 84);
  for ( i = v3[0]; ; i = sub_19048E0(i) )
  {
    result = glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v3, (int)(uintptr_t)(self) + 84);
    if ( i == v3[0] )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetType  (binary VA: 0x14ff950)
// Original: iap::BillingMethod::GetType
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetType(iap::BillingMethod::Self *self)
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
// Function: iap::BillingMethod::GetName  (binary VA: 0x14ff970)
// Original: iap::BillingMethod::GetName
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetName(iap::BillingMethod::Self *self)
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
// Function: iap::BillingMethod::GetCurrency  (binary VA: 0x14ff990)
// Original: iap::BillingMethod::GetCurrency
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetCurrency(iap::BillingMethod::Self *self)
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
// Function: iap::BillingMethod::GetCurrencySymbol  (binary VA: 0x14ff9b0)
// Original: iap::BillingMethod::GetCurrencySymbol
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetCurrencySymbol(iap::BillingMethod::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 34) != 0 )
  {
    result = *((uint32_t *)self + 7);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetPrice  (binary VA: 0x14ff9d0)
// Original: iap::BillingMethod::GetPrice
// ----------------------------------------------------------------------------
long double iap::BillingMethod::GetPrice(iap::BillingMethod::Self *self)
{
  long double result; // fst7

  result = 0.0;
  if ( *((uint8_t *)self + 46) != 0 )
    return fmax(0.0, *(double *)((char *)self + 36));
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetDisplayPrice  (binary VA: 0x14ffa00)
// Original: iap::BillingMethod::GetDisplayPrice
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetDisplayPrice(iap::BillingMethod::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 54) != 0 )
  {
    result = *((uint32_t *)self + 12);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetDisplayPriceISO  (binary VA: 0x14ffa20)
// Original: iap::BillingMethod::GetDisplayPriceISO
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetDisplayPriceISO(iap::BillingMethod::Self *self)
{
  int result;

  result = *((uint32_t *)self + 19);
  if ( *(uint32_t *)(result - 12) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetReplacedPrice  (binary VA: 0x14ffa40)
// Original: iap::BillingMethod::GetReplacedPrice
// ----------------------------------------------------------------------------
long double iap::BillingMethod::GetReplacedPrice(iap::BillingMethod::Self *self)
{
  if ( *((uint8_t *)self + 66) != 0 )
    return fmax(*((double *)self + 7), 0.0);
  else
    return *((double *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetReplacedDisplayPrice  (binary VA: 0x14ffa90)
// Original: iap::BillingMethod::GetReplacedDisplayPrice
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetReplacedDisplayPrice(iap::BillingMethod::Self *self)
{
  int result;

  result = *((uint32_t *)self + 17);
  if ( *((uint8_t *)self + 74) != 0 && *(uint32_t *)(result - 12) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetReplacedDisplayPriceISO  (binary VA: 0x14ffab0)
// Original: iap::BillingMethod::GetReplacedDisplayPriceISO
// ----------------------------------------------------------------------------
int iap::BillingMethod::GetReplacedDisplayPriceISO(iap::BillingMethod::Self *self)
{
  int result;

  result = *((uint32_t *)self + 20);
  if ( *(uint32_t *)(result - 12) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::HasPricePromotion  (binary VA: 0x14ffad0)
// Original: iap::BillingMethod::HasPricePromotion
// ----------------------------------------------------------------------------
bool iap::BillingMethod::HasPricePromotion(iap::BillingMethod::Self *self)
{
  bool result;
  double v2; // xmm0_8

  result = false;
  if ( *((uint8_t *)self + 74) != 0 && *(uint32_t *)(*((uint32_t *)self + 17) - 12) != 0 && *((uint8_t *)self + 66) != 0 )
  {
    v2 = *((double *)self + 7);
    if ( v2 > 0.0 )
      return v2 > *(double *)((char *)self + 36);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetReductionPercent  (binary VA: 0x14ffb20)
// Original: iap::BillingMethod::GetReductionPercent
// ----------------------------------------------------------------------------
long double iap::BillingMethod::GetReductionPercent(iap::BillingMethod::Self *self)
{
  double v1; // xmm0_8

  v1 = 0.0;
  if ( iap::BillingMethod::HasPricePromotion(self) )
    return (*((double *)self + 7) - *(double *)((char *)self + 36)) * 100.0 / *((double *)self + 7);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::GetExtendedField  (binary VA: 0x14ffb80)
// Original: iap::BillingMethod::GetExtendedField
// ----------------------------------------------------------------------------
iap::BillingMethod::Self * iap::BillingMethod::GetExtendedField(iap::BillingMethod::Self *self, const char *a2, char *a3)
{
  char *v3;
  void *v4;
  uint16_t v6[3];

  if ( a3 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6[1]), a3, (int)(uintptr_t)(v6));
    v3 = glwebtools::CustomAttributeList::opIndex((glwebtools::CustomAttribute::Self *)(a2 + 84), (int)(uintptr_t)(&v6[1]));
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
// Function: iap::BillingMethod::Destroy  (binary VA: 0x14ffdb0)
// Original: iap::BillingMethod::~BillingMethod
// ----------------------------------------------------------------------------
void iap::BillingMethod::Destroy(iap::BillingMethod::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096048);
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
    (int)(uintptr_t)(self) + 84,
    *((uint32_t **)self + 23));
  v1 = *((uint32_t *)self + 20);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 19);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 17);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethod::Destroy_ea14fff70  (binary VA: 0x14fff70)
// Original: iap::BillingMethod::~BillingMethod
// ----------------------------------------------------------------------------
void iap::BillingMethod::Destroy_ea14fff70(iap::BillingMethod::Self *self)
{
  iap::BillingMethod::Destroy(self);
  opDelete(self);
}


