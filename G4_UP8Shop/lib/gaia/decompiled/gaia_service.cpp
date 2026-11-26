#include "Core/Utils/DecompTypes.h"
#include "gaia_service.h"

// ----------------------------------------------------------------------------
// Function: gaia::ComparePriorities  (binary VA: 0x14d3b20)
// Original: gaia::ComparePriorities
// ----------------------------------------------------------------------------
bool gaia::ComparePriorities(gaia::Self *self, gaia::ThreadManagerRequest::Self *a2)
{
  int Priority;

  Priority = gaia::ThreadManagerRequest::GetPriority(a2);
  return Priority < gaia::ThreadManagerRequest::GetPriority(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::iOSIsAppInstalled  (binary VA: 0x14d60e0)
// Original: gaia::iOSIsAppInstalled
// ----------------------------------------------------------------------------
int gaia::iOSIsAppInstalled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::IsAppInstalled  (binary VA: 0x14d60f0)
// Original: gaia::IsAppInstalled
// ----------------------------------------------------------------------------
bool gaia::IsAppInstalled(uint32_t *a1)
{
  return AndroidIsAppInstalled(a1);
}

// ----------------------------------------------------------------------------
// Function: gaia::GetPrivateDocumentsPath  (binary VA: 0x14dd480)
// Original: gaia::GetPrivateDocumentsPath
// ----------------------------------------------------------------------------
gaia::Self * gaia::GetPrivateDocumentsPath(gaia::Self *self)
{
  int v1;
  int *v2;
  typedef int *_g4_t_v4;
  typedef uint8_t *_g4_t_v5;
  typedef uint8_t *_g4_t_v6;
  typedef int *_g4_t_v7;
  typedef char _g4_t_v8;
  typedef uint16_t _g4_t_v9[3];
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int (**_g4_t_v12)(int);
  typedef int _g4_t_v13;
  typedef int (**_g4_t_v14)(int);
  typedef uint32_t _g4_t_v15[3];
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[29];
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (53u + sizeof(_g4_t_v8)) > _g4_s4 ? (53u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (54u + sizeof(_g4_t_v9)) > _g4_s5 ? (54u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v10)) > _g4_s6 ? (60u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v11)) > _g4_s7 ? (64u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v12)) > _g4_s8 ? (68u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v13)) > _g4_s9 ? (72u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v14)) > _g4_s10 ? (76u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v15)) > _g4_s11 ? (80u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v16)) > _g4_s12 ? (92u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v17)) > _g4_s13 ? (96u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v18)) > _g4_s14 ? (100u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v19)) > _g4_s15 ? (104u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v20)) > _g4_s16 ? (108u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v21)) > _g4_s17 ? (112u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v22)) > _g4_s18 ? (116u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v23)) > _g4_s19 ? (120u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v24)) > _g4_s20 ? (236u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (237u + sizeof(_g4_t_v25)) > _g4_s21 ? (237u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v26)) > _g4_s22 ? (240u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v27)) > _g4_s23 ? (244u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v28)) > _g4_s24 ? (248u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (252u + sizeof(_g4_t_v29)) > _g4_s25 ? (252u + sizeof(_g4_t_v29)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 53u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 54u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 92u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 96u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 100u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 104u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 108u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 112u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 116u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 120u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 236u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 237u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 240u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 244u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 248u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 252u);

  sub_1900810(v23);
  v23[28] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v12 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(int (***)(int))((char *)&v12 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v13 = 0;
  sub_19119D0((char *)&v12 + (uint32_t)(uintptr_t)(*(v12 - 3)), 0);
  v14 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v15[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v15[-1] + (uint32_t)(uintptr_t)(*(v14 - 3)), 0);
  v12 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v12 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v15[1] = 0;
  v15[2] = 0;
  v16 = 0;
  v17 = nullptr;
  v18 = 0;
  v12 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v14 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v19 = 0;
  v15[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v20);
  v21 = 24;
  v15[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v22 = &dword_213B814;
  sub_19119D0(v23, v15);
  GameUtils_GetSaveFolder((int)(uintptr_t)(&v9[1]));
  v1 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v14, *(uint32_t *)&v9[1], *(uint32_t *)(*(uint32_t *)&v9[1] - 12)));
  v8 = 47;
  g4_std_compat::ostream_write(v1, &v8, 1);
  g4_std::string::Destroy(&v9[1]);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v18 != 0 )
  {
    if ( v18 > v16 )
    {
      v6 = (uint8_t *)v18;
      v5 = (uint8_t *)(v17);
      v2 = (int *)&v11;
      v4 = (int *)&v11;
    }
    else
    {
      v6 = (uint8_t *)v16;
      v5 = (uint8_t *)(v17);
      v2 = &v10;
      v4 = &v10;
    }
    v7 = v2;
    sub_11A9950(v4, v5, v6);
    g4_std::string::assign_str(self, v7);
    g4_std::string::Destroy(v7);
  }
  else
  {
    g4_std::string::assign_str(self, &v22);
  }
  v12 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v14 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v15[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v22);
  v15[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v20);
  v12 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v12 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v14 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v15[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v12 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v12 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v13 = 0;
  v23[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v23);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::MakeFullFilePath  (binary VA: 0x14dd7f0)
// Original: gaia::MakeFullFilePath
// ----------------------------------------------------------------------------
int gaia::MakeFullFilePath(int a1, int a2)
{
  uint8_t v3[4];

  gaia::GetPrivateDocumentsPath((gaia::Self *)v3);
  sub_134F3A0(a1, (int)(uintptr_t)(v3), a2);
  g4_std::string::Destroy(v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::DownloadApplistEtag  (binary VA: 0x14dd860)
// Original: gaia::DownloadApplistEtag
// ----------------------------------------------------------------------------
int gaia::DownloadApplistEtag()
{
  Json::Value::Self *v0;
  int v1;
  int Instance;
  typedef char *_g4_t_v4;
  typedef uint8_t _g4_t_v5[5];
  typedef uint32_t *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[68];
  typedef int (**_g4_t_v10)(int);
  typedef int _g4_t_v11[7];
  typedef uint8_t _g4_t_v12[8];
  typedef uint8_t _g4_t_v13[68];
  typedef uint32_t _g4_t_v14[29];
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v5)) > _g4_s1 ? (27u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v7)) > _g4_s3 ? (36u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v8)) > _g4_s4 ? (40u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v9)) > _g4_s5 ? (56u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (124u + sizeof(_g4_t_v10)) > _g4_s6 ? (124u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v11)) > _g4_s7 ? (128u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (156u + sizeof(_g4_t_v12)) > _g4_s8 ? (156u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (164u + sizeof(_g4_t_v13)) > _g4_s9 ? (164u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (232u + sizeof(_g4_t_v14)) > _g4_s10 ? (232u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (348u + sizeof(_g4_t_v15)) > _g4_s11 ? (348u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (349u + sizeof(_g4_t_v16)) > _g4_s12 ? (349u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (352u + sizeof(_g4_t_v17)) > _g4_s13 ? (352u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (356u + sizeof(_g4_t_v18)) > _g4_s14 ? (356u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (360u + sizeof(_g4_t_v19)) > _g4_s15 ? (360u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (364u + sizeof(_g4_t_v20)) > _g4_s16 ? (364u + sizeof(_g4_t_v20)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 124u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 128u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 156u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 164u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 232u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 348u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 349u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 352u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 356u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 360u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 364u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v9);
  Json::Value::Construct((int)(uintptr_t)(v8), &dword_211A2D0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5[1]), "asset_name", (int)(uintptr_t)(v5));
  v0 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(v9), (char **)&v5[1]);
  Json::Value::opAssign(v0, (const Json::Value::Self *)v8);
  g4_std::string::Destroy(&v5[1]);
  v1 = 0;
  Json::Value::Destroy((Json::Value::Self *)v8);
  Instance = gaia::Gaia::GetInstance();
  if ( gaia::Gaia_Iris::GetAssetETag(*(gaia::Gaia_Iris::Self **)(Instance + 584), (gaia::GaiaRequest::Self *)v9) == 0 )
  {
    v6 = &dword_213B814;
    gaia::GaiaRequest::GetResponse((int)(uintptr_t)(v9), (int)(uintptr_t)(&v6));
    gaia::MakeFullFilePath((int)(uintptr_t)(&v7), (int)(uintptr_t)(&unk_211A2CC));
    v4 = v7;
    sub_1900810(v14);
    v14[28] = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v14[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v10 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
    *(int *)((char *)&v11[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
    sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
    v10 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
    v14[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
    sub_190A6D0(v11);
    sub_19119D0(v14, v11);
    if ( sub_190AE40((int)(uintptr_t)(v11), v4, 48) != 0 )
      sub_1911530((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
    else
      sub_1911530((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), *(int *)((char *)&v11[4] + (uint32_t)(uintptr_t)(*(v10 - 3))) | 4);
    g4_std::string::Destroy(&v7);
    g4_std_compat::ostream_write(&v10, v6, *(v6 - 3));
    if ( sub_190AC60(v11) == 0 )
      sub_1911530((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), *(int *)((char *)&v11[4] + (uint32_t)(uintptr_t)(*(v10 - 3))) | 4);
    v1 = 1;
    v10 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
    v14[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
    v11[0] = (int)(uintptr_t)(&off_20A9DA8);
    sub_190AC60(v11);
    sub_1908070(v13);
    v11[0] = (int)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v12);
    v10 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
    *(int *)((char *)&v11[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
    v14[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v14);
    g4_std::string::Destroy(&v6);
  }
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v9);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GetCurrentApplistEtag  (binary VA: 0x14ddbc0)
// Original: gaia::GetCurrentApplistEtag
// ----------------------------------------------------------------------------
gaia::Self * gaia::GetCurrentApplistEtag(gaia::Self *self)
{
  typedef char *_g4_t_v2;
  typedef uint8_t _g4_t_v3[5];
  typedef uint32_t *_g4_t_v4;
  typedef int (**_g4_t_v5)(int);
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[7];
  typedef uint8_t _g4_t_v8[8];
  typedef uint8_t _g4_t_v9[68];
  typedef uint32_t _g4_t_v10[5];
  typedef char _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v3)) > _g4_s1 ? (31u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v4)) > _g4_s2 ? (36u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v5)) > _g4_s3 ? (40u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v6)) > _g4_s4 ? (44u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v7)) > _g4_s5 ? (48u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v8)) > _g4_s6 ? (76u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v9)) > _g4_s7 ? (84u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (152u + sizeof(_g4_t_v10)) > _g4_s8 ? (152u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (172u + sizeof(_g4_t_v11)) > _g4_s9 ? (172u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (264u + sizeof(_g4_t_v12)) > _g4_s10 ? (264u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (268u + sizeof(_g4_t_v13)) > _g4_s11 ? (268u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (269u + sizeof(_g4_t_v14)) > _g4_s12 ? (269u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (272u + sizeof(_g4_t_v15)) > _g4_s13 ? (272u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (276u + sizeof(_g4_t_v16)) > _g4_s14 ? (276u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (280u + sizeof(_g4_t_v17)) > _g4_s15 ? (280u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (284u + sizeof(_g4_t_v18)) > _g4_s16 ? (284u + sizeof(_g4_t_v18)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 31u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 36u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 40u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 44u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 48u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 76u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 84u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 152u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 172u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 264u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 268u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 269u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 272u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 276u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 280u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 284u);

  gaia::MakeFullFilePath((int)(uintptr_t)(&v3[1]), (int)(uintptr_t)(&unk_211A2CC));
  v2 = *(char **)&v3[1];
  sub_1900810(v10);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v10[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
  *(int (***)(int))((char *)&v5 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
  v6 = 0;
  sub_19119D0((char *)&v5 + (uint32_t)(uintptr_t)(*(v5 - 3)), 0);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
  v10[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(v7);
  sub_19119D0(v10, v7);
  if ( sub_190AE40((int)(uintptr_t)(v7), v2, 8) != 0 )
    sub_1911530((char *)&v5 + (uint32_t)(uintptr_t)(*(v5 - 3)), 0);
  else
    sub_1911530((char *)&v5 + (uint32_t)(uintptr_t)(*(v5 - 3)), *(int *)((char *)&v5 + (uint32_t)(uintptr_t)(*(v5 - 3)) + 20) | 4);
  g4_std::string::Destroy(&v3[1]);
  if ( (v11 & 5) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  }
  else
  {
    v4 = &dword_213B814;
    sub_19056D0(&v5, &v4);
    if ( sub_190AC60(v7) == 0 )
      sub_1911530((char *)&v5 + (uint32_t)(uintptr_t)(*(v5 - 3)), *(int *)((char *)&v5 + (uint32_t)(uintptr_t)(*(v5 - 3)) + 20) | 4);
    g4_std::string::construct_copy(self, &v4);
    g4_std::string::Destroy(&v4);
  }
  v5 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
  v10[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  v7[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v7);
  sub_1908070(v9);
  v7[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v8);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
  *(int (***)(int))((char *)&v5 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
  v10[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v6 = 0;
  sub_1900B90(v10);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::ShouldRedownloadApplist  (binary VA: 0x14dde90)
// Original: gaia::ShouldRedownloadApplist
// ----------------------------------------------------------------------------
int gaia::ShouldRedownloadApplist()
{
  int v0;
  int Instance;
  int v3;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s1[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_s2)) > _g4_s0 ? (8u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_s1)) > _g4_s1 ? (12u + sizeof(_g4_t_s1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);

  gaia::GetCurrentApplistEtag((gaia::Self *)&s2);
  s1[0] = &dword_213B814;
  v0 = 1;
  Instance = gaia::Gaia::GetInstance();
  if ( gaia::Gaia_Iris::GetAssetETag(*(gaia::Gaia::Self **)(Instance + 584), &dword_211A2D0, (int)(uintptr_t)(s1), 0, 0, 0) == 0
    && *((uint32_t *)s1[0] - 3) == *((uint32_t *)s2 - 3) )
  {
    v3 = memcmp(s1[0], s2, *((uint32_t *)s1[0] - 3));
    LOBYTE(v3) = v3 != 0;
    v0 = v3;
  }
  g4_std::string::Destroy(s1);
  g4_std::string::Destroy(&s2);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gaia::ParseApplistJsonFile  (binary VA: 0x14ddf70)
// Original: gaia::ParseApplistJsonFile
// ----------------------------------------------------------------------------
gaia::Self * gaia::ParseApplistJsonFile(gaia::Self *self)
{
  char *v1;
  char v2; // di
  void *v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  void **v13;
  unsigned int v14;
  void *v15;
  void *v16;
  void **v17;
  unsigned int v18;
  void *v19;
  int v21;
  int v22;
  typedef uint32_t *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef uint8_t _g4_t_v31[16];
  typedef void *_g4_t_v32[5];
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46[7];
  typedef uint8_t _g4_t_v47[8];
  typedef uint8_t _g4_t_v48[68];
  typedef uint32_t _g4_t_v49[29];
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v30)) > _g4_s7 ? (36u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v31)) > _g4_s8 ? (40u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v32)) > _g4_s9 ? (56u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v33)) > _g4_s10 ? (76u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v34)) > _g4_s11 ? (92u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v35)) > _g4_s12 ? (96u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v36)) > _g4_s13 ? (104u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v37)) > _g4_s14 ? (112u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v38)) > _g4_s15 ? (116u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v39)) > _g4_s16 ? (120u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v40)) > _g4_s17 ? (124u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v41)) > _g4_s18 ? (132u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v42)) > _g4_s19 ? (136u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v43)) > _g4_s20 ? (160u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (168u + sizeof(_g4_t_v44)) > _g4_s21 ? (168u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v45)) > _g4_s22 ? (172u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v46)) > _g4_s23 ? (176u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (204u + sizeof(_g4_t_v47)) > _g4_s24 ? (204u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (212u + sizeof(_g4_t_v48)) > _g4_s25 ? (212u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (280u + sizeof(_g4_t_v49)) > _g4_s26 ? (280u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (396u + sizeof(_g4_t_v50)) > _g4_s27 ? (396u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (397u + sizeof(_g4_t_v51)) > _g4_s28 ? (397u + sizeof(_g4_t_v51)) : _g4_s28,
    _g4_s30 = (400u + sizeof(_g4_t_v52)) > _g4_s29 ? (400u + sizeof(_g4_t_v52)) : _g4_s29,
    _g4_s31 = (404u + sizeof(_g4_t_v53)) > _g4_s30 ? (404u + sizeof(_g4_t_v53)) : _g4_s30,
    _g4_s32 = (408u + sizeof(_g4_t_v54)) > _g4_s31 ? (408u + sizeof(_g4_t_v54)) : _g4_s31,
    _g4_s33 = (412u + sizeof(_g4_t_v55)) > _g4_s32 ? (412u + sizeof(_g4_t_v55)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 132u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 136u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 204u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 212u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 280u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 396u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 397u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 400u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 404u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 408u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 412u);

  gaia::MakeFullFilePath((int)(uintptr_t)(&v30), (int)(uintptr_t)(&unk_211A2C8));
  v1 = v30;
  sub_1900810(v49);
  v49[28] = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v49[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v55 = 0;
  v44 = (int)(uintptr_t)(&off_20A9DEC);
  *(int *)((char *)&v44 + (uint32_t)*(&off_20A9DEC - 3)) = (int)(uintptr_t)(&off_20A9E00);
  v45 = 0;
  sub_19119D0((char *)&v44 + *(uint32_t *)(v44 - 12), 0);
  v44 = (int)(uintptr_t)(&off_20A9E2C);
  v49[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(v46);
  sub_19119D0(v49, v46);
  if ( sub_190AE40((int)(uintptr_t)(v46), v1, 8) != 0 )
    sub_1911530((char *)&v44 + *(uint32_t *)(v44 - 12), 0);
  else
    sub_1911530((char *)&v44 + *(uint32_t *)(v44 - 12), *(int *)((char *)&v46[3] + *(uint32_t *)(v44 - 12)) | 4);
  g4_std::string::Destroy(&v30);
  Json::Value::Construct((int)(uintptr_t)(v31), nullptr);
  Json::Reader::Construct((Json::Reader::Self *)v32);
  v2 = Json::Reader::parse((const char **)v32, (int)(uintptr_t)(&v44), (Json::Value::Self *)v31, 1);
  if ( sub_190AC60(v46) == 0 )
    sub_1911530((char *)&v44 + *(uint32_t *)(v44 - 12), *(int *)((char *)&v44 + *(uint32_t *)(v44 - 12) + 20) | 4);
  if ( v2 != 0 )
    Json::Value::Construct(self, (const Json::Value::Self *)v31);
  else
    Json::Value::Construct((int)(uintptr_t)(self), nullptr);
  v3 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v24 = v41;
  v26 = v39;
  v28 = v40;
  v25 = v38;
  v27 = v36;
  v29 = v37;
  v23 = (uint32_t *)(v38 + 4);
  if ( v41 > v38 + 4 )
  {
    do
    {
      v5 = 0;
      v6 = *v23 + 12;
      do
      {
        v7 = *(uint32_t *)(v6 + v5);
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v5 += 20;
      }
      while ( v5 != 500 );
      ++v23;
    }
    while ( v24 > (unsigned int)(uintptr_t)(v23) );
  }
  if ( v24 == v25 )
  {
    if ( v26 != v27 )
    {
      v21 = v27;
      do
      {
        v22 = v21 + 12;
        v21 += 20;
        g4_std::string::Destroy(v22);
      }
      while ( v26 != v21 );
    }
  }
  else
  {
    if ( v27 != v29 )
    {
      v8 = v27;
      do
      {
        v9 = v8 + 12;
        v8 += 20;
        g4_std::string::Destroy(v9);
      }
      while ( v29 != v8 );
    }
    if ( v26 != v28 )
    {
      v10 = v28;
      do
      {
        v11 = v10 + 12;
        v10 += 20;
        g4_std::string::Destroy(v11);
      }
      while ( v26 != v10 );
    }
  }
  v12 = v35;
  if ( v35 != nullptr )
  {
    v13 = (void **)v38;
    v14 = v41 + 4;
    if ( v41 + 4 > v38 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v35;
    }
    opDelete(v12);
  }
  v16 = v32[0];
  if ( v32[0] != nullptr )
  {
    v17 = (void **)v33;
    v18 = v34 + 4;
    if ( v34 + 4 > v33 )
    {
      do
      {
        v19 = *v17++;
        opDelete(v19);
      }
      while ( v18 > (unsigned int)(uintptr_t)(v17) );
      v16 = v32[0];
    }
    opDelete(v16);
  }
  Json::Value::Destroy((Json::Value::Self *)v31);
  v44 = (int)(uintptr_t)(&off_20A9E2C);
  v49[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  v46[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v46);
  sub_1908070(v48);
  v46[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v47);
  v44 = (int)(uintptr_t)(&off_20A9DEC);
  *(int *)((char *)&v44 + (uint32_t)*(&off_20A9DEC - 3)) = (int)(uintptr_t)(&off_20A9E00);
  v45 = 0;
  v49[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v49);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::SaveApplistJsonFile  (binary VA: 0x14de4b0)
// Original: gaia::SaveApplistJsonFile
// ----------------------------------------------------------------------------
int gaia::SaveApplistJsonFile(gaia::Self *self, char *a2)
{
  typedef char *_g4_t_v3;
  typedef char *_g4_t_v4;
  typedef int (**_g4_t_v5)(int);
  typedef int _g4_t_v6[7];
  typedef uint8_t _g4_t_v7[8];
  typedef uint8_t _g4_t_v8[68];
  typedef uint32_t _g4_t_v9[29];
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v5)) > _g4_s2 ? (28u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v6)) > _g4_s3 ? (32u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v7)) > _g4_s4 ? (60u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v8)) > _g4_s5 ? (68u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (136u + sizeof(_g4_t_v9)) > _g4_s6 ? (136u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (252u + sizeof(_g4_t_v10)) > _g4_s7 ? (252u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (253u + sizeof(_g4_t_v11)) > _g4_s8 ? (253u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (256u + sizeof(_g4_t_v12)) > _g4_s9 ? (256u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (260u + sizeof(_g4_t_v13)) > _g4_s10 ? (260u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (264u + sizeof(_g4_t_v14)) > _g4_s11 ? (264u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (268u + sizeof(_g4_t_v15)) > _g4_s12 ? (268u + sizeof(_g4_t_v15)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 68u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 136u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 252u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 253u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 256u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 260u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 264u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 268u);

  gaia::MakeFullFilePath((int)(uintptr_t)(&v4), (int)(uintptr_t)(&unk_211A2C8));
  v3 = v4;
  sub_1900810(v9);
  v9[28] = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v9[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v6[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), 0);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v9[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v6);
  sub_19119D0(v9, v6);
  if ( sub_190AE40((int)(uintptr_t)(v6), v3, 20) != 0 )
    sub_1911530((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), 0);
  else
    sub_1911530((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), *(int *)((char *)&v6[4] + (uint32_t)(uintptr_t)(*(v5 - 3))) | 4);
  g4_std::string::Destroy(&v4);
  sub_192C9E0(&v5, self, a2);
  if ( sub_190AC60(v6) == 0 )
    sub_1911530((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), *(int *)((char *)&v6[4] + (uint32_t)(uintptr_t)(*(v5 - 3))) | 4);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v9[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v6[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v6);
  sub_1908070(v8);
  v6[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v7);
  v5 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v6[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v9[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v9);
}

// ----------------------------------------------------------------------------
// Function: gaia::DownloadApplistJson  (binary VA: 0x14de710)
// Original: gaia::DownloadApplistJson
// ----------------------------------------------------------------------------
int gaia::DownloadApplistJson()
{
  Json::Value::Self *v0;
  int v1;
  int Instance;
  typedef uint8_t _g4_t_v4[5];
  typedef gaia::Self *_g4_t_v5;
  typedef char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  typedef uint8_t _g4_t_v8[80];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (15u + sizeof(_g4_t_v4)) > _g4_s0 ? (15u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v8)) > _g4_s4 ? (44u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v8);
  Json::Value::Construct((int)(uintptr_t)(v7), &dword_211A2D0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "asset_name", (int)(uintptr_t)(v4));
  v0 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(v8), (char **)&v4[1]);
  Json::Value::opAssign(v0, (const Json::Value::Self *)v7);
  g4_std::string::Destroy(&v4[1]);
  v1 = 0;
  Json::Value::Destroy((Json::Value::Self *)v7);
  Instance = gaia::Gaia::GetInstance();
  if ( gaia::Gaia_Iris::GetAsset(*(gaia::Gaia_Iris::Self **)(Instance + 584), (gaia::GaiaRequest::Self *)v8) == 0 )
  {
    v1 = 1;
    gaia::GaiaRequest::GetResponse((gaia::GaiaRequest::Self *)v8, (void **)&v5, (int *)&v6);
    gaia::SaveApplistJsonFile(v5, v6);
  }
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v8);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GetApplist  (binary VA: 0x14de830)
// Original: gaia::GetApplist
// ----------------------------------------------------------------------------
gaia::Self * gaia::GetApplist(gaia::Self *self)
{
  if ( (uint8_t)gaia::ShouldRedownloadApplist() != 0 )
  {
    if ( (uint8_t)gaia::DownloadApplistJson() != 0 )
    {
      gaia::DownloadApplistEtag();
      gaia::ParseApplistJsonFile(self);
    }
    else
    {
      Json::Value::Construct((int)(uintptr_t)(self), nullptr);
    }
  }
  else
  {
    gaia::ParseApplistJsonFile(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::SaveCurrentTimestamp  (binary VA: 0x14de8b0)
// Original: gaia::SaveCurrentTimestamp
// ----------------------------------------------------------------------------
int gaia::SaveCurrentTimestamp()
{
  int Instance;
  int result;
  typedef char *_g4_t_v2;
  typedef int _g4_t_v3;
  typedef char *_g4_t_v4;
  typedef int (**_g4_t_v5)(int);
  typedef int _g4_t_v6[7];
  typedef uint8_t _g4_t_v7[8];
  typedef uint8_t _g4_t_v8[68];
  typedef uint32_t _g4_t_v9[5];
  typedef char _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v3)) > _g4_s1 ? (20u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v4)) > _g4_s2 ? (24u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v6)) > _g4_s4 ? (32u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v7)) > _g4_s5 ? (60u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v8)) > _g4_s6 ? (68u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (136u + sizeof(_g4_t_v9)) > _g4_s7 ? (136u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (156u + sizeof(_g4_t_v10)) > _g4_s8 ? (156u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (248u + sizeof(_g4_t_v11)) > _g4_s9 ? (248u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (252u + sizeof(_g4_t_v12)) > _g4_s10 ? (252u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (253u + sizeof(_g4_t_v13)) > _g4_s11 ? (253u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (256u + sizeof(_g4_t_v14)) > _g4_s12 ? (256u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (260u + sizeof(_g4_t_v15)) > _g4_s13 ? (260u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (264u + sizeof(_g4_t_v16)) > _g4_s14 ? (264u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (268u + sizeof(_g4_t_v17)) > _g4_s15 ? (268u + sizeof(_g4_t_v17)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 68u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 136u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 156u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 248u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 252u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 253u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 256u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 260u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 264u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 268u);

  v3 = 0;
  Instance = gaia::Gaia::GetInstance();
  result = gaia::Gaia::getServerTimeStamp(Instance, &v3, 0, 0, 0);
  if ( result == 0 )
  {
    gaia::MakeFullFilePath((int)(uintptr_t)(&v4), (int)(uintptr_t)(&unk_211A2C4));
    v2 = v4;
    sub_1900810(v9);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v9[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v5 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
    *(int *)((char *)&v6[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
    sub_19119D0((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), 0);
    v5 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
    v9[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
    sub_190A6D0(v6);
    sub_19119D0(v9, v6);
    if ( sub_190AE40((int)(uintptr_t)(v6), v2, 48) != 0 )
      sub_1911530((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), 0);
    else
      sub_1911530((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), *(int *)((char *)&v6[4] + (uint32_t)(uintptr_t)(*(v5 - 3))) | 4);
    g4_std::string::Destroy(&v4);
    if ( (v10 & 5) == 0 )
    {
      sub_192D620(&v5, v3);
      if ( sub_190AC60(v6) == 0 )
        sub_1911530((char *)&v6[-1] + (uint32_t)(uintptr_t)(*(v5 - 3)), *(int *)((char *)&v6[4] + (uint32_t)(uintptr_t)(*(v5 - 3))) | 4);
    }
    v5 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
    v9[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
    v6[0] = (int)(uintptr_t)(&off_20A9DA8);
    sub_190AC60(v6);
    sub_1908070(v8);
    v6[0] = (int)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v7);
    v5 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
    *(int *)((char *)&v6[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
    v9[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    return sub_1900B90(v9);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GetLastCheckTimestamp  (binary VA: 0x14deb80)
// Original: gaia::GetLastCheckTimestamp
// ----------------------------------------------------------------------------
char * gaia::GetLastCheckTimestamp()
{
  char *v0;
  typedef char *_g4_t_v2;
  typedef char *_g4_t_v3;
  typedef char *_g4_t_v4;
  typedef char *_g4_t_v5;
  typedef int (**_g4_t_v6)(int);
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[7];
  typedef char _g4_t_v9[8];
  typedef char _g4_t_v10[68];
  typedef uint32_t _g4_t_v11[5];
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v8)) > _g4_s6 ? (32u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v9)) > _g4_s7 ? (60u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v10)) > _g4_s8 ? (68u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v11)) > _g4_s9 ? (136u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (156u + sizeof(_g4_t_v12)) > _g4_s10 ? (156u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (248u + sizeof(_g4_t_v13)) > _g4_s11 ? (248u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (252u + sizeof(_g4_t_v14)) > _g4_s12 ? (252u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (253u + sizeof(_g4_t_v15)) > _g4_s13 ? (253u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (256u + sizeof(_g4_t_v16)) > _g4_s14 ? (256u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (260u + sizeof(_g4_t_v17)) > _g4_s15 ? (260u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (264u + sizeof(_g4_t_v18)) > _g4_s16 ? (264u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (268u + sizeof(_g4_t_v19)) > _g4_s17 ? (268u + sizeof(_g4_t_v19)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 60u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 68u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 136u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 156u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 248u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 252u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 253u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 256u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 260u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 264u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 268u);

  gaia::MakeFullFilePath((int)(uintptr_t)(&v4), (int)(uintptr_t)(&unk_211A2C4));
  v2 = v4;
  sub_1900810(v11);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v6 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
  *(int (***)(int))((char *)&v6 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
  v7 = 0;
  sub_19119D0((char *)&v6 + (uint32_t)(uintptr_t)(*(v6 - 3)), 0);
  v6 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
  v11[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(v8);
  sub_19119D0(v11, v8);
  if ( sub_190AE40((int)(uintptr_t)(v8), v2, 8) != 0 )
    sub_1911530((char *)&v6 + (uint32_t)(uintptr_t)(*(v6 - 3)), 0);
  else
    sub_1911530((char *)&v6 + (uint32_t)(uintptr_t)(*(v6 - 3)), *(int *)((char *)&v6 + (uint32_t)(uintptr_t)(*(v6 - 3)) + 20) | 4);
  g4_std::string::Destroy(&v4);
  v0 = nullptr;
  if ( (v12 & 5) == 0 )
  {
    sub_19153C0(&v6, &v5);
    if ( sub_190AC60(v8) == 0 )
      sub_1911530((char *)&v6 + (uint32_t)(uintptr_t)(*(v6 - 3)), *(int *)((char *)&v6 + (uint32_t)(uintptr_t)(*(v6 - 3)) + 20) | 4);
    v0 = v5;
  }
  v6 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
  v11[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  v3 = v0;
  v8[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v8);
  sub_1908070(v10);
  v8[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v9);
  v6 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
  *(int (***)(int))((char *)&v6 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
  v7 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v11);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::ShouldDetectInstalledApps  (binary VA: 0x14dee00)
// Original: gaia::ShouldDetectInstalledApps
// ----------------------------------------------------------------------------
int gaia::ShouldDetectInstalledApps(const char **self)
{
  char v1; // bp
  int v2;
  int Instance;
  char *v5;
  Json::Value::Self *v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  Json::Value::Construct((int)(uintptr_t)(v9), nullptr);
  v1 = Json::Value::opNe(self, (const Json::Value::Self *)v9);
  Json::Value::Destroy((Json::Value::Self *)v9);
  v2 = 0;
  if ( v1 != 0 )
  {
    v8 = 0;
    Instance = gaia::Gaia::GetInstance();
    if ( gaia::Gaia::getServerTimeStamp(Instance, &v8, 0, 0, 0) == 0 )
    {
      v5 = gaia::GetLastCheckTimestamp();
      v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)self, "check_interval");
      v7 = 86400 * Json::Value::asInt(v6);
      LOBYTE(v7) = (int)(uintptr_t)(&v5[v7]) <= v8;
      return v7;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::ReportInstalledApps  (binary VA: 0x14e1120)
// Original: gaia::ReportInstalledApps
// ----------------------------------------------------------------------------
int gaia::ReportInstalledApps(uint32_t **a1)
{
  char *v1;
  uint32_t *i;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int *v6;
  glotv3::Event::Self *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  bool v12;
  uint32_t *v13;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef glotv3::Event::Self *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef char _g4_t_v31;
  typedef uint32_t **_g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t **_g4_t_v34;
  typedef void *_g4_t_v35[7];
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int (**_g4_t_v41)(int);
  typedef int _g4_t_v42;
  typedef int (**_g4_t_v43)(int);
  typedef uint32_t _g4_t_v44[3];
  typedef uint8_t *_g4_t_v45;
  typedef void *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t _g4_t_v52[29];
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v21)) > _g4_s6 ? (36u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v22)) > _g4_s7 ? (40u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v23)) > _g4_s8 ? (44u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v24)) > _g4_s9 ? (48u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v25)) > _g4_s10 ? (52u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v26)) > _g4_s11 ? (56u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v27)) > _g4_s12 ? (60u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v28)) > _g4_s13 ? (64u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v29)) > _g4_s14 ? (68u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v30)) > _g4_s15 ? (72u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v31)) > _g4_s16 ? (76u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v32)) > _g4_s17 ? (80u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v33)) > _g4_s18 ? (88u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v34)) > _g4_s19 ? (92u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v35)) > _g4_s20 ? (100u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v36)) > _g4_s21 ? (128u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v37)) > _g4_s22 ? (132u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v38)) > _g4_s23 ? (136u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v39)) > _g4_s24 ? (140u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v40)) > _g4_s25 ? (144u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v41)) > _g4_s26 ? (148u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v42)) > _g4_s27 ? (152u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v43)) > _g4_s28 ? (156u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v44)) > _g4_s29 ? (160u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v45)) > _g4_s30 ? (172u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v46)) > _g4_s31 ? (176u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v47)) > _g4_s32 ? (180u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v48)) > _g4_s33 ? (184u + sizeof(_g4_t_v48)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v49)) > _g4_s34 ? (188u + sizeof(_g4_t_v49)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v50)) > _g4_s35 ? (192u + sizeof(_g4_t_v50)) : _g4_s35,
    _g4_s37 = (196u + sizeof(_g4_t_v51)) > _g4_s36 ? (196u + sizeof(_g4_t_v51)) : _g4_s36,
    _g4_s38 = (200u + sizeof(_g4_t_v52)) > _g4_s37 ? (200u + sizeof(_g4_t_v52)) : _g4_s37,
    _g4_s39 = (316u + sizeof(_g4_t_v53)) > _g4_s38 ? (316u + sizeof(_g4_t_v53)) : _g4_s38,
    _g4_s40 = (317u + sizeof(_g4_t_v54)) > _g4_s39 ? (317u + sizeof(_g4_t_v54)) : _g4_s39,
    _g4_s41 = (320u + sizeof(_g4_t_v55)) > _g4_s40 ? (320u + sizeof(_g4_t_v55)) : _g4_s40,
    _g4_s42 = (324u + sizeof(_g4_t_v56)) > _g4_s41 ? (324u + sizeof(_g4_t_v56)) : _g4_s41,
    _g4_s43 = (328u + sizeof(_g4_t_v57)) > _g4_s42 ? (328u + sizeof(_g4_t_v57)) : _g4_s42,
    _g4_s44 = (332u + sizeof(_g4_t_v58)) > _g4_s43 ? (332u + sizeof(_g4_t_v58)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
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
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 188u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 192u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 196u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 200u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 316u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 317u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 320u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 324u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 328u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 332u);

  v1 = nullptr;
  for ( i = *a1; a1 != (uint32_t **)(uintptr_t)(i); ++v1 )
    i = (uint32_t *)*i;
  sub_1900810(v52);
  v52[28] = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v52[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v58 = 0;
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v42 = 0;
  sub_19119D0((char *)&v41 + (uint32_t)(uintptr_t)(*(v41 - 3)), 0);
  v43 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v44[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v44[-1] + (uint32_t)(uintptr_t)(*(v43 - 3)), 0);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v44[1] = 0;
  v44[2] = 0;
  v45 = nullptr;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v41 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v52[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v43 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v44[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v49);
  v50 = 24;
  v44[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v51 = &dword_213B814;
  sub_19119D0(v52, v44);
  v3 = *a1;
  v33 = 0;
  v34 = a1;
  v31 = 0;
  v32 = a1;
  if ( a1 != (uint32_t **)(uintptr_t)(v3) )
  {
    v16 = v1;
    v4 = v3;
    do
    {
      v5 = v4[2];
      g4_std_compat::ostream_write(&v43, ",", 1);
      g4_std::ostream::op_shl_int(&v43, v5);
      v4 = (uint32_t *)*v4;
    }
    while ( a1 != (uint32_t **)(uintptr_t)(v4) );
    v1 = v16;
  }
  v18 = (uint8_t *)(&dword_213B814);
  if ( v1 != nullptr )
  {
    v19 = &dword_213B814;
    if ( v47 != 0 )
    {
      if ( v47 <= (unsigned int)(uintptr_t)(v45) )
      {
        v6 = &v25;
        sub_11A9950(&v25, v46, v45);
      }
      else
      {
        v6 = &v26;
        sub_11A9950(&v26, v46, (uint8_t *)v47);
      }
      g4_std::string::assign_str(&v19, v6);
      g4_std::string::Destroy(v6);
    }
    else
    {
      g4_std::string::assign_str(&v19, &v51);
    }
    if ( *(v19 - 3) == 0 )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v20, &v19, 1, -1);
    v21 = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(&v21, *(uint32_t *)(v20 - 12) + 1);
    g4_std::string::append((int)(uintptr_t)(&v21), "[", 1u);
    g4_std::string::append_str(&v21, &v20);
    g4_std::string::construct_copy(&v22, &v21);
    g4_std::string::append((int)(uintptr_t)(&v22), "]", 1u);
    g4_std::string::assign_str(&v18, &v22);
    g4_std::string::Destroy(&v22);
    g4_std::string::Destroy(&v21);
    g4_std::string::Destroy(&v20);
    g4_std::string::Destroy(&v19);
  }
  v7 = (glotv3::Event::Self *)opNew(0xB4u);
  glotv3::Event::Construct(v7, false);
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_2095FD8);
  glotv3::Event::setIsAutomatic(v7, true);
  glotv3::Event::setEventType(v7, &reinterpret_cast<G4Elf32Sym *>(stru_2DAC4)->st_other);
  v35[2] = &dword_0 + 2;
  v35[6] = nullptr;
  v36 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v37 = 2048;
  v39 = opNew(1u);
  v40 = v39;
  v15 = v37;
  v8 = (uint32_t *)(malloc(v37 + 12));
  v8[1] = 0;
  *v8 = v15;
  v8[2] = (uint32_t)(uintptr_t)(v36);
  v36 = v8;
  v35[0] = v1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "app_count", (int)(uintptr_t)(&v17) + 1);
  glotv3::Event::addKeyPair((int)(uintptr_t)(v7), (uint8_t **)&v24, (glotv3::EventValue::Self *)v35);
  g4_std::string::Destroy(&v24);
  glotv3::EventValue::Destroy(v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "app_list", (int)(uintptr_t)(&v17));
  glotv3::Event::addKeyPair((int)(uintptr_t)(v7), (uint8_t **)&v23, &v18);
  g4_std::string::Destroy(&v23);
  v9 = (uint32_t *)opNew(0x10u);
  v9[1] = 1;
  v9[2] = 1;
  *v9 = ((uint32_t)(uintptr_t)&off_2095FE8);
  v9[3] = (uint32_t)(uintptr_t)(v7);
  v30 = v9;
  ++v9[1];
  v29 = v7;
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v27);
  v10 = v27;
  if ( v27 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v10 = v27;
  }
  glotv3::TrackingManager::AddEvent(v10, &v29, 0);
  v11 = v28;
  if ( v28 != nullptr )
  {
    v12 = v28[1]-- == 1;
    if ( v12 )
    {
      G4_VCALL<void>(v11, 8);
      v12 = v11[2]-- == 1;
      if ( v12 )
        G4_VCALL<void>(v11, 12);
    }
  }
  v13 = v30;
  if ( v30 != nullptr )
  {
    v12 = v30[1]-- == 1;
    if ( v12 )
    {
      G4_VCALL<void>(v13, 8);
      v12 = v13[2]-- == 1;
      if ( v12 )
        G4_VCALL<void>(v13, 12);
    }
  }
  v12 = v9[1]-- == 1;
  if ( v12 )
  {
    G4_VCALL<void>(v9, 8);
    v12 = v9[2]-- == 1;
    if ( v12 )
      G4_VCALL<void>(v9, 12);
  }
  g4_std::string::Destroy(&v18);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v52[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v43 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v44[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v51);
  v44[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v49);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v43 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v44[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v41 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v42 = 0;
  v52[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v52);
}

// ----------------------------------------------------------------------------
// Function: gaia::JsonToBundleMap  (binary VA: 0x14e6ce0)
// Original: gaia::JsonToBundleMap
// ----------------------------------------------------------------------------
gaia::Self * gaia::JsonToBundleMap(gaia::Self *self, const Json::Value::Self *a2)
{
  unsigned int v2;
  const Json::Value::Self *v3;
  const Json::Value::Self *v4;
  int v5;
  Json::Value::Self *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef char _g4_t_v13[4];
  typedef uint32_t _g4_t_v14[2];
  typedef char _g4_t_v15[4];
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v2 = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  v3 = (const Json::Value::Self *)Json::Value::opIndex(a2, "apps");
  Json::Value::Construct((Json::Value::Self *)v16, v3);
  if ( Json::Value::size((Json::Value::Self *)v16) != 0 )
  {
    do
    {
      v4 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v16, v2);
      Json::Value::Construct((Json::Value::Self *)v17, v4);
      v5 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v17, "identifier"));
      Json::Value::asString((Json::Value::Self *)v13, v5);
      v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "ecomm_id");
      v7 = Json::Value::asInt(v6);
      v8 = *((uint32_t **)self + 2);
      v9 = (uint32_t *)((char *)self + 4);
      if ( v8 == nullptr )
        goto LABEL_9;
      do
      {
        while ( v7 <= v8[4] )
        {
          v9 = v8;
          v8 = (uint32_t *)v8[2];
          if ( v8 == nullptr )
            goto LABEL_7;
        }
        v8 = (uint32_t *)v8[3];
      }
      while ( v8 != nullptr );
LABEL_7:
      if ( (uint32_t *)((char *)self + 4) == v9 || v7 < v9[4] )
      {
LABEL_9:
        v14[1] = v7;
        v14[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::construct_copy(v15, v14);
        g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert_unique(&v12);
        v11 = v12;
        g4_std::string::Destroy(v15);
        g4_std::string::Destroy(v14);
        v9 = v11;
      }
      ++v2;
      g4_std::string::assign_str(v9 + 5, v13);
      g4_std::string::Destroy(v13);
      Json::Value::Destroy((Json::Value::Self *)v17);
    }
    while ( v2 < Json::Value::size((Json::Value::Self *)v16) );
  }
  Json::Value::Destroy((Json::Value::Self *)v16);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GetAppsToCheckFor  (binary VA: 0x14e6ed0)
// Original: gaia::GetAppsToCheckFor
// ----------------------------------------------------------------------------
gaia::Self * gaia::GetAppsToCheckFor(gaia::Self *self, const Json::Value::Self *a2)
{
  gaia::JsonToBundleMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmActionPointerCompare  (binary VA: 0x14eaf30)
// Original: gaia::CrmActionPointerCompare
// ----------------------------------------------------------------------------
bool gaia::CrmActionPointerCompare(gaia::CrmAction::Self **a1, gaia::CrmAction::Self **a2)
{
  gaia::CrmAction::Self *v2;
  gaia::CrmAction::Self *v3;
  int Priority;

  v2 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = const gaia::CrmA"
      "ction, typename boost::detail::sp_dereference<T>::type = const gaia::CrmAction&]",
      "px != 0");
    v2 = *a2;
  }
  v3 = *a1;
  if ( *a1 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = const gaia::CrmA"
      "ction, typename boost::detail::sp_dereference<T>::type = const gaia::CrmAction&]",
      "px != 0");
    v3 = *a1;
  }
  Priority = gaia::CrmAction::GetPriority(v3);
  return Priority < gaia::CrmAction::GetPriority(v2);
}


