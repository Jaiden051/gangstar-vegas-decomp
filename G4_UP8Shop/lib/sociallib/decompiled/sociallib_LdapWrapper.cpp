#include "Core/Utils/DecompTypes.h"
#include "sociallib_LdapWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::likeApplication  (binary VA: 0x142beb0)
// Original: sociallib::LdapWrapper::likeApplication
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::LdapWrapper::likeApplication(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint32_t *)a2 + 1) = 2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::postMessageToWall  (binary VA: 0x142bec0)
// Original: sociallib::LdapWrapper::postMessageToWall
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::LdapWrapper::postMessageToWall(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint32_t *)a2 + 1) = 2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::login  (binary VA: 0x142bed0)
// Original: sociallib::LdapWrapper::login
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::LdapWrapper::login(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint8_t *)self + 4) = 1;
  *((uint32_t *)a2 + 1) = 2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::logout  (binary VA: 0x142bef0)
// Original: sociallib::LdapWrapper::logout
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::LdapWrapper::logout(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint8_t *)self + 4) = 0;
  *((uint32_t *)a2 + 1) = 2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::isLoggedIn  (binary VA: 0x142bf10)
// Original: sociallib::LdapWrapper::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::LdapWrapper::isLoggedIn(sociallib::LdapWrapper::Self *self)
{
  return *((uint8_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getName  (binary VA: 0x142bf20)
// Original: sociallib::LdapWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::LdapWrapper::getName(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::assign_str((char *)a2 + 60, &sociallib::LdapWrapper::s_winLdap_name));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getUid  (binary VA: 0x142bf70)
// Original: sociallib::LdapWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::LdapWrapper::getUid(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::assign_str((char *)a2 + 60, &sociallib::LdapWrapper::s_winLdap_credential));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::GetSecret  (binary VA: 0x142bfc0)
// Original: sociallib::LdapWrapper::GetSecret
// ----------------------------------------------------------------------------
sociallib::LdapWrapper::Self * sociallib::LdapWrapper::GetSecret(sociallib::LdapWrapper::Self *self)
{
  g4_std::string::construct_copy(self, &sociallib::LdapWrapper::s_windLdap_password);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::init  (binary VA: 0x142c000)
// Original: sociallib::LdapWrapper::init
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::LdapWrapper::init(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  sociallib::ClientSNSInterface::Self *v2;

  v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v2 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v2);
    dword_20D2420 = (int)(uintptr_t)(v2);
  }
  sociallib::ClientSNSInterface::setIsInitializedTrue((int)(uintptr_t)(v2), 3);
  *((uint32_t *)a2 + 1) = 2;
  return a2;
}



// ============================================================================
// Address:   0x142c080 (size: 63 bytes)
// Symbol:    _ZN9sociallib11LdapWrapperC1Ev
// Demangled: sociallib::LdapWrapper::LdapWrapper(void)
// ============================================================================
// Alternative name is '_ZN9sociallib11LdapWrapperC2Ev'
void (**sociallib::LdapWrapper::LdapWrapper(
        sociallib::LdapWrapper::Self *self))(sociallib::LdapWrapper::Self * self)
{
  sociallib::SNSWrapperBase::Construct(self);
  *((uint8_t *)self + 4) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095948);
  return (void (**)(sociallib::LdapWrapper::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2095948));
}
// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::SetWindowsLdapLogin  (binary VA: 0x142c0c0)
// Original: sociallib::LdapWrapper::SetWindowsLdapLogin
// ----------------------------------------------------------------------------
int sociallib::LdapWrapper::SetWindowsLdapLogin(int a1, int a2, int a3)
{
  g4_std::string::assign_str(&sociallib::LdapWrapper::s_winLdap_credential, a1);
  g4_std::string::assign_str(&sociallib::LdapWrapper::s_windLdap_password, a2);
  return (int)(uintptr_t)(g4_std::string::assign_str(&sociallib::LdapWrapper::s_winLdap_name, a3));
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getFriends  (binary VA: 0x142c120)
// Original: sociallib::LdapWrapper::getFriends
// ----------------------------------------------------------------------------
void sociallib::LdapWrapper::getFriends(sociallib::LdapWrapper::Self *self, size_t *a2)
{
  int IntParam;
  char *v3;
  void *v4;
  char *v5;
  void *v6;
  char *v7;
  void *v8;
  char *v9;
  void *v10;
  char *v11;
  void *v12;
  char *v13;
  void *v14;
  char *v15;
  void *v16;
  char *v17;
  void *v18;
  char *v19;
  unsigned int v20;
  char *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  char *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  char *v32;
  int v33;
  int v34;
  uint32_t *v35;
  char *v36;
  void *v37;
  char *v38;
  void *v39;
  char *v40;
  void *v41;
  char *v42;
  void *v43;
  size_t v44;
  int v45;
  char *v46;
  char *v47;
  char *v48;
  void *v49;
  char *v50;
  void *v51;
  char *v52;
  void *v53;
  char *v54;
  void *v55;
  typedef size_t _g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef char *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef void *_g4_t_v90;
  typedef char *_g4_t_v91;
  typedef char *_g4_t_v92;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v56)) > _g4_s0 ? (0u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v57)) > _g4_s1 ? (0u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v58)) > _g4_s2 ? (4u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v59)) > _g4_s3 ? (4u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v60)) > _g4_s4 ? (24u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v61)) > _g4_s5 ? (24u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v62)) > _g4_s6 ? (28u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v63)) > _g4_s7 ? (32u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v64)) > _g4_s8 ? (32u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v65)) > _g4_s9 ? (36u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v66)) > _g4_s10 ? (40u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v67)) > _g4_s11 ? (40u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v68)) > _g4_s12 ? (52u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v69)) > _g4_s13 ? (56u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v70)) > _g4_s14 ? (60u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v71)) > _g4_s15 ? (64u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v72)) > _g4_s16 ? (88u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v73)) > _g4_s17 ? (92u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v74)) > _g4_s18 ? (96u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v75)) > _g4_s19 ? (100u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v76)) > _g4_s20 ? (104u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v77)) > _g4_s21 ? (108u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v78)) > _g4_s22 ? (112u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v79)) > _g4_s23 ? (116u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v80)) > _g4_s24 ? (120u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v81)) > _g4_s25 ? (124u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v82)) > _g4_s26 ? (128u + sizeof(_g4_t_v82)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v83)) > _g4_s27 ? (132u + sizeof(_g4_t_v83)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v84)) > _g4_s28 ? (136u + sizeof(_g4_t_v84)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v85)) > _g4_s29 ? (140u + sizeof(_g4_t_v85)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v86)) > _g4_s30 ? (144u + sizeof(_g4_t_v86)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v87)) > _g4_s31 ? (148u + sizeof(_g4_t_v87)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v88)) > _g4_s32 ? (152u + sizeof(_g4_t_v88)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v89)) > _g4_s33 ? (156u + sizeof(_g4_t_v89)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v90)) > _g4_s34 ? (164u + sizeof(_g4_t_v90)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v91)) > _g4_s35 ? (168u + sizeof(_g4_t_v91)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v92)) > _g4_s36 ? (172u + sizeof(_g4_t_v92)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 92u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 120u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 124u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 128u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 132u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 136u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 140u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 144u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 148u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 152u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 156u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 164u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 168u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 172u);

  sociallib::SNSRequestState::getParamListSize((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getParamType((sociallib::SNSRequestState::Self *)a2);
  IntParam = sociallib::SNSRequestState::getIntParam((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getParamType((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v88, (int)(uintptr_t)(a2));
  v90 = nullptr;
  v91 = nullptr;
  v92 = nullptr;
  if ( IntParam != 0 )
  {
    if ( IntParam == 1 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "ldap_not_playing_a", (int)(uintptr_t)(&v69));
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v76));
      }
      else
      {
        v48 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v76);
          v48 = v91;
        }
        v91 = v48 + 4;
      }
      v49 = (void *)(v76 - 12);
      if ( (uint32_t *)(v76 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v76 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v49);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "ldap_not_playing_b", (int)(uintptr_t)(&v69) + 1);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v77));
      }
      else
      {
        v50 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v77);
          v50 = v91;
        }
        v91 = v50 + 4;
      }
      v51 = (void *)(v77 - 12);
      if ( (uint32_t *)(v77 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v51);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "ldap_not_playing_c", (int)(uintptr_t)(&v69) + 2);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v78));
      }
      else
      {
        v52 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v78);
          v52 = v91;
        }
        v91 = v52 + 4;
      }
      v53 = (void *)(v78 - 12);
      if ( (uint32_t *)(v78 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v53);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "ldap_not_playing_d", (int)(uintptr_t)(&v69) + 3);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v79));
      }
      else
      {
        v54 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v79);
          v54 = v91;
        }
        v91 = v54 + 4;
      }
      v55 = (void *)(v79 - 12);
      if ( (uint32_t *)(v79 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v55);
      }
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "ldap_playing_a", (int)(uintptr_t)(&v70));
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v80));
      }
      else
      {
        v3 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v80);
          v3 = v91;
        }
        v91 = v3 + 4;
      }
      v4 = (void *)(v80 - 12);
      if ( (uint32_t *)(v80 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "ldap_playing_b", (int)(uintptr_t)(&v70) + 1);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v81));
      }
      else
      {
        v5 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v81);
          v5 = v91;
        }
        v91 = v5 + 4;
      }
      v6 = (void *)(v81 - 12);
      if ( (uint32_t *)(v81 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "ldap_playing_c", (int)(uintptr_t)(&v70) + 2);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v82));
      }
      else
      {
        v7 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v82);
          v7 = v91;
        }
        v91 = v7 + 4;
      }
      v8 = (void *)(v82 - 12);
      if ( (uint32_t *)(v82 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v83), "ldap_playing_d", (int)(uintptr_t)(&v70) + 3);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v83));
      }
      else
      {
        v9 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v83);
          v9 = v91;
        }
        v91 = v9 + 4;
      }
      v10 = (void *)(v83 - 12);
      if ( (uint32_t *)(v83 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v84), "ldap_not_playing_a", (int)(uintptr_t)(&v71));
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v84));
      }
      else
      {
        v11 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v84);
          v11 = v91;
        }
        v91 = v11 + 4;
      }
      v12 = (void *)(v84 - 12);
      if ( (uint32_t *)(v84 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v84 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v85), "ldap_not_playing_b", (int)(uintptr_t)(&v71) + 1);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v85));
      }
      else
      {
        v13 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v85);
          v13 = v91;
        }
        v91 = v13 + 4;
      }
      v14 = (void *)(v85 - 12);
      if ( (uint32_t *)(v85 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v85 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v86), "ldap_not_playing_c", (int)(uintptr_t)(&v71) + 2);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v86));
      }
      else
      {
        v15 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v86);
          v15 = v91;
        }
        v91 = v15 + 4;
      }
      v16 = (void *)(v86 - 12);
      if ( (uint32_t *)(v86 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v87), "ldap_not_playing_d", (int)(uintptr_t)(&v71) + 3);
      if ( v91 == v92 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v87));
      }
      else
      {
        v17 = nullptr;
        if ( v91 != nullptr )
        {
          g4_std::string::construct_copy(v91, &v87);
          v17 = v91;
        }
        v91 = v17 + 4;
      }
      v18 = (void *)(v87 - 12);
      if ( (uint32_t *)(v87 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "ldap_playing_a", (int)(uintptr_t)(&v68));
    if ( v91 == v92 )
    {
      g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v72));
    }
    else
    {
      v36 = nullptr;
      if ( v91 != nullptr )
      {
        g4_std::string::construct_copy(v91, &v72);
        v36 = v91;
      }
      v91 = v36 + 4;
    }
    v37 = (void *)(v72 - 12);
    if ( (uint32_t *)(v72 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v37);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "ldap_playing_b", (int)(uintptr_t)(&v68) + 1);
    if ( v91 == v92 )
    {
      g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v73));
    }
    else
    {
      v38 = nullptr;
      if ( v91 != nullptr )
      {
        g4_std::string::construct_copy(v91, &v73);
        v38 = v91;
      }
      v91 = v38 + 4;
    }
    v39 = (void *)(v73 - 12);
    if ( (uint32_t *)(v73 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v39);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "ldap_playing_c", (int)(uintptr_t)(&v68) + 2);
    if ( v91 == v92 )
    {
      g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v74));
    }
    else
    {
      v40 = nullptr;
      if ( v91 != nullptr )
      {
        g4_std::string::construct_copy(v91, &v74);
        v40 = v91;
      }
      v91 = v40 + 4;
    }
    v41 = (void *)(v74 - 12);
    if ( (uint32_t *)(v74 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v41);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "ldap_playing_d", (int)(uintptr_t)(&v68) + 3);
    if ( v91 == v92 )
    {
      g4_std::vector_string_86c307::M_insert_aux((int *)&v90, v91, (int)(uintptr_t)(&v75));
    }
    else
    {
      v42 = nullptr;
      if ( v91 != nullptr )
      {
        g4_std::string::construct_copy(v91, &v75);
        v42 = v91;
      }
      v91 = v42 + 4;
    }
    v43 = (void *)(v75 - 12);
    if ( (uint32_t *)(v75 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v43);
    }
  }
  if ( &v90 != (void **)(a2 + 16) )
  {
    v19 = (char *)v90;
    v63 = v91;
    v20 = (v91 - (char *)((uint8_t *)v90)) >> 2;
    v21 = (char *)a2[16];
    v62 = v20;
    if ( v20 > (int)(a2[18] - (uint32_t)(uintptr_t)(v21)) >> 2 )
    {
      v66 = 0;
      v65 = 0;
      if ( v20 != 0 )
      {
        if ( v20 > 0x3FFFFFFF )
          sub_18FFEE0(v20, a2);
        v66 = 4 * v20;
        v65 = opNew(4 * v20);
      }
      if ( v19 != v63 )
      {
        v22 = v65;
        do
        {
          if ( v22 != 0 )
            g4_std::string::construct_copy(v22, v19);
          v19 += 4;
          v22 += 4;
        }
        while ( v63 != v19 );
      }
      v23 = (uint32_t *)a2[17];
      v24 = (uint32_t *)a2[16];
      if ( v23 != v24 )
      {
        do
        {
          v25 = (uint32_t *)(*v24 - 12);
          if ( v25 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v24 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v25);
          ++v24;
        }
        while ( v23 != v24 );
        v24 = (uint32_t *)a2[16];
      }
      if ( v24 != nullptr )
        opDelete(v24);
      v19 = (char *)v90;
      v26 = v65 + v66;
      a2[16] = v65;
      a2[18] = v65 + v66;
      v27 = v91;
      goto LABEL_60;
    }
    v32 = (char *)a2[17];
    v33 = (v32 - v21) >> 2;
    if ( v62 > (unsigned int)v33 )
    {
      v27 = (char *)v90 + 4 * v33;
      if ( v33 > 0 )
      {
        v44 = a2[16];
        v45 = (int)(a2[17] - (uint32_t)(uintptr_t)(v21)) >> 2;
        do
        {
          v59 = v19;
          v57 = v44;
          v19 += 4;
          v44 += 4;
          g4_std::string::assign_str(v57, v59);
          --v45;
        }
        while ( v45 != 0 );
        v19 = (char *)v90;
        v32 = (char *)a2[17];
        v63 = v91;
        v21 = (char *)a2[16];
        v27 = (char *)v90 + ((v32 - v21) & 0xFFFFFFFC);
      }
      if ( v27 == v63 )
      {
        v26 = (int)(uintptr_t)(&v21[4 * v62]);
        goto LABEL_60;
      }
      v46 = v27;
      v47 = v32;
      do
      {
        if ( v47 != nullptr )
          g4_std::string::construct_copy(v47, v46);
        v46 += 4;
        v47 += 4;
      }
      while ( v46 != v63 );
    }
    else
    {
      if ( v62 <= 0 )
        goto LABEL_81;
      v64 = (char *)a2[17];
      v67 = a2[16];
      v34 = (v91 - (char *)((uint8_t *)v90)) >> 2;
      do
      {
        v58 = v19;
        v56 = (size_t)v21;
        v19 += 4;
        v21 += 4;
        g4_std::string::assign_str(v56, v58);
        --v34;
      }
      while ( v34 != 0 );
      v32 = v64;
      v21 = (char *)(v67 + 4 * v62);
      if ( v64 != v21 )
      {
        do
        {
          v35 = (uint32_t *)(*(uint32_t *)v21 - 12);
          if ( v35 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            v61 = v32;
            g4_std::string::Rep::M_destroy(v35);
            v32 = v61;
          }
          v21 += 4;
LABEL_81:
          ;
        }
        while ( v32 != v21 );
      }
    }
    v27 = v91;
    v19 = (char *)v90;
    v26 = a2[16] + 4 * v62;
LABEL_60:
    a2[17] = v26;
    goto LABEL_61;
  }
  v27 = v91;
  v19 = (char *)v90;
