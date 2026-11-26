#include "Core/Utils/DecompTypes.h"
#include "gaia_Hermes.h"

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::Destroy  (binary VA: 0x14aa930)
// Original: gaia::Hermes::~Hermes
// ----------------------------------------------------------------------------
void gaia::Hermes::Destroy(gaia::Hermes::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095C28);
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::Destroy_ea14aa960  (binary VA: 0x14aa960)
// Original: gaia::Hermes::~Hermes
// ----------------------------------------------------------------------------
void gaia::Hermes::Destroy_ea14aa960(gaia::Hermes::Self *self)
{
  gaia::Hermes::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::UpdateListSubscription  (binary VA: 0x14b14c0)
// Original: gaia::Hermes::UpdateListSubscription
// ----------------------------------------------------------------------------
int gaia::Hermes::UpdateListSubscription(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 3509;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/lists", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v10, a2);
  g4_std::string::Destroy(&v10);
  g4_std::string::append((int)(uintptr_t)(&v9), &off_1B711F7, 3u);
  if ( a4 != 0 )
    g4_std::string::append((int)(uintptr_t)(&v9), "/unsubscribe", 0xCu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "access_token=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), v12, a3);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v5 + 44, &v9);
  g4_std::string::assign_str((char *)v5 + 48, &v11);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::DeleteAllMessages  (binary VA: 0x14b1690)
// Original: gaia::Hermes::DeleteAllMessages
// ----------------------------------------------------------------------------
int gaia::Hermes::DeleteAllMessages(gaia::BaseServiceManager::Self *a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef char **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v9)) > _g4_s1 ? (23u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 23u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 3508;
  *((uint32_t *)v5 + 4) = 2;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[4]), "/messages", (int)(uintptr_t)(&v9));
  v8 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v11, v8);
  g4_std::string::Destroy(&v11);
  g4_std::string::append((int)(uintptr_t)(&v10[4]), &off_1B711F7, 3u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "access_token=", (int)(uintptr_t)(&v10[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v13, a4);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "&msgids=", (int)(uintptr_t)(&v10[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v14, a3);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v5 + 44, &v10[4]);
  g4_std::string::assign_str((char *)v5 + 48, &v12);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v10[4]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::DeleteMessage  (binary VA: 0x14b1880)
// Original: gaia::Hermes::DeleteMessage
// ----------------------------------------------------------------------------
int gaia::Hermes::DeleteMessage(gaia::BaseServiceManager::Self *a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef char **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v9)) > _g4_s1 ? (23u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 23u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 3507;
  *((uint32_t *)v5 + 4) = 2;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[4]), "/messages", (int)(uintptr_t)(&v9));
  v8 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v11, v8);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/me/", (int)(uintptr_t)(&v10[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v12, a3);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v10[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "access_token=", (int)(uintptr_t)(&v10[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v14, a4);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v5 + 44, &v10[4]);
  g4_std::string::assign_str((char *)v5 + 48, &v13);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v10[4]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::SendMessageToMultipleUsers  (binary VA: 0x14b1a50)
