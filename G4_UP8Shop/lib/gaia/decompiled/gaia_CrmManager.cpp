#include "Core/Utils/DecompTypes.h"
#include "gaia_CrmManager.h"

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AStoreItemEventCallback  (binary VA: 0x14ca340)
// Original: gaia::CrmManager::AStoreItemEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AStoreItemEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  typedef void (*_g4_t_v4)(int, int, uint32_t, uint8_t *);
  typedef uint8_t _g4_t_v5[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  result = 0;
  if ( a1 != 0 )
  {
    v4 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v5, a3);
    v4(a1, 11, a2, v5);
    Json::Value::Destroy((Json::Value::Self *)v5);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::GetSaveFolderPath  (binary VA: 0x14cc280)
// Original: gaia::CrmManager::GetSaveFolderPath
// ----------------------------------------------------------------------------
int gaia::CrmManager::GetSaveFolderPath(int a1, int a2, int a3)
{
  getSD_path(a1);
  g4_std::string::append(a1, "/", 1u);
  g4_std::string::append_str(a1, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchOfflineWS  (binary VA: 0x14cc2f0)
// Original: gaia::CrmManager::LaunchOfflineWS
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchOfflineWS(int a1, uint32_t *a2)
{
  dword_20DDE30 = 1;
  androidShowOfflineWS(a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchInterstitial  (binary VA: 0x14cc320)
// Original: gaia::CrmManager::LaunchInterstitial
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchInterstitial()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::IsOfflineWSAvailable  (binary VA: 0x14cc330)
// Original: gaia::CrmManager::IsOfflineWSAvailable
// ----------------------------------------------------------------------------
bool gaia::CrmManager::IsOfflineWSAvailable(int a1, uint32_t *a2)
{
  return androidIsOfflineWSDownloaded(a2) != 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::IsWSOnScreen  (binary VA: 0x14cc360)
// Original: gaia::CrmManager::IsWSOnScreen
// ----------------------------------------------------------------------------
bool gaia::CrmManager::IsWSOnScreen()
{
  uint32_t *v1;
  uint32_t *v2;

  if ( androidIsWSActive() != 0 )
    return true;
  v1 = sub_B7A8A0();
  if ( G4_VCALL<int>(v1, 116) == 1 )
    return true;
  v2 = sub_B7A8A0();
  return G4_VCALL<int>(v2, 112) == 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::DownloadOfflineWS  (binary VA: 0x14cc3d0)
// Original: gaia::CrmManager::DownloadOfflineWS
// ----------------------------------------------------------------------------
int gaia::CrmManager::DownloadOfflineWS(int a1, uint32_t *a2)
{
  androidDownloadOfflineWS(a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::DeleteOfflineWS  (binary VA: 0x14cc400)
// Original: gaia::CrmManager::DeleteOfflineWS
// ----------------------------------------------------------------------------
int gaia::CrmManager::DeleteOfflineWS(int a1, uint32_t *a2)
{
  androidDeleteOfflineWS(a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::SerializePopupList  (binary VA: 0x14cc430)
// Original: gaia::CrmManager::SerializePopupList
// ----------------------------------------------------------------------------
int gaia::CrmManager::SerializePopupList(gaia::CrmManager::Self *self)
{
  void *v1;
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  void *v6;
  typedef uint8_t _g4_t_v8[7];
  typedef int _g4_t_v9;
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
    _g4_s0 = 352u,
    _g4_s1 = (1u + sizeof(_g4_t_v8)) > _g4_s0 ? (1u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v12)) > _g4_s4 ? (44u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v13)) > _g4_s5 ? (52u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (120u + sizeof(_g4_t_v14)) > _g4_s6 ? (120u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (236u + sizeof(_g4_t_v15)) > _g4_s7 ? (236u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (237u + sizeof(_g4_t_v16)) > _g4_s8 ? (237u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (240u + sizeof(_g4_t_v17)) > _g4_s9 ? (240u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (244u + sizeof(_g4_t_v18)) > _g4_s10 ? (244u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (248u + sizeof(_g4_t_v19)) > _g4_s11 ? (248u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (252u + sizeof(_g4_t_v20)) > _g4_s12 ? (252u + sizeof(_g4_t_v20)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 1u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 120u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 236u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 237u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 240u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 244u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 248u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 252u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "CRMPopup.dat", (int)(uintptr_t)(v8));
  gaia::CrmManager::GetSaveFolderPath((int)(uintptr_t)(&v8[3]), (int)(uintptr_t)(self), (int)(uintptr_t)(&v9));
  v1 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
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
  if ( sub_190AE40((int)(uintptr_t)(v11), *(char **)&v8[3], 16) != 0 )
    sub_1911530((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  else
    sub_1911530((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), *(int *)((char *)&v11[4] + (uint32_t)(uintptr_t)(*(v10 - 3))) | 4);
  if ( (uint8_t)sub_1907FD0(v13) != 0 )
  {
    v2 = *((uint32_t *)self + 23);
    if ( (unsigned int)(*((uint32_t *)self + 24) - v2) >> 2 != 0 )
    {
      v3 = 0;
      do
      {
        v4 = *(uint32_t *)(v2 + 4 * v3++);
        v5 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v10, v4, *(uint32_t *)(v4 - 12)));
        g4_std_compat::ostream_write(v5, &a0[1], 1);
        v2 = *((uint32_t *)self + 23);
      }
      while ( v3 < (*((uint32_t *)self + 24) - v2) >> 2 );
    }
    if ( sub_190AC60(v11) == 0 )
      sub_1911530((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), *(int *)((char *)&v11[4] + (uint32_t)(uintptr_t)(*(v10 - 3))) | 4);
  }
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
  v6 = (void *)(*(uint32_t *)&v8[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v8[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::IsPointcutActionPending  (binary VA: 0x14cc760)
// Original: gaia::CrmManager::IsPointcutActionPending
// ----------------------------------------------------------------------------
int gaia::CrmManager::IsPointcutActionPending(gaia::CrmManager::Self *self)
{
  gaia::CrmAction::Self **v1;
  char i;
  uint8_t v4;

  glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)self + 40));
  v1 = *((gaia::CrmAction::Self ***)self + 17);
  for ( i = 0; v1 != *((gaia::CrmAction::Self ***)self + 18); v1 += 2 )
  {
    if ( *v1 != nullptr )
    {
      i = gaia::CrmAction::IsInPendingState(*v1);
      if ( i != 0 )
        goto LABEL_7;
    }
    else
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      i = gaia::CrmAction::IsInPendingState(*v1);
      if ( i != 0 )
      {
LABEL_7:
        i = 1;
        break;
      }
    }
  }
  v4 = i;
  glwebtools::Mutex::Unlock((gaia::CrmManager::Self *)((char *)self + 40));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::IsPopupAvailable  (binary VA: 0x14cc810)
// Original: gaia::CrmManager::IsPopupAvailable
// ----------------------------------------------------------------------------
int gaia::CrmManager::IsPopupAvailable(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  Json::Value::Self *v2;
  int v3;
  int v5;
  uint32_t v6[4];

  v2 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPopupId);
  v3 = 0;
  if ( !Json::Value::isNull(v2) && Json::Value::type(v2) == 4 )
  {
    Json::Value::asString((Json::Value::Self *)v6, (int)(uintptr_t)(v2));
    LOBYTE(v5) = gaia::CrmManager::IsOfflineWSAvailable((int)(uintptr_t)(self), v6);
    v3 = v5;
    g4_std::string::Destroy(v6);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchPopup  (binary VA: 0x14cc8b0)
// Original: gaia::CrmManager::LaunchPopup
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchPopup(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  Json::Value::Self *v2;
  int v3;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  uint8_t v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  void *v16;
  void (*v17)(gaia::CrmManager::Self *, int, int, uint8_t *);
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[4];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v22)) > _g4_s4 ? (12u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v24)) > _g4_s6 ? (28u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v25)) > _g4_s7 ? (32u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v26)) > _g4_s8 ? (48u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v27)) > _g4_s9 ? (64u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v28)) > _g4_s10 ? (80u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v29)) > _g4_s11 ? (96u + sizeof(_g4_t_v29)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);

  v2 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPopupId);
  v3 = -34;
  if ( !Json::Value::isNull(v2) && Json::Value::type(v2) == 4 )
  {
    Json::Value::asString((Json::Value::Self *)&v23, (int)(uintptr_t)(v2));
    if ( !gaia::CrmManager::IsOfflineWSAvailable((int)(uintptr_t)(self), (uint32_t *)(&v23)) || gaia::CrmManager::IsWSOnScreen() )
    {
      v3 = -36;
    }
    else
    {
      Json::Value::Construct((int)(uintptr_t)(v25), nullptr);
      Json::Value::Construct((int)(uintptr_t)(v26), (char *)&loc_6 + 1);
      v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v25, &gaia::k_szData);
      Json::Value::opAssign(v5, (const Json::Value::Self *)v26);
      Json::Value::Destroy((Json::Value::Self *)v26);
      v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v25, &gaia::k_szData);
      v18 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPopupId);
      v7 = (Json::Value::Self *)Json::Value::opIndex(v6, (char **)&gaia::k_szPopupId);
      Json::Value::opAssign(v7, v18);
      v19 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
      v8 = (Json::Value::Self *)Json::Value::opIndex(v6, &gaia::k_szPointcutId);
      Json::Value::opAssign(v8, v19);
      v20 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutArguments);
      v9 = (Json::Value::Self *)Json::Value::opIndex(v6, &gaia::k_szPointcutArguments);
      Json::Value::opAssign(v9, v20);
      v21 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPriority);
      v10 = (Json::Value::Self *)Json::Value::opIndex(v6, (char **)&gaia::k_szPriority);
      Json::Value::opAssign(v10, v21);
      v22 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szCrmActionType);
      v11 = (Json::Value::Self *)Json::Value::opIndex(v6, (char **)&gaia::k_szCrmActionType);
      Json::Value::opAssign(v11, v22);
      v12 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szOffline);
      v13 = Json::Value::asBool(v12);
      Json::Value::Construct((Json::Value::Self *)v27, v13);
      v14 = (Json::Value::Self *)Json::Value::opIndex(v6, (char **)&gaia::k_szOffline);
      Json::Value::opAssign(v14, (const Json::Value::Self *)v27);
      Json::Value::Destroy((Json::Value::Self *)v27);
      Json::Value::Construct((Json::Value::Self *)v28, 51853);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v25, &gaia::k_szType);
      Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
      Json::Value::Destroy((Json::Value::Self *)v28);
      g4_std::string::assign_str((char *)self + 36, &v23);
      v16 = Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
      Json::Value::asString((Json::Value::Self *)v24, (int)(uintptr_t)(v16));
      g4_std::string::assign_str((char *)self + 32, v24);
      g4_std::string::Destroy(v24);
      v17 = *(void (**)(gaia::CrmManager::Self *, int, int, uint8_t *))(*(uint32_t *)self + 8);
      Json::Value::Construct((Json::Value::Self *)v29, (const Json::Value::Self *)v25);
      v17(self, 12, 1, v29);
      Json::Value::Destroy((Json::Value::Self *)v29);
      v3 = gaia::CrmManager::LaunchOfflineWS((int)(uintptr_t)(self), &v23);
      Json::Value::Destroy((Json::Value::Self *)v25);
    }
    g4_std::string::Destroy(&v23);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchXpromo  (binary VA: 0x14ccc80)
// Original: gaia::CrmManager::LaunchXpromo
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchXpromo(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  const Json::Value::Self *v2;
  int v3;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  const Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  void *v11;
  void (*v12)(gaia::CrmManager::Self *, int, int, uint8_t *);
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v2 = (const Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szTags);
  v3 = -34;
  if ( !Json::Value::isNull(v2) && Json::Value::type(v2) == 4 )
  {
    LOWORD(v3) = -36;
    Json::Value::asString((Json::Value::Self *)&v13, (int)(uintptr_t)(v2));
    if ( gaia::CrmManager::IsOfflineWSAvailable((int)(uintptr_t)(self), (uint32_t *)(&v13)) )
    {
      Json::Value::Construct((int)(uintptr_t)(v15), nullptr);
      v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szData);
      v6 = (Json::Value::Self *)Json::Value::opIndex(v5, (char **)&gaia::k_szPopupId);
      Json::Value::opAssign(v6, v2);
      v7 = (const Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
      v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szData);
      v9 = (Json::Value::Self *)Json::Value::opIndex(v8, &gaia::k_szPointcutId);
      Json::Value::opAssign(v9, v7);
      Json::Value::Construct((Json::Value::Self *)v16, 51853);
      v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szType);
      Json::Value::opAssign(v10, (const Json::Value::Self *)v16);
      Json::Value::Destroy((Json::Value::Self *)v16);
      g4_std::string::assign_str((char *)self + 36, &v13);
      v11 = Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
      Json::Value::asString((Json::Value::Self *)v14, (int)(uintptr_t)(v11));
      g4_std::string::assign_str((char *)self + 32, v14);
      g4_std::string::Destroy(v14);
      v12 = *(void (**)(gaia::CrmManager::Self *, int, int, uint8_t *))(*(uint32_t *)self + 8);
      Json::Value::Construct((Json::Value::Self *)v17, (const Json::Value::Self *)v15);
      v12(self, 12, 1, v17);
      Json::Value::Destroy((Json::Value::Self *)v17);
      v3 = gaia::CrmManager::LaunchOfflineWS((int)(uintptr_t)(self), &v13);
      Json::Value::Destroy((Json::Value::Self *)v15);
    }
    g4_std::string::Destroy(&v13);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchInterstitialAd  (binary VA: 0x14cced0)
// Original: gaia::CrmManager::LaunchInterstitialAd
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchInterstitialAd(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  const Json::Value::Self *v2;
  int v3;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  const Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  void *v11;
  void (*v12)(gaia::CrmManager::Self *, int, int, uint8_t *);
  typedef uint8_t _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v2 = (const Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szTags);
  v3 = -34;
  if ( !Json::Value::isNull(v2) && Json::Value::type(v2) == 4 )
  {
    Json::Value::asString((Json::Value::Self *)v13, (int)(uintptr_t)(v2));
    Json::Value::Construct((int)(uintptr_t)(v15), nullptr);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szData);
    v6 = (Json::Value::Self *)Json::Value::opIndex(v5, (char **)&gaia::k_szPopupId);
    Json::Value::opAssign(v6, v2);
    v7 = (const Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
    v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szData);
    v9 = (Json::Value::Self *)Json::Value::opIndex(v8, &gaia::k_szPointcutId);
    Json::Value::opAssign(v9, v7);
    Json::Value::Construct((Json::Value::Self *)v16, 51853);
    v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szType);
    Json::Value::opAssign(v10, (const Json::Value::Self *)v16);
    Json::Value::Destroy((Json::Value::Self *)v16);
    g4_std::string::assign_str((char *)self + 36, v13);
    v11 = Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
    Json::Value::asString((Json::Value::Self *)v14, (int)(uintptr_t)(v11));
    g4_std::string::assign_str((char *)self + 32, v14);
    g4_std::string::Destroy(v14);
    v12 = *(void (**)(gaia::CrmManager::Self *, int, int, uint8_t *))(*(uint32_t *)self + 8);
    Json::Value::Construct((Json::Value::Self *)v17, (const Json::Value::Self *)v15);
    v12(self, 12, 1, v17);
    Json::Value::Destroy((Json::Value::Self *)v17);
    v3 = gaia::CrmManager::LaunchInterstitial();
    Json::Value::Destroy((Json::Value::Self *)v15);
    g4_std::string::Destroy(v13);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::DeletePopupList  (binary VA: 0x14cd100)
// Original: gaia::CrmManager::DeletePopupList
// ----------------------------------------------------------------------------
int gaia::CrmManager::DeletePopupList(gaia::CrmManager::Self *self, const std::vector<std::string> *a2)
{
  int v2;
  unsigned int v3;
  uint32_t *v5;

  v2 = *(uint32_t *)a2;
  if ( (unsigned int)(*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2 != 0 )
  {
    v3 = 0;
    do
    {
      v5 = (uint32_t *)(v2 + 4 * v3++);
      gaia::CrmManager::DeleteOfflineWS((int)(uintptr_t)(self), v5);
      v2 = *(uint32_t *)a2;
    }
    while ( v3 < (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2 );
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::GetGameSpecificValues  (binary VA: 0x14cd160)
// Original: gaia::CrmManager::GetGameSpecificValues
// ----------------------------------------------------------------------------
char * gaia::CrmManager::GetGameSpecificValues(gaia::CrmManager::Self *self)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::CrmManager::m_initializationMutex);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::CrmManager::m_initializationMutex);
  return (char *)self + 104;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::CheckIfTagsHaveChanged  (binary VA: 0x14cd1b0)
// Original: gaia::CrmManager::CheckIfTagsHaveChanged
// ----------------------------------------------------------------------------
int gaia::CrmManager::CheckIfTagsHaveChanged(int a1, const void **a2)
{
  const void *v2;
  const void *v3;
  size_t v4;
  int result;

  if ( byte_2119E50 != 0 || _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2119E50) == 0 )
  {
    v2 = (const void *)dword_2119E58;
    v3 = *a2;
    v4 = *(uint32_t *)(dword_2119E58 - 12);
    if ( v4 == *((uint32_t *)*a2 - 3) )
      goto LABEL_6;
LABEL_3:
    g4_std::string::assign_str(&dword_2119E58, a2);
    return 1;
  }
  dword_2119E58 = (int)(uintptr_t)(&dword_213B814);
  _cxa_guard_release((g4_cxa_guard_t *)&byte_2119E50);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119E58, &unk_20D1280);
  v2 = (const void *)dword_2119E58;
  v3 = *a2;
  v4 = *(uint32_t *)(dword_2119E58 - 12);
  if ( v4 != *((uint32_t *)*a2 - 3) )
    goto LABEL_3;
LABEL_6:
  result = memcmp(v2, v3, v4);
  if ( result != 0 )
    goto LABEL_3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::ClearActionList  (binary VA: 0x14cd2a0)
// Original: gaia::CrmManager::ClearActionList
// ----------------------------------------------------------------------------
int gaia::CrmManager::ClearActionList(gaia::CrmManager::Self *self)
{
  int v1;
  int v2;
  int v3;
  uint32_t *v4;
  bool v5;
  int v7;
  int v8;

  glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)self + 40));
  v1 = *((uint32_t *)self + 17);
  v8 = *((uint32_t *)self + 18);
  if ( v1 != v8 )
  {
    v2 = *((uint32_t *)self + 17);
    v3 = v1 + 4;
    do
    {
      while ( 1 )
      {
        v4 = *(uint32_t **)(v3 + v2 - v1);
        if ( v4 != nullptr )
        {
          v5 = v4[1]-- == 1;
          if ( v5 )
          {
            v7 = v3;
            G4_VCALL<void>(v4, 8);
            v5 = v4[2]-- == 1;
            v3 = v7;
            if ( v5 )
              break;
          }
        }
        v2 += 8;
        if ( v8 == v2 )
          goto LABEL_8;
      }
      v2 += 8;
      G4_VCALL<void>(v4, 12);
      v3 = v7;
    }
    while ( v8 != v2 );
  }
LABEL_8:
  *((uint32_t *)self + 18) = v1;
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::CrmManager::Self *)((char *)self + 40)));
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::VerifyPointcut  (binary VA: 0x14cd360)
// Original: gaia::CrmManager::VerifyPointcut
// ----------------------------------------------------------------------------
int gaia::CrmManager::VerifyPointcut(int a1, const void **a2, Json::Value::Self *a3)
{
  size_t v3;
  size_t n;
  size_t v5;
  int v6;
  Json::Value::Self *v8;

  v3 = *((uint32_t *)*a2 - 3);
  n = v3;
  v5 = *((uint32_t *)gaia::k_szEnterSection - 3);
  if ( v5 <= v3 )
    n = *((uint32_t *)gaia::k_szEnterSection - 3);
  v6 = 0;
  if ( memcmp(*a2, gaia::k_szEnterSection, n) == 0 && v3 == v5 )
  {
    v6 = -37;
    v8 = (Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szSection);
    if ( !Json::Value::isNull(v8) && Json::Value::type(v8) == 4 )
      return 0;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::InitPointcutList  (binary VA: 0x14cd420)
// Original: gaia::CrmManager::InitPointcutList
// ----------------------------------------------------------------------------
unsigned int gaia::CrmManager::InitPointcutList(gaia::CrmManager::Self *self)
{
  char v1;
  void *v2;
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
  typedef char _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34[5];
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (55u + sizeof(_g4_t_v32)) > _g4_s9 ? (55u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v33)) > _g4_s10 ? (60u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v34)) > _g4_s11 ? (64u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v35)) > _g4_s12 ? (84u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v36)) > _g4_s13 ? (100u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v37)) > _g4_s14 ? (104u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v38)) > _g4_s15 ? (112u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v39)) > _g4_s16 ? (120u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v40)) > _g4_s17 ? (124u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v41)) > _g4_s18 ? (128u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v42)) > _g4_s19 ? (132u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v43)) > _g4_s20 ? (140u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v44)) > _g4_s21 ? (144u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v45)) > _g4_s22 ? (168u + sizeof(_g4_t_v45)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 55u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 144u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 168u);

  Json::Reader::Construct((Json::Reader::Self *)v34);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v33),
    "{\"pointcut_definitions\":{ \"launch\":[{\"p\":\"first_time\"}, {\"p\":\"resumed\"}],\"pause\":[],\"enter_section\":"
    "[{\"p\":\"section\"}],\"purchase\":[{\"p\":\"item\"}, {\"p\":\"quantity\"}, {\"p\":\"store\"}],\"level_up\":[{\"p\":"
    "\"level\"}],\"start_mission\":[{\"p\":\"mission\"}],\"abort_mission\":[{\"p\":\"mission\"}],\"finish_mission\":[{\"p"
    "\":\"mission\"},{\"p\":\"success\"}],\"unlock_achievement\":[{\"p\":\"trophy\"},{\"p\":\"first_time\"}],\"resource_e"
    "mpty\":[{\"p\":\"item\"}]}}",
    (int)(uintptr_t)(&v32));
  v1 = Json::Reader::parse((const char **)v34, (int)(uintptr_t)(&v33), (gaia::CrmManager::Self *)((char *)self + 48), 1);
  v2 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    v23 = v1;
    g4_std::string::Rep::M_destroy(v2);
    v1 = v23;
  }
  v26 = v1 == 0 ? 0xFFFFFFDE : 0;
  v3 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v30 = v42;
  v28 = v41;
  v29 = v38;
  v25 = v43;
  v27 = v40;
  v31 = v39;
  v24 = (uint32_t *)(v40 + 4);
  if ( v43 > v40 + 4 )
  {
    do
    {
      v5 = 0;
      v6 = *v24 + 12;
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
      ++v24;
    }
    while ( v25 > (unsigned int)(uintptr_t)(v24) );
  }
  if ( v25 == v27 )
  {
    if ( v28 != v29 )
    {
      v21 = v29;
      do
      {
        v22 = v21 + 12;
        v21 += 20;
        g4_std::string::Destroy(v22);
      }
      while ( v28 != v21 );
    }
  }
  else
  {
    if ( v29 != v31 )
    {
      v8 = v29;
      do
      {
        v9 = v8 + 12;
        v8 += 20;
        g4_std::string::Destroy(v9);
      }
      while ( v31 != v8 );
    }
    if ( v28 != v30 )
    {
      v10 = v30;
      do
      {
        v11 = v10 + 12;
        v10 += 20;
        g4_std::string::Destroy(v11);
      }
      while ( v28 != v10 );
    }
  }
  v12 = v37;
  if ( v37 != nullptr )
  {
    v13 = (void **)v40;
    v14 = v43 + 4;
    if ( v43 + 4 > v40 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v37;
    }
    opDelete(v12);
  }
  v16 = v34[0];
  if ( v34[0] != nullptr )
  {
    v17 = (void **)v35;
    v18 = v36 + 4;
    if ( v36 + 4 > v35 )
    {
      do
      {
        v19 = *v17++;
        opDelete(v19);
      }
      while ( v18 > (unsigned int)(uintptr_t)(v17) );
      v16 = v34[0];
    }
    opDelete(v16);
  }
  return v26;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::popupTrackingType  (binary VA: 0x14cd710)
