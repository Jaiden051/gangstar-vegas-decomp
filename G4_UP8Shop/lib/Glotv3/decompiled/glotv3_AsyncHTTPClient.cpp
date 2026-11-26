#include "Core/Utils/DecompTypes.h"
#include "glotv3_AsyncHTTPClient.h"

namespace {
typedef uint64_t __attribute__((aligned(4))) g4_u64_a4;
struct g4_x86_epoll_event {
  uint32_t events;
  union {
    void *ptr;
    int fd;
    uint32_t u32;
    g4_u64_a4 u64;
  } data;
};
static_assert(sizeof(g4_x86_epoll_event) == 12, "x86 epoll_event size");
static_assert(offsetof(g4_x86_epoll_event, data) == 4, "x86 epoll_event.data offset");
static inline int g4_epoll_ctl_x86(int epfd, int op, int fd, const g4_x86_epoll_event *ev) {
  if (!ev) return ::epoll_ctl(epfd, op, fd, nullptr);
  struct epoll_event native_ev;
  native_ev.events = ev->events;
  native_ev.data.u64 = ev->data.u64;
  return ::epoll_ctl(epfd, op, fd, &native_ev);
}
} // namespace

pthread_mutex_t *g4_asio_epoll_deregister_descriptor(void *self, int fd, void *a3, bool a4);
int g4_asio_socket_ops_close(int a1, int a2, void *self, uint8_t *a4, uint8_t *a5, uint32_t *a6);
int g4_boost_counted_time_rep_construct(void *p_a1, unsigned int *a2, int a3);
uint32_t *g4_boost_counted_time_get_time_rep(void *a1, int a2);

int g4_asio_create_resolver_tcp(uint32_t a1);
int g4_asio_create_stream_socket_tcp(uint32_t a1);
int g4_asio_create_deadline_timer_ptime(uint32_t a1);

namespace glotv3 { namespace Utils {
  template<> uint32_t *ToString<unsigned int>(uint32_t *a1, unsigned int a2);
  template<> uint32_t *ToString<int>(uint32_t *a1, int a2);
} }

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleDelaySending  (binary VA: 0x1368680)
// Original: glotv3::AsyncHTTPClient::HandleDelaySending
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleDelaySending(int a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  glotv3::TrackingManager::Self *v6;
  typedef unsigned int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef glotv3::TrackingManager::Self *_g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v7 = 0;
  v2 = *(uint32_t *)(glotv3::system::ETS_HEADER_KEY_VALUE_DELIMITER - 12)
     + g4_std_compat::string_find(
         a2,
         glotv3::system::ETS_HEADER_KEY_VALUE_DELIMITER,
         0,
         *(uint32_t *)(glotv3::system::ETS_HEADER_KEY_VALUE_DELIMITER - 12));
  v3 = *(uint32_t *)(*a2 - 12);
  if ( v2 > v3 )
    sub_1900210("basic_string::substr");
  sub_193A6F0(&v8, a2, v2, v3 - v2 - *(uint32_t *)(glotv3::system::CR - 12));
  glotv3::Utils::TryParseStringToUInt(&v8, &v7);
  v4 = v7;
  if ( v7 == 0 )
    { g4_std::string::Destroy(&v8); return 0; }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v9);
  v6 = v9;
  if ( v9 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v6 = v9;
  }
  glotv3::TrackingManager::DelaySending(v6, v4);
  boost::detail::shared_count::Destroy(&v10);
  { g4_std::string::Destroy(&v8); return 0; }
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::GetStatus  (binary VA: 0x13687b0)
// Original: glotv3::AsyncHTTPClient::GetStatus
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::GetStatus(glotv3::AsyncHTTPClient::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleBackup  (binary VA: 0x13687c0)
// Original: glotv3::AsyncHTTPClient::HandleBackup
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleBackup(int *a1, int8_t **a2, int a3, int a4)
{
  int v4;
  typedef char *_g4_t_v6;
  typedef int *_g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef glotv3::Event::Self *_g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef glotv3::Event::Self *_g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef int (**_g4_t_v21)(int);
  typedef int _g4_t_v22[7];
  typedef uint8_t _g4_t_v23[8];
  typedef uint8_t _g4_t_v24[68];
  typedef uint32_t _g4_t_v25[29];
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v10)) > _g4_s4 ? (32u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v11)) > _g4_s5 ? (36u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v12)) > _g4_s6 ? (40u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v13)) > _g4_s7 ? (44u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v14)) > _g4_s8 ? (48u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v15)) > _g4_s9 ? (52u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v16)) > _g4_s10 ? (56u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v17)) > _g4_s11 ? (60u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v18)) > _g4_s12 ? (64u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v19)) > _g4_s13 ? (68u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v20)) > _g4_s14 ? (72u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v21)) > _g4_s15 ? (76u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v22)) > _g4_s16 ? (80u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v23)) > _g4_s17 ? (108u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v24)) > _g4_s18 ? (116u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (184u + sizeof(_g4_t_v25)) > _g4_s19 ? (184u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (300u + sizeof(_g4_t_v26)) > _g4_s20 ? (300u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (301u + sizeof(_g4_t_v27)) > _g4_s21 ? (301u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (304u + sizeof(_g4_t_v28)) > _g4_s22 ? (304u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (308u + sizeof(_g4_t_v29)) > _g4_s23 ? (308u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (312u + sizeof(_g4_t_v30)) > _g4_s24 ? (312u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (316u + sizeof(_g4_t_v31)) > _g4_s25 ? (316u + sizeof(_g4_t_v31)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 184u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 300u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 301u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 304u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 308u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 312u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 316u);

  glotv3::Utils::GetSHA1(&v9, a2);
  sub_134F3A0((int)(uintptr_t)(v8), *a1, (int)(uintptr_t)(&glotv3::system::BACKSLASH));
  sub_134F3A0((int)(uintptr_t)(v10), (int)(uintptr_t)(v8), (int)(uintptr_t)(&v9));
  sub_134F3A0((int)(uintptr_t)(v11), (int)(uintptr_t)(v10), (int)(uintptr_t)(&glotv3::system::SHA1_SUFFIX));
  g4_std::string::assign_str(a1 + 4, v11);
  g4_std::string::Destroy(v11);
  g4_std::string::Destroy(v10);
  g4_std::string::Destroy(v8);
  g4_std::string::Destroy(&v9);
  v6 = (char *)a1[4];
  sub_1900810(v25);
  v25[28] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v25[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v21 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v22[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v22[-1] + (uint32_t)(uintptr_t)(*(v21 - 3)), 0);
  v21 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v25[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v22);
  sub_19119D0(v25, v22);
  if ( sub_190AE40((int)(uintptr_t)(v22), v6, 50) != 0 )
    sub_1911530((char *)&v22[-1] + (uint32_t)(uintptr_t)(*(v21 - 3)), 0);
  else
    sub_1911530((char *)&v22[-1] + (uint32_t)(uintptr_t)(*(v21 - 3)), *(int *)((char *)&v22[4] + (uint32_t)(uintptr_t)(*(v21 - 3))) | 4);
  if ( (uint8_t)sub_1907FD0(v24) != 0 )
  {
    g4_std_compat::ostream_write(&v21, *a2, *((uint32_t *)*a2 - 3));
    v7 = a1 + 3;
    if ( sub_190AC60(v22) == 0 )
      sub_1911530((char *)&v22[-1] + (uint32_t)(uintptr_t)(*(v21 - 3)), *(int *)((char *)&v22[4] + (uint32_t)(uintptr_t)(*(v21 - 3))) | 4);
  }
  else
  {
    sub_134F3A0((int)(uintptr_t)(v12), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_BACKUP), (int)(uintptr_t)(&glotv3::system::HASHTAG));
    sub_134F3A0((int)(uintptr_t)(v13), (int)(uintptr_t)(v12), (int)(uintptr_t)(&glotv3::system::PACKAGE));
    v7 = a1 + 3;
    sub_134F3A0((int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(a1 + 3));
    glotv3::EventOfError::s_OfType(&v17, &reinterpret_cast<G4Elf32Sym *>(stru_574)->st_value, (int)(uintptr_t)(v14));
    v19 = v17;
    v20 = v18;
    if ( v18 != nullptr )
      __sync_add_and_fetch(v18 + 1, 1);
    glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v15);
    v4 = v15;
    if ( v15 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Tra"
        "ckingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
        "px != 0");
      v4 = v15;
    }
    glotv3::TrackingManager::AddEvent(v4, &v19, 1);
    boost::detail::shared_count::Destroy(&v16);
    boost::detail::shared_count::Destroy(&v20);
    boost::detail::shared_count::Destroy(&v18);
    g4_std::string::Destroy(v14);
    g4_std::string::Destroy(v13);
    g4_std::string::Destroy(v12);
  }
  g4_std::string::assign_str(a1 + 2, a2);
  g4_std::string::assign_str(v7, a3);
  g4_std::string::assign_str(a1 + 5, a4);
  v21 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v25[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v22[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v22);
  sub_1908070(v24);
  v22[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v23);
  v21 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v22[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v25[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v25);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleRefusedRequest  (binary VA: 0x1368c80)
// Original: glotv3::AsyncHTTPClient::HandleRefusedRequest
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleRefusedRequest(int8_t **self, unsigned int a2)
{
  unsigned int UTCAsSeconds;
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  uint8_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int result;
  const char **v23;
  uint8_t *v24;
  int v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef glotv3::AsyncHTTPClient::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef const char *_g4_t_v35[4];
  typedef int _g4_t_v36[4];
  typedef int _g4_t_v37[3];
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[4];
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[4];
  typedef uint8_t _g4_t_v42[4];
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[4];
  typedef uint8_t _g4_t_v50[4];
  typedef uint8_t _g4_t_v51[4];
  typedef uint8_t _g4_t_v52[4];
  typedef uint8_t _g4_t_v53[4];
  typedef uint8_t _g4_t_v54[4];
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58[6];
  typedef uint8_t _g4_t_v59[12];
  typedef uint32_t _g4_t_v60[5];
  typedef uint32_t _g4_t_v61[5];
  typedef uint32_t _g4_t_v62[5];
  typedef uint32_t _g4_t_v63[11];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v30)) > _g4_s4 ? (4u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v33)) > _g4_s7 ? (44u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v34)) > _g4_s8 ? (48u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v35)) > _g4_s9 ? (52u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v36)) > _g4_s10 ? (68u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v37)) > _g4_s11 ? (84u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v38)) > _g4_s12 ? (96u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v39)) > _g4_s13 ? (100u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v40)) > _g4_s14 ? (104u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v41)) > _g4_s15 ? (108u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v42)) > _g4_s16 ? (112u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v43)) > _g4_s17 ? (116u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v44)) > _g4_s18 ? (120u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v45)) > _g4_s19 ? (124u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v46)) > _g4_s20 ? (128u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v47)) > _g4_s21 ? (132u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v48)) > _g4_s22 ? (136u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v49)) > _g4_s23 ? (140u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v50)) > _g4_s24 ? (144u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v51)) > _g4_s25 ? (148u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v52)) > _g4_s26 ? (152u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v53)) > _g4_s27 ? (156u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v54)) > _g4_s28 ? (160u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v55)) > _g4_s29 ? (164u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v56)) > _g4_s30 ? (168u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v57)) > _g4_s31 ? (172u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v58)) > _g4_s32 ? (176u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (200u + sizeof(_g4_t_v59)) > _g4_s33 ? (200u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v60)) > _g4_s34 ? (212u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (232u + sizeof(_g4_t_v61)) > _g4_s35 ? (232u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (252u + sizeof(_g4_t_v62)) > _g4_s36 ? (252u + sizeof(_g4_t_v62)) : _g4_s36,
    _g4_s38 = (272u + sizeof(_g4_t_v63)) > _g4_s37 ? (272u + sizeof(_g4_t_v63)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 120u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 140u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 168u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 172u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 176u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 200u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 212u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 232u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 252u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 272u);

  v63[7] = (uint32_t)(uintptr_t)(&self);
  v32 = (glotv3::AsyncHTTPClient::Self *)self;
  v31 = a2;
  if ( glotv3::TrackingManager::s_IsSpyStreamLoggingActive != 0 )
  {
    glotv3::Utils::GetSHA1(&v38, self + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), ".bin", (int)(uintptr_t)(&v33));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&off_1B5AAE7 + 2, (int)(uintptr_t)(&v33) + 1);
    UTCAsSeconds = glotv3::Utils::GetUTCAsSeconds();
    do
      v3 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v3 == 4 );
    if ( v3 != 0 )
    {
      v27 = v3;
      v25 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v34));
      sub_19042E0(v60, &v55);
      g4_std::string::Destroy(&v55);
      v60[2] = v27;
      v60[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v60[3] = v25;
      v60[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v6 = v59;
    v36[0] = (int)(uintptr_t)(&dword_213B814);
    while ( 1 )
    {
      v7 = UTCAsSeconds % 0xA + 48;
      UTCAsSeconds /= 0xAu;
      *(v6 - 1) = v7;
      if ( UTCAsSeconds == 0 )
        break;
      --v6;
    }
    sub_193A9B0((int)(uintptr_t)(v36), 0, dword_213B808[0], v6 - 1, v59 - (v6 - 1));
    do
      v8 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v8 == 4 );
    v11 = v8;
    if ( v8 != 0 )
    {
      v29 = (int)(uintptr_t)(sub_18F81E0(v10, v9));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v34) + 1);
      sub_19042E0(v61, &v56);
      g4_std::string::Destroy(&v56);
      v61[3] = v29;
      v61[2] = v11;
      v61[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v61[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), (char *)&off_1B5AAE7 + 2, (int)(uintptr_t)(&v33) + 2);
    do
      v12 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v12 == 4 );
    v15 = v12;
    if ( v12 != 0 )
    {
      v30 = (int)(uintptr_t)(sub_18F81E0(v14, v13));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v34) + 2);
      sub_19042E0(v62, &v57);
      g4_std::string::Destroy(&v57);
      v62[3] = v30;
      v62[2] = v15;
      v62[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v62[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v16 = v31;
    v17 = v59;
    v37[0] = (int)(uintptr_t)(&dword_213B814);
    while ( 1 )
    {
      *(v17 - 1) = v16 % 0xA + 48;
      v16 /= 0xAu;
      if ( v16 == 0 )
        break;
      --v17;
    }
    sub_193A9B0((int)(uintptr_t)(v37), 0, dword_213B808[0], v17 - 1, v59 - (v17 - 1));
    do
      v18 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v18 == 4 );
    v21 = v18;
    if ( v18 != 0 )
    {
      v28 = (int)(uintptr_t)(sub_18F81E0(v20, v19));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v58), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v34) + 3);
      sub_19042E0(v63, v58);
      g4_std::string::Destroy(v58);
      v63[3] = v28;
      v63[2] = v21;
      v63[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v63[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Refused_", (int)(uintptr_t)(&v33) + 3);
    sub_134F3A0((int)(uintptr_t)(v47), (int)(uintptr_t)(&v48), (int)(uintptr_t)(v37));
    sub_134F3A0((int)(uintptr_t)(v45), (int)(uintptr_t)(v47), (int)(uintptr_t)(&v46));
    sub_134F3A0((int)(uintptr_t)(v44), (int)(uintptr_t)(v45), (int)(uintptr_t)(v36));
    sub_134F3A0((int)(uintptr_t)(v42), (int)(uintptr_t)(v44), (int)(uintptr_t)(&v43));
    sub_134F3A0((int)(uintptr_t)(v41), (int)(uintptr_t)(v42), (int)(uintptr_t)(&v38));
    sub_134F3A0((int)(uintptr_t)(v39), (int)(uintptr_t)(v41), (int)(uintptr_t)(&v40));
    g4_std::string::Destroy(v41);
    g4_std::string::Destroy(v42);
    g4_std::string::Destroy(v44);
    g4_std::string::Destroy(v45);
    g4_std::string::Destroy(v47);
    g4_std::string::Destroy(&v48);
    g4_std::string::Destroy(v37);
    g4_std::string::Destroy(&v46);
    g4_std::string::Destroy(v36);
    g4_std::string::Destroy(&v43);
    g4_std::string::Destroy(&v40);
    v35[0] = (const char *)&dword_213B814;
    if ( glotv3::Porting::GetPlatform() == 1 )
    {
      if ( glotv3::Fs::ExistsPath(&glotv3::system::REFUSED_ANDROID_PATH_FIX)
        || glotv3::Fs::MakeDirectory(&glotv3::system::REFUSED_ANDROID_PATH_FIX) )
      {
        v26 = v50;
        sub_134F3A0((int)(uintptr_t)(v50), (int)(uintptr_t)(&glotv3::system::REFUSED_ANDROID_PATH_FIX), (int)(uintptr_t)(&glotv3::system::BACKSLASH));
        v24 = v49;
        sub_134F3A0((int)(uintptr_t)(v49), (int)(uintptr_t)(v50), (int)(uintptr_t)(v39));
      }
      else
      {
        v26 = v52;
        v24 = v51;
        sub_134F3A0((int)(uintptr_t)(v52), (int)(uintptr_t)(&glotv3::system::QADEBUG_ANDROID_PATH_FIX), (int)(uintptr_t)(&glotv3::system::BACKSLASH));
        sub_134F3A0((int)(uintptr_t)(v51), (int)(uintptr_t)(v52), (int)(uintptr_t)(v39));
      }
      g4_std::string::assign_str(v35, v24);
      g4_std::string::Destroy(v24);
      g4_std::string::Destroy(v26);
    }
    else
    {
      sub_134F3A0((int)(uintptr_t)(v54), *(uint32_t *)v32, (int)(uintptr_t)(&glotv3::system::BACKSLASH));
      sub_134F3A0((int)(uintptr_t)(v53), (int)(uintptr_t)(v54), (int)(uintptr_t)(v39));
      g4_std::string::assign_str(v35, v53);
      g4_std::string::Destroy(v53);
      g4_std::string::Destroy(v54);
    }
    if ( !glotv3::Fs::ExistsPath(v35) )
      glotv3::Fs::RenamePath((const char **)v32 + 4, v35);
    g4_std::string::Destroy(v35);
    g4_std::string::Destroy(v39);
    return ((g4_std::string::Destroy(&v38)), (int)0);
  }
  else
  {
    v23 = (const char **)(self + 4);
    result = glotv3::Fs::ExistsPath((const char **)self + 4);
    if ( (uint8_t)result != 0 )
      return glotv3::Fs::RemovePath(v23);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleStop  (binary VA: 0x1369750)
// Original: glotv3::AsyncHTTPClient::HandleStop
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleStop(int a1, int a2, glotv3::AsyncHTTPClient::Self *self)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  typedef boost::system::error_code::Self *_g4_t_v10[2];
  typedef int _g4_t_v11[2];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);

  *((uint8_t *)self + 28) = 1;
  v11[0] = 0;
  v11[1] = (int)(uintptr_t)(sub_18F81E0(a1, a2));
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    v4,
    v3,
    (uint32_t *)(*((uint32_t *)self + 17) + 20),
    (int)(uintptr_t)(self) + 72,
    v11);
  if ( v11[0] != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
    sub_1367436(v11, "cancel");
  v10[0] = nullptr;
  v10[1] = (boost::system::error_code::Self *)sub_18F81E0(v6, v5);
  result = *((uint32_t *)self + 13);
  if ( result != -1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *(void **)(*((uint32_t *)self + 12) + 20),
      *((uint32_t *)self + 13),
      (void *)((pthread_mutex_t **)self + 15),
      (*((uint8_t *)self + 56) & 0x40) == 0);
    result = g4_asio_socket_ops_close(
               v9,
               v8,
               (void *)(uintptr_t)*((uint32_t *)self + 13),
               (uint8_t *)self + 56,
               nullptr,
               (uint32_t *)v10);
    *((uint32_t *)self + 13) = -1;
    *((uint8_t *)self + 56) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleCheck  (binary VA: 0x1369850)
// Original: glotv3::AsyncHTTPClient::HandleCheck
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleCheck(glotv3::AsyncHTTPClient::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t **v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t events;
  int v17;
  int v18;
  int v19;
  uint32_t v20;
  g4_x86_epoll_event *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int64_t _g4_t_v30;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef int64_t _g4_t_v32;
  typedef g4_x86_epoll_event _g4_t_event;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_mutex)) > _g4_s3 ? (20u + sizeof(_g4_t_mutex)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v32)) > _g4_s4 ? (24u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_event)) > _g4_s5 ? (36u + sizeof(_g4_t_event)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 36u);

  result = *((uint8_t *)self + 28);
  if ( (uint8_t)result != 0 )
    return result;
  sub_1369440(&v32);
  if ( *((uint64_t *)self + 9) <= v32 )
  {
    event.events = 0;
    v12 = (int)(uintptr_t)(sub_18F81E0(v2, HIDWORD(v32)));
    v13 = *((uint32_t *)self + 13);
    event.data.fd = v12;
    v14 = *((uint32_t *)self + 12);
    v15 = -1;
    if ( v13 != -1 )
    {
      g4_asio_epoll_deregister_descriptor(
        *(void **)(v14 + 20),
        v13,
        (void *)((pthread_mutex_t **)self + 15),
        (*((uint8_t *)self + 56) & 0x40) == 0);
      v15 = *((uint32_t *)self + 13);
    }
    g4_asio_socket_ops_close(
      v14,
      (int)(uintptr_t)(self) + 56,
      (void *)(uintptr_t)v15,
      (uint8_t *)self + 56,
      nullptr,
      (uint32_t *)&event);
    events = event.events;
    *((uint32_t *)self + 13) = -1;
    *((uint8_t *)self + 56) = 0;
    if ( events != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
      sub_1367436((int *)&event, "close");
    g4_boost_counted_time_get_time_rep(
      &v32,
      2);
    v30 = v32;
    event.events = 0;
    event.data.fd = (int)(uintptr_t)(sub_18F81E0(HIDWORD(v32), v32));
    boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
      v18,
      v17,
      (uint32_t *)(*((uint32_t *)self + 17) + 20),
      (int)(uintptr_t)(self) + 72,
      &event);
    *((uint64_t *)self + 9) = v30;
    event.data.fd = (int)(uintptr_t)(sub_18F81E0(HIDWORD(v30), v30));
    event.events = 0;
  }
  v29 = *((uint32_t *)self + 17);
  v3 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v3 != 0 )
  {
    v6 = *(uint32_t ***)(v3 + 4);
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( *v6 != nullptr )
      {
        *v6 = nullptr;
        if ( *(uint8_t *)v7 > 0x1Fu )
        {
          *((uint8_t *)v7 + 32) = *(uint8_t *)v7;
          goto LABEL_10;
        }
        opDelete(v7);
      }
    }
  }
  v8 = opNew(0x21u);
  *(uint8_t *)(v8 + 32) = 32;
  v7 = (uint32_t *)v8;
