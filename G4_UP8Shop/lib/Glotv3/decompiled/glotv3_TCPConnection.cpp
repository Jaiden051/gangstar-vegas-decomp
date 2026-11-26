#include "Core/Utils/DecompTypes.h"
#include "glotv3_TCPConnection.h"

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

int g4_asio_create_epoll_reactor(uint32_t a1);

// ----------------------------------------------------------------------------
// Function: glotv3::TCPConnection::HandleWrite  (binary VA: 0x137c1f0)
// Original: glotv3::TCPConnection::HandleWrite
// ----------------------------------------------------------------------------
void glotv3::TCPConnection::HandleWrite()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPConnection::GetSocket  (binary VA: 0x137cd50)
// Original: glotv3::TCPConnection::GetSocket
// ----------------------------------------------------------------------------
char * glotv3::TCPConnection::GetSocket(glotv3::TCPConnection::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPConnection::start  (binary VA: 0x137cd60)
// Original: glotv3::TCPConnection::start
// ----------------------------------------------------------------------------
void glotv3::TCPConnection::start()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPConnection::Construct  (binary VA: 0x137cd70)
// Original: glotv3::TCPConnection::TCPConnection
// ----------------------------------------------------------------------------
glotv3::TCPConnection::Self * glotv3::TCPConnection::Construct(glotv3::TCPConnection::Self *self, boost::asio::io_service *a2)
{
  uint32_t *v2;
  void *v3;
  glotv3::TCPConnection::Self *result;
  int v5;
  int v6;
  glotv3::TCPConnection::Self *v7;
  int *v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  pthread_mutex_t *v13;
  int v14;
  void *v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  pthread_cond_t *v21;
  int v22;
  int v23;
  typedef pthread_mutex_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef int _g4_t_v27;
  typedef g4_x86_epoll_event _g4_t_event;
  typedef uint32_t _g4_t_v29[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_mutex)) > _g4_s2 ? (12u + sizeof(_g4_t_mutex)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v27)) > _g4_s3 ? (27u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_event)) > _g4_s4 ? (32u + sizeof(_g4_t_event)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v29)) > _g4_s5 ? (44u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 27u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  v25 = *(uint32_t *)a2;
  mutex = (pthread_mutex_t *)(*(uint32_t *)a2 + 4);
  pthread_mutex_lock(mutex);
  v2 = *(uint32_t **)(v25 + 12);
  if ( v2 != nullptr )
  {
    if ( &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id != nullptr )
    {
      while ( 1 )
      {
        v3 = (void *)v2[2];
        if ( v3 != nullptr
          && v3 == &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id )
        {
          goto LABEL_7;
        }
        v2 = (uint32_t *)v2[4];
        if ( v2 == nullptr )
          goto LABEL_10;
      }
    }
    do
      v2 = (uint32_t *)v2[4];
    while ( v2 != nullptr );
  }
LABEL_10:
  pthread_mutex_unlock(mutex);
  v8 = *(int **)(v25 + 8);
  v9 = (uint32_t *)opNew(0x18u);
  v9[3] = (uint32_t)(uintptr_t)(v8);
  v9[1] = 0;
  v9[2] = 0;
  v9[4] = 0;
  *v9 = ((uint32_t)(uintptr_t)&off_2092B28);
  v10 = *v8;
  event.data.ptr = &unk_20D3FA8;
  event.events = 0;
  v11 = (uint32_t *)(boost::asio::detail::service_registry::do_use_service(
          v10,
          &event,
          g4_asio_create_epoll_reactor));
  v9[5] = (uint32_t)(uintptr_t)(v11);
  v12 = v11[5];
  v24 = (pthread_mutex_t *)(v12 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v12 + 24));
  v13 = (pthread_mutex_t *)(v12 + 24);
  if ( *(uint8_t *)(v12 + 61) == 0 && *(uint32_t *)(v12 + 28) == 0 )
  {
    v17 = **(uint32_t **)(v12 + 12);
    event.data.ptr = &unk_20D3FA8;
    event.events = 0;
    *(uint32_t *)(v12 + 28) = (uint32_t)(uintptr_t)(boost::asio::detail::service_registry::do_use_service(
                              v17,
                              &event,
                              g4_asio_create_epoll_reactor));
    v18 = *(uint32_t **)(v12 + 56);
    *(uint32_t *)(v12 + 32) = 0;
    v19 = v12 + 32;
    v13 = (pthread_mutex_t *)(v12 + 24);
    if ( v18 != nullptr )
    {
      *v18 = v19;
      *(uint32_t *)(v12 + 56) = v19;
    }
    else
    {
      *(uint32_t *)(v12 + 56) = v19;
      *(uint32_t *)(v12 + 52) = v19;
    }
    v20 = *(uint32_t *)(v12 + 64);
    if ( v20 != 0 )
    {
      *(uint32_t *)(v12 + 64) = *(uint32_t *)(v20 + 20);
      v21 = *(pthread_cond_t **)(v20 + 4);
      *(uint32_t *)(v20 + 20) = 0;
      ((uint8_t *)(v21))[4] = 1;
      pthread_mutex_unlock(v24);
      pthread_cond_signal(v21);
      goto LABEL_13;
    }
    if ( *(uint8_t *)(v12 + 44) == 0 )
    {
      v22 = *(uint32_t *)(v12 + 28);
      if ( v22 != 0 )
      {
        *(uint8_t *)(v12 + 44) = 1;
        event.data.u64 = (unsigned int)(v22 + 28);
        event.events = 0x80000009;
        g4_epoll_ctl_x86(*(uint32_t *)(v22 + 36), 3, *(uint32_t *)(v22 + 28), &event);
        v13 = (pthread_mutex_t *)(v12 + 24);
      }
    }
  }
  pthread_mutex_unlock(v13);