LABEL_61:
  a2[1] = 2;
  if ( v27 != v19 )
  {
    do
    {
      v28 = (uint32_t *)(*(uint32_t *)v19 - 12);
      if ( v28 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v19 - 4), 0xFFFFFFFF) <= 0 )
      {
        v60 = v27;
        g4_std::string::Rep::M_destroy(v28);
        v27 = v60;
      }
      v19 += 4;
    }
    while ( v19 != v27 );
    v19 = (char *)v90;
  }
  if ( v19 != nullptr )
    opDelete(v19);
  v29 = v89;
  v30 = (uint32_t *)(v88);
  if ( v89 != v88 )
  {
    do
    {
      v31 = (uint32_t *)(*v30 - 12);
      if ( v31 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v30 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v31);
      ++v30;
    }
    while ( v29 != v30 );
    v30 = (uint32_t *)(v88);
  }
  if ( v30 != nullptr )
    opDelete(v30);
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getUserNames  (binary VA: 0x142d000)
// Original: sociallib::LdapWrapper::getUserNames
// ----------------------------------------------------------------------------
void sociallib::LdapWrapper::getUserNames(sociallib::LdapWrapper::Self *self, void **a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void *v4;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  uint32_t *v14;
  void *v15;
  volatile int32_t *v16;
  uint32_t *v17;
  typedef void *_g4_t_s2;
  typedef const void **_g4_t_v19;
  typedef void **_g4_t_v20;
  typedef unsigned int _g4_t_i;
  typedef const void **_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef void *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef char _g4_t_s[156];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_i)) > _g4_s3 ? (12u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v26)) > _g4_s8 ? (52u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v27)) > _g4_s9 ? (56u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_s)) > _g4_s10 ? (64u + sizeof(_g4_t_s)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 64u);

  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(a2 + 19),
    a2[21]);
  a2[22] = a2 + 20;
  a2[23] = a2 + 20;
  a2[21] = nullptr;
  a2[24] = nullptr;
  sociallib::SNSRequestState::getParamListSize((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getParamType((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v26, (int)(uintptr_t)(a2));
  v2 = v27;
  v3 = (uint32_t *)(v26);
  if ( (unsigned int)((char *)v27 - (char *)((uint8_t *)v26)) >> 2 != 0 )
  {
    for ( i = 0; i < ((char *)v27 - (char *)((uint8_t *)v26)) >> 2; ++i )
    {
      sprintf(s, "name_%s", v3[i]);
      v20 = (void **)((char *)v26 + 4 * i);
      v4 = a2[21];
      if ( v4 != nullptr )
      {
        s2 = *v20;
        v5 = *((uint32_t *)*v20 - 3);
        v19 = (const void **)(a2 + 20);
        do
        {
          while ( 1 )
          {
            v6 = *(uint32_t *)(*((uint32_t *)v4 + 4) - 12);
            n = v6;
            if ( v5 <= v6 )
              n = v5;
            v8 = v6 - v5;
            v9 = memcmp(*((const void **)v4 + 4), s2, n);
            if ( v9 == 0 )
              v9 = v8;
            if ( v9 < 0 )
              break;
            v19 = (const void **)v4;
            v4 = *((void **)v4 + 2);
            if ( v4 == nullptr )
              goto LABEL_12;
          }
          v4 = *((void **)v4 + 3);
        }
        while ( v4 != nullptr );
LABEL_12:
        if ( a2 + 20 != (void **)v19 )
        {
          v10 = *((uint32_t *)v19[4] - 3);
          v11 = v10;
          if ( v5 <= v10 )
            v11 = v5;
          v12 = v5 - v10;
          v13 = memcmp(s2, v19[4], v11);
          if ( v13 == 0 )
            v13 = v12;
          if ( v13 >= 0 )
            goto LABEL_18;
        }
      }
      else
      {
        v19 = (const void **)(a2 + 20);
      }
      v23 = &dword_213B814;
      g4_std::string::construct_copy(&v24, v20);
      g4_std::string::construct_copy(&v25, &v23);
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
        (int *)&v22,
        a2 + 19,
        (int)(uintptr_t)(v19),
        (const void **)&v24);
      v19 = v22;
      v15 = (void *)(v25 - 12);
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      v16 = v24 - 3;
      if ( v24 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)v16);
      v17 = v23 - 3;
      if ( v23 - 3 != dword_213B808 && __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v17);
LABEL_18:
      g4_std_compat::string_assign((int)(uintptr_t)(v19 + 5), s, strlen(s));
      v2 = v27;
      v3 = (uint32_t *)(v26);
    }
  }
  for ( a2[1] = &dword_0 + 2; v2 != v3; ++v3 )
  {
    v14 = (uint32_t *)(*v3 - 12);
    if ( v14 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v14);
  }
  if ( v26 != nullptr )
    opDelete(v26);
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getUserData  (binary VA: 0x142d3a0)
// Original: sociallib::LdapWrapper::getUserData
// ----------------------------------------------------------------------------
void sociallib::LdapWrapper::getUserData(sociallib::LdapWrapper::Self *self, void ***a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void *v4;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  void *v14;
  void *v15;
  size_t v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  size_t v21;
  size_t v22;
  int v23;
  int v24;
  void *v25;
  void *v26;
  void *v27;
  size_t v28;
  size_t v29;
  size_t v30;
  int v31;
  int v32;
  size_t v33;
  size_t v34;
  int v35;
  int v36;
  void *v37;
  void *v38;
  void *v39;
  size_t v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  size_t v45;
  size_t v46;
  int v47;
  int v48;
  void *v49;
  void *v50;
  void *v51;
  size_t v52;
  size_t v53;
  size_t v54;
  int v55;
  int v56;
  size_t v57;
  size_t v58;
  int v59;
  int v60;
  void *v61;
  void *v62;
  uint32_t *v63;
  int *i;
  uint32_t *v65;
  int *j;
  size_t v67;
  void **k;
  void **v69;
  uint32_t *v70;
  size_t v71;
  size_t v72;
  int v73;
  uint32_t *v74;
  size_t v75;
  void **v76;
  int v77;
  int v78;
  char *v79;
  void *v80;
  uint32_t *v81;
  void *v82;
  volatile int32_t *v83;
  uint32_t *v84;
  void *v85;
  volatile int32_t *v86;
  uint32_t *v87;
  void *v88;
  volatile int32_t *v89;
  uint32_t *v90;
  void *v91;
  volatile int32_t *v92;
  uint32_t *v93;
  void *v94;
  volatile int32_t *v95;
  uint32_t *v96;
  typedef void **_g4_t_v97;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v100;
  typedef void *_g4_t_v101;
  typedef void *_g4_t_v102;
  typedef char _g4_t_v103;
  typedef int *_g4_t_v104;
  typedef int *_g4_t_v105;
  typedef int *_g4_t_v106;
  typedef int *_g4_t_v107;
  typedef int *_g4_t_v108;
  typedef void *_g4_t_v109;
  typedef size_t _g4_t_v110;
  typedef size_t _g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef uint32_t *_g4_t_v113;
  typedef int _g4_t_v114[4];
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef uint32_t *_g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef uint32_t *_g4_t_v128;
  typedef uint32_t *_g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef volatile int32_t *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef volatile int32_t *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef volatile int32_t *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef volatile int32_t *_g4_t_v137;
  typedef int _g4_t_v138;
  typedef volatile int32_t *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef void *_g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef void *_g4_t_v145;
  typedef int *_g4_t_v146;
  typedef int *_g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef void *_g4_t_v151;
  typedef int *_g4_t_v152;
  typedef int *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155[2];
  typedef void *_g4_t_v156;
  typedef int _g4_t_v157;
  typedef char _g4_t_v158;
  typedef uint8_t _g4_t_v159[20];
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef void *_g4_t_v163;
  typedef int *_g4_t_v164;
  typedef int *_g4_t_v165;
  typedef int _g4_t_v166;
  typedef char _g4_t_v167;
  typedef uint8_t _g4_t_v168[20];
  typedef char *_g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef void *_g4_t_v172;
  typedef int *_g4_t_v173;
  typedef int *_g4_t_v174;
  typedef int _g4_t_v175;
  typedef char _g4_t_v176;
  typedef uint8_t _g4_t_v177[48];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (12u + sizeof(_g4_t_v97)) > _g4_s0 ? (12u + sizeof(_g4_t_v97)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_s2)) > _g4_s1 ? (20u + sizeof(_g4_t_s2)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_s1)) > _g4_s2 ? (20u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v100)) > _g4_s3 ? (20u + sizeof(_g4_t_v100)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v101)) > _g4_s4 ? (20u + sizeof(_g4_t_v101)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v102)) > _g4_s5 ? (20u + sizeof(_g4_t_v102)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v103)) > _g4_s6 ? (20u + sizeof(_g4_t_v103)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v104)) > _g4_s7 ? (24u + sizeof(_g4_t_v104)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v105)) > _g4_s8 ? (24u + sizeof(_g4_t_v105)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v106)) > _g4_s9 ? (24u + sizeof(_g4_t_v106)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v107)) > _g4_s10 ? (24u + sizeof(_g4_t_v107)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v108)) > _g4_s11 ? (24u + sizeof(_g4_t_v108)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v109)) > _g4_s12 ? (24u + sizeof(_g4_t_v109)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v110)) > _g4_s13 ? (32u + sizeof(_g4_t_v110)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v111)) > _g4_s14 ? (32u + sizeof(_g4_t_v111)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v112)) > _g4_s15 ? (36u + sizeof(_g4_t_v112)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v113)) > _g4_s16 ? (40u + sizeof(_g4_t_v113)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v114)) > _g4_s17 ? (92u + sizeof(_g4_t_v114)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v115)) > _g4_s18 ? (108u + sizeof(_g4_t_v115)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v116)) > _g4_s19 ? (112u + sizeof(_g4_t_v116)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v117)) > _g4_s20 ? (140u + sizeof(_g4_t_v117)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v118)) > _g4_s21 ? (144u + sizeof(_g4_t_v118)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v119)) > _g4_s22 ? (148u + sizeof(_g4_t_v119)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v120)) > _g4_s23 ? (152u + sizeof(_g4_t_v120)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v121)) > _g4_s24 ? (156u + sizeof(_g4_t_v121)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v122)) > _g4_s25 ? (160u + sizeof(_g4_t_v122)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v123)) > _g4_s26 ? (164u + sizeof(_g4_t_v123)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v124)) > _g4_s27 ? (168u + sizeof(_g4_t_v124)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v125)) > _g4_s28 ? (172u + sizeof(_g4_t_v125)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v126)) > _g4_s29 ? (176u + sizeof(_g4_t_v126)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v127)) > _g4_s30 ? (180u + sizeof(_g4_t_v127)) : _g4_s30,
    _g4_s32 = (184u + sizeof(_g4_t_v128)) > _g4_s31 ? (184u + sizeof(_g4_t_v128)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v129)) > _g4_s32 ? (188u + sizeof(_g4_t_v129)) : _g4_s32,
    _g4_s34 = (192u + sizeof(_g4_t_v130)) > _g4_s33 ? (192u + sizeof(_g4_t_v130)) : _g4_s33,
    _g4_s35 = (196u + sizeof(_g4_t_v131)) > _g4_s34 ? (196u + sizeof(_g4_t_v131)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v132)) > _g4_s35 ? (200u + sizeof(_g4_t_v132)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v133)) > _g4_s36 ? (204u + sizeof(_g4_t_v133)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v134)) > _g4_s37 ? (208u + sizeof(_g4_t_v134)) : _g4_s37,
    _g4_s39 = (212u + sizeof(_g4_t_v135)) > _g4_s38 ? (212u + sizeof(_g4_t_v135)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v136)) > _g4_s39 ? (216u + sizeof(_g4_t_v136)) : _g4_s39,
    _g4_s41 = (220u + sizeof(_g4_t_v137)) > _g4_s40 ? (220u + sizeof(_g4_t_v137)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v138)) > _g4_s41 ? (224u + sizeof(_g4_t_v138)) : _g4_s41,
    _g4_s43 = (228u + sizeof(_g4_t_v139)) > _g4_s42 ? (228u + sizeof(_g4_t_v139)) : _g4_s42,
    _g4_s44 = (232u + sizeof(_g4_t_v140)) > _g4_s43 ? (232u + sizeof(_g4_t_v140)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v141)) > _g4_s44 ? (236u + sizeof(_g4_t_v141)) : _g4_s44,
    _g4_s46 = (240u + sizeof(_g4_t_v142)) > _g4_s45 ? (240u + sizeof(_g4_t_v142)) : _g4_s45,
    _g4_s47 = (248u + sizeof(_g4_t_v143)) > _g4_s46 ? (248u + sizeof(_g4_t_v143)) : _g4_s46,
    _g4_s48 = (252u + sizeof(_g4_t_v144)) > _g4_s47 ? (252u + sizeof(_g4_t_v144)) : _g4_s47,
    _g4_s49 = (256u + sizeof(_g4_t_v145)) > _g4_s48 ? (256u + sizeof(_g4_t_v145)) : _g4_s48,
    _g4_s50 = (260u + sizeof(_g4_t_v146)) > _g4_s49 ? (260u + sizeof(_g4_t_v146)) : _g4_s49,
    _g4_s51 = (264u + sizeof(_g4_t_v147)) > _g4_s50 ? (264u + sizeof(_g4_t_v147)) : _g4_s50,
    _g4_s52 = (268u + sizeof(_g4_t_v148)) > _g4_s51 ? (268u + sizeof(_g4_t_v148)) : _g4_s51,
    _g4_s53 = (272u + sizeof(_g4_t_v149)) > _g4_s52 ? (272u + sizeof(_g4_t_v149)) : _g4_s52,
    _g4_s54 = (276u + sizeof(_g4_t_v150)) > _g4_s53 ? (276u + sizeof(_g4_t_v150)) : _g4_s53,
    _g4_s55 = (280u + sizeof(_g4_t_v151)) > _g4_s54 ? (280u + sizeof(_g4_t_v151)) : _g4_s54,
    _g4_s56 = (284u + sizeof(_g4_t_v152)) > _g4_s55 ? (284u + sizeof(_g4_t_v152)) : _g4_s55,
    _g4_s57 = (288u + sizeof(_g4_t_v153)) > _g4_s56 ? (288u + sizeof(_g4_t_v153)) : _g4_s56,
    _g4_s58 = (292u + sizeof(_g4_t_v154)) > _g4_s57 ? (292u + sizeof(_g4_t_v154)) : _g4_s57,
    _g4_s59 = (296u + sizeof(_g4_t_v155)) > _g4_s58 ? (296u + sizeof(_g4_t_v155)) : _g4_s58,
    _g4_s60 = (304u + sizeof(_g4_t_v156)) > _g4_s59 ? (304u + sizeof(_g4_t_v156)) : _g4_s59,
    _g4_s61 = (316u + sizeof(_g4_t_v157)) > _g4_s60 ? (316u + sizeof(_g4_t_v157)) : _g4_s60,
    _g4_s62 = (320u + sizeof(_g4_t_v158)) > _g4_s61 ? (320u + sizeof(_g4_t_v158)) : _g4_s61,
    _g4_s63 = (324u + sizeof(_g4_t_v159)) > _g4_s62 ? (324u + sizeof(_g4_t_v159)) : _g4_s62,
    _g4_s64 = (344u + sizeof(_g4_t_v160)) > _g4_s63 ? (344u + sizeof(_g4_t_v160)) : _g4_s63,
    _g4_s65 = (348u + sizeof(_g4_t_v161)) > _g4_s64 ? (348u + sizeof(_g4_t_v161)) : _g4_s64,
    _g4_s66 = (352u + sizeof(_g4_t_v162)) > _g4_s65 ? (352u + sizeof(_g4_t_v162)) : _g4_s65,
    _g4_s67 = (356u + sizeof(_g4_t_v163)) > _g4_s66 ? (356u + sizeof(_g4_t_v163)) : _g4_s66,
    _g4_s68 = (360u + sizeof(_g4_t_v164)) > _g4_s67 ? (360u + sizeof(_g4_t_v164)) : _g4_s67,
    _g4_s69 = (364u + sizeof(_g4_t_v165)) > _g4_s68 ? (364u + sizeof(_g4_t_v165)) : _g4_s68,
    _g4_s70 = (368u + sizeof(_g4_t_v166)) > _g4_s69 ? (368u + sizeof(_g4_t_v166)) : _g4_s69,
    _g4_s71 = (372u + sizeof(_g4_t_v167)) > _g4_s70 ? (372u + sizeof(_g4_t_v167)) : _g4_s70,
    _g4_s72 = (376u + sizeof(_g4_t_v168)) > _g4_s71 ? (376u + sizeof(_g4_t_v168)) : _g4_s71,
    _g4_s73 = (396u + sizeof(_g4_t_v169)) > _g4_s72 ? (396u + sizeof(_g4_t_v169)) : _g4_s72,
    _g4_s74 = (400u + sizeof(_g4_t_v170)) > _g4_s73 ? (400u + sizeof(_g4_t_v170)) : _g4_s73,
    _g4_s75 = (404u + sizeof(_g4_t_v171)) > _g4_s74 ? (404u + sizeof(_g4_t_v171)) : _g4_s74,
    _g4_s76 = (408u + sizeof(_g4_t_v172)) > _g4_s75 ? (408u + sizeof(_g4_t_v172)) : _g4_s75,
    _g4_s77 = (412u + sizeof(_g4_t_v173)) > _g4_s76 ? (412u + sizeof(_g4_t_v173)) : _g4_s76,
    _g4_s78 = (416u + sizeof(_g4_t_v174)) > _g4_s77 ? (416u + sizeof(_g4_t_v174)) : _g4_s77,
    _g4_s79 = (420u + sizeof(_g4_t_v175)) > _g4_s78 ? (420u + sizeof(_g4_t_v175)) : _g4_s78,
    _g4_s80 = (424u + sizeof(_g4_t_v176)) > _g4_s79 ? (424u + sizeof(_g4_t_v176)) : _g4_s79,
    _g4_s81 = (428u + sizeof(_g4_t_v177)) > _g4_s80 ? (428u + sizeof(_g4_t_v177)) : _g4_s80
  };
  alignas(16) uint8_t _g4_sf[_g4_s81];
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 12u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 20u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 20u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 20u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 20u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 20u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 24u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 24u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 24u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 24u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 24u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 32u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 32u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 36u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 40u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 108u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 112u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 140u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 144u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 148u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 152u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 156u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 160u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 164u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 168u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 172u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 176u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 180u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 184u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 188u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 192u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 196u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 200u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 204u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 208u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 212u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 216u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 220u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 224u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 228u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 232u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 236u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 240u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 248u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 252u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 256u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 260u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 264u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 268u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 272u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 276u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 280u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 284u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 288u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 292u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 296u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 304u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 316u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 320u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 324u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 344u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 348u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 352u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 356u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 360u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 364u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 368u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 372u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 376u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 396u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 400u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 404u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 408u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 412u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 416u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 420u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 424u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 428u);

  g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
    (int)(uintptr_t)(a2 + 25),
    a2[27]);
  v144 = 0;
  v145 = nullptr;
  v148 = 0;
  a2[28] = (void **)(a2 + 26);
  a2[29] = (void **)(a2 + 26);
  a2[27] = nullptr;
  a2[30] = nullptr;
  v152 = &v150;
  v153 = &v150;
  v146 = &v144;
  v147 = &v144;
  v150 = 0;
  v151 = nullptr;
  v154 = 0;
  sociallib::SNSRequestState::getParamListSize((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getParamType((sociallib::SNSRequestState::Self *)a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v141, (int)(uintptr_t)(a2));
  v2 = v142;
  v3 = (uint32_t *)(v141);
  if ( (unsigned int)((char *)v142 - (char *)((uint8_t *)v141)) >> 2 != 0 )
  {
    v112 = 0;
    while ( 1 )
    {
      v110 = 4 * v112;
      v113 = &v3[v112];
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v117), "id", (int)(uintptr_t)(&v115));
      v4 = v151;
      if ( v151 == nullptr )
        break;
      s2 = (void *)v117;
      v104 = &v150;
      v5 = *(uint32_t *)(v117 - 12);
      do
      {
        while ( 1 )
        {
          v6 = *(uint32_t *)(*((uint32_t *)v4 + 4) - 12);
          n = v6;
          if ( v5 <= v6 )
            n = v5;
          v8 = v6 - v5;
          v9 = memcmp(*((const void **)v4 + 4), s2, n);
          if ( v9 == 0 )
            v9 = v8;
          if ( v9 < 0 )
            break;
          v104 = (int *)v4;
          v4 = *((void **)v4 + 2);
          if ( v4 == nullptr )
            goto LABEL_12;
        }
        v4 = *((void **)v4 + 3);
      }
      while ( v4 != nullptr );
LABEL_12:
      if ( v104 == &v150 )
        goto LABEL_151;
      v10 = *(uint32_t *)(v104[4] - 12);
      v11 = v10;
      if ( v5 <= v10 )
        v11 = v5;
      v12 = v5 - v10;
      v13 = memcmp(s2, (const void *)v104[4], v11);
      if ( v13 == 0 )
        v13 = v12;
      if ( v13 < 0 )
        goto LABEL_151;
LABEL_18:
      g4_std::string::assign_str(v104 + 5, v113);
      v14 = (void *)(v117 - 12);
      if ( (uint32_t *)(v117 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v117 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      g4_std::string::construct_copy(&v119, (char *)v141 + v110);
      g4_std::string::append((int)(uintptr_t)(&v119), "_first_name", 0xBu);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v118), "name", (int)(uintptr_t)(&v115) + 1);
      v15 = v151;
      if ( v151 == nullptr )
      {
        v105 = &v150;
LABEL_157:
        v127 = &dword_213B814;
        g4_std::string::construct_copy(&v133, &v118);
        g4_std::string::construct_copy(&v134, &v127);
        g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
          v114,
          &v149,
          (int)(uintptr_t)(v105),
          (const void **)&v133);
        v105 = (int *)v114[0];
        v94 = (void *)(v134 - 12);
        if ( (uint32_t *)(v134 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v134 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v94);
        }
        v95 = v133 - 3;
        if ( v133 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v133 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy((void *)v95);
        v96 = v127 - 3;
        if ( v127 - 3 != dword_213B808 && __sync_fetch_and_add(v127 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v96);
        goto LABEL_34;
      }
      s1 = (void *)v118;
      v105 = &v150;
      v16 = *(uint32_t *)(v118 - 12);
      do
      {
        while ( 1 )
        {
          v17 = *(uint32_t *)(*((uint32_t *)v15 + 4) - 12);
          v18 = v17;
          if ( v16 <= v17 )
            v18 = v16;
          v19 = v17 - v16;
          v20 = memcmp(*((const void **)v15 + 4), s1, v18);
          if ( v20 == 0 )
            v20 = v19;
          if ( v20 < 0 )
            break;
          v105 = (int *)v15;
          v15 = *((void **)v15 + 2);
          if ( v15 == nullptr )
            goto LABEL_28;
        }
        v15 = *((void **)v15 + 3);
      }
      while ( v15 != nullptr );
LABEL_28:
      if ( v105 == &v150 )
        goto LABEL_157;
      v21 = *(uint32_t *)(v105[4] - 12);
      v22 = v21;
      if ( v16 <= v21 )
        v22 = v16;
      v23 = v16 - v21;
      v24 = memcmp(s1, (const void *)v105[4], v22);
      if ( v24 == 0 )
        v24 = v23;
      if ( v24 < 0 )
        goto LABEL_157;
LABEL_34:
      g4_std::string::assign_str(v105 + 5, &v119);
      v25 = (void *)(v118 - 12);
      if ( (uint32_t *)(v118 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v118 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v25);
      }
      v26 = (void *)(v119 - 12);
      if ( (uint32_t *)(v119 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v119 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v26);
      }
      g4_std::string::construct_copy(&v121, (char *)v141 + v110);
      g4_std::string::append((int)(uintptr_t)(&v121), "_birthday", 9u);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v120), "birthday", (int)(uintptr_t)(&v115) + 2);
      v27 = v151;
      if ( v151 == nullptr )
      {
        v106 = &v150;
LABEL_145:
        v128 = &dword_213B814;
        g4_std::string::construct_copy(&v135, &v120);
        g4_std::string::construct_copy(&v136, &v128);
        g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
          v114,
          &v149,
          (int)(uintptr_t)(v106),
          (const void **)&v135);
        v106 = (int *)v114[0];
        v88 = (void *)(v136 - 12);
        if ( (uint32_t *)(v136 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v136 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v88);
        }
        v89 = v135 - 3;
        if ( v135 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v135 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy((void *)v89);
        v90 = v128 - 3;
        if ( v128 - 3 != dword_213B808 && __sync_fetch_and_add(v128 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v90);
        goto LABEL_51;
      }
      v100 = (void *)v120;
      v106 = &v150;
      v28 = *(uint32_t *)(v120 - 12);
      do
      {
        while ( 1 )
        {
          v29 = v28;
          v30 = *(uint32_t *)(*((uint32_t *)v27 + 4) - 12);
          if ( v30 <= v28 )
            v29 = *(uint32_t *)(*((uint32_t *)v27 + 4) - 12);
          v31 = v30 - v28;
          v32 = memcmp(*((const void **)v27 + 4), v100, v29);
          if ( v32 == 0 )
            v32 = v31;
          if ( v32 < 0 )
            break;
          v106 = (int *)v27;
          v27 = *((void **)v27 + 2);
          if ( v27 == nullptr )
            goto LABEL_45;
        }
        v27 = *((void **)v27 + 3);
      }
      while ( v27 != nullptr );
LABEL_45:
      if ( v106 == &v150 )
        goto LABEL_145;
      v33 = v28;
      v34 = *(uint32_t *)(v106[4] - 12);
      if ( v34 <= v28 )
        v33 = *(uint32_t *)(v106[4] - 12);
      v35 = v28 - v34;
      v36 = memcmp(v100, (const void *)v106[4], v33);
      if ( v36 == 0 )
        v36 = v35;
      if ( v36 < 0 )
        goto LABEL_145;
LABEL_51:
      g4_std::string::assign_str(v106 + 5, &v121);
      v37 = (void *)(v120 - 12);
      if ( (uint32_t *)(v120 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v120 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v37);
      }
      v38 = (void *)(v121 - 12);
      if ( (uint32_t *)(v121 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v38);
      }
      g4_std::string::construct_copy(&v123, (char *)v141 + v110);
      g4_std::string::append((int)(uintptr_t)(&v123), "_hometown", 9u);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v122), "hometown", (int)(uintptr_t)(&v115) + 3);
      v39 = v151;
      if ( v151 == nullptr )
      {
        v107 = &v150;
LABEL_139:
        v129 = &dword_213B814;
        g4_std::string::construct_copy(&v137, &v122);
        g4_std::string::construct_copy(&v138, &v129);
        g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
          v114,
          &v149,
          (int)(uintptr_t)(v107),
          (const void **)&v137);
        v107 = (int *)v114[0];
        v85 = (void *)(v138 - 12);
        if ( (uint32_t *)(v138 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v138 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v85);
        }
        v86 = v137 - 3;
        if ( v137 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v137 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy((void *)v86);
        v87 = v129 - 3;
        if ( v129 - 3 != dword_213B808 && __sync_fetch_and_add(v129 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v87);
        goto LABEL_68;
      }
      v101 = (void *)v122;
      v107 = &v150;
      v40 = *(uint32_t *)(v122 - 12);
      do
      {
        while ( 1 )
        {
          v41 = v40;
          v42 = *(uint32_t *)(*((uint32_t *)v39 + 4) - 12);
          if ( v42 <= v40 )
            v41 = *(uint32_t *)(*((uint32_t *)v39 + 4) - 12);
          v43 = v42 - v40;
          v44 = memcmp(*((const void **)v39 + 4), v101, v41);
          if ( v44 == 0 )
            v44 = v43;
          if ( v44 < 0 )
            break;
          v107 = (int *)v39;
          v39 = *((void **)v39 + 2);
          if ( v39 == nullptr )
            goto LABEL_62;
        }
        v39 = *((void **)v39 + 3);
      }
      while ( v39 != nullptr );
LABEL_62:
      if ( v107 == &v150 )
        goto LABEL_139;
      v45 = v40;
      v46 = *(uint32_t *)(v107[4] - 12);
      if ( v46 <= v40 )
        v45 = *(uint32_t *)(v107[4] - 12);
      v47 = v40 - v46;
      v48 = memcmp(v101, (const void *)v107[4], v45);
      if ( v48 == 0 )
        v48 = v47;
      if ( v48 < 0 )
        goto LABEL_139;
LABEL_68:
      g4_std::string::assign_str(v107 + 5, &v123);
      v49 = (void *)(v122 - 12);
      if ( (uint32_t *)(v122 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v122 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v49);
      }
      v50 = (void *)(v123 - 12);
      if ( (uint32_t *)(v123 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v123 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v50);
      }
      g4_std::string::construct_copy(&v125, (char *)v141 + v110);
      g4_std::string::append((int)(uintptr_t)(&v125), "_picture", 8u);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v124), "picture", (int)(uintptr_t)(&v116));
      v51 = v151;
      if ( v151 != nullptr )
      {
        v102 = (void *)v124;
        v108 = &v150;
        v52 = *(uint32_t *)(v124 - 12);
        do
        {
          while ( 1 )
          {
            v53 = *(uint32_t *)(*((uint32_t *)v51 + 4) - 12);
            v54 = v53;
            if ( v52 <= v53 )
              v54 = v52;
            v55 = v53 - v52;
            v56 = memcmp(*((const void **)v51 + 4), v102, v54);
            if ( v56 == 0 )
              v56 = v55;
            if ( v56 < 0 )
              break;
            v108 = (int *)v51;
            v51 = *((void **)v51 + 2);
            if ( v51 == nullptr )
              goto LABEL_79;
          }
          v51 = *((void **)v51 + 3);
        }
        while ( v51 != nullptr );
LABEL_79:
        if ( v108 != &v150 )
        {
          v57 = *(uint32_t *)(v108[4] - 12);
          v58 = v57;
          if ( v52 <= v57 )
            v58 = v52;
          v59 = v52 - v57;
          v60 = memcmp(v102, (const void *)v108[4], v58);
          if ( v60 == 0 )
            v60 = v59;
          if ( v60 >= 0 )
            goto LABEL_85;
        }
      }
      else
      {
        v108 = &v150;
      }
      v130 = &dword_213B814;
      g4_std::string::construct_copy(&v139, &v124);
      g4_std::string::construct_copy(&v140, &v130);
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
        v114,
        &v149,
        (int)(uintptr_t)(v108),
        (const void **)&v139);
      v108 = (int *)v114[0];
      v82 = (void *)(v140 - 12);
      if ( (uint32_t *)(v140 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v140 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v82);
      }
      v83 = v139 - 3;
      if ( v139 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v139 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)v83);
      v84 = v130 - 3;
      if ( v130 - 3 != dword_213B808 && __sync_fetch_and_add(v130 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v84);
LABEL_85:
      g4_std::string::assign_str(v108 + 5, &v125);
      v61 = (void *)(v124 - 12);
      if ( (uint32_t *)(v124 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v124 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v61);
      }
      v62 = (void *)(v125 - 12);
      if ( (uint32_t *)(v125 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v125 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v62);
      }
      sociallib::SNSUserData::Construct(
        (sociallib::SNSUserData::Self *)v155,
        (const std::map<std::string,std::string> *)&v149);
      g4_std::string::construct_copy(&v160, (char *)v141 + v110);
      v164 = &v162;
      v165 = &v162;
      v162 = 0;
      v163 = nullptr;
      v166 = 0;
      if ( v156 != nullptr )
      {
        v63 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                (int)(uintptr_t)(&v161),
                v156,
                (int)(uintptr_t)(&v162));
        v163 = v63;
        for ( i = (int *)(v63); i[2] != 0; i = (int *)i[2] )
          ;
        v164 = i;
        while ( v63[3] != 0 )
          v63 = (uint32_t *)v63[3];
        v165 = (int *)(v63);
        v166 = v157;
      }
      v167 = v158;
      sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
        (sociallib::CDynamicMemoryStream::Self *)v168,
        (const sociallib::CDynamicMemoryStream::Self *)v159);
      g4_std::string::construct_copy(&v169, &v160);
      v171 = 0;
      v172 = nullptr;
      v175 = 0;
      v173 = &v171;
      v174 = &v171;
      if ( v163 != nullptr )
      {
        v65 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                (int)(uintptr_t)(&v170),
                v163,
                (int)(uintptr_t)(&v171));
        v172 = v65;
        for ( j = (int *)(v65); j[2] != 0; j = (int *)j[2] )
          ;
        v173 = j;
        while ( v65[3] != 0 )
          v65 = (uint32_t *)v65[3];
        v174 = (int *)(v65);
        v175 = v166;
      }
      v176 = v167;
      sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
        (sociallib::CDynamicMemoryStream::Self *)v177,
        (const sociallib::CDynamicMemoryStream::Self *)v168);
      if ( a2[27] != nullptr )
      {
        v109 = v169;
        v67 = *((uint32_t *)v169 - 3);
        for ( k = a2[27]; ; k = v69 )
        {
          v70 = (uint32_t *)(k[4]);
          v71 = v67;
          v72 = *(v70 - 3);
          v97 = k;
          if ( v72 <= v67 )
            v71 = *(v70 - 3);
          v111 = v71;
          v73 = memcmp(v109, k[4], v71);
          if ( v73 == 0 )
            v73 = v67 - v72;
          if ( v73 < 0 )
          {
            v69 = (void **)v97[2];
            v103 = 1;
            if ( v69 == nullptr )
              goto LABEL_113;
          }
          else
          {
            v69 = (void **)v97[3];
            v103 = 0;
            if ( v69 == nullptr )
            {
LABEL_113:
              v74 = v70;
              v75 = v111;
              v76 = v97;
              if ( v103 == 0 )
                goto LABEL_114;
              goto LABEL_128;
            }
          }
        }
      }
      v76 = (void **)(a2 + 26);