LABEL_10:
  *v7 = 0;
  v7[1] = (uint32_t)(uintptr_t)((int (*)(int, uint32_t *))boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::AsyncHTTPClient::Self>,boost::_bi::list1<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>>>>::do_complete);
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v5, v4));
  v7[6] = 0;
  v7[5] = (uint32_t)(uintptr_t)(glotv3::AsyncHTTPClient::HandleCheck);
  v7[7] = (uint32_t)(uintptr_t)(self);
  *((uint8_t *)self + 80) = 1;
  v9 = *(uint32_t *)(v29 + 52);
  mutex = (pthread_mutex_t *)(v9 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v9 + 24));
  if ( *(uint8_t *)(v9 + 48) != 0 )
  {
    boost::asio::detail::task_io_service::post_immediate_completion(*(pthread_mutex_t **)(v9 + 20), v7, 0);
    return pthread_mutex_unlock(mutex);
  }
  else
  {
    if ( *((uint32_t *)self + 25) == 0 )
    {
      v28 = (char *)self + 84;
      if ( (glotv3::AsyncHTTPClient::Self *)((char *)self + 84) != *(glotv3::AsyncHTTPClient::Self **)(v29 + 36) )
      {
        v19 = (*(uint32_t *)(v29 + 44) - *(uint32_t *)(v29 + 40)) >> 2;
        event.data.fd = *((uint32_t *)self + 19);
        *((uint32_t *)self + 23) = -1431655765 * v19;
        v20 = *((uint32_t *)self + 18);
        HIDWORD(event.data.u64) = (uint32_t)(uintptr_t)((char *)self + 84);
        event.events = v20;
        v21 = *(g4_x86_epoll_event **)(v29 + 44);
        if ( v21 == *(g4_x86_epoll_event **)(v29 + 48) )
        {
          g4_std::vector_asio_timer_queue_asio_fo_ee7ae8::M_insert_aux(
            v29 + 40,
            *(char **)(v29 + 44),
            (int *)&event);
          v24 = v29;
          v23 = *(uint32_t *)(v29 + 44);
        }
        else
        {
          v22 = 0;
          if ( v21 != nullptr )
          {
            *v21 = event;
            v22 = *(uint32_t *)(v29 + 44);
          }
          v23 = v22 + 12;
          v24 = v29;
          *(uint32_t *)(v29 + 44) = v23;
        }
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::up_heap(
          (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *)(v24 + 28),
          -1431655765 * ((v23 - *(uint32_t *)(v24 + 40)) >> 2) - 1);
        v25 = v29;
        v26 = *(uint32_t *)(v29 + 36);
        *((uint32_t *)self + 25) = 0;
        *((uint32_t *)self + 24) = v26;
        v27 = *(uint32_t *)(v29 + 36);
        if ( v27 != 0 )
        {
          v25 = v29;
          *(uint32_t *)(v27 + 16) = (uint32_t)(uintptr_t)(v28);
        }
        *(uint32_t *)(v25 + 36) = (uint32_t)(uintptr_t)(v28);
      }
    }
    *v7 = 0;
    v10 = *((uint32_t **)self + 22);
    if ( v10 != nullptr )
    {
      *v10 = (uint32_t)(uintptr_t)(v7);
      *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(v7);
    }
    else
    {
      *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(v7);
      *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(v7);
    }
    v11 = false;
    if ( *((uint32_t *)self + 23) == 0 )
      v11 = *((uint32_t *)self + 21) == (uint32_t)(uintptr_t)(v7);
    __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)(v9 + 20) + 48), 1u);
    if ( v11 )
    {
      event.events = 0x80000009;
      event.data.u64 = (unsigned int)(v9 + 28);
      g4_epoll_ctl_x86(*(uint32_t *)(v9 + 36), 3, *(uint32_t *)(v9 + 28), &event);
    }
    return pthread_mutex_unlock(mutex);
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::AsyncRequest  (binary VA: 0x1369fb0)
// Original: glotv3::AsyncHTTPClient::AsyncRequest
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::AsyncRequest(int a1, int8_t **a2, int a3, int a4)
{
  int v4;
  int v5;
  int v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[2];
  typedef uint32_t _g4_t_v10[3];
  typedef uint32_t _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[8];
  typedef uint8_t _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[16];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (15u + sizeof(_g4_t_v8)) > _g4_s0 ? (15u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v12)) > _g4_s4 ? (56u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v13)) > _g4_s5 ? (88u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v14)) > _g4_s6 ? (92u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 88u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 92u);

  if ( *((uint32_t *)*a2 - 3) == 0 )
    return glotv3::Glotv3Logger::WriteLog(&glotv3::errors::EMPTY_DATA_PASSED_TO_NETWORK_CLIENT);
  glotv3::AsyncHTTPClient::HandleBackup((int *)a1, a2, a3, a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8) + 1, "80", (int)(uintptr_t)(&v8));
  v4 = *(uint32_t *)(a1 + 4);
  memset(v12, 0, sizeof(v12));
  g4_std::string::construct_copy(v13, v4);
  g4_std::string::construct_copy(v14, (char *)&v8 + 1);
  v12[0] = 1024;
  v12[1] = 0;
  v12[2] = 1;
  v12[3] = 6;
  memset(&v12[4], 0, 16);
  g4_std::string::Destroy((char *)&v8 + 1);
  v9[0] = 15000000;
  v9[1] = 0;
  boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
    v5,
    a1 + 68,
    v9);
  __atomic_exchange_n((volatile int32_t *)(a1 + 24), 2, __ATOMIC_SEQ_CST);
  if ( nativeHasAnyInternetConnection() != 0 )
  {
    sub_1367360(v10, (int)(uintptr_t)(glotv3::AsyncHTTPClient::HandleResolve), 0, a1);
    v7 = *(uint32_t *)(a1 + 36);
    std::memcpy(v11, v10, 12);
    boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>(
      v7 + 20,
      (int *)(a1 + 40),
      v12,
      v11);
  }
  g4_std::string::Destroy(v14);
  return ((g4_std::string::Destroy(v13)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::Construct  (binary VA: 0x136a650)
// Original: glotv3::AsyncHTTPClient::AsyncHTTPClient
// ----------------------------------------------------------------------------
glotv3::AsyncHTTPClient::Self * glotv3::AsyncHTTPClient::Construct(glotv3::AsyncHTTPClient::Self *self, glotv3::TrackingManager::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef uint8_t _g4_t_v11[5];
  typedef unsigned int _g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef volatile int32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int64_t _g4_t_v18;
  typedef uint32_t _g4_t_v19[2];
  typedef uint32_t _g4_t_v20[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (11u + sizeof(_g4_t_v11)) > _g4_s0 ? (11u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v20)) > _g4_s9 ? (56u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 11u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);

  v17 = &boost::asio::detail::service_base<boost::asio::ip::resolver_service<boost::asio::ip::tcp>>::id;
  *(uint32_t *)&v11[1] = 0;
  v16 = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)((char *)a2 + 12);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 28) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)a2 + 80);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(boost::asio::detail::service_registry::do_use_service(
                            *((uint32_t *)a2 + 20),
                            &v16,
                            g4_asio_create_resolver_tcp));
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  v14 = 0;
  v15 = nullptr;
  v2 = (uint32_t *)opNew(0x14u);
  v2[1] = 1;
  v2[2] = 1;
  *v2 = ((uint32_t)(uintptr_t)&off_2092828);
  v3 = v14;
  v2[3] = 0;
  v4 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 10) = v3;
  v5 = *((volatile int32_t **)self + 11);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v2);
  v14 = v4;
  v15 = v5;
  boost::detail::shared_count::Destroy(&v15);
  v6 = *((uint32_t *)a2 + 20);
  v17 = &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id;
  v16 = 0;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(boost::asio::detail::service_registry::do_use_service(
                             v6,
                             &v16,
                             g4_asio_create_stream_socket_tcp));
  *((uint32_t *)self + 16) = 2;
  *((uint32_t *)self + 13) = -1;
  *((uint8_t *)self + 56) = 0;
  v17 = &boost::asio::detail::service_base<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::id;
  v7 = *((uint32_t *)a2 + 20);
  v16 = 0;
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(boost::asio::detail::service_registry::do_use_service(
                             v7,
                             &v16,
                             g4_asio_create_deadline_timer_ptime));
  v19[0] = -2;
  v19[1] = 0x7FFFFFFF;
  v12 = 0xFFFFFFFE;
  g4_boost_counted_time_rep_construct(
    (uint32_t *)self + 18,
    &v12,
    (int)(uintptr_t)(v19));
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  v20[0] = -2;
  v20[1] = 0x7FFFFFFF;
  v13 = 0xFFFFFFFE;
  g4_boost_counted_time_rep_construct(
    &v18,
    &v13,
    (int)(uintptr_t)(v20));
  *((uint64_t *)self + 9) = v18;
  *((uint8_t *)self + 80) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *((uint32_t *)self + 32) = 0;
  sub_1903A70((char *)self + 132);
  *((uint32_t *)self + 34) = -1;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  v11[0] = 0;
  *((uint32_t *)self + 26) = ((uint32_t)(uintptr_t)&off_20928A8);
  g4_std_compat::vector_fill_insert((int)(uintptr_t)(self) + 140, nullptr, 0x80u, (int)(uintptr_t)(v11));
  v8 = *((uint32_t *)self + 35);
  *((uint32_t *)self + 27) = v8;
  *((uint32_t *)self + 28) = v8;
  *((uint32_t *)self + 29) = v8;
  *((uint32_t *)self + 31) = v8;
  *((uint32_t *)self + 30) = v8;
  *((uint32_t *)self + 32) = v8 + 128;
  *((uint32_t *)self + 38) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  sub_1903A70((char *)self + 180);
  *((uint32_t *)self + 38) = ((uint32_t)(uintptr_t)&off_20928A8);
  *((uint32_t *)self + 46) = -1;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  v11[0] = 0;
  g4_std_compat::vector_fill_insert((int)(uintptr_t)(self) + 188, nullptr, 0x80u, (int)(uintptr_t)(v11));
  v9 = *((uint32_t *)self + 47);
  *((uint32_t *)self + 39) = v9;
  *((uint32_t *)self + 40) = v9;
  *((uint32_t *)self + 41) = v9;
  *((uint32_t *)self + 43) = v9;
  *((uint32_t *)self + 42) = v9;
  *((uint32_t *)self + 44) = v9 + 128;
  return (glotv3::AsyncHTTPClient::Self *)__atomic_exchange_n((volatile int32_t *)self + 6, 1, __ATOMIC_SEQ_CST);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandlePushbackOnQueue  (binary VA: 0x136d4d0)