// Original: gaia::CrmManager::popupTrackingType
// ----------------------------------------------------------------------------
int gaia::CrmManager::popupTrackingType(Json::Value::Self *a1)
{
  Json::Value::Self *v1;
  int v2;
  int v3;

  v1 = (Json::Value::Self *)Json::Value::opIndex(a1, (char **)&gaia::k_szCrmActionType);
  v2 = Json::Value::asInt(v1);
  v3 = 176682;
  if ( v2 != 6 )
  {
    LOBYTE(v3) = 43;
    if ( v2 != 7 && v2 != 8 )
      return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::UpdateActionList  (binary VA: 0x14cd770)
// Original: gaia::CrmManager::UpdateActionList
// ----------------------------------------------------------------------------
int gaia::CrmManager::UpdateActionList(gaia::CrmManager::Self *self)
{
  gaia::CrmAction::Self **i;
  gaia::CrmAction::Self *v2;

  glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)self + 40));
  for ( i = *((gaia::CrmAction::Self ***)self + 17);
        i != *((gaia::CrmAction::Self ***)self + 18) && (uint8_t)gaia::CrmManager::s_IsInitialized[0] != 0;
        i += 2 )
  {
    v2 = *i;
    if ( *i == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v2 = *i;
    }
    gaia::CrmAction::Update(v2);
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::CrmManager::Self *)((char *)self + 40)));
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::Update  (binary VA: 0x14cd830)
// Original: gaia::CrmManager::Update
// ----------------------------------------------------------------------------
uint8_t * gaia::CrmManager::Update(gaia::CrmManager::Self *self)
{
  uint8_t *result;

  result = (uint8_t *)(gaia::CrmManager::s_IsInitialized);
  if ( gaia::CrmManager::s_IsInitialized[0] != 0 )
    return (uint8_t *)gaia::CrmManager::UpdateActionList(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::IsInitialized  (binary VA: 0x14cd870)
// Original: gaia::CrmManager::IsInitialized
// ----------------------------------------------------------------------------
int gaia::CrmManager::IsInitialized()
{
  return gaia::CrmManager::s_IsInitialized[0];
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::SetOnlineStatus  (binary VA: 0x14cd890)
// Original: gaia::CrmManager::SetOnlineStatus
// ----------------------------------------------------------------------------
gaia::CrmManager::Self * gaia::CrmManager::SetOnlineStatus(gaia::CrmManager::Self *self, bool a2)
{
  *((uint8_t *)self + 144) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::GetOnlineStatus  (binary VA: 0x14cd8b0)
// Original: gaia::CrmManager::GetOnlineStatus
// ----------------------------------------------------------------------------
int gaia::CrmManager::GetOnlineStatus(gaia::CrmManager::Self *self)
{
  return *((uint8_t *)self + 144);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::SerializeActions  (binary VA: 0x14cde70)
// Original: gaia::CrmManager::SerializeActions
// ----------------------------------------------------------------------------
int gaia::CrmManager::SerializeActions(long double a1, gaia::CrmManager::Self *self)
{
  Json::Value::Self *v2;
  Json::Value::Self *v3;
  int *i;
  int v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  uint32_t *j;
  Json::Value::Self *v9;
  gaia::CrmFatigueGroup::Self *v10;
  char v11;
  int v12;
  int v13;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[5];
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[7];
  typedef char _g4_t_v26[8];
  typedef uint8_t _g4_t_v27[68];
  typedef uint32_t _g4_t_v28[29];
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v16)) > _g4_s1 ? (19u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v20)) > _g4_s5 ? (60u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v21)) > _g4_s6 ? (76u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v22)) > _g4_s7 ? (92u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v23)) > _g4_s8 ? (108u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v24)) > _g4_s9 ? (124u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v25)) > _g4_s10 ? (128u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v26)) > _g4_s11 ? (156u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v27)) > _g4_s12 ? (164u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (232u + sizeof(_g4_t_v28)) > _g4_s13 ? (232u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (348u + sizeof(_g4_t_v29)) > _g4_s14 ? (348u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (349u + sizeof(_g4_t_v30)) > _g4_s15 ? (349u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (352u + sizeof(_g4_t_v31)) > _g4_s16 ? (352u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (356u + sizeof(_g4_t_v32)) > _g4_s17 ? (356u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (360u + sizeof(_g4_t_v33)) > _g4_s18 ? (360u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (364u + sizeof(_g4_t_v34)) > _g4_s19 ? (364u + sizeof(_g4_t_v34)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 19u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 124u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 128u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 156u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 164u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 232u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 348u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 349u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 352u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 356u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 360u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 364u);

  Json::Value::Construct((int)(uintptr_t)(v18), nullptr);
  Json::Value::Construct((int)(uintptr_t)(v19), &loc_6);
  v2 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, &gaia::k_szData);
  Json::Value::opAssign(v2, (const Json::Value::Self *)v19);
  Json::Value::Destroy((Json::Value::Self *)v19);
  Json::Value::Construct((int)(uintptr_t)(v20), (uint32_t *)self + 7);
  v3 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, (char **)&gaia::k_szTags);
  Json::Value::opAssign(v3, (const Json::Value::Self *)v20);
  Json::Value::Destroy((Json::Value::Self *)v20);
  glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)self + 40));
  for ( i = *((int **)self + 17); *((int **)self + 18) != i; i += 2 )
  {
    v5 = *i;
    if ( *i == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v5 = *i;
    }
    gaia::CrmAction::Serialize((gaia::CrmAction::Self *)v21, v5);
    if ( Json::Value::type((Json::Value::Self *)v21) != 0 )
    {
      v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, &gaia::k_szData);
      Json::Value::append(v6, (const Json::Value::Self *)v21);
    }
    Json::Value::Destroy((Json::Value::Self *)v21);
  }
  glwebtools::Mutex::Unlock((gaia::CrmManager::Self *)((char *)self + 40));
  Json::Value::Construct((int)(uintptr_t)(v22), &loc_6);
  v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, &gaia::k_szFatigueGroups);
  Json::Value::opAssign(v7, (const Json::Value::Self *)v22);
  Json::Value::Destroy((Json::Value::Self *)v22);
  for ( j = *((uint32_t **)self + 33); j != (uint32_t *)((char *)self + 124); j = (uint32_t *)sub_19048E0(j) )
  {
    v10 = (gaia::CrmFatigueGroup::Self *)j[5];
    if ( v10 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmFa"
        "tigueGroup, typename boost::detail::sp_member_access<T>::type = gaia::CrmFatigueGroup*]",
        "px != 0");
      v10 = (gaia::CrmFatigueGroup::Self *)j[5];
    }
    gaia::CrmFatigueGroup::Serialize((gaia::CrmFatigueGroup::Self *)v23, v10);
    v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, &gaia::k_szFatigueGroups);
    Json::Value::append(v9, (const Json::Value::Self *)v23);
    Json::Value::Destroy((Json::Value::Self *)v23);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "CRMActionData.dat", (int)(uintptr_t)(v16));
  gaia::CrmManager::GetSaveFolderPath((int)(uintptr_t)(&v16[1]), (int)(uintptr_t)(self), (int)(uintptr_t)(&v17));
  g4_std::string::Destroy(&v17);
  sub_1900810(v28);
  v28[28] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v24 = (int)(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v25[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v25[-1] + *(uint32_t *)(v24 - 12), 0);
  v24 = (int)(uintptr_t)(&off_20A9EAC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v25);
  sub_19119D0(v28, v25);
  if ( sub_190AE40((int)(uintptr_t)(v25), *(char **)&v16[1], 16) != 0 )
    sub_1911530((char *)&v25[-1] + *(uint32_t *)(v24 - 12), 0);
  else
    sub_1911530((char *)&v25[-1] + *(uint32_t *)(v24 - 12), *(int *)((char *)&v25[4] + *(uint32_t *)(v24 - 12)) | 4);
  v11 = sub_1907FD0(v27);
  v12 = -32;
  if ( v11 != 0 )
  {
    Json::opShl(a1, (int)(uintptr_t)(&v24), (Json::Value::Self *)v18);
    v13 = sub_190AC60(v25);
    v12 = 0;
    if ( v13 == 0 )
    {
      sub_1911530((char *)&v25[-1] + *(uint32_t *)(v24 - 12), *(int *)((char *)&v25[4] + *(uint32_t *)(v24 - 12)) | 4);
      v12 = 0;
    }
  }
  v15 = v12;
  v24 = (int)(uintptr_t)(&off_20A9EAC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v25[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v25);
  sub_1908070(v27);
  v25[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v24 = (int)(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v25[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  g4_std::string::Destroy(&v16[1]);
  Json::Value::Destroy((Json::Value::Self *)v18);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::OnPause  (binary VA: 0x14ce3a0)
// Original: gaia::CrmManager::OnPause
// ----------------------------------------------------------------------------
int gaia::CrmManager::OnPause(long double a1, gaia::CrmManager::Self *self)
{
  char IsInitialized;
  int v3;

  IsInitialized = gaia::CrmManager::IsInitialized();
  v3 = 0;
  if ( IsInitialized != 0 )
    return gaia::CrmManager::SerializeActions(a1, self);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::DeserializeActions  (binary VA: 0x14ce800)
// Original: gaia::CrmManager::DeserializeActions
// ----------------------------------------------------------------------------
int gaia::CrmManager::DeserializeActions(gaia::CrmManager::Self *self)
{
  int v1;
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  Json::Value::Self *v7;
  int v8;
  Json::Value::Self *v9;
  char *v10;
  void *v11;
  void **v12;
  unsigned int v13;
  void *v14;
  void *v15;
  void **v16;
  unsigned int v17;
  void *v18;
  Json::Value::Self *v19;
  const Json::Value::Self *v20;
  gaia::CrmAction::Self **i;
  unsigned int j;
  const Json::Value::Self *v24;
  gaia::CrmAction::Self *v25;
  int v26;
  char *v27;
  size_t v28;
  size_t v29;
  size_t n;
  int v31;
  int v32;
  size_t v33;
  size_t v34;
  int v35;
  int v36;
  gaia::CrmFatigueGroup::Self *v37;
  Json::Value::Self *v38;
  char *v39;
  typedef const Json::Value::Self *_g4_t_v40;
  typedef glwebtools::Mutex::Self *_g4_t_v41;
  typedef unsigned int _g4_t_k;
  typedef glwebtools::Mutex::Self *_g4_t_v43;
  typedef glwebtools::Mutex::Self *_g4_t_s2;
  typedef glwebtools::Mutex::Self *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef Json::Value::Self *_g4_t_v47;
  typedef Json::Value::Self *_g4_t_v48;
  typedef Json::Value::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef Json::Value::Self *_g4_t_v51;
  typedef Json::Value::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef glwebtools::Mutex::Self *_g4_t_v56;
  typedef uint8_t _g4_t_v57[16];
  typedef uint8_t _g4_t_v58[16];
  typedef void *_g4_t_v59[5];
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef void *_g4_t_v62;
  typedef Json::Value::Self *_g4_t_v63;
  typedef Json::Value::Self *_g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef Json::Value::Self *_g4_t_v66;
  typedef Json::Value::Self *_g4_t_v67;
  typedef glwebtools::Mutex::Self *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73[7];
  typedef char _g4_t_v74[8];
  typedef uint8_t _g4_t_v75[68];
  typedef uint32_t _g4_t_v76[29];
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v41)) > _g4_s1 ? (4u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_k)) > _g4_s2 ? (4u + sizeof(_g4_t_k)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v43)) > _g4_s3 ? (8u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_s2)) > _g4_s4 ? (8u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v45)) > _g4_s5 ? (12u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v46)) > _g4_s6 ? (12u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v47)) > _g4_s7 ? (16u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v48)) > _g4_s8 ? (16u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v49)) > _g4_s9 ? (20u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v50)) > _g4_s10 ? (20u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v51)) > _g4_s11 ? (24u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v52)) > _g4_s12 ? (28u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v53)) > _g4_s13 ? (40u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v54)) > _g4_s14 ? (44u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v55)) > _g4_s15 ? (48u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v56)) > _g4_s16 ? (52u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v57)) > _g4_s17 ? (56u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v58)) > _g4_s18 ? (72u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v59)) > _g4_s19 ? (88u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v60)) > _g4_s20 ? (108u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v61)) > _g4_s21 ? (124u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v62)) > _g4_s22 ? (128u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v63)) > _g4_s23 ? (136u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v64)) > _g4_s24 ? (144u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v65)) > _g4_s25 ? (148u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v66)) > _g4_s26 ? (152u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v67)) > _g4_s27 ? (156u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v68)) > _g4_s28 ? (164u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v69)) > _g4_s29 ? (168u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v70)) > _g4_s30 ? (192u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v71)) > _g4_s31 ? (200u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v72)) > _g4_s32 ? (204u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (208u + sizeof(_g4_t_v73)) > _g4_s33 ? (208u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (236u + sizeof(_g4_t_v74)) > _g4_s34 ? (236u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (244u + sizeof(_g4_t_v75)) > _g4_s35 ? (244u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (312u + sizeof(_g4_t_v76)) > _g4_s36 ? (312u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (428u + sizeof(_g4_t_v77)) > _g4_s37 ? (428u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (429u + sizeof(_g4_t_v78)) > _g4_s38 ? (429u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (432u + sizeof(_g4_t_v79)) > _g4_s39 ? (432u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (436u + sizeof(_g4_t_v80)) > _g4_s40 ? (436u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (440u + sizeof(_g4_t_v81)) > _g4_s41 ? (440u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (444u + sizeof(_g4_t_v82)) > _g4_s42 ? (444u + sizeof(_g4_t_v82)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 108u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 128u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 136u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 144u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 148u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 152u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 156u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 164u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 168u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 192u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 200u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 204u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 208u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 236u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 244u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 312u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 428u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 429u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 432u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 436u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 440u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 444u);

  Json::Value::Construct((int)(uintptr_t)(v57), nullptr);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "CRMActionData.dat", (int)(uintptr_t)(&v53));
  gaia::CrmManager::GetSaveFolderPath((int)(uintptr_t)(&v54), (int)(uintptr_t)(self), (int)(uintptr_t)(&v55));
  g4_std::string::Destroy(&v55);
  sub_1900810(v76);
  v76[28] = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v76[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v71 = (int)(uintptr_t)(&off_20A9DEC);
  *(int *)((char *)&v71 + (uint32_t)*(&off_20A9DEC - 3)) = (int)(uintptr_t)(&off_20A9E00);
  v72 = 0;
  sub_19119D0((char *)&v71 + *(uint32_t *)(v71 - 12), 0);
  v71 = (int)(uintptr_t)(&off_20A9E2C);
  v76[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(v73);
  sub_19119D0(v76, v73);
  if ( sub_190AE40((int)(uintptr_t)(v73), v54, 8) != 0 )
    sub_1911530((char *)&v71 + *(uint32_t *)(v71 - 12), 0);
  else
    sub_1911530((char *)&v71 + *(uint32_t *)(v71 - 12), *(int *)((char *)&v71 + *(uint32_t *)(v71 - 12) + 20) | 4);
  v1 = -33;
  if ( (uint8_t)sub_1907FD0(v75) != 0 )
  {
    Json::Reader::Construct((Json::Reader::Self *)v59);
    if ( (uint8_t)Json::Reader::parse((const char **)v59, (int)(uintptr_t)(&v71), (Json::Value::Self *)v57, 1) != 0 )
    {
      if ( sub_190AC60(v73) == 0 )
        sub_1911530((char *)&v71 + *(uint32_t *)(v71 - 12), *(int *)((char *)&v71 + *(uint32_t *)(v71 - 12) + 20) | 4);
      v2 = (void *)(v70 - 12);
      if ( (uint32_t *)(v70 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
      v3 = (void *)(v69 - 12);
      if ( (uint32_t *)(v69 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
      v51 = v67;
      v47 = v66;
      v49 = v63;
      v43 = v68;
      v45 = (glwebtools::Mutex::Self *)v65;
      v52 = v64;
      v41 = (glwebtools::Mutex::Self *)(v65 + 4);
      if ( (unsigned int)(uintptr_t)(v68) > v65 + 4 )
      {
        do
        {
          v4 = 0;
          v5 = *(uint32_t *)v41 + 12;
          do
          {
            v6 = *(uint32_t *)(v5 + v4);
            if ( (uint32_t *)(v6 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v6 - 12));
            }
            v4 += 20;
          }
          while ( v4 != 500 );
          v41 = (glwebtools::Mutex::Self *)((char *)v41 + 4);
        }
        while ( v43 > v41 );
      }
      if ( v43 == v45 )
      {
        if ( v47 != v49 )
        {
          v38 = v49;
          do
          {
            v39 = (char *)v38 + 12;
            v38 = (Json::Value::Self *)((char *)v38 + 20);
            g4_std::string::Destroy(v39);
          }
          while ( v47 != v38 );
        }
      }
      else
      {
        if ( v49 != v52 )
        {
          v7 = v49;
          do
          {
            v8 = (int)(uintptr_t)(v7) + 12;
            v7 = (Json::Value::Self *)((char *)v7 + 20);
            g4_std::string::Destroy(v8);
          }
          while ( v52 != v7 );
        }
        if ( v47 != v51 )
        {
          v9 = v51;
          do
          {
            v10 = (char *)v9 + 12;
            v9 = (Json::Value::Self *)((char *)v9 + 20);
            g4_std::string::Destroy(v10);
          }
          while ( v47 != v9 );
        }
      }
      v11 = v62;
      if ( v62 != nullptr )
      {
        v12 = (void **)v65;
        v13 = (unsigned int)(uintptr_t)(v68) + 4;
        if ( (unsigned int)(uintptr_t)(v68) + 4 > v65 )
        {
          do
          {
            v14 = *v12++;
            opDelete(v14);
          }
          while ( v13 > (unsigned int)(uintptr_t)(v12) );
          v11 = v62;
        }
        opDelete(v11);
      }
      v15 = v59[0];
      if ( v59[0] != nullptr )
      {
        v16 = (void **)v60;
        v17 = v61 + 4;
        if ( v61 + 4 > v60 )
        {
          do
          {
            v18 = *v16++;
            opDelete(v18);
          }
          while ( v17 > (unsigned int)(uintptr_t)(v16) );
          v15 = v59[0];
        }
        opDelete(v15);
      }
      v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, &gaia::k_szData);
      if ( !Json::Value::isNull(v19) && Json::Value::type(v19) == 6 )
      {
        glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)self + 40));
        for ( i = *((gaia::CrmAction::Self ***)self + 17); i != *((gaia::CrmAction::Self ***)self + 18); i += 2 )
        {
          for ( j = 0; j < Json::Value::size(v19); ++j )
          {
            v24 = (const Json::Value::Self *)Json::Value::opIndex(v19, j);
            v25 = *i;
            if ( *i == nullptr )
            {
              v40 = v24;
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gai"
                "a::CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
                "px != 0");
              v25 = *i;
              v24 = v40;
            }
            gaia::CrmAction::Deserialize(v25, v24);
          }
        }
        glwebtools::Mutex::Unlock((gaia::CrmManager::Self *)((char *)self + 40));
      }
      v20 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, &gaia::k_szFatigueGroups);
      Json::Value::Construct((Json::Value::Self *)v58, v20);
      if ( !Json::Value::isNull((Json::Value::Self *)v58) && (uint8_t)Json::Value::isArray((Json::Value::Self *)v58) != 0 )
      {
        v50 = Json::Value::size((Json::Value::Self *)v58);
        if ( v50 > 0 )
        {
          for ( k = 0; k != v50; ++k )
          {
            v48 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v58, k);
            if ( !Json::Value::isNull(v48) || (uint8_t)Json::Value::isObject(v48) != 0 )
            {
              v26 = (int)(uintptr_t)(Json::Value::opIndex(v48, &gaia::k_szGroupName));
              Json::Value::asString((Json::Value::Self *)&v56, v26);
              v27 = *((char **)self + 32);
              if ( v27 == nullptr )
                goto LABEL_69;
              s2 = v56;
              v28 = *((uint32_t *)v56 - 3);
              v46 = (char *)self + 124;
              do
              {
                while ( 1 )
                {
                  v29 = *(uint32_t *)(*((uint32_t *)v27 + 4) - 12);
                  n = v29;
                  if ( v28 <= v29 )
                    n = v28;
                  v31 = v29 - v28;
                  v32 = memcmp(*((const void **)v27 + 4), s2, n);
                  if ( v32 == 0 )
                    v32 = v31;
                  if ( v32 < 0 )
                    break;
                  v46 = v27;
                  v27 = *((char **)v27 + 2);
                  if ( v27 == nullptr )
                    goto LABEL_55;
                }
                v27 = *((char **)v27 + 3);
              }
              while ( v27 != nullptr );
LABEL_55:
              if ( (char *)self + 124 == v46 )
                goto LABEL_69;
              v33 = *(uint32_t *)(*((uint32_t *)v46 + 4) - 12);
              v34 = v33;
              if ( v28 <= v33 )
                v34 = v28;
              v35 = v28 - v33;
              v36 = memcmp(s2, *((const void **)v46 + 4), v34);
              if ( v36 == 0 )
                v36 = v35;
              if ( v36 < 0 )
              {
LABEL_69:
                g4_std::string::Destroy(&v56);
              }
              else
              {
                g4_std::string::Destroy(&v56);
                v37 = *((gaia::CrmFatigueGroup::Self **)v46 + 5);
                if ( v37 == nullptr )
                {
                  __assert2(
                    "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                    653,
                    "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T ="
                    " gaia::CrmFatigueGroup, typename boost::detail::sp_member_access<T>::type = gaia::CrmFatigueGroup*]",
                    "px != 0");
                  v37 = *((gaia::CrmFatigueGroup::Self **)v46 + 5);
                }
                gaia::CrmFatigueGroup::Deserialize(v37, v48);
              }
            }
          }
        }
      }
      Json::Value::Destroy((Json::Value::Self *)v58);
      v1 = 0;
    }
    else
    {
      if ( sub_190AC60(v73) == 0 )
        sub_1911530((char *)&v71 + *(uint32_t *)(v71 - 12), *(int *)((char *)&v71 + *(uint32_t *)(v71 - 12) + 20) | 4);
      v1 = -33;
      sub_545800((int)(uintptr_t)(v59));
    }
  }
  v71 = (int)(uintptr_t)(&off_20A9E2C);
  v76[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  v73[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v73);
  sub_1908070(v75);
  v73[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v74);
  v71 = (int)(uintptr_t)(&off_20A9DEC);
  *(int *)((char *)&v71 + (uint32_t)*(&off_20A9DEC - 3)) = (int)(uintptr_t)(&off_20A9E00);
  v72 = 0;
  v76[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v76);
  g4_std::string::Destroy(&v54);
  Json::Value::Destroy((Json::Value::Self *)v57);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LogEventViaGLOT  (binary VA: 0x14d79a0)
// Original: gaia::CrmManager::LogEventViaGLOT
// ----------------------------------------------------------------------------
int gaia::CrmManager::LogEventViaGLOT(int a1, Json::Value::Self *a2, char **a3)
{
  Json::Value::Self *v3;
  int v4;
  uint32_t *v5;
  bool v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef char _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef glotv3::Event::Self *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef glotv3::Event::Self *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef void (**_g4_t_v20)(Json::FastWriter::Self *);
  typedef char _g4_t_v21[8];
  typedef uint8_t _g4_t_v22[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v20)) > _g4_s10 ? (52u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v21)) > _g4_s11 ? (56u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v22)) > _g4_s12 ? (64u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  Json::Value::Construct((int)(uintptr_t)(v22), nullptr);
  v3 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v22, a3);
  Json::Value::opAssign(v3, a2);
  Json::FastWriter::Construct((Json::FastWriter::Self *)&v20);
  Json::FastWriter::write((Json::FastWriter::Self *)v13, (const Json::Value::Self *)&v20, (Json::Value::Self *)v22);
  boost::make_shared_ec64e5(&v16);
  v18 = v16;
  v19 = v17;
  if ( v17 != nullptr )
    ++v17[1];
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v14);
  v4 = v14;
  if ( v14 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v4 = v14;
  }
  glotv3::TrackingManager::AddEvent(v4, &v18, 0);
  v5 = v15;
  if ( v15 != nullptr )
  {
    v6 = v15[1]-- == 1;
    if ( v6 )
    {
      v10 = v5;
      G4_VCALL<void>(v5, 8);
      v6 = v10[2]-- == 1;
      if ( v6 )
        G4_VCALL<void>(v10, 12);
    }
  }
  v7 = v19;
  if ( v19 != nullptr )
  {
    v6 = v19[1]-- == 1;
    if ( v6 )
    {
      v12 = v7;
      G4_VCALL<void>(v7, 8);
      v6 = v12[2]-- == 1;
      if ( v6 )
        G4_VCALL<void>(v12, 12);
    }
  }
  v8 = v17;
  if ( v17 != nullptr )
  {
    v6 = v17[1]-- == 1;
    if ( v6 )
    {
      v11 = v8;
      G4_VCALL<void>(v8, 8);
      v6 = v11[2]-- == 1;
      if ( v6 )
        G4_VCALL<void>(v11, 12);
    }
  }
  g4_std::string::Destroy(v13);
  v20 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  g4_std::string::Destroy(v21);
  Json::Writer::Destroy((Json::Writer::Self *)&v20);
  Json::Value::Destroy((Json::Value::Self *)v22);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::ALogEventCallback  (binary VA: 0x14d7bd0)
// Original: gaia::CrmManager::ALogEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::ALogEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  const char **v5;
  const Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  const char **v12;
  typedef char _g4_t_v13;
  typedef void (*_g4_t_v14)(int, int, uint32_t, uint8_t *);
  typedef char *_g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[44];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v18)) > _g4_s5 ? (64u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v19)) > _g4_s6 ? (80u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v20)) > _g4_s7 ? (96u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((Json::Value::Self *)v16, 0);
    v4 = (Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szData);
    v5 = (const char **)Json::Value::opIndex(v4, &gaia::k_szPointcutId);
    if ( Json::Value::opEq(v5, (const Json::Value::Self *)v16) != 0 )
    {
      Json::Value::Destroy((Json::Value::Self *)v16);
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v17, (const char *)&unk_1B15112);
      v11 = (Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szData);
      v12 = (const char **)Json::Value::opIndex(v11, &gaia::k_szPointcutId);
      v13 = Json::Value::opEq(v12, (const Json::Value::Self *)v17);
      Json::Value::Destroy((Json::Value::Self *)v17);
      Json::Value::Destroy((Json::Value::Self *)v16);
      if ( v13 == 0 )
        goto LABEL_5;
    }
    v6 = (const Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szPointcutId);
    v7 = (Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szData);
    v8 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szPointcutId);
    Json::Value::opAssign(v8, v6);
