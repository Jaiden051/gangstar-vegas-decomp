#include "Core/Utils/DecompTypes.h"
#include "glotv3_TCPServer.h"

int g4_asio_create_socket_acceptor_tcp(uint32_t a1);

// ----------------------------------------------------------------------------
// Function: glotv3::TCPServer::WriteTo  (binary VA: 0x1362b70)
// Original: glotv3::TCPServer::WriteTo
// ----------------------------------------------------------------------------
int glotv3::TCPServer::WriteTo(uint32_t *a1, int a2)
{
  int result;
  int *v3;
  int *v4;
  int v5;
  int v6;

  result = a1[5];
  v3 = (int *)a1[2];
  v4 = (int *)a1[4];
  v6 = result;
  while ( (int *)a1[6] != v3 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( *v3 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "CPConnection, typename boost::detail::sp_member_access<T>::type = glotv3::TCPConnection*]",
          "px != 0");
        v5 = *v3;
      }
      v3 += 2;
      result = glotv3::TCPConnection::WriteTo(v5, a2);
      if ( v3 != v4 )
        break;
      v3 = *(int **)(v6 + 4);
      result = v6 + 4;
      v6 += 4;
      v4 = v3 + 128;
      if ( (int *)a1[6] == v3 )
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPServer::StartAccept  (binary VA: 0x1362c20)
// Original: glotv3::TCPServer::StartAccept
// ----------------------------------------------------------------------------
pthread_mutex_t * glotv3::TCPServer::StartAccept(glotv3::TCPServer::Self *self)
{
  glotv3::TCPServer::Self *v1;
  uint32_t *v2;
  int v3;
  volatile int32_t *v4;
  bool v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  int v9;
  glotv3::TCPConnection::Self *v10;
  int v11;
  pthread_mutex_t *v12;
  uint8_t *v13;
  pthread_mutex_t *v14;
  int v15;
  int v16;
  volatile int32_t *v17;
  pthread_mutex_t *v18;
  pthread_mutex_t **v19;
  pthread_mutex_t *result;
  uint32_t *kind;
  volatile int32_t *v22;
  volatile int32_t *v23;
  volatile int32_t *v24;
  uint32_t *owner;
  pthread_mutex_t *v26;
  unsigned int nusers;
  pthread_cond_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  char *v35;
  char *v36;
  unsigned int v37;
  uint32_t *v38;
  volatile int32_t *v39;
  int *v40;
  unsigned int v41;
  int v42;
  pthread_mutex_t *v43;
  int v44;
  pthread_mutex_t *v45;
  int lock;
  int v47;
  int v48;
  int v49;
  unsigned int count;
  int v51;
  typedef int _g4_t_v52;
  typedef pthread_mutex_t *_g4_t_mutexa;
  typedef pthread_mutex_t *_g4_t_mutexb;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t *_g4_t_mutexd;
  typedef pthread_mutex_t *_g4_t_mutexe;
  typedef pthread_mutex_t *_g4_t_mutexf;
  typedef pthread_mutex_t *_g4_t_mutexc;
  typedef uint8_t _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char _g4_t_is_continuation;
  typedef int _g4_t_v65;
  typedef pthread_mutex_t ***_g4_t_address;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_src;
  typedef pthread_mutex_t *_g4_t_srca;
  typedef void *_g4_t_srcb;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef volatile int32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef volatile int32_t *_g4_t_v75;
  typedef struct epoll_event _g4_t_event;
  typedef uint32_t _g4_t_v77[4];
  typedef volatile int32_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef volatile int32_t *_g4_t_v83;
  typedef glotv3::TCPServer::Self **_g4_t_v84;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_mutexa)) > _g4_s1 ? (4u + sizeof(_g4_t_mutexa)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_mutexb)) > _g4_s2 ? (4u + sizeof(_g4_t_mutexb)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_mutex)) > _g4_s3 ? (4u + sizeof(_g4_t_mutex)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_mutexd)) > _g4_s4 ? (4u + sizeof(_g4_t_mutexd)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_mutexe)) > _g4_s5 ? (4u + sizeof(_g4_t_mutexe)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_mutexf)) > _g4_s6 ? (4u + sizeof(_g4_t_mutexf)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_mutexc)) > _g4_s7 ? (4u + sizeof(_g4_t_mutexc)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v60)) > _g4_s8 ? (8u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v61)) > _g4_s9 ? (8u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v62)) > _g4_s10 ? (8u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v63)) > _g4_s11 ? (8u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (15u + sizeof(_g4_t_is_continuation)) > _g4_s12 ? (15u + sizeof(_g4_t_is_continuation)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v65)) > _g4_s13 ? (16u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_address)) > _g4_s14 ? (20u + sizeof(_g4_t_address)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v67)) > _g4_s15 ? (20u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_src)) > _g4_s16 ? (24u + sizeof(_g4_t_src)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_srca)) > _g4_s17 ? (24u + sizeof(_g4_t_srca)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_srcb)) > _g4_s18 ? (24u + sizeof(_g4_t_srcb)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v71)) > _g4_s19 ? (40u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v72)) > _g4_s20 ? (44u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v73)) > _g4_s21 ? (48u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v74)) > _g4_s22 ? (60u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v75)) > _g4_s23 ? (64u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_event)) > _g4_s24 ? (80u + sizeof(_g4_t_event)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v77)) > _g4_s25 ? (92u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v78)) > _g4_s26 ? (108u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v79)) > _g4_s27 ? (124u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v80)) > _g4_s28 ? (128u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v81)) > _g4_s29 ? (132u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v82)) > _g4_s30 ? (136u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v83)) > _g4_s31 ? (140u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v84)) > _g4_s32 ? (164u + sizeof(_g4_t_v84)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_mutexa &mutexa = *reinterpret_cast<_g4_t_mutexa *>(_g4_sf + 4u);
  _g4_t_mutexb &mutexb = *reinterpret_cast<_g4_t_mutexb *>(_g4_sf + 4u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 4u);
  _g4_t_mutexd &mutexd = *reinterpret_cast<_g4_t_mutexd *>(_g4_sf + 4u);
  _g4_t_mutexe &mutexe = *reinterpret_cast<_g4_t_mutexe *>(_g4_sf + 4u);
  _g4_t_mutexf &mutexf = *reinterpret_cast<_g4_t_mutexf *>(_g4_sf + 4u);
  _g4_t_mutexc &mutexc = *reinterpret_cast<_g4_t_mutexc *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_is_continuation &is_continuation = *reinterpret_cast<_g4_t_is_continuation *>(_g4_sf + 15u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 24u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 24u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 24u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 92u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 124u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 132u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 136u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 140u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 164u);

  v84 = &self;
  v1 = self;
  glotv3::TCPConnection::Create(
    (glotv3::TCPConnection::Self *)&v72,
    *(boost::asio::io_service **)(*((uint32_t *)self + 10) + 12));
  v2 = *((uint32_t **)v1 + 6);
  if ( v2 == (uint32_t *)(*((uint32_t *)v1 + 8) - 8) )
  {
    v35 = *((char **)v1 + 9);
    v36 = *(char **)v1;
    v37 = *((uint32_t *)v1 + 1);
    if ( v37 - ((int)(uintptr_t)(&v35[-*(uint32_t *)v1]) >> 2) <= 1 )
    {
      srca = *((pthread_mutex_t **)v1 + 5);
      v67 = ((v35 - (char *)srca) >> 2) + 1;
      v52 = ((v35 - (char *)srca) >> 2) + 2;
      if ( v37 > 2 * v52 )
      {
        v48 = v35 + 4 - (char *)srca;
        v45 = (pthread_mutex_t *)&v36[4 * ((v37 - v52) >> 1)];
        if ( srca <= v45 )
        {
          v51 = v48 >> 2;
          if ( v51 != 0 )
          {
            mutexf = (pthread_mutex_t *)&v36[4 * ((v37 - v52) >> 1)];
            memmove(&((int32_t *)(v45))[0] + v67 - v51, srca, 4 * v51);
            v45 = mutexf;
          }
        }
        else
        {
          v49 = v48 >> 2;
          if ( v49 != 0 )
          {
            mutexe = (pthread_mutex_t *)&v36[4 * ((v37 - v52) >> 1)];
            memmove(v45, srca, 4 * v49);
            v45 = mutexe;
          }
        }
      }
      else
      {
        v41 = 3;
        if ( v37 != 0 )
        {
          v41 = 2 * v37 + 2;
          if ( v41 > 0x3FFFFFFF )
            sub_18FFEE0(v36, 2 * v52);
        }
        v42 = opNew(4 * v41);
        v43 = (pthread_mutex_t *)(v42 + 4 * ((v41 - v52) >> 1));
        srcb = *((void **)v1 + 5);
        v44 = (*((uint32_t *)v1 + 9) + 4 - (int)(uintptr_t)(srcb)) >> 2;
        if ( v44 != 0 )
        {
          mutexc = (pthread_mutex_t *)(v42 + 4 * ((v41 - v52) >> 1));
          v63 = v42;
          memmove(v43, srcb, 4 * v44);
          v42 = v63;
          v43 = mutexc;
        }
        mutexd = v43;
        v62 = v42;
        opDelete(*(void **)v1);
        *((uint32_t *)v1 + 1) = v41;
        *(uint32_t *)v1 = v62;
        v45 = mutexd;
      }
      *((uint32_t *)v1 + 5) = (uint32_t)(uintptr_t)(v45);
      lock = ((int32_t *)(v45))[0];
      *((uint32_t *)v1 + 3) = ((int32_t *)(v45))[0];
      *((uint32_t *)v1 + 4) = lock + 512;
      v35 = (char *)(&((uint8_t *)(v45))[4 * v67 - 4]);
      *((uint32_t *)v1 + 9) = (uint32_t)(uintptr_t)(v35);
      v47 = *(uint32_t *)v35;
      *((uint32_t *)v1 + 7) = *(uint32_t *)v35;
      *((uint32_t *)v1 + 8) = v47 + 512;
    }
    *((uint32_t *)v35 + 1) = opNew(0x200u);
    v38 = *((uint32_t **)v1 + 6);
    if ( v38 != nullptr )
    {
      *v38 = v72;
      v39 = v73;
      v5 = v73 == nullptr;
      v38[1] = (uint32_t)(uintptr_t)(v73);
      if ( !v5 )
        __sync_add_and_fetch(v39 + 1, 1);
    }
    v40 = (int *)(*((uint32_t *)v1 + 9) + 4);
    *((uint32_t *)v1 + 9) = (uint32_t)(uintptr_t)(v40);
    v6 = *v40;
    *((uint32_t *)v1 + 7) = *v40;
    *((uint32_t *)v1 + 6) = v6;
    *((uint32_t *)v1 + 8) = v6 + 512;
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      *v2 = v72;
      v4 = v73;
      v5 = v73 == nullptr;
      v2[1] = (uint32_t)(uintptr_t)(v73);
      if ( !v5 )
        __sync_add_and_fetch(v4 + 1, 1);
      v3 = *((uint32_t *)v1 + 6);
    }
    v6 = v3 + 8;
    *((uint32_t *)v1 + 6) = v6;
  }
  v7 = v73;
  if ( v73 != nullptr )
  {
    if ( __sync_fetch_and_add(v73 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
    v6 = *((uint32_t *)v1 + 6);
  }
  if ( *((uint32_t *)v1 + 7) == v6 )
    v6 = *(uint32_t *)(*((uint32_t *)v1 + 9) - 4) + 512;
  v74 = *(uint32_t *)(v6 - 8);
  v8 = *(volatile int32_t **)(v6 - 4);
  v75 = v8;
  if ( v8 != nullptr )
    __sync_add_and_fetch(v8 + 1, 1);
  sub_1361F10(v77, (int)(uintptr_t)(glotv3::TCPServer::HandleAccept), 0, (int)(uintptr_t)(v1), &v74);
  v9 = *((uint32_t *)v1 + 6);
  if ( v9 == *((uint32_t *)v1 + 7) )
    v9 = *(uint32_t *)(*((uint32_t *)v1 + 9) - 4) + 512;
  v10 = *(glotv3::TCPConnection::Self **)(v9 - 8);
  if ( v10 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::TCPCo"
      "nnection, typename boost::detail::sp_member_access<T>::type = glotv3::TCPConnection*]",
      "px != 0");
    v10 = *(glotv3::TCPConnection::Self **)(v9 - 8);
  }
  src = (uint32_t *)glotv3::TCPConnection::GetSocket(v10);
  v79 = v77[0];
  v81 = v77[2];
  v11 = *((uint32_t *)v1 + 10);
  v82 = v77[3];
  v65 = v11;
  v80 = v77[1];
  v83 = v78;
  if ( v78 != nullptr )
    __sync_add_and_fetch(v78 + 1, 1);
  is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v79);
  address = (pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
  if ( *address != nullptr )
  {
    v12 = (*address)[1];
    if ( v12 != nullptr )
    {
      v13 = (uint8_t *)((int32_t *)(v12))[0];
      if ( ((int32_t *)(v12))[0] != 0 )
      {
        ((int32_t *)(v12))[0] = 0;
        if ( *v13 > 0x43u )
        {
          v13[68] = *v13;
          goto LABEL_25;
        }
        opDelete(v13);
      }
    }
  }
  v34 = opNew(0x45u);
  *(uint8_t *)(v34 + 68) = 68;
  v13 = (uint8_t *)v34;
LABEL_25:
  v14 = *((pthread_mutex_t **)v1 + 11);
  v15 = *((uint8_t *)v1 + 48);
  *(uint32_t *)v13 = 0;
  *((uint32_t *)v13 + 1) = (uint32_t)(uintptr_t)((int (*)(int, uint32_t *))boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::TCPServer::Self,boost::shared_ptr<glotv3::TCPConnection::Self>,boost::system::error_code::Self const&>,boost::_bi::list3<boost::_bi::value<glotv3::TCPServer::Self*>,boost::_bi::value<boost::shared_ptr<glotv3::TCPConnection::Self>>,boost::arg<1> (*)(void)>>>::do_complete);
  *((uint32_t *)v13 + 2) = 0;
  *((uint32_t *)v13 + 3) = 0;
  mutexa = v14;
  v60 = v15;
  *((uint32_t *)v13 + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v15, v14));
  *((uint32_t *)v13 + 6) = (uint32_t)(uintptr_t)((bool (*)(int))boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ip::tcp>::do_perform);
  *((uint32_t *)v13 + 5) = 0;
  *((uint32_t *)v13 + 7) = (uint32_t)(uintptr_t)(mutexa);
  v16 = v80;
  *((uint32_t *)v13 + 9) = (uint32_t)(uintptr_t)(src);
  v13[32] = v60;
  *((uint32_t *)v13 + 10) = *((uint32_t *)v1 + 14);
  *((uint32_t *)v13 + 12) = v79;
  *((uint32_t *)v13 + 14) = v81;
  *((uint32_t *)v13 + 15) = v82;
  v17 = v83;
  v5 = v83 == nullptr;
  *((uint32_t *)v13 + 11) = 0;
  *((uint32_t *)v13 + 13) = v16;
  *((uint32_t *)v13 + 16) = (uint32_t)(uintptr_t)(v17);
  if ( !v5 )
    __sync_add_and_fetch(v17 + 1, 1);
  if ( src[1] != -1 )
  {
    if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
    {
      dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
      __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
    }
    *((uint32_t *)v13 + 3) = 1;
    *((uint32_t *)v13 + 4) = (uint32_t)(uintptr_t)(&dword_20D3F88);
    v18 = *(pthread_mutex_t **)(*(uint32_t *)(v65 + 20) + 20);
    if ( ((uint8_t *)(v18))[20] == 0 && is_continuation == 0 )
      goto LABEL_45;
    v19 = *address;
    if ( *address == nullptr )
      goto LABEL_45;
    while ( v18 != *v19 )
    {
      v19 = (pthread_mutex_t **)v19[2];
      if ( v19 == nullptr )
        goto LABEL_45;
    }
    goto LABEL_34;
  }
  if ( (*((uint8_t *)v1 + 48) & 3) != 0 )
  {
LABEL_60:
    result = (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::epoll_reactor::start_op(
               *(uint32_t *)(v65 + 20),
               0,
               *((uint32_t *)v1 + 11),
               (int *)v1 + 13,
               (unsigned int)(uintptr_t)(v13),
               1,
               is_continuation));
    goto LABEL_37;
  }
  v29 = *((uint32_t *)v1 + 11);
  if ( v29 == -1 )
  {
    *((uint32_t *)v13 + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v60, -1));
    *((uint32_t *)v13 + 3) = 9;
    goto LABEL_52;
  }
  mutexb = *((pthread_mutex_t **)v1 + 11);
  *(uint32_t *)__errno(v60, v29) = 0;
  v71 = 1;
  v61 = ioctl((int)(uintptr_t)(mutexb), 0x5421u, &v71);
  mutex = (pthread_mutex_t *)sub_18F81E0(v31, v30);
  *((uint32_t *)v13 + 3) = *(uint32_t *)__errno(v33, v32);
  *((uint32_t *)v13 + 4) = (uint32_t)(uintptr_t)(mutex);
  if ( v61 >= 0 )
  {
    *((uint32_t *)v13 + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v61, mutex));
    *((uint32_t *)v13 + 3) = 0;
    *((uint8_t *)v1 + 48) |= 2u;
    goto LABEL_60;
  }