// Original: glotv3::AsyncHTTPClient::HandlePushbackOnQueue
// ----------------------------------------------------------------------------
void glotv3::AsyncHTTPClient::HandlePushbackOnQueue(glotv3::AsyncHTTPClient::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  void *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint8_t *v17;
  glotv3::Event::Self *v18;
  uint32_t *v19;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v20;
  glotv3::Event::Self *v21;
  int v22;
  glotv3::Event::Self *v23;
  int v24;
  int v25;
  int v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef glotv3::Event::Self *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef uint8_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef unsigned int _g4_t_i;
  typedef volatile int32_t *_g4_t_v40;
  typedef glotv3::AsyncHTTPClient::Self *_g4_t_v41;
  typedef uint8_t _g4_t_v42[7];
  typedef uint8_t _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef glotv3::Event::Self *_g4_t_v47;
  typedef volatile int32_t *_g4_t_v48;
  typedef glotv3::Event::Self *_g4_t_v49;
  typedef volatile int32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef volatile int32_t *_g4_t_v52[2];
  typedef volatile int32_t *_g4_t_v53;
  typedef void *_g4_t_ptr[2];
  typedef void *_g4_t_v55;
  typedef void *_g4_t_v56;
  typedef void *_g4_t_v57;
  typedef uint32_t _g4_t_v58[5];
  typedef uint32_t _g4_t_v59[5];
  typedef uint32_t _g4_t_v60[5];
  typedef int _g4_t_v61[3];
  typedef int _g4_t_v62;
  typedef void **_g4_t_v63;
  typedef uint32_t **_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef glotv3::AsyncHTTPClient::Self **_g4_t_v71;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v29)) > _g4_s2 ? (16u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v32)) > _g4_s5 ? (16u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v33)) > _g4_s6 ? (16u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v34)) > _g4_s7 ? (20u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (27u + sizeof(_g4_t_v36)) > _g4_s9 ? (27u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v37)) > _g4_s10 ? (28u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v38)) > _g4_s11 ? (32u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_i)) > _g4_s12 ? (36u + sizeof(_g4_t_i)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v40)) > _g4_s13 ? (40u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v41)) > _g4_s14 ? (44u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (57u + sizeof(_g4_t_v42)) > _g4_s15 ? (57u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v43)) > _g4_s16 ? (64u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v44)) > _g4_s17 ? (68u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v45)) > _g4_s18 ? (72u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v46)) > _g4_s19 ? (76u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v47)) > _g4_s20 ? (80u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v48)) > _g4_s21 ? (84u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v49)) > _g4_s22 ? (88u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v50)) > _g4_s23 ? (92u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v51)) > _g4_s24 ? (96u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v52)) > _g4_s25 ? (100u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v53)) > _g4_s26 ? (108u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_ptr)) > _g4_s27 ? (112u + sizeof(_g4_t_ptr)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v55)) > _g4_s28 ? (120u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v56)) > _g4_s29 ? (124u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v57)) > _g4_s30 ? (128u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v58)) > _g4_s31 ? (132u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v59)) > _g4_s32 ? (152u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v60)) > _g4_s33 ? (172u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v61)) > _g4_s34 ? (192u + sizeof(_g4_t_v61)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v62)) > _g4_s35 ? (204u + sizeof(_g4_t_v62)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v63)) > _g4_s36 ? (208u + sizeof(_g4_t_v63)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v64)) > _g4_s37 ? (212u + sizeof(_g4_t_v64)) : _g4_s37,
    _g4_s39 = (216u + sizeof(_g4_t_v65)) > _g4_s38 ? (216u + sizeof(_g4_t_v65)) : _g4_s38,
    _g4_s40 = (220u + sizeof(_g4_t_v66)) > _g4_s39 ? (220u + sizeof(_g4_t_v66)) : _g4_s39,
    _g4_s41 = (224u + sizeof(_g4_t_v67)) > _g4_s40 ? (224u + sizeof(_g4_t_v67)) : _g4_s40,
    _g4_s42 = (228u + sizeof(_g4_t_v68)) > _g4_s41 ? (228u + sizeof(_g4_t_v68)) : _g4_s41,
    _g4_s43 = (232u + sizeof(_g4_t_v69)) > _g4_s42 ? (232u + sizeof(_g4_t_v69)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v70)) > _g4_s43 ? (236u + sizeof(_g4_t_v70)) : _g4_s43,
    _g4_s45 = (248u + sizeof(_g4_t_v71)) > _g4_s44 ? (248u + sizeof(_g4_t_v71)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 27u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 57u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 84u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 152u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 192u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 204u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 208u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 212u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 216u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 220u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 224u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 228u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 232u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 236u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 248u);

  v71 = &self;
  v41 = self;
  if ( *(uint32_t *)(*((uint32_t *)self + 2) - 12) == 0 )
    return;
  v55 = nullptr;
  ptr[1] = (void *)(uintptr_t)2048;
  v56 = (void *)opNew(1u);
  v57 = v56;
  v1 = (uint32_t *)(malloc(0x80Cu));
  *v1 = 2048;
  v1[2] = 0;
  v1[1] = 0;
  ptr[0] = v1;
  v62 = 0;
  v63 = ptr;
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 2048;
  v65 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
          (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)ptr,
          0x800u));
  v66 = v65;
  v69 = 0;
  v67 = v68 + v65;
  v70 = 0;
  sub_136C9B0(
    (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v61,
    *((char **)v41 + 2));
  if ( v62 != 0 && sub_1367830(v61) != 0 )
  {
    v7 = sub_1367830(v61);
    v38 = (uint32_t *)(v7 + 16);
    if ( v7 == 0 )
    {
      v38 = (uint32_t *)(&g4_rapidjson_NullValue);
      if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
        && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
      {
        v38 = (uint32_t *)(uintptr_t)(sub_1367380());
      }
    }
    if ( v38[3] == 4 )
    {
      v37 = v38[1];
      if ( v37 != 0 )
      {
        v36 = 0;
        for ( i = 0; i != v37; ++i )
        {
          v52[1] = nullptr;
          v53 = nullptr;
          sub_1367F30();
          if ( g4_fnstatic_ec81e02332 == 0 )
          {
            g4_fnstatic_ec81e02332 = 1;
            if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
            {
              v8 = pthread_mutex_init(
                     &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
                     nullptr);
              if ( v8 != 0 )
              {
                v31 = (void *)v8;
                v24 = (int)(uintptr_t)(sub_18F81E0(v10, v9));
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(v42));
                sub_19042E0(v58, &v44);
                g4_std::string::Destroy(&v44);
                v58[2] = (uint32_t)(uintptr_t)(v31);
                v58[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                v58[3] = v24;
                v58[0] = ((uint32_t)(uintptr_t)&off_2049568);
                std::terminate();
              }
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
              *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
              *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
            }
          }
          do
            v11 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
          while ( v11 == 4 );
          if ( v11 != 0 )
          {
            v32 = (void *)v11;
            v25 = (int)(uintptr_t)(sub_18F81E0(v13, v12));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v42[1]));
            sub_19042E0(v59, &v45);
            g4_std::string::Destroy(&v45);
            v59[2] = (uint32_t)(uintptr_t)(v32);
            v59[4] = (uint32_t)(uintptr_t)(&dword_213B814);
            v59[3] = v25;
            v59[0] = ((uint32_t)(uintptr_t)&off_20495E0);
            std::terminate();
          }
          v40 = (volatile int32_t *)(uintptr_t)(sub_136CF40(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
          do
            v14 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
          while ( v14 == 4 );
          if ( v14 != 0 )
          {
            v33 = (void *)v14;
            v26 = (int)(uintptr_t)(sub_18F81E0(v16, v15));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v42[2]));
            sub_19042E0(v60, &v46);
            g4_std::string::Destroy(&v46);
            v60[2] = (uint32_t)(uintptr_t)(v33);
            v60[4] = (uint32_t)(uintptr_t)(&dword_213B814);
            v60[3] = v26;
            v60[0] = ((uint32_t)(uintptr_t)&off_20495E0);
            std::terminate();
          }
          if ( v40 == nullptr )
            std::terminate();
          v53 = v40;
          *((uint32_t *)v40 + 2) = 1;
          *((uint32_t *)v40 + 1) = 1;
          *((uint32_t *)v40 + 3) = 0;
          *((uint8_t *)v40 + 16) = 0;
          *v40 = (volatile int32_t)((uint32_t)(uintptr_t)&off_20936E8);
          v17 = nullptr;
          if ( v53 != nullptr )
            v17 = (uint8_t *)G4_VCALL<int>(v53, 20, v27);
          v18 = (glotv3::Event::Self *)(v17 + 4);
          if ( v17 != (uint8_t *)-4 )
          {
            v34 = v17;
            v30 = (glotv3::Event::Self *)(v17 + 4);
            glotv3::Event::Construct((glotv3::Event::Self *)(v17 + 4), false);
            v18 = v30;
            v17 = v34;
          }
          *v17 = 1;
          v47 = v18;
          v48 = v53;
          if ( v53 != nullptr )
            __sync_add_and_fetch(v53 + 1, 1);
          boost::detail::shared_count::Destroy(&v53);
          if ( v47 != nullptr )
          {
            v19 = v38;
            if ( v38[3] != 4 )
            {
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                579,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](r"
                "apidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, ra"
                "pidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::Siz"
                "eType = unsigned int]",
                "IsArray ()");
              v19 = v38;
            }
            if ( i >= v19[1] )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                580,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](r"
                "apidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, ra"
                "pidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::Siz"
                "eType = unsigned int]",
                "index < data_.a.size");
            v20 = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*v38 + 16 * i);
            v21 = v47;
            if ( v47 == nullptr )
            {
              v35 = *v38 + 16 * i;
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glo"
                "tv3::Event, typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
                "px != 0");
              v21 = v47;
              v20 = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v35;
            }
            glotv3::Event::setRoot(v21, v20);
            v49 = v47;
            v50 = v48;
            if ( v48 != nullptr )
              __sync_add_and_fetch(v48 + 1, 1);
            glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v51);
            v22 = v51;
            if ( v51 == 0 )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glo"
                "tv3::TrackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
                "px != 0");
              v22 = v51;
            }
            glotv3::TrackingManager::AddEvent(v22, &v49, 1);
            boost::detail::shared_count::Destroy(v52);
            boost::detail::shared_count::Destroy(&v50);
            v23 = v47;
            if ( v47 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glo"
                "tv3::Event, typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
                "px != 0");
              v23 = v47;
            }
            glotv3::Event::getUUID((glotv3::Event::Self *)v43, v23);
            sub_134F3A0((int)(uintptr_t)(&v42[3]), (int)(uintptr_t)(&glotv3::errors::PUSHING_BACK_FROM_CLIENT), (int)(uintptr_t)(v43));
            v27 = 0;
            glotv3::Glotv3Logger::WriteLog(&v42[3]);
            g4_std::string::Destroy(&v42[3]);
            g4_std::string::Destroy(v43);
            boost::detail::shared_count::Destroy(&v48);
          }
          else
          {
            boost::detail::shared_count::Destroy(&v48);
            v36 = 1;
          }
        }
        g4_std::string::clear((char *)v41 + 8, 0, *(uint32_t *)(*((uint32_t *)v41 + 2) - 12), 0);
        if ( v36 != 0 )
          goto LABEL_4;
      }
      else
      {
        g4_std::string::clear((char *)v41 + 8, 0, *(uint32_t *)(*((uint32_t *)v41 + 2) - 12), 0);
      }
    }
  }
  glotv3::Fs::RemovePath((const char **)v41 + 4);
LABEL_4:
  v2 = (uint32_t *)(v64);
  if ( v64 != nullptr )
  {
    v3 = *v64;
    if ( *v64 != nullptr && v3 != v64[2] )
    {
      while ( 1 )
      {
        v4 = (uint32_t *)v3[2];
        v28 = v2;
        free(v3);
        v2 = v28;
        *v28 = (uint32_t)(uintptr_t)(v4);
        if ( v4 == nullptr || v4 == (uint32_t *)v28[2] )
          break;
        v3 = v4;
      }
    }
    v29 = v2;
    opDelete((void *)v2[4]);
    opDelete(v29);
  }
  v5 = (uint32_t *)(ptr[0]);
  if ( ptr[0] != nullptr && ptr[0] != v55 )
  {
    while ( 1 )
    {
      v6 = (void *)v5[2];
      free(v5);
      ptr[0] = v6;
      if ( v6 == nullptr || v6 == v55 )
        break;
      v5 = (uint32_t *)(v6);
    }
  }
  opDelete(v57);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleResolve  (binary VA: 0x136ddf0)
// Original: glotv3::AsyncHTTPClient::HandleResolve
// ----------------------------------------------------------------------------
void glotv3::AsyncHTTPClient::HandleResolve(int a1, int *a2, uint32_t *a3)
{
  int *v3;
  int v4;
  int *v5;
  int v6;
  uint32_t *v7;
  volatile int32_t *v8;
  uint32_t *v9;
  int v10;
  volatile int32_t *v11;
  int *v12;
  int v13;
  volatile int32_t *v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32[4];
  typedef uint32_t _g4_t_v33[3];
  typedef volatile int32_t *_g4_t_v34;
  typedef glotv3::Event::Self *_g4_t_v35;
  typedef volatile int32_t *_g4_t_v36;
  typedef glotv3::Event::Self *_g4_t_v37;
  typedef volatile int32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef volatile int32_t *_g4_t_v40;
  typedef int *_g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef volatile int32_t *_g4_t_v45;
  typedef volatile int32_t *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef volatile int32_t *_g4_t_v48[2];
  typedef uint32_t _g4_t_v49[2];
  typedef volatile int32_t *_g4_t_v50;
  typedef int *_g4_t_v51[2];
  typedef volatile int32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef volatile int32_t *_g4_t_v55[13];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v22)) > _g4_s7 ? (24u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v23)) > _g4_s8 ? (28u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v24)) > _g4_s9 ? (32u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v25)) > _g4_s10 ? (36u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v26)) > _g4_s11 ? (40u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v27)) > _g4_s12 ? (44u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v28)) > _g4_s13 ? (48u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v29)) > _g4_s14 ? (52u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v30)) > _g4_s15 ? (56u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v31)) > _g4_s16 ? (60u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v32)) > _g4_s17 ? (64u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v33)) > _g4_s18 ? (68u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v34)) > _g4_s19 ? (80u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v35)) > _g4_s20 ? (84u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v36)) > _g4_s21 ? (88u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v37)) > _g4_s22 ? (92u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v38)) > _g4_s23 ? (96u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v39)) > _g4_s24 ? (100u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v40)) > _g4_s25 ? (104u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v41)) > _g4_s26 ? (108u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v42)) > _g4_s27 ? (112u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v43)) > _g4_s28 ? (116u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v44)) > _g4_s29 ? (124u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v45)) > _g4_s30 ? (128u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v46)) > _g4_s31 ? (132u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v47)) > _g4_s32 ? (148u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v48)) > _g4_s33 ? (152u + sizeof(_g4_t_v48)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v49)) > _g4_s34 ? (160u + sizeof(_g4_t_v49)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v50)) > _g4_s35 ? (168u + sizeof(_g4_t_v50)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v51)) > _g4_s36 ? (172u + sizeof(_g4_t_v51)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v52)) > _g4_s37 ? (180u + sizeof(_g4_t_v52)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v53)) > _g4_s38 ? (184u + sizeof(_g4_t_v53)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v54)) > _g4_s39 ? (188u + sizeof(_g4_t_v54)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v55)) > _g4_s40 ? (192u + sizeof(_g4_t_v55)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 128u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 132u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 148u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 152u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 160u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 168u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 172u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 180u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 184u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 188u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 192u);

  v3 = &a1;
  v55[9] = &a1;
  v4 = a1;
  v5 = a2;
  v6 = (int)(uintptr_t)(a3);
  if ( *(uint8_t *)(a1 + 28) == 0 )
  {
    if ( *a2 != 0
      || (v21 = *a3,
          v47 = 0,
          v48[0] = nullptr,
          v48[1] = nullptr,
          v19 = a3,
          boost::detail::shared_count::Destroy(v48),
          v21 == 0) )
    {
      glotv3::AsyncHTTPClient::HandleStop((int)(uintptr_t)(v3), v6, (glotv3::AsyncHTTPClient::Self *)v4);
      glotv3::AsyncHTTPClient::HandlePushbackOnQueue((glotv3::AsyncHTTPClient::Self *)v4);
      __atomic_exchange_n((volatile int32_t *)(v4 + 24), 3, __ATOMIC_SEQ_CST);
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v28), (int)(*v5));
      (*(void (**)(char *, int, int, int, int, int, uint32_t *, int, int, int, int, int, int, int, int, int, int))(*(uint32_t *)v5[1] + 12))(
        v32,
        v5[1],
        *v5,
        v15,
        v16,
        v17,
        v19,
        v21,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      sub_134F3A0((int)(uintptr_t)(&v31), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_RESOLVE), (int)(uintptr_t)(v32));
      g4_std::string::construct_copy(&v30, &v31);
      g4_std::string::append((int)(uintptr_t)(&v30), ". ", 2u);
      sub_134F3A0((int)(uintptr_t)(&v29), (int)(uintptr_t)(&v30), (int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS));
      sub_134F3A0((int)(uintptr_t)(&v27), (int)(uintptr_t)(&v29), (int)(uintptr_t)(&v28));
      sub_134F3A0((int)(uintptr_t)(&v26), (int)(uintptr_t)(&v27), (int)(uintptr_t)(&glotv3::system::HASHTAG));
      sub_134F3A0((int)(uintptr_t)(&v25), (int)(uintptr_t)(&v26), (int)(uintptr_t)(&glotv3::system::PACKAGE));
      sub_134F3A0((int)(uintptr_t)(&v24), (int)(uintptr_t)(&v25), v4 + 12);
      glotv3::EventOfError::s_OfType(&v37, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_574)->st_value + 1, (int)(uintptr_t)(&v24));
      v35 = v37;
      v36 = v38;
      if ( v38 != nullptr )
        __sync_add_and_fetch(v38 + 1, 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v39);
      v13 = v39;
      if ( v39 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v13 = v39;
      }
      glotv3::TrackingManager::AddEvent(v13, &v35, 1);
      boost::detail::shared_count::Destroy(&v40);
      boost::detail::shared_count::Destroy(&v36);
      boost::detail::shared_count::Destroy(&v38);
      g4_std::string::Destroy(&v24);
      g4_std::string::Destroy(&v25);
      g4_std::string::Destroy(&v26);
      g4_std::string::Destroy(&v27);
      g4_std::string::Destroy(&v29);
      g4_std::string::Destroy(&v30);
      g4_std::string::Destroy(&v31);
      g4_std::string::Destroy(v32);
      g4_std::string::Destroy(&v28);
    }
    else
    {
      v33[0] = 60000000;
      v33[1] = 0;
      boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
        v6,
        v4 + 68,
        v33);
      __atomic_exchange_n((volatile int32_t *)(v4 + 24), 4, __ATOMIC_SEQ_CST);
      sub_1367340(v49, (int)(uintptr_t)(glotv3::AsyncHTTPClient::HandleConnect), 0, v4);
      v7 = v19;
      v8 = (volatile int32_t *)v19[1];
      v9 = (uint32_t *)*v19;
      v41 = (int *)*v19;
      v42 = v8;
      if ( v8 != nullptr )
      {
        __sync_add_and_fetch(v8 + 1, 1);
        v9 = (uint32_t *)*v19;
      }
      v43 = v19[2];
      v10 = v43 + 1;
      v19[2] = v43 + 1;
      if ( v9 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = std::vect"
          "or<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver"
          "_entry<boost::asio::ip::tcp> > >, typename boost::detail::sp_member_access<T>::type = std::vector<boost::asio:"
          ":ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boost::a"
          "sio::ip::tcp> > >*]",
          "px != 0");
        v7 = v19;
        v9 = (uint32_t *)*v19;
      }
      if ( v10 == 954437177 * ((v9[1] - *v9) >> 2) )
      {
        *v7 = 0;
        v33[2] = (uint32_t)(uintptr_t)(v9);
        v14 = (volatile int32_t *)v7[1];
        v7[1] = 0;
        v34 = v14;
        v20 = v7;
        boost::detail::shared_count::Destroy(&v34);
        v20[2] = 0;
      }
      v22 = (volatile int32_t *)v49[0];
      v11 = (volatile int32_t *)v49[1];
      v18 = v50;
      v12 = (int *)sub_18F81E0(v49[0], v50);
      v51[0] = (int *)(v4 + 48);
      v51[1] = v41;
      v44 = 0;
      v45 = nullptr;
      v46 = nullptr;
      v52 = v42;
      if ( v42 != nullptr )
      {
        __sync_add_and_fetch(v42 + 1, 1);
        v53 = v43;
        v55[0] = v45;
        v54 = v44;
        if ( v45 != nullptr )
          __sync_add_and_fetch(v45 + 1, 1);
      }
      else
      {
        v54 = 0;
        v53 = v43;
        v55[0] = nullptr;
      }
      v55[3] = v22;
      v55[5] = v18;
      v55[1] = v46;
      v55[2] = nullptr;
      v55[4] = v11;
      boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
        v51,
        0,
        v12,
        (int *)((char *)&dword_0 + 1));
      boost::detail::shared_count::Destroy(v55);
      boost::detail::shared_count::Destroy(&v52);
      boost::detail::shared_count::Destroy(&v45);
      boost::detail::shared_count::Destroy(&v42);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::Destroy  (binary VA: 0x136e360)
