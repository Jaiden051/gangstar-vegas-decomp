#include "Core/Utils/DecompTypes.h"
#include "iap_Command.h"

// ----------------------------------------------------------------------------
// Function: iap::Command::Destroy  (binary VA: 0x1532710)
// Original: iap::Command::~Command
// ----------------------------------------------------------------------------
void iap::Command::Destroy(iap::Command::Self *self)
{
  int v1;
  int v2;
  unsigned int *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  unsigned int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;

  v1 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  iap::Event::Destroy((iap::EventData::Self **)self + 12);
  v2 = *((uint32_t *)self + 9);
  v22 = *((unsigned int **)self + 10);
  v20 = v2;
  if ( v22 != (unsigned int *)v2 )
  {
    v3 = *((unsigned int **)self + 9);
    v32 = v2 + 84;
    v31 = v2 + 80;
    v30 = v2 + 64;
    v29 = v2 + 60;
    v28 = v2 + 48;
    v27 = v2 + 44;
    v26 = v2 + 32;
    v25 = v2 + 28;
    v24 = v2 + 16;
    v23 = v2 + 12;
    do
    {
      glwebtools::SecureString::Set((unsigned int (*)[2])(v3 + 9), nullptr, 0);
      v4 = (char *)v3 - v20;
      v5 = *(unsigned int *)((char *)v3 + v32 - v20);
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      v6 = *(uint32_t *)&v4[v31];
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v6 - 12));
      }
      glwebtools::SecureString::Set((unsigned int (*)[2])(v3 + 13), nullptr, 0);
      v7 = *(uint32_t *)&v4[v30];
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
      }
      v8 = *(uint32_t *)&v4[v29];
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
      }
      glwebtools::SecureString::Set((unsigned int (*)[2])(v3 + 9), nullptr, 0);
      v9 = *(uint32_t *)&v4[v28];
      if ( (uint32_t *)(v9 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v9 - 12));
      }
      v10 = *(uint32_t *)&v4[v27];
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
      }
      glwebtools::SecureString::Set((unsigned int (*)[2])(v3 + 5), nullptr, 0);
      v11 = *(uint32_t *)&v4[v26];
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
      }
      v12 = *(uint32_t *)&v4[v25];
      if ( (uint32_t *)(v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
      }
      glwebtools::SecureString::Set((unsigned int (*)[2])(v3 + 1), nullptr, 0);
      v13 = *(uint32_t *)&v4[v24];
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v13 - 12));
      }
      v14 = *(uint32_t *)&v4[v23];
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v14 - 12));
      }
      v3 += 22;
    }
    while ( v22 != v3 );
    v20 = *((uint32_t *)self + 9);
  }
  if ( v20 != 0 )
    sub_4EBEE0(v20);
  v15 = *((uint32_t *)self + 2);
  v21 = *((uint32_t **)self + 3);
  if ( v21 != (uint32_t *)v15 )
  {
    v16 = *((uint32_t **)self + 2);
    do
    {
      v17 = v16[1];
      if ( (uint32_t *)(v17 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v17 - 12));
      }
      v18 = (uint32_t *)(*v16 - 12);
      if ( v18 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v16 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v18);
      v16 += 2;
    }
    while ( v21 != v16 );
    v15 = *((uint32_t *)self + 2);
  }
  if ( v15 != 0 )
    sub_4EBEE0(v15);
  v19 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v19 - 12));
  }
}