LABEL_52:
  v18 = *(pthread_mutex_t **)(*(uint32_t *)(v65 + 20) + 20);
  v19 = *address;
  if ( *address == nullptr )
    goto LABEL_45;
  while ( v18 != *v19 )
  {
    v19 = (pthread_mutex_t **)v19[2];
    if ( v19 == nullptr )
      goto LABEL_45;
  }
LABEL_34:
  result = v19[1];
  if ( result != nullptr )
  {
    ++((int32_t *)(result))[4];
    *(uint32_t *)v13 = 0;
    kind = (uint32_t *)((int32_t *)(result))[3];
    if ( kind != nullptr )
    {
      *kind = (uint32_t)(uintptr_t)(v13);
      ((int32_t *)(result))[3] = (int)(uintptr_t)(v13);
    }
    else
    {
      ((int32_t *)(result))[3] = (int)(uintptr_t)(v13);
      ((int32_t *)(result))[2] = (int)(uintptr_t)(v13);
    }
    goto LABEL_37;
  }
LABEL_45:
  __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2)))), 1u);
  pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (1))));
  *(uint32_t *)v13 = 0;
  owner = (uint32_t *)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2))));
  v26 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (1)));
  if ( owner != nullptr )
  {
    *owner = (uint32_t)(uintptr_t)(v13);
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2)))) = (int)(uintptr_t)(v13);
  }
  else
  {
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2)))) = (int)(uintptr_t)(v13);
    G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2)))) = (unsigned int)(uintptr_t)(v13);
  }
  nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2))));
  if ( nusers != 0 )
  {
    G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (2)))) = *(uint32_t *)(nusers + 20);
    v28 = *(pthread_cond_t **)(nusers + 4);
    *(uint32_t *)(nusers + 20) = 0;
    ((uint8_t *)(v28))[4] = 1;
    pthread_mutex_unlock(v26);
    result = (pthread_mutex_t *)pthread_cond_signal(v28);
  }
  else
  {
    if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (1))))[20] == 0 )
    {
      count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (1))));
      if ( count != 0 )
      {
        G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (1))))[20] = 1;
        event.data.u64 = count + 28;
        event.events = 0x80000009;
        epoll_ctl(*(uint32_t *)(count + 36), 3, *(uint32_t *)(count + 28), &event);
        v26 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v18) + (24 * (1)));
      }
    }
    result = (pthread_mutex_t *)pthread_mutex_unlock(v26);
  }