LABEL_13:
  v9[1] = 0;
  v9[2] = (uint32_t)(uintptr_t)(&boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id);
  pthread_mutex_lock(mutex);
  v14 = *(uint32_t *)(v25 + 12);
  if ( v14 == 0 )
  {
LABEL_21:
    v9[4] = v14;
    v2 = v9;
    *(uint32_t *)(v25 + 12) = (uint32_t)(uintptr_t)(v9);
    goto LABEL_7;
  }
  v2 = *(uint32_t **)(v25 + 12);
  if ( &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id == nullptr )
  {
    v16 = *(uint32_t *)(v25 + 12);
    do
      v16 = *(uint32_t *)(v16 + 16);
    while ( v16 != 0 );
    goto LABEL_21;
  }
  while ( 1 )
  {
    v15 = (void *)v2[2];
    if ( v15 != nullptr
      && v15 == &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id )
    {
      break;
    }
    v2 = (uint32_t *)v2[4];
    if ( v2 == nullptr )
      goto LABEL_21;
  }
  G4_VCALL<void>(v9, 4);
LABEL_7:
  pthread_mutex_unlock(mutex);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 6) = 2;
  *((uint32_t *)self + 3) = -1;
  *((uint8_t *)self + 16) = 0;
  result = (glotv3::TCPConnection::Self *)pthread_mutex_init((pthread_mutex_t *)((char *)self + 28), nullptr);
  v7 = result;
  if ( result != nullptr )
  {
    v23 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v27));
    sub_19042E0(v29, (char *)&v27 + 1);
    g4_std::string::Destroy((char *)&v27 + 1);
    v29[2] = (uint32_t)(uintptr_t)(v7);
    v29[3] = v23;
    v29[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v29[0] = ((uint32_t)(uintptr_t)&off_2049568);
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPConnection::Create  (binary VA: 0x137d0a0)
// Original: glotv3::TCPConnection::Create
// ----------------------------------------------------------------------------
glotv3::TCPConnection::Self * glotv3::TCPConnection::Create(glotv3::TCPConnection::Self *self, boost::asio::io_service *a2)
{
  int v2;
  char *untyped_deleter;
  glotv3::TCPConnection::Self *v4;
  int v5;
  bool v7;
  volatile int32_t *v8;
  glotv3::TCPConnection::Self *v9;

  v2 = opNew(0x34u);
  *(uint32_t *)(v2 + 4) = 1;
  *(uint32_t *)(v2 + 8) = 1;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2093F28);
  *(uint32_t *)(v2 + 12) = 0;
  *(uint8_t *)(v2 + 16) = 0;
  untyped_deleter = (char *)(boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *,boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *, boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>> *)v2));
  v4 = (glotv3::TCPConnection::Self *)(untyped_deleter + 4);
  if ( untyped_deleter == (char *)-4 )
  {
    LOBYTE(G4_MEM<uintptr_t>(0xFFFFFFFC)) = 1;
  }
  else
  {
    glotv3::TCPConnection::Construct(v4, a2);
    v5 = *((uint32_t *)untyped_deleter + 2);
    *untyped_deleter = 1;
    v4 = (glotv3::TCPConnection::Self *)(untyped_deleter + 4);
    if ( v5 == 0 || *(uint32_t *)(v5 + 4) == 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1);
      v7 = v2 == *((uint32_t *)untyped_deleter + 2);
      *((uint32_t *)untyped_deleter + 1) = (uint32_t)(uintptr_t)(untyped_deleter + 4);
      if ( !v7 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v2 + 8), 1);
        v8 = *((volatile int32_t **)untyped_deleter + 2);
        if ( v8 != nullptr && __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v8, 12);
          v4 = (glotv3::TCPConnection::Self *)(untyped_deleter + 4);
        }
        *((uint32_t *)untyped_deleter + 2) = v2;
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 4), 0xFFFFFFFF) == 1 )
      {
        v9 = v4;
        G4_VCALL<void>(v2, 8);
        v4 = v9;
        if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 8), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v2, 12);
          v4 = v9;
        }
      }
    }
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 1) = v2;
  __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v2, 12);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPConnection::WriteTo  (binary VA: 0x137d220)