// ============================================================================
// Address:   0x153a760 (size: 122 bytes)
// Symbol:    _ZN3iap7CommandC2Ev
// Demangled: iap::Command::Command(void)
// ============================================================================
// Alternative name is '_ZN3iap7CommandC1Ev'
struct iap::Command::Self *iap::Command::Construct(iap::Command::Self *self)
{
  *(uint32_t *)self = 0;
  iap::Rule::Construct((iap::Command::Self *)((char *)self + 4));
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  iap::Event::Construct((iap::Command::Self *)((char *)self + 48));
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (struct iap::Command::Self *)&dword_213B814;
}
// ----------------------------------------------------------------------------
// Function: iap::Command::Construct  (binary VA: 0x153a7e0)
// Original: iap::Command::Command
// ----------------------------------------------------------------------------
iap::Command::Self * iap::Command::Construct(iap::Command::Self *self, iap::ServiceRegistry::Self *a2, unsigned int a3)
{
  *(uint32_t *)self = a3;
  iap::Rule::Construct((iap::Command::Self *)((char *)self + 4));
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  iap::Event::Construct((iap::Command::Self *)((char *)self + 48));
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (iap::Command::Self *)&dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::PushEvent  (binary VA: 0x153a870)
// Original: iap::Command::PushEvent
// ----------------------------------------------------------------------------
int iap::Command::PushEvent(iap::Command::Self *self, char *s, char *a3)
{
  iap::EventRequestResultData::Self *v3;
  size_t v4;
  size_t v5;
  iap::EventData::Self *v7[4];

  v3 = iap::EventData::Construct((iap::EventData::Self *)"command_result");
  *((uint32_t *)v3 + 1) = *(uint32_t *)self;
  g4_std::string::assign_str((char *)v3 + 8, (char *)self + 52);
  v4 = strlen(s);
  g4_std_compat::string_assign((int)(uintptr_t)(v3) + 16, s, v4);
  v5 = strlen(a3);
  g4_std_compat::string_assign((int)(uintptr_t)(v3) + 12, a3, v5);
  iap::Event::Construct((iap::Event::Self *)v7, v3);
  iap::Event::Swap((iap::Command::Self *)((char *)self + 48), (iap::Event::Self *)v7);
  iap::Event::Destroy(v7);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::PushError  (binary VA: 0x153a940)
// Original: iap::Command::PushError
// ----------------------------------------------------------------------------
int iap::Command::PushError(iap::Command::Self *self, char *a2, int a3, char *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35)
{
  char *v35;
  void *v36;
  iap::Rule::Self *v37;
  glwebtools::Json::Value::Self *Root;
  void *v39;
  size_t v41;
  void *v42;
  void *v43;
  void *v44;
  void *v45;
  void *v46;
  size_t v47;
  size_t v48;
  void *v49;
  void *v50;
  void *v51;
  void *v52;
  void *v53;
  int v74;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_ServiceName;
  typedef char *_g4_t_Name;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59[4];
  typedef uint32_t _g4_t_v60[4];
  typedef uint32_t _g4_t_v61[4];
  typedef uint32_t _g4_t_v62[4];
  typedef uint32_t _g4_t_v63[4];
  typedef uint32_t _g4_t_v64[4];
  typedef uint32_t _g4_t_v65[4];
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t _g4_t_v68[2];
  typedef uint32_t _g4_t_v69[5];
  typedef uint32_t _g4_t_v70[4];
  typedef uint8_t _g4_t_v71[20];
  typedef uint32_t _g4_t_v72[2];
  typedef uint32_t _g4_t_v73[11];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v54)) > _g4_s0 ? (4u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_ServiceName)) > _g4_s2 ? (16u + sizeof(_g4_t_ServiceName)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_Name)) > _g4_s3 ? (20u + sizeof(_g4_t_Name)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v58)) > _g4_s4 ? (24u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v59)) > _g4_s5 ? (28u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v60)) > _g4_s6 ? (44u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v61)) > _g4_s7 ? (60u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v62)) > _g4_s8 ? (76u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v63)) > _g4_s9 ? (92u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v64)) > _g4_s10 ? (108u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v65)) > _g4_s11 ? (124u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v66)) > _g4_s12 ? (140u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (144u + sizeof(_g4_t_v67)) > _g4_s13 ? (144u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (148u + sizeof(_g4_t_v68)) > _g4_s14 ? (148u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v69)) > _g4_s15 ? (156u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (176u + sizeof(_g4_t_v70)) > _g4_s16 ? (176u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (192u + sizeof(_g4_t_v71)) > _g4_s17 ? (192u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (212u + sizeof(_g4_t_v72)) > _g4_s18 ? (212u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (220u + sizeof(_g4_t_v73)) > _g4_s19 ? (220u + sizeof(_g4_t_v73)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_ServiceName &ServiceName = *reinterpret_cast<_g4_t_ServiceName *>(_g4_sf + 16u);
  _g4_t_Name &Name = *reinterpret_cast<_g4_t_Name *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 124u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 156u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 176u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 192u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 212u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 220u);

  v35 = a4;
  iap::Result::Result((iap::Result::Self *)v72);
  v72[1] = a3;
  if ( a4 == nullptr )
    v35 = (char *)&unk_1B15112;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), v35, (int)(uintptr_t)(v59) + 3);
  g4_std::string::assign_str(v73, &v66);
  BYTE2(v73[1]) = 1;
  v36 = (void *)(v66 - 12);
  if ( (uint32_t *)(v66 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v36);
  }
  v37 = (iap::Rule::Self *)((iap::Command::Self *)((char *)self + 4));
  if ( (uint8_t)iap::Rule::IsValid((iap::Command::Self *)((char *)self + 4)) != 0 )
  {
    Name = "<NULL>";
    if ( iap::Rule::GetName(v37) != 0 )
      Name = (char *)iap::Rule::GetName(v37);
    g4_std::string::construct_copy(v60, v73);
    g4_std::string::append((int)(uintptr_t)(v60), " Rule[", 6u);
    g4_std::string::construct_copy(v61, v60);
    v41 = strlen(Name);
    g4_std::string::append((int)(uintptr_t)(v61), Name, v41);
    g4_std::string::construct_copy(&v67, v61);
    g4_std::string::append((int)(uintptr_t)(&v67), "]", 1u);
    g4_std::string::assign_str(v73, &v67);
    BYTE2(v73[1]) = 1;
    v42 = (void *)(v67 - 12);
    if ( (uint32_t *)(v67 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v42);
    }
    v43 = (void *)(v61[0] - 12);
    if ( (uint32_t *)(v61[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v61[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v43);
    }
    v44 = (void *)(v60[0] - 12);
    if ( (uint32_t *)(v60[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v60[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v44);
    }
    iap::Rule::Action::Construct((iap::Rule::Action::Self *)v69);
    iap::Rule::GetAction(v37, *((uint32_t *)self + 5), (iap::Rule::Action::Self *)v69);
    if ( iap::Rule::Action::IsValid((iap::Rule::Action::Self *)v69) )
    {
      Name = "<NULL>";
      if ( iap::Rule::Action::GetRequestName((iap::Rule::Action::Self *)v69) != 0 )
        Name = (char *)iap::Rule::Action::GetRequestName((iap::Rule::Action::Self *)v69);
      ServiceName = "<NULL>";
      if ( iap::Rule::Action::GetServiceName((iap::Rule::Action::Self *)v69) != 0 )
        ServiceName = (char *)iap::Rule::Action::GetServiceName((iap::Rule::Action::Self *)v69);
      g4_std::string::construct_copy(v62, v73);
      g4_std::string::append((int)(uintptr_t)(v62), " Action{", 8u);
      g4_std::string::construct_copy(v63, v62);
      v47 = strlen(ServiceName);
      g4_std::string::append((int)(uintptr_t)(v63), ServiceName, v47);
      g4_std::string::construct_copy(v64, v63);
      g4_std::string::append((int)(uintptr_t)(v64), ", ", 2u);
      g4_std::string::construct_copy(v65, v64);
      v48 = strlen(Name);
      g4_std::string::append((int)(uintptr_t)(v65), Name, v48);
      g4_std::string::construct_copy(v68, v65);
      g4_std::string::append((int)(uintptr_t)(v68), "}", 1u);
      g4_std::string::assign_str(v73, v68);
      BYTE2(v73[1]) = 1;
      v49 = (void *)(v68[0] - 12);
      if ( (uint32_t *)(v68[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v49);
      }
      v50 = (void *)(v65[0] - 12);
      if ( (uint32_t *)(v65[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v50);
      }
      v51 = (void *)(v64[0] - 12);
      if ( (uint32_t *)(v64[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v51);
      }
      v52 = (void *)(v63[0] - 12);
      if ( (uint32_t *)(v63[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v52);
      }
      v53 = (void *)(v62[0] - 12);
      if ( (uint32_t *)(v62[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v53);
      }
    }
    v45 = (void *)(v69[1] - 12);
    if ( (uint32_t *)(v69[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v45);
    }
    v46 = (void *)(v69[0] - 12);
    if ( (uint32_t *)(v69[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v46);
    }
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v71);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(v70), nullptr);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v71);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v70);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v70);
  (*(void (**)(uint32_t *, uint8_t *, int, int, uint32_t *, char *, char *, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(v72[0] + 12))(
    v72,
    v71,
    v54,
    v55,
    v70,
    ServiceName,
    Name,
    v58,
    v59[0],
    v59[1],
    v59[2],
    v59[3],
    v60[0],
    v60[1],
    v60[2],
    v60[3],
    v61[0],
    v61[1],
    v61[2],
    v61[3],
    v62[0],
    v62[1],
    v62[2],
    v62[3],
    v63[0],
    v63[1],
    v63[2],
    v63[3],
    v64[0],
    v64[1],
    v64[2],
    v64[3],
    v65[0],
    v65[1],
    v65[2],
    v65[3],
    v66,
    v67,
    v68[0],
    v68[1],
    v69[0],
    v69[1],
    v69[2],
    v69[3],
    v69[4],
    v70[0],
    v70[1],
    v70[2],
    v70[3]);
  a35 = (int)(uintptr_t)(&dword_213B814);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v71, (int)(uintptr_t)(&a35));
  v74 = iap::Command::PushEvent(self, a2, (char *)a35);
  v39 = (void *)(a35 - 12);
  if ( (uint32_t *)(a35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a35 - 4), 0xFFFFFFFF) <= 0 )
  {
    v73[9] = (uint32_t)(uintptr_t)((char *)&a7 + 3);
    g4_std::string::Rep::M_destroy(v39);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v71);
  iap::Result::Destroy((iap::Result::Self *)v72);
  return v74;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::IsRunning  (binary VA: 0x153aff0)
// Original: iap::Command::IsRunning
// ----------------------------------------------------------------------------
bool iap::Command::IsRunning(iap::Command::Self *self)
{
  bool result;

  result = false;
  if ( *((uint32_t *)self + 7) != 0 )
    return *((uint32_t *)self + 8) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::IsValid  (binary VA: 0x153b280)
// Original: iap::Command::IsValid
// ----------------------------------------------------------------------------
bool iap::Command::IsValid(iap::Command::Self *self)
{
  bool result;

  result = false;
  if ( *((uint32_t *)self + 6) != 0 )
    return *(uint32_t *)self != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::ProcessEvent  (binary VA: 0x153b2a0)
// Original: iap::Command::ProcessEvent
// ----------------------------------------------------------------------------
int iap::Command::ProcessEvent(iap::Command::Self *self, const iap::Event::Self *a2)
{
  int Data;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  typedef uint32_t _g4_t_v8[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v5 = -2147483645;
  if ( iap::Command::IsValid(self) && iap::Command::IsRunning(self) )
  {
    v5 = -2147483646;
    if ( iap::Event::IsValid(a2) && strcmp((const char *)iap::Event::GetType(a2), "result") == 0 )
    {
      Data = iap::Event::GetData(a2);
      v3 = Data;
      if ( Data != 0 )
      {
        if ( *(uint32_t *)(Data + 8) == *(uint32_t *)self )
        {
          iap::Result::Result((iap::Result::Self *)v8);
          glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v7, v3 + 12);
          v5 = -2147483645;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v7) != 0 )
          {
            v5 = (*(int (**)(uint32_t *, uint8_t *))(v8[0] + 8))(v8, v7);
            if ( v5 >= 0 )
            {
              if ( v8[1] < 0
                || (v6 = *((uint32_t *)self + 5)) >= (unsigned int)iap::Rule::GetActionCount((iap::Command::Self *)((char *)self + 4)) )
              {
                v5 = iap::Command::PushEvent(self, *(char **)(v3 + 16), *(char **)(v3 + 12));
              }
              else
              {
                v5 = iap::Command::ExecuteAction(self, *(const char **)(v3 + 16));
              }
            }
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v7);
          iap::Result::Destroy((iap::Result::Self *)v8);
        }
      }
      else
      {
        return -2147483645;
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::Terminate  (binary VA: 0x153b420)
// Original: iap::Command::Terminate
// ----------------------------------------------------------------------------
int iap::Command::Terminate(iap::Command::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 7);
  if ( v1 != 0 && *((uint32_t *)self + 8) != 0 )
    G4_VCALL<void>(v1, 28, *((uint32_t *)self + 8));
  iap::Rule::Reset((iap::Rule::Self ***)self + 1);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  iap::Event::Reset((iap::EventData::Self **)self + 12);
  return (int)(uintptr_t)(g4_std::string::clear((char *)self + 52, 0, *(uint32_t *)(*((uint32_t *)self + 13) - 12), 0));
}

// ----------------------------------------------------------------------------
// Function: iap::Command::Cancel  (binary VA: 0x153b4b0)
// Original: iap::Command::Cancel
// ----------------------------------------------------------------------------
int iap::Command::Cancel(iap::Command::Self *self)
{
  int v1;

  v1 = -2147483645;
  if ( iap::Command::IsValid(self) && iap::Command::IsRunning(self) )
  {
    v1 = 0;
    (*(void (**)(uint32_t, uint32_t))(**((uint32_t **)self + 7) + 28))(*((uint32_t *)self + 7), *((uint32_t *)self + 8));
    iap::Command::Terminate(self);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::GetId  (binary VA: 0x153b520)
// Original: iap::Command::GetId
// ----------------------------------------------------------------------------
int iap::Command::GetId(iap::Command::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::HasEvent  (binary VA: 0x153b530)
// Original: iap::Command::HasEvent
// ----------------------------------------------------------------------------
bool iap::Command::HasEvent(iap::Command::Self *self)
{
  return iap::Event::IsValid((iap::Command::Self *)((char *)self + 48));
}

// ----------------------------------------------------------------------------
// Function: iap::Command::PopEvent  (binary VA: 0x153b560)
// Original: iap::Command::PopEvent
// ----------------------------------------------------------------------------
int iap::Command::PopEvent(iap::Command::Self *self, iap::Event::Self *a2)
{
  int v2;

  v2 = -2147483645;
  if ( iap::Command::IsValid(self) && iap::Command::IsRunning(self) && iap::Command::HasEvent(self) )
  {
    v2 = 0;
    iap::Event::Swap((iap::Command::Self *)((char *)self + 48), a2);
    iap::Command::Terminate(self);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::ExecuteAction  (binary VA: 0x153aff0)
// Original: iap::Command::ExecuteAction
// ----------------------------------------------------------------------------
namespace iap { namespace Command { int ExecuteAction(iap::Command::Self *self, char *a2); } }
int iap::Command::ExecuteAction(iap::Command::Self *self, char *a2)
{
  char *ServiceName;
  int Service;
  int v4;
  int RequestName;
  int v6;
  int v7;
  uint32_t v18 = 0;
  int dummy_alloc = 0;
  alignas(8) uint32_t v19[7] = {};

  iap::Rule::Action::Construct((iap::Rule::Action::Self *)v19);
  if ( iap::Rule::GetAction(
         (iap::Rule::Self *)((char *)self + 4),
         *((unsigned int *)self + 5),
         (iap::Rule::Action::Self *)v19) < 0 )
  {
    iap::Command::PushError(
      self, a2, -2147483646, (char *)"[command] Invalid action requested for this rule.",
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    v7 = -2147483646;
  }
  else
  {
    ServiceName = (char *)(uintptr_t)iap::Rule::Action::GetServiceName((iap::Rule::Action::Self *)v19);
    sub_193A910((int)(uintptr_t)&v18, ServiceName, (int)(uintptr_t)&dummy_alloc);
    Service = iap::ServiceRegistry::GetService(*((int *)self + 6), (void **)&v18, (uint32_t *)self + 7);
    sub_1938B70(&v18);
    if ( Service < 0 )
    {
      iap::Command::PushError(
        self, a2, Service, (char *)"[command] Invalid service requested for this action.",
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      v7 = Service;
    }
    else
    {
      v4 = *((uint32_t *)self + 7);
      if ( v4 != 0 )
      {
        int cmdId = *(int *)self;
        int (*runReq)(uint32_t, int, char *, int, char *) =
          *(int (**)(uint32_t, int, char *, int, char *))(*(uint32_t *)(uintptr_t)v4 + 24);
        RequestName = iap::Rule::Action::GetRequestName((iap::Rule::Action::Self *)v19);
        v6 = runReq(*((uint32_t *)self + 7), RequestName, a2, cmdId, (char *)self + 32);
        if ( v6 < 0 )
        {
          iap::Command::PushError(
            self, a2, v6, (char *)"[command] Failed to run request for this action.",
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
          v7 = v6;
        }
        else
        {
          ++*((uint32_t *)self + 5);
          v7 = 0;
        }
      }
      else
      {
        iap::Command::PushError(
          self, a2, Service, (char *)"[command] Invalid service registered.",
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        v7 = -2147483646;
      }
    }
  }
  sub_1938B70(&v19[1]);
  sub_1938B70(&v19[0]);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: iap::Command::Execute  (binary VA: 0x153b5e0)
// Original: iap::Command::Execute
// ----------------------------------------------------------------------------
int iap::Command::Execute(iap::Command::Self *self, const iap::Rule::Self *a2, char *a3, char *s)
{
  int v4;
  size_t v5;

  v4 = -2147483645;
  if ( iap::Command::IsValid(self) && !iap::Command::IsRunning(self) )
  {
    LOWORD(v4) = 2;
    if ( (uint8_t)iap::Rule::IsValid(a2) != 0 && s != nullptr )
    {
      v5 = strlen(s);
      g4_std_compat::string_assign((int)(uintptr_t)(self) + 52, s, v5);
      g4_std::string::assign_str((char *)self + 4, a2);
      g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::opAssign(
        (std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *)((char *)self + 8),
        (const std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *)((const char *)a2 + 4));
      return iap::Command::ExecuteAction(self, a3);
    }
  }
  return v4;
}