// Original: glotv3::AsyncHTTPClient::~AsyncHTTPClient
// ----------------------------------------------------------------------------
void glotv3::AsyncHTTPClient::Destroy(int a1, int a2, glotv3::AsyncHTTPClient::Self *self)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *i;
  void (*v11)(uint32_t, uint32_t *, uint32_t *, uint32_t);
  bool v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  volatile int32_t *v18;
  typedef bool _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 28) == 0 )
    glotv3::AsyncHTTPClient::HandleStop(a1, a2, self);
  glotv3::AsyncHTTPClient::HandlePushbackOnQueue(self);
  *((uint32_t *)self + 38) = ((uint32_t)(uintptr_t)&off_20928A8);
  if ( *((uint32_t *)self + 47) != 0 )
    opDelete(*((void **)self + 47));
  *((uint32_t *)self + 38) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 180);
  *((uint32_t *)self + 26) = ((uint32_t)(uintptr_t)&off_20928A8);
  if ( *((uint32_t *)self + 35) != 0 )
    opDelete(*((void **)self + 35));
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 132);
  v3 = *((uint32_t *)self + 17);
  *(uint32_t *)v19 = 0;
  v20 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    v7,
    v6,
    (uint32_t *)(v3 + 20),
    (int)(uintptr_t)(self) + 72,
    v19);
  for ( i = *((uint32_t **)self + 21); i != nullptr; i = *((uint32_t **)self + 21) )
  {
    v12 = *i == 0;
    *((uint32_t *)self + 21) = *i;
    if ( v12 )
      *((uint32_t *)self + 22) = 0;
    *i = 0;
    v11 = (void (*)(uint32_t, uint32_t *, uint32_t *, uint32_t))i[1];
    v23[0] = 0;
    v23[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v9, v8));
    v11(0, i, v23, 0);
  }
  if ( *((uint32_t *)self + 13) != -1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *(void **)(*((uint32_t *)self + 12) + 20),
      *((uint32_t *)self + 13),
      (void *)((pthread_mutex_t **)self + 15),
      (*((uint8_t *)self + 56) & 0x40) == 0);
    *(uint32_t *)v19 = 0;
    v20 = (int)(uintptr_t)(sub_18F81E0(v14, v13));
    g4_asio_socket_ops_close(
      v16,
      v15,
      (void *)(uintptr_t)*((uint32_t *)self + 13),
      (uint8_t *)self + 56,
      (uint8_t *)&dword_0 + 1,
      (uint32_t *)v19);
  }
  v17 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 10) = 0;
  v21 = v17;
  v18 = *((volatile int32_t **)self + 11);
  *((uint32_t *)self + 11) = 0;
  v22 = v18;
  boost::detail::shared_count::Destroy(&v22);
  boost::detail::shared_count::Destroy((volatile int32_t **)self + 11);
  g4_std::string::Destroy((char *)self + 20);
  g4_std::string::Destroy((char *)self + 16);
  g4_std::string::Destroy((char *)self + 12);
  g4_std::string::Destroy((char *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleReadContent  (binary VA: 0x136e560)
// Original: glotv3::AsyncHTTPClient::HandleReadContent
// ----------------------------------------------------------------------------
int32_t glotv3::AsyncHTTPClient::HandleReadContent(int a1, int a2, glotv3::AsyncHTTPClient::Self *self, const boost::system::error_code::Self *a4)
{
  int32_t result;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[4];
  typedef uint32_t _g4_t_v19[2];
  typedef int _g4_t_v20[2];
  typedef glotv3::Event::Self *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef glotv3::Event::Self *_g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef uint32_t _g4_t_v27[3];
  typedef int _g4_t_v28[11];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v16)) > _g4_s7 ? (36u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v17)) > _g4_s8 ? (40u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v18)) > _g4_s9 ? (44u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v19)) > _g4_s10 ? (48u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v20)) > _g4_s11 ? (56u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v21)) > _g4_s12 ? (64u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v22)) > _g4_s13 ? (68u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v23)) > _g4_s14 ? (72u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v24)) > _g4_s15 ? (76u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v25)) > _g4_s16 ? (80u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v26)) > _g4_s17 ? (84u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v27)) > _g4_s18 ? (88u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v28)) > _g4_s19 ? (100u + sizeof(_g4_t_v28)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  result = *((uint8_t *)self + 28);
  if ( (uint8_t)result == 0 )
  {
    result = *(uint32_t *)a4;
    if ( *(uint32_t *)a4 != 0 )
    {
      if ( byte_20D3F80 == 0 )
      {
        result = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80);
        if ( result != 0 )
        {
          dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
          result = __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
        }
      }
      if ( *((int **)a4 + 1) != (int *)(uintptr_t)(&dword_20D3F88) || *(uint32_t *)a4 != 2 )
      {
        glotv3::AsyncHTTPClient::HandleStop(a1, (int)(uintptr_t)(&dword_20D3F88), self);
        glotv3::AsyncHTTPClient::HandlePushbackOnQueue(self);
        glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v14), (int)(*(uint32_t *)a4));
        (*(void (**)(uint8_t *))(**((uint32_t **)a4 + 1) + 12))(v18);
        sub_134F3A0((int)(uintptr_t)(v17), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_READING_CONTENT), (int)(uintptr_t)(v18));
        g4_std::string::construct_copy(&v16, v17);
        g4_std::string::append((int)(uintptr_t)(&v16), ". ", 2u);
        sub_134F3A0((int)(uintptr_t)(v15), (int)(uintptr_t)(&v16), (int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS));
        sub_134F3A0((int)(uintptr_t)(v13), (int)(uintptr_t)(v15), (int)(uintptr_t)(&v14));
        sub_134F3A0((int)(uintptr_t)(v12), (int)(uintptr_t)(v13), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v11), (int)(uintptr_t)(v12), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v10), (int)(uintptr_t)(v11), (int)(uintptr_t)(self) + 12);
        glotv3::EventOfError::s_OfType(&v23, &reinterpret_cast<G4Elf32Sym *>(stru_574)->st_other, (int)(uintptr_t)(v10));
        v21 = v23;
        v22 = v24;
        if ( v24 != nullptr )
          __sync_add_and_fetch(v24 + 1, 1);
        glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v25);
        v5 = v25;
        if ( v25 == 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3:"
            ":TrackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
            "px != 0");
          v5 = v25;
        }
        glotv3::TrackingManager::AddEvent(v5, &v21, 1);
        boost::detail::shared_count::Destroy(&v26);
        boost::detail::shared_count::Destroy(&v22);
        boost::detail::shared_count::Destroy(&v24);
        g4_std::string::Destroy(v10);
        g4_std::string::Destroy(v11);
        g4_std::string::Destroy(v12);
        g4_std::string::Destroy(v13);
        g4_std::string::Destroy(v15);
        g4_std::string::Destroy(&v16);
        g4_std::string::Destroy(v17);
        g4_std::string::Destroy(v18);
        g4_std::string::Destroy(&v14);
        return __atomic_exchange_n((volatile int32_t *)self + 6, 16, __ATOMIC_SEQ_CST);
      }
    }
    else
    {
      v19[0] = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x989680u));
      v19[1] = 0;
      boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
        a2,
        (int)(uintptr_t)(self) + 68,
        v19);
      __atomic_exchange_n((volatile int32_t *)self + 6, 15, __ATOMIC_SEQ_CST);
      sub_1367340(v27, (int)(uintptr_t)(glotv3::AsyncHTTPClient::HandleReadContent), 0, (int)(uintptr_t)(self));
      v6 = v27[1];
      v7 = v27[2];
      v9 = v27[0];
      v20[0] = 0;
      v20[1] = (int)(uintptr_t)(sub_18F81E0(v8, v27[0]));
      v28[1] = (int)(uintptr_t)(self) + 48;
      v28[0] = 4096;
      v28[2] = (int)(uintptr_t)(self) + 152;
      v28[3] = 0;
      v28[4] = 0;
      v28[5] = v9;
      v28[6] = v6;
      v28[7] = v7;
      return (int32_t)(uintptr_t)boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
                        v28,
                        v20,
                        0,
                        1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleReadStatusLine  (binary VA: 0x136e9b0)