LABEL_37:
  v22 = v83;
  if ( v83 != nullptr )
  {
    result = (pthread_mutex_t *)__sync_fetch_and_add(v83 + 1, 0xFFFFFFFF);
    if ( result == (pthread_mutex_t *)((char *)&dword_0 + 1) )
    {
      result = (pthread_mutex_t *)G4_VCALL<int>(v22, 8);
      if ( __sync_fetch_and_add(v22 + 2, 0xFFFFFFFF) == 1 )
        result = (pthread_mutex_t *)G4_VCALL<int>(v22, 12);
    }
  }
  v23 = v78;
  if ( v78 != nullptr )
  {
    result = (pthread_mutex_t *)__sync_fetch_and_add(v78 + 1, 0xFFFFFFFF);
    if ( result == (pthread_mutex_t *)((char *)&dword_0 + 1) )
    {
      result = (pthread_mutex_t *)G4_VCALL<int>(v23, 8);
      if ( __sync_fetch_and_add(v23 + 2, 0xFFFFFFFF) == 1 )
        result = (pthread_mutex_t *)G4_VCALL<int>(v23, 12);
    }
  }
  v24 = v75;
  if ( v75 != nullptr )
  {
    result = (pthread_mutex_t *)__sync_fetch_and_add(v75 + 1, 0xFFFFFFFF);
    if ( result == (pthread_mutex_t *)((char *)&dword_0 + 1) )
    {
      result = (pthread_mutex_t *)G4_VCALL<int>(v24, 8);
      if ( __sync_fetch_and_add(v24 + 2, 0xFFFFFFFF) == 1 )
        return (pthread_mutex_t *)G4_VCALL<int>(v24, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPServer::HandleAccept  (binary VA: 0x1363500)
// Original: glotv3::TCPServer::HandleAccept
// ----------------------------------------------------------------------------
pthread_mutex_t * glotv3::TCPServer::HandleAccept(glotv3::TCPServer::Self *a1, glotv3::TCPConnection::Self **a2, int *a3)
{
  pthread_mutex_t *result;
  glotv3::TCPConnection::Self *v4;

  result = (pthread_mutex_t *)*a3;
  if ( *a3 == 0 )
  {
    v4 = *a2;
    if ( *a2 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::TCP"
        "Connection, typename boost::detail::sp_member_access<T>::type = glotv3::TCPConnection*]",
        "px != 0");
      v4 = *a2;
    }
    glotv3::TCPConnection::start(v4);
    return glotv3::TCPServer::StartAccept(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TCPServer::Construct  (binary VA: 0x1363580)
// Original: glotv3::TCPServer::TCPServer
// ----------------------------------------------------------------------------
pthread_mutex_t * glotv3::TCPServer::Construct(glotv3::TCPServer::Self *self, glotv3::TrackingManager::Self *a2)
{
  glotv3::TCPServer::Self *v2;
  glotv3::TrackingManager::Self *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  pthread_mutex_t *nusers;
  void *owner;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  uint8_t *i;
  uint8_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  pthread_mutex_t *result;
  void *v32;
  boost::asio::io_service::service *v33;
  int v34;
  void *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  pthread_mutex_t **v40;
  int v41;
  int v42;
  uint32_t *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  socklen_t v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  unsigned int v78;
  uint8_t *m;
  uint8_t *v80;
  int v81;
  int v82;
  int v83;
  int v84;
  void *v85;
  void *v86;
  void *v87;
  void *v88;
  void *v89;
  void *v90;
  int v91;
  int v92;
  int v93;
  int v94;
  unsigned int v95;
  uint8_t *k;
  uint8_t *v97;
  int v98;
  int v99;
  int v100;
  int v101;
  void *v102;
  void *v103;
  void *v104;
  void *v105;
  void *v106;
  void *v107;
  int v108;
  int v109;
  int v110;
  int v111;
  unsigned int v112;
  uint8_t *j;
  uint8_t *v114;
  int v115;
  int v116;
  int v117;
  int v118;
  void *v119;
  void *v120;
  void *v121;
  void *v122;
  void *v123;
  void *v124;
  int v125;
  int v126;
  int v127;
  typedef int _g4_t_fdb;
  typedef int _g4_t_fd;
  typedef int _g4_t_fdc;
  typedef int _g4_t_fdd;
  typedef int _g4_t_fde;
  typedef int _g4_t_fdf;
  typedef uint32_t *_g4_t_fda;
  typedef int _g4_t_v135;
  typedef int _g4_t_spins;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef pthread_mutex_t *_g4_t_v147;
  typedef pthread_mutex_t *_g4_t_v148;
  typedef pthread_mutex_t *_g4_t_v149;
  typedef pthread_mutex_t *_g4_t_v150;
  typedef pthread_mutex_t *_g4_t_v151;
  typedef pthread_mutex_t *_g4_t_v152;
  typedef pthread_mutex_t *_g4_t_v153;
  typedef pthread_mutex_t *_g4_t_v154;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t *_g4_t_mutexa;
  typedef pthread_mutex_t *_g4_t_mutexb;
  typedef pthread_mutex_t *_g4_t_mutexc;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef char _g4_t_v162;
  typedef char _g4_t_v163;
  typedef char _g4_t_v164;
  typedef char _g4_t_v165;
  typedef int _g4_t_v166;
  typedef char _g4_t_v167;
  typedef char _g4_t_v168;
  typedef char _g4_t_v169;
  typedef char _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_optval[4];
  typedef int _g4_t_v174[4];
  typedef uint32_t _g4_t_v175[4];
  typedef int _g4_t_v176[4];
  typedef int _g4_t_v177[4];
  typedef uint32_t _g4_t_v178[4];
  typedef int _g4_t_v179[4];
  typedef uint32_t _g4_t_v180[4];
  typedef int _g4_t_v181[4];
  typedef int _g4_t_v182[4];
  typedef uint32_t _g4_t_v183[4];
  typedef int _g4_t_v184[4];
  typedef uint32_t _g4_t_v185[4];
  typedef int _g4_t_v186[4];
  typedef int _g4_t_v187[4];
  typedef uint32_t _g4_t_v188[4];
  typedef int _g4_t_v189[4];
  typedef uint32_t _g4_t_v190[4];
  typedef int _g4_t_v191[4];
  typedef int _g4_t_v192[4];
  typedef uint32_t _g4_t_v193[4];
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef int _g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207[2];
  typedef uint32_t _g4_t_v208[5];
  typedef uint32_t _g4_t_v209[5];
  typedef uint32_t _g4_t_v210[5];
  typedef uint32_t _g4_t_v211[5];
  typedef uint32_t _g4_t_v212[5];
  typedef uint32_t _g4_t_v213[5];
  typedef uint32_t _g4_t_v214[5];
  typedef uint32_t _g4_t_v215[5];
  typedef struct epoll_event _g4_t_event;
  typedef uint8_t _g4_t_v217[11];
  typedef struct sockaddr _g4_t_addr[2];
  typedef glotv3::TCPServer::Self **_g4_t_v219;
  typedef char *_g4_t_v220;
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (0u + sizeof(_g4_t_fdb)) > _g4_s0 ? (0u + sizeof(_g4_t_fdb)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_fd)) > _g4_s1 ? (0u + sizeof(_g4_t_fd)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_fdc)) > _g4_s2 ? (0u + sizeof(_g4_t_fdc)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_fdd)) > _g4_s3 ? (0u + sizeof(_g4_t_fdd)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_fde)) > _g4_s4 ? (0u + sizeof(_g4_t_fde)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_fdf)) > _g4_s5 ? (0u + sizeof(_g4_t_fdf)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_fda)) > _g4_s6 ? (0u + sizeof(_g4_t_fda)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v135)) > _g4_s7 ? (4u + sizeof(_g4_t_v135)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_spins)) > _g4_s8 ? (4u + sizeof(_g4_t_spins)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v137)) > _g4_s9 ? (4u + sizeof(_g4_t_v137)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v138)) > _g4_s10 ? (4u + sizeof(_g4_t_v138)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v139)) > _g4_s11 ? (4u + sizeof(_g4_t_v139)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v140)) > _g4_s12 ? (4u + sizeof(_g4_t_v140)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v141)) > _g4_s13 ? (4u + sizeof(_g4_t_v141)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v142)) > _g4_s14 ? (4u + sizeof(_g4_t_v142)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v143)) > _g4_s15 ? (4u + sizeof(_g4_t_v143)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v144)) > _g4_s16 ? (4u + sizeof(_g4_t_v144)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v145)) > _g4_s17 ? (4u + sizeof(_g4_t_v145)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v146)) > _g4_s18 ? (8u + sizeof(_g4_t_v146)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v147)) > _g4_s19 ? (12u + sizeof(_g4_t_v147)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_v148)) > _g4_s20 ? (12u + sizeof(_g4_t_v148)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v149)) > _g4_s21 ? (16u + sizeof(_g4_t_v149)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v150)) > _g4_s22 ? (16u + sizeof(_g4_t_v150)) : _g4_s22,
    _g4_s24 = (16u + sizeof(_g4_t_v151)) > _g4_s23 ? (16u + sizeof(_g4_t_v151)) : _g4_s23,
    _g4_s25 = (16u + sizeof(_g4_t_v152)) > _g4_s24 ? (16u + sizeof(_g4_t_v152)) : _g4_s24,
    _g4_s26 = (16u + sizeof(_g4_t_v153)) > _g4_s25 ? (16u + sizeof(_g4_t_v153)) : _g4_s25,
    _g4_s27 = (16u + sizeof(_g4_t_v154)) > _g4_s26 ? (16u + sizeof(_g4_t_v154)) : _g4_s26,
    _g4_s28 = (20u + sizeof(_g4_t_mutex)) > _g4_s27 ? (20u + sizeof(_g4_t_mutex)) : _g4_s27,
    _g4_s29 = (20u + sizeof(_g4_t_mutexa)) > _g4_s28 ? (20u + sizeof(_g4_t_mutexa)) : _g4_s28,
    _g4_s30 = (20u + sizeof(_g4_t_mutexb)) > _g4_s29 ? (20u + sizeof(_g4_t_mutexb)) : _g4_s29,
    _g4_s31 = (20u + sizeof(_g4_t_mutexc)) > _g4_s30 ? (20u + sizeof(_g4_t_mutexc)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v159)) > _g4_s31 ? (28u + sizeof(_g4_t_v159)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v160)) > _g4_s32 ? (32u + sizeof(_g4_t_v160)) : _g4_s32,
    _g4_s34 = (36u + sizeof(_g4_t_v161)) > _g4_s33 ? (36u + sizeof(_g4_t_v161)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v162)) > _g4_s34 ? (40u + sizeof(_g4_t_v162)) : _g4_s34,
    _g4_s36 = (41u + sizeof(_g4_t_v163)) > _g4_s35 ? (41u + sizeof(_g4_t_v163)) : _g4_s35,
    _g4_s37 = (42u + sizeof(_g4_t_v164)) > _g4_s36 ? (42u + sizeof(_g4_t_v164)) : _g4_s36,
    _g4_s38 = (43u + sizeof(_g4_t_v165)) > _g4_s37 ? (43u + sizeof(_g4_t_v165)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v166)) > _g4_s38 ? (44u + sizeof(_g4_t_v166)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v167)) > _g4_s39 ? (48u + sizeof(_g4_t_v167)) : _g4_s39,
    _g4_s41 = (49u + sizeof(_g4_t_v168)) > _g4_s40 ? (49u + sizeof(_g4_t_v168)) : _g4_s40,
    _g4_s42 = (50u + sizeof(_g4_t_v169)) > _g4_s41 ? (50u + sizeof(_g4_t_v169)) : _g4_s41,
    _g4_s43 = (51u + sizeof(_g4_t_v170)) > _g4_s42 ? (51u + sizeof(_g4_t_v170)) : _g4_s42,
    _g4_s44 = (52u + sizeof(_g4_t_v171)) > _g4_s43 ? (52u + sizeof(_g4_t_v171)) : _g4_s43,
    _g4_s45 = (56u + sizeof(_g4_t_v172)) > _g4_s44 ? (56u + sizeof(_g4_t_v172)) : _g4_s44,
    _g4_s46 = (60u + sizeof(_g4_t_optval)) > _g4_s45 ? (60u + sizeof(_g4_t_optval)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v174)) > _g4_s46 ? (76u + sizeof(_g4_t_v174)) : _g4_s46,
    _g4_s48 = (92u + sizeof(_g4_t_v175)) > _g4_s47 ? (92u + sizeof(_g4_t_v175)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v176)) > _g4_s48 ? (108u + sizeof(_g4_t_v176)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v177)) > _g4_s49 ? (124u + sizeof(_g4_t_v177)) : _g4_s49,
    _g4_s51 = (140u + sizeof(_g4_t_v178)) > _g4_s50 ? (140u + sizeof(_g4_t_v178)) : _g4_s50,
    _g4_s52 = (156u + sizeof(_g4_t_v179)) > _g4_s51 ? (156u + sizeof(_g4_t_v179)) : _g4_s51,
    _g4_s53 = (172u + sizeof(_g4_t_v180)) > _g4_s52 ? (172u + sizeof(_g4_t_v180)) : _g4_s52,
    _g4_s54 = (188u + sizeof(_g4_t_v181)) > _g4_s53 ? (188u + sizeof(_g4_t_v181)) : _g4_s53,
    _g4_s55 = (204u + sizeof(_g4_t_v182)) > _g4_s54 ? (204u + sizeof(_g4_t_v182)) : _g4_s54,
    _g4_s56 = (220u + sizeof(_g4_t_v183)) > _g4_s55 ? (220u + sizeof(_g4_t_v183)) : _g4_s55,
    _g4_s57 = (236u + sizeof(_g4_t_v184)) > _g4_s56 ? (236u + sizeof(_g4_t_v184)) : _g4_s56,
    _g4_s58 = (252u + sizeof(_g4_t_v185)) > _g4_s57 ? (252u + sizeof(_g4_t_v185)) : _g4_s57,
    _g4_s59 = (268u + sizeof(_g4_t_v186)) > _g4_s58 ? (268u + sizeof(_g4_t_v186)) : _g4_s58,
    _g4_s60 = (284u + sizeof(_g4_t_v187)) > _g4_s59 ? (284u + sizeof(_g4_t_v187)) : _g4_s59,
    _g4_s61 = (300u + sizeof(_g4_t_v188)) > _g4_s60 ? (300u + sizeof(_g4_t_v188)) : _g4_s60,
    _g4_s62 = (316u + sizeof(_g4_t_v189)) > _g4_s61 ? (316u + sizeof(_g4_t_v189)) : _g4_s61,
    _g4_s63 = (332u + sizeof(_g4_t_v190)) > _g4_s62 ? (332u + sizeof(_g4_t_v190)) : _g4_s62,
    _g4_s64 = (348u + sizeof(_g4_t_v191)) > _g4_s63 ? (348u + sizeof(_g4_t_v191)) : _g4_s63,
    _g4_s65 = (364u + sizeof(_g4_t_v192)) > _g4_s64 ? (364u + sizeof(_g4_t_v192)) : _g4_s64,
    _g4_s66 = (380u + sizeof(_g4_t_v193)) > _g4_s65 ? (380u + sizeof(_g4_t_v193)) : _g4_s65,
    _g4_s67 = (396u + sizeof(_g4_t_v194)) > _g4_s66 ? (396u + sizeof(_g4_t_v194)) : _g4_s66,
    _g4_s68 = (404u + sizeof(_g4_t_v195)) > _g4_s67 ? (404u + sizeof(_g4_t_v195)) : _g4_s67,
    _g4_s69 = (408u + sizeof(_g4_t_v196)) > _g4_s68 ? (408u + sizeof(_g4_t_v196)) : _g4_s68,
    _g4_s70 = (412u + sizeof(_g4_t_v197)) > _g4_s69 ? (412u + sizeof(_g4_t_v197)) : _g4_s69,
    _g4_s71 = (416u + sizeof(_g4_t_v198)) > _g4_s70 ? (416u + sizeof(_g4_t_v198)) : _g4_s70,
    _g4_s72 = (420u + sizeof(_g4_t_v199)) > _g4_s71 ? (420u + sizeof(_g4_t_v199)) : _g4_s71,
    _g4_s73 = (424u + sizeof(_g4_t_v200)) > _g4_s72 ? (424u + sizeof(_g4_t_v200)) : _g4_s72,
    _g4_s74 = (428u + sizeof(_g4_t_v201)) > _g4_s73 ? (428u + sizeof(_g4_t_v201)) : _g4_s73,
    _g4_s75 = (432u + sizeof(_g4_t_v202)) > _g4_s74 ? (432u + sizeof(_g4_t_v202)) : _g4_s74,
    _g4_s76 = (436u + sizeof(_g4_t_v203)) > _g4_s75 ? (436u + sizeof(_g4_t_v203)) : _g4_s75,
    _g4_s77 = (440u + sizeof(_g4_t_v204)) > _g4_s76 ? (440u + sizeof(_g4_t_v204)) : _g4_s76,
    _g4_s78 = (444u + sizeof(_g4_t_v205)) > _g4_s77 ? (444u + sizeof(_g4_t_v205)) : _g4_s77,
    _g4_s79 = (448u + sizeof(_g4_t_v206)) > _g4_s78 ? (448u + sizeof(_g4_t_v206)) : _g4_s78,
    _g4_s80 = (452u + sizeof(_g4_t_v207)) > _g4_s79 ? (452u + sizeof(_g4_t_v207)) : _g4_s79,
    _g4_s81 = (460u + sizeof(_g4_t_v208)) > _g4_s80 ? (460u + sizeof(_g4_t_v208)) : _g4_s80,
    _g4_s82 = (480u + sizeof(_g4_t_v209)) > _g4_s81 ? (480u + sizeof(_g4_t_v209)) : _g4_s81,
    _g4_s83 = (500u + sizeof(_g4_t_v210)) > _g4_s82 ? (500u + sizeof(_g4_t_v210)) : _g4_s82,
    _g4_s84 = (520u + sizeof(_g4_t_v211)) > _g4_s83 ? (520u + sizeof(_g4_t_v211)) : _g4_s83,
    _g4_s85 = (540u + sizeof(_g4_t_v212)) > _g4_s84 ? (540u + sizeof(_g4_t_v212)) : _g4_s84,
    _g4_s86 = (560u + sizeof(_g4_t_v213)) > _g4_s85 ? (560u + sizeof(_g4_t_v213)) : _g4_s85,
    _g4_s87 = (580u + sizeof(_g4_t_v214)) > _g4_s86 ? (580u + sizeof(_g4_t_v214)) : _g4_s86,
    _g4_s88 = (600u + sizeof(_g4_t_v215)) > _g4_s87 ? (600u + sizeof(_g4_t_v215)) : _g4_s87,
    _g4_s89 = (620u + sizeof(_g4_t_event)) > _g4_s88 ? (620u + sizeof(_g4_t_event)) : _g4_s88,
    _g4_s90 = (641u + sizeof(_g4_t_v217)) > _g4_s89 ? (641u + sizeof(_g4_t_v217)) : _g4_s89,
    _g4_s91 = (652u + sizeof(_g4_t_addr)) > _g4_s90 ? (652u + sizeof(_g4_t_addr)) : _g4_s90,
    _g4_s92 = (692u + sizeof(_g4_t_v219)) > _g4_s91 ? (692u + sizeof(_g4_t_v219)) : _g4_s91,
    _g4_s93 = (696u + sizeof(_g4_t_v220)) > _g4_s92 ? (696u + sizeof(_g4_t_v220)) : _g4_s92
  };
  alignas(16) uint8_t _g4_sf[_g4_s93];
  _g4_t_fdb &fdb = *reinterpret_cast<_g4_t_fdb *>(_g4_sf + 0u);
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 0u);
  _g4_t_fdc &fdc = *reinterpret_cast<_g4_t_fdc *>(_g4_sf + 0u);
  _g4_t_fdd &fdd = *reinterpret_cast<_g4_t_fdd *>(_g4_sf + 0u);
  _g4_t_fde &fde = *reinterpret_cast<_g4_t_fde *>(_g4_sf + 0u);
  _g4_t_fdf &fdf = *reinterpret_cast<_g4_t_fdf *>(_g4_sf + 0u);
  _g4_t_fda &fda = *reinterpret_cast<_g4_t_fda *>(_g4_sf + 0u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 4u);
  _g4_t_spins &spins = *reinterpret_cast<_g4_t_spins *>(_g4_sf + 4u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 4u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 4u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 4u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 4u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 4u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 4u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 4u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 4u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 4u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 8u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 12u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 12u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 16u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 16u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 16u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 16u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 16u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 16u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 20u);
  _g4_t_mutexa &mutexa = *reinterpret_cast<_g4_t_mutexa *>(_g4_sf + 20u);
  _g4_t_mutexb &mutexb = *reinterpret_cast<_g4_t_mutexb *>(_g4_sf + 20u);
  _g4_t_mutexc &mutexc = *reinterpret_cast<_g4_t_mutexc *>(_g4_sf + 20u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 28u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 32u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 36u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 40u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 41u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 42u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 43u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 44u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 48u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 49u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 50u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 51u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 52u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 56u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 60u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 76u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 92u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 108u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 124u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 140u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 156u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 172u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 188u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 204u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 220u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 236u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 252u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 268u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 284u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 300u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 316u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 332u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 348u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 364u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 380u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 396u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 404u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 408u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 412u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 416u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 420u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 424u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 428u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 432u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 436u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 440u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 444u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 448u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 452u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 460u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 480u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 500u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 520u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 540u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 560u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 580u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 600u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 620u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 641u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 652u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 692u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 696u);

  v219 = &self;
  v2 = self;
  v3 = a2;
  *(uint32_t *)self = 0;
  *((uint32_t *)v2 + 2) = 0;
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0;
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 6) = 0;
  *((uint32_t *)v2 + 7) = 0;
  *((uint32_t *)v2 + 8) = 0;
  *((uint32_t *)v2 + 9) = 0;
  *((uint32_t *)v2 + 1) = 8;
  fdb = (int)(uintptr_t)(v3);
  v4 = opNew(0x20u);
  v5 = *((uint32_t *)v2 + 1);
  *(uint32_t *)v2 = v4;
  v6 = (int *)(v4 + ((2 * v5 - 2) & 0xFFFFFFFC));
  *v6 = opNew(0x200u);
  *((uint32_t *)v2 + 5) = (uint32_t)(uintptr_t)(v6);
  v7 = *v6;
  *((uint32_t *)v2 + 9) = (uint32_t)(uintptr_t)(v6);
  *((uint32_t *)v2 + 3) = v7;
  *((uint32_t *)v2 + 4) = v7 + 512;
  v8 = *v6;
  *((uint32_t *)v2 + 2) = v7;
  *((uint32_t *)v2 + 7) = v8;
  *((uint32_t *)v2 + 6) = v8;
  *((uint32_t *)v2 + 8) = v8 + 512;
  v135 = *(uint32_t *)(fdb + 80);
  mutex = (pthread_mutex_t *)(v135 + 4);
  pthread_mutex_lock((pthread_mutex_t *)(v135 + 4));
  nusers = *(pthread_mutex_t **)(v135 + 12);
  if ( nusers != nullptr )
  {
    if ( &boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::id != nullptr )
    {
      while ( 1 )
      {
        owner = (void *)((int32_t *)(nusers))[2];
        if ( owner != nullptr
          && owner == &boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::id )
        {
          goto LABEL_7;
        }
        nusers = (pthread_mutex_t *)((int32_t *)(nusers))[4];
        if ( nusers == nullptr )
          goto LABEL_29;
      }
    }
    do
      nusers = (pthread_mutex_t *)((int32_t *)(nusers))[4];
    while ( nusers != nullptr );
  }