LABEL_5:
    Json::Value::Construct((int)(uintptr_t)(v18), nullptr);
    Json::Value::Construct((Json::Value::Self *)v19, 12);
    v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, &gaia::k_szActionType);
    Json::Value::opAssign(v9, (const Json::Value::Self *)v19);
    Json::Value::Destroy((Json::Value::Self *)v19);
    v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v18, &gaia::k_szData);
    Json::Value::opAssign(v10, a3);
    g4_std::string::construct_copy(&v15, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v18, &v15);
    g4_std::string::Destroy(&v15);
    v14 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v20, a3);
    v14(a1, 12, a2, v20);
    Json::Value::Destroy((Json::Value::Self *)v20);
    Json::Value::Destroy((Json::Value::Self *)v18);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AUrlEventCallback  (binary VA: 0x14d7e30)
// Original: gaia::CrmManager::AUrlEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AUrlEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 10);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 10, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::A3DPartyEventCallback  (binary VA: 0x14d7f80)
// Original: gaia::CrmManager::A3DPartyEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::A3DPartyEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 8);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 8, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AGLAdsIncentivizedVideoCallback  (binary VA: 0x14d80d0)
// Original: gaia::CrmManager::AGLAdsIncentivizedVideoCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AGLAdsIncentivizedVideoCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 15);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 15, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AGLAdsInterstitialCallback  (binary VA: 0x14d8220)
// Original: gaia::CrmManager::AGLAdsInterstitialCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AGLAdsInterstitialCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 14);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 14, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AGLAdsBannerCallback  (binary VA: 0x14d8370)
// Original: gaia::CrmManager::AGLAdsBannerCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AGLAdsBannerCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 13);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 13, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AXpromoEventCallback  (binary VA: 0x14d84c0)
// Original: gaia::CrmManager::AXpromoEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AXpromoEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 7);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 7, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::AGiftEventCallback  (binary VA: 0x14d8610)
// Original: gaia::CrmManager::AGiftEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::AGiftEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 9);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 9, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::APopupEventCallback  (binary VA: 0x14d8760)
// Original: gaia::CrmManager::APopupEventCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::APopupEventCallback(int a1, uint8_t a2, Json::Value::Self *a3)
{
  int result;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef void (*_g4_t_v6)(int, int, uint32_t, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  result = 0;
  if ( a1 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    Json::Value::Construct((Json::Value::Self *)v9, 6);
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szActionType);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v8, &gaia::k_szData);
    Json::Value::opAssign(v5, a3);
    g4_std::string::construct_copy(&v7, &gaia::k_szAction);
    gaia::CrmManager::LogEventViaGLOT(a1, (Json::Value::Self *)v8, (char **)&v7);
    g4_std::string::Destroy(&v7);
    v6 = *(void (**)(int, int, uint32_t, uint8_t *))(*(uint32_t *)a1 + 8);
    Json::Value::Construct((Json::Value::Self *)v10, a3);
    v6(a1, 6, a2, v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::DownloadPopupList  (binary VA: 0x14d88b0)
// Original: gaia::CrmManager::DownloadPopupList
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::CrmManager::DownloadPopupList(gaia::CrmManager::Self *self, Json::Value::Self **a2)
{
  Json::Value::Self *result;
  Json::Value::Self *i;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  typedef Json::Value::Self *_g4_t_v6;
  typedef Json::Value::Self *_g4_t_v7;
  typedef Json::Value::Self *_g4_t_v8;
  typedef uint16_t _g4_t_v9[3];
  typedef int _g4_t_v10;
  typedef char *_g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint8_t _g4_t_v13[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (34u + sizeof(_g4_t_v9)) > _g4_s3 ? (34u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v12)) > _g4_s6 ? (48u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v13)) > _g4_s7 ? (64u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 34u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);

  result = nullptr;
  if ( (unsigned int)(a2[1] - *a2) >> 2 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v9));
    for ( i = *a2; i != a2[1]; i = (Json::Value::Self *)((char *)i + 4) )
    {
      if ( *(uint32_t *)(*(uint32_t *)&v9[1] - 12) != 0 )
        g4_std::string::append((int)(uintptr_t)(&v9[1]), ",", 1u);
      v6 = i;
      g4_std::string::append_str(&v9[1], v6);
    }
    v4 = nullptr;
    if ( *(uint32_t *)(*(uint32_t *)&v9[1] - 12) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "start_to_download", (int)(uintptr_t)(v9) + 1);
      Json::Value::Construct((int)(uintptr_t)(v12), nullptr);
      Json::Value::Construct((int)(uintptr_t)(v13), &v9[1]);
      v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v12, (char **)&v10);
      Json::Value::opAssign(v5, (const Json::Value::Self *)v13);
      Json::Value::Destroy((Json::Value::Self *)v13);
      g4_std::string::construct_copy(&v11, &v10);
      gaia::CrmManager::LogEventViaGLOT((int)(uintptr_t)(self), (Json::Value::Self *)v12, &v11);
      g4_std::string::Destroy(&v11);
      v8 = (Json::Value::Self *)gaia::CrmManager::DownloadOfflineWS((int)(uintptr_t)(self), &v9[1]);
      Json::Value::Destroy((Json::Value::Self *)v12);
      g4_std::string::Destroy(&v10);
      v4 = v8;
    }
    v7 = v4;
    g4_std::string::Destroy(&v9[1]);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::OnResume  (binary VA: 0x14d8a50)
