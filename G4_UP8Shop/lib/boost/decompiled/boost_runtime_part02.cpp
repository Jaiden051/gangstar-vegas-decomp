#include "Core/Utils/DecompTypes.h"
#include "boost_runtime_part02.h"

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

uint32_t *g4_asio_resolver_iterator_tcp_create(uint32_t *a1, int a2, int a3, int a4);
pthread_mutex_t *g4_asio_epoll_deregister_descriptor(void *self, int fd, void *a3, bool a4);
int g4_asio_socket_ops_close(int a1, int a2, void *self, uint8_t *a4, uint8_t *a5, uint32_t *a6);

int g4_asio_create_epoll_reactor(uint32_t a1);

template <>
void boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete(
        int a1,
        uint32_t *a2);
template <>
int boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete(
        int a1,
        uint64_t *a2);

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::get_deleter  (binary VA: 0x131fa20)
// Original: boost::detail::sp_counted_impl_pda<glotv3::Event *,boost::detail::sp_ms_deleter<glotv3::Event>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::get_deleter(int a1, void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::Event::Self>>::ti_ )
    return a1 + 16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::get_untyped_deleter  (binary VA: 0x131fa50)
// Original: boost::detail::sp_counted_impl_pda<glotv3::Event *,boost::detail::sp_ms_deleter<glotv3::Event>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter
// ----------------------------------------------------------------------------
char * boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::get_untyped_deleter(boost::detail::sp_counted_impl_pda<glotv3::Event::Self *, boost::detail::sp_ms_deleter<glotv3::Event::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::get_deleter  (binary VA: 0x131fa60)
// Original: boost::detail::sp_counted_impl_pd<glotv3::EventParams *,boost::detail::sp_ms_deleter<glotv3::EventParams>>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::get_deleter(int a1, void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventParams>>::ti_ )
    return a1 + 16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::get_untyped_deleter  (binary VA: 0x131fa90)
// Original: boost::detail::sp_counted_impl_pd<glotv3::EventParams *,boost::detail::sp_ms_deleter<glotv3::EventParams>>::get_untyped_deleter
// ----------------------------------------------------------------------------
char * boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::get_untyped_deleter(boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_thread_5aea3c::get_deleter  (binary VA: 0x131faa0)
// Original: boost::detail::sp_counted_impl_p<boost::thread>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_p_thread_5aea3c::get_deleter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_thread_5aea3c::get_untyped_deleter  (binary VA: 0x131fab0)
// Original: boost::detail::sp_counted_impl_p<boost::thread>::get_untyped_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_p_thread_5aea3c::get_untyped_deleter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::thread_data_bi_bind_t_unsigned_int_m_3c4980::run  (binary VA: 0x131fac0)
// Original: boost::detail::thread_data<boost::_bi::bind_t<unsigned int,boost::_mfi::mf0<unsigned int,boost::asio::io_service>,boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>>::run
// ----------------------------------------------------------------------------
int boost::detail::thread_data_bi_bind_t_unsigned_int_m_3c4980::run(boost::detail::thread_data<boost::_bi::bind_t<unsigned int, boost::_mfi::mf0<unsigned int, boost::asio::io_service>, boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>> *self)
{
  int (*v1)(int);

  v1 = *((int (**)(int))self + 29);
  if ( (uintptr_t)(v1) < 0x10000u && ((uintptr_t)(v1) & 1) != 0 )
    v1 = *(int (**)(int))((char *)v1 + *(uint32_t *)(*((uint32_t *)self + 30) + *((uint32_t *)self + 31)) - 1);
  return v1(*((uint32_t *)self + 30) + *((uint32_t *)self + 31));
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::get_deleter  (binary VA: 0x131faf0)
// Original: boost::detail::sp_counted_impl_pd<glotv3::TCPServer *,boost::detail::sp_ms_deleter<glotv3::TCPServer>>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::get_deleter(int a1, void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>>::ti_ )
    return a1 + 16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::get_untyped_deleter  (binary VA: 0x131fb20)
// Original: boost::detail::sp_counted_impl_pd<glotv3::TCPServer *,boost::detail::sp_ms_deleter<glotv3::TCPServer>>::get_untyped_deleter
// ----------------------------------------------------------------------------
char * boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::get_untyped_deleter(boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::get_deleter  (binary VA: 0x131fb30)
// Original: boost::detail::sp_counted_impl_pd<glotv3::DNSClient *,boost::detail::sp_ms_deleter<glotv3::DNSClient>>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::get_deleter(int a1, void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>>::ti_ )
    return a1 + 16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::get_untyped_deleter  (binary VA: 0x131fb60)
// Original: boost::detail::sp_counted_impl_pd<glotv3::DNSClient *,boost::detail::sp_ms_deleter<glotv3::DNSClient>>::get_untyped_deleter
// ----------------------------------------------------------------------------
char * boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::get_untyped_deleter(boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::get_deleter  (binary VA: 0x131fb70)
// Original: boost::detail::sp_counted_impl_p<glotv3::SingletonMutexedProcessor>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::get_deleter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::get_untyped_deleter  (binary VA: 0x131fb80)
// Original: boost::detail::sp_counted_impl_p<glotv3::SingletonMutexedProcessor>::get_untyped_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::get_untyped_deleter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::Destroy_ea131fb90  (binary VA: 0x131fb90)
// Original: boost::detail::sp_counted_impl_p<glotv3::SingletonMutexedProcessor>::~sp_counted_impl_p
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::Destroy_ea131fb90(boost::detail::sp_counted_impl_p<glotv3::SingletonMutexedProcessor::Self> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_thread_5aea3c::Destroy_ea131fbc0  (binary VA: 0x131fbc0)
// Original: boost::detail::sp_counted_impl_p<boost::thread>::~sp_counted_impl_p
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_thread_5aea3c::Destroy_ea131fbc0(boost::detail::sp_counted_impl_p<boost::thread::Self> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_glotv3_TrackingManager_b60d56::Destroy_ea131fbf0  (binary VA: 0x131fbf0)
// Original: boost::detail::sp_counted_impl_p<glotv3::TrackingManager>::~sp_counted_impl_p
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_glotv3_TrackingManager_b60d56::Destroy_ea131fbf0(boost::detail::sp_counted_impl_p<glotv3::TrackingManager::Self> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_thread_data_bi_bind_t_un_e508ca::Destroy_ea131fc20  (binary VA: 0x131fc20)
// Original: boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<unsigned int,boost::_mfi::mf0<unsigned int,boost::asio::io_service>,boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>>>::~sp_counted_impl_p
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_thread_data_bi_bind_t_un_e508ca::Destroy_ea131fc20(boost::detail::sp_counted_impl_p<boost::detail::thread_data<boost::_bi::bind_t<unsigned int, boost::_mfi::mf0<unsigned int, boost::asio::io_service>, boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::Destroy_ea131fc50  (binary VA: 0x131fc50)
// Original: boost::detail::sp_counted_impl_pda<glotv3::Event *,boost::detail::sp_ms_deleter<glotv3::Event>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::Destroy_ea131fc50(boost::detail::sp_counted_impl_pda<glotv3::Event::Self *, boost::detail::sp_ms_deleter<glotv3::Event::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20936E8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfGameLaunch_01dc36::Destroy_ea131fcc0  (binary VA: 0x131fcc0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume *,boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pda_glotv3_EventOfGameLaunch_01dc36::Destroy_ea131fcc0(boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093728);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfInstallRef_1ad983::Destroy_ea131fd30  (binary VA: 0x131fd30)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral *,boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pda_glotv3_EventOfInstallRef_1ad983::Destroy_ea131fd30(boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093748);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfGlotAppDet_91a83f::Destroy_ea131fda0  (binary VA: 0x131fda0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails *,boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pda_glotv3_EventOfGlotAppDet_91a83f::Destroy_ea131fda0(boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093768);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfReinstall_1f9413::Destroy_ea131fe10  (binary VA: 0x131fe10)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall *,boost::detail::sp_ms_deleter<glotv3::EventOfReinstall>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pda_glotv3_EventOfReinstall_1f9413::Destroy_ea131fe10(boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfReinstall::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093788);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfUserIdenti_eaf1cf::Destroy_ea131fe80  (binary VA: 0x131fe80)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged *,boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pda_glotv3_EventOfUserIdenti_eaf1cf::Destroy_ea131fe80(boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20937A8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::dispose  (binary VA: 0x131fef0)
// Original: boost::detail::sp_counted_impl_p<glotv3::SingletonMutexedProcessor>::dispose
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_glotv3_SingletonMutexedP_62efec::dispose(boost::detail::sp_counted_impl_p<glotv3::SingletonMutexedProcessor::Self> *self)
{
  void *v1;

  v1 = *((void **)self + 3);
  if ( v1 != nullptr )
  {
    glotv3::SingletonMutexedProcessor::Destroy(*((glotv3::SingletonMutexedProcessor::Self **)self + 3));
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::Destroy  (binary VA: 0x131ff30)
// Original: boost::detail::sp_counted_impl_pd<glotv3::DNSClient *,boost::detail::sp_ms_deleter<glotv3::DNSClient>>::~sp_counted_impl_pd
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::Destroy(boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093588);
  if ( !v1 )
  {
    glotv3::DNSClient::Destroy((boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::thread_data_bi_bind_t_unsigned_int_m_3c4980::Destroy  (binary VA: 0x131ff90)
// Original: boost::detail::thread_data<boost::_bi::bind_t<unsigned int,boost::_mfi::mf0<unsigned int,boost::asio::io_service>,boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>>::~thread_data
// ----------------------------------------------------------------------------
void boost::detail::thread_data_bi_bind_t_unsigned_int_m_3c4980::Destroy(boost::detail::thread_data<boost::_bi::bind_t<unsigned int, boost::_mfi::mf0<unsigned int, boost::asio::io_service>, boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20935C8);
  boost::detail::thread_data_base::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: boost::mutex::Destroy  (binary VA: 0x131ffc0)
// Original: boost::mutex::~mutex
// ----------------------------------------------------------------------------
void boost::mutex::Destroy(boost::mutex::Self *self)
{
  int v1;

  do
    v1 = pthread_mutex_destroy((pthread_mutex_t *)self);
  while ( v1 == 4 );
  if ( v1 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::Destroy  (binary VA: 0x1320560)
// Original: boost::detail::sp_counted_impl_pd<glotv3::EventParams *,boost::detail::sp_ms_deleter<glotv3::EventParams>>::~sp_counted_impl_pd
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::Destroy(boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20936A8);
  if ( !v1 )
    sub_1320410((int)(uintptr_t)(self) + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::dispose  (binary VA: 0x13205c0)
// Original: boost::detail::sp_counted_impl_pd<glotv3::EventParams *,boost::detail::sp_ms_deleter<glotv3::EventParams>>::dispose
// ----------------------------------------------------------------------------
boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> * boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::dispose(boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> *self)
{
  boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> *result;

  result = self;
  if ( *((uint8_t *)self + 16) != 0 )
    return (boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> *)sub_1320410((int)(uintptr_t)(self) + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfUserIdenti_eaf1cf::dispose  (binary VA: 0x13205e0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged *,boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfUserIdenti_eaf1cf::dispose(boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfReinstall_1f9413::dispose  (binary VA: 0x1320610)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall *,boost::detail::sp_ms_deleter<glotv3::EventOfReinstall>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfReinstall_1f9413::dispose(boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfReinstall::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfGlotAppDet_91a83f::dispose  (binary VA: 0x1320640)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails *,boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfGlotAppDet_91a83f::dispose(boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfInstallRef_1ad983::dispose  (binary VA: 0x1320670)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral *,boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfInstallRef_1ad983::dispose(boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfGameLaunch_01dc36::dispose  (binary VA: 0x13206a0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume *,boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfGameLaunch_01dc36::dispose(boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::dispose  (binary VA: 0x13206d0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::Event *,boost::detail::sp_ms_deleter<glotv3::Event>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::dispose(boost::detail::sp_counted_impl_pda<glotv3::Event::Self *, boost::detail::sp_ms_deleter<glotv3::Event::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::dispose  (binary VA: 0x1320700)
// Original: boost::detail::sp_counted_impl_pd<glotv3::DNSClient *,boost::detail::sp_ms_deleter<glotv3::DNSClient>>::dispose
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::dispose(boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *self)
{
  if ( *((uint8_t *)self + 16) != 0 )
  {
    glotv3::DNSClient::Destroy((boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: boost::detail::thread_data_bi_bind_t_unsigned_int_m_3c4980::Destroy_ea1320840  (binary VA: 0x1320840)
// Original: boost::detail::thread_data<boost::_bi::bind_t<unsigned int,boost::_mfi::mf0<unsigned int,boost::asio::io_service>,boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>>::~thread_data
// ----------------------------------------------------------------------------
void boost::detail::thread_data_bi_bind_t_unsigned_int_m_3c4980::Destroy_ea1320840(boost::detail::thread_data<boost::_bi::bind_t<unsigned int, boost::_mfi::mf0<unsigned int, boost::asio::io_service>, boost::_bi::list1<boost::reference_wrapper<boost::asio::io_service>>>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20935C8);
  boost::detail::thread_data_base::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::Destroy_ea1320890  (binary VA: 0x1320890)
// Original: boost::detail::sp_counted_impl_pd<glotv3::EventParams *,boost::detail::sp_ms_deleter<glotv3::EventParams>>::~sp_counted_impl_pd
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_EventParams_sp_ms_b141df::Destroy_ea1320890(boost::detail::sp_counted_impl_pd<glotv3::EventParams *, boost::detail::sp_ms_deleter<glotv3::EventParams>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20936A8);
  if ( !v1 )
    sub_1320410((int)(uintptr_t)(self) + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::Destroy_ea13208f0  (binary VA: 0x13208f0)
// Original: boost::detail::sp_counted_impl_pd<glotv3::DNSClient *,boost::detail::sp_ms_deleter<glotv3::DNSClient>>::~sp_counted_impl_pd
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_DNSClient_sp_ms_d_092e70::Destroy_ea13208f0(boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093588);
  if ( !v1 )
  {
    glotv3::DNSClient::Destroy((boost::detail::sp_counted_impl_pd<glotv3::DNSClient::Self *, boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfUserIdenti_eaf1cf::destroy  (binary VA: 0x1321370)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged *,boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfUserIdenti_eaf1cf::destroy(boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1320FA0();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfUserIdentifiersChanged::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13210F0((unsigned int *)self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfReinstall_1f9413::destroy  (binary VA: 0x13213a0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall *,boost::detail::sp_ms_deleter<glotv3::EventOfReinstall>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfReinstall_1f9413::destroy(boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfReinstall::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1320FA0();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfReinstall::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfReinstall::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13210F0((unsigned int *)self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfGlotAppDet_91a83f::destroy  (binary VA: 0x13213d0)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails *,boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfGlotAppDet_91a83f::destroy(boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1320FA0();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfGlotAppDetails::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13210F0((unsigned int *)self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfInstallRef_1ad983::destroy  (binary VA: 0x1321400)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral *,boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfInstallRef_1ad983::destroy(boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1320FA0();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfInstallReferral::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13210F0((unsigned int *)self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_EventOfGameLaunch_01dc36::destroy  (binary VA: 0x1321430)
// Original: boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume *,boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_EventOfGameLaunch_01dc36::destroy(boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1320FA0();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfGameLaunchResume::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13210F0((unsigned int *)self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::destroy  (binary VA: 0x1321460)
// Original: boost::detail::sp_counted_impl_pda<glotv3::Event *,boost::detail::sp_ms_deleter<glotv3::Event>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_pda_glotv3_Event_sp_ms_delet_cf573e::destroy(boost::detail::sp_counted_impl_pda<glotv3::Event::Self *, boost::detail::sp_ms_deleter<glotv3::Event::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1320FA0();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::Event::Self *, boost::detail::sp_ms_deleter<glotv3::Event::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13210F0((unsigned int *)self);
}

// ----------------------------------------------------------------------------
// Function: boost::shared_ptr_glotv3_TrackingManager_a0177d::Destroy  (binary VA: 0x1321490)
// Original: boost::shared_ptr<glotv3::TrackingManager>::~shared_ptr
// ----------------------------------------------------------------------------
void boost::shared_ptr_glotv3_TrackingManager_a0177d::Destroy(volatile int32_t **self)
{
  boost::detail::shared_count::Destroy(self + 1);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_thread_5aea3c::dispose  (binary VA: 0x13214c0)
// Original: boost::detail::sp_counted_impl_p<boost::thread>::dispose
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_thread_5aea3c::dispose(boost::detail::sp_counted_impl_p<boost::thread::Self> *self)
{
  volatile int32_t **v1;

  v1 = *((volatile int32_t ***)self + 3);
  if ( v1 != nullptr )
  {
    boost::thread::detach(*((boost::thread::Self **)self + 3));
    boost::detail::shared_count::Destroy(v1 + 1);
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::asio::detail::completion_handler_bi_bind_t_void_mfi_mf0_v_db8eb8::do_complete  (binary VA: 0x1321510)
// Original: boost::asio::detail::completion_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<boost::shared_ptr<glotv3::SingletonMutexedProcessor>>>>>::do_complete
// ----------------------------------------------------------------------------
void boost::asio::detail::completion_handler_bi_bind_t_void_mfi_mf0_v_db8eb8::do_complete(int a1, void *a2)
{
  int v2;
  uint32_t *v3;
  void (*v4)(int);
  typedef void (*_g4_t_v5)(int);
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef volatile int32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v5 = *((void (**)(int))a2 + 3);
  v7 = *((uint32_t *)a2 + 5);
  v6 = *((uint32_t *)a2 + 4);
  v8 = *((volatile int32_t **)a2 + 6);
  if ( v8 != nullptr )
    __sync_add_and_fetch(v8 + 1, 1);
  boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 6);
  v2 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v2 != 0 && (v3 = *(uint32_t **)(v2 + 4)) != nullptr && *v3 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 28);
    *v3 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    opDelete(a2);
  }
  if ( a1 != 0 )
  {
    v4 = v5;
    if ( (uintptr_t)(v5) < 0x10000u && ((uintptr_t)(v5) & 1) != 0 )
      v4 = *(void (**)(int))((char *)v5 + *(uint32_t *)(v6 + v7) - 1);
    v4(v6 + v7);
    _mm_sfence();
  }
  boost::detail::shared_count::Destroy(&v8);
}

// ----------------------------------------------------------------------------
// Function: boost::asio::detail::wait_handler_bi_bind_t_void_mfi_mf0_v_375cbe::do_complete  (binary VA: 0x13215d0)
// Original: boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<boost::shared_ptr<glotv3::SingletonMutexedProcessor>>>>>::do_complete
// ----------------------------------------------------------------------------
void boost::asio::detail::wait_handler_bi_bind_t_void_mfi_mf0_v_375cbe::do_complete(int a1, void *a2)
{
  volatile int32_t *v2;
  int v3;
  uint32_t *v4;
  void (*v5)(int);
  typedef void (*_g4_t_v6)(int);
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef volatile int32_t *_g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v6 = *((void (**)(int))a2 + 5);
  v8 = *((uint32_t *)a2 + 7);
  v7 = *((uint32_t *)a2 + 6);
  v9[0] = *((volatile int32_t **)a2 + 8);
  if ( v9[0] != nullptr )
    __sync_add_and_fetch(v9[0] + 1, 1);
  v2 = *((volatile int32_t **)a2 + 4);
  v9[1] = *((volatile int32_t **)a2 + 3);
  v9[2] = v2;
  boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 8);
  v3 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v3 != 0 && (v4 = *(uint32_t **)(v3 + 4)) != nullptr && *v4 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 36);
    *v4 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    opDelete(a2);
  }
  if ( a1 != 0 )
  {
    v5 = v6;
    if ( (uintptr_t)(v6) < 0x10000u && ((uintptr_t)(v6) & 1) != 0 )
      v5 = *(void (**)(int))((char *)v6 + *(uint32_t *)(v7 + v8) - 1);
    v5(v7 + v8);
    _mm_sfence();
  }
  boost::detail::shared_count::Destroy(v9);
}

// ----------------------------------------------------------------------------
// Function: boost::mutex::Construct  (binary VA: 0x13216a0)
// Original: boost::mutex::mutex
// ----------------------------------------------------------------------------
boost::mutex::Self * boost::mutex::Construct(pthread_mutex_t *self)
{
  boost::mutex::Self *result;
  typedef int (**_g4_t_v2)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  result = (boost::mutex::Self *)pthread_mutex_init(self, nullptr);
  if ( result != nullptr )
  {
    sub_1235D60(&v2, (int)(uintptr_t)(result), "boost:: mutex constructor failed in pthread_mutex_init");
    v2 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::Destroy  (binary VA: 0x1321cf0)
// Original: boost::detail::sp_counted_impl_pd<glotv3::TCPServer *,boost::detail::sp_ms_deleter<glotv3::TCPServer>>::~sp_counted_impl_pd
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::Destroy(boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20935A8);
  if ( !v1 )
    sub_13219F0((int)(uintptr_t)(self) + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::dispose  (binary VA: 0x1321d50)
// Original: boost::detail::sp_counted_impl_pd<glotv3::TCPServer *,boost::detail::sp_ms_deleter<glotv3::TCPServer>>::dispose
// ----------------------------------------------------------------------------
boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> * boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::dispose(boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> *self)
{
  boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> *result;

  result = self;
  if ( *((uint8_t *)self + 16) != 0 )
    return (boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> *)sub_13219F0((int)(uintptr_t)(self) + 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::Destroy_ea1321d70  (binary VA: 0x1321d70)
// Original: boost::detail::sp_counted_impl_pd<glotv3::TCPServer *,boost::detail::sp_ms_deleter<glotv3::TCPServer>>::~sp_counted_impl_pd
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_pd_glotv3_TCPServer_sp_ms_d_4d3a46::Destroy_ea1321d70(boost::detail::sp_counted_impl_pd<glotv3::TCPServer::Self *, boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20935A8);
  if ( !v1 )
    sub_13219F0((int)(uintptr_t)(self) + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_glotv3_TrackingManager_b60d56::dispose  (binary VA: 0x1322f90)
// Original: boost::detail::sp_counted_impl_p<glotv3::TrackingManager>::dispose
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_glotv3_TrackingManager_b60d56::dispose(boost::detail::sp_counted_impl_p<glotv3::TrackingManager::Self> *self)
{
  void *v1;

  v1 = *((void **)self + 3);
  if ( v1 != nullptr )
  {
    glotv3::TrackingManager::Destroy(*((volatile int32_t ***)self + 3));
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::bind_unsigned_int_asio_io_ser_01e93a  (binary VA: 0x13240f0)
// Original: boost::bind<unsigned int,boost::asio::io_service,boost::reference_wrapper<boost::asio::io_service>>
// ----------------------------------------------------------------------------
uint32_t * boost::bind_unsigned_int_asio_io_ser_01e93a(uint32_t *a1, int a2, int a3, int a4)
{
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_shared_ptr_thread_c8d33b::push_back  (binary VA: 0x1324110)
// Original: std::deque<boost::shared_ptr<boost::thread>>::push_back
// ----------------------------------------------------------------------------
char * g4_std::deque_shared_ptr_thread_c8d33b::push_back(void **a1, uint32_t *a2)
{
  char *result;
  char *v3;
  int v4;
  char *v5;
  char *v6;
  unsigned int v7;
  char *v8;
  int v9;
  char *v10;
  unsigned int v11;
  int v12;
  void *dest;
  int v14;
  char *v15;
  char *v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  char *v23;
  char *v24;
  void *v25;
  int v26;
  int v27;
  char *v28;
  char *src;
  int v30;

  result = (char *)a1[6];
  if ( result == (char *)a1[8] - 8 )
  {
    v5 = (char *)a1[9];
    v6 = (char *)*a1;
    v7 = (unsigned int)(uintptr_t)(a1[1]);
    if ( v7 - ((v5 - (char *)((uint8_t *)*a1)) >> 2) <= 1 )
    {
      v28 = (char *)a1[5];
      v30 = ((v5 - v28) >> 2) + 1;
      v21 = ((v5 - v28) >> 2) + 2;
      if ( v7 > 2 * v21 )
      {
        v18 = v5 + 4 - v28;
        v15 = &v6[4 * ((v7 - v21) >> 1)];
        if ( v28 <= v15 )
        {
          v20 = v18 >> 2;
          if ( v20 != 0 )
          {
            v24 = &v6[4 * ((v7 - v21) >> 1)];
            memmove(&v15[4 * v30 + -4 * v20], v28, 4 * v20);
            v15 = v24;
          }
        }
        else
        {
          v19 = v18 >> 2;
          if ( v19 != 0 )
          {
            v23 = &v6[4 * ((v7 - v21) >> 1)];
            memmove(v15, v28, 4 * v19);
            v15 = v23;
          }
        }
      }
      else
      {
        v11 = 3;
        if ( v7 != 0 )
        {
          v11 = 2 * v7 + 2;
          if ( v11 > 0x3FFFFFFF )
            sub_18FFEE0(v6, 2 * v21);
        }
        v12 = opNew(4 * v11);
        dest = (void *)(v12 + 4 * ((v11 - v21) >> 1));
        src = (char *)a1[5];
        v14 = ((uint8_t *)a1[9] + 4 - (uint8_t *)(src)) >> 2;
        if ( v14 != 0 )
        {
          v25 = (void *)(v12 + 4 * ((v11 - v21) >> 1));
          v27 = v12;
          memmove(dest, src, 4 * v14);
          v12 = v27;
          dest = v25;
        }
        v22 = (char *)dest;
        v26 = v12;
        opDelete(*a1);
        a1[1] = (void *)v11;
        *a1 = (void *)v26;
        v15 = v22;
      }
      a1[5] = v15;
      v16 = *(char **)v15;
      a1[3] = *(void **)v15;
      a1[4] = v16 + 512;
      v5 = &v15[4 * v30 - 4];
      a1[9] = v5;
      v17 = *(char **)v5;
      a1[7] = *(void **)v5;
      a1[8] = v17 + 512;
    }
    *((uint32_t *)v5 + 1) = opNew(0x200u);
    v8 = (char *)a1[6];
    if ( v8 != nullptr )
    {
      *(uint32_t *)v8 = *a2;
      v9 = a2[1];
      *((uint32_t *)v8 + 1) = v9;
      if ( v9 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1);
    }
    v10 = (char *)a1[9] + 4;
    a1[9] = v10;
    result = *(char **)v10;
    a1[7] = *(void **)v10;
    a1[6] = result;
    a1[8] = result + 512;
  }
  else
  {
    v3 = nullptr;
    if ( result != nullptr )
    {
      *(uint32_t *)result = *a2;
      v4 = a2[1];
      *((uint32_t *)result + 1) = v4;
      if ( v4 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
      v3 = (char *)a1[6];
    }
    a1[6] = v3 + 8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::assertion::detail::assertion_failed_msg_char_id_2f5b3e  (binary VA: 0x1324770)
// Original: boost::assertion::detail::assertion_failed_msg<char>
// ----------------------------------------------------------------------------
void boost::assertion::detail::assertion_failed_msg_char_id_2f5b3e(boost::assertion::detail::Self *self, char *a2, char *a3, char *a4, const char *a5)
{
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

  v5 = (int)(uintptr_t)(sub_192D410((int)(uintptr_t)(&unk_213A6E0), "***** Internal Program Error - assertion ("));
  v6 = (int)(uintptr_t)(sub_192D410(v5, (char *)self));
  v7 = (int)(uintptr_t)(sub_192D410(v6, ") failed in "));
  v8 = (int)(uintptr_t)(sub_192D410(v7, a3));
  v9 = (int)(uintptr_t)(sub_192D410(v8, ":\n"));
  v10 = (int)(uintptr_t)(sub_192D410(v9, a4));
  v11 = (int)(uintptr_t)(sub_192D490(v10, 40));
  v12 = (int)(uintptr_t)(sub_192D620(v11, a5));
  v13 = (int)(uintptr_t)(sub_192D410(v12, "): "));
  v14 = (int)(uintptr_t)(sub_192D410(v13, a2));
  sub_192CE40(v14);
  abort();
}

// ----------------------------------------------------------------------------
// Function: boost::algorithm::replace_first_string_char_8_char_1_5ed2d6  (binary VA: 0x1324a50)
// Original: boost::algorithm::replace_first<std::string,char [8],char [1]>
// ----------------------------------------------------------------------------
char * boost::algorithm::replace_first_string_char_8_char_1_5ed2d6(uint32_t *a1, char *a2, char *s)
{
  size_t v3;
  uint8_t *v4;
  char *result;
  int v6;
  char *v7;
  uint8_t *v8;
  uint8_t *v9;
  char *v10;
  uint8_t *v11;
  char v12;
  typedef char *_g4_t_v13;
  typedef size_t _g4_t_v14;
  typedef uint8_t _g4_t_v15[32];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  v14 = strlen(s);
  v3 = strlen(a2);
  v4 = (uint8_t *)*a1;
  result = *(char **)(*a1 - 4);
  if ( (int)(uintptr_t)(result) < 0 )
  {
    v6 = (int)(uintptr_t)(&v4[*((uint32_t *)v4 - 3)]);
  }
  else
  {
    sub_19397C0(a1);
    v4 = (uint8_t *)*a1;
    result = *(char **)(*a1 - 4);
    v6 = *a1 + *(uint32_t *)(*a1 - 12);
    if ( (int)(uintptr_t)(result) >= 0 )
    {
      result = (char *)sub_19397C0(a1);
      v4 = (uint8_t *)*a1;
    }
  }
  if ( v4 != (uint8_t *)v6 )
  {
    result = &a2[v3];
    if ( a2 != &a2[v3] )
    {
      while ( v4 == (uint8_t *)v6 || *v4 != *a2 )
      {
LABEL_13:
        if ( (uint8_t *)v6 == ++v4 )
          return result;
      }
      v7 = a2;
      v8 = v4;
      v13 = result;
      while ( 1 )
      {
        ++v8;
        ++v7;
        if ( v8 == (uint8_t *)v6 )
          break;
        if ( v13 == v7 )
        {
          v9 = v4;
          if ( v8 == v4 )
            return result;
          goto LABEL_17;
        }
        result = (char *)(uint8_t)*v7;
        if ( *v8 != (uint8_t)(uintptr_t)(result) )
        {
          result = v13;
          goto LABEL_13;
        }
      }
      result = v13;
      if ( v13 != v7 )
        goto LABEL_13;
      v9 = v4;
LABEL_17:
      v10 = &s[v14];
      if ( s == &s[v14] )
      {
LABEL_22:
        if ( v9 != v8 )
          return (char *)sub_1939370(v15);
      }
      else
      {
        result = s;
        v11 = v8;
        do
        {
          v12 = *result++;
          *v9++ = v12;
          if ( v10 == result )
          {
            v8 = v11;
            goto LABEL_22;
          }
        }
        while ( v9 != v11 );
        return (char *)sub_193A9B0((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[-*a1]), 0, result, v10 - result);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now  (binary VA: 0x1325710)
// Original: boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::expires_from_now
// ----------------------------------------------------------------------------
int boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(int a1, int a2, uint32_t *a3)
{
  int64_t v3; // rdi
  int v4;
  uint64_t v5; // rax
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  bool v11;
  uint32_t *v12;
  int v13;
  int v14;
  pthread_mutex_t *v15;
  int v16;
  pthread_mutex_t *spins;
  pthread_mutex_t **v18;
  uint32_t *kind;
  int v20;
  uint32_t *owner;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int64_t _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef uint32_t *_g4_t_v32;
  typedef pthread_mutex_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int64_t _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef pthread_mutex_t *_g4_t_v38;
  typedef char _g4_t_v39;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v26)) > _g4_s3 ? (4u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v27)) > _g4_s4 ? (4u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v28)) > _g4_s5 ? (8u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v29)) > _g4_s6 ? (16u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v30)) > _g4_s7 ? (24u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_mutex)) > _g4_s8 ? (24u + sizeof(_g4_t_mutex)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v32)) > _g4_s9 ? (28u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v33)) > _g4_s10 ? (32u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v34)) > _g4_s11 ? (36u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v35)) > _g4_s12 ? (40u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v36)) > _g4_s13 ? (48u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v37)) > _g4_s14 ? (52u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v38)) > _g4_s15 ? (56u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v39)) > _g4_s16 ? (60u + sizeof(_g4_t_v39)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);

  v36 = 0;
  v37 = (int)(uintptr_t)(sub_18F81E0(a2, a1));
  v32 = *(uint32_t **)a2;
  sub_1320960(&v35);
  HIDWORD(v3) = *a3;
  LODWORD(v3) = a3[1];
  v28 = v35;
  if ( ((unsigned int)v35 | (HIDWORD(v35) + 0x80000000)) != 0
    && (v4 = ~(uint32_t)v35, (~(uint32_t)v35 | HIDWORD(v35) ^ 0x7FFFFFFF) != 0) )
  {
    HIDWORD(v5) = v35 ^ 0xFFFFFFFE;
    if ( v35 == 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_8;
    if ( (HIDWORD(v3) | ((uint32_t)v3 + 0x80000000)) != 0 )
    {
      v30 = ~HIDWORD(v3);
      HIDWORD(v5) = v3 ^ 0x7FFFFFFF | ~HIDWORD(v3);
      if ( HIDWORD(v5) != 0 )
      {
        HIDWORD(v5) = HIDWORD(v3) ^ 0xFFFFFFFE;
        if ( v3 != 0xFFFFFFFE7FFFFFFFLL )
        {
          v28 = __PAIR64__(v3, HIDWORD(v3)) + v35;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v30 = ~HIDWORD(v3);
    }
    if ( (HIDWORD(v3) | ((uint32_t)v3 + 0x80000000)) == 0 )
      goto LABEL_44;
    HIDWORD(v5) = v3 ^ 0x7FFFFFFF | v30;
    if ( HIDWORD(v5) != 0 )
    {
      v28 = 0x7FFFFFFFFFFFFFFELL;
      HIDWORD(v5) = HIDWORD(v3) ^ 0xFFFFFFFE;
      if ( v3 != 0xFFFFFFFE7FFFFFFFLL )
        goto LABEL_37;
LABEL_8:
      if ( *(uint8_t *)(a2 + 12) != 0 )
        goto LABEL_9;
LABEL_38:
      v13 = 0;
      sub_18F81E0(a2, HIDWORD(v5));
      v20 = a2;
      goto LABEL_39;
    }
  }
  else
  {
    HIDWORD(v5) = HIDWORD(v3) ^ 0xFFFFFFFE;
    if ( v3 == 0xFFFFFFFE7FFFFFFFLL )
      goto LABEL_52;
    v4 = ~(uint32_t)v35;
  }
  if ( (v4 | HIDWORD(v35) ^ 0x7FFFFFFF) == 0 )
  {
    if ( (HIDWORD(v3) | ((uint32_t)v3 + 0x80000000)) != 0 )
      goto LABEL_8;
    goto LABEL_52;
  }
  HIDWORD(v5) = ~HIDWORD(v3);
  v30 = ~HIDWORD(v3);
LABEL_44:
  if ( ((unsigned int)v35 | (HIDWORD(v35) + 0x80000000)) == 0 )
  {
    if ( (v30 | (unsigned int)v3 ^ 0x7FFFFFFF) != 0 )
      goto LABEL_8;
LABEL_52:
    v28 = 0x7FFFFFFFFFFFFFFELL;
    goto LABEL_8;
  }
  v28 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (v30 | (unsigned int)v3 ^ 0x7FFFFFFF) == 0 )
    goto LABEL_8;
  v28 = 0x8000000000000000LL;
  if ( (HIDWORD(v3) | ((uint32_t)v3 + 0x80000000)) == 0 )
    goto LABEL_8;
LABEL_37:
  v28 = __PAIR64__(v3, HIDWORD(v3)) + v35;
  v5 = __PAIR64__(v3, HIDWORD(v3)) + v35;
  if ( *(uint8_t *)(a2 + 12) == 0 )
    goto LABEL_38;
LABEL_9:
  v34 = (uint32_t *)(a2 + 16);
  v33 = (pthread_mutex_t *)v32[13];
  mutex = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v33) + (24 * (1)));
  pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v33) + (24 * (1))));
  if ( *(uint32_t *)(a2 + 32) != 0 || (v6 = v32, v34 == (uint32_t *)v32[9]) )
  {
    v7 = nullptr;
    v29 = nullptr;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(uint32_t **)(a2 + 16);
      if ( v9 == nullptr )
      {
        v12 = v7;
        v13 = v8;
        v14 = a2;
LABEL_22:
        v24 = v14;
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(
          (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *)(v32 + 7),
          v34);
        v14 = v24;
        goto LABEL_23;
      }
      v23 = v8;
      v9[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v8, v6));
      v9[3] = 125;
      v10 = *(uint32_t **)(a2 + 16);
      if ( v10 != nullptr )
      {
        v6 = (uint32_t *)*v10;
        v11 = *v10 == 0;
        *(uint32_t *)(a2 + 16) = *v10;
        if ( v11 )
          *(uint32_t *)(a2 + 20) = 0;
        *v10 = 0;
      }
      *v9 = 0;
      if ( v7 != nullptr )
        *v7 = (uint32_t)(uintptr_t)(v9);
      else
        v29 = v9;
      v8 = v23 + 1;
      if ( v23 == -2 )
        break;
      v7 = v9;
    }
    v13 = -1;
    v14 = a2;
    v12 = v9;
    if ( *(uint32_t *)(a2 + 16) == 0 )
      goto LABEL_22;
LABEL_23:
    v25 = v14;
    pthread_mutex_unlock(mutex);
    v15 = v33;
    v16 = v25;
    spins = (pthread_mutex_t *)(uintptr_t)(G4_MUTEX_SPINS((pthread_mutex_t *)v33));
    if ( v29 != nullptr )
    {
      if ( ((uint8_t *)(spins))[20] == 0 )
        goto LABEL_53;
      v18 = *(pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
      v16 = v25;
      if ( v18 == nullptr )
        goto LABEL_53;
      while ( spins != *v18 )
      {
        v18 = (pthread_mutex_t **)v18[2];
        if ( v18 == nullptr )
          goto LABEL_53;
      }
      v15 = v18[1];
      if ( v15 != nullptr )
      {
        kind = (uint32_t *)((int32_t *)(v15))[3];
        if ( kind != nullptr )
          *kind = (uint32_t)(uintptr_t)(v29);
        else
          ((int32_t *)(v15))[2] = (int)(uintptr_t)(v29);
        ((int32_t *)(v15))[3] = (int)(uintptr_t)(v12);
      }
      else
      {
LABEL_53:
        v27 = v16;
        v38 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (1)));
        pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (1))));
        owner = ((uint32_t *)(intptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (2)))));
        v39 = 1;
        if ( owner != nullptr )
          *owner = (uint32_t)(uintptr_t)(v29);
        else
          G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (2)))) = (unsigned int)(uintptr_t)(v29);
        G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (2)))) = (int)(uintptr_t)(v12);
        boost::asio::detail::task_io_service::wake_one_thread_and_unlock(
          (boost::asio::detail::task_io_service *)spins,
          (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *)&v38);
        v16 = v27;
        if ( v39 != 0 )
        {
          pthread_mutex_unlock(v38);
          v16 = v27;
        }
      }
    }
  }
  else
  {
    v13 = 0;
    pthread_mutex_unlock(mutex);
    v16 = a2;
  }
  *(uint8_t *)(v16 + 12) = 0;
  v26 = v16;
  sub_18F81E0(v16, v15);
  v20 = v26;
LABEL_39:
  *(uint64_t *)(v20 + 4) = v28;
  sub_18F81E0(v20, HIDWORD(v28));
  return v13;
}

// ----------------------------------------------------------------------------
// Function: boost::asio::detail::deadline_timer_service_asio_time_traits_posix_t_ba0efa::async_wait_bi_bind_t_void_mfi_mf0_v_55a673  (binary VA: 0x1325b90)
// Original: boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<boost::shared_ptr<glotv3::SingletonMutexedProcessor>>>>>
// ----------------------------------------------------------------------------
int boost::asio::detail::deadline_timer_service_asio_time_traits_posix_t_ba0efa::async_wait_bi_bind_t_void_mfi_mf0_v_55a673(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t **v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  bool v13;
  int v15;
  uint32_t v16;
  g4_x86_epoll_event *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef g4_x86_epoll_event _g4_t_event;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_mutex)) > _g4_s1 ? (12u + sizeof(_g4_t_mutex)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_event)) > _g4_s2 ? (20u + sizeof(_g4_t_event)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 12u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 20u);

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
        if ( *(uint8_t *)v7 > 0x23u )
        {
          *((uint8_t *)v7 + 36) = *(uint8_t *)v7;
          goto LABEL_8;
        }
        opDelete(v7);
      }
    }
  }
  v8 = opNew(0x25u);
  *(uint8_t *)(v8 + 36) = 36;
  v7 = (uint32_t *)v8;
LABEL_8:
  *v7 = 0;
  v7[1] = (uint32_t)(uintptr_t)(((void (*)(int, void *))boost::asio::detail::wait_handler_bi_bind_t_void_mfi_mf0_v_375cbe::do_complete));
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v5, v4));
  v9 = a3[1];
  v7[5] = *a3;
  v7[6] = v9;
  v7[7] = a3[2];
  v10 = a3[3];
  v7[8] = v10;
  if ( v10 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1);
  *(uint8_t *)(a2 + 8) = 1;
  v11 = *(uint32_t *)(a1 + 32);
  mutex = (pthread_mutex_t *)(v11 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v11 + 24));
  if ( *(uint8_t *)(v11 + 48) != 0 )
  {
    boost::asio::detail::task_io_service::post_immediate_completion(*(pthread_mutex_t **)(v11 + 20), v7, 0);
    return pthread_mutex_unlock(mutex);
  }
  else
  {
    if ( *(uint32_t *)(a2 + 28) == 0 )
    {
      v24 = a2 + 12;
      if ( a2 + 12 != *(uint32_t *)(a1 + 16) )
      {
        v15 = (*(uint32_t *)(a1 + 24) - *(uint32_t *)(a1 + 20)) >> 2;
        event.data.fd = *(uint32_t *)(a2 + 4);
        *(uint32_t *)(a2 + 20) = -1431655765 * v15;
        v16 = *(uint32_t *)a2;
        HIDWORD(event.data.u64) = a2 + 12;
        event.events = v16;
        v17 = *(g4_x86_epoll_event **)(a1 + 24);
        if ( v17 == *(g4_x86_epoll_event **)(a1 + 28) )
        {
          g4_std::vector_asio_timer_queue_asio_fo_ee7ae8::M_insert_aux(
            a1 + 20,
            *(char **)(a1 + 24),
            (int *)&event);
          v20 = a1;
          v19 = *(uint32_t *)(a1 + 24);
        }
        else
        {
          v18 = 0;
          if ( v17 != nullptr )
          {
            *v17 = event;
            v18 = *(uint32_t *)(a1 + 24);
          }
          v19 = v18 + 12;
          v20 = a1;
          *(uint32_t *)(a1 + 24) = v19;
        }
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::up_heap(
          (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *)(v20 + 8),
          -1431655765 * ((v19 - *(uint32_t *)(v20 + 20)) >> 2) - 1);
        v21 = a1;
        v22 = *(uint32_t *)(a1 + 16);
        *(uint32_t *)(a2 + 28) = 0;
        *(uint32_t *)(a2 + 24) = v22;
        v23 = *(uint32_t *)(a1 + 16);
        if ( v23 != 0 )
        {
          v21 = a1;
          *(uint32_t *)(v23 + 16) = v24;
        }
        *(uint32_t *)(v21 + 16) = v24;
      }
    }
    *v7 = 0;
    v12 = *(uint32_t **)(a2 + 16);
    if ( v12 != nullptr )
    {
      *v12 = (uint32_t)(uintptr_t)(v7);
      *(uint32_t *)(a2 + 16) = (uint32_t)(uintptr_t)(v7);
    }
    else
    {
      *(uint32_t *)(a2 + 16) = (uint32_t)(uintptr_t)(v7);
      *(uint32_t *)(a2 + 12) = (uint32_t)(uintptr_t)(v7);
    }
    v13 = false;
    if ( *(uint32_t *)(a2 + 20) == 0 )
      v13 = *(uint32_t *)(a2 + 12) == (uint32_t)(uintptr_t)(v7);
    __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)(v11 + 20) + 48), 1u);
    if ( v13 )
    {
      event.events = 0x80000009;
      event.data.u64 = (unsigned int)(v11 + 28);
      g4_epoll_ctl_x86(*(uint32_t *)(v11 + 36), 3, *(uint32_t *)(v11 + 28), &event);
    }
    return pthread_mutex_unlock(mutex);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::singleton_pool_pool_allocator_tag_204u_12b781::get_pool  (binary VA: 0x1328fe0)
// Original: boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex,128u,0u>::get_pool
// ----------------------------------------------------------------------------
pthread_mutex_t * boost::singleton_pool_pool_allocator_tag_204u_12b781::get_pool()
{
  int v0;
  typedef int (**_g4_t_v2)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  if ( g4_fnstatic_ec81e02332 == 0 )
  {
    g4_fnstatic_ec81e02332 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        sub_1235D60(&v2, v0, "boost:: mutex constructor failed in pthread_mutex_init");
        v2 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
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
  return (pthread_mutex_t *)(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::Destroy  (binary VA: 0x132d6d0)
// Original: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::~sp_counted_impl_p
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::Destroy(boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int, 32u, 624u, 397u, 31u, 2567483615u, 11u, 4294967295u, 7u, 2636928640u, 15u, 4022730752u, 18u, 1812433253u>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::get_deleter  (binary VA: 0x132d6f0)
// Original: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::get_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::get_deleter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::get_untyped_deleter  (binary VA: 0x132d700)
// Original: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::get_untyped_deleter
// ----------------------------------------------------------------------------
int boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::get_untyped_deleter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::Destroy_ea132d710  (binary VA: 0x132d710)
// Original: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::~sp_counted_impl_p
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::Destroy_ea132d710(boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int, 32u, 624u, 397u, 31u, 2567483615u, 11u, 4294967295u, 7u, 2636928640u, 15u, 4022730752u, 18u, 1812433253u>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::dispose  (binary VA: 0x132d740)
// Original: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::dispose
// ----------------------------------------------------------------------------
void boost::detail::sp_counted_impl_p_random_mersenne_twister_74f662::dispose(void **self)
{
  opDelete(*(self + 3));
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::basic_random_generator_random_mersenne_twister_c017c0::Destroy  (binary VA: 0x132dae0)
// Original: boost::uuids::basic_random_generator<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::~basic_random_generator
// ----------------------------------------------------------------------------
void boost::uuids::basic_random_generator_random_mersenne_twister_c017c0::Destroy(boost::uuids::basic_random_generator<boost::random::mersenne_twister_engine<unsigned int, 32u, 624u, 397u, 31u, 2567483615u, 11u, 4294967295u, 7u, 2636928640u, 15u, 4022730752u, 18u, 1812433253u>> *self)
{
  volatile int32_t *v1;

  v1 = *((volatile int32_t **)self + 1);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    if ( __sync_fetch_and_add(v1 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v1, 12);
  }
}



// ============================================================================
// Address:   0x132db40 (size: 10 bytes)
// Symbol:    _ZThn8_N5boost16exception_detail19error_info_injectorISt13runtime_errorED1Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_122(
        boost::exception_detail::error_info_injector<std::runtime_error> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<std::runtime_error> *)((char *)self - 8));
}


// ============================================================================
// Address:   0x132db50 (size: 97 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorISt13runtime_errorED2Ev
// Demangled: boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
// ============================================================================
// Alternative name is '_ZN5boost16exception_detail19error_info_injectorISt13runtime_errorED1Ev'
static void g4_boost_err_dtor_1(
        boost::exception_detail::error_info_injector<std::runtime_error> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093828);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)self + 3);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 3)) != 0 )
    *((uint32_t *)self + 3) = 0;
  sub_1903D80(self);
}


// ============================================================================
// Address:   0x132dbc0 (size: 10 bytes)
// Symbol:    _ZThn8_N5boost16exception_detail19error_info_injectorISt16invalid_argumentED1Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector()
// ============================================================================
static void g4_thunk_123(
        boost::exception_detail::error_info_injector<std::invalid_argument> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<std::invalid_argument> *)((char *)self - 8));
}


// ============================================================================
// Address:   0x132dbd0 (size: 97 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED2Ev
// Demangled: boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector()
// ============================================================================
// Alternative name is '_ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED1Ev'
static void g4_boost_err_dtor_2(
        boost::exception_detail::error_info_injector<std::invalid_argument> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20938E8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)self + 3);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 3)) != 0 )
    *((uint32_t *)self + 3) = 0;
  sub_1904080(self);
}


// ============================================================================
// Address:   0x132dc40 (size: 7 bytes)
// Symbol:    _ZThn8_N5boost16exception_detail19error_info_injectorISt13runtime_errorED0Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_124(
        boost::exception_detail::error_info_injector<std::runtime_error> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<std::runtime_error> *)((char *)self - 8));
}


// ============================================================================
// Address:   0x132dc50 (size: 105 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorISt13runtime_errorED0Ev
// Demangled: boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector()
// ============================================================================
static void g4_boost_err_dtor_3(
        boost::exception_detail::error_info_injector<std::runtime_error> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093828);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)self + 3);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 3)) != 0 )
    *((uint32_t *)self + 3) = 0;
  sub_1903D80(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x132dcc0 (size: 7 bytes)
// Symbol:    _ZThn8_N5boost16exception_detail19error_info_injectorISt16invalid_argumentED0Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector()
// ============================================================================
static void g4_thunk_125(
        boost::exception_detail::error_info_injector<std::invalid_argument> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<std::invalid_argument> *)((char *)self - 8));
}


// ============================================================================
// Address:   0x132dcd0 (size: 105 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED0Ev
// Demangled: boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector()
// ============================================================================
static void g4_boost_err_dtor_4(
        boost::exception_detail::error_info_injector<std::invalid_argument> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20938E8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)self + 3);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 3)) != 0 )
    *((uint32_t *)self + 3) = 0;
  sub_1904080(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x132dd40 (size: 1115 bytes)
// Symbol:    _ZN5boost5uuids6detail4sha113process_blockEv
// Demangled: boost::uuids::detail::sha1::process_block(void)
// ============================================================================
int32_t boost::uuids::detail::sha1::process_block(boost::uuids::detail::sha1 *self)
{
  __m128i v1; // xmm7
  __m128i v2; // xmm3
  __m128i v3; // xmm2
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm4
  __m128i v7; // xmm1
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm7
  __m128i v17; // xmm6
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __m128i v21; // xmm5
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  __m128i v24; // xmm2
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __m128i v27; // xmm6
  __m128i v28; // xmm2
  __m128i v29; // xmm4
  __m128i v30; // xmm3
  __m128i v31; // xmm1
  __m128i v32; // xmm3
  __m128i v33; // xmm2
  __m128i v34; // xmm4
  __m128i v35; // xmm6
  __m128i v36; // xmm7
  __m128i v37; // xmm1
  __m128i v38; // xmm3
  __m128i v39; // xmm6
  __m128i v40; // xmm5
  __m128i v41; // xmm4
  __m128i v42; // xmm7
  __m128i v43; // xmm6
  __m128i v44; // xmm7
  __m128i v45; // xmm4
  __m128i v46; // xmm6
  __m128i v47; // xmm3
  __m128i v48; // xmm7
  int32_t v49;
  uint64_t v50;
  int32_t v51;
  int v52;
  int32_t v53;
  int32_t v54;
  int32_t v55;
  int32_t v56;
  int32_t v57;
  int32_t v58;
  bool v59;
  uint32_t *v60;
  int32_t v61;
  int32_t v62;
  int32_t v63;
  int32_t v64;
  int32_t v65;
  unsigned int v66;
  int32_t v67;
  int32_t v68;
  int32_t v69;
  int32_t v70;
  int32_t result;
  typedef int32_t _g4_t_v72;
  typedef int32_t _g4_t_v73;
  typedef int32_t _g4_t_v74;
  typedef int32_t _g4_t_v75;
  typedef int32_t _g4_t_v76;
  typedef int _g4_t_v77;
  typedef __m128i _g4_t_v78;
  typedef __m128i _g4_t_v79;
  typedef __m128i _g4_t_v80;
  typedef __m128i _g4_t_v81[3];
  typedef __m128i _g4_t_v82;
  typedef uint32_t _g4_t_v83[6];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (8u + sizeof(_g4_t_v72)) > _g4_s0 ? (8u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v73)) > _g4_s1 ? (12u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v74)) > _g4_s2 ? (16u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v75)) > _g4_s3 ? (20u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v76)) > _g4_s4 ? (24u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v77)) > _g4_s5 ? (28u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v78)) > _g4_s6 ? (32u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v79)) > _g4_s7 ? (48u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v80)) > _g4_s8 ? (64u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v81)) > _g4_s9 ? (80u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v82)) > _g4_s10 ? (128u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (384u + sizeof(_g4_t_v83)) > _g4_s11 ? (384u + sizeof(_g4_t_v83)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 8u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 12u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 16u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 20u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 28u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 80u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 128u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 384u);

  v1 = *(__m128i *)((char *)self + 20);
  v2 = *(__m128i *)((char *)self + 36);
  v3 = _mm_unpackhi_epi8(v1, v2);
  v4 = *(__m128i *)((char *)self + 52);
  v5 = _mm_unpacklo_epi8(v1, v2);
  v6 = _mm_unpacklo_epi8(v5, v3);
  v7 = _mm_unpackhi_epi8(v5, v3);
  v8 = *(__m128i *)((char *)self + 68);
  v9 = _mm_unpackhi_epi8(v6, v7);
  v10 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v1, v2), v3), v7);
  v11 = _mm_unpackhi_epi8(v4, v8);
  v12 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v6, v7), v9);
  v13 = _mm_unpacklo_epi8(v4, v8);
  v14 = _mm_unpacklo_epi8(v13, v11);
  v15 = _mm_unpackhi_epi8(v13, v11);
  v16 = _mm_unpackhi_epi8(v10, v9);
  v17 = _mm_unpackhi_epi8(v14, v15);
  v18 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v14, v15), v17);
  v19 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v4, v8), v11), v15);
  v20 = _mm_unpacklo_epi8(v12, v18);
  v21 = _mm_unpackhi_epi8(v12, v18);
  v22 = _mm_unpackhi_epi8(v19, v17);
  v23 = _mm_unpackhi_epi8(v20, v21);
  v24 = _mm_unpacklo_epi8(v20, v21);
  v25 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v12, v18), v21);
  v26 = _mm_unpackhi_epi8(v16, v22);
  v27 = _mm_unpackhi_epi8(v24, v23);
  v28 = _mm_unpacklo_epi8(v24, v23);
  v29 = _mm_unpacklo_epi8(v25, v23);
  v30 = _mm_unpacklo_epi8(v16, v22);
  v31 = _mm_unpacklo_epi8(v30, v26);
  v32 = _mm_unpackhi_epi8(v30, v26);
  v33 = _mm_unpacklo_epi8(v28, v27);
  v34 = _mm_unpackhi_epi8(v29, v27);
  v35 = _mm_unpackhi_epi8(v31, v32);
  v36 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v16, v22), v26), v32), v35);
  v37 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v31, v32), v35);
  v38 = v34;
  v39 = _mm_unpacklo_epi8(v33, g4_m128_from<__m128i>(0LL));
  v80 = _mm_unpackhi_epi8(v34, g4_m128_from<__m128i>(0LL));
  v78 = _mm_unpackhi_epi8(v36, g4_m128_from<__m128i>(0LL));
  v40 = _mm_unpacklo_epi8(v37, g4_m128_from<__m128i>(0LL));
  v41 = _mm_unpacklo_epi8(v36, g4_m128_from<__m128i>(0LL));
  v42 = _mm_unpacklo_epi16(v39, g4_m128_from<__m128i>(0LL));
  v43 = _mm_or_si128(
          _mm_or_si128(
            _mm_slli_epi32(_mm_unpackhi_epi16(v39, g4_m128_from<__m128i>(0LL)), 0x18u),
            _mm_slli_epi32(_mm_unpackhi_epi16(v40, g4_m128_from<__m128i>(0LL)), 0x10u)),
          _mm_unpackhi_epi16(v41, g4_m128_from<__m128i>(0LL)));
  v79 = _mm_or_si128(
          _mm_unpacklo_epi16(v41, g4_m128_from<__m128i>(0LL)),
          _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v40, g4_m128_from<__m128i>(0LL)), 0x10u), _mm_slli_epi32(v42, 0x18u)));
  v44 = _mm_unpacklo_epi8(v38, g4_m128_from<__m128i>(0LL));
  v45 = _mm_unpackhi_epi8(v37, g4_m128_from<__m128i>(0LL));
  v46 = _mm_or_si128(v43, _mm_slli_epi32(_mm_unpackhi_epi16(v44, g4_m128_from<__m128i>(0LL)), 8u));
  v47 = _mm_unpackhi_epi8(v33, g4_m128_from<__m128i>(0LL));
  v48 = _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v44, g4_m128_from<__m128i>(0LL)), 8u), v79);
  v79 = v48;
  v81[0] = v48;
  v82 = _mm_or_si128(
          _mm_or_si128(
            _mm_or_si128(
              _mm_slli_epi32(_mm_unpackhi_epi16(v47, g4_m128_from<__m128i>(0LL)), 0x18u),
              _mm_slli_epi32(_mm_unpackhi_epi16(v45, g4_m128_from<__m128i>(0LL)), 0x10u)),
            _mm_unpackhi_epi16(v78, g4_m128_from<__m128i>(0LL))),
          _mm_slli_epi32(_mm_unpackhi_epi16(v80, g4_m128_from<__m128i>(0LL)), 8u));
g4_m128_lane<int32_t>(v79, 0) =g4_m128_lane<int32_t>(v48, 1);
  v81[1] = v46;
  v49 =g4_m128_lane<int32_t>(v82, 1);
  v81[2] = _mm_or_si128(
             _mm_or_si128(
               _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v47, g4_m128_from<__m128i>(0LL)), 0x18u),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v45, g4_m128_from<__m128i>(0LL)), 0x10u)),
               _mm_unpacklo_epi16(v78, g4_m128_from<__m128i>(0LL))),
             _mm_slli_epi32(_mm_unpacklo_epi16(v80, g4_m128_from<__m128i>(0LL)), 8u));
  v50 =g4_m128_lane<uint64_t>(v82, 1);
  v51 = 16;
g4_m128_lane<int32_t>(v78, 0) =g4_m128_lane<int32_t>(v48, 0);
  while ( 1 )
  {
    v52 = *(&v77 + v51) ^g4_m128_lane<int32_t>(v79, v51 + 1) ^ v50;
    v53 =g4_m128_lane<int32_t>(v79, v51 + 2) ^ HIDWORD(v50);
    v54 =g4_m128_lane<int32_t>(v78, 0) ^ *(&v76 + v51) ^g4_m128_lane<int32_t>(v79, v51) ^ v49;
g4_m128_lane<int32_t>(v78, 0) = *(&v77 + v51);
    v55 =g4_m128_lane<int32_t>(v79, 0) ^ v52;
g4_m128_lane<int32_t>(v79, 0) =g4_m128_lane<int32_t>(v78, v51);
    v56 = *(&v76 + v51) ^g4_m128_lane<int32_t>(v79, 0) ^ v53;
g4_m128_lane<int32_t>(v80, 0) = v51 + 3;
    v49 = __builtin_rotateright32(v54, 31);
    v57 = __builtin_rotateright32(v55, 31);
g4_m128_lane<int32_t>(v81[0], v51) = v49;
    v58 = __builtin_rotateright32(v56, 31);
    v59 =g4_m128_lane<int32_t>(v80, 0) == 79;
g4_m128_lane<int32_t>(v81[0], v51 + 1) = v57;
g4_m128_lane<int32_t>(v81[0], v51 + 2) = v58;
    v50 = __PAIR64__(v58, v57);
    if ( v59 )
      break;
    v51 =g4_m128_lane<int32_t>(v80, 0);
  }
  v60 = v83;
  do
  {
    v60[3] = __builtin_rotateright32(*(v60 - 13) ^ *(v60 - 11) ^ *v60 ^ *(v60 - 5), 31);
    ++v60;
  }
  while ( v60 != &v83[77 - v51] );
  v61 = *((uint32_t *)self + 1);
  v76 = *(uint32_t *)self;
  v62 = *((uint32_t *)self + 3);
  v63 = *((uint32_t *)self + 2);
  v75 = v61;
g4_m128_lane<int32_t>(v79, 0) = v61;
  v73 = v62;
  v64 = v62;
  v72 = *((uint32_t *)self + 4);
g4_m128_lane<int32_t>(v78, 0) = v72;
  v74 = v63;
  v65 = v63;
g4_m128_lane<int32_t>(v80, 0) = v76;
  v66 = 0;
  while ( 1 )
  {
    if ( v66 <= 0x13 )
    {
      v77 = 1518500249;
      v67 = v65 &g4_m128_lane<int32_t>(v79, 0) | v64 & ~g4_m128_lane<int32_t>(v79, 0);
    }
    else if ( v66 <= 0x27 )
    {
      v77 = 1859775393;
      v67 = v64 ^ v65 ^g4_m128_lane<int32_t>(v79, 0);
    }
    else if ( v66 > 0x3B )
    {
      v77 = -899497514;
      v67 = v64 ^ v65 ^g4_m128_lane<int32_t>(v79, 0);
    }
    else
    {
      v77 = -1894007588;
      v67 = v65 & v64 |g4_m128_lane<int32_t>(v79, 0) & (v65 | v64);
    }
    v68 =g4_m128_lane<int32_t>(v78, 0) +g4_m128_lane<int32_t>(v81[0], v66++) + __builtin_rotateright32(g4_m128_lane<int32_t>(v80, 0), 27);
    v69 = v68 + v67 + v77;
    v70 = __builtin_rotateright32(g4_m128_lane<int32_t>(v79, 0), 2);
    if ( v66 == 80 )
      break;
g4_m128_lane<int32_t>(v78, 0) = v64;
    v64 = v65;
    v65 = v70;
g4_m128_lane<int32_t>(v79, 0) =g4_m128_lane<int32_t>(v80, 0);
g4_m128_lane<int32_t>(v80, 0) = v69;
  }
  *(uint32_t *)self = v76 + v69;
  result = v75 +g4_m128_lane<int32_t>(v80, 0);
  *((uint32_t *)self + 1) = v75 +g4_m128_lane<int32_t>(v80, 0);
  *((uint32_t *)self + 2) = v74 + v70;
  *((uint32_t *)self + 3) = v73 + v65;
  *((uint32_t *)self + 4) = v72 + v64;
  return result;
}


// ============================================================================
// Address:   0x132e1a0 (size: 10179 bytes)
// Symbol:    _ZN5boost5uuids6detail8seed_rng19sha1_random_digest_Ev
// Demangled: boost::uuids::detail::seed_rng::sha1_random_digest_(void)
// ============================================================================
int boost::uuids::detail::seed_rng::sha1_random_digest_(FILE **self)
{
  unsigned int v1;
  void *v2;
  unsigned int v3;
  uint64_t v4;
  int *v5;
  unsigned int v6;
  __m128i *v7;
  __m128i *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int *v13;
  unsigned int v14;
  int8_t *v15;
  int8_t *v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  __m128i *v23;
  int v24;
  __m128i v25; // xmm0
  int result;
  FILE **v27;
  int32_t v28;
  bool v29;
  __m128i v30; // xmm5
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm5
  __m128i v34; // xmm4
  __m128i v35; // xmm1
  __m128i v36; // xmm5
  __m128i v37; // xmm4
  __m128i v38; // xmm1
  __m128i v39; // xmm7
  __m128i v40; // xmm2
  __m128i v41; // xmm1
  __m128i v42; // xmm3
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  __m128i v45; // xmm3
  __m128i v46; // xmm2
  __m128i v47; // xmm7
  __m128i v48; // xmm2
  __m128i v49; // xmm5
  __m128i v50; // xmm7
  __m128i v51; // xmm1
  __m128i v52; // xmm2
  __m128i v53; // xmm5
  __m128i v54; // xmm7
  __m128i v55; // xmm1
  __m128i v56; // xmm7
  __m128i v57; // xmm4
  __m128i v58; // xmm3
  __m128i v59; // xmm1
  __m128i v60; // xmm4
  __m128i v61; // xmm2
  __m128i v62; // xmm4
  __m128i v63; // xmm1
  __m128i v64; // xmm5
  __m128i v65; // xmm3
  __m128i v66; // xmm2
  int v67;
  uint64_t v68; // kr08_8
  int v69;
  int v70;
  int32_t v71;
  int32_t v72;
  uint32_t *v73;
  int v74;
  unsigned int v75;
  int v76;
  int32_t v77;
  int v78;
  int v79;
  int v80;
  __m128i v81; // xmm5
  __m128i v82; // xmm2
  __m128i v83; // xmm1
  __m128i v84; // xmm5
  __m128i v85; // xmm4
  __m128i v86; // xmm1
  __m128i v87; // xmm5
  __m128i v88; // xmm4
  __m128i v89; // xmm1
  __m128i v90; // xmm7
  __m128i v91; // xmm2
  __m128i v92; // xmm1
  __m128i v93; // xmm3
  __m128i v94; // xmm2
  __m128i v95; // xmm1
  __m128i v96; // xmm3
  __m128i v97; // xmm2
  __m128i v98; // xmm7
  __m128i v99; // xmm2
  __m128i v100; // xmm5
  __m128i v101; // xmm7
  __m128i v102; // xmm1
  __m128i v103; // xmm2
  __m128i v104; // xmm5
  __m128i v105; // xmm7
  __m128i v106; // xmm1
  __m128i v107; // xmm7
  __m128i v108; // xmm4
  __m128i v109; // xmm3
  __m128i v110; // xmm1
  __m128i v111; // xmm4
  __m128i v112; // xmm2
  __m128i v113; // xmm4
  __m128i v114; // xmm1
  __m128i v115; // xmm5
  __m128i v116; // xmm3
  __m128i v117; // xmm2
  int v118;
  uint64_t v119; // kr10_8
  int v120;
  int32_t v121;
  int32_t v122;
  uint32_t *v123;
  int v124;
  unsigned int v125;
  int v126;
  int32_t v127;
  int v128;
  int v129;
  int v130;
  __m128i v131; // xmm5
  __m128i v132; // xmm2
  __m128i v133; // xmm1
  __m128i v134; // xmm5
  __m128i v135; // xmm4
  __m128i v136; // xmm1
  __m128i v137; // xmm5
  __m128i v138; // xmm4
  __m128i v139; // xmm1
  __m128i v140; // xmm7
  __m128i v141; // xmm2
  __m128i v142; // xmm1
  __m128i v143; // xmm3
  __m128i v144; // xmm2
  __m128i v145; // xmm1
  __m128i v146; // xmm3
  __m128i v147; // xmm2
  __m128i v148; // xmm7
  __m128i v149; // xmm2
  __m128i v150; // xmm5
  __m128i v151; // xmm7
  __m128i v152; // xmm1
  __m128i v153; // xmm2
  __m128i v154; // xmm5
  __m128i v155; // xmm7
  __m128i v156; // xmm1
  __m128i v157; // xmm7
  __m128i v158; // xmm4
  __m128i v159; // xmm3
  __m128i v160; // xmm1
  __m128i v161; // xmm4
  __m128i v162; // xmm2
  __m128i v163; // xmm4
  __m128i v164; // xmm1
  __m128i v165; // xmm5
  __m128i v166; // xmm3
  __m128i v167; // xmm2
  int v168;
  uint64_t v169; // kr18_8
  int v170;
  int v171;
  int32_t v172;
  int32_t v173;
  uint32_t *v174;
  int v175;
  unsigned int v176;
  int v177;
  int32_t v178;
  int v179;
  int v180;
  int v181;
  __m128i v182; // xmm5
  __m128i v183; // xmm2
  __m128i v184; // xmm1
  __m128i v185; // xmm5
  __m128i v186; // xmm4
  __m128i v187; // xmm1
  __m128i v188; // xmm5
  __m128i v189; // xmm4
  __m128i v190; // xmm1
  __m128i v191; // xmm7
  __m128i v192; // xmm2
  __m128i v193; // xmm1
  __m128i v194; // xmm3
  __m128i v195; // xmm2
  __m128i v196; // xmm1
  __m128i v197; // xmm3
  __m128i v198; // xmm2
  __m128i v199; // xmm7
  __m128i v200; // xmm2
  __m128i v201; // xmm5
  __m128i v202; // xmm7
  __m128i v203; // xmm1
  __m128i v204; // xmm2
  __m128i v205; // xmm5
  __m128i v206; // xmm7
  __m128i v207; // xmm1
  __m128i v208; // xmm7
  __m128i v209; // xmm4
  __m128i v210; // xmm3
  __m128i v211; // xmm1
  __m128i v212; // xmm4
  __m128i v213; // xmm2
  __m128i v214; // xmm4
  __m128i v215; // xmm1
  __m128i v216; // xmm5
  __m128i v217; // xmm3
  __m128i v218; // xmm2
  int v219;
  uint64_t v220; // kr20_8
  int v221;
  int v222;
  int32_t v223;
  int32_t v224;
  uint32_t *v225;
  int v226;
  unsigned int v227;
  int v228;
  int32_t v229;
  int v230;
  int v231;
  int v232;
  __m128i v233; // xmm5
  __m128i v234; // xmm2
  __m128i v235; // xmm1
  __m128i v236; // xmm5
  __m128i v237; // xmm4
  __m128i v238; // xmm1
  __m128i v239; // xmm5
  __m128i v240; // xmm4
  __m128i v241; // xmm1
  __m128i v242; // xmm7
  __m128i v243; // xmm2
  __m128i v244; // xmm1
  __m128i v245; // xmm3
  __m128i v246; // xmm2
  __m128i v247; // xmm1
  __m128i v248; // xmm3
  __m128i v249; // xmm2
  __m128i v250; // xmm7
  __m128i v251; // xmm2
  __m128i v252; // xmm5
  __m128i v253; // xmm7
  __m128i v254; // xmm2
  __m128i v255; // xmm5
  __m128i v256; // xmm7
  __m128i v257; // xmm1
  __m128i v258; // xmm7
  __m128i v259; // xmm1
  __m128i v260; // xmm4
  __m128i v261; // xmm3
  __m128i v262; // xmm4
  __m128i v263; // xmm2
  __m128i v264; // xmm1
  __m128i v265; // xmm4
  __m128i v266; // xmm5
  __m128i v267; // xmm3
  __m128i v268; // xmm2
  int v269;
  uint64_t v270; // kr28_8
  int v271;
  int v272;
  int32_t v273;
  int32_t v274;
  uint32_t *v275;
  int32_t v276;
  unsigned int v277;
  int v278;
  int32_t v279;
  int32_t v280;
  int32_t v281;
  int32_t v282;
  unsigned int v283;
  unsigned int v284;
  unsigned int v285;
  unsigned int v286;
  __m128i *v287;
  unsigned int v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef int64_t _g4_t_v294;
  typedef int _g4_t_v295;
  typedef int64_t _g4_t_v296 __attribute__((aligned(1)));
  typedef int _g4_t_v297;
  typedef int64_t _g4_t_v298;
  typedef int _g4_t_v299;
  typedef void *_g4_t_v300;
  typedef int *_g4_t_v301;
  typedef int8_t *_g4_t_v302;
  typedef unsigned int _g4_t_v303;
  typedef unsigned int _g4_t_v304;
  typedef unsigned int _g4_t_v305;
  typedef unsigned int _g4_t_v306;
  typedef int *_g4_t_v307;
  typedef uint32_t *_g4_t_v308;
  typedef int _g4_t_v309;
  typedef int _g4_t_v310;
  typedef __m128i _g4_t_v311;
  typedef int32_t _g4_t_v312;
  typedef int _g4_t_v313;
  typedef __m128i _g4_t_v314;
  typedef int32_t _g4_t_v315;
  typedef int _g4_t_v316;
  typedef __m128i _g4_t_v317;
  typedef int32_t _g4_t_v318;
  typedef int _g4_t_v319;
  typedef __m128i _g4_t_v320;
  typedef int32_t _g4_t_v321;
  typedef int _g4_t_v322;
  typedef __m128i _g4_t_v323;
  typedef int32_t _g4_t_v324;
  typedef int _g4_t_v325;
  typedef __m128i *_g4_t_v326;
  typedef unsigned int _g4_t_v327;
  typedef __m128i _g4_t_v328;
  typedef __m128i _g4_t_v329;
  typedef __m128i _g4_t_v330;
  typedef __m128i _g4_t_v331;
  typedef __m128i _g4_t_v332;
  typedef int _g4_t_v333;
  typedef __m128i _g4_t_v334;
  typedef __m128i _g4_t_v335;
  typedef __m128i _g4_t_v336;
  typedef __m128i _g4_t_v337;
  typedef __m128i _g4_t_v338;
  typedef int _g4_t_v339;
  typedef __m128i _g4_t_v340;
  typedef __m128i _g4_t_v341;
  typedef __m128i _g4_t_v342;
  typedef __m128i _g4_t_v343;
  typedef __m128i _g4_t_v344;
  typedef int _g4_t_v345;
  typedef __m128i _g4_t_v346;
  typedef __m128i _g4_t_v347;
  typedef __m128i _g4_t_v348;
  typedef __m128i _g4_t_v349;
  typedef __m128i _g4_t_v350;
  typedef int _g4_t_v351;
  typedef __m128i _g4_t_v352;
  typedef __m128i _g4_t_v353;
  typedef __m128i _g4_t_v354;
  typedef __m128i _g4_t_v355;
  typedef __m128i _g4_t_v356;
  typedef int _g4_t_v357;
  typedef int _g4_t_v358;
  typedef unsigned int _g4_t_v359;
  typedef unsigned int _g4_t_v360;
  typedef __m128i _g4_t_v361;
  typedef int32_t _g4_t_v362;
  typedef int _g4_t_v363;
  typedef __m128i _g4_t_v364;
  typedef int32_t _g4_t_v365;
  typedef int _g4_t_v366;
  typedef __m128i _g4_t_v367;
  typedef int32_t _g4_t_v368;
  typedef int _g4_t_v369;
  typedef __m128i _g4_t_v370;
  typedef int32_t _g4_t_v371;
  typedef int _g4_t_v372;
  typedef __m128i _g4_t_v373;
  typedef int32_t _g4_t_v374;
  typedef int32_t _g4_t_v375;
  typedef unsigned int _g4_t_v376;
  typedef int _g4_t_v377;
  typedef __m128i _g4_t_v378;
  typedef __m128i _g4_t_v379;
  typedef int32_t _g4_t_v380;
  typedef int _g4_t_v381;
  typedef __m128i _g4_t_v382;
  typedef __m128i _g4_t_v383;
  typedef int32_t _g4_t_v384;
  typedef int _g4_t_v385;
  typedef __m128i _g4_t_v386;
  typedef __m128i _g4_t_v387;
  typedef int32_t _g4_t_v388;
  typedef int _g4_t_v389;
  typedef __m128i _g4_t_v390;
  typedef __m128i _g4_t_v391;
  typedef int32_t _g4_t_v392;
  typedef int _g4_t_v393;
  typedef __m128i _g4_t_v394;
  typedef __m128i _g4_t_v395;
  typedef int32_t _g4_t_v396;
  typedef int32_t _g4_t_v397;
  typedef __m128i *_g4_t_v398;
  typedef __m128i *_g4_t_v399;
  typedef int32_t _g4_t_v400;
  typedef int _g4_t_v401;
  typedef int64_t _g4_t_v402 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v403[12];
  typedef void *_g4_t_v404;
  typedef int _g4_t_v405;
  typedef int _g4_t_v406;
  typedef int _g4_t_v407;
  typedef int _g4_t_v408;
  typedef int _g4_t_v409;
  typedef int _g4_t_v410;
  typedef int _g4_t_v411;
  typedef int _g4_t_v412;
  typedef int _g4_t_v413;
  typedef int _g4_t_v414;
  typedef int _g4_t_v415;
  typedef int _g4_t_v416;
  typedef int _g4_t_v417;
  typedef int _g4_t_v418;
  typedef int _g4_t_v419;
  typedef __m128i _g4_t_v420;
  typedef int _g4_t_v421;
  typedef int _g4_t_v422;
  typedef int64_t _g4_t_v423;
  typedef int _g4_t_v424;
  typedef int _g4_t_v425;
  typedef uint32_t _g4_t_ptr[6];
  typedef uint32_t _g4_t_v427[7];
  typedef uint32_t _g4_t_v428[7];
  typedef uint32_t _g4_t_v429[7];
  typedef uint32_t _g4_t_v430[7];
  typedef uint32_t _g4_t_v431[6];
  typedef __m128i _g4_t_v432;
  typedef int _g4_t_v433;
  typedef __m128i _g4_t_v434 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v435 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v436 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v437 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v438;
  typedef unsigned int _g4_t_v439;
  typedef int _g4_t_v440;
  typedef __m128i _g4_t_v441;
  typedef __m128i _g4_t_v442;
  typedef __m128i _g4_t_v443;
  typedef __m128i _g4_t_v444;
  typedef uint32_t _g4_t_v445[7];
  enum : size_t {
    _g4_s0 = 912u,
    _g4_s1 = (0u + sizeof(_g4_t_v289)) > _g4_s0 ? (0u + sizeof(_g4_t_v289)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v290)) > _g4_s1 ? (0u + sizeof(_g4_t_v290)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v291)) > _g4_s2 ? (0u + sizeof(_g4_t_v291)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v292)) > _g4_s3 ? (0u + sizeof(_g4_t_v292)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v293)) > _g4_s4 ? (8u + sizeof(_g4_t_v293)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v294)) > _g4_s5 ? (8u + sizeof(_g4_t_v294)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v295)) > _g4_s6 ? (12u + sizeof(_g4_t_v295)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v296)) > _g4_s7 ? (12u + sizeof(_g4_t_v296)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v297)) > _g4_s8 ? (16u + sizeof(_g4_t_v297)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v298)) > _g4_s9 ? (16u + sizeof(_g4_t_v298)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v299)) > _g4_s10 ? (20u + sizeof(_g4_t_v299)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v300)) > _g4_s11 ? (20u + sizeof(_g4_t_v300)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v301)) > _g4_s12 ? (24u + sizeof(_g4_t_v301)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v302)) > _g4_s13 ? (24u + sizeof(_g4_t_v302)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v303)) > _g4_s14 ? (24u + sizeof(_g4_t_v303)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v304)) > _g4_s15 ? (24u + sizeof(_g4_t_v304)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v305)) > _g4_s16 ? (24u + sizeof(_g4_t_v305)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v306)) > _g4_s17 ? (28u + sizeof(_g4_t_v306)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v307)) > _g4_s18 ? (28u + sizeof(_g4_t_v307)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v308)) > _g4_s19 ? (28u + sizeof(_g4_t_v308)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v309)) > _g4_s20 ? (28u + sizeof(_g4_t_v309)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v310)) > _g4_s21 ? (32u + sizeof(_g4_t_v310)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v311)) > _g4_s22 ? (32u + sizeof(_g4_t_v311)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v312)) > _g4_s23 ? (32u + sizeof(_g4_t_v312)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v313)) > _g4_s24 ? (32u + sizeof(_g4_t_v313)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v314)) > _g4_s25 ? (32u + sizeof(_g4_t_v314)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v315)) > _g4_s26 ? (32u + sizeof(_g4_t_v315)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v316)) > _g4_s27 ? (32u + sizeof(_g4_t_v316)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v317)) > _g4_s28 ? (32u + sizeof(_g4_t_v317)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v318)) > _g4_s29 ? (32u + sizeof(_g4_t_v318)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v319)) > _g4_s30 ? (32u + sizeof(_g4_t_v319)) : _g4_s30,
    _g4_s32 = (32u + sizeof(_g4_t_v320)) > _g4_s31 ? (32u + sizeof(_g4_t_v320)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v321)) > _g4_s32 ? (32u + sizeof(_g4_t_v321)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v322)) > _g4_s33 ? (32u + sizeof(_g4_t_v322)) : _g4_s33,
    _g4_s35 = (32u + sizeof(_g4_t_v323)) > _g4_s34 ? (32u + sizeof(_g4_t_v323)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v324)) > _g4_s35 ? (32u + sizeof(_g4_t_v324)) : _g4_s35,
    _g4_s37 = (32u + sizeof(_g4_t_v325)) > _g4_s36 ? (32u + sizeof(_g4_t_v325)) : _g4_s36,
    _g4_s38 = (32u + sizeof(_g4_t_v326)) > _g4_s37 ? (32u + sizeof(_g4_t_v326)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v327)) > _g4_s38 ? (48u + sizeof(_g4_t_v327)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v328)) > _g4_s39 ? (48u + sizeof(_g4_t_v328)) : _g4_s39,
    _g4_s41 = (48u + sizeof(_g4_t_v329)) > _g4_s40 ? (48u + sizeof(_g4_t_v329)) : _g4_s40,
    _g4_s42 = (48u + sizeof(_g4_t_v330)) > _g4_s41 ? (48u + sizeof(_g4_t_v330)) : _g4_s41,
    _g4_s43 = (48u + sizeof(_g4_t_v331)) > _g4_s42 ? (48u + sizeof(_g4_t_v331)) : _g4_s42,
    _g4_s44 = (48u + sizeof(_g4_t_v332)) > _g4_s43 ? (48u + sizeof(_g4_t_v332)) : _g4_s43,
    _g4_s45 = (48u + sizeof(_g4_t_v333)) > _g4_s44 ? (48u + sizeof(_g4_t_v333)) : _g4_s44,
    _g4_s46 = (48u + sizeof(_g4_t_v334)) > _g4_s45 ? (48u + sizeof(_g4_t_v334)) : _g4_s45,
    _g4_s47 = (48u + sizeof(_g4_t_v335)) > _g4_s46 ? (48u + sizeof(_g4_t_v335)) : _g4_s46,
    _g4_s48 = (48u + sizeof(_g4_t_v336)) > _g4_s47 ? (48u + sizeof(_g4_t_v336)) : _g4_s47,
    _g4_s49 = (48u + sizeof(_g4_t_v337)) > _g4_s48 ? (48u + sizeof(_g4_t_v337)) : _g4_s48,
    _g4_s50 = (48u + sizeof(_g4_t_v338)) > _g4_s49 ? (48u + sizeof(_g4_t_v338)) : _g4_s49,
    _g4_s51 = (48u + sizeof(_g4_t_v339)) > _g4_s50 ? (48u + sizeof(_g4_t_v339)) : _g4_s50,
    _g4_s52 = (48u + sizeof(_g4_t_v340)) > _g4_s51 ? (48u + sizeof(_g4_t_v340)) : _g4_s51,
    _g4_s53 = (48u + sizeof(_g4_t_v341)) > _g4_s52 ? (48u + sizeof(_g4_t_v341)) : _g4_s52,
    _g4_s54 = (48u + sizeof(_g4_t_v342)) > _g4_s53 ? (48u + sizeof(_g4_t_v342)) : _g4_s53,
    _g4_s55 = (48u + sizeof(_g4_t_v343)) > _g4_s54 ? (48u + sizeof(_g4_t_v343)) : _g4_s54,
    _g4_s56 = (48u + sizeof(_g4_t_v344)) > _g4_s55 ? (48u + sizeof(_g4_t_v344)) : _g4_s55,
    _g4_s57 = (48u + sizeof(_g4_t_v345)) > _g4_s56 ? (48u + sizeof(_g4_t_v345)) : _g4_s56,
    _g4_s58 = (48u + sizeof(_g4_t_v346)) > _g4_s57 ? (48u + sizeof(_g4_t_v346)) : _g4_s57,
    _g4_s59 = (48u + sizeof(_g4_t_v347)) > _g4_s58 ? (48u + sizeof(_g4_t_v347)) : _g4_s58,
    _g4_s60 = (48u + sizeof(_g4_t_v348)) > _g4_s59 ? (48u + sizeof(_g4_t_v348)) : _g4_s59,
    _g4_s61 = (48u + sizeof(_g4_t_v349)) > _g4_s60 ? (48u + sizeof(_g4_t_v349)) : _g4_s60,
    _g4_s62 = (48u + sizeof(_g4_t_v350)) > _g4_s61 ? (48u + sizeof(_g4_t_v350)) : _g4_s61,
    _g4_s63 = (48u + sizeof(_g4_t_v351)) > _g4_s62 ? (48u + sizeof(_g4_t_v351)) : _g4_s62,
    _g4_s64 = (48u + sizeof(_g4_t_v352)) > _g4_s63 ? (48u + sizeof(_g4_t_v352)) : _g4_s63,
    _g4_s65 = (48u + sizeof(_g4_t_v353)) > _g4_s64 ? (48u + sizeof(_g4_t_v353)) : _g4_s64,
    _g4_s66 = (48u + sizeof(_g4_t_v354)) > _g4_s65 ? (48u + sizeof(_g4_t_v354)) : _g4_s65,
    _g4_s67 = (48u + sizeof(_g4_t_v355)) > _g4_s66 ? (48u + sizeof(_g4_t_v355)) : _g4_s66,
    _g4_s68 = (48u + sizeof(_g4_t_v356)) > _g4_s67 ? (48u + sizeof(_g4_t_v356)) : _g4_s67,
    _g4_s69 = (48u + sizeof(_g4_t_v357)) > _g4_s68 ? (48u + sizeof(_g4_t_v357)) : _g4_s68,
    _g4_s70 = (48u + sizeof(_g4_t_v358)) > _g4_s69 ? (48u + sizeof(_g4_t_v358)) : _g4_s69,
    _g4_s71 = (64u + sizeof(_g4_t_v359)) > _g4_s70 ? (64u + sizeof(_g4_t_v359)) : _g4_s70,
    _g4_s72 = (64u + sizeof(_g4_t_v360)) > _g4_s71 ? (64u + sizeof(_g4_t_v360)) : _g4_s71,
    _g4_s73 = (64u + sizeof(_g4_t_v361)) > _g4_s72 ? (64u + sizeof(_g4_t_v361)) : _g4_s72,
    _g4_s74 = (64u + sizeof(_g4_t_v362)) > _g4_s73 ? (64u + sizeof(_g4_t_v362)) : _g4_s73,
    _g4_s75 = (64u + sizeof(_g4_t_v363)) > _g4_s74 ? (64u + sizeof(_g4_t_v363)) : _g4_s74,
    _g4_s76 = (64u + sizeof(_g4_t_v364)) > _g4_s75 ? (64u + sizeof(_g4_t_v364)) : _g4_s75,
    _g4_s77 = (64u + sizeof(_g4_t_v365)) > _g4_s76 ? (64u + sizeof(_g4_t_v365)) : _g4_s76,
    _g4_s78 = (64u + sizeof(_g4_t_v366)) > _g4_s77 ? (64u + sizeof(_g4_t_v366)) : _g4_s77,
    _g4_s79 = (64u + sizeof(_g4_t_v367)) > _g4_s78 ? (64u + sizeof(_g4_t_v367)) : _g4_s78,
    _g4_s80 = (64u + sizeof(_g4_t_v368)) > _g4_s79 ? (64u + sizeof(_g4_t_v368)) : _g4_s79,
    _g4_s81 = (64u + sizeof(_g4_t_v369)) > _g4_s80 ? (64u + sizeof(_g4_t_v369)) : _g4_s80,
    _g4_s82 = (64u + sizeof(_g4_t_v370)) > _g4_s81 ? (64u + sizeof(_g4_t_v370)) : _g4_s81,
    _g4_s83 = (64u + sizeof(_g4_t_v371)) > _g4_s82 ? (64u + sizeof(_g4_t_v371)) : _g4_s82,
    _g4_s84 = (64u + sizeof(_g4_t_v372)) > _g4_s83 ? (64u + sizeof(_g4_t_v372)) : _g4_s83,
    _g4_s85 = (64u + sizeof(_g4_t_v373)) > _g4_s84 ? (64u + sizeof(_g4_t_v373)) : _g4_s84,
    _g4_s86 = (64u + sizeof(_g4_t_v374)) > _g4_s85 ? (64u + sizeof(_g4_t_v374)) : _g4_s85,
    _g4_s87 = (64u + sizeof(_g4_t_v375)) > _g4_s86 ? (64u + sizeof(_g4_t_v375)) : _g4_s86,
    _g4_s88 = (64u + sizeof(_g4_t_v376)) > _g4_s87 ? (64u + sizeof(_g4_t_v376)) : _g4_s87,
    _g4_s89 = (80u + sizeof(_g4_t_v377)) > _g4_s88 ? (80u + sizeof(_g4_t_v377)) : _g4_s88,
    _g4_s90 = (80u + sizeof(_g4_t_v378)) > _g4_s89 ? (80u + sizeof(_g4_t_v378)) : _g4_s89,
    _g4_s91 = (80u + sizeof(_g4_t_v379)) > _g4_s90 ? (80u + sizeof(_g4_t_v379)) : _g4_s90,
    _g4_s92 = (80u + sizeof(_g4_t_v380)) > _g4_s91 ? (80u + sizeof(_g4_t_v380)) : _g4_s91,
    _g4_s93 = (80u + sizeof(_g4_t_v381)) > _g4_s92 ? (80u + sizeof(_g4_t_v381)) : _g4_s92,
    _g4_s94 = (80u + sizeof(_g4_t_v382)) > _g4_s93 ? (80u + sizeof(_g4_t_v382)) : _g4_s93,
    _g4_s95 = (80u + sizeof(_g4_t_v383)) > _g4_s94 ? (80u + sizeof(_g4_t_v383)) : _g4_s94,
    _g4_s96 = (80u + sizeof(_g4_t_v384)) > _g4_s95 ? (80u + sizeof(_g4_t_v384)) : _g4_s95,
    _g4_s97 = (80u + sizeof(_g4_t_v385)) > _g4_s96 ? (80u + sizeof(_g4_t_v385)) : _g4_s96,
    _g4_s98 = (80u + sizeof(_g4_t_v386)) > _g4_s97 ? (80u + sizeof(_g4_t_v386)) : _g4_s97,
    _g4_s99 = (80u + sizeof(_g4_t_v387)) > _g4_s98 ? (80u + sizeof(_g4_t_v387)) : _g4_s98,
    _g4_s100 = (80u + sizeof(_g4_t_v388)) > _g4_s99 ? (80u + sizeof(_g4_t_v388)) : _g4_s99,
    _g4_s101 = (80u + sizeof(_g4_t_v389)) > _g4_s100 ? (80u + sizeof(_g4_t_v389)) : _g4_s100,
    _g4_s102 = (80u + sizeof(_g4_t_v390)) > _g4_s101 ? (80u + sizeof(_g4_t_v390)) : _g4_s101,
    _g4_s103 = (80u + sizeof(_g4_t_v391)) > _g4_s102 ? (80u + sizeof(_g4_t_v391)) : _g4_s102,
    _g4_s104 = (80u + sizeof(_g4_t_v392)) > _g4_s103 ? (80u + sizeof(_g4_t_v392)) : _g4_s103,
    _g4_s105 = (80u + sizeof(_g4_t_v393)) > _g4_s104 ? (80u + sizeof(_g4_t_v393)) : _g4_s104,
    _g4_s106 = (80u + sizeof(_g4_t_v394)) > _g4_s105 ? (80u + sizeof(_g4_t_v394)) : _g4_s105,
    _g4_s107 = (80u + sizeof(_g4_t_v395)) > _g4_s106 ? (80u + sizeof(_g4_t_v395)) : _g4_s106,
    _g4_s108 = (80u + sizeof(_g4_t_v396)) > _g4_s107 ? (80u + sizeof(_g4_t_v396)) : _g4_s107,
    _g4_s109 = (80u + sizeof(_g4_t_v397)) > _g4_s108 ? (80u + sizeof(_g4_t_v397)) : _g4_s108,
    _g4_s110 = (96u + sizeof(_g4_t_v398)) > _g4_s109 ? (96u + sizeof(_g4_t_v398)) : _g4_s109,
    _g4_s111 = (96u + sizeof(_g4_t_v399)) > _g4_s110 ? (96u + sizeof(_g4_t_v399)) : _g4_s110,
    _g4_s112 = (108u + sizeof(_g4_t_v400)) > _g4_s111 ? (108u + sizeof(_g4_t_v400)) : _g4_s111,
    _g4_s113 = (123u + sizeof(_g4_t_v401)) > _g4_s112 ? (123u + sizeof(_g4_t_v401)) : _g4_s112,
    _g4_s114 = (124u + sizeof(_g4_t_v402)) > _g4_s113 ? (124u + sizeof(_g4_t_v402)) : _g4_s113,
    _g4_s115 = (132u + sizeof(_g4_t_v403)) > _g4_s114 ? (132u + sizeof(_g4_t_v403)) : _g4_s114,
    _g4_s116 = (144u + sizeof(_g4_t_v404)) > _g4_s115 ? (144u + sizeof(_g4_t_v404)) : _g4_s115,
    _g4_s117 = (148u + sizeof(_g4_t_v405)) > _g4_s116 ? (148u + sizeof(_g4_t_v405)) : _g4_s116,
    _g4_s118 = (152u + sizeof(_g4_t_v406)) > _g4_s117 ? (152u + sizeof(_g4_t_v406)) : _g4_s117,
    _g4_s119 = (156u + sizeof(_g4_t_v407)) > _g4_s118 ? (156u + sizeof(_g4_t_v407)) : _g4_s118,
    _g4_s120 = (160u + sizeof(_g4_t_v408)) > _g4_s119 ? (160u + sizeof(_g4_t_v408)) : _g4_s119,
    _g4_s121 = (164u + sizeof(_g4_t_v409)) > _g4_s120 ? (164u + sizeof(_g4_t_v409)) : _g4_s120,
    _g4_s122 = (168u + sizeof(_g4_t_v410)) > _g4_s121 ? (168u + sizeof(_g4_t_v410)) : _g4_s121,
    _g4_s123 = (172u + sizeof(_g4_t_v411)) > _g4_s122 ? (172u + sizeof(_g4_t_v411)) : _g4_s122,
    _g4_s124 = (176u + sizeof(_g4_t_v412)) > _g4_s123 ? (176u + sizeof(_g4_t_v412)) : _g4_s123,
    _g4_s125 = (180u + sizeof(_g4_t_v413)) > _g4_s124 ? (180u + sizeof(_g4_t_v413)) : _g4_s124,
    _g4_s126 = (184u + sizeof(_g4_t_v414)) > _g4_s125 ? (184u + sizeof(_g4_t_v414)) : _g4_s125,
    _g4_s127 = (188u + sizeof(_g4_t_v415)) > _g4_s126 ? (188u + sizeof(_g4_t_v415)) : _g4_s126,
    _g4_s128 = (192u + sizeof(_g4_t_v416)) > _g4_s127 ? (192u + sizeof(_g4_t_v416)) : _g4_s127,
    _g4_s129 = (196u + sizeof(_g4_t_v417)) > _g4_s128 ? (196u + sizeof(_g4_t_v417)) : _g4_s128,
    _g4_s130 = (200u + sizeof(_g4_t_v418)) > _g4_s129 ? (200u + sizeof(_g4_t_v418)) : _g4_s129,
    _g4_s131 = (204u + sizeof(_g4_t_v419)) > _g4_s130 ? (204u + sizeof(_g4_t_v419)) : _g4_s130,
    _g4_s132 = (208u + sizeof(_g4_t_v420)) > _g4_s131 ? (208u + sizeof(_g4_t_v420)) : _g4_s131,
    _g4_s133 = (224u + sizeof(_g4_t_v421)) > _g4_s132 ? (224u + sizeof(_g4_t_v421)) : _g4_s132,
    _g4_s134 = (236u + sizeof(_g4_t_v422)) > _g4_s133 ? (236u + sizeof(_g4_t_v422)) : _g4_s133,
    _g4_s135 = (240u + sizeof(_g4_t_v423)) > _g4_s134 ? (240u + sizeof(_g4_t_v423)) : _g4_s134,
    _g4_s136 = (248u + sizeof(_g4_t_v424)) > _g4_s135 ? (248u + sizeof(_g4_t_v424)) : _g4_s135,
    _g4_s137 = (252u + sizeof(_g4_t_v425)) > _g4_s136 ? (252u + sizeof(_g4_t_v425)) : _g4_s136,
    _g4_s138 = (256u + sizeof(_g4_t_ptr)) > _g4_s137 ? (256u + sizeof(_g4_t_ptr)) : _g4_s137,
    _g4_s139 = (280u + sizeof(_g4_t_v427)) > _g4_s138 ? (280u + sizeof(_g4_t_v427)) : _g4_s138,
    _g4_s140 = (308u + sizeof(_g4_t_v428)) > _g4_s139 ? (308u + sizeof(_g4_t_v428)) : _g4_s139,
    _g4_s141 = (336u + sizeof(_g4_t_v429)) > _g4_s140 ? (336u + sizeof(_g4_t_v429)) : _g4_s140,
    _g4_s142 = (364u + sizeof(_g4_t_v430)) > _g4_s141 ? (364u + sizeof(_g4_t_v430)) : _g4_s141,
    _g4_s143 = (392u + sizeof(_g4_t_v431)) > _g4_s142 ? (392u + sizeof(_g4_t_v431)) : _g4_s142,
    _g4_s144 = (416u + sizeof(_g4_t_v432)) > _g4_s143 ? (416u + sizeof(_g4_t_v432)) : _g4_s143,
    _g4_s145 = (432u + sizeof(_g4_t_v433)) > _g4_s144 ? (432u + sizeof(_g4_t_v433)) : _g4_s144,
    _g4_s146 = (436u + sizeof(_g4_t_v434)) > _g4_s145 ? (436u + sizeof(_g4_t_v434)) : _g4_s145,
    _g4_s147 = (452u + sizeof(_g4_t_v435)) > _g4_s146 ? (452u + sizeof(_g4_t_v435)) : _g4_s146,
    _g4_s148 = (468u + sizeof(_g4_t_v436)) > _g4_s147 ? (468u + sizeof(_g4_t_v436)) : _g4_s147,
    _g4_s149 = (484u + sizeof(_g4_t_v437)) > _g4_s148 ? (484u + sizeof(_g4_t_v437)) : _g4_s148,
    _g4_s150 = (500u + sizeof(_g4_t_v438)) > _g4_s149 ? (500u + sizeof(_g4_t_v438)) : _g4_s149,
    _g4_s151 = (504u + sizeof(_g4_t_v439)) > _g4_s150 ? (504u + sizeof(_g4_t_v439)) : _g4_s150,
    _g4_s152 = (508u + sizeof(_g4_t_v440)) > _g4_s151 ? (508u + sizeof(_g4_t_v440)) : _g4_s151,
    _g4_s153 = (512u + sizeof(_g4_t_v441)) > _g4_s152 ? (512u + sizeof(_g4_t_v441)) : _g4_s152,
    _g4_s154 = (528u + sizeof(_g4_t_v442)) > _g4_s153 ? (528u + sizeof(_g4_t_v442)) : _g4_s153,
    _g4_s155 = (544u + sizeof(_g4_t_v443)) > _g4_s154 ? (544u + sizeof(_g4_t_v443)) : _g4_s154,
    _g4_s156 = (560u + sizeof(_g4_t_v444)) > _g4_s155 ? (560u + sizeof(_g4_t_v444)) : _g4_s155,
    _g4_s157 = (816u + sizeof(_g4_t_v445)) > _g4_s156 ? (816u + sizeof(_g4_t_v445)) : _g4_s156
  };
  alignas(16) uint8_t _g4_sf[_g4_s157];
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 0u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 0u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 0u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 0u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 8u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 8u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 12u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 12u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 16u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 16u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 20u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 20u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 24u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 24u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 24u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 24u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 24u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 28u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 28u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 28u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 28u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 32u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 32u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 32u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 32u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 32u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 32u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 32u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 32u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 32u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 32u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 32u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 32u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 32u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 32u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 32u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 32u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 32u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 48u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 48u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 48u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 48u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 48u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 48u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 48u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 48u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 48u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 48u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 48u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 48u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 48u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 48u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 48u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 48u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 48u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 48u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 48u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 48u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 48u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 48u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 48u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 48u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 48u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 48u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 48u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 48u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 48u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 48u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 48u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 48u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 64u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 64u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 64u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 64u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 64u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 64u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 64u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 64u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 64u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 64u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 64u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 64u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 64u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 64u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 64u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 64u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 64u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 64u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 80u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 80u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 80u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 80u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 80u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 80u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 80u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 80u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 80u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 80u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 80u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 80u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 80u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 80u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 80u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 80u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 80u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 80u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 80u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 80u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 80u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 96u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 96u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 108u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 123u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 124u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 132u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 144u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 148u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 152u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 156u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 160u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 164u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 168u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 172u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 176u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 180u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 184u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 188u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 192u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 196u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 200u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 204u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 208u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 224u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 236u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 240u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 248u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 252u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 256u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 280u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 308u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 336u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 364u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 392u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 416u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 432u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 436u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 452u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 468u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 484u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 500u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 504u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 508u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 512u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 528u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 544u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 560u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 816u);

  HIDWORD(v402) = (uint32_t)(uintptr_t)(g4_fnstatic_73344a3f5d);
g4_m128_lane<int64_t>(v432, 0) = 0xEFCDAB8967452301LL;
g4_m128_lane<int64_t>(v432, 1) = 0x1032547698BADCFELL;
  v433 = -1009589776;
  v422 = g4_fnstatic_73344a3f5d[0];
  v423 = *(uint64_t *)&g4_fnstatic_73344a3f5d[1];
  v424 = g4_fnstatic_73344a3f5d[3];
  v425 = g4_fnstatic_73344a3f5d[4];
  v438 = 0;
  v439 = 0;
  v440 = 0;
  v299 = 1732584193;
  v297 = -271733879;
  v295 = -1732584194;
  v293 = 271733878;
  v1 = 0;
  v306 = 0;
  v301 = &v422;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v1++) = *(uint8_t *)v301;
      if ( v1 == 64 )
      {
        v30 = _mm_unpacklo_epi8(v434, v435);
        v31 = _mm_unpackhi_epi8(v434, v435);
        v32 = _mm_unpackhi_epi8(v30, v31);
        v33 = _mm_unpacklo_epi8(v30, v31);
        v328 = v32;
        v34 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v31), v32);
        v35 = _mm_unpackhi_epi8(v33, v32);
        v36 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v33, v328), v35);
        v37 = _mm_unpackhi_epi8(v34, v35);
        v38 = _mm_unpacklo_epi8(v436, v437);
        v39 = _mm_unpackhi_epi8(v436, v437);
        v40 = _mm_unpackhi_epi8(v38, v39);
        v41 = _mm_unpacklo_epi8(v38, v39);
        v329 = v40;
        v42 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v39), v40);
        v43 = _mm_unpackhi_epi8(v41, v40);
        v44 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v41, v329), v43);
        v45 = _mm_unpackhi_epi8(v42, v43);
        v46 = _mm_unpacklo_epi8(v36, v44);
        v330 = _mm_unpackhi_epi8(v36, v44);
        v47 = _mm_unpackhi_epi8(v46, v330);
        v48 = _mm_unpacklo_epi8(v46, v330);
        v49 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v36, v44), v330);
        v378 = v47;
        v331 = _mm_unpackhi_epi8(v37, v45);
        v50 = _mm_unpackhi_epi8(v48, v47);
        v51 = _mm_unpacklo_epi8(v37, v45);
        v52 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v48, v378), v50);
        v53 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v49, v378), v50);
        v54 = _mm_unpackhi_epi8(v51, v331);
        v55 = _mm_unpacklo_epi8(v51, v331);
        v379 = v54;
        v56 = _mm_unpackhi_epi8(v55, v54);
        v57 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v37, v45), v331), v379);
        v58 = _mm_unpacklo_epi8(v52, g4_m128_from<__m128i>(0LL));
        v59 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v55, v379), v56);
        v60 = _mm_unpackhi_epi8(v57, v56);
        v361 = _mm_unpackhi_epi8(v52, g4_m128_from<__m128i>(0LL));
        v332 = _mm_unpacklo_epi8(v59, g4_m128_from<__m128i>(0LL));
        v61 = _mm_unpacklo_epi8(v60, g4_m128_from<__m128i>(0LL));
        v62 = _mm_unpackhi_epi8(v60, g4_m128_from<__m128i>(0LL));
        v311 = _mm_unpackhi_epi8(v59, g4_m128_from<__m128i>(0LL));
        v63 = _mm_unpacklo_epi8(v53, g4_m128_from<__m128i>(0LL));
        v64 = _mm_unpackhi_epi8(v53, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v63, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v61, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v332, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v58, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v380 =g4_m128_lane<int32_t>(v441, 0);
        v65 = _mm_or_si128(
                _mm_or_si128(
                  _mm_or_si128(
                    _mm_slli_epi32(_mm_unpackhi_epi16(v58, g4_m128_from<__m128i>(0LL)), 0x18u),
                    _mm_slli_epi32(_mm_unpackhi_epi16(v332, g4_m128_from<__m128i>(0LL)), 0x10u)),
                  _mm_unpackhi_epi16(v61, g4_m128_from<__m128i>(0LL))),
                _mm_slli_epi32(_mm_unpackhi_epi16(v63, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v361, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v311, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v62, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v64, g4_m128_from<__m128i>(0LL)), 8u));
        v66 = v361;
        v362 =g4_m128_lane<int32_t>(v441, 1);
        v67 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v66, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v311, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v62, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v64, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v65;
        v68 =g4_m128_lane<uint64_t>(v444, 1);
        v312 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v312 = __builtin_rotateright32(v380 ^g4_m128_lane<int32_t>(v435, v67 + 1) ^g4_m128_lane<int32_t>(v436, v67 + 3) ^ v312, 31);
          v69 =g4_m128_lane<int32_t>(v437, v67) ^ v68;
g4_m128_lane<int32_t>(v441, v67) = v312;
          v380 =g4_m128_lane<int32_t>(v435, v67 + 2);
          v70 = v362 ^ v380 ^ v69;
          v362 =g4_m128_lane<int32_t>(v435, v67 + 3);
          v71 = __builtin_rotateright32(v70, 31);
          v72 = __builtin_rotateright32(g4_m128_lane<int32_t>(v435, v67 + 1) ^ v362 ^g4_m128_lane<int32_t>(v437, v67 + 1) ^ HIDWORD(v68), 31);
g4_m128_lane<int32_t>(v441, v67 + 1) = v71;
g4_m128_lane<int32_t>(v441, v67 + 2) = v72;
          v68 = __PAIR64__(v72, v71);
          if ( v67 == 76 )
            break;
          v67 += 3;
        }
        v73 = v445;
        do
        {
          v73[3] = __builtin_rotateright32(*(v73 - 5) ^ *v73 ^ *(v73 - 13) ^ *(v73 - 11), 31);
          ++v73;
        }
        while ( v73 != &v445[77 - v67] );
        v363 = v299;
        v333 = v433;
        v381 = v293;
        v74 = v295;
        v75 = 0;
        v289 = v297;
        while ( 1 )
        {
          if ( v75 <= 0x13 )
          {
            v313 = 1518500249;
            v76 = v74 & v289 | v381 & ~v289;
          }
          else if ( v75 <= 0x27 )
          {
            v313 = 1859775393;
            v76 = v74 ^ v289 ^ v381;
          }
          else if ( v75 > 0x3B )
          {
            v313 = -899497514;
            v76 = v74 ^ v289 ^ v381;
          }
          else
          {
            v76 = v74 & v381 | v289 & (v74 | v381);
            v313 = -1894007588;
          }
          v77 = v333 +g4_m128_lane<int32_t>(v441, v75++) + __builtin_rotateright32(v363, 27);
          v78 = v313 + v77 + v76;
          v79 = __builtin_rotateright32(v289, 2);
          if ( v75 == 80 )
            break;
          v80 = v381;
          v381 = v74;
          v74 = v79;
          v333 = v80;
          v289 = v363;
          v363 = v78;
        }
        v299 += v78;
        v433 += v381;
        v295 += v79;
        v297 += v363;
        v293 += v74;
        v1 = 0;
      }
      if ( v306 > 0xFFFFFFF7 )
        break;
      v306 += 8;
      v439 = v306;
      v301 = (int *)((char *)v301 + 1);
      if ( v301 == (int *)(uintptr_t)(ptr) )
        goto LABEL_7;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v1;
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v405), "sha1 too many bytes", (int)(uintptr_t)(&v401));
      sub_19042E0(&v410, &v405);
      ptr[5] = ((uint32_t)(uintptr_t)&off_20A9AA8);
      g4_std_compat::string_construct_copy(v427, &v411);
      v427[2] = 0;
      v427[5] = 104;
      v427[1] = ((uint32_t)(uintptr_t)&off_209383C);
      ptr[5] = ((uint32_t)(uintptr_t)&off_2093828);
      v427[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
      v427[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
      std::terminate();
    }
    v301 = (int *)((char *)v301 + 1);
    ++v440;
    v306 = 0;
  }
  while ( v301 != (int *)(uintptr_t)(ptr) );
LABEL_7:
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
  v438 = v1;
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
  v302 = (int8_t *)((char *)&v402 + 4);
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v1++) = *v302;
      if ( v1 == 64 )
      {
        v81 = _mm_unpacklo_epi8(v434, v435);
        v82 = _mm_unpackhi_epi8(v434, v435);
        v83 = _mm_unpackhi_epi8(v81, v82);
        v84 = _mm_unpacklo_epi8(v81, v82);
        v334 = v83;
        v85 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v82), v83);
        v86 = _mm_unpackhi_epi8(v84, v83);
        v87 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v84, v334), v86);
        v88 = _mm_unpackhi_epi8(v85, v86);
        v89 = _mm_unpacklo_epi8(v436, v437);
        v90 = _mm_unpackhi_epi8(v436, v437);
        v91 = _mm_unpackhi_epi8(v89, v90);
        v92 = _mm_unpacklo_epi8(v89, v90);
        v335 = v91;
        v93 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v90), v91);
        v94 = _mm_unpackhi_epi8(v92, v91);
        v95 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v92, v335), v94);
        v96 = _mm_unpackhi_epi8(v93, v94);
        v97 = _mm_unpacklo_epi8(v87, v95);
        v336 = _mm_unpackhi_epi8(v87, v95);
        v98 = _mm_unpackhi_epi8(v97, v336);
        v99 = _mm_unpacklo_epi8(v97, v336);
        v100 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v87, v95), v336);
        v382 = v98;
        v337 = _mm_unpackhi_epi8(v88, v96);
        v101 = _mm_unpackhi_epi8(v99, v98);
        v102 = _mm_unpacklo_epi8(v88, v96);
        v103 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v99, v382), v101);
        v104 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v100, v382), v101);
        v105 = _mm_unpackhi_epi8(v102, v337);
        v106 = _mm_unpacklo_epi8(v102, v337);
        v383 = v105;
        v107 = _mm_unpackhi_epi8(v106, v105);
        v108 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v88, v96), v337), v383);
        v109 = _mm_unpacklo_epi8(v103, g4_m128_from<__m128i>(0LL));
        v110 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v106, v383), v107);
        v111 = _mm_unpackhi_epi8(v108, v107);
        v364 = _mm_unpackhi_epi8(v103, g4_m128_from<__m128i>(0LL));
        v338 = _mm_unpacklo_epi8(v110, g4_m128_from<__m128i>(0LL));
        v112 = _mm_unpacklo_epi8(v111, g4_m128_from<__m128i>(0LL));
        v113 = _mm_unpackhi_epi8(v111, g4_m128_from<__m128i>(0LL));
        v314 = _mm_unpackhi_epi8(v110, g4_m128_from<__m128i>(0LL));
        v114 = _mm_unpacklo_epi8(v104, g4_m128_from<__m128i>(0LL));
        v115 = _mm_unpackhi_epi8(v104, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v114, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v112, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v338, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v109, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v384 =g4_m128_lane<int32_t>(v441, 0);
        v116 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v109, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v338, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v112, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v114, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v364, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v314, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v113, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v115, g4_m128_from<__m128i>(0LL)), 8u));
        v117 = v364;
        v365 =g4_m128_lane<int32_t>(v441, 1);
        v118 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v117, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v314, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v113, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v115, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v116;
        v119 =g4_m128_lane<uint64_t>(v444, 1);
        v315 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v315 = __builtin_rotateright32(v384 ^g4_m128_lane<int32_t>(v435, v118 + 1) ^g4_m128_lane<int32_t>(v436, v118 + 3) ^ v315, 31);
g4_m128_lane<int32_t>(v441, v118) = v315;
          v384 =g4_m128_lane<int32_t>(v435, v118 + 2);
          v120 = v365 ^g4_m128_lane<int32_t>(v437, v118) ^ v384 ^ v119;
          v365 =g4_m128_lane<int32_t>(v435, v118 + 3);
          v121 = __builtin_rotateright32(v120, 31);
          v122 = __builtin_rotateright32(g4_m128_lane<int32_t>(v435, v118 + 1) ^ v365 ^g4_m128_lane<int32_t>(v437, v118 + 1) ^ HIDWORD(v119), 31);
g4_m128_lane<int32_t>(v441, v118 + 1) = v121;
g4_m128_lane<int32_t>(v441, v118 + 2) = v122;
          v119 = __PAIR64__(v122, v121);
          if ( v118 == 76 )
            break;
          v118 += 3;
        }
        v123 = v445;
        do
        {
          v123[3] = __builtin_rotateright32(*v123 ^ *(v123 - 13) ^ *(v123 - 5) ^ *(v123 - 11), 31);
          ++v123;
        }
        while ( v123 != &v445[77 - v118] );
        v366 = v299;
        v339 = v433;
        v385 = v293;
        v124 = v295;
        v125 = 0;
        v290 = v297;
        while ( 1 )
        {
          if ( v125 <= 0x13 )
          {
            v316 = 1518500249;
            v126 = v124 & v290 | v385 & ~v290;
          }
          else if ( v125 <= 0x27 )
          {
            v316 = 1859775393;
            v126 = v385 ^ v124 ^ v290;
          }
          else if ( v125 > 0x3B )
          {
            v316 = -899497514;
            v126 = v385 ^ v124 ^ v290;
          }
          else
          {
            v316 = -1894007588;
            v126 = v124 & v385 | v290 & (v124 | v385);
          }
          v127 = v339 +g4_m128_lane<int32_t>(v441, v125++) + __builtin_rotateright32(v366, 27);
          v128 = v316 + v127 + v126;
          v129 = __builtin_rotateright32(v290, 2);
          if ( v125 == 80 )
            break;
          v130 = v385;
          v385 = v124;
          v124 = v129;
          v339 = v130;
          v290 = v366;
          v366 = v128;
        }
        v299 += v128;
        v433 += v385;
        v295 += v129;
        v297 += v366;
        v293 += v124;
        v1 = 0;
      }
      if ( v306 > 0xFFFFFFF7 )
        break;
      v306 += 8;
      v439 = v306;
      if ( ++v302 == (int8_t *)(uintptr_t)(v403) )
        goto LABEL_13;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v1;
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v406), "sha1 too many bytes", (int)(uintptr_t)(&v402));
      sub_19042E0(&v412, &v406);
      v427[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
      g4_std_compat::string_construct_copy(v428, &v413);
      v428[2] = 0;
      v428[5] = 104;
      v428[1] = ((uint32_t)(uintptr_t)&off_209383C);
      v427[6] = ((uint32_t)(uintptr_t)&off_2093828);
      v428[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
      v428[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
      std::terminate();
    }
    ++v302;
    ++v440;
    v306 = 0;
  }
  while ( v302 != (int8_t *)(uintptr_t)(v403) );
LABEL_13:
  v438 = v1;
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
  v2 = (void *)time(nullptr);
  v303 = v439;
  v404 = v2;
  v296 =g4_m128_lane<int64_t>(v432, 0);
  v3 = v438;
  v4 =g4_m128_lane<uint64_t>(v432, 1);
  v307 = (int *)&v404;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v3++) = *(uint8_t *)v307;
      if ( v3 == 64 )
      {
        v131 = _mm_unpacklo_epi8(v434, v435);
        v132 = _mm_unpackhi_epi8(v434, v435);
        v133 = _mm_unpackhi_epi8(v131, v132);
        v134 = _mm_unpacklo_epi8(v131, v132);
        v340 = v133;
        v135 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v132), v133);
        v136 = _mm_unpackhi_epi8(v134, v133);
        v137 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v134, v340), v136);
        v138 = _mm_unpackhi_epi8(v135, v136);
        v139 = _mm_unpacklo_epi8(v436, v437);
        v140 = _mm_unpackhi_epi8(v436, v437);
        v141 = _mm_unpackhi_epi8(v139, v140);
        v142 = _mm_unpacklo_epi8(v139, v140);
        v341 = v141;
        v143 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v140), v141);
        v144 = _mm_unpackhi_epi8(v142, v141);
        v145 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v142, v341), v144);
        v146 = _mm_unpackhi_epi8(v143, v144);
        v147 = _mm_unpacklo_epi8(v137, v145);
        v342 = _mm_unpackhi_epi8(v137, v145);
        v148 = _mm_unpackhi_epi8(v147, v342);
        v149 = _mm_unpacklo_epi8(v147, v342);
        v150 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v137, v145), v342);
        v386 = v148;
        v343 = _mm_unpackhi_epi8(v138, v146);
        v151 = _mm_unpackhi_epi8(v149, v148);
        v152 = _mm_unpacklo_epi8(v138, v146);
        v153 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v149, v386), v151);
        v154 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v150, v386), v151);
        v155 = _mm_unpackhi_epi8(v152, v343);
        v156 = _mm_unpacklo_epi8(v152, v343);
        v387 = v155;
        v157 = _mm_unpackhi_epi8(v156, v155);
        v158 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v138, v146), v343), v387);
        v159 = _mm_unpacklo_epi8(v153, g4_m128_from<__m128i>(0LL));
        v160 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v156, v387), v157);
        v161 = _mm_unpackhi_epi8(v158, v157);
        v367 = _mm_unpackhi_epi8(v153, g4_m128_from<__m128i>(0LL));
        v344 = _mm_unpacklo_epi8(v160, g4_m128_from<__m128i>(0LL));
        v162 = _mm_unpacklo_epi8(v161, g4_m128_from<__m128i>(0LL));
        v163 = _mm_unpackhi_epi8(v161, g4_m128_from<__m128i>(0LL));
        v317 = _mm_unpackhi_epi8(v160, g4_m128_from<__m128i>(0LL));
        v164 = _mm_unpacklo_epi8(v154, g4_m128_from<__m128i>(0LL));
        v165 = _mm_unpackhi_epi8(v154, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v164, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v162, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v344, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v388 =g4_m128_lane<int32_t>(v441, 0);
        v166 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v344, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v162, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v164, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v367, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v317, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v163, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v165, g4_m128_from<__m128i>(0LL)), 8u));
        v167 = v367;
        v368 =g4_m128_lane<int32_t>(v441, 1);
        v168 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v167, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v317, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v163, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v165, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v166;
        v169 =g4_m128_lane<uint64_t>(v444, 1);
        v318 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v318 = __builtin_rotateright32(v388 ^g4_m128_lane<int32_t>(v435, v168 + 1) ^g4_m128_lane<int32_t>(v436, v168 + 3) ^ v318, 31);
          v170 =g4_m128_lane<int32_t>(v437, v168) ^ v169;
g4_m128_lane<int32_t>(v441, v168) = v318;
          v388 =g4_m128_lane<int32_t>(v435, v168 + 2);
          v171 = v368 ^ v388 ^ v170;
          v368 =g4_m128_lane<int32_t>(v435, v168 + 3);
          v172 = __builtin_rotateright32(v171, 31);
          v173 = __builtin_rotateright32(g4_m128_lane<int32_t>(v435, v168 + 1) ^ v368 ^g4_m128_lane<int32_t>(v437, v168 + 1) ^ HIDWORD(v169), 31);
g4_m128_lane<int32_t>(v441, v168 + 1) = v172;
g4_m128_lane<int32_t>(v441, v168 + 2) = v173;
          v169 = __PAIR64__(v173, v172);
          if ( v168 == 76 )
            break;
          v168 += 3;
        }
        v174 = v445;
        do
        {
          v174[3] = __builtin_rotateright32(*(v174 - 13) ^ *(v174 - 11) ^ *v174 ^ *(v174 - 5), 31);
          ++v174;
        }
        while ( v174 != &v445[77 - v168] );
        v369 = v296;
        v345 = v433;
        v389 = HIDWORD(v4);
        v175 = v4;
        v176 = 0;
        v291 = HIDWORD(v296);
        while ( 1 )
        {
          if ( v176 <= 0x13 )
          {
            v319 = 1518500249;
            v177 = v175 & v291 | v389 & ~v291;
          }
          else if ( v176 <= 0x27 )
          {
            v319 = 1859775393;
            v177 = v389 ^ v175 ^ v291;
          }
          else if ( v176 > 0x3B )
          {
            v319 = -899497514;
            v177 = v389 ^ v175 ^ v291;
          }
          else
          {
            v319 = -1894007588;
            v177 = v175 & v389 | v291 & (v175 | v389);
          }
          v178 = v345 +g4_m128_lane<int32_t>(v441, v176++) + __builtin_rotateright32(v369, 27);
          v179 = v319 + v178 + v177;
          v180 = __builtin_rotateright32(v291, 2);
          if ( v176 == 80 )
            break;
          v181 = v389;
          v389 = v175;
          v175 = v180;
          v345 = v181;
          v291 = v369;
          v369 = v179;
        }
        LODWORD(v296) = v179 + v296;
        v433 += v389;
        HIDWORD(v296) += v369;
        v3 = 0;
        v4 = __PAIR64__(v175 + HIDWORD(v4), v180 + (int)v4);
      }
      if ( v303 > 0xFFFFFFF7 )
        break;
      v303 += 8;
      v439 = v303;
      v307 = (int *)((char *)v307 + 1);
      if ( v307 == &v405 )
        goto LABEL_19;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v3;
g4_m128_lane<int64_t>(v432, 1) = v4;
g4_m128_lane<int64_t>(v432, 0) = v296;
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v407), "sha1 too many bytes", (int)(uintptr_t)(&v402) + 1);
      sub_19042E0(&v414, &v407);
      v428[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
      g4_std_compat::string_construct_copy(v429, &v415);
      v429[2] = 0;
      v429[5] = 104;
      v429[1] = ((uint32_t)(uintptr_t)&off_209383C);
      v428[6] = ((uint32_t)(uintptr_t)&off_2093828);
      v429[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
      v429[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
      std::terminate();
    }
    v307 = (int *)((char *)v307 + 1);
    ++v440;
    v303 = 0;
  }
  while ( v307 != &v405 );
LABEL_19:
  v438 = v3;
g4_m128_lane<int64_t>(v432, 0) = v296;
g4_m128_lane<int64_t>(v432, 1) = v4;
  v5 = (int *)&v404;
  v404 = (void *)clock();
  do
  {
    while ( 1 )
    {
      v6 = v438;
g4_m128_lane<int8_t>(v434, v438) = *(uint8_t *)v5;
      v438 = v6 + 1;
      if ( v6 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      v5 = (int *)((char *)v5 + 1);
      v439 += 8;
      if ( v5 == &v405 )
        goto LABEL_26;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v408), "sha1 too many bytes", (int)(uintptr_t)(&v402) + 2);
      sub_19042E0(&v416, &v408);
      v429[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
      g4_std_compat::string_construct_copy(v430, &v417);
      v430[2] = 0;
      v430[5] = 104;
      v430[1] = ((uint32_t)(uintptr_t)&off_209383C);
      v429[6] = ((uint32_t)(uintptr_t)&off_2093828);
      v430[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
      v430[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
      std::terminate();
    }
    v5 = (int *)((char *)v5 + 1);
    ++v440;
  }
  while ( v5 != &v405 );
LABEL_26:
g4_m128_lane<int32_t>(v441, 0) = lrand48();
  v7 = &v441;
g4_m128_lane<int32_t>(v441, 1) = lrand48();
  v8 = &v441;
g4_m128_lane<int32_t>(v441, 2) = lrand48();
  do
  {
    while ( 1 )
    {
      v10 = v438;
g4_m128_lane<int8_t>(v434, v438) =g4_m128_lane<int8_t>(*(v8), 0);
      v438 = v10 + 1;
      if ( v10 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      v8 = (__m128i *)((char *)v8 + 1);
      v9 = v439 + 8;
      v439 += 8;
      if ( v8 == (__m128i *)((char *)&v441 + 12) )
        goto LABEL_33;
    }
    v439 = 0;
    if ( v440 == -1 )
      goto LABEL_175;
    v8 = (__m128i *)((char *)v8 + 1);
    ++v440;
    v9 = 0;
  }
  while ( v8 != (__m128i *)((char *)&v441 + 12) );
LABEL_33:
  v304 = v9;
  if ( *(self + 6) != nullptr )
  {
    fread(ptr, 1u, 0x14u, *(self + 6));
    v304 = v439;
  }
  v298 =g4_m128_lane<int64_t>(v432, 0);
  v294 =g4_m128_lane<int64_t>(v432, 1);
  v11 = v438;
  v308 = ptr;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v11++) = *(uint8_t *)v308;
      if ( v11 == 64 )
      {
        v182 = _mm_unpacklo_epi8(v434, v435);
        v183 = _mm_unpackhi_epi8(v434, v435);
        v184 = _mm_unpackhi_epi8(v182, v183);
        v185 = _mm_unpacklo_epi8(v182, v183);
        v346 = v184;
        v186 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v183), v184);
        v187 = _mm_unpackhi_epi8(v185, v184);
        v188 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v185, v346), v187);
        v189 = _mm_unpackhi_epi8(v186, v187);
        v190 = _mm_unpacklo_epi8(v436, v437);
        v191 = _mm_unpackhi_epi8(v436, v437);
        v192 = _mm_unpackhi_epi8(v190, v191);
        v193 = _mm_unpacklo_epi8(v190, v191);
        v347 = v192;
        v194 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v191), v192);
        v195 = _mm_unpackhi_epi8(v193, v192);
        v196 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v193, v347), v195);
        v197 = _mm_unpackhi_epi8(v194, v195);
        v198 = _mm_unpacklo_epi8(v188, v196);
        v348 = _mm_unpackhi_epi8(v188, v196);
        v199 = _mm_unpackhi_epi8(v198, v348);
        v200 = _mm_unpacklo_epi8(v198, v348);
        v201 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v188, v196), v348);
        v390 = v199;
        v349 = _mm_unpackhi_epi8(v189, v197);
        v202 = _mm_unpackhi_epi8(v200, v199);
        v203 = _mm_unpacklo_epi8(v189, v197);
        v204 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v200, v390), v202);
        v205 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v201, v390), v202);
        v206 = _mm_unpackhi_epi8(v203, v349);
        v207 = _mm_unpacklo_epi8(v203, v349);
        v391 = v206;
        v208 = _mm_unpackhi_epi8(v207, v206);
        v209 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v189, v197), v349), v391);
        v210 = _mm_unpacklo_epi8(v204, g4_m128_from<__m128i>(0LL));
        v211 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v207, v391), v208);
        v212 = _mm_unpackhi_epi8(v209, v208);
        v370 = _mm_unpackhi_epi8(v204, g4_m128_from<__m128i>(0LL));
        v350 = _mm_unpacklo_epi8(v211, g4_m128_from<__m128i>(0LL));
        v213 = _mm_unpacklo_epi8(v212, g4_m128_from<__m128i>(0LL));
        v214 = _mm_unpackhi_epi8(v212, g4_m128_from<__m128i>(0LL));
        v320 = _mm_unpackhi_epi8(v211, g4_m128_from<__m128i>(0LL));
        v215 = _mm_unpacklo_epi8(v205, g4_m128_from<__m128i>(0LL));
        v216 = _mm_unpackhi_epi8(v205, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v215, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v213, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v350, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v210, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v392 =g4_m128_lane<int32_t>(v441, 0);
        v217 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v210, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v350, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v213, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v215, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v370, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v320, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v214, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v216, g4_m128_from<__m128i>(0LL)), 8u));
        v218 = v370;
        v371 =g4_m128_lane<int32_t>(v441, 1);
        v219 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v218, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v320, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v214, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v216, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v217;
        v220 =g4_m128_lane<uint64_t>(v444, 1);
        v321 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v321 = __builtin_rotateright32(v392 ^ *((uint32_t *)&v7[-3] + v219 - 2) ^g4_m128_lane<int32_t>(v7[-2], v219) ^ v321, 31);
          v221 = *((uint32_t *)&v7[-1] + v219 - 3) ^ v220;
g4_m128_lane<int32_t>(*(v7), v219) = v321;
          v392 = *((uint32_t *)&v7[-3] + v219 - 1);
          v222 = v371 ^ v392 ^ v221;
          v371 =g4_m128_lane<int32_t>(v7[-3], v219);
          v223 = __builtin_rotateright32(v222, 31);
          v224 = __builtin_rotateright32(
                   *((uint32_t *)&v7[-3] + v219 - 2) ^ v371 ^ *((uint32_t *)&v7[-1] + v219 - 2) ^ HIDWORD(v220),
                   31);
g4_m128_lane<int32_t>(*(v7), v219 + 1) = v223;
g4_m128_lane<int32_t>(*(v7), v219 + 2) = v224;
          v220 = __PAIR64__(v224, v223);
          if ( v219 == 76 )
            break;
          v219 += 3;
        }
        v225 = v445;
        do
        {
          v225[3] = __builtin_rotateright32(*(v225 - 13) ^ *(v225 - 11) ^ *v225 ^ *(v225 - 5), 31);
          ++v225;
        }
        while ( v225 != &v445[77 - v219] );
        v372 = v298;
        v351 = v433;
        v393 = HIDWORD(v294);
        v226 = v294;
        v227 = 0;
        v292 = HIDWORD(v298);
        v398 = v7;
        while ( 1 )
        {
          if ( v227 <= 0x13 )
          {
            v322 = 1518500249;
            v228 = v226 & v292 | v393 & ~v292;
          }
          else if ( v227 <= 0x27 )
          {
            v322 = 1859775393;
            v228 = v393 ^ v226 ^ v292;
          }
          else if ( v227 > 0x3B )
          {
            v322 = -899497514;
            v228 = v393 ^ v226 ^ v292;
          }
          else
          {
            v322 = -1894007588;
            v228 = v226 & v393 | v292 & (v226 | v393);
          }
          v229 = v351 +g4_m128_lane<int32_t>(*(v398), v227++) + __builtin_rotateright32(v372, 27);
          v230 = v322 + v229 + v228;
          v231 = __builtin_rotateright32(v292, 2);
          if ( v227 == 80 )
            break;
          v232 = v393;
          v393 = v226;
          v226 = v231;
          v351 = v232;
          v292 = v372;
          v372 = v230;
        }
        LODWORD(v298) = v230 + v298;
        v433 += v393;
        v7 = v398;
        HIDWORD(v298) += v372;
        LODWORD(v294) = v231 + v294;
        HIDWORD(v294) += v226;
        v11 = 0;
      }
      if ( v304 > 0xFFFFFFF7 )
        break;
      v304 += 8;
      v439 = v304;
      v308 = (uint32_t *)((char *)v308 + 1);
      if ( v308 == &ptr[5] )
        goto LABEL_41;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v11;
g4_m128_lane<int64_t>(v432, 0) = v298;
g4_m128_lane<int64_t>(v432, 1) = v294;
LABEL_175:
      sub_132D7C0();
    }
    v308 = (uint32_t *)((char *)v308 + 1);
    ++v440;
    v304 = 0;
  }
  while ( v308 != &ptr[5] );
LABEL_41:
  v438 = v11;
g4_m128_lane<int64_t>(v432, 0) = v298;
g4_m128_lane<int64_t>(v432, 1) = v294;
  v300 = (void *)operator new(4u);
  v404 = v300;
  v309 = 0;
  v305 = v439;
  do
  {
    while ( 1 )
    {
      v12 = v438;
g4_m128_lane<int8_t>(v434, v438) = *((uint8_t *)v300 + v309);
      v438 = v12 + 1;
      if ( v12 == 63 )
      {
        v233 = _mm_unpacklo_epi8(v434, v435);
        v234 = _mm_unpackhi_epi8(v434, v435);
        v235 = _mm_unpackhi_epi8(v233, v234);
        v236 = _mm_unpacklo_epi8(v233, v234);
        v438 = 0;
        v352 = v235;
        v237 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v234), v235);
        v238 = _mm_unpackhi_epi8(v236, v235);
        v239 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v236, v352), v238);
        v240 = _mm_unpackhi_epi8(v237, v238);
        v241 = _mm_unpacklo_epi8(v436, v437);
        v242 = _mm_unpackhi_epi8(v436, v437);
        v243 = _mm_unpackhi_epi8(v241, v242);
        v244 = _mm_unpacklo_epi8(v241, v242);
        v353 = v243;
        v245 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v242), v243);
        v246 = _mm_unpackhi_epi8(v244, v243);
        v247 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v244, v353), v246);
        v248 = _mm_unpackhi_epi8(v245, v246);
        v249 = _mm_unpacklo_epi8(v239, v247);
        v354 = _mm_unpackhi_epi8(v239, v247);
        v250 = _mm_unpackhi_epi8(v249, v354);
        v251 = _mm_unpacklo_epi8(v249, v354);
        v252 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v239, v247), v354);
        v394 = v250;
        v355 = _mm_unpackhi_epi8(v240, v248);
        v253 = _mm_unpackhi_epi8(v251, v250);
        v254 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v251, v394), v253);
        v255 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v252, v394), v253);
        v256 = _mm_unpacklo_epi8(v240, v248);
        v257 = _mm_unpacklo_epi8(v256, v355);
        v395 = _mm_unpackhi_epi8(v256, v355);
        v258 = _mm_unpackhi_epi8(v257, v395);
        v259 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v257, v395), v258);
        v260 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v240, v248), v355), v395);
        v261 = _mm_unpacklo_epi8(v254, g4_m128_from<__m128i>(0LL));
        v373 = _mm_unpackhi_epi8(v254, g4_m128_from<__m128i>(0LL));
        v262 = _mm_unpackhi_epi8(v260, v258);
        v356 = _mm_unpacklo_epi8(v259, g4_m128_from<__m128i>(0LL));
        v263 = _mm_unpacklo_epi8(v262, g4_m128_from<__m128i>(0LL));
        v323 = _mm_unpackhi_epi8(v259, g4_m128_from<__m128i>(0LL));
        v264 = _mm_unpacklo_epi8(v255, g4_m128_from<__m128i>(0LL));
        v265 = _mm_unpackhi_epi8(v262, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v264, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v263, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v356, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v261, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v266 = _mm_unpackhi_epi8(v255, g4_m128_from<__m128i>(0LL));
        v396 =g4_m128_lane<int32_t>(v441, 0);
        v267 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v261, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v356, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v263, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v264, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v373, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v323, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v265, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v266, g4_m128_from<__m128i>(0LL)), 8u));
        v268 = v373;
        v374 =g4_m128_lane<int32_t>(v441, 1);
        v269 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v268, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v323, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v265, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v266, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v267;
        v270 =g4_m128_lane<uint64_t>(v444, 1);
        v324 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v324 = __builtin_rotateright32(v396 ^ *((uint32_t *)&v7[-3] + v269 - 2) ^g4_m128_lane<int32_t>(v7[-2], v269) ^ v324, 31);
          v271 = *((uint32_t *)&v7[-1] + v269 - 3) ^ v270;
g4_m128_lane<int32_t>(*(v7), v269) = v324;
          v396 = *((uint32_t *)&v7[-3] + v269 - 1);
          v272 = v374 ^ v396 ^ v271;
          v374 =g4_m128_lane<int32_t>(v7[-3], v269);
          v273 = __builtin_rotateright32(v272, 31);
          v274 = __builtin_rotateright32(
                   *((uint32_t *)&v7[-3] + v269 - 2) ^ v374 ^ *((uint32_t *)&v7[-1] + v269 - 2) ^ HIDWORD(v270),
                   31);
g4_m128_lane<int32_t>(*(v7), v269 + 1) = v273;
g4_m128_lane<int32_t>(*(v7), v269 + 2) = v274;
          v270 = __PAIR64__(v274, v273);
          if ( v269 == 76 )
            break;
          v269 += 3;
        }
        v275 = v445;
        do
        {
          v275[3] = __builtin_rotateright32(*(v275 - 13) ^ *(v275 - 11) ^ *v275 ^ *(v275 - 5), 31);
          ++v275;
        }
        while ( v275 != &v445[77 - v269] );
        v375 =g4_m128_lane<int32_t>(v432, 0);
        v357 = v433;
        v397 =g4_m128_lane<int32_t>(v432, 3);
        v276 =g4_m128_lane<int32_t>(v432, 2);
        v277 = 0;
        v400 =g4_m128_lane<int32_t>(v432, 1);
        v399 = v7;
        while ( 1 )
        {
          if ( v277 <= 0x13 )
          {
            v325 = 1518500249;
            v278 = v276 & v400 | v397 & ~v400;
          }
          else if ( v277 <= 0x27 )
          {
            v325 = 1859775393;
            v278 = v397 ^ v276 ^ v400;
          }
          else if ( v277 > 0x3B )
          {
            v325 = -899497514;
            v278 = v397 ^ v276 ^ v400;
          }
          else
          {
            v325 = -1894007588;
            v278 = v276 & v397 | v400 & (v276 | v397);
          }
          v279 = v357 +g4_m128_lane<int32_t>(*(v399), v277++) + __builtin_rotateright32(v375, 27);
          v280 = v325 + v279 + v278;
          v281 = __builtin_rotateright32(v400, 2);
          if ( v277 == 80 )
            break;
          v282 = v397;
          v397 = v276;
          v276 = v281;
          v357 = v282;
          v400 = v375;
          v375 = v280;
        }
g4_m128_lane<int32_t>(v432, 1) += v375;
        v7 = v399;
g4_m128_lane<int32_t>(v432, 0) += v280;
g4_m128_lane<int32_t>(v432, 2) += v281;
g4_m128_lane<int32_t>(v432, 3) += v276;
        v433 += v397;
      }
      if ( v305 > 0xFFFFFFF7 )
        break;
      v305 += 8;
      ++v309;
      v439 = v305;
      if ( v309 == 4 )
        goto LABEL_47;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v409), "sha1 too many bytes", (int)(uintptr_t)(&v402) + 3);
      sub_19042E0(&v418, &v409);
      v430[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
      g4_std_compat::string_construct_copy(v431, &v419);
      v431[2] = 0;
      v431[5] = 104;
      v431[1] = ((uint32_t)(uintptr_t)&off_209383C);
      v430[6] = ((uint32_t)(uintptr_t)&off_2093828);
      v431[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
      v431[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
      std::terminate();
    }
    ++v309;
    ++v440;
    v305 = 0;
  }
  while ( v309 != 4 );
LABEL_47:
  v13 = (int *)&v404;
  do
  {
    while ( 1 )
    {
      v14 = v438;
g4_m128_lane<int8_t>(v434, v438) = *(uint8_t *)v13;
      v438 = v14 + 1;
      if ( v14 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      v13 = (int *)((char *)v13 + 1);
      v439 += 8;
      if ( v13 == &v405 )
        goto LABEL_54;
    }
    v439 = 0;
    if ( v440 == -1 )
      goto LABEL_175;
    v13 = (int *)((char *)v13 + 1);
    ++v440;
  }
  while ( v13 != &v405 );
LABEL_54:
  operator delete(v404);
  v15 = (int8_t *)self;
  v16 = (int8_t *)(self + 5);
  do
  {
    while ( 1 )
    {
      v17 = v438;
g4_m128_lane<int8_t>(v434, v438) = *v15;
      v438 = v17 + 1;
      if ( v17 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      ++v15;
      v439 += 8;
      if ( v16 == v15 )
        goto LABEL_61;
    }
    v439 = 0;
    if ( v440 == -1 )
      goto LABEL_175;
    ++v15;
    ++v440;
  }
  while ( v16 != v15 );
LABEL_61:
  v18 = v438;
g4_m128_lane<int8_t>(v434, v438) = 0x80;
  v19 = v18 + 1;
  v438 = v19;
  if ( v19 == 64 )
  {
    v438 = 0;
    boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
    v19 = v438;
  }
  if ( v19 > 0x38 )
  {
    while ( v19 != 0 )
    {
      while ( 1 )
      {
g4_m128_lane<int8_t>(v434, v19++) = 0;
        if ( v19 == 64 )
          break;
        if ( v19 == 0 )
          goto LABEL_163;
      }
      v438 = 0;
      boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      v19 = v438;
    }
LABEL_163:
    v283 = 0;
    v284 = -(int)(uintptr_t)(&v434) & 0xF;
    if ( v284 != 0 )
    {
      do
g4_m128_lane<int8_t>(v434, v283++) = 0;
      while ( v284 > v283 );
    }
    v376 = 56 - v284;
    v285 = (56 - v284) >> 4;
    v358 = 16 * v285;
    if ( 16 * v285 == 0 )
      goto LABEL_182;
    v326 = (__m128i *)((char *)&v434 + v284);
    v286 = 0;
    v287 = v326;
    do
    {
      ++v286;
      *v287++ = g4_m128_from<__m128i>(0LL);
    }
    while ( v286 < v285 );
    v283 += v358;
    if ( v376 != v358 )
    {
LABEL_182:
      do
      {
g4_m128_lane<int8_t>(v434, v283) = 0;
        v288 = v283 + 1;
        if ( v288 > 0x37 )
          break;
g4_m128_lane<int8_t>(v434, v288) = 0;
        v283 = v288 + 1;
      }
      while ( v283 <= 0x37 );
    }
  }
  else if ( v19 != 56 )
  {
    v359 = 56 - v19;
    v327 = v19 + 20;
    v20 = v19;
    v21 = -((int)(uintptr_t)(&v432) + v19 + 20) & 0xF;
    if ( v21 > 56 - v19 )
      v21 = 56 - v19;
    if ( v21 == 0 )
      goto LABEL_70;
    do
g4_m128_lane<int8_t>(v434, v20++) = 0;
    while ( v21 > v20 - v19 );
    if ( v359 != v21 )
    {
LABEL_70:
      v360 = v359 - v21;
      v310 = 16 * (v360 >> 4);
      if ( v310 == 0 )
        goto LABEL_183;
      v22 = 0;
      v23 = (__m128i *)((char *)&v432 + v21 + v327);
      do
      {
        ++v22;
        *v23++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v22 < v360 >> 4 );
      v20 += v310;
      if ( v360 != v310 )
      {
LABEL_183:
        do
g4_m128_lane<int8_t>(v434, v20++) = 0;
        while ( v20 <= 0x37 );
      }
    }
  }
  v438 = 0;
g4_m128_lane<int8_t>(v437, 11) = v440;
g4_m128_lane<int8_t>(v437, 8) = HIBYTE(v440);
g4_m128_lane<int8_t>(v437, 9) = BYTE2(v440);
g4_m128_lane<int8_t>(v437, 10) = BYTE1(v440);
g4_m128_lane<int8_t>(v437, 15) = v439;
g4_m128_lane<int8_t>(v437, 12) = HIBYTE(v439);
g4_m128_lane<int8_t>(v437, 13) = BYTE2(v439);
g4_m128_lane<int8_t>(v437, 14) = BYTE1(v439);
  boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
  v24 = HIDWORD(v402);
  v420 = v432;
  v421 = v433;
  if ( (unsigned int)(uintptr_t)(self) > HIDWORD(v402) + 16 || HIDWORD(v402) > (unsigned int)(uintptr_t)(self + 4) )
  {
    v25 = v420;
    result = 4;
    *(__m128i *)HIDWORD(v402) = _mm_xor_si128(*(__m128i *)HIDWORD(v402), v420);
    *(__m128i *)self = _mm_xor_si128(v25, *(__m128i *)self);
    v27 = self;
    v377 = 1;
  }
  else
  {
    result = 0;
    v377 = 5;
    v27 = self;
  }
  do
  {
    v28 =g4_m128_lane<int32_t>(v420, result);
    *(uint32_t *)(v24 + 4 * result) ^= v28;
    v27[result] = (FILE *)(v28 ^ (unsigned int)(uintptr_t)(v27[result]));
    v29 = v377-- == 1;
    ++result;
  }
  while ( !v29 );
  return result;
}


// ============================================================================
// Address:   0x1336700 (size: 6279 bytes)
// Symbol:    _ZN5boost5uuids6detail4seedINS_6random23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEEvRT_
// Demangled: void boost::uuids::detail::seed<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u> &)
// ============================================================================
namespace boost { namespace uuids { namespace detail {
template <typename Engine> FILE *seed(int *a1);
} } }
template <>
FILE *boost::uuids::detail::seed<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(
        int *a1)
{
  FILE *v1;
  uint32_t *v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  void *v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  void *v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  uint8_t *v26;
  unsigned int v27;
  FILE **v28;
  unsigned int *v29;
  unsigned int v30;
  uint8_t *v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  char v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  bool v50;
  unsigned int v51;
  __m128i *v52;
  unsigned int v53;
  uint32_t *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  __m128i *v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  int v66;
  int v67;
  FILE *result;
  typedef int _g4_t_v83 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v85 __attribute__((aligned(1)));
  typedef void (**_g4_t_v124)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden);
  typedef uint8_t _g4_t_u8_20[20];
  typedef uint32_t _g4_t_u32_7[7];
  typedef uint32_t _g4_t_u32_6[6];
  typedef uint8_t _g4_t_u8_64[64];
  alignas(16) uint8_t _g4_sf[588] = {};
  uint8_t *&v69 = *reinterpret_cast<uint8_t **>(_g4_sf + 0x00u);
  uint8_t *&v70 = *reinterpret_cast<uint8_t **>(_g4_sf + 0x00u);
  uint8_t *&v71 = *reinterpret_cast<uint8_t **>(_g4_sf + 0x00u);
  int &v72 = *reinterpret_cast<int *>(_g4_sf + 0x04u);
  int &v73 = *reinterpret_cast<int *>(_g4_sf + 0x08u);
  unsigned int &v74 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x0Cu);
  unsigned int &v75 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x0Cu);
  unsigned int &v76 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x10u);
  unsigned int &v77 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x14u);
  unsigned int &v78 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x14u);
  unsigned int &v79 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x14u);
  unsigned int &v80 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x14u);
  unsigned int &v81 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x14u);
  int &v82 = *reinterpret_cast<int *>(_g4_sf + 0x18u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 0x27u);
  int &v84 = *reinterpret_cast<int *>(_g4_sf + 0x28u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 0x2Cu);
  void *&v86 = *reinterpret_cast<void **>(_g4_sf + 0x34u);
  int &v87 = *reinterpret_cast<int *>(_g4_sf + 0x38u);
  int &v88 = *reinterpret_cast<int *>(_g4_sf + 0x3Cu);
  int &v89 = *reinterpret_cast<int *>(_g4_sf + 0x40u);
  int &v90 = *reinterpret_cast<int *>(_g4_sf + 0x44u);
  int &v91 = *reinterpret_cast<int *>(_g4_sf + 0x48u);
  int &v92 = *reinterpret_cast<int *>(_g4_sf + 0x4Cu);
  int &v93 = *reinterpret_cast<int *>(_g4_sf + 0x50u);
  int &v94 = *reinterpret_cast<int *>(_g4_sf + 0x54u);
  int &v95 = *reinterpret_cast<int *>(_g4_sf + 0x58u);
  int &v96 = *reinterpret_cast<int *>(_g4_sf + 0x5Cu);
  int &v97 = *reinterpret_cast<int *>(_g4_sf + 0x60u);
  int &v98 = *reinterpret_cast<int *>(_g4_sf + 0x64u);
  int &v99 = *reinterpret_cast<int *>(_g4_sf + 0x68u);
  int &v100 = *reinterpret_cast<int *>(_g4_sf + 0x6Cu);
  int &v101 = *reinterpret_cast<int *>(_g4_sf + 0x70u);
  int &v102 = *reinterpret_cast<int *>(_g4_sf + 0x74u);
  int &v103 = *reinterpret_cast<int *>(_g4_sf + 0x78u);
  int &v104 = *reinterpret_cast<int *>(_g4_sf + 0x7Cu);
  int &v105 = *reinterpret_cast<int *>(_g4_sf + 0x80u);
  int &v106 = *reinterpret_cast<int *>(_g4_sf + 0x84u);
  int &v107 = *reinterpret_cast<int *>(_g4_sf + 0x88u);
  int &v108 = *reinterpret_cast<int *>(_g4_sf + 0x8Cu);
  int &v109 = *reinterpret_cast<int *>(_g4_sf + 0x90u);
  int &v110 = *reinterpret_cast<int *>(_g4_sf + 0x94u);
  int &v111 = *reinterpret_cast<int *>(_g4_sf + 0x98u);
  int &v112 = *reinterpret_cast<int *>(_g4_sf + 0x9Cu);
  int &v113 = *reinterpret_cast<int *>(_g4_sf + 0xA0u);
  _g4_t_u8_20 &v114 = *reinterpret_cast<_g4_t_u8_20 *>(_g4_sf + 0xA4u);
  _g4_t_u8_20 &_rng_raw = *reinterpret_cast<_g4_t_u8_20 *>(_g4_sf + 0xB8u);
  uint32_t *const ptr = (uint32_t *)_rng_raw;
  uint8_t *const v116 = _rng_raw + 12;
  unsigned int &v117 = *reinterpret_cast<unsigned int *>(_g4_sf + 0xCCu);
  int &v118 = *reinterpret_cast<int *>(_g4_sf + 0xD0u);
  int &v119 = *reinterpret_cast<int *>(_g4_sf + 0xD4u);
  int &v120 = *reinterpret_cast<int *>(_g4_sf + 0xD8u);
  int &v121 = *reinterpret_cast<int *>(_g4_sf + 0xDCu);
  int &v122 = *reinterpret_cast<int *>(_g4_sf + 0xE0u);
  FILE *&v123 = *reinterpret_cast<FILE **>(_g4_sf + 0xE4u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 0xF0u);
  _g4_t_u32_7 &v125 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0xF4u);
  _g4_t_u32_7 &v126 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x110u);
  _g4_t_u32_7 &v127 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x12Cu);
  _g4_t_u32_7 &v128 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x148u);
  _g4_t_u32_7 &v129 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x164u);
  _g4_t_u32_7 &v130 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x180u);
  _g4_t_u32_7 &v131 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x19Cu);
  _g4_t_u32_7 &v132 = *reinterpret_cast<_g4_t_u32_7 *>(_g4_sf + 0x1B8u);
  _g4_t_u32_6 &v133 = *reinterpret_cast<_g4_t_u32_6 *>(_g4_sf + 0x1D4u);
  int &v134 = *reinterpret_cast<int *>(_g4_sf + 0x1ECu);
  int &v135 = *reinterpret_cast<int *>(_g4_sf + 0x1F0u);
  int &v136 = *reinterpret_cast<int *>(_g4_sf + 0x1F4u);
  int &v137 = *reinterpret_cast<int *>(_g4_sf + 0x1F8u);
  int &v138 = *reinterpret_cast<int *>(_g4_sf + 0x1FCu);
  _g4_t_u8_64 &v139 = *reinterpret_cast<_g4_t_u8_64 *>(_g4_sf + 0x200u);
  unsigned int &v140 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x240u);
  unsigned int &v141 = *reinterpret_cast<unsigned int *>(_g4_sf + 0x244u);
  int &v142 = *reinterpret_cast<int *>(_g4_sf + 0x248u);

  v122 = 5;
  v123 = fopen("/dev/urandom", "rb");
  boost::uuids::detail::seed_rng::sha1_random_digest_((FILE **)&v117);
  v65 = 1;
  v82 = 0;
  v76 = v117;
  v122 = 1;
  while ( 1 )
  {
    if ( v65 == 5 )
    {
      v134 = 1732584193;
      v135 = -271733879;
      v136 = -1732584194;
      v137 = 271733878;
      v138 = -1009589776;
      v141 = 0;
      v142 = 0;
      HIDWORD(v85) = (uint32_t)(uintptr_t)(g4_fnstatic_73344a3f5d);
      std::memcpy(v114, g4_fnstatic_73344a3f5d, sizeof(v114));
      v2 = (uint32_t *)(v114);
      v3 = 0;
      do
      {
        v139[v3] = *(uint8_t *)v2;
        v140 = v3 + 1;
        if ( v3 == 63 )
        {
          v140 = 0;
          boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        }
        if ( v141 <= 0xFFFFFFF7 )
        {
          v141 += 8;
        }
        else
        {
          v141 = 0;
          if ( v142 == -1 )
          {
            g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v87), "sha1 too many bytes", (int)(uintptr_t)(&v83));
            sub_19042E0(&v96, &v87);
            v124 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden))((uint32_t)(uintptr_t)&off_20A9AA8);
            g4_std_compat::string_construct_copy(v125, &v97);
            v125[2] = 0;
            v125[5] = 104;
            v125[1] = ((uint32_t)(uintptr_t)&off_209383C);
            v124 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093828));
            v125[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
            v125[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
            std::terminate();
          }
          ++v142;
        }
        v2 = (uint32_t *)((char *)v2 + 1);
        v3 = v140;
      }
      while ( v2 != ptr );
      v139[v140] = BYTE4(v85);
      v140 = v3 + 1;
      if ( v3 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
      }
      if ( v141 <= 0xFFFFFFF7 )
      {
        v4 = v141 + 8;
        v141 += 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_187;
        ++v142;
        v4 = 0;
      }
      v5 = v140;
      v139[v140] = BYTE5(v85);
      v140 = v5 + 1;
      if ( v5 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v4 = v141;
      }
      if ( v4 <= 0xFFFFFFF7 )
      {
        v6 = v4 + 8;
        v141 = v6;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_187;
        ++v142;
        v6 = 0;
      }
      v7 = v140;
      v139[v140] = BYTE6(v85);
      v140 = v7 + 1;
      if ( v7 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v6 = v141;
      }
      if ( v6 <= 0xFFFFFFF7 )
      {
        v8 = v6 + 8;
        v141 = v8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_187;
        ++v142;
        v8 = 0;
      }
      v9 = v140;
      v139[v140] = HIBYTE(v85);
      v140 = v9 + 1;
      if ( v9 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v8 = v141;
      }
      if ( v8 <= 0xFFFFFFF7 )
      {
        v141 = v8 + 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
        {
LABEL_187:
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v88), "sha1 too many bytes", (int)(uintptr_t)(&v84));
          sub_19042E0(&v98, &v88);
          v125[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v126, &v99);
          v126[2] = 0;
          v126[5] = 104;
          v126[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v125[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v126[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v126[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        ++v142;
      }
      v10 = (void *)time(nullptr);
      v11 = v140;
      v86 = v10;
      v139[v140] = (uint8_t)(uintptr_t)(v10);
      v140 = v11 + 1;
      if ( v11 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
      }
      if ( v141 <= 0xFFFFFFF7 )
      {
        v12 = v141 + 8;
        v141 += 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_188;
        ++v142;
        v12 = 0;
      }
      v13 = v140;
      v139[v140] = BYTE1(v86);
      v140 = v13 + 1;
      if ( v13 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v12 = v141;
      }
      if ( v12 <= 0xFFFFFFF7 )
      {
        v14 = v12 + 8;
        v141 = v14;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_188;
        ++v142;
        v14 = 0;
      }
      v15 = v140;
      v139[v140] = BYTE2(v86);
      v140 = v15 + 1;
      if ( v15 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v14 = v141;
      }
      if ( v14 <= 0xFFFFFFF7 )
      {
        v16 = v14 + 8;
        v141 = v16;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_188;
        ++v142;
        v16 = 0;
      }
      v17 = v140;
      v139[v140] = HIBYTE(v86);
      v140 = v17 + 1;
      if ( v17 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v16 = v141;
      }
      if ( v16 <= 0xFFFFFFF7 )
      {
        v141 = v16 + 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
        {
LABEL_188:
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v89), "sha1 too many bytes", (int)(uintptr_t)(&v84) + 1);
          sub_19042E0(&v100, &v89);
          v126[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v127, &v101);
          v127[2] = 0;
          v127[5] = 104;
          v127[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v126[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v127[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v127[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        ++v142;
      }
      v18 = (void *)clock();
      v19 = v140;
      v86 = v18;
      v139[v140] = (uint8_t)(uintptr_t)(v18);
      v140 = v19 + 1;
      if ( v19 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
      }
      if ( v141 <= 0xFFFFFFF7 )
      {
        v20 = v141 + 8;
        v141 += 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_189;
        ++v142;
        v20 = 0;
      }
      v21 = v140;
      v139[v140] = BYTE1(v86);
      v140 = v21 + 1;
      if ( v21 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v20 = v141;
      }
      if ( v20 <= 0xFFFFFFF7 )
      {
        v22 = v20 + 8;
        v141 = v22;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_189;
        ++v142;
        v22 = 0;
      }
      v23 = v140;
      v139[v140] = BYTE2(v86);
      v140 = v23 + 1;
      if ( v23 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v22 = v141;
      }
      if ( v22 <= 0xFFFFFFF7 )
      {
        v24 = v22 + 8;
        v141 = v24;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_189;
        ++v142;
        v24 = 0;
      }
      v25 = v140;
      v139[v140] = HIBYTE(v86);
      v140 = v25 + 1;
      if ( v25 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v24 = v141;
      }
      if ( v24 <= 0xFFFFFFF7 )
      {
        v141 = v24 + 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
        {
LABEL_189:
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v90), "sha1 too many bytes", (int)(uintptr_t)(&v84) + 2);
          sub_19042E0(&v102, &v90);
          v127[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v128, &v103);
          v128[2] = 0;
          v128[5] = 104;
          v128[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v127[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v128[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v128[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        ++v142;
      }
      ptr[0] = lrand48();
      v26 = (uint8_t *)(ptr);
      ptr[1] = lrand48();
      ptr[2] = lrand48();
      do
      {
        while ( 1 )
        {
          v27 = v140;
          v139[v140] = *v26;
          v140 = v27 + 1;
          if ( v27 == 63 )
          {
            v140 = 0;
            boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
          }
          if ( v141 > 0xFFFFFFF7 )
            break;
          ++v26;
          v141 += 8;
          if ( v26 == v116 )
            goto LABEL_81;
        }
        v141 = 0;
        if ( v142 == -1 )
        {
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v91), "sha1 too many bytes", (int)(uintptr_t)(&v84) + 3);
          sub_19042E0(&v104, &v91);
          v128[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v129, &v105);
          v129[2] = 0;
          v129[5] = 104;
          v129[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v128[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v129[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v129[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        ++v26;
        ++v142;
      }
      while ( v26 != v116 );
LABEL_81:
      if ( v123 != nullptr )
        fread(_rng_raw, 1u, 0x14u, v123);
      v28 = (FILE **)ptr;
      do
      {
        while ( 1 )
        {
          v30 = v140;
          v139[v140] = *(uint8_t *)v28;
          v140 = v30 + 1;
          if ( v30 == 63 )
          {
            v140 = 0;
            boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
          }
          if ( v141 > 0xFFFFFFF7 )
            break;
          v28 = (FILE **)((char *)v28 + 1);
          v29 = &v117;
          v141 += 8;
          if ( v28 == (FILE **)&v117 )
            goto LABEL_90;
        }
        v141 = 0;
        if ( v142 == -1 )
        {
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v92), "sha1 too many bytes", (int)(uintptr_t)(&v85));
          sub_19042E0(&v106, &v92);
          v129[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v130, &v107);
          v130[2] = 0;
          v130[5] = 104;
          v130[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v129[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v130[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v130[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        v28 = (FILE **)((char *)v28 + 1);
        v29 = &v117;
        ++v142;
      }
      while ( v28 != (FILE **)&v117 );
LABEL_90:
      v31 = (uint8_t *)operator new(4u);
      v32 = v140;
      v86 = v31;
      v139[v140] = *v31;
      v140 = v32 + 1;
      if ( v32 == 63 )
      {
        v70 = v31;
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v31 = v70;
      }
      if ( v141 <= 0xFFFFFFF7 )
      {
        v77 = v141 + 8;
        v141 += 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_192;
        v77 = 0;
        ++v142;
      }
      v33 = v140;
      v139[v140] = v31[1];
      v140 = v33 + 1;
      if ( v33 == 63 )
      {
        v69 = v31;
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v31 = v69;
        v77 = v141;
      }
      if ( v77 <= 0xFFFFFFF7 )
      {
        v78 = v77 + 8;
        v141 = v78;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_192;
        v78 = 0;
        ++v142;
      }
      v34 = v140;
      v139[v140] = v31[2];
      v140 = v34 + 1;
      if ( v34 == 63 )
      {
        v71 = v31;
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v31 = v71;
        v78 = v141;
      }
      if ( v78 <= 0xFFFFFFF7 )
      {
        v35 = v78 + 8;
        v141 = v78 + 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_192;
        ++v142;
        v35 = 0;
      }
      v36 = v31[3];
      v37 = v140;
      v139[v140] = v36;
      v140 = v37 + 1;
      if ( v37 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v35 = v141;
      }
      if ( v35 <= 0xFFFFFFF7 )
      {
        v38 = v35 + 8;
        v141 = v35 + 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
        {
LABEL_192:
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v93), "sha1 too many bytes", (int)(uintptr_t)(&v85) + 1);
          sub_19042E0(&v108, &v93);
          v130[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v131, &v109);
          v131[2] = 0;
          v131[5] = 104;
          v131[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v130[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v131[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v131[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        ++v142;
        v38 = 0;
      }
      v39 = v140;
      v139[v140] = (uint8_t)(uintptr_t)(v86);
      v140 = v39 + 1;
      if ( v39 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v38 = v141;
      }
      if ( v38 <= 0xFFFFFFF7 )
      {
        v40 = v38 + 8;
        v141 = v40;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_193;
        ++v142;
        v40 = 0;
      }
      v41 = v140;
      v139[v140] = BYTE1(v86);
      v140 = v41 + 1;
      if ( v41 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v40 = v141;
      }
      if ( v40 <= 0xFFFFFFF7 )
      {
        v42 = v40 + 8;
        v141 = v42;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_193;
        ++v142;
        v42 = 0;
      }
      v43 = v140;
      v139[v140] = BYTE2(v86);
      v140 = v43 + 1;
      if ( v43 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v42 = v141;
      }
      if ( v42 <= 0xFFFFFFF7 )
      {
        v44 = v42 + 8;
        v141 = v44;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
          goto LABEL_193;
        ++v142;
        v44 = 0;
      }
      v45 = v140;
      v139[v140] = HIBYTE(v86);
      v140 = v45 + 1;
      if ( v45 == 63 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v44 = v141;
      }
      if ( v44 <= 0xFFFFFFF7 )
      {
        v141 = v44 + 8;
      }
      else
      {
        v141 = 0;
        if ( v142 == -1 )
        {
LABEL_193:
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v94), "sha1 too many bytes", (int)(uintptr_t)(&v85) + 2);
          sub_19042E0(&v110, &v94);
          v131[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v132, &v111);
          v132[2] = 0;
          v132[5] = 104;
          v132[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v131[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v132[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v132[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        ++v142;
      }
      operator delete(v86);
      do
      {
        while ( 1 )
        {
          v46 = v140;
          v139[v140] = *(uint8_t *)v29;
          v140 = v46 + 1;
          if ( v46 == 63 )
          {
            v140 = 0;
            boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
          }
          if ( v141 > 0xFFFFFFF7 )
            break;
          v29 = (unsigned int *)((char *)v29 + 1);
          v141 += 8;
          if ( v29 == (unsigned int *)&v122 )
            goto LABEL_137;
        }
        v141 = 0;
        if ( v142 == -1 )
        {
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v95), "sha1 too many bytes", (int)(uintptr_t)(&v85) + 3);
          sub_19042E0(&v112, &v95);
          v132[6] = ((uint32_t)(uintptr_t)&off_20A9AA8);
          g4_std_compat::string_construct_copy(v133, &v113);
          v133[2] = 0;
          v133[5] = 104;
          v133[1] = ((uint32_t)(uintptr_t)&off_209383C);
          v132[6] = ((uint32_t)(uintptr_t)&off_2093828);
          v133[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
          v133[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
          std::terminate();
        }
        v29 = (unsigned int *)((char *)v29 + 1);
        ++v142;
      }
      while ( v29 != (unsigned int *)&v122 );
LABEL_137:
      v47 = v140;
      v139[v140] = 0x80;
      v48 = v47 + 1;
      v140 = v48;
      if ( v48 == 64 )
      {
        v140 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
        v48 = v140;
      }
      if ( v48 > 0x38 )
      {
        while ( v48 != 0 )
        {
          while ( 1 )
          {
            v139[v48++] = 0;
            if ( v48 == 64 )
              break;
            if ( v48 == 0 )
              goto LABEL_156;
          }
          v140 = 0;
          boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
          v48 = v140;
        }
LABEL_156:
        v60 = 0;
        v61 = -(int)(uintptr_t)(v139) & 0xF;
        if ( v61 != 0 )
        {
          do
            v139[v60++] = 0;
          while ( v61 > v60 );
        }
        v81 = 56 - v61;
        v75 = (56 - v61) >> 4;
        v72 = 16 * v75;
        if ( 16 * v75 == 0 )
          goto LABEL_204;
        v62 = (__m128i *)&v139[v61];
        v63 = 0;
        do
        {
          ++v63;
          *v62++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v75 > v63 );
        v60 += v72;
        if ( v72 != v81 )
        {
LABEL_204:
          do
          {
            v139[v60] = 0;
            v64 = v60 + 1;
            if ( v64 > 0x37 )
              break;
            v139[v64] = 0;
            v60 = v64 + 1;
          }
          while ( v60 <= 0x37 );
        }
      }
      else if ( v48 != 56 )
      {
        v79 = 56 - v48;
        v49 = -((int)(uintptr_t)(&v134) + v48 + 20) & 0xF;
        if ( v49 > 56 - v48 )
          v49 = 56 - v48;
        v50 = v49 == 0;
        v74 = v49;
        v51 = v48;
        if ( v50 )
          goto LABEL_146;
        do
          v139[v51++] = 0;
        while ( v51 - v48 < v74 );
        if ( v79 != v74 )
        {
LABEL_146:
          v80 = v79 - v74;
          v73 = 16 * (v80 >> 4);
          if ( v73 == 0 )
            goto LABEL_205;
          v52 = (__m128i *)((char *)&v134 + v74 + v48 + 20);
          v53 = 0;
          do
          {
            ++v53;
            *v52++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v53 < v80 >> 4 );
          v51 += v73;
          if ( v80 != v73 )
          {
LABEL_205:
            do
              v139[v51++] = 0;
            while ( v51 <= 0x37 );
          }
        }
      }
      v139[59] = v142;
      v140 = 0;
      v139[56] = HIBYTE(v142);
      v139[57] = BYTE2(v142);
      v139[58] = BYTE1(v142);
      v139[63] = v141;
      v139[60] = HIBYTE(v141);
      v139[61] = BYTE2(v141);
      v139[62] = BYTE1(v141);
      boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v134);
      v54 = (uint32_t *)HIDWORD(v85);
      v55 = v134;
      v56 = v136;
      v57 = v135;
      v58 = v137;
      v119 ^= v136;
      v118 ^= v135;
      v120 ^= v137;
      *(uint32_t *)HIDWORD(v85) ^= v134;
      v1 = (FILE *)(v117 ^ v55);
      v54[2] ^= v56;
      v54[1] ^= v57;
      v59 = v138;
      v54[3] ^= v58;
      v54[4] ^= v59;
      v117 = (unsigned int)(uintptr_t)(v1);
      v121 ^= v59;
      v65 = 1;
    }
    else
    {
      v1 = (FILE *)*(&v117 + v65++);
    }
    v122 = v65;
    a1[v82++] = v76;
    if ( v82 == 624 )
      break;
    v76 = (unsigned int)(uintptr_t)(v1);
  }
  v66 = *a1;
  a1[624] = 624;
  if ( v66 >= 0 )
  {
    v67 = 1;
    while ( a1[v67] == 0 )
    {
      if ( ++v67 == 624 )
      {
        *a1 = 0x80000000;
        break;
      }
    }
  }
  result = v123;
  if ( v123 != nullptr )
    return (FILE *)fclose(v123);
  return result;
}


// ============================================================================
// Address:   0x1337f90 (size: 874 bytes)
// Symbol:    _ZN5boost9date_time12second_clockINS_10posix_time5ptimeEE11create_timeEP2tm
// Demangled: boost::date_time::second_clock<boost::posix_time::ptime>::create_time(tm *)
// ============================================================================
template <>
boost::date_time::second_clock<boost::posix_time::ptime> *boost::date_time::second_clock<boost::posix_time::ptime>::create_time(
        boost::date_time::second_clock<boost::posix_time::ptime> *self,
        tm *a2)
{
  uint16_t tm_mday;
  uint16_t v3;
  uint16_t v4; // si
  int tm_min;
  int tm_sec;
  int tm_hour;
  int16_t v8;
  unsigned int v9;
  int v10;
  int64_t v11; // rax
  int v13;
  uint16_t v14;
  int64_t v15;
  int64_t v16;
  int v17;
  int16_t tm_mon;
  int16_t tm_year;

  tm_mday = a2->tm_mday;
  v17 = tm_mday;
  if ( tm_mday == 0 || tm_mday > 0x1Fu )
    sub_132D85D();
  tm_mon = a2->tm_mon;
  v3 = tm_mon + 1;
  if ( tm_mon == -1 || v3 > 0xCu )
    sub_132D90F();
  tm_year = a2->tm_year;
  v4 = tm_year + 1900;
  if ( (uint16_t)(tm_year + 1900) <= 0x577u || v4 > 0x2710u )
    sub_132D8B6();
  if ( v3 <= 0xBu )
  {
    v13 = 1 << v3;
    v14 = 30;
    if ( (v13 & 0xA50) == 0 )
    {
      if ( (v13 & 4) == 0 )
        goto LABEL_8;
      LOBYTE(v14) = 28;
      if ( (((uint8_t)tm_year + 108) & 3) == 0 )
      {
        v14 = 29;
        if ( v4 == 100 * (v4 / 0x64u) )
          v14 = 29 - (v4 % 0x190u != 0);
      }
    }
    if ( tm_mday > v14 )
      sub_132D766();
  }
LABEL_8:
  tm_min = a2->tm_min;
  tm_sec = a2->tm_sec;
  tm_hour = a2->tm_hour;
  if ( tm_min < 0 || tm_hour < 0 || tm_sec < 0 )
    v15 = -3600LL * (int)__builtin_abs(tm_hour) - 60LL * (int)__builtin_abs(tm_min) - (int)__builtin_abs(tm_sec);
  else
    v15 = tm_sec + 60LL * tm_min + 3600LL * tm_hour;
  v16 = 1000000 * v15;
  v8 = (14 - (uint16_t)(tm_mon + 1)) / 12;
  v9 = ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u
     - 32045;
  *(uint32_t *)self = 1;
  *((uint32_t *)self + 1) = 0;
  if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32045
    && ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32044
    && ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32043 )
  {
    if ( ((unsigned int)v16 | (HIDWORD(v16) + 0x80000000)) != 0 )
    {
      v10 = 20 * v9;
      v11 = 500654080LL * v9;
      HIDWORD(v11) += v10;
      *(uint64_t *)self = v16 + v11;
      return self;
    }
    goto LABEL_37;
  }
  if ( ((unsigned int)v16 | (HIDWORD(v16) + 0x80000000)) == 0 )
  {
    if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
       + 365 * (uint16_t)(tm_year + 6700 - v8)
       + v17
       + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
       - (uint16_t)(tm_year + 6700 - v8) / 0x64u
       + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32043 )
      goto LABEL_37;
LABEL_35:
    v16 = 0x7FFFFFFFFFFFFFFELL;
    goto LABEL_30;
  }
  if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32045 )
  {
    if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
       + 365 * (uint16_t)(tm_year + 6700 - v8)
       + v17
       + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
       - (uint16_t)(tm_year + 6700 - v8) / 0x64u
       + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32044 )
    {
      if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v8)
         + v17
         + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v8) / 0x64u
         + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32043 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_37:
    if ( ((unsigned int)v16 | (HIDWORD(v16) + 0x80000000)) == 0 )
    {
      if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v8)
         + v17
         + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v8) / 0x64u
         + (uint16_t)(tm_year + 6700 - v8) / 0x190u != 32044 )
        goto LABEL_30;
      goto LABEL_35;
    }
  }
  if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u == 32044 )
  {
    v16 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_30;
  }
  if ( ((uint16_t)(tm_year + 6700 - v8) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v8)
     + v17
     + (153 * (uint16_t)(tm_mon + 12 * v8 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v8) / 0x64u
     + (uint16_t)(tm_year + 6700 - v8) / 0x190u == 32045 )
  {
    v16 = 0x8000000000000000LL;
    goto LABEL_30;
  }
LABEL_29:
  v16 += v9;
LABEL_30:
  *(uint64_t *)self = v16;
  return self;
}


// ============================================================================
// Address:   0x1339f60 (size: 598 bytes)
// Symbol:    _ZN5boost4asio6detail16resolver_serviceINS0_2ip3tcpEE13async_resolveINS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv39DNSClientERKNS_6system10error_codeEEENS7_5list2INS7_5valueIPSC_EEPFNS_3argILi1EEEvEEEEEEEvRNS_10shared_ptrIvEERKNS3_20basic_resolver_queryIS4_EERT_
// Demangled: void boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient*>,boost::arg<1> (*)(void)>>>(boost::shared_ptr<void> &,boost::asio::ip::basic_resolver_query<boost::asio::ip::tcp> const&,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient*>,boost::arg<1> (*)(void)>> &)
// ============================================================================
template <>
void boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient::Self*>,boost::arg<1> (*)(void)>>>::do_complete(
        int a1,
        unsigned int a2);

template <>
pthread_mutex_t *boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient::Self*>,boost::arg<1> (*)(void)>>>(
        int *a1,
        int *a2,
        uint32_t *a3,
        uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  int *v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;

  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  v5 = a4;
  if ( v4 != 0 )
  {
    v6 = *(int **)(v4 + 4);
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( *v6 != 0 )
      {
        *v6 = 0;
        if ( *(uint8_t *)v7 > 0x57u )
        {
          *(uint8_t *)(v7 + 88) = *(uint8_t *)v7;
          v8 = *a2;
          v9 = (volatile int32_t *)a2[1];
          if ( v9 != nullptr )
            goto LABEL_6;
LABEL_11:
          v14 = *a1;
          *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)&boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient::Self*>,boost::arg<1> (*)(void)>>>::do_complete;
          *(uint32_t *)v7 = 0;
          *(uint32_t *)(v7 + 8) = 0;
          *(uint32_t *)(v7 + 12) = v8;
          *(uint32_t *)(v7 + 16) = 0;
          *(uint32_t *)(v7 + 20) = *a3;
          *(uint32_t *)(v7 + 24) = a3[1];
          *(uint32_t *)(v7 + 28) = a3[2];
          *(uint32_t *)(v7 + 32) = a3[3];
          *(uint32_t *)(v7 + 36) = a3[4];
          *(uint32_t *)(v7 + 40) = a3[5];
          *(uint32_t *)(v7 + 44) = a3[6];
          *(uint32_t *)(v7 + 48) = a3[7];
          v19 = v5;
          g4_std_compat::string_construct_copy(v7 + 52, a3 + 8);
          g4_std_compat::string_construct_copy(v7 + 56, a3 + 9);
          *(uint32_t *)(v7 + 60) = v14;
          *(uint32_t *)(v7 + 64) = *v19;
          *(uint32_t *)(v7 + 68) = v19[1];
          *(uint32_t *)(v7 + 72) = v19[2];
          *(uint32_t *)(v7 + 76) = 0;
          *(uint32_t *)(v7 + 80) = (uint32_t)(uintptr_t)(sub_18F81E0(v15, v19));
          *(uint32_t *)(v7 + 84) = 0;
          return (pthread_mutex_t *)(uintptr_t)boost::asio::detail::resolver_service_base::start_resolve_op((int)(uintptr_t)(a1), (uint32_t *)v7);
        }
        operator delete((void *)v7);
        v5 = a4;
      }
    }
  }
  v18 = v5;
  v13 = (int)(uintptr_t)(operator new(0x59u));
  *(uint8_t *)(v13 + 88) = 88;
  v7 = v13;
  v8 = *a2;
  v9 = (volatile int32_t *)a2[1];
  v5 = v18;
  if ( v9 == nullptr )
    goto LABEL_11;
LABEL_6:
  __sync_add_and_fetch(v9 + 2, 1);
  v10 = *a1;
  *(uint32_t *)v7 = 0;
  v16 = v10;
  *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)&boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient::Self*>,boost::arg<1> (*)(void)>>>::do_complete;
  *(uint32_t *)(v7 + 8) = 0;
  *(uint32_t *)(v7 + 12) = v8;
  *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(v9);
  __sync_add_and_fetch(v9 + 2, 1);
  *(uint32_t *)(v7 + 20) = *a3;
  *(uint32_t *)(v7 + 24) = a3[1];
  *(uint32_t *)(v7 + 28) = a3[2];
  *(uint32_t *)(v7 + 32) = a3[3];
  *(uint32_t *)(v7 + 36) = a3[4];
  *(uint32_t *)(v7 + 40) = a3[5];
  *(uint32_t *)(v7 + 44) = a3[6];
  *(uint32_t *)(v7 + 48) = a3[7];
  v17 = v5;
  g4_std_compat::string_construct_copy(v7 + 52, a3 + 8);
  g4_std_compat::string_construct_copy(v7 + 56, a3 + 9);
  *(uint32_t *)(v7 + 60) = v16;
  *(uint32_t *)(v7 + 64) = *v17;
  *(uint32_t *)(v7 + 68) = v17[1];
  *(uint32_t *)(v7 + 72) = v17[2];
  *(uint32_t *)(v7 + 76) = 0;
  *(uint32_t *)(v7 + 80) = (uint32_t)(uintptr_t)(sub_18F81E0(v11, v17));
  *(uint32_t *)(v7 + 84) = 0;
  if ( __sync_fetch_and_add(v9 + 2, 0xFFFFFFFF) == 1 )
    (*(void (**)(volatile int32_t *))(*v9 + 12))(v9);
  return (pthread_mutex_t *)(uintptr_t)boost::asio::detail::resolver_service_base::start_resolve_op((int)(uintptr_t)(a1), (uint32_t *)v7);
}


// ============================================================================
// Address:   0x133a370 (size: 2342 bytes)
// Symbol:    _ZN5boost4asio6detail10resolve_opINS0_2ip3tcpENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv39DNSClientERKNS_6system10error_codeEEENS5_5list2INS5_5valueIPSA_EEPFNS_3argILi1EEEvEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESE_j
// Demangled: boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient*>,boost::arg<1> (*)(void)>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
void boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::DNSClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::DNSClient::Self*>,boost::arg<1> (*)(void)>>>::do_complete(
        int a1,
        unsigned int a2)
{
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  char *v16;
  pthread_mutex_t *v17;
  pthread_mutex_t **v18;
  pthread_mutex_t *v19;
  unsigned int *kind;
  int v21;
  int v22;
  volatile int32_t *v23;
  int v24;
  volatile int32_t *v25;
  bool v26;
  volatile int32_t *v27;
  struct addrinfo *v28;
  int v29;
  int v30;
  volatile int32_t *v31;
  int v32;
  unsigned int *v33;
  void (*events)(int, uint32_t *);
  volatile int32_t *v35;
  unsigned int *owner;
  pthread_mutex_t *v37;
  unsigned int nusers;
  pthread_cond_t *v39;
  unsigned int count;
  typedef char *_g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef volatile int32_t *_g4_t_v43;
  typedef char *_g4_t_service;
  typedef char *_g4_t_servicea;
  typedef void *_g4_t_v46;
  typedef void *_g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char *_g4_t_name;
  typedef char *_g4_t_v53;
  typedef uint32_t _g4_t_v54[4];
  typedef uint32_t _g4_t_v55[4];
  typedef int _g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef g4_x86_epoll_event _g4_t_event;
  typedef uint32_t _g4_t_v60[2];
  typedef int _g4_t_v61;
  typedef volatile int32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int *_g4_t_v64;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v42)) > _g4_s1 ? (16u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v43)) > _g4_s2 ? (16u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_service)) > _g4_s3 ? (20u + sizeof(_g4_t_service)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_servicea)) > _g4_s4 ? (20u + sizeof(_g4_t_servicea)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v47)) > _g4_s6 ? (24u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v48)) > _g4_s7 ? (40u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (41u + sizeof(_g4_t_v49)) > _g4_s8 ? (41u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (42u + sizeof(_g4_t_v50)) > _g4_s9 ? (42u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (43u + sizeof(_g4_t_v51)) > _g4_s10 ? (43u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_name)) > _g4_s11 ? (44u + sizeof(_g4_t_name)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v53)) > _g4_s12 ? (60u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v54)) > _g4_s13 ? (76u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v55)) > _g4_s14 ? (92u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v56)) > _g4_s15 ? (108u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v57)) > _g4_s16 ? (112u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v58)) > _g4_s17 ? (116u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_event)) > _g4_s18 ? (124u + sizeof(_g4_t_event)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v60)) > _g4_s19 ? (136u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v61)) > _g4_s20 ? (144u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v62)) > _g4_s21 ? (148u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v63)) > _g4_s22 ? (152u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (164u + sizeof(_g4_t_v64)) > _g4_s23 ? (164u + sizeof(_g4_t_v64)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_service &service = *reinterpret_cast<_g4_t_service *>(_g4_sf + 20u);
  _g4_t_servicea &servicea = *reinterpret_cast<_g4_t_servicea *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 41u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 42u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 43u);
  _g4_t_name &name = *reinterpret_cast<_g4_t_name *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 108u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 116u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 136u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 144u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 148u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 152u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 164u);

  v64 = &a1;
  v2 = a1;
  v3 = a2;
  if ( a1 == 0 || *(uint32_t *)(a2 + 60) == a1 )
  {
    v21 = *(uint32_t *)(a2 + 84);
    event = *(g4_x86_epoll_event *)(a2 + 64);
    v22 = *(uint32_t *)(a2 + 80);
    v60[0] = *(uint32_t *)(a2 + 76);
    v60[1] = v22;
    v61 = 0;
    v62 = nullptr;
    v63 = 0;
    if ( v21 != 0 )
    {
      g4_std_compat::string_construct_copy(v55, a2 + 56);
      g4_std_compat::string_construct_copy(v54, v3 + 52);
      g4_asio_resolver_iterator_tcp_create(
        (uint32_t *)&v56,
        *(uint32_t *)(v3 + 84),
        (int)(uintptr_t)(uintptr_t)(v54),
        (int)(uintptr_t)(v55));
      v23 = v57;
      v24 = v56;
      if ( v57 != nullptr )
        __sync_add_and_fetch(v57 + 1, 1);
      v61 = v24;
      v25 = v62;
      v26 = v62 == nullptr;
      v62 = v23;
      if ( !v26 && __sync_fetch_and_add(v25 + 1, 0xFFFFFFFF) == 1 )
      {
        v43 = v25;
        (*(void (**)(volatile int32_t *))(*v25 + 8))(v25);
        if ( __sync_fetch_and_add(v43 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v43 + 12))(v43);
      }
      v63 = v58;
      v27 = v57;
      if ( v57 != nullptr && __sync_fetch_and_add(v57 + 1, 0xFFFFFFFF) == 1 )
      {
        v42 = v27;
        (*(void (**)(volatile int32_t *))(*v27 + 8))(v27);
        if ( __sync_fetch_and_add(v42 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v42 + 12))(v42);
      }
      v46 = (void *)(v54[0] - 12);
      if ( (uint32_t *)(v54[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v54[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v41 = &v48;
        g4_std::string::Rep::M_destroy(v46);
      }
      v47 = (void *)(v55[0] - 12);
      if ( (uint32_t *)(v55[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v55[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v41 = &v49;
        g4_std::string::Rep::M_destroy(v47);
      }
    }
    v28 = *(struct addrinfo **)(v3 + 84);
    if ( v28 != nullptr )
      freeaddrinfo(v28);
    v29 = *(uint32_t *)(v3 + 56);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      v41 = &v50;
      g4_std::string::Rep::M_destroy((void *)(v29 - 12));
    }
    v30 = *(uint32_t *)(v3 + 52);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      v41 = &v51;
      g4_std::string::Rep::M_destroy((void *)(v30 - 12));
    }
    v31 = *(volatile int32_t **)(v3 + 16);
    if ( v31 != nullptr && __sync_fetch_and_add(v31 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *, char *))(*v31 + 12))(v31, v41);
    v32 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
    if ( v32 != 0 && (v33 = *(unsigned int **)(v32 + 4)) != nullptr && *v33 == 0 )
    {
      *(uint8_t *)v3 = *(uint8_t *)(v3 + 88);
      *v33 = v3;
    }
    else
    {
      operator delete((void *)v3);
    }
    if ( v2 != 0 )
    {
      events = (void (*)(int, uint32_t *))event.events;
      if ( (uintptr_t)(event.events) < 0x10000u && ((uintptr_t)(event.events) & 1) != 0 )
        events = *(void (**)(int, uint32_t *))(*(uint32_t *)(event.data.fd + HIDWORD(event.data.u64))
                                                   + event.events
                                                   - 1);
      events(event.data.fd + HIDWORD(event.data.u64), v60);
      _mm_sfence();
    }
    v35 = v62;
    if ( v62 != nullptr && __sync_fetch_and_add(v62 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v35 + 8))(v35);
      if ( __sync_fetch_and_add(v35 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v35 + 12))(v35);
    }
  }
  else
  {
    g4_std_compat::string_construct_copy(&v53, a2 + 56);
    service = v53;
    g4_std_compat::string_construct_copy(&name, v3 + 52);
    v5 = *(uint32_t *)(v3 + 16);
    v6 = name;
    v7 = service;
    if ( v5 != 0 && *(uint32_t *)(v5 + 4) != 0 )
    {
      if ( name != nullptr && *name == 0 )
        v6 = nullptr;
      if ( service != nullptr && *service == 0 )
        v7 = nullptr;
      servicea = v7;
      *(uint32_t *)__errno(v4, v7) = 0;
      v8 = getaddrinfo(v6, servicea, (const struct addrinfo *)(v3 + 20), (struct addrinfo **)(v3 + 84));
      switch ( v8 )
      {
        case 0:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 0;
          break;
        case 1:
        case 7:
        case 8:
          if ( byte_20D3F58 != 0 || _cxa_guard_acquire((__guard *)&byte_20D3F58) == 0 )
          {
            v11 = (int *)(&dword_20D3F60);
            v14 = 1;
          }
          else
          {
            dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
            _cxa_guard_release((__guard *)&byte_20D3F58);
            __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
            v11 = (int *)(&dword_20D3F60);
            v14 = 1;
          }
          break;
        case 2:
          if ( byte_20D3F58 != 0 || _cxa_guard_acquire((__guard *)&byte_20D3F58) == 0 )
          {
            v11 = (int *)(&dword_20D3F60);
            v14 = 2;
          }
          else
          {
            dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
            _cxa_guard_release((__guard *)&byte_20D3F58);
            __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
            v11 = (int *)(&dword_20D3F60);
            v14 = 2;
          }
          break;
        case 3:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 22;
          break;
        case 4:
          if ( byte_20D3F58 != 0 || _cxa_guard_acquire((__guard *)&byte_20D3F58) == 0 )
          {
            v11 = (int *)(&dword_20D3F60);
            v14 = 3;
          }
          else
          {
            dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
            _cxa_guard_release((__guard *)&byte_20D3F58);
            __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
            v11 = (int *)(&dword_20D3F60);
            v14 = 3;
          }
          break;
        case 5:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 97;
          break;
        case 6:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 12;
          break;
        case 9:
          if ( byte_20D3F70 != 0 || _cxa_guard_acquire((__guard *)&byte_20D3F70) == 0 )
          {
            v11 = (int *)(&dword_20D3F78);
            v14 = 9;
          }
          else
          {
            dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
            _cxa_guard_release((__guard *)&byte_20D3F70);
            __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
            v11 = (int *)(&dword_20D3F78);
            v14 = 9;
          }
          break;
        case 10:
          if ( byte_20D3F70 != 0 || _cxa_guard_acquire((__guard *)&byte_20D3F70) == 0 )
          {
            v11 = (int *)(&dword_20D3F78);
            v14 = 10;
          }
          else
          {
            dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
            _cxa_guard_release((__guard *)&byte_20D3F70);
            __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
            v11 = (int *)(&dword_20D3F78);
            v14 = 10;
          }
          break;
        default:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = *(uint32_t *)__errno(v13, v12);
          break;
      }
      *(uint32_t *)(v3 + 76) = v14;
      *(uint32_t *)(v3 + 80) = (uint32_t)(uintptr_t)(v11);
    }
    else
    {
      *(uint32_t *)(v3 + 80) = (uint32_t)(uintptr_t)(sub_18F81E0(v4, service));
      *(uint32_t *)(v3 + 76) = 125;
    }
    v15 = name - 12;
    if ( name - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)name - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = v53 - 12;
    if ( v53 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v53 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v16);
    v17 = *(pthread_mutex_t **)(v3 + 60);
    if ( ((uint8_t *)(v17))[20] == 0 )
      goto LABEL_53;
    v18 = *(pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
    if ( v18 == nullptr )
      goto LABEL_53;
    while ( v17 != *v18 )
    {
      v18 = (pthread_mutex_t **)v18[2];
      if ( v18 == nullptr )
        goto LABEL_53;
    }
    v19 = v18[1];
    if ( v19 != nullptr )
    {
      *(uint32_t *)v3 = 0;
      kind = (unsigned int *)((int32_t *)(v19))[3];
      if ( kind != nullptr )
      {
        *kind = v3;
        ((int32_t *)(v19))[3] = v3;
      }
      else
      {
        ((int32_t *)(v19))[3] = v3;
        ((int32_t *)(v19))[2] = v3;
      }
    }
    else
    {
LABEL_53:
      pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (1))));
      *(uint32_t *)v3 = 0;
      owner = (unsigned int *)(uintptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (2))));
      v37 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (1)));
      if ( owner != nullptr )
      {
        *owner = v3;
        G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (2)))) = v3;
      }
      else
      {
        G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (2)))) = v3;
        G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (2)))) = v3;
      }
      nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (2))));
      if ( nusers != 0 )
      {
        G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (2)))) = *(uint32_t *)(nusers + 20);
        v39 = *(pthread_cond_t **)(nusers + 4);
        *(uint32_t *)(nusers + 20) = 0;
        ((uint8_t *)(v39))[4] = 1;
        pthread_mutex_unlock(v37);
        pthread_cond_signal(v39);
      }
      else
      {
        if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (1))))[20] == 0 )
        {
          count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (1))));
          if ( count != 0 )
          {
            G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (1))))[20] = 1;
            event.data.u64 = count + 28;
            event.events = 0x80000009;
            g4_epoll_ctl_x86(*(uint32_t *)(count + 36), 3, *(uint32_t *)(count + 28), &event);
            v37 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v17) + (24 * (1)));
          }
        }
        pthread_mutex_unlock(v37);
      }
    }
  }
}


// ============================================================================
// Address:   0x1346e00 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_1_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093BC8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x1346e60 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_2_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x1346e90 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_3_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x1346ea0 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_4_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093BC8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x13471e0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_5_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x13476c0 (size: 1368 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv312EventOfErrorENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfError *,boost::detail::sp_ms_deleter<glotv3::EventOfError>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_6_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int owner;
  int i;
  int *v10;
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
  unsigned int nusers;
  int v23;
  unsigned int v24;
  int result;
  int v26;
  int v27;
  int v28;
  unsigned int *count;
  int v30;
  unsigned int v31;
  boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *v32;
  int v33;
  boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *v34;
  boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *v35;
  int v36;
  boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  typedef unsigned int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t _g4_t_v53[5];
  typedef uint32_t _g4_t_v54[5];
  typedef uint32_t _g4_t_v55[5];
  typedef uint32_t _g4_t_v56[5];
  typedef uint32_t _g4_t_v57[5];
  typedef uint32_t _g4_t_v58[12];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v45)) > _g4_s1 ? (26u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v46)) > _g4_s2 ? (28u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v47)) > _g4_s3 ? (32u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v48)) > _g4_s4 ? (36u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v49)) > _g4_s5 ? (40u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v50)) > _g4_s6 ? (44u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v51)) > _g4_s7 ? (48u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v52)) > _g4_s8 ? (52u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v53)) > _g4_s9 ? (56u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v54)) > _g4_s10 ? (76u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v55)) > _g4_s11 ? (96u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v56)) > _g4_s12 ? (116u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v57)) > _g4_s13 ? (136u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (156u + sizeof(_g4_t_v58)) > _g4_s14 ? (156u + sizeof(_g4_t_v58)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 26u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 116u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 136u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 156u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v3 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v3 != 0 )
      {
        v42 = (int)(uintptr_t)(sub_18F81E0(v2, v1));
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v47), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v45));
        sub_19042E0(v53, &v47);
        g4_std::string::Destroy(&v47);
        v53[2] = v3;
        v53[3] = v42;
        v53[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v53[0] = ((uint32_t)(uintptr_t)&off_2049568);
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
    v4 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v4 == 4 );
  v7 = v4;
  if ( v4 != 0 )
  {
    v41 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v48), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v45) + 1);
    sub_19042E0(v54, &v48);
    g4_std::string::Destroy(&v48);
    v54[2] = v7;
    v54[3] = v41;
    v54[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v54[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        owner != 0;
        owner = *(v10 - 1) )
  {
    v10 = (int *)(owner + i - 4);
    i = *v10;
  }
  do
    v11 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v11 == 4 );
  v14 = v11;
  if ( v11 != 0 )
  {
    v40 = (int)(uintptr_t)(sub_18F81E0(v13, v12));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v49), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v46));
    sub_19042E0(v55, &v49);
    g4_std::string::Destroy(&v49);
    v55[2] = v14;
    v55[3] = v40;
    v55[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v55[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v17 = pthread_mutex_init(
              &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
              nullptr);
      if ( v17 != 0 )
      {
        v39 = (int)(uintptr_t)(sub_18F81E0(v16, v15));
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v50), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v46) + 1);
        sub_19042E0(v56, &v50);
        g4_std::string::Destroy(&v50);
        v56[2] = v17;
        v56[3] = v39;
        v56[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v56[0] = ((uint32_t)(uintptr_t)&off_2049568);
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
    v18 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v18 == 4 );
  v21 = v18;
  if ( v18 != 0 )
  {
    v38 = (int)(uintptr_t)(sub_18F81E0(v20, v19));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v51), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v46) + 2);
    sub_19042E0(v57, &v51);
    g4_std::string::Destroy(&v51);
    v57[2] = v21;
    v57[3] = v38;
    v57[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v57[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
            & 3);
    v23 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v23 = nusers;
    }
    if ( v23 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v24 = (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
       % nusers != 0)
      + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
      / nusers;
  if ( v24 != 0 )
  {
    count = (unsigned int *)boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    v30 = nusers * v24;
    if ( count != nullptr
      && self >= (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)count )
    {
      while ( 1 )
      {
        v31 = *count;
        if ( *count == 0 || (unsigned int)(uintptr_t)(self) < v31 )
          break;
        count = (unsigned int *)*count;
      }
      v44 = count;
      v32 = (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)self + nusers * ((v30 - nusers) / nusers));
      *(uint32_t *)v32 = v31;
      if ( self != v32 )
      {
        v33 = -nusers;
        v34 = (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v32 + v33);
        if ( self == (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v32 + v33) )
        {
          v34 = v32;
        }
        else
        {
          while ( 1 )
          {
            *(uint32_t *)v34 = (uint32_t)(uintptr_t)(v32);
            if ( self == (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v34 + v33) )
              break;
            v32 = v34;
            v34 = (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v34 + v33);
          }
        }
        *(uint32_t *)self = (uint32_t)(uintptr_t)(v34);
      }
      *v44 = (unsigned int)(uintptr_t)(self);
    }
    else
    {
      v35 = (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)self + nusers * ((v30 - nusers) / nusers));
      *(uint32_t *)v35 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
      if ( self != v35 )
      {
        v36 = -nusers;
        v37 = (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v35 + v36);
        if ( self == (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v35 + v36) )
        {
          v37 = v35;
        }
        else
        {
          while ( 1 )
          {
            *(uint32_t *)v37 = (uint32_t)(uintptr_t)(v35);
            if ( self == (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v37 + v36) )
              break;
            v35 = v37;
            v37 = (boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)((char *)v37 + v36);
          }
        }
        *(uint32_t *)self = (uint32_t)(uintptr_t)(v37);
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = (unsigned int)(uintptr_t)(self);
    }
  }
  do
    result = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( result == 4 );
  v28 = result;
  if ( result != 0 )
  {
    v43 = (int)(uintptr_t)(sub_18F81E0(v27, v26));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v52), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v46) + 3);
    sub_19042E0(v58, &v52);
    g4_std::string::Destroy(&v52);
    v58[2] = v28;
    v58[3] = v43;
    v58[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v58[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return result;
}


// ============================================================================
// Address:   0x134c000 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered *,boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_7_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093D88);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x134c060 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired *,boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_8_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093D48);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x134c0c0 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice *,boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_9_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093C68);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x134c120 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered *,boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_10_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x134c150 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered *,boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_11_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x134c160 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired *,boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_12_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x134c190 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired *,boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_13_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x134c1a0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_14_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventList::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x134c1d0 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_15_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x134c1e0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_16_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x134c210 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_17_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x134c220 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice *,boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_18_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x134c250 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice *,boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_19_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x134c260 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice *,boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_20_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093C68);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x134c2d0 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired *,boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_21_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093D48);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x134c340 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered *,boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_22_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093D88);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x134c3b0 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEED1Ev'
static void g4_sp_counted_pda_23_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093CA8);
  if ( !v1 )
  {
    glotv3::AsyncHTTPClient::Destroy((boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x134c410 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEED1Ev'
static void g4_sp_counted_pda_24_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093CE8);
  if ( !v1 )
  {
    glotv3::EventList::Destroy((boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x134ca50 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered *,boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_25_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x134ca80 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired *,boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_26_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x134cab0 (size: 61 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::dispose(void)
// ============================================================================
static void g4_sp_counted_pda_27_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  if ( *((uint8_t *)self + 16) != 0 )
  {
    glotv3::EventList::Destroy((boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0x134caf0 (size: 61 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::dispose(void)
// ============================================================================
static void g4_sp_counted_pda_28_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  if ( *((uint8_t *)self + 16) != 0 )
  {
    glotv3::AsyncHTTPClient::Destroy((boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0x134cb30 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice *,boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_29_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x134cc00 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_30_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093CE8);
  if ( !v1 )
  {
    glotv3::EventList::Destroy((boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x134cc70 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_31_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093CA8);
  if ( !v1 )
  {
    glotv3::AsyncHTTPClient::Destroy((boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *)((char *)self + 20));
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x134d080 (size: 70 bytes)
// Symbol:    _ZN5boost15condition_errorD2Ev
// Demangled: boost::condition_error::Destroy()
// ============================================================================
// Alternative name is '_ZN5boost15condition_errorD1Ev'
void boost::condition_error::Destroy(boost::condition_error::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  g4_std::string::Destroy((char *)self + 16);
  sub_1903D80(self);
}


// ============================================================================
// Address:   0x134d0d0 (size: 78 bytes)
// Symbol:    _ZN5boost15condition_errorD0Ev
// Demangled: boost::condition_error::Destroy()
// ============================================================================
void boost::condition_error::DestroyDeleting(boost::condition_error::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  g4_std::string::Destroy((char *)self + 16);
  sub_1903D80(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x134d7b0 (size: 170 bytes)
// Symbol:    _ZN5boost4asio6detail12wait_handlerINS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessorEEENS3_5list1INS3_5valueIPS8_EEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationERKNS_6system10error_codeEj
// Demangled: boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor*>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
int boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor::Self*>>>>::do_complete(
        int a1,
        uint32_t *a2)
{
  int (*v2)(uint32_t);
  int v3;
  int v4;
  uint32_t *v5;
  int result;
  uint32_t *v7;
  int v8;

  v2 = (int (*)(uint32_t))a2[5];
  v8 = a2[7];
  v3 = a2[6];
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 32);
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  result = a1;
  if ( a1 != 0 )
  {
    v7 = (uint32_t *)(v8 + v3);
    if ( (uintptr_t)(v2) < 0x10000u && ((uintptr_t)(v2) & 1) != 0 )
      v2 = *(int (**)(uint32_t))((char *)v2 + *v7 - 1);
    result = v2((uint32_t)(uintptr_t)(v7));
    _mm_sfence();
  }
  return result;
}


// ============================================================================
// Address:   0x134d860 (size: 170 bytes)
// Symbol:    _ZN5boost4asio6detail18completion_handlerINS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessorEEENS3_5list1INS3_5valueIPS8_EEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationERKNS_6system10error_codeEj
// Demangled: boost::asio::detail::completion_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor*>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
// [pre-B42] template <>
template <>
void boost::asio::detail::completion_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor::Self*>>>>::do_complete(
        int a1,
        uint32_t *a2)
{
  void (*v2)(uint32_t);
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;

  v2 = (void (*)(uint32_t))a2[3];
  v7 = a2[5];
  v3 = a2[4];
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 24);
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  if ( a1 != 0 )
  {
    v6 = (uint32_t *)(v7 + v3);
    if ( (uintptr_t)(v2) < 0x10000u && ((uintptr_t)(v2) & 1) != 0 )
      v2 = *(void (**)(uint32_t))((char *)v2 + *v6 - 1);
    v2((uint32_t)(uintptr_t)(v6));
    _mm_sfence();
  }
}


// ============================================================================
// Address:   0x134e2b0 (size: 133 bytes)
// Symbol:    _ZN5boost6system12system_errorC2ENS0_10error_codeEPKc
// Demangled: boost::system::system_error::Construct(boost::system::error_code,char const*)
// ============================================================================
// Alternative name is '_ZN5boost6system12system_errorC1ENS0_10error_codeEPKc'
uint32_t *boost::system::system_error::Construct(uint32_t *a1, int a2, int a3, char *a4)
{
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v5) + 1, a4, (int)(uintptr_t)(&v5));
  sub_19042E0(a1, (char *)&v5 + 1);
  g4_std::string::Destroy((char *)&v5 + 1);
  a1[3] = a3;
  *a1 = ((uint32_t)(uintptr_t)&off_2048428);
  a1[2] = a2;
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}


// ============================================================================
// Address:   0x134e340 (size: 144 bytes)
// Symbol:    _ZN5boost10lock_errorC2EiPKc
// Demangled: boost::lock_error::lock_error(int,char const*)
// ============================================================================
// Alternative name is '_ZN5boost10lock_errorC1EiPKc'
int (**boost::lock_error::Construct(
        int a1,
        int a2,
        boost::lock_error::Self *self,
        int a4,
        char *a5))(std::exception *)
{
  int v5;
  int v7[4];

  v5 = (int)(uintptr_t)(sub_18F81E0(a1, a2));
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v7) + 1, a5, (int)(uintptr_t)(v7));
  sub_19042E0(self, (char *)v7 + 1);
  g4_std::string::Destroy((char *)v7 + 1);
  *((uint32_t *)self + 3) = v5;
  *((uint32_t *)self + 2) = a4;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20495E0);
  return (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
}


// ============================================================================
// Address:   0x134e910 (size: 232 bytes)
// Symbol:    _ZN5boost18condition_variable10notify_oneEv
// Demangled: boost::condition_variable::notify_one(void)
// ============================================================================
int boost::condition_variable::notify_one(pthread_mutex_t *self)
{
  int result;

  if ( pthread_mutex_lock(self) != 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
      26,
      "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
      "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)(&((int32_t *)(self))[0] + 1)) == 0 )
    {
LABEL_3:
      result = pthread_mutex_unlock(self);
      if ( result == 0 )
        return result;
      return ((__assert2(
               "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
               30,
               "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
               "!pthread_mutex_unlock(m)")), (int)0);
    }
  }
  else if ( pthread_cond_signal((pthread_cond_t *)(&((int32_t *)(self))[0] + 1)) == 0 )
  {
    goto LABEL_3;
  }
  __assert2(
    "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
    134,
    "void boost::condition_variable::notify_one()",
    "!pthread_cond_signal(&cond)");
  result = pthread_mutex_unlock(self);
  if ( result != 0 )
    return ((__assert2(
             "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
             30,
             "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
             "!pthread_mutex_unlock(m)")), (int)0);
  return result;
}


// ============================================================================
// Address:   0x134ea00 (size: 352 bytes)
// Symbol:    _ZN5boost4asio6detail16service_registry14do_use_serviceERKNS0_10io_service7service3keyEPFPS4_RS3_E
// Demangled: boost::asio::detail::service_registry::do_use_service(boost::asio::io_service::service::key const&,boost::asio::io_service::service* (*)(boost::asio::io_service&))
// ============================================================================
uint32_t *boost::asio::detail::service_registry::do_use_service(int a1, uint32_t *a2, int (*a3)(uint32_t))
{
  int v3;
  uint32_t *v4;
  pthread_mutex_t *mutex;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  const char *v10;
  const char *s2;
  uint32_t *v12;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *i;
  int v18;
  int v19;
  int v20;
  const char *v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;

  v3 = a1;
  v4 = a2;
  mutex = (pthread_mutex_t *)(a1 + 4);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 4));
  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    v6 = *(uint32_t **)(a1 + 12);
    do
    {
      v7 = v6[2];
      if ( v7 != 0 && (v8 = a2[1]) != 0 && v7 == v8
        || (v9 = v6[1]) != 0
        && *a2 != 0
        && ((v10 = *(const char **)(v9 + 4), s2 = *(const char **)(*a2 + 4), v10 == s2)
         || *v10 != 42 && strcmp(v10, s2) == 0) )
      {
        v12 = v6;
        goto LABEL_12;
      }
      v6 = (uint32_t *)v6[4];
    }
    while ( v6 != nullptr );
    v4 = a2;
    v3 = a1;
  }
  pthread_mutex_unlock(mutex);
  v25 = (uint32_t *)a3(*(uint32_t *)(v3 + 8));
  v14 = v4[1];
  v25[1] = *v4;
  v25[2] = v14;
  pthread_mutex_lock(mutex);
  v15 = *(uint32_t **)(v3 + 12);
  v23 = v15;
  if ( v15 != nullptr )
  {
    v24 = v3;
    v16 = v4;
    for ( i = v15; i != nullptr; i = (uint32_t *)i[4] )
    {
      v18 = i[2];
      if ( v18 == 0 || (v19 = v16[1]) == 0 || v18 != v19 )
      {
        v20 = i[1];
        if ( v20 == 0 )
          continue;
        if ( *v16 == 0 )
          continue;
        v21 = *(const char **)(v20 + 4);
        if ( v21 != *(const char **)(*v16 + 4) && (*v21 == 42 || strcmp(v21, *(const char **)(*v16 + 4)) != 0) )
          continue;
      }
      (*(void (**)(uint32_t *))(*v25 + 4))(v25);
      v12 = i;
      goto LABEL_12;
    }
    v3 = v24;
    v15 = v23;
  }
  v25[4] = (uint32_t)(uintptr_t)(v15);
  *(uint32_t *)(v3 + 12) = (uint32_t)(uintptr_t)(v25);
  v12 = v25;
LABEL_12:
  v22 = v12;
  pthread_mutex_unlock(mutex);
  return v22;
}


// ============================================================================
// Address:   0x134f790 (size: 593 bytes)
// Symbol:    _ZNSt5dequeIN5boost10shared_ptrIN6glotv315AsyncHTTPClientEEESaIS4_EE9push_backERKS4_
// Demangled: std::deque<boost::shared_ptr<glotv3::AsyncHTTPClient>,std::allocator<boost::shared_ptr<glotv3::AsyncHTTPClient>>>::push_back(boost::shared_ptr<glotv3::AsyncHTTPClient> const&)
// ============================================================================
char *g4_std_compat::deque_glotv3_event_push_back(void **a1, uint32_t *a2)
{
  char *result;
  char *v3;
  int v4;
  char *v5;
  char *v6;
  unsigned int v7;
  char *v8;
  int v9;
  char *v10;
  unsigned int v11;
  int v12;
  void *dest;
  int v14;
  char *v15;
  char *v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  char *v23;
  char *v24;
  void *v25;
  int v26;
  int v27;
  char *v28;
  char *src;
  int v30;

  result = (char *)a1[6];
  if ( result == (char *)a1[8] - 8 )
  {
    v5 = (char *)a1[9];
    v6 = (char *)*a1;
    v7 = (unsigned int)(uintptr_t)(a1[1]);
    if ( v7 - ((v5 - (char *)((uint8_t *)*a1)) >> 2) <= 1 )
    {
      v28 = (char *)a1[5];
      v30 = ((v5 - v28) >> 2) + 1;
      v21 = ((v5 - v28) >> 2) + 2;
      if ( v7 > 2 * v21 )
      {
        v18 = v5 + 4 - v28;
        v15 = &v6[4 * ((v7 - v21) >> 1)];
        if ( v28 <= v15 )
        {
          v20 = v18 >> 2;
          if ( v20 != 0 )
          {
            v24 = &v6[4 * ((v7 - v21) >> 1)];
            memmove(&v15[4 * v30 + -4 * v20], v28, 4 * v20);
            v15 = v24;
          }
        }
        else
        {
          v19 = v18 >> 2;
          if ( v19 != 0 )
          {
            v23 = &v6[4 * ((v7 - v21) >> 1)];
            memmove(v15, v28, 4 * v19);
            v15 = v23;
          }
        }
      }
      else
      {
        v11 = 3;
        if ( v7 != 0 )
        {
          v11 = 2 * v7 + 2;
          if ( v11 > 0x3FFFFFFF )
            sub_18FFEE0(v6, 2 * v21);
        }
        v12 = (int)(uintptr_t)(operator new(4 * v11));
        dest = (void *)(v12 + 4 * ((v11 - v21) >> 1));
        src = (char *)a1[5];
        v14 = ((uint8_t *)a1[9] + 4 - (uint8_t *)(src)) >> 2;
        if ( v14 != 0 )
        {
          v25 = (void *)(v12 + 4 * ((v11 - v21) >> 1));
          v27 = v12;
          memmove(dest, src, 4 * v14);
          v12 = v27;
          dest = v25;
        }
        v22 = (char *)dest;
        v26 = v12;
        operator delete(*a1);
        a1[1] = (void *)v11;
        *a1 = (void *)v26;
        v15 = v22;
      }
      a1[5] = v15;
      v16 = *(char **)v15;
      a1[3] = *(void **)v15;
      a1[4] = v16 + 512;
      v5 = &v15[4 * v30 - 4];
      a1[9] = v5;
      v17 = *(char **)v5;
      a1[7] = *(void **)v5;
      a1[8] = v17 + 512;
    }
    *((uint32_t *)v5 + 1) = (uint32_t)(uintptr_t)(operator new(0x200u));
    v8 = (char *)a1[6];
    if ( v8 != nullptr )
    {
      *(uint32_t *)v8 = *a2;
      v9 = a2[1];
      *((uint32_t *)v8 + 1) = v9;
      if ( v9 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1);
    }
    v10 = (char *)a1[9] + 4;
    a1[9] = v10;
    result = *(char **)v10;
    a1[7] = *(void **)v10;
    a1[6] = result;
    a1[8] = result + 512;
  }
  else
  {
    v3 = nullptr;
    if ( result != nullptr )
    {
      *(uint32_t *)result = *a2;
      v4 = a2[1];
      *((uint32_t *)result + 1) = v4;
      if ( v4 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
      v3 = (char *)a1[6];
    }
    a1[6] = v3 + 8;
  }
  return result;
}


// ============================================================================
// Address:   0x134fa60 (size: 139 bytes)
// Symbol:    _ZNSt5dequeIN5boost10shared_ptrIN6glotv35EventEEESaIS4_EE8pop_backEv
// Demangled: std::deque<boost::shared_ptr<glotv3::Event>,std::allocator<boost::shared_ptr<glotv3::Event>>>::pop_back(void)
// ============================================================================
void g4_std_compat::deque_glotv3_event_pop_back(void *self)
{
  int v1;
  int *v2;
  int v3;

  v1 = *((uint32_t *)self + 6);
  if ( v1 == *((uint32_t *)self + 7) )
  {
    operator delete(*((void **)self + 6));
    v2 = (int *)(*((uint32_t *)self + 9) - 4);
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v2);
    v3 = *v2;
    *((uint32_t *)self + 7) = *v2;
    *((uint32_t *)self + 8) = v3 + 512;
    *((uint32_t *)self + 6) = v3 + 504;
    boost::detail::shared_count::Destroy((volatile int32_t **)(v3 + 508));
  }
  else
  {
    *((uint32_t *)self + 6) = v1 - 8;
    boost::detail::shared_count::Destroy((volatile int32_t **)(v1 - 4));
  }
}


// ============================================================================
// Address:   0x1351540 (size: 664 bytes)
// Symbol:    _ZN5boost4asio20basic_deadline_timerINS_10posix_time5ptimeENS0_11time_traitsIS3_EENS0_22deadline_timer_serviceIS3_S5_EEE10async_waitINS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessorEEENSA_5list1INSA_5valueIPSF_EEEEEEEENS0_12async_resultINS0_12handler_typeIT_FvNS_6system10error_codeEEE4typeEE4typeERKSP_
// Demangled: boost::asio::async_result<boost::asio::handler_type<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor*>>>,void ()(boost::system::error_code)>::type>::type boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor*>>>>(boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor*>>> const&)
// ============================================================================
template <> template <>
int boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor::Self*>>>>(
        int *a1,
        pthread_mutex_t **a2)
{
  pthread_mutex_t *v2;
  int v3;
  int v4;
  int v5;
  uint32_t **v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  bool v12;
  int v14;
  uint32_t v15;
  g4_x86_epoll_event *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  typedef pthread_mutex_t *_g4_t_v23;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef int _g4_t_v25;
  typedef pthread_mutex_t *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef g4_x86_epoll_event _g4_t_event;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_mutex)) > _g4_s1 ? (4u + sizeof(_g4_t_mutex)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v27)) > _g4_s4 ? (12u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_event)) > _g4_s5 ? (20u + sizeof(_g4_t_event)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 20u);

  v2 = a2[1];
  v26 = a2[2];
  v25 = *a1;
  v23 = *a2;
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
          goto LABEL_8;
        }
        operator delete(v7);
      }
    }
  }
  v8 = (int)(uintptr_t)(operator new(0x21u));
  *(uint8_t *)(v8 + 32) = 32;
  v7 = (uint32_t *)v8;
LABEL_8:
  *v7 = 0;
  v7[1] = (uint32_t)(uintptr_t)((int (*)(int, uint32_t *))boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor::Self*>>>>::do_complete);
  v7[2] = 0;
  v7[3] = 0;
  v9 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
  v7[5] = (uint32_t)(uintptr_t)(v23);
  v7[7] = (uint32_t)(uintptr_t)(v26);
  v7[4] = v9;
  v7[6] = (uint32_t)(uintptr_t)(v2);
  *((uint8_t *)a1 + 12) = 1;
  v10 = *(uint32_t *)(v25 + 52);
  mutex = (pthread_mutex_t *)(v10 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v10 + 24));
  if ( *(uint8_t *)(v10 + 48) != 0 )
  {
    boost::asio::detail::task_io_service::post_immediate_completion(*(pthread_mutex_t **)(v10 + 20), v7, 0);
    return pthread_mutex_unlock(mutex);
  }
  else
  {
    if ( a1[8] == 0 )
    {
      v27 = a1 + 4;
      if ( a1 + 4 != *(int **)(v25 + 36) )
      {
        v14 = (*(uint32_t *)(v25 + 44) - *(uint32_t *)(v25 + 40)) >> 2;
        event.data.fd = a1[2];
        a1[6] = -1431655765 * v14;
        v15 = a1[1];
        HIDWORD(event.data.u64) = (uint32_t)(uintptr_t)(a1 + 4);
        event.events = v15;
        v16 = *(g4_x86_epoll_event **)(v25 + 44);
        if ( v16 == *(g4_x86_epoll_event **)(v25 + 48) )
        {
          g4_std_compat::vector_insert_aux(
            v25 + 40,
            *(char **)(v25 + 44),
            (int *)&event);
          v19 = v25;
          v18 = *(uint32_t *)(v25 + 44);
        }
        else
        {
          v17 = 0;
          if ( v16 != nullptr )
          {
            *v16 = event;
            v17 = *(uint32_t *)(v25 + 44);
          }
          v18 = v17 + 12;
          v19 = v25;
          *(uint32_t *)(v25 + 44) = v18;
        }
        boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::up_heap(
          (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *)(v19 + 28),
          -1431655765 * ((v18 - *(uint32_t *)(v19 + 40)) >> 2) - 1);
        v20 = v25;
        v21 = *(uint32_t *)(v25 + 36);
        a1[8] = 0;
        a1[7] = v21;
        v22 = *(uint32_t *)(v25 + 36);
        if ( v22 != 0 )
        {
          v20 = v25;
          *(uint32_t *)(v22 + 16) = (uint32_t)(uintptr_t)(v27);
        }
        *(uint32_t *)(v20 + 36) = (uint32_t)(uintptr_t)(v27);
      }
    }
    *v7 = 0;
    v11 = (uint32_t *)a1[5];
    if ( v11 != nullptr )
    {
      *v11 = (uint32_t)(uintptr_t)(v7);
      a1[5] = (int)(uintptr_t)(v7);
    }
    else
    {
      a1[5] = (int)(uintptr_t)(v7);
      a1[4] = (int)(uintptr_t)(v7);
    }
    v12 = false;
    if ( a1[6] == 0 )
      v12 = a1[4] == (uint32_t)(uintptr_t)(v7);
    __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)(v10 + 20) + 48), 1u);
    if ( v12 )
    {
      event.events = 0x80000009;
      event.data.u64 = (unsigned int)(v10 + 28);
      g4_epoll_ctl_x86(*(uint32_t *)(v10 + 36), 3, *(uint32_t *)(v10 + 28), &event);
    }
    return pthread_mutex_unlock(mutex);
  }
}


// ============================================================================
// Address:   0x13524f0 (size: 550 bytes)
// Symbol:    _ZN5boost4asio6detail22deadline_timer_serviceINS0_11time_traitsINS_10posix_time5ptimeEEEE6cancelERNS7_19implementation_typeERNS_6system10error_codeE
// Demangled: boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::implementation_type &,boost::system::error_code &)
// ============================================================================
template <>
int boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
        int a1,
        int a2,
        uint32_t *a3,
        int a4,
        uint32_t *a5)
{
  int v5;
  pthread_mutex_t *v6;
  int v7;
  pthread_mutex_t *v8;
  int *v9;
  bool v10;
  int v12;
  pthread_mutex_t *kind;
  pthread_mutex_t *spins;
  pthread_mutex_t **v15;
  pthread_mutex_t *v16;
  pthread_mutex_t **owner;
  typedef pthread_mutex_t **_g4_t_v18;
  typedef pthread_mutex_t *_g4_t_v19;
  typedef pthread_mutex_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef pthread_mutex_t *_g4_t_v22;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef pthread_mutex_t *_g4_t_v26;
  typedef char _g4_t_v27;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_mutex)) > _g4_s5 ? (20u + sizeof(_g4_t_mutex)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v26)) > _g4_s8 ? (40u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  if ( *(uint8_t *)(a4 + 8) != 0 )
  {
    v25 = (uint32_t *)(a4 + 12);
    v24 = (pthread_mutex_t *)a3[8];
    mutex = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v24) + (24 * (1)));
    pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v24) + (24 * (1))));
    if ( *(uint32_t *)(a4 + 28) != 0 || (v5 = a4 + 12, v25 == (uint32_t *)a3[4]) )
    {
      v22 = nullptr;
      v6 = nullptr;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(pthread_mutex_t **)(a4 + 12);
        if ( v8 == nullptr )
          break;
        v18 = (pthread_mutex_t **)v6;
        ((int32_t *)(v8))[4] = (int32_t)(uintptr_t)(sub_18F81E0(v5, v6));
        ((int32_t *)(v8))[3] = 125;
        v9 = *(int **)(a4 + 12);
        if ( v9 != nullptr )
        {
          v5 = *v9;
          v10 = *v9 == 0;
          *(uint32_t *)(a4 + 12) = *v9;
          if ( v10 )
            *(uint32_t *)(a4 + 16) = 0;
          *v9 = 0;
        }
        ((int32_t *)(v8))[0] = 0;
        if ( v18 != nullptr )
          *v18 = v8;
        else
          v22 = v8;
        ++v7;
        v6 = v8;
        if ( v7 == -1 )
        {
          if ( *(uint32_t *)(a4 + 12) != 0 )
            goto LABEL_19;
          break;
        }
      }
      v19 = v6;
      boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::remove_timer(
        (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits> *)(a3 + 2),
        v25);
      v6 = v19;
LABEL_19:
      v20 = v6;
      pthread_mutex_unlock(mutex);
      kind = v24;
      v12 = (int)(uintptr_t)(v20);
      spins = (pthread_mutex_t *)(uintptr_t)(G4_MUTEX_SPINS((pthread_mutex_t *)v24));
      if ( v22 != nullptr )
      {
        if ( ((uint8_t *)(spins))[20] == 0 )
          goto LABEL_29;
        v15 = *(pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
        v12 = (int)(uintptr_t)(v20);
        if ( v15 == nullptr )
          goto LABEL_29;
        while ( spins != *v15 )
        {
          v15 = (pthread_mutex_t **)v15[2];
          if ( v15 == nullptr )
            goto LABEL_29;
        }
        v16 = v15[1];
        if ( v16 != nullptr )
        {
          kind = (pthread_mutex_t *)((int32_t *)(v16))[3];
          if ( kind != nullptr )
          {
            ((int32_t *)(kind))[0] = (int)(uintptr_t)(v22);
          }
          else
          {
            kind = v22;
            ((int32_t *)(v16))[2] = (int)(uintptr_t)(v22);
          }
          ((int32_t *)(v16))[3] = (int)(uintptr_t)(v20);
        }
        else
        {
LABEL_29:
          v21 = v12;
          v26 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (1)));
          pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (1))));
          owner = (pthread_mutex_t **)(uintptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (2))));
          v27 = 1;
          if ( owner != nullptr )
            *owner = v22;
          else
            G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (2)))) = (unsigned int)(uintptr_t)(v22);
          G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(spins) + (24 * (2)))) = v21;
          boost::asio::detail::task_io_service::wake_one_thread_and_unlock(
            (boost::asio::detail::task_io_service *)spins,
            (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *)&v26);
          if ( v27 != 0 )
            pthread_mutex_unlock(v26);
        }
      }
    }
    else
    {
      v7 = 0;
      pthread_mutex_unlock(mutex);
    }
    *(uint8_t *)(a4 + 8) = 0;
    a5[1] = (uint32_t)(uintptr_t)(sub_18F81E0(kind, v12));
    *a5 = 0;
    return v7;
  }
  else
  {
    a5[1] = (uint32_t)(uintptr_t)(sub_18F81E0(a1, a2));
    *a5 = 0;
    return 0;
  }
}


// ============================================================================
// Address:   0x1352f80 (size: 299 bytes)
// Symbol:    _ZN5boost6detail20lexical_cast_do_castISsdE17lexical_cast_implERKd
// Demangled: boost::detail::lexical_cast_do_cast<std::string,double>::lexical_cast_impl(double const&)
// ============================================================================
template <>
boost::detail::lexical_cast_do_cast<std::string, double> *boost::detail::lexical_cast_do_cast<std::string,double>::lexical_cast_impl(
        boost::detail::lexical_cast_do_cast<std::string, double> *self,
        const double *a2)
{
  int v2;
  int v3;
  unsigned int v4;
  char *p_s;
  char *v6;
  char *v8;
  typedef char _g4_t_s;
  typedef uint8_t _g4_t_v10[31];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v10)) > _g4_s1 ? (1u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 1u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *((uint32_t *)a2 + 1);
  v3 = *(uint32_t *)a2;
  v4 = v2 & 0x7FFFFFFF;
  if ( (v2 & 0x7FFFFFFFu) >= 0x7FF00000 && (v4 > 0x7FF00000 || v3 != 0) )
  {
    p_s = &s;
    if ( v2 < 0 )
    {
      s = 45;
      p_s = (char *)(v10);
    }
    *(uint16_t *)p_s = 24942;
    p_s[2] = 110;
    v6 = p_s + 3;
  }
  else if ( (*(uint32_t *)a2 | v4 ^ 0x7FF00000) != 0 )
  {
    v6 = (char *)(&v10[sprintf(&s, "%.*g", 17, v3, v2) - 1]);
    if ( v6 <= &s )
      std::terminate();
  }
  else
  {
    v8 = &s;
    if ( v2 < 0 )
    {
      s = 45;
      v8 = (char *)(v10);
    }
    *(uint16_t *)v8 = 28265;
    v8[2] = 102;
    v6 = v8 + 3;
  }
  sub_193A9B0((int)(uintptr_t)(self), 0, *(uint32_t *)(*(uint32_t *)self - 12), &s, v6 - &s);
  return self;
}


// [Deduplicated: canonical definition in boost_runtime_part01.cpp]
namespace g4_std_compat { int deque_reallocate_map(void *self, unsigned int a2, bool a3); }


// ============================================================================
// Address:   0x13534f0 (size: 424 bytes)
// Symbol:    _ZNSt5dequeIN5boost10shared_ptrIN6glotv35EventEEESaIS4_EE28_M_reserve_elements_at_frontEj
// Demangled: std::deque<boost::shared_ptr<glotv3::Event>,std::allocator<boost::shared_ptr<glotv3::Event>>>::_M_reserve_elements_at_front(unsigned int)
// ============================================================================
void *g4_std_compat::deque_glotv3_event_reserve_front(
        void *self,
        void *a2,
        unsigned int a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  __m128i v13; // xmm0
  __int128 v15; // xmm0
  unsigned int v16;

  v3 = *((uint32_t *)a2 + 2);
  v4 = *((uint32_t *)a2 + 3);
  v5 = (int)(v3 - v4) >> 3;
  v6 = v5;
  if ( v5 >= a3 )
  {
LABEL_10:
    v8 = *((unsigned int **)a2 + 5);
    goto LABEL_11;
  }
  v7 = a3 - v5;
  v8 = *((unsigned int **)a2 + 5);
  if ( v7 > 0x1FFFFFFF
          - (((*((uint32_t *)a2 + 6) - *((uint32_t *)a2 + 7)) >> 3)
           + ((((*((uint32_t *)a2 + 9) - (int)(uintptr_t)(v8)) >> 2) - 1) << 6)
           + ((*((uint32_t *)a2 + 4) - v3) >> 3)) )
    sub_1900180("deque::_M_new_elements_at_front");
  v16 = (v7 + 63) >> 6;
  if ( v16 > ((int)(uintptr_t)(v8) - *(uint32_t *)a2) >> 2 )
  {
    g4_std_compat::deque_reallocate_map(a2, v16, true);
    v8 = *((unsigned int **)a2 + 5);
  }
  v9 = 2;
  if ( v16 != 0 )
  {
    while ( 1 )
    {
      v8[-v9 + 1] = (unsigned int)(uintptr_t)(operator new(0x200u));
      if ( v16 < v9 )
        break;
      ++v9;
      v8 = *((unsigned int **)a2 + 5);
    }
    v3 = *((uint32_t *)a2 + 2);
    v4 = *((uint32_t *)a2 + 3);
    v6 = (int)(v3 - v4) >> 3;
    goto LABEL_10;
  }
  v3 = *((uint32_t *)a2 + 2);
  v4 = *((uint32_t *)a2 + 3);
  v6 = (int)(v3 - v4) >> 3;
LABEL_11:
  v10 = v6 - a3;
  v11 = *((uint32_t *)a2 + 4);
  if ( v10 < 0 )
  {
    v12 = ((unsigned int)v10 >> 6) | 0xFC000000;
  }
  else
  {
    if ( v10 <= 63 )
    {
      v13 = _mm_cvtsi32_si128(v3 - 8 * a3);
      goto LABEL_15;
    }
    v12 = v10 >> 6;
  }
  v8 += v12;
  v4 = *v8;
  v11 = *v8 + 512;
  v13 = _mm_cvtsi32_si128(*v8 + 8 * (v10 - (v12 << 6)));
LABEL_15:
  *(uint64_t *)&v15 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v4)), 0);
  *((uint64_t *)&v15 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v8))), 0);
  *(__int128 *)self = v15;
  return self;
}


// ============================================================================
// Address:   0x13536a0 (size: 417 bytes)
// Symbol:    _ZNSt5dequeIN5boost10shared_ptrIN6glotv35EventEEESaIS4_EE27_M_reserve_elements_at_backEj
// Demangled: std::deque<boost::shared_ptr<glotv3::Event>,std::allocator<boost::shared_ptr<glotv3::Event>>>::_M_reserve_elements_at_back(unsigned int)
// ============================================================================
void *g4_std_compat::deque_glotv3_event_reserve_back(
        void *self,
        void *a2,
        unsigned int a3)
{
  void *v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int v9;
  int *v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __m128i v14; // xmm0
  __int128 v16; // xmm0
  unsigned int v17;

  v3 = a2;
  v4 = *((uint32_t *)a2 + 8);
  v5 = *((uint32_t *)a2 + 6);
  v6 = ((int)(v4 - v5) >> 3) - 1;
  if ( v6 >= a3 )
  {
LABEL_10:
    v8 = *((unsigned int **)v3 + 9);
    goto LABEL_11;
  }
  v7 = a3 - v6;
  v8 = *((unsigned int **)a2 + 9);
  if ( v7 > 0x1FFFFFFF
          - ((((((int)(uintptr_t)(v8) - *((uint32_t *)a2 + 5)) >> 2) - 1) << 6)
           + ((v5 - *((uint32_t *)a2 + 7)) >> 3)
           + ((*((uint32_t *)a2 + 4) - *((uint32_t *)a2 + 2)) >> 3)) )
    sub_1900180("deque::_M_new_elements_at_back");
  v17 = (v7 + 63) >> 6;
  if ( v17 + 1 > *((uint32_t *)a2 + 1) - (((int)(uintptr_t)(v8) - *(uint32_t *)a2) >> 2) )
  {
    g4_std_compat::deque_reallocate_map(a2, v17, false);
    v8 = *((unsigned int **)a2 + 9);
  }
  v9 = 1;
  if ( v17 != 0 )
  {
    while ( 1 )
    {
      v10 = (int *)&v8[v9++];
      *v10 = (int)(uintptr_t)(operator new(0x200u));
      if ( v17 < v9 )
        break;
      v8 = *((unsigned int **)a2 + 9);
    }
    v3 = a2;
    v5 = *((uint32_t *)a2 + 6);
    v4 = *((uint32_t *)a2 + 8);
    goto LABEL_10;
  }
  v5 = *((uint32_t *)a2 + 6);
  v4 = *((uint32_t *)a2 + 8);
LABEL_11:
  v11 = *((uint32_t *)v3 + 7);
  v12 = a3 + ((int)(v5 - v11) >> 3);
  if ( v12 < 0 )
  {
    v13 = ((unsigned int)v12 >> 6) | 0xFC000000;
  }
  else
  {
    if ( v12 <= 63 )
    {
      v14 = _mm_cvtsi32_si128(v5 + 8 * a3);
      goto LABEL_15;
    }
    v13 = v12 >> 6;
  }
  v8 += v13;
  v11 = *v8;
  v4 = *v8 + 512;
  v14 = _mm_cvtsi32_si128(*v8 + 8 * (v12 - (v13 << 6)));
LABEL_15:
  *(uint64_t *)&v16 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v11)), 0);
  *((uint64_t *)&v16 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v8))), 0);
  *(__int128 *)self = v16;
  return self;
}


// ============================================================================
// Address:   0x1353850 (size: 4065 bytes)
// Symbol:    _ZNSt5dequeIN5boost10shared_ptrIN6glotv35EventEEESaIS4_EE13_M_insert_auxISt15_Deque_iteratorIS4_RS4_PS4_EEEvSB_T_SC_j
// Demangled: void std::deque<boost::shared_ptr<glotv3::Event>,std::allocator<boost::shared_ptr<glotv3::Event>>>::_M_insert_aux<std::_Deque_iterator<boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::Event>&,boost::shared_ptr<glotv3::Event>*>>(std::_Deque_iterator<boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::Event>&,boost::shared_ptr<glotv3::Event>*>,std::_Deque_iterator<boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::Event>&,boost::shared_ptr<glotv3::Event>*>,std::_Deque_iterator<boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::Event>&,boost::shared_ptr<glotv3::Event>*>,unsigned int)
// ============================================================================
void *g4_std_compat::deque_glotv3_event_insert_aux(
        void *a1,
        unsigned int *a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5)
{
  void *v5;
  int v6;
  signed int v7;
  unsigned int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  unsigned int v13;
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __int128 v16; // xmm0
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int *v26;
  int v27;
  int v28;
  int v30;
  unsigned int v31;
  __m128i v32; // xmm0
  __m128i v33; // xmm3
  uint64_t v34; // xmm1_8
  __int128 v35; // xmm0
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  uint32_t *v55;
  int v56;
  uint32_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  int v69;
  int v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef __int128 *_g4_t_v75;
  typedef __int128 *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int *_g4_t_v81;
  typedef unsigned int *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef unsigned int _g4_t_v102;
  typedef unsigned int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef unsigned int *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef unsigned int *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef unsigned int _g4_t_v115;
  typedef signed int _g4_t_v116;
  typedef uint32_t *_g4_t_v117;
  typedef volatile int32_t *_g4_t_v118;
  typedef uint32_t *_g4_t_v119;
  typedef unsigned int _g4_t_v120;
  typedef signed int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint32_t *_g4_t_v125;
  typedef unsigned int _g4_t_v126;
  typedef __int128 _g4_t_v127;
  typedef int _g4_t_v128;
  typedef volatile int32_t *_g4_t_v129;
  typedef int _g4_t_v130[4];
  typedef uint32_t _g4_t_v131[4];
  typedef unsigned int _g4_t_v132[4];
  typedef unsigned int _g4_t_v133[4];
  typedef __int128 _g4_t_v134;
  typedef __int128 _g4_t_v135;
  typedef int _g4_t_v136[4];
  typedef uint32_t _g4_t_v137[4];
  typedef unsigned int _g4_t_v138[4];
  typedef uint32_t *_g4_t_v139;
  typedef uint32_t *_g4_t_v140;
  typedef uint32_t *_g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef __int128 _g4_t_v143;
  typedef __int128 _g4_t_v144;
  typedef unsigned int _g4_t_v145[4];
  typedef int _g4_t_v146[4];
  typedef uint32_t _g4_t_v147[4];
  typedef __int128 _g4_t_v148;
  typedef __m128i _g4_t_v149;
  typedef uint32_t _g4_t_v150[4];
  typedef __m128i _g4_t_v151;
  typedef uint32_t *_g4_t_v152[4];
  typedef uint32_t _g4_t_v153[4];
  typedef uint32_t _g4_t_v154[4];
  typedef uint32_t *_g4_t_v155[4];
  typedef uint32_t _g4_t_v156[4];
  typedef uint32_t *_g4_t_v157[4];
  typedef __m128i _g4_t_v158;
  typedef uint32_t _g4_t_v159[4];
  typedef uint32_t *_g4_t_v160[4];
  typedef uint32_t _g4_t_v161[4];
  typedef __m128i _g4_t_v162;
  typedef void **_g4_t_v163;
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_v71)) > _g4_s0 ? (4u + sizeof(_g4_t_v71)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v72)) > _g4_s1 ? (4u + sizeof(_g4_t_v72)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v73)) > _g4_s2 ? (4u + sizeof(_g4_t_v73)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v74)) > _g4_s3 ? (4u + sizeof(_g4_t_v74)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v75)) > _g4_s4 ? (8u + sizeof(_g4_t_v75)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v76)) > _g4_s5 ? (12u + sizeof(_g4_t_v76)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v77)) > _g4_s6 ? (16u + sizeof(_g4_t_v77)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v78)) > _g4_s7 ? (20u + sizeof(_g4_t_v78)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v79)) > _g4_s8 ? (24u + sizeof(_g4_t_v79)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v80)) > _g4_s9 ? (24u + sizeof(_g4_t_v80)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v81)) > _g4_s10 ? (28u + sizeof(_g4_t_v81)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v82)) > _g4_s11 ? (32u + sizeof(_g4_t_v82)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v83)) > _g4_s12 ? (36u + sizeof(_g4_t_v83)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v84)) > _g4_s13 ? (36u + sizeof(_g4_t_v84)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v85)) > _g4_s14 ? (40u + sizeof(_g4_t_v85)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v86)) > _g4_s15 ? (40u + sizeof(_g4_t_v86)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v87)) > _g4_s16 ? (40u + sizeof(_g4_t_v87)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v88)) > _g4_s17 ? (44u + sizeof(_g4_t_v88)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v89)) > _g4_s18 ? (44u + sizeof(_g4_t_v89)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v90)) > _g4_s19 ? (44u + sizeof(_g4_t_v90)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v91)) > _g4_s20 ? (48u + sizeof(_g4_t_v91)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v92)) > _g4_s21 ? (48u + sizeof(_g4_t_v92)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v93)) > _g4_s22 ? (48u + sizeof(_g4_t_v93)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v94)) > _g4_s23 ? (52u + sizeof(_g4_t_v94)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v95)) > _g4_s24 ? (52u + sizeof(_g4_t_v95)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v96)) > _g4_s25 ? (52u + sizeof(_g4_t_v96)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v97)) > _g4_s26 ? (56u + sizeof(_g4_t_v97)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v98)) > _g4_s27 ? (56u + sizeof(_g4_t_v98)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v99)) > _g4_s28 ? (56u + sizeof(_g4_t_v99)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v100)) > _g4_s29 ? (56u + sizeof(_g4_t_v100)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v101)) > _g4_s30 ? (56u + sizeof(_g4_t_v101)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v102)) > _g4_s31 ? (60u + sizeof(_g4_t_v102)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v103)) > _g4_s32 ? (60u + sizeof(_g4_t_v103)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v104)) > _g4_s33 ? (60u + sizeof(_g4_t_v104)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v105)) > _g4_s34 ? (64u + sizeof(_g4_t_v105)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v106)) > _g4_s35 ? (64u + sizeof(_g4_t_v106)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v107)) > _g4_s36 ? (64u + sizeof(_g4_t_v107)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v108)) > _g4_s37 ? (64u + sizeof(_g4_t_v108)) : _g4_s37,
    _g4_s39 = (64u + sizeof(_g4_t_v109)) > _g4_s38 ? (64u + sizeof(_g4_t_v109)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v110)) > _g4_s39 ? (68u + sizeof(_g4_t_v110)) : _g4_s39,
    _g4_s41 = (68u + sizeof(_g4_t_v111)) > _g4_s40 ? (68u + sizeof(_g4_t_v111)) : _g4_s40,
    _g4_s42 = (68u + sizeof(_g4_t_v112)) > _g4_s41 ? (68u + sizeof(_g4_t_v112)) : _g4_s41,
    _g4_s43 = (68u + sizeof(_g4_t_v113)) > _g4_s42 ? (68u + sizeof(_g4_t_v113)) : _g4_s42,
    _g4_s44 = (68u + sizeof(_g4_t_v114)) > _g4_s43 ? (68u + sizeof(_g4_t_v114)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v115)) > _g4_s44 ? (72u + sizeof(_g4_t_v115)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v116)) > _g4_s45 ? (72u + sizeof(_g4_t_v116)) : _g4_s45,
    _g4_s47 = (72u + sizeof(_g4_t_v117)) > _g4_s46 ? (72u + sizeof(_g4_t_v117)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v118)) > _g4_s47 ? (72u + sizeof(_g4_t_v118)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v119)) > _g4_s48 ? (72u + sizeof(_g4_t_v119)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v120)) > _g4_s49 ? (72u + sizeof(_g4_t_v120)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v121)) > _g4_s50 ? (76u + sizeof(_g4_t_v121)) : _g4_s50,
    _g4_s52 = (76u + sizeof(_g4_t_v122)) > _g4_s51 ? (76u + sizeof(_g4_t_v122)) : _g4_s51,
    _g4_s53 = (76u + sizeof(_g4_t_v123)) > _g4_s52 ? (76u + sizeof(_g4_t_v123)) : _g4_s52,
    _g4_s54 = (76u + sizeof(_g4_t_v124)) > _g4_s53 ? (76u + sizeof(_g4_t_v124)) : _g4_s53,
    _g4_s55 = (76u + sizeof(_g4_t_v125)) > _g4_s54 ? (76u + sizeof(_g4_t_v125)) : _g4_s54,
    _g4_s56 = (76u + sizeof(_g4_t_v126)) > _g4_s55 ? (76u + sizeof(_g4_t_v126)) : _g4_s55,
    _g4_s57 = (80u + sizeof(_g4_t_v127)) > _g4_s56 ? (80u + sizeof(_g4_t_v127)) : _g4_s56,
    _g4_s58 = (96u + sizeof(_g4_t_v128)) > _g4_s57 ? (96u + sizeof(_g4_t_v128)) : _g4_s57,
    _g4_s59 = (100u + sizeof(_g4_t_v129)) > _g4_s58 ? (100u + sizeof(_g4_t_v129)) : _g4_s58,
    _g4_s60 = (112u + sizeof(_g4_t_v130)) > _g4_s59 ? (112u + sizeof(_g4_t_v130)) : _g4_s59,
    _g4_s61 = (128u + sizeof(_g4_t_v131)) > _g4_s60 ? (128u + sizeof(_g4_t_v131)) : _g4_s60,
    _g4_s62 = (144u + sizeof(_g4_t_v132)) > _g4_s61 ? (144u + sizeof(_g4_t_v132)) : _g4_s61,
    _g4_s63 = (160u + sizeof(_g4_t_v133)) > _g4_s62 ? (160u + sizeof(_g4_t_v133)) : _g4_s62,
    _g4_s64 = (176u + sizeof(_g4_t_v134)) > _g4_s63 ? (176u + sizeof(_g4_t_v134)) : _g4_s63,
    _g4_s65 = (192u + sizeof(_g4_t_v135)) > _g4_s64 ? (192u + sizeof(_g4_t_v135)) : _g4_s64,
    _g4_s66 = (208u + sizeof(_g4_t_v136)) > _g4_s65 ? (208u + sizeof(_g4_t_v136)) : _g4_s65,
    _g4_s67 = (224u + sizeof(_g4_t_v137)) > _g4_s66 ? (224u + sizeof(_g4_t_v137)) : _g4_s66,
    _g4_s68 = (240u + sizeof(_g4_t_v138)) > _g4_s67 ? (240u + sizeof(_g4_t_v138)) : _g4_s67,
    _g4_s69 = (256u + sizeof(_g4_t_v139)) > _g4_s68 ? (256u + sizeof(_g4_t_v139)) : _g4_s68,
    _g4_s70 = (260u + sizeof(_g4_t_v140)) > _g4_s69 ? (260u + sizeof(_g4_t_v140)) : _g4_s69,
    _g4_s71 = (264u + sizeof(_g4_t_v141)) > _g4_s70 ? (264u + sizeof(_g4_t_v141)) : _g4_s70,
    _g4_s72 = (268u + sizeof(_g4_t_v142)) > _g4_s71 ? (268u + sizeof(_g4_t_v142)) : _g4_s71,
    _g4_s73 = (272u + sizeof(_g4_t_v143)) > _g4_s72 ? (272u + sizeof(_g4_t_v143)) : _g4_s72,
    _g4_s74 = (288u + sizeof(_g4_t_v144)) > _g4_s73 ? (288u + sizeof(_g4_t_v144)) : _g4_s73,
    _g4_s75 = (304u + sizeof(_g4_t_v145)) > _g4_s74 ? (304u + sizeof(_g4_t_v145)) : _g4_s74,
    _g4_s76 = (320u + sizeof(_g4_t_v146)) > _g4_s75 ? (320u + sizeof(_g4_t_v146)) : _g4_s75,
    _g4_s77 = (336u + sizeof(_g4_t_v147)) > _g4_s76 ? (336u + sizeof(_g4_t_v147)) : _g4_s76,
    _g4_s78 = (352u + sizeof(_g4_t_v148)) > _g4_s77 ? (352u + sizeof(_g4_t_v148)) : _g4_s77,
    _g4_s79 = (368u + sizeof(_g4_t_v149)) > _g4_s78 ? (368u + sizeof(_g4_t_v149)) : _g4_s78,
    _g4_s80 = (384u + sizeof(_g4_t_v150)) > _g4_s79 ? (384u + sizeof(_g4_t_v150)) : _g4_s79,
    _g4_s81 = (400u + sizeof(_g4_t_v151)) > _g4_s80 ? (400u + sizeof(_g4_t_v151)) : _g4_s80,
    _g4_s82 = (416u + sizeof(_g4_t_v152)) > _g4_s81 ? (416u + sizeof(_g4_t_v152)) : _g4_s81,
    _g4_s83 = (432u + sizeof(_g4_t_v153)) > _g4_s82 ? (432u + sizeof(_g4_t_v153)) : _g4_s82,
    _g4_s84 = (448u + sizeof(_g4_t_v154)) > _g4_s83 ? (448u + sizeof(_g4_t_v154)) : _g4_s83,
    _g4_s85 = (464u + sizeof(_g4_t_v155)) > _g4_s84 ? (464u + sizeof(_g4_t_v155)) : _g4_s84,
    _g4_s86 = (480u + sizeof(_g4_t_v156)) > _g4_s85 ? (480u + sizeof(_g4_t_v156)) : _g4_s85,
    _g4_s87 = (496u + sizeof(_g4_t_v157)) > _g4_s86 ? (496u + sizeof(_g4_t_v157)) : _g4_s86,
    _g4_s88 = (512u + sizeof(_g4_t_v158)) > _g4_s87 ? (512u + sizeof(_g4_t_v158)) : _g4_s87,
    _g4_s89 = (528u + sizeof(_g4_t_v159)) > _g4_s88 ? (528u + sizeof(_g4_t_v159)) : _g4_s88,
    _g4_s90 = (544u + sizeof(_g4_t_v160)) > _g4_s89 ? (544u + sizeof(_g4_t_v160)) : _g4_s89,
    _g4_s91 = (560u + sizeof(_g4_t_v161)) > _g4_s90 ? (560u + sizeof(_g4_t_v161)) : _g4_s90,
    _g4_s92 = (576u + sizeof(_g4_t_v162)) > _g4_s91 ? (576u + sizeof(_g4_t_v162)) : _g4_s91,
    _g4_s93 = (600u + sizeof(_g4_t_v163)) > _g4_s92 ? (600u + sizeof(_g4_t_v163)) : _g4_s92
  };
  alignas(16) uint8_t _g4_sf[_g4_s93];
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 4u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 4u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 4u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 8u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 12u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 16u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 20u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 48u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 48u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 48u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 52u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 52u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 56u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 56u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 56u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 56u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 56u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 60u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 60u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 60u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 64u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 64u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 68u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 68u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 68u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 68u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 72u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 72u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 72u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 72u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 72u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 72u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 76u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 76u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 76u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 76u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 76u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 76u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 80u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 96u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 100u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 112u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 128u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 144u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 160u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 176u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 192u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 208u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 224u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 240u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 256u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 260u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 264u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 268u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 272u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 288u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 304u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 320u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 336u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 352u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 368u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 384u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 400u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 416u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 432u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 448u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 464u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 480u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 496u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 512u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 528u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 544u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 560u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 576u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 600u);

  v163 = &a1;
  v82 = a2;
  v5 = a1;
  v76 = a3;
  v121 = a5;
  v75 = a4;
  v6 = (*((uint32_t *)v5 + 4) - *((uint32_t *)v5 + 2)) >> 3;
  v7 = v6 + ((int)(*v82 - v82[1]) >> 3) + ((((int)(v82[3] - *((uint32_t *)a1 + 5)) >> 2) - 1) << 6);
  v8 = ((((*((uint32_t *)v5 + 9) - *((uint32_t *)v5 + 5)) >> 2) - 1) << 6)
     + ((*((uint32_t *)v5 + 6) - *((uint32_t *)v5 + 7)) >> 3)
     + v6;
  if ( v7 < v8 >> 1 )
  {
    g4_std_compat::deque_glotv3_event_reserve_front(
      (void *)&v139,
      a1,
      a5);
    v115 = *((uint32_t *)v5 + 2);
    v110 = *((uint32_t *)v5 + 3);
    v9 = (int)(v115 - v110) >> 3;
    v94 = *((uint32_t *)v5 + 4);
    v10 = v7 + v9 < 0;
    v11 = v7 + v9;
    v102 = *((uint32_t *)v5 + 5);
    if ( v10 )
    {
      v97 = ((unsigned int)v11 >> 6) | 0xFC000000;
      v12 = v97;
    }
    else
    {
      if ( v11 <= 63 )
      {
        v14 = _mm_cvtsi32_si128(v94);
        v98 = (uint32_t *)(v115 + 8 * v7);
        v105 = *((unsigned int **)v5 + 5);
        v13 = *((uint32_t *)v5 + 3);
        v15 = _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v98));
LABEL_6:
        *(uint64_t *)&v16 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(v13)), 0);
        *((uint64_t *)&v16 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v14, _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v105))), 0);
        *(__int128 *)v82 = v16;
        if ( v121 <= v7 )
        {
          v17 = *((uint32_t *)v5 + 2);
          v85 = *((uint32_t *)v5 + 4);
          v106 = *((uint32_t *)v5 + 3);
          v18 = (v17 - v106) >> 3;
          v10 = v121 + v18 < 0;
          v19 = v121 + v18;
          v91 = *((uint32_t *)v5 + 5);
          if ( v10 )
          {
            v68 = ((unsigned int)v19 >> 6) | 0xFC000000;
          }
          else
          {
            if ( v19 <= 63 )
            {
              v88 = *((int **)v5 + 5);
              v83 = *((uint32_t *)v5 + 4);
              v20 = (uint32_t *)(v17 + 8 * v121);
              v99 = *((uint32_t *)v5 + 3);
              goto LABEL_10;
            }
            v68 = v19 >> 6;
          }
          v88 = (int *)(v91 + 4 * v68);
          v99 = *v88;
          v83 = *v88 + 512;
          v20 = (uint32_t *)(*v88 + 8 * (v19 - (v68 << 6)));
LABEL_10:
          v155[0] = v139;
          v155[1] = v140;
          v155[2] = v141;
          v155[3] = v142;
          v154[0] = v17;
          v154[2] = v85;
          v154[3] = v91;
          v154[1] = v106;
          sub_134CB60(&v158, (int)(uintptr_t)(v154), v20, v155);
          v132[0] = v115;
          v132[2] = v94;
          *((uint32_t *)v5 + 2) = (uint32_t)(uintptr_t)(v139);
          *((uint32_t *)v5 + 3) = (uint32_t)(uintptr_t)(v140);
          *((uint32_t *)v5 + 4) = (uint32_t)(uintptr_t)(v141);
          *((uint32_t *)v5 + 5) = (uint32_t)(uintptr_t)(v142);
          v131[0] = *v82;
          v21 = v82[1];
          v132[1] = v110;
          v131[1] = v21;
          v22 = v82[2];
          v132[3] = v102;
          v131[2] = v22;
          v23 = v82[3];
          v130[0] = (int)(uintptr_t)(v20);
          v130[3] = (int)(uintptr_t)(v88);
          v131[3] = v23;
          v130[1] = v99;
          v130[2] = v83;
          sub_134E470(&v127, v130, v131, v132);
          v24 = v82[1];
          v25 = v82[2];
          v26 = (unsigned int *)v82[3];
          v27 = ((int)(*v82 - v24) >> 3) - v121;
          if ( v27 < 0 )
          {
            v67 = ((unsigned int)v27 >> 6) | 0xFC000000;
          }
          else
          {
            if ( v27 <= 63 )
            {
              v28 = *v82 - 8 * v121;
LABEL_13:
              v133[3] = (unsigned int)(uintptr_t)(v26);
              v133[0] = v28;
              v133[1] = v24;
              v133[2] = v25;
              v135 = *v75;
              v134 = *v76;
              return (void *)(uintptr_t)(sub_134E470(&v127, (int *)&v134, &v135, v133));
            }
            v67 = v27 >> 6;
          }
          v26 += v67;
          v24 = *v26;
          v25 = *v26 + 512;
          v28 = *v26 + 8 * (v27 - (v67 << 6));
          goto LABEL_13;
        }
        v59 = *(uint32_t *)v76;
        v109 = *((uint32_t *)v76 + 1);
        v87 = *((uint32_t *)v76 + 2);
        v93 = *((uint32_t *)v76 + 3);
        v60 = v121 - v7 + ((*(uint32_t *)v76 - v109) >> 3);
        if ( v60 < 0 )
        {
          v126 = ((unsigned int)v60 >> 6) | 0xFC000000;
          v70 = v126;
        }
        else
        {
          if ( v60 <= 63 )
          {
            v90 = *((int **)v76 + 3);
            v80 = *((uint32_t *)v76 + 2);
            v125 = (uint32_t *)(v59 + 8 * (v121 - v7));
            v61 = *((uint32_t *)v76 + 1);
LABEL_61:
            v62 = *((uint32_t *)v5 + 2);
            v157[0] = v139;
            v157[1] = v140;
            v157[2] = v141;
            v157[3] = v142;
            v156[0] = v62;
            v63 = *((uint32_t *)v5 + 4);
            v156[1] = *((uint32_t *)v5 + 3);
            v156[2] = v63;
            v156[3] = *((uint32_t *)v5 + 5);
            v74 = v59;
            sub_134CB60(&v151, (int)(uintptr_t)(v156), v98, v157);
            v149 = v151;
            v150[0] = v74;
            v150[1] = v109;
            v150[2] = v87;
            v150[3] = v93;
            sub_134CB60(&v158, (int)(uintptr_t)(v150), v125, &v149);
            *((uint32_t *)v5 + 2) = (uint32_t)(uintptr_t)(v139);
            *((uint32_t *)v5 + 3) = (uint32_t)(uintptr_t)(v140);
            *((uint32_t *)v5 + 4) = (uint32_t)(uintptr_t)(v141);
            *((uint32_t *)v5 + 5) = (uint32_t)(uintptr_t)(v142);
            v138[0] = v115;
            v138[2] = v94;
            v138[1] = v110;
            v138[3] = v102;
            v136[1] = v61;
            v64 = *(uint32_t *)v75;
            v136[0] = (int)(uintptr_t)(v125);
            v137[0] = v64;
            v137[1] = *((uint32_t *)v75 + 1);
            v137[2] = *((uint32_t *)v75 + 2);
            v137[3] = *((uint32_t *)v75 + 3);
            v136[2] = v80;
            v136[3] = (int)(uintptr_t)(v90);
            return (void *)(uintptr_t)(sub_134E470(&v127, v136, v137, v138));
          }
          v70 = v60 >> 6;
          v126 = v60 >> 6;
        }
        v90 = (int *)(v93 + 4 * v70);
        v61 = *v90;
        v80 = *v90 + 512;
        v125 = (uint32_t *)(*v90 + 8 * (v60 - (v126 << 6)));
        goto LABEL_61;
      }
      v12 = v11 >> 6;
      v97 = v11 >> 6;
    }
    v105 = (unsigned int *)(v102 + 4 * v12);
    v13 = *v105;
    v14 = _mm_cvtsi32_si128(*v105 + 512);
    v98 = (uint32_t *)(*v105 + 8 * (v11 - (v97 << 6)));
    v15 = _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v98));
    goto LABEL_6;
  }
  v71 = v8;
  g4_std_compat::deque_glotv3_event_reserve_back(
    (void *)&v139,
    a1,
    a5);
  v84 = *((uint32_t *)v5 + 6);
  v116 = v71 - v7;
  v77 = *((uint32_t *)v5 + 7);
  v103 = *((uint32_t *)v5 + 8);
  v30 = ((v84 - v77) >> 3) - (v71 - v7);
  v78 = *((int **)v5 + 9);
  if ( v30 < 0 )
  {
    v31 = ((unsigned int)v30 >> 6) | 0xFC000000;
    goto LABEL_17;
  }
  if ( v30 > 63 )
  {
    v31 = v30 >> 6;
LABEL_17:
    v107 = (unsigned int *)&v78[v31];
    v111 = *v107;
    v103 = *v107 + 512;
    v32 = _mm_cvtsi32_si128(v103);
    v100 = *v107 + 8 * (v30 - (v31 << 6));
    v33 = _mm_cvtsi32_si128(v100);
    goto LABEL_18;
  }
  v107 = *((unsigned int **)v5 + 9);
  v111 = *((uint32_t *)v5 + 7);
  v32 = _mm_cvtsi32_si128(v103);
  v100 = v84 - 8 * v116;
  v33 = _mm_cvtsi32_si128(v100);
LABEL_18:
  v34 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v32, _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v107))), 0);
  *(uint64_t *)&v35 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v33, _mm_cvtsi32_si128(v111)), 0);
  *((uint64_t *)&v35 + 1) = v34;
  *(__int128 *)v82 = v35;
  if ( v116 <= v121 )
  {
    v54 = *((uint32_t *)v76 + 1);
    v124 = *((uint32_t *)v76 + 2);
    v55 = *((uint32_t **)v76 + 3);
    v56 = ((*(uint32_t *)v76 - v54) >> 3) + v116;
    if ( v56 < 0 )
    {
      v120 = ((unsigned int)v56 >> 6) | 0xFC000000;
      v69 = v120;
    }
    else
    {
      if ( v56 <= 63 )
      {
        v96 = *(uint32_t *)v76 + 8 * v116;
LABEL_57:
        v119 = *((uint32_t **)v5 + 6);
        v153[3] = (uint32_t)(uintptr_t)(v55);
        v153[1] = v54;
        v57 = *(uint32_t **)v75;
        v152[0] = v119;
        v152[1] = *((uint32_t **)v5 + 7);
        v152[2] = *((uint32_t **)v5 + 8);
        v152[3] = *((uint32_t **)v5 + 9);
        v153[0] = v96;
        v153[2] = v124;
        v73 = v55;
        sub_134CB60(&v151, (int)(uintptr_t)(v153), v57, v152);
        v162 = v151;
        v161[0] = v100;
        v161[1] = v111;
        v161[2] = v103;
        v161[3] = (uint32_t)(uintptr_t)(v107);
        sub_134CB60(&v158, (int)(uintptr_t)(v161), v119, &v162);
        v147[1] = v54;
        *((uint32_t *)v5 + 6) = (uint32_t)(uintptr_t)(v139);
        *((uint32_t *)v5 + 7) = (uint32_t)(uintptr_t)(v140);
        *((uint32_t *)v5 + 8) = (uint32_t)(uintptr_t)(v141);
        *((uint32_t *)v5 + 9) = (uint32_t)(uintptr_t)(v142);
        v147[3] = (uint32_t)(uintptr_t)(v73);
        v147[2] = v124;
        v148 = (*(__int128 *)v82);
        v146[0] = *(uint32_t *)v76;
        v146[1] = *((uint32_t *)v76 + 1);
        v146[2] = *((uint32_t *)v76 + 2);
        v58 = *((uint32_t *)v76 + 3);
        v147[0] = v96;
        v146[3] = v58;
        return (void *)(uintptr_t)(sub_134E470(&v127, v146, v147, (unsigned int *)&v148));
      }
      v69 = v56 >> 6;
      v120 = v56 >> 6;
    }
    v55 += v69;
    v54 = *v55;
    v124 = *v55 + 512;
    v96 = *v55 + 8 * (v56 - (v120 << 6));
    goto LABEL_57;
  }
  v36 = *((uint32_t **)v5 + 6);
  v117 = *((uint32_t **)v5 + 9);
  v37 = (((int)(uintptr_t)(v36) - *((uint32_t *)v5 + 7)) >> 3) - v121;
  v112 = *((uint32_t *)v5 + 7);
  if ( v37 < 0 )
  {
    v114 = ((unsigned int)v37 >> 6) | 0xFC000000;
    v65 = v114;
  }
  else
  {
    if ( v37 <= 63 )
    {
      v81 = *((int **)v5 + 9);
      v79 = *((uint32_t *)v5 + 7);
      v86 = (int)(uintptr_t)(&v36[-2 * v121]);
      v38 = *((uint32_t **)v5 + 8);
      v122 = (int)(uintptr_t)(v38);
      goto LABEL_22;
    }
    v65 = v37 >> 6;
    v114 = v37 >> 6;
  }
  v81 = (int *)(&v117[v65]);
  v79 = *v81;
  v122 = *v81 + 512;
  v66 = v37 - (v114 << 6);
  v112 = *v81;
  v86 = *v81 + 8 * v66;
  v38 = *((uint32_t **)v5 + 8);
LABEL_22:
  v160[1] = *((uint32_t **)v5 + 7);
  v160[3] = v117;
  v160[0] = v36;
  v160[2] = v38;
  v159[0] = v86;
  v159[1] = v79;
  v159[2] = v122;
  v159[3] = (uint32_t)(uintptr_t)(v81);
  sub_134CB60(&v158, (int)(uintptr_t)(v159), v36, v160);
  *((uint32_t *)v5 + 6) = (uint32_t)(uintptr_t)(v139);
  *((uint32_t *)v5 + 7) = (uint32_t)(uintptr_t)(v140);
  *((uint32_t *)v5 + 8) = (uint32_t)(uintptr_t)(v141);
  *((uint32_t *)v5 + 9) = (uint32_t)(uintptr_t)(v142);
  v39 = *v82;
  v40 = v82[2];
  v41 = v82[3];
  v89 = ((((int)((int)(uintptr_t)(v81) - v41) >> 2) - 1) << 6) + ((v86 - v112) >> 3) + ((int)(v40 - *v82) >> 3);
  if ( v89 <= 0 )
    goto LABEL_43;
  do
  {
    v42 = v86;
    v95 = (v86 - v79) >> 3;
    v92 = (v84 - v77) >> 3;
    v43 = v95;
    v44 = v86;
    if ( v95 == 0 )
    {
      v43 = 64;
      v44 = *(v81 - 1) + 512;
      v42 = v44;
    }
    v45 = (v84 - v77) >> 3;
    v113 = v84;
    if ( v92 == 0 )
    {
      v113 = *(v78 - 1) + 512;
      v45 = 64;
    }
    if ( v43 > v89 )
      v43 = v89;
    if ( v43 <= v45 )
      v45 = v43;
    v101 = v45;
    v46 = (v42 - (v44 - 8 * v45)) >> 3;
    if ( v46 > 0 )
    {
      v47 = (int *)v113;
      v104 = v44 - 8;
      v108 = v44 - 4;
      v48 = v113 - 4;
      v123 = -8 * v46;
      do
      {
        v47 -= 2;
        v49 = *(uint32_t *)(v123 + v104 + 8 * v46);
        v128 = v49;
        v129 = *(volatile int32_t **)(v123 + v108 + 8 * v46);
        if ( v129 != nullptr )
        {
          __sync_add_and_fetch(v129 + 1, 1);
          v49 = v128;
        }
        v128 = *v47;
        *v47 = v49;
        v118 = *(volatile int32_t **)((char *)v47 + v48 - v113 + 8);
        *(int *)((char *)v47 + v48 - v113 + 8) = (int)(uintptr_t)(v129);
        v72 = v48;
        v129 = v118;
        boost::detail::shared_count::Destroy(&v129);
        --v46;
        v48 = v72;
      }
      while ( v46 != 0 );
    }
    v50 = v95 - v101;
    if ( v95 - v101 < 0 )
    {
      v53 = ((unsigned int)v50 >> 6) | 0xFC000000;
    }
    else
    {
      if ( v50 <= 63 )
      {
        v51 = v92 - v101;
        v86 -= 8 * v101;
        if ( v92 - v101 < 0 )
          goto LABEL_52;
        goto LABEL_39;
      }
      v53 = v50 >> 6;
    }
    v81 += v53;
    v79 = *v81;
    v86 = *v81 + 8 * (v50 - (v53 << 6));
    v51 = v92 - v101;
    if ( v92 - v101 < 0 )
    {
LABEL_52:
      v52 = ((unsigned int)v51 >> 6) | 0xFC000000;
      goto LABEL_49;
    }
LABEL_39:
    if ( v51 <= 63 )
    {
      v84 -= 8 * v101;
      goto LABEL_41;
    }
    v52 = v51 >> 6;
LABEL_49:
    v78 += v52;
    v77 = *v78;
    v84 = *v78 + 8 * (v51 - (v52 << 6));
LABEL_41:
    v89 -= v101;
  }
  while ( v89 > 0 );
  v39 = *v82;
  v40 = v82[2];
  v41 = v82[3];
LABEL_43:
  v145[3] = v41;
  v145[0] = v39;
  v145[2] = v40;
  v145[1] = v82[1];
  v144 = *v75;
  v143 = *v76;
  return (void *)(uintptr_t)(sub_134E470(&v127, (int *)&v143, &v144, v145));
}


// ============================================================================
// Address:   0x1354d70 (size: 412 bytes)
// Symbol:    _ZN5boost9unordered6detail5tableINS1_3mapISaISt4pairIKSsiEESsiNS_4hashISsEESt8equal_toISsEEEE14create_bucketsEj
// Demangled: boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(unsigned int)
// ============================================================================
template <>
int boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
        int a1,
        __m128d a2,
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, int>>, std::string, int, boost::hash<std::string>, std::equal_to<std::string>>> *self,
        unsigned int a4)
{
  int v4;
  int result;
  uint32_t *v6;
  int v7;
  void *v8;
  int v9;
  double v10; // xmm1_8
  __m128d v11; // xmm1
  __m128d v12; // xmm1
  __m128d v13; // xmm2
  int v14;
  int v15;
  int v16;

  v4 = a4 + 1;
  if ( a4 + 1 > 0x3FFFFFFF )
    sub_18FFEE0(a1, v4);
  v14 = 4 * v4;
  result = (int)(uintptr_t)(operator new(4 * v4));
  if ( result != result + v14 )
  {
    v6 = (uint32_t *)result;
    do
    {
      if ( v6 != nullptr )
        *v6 = 0;
      ++v6;
    }
    while ( (uint32_t *)(result + v14) != v6 );
  }
  v7 = *((uint32_t *)self + 5);
  if ( v7 != 0 )
  {
    *(uint32_t *)(result + 4 * a4) = *(uint32_t *)(v7 + 4 * *((uint32_t *)self + 1));
    v8 = *((void **)self + 5);
    if ( v8 == nullptr )
    {
      v16 = result;
      __assert2(
        "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<ch"
        "ar> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::si"
        "ze_t = unsigned int]",
        "buckets_");
      v8 = *((void **)self + 5);
      result = v16;
    }
    v15 = result;
    operator delete(v8);
    result = v15;
  }
  v9 = 0;
  *((uint32_t *)self + 1) = a4;
  *((uint32_t *)self + 5) = result;
  if ( result == 0 )
    goto LABEL_14;
  g4_m128_lane_ref<double>(a2, 0) = (double)a4 * *((float *)self + 3);
  v10 = fabs(g4_m128_lane_ref<double>(a2, 0));
  if ( v10 < 4503599627370496.0 )
  {
    v9 = -1;
    *(uint64_t *)&g4_m128_lane_ref<double>(v11, 0) = COERCE_UNSIGNED_INT64(v10 + 4503599627370496.0 - 4503599627370496.0)
                                 | *(uint64_t *)&g4_m128_lane_ref<double>(a2, 0) & 0x8000000000000000LL;
    g4_m128_lane_ref<double>(a2, 0) = g4_m128_lane_ref<double>(v11, 0)
                    - COERCE_DOUBLE(g4_m128d_bits(_mm_cmpgt_sd(a2, v11), 0) & 0xBFF0000000000000LL);
    if ( g4_m128_lane_ref<double>(a2, 0) >= 4294967295.0 )
      goto LABEL_14;
  }
  else
  {
    v9 = -1;
    if ( g4_m128_lane_ref<double>(a2, 0) >= 4294967295.0 )
    {
LABEL_14:
      *((uint32_t *)self + 4) = v9;
      return result;
    }
  }
  v12 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v12, 0) = g4_m128_lane_ref<double>(a2, 0);
  v13 = _mm_cmple_pd(g4_to_m128d(xmmword_1C7C210), v12);
  *((uint32_t *)self + 4) = _mm_cvtsi128_si32(
                            _mm_xor_si128(
                              _mm_cvttpd_epi32(_mm_sub_pd(v12, _mm_and_pd(g4_to_m128d(xmmword_1C7C210), v13))),
                              _mm_slli_epi32(g4_to_m128i(v13), 0x1Fu)));
  return result;
}


// ============================================================================
// Address:   0x1354f10 (size: 1085 bytes)
// Symbol:    _ZN5boost9unordered6detail10table_implINS1_3mapISaISt4pairIKSsiEESsiNS_4hashISsEESt8equal_toISsEEEEixERS5_
// Demangled: boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::operator[](std::string const&)
// ============================================================================
template <>
int boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::opIndex(
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, int>>, std::string, int, boost::hash<std::string>, std::equal_to<std::string>>> *a1,
        const void **a2)
{
  unsigned int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  uint32_t **v16;
  unsigned int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t **v21;
  int v22;
  int v23;
  int *v24;
  int v26;
  int *v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  uint32_t *v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t **_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v34)) > _g4_s1 ? (4u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v35)) > _g4_s2 ? (8u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v37)) > _g4_s4 ? (28u + sizeof(_g4_t_v37)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);

  v2 = 0;
  v36 = 0;
  v3 = (char *)*a2;
  v4 = (int)(uintptr_t)(*a2) + *((uint32_t *)*a2 - 3);
  if ( *a2 != (const void *)v4 )
  {
    do
    {
      v5 = *v3++;
      v2 ^= (v2 << 6) + (v2 >> 2) - 1640531527 + v5;
    }
    while ( v3 != (char *)v4 );
    v36 = v2 % *((uint32_t *)a1 + 1);
  }
  v6 = 0;
  if ( *((uint32_t *)a1 + 2) != 0 )
  {
    v26 = *((uint32_t *)a1 + 5);
    if ( v26 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<ch"
        "ar> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::si"
        "ze_t = unsigned int]",
        "buckets_");
      v26 = *((uint32_t *)a1 + 5);
    }
    v6 = 0;
    v27 = *(int **)(v26 + 4 * v36);
    if ( v27 != nullptr )
    {
      v28 = *v27;
      if ( v28 != 0 )
        v6 = v28 - 8;
    }
  }
  while ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 12);
    if ( v2 != v7 )
    {
      if ( v7 % *((uint32_t *)a1 + 1) != v36 )
        break;
LABEL_8:
      v8 = *(uint32_t *)(v6 + 8);
      if ( v8 == 0 )
        break;
      goto LABEL_40;
    }
    if ( *((uint32_t *)*a2 - 3) != *(uint32_t *)(*(uint32_t *)v6 - 12) )
      goto LABEL_8;
    if ( memcmp(*a2, *(const void **)v6, *((uint32_t *)*a2 - 3)) == 0 )
      return v6;
    v8 = *(uint32_t *)(v6 + 8);
    if ( v8 == 0 )
      break;
LABEL_40:
    v6 = v8 - 8;
  }
  g4_std_compat::string_construct_copy(v37, a2);
  v9 = (int)(uintptr_t)(operator new(0x10u));
  v6 = v9;
  if ( v9 != 0 )
  {
    *(uint32_t *)(v9 + 8) = 0;
    *(uint32_t *)(v9 + 12) = 0;
    g4_std_compat::string_construct_copy(v9, v37);
  }
  if ( v6 != -4 )
    *(uint32_t *)(v6 + 4) = 0;
  g4_std::string::Destroy(v37);
  v10 = *((uint32_t *)a1 + 2);
  v11 = v10 + 1;
  if ( *((uint32_t *)a1 + 5) != 0 )
  {
    if ( v11 > *((uint32_t *)a1 + 4) )
    {
      v12 = (v10 >> 1) + v10;
      if ( v12 >= v11 )
        v11 = v12;
      v13 = sub_134C6F0((float *)a1 + 3, v11);
      if ( v13 != *((uint32_t *)a1 + 1) )
      {
        if ( *((uint32_t *)a1 + 5) == 0 )
          __assert2(
            "../../../../../lib/glitch/include/boost/unordered/detail/unique.hpp",
            591,
            "void boost::unordered::detail::table_impl<Types>::rehash_impl(std::size_t) [with Types = boost::unordered::d"
            "etail::map<std::allocator<std::pair<const std::basic_string<char>, int> >, std::basic_string<char>, int, boo"
            "st::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int]",
            "this->buckets_");
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
          a1,
          v13);
        v14 = *((uint32_t *)a1 + 5);
        v15 = *((uint32_t *)a1 + 1);
        if ( v14 == 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
            234,
            "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(st"
            "d::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_strin"
            "g<char>, int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::bas"
            "ic_string<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_"
            "bucket*, std::size_t = unsigned int]",
            "buckets_");
          v14 = *((uint32_t *)a1 + 5);
        }
        v16 = (uint32_t **)(v14 + 4 * v15);
        v17 = v2;
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 == nullptr )
            break;
          while ( 1 )
          {
            v19 = v18[1] % *((uint32_t *)a1 + 1);
            v20 = *((uint32_t *)a1 + 5);
            if ( v20 == 0 )
            {
              v33 = v18[1] % *((uint32_t *)a1 + 1);
              v35 = v16;
              __assert2(
                "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
                234,
                "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucke"
                "t(std::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::bas"
                "ic_string<char>, int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal"
                "_to<std::basic_string<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unorder"
                "ed::detail::ptr_bucket*, std::size_t = unsigned int]",
                "buckets_");
              v16 = v35;
              v19 = v33;
              v20 = *((uint32_t *)a1 + 5);
            }
            v21 = (uint32_t **)(v20 + 4 * v19);
            if ( *v21 == nullptr )
              break;
            *v16 = (uint32_t *)*v18;
            *v18 = **v21;
            **v21 = (uint32_t)(uintptr_t)(v18);
            v18 = *v16;
            if ( *v16 == nullptr )
              goto LABEL_28;
          }
          *v21 = (uint32_t *)(v16);
          v16 = (uint32_t **)v18;
        }
LABEL_28:
        v2 = v17;
      }
    }
  }
  else
  {
    v29 = sub_134C6F0((float *)a1 + 3, v11);
    if ( v29 < *((uint32_t *)a1 + 1) )
      v29 = *((uint32_t *)a1 + 1);
    boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
      a1,
      v29);
  }
  if ( v6 == 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/unordered/detail/buckets.hpp",
      383,
      "boost::unordered::detail::node_constructor<NodeAlloc>::node_pointer boost::unordered::detail::node_constructor<Nod"
      "eAlloc>::release() [with NodeAlloc = std::allocator<boost::unordered::detail::ptr_node<std::pair<const std::basic_"
      "string<char>, int> > >, boost::unordered::detail::node_constructor<NodeAlloc>::node_pointer = boost::unordered::de"
      "tail::ptr_node<std::pair<const std::basic_string<char>, int> >*]",
      "node_ && node_constructed_");
  *(uint32_t *)(v6 + 12) = v2;
  v22 = v2 % *((uint32_t *)a1 + 1);
  v23 = *((uint32_t *)a1 + 5);
  if ( v23 == 0 )
  {
    v34 = v2 % *((uint32_t *)a1 + 1);
    __assert2(
      "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
      234,
      "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::siz"
      "e_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, int"
      "> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > "
      ">, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
      "buckets_");
    v22 = v34;
    v23 = *((uint32_t *)a1 + 5);
  }
  v24 = (int *)(v23 + 4 * v22);
  if ( *v24 != 0 )
  {
    *(uint32_t *)(v6 + 8) = *(uint32_t *)*v24;
    *(uint32_t *)*v24 = v6 + 8;
  }
  else
  {
    v30 = sub_134C680((uint32_t *)a1 + 5, *((uint32_t *)a1 + 1));
    v31 = v6 + 8;
    if ( *(uint32_t *)v30 != 0 )
    {
      v32 = (uint32_t *)sub_134C680((uint32_t *)a1 + 5, *(uint32_t *)(*(uint32_t *)v30 + 4) % *((uint32_t *)a1 + 1));
      v31 = v6 + 8;
      *v32 = v6 + 8;
    }
    *v24 = v30;
    *(uint32_t *)(v6 + 8) = *(uint32_t *)v30;
    *(uint32_t *)v30 = v31;
  }
  ++*((uint32_t *)a1 + 2);
  return v6;
}


// ============================================================================
// Address:   0x1355a70 (size: 168 bytes)
// Symbol:    _ZN5boost14singleton_poolINS_18pool_allocator_tagELj224EN6glotv323async_client_new_deleteENS_5mutexELj16ELj0EE8get_poolEv
// Demangled: boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex,16u,0u>::get_pool(void)
// ============================================================================
static pthread_mutex_t *g4_b2_get_pool_224u()
{
  int v0;
  uint8_t v2[24];

  if ( g4_fnstatic_f10bd83e67 == 0 )
  {
    g4_fnstatic_f10bd83e67 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v2,
          v0,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 224;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_2118578) = (uintptr_t)(16);
      *(uintptr_t *)(unk_211857C) = (uintptr_t)(0);
    }
  }
  return (pthread_mutex_t *)(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
}


// ============================================================================
// Address:   0x1355b20 (size: 168 bytes)
// Symbol:    _ZN5boost14singleton_poolINS_18pool_allocator_tagELj192EN6glotv321event_list_new_deleteENS_5mutexELj16ELj0EE8get_poolEv
// Demangled: boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::get_pool(void)
// ============================================================================
static pthread_mutex_t *g4_b2_get_pool_192u()
{
  int v0;
  uint8_t v2[24];

  if ( g4_fnstatic_3607360f1c == 0 )
  {
    g4_fnstatic_3607360f1c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v2,
          v0,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 192;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_21185B8) = (uintptr_t)(16);
      unk_21185BC = 0;
    }
  }
  return (pthread_mutex_t *)(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
}


// ============================================================================
// Address:   0x1355bd0 (size: 632 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv315AsyncHTTPClientENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_23async_client_new_deleteENS_5mutexELj16ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient *,boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient>,boost::pool_allocator<glotv3::AsyncHTTPClient,glotv3::async_client_new_delete,boost::mutex,16u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_32_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  int v1;
  int v2;
  int v3;
  int owner;
  int i;
  int *v6;
  int v7;
  int v8;
  int v9;
  unsigned int nusers;
  int v11;
  unsigned int v12;
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v15)) > _g4_s1 ? (20u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v17)) > _g4_s3 ? (60u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  if ( g4_fnstatic_f10bd83e67 == 0 )
  {
    g4_fnstatic_f10bd83e67 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      v1 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
             nullptr);
      if ( v1 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v14,
          v1,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 224;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_2118578) = (uintptr_t)(16);
      *(uintptr_t *)(unk_211857C) = (uintptr_t)(0);
    }
  }
  do
    v2 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v15,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
        owner != 0;
        owner = *(v6 - 1) )
  {
    v6 = (int *)(owner + i - 4);
    i = *v6;
  }
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::AsyncHTTPClient::Self *, boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>, boost::pool_allocator<glotv3::AsyncHTTPClient::Self, glotv3::async_client_new_delete, boost::mutex::Self, 16u, 0u>> *))self)(self);
  if ( g4_fnstatic_f10bd83e67 == 0 )
  {
    g4_fnstatic_f10bd83e67 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      v7 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
             nullptr);
      if ( v7 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v16,
          v7,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 224;
      boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_2118578) = (uintptr_t)(16);
      *(uintptr_t *)(unk_211857C) = (uintptr_t)(0);
    }
  }
  do
    v8 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
  while ( v8 == 4 );
  if ( v8 != 0 )
  {
    boost::lock_error::Construct(
      v9,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v17,
      v8,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
            & 3);
    v11 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::async_client_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v11 = nusers;
    }
    if ( v11 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::async_client_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v12 = (boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
       % nusers != 0)
      + boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
      / nusers;
  if ( v12 != 0 )
    sub_60EFD0(
      (uint32_t **)&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count,
      self,
      nusers * v12,
      nusers);
  return sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
}


// ============================================================================
// Address:   0x1355e50 (size: 632 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv39EventListENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorIS3_NS2_21event_list_new_deleteENS_5mutexELj16ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventList *,boost::detail::sp_ms_deleter<glotv3::EventList>,boost::pool_allocator<glotv3::EventList,glotv3::event_list_new_delete,boost::mutex,16u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_33_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *self)
{
  int v1;
  int v2;
  int v3;
  int owner;
  int i;
  int *v6;
  int v7;
  int v8;
  int v9;
  unsigned int nusers;
  int v11;
  unsigned int v12;
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v15)) > _g4_s1 ? (20u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v17)) > _g4_s3 ? (60u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  if ( g4_fnstatic_3607360f1c == 0 )
  {
    g4_fnstatic_3607360f1c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      v1 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
             nullptr);
      if ( v1 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v14,
          v1,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 192;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_21185B8) = (uintptr_t)(16);
      unk_21185BC = 0;
    }
  }
  do
    v2 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v15,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
        owner != 0;
        owner = *(v6 - 1) )
  {
    v6 = (int *)(owner + i - 4);
    i = *v6;
  }
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventList::Self *, boost::detail::sp_ms_deleter<glotv3::EventList::Self>, boost::pool_allocator<glotv3::EventList::Self, glotv3::event_list_new_delete, boost::mutex::Self, 16u, 0u>> *))self)(self);
  if ( g4_fnstatic_3607360f1c == 0 )
  {
    g4_fnstatic_3607360f1c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      v7 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
             nullptr);
      if ( v7 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v16,
          v7,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 192;
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_21185B8) = (uintptr_t)(16);
      unk_21185BC = 0;
    }
  }
  do
    v8 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
  while ( v8 == 4 );
  if ( v8 != 0 )
  {
    boost::lock_error::Construct(
      v9,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v17,
      v8,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
            & 3);
    v11 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_list_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v11 = nusers;
    }
    if ( v11 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_list_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v12 = (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
       % nusers != 0)
      + boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
      / nusers;
  if ( v12 != 0 )
    sub_60EFD0(
      (uint32_t **)&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count,
      self,
      nusers * v12,
      nusers);
  return sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
}


// ============================================================================
// Address:   0x1356270 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv319EventOfDataBufferedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered *,boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_34_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_134E810();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfDataBuffered::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13560D0(self);
}


// ============================================================================
// Address:   0x13562a0 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfTimerFiredENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired *,boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_35_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_134E810();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfTimerFired::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13560D0(self);
}


// ============================================================================
// Address:   0x13562d0 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv317EventOfUserDeviceENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice *,boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_36_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_134E810();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfUserDevice::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_13560D0(self);
}


// ============================================================================
// Address:   0x1361c60 (size: 27 bytes)
// Symbol:    _ZN5boost4asio6detail12service_baseINS0_23socket_acceptor_serviceINS0_2ip3tcpEEEED2Ev
// Demangled: boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::~service_base()
// ============================================================================
// Alternative name is '_ZN5boost4asio6detail12service_baseINS0_23socket_acceptor_serviceINS0_2ip3tcpEEEED1Ev'
static void g4_b2_service_base_acceptor_d2(
        boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922D8);
}


// ============================================================================
// Address:   0x1361c80 (size: 27 bytes)
// Symbol:    _ZN5boost4asio23socket_acceptor_serviceINS0_2ip3tcpEED2Ev
// Demangled: boost::asio::socket_acceptor_service<boost::asio::ip::tcp>::~socket_acceptor_service()
// ============================================================================
// Alternative name is '_ZN5boost4asio23socket_acceptor_serviceINS0_2ip3tcpEED1Ev'
static void g4_b2_acceptor_service_d2(
        boost::asio::socket_acceptor_service<boost::asio::ip::tcp> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922D8);
}


// [Deduplicated: canonical definition in boost_runtime_part01.cpp]
void g4_noop_dtor();


// ============================================================================
// Address:   0x1361cb0 (size: 9 bytes)
// Symbol:    _ZN5boost4asio23socket_acceptor_serviceINS0_2ip3tcpEE16shutdown_serviceEv
// Demangled: boost::asio::socket_acceptor_service<boost::asio::ip::tcp>::shutdown_service(void)
// ============================================================================
static void g4_b2_acceptor_shutdown_service()
{
  ;
}


// ============================================================================
// Address:   0x1361cc0 (size: 45 bytes)
// Symbol:    _ZN5boost4asio23socket_acceptor_serviceINS0_2ip3tcpEED0Ev
// Demangled: boost::asio::socket_acceptor_service<boost::asio::ip::tcp>::~socket_acceptor_service()
// ============================================================================
static void g4_b2_acceptor_service_d0(
        boost::asio::socket_acceptor_service<boost::asio::ip::tcp> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922D8);
  operator delete(self);
}


// ============================================================================
// Address:   0x1361cf0 (size: 45 bytes)
// Symbol:    _ZN5boost4asio6detail12service_baseINS0_23socket_acceptor_serviceINS0_2ip3tcpEEEED0Ev
// Demangled: boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::~service_base()
// ============================================================================
static void g4_b2_service_base_acceptor_d0(
        boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922D8);
  operator delete(self);
}


// ============================================================================
// Address:   0x13620b0 (size: 523 bytes)
// Symbol:    _ZN5boost4asio6detail25reactive_socket_accept_opINS0_12basic_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS5_EEEES5_NS_3_bi6bind_tIvNS_4_mfi3mf2IvN6glotv39TCPServerENS_10shared_ptrINSD_13TCPConnectionEEERKNS_6system10error_codeEEENS9_5list3INS9_5valueIPSE_EENSO_ISH_EEPFNS_3argILi1EEEvEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESL_j
// Demangled: boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::TCPServer,boost::shared_ptr<glotv3::TCPConnection>,boost::system::error_code const&>,boost::_bi::list3<boost::_bi::value<glotv3::TCPServer*>,boost::_bi::value<boost::shared_ptr<glotv3::TCPConnection>>,boost::arg<1> (*)(void)>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
int boost::asio::detail::reactive_socket_accept_op<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::TCPServer::Self,boost::shared_ptr<glotv3::TCPConnection::Self>,boost::system::error_code::Self const&>,boost::_bi::list3<boost::_bi::value<glotv3::TCPServer::Self*>,boost::_bi::value<boost::shared_ptr<glotv3::TCPConnection::Self>>,boost::arg<1> (*)(void)>>>::do_complete(
        int a1,
        uint32_t *a2)
{
  int v2;
  volatile int32_t *v3;
  volatile int32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  volatile int32_t *v9;
  int (*v10)(int, int *, uint32_t *);
  volatile int32_t *v11;
  volatile int32_t *v12;
  typedef int _g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef uint32_t _g4_t_v20[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);

  v2 = a2[13];
  v15 = (char *)a2[12];
  v17 = a2[14];
  v18 = a2[15];
  v3 = (volatile int32_t *)a2[16];
  v16 = v2;
  v19 = v3;
  if ( v3 != nullptr )
    __sync_add_and_fetch(v3 + 1, 1);
  v4 = (volatile int32_t *)a2[16];
  v5 = a2[4];
  v20[0] = a2[3];
  v20[1] = v5;
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v4 + 8))(v4);
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v4 + 12))(v4);
  }
  v6 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v6 != 0 && (v7 = *(uint32_t **)(v6 + 4)) != nullptr && *v7 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 68);
    *v7 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  result = a1;
  if ( a1 != 0 )
  {
    v9 = v19;
    if ( v19 != nullptr )
      __sync_add_and_fetch(v19 + 1, 1);
    v10 = (int (*)(int, int *, uint32_t *))v15;
    if ( ((uint8_t)(uintptr_t)(v15) & 1) != 0 )
      v10 = *(int (**)(int, int *, uint32_t *))&v15[*(uint32_t *)(v17 + v16) - 1];
    v13 = v18;
    v14 = v19;
    if ( v19 != nullptr )
      __sync_add_and_fetch(v19 + 1, 1);
    result = v10(v16 + v17, &v13, v20);
    v11 = v14;
    if ( v14 != nullptr )
    {
      result = __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = (*(int (**)(volatile int32_t *))(*v11 + 8))(v11);
        if ( __sync_fetch_and_add(v11 + 2, 0xFFFFFFFF) == 1 )
          result = (*(int (**)(volatile int32_t *))(*v11 + 12))(v11);
      }
    }
    if ( v9 != nullptr )
    {
      result = __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = (*(int (**)(volatile int32_t *))(*v9 + 8))(v9);
        if ( __sync_fetch_and_add(v9 + 2, 0xFFFFFFFF) == 1 )
          result = (*(int (**)(volatile int32_t *))(*v9 + 12))(v9);
      }
    }
    _mm_sfence();
  }
  v12 = v19;
  if ( v19 != nullptr )
  {
    result = __sync_fetch_and_add(v19 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = (*(int (**)(volatile int32_t *))(*v12 + 8))(v12);
      if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
        return (*(int (**)(volatile int32_t *))(*v12 + 12))(v12);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x13622c0 (size: 1345 bytes)
// Symbol:    _ZN5boost4asio6detail30reactive_socket_accept_op_baseINS0_12basic_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS5_EEEES5_E10do_performEPNS1_10reactor_opE
// Demangled: boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ip::tcp>::do_perform(boost::asio::detail::reactor_op *)
// ============================================================================
template <>
bool boost::asio::detail::reactive_socket_accept_op_base<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ip::tcp>::do_perform(
        int a1)
{
  uint32_t *v1;
  struct sockaddr *v2;
  uint32_t *v3;
  socklen_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  char v15; // di
  int v16;
  int v17;
  bool result;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int *v34;
  int v35;
  int v36;
  int **v37;
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef struct sockaddr *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char _g4_t_v58;
  typedef pthread_mutex_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef pthread_mutex_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef socklen_t _g4_t_v63;
  typedef int _g4_t_v64;
  typedef socklen_t _g4_t_addr_len;
  typedef int _g4_t_v66[2];
  typedef g4_x86_epoll_event _g4_t_event;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v49)) > _g4_s0 ? (12u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v50)) > _g4_s1 ? (12u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v51)) > _g4_s2 ? (12u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v52)) > _g4_s3 ? (12u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v53)) > _g4_s4 ? (16u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v54)) > _g4_s5 ? (16u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v55)) > _g4_s6 ? (20u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v56)) > _g4_s7 ? (20u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v57)) > _g4_s8 ? (24u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v58)) > _g4_s9 ? (28u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v59)) > _g4_s10 ? (28u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v60)) > _g4_s11 ? (32u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v61)) > _g4_s12 ? (32u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v62)) > _g4_s13 ? (36u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v63)) > _g4_s14 ? (40u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v64)) > _g4_s15 ? (56u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_addr_len)) > _g4_s16 ? (64u + sizeof(_g4_t_addr_len)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v66)) > _g4_s17 ? (68u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_event)) > _g4_s18 ? (76u + sizeof(_g4_t_event)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_addr_len &addr_len = *reinterpret_cast<_g4_t_addr_len *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 76u);

  v1 = (uint32_t *)a1;
  v2 = *(struct sockaddr **)(a1 + 44);
  if ( v2 != nullptr )
  {
    v63 = 28;
    v3 = (uint32_t *)(a1 + 12);
    v55 = v2;
    v4 = &v63;
  }
  else
  {
    v63 = 0;
    v3 = (uint32_t *)(a1 + 12);
    v4 = nullptr;
    v55 = nullptr;
  }
  v58 = *(uint8_t *)(a1 + 32);
  v5 = *(uint32_t *)(a1 + 28);
  v60 = v5;
  if ( v5 != -1 )
  {
    if ( v4 != nullptr )
    {
      v57 = (uint32_t *)a1;
      while ( 1 )
      {
        v49 = v3;
        *(uint32_t *)__errno(v5, v3) = 0;
        addr_len = *v4;
        v62 = accept(v60, v55, &addr_len);
        *v4 = addr_len;
        v8 = (int)(uintptr_t)(sub_18F81E0(v7, v6));
        v11 = (uint32_t *)__errno(v10, v9);
        v13 = v49;
        *v49 = *v11;
        v49[1] = v8;
        if ( v62 != -1 )
          break;
        v14 = (int)(uintptr_t)(sub_18F81E0(v12, v49));
        v5 = a1;
        v3 = v49;
        if ( v14 != *(uint32_t *)(a1 + 16) )
        {
          v1 = (uint32_t *)a1;
          v15 = v58;
          if ( (uintptr_t)sub_18F81E0(a1, v49) != *(uint32_t *)(a1 + 16) )
            goto LABEL_14;
          goto LABEL_9;
        }
        if ( *(uint32_t *)(a1 + 12) != 4 )
          goto LABEL_29;
      }
    }
    else
    {
      v39 = v3;
      v57 = (uint32_t *)a1;
      while ( 1 )
      {
        *(uint32_t *)__errno(v5, v3) = 0;
        addr_len = 0;
        v62 = accept(v60, v55, nullptr);
        v42 = (int)(uintptr_t)(sub_18F81E0(v41, v40));
        *v39 = *(uint32_t *)__errno(v44, v43);
        v39[1] = v42;
        if ( v62 != -1 )
          break;
        v45 = (int)(uintptr_t)(sub_18F81E0(v12, v13));
        v3 = (uint32_t *)a1;
        if ( v45 != *(uint32_t *)(a1 + 16) )
        {
          v1 = (uint32_t *)a1;
          goto LABEL_13;
        }
        if ( *(uint32_t *)(a1 + 12) != 4 )
        {
LABEL_29:
          v1 = v57;
          goto LABEL_13;
        }
      }
    }
    v57[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v12, v13));
    v64 = v62;
    v27 = v57[11];
    v57[3] = 0;
    if ( v27 != 0 && (uint32_t)v63 > 0x80 )
    {
      event.data.fd = (int)(uintptr_t)(sub_18F81E0(v26, v25));
      event.events = 22;
      if ( boost::system::error_code::unspecified_bool_true != nullptr )
        sub_1361D8C((int *)&event);
    }
    v28 = v57[9];
    if ( *(uint32_t *)(v28 + 4) == -1 )
    {
      v53 = *(uint32_t *)(*(uint32_t *)v28 + 20);
      v61 = (pthread_mutex_t *)(v53 + 52);
      pthread_mutex_lock((pthread_mutex_t *)(v53 + 52));
      v30 = v53;
      v31 = *(uint32_t **)(v53 + 60);
      if ( v31 != nullptr )
      {
        *(uint32_t *)(v53 + 60) = v31[3];
        v59 = (pthread_mutex_t *)(v31 + 5);
      }
      else
      {
        v46 = (int)(uintptr_t)(operator new(0x40u));
        *(uint32_t *)v46 = 0;
        *(uint32_t *)(v46 + 4) = (uint32_t)(uintptr_t)(boost::asio::detail::epoll_reactor::descriptor_state::do_complete);
        *(uint32_t *)(v46 + 8) = 0;
        v52 = (uint32_t *)v46;
        v59 = (pthread_mutex_t *)(v46 + 20);
        v56 = pthread_mutex_init((pthread_mutex_t *)(v46 + 20), nullptr);
        v66[1] = (int)(uintptr_t)(sub_18F81E0(v48, v47));
        v66[0] = v56;
        v31 = v52;
        v30 = v53;
        if ( v56 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
          sub_1361D1D(v66, "mutex");
        v52[9] = 0;
        v52[10] = 0;
        v52[11] = 0;
        v52[12] = 0;
        v52[13] = 0;
        v52[14] = 0;
      }
      v32 = *(uint32_t *)(v30 + 56);
      v31[4] = 0;
      v31[3] = v32;
      v33 = *(uint32_t *)(v30 + 56);
      if ( v33 != 0 )
        *(uint32_t *)(v33 + 16) = (uint32_t)(uintptr_t)(v31);
      *(uint32_t *)(v30 + 56) = (uint32_t)(uintptr_t)(v31);
      v54 = v30;
      v50 = v31;
      pthread_mutex_unlock(v61);
      *(uint32_t *)(v28 + 12) = (uint32_t)(uintptr_t)(v50);
      pthread_mutex_lock(v59);
      *(uint32_t *)(*(uint32_t *)(v28 + 12) + 24) = v54;
      *(uint32_t *)(*(uint32_t *)(v28 + 12) + 28) = v62;
      *(uint8_t *)(*(uint32_t *)(v28 + 12) + 60) = 0;
      pthread_mutex_unlock(v59);
      event.data.u64 = 0;
      event.events = 0x8000001B;
      *(uint32_t *)(*(uint32_t *)(v28 + 12) + 32) = -2147483621;
      event.data.fd = *(uint32_t *)(v28 + 12);
      if ( g4_epoll_ctl_x86(*(uint32_t *)(v54 + 36), 1, v62, &event) != 0
        && (v37 = (int **)__errno(v35, v34), v34 = *v37, *v37 != nullptr) )
      {
        v51 = *v37;
        v38 = (int)(uintptr_t)(sub_18F81E0(v35, v34));
        v29 = v51;
        v57[4] = v38;
        v57[3] = (uint32_t)(uintptr_t)(v51);
      }
      else
      {
        *(uint8_t *)(v28 + 8) = 80;
        *(uint32_t *)(v28 + 4) = v62;
        v57[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v35, v34));
        v36 = v57[10];
        v57[3] = 0;
        *(uint32_t *)(v28 + 16) = v36;
        if ( v57[3] == 0 )
          return true;
      }
    }
    else
    {
      if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
      {
        dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
        _cxa_guard_release((__guard *)&byte_20D3F80);
        __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
      }
      v29 = (int *)(&dword_20D3F88);
      v57[3] = 1;
      v57[4] = (uint32_t)(uintptr_t)(&dword_20D3F88);
    }
    if ( v64 != -1 )
    {
      sub_1361E10(&v64, (int)(uintptr_t)(v29), v26);
      return true;
    }
    return true;
  }
  do
  {
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(sub_18F81E0(v5, v3));
    *(uint32_t *)(a1 + 12) = 9;
  }
  while ( (uintptr_t)sub_18F81E0(v20, v19) == *(uint32_t *)(a1 + 16) && *(uint32_t *)(a1 + 12) == 4 );
LABEL_13:
  v15 = v58;
  if ( (uintptr_t)sub_18F81E0(v5, v3) == v1[4] )
  {
LABEL_9:
    if ( v1[3] == 11 )
      return v15 & 1;
  }
LABEL_14:
  if ( (uintptr_t)sub_18F81E0(v17, v16) == v1[4] && v1[3] == 11 )
    return v15 & 1;
  v23 = (int)(uintptr_t)(sub_18F81E0(v22, v21));
  v24 = v1[3];
  if ( v23 == v1[4] && v24 == 103 )
    return (v15 & 4) != 0;
  result = (v15 & 4) != 0;
  if ( v24 != 71 )
    return true;
  return result;
}


// ============================================================================
// Address:   0x1362810 (size: 863 bytes)
// Symbol:    _ZN5boost4asio6detail16service_registry6createINS0_23socket_acceptor_serviceINS0_2ip3tcpEEEEEPNS0_10io_service7serviceERS8_
// Demangled: boost::asio::io_service::service * boost::asio::detail::service_registry::create<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>(boost::asio::io_service&)
// ============================================================================
template <>
boost::asio::io_service::service *boost::asio::detail::service_registry::create<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>(
        boost::asio::detail::service_registry *self)
{
  uint32_t *v1;
  pthread_mutex_t *nusers;
  void *owner;
  pthread_mutex_t *v4;
  boost::asio::io_service::service *v6;
  int v7;
  void *v8;
  int v9;
  pthread_mutex_t *v10;
  boost::asio::io_service::service *kind;
  void *v12;
  uint32_t *v13;
  int v14;
  int v15;
  pthread_cond_t *v16;
  boost::asio::io_service::service *v17;
  void *v18;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_fd;
  typedef int _g4_t_v23;
  typedef int _g4_t_spins;
  typedef int _g4_t_v25;
  typedef pthread_mutex_t *_g4_t_v26;
  typedef pthread_mutex_t *_g4_t_v27;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t *_g4_t_v29;
  typedef pthread_mutex_t *_g4_t_v30;
  typedef boost::asio::io_service::service *_g4_t_v31;
  typedef g4_x86_epoll_event _g4_t_event;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_fd)) > _g4_s0 ? (8u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_spins)) > _g4_s2 ? (24u + sizeof(_g4_t_spins)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v25)) > _g4_s3 ? (24u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v26)) > _g4_s4 ? (28u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v27)) > _g4_s5 ? (28u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_mutex)) > _g4_s6 ? (32u + sizeof(_g4_t_mutex)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v29)) > _g4_s7 ? (32u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v30)) > _g4_s8 ? (36u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v31)) > _g4_s9 ? (40u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_event)) > _g4_s10 ? (52u + sizeof(_g4_t_event)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_spins &spins = *reinterpret_cast<_g4_t_spins *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 52u);

  v1 = (uint32_t *)operator new(0x18u);
  v1[3] = (uint32_t)(uintptr_t)(self);
  v1[1] = 0;
  v1[2] = 0;
  v1[4] = 0;
  *v1 = ((uint32_t)(uintptr_t)&off_2093DD0);
  v23 = *(uint32_t *)self;
  mutex = (pthread_mutex_t *)(*(uint32_t *)self + 4);
  pthread_mutex_lock(mutex);
  nusers = *(pthread_mutex_t **)(v23 + 12);
  if ( nusers != nullptr )
  {
    if ( &unk_20D3FA8 != nullptr )
    {
      while ( 1 )
      {
        owner = (void *)((int32_t *)(nusers))[2];
        if ( owner != nullptr && owner == &unk_20D3FA8 )
          goto LABEL_7;
        nusers = (pthread_mutex_t *)((int32_t *)(nusers))[4];
        if ( nusers == nullptr )
          goto LABEL_12;
      }
    }
    do
      nusers = (pthread_mutex_t *)((int32_t *)(nusers))[4];
    while ( nusers != nullptr );
  }
LABEL_12:
  pthread_mutex_unlock(mutex);
  v6 = (boost::asio::io_service::service *)(uintptr_t)g4_asio_create_epoll_reactor((uint32_t)(uintptr_t)(*(boost::asio::detail::service_registry **)(v23 + 8)));
  *((uint32_t *)v6 + 1) = 0;
  *((uint32_t *)v6 + 2) = (uint32_t)(uintptr_t)(&unk_20D3FA8);
  v26 = (pthread_mutex_t *)v6;
  pthread_mutex_lock(mutex);
  v7 = *(uint32_t *)(v23 + 12);
  if ( v7 == 0 )
  {
LABEL_20:
    ((int32_t *)(v26))[4] = *(uint32_t *)(v23 + 12);
    *(uint32_t *)(v23 + 12) = (uint32_t)(uintptr_t)(v26);
    nusers = v26;
    goto LABEL_7;
  }
  nusers = *(pthread_mutex_t **)(v23 + 12);
  if ( &unk_20D3FA8 == nullptr )
  {
    do
      v7 = *(uint32_t *)(v7 + 16);
    while ( v7 != 0 );
    goto LABEL_20;
  }
  while ( 1 )
  {
    v8 = (void *)((int32_t *)(nusers))[2];
    if ( v8 != nullptr && v8 == &unk_20D3FA8 )
      break;
    nusers = (pthread_mutex_t *)((int32_t *)(nusers))[4];
    if ( nusers == nullptr )
      goto LABEL_20;
  }
  (*(void (**)(pthread_mutex_t *))(((int32_t *)(v26))[0] + 4))(v26);
LABEL_7:
  pthread_mutex_unlock(mutex);
  v1[5] = (uint32_t)(uintptr_t)(nusers);
  spins = G4_MUTEX_SPINS(nusers);
  pthread_mutex_lock((pthread_mutex_t *)(spins + 24));
  v4 = (pthread_mutex_t *)(spins + 24);
  if ( *(uint8_t *)(spins + 61) != 0 || *(uint32_t *)(spins + 28) != 0 )
    goto LABEL_9;
  v29 = **(pthread_mutex_t ***)(spins + 12);
  v30 = (pthread_mutex_t *)(&((int32_t *)(v29))[0] + 1);
  pthread_mutex_lock((pthread_mutex_t *)(&((int32_t *)(v29))[0] + 1));
  v9 = spins;
  v10 = (pthread_mutex_t *)(spins + 24);
  kind = (boost::asio::io_service::service *)((int32_t *)(v29))[3];
  if ( kind != nullptr )
  {
    if ( &unk_20D3FA8 != nullptr )
    {
      while ( 1 )
      {
        v12 = *((void **)kind + 2);
        if ( v12 != nullptr && v12 == &unk_20D3FA8 )
          goto LABEL_27;
        kind = *((boost::asio::io_service::service **)kind + 4);
        if ( kind == nullptr )
          goto LABEL_32;
      }
    }
    do
      kind = *((boost::asio::io_service::service **)kind + 4);
    while ( kind != nullptr );
  }
LABEL_32:
  pthread_mutex_unlock(v30);
  v17 = (boost::asio::io_service::service *)(uintptr_t)g4_asio_create_epoll_reactor((uint32_t)(((int32_t *)(v29))[2]));
  *((uint32_t *)v17 + 1) = 0;
  *((uint32_t *)v17 + 2) = (uint32_t)(uintptr_t)(&unk_20D3FA8);
  v31 = v17;
  pthread_mutex_lock(v30);
  v9 = spins;
  v10 = (pthread_mutex_t *)(spins + 24);
  kind = (boost::asio::io_service::service *)((int32_t *)(v29))[3];
  if ( kind != nullptr )
  {
    if ( &unk_20D3FA8 != nullptr )
    {
      while ( 1 )
      {
        v18 = *((void **)kind + 2);
        if ( v18 != nullptr && v18 == &unk_20D3FA8 )
          break;
        kind = *((boost::asio::io_service::service **)kind + 4);
        if ( kind == nullptr )
          goto LABEL_40;
      }
      (*(void (**)(boost::asio::io_service::service *))(*(uint32_t *)v31 + 4))(v31);
      v10 = (pthread_mutex_t *)(spins + 24);
      v9 = spins;
      goto LABEL_27;
    }
    v19 = ((int32_t *)(v29))[3];
    do
      v19 = *(uint32_t *)(v19 + 16);
    while ( v19 != 0 );
LABEL_40:
    kind = (boost::asio::io_service::service *)((int32_t *)(v29))[3];
  }
  *((uint32_t *)v31 + 4) = (uint32_t)(uintptr_t)(kind);
  ((int32_t *)(v29))[3] = (int)(uintptr_t)(v31);
  kind = v31;
LABEL_27:
  v25 = v9;
  v27 = v10;
  pthread_mutex_unlock(v30);
  *(uint32_t *)(v25 + 28) = (uint32_t)(uintptr_t)(kind);
  v13 = *(uint32_t **)(v25 + 56);
  *(uint32_t *)(v25 + 32) = 0;
  v14 = v25 + 32;
  v4 = v27;
  if ( v13 != nullptr )
  {
    *v13 = v14;
    *(uint32_t *)(v25 + 56) = v14;
  }
  else
  {
    *(uint32_t *)(v25 + 56) = v14;
    *(uint32_t *)(v25 + 52) = v14;
  }
  v15 = *(uint32_t *)(v25 + 64);
  if ( v15 != 0 )
  {
    *(uint32_t *)(v25 + 64) = *(uint32_t *)(v15 + 20);
    v16 = *(pthread_cond_t **)(v15 + 4);
    *(uint32_t *)(v15 + 20) = 0;
    ((uint8_t *)(v16))[4] = 1;
    pthread_mutex_unlock(v27);
    pthread_cond_signal(v16);
    return (boost::asio::io_service::service *)v1;
  }
  if ( *(uint8_t *)(v25 + 44) == 0 )
  {
    v20 = *(uint32_t *)(v25 + 28);
    if ( v20 != 0 )
    {
      *(uint8_t *)(v25 + 44) = 1;
      event.data.u64 = (unsigned int)(v20 + 28);
      fd = *(uint32_t *)(v20 + 28);
      v21 = *(uint32_t *)(v20 + 36);
      event.events = 0x80000009;
      g4_epoll_ctl_x86(v21, 3, fd, &event);
      v4 = v27;
    }
  }
LABEL_9:
  pthread_mutex_unlock(v4);
  return (boost::asio::io_service::service *)v1;
}


// ============================================================================
// Address:   0x1366da0 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_37_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093EC8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x1366e00 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_38_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093EA8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x1366e60 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_39_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093E88);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x1366ec0 (size: 89 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything *,boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
// Alternative name is '_ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED1Ev'
static void g4_sp_counted_pda_40_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093E48);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x1366f20 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_41_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x1366f50 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_42_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x1366f60 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_43_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x1366f90 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_44_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x1366fa0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_45_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x1366fd0 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_46_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x1366fe0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything *,boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
static int g4_sp_counted_pda_47_get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x1367010 (size: 12 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything *,boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::get_untyped_deleter(void)
// ============================================================================
static char * g4_sp_counted_pda_48_get_untyped_deleter(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x1367020 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything *,boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_49_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093E48);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x1367090 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_50_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093E88);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x1367100 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_51_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093EA8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x1367170 (size: 97 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::~sp_counted_impl_pda()
// ============================================================================
static void g4_sp_counted_pda_52_sp_counted_impl_pda(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093EC8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x1367630 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_53_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x1367660 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_54_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x1367690 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_55_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x13676c0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything *,boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::dispose(void)
// ============================================================================
static int g4_sp_counted_pda_56_dispose(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x1367ab0 (size: 330 bytes)
// Symbol:    _ZN5boost4asio6detail28reactive_socket_send_op_baseINS0_15const_buffers_1EE10do_performEPNS1_10reactor_opE
// Demangled: boost::asio::detail::reactive_socket_send_op_base<boost::asio::const_buffers_1>::do_perform(boost::asio::detail::reactor_op *)
// ============================================================================
template <>
int boost::asio::detail::reactive_socket_send_op_base<boost::asio::const_buffers_1>::do_perform(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  ssize_t v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_flags;
  typedef int _g4_t_fd;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef struct msghdr _g4_t_message;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_flags)) > _g4_s2 ? (8u + sizeof(_g4_t_flags)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_fd)) > _g4_s3 ? (12u + sizeof(_g4_t_fd)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_message)) > _g4_s7 ? (36u + sizeof(_g4_t_message)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_flags &flags = *reinterpret_cast<_g4_t_flags *>(_g4_sf + 8u);
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_message &message = *reinterpret_cast<_g4_t_message *>(_g4_sf + 36u);

  v1 = a1[8];
  v22 = a1[9];
  v23 = v22;
  v18 = a1 + 3;
  v2 = a1[10];
  v3 = a1[7];
  BYTE1(v2) |= 0x40u;
  v21 = v1;
  fd = v3;
  flags = v2;
  do
  {
    *(uint32_t *)__errno(v3, v1) = 0;
    memset(&message, 0, sizeof(message));
    message.msg_iov = (struct iovec *)&v21;
    message.msg_iovlen = 1;
    v4 = sendmsg(fd, &message, flags);
    v17 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
    v9 = (uint32_t *)__errno(v8, v7);
    v10 = a1 + 3;
    *v18 = *v9;
    v11 = v17;
    a1[4] = v17;
    if ( v4 >= 0 )
    {
      a1[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v18, v17));
      a1[3] = 0;
    }
    if ( (uintptr_t)sub_18F81E0(v10, v11) != a1[4] )
    {
      if ( (uintptr_t)sub_18F81E0(v3, v1) == a1[4] )
        goto LABEL_13;
LABEL_6:
      if ( (uintptr_t)sub_18F81E0(v13, v12) != a1[4] )
        goto LABEL_7;
      goto LABEL_15;
    }
  }
  while ( a1[3] == 4 );
  if ( (uintptr_t)sub_18F81E0(v3, v1) != a1[4] )
    goto LABEL_6;
LABEL_13:
  result = 0;
  if ( a1[3] == 11 )
    return result;
  if ( (uintptr_t)sub_18F81E0(v13, v12) == a1[4] )
  {
LABEL_15:
    result = 0;
    if ( a1[3] == 11 )
      return result;
  }
LABEL_7:
  if ( v4 >= 0 )
  {
    a1[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v15, v14));
    a1[3] = 0;
    a1[5] = v4;
    return 1;
  }
  else
  {
    a1[5] = 0;
    return 1;
  }
}


// ============================================================================
// Address:   0x1367e80 (size: 170 bytes)
// Symbol:    _ZN5boost4asio6detail12wait_handlerINS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv315AsyncHTTPClientEEENS3_5list1INS3_5valueIPS8_EEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationERKNS_6system10error_codeEj
// Demangled: boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::AsyncHTTPClient>,boost::_bi::list1<boost::_bi::value<glotv3::AsyncHTTPClient*>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
int boost::asio::detail::wait_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::AsyncHTTPClient::Self>,boost::_bi::list1<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>>>>::do_complete(
        int a1,
        uint32_t *a2)
{
  int (*v2)(uint32_t);
  int v3;
  int v4;
  uint32_t *v5;
  int result;
  uint32_t *v7;
  int v8;

  v2 = (int (*)(uint32_t))a2[5];
  v8 = a2[7];
  v3 = a2[6];
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 32);
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  result = a1;
  if ( a1 != 0 )
  {
    v7 = (uint32_t *)(v8 + v3);
    if ( (uintptr_t)(v2) < 0x10000u && ((uintptr_t)(v2) & 1) != 0 )
      v2 = *(int (**)(uint32_t))((char *)v2 + *v7 - 1);
    result = v2((uint32_t)(uintptr_t)(v7));
    _mm_sfence();
  }
  return result;
}


// ============================================================================
// Address:   0x1368350 (size: 397 bytes)
// Symbol:    _ZN5boost4asio6detail23reactive_socket_send_opINS0_15const_buffers_1ENS1_8write_opINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS7_EEEES3_NS1_14transfer_all_tENS1_23write_streambuf_handlerISaIcENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSE_5list2INSE_5valueIPSJ_EEPFNS_3argILi1EEEvEEEEEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESN_j
// Demangled: boost::asio::detail::reactive_socket_send_op<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::const_buffers_1,boost::asio::detail::transfer_all_t,boost::asio::detail::write_streambuf_handler<std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
// [pre-B42] template <>
void boost::asio::detail::reactive_socket_send_op<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::const_buffers_1,boost::asio::detail::transfer_all_t,boost::asio::detail::write_streambuf_handler<std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>>::do_complete(
        int a1,
        uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  unsigned int v7;
  unsigned int v8;
  void (*v9)(int, uint32_t *);
  int v10;
  int v11;
  int v12;
  typedef uint32_t _g4_t_v13[2];
  typedef int *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[2];
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v19)) > _g4_s6 ? (36u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v20)) > _g4_s7 ? (40u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v21)) > _g4_s8 ? (44u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v22)) > _g4_s9 ? (48u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v23)) > _g4_s10 ? (52u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v24)) > _g4_s11 ? (60u + sizeof(_g4_t_v24)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);

  v2 = a2[4];
  v14 = (int *)a2[11];
  v15 = a2[12];
  v16 = a2[13];
  v17 = a2[14];
  v18 = a2[15];
  v19 = (uint32_t *)a2[16];
  v20 = (char *)a2[17];
  v21 = a2[18];
  v22 = a2[19];
  v23[0] = a2[3];
  v24 = a2[5];
  v23[1] = v2;
  v3 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v3 != 0 && (v4 = *(uint32_t **)(v3 + 4)) != nullptr && *v4 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 80);
    *v4 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  if ( a1 != 0 )
  {
    v5 = v24 + v18;
    v17 = 0;
    v18 += v24;
    if ( v23[0] != 0 || v24 == 0 || v5 == v16 )
    {
      v6 = v19;
      v7 = v19[5];
      if ( v19[3] < v7 )
      {
        v10 = v19[9];
        v19[3] = v7;
        v6[1] = v10;
      }
      v8 = v6[2] + v5;
      if ( v7 < v8 )
        v8 = v7;
      v6[2] = v8;
      v9 = (void (*)(int, uint32_t *))v20;
      if ( ((uint8_t)(uintptr_t)(v20) & 1) != 0 )
        v9 = *(void (**)(int, uint32_t *))&v20[*(uint32_t *)(v21 + v22) - 1];
      v9(v21 + v22, v23);
    }
    else
    {
      v11 = 0;
      v12 = 0;
      if ( v5 <= v16 )
      {
        v11 = v16 - v5;
        v12 = v5 + v15;
        if ( v16 - v5 > 0x10000 )
          v11 = 0x10000;
      }
      v13[0] = v12;
      v13[1] = v11;
      sub_1368150(*v14, (int)(uintptr_t)(v14 + 1), v13, (int *)&v14);
    }
    _mm_sfence();
  }
}


// ============================================================================
// Address:   0x1369c40 (size: 874 bytes)
// Symbol:    _ZN5boost4asio6detail16resolver_serviceINS0_2ip3tcpEE13async_resolveINS_3_bi6bind_tIvNS_4_mfi3mf2IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeENS3_23basic_resolver_iteratorIS4_EEEENS7_5list3INS7_5valueIPSC_EEPFNS_3argILi1EEEvEPFNSO_ILi2EEEvEEEEEEEvRNS_10shared_ptrIvEERKNS3_20basic_resolver_queryIS4_EERT_
// Demangled: void boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient,boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>(boost::shared_ptr<void> &,boost::asio::ip::basic_resolver_query<boost::asio::ip::tcp> const&,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient,boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>> &)
// ============================================================================
template <>
void boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>::do_complete(int a1, unsigned int a2);

template <>
pthread_mutex_t *boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>(
        int a1,
        int *a2,
        uint32_t *a3,
        uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  uint8_t **v6;
  uint8_t *v7;
  int v8;
  volatile int32_t *v9;
  pthread_t *v10;
  int v11;
  int v12;
  pthread_t *v13;
  int v14;
  int v16;
  uint32_t *arg;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef pthread_t *_g4_t_newthreada;
  typedef pthread_t *_g4_t_newthread;
  typedef int _g4_t_v29[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v26)) > _g4_s4 ? (8u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_newthreada)) > _g4_s5 ? (12u + sizeof(_g4_t_newthreada)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_newthread)) > _g4_s6 ? (12u + sizeof(_g4_t_newthread)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_newthreada &newthreada = *reinterpret_cast<_g4_t_newthreada *>(_g4_sf + 12u);
  _g4_t_newthread &newthread = *reinterpret_cast<_g4_t_newthread *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);

  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  v5 = a4;
  if ( v4 == 0 || (v6 = *(uint8_t ***)(v4 + 4)) == nullptr || (v7 = *v6, *v6 == nullptr) )
  {
LABEL_8:
    v23 = v5;
    v12 = (int)(uintptr_t)(operator new(0x59u));
    *(uint8_t *)(v12 + 88) = 88;
    v7 = (uint8_t *)v12;
    v8 = *a2;
    v9 = (volatile int32_t *)a2[1];
    v5 = v23;
    if ( v9 == nullptr )
      goto LABEL_6;
    goto LABEL_9;
  }
  *v6 = nullptr;
  if ( *v7 <= 0x57u )
  {
    operator delete(v7);
    v5 = a4;
    goto LABEL_8;
  }
  v7[88] = *v7;
  v8 = *a2;
  v9 = (volatile int32_t *)a2[1];
  if ( v9 == nullptr )
  {
LABEL_6:
    v10 = *(pthread_t **)a1;
    *((uint32_t *)v7 + 1) = (uint32_t)(uintptr_t)&boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>::do_complete;
    *(uint32_t *)v7 = 0;
    *((uint32_t *)v7 + 2) = 0;
    *((uint32_t *)v7 + 3) = v8;
    *((uint32_t *)v7 + 4) = 0;
    *((uint32_t *)v7 + 5) = *a3;
    *((uint32_t *)v7 + 6) = a3[1];
    *((uint32_t *)v7 + 7) = a3[2];
    *((uint32_t *)v7 + 8) = a3[3];
    *((uint32_t *)v7 + 9) = a3[4];
    *((uint32_t *)v7 + 10) = a3[5];
    *((uint32_t *)v7 + 11) = a3[6];
    *((uint32_t *)v7 + 12) = a3[7];
    v22 = v5;
    g4_std_compat::string_construct_copy(v7 + 52, a3 + 8);
    g4_std_compat::string_construct_copy(v7 + 56, a3 + 9);
    *((uint32_t *)v7 + 15) = (uint32_t)(uintptr_t)(v10);
    *((uint32_t *)v7 + 16) = *v22;
    *((uint32_t *)v7 + 17) = v22[1];
    *((uint32_t *)v7 + 18) = v22[2];
    *((uint32_t *)v7 + 19) = 0;
    *((uint32_t *)v7 + 20) = (uint32_t)(uintptr_t)(sub_18F81E0(v11, v22));
    *((uint32_t *)v7 + 21) = 0;
    goto LABEL_11;
  }
LABEL_9:
  __sync_add_and_fetch(v9 + 2, 1);
  v13 = *(pthread_t **)a1;
  *(uint32_t *)v7 = 0;
  newthreada = v13;
  *((uint32_t *)v7 + 1) = (uint32_t)(uintptr_t)&boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>::do_complete;
  *((uint32_t *)v7 + 2) = 0;
  *((uint32_t *)v7 + 3) = v8;
  *((uint32_t *)v7 + 4) = (uint32_t)(uintptr_t)(v9);
  __sync_add_and_fetch(v9 + 2, 1);
  *((uint32_t *)v7 + 5) = *a3;
  *((uint32_t *)v7 + 6) = a3[1];
  *((uint32_t *)v7 + 7) = a3[2];
  *((uint32_t *)v7 + 8) = a3[3];
  *((uint32_t *)v7 + 9) = a3[4];
  *((uint32_t *)v7 + 10) = a3[5];
  *((uint32_t *)v7 + 11) = a3[6];
  *((uint32_t *)v7 + 12) = a3[7];
  v24 = v5;
  g4_std_compat::string_construct_copy(v7 + 52, a3 + 8);
  g4_std_compat::string_construct_copy(v7 + 56, a3 + 9);
  *((uint32_t *)v7 + 15) = (uint32_t)(uintptr_t)(newthreada);
  *((uint32_t *)v7 + 16) = *v24;
  *((uint32_t *)v7 + 17) = v24[1];
  *((uint32_t *)v7 + 18) = v24[2];
  *((uint32_t *)v7 + 19) = 0;
  *((uint32_t *)v7 + 20) = (uint32_t)(uintptr_t)(sub_18F81E0(v14, v24));
  *((uint32_t *)v7 + 21) = 0;
  if ( __sync_fetch_and_add(v9 + 2, 0xFFFFFFFF) == 1 )
    (*(void (**)(volatile int32_t *))(*v9 + 12))(v9);
LABEL_11:
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 4));
  if ( *(uint32_t *)(a1 + 20) == 0 )
  {
    v25 = *(uint32_t *)(a1 + 8);
    v16 = (int)(uintptr_t)(operator new(8u));
    *(uint8_t *)(v16 + 4) = 0;
    newthread = (pthread_t *)v16;
    arg = (uint32_t *)operator new(8u);
    *arg = ((uint32_t)(uintptr_t)&off_2092890);
    arg[1] = v25;
    v18 = pthread_create(newthread, nullptr, (void *(*)(void *))boost_asio_detail_posix_thread_function, arg);
    if ( v18 != 0 )
    {
      v26 = v18;
      (*(void (**)(uint32_t *))(*arg + 4))(arg);
      v29[1] = (int)(uintptr_t)(sub_18F81E0(v20, v19));
      v29[0] = v26;
      if ( boost::system::error_code::unspecified_bool_true != nullptr )
        sub_1367436(v29, "thread");
    }
    v21 = *(uint32_t *)(a1 + 20);
    if ( v21 != 0 )
    {
      if ( *(uint8_t *)(v21 + 4) == 0 )
        pthread_detach(*(uint32_t *)v21);
      operator delete((void *)v21);
    }
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(newthread);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 4));
  __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)a1 + 48), 1u);
  return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::task_io_service::post_immediate_completion(*(pthread_mutex_t **)(a1 + 12), v7, 0));
}


// ============================================================================
// Address:   0x136a1b0 (size: 557 bytes)
// Symbol:    _ZN5boost4asio19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS3_EEE15async_read_someINS0_17mutable_buffers_1ENS0_6detail26read_until_delim_string_opIS6_SaIcENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSC_5list2INSC_5valueIPSH_EEPFNS_3argILi1EEEvEEEEEEEEENS0_12async_resultINS0_12handler_typeIT0_FvSJ_jEE4typeEE4typeERKT_RKS10_
// Demangled: boost::asio::async_result<boost::asio::handler_type<boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>,void ()(boost::system::error_code,unsigned int)>::type>::type boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>(boost::asio::mutable_buffers_1 const&,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>> const&)
// ============================================================================
template <> template <>
int boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>(
        int *a1,
        uint32_t *a2,
        int *a3)
{
  int v3;
  int v4;
  int v5;
  uint8_t **v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_is_continuation;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_is_continuation)) > _g4_s2 ? (8u + sizeof(_g4_t_is_continuation)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v21)) > _g4_s7 ? (40u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v22)) > _g4_s8 ? (44u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v24)) > _g4_s10 ? (52u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v25)) > _g4_s11 ? (56u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_is_continuation &is_continuation = *reinterpret_cast<_g4_t_is_continuation *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);

  v18 = *a3;
  v19 = a3[1];
  v17 = *a1;
  g4_std_compat::string_construct_copy(v20, a3 + 2);
  v3 = a3[3];
  v22 = a3[4];
  v23 = a3[5];
  v24 = a3[6];
  v4 = a3[7];
  v21 = v3;
  v25 = v4;
  is_continuation = 1;
  if ( v3 != 0 )
    is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v23);
  v5 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v5 != 0 )
  {
    v6 = *(uint8_t ***)(v5 + 4);
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( *v6 != nullptr )
      {
        *v6 = nullptr;
        if ( *v7 > 0x4Fu )
        {
          v7[80] = *v7;
          goto LABEL_10;
        }
        operator delete(v7);
      }
    }
  }
  v8 = (int)(uintptr_t)(operator new(0x51u));
  *(uint8_t *)(v8 + 80) = 80;
  v7 = (uint8_t *)v8;
LABEL_10:
  v9 = a1[1];
  v10 = *((uint8_t *)a1 + 8);
  *(uint32_t *)v7 = 0;
  *((uint32_t *)v7 + 1) = (uint32_t)(uintptr_t)((int (*)(int, uint64_t *))boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete);
  *((uint32_t *)v7 + 2) = 0;
  *((uint32_t *)v7 + 3) = 0;
  v14 = v9;
  v15 = v10;
  *((uint32_t *)v7 + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v10, v9));
  *((uint32_t *)v7 + 5) = 0;
  *((uint32_t *)v7 + 6) = (uint32_t)(uintptr_t)((int (*)(uint32_t *))boost::asio::detail::reactive_socket_recv_op_base<boost::asio::mutable_buffers_1>::do_perform);
  *((uint32_t *)v7 + 7) = v14;
  v7[32] = v15;
  v11 = a2[1];
  *((uint32_t *)v7 + 9) = *a2;
  *((uint32_t *)v7 + 12) = v18;
  *((uint32_t *)v7 + 13) = v19;
  *((uint32_t *)v7 + 10) = v11;
  *((uint32_t *)v7 + 11) = 0;
  g4_std_compat::string_construct_copy(v7 + 56, v20);
  *((uint32_t *)v7 + 15) = v21;
  *((uint32_t *)v7 + 16) = v22;
  *((uint32_t *)v7 + 17) = v23;
  *((uint32_t *)v7 + 18) = v24;
  *((uint32_t *)v7 + 19) = v25;
  v12 = *((uint8_t *)a1 + 8);
  if ( ((v12 & 0x10) == 0 || a2[1] != 0)
    && ((v12 & 3) != 0 || (uint8_t)sub_13679F0(a1[1], (uint8_t *)a1 + 8, a1[1], (uint32_t *)v7 + 3) != 0) )
  {
    boost::asio::detail::epoll_reactor::start_op(
      *(uint32_t *)(v17 + 20),
      0,
      a1[1],
      a1 + 3,
      (unsigned int)(uintptr_t)(v7),
      is_continuation,
      1);
  }
  else
  {
    boost::asio::detail::task_io_service::post_immediate_completion(
      *(pthread_mutex_t **)(*(uint32_t *)(v17 + 20) + 20),
      v7,
      is_continuation);
  }
  return ((g4_std::string::Destroy(v20)), (int)0);
}


// ============================================================================
// Address:   0x136aa00 (size: 1475 bytes)
// Symbol:    _ZN5boost4asio6detail17read_streambuf_opINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS5_EEEESaIcENS1_19transfer_at_least_tENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSB_5list2INSB_5valueIPSG_EEPFNS_3argILi1EEEvEEEEEEclESK_ji
// Demangled: boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>::operator()(boost::system::error_code const&,unsigned int,int)
// ============================================================================
template <>
pthread_mutex_t *boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
        int *a1,
        int *a2,
        int a3,
        int a4)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int (*v11)(int, int *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, unsigned int, int, int *, int, int, int, int, int, int, int);
  int v12;
  unsigned int v14;
  uint32_t *v15;
  unsigned int v16;
  bool v17; // cc
  size_t v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char is_continuation;
  int v30;
  unsigned int v31;
  uint8_t **v32;
  uint8_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  int v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef size_t _g4_t_v69;
  typedef int _g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef size_t _g4_t_v72;
  typedef char _g4_t_v73;
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
  typedef unsigned int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v40)) > _g4_s0 ? (4u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v41)) > _g4_s1 ? (8u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v42)) > _g4_s2 ? (12u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v43)) > _g4_s3 ? (16u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v44)) > _g4_s4 ? (20u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v45)) > _g4_s5 ? (24u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v46)) > _g4_s6 ? (28u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v47)) > _g4_s7 ? (32u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v48)) > _g4_s8 ? (32u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v49)) > _g4_s9 ? (32u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v50)) > _g4_s10 ? (36u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v51)) > _g4_s11 ? (36u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v52)) > _g4_s12 ? (36u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v53)) > _g4_s13 ? (36u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v54)) > _g4_s14 ? (36u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v55)) > _g4_s15 ? (36u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v56)) > _g4_s16 ? (36u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v57)) > _g4_s17 ? (40u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v58)) > _g4_s18 ? (40u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v59)) > _g4_s19 ? (40u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v60)) > _g4_s20 ? (40u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v61)) > _g4_s21 ? (44u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v62)) > _g4_s22 ? (44u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v63)) > _g4_s23 ? (48u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v64)) > _g4_s24 ? (48u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v65)) > _g4_s25 ? (48u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v66)) > _g4_s26 ? (48u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v67)) > _g4_s27 ? (48u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v68)) > _g4_s28 ? (52u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v69)) > _g4_s29 ? (52u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v70)) > _g4_s30 ? (56u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v71)) > _g4_s31 ? (56u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v72)) > _g4_s32 ? (56u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v73)) > _g4_s33 ? (56u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v74)) > _g4_s34 ? (60u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v75)) > _g4_s35 ? (64u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v76)) > _g4_s36 ? (68u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v77)) > _g4_s37 ? (72u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v78)) > _g4_s38 ? (76u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (80u + sizeof(_g4_t_v79)) > _g4_s39 ? (80u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v80)) > _g4_s40 ? (84u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v81)) > _g4_s41 ? (88u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v82)) > _g4_s42 ? (96u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v83)) > _g4_s43 ? (100u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v84)) > _g4_s44 ? (104u + sizeof(_g4_t_v84)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v85)) > _g4_s45 ? (108u + sizeof(_g4_t_v85)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v86)) > _g4_s46 ? (112u + sizeof(_g4_t_v86)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v87)) > _g4_s47 ? (116u + sizeof(_g4_t_v87)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v88)) > _g4_s48 ? (120u + sizeof(_g4_t_v88)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v89)) > _g4_s49 ? (124u + sizeof(_g4_t_v89)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v90)) > _g4_s50 ? (128u + sizeof(_g4_t_v90)) : _g4_s50,
    _g4_s52 = (132u + sizeof(_g4_t_v91)) > _g4_s51 ? (132u + sizeof(_g4_t_v91)) : _g4_s51,
    _g4_s53 = (136u + sizeof(_g4_t_v92)) > _g4_s52 ? (136u + sizeof(_g4_t_v92)) : _g4_s52,
    _g4_s54 = (140u + sizeof(_g4_t_v93)) > _g4_s53 ? (140u + sizeof(_g4_t_v93)) : _g4_s53,
    _g4_s55 = (144u + sizeof(_g4_t_v94)) > _g4_s54 ? (144u + sizeof(_g4_t_v94)) : _g4_s54,
    _g4_s56 = (148u + sizeof(_g4_t_v95)) > _g4_s55 ? (148u + sizeof(_g4_t_v95)) : _g4_s55,
    _g4_s57 = (152u + sizeof(_g4_t_v96)) > _g4_s56 ? (152u + sizeof(_g4_t_v96)) : _g4_s56,
    _g4_s58 = (156u + sizeof(_g4_t_v97)) > _g4_s57 ? (156u + sizeof(_g4_t_v97)) : _g4_s57,
    _g4_s59 = (160u + sizeof(_g4_t_v98)) > _g4_s58 ? (160u + sizeof(_g4_t_v98)) : _g4_s58,
    _g4_s60 = (164u + sizeof(_g4_t_v99)) > _g4_s59 ? (164u + sizeof(_g4_t_v99)) : _g4_s59,
    _g4_s61 = (168u + sizeof(_g4_t_v100)) > _g4_s60 ? (168u + sizeof(_g4_t_v100)) : _g4_s60
  };
  alignas(16) uint8_t _g4_sf[_g4_s61];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 100u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 104u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 108u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 112u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 116u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 120u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 124u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 128u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 132u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 136u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 140u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 144u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 148u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 152u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 156u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 160u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 164u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 168u);

  a1[3] = a4;
  if ( a4 == 1 )
  {
    if ( *a2 != 0 || a1[4] >= (unsigned int)*a1 )
    {
      v6 = (uint32_t *)a1[2];
      v90 = 0;
      v69 = v6[5];
      v64 = v6[2];
      v71 = v69 - v64;
      v14 = 0;
      v15 = v6;
    }
    else
    {
      v15 = (uint32_t *)a1[2];
      v90 = 0x10000;
      v6 = v15;
      v69 = v15[5];
      v71 = v69 - v15[2];
      v14 = v15[8] - v71;
      v64 = v15[2];
      if ( v14 > 0xFFFF )
        v14 = 0x10000;
    }
    v16 = v15[11] - v15[9] - v71;
    v9 = v16;
    if ( v16 <= 0x200 )
    {
      v9 = 512;
      v16 = 512;
    }
    v17 = v16 <= v14;
    v18 = v69;
    if ( !v17 )
      v9 = v14;
  }
  else
  {
    v4 = (uint32_t *)a1[2];
    a1[4] += a3;
    v5 = a3 + v4[5];
    if ( v5 > v4[6] )
      v5 = v4[6];
    v4[5] = v5;
    v4[3] = v5;
    v63 = *a2;
    if ( *a2 != 0 || a1[4] >= (unsigned int)*a1 )
    {
      v6 = (uint32_t *)a1[2];
      v90 = 0;
      v7 = 0;
      v8 = v6[5] - v6[2];
      v91 = v6[8] - v8;
    }
    else
    {
      v6 = (uint32_t *)a1[2];
      v90 = 0x10000;
      v8 = v6[5] - v6[2];
      v91 = v6[8] - v8;
      v7 = v91;
      if ( v91 >= 0x10000 )
        v7 = 0x10000;
    }
    v85 = v6[11] - v6[9] - v8;
    v10 = v85;
    v9 = v85;
    if ( v85 <= 0x200 )
    {
      v9 = 512;
      v10 = 512;
    }
    if ( v7 < v10 )
      v9 = v7;
    if ( v63 == 0 && a3 == 0 || v9 == 0 )
    {
      v11 = (int (*)(int, int *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, unsigned int, int, int *, int, int, int, int, int, int, int))a1[5];
      v12 = a1[7];
      if ( (uintptr_t)(v11) < 0x10000u && ((uintptr_t)(v11) & 1) != 0 )
        v11 = *(int (**)(int, int *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, unsigned int, int, int *, int, int, int, int, int, int, int))((char *)v11 + *(uint32_t *)(v12 + a1[6]) - 1);
      return (pthread_mutex_t *)v11(
                                  a1[6] + v12,
                                  a2,
                                  v40,
                                  v41,
                                  v42,
                                  v43,
                                  v44,
                                  v45,
                                  v46,
                                  v47,
                                  v50,
                                  v57,
                                  v61,
                                  v63,
                                  v68,
                                  v70,
                                  v74,
                                  v75,
                                  v76,
                                  v77,
                                  v78,
                                  v79,
                                  v80,
                                  v81,
                                  512,
                                  v82,
                                  v83,
                                  v84,
                                  v85,
                                  v86,
                                  v87,
                                  v88,
                                  v89,
                                  v90,
                                  v91,
                                  v92,
                                  v93,
                                  v94,
                                  v95,
                                  v96,
                                  v97,
                                  v98,
                                  v99,
                                  v100);
    }
    v64 = v6[2];
    v69 = v6[5];
    v18 = v69;
  }
  v48 = (char *)v6[9];
  v72 = v18 - (uint32_t)(uintptr_t)(v48);
  if ( v9 > v6[6] - v18 )
  {
    v19 = v64 - (uint32_t)(uintptr_t)(v48);
    v65 = v64 - (uint32_t)(uintptr_t)(v48);
    if ( v65 != 0
      && (v72 -= v19,
          v55 = v9,
          v59 = v6[6] - (uint32_t)(uintptr_t)(v48),
          memmove(v48, &v48[v65], v72),
          v22 = v59,
          v9 = v55,
          v55 <= v59 - v72) )
    {
      v49 = v6[9];
    }
    else
    {
      v20 = v6[8];
      if ( v9 > v20 || v20 - v9 < v72 )
        sub_13675E4();
      v21 = 1;
      v22 = v9 + v72;
      LOBYTE(v90) = 0;
      if ( v9 + v72 != 0 )
        v21 = v9 + v72;
      v49 = v6[9];
      v66 = (char *)v6[10];
      if ( v21 > (unsigned int)(uintptr_t)(&v66[-v49]) )
      {
        v56 = v9;
        v60 = v9 + v72;
        g4_std_compat::vector_fill_insert((int)(uintptr_t)(v6 + 9), v66, v21 - (uint32_t)(uintptr_t)(&v66[-v49]), (int)(uintptr_t)(&v90));
        v9 = v56;
        v49 = v6[9];
        v22 = v60;
      }
      else if ( v21 < (unsigned int)(uintptr_t)(&v66[-v49]) )
      {
        v6[10] = v49 + v21;
      }
    }
    v69 = v49 + v72;
    v6[1] = v49;
    v6[2] = v49;
    v6[3] = v49 + v72;
    v6[5] = v49 + v72;
    v6[4] = v49 + v72;
    v6[6] = v49 + v22;
  }
  v23 = (int *)a1[1];
  v73 = 1;
  v24 = *v23;
  v92 = *a1;
  v67 = v24;
  v25 = a1[2];
  v96 = a1[4];
  v26 = a1[5];
  v94 = v25;
  v97 = v26;
  v27 = a1[3];
  v98 = a1[6];
  v28 = a1[7];
  v93 = v23;
  v95 = v27;
  v99 = v28;
  if ( v27 != 0 )
  {
    v51 = v9;
    is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v97);
    v9 = v51;
    v73 = is_continuation;
  }
  v52 = v9;
  v30 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  v31 = v52;
  if ( v30 != 0 )
  {
    v32 = *(uint8_t ***)(v30 + 4);
    if ( v32 != nullptr )
    {
      v33 = *v32;
      if ( *v32 != nullptr )
      {
        *v32 = nullptr;
        if ( *v33 > 0x4Fu )
        {
          v33[80] = *v33;
          goto LABEL_38;
        }
        operator delete(v33);
        v31 = v52;
      }
    }
  }
  v54 = v31;
  v39 = (int)(uintptr_t)(operator new(0x51u));
  *(uint8_t *)(v39 + 80) = 80;
  v33 = (uint8_t *)v39;
  v31 = v54;
LABEL_38:
  v62 = *((uint8_t *)v23 + 8);
  v34 = v23[1];
  *(uint32_t *)v33 = 0;
  *((uint32_t *)v33 + 1) = (uint32_t)(uintptr_t)((void (*)(int, uint32_t *))boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete);
  *((uint32_t *)v33 + 2) = 0;
  *((uint32_t *)v33 + 3) = 0;
  v53 = v31;
  v58 = v34;
  *((uint32_t *)v33 + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v34, v31));
  *((uint32_t *)v33 + 5) = 0;
  *((uint32_t *)v33 + 6) = (uint32_t)(uintptr_t)((int (*)(uint32_t *))boost::asio::detail::reactive_socket_recv_op_base<boost::asio::mutable_buffers_1>::do_perform);
  *((uint32_t *)v33 + 7) = v58;
  v35 = v92;
  v33[32] = v62;
  *((uint32_t *)v33 + 9) = v69;
  *((uint32_t *)v33 + 12) = v35;
  *((uint32_t *)v33 + 13) = (uint32_t)(uintptr_t)(v93);
  v36 = v94;
  *((uint32_t *)v33 + 10) = v53;
  *((uint32_t *)v33 + 14) = v36;
  v37 = v95;
  *((uint32_t *)v33 + 11) = 0;
  *((uint32_t *)v33 + 15) = v37;
  *((uint32_t *)v33 + 16) = v96;
  *((uint32_t *)v33 + 17) = v97;
  *((uint32_t *)v33 + 18) = v98;
  *((uint32_t *)v33 + 19) = v99;
  v38 = *((uint8_t *)v23 + 8);
  if ( ((v38 & 0x10) == 0 || v53 != 0)
    && ((v38 & 3) != 0 || (uint8_t)sub_13679F0(v23[1], (uint8_t *)v23 + 8, (int)(uintptr_t)(v33 + 12), (uint32_t *)v33 + 3) != 0) )
  {
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::epoll_reactor::start_op(
             *(uint32_t *)(v67 + 20),
             0,
             v23[1],
             v23 + 3,
             (unsigned int)(uintptr_t)(v33),
             v73,
             1));
  }
  else
  {
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::task_io_service::post_immediate_completion(
             *(pthread_mutex_t **)(*(uint32_t *)(v67 + 20) + 20),
             v33,
             v73));
  }
}


// ============================================================================
// Address:   0x136afd0 (size: 210 bytes)
// Symbol:    _ZN5boost4asio6detail23reactive_socket_recv_opINS0_17mutable_buffers_1ENS1_17read_streambuf_opINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS7_EEEESaIcENS1_19transfer_at_least_tENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSD_5list2INSD_5valueIPSI_EEPFNS_3argILi1EEEvEEEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESM_j
// Demangled: boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
void boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete(
        int a1,
        uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  typedef int _g4_t_v5[8];
  typedef int _g4_t_v6[2];
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v6)) > _g4_s1 ? (36u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v7)) > _g4_s2 ? (44u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  v2 = a2[4];
  std::memcpy(v5, a2 + 12, sizeof(v5));
  v6[0] = a2[3];
  v7 = a2[5];
  v6[1] = v2;
  v3 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v3 != 0 && (v4 = *(uint32_t **)(v3 + 4)) != nullptr && *v4 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 80);
    *v4 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  if ( a1 != 0 )
  {
    boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
      v5,
      v6,
      v7,
      0);
    _mm_sfence();
  }
}


// ============================================================================
// Address:   0x136b8d0 (size: 258 bytes)
// Symbol:    _ZN5boost4asio6detail23reactive_socket_recv_opINS0_17mutable_buffers_1ENS1_26read_until_delim_string_opINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS7_EEEESaIcENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSC_5list2INSC_5valueIPSH_EEPFNS_3argILi1EEEvEEEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESL_j
// Demangled: boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
int boost::asio::detail::reactive_socket_recv_op<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete(
        int a1,
        uint64_t *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[2];
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v12)) > _g4_s5 ? (28u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v13)) > _g4_s6 ? (32u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v14)) > _g4_s7 ? (36u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v15)) > _g4_s8 ? (44u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  v7 = a2[6];
  g4_std_compat::string_construct_copy(v8, a2 + 7);
  v2 = *((uint32_t *)a2 + 4);
  v9 = *((uint32_t *)a2 + 15);
  v10 = *((uint32_t *)a2 + 16);
  v11 = *((uint32_t *)a2 + 17);
  v12 = *((uint32_t *)a2 + 18);
  v13 = *((uint32_t *)a2 + 19);
  v14[0] = *((uint32_t *)a2 + 3);
  v3 = *((uint32_t *)a2 + 5);
  v14[1] = v2;
  v15 = v3;
  g4_std::string::Destroy(a2 + 7);
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 80);
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  if ( a1 != 0 )
  {
    sub_136B0B0(&v7, v14, v15, 0);
    _mm_sfence();
  }
  return ((g4_std::string::Destroy(v8)), (int)0);
}


// ============================================================================
// Address:   0x136b9e0 (size: 662 bytes)
// Symbol:    _ZN5boost4asio6detail23reactive_socket_serviceINS0_2ip3tcpEE13async_connectINS1_10connect_opIS4_NS0_21stream_socket_serviceIS4_EENS3_23basic_resolver_iteratorIS4_EENS1_25default_connect_conditionENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSD_5list2INSD_5valueIPSI_EEPFNS_3argILi1EEEvEEEEEEEEEvRNS5_19implementation_typeERKNS3_14basic_endpointIS4_EERT_
// Demangled: void boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::async_connect<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> const&,boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>> &)
// ============================================================================
template <> template <>
pthread_mutex_t *boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::async_connect<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>(
        int *a1,
        int a2,
        struct sockaddr *addr,
        uint32_t *a4)
{
  int v4;
  int v5;
  uint32_t **v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  socklen_t len;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int fd;
  int v29;
  char is_continuation;

  is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)(a4 + 8));
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 )
  {
    v6 = *(uint32_t ***)(v4 + 4);
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( *v6 != nullptr )
      {
        *v6 = nullptr;
        if ( *(uint8_t *)v7 > 0x4Bu )
        {
          *((uint8_t *)v7 + 76) = *(uint8_t *)v7;
          goto LABEL_8;
        }
        operator delete(v7);
      }
    }
  }
  v8 = (int)(uintptr_t)(operator new(0x4Du));
  *(uint8_t *)(v8 + 76) = 76;
  v7 = (uint32_t *)v8;
LABEL_8:
  v9 = *(uint32_t *)a2;
  *v7 = 0;
  v7[1] = (uint32_t)(uintptr_t)(boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete);
  v7[2] = 0;
  v7[3] = 0;
  v27 = v9;
  v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v5, v9));
  v7[5] = 0;
  v7[6] = (uint32_t)(uintptr_t)(boost::asio::detail::reactive_socket_connect_op_base::do_perform);
  v7[7] = v27;
  v7[8] = *a4;
  v7[9] = a4[1];
  v11 = a4[2];
  v7[10] = v11;
  if ( v11 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v11 + 4), 1);
  v7[11] = a4[3];
  v7[12] = a4[4];
  v12 = a4[5];
  v7[13] = v12;
  if ( v12 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1);
  v7[14] = a4[6];
  v7[15] = a4[7];
  v7[16] = a4[8];
  v7[17] = a4[9];
  v7[18] = a4[10];
  len = 16;
  if ( addr->sa_family != 2 )
    len = 28;
  if ( (*(uint8_t *)(a2 + 4) & 3) != 0 )
  {
    v14 = *(uint32_t *)a2;
    if ( *(uint32_t *)a2 != -1 )
      goto LABEL_16;
LABEL_26:
    v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v10, v14));
    v7[3] = 9;
    goto LABEL_20;
  }
  if ( (uint8_t)sub_13679F0(*(uint32_t *)a2, (uint8_t *)(a2 + 4), v10, v7 + 3) == 0 )
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::task_io_service::post_immediate_completion(
             *(pthread_mutex_t **)(*a1 + 20),
             v7,
             is_continuation));
  v14 = *(uint32_t *)a2;
  if ( *(uint32_t *)a2 == -1 )
    goto LABEL_26;
LABEL_16:
  fd = v14;
  *(uint32_t *)__errno(v10, v14) = 0;
  v29 = connect(fd, addr, len);
  v17 = (int)(uintptr_t)(sub_18F81E0(v16, v15));
  v20 = *(uint32_t *)__errno(v19, v18);
  v7[4] = v17;
  v7[3] = v20;
  if ( v29 == 0 )
  {
    v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v21, 0));
    v7[3] = 0;
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::task_io_service::post_immediate_completion(
             *(pthread_mutex_t **)(*a1 + 20),
             v7,
             is_continuation));
  }
  if ( (uintptr_t)sub_18F81E0(v21, v29) == v7[4] && v7[3] == 11 )
  {
    v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v24, v23));
    v7[3] = 105;
  }
LABEL_20:
  if ( ((uintptr_t)sub_18F81E0(v24, v23) != v7[4] || v7[3] != 115) && ((uintptr_t)sub_18F81E0(v26, v25) != v7[4] || v7[3] != 11) )
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::task_io_service::post_immediate_completion(
             *(pthread_mutex_t **)(*a1 + 20),
             v7,
             is_continuation));
  v7[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v26, v25));
  v7[3] = 0;
  return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::epoll_reactor::start_op(
           *a1,
           1,
           *(uint32_t *)a2,
           (int *)(a2 + 8),
           (unsigned int)(uintptr_t)(v7),
           is_continuation,
           0));
}


// ============================================================================
// Address:   0x136bc80 (size: 1336 bytes)
// Symbol:    _ZN5boost4asio12basic_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS3_EEE13async_connectINS0_6detail10connect_opIS3_S5_NS2_23basic_resolver_iteratorIS3_EENS8_25default_connect_conditionENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSD_5list2INSD_5valueIPSI_EEPFNS_3argILi1EEEvEEEEEEEEENS0_12async_resultINS0_12handler_typeIT_FvSK_EE4typeEE4typeERKNS2_14basic_endpointIS3_EERKS11_
// Demangled: boost::asio::async_result<boost::asio::handler_type<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>,void ()(boost::system::error_code)>::type>::type boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_connect<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>(boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> const&,boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>> const&)
// ============================================================================
template <> template <>
void boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_connect<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>(
        int *a1,
        struct sockaddr *a2,
        int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *descriptor_state;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef boost::asio::detail::socket_ops::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef pthread_mutex_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef char _g4_t_v27;
  typedef g4_x86_epoll_event _g4_t_v28;
  typedef int64_t _g4_t_v29 __attribute__((aligned(1)));
  typedef volatile int32_t *_g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  typedef volatile int32_t *_g4_t_v34;
  typedef volatile int32_t *_g4_t_v35;
  typedef g4_x86_epoll_event _g4_t_event;
  typedef int64_t _g4_t_v37 __attribute__((aligned(1)));
  typedef volatile int32_t *_g4_t_v38;
  typedef volatile int32_t *_g4_t_v39;
  typedef volatile int32_t *_g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef volatile int32_t *_g4_t_v43;
  typedef uint32_t _g4_t_events;
  typedef uint32_t _g4_t_v45[4];
  typedef volatile int32_t *_g4_t_v46[14];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v26)) > _g4_s8 ? (28u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (47u + sizeof(_g4_t_v27)) > _g4_s9 ? (47u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v28)) > _g4_s10 ? (48u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v29)) > _g4_s11 ? (60u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v30)) > _g4_s12 ? (68u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v31)) > _g4_s13 ? (72u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v32)) > _g4_s14 ? (76u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v33)) > _g4_s15 ? (80u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v34)) > _g4_s16 ? (84u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v35)) > _g4_s17 ? (88u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_event)) > _g4_s18 ? (96u + sizeof(_g4_t_event)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v37)) > _g4_s19 ? (108u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v38)) > _g4_s20 ? (116u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v39)) > _g4_s21 ? (120u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v40)) > _g4_s22 ? (124u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v41)) > _g4_s23 ? (128u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v42)) > _g4_s24 ? (132u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v43)) > _g4_s25 ? (136u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_events)) > _g4_s26 ? (144u + sizeof(_g4_t_events)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v45)) > _g4_s27 ? (148u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v46)) > _g4_s28 ? (164u + sizeof(_g4_t_v46)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 47u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_events &events = *reinterpret_cast<_g4_t_events *>(_g4_sf + 144u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 148u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 164u);

  if ( a1[1] != -1 )
    goto LABEL_2;
  sub_18F81E0(v3, &event);
  v22 = *a1;
  if ( a1[1] == -1 )
  {
    v18 = 8 * (a2->sa_family != 2) + 2;
    *(uint32_t *)__errno(v18, &event) = 0;
    v21 = (boost::asio::detail::socket_ops::Self *)socket(v18, 1, 6);
    v23 = (volatile int32_t *)sub_18F81E0(v7, v6);
    v25 = *(volatile int32_t **)__errno(v9, v8);
    v10 = v18;
    if ( (int)(uintptr_t)(v21) < 0 )
    {
      if ( v21 == (boost::asio::detail::socket_ops::Self *)-1 )
      {
        if ( v25 != nullptr )
          goto LABEL_11;
LABEL_31:
        a1[4] = v10;
LABEL_2:
        event.events = *(uint32_t *)a3;
        event.data.fd = *(uint32_t *)(a3 + 4);
        v4 = *a1;
        HIDWORD(event.data.u64) = *(uint32_t *)(a3 + 8);
        if ( HIDWORD(event.data.u64) != 0 )
          __sync_add_and_fetch((volatile int32_t *)(HIDWORD(event.data.u64) + 4), 1);
        v37 = *(uint64_t *)(a3 + 12);
        v38 = *(volatile int32_t **)(a3 + 20);
        if ( v38 != nullptr )
          __sync_add_and_fetch(v38 + 1, 1);
        v39 = *(volatile int32_t **)(a3 + 24);
        v40 = *(volatile int32_t **)(a3 + 28);
        v41 = *(volatile int32_t **)(a3 + 32);
        v42 = *(volatile int32_t **)(a3 + 36);
        v43 = *(volatile int32_t **)(a3 + 40);
        boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::async_connect<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>(
          (int *)(v4 + 20),
          (int)(uintptr_t)(a1 + 1),
          a2,
          &event);
        goto LABEL_7;
      }
    }
    else
    {
      sub_18F81E0(v18, &event);
      v10 = v18;
    }
    v19 = v10;
    v26 = *(int **)(v22 + 20);
    descriptor_state = (uint32_t *)(uintptr_t)(boost::asio::detail::epoll_reactor::allocate_descriptor_state((boost::asio::detail::epoll_reactor::Self *)v26));
    a1[3] = (int)(uintptr_t)(descriptor_state);
    v24 = (pthread_mutex_t *)(descriptor_state + 5);
    pthread_mutex_lock((pthread_mutex_t *)(descriptor_state + 5));
    *(uint32_t *)(a1[3] + 24) = (uint32_t)(uintptr_t)(v26);
    *(uint32_t *)(a1[3] + 28) = (uint32_t)(uintptr_t)(v21);
    *(uint8_t *)(a1[3] + 60) = 0;
    pthread_mutex_unlock(v24);
    v12 = a1[3];
    HIDWORD(event.data.u64) = 0;
    event.events = 0x8000001B;
    *(uint32_t *)(v12 + 32) = -2147483621;
    event.data.fd = a1[3];
    v13 = g4_epoll_ctl_x86(v26[9], 1, (int)(uintptr_t)(v21), &event);
    v14 = v19;
    if ( v13 != 0 )
    {
      v25 = *(volatile int32_t **)__errno(v19, &event);
      v14 = v19;
      if ( v25 != nullptr )
      {
        v23 = (volatile int32_t *)sub_18F81E0(v19, &event);
        event.events = 0;
        event.data.fd = (int)(uintptr_t)(sub_18F81E0(v16, v15));
        v27 = 0;
        g4_asio_socket_ops_close(v17, (int)(uintptr_t)(&event), (void *)(uintptr_t)(v21), (uint8_t *)&v27, (uint8_t *)&dword_0 + 1, (uint32_t *)&event);
        goto LABEL_11;
      }
    }
    *((uint8_t *)a1 + 8) = 16;
    a1[1] = (int)(uintptr_t)(v21);
    v20 = v14;
    sub_18F81E0(v14, &event);
    v10 = v20;
    goto LABEL_31;
  }
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  v25 = (volatile int32_t *)(&dword_0 + 1);
  v23 = (volatile int32_t *)(&dword_20D3F88);
LABEL_11:
  if ( boost::system::error_code::unspecified_bool_true == nullptr )
    goto LABEL_2;
  event.events = *(uint32_t *)a3;
  event.data.u64 = *(uint64_t *)(a3 + 4);
  if ( HIDWORD(event.data.u64) != 0 )
    __sync_add_and_fetch((volatile int32_t *)(HIDWORD(event.data.u64) + 4), 1);
  v37 = *(uint64_t *)(a3 + 12);
  v38 = *(volatile int32_t **)(a3 + 20);
  if ( v38 != nullptr )
    __sync_add_and_fetch(v38 + 1, 1);
  v39 = *(volatile int32_t **)(a3 + 24);
  v40 = *(volatile int32_t **)(a3 + 28);
  v41 = *(volatile int32_t **)(a3 + 32);
  v42 = *(volatile int32_t **)(a3 + 36);
  v43 = *(volatile int32_t **)(a3 + 40);
  v28 = event;
  if ( HIDWORD(event.data.u64) != 0 )
    __sync_add_and_fetch((volatile int32_t *)(HIDWORD(event.data.u64) + 4), 1);
  v29 = v37;
  v30 = v38;
  if ( v38 != nullptr )
    __sync_add_and_fetch(v38 + 1, 1);
  v31 = v39;
  v32 = v40;
  v33 = v41;
  v34 = v42;
  v35 = v43;
  events = v28.events;
  *(uint64_t *)v45 = v28.data.u64;
  if ( HIDWORD(v28.data.u64) != 0 )
    __sync_add_and_fetch((volatile int32_t *)(HIDWORD(v28.data.u64) + 4), 1);
  *(uint64_t *)&v45[2] = v29;
  v46[0] = v30;
  if ( v30 != nullptr )
    __sync_add_and_fetch(v30 + 1, 1);
  v46[1] = v31;
  v46[2] = v32;
  v46[3] = v33;
  v46[4] = v34;
  v46[5] = v35;
  v46[7] = v23;
  v5 = *a1;
  v46[6] = v25;
  sub_13684E0((pthread_mutex_t **)(*(uint32_t *)(v5 + 12) + 4), (int *)&events);
  boost::detail::shared_count::Destroy(v46);
  boost::detail::shared_count::Destroy((volatile int32_t **)&v45[1]);
  boost::detail::shared_count::Destroy(&v30);
  boost::detail::shared_count::Destroy((volatile int32_t **)&v28.data.u64 + 1);
LABEL_7:
  boost::detail::shared_count::Destroy(&v38);
  boost::detail::shared_count::Destroy((volatile int32_t **)&event.data.u64 + 1);
}


// ============================================================================
// Address:   0x136c1c0 (size: 1076 bytes)
// Symbol:    _ZN5boost4asio6detail10connect_opINS0_2ip3tcpENS0_21stream_socket_serviceIS4_EENS3_23basic_resolver_iteratorIS4_EENS1_25default_connect_conditionENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSA_5list2INSA_5valueIPSF_EEPFNS_3argILi1EEEvEEEEEEclESH_i
// Demangled: boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>::operator()(boost::system::error_code,int)
// ============================================================================
// [pre-B42] template <>
void boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
        int **a1,
        int a2,
        int *a3,
        int *a4)
{
  int v4;
  int *v5;
  int *v6;
  int *v7;
  int *v8;
  volatile int32_t *v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  int *v14;
  int v15;
  volatile int32_t *v16;
  int *v17;
  int *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef struct sockaddr _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef volatile int32_t *_g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef volatile int32_t *_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef volatile int32_t *_g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int *_g4_t_v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef int *_g4_t_v52;
  typedef int *_g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int *_g4_t_v55;
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v24)) > _g4_s5 ? (28u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v25)) > _g4_s6 ? (32u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v26)) > _g4_s7 ? (36u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v27)) > _g4_s8 ? (40u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v28)) > _g4_s9 ? (44u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v29)) > _g4_s10 ? (48u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v30)) > _g4_s11 ? (52u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v31)) > _g4_s12 ? (68u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v32)) > _g4_s13 ? (72u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v33)) > _g4_s14 ? (76u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v34)) > _g4_s15 ? (80u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v35)) > _g4_s16 ? (84u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v36)) > _g4_s17 ? (88u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v37)) > _g4_s18 ? (92u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v38)) > _g4_s19 ? (96u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v39)) > _g4_s20 ? (100u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v40)) > _g4_s21 ? (104u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v41)) > _g4_s22 ? (108u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v42)) > _g4_s23 ? (112u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v43)) > _g4_s24 ? (116u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v44)) > _g4_s25 ? (120u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v45)) > _g4_s26 ? (124u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v46)) > _g4_s27 ? (128u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v47)) > _g4_s28 ? (132u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v48)) > _g4_s29 ? (136u + sizeof(_g4_t_v48)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v49)) > _g4_s30 ? (140u + sizeof(_g4_t_v49)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v50)) > _g4_s31 ? (144u + sizeof(_g4_t_v50)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v51)) > _g4_s32 ? (148u + sizeof(_g4_t_v51)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v52)) > _g4_s33 ? (152u + sizeof(_g4_t_v52)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v53)) > _g4_s34 ? (156u + sizeof(_g4_t_v53)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v54)) > _g4_s35 ? (160u + sizeof(_g4_t_v54)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v55)) > _g4_s36 ? (164u + sizeof(_g4_t_v55)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v56)) > _g4_s37 ? (168u + sizeof(_g4_t_v56)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v57)) > _g4_s38 ? (172u + sizeof(_g4_t_v57)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v58)) > _g4_s39 ? (176u + sizeof(_g4_t_v58)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v59)) > _g4_s40 ? (180u + sizeof(_g4_t_v59)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v60)) > _g4_s41 ? (184u + sizeof(_g4_t_v60)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v61)) > _g4_s42 ? (188u + sizeof(_g4_t_v61)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
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
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 180u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 184u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 188u);

  v5 = a4;
  a1[7] = a4;
  v6 = a1[1];
  if ( v5 == (int *)((char *)&dword_0 + 1) )
    goto LABEL_14;
  v7 = a1[4];
  do
  {
    if ( v6 != nullptr )
    {
      if ( v6 == v7 && a1[3] == a1[6] )
        goto LABEL_7;
    }
    else if ( v7 == nullptr )
    {
      goto LABEL_7;
    }
    if ( (*a1)[1] == -1 )
    {
      a3 = (int *)sub_18F81E0(v4, *a1);
      a2 = 125;
LABEL_7:
      v8 = a1[8];
      if ( (uintptr_t)(v8) < 0x10000u && ((uintptr_t)(v8) & 1) != 0 )
        v8 = *(int **)((char *)v8 + *(int *)((char *)a1[10] + (uint32_t)(uintptr_t)(a1[9])) - 1);
      ((void (*)(char *, int *, int, int, int, int, int, int, int, int, int, int *, volatile int32_t *, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int *, volatile int32_t *, int *, int *, volatile int32_t *, int *, int *, int *, int *, int *, int, int, int *, volatile int32_t *, int *, int *, volatile int32_t *, int *, int *, int *, int *, int *, int, int *, int, int, int))v8)(
        (char *)a1[10] + (uint32_t)(uintptr_t)(a1[9]),
        &a2,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        *(uint32_t *)&v30.sa_family,
        *(uint32_t *)&v30.sa_data[2],
        *(uint32_t *)&v30.sa_data[6],
        *(uint32_t *)&v30.sa_data[10],
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      return;
    }
    if ( a2 == 0 )
      goto LABEL_7;
    v4 = (int)(uintptr_t)(a1[3]) + 1;
    a1[3] = (int *)v4;
    if ( v6 == nullptr )
    {
      v24 = v4;
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = std::vector"
        "<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_ent"
        "ry<boost::asio::ip::tcp> > >, typename boost::detail::sp_member_access<T>::type = std::vector<boost::asio::ip::b"
        "asic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp> > >*]",
        "px != 0");
      v6 = a1[1];
      v4 = v24;
    }
    if ( v4 == 954437177 * ((v6[1] - *v6) >> 2) )
    {
      v28 = v6;
      a1[1] = nullptr;
      v9 = a1[2];
      a1[2] = nullptr;
      v29 = v9;
      boost::detail::shared_count::Destroy(&v29);
      a1[3] = nullptr;
      v6 = a1[1];
    }
LABEL_14:
    if ( v6 != nullptr )
    {
      v7 = a1[4];
      if ( v7 != v6 || (v4 = (int)(uintptr_t)(a1[6]), a1[3] != (int *)v4) )
      {
LABEL_16:
        v10 = *a1;
        v11 = -1;
        v12 = **a1;
        if ( (*a1)[1] != -1 )
        {
          g4_asio_epoll_deregister_descriptor(
            *(void **)(v12 + 20),
            (*a1)[1],
            (void *)((pthread_mutex_t **)v10 + 3),
            (v10[2] & 0x40) == 0);
          v11 = v10[1];
        }
        g4_asio_socket_ops_close(
          v12,
          (int)(uintptr_t)(v10 + 2),
          (void *)(uintptr_t)v11,
          (uint8_t *)v10 + 8,
          nullptr,
          (uint32_t *)&a2);
        v10[1] = -1;
        *((uint8_t *)v10 + 8) = 0;
        v13 = a1[1];
        v14 = a1[3];
        if ( v13 == nullptr )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
            646,
            "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = std::vecto"
            "r<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolve"
            "r_entry<boost::asio::ip::tcp> > >, typename boost::detail::sp_dereference<T>::type = std::vector<boost::asio"
            "::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boost"
            "::asio::ip::tcp> > >&]",
            "px != 0");
          v13 = a1[1];
        }
        v15 = *v13 + 36 * (uint32_t)(uintptr_t)(v14);
        v30 = *(struct sockaddr *)v15;
        v31 = *(uint32_t *)(v15 + 16);
        v32 = *(uint32_t *)(v15 + 20);
        v33 = *(uint32_t *)(v15 + 24);
        boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_connect<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>(
          *a1,
          &v30,
          (int)(uintptr_t)(a1));
        return;
      }
    }
    else
    {
      if ( a1[4] != nullptr )
        goto LABEL_16;
      v7 = nullptr;
    }
  }
  while ( v5 == nullptr );
  if ( byte_20D3F80 == 0 )
  {
    if ( _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
      sub_13671E0();
    v6 = a1[1];
  }
  v35 = v6;
  v16 = a1[2];
  a3 = (int *)(&dword_20D3F88);
  v17 = *a1;
  a2 = 3;
  v34 = (int)(uintptr_t)(v17);
  v36 = v16;
  if ( v16 != nullptr )
    __sync_add_and_fetch(v16 + 1, 1);
  v37 = a1[3];
  v38 = a1[4];
  v39 = a1[5];
  if ( v39 != nullptr )
    __sync_add_and_fetch(v39 + 1, 1);
  v40 = a1[6];
  v41 = a1[7];
  v42 = a1[8];
  v43 = a1[9];
  v44 = a1[10];
  v46 = v34;
  v47 = v35;
  v48 = v36;
  if ( v36 != nullptr )
    __sync_add_and_fetch(v36 + 1, 1);
  v49 = v37;
  v50 = v38;
  v51 = v39;
  if ( v39 != nullptr )
    __sync_add_and_fetch(v39 + 1, 1);
  v52 = v40;
  v53 = v41;
  v54 = v42;
  v55 = v43;
  v56 = v44;
  v57 = a2;
  v18 = *a1;
  v58 = a3;
  sub_13684E0((pthread_mutex_t **)(*(uint32_t *)(*v18 + 12) + 4), &v46);
  boost::detail::shared_count::Destroy(&v51);
  boost::detail::shared_count::Destroy(&v48);
  boost::detail::shared_count::Destroy(&v39);
  boost::detail::shared_count::Destroy(&v36);
}


// ============================================================================
// Address:   0x136c600 (size: 290 bytes)
// Symbol:    _ZN5boost4asio6detail18completion_handlerINS1_7binder1INS1_10connect_opINS0_2ip3tcpENS0_21stream_socket_serviceIS6_EENS5_23basic_resolver_iteratorIS6_EENS1_25default_connect_conditionENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSC_5list2INSC_5valueIPSH_EEPFNS_3argILi1EEEvEEEEEEESJ_EEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESL_j
// Demangled: boost::asio::detail::completion_handler<boost::asio::detail::binder1<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>,boost::system::error_code>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
// [pre-B42] template <>
void boost::asio::detail::completion_handler<boost::asio::detail::binder1<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>,boost::system::error_code::Self>>::do_complete(
        int a1,
        char *a2)
{
  int *v2;
  int v3;
  int v4;
  uint32_t *v5;
  typedef int64_t _g4_t_v6;
  typedef volatile int32_t *_g4_t_v7[3];
  typedef volatile int32_t *_g4_t_v8[6];
  typedef int _g4_t_v9;
  typedef int *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v9)) > _g4_s3 ? (52u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v10)) > _g4_s4 ? (56u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);

  v6 = *(uint64_t *)(a2 + 12);
  v7[0] = *((volatile int32_t **)a2 + 5);
  if ( v7[0] != nullptr )
    __sync_add_and_fetch(v7[0] + 1, 1);
  v7[1] = *((volatile int32_t **)a2 + 6);
  v7[2] = *((volatile int32_t **)a2 + 7);
  v8[0] = *((volatile int32_t **)a2 + 8);
  if ( v8[0] != nullptr )
    __sync_add_and_fetch(v8[0] + 1, 1);
  v2 = *((int **)a2 + 15);
  v8[1] = *((volatile int32_t **)a2 + 9);
  v8[2] = *((volatile int32_t **)a2 + 10);
  v8[3] = *((volatile int32_t **)a2 + 11);
  v8[4] = *((volatile int32_t **)a2 + 12);
  v8[5] = *((volatile int32_t **)a2 + 13);
  v3 = *((uint32_t *)a2 + 14);
  v10 = v2;
  v9 = v3;
  boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 8);
  boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 5);
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *a2 = a2[64];
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  if ( a1 != 0 )
  {
    boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
      (int **)&v6,
      v9,
      v10,
      nullptr);
    _mm_sfence();
  }
  boost::detail::shared_count::Destroy(v8);
  boost::detail::shared_count::Destroy(v7);
}


// ============================================================================
// Address:   0x136c730 (size: 290 bytes)
// Symbol:    _ZN5boost4asio6detail26reactive_socket_connect_opINS1_10connect_opINS0_2ip3tcpENS0_21stream_socket_serviceIS5_EENS4_23basic_resolver_iteratorIS5_EENS1_25default_connect_conditionENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSB_5list2INSB_5valueIPSG_EEPFNS_3argILi1EEEvEEEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESK_j
// Demangled: boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
// [pre-B42] template <>
void boost::asio::detail::reactive_socket_connect_op<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>::do_complete(
        int a1,
        void *a2)
{
  int *v2;
  int v3;
  int v4;
  uint32_t *v5;
  typedef int64_t _g4_t_v6;
  typedef volatile int32_t *_g4_t_v7[3];
  typedef volatile int32_t *_g4_t_v8[6];
  typedef int _g4_t_v9;
  typedef int *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v9)) > _g4_s3 ? (52u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v10)) > _g4_s4 ? (56u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);

  v6 = *((uint64_t *)a2 + 4);
  v7[0] = *((volatile int32_t **)a2 + 10);
  if ( v7[0] != nullptr )
    __sync_add_and_fetch(v7[0] + 1, 1);
  v7[1] = *((volatile int32_t **)a2 + 11);
  v7[2] = *((volatile int32_t **)a2 + 12);
  v8[0] = *((volatile int32_t **)a2 + 13);
  if ( v8[0] != nullptr )
    __sync_add_and_fetch(v8[0] + 1, 1);
  v2 = *((int **)a2 + 4);
  v8[1] = *((volatile int32_t **)a2 + 14);
  v8[2] = *((volatile int32_t **)a2 + 15);
  v8[3] = *((volatile int32_t **)a2 + 16);
  v8[4] = *((volatile int32_t **)a2 + 17);
  v8[5] = *((volatile int32_t **)a2 + 18);
  v3 = *((uint32_t *)a2 + 3);
  v10 = v2;
  v9 = v3;
  boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 13);
  boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 10);
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 76);
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  if ( a1 != 0 )
  {
    boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
      (int **)&v6,
      v9,
      v10,
      nullptr);
    _mm_sfence();
  }
  boost::detail::shared_count::Destroy(v8);
  boost::detail::shared_count::Destroy(v7);
}


// ============================================================================
// Address:   0x136ce80 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv323EventOfSpyConfirmFailedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_57_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1367F30();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmFailed::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_136CBE0(self);
}


// ============================================================================
// Address:   0x136ceb0 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv325EventOfSpyConfirmReceivedENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_58_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1367F30();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmReceived::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_136CBE0(self);
}


// ============================================================================
// Address:   0x136cee0 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv324EventOfSpyConfirmSendingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending *,boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_59_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1367F30();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfSpyConfirmSending::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_136CBE0(self);
}


// ============================================================================
// Address:   0x136cf10 (size: 33 bytes)
// Symbol:    _ZN5boost6detail19sp_counted_impl_pdaIPN6glotv322EventOfEraseEverythingENS0_13sp_ms_deleterIS3_EENS_14pool_allocatorINS2_5EventENS2_16event_new_deleteENS_5mutexELj128ELj0EEEE7destroyEv
// Demangled: boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything *,boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything>,boost::pool_allocator<glotv3::Event,glotv3::event_new_delete,boost::mutex,128u,0u>>::destroy(void)
// ============================================================================
static int g4_sp_counted_pda_60_destroy(
        boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *self)
{
  sub_1367F30();
  (**(void (***)(boost::detail::sp_counted_impl_pda<glotv3::EventOfEraseEverything::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *))self)(self);
  return sub_136CBE0(self);
}


// ============================================================================
// Address:   0x1375400 (size: 1820 bytes)
// Symbol:    _ZN5boost4asio6detail10resolve_opINS0_2ip3tcpENS_3_bi6bind_tIvNS_4_mfi3mf2IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeENS3_23basic_resolver_iteratorIS4_EEEENS5_5list3INS5_5valueIPSA_EEPFNS_3argILi1EEEvEPFNSM_ILi2EEEvEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationESE_j
// Demangled: boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient,boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
template <>
void boost::asio::detail::resolve_op<boost::asio::ip::tcp,boost::_bi::bind_t<void,boost::_mfi::mf2<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>::do_complete(
        int a1,
        unsigned int a2)
{
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  pthread_mutex_t *v15;
  pthread_mutex_t **v16;
  pthread_mutex_t *v17;
  unsigned int *kind;
  int v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  volatile int32_t *v23;
  int v24;
  unsigned int *v25;
  int v26;
  volatile int32_t *v27;
  volatile int32_t *v28;
  unsigned int *owner;
  typedef pthread_mutex_t *_g4_t_v30;
  typedef char *_g4_t_service;
  typedef char *_g4_t_servicea;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_name;
  typedef char *_g4_t_v36;
  typedef char _g4_t_v37[4];
  typedef char _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef volatile int32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef volatile int32_t *_g4_t_v42[3];
  typedef int _g4_t_v43;
  typedef volatile int32_t *_g4_t_v44;
  typedef volatile int32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef volatile int32_t *_g4_t_v47[2];
  typedef int _g4_t_v48;
  typedef volatile int32_t *_g4_t_v49[2];
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t _g4_t_v53[2];
  typedef int _g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef volatile int32_t *_g4_t_v56;
  typedef int *_g4_t_v57;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_service)) > _g4_s1 ? (4u + sizeof(_g4_t_service)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_servicea)) > _g4_s2 ? (4u + sizeof(_g4_t_servicea)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_name)) > _g4_s5 ? (16u + sizeof(_g4_t_name)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v36)) > _g4_s6 ? (20u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v37)) > _g4_s7 ? (24u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v38)) > _g4_s8 ? (28u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v39)) > _g4_s9 ? (32u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v40)) > _g4_s10 ? (36u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v41)) > _g4_s11 ? (48u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v42)) > _g4_s12 ? (52u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v43)) > _g4_s13 ? (64u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v44)) > _g4_s14 ? (68u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v45)) > _g4_s15 ? (72u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v46)) > _g4_s16 ? (88u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v47)) > _g4_s17 ? (92u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v48)) > _g4_s18 ? (100u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v49)) > _g4_s19 ? (104u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_mutex)) > _g4_s20 ? (112u + sizeof(_g4_t_mutex)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v51)) > _g4_s21 ? (116u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v52)) > _g4_s22 ? (120u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v53)) > _g4_s23 ? (124u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v54)) > _g4_s24 ? (132u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v55)) > _g4_s25 ? (136u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v56)) > _g4_s26 ? (140u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v57)) > _g4_s27 ? (152u + sizeof(_g4_t_v57)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_service &service = *reinterpret_cast<_g4_t_service *>(_g4_sf + 4u);
  _g4_t_servicea &servicea = *reinterpret_cast<_g4_t_servicea *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_name &name = *reinterpret_cast<_g4_t_name *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 88u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 92u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 124u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 152u);

  v57 = &a1;
  v2 = a1;
  v3 = a2;
  if ( a1 == 0 || *(uint32_t *)(a2 + 60) == a1 )
  {
    v19 = *(uint32_t *)(a2 + 80);
    mutex = *(pthread_mutex_t **)(a2 + 64);
    v51 = *(uint32_t *)(a2 + 68);
    v52 = *(uint32_t *)(a2 + 72);
    v53[0] = *(uint32_t *)(a2 + 76);
    v53[1] = v19;
    v46 = 0;
    v47[0] = nullptr;
    v47[1] = nullptr;
    v54 = 0;
    v55 = nullptr;
    v56 = nullptr;
    boost::detail::shared_count::Destroy(v47);
    v33 = v3 + 52;
    if ( *(uint32_t *)(v3 + 84) != 0 )
    {
      g4_std_compat::string_construct_copy(v38, v3 + 56);
      g4_std_compat::string_construct_copy(v37, v33);
      g4_asio_resolver_iterator_tcp_create(
        (uint32_t *)&v48,
        *(uint32_t *)(v3 + 84),
        (int)(uintptr_t)(v37),
        (int)(uintptr_t)(v38));
      v20 = v48;
      v21 = nullptr;
      v39 = v48;
      v40 = v49[0];
      if ( v49[0] != nullptr )
      {
        __sync_add_and_fetch(v49[0] + 1, 1);
        v20 = v39;
        v21 = v40;
      }
      v22 = v54;
      v54 = v20;
      v39 = v22;
      v40 = v55;
      v55 = v21;
      boost::detail::shared_count::Destroy(&v40);
      v56 = v49[1];
      boost::detail::shared_count::Destroy(v49);
      g4_std::string::Destroy(v37);
      g4_std::string::Destroy(v38);
    }
    if ( *(uint32_t *)(v3 + 84) != 0 )
      freeaddrinfo(*(struct addrinfo **)(v3 + 84));
    g4_std::string::Destroy(v3 + 56);
    g4_std::string::Destroy(v33);
    v23 = *(volatile int32_t **)(v3 + 16);
    if ( v23 != nullptr && __sync_fetch_and_add(v23 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v23 + 12))(v23);
    v24 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
    if ( v24 != 0 && (v25 = *(unsigned int **)(v24 + 4)) != nullptr && *v25 == 0 )
    {
      *(uint8_t *)v3 = *(uint8_t *)(v3 + 88);
      *v25 = v3;
    }
    else
    {
      operator delete((void *)v3);
    }
    if ( v2 != 0 )
    {
      v26 = v54;
      v27 = nullptr;
      v43 = v54;
      v44 = v55;
      if ( v55 != nullptr )
      {
        __sync_add_and_fetch(v55 + 1, 1);
        v26 = v43;
        v27 = v44;
      }
      v28 = v56;
      v30 = mutex;
      v45 = v56;
      v34 = v52;
      if ( (uintptr_t)(mutex) < 0x10000u && ((uintptr_t)(mutex) & 1) != 0 )
        v30 = *(pthread_mutex_t **)((char *)mutex + *(uint32_t *)(v52 + v51) - 1);
      v41 = v26;
      v42[0] = v27;
      if ( v27 != nullptr )
      {
        __sync_add_and_fetch(v27 + 1, 1);
        v28 = v45;
      }
      v42[1] = v28;
      ((void (*)(int, uint32_t *, int *))v30)(v51 + v34, v53, &v41);
      boost::detail::shared_count::Destroy(v42);
      boost::detail::shared_count::Destroy(&v44);
      _mm_sfence();
    }
    boost::detail::shared_count::Destroy(&v55);
  }
  else
  {
    g4_std_compat::string_construct_copy(&v36, a2 + 56);
    service = v36;
    g4_std_compat::string_construct_copy(&name, v3 + 52);
    v5 = *(uint32_t *)(v3 + 16);
    v6 = name;
    v7 = service;
    if ( v5 != 0 && *(uint32_t *)(v5 + 4) != 0 )
    {
      if ( name != nullptr && *name == 0 )
        v6 = nullptr;
      if ( service != nullptr && *service == 0 )
        v7 = nullptr;
      servicea = v7;
      *(uint32_t *)__errno(v4, v7) = 0;
      v8 = getaddrinfo(v6, servicea, (const struct addrinfo *)(v3 + 20), (struct addrinfo **)(v3 + 84));
      switch ( v8 )
      {
        case 0:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 0;
          break;
        case 1:
        case 7:
        case 8:
          v11 = (int *)(&dword_20D3F60);
          if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
          {
            dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
            _cxa_guard_release((__guard *)&byte_20D3F58);
            __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
          }
          v14 = 1;
          break;
        case 2:
          v11 = (int *)(&dword_20D3F60);
          if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
          {
            dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
            _cxa_guard_release((__guard *)&byte_20D3F58);
            __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
          }
          v14 = 2;
          break;
        case 3:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 22;
          break;
        case 4:
          v11 = (int *)(&dword_20D3F60);
          if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
          {
            dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
            _cxa_guard_release((__guard *)&byte_20D3F58);
            __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
          }
          v14 = 3;
          break;
        case 5:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 97;
          break;
        case 6:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = 12;
          break;
        case 9:
          v11 = (int *)(&dword_20D3F78);
          if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
          {
            dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
            _cxa_guard_release((__guard *)&byte_20D3F70);
            __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
          }
          v14 = 9;
          break;
        case 10:
          v11 = (int *)(&dword_20D3F78);
          if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
          {
            dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
            _cxa_guard_release((__guard *)&byte_20D3F70);
            __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
          }
          v14 = 10;
          break;
        default:
          v11 = (int *)sub_18F81E0(v10, v9);
          v14 = *(uint32_t *)__errno(v13, v12);
          break;
      }
      *(uint32_t *)(v3 + 76) = v14;
      *(uint32_t *)(v3 + 80) = (uint32_t)(uintptr_t)(v11);
    }
    else
    {
      *(uint32_t *)(v3 + 80) = (uint32_t)(uintptr_t)(sub_18F81E0(v4, service));
      *(uint32_t *)(v3 + 76) = 125;
    }
    g4_std::string::Destroy(&name);
    g4_std::string::Destroy(&v36);
    v15 = *(pthread_mutex_t **)(v3 + 60);
    if ( ((uint8_t *)(v15))[20] == 0 )
      goto LABEL_45;
    v16 = *(pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
    if ( v16 == nullptr )
      goto LABEL_45;
    while ( v15 != *v16 )
    {
      v16 = (pthread_mutex_t **)v16[2];
      if ( v16 == nullptr )
        goto LABEL_45;
    }
    v17 = v16[1];
    if ( v17 != nullptr )
    {
      *(uint32_t *)v3 = 0;
      kind = (unsigned int *)((int32_t *)(v17))[3];
      if ( kind != nullptr )
      {
        *kind = v3;
        ((int32_t *)(v17))[3] = v3;
      }
      else
      {
        ((int32_t *)(v17))[3] = v3;
        ((int32_t *)(v17))[2] = v3;
      }
    }
    else
    {
LABEL_45:
      mutex = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v15) + (24 * (1)));
      pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v15) + (24 * (1))));
      LOBYTE(v51) = 1;
      *(uint32_t *)v3 = 0;
      owner = (unsigned int *)(uintptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v15) + (24 * (2))));
      if ( owner != nullptr )
      {
        *owner = v3;
        G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v15) + (24 * (2)))) = v3;
      }
      else
      {
        G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v15) + (24 * (2)))) = v3;
        G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v15) + (24 * (2)))) = v3;
      }
      boost::asio::detail::task_io_service::wake_one_thread_and_unlock(
        (boost::asio::detail::task_io_service *)v15,
        (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *)&mutex);
      if ( (uint8_t)v51 != 0 )
        pthread_mutex_unlock(mutex);
    }
  }
}


// ============================================================================
// Address:   0x1377280 (size: 549 bytes)
// Symbol:    _ZN5boost14singleton_poolINS_18pool_allocator_tagELj180EN6glotv316event_new_deleteENS_5mutexELj128ELj0EE7is_fromEPv
// Demangled: boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex,128u,0u>::is_from(void *)
// ============================================================================
template <>
unsigned int boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::is_from(
        boost::singleton_pool<boost::pool_allocator_tag, 180u, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int owner;
  unsigned int v9;
  int kind;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v16;
  int v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[5];
  typedef uint32_t _g4_t_v25[5];
  typedef uint32_t _g4_t_v26[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (5u + sizeof(_g4_t_v20)) > _g4_s0 ? (5u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v25)) > _g4_s5 ? (40u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v26)) > _g4_s6 ? (60u + sizeof(_g4_t_v26)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 5u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  if ( g4_fnstatic_daf5dd5106 == 0 )
  {
    g4_fnstatic_daf5dd5106 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v3 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v3 != 0 )
      {
        v19 = (int)(uintptr_t)(sub_18F81E0(v2, v1));
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v23), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v20) + 2);
        sub_19042E0(v26, &v23);
        g4_std::string::Destroy(&v23);
        v26[2] = v3;
        v26[3] = v19;
        v26[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v26[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 180;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_2117318) = (uintptr_t)(128);
      *(uintptr_t *)(unk_211731C) = (uintptr_t)(0);
    }
  }
  do
  {
    v4 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v7 = v4;
  }
  while ( v4 == 4 );
  if ( v4 != 0 )
  {
    v18 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v21), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v20));
    sub_19042E0(v24, &v21);
    g4_std::string::Destroy(&v21);
    v24[2] = v7;
    v24[3] = v18;
    v24[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v24[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  v9 = 0;
  kind = boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
  if ( owner != 0 )
  {
    do
    {
      if ( (unsigned int)(uintptr_t)(self) >= owner && (unsigned int)(uintptr_t)(self) < owner + kind - 8 )
      {
        LOBYTE(owner) = owner != 0;
        v9 = owner;
        goto LABEL_11;
      }
      v16 = (int *)(owner + kind - 4);
      kind = *v16;
      owner = *(v16 - 1);
    }
    while ( owner != 0 );
    v9 = 0;
  }
  do
  {
LABEL_11:
    v11 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v14 = v11;
  }
  while ( v11 == 4 );
  if ( v11 != 0 )
  {
    v17 = (int)(uintptr_t)(sub_18F81E0(v13, v12));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v22), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v20) + 1);
    sub_19042E0(v25, &v22);
    g4_std::string::Destroy(&v22);
    v25[2] = v14;
    v25[3] = v17;
    v25[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v9;
}


// ============================================================================
// Address:   0x1379d60 (size: 253 bytes)
// Symbol:    _ZN5boost14singleton_poolINS_18pool_allocator_tagELj180EN6glotv316event_new_deleteENS_5mutexELj128ELj0EE8get_poolEv
// Demangled: boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex,128u,0u>::get_pool(void)
// ============================================================================
static pthread_mutex_t *g4_b2_get_pool_180u()
{
  int v0;
  int v1;
  int v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v5)) > _g4_s1 ? (23u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 23u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  if ( g4_fnstatic_daf5dd5106 == 0 )
  {
    g4_fnstatic_daf5dd5106 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        v4 = (int)(uintptr_t)(sub_18F81E0(v1, v0));
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v5) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v5));
        sub_19042E0(v6, (char *)&v5 + 1);
        g4_std::string::Destroy((char *)&v5 + 1);
        v6[2] = v2;
        v6[3] = v4;
        v6[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v6[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 180;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_2117318) = (uintptr_t)(128);
      *(uintptr_t *)(unk_211731C) = (uintptr_t)(0);
    }
  }
  return (pthread_mutex_t *)(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
}


// ============================================================================
// Address:   0x137c200 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv313TCPConnectionENS0_13sp_ms_deleterIS3_EEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::TCPConnection *,boost::detail::sp_ms_deleter<glotv3::TCPConnection>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *,boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x137c230 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv313TCPConnectionENS0_13sp_ms_deleterIS3_EEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::TCPConnection *,boost::detail::sp_ms_deleter<glotv3::TCPConnection>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
char *boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *,boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *, boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x137c4c0 (size: 82 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv313TCPConnectionENS0_13sp_ms_deleterIS3_EEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::TCPConnection *,boost::detail::sp_ms_deleter<glotv3::TCPConnection>>::~sp_counted_impl_pd()
// ============================================================================
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIPN6glotv313TCPConnectionENS0_13sp_ms_deleterIS3_EEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *,boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::Destroy(
        boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *, boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093F28);
  if ( !v1 )
    sub_137C2B0((int)(uintptr_t)(self) + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x137c520 (size: 24 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv313TCPConnectionENS0_13sp_ms_deleterIS3_EEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::TCPConnection *,boost::detail::sp_ms_deleter<glotv3::TCPConnection>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
volatile int32_t *boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *,boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::dispose(
        boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *, boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>> *self)
{
  volatile int32_t *result;

  result = (volatile int32_t *)self;
  if ( *((uint8_t *)self + 16) != 0 )
    return (volatile int32_t *)(uintptr_t)(sub_137C2B0((int)(uintptr_t)(self) + 16));
  return result;
}


// ============================================================================
// Address:   0x137c540 (size: 90 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv313TCPConnectionENS0_13sp_ms_deleterIS3_EEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::TCPConnection *,boost::detail::sp_ms_deleter<glotv3::TCPConnection>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *,boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::Destroy_ea137c540(
        boost::detail::sp_counted_impl_pd<glotv3::TCPConnection::Self *, boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093F28);
  if ( !v1 )
    sub_137C2B0((int)(uintptr_t)(self) + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x137cbc0 (size: 397 bytes)
// Symbol:    _ZN5boost4asio6detail23reactive_socket_send_opINS0_15const_buffers_1ENS1_8write_opINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS7_EEEES3_NS1_14transfer_all_tENS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv313TCPConnectionEEENSC_5list1INSC_5valueIPSH_EEEEEEEEE11do_completeEPNS1_15task_io_serviceEPNS1_25task_io_service_operationERKNS_6system10error_codeEj
// Demangled: boost::asio::detail::reactive_socket_send_op<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::const_buffers_1,boost::asio::detail::transfer_all_t,boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::TCPConnection>,boost::_bi::list1<boost::_bi::value<glotv3::TCPConnection*>>>>>::do_complete(boost::asio::detail::task_io_service *,boost::asio::detail::task_io_service_operation *,boost::system::error_code const&,unsigned int)
// ============================================================================
// [pre-B42] template <>
pthread_mutex_t *boost::asio::detail::reactive_socket_send_op<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::const_buffers_1,boost::asio::detail::transfer_all_t,boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::TCPConnection::Self>,boost::_bi::list1<boost::_bi::value<glotv3::TCPConnection::Self*>>>>>::do_complete(
        pthread_mutex_t *a1,
        uint32_t *a2)
{
  int *v2;
  int (*v3)(int);
  int v4;
  uint32_t *v5;
  pthread_mutex_t *result;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef uint32_t _g4_t_v19[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v12 = a2[12];
  v11 = a2[13];
  v17 = a2[15];
  v15 = a2[17];
  v14 = a2[18];
  v2 = (int *)a2[11];
  v3 = (int (*)(int))a2[16];
  v13 = a2[3];
  v16 = a2[5];
  v4 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v4 != 0 && (v5 = *(uint32_t **)(v4 + 4)) != nullptr && *v5 == 0 )
  {
    *(uint8_t *)a2 = *((uint8_t *)a2 + 76);
    *v5 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    operator delete(a2);
  }
  result = a1;
  if ( a1 != nullptr )
  {
    if ( v13 != 0 || v16 == 0 || (v7 = v17 + v16, v17 + v16 == v11) )
    {
      if ( (uintptr_t)(v3) < 0x10000u && ((uintptr_t)(v3) & 1) != 0 )
        v3 = *(int (**)(int))((char *)v3 + *(uint32_t *)(v15 + v14) - 1);
      result = (pthread_mutex_t *)v3(v15 + v14);
    }
    else
    {
      v8 = 0;
      v9 = 0;
      if ( v17 + v16 <= v11 )
      {
        v8 = v11 - v7;
        v9 = v7 + v12;
        if ( v11 - v7 > 0x10000 )
          v8 = 0x10000;
      }
      v18[0] = v9;
      v18[1] = v8;
      v10 = *v2;
      v19[1] = v12;
      v19[4] = v17 + v16;
      v19[2] = v11;
      v19[6] = v15;
      v19[7] = v14;
      v19[0] = (uint32_t)(uintptr_t)(v2);
      v19[3] = 0;
      v19[5] = (uint32_t)(uintptr_t)(v3);
      result = (pthread_mutex_t *)(uintptr_t)(sub_137C5A0((int *)(v10 + 20), v2 + 1, v18, v19));
    }
    _mm_sfence();
  }
  return result;
}


// ============================================================================
// Address:   0x1413260 (size: 89 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP20FacebookInstallEventNS0_13sp_ms_deleterIS2_EEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<FacebookInstallEvent *,boost::detail::sp_ms_deleter<FacebookInstallEvent>>::~sp_counted_impl_pd()
// ============================================================================
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIP20FacebookInstallEventNS0_13sp_ms_deleterIS2_EEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *,boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::Destroy(
        boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *, boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094F08);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14132c0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP20FacebookInstallEventNS0_13sp_ms_deleterIS2_EEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<FacebookInstallEvent *,boost::detail::sp_ms_deleter<FacebookInstallEvent>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *,boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x14132f0 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP20FacebookInstallEventNS0_13sp_ms_deleterIS2_EEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<FacebookInstallEvent *,boost::detail::sp_ms_deleter<FacebookInstallEvent>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
char *boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *,boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *, boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x1413300 (size: 97 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP20FacebookInstallEventNS0_13sp_ms_deleterIS2_EEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<FacebookInstallEvent *,boost::detail::sp_ms_deleter<FacebookInstallEvent>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *,boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::Destroy_ea1413300(
        boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *, boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094F08);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x1413370 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP20FacebookInstallEventNS0_13sp_ms_deleterIS2_EEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<FacebookInstallEvent *,boost::detail::sp_ms_deleter<FacebookInstallEvent>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *,boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::dispose(
        boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *, boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x14a9270 (size: 27 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pINS_6random26lagged_fibonacci_01_engineIdLi48ELj44497ELj21034EEEED2Ev
// Demangled: boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::Destroy()
// ============================================================================
// Alternative name is '_ZN5boost6detail17sp_counted_impl_pINS_6random26lagged_fibonacci_01_engineIdLi48ELj44497ELj21034EEEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::Destroy(
        boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double, 48, 44497u, 21034u>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14a9290 (size: 9 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pINS_6random26lagged_fibonacci_01_engineIdLi48ELj44497ELj21034EEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::get_deleter()
{
  return 0;
}


// ============================================================================
// Address:   0x14a92a0 (size: 9 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pINS_6random26lagged_fibonacci_01_engineIdLi48ELj44497ELj21034EEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::get_untyped_deleter()
{
  return 0;
}


// ============================================================================
// Address:   0x14a92b0 (size: 45 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pINS_6random26lagged_fibonacci_01_engineIdLi48ELj44497ELj21034EEEED0Ev
// Demangled: boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::Destroy_ea14a92b0()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::Destroy_ea14a92b0(
        boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double, 48, 44497u, 21034u>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14a92e0 (size: 37 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pINS_6random26lagged_fibonacci_01_engineIdLi48ELj44497ELj21034EEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_p<boost::random::lagged_fibonacci_01_engine<double,48,44497u,21034u>>::dispose(
        void **self)
{
  operator delete(*(self + 3));
}


// ============================================================================
// Address:   0x14a9310 (size: 657 bytes)
// Symbol:    _ZN5boost9algorithm14erase_all_copyISsA2_cEET_RKS3_RKT0_
// Demangled: std::string boost::algorithm::erase_all_copy<std::string,char [2]>(std::string const&,char [2] const&)
// ============================================================================
template <>
uint32_t *boost::algorithm::erase_all_copy<std::string,char [2]>(uint32_t *a1, char **a2, char *s)
{
  size_t v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  uint32_t *v12;
  char *v13;
  int v14;
  char *v15;
  char *v16;
  uint32_t *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;

  v3 = strlen(s);
  v21 = *a2;
  v4 = &v21[*((uint32_t *)v21 - 3)];
  if ( *a2 != v4 )
  {
    v5 = &s[v3];
    if ( s != &s[v3] )
    {
      v6 = *a2;
      while ( 2 )
      {
        while ( v4 == v6 || *v6 != *s )
        {
LABEL_27:
          if ( v4 == ++v6 )
            goto LABEL_28;
        }
        v7 = s;
        v8 = v6;
        do
        {
          ++v8;
          ++v7;
          if ( v4 == v8 )
          {
            if ( v5 != v7 )
              goto LABEL_27;
            goto LABEL_11;
          }
          if ( v5 == v7 )
          {
            if ( v8 == v6 )
              goto LABEL_28;
LABEL_11:
            v9 = &dword_213B814;
            v23 = v8;
            *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
            v10 = v6;
            v11 = v21;
            while ( 1 )
            {
              if ( (int)*(v9 - 1) >= 0 )
              {
                v20 = v10;
                sub_19397C0(a1);
                v10 = v20;
                v9 = (uint32_t *)*a1;
              }
              sub_193A9B0((int)(uintptr_t)(a1), *(v9 - 3), 0, v11, v10 - v11);
              v12 = (uint32_t *)*a1;
              if ( *(int *)(*a1 - 4) >= 0 )
              {
                sub_19397C0(a1);
                v12 = (uint32_t *)*a1;
              }
              sub_193A9B0((int)(uintptr_t)(a1), *(v12 - 3), 0, nullptr, 0);
              v13 = v23;
              v22 = v23;
              v14 = (int)(uintptr_t)(&(*a2)[*((uint32_t *)*a2 - 3)]);
              if ( (char *)v14 != v23 )
                break;
LABEL_24:
              if ( v13 == v22 )
                goto LABEL_33;
              v11 = v23;
              v23 = v13;
              v9 = (uint32_t *)*a1;
              v10 = v22;
            }
            v15 = v23;
            while ( 2 )
            {
              while ( 1 )
              {
                v22 = v15;
                if ( (char *)v14 != v15 && *v15 == *s )
                  break;
LABEL_32:
                if ( (char *)v14 == ++v15 )
                  goto LABEL_33;
              }
              v16 = s;
              v13 = v15;
              v19 = v15;
              do
              {
                ++v13;
                ++v16;
                if ( (char *)v14 == v13 )
                {
                  v13 = &(*a2)[*((uint32_t *)*a2 - 3)];
                  if ( v5 == v16 )
                    goto LABEL_24;
                  goto LABEL_32;
                }
                if ( v5 == v16 )
                  goto LABEL_24;
              }
              while ( *v13 == *v16 );
              ++v15;
              if ( (char *)v14 != v19 + 1 )
                continue;
              break;
            }
LABEL_33:
            v18 = (uint32_t *)*a1;
            if ( *(int *)(*a1 - 4) >= 0 )
            {
              sub_19397C0(a1);
              v18 = (uint32_t *)*a1;
            }
            sub_193A9B0((int)(uintptr_t)(a1), *(v18 - 3), 0, v23, v14 - (uint32_t)(uintptr_t)(v23));
            return a1;
          }
        }
        while ( *v8 == *v7 );
        if ( v4 != ++v6 )
          continue;
        break;
      }
    }
  }
LABEL_28:
  g4_std_compat::string_construct_copy(a1, a2);
  return a1;
}


// ============================================================================
// Address:   0x14a95b0 (size: 109 bytes)
// Symbol:    _ZN5boost16exception_detail16throw_exception_ISt16invalid_argumentEEvRKT_PKcS7_i
// Demangled: void boost::exception_detail::throw_exception_<std::invalid_argument>(std::invalid_argument const&,char const*,char const*,int)
// ============================================================================
template <>
void __noreturn boost::exception_detail::throw_exception_<std::invalid_argument>(
        int a1,
        int a2,
        int a3,
        int a4)
{
  typedef uint8_t _g4_t_v4[4];
  typedef void (**_g4_t_v5)(boost::exception_detail::error_info_injector<std::invalid_argument> *__hidden);
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v9)) > _g4_s5 ? (28u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  g4_std_compat::string_construct_copy(v4, a1 + 4);
  v6 = 0;
  v5 = (void (**)(boost::exception_detail::error_info_injector<std::invalid_argument> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20938FC));
  v7 = a2;
  v8 = a3;
  v9 = a4;
  std::terminate();
}


// ============================================================================
// Address:   0x14a9620 (size: 588 bytes)
// Symbol:    _ZN5boost6random6detail15fill_array_realILi48ELj44497ENS_5uuids6detail18generator_iteratorINS4_8seed_rngEEEdEEvRT1_S8_RAT0__T2_
// Demangled: void boost::random::detail::fill_array_real<48,44497u,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>,double>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>,double (&)[44497u])
// ============================================================================
template <>
int boost::random::detail::fill_array_real<48,44497u,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng::Self>,double>(
        int *a1,
        int a2,
        int a3,
        int a4)
{
  int i;
  int v5;
  int v6;
  bool v7;
  double v8; // xmm0_8
  int v9;
  double v10; // xmm1_8
  int v11;
  double v12; // xmm0_8
  int v13;
  int result;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[8];
  typedef uint8_t _g4_t_v24[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v20)) > _g4_s1 ? (22u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v21)) > _g4_s2 ? (24u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v23)) > _g4_s4 ? (32u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v24)) > _g4_s5 ? (40u + sizeof(_g4_t_v24)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 22u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);

  for ( i = 0; i != 44497; ++i )
  {
    v15 = *a1;
    v16 = a1[1];
    if ( a2 == *a1 && a3 == v16 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v21), "Not enough elements in call to seed.", (int)(uintptr_t)(&v20));
      sub_1904220(v23, &v21);
      boost::exception_detail::throw_exception_<std::invalid_argument>(
        v23,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        376);
    }
    v17 = *(uint32_t *)(v15 + 20);
    v18 = v17 + 1;
    if ( v17 > 4 )
    {
      v19 = a1[1];
      boost::uuids::detail::seed_rng::sha1_random_digest_((FILE **)v15);
      v18 = 1;
      v17 = 0;
      v16 = v19;
    }
    v5 = *(uint32_t *)(v15 + 4 * v17);
    *(uint32_t *)(v15 + 20) = v18;
    v6 = *a1;
    v7 = a2 == *a1;
    a1[1] = v5;
    if ( v7 && a3 == v5 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v22), "Not enough elements in call to seed.", (int)(uintptr_t)(&v20) + 1);
      sub_1904220(v24, &v22);
      boost::exception_detail::throw_exception_<std::invalid_argument>(
        v24,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        381);
    }
    v8 = (double)(uint16_t)v5;
    v9 = *(uint32_t *)(v6 + 20);
    v10 = (double)v16 * 3.552713678800501e-15;
    v11 = v9 + 1;
    v12 = v8 * 0.0000152587890625 + v10;
    if ( v9 > 4 )
    {
      boost::uuids::detail::seed_rng::sha1_random_digest_((FILE **)v6);
      v11 = 1;
      v9 = 0;
    }
    v13 = *(uint32_t *)(v6 + 4 * v9);
    *(uint32_t *)(v6 + 20) = v11;
    a1[1] = v13;
    if ( v12 < 0.0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        385,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "val >= 0");
    if ( v12 >= 1.0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        386,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "val < 1");
    result = a4;
    *(double *)(a4 + 8 * i) = v12;
  }
  return result;
}


// ============================================================================
// Address:   0x14a9cb0 (size: 372 bytes)
// Symbol:    _ZN5boost6random6detail15seed_array_realILi48ELj44497ENS1_18generator_seed_seqINS0_26linear_congruential_engineIjLj16807ELj0ELj2147483647EEEEEdEEvRT1_RAT0__T2_
// Demangled: void boost::random::detail::seed_array_real<48,44497u,boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>,double>(boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>> &,double (&)[44497u])
// ============================================================================
template <>
unsigned int boost::random::detail::seed_array_real<48,44497u,boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>,double>(
        unsigned int **a1,
        int a2)
{
  char *v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int i;
  unsigned int result;
  double v7; // xmm0_8
  typedef uint32_t _g4_t_v8[88994];
  typedef char _g4_t_v9;
  enum : size_t {
    _g4_s0 = 356080u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (355984u + sizeof(_g4_t_v9)) > _g4_s1 ? (355984u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 355984u);

  v2 = (char *)v8;
  do
  {
    v3 = *a1;
    v4 = 16807 * (uint64_t)**a1 % 0x7FFFFFFF;
    *(uint32_t *)v2 = v4;
    v2 += 4;
    *v3 = v4;
  }
  while ( v2 != &v9 );
  for ( i = 0; i != 44497; ++i )
  {
    result = v8[2 * i] + 0x80000000;
    v7 = (double)LOWORD(v8[2 * i + 1]) * 0.0000152587890625 + (double)(unsigned int)v8[2 * i] * 3.552713678800501e-15;
    if ( v7 < 0.0 )
      __assert2(
                 "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
                 350,
                 "void boost::random::detail::seed_array_real_impl(const uint_least32_t*, RealType (&)[n]) [with int w = "
                 "48, unsigned int n = 44497u, RealType = double, uint_least32_t = unsigned int]",
                 "val >= 0");
    if ( v7 >= 1.0 )
      __assert2(
                 "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
                 351,
                 "void boost::random::detail::seed_array_real_impl(const uint_least32_t*, RealType (&)[n]) [with int w = "
                 "48, unsigned int n = 44497u, RealType = double, uint_least32_t = unsigned int]",
                 "val < 1");
    *(double *)(a2 + 8 * i) = v7;
  }
  return result;
}


// ============================================================================
// Address:   0x14ca410 (size: 218 bytes)
// Symbol:    _Z21comparePointedStringsN5boost10shared_ptrISsEES1_
// Demangled: comparePointedStrings(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)
// ============================================================================
unsigned int comparePointedStrings(const void ***a1, const void ***a2)
{
  const void **v2;
  const void **v3;
  uint32_t *s1;
  const void *s2;
  size_t v6;
  size_t v7;
  size_t n;
  unsigned int v9;
  unsigned int v10;

  v2 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = std::basic_strin"
      "g<char>, typename boost::detail::sp_dereference<T>::type = std::basic_string<char>&]",
      "px != 0");
    v2 = *a2;
  }
  v3 = *a1;
  if ( *a1 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = std::basic_strin"
      "g<char>, typename boost::detail::sp_dereference<T>::type = std::basic_string<char>&]",
      "px != 0");
    v3 = *a1;
  }
  s1 = (uint32_t *)(*v3);
  s2 = *v2;
  v6 = *(s1 - 3);
  v7 = *((uint32_t *)*v2 - 3);
  n = v6;
  if ( v7 <= v6 )
    n = v7;
  v9 = v6 - v7;
  v10 = memcmp(s1, s2, n);
  if ( v10 == 0 )
    v10 = v9;
  return v10 >> 31;
}


// ============================================================================
// Address:   0x14e9d50 (size: 27 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pIN4gaia17AppDetectionEventEED2Ev
// Demangled: boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent>::Destroy()
// ============================================================================
// Alternative name is '_ZN5boost6detail17sp_counted_impl_pIN4gaia17AppDetectionEventEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self>::Destroy(
        boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14e9d70 (size: 89 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP12CrmGlotEventNS0_13sp_ms_deleterIS2_EEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<CrmGlotEvent *,boost::detail::sp_ms_deleter<CrmGlotEvent>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B43] template <>
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIP12CrmGlotEventNS0_13sp_ms_deleterIS2_EEED1Ev'
void boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *,boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::Destroy(
        boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *, boost::detail::sp_ms_deleter<CrmGlotEvent::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F88);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14e9dd0 (size: 89 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia9CrmActionENS0_13sp_ms_deleterIS3_EEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmAction *,boost::detail::sp_ms_deleter<gaia::CrmAction>>::~sp_counted_impl_pd()
// ============================================================================
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIPN4gaia9CrmActionENS0_13sp_ms_deleterIS3_EEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *,boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::Destroy(
        boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *, boost::detail::sp_ms_deleter<gaia::CrmAction::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F68);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14e9e30 (size: 89 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPSsNS0_13sp_ms_deleterISsEEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::~sp_counted_impl_pd()
// ============================================================================
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIPSsNS0_13sp_ms_deleterISsEEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::Destroy(
        boost::detail::sp_counted_impl_pd<std::string *, boost::detail::sp_ms_deleter<std::string>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F08);
  if ( !v1 )
  {
    g4_std::string::Destroy((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14e9e90 (size: 89 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv310EventOfLogENS0_13sp_ms_deleterIS3_EEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::EventOfLog *,boost::detail::sp_ms_deleter<glotv3::EventOfLog>>::~sp_counted_impl_pd()
// ============================================================================
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIPN6glotv310EventOfLogENS0_13sp_ms_deleterIS3_EEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::Destroy(
        boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095EE8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14e9ef0 (size: 28 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pIN4gaia17AppDetectionEventEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent>::dispose(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self>::dispose(
        boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self> *self)
{
  int result;

  result = *((uint32_t *)self + 3);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*((uint32_t *)self + 3));
  return result;
}


// ============================================================================
// Address:   0x14e9f10 (size: 9 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pIN4gaia17AppDetectionEventEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self>::get_deleter()
{
  return 0;
}


// ============================================================================
// Address:   0x14e9f20 (size: 9 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pIN4gaia17AppDetectionEventEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self>::get_untyped_deleter()
{
  return 0;
}


// ============================================================================
// Address:   0x14e9f30 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP12CrmGlotEventNS0_13sp_ms_deleterIS2_EEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<CrmGlotEvent *,boost::detail::sp_ms_deleter<CrmGlotEvent>>::get_deleter(boost::detail::sp_typeinfo const&)
// [pre-B43] template <>
// ============================================================================
int boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *,boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x14e9f60 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP12CrmGlotEventNS0_13sp_ms_deleterIS2_EEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<CrmGlotEvent *,boost::detail::sp_ms_deleter<CrmGlotEvent>>::get_untyped_deleter(void)
// [pre-B43] template <>
// ============================================================================
char *boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *,boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *, boost::detail::sp_ms_deleter<CrmGlotEvent::Self>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x14e9f70 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia9CrmActionENS0_13sp_ms_deleterIS3_EEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmAction *,boost::detail::sp_ms_deleter<gaia::CrmAction>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *,boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x14e9fa0 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia9CrmActionENS0_13sp_ms_deleterIS3_EEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmAction *,boost::detail::sp_ms_deleter<gaia::CrmAction>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
char *boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *,boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *, boost::detail::sp_ms_deleter<gaia::CrmAction::Self>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x14e9fb0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia15CrmFatigueGroupENS0_13sp_ms_deleterIS3_EEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x14e9fe0 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia15CrmFatigueGroupENS0_13sp_ms_deleterIS3_EEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
char *boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x14e9ff0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPSsNS0_13sp_ms_deleterISsEEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<std::string>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x14ea020 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPSsNS0_13sp_ms_deleterISsEEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
char *boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<std::string *, boost::detail::sp_ms_deleter<std::string>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x14ea030 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv310EventOfLogENS0_13sp_ms_deleterIS3_EEE11get_deleterERKNS0_11sp_typeinfoE
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::EventOfLog *,boost::detail::sp_ms_deleter<glotv3::EventOfLog>>::get_deleter(boost::detail::sp_typeinfo const&)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::get_deleter(
        int a1,
        void *a2)
{
  int result;

  result = 0;
  if ( a2 == &boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::ti_ )
    return a1 + 16;
  return result;
}


// ============================================================================
// Address:   0x14ea060 (size: 12 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv310EventOfLogENS0_13sp_ms_deleterIS3_EEE19get_untyped_deleterEv
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::EventOfLog *,boost::detail::sp_ms_deleter<glotv3::EventOfLog>>::get_untyped_deleter(void)
// ============================================================================
// [pre-B42] template <>
char *boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::get_untyped_deleter(
        boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>> *self)
{
  return (char *)self + 16;
}


// ============================================================================
// Address:   0x14ea070 (size: 45 bytes)
// Symbol:    _ZN5boost6detail17sp_counted_impl_pIN4gaia17AppDetectionEventEED0Ev
// Demangled: boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent>::Destroy_ea14ea070()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self>::Destroy_ea14ea070(
        boost::detail::sp_counted_impl_p<gaia::AppDetectionEvent::Self> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14ea100 (size: 97 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv310EventOfLogENS0_13sp_ms_deleterIS3_EEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::EventOfLog *,boost::detail::sp_ms_deleter<glotv3::EventOfLog>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::Destroy_ea14ea100(
        boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095EE8);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14ea170 (size: 97 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia9CrmActionENS0_13sp_ms_deleterIS3_EEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmAction *,boost::detail::sp_ms_deleter<gaia::CrmAction>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *,boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::Destroy_ea14ea170(
        boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *, boost::detail::sp_ms_deleter<gaia::CrmAction::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F68);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14ea1e0 (size: 97 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP12CrmGlotEventNS0_13sp_ms_deleterIS2_EEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<CrmGlotEvent *,boost::detail::sp_ms_deleter<CrmGlotEvent>>::~sp_counted_impl_pd()
// [pre-B43] template <>
// ============================================================================
void boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *,boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::Destroy_ea14ea1e0(
        boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *, boost::detail::sp_ms_deleter<CrmGlotEvent::Self>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F88);
  if ( !v1 )
  {
    (**((void (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14ea370 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIP12CrmGlotEventNS0_13sp_ms_deleterIS2_EEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<CrmGlotEvent *,boost::detail::sp_ms_deleter<CrmGlotEvent>>::dispose(void)
// [pre-B43] template <>
// ============================================================================
int boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *,boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::dispose(
        boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *, boost::detail::sp_ms_deleter<CrmGlotEvent::Self>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x14ea3a0 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia9CrmActionENS0_13sp_ms_deleterIS3_EEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmAction *,boost::detail::sp_ms_deleter<gaia::CrmAction>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *,boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::dispose(
        boost::detail::sp_counted_impl_pd<gaia::CrmAction::Self *, boost::detail::sp_ms_deleter<gaia::CrmAction::Self>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x14ea3d0 (size: 61 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPSsNS0_13sp_ms_deleterISsEEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::dispose(
        boost::detail::sp_counted_impl_pd<std::string *, boost::detail::sp_ms_deleter<std::string>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    g4_std::string::Destroy((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x14ea410 (size: 36 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN6glotv310EventOfLogENS0_13sp_ms_deleterIS3_EEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<glotv3::EventOfLog *,boost::detail::sp_ms_deleter<glotv3::EventOfLog>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
int boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::dispose(
        boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>> *self)
{
  int result;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    result = (**((int (***)(char *))self + 5))((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x14ea4e0 (size: 97 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPSsNS0_13sp_ms_deleterISsEEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<std::string *,boost::detail::sp_ms_deleter<std::string>>::Destroy_ea14ea4e0(
        boost::detail::sp_counted_impl_pd<std::string *, boost::detail::sp_ms_deleter<std::string>> *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F08);
  if ( !v1 )
  {
    g4_std::string::Destroy((char *)self + 20);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14ea610 (size: 148 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia15CrmFatigueGroupENS0_13sp_ms_deleterIS3_EEE7disposeEv
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup>>::dispose(void)
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::dispose(
        boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *self)
{
  void *v1;
  void **v2;
  unsigned int v3;
  void *v4;

  if ( *((uint8_t *)self + 16) != 0 )
  {
    v1 = *((void **)self + 11);
    if ( v1 != nullptr )
    {
      v2 = *((void ***)self + 16);
      v3 = *((uint32_t *)self + 20) + 4;
      if ( v3 > (unsigned int)(uintptr_t)(v2) )
      {
        do
        {
          v4 = *v2++;
          operator delete(v4);
        }
        while ( v3 > (unsigned int)(uintptr_t)(v2) );
        v1 = *((void **)self + 11);
      }
      operator delete(v1);
    }
    if ( *((uint32_t *)self + 8) != 0 )
      operator delete(*((void **)self + 8));
    g4_std::string::Destroy((char *)self + 28);
    *((uint8_t *)self + 16) = 0;
  }
}


// ============================================================================
// Address:   0x14ea6b0 (size: 172 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia15CrmFatigueGroupENS0_13sp_ms_deleterIS3_EEED2Ev
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup>>::~sp_counted_impl_pd()
// ============================================================================
// Alternative name is '_ZN5boost6detail18sp_counted_impl_pdIPN4gaia15CrmFatigueGroupENS0_13sp_ms_deleterIS3_EEED1Ev'
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::Destroy(
        boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *self)
{
  bool v1;
  void *v2;
  void **v3;
  unsigned int v4;
  void *v5;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F48);
  if ( !v1 )
  {
    v2 = *((void **)self + 11);
    if ( v2 != nullptr )
    {
      v3 = *((void ***)self + 16);
      v4 = *((uint32_t *)self + 20) + 4;
      if ( v4 > (unsigned int)(uintptr_t)(v3) )
      {
        do
        {
          v5 = *v3++;
          operator delete(v5);
        }
        while ( v4 > (unsigned int)(uintptr_t)(v3) );
        v2 = *((void **)self + 11);
      }
      operator delete(v2);
    }
    if ( *((uint32_t *)self + 8) != 0 )
      operator delete(*((void **)self + 8));
    g4_std::string::Destroy((char *)self + 28);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
}


// ============================================================================
// Address:   0x14ea760 (size: 180 bytes)
// Symbol:    _ZN5boost6detail18sp_counted_impl_pdIPN4gaia15CrmFatigueGroupENS0_13sp_ms_deleterIS3_EEED0Ev
// Demangled: boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup>>::~sp_counted_impl_pd()
// ============================================================================
// [pre-B42] template <>
void boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *,boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::Destroy_ea14ea760(
        boost::detail::sp_counted_impl_pd<gaia::CrmFatigueGroup::Self *, boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>> *self)
{
  bool v1;
  void *v2;
  void **v3;
  unsigned int v4;
  void *v5;

  v1 = *((uint8_t *)self + 16) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F48);
  if ( !v1 )
  {
    v2 = *((void **)self + 11);
    if ( v2 != nullptr )
    {
      v3 = *((void ***)self + 16);
      v4 = *((uint32_t *)self + 20) + 4;
      if ( v4 > (unsigned int)(uintptr_t)(v3) )
      {
        do
        {
          v5 = *v3++;
          operator delete(v5);
        }
        while ( v4 > (unsigned int)(uintptr_t)(v3) );
        v2 = *((void **)self + 11);
      }
      operator delete(v2);
    }
    if ( *((uint32_t *)self + 8) != 0 )
      operator delete(*((void **)self + 8));
    g4_std::string::Destroy((char *)self + 28);
    *((uint8_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059EC8);
  operator delete(self);
}


// ============================================================================
// Address:   0x14eb640 (size: 295 bytes)
// Symbol:    _ZN5boost11make_sharedIN6glotv310EventOfLogEA4_cSsEENS_6detail15sp_if_not_arrayIT_E4typeERKT0_RKT1_
// Demangled: boost::detail::sp_if_not_array<glotv3::EventOfLog>::type boost::make_shared<glotv3::EventOfLog,char [4],std::string>(char [4] const&,std::string const&)
// ============================================================================
glotv3::Event::Self **boost::make_shared_ec64e5(
        glotv3::Event::Self **a1,
        char *a2,
        int a3)
{
  int v3;
  glotv3::Event::Self *v4;
  typedef char *_g4_t_untyped_deleter;
  typedef uint8_t _g4_t_v8[5];
  typedef uint8_t *_g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_untyped_deleter)) > _g4_s0 ? (12u + sizeof(_g4_t_untyped_deleter)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v8)) > _g4_s1 ? (23u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_untyped_deleter &untyped_deleter = *reinterpret_cast<_g4_t_untyped_deleter *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 23u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v3 = (int)(uintptr_t)(operator new(0xC8u));
  *(uint32_t *)(v3 + 4) = 1;
  *(uint32_t *)(v3 + 8) = 1;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2095EE8);
  *(uint32_t *)(v3 + 12) = 0;
  *(uint8_t *)(v3 + 16) = 0;
  untyped_deleter = (char *)(boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<glotv3::EventOfLog::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>> *)v3));
  v4 = (glotv3::Event::Self *)(untyped_deleter + 4);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v8[1]), a2, (int)(uintptr_t)(v8));
  g4_std_compat::string_construct_copy(v9, a3);
  if ( untyped_deleter != (char *)-4 )
    glotv3::EventOfLog::Construct(v4, (uint8_t **)&v8[1], v9, (char *)&dword_0 + 1);
  g4_std::string::Destroy(v9);
  g4_std::string::Destroy(&v8[1]);
  *untyped_deleter = 1;
  *a1 = v4;
  a1[1] = (glotv3::Event::Self *)v3;
  if ( *(uint32_t *)(v3 + 4) == 0 )
  {
    (*(void (**)(int))(*(uint32_t *)v3 + 8))(v3);
    if ( (*(uint32_t *)(v3 + 8))-- == 1 )
      (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
  }
  return a1;
}


// ============================================================================
// Address:   0x14eb770 (size: 239 bytes)
// Symbol:    _ZN5boost11make_sharedI12CrmGlotEventEENS_6detail15sp_if_not_arrayIT_E4typeEv
// Demangled: boost::detail::sp_if_not_array<CrmGlotEvent>::type boost::make_shared<CrmGlotEvent>(void)
// ============================================================================
glotv3::Event::Self **boost::make_shared_19a5e0(glotv3::Event::Self **a1)
{
  int v1;
  char *untyped_deleter;
  char *v5;
  glotv3::Event::Self *v6;

  v1 = (int)(uintptr_t)(operator new(0xC8u));
  *(uint32_t *)(v1 + 4) = 1;
  *(uint32_t *)(v1 + 8) = 1;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2095F88);
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = (uint8_t)(uintptr_t)((char *)(0));
  untyped_deleter = boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *,boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<CrmGlotEvent::Self *, boost::detail::sp_ms_deleter<CrmGlotEvent::Self>> *)v1);
  v6 = (glotv3::Event::Self *)(untyped_deleter + 4);
  if ( untyped_deleter != (char *)-4 )
  {
    memset(v6, 0, 0xB4u);
    v5 = untyped_deleter;
    glotv3::Event::Construct(v6, false);
    untyped_deleter = v5;
    *((uint32_t *)v5 + 1) = ((uint32_t)(uintptr_t)&off_2095FA8);
  }
  *untyped_deleter = 1;
  *a1 = v6;
  a1[1] = (glotv3::Event::Self *)v1;
  if ( *(uint32_t *)(v1 + 4) == 0 )
  {
    (*(void (**)(int))(*(uint32_t *)v1 + 8))(v1);
    if ( (*(uint32_t *)(v1 + 8))-- == 1 )
      (*(void (**)(int))(*(uint32_t *)v1 + 12))(v1);
  }
  return a1;
}


// ============================================================================
// Address:   0x14ec420 (size: 957 bytes)
// Symbol:    _ZNSt6vectorIN5boost10shared_ptrISsEESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
// Demangled: std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string>*,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,boost::shared_ptr<std::string> const&)
// ============================================================================
static int g4_compat_def_21(size_t **a1, size_t *a2, size_t *a3)
{
  size_t **v3;
  size_t *v4;
  size_t *v5;
  size_t v6;
  size_t *v7;
  uint32_t *v8;
  char *v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  uint32_t *v14;
  bool v15;
  uint32_t *v16;
  int result;
  size_t *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  size_t *v23;
  size_t v24;
  size_t *v25;
  size_t *v26;
  size_t *v27;
  size_t v28;
  char *v29;
  size_t *v30;
  uint32_t *v31;
  size_t v32;
  unsigned int v33;
  char *v34;
  char *v35;
  char *v36;
  uint32_t *v37;
  int v38;
  size_t *v39;
  char *v40;
  uint32_t *v41;
  size_t *v42;
  size_t *v43;
  unsigned int v44;
  int v45;
  size_t v46;
  int v47;

  v3 = a1;
  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    v5 = nullptr;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 2);
      v6 = *(v4 - 1);
      v4[1] = v6;
      if ( v6 != 0 )
        ++*(uint32_t *)(v6 + 4);
      v5 = a1[1];
    }
    v7 = v5 + 2;
    a1[1] = v7;
    v8 = (uint32_t *)a3[1];
    v39 = v7;
    v46 = *a3;
    v41 = v8;
    if ( v8 != nullptr )
    {
      ++v8[1];
      v39 = a1[1];
    }
    if ( ((char *)(v39 - 4) - (char *)a2) >> 3 > 0 )
    {
      v9 = (char *)(v39 - 2);
      v45 = ((char *)(v39 - 4) - (char *)a2) >> 3;
      v10 = (int)(uintptr_t)(v39 - 3);
      do
      {
        while ( 1 )
        {
          v9 -= 8;
          v11 = (char *)(v9 - (char *)v39);
          v12 = *((uint32_t *)v9 - 2);
          v13 = *((uint32_t *)v9 - 1);
          if ( v13 != 0 )
            ++*(uint32_t *)(v13 + 4);
          *(uint32_t *)v9 = v12;
          v14 = *(uint32_t **)&v11[v10 + 16];
          *(uint32_t *)&v11[v10 + 16] = v13;
          if ( v14 != nullptr )
          {
            v15 = v14[1]-- == 1;
            if ( v15 )
            {
              v38 = v10;
              (*(void (**)(uint32_t *))(*v14 + 8))(v14);
              v15 = v14[2]-- == 1;
              v10 = v38;
              if ( v15 )
                break;
            }
          }
          if ( --v45 == 0 )
            goto LABEL_17;
        }
        (*(void (**)(int, uint32_t *))(*v14 + 12))(v38, v14);
        v15 = v45-- == 1;
        v10 = v38;
      }
      while ( !v15 );
    }
LABEL_17:
    if ( v41 != nullptr )
      ++v41[1];
    v16 = (uint32_t *)a2[1];
    *a2 = v46;
    a2[1] = (size_t)v41;
    if ( v16 != nullptr )
    {
      v15 = v16[1]-- == 1;
      if ( v15 )
      {
        (*(void (**)(uint32_t *))(*v16 + 8))(v16);
        v15 = v16[2]-- == 1;
        if ( v15 )
          (*(void (**)(uint32_t *))(*v16 + 12))(v16);
      }
    }
    result = (int)(uintptr_t)(v41);
    if ( v41 != nullptr )
    {
      result = v41[1] - 1;
      v15 = v41[1] == 1;
      v41[1] = result;
      if ( v15 )
      {
        (*(void (**)(uint32_t *))(*v41 + 8))(v41);
        result = v41[2] - 1;
        v15 = v41[2] == 1;
        v41[2] = result;
        if ( v15 )
          return (*(int (**)(uint32_t *))(*v41 + 12))(v41);
      }
    }
    return result;
  }
  v18 = *a1;
  v19 = ((char *)v4 - (char *)*a1) >> 3;
  if ( v19 == 0 )
  {
    v47 = 2;
    v21 = ((char *)a2 - (char *)v18) >> 3;
    v22 = (int)(uintptr_t)(operator new(8u));
    goto LABEL_32;
  }
  v20 = 2 * v19;
  if ( v19 > 2 * v19 || v20 > 0x1FFFFFFF )
  {
    v47 = -2;
    v21 = ((char *)a2 - (char *)v18) >> 3;
LABEL_31:
    v22 = (int)(uintptr_t)(operator new(v47 * 4));
LABEL_32:
    v43 = (size_t *)v22;
    v44 = v22 + 8;
    goto LABEL_33;
  }
  v21 = ((char *)a2 - (char *)v18) >> 3;
  v47 = 4 * v19;
  if ( v20 != 0 )
    goto LABEL_31;
  v44 = 8;
  v43 = nullptr;
LABEL_33:
  v23 = &v43[2 * v21];
  if ( v23 != nullptr )
  {
    *v23 = *a3;
    v24 = a3[1];
    v23[1] = v24;
    if ( v24 != 0 )
      ++*(uint32_t *)(v24 + 4);
  }
  v25 = *a1;
  if ( *a1 != a2 )
  {
    v26 = *a1;
    v27 = v43;
    do
    {
      if ( v27 != nullptr )
      {
        *v27 = *v26;
        v28 = v26[1];
        v27[1] = v28;
        if ( v28 != 0 )
          ++*(uint32_t *)(v28 + 4);
      }
      v26 += 2;
      v27 += 2;
    }
    while ( v26 != a2 );
    v44 = (unsigned int)(uintptr_t)(&v43[2 * ((unsigned int)((char *)a2 - (char *)(v25 + 2)) >> 3) + 4]);
  }
  v29 = (char *)a1[1];
  if ( v29 != (char *)a2 )
  {
    v30 = a2;
    v31 = (uint32_t *)v44;
    do
    {
      if ( v31 != nullptr )
      {
        *v31 = *v30;
        v32 = v30[1];
        v31[1] = v32;
        if ( v32 != 0 )
          ++*(uint32_t *)(v32 + 4);
      }
      v30 += 2;
      v31 += 2;
    }
    while ( v29 != (char *)v30 );
    v33 = v44 + 8 * ((unsigned int)(v29 - (char *)(a2 + 2)) >> 3) + 8;
    v29 = (char *)a1[1];
    v44 = v33;
  }
  v34 = (char *)*a1;
  if ( *a1 != (size_t *)v29 )
  {
    v35 = (char *)*a1;
    v40 = v34 + 4;
    v36 = v29;
    v42 = *a1;
    do
    {
      while ( 1 )
      {
        v37 = *(uint32_t **)&v40[v35 - (char *)v42];
        if ( v37 != nullptr )
        {
          v15 = v37[1]-- == 1;
          if ( v15 )
          {
            (*(void (**)(uint32_t *))(*v37 + 8))(v37);
            v15 = v37[2]-- == 1;
            if ( v15 )
              break;
          }
        }
        v35 += 8;
        if ( v35 == v36 )
          goto LABEL_57;
      }
      v35 += 8;
      (*(void (**)(uint32_t *))(*v37 + 12))(v37);
    }
    while ( v35 != v36 );
LABEL_57:
    v3 = a1;
    v34 = (char *)*a1;
  }
  if ( v34 != nullptr )
    operator delete(v34);
  *v3 = v43;
  v3[1] = (size_t *)v44;
  v3[2] = &v43[v47];
  return (int)(uintptr_t)(&v43[v47]);
}


// ============================================================================
// Address:   0x14ec7e0 (size: 957 bytes)
// Symbol:    _ZNSt6vectorIN5boost10shared_ptrIN4gaia9CrmActionEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
// Demangled: std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction>*,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,boost::shared_ptr<gaia::CrmAction> const&)
// ============================================================================
static int g4_compat_def_22(size_t **a1, size_t *a2, size_t *a3)
{
  size_t **v3;
  size_t *v4;
  size_t *v5;
  size_t v6;
  size_t *v7;
  uint32_t *v8;
  char *v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  uint32_t *v14;
  bool v15;
  int result;
  uint32_t *v17;
  size_t *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  size_t *v23;
  size_t v24;
  size_t *v25;
  size_t *v26;
  size_t *v27;
  size_t v28;
  char *v29;
  size_t *v30;
  uint32_t *v31;
  size_t v32;
  unsigned int v33;
  char *v34;
  char *v35;
  char *v36;
  uint32_t *v37;
  int v38;
  size_t *v39;
  char *v40;
  uint32_t *v41;
  size_t *v42;
  size_t *v43;
  unsigned int v44;
  int v45;
  size_t v46;
  int v47;

  v3 = a1;
  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    v5 = nullptr;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 2);
      v6 = *(v4 - 1);
      v4[1] = v6;
      if ( v6 != 0 )
        ++*(uint32_t *)(v6 + 4);
      v5 = a1[1];
    }
    v7 = v5 + 2;
    a1[1] = v7;
    v8 = (uint32_t *)a3[1];
    v39 = v7;
    v46 = *a3;
    v41 = v8;
    if ( v8 != nullptr )
    {
      ++v8[1];
      v39 = a1[1];
    }
    if ( ((char *)(v39 - 4) - (char *)a2) >> 3 > 0 )
    {
      v9 = (char *)(v39 - 2);
      v45 = ((char *)(v39 - 4) - (char *)a2) >> 3;
      v10 = (int)(uintptr_t)(v39 - 3);
      do
      {
        while ( 1 )
        {
          v9 -= 8;
          v11 = (char *)(v9 - (char *)v39);
          v12 = *((uint32_t *)v9 - 2);
          v13 = *((uint32_t *)v9 - 1);
          if ( v13 != 0 )
            ++*(uint32_t *)(v13 + 4);
          *(uint32_t *)v9 = v12;
          v14 = *(uint32_t **)&v11[v10 + 16];
          *(uint32_t *)&v11[v10 + 16] = v13;
          if ( v14 != nullptr )
          {
            v15 = v14[1]-- == 1;
            if ( v15 )
            {
              v38 = v10;
              (*(void (**)(uint32_t *))(*v14 + 8))(v14);
              v15 = v14[2]-- == 1;
              v10 = v38;
              if ( v15 )
                break;
            }
          }
          if ( --v45 == 0 )
            goto LABEL_17;
        }
        (*(void (**)(int, uint32_t *))(*v14 + 12))(v38, v14);
        v15 = v45-- == 1;
        v10 = v38;
      }
      while ( !v15 );
    }
LABEL_17:
    if ( v41 != nullptr )
      ++v41[1];
    result = (int)(uintptr_t)(v41);
    v17 = (uint32_t *)a2[1];
    *a2 = v46;
    a2[1] = (size_t)v41;
    if ( v17 != nullptr )
    {
      result = v17[1] - 1;
      v15 = v17[1] == 1;
      v17[1] = result;
      if ( v15 )
      {
        (*(void (**)(uint32_t *))(*v17 + 8))(v17);
        result = v17[2] - 1;
        v15 = v17[2] == 1;
        v17[2] = result;
        if ( v15 )
          result = (*(int (**)(uint32_t *))(*v17 + 12))(v17);
      }
    }
    if ( v41 != nullptr )
    {
      result = v41[1] - 1;
      v15 = v41[1] == 1;
      v41[1] = result;
      if ( v15 )
      {
        (*(void (**)(uint32_t *))(*v41 + 8))(v41);
        result = v41[2] - 1;
        v15 = v41[2] == 1;
        v41[2] = result;
        if ( v15 )
          return (*(int (**)(uint32_t *))(*v41 + 12))(v41);
      }
    }
    return result;
  }
  v18 = *a1;
  v19 = ((char *)v4 - (char *)*a1) >> 3;
  if ( v19 == 0 )
  {
    v47 = 2;
    v21 = ((char *)a2 - (char *)v18) >> 3;
    v22 = (int)(uintptr_t)(operator new(8u));
    goto LABEL_32;
  }
  v20 = 2 * v19;
  if ( v19 > 2 * v19 || v20 > 0x1FFFFFFF )
  {
    v47 = -2;
    v21 = ((char *)a2 - (char *)v18) >> 3;
LABEL_31:
    v22 = (int)(uintptr_t)(operator new(v47 * 4));
LABEL_32:
    v43 = (size_t *)v22;
    v44 = v22 + 8;
    goto LABEL_33;
  }
  v21 = ((char *)a2 - (char *)v18) >> 3;
  v47 = 4 * v19;
  if ( v20 != 0 )
    goto LABEL_31;
  v44 = 8;
  v43 = nullptr;
LABEL_33:
  v23 = &v43[2 * v21];
  if ( v23 != nullptr )
  {
    *v23 = *a3;
    v24 = a3[1];
    v23[1] = v24;
    if ( v24 != 0 )
      ++*(uint32_t *)(v24 + 4);
  }
  v25 = *a1;
  if ( *a1 != a2 )
  {
    v26 = *a1;
    v27 = v43;
    do
    {
      if ( v27 != nullptr )
      {
        *v27 = *v26;
        v28 = v26[1];
        v27[1] = v28;
        if ( v28 != 0 )
          ++*(uint32_t *)(v28 + 4);
      }
      v26 += 2;
      v27 += 2;
    }
    while ( v26 != a2 );
    v44 = (unsigned int)(uintptr_t)(&v43[2 * ((unsigned int)((char *)a2 - (char *)(v25 + 2)) >> 3) + 4]);
  }
  v29 = (char *)a1[1];
  if ( v29 != (char *)a2 )
  {
    v30 = a2;
    v31 = (uint32_t *)v44;
    do
    {
      if ( v31 != nullptr )
      {
        *v31 = *v30;
        v32 = v30[1];
        v31[1] = v32;
        if ( v32 != 0 )
          ++*(uint32_t *)(v32 + 4);
      }
      v30 += 2;
      v31 += 2;
    }
    while ( v29 != (char *)v30 );
    v33 = v44 + 8 * ((unsigned int)(v29 - (char *)(a2 + 2)) >> 3) + 8;
    v29 = (char *)a1[1];
    v44 = v33;
  }
  v34 = (char *)*a1;
  if ( *a1 != (size_t *)v29 )
  {
    v35 = (char *)*a1;
    v40 = v34 + 4;
    v36 = v29;
    v42 = *a1;
    do
    {
      while ( 1 )
      {
        v37 = *(uint32_t **)&v40[v35 - (char *)v42];
        if ( v37 != nullptr )
        {
          v15 = v37[1]-- == 1;
          if ( v15 )
          {
            (*(void (**)(uint32_t *))(*v37 + 8))(v37);
            v15 = v37[2]-- == 1;
            if ( v15 )
              break;
          }
        }
        v35 += 8;
        if ( v35 == v36 )
          goto LABEL_57;
      }
      v35 += 8;
      (*(void (**)(uint32_t *))(*v37 + 12))(v37);
    }
    while ( v35 != v36 );
LABEL_57:
    v3 = a1;
    v34 = (char *)*a1;
  }
  if ( v34 != nullptr )
    operator delete(v34);
  *v3 = v43;
  v3[1] = (size_t *)v44;
  v3[2] = &v43[v47];
  return (int)(uintptr_t)(&v43[v47]);
}


// ============================================================================
// Address:   0x18f8cb0 (size: 83 bytes)
// Symbol:    _ZN5boost9exceptionD2Ev
// Demangled: boost::exception::~exception()
// ============================================================================
// Alternative name is '_ZN5boost9exceptionD1Ev'
void g4_noop_dtor(boost::exception *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 1)) != 0 )
    *((uint32_t *)self + 1) = 0;
}


// ============================================================================
// Address:   0x18f8f70 (size: 123 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED2Ev
// Demangled: boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector()
// ============================================================================
// Alternative name is '_ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED1Ev'
static void g4_boost_err_dtor_5(
        boost::exception_detail::error_info_injector<boost::lock_error::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9508);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A951C);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::lock_error::Self> *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(self);
}


// ============================================================================
// Address:   0x18f8ff0 (size: 10 bytes)
// Symbol:    _ZThn20_N5boost16exception_detail19error_info_injectorINS_10lock_errorEED1Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_126(
        boost::exception_detail::error_info_injector<boost::lock_error::Self> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::lock_error::Self> *)((char *)self - 20));
}


// ============================================================================
// Address:   0x18f9000 (size: 123 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEED2Ev
// Demangled: boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector()
// ============================================================================
// Alternative name is '_ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEED1Ev'
static void g4_boost_err_dtor_6(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9468);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A947C);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::thread_resource_error> *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(self);
}


// ============================================================================
// Address:   0x18f9080 (size: 10 bytes)
// Symbol:    _ZThn20_N5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEED1Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_127(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::thread_resource_error> *)((char *)self - 20));
}


// ============================================================================
// Address:   0x18f9090 (size: 123 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED2Ev
// Demangled: boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector()
// ============================================================================
// Alternative name is '_ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED1Ev'
static void g4_boost_err_dtor_7(
        boost::exception_detail::error_info_injector<boost::condition_error::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A95A8);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A95BC);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::condition_error::Self> *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(self);
}


// ============================================================================
// Address:   0x18f9110 (size: 10 bytes)
// Symbol:    _ZThn20_N5boost16exception_detail19error_info_injectorINS_15condition_errorEED1Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_128(
        boost::exception_detail::error_info_injector<boost::condition_error::Self> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::condition_error::Self> *)((char *)self - 20));
}


// ============================================================================
// Address:   0x18f9460 (size: 131 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEED0Ev
// Demangled: boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector()
// ============================================================================
static void g4_boost_err_dtor_8(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9468);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A947C);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::thread_resource_error> *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x18f94f0 (size: 10 bytes)
// Symbol:    _ZThn20_N5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEED0Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::thread_resource_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_129(
        boost::exception_detail::error_info_injector<boost::thread_resource_error> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::thread_resource_error> *)((char *)self - 20));
}


// ============================================================================
// Address:   0x18f9500 (size: 131 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED0Ev
// Demangled: boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector()
// ============================================================================
static void g4_boost_err_dtor_9(
        boost::exception_detail::error_info_injector<boost::lock_error::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9508);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A951C);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::lock_error::Self> *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x18f9590 (size: 10 bytes)
// Symbol:    _ZThn20_N5boost16exception_detail19error_info_injectorINS_10lock_errorEED0Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_130(
        boost::exception_detail::error_info_injector<boost::lock_error::Self> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::lock_error::Self> *)((char *)self - 20));
}


// ============================================================================
// Address:   0x18f95a0 (size: 131 bytes)
// Symbol:    _ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED0Ev
// Demangled: boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector()
// ============================================================================
static void g4_boost_err_dtor_10(
        boost::exception_detail::error_info_injector<boost::condition_error::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A95A8);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A95BC);
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::condition_error::Self> *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_1903D80(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x18f9630 (size: 10 bytes)
// Symbol:    _ZThn20_N5boost16exception_detail19error_info_injectorINS_15condition_errorEED0Ev
// Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector()
// ============================================================================
static void g4_thunk_131(
        boost::exception_detail::error_info_injector<boost::condition_error::Self> *self)
{
  g4_noop_dtor((boost::exception_detail::error_info_injector<boost::condition_error::Self> *)((char *)self - 20));
}


// ============================================================================
// Address:   0x18f98b0 (size: 44 bytes)
// Symbol:    _ZN5boost9exceptionD0Ev
// Demangled: boost::exception::~exception()
// ============================================================================
void g4_boost_exception_d0(boost::exception *self)
{
  g4_noop_dtor(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x18f9b60 (size: 126 bytes)
// Symbol:    _ZN5boost6detail23get_current_thread_dataEv
// Demangled: boost::detail::get_current_thread_data(void)
// ============================================================================
void *boost::detail::get_current_thread_data()
{
  if ( (uint8_t)boost::thread_detail::enter_once_region(&unk_2139EF4) != 0 )
  {
    pthread_key_create((pthread_key_t *)&dword_2139EF0, (void (*)(void *))sub_18F9950);
    boost::thread_detail::commit_once_region(&unk_2139EF4);
  }
  return pthread_getspecific(dword_2139EF0);
}


// ============================================================================
// Address:   0x18f9c70 (size: 20 bytes)
// Symbol:    _ZN5boost6threadC1Ev
// Demangled: boost::thread::thread(void)
// ============================================================================
// Alternative name is '_ZN5boost6threadC2Ev'
boost::thread::Self *boost::thread::Construct(boost::thread::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  return self;
}


// ============================================================================
// Address:   0x18f9c90 (size: 143 bytes)
// Symbol:    _ZN5boost6thread21start_thread_noexceptEv
// Demangled: boost::thread::start_thread_noexcept(void)
// ============================================================================
int boost::thread::start_thread_noexcept(boost::thread::Self *self)
{
  int v1;
  int v2;
  volatile int32_t *v3;
  int v4;
  int v5;
  volatile int32_t *v6;

  v1 = *((uint32_t *)self + 1);
  v2 = *(uint32_t *)self;
  if ( v1 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  v3 = *(volatile int32_t **)(v2 + 16);
  *(uint32_t *)(v2 + 12) = v2;
  *(uint32_t *)(v2 + 16) = v1;
  if ( v3 != nullptr )
    sub_18F98E0(v3);
  v4 = 1;
  if ( pthread_create((pthread_t *)(*(uint32_t *)self + 20), nullptr, (void *(*)(void *))sub_18FB170, *(void **)self) != 0 )
  {
    v5 = *(uint32_t *)self;
    v4 = 0;
    v6 = *(volatile int32_t **)(*(uint32_t *)self + 16);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = 0;
    if ( v6 != nullptr )
      sub_18F98E0(v6);
  }
  return v4;
}


// ============================================================================
// Address:   0x18f9d20 (size: 226 bytes)
// Symbol:    _ZN5boost6thread21start_thread_noexceptERKNS_17thread_attributesE
// Demangled: boost::thread::start_thread_noexcept(boost::thread_attributes const&)
// ============================================================================
int boost::thread::start_thread_noexcept(void **a1, pthread_attr_t *attr)
{
  volatile int32_t *v2;
  void *v3;
  volatile int32_t *v4;
  uint32_t *v5;
  volatile int32_t *v6;
  uint8_t *v8;
  volatile int32_t *v9;
  bool v10;
  int detachstate[4];

  v2 = (volatile int32_t *)a1[1];
  v3 = *a1;
  if ( v2 != nullptr )
    __sync_add_and_fetch(v2 + 1, 1);
  v4 = *((volatile int32_t **)v3 + 4);
  *((uint32_t *)v3 + 3) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)v3 + 4) = (uint32_t)(uintptr_t)(v2);
  if ( v4 != nullptr )
    sub_18F98E0(v4);
  if ( pthread_create((pthread_t *)*a1 + 5, attr, (void *(*)(void *))sub_18FB170, *a1) != 0
    || pthread_attr_getdetachstate(attr, detachstate) != 0 )
  {
    v5 = (uint32_t *)(*a1);
    v6 = *((volatile int32_t **)*a1 + 4);
    v5[3] = 0;
    v5[4] = 0;
    if ( v6 != nullptr )
      sub_18F98E0(v6);
    return 0;
  }
  else
  {
    if ( detachstate[0] == 1 )
    {
      v8 = (uint8_t *)(*a1);
      v9 = (volatile int32_t *)a1[1];
      v10 = *a1 == nullptr;
      *a1 = nullptr;
      a1[1] = nullptr;
      if ( !v10 && v8[49] == 0 )
      {
        v8[49] = 1;
        v8[50] = 1;
      }
      if ( v9 != nullptr )
        sub_18F98E0(v9);
    }
    return 1;
  }
}


// ============================================================================
// Address:   0x18f9e10 (size: 29 bytes)
// Symbol:    _ZNK5boost6thread15get_thread_infoEv
// Demangled: boost::thread::get_thread_info(void)const
// ============================================================================
boost::thread::Self *boost::thread::get_thread_info(boost::thread::Self *self, uint32_t *a2)
{
  boost::thread::Self *result;
  int v3;

  result = self;
  *(uint32_t *)self = *a2;
  v3 = a2[1];
  *((uint32_t *)self + 1) = v3;
  if ( v3 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
  return result;
}


// ============================================================================
// Address:   0x18f9e30 (size: 77 bytes)
// Symbol:    _ZNK5boost6thread8joinableEv
// Demangled: boost::thread::joinable(void)const
// ============================================================================
boost::thread::Self *boost::thread::joinable(boost::thread::Self *self)
{
  boost::thread::Self *thread_info;
  boost::thread::Self *v2;
  typedef int _g4_t_v4;
  typedef volatile int32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  thread_info = boost::thread::get_thread_info((boost::thread::Self *)&v4, (uint32_t *)(self));
  LOBYTE(thread_info) = v4 != 0;
  v2 = thread_info;
  if ( v5 != nullptr )
    sub_18F98E0(v5);
  return v2;
}


// ============================================================================
// Address:   0x18f9e80 (size: 27 bytes)
// Symbol:    _ZN5boost11this_thread5yieldEv
// Demangled: boost::this_thread::yield(void)
// ============================================================================
int boost::this_thread::yield()
{
  return sched_yield();
}


// ============================================================================
// Address:   0x18f9ea0 (size: 43 bytes)
// Symbol:    _ZN5boost6thread20hardware_concurrencyEv
// Demangled: boost::thread::hardware_concurrency(void)
// ============================================================================
int boost::thread::hardware_concurrency()
{
  int v0;
  int v1;

  v0 = sysconf(97);
  v1 = 0;
  if ( v0 >= 0 )
    return v0;
  return v1;
}


// ============================================================================
// Address:   0x18f9ed0 (size: 48 bytes)
// Symbol:    _ZN5boost11this_thread20interruption_enabledEv
// Demangled: boost::this_thread::interruption_enabled(void)
// ============================================================================
int boost::this_thread::interruption_enabled()
{
  uint8_t *current_thread_data;

  current_thread_data = (uint8_t *)boost::detail::get_current_thread_data();
  if ( current_thread_data != nullptr )
    return current_thread_data[112];
  else
    return 0;
}


// ============================================================================
// Address:   0x18f9f00 (size: 46 bytes)
// Symbol:    _ZN5boost11this_thread20disable_interruptionC2Ev
// Demangled: boost::this_thread::disable_interruption::disable_interruption(void)
// ============================================================================
// Alternative name is '_ZN5boost11this_thread20disable_interruptionC1Ev'
boost::this_thread::disable_interruption::Self *boost::this_thread::disable_interruption::Construct(
        boost::this_thread::disable_interruption::Self *self)
{
  struct boost::this_thread::disable_interruption::Self *result;

  result = (struct boost::this_thread::disable_interruption::Self *)boost::this_thread::interruption_enabled();
  *(uint8_t *)self = (uint8_t)(uintptr_t)(result);
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    result = (struct boost::this_thread::disable_interruption::Self *)boost::detail::get_current_thread_data();
    *((uint8_t *)result + 112) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x18f9f30 (size: 46 bytes)
// Symbol:    _ZN5boost11this_thread20disable_interruptionD2Ev
// Demangled: boost::this_thread::disable_interruption::~disable_interruption()
// ============================================================================
// Alternative name is '_ZN5boost11this_thread20disable_interruptionD1Ev'
void boost::this_thread::disable_interruption::Destroy(
        boost::this_thread::disable_interruption::Self *self)
{
  if ( boost::detail::get_current_thread_data() != nullptr )
    *((uint8_t *)boost::detail::get_current_thread_data() + 112) = *(uint8_t *)self;
}


// ============================================================================
// Address:   0x18f9f60 (size: 40 bytes)
// Symbol:    _ZN5boost11this_thread20restore_interruptionC2ERNS0_20disable_interruptionE
// Demangled: boost::this_thread::restore_interruption::restore_interruption(boost::this_thread::disable_interruption &)
// ============================================================================
// Alternative name is '_ZN5boost11this_thread20restore_interruptionC1ERNS0_20disable_interruptionE'
struct boost::this_thread::restore_interruption::Self *boost::this_thread::restore_interruption::Construct(
        boost::this_thread::restore_interruption::Self *self,
        boost::this_thread::disable_interruption::Self *a2)
{
  struct boost::this_thread::restore_interruption::Self *result;

  result = (struct boost::this_thread::restore_interruption::Self *)(a2);
  if ( *(uint8_t *)a2 != 0 )
  {
    result = (struct boost::this_thread::restore_interruption::Self *)boost::detail::get_current_thread_data();
    *((uint8_t *)result + 112) = 1;
  }
  return result;
}


// ============================================================================
// Address:   0x18f9f90 (size: 40 bytes)
// Symbol:    _ZN5boost11this_thread20restore_interruptionD2Ev
// Demangled: boost::this_thread::restore_interruption::~restore_interruption()
// ============================================================================
// Alternative name is '_ZN5boost11this_thread20restore_interruptionD1Ev'
void boost::this_thread::restore_interruption::Destroy()
{
  if ( boost::detail::get_current_thread_data() != nullptr )
    *((uint8_t *)boost::detail::get_current_thread_data() + 112) = 0;
}


// ============================================================================
// Address:   0x18fa030 (size: 36 bytes)
// Symbol:    _ZN5boost6detail12get_tss_dataEPKv
// Demangled: boost::detail::get_tss_data(void const*)
// ============================================================================
int boost::detail::get_tss_data(boost::detail::Self *self)
{
  uint32_t *v1;

  v1 = sub_18F9FC0((unsigned int)(uintptr_t)(self));
  if ( v1 != nullptr )
    return v1[2];
  else
    return 0;
}


// ============================================================================
// Address:   0x18fa060 (size: 71 bytes)
// Symbol:    _ZN5boost25notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE
// Demangled: boost::notify_all_at_thread_exit(boost::condition_variable &,boost::unique_lock<boost::mutex>)
// ============================================================================
void *boost::notify_all_at_thread_exit(int a1, int *a2)
{
  void *result;
  int v3;
  int (*v4)(void *, int, int);

  result = boost::detail::get_current_thread_data();
  if ( result != nullptr )
  {
    v3 = *a2;
    v4 = *(int (**)(void *, int, int))(*(uint32_t *)result + 12);
    *a2 = 0;
    *((uint8_t *)a2 + 4) = 0;
    return (void *)v4(result, a1, v3);
  }
  return result;
}


// ============================================================================
// Address:   0x18fa0b0 (size: 140 bytes)
// Symbol:    _ZN5boost6system12system_errorC2ERKS1_
// Demangled: boost::system::system_error::system_error(boost::system::system_error const&)
// ============================================================================
// Alternative name is '_ZN5boost6system12system_errorC1ERKS1_'
boost::system::system_error::Self *boost::system::system_error::Construct(
        boost::system::system_error::Self *self,
        const boost::system::system_error::Self *a2)
{
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy((char *)self + 4, (char *)a2 + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = v2;
  return (boost::system::system_error::Self *)g4_std_compat::string_construct_copy((char *)self + 16, (char *)a2 + 16);
}


// ============================================================================
// Address:   0x18fade0 (size: 163 bytes)
// Symbol:    _ZN5boost6thread6detachEv
// Demangled: boost::thread::detach(void)
// ============================================================================
boost::thread::Self *boost::thread::detach(volatile int32_t **self)
{
  boost::thread::Self *result;
  pthread_mutex_t *v2;
  volatile int32_t *v3;
  bool v4;

  result = (boost::thread::Self *)self;
  v2 = (pthread_mutex_t *)*self;
  v3 = *(self + 1);
  v4 = *self == nullptr;
  *self = nullptr;
  *(self + 1) = nullptr;
  if ( !v4 )
  {
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v2) + (24 * (1))));
    if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v2) + (24 * (2))))[1] == 0 )
    {
      pthread_detach(G4_MUTEX_SPINS(v2));
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v2) + (24 * (2))))[1] = 1;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v2) + (24 * (2))))[2] = 1;
    }
    result = (boost::thread::Self *)sub_1321760(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v2) + (24 * (1))));
  }
  if ( v3 != nullptr )
    return (boost::thread::Self *)sub_18F98E0(v3);
  return result;
}


// ============================================================================
// Address:   0x18fae90 (size: 200 bytes)
// Symbol:    _ZN5boost6thread9interruptEv
// Demangled: boost::thread::interrupt(void)
// ============================================================================
volatile int32_t *boost::thread::interrupt(boost::thread::Self *self)
{
  pthread_mutex_t *v1;
  int v2;
  int v3;
  pthread_mutex_t *mutex;
  volatile int32_t *result;
  typedef int _g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  boost::thread::get_thread_info((boost::thread::Self *)&v6, (uint32_t *)(self));
  if ( v6 != 0 )
  {
    v1 = (pthread_mutex_t *)(v6 + 24);
    sub_1321700((pthread_mutex_t *)(v6 + 24));
    v2 = v6;
    v3 = *(uint32_t *)(v6 + 84);
    *(uint8_t *)(v6 + 113) = 1;
    if ( v3 != 0 )
    {
      mutex = *(pthread_mutex_t **)(v2 + 80);
      pthread_mutex_lock(mutex);
      pthread_cond_broadcast(*(pthread_cond_t **)(v6 + 84));
      pthread_mutex_unlock(mutex);
    }
    sub_1321760(v1);
  }
  result = v7;
  if ( v7 != nullptr )
    return (volatile int32_t *)sub_18F98E0(v7);
  return result;
}


// ============================================================================
// Address:   0x18faf60 (size: 133 bytes)
// Symbol:    _ZNK5boost6thread22interruption_requestedEv
// Demangled: boost::thread::interruption_requested(void)const
// ============================================================================
int boost::thread::interruption_requested(boost::thread::Self *self)
{
  int v1;
  pthread_mutex_t *v2;
  typedef pthread_mutex_t *_g4_t_v4;
  typedef volatile int32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = 0;
  boost::thread::get_thread_info((boost::thread::Self *)&v4, (uint32_t *)(self));
  if ( v4 != nullptr )
  {
    v2 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1)));
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))));
    v1 = G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (4))))[17];
    sub_1321760(v2);
  }
  if ( v5 != nullptr )
    sub_18F98E0(v5);
  return v1;
}


// ============================================================================
// Address:   0x18faff0 (size: 132 bytes)
// Symbol:    _ZN5boost6thread13native_handleEv
// Demangled: boost::thread::native_handle(void)
// ============================================================================
int boost::thread::native_handle(boost::thread::Self *self)
{
  int spins;
  pthread_mutex_t *v2;
  typedef pthread_mutex_t *_g4_t_v4;
  typedef volatile int32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  spins = 0;
  boost::thread::get_thread_info((boost::thread::Self *)&v4, (uint32_t *)(self));
  if ( v4 != nullptr )
  {
    v2 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1)));
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))));
    spins = G4_MUTEX_SPINS(v4);
    sub_1321760(v2);
  }
  if ( v5 != nullptr )
    sub_18F98E0(v5);
  return spins;
}


// ============================================================================
// Address:   0x18fb080 (size: 149 bytes)
// Symbol:    _ZN5boost11this_thread18interruption_pointEv
// Demangled: boost::this_thread::interruption_point(void)
// ============================================================================
pthread_mutex_t *boost::this_thread::interruption_point()
{
  pthread_mutex_t *result;
  pthread_mutex_t *v1;
  void *exception;
  pthread_mutex_t *v3;

  result = (pthread_mutex_t *)boost::detail::get_current_thread_data();
  if ( result != nullptr && G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(result) + (24 * (4))))[16] != 0 )
  {
    v1 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(result) + (24 * (1)));
    v3 = result;
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(result) + (24 * (1))));
    if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (4))))[17] != 0 )
    {
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (4))))[17] = 0;
      exception = _cxa_allocate_exception(1u);
      _cxa_throw(exception, (type_info *)&g4_typeinfo_7145e46666, nullptr);
    }
    return (pthread_mutex_t *)sub_1321760(v1);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: boost::this_thread::interruption_requested  (binary VA: 0x18fb120)
// Original: boost::this_thread::interruption_requested
// ----------------------------------------------------------------------------
int boost::this_thread::interruption_requested()
{
  int v0;
  pthread_mutex_t *current_thread_data;
  pthread_mutex_t *v2;
  pthread_mutex_t *v3;

  v0 = 0;
  current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data();
  v2 = current_thread_data;
  if ( current_thread_data != nullptr )
  {
    v3 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1)));
    sub_1321700(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1))));
    v0 = G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v2) + (24 * (4))))[17];
    sub_1321760(v3);
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::add_thread_exit_function  (binary VA: 0x18fbba0)
// Original: boost::detail::add_thread_exit_function
// ----------------------------------------------------------------------------
uint32_t * boost::detail::add_thread_exit_function(int a1)
{
  uint32_t *current_thread_data;
  uint32_t *result;
  int v3;

  current_thread_data = (uint32_t *)(boost::detail::get_current_thread_data());
  if ( current_thread_data == nullptr )
    current_thread_data = (uint32_t *)(sub_18FB5D0());
  result = (uint32_t *)opNew(8u);
  v3 = current_thread_data[13];
  *result = a1;
  result[1] = v3;
  current_thread_data[13] = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::thread::join_noexcept  (binary VA: 0x18fbf80)
// Original: boost::thread::join_noexcept
// ----------------------------------------------------------------------------
int boost::thread::join_noexcept(boost::thread::Self *self)
{
  int v1;
  int v2;
  pthread_mutex_t *v4;
  pthread_mutex_t *v5;
  volatile int32_t *v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  typedef volatile int32_t *_g4_t_v9;
  typedef void *_g4_t_thread_return;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v7)) > _g4_s0 ? (15u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_thread_return)) > _g4_s3 ? (24u + sizeof(_g4_t_thread_return)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_thread_return &thread_return = *reinterpret_cast<_g4_t_thread_return *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v1 = 0;
  boost::thread::get_thread_info((boost::thread::Self *)&v8, (uint32_t *)(self));
  if ( v8 == 0 )
    goto LABEL_9;
  thread_return = (void *)(v8 + 24);
  v11 = 0;
  sub_18FACB0((int)(uintptr_t)(&thread_return));
  while ( 1 )
  {
    v2 = v8;
    v1 = *(uint8_t *)(v8 + 48);
    if ( *(uint8_t *)(v8 + 48) != 0 )
      break;
    sub_18FBDA0((pthread_mutex_t *)(v8 + 28), (boost::this_thread::Self *)&thread_return);
  }
  v7 = *(uint8_t *)(v8 + 49) ^ 1;
  if ( v7 != 0 )
  {
    *(uint8_t *)(v8 + 49) = 1;
    if ( v11 == 0 )
      goto LABEL_7;
  }
  else
  {
    while ( *(uint8_t *)(v2 + 50) == 0 )
    {
      sub_18FBDA0((pthread_mutex_t *)(v2 + 28), (boost::this_thread::Self *)&thread_return);
      v2 = v8;
    }
    if ( v11 == 0 )
    {
LABEL_7:
      if ( v7 == 0 )
        goto LABEL_8;
LABEL_16:
      thread_return = nullptr;
      pthread_join(*(uint32_t *)(v8 + 20), &thread_return);
      v4 = (pthread_mutex_t *)(v8 + 24);
      sub_1321700((pthread_mutex_t *)(v8 + 24));
      v5 = (pthread_mutex_t *)(v8 + 28);
      *(uint8_t *)(v8 + 50) = 1;
      sub_18F9B10(v5);
      sub_1321760(v4);
      if ( *(uint32_t *)self != v8 )
        goto LABEL_9;
      goto LABEL_17;
    }
  }
  sub_1321760((pthread_mutex_t *)thread_return);
  if ( v7 != 0 )
    goto LABEL_16;
LABEL_8:
  if ( *(uint32_t *)self == v8 )
  {
LABEL_17:
    v6 = *((volatile int32_t **)self + 1);
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    if ( v6 != nullptr )
      sub_18F98E0(v6);
  }
LABEL_9:
  if ( v9 != nullptr )
    sub_18F98E0(v9);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: boost::thread::do_try_join_until_noexcept  (binary VA: 0x18fc420)
// Original: boost::thread::do_try_join_until_noexcept
// ----------------------------------------------------------------------------
int boost::thread::do_try_join_until_noexcept(boost::thread::Self *self, timespec *a2, bool *a3)
{
  int v3;
  int v4;
  char v5; // bp
  bool v7;
  pthread_mutex_t *v8;
  pthread_mutex_t *v9;
  volatile int32_t *v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef void *_g4_t_thread_return;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_thread_return)) > _g4_s2 ? (8u + sizeof(_g4_t_thread_return)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_thread_return &thread_return = *reinterpret_cast<_g4_t_thread_return *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  v3 = 0;
  boost::thread::get_thread_info((boost::thread::Self *)&v11, (uint32_t *)(self));
  if ( v11 == 0 )
    goto LABEL_11;
  thread_return = (void *)(v11 + 24);
  v14 = 0;
  sub_18FACB0((int)(uintptr_t)(&thread_return));
  do
  {
    v4 = v11;
    v3 = *(uint8_t *)(v11 + 48);
    if ( *(uint8_t *)(v11 + 48) != 0 )
    {
      v5 = *(uint8_t *)(v11 + 49) ^ 1;
      if ( v5 != 0 )
      {
        *(uint8_t *)(v11 + 49) = 1;
        if ( v14 == 0 )
        {
LABEL_7:
          if ( v5 != 0 )
          {
            thread_return = nullptr;
            pthread_join(*(uint32_t *)(v11 + 20), &thread_return);
            v8 = (pthread_mutex_t *)(v11 + 24);
            sub_1321700((pthread_mutex_t *)(v11 + 24));
            v9 = (pthread_mutex_t *)(v11 + 28);
            *(uint8_t *)(v11 + 50) = 1;
            sub_18F9B10(v9);
            sub_1321760(v8);
          }
          if ( *(uint32_t *)self == v11 )
          {
            *(uint32_t *)self = 0;
            v10 = *((volatile int32_t **)self + 1);
            *((uint32_t *)self + 1) = 0;
            if ( v10 != nullptr )
              sub_18F98E0(v10);
          }
          *a3 = true;
          goto LABEL_11;
        }
      }
      else
      {
        while ( *(uint8_t *)(v4 + 50) == 0 )
        {
          sub_18FBDA0((pthread_mutex_t *)(v4 + 28), (boost::this_thread::Self *)&thread_return);
          v4 = v11;
        }
        if ( v14 == 0 )
          goto LABEL_7;
      }
      sub_1321760((pthread_mutex_t *)thread_return);
      goto LABEL_7;
    }
  }
  while ( (uint8_t)sub_18FC130((pthread_mutex_t *)(v11 + 28), (int)(uintptr_t)(&thread_return), a2) != 0 );
  v7 = v14 == 0;
  *a3 = false;
  if ( !v7 )
    sub_1321760((pthread_mutex_t *)thread_return);
  v3 = 1;
LABEL_11:
  if ( v12 != nullptr )
    sub_18F98E0(v12);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: boost::this_thread::hiden::sleep_for  (binary VA: 0x18fc610)
// Original: boost::this_thread::hiden::sleep_for
// ----------------------------------------------------------------------------
int boost::this_thread::hiden::sleep_for(struct timespec *requested_time)
{
  char *current_thread_data;
  char *v2;
  int64_t v3; // rax
  int64_t v11; // 0:esi.4,4:edi.4
  typedef pthread_mutex_t *_g4_t_v5;
  typedef pthread_mutex_t *_g4_t_v6;
  typedef char _g4_t_v7;
  typedef struct timespec _g4_t_v8;
  typedef struct timespec _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v9)) > _g4_s4 ? (40u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  current_thread_data = (char *)boost::detail::get_current_thread_data();
  v2 = current_thread_data;
  if ( current_thread_data != nullptr )
  {
    v7 = 0;
    v6 = (pthread_mutex_t *)(current_thread_data + 36);
    sub_18FACB0((int)(uintptr_t)(&v6));
    v5 = (pthread_mutex_t *)(v2 + 40);
    do
    {
      clock_gettime(0, &v8);
      v11 = v8.tv_nsec + 1000000000LL * v8.tv_sec + requested_time->tv_nsec + 1000000000LL * requested_time->tv_sec;
      v9.tv_sec = v11 / 1000000000;
      v9.tv_nsec = v11 % 1000000000;
      LODWORD(v3) = sub_18FC130(v5, (int)(uintptr_t)(&v6), &v9);
    }
    while ( (uint8_t)v3 != 0 );
    if ( v7 != 0 )
      LODWORD(v3) = sub_1321760(v6);
  }
  else
  {
    v3 = requested_time->tv_nsec + 1000000000LL * requested_time->tv_sec;
    if ( v3 >= 0 )
      LODWORD(v3) = nanosleep(requested_time, nullptr);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: boost::this_thread::hiden::sleep_until  (binary VA: 0x18fc7a0)
// Original: boost::this_thread::hiden::sleep_until
// ----------------------------------------------------------------------------
int boost::this_thread::hiden::sleep_until(struct timespec *self)
{
  char *current_thread_data;
  pthread_mutex_t *v2;
  int64_t v3; // rax
  int tv_nsec;
  __time_t v5;
  int v6;
  typedef int64_t _g4_t_v8;
  typedef __time_t _g4_t_tv_sec;
  typedef int _g4_t_v10;
  typedef struct timespec _g4_t_v11;
  typedef struct timespec _g4_t_v12;
  typedef struct timespec _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_tv_sec)) > _g4_s1 ? (0u + sizeof(_g4_t_tv_sec)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v13)) > _g4_s5 ? (56u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_tv_sec &tv_sec = *reinterpret_cast<_g4_t_tv_sec *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);

  current_thread_data = (char *)boost::detail::get_current_thread_data();
  if ( current_thread_data != nullptr )
  {
    v13[0].tv_sec = (__time_t)(current_thread_data + 36);
    LOBYTE(v13[0].tv_nsec) = 0;
    v2 = (pthread_mutex_t *)(current_thread_data + 40);
    sub_18FACB0((int)(uintptr_t)(v13));
    do
      LODWORD(v3) = sub_18FC130(v2, (int)(uintptr_t)(v13), self);
    while ( (uint8_t)v3 != 0 );
    if ( LOBYTE(v13[0].tv_nsec) != 0 )
      LODWORD(v3) = sub_1321760((pthread_mutex_t *)v13[0].tv_sec);
  }
  else
  {
    clock_gettime(0, &v11);
    v3 = v11.tv_nsec + 1000000000LL * v11.tv_sec;
    if ( self->tv_nsec + 1000000000LL * self->tv_sec > v3 )
    {
      tv_nsec = self->tv_nsec;
      v10 = 5;
      tv_sec = self->tv_sec;
      v6 = v11.tv_nsec;
      v5 = v11.tv_sec;
      while ( 1 )
      {
        v8 = tv_nsec + 1000000000LL * tv_sec - (v6 + 1000000000LL * v5);
        v12.tv_sec = v8 / 1000000000;
        v12.tv_nsec = v8 % 1000000000;
        nanosleep(&v12, nullptr);
        clock_gettime(0, v13);
        tv_nsec = self->tv_nsec;
        v3 = tv_nsec + 1000000000LL * self->tv_sec;
        if ( v13[0].tv_nsec + 1000000000LL * v13[0].tv_sec >= v3 )
          break;
        if ( --v10 == 0 )
          break;
        v5 = v11.tv_sec;
        v6 = v11.tv_nsec;
        tv_sec = self->tv_sec;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::thread_data_base::Destroy  (binary VA: 0x18fd060)
// Original: boost::detail::thread_data_base::~thread_data_base
// ----------------------------------------------------------------------------
void boost::detail::thread_data_base::Destroy(boost::detail::thread_data_base::Self *self)
{
  pthread_mutex_t **v1;
  pthread_mutex_t **v2;
  pthread_mutex_t *mutex;
  int v4;
  uint32_t *v5;
  uint32_t *j;
  int v7;
  typedef int *_g4_t_i;
  typedef int *_g4_t_v9;
  typedef pthread_mutex_t *_g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_i)) > _g4_s0 ? (4u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v1 = *((pthread_mutex_t ***)self + 23);
  v2 = *((pthread_mutex_t ***)self + 22);
  for ( *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9450); v1 != v2; v2 += 2 )
  {
    sub_1321760(v2[1]);
    mutex = *v2;
    pthread_mutex_lock(*v2);
    pthread_cond_broadcast((pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1));
    pthread_mutex_unlock(mutex);
  }
  v9 = *((int **)self + 26);
  for ( i = *((int **)self + 25); v9 != i; i += 2 )
  {
    v4 = *i;
    v11 = 0;
    v10 = (pthread_mutex_t *)(v4 + 32);
    sub_18FACB0((int)(uintptr_t)(&v10));
    *(uint8_t *)(v4 + 20) = 1;
    pthread_mutex_lock((pthread_mutex_t *)(v4 + 36));
    pthread_cond_broadcast((pthread_cond_t *)(v4 + 40));
    pthread_mutex_unlock((pthread_mutex_t *)(v4 + 36));
    v5 = *(uint32_t **)(v4 + 44);
    for ( j = (uint32_t *)(v4 + 44); j != v5; v5 = (uint32_t *)*v5 )
    {
      v7 = v5[2];
      pthread_mutex_lock((pthread_mutex_t *)v7);
      pthread_cond_broadcast((pthread_cond_t *)(v7 + 4));
      pthread_mutex_unlock((pthread_mutex_t *)v7);
    }
    if ( v11 != 0 )
      sub_1321760(v10);
  }
  sub_18FA140((volatile int32_t ***)self + 25);
  if ( *((uint32_t *)self + 22) != 0 )
    opDelete(*((void **)self + 22));
  sub_18FD000((int)(uintptr_t)(self) + 56, *((void **)self + 16));
  sub_18F9AC0((int)(uintptr_t)(self) + 40);
  while ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 36)) == 4 )
    ;
  sub_18F9AC0((int)(uintptr_t)(self) + 28);
  while ( pthread_mutex_destroy(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(self) + (24 * (1)))) == 4 )
    ;
  if ( *((uint32_t *)self + 4) != 0 )
    sub_18F98E0(*((volatile int32_t **)self + 4));
  sub_18F9A80((volatile int32_t **)self + 2);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::thread_data_base::Destroy_ea18fd380  (binary VA: 0x18fd380)
// Original: boost::detail::thread_data_base::~thread_data_base
// ----------------------------------------------------------------------------
void boost::detail::thread_data_base::Destroy_ea18fd380(boost::detail::thread_data_base::Self *self)
{
  boost::detail::thread_data_base::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: boost::detail::set_tss_data  (binary VA: 0x18fd5f0)
// Original: boost::detail::set_tss_data
// ----------------------------------------------------------------------------
volatile int32_t * boost::detail::set_tss_data(unsigned int a1, int *a2, int a3, char a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *result;
  void *current_thread_data;
  typedef unsigned int _g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v4 = sub_18F9FC0(a1);
  if ( v4 != nullptr )
  {
    if ( a4 != 0 && *v4 != 0 && v4[2] != 0 )
      G4_VCALL<void>(*v4, 8, v4[2]);
    v5 = *a2;
    if ( *a2 != 0 || a3 != 0 )
    {
      v6 = a2[1];
      if ( v6 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1);
      *v4 = v5;
      v7 = (volatile int32_t *)v4[1];
      v4[1] = v6;
      if ( v7 != nullptr )
        sub_18F98E0(v7);
      result = (volatile int32_t *)a3;
      v4[2] = a3;
    }
    else
    {
      v10 = a1;
      current_thread_data = boost::detail::get_current_thread_data();
      if ( current_thread_data == nullptr )
        current_thread_data = sub_18FB5D0();
      return (volatile int32_t *)sub_18FD420((int)(uintptr_t)(current_thread_data) + 56, &v10);
    }
  }
  else
  {
    result = (volatile int32_t *)*a2;
    if ( *a2 != 0 || a3 != 0 )
    {
      v10 = *a2;
      v11 = (volatile int32_t *)a2[1];
      if ( v11 != nullptr )
        __sync_add_and_fetch(v11 + 1, 1);
      sub_18FB9D0(a1, (int *)&v10, a3);
      result = v11;
      if ( v11 != nullptr )
        return (volatile int32_t *)sub_18F98E0(v11);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::thread_detail::enter_once_region  (binary VA: 0x18fd800)
// Original: boost::thread_detail::enter_once_region
// ----------------------------------------------------------------------------
int boost::thread_detail::enter_once_region(volatile int32_t *a1)
{
  int32_t v1;
  int v2;

  if ( *a1 == 2 )
    return 0;
  pthread_mutex_lock((pthread_mutex_t *)&unk_2139F08);
  if ( *a1 == 2 )
  {
    v2 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&unk_2139F08);
  }
  else
  {
    while ( 1 )
    {
      v1 = __sync_val_compare_and_swap(a1, 0, 1);
      if ( v1 == 0 )
      {
        v2 = 1;
        goto LABEL_5;
      }
      if ( v1 == 2 )
        break;
      pthread_cond_wait((pthread_cond_t *)&unk_2139F04, (pthread_mutex_t *)&unk_2139F08);
    }
    v2 = 0;
LABEL_5:
    pthread_mutex_unlock((pthread_mutex_t *)&unk_2139F08);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: boost::thread_detail::commit_once_region  (binary VA: 0x18fd8b0)
// Original: boost::thread_detail::commit_once_region
// ----------------------------------------------------------------------------
int boost::thread_detail::commit_once_region(uint32_t *a1)
{
  pthread_mutex_lock((pthread_mutex_t *)&unk_2139F08);
  *a1 = 2;
  pthread_mutex_unlock((pthread_mutex_t *)&unk_2139F08);
  return pthread_cond_broadcast((pthread_cond_t *)&unk_2139F04);
}

// ----------------------------------------------------------------------------
// Function: boost::thread_detail::rollback_once_region  (binary VA: 0x18fd900)
// Original: boost::thread_detail::rollback_once_region
// ----------------------------------------------------------------------------
int boost::thread_detail::rollback_once_region(uint32_t *a1)
{
  pthread_mutex_lock((pthread_mutex_t *)&unk_2139F08);
  *a1 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&unk_2139F08);
  return pthread_cond_broadcast((pthread_cond_t *)&unk_2139F04);
}

// ----------------------------------------------------------------------------
// Function: boost::exception_detail::error_info_injector_system_system_error_04458a::Destroy  (binary VA: 0x1b10150)
// Original: boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
// ----------------------------------------------------------------------------
void boost::exception_detail::error_info_injector_system_system_error_04458a::Destroy(boost::exception_detail::error_info_injector<boost::system::system_error::Self> *self)
{
  int v1;
  uint32_t *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2548);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_2093808);
  v1 = *((uint32_t *)self + 6);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 6)) != 0 )
    *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2048428);
  v2 = (uint32_t *)(*((uint32_t *)self + 4) - 12);
  if ( v2 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)self + 4) - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  sub_1903D80(self);
}

// ----------------------------------------------------------------------------
// Function: boost::exception_detail::error_info_injector_system_system_error_04458a::thunk_Destroy  (binary VA: 0x1b10200)
// Original: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::system::system_error>::~error_info_injector
// ----------------------------------------------------------------------------
void boost::exception_detail::error_info_injector_system_system_error_04458a::thunk_Destroy(boost::exception_detail::error_info_injector<boost::system::system_error::Self> *self)
{
  boost::exception_detail::error_info_injector_system_system_error_04458a::Destroy((boost::exception_detail::error_info_injector<boost::system::system_error::Self> *)((char *)self - 20));
}

int g4_asio_create_socket_acceptor_tcp(uint32_t a1) {
  return (int)(uintptr_t)boost::asio::detail::service_registry::create<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>((boost::asio::detail::service_registry *)(uintptr_t)a1);
}