LABEL_29:
  pthread_mutex_unlock(mutex);
  v33 = (boost::asio::io_service::service *)(uintptr_t)g4_asio_create_socket_acceptor_tcp(*(uint32_t *)(v135 + 8));
  *((uint32_t *)v33 + 1) = 0;
  *((uint32_t *)v33 + 2) = (uint32_t)(uintptr_t)(&boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::id);
  v150 = (pthread_mutex_t *)v33;
  pthread_mutex_lock(mutex);
  v34 = *(uint32_t *)(v135 + 12);
  if ( v34 == 0 )
  {
LABEL_37:
    nusers = v150;
    ((int32_t *)(v150))[4] = *(uint32_t *)(v135 + 12);
    *(uint32_t *)(v135 + 12) = (uint32_t)(uintptr_t)(v150);
    goto LABEL_7;
  }
  nusers = *(pthread_mutex_t **)(v135 + 12);
  if ( &boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::id == nullptr )
  {
    do
      v34 = *(uint32_t *)(v34 + 16);
    while ( v34 != 0 );
    goto LABEL_37;
  }
  while ( 1 )
  {
    v35 = (void *)((int32_t *)(nusers))[2];
    if ( v35 != nullptr
      && v35 == &boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::id )
    {
      break;
    }
    nusers = (pthread_mutex_t *)((int32_t *)(nusers))[4];
    if ( nusers == nullptr )
      goto LABEL_37;
  }
  (*(void (**)(pthread_mutex_t *))(((int32_t *)(v150))[0] + 4))(v150);