// Original: gaia::CrmManager::OnResume
// ----------------------------------------------------------------------------
int gaia::CrmManager::OnResume(Json::Value::Self **self)
{
  char IsInitialized;
  int v2;

  IsInitialized = gaia::CrmManager::IsInitialized();
  v2 = 0;
  if ( IsInitialized != 0 )
  {
    gaia::CrmManager::DownloadPopupList((gaia::CrmManager::Self *)self, self + 20);
    return gaia::CrmManager::DeserializeActions((gaia::CrmManager::Self *)self);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::GlotWrapperCallback  (binary VA: 0x14d8c50)
// Original: gaia::CrmManager::GlotWrapperCallback
// ----------------------------------------------------------------------------
int gaia::CrmManager::GlotWrapperCallback(int a1, int a2, Json::Value::Self *a3)
{
  Json::Value::Self *v3;
  int v4;
  const Json::Value::Self *v5;
  int v6;
  uint32_t *v7;
  bool v8;
  Json::Value::Self *v10;
  int v11;
  int v12;
  int v13;
  Json::Value::Self *v14;
  int v15;
  glotv3::Event::Self *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  Json::Value::Self *v23;
  int v24;
  int v25;
  Json::Value::Self *v26;
  int v27;
  int v28;
  glotv3::Event::Self *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  Json::Value::Self *v35;
  int v36;
  int v37;
  glotv3::Event::Self *v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  glotv3::Event::Self *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  Json::Value::Self *v49;
  int v50;
  glotv3::Event::Self *v51;
  uint32_t *v52;
  uint32_t *v53;
  int v54;
  int v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef void *_g4_t_v63;
  typedef void *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef void *_g4_t_v66;
  typedef void *_g4_t_v67;
  typedef void *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint8_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint8_t *_g4_t_v78;
  typedef uint8_t *_g4_t_v79;
  typedef uint8_t *_g4_t_v80;
  typedef uint8_t *_g4_t_v81;
  typedef uint8_t *_g4_t_v82;
  typedef uint8_t *_g4_t_v83;
  typedef uint8_t *_g4_t_v84;
  typedef uint8_t *_g4_t_v85;
  typedef uint8_t *_g4_t_v86;
  typedef uint8_t *_g4_t_v87;
  typedef uint8_t *_g4_t_v88;
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
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint32_t *_g4_t_v110;
  typedef glotv3::Event::Self *_g4_t_v111;
  typedef uint32_t *_g4_t_v112;
  typedef glotv3::Event::Self *_g4_t_v113;
  typedef uint32_t *_g4_t_v114;
  typedef glotv3::Event::Self *_g4_t_v115;
  typedef uint32_t *_g4_t_v116;
  typedef glotv3::Event::Self *_g4_t_v117;
  typedef uint32_t *_g4_t_v118;
  typedef glotv3::Event::Self *_g4_t_v119;
  typedef uint32_t *_g4_t_v120;
  typedef glotv3::Event::Self *_g4_t_v121;
  typedef uint32_t *_g4_t_v122;
  typedef uint8_t _g4_t_v123[16];
  typedef uint8_t _g4_t_v124[16];
  typedef uint8_t _g4_t_v125[16];
  typedef void *_g4_t_v126[7];
  typedef uint32_t *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef void *_g4_t_v132[7];
  typedef uint32_t *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef void *_g4_t_v138[7];
  typedef uint32_t *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef void *_g4_t_v144[7];
  typedef uint32_t *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef void *_g4_t_v150[7];
  typedef uint32_t *_g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (12u + sizeof(_g4_t_v56)) > _g4_s0 ? (12u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v57)) > _g4_s1 ? (12u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v58)) > _g4_s2 ? (12u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v59)) > _g4_s3 ? (12u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v60)) > _g4_s4 ? (12u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v61)) > _g4_s5 ? (16u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v62)) > _g4_s6 ? (20u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v63)) > _g4_s7 ? (20u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v64)) > _g4_s8 ? (20u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v65)) > _g4_s9 ? (24u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v66)) > _g4_s10 ? (24u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v67)) > _g4_s11 ? (24u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v68)) > _g4_s12 ? (28u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v69)) > _g4_s13 ? (40u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v70)) > _g4_s14 ? (44u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v71)) > _g4_s15 ? (48u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v72)) > _g4_s16 ? (52u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v73)) > _g4_s17 ? (56u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v74)) > _g4_s18 ? (60u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v75)) > _g4_s19 ? (64u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v76)) > _g4_s20 ? (68u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v77)) > _g4_s21 ? (72u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v78)) > _g4_s22 ? (76u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v79)) > _g4_s23 ? (80u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v80)) > _g4_s24 ? (84u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v81)) > _g4_s25 ? (88u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v82)) > _g4_s26 ? (92u + sizeof(_g4_t_v82)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v83)) > _g4_s27 ? (96u + sizeof(_g4_t_v83)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v84)) > _g4_s28 ? (100u + sizeof(_g4_t_v84)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v85)) > _g4_s29 ? (104u + sizeof(_g4_t_v85)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v86)) > _g4_s30 ? (108u + sizeof(_g4_t_v86)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v87)) > _g4_s31 ? (112u + sizeof(_g4_t_v87)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v88)) > _g4_s32 ? (116u + sizeof(_g4_t_v88)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v89)) > _g4_s33 ? (120u + sizeof(_g4_t_v89)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v90)) > _g4_s34 ? (124u + sizeof(_g4_t_v90)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v91)) > _g4_s35 ? (128u + sizeof(_g4_t_v91)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v92)) > _g4_s36 ? (132u + sizeof(_g4_t_v92)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v93)) > _g4_s37 ? (136u + sizeof(_g4_t_v93)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v94)) > _g4_s38 ? (140u + sizeof(_g4_t_v94)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v95)) > _g4_s39 ? (144u + sizeof(_g4_t_v95)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v96)) > _g4_s40 ? (148u + sizeof(_g4_t_v96)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v97)) > _g4_s41 ? (152u + sizeof(_g4_t_v97)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v98)) > _g4_s42 ? (156u + sizeof(_g4_t_v98)) : _g4_s42,
    _g4_s44 = (160u + sizeof(_g4_t_v99)) > _g4_s43 ? (160u + sizeof(_g4_t_v99)) : _g4_s43,
    _g4_s45 = (164u + sizeof(_g4_t_v100)) > _g4_s44 ? (164u + sizeof(_g4_t_v100)) : _g4_s44,
    _g4_s46 = (168u + sizeof(_g4_t_v101)) > _g4_s45 ? (168u + sizeof(_g4_t_v101)) : _g4_s45,
    _g4_s47 = (172u + sizeof(_g4_t_v102)) > _g4_s46 ? (172u + sizeof(_g4_t_v102)) : _g4_s46,
    _g4_s48 = (176u + sizeof(_g4_t_v103)) > _g4_s47 ? (176u + sizeof(_g4_t_v103)) : _g4_s47,
    _g4_s49 = (180u + sizeof(_g4_t_v104)) > _g4_s48 ? (180u + sizeof(_g4_t_v104)) : _g4_s48,
    _g4_s50 = (184u + sizeof(_g4_t_v105)) > _g4_s49 ? (184u + sizeof(_g4_t_v105)) : _g4_s49,
    _g4_s51 = (188u + sizeof(_g4_t_v106)) > _g4_s50 ? (188u + sizeof(_g4_t_v106)) : _g4_s50,
    _g4_s52 = (192u + sizeof(_g4_t_v107)) > _g4_s51 ? (192u + sizeof(_g4_t_v107)) : _g4_s51,
    _g4_s53 = (196u + sizeof(_g4_t_v108)) > _g4_s52 ? (196u + sizeof(_g4_t_v108)) : _g4_s52,
    _g4_s54 = (200u + sizeof(_g4_t_v109)) > _g4_s53 ? (200u + sizeof(_g4_t_v109)) : _g4_s53,
    _g4_s55 = (204u + sizeof(_g4_t_v110)) > _g4_s54 ? (204u + sizeof(_g4_t_v110)) : _g4_s54,
    _g4_s56 = (208u + sizeof(_g4_t_v111)) > _g4_s55 ? (208u + sizeof(_g4_t_v111)) : _g4_s55,
    _g4_s57 = (212u + sizeof(_g4_t_v112)) > _g4_s56 ? (212u + sizeof(_g4_t_v112)) : _g4_s56,
    _g4_s58 = (216u + sizeof(_g4_t_v113)) > _g4_s57 ? (216u + sizeof(_g4_t_v113)) : _g4_s57,
    _g4_s59 = (220u + sizeof(_g4_t_v114)) > _g4_s58 ? (220u + sizeof(_g4_t_v114)) : _g4_s58,
    _g4_s60 = (224u + sizeof(_g4_t_v115)) > _g4_s59 ? (224u + sizeof(_g4_t_v115)) : _g4_s59,
    _g4_s61 = (228u + sizeof(_g4_t_v116)) > _g4_s60 ? (228u + sizeof(_g4_t_v116)) : _g4_s60,
    _g4_s62 = (232u + sizeof(_g4_t_v117)) > _g4_s61 ? (232u + sizeof(_g4_t_v117)) : _g4_s61,
    _g4_s63 = (236u + sizeof(_g4_t_v118)) > _g4_s62 ? (236u + sizeof(_g4_t_v118)) : _g4_s62,
    _g4_s64 = (240u + sizeof(_g4_t_v119)) > _g4_s63 ? (240u + sizeof(_g4_t_v119)) : _g4_s63,
    _g4_s65 = (244u + sizeof(_g4_t_v120)) > _g4_s64 ? (244u + sizeof(_g4_t_v120)) : _g4_s64,
    _g4_s66 = (248u + sizeof(_g4_t_v121)) > _g4_s65 ? (248u + sizeof(_g4_t_v121)) : _g4_s65,
    _g4_s67 = (252u + sizeof(_g4_t_v122)) > _g4_s66 ? (252u + sizeof(_g4_t_v122)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v123)) > _g4_s67 ? (256u + sizeof(_g4_t_v123)) : _g4_s67,
    _g4_s69 = (272u + sizeof(_g4_t_v124)) > _g4_s68 ? (272u + sizeof(_g4_t_v124)) : _g4_s68,
    _g4_s70 = (288u + sizeof(_g4_t_v125)) > _g4_s69 ? (288u + sizeof(_g4_t_v125)) : _g4_s69,
    _g4_s71 = (304u + sizeof(_g4_t_v126)) > _g4_s70 ? (304u + sizeof(_g4_t_v126)) : _g4_s70,
    _g4_s72 = (332u + sizeof(_g4_t_v127)) > _g4_s71 ? (332u + sizeof(_g4_t_v127)) : _g4_s71,
    _g4_s73 = (336u + sizeof(_g4_t_v128)) > _g4_s72 ? (336u + sizeof(_g4_t_v128)) : _g4_s72,
    _g4_s74 = (340u + sizeof(_g4_t_v129)) > _g4_s73 ? (340u + sizeof(_g4_t_v129)) : _g4_s73,
    _g4_s75 = (344u + sizeof(_g4_t_v130)) > _g4_s74 ? (344u + sizeof(_g4_t_v130)) : _g4_s74,
    _g4_s76 = (348u + sizeof(_g4_t_v131)) > _g4_s75 ? (348u + sizeof(_g4_t_v131)) : _g4_s75,
    _g4_s77 = (352u + sizeof(_g4_t_v132)) > _g4_s76 ? (352u + sizeof(_g4_t_v132)) : _g4_s76,
    _g4_s78 = (380u + sizeof(_g4_t_v133)) > _g4_s77 ? (380u + sizeof(_g4_t_v133)) : _g4_s77,
    _g4_s79 = (384u + sizeof(_g4_t_v134)) > _g4_s78 ? (384u + sizeof(_g4_t_v134)) : _g4_s78,
    _g4_s80 = (388u + sizeof(_g4_t_v135)) > _g4_s79 ? (388u + sizeof(_g4_t_v135)) : _g4_s79,
    _g4_s81 = (392u + sizeof(_g4_t_v136)) > _g4_s80 ? (392u + sizeof(_g4_t_v136)) : _g4_s80,
    _g4_s82 = (396u + sizeof(_g4_t_v137)) > _g4_s81 ? (396u + sizeof(_g4_t_v137)) : _g4_s81,
    _g4_s83 = (400u + sizeof(_g4_t_v138)) > _g4_s82 ? (400u + sizeof(_g4_t_v138)) : _g4_s82,
    _g4_s84 = (428u + sizeof(_g4_t_v139)) > _g4_s83 ? (428u + sizeof(_g4_t_v139)) : _g4_s83,
    _g4_s85 = (432u + sizeof(_g4_t_v140)) > _g4_s84 ? (432u + sizeof(_g4_t_v140)) : _g4_s84,
    _g4_s86 = (436u + sizeof(_g4_t_v141)) > _g4_s85 ? (436u + sizeof(_g4_t_v141)) : _g4_s85,
    _g4_s87 = (440u + sizeof(_g4_t_v142)) > _g4_s86 ? (440u + sizeof(_g4_t_v142)) : _g4_s86,
    _g4_s88 = (444u + sizeof(_g4_t_v143)) > _g4_s87 ? (444u + sizeof(_g4_t_v143)) : _g4_s87,
    _g4_s89 = (448u + sizeof(_g4_t_v144)) > _g4_s88 ? (448u + sizeof(_g4_t_v144)) : _g4_s88,
    _g4_s90 = (476u + sizeof(_g4_t_v145)) > _g4_s89 ? (476u + sizeof(_g4_t_v145)) : _g4_s89,
    _g4_s91 = (480u + sizeof(_g4_t_v146)) > _g4_s90 ? (480u + sizeof(_g4_t_v146)) : _g4_s90,
    _g4_s92 = (484u + sizeof(_g4_t_v147)) > _g4_s91 ? (484u + sizeof(_g4_t_v147)) : _g4_s91,
    _g4_s93 = (488u + sizeof(_g4_t_v148)) > _g4_s92 ? (488u + sizeof(_g4_t_v148)) : _g4_s92,
    _g4_s94 = (492u + sizeof(_g4_t_v149)) > _g4_s93 ? (492u + sizeof(_g4_t_v149)) : _g4_s93,
    _g4_s95 = (496u + sizeof(_g4_t_v150)) > _g4_s94 ? (496u + sizeof(_g4_t_v150)) : _g4_s94,
    _g4_s96 = (524u + sizeof(_g4_t_v151)) > _g4_s95 ? (524u + sizeof(_g4_t_v151)) : _g4_s95,
    _g4_s97 = (528u + sizeof(_g4_t_v152)) > _g4_s96 ? (528u + sizeof(_g4_t_v152)) : _g4_s96,
    _g4_s98 = (532u + sizeof(_g4_t_v153)) > _g4_s97 ? (532u + sizeof(_g4_t_v153)) : _g4_s97,
    _g4_s99 = (536u + sizeof(_g4_t_v154)) > _g4_s98 ? (536u + sizeof(_g4_t_v154)) : _g4_s98,
    _g4_s100 = (540u + sizeof(_g4_t_v155)) > _g4_s99 ? (540u + sizeof(_g4_t_v155)) : _g4_s99
  };
  alignas(16) uint8_t _g4_sf[_g4_s100];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 96u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 100u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 104u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 108u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 112u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 116u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 120u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 124u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 132u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 136u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 140u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 144u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 148u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 152u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 156u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 160u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 164u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 168u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 172u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 176u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 180u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 184u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 188u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 192u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 196u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 200u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 204u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 208u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 212u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 216u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 220u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 224u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 228u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 232u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 236u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 240u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 244u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 248u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 252u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 256u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 272u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 288u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 304u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 332u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 336u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 340u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 344u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 348u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 352u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 380u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 384u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 388u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 392u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 396u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 400u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 428u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 432u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 436u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 440u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 444u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 448u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 476u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 480u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 484u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 488u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 492u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 496u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 524u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 528u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 532u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 536u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 540u);

  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v109);
  v3 = (Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szType);
  v4 = Json::Value::asInt(v3);
  v5 = (const Json::Value::Self *)Json::Value::opIndex(a3, &gaia::k_szData);
  Json::Value::Construct((Json::Value::Self *)v123, v5);
  switch ( v4 )
  {
    case 51852:
      boost::make_shared_19a5e0(&v119);
      v43 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szCampaignList));
      Json::Value::asString((Json::Value::Self *)&v74, v43);
      v44 = v119;
      if ( v119 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = CrmGlotEv"
          "ent, typename boost::detail::sp_member_access<T>::type = CrmGlotEvent*]",
          "px != 0");
        v44 = v119;
      }
      glotv3::Event::setEventType(v44, &reinterpret_cast<G4Elf32Sym *>(stru_CA84)->st_size);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v89), "campaign_list", (int)(uintptr_t)(&v69));
      glotv3::Event::addKeyPair((int)(uintptr_t)(v44), (uint8_t **)&v89, &v74);
      g4_std::string::Destroy(&v89);
      g4_std::string::Destroy(&v74);
      v111 = v119;
      v112 = v120;
      if ( v120 != nullptr )
        ++v120[1];
      v45 = v109;
      if ( v109 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v45 = v109;
      }
      v46 = glotv3::TrackingManager::AddEvent(v45, &v111, 0);
      v19 = v112;
      LOBYTE(v46) = v46 == 1;
      v6 = v46;
      if ( v112 == nullptr )
        goto LABEL_19;
      break;
    case 51853:
      boost::make_shared_19a5e0(&v119);
      v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v123, (char **)&gaia::k_szPriority);
      v65 = Json::Value::asInt(v10);
      Json::Value::Construct((Json::Value::Self *)v124, (const Json::Value::Self *)v123);
      v62 = gaia::CrmManager::popupTrackingType((Json::Value::Self *)v124);
      v11 = Json::Value::opIndex((Json::Value::Self *)v123, (char **)&gaia::k_szPopupId);
      Json::Value::asString((Json::Value::Self *)&v77, v11);
      v12 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutId));
      Json::Value::asString((Json::Value::Self *)&v76, v12);
      v13 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutArguments));
      Json::Value::asString((Json::Value::Self *)&v75, v13);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v123, (char **)&gaia::k_szOffline);
      v15 = Json::Value::asInt(v14);
      v16 = v119;
      if ( v119 == nullptr )
      {
        v60 = v15;
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = CrmGlotEv"
          "ent, typename boost::detail::sp_member_access<T>::type = CrmGlotEvent*]",
          "px != 0");
        v16 = v119;
        v15 = v60;
      }
      CrmGlotEvent::SetEventKeyPairs(
        v16,
        51853,
        (int)(uintptr_t)(&gaia::k_szNA),
        (int)(uintptr_t)(&gaia::k_szNA),
        v15,
        (int)(uintptr_t)(&v75),
        (int)(uintptr_t)(&v76),
        (int)(uintptr_t)(&v77),
        v62,
        v65);
      g4_std::string::Destroy(&v75);
      g4_std::string::Destroy(&v76);
      g4_std::string::Destroy(&v77);
      Json::Value::Destroy((Json::Value::Self *)v124);
      v113 = v119;
      v114 = v120;
      if ( v120 != nullptr )
        ++v120[1];
      v17 = v109;
      if ( v109 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v17 = v109;
      }
      v18 = glotv3::TrackingManager::AddEvent(v17, &v113, 0);
      v19 = v114;
      LOBYTE(v20) = v18 == 1;
      v6 = v20;
      if ( v114 == nullptr )
        goto LABEL_19;
      break;
    case 51854:
      boost::make_shared_19a5e0(&v119);
      Json::Value::Construct((Json::Value::Self *)v125, (const Json::Value::Self *)v123);
      v67 = (void *)gaia::CrmManager::popupTrackingType((Json::Value::Self *)v125);
      v47 = Json::Value::opIndex((Json::Value::Self *)v123, (char **)&gaia::k_szPopupId);
      Json::Value::asString((Json::Value::Self *)&v80, v47);
      v48 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutId));
      Json::Value::asString((Json::Value::Self *)&v79, v48);
      v49 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szClickType);
      v68 = (void *)Json::Value::asInt(v49);
      v50 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szCampaignID));
      Json::Value::asString((Json::Value::Self *)&v78, v50);
      v51 = v119;
      if ( v119 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = CrmGlotEv"
          "ent, typename boost::detail::sp_member_access<T>::type = CrmGlotEvent*]",
          "px != 0");
        v51 = v119;
      }
      glotv3::Event::setEventType(v51, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_CA84)->st_size + 2);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v97), "campaign_id", (int)(uintptr_t)(&v71));
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v97, &v78);
      v132[2] = &dword_0 + 2;
      v132[6] = nullptr;
      v133 = nullptr;
      v135 = 0;
      v136 = 0;
      v137 = 0;
      v134 = 2048;
      v136 = opNew(1u);
      v137 = v136;
      v61 = v134;
      v52 = (uint32_t *)(malloc(v134 + 12));
      v52[1] = 0;
      *v52 = v61;
      v52[2] = (uint32_t)(uintptr_t)(v133);
      v133 = v52;
      v132[0] = v68;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v96), "click_type", (int)(uintptr_t)(&v70) + 3);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v96, (glotv3::EventValue::Self *)v132);
      g4_std::string::Destroy(&v96);
      glotv3::EventValue::Destroy(v132);
      g4_std::string::Destroy(&v97);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "click_type_redirection", (int)(uintptr_t)(&v70) + 2);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v95, &gaia::k_szOldWSLib);
      g4_std::string::Destroy(&v95);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v94), "pointcut_arguments", (int)(uintptr_t)(&v70) + 1);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v94, &gaia::k_szOldWSLib);
      g4_std::string::Destroy(&v94);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v93), "pointcut_id", (int)(uintptr_t)(&v70));
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v93, &v79);
      g4_std::string::Destroy(&v93);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v92), "popup_id", (int)(uintptr_t)(&v69) + 3);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v92, &v80);
      g4_std::string::Destroy(&v92);
      v126[2] = &dword_0 + 2;
      v128 = 2048;
      v126[6] = nullptr;
      v127 = nullptr;
      v129 = 0;
      v130 = 0;
      v131 = 0;
      v130 = opNew(1u);
      v131 = v130;
      v59 = v128;
      v53 = (uint32_t *)(malloc(v128 + 12));
      v53[1] = 0;
      *v53 = v59;
      v53[2] = (uint32_t)(uintptr_t)(v127);
      v127 = v53;
      v126[0] = v67;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v91), "popup_type", (int)(uintptr_t)(&v69) + 2);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v91, (glotv3::EventValue::Self *)v126);
      g4_std::string::Destroy(&v91);
      glotv3::EventValue::Destroy(v126);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v90), "promoted_game", (int)(uintptr_t)(&v69) + 1);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v51), (uint8_t **)&v90, &gaia::k_szNA);
      g4_std::string::Destroy(&v90);
      g4_std::string::Destroy(&v78);
      g4_std::string::Destroy(&v79);
      g4_std::string::Destroy(&v80);
      Json::Value::Destroy((Json::Value::Self *)v125);
      v115 = v119;
      v116 = v120;
      if ( v120 != nullptr )
        ++v120[1];
      v54 = v109;
      if ( v109 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v54 = v109;
      }
      v55 = glotv3::TrackingManager::AddEvent(v54, &v115, 0);
      v19 = v116;
      LOBYTE(v55) = v55 == 1;
      v6 = v55;
      if ( v116 == nullptr )
        goto LABEL_19;
      break;
    case 51855:
      boost::make_shared_19a5e0(&v119);
      v34 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szRewardName));
      Json::Value::asString((Json::Value::Self *)&v83, v34);
      v35 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szRewardAmount);
      v64 = (void *)Json::Value::asInt(v35);
      v36 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutId));
      Json::Value::asString((Json::Value::Self *)&v82, v36);
      v37 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutArguments));
      Json::Value::asString((Json::Value::Self *)&v81, v37);
      v38 = v119;
      if ( v119 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = CrmGlotEv"
          "ent, typename boost::detail::sp_member_access<T>::type = CrmGlotEvent*]",
          "px != 0");
        v38 = v119;
      }
      glotv3::Event::setEventType(v38, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_CA84)->st_size + 3);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v101), "pointcut_arguments", (int)(uintptr_t)(&v72));
      glotv3::Event::addKeyPair((int)(uintptr_t)(v38), (uint8_t **)&v101, &v81);
      g4_std::string::Destroy(&v101);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v100), "pointcut_id", (int)(uintptr_t)(&v71) + 3);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v38), (uint8_t **)&v100, &v82);
      g4_std::string::Destroy(&v100);
      v138[2] = &dword_0 + 2;
      v138[6] = nullptr;
      v139 = nullptr;
      v141 = 0;
      v142 = 0;
      v143 = 0;
      v140 = 2048;
      v142 = opNew(1u);
      v143 = v142;
      v58 = v140;
      v39 = (uint32_t *)(malloc(v140 + 12));
      v39[1] = 0;
      *v39 = v58;
      v39[2] = (uint32_t)(uintptr_t)(v139);
      v139 = v39;
      v138[0] = v64;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v99), "reward_amount", (int)(uintptr_t)(&v71) + 2);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v38), (uint8_t **)&v99, (glotv3::EventValue::Self *)v138);
      g4_std::string::Destroy(&v99);
      glotv3::EventValue::Destroy(v138);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v98), "reward_name", (int)(uintptr_t)(&v71) + 1);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v38), (uint8_t **)&v98, &v83);
      g4_std::string::Destroy(&v98);
      g4_std::string::Destroy(&v81);
      g4_std::string::Destroy(&v82);
      g4_std::string::Destroy(&v83);
      v117 = v119;
      v118 = v120;
      if ( v120 != nullptr )
        ++v120[1];
      v40 = v109;
      if ( v109 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v40 = v109;
      }
      v41 = glotv3::TrackingManager::AddEvent(v40, &v117, 0);
      v19 = v118;
      LOBYTE(v42) = v41 == 1;
      v6 = v42;
      if ( v118 == nullptr )
        goto LABEL_19;
      break;
    case 180437:
      boost::make_shared_19a5e0(&v119);
      v22 = Json::Value::opIndex((Json::Value::Self *)v123, (char **)&gaia::k_szTags);
      Json::Value::asString((Json::Value::Self *)&v88, v22);
      v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v123, (char **)&gaia::k_szPriority);
      v63 = (void *)Json::Value::asInt(v23);
      v24 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutId));
      Json::Value::asString((Json::Value::Self *)&v87, v24);
      v25 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szPointcutArguments));
      Json::Value::asString((Json::Value::Self *)&v86, v25);
      v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szLocationType);
      v66 = (void *)Json::Value::asInt(v26);
      v27 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szFatigueGroup));
      Json::Value::asString((Json::Value::Self *)&v85, v27);
      v28 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v123, &gaia::k_szCampaignID));
      Json::Value::asString((Json::Value::Self *)&v84, v28);
      v29 = v119;
      if ( v119 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = CrmGlotEv"
          "ent, typename boost::detail::sp_member_access<T>::type = CrmGlotEvent*]",
          "px != 0");
        v29 = v119;
      }
      glotv3::Event::setEventType(v29, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_2C0D4)->st_name + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v108), "campaign_id", (int)(uintptr_t)(&v73) + 3);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v108, &v84);
      g4_std::string::Destroy(&v108);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v107), "fatigue_group", (int)(uintptr_t)(&v73) + 2);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v107, &v85);
      g4_std::string::Destroy(&v107);
      v150[2] = &dword_0 + 2;
      v150[6] = nullptr;
      v151 = nullptr;
      v153 = 0;
      v154 = 0;
      v155 = 0;
      v152 = 2048;
      v154 = opNew(1u);
      v155 = v154;
      v56 = v152;
      v30 = (uint32_t *)(malloc(v152 + 12));
      v30[1] = 0;
      *v30 = v56;
      v30[2] = (uint32_t)(uintptr_t)(v151);
      v151 = v30;
      v150[0] = v66;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v106), "location_type", (int)(uintptr_t)(&v73) + 1);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v106, (glotv3::EventValue::Self *)v150);
      g4_std::string::Destroy(&v106);
      glotv3::EventValue::Destroy(v150);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v105), "pointcut_arguments", (int)(uintptr_t)(&v73));
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v105, &v86);
      g4_std::string::Destroy(&v105);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v104), "pointcut_id", (int)(uintptr_t)(&v72) + 3);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v104, &v87);
      g4_std::string::Destroy(&v104);
      v144[2] = &dword_0 + 2;
      v146 = 2048;
      v144[6] = nullptr;
      v145 = nullptr;
      v147 = 0;
      v148 = 0;
      v149 = 0;
      v148 = opNew(1u);
      v149 = v148;
      v57 = v146;
      v31 = (uint32_t *)(malloc(v146 + 12));
      v31[1] = 0;
      *v31 = v57;
      v31[2] = (uint32_t)(uintptr_t)(v145);
      v145 = v31;
      v144[0] = v63;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v103), "priority", (int)(uintptr_t)(&v72) + 2);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v103, (glotv3::EventValue::Self *)v144);
      g4_std::string::Destroy(&v103);
      glotv3::EventValue::Destroy(v144);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v102), "tags", (int)(uintptr_t)(&v72) + 1);
      glotv3::Event::addKeyPair((int)(uintptr_t)(v29), (uint8_t **)&v102, &v88);
      g4_std::string::Destroy(&v102);
      g4_std::string::Destroy(&v84);
      g4_std::string::Destroy(&v85);
      g4_std::string::Destroy(&v86);
      g4_std::string::Destroy(&v87);
      g4_std::string::Destroy(&v88);
      v121 = v119;
      v122 = v120;
      if ( v120 != nullptr )
        ++v120[1];
      v32 = v109;
      if ( v109 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v32 = v109;
      }
      v33 = glotv3::TrackingManager::AddEvent(v32, &v121, 0);
      v19 = v122;
      LOBYTE(v33) = v33 == 1;
      v6 = v33;
      if ( v122 != nullptr )
      {
        v8 = v122[1]-- == 1;
        if ( v8 )
          goto LABEL_31;
      }
      goto LABEL_19;
    default:
      v6 = 0;
      goto LABEL_6;
  }
  v8 = v19[1]-- == 1;
  if ( v8 )
  {
LABEL_31:
    G4_VCALL<void>(v19, 8);
    v8 = v19[2]-- == 1;
    if ( v8 )
      G4_VCALL<void>(v19, 12);
  }
LABEL_19:
  v21 = v120;
  if ( v120 != nullptr )
  {
    v8 = v120[1]-- == 1;
    if ( v8 )
    {
      G4_VCALL<void>(v21, 8);
      v8 = v21[2]-- == 1;
      if ( v8 )
        G4_VCALL<void>(v21, 12);
    }
  }
LABEL_6:
  Json::Value::Destroy((Json::Value::Self *)v123);
  v7 = v110;
  if ( v110 == nullptr )
    return v6;
  v8 = v110[1]-- == 1;
  if ( !v8 )
    return v6;
  G4_VCALL<void>(v7, 8);
  v8 = v7[2]-- == 1;
  if ( !v8 )
    return v6;
  G4_VCALL<void>(v7, 12);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::DeserializePopupList  (binary VA: 0x14da6a0)
// Original: gaia::CrmManager::DeserializePopupList
// ----------------------------------------------------------------------------
int gaia::CrmManager::DeserializePopupList(gaia::CrmManager::Self *self)
{
  int v1;
  int v2;
  char v3;
  uint32_t *v4;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[5];
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int (**_g4_t_v12)(int);
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[7];
  typedef uint8_t _g4_t_v15[8];
  typedef uint8_t _g4_t_v16[68];
  typedef uint32_t _g4_t_v17[29];
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v9)) > _g4_s1 ? (27u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v10)) > _g4_s2 ? (32u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v15)) > _g4_s7 ? (76u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v16)) > _g4_s8 ? (84u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (152u + sizeof(_g4_t_v17)) > _g4_s9 ? (152u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (268u + sizeof(_g4_t_v18)) > _g4_s10 ? (268u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (269u + sizeof(_g4_t_v19)) > _g4_s11 ? (269u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (272u + sizeof(_g4_t_v20)) > _g4_s12 ? (272u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (276u + sizeof(_g4_t_v21)) > _g4_s13 ? (276u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (280u + sizeof(_g4_t_v22)) > _g4_s14 ? (280u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (284u + sizeof(_g4_t_v23)) > _g4_s15 ? (284u + sizeof(_g4_t_v23)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 27u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 152u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 268u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 269u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 272u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 276u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 280u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 284u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "CRMPopup.dat", (int)(uintptr_t)(v9));
  gaia::CrmManager::GetSaveFolderPath((int)(uintptr_t)(&v9[1]), (int)(uintptr_t)(self), (int)(uintptr_t)(&v10));
  g4_std::string::Destroy(&v10);
  sub_1900810(v17);
  v17[28] = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v17[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v12 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
  *(int (***)(int))((char *)&v12 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
  v13 = 0;
  sub_19119D0((char *)&v12 + (uint32_t)(uintptr_t)(*(v12 - 3)), 0);
  v12 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
  v17[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(v14);
  sub_19119D0(v17, v14);
  if ( sub_190AE40((int)(uintptr_t)(v14), *(char **)&v9[1], 8) != 0 )
    sub_1911530((char *)&v12 + (uint32_t)(uintptr_t)(*(v12 - 3)), 0);
  else
    sub_1911530((char *)&v12 + (uint32_t)(uintptr_t)(*(v12 - 3)), *(int *)((char *)&v14[3] + (uint32_t)(uintptr_t)(*(v12 - 3))) | 4);
  if ( (uint8_t)sub_1907FD0(v16) != 0 )
  {
    v11 = &dword_213B814;
    while ( 1 )
    {
      v2 = *(uint32_t *)((char *)&v17[3] + (uint32_t)(uintptr_t)(*(v12 - 3)));
      if ( v2 == 0 )
        sub_18FFF30(v1);
      if ( *(uint8_t *)(v2 + 28) != 0 )
      {
        v3 = *(uint8_t *)(v2 + 39);
      }
      else
      {
        v8 = *(uint32_t *)((char *)&v17[3] + (uint32_t)(uintptr_t)(*(v12 - 3)));
        sub_18FFC70(v8);
        v3 = G4_VCALL<int>(v8, 24, 10);
      }
      v4 = (uint32_t *)sub_1905A30(&v12, &v11, v3);
      if ( (*((uint8_t *)v4 + *(uint32_t *)(*v4 - 12) + 20) & 5) != 0 )
        break;
      v6 = *((uint32_t *)self + 24);
      if ( v6 == *((uint32_t *)self + 25) )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)self + 23, *((char **)self + 24), (int)(uintptr_t)(&v11));
      }
      else
      {
        v7 = 0;
        if ( v6 != 0 )
        {
          g4_std::string::construct_copy(*((uint32_t *)self + 24), &v11);
          v7 = *((uint32_t *)self + 24);
        }
        *((uint32_t *)self + 24) = v7 + 4;
      }
    }
    if ( sub_190AC60(v14) == 0 )
      sub_1911530((char *)&v12 + (uint32_t)(uintptr_t)(*(v12 - 3)), *(int *)((char *)&v12 + (uint32_t)(uintptr_t)(*(v12 - 3)) + 20) | 4);
    g4_std::string::Destroy(&v11);
  }
  v12 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
  v17[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  v14[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v14);
  sub_1908070(v16);
  v14[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v12 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
  *(int (***)(int))((char *)&v12 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
  v13 = 0;
  v17[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v17);
  g4_std::string::Destroy(&v9[1]);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchGLAdsIncentivizedVideo  (binary VA: 0x14dc610)
// Original: gaia::CrmManager::LaunchGLAdsIncentivizedVideo
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchGLAdsIncentivizedVideo(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  int v2;
  uint32_t *v3;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  void *v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef void (*_g4_t_v25)(Json::Value::Self *, int, int);
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v18)) > _g4_s1 ? (24u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v19)) > _g4_s2 ? (24u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v26)) > _g4_s9 ? (44u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v28)) > _g4_s11 ? (64u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v29)) > _g4_s12 ? (80u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v30)) > _g4_s13 ? (96u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);

  v2 = -45;
  v3 = sub_B7A8A0();
  if ( G4_VCALL<int>(v3, 112) == 2 && !gaia::CrmManager::IsWSOnScreen() )
  {
    Json::Value::Construct((int)(uintptr_t)(v27), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v28), (char *)&loc_6 + 1);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v27, &gaia::k_szData);
    Json::Value::opAssign(v5, (const Json::Value::Self *)v28);
    Json::Value::Destroy((Json::Value::Self *)v28);
    Json::Value::Construct((Json::Value::Self *)v29, 180437);
    v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v27, &gaia::k_szType);
    Json::Value::opAssign(v6, (const Json::Value::Self *)v29);
    Json::Value::Destroy((Json::Value::Self *)v29);
    v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v27, &gaia::k_szData);
    v18 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szCampaignID);
    v8 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szCampaignID);
    Json::Value::opAssign(v8, v18);
    v19 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szFatigueGroup);
    v9 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szFatigueGroup);
    Json::Value::opAssign(v9, v19);
    Json::Value::Construct((Json::Value::Self *)v30, 182346);
    v10 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szLocationType);
    Json::Value::opAssign(v10, (const Json::Value::Self *)v30);
    Json::Value::Destroy((Json::Value::Self *)v30);
    v20 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutArguments);
    v11 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szPointcutArguments);
    Json::Value::opAssign(v11, v20);
    v21 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
    v12 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szPointcutId);
    Json::Value::opAssign(v12, v21);
    v22 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPriority);
    v13 = (Json::Value::Self *)Json::Value::opIndex(v7, (char **)&gaia::k_szPriority);
    Json::Value::opAssign(v13, v22);
    v23 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szTags);
    v14 = (Json::Value::Self *)Json::Value::opIndex(v7, (char **)&gaia::k_szTags);
    Json::Value::opAssign(v14, v23);
    v24 = (Json::Value::Self *)dword_2119E4C;
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(dword_2119E4C + 4));
    g4_std::deque_Json_Value_849cbf::push_back((Json::Value::Self *)((char *)v24 + 12), (const Json::Value::Self *)v27);
    glwebtools::Mutex::Unlock((Json::Value::Self *)((char *)v24 + 4));
    v15 = (Json::Value::Self *)sub_B7A8A0();
    v25 = *(void (**)(Json::Value::Self *, int, int))(*(uint32_t *)v15 + 12);
    v16 = Json::Value::opIndex(a2, (const char **)&gaia::k_szPopupAdsLocation);
    Json::Value::asString((Json::Value::Self *)&v26, (int)(uintptr_t)(v16));
    v17 = v15;
    v2 = 0;
    v25(v17, v26, 1);
    g4_std::string::Destroy(&v26);
    Json::Value::Destroy((Json::Value::Self *)v27);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchGLAdsInterstitial  (binary VA: 0x14dc970)