// Original: glotv3::TCPConnection::WriteTo
// ----------------------------------------------------------------------------
int glotv3::TCPConnection::WriteTo(int a1, uint32_t *a2)
{
  pthread_mutex_t *mutex;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[2];
  typedef uint32_t _g4_t_v21[5];
  typedef uint32_t _g4_t_v22[5];
  typedef uint32_t _g4_t_v23[16];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (18u + sizeof(_g4_t_v17)) > _g4_s1 ? (18u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v22)) > _g4_s6 ? (56u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v23)) > _g4_s7 ? (76u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 18u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);

  mutex = (pthread_mutex_t *)(a1 + 28);
  do
  {
    v3 = pthread_mutex_lock(mutex);
    v6 = v3;
  }
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    v14 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v17));
    sub_19042E0(v21, &v18);
    g4_std::string::Destroy(&v18);
    v21[2] = v6;
    v21[3] = v14;
    v21[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v21[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v7 = *(uint32_t *)(*a2 - 12);
  v16 = *a2;
  sub_18F81E0(a1 + 8, *a2);
  v8 = 0x10000;
  if ( v7 < 0x10000 )
    v8 = v7;
  v20[0] = v16;
  v20[1] = v8;
  v23[1] = v16;
  v9 = *(uint32_t *)(a1 + 8);
  v23[5] = (uint32_t)(uintptr_t)(glotv3::TCPConnection::HandleWrite);
  v23[0] = a1 + 8;
  v23[2] = v7;
  v23[3] = 1;
  v23[4] = 0;
  v23[6] = 0;
  v23[7] = a1;
  sub_137C5A0((int *)(v9 + 20), (int *)(a1 + 12), v20, v23);
  do
  {
    result = pthread_mutex_unlock(mutex);
    v13 = result;
  }
  while ( result == 4 );
  if ( result != 0 )
  {
    v15 = (int)(uintptr_t)(sub_18F81E0(v12, v11));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v17) + 1);
    sub_19042E0(v22, &v19);
    g4_std::string::Destroy(&v19);
    v22[2] = v13;
    v22[3] = v15;
    v22[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v22[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return result;
}


