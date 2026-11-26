#include "Core/Utils/DecompTypes.h"
#include "iap_TransactionInfo.h"

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfo::Destroy  (binary VA: 0x15023c0)
// Original: iap::TransactionInfo::~TransactionInfo
// ----------------------------------------------------------------------------
void iap::TransactionInfo::Destroy(iap::TransactionInfo::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20960A8);
  v1 = *((uint32_t *)self + 14);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 12);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 9);
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
  v6 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfo::Destroy_ea1502580  (binary VA: 0x1502580)
// Original: iap::TransactionInfo::~TransactionInfo
// ----------------------------------------------------------------------------
void iap::TransactionInfo::Destroy_ea1502580(iap::TransactionInfo::Self *self)
{
  iap::TransactionInfo::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfo::GetSecondSinceTimeStamp  (binary VA: 0x15026d0)
// Original: iap::TransactionInfo::GetSecondSinceTimeStamp
// ----------------------------------------------------------------------------
int iap::TransactionInfo::GetSecondSinceTimeStamp(void **self)
{
  time_t CurrentTimestamp;
  int v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint16_t _g4_t_v7[3];
  typedef int (**_g4_t_v8)(int);
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef uint32_t _g4_t_v11[7];
  typedef char _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[29];
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v7)) > _g4_s3 ? (46u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v8)) > _g4_s4 ? (52u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v9)) > _g4_s5 ? (56u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v10)) > _g4_s6 ? (60u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v11)) > _g4_s7 ? (64u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v12)) > _g4_s8 ? (92u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v13)) > _g4_s9 ? (96u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v14)) > _g4_s10 ? (100u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v15)) > _g4_s11 ? (104u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (220u + sizeof(_g4_t_v16)) > _g4_s12 ? (220u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (221u + sizeof(_g4_t_v17)) > _g4_s13 ? (221u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (224u + sizeof(_g4_t_v18)) > _g4_s14 ? (224u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (228u + sizeof(_g4_t_v19)) > _g4_s15 ? (228u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (232u + sizeof(_g4_t_v20)) > _g4_s16 ? (232u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (236u + sizeof(_g4_t_v21)) > _g4_s17 ? (236u + sizeof(_g4_t_v21)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 46u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 52u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 92u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 96u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 100u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 104u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 220u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 221u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 224u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 228u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 232u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 236u);

  sub_1900810(v15);
  v15[28] = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v15[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  sub_19119D0((char *)&v8 + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v11[1], 0, 24);
  v15[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v12);
  v13 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v14), *(self + 6), *((uint32_t *)*(self + 6) - 3), (int)(uintptr_t)(v7));
  v13 = 24;
  sub_1931CD0(v11, v14, 0, 0);
  sub_19119D0(v15, v11);
  sub_19153C0(&v8, &v7[1]);
  CurrentTimestamp = glwebtools::Time::GetCurrentTimestamp();
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v15[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v2 = CurrentTimestamp - *(uint32_t *)&v7[1];
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v6 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = v2;
    g4_std::string::Rep::M_destroy(v6);
    v2 = v5;
  }
  v4 = v2;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v12);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  v15[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v15);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfo::read  (binary VA: 0x15029e0)
// Original: iap::TransactionInfo::read
// ----------------------------------------------------------------------------
int iap::TransactionInfo::read(iap::TransactionInfo::Self *self, const glwebtools::JsonReader::Self *a2)
{
  const glwebtools::Json::Value::Self *v2;
  void *v3;
  void *v4;
  const glwebtools::Json::Value::Self *v5;
  void *v6;
  void *v7;
  const glwebtools::Json::Value::Self *v8;
  void *v9;
  void *v10;
  const glwebtools::Json::Value::Self *v11;
  void *v12;
  void *v13;
  const glwebtools::Json::Value::Self *v14;
  void *v15;
  void *v16;
  const glwebtools::Json::Value::Self *v17;
  void *v18;
  void *v19;
  const glwebtools::Json::Value::Self *v20;
  void *v21;
  void *v22;
  const glwebtools::Json::Value::Self *v23;
  void *v24;
  void *v25;
  const glwebtools::Json::Value::Self *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  const glwebtools::Json::Value::Self *v31;
  void *v32;
  void *v33;
  const glwebtools::Json::Value::Self *v34;
  void *v35;
  void *v36;
  void *v37;
  void *v38;
  void *v39;
  void *v40;
  const glwebtools::Json::Value::Self *v42;
  const glwebtools::Json::Value::Self *v43;
  glwebtools::Self *v44;
  void *v45;
  const glwebtools::Json::Value::Self *v46;
  typedef char *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef unsigned int *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef char *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef bool *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef char *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef unsigned int *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef bool *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef char *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef char *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef char *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef char *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef char *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef char *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef char *_g4_t_v108;
  typedef uint8_t _g4_t_v109[28];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (8u + sizeof(_g4_t_v47)) > _g4_s0 ? (8u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (17u + sizeof(_g4_t_v48)) > _g4_s1 ? (17u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v49)) > _g4_s2 ? (20u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v50)) > _g4_s3 ? (24u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v51)) > _g4_s4 ? (28u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v52)) > _g4_s5 ? (60u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v53)) > _g4_s6 ? (76u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v54)) > _g4_s7 ? (80u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v55)) > _g4_s8 ? (92u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v56)) > _g4_s9 ? (96u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v57)) > _g4_s10 ? (108u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v58)) > _g4_s11 ? (112u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v59)) > _g4_s12 ? (124u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v60)) > _g4_s13 ? (128u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v61)) > _g4_s14 ? (140u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v62)) > _g4_s15 ? (144u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v63)) > _g4_s16 ? (156u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v64)) > _g4_s17 ? (160u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (172u + sizeof(_g4_t_v65)) > _g4_s18 ? (172u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (176u + sizeof(_g4_t_v66)) > _g4_s19 ? (176u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (188u + sizeof(_g4_t_v67)) > _g4_s20 ? (188u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v68)) > _g4_s21 ? (192u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (204u + sizeof(_g4_t_v69)) > _g4_s22 ? (204u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (208u + sizeof(_g4_t_v70)) > _g4_s23 ? (208u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (220u + sizeof(_g4_t_v71)) > _g4_s24 ? (220u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v72)) > _g4_s25 ? (224u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (236u + sizeof(_g4_t_v73)) > _g4_s26 ? (236u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v74)) > _g4_s27 ? (240u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (252u + sizeof(_g4_t_v75)) > _g4_s28 ? (252u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (256u + sizeof(_g4_t_v76)) > _g4_s29 ? (256u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (268u + sizeof(_g4_t_v77)) > _g4_s30 ? (268u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (272u + sizeof(_g4_t_v78)) > _g4_s31 ? (272u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (284u + sizeof(_g4_t_v79)) > _g4_s32 ? (284u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (288u + sizeof(_g4_t_v80)) > _g4_s33 ? (288u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (300u + sizeof(_g4_t_v81)) > _g4_s34 ? (300u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (304u + sizeof(_g4_t_v82)) > _g4_s35 ? (304u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (316u + sizeof(_g4_t_v83)) > _g4_s36 ? (316u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (320u + sizeof(_g4_t_v84)) > _g4_s37 ? (320u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (332u + sizeof(_g4_t_v85)) > _g4_s38 ? (332u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (336u + sizeof(_g4_t_v86)) > _g4_s39 ? (336u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (348u + sizeof(_g4_t_v87)) > _g4_s40 ? (348u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (352u + sizeof(_g4_t_v88)) > _g4_s41 ? (352u + sizeof(_g4_t_v88)) : _g4_s41,
    _g4_s43 = (364u + sizeof(_g4_t_v89)) > _g4_s42 ? (364u + sizeof(_g4_t_v89)) : _g4_s42,
    _g4_s44 = (368u + sizeof(_g4_t_v90)) > _g4_s43 ? (368u + sizeof(_g4_t_v90)) : _g4_s43,
    _g4_s45 = (380u + sizeof(_g4_t_v91)) > _g4_s44 ? (380u + sizeof(_g4_t_v91)) : _g4_s44,
    _g4_s46 = (384u + sizeof(_g4_t_v92)) > _g4_s45 ? (384u + sizeof(_g4_t_v92)) : _g4_s45,
    _g4_s47 = (396u + sizeof(_g4_t_v93)) > _g4_s46 ? (396u + sizeof(_g4_t_v93)) : _g4_s46,
    _g4_s48 = (400u + sizeof(_g4_t_v94)) > _g4_s47 ? (400u + sizeof(_g4_t_v94)) : _g4_s47,
    _g4_s49 = (412u + sizeof(_g4_t_v95)) > _g4_s48 ? (412u + sizeof(_g4_t_v95)) : _g4_s48,
    _g4_s50 = (416u + sizeof(_g4_t_v96)) > _g4_s49 ? (416u + sizeof(_g4_t_v96)) : _g4_s49,
    _g4_s51 = (428u + sizeof(_g4_t_v97)) > _g4_s50 ? (428u + sizeof(_g4_t_v97)) : _g4_s50,
    _g4_s52 = (432u + sizeof(_g4_t_v98)) > _g4_s51 ? (432u + sizeof(_g4_t_v98)) : _g4_s51,
    _g4_s53 = (444u + sizeof(_g4_t_v99)) > _g4_s52 ? (444u + sizeof(_g4_t_v99)) : _g4_s52,
    _g4_s54 = (448u + sizeof(_g4_t_v100)) > _g4_s53 ? (448u + sizeof(_g4_t_v100)) : _g4_s53,
    _g4_s55 = (460u + sizeof(_g4_t_v101)) > _g4_s54 ? (460u + sizeof(_g4_t_v101)) : _g4_s54,
    _g4_s56 = (464u + sizeof(_g4_t_v102)) > _g4_s55 ? (464u + sizeof(_g4_t_v102)) : _g4_s55,
    _g4_s57 = (476u + sizeof(_g4_t_v103)) > _g4_s56 ? (476u + sizeof(_g4_t_v103)) : _g4_s56,
    _g4_s58 = (480u + sizeof(_g4_t_v104)) > _g4_s57 ? (480u + sizeof(_g4_t_v104)) : _g4_s57,
    _g4_s59 = (492u + sizeof(_g4_t_v105)) > _g4_s58 ? (492u + sizeof(_g4_t_v105)) : _g4_s58,
    _g4_s60 = (496u + sizeof(_g4_t_v106)) > _g4_s59 ? (496u + sizeof(_g4_t_v106)) : _g4_s59,
    _g4_s61 = (508u + sizeof(_g4_t_v107)) > _g4_s60 ? (508u + sizeof(_g4_t_v107)) : _g4_s60,
    _g4_s62 = (512u + sizeof(_g4_t_v108)) > _g4_s61 ? (512u + sizeof(_g4_t_v108)) : _g4_s61,
    _g4_s63 = (524u + sizeof(_g4_t_v109)) > _g4_s62 ? (524u + sizeof(_g4_t_v109)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 17u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 140u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 156u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 160u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 172u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 188u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 192u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 204u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 208u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 220u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 224u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 236u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 240u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 252u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 256u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 268u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 272u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 284u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 288u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 300u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 304u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 316u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 320u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 332u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 336u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 348u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 352u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 364u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 368u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 380u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 384u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 396u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 400u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 412u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 416u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 428u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 432u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 444u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 448u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 460u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 464u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 476u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 480u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 492u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 496u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 508u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 512u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 524u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "payment_state", (int)(uintptr_t)(&v48));
  v54 = (int *)((char *)self + 4);
  g4_std::string::construct_copy(&v87, &v53);
  v88 = v54;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v87) )
  {
    v2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v87);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v2);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v109, v88);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v3 = (void *)(v87 - 12);
  if ( (uint32_t *)(v87 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v53 - 12);
  if ( (uint32_t *)(v53 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "transaction_state", (int)(uintptr_t)(&v48) + 1);
  v56 = (int *)((char *)self + 8);
  g4_std::string::construct_copy(&v89, &v55);
  v90 = v56;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v89) )
  {
    v5 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v89);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v5);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v109, v90);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v6 = (void *)(v89 - 12);
  if ( (uint32_t *)(v89 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v89 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "billing_type", (int)(uintptr_t)(&v48) + 2);
  v58 = (char *)self + 12;
  g4_std::string::construct_copy(&v91, &v57);
  v92 = v58;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v91) )
  {
    v8 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v91);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v8);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v92));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v9 = (void *)(v91 - 12);
  if ( (uint32_t *)(v91 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v91 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "billing_name", (int)(uintptr_t)(&v49));
  v60 = (char *)self + 16;
  g4_std::string::construct_copy(&v93, &v59);
  v94 = v60;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v93) )
  {
    v11 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v93);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v11);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v94));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v12 = (void *)(v93 - 12);
  if ( (uint32_t *)(v93 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v93 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v59 - 12);
  if ( (uint32_t *)(v59 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "error", (int)(uintptr_t)(&v49) + 1);
  v62 = (int *)((char *)self + 44);
  g4_std::string::construct_copy(&v95, &v61);
  v96 = v62;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v95) )
  {
    v14 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v95);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v14);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v109, v96);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v15 = (void *)(v95 - 12);
  if ( (uint32_t *)(v95 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v61 - 12);
  if ( (uint32_t *)(v61 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "error_string", (int)(uintptr_t)(&v49) + 2);
  v64 = (char *)self + 48;
  g4_std::string::construct_copy(&v97, &v63);
  v98 = v64;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v97) )
  {
    v17 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v97);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v17);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v98));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v18 = (void *)(v97 - 12);
  if ( (uint32_t *)(v97 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v63 - 12);
  if ( (uint32_t *)(v63 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "error_message", (int)(uintptr_t)(&v49) + 3);
  v66 = (char *)self + 52;
  g4_std::string::construct_copy(&v99, &v65);
  v100 = v66;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v99) )
  {
    v20 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v99);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v20);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v100));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v21 = (void *)(v99 - 12);
  if ( (uint32_t *)(v99 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v99 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  v22 = (void *)(v65 - 12);
  if ( (uint32_t *)(v65 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "transaction_time", (int)(uintptr_t)(&v50));
  v68 = (char *)self + 56;
  g4_std::string::construct_copy(&v101, &v67);
  v102 = v68;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v101) )
  {
    v23 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v101);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v23);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v102));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v24 = (void *)(v101 - 12);
  if ( (uint32_t *)(v101 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v101 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  v25 = (void *)(v67 - 12);
  if ( (uint32_t *)(v67 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v25);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "seconds_before_transaction", (int)(uintptr_t)(&v50) + 1);
  v70 = (int *)((char *)self + 60);
  g4_std::string::construct_copy(&v103, &v69);
  v104 = v70;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v103) )
  {
    v26 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v103);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v26);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v109, v104);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v27 = (void *)(v103 - 12);
  if ( (uint32_t *)(v103 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v103 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v27);
  }
  v28 = (void *)(v69 - 12);
  if ( (uint32_t *)(v69 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "process_count", (int)(uintptr_t)(&v50) + 2);
  v72 = (unsigned int *)((char *)self + 20);
  g4_std::string::construct_copy(&v81, &v71);
  v82 = v72;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v81) )
  {
    v42 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v81);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v42);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v109, v82);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v29 = (void *)(v81 - 12);
  if ( (uint32_t *)(v81 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  v30 = (void *)(v71 - 12);
  if ( (uint32_t *)(v71 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "timestamp", (int)(uintptr_t)(&v50) + 3);
  v74 = (char *)self + 24;
  g4_std::string::construct_copy(&v105, &v73);
  v106 = v74;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v105) )
  {
    v31 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v105);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v31);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v106));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v32 = (void *)(v105 - 12);
  if ( (uint32_t *)(v105 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v105 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v32);
  }
  v33 = (void *)(v73 - 12);
  if ( (uint32_t *)(v73 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v33);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "transaction_id", (int)(uintptr_t)(&v51));
  v76 = (char *)self + 28;
  g4_std::string::construct_copy(&v107, &v75);
  v108 = v76;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v107) )
  {
    v34 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v107);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v34);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v108));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v35 = (void *)(v107 - 12);
  if ( (uint32_t *)(v107 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v107 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v35);
  }
  v36 = (void *)(v75 - 12);
  if ( (uint32_t *)(v75 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v36);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "restore", (int)(uintptr_t)(&v51) + 1);
  v78 = (bool *)self + 32;
  g4_std::string::construct_copy(&v83, &v77);
  v84 = v78;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v83) )
  {
    v46 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v83);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v46);
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v109, v84);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v37 = (void *)(v83 - 12);
  if ( (uint32_t *)(v83 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v37);
  }
  v38 = (void *)(v77 - 12);
  if ( (uint32_t *)(v77 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v38);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "store_certificate", (int)(uintptr_t)(&v51) + 2);
  v80 = (char *)self + 36;
  g4_std::string::construct_copy(&v85, &v79);
  v86 = v80;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v85) )
  {
    v43 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v85);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v109, v43);
    v47 = v86;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v109) != 0 )
    {
      v52[0] = (int)(uintptr_t)(&dword_213B814);
      v44 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v109, (int)(uintptr_t)(v52));
      if ( glwebtools::IsOperationSuccess(v44) )
      {
        g4_std::string::assign_str(v47, v52);
        v47[6] = 1;
      }
      v45 = (void *)(v52[0] - 12);
      if ( (uint32_t *)(v52[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v52[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v45);
      }
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
  }
  v39 = (void *)(v85 - 12);
  if ( (uint32_t *)(v85 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v85 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v39);
  }
  v40 = (void *)(v79 - 12);
  if ( (uint32_t *)(v79 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v40);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfo::write  (binary VA: 0x1503d10)
// Original: iap::TransactionInfo::write
// ----------------------------------------------------------------------------
int iap::TransactionInfo::write(iap::TransactionInfo::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int *v2;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  glwebtools::Self *v6;
  void *v7;
  void *v8;
  glwebtools::Self *v9;
  void *v10;
  void *v11;
  glwebtools::Self *v12;
  void *v13;
  void *v14;
  glwebtools::Self *v15;
  void *v16;
  void *v17;
  glwebtools::Self *v18;
  void *v19;
  void *v20;
  glwebtools::Self *v21;
  void *v22;
  void *v23;
  glwebtools::Self *v24;
  void *v25;
  void *v26;
  glwebtools::Self *v27;
  void *v28;
  void *v29;
  glwebtools::Self *v30;
  void *v31;
  void *v32;
  glwebtools::Self *v33;
  void *v34;
  void *v35;
  glwebtools::Self *v36;
  void *v37;
  void *v38;
  glwebtools::Self *v39;
  void *v40;
  void *v41;
  void *v42;
  void *v43;
  glwebtools::Json::Value::Self *Root;
  char isObject;
  int v47;
  glwebtools::Self *v48;
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
  glwebtools::Json::Value::Self *v67;
  glwebtools::Json::Value::Self *v68;
  glwebtools::Json::Value::Self *v69;
  glwebtools::Json::Value::Self *v70;
  glwebtools::Json::Value::Self *v71;
  glwebtools::Json::Value::Self *v72;
  glwebtools::Json::Value::Self *v73;
  glwebtools::Json::Value::Self *v74;
  glwebtools::Json::Value::Self *v75;
  glwebtools::Json::Value::Self *v76;
  glwebtools::Json::Value::Self *v77;
  glwebtools::Json::Value::Self *v78;
  glwebtools::Json::Value::Self *v79;
  glwebtools::Json::Value::Self *v80;
  glwebtools::Json::Value::Self *v81;
  glwebtools::Json::Value::Self *v82;
  glwebtools::Json::Value::Self *v83;
  glwebtools::Json::Value::Self *v84;
  const glwebtools::Json::Value::Self *v85;
  glwebtools::Json::Value::Self *v86;
  glwebtools::Json::Value::Self *v87;
  glwebtools::Json::Value::Self *v88;
  glwebtools::Json::Value::Self *v89;
  glwebtools::Json::Value::Self *v90;
  typedef char *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef const glwebtools::Json::Value::Self *_g4_t_v93;
  typedef const glwebtools::Json::Value::Self *_g4_t_v94;
  typedef const glwebtools::Json::Value::Self *_g4_t_v95;
  typedef const glwebtools::Json::Value::Self *_g4_t_v96;
  typedef const glwebtools::Json::Value::Self *_g4_t_v97;
  typedef const glwebtools::Json::Value::Self *_g4_t_v98;
  typedef const glwebtools::Json::Value::Self *_g4_t_v99;
  typedef const glwebtools::Json::Value::Self *_g4_t_v100;
  typedef const glwebtools::Json::Value::Self *_g4_t_v101;
  typedef const glwebtools::Json::Value::Self *_g4_t_v102;
  typedef const glwebtools::Json::Value::Self *_g4_t_v103;
  typedef const glwebtools::Json::Value::Self *_g4_t_v104;
  typedef const glwebtools::Json::Value::Self *_g4_t_v105;
  typedef int *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int *_g4_t_v113;
  typedef unsigned int *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef bool *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef int *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef char *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef char *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef int *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef char *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef char *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef char *_g4_t_v137;
  typedef int _g4_t_v138;
  typedef int *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef unsigned int *_g4_t_v141;
  typedef int _g4_t_v142;
  typedef char *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef char *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef bool *_g4_t_v147;
  typedef int _g4_t_v148;
  typedef char *_g4_t_v149;
  typedef int _g4_t_v150[4];
  typedef int _g4_t_v151[4];
  typedef int _g4_t_v152[4];
  typedef int _g4_t_v153[4];
  typedef int _g4_t_v154[4];
  typedef int _g4_t_v155[4];
  typedef int _g4_t_v156[4];
  typedef int _g4_t_v157[4];
  typedef int _g4_t_v158[4];
  typedef int _g4_t_v159[4];
  typedef int _g4_t_v160[4];
  typedef int _g4_t_v161[4];
  typedef int _g4_t_v162[4];
  typedef int _g4_t_v163[3];
  typedef uint8_t _g4_t_v164[16];
  typedef uint8_t _g4_t_v165[16];
  typedef uint8_t _g4_t_v166[16];
  typedef uint8_t _g4_t_v167[16];
  typedef uint8_t _g4_t_v168[16];
  typedef uint8_t _g4_t_v169[16];
  typedef uint8_t _g4_t_v170[16];
  typedef uint8_t _g4_t_v171[16];
  typedef uint8_t _g4_t_v172[16];
  typedef uint8_t _g4_t_v173[16];
  typedef uint8_t _g4_t_v174[16];
  typedef uint8_t _g4_t_v175[16];
  typedef uint8_t _g4_t_v176[16];
  typedef uint8_t _g4_t_v177[16];
  typedef uint8_t _g4_t_v178[32];
  enum : size_t {
    _g4_s0 = 848u,
    _g4_s1 = (8u + sizeof(_g4_t_v91)) > _g4_s0 ? (8u + sizeof(_g4_t_v91)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v92)) > _g4_s1 ? (8u + sizeof(_g4_t_v92)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v93)) > _g4_s2 ? (8u + sizeof(_g4_t_v93)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v94)) > _g4_s3 ? (8u + sizeof(_g4_t_v94)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v95)) > _g4_s4 ? (8u + sizeof(_g4_t_v95)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v96)) > _g4_s5 ? (8u + sizeof(_g4_t_v96)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v97)) > _g4_s6 ? (8u + sizeof(_g4_t_v97)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v98)) > _g4_s7 ? (8u + sizeof(_g4_t_v98)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v99)) > _g4_s8 ? (8u + sizeof(_g4_t_v99)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v100)) > _g4_s9 ? (8u + sizeof(_g4_t_v100)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v101)) > _g4_s10 ? (8u + sizeof(_g4_t_v101)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v102)) > _g4_s11 ? (8u + sizeof(_g4_t_v102)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v103)) > _g4_s12 ? (8u + sizeof(_g4_t_v103)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v104)) > _g4_s13 ? (8u + sizeof(_g4_t_v104)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v105)) > _g4_s14 ? (8u + sizeof(_g4_t_v105)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v106)) > _g4_s15 ? (20u + sizeof(_g4_t_v106)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v107)) > _g4_s16 ? (20u + sizeof(_g4_t_v107)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v108)) > _g4_s17 ? (20u + sizeof(_g4_t_v108)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v109)) > _g4_s18 ? (20u + sizeof(_g4_t_v109)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v110)) > _g4_s19 ? (20u + sizeof(_g4_t_v110)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v111)) > _g4_s20 ? (20u + sizeof(_g4_t_v111)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v112)) > _g4_s21 ? (20u + sizeof(_g4_t_v112)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v113)) > _g4_s22 ? (20u + sizeof(_g4_t_v113)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v114)) > _g4_s23 ? (20u + sizeof(_g4_t_v114)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v115)) > _g4_s24 ? (20u + sizeof(_g4_t_v115)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v116)) > _g4_s25 ? (20u + sizeof(_g4_t_v116)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v117)) > _g4_s26 ? (20u + sizeof(_g4_t_v117)) : _g4_s26,
    _g4_s28 = (30u + sizeof(_g4_t_v118)) > _g4_s27 ? (30u + sizeof(_g4_t_v118)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v119)) > _g4_s28 ? (32u + sizeof(_g4_t_v119)) : _g4_s28,
    _g4_s30 = (36u + sizeof(_g4_t_v120)) > _g4_s29 ? (36u + sizeof(_g4_t_v120)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v121)) > _g4_s30 ? (40u + sizeof(_g4_t_v121)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v122)) > _g4_s31 ? (72u + sizeof(_g4_t_v122)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v123)) > _g4_s32 ? (76u + sizeof(_g4_t_v123)) : _g4_s32,
    _g4_s34 = (88u + sizeof(_g4_t_v124)) > _g4_s33 ? (88u + sizeof(_g4_t_v124)) : _g4_s33,
    _g4_s35 = (92u + sizeof(_g4_t_v125)) > _g4_s34 ? (92u + sizeof(_g4_t_v125)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v126)) > _g4_s35 ? (104u + sizeof(_g4_t_v126)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v127)) > _g4_s36 ? (108u + sizeof(_g4_t_v127)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v128)) > _g4_s37 ? (120u + sizeof(_g4_t_v128)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v129)) > _g4_s38 ? (124u + sizeof(_g4_t_v129)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v130)) > _g4_s39 ? (136u + sizeof(_g4_t_v130)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v131)) > _g4_s40 ? (140u + sizeof(_g4_t_v131)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v132)) > _g4_s41 ? (152u + sizeof(_g4_t_v132)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v133)) > _g4_s42 ? (156u + sizeof(_g4_t_v133)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v134)) > _g4_s43 ? (168u + sizeof(_g4_t_v134)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v135)) > _g4_s44 ? (172u + sizeof(_g4_t_v135)) : _g4_s44,
    _g4_s46 = (184u + sizeof(_g4_t_v136)) > _g4_s45 ? (184u + sizeof(_g4_t_v136)) : _g4_s45,
    _g4_s47 = (188u + sizeof(_g4_t_v137)) > _g4_s46 ? (188u + sizeof(_g4_t_v137)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v138)) > _g4_s47 ? (200u + sizeof(_g4_t_v138)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v139)) > _g4_s48 ? (204u + sizeof(_g4_t_v139)) : _g4_s48,
    _g4_s50 = (216u + sizeof(_g4_t_v140)) > _g4_s49 ? (216u + sizeof(_g4_t_v140)) : _g4_s49,
    _g4_s51 = (220u + sizeof(_g4_t_v141)) > _g4_s50 ? (220u + sizeof(_g4_t_v141)) : _g4_s50,
    _g4_s52 = (232u + sizeof(_g4_t_v142)) > _g4_s51 ? (232u + sizeof(_g4_t_v142)) : _g4_s51,
    _g4_s53 = (236u + sizeof(_g4_t_v143)) > _g4_s52 ? (236u + sizeof(_g4_t_v143)) : _g4_s52,
    _g4_s54 = (248u + sizeof(_g4_t_v144)) > _g4_s53 ? (248u + sizeof(_g4_t_v144)) : _g4_s53,
    _g4_s55 = (252u + sizeof(_g4_t_v145)) > _g4_s54 ? (252u + sizeof(_g4_t_v145)) : _g4_s54,
    _g4_s56 = (264u + sizeof(_g4_t_v146)) > _g4_s55 ? (264u + sizeof(_g4_t_v146)) : _g4_s55,
    _g4_s57 = (268u + sizeof(_g4_t_v147)) > _g4_s56 ? (268u + sizeof(_g4_t_v147)) : _g4_s56,
    _g4_s58 = (280u + sizeof(_g4_t_v148)) > _g4_s57 ? (280u + sizeof(_g4_t_v148)) : _g4_s57,
    _g4_s59 = (284u + sizeof(_g4_t_v149)) > _g4_s58 ? (284u + sizeof(_g4_t_v149)) : _g4_s58,
    _g4_s60 = (296u + sizeof(_g4_t_v150)) > _g4_s59 ? (296u + sizeof(_g4_t_v150)) : _g4_s59,
    _g4_s61 = (312u + sizeof(_g4_t_v151)) > _g4_s60 ? (312u + sizeof(_g4_t_v151)) : _g4_s60,
    _g4_s62 = (328u + sizeof(_g4_t_v152)) > _g4_s61 ? (328u + sizeof(_g4_t_v152)) : _g4_s61,
    _g4_s63 = (344u + sizeof(_g4_t_v153)) > _g4_s62 ? (344u + sizeof(_g4_t_v153)) : _g4_s62,
    _g4_s64 = (360u + sizeof(_g4_t_v154)) > _g4_s63 ? (360u + sizeof(_g4_t_v154)) : _g4_s63,
    _g4_s65 = (376u + sizeof(_g4_t_v155)) > _g4_s64 ? (376u + sizeof(_g4_t_v155)) : _g4_s64,
    _g4_s66 = (392u + sizeof(_g4_t_v156)) > _g4_s65 ? (392u + sizeof(_g4_t_v156)) : _g4_s65,
    _g4_s67 = (408u + sizeof(_g4_t_v157)) > _g4_s66 ? (408u + sizeof(_g4_t_v157)) : _g4_s66,
    _g4_s68 = (424u + sizeof(_g4_t_v158)) > _g4_s67 ? (424u + sizeof(_g4_t_v158)) : _g4_s67,
    _g4_s69 = (440u + sizeof(_g4_t_v159)) > _g4_s68 ? (440u + sizeof(_g4_t_v159)) : _g4_s68,
    _g4_s70 = (456u + sizeof(_g4_t_v160)) > _g4_s69 ? (456u + sizeof(_g4_t_v160)) : _g4_s69,
    _g4_s71 = (472u + sizeof(_g4_t_v161)) > _g4_s70 ? (472u + sizeof(_g4_t_v161)) : _g4_s70,
    _g4_s72 = (488u + sizeof(_g4_t_v162)) > _g4_s71 ? (488u + sizeof(_g4_t_v162)) : _g4_s71,
    _g4_s73 = (504u + sizeof(_g4_t_v163)) > _g4_s72 ? (504u + sizeof(_g4_t_v163)) : _g4_s72,
    _g4_s74 = (516u + sizeof(_g4_t_v164)) > _g4_s73 ? (516u + sizeof(_g4_t_v164)) : _g4_s73,
    _g4_s75 = (532u + sizeof(_g4_t_v165)) > _g4_s74 ? (532u + sizeof(_g4_t_v165)) : _g4_s74,
    _g4_s76 = (548u + sizeof(_g4_t_v166)) > _g4_s75 ? (548u + sizeof(_g4_t_v166)) : _g4_s75,
    _g4_s77 = (564u + sizeof(_g4_t_v167)) > _g4_s76 ? (564u + sizeof(_g4_t_v167)) : _g4_s76,
    _g4_s78 = (580u + sizeof(_g4_t_v168)) > _g4_s77 ? (580u + sizeof(_g4_t_v168)) : _g4_s77,
    _g4_s79 = (596u + sizeof(_g4_t_v169)) > _g4_s78 ? (596u + sizeof(_g4_t_v169)) : _g4_s78,
    _g4_s80 = (612u + sizeof(_g4_t_v170)) > _g4_s79 ? (612u + sizeof(_g4_t_v170)) : _g4_s79,
    _g4_s81 = (628u + sizeof(_g4_t_v171)) > _g4_s80 ? (628u + sizeof(_g4_t_v171)) : _g4_s80,
    _g4_s82 = (644u + sizeof(_g4_t_v172)) > _g4_s81 ? (644u + sizeof(_g4_t_v172)) : _g4_s81,
    _g4_s83 = (660u + sizeof(_g4_t_v173)) > _g4_s82 ? (660u + sizeof(_g4_t_v173)) : _g4_s82,
    _g4_s84 = (676u + sizeof(_g4_t_v174)) > _g4_s83 ? (676u + sizeof(_g4_t_v174)) : _g4_s83,
    _g4_s85 = (692u + sizeof(_g4_t_v175)) > _g4_s84 ? (692u + sizeof(_g4_t_v175)) : _g4_s84,
    _g4_s86 = (708u + sizeof(_g4_t_v176)) > _g4_s85 ? (708u + sizeof(_g4_t_v176)) : _g4_s85,
    _g4_s87 = (724u + sizeof(_g4_t_v177)) > _g4_s86 ? (724u + sizeof(_g4_t_v177)) : _g4_s86,
    _g4_s88 = (740u + sizeof(_g4_t_v178)) > _g4_s87 ? (740u + sizeof(_g4_t_v178)) : _g4_s87
  };
  alignas(16) uint8_t _g4_sf[_g4_s88];
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 8u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 8u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 8u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 8u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 8u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 8u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 8u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 8u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 8u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 8u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 8u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 8u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 8u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 8u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 8u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 20u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 20u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 20u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 20u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 20u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 20u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 20u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 20u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 20u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 20u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 20u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 20u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 30u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 32u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 40u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 72u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 76u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 88u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 92u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 104u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 108u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 120u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 124u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 136u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 140u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 152u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 156u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 168u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 172u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 184u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 188u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 200u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 204u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 216u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 220u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 232u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 236u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 248u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 252u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 264u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 268u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 280u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 284u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 296u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 312u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 328u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 344u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 360u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 376u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 392u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 408u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 424u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 440u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 456u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 472u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 488u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 504u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 516u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 532u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 548u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 564u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 580u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 596u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 612u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 628u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 644u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 660u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 676u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 692u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 708u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 724u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 740u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v122), "payment_state", (int)(uintptr_t)(&v118));
  v123 = (int *)((char *)self + 4);
  g4_std::string::construct_copy(v152, &v122);
  v2 = v123;
  v152[1] = (int)(uintptr_t)(v123);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v166), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v166);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v166);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, *v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v85 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v86 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v87 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v86, (char **)v152);
    glwebtools::Json::Value::opAssign(v87, v85);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v4 = (void *)(v152[0] - 12);
  if ( (uint32_t *)(v152[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v152[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v122 - 12);
  if ( (uint32_t *)(v122 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v122 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v124), "transaction_state", (int)(uintptr_t)(&v118) + 1);
  v125 = (int *)((char *)self + 8);
  g4_std::string::construct_copy(v153, &v124);
  v106 = v125;
  v153[1] = (int)(uintptr_t)(v125);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v167), (char *)&loc_6 + 1);
    v84 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v84, (const glwebtools::Json::Value::Self *)v167);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v167);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v6 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, *v106);
  if ( glwebtools::IsOperationSuccess(v6) )
  {
    v104 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v82 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v83 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v82, (char **)v153);
    glwebtools::Json::Value::opAssign(v83, v104);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v7 = (void *)(v153[0] - 12);
  if ( (uint32_t *)(v153[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v153[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v124 - 12);
  if ( (uint32_t *)(v124 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v124 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v126), "billing_type", (int)(uintptr_t)(&v119));
  v127 = (char *)self + 12;
  g4_std::string::construct_copy(v154, &v126);
  v107 = (int)(uintptr_t)(v127);
  v154[1] = (int)(uintptr_t)(v127);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v168), (char *)&loc_6 + 1);
    v81 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v81, (const glwebtools::Json::Value::Self *)v168);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v168);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v9 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v107);
  if ( glwebtools::IsOperationSuccess(v9) )
  {
    v103 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v79 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v80 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v79, (char **)v154);
    glwebtools::Json::Value::opAssign(v80, v103);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v10 = (void *)(v154[0] - 12);
  if ( (uint32_t *)(v154[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v154[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v126 - 12);
  if ( (uint32_t *)(v126 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v126 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v128), "billing_name", (int)(uintptr_t)(&v119) + 1);
  v129 = (char *)self + 16;
  g4_std::string::construct_copy(v155, &v128);
  v108 = (int)(uintptr_t)(v129);
  v155[1] = (int)(uintptr_t)(v129);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v169), (char *)&loc_6 + 1);
    v78 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v78, (const glwebtools::Json::Value::Self *)v169);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v169);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v12 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v108);
  if ( glwebtools::IsOperationSuccess(v12) )
  {
    v102 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v76 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v77 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v76, (char **)v155);
    glwebtools::Json::Value::opAssign(v77, v102);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v13 = (void *)(v155[0] - 12);
  if ( (uint32_t *)(v155[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v155[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v128 - 12);
  if ( (uint32_t *)(v128 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v128 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v130), "error", (int)(uintptr_t)(&v119) + 2);
  v131 = (int *)((char *)self + 44);
  g4_std::string::construct_copy(v156, &v130);
  v109 = v131;
  v156[1] = (int)(uintptr_t)(v131);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v170), (char *)&loc_6 + 1);
    v75 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v75, (const glwebtools::Json::Value::Self *)v170);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v170);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v15 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, *v109);
  if ( glwebtools::IsOperationSuccess(v15) )
  {
    v101 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v73 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v74 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v73, (char **)v156);
    glwebtools::Json::Value::opAssign(v74, v101);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v16 = (void *)(v156[0] - 12);
  if ( (uint32_t *)(v156[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v156[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v130 - 12);
  if ( (uint32_t *)(v130 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v130 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v132), "error_string", (int)(uintptr_t)(&v119) + 3);
  v133 = (char *)self + 48;
  g4_std::string::construct_copy(v157, &v132);
  v110 = (int)(uintptr_t)(v133);
  v157[1] = (int)(uintptr_t)(v133);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v171), (char *)&loc_6 + 1);
    v72 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v72, (const glwebtools::Json::Value::Self *)v171);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v171);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v18 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v110);
  if ( glwebtools::IsOperationSuccess(v18) )
  {
    v100 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v70 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v71 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v70, (char **)v157);
    glwebtools::Json::Value::opAssign(v71, v100);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v19 = (void *)(v157[0] - 12);
  if ( (uint32_t *)(v157[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v157[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v132 - 12);
  if ( (uint32_t *)(v132 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v132 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v134), "error_message", (int)(uintptr_t)(&v120));
  v135 = (char *)self + 52;
  g4_std::string::construct_copy(v158, &v134);
  v111 = (int)(uintptr_t)(v135);
  v158[1] = (int)(uintptr_t)(v135);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v172), (char *)&loc_6 + 1);
    v69 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v69, (const glwebtools::Json::Value::Self *)v172);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v172);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v21 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v111);
  if ( glwebtools::IsOperationSuccess(v21) )
  {
    v99 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v67 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v68 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v67, (char **)v158);
    glwebtools::Json::Value::opAssign(v68, v99);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v22 = (void *)(v158[0] - 12);
  if ( (uint32_t *)(v158[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v158[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  v23 = (void *)(v134 - 12);
  if ( (uint32_t *)(v134 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v134 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v136), "transaction_time", (int)(uintptr_t)(&v120) + 1);
  v137 = (char *)self + 56;
  g4_std::string::construct_copy(v159, &v136);
  v112 = (int)(uintptr_t)(v137);
  v159[1] = (int)(uintptr_t)(v137);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v173), (char *)&loc_6 + 1);
    v66 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v66, (const glwebtools::Json::Value::Self *)v173);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v173);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v24 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v112);
  if ( glwebtools::IsOperationSuccess(v24) )
  {
    v98 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v64 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v65 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v64, (char **)v159);
    glwebtools::Json::Value::opAssign(v65, v98);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v25 = (void *)(v159[0] - 12);
  if ( (uint32_t *)(v159[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v159[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v25);
  }
  v26 = (void *)(v136 - 12);
  if ( (uint32_t *)(v136 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v136 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v138), "seconds_before_transaction", (int)(uintptr_t)(&v120) + 2);
  v139 = (int *)((char *)self + 60);
  g4_std::string::construct_copy(v160, &v138);
  v113 = v139;
  v160[1] = (int)(uintptr_t)(v139);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v174), (char *)&loc_6 + 1);
    v63 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v63, (const glwebtools::Json::Value::Self *)v174);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v27 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, *v113);
  if ( glwebtools::IsOperationSuccess(v27) )
  {
    v97 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v61 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v62 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v61, (char **)v160);
    glwebtools::Json::Value::opAssign(v62, v97);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v28 = (void *)(v160[0] - 12);
  if ( (uint32_t *)(v160[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v160[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  v29 = (void *)(v138 - 12);
  if ( (uint32_t *)(v138 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v138 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v140), "process_count", (int)(uintptr_t)(&v120) + 3);
  v141 = (unsigned int *)((char *)self + 20);
  g4_std::string::construct_copy(v150, &v140);
  v114 = v141;
  v150[1] = (int)(uintptr_t)(v141);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v164), (char *)&loc_6 + 1);
    v60 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v60, (const glwebtools::Json::Value::Self *)v164);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v164);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v30 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, *v114);
  if ( glwebtools::IsOperationSuccess(v30) )
  {
    v96 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v58 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v59 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v58, (char **)v150);
    glwebtools::Json::Value::opAssign(v59, v96);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v31 = (void *)(v150[0] - 12);
  if ( (uint32_t *)(v150[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v150[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  v32 = (void *)(v140 - 12);
  if ( (uint32_t *)(v140 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v140 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v32);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v142), "timestamp", (int)(uintptr_t)(&v121));
  v143 = (char *)self + 24;
  g4_std::string::construct_copy(v161, &v142);
  v115 = (int)(uintptr_t)(v143);
  v161[1] = (int)(uintptr_t)(v143);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v175), (char *)&loc_6 + 1);
    v57 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v57, (const glwebtools::Json::Value::Self *)v175);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v33 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v115);
  if ( glwebtools::IsOperationSuccess(v33) )
  {
    v95 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v55 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v56 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v55, (char **)v161);
    glwebtools::Json::Value::opAssign(v56, v95);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v34 = (void *)(v161[0] - 12);
  if ( (uint32_t *)(v161[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v161[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v34);
  }
  v35 = (void *)(v142 - 12);
  if ( (uint32_t *)(v142 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v142 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v35);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v144), "transaction_id", (int)(uintptr_t)(&v121) + 1);
  v145 = (char *)self + 28;
  g4_std::string::construct_copy(v162, &v144);
  v116 = (int)(uintptr_t)(v145);
  v162[1] = (int)(uintptr_t)(v145);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v176), (char *)&loc_6 + 1);
    v54 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v54, (const glwebtools::Json::Value::Self *)v176);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v176);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v36 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v116);
  if ( glwebtools::IsOperationSuccess(v36) )
  {
    v94 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v52 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v53 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v52, (char **)v162);
    glwebtools::Json::Value::opAssign(v53, v94);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v37 = (void *)(v162[0] - 12);
  if ( (uint32_t *)(v162[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v162[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v37);
  }
  v38 = (void *)(v144 - 12);
  if ( (uint32_t *)(v144 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v144 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v38);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v146), "restore", (int)(uintptr_t)(&v121) + 2);
  v147 = (bool *)self + 32;
  g4_std::string::construct_copy(v151, &v146);
  v117 = v147;
  v151[1] = (int)(uintptr_t)(v147);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v165), (char *)&loc_6 + 1);
    v51 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v51, (const glwebtools::Json::Value::Self *)v165);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v165);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
  v39 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, *v117);
  if ( glwebtools::IsOperationSuccess(v39) )
  {
    v93 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
    v49 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v50 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v49, (char **)v151);
    glwebtools::Json::Value::opAssign(v50, v93);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  v40 = (void *)(v151[0] - 12);
  if ( (uint32_t *)(v151[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v151[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v40);
  }
  v41 = (void *)(v146 - 12);
  if ( (uint32_t *)(v146 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v146 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v41);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v148), "store_certificate", (int)(uintptr_t)(&v121) + 3);
  v149 = (char *)self + 36;
  g4_std::string::construct_copy(v163, &v148);
  v163[1] = (int)(uintptr_t)(v149);
  if ( v149[6] != 0 )
  {
    v91 = v149;
    isObject = glwebtools::JsonWriter::isObject(a2);
    v47 = (int)(uintptr_t)(v91);
    if ( isObject == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v177), (char *)&loc_6 + 1);
      v88 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(v88, (const glwebtools::Json::Value::Self *)v177);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v177);
      v47 = (int)(uintptr_t)(v91);
    }
    v92 = v47;
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v178);
    v48 = nullptr;
    if ( *(uint8_t *)(v92 + 6) != 0 )
      v48 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v178, v92);
    if ( glwebtools::IsOperationSuccess(v48) )
    {
      v105 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v178);
      v89 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v90 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v89, (char **)v163);
      glwebtools::Json::Value::opAssign(v90, v105);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v178);
  }
  v42 = (void *)(v163[0] - 12);
  if ( (uint32_t *)(v163[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v163[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v42);
  }
  v43 = (void *)(v148 - 12);
  if ( (uint32_t *)(v148 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v43);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfo::UpdateTimeStamp  (binary VA: 0x1505430)
// Original: iap::TransactionInfo::UpdateTimeStamp
// ----------------------------------------------------------------------------
int iap::TransactionInfo::UpdateTimeStamp(iap::TransactionInfo::Self *self)
{
  uint32_t *v1;
  size_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef uint8_t *_g4_t_v7;
  typedef size_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef time_t _g4_t_CurrentTimestamp;
  typedef size_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v8)) > _g4_s2 ? (4u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v9)) > _g4_s3 ? (8u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v10)) > _g4_s4 ? (8u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_CurrentTimestamp)) > _g4_s5 ? (12u + sizeof(_g4_t_CurrentTimestamp)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v12)) > _g4_s6 ? (12u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v13)) > _g4_s7 ? (12u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v14)) > _g4_s8 ? (12u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v15)) > _g4_s9 ? (36u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v16)) > _g4_s10 ? (40u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v17)) > _g4_s11 ? (44u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v18)) > _g4_s12 ? (48u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v19)) > _g4_s13 ? (52u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v20)) > _g4_s14 ? (56u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v21)) > _g4_s15 ? (60u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v22)) > _g4_s16 ? (72u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v23)) > _g4_s17 ? (76u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v24)) > _g4_s18 ? (80u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v25)) > _g4_s19 ? (84u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v26)) > _g4_s20 ? (88u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v27)) > _g4_s21 ? (96u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v28)) > _g4_s22 ? (100u + sizeof(_g4_t_v28)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_CurrentTimestamp &CurrentTimestamp = *reinterpret_cast<_g4_t_CurrentTimestamp *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  CurrentTimestamp = glwebtools::Time::GetCurrentTimestamp();
  sub_1900810(v28);
  v28[28] = 0;
  LOWORD(v28[29]) = 0;
  memset(&v28[30], 0, 16);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = nullptr;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = nullptr;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v26[1] = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = &dword_213B814;
  sub_19119D0(v28, v21);
  sub_192D620(&v20, CurrentTimestamp);
  v1 = &dword_213B814;
  v15 = &dword_213B814;
  if ( v24 == nullptr )
  {
    g4_std::string::assign_str(&v15, &v27);
    goto LABEL_19;
  }
  if ( v24 <= v22 )
  {
    v14 = v23;
    if ( v22 == v23 )
      goto LABEL_18;
    if ( v23 != nullptr )
    {
      v10 = v22 - v23;
      v2 = (size_t *)sub_1938930(v22 - v23, 0);
      v1 = (uint32_t *)(v2 + 3);
      if ( v10 == 1 )
      {
        *((uint8_t *)v2 + 12) = *v14;
LABEL_16:
        if ( v2 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v2[2] = 0;
          *v2 = v10;
          *((uint8_t *)v1 + v10) = 0;
        }
LABEL_18:
        v16 = v1;
        g4_std::string::assign_str(&v15, &v16);
        v13 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v22 != nullptr )
        goto LABEL_24;
      v2 = (size_t *)sub_1938930(0, 0);
      v1 = (uint32_t *)(v2 + 3);
      v10 = 0;
    }
    v6 = v1;
    v8 = v2;
    memcpy(v1, v14, v10);
    v2 = v8;
    v1 = v6;
    goto LABEL_16;
  }
  if ( v24 == v23 )
    goto LABEL_9;
  if ( v23 == nullptr )
LABEL_24:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v7 = v23;
  v12 = v24 - v23;
  v9 = (size_t *)sub_1938930(v24 - v23, 0);
  v1 = (uint32_t *)(v9 + 3);
  if ( v12 == 1 )
  {
    *((uint8_t *)v9 + 12) = *v7;
  }
  else
  {
    memcpy(v1, v7, v12);
    v1 = (uint32_t *)(v9 + 3);
  }
  if ( v9 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v9[2] = 0;
    *v9 = v12;
    *((uint8_t *)v9 + v12 + 12) = 0;
  }
LABEL_9:
  v17 = v1;
  g4_std::string::assign_str(&v15, &v17);
  v13 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v13);
LABEL_19:
  g4_std::string::assign_str((char *)self + 24, &v15);
  v3 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v4 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  return 0;
}



// ============================================================================
// Address:   0x15059a0 (size: 96 bytes)
// Symbol:    _ZN3iap15TransactionInfoC2Ev
// Demangled: iap::TransactionInfo::TransactionInfo(void)
// ============================================================================
// Alternative name is '_ZN3iap15TransactionInfoC1Ev'
iap::TransactionInfo::Self *iap::TransactionInfo::Construct(iap::TransactionInfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20960A8);
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 32) = 0;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 42) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}