// Original: gaia::CrmManager::LaunchGLAdsInterstitial
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchGLAdsInterstitial(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  int v2;
  uint32_t *v3;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  void *v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef void (*_g4_t_v25)(Json::Value::Self *, int, uint32_t);
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v18)) > _g4_s1 ? (24u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v19)) > _g4_s2 ? (24u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v26)) > _g4_s9 ? (44u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v28)) > _g4_s11 ? (64u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v29)) > _g4_s12 ? (80u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v30)) > _g4_s13 ? (96u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);

  v2 = -45;
  v3 = sub_B7A8A0();
  if ( G4_VCALL<int>(v3, 112) == 2 && !gaia::CrmManager::IsWSOnScreen() )
  {
    Json::Value::Construct((int)(uintptr_t)(v27), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v28), (char *)&loc_6 + 1);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v27, &gaia::k_szData);
    Json::Value::opAssign(v5, (const Json::Value::Self *)v28);
    Json::Value::Destroy((Json::Value::Self *)v28);
    Json::Value::Construct((Json::Value::Self *)v29, 180437);
    v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v27, &gaia::k_szType);
    Json::Value::opAssign(v6, (const Json::Value::Self *)v29);
    Json::Value::Destroy((Json::Value::Self *)v29);
    v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v27, &gaia::k_szData);
    v18 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szCampaignID);
    v8 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szCampaignID);
    Json::Value::opAssign(v8, v18);
    v19 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szFatigueGroup);
    v9 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szFatigueGroup);
    Json::Value::opAssign(v9, v19);
    Json::Value::Construct((Json::Value::Self *)v30, 182345);
    v10 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szLocationType);
    Json::Value::opAssign(v10, (const Json::Value::Self *)v30);
    Json::Value::Destroy((Json::Value::Self *)v30);
    v20 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutArguments);
    v11 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szPointcutArguments);
    Json::Value::opAssign(v11, v20);
    v21 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
    v12 = (Json::Value::Self *)Json::Value::opIndex(v7, &gaia::k_szPointcutId);
    Json::Value::opAssign(v12, v21);
    v22 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPriority);
    v13 = (Json::Value::Self *)Json::Value::opIndex(v7, (char **)&gaia::k_szPriority);
    Json::Value::opAssign(v13, v22);
    v23 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szTags);
    v14 = (Json::Value::Self *)Json::Value::opIndex(v7, (char **)&gaia::k_szTags);
    Json::Value::opAssign(v14, v23);
    v24 = (Json::Value::Self *)dword_2119E4C;
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(dword_2119E4C + 4));
    g4_std::deque_Json_Value_849cbf::push_back((Json::Value::Self *)((char *)v24 + 12), (const Json::Value::Self *)v27);
    glwebtools::Mutex::Unlock((Json::Value::Self *)((char *)v24 + 4));
    v15 = (Json::Value::Self *)sub_B7A8A0();
    v25 = *(void (**)(Json::Value::Self *, int, uint32_t))(*(uint32_t *)v15 + 12);
    v16 = Json::Value::opIndex(a2, (const char **)&gaia::k_szPopupAdsLocation);
    Json::Value::asString((Json::Value::Self *)&v26, (int)(uintptr_t)(v16));
    v17 = v15;
    v2 = 0;
    v25(v17, v26, 0);
    g4_std::string::Destroy(&v26);
    Json::Value::Destroy((Json::Value::Self *)v27);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::LaunchGLAdsBanner  (binary VA: 0x14dccd0)
// Original: gaia::CrmManager::LaunchGLAdsBanner
// ----------------------------------------------------------------------------
int gaia::CrmManager::LaunchGLAdsBanner(gaia::CrmManager::Self *a1, Json::Value::Self *a2, int a3, int a4, int a5)
{
  int v5;
  uint32_t *v6;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  void *v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef void (*_g4_t_v28)(Json::Value::Self *, int, int, int, int);
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v21)) > _g4_s1 ? (40u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v22)) > _g4_s2 ? (40u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v23)) > _g4_s3 ? (40u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v24)) > _g4_s4 ? (40u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v25)) > _g4_s5 ? (40u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v26)) > _g4_s6 ? (40u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v27)) > _g4_s7 ? (40u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v28)) > _g4_s8 ? (44u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v29)) > _g4_s9 ? (60u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v30)) > _g4_s10 ? (64u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v31)) > _g4_s11 ? (80u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v32)) > _g4_s12 ? (96u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v33)) > _g4_s13 ? (112u + sizeof(_g4_t_v33)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);

  v5 = -45;
  v6 = sub_B7A8A0();
  if ( G4_VCALL<int>(v6, 116) == 2 && !gaia::CrmManager::IsWSOnScreen() )
  {
    Json::Value::Construct((int)(uintptr_t)(v30), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v31), (char *)&loc_6 + 1);
    v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v30, &gaia::k_szData);
    Json::Value::opAssign(v8, (const Json::Value::Self *)v31);
    Json::Value::Destroy((Json::Value::Self *)v31);
    Json::Value::Construct((Json::Value::Self *)v32, 180437);
    v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v30, &gaia::k_szType);
    Json::Value::opAssign(v9, (const Json::Value::Self *)v32);
    Json::Value::Destroy((Json::Value::Self *)v32);
    v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v30, &gaia::k_szData);
    v21 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szCampaignID);
    v11 = (Json::Value::Self *)Json::Value::opIndex(v10, &gaia::k_szCampaignID);
    Json::Value::opAssign(v11, v21);
    v22 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szFatigueGroup);
    v12 = (Json::Value::Self *)Json::Value::opIndex(v10, &gaia::k_szFatigueGroup);
    Json::Value::opAssign(v12, v22);
    Json::Value::Construct((Json::Value::Self *)v33, 182344);
    v13 = (Json::Value::Self *)Json::Value::opIndex(v10, &gaia::k_szLocationType);
    Json::Value::opAssign(v13, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    v23 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutArguments);
    v14 = (Json::Value::Self *)Json::Value::opIndex(v10, &gaia::k_szPointcutArguments);
    Json::Value::opAssign(v14, v23);
    v24 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szPointcutId);
    v15 = (Json::Value::Self *)Json::Value::opIndex(v10, &gaia::k_szPointcutId);
    Json::Value::opAssign(v15, v24);
    v25 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPriority);
    v16 = (Json::Value::Self *)Json::Value::opIndex(v10, (char **)&gaia::k_szPriority);
    Json::Value::opAssign(v16, v25);
    v26 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szTags);
    v17 = (Json::Value::Self *)Json::Value::opIndex(v10, (char **)&gaia::k_szTags);
    Json::Value::opAssign(v17, v26);
    v27 = (Json::Value::Self *)dword_2119E4C;
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(dword_2119E4C + 4));
    g4_std::deque_Json_Value_849cbf::push_back((Json::Value::Self *)((char *)v27 + 52), (const Json::Value::Self *)v30);
    glwebtools::Mutex::Unlock((Json::Value::Self *)((char *)v27 + 4));
    v18 = (Json::Value::Self *)sub_B7A8A0();
    v28 = *(void (**)(Json::Value::Self *, int, int, int, int))(*(uint32_t *)v18 + 28);
    v19 = Json::Value::opIndex(a2, (const char **)&gaia::k_szPopupAdsLocation);
    Json::Value::asString((Json::Value::Self *)&v29, (int)(uintptr_t)(v19));
    v20 = v18;
    v5 = 0;
    v28(v20, v29, a3, a4, a5);
    g4_std::string::Destroy(&v29);
    Json::Value::Destroy((Json::Value::Self *)v30);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::ResetCrmManager  (binary VA: 0x14dd050)
// Original: gaia::CrmManager::ResetCrmManager
// ----------------------------------------------------------------------------
int gaia::CrmManager::ResetCrmManager(long double a1, void **self)
{
  gaia::CrmManager::Self *v3;
  gaia::CrmManager::Self *v4;
  gaia::CrmManager::Self *v5;
  gaia::CrmManager::Self *v6;
  gaia::CrmManager::Self *v7;
  gaia::CrmManager::Self *v8;
  gaia::CrmManager::Self *v9;
  gaia::CrmManager::Self *v10;
  gaia::CrmManager::Self *v11;

  if ( gaia::CrmManager::s_IsInitialized[0] != 0 )
  {
    gaia::CrmManager::s_IsInitialized[0] = 0;
    gaia::CrmManager::SerializeActions(a1, (gaia::CrmManager::Self *)self);
    gaia::CrmManager::ClearActionList((gaia::CrmManager::Self *)self);
    g4_std::Rb_tree_string_pair_string_const_7bd88c::M_erase(
      (int)(uintptr_t)(self + 30),
      *(self + 32));
    v3 = (gaia::CrmManager::Self *)*(self + 21);
    *(self + 33) = self + 31;
    *(self + 34) = self + 31;
    v4 = (gaia::CrmManager::Self *)*(self + 20);
    *(self + 32) = nullptr;
    *(self + 35) = nullptr;
    v10 = v4;
    if ( v4 != v3 )
    {
      v5 = v4;
      do
      {
        v8 = v5;
        v5 = (gaia::CrmManager::Self *)((char *)v5 + 4);
        g4_std::string::Destroy(v8);
      }
      while ( v3 != v5 );
    }
    v6 = (gaia::CrmManager::Self *)*(self + 24);
    *(self + 21) = v10;
    v11 = (gaia::CrmManager::Self *)*(self + 23);
    if ( v11 != v6 )
    {
      v7 = (gaia::CrmManager::Self *)*(self + 23);
      do
      {
        v9 = v7;
        v7 = (gaia::CrmManager::Self *)((char *)v7 + 4);
        g4_std::string::Destroy(v9);
      }
      while ( v6 != v7 );
    }
    *(self + 24) = v11;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::Destroy  (binary VA: 0x14e1dd0)
// Original: gaia::CrmManager::~CrmManager
// ----------------------------------------------------------------------------
void gaia::CrmManager::Destroy(long double a1, void **self)
{
  void **v2;
  gaia::CrmManager::Self *v3;
  gaia::CrmManager::Self *v4;
  gaia::CrmManager::Self *v5;
  gaia::CrmManager::Self *v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  uint32_t *v11;
  bool v12;
  gaia::CrmManager::Self *v13;
  gaia::CrmManager::Self *v14;
  char *v15;
  char *v16;

  v2 = self;
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2095E38));
  if ( dword_2119E4C != 0 )
    a1 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)dword_2119E4C + 4))(dword_2119E4C);
  dword_2119E4C = 0;
  gaia::CrmManager::SerializeActions(a1, (gaia::CrmManager::Self *)self);
  gaia::CrmManager::ClearActionList((gaia::CrmManager::Self *)self);
  gaia::CrmManager::s_IsInitialized[0] = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self + 16), &unk_1B15112, 0);
  g4_std::Rb_tree_string_pair_string_const_7bd88c::M_erase(
    (int)(uintptr_t)(self + 30),
    *(self + 32));
  Json::Value::Destroy((Json::Value::Self *)(self + 26));
  v3 = (gaia::CrmManager::Self *)*(self + 24);
  v4 = (gaia::CrmManager::Self *)*(self + 23);
  if ( v3 != v4 )
  {
    do
    {
      v13 = v4;
      v4 = (gaia::CrmManager::Self *)((char *)v4 + 4);
      g4_std::string::Destroy(v13);
    }
    while ( v3 != v4 );
    v4 = (gaia::CrmManager::Self *)*(self + 23);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  v5 = (gaia::CrmManager::Self *)*(self + 21);
  v6 = (gaia::CrmManager::Self *)*(self + 20);
  if ( v5 != v6 )
  {
    do
    {
      v14 = v6;
      v6 = (gaia::CrmManager::Self *)((char *)v6 + 4);
      g4_std::string::Destroy(v14);
    }
    while ( v5 != v6 );
    v6 = (gaia::CrmManager::Self *)*(self + 20);
  }
  if ( v6 != nullptr )
    opDelete(v6);
  v7 = (char *)*(self + 18);
  v8 = (char *)*(self + 17);
  if ( v7 != v8 )
  {
    v9 = (char *)*(self + 17);
    v10 = v8 + 4;
    v16 = v9;
    do
    {
      while ( 1 )
      {
        v11 = *(uint32_t **)&v10[v9 - v16];
        if ( v11 != nullptr )
        {
          v12 = v11[1]-- == 1;
          if ( v12 )
          {
            v15 = v10;
            G4_VCALL<void>(v11, 8);
            v12 = v11[2]-- == 1;
            v10 = v15;
            if ( v12 )
              break;
          }
        }
        v9 += 8;
        if ( v7 == v9 )
          goto LABEL_20;
      }
      v9 += 8;
      (*(void (**)(char *, uint32_t *))(*v11 + 12))(v15, v11);
      v10 = v15;
    }
    while ( v7 != v9 );
LABEL_20:
    v2 = self;
    v8 = (char *)*(self + 17);
  }
  if ( v8 != nullptr )
    opDelete(v8);
  g4_std::string::Destroy(self + 16);
  Json::Value::Destroy((Json::Value::Self *)(v2 + 12));
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(v2 + 10));
  g4_std::string::Destroy(v2 + 9);
  g4_std::string::Destroy(v2 + 8);
  g4_std::string::Destroy(v2 + 7);
  gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy((gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *)v2);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::Destroy_ea14e1fa0  (binary VA: 0x14e1fa0)
// Original: gaia::CrmManager::~CrmManager
// ----------------------------------------------------------------------------
void gaia::CrmManager::Destroy_ea14e1fa0(long double a1, void **self)
{
  gaia::CrmManager::Destroy(a1, self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::ParseFatigueGroupList  (binary VA: 0x14e27b0)
// Original: gaia::CrmManager::ParseFatigueGroupList
// ----------------------------------------------------------------------------
int gaia::CrmManager::ParseFatigueGroupList(gaia::CrmManager::Self *self, const Json::Value::Self *a2)
{
  int result;
  Json::Value::Self *v3;
  uint8_t *untyped_deleter;
  uint8_t *v5;
  gaia::CrmFatigueGroup::Self *v6;
  bool v7;
  boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *v8;
  char *Name;
  size_t v10;
  char *i;
  char *v12;
  uint32_t *v13;
  size_t v14;
  size_t v15;
  int v16;
  uint32_t *v17;
  char *v18;
  size_t v19;
  uint32_t *v20;
  int v21;
  int v22;
  boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *v23;
  boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *v24;
  int v25;
  int v26;
  boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *v27;
  typedef char *_g4_t_s2;
  typedef size_t _g4_t_n;
  typedef char *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *_g4_t_v35;
  typedef void *_g4_t_s1;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39[8];
  typedef char _g4_t_v40[4];
  typedef char _g4_t_v41[4];
  typedef gaia::CrmFatigueGroup::Self *_g4_t_v42;
  typedef boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *_g4_t_v43;
  typedef uint32_t _g4_t_v44[2];
  typedef boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *_g4_t_v45;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_s2)) > _g4_s0 ? (4u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_n)) > _g4_s1 ? (8u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v32)) > _g4_s4 ? (40u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v33)) > _g4_s5 ? (48u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v34)) > _g4_s6 ? (52u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v35)) > _g4_s7 ? (56u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_s1)) > _g4_s8 ? (60u + sizeof(_g4_t_s1)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v37)) > _g4_s9 ? (64u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v38)) > _g4_s10 ? (72u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v39)) > _g4_s11 ? (76u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v40)) > _g4_s12 ? (84u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v41)) > _g4_s13 ? (88u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v42)) > _g4_s14 ? (92u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v43)) > _g4_s15 ? (96u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v44)) > _g4_s16 ? (100u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v45)) > _g4_s17 ? (108u + sizeof(_g4_t_v45)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);

  v38 = Json::Value::size(a2);
  result = 0;
  if ( v38 <= 0 )
    return result;
  v37 = 0;
  while ( 1 )
  {
    v3 = (Json::Value::Self *)Json::Value::opIndex(a2, v37);
    if ( (uint8_t)Json::Value::isObject(v3) == 0 )
      return -34;
    v35 = (boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *)opNew(0x54u);
    *((uint32_t *)v35 + 1) = 1;
    *((uint32_t *)v35 + 2) = 1;
    *(uint32_t *)v35 = ((uint32_t)(uintptr_t)&off_2095F48);
    *((uint32_t *)v35 + 3) = 0;
    *((uint8_t *)v35 + 16) = 0;
    untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::get_untyped_deleter(v35);
    v5 = untyped_deleter;
    v6 = (gaia::CrmFatigueGroup::Self *)(untyped_deleter + 4);
    if ( untyped_deleter != (uint8_t *)-4 )
      gaia::CrmFatigueGroup::Construct((gaia::CrmFatigueGroup::Self *)(untyped_deleter + 4), v3);
    *v5 = 1;
    if ( *((uint32_t *)v35 + 1) == 0 )
    {
      G4_VCALL<void>(v35, 8);
      v7 = (*((uint32_t *)v35 + 2))-- == 1;
      if ( v7 )
        break;
    }
    if ( v6 == nullptr )
      goto LABEL_44;
LABEL_8:
    v7 = (uint8_t)gaia::CrmFatigueGroup::IsValid(v6) == 0;
    v8 = v35;
    if ( v7 )
      goto LABEL_45;
LABEL_9:
    ++*((uint32_t *)v8 + 1);
    if ( v6 == nullptr )
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmFa"
        "tigueGroup, typename boost::detail::sp_member_access<T>::type = gaia::CrmFatigueGroup*]",
        "px != 0");
    Name = gaia::CrmFatigueGroup::GetName(v6);
    g4_std::string::construct_copy(v40, Name);
    g4_std::string::construct_copy(v41, v40);
    v42 = v6;
    v43 = v35;
    ++*((uint32_t *)v35 + 1);
    g4_std::string::construct_copy(v44, v41);
    v44[1] = (uint32_t)(uintptr_t)(v42);
    v45 = v43;
    if ( v43 != nullptr )
      ++*((uint32_t *)v43 + 1);
    if ( *((uint32_t *)self + 32) != 0 )
    {
      s1 = (void *)v44[0];
      v10 = *(uint32_t *)(v44[0] - 12);
      for ( i = *((char **)self + 32); ; i = v12 )
      {
        v13 = *((uint32_t **)i + 4);
        v14 = *(v13 - 3);
        v15 = v14;
        v33 = i;
        if ( v10 <= v14 )
          v15 = v10;
        v32 = v15;
        v16 = memcmp(s1, *((const void **)i + 4), v15);
        if ( v16 == 0 )
          v16 = v10 - v14;
        if ( v16 < 0 )
        {
          v12 = *((char **)v33 + 2);
          v34 = 1;
          if ( v12 == nullptr )
            goto LABEL_23;
        }
        else
        {
          v12 = *((char **)v33 + 3);
          v34 = 0;
          if ( v12 == nullptr )
          {
LABEL_23:
            v17 = v13;
            v18 = v33;
            v19 = v32;
            v20 = v17;
            if ( v34 == 0 )
              goto LABEL_24;
            goto LABEL_38;
          }
        }
      }
    }
    v18 = (char *)self + 124;
LABEL_38:
    if ( *((char **)self + 33) == v18 )
      goto LABEL_27;
    v20 = *(uint32_t **)(sub_19048F0(v18) + 16);
    s1 = (void *)v44[0];
    v10 = *(uint32_t *)(v44[0] - 12);
    v14 = *(v20 - 3);
    v19 = v14;
    if ( v10 <= v14 )
      v19 = *(uint32_t *)(v44[0] - 12);