LABEL_7:
  pthread_mutex_unlock(mutex);
  *((uint32_t *)v2 + 10) = (uint32_t)(uintptr_t)(nusers);
  *((uint32_t *)v2 + 14) = 2;
  *((uint32_t *)v2 + 11) = -1;
  v11 = glotv3::system::LIBSPY_PORT[0];
  memset(addr, 0, 0x1Cu);
  LOWORD(v11) = __builtin_rotateright16(glotv3::system::LIBSPY_PORT[0], 8);
  *((uint8_t *)v2 + 48) = 0;
  *(uint16_t *)addr[0].sa_data = v11;
  addr[0].sa_family = 2;
  sub_18F81E0(0, v11);
  v147 = *((pthread_mutex_t **)v2 + 10);
  v13 = 8 * (addr[0].sa_family != 2) + 2;
  if ( *((uint32_t *)v2 + 11) != -1 )
  {
    if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
    {
      dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
      __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
    }
    v149 = (pthread_mutex_t *)(uintptr_t)1;
    v14 = (int *)(&dword_20D3F88);
    goto LABEL_10;
  }
  *(uint32_t *)__errno(v12, *((uint32_t *)v2 + 10)) = 0;
  mutexa = (pthread_mutex_t *)socket(v13, 1, 6);
  fd = (int)(uintptr_t)(sub_18F81E0(v37, v36));
  v40 = (pthread_mutex_t **)__errno(v39, v38);
  v14 = (int *)fd;
  v149 = *v40;
  if ( (int)(uintptr_t)(mutexa) < 0 )
  {
    v194 = (int)(uintptr_t)(mutexa);
    if ( mutexa == (pthread_mutex_t *)-1 )
      goto LABEL_51;
  }
  else
  {
    sub_18F81E0(v41, fd);
    v194 = (int)(uintptr_t)(mutexa);
  }
  spins = G4_MUTEX_SPINS(v147);
  v151 = (pthread_mutex_t *)(spins + 52);
  pthread_mutex_lock((pthread_mutex_t *)(spins + 52));
  v42 = spins;
  v43 = *(uint32_t **)(spins + 60);
  if ( v43 != nullptr )
  {
    *(uint32_t *)(spins + 60) = v43[3];
    v148 = (pthread_mutex_t *)(v43 + 5);
  }
  else
  {
    v125 = opNew(0x40u);
    *(uint32_t *)v125 = 0;
    *(uint32_t *)(v125 + 4) = (uint32_t)(uintptr_t)(boost::asio::detail::epoll_reactor::descriptor_state::do_complete);
    *(uint32_t *)(v125 + 8) = 0;
    fda = (uint32_t *)v125;
    v148 = (pthread_mutex_t *)(v125 + 20);
    v146 = pthread_mutex_init((pthread_mutex_t *)(v125 + 20), nullptr);
    v207[1] = (int)(uintptr_t)(sub_18F81E0(v127, v126));
    v207[0] = v146;
    v43 = fda;
    v42 = spins;
    if ( v146 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
      sub_1361D1D(v207, "mutex");
    fda[9] = 0;
    fda[10] = 0;
    fda[11] = 0;
    fda[12] = 0;
    fda[13] = 0;
    fda[14] = 0;
  }
  v44 = *(uint32_t *)(v42 + 56);
  v43[4] = 0;
  v43[3] = v44;
  v45 = *(uint32_t *)(v42 + 56);
  if ( v45 != 0 )
    *(uint32_t *)(v45 + 16) = (uint32_t)(uintptr_t)(v43);
  *(uint32_t *)(v42 + 56) = (uint32_t)(uintptr_t)(v43);
  v137 = v42;
  fdc = (int)(uintptr_t)(v43);
  pthread_mutex_unlock(v151);
  *((uint32_t *)v2 + 13) = fdc;
  pthread_mutex_lock(v148);
  *(uint32_t *)(*((uint32_t *)v2 + 13) + 24) = v137;
  *(uint32_t *)(*((uint32_t *)v2 + 13) + 28) = (uint32_t)(uintptr_t)(mutexa);
  *(uint8_t *)(*((uint32_t *)v2 + 13) + 60) = 0;
  pthread_mutex_unlock(v148);
  v46 = *((uint32_t *)v2 + 13);
  HIDWORD(event.data.u64) = 0;
  event.events = 0x8000001B;
  *(uint32_t *)(v46 + 32) = -2147483621;
  event.data.fd = *((uint32_t *)v2 + 13);
  if ( epoll_ctl(*(uint32_t *)(v137 + 36), 1, (int)(uintptr_t)(mutexa), &event) != 0
    && (v149 = *(pthread_mutex_t **)__errno(v48, v47)) != nullptr )
  {
    v14 = (int *)sub_18F81E0(v48, v47);
  }
  else
  {
    v49 = v194;
    *((uint8_t *)v2 + 48) = 16;
    *((uint32_t *)v2 + 11) = v49;
    v194 = -1;
    v14 = (int *)sub_18F81E0(v48, v47);
    v149 = nullptr;
  }
  if ( v194 != -1 )
  {
    fdd = (int)(uintptr_t)(v14);
    sub_1361E10(&v194, (int)(uintptr_t)(v14), v41);
    v14 = (int *)fdd;
  }
LABEL_51:
  if ( v149 != nullptr )
  {
LABEL_10:
    (*(void (**)(uint32_t *, int *, pthread_mutex_t *))(*v14 + 12))(v193, v14, v149);
    do
      v15 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v15 == 4 );
    v18 = v15;
    if ( v15 != 0 )
    {
      v140 = (int)(uintptr_t)(sub_18F81E0(v17, v16));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v206), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v171) + 1);
      sub_19042E0(v215, &v206);
      g4_std::string::Destroy(&v206);
      v215[2] = v18;
      v215[3] = v140;
      v215[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v215[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v192[0] = (int)(uintptr_t)(&dword_213B814);
    v19 = __builtin_abs((int)(uintptr_t)(v149));
    for ( i = v217; ; --i )
    {
      *(i - 1) = v19 % 0xA + 48;
      v19 /= 0xAu;
      if ( v19 == 0 )
        break;
    }
    v21 = i - 1;
    if ( (int)(uintptr_t)(v149) < 0 )
    {
      v21 = i - 2;
      *(i - 2) = 45;
    }
    sub_193A9B0((int)(uintptr_t)(v192), 0, dword_213B808[0], v21, v217 - v21);
    do
      v22 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v22 == 4 );
    v25 = v22;
    if ( v22 != 0 )
    {
      v141 = (int)(uintptr_t)(sub_18F81E0(v24, v23));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v205), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v171));
      sub_19042E0(v214, &v205);
      g4_std::string::Destroy(&v205);
      v214[3] = v141;
      v214[2] = v25;
      v214[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v214[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    g4_std::string::construct_copy(v191, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_OPEN);
    g4_std::string::append((int)(uintptr_t)(v191), " with error code: ", 0x12u);
    g4_std::string::construct_copy(v190, v191);
    g4_std::string::append_str(v190, v192);
    g4_std::string::construct_copy(v189, v190);
    g4_std::string::append((int)(uintptr_t)(v189), " with message: ", 0xFu);
    g4_std::string::construct_copy(&v198, v189);
    g4_std::string::append_str(&v198, v193);
    v220 = (char *)(uintptr_t)2;
    glotv3::Glotv3Logger::WriteLog(&v198);
    v26 = (void *)(v198 - 12);
    if ( (uint32_t *)(v198 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v198 - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v171 + 2;
      g4_std::string::Rep::M_destroy(v26);
    }
    v27 = (void *)(v189[0] - 12);
    if ( (uint32_t *)(v189[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v189[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v171 + 3;
      g4_std::string::Rep::M_destroy(v27);
    }
    v28 = (void *)(v190[0] - 12);
    if ( (uint32_t *)(v190[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v190[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v172;
      g4_std::string::Rep::M_destroy(v28);
    }
    v29 = (void *)(v191[0] - 12);
    if ( (uint32_t *)(v191[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v191[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v172 + 1;
      g4_std::string::Rep::M_destroy(v29);
    }
    v30 = (void *)(v192[0] - 12);
    if ( (uint32_t *)(v192[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v192[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v172 + 2;
      g4_std::string::Rep::M_destroy(v30);
    }
    result = (pthread_mutex_t *)v193[0];
    v32 = (void *)(v193[0] - 12);
    if ( (uint32_t *)(v193[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v193[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v172 + 3;
      return (g4_std::string::Rep::M_destroy(v32), (pthread_mutex_t *)0);
    }
    return result;
  }
  *((uint32_t *)v2 + 14) = v13;
  v50 = *((uint32_t *)v2 + 11);
  optval[0] = 1;
  if ( v50 == -1 )
  {
    mutexb = (pthread_mutex_t *)sub_18F81E0(v41, v14);
    v152 = (pthread_mutex_t *)byte_9;
    goto LABEL_107;
  }
  *(uint32_t *)__errno(v41, v14) = 0;
  v51 = setsockopt(v50, 1, 2, optval, 4u);
  mutexb = (pthread_mutex_t *)sub_18F81E0(v53, v52);
  v152 = *(pthread_mutex_t **)__errno(v55, v54);
  if ( v51 != 0 )
  {
    if ( v152 == nullptr )
      goto LABEL_55;
LABEL_107:
    (*(void (**)(uint32_t *, pthread_mutex_t *, pthread_mutex_t *))(((int32_t *)(mutexb))[0] + 12))(v188, mutexb, v152);
    do
      v108 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v108 == 4 );
    v111 = v108;
    if ( v108 != 0 )
    {
      v142 = (int)(uintptr_t)(sub_18F81E0(v110, v109));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v204), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v166) + 1);
      sub_19042E0(v213, &v204);
      g4_std::string::Destroy(&v204);
      v213[2] = v111;
      v213[3] = v142;
      v213[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v213[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v187[0] = (int)(uintptr_t)(&dword_213B814);
    v112 = __builtin_abs((int)(uintptr_t)(v152));
    for ( j = v217; ; --j )
    {
      *(j - 1) = v112 % 0xA + 48;
      v112 /= 0xAu;
      if ( v112 == 0 )
        break;
    }
    v114 = j - 1;
    if ( (int)(uintptr_t)(v152) < 0 )
    {
      v114 = j - 2;
      *(j - 2) = 45;
    }
    sub_193A9B0((int)(uintptr_t)(v187), 0, dword_213B808[0], v114, v217 - v114);
    do
      v115 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v115 == 4 );
    v118 = v115;
    if ( v115 != 0 )
    {
      v139 = (int)(uintptr_t)(sub_18F81E0(v117, v116));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v203), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v166));
      sub_19042E0(v212, &v203);
      g4_std::string::Destroy(&v203);
      v212[3] = v139;
      v212[2] = v118;
      v212[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v212[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    g4_std::string::construct_copy(v186, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_SET_OPTION);
    g4_std::string::append((int)(uintptr_t)(v186), " with error code: ", 0x12u);
    g4_std::string::construct_copy(v185, v186);
    g4_std::string::append_str(v185, v187);
    g4_std::string::construct_copy(v184, v185);
    g4_std::string::append((int)(uintptr_t)(v184), " with message: ", 0xFu);
    g4_std::string::construct_copy(&v197, v184);
    g4_std::string::append_str(&v197, v188);
    v220 = (char *)(uintptr_t)2;
    glotv3::Glotv3Logger::WriteLog(&v197);
    v119 = (void *)(v197 - 12);
    if ( (uint32_t *)(v197 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v197 - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v166 + 2;
      g4_std::string::Rep::M_destroy(v119);
    }
    v120 = (void *)(v184[0] - 12);
    if ( (uint32_t *)(v184[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v184[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v166 + 3;
      g4_std::string::Rep::M_destroy(v120);
    }
    v121 = (void *)(v185[0] - 12);
    if ( (uint32_t *)(v185[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v185[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v167;
      g4_std::string::Rep::M_destroy(v121);
    }
    v122 = (void *)(v186[0] - 12);
    if ( (uint32_t *)(v186[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v186[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v168;
      g4_std::string::Rep::M_destroy(v122);
    }
    v123 = (void *)(v187[0] - 12);
    if ( (uint32_t *)(v187[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v187[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v169;
      g4_std::string::Rep::M_destroy(v123);
    }
    result = (pthread_mutex_t *)v188[0];
    v124 = (void *)(v188[0] - 12);
    if ( (uint32_t *)(v188[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v188[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v170;
      return (g4_std::string::Rep::M_destroy(v124), (pthread_mutex_t *)0);
    }
    return result;
  }
  sub_18F81E0(v57, v56);
LABEL_55:
  v58 = *((uint32_t *)v2 + 11);
  v59 = 16;
  if ( addr[0].sa_family != 2 )
    v59 = 28;
  if ( v58 == -1 )
  {
    mutexc = (pthread_mutex_t *)sub_18F81E0(v57, -1);
    v153 = (pthread_mutex_t *)byte_9;
    goto LABEL_87;
  }
  fde = *((uint32_t *)v2 + 11);
  *(uint32_t *)__errno(v57, v58) = 0;
  v60 = bind(fde, addr, v59);
  mutexc = (pthread_mutex_t *)sub_18F81E0(v62, v61);
  v153 = *(pthread_mutex_t **)__errno(v64, v63);
  if ( v60 == 0 )
  {
    sub_18F81E0(v66, v65);
    goto LABEL_60;
  }
  if ( v153 != nullptr )
  {
LABEL_87:
    (*(void (**)(uint32_t *, pthread_mutex_t *, pthread_mutex_t *))(((int32_t *)(mutexc))[0] + 12))(v183, mutexc, v153);
    do
      v91 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v91 == 4 );
    v94 = v91;
    if ( v91 != 0 )
    {
      v144 = (int)(uintptr_t)(sub_18F81E0(v93, v92));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v202), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v161) + 1);
      sub_19042E0(v211, &v202);
      g4_std::string::Destroy(&v202);
      v211[2] = v94;
      v211[3] = v144;
      v211[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v211[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v182[0] = (int)(uintptr_t)(&dword_213B814);
    v95 = __builtin_abs((int)(uintptr_t)(v153));
    for ( k = v217; ; --k )
    {
      *(k - 1) = v95 % 0xA + 48;
      v95 /= 0xAu;
      if ( v95 == 0 )
        break;
    }
    v97 = k - 1;
    if ( (int)(uintptr_t)(v153) < 0 )
    {
      v97 = k - 2;
      *(k - 2) = 45;
    }
    sub_193A9B0((int)(uintptr_t)(v182), 0, dword_213B808[0], v97, v217 - v97);
    do
      v98 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v98 == 4 );
    v101 = v98;
    if ( v98 != 0 )
    {
      v143 = (int)(uintptr_t)(sub_18F81E0(v100, v99));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v201), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v161));
      sub_19042E0(v210, &v201);
      g4_std::string::Destroy(&v201);
      v210[3] = v143;
      v210[2] = v101;
      v210[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v210[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    g4_std::string::construct_copy(v181, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_BIND);
    g4_std::string::append((int)(uintptr_t)(v181), " with error code: ", 0x12u);
    g4_std::string::construct_copy(v180, v181);
    g4_std::string::append_str(v180, v182);
    g4_std::string::construct_copy(v179, v180);
    g4_std::string::append((int)(uintptr_t)(v179), " with message: ", 0xFu);
    g4_std::string::construct_copy(&v196, v179);
    g4_std::string::append_str(&v196, v183);
    v220 = (char *)(uintptr_t)2;
    glotv3::Glotv3Logger::WriteLog(&v196);
    v102 = (void *)(v196 - 12);
    if ( (uint32_t *)(v196 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v196 - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v161 + 2;
      g4_std::string::Rep::M_destroy(v102);
    }
    v103 = (void *)(v179[0] - 12);
    if ( (uint32_t *)(v179[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v179[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = (char *)&v161 + 3;
      g4_std::string::Rep::M_destroy(v103);
    }
    v104 = (void *)(v180[0] - 12);
    if ( (uint32_t *)(v180[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v180[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v162;
      g4_std::string::Rep::M_destroy(v104);
    }
    v105 = (void *)(v181[0] - 12);
    if ( (uint32_t *)(v181[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v181[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v163;
      g4_std::string::Rep::M_destroy(v105);
    }
    v106 = (void *)(v182[0] - 12);
    if ( (uint32_t *)(v182[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v182[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v164;
      g4_std::string::Rep::M_destroy(v106);
    }
    result = (pthread_mutex_t *)v183[0];
    v107 = (void *)(v183[0] - 12);
    if ( (uint32_t *)(v183[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v183[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v220 = &v165;
      return (g4_std::string::Rep::M_destroy(v107), (pthread_mutex_t *)0);
    }
    return result;
  }
LABEL_60:
  v67 = *((uint32_t *)v2 + 11);
  if ( v67 == -1 )
  {
    v70 = (int)(uintptr_t)(sub_18F81E0(v66, v65));
    v154 = (pthread_mutex_t *)byte_9;
  }
  else
  {
    *(uint32_t *)__errno(v66, v65) = 0;
    fdf = listen(v67, 128);
    v70 = (int)(uintptr_t)(sub_18F81E0(v69, v68));
    v154 = *(pthread_mutex_t **)__errno(v72, v71);
    if ( fdf == 0 )
    {
      sub_18F81E0(v73, 0);
      return glotv3::TCPServer::StartAccept(v2);
    }
    if ( v154 == nullptr )
      return glotv3::TCPServer::StartAccept(v2);
  }
  (*(void (**)(uint32_t *, int, pthread_mutex_t *))(*(uint32_t *)v70 + 12))(v178, v70, v154);
  do
    v74 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v74 == 4 );
  v77 = v74;
  if ( v74 != 0 )
  {
    v138 = (int)(uintptr_t)(sub_18F81E0(v76, v75));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v200), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v159) + 1);
    sub_19042E0(v209, &v200);
    g4_std::string::Destroy(&v200);
    v209[2] = v77;
    v209[3] = v138;
    v209[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v209[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v177[0] = (int)(uintptr_t)(&dword_213B814);
  v78 = __builtin_abs((int)(uintptr_t)(v154));
  for ( m = v217; ; --m )
  {
    *(m - 1) = v78 % 0xA + 48;
    v78 /= 0xAu;
    if ( v78 == 0 )
      break;
  }
  v80 = m - 1;
  if ( (int)(uintptr_t)(v154) < 0 )
  {
    v80 = m - 2;
    *(m - 2) = 45;
  }
  sub_193A9B0((int)(uintptr_t)(v177), 0, dword_213B808[0], v80, v217 - v80);
  do
    v81 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v81 == 4 );
  v84 = v81;
  if ( v81 != 0 )
  {
    v145 = (int)(uintptr_t)(sub_18F81E0(v83, v82));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v199), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v159));
    sub_19042E0(v208, &v199);
    g4_std::string::Destroy(&v199);
    v208[3] = v145;
    v208[2] = v84;
    v208[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v208[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  g4_std::string::construct_copy(v176, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_LISTEN);
  g4_std::string::append((int)(uintptr_t)(v176), " with error code: ", 0x12u);
  g4_std::string::construct_copy(v175, v176);
  g4_std::string::append_str(v175, v177);
  g4_std::string::construct_copy(v174, v175);
  g4_std::string::append((int)(uintptr_t)(v174), " with message: ", 0xFu);
  g4_std::string::construct_copy(&v195, v174);
  g4_std::string::append_str(&v195, v178);
  v220 = (char *)(uintptr_t)2;
  glotv3::Glotv3Logger::WriteLog(&v195);
  v85 = (void *)(v195 - 12);
  if ( (uint32_t *)(v195 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v195 - 4), 0xFFFFFFFF) <= 0 )
  {
    v220 = (char *)&v159 + 2;
    g4_std::string::Rep::M_destroy(v85);
  }
  v86 = (void *)(v174[0] - 12);
  if ( (uint32_t *)(v174[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v220 = (char *)&v159 + 3;
    g4_std::string::Rep::M_destroy(v86);
  }
  v87 = (void *)(v175[0] - 12);
  if ( (uint32_t *)(v175[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v175[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v220 = (char *)&v160;
    g4_std::string::Rep::M_destroy(v87);
  }
  v88 = (void *)(v176[0] - 12);
  if ( (uint32_t *)(v176[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v176[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v220 = (char *)&v160 + 1;
    g4_std::string::Rep::M_destroy(v88);
  }
  v89 = (void *)(v177[0] - 12);
  if ( (uint32_t *)(v177[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v177[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v220 = (char *)&v160 + 2;
    g4_std::string::Rep::M_destroy(v89);
  }
  result = (pthread_mutex_t *)v178[0];
  v90 = (void *)(v178[0] - 12);
  if ( (uint32_t *)(v178[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v178[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v220 = (char *)&v160 + 3;
    return (g4_std::string::Rep::M_destroy(v90), (pthread_mutex_t *)0);
  }
  return result;
}