// Original: gaia::Hermes::SendMessageToMultipleUsers
// ----------------------------------------------------------------------------
int gaia::Hermes::SendMessageToMultipleUsers(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, int a4, char *a5, int a6, gaia::GaiaRequest::Self *a7)
{
  int v7;
  int i;
  typedef gaia::ServiceRequest::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (18u + sizeof(_g4_t_v11)) > _g4_s1 ? (18u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v20)) > _g4_s10 ? (52u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v21)) > _g4_s11 ? (56u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v22)) > _g4_s12 ? (60u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v23)) > _g4_s13 ? (64u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v24)) > _g4_s14 ? (68u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v25)) > _g4_s15 ? (72u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v26)) > _g4_s16 ? (76u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v27)) > _g4_s17 ? (80u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v28)) > _g4_s18 ? (84u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v29)) > _g4_s19 ? (88u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v30)) > _g4_s20 ? (92u + sizeof(_g4_t_v30)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 18u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);

  v10 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v10, a7);
  *((uint32_t *)v10 + 8) = 3504;
  *((uint32_t *)v10 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v10) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/messages/inbox/multicast", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a2);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&credentials=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v18, a3);
  g4_std::string::Destroy(&v18);
  if ( a6 <= 0 )
  {
    if ( a4 != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "&from=", (int)(uintptr_t)(&v13));
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v21, (char **)a4);
      g4_std::string::Destroy(&v21);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "&body=", (int)(uintptr_t)(&v13) + 1);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v22, (char **)(a4 + 4));
      g4_std::string::Destroy(&v22);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "&reply_to=", (int)(uintptr_t)(&v13) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v23, (char **)(a4 + 8));
      g4_std::string::Destroy(&v23);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "&attachment=", (int)(uintptr_t)(&v13) + 3);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v24, (char **)(a4 + 12));
      g4_std::string::Destroy(&v24);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "&sound=", (int)(uintptr_t)(&v14));
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v25, (char **)(a4 + 16));
      g4_std::string::Destroy(&v25);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&launch_button=", (int)(uintptr_t)(&v14) + 1);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v26, (char **)(a4 + 20));
      g4_std::string::Destroy(&v26);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&template=", (int)(uintptr_t)(&v14) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v27, (char **)(a4 + 24));
      g4_std::string::Destroy(&v27);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&template_args=", (int)(uintptr_t)(&v14) + 3);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v28, (char **)(a4 + 28));
      g4_std::string::Destroy(&v28);
      for ( i = *(uint32_t *)(a4 + 44); a4 + 36 != i; i = sub_1904890(i) )
      {
        sub_59E340(&v29, "&", (uint32_t *)(i + 16));
        g4_std::string::construct_copy(v30, &v29);
        g4_std::string::append((int)(uintptr_t)(v30), "=", 1u);
        gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), v30, (char **)(i + 20));
        g4_std::string::Destroy(v30);
        g4_std::string::Destroy(&v29);
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), a5, (int)(uintptr_t)(&v12) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "&payload=", (int)(uintptr_t)(&v12) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v20, (char **)&v19);
    g4_std::string::Destroy(&v20);
    g4_std::string::Destroy(&v19);
  }
  g4_std::string::assign_str((char *)v10 + 44, &v15);
  g4_std::string::assign_str((char *)v10 + 48, &v16);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v10);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::UnregisterDevices  (binary VA: 0x14b1f60)
// Original: gaia::Hermes::UnregisterDevices
// ----------------------------------------------------------------------------
int gaia::Hermes::UnregisterDevices(gaia::BaseServiceManager::Self *a1, int a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef char **_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 3502;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/transports", (int)(uintptr_t)(&v8));
  v7 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v10, v7);
  g4_std::string::Destroy(&v10);
  g4_std::string::append((int)(uintptr_t)(&v9), "/endpoints/delete", 0x11u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "access_token=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), v12, a3);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v4 + 44, &v9);
  g4_std::string::assign_str((char *)v4 + 48, &v11);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::RegisterEndpoint  (binary VA: 0x14b2100)
// Original: gaia::Hermes::RegisterEndpoint
// ----------------------------------------------------------------------------
int gaia::Hermes::RegisterEndpoint(gaia::BaseServiceManager::Self *a1, char **a2, int a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef char **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 3501;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/transports", (int)(uintptr_t)(&v9));
  v8 = (char **)(gaia::Hermes::s_transportsVector + 4 * a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(&v9) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v11, v8);
  g4_std::string::Destroy(&v11);
  g4_std::string::append((int)(uintptr_t)(&v10), "/endpoints", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(&v9) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v12, a2);
  g4_std::string::Destroy(&v12);
  v13 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "access_token=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v14, a4);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v5 + 44, &v10);
  g4_std::string::assign_str((char *)v5 + 48, &v13);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v10);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::ListRegisteredDevices  (binary VA: 0x14b9770)
// Original: gaia::Hermes::ListRegisteredDevices
// ----------------------------------------------------------------------------
int gaia::Hermes::ListRegisteredDevices(gaia::BaseServiceManager::Self *a1, int a2, char **a3, void **a4, int *a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef char **_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v13)) > _g4_s4 ? (40u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 3511;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/transports", (int)(uintptr_t)(&v10));
  v9 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v12, v9);
  g4_std::string::Destroy(&v12);
  g4_std::string::append((int)(uintptr_t)(&v11), "/endpoints", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "access_token=", (int)(uintptr_t)(&v10) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v14, a3);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v6 + 44, &v11);
  g4_std::string::assign_str((char *)v6 + 48, &v13);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a4, a5);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v11);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::ShowSubscriptions  (binary VA: 0x14b9920)
