#include "Core/Utils/DecompTypes.h"
#include "iap_iABAndroidItemV1.h"

// ----------------------------------------------------------------------------
// Function: iap::iABAndroidItemV1::read  (binary VA: 0x151edc0)
// Original: iap::iABAndroidItemV1::read
// ----------------------------------------------------------------------------
int iap::iABAndroidItemV1::read(iap::iABAndroidItemV1::Self *self, const glwebtools::JsonReader::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  char IsValid;
  int v10;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v13;
  bool IsOperationSuccess;
  glwebtools::Self *v15;
  void *v17;
  void *v18;
  const glwebtools::Json::Value::Self *v19;
  void *v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  const glwebtools::Json::Value::Self *v29;
  void *v30;
  const glwebtools::Json::Value::Self *v31;
  void *v32;
  const glwebtools::Json::Value::Self *v33;
  void *v34;
  const glwebtools::Json::Value::Self *v35;
  void *v36;
  typedef int _g4_t_v37;
  typedef glwebtools::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef glwebtools::Self *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef void *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef glwebtools::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef glwebtools::Self *_g4_t_v52;
  typedef glwebtools::Self *_g4_t_v53;
  typedef glwebtools::Self *_g4_t_v54;
  typedef void *_g4_t_v55;
  typedef void *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef int _g4_t_v65[3];
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef char *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef char *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef char *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef char *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef char *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef char *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef char *_g4_t_v90;
  typedef uint8_t _g4_t_v91[28];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v38)) > _g4_s1 ? (16u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v39)) > _g4_s2 ? (16u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v40)) > _g4_s3 ? (16u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v41)) > _g4_s4 ? (16u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v42)) > _g4_s5 ? (16u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v43)) > _g4_s6 ? (32u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v44)) > _g4_s7 ? (32u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v45)) > _g4_s8 ? (32u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v46)) > _g4_s9 ? (32u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v47)) > _g4_s10 ? (36u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v48)) > _g4_s11 ? (36u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v49)) > _g4_s12 ? (36u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v50)) > _g4_s13 ? (40u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v51)) > _g4_s14 ? (40u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v52)) > _g4_s15 ? (40u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v53)) > _g4_s16 ? (40u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v54)) > _g4_s17 ? (40u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v55)) > _g4_s18 ? (44u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v56)) > _g4_s19 ? (44u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (49u + sizeof(_g4_t_v57)) > _g4_s20 ? (49u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v58)) > _g4_s21 ? (52u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v59)) > _g4_s22 ? (80u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v60)) > _g4_s23 ? (96u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v61)) > _g4_s24 ? (112u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v62)) > _g4_s25 ? (128u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v63)) > _g4_s26 ? (144u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v64)) > _g4_s27 ? (160u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v65)) > _g4_s28 ? (176u + sizeof(_g4_t_v65)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v66)) > _g4_s29 ? (188u + sizeof(_g4_t_v66)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v67)) > _g4_s30 ? (192u + sizeof(_g4_t_v67)) : _g4_s30,
    _g4_s32 = (196u + sizeof(_g4_t_v68)) > _g4_s31 ? (196u + sizeof(_g4_t_v68)) : _g4_s31,
    _g4_s33 = (208u + sizeof(_g4_t_v69)) > _g4_s32 ? (208u + sizeof(_g4_t_v69)) : _g4_s32,
    _g4_s34 = (212u + sizeof(_g4_t_v70)) > _g4_s33 ? (212u + sizeof(_g4_t_v70)) : _g4_s33,
    _g4_s35 = (224u + sizeof(_g4_t_v71)) > _g4_s34 ? (224u + sizeof(_g4_t_v71)) : _g4_s34,
    _g4_s36 = (228u + sizeof(_g4_t_v72)) > _g4_s35 ? (228u + sizeof(_g4_t_v72)) : _g4_s35,
    _g4_s37 = (240u + sizeof(_g4_t_v73)) > _g4_s36 ? (240u + sizeof(_g4_t_v73)) : _g4_s36,
    _g4_s38 = (244u + sizeof(_g4_t_v74)) > _g4_s37 ? (244u + sizeof(_g4_t_v74)) : _g4_s37,
    _g4_s39 = (256u + sizeof(_g4_t_v75)) > _g4_s38 ? (256u + sizeof(_g4_t_v75)) : _g4_s38,
    _g4_s40 = (260u + sizeof(_g4_t_v76)) > _g4_s39 ? (260u + sizeof(_g4_t_v76)) : _g4_s39,
    _g4_s41 = (272u + sizeof(_g4_t_v77)) > _g4_s40 ? (272u + sizeof(_g4_t_v77)) : _g4_s40,
    _g4_s42 = (276u + sizeof(_g4_t_v78)) > _g4_s41 ? (276u + sizeof(_g4_t_v78)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v79)) > _g4_s42 ? (288u + sizeof(_g4_t_v79)) : _g4_s42,
    _g4_s44 = (292u + sizeof(_g4_t_v80)) > _g4_s43 ? (292u + sizeof(_g4_t_v80)) : _g4_s43,
    _g4_s45 = (304u + sizeof(_g4_t_v81)) > _g4_s44 ? (304u + sizeof(_g4_t_v81)) : _g4_s44,
    _g4_s46 = (308u + sizeof(_g4_t_v82)) > _g4_s45 ? (308u + sizeof(_g4_t_v82)) : _g4_s45,
    _g4_s47 = (320u + sizeof(_g4_t_v83)) > _g4_s46 ? (320u + sizeof(_g4_t_v83)) : _g4_s46,
    _g4_s48 = (324u + sizeof(_g4_t_v84)) > _g4_s47 ? (324u + sizeof(_g4_t_v84)) : _g4_s47,
    _g4_s49 = (336u + sizeof(_g4_t_v85)) > _g4_s48 ? (336u + sizeof(_g4_t_v85)) : _g4_s48,
    _g4_s50 = (340u + sizeof(_g4_t_v86)) > _g4_s49 ? (340u + sizeof(_g4_t_v86)) : _g4_s49,
    _g4_s51 = (352u + sizeof(_g4_t_v87)) > _g4_s50 ? (352u + sizeof(_g4_t_v87)) : _g4_s50,
    _g4_s52 = (356u + sizeof(_g4_t_v88)) > _g4_s51 ? (356u + sizeof(_g4_t_v88)) : _g4_s51,
    _g4_s53 = (368u + sizeof(_g4_t_v89)) > _g4_s52 ? (368u + sizeof(_g4_t_v89)) : _g4_s52,
    _g4_s54 = (372u + sizeof(_g4_t_v90)) > _g4_s53 ? (372u + sizeof(_g4_t_v90)) : _g4_s53,
    _g4_s55 = (384u + sizeof(_g4_t_v91)) > _g4_s54 ? (384u + sizeof(_g4_t_v91)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 49u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 128u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 144u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 160u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 176u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 188u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 192u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 196u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 208u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 212u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 224u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 228u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 240u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 244u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 256u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 260u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 272u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 276u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 288u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 292u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 304u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 308u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 320u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 324u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 336u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 340u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 352u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 356u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 368u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 372u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 384u);

  g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
    (int)(uintptr_t)(self) + 104,
    *((uint32_t **)self + 28));
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 108);
  *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)((char *)self + 108);
  *((uint32_t *)self + 31) = 0;
  v66 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v66);
  v2 = v66 - 3;
  if ( v66 - 3 != dword_213B808 && __sync_fetch_and_add(v66 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 10) = 0;
  v60 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 12, &v60);
  v3 = v60 - 3;
  if ( v60 - 3 != dword_213B808 && __sync_fetch_and_add(v60 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  *((uint8_t *)self + 18) = 0;
  v59 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 20, &v59);
  v4 = v59 - 3;
  if ( v59 - 3 != dword_213B808 && __sync_fetch_and_add(v59 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 26) = 0;
  v61 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 28, &v61);
  v5 = v61 - 3;
  if ( v61 - 3 != dword_213B808 && __sync_fetch_and_add(v61 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  *((uint8_t *)self + 34) = 0;
  v62 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 36, &v62);
  v6 = v62 - 3;
  if ( v62 - 3 != dword_213B808 && __sync_fetch_and_add(v62 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  *((uint8_t *)self + 42) = 0;
  v63 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 52, &v63);
  v7 = v63 - 3;
  if ( v63 - 3 != dword_213B808 && __sync_fetch_and_add(v63 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  *((uint8_t *)self + 58) = 0;
  v64 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 60, &v64);
  v8 = v64 - 3;
  if ( v64 - 3 != dword_213B808 && __sync_fetch_and_add(v64 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  *((uint8_t *)self + 66) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint8_t *)self + 74) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint8_t *)self + 82) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint8_t *)self + 90) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "id", (int)(uintptr_t)(&v57));
  v68 = (char *)self + 4;
  g4_std::string::construct_copy(&v79, &v67);
  v80 = v68;
  IsValid = glwebtools::JsonReader::IsValid(a2);
  v10 = -2147483645;
  if ( IsValid != 0 )
  {
    isObject = glwebtools::JsonReader::isObject(a2);
    v10 = -2147483645;
    if ( isObject != 0 )
    {
      isMember = glwebtools::Json::Value::isMember(a2, (char **)&v79);
      v10 = -2147483646;
      if ( isMember )
      {
        v13 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v79);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v91, v13);
        v47 = v80;
        v65[0] = (int)(uintptr_t)(&dword_213B814);
        v38 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v91, (int)(uintptr_t)(v65));
        IsOperationSuccess = glwebtools::IsOperationSuccess(v38);
        v15 = v38;
        if ( IsOperationSuccess )
        {
          g4_std::string::assign_str(v47, v65);
          v47[6] = 1;
          v15 = nullptr;
        }
        v48 = (void *)(v65[0] - 12);
        if ( (uint32_t *)(v65[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = v15;
          g4_std::string::Rep::M_destroy(v48);
          v15 = v42;
        }
        v39 = (int)(uintptr_t)(v15);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v91);
        v10 = v39;
      }
    }
  }
  v55 = (void *)(v79 - 12);
  if ( (uint32_t *)(v79 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
  {
    v40 = v10;
    g4_std::string::Rep::M_destroy(v55);
    v10 = v40;
  }
  v56 = (void *)(v67 - 12);
  if ( (uint32_t *)(v67 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    v41 = v10;
    g4_std::string::Rep::M_destroy(v56);
    v10 = v41;
  }
  if ( v10 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "virtual_cash_type", (int)(uintptr_t)(&v57) + 1);
    v70 = (char *)self + 12;
    g4_std::string::construct_copy(&v81, &v69);
    v82 = v70;
    v50 = nullptr;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
      && glwebtools::Json::Value::isMember(a2, (char **)&v81) )
    {
      v29 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v81);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v91, v29);
      v49 = v82;
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v91) != 0 )
      {
        v65[0] = (int)(uintptr_t)(&dword_213B814);
        v50 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v91, (int)(uintptr_t)(v65));
        if ( glwebtools::IsOperationSuccess(v50) )
        {
          g4_std::string::assign_str(v49, v65);
          v50 = nullptr;
          v49[6] = 1;
        }
        v30 = (void *)(v65[0] - 12);
        if ( (uint32_t *)(v65[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v91);
    }
    v17 = (void *)(v81 - 12);
    if ( (uint32_t *)(v81 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v69 - 12);
    if ( (uint32_t *)(v69 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v10 = (int)(uintptr_t)(v50);
    if ( v50 == nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "description", (int)(uintptr_t)(&v57) + 2);
      v72 = (char *)self + 20;
      g4_std::string::construct_copy(&v83, &v71);
      v84 = v72;
      v51 = -2147483645;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
      {
        v51 = -2147483646;
        if ( glwebtools::Json::Value::isMember(a2, (char **)&v83) )
        {
          v19 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v83);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v91, v19);
          v43 = v84;
          v65[0] = (int)(uintptr_t)(&dword_213B814);
          v51 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v91, (int)(uintptr_t)(v65));
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v51) )
          {
            g4_std::string::assign_str(v43, v65);
            v51 = 0;
            v43[6] = 1;
          }
          v20 = (void *)(v65[0] - 12);
          if ( (uint32_t *)(v65[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v91);
        }
      }
      v21 = (void *)(v83 - 12);
      if ( (uint32_t *)(v83 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v21);
      }
      v22 = (void *)(v71 - 12);
      if ( (uint32_t *)(v71 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v22);
      }
      v10 = v51;
      if ( v51 == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "title", (int)(uintptr_t)(&v58));
        v74 = (char *)self + 28;
        g4_std::string::construct_copy(&v85, &v73);
        v86 = v74;
        v52 = nullptr;
        if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
          && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
          && glwebtools::Json::Value::isMember(a2, (char **)&v85) )
        {
          v31 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v85);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v91, v31);
          v44 = v86;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v91) != 0 )
          {
            v65[0] = (int)(uintptr_t)(&dword_213B814);
            v52 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v91, (int)(uintptr_t)(v65));
            if ( glwebtools::IsOperationSuccess(v52) )
            {
              g4_std::string::assign_str(v44, v65);
              v52 = nullptr;
              v44[6] = 1;
            }
            v32 = (void *)(v65[0] - 12);
            if ( (uint32_t *)(v65[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v32);
            }
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v91);
        }
        v23 = (void *)(v85 - 12);
        if ( (uint32_t *)(v85 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v85 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v23);
        }
        v24 = (void *)(v73 - 12);
        if ( (uint32_t *)(v73 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v24);
        }
        v10 = (int)(uintptr_t)(v52);
        if ( v52 == nullptr )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "preview", (int)(uintptr_t)(&v58) + 1);
          v76 = (char *)self + 36;
          g4_std::string::construct_copy(&v87, &v75);
          v88 = v76;
          v53 = nullptr;
          if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
            && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
            && glwebtools::Json::Value::isMember(a2, (char **)&v87) )
          {
            v33 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v87);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v91, v33);
            v45 = v88;
            if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v91) != 0 )
            {
              v65[0] = (int)(uintptr_t)(&dword_213B814);
              v53 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v91, (int)(uintptr_t)(v65));
              if ( glwebtools::IsOperationSuccess(v53) )
              {
                g4_std::string::assign_str(v45, v65);
                v53 = nullptr;
                v45[6] = 1;
              }
              v34 = (void *)(v65[0] - 12);
              if ( (uint32_t *)(v65[0] - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v34);
              }
            }
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v91);
          }
          v25 = (void *)(v87 - 12);
          if ( (uint32_t *)(v87 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v25);
          }
          v26 = (void *)(v75 - 12);
          if ( (uint32_t *)(v75 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v26);
          }
          v10 = (int)(uintptr_t)(v53);
          if ( v53 == nullptr )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "type", (int)(uintptr_t)(&v58) + 2);
            v78 = (char *)self + 44;
            g4_std::string::construct_copy(&v89, &v77);
            v90 = v78;
            v54 = nullptr;
            if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
              && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
              && glwebtools::Json::Value::isMember(a2, (char **)&v89) )
            {
              v35 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v89);
              glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v91, v35);
              v46 = v90;
              if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v91) != 0 )
              {
                v65[0] = (int)(uintptr_t)(&dword_213B814);
                v54 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v91, (int)(uintptr_t)(v65));
                if ( glwebtools::IsOperationSuccess(v54) )
                {
                  g4_std::string::assign_str(v46, v65);
                  v54 = nullptr;
                  v46[6] = 1;
                }
                v36 = (void *)(v65[0] - 12);
                if ( (uint32_t *)(v65[0] - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v36);
                }
              }
              glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v91);
            }
            v27 = (void *)(v89 - 12);
            if ( (uint32_t *)(v89 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v89 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v27);
            }
            v28 = (void *)(v77 - 12);
            if ( (uint32_t *)(v77 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v28);
            }
            v10 = (int)(uintptr_t)(v54);
            if ( v54 == nullptr )
              return sub_151CD20((int)(uintptr_t)(self), a2, v37);
          }
        }
      }
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: iap::iABAndroidItemV1::Destroy  (binary VA: 0x1527280)
// Original: iap::iABAndroidItemV1::~iABAndroidItemV1
// ----------------------------------------------------------------------------
void iap::iABAndroidItemV1::Destroy(iap::iABAndroidItemV1::Self *self)
{
  char *v1;
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096648);
  g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
    (int)(uintptr_t)(self) + 104,
    *((uint32_t **)self + 28));
  v1 = *((char **)self + 24);
  v2 = *((char **)self + 23);
  if ( v1 != v2 )
  {
    do
    {
      g4_std::string::Destroy(v2 + 4);
      v11 = v2;
      v2 += 8;
      g4_std::string::Destroy(v11);
    }
    while ( v1 != v2 );
    v2 = *((char **)self + 23);
  }
  if ( v2 != nullptr )
    opDelete(v2);
  v3 = *((uint32_t *)self + 15);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 11);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  v10 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::iABAndroidItemV1::Construct  (binary VA: 0x1529fe0)