// Original: glotv3::AsyncHTTPClient::HandleReadStatusLine
// ----------------------------------------------------------------------------
int32_t glotv3::AsyncHTTPClient::HandleReadStatusLine(glotv3::AsyncHTTPClient::Self *self, const boost::system::error_code::Self *a2)
{
  volatile int32_t *v2;
  const boost::system::error_code::Self *v3;
  int32_t result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  char v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  uint8_t *i;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint16_t _g4_t_v36[9];
  typedef uint32_t _g4_t_v37[4];
  typedef int _g4_t_v38[4];
  typedef char _g4_t_v39[4];
  typedef char _g4_t_v40[4];
  typedef int _g4_t_v41;
  typedef char _g4_t_v42[4];
  typedef int _g4_t_v43;
  typedef char _g4_t_v44[4];
  typedef char _g4_t_v45[4];
  typedef char _g4_t_v46[4];
  typedef char _g4_t_v47[4];
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50[4];
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef char _g4_t_v53[4];
  typedef char _g4_t_v54[4];
  typedef char _g4_t_v55[4];
  typedef char _g4_t_v56[4];
  typedef char _g4_t_v57[4];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef glotv3::Event::Self *_g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef glotv3::Event::Self *_g4_t_v64;
  typedef volatile int32_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef volatile int32_t *_g4_t_v67;
  typedef glotv3::Event::Self *_g4_t_v68;
  typedef volatile int32_t *_g4_t_v69;
  typedef glotv3::Event::Self *_g4_t_v70;
  typedef volatile int32_t *_g4_t_v71;
  typedef glotv3::Event::Self *_g4_t_v72;
  typedef volatile int32_t *_g4_t_v73;
  typedef glotv3::Event::Self *_g4_t_v74;
  typedef volatile int32_t *_g4_t_v75;
  typedef uint32_t _g4_t_v76[2];
  typedef uint32_t _g4_t_v77[2];
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint8_t _g4_t_v81[4];
  typedef uint32_t _g4_t_v82[5];
  typedef uint32_t _g4_t_v83[5];
  typedef uint32_t _g4_t_v84[2];
  typedef char _g4_t_v85[4];
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int (**_g4_t_v91)(int);
  typedef int _g4_t_v92;
  typedef uint32_t _g4_t_v93[5];
  typedef char _g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint32_t _g4_t_v96[11];
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v31)) > _g4_s3 ? (4u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v32)) > _g4_s4 ? (4u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v33)) > _g4_s5 ? (4u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v34)) > _g4_s6 ? (12u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v35)) > _g4_s7 ? (12u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (34u + sizeof(_g4_t_v36)) > _g4_s8 ? (34u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v37)) > _g4_s9 ? (52u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v38)) > _g4_s10 ? (68u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v39)) > _g4_s11 ? (84u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v40)) > _g4_s12 ? (88u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v41)) > _g4_s13 ? (92u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v42)) > _g4_s14 ? (96u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v43)) > _g4_s15 ? (100u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v44)) > _g4_s16 ? (104u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v45)) > _g4_s17 ? (108u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v46)) > _g4_s18 ? (112u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v47)) > _g4_s19 ? (116u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v48)) > _g4_s20 ? (120u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v49)) > _g4_s21 ? (124u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v50)) > _g4_s22 ? (128u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v51)) > _g4_s23 ? (132u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v52)) > _g4_s24 ? (136u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v53)) > _g4_s25 ? (140u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v54)) > _g4_s26 ? (144u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v55)) > _g4_s27 ? (148u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v56)) > _g4_s28 ? (152u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v57)) > _g4_s29 ? (156u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v58)) > _g4_s30 ? (160u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (164u + sizeof(_g4_t_v59)) > _g4_s31 ? (164u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v60)) > _g4_s32 ? (168u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v61)) > _g4_s33 ? (172u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v62)) > _g4_s34 ? (176u + sizeof(_g4_t_v62)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v63)) > _g4_s35 ? (180u + sizeof(_g4_t_v63)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v64)) > _g4_s36 ? (184u + sizeof(_g4_t_v64)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v65)) > _g4_s37 ? (188u + sizeof(_g4_t_v65)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v66)) > _g4_s38 ? (192u + sizeof(_g4_t_v66)) : _g4_s38,
    _g4_s40 = (196u + sizeof(_g4_t_v67)) > _g4_s39 ? (196u + sizeof(_g4_t_v67)) : _g4_s39,
    _g4_s41 = (200u + sizeof(_g4_t_v68)) > _g4_s40 ? (200u + sizeof(_g4_t_v68)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v69)) > _g4_s41 ? (204u + sizeof(_g4_t_v69)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v70)) > _g4_s42 ? (208u + sizeof(_g4_t_v70)) : _g4_s42,
    _g4_s44 = (212u + sizeof(_g4_t_v71)) > _g4_s43 ? (212u + sizeof(_g4_t_v71)) : _g4_s43,
    _g4_s45 = (216u + sizeof(_g4_t_v72)) > _g4_s44 ? (216u + sizeof(_g4_t_v72)) : _g4_s44,
    _g4_s46 = (220u + sizeof(_g4_t_v73)) > _g4_s45 ? (220u + sizeof(_g4_t_v73)) : _g4_s45,
    _g4_s47 = (224u + sizeof(_g4_t_v74)) > _g4_s46 ? (224u + sizeof(_g4_t_v74)) : _g4_s46,
    _g4_s48 = (228u + sizeof(_g4_t_v75)) > _g4_s47 ? (228u + sizeof(_g4_t_v75)) : _g4_s47,
    _g4_s49 = (232u + sizeof(_g4_t_v76)) > _g4_s48 ? (232u + sizeof(_g4_t_v76)) : _g4_s48,
    _g4_s50 = (240u + sizeof(_g4_t_v77)) > _g4_s49 ? (240u + sizeof(_g4_t_v77)) : _g4_s49,
    _g4_s51 = (248u + sizeof(_g4_t_v78)) > _g4_s50 ? (248u + sizeof(_g4_t_v78)) : _g4_s50,
    _g4_s52 = (252u + sizeof(_g4_t_v79)) > _g4_s51 ? (252u + sizeof(_g4_t_v79)) : _g4_s51,
    _g4_s53 = (256u + sizeof(_g4_t_v80)) > _g4_s52 ? (256u + sizeof(_g4_t_v80)) : _g4_s52,
    _g4_s54 = (280u + sizeof(_g4_t_v81)) > _g4_s53 ? (280u + sizeof(_g4_t_v81)) : _g4_s53,
    _g4_s55 = (284u + sizeof(_g4_t_v82)) > _g4_s54 ? (284u + sizeof(_g4_t_v82)) : _g4_s54,
    _g4_s56 = (304u + sizeof(_g4_t_v83)) > _g4_s55 ? (304u + sizeof(_g4_t_v83)) : _g4_s55,
    _g4_s57 = (324u + sizeof(_g4_t_v84)) > _g4_s56 ? (324u + sizeof(_g4_t_v84)) : _g4_s56,
    _g4_s58 = (332u + sizeof(_g4_t_v85)) > _g4_s57 ? (332u + sizeof(_g4_t_v85)) : _g4_s57,
    _g4_s59 = (336u + sizeof(_g4_t_v86)) > _g4_s58 ? (336u + sizeof(_g4_t_v86)) : _g4_s58,
    _g4_s60 = (340u + sizeof(_g4_t_v87)) > _g4_s59 ? (340u + sizeof(_g4_t_v87)) : _g4_s59,
    _g4_s61 = (344u + sizeof(_g4_t_v88)) > _g4_s60 ? (344u + sizeof(_g4_t_v88)) : _g4_s60,
    _g4_s62 = (348u + sizeof(_g4_t_v89)) > _g4_s61 ? (348u + sizeof(_g4_t_v89)) : _g4_s61,
    _g4_s63 = (352u + sizeof(_g4_t_v90)) > _g4_s62 ? (352u + sizeof(_g4_t_v90)) : _g4_s62,
    _g4_s64 = (356u + sizeof(_g4_t_v91)) > _g4_s63 ? (356u + sizeof(_g4_t_v91)) : _g4_s63,
    _g4_s65 = (360u + sizeof(_g4_t_v92)) > _g4_s64 ? (360u + sizeof(_g4_t_v92)) : _g4_s64,
    _g4_s66 = (364u + sizeof(_g4_t_v93)) > _g4_s65 ? (364u + sizeof(_g4_t_v93)) : _g4_s65,
    _g4_s67 = (384u + sizeof(_g4_t_v94)) > _g4_s66 ? (384u + sizeof(_g4_t_v94)) : _g4_s66,
    _g4_s68 = (476u + sizeof(_g4_t_v95)) > _g4_s67 ? (476u + sizeof(_g4_t_v95)) : _g4_s67,
    _g4_s69 = (480u + sizeof(_g4_t_v96)) > _g4_s68 ? (480u + sizeof(_g4_t_v96)) : _g4_s68
  };
  alignas(16) uint8_t _g4_sf[_g4_s69];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 34u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 156u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 160u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 164u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 168u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 172u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 176u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 180u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 184u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 188u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 192u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 196u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 200u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 204u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 208u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 212u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 216u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 220u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 224u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 228u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 232u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 240u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 248u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 252u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 256u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 280u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 284u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 304u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 324u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 332u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 336u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 340u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 344u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 348u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 352u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 356u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 360u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 364u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 384u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 476u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 480u);

  v96[7] = (uint32_t)(uintptr_t)(&self);
  v2 = (volatile int32_t *)self;
  v3 = a2;
  result = *((uint8_t *)self + 28);
  if ( (uint8_t)result == 0 )
  {
    if ( *(uint32_t *)a2 != 0 )
    {
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v43), (int)(*(uint32_t *)a2));
      (*(void (**)(char *))(**((uint32_t **)v3 + 1) + 12))(v39);
      sub_134F3A0((int)(uintptr_t)(v40), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_STATUS_LINE), (int)(uintptr_t)(v39));
      g4_std::string::construct_copy(&v41, v40);
      g4_std::string::append((int)(uintptr_t)(&v41), ". ", 2u);
      sub_134F3A0((int)(uintptr_t)(v42), (int)(uintptr_t)(&v41), (int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS));
      sub_134F3A0((int)(uintptr_t)(v44), (int)(uintptr_t)(v42), (int)(uintptr_t)(&v43));
      sub_134F3A0((int)(uintptr_t)(v45), (int)(uintptr_t)(v44), (int)(uintptr_t)(&glotv3::system::HASHTAG));
      sub_134F3A0((int)(uintptr_t)(v46), (int)(uintptr_t)(v45), (int)(uintptr_t)(&glotv3::system::PACKAGE));
      sub_134F3A0((int)(uintptr_t)(v47), (int)(uintptr_t)(v46), (int)(uintptr_t)(v2 + 3));
      glotv3::EventOfError::s_OfType(&v62, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_574)->st_size + 2, (int)(uintptr_t)(v47));
      v64 = v62;
      v65 = v63;
      if ( v63 != nullptr )
        __sync_add_and_fetch(v63 + 1, 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v60);
      v5 = v60;
      if ( v60 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v5 = v60;
      }
      glotv3::TrackingManager::AddEvent(v5, &v64, 1);
      boost::detail::shared_count::Destroy(&v61);
      boost::detail::shared_count::Destroy(&v65);
      boost::detail::shared_count::Destroy(&v63);
      g4_std::string::Destroy(v47);
      g4_std::string::Destroy(v46);
      g4_std::string::Destroy(v45);
      g4_std::string::Destroy(v44);
      g4_std::string::Destroy(v42);
      g4_std::string::Destroy(&v41);
      g4_std::string::Destroy(v40);
      g4_std::string::Destroy(v39);
      g4_std::string::Destroy(&v43);
      glotv3::AsyncHTTPClient::HandleStop(v7, v6, (glotv3::AsyncHTTPClient::Self *)v2);
      glotv3::AsyncHTTPClient::HandlePushbackOnQueue((glotv3::AsyncHTTPClient::Self *)v2);
      return __atomic_exchange_n(v2 + 6, 9, __ATOMIC_SEQ_CST);
    }
    else
    {
      sub_1900810(v93);
      v95 = 0;
      LOWORD(v96[0]) = 0;
      memset(&v96[1], 0, 16);
      v92 = 0;
      v91 = (int (**)(int))(uintptr_t)(&off_20AA52C);
      v93[0] = (uint32_t)(uintptr_t)(&off_20AA540);
      sub_19119D0(v93, v2 + 38);
      v48 = &dword_213B814;
      v37[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      sub_19056D0(&v91, &v48);
      sub_1915250(&v91, &v36[1]);
      v9 = *(uint32_t *)((char *)v96 + (uint32_t)(uintptr_t)(*(v91 - 3)));
      if ( v9 == 0 )
        sub_18FFF30(v8);
      if ( *(uint8_t *)(v9 + 28) != 0 )
      {
        v10 = *(uint8_t *)(v9 + 39);
      }
      else
      {
        v31 = *(uint32_t *)((char *)v96 + (uint32_t)(uintptr_t)(*(v91 - 3)));
        sub_18FFC70(v31);
        v10 = G4_VCALL<int>(v31, 24, 10);
      }
      sub_1905A30(&v91, v37, v10);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v66);
      v34 = v66;
      if ( v66 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          646,
          "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = glotv3::Trac"
          "kingManager, typename boost::detail::sp_dereference<T>::type = glotv3::TrackingManager::Self&]",
          "px != 0");
        v34 = v66;
      }
      boost::detail::shared_count::Destroy(&v67);
      if ( (v94 & 5) != 0
        || (sub_193A6F0(&v49, &v48, 0, 5), v32 = g4_std::string::compare((int)(uintptr_t)(&v49), "HTTP/"), g4_std::string::Destroy(&v49), v32 != 0) )
      {
        sub_134F3A0((int)(uintptr_t)(v52), (int)(uintptr_t)(&glotv3::errors::NETWORK_INVALID_HTTP_RESPONSE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v51), (int)(uintptr_t)(v52), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v50), (int)(uintptr_t)(v51), (int)(uintptr_t)(v2 + 3));
        glotv3::EventOfError::s_OfType(&v70, &reinterpret_cast<G4Elf32Sym *>(stru_574)->st_size, (int)(uintptr_t)(v50));
        v68 = v70;
        v69 = v71;
        if ( v71 != nullptr )
          __sync_add_and_fetch(v71 + 1, 1);
        glotv3::TrackingManager::AddEvent(v34, &v68, 1);
        boost::detail::shared_count::Destroy(&v69);
        boost::detail::shared_count::Destroy(&v71);
        g4_std::string::Destroy(v50);
        g4_std::string::Destroy(v51);
        g4_std::string::Destroy(v52);
        glotv3::AsyncHTTPClient::HandleStop(v12, v11, (glotv3::AsyncHTTPClient::Self *)v2);
        glotv3::AsyncHTTPClient::HandlePushbackOnQueue((glotv3::AsyncHTTPClient::Self *)v2);
        __atomic_exchange_n(v2 + 6, 10, __ATOMIC_SEQ_CST);
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      v15 = *(uint32_t *)&v36[1];
      if ( *(uint32_t *)&v36[1] == 200 )
      {
        if ( v14 != 0 )
        {
          v76[0] = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x989680u));
          v76[1] = 0;
          boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
            v13,
            (int)(uintptr_t)(v2 + 17),
            v76);
          __atomic_exchange_n(v2 + 6, 12, __ATOMIC_SEQ_CST);
          sub_1367340(&v78, (int)(uintptr_t)(glotv3::AsyncHTTPClient::HandleReadHeaders), 0, (int)(uintptr_t)(v2));
          sub_134F3A0((int)(uintptr_t)(v57), (int)(uintptr_t)(&glotv3::system::NIX_EOL), (int)(uintptr_t)(&glotv3::system::NIX_EOL));
          v28 = v78;
          v30 = v79;
          v35 = v80;
          v77[0] = 0;
          v77[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v79, v78));
          v84[0] = (uint32_t)(uintptr_t)(v2 + 12);
          v84[1] = (uint32_t)(uintptr_t)(v2 + 38);
          g4_std::string::construct_copy(v85, v57);
          v88 = v28;
          v90 = v35;
          v89 = v30;
          v86 = 0;
          v87 = 0;
          sub_136B0B0(v84, v77, 0, 1);
          g4_std::string::Destroy(v85);
          g4_std::string::Destroy(v57);
        }
      }
      else
      {
        do
          v16 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
        while ( v16 == 4 );
        if ( v16 != 0 )
        {
          v29 = v16;
          v27 = (int)(uintptr_t)(sub_18F81E0(v18, v17));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(v36));
          sub_19042E0(v82, &v58);
          g4_std::string::Destroy(&v58);
          v82[3] = v27;
          v82[2] = v29;
          v82[4] = (uint32_t)(uintptr_t)(&dword_213B814);
          v82[0] = ((uint32_t)(uintptr_t)&off_20495E0);
          std::terminate();
        }
        v38[0] = (int)(uintptr_t)(&dword_213B814);
        for ( i = v81; ; --i )
        {
          v20 = v15 % 0xA + 48;
          v15 /= 0xAu;
          *(i - 1) = v20;
          if ( v15 == 0 )
            break;
        }
        sub_193A9B0((int)(uintptr_t)(v38), 0, dword_213B808[0], i - 1, v81 - (i - 1));
        do
          v21 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
        while ( v21 == 4 );
        v24 = v21;
        if ( v21 != 0 )
        {
          v33 = (int)(uintptr_t)(sub_18F81E0(v23, v22));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(v36) + 1);
          sub_19042E0(v83, &v59);
          g4_std::string::Destroy(&v59);
          v83[3] = v33;
          v83[2] = v24;
          v83[4] = (uint32_t)(uintptr_t)(&dword_213B814);
          v83[0] = ((uint32_t)(uintptr_t)&off_20495E0);
          std::terminate();
        }
        sub_134F3A0((int)(uintptr_t)(v56), (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_200_HTTP_STATUS_CODE), (int)(uintptr_t)(v38));
        sub_134F3A0((int)(uintptr_t)(v55), (int)(uintptr_t)(v56), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v54), (int)(uintptr_t)(v55), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v53), (int)(uintptr_t)(v54), (int)(uintptr_t)(v2 + 3));
        glotv3::EventOfError::s_OfType(&v74, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_574)->st_size + 1, (int)(uintptr_t)(v53));
        v72 = v74;
        v73 = v75;
        if ( v75 != nullptr )
          __sync_add_and_fetch(v75 + 1, 1);
        glotv3::TrackingManager::AddEvent(v34, &v72, 1);
        boost::detail::shared_count::Destroy(&v73);
        boost::detail::shared_count::Destroy(&v75);
        g4_std::string::Destroy(v53);
        g4_std::string::Destroy(v54);
        g4_std::string::Destroy(v55);
        g4_std::string::Destroy(v56);
        g4_std::string::Destroy(v38);
        glotv3::AsyncHTTPClient::HandleStop(v26, v25, (glotv3::AsyncHTTPClient::Self *)v2);
        glotv3::AsyncHTTPClient::HandlePushbackOnQueue((glotv3::AsyncHTTPClient::Self *)v2);
        __atomic_exchange_n(v2 + 6, 11, __ATOMIC_SEQ_CST);
      }
      g4_std::string::Destroy(v37);
      g4_std::string::Destroy(&v48);
      v92 = 0;
      v91 = (int (**)(int))(uintptr_t)(&off_20AA52C);
      v93[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      return sub_1900B90(v93);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleWriteRequest  (binary VA: 0x136f4c0)
// Original: glotv3::AsyncHTTPClient::HandleWriteRequest
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleWriteRequest(glotv3::AsyncHTTPClient::Self *self, const boost::system::error_code::Self *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef uint8_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[4];
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef glotv3::Event::Self *_g4_t_v20;
  typedef volatile int32_t *_g4_t_v21;
  typedef glotv3::Event::Self *_g4_t_v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef uint32_t _g4_t_v24[2];
  typedef uint32_t _g4_t_v25[2];
  typedef uint32_t _g4_t_v26[2];
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[2];
  typedef uint8_t _g4_t_v29[4];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v14)) > _g4_s6 ? (32u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v15)) > _g4_s7 ? (36u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v16)) > _g4_s8 ? (40u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v17)) > _g4_s9 ? (44u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v18)) > _g4_s10 ? (48u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v19)) > _g4_s11 ? (52u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v20)) > _g4_s12 ? (56u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v21)) > _g4_s13 ? (60u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v22)) > _g4_s14 ? (64u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v23)) > _g4_s15 ? (68u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v24)) > _g4_s16 ? (72u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v25)) > _g4_s17 ? (80u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v26)) > _g4_s18 ? (88u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v27)) > _g4_s19 ? (96u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v28)) > _g4_s20 ? (100u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v29)) > _g4_s21 ? (108u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v30)) > _g4_s22 ? (112u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v31)) > _g4_s23 ? (116u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v32)) > _g4_s24 ? (120u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v33)) > _g4_s25 ? (124u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v34)) > _g4_s26 ? (128u + sizeof(_g4_t_v34)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);

  result = *((uint8_t *)self + 28);
  if ( (uint8_t)result == 0 )
  {
    if ( *(uint32_t *)a2 != 0 )
    {
      glotv3::AsyncHTTPClient::HandleStop(v2, *(uint32_t *)a2, self);
      glotv3::AsyncHTTPClient::HandlePushbackOnQueue(self);
      __atomic_exchange_n((volatile int32_t *)self + 6, 7, __ATOMIC_SEQ_CST);
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v13), (int)(*(uint32_t *)a2));
      (*(void (**)(uint8_t *))(**((uint32_t **)a2 + 1) + 12))(v9);
      sub_134F3A0((int)(uintptr_t)(v10), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_WRITE), (int)(uintptr_t)(v9));
      g4_std::string::construct_copy(&v11, v10);
      g4_std::string::append((int)(uintptr_t)(&v11), ". ", 2u);
      sub_134F3A0((int)(uintptr_t)(v12), (int)(uintptr_t)(&v11), (int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS));
      sub_134F3A0((int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(&v13));
      sub_134F3A0((int)(uintptr_t)(v15), (int)(uintptr_t)(v14), (int)(uintptr_t)(&glotv3::system::HASHTAG));
      sub_134F3A0((int)(uintptr_t)(v16), (int)(uintptr_t)(v15), (int)(uintptr_t)(&glotv3::system::PACKAGE));
      sub_134F3A0((int)(uintptr_t)(&v17), (int)(uintptr_t)(v16), (int)(uintptr_t)(self) + 12);
      glotv3::EventOfError::s_OfType(&v20, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_574)->st_value + 3, (int)(uintptr_t)(&v17));
      v22 = v20;
      v23 = v21;
      if ( v21 != nullptr )
        __sync_add_and_fetch(v21 + 1, 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v18);
      v4 = v18;
      if ( v18 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v4 = v18;
      }
      glotv3::TrackingManager::AddEvent(v4, &v22, 1);
      boost::detail::shared_count::Destroy(&v19);
      boost::detail::shared_count::Destroy(&v23);
      boost::detail::shared_count::Destroy(&v21);
      g4_std::string::Destroy(&v17);
      g4_std::string::Destroy(v16);
      g4_std::string::Destroy(v15);
      g4_std::string::Destroy(v14);
      g4_std::string::Destroy(v12);
      g4_std::string::Destroy(&v11);
      g4_std::string::Destroy(v10);
      g4_std::string::Destroy(v9);
      return ((g4_std::string::Destroy(&v13)), (int)0);
    }
    else
    {
      v24[0] = (uint32_t)(uintptr_t)(&unk_1C9C380);
      v24[1] = 0;
      boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
        0,
        (int)(uintptr_t)(self) + 68,
        v24);
      __atomic_exchange_n((volatile int32_t *)self + 6, 8, __ATOMIC_SEQ_CST);
      sub_1367340(v26, (int)(uintptr_t)(glotv3::AsyncHTTPClient::HandleReadStatusLine), 0, (int)(uintptr_t)(self));
      v5 = v26[0];
      v6 = v26[1];
      v8 = v27;
      v25[0] = 0;
      v25[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v7, v27));
      v28[0] = (uint32_t)(uintptr_t)((char *)self + 48);
      v28[1] = (uint32_t)(uintptr_t)((char *)self + 152);
      g4_std::string::construct_copy(v29, &glotv3::system::NIX_EOL);
      v34 = v8;
      v32 = v5;
      v33 = v6;
      v30 = 0;
      v31 = 0;
      sub_136B0B0(v28, v25, 0, 1);
      return ((g4_std::string::Destroy(v29)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleNotificationOfSpy  (binary VA: 0x1370e30)
// Original: glotv3::AsyncHTTPClient::HandleNotificationOfSpy
// ----------------------------------------------------------------------------
void glotv3::AsyncHTTPClient::HandleNotificationOfSpy(glotv3::AsyncHTTPClient::Self *self, unsigned int a2, int a3)
{
  typedef int _g4_t_v3;
  typedef volatile int32_t *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v3);
  if ( v3 == 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = glotv3::Tracking"
      "Manager, typename boost::detail::sp_dereference<T>::type = glotv3::TrackingManager::Self&]",
      "px != 0");
  boost::detail::shared_count::Destroy(&v4);
  if ( glotv3::TrackingManager::s_IsSpyStreamLoggingActive != 0 || glotv3::TrackingManager::s_IsSpyTcpLoggingActive != 0 )
    sub_136F870((int)(uintptr_t)(self), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleConnect  (binary VA: 0x1370ee0)
// Original: glotv3::AsyncHTTPClient::HandleConnect
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleConnect(int a1, int a2, glotv3::AsyncHTTPClient::Self *self, const boost::system::error_code::Self *a4)
{
  int result;
  int v5;
  glotv3::TrackingManager::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  size_t n;
  size_t v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  typedef uint32_t *_g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_GGID;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[7];
  typedef uint8_t _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[4];
  typedef int _g4_t_v49;
  typedef uint8_t _g4_t_v50[4];
  typedef uint8_t _g4_t_v51[4];
  typedef uint8_t _g4_t_v52[4];
  typedef uint8_t _g4_t_v53[4];
  typedef void *_g4_t_s1;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef volatile int32_t *_g4_t_v65;
  typedef glotv3::Event::Self *_g4_t_v66;
  typedef volatile int32_t *_g4_t_v67;
  typedef glotv3::Event::Self *_g4_t_v68;
  typedef volatile int32_t *_g4_t_v69;
  typedef glotv3::TrackingManager::Self *_g4_t_v70;
  typedef volatile int32_t *_g4_t_v71;
  typedef uint32_t _g4_t_v72[2];
  typedef uint32_t _g4_t_v73[2];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77[9];
  typedef int (**_g4_t_v78)(int);
  typedef uint32_t _g4_t_v79[29];
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v38)) > _g4_s2 ? (12u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v39)) > _g4_s3 ? (16u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v40)) > _g4_s4 ? (20u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v41)) > _g4_s5 ? (20u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_GGID)) > _g4_s6 ? (28u + sizeof(_g4_t_GGID)) : _g4_s6,
    _g4_s8 = (51u + sizeof(_g4_t_v43)) > _g4_s7 ? (51u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v44)) > _g4_s8 ? (52u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v45)) > _g4_s9 ? (56u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v46)) > _g4_s10 ? (64u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v47)) > _g4_s11 ? (68u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v48)) > _g4_s12 ? (72u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v49)) > _g4_s13 ? (76u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v50)) > _g4_s14 ? (80u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v51)) > _g4_s15 ? (84u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v52)) > _g4_s16 ? (88u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v53)) > _g4_s17 ? (92u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_s1)) > _g4_s18 ? (96u + sizeof(_g4_t_s1)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v55)) > _g4_s19 ? (100u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v56)) > _g4_s20 ? (104u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v57)) > _g4_s21 ? (108u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v58)) > _g4_s22 ? (112u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v59)) > _g4_s23 ? (116u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v60)) > _g4_s24 ? (120u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v61)) > _g4_s25 ? (124u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v62)) > _g4_s26 ? (128u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v63)) > _g4_s27 ? (132u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v64)) > _g4_s28 ? (136u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v65)) > _g4_s29 ? (140u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v66)) > _g4_s30 ? (144u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v67)) > _g4_s31 ? (148u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v68)) > _g4_s32 ? (152u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v69)) > _g4_s33 ? (156u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v70)) > _g4_s34 ? (160u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v71)) > _g4_s35 ? (164u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v72)) > _g4_s36 ? (168u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v73)) > _g4_s37 ? (176u + sizeof(_g4_t_v73)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v74)) > _g4_s38 ? (184u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v75)) > _g4_s39 ? (188u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v76)) > _g4_s40 ? (192u + sizeof(_g4_t_v76)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v77)) > _g4_s41 ? (196u + sizeof(_g4_t_v77)) : _g4_s41,
    _g4_s43 = (232u + sizeof(_g4_t_v78)) > _g4_s42 ? (232u + sizeof(_g4_t_v78)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v79)) > _g4_s43 ? (236u + sizeof(_g4_t_v79)) : _g4_s43,
    _g4_s45 = (352u + sizeof(_g4_t_v80)) > _g4_s44 ? (352u + sizeof(_g4_t_v80)) : _g4_s44,
    _g4_s46 = (353u + sizeof(_g4_t_v81)) > _g4_s45 ? (353u + sizeof(_g4_t_v81)) : _g4_s45,
    _g4_s47 = (356u + sizeof(_g4_t_v82)) > _g4_s46 ? (356u + sizeof(_g4_t_v82)) : _g4_s46,
    _g4_s48 = (360u + sizeof(_g4_t_v83)) > _g4_s47 ? (360u + sizeof(_g4_t_v83)) : _g4_s47,
    _g4_s49 = (364u + sizeof(_g4_t_v84)) > _g4_s48 ? (364u + sizeof(_g4_t_v84)) : _g4_s48,
    _g4_s50 = (368u + sizeof(_g4_t_v85)) > _g4_s49 ? (368u + sizeof(_g4_t_v85)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_GGID &GGID = *reinterpret_cast<_g4_t_GGID *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 51u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 92u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 96u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 100u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 104u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 116u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 120u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 128u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 132u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 136u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 140u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 144u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 148u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 152u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 156u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 160u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 164u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 168u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 176u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 184u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 188u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 192u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 196u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 232u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 236u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 352u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 353u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 356u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 360u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 364u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 368u);

  result = *((uint8_t *)self + 28);
  if ( (uint8_t)result == 0 )
  {
    if ( *(uint32_t *)a4 != 0 )
    {
      glotv3::AsyncHTTPClient::HandleStop(a1, a2, self);
      glotv3::AsyncHTTPClient::HandlePushbackOnQueue(self);
      __atomic_exchange_n((volatile int32_t *)self + 6, 5, __ATOMIC_SEQ_CST);
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v49), (int)(*(uint32_t *)a4));
      (*(void (**)(uint8_t *))(**((uint32_t **)a4 + 1) + 12))(&v45[4]);
      sub_134F3A0((int)(uintptr_t)(v46), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_CONNECT), (int)(uintptr_t)(&v45[4]));
      g4_std::string::construct_copy(&v47, v46);
      g4_std::string::append((int)(uintptr_t)(&v47), ". ", 2u);
      sub_134F3A0((int)(uintptr_t)(v48), (int)(uintptr_t)(&v47), (int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS));
      sub_134F3A0((int)(uintptr_t)(v50), (int)(uintptr_t)(v48), (int)(uintptr_t)(&v49));
      sub_134F3A0((int)(uintptr_t)(v51), (int)(uintptr_t)(v50), (int)(uintptr_t)(&glotv3::system::HASHTAG));
      sub_134F3A0((int)(uintptr_t)(v52), (int)(uintptr_t)(v51), (int)(uintptr_t)(&glotv3::system::PACKAGE));
      sub_134F3A0((int)(uintptr_t)(v53), (int)(uintptr_t)(v52), (int)(uintptr_t)(self) + 12);
      glotv3::EventOfError::s_OfType(&v66, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_574)->st_value + 2, (int)(uintptr_t)(v53));
      v68 = v66;
      v69 = v67;
      if ( v67 != nullptr )
        __sync_add_and_fetch(v67 + 1, 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v64);
      v5 = v64;
      if ( v64 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v5 = v64;
      }
      glotv3::TrackingManager::AddEvent(v5, &v68, 1);
      boost::detail::shared_count::Destroy(&v65);
      boost::detail::shared_count::Destroy(&v69);
      boost::detail::shared_count::Destroy(&v67);
      g4_std::string::Destroy(v53);
      g4_std::string::Destroy(v52);
      g4_std::string::Destroy(v51);
      g4_std::string::Destroy(v50);
      g4_std::string::Destroy(v48);
      g4_std::string::Destroy(&v47);
      g4_std::string::Destroy(v46);
      g4_std::string::Destroy(&v45[4]);
      return ((g4_std::string::Destroy(&v49)), (int)0);
    }
    else
    {
      sub_1900810(v79);
      v79[28] = 0;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v78 = (int (**)(int))(uintptr_t)(&off_20AACCC);
      v84 = 0;
      v85 = 0;
      v79[0] = (uint32_t)(uintptr_t)(&off_20AACE0);
      sub_19119D0(v79, (char *)self + 104);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "Connection: close", (int)(uintptr_t)(&v43));
      v40 = *(uint32_t *)(*((uint32_t *)self + 2) - 12);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Content-Length: ", (int)(uintptr_t)(&v44));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Content-Type: application/json", (int)(uintptr_t)(&v44) + 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v70);
      v6 = v70;
      if ( v70 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v6 = v70;
      }
      GGID = glotv3::TrackingManager::GetGGID(v6);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "X-ETS-ggi: ", (int)(uintptr_t)(&v44) + 2);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "User-Agent: GLOTv3/", (int)(uintptr_t)(&v44) + 3);
      v36 = *((uint32_t **)self + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Host: ", (int)(uintptr_t)(v45));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), " HTTP/1.1", (int)(uintptr_t)(&v45[1]));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "POST ", (int)(uintptr_t)(&v45[2]));
      v7 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v78, v62, *(uint32_t *)(v62 - 12)));
      v8 = (int)(uintptr_t)(g4_std_compat::ostream_write(v7, glotv3::system::BACKSLASH, *(uint32_t *)(glotv3::system::BACKSLASH - 12)));
      v9 = (int)(uintptr_t)(g4_std_compat::ostream_write(v8, v61, *(uint32_t *)(v61 - 12)));
      v10 = (int)(uintptr_t)(g4_std_compat::ostream_write(v9, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      v11 = (int)(uintptr_t)(g4_std_compat::ostream_write(v10, v60, *(uint32_t *)(v60 - 12)));
      v12 = (int)(uintptr_t)(g4_std_compat::ostream_write(v11, *v36, *(uint32_t *)(*v36 - 12)));
      v13 = (int)(uintptr_t)(g4_std_compat::ostream_write(v12, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      v14 = (int)(uintptr_t)(g4_std_compat::ostream_write(v13, v59, *(uint32_t *)(v59 - 12)));
      v15 = (int)(uintptr_t)(sub_192D8B0(v14, 852));
      v16 = (int)(uintptr_t)(g4_std_compat::ostream_write(v15, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      v17 = (int)(uintptr_t)(g4_std_compat::ostream_write(v16, v58, *(uint32_t *)(v58 - 12)));
      v18 = (int)(uintptr_t)(sub_192D8B0(v17, GGID));
      v19 = (int)(uintptr_t)(g4_std_compat::ostream_write(v18, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      v20 = (int)(uintptr_t)(g4_std_compat::ostream_write(v19, v57, *(uint32_t *)(v57 - 12)));
      v21 = (int)(uintptr_t)(g4_std_compat::ostream_write(v20, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      v22 = (int)(uintptr_t)(g4_std_compat::ostream_write(v21, v56, *(uint32_t *)(v56 - 12)));
      v23 = (int)(uintptr_t)(sub_192D8B0(v22, v40));
      v24 = (int)(uintptr_t)(g4_std_compat::ostream_write(v23, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      v25 = (int)(uintptr_t)(g4_std_compat::ostream_write(v24, v55, *(uint32_t *)(v55 - 12)));
      g4_std_compat::ostream_write(v25, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12));
      g4_std::string::Destroy(&v62);
      g4_std::string::Destroy(&v61);
      g4_std::string::Destroy(&v60);
      g4_std::string::Destroy(&v59);
      g4_std::string::Destroy(&v58);
      boost::detail::shared_count::Destroy(&v71);
      g4_std::string::Destroy(&v57);
      g4_std::string::Destroy(&v56);
      g4_std::string::Destroy(&v55);
      glotv3::Porting::GetPlatformString((glotv3::Porting::Self *)&s1);
      n = *((uint32_t *)s1 - 3);
      v27 = *((uint32_t *)glotv3::system::ETS_NOT_AVAILABLE_STRING - 3);
      v37 = n;
      if ( v27 <= n )
        n = *((uint32_t *)glotv3::system::ETS_NOT_AVAILABLE_STRING - 3);
      if ( memcmp(s1, glotv3::system::ETS_NOT_AVAILABLE_STRING, n) != 0 || v37 != v27 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "X-ETS-platform: ", (int)(uintptr_t)(&v45[3]));
        v34 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v78, v63, *(uint32_t *)(v63 - 12)));
        v35 = (int)(uintptr_t)(g4_std_compat::ostream_write(v34, s1, *((uint32_t *)s1 - 3)));
        g4_std_compat::ostream_write(v35, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12));
        g4_std::string::Destroy(&v63);
      }
      v28 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v78, glotv3::system::NIX_EOL, *(uint32_t *)(glotv3::system::NIX_EOL - 12)));
      g4_std_compat::ostream_write(v28, *((uint32_t *)self + 2), *(uint32_t *)(*((uint32_t *)self + 2) - 12));
      v72[0] = 60000000;
      v72[1] = 0;
      boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
        v29,
        (int)(uintptr_t)(self) + 68,
        v72);
      __atomic_exchange_n((volatile int32_t *)self + 6, 6, __ATOMIC_SEQ_CST);
      sub_1367340(&v74, (int)(uintptr_t)((int (*)(glotv3::AsyncHTTPClient::Self *, const boost::system::error_code::Self *))glotv3::AsyncHTTPClient::HandleWriteRequest), 0, (int)(uintptr_t)(self));
      v30 = *((uint32_t *)self + 28);
      v31 = *((uint32_t *)self + 31) - v30;
      v38 = v74;
      v39 = v75;
      v41 = v76;
      sub_18F81E0(v75, v74);
      v77[0] = (int)(uintptr_t)(self) + 48;
      v77[5] = (int)(uintptr_t)(self) + 104;
      v32 = 0x10000;
      v77[6] = v38;
      if ( v31 <= 0x10000 )
        v32 = v31;
      v77[8] = v41;
      v73[1] = v32;
      v33 = *((uint32_t *)self + 12);
      v77[1] = v30;
      v77[2] = v31;
      v77[7] = v39;
      v73[0] = v30;
      v77[4] = 0;
      v77[3] = 1;
      sub_1368150(v33, (int)(uintptr_t)(self) + 52, v73, v77);
      glotv3::AsyncHTTPClient::HandleNotificationOfSpy(self, 0, 0);
      g4_std::string::Destroy(&s1);
      v78 = (int (**)(int))(uintptr_t)(&off_20AACCC);
      v79[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      return sub_1900B90(v79);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleStatusCode  (binary VA: 0x1371880)
// Original: glotv3::AsyncHTTPClient::HandleStatusCode
// ----------------------------------------------------------------------------
int32_t glotv3::AsyncHTTPClient::HandleStatusCode(glotv3::AsyncHTTPClient::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  uint8_t *i;
  int v8;
  int v9;
  int v10;
  int v11;
  glotv3::TrackingManager::Self *v12;
  int v13;
  int32_t result;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef glotv3::AsyncHTTPClient::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23[4];
  typedef char _g4_t_v24[4];
  typedef char _g4_t_v25[4];
  typedef char _g4_t_v26[4];
  typedef char _g4_t_v27[4];
  typedef char _g4_t_v28[4];
  typedef char _g4_t_v29[4];
  typedef char _g4_t_v30[4];
  typedef char _g4_t_v31[4];
  typedef char _g4_t_v32[4];
  typedef char _g4_t_v33[4];
  typedef char _g4_t_v34[4];
  typedef char _g4_t_v35[4];
  typedef char _g4_t_v36[4];
  typedef char _g4_t_v37[4];
  typedef char _g4_t_v38[4];
  typedef char _g4_t_v39[4];
  typedef char _g4_t_v40[4];
  typedef char _g4_t_v41[4];
  typedef char _g4_t_v42[4];
  typedef char _g4_t_v43[4];
  typedef char _g4_t_v44[4];
  typedef char _g4_t_v45[4];
  typedef char _g4_t_v46[4];
  typedef char _g4_t_v47[4];
  typedef char _g4_t_v48[4];
  typedef char _g4_t_v49[4];
  typedef char _g4_t_v50[4];
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef char _g4_t_v54[4];
  typedef char _g4_t_v55[4];
  typedef char _g4_t_v56[4];
  typedef char _g4_t_v57[4];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef glotv3::TrackingManager::Self *_g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef glotv3::Event::Self *_g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef glotv3::Event::Self *_g4_t_v64;
  typedef volatile int32_t *_g4_t_v65;
  typedef glotv3::Event::Self *_g4_t_v66;
  typedef volatile int32_t *_g4_t_v67;
  typedef glotv3::Event::Self *_g4_t_v68;
  typedef volatile int32_t *_g4_t_v69;
  typedef glotv3::Event::Self *_g4_t_v70;
  typedef volatile int32_t *_g4_t_v71;
  typedef glotv3::Event::Self *_g4_t_v72;
  typedef volatile int32_t *_g4_t_v73;
  typedef glotv3::Event::Self *_g4_t_v74;
  typedef volatile int32_t *_g4_t_v75;
  typedef glotv3::Event::Self *_g4_t_v76;
  typedef volatile int32_t *_g4_t_v77;
  typedef glotv3::Event::Self *_g4_t_v78;
  typedef volatile int32_t *_g4_t_v79;
  typedef glotv3::Event::Self *_g4_t_v80;
  typedef volatile int32_t *_g4_t_v81;
  typedef glotv3::Event::Self *_g4_t_v82;
  typedef volatile int32_t *_g4_t_v83;
  typedef glotv3::Event::Self *_g4_t_v84;
  typedef volatile int32_t *_g4_t_v85;
  typedef glotv3::Event::Self *_g4_t_v86;
  typedef volatile int32_t *_g4_t_v87;
  typedef glotv3::Event::Self *_g4_t_v88;
  typedef volatile int32_t *_g4_t_v89;
  typedef glotv3::Event::Self *_g4_t_v90;
  typedef volatile int32_t *_g4_t_v91;
  typedef glotv3::Event::Self *_g4_t_v92;
  typedef volatile int32_t *_g4_t_v93;
  typedef glotv3::Event::Self *_g4_t_v94;
  typedef volatile int32_t *_g4_t_v95;
  typedef glotv3::Event::Self *_g4_t_v96;
  typedef volatile int32_t *_g4_t_v97;
  typedef glotv3::Event::Self *_g4_t_v98;
  typedef volatile int32_t *_g4_t_v99;
  typedef glotv3::Event::Self *_g4_t_v100;
  typedef volatile int32_t *_g4_t_v101;
  typedef glotv3::Event::Self *_g4_t_v102;
  typedef volatile int32_t *_g4_t_v103;
  typedef glotv3::Event::Self *_g4_t_v104;
  typedef volatile int32_t *_g4_t_v105;
  typedef glotv3::Event::Self *_g4_t_v106;
  typedef volatile int32_t *_g4_t_v107;
  typedef glotv3::Event::Self *_g4_t_v108;
  typedef volatile int32_t *_g4_t_v109;
  typedef glotv3::Event::Self *_g4_t_v110;
  typedef volatile int32_t *_g4_t_v111;
  typedef glotv3::Event::Self *_g4_t_v112;
  typedef volatile int32_t *_g4_t_v113;
  typedef uint8_t _g4_t_v114[4];
  typedef uint32_t _g4_t_v115[5];
  typedef uint32_t _g4_t_v116[11];
  enum : size_t {
    _g4_s0 = 576u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v17)) > _g4_s2 ? (4u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v19)) > _g4_s4 ? (34u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v20)) > _g4_s5 ? (36u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v23)) > _g4_s8 ? (56u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v24)) > _g4_s9 ? (60u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v25)) > _g4_s10 ? (64u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v26)) > _g4_s11 ? (68u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v27)) > _g4_s12 ? (72u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v28)) > _g4_s13 ? (76u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v29)) > _g4_s14 ? (80u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v30)) > _g4_s15 ? (84u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v31)) > _g4_s16 ? (88u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v32)) > _g4_s17 ? (92u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v33)) > _g4_s18 ? (96u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v34)) > _g4_s19 ? (100u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v35)) > _g4_s20 ? (104u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v36)) > _g4_s21 ? (108u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v37)) > _g4_s22 ? (112u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v38)) > _g4_s23 ? (116u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v39)) > _g4_s24 ? (120u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v40)) > _g4_s25 ? (124u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v41)) > _g4_s26 ? (128u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v42)) > _g4_s27 ? (132u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v43)) > _g4_s28 ? (136u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v44)) > _g4_s29 ? (140u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v45)) > _g4_s30 ? (144u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v46)) > _g4_s31 ? (148u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v47)) > _g4_s32 ? (152u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v48)) > _g4_s33 ? (156u + sizeof(_g4_t_v48)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v49)) > _g4_s34 ? (160u + sizeof(_g4_t_v49)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v50)) > _g4_s35 ? (164u + sizeof(_g4_t_v50)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v51)) > _g4_s36 ? (168u + sizeof(_g4_t_v51)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v52)) > _g4_s37 ? (172u + sizeof(_g4_t_v52)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v53)) > _g4_s38 ? (176u + sizeof(_g4_t_v53)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v54)) > _g4_s39 ? (180u + sizeof(_g4_t_v54)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v55)) > _g4_s40 ? (184u + sizeof(_g4_t_v55)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v56)) > _g4_s41 ? (188u + sizeof(_g4_t_v56)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v57)) > _g4_s42 ? (192u + sizeof(_g4_t_v57)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v58)) > _g4_s43 ? (196u + sizeof(_g4_t_v58)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v59)) > _g4_s44 ? (200u + sizeof(_g4_t_v59)) : _g4_s44,
    _g4_s46 = (204u + sizeof(_g4_t_v60)) > _g4_s45 ? (204u + sizeof(_g4_t_v60)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v61)) > _g4_s46 ? (208u + sizeof(_g4_t_v61)) : _g4_s46,
    _g4_s48 = (212u + sizeof(_g4_t_v62)) > _g4_s47 ? (212u + sizeof(_g4_t_v62)) : _g4_s47,
    _g4_s49 = (216u + sizeof(_g4_t_v63)) > _g4_s48 ? (216u + sizeof(_g4_t_v63)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v64)) > _g4_s49 ? (220u + sizeof(_g4_t_v64)) : _g4_s49,
    _g4_s51 = (224u + sizeof(_g4_t_v65)) > _g4_s50 ? (224u + sizeof(_g4_t_v65)) : _g4_s50,
    _g4_s52 = (228u + sizeof(_g4_t_v66)) > _g4_s51 ? (228u + sizeof(_g4_t_v66)) : _g4_s51,
    _g4_s53 = (232u + sizeof(_g4_t_v67)) > _g4_s52 ? (232u + sizeof(_g4_t_v67)) : _g4_s52,
    _g4_s54 = (236u + sizeof(_g4_t_v68)) > _g4_s53 ? (236u + sizeof(_g4_t_v68)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v69)) > _g4_s54 ? (240u + sizeof(_g4_t_v69)) : _g4_s54,
    _g4_s56 = (244u + sizeof(_g4_t_v70)) > _g4_s55 ? (244u + sizeof(_g4_t_v70)) : _g4_s55,
    _g4_s57 = (248u + sizeof(_g4_t_v71)) > _g4_s56 ? (248u + sizeof(_g4_t_v71)) : _g4_s56,
    _g4_s58 = (252u + sizeof(_g4_t_v72)) > _g4_s57 ? (252u + sizeof(_g4_t_v72)) : _g4_s57,
    _g4_s59 = (256u + sizeof(_g4_t_v73)) > _g4_s58 ? (256u + sizeof(_g4_t_v73)) : _g4_s58,
    _g4_s60 = (260u + sizeof(_g4_t_v74)) > _g4_s59 ? (260u + sizeof(_g4_t_v74)) : _g4_s59,
    _g4_s61 = (264u + sizeof(_g4_t_v75)) > _g4_s60 ? (264u + sizeof(_g4_t_v75)) : _g4_s60,
    _g4_s62 = (268u + sizeof(_g4_t_v76)) > _g4_s61 ? (268u + sizeof(_g4_t_v76)) : _g4_s61,
    _g4_s63 = (272u + sizeof(_g4_t_v77)) > _g4_s62 ? (272u + sizeof(_g4_t_v77)) : _g4_s62,
    _g4_s64 = (276u + sizeof(_g4_t_v78)) > _g4_s63 ? (276u + sizeof(_g4_t_v78)) : _g4_s63,
    _g4_s65 = (280u + sizeof(_g4_t_v79)) > _g4_s64 ? (280u + sizeof(_g4_t_v79)) : _g4_s64,
    _g4_s66 = (284u + sizeof(_g4_t_v80)) > _g4_s65 ? (284u + sizeof(_g4_t_v80)) : _g4_s65,
    _g4_s67 = (288u + sizeof(_g4_t_v81)) > _g4_s66 ? (288u + sizeof(_g4_t_v81)) : _g4_s66,
    _g4_s68 = (292u + sizeof(_g4_t_v82)) > _g4_s67 ? (292u + sizeof(_g4_t_v82)) : _g4_s67,
    _g4_s69 = (296u + sizeof(_g4_t_v83)) > _g4_s68 ? (296u + sizeof(_g4_t_v83)) : _g4_s68,
    _g4_s70 = (300u + sizeof(_g4_t_v84)) > _g4_s69 ? (300u + sizeof(_g4_t_v84)) : _g4_s69,
    _g4_s71 = (304u + sizeof(_g4_t_v85)) > _g4_s70 ? (304u + sizeof(_g4_t_v85)) : _g4_s70,
    _g4_s72 = (308u + sizeof(_g4_t_v86)) > _g4_s71 ? (308u + sizeof(_g4_t_v86)) : _g4_s71,
    _g4_s73 = (312u + sizeof(_g4_t_v87)) > _g4_s72 ? (312u + sizeof(_g4_t_v87)) : _g4_s72,
    _g4_s74 = (316u + sizeof(_g4_t_v88)) > _g4_s73 ? (316u + sizeof(_g4_t_v88)) : _g4_s73,
    _g4_s75 = (320u + sizeof(_g4_t_v89)) > _g4_s74 ? (320u + sizeof(_g4_t_v89)) : _g4_s74,
    _g4_s76 = (324u + sizeof(_g4_t_v90)) > _g4_s75 ? (324u + sizeof(_g4_t_v90)) : _g4_s75,
    _g4_s77 = (328u + sizeof(_g4_t_v91)) > _g4_s76 ? (328u + sizeof(_g4_t_v91)) : _g4_s76,
    _g4_s78 = (332u + sizeof(_g4_t_v92)) > _g4_s77 ? (332u + sizeof(_g4_t_v92)) : _g4_s77,
    _g4_s79 = (336u + sizeof(_g4_t_v93)) > _g4_s78 ? (336u + sizeof(_g4_t_v93)) : _g4_s78,
    _g4_s80 = (340u + sizeof(_g4_t_v94)) > _g4_s79 ? (340u + sizeof(_g4_t_v94)) : _g4_s79,
    _g4_s81 = (344u + sizeof(_g4_t_v95)) > _g4_s80 ? (344u + sizeof(_g4_t_v95)) : _g4_s80,
    _g4_s82 = (348u + sizeof(_g4_t_v96)) > _g4_s81 ? (348u + sizeof(_g4_t_v96)) : _g4_s81,
    _g4_s83 = (352u + sizeof(_g4_t_v97)) > _g4_s82 ? (352u + sizeof(_g4_t_v97)) : _g4_s82,
    _g4_s84 = (356u + sizeof(_g4_t_v98)) > _g4_s83 ? (356u + sizeof(_g4_t_v98)) : _g4_s83,
    _g4_s85 = (360u + sizeof(_g4_t_v99)) > _g4_s84 ? (360u + sizeof(_g4_t_v99)) : _g4_s84,
    _g4_s86 = (364u + sizeof(_g4_t_v100)) > _g4_s85 ? (364u + sizeof(_g4_t_v100)) : _g4_s85,
    _g4_s87 = (368u + sizeof(_g4_t_v101)) > _g4_s86 ? (368u + sizeof(_g4_t_v101)) : _g4_s86,
    _g4_s88 = (372u + sizeof(_g4_t_v102)) > _g4_s87 ? (372u + sizeof(_g4_t_v102)) : _g4_s87,
    _g4_s89 = (376u + sizeof(_g4_t_v103)) > _g4_s88 ? (376u + sizeof(_g4_t_v103)) : _g4_s88,
    _g4_s90 = (380u + sizeof(_g4_t_v104)) > _g4_s89 ? (380u + sizeof(_g4_t_v104)) : _g4_s89,
    _g4_s91 = (384u + sizeof(_g4_t_v105)) > _g4_s90 ? (384u + sizeof(_g4_t_v105)) : _g4_s90,
    _g4_s92 = (388u + sizeof(_g4_t_v106)) > _g4_s91 ? (388u + sizeof(_g4_t_v106)) : _g4_s91,
    _g4_s93 = (392u + sizeof(_g4_t_v107)) > _g4_s92 ? (392u + sizeof(_g4_t_v107)) : _g4_s92,
    _g4_s94 = (396u + sizeof(_g4_t_v108)) > _g4_s93 ? (396u + sizeof(_g4_t_v108)) : _g4_s93,
    _g4_s95 = (400u + sizeof(_g4_t_v109)) > _g4_s94 ? (400u + sizeof(_g4_t_v109)) : _g4_s94,
    _g4_s96 = (404u + sizeof(_g4_t_v110)) > _g4_s95 ? (404u + sizeof(_g4_t_v110)) : _g4_s95,
    _g4_s97 = (408u + sizeof(_g4_t_v111)) > _g4_s96 ? (408u + sizeof(_g4_t_v111)) : _g4_s96,
    _g4_s98 = (412u + sizeof(_g4_t_v112)) > _g4_s97 ? (412u + sizeof(_g4_t_v112)) : _g4_s97,
    _g4_s99 = (416u + sizeof(_g4_t_v113)) > _g4_s98 ? (416u + sizeof(_g4_t_v113)) : _g4_s98,
    _g4_s100 = (440u + sizeof(_g4_t_v114)) > _g4_s99 ? (440u + sizeof(_g4_t_v114)) : _g4_s99,
    _g4_s101 = (444u + sizeof(_g4_t_v115)) > _g4_s100 ? (444u + sizeof(_g4_t_v115)) : _g4_s100,
    _g4_s102 = (464u + sizeof(_g4_t_v116)) > _g4_s101 ? (464u + sizeof(_g4_t_v116)) : _g4_s101
  };
  alignas(16) uint8_t _g4_sf[_g4_s102];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 34u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 148u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 152u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 160u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 164u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 168u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 172u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 176u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 180u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 184u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 188u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 196u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 200u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 204u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 208u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 212u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 216u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 220u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 224u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 228u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 232u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 236u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 240u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 244u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 248u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 252u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 256u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 260u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 264u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 268u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 272u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 276u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 280u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 284u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 288u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 292u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 296u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 300u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 304u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 308u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 312u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 316u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 320u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 324u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 328u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 332u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 336u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 340u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 344u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 348u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 352u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 356u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 360u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 364u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 368u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 372u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 376u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 380u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 384u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 388u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 392u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 396u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 400u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 404u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 408u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 412u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 416u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 440u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 444u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 464u);

  v116[7] = (uint32_t)(uintptr_t)(&self);
  v18 = self;
  v17 = a2;
  if ( a2 == 200 )
  {
    sub_134F3A0((int)(uintptr_t)(&v21), (int)(uintptr_t)(&glotv3::errors::NETWORK_PROPER_STATUS), (int)(uintptr_t)(self) + 12);
    glotv3::Glotv3Logger::WriteLog(&v21);
    g4_std::string::Destroy(&v21);
    glotv3::Fs::RemovePath((const char **)v18 + 4);
    g4_std::string::clear((char *)v18 + 16, 0, *(uint32_t *)(*((uint32_t *)v18 + 4) - 12), 0);
    glotv3::AsyncHTTPClient::HandleNotificationOfSpy(v18, 1u, 0);
    g4_std::string::clear((char *)v18 + 8, 0, *(uint32_t *)(*((uint32_t *)v18 + 2) - 12), 0);
    return __atomic_exchange_n((volatile int32_t *)v18 + 6, 200, __ATOMIC_SEQ_CST);
  }
  else
  {
    do
      v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v2 == 4 );
    v5 = v2;
    if ( v2 != 0 )
    {
      v16 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v19));
      sub_19042E0(v115, &v58);
      g4_std::string::Destroy(&v58);
      v115[2] = v5;
      v115[3] = v16;
      v115[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v115[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v6 = v17;
    v20[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    for ( i = v114; ; --i )
    {
      *(i - 1) = v6 % 0xA + 48;
      v6 /= 0xAu;
      if ( v6 == 0 )
        break;
    }
    sub_193A9B0((int)(uintptr_t)(v20), 0, dword_213B808[0], i - 1, v114 - (i - 1));
    do
      v8 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v8 == 4 );
    v11 = v8;
    if ( v8 != 0 )
    {
      v15 = (int)(uintptr_t)(sub_18F81E0(v10, v9));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v19) + 1);
      sub_19042E0(v116, &v59);
      g4_std::string::Destroy(&v59);
      v116[3] = v15;
      v116[2] = v11;
      v116[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v116[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    sub_134F3A0((int)(uintptr_t)(&v22), (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_200_ETS_STATUS_CODE), (int)(uintptr_t)(v20));
    glotv3::Glotv3Logger::WriteLog(&v22);
    g4_std::string::Destroy(&v22);
    g4_std::string::Destroy(v20);
    glotv3::AsyncHTTPClient::HandleNotificationOfSpy(v18, 2u, v17);
    glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v60);
    v12 = v60;
    if ( v60 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        646,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = glotv3::Tracki"
        "ngManager, typename boost::detail::sp_dereference<T>::type = glotv3::TrackingManager::Self&]",
        "px != 0");
      v12 = v60;
    }
    boost::detail::shared_count::Destroy(&v61);
    switch ( v17 )
    {
      case 0x3DEu:
        sub_134F3A0((int)(uintptr_t)(v23), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_REJECTED_BY_ADMIN), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v24), (int)(uintptr_t)(v23), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v25), (int)(uintptr_t)(v24), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v62, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3D4)->st_size + 2, (int)(uintptr_t)(v25));
        v64 = v62;
        v65 = v63;
        if ( v63 != nullptr )
          __sync_add_and_fetch(v63 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v64, 1);
        boost::detail::shared_count::Destroy(&v65);
        boost::detail::shared_count::Destroy(&v63);
        g4_std::string::Destroy(v25);
        g4_std::string::Destroy(v24);
        g4_std::string::Destroy(v23);
        goto LABEL_16;
      case 0x3DFu:
        sub_134F3A0((int)(uintptr_t)(v26), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_STOP_SENDING), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v27), (int)(uintptr_t)(v26), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v28), (int)(uintptr_t)(v27), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v66, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3D4)->st_size + 3, (int)(uintptr_t)(v28));
        v68 = v66;
        v69 = v67;
        if ( v67 != nullptr )
          __sync_add_and_fetch(v67 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v68, 1);
        boost::detail::shared_count::Destroy(&v69);
        boost::detail::shared_count::Destroy(&v67);
        g4_std::string::Destroy(v28);
        g4_std::string::Destroy(v27);
        g4_std::string::Destroy(v26);
        glotv3::TrackingManager::BlockSending(v12);
        goto LABEL_16;
      case 0x3E0u:
        sub_134F3A0((int)(uintptr_t)(v29), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_DELETE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v30), (int)(uintptr_t)(v29), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v31), (int)(uintptr_t)(v30), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v70, &reinterpret_cast<G4Elf32Sym *>(stru_3D4)->st_info, (int)(uintptr_t)(v31));
        v72 = v70;
        v73 = v71;
        if ( v71 != nullptr )
          __sync_add_and_fetch(v71 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v72, 1);
        boost::detail::shared_count::Destroy(&v73);
        boost::detail::shared_count::Destroy(&v71);
        g4_std::string::Destroy(v31);
        g4_std::string::Destroy(v30);
        g4_std::string::Destroy(v29);
        sub_136D210(&v74);
        v76 = v74;
        v77 = v75;
        if ( v75 != nullptr )
          __sync_add_and_fetch(v75 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v76, 0);
        boost::detail::shared_count::Destroy(&v77);
        boost::detail::shared_count::Destroy(&v75);
        glotv3::TrackingManager::BlockSending(v12);
        goto LABEL_22;
      case 0x3E1u:
        sub_134F3A0((int)(uintptr_t)(v32), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_DISABLE_TRACKING), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v33), (int)(uintptr_t)(v32), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v34), (int)(uintptr_t)(v33), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v78, &reinterpret_cast<G4Elf32Sym *>(stru_3D4)->st_other, (int)(uintptr_t)(v34));
        v80 = v78;
        v81 = v79;
        if ( v79 != nullptr )
          __sync_add_and_fetch(v79 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v80, 1);
        boost::detail::shared_count::Destroy(&v81);
        boost::detail::shared_count::Destroy(&v79);
        g4_std::string::Destroy(v34);
        g4_std::string::Destroy(v33);
        g4_std::string::Destroy(v32);
        sub_136D210(&v82);
        v84 = v82;
        v85 = v83;
        if ( v83 != nullptr )
          __sync_add_and_fetch(v83 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v84, 0);
        boost::detail::shared_count::Destroy(&v85);
        boost::detail::shared_count::Destroy(&v83);
        glotv3::TrackingManager::BlockSending(v12);
        glotv3::TrackingManager::BlockTracking(v12);
        goto LABEL_22;
      case 0x3E2u:
        sub_134F3A0((int)(uintptr_t)(v35), (int)(uintptr_t)(&glotv3::errors::ETS_IS_SHUTTING_DOWN), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v36), (int)(uintptr_t)(v35), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v37), (int)(uintptr_t)(v36), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v86, &reinterpret_cast<G4Elf32Sym *>(stru_3D4)->st_shndx, (int)(uintptr_t)(v37));
        v88 = v86;
        v89 = v87;
        if ( v87 != nullptr )
          __sync_add_and_fetch(v87 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v88, 1);
        boost::detail::shared_count::Destroy(&v89);
        boost::detail::shared_count::Destroy(&v87);
        g4_std::string::Destroy(v37);
        g4_std::string::Destroy(v36);
        g4_std::string::Destroy(v35);
        goto LABEL_16;
      case 0x3E3u:
        sub_134F3A0((int)(uintptr_t)(v38), (int)(uintptr_t)(&glotv3::errors::ETS_BATCH_STORAGE_REFUSED), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v39), (int)(uintptr_t)(v38), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v40), (int)(uintptr_t)(v39), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v90, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3D4)->st_shndx + 1, (int)(uintptr_t)(v40));
        v92 = v90;
        v93 = v91;
        if ( v91 != nullptr )
          __sync_add_and_fetch(v91 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v92, 1);
        boost::detail::shared_count::Destroy(&v93);
        boost::detail::shared_count::Destroy(&v91);
        g4_std::string::Destroy(v40);
        g4_std::string::Destroy(v39);
        g4_std::string::Destroy(v38);
        goto LABEL_16;
      case 0x3E4u:
        sub_134F3A0((int)(uintptr_t)(v41), (int)(uintptr_t)(&glotv3::errors::ETS_REJECTED_EVENTS), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v42), (int)(uintptr_t)(v41), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v43), (int)(uintptr_t)(v42), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v94, &stru_3E4, (int)(uintptr_t)(v43));
        v96 = v94;
        v97 = v95;
        if ( v95 != nullptr )
          __sync_add_and_fetch(v95 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v96, 1);
        boost::detail::shared_count::Destroy(&v97);
        boost::detail::shared_count::Destroy(&v95);
        g4_std::string::Destroy(v43);
        g4_std::string::Destroy(v42);
        g4_std::string::Destroy(v41);
        goto LABEL_22;
      case 0x3E5u:
        sub_134F3A0((int)(uintptr_t)(v44), (int)(uintptr_t)(&glotv3::errors::ETS_REJECTED_PACKAGE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v45), (int)(uintptr_t)(v44), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v46), (int)(uintptr_t)(v45), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v98, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3E4)->st_name + 1, (int)(uintptr_t)(v46));
        v100 = v98;
        v101 = v99;
        if ( v99 != nullptr )
          __sync_add_and_fetch(v99 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v100, 1);
        boost::detail::shared_count::Destroy(&v101);
        boost::detail::shared_count::Destroy(&v99);
        g4_std::string::Destroy(v46);
        g4_std::string::Destroy(v45);
        g4_std::string::Destroy(v44);
        goto LABEL_22;
      case 0x3E6u:
        sub_134F3A0((int)(uintptr_t)(v47), (int)(uintptr_t)(&glotv3::errors::ETS_REJECTED_HEADERS), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v48), (int)(uintptr_t)(v47), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v49), (int)(uintptr_t)(v48), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v102, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3E4)->st_name + 2, (int)(uintptr_t)(v49));
        v104 = v102;
        v105 = v103;
        if ( v103 != nullptr )
          __sync_add_and_fetch(v103 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v104, 1);
        boost::detail::shared_count::Destroy(&v105);
        boost::detail::shared_count::Destroy(&v103);
        g4_std::string::Destroy(v49);
        g4_std::string::Destroy(v48);
        g4_std::string::Destroy(v47);