// Original: gaia::Hermes::ShowSubscriptions
// ----------------------------------------------------------------------------
int gaia::Hermes::ShowSubscriptions(gaia::BaseServiceManager::Self *a1, char **a2, void **a3, int *a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (1u + sizeof(_g4_t_v8)) > _g4_s0 ? (1u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 1u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 3510;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/lists/me", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v8) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v5 + 44, &v9);
  g4_std::string::assign_str((char *)v5 + 48, &v10);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a3, a4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::RetrieveMessage  (binary VA: 0x14b9a60)
// Original: gaia::Hermes::RetrieveMessage
// ----------------------------------------------------------------------------
int gaia::Hermes::RetrieveMessage(gaia::BaseServiceManager::Self *a1, int a2, char **a3, char **a4, void **a5, int *a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef char **_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[7];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v11)) > _g4_s1 ? (23u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 23u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 3506;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12[4]), "/messages", (int)(uintptr_t)(&v11));
  v10 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/", (int)(uintptr_t)(v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12[4]), &v13, v10);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/me/", (int)(uintptr_t)(&v12[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12[4]), &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "access_token=", (int)(uintptr_t)(&v12[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v16, a4);
  g4_std::string::Destroy(v16);
  g4_std::string::assign_str((char *)v7 + 44, &v12[4]);
  g4_std::string::assign_str((char *)v7 + 48, &v15);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a5, a6);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v12[4]);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::RetrieveMessages  (binary VA: 0x14b9c40)
// Original: gaia::Hermes::RetrieveMessages
// ----------------------------------------------------------------------------
int gaia::Hermes::RetrieveMessages(gaia::BaseServiceManager::Self *a1, int a2, char **a3, void **a4, int *a5, char a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef char **_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v15)) > _g4_s5 ? (44u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 3505;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/messages", (int)(uintptr_t)(&v11));
  v10 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v13, v10);
  g4_std::string::Destroy(&v13);
  g4_std::string::append((int)(uintptr_t)(&v12), &off_1B711F7, 3u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "access_token=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), v15, a3);
  g4_std::string::Destroy(v15);
  if ( a6 != 0 )
    g4_std::string::append((int)(uintptr_t)(&v14), "&delete=1", 9u);
  g4_std::string::assign_str((char *)v7 + 44, &v12);
  g4_std::string::assign_str((char *)v7 + 48, &v14);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a4, a5);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v12);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::SendMessageToUser  (binary VA: 0x14be310)
