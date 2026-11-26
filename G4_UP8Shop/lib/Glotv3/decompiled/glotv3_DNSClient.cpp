#include "Core/Utils/DecompTypes.h"
#include "glotv3_DNSClient.h"

void g4_asio_resolver_basic_io_object_construct(void *self, void *io_svc);

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::HandleResolve  (binary VA: 0x1339a20)
// Original: glotv3::DNSClient::HandleResolve
// ----------------------------------------------------------------------------
int32_t glotv3::DNSClient::HandleResolve(glotv3::DNSClient::Self *self, const boost::system::error_code::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  uint8_t *i;
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t v13;
  void *v14;
  void *v15;
  void *v16;
  int32_t result;
  void *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  typedef int _g4_t_v24[4];
  typedef int _g4_t_v25[3];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[5];
  typedef uint32_t _g4_t_v30[10];
  typedef uint8_t _g4_t_v31[23];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v22)) > _g4_s3 ? (30u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v23)) > _g4_s4 ? (36u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v24)) > _g4_s5 ? (52u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v25)) > _g4_s6 ? (68u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v26)) > _g4_s7 ? (80u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v27)) > _g4_s8 ? (84u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v28)) > _g4_s9 ? (88u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v29)) > _g4_s10 ? (92u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v30)) > _g4_s11 ? (112u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (153u + sizeof(_g4_t_v31)) > _g4_s12 ? (153u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 30u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 153u);

  if ( *(uint32_t *)a2 == 0 )
    return __atomic_exchange_n((volatile int32_t *)self + 1, 3, __ATOMIC_SEQ_CST);
  __atomic_exchange_n((volatile int32_t *)self + 1, 2, __ATOMIC_SEQ_CST);
  v21 = *(uint32_t *)a2;
  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v2 == 4 );
  v5 = v2;
  if ( v2 != 0 )
  {
    v20 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v22) + 1);
    sub_19042E0(v30, &v28);
    g4_std::string::Destroy(&v28);
    v30[2] = v5;
    v30[3] = v20;
    v30[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v30[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v25[0] = (int)(uintptr_t)(&dword_213B814);
  v6 = __builtin_abs(v21);
  for ( i = v31; ; --i )
  {
    *(i - 1) = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( v6 == 0 )
      break;
  }
  v8 = i - 1;
  if ( v21 < 0 )
  {
    v8 = i - 2;
    *(i - 2) = 45;
  }
  sub_193A9B0((int)(uintptr_t)(v25), 0, dword_213B808[0], v8, v31 - v8);
  do
    v9 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v9 == 4 );
  v12 = v9;
  if ( v9 != 0 )
  {
    v19 = (int)(uintptr_t)(sub_18F81E0(v11, v10));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v22));
    sub_19042E0(v29, &v27);
    g4_std::string::Destroy(&v27);
    v29[3] = v19;
    v29[2] = v12;
    v29[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v29[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v13 = *(uint32_t *)self;
  g4_std::string::construct_copy(v23, &glotv3::errors::DNS_RESOLVE_FAILED_ON_SERVER_WITH_MESSAGE);
  g4_std::string::append_str(v23, v13);
  g4_std::string::construct_copy(v24, v23);
  g4_std::string::append((int)(uintptr_t)(v24), " with code: ", 0xCu);
  g4_std::string::construct_copy(&v26, v24);
  g4_std::string::append_str(&v26, v25);
  glotv3::Glotv3Logger::WriteLog(&v26);
  v14 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  result = v25[0];
  v18 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v18)), (int32_t)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::Destroy  (binary VA: 0x1339db0)
// Original: glotv3::DNSClient::~DNSClient
// ----------------------------------------------------------------------------
void glotv3::DNSClient::Destroy(glotv3::DNSClient::Self *self)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  volatile int32_t *v3;
  volatile int32_t *v4;

  v1 = (volatile int32_t *)opNew(0x14u);
  *((uint32_t *)v1 + 1) = 1;
  *((uint32_t *)v1 + 2) = 1;
  *v1 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2092828);
  *((uint32_t *)v1 + 3) = 0;
  v2 = *((volatile int32_t **)self + 5);
  *((uint32_t *)self + 4) = 0;
  v3 = v1;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v1);
  if ( v2 != nullptr )
  {
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      if ( __sync_fetch_and_add(v2 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v2, 12);
    }
    v3 = *((volatile int32_t **)self + 5);
  }
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  if ( v3 != nullptr )
  {
    if ( __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 8);
      if ( __sync_fetch_and_add(v3 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v3, 12);
    }
    v4 = *((volatile int32_t **)self + 5);
    if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 8);
      if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v4, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::HasConnectivity  (binary VA: 0x1339ee0)
// Original: glotv3::DNSClient::HasConnectivity
// ----------------------------------------------------------------------------
bool glotv3::DNSClient::HasConnectivity(glotv3::DNSClient::Self *self)
{
  return *((uint32_t *)self + 1) == 3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::ResetConnectivity  (binary VA: 0x1339ef0)
// Original: glotv3::DNSClient::ResetConnectivity
// ----------------------------------------------------------------------------
int32_t glotv3::DNSClient::ResetConnectivity(glotv3::DNSClient::Self *self)
{
  return __atomic_exchange_n((volatile int32_t *)self + 1, 0, __ATOMIC_SEQ_CST);
}

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::GetStatus  (binary VA: 0x1339f00)
// Original: glotv3::DNSClient::GetStatus
// ----------------------------------------------------------------------------
int glotv3::DNSClient::GetStatus(glotv3::DNSClient::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::Construct  (binary VA: 0x1339f10)
// Original: glotv3::DNSClient::DNSClient
// ----------------------------------------------------------------------------
void glotv3::DNSClient::Construct(glotv3::DNSClient::Self *self, glotv3::TrackingManager::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)a2 + 12);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)a2 + 80);
  g4_asio_resolver_basic_io_object_construct(
    (char *)self + 12,
    (char *)a2 + 80);
}

// ----------------------------------------------------------------------------
// Function: glotv3::DNSClient::TryToResolveDNS  (binary VA: 0x133a1c0)
// Original: glotv3::DNSClient::TryToResolveDNS
// ----------------------------------------------------------------------------
int glotv3::DNSClient::TryToResolveDNS(glotv3::DNSClient::Self *self)
{
  void *v1;
  int v2;
  void *v3;
  int result;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[3];
  typedef uint32_t _g4_t_v9[4];
  typedef uint32_t _g4_t_v10[8];
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v10)) > _g4_s4 ? (36u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v11)) > _g4_s5 ? (68u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v12)) > _g4_s6 ? (72u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 68u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 72u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "80", (int)(uintptr_t)(&v6));
  memset(v10, 0, sizeof(v10));
  g4_std::string::construct_copy(&v11, *(uint32_t *)self);
  g4_std::string::construct_copy(v12, &v7);
  v10[0] = 1024;
  v10[1] = 0;
  v10[2] = 1;
  v10[3] = 6;
  memset(&v10[4], 0, 16);
  v1 = (void *)(v7 - 12);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  sub_1339960(v8, (int)(uintptr_t)(glotv3::DNSClient::HandleResolve), 0, (int)(uintptr_t)(self));
  v2 = *((uint32_t *)self + 3);
  std::memcpy(v9, v8, 12);
  boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient::Self*>,boost::arg<1> (*)(void)>>>(
    (int *)(v2 + 20),
    (int *)self + 4,
    v10,
    v9);
  v3 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  result = v11;
  v5 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v5)), (int)0);
  }
  return result;
}