LABEL_22:
        glotv3::AsyncHTTPClient::HandleRefusedRequest((int8_t **)v18, v17);
        goto LABEL_17;
      case 0x3E7u:
        sub_134F3A0((int)(uintptr_t)(v50), (int)(uintptr_t)(&glotv3::errors::ETS_TIME_HAS_EXPIRED), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v51), (int)(uintptr_t)(v50), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v52), (int)(uintptr_t)(v51), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v106, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3E4)->st_name + 3, (int)(uintptr_t)(v52));
        v108 = v106;
        v109 = v107;
        if ( v107 != nullptr )
          __sync_add_and_fetch(v107 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v108, 1);
        boost::detail::shared_count::Destroy(&v109);
        boost::detail::shared_count::Destroy(&v107);
        g4_std::string::Destroy(v52);
        g4_std::string::Destroy(v51);
        g4_std::string::Destroy(v50);
        goto LABEL_16;
      default:
        glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v53), (unsigned int)(uintptr_t)(v17));
        sub_134F3A0((int)(uintptr_t)(v54), (int)(uintptr_t)(&glotv3::errors::ETS_UNKNOWN_STATUS_CODE), (int)(uintptr_t)(&v53));
        sub_134F3A0((int)(uintptr_t)(v55), (int)(uintptr_t)(v54), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v56), (int)(uintptr_t)(v55), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v57), (int)(uintptr_t)(v56), (int)(uintptr_t)(v18) + 12);
        glotv3::EventOfError::s_OfType(&v110, &reinterpret_cast<G4Elf32Sym *>(stru_5D4)->st_size, (int)(uintptr_t)(v57));
        v112 = v110;
        v113 = v111;
        if ( v111 != nullptr )
          __sync_add_and_fetch(v111 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v12), &v112, 1);
        boost::detail::shared_count::Destroy(&v113);
        boost::detail::shared_count::Destroy(&v111);
        g4_std::string::Destroy(v57);
        g4_std::string::Destroy(v56);
        g4_std::string::Destroy(v55);
        g4_std::string::Destroy(v54);
        g4_std::string::Destroy(&v53);
        glotv3::TrackingManager::BlockSending(v12);