// Original: gaia::Hermes::SendMessageToUser
// ----------------------------------------------------------------------------
int gaia::Hermes::SendMessageToUser(gaia::BaseServiceManager::Self *a1, int a2, char **a3, int a4, char **a5, char **a6, int a7, char *a8, int a9, int a10, char a11, gaia::GaiaRequest::Self *a12)
{
  int v12;
  int v14;
  typedef char _g4_t_v15;
  typedef char **_g4_t_v16;
  typedef int _g4_t_i;
  typedef gaia::ServiceRequest::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
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
  typedef int _g4_t_v46[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_i)) > _g4_s2 ? (16u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v20)) > _g4_s5 ? (36u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v21)) > _g4_s6 ? (40u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v22)) > _g4_s7 ? (44u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v23)) > _g4_s8 ? (48u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v24)) > _g4_s9 ? (52u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v25)) > _g4_s10 ? (56u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v26)) > _g4_s11 ? (60u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v27)) > _g4_s12 ? (64u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v28)) > _g4_s13 ? (68u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v29)) > _g4_s14 ? (72u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v30)) > _g4_s15 ? (76u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v31)) > _g4_s16 ? (80u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v32)) > _g4_s17 ? (84u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v33)) > _g4_s18 ? (88u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v34)) > _g4_s19 ? (92u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v35)) > _g4_s20 ? (96u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v36)) > _g4_s21 ? (100u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v37)) > _g4_s22 ? (104u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v38)) > _g4_s23 ? (108u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v39)) > _g4_s24 ? (112u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v40)) > _g4_s25 ? (116u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v41)) > _g4_s26 ? (120u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v42)) > _g4_s27 ? (124u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v43)) > _g4_s28 ? (128u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v44)) > _g4_s29 ? (132u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v45)) > _g4_s30 ? (136u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v46)) > _g4_s31 ? (140u + sizeof(_g4_t_v46)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 128u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 132u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 136u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 140u);

  v15 = a11;
  v18 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v18, a12);
  *((uint32_t *)v18 + 8) = 3503;
  *((uint32_t *)v18 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v18) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/messages", (int)(uintptr_t)(&v19));
  v16 = (char **)(gaia::Hermes::s_transportsVector + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "/", (int)(uintptr_t)(&v19) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v25, v16);
  g4_std::string::Destroy(&v25);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v26), &a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "/", (int)(uintptr_t)(&v19) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v27, &v26);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), ":", (int)(uintptr_t)(&v19) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v28, a3);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "access_token=", (int)(uintptr_t)(&v20) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v30, a5);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "&replace_label=", (int)(uintptr_t)(&v20) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v31, a6);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "&delay=", (int)(uintptr_t)(&v20) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v32, &a10, 0);
  g4_std::string::Destroy(&v32);
  if ( v15 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "True", (int)(uintptr_t)(&v21) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "&alert_kairos=", (int)(uintptr_t)(&v21));
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v33, (char **)&v34);
    g4_std::string::Destroy(&v33);
    g4_std::string::Destroy(&v34);
  }
  if ( a9 <= 0 )
  {
    if ( a7 != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "&from=", (int)(uintptr_t)(&v22));
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v37, (char **)a7);
      g4_std::string::Destroy(&v37);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "&body=", (int)(uintptr_t)(&v22) + 1);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v38, (char **)(a7 + 4));
      g4_std::string::Destroy(&v38);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "&reply_to=", (int)(uintptr_t)(&v22) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v39, (char **)(a7 + 8));
      g4_std::string::Destroy(&v39);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "&attachment=", (int)(uintptr_t)(&v22) + 3);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v40, (char **)(a7 + 12));
      g4_std::string::Destroy(&v40);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "&sound=", (int)(uintptr_t)(&v23));
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v41, (char **)(a7 + 16));
      g4_std::string::Destroy(&v41);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "&launch_button=", (int)(uintptr_t)(&v23) + 1);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v42, (char **)(a7 + 20));
      g4_std::string::Destroy(&v42);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "&template=", (int)(uintptr_t)(&v23) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v43, (char **)(a7 + 24));
      g4_std::string::Destroy(&v43);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "&template_args=", (int)(uintptr_t)(&v23) + 3);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v44, (char **)(a7 + 28));
      g4_std::string::Destroy(&v44);
      v14 = *(uint32_t *)(a7 + 44);
      for ( i = a7 + 36; i != v14; v14 = sub_1904890(v14) )
      {
        sub_59E340(&v45, "&", (uint32_t *)(v14 + 16));
        g4_std::string::construct_copy(v46, &v45);
        g4_std::string::append((int)(uintptr_t)(v46), "=", 1u);
        gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), v46, (char **)(v14 + 20));
        g4_std::string::Destroy(v46);
        g4_std::string::Destroy(&v45);
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), a8, (int)(uintptr_t)(&v21) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "&payload=", (int)(uintptr_t)(&v21) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), &v36, (char **)&v35);
    g4_std::string::Destroy(&v36);
    g4_std::string::Destroy(&v35);
  }
  g4_std::string::assign_str((char *)v18 + 44, &v24);
  g4_std::string::assign_str((char *)v18 + 48, &v29);
  v12 = gaia::BaseServiceManager::SendCompleteRequest(a1, v18);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v24);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::Construct  (binary VA: 0x14c0ca0)