LABEL_24:
    v21 = memcmp(v20, s1, v19);
    v22 = v14 - v10;
    if ( v21 == 0 )
      v21 = v22;
    if ( v21 < 0 )
    {
LABEL_27:
      v30 = v18;
      v31 = v44;
      n = 0;
      s2 = (char *)self + 120;
      g4_std::Rb_tree_string_pair_string_const_7bd88c::M_insert(v39);
    }
    v23 = v45;
    if ( v45 != nullptr )
    {
      v7 = (*((uint32_t *)v45 + 1))-- == 1;
      if ( v7 )
      {
        G4_VCALL<void>(v23, 8, s2, n, v30, v31);
        v7 = (*((uint32_t *)v23 + 2))-- == 1;
        if ( v7 )
          G4_VCALL<void>(v23, 12);
      }
    }
    g4_std::string::Destroy(v44);
    v24 = v43;
    if ( v43 != nullptr )
    {
      v7 = (*((uint32_t *)v43 + 1))-- == 1;
      if ( v7 )
      {
        G4_VCALL<void>(v24, 8);
        v7 = (*((uint32_t *)v24 + 2))-- == 1;
        if ( v7 )
          G4_VCALL<void>(v24, 12);
      }
    }
    g4_std::string::Destroy(v41);
    g4_std::string::Destroy(v40);
    v25 = *((uint32_t *)v35 + 1) - 1;
    v7 = *((uint32_t *)v35 + 1) == 1;
    *((uint32_t *)v35 + 1) = v25;
    if ( v7 )
    {
      G4_VCALL<void>(v35, 8);
      v27 = v35;
      v7 = (*((uint32_t *)v35 + 2))-- == 1;
      if ( v7 )
      {
        G4_VCALL<void>(v35, 12);
        v27 = v35;
      }
      v25 = *((uint32_t *)v27 + 1);
    }
    v26 = v25 - 1;
    *((uint32_t *)v35 + 1) = v26;
    if ( v26 == 0 )
    {
      G4_VCALL<void>(v35, 8);
      v7 = (*((uint32_t *)v35 + 2))-- == 1;
      if ( v7 )
        G4_VCALL<void>(v35, 12);
    }
    if ( v38 == ++v37 )
      return 0;
  }
  G4_VCALL<void>(v35, 12);
  if ( v6 != nullptr )
    goto LABEL_8;
LABEL_44:
  __assert2(
    "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
    653,
    "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmFatigu"
    "eGroup, typename boost::detail::sp_member_access<T>::type = gaia::CrmFatigueGroup*]",
    "px != 0");
  v7 = (uint8_t)gaia::CrmFatigueGroup::IsValid(v6) == 0;
  v8 = v35;
  if ( !v7 )
    goto LABEL_9;
LABEL_45:
  v7 = (*((uint32_t *)v8 + 1))-- == 1;
  result = -34;
  if ( v7 )
  {
    G4_VCALL<void>(v35, 8);
    v7 = (*((uint32_t *)v35 + 2))-- == 1;
    result = -34;
    if ( v7 )
    {
      G4_VCALL<void>(v35, 12);
      return -34;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::IsPointcutAvailable  (binary VA: 0x14e30d0)
// Original: gaia::CrmManager::IsPointcutAvailable
// ----------------------------------------------------------------------------
int gaia::CrmManager::IsPointcutAvailable(gaia::CrmAction::Self ***a1, const void **a2, Json::Value::Self *a3)
{
  gaia::CrmAction::Self **v4;
  gaia::CrmAction::Self *v5;
  gaia::CrmAction::Self *v6;
  __time_t CurrentOrCachedTimestamp;
  unsigned int ***v8;
  gaia::CrmAction::Self *v9;
  gaia::CrmAction::Self *v10;
  __time_t v11;
  int v12;
  glwebtools::Mutex::Self *v13;

  v12 = -43;
  if ( gaia::CrmManager::s_IsInitialized[0] == 0 )
    return v12;
  v12 = gaia::CrmManager::VerifyPointcut((int)(uintptr_t)(a1), a2, a3);
  if ( v12 != 0 )
    return v12;
  v13 = (glwebtools::Mutex::Self *)(a1 + 10);
  if ( !glwebtools::Mutex::TryLock((pthread_mutex_t ***)a1 + 10) )
    return -45;
  v4 = a1[17];
  if ( v4 == a1[18] )
  {
LABEL_25:
    v12 = -36;
    glwebtools::Mutex::Unlock(v13);
  }
  else
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::Crm"
          "Action, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
          "px != 0");
        v5 = *v4;
      }
      if ( gaia::CrmAction::CheckTriggerConditions(v5, (int)(uintptr_t)(a2), a3) == 0 )
      {
        v6 = *v4;
        if ( *v4 == nullptr )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::C"
            "rmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
            "px != 0");
          v6 = *v4;
        }
        if ( (int)(100.0 * *(double *)((char *)v6 + 44)) > 99 )
        {
          CurrentOrCachedTimestamp = gaia::CrmAction::GetCurrentOrCachedTimestamp(v6);
          v8 = (unsigned int ***)*v4;
          if ( *v4 == nullptr )
          {
            v11 = CurrentOrCachedTimestamp;
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia:"
              ":CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
              "px != 0");
            v8 = (unsigned int ***)*v4;
            CurrentOrCachedTimestamp = v11;
          }
          if ( (uint8_t)gaia::CrmAction::CheckFatigueGroupConstraints(v8, CurrentOrCachedTimestamp) != 0 )
          {
            v9 = *v4;
            if ( *v4 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gai"
                "a::CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
                "px != 0");
              v9 = *v4;
            }
            gaia::CrmAction::GetCurrentOrCachedTimestamp(v9);
            v10 = *v4;
            if ( *v4 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gai"
                "a::CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
                "px != 0");
              v10 = *v4;
            }
            if ( gaia::CrmAction::CheckCooldowns(v10) == 0 )
              break;
          }
        }
      }
      v4 += 2;
      if ( v4 == a1[18] )
        goto LABEL_25;
    }
    glwebtools::Mutex::Unlock(v13);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::Trigger  (binary VA: 0x14e3890)
// Original: gaia::CrmManager::Trigger
// ----------------------------------------------------------------------------
int gaia::CrmManager::Trigger(pthread_mutex_t ***a1, const void **a2, uint8_t *a3, Json::Value::Self *a4, unsigned int a5)
{
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  gaia::CrmAction::Self **v8;
  gaia::CrmAction::Self *v9;
  int v10;
  bool v11;
  gaia::CrmAction::Self *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v14)) > _g4_s1 ? (28u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v16)) > _g4_s3 ? (48u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);

  Json::Value::Construct((int)(uintptr_t)(v15), nullptr);
  Json::Value::Construct((int)(uintptr_t)(v16), a2);
  v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szLocation);
  Json::Value::opAssign(v5, (const Json::Value::Self *)v16);
  Json::Value::Destroy((Json::Value::Self *)v16);
  v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v15, &gaia::k_szData);
  Json::Value::opAssign(v6, a4);
  g4_std::string::construct_copy(&v14, &gaia::k_szEvent);
  gaia::CrmManager::LogEventViaGLOT((int)(uintptr_t)(a1), (Json::Value::Self *)v15, (char **)&v14);
  g4_std::string::Destroy(&v14);
  v13 = -43;
  if ( gaia::CrmManager::s_IsInitialized[0] != 0 )
  {
    v13 = gaia::CrmManager::VerifyPointcut((int)(uintptr_t)(a1), a2, a4);
    if ( v13 == 0 )
    {
      if ( glwebtools::Mutex::TryLock(a1 + 10) )
      {
        v8 = (gaia::CrmAction::Self **)a1[17];
        if ( v8 != (gaia::CrmAction::Self **)a1[18] )
        {
          do
          {
            v9 = *v8;
            if ( *v8 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gai"
                "a::CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
                "px != 0");
              v9 = *v8;
            }
            v10 = gaia::CrmAction::Trigger(v9, a2, a4, a5);
            v11 = false;
            if ( v10 == 0 )
            {
              *a3 = 1;
              v12 = *v8;
              if ( *v8 == nullptr )
              {
                __assert2(
                  "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                  653,
                  "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = g"
                  "aia::CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
                  "px != 0");
                v12 = *v8;
              }
              v11 = gaia::CrmAction::GetPriority(v12) != 0;
            }
            v8 += 2;
          }
          while ( v8 != (gaia::CrmAction::Self **)a1[18] && !v11 );
        }
        glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 10));
      }
      else
      {
        v13 = -45;
      }
    }
  }
  Json::Value::Destroy((Json::Value::Self *)v15);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::TriggerPointCut  (binary VA: 0x14e3aa0)
// Original: gaia::CrmManager::TriggerPointCut
// ----------------------------------------------------------------------------
int gaia::CrmManager::TriggerPointCut(pthread_mutex_t ***a1, const void **a2, uint8_t *a3, Json::Value::Self *a4)
{
  return gaia::CrmManager::Trigger(a1, a2, a3, a4, 0);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::TriggerPointCut  (binary VA: 0x14e3af0)
// Original: gaia::CrmManager::TriggerPointCut
// ----------------------------------------------------------------------------
int gaia::CrmManager::TriggerPointCut(pthread_mutex_t ***a1, const void **a2, Json::Value::Self *a3)
{
  int v4[3];

  return gaia::CrmManager::Trigger(a1, a2, (uint8_t *)(v4), a3, 0);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::Construct  (binary VA: 0x14e7010)
// Original: gaia::CrmManager::CrmManager
// ----------------------------------------------------------------------------
void gaia::CrmManager::Construct(gaia::CrmManager::Self *self)
{
  unsigned int v1;
  Json::Value::Self *v2;
  Json::Value::Self *v3;
  Json::Value::Self *v4;
  Json::Value::Self **v5;
  Json::Value::Self *v6;
  int v7;
  Json::Value::Self *v8;
  void *v9;
  void **v10;
  unsigned int v11;
  void *v12;
  unsigned int v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self **v17;
  Json::Value::Self *v18;
  int v19;
  Json::Value::Self *v20;
  void *v21;
  void **v22;
  unsigned int v23;
  void *v24;
  uint32_t *v25;
  uint32_t *v26;
  int Instance;
  typedef Json::Value::Self *_g4_t_v28;
  typedef Json::Value::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef Json::Value::Self *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef Json::Value::Self *_g4_t_v40;
  typedef Json::Value::Self *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef Json::Value::Self *_g4_t_v45;
  typedef Json::Value::Self *_g4_t_v46;
  typedef Json::Value::Self *_g4_t_v47;
  typedef Json::Value::Self *_g4_t_v48;
  typedef Json::Value::Self *_g4_t_v49;
  typedef Json::Value::Self *_g4_t_v50;
  typedef Json::Value::Self *_g4_t_v51;
  typedef Json::Value::Self *_g4_t_v52;
  typedef void *_g4_t_v53;
  typedef uint32_t _g4_t_v54[2];
  typedef Json::Value::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef Json::Value::Self *_g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef Json::Value::Self *_g4_t_v59;
  typedef Json::Value::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef void *_g4_t_v63[2];
  typedef Json::Value::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef Json::Value::Self *_g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef Json::Value::Self *_g4_t_v68;
  typedef Json::Value::Self *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v30)) > _g4_s2 ? (0u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v31)) > _g4_s3 ? (0u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v32)) > _g4_s4 ? (0u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v33)) > _g4_s5 ? (0u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v34)) > _g4_s6 ? (0u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v35)) > _g4_s7 ? (0u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v36)) > _g4_s8 ? (16u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v37)) > _g4_s9 ? (16u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v38)) > _g4_s10 ? (16u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v39)) > _g4_s11 ? (16u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v40)) > _g4_s12 ? (20u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v41)) > _g4_s13 ? (20u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v42)) > _g4_s14 ? (24u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v43)) > _g4_s15 ? (28u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v44)) > _g4_s16 ? (28u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v45)) > _g4_s17 ? (32u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v46)) > _g4_s18 ? (32u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v47)) > _g4_s19 ? (32u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v48)) > _g4_s20 ? (32u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v49)) > _g4_s21 ? (36u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v50)) > _g4_s22 ? (36u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v51)) > _g4_s23 ? (40u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v52)) > _g4_s24 ? (40u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (63u + sizeof(_g4_t_v53)) > _g4_s25 ? (63u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v54)) > _g4_s26 ? (64u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v55)) > _g4_s27 ? (72u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v56)) > _g4_s28 ? (76u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v57)) > _g4_s29 ? (80u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v58)) > _g4_s30 ? (84u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v59)) > _g4_s31 ? (88u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v60)) > _g4_s32 ? (92u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v61)) > _g4_s33 ? (96u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v62)) > _g4_s34 ? (100u + sizeof(_g4_t_v62)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v63)) > _g4_s35 ? (104u + sizeof(_g4_t_v63)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v64)) > _g4_s36 ? (112u + sizeof(_g4_t_v64)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v65)) > _g4_s37 ? (116u + sizeof(_g4_t_v65)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v66)) > _g4_s38 ? (120u + sizeof(_g4_t_v66)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v67)) > _g4_s39 ? (124u + sizeof(_g4_t_v67)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v68)) > _g4_s40 ? (128u + sizeof(_g4_t_v68)) : _g4_s40,
    _g4_s42 = (132u + sizeof(_g4_t_v69)) > _g4_s41 ? (132u + sizeof(_g4_t_v69)) : _g4_s41,
    _g4_s43 = (136u + sizeof(_g4_t_v70)) > _g4_s42 ? (136u + sizeof(_g4_t_v70)) : _g4_s42,
    _g4_s44 = (140u + sizeof(_g4_t_v71)) > _g4_s43 ? (140u + sizeof(_g4_t_v71)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 63u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 132u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 140u);

  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E38);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Mutex::Construct((gaia::CrmManager::Self *)((char *)self + 40));
  Json::Value::Construct((int)(uintptr_t)(self) + 48, nullptr);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 64, (char *)&unk_1B15112, (int)(uintptr_t)(&v53));
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  Json::Value::Construct((int)(uintptr_t)(self) + 104, nullptr);
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)((char *)self + 124);
  *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)((char *)self + 124);
  *((uint8_t *)self + 144) = 1;
  v42 = (uint32_t *)opNew(0x5Cu);
  *v42 = (uint32_t)(uintptr_t)(&off_2037DF0);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)(v42 + 1));
  v54[0] = 0;
  v54[1] = 0;
  v55 = nullptr;
  v56 = 0;
  v57 = nullptr;
  v58 = 0;
  v59 = nullptr;
  v60 = nullptr;
  v61 = 0;
  v62 = 0;
  g4_std::Deque_base_Json_Value_e60cac::M_initialize_map((std::_Deque_base<Json::Value::Self> *)v54, 0);
  v1 = ((v59 - v60) >> 4) + 32 * (((int)(v62 - v58) >> 2) - 1) + ((v57 - v55) >> 4);
  v42[3] = 0;
  v42[4] = 0;
  v42[5] = 0;
  v42[6] = 0;
  v42[7] = 0;
  v42[8] = 0;
  v42[9] = 0;
  v42[10] = 0;
  v42[11] = 0;
  v42[12] = 0;
  g4_std::Deque_base_Json_Value_e60cac::M_initialize_map((std::_Deque_base<Json::Value::Self> *)(v42 + 3), v1);
  v2 = v55;
  v3 = (Json::Value::Self *)v42[5];
  v40 = v59;
  v45 = (Json::Value::Self *)v42[8];
  v49 = v57;
  v43 = v58;
  if ( v59 != v55 )
  {
    v36 = (Json::Value::Self *)v42[7];
    v4 = v57;
    while ( 1 )
    {
      if ( v3 != nullptr )
        Json::Value::Construct(v3, v2);
      v2 = (Json::Value::Self *)((char *)v2 + 16);
      if ( v2 == v4 )
      {
        v3 = (Json::Value::Self *)((char *)v3 + 16);
        v2 = *(Json::Value::Self **)(v43 + 4);
        v43 += 4;
        v4 = (Json::Value::Self *)((char *)v2 + 512);
        if ( v3 == v36 )
          goto LABEL_9;
LABEL_4:
        if ( v40 == v2 )
          goto LABEL_10;
      }
      else
      {
        v3 = (Json::Value::Self *)((char *)v3 + 16);
        if ( v3 != v36 )
          goto LABEL_4;
LABEL_9:
        v3 = *((Json::Value::Self **)v45 + 1);
        v45 = (Json::Value::Self *)((char *)v45 + 4);
        v36 = (Json::Value::Self *)((char *)v3 + 512);
        if ( v40 == v2 )
        {
LABEL_10:
          v40 = v59;
          v2 = v55;
          v49 = v57;
          v43 = v58;
          break;
        }
      }
    }
  }
  v37 = v62;
  v46 = v60;
  if ( v62 > v43 + 4 )
  {
    v51 = v2;
    v5 = (Json::Value::Self **)(v43 + 4);
    do
    {
      v6 = *v5;
      v7 = (int)(uintptr_t)(*v5) + 512;
      do
      {
        v28 = v6;
        v6 = (Json::Value::Self *)((char *)v6 + 16);
        Json::Value::Destroy(v28);
      }
      while ( v6 != (Json::Value::Self *)v7 );
      ++v5;
    }
    while ( v37 > (unsigned int)(uintptr_t)(v5) );
    v2 = v51;
  }
  if ( v43 == v37 )
  {
    while ( v40 != v2 )
    {
      v35 = v2;
      v2 = (Json::Value::Self *)((char *)v2 + 16);
      Json::Value::Destroy(v35);
    }
  }
  else
  {
    while ( v49 != v2 )
    {
      v29 = v2;
      v2 = (Json::Value::Self *)((char *)v2 + 16);
      Json::Value::Destroy(v29);
    }
    if ( v40 != v46 )
    {
      v8 = v46;
      do
      {
        v30 = v8;
        v8 = (Json::Value::Self *)((char *)v8 + 16);
        Json::Value::Destroy(v30);
      }
      while ( v40 != v8 );
    }
  }
  v9 = (void *)v54[0];
  if ( v54[0] != 0 )
  {
    v10 = (void **)v58;
    v11 = v62 + 4;
    if ( v62 + 4 > v58 )
    {
      do
      {
        v12 = *v10++;
        opDelete(v12);
      }
      while ( v11 > (unsigned int)(uintptr_t)(v10) );
      v9 = (void *)v54[0];
    }
    opDelete(v9);
  }
  v63[0] = nullptr;
  v63[1] = nullptr;
  v64 = nullptr;
  v65 = 0;
  v66 = nullptr;
  v67 = 0;
  v68 = nullptr;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  g4_std::Deque_base_Json_Value_e60cac::M_initialize_map((std::_Deque_base<Json::Value::Self> *)v63, 0);
  v13 = ((v68 - v69) >> 4) + 32 * (((int)(v71 - v67) >> 2) - 1) + ((v66 - v64) >> 4);
  v42[13] = 0;
  v42[14] = 0;
  v42[15] = 0;
  v42[16] = 0;
  v42[17] = 0;
  v42[18] = 0;
  v42[19] = 0;
  v42[20] = 0;
  v42[21] = 0;
  v42[22] = 0;
  g4_std::Deque_base_Json_Value_e60cac::M_initialize_map((std::_Deque_base<Json::Value::Self> *)(v42 + 13), v13);
  v14 = v64;
  v15 = (Json::Value::Self *)v42[15];
  v41 = v68;
  v47 = (Json::Value::Self *)v42[18];
  v50 = v66;
  v44 = v67;
  if ( v68 != v64 )
  {
    v38 = (Json::Value::Self *)v42[17];
    v16 = v66;
    while ( 1 )
    {
      if ( v15 != nullptr )
        Json::Value::Construct(v15, v14);
      v14 = (Json::Value::Self *)((char *)v14 + 16);
      if ( v14 == v16 )
      {
        v15 = (Json::Value::Self *)((char *)v15 + 16);
        v14 = *(Json::Value::Self **)(v44 + 4);
        v44 += 4;
        v16 = (Json::Value::Self *)((char *)v14 + 512);
        if ( v15 == v38 )
          goto LABEL_36;
LABEL_31:
        if ( v41 == v14 )
          goto LABEL_37;
      }
      else
      {
        v15 = (Json::Value::Self *)((char *)v15 + 16);
        if ( v15 != v38 )
          goto LABEL_31;
LABEL_36:
        v15 = *((Json::Value::Self **)v47 + 1);
        v47 = (Json::Value::Self *)((char *)v47 + 4);
        v38 = (Json::Value::Self *)((char *)v15 + 512);
        if ( v41 == v14 )
        {
LABEL_37:
          v41 = v68;
          v14 = v64;
          v50 = v66;
          v44 = v67;
          break;
        }
      }
    }
  }
  v39 = v71;
  v48 = v69;
  if ( v71 > v44 + 4 )
  {
    v52 = v14;
    v17 = (Json::Value::Self **)(v44 + 4);
    do
    {
      v18 = *v17;
      v19 = (int)(uintptr_t)(*v17) + 512;
      do
      {
        v31 = v18;
        v18 = (Json::Value::Self *)((char *)v18 + 16);
        Json::Value::Destroy(v31);
      }
      while ( v18 != (Json::Value::Self *)v19 );
      ++v17;
    }
    while ( v39 > (unsigned int)(uintptr_t)(v17) );
    v14 = v52;
  }
  if ( v39 == v44 )
  {
    while ( v41 != v14 )
    {
      v34 = v14;
      v14 = (Json::Value::Self *)((char *)v14 + 16);
      Json::Value::Destroy(v34);
    }
  }
  else
  {
    while ( v14 != v50 )
    {
      v32 = v14;
      v14 = (Json::Value::Self *)((char *)v14 + 16);
      Json::Value::Destroy(v32);
    }
    if ( v41 != v48 )
    {
      v20 = v48;
      do
      {
        v33 = v20;
        v20 = (Json::Value::Self *)((char *)v20 + 16);
        Json::Value::Destroy(v33);
      }
      while ( v41 != v20 );
    }
  }
  v21 = v63[0];
  if ( v63[0] != nullptr )
  {
    v22 = (void **)v67;
    v23 = v71 + 4;
    if ( v71 + 4 > v67 )
    {
      do
      {
        v24 = *v22++;
        opDelete(v24);
      }
      while ( v23 > (unsigned int)(uintptr_t)(v22) );
      v21 = v63[0];
    }
    opDelete(v21);
  }
  v25 = sub_B7A8A0();
  G4_VCALL<void>(v25, 92, sub_14E7960);
  v26 = sub_B7A8A0();
  G4_VCALL<void>(v26, 88, sub_14E7800);
  dword_2119E4C = (int)(uintptr_t)(v42);
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    g4_std::string::assign_str((char *)self + 64, Instance + 240);
  }
  gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
    self,
    12,
    (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::GlotWrapperCallback,
    self);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::GetInstance  (binary VA: 0x14e7780)