LABEL_16:
        glotv3::AsyncHTTPClient::HandleStop(v13, (int)(uintptr_t)(v18), v18);
        glotv3::AsyncHTTPClient::HandlePushbackOnQueue(v18);
LABEL_17:
        result = __atomic_exchange_n((volatile int32_t *)v18 + 6, 14, __ATOMIC_SEQ_CST);
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::AsyncHTTPClient::HandleReadHeaders  (binary VA: 0x1375130)
// Original: glotv3::AsyncHTTPClient::HandleReadHeaders
// ----------------------------------------------------------------------------
int glotv3::AsyncHTTPClient::HandleReadHeaders(int a1, glotv3::AsyncHTTPClient::Self *self, const boost::system::error_code::Self *a3)
{
  int result;
  int v4;
  typedef boost::detail::shared_count::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[4];
  typedef uint8_t _g4_t_v7[4];
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef glotv3::Event::Self *_g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef glotv3::Event::Self *_g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v9)) > _g4_s4 ? (36u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v10)) > _g4_s5 ? (40u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v11)) > _g4_s6 ? (44u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v12)) > _g4_s7 ? (48u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v13)) > _g4_s8 ? (52u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v14)) > _g4_s9 ? (56u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v15)) > _g4_s10 ? (60u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v16)) > _g4_s11 ? (64u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v17)) > _g4_s12 ? (68u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v18)) > _g4_s13 ? (72u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v19)) > _g4_s14 ? (76u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v20)) > _g4_s15 ? (80u + sizeof(_g4_t_v20)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);

  result = *((uint8_t *)self + 28);
  if ( (uint8_t)result == 0 )
  {
    if ( *(uint32_t *)a3 != 0 )
    {
      glotv3::AsyncHTTPClient::HandleStop(*(uint32_t *)a3, a1, self);
      glotv3::AsyncHTTPClient::HandlePushbackOnQueue(self);
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v10), (int)(*(uint32_t *)a3));
      (*(void (**)(uint8_t *))(**((uint32_t **)a3 + 1) + 12))(v6);
      sub_134F3A0((int)(uintptr_t)(v7), (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_READING_HEADERS), (int)(uintptr_t)(v6));
      g4_std::string::construct_copy(&v8, v7);
      g4_std::string::append((int)(uintptr_t)(&v8), ". ", 2u);
      sub_134F3A0((int)(uintptr_t)(v9), (int)(uintptr_t)(&v8), (int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS));
      sub_134F3A0((int)(uintptr_t)(v11), (int)(uintptr_t)(v9), (int)(uintptr_t)(&v10));
      sub_134F3A0((int)(uintptr_t)(v12), (int)(uintptr_t)(v11), (int)(uintptr_t)(&glotv3::system::HASHTAG));
      sub_134F3A0((int)(uintptr_t)(v13), (int)(uintptr_t)(v12), (int)(uintptr_t)(&glotv3::system::PACKAGE));
      sub_134F3A0((int)(uintptr_t)(&v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(self) + 12);
      glotv3::EventOfError::s_OfType(&v17, &reinterpret_cast<G4Elf32Sym *>(stru_574)->st_info, (int)(uintptr_t)(&v14));
      v19 = v17;
      v20 = v18;
      if ( v18 != nullptr )
        __sync_add_and_fetch(v18 + 1, 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v15);
      v4 = v15;
      if ( v15 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v4 = v15;
      }
      glotv3::TrackingManager::AddEvent(v4, &v19, 1);
      boost::detail::shared_count::Destroy(&v16);
      boost::detail::shared_count::Destroy(&v20);
      boost::detail::shared_count::Destroy(&v18);
      g4_std::string::Destroy(&v14);
      g4_std::string::Destroy(v13);
      g4_std::string::Destroy(v12);
      g4_std::string::Destroy(v11);
      g4_std::string::Destroy(v9);
      g4_std::string::Destroy(&v8);
      g4_std::string::Destroy(v7);
      g4_std::string::Destroy(v6);
      g4_std::string::Destroy(&v10);
      return __atomic_exchange_n((volatile int32_t *)self + 6, 13, __ATOMIC_SEQ_CST);
    }
    else
    {
      return sub_1372950((int)(uintptr_t)(self), (int)(uintptr_t)(v5));
    }
  }
  return result;
}