// Original: gaia::Hermes::Hermes
// ----------------------------------------------------------------------------
int gaia::Hermes::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "hermes", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095C28);
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 52, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::Hermes::CreateTransportsVector  (binary VA: 0x14c71f0)
// Original: gaia::Hermes::CreateTransportsVector
// ----------------------------------------------------------------------------
gaia::Hermes::Self * gaia::Hermes::CreateTransportsVector(gaia::Hermes::Self *self)
{
  char *v1;
  int v2;
  void *v3;
  char *v4;
  int v5;
  void *v6;
  char *v7;
  int v8;
  void *v9;
  char *v10;
  int v11;
  void *v12;
  char *v13;
  int v14;
  void *v15;
  char *v16;
  int v17;
  void *v18;
  char *v19;
  int v20;
  void *v21;
  char *v22;
  int v23;
  void *v24;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v34)) > _g4_s8 ? (40u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v35)) > _g4_s9 ? (44u + sizeof(_g4_t_v35)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "c2dm", (int)(uintptr_t)(&v26));
  v1 = *((char **)self + 1);
  if ( v1 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v1, (int)(uintptr_t)(&v28));
  }
  else
  {
    v2 = 0;
    if ( v1 != nullptr )
    {
      g4_std::string::construct_copy(v1, &v28);
      v2 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v2 + 4;
  }
  v3 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "apns", (int)(uintptr_t)(&v26) + 1);
  v4 = *((char **)self + 1);
  if ( v4 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v4, (int)(uintptr_t)(&v29));
  }
  else
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      g4_std::string::construct_copy(v4, &v29);
      v5 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v5 + 4;
  }
  v6 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "inbox", (int)(uintptr_t)(&v26) + 2);
  v7 = *((char **)self + 1);
  if ( v7 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v7, (int)(uintptr_t)(&v30));
  }
  else
  {
    v8 = 0;
    if ( v7 != nullptr )
    {
      g4_std::string::construct_copy(v7, &v30);
      v8 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v8 + 4;
  }
  v9 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "secured", (int)(uintptr_t)(&v26) + 3);
  v10 = *((char **)self + 1);
  if ( v10 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v10, (int)(uintptr_t)(&v31));
  }
  else
  {
    v11 = 0;
    if ( v10 != nullptr )
    {
      g4_std::string::construct_copy(v10, &v31);
      v11 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v11 + 4;
  }
  v12 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), (char *)&off_1B70F28, (int)(uintptr_t)(&v27));
  v13 = *((char **)self + 1);
  if ( v13 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v13, (int)(uintptr_t)(&v32));
  }
  else
  {
    v14 = 0;
    if ( v13 != nullptr )
    {
      g4_std::string::construct_copy(v13, &v32);
      v14 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v14 + 4;
  }
  v15 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "mpns", (int)(uintptr_t)(&v27) + 1);
  v16 = *((char **)self + 1);
  if ( v16 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v16, (int)(uintptr_t)(&v33));
  }
  else
  {
    v17 = 0;
    if ( v16 != nullptr )
    {
      g4_std::string::construct_copy(v16, &v33);
      v17 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v17 + 4;
  }
  v18 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "gcm", (int)(uintptr_t)(&v27) + 2);
  v19 = *((char **)self + 1);
  if ( v19 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v19, (int)(uintptr_t)(&v34));
  }
  else
  {
    v20 = 0;
    if ( v19 != nullptr )
    {
      g4_std::string::construct_copy(v19, &v34);
      v20 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v20 + 4;
  }
  v21 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "adm", (int)(uintptr_t)(&v27) + 3);
  v22 = *((char **)self + 1);
  if ( v22 == *((char **)self + 2) )
  {
    g4_std::vector_string_86c307::M_insert_aux((int *)self, v22, (int)(uintptr_t)(v35));
  }
  else
  {
    v23 = 0;
    if ( v22 != nullptr )
    {
      g4_std::string::construct_copy(v22, v35);
      v23 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v23 + 4;
  }
  v24 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  return self;
}