// Original: gaia::CrmManager::GetInstance
// ----------------------------------------------------------------------------
gaia::CrmManager::Self * gaia::CrmManager::GetInstance()
{
  gaia::CrmManager::Self *v0;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::CrmManager::m_mutex);
  v0 = (gaia::CrmManager::Self *)gaia::CrmManager::s_instance;
  if ( gaia::CrmManager::s_instance == 0 )
  {
    v0 = (gaia::CrmManager::Self *)opNew(0x94u);
    gaia::CrmManager::Construct(v0);
    gaia::CrmManager::s_instance = (uintptr_t)(uintptr_t)(v0);
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::CrmManager::m_mutex);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::ParseActionList  (binary VA: 0x14e8070)
// Original: gaia::CrmManager::ParseActionList
// ----------------------------------------------------------------------------
int gaia::CrmManager::ParseActionList(Json::Value::Self **self, const Json::Value::Self *a2)
{
  int v2;
  unsigned int v3;
  gaia::CrmManager::Self *v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  int v7;
  uint8_t *untyped_deleter;
  gaia::CrmAction::Self *v9;
  gaia::CrmAction::Self *v10;
  int v11;
  const Json::Value::Self *v12;
  gaia::CrmAction::Self *v13;
  gaia::CrmAction::Self *v14;
  gaia::CrmAction::Self *v15;
  gaia::CrmAction::Self *v16;
  gaia::CrmAction::Self *v17;
  gaia::CrmAction::Self *v18;
  gaia::CrmAction::Self *v19;
  gaia::CrmAction::Self *v20;
  gaia::CrmAction::Self *v21;
  gaia::CrmAction::Self *v22;
  gaia::CrmAction::Self *v23;
  gaia::CrmAction::Self *v24;
  gaia::CrmAction::Self *v25;
  gaia::CrmAction::Self *v26;
  gaia::CrmAction::Self **v27;
  glwebtools::Mutex::Self *v28;
  int v29;
  gaia::CrmAction::Self *v30;
  bool v31;
  gaia::CrmAction::Self *v32;
  const void **v33;
  size_t v34;
  size_t v35;
  size_t n;
  char v37;
  glwebtools::Mutex::Self *v38;
  glwebtools::Mutex::Self *v39;
  char *v40;
  int v41;
  int v42;
  glwebtools::Mutex::Self *v43;
  char *v44;
  char *v45;
  int v46;
  Json::Value::Self *v47;
  char *v48;
  char *v49;
  char *v51;
  gaia::CrmAction::Self *v52;
  char *v53;
  int v54;
  int v55;
  char *v56;
  gaia::CrmAction::Self *v57;
  char *FatigueGroupName;
  int v59;
  size_t v60;
  size_t v61;
  int v62;
  int v63;
  uint32_t *v64;
  size_t v65;
  int v66;
  gaia::CrmAction::Self *v67;
  int v68;
  unsigned int v69;
  int v70;
  glwebtools::Mutex::Self *v71;
  unsigned int v72;
  gaia::CrmAction::Self *v73;
  char *v74;
  int v75;
  int v76;
  size_t v77;
  size_t v78;
  size_t v79;
  char v80;
  gaia::CrmAction::Self *v81;
  char *TypeSpecificFields;
  int v83;
  int v84;
  size_t v85;
  size_t v86;
  size_t v87;
  char v88;
  int v89;
  int v90;
  typedef void *_g4_t_s1;
  typedef char *_g4_t_s1a;
  typedef void *_g4_t_s1b;
  typedef char *_g4_t_s1c;
  typedef char *_g4_t_s1d;
  typedef glwebtools::Mutex::Self *_g4_t_s2;
  typedef glwebtools::Mutex::Self *_g4_t_s2a;
  typedef gaia::CrmAction::Self *_g4_t_v98;
  typedef gaia::CrmAction::Self *_g4_t_v99;
  typedef glwebtools::Mutex::Self *_g4_t_v100;
  typedef glwebtools::Mutex::Self *_g4_t_v101;
  typedef glwebtools::Mutex::Self *_g4_t_v102;
  typedef uint8_t *_g4_t_v103;
  typedef gaia::CrmAction::Self *_g4_t_v104;
  typedef const Json::Value::Self *_g4_t_v105;
  typedef char _g4_t_v106;
  typedef unsigned int _g4_t_v107;
  typedef void *_g4_t_v108;
  typedef void *_g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef int _g4_t_v112;
  typedef const void **_g4_t_v113;
  typedef int _g4_t_v114;
  typedef char *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef void *_g4_t_v118;
  typedef char *_g4_t_v119;
  typedef uint32_t *_g4_t_v120;
  typedef void *_g4_t_v121;
  typedef void *_g4_t_v122;
  typedef void **_g4_t_i;
  typedef size_t _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef char *_g4_t_v128;
  typedef char *_g4_t_v129;
  typedef unsigned int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef unsigned int _g4_t_v133;
  typedef unsigned int _g4_t_v134;
  typedef gaia::CrmManager::Self *_g4_t_v135;
  typedef gaia::CrmManager::Self *_g4_t_v136;
  typedef void *_g4_t_v137;
  typedef gaia::CrmAction::Self *_g4_t_v138;
  typedef gaia::CrmAction::Self *_g4_t_v139;
  typedef void *_g4_t_v140;
  typedef char *_g4_t_v141;
  typedef char *_g4_t_v142;
  typedef uint8_t _g4_t_v143[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s1a)) > _g4_s1 ? (0u + sizeof(_g4_t_s1a)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_s1b)) > _g4_s2 ? (0u + sizeof(_g4_t_s1b)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_s1c)) > _g4_s3 ? (0u + sizeof(_g4_t_s1c)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_s1d)) > _g4_s4 ? (0u + sizeof(_g4_t_s1d)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_s2)) > _g4_s5 ? (4u + sizeof(_g4_t_s2)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_s2a)) > _g4_s6 ? (4u + sizeof(_g4_t_s2a)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v98)) > _g4_s7 ? (20u + sizeof(_g4_t_v98)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v99)) > _g4_s8 ? (20u + sizeof(_g4_t_v99)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v100)) > _g4_s9 ? (24u + sizeof(_g4_t_v100)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v101)) > _g4_s10 ? (24u + sizeof(_g4_t_v101)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v102)) > _g4_s11 ? (24u + sizeof(_g4_t_v102)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v103)) > _g4_s12 ? (28u + sizeof(_g4_t_v103)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v104)) > _g4_s13 ? (28u + sizeof(_g4_t_v104)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v105)) > _g4_s14 ? (28u + sizeof(_g4_t_v105)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v106)) > _g4_s15 ? (32u + sizeof(_g4_t_v106)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v107)) > _g4_s16 ? (32u + sizeof(_g4_t_v107)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v108)) > _g4_s17 ? (32u + sizeof(_g4_t_v108)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v109)) > _g4_s18 ? (32u + sizeof(_g4_t_v109)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v110)) > _g4_s19 ? (32u + sizeof(_g4_t_v110)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v111)) > _g4_s20 ? (32u + sizeof(_g4_t_v111)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v112)) > _g4_s21 ? (48u + sizeof(_g4_t_v112)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v113)) > _g4_s22 ? (48u + sizeof(_g4_t_v113)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v114)) > _g4_s23 ? (48u + sizeof(_g4_t_v114)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v115)) > _g4_s24 ? (48u + sizeof(_g4_t_v115)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v116)) > _g4_s25 ? (48u + sizeof(_g4_t_v116)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v117)) > _g4_s26 ? (48u + sizeof(_g4_t_v117)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v118)) > _g4_s27 ? (52u + sizeof(_g4_t_v118)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v119)) > _g4_s28 ? (52u + sizeof(_g4_t_v119)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v120)) > _g4_s29 ? (52u + sizeof(_g4_t_v120)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v121)) > _g4_s30 ? (52u + sizeof(_g4_t_v121)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v122)) > _g4_s31 ? (52u + sizeof(_g4_t_v122)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_i)) > _g4_s32 ? (56u + sizeof(_g4_t_i)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v124)) > _g4_s33 ? (56u + sizeof(_g4_t_v124)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v125)) > _g4_s34 ? (56u + sizeof(_g4_t_v125)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v126)) > _g4_s35 ? (56u + sizeof(_g4_t_v126)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v127)) > _g4_s36 ? (64u + sizeof(_g4_t_v127)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v128)) > _g4_s37 ? (64u + sizeof(_g4_t_v128)) : _g4_s37,
    _g4_s39 = (64u + sizeof(_g4_t_v129)) > _g4_s38 ? (64u + sizeof(_g4_t_v129)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v130)) > _g4_s39 ? (68u + sizeof(_g4_t_v130)) : _g4_s39,
    _g4_s41 = (68u + sizeof(_g4_t_v131)) > _g4_s40 ? (68u + sizeof(_g4_t_v131)) : _g4_s40,
    _g4_s42 = (68u + sizeof(_g4_t_v132)) > _g4_s41 ? (68u + sizeof(_g4_t_v132)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v133)) > _g4_s42 ? (72u + sizeof(_g4_t_v133)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v134)) > _g4_s43 ? (72u + sizeof(_g4_t_v134)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v135)) > _g4_s44 ? (76u + sizeof(_g4_t_v135)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v136)) > _g4_s45 ? (76u + sizeof(_g4_t_v136)) : _g4_s45,
    _g4_s47 = (88u + sizeof(_g4_t_v137)) > _g4_s46 ? (88u + sizeof(_g4_t_v137)) : _g4_s46,
    _g4_s48 = (92u + sizeof(_g4_t_v138)) > _g4_s47 ? (92u + sizeof(_g4_t_v138)) : _g4_s47,
    _g4_s49 = (96u + sizeof(_g4_t_v139)) > _g4_s48 ? (96u + sizeof(_g4_t_v139)) : _g4_s48,
    _g4_s50 = (100u + sizeof(_g4_t_v140)) > _g4_s49 ? (100u + sizeof(_g4_t_v140)) : _g4_s49,
    _g4_s51 = (104u + sizeof(_g4_t_v141)) > _g4_s50 ? (104u + sizeof(_g4_t_v141)) : _g4_s50,
    _g4_s52 = (108u + sizeof(_g4_t_v142)) > _g4_s51 ? (108u + sizeof(_g4_t_v142)) : _g4_s51,
    _g4_s53 = (112u + sizeof(_g4_t_v143)) > _g4_s52 ? (112u + sizeof(_g4_t_v143)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 0u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 0u);
  _g4_t_s1c &s1c = *reinterpret_cast<_g4_t_s1c *>(_g4_sf + 0u);
  _g4_t_s1d &s1d = *reinterpret_cast<_g4_t_s1d *>(_g4_sf + 0u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 20u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 28u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 32u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 32u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 32u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 32u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 48u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 48u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 48u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 48u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 48u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 52u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 52u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 52u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 52u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 56u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 56u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 56u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 64u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 64u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 64u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 68u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 68u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 68u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 72u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 72u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 76u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 76u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 88u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 92u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 96u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 100u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 104u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 108u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 112u);

  Json::Value::Construct((int)(uintptr_t)(v143), &loc_6);
  if ( Json::Value::type(a2) != 6 )
  {
    v112 = -34;
    goto LABEL_85;
  }
  Json::Value::opAssign((Json::Value::Self *)v143, a2);
  v2 = Json::Value::size((Json::Value::Self *)v143);
  if ( v2 <= 0 )
  {
LABEL_52:
    v140 = nullptr;
    v141 = nullptr;
    v142 = nullptr;
    gaia::CrmManager::DeserializePopupList((gaia::CrmManager::Self *)self);
    for ( i = (void **)*(self + 23); i != (void **)*(self + 24); ++i )
    {
      v33 = (const void **)*(self + 20);
      v113 = (const void **)*(self + 21);
      if ( v33 != v113 )
      {
        v106 = 0;
        v118 = *i;
        v34 = *((uint32_t *)*i - 3);
        do
        {
          v35 = *((uint32_t *)*v33 - 3);
          n = v35;
          if ( v34 <= v35 )
            n = v34;
          if ( memcmp(v118, *v33, n) == 0 )
          {
            v37 = 1;
            if ( v35 != v34 )
              v37 = v106;
            v106 = v37;
          }
          ++v33;
        }
        while ( v113 != v33 );
        if ( v106 != 0 )
          continue;
      }
      if ( v141 == v142 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v140, v141, (int)(uintptr_t)(i));
      }
      else
      {
        v51 = nullptr;
        if ( v141 != nullptr )
        {
          g4_std::string::construct_copy(v141, i);
          v51 = v141;
        }
        v141 = v51 + 4;
      }
    }
    gaia::CrmManager::DeletePopupList((gaia::CrmManager::Self *)self, (const std::vector<std::string> *)&v140);
    v38 = (glwebtools::Mutex::Self *)(*(self + 20));
    v39 = (glwebtools::Mutex::Self *)(*(self + 21));
    v107 = (v39 - v38) >> 2;
    v40 = (char *)*(self + 23);
    if ( v107 > (*(self + 25) - (Json::Value::Self *)v40) >> 2 )
    {
      v41 = 0;
      v114 = 0;
      if ( v107 != 0 )
      {
        if ( v107 > 0x3FFFFFFF )
          sub_18FFEE0(v39, self);
        v101 = (glwebtools::Mutex::Self *)(*(self + 21));
        v114 = 4 * v107;
        v41 = opNew(4 * v107);
        v39 = v101;
      }
      if ( v38 != v39 )
      {
        v42 = v41;
        v108 = (void *)v41;
        v43 = v39;
        do
        {
          if ( v42 != 0 )
            g4_std::string::construct_copy(v42, v38);
          v38 = (glwebtools::Mutex::Self *)((char *)v38 + 4);
          v42 += 4;
        }
        while ( v43 != v38 );
        v41 = (int)(uintptr_t)(v108);
      }
      v44 = (char *)*(self + 24);
      v45 = (char *)*(self + 23);
      if ( v44 != v45 )
      {
        do
        {
          s1 = v45;
          v45 += 4;
          g4_std::string::Destroy(s1);
        }
        while ( v44 != v45 );
        v45 = (char *)*(self + 23);
      }
      if ( v45 != nullptr )
        opDelete(v45);
      *(self + 23) = (Json::Value::Self *)v41;
      v46 = v114 + v41;
      *(self + 25) = (Json::Value::Self *)v46;
      goto LABEL_80;
    }
    v53 = (char *)*(self + 24);
    v54 = (v53 - v40) >> 2;
    if ( v107 > v54 )
    {
      v69 = (unsigned int)(uintptr_t)(v38) + 4 * v54;
      if ( v54 > 0 )
      {
        v70 = (*(self + 24) - (Json::Value::Self *)v40) >> 2;
        do
        {
          s2a = v38;
          s1d = v40;
          v38 = (glwebtools::Mutex::Self *)((char *)v38 + 4);
          v40 += 4;
          g4_std::string::assign_str(s1d, s2a);
          --v70;
        }
        while ( v70 != 0 );
        v53 = (char *)*(self + 24);
        v40 = (char *)*(self + 23);
        v39 = (glwebtools::Mutex::Self *)(*(self + 21));
        v69 = (unsigned int)(uintptr_t)(*(self + 20)) + ((v53 - v40) & 0xFFFFFFFC);
      }
      if ( (glwebtools::Mutex::Self *)v69 == v39 )
      {
        v46 = (int)(uintptr_t)(&v40[4 * v107]);
        goto LABEL_80;
      }
      v71 = v39;
      v72 = v69;
      do
      {
        if ( v53 != nullptr )
          g4_std::string::construct_copy(v53, v72);
        v72 += 4;
        v53 += 4;
      }
      while ( (glwebtools::Mutex::Self *)v72 != v71 );
    }
    else
    {
      if ( (int)v107 > 0 )
      {
        v119 = (char *)*(self + 23);
        v55 = (*(self + 21) - (Json::Value::Self *)(v38)) >> 2;
        v115 = (char *)*(self + 24);
        v56 = v119;
        do
        {
          s2 = v38;
          s1b = v56;
          v38 = (glwebtools::Mutex::Self *)((char *)v38 + 4);
          v56 += 4;
          g4_std::string::assign_str(s1b, s2);
          --v55;
        }
        while ( v55 != 0 );
        v53 = v115;
        v40 = &v119[4 * v107];
      }
      if ( v53 == v40 )
      {
        v46 = (int)(uintptr_t)(*(self + 23)) + 4 * v107;
        goto LABEL_80;
      }
      do
      {
        s1c = v40;
        v40 += 4;
        g4_std::string::Destroy(s1c);
      }
      while ( v53 != v40 );
    }
    v46 = (int)(uintptr_t)(*(self + 23)) + 4 * v107;
LABEL_80:
    *(self + 24) = (Json::Value::Self *)v46;
    gaia::CrmManager::SerializePopupList((gaia::CrmManager::Self *)self);
    v47 = gaia::CrmManager::DownloadPopupList((gaia::CrmManager::Self *)self, self + 20);
    v48 = v141;
    v49 = (char *)v140;
    v112 = (int)(uintptr_t)(v47);
    if ( v141 != v140 )
    {
      do
      {
        s1a = v49;
        v49 += 4;
        g4_std::string::Destroy(s1a);
      }
      while ( v48 != v49 );
      v49 = (char *)v140;
    }
    if ( v49 != nullptr )
      opDelete(v49);
    goto LABEL_85;
  }
  v3 = 0;
  v4 = (gaia::CrmManager::Self *)self;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v143, v3);
      if ( Json::Value::type(v5) != 0 )
      {
        v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v143, v3);
        if ( Json::Value::type(v6) == 7 )
          break;
      }
LABEL_4:
      if ( v2 == ++v3 )
        goto LABEL_52;
    }
    v7 = opNew(0xBCu);
    *(uint32_t *)(v7 + 4) = 1;
    *(uint32_t *)(v7 + 8) = 1;
    *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_2095F68);
    *(uint32_t *)(v7 + 12) = 0;
    *(uint8_t *)(v7 + 16) = 0;
    v98 = (gaia::CrmAction::Self *)v7;
    untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *,boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *, boost::detail::sp_ms_deleter<gaia::CrmAction::Self>> *)v7);
    v9 = v98;
    v10 = (gaia::CrmAction::Self *)(untyped_deleter + 4);
    if ( untyped_deleter != (uint8_t *)-4 )
    {
      v103 = untyped_deleter;
      v100 = (glwebtools::Mutex::Self *)(untyped_deleter + 4);
      gaia::CrmAction::Construct((gaia::CrmAction::Self *)(untyped_deleter + 4), v4);
      v10 = (gaia::CrmAction::Self *)(v100);
      v9 = v98;
      untyped_deleter = v103;
    }
    *untyped_deleter = 1;
    v139 = v9;
    v11 = *((uint32_t *)v9 + 1);
    v138 = v10;
    if ( v11 == 0 )
      break;
    if ( v10 == nullptr )
      goto LABEL_93;
LABEL_11:
    v12 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v143, v3);
    v13 = v138;
    if ( v138 == nullptr )
    {
      v105 = v12;
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v13 = v138;
      v12 = v105;
    }
    v112 = gaia::CrmAction::Initialize(v13, v12);
    v14 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v14 = v138;
    }
    if ( *(uint32_t *)(*(uint32_t *)gaia::CrmAction::GetFatigueGroupName(v14) - 12) != 0 )
    {
      v57 = v138;
      if ( v138 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::Crm"
          "Action, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
          "px != 0");
        v57 = v138;
      }
      FatigueGroupName = gaia::CrmAction::GetFatigueGroupName(v57);
      if ( *((uint32_t *)v4 + 32) != 0 )
      {
        v130 = v3;
        v109 = *(void **)FatigueGroupName;
        v127 = v2;
        v59 = *((uint32_t *)v4 + 32);
        v124 = *(uint32_t *)(*(uint32_t *)FatigueGroupName - 12);
        v120 = (uint32_t *)((char *)v4 + 124);
        do
        {
          while ( 1 )
          {
            v60 = v124;
            v61 = *(uint32_t *)(*(uint32_t *)(v59 + 16) - 12);
            if ( v61 <= v124 )
              v60 = *(uint32_t *)(*(uint32_t *)(v59 + 16) - 12);
            v62 = v61 - v124;
            v63 = memcmp(*(const void **)(v59 + 16), v109, v60);
            if ( v63 == 0 )
              v63 = v62;
            if ( v63 < 0 )
              break;
            v120 = (uint32_t *)v59;
            v59 = *(uint32_t *)(v59 + 8);
            if ( v59 == 0 )
              goto LABEL_117;
          }
          v59 = *(uint32_t *)(v59 + 12);
        }
        while ( v59 != 0 );
LABEL_117:
        v2 = v127;
        v3 = v130;
        if ( (uint32_t *)((char *)v4 + 124) != v120 )
        {
          v64 = (uint32_t *)v120[4];
          v65 = v124;
          if ( *(v64 - 3) <= v124 )
            v65 = *(v64 - 3);
          v102 = (glwebtools::Mutex::Self *)*(v64 - 3);
          v66 = memcmp(v109, v64, v65);
          if ( v66 == 0 )
            v66 = v124 - (uint32_t)(uintptr_t)(v102);
          if ( v66 >= 0 )
          {
            v67 = v138;
            v68 = (int)(uintptr_t)(v120 + 5);
            if ( v138 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gai"
                "a::CrmAction, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
                "px != 0");
              v67 = v138;
              v68 = (int)(uintptr_t)(v120 + 5);
            }
            gaia::CrmAction::SetFatigueGroup(v67, v68);
          }
        }
      }
    }
    if ( v112 != 0 )
      goto LABEL_94;
    v15 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v15 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v15,
      6,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::APopupEventCallback,
      v4);
    v16 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v16 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v16,
      9,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AGiftEventCallback,
      v4);
    v17 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v17 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v17,
      7,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AXpromoEventCallback,
      v4);
    v18 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v18 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v18,
      8,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::A3DPartyEventCallback,
      v4);
    v19 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v19 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v19,
      10,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AUrlEventCallback,
      v4);
    v20 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v20 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v20,
      11,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AStoreItemEventCallback,
      v4);
    v21 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v21 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v21,
      13,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AGLAdsBannerCallback,
      v4);
    v22 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v22 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v22,
      14,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AGLAdsInterstitialCallback,
      v4);
    v23 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v23 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v23,
      15,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::AGLAdsIncentivizedVideoCallback,
      v4);
    v24 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v24 = v138;
    }
    gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(
      v24,
      12,
      (bool (__high *)(void *, bool, Json::Value::Self))gaia::CrmManager::ALogEventCallback,
      v4);
    v25 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v25 = v138;
    }
    if ( gaia::CrmAction::GetActionType(v25) != 6 )
    {
      v26 = v138;
      if ( v138 != nullptr )
        goto LABEL_41;
LABEL_162:
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v26 = v138;
      goto LABEL_41;
    }
    v81 = v138;
    if ( v138 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmAc"
        "tion, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
        "px != 0");
      v81 = v138;
    }
    TypeSpecificFields = gaia::CrmAction::GetTypeSpecificFields(v81);
    v83 = Json::Value::opIndex((Json::Value::Self *)TypeSpecificFields, (char **)&gaia::k_szPopupId);
    Json::Value::asString((Json::Value::Self *)&v137, v83);
    v117 = *((uint32_t *)v4 + 20);
    v129 = *((char **)v4 + 21);
    v126 = (int)(uintptr_t)(&v129[-v117]) >> 2;
    if ( v126 == 0 )
      goto LABEL_166;
    v134 = v3;
    v122 = v137;
    v136 = v4;
    v111 = 0;
    v132 = v2;
    v84 = 0;
    v85 = *((uint32_t *)v137 - 3);
    do
    {
      v86 = v85;
      v87 = *(uint32_t *)(*(uint32_t *)(v117 + 4 * v84) - 12);
      if ( v87 <= v85 )
        v86 = *(uint32_t *)(*(uint32_t *)(v117 + 4 * v84) - 12);
      if ( memcmp(*(const void **)(v117 + 4 * v84), v122, v86) == 0 )
      {
        v88 = 1;
        if ( v85 != v87 )
          v88 = v111;
        v111 = v88;
      }
      ++v84;
    }
    while ( v84 != v126 );
    v2 = v132;
    v3 = v134;
    v4 = v136;
    if ( v111 == 0 )
    {
LABEL_166:
      if ( v129 == *((char **)v4 + 22) )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)v4 + 20, v129, (int)(uintptr_t)(&v137));
      }
      else
      {
        v89 = 0;
        if ( v129 != nullptr )
        {
          g4_std::string::construct_copy(v129, &v137);
          v89 = *((uint32_t *)v4 + 21);
        }
        *((uint32_t *)v4 + 21) = v89 + 4;
      }
    }
    g4_std::string::Destroy(&v137);
    v26 = v138;
    if ( v138 == nullptr )
      goto LABEL_162;