LABEL_128:
      if ( a2[28] == v76 )
        goto LABEL_117;
      v74 = *(uint32_t **)(sub_19048F0(v76) + 16);
      v109 = v169;
      v72 = *(v74 - 3);
      v67 = *((uint32_t *)v169 - 3);
      v75 = v67;
      if ( v72 <= v67 )
        v75 = *(v74 - 3);
LABEL_114:
      v77 = memcmp(v74, v109, v75);
      v78 = v72 - v67;
      if ( v77 == 0 )
        v77 = v78;
      if ( v77 < 0 )
LABEL_117:
        g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
          v114,
          (int)(uintptr_t)(a2 + 25),
          0,
          (int)(uintptr_t)(v76),
          (int)(uintptr_t)(&v169));
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v177);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(&v170),
        v172);
      v79 = v169 - 12;
      if ( v169 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v169 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v79);
      }
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v168);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(&v161),
        v163);
      v80 = (void *)(v160 - 12);
      if ( (uint32_t *)(v160 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v160 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v80);
      }
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v159);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(v155),
        v156);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(&v149),
        v151);
      v2 = v142;
      v3 = (uint32_t *)(v141);
      ++v112;
      v152 = &v150;
      v151 = nullptr;
      v153 = &v150;
      v154 = 0;
      if ( v112 >= ((char *)v142 - (char *)((uint8_t *)v141)) >> 2 )
        goto LABEL_121;
    }
    v104 = &v150;