// Original: iap::iABAndroidItemV1::iABAndroidItemV1
// ----------------------------------------------------------------------------
iap::iABAndroidItemV1::Self * iap::iABAndroidItemV1::Construct(iap::iABAndroidItemV1::Self *self, const iap::iABAndroidItemV1::Self *a2)
{
  char v2;
  char v3;
  char v4;
  char v5;
  char v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  iap::iABAndroidItemV1::Self *result;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *j;
  int v18;
  int i;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096648);
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
  v5 = *((uint8_t *)a2 + 34);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 34) = v5;
  g4_std::string::assign_str((char *)self + 36, (char *)a2 + 36);
  v6 = *((uint8_t *)a2 + 42);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 42) = v6;
  g4_std::string::assign_str((char *)self + 44, (char *)a2 + 44);
  v7 = *((uint8_t *)a2 + 50);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 50) = v7;
  g4_std::string::assign_str((char *)self + 52, (char *)a2 + 52);
  v8 = *((uint8_t *)a2 + 58);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 58) = v8;
  v9 = 0;
  g4_std::string::assign_str((char *)self + 60, (char *)a2 + 60);
  *((uint8_t *)self + 66) = *((uint8_t *)a2 + 66);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  *((uint8_t *)self + 74) = *((uint8_t *)a2 + 74);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 19);
  *((uint8_t *)self + 82) = *((uint8_t *)a2 + 82);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 21);
  *((uint8_t *)self + 90) = *((uint8_t *)a2 + 90);
  v11 = 0;
  v12 = (*((uint32_t *)a2 + 24) - *((uint32_t *)a2 + 23)) >> 3;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  if ( v12 != 0 )
  {
    if ( v12 > 0x1FFFFFFF )
      sub_18FFEE0(v10, v12);
    v9 = 8 * v12;
    v11 = opNew(8 * v12);
  }
  *((uint32_t *)self + 23) = v11;
  *((uint32_t *)self + 24) = v11;
  *((uint32_t *)self + 25) = v11 + v9;
  v13 = *((uint32_t *)a2 + 23);
  for ( i = *((uint32_t *)a2 + 24); i != v13; v13 += 8 )
  {
    if ( v11 != 0 )
    {
      v18 = v11;
      g4_std::string::construct_copy(v11, v13);
      g4_std::string::construct_copy(v18 + 4, v13 + 4);
      v11 = v18;
    }
    v11 += 8;
  }
  *((uint32_t *)self + 24) = v11;
  *((uint32_t *)self + 27) = 0;
  result = (iap::iABAndroidItemV1::Self *)((char *)self + 108);
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 108);
  *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)((char *)self + 108);
  v15 = *((uint32_t **)a2 + 28);
  if ( v15 != nullptr )
  {
    v16 = g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
            (int)(uintptr_t)(self) + 104,
            v15,
            (int)(uintptr_t)(self) + 108);
    *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(v16);
    for ( j = v16; j[2] != 0; j = (uint32_t *)j[2] )
      ;
    *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)(j);
    while ( v16[3] != 0 )
      v16 = (uint32_t *)v16[3];
    *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(v16);
    result = *((iap::iABAndroidItemV1::Self **)a2 + 31);
    *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}