LABEL_41:
    if ( gaia::CrmAction::GetActionType(v26) == 7 )
    {
      v73 = v138;
      if ( v138 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::Crm"
          "Action, typename boost::detail::sp_member_access<T>::type = gaia::CrmAction*]",
          "px != 0");
        v73 = v138;
      }
      v74 = gaia::CrmAction::GetTypeSpecificFields(v73);
      v75 = Json::Value::opIndex((Json::Value::Self *)v74, (char **)&gaia::k_szTags);
      Json::Value::asString((Json::Value::Self *)&v137, v75);
      v116 = *((uint32_t *)v4 + 20);
      v128 = *((char **)v4 + 21);
      v125 = (int)(uintptr_t)(&v128[-v116]) >> 2;
      if ( v125 == 0 )
        goto LABEL_170;
      v133 = v3;
      v135 = v4;
      v121 = v137;
      v110 = 0;
      v131 = v2;
      v76 = 0;
      v77 = *((uint32_t *)v137 - 3);
      do
      {
        v78 = v77;
        v79 = *(uint32_t *)(*(uint32_t *)(v116 + 4 * v76) - 12);
        if ( v79 <= v77 )
          v78 = *(uint32_t *)(*(uint32_t *)(v116 + 4 * v76) - 12);
        if ( memcmp(*(const void **)(v116 + 4 * v76), v121, v78) == 0 )
        {
          v80 = 1;
          if ( v77 != v79 )
            v80 = v110;
          v110 = v80;
        }
        ++v76;
      }
      while ( v76 != v125 );
      v2 = v131;
      v3 = v133;
      v4 = v135;
      if ( v110 == 0 )
      {
LABEL_170:
        if ( v128 == *((char **)v4 + 22) )
        {
          g4_std::vector_string_86c307::M_insert_aux((int *)v4 + 20, v128, (int)(uintptr_t)(&v137));
        }
        else
        {
          v90 = 0;
          if ( v128 != nullptr )
          {
            g4_std::string::construct_copy(v128, &v137);
            v90 = *((uint32_t *)v4 + 21);
          }
          *((uint32_t *)v4 + 21) = v90 + 4;
        }
      }
      g4_std::string::Destroy(&v137);
    }
    glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)v4 + 40));
    v27 = *((gaia::CrmAction::Self ***)v4 + 18);
    v28 = (glwebtools::Mutex::Self *)((gaia::CrmManager::Self *)((char *)v4 + 40));
    if ( v27 == *((gaia::CrmAction::Self ***)v4 + 19) )
    {
      g4_std_compat::vector_fill_insert((char *)v4 + 68, *((uint32_t *)v4 + 18), &v138);
      v28 = (glwebtools::Mutex::Self *)((gaia::CrmManager::Self *)((char *)v4 + 40));
    }
    else
    {
      v29 = 0;
      if ( v27 != nullptr )
      {
        *v27 = v138;
        v30 = v139;
        v31 = v139 == nullptr;
        v27[1] = v139;
        if ( !v31 )
          ++*((uint32_t *)v30 + 1);
        v29 = *((uint32_t *)v4 + 18);
      }
      *((uint32_t *)v4 + 18) = v29 + 8;
    }
    glwebtools::Mutex::Unlock(v28);
    v32 = v139;
    if ( v139 == nullptr )
      goto LABEL_4;
    v31 = (*((uint32_t *)v139 + 1))-- == 1;
    if ( !v31 )
      goto LABEL_4;
    v104 = v32;
    G4_VCALL<void>(v32, 8);
    v31 = (*((uint32_t *)v104 + 2))-- == 1;
    if ( !v31 )
      goto LABEL_4;
    ++v3;
    G4_VCALL<void>(v104, 12);
    if ( v2 == v3 )
      goto LABEL_52;
  }
  v99 = v9;
  G4_VCALL<void>(v9, 8);
  v31 = (*((uint32_t *)v99 + 2))-- == 1;
  if ( v31 )
    G4_VCALL<void>(v99, 12);
  if ( v138 != nullptr )
    goto LABEL_11;
LABEL_93:
  v112 = -34;
LABEL_94:
  v52 = v139;
  if ( v139 != nullptr )
  {
    v31 = (*((uint32_t *)v139 + 1))-- == 1;
    if ( v31 )
    {
      G4_VCALL<void>(v52, 8);
      v31 = (*((uint32_t *)v52 + 2))-- == 1;
      if ( v31 )
        G4_VCALL<void>(v52, 12);
    }
  }
LABEL_85:
  Json::Value::Destroy((Json::Value::Self *)v143);
  return v112;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmManager::Initialize  (binary VA: 0x14e9420)
// Original: gaia::CrmManager::Initialize
// ----------------------------------------------------------------------------
int gaia::CrmManager::Initialize(Json::Value::Self **a1, int a2)
{
  int v2;
  gaia::CrmManager::Self *v3;
  time_t v4;
  time_t *v5;
  time_t *v6;
  Json::Value::Self *v7;
  time_t *v8;
  time_t *v9;
  const Json::Value::Self *v11;
  const Json::Value::Self *v12;
  const Json::Value::Self *v13;
  time_t *v14;
  time_t *v15;
  time_t *v16;
  unsigned int v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  Json::Value::Self *untyped_deleter;
  Json::Value::Self *v22;
  int v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  uint32_t *v26;
  bool v27;
  uint32_t *v28;
  char *v29;
  unsigned int v30;
  time_t *v31;
  char *v32;
  int v33;
  Json::Value::Self *v34;
  Json::Value::Self *v35;
  Json::Value::Self *v36;
  Json::Value::Self *v37;
  Json::Value::Self *v38;
  uint32_t *v39;
  typedef time_t *_g4_t_timer;
  typedef time_t *_g4_t_timera;
  typedef time_t *_g4_t_timerb;
  typedef time_t *_g4_t_timerc;
  typedef Json::Value::Self *_g4_t_v44;
  typedef Json::Value::Self *_g4_t_v45;
  typedef Json::Value::Self *_g4_t_v46;
  typedef Json::Value::Self *_g4_t_v47;
  typedef Json::Value::Self *_g4_t_v48;
  typedef char _g4_t_v49;
  typedef Json::Value::Self *_g4_t_v50;
  typedef Json::Value::Self *_g4_t_v51;
  typedef Json::Value::Self *_g4_t_v52;
  typedef Json::Value::Self *_g4_t_v53;
  typedef Json::Value::Self *_g4_t_v54;
  typedef Json::Value::Self *_g4_t_v55;
  typedef Json::Value::Self *_g4_t_v56;
  typedef glwebtools::Mutex::Self *_g4_t_v57;
  typedef glwebtools::Mutex::Self *_g4_t_v58;
  typedef glwebtools::Mutex::Self *_g4_t_v59;
  typedef uint8_t *_g4_t_v60;
  typedef gaia::CrmManager::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef char _g4_t_v63[4];
  typedef const void *_g4_t_v64;
  typedef Json::Value::Self *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint8_t _g4_t_v67[16];
  typedef void *_g4_t_v68;
  typedef Json::Value::Self *_g4_t_v69;
  typedef Json::Value::Self *_g4_t_v70;
  typedef uint8_t _g4_t_v71[16];
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef const char *_g4_t_v75[35];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_timer)) > _g4_s0 ? (0u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_timera)) > _g4_s1 ? (0u + sizeof(_g4_t_timera)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_timerb)) > _g4_s2 ? (0u + sizeof(_g4_t_timerb)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_timerc)) > _g4_s3 ? (0u + sizeof(_g4_t_timerc)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v44)) > _g4_s4 ? (24u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v45)) > _g4_s5 ? (24u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v46)) > _g4_s6 ? (28u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v47)) > _g4_s7 ? (28u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v48)) > _g4_s8 ? (28u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v49)) > _g4_s9 ? (28u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v50)) > _g4_s10 ? (32u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v51)) > _g4_s11 ? (32u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v52)) > _g4_s12 ? (32u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v53)) > _g4_s13 ? (32u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v54)) > _g4_s14 ? (32u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v55)) > _g4_s15 ? (32u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v56)) > _g4_s16 ? (32u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v57)) > _g4_s17 ? (36u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v58)) > _g4_s18 ? (36u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v59)) > _g4_s19 ? (36u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v60)) > _g4_s20 ? (40u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v61)) > _g4_s21 ? (44u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v62)) > _g4_s22 ? (60u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v63)) > _g4_s23 ? (64u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v64)) > _g4_s24 ? (68u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v65)) > _g4_s25 ? (72u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v66)) > _g4_s26 ? (76u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v67)) > _g4_s27 ? (80u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v68)) > _g4_s28 ? (96u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v69)) > _g4_s29 ? (100u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v70)) > _g4_s30 ? (104u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v71)) > _g4_s31 ? (112u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v72)) > _g4_s32 ? (128u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v73)) > _g4_s33 ? (144u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v74)) > _g4_s34 ? (160u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v75)) > _g4_s35 ? (176u + sizeof(_g4_t_v75)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 0u);
  _g4_t_timera &timera = *reinterpret_cast<_g4_t_timera *>(_g4_sf + 0u);
  _g4_t_timerb &timerb = *reinterpret_cast<_g4_t_timerb *>(_g4_sf + 0u);
  _g4_t_timerc &timerc = *reinterpret_cast<_g4_t_timerc *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 128u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 144u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 160u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 176u);

  v2 = 0;
  v3 = (gaia::CrmManager::Self *)a1;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::CrmManager::m_initializationMutex);
  if ( gaia::CrmManager::s_IsInitialized[0] == 0 )
  {
    v4 = time(nullptr);
    v2 = -34;
    srand48(v4);
    Json::Reader::Construct((Json::Reader::Self *)v75);
    Json::Value::Construct((int)(uintptr_t)(v67), nullptr);
    if ( (uint8_t)Json::Reader::parse(v75, a2, (Json::Value::Self *)v67, 1) == 0 )
      goto LABEL_12;
    v50 = a1[20];
    if ( v50 != a1[21] )
    {
      v5 = (time_t *)a1[20];
      v6 = (time_t *)a1[21];
      do
      {
        timer = v5++;
        g4_std::string::Destroy(timer);
      }
      while ( v6 != v5 );
      v3 = (gaia::CrmManager::Self *)a1;
    }
    v7 = *((Json::Value::Self **)v3 + 23);
    *((uint32_t *)v3 + 21) = (uint32_t)(uintptr_t)(v50);
    v51 = v7;
    if ( v7 != *((Json::Value::Self **)v3 + 24) )
    {
      v57 = (glwebtools::Mutex::Self *)(v3);
      v8 = (time_t *)v7;
      v9 = *((time_t **)v3 + 24);
      do
      {
        timera = v8++;
        g4_std::string::Destroy(timera);
      }
      while ( v9 != v8 );
      v3 = (gaia::CrmManager::Self *)(v57);
    }
    *((uint32_t *)v3 + 24) = (uint32_t)(uintptr_t)(v51);
    g4_std::string::construct_copy(&v62, &gaia::k_szConfigObject);
    gaia::CrmManager::LogEventViaGLOT((int)(uintptr_t)(v3), (Json::Value::Self *)v67, (char **)&v62);
    v2 = -40;
    g4_std::string::Destroy(&v62);
    if ( Json::Value::type((Json::Value::Self *)v67) != 7 )
      goto LABEL_12;
    if ( Json::Value::isMember((Json::Value::Self *)v67, "game") )
    {
      v13 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, "game");
      Json::Value::opAssign((gaia::CrmManager::Self *)((char *)v3 + 104), v13);
    }
    v52 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, (char **)&gaia::k_szTags);
    if ( !Json::Value::isNull(v52) && Json::Value::type(v52) == 6 && Json::Value::size(v52) != 0 )
    {
      v68 = nullptr;
      v69 = nullptr;
      v70 = nullptr;
      v17 = 0;
      v58 = (glwebtools::Mutex::Self *)(v3);
      while ( v17 < Json::Value::size(v52) )
      {
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, (char **)&gaia::k_szTags);
        v19 = (Json::Value::Self *)Json::Value::opIndex(v18, v17);
        if ( Json::Value::type(v19) == 4 )
        {
          Json::Value::asString((Json::Value::Self *)v63, (int)(uintptr_t)(v19));
          v20 = opNew(0x18u);
          *(uint32_t *)(v20 + 4) = 1;
          *(uint32_t *)(v20 + 8) = 1;
          *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_2095F08);
          *(uint32_t *)(v20 + 12) = 0;
          *(uint8_t *)(v20 + 16) = 0;
          untyped_deleter = (Json::Value::Self *)boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<std::string *, boost::detail::sp_ms_deleter<std::string>> *)v20);
          v22 = (Json::Value::Self *)((char *)untyped_deleter + 4);
          if ( untyped_deleter != (Json::Value::Self *)-4 )
          {
            v47 = untyped_deleter;
            v44 = (Json::Value::Self *)((char *)untyped_deleter + 4);
            g4_std::string::construct_copy((char *)untyped_deleter + 4, v63);
            v22 = v44;
            untyped_deleter = v47;
          }
          *(uint8_t *)untyped_deleter = 1;
          v66 = (uint32_t *)v20;
          v23 = *(uint32_t *)(v20 + 4);
          v65 = v22;
          if ( v23 == 0 )
          {
            G4_VCALL<void>(v20, 8);
            v27 = (*(uint32_t *)(v20 + 8))-- == 1;
            if ( v27 )
              G4_VCALL<void>(v20, 12);
          }
          v24 = v69;
          if ( v69 == v70 )
          {
            g4_std_compat::vector_fill_insert(&v68, v69, &v65);
          }
          else
          {
            v25 = nullptr;
            if ( v69 != nullptr )
            {
              *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v65);
              v26 = v66;
              v27 = v66 == nullptr;
              *((uint32_t *)v24 + 1) = (uint32_t)(uintptr_t)(v66);
              if ( !v27 )
                ++v26[1];
              v25 = v69;
            }
            v69 = (Json::Value::Self *)((char *)v25 + 8);
          }
          v28 = v66;
          if ( v66 != nullptr )
          {
            v27 = v66[1]-- == 1;
            if ( v27 )
            {
              G4_VCALL<void>(v28, 8);
              v27 = v28[2]-- == 1;
              if ( v27 )
                G4_VCALL<void>(v28, 12);
            }
          }
          g4_std::string::Destroy(v63);
        }
        ++v17;
      }
      v29 = (char *)v68;
      v3 = (gaia::CrmManager::Self *)(v58);
      v54 = v69;
      if ( v69 != v68 )
      {
        v48 = (Json::Value::Self *)(v69 - (Json::Value::Self *)v68);
        _BitScanReverse(&v30, (v69 - (Json::Value::Self *)v68) >> 3);
        g4_std_compat::introsort_loop_1daf8b(
          v68,
          v69,
          2 * (31 - (v30 ^ 0x1F)),
          comparePointedStrings);
        if ( (int)(uintptr_t)(v48) <= 135 )
        {
          g4_std_compat::insertion_sort_b55e4c(
            v29,
            v54,
            comparePointedStrings);
        }
        else
        {
          g4_std_compat::insertion_sort_b55e4c(
            v29,
            v29 + 128,
            comparePointedStrings);
          if ( v54 != (Json::Value::Self *)(v29 + 128) )
          {
            v31 = (time_t *)(v29 + 128);
            do
            {
              timerc = v31;
              v31 += 2;
              g4_std_compat::unguarded_linear_insert(
                timerc,
                comparePointedStrings);
            }
            while ( v54 != (Json::Value::Self *)v31 );
            v3 = (gaia::CrmManager::Self *)(v58);
          }
        }
      }
      v55 = (Json::Value::Self *)((gaia::CrmManager::Self *)((char *)v3 + 28));
      g4_std_compat::string_assign((int)(uintptr_t)(v3) + 28, &unk_1B15112, 0);
      v32 = (char *)v68;
      if ( v68 != v69 )
      {
        v61 = v3;
        while ( 1 )
        {
          v33 = *(uint32_t *)v32;
          if ( *(uint32_t *)v32 == 0 )
            goto LABEL_63;
          while ( 1 )
          {
            v32 += 8;
            g4_std::string::append_str(v55, v33);
            if ( v32 == (char *)v69 )
            {
              v59 = (glwebtools::Mutex::Self *)(v69);
              v32 = (char *)v68;
              if ( v68 != v69 )
              {
                v38 = (Json::Value::Self *)((char *)v68 + 4);
                v60 = (uint8_t *)(v68);
                do
                {
                  v39 = *(uint32_t **)((char *)v38  + ((uintptr_t)(v32) - (uintptr_t)(v60)));
                  if ( v39 != nullptr )
                  {
                    v27 = v39[1]-- == 1;
                    if ( v27 )
                    {
                      v45 = v38;
                      G4_VCALL<void>(v39, 8);
                      v27 = v39[2]-- == 1;
                      v38 = v45;
                      if ( v27 )
                      {
                        G4_VCALL<void>(v39, 12);
                        v38 = v45;
                      }
                    }
                  }
                  v32 += 8;
                }
                while ( v59 != (glwebtools::Mutex::Self *)v32 );
                v3 = v61;
                v32 = (char *)v68;
              }
              goto LABEL_65;
            }
            if ( v68 == v32 )
              break;
            g4_std::string::append((int)(uintptr_t)(v55), ", ", 2u);
            v33 = *(uint32_t *)v32;
            if ( *(uint32_t *)v32 == 0 )
            {
LABEL_63:
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                646,
                "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = std::b"
                "asic_string<char>, typename boost::detail::sp_dereference<T>::type = std::basic_string<char>&]",
                "px != 0");
              v33 = *(uint32_t *)v32;
            }
          }
        }
      }
LABEL_65:
      if ( v32 != nullptr )
        opDelete(v32);
      g4_std::string::construct_copy(&v64, v55);
      v49 = gaia::CrmManager::CheckIfTagsHaveChanged((int)(uintptr_t)(v3), &v64);
      g4_std::string::Destroy(&v64);
      if ( v49 != 0 )
      {
        Json::Value::Construct((int)(uintptr_t)(&v68), nullptr);
        Json::Value::Construct((Json::Value::Self *)v71, 51852);
        v34 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v68, &gaia::k_szType);
        Json::Value::opAssign(v34, (const Json::Value::Self *)v71);
        Json::Value::Destroy((Json::Value::Self *)v71);
        Json::Value::Construct((int)(uintptr_t)(v72), (char *)&loc_6 + 1);
        v35 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v68, &gaia::k_szData);
        Json::Value::opAssign(v35, (const Json::Value::Self *)v72);
        Json::Value::Destroy((Json::Value::Self *)v72);
        Json::Value::Construct((int)(uintptr_t)(v73), v55);
        v36 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v68, &gaia::k_szData);
        v37 = (Json::Value::Self *)Json::Value::opIndex(v36, &gaia::k_szCampaignList);
        Json::Value::opAssign(v37, (const Json::Value::Self *)v73);
        Json::Value::Destroy((Json::Value::Self *)v73);
        v56 = *(Json::Value::Self **)(*(uint32_t *)v3 + 8);
        Json::Value::Construct((Json::Value::Self *)v74, (const Json::Value::Self *)&v68);
        ((void (*)(gaia::CrmManager::Self *, int, int, uint8_t *))v56)(v3, 12, 1, v74);
        Json::Value::Destroy((Json::Value::Self *)v74);
        Json::Value::Destroy((Json::Value::Self *)&v68);
      }
    }
    v11 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, &gaia::k_szFatigueGroups);
    if ( !Json::Value::isNull(v11) && (uint8_t)Json::Value::isArray(v11) != 0 )
      gaia::CrmManager::ParseFatigueGroupList(v3, v11);
    v12 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, &gaia::k_szPointcutActions);
    if ( !Json::Value::isNull(v12) )
    {
      gaia::CrmManager::InitPointcutList(v3);
      gaia::CrmManager::ClearActionList(v3);
      v2 = gaia::CrmManager::ParseActionList((Json::Value::Self **)v3, v12);
      if ( v2 != 0 )
        goto LABEL_12;
      glwebtools::Mutex::Lock((gaia::CrmManager::Self *)((char *)v3 + 40));
      v14 = *((time_t **)v3 + 18);
      v15 = *((time_t **)v3 + 17);
      v53 = (Json::Value::Self *)v14;
      if ( v14 != v15 )
      {
        v46 = (Json::Value::Self *)((char *)v14 - (char *)v15);
        _BitScanReverse((unsigned int *)&v14, ((char *)v14 - (char *)v15) >> 3);
        g4_std_compat::introsort_loop_3714e6(
          v15,
          v53,
          2 * (31 - ((unsigned int)(uintptr_t)(v14) ^ 0x1F)),
          (bool (*)(gaia::CrmAction::Self **, gaia::CrmAction::Self **))gaia::CrmActionPointerCompare);
        if ( (int)(uintptr_t)(v46) <= 135 )
        {
          g4_std_compat::insertion_sort_bd9356(
            v15,
            v53,
            (bool (*)(gaia::CrmAction::Self **, gaia::CrmAction::Self **))gaia::CrmActionPointerCompare);
        }
        else
        {
          g4_std_compat::insertion_sort_bd9356(
            v15,
            v15 + 32,
            (bool (*)(gaia::CrmAction::Self **, gaia::CrmAction::Self **))gaia::CrmActionPointerCompare);
          if ( v53 != (Json::Value::Self *)(v15 + 32) )
          {
            v16 = v15 + 32;
            do
            {
              timerb = v16;
              v16 += 2;
              g4_std_compat::unguarded_linear_insert(
                timerb,
                (bool (*)(gaia::CrmAction::Self **, gaia::CrmAction::Self **))gaia::CrmActionPointerCompare);
            }
            while ( v53 != (Json::Value::Self *)v16 );
          }
        }
      }
      glwebtools::Mutex::Unlock((gaia::CrmManager::Self *)((char *)v3 + 40));
      gaia::CrmManager::DeserializeActions(v3);
    }
    v2 = 0;
    gaia::CrmManager::s_IsInitialized[0] = 1;
LABEL_12:
    Json::Value::Destroy((Json::Value::Self *)v67);
    sub_545800((int)(uintptr_t)(v75));
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::CrmManager::m_initializationMutex);
  return v2;
}