LABEL_151:
    v126 = &dword_213B814;
    g4_std::string::construct_copy(&v131, &v117);
    g4_std::string::construct_copy(&v132, &v126);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v114,
      &v149,
      (int)(uintptr_t)(v104),
      (const void **)&v131);
    v104 = (int *)v114[0];
    v91 = (void *)(v132 - 12);
    if ( (uint32_t *)(v132 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v132 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v91);
    }
    v92 = v131 - 3;
    if ( v131 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v131 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v92);
    v93 = v126 - 3;
    if ( v126 - 3 != dword_213B808 && __sync_fetch_and_add(v126 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v93);
    goto LABEL_18;
  }
LABEL_121:
  for ( a2[1] = (void **)(&dword_0 + 2); v2 != v3; ++v3 )
  {
    v81 = (uint32_t *)(*v3 - 12);
    if ( v81 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v81);
  }
  if ( v141 != nullptr )
    opDelete(v141);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(&v149),
    v151);
  g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
    (int)(uintptr_t)(&v143),
    (void **)v145);
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::Destroy  (binary VA: 0x142e860)
// Original: sociallib::LdapWrapper::~LdapWrapper
// ----------------------------------------------------------------------------
void sociallib::LdapWrapper::Destroy(sociallib::LdapWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095948);
  sociallib::SNSWrapperBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getAvatar  (binary VA: 0x142e890)
// Original: sociallib::LdapWrapper::getAvatar
// ----------------------------------------------------------------------------
int sociallib::LdapWrapper::getAvatar(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, "TesterMan.png", 0xDu));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::Destroy_ea142e8e0  (binary VA: 0x142e8e0)
// Original: sociallib::LdapWrapper::~LdapWrapper
// ----------------------------------------------------------------------------
void sociallib::LdapWrapper::Destroy_ea142e8e0(sociallib::LdapWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095948);
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::LdapWrapper::getAppId  (binary VA: 0x142e930)
// Original: sociallib::LdapWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::LdapWrapper::getAppId(sociallib::LdapWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, "TestAppID", 9u));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}


