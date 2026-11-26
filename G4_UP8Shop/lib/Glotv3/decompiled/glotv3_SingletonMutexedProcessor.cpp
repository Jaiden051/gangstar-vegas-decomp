#include "Core/Utils/DecompTypes.h"
#include "glotv3_SingletonMutexedProcessor.h"

int g4_asio_create_deadline_timer_ptime(uint32_t a1);

namespace glotv3 { namespace Utils {
  template<> uint32_t *ToString<unsigned int>(uint32_t *a1, unsigned int a2);
  template<> uint32_t *ToString<int>(uint32_t *a1, int a2);
} }

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::WriteToLibSpy  (binary VA: 0x134eb60)
// Original: glotv3::SingletonMutexedProcessor::WriteToLibSpy
// ----------------------------------------------------------------------------
void glotv3::SingletonMutexedProcessor::WriteToLibSpy(int a1, int a2, int a3, int a4, glotv3::Event::Self **a5)
{
  glotv3::Event::Self **v5;
  char *v6;
  glotv3::Event::Self *v7;
  char *v8;
  char *v9;
  uint32_t *v10;
  uint8_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  uint8_t *v17;
  char v18;
  void *v19;
  void *retaddr;
  typedef size_t _g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint8_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[3];
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39[4];
  typedef int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int (**_g4_t_v44)(int);
  typedef uint32_t _g4_t_v45[7];
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[68];
  typedef uint32_t _g4_t_v48[41];
  typedef void *_g4_t_v49;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v21)) > _g4_s1 ? (28u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v22)) > _g4_s2 ? (36u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v23)) > _g4_s3 ? (40u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v24)) > _g4_s4 ? (44u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v25)) > _g4_s5 ? (48u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v26)) > _g4_s6 ? (52u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v27)) > _g4_s7 ? (52u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v28)) > _g4_s8 ? (56u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v29)) > _g4_s9 ? (56u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v30)) > _g4_s10 ? (60u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v31)) > _g4_s11 ? (80u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v32)) > _g4_s12 ? (92u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v33)) > _g4_s13 ? (96u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v34)) > _g4_s14 ? (100u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v35)) > _g4_s15 ? (104u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v36)) > _g4_s16 ? (108u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v37)) > _g4_s17 ? (112u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v38)) > _g4_s18 ? (116u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v39)) > _g4_s19 ? (120u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v40)) > _g4_s20 ? (124u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v41)) > _g4_s21 ? (128u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v42)) > _g4_s22 ? (132u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v43)) > _g4_s23 ? (136u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v44)) > _g4_s24 ? (140u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v45)) > _g4_s25 ? (144u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v46)) > _g4_s26 ? (172u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v47)) > _g4_s27 ? (180u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (248u + sizeof(_g4_t_v48)) > _g4_s28 ? (248u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (412u + sizeof(_g4_t_v49)) > _g4_s29 ? (412u + sizeof(_g4_t_v49)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
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
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 248u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 412u);

  if ( glotv3::TrackingManager::s_IsSpyStreamLoggingActive == 0 && glotv3::TrackingManager::s_IsSpyTcpLoggingActive == 0 )
    return;
  v19 = v49;
  v49 = retaddr;
  v48[40] = a1;
  v48[39] = a2;
  v48[38] = a3;
  v5 = a5;
  v48[37] = (uint32_t)(uintptr_t)(v19);
  v48[36] = (uint32_t)(uintptr_t)(&a4);
  v25 = a4;
  v41 = nullptr;
  v42 = nullptr;
  v43 = nullptr;
  v6 = (char *)opNew(0x400u);
  v7 = *v5;
  v41 = v6;
  v42 = v6;
  v43 = v6 + 1024;
  if ( v7 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = const glotv3::Ev"
      "ent, typename boost::detail::sp_dereference<T>::type = const glotv3::Event::Self&]",
      "px != 0");
    v7 = *v5;
  }
  glotv3::Event::serializeToImplementation(v7, &v41);
  v8 = v42;
  v9 = v41;
  if ( v42 != v41 )
  {
    v22 = v42 - v41;
    v27 = (uint32_t *)sub_1938930(v42 - v41, 0);
    v10 = v27 + 3;
    v24 = v8 - v9;
    v23 = (unsigned int)(v8 - v9) >> 4;
    v29 = 16 * v23;
    if ( (unsigned int)(v8 - v9) > 0xF && (v27 + 3 > (uint32_t *)v9 + 4 || v9 > (char *)v27 + 28) && v29 != 0 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        ++v16;
        *(__m128i *)&v10[v15] = *(__m128i *)&v9[v15 * 4];
        v15 += 4;
      }
      while ( v23 > v16 );
      v9 += v29;
      v17 = (uint8_t *)(&v10[v29 / 4u]);
      if ( v29 == v24 )
      {
LABEL_31:
        if ( v27 != dword_213B808 )
        {
          v27[2] = 0;
          *v27 = v22;
          *((uint8_t *)v27 + v22 + 12) = 0;
        }
        goto LABEL_7;
      }
    }
    else
    {
      v17 = (uint8_t *)(v27 + 3);
    }
    do
    {
      v18 = *v9++;
      *v17++ = v18;
    }
    while ( v8 != v9 );
    goto LABEL_31;
  }
  v10 = &dword_213B814;
LABEL_7:
  v31[0] = (int)(uintptr_t)(v10);
  sub_1903A70(&v32);
  v33 = 8;
  sub_1901AC0(&v34, &v32);
  v39[0] = v33;
  sub_1901AC0(&v40, &v34);
  sub_134CEC0(v31, (uint8_t *)v39, v20);
  sub_1902180(&v40);
  v37 = v33;
  sub_1901AC0(&v38, &v34);
  v35 = v37;
  sub_1901AC0(&v36, &v38);
  v11 = (uint8_t *)v31[0];
  if ( *(int *)(v31[0] - 4) < 0 )
  {
    v26 = v31[0] + *(uint32_t *)(v31[0] - 12);
  }
  else
  {
    sub_19397C0(v31);
    v11 = (uint8_t *)v31[0];
    v26 = (int)(uintptr_t)(&v11[*((uint32_t *)v11 - 3)]);
    if ( *(int *)(v31[0] - 4) >= 0 )
    {
      sub_19397C0(v31);
      v11 = (uint8_t *)v31[0];
    }
  }
  v12 = (int)(uintptr_t)(v11);
  if ( (uint8_t *)v26 != v11 )
  {
    do
    {
      v28 = *v11;
      v21 = v35;
      if ( (v21 & *(uint8_t *)(*(uint32_t *)((uint8_t *)(sub_191CFA0(&v36)) + 24) + v28)) == 0 )
        break;
      ++v11;
    }
    while ( v11 != (uint8_t *)v26 );
    v12 = v31[0];
  }
  if ( *(int *)(v12 - 4) >= 0 )
    sub_19397C0(v31);
  sub_1939370(&v30);
  sub_1902180(&v36);
  sub_1902180(&v38);
  sub_1902180(&v34);
  sub_1902180(&v32);
  g4_std::string::append_str(v31, &glotv3::system::NIX_EOL);
  if ( glotv3::TrackingManager::s_IsSpyStreamLoggingActive != 0 )
  {
    sub_190CB20((int)(uintptr_t)(&v44), *(char **)(v25 + 8), 19);
    if ( (uint8_t)sub_1907FD0(v47) != 0 )
    {
      g4_std_compat::ostream_write(&v44, v31[0], *(uint32_t *)(v31[0] - 12));
      if ( sub_190AC60(v45) == 0 )
        sub_1911530((char *)&v45[-1] + (uint32_t)(uintptr_t)(*(v44 - 3)), *(uint32_t *)((char *)&v45[4] + (uint32_t)(uintptr_t)(*(v44 - 3))) | 4);
    }
    v48[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
    v44 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
    v45[0] = (uint32_t)(uintptr_t)(&off_20A9DA8);
    sub_190AC60(v45);
    sub_1908070(v47);
    v45[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(&v46);
    v44 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
    *(uint32_t *)((char *)&v45[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (uint32_t)(uintptr_t)(&off_20A9E80);
    v48[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v48);
  }
  if ( glotv3::TrackingManager::s_IsSpyTcpLoggingActive != 0 )
  {
    v13 = *(uint32_t *)(v25 + 13188);
    v14 = *(uint32_t *)(v13 + 148);
    if ( v14 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::TCP"
        "Server, typename boost::detail::sp_member_access<T>::type = glotv3::TCPServer::Self*]",
        "px != 0");
      v14 = *(uint32_t *)(v13 + 148);
    }
    glotv3::TCPServer::WriteTo(v14, v31);
  }
  g4_std::string::Destroy(v31);
  if ( v41 != nullptr )
    opDelete(v41);
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::RemoveEmptyAsyncs  (binary VA: 0x134eba0)
// Original: glotv3::SingletonMutexedProcessor::RemoveEmptyAsyncs
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::RemoveEmptyAsyncs(const char **self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  const char **v4;
  const char **v5;
  uint8_t v7[48];

  mutex = (pthread_mutex_t *)(self + 3349);
  do
    v2 = pthread_mutex_lock(mutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v7,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  if ( !glotv3::Fs::ExistsPathAndIsEmpty(self + 6) )
  {
    v4 = self + 7;
    if ( !glotv3::Fs::ExistsPathAndIsEmpty(self + 7) )
      goto LABEL_6;
LABEL_9:
    v5 = self + 8;
    glotv3::Fs::RemovePath(v4);
    if ( !glotv3::Fs::ExistsPathAndIsEmpty(self + 8) )
      return sub_1321760(mutex);
LABEL_10:
    glotv3::Fs::RemovePath(v5);
    return sub_1321760(mutex);
  }
  v4 = self + 7;
  glotv3::Fs::RemovePath(self + 6);
  if ( glotv3::Fs::ExistsPathAndIsEmpty(self + 7) )
    goto LABEL_9;
LABEL_6:
  v5 = self + 8;
  if ( glotv3::Fs::ExistsPathAndIsEmpty(self + 8) )
    goto LABEL_10;
  return sub_1321760(mutex);
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::FinishQueing  (binary VA: 0x134ec70)
// Original: glotv3::SingletonMutexedProcessor::FinishQueing
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::FinishQueing(glotv3::SingletonMutexedProcessor::Self *self)
{
  int result;

  *((uint8_t *)self + 13334) = 0;
  *((uint8_t *)self + 13332) = 1;
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13236 )
    sub_134E3D0();
  do
    result = pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 13236));
  while ( result == 4 );
  if ( result == 0 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)((char *)self + 13244)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        26,
        "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
        "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)((char *)self + 13248)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
        134,
        "void boost::condition_variable::notify_one()",
        "!pthread_cond_signal(&cond)");
    if ( pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 13244)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        30,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
        "!pthread_mutex_unlock(m)");
    return sub_1321760((char *)self + 13236);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::NotifyQueing  (binary VA: 0x134edb0)
// Original: glotv3::SingletonMutexedProcessor::NotifyQueing
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::NotifyQueing(int a1, int a2, glotv3::SingletonMutexedProcessor::Self *self)
{
  int result;

  *((uint8_t *)self + 13334) = 1;
  *((uint8_t *)self + 13332) = 0;
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13236 )
    sub_134E3D0(a1, a2);
  do
    result = pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 13236));
  while ( result == 4 );
  if ( result == 0 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)((char *)self + 13244)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        26,
        "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
        "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)((char *)self + 13248)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
        134,
        "void boost::condition_variable::notify_one()",
        "!pthread_cond_signal(&cond)");
    if ( pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 13244)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        30,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
        "!pthread_mutex_unlock(m)");
    return sub_1321760((pthread_mutex_t *)((char *)self + 13236));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::FinishNetwork  (binary VA: 0x134eef0)
// Original: glotv3::SingletonMutexedProcessor::FinishNetwork
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::FinishNetwork(int a1, int a2, glotv3::SingletonMutexedProcessor::Self *self)
{
  int result;

  *((uint8_t *)self + 13393) = 0;
  *((uint8_t *)self + 13392) = 1;
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13336 )
    sub_134E3D0(a1, a2);
  do
    result = pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 13336));
  while ( result == 4 );
  if ( result == 0 )
  {
    if ( pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(self) + (24 * (556)))) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        26,
        "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
        "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)((char *)self + 13348)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
        134,
        "void boost::condition_variable::notify_one()",
        "!pthread_cond_signal(&cond)");
    if ( pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(self) + (24 * (556)))) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        30,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
        "!pthread_mutex_unlock(m)");
    return sub_1321760((pthread_mutex_t *)((char *)self + 13336));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::NotifyNetwork  (binary VA: 0x134f030)
// Original: glotv3::SingletonMutexedProcessor::NotifyNetwork
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::NotifyNetwork(int a1, int a2, glotv3::SingletonMutexedProcessor::Self *self)
{
  int result;

  *((uint8_t *)self + 13393) = 1;
  *((uint8_t *)self + 13392) = 0;
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13336 )
    sub_134E3D0(a1, a2);
  do
    result = pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 13336));
  while ( result == 4 );
  if ( result == 0 )
  {
    if ( pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(self) + (24 * (556)))) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        26,
        "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
        "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)((char *)self + 13348)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
        134,
        "void boost::condition_variable::notify_one()",
        "!pthread_cond_signal(&cond)");
    if ( pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(self) + (24 * (556)))) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        30,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
        "!pthread_mutex_unlock(m)");
    return sub_1321760((pthread_mutex_t *)((char *)self + 13336));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::AddCompactedEvent  (binary VA: 0x134f170)
// Original: glotv3::SingletonMutexedProcessor::AddCompactedEvent
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::AddCompactedEvent(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  glotv3::Event::Self *v5;
  int v6;
  uint32_t *v7;
  typedef uint8_t *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[4];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef glotv3::Event::Self *_g4_t_v14;
  typedef volatile int32_t *_g4_t_v15;
  typedef void *_g4_t_v16[10];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v17)) > _g4_s8 ? (72u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v18)) > _g4_s9 ? (76u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);

  v16[2] = &loc_6;
  v16[6] = nullptr;
  v16[9] = nullptr;
  v16[8] = (void *)(uintptr_t)2048;
  v17 = opNew(1u);
  v18 = v17;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v16[7] = v2;
  v2[1] = 0;
  LOBYTE(v16[0]) = 1;
  v3 = sub_134C470(a2);
  glotv3::Event::addKeyPair(v3, &glotv3::Event::keyPromotedBatch, (glotv3::EventValue::Self *)v16);
  glotv3::EventValue::Destroy(v16);
  v4 = (uint32_t *)sub_134C470(a2);
  glotv3::Event::getUUID((glotv3::Event::Self *)&v9, v4);
  v5 = (glotv3::Event::Self *)sub_134C470(a2);
  glotv3::Event::setRootKeysValues(v5);
  v6 = sub_134C470(a2);
  glotv3::Event::addRootPair(v6, &glotv3::Event::keyUuid, &v9);
  v7 = (uint32_t *)sub_134C470(a2);
  glotv3::Event::getUUID((glotv3::Event::Self *)v10, v7);
  g4_std::string::construct_copy(v11, &glotv3::errors::BATCHING_UUID_NETWORK);
  g4_std::string::append_str(v11, v10);
  g4_std::string::construct_copy(&v12, v11);
  g4_std::string::append((int)(uintptr_t)(&v12), " based on UUID: ", 0x10u);
  g4_std::string::construct_copy(&v13, &v12);
  g4_std::string::append_str(&v13, &v9);
  glotv3::Glotv3Logger::WriteLog(&v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(v11);
  g4_std::string::Destroy(v10);
  v14 = *(glotv3::Event::Self **)a2;
  v15 = *(volatile int32_t **)(a2 + 4);
  if ( v15 != nullptr )
    __sync_add_and_fetch(v15 + 1, 1);
  glotv3::TrackingManager::AddEvent(*(uint32_t *)(a1 + 13188), &v14, 0);
  boost::detail::shared_count::Destroy(&v15);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::RecoverTokenFromV2  (binary VA: 0x134f3f0)
// Original: glotv3::SingletonMutexedProcessor::RecoverTokenFromV2
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::RecoverTokenFromV2(glotv3::SingletonMutexedProcessor::Self *self)
{
  unsigned int Platform;
  FILE *stream;
  FILE *v3;
  typedef uint16_t _g4_t_filename[3];
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[4];
  typedef uint8_t _g4_t_v9[4];
  typedef uint8_t _g4_t_v10[4];
  typedef uint32_t _g4_t_ptr;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (10u + sizeof(_g4_t_filename)) > _g4_s0 ? (10u + sizeof(_g4_t_filename)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v10)) > _g4_s5 ? (32u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_ptr)) > _g4_s6 ? (36u + sizeof(_g4_t_ptr)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v12)) > _g4_s7 ? (40u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v13)) > _g4_s8 ? (44u + sizeof(_g4_t_v13)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&filename[1]), "tracking_markers.dat", (int)(uintptr_t)(filename));
  Platform = glotv3::Porting::GetPlatform();
  if ( Platform == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "./", (int)(uintptr_t)(filename) + 1);
    g4_std::string::construct_copy(v7, &v6);
    g4_std::string::append_str(v7, &filename[1]);
    g4_std::string::assign_str(&filename[1], v7);
    g4_std::string::Destroy(v7);
    g4_std::string::Destroy(&v6);
  }
  else if ( Platform <= 4 )
  {
    glotv3::Porting::GetDataDirectory((glotv3::Porting::Self *)v8);
    g4_std::string::construct_copy(v9, v8);
    g4_std::string::append_str(v9, &glotv3::system::BACKSLASH);
    g4_std::string::construct_copy(v10, v9);
    g4_std::string::append_str(v10, &filename[1]);
    g4_std::string::assign_str(&filename[1], v10);
    g4_std::string::Destroy(v10);
    g4_std::string::Destroy(v9);
    g4_std::string::Destroy(v8);
    if ( !glotv3::Fs::ExistsPath((const char **)&filename[1]) )
      goto LABEL_10;
LABEL_4:
    stream = fopen(*(const char **)&filename[1], "rb");
    v3 = stream;
    if ( stream != nullptr )
    {
      ptr = 0;
      if ( fread(&ptr, 4u, 1u, stream) == 1 )
      {
        fclose(v3);
        __atomic_exchange_n((volatile int32_t *)(*((uint32_t *)self + 3297) + 172), ptr, __ATOMIC_SEQ_CST);
        glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v12), (unsigned int)(uintptr_t)(ptr));
        g4_std::string::construct_copy(v13, &glotv3::errors::MARKERS_RECOVERED_LAST_TOKEN);
        g4_std::string::append_str(v13, &v12);
        glotv3::Glotv3Logger::WriteLog(v13);
        g4_std::string::Destroy(v13);
        g4_std::string::Destroy(&v12);
      }
      else
      {
        fclose(v3);
      }
    }
    return ((g4_std::string::Destroy(&filename[1])), (int)0);
  }
  if ( glotv3::Fs::ExistsPath((const char **)&filename[1]) )
    goto LABEL_4;
LABEL_10:
  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::MARKERS_NOT_FOUND);
  return ((g4_std::string::Destroy(&filename[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::GetEventDescriptor  (binary VA: 0x134fbb0)
// Original: glotv3::SingletonMutexedProcessor::GetEventDescriptor
// ----------------------------------------------------------------------------
int * glotv3::SingletonMutexedProcessor::GetEventDescriptor(glotv3::SingletonMutexedProcessor::Self *self, int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  uint8_t *i;
  uint8_t *v6;
  glotv3::SingletonMutexedProcessor::Self *v7;
  typedef int *_g4_t_v9;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v10;
  typedef int _g4_t_v11[3];
  typedef char _g4_t_v12[41];
  typedef uint8_t _g4_t_v13[23];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (69u + sizeof(_g4_t_v13)) > _g4_s4 ? (69u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 69u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v12,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  v11[0] = (int)(uintptr_t)(&dword_213B814);
  v4 = __builtin_abs(a2);
  for ( i = v13; ; --i )
  {
    v6 = i - 1;
    *(i - 1) = v4 % 0xA + 48;
    v4 /= 0xAu;
    if ( v4 == 0 )
      break;
  }
  if ( a2 < 0 )
  {
    v6 = i - 2;
    *(i - 2) = 45;
  }
  sub_193A9B0((int)(uintptr_t)(v11), 0, dword_213B808[0], v6, v13 - v6);
  sub_1321760((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  if ( byte_21184E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_21184E0) != 0 )
  {
    dword_21184F4 = 0;
    dword_21184E8 = 0;
    dword_21184EC = 0;
    dword_21184F0 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_21184E0);
    __cxa_atexit(
      (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
      &dword_21184E8,
      &unk_20D1280);
  }
  v9 = (int *)(&dword_21184E8);
  v7 = *((glotv3::SingletonMutexedProcessor::Self **)self + 3289);
  if ( v7 != nullptr )
  {
    v10 = (glotv3::SingletonMutexedProcessor::Self *)((char *)self + 13152);
    do
    {
      while ( (int)g4_std::string::compare_str((char *)v7 + 16, v11) >= 0 )
      {
        v10 = v7;
        v7 = *((glotv3::SingletonMutexedProcessor::Self **)v7 + 2);
        if ( v7 == nullptr )
          goto LABEL_14;
      }
      v7 = *((glotv3::SingletonMutexedProcessor::Self **)v7 + 3);
    }
    while ( v7 != nullptr );
LABEL_14:
    v9 = (int *)(&dword_21184E8);
    if ( v10 != (glotv3::SingletonMutexedProcessor::Self *)((char *)self + 13152)
      && (int)g4_std::string::compare_str(v11, (char *)v10 + 16) >= 0 )
    {
      v9 = *(int **)((char *)v10 + 20);
    }
  }
  g4_std::string::Destroy(v11);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::IsEventInDescriptor  (binary VA: 0x134fde0)
// Original: glotv3::SingletonMutexedProcessor::IsEventInDescriptor
// ----------------------------------------------------------------------------
bool glotv3::SingletonMutexedProcessor::IsEventInDescriptor(glotv3::SingletonMutexedProcessor::Self *self, unsigned int a2)
{
  return glotv3::SingletonMutexedProcessor::GetEventDescriptor(self, a2)[3] != 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::IsBatched  (binary VA: 0x1350160)
// Original: glotv3::SingletonMutexedProcessor::IsBatched
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::IsBatched(glotv3::SingletonMutexedProcessor::Self *self, int a2)
{
  int *EventDescriptor;
  int v3;

  EventDescriptor = glotv3::SingletonMutexedProcessor::GetEventDescriptor(self, a2);
  v3 = 0;
  if ( EventDescriptor[3] != 0 )
    LOBYTE(v3) = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                   (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)EventDescriptor,
                   "batch_size") != 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::IsPriority  (binary VA: 0x13501b0)
// Original: glotv3::SingletonMutexedProcessor::IsPriority
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::IsPriority(glotv3::SingletonMutexedProcessor::Self *self, int a2)
{
  int *EventDescriptor;
  int v3;

  EventDescriptor = glotv3::SingletonMutexedProcessor::GetEventDescriptor(self, a2);
  v3 = 0;
  if ( EventDescriptor[3] != 0 )
    LOBYTE(v3) = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                   (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)EventDescriptor,
                   "prio") != 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::IsStream  (binary VA: 0x1350200)
// Original: glotv3::SingletonMutexedProcessor::IsStream
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::IsStream(glotv3::SingletonMutexedProcessor::Self *self, int a2)
{
  char IsPriority;
  int v3;

  IsPriority = glotv3::SingletonMutexedProcessor::IsPriority(self, a2);
  v3 = 0;
  if ( IsPriority == 0 )
    return glotv3::SingletonMutexedProcessor::IsBatched(self, a2) ^ 1;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum  (binary VA: 0x1350260)
// Original: glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum
// ----------------------------------------------------------------------------
int glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(glotv3::SingletonMutexedProcessor::Self *self, int a2)
{
  int v2;
  int *EventDescriptor;
  int *v5;
  int Member;
  uint8_t *v7;
  int *v8;
  int v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;

  v2 = 1;
  if ( (uint8_t)glotv3::SingletonMutexedProcessor::IsBatched(self, a2) != 0 )
  {
    EventDescriptor = glotv3::SingletonMutexedProcessor::GetEventDescriptor(self, a2);
    if ( rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
           (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)EventDescriptor,
           "batch_size") != 0 )
    {
      v5 = glotv3::SingletonMutexedProcessor::GetEventDescriptor(self, a2);
      Member = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                 (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v5,
                 "batch_size");
      v7 = (uint8_t *)(Member + 16);
      if ( Member == 0 )
      {
        v7 = (uint8_t *)(&g4_rapidjson_NullValue);
        if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
        {
          v11 = _cxa_guard_acquire(g4_guard_d940a9bded);
          v7 = (uint8_t *)(&g4_rapidjson_NullValue);
          if ( v11 != 0 )
            v7 = (uint8_t *)(uintptr_t)(sub_134C510());
        }
      }
      if ( (v7[13] & 8) == 0 )
      {
        v12 = v7;
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          685,
          "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<>,"
          " Allocator = rapidjson::MemoryPoolAllocator<>]",
          "flags_ & kUintFlag");
        v7 = v12;
      }
      v2 = 1;
      if ( *(uint32_t *)v7 > 1u )
      {
        v8 = glotv3::SingletonMutexedProcessor::GetEventDescriptor(self, a2);
        v9 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
               (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v8,
               "batch_size");
        v10 = (uint8_t *)(v9 + 16);
        if ( v9 == 0 )
        {
          v10 = (uint8_t *)(&g4_rapidjson_NullValue);
          if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
            && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
          {
            v10 = (uint8_t *)(uintptr_t)(sub_134C510());
          }
        }
        if ( (v10[13] & 8) == 0 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            685,
            "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::UTF8<"
            ">, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "flags_ & kUintFlag");
        return *(uint32_t *)v10;
      }
    }
  }

  return v2;
}


// ============================================================================
// Address:   0x1350440 (size: 1866 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor18GetEventParametersEiNS_5Event13BehaviorOfKeyE
// Demangled: glotv3::SingletonMutexedProcessor::GetEventParameters(int,glotv3::Event::BehaviorOfKey)
// ============================================================================
int glotv3::SingletonMutexedProcessor::GetEventParameters(
        int a1,
        glotv3::SingletonMutexedProcessor::Self *a2,
        int a3,
        int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int *EventDescriptor;
  int Member;
  uint32_t *v12;
  unsigned int i;
  char *v14;
  char **v15;
  int v16;
  int v17;
  const char *v18;
  int v19;
  int v20;
  int v21;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v22;
  int v23;
  char **v24;
  char **v25;
  char **v26;
  int *v27;
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v28;
  int v29;
  char **v30;
  char **v31;
  char **v32;
  int v33;
  int v34;
  typedef char **_g4_t_v35;
  typedef char **_g4_t_v36;
  typedef char **_g4_t_v37;
  typedef char **_g4_t_v38;
  typedef char **_g4_t_v39;
  typedef char **_g4_t_v40;
  typedef char **_g4_t_v41;
  typedef char **_g4_t_v42;
  typedef char **_g4_t_v43;
  typedef char **_g4_t_v44;
  typedef char **_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int64_t _g4_t_v52 __attribute__((aligned(1)));
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char _g4_t_v56[4];
  typedef int _g4_t_v57[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v37)) > _g4_s2 ? (12u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v38)) > _g4_s3 ? (12u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v39)) > _g4_s4 ? (12u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v40)) > _g4_s5 ? (12u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v41)) > _g4_s6 ? (12u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v42)) > _g4_s7 ? (12u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v43)) > _g4_s8 ? (12u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v44)) > _g4_s9 ? (12u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v45)) > _g4_s10 ? (12u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v46)) > _g4_s11 ? (16u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v47)) > _g4_s12 ? (16u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v48)) > _g4_s13 ? (16u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v49)) > _g4_s14 ? (16u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v50)) > _g4_s15 ? (20u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (34u + sizeof(_g4_t_v51)) > _g4_s16 ? (34u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v52)) > _g4_s17 ? (36u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v53)) > _g4_s18 ? (44u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v54)) > _g4_s19 ? (48u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v55)) > _g4_s20 ? (52u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v56)) > _g4_s21 ? (56u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v57)) > _g4_s22 ? (60u + sizeof(_g4_t_v57)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 34u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);

  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 4) = 8;
  v4 = opNew(0x20u);
  v5 = *(uint32_t *)(a1 + 4);
  *(uint32_t *)a1 = v4;
  v6 = (int *)(v4 + ((2 * v5 - 2) & 0xFFFFFFFC));
  *v6 = opNew(0x200u);
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v6);
  v7 = *v6;
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v6);
  *(uint32_t *)(a1 + 12) = v7;
  *(uint32_t *)(a1 + 16) = v7 + 512;
  v8 = *v6;
  *(uint32_t *)(a1 + 8) = v7;
  *(uint32_t *)(a1 + 28) = v8;
  *(uint32_t *)(a1 + 24) = v8;
  *(uint32_t *)(a1 + 32) = v8 + 512;
  EventDescriptor = glotv3::SingletonMutexedProcessor::GetEventDescriptor(a2, a3);
  if ( EventDescriptor[3] != 0
    && rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
         (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)EventDescriptor,
         "params") != 0 )
  {
    Member = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
               (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)EventDescriptor,
               "params");
    v12 = (uint32_t *)(Member + 16);
    if ( Member == 0 )
    {
      v12 = (uint32_t *)(&g4_rapidjson_NullValue);
      if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
        && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
      {
        v12 = (uint32_t *)(uintptr_t)(sub_134C510());
      }
    }
    if ( v12[3] == 4 )
    {
      v50 = v12[1];
      if ( v50 != 0 )
      {
        for ( i = 0; i != v50; ++i )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52) + 4, "k", (int)(uintptr_t)(&v51));
          v18 = (const char *)HIDWORD(v52);
          if ( v12[3] != 4 )
          {
            v46 = (char *)HIDWORD(v52);
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              579,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "IsArray ()");
            v18 = v46;
          }
          if ( i >= v12[1] )
          {
            v47 = (char *)v18;
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              580,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "index < data_.a.size");
            v18 = v47;
          }
          v19 = 16 * i;
          v20 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                  (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(16 * i + *v12),
                  v18);
          v15 = (char **)(v20 + 16);
          if ( v20 == 0 )
          {
            v15 = (char **)&g4_rapidjson_NullValue;
            if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
            {
              v21 = _cxa_guard_acquire(g4_guard_d940a9bded);
              v15 = (char **)&g4_rapidjson_NullValue;
              if ( v21 != 0 )
              {
                *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
                _cxa_guard_release(g4_guard_d940a9bded);
                __cxa_atexit(
                  (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
                  &g4_rapidjson_NullValue,
                  &unk_20D1280);
                v15 = (char **)&g4_rapidjson_NullValue;
              }
            }
          }
          v14 = v15[3];
          if ( v14 != nullptr )
          {
            if ( a4 == 1 )
            {
              if ( v12[3] != 4 )
              {
                v36 = v15;
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  579,
                  "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[]"
                  "(rapidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>"
                  ", rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjso"
                  "n::SizeType = unsigned int]",
                  "IsArray ()");
                v15 = v36;
              }
              if ( i >= v12[1] )
              {
                v37 = v15;
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  580,
                  "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[]"
                  "(rapidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>"
                  ", rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjso"
                  "n::SizeType = unsigned int]",
                  "index < data_.a.size");
                v15 = v37;
              }
              v22 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*v12 + v19);
              if ( *((uint32_t *)v22 + 3) != 0 )
              {
                v38 = v15;
                if ( rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                       v22,
                       "batching") != 0 )
                {
                  v23 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                          v22,
                          "batching");
                  v24 = (char **)(v23 + 16);
                  v25 = v38;
                  if ( v23 == 0 )
                  {
                    v24 = (char **)&g4_rapidjson_NullValue;
                    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
                    {
                      v33 = _cxa_guard_acquire(g4_guard_d940a9bded);
                      v25 = v38;
                      if ( v33 != 0 )
                      {
                        v24 = (char **)sub_134C510();
                        v25 = v38;
                      }
                    }
                  }
                  if ( (*((uint8_t *)v24 + 14) & 0x10) == 0 )
                  {
                    v39 = v25;
                    __assert2(
                      "../../../../../lib/rapidjson/document.h",
                      775,
                      "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjs"
                      "on::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Alloca"
                      "tor>::Ch = char]",
                      "IsString ()");
                    v25 = v39;
                  }
                  v40 = v25;
                  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v53), *v24, (int)(uintptr_t)(&v51) + 1);
                  v48 = (char *)g4_std_compat::string_compare((int)(uintptr_t)(&v53), "yes");
                  g4_noop_dtor(&v53);
                  v26 = v40;
                  if ( v48 == nullptr )
                  {
                    if ( (*((uint8_t *)v40 + 14) & 0x10) == 0 )
                    {
                      __assert2(
                        "../../../../../lib/rapidjson/document.h",
                        775,
                        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapid"
                        "json::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Al"
                        "locator>::Ch = char]",
                        "IsString ()");
                      v26 = v40;
                    }
                    v27 = &v54;
                    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v54), *v26, (int)(uintptr_t)(&v52));
                    goto LABEL_43;
                  }
                }
              }
            }
            else if ( a4 == 2 )
            {
              if ( v12[3] != 4 )
              {
                v41 = v15;
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  579,
                  "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[]"
                  "(rapidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>"
                  ", rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjso"
                  "n::SizeType = unsigned int]",
                  "IsArray ()");
                v15 = v41;
              }
              if ( i >= v12[1] )
              {
                v42 = v15;
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  580,
                  "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[]"
                  "(rapidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>"
                  ", rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjso"
                  "n::SizeType = unsigned int]",
                  "index < data_.a.size");
                v15 = v42;
              }
              v28 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*v12 + v19);
              if ( *((uint32_t *)v28 + 3) != 0 )
              {
                v43 = v15;
                if ( rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                       v28,
                       "encrypt") != 0 )
                {
                  v29 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                          v28,
                          "encrypt");
                  v30 = (char **)(v29 + 16);
                  v31 = v43;
                  if ( v29 == 0 )
                  {
                    v30 = (char **)&g4_rapidjson_NullValue;
                    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
                    {
                      v34 = _cxa_guard_acquire(g4_guard_d940a9bded);
                      v31 = v43;
                      if ( v34 != 0 )
                      {
                        v30 = (char **)sub_134C510();
                        v31 = v43;
                      }
                    }
                  }
                  if ( (*((uint8_t *)v30 + 14) & 0x10) == 0 )
                  {
                    v44 = v31;
                    __assert2(
                      "../../../../../lib/rapidjson/document.h",
                      775,
                      "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjs"
                      "on::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Alloca"
                      "tor>::Ch = char]",
                      "IsString ()");
                    v31 = v44;
                  }
                  v45 = v31;
                  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v55), *v30, (int)(uintptr_t)(&v52) + 1);
                  v49 = (char *)g4_std_compat::string_compare((int)(uintptr_t)(&v55), "yes");
                  g4_noop_dtor(&v55);
                  v32 = v45;
                  if ( v49 == nullptr )
                  {
                    if ( (*((uint8_t *)v45 + 14) & 0x10) == 0 )
                    {
                      __assert2(
                        "../../../../../lib/rapidjson/document.h",
                        775,
                        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapid"
                        "json::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Al"
                        "locator>::Ch = char]",
                        "IsString ()");
                      v32 = v45;
                    }
                    v27 = (int *)v56;
                    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v56), *v32, (int)(uintptr_t)(&v52) + 2);
LABEL_43:
                    g4_std_compat::deque_push_back(a1, (int)(uintptr_t)(v27));
                    g4_noop_dtor(v27);
                  }
                }
              }
            }
            else
            {
              if ( ((unsigned int)(uintptr_t)(v14) & 0x100000) == 0 )
              {
                v35 = v15;
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  775,
                  "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::"
                  "UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
                  "IsString ()");
                v15 = v35;
              }
              g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v57), *v15, (int)(uintptr_t)(&v52) + 3);
              v16 = *(uint32_t *)(a1 + 24);
              if ( v16 == *(uint32_t *)(a1 + 32) - 4 )
              {
                sub_134C880((void **)a1, (int)(uintptr_t)(v57));
              }
              else
              {
                v17 = 0;
                if ( v16 != 0 )
                {
                  g4_std_compat::string_construct_copy(*(uint32_t *)(a1 + 24), v57);
                  v17 = *(uint32_t *)(a1 + 24);
                }
                *(uint32_t *)(a1 + 24) = v17 + 4;
              }
              g4_noop_dtor(v57);
            }
          }
          g4_noop_dtor((char *)&v52 + 4);
        }
        return a1;
      }
    }
  }
  return a1;
}


// ============================================================================
// Address:   0x1350b90 (size: 708 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor23EncryptEncodeParametersEN5boost10shared_ptrINS_5EventEEE
// Demangled: glotv3::SingletonMutexedProcessor::EncryptEncodeParameters(boost::shared_ptr<glotv3::Event>)
// ============================================================================
void glotv3::SingletonMutexedProcessor::EncryptEncodeParameters(glotv3::SingletonMutexedProcessor::Self *a1, int a2)
{
  glotv3::SingletonMutexedProcessor::Self *v2;
  glotv3::Event::Self *v3;
  glotv3::Event::Self *v4;
  int EventType;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t *_g4_t_v17[4];
  typedef char *_g4_t_s2[4];
  typedef uint8_t *_g4_t_v19;
  typedef char *_g4_t_s1;
  typedef char _g4_t_v21[4];
  typedef char _g4_t_v22[4];
  typedef uint8_t _g4_t_v23[4];
  typedef char _g4_t_v24[4];
  typedef uint8_t _g4_t_v25[4];
  typedef char _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[8];
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef glotv3::SingletonMutexedProcessor::Self **_g4_t_v32;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_s2)) > _g4_s6 ? (48u + sizeof(_g4_t_s2)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_s1)) > _g4_s8 ? (68u + sizeof(_g4_t_s1)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v21)) > _g4_s9 ? (72u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v22)) > _g4_s10 ? (76u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v23)) > _g4_s11 ? (80u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v24)) > _g4_s12 ? (84u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v25)) > _g4_s13 ? (88u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v26)) > _g4_s14 ? (92u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v27)) > _g4_s15 ? (96u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v28)) > _g4_s16 ? (104u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v29)) > _g4_s17 ? (112u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v30)) > _g4_s18 ? (116u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v31)) > _g4_s19 ? (120u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (152u + sizeof(_g4_t_v32)) > _g4_s20 ? (152u + sizeof(_g4_t_v32)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 116u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 120u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 152u);

  v32 = &a1;
  v2 = a1;
  v16 = a2;
  v3 = (glotv3::Event::Self *)sub_134C470(a2);
  if ( (uint8_t)glotv3::Event::isAutomatic(v3) == 0 )
  {
    v4 = (glotv3::Event::Self *)sub_134C470(v16);
    EventType = glotv3::Event::getEventType(v4);
    glotv3::SingletonMutexedProcessor::GetEventParameters((int)(uintptr_t)(v27), v2, EventType, 2);
    v15 = v29;
    v6 = v28;
    v14 = v30;
    while ( v31 != v6 )
    {
      while ( 1 )
      {
        g4_std_compat::string_construct_copy(&v19, v6);
        v7 = sub_134C470(v16);
        if ( glotv3::Event::hasKeyPair(v7, &v19) )
        {
          v9 = sub_134C470(v16);
          glotv3::Event::getKeyPair(&s1, v9, &v19);
          v10 = *((uint32_t *)s1 - 3);
          if ( v10 != 0 )
          {
            if ( v10 < 8 )
              g4_std_compat::string_reserve((int)(uintptr_t)(&s1), 8 - v10, 32);
            v17[0] = (uint8_t *)(&dword_213B814);
            if ( (uint8_t)glotv3::Porting::EncryptXXTEAEncodeBase64((glwebtools::Codec::Self **)&s1, v17) != 0 )
            {
              s2[0] = (char *)&dword_213B814;
              if ( (uint8_t)glotv3::Porting::DecodeBase64DecryptXXTEA(v17, (void **)s2) != 0 )
              {
                sub_1903A70(v21);
                v23[0] = 8;
                sub_1901AC0(v24, v21);
                sub_134CEC0((int *)&s1, v23, v12);
                sub_1902180(v24);
                sub_1902180(v21);
                sub_1903A70(v22);
                v25[0] = 8;
                sub_1901AC0(v26, v22);
                sub_134CEC0((int *)s2, v25, v13);
                sub_1902180(v26);
                sub_1902180(v22);
                if ( strcmp(s1, s2[0]) == 0 )
                {
                  v11 = sub_134C470(v16);
                  glotv3::Event::addKeyPair(v11, &v19, v17);
                }
              }
              g4_noop_dtor(s2);
            }
            g4_noop_dtor(v17);
          }
          g4_noop_dtor(&s1);
        }
        v6 += 4;
        g4_noop_dtor(&v19);
        if ( v15 != v6 )
          break;
        v8 = v14;
        v14 += 4;
        v6 = *(uint32_t *)(v8 + 4);
        v15 = v6 + 512;
        if ( v31 == v6 )
          goto LABEL_7;
      }
    }
LABEL_7:
    g4_std_compat::deque_destroy((std::deque<std::string> *)v27);
  }
}


// ============================================================================
// Address:   0x13517e0 (size: 2720 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessorC1ERSsS1_RNS_15TrackingManagerE
// Demangled: glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(std::string &,std::string &,glotv3::TrackingManager &)
// ============================================================================
// Alternative name is '_ZN6glotv325SingletonMutexedProcessorC2ERSsS1_RNS_15TrackingManagerE'
// write access to const memory has been detected, the output may be wrong!
int glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(uint32_t *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  uint32_t *v7;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int result;
  int v39;
  int v40;
  uint32_t *v41;
  typedef char _g4_t_v42[4];
  typedef uint32_t _g4_t_v43[2];
  typedef char _g4_t_v44[20];
  typedef char _g4_t_v45[20];
  typedef char _g4_t_v46[20];
  typedef char _g4_t_v47[20];
  typedef char _g4_t_v48[20];
  typedef char _g4_t_v49[20];
  typedef char _g4_t_v50[20];
  typedef char _g4_t_v51[20];
  typedef char _g4_t_v52[20];
  typedef char _g4_t_v53[20];
  typedef char _g4_t_v54[20];
  typedef char _g4_t_v55[20];
  typedef char _g4_t_v56[48];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v44)) > _g4_s2 ? (12u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v45)) > _g4_s3 ? (32u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v46)) > _g4_s4 ? (52u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v47)) > _g4_s5 ? (72u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v48)) > _g4_s6 ? (92u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v49)) > _g4_s7 ? (112u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (132u + sizeof(_g4_t_v50)) > _g4_s8 ? (132u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (152u + sizeof(_g4_t_v51)) > _g4_s9 ? (152u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (172u + sizeof(_g4_t_v52)) > _g4_s10 ? (172u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (192u + sizeof(_g4_t_v53)) > _g4_s11 ? (192u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (212u + sizeof(_g4_t_v54)) > _g4_s12 ? (212u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (232u + sizeof(_g4_t_v55)) > _g4_s13 ? (232u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (252u + sizeof(_g4_t_v56)) > _g4_s14 ? (252u + sizeof(_g4_t_v56)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 132u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 152u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 172u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 192u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 212u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 232u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 252u);

  *a1 = a2;
  a1[1] = a3;
  g4_std_compat::string_construct_copy(v42, &glotv3::system::QADEBUG_ANDROID_PATH_FIX);
  g4_std::string::append_str(v42, &glotv3::system::BACKSLASH);
  g4_std_compat::string_construct_copy(a1 + 2, v42);
  g4_std::string::append_str(a1 + 2, &glotv3::system::DEBUGLOG_FILE);
  g4_noop_dtor(v42);
  g4_std_compat::string_construct_copy(a1 + 3, *a1);
  g4_std::string::append_str(a1 + 3, &glotv3::system::PRIORITY_FILE);
  g4_std_compat::string_construct_copy(a1 + 4, *a1);
  g4_std::string::append_str(a1 + 4, &glotv3::system::STREAMED_FILE);
  g4_std_compat::string_construct_copy(a1 + 5, *a1);
  g4_std::string::append_str(a1 + 5, &glotv3::system::BATCHING_FILE);
  g4_std_compat::string_construct_copy(a1 + 6, a1 + 3);
  g4_std::string::append_str(a1 + 6, &glotv3::system::ASYNC_SUFFIX);
  g4_std_compat::string_construct_copy(a1 + 7, a1 + 4);
  g4_std::string::append_str(a1 + 7, &glotv3::system::ASYNC_SUFFIX);
  g4_std_compat::string_construct_copy(a1 + 8, a1 + 5);
  g4_std::string::append_str(a1 + 8, &glotv3::system::ASYNC_SUFFIX);
  glotv3::Writer::Construct((pthread_mutex_t *)(a1 + 9), (int)(uintptr_t)(a1 + 3));
  glotv3::Writer::Construct((pthread_mutex_t *)(a1 + 1096), (int)(uintptr_t)(a1 + 4));
  glotv3::Writer::Construct((pthread_mutex_t *)(a1 + 2183), (int)(uintptr_t)(a1 + 5));
  a1[3270] = 0;
  a1[3272] = 0;
  a1[3273] = 0;
  a1[3274] = 0;
  a1[3271] = 2048;
  v5 = (int)(uintptr_t)(operator new(1u));
  v6 = a1[3271];
  a1[3273] = v5;
  a1[3274] = v5;
  v7 = (uint32_t *)(malloc(v6 + 12));
  *v7 = v6;
  v7[1] = 0;
  v7[2] = a1[3270];
  v8 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)(a1 + 3270);
  a1[3270] = (uint32_t)(uintptr_t)(v7);
  a1[3278] = 0;
  a1[3279] = (uint32_t)(uintptr_t)(a1 + 3270);
  a1[3280] = 0;
  a1[3281] = 0;
  a1[3282] = 0;
  a1[3283] = 0;
  a1[3284] = 2048;
  if ( a1 == (uint32_t *)-13080 )
  {
    v8 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)operator new(0x14u);
    *(uint32_t *)v8 = 0;
    *((uint32_t *)v8 + 1) = 2048;
    *((uint32_t *)v8 + 2) = 0;
    *((uint32_t *)v8 + 3) = 0;
    *((uint32_t *)v8 + 4) = 0;
    v39 = (int)(uintptr_t)(operator new(1u));
    v40 = *((uint32_t *)v8 + 1);
    *((uint32_t *)v8 + 3) = v39;
    *((uint32_t *)v8 + 4) = v39;
    v41 = (uint32_t *)(malloc(v40 + 12));
    *v41 = v40;
    v41[1] = 0;
    v41[2] = *(uint32_t *)v8;
    *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v41);
    dword_24 = (int)(uintptr_t)(v8);
    word_28 = (uint16_t)(uintptr_t)(v8);
  }
  v9 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v8, a1[3284]));
  a1[3281] = v9;
  a1[3282] = v9;
  a1[3283] = a1[3284] + v9;
  a1[3297] = a4;
  a1[3285] = 0;
  a1[3286] = 0;
  a1[3288] = 0;
  a1[3289] = 0;
  a1[3292] = 0;
  a1[3296] = 0;
  a1[3290] = (uint32_t)(uintptr_t)(a1 + 3288);
  a1[3291] = (uint32_t)(uintptr_t)(a1 + 3288);
  v10 = *(uint32_t *)(a4 + 80);
  v43[0] = 0;
  v43[1] = (uint32_t)(uintptr_t)(&boost::asio::detail::service_base<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::id);
  a1[3298] = (uint32_t)(uintptr_t)(boost::asio::detail::service_registry::do_use_service(
               v10,
               v43,
               g4_asio_create_deadline_timer_ptime));
  a1[3299] = -2;
  a1[3300] = 0x7FFFFFFF;
  a1[3302] = 0;
  a1[3303] = 0;
  a1[3305] = 0;
  a1[3306] = 0;
  *((uint8_t *)a1 + 13204) = 0;
  a1[3307] = 0;
  v11 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3309), nullptr);
  if ( v11 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v44,
      v11,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v12 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3310), nullptr);
  if ( v12 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v45,
      v12,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v13 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3311), nullptr);
  if ( v13 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v47,
      v13,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v14 = pthread_cond_init((pthread_cond_t *)((char *)a1 + 13248), nullptr);
  if ( v14 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(a1 + 3311)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v46,
      v14,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  a1[3313] = 0;
  a1[3315] = 0;
  a1[3316] = 0;
  a1[3317] = 0;
  a1[3318] = 0;
  a1[3319] = 0;
  a1[3320] = 0;
  a1[3321] = 0;
  a1[3322] = 0;
  a1[3314] = 8;
  v15 = (int)(uintptr_t)(operator new(0x20u));
  v16 = a1[3314];
  a1[3313] = v15;
  v17 = (int *)(v15 + ((2 * v16 - 2) & 0xFFFFFFFC));
  *v17 = (int)(uintptr_t)(operator new(0x200u));
  a1[3318] = (uint32_t)(uintptr_t)(v17);
  v18 = *v17;
  a1[3322] = (uint32_t)(uintptr_t)(v17);
  a1[3316] = v18;
  a1[3317] = v18 + 512;
  v19 = *v17;
  a1[3315] = v18;
  a1[3320] = v19;
  a1[3319] = v19;
  a1[3323] = 0;
  a1[3325] = 0;
  a1[3326] = 0;
  a1[3327] = 0;
  a1[3328] = 0;
  a1[3321] = v19 + 512;
  a1[3329] = 0;
  a1[3330] = 0;
  a1[3331] = 0;
  a1[3332] = 0;
  a1[3324] = 8;
  v20 = (int)(uintptr_t)(operator new(0x20u));
  v21 = a1[3324];
  a1[3323] = v20;
  v22 = (int *)(v20 + ((2 * v21 - 2) & 0xFFFFFFFC));
  *v22 = (int)(uintptr_t)(operator new(0x200u));
  a1[3328] = (uint32_t)(uintptr_t)(v22);
  v23 = *v22;
  a1[3332] = (uint32_t)(uintptr_t)(v22);
  a1[3326] = v23;
  a1[3327] = v23 + 512;
  v24 = *v22;
  a1[3325] = v23;
  a1[3330] = v24;
  a1[3329] = v24;
  *((uint8_t *)a1 + 13332) = 0;
  *((uint8_t *)a1 + 13333) = 0;
  *((uint8_t *)a1 + 13334) = 0;
  a1[3331] = v24 + 512;
  v25 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3334), nullptr);
  if ( v25 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v48,
      v25,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v26 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3335), nullptr);
  if ( v26 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v49,
      v26,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v27 = pthread_mutex_init(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (556))), nullptr);
  if ( v27 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v51,
      v27,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v28 = pthread_cond_init((pthread_cond_t *)(a1 + 3337), nullptr);
  if ( v28 != 0 )
  {
    if ( pthread_mutex_destroy(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (556)))) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v50,
      v28,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  a1[3338] = 0;
  a1[3340] = 0;
  a1[3341] = 0;
  a1[3342] = 0;
  a1[3343] = 0;
  a1[3344] = 0;
  a1[3345] = 0;
  a1[3346] = 0;
  a1[3347] = 0;
  a1[3339] = 8;
  v29 = (int)(uintptr_t)(operator new(0x20u));
  v30 = a1[3339];
  a1[3338] = v29;
  v31 = (int *)(v29 + ((2 * v30 - 2) & 0xFFFFFFFC));
  *v31 = (int)(uintptr_t)(operator new(0x200u));
  a1[3343] = (uint32_t)(uintptr_t)(v31);
  v32 = *v31;
  a1[3347] = (uint32_t)(uintptr_t)(v31);
  a1[3341] = v32;
  a1[3342] = v32 + 512;
  v33 = *v31;
  a1[3340] = v32;
  a1[3345] = v33;
  a1[3344] = v33;
  *((uint8_t *)a1 + 13392) = 0;
  *((uint8_t *)a1 + 13393) = 0;
  a1[3346] = v33 + 512;
  v34 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3349), nullptr);
  if ( v34 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v52,
      v34,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v35 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3350), nullptr);
  if ( v35 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v53,
      v35,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v36 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3351), nullptr);
  if ( v36 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v54,
      v36,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v37 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3352), nullptr);
  if ( v37 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v55,
      v37,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  result = pthread_mutex_init((pthread_mutex_t *)(a1 + 3353), nullptr);
  if ( result != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v56,
      result,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  *((uint8_t *)a1 + 13416) = 1;
  *((uint8_t *)a1 + 13417) = 1;
  *((uint8_t *)a1 + 13418) = 0;
  *((uint8_t *)a1 + 13419) = 0;
  *((uint8_t *)a1 + 13420) = 0;
  *((uint8_t *)a1 + 13421) = 0;
  *((uint8_t *)a1 + 13422) = 0;
  return result;
}


// ============================================================================
// Address:   0x1352720 (size: 2134 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessorD1Ev
// Demangled: glotv3::SingletonMutexedProcessor::Destroy()
// ============================================================================
// Alternative name is '_ZN6glotv325SingletonMutexedProcessorD2Ev'
void glotv3::SingletonMutexedProcessor::Destroy(glotv3::SingletonMutexedProcessor::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  boost::detail::shared_count::Self *v10;
  int v11;
  boost::detail::shared_count::Self *v12;
  int v13;
  boost::detail::shared_count::Self *v14;
  void *v15;
  void **v16;
  unsigned int v17;
  void *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  void *v23;
  void **v24;
  unsigned int v25;
  void *v26;
  void *v27;
  void **v28;
  unsigned int v29;
  void *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *i;
  void (*v37)(uint32_t, uint32_t *, uint32_t *, uint32_t);
  bool v38;
  void *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  int v44;
  boost::detail::shared_count::Self *v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t _g4_t_v54[25];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v47)) > _g4_s1 ? (4u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v48)) > _g4_s2 ? (12u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v49)) > _g4_s3 ? (16u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v50)) > _g4_s4 ? (20u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v51)) > _g4_s5 ? (24u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v52)) > _g4_s6 ? (32u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v53)) > _g4_s7 ? (36u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v54)) > _g4_s8 ? (40u + sizeof(_g4_t_v54)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);

  v1 = self;
  v52 = 0;
  v53 = (int)(uintptr_t)(sub_18F81E0());
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    *((uint32_t *)v1 + 3298) + 20,
    (char *)v1 + 13196,
    &v52);
  if ( v52 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
    sub_134D010();
  do
    v2 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 13412));
  while ( v2 == 4 );
  if ( v2 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v3 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 13408));
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v4 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 13404));
  while ( v4 == 4 );
  if ( v4 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v5 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 13400));
  while ( v5 == 4 );
  if ( v5 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v6 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 13396));
  while ( v6 == 4 );
  if ( v6 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  v48 = *((uint32_t *)self + 3344);
  v50 = *((uint32_t *)self + 3345);
  v46 = *((uint32_t *)self + 3347);
  v49 = *((uint32_t *)self + 3340);
  v51 = *((uint32_t *)self + 3342);
  v47 = *((uint32_t *)self + 3343);
  if ( v46 > v47 + 4 )
  {
    v7 = (int *)(v47 + 4);
    do
    {
      v8 = *v7;
      v9 = *v7 + 512;
      do
      {
        v10 = (boost::detail::shared_count::Self *)(v8 + 4);
        v8 += 8;
        boost::detail::shared_count::Destroy(v10);
      }
      while ( v8 != v9 );
      ++v7;
    }
    while ( v46 > (unsigned int)(uintptr_t)(v7) );
    v1 = self;
  }
  if ( v46 == v47 )
  {
    if ( v48 != v49 )
    {
      v44 = v49;
      do
      {
        v45 = (boost::detail::shared_count::Self *)(v44 + 4);
        v44 += 8;
        boost::detail::shared_count::Destroy(v45);
      }
      while ( v48 != v44 );
    }
  }
  else
  {
    if ( v49 != v51 )
    {
      v11 = v49;
      do
      {
        v12 = (boost::detail::shared_count::Self *)(v11 + 4);
        v11 += 8;
        boost::detail::shared_count::Destroy(v12);
      }
      while ( v51 != v11 );
    }
    if ( v48 != v50 )
    {
      v13 = v50;
      do
      {
        v14 = (boost::detail::shared_count::Self *)(v13 + 4);
        v13 += 8;
        boost::detail::shared_count::Destroy(v14);
      }
      while ( v48 != v13 );
    }
  }
  v15 = *((void **)v1 + 3338);
  if ( v15 != nullptr )
  {
    v16 = *((void ***)v1 + 3343);
    v17 = *((uint32_t *)v1 + 3347) + 4;
    if ( v17 > (unsigned int)(uintptr_t)(v16) )
    {
      do
      {
        v18 = *v16++;
        operator delete(v18);
      }
      while ( v17 > (unsigned int)(uintptr_t)(v16) );
      v15 = *((void **)v1 + 3338);
    }
    operator delete(v15);
  }
  do
    v19 = pthread_mutex_destroy(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (556))));
  while ( v19 == 4 );
  if ( v19 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      81,
      "boost::condition_variable::Destroy()",
      "!ret");
  do
    v20 = pthread_cond_destroy((pthread_cond_t *)((char *)v1 + 13348));
  while ( v20 == 4 );
  if ( v20 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      86,
      "boost::condition_variable::Destroy()",
      "!ret");
  do
    v21 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13340));
  while ( v21 == 4 );
  if ( v21 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v22 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13336));
  while ( v22 == 4 );
  if ( v22 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  v54[6] = *((uint32_t *)v1 + 3329);
  v54[7] = *((uint32_t *)v1 + 3330);
  v54[8] = *((uint32_t *)v1 + 3331);
  v54[9] = *((uint32_t *)v1 + 3332);
  v54[2] = *((uint32_t *)v1 + 3325);
  v54[3] = *((uint32_t *)v1 + 3326);
  v54[4] = *((uint32_t *)v1 + 3327);
  v54[5] = *((uint32_t *)v1 + 3328);
  sub_134E700();
  v23 = *((void **)v1 + 3323);
  if ( v23 != nullptr )
  {
    v24 = *((void ***)v1 + 3328);
    v25 = *((uint32_t *)v1 + 3332) + 4;
    if ( v25 > (unsigned int)(uintptr_t)(v24) )
    {
      do
      {
        v26 = *v24++;
        operator delete(v26);
      }
      while ( v25 > (unsigned int)(uintptr_t)(v24) );
      v23 = *((void **)v1 + 3323);
    }
    operator delete(v23);
  }
  v54[14] = *((uint32_t *)v1 + 3319);
  v54[15] = *((uint32_t *)v1 + 3320);
  v54[16] = *((uint32_t *)v1 + 3321);
  v54[17] = *((uint32_t *)v1 + 3322);
  v54[10] = *((uint32_t *)v1 + 3315);
  v54[11] = *((uint32_t *)v1 + 3316);
  v54[12] = *((uint32_t *)v1 + 3317);
  v54[13] = *((uint32_t *)v1 + 3318);
  sub_134E700();
  v27 = *((void **)v1 + 3313);
  if ( v27 != nullptr )
  {
    v28 = *((void ***)v1 + 3318);
    v29 = *((uint32_t *)v1 + 3322) + 4;
    if ( v29 > (unsigned int)(uintptr_t)(v28) )
    {
      do
      {
        v30 = *v28++;
        operator delete(v30);
      }
      while ( v29 > (unsigned int)(uintptr_t)(v28) );
      v27 = *((void **)v1 + 3313);
    }
    operator delete(v27);
  }
  do
    v31 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13244));
  while ( v31 == 4 );
  if ( v31 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      81,
      "boost::condition_variable::Destroy()",
      "!ret");
  do
    v32 = pthread_cond_destroy((pthread_cond_t *)((char *)v1 + 13248));
  while ( v32 == 4 );
  if ( v32 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      86,
      "boost::condition_variable::Destroy()",
      "!ret");
  do
    v33 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13240));
  while ( v33 == 4 );
  if ( v33 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v34 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13236));
  while ( v34 == 4 );
  if ( v34 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  v35 = *((uint32_t *)v1 + 3298);
  v52 = 0;
  v53 = (int)(uintptr_t)(sub_18F81E0());
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    v35 + 20,
    (char *)self + 13196,
    &v52);
  for ( i = *((uint32_t **)v1 + 3302); i != nullptr; i = *((uint32_t **)v1 + 3302) )
  {
    v38 = *i == 0;
    *((uint32_t *)v1 + 3302) = *i;
    if ( v38 )
      *((uint32_t *)v1 + 3303) = 0;
    *i = 0;
    v37 = (void (*)(uint32_t, uint32_t *, uint32_t *, uint32_t))i[1];
    v54[0] = 0;
    v54[1] = (uint32_t)(uintptr_t)(sub_18F81E0());
    v37(0, i, v54, 0);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>,std::_Select1st<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>,std::less<std::string>,std::allocator<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>>::_M_erase(
    (int)(uintptr_t)(v1) + 13148,
    *((void **)v1 + 3289));
  v39 = *((void **)v1 + 3280);
  if ( v39 != nullptr )
  {
    v40 = *(uint32_t **)v39;
    if ( *(uint32_t *)v39 != 0 && v40 != *((uint32_t **)v39 + 2) )
    {
      while ( 1 )
      {
        v41 = (uint32_t *)v40[2];
        free(v40);
        *(uint32_t *)v39 = (uint32_t)(uintptr_t)(v41);
        if ( v41 == nullptr || v41 == *((uint32_t **)v39 + 2) )
          break;
        v40 = v41;
      }
    }
    operator delete(*((void **)v39 + 4));
    operator delete(v39);
  }
  v42 = *((uint32_t **)v1 + 3270);
  if ( v42 != nullptr && v42 != *((uint32_t **)v1 + 3272) )
  {
    while ( 1 )
    {
      v43 = (uint32_t *)v42[2];
      free(v42);
      *((uint32_t *)v1 + 3270) = (uint32_t)(uintptr_t)(v43);
      if ( v43 == nullptr || v43 == *((uint32_t **)v1 + 3272) )
        break;
      v42 = v43;
    }
  }
  operator delete(*((void **)v1 + 3274));
  glotv3::Writer::Destroy((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 8732));
  glotv3::Writer::Destroy((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 4384));
  glotv3::Writer::Destroy((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 36));
  g4_std::string::Destroy((char *)v1 + 32);
  g4_std::string::Destroy((char *)v1 + 28);
  g4_std::string::Destroy((char *)v1 + 24);
  g4_std::string::Destroy((char *)v1 + 20);
  g4_std::string::Destroy((char *)v1 + 16);
  g4_std::string::Destroy((char *)v1 + 12);
  g4_std::string::Destroy((char *)v1 + 8);
}


// ============================================================================
// Address:   0x1355750 (size: 785 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor20ParseEventDescriptorERKSs
// Demangled: glotv3::SingletonMutexedProcessor::ParseEventDescriptor(std::string const&)
// ============================================================================
int glotv3::SingletonMutexedProcessor::ParseEventDescriptor(uint32_t *a1, int *a2)
{
  rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v2;
  int Member;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *i;
  int v9;
  int v10;
  int j;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15[3];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[2];
  typedef char _g4_t_v18[4];
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (43u + sizeof(_g4_t_v16)) > _g4_s4 ? (43u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v18)) > _g4_s6 ? (56u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v19)) > _g4_s7 ? (60u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 43u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  v2 = (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 3275);
  v17[0] = *a2;
  v17[1] = v17[0];
  rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseStream<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(
    (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(a1 + 3275),
    (char **)v17);
  if ( a1[3278] == 0
    || rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
         v2,
         "events") == 0 )
  {
    return 0;
  }
  Member = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
             v2,
             "events");
  v5 = (uint32_t *)(Member + 16);
  if ( Member == 0 )
  {
    v5 = (uint32_t *)(&g4_rapidjson_NullValue);
    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
      && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
    {
      v5 = (uint32_t *)(uintptr_t)(sub_134C510());
    }
  }
  if ( a1 + 3293 == v5 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      237,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidjson::G"
      "enericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<"
      ">, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
      "this != & rhs");
  a1[3293] = *v5;
  a1[3294] = v5[1];
  a1[3295] = v5[2];
  a1[3296] = v5[3];
  v5[3] = 0;
  v6 = 3;
  if ( a1[3296] != 3 )
  {
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      408,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::MemberBegin() "
      "[with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding"
      ", Allocator>::MemberIterator = rapidjson::GenericValue<rapidjson::UTF8<> >::Member*]",
      "IsObject ()");
    v6 = a1[3296];
  }
  v7 = a1[3293];
  for ( i = a1; ; v6 = i[3296] )
  {
    if ( v6 != 3 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        415,
        "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::MemberEnd() "
        "[with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encodi"
        "ng, Allocator>::MemberIterator = rapidjson::GenericValue<rapidjson::UTF8<> >::Member*]",
        "IsObject()");
    if ( v7 == i[3293] + 32 * i[3294] )
      break;
    if ( *(uint32_t *)(v7 + 28) == 0 )
      goto LABEL_10;
    if ( (*(uint8_t *)(v7 + 14) & 0x10) == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        775,
        "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, Al"
        "locator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
        "IsString ()");
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v16) + 1, *(char **)v7, (int)(uintptr_t)(&v16));
    v13 = i + 3288;
    v9 = i[3289];
    if ( v9 != 0 )
    {
      v14 = i;
      v12 = (int)(uintptr_t)(i + 3288);
      v10 = v7;
      for ( j = v9; j != 0; j = *(uint32_t *)(j + 12) )
      {
        while ( (int)g4_std_compat::string_compare(j + 16, (char *)&v16 + 1) >= 0 )
        {
          v12 = j;
          j = *(uint32_t *)(j + 8);
          if ( j == 0 )
            goto LABEL_22;
        }
      }
LABEL_22:
      v7 = v10;
      i = v14;
      if ( (uint32_t *)v12 != v13 && (int)g4_std_compat::string_compare((char *)&v16 + 1, v12 + 16) >= 0 )
        goto LABEL_25;
    }
    else
    {
      v12 = (int)(uintptr_t)(i + 3288);
    }
    g4_std_compat::string_construct_copy(v18, (char *)&v16 + 1);
    v19 = 0;
    sub_134E060(v15, i + 3287, v12, (int)(uintptr_t)(v18));
    v12 = v15[0];
    g4_noop_dtor(v18);
LABEL_25:
    *(uint32_t *)(v12 + 20) = v7 + 16;
    g4_noop_dtor((char *)&v16 + 1);
LABEL_10:
    v7 += 32;
  }
  return 1;
}


// ============================================================================
// Address:   0x13565c0 (size: 1197 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor20FinishNetworkWorkersEv
// Demangled: glotv3::SingletonMutexedProcessor::FinishNetworkWorkers(void)
// ============================================================================
glotv3::SingletonMutexedProcessor::Self *glotv3::SingletonMutexedProcessor::FinishNetworkWorkers(
        glotv3::SingletonMutexedProcessor::Self *self,
        int a2)
{
  int v2;
  int v3;
  int v4;
  glotv3::AsyncHTTPClient::Self *v5;
  int Status;
  int v8;
  int v9;
  int v10;
  int owner;
  int i;
  int *v13;
  int v14;
  int v15;
  int v16;
  uint8_t *v17;
  glotv3::AsyncHTTPClient::Self *v18;
  glotv3::AsyncHTTPClient::Self *v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  volatile int32_t *v22;
  volatile int32_t *v23;
  glotv3::AsyncHTTPClient::Self *v24;
  volatile int32_t *v25;
  glotv3::AsyncHTTPClient::Self *v26;
  volatile int32_t *v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef glotv3::TrackingManager::Self *_g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef glotv3::AsyncHTTPClient::Self *_g4_t_v33;
  typedef volatile int32_t *_g4_t_v34;
  typedef glotv3::AsyncHTTPClient::Self *_g4_t_v35;
  typedef volatile int32_t *_g4_t_v36;
  typedef glotv3::AsyncHTTPClient::Self *_g4_t_v37;
  typedef volatile int32_t *_g4_t_v38[2];
  typedef volatile int32_t *_g4_t_v39;
  typedef char _g4_t_v40[20];
  typedef char _g4_t_v41[20];
  typedef char _g4_t_v42[20];
  typedef char _g4_t_v43[20];
  typedef char _g4_t_v44[32];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v30)) > _g4_s2 ? (20u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v31)) > _g4_s3 ? (24u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v32)) > _g4_s4 ? (32u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v33)) > _g4_s5 ? (44u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v34)) > _g4_s6 ? (48u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v35)) > _g4_s7 ? (64u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v36)) > _g4_s8 ? (68u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v37)) > _g4_s9 ? (72u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v38)) > _g4_s10 ? (76u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v39)) > _g4_s11 ? (84u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v40)) > _g4_s12 ? (88u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v41)) > _g4_s13 ? (108u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v42)) > _g4_s14 ? (128u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (148u + sizeof(_g4_t_v43)) > _g4_s15 ? (148u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (168u + sizeof(_g4_t_v44)) > _g4_s16 ? (168u + sizeof(_g4_t_v44)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 128u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 148u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 13340));
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v40,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  v4 = *(uint32_t *)(a2 + 13360);
  v29 = *(uint32_t *)(a2 + 13368);
  v30 = *(uint32_t *)(a2 + 13372);
  while ( *(uint32_t *)(a2 + 13376) != v4 )
  {
    v5 = *(glotv3::AsyncHTTPClient::Self **)v4;
    if ( *(uint32_t *)v4 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Asy"
        "ncHTTPClient, typename boost::detail::sp_member_access<T>::type = glotv3::AsyncHTTPClient::Self*]",
        "px != 0");
      v5 = *(glotv3::AsyncHTTPClient::Self **)v4;
    }
    Status = glotv3::AsyncHTTPClient::GetStatus(v5);
    if ( Status > 11 )
    {
      if ( Status != 16 )
      {
        if ( Status > 16 )
        {
          if ( Status == 200 )
          {
LABEL_44:
            v23 = *(volatile int32_t **)(v4 + 4);
            v24 = *(glotv3::AsyncHTTPClient::Self **)v4;
            v25 = nullptr;
            v33 = *(glotv3::AsyncHTTPClient::Self **)v4;
            v34 = v23;
            if ( v23 != nullptr )
            {
              __sync_add_and_fetch(v23 + 1, 1);
              v24 = v33;
              v25 = v34;
            }
            v26 = *(glotv3::AsyncHTTPClient::Self **)self;
            *(uint32_t *)self = (uint32_t)(uintptr_t)(v24);
            v33 = v26;
            v27 = *((volatile int32_t **)self + 1);
            *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v25);
            v34 = v27;
            boost::detail::shared_count::Destroy(&v34);
          }
LABEL_12:
          if ( *(uint32_t *)self != 0 )
            break;
          goto LABEL_41;
        }
        if ( (unsigned int)(Status - 13) > 1 )
          goto LABEL_12;
      }
    }
    else if ( Status < 9 && Status != 3 )
    {
      if ( Status <= 3 )
      {
        if ( Status == 1 )
          goto LABEL_44;
        goto LABEL_12;
      }
      if ( Status != 5 && Status != 7 )
        goto LABEL_12;
    }
    v35 = *(glotv3::AsyncHTTPClient::Self **)v4;
    v36 = *(volatile int32_t **)(v4 + 4);
    if ( v36 != nullptr )
      __sync_add_and_fetch(v36 + 1, 1);
    v32 = nullptr;
    v31 = *(glotv3::TrackingManager::Self **)(a2 + 13188);
    if ( g4_fnstatic_f10bd83e67 == 0 )
    {
      g4_fnstatic_f10bd83e67 = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
      {
        v8 = pthread_mutex_init(
               &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
               nullptr);
        if ( v8 != 0 )
        {
          boost::thread_resource_error::Construct(
            (boost::thread_resource_error *)v41,
            v8,
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
      v9 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
    while ( v9 == 4 );
    if ( v9 != 0 )
    {
      boost::lock_error::Construct(
        v10,
        (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
        (boost::lock_error::Self *)v42,
        v9,
        "boost: mutex lock failed in pthread_mutex_lock");
      std::terminate();
    }
    owner = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
    for ( i = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
          owner != 0;
          owner = *(v13 - 1) )
    {
      v13 = (int *)(owner + i - 4);
      i = *v13;
    }
    sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
    if ( g4_fnstatic_f10bd83e67 == 0 )
    {
      g4_fnstatic_f10bd83e67 = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
      {
        v14 = pthread_mutex_init(
                &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
                nullptr);
        if ( v14 != 0 )
        {
          boost::thread_resource_error::Construct(
            (boost::thread_resource_error *)v43,
            v14,
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
      v15 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
    while ( v15 == 4 );
    if ( v15 != 0 )
    {
      boost::lock_error::Construct(
        v16,
        (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
        (boost::lock_error::Self *)v44,
        v15,
        "boost: mutex lock failed in pthread_mutex_lock");
      std::terminate();
    }
    v28 = (volatile int32_t *)(uintptr_t)(sub_1356300(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count));
    sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
    if ( v28 == nullptr )
      std::terminate();
    v32 = v28;
    *((uint32_t *)v28 + 1) = 1;
    *((uint32_t *)v28 + 2) = 1;
    *v28 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093CA8);
    *((uint32_t *)v28 + 3) = 0;
    *((uint8_t *)v28 + 16) = 0;
    v17 = nullptr;
    if ( v32 != nullptr )
      v17 = (uint8_t *)(*(int (**)(volatile int32_t *))(*v32 + 20))(v32);
    v18 = (glotv3::AsyncHTTPClient::Self *)(v17 + 4);
    if ( v17 != (uint8_t *)-4 )
    {
      glotv3::AsyncHTTPClient::Construct((glotv3::AsyncHTTPClient::Self *)(v17 + 4), v31);
      v18 = (glotv3::AsyncHTTPClient::Self *)(v17 + 4);
    }
    *v17 = 1;
    v37 = v18;
    v38[0] = v32;
    if ( v32 != nullptr )
      __sync_add_and_fetch(v32 + 1, 1);
    boost::detail::shared_count::Destroy(&v32);
    v19 = *(glotv3::AsyncHTTPClient::Self **)v4;
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v37);
    v20 = *(volatile int32_t **)(v4 + 4);
    v37 = v19;
    v21 = v38[0];
    v38[0] = v20;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v21);
    v22 = (volatile int32_t *)v35;
    v35 = nullptr;
    v38[1] = v22;
    v39 = v36;
    v36 = nullptr;
    boost::detail::shared_count::Destroy(&v39);
    boost::detail::shared_count::Destroy(v38);
    boost::detail::shared_count::Destroy(&v36);
    if ( *(uint32_t *)self != 0 )
      break;
LABEL_41:
    v4 += 8;
    if ( v4 == v29 )
    {
      v4 = *(uint32_t *)(v30 + 4);
      v30 += 4;
      v29 = v4 + 512;
    }
  }
  sub_1321760((pthread_mutex_t *)(a2 + 13340));
  return (glotv3::SingletonMutexedProcessor::Self *)((::SingletonMutexedProcessor *)(self));
}


// ============================================================================
// Address:   0x1356a70 (size: 1592 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor25TryToAcquireNetworkWorkerEv
// Demangled: glotv3::SingletonMutexedProcessor::TryToAcquireNetworkWorker(void)
// ============================================================================
glotv3::SingletonMutexedProcessor::Self *glotv3::SingletonMutexedProcessor::TryToAcquireNetworkWorker(
        glotv3::SingletonMutexedProcessor::Self *self,
        pthread_mutex_t *a2)
{
  glotv3::SingletonMutexedProcessor::Self *v2;
  pthread_mutex_t *v3;
  char v4;
  uint8_t *v5;
  volatile int32_t *v6;
  uint8_t *v7;
  volatile int32_t *v8;
  uint8_t *v9;
  pthread_mutex_t *v10;
  int v11;
  int v12;
  int v13;
  pthread_mutex_t *v14;
  int v15;
  int v16;
  int owner;
  int i;
  int *v19;
  int v20;
  int v21;
  int v22;
  volatile int32_t *v23;
  uint8_t *v24;
  uint8_t *v25;
  uint8_t *v26;
  volatile int32_t *v27;
  uint8_t *v28;
  volatile int32_t *v29;
  uint8_t *v31;
  volatile int32_t *v32;
  uint8_t *v33;
  volatile int32_t *v34;
  typedef volatile int32_t *_g4_t_v35;
  typedef uint8_t *_g4_t_v36;
  typedef uint8_t *_g4_t_v37;
  typedef glotv3::TrackingManager::Self *_g4_t_kind;
  typedef pthread_mutex_t *_g4_t_v39;
  typedef pthread_mutex_t *_g4_t_v40;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef uint8_t *_g4_t_v42;
  typedef volatile int32_t *_g4_t_v43;
  typedef uint8_t *_g4_t_v44;
  typedef volatile int32_t *_g4_t_v45[4];
  typedef volatile int32_t *_g4_t_v46;
  typedef uint8_t *_g4_t_v47;
  typedef volatile int32_t *_g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  typedef volatile int32_t *_g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  typedef volatile int32_t *_g4_t_v52;
  typedef uint8_t *_g4_t_v53;
  typedef volatile int32_t *_g4_t_v54;
  typedef char _g4_t_v55[20];
  typedef char _g4_t_v56[20];
  typedef char _g4_t_v57[20];
  typedef char _g4_t_v58[20];
  typedef uint32_t _g4_t_v59[11];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v36)) > _g4_s1 ? (0u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v37)) > _g4_s2 ? (4u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_kind)) > _g4_s3 ? (8u + sizeof(_g4_t_kind)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v39)) > _g4_s4 ? (12u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v40)) > _g4_s5 ? (16u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_mutex)) > _g4_s6 ? (20u + sizeof(_g4_t_mutex)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v42)) > _g4_s7 ? (24u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v43)) > _g4_s8 ? (28u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v44)) > _g4_s9 ? (40u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v46)) > _g4_s11 ? (60u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v47)) > _g4_s12 ? (72u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v48)) > _g4_s13 ? (76u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v49)) > _g4_s14 ? (88u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v50)) > _g4_s15 ? (92u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v51)) > _g4_s16 ? (100u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v52)) > _g4_s17 ? (104u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v53)) > _g4_s18 ? (108u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v54)) > _g4_s19 ? (112u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v55)) > _g4_s20 ? (116u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v56)) > _g4_s21 ? (136u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v57)) > _g4_s22 ? (156u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v58)) > _g4_s23 ? (176u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (196u + sizeof(_g4_t_v59)) > _g4_s24 ? (196u + sizeof(_g4_t_v59)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_kind &kind = *reinterpret_cast<_g4_t_kind *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 136u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 156u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 176u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 196u);

  v59[7] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  *(uint32_t *)self = 0;
  *((uint32_t *)v2 + 1) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      glotv3::SingletonMutexedProcessor::FinishNetworkWorkers((glotv3::SingletonMutexedProcessor::Self *)&v51, (int)(uintptr_t)(v3));
      v5 = v51;
      v6 = nullptr;
      v44 = v51;
      v45[0] = v52;
      if ( v52 != nullptr )
      {
        __sync_add_and_fetch(v52 + 1, 1);
        v5 = v44;
        v6 = v45[0];
      }
      v7 = *(uint8_t **)v2;
      *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v5);
      v44 = v7;
      v8 = *((volatile int32_t **)v2 + 1);
      *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v6);
      v45[0] = v8;
      boost::detail::shared_count::Destroy(v45);
      boost::detail::shared_count::Destroy(&v52);
      v9 = *(uint8_t **)v2;
      if ( *(uint32_t *)v2 == 0 )
      {
        if ( (unsigned int)(((G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557)))) - G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557))))) >> 3)
                          + ((((signed int)(G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557)))) - G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557))))) >> 2) - 1) << 6)
                          + ((signed int)(G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557)))) - G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (556))))) >> 3)) >= 0x10 )
        {
          glotv3::SingletonMutexedProcessor::FinishNetworkWorkers((glotv3::SingletonMutexedProcessor::Self *)&v53, (int)(uintptr_t)(v3));
          v31 = v53;
          v32 = nullptr;
          v49 = v53;
          v50 = v54;
          if ( v54 != nullptr )
          {
            __sync_add_and_fetch(v54 + 1, 1);
            v31 = v49;
            v32 = v50;
          }
          v33 = *(uint8_t **)v2;
          *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v31);
          v49 = v33;
          v34 = *((volatile int32_t **)v2 + 1);
          *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v32);
          v50 = v34;
          boost::detail::shared_count::Destroy(&v50);
          boost::detail::shared_count::Destroy(&v54);
          v9 = *(uint8_t **)v2;
        }
        else
        {
          mutex = v3;
          v39 = (pthread_mutex_t *)((char *)v3 + 13340);
          v10 = (pthread_mutex_t *)((char *)v3 + 13340);
          do
            v11 = pthread_mutex_lock(v10);
          while ( v11 == 4 );
          if ( v11 != 0 )
          {
            boost::lock_error::Construct(
              v12,
              (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
              (boost::lock_error::Self *)v55,
              v11,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          kind = (glotv3::TrackingManager::Self *)((g4_glibc_pthread_mutex_t *)(mutex))[549].__kind;
          v45[3] = nullptr;
          v46 = nullptr;
          if ( g4_fnstatic_f10bd83e67 != 0 )
          {
            v40 = mutex;
            v14 = (pthread_mutex_t *)(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
          }
          else
          {
            g4_fnstatic_f10bd83e67 = 1;
            if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
            {
              v13 = pthread_mutex_init(
                      &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
                      nullptr);
              if ( v13 != 0 )
              {
                boost::thread_resource_error::Construct(
                  (boost::thread_resource_error *)v56,
                  v13,
                  "boost:: mutex constructor failed in pthread_mutex_init");
                std::terminate();
              }
              v40 = mutex;
              v14 = (pthread_mutex_t *)(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
              boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
              boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
              boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
              boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 224;
              boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
              *(uintptr_t *)(unk_2118578) = (uintptr_t)(16);
              *(uintptr_t *)(unk_211857C) = (uintptr_t)(0);
            }
            else
            {
              v40 = mutex;
              v14 = nullptr;
            }
          }
          do
            v15 = pthread_mutex_lock(v14);
          while ( v15 == 4 );
          if ( v15 != 0 )
          {
            boost::lock_error::Construct(
              v16,
              (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
              (boost::lock_error::Self *)v57,
              v15,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          owner = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
          for ( i = boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
                owner != 0;
                owner = *(v19 - 1) )
          {
            v19 = (int *)(owner + i - 4);
            i = *v19;
          }
          sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
          if ( g4_fnstatic_f10bd83e67 == 0 )
          {
            g4_fnstatic_f10bd83e67 = 1;
            if ( &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
            {
              v20 = pthread_mutex_init(
                      &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
                      nullptr);
              if ( v20 != 0 )
              {
                boost::thread_resource_error::Construct(
                  (boost::thread_resource_error *)v58,
                  v20,
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
            v21 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
          while ( v21 == 4 );
          v3 = v40;
          if ( v21 != 0 )
          {
            boost::lock_error::Construct(
              v22,
              (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
              (boost::lock_error::Self *)v59,
              v21,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          v35 = (volatile int32_t *)(uintptr_t)(sub_1356300(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count));
          sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
          if ( v35 == nullptr )
            std::terminate();
          v46 = v35;
          *((uint32_t *)v35 + 1) = 1;
          *v35 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093CA8);
          v23 = v46;
          *((uint32_t *)v35 + 2) = 1;
          *((uint32_t *)v35 + 3) = 0;
          *((uint8_t *)v35 + 16) = 0;
          v24 = nullptr;
          if ( v23 != nullptr )
            v24 = (uint8_t *)(*(int (**)(volatile int32_t *))(*v23 + 20))(v23);
          v25 = v24 + 4;
          if ( v24 != (uint8_t *)-4 )
          {
            v36 = v24;
            v37 = v24 + 4;
            glotv3::AsyncHTTPClient::Construct((glotv3::AsyncHTTPClient::Self *)(v24 + 4), kind);
            v25 = v37;
            v24 = v36;
          }
          *v24 = 1;
          v42 = v25;
          v43 = v46;
          if ( v46 != nullptr )
            __sync_add_and_fetch(v46 + 1, 1);
          boost::detail::shared_count::Destroy(&v46);
          v26 = v42;
          v27 = nullptr;
          v47 = v42;
          v48 = v43;
          if ( v43 != nullptr )
          {
            __sync_add_and_fetch(v43 + 1, 1);
            v26 = v47;
            v27 = v48;
          }
          v28 = *(uint8_t **)v2;
          *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v26);
          v47 = v28;
          v29 = *((volatile int32_t **)v2 + 1);
          *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v27);
          v48 = v29;
          boost::detail::shared_count::Destroy(&v48);
          boost::detail::shared_count::Destroy(&v43);
          g4_std_compat::deque_push_back((void **)&((g4_glibc_pthread_mutex_t *)(v40))[556].__owner, v2);
          sub_1321760(v39);
          v9 = *(uint8_t **)v2;
        }
      }
      if ( (unsigned int)(((G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557)))) - G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557))))) >> 3)
                        + ((((signed int)(G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557)))) - G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557))))) >> 2) - 1) << 6)
                        + ((signed int)(G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (557)))) - G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (556))))) >> 3)) < 0x10 )
        goto LABEL_5;
      v4 = *(uint8_t *)(G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (549)))) + 194);
      if ( v9 != nullptr )
        break;
      if ( v4 == 0 )
      {
        glotv3::Glotv3Logger::WriteLog(&glotv3::errors::OVERWHELMED_NETWORK_DISABLED_TIMERS);
        *(uint8_t *)(G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (549)))) + 194) = 1;
        return v2;
      }
    }
    if ( v4 != 0 )
      break;
LABEL_5:
    if ( v9 != nullptr )
      return v2;
  }
  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::OVERWHELMED_NETWORK_ENABLING_TIMERS);
  *(uint8_t *)(G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (549)))) + 194) = 0;
  return v2;
}


// ============================================================================
// Address:   0x1357370 (size: 500 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor16PurgeBufferQueueEv
// Demangled: glotv3::SingletonMutexedProcessor::PurgeBufferQueue(void)
// ============================================================================
void glotv3::SingletonMutexedProcessor::PurgeBufferQueue(glotv3::SingletonMutexedProcessor::Self *self)
{
  int v1;
  int v2;
  int v3;
  uint8_t *v4;
  glotv3::Event::Self *v5;
  typedef volatile int32_t *_g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  typedef glotv3::Event::Self *_g4_t_v8;
  typedef volatile int32_t *_g4_t_v9;
  typedef glotv3::Event::Self *_g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[32];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v10)) > _g4_s4 ? (44u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v11)) > _g4_s5 ? (48u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v12)) > _g4_s6 ? (52u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v13)) > _g4_s7 ? (72u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);

  if ( *((uint8_t *)self + 13333) != 0 )
  {
    v7 = nullptr;
    sub_134E810();
    if ( g4_fnstatic_e8cfd5640c == 0 )
    {
      g4_fnstatic_e8cfd5640c = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
      {
        v1 = pthread_mutex_init(
               &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
               nullptr);
        if ( v1 != 0 )
        {
          boost::thread_resource_error::Construct(
            (boost::thread_resource_error *)v12,
            v1,
            "boost:: mutex constructor failed in pthread_mutex_init");
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
      v2 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    while ( v2 == 4 );
    if ( v2 != 0 )
    {
      boost::lock_error::Construct(
        v3,
        (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
        (boost::lock_error::Self *)v13,
        v2,
        "boost: mutex lock failed in pthread_mutex_lock");
      std::terminate();
    }
    v6 = (volatile int32_t *)(uintptr_t)(sub_13570B0(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
    sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    if ( v6 == nullptr )
      std::terminate();
    v7 = v6;
    *((uint32_t *)v6 + 1) = 1;
    *((uint32_t *)v6 + 2) = 1;
    *v6 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093D88);
    *((uint32_t *)v6 + 3) = 0;
    *((uint8_t *)v6 + 16) = 0;
    v4 = nullptr;
    if ( v7 != nullptr )
      v4 = (uint8_t *)(*(int (**)(volatile int32_t *))(*v7 + 20))(v7);
    v5 = (glotv3::Event::Self *)(v4 + 4);
    if ( v4 != (uint8_t *)-4 )
    {
      glotv3::EventOfDataBuffered::Construct((glotv3::EventOfDataBuffered::Self *)(v4 + 4));
      v5 = (glotv3::Event::Self *)(v4 + 4);
    }
    *v4 = 1;
    v10 = v5;
    v11 = v7;
    if ( v7 != nullptr )
      __sync_add_and_fetch(v7 + 1, 1);
    boost::detail::shared_count::Destroy(&v7);
    v8 = v10;
    v9 = v11;
    if ( v11 != nullptr )
      __sync_add_and_fetch(v11 + 1, 1);
    glotv3::TrackingManager::AddEvent(*((uint32_t *)self + 3297), &v8, 0);
    boost::detail::shared_count::Destroy(&v9);
    boost::detail::shared_count::Destroy(&v11);
  }
}


// ============================================================================
// Address:   0x1357570 (size: 2221 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor13WriteToStreamEN5boost10shared_ptrINS_5EventEEEb
// Demangled: glotv3::SingletonMutexedProcessor::WriteToStream(boost::shared_ptr<glotv3::Event>,bool)
// ============================================================================
void glotv3::SingletonMutexedProcessor::WriteToStream(int a1, int *a2, char a3)
{
  int *v3;
  int v4;
  int v5;
  glotv3::Event::Self *v6;
  int Priority;
  glotv3::Event::Self *v8;
  glotv3::Event::Self *v9;
  uint32_t *v10;
  glotv3::Event::Self *v11;
  unsigned int v12;
  uint8_t *v13;
  int v14;
  uint32_t *v15;
  glotv3::Event::Self *v16;
  unsigned int EventType;
  glotv3::Event::Self *v18;
  glotv3::Event::Self *v19;
  uint32_t *v20;
  glotv3::Event::Self *v21;
  unsigned int v22;
  glotv3::Event::Self *v23;
  int v24;
  int savedregs;
  typedef glotv3::Writer::Self *_g4_t_v25;
  typedef glotv3::Writer::Self *_g4_t_v26;
  typedef glotv3::Writer::Self *_g4_t_v27;
  typedef glotv3::Writer::Self *_g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[4];
  typedef uint8_t _g4_t_v36[4];
  typedef uint8_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[4];
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[4];
  typedef uint8_t _g4_t_v42[4];
  typedef uint8_t _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[4];
  typedef uint8_t _g4_t_v48[4];
  typedef uint8_t _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef uint8_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef volatile int32_t *_g4_t_v53;
  typedef glotv3::Event::Self *_g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef glotv3::Event::Self *_g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
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
  typedef int _g4_t_v70;
  typedef volatile int32_t *_g4_t_v71;
  typedef glotv3::Event::Self *_g4_t_v72;
  typedef volatile int32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef volatile int32_t *_g4_t_v75[7];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v27)) > _g4_s2 ? (0u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v28)) > _g4_s3 ? (0u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v29)) > _g4_s4 ? (4u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v30)) > _g4_s5 ? (4u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v31)) > _g4_s6 ? (4u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v32)) > _g4_s7 ? (4u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (11u + sizeof(_g4_t_v33)) > _g4_s8 ? (11u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v34)) > _g4_s9 ? (20u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v35)) > _g4_s10 ? (24u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v36)) > _g4_s11 ? (28u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v37)) > _g4_s12 ? (32u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v38)) > _g4_s13 ? (36u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v39)) > _g4_s14 ? (40u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v40)) > _g4_s15 ? (44u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v41)) > _g4_s16 ? (48u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v42)) > _g4_s17 ? (52u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v43)) > _g4_s18 ? (56u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v44)) > _g4_s19 ? (60u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v45)) > _g4_s20 ? (64u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v46)) > _g4_s21 ? (68u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v47)) > _g4_s22 ? (72u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v48)) > _g4_s23 ? (76u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v49)) > _g4_s24 ? (80u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v50)) > _g4_s25 ? (84u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v51)) > _g4_s26 ? (88u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v52)) > _g4_s27 ? (92u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v53)) > _g4_s28 ? (96u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v54)) > _g4_s29 ? (108u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v55)) > _g4_s30 ? (112u + sizeof(_g4_t_v55)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v56)) > _g4_s31 ? (124u + sizeof(_g4_t_v56)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v57)) > _g4_s32 ? (128u + sizeof(_g4_t_v57)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v58)) > _g4_s33 ? (140u + sizeof(_g4_t_v58)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v59)) > _g4_s34 ? (144u + sizeof(_g4_t_v59)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v60)) > _g4_s35 ? (156u + sizeof(_g4_t_v60)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v61)) > _g4_s36 ? (160u + sizeof(_g4_t_v61)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v62)) > _g4_s37 ? (172u + sizeof(_g4_t_v62)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v63)) > _g4_s38 ? (176u + sizeof(_g4_t_v63)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v64)) > _g4_s39 ? (188u + sizeof(_g4_t_v64)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v65)) > _g4_s40 ? (192u + sizeof(_g4_t_v65)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v66)) > _g4_s41 ? (196u + sizeof(_g4_t_v66)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v67)) > _g4_s42 ? (200u + sizeof(_g4_t_v67)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v68)) > _g4_s43 ? (204u + sizeof(_g4_t_v68)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v69)) > _g4_s44 ? (208u + sizeof(_g4_t_v69)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v70)) > _g4_s45 ? (212u + sizeof(_g4_t_v70)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v71)) > _g4_s46 ? (216u + sizeof(_g4_t_v71)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v72)) > _g4_s47 ? (220u + sizeof(_g4_t_v72)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v73)) > _g4_s48 ? (224u + sizeof(_g4_t_v73)) : _g4_s48,
    _g4_s50 = (228u + sizeof(_g4_t_v74)) > _g4_s49 ? (228u + sizeof(_g4_t_v74)) : _g4_s49,
    _g4_s51 = (232u + sizeof(_g4_t_v75)) > _g4_s50 ? (232u + sizeof(_g4_t_v75)) : _g4_s50
  };
  alignas(16) uint8_t _g4_sf[_g4_s51];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 11u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 84u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 112u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 140u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 144u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 156u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 160u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 172u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 176u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 188u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 192u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 196u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 200u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 204u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 208u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 212u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 216u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 220u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 224u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 228u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 232u);

  v75[3] = &a1;
  v3 = a2;
  v4 = a1;
  v33 = a3;
  v5 = sub_134C470((int)(uintptr_t)(a2));
  if ( glotv3::Event::hasKeyPair(v5, &glotv3::Event::keyPromotedBatch) )
  {
    v14 = sub_134C470((int)(uintptr_t)(v3));
    glotv3::Event::setPriority(v14, 1);
  }
  v6 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
  Priority = glotv3::Event::getPriority(v6);
  if ( Priority == 1 )
  {
    v56 = *v3;
    v57 = (volatile int32_t *)v3[1];
    if ( v57 != nullptr )
      __sync_add_and_fetch(v57 + 1, 1);
    v27 = (glotv3::Writer::Self *)(v4 + 4384);
    v31 = glotv3::Writer::WriteNext((pthread_mutex_t *)(v4 + 4384), (glotv3::Event::Self **)(&v56));
    boost::detail::shared_count::Destroy(&v57);
    if ( v31 != 0 )
    {
      v58 = (glotv3::Event::Self *)*v3;
      v59 = (volatile int32_t *)v3[1];
      if ( v59 != nullptr )
        __sync_add_and_fetch(v59 + 1, 1);
      glotv3::SingletonMutexedProcessor::WriteToLibSpy((int)(uintptr_t)(&savedregs), (int)(uintptr_t)(v3), v4, v4, &v58);
      boost::detail::shared_count::Destroy(&v59);
      v15 = (uint32_t *)sub_134C470((int)(uintptr_t)(v3));
      v30 = v43;
      glotv3::Event::getUUID((glotv3::Event::Self *)v43, v15);
      v16 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
      EventType = glotv3::Event::getEventType(v16);
      v26 = (glotv3::Writer::Self *)&v40;
      glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v40), (unsigned int)(uintptr_t)(EventType));
      g4_std_compat::string_construct_copy(v41, &glotv3::errors::STREAMED_UUID_PUSHING);
      g4_std::string::append_str(v41, &v40);
      g4_std_compat::string_construct_copy(v42, v41);
      g4_std::string::append_str(v42, &glotv3::system::HASHTAG);
      g4_std_compat::string_construct_copy(&v44, v42);
      g4_std::string::append_str(&v44, v43);
      glotv3::Glotv3Logger::WriteLog(&v44);
      g4_std::string::Destroy(&v44);
      g4_std::string::Destroy(v42);
      v13 = v41;
      goto LABEL_23;
    }
    glotv3::Writer::Finish(v27);
    glotv3::Fs::RemovePath((const char **)(v4 + 16));
    glotv3::Writer::Open(v27, v4 + 16);
    g4_std_compat::string_construct_copy(v45, &glotv3::errors::STREAMED_FILE_CANNOT_BE_WRITTEN);
    glotv3::EventOfError::s_OfType(&v68, (char *)&dword_0 + 1, (int)(uintptr_t)(v45));
    v70 = (int)(uintptr_t)(v68);
    v71 = v69;
    if ( v69 != nullptr )
      __sync_add_and_fetch(v69 + 1, 1);
    glotv3::SingletonMutexedProcessor::QueueForWriting((glotv3::SingletonMutexedProcessor::Self *)v4, (int)(uintptr_t)(&v70), 0, 1);
    boost::detail::shared_count::Destroy(&v71);
    boost::detail::shared_count::Destroy(&v69);
    g4_std::string::Destroy(v45);
  }
  else if ( Priority <= 1 )
  {
    if ( Priority != 0 )
      goto LABEL_6;
    v52 = *v3;
    v53 = (volatile int32_t *)v3[1];
    if ( v53 != nullptr )
      __sync_add_and_fetch(v53 + 1, 1);
    v28 = (glotv3::Writer::Self *)(v4 + 36);
    v32 = glotv3::Writer::WriteNext((pthread_mutex_t *)(v4 + 36), (glotv3::Event::Self **)(&v52));
    boost::detail::shared_count::Destroy(&v53);
    if ( v32 != 0 )
    {
      v54 = (glotv3::Event::Self *)*v3;
      v55 = (volatile int32_t *)v3[1];
      if ( v55 != nullptr )
        __sync_add_and_fetch(v55 + 1, 1);
      glotv3::SingletonMutexedProcessor::WriteToLibSpy((int)(uintptr_t)(&savedregs), (int)(uintptr_t)(v3), v4, v4, &v54);
      boost::detail::shared_count::Destroy(&v55);
      v20 = (uint32_t *)sub_134C470((int)(uintptr_t)(v3));
      v30 = v37;
      glotv3::Event::getUUID((glotv3::Event::Self *)v37, v20);
      v21 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
      v22 = glotv3::Event::getEventType(v21);
      v26 = (glotv3::Writer::Self *)&v34;
      glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v34), (unsigned int)(uintptr_t)(v22));
      g4_std_compat::string_construct_copy(v35, &glotv3::errors::PRIORITY_UUID_PUSHING);
      g4_std::string::append_str(v35, &v34);
      g4_std_compat::string_construct_copy(v36, v35);
      g4_std::string::append_str(v36, &glotv3::system::HASHTAG);
      g4_std_compat::string_construct_copy(&v38, v36);
      g4_std::string::append_str(&v38, v37);
      glotv3::Glotv3Logger::WriteLog(&v38);
      g4_std::string::Destroy(&v38);
      g4_std::string::Destroy(v36);
      v13 = v35;
      goto LABEL_23;
    }
    glotv3::Writer::Finish(v28);
    glotv3::Fs::RemovePath((const char **)(v4 + 12));
    glotv3::Writer::Open(v28, v4 + 12);
    v23 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
    if ( glotv3::Event::getEventType(v23) != 51885
      || (v24 = sub_134C470((int)(uintptr_t)(v3)),
          glotv3::Event::getKeyPairAsUInt(v24, &glotv3::EventOfError::k_KeyErrorTrackerId) != 0) )
    {
      g4_std_compat::string_construct_copy(v39, &glotv3::errors::PRIORITY_FILE_CANNOT_BE_WRITTEN);
      glotv3::EventOfError::s_OfType(&v64, nullptr, (int)(uintptr_t)(v39));
      v66 = (int)(uintptr_t)(v64);
      v67 = v65;
      if ( v65 != nullptr )
        __sync_add_and_fetch(v65 + 1, 1);
      glotv3::SingletonMutexedProcessor::QueueForWriting((glotv3::SingletonMutexedProcessor::Self *)v4, (int)(uintptr_t)(&v66), 0, 1);
      boost::detail::shared_count::Destroy(&v67);
      boost::detail::shared_count::Destroy(&v65);
      g4_std::string::Destroy(v39);
    }
    else
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::EVENTS_CANNOT_BE_STORED_DEVICE_ISSUES);
    }
  }
  else
  {
    if ( Priority > 3 )
      goto LABEL_6;
    v8 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
    if ( !glotv3::Event::hasCount(v8) )
    {
      v19 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
      glotv3::Event::setCount(v19, (char *)&dword_0 + 1);
    }
    v9 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
    if ( !glotv3::Event::hasSmartCount(v9) )
    {
      v18 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
      glotv3::Event::setSmartCount(v18, (char *)&dword_0 + 1);
    }
    v60 = *v3;
    v61 = (volatile int32_t *)v3[1];
    if ( v61 != nullptr )
      __sync_add_and_fetch(v61 + 1, 1);
    v25 = (glotv3::Writer::Self *)(v4 + 8732);
    v29 = glotv3::Writer::WriteNext((pthread_mutex_t *)(v4 + 8732), (glotv3::Event::Self **)(&v60));
    boost::detail::shared_count::Destroy(&v61);
    if ( v29 != 0 )
    {
      v62 = (glotv3::Event::Self *)*v3;
      v63 = (volatile int32_t *)v3[1];
      if ( v63 != nullptr )
        __sync_add_and_fetch(v63 + 1, 1);
      glotv3::SingletonMutexedProcessor::WriteToLibSpy((int)(uintptr_t)(&savedregs), (int)(uintptr_t)(v3), v4, v4, &v62);
      boost::detail::shared_count::Destroy(&v63);
      v10 = (uint32_t *)sub_134C470((int)(uintptr_t)(v3));
      v30 = v49;
      glotv3::Event::getUUID((glotv3::Event::Self *)v49, v10);
      v11 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v3));
      v12 = glotv3::Event::getEventType(v11);
      v26 = (glotv3::Writer::Self *)&v46;
      glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v46), (unsigned int)(uintptr_t)(v12));
      g4_std_compat::string_construct_copy(v47, &glotv3::errors::BATCHING_UUID_PUSHING);
      g4_std::string::append_str(v47, &v46);
      g4_std_compat::string_construct_copy(v48, v47);
      g4_std::string::append_str(v48, &glotv3::system::HASHTAG);
      g4_std_compat::string_construct_copy(&v50, v48);
      g4_std::string::append_str(&v50, v49);
      glotv3::Glotv3Logger::WriteLog(&v50);
      g4_std::string::Destroy(&v50);
      g4_std::string::Destroy(v48);
      v13 = v47;
LABEL_23:
      g4_std::string::Destroy(v13);
      g4_std::string::Destroy(v26);
      g4_std::string::Destroy(v30);
      if ( v33 == 0 )
        g4_std_compat::deque_pop_back((std::deque<boost::shared_ptr<glotv3::Event::Self>> *)(v4 + 13252));
      goto LABEL_6;
    }
    glotv3::Writer::Finish(v25);
    glotv3::Fs::RemovePath((const char **)(v4 + 20));
    glotv3::Writer::Open(v25, v4 + 20);
    g4_std_compat::string_construct_copy(v51, &glotv3::errors::BATCHING_FILE_CANNOT_BE_WRITTEN);
    glotv3::EventOfError::s_OfType(&v72, (char *)&dword_0 + 2, (int)(uintptr_t)(v51));
    v74 = (int)(uintptr_t)(v72);
    v75[0] = v73;
    if ( v73 != nullptr )
      __sync_add_and_fetch(v73 + 1, 1);
    glotv3::SingletonMutexedProcessor::QueueForWriting((glotv3::SingletonMutexedProcessor::Self *)v4, (int)(uintptr_t)(&v74), 0, 1);
    boost::detail::shared_count::Destroy(v75);
    boost::detail::shared_count::Destroy(&v73);
    g4_std::string::Destroy(v51);
  }
LABEL_6:
  glotv3::SingletonMutexedProcessor::PurgeBufferQueue((glotv3::SingletonMutexedProcessor::Self *)v4);
}


// ============================================================================
// Address:   0x1357e20 (size: 468 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor15QueueForWritingEN5boost10shared_ptrINS_5EventEEEbb
// Demangled: glotv3::SingletonMutexedProcessor::QueueForWriting(boost::shared_ptr<glotv3::Event>,bool,bool)
// ============================================================================
int glotv3::SingletonMutexedProcessor::QueueForWriting(
        glotv3::SingletonMutexedProcessor::Self *a1,
        int *a2,
        char a3,
        char a4)
{
  int v4;
  glotv3::Event::Self *v6;
  char hasType;
  glotv3::Event::Self *v8;
  char IsPriority;
  int v10;
  glotv3::Event::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_EventType;
  typedef int _g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_EventType)) > _g4_s0 ? (4u + sizeof(_g4_t_EventType)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_EventType &EventType = *reinterpret_cast<_g4_t_EventType *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v4 = 0;
  if ( *a2 != 0 && *((uint8_t *)a1 + 13416) != 0 )
  {
    v6 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(a2));
    hasType = glotv3::Event::hasType(v6);
    v4 = 0;
    if ( hasType != 0 )
    {
      v8 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(a2));
      EventType = glotv3::Event::getEventType(v8);
      IsPriority = glotv3::SingletonMutexedProcessor::IsPriority(a1, EventType);
      v10 = EventType;
      if ( IsPriority != 0 )
      {
        v13 = sub_134C470((int)(uintptr_t)(a2));
        glotv3::Event::setPriority(v13, 0);
        v10 = EventType;
      }
      if ( (uint8_t)glotv3::SingletonMutexedProcessor::IsBatched(a1, v10) != 0 )
      {
        v16 = sub_134C470((int)(uintptr_t)(a2));
        glotv3::Event::setPriority(v16, 2);
      }
      v11 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(a2));
      if ( (uint8_t)glotv3::Event::isAutomatic(v11) != 0 )
      {
        v15 = sub_134C470((int)(uintptr_t)(a2));
        glotv3::Event::setPriority(v15, 0);
      }
      v12 = sub_134C470((int)(uintptr_t)(a2));
      if ( glotv3::Event::hasKeyPair(v12, &glotv3::Event::keyPromotedBatch) )
      {
        v14 = sub_134C470((int)(uintptr_t)(a2));
        glotv3::Event::setPriority(v14, 1);
      }
      if ( a4 != 0 )
      {
        v18 = *a2;
        v19 = (volatile int32_t *)a2[1];
        if ( v19 != nullptr )
          __sync_add_and_fetch(v19 + 1, 1);
        glotv3::SingletonMutexedProcessor::WriteToStream((int)(uintptr_t)(a1), &v18, 1);
        boost::detail::shared_count::Destroy(&v19);
        return 1;
      }
      else
      {
        return sub_1354840((int)(uintptr_t)(a1), a2, a3);
      }
    }
  }
  return v4;
}


// ============================================================================
// Address:   0x13581a0 (size: 573 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor21PushbackFromLeftoversEN5boost10shared_ptrINS_9EventListEEE
// Demangled: glotv3::SingletonMutexedProcessor::PushbackFromLeftovers(boost::shared_ptr<glotv3::EventList>)
// ============================================================================
int glotv3::SingletonMutexedProcessor::PushbackFromLeftovers(
        glotv3::SingletonMutexedProcessor::Self *a1,
        glotv3::EventList::Self **a2)
{
  glotv3::EventList::Self *v2;
  uint32_t *Events;
  glotv3::EventList::Self *v4;
  unsigned int v6;
  uint32_t *v7;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v8;
  glotv3::Event::Self *v9;
  uint32_t *v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v2 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      "List, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
      "px != 0");
    v2 = *a2;
  }
  Events = (uint32_t *)glotv3::EventList::getEvents(v2);
  if ( Events[3] == 4 && (v12 = Events[1]) != 0 )
  {
    v6 = 0;
    v11 = Events;
    do
    {
      sub_1358000(&v15);
      v7 = v11;
      if ( v11[3] != 4 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          579,
          "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rapidjs"
          "on::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Gen"
          "ericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
          "IsArray ()");
        v7 = v11;
      }
      if ( v7[1] <= v6 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          580,
          "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rapidjs"
          "on::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Gen"
          "ericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
          "index < data_.a.size");
        v7 = v11;
      }
      v8 = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*v7 + 16 * v6);
      v9 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(&v15));
      glotv3::Event::setRoot(v9, v8);
      v10 = (uint32_t *)sub_134C470((int)(uintptr_t)(&v15));
      glotv3::Event::getUUID((glotv3::Event::Self *)v13, v10);
      g4_std_compat::string_construct_copy(&v14, &glotv3::errors::PUSHING_BACK_FROM_LEFTOVER);
      g4_std::string::append_str(&v14, v13);
      glotv3::Glotv3Logger::WriteLog(&v14);
      g4_std::string::Destroy(&v14);
      g4_std::string::Destroy(v13);
      v17 = v15;
      v18 = v16;
      if ( v16 != nullptr )
        __sync_add_and_fetch(v16 + 1, 1);
      ++v6;
      glotv3::SingletonMutexedProcessor::QueueForWriting(a1, &v17, 0, 1);
      boost::detail::shared_count::Destroy(&v18);
      boost::detail::shared_count::Destroy(&v16);
    }
    while ( v6 != v12 );
    v4 = *a2;
    if ( *a2 == nullptr )
      goto LABEL_16;
  }
  else
  {
    v4 = *a2;
    if ( *a2 == nullptr )
    {
LABEL_16:
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
        "px != 0");
      v4 = *a2;
    }
  }
  return (int)(uintptr_t)(glotv3::EventList::clear(v4));
}


// ============================================================================
// Address:   0x13583e0 (size: 3740 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor8TransmitEN5boost10shared_ptrINS_9EventListEEE
// Demangled: glotv3::SingletonMutexedProcessor::Transmit(boost::shared_ptr<glotv3::EventList>)
// ============================================================================
void glotv3::SingletonMutexedProcessor::Transmit(glotv3::SingletonMutexedProcessor::Self *a1, glotv3::EventList::Self **a2)
{
  glotv3::EventList::Self *v2;
  glotv3::EventList::Self *v3;
  uint32_t *Events;
  uint32_t *v5;
  int v6;
  volatile int32_t *v7;
  int v8;
  glotv3::EventList::Self *v9;
  uint8_t *v10;
  char *v11;
  uint32_t *v12;
  int v13;
  glotv3::EventList::Self *v14;
  glotv3::EventList::Self *v15;
  int v16;
  unsigned int v17;
  uint8_t *v18;
  char v19;
  int v20;
  uint32_t *i;
  bool v22;
  const char *v23;
  const char *v24;
  int v25;
  uint8_t *v26;
  const char *v27;
  unsigned int v28;
  const char *v29;
  int Member;
  uint8_t *v31;
  const char *v32;
  int v33;
  uint32_t *v34;
  unsigned int v35;
  int v36;
  int v37;
  uint8_t *v38;
  unsigned int v39;
  const char *v40;
  int v41;
  char **v42;
  int v43;
  int v44;
  int v45;
  typedef uint32_t *_g4_t_obj;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v49;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef int *_g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[4];
  typedef int _g4_t_v59[4];
  typedef int _g4_t_v60[4];
  typedef uint32_t _g4_t_v61[3];
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char _g4_t_v64[4];
  typedef char _g4_t_v65[4];
  typedef char _g4_t_v66[4];
  typedef char _g4_t_v67[4];
  typedef char _g4_t_v68[4];
  typedef char _g4_t_v69[4];
  typedef char _g4_t_v70[4];
  typedef int _g4_t_v71;
  typedef volatile int32_t *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef volatile int32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef volatile int32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef volatile int32_t *_g4_t_v78;
  typedef void *_g4_t_v79;
  typedef uint8_t *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint8_t _g4_t_v82[8];
  typedef uint32_t _g4_t_v83[11];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_obj)) > _g4_s0 ? (0u + sizeof(_g4_t_obj)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v48)) > _g4_s2 ? (12u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v49)) > _g4_s3 ? (16u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v50)) > _g4_s4 ? (16u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v51)) > _g4_s5 ? (20u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v52)) > _g4_s6 ? (24u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v53)) > _g4_s7 ? (28u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v54)) > _g4_s8 ? (28u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v55)) > _g4_s9 ? (32u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v56)) > _g4_s10 ? (32u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (54u + sizeof(_g4_t_v57)) > _g4_s11 ? (54u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v58)) > _g4_s12 ? (56u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v59)) > _g4_s13 ? (72u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v60)) > _g4_s14 ? (88u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v61)) > _g4_s15 ? (104u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v62)) > _g4_s16 ? (116u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v63)) > _g4_s17 ? (120u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v64)) > _g4_s18 ? (124u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v65)) > _g4_s19 ? (128u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v66)) > _g4_s20 ? (132u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v67)) > _g4_s21 ? (136u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v68)) > _g4_s22 ? (140u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v69)) > _g4_s23 ? (144u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v70)) > _g4_s24 ? (148u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v71)) > _g4_s25 ? (152u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v72)) > _g4_s26 ? (156u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v73)) > _g4_s27 ? (168u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v74)) > _g4_s28 ? (172u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (184u + sizeof(_g4_t_v75)) > _g4_s29 ? (184u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (188u + sizeof(_g4_t_v76)) > _g4_s30 ? (188u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (192u + sizeof(_g4_t_v77)) > _g4_s31 ? (192u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v78)) > _g4_s32 ? (196u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (200u + sizeof(_g4_t_v79)) > _g4_s33 ? (200u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (204u + sizeof(_g4_t_v80)) > _g4_s34 ? (204u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v81)) > _g4_s35 ? (208u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (220u + sizeof(_g4_t_v82)) > _g4_s36 ? (220u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (228u + sizeof(_g4_t_v83)) > _g4_s37 ? (228u + sizeof(_g4_t_v83)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 54u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 104u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 124u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 128u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 132u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 136u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 140u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 144u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 148u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 152u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 156u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 172u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 184u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 188u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 192u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 196u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 200u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 204u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 208u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 220u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 228u);

  v83[7] = (uint32_t)(uintptr_t)(&a1);
  v49 = a1;
  v52 = (int *)a2;
  v2 = *a2;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      "List, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
      "px != 0");
    v2 = (glotv3::EventList::Self *)*v52;
  }
  if ( glotv3::EventList::getCount(v2) != 0 )
  {
    v3 = (glotv3::EventList::Self *)*v52;
    if ( *v52 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
        "px != 0");
      v3 = (glotv3::EventList::Self *)*v52;
    }
    Events = (uint32_t *)glotv3::EventList::getEvents(v3);
    v5 = Events;
    if ( Events[3] == 4 )
    {
      v48 = Events[1];
      if ( v48 != 0 )
      {
        v20 = 4;
        v54 = 0;
        for ( i = v5; ; v20 = i[3] )
        {
          v58[0] = (uint32_t)(uintptr_t)(&dword_213B814);
          v27 = (const char *)(uintptr_t)(glotv3::Event::keyType);
          if ( v20 != 4 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              579,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "IsArray ()");
          v28 = v54;
          if ( i[1] <= v54 )
          {
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              580,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "index < data_.a.size");
            v28 = v54;
          }
          v56 = 16 * v28;
          if ( rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                 (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(16 * v28 + *i),
                 v27) == 0 )
            goto LABEL_40;
          v29 = (const char *)(uintptr_t)(glotv3::Event::keyType);
          if ( i[3] != 4 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              579,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "IsArray ()");
          if ( i[1] <= v54 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              580,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "index < data_.a.size");
          Member = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                     (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*i + v56),
                     v29);
          v31 = (uint8_t *)(Member + 16);
          if ( Member == 0 )
          {
            v31 = (uint8_t *)(&g4_rapidjson_NullValue);
            if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
            {
              v44 = _cxa_guard_acquire(g4_guard_d940a9bded);
              v31 = (uint8_t *)(&g4_rapidjson_NullValue);
              if ( v44 != 0 )
              {
                *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
                _cxa_guard_release(g4_guard_d940a9bded);
                __cxa_atexit(
                  (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
                  &g4_rapidjson_NullValue,
                  &unk_20D1280);
                v31 = (uint8_t *)(&g4_rapidjson_NullValue);
              }
            }
          }
          if ( (v31[13] & 8) != 0 )
          {
            v32 = (const char *)(uintptr_t)(glotv3::Event::keyType);
            if ( i[3] != 4 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                579,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](r"
                "apidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, ra"
                "pidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::Siz"
                "eType = unsigned int]",
                "IsArray ()");
            if ( i[1] <= v54 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                580,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](r"
                "apidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, ra"
                "pidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::Siz"
                "eType = unsigned int]",
                "index < data_.a.size");
            v33 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                    (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*i + v56),
                    v32);
            v34 = (uint32_t *)(v33 + 16);
            if ( v33 == 0 )
            {
              v34 = (uint32_t *)(&g4_rapidjson_NullValue);
              if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
              {
                v45 = _cxa_guard_acquire(g4_guard_d940a9bded);
                v34 = (uint32_t *)(&g4_rapidjson_NullValue);
                if ( v45 != 0 )
                {
                  *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
                  _cxa_guard_release(g4_guard_d940a9bded);
                  __cxa_atexit(
                    (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
                    &g4_rapidjson_NullValue,
                    &unk_20D1280);
                  v34 = (uint32_t *)(&g4_rapidjson_NullValue);
                }
              }
            }
            if ( (*((uint8_t *)v34 + 13) & 8) == 0 )
            {
              obj = v34;
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                685,
                "unsigned int rapidjson::GenericValue<Encoding, Allocator>::GetUint() const [with Encoding = rapidjson::U"
                "TF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
                "flags_ & kUintFlag");
              v34 = obj;
            }
            v35 = *v34;
            do
              v36 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
            while ( v36 == 4 );
            if ( v36 != 0 )
            {
              boost::lock_error::Construct(
                v37,
                (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
                (boost::lock_error::Self *)v83,
                v36,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            v38 = v82;
            v60[0] = (int)(uintptr_t)(&dword_213B814);
            while ( 1 )
            {
              v39 = v35 % 0xA + 48;
              v35 /= 0xAu;
              *(v38 - 1) = v39;
              if ( v35 == 0 )
                break;
              --v38;
            }
            sub_193A9B0((int)(uintptr_t)(v60), 0, *(uint32_t *)(v60[0] - 12), v38 - 1, v82 - (v38 - 1));
            sub_1321760((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
            g4_std::string::assign_str(v58, v60);
            g4_std::string::Destroy(v60);
          }
          else
          {
LABEL_40:
            g4_std_compat::string_assign((int)(uintptr_t)(v58), &a0[2], 1u);
          }
          v22 = i[3] == 4;
          v23 = (const char *)(uintptr_t)(glotv3::Event::keyUuid);
          v59[0] = (int)(uintptr_t)(&dword_213B814);
          if ( !v22 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              579,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "IsArray ()");
          if ( i[1] <= v54 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              580,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "index < data_.a.size");
          if ( rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                 (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*i + v56),
                 v23) == 0 )
            goto LABEL_52;
          v24 = (const char *)(uintptr_t)(glotv3::Event::keyUuid);
          if ( i[3] != 4 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              579,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "IsArray ()");
          if ( i[1] <= v54 )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              580,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "index < data_.a.size");
          v25 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                  (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*i + v56),
                  v24);
          v26 = (uint8_t *)(v25 + 16);
          if ( v25 == 0 )
          {
            v26 = (uint8_t *)(&g4_rapidjson_NullValue);
            if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
            {
              v43 = _cxa_guard_acquire(g4_guard_d940a9bded);
              v26 = (uint8_t *)(&g4_rapidjson_NullValue);
              if ( v43 != 0 )
              {
                *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
                _cxa_guard_release(g4_guard_d940a9bded);
                __cxa_atexit(
                  (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
                  &g4_rapidjson_NullValue,
                  &unk_20D1280);
                v26 = (uint8_t *)(&g4_rapidjson_NullValue);
              }
            }
          }
          if ( (v26[14] & 0x10) != 0 )
          {
            v40 = (const char *)(uintptr_t)(glotv3::Event::keyUuid);
            if ( i[3] != 4 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                579,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](r"
                "apidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, ra"
                "pidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::Siz"
                "eType = unsigned int]",
                "IsArray ()");
            if ( i[1] <= v54 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                580,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](r"
                "apidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, ra"
                "pidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::Siz"
                "eType = unsigned int]",
                "index < data_.a.size");
            v41 = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                    (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*i + v56),
                    v40);
            v42 = (char **)(v41 + 16);
            if ( v41 == 0 )
            {
              v42 = (char **)&g4_rapidjson_NullValue;
              if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
                && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
              {
                *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
                _cxa_guard_release(g4_guard_d940a9bded);
                __cxa_atexit(
                  (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
                  &g4_rapidjson_NullValue,
                  &unk_20D1280);
              }
            }
            if ( (*((uint8_t *)v42 + 14) & 0x10) == 0 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                775,
                "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UT"
                "F8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
                "IsString ()");
            g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v62), *v42, (int)(uintptr_t)(&v57));
            g4_std::string::assign_str(v59, &v62);
            g4_std::string::Destroy(&v62);
          }
          else
          {
LABEL_52:
            g4_std_compat::string_assign((int)(uintptr_t)(v59), &a0[2], 1u);
          }
          if ( *v52 == 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv"
              "3::EventList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
              "px != 0");
          glotv3::EventList::getUUID((glotv3::EventList::Self *)v68);
          g4_std_compat::string_construct_copy(v67, &glotv3::errors::PACKAGE_WITH_EVENT_UUID);
          g4_std::string::append_str(v67, v68);
          g4_std_compat::string_construct_copy(v66, v67);
          g4_std::string::append_str(v66, &glotv3::system::HASHTAG);
          g4_std_compat::string_construct_copy(v65, v66);
          g4_std::string::append_str(v65, v58);
          g4_std_compat::string_construct_copy(v64, v65);
          g4_std::string::append_str(v64, &glotv3::system::HASHTAG);
          g4_std_compat::string_construct_copy(&v63, v64);
          g4_std::string::append_str(&v63, v59);
          glotv3::Glotv3Logger::WriteLog(&v63);
          g4_std::string::Destroy(&v63);
          g4_std::string::Destroy(v64);
          g4_std::string::Destroy(v65);
          g4_std::string::Destroy(v66);
          g4_std::string::Destroy(v67);
          g4_std::string::Destroy(v68);
          g4_std::string::Destroy(v59);
          g4_std::string::Destroy(v58);
          if ( ++v54 == v48 )
            break;
        }
      }
    }
    v71 = 0;
    v72 = nullptr;
    glotv3::SingletonMutexedProcessor::TryToAcquireNetworkWorker(
      (glotv3::SingletonMutexedProcessor::Self *)&v77,
      (pthread_mutex_t *)v49);
    v6 = v77;
    v7 = nullptr;
    v75 = v77;
    v76 = v78;
    if ( v78 != nullptr )
    {
      __sync_add_and_fetch(v78 + 1, 1);
      v6 = v75;
      v7 = v76;
    }
    v8 = v71;
    v71 = v6;
    v75 = v8;
    v76 = v72;
    v72 = v7;
    boost::detail::shared_count::Destroy(&v76);
    boost::detail::shared_count::Destroy(&v78);
    if ( v71 == 0 )
    {
      v73 = *v52;
      v74 = (volatile int32_t *)v52[1];
      if ( v74 != nullptr )
        __sync_add_and_fetch(v74 + 1, 1);
      glotv3::SingletonMutexedProcessor::PushbackFromLeftovers(v49, (glotv3::EventList::Self **)&v73);
      boost::detail::shared_count::Destroy(&v74);
      goto LABEL_26;
    }
    v79 = nullptr;
    v80 = nullptr;
    v81 = 0;
    v9 = (glotv3::EventList::Self *)*v52;
    if ( *v52 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        646,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = glotv3::EventL"
        "ist, typename boost::detail::sp_dereference<T>::type = glotv3::EventList::Self&]",
        "px != 0");
      v9 = (glotv3::EventList::Self *)*v52;
    }
    glotv3::EventList::serializeToJson(v9, (int)(uintptr_t)(&v79));
    if ( *v52 == 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
        "px != 0");
    glotv3::EventList::getGameVersionString((glotv3::EventList::Self *)v69);
    if ( *v52 == 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
        "px != 0");
    glotv3::EventList::getUUID((glotv3::EventList::Self *)v70);
    v10 = v80;
    v11 = (char *)v79;
    if ( v80 == v79 )
    {
      v12 = &dword_213B814;
LABEL_18:
      v13 = v71;
      v61[0] = (uint32_t)(uintptr_t)(v12);
      if ( v71 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::A"
          "syncHTTPClient, typename boost::detail::sp_member_access<T>::type = glotv3::AsyncHTTPClient::Self*]",
          "px != 0");
        v13 = v71;
      }
      glotv3::AsyncHTTPClient::AsyncRequest(v13, v61, v70, v69);
      g4_std::string::Destroy(v61);
      g4_std::string::Destroy(v70);
      g4_std::string::Destroy(v69);
      v14 = (glotv3::EventList::Self *)*v52;
      if ( *v52 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::E"
          "ventList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
          "px != 0");
        v14 = (glotv3::EventList::Self *)*v52;
      }
      glotv3::EventList::clear(v14);
      v15 = (glotv3::EventList::Self *)*v52;
      if ( *v52 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::E"
          "ventList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
          "px != 0");
        v15 = (glotv3::EventList::Self *)*v52;
      }
      glotv3::EventList::reset(v15);
      if ( v79 != nullptr )
        operator delete(v79);
LABEL_26:
      boost::detail::shared_count::Destroy(&v72);
      return;
    }
    v47 = v80 - (uint8_t *)v79;
    v55 = (int *)sub_1938930(v80 - (uint8_t *)v79, 0);
    v12 = (uint32_t *)(v55 + 3);
    v51 = v10 - (uint8_t *)(v11);
    v53 = (unsigned int)(v10 - (uint8_t *)(v11)) >> 4;
    v50 = (glotv3::SingletonMutexedProcessor::Self *)(16 * v53);
    if ( 16 * v53 != 0 && (v12 > (uint32_t *)v11 + 4 || v11 > (char *)v55 + 28) && v51 > 0xF )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        ++v17;
        *(__m128i *)&v12[v16] = *(__m128i *)&v11[v16 * 4];
        v16 += 4;
      }
      while ( v53 > v17 );
      v11 = &v11[(uint32_t)(uintptr_t)(v50)];
      v18 = (uint8_t *)((char *)v50 + (uint32_t)(uintptr_t)(v12));
      if ( (glotv3::SingletonMutexedProcessor::Self *)v51 == v50 )
      {
LABEL_33:
        if ( v55 != (int *)(uintptr_t)(dword_213B808) )
        {
          v55[2] = 0;
          *v55 = v47;
          *((uint8_t *)v55 + v47 + 12) = 0;
        }
        goto LABEL_18;
      }
    }
    else
    {
      v18 = (uint8_t *)(v55 + 3);
    }
    do
    {
      v19 = *v11++;
      *v18++ = v19;
    }
    while ( v10 != (uint8_t *)(uintptr_t)(v11) );
    goto LABEL_33;
  }
}


// ============================================================================
// Address:   0x1359280 (size: 193 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor17TransmitOnMaximumEN5boost10shared_ptrINS_9EventListEEE
// Demangled: glotv3::SingletonMutexedProcessor::TransmitOnMaximum(boost::shared_ptr<glotv3::EventList>)
// ============================================================================
int glotv3::SingletonMutexedProcessor::TransmitOnMaximum(glotv3::SingletonMutexedProcessor::Self *a1, int a2)
{
  glotv3::EventList::Self *v2;
  typedef glotv3::EventList::Self *_g4_t_v4;
  typedef volatile int32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  v2 = *(glotv3::EventList::Self **)a2;
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      "List, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
      "px != 0");
    v2 = *(glotv3::EventList::Self **)a2;
  }
  if ( glotv3::EventList::getCount(v2) != 100 )
    return 0;
  v4 = *(glotv3::EventList::Self **)a2;
  v5 = *(volatile int32_t **)(a2 + 4);
  if ( v5 != nullptr )
    __sync_add_and_fetch(v5 + 1, 1);
  glotv3::SingletonMutexedProcessor::Transmit(a1, &v4);
  boost::detail::shared_count::Destroy(&v5);
  return 1;
}


// ============================================================================
// Address:   0x1359350 (size: 1865 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor21ReadAndTransmitEventsENS_5Event4TypeEN5boost10shared_ptrIS1_EENS4_INS_9EventListEEE
// Demangled: glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(glotv3::Event::Type,boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::EventList>)
// ============================================================================
int glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(
        glotv3::SingletonMutexedProcessor::Self *a1,
        int a2,
        int *a3,
        glotv3::EventList::Self **a4)
{
  int *v4;
  void **v5;
  int v6;
  int v7;
  void **v8;
  void **v9;
  int *v10;
  char v11; // si
  uint32_t *v12;
  int v13;
  glotv3::Event::Self *v14;
  int v15;
  glotv3::EventList::Self *v16;
  void *v17;
  int v19;
  int v20;
  int *v21;
  int v22;
  uint32_t *i;
  typedef int _g4_t_v24;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef char _g4_t_v27;
  typedef glotv3::EventList::Self **_g4_t_v28;
  typedef const char *_g4_t_v29[2];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef char _g4_t_v34[4];
  typedef int _g4_t_v35;
  typedef glotv3::EventList::Self *_g4_t_v36;
  typedef glotv3::EventList::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef volatile int32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef glotv3::EventList::Self *_g4_t_v42;
  typedef glotv3::EventList::Self *_g4_t_v43;
  typedef char _g4_t_v44[4];
  typedef void *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef void *_g4_t_v49;
  typedef uint32_t _g4_t_v50[1095];
  enum : size_t {
    _g4_s0 = 4560u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v29)) > _g4_s5 ? (24u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v32)) > _g4_s8 ? (40u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v34)) > _g4_s10 ? (48u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v35)) > _g4_s11 ? (52u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v36)) > _g4_s12 ? (56u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v37)) > _g4_s13 ? (60u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v38)) > _g4_s14 ? (64u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v39)) > _g4_s15 ? (68u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v40)) > _g4_s16 ? (72u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v41)) > _g4_s17 ? (76u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v42)) > _g4_s18 ? (80u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v43)) > _g4_s19 ? (84u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v44)) > _g4_s20 ? (88u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v45)) > _g4_s21 ? (92u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v46)) > _g4_s22 ? (96u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v47)) > _g4_s23 ? (100u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v48)) > _g4_s24 ? (104u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v49)) > _g4_s25 ? (108u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v50)) > _g4_s26 ? (116u + sizeof(_g4_t_v50)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 116u);

  v50[1091] = (uint32_t)(uintptr_t)(&a1);
  v25 = a1;
  v4 = a3;
  v24 = a2;
  v28 = a4;
  v29[0] = (const char *)&dword_213B814;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
      g4_std::string::assign_str(v29, (char *)a1 + 28);
  }
  else
  {
    g4_std::string::assign_str(v29, (char *)a1 + 24);
  }
  v26 = v4;
  v44[0] = 0;
  v5 = (void **)&unk_1C81A60;
  v6 = 38;
LABEL_4:
  while ( 1 )
  {
    v7 = v6 >> 1;
    v8 = &v5[v6 >> 1];
    if ( (unsigned int)(uintptr_t)(*v8) > 0xA )
      break;
    v5 = v8 + 1;
    v6 = v6 - v7 - 1;
    if ( v6 <= 0 )
      goto LABEL_10;
  }
  while ( v7 > 0 )
  {
    v9 = &v5[v7 >> 1];
    if ( (unsigned int)(uintptr_t)(*v9) <= 0xA )
    {
      v5 = v9 + 1;
      v6 = v7 - (v7 >> 1) - 1;
      if ( v6 > 0 )
        goto LABEL_4;
      break;
    }
    v7 >>= 1;
  }
LABEL_10:
  v10 = v26;
  v46 = 0;
  v47 = 1065353216;
  v48 = 0;
  v49 = nullptr;
  if ( v5 == (void **)jpt_628CA1 )
    v5 = (void **)&unk_1C81AF4;
  v45 = *v5;
  glotv3::Reader::Construct((glotv3::Reader::Self *)v50, (int)(uintptr_t)(v29));
  v27 = 1;
  while ( 1 )
  {
    v38 = *v10;
    v39 = (volatile int32_t *)v10[1];
    if ( v39 != nullptr )
      __sync_add_and_fetch(v39 + 1, 1);
    v11 = glotv3::Reader::ReadNext(v50, &v38);
    boost::detail::shared_count::Destroy(&v39);
    if ( v11 == 0 )
      break;
    v12 = (uint32_t *)sub_134C470((int)(uintptr_t)(v10));
    glotv3::Event::getUUID((glotv3::Event::Self *)&v30, v12);
    if ( *(int *)(boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::opIndex(
                    (boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, int>>, std::string, int, boost::hash<std::string>, std::equal_to<std::string>>> *)v44,
                    (const void **)&v30)
                + 4) <= 0 )
    {
      v13 = boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::opIndex(
              (boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, int>>, std::string, int, boost::hash<std::string>, std::equal_to<std::string>>> *)v44,
              (const void **)&v30);
      ++*(uint32_t *)(v13 + 4);
      if ( v27 != 0 )
      {
        if ( v24 != 0 )
        {
          if ( v24 == 1 )
          {
            if ( *v28 == nullptr )
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glo"
                "tv3::EventList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
                "px != 0");
            glotv3::EventList::getUUID((glotv3::EventList::Self *)v34);
            g4_std_compat::string_construct_copy(&v35, &glotv3::errors::ADDING_STREAMED_TO_PACKAGE_UUID);
            g4_std::string::append_str(&v35, v34);
            glotv3::Glotv3Logger::WriteLog(&v35);
            g4_std::string::Destroy(&v35);
            g4_std::string::Destroy(v34);
          }
        }
        else
        {
          if ( *v28 == nullptr )
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv"
              "3::EventList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
              "px != 0");
          glotv3::EventList::getUUID((glotv3::EventList::Self *)v32);
          g4_std_compat::string_construct_copy(&v33, &glotv3::errors::ADDING_PRIORITY_TO_PACKAGE_UUID);
          g4_std::string::append_str(&v33, v32);
          glotv3::Glotv3Logger::WriteLog(&v33);
          g4_std::string::Destroy(&v33);
          g4_std::string::Destroy(v32);
        }
      }
      v14 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(v10));
      if ( glotv3::Event::getEventType(v14) == 51856 )
      {
        v20 = sub_134C470((int)(uintptr_t)(v10));
        glotv3::Event::removeKeyPair(v20, &glotv3::Event::keyPreviousTimeOnDevice);
      }
      v15 = sub_134C470((int)(uintptr_t)(v10));
      if ( glotv3::Event::hasKeyPair(v15, &glotv3::Event::keyPromotedBatch) )
      {
        v19 = sub_134C470((int)(uintptr_t)(v10));
        glotv3::Event::removeKeyPair(v19, &glotv3::Event::keyPromotedBatch);
      }
      v40 = *v10;
      v41 = (volatile int32_t *)v10[1];
      if ( v41 != nullptr )
        __sync_add_and_fetch(v41 + 1, 1);
      v16 = *v28;
      if ( *v28 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::E"
          "ventList, typename boost::detail::sp_member_access<T>::type = glotv3::EventList::Self*]",
          "px != 0");
        v16 = *v28;
      }
      glotv3::EventList::addEvent(v16, &v40);
      boost::detail::shared_count::Destroy(&v41);
      v42 = *v28;
      v43 = v28[1];
      if ( v43 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v43 + 1, 1);
      v27 = glotv3::SingletonMutexedProcessor::TransmitOnMaximum(v25, (int)(uintptr_t)(&v42));
      boost::detail::shared_count::Destroy((volatile int32_t **)&v43);
      g4_std::string::Destroy(&v30);
    }
    else
    {
      g4_std_compat::string_construct_copy(&v31, &glotv3::errors::DUPLICATION_OF_EVENTS);
      g4_std::string::append_str(&v31, &v30);
      glotv3::Glotv3Logger::WriteLog(&v31);
      g4_std::string::Destroy(&v31);
      g4_std::string::Destroy(&v30);
    }
  }
  v36 = *v28;
  v37 = v28[1];
  if ( v37 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v37 + 1, 1);
  glotv3::SingletonMutexedProcessor::Transmit(v25, &v36);
  boost::detail::shared_count::Destroy((volatile int32_t **)&v37);
  glotv3::Reader::Destroy((glotv3::Reader::Self *)v50);
  v17 = v49;
  if ( v49 != nullptr )
  {
    if ( v46 != 0 )
    {
      v21 = (int *)((char *)v49 + 4 * (uint32_t)(uintptr_t)(v45));
      v22 = *v21;
      if ( *v21 != 0 )
        goto LABEL_51;
      __assert2(
        "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
        529,
        "std::size_t boost::unordered::detail::table<Types>::delete_nodes(boost::unordered::detail::table<Types>::link_po"
        "inter, boost::unordered::detail::table<Types>::link_pointer) [with Types = boost::unordered::detail::map<std::al"
        "locator<std::pair<const std::basic_string<char>, int> >, std::basic_string<char>, int, boost::hash<std::basic_st"
        "ring<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int, boost::unordered::detail::t"
        "able<Types>::link_pointer = boost::unordered::detail::ptr_bucket*]",
        "prev->next_ != end");
      v22 = *v21;
      if ( *v21 != 0 )
        goto LABEL_51;
      for ( i = nullptr; ; i = (uint32_t *)(v22 - 8) )
      {
        *v21 = i[2];
        g4_std::string::Destroy(i);
        operator delete(i);
        --v46;
        v22 = *v21;
        if ( *v21 == 0 )
          break;
LABEL_51:
        ;
      }
      v17 = v49;
      if ( v49 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
          234,
          "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std:"
          ":size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<ch"
          "ar>, int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_str"
          "ing<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*,"
          " std::size_t = unsigned int]",
          "buckets_");
        v17 = v49;
      }
    }
    operator delete(v17);
    v49 = nullptr;
    v48 = 0;
  }
  if ( v46 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
      559,
      "void boost::unordered::detail::table<Types>::delete_buckets() [with Types = boost::unordered::detail::map<std::all"
      "ocator<std::pair<const std::basic_string<char>, int> >, std::basic_string<char>, int, boost::hash<std::basic_strin"
      "g<char> >, std::equal_to<std::basic_string<char> > >]",
      "!size_");
  glotv3::Fs::RemovePath(v29);
  return ((g4_std::string::Destroy(v29)), (int)0);
}


// ============================================================================
// Address:   0x1359aa0 (size: 2357 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor17PushbackFromCrashEv
// Demangled: glotv3::SingletonMutexedProcessor::PushbackFromCrash(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::PushbackFromCrash(glotv3::SingletonMutexedProcessor::Self *self)
{
  pthread_mutex_t *v1;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  const char **v8;
  int v9;
  const char *v10;
  int v11;
  const char *v12;
  int v13;
  char v14; // si
  uint32_t *v15;
  void *v17;
  unsigned int v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  unsigned int v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  int Member;
  int *v30;
  char v31; // di
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v32;
  glotv3::Event::Self *v33;
  uint32_t *v34;
  typedef void *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef void *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef pthread_mutex_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef volatile int32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef volatile int32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef void *_g4_t_v62;
  typedef void *_g4_t_v63;
  typedef char _g4_t_v64[20];
  typedef uint32_t _g4_t_v65[2];
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint8_t _g4_t_v74[12];
  typedef int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef uint32_t **_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef glotv3::SingletonMutexedProcessor::Self **_g4_t_v84;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v36)) > _g4_s1 ? (0u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v37)) > _g4_s2 ? (0u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v38)) > _g4_s3 ? (0u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v39)) > _g4_s4 ? (4u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v40)) > _g4_s5 ? (4u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v41)) > _g4_s6 ? (8u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v42)) > _g4_s7 ? (12u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v43)) > _g4_s8 ? (16u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v44)) > _g4_s9 ? (20u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v45)) > _g4_s10 ? (24u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v46)) > _g4_s11 ? (28u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v47)) > _g4_s12 ? (36u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v48)) > _g4_s13 ? (40u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v49)) > _g4_s14 ? (44u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v50)) > _g4_s15 ? (48u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v51)) > _g4_s16 ? (52u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v52)) > _g4_s17 ? (56u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v53)) > _g4_s18 ? (60u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v54)) > _g4_s19 ? (64u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v55)) > _g4_s20 ? (68u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v56)) > _g4_s21 ? (72u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v57)) > _g4_s22 ? (76u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v58)) > _g4_s23 ? (80u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v59)) > _g4_s24 ? (84u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v60)) > _g4_s25 ? (88u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v61)) > _g4_s26 ? (92u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v62)) > _g4_s27 ? (96u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v63)) > _g4_s28 ? (100u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v64)) > _g4_s29 ? (112u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v65)) > _g4_s30 ? (132u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v66)) > _g4_s31 ? (140u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v67)) > _g4_s32 ? (144u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v68)) > _g4_s33 ? (148u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v69)) > _g4_s34 ? (152u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v70)) > _g4_s35 ? (156u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v71)) > _g4_s36 ? (160u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v72)) > _g4_s37 ? (164u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v73)) > _g4_s38 ? (168u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v74)) > _g4_s39 ? (180u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v75)) > _g4_s40 ? (192u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v76)) > _g4_s41 ? (196u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v77)) > _g4_s42 ? (200u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v78)) > _g4_s43 ? (204u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v79)) > _g4_s44 ? (208u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v80)) > _g4_s45 ? (212u + sizeof(_g4_t_v80)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v81)) > _g4_s46 ? (216u + sizeof(_g4_t_v81)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v82)) > _g4_s47 ? (220u + sizeof(_g4_t_v82)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v83)) > _g4_s48 ? (224u + sizeof(_g4_t_v83)) : _g4_s48,
    _g4_s50 = (236u + sizeof(_g4_t_v84)) > _g4_s49 ? (236u + sizeof(_g4_t_v84)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 156u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 164u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 180u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 192u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 196u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 200u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 204u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 208u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 212u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 216u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 220u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 224u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 236u);

  v84 = &self;
  v44 = self;
  v41 = (pthread_mutex_t *)((char *)self + 13336);
  v1 = (pthread_mutex_t *)((char *)self + 13336);
  do
    v2 = pthread_mutex_lock(v1);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v64,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = nullptr;
  v65[1] = 8;
  v65[0] = (uint32_t)(uintptr_t)(operator new(0x20u));
  v4 = (uint32_t *)(v65[0] + 12);
  *(uint32_t *)(v65[0] + 12) = (uint32_t)(uintptr_t)(operator new(0x200u));
  v69 = v4;
  v5 = *v4;
  v73 = v4;
  v67 = v5;
  v68 = v5 + 512;
  v6 = *v4;
  v66 = v5;
  v71 = v6;
  v70 = v6;
  v7 = v6 + 512;
  v8 = *(const char ***)v44;
  v72 = v7;
  if ( (uint8_t)glotv3::Fs::ReadDirectory(v8, (int)(uintptr_t)(v65)) != 0 )
  {
    v45 = v66;
    v43 = v68;
    v42 = v69;
LABEL_6:
    if ( v70 != v45 )
    {
      while ( 1 )
      {
        g4_std_compat::string_construct_copy(&v47, *(uint32_t *)v44);
        g4_std::string::append_str(&v47, v45);
        v9 = (int)(uintptr_t)(glotv3::system::SHA1_SUFFIX);
        v10 = &v47[*((uint32_t *)v47 - 3)];
        v11 = v9 + *(uint32_t *)(v9 - 12);
        if ( v47 == v10 )
          goto LABEL_18;
        if ( (uintptr_t)glotv3::system::SHA1_SUFFIX == v11 )
          goto LABEL_19;
        if ( *(v10 - 1) == *(uint8_t *)(v11 - 1) )
          break;
LABEL_14:
        g4_std::string::Destroy(&v47);
        v45 += 4;
        if ( v45 != v43 )
          goto LABEL_6;
        v15 = v42++;
        v45 = v15[1];
        v43 = v45 + 512;
        if ( v70 == v45 )
          goto LABEL_16;
      }
      v12 = v10 - 1;
      v13 = v11 - 1;
      while ( 1 )
      {
        v39 = v13;
        if ( v12 == v47 )
          break;
        if ( v13 == (uintptr_t)glotv3::system::SHA1_SUFFIX )
          goto LABEL_19;
        --v13;
        v14 = *--v12;
        if ( v14 != *(uint8_t *)(v39 - 1) )
          goto LABEL_14;
      }
      v9 = (int)(uintptr_t)(glotv3::system::SHA1_SUFFIX);
      v11 = v13;
LABEL_18:
      if ( v9 == v11 )
      {
LABEL_19:
        if ( glotv3::Fs::ExistsPathAndIsNotEmpty(&v47) )
        {
          glotv3::Fs::AsString(&v48, &v47);
          v59 = nullptr;
          v61 = nullptr;
          v62 = nullptr;
          v63 = nullptr;
          v60 = 2048;
          v17 = (void *)operator new(1u);
          v18 = v60;
          v62 = v17;
          v63 = v17;
          v19 = (uint32_t *)(malloc(v60 + 12));
          v20 = v59;
          *v19 = v18;
          v19[1] = 0;
          v19[2] = (uint32_t)(uintptr_t)(v20);
          v59 = v19;
          v75 = 0;
          v76 = (uint32_t *)(&v59);
          v77 = nullptr;
          v78 = 0;
          v79 = 0;
          v80 = 0;
          v81 = 2048;
          v21 = v19[1];
          if ( (unsigned int)(v21 + 2048) > *v19 )
          {
            v22 = v60;
            if ( v60 <= 0x800 )
              v22 = (v81 + 3) & 0xFFFFFFFC;
            v35 = (void *)v22;
            v19 = (uint32_t *)(malloc(v22 + 12));
            v19[1] = 0;
            *v19 = (uint32_t)(uintptr_t)(v35);
            v19[2] = (uint32_t)(uintptr_t)(v59);
            v59 = v19;
            v21 = v19[1];
          }
          v23 = (int)(uintptr_t)(v19) + v21 + 12;
          if ( (v23 & 3) != 0 )
          {
            v36 = (char *)v19 + v21 + 12;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              267,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAl"
              "locator, size_t = unsigned int]",
              "((uintptr_t) buffer & 3) == 0");
            v19 = v59;
            v23 = (int)(uintptr_t)(v36);
            v21 = v59[1];
          }
          v19[1] = v21 + 2048;
          v78 = v23;
          v79 = v23;
          v80 = v81 + v23;
          v82 = 0;
          v83 = 0;
          v55 = v48;
          v56 = v48;
          rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseStream<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(
            (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v74,
            (char **)&v55);
          if ( v75 == 0 )
            goto LABEL_27;
          v58 = 4;
          v55 = 0;
          v56 = 0;
          v57 = 0;
          if ( rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                 (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v74,
                 "events") != 0 )
          {
            Member = rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
                       (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v74,
                       "events");
            v30 = (int *)(Member + 16);
            if ( Member == 0 )
            {
              v30 = (int *)&g4_rapidjson_NullValue;
              if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
                && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
              {
                v30 = (int *)sub_134C510();
              }
            }
            if ( v30 == &v55 )
              __assert2(
                "../../../../../lib/rapidjson/document.h",
                237,
                "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(ra"
                "pidjson::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::"
                "MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
                "this != & rhs");
            v55 = *v30;
            v56 = v30[1];
            v57 = v30[2];
            v58 = v30[3];
            v30[3] = 0;
          }
          if ( v58 != 4 )
            goto LABEL_27;
          v31 = 0;
          v40 = v56;
          if ( v56 != 0 )
          {
            v46 = 0;
            do
            {
              sub_1358000(&v51);
              if ( v51 == 0 )
              {
                v31 = 1;
                boost::detail::shared_count::Destroy(&v52);
                goto LABEL_60;
              }
              if ( v58 != 4 )
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  579,
                  "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[]"
                  "(rapidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>"
                  ", rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjso"
                  "n::SizeType = unsigned int]",
                  "IsArray ()");
              if ( v46 >= v56 )
                __assert2(
                  "../../../../../lib/rapidjson/document.h",
                  580,
                  "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[]"
                  "(rapidjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>"
                  ", rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjso"
                  "n::SizeType = unsigned int]",
                  "index < data_.a.size");
              v32 = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(v55 + 16 * v46);
              v33 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(&v51));
              glotv3::Event::setRoot(v33, v32);
              v53 = v51;
              v54 = v52;
              if ( v52 != nullptr )
                __sync_add_and_fetch(v52 + 1, 1);
              glotv3::SingletonMutexedProcessor::QueueForWriting(v44, &v53, 0, 1);
              boost::detail::shared_count::Destroy(&v54);
              v34 = (uint32_t *)sub_134C470((int)(uintptr_t)(&v51));
              glotv3::Event::getUUID((glotv3::Event::Self *)v49, v34);
              g4_std::string::construct_copy(&v50, &glotv3::errors::PUSHING_BACK_FROM_CRASH);
              g4_std::string::append_str(&v50, v49);
              glotv3::Glotv3Logger::WriteLog(&v50);
              g4_std::string::Destroy(&v50);
              g4_std::string::Destroy(v49);
              boost::detail::shared_count::Destroy(&v52);
              ++v46;
            }
            while ( v46 != v40 );
            v31 = 0;
          }
LABEL_60:
          g4_std::string::clear(&v48, 0, *(uint32_t *)(v48 - 12), 0);
          if ( v31 == 0 )
LABEL_27:
            glotv3::Fs::RemovePath(&v47);
          v24 = (uint32_t *)(v77);
          if ( v77 != nullptr )
          {
            v25 = *v77;
            if ( *v77 != nullptr && v25 != v77[2] )
            {
              while ( 1 )
              {
                v26 = (uint32_t *)v25[2];
                v37 = v24;
                free(v25);
                v24 = v37;
                *v37 = (uint32_t)(uintptr_t)(v26);
                if ( v26 == nullptr || v26 == (uint32_t *)v37[2] )
                  break;
                v25 = v26;
              }
            }
            v38 = v24;
            opDelete((void *)v24[4]);
            opDelete(v38);
          }
          v27 = v59;
          if ( v59 != nullptr && v59 != v61 )
          {
            while ( 1 )
            {
              v28 = (uint32_t *)v27[2];
              free(v27);
              v59 = v28;
              if ( v28 == nullptr || v28 == v61 )
                break;
              v27 = v28;
            }
          }
          opDelete(v63);
          g4_std::string::Destroy(&v48);
        }
        else
        {
          glotv3::Fs::RemovePath(&v47);
        }
        goto LABEL_14;
      }
      goto LABEL_14;
    }
  }
  else
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::FAILED_TO_READ_DATA_DIRECTORY_CONTENTS);
  }
LABEL_16:
  g4_std_compat::deque_destroy((std::deque<std::string> *)v65);
  return sub_1321760(v41);
}


// ============================================================================
// Address:   0x135a3e0 (size: 1408 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor18PushbackFromUnsentEv
// Demangled: glotv3::SingletonMutexedProcessor::PushbackFromUnsent(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::PushbackFromUnsent(const char **self)
{
  const char **v1;
  pthread_mutex_t *v2;
  int v3;
  int v4;
  uint32_t *v6;
  char v7; // si
  uint32_t *v8;
  char v9; // si
  uint32_t *v10;
  char v11; // si
  typedef pthread_mutex_t *_g4_t_v12;
  typedef const char **_g4_t_v13;
  typedef const char **_g4_t_v14;
  typedef const char **_g4_t_v15;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v16;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v17;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef volatile int32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef volatile int32_t *_g4_t_v39;
  typedef uint8_t _g4_t_v40[20];
  typedef uint32_t _g4_t_v41[1095];
  enum : size_t {
    _g4_s0 = 4608u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v14)) > _g4_s2 ? (4u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v15)) > _g4_s3 ? (4u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v17)) > _g4_s5 ? (8u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v18)) > _g4_s6 ? (8u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v19)) > _g4_s7 ? (20u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v20)) > _g4_s8 ? (24u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v21)) > _g4_s9 ? (28u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v22)) > _g4_s10 ? (32u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v23)) > _g4_s11 ? (36u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v24)) > _g4_s12 ? (40u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v25)) > _g4_s13 ? (44u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v26)) > _g4_s14 ? (48u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v27)) > _g4_s15 ? (52u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v28)) > _g4_s16 ? (64u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v29)) > _g4_s17 ? (68u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v30)) > _g4_s18 ? (80u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v31)) > _g4_s19 ? (84u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v32)) > _g4_s20 ? (96u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v33)) > _g4_s21 ? (100u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v34)) > _g4_s22 ? (112u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v35)) > _g4_s23 ? (116u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v36)) > _g4_s24 ? (120u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v37)) > _g4_s25 ? (124u + sizeof(_g4_t_v37)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v38)) > _g4_s26 ? (128u + sizeof(_g4_t_v38)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v39)) > _g4_s27 ? (132u + sizeof(_g4_t_v39)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v40)) > _g4_s28 ? (136u + sizeof(_g4_t_v40)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v41)) > _g4_s29 ? (156u + sizeof(_g4_t_v41)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 100u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 120u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 124u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 132u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 156u);

  v41[1091] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v12 = (pthread_mutex_t *)(self + 3334);
  v2 = (pthread_mutex_t *)(self + 3334);
  do
    v3 = pthread_mutex_lock(v2);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    boost::lock_error::Construct(
      v4,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v40,
      v3,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  sub_1358000(&v26);
  if ( v26 != 0 )
  {
    glotv3::SingletonMutexedProcessor::RemoveEmptyAsyncs(v1);
    v13 = v1 + 6;
    if ( glotv3::Fs::ExistsPath(v1 + 6) )
    {
      glotv3::Reader::Construct((glotv3::Reader::Self *)v41, (int)(uintptr_t)(v13));
      v16 = (glotv3::SingletonMutexedProcessor::Self *)v1;
      while ( 1 )
      {
        v28 = v26;
        v29 = v27;
        if ( v27 != nullptr )
          __sync_add_and_fetch(v27 + 1, 1);
        v7 = glotv3::Reader::ReadNext(v41, &v28);
        boost::detail::shared_count::Destroy(&v29);
        if ( v7 == 0 )
          break;
        v6 = (uint32_t *)sub_134C470((int)(uintptr_t)(&v26));
        glotv3::Event::getUUID((glotv3::Event::Self *)v19, v6);
        g4_std::string::construct_copy(&v20, &glotv3::errors::PUSHING_BACK_FROM_RESUME);
        g4_std::string::append_str(&v20, v19);
        glotv3::Glotv3Logger::WriteLog(&v20);
        g4_std::string::Destroy(&v20);
        g4_std::string::Destroy(v19);
        v34 = v26;
        v35 = v27;
        if ( v27 != nullptr )
          __sync_add_and_fetch(v27 + 1, 1);
        glotv3::SingletonMutexedProcessor::QueueForWriting(v16, &v34, 0, 1);
        boost::detail::shared_count::Destroy(&v35);
      }
      v1 = (const char **)v16;
      glotv3::Reader::Destroy((glotv3::Reader::Self *)v41);
      glotv3::Fs::RemovePath(v13);
    }
    v14 = v1 + 7;
    if ( glotv3::Fs::ExistsPath(v1 + 7) )
    {
      glotv3::Reader::Construct((glotv3::Reader::Self *)v41, (int)(uintptr_t)(v14));
      v18 = (glotv3::SingletonMutexedProcessor::Self *)v1;
      while ( 1 )
      {
        v30 = v26;
        v31 = v27;
        if ( v27 != nullptr )
          __sync_add_and_fetch(v27 + 1, 1);
        v11 = glotv3::Reader::ReadNext(v41, &v30);
        boost::detail::shared_count::Destroy(&v31);
        if ( v11 == 0 )
          break;
        v10 = (uint32_t *)sub_134C470((int)(uintptr_t)(&v26));
        glotv3::Event::getUUID((glotv3::Event::Self *)v21, v10);
        g4_std::string::construct_copy(&v22, &glotv3::errors::PUSHING_BACK_FROM_RESUME);
        g4_std::string::append_str(&v22, v21);
        glotv3::Glotv3Logger::WriteLog(&v22);
        g4_std::string::Destroy(&v22);
        g4_std::string::Destroy(v21);
        v36 = v26;
        v37 = v27;
        if ( v27 != nullptr )
          __sync_add_and_fetch(v27 + 1, 1);
        glotv3::SingletonMutexedProcessor::QueueForWriting(v18, &v36, 0, 1);
        boost::detail::shared_count::Destroy(&v37);
      }
      v1 = (const char **)v18;
      glotv3::Reader::Destroy((glotv3::Reader::Self *)v41);
      glotv3::Fs::RemovePath(v14);
    }
    v15 = v1 + 8;
    if ( glotv3::Fs::ExistsPath(v1 + 8) )
    {
      glotv3::Reader::Construct((glotv3::Reader::Self *)v41, (int)(uintptr_t)(v15));
      v17 = (glotv3::SingletonMutexedProcessor::Self *)v1;
      while ( 1 )
      {
        v32 = v26;
        v33 = v27;
        if ( v27 != nullptr )
          __sync_add_and_fetch(v27 + 1, 1);
        v9 = glotv3::Reader::ReadNext(v41, &v32);
        boost::detail::shared_count::Destroy(&v33);
        if ( v9 == 0 )
          break;
        v8 = (uint32_t *)sub_134C470((int)(uintptr_t)(&v26));
        glotv3::Event::getUUID((glotv3::Event::Self *)v23, v8);
        g4_std::string::construct_copy(&v24, &glotv3::errors::PUSHING_BACK_FROM_RESUME);
        g4_std::string::append_str(&v24, v23);
        glotv3::Glotv3Logger::WriteLog(&v24);
        g4_std::string::Destroy(&v24);
        g4_std::string::Destroy(v23);
        v38 = v26;
        v39 = v27;
        if ( v27 != nullptr )
          __sync_add_and_fetch(v27 + 1, 1);
        glotv3::SingletonMutexedProcessor::QueueForWriting(v17, &v38, 0, 1);
        boost::detail::shared_count::Destroy(&v39);
      }
      glotv3::Reader::Destroy((glotv3::Reader::Self *)v41);
      glotv3::Fs::RemovePath(v15);
    }
  }
  else
  {
    g4_std::string::construct_copy(&v25, &glotv3::errors::OUT_OF_MEMORY);
    g4_std::string::append((int)(uintptr_t)(&v25), "void glotv3::SingletonMutexedProcessor::PushbackFromUnsent()", 0x3Cu);
    glotv3::Glotv3Logger::WriteLog(&v25);
    g4_std::string::Destroy(&v25);
  }
  boost::detail::shared_count::Destroy(&v27);
  return sub_1321760(v12);
}


// ============================================================================
// Address:   0x135a960 (size: 93 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor13AsyncRecoveryEv
// Demangled: glotv3::SingletonMutexedProcessor::AsyncRecovery(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::AsyncRecovery(glotv3::SingletonMutexedProcessor::Self *self)
{
  int result;

  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::ENTERED_RECOVERY);
  *((uint8_t *)self + 13420) = 1;
  *((uint8_t *)self + 13421) = 1;
  glotv3::SingletonMutexedProcessor::PushbackFromCrash(self);
  glotv3::SingletonMutexedProcessor::PushbackFromUnsent((const char **)self);
  result = *((uint8_t *)self + 13421);
  *((uint8_t *)self + 13421) = 0;
  return result;
}


// ============================================================================
// Address:   0x135a9c0 (size: 3347 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor14DetectGameTimeEv
// Demangled: glotv3::SingletonMutexedProcessor::DetectGameTime(void)
// ============================================================================
long double glotv3::SingletonMutexedProcessor::DetectGameTime(
        int a1,
        glotv3::SingletonMutexedProcessor::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v2;
  pthread_mutex_t *v3;
  int v4;
  int v5;
  double v6; // xmm0_8
  double v7; // xmm0_8
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  double *v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v18;
  int v19;
  int v20;
  __m128d v21; // xmm1
  unsigned int UTCAsSeconds;
  int v23;
  long double MonotonicTime; // fst7
  double v25; // xmm0_8
  typedef double _g4_t_v26;
  typedef double _g4_t_v27;
  typedef double _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef double *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef unsigned int _g4_t_KeyPairAsUInt;
  typedef double _g4_t_v38;
  typedef double _g4_t_v39;
  typedef uint64_t _g4_t_v40;
  typedef double _g4_t_KeyPairAsDouble;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[4];
  typedef uint8_t _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[4];
  typedef uint8_t _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[4];
  typedef uint8_t _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef double _g4_t_v51;
  typedef int _g4_t_v52;
  typedef volatile int32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef glotv3::Event::Self *_g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef glotv3::Event::Self *_g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef volatile int32_t *_g4_t_v65;
  typedef int64_t _g4_t_v66[3];
  typedef int64_t _g4_t_v67[3];
  typedef double _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef double _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef void *_g4_t_v84[7];
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef double _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef pthread_mutex_t _g4_t_mutex;
  typedef uint32_t _g4_t_v99[1095];
  enum : size_t {
    _g4_s0 = 9248u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v27)) > _g4_s1 ? (40u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v28)) > _g4_s2 ? (40u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v29)) > _g4_s3 ? (60u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v30)) > _g4_s4 ? (60u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v31)) > _g4_s5 ? (60u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v32)) > _g4_s6 ? (60u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v33)) > _g4_s7 ? (60u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v34)) > _g4_s8 ? (64u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v35)) > _g4_s9 ? (64u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v36)) > _g4_s10 ? (64u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_KeyPairAsUInt)) > _g4_s11 ? (68u + sizeof(_g4_t_KeyPairAsUInt)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v38)) > _g4_s12 ? (88u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v39)) > _g4_s13 ? (88u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v40)) > _g4_s14 ? (88u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_KeyPairAsDouble)) > _g4_s15 ? (88u + sizeof(_g4_t_KeyPairAsDouble)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v42)) > _g4_s16 ? (116u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v43)) > _g4_s17 ? (120u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v44)) > _g4_s18 ? (124u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v45)) > _g4_s19 ? (128u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v46)) > _g4_s20 ? (132u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v47)) > _g4_s21 ? (136u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v48)) > _g4_s22 ? (140u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v49)) > _g4_s23 ? (144u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v50)) > _g4_s24 ? (148u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v51)) > _g4_s25 ? (152u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v52)) > _g4_s26 ? (160u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v53)) > _g4_s27 ? (164u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v54)) > _g4_s28 ? (168u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v55)) > _g4_s29 ? (172u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v56)) > _g4_s30 ? (176u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v57)) > _g4_s31 ? (180u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v58)) > _g4_s32 ? (184u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v59)) > _g4_s33 ? (188u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v60)) > _g4_s34 ? (192u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v61)) > _g4_s35 ? (196u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v62)) > _g4_s36 ? (200u + sizeof(_g4_t_v62)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v63)) > _g4_s37 ? (204u + sizeof(_g4_t_v63)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v64)) > _g4_s38 ? (208u + sizeof(_g4_t_v64)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v65)) > _g4_s39 ? (212u + sizeof(_g4_t_v65)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v66)) > _g4_s40 ? (216u + sizeof(_g4_t_v66)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v67)) > _g4_s41 ? (240u + sizeof(_g4_t_v67)) : _g4_s41,
    _g4_s43 = (264u + sizeof(_g4_t_v68)) > _g4_s42 ? (264u + sizeof(_g4_t_v68)) : _g4_s42,
    _g4_s44 = (272u + sizeof(_g4_t_v69)) > _g4_s43 ? (272u + sizeof(_g4_t_v69)) : _g4_s43,
    _g4_s45 = (288u + sizeof(_g4_t_v70)) > _g4_s44 ? (288u + sizeof(_g4_t_v70)) : _g4_s44,
    _g4_s46 = (292u + sizeof(_g4_t_v71)) > _g4_s45 ? (292u + sizeof(_g4_t_v71)) : _g4_s45,
    _g4_s47 = (296u + sizeof(_g4_t_v72)) > _g4_s46 ? (296u + sizeof(_g4_t_v72)) : _g4_s46,
    _g4_s48 = (300u + sizeof(_g4_t_v73)) > _g4_s47 ? (300u + sizeof(_g4_t_v73)) : _g4_s47,
    _g4_s49 = (304u + sizeof(_g4_t_v74)) > _g4_s48 ? (304u + sizeof(_g4_t_v74)) : _g4_s48,
    _g4_s50 = (308u + sizeof(_g4_t_v75)) > _g4_s49 ? (308u + sizeof(_g4_t_v75)) : _g4_s49,
    _g4_s51 = (312u + sizeof(_g4_t_v76)) > _g4_s50 ? (312u + sizeof(_g4_t_v76)) : _g4_s50,
    _g4_s52 = (320u + sizeof(_g4_t_v77)) > _g4_s51 ? (320u + sizeof(_g4_t_v77)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_v78)) > _g4_s52 ? (336u + sizeof(_g4_t_v78)) : _g4_s52,
    _g4_s54 = (340u + sizeof(_g4_t_v79)) > _g4_s53 ? (340u + sizeof(_g4_t_v79)) : _g4_s53,
    _g4_s55 = (344u + sizeof(_g4_t_v80)) > _g4_s54 ? (344u + sizeof(_g4_t_v80)) : _g4_s54,
    _g4_s56 = (348u + sizeof(_g4_t_v81)) > _g4_s55 ? (348u + sizeof(_g4_t_v81)) : _g4_s55,
    _g4_s57 = (352u + sizeof(_g4_t_v82)) > _g4_s56 ? (352u + sizeof(_g4_t_v82)) : _g4_s56,
    _g4_s58 = (356u + sizeof(_g4_t_v83)) > _g4_s57 ? (356u + sizeof(_g4_t_v83)) : _g4_s57,
    _g4_s59 = (360u + sizeof(_g4_t_v84)) > _g4_s58 ? (360u + sizeof(_g4_t_v84)) : _g4_s58,
    _g4_s60 = (388u + sizeof(_g4_t_v85)) > _g4_s59 ? (388u + sizeof(_g4_t_v85)) : _g4_s59,
    _g4_s61 = (392u + sizeof(_g4_t_v86)) > _g4_s60 ? (392u + sizeof(_g4_t_v86)) : _g4_s60,
    _g4_s62 = (396u + sizeof(_g4_t_v87)) > _g4_s61 ? (396u + sizeof(_g4_t_v87)) : _g4_s61,
    _g4_s63 = (400u + sizeof(_g4_t_v88)) > _g4_s62 ? (400u + sizeof(_g4_t_v88)) : _g4_s62,
    _g4_s64 = (404u + sizeof(_g4_t_v89)) > _g4_s63 ? (404u + sizeof(_g4_t_v89)) : _g4_s63,
    _g4_s65 = (408u + sizeof(_g4_t_v90)) > _g4_s64 ? (408u + sizeof(_g4_t_v90)) : _g4_s64,
    _g4_s66 = (416u + sizeof(_g4_t_v91)) > _g4_s65 ? (416u + sizeof(_g4_t_v91)) : _g4_s65,
    _g4_s67 = (432u + sizeof(_g4_t_v92)) > _g4_s66 ? (432u + sizeof(_g4_t_v92)) : _g4_s66,
    _g4_s68 = (436u + sizeof(_g4_t_v93)) > _g4_s67 ? (436u + sizeof(_g4_t_v93)) : _g4_s67,
    _g4_s69 = (440u + sizeof(_g4_t_v94)) > _g4_s68 ? (440u + sizeof(_g4_t_v94)) : _g4_s68,
    _g4_s70 = (444u + sizeof(_g4_t_v95)) > _g4_s69 ? (444u + sizeof(_g4_t_v95)) : _g4_s69,
    _g4_s71 = (448u + sizeof(_g4_t_v96)) > _g4_s70 ? (448u + sizeof(_g4_t_v96)) : _g4_s70,
    _g4_s72 = (452u + sizeof(_g4_t_v97)) > _g4_s71 ? (452u + sizeof(_g4_t_v97)) : _g4_s71,
    _g4_s73 = (456u + sizeof(_g4_t_mutex)) > _g4_s72 ? (456u + sizeof(_g4_t_mutex)) : _g4_s72,
    _g4_s74 = (4804u + sizeof(_g4_t_v99)) > _g4_s73 ? (4804u + sizeof(_g4_t_v99)) : _g4_s73
  };
  alignas(16) uint8_t _g4_sf[_g4_s74];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_KeyPairAsUInt &KeyPairAsUInt = *reinterpret_cast<_g4_t_KeyPairAsUInt *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_KeyPairAsDouble &KeyPairAsDouble = *reinterpret_cast<_g4_t_KeyPairAsDouble *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 120u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 128u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 132u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 136u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 140u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 144u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 148u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 152u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 160u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 164u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 168u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 172u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 180u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 184u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 188u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 192u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 196u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 200u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 204u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 208u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 212u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 216u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 240u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 264u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 272u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 288u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 292u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 296u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 300u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 304u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 308u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 312u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 320u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 336u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 340u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 344u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 348u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 352u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 356u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 360u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 388u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 392u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 396u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 400u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 404u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 408u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 416u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 432u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 436u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 440u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 444u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 448u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 452u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 456u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 4804u);

  v99[1091] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = (pthread_mutex_t *)((char *)self + 13400);
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13400 )
    sub_134E3D0((int)(uintptr_t)(&self), a1);
  do
    v4 = pthread_mutex_trylock(v3);
  while ( v4 == 4 );
  if ( v4 != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::FAILED_TO_AQUIRE_LOCK_ON_GAMETIME);
    return *(double *)(*((uint32_t *)v2 + 3297) + 20);
  }
  else
  {
    g4_std::string::construct_copy(&v42, *(uint32_t *)v2);
    g4_std::string::append_str(&v42, &glotv3::system::GAMETIME_FILE);
    if ( glotv3::Fs::ExistsPathAndIsEmpty((const char **)&v42) )
      glotv3::Fs::RemovePath((const char **)&v42);
    sub_1358000(&v52);
    __atomic_exchange_n(
      (volatile int32_t *)(*((uint32_t *)v2 + 3297) + 156),
      glotv3::Utils::GetUTCAsSeconds(),
      __ATOMIC_SEQ_CST);
    if ( v52 != 0 )
    {
      if ( glotv3::Fs::ExistsPathAndIsNotEmpty((const char **)&v42) )
      {
        glotv3::Reader::Construct((glotv3::Reader::Self *)v99, (int)(uintptr_t)(&v42));
        v54 = v52;
        v55 = v53;
        if ( v53 != nullptr )
          __sync_add_and_fetch(v53 + 1, 1);
        v36 = glotv3::Reader::ReadNext(v99, &v54);
        boost::detail::shared_count::Destroy(&v55);
        if ( v36 != 0 )
        {
          v18 = sub_134C470((int)(uintptr_t)(&v52));
          KeyPairAsUInt = glotv3::Event::getKeyPairAsUInt(v18, &glotv3::Event::keyPreviousTimeOnDevice);
          if ( *(uint8_t *)(*((uint32_t *)v2 + 3297) + 195) == 0 )
          {
            v23 = sub_134C470((int)(uintptr_t)(&v52));
            KeyPairAsDouble = glotv3::Event::getKeyPairAsDouble(v23, &glotv3::Event::keyMonotonic);
            MonotonicTime = glotv3::Utils::RetrieveMonotonicTime();
            v25 = MonotonicTime;
            if ( KeyPairAsDouble > 0.0 && v25 > 0.0 && KeyPairAsDouble > v25 )
            {
              *(uint8_t *)(*((uint32_t *)v2 + 3297) + 197) = 1;
              v51 = MonotonicTime;
              sub_1321700((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
              boost::detail::lexical_cast_do_cast<std::string,double>::lexical_cast_impl(
                (boost::detail::lexical_cast_do_cast<std::string, double> *)v46,
                &v51);
              sub_1321760((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
              v51 = KeyPairAsDouble;
              sub_1321700((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
              boost::detail::lexical_cast_do_cast<std::string,double>::lexical_cast_impl(
                (boost::detail::lexical_cast_do_cast<std::string, double> *)v43,
                &v51);
              sub_1321760((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
              sub_134F3A0((int)(uintptr_t)(v44), (int)(uintptr_t)(&glotv3::errors::DETECTED_MONOTONIC_TIME), (int)(uintptr_t)(v43));
              sub_134F3A0((int)(uintptr_t)(v45), (int)(uintptr_t)(v44), (int)(uintptr_t)(&glotv3::system::HASHTAG));
              sub_134F3A0((int)(uintptr_t)(&v47), (int)(uintptr_t)(v45), (int)(uintptr_t)(v46));
              glotv3::Glotv3Logger::WriteLog(&v47);
              g4_std::string::Destroy(&v47);
              g4_std::string::Destroy(v45);
              g4_std::string::Destroy(v44);
              g4_std::string::Destroy(v43);
              g4_std::string::Destroy(v46);
            }
          }
          sub_18FE850((uint32_t *)v66, (int)(*((uint32_t *)v2 + 3297) + 52));
          v33 = *((uint32_t *)v2 + 3297);
          v26 = (double)v66[0] * 0.000000001;
          v39 = v26 - *(double *)(v33 + 28);
          v19 = sub_134C470((int)(uintptr_t)(&v52));
          *(double *)(v33 + 20) = (double)glotv3::Event::getKeyPairAsDouble(v19, &glotv3::Event::keyGameTime) + v39;
          *(double *)(*((uint32_t *)v2 + 3297) + 28) = v26;
          if ( *(uint8_t *)(*((uint32_t *)v2 + 3297) + 191) == 0 && *(uint8_t *)(*((uint32_t *)v2 + 3297) + 187) == 0 )
          {
            *(uint8_t *)(*((uint32_t *)v2 + 3297) + 191) = 1;
            v20 = sub_134C470((int)(uintptr_t)(&v52));
            *(double *)&v40 = glotv3::Event::getKeyPairAsDouble(v20, &glotv3::Event::keySessionTime);
            v21 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), G4_BITCAST<__m128d>(v40));
            __atomic_exchange_n(
              (volatile int32_t *)(*((uint32_t *)v2 + 3297) + 164),
              _mm_cvtsi128_si32(
                _mm_xor_si128(
                  _mm_cvttpd_epi32(_mm_sub_pd(G4_BITCAST<__m128d>(v40), _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v21))),
                  _mm_slli_epi32(G4_BITCAST<__m128i>(v21), 0x1Fu))),
              __ATOMIC_SEQ_CST);
          }
          if ( *(uint8_t *)(*((uint32_t *)v2 + 3297) + 192) == 0 && *(uint8_t *)(*((uint32_t *)v2 + 3297) + 187) == 0 )
          {
            *(uint8_t *)(*((uint32_t *)v2 + 3297) + 192) = 1;
            UTCAsSeconds = glotv3::Utils::GetUTCAsSeconds();
            if ( KeyPairAsUInt >= UTCAsSeconds )
              __atomic_exchange_n((volatile int32_t *)(*((uint32_t *)v2 + 3297) + 160), 0, __ATOMIC_SEQ_CST);
            else
              __atomic_exchange_n(
                (volatile int32_t *)(*((uint32_t *)v2 + 3297) + 160),
                UTCAsSeconds - KeyPairAsUInt,
                __ATOMIC_SEQ_CST);
          }
        }
        else
        {
          *(uint64_t *)(*((uint32_t *)v2 + 3297) + 20) = 0;
          *(uint64_t *)(*((uint32_t *)v2 + 3297) + 28) = 0;
          __atomic_exchange_n((volatile int32_t *)(*((uint32_t *)v2 + 3297) + 164), 0, __ATOMIC_SEQ_CST);
          __atomic_exchange_n((volatile int32_t *)(*((uint32_t *)v2 + 3297) + 160), 0, __ATOMIC_SEQ_CST);
          g4_std::string::construct_copy(v48, &glotv3::errors::GAMETIME_FILE_IS_BORKED);
          glotv3::EventOfError::s_OfType(&v56, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_size + 2, (int)(uintptr_t)(v48));
          v58 = (int)(uintptr_t)(v56);
          v59 = v57;
          if ( v57 != nullptr )
            __sync_add_and_fetch(v57 + 1, 1);
          glotv3::SingletonMutexedProcessor::QueueForWriting(v2, &v58, 0, 1);
          boost::detail::shared_count::Destroy(&v59);
          boost::detail::shared_count::Destroy(&v57);
          g4_std::string::Destroy(v48);
        }
        glotv3::Fs::TruncatePath((char **)&v42);
        glotv3::Reader::Destroy((glotv3::Reader::Self *)v99);
      }
      glotv3::Writer::Construct(&mutex, (int)(uintptr_t)(&v42));
      sub_18FE850((uint32_t *)v67, (int)(*((uint32_t *)v2 + 3297) + 52));
      v5 = *((uint32_t *)v2 + 3297);
      v69 = 1;
      v38 = (double)v67[0] * 0.000000001;
      v6 = *(double *)(v5 + 20);
      v70 = 0;
      v7 = v6 - *(double *)(v5 + 28);
      v71 = nullptr;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v72 = 2048;
      v74 = opNew(1u);
      v75 = v74;
      v29 = v72;
      v8 = (uint32_t *)(malloc(v72 + 12));
      v8[1] = 0;
      *v8 = v29;
      v8[2] = (uint32_t)(uintptr_t)(v71);
      v71 = v8;
      v68 = v38;
      v9 = sub_134C470((int)(uintptr_t)(&v52));
      glotv3::Event::addKeyPair(v9, &glotv3::Event::keySessionTime, (glotv3::EventValue::Self *)&v68);
      glotv3::EventValue::Destroy((void **)&v68);
      v77 = 1;
      v80 = 2048;
      v78 = 0;
      v79 = nullptr;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v82 = opNew(1u);
      v83 = v82;
      v30 = v80;
      v10 = (uint32_t *)(malloc(v80 + 12));
      v10[1] = 0;
      *v10 = v30;
      v10[2] = (uint32_t)(uintptr_t)(v79);
      v79 = v10;
      v76 = v7 + v38;
      v11 = sub_134C470((int)(uintptr_t)(&v52));
      glotv3::Event::addKeyPair(v11, &glotv3::Event::keyGameTime, (glotv3::EventValue::Self *)&v76);
      glotv3::EventValue::Destroy((void **)&v76);
      v12 = (double *)glotv3::Utils::GetUTCAsSeconds();
      v84[2] = (void *)(uintptr_t)3;
      v86 = 2048;
      v84[6] = nullptr;
      v85 = nullptr;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v34 = v12;
      v88 = opNew(1u);
      v89 = v88;
      v31 = v86;
      v13 = (uint32_t *)(malloc(v86 + 12));
      v13[1] = 0;
      *v13 = v31;
      v13[2] = (uint32_t)(uintptr_t)(v85);
      v85 = v13;
      v84[0] = v34;
      v14 = sub_134C470((int)(uintptr_t)(&v52));
      glotv3::Event::addKeyPair(
        v14,
        &glotv3::Event::keyPreviousTimeOnDevice,
        (glotv3::EventValue::Self *)v84);
      glotv3::EventValue::Destroy(v84);
      v27 = glotv3::Utils::RetrieveMonotonicTime();
      v94 = 2048;
      v91 = 1;
      v92 = 0;
      v93 = nullptr;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v96 = opNew(1u);
      v97 = v96;
      v32 = v94;
      v15 = (uint32_t *)(malloc(v94 + 12));
      v15[1] = 0;
      *v15 = v32;
      v15[2] = (uint32_t)(uintptr_t)(v93);
      v93 = v15;
      v90 = v27;
      v16 = sub_134C470((int)(uintptr_t)(&v52));
      glotv3::Event::addKeyPair(v16, &glotv3::Event::keyMonotonic, (glotv3::EventValue::Self *)&v90);
      glotv3::EventValue::Destroy((void **)&v90);
      *(double *)(*((uint32_t *)v2 + 3297) + 28) = v38;
      v60 = v52;
      v61 = v53;
      if ( v53 != nullptr )
        __sync_add_and_fetch(v53 + 1, 1);
      v35 = glotv3::Writer::WriteNext(&mutex, (glotv3::Event::Self **)(&v60));
      boost::detail::shared_count::Destroy(&v61);
      if ( v35 == 0 )
      {
        glotv3::Writer::Finish((glotv3::Writer::Self *)&mutex);
        glotv3::Fs::RemovePath((const char **)&v42);
        glotv3::Writer::Open(&mutex, &v42);
        g4_std::string::construct_copy(v49, &glotv3::errors::GAMETIME_FILE_CANNOT_BE_WRITTEN);
        glotv3::EventOfError::s_OfType(&v62, &reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_shndx, (int)(uintptr_t)(v49));
        v64 = (int)(uintptr_t)(v62);
        v65 = v63;
        if ( v63 != nullptr )
          __sync_add_and_fetch(v63 + 1, 1);
        glotv3::SingletonMutexedProcessor::QueueForWriting(v2, &v64, 0, 1);
        boost::detail::shared_count::Destroy(&v65);
        boost::detail::shared_count::Destroy(&v63);
        g4_std::string::Destroy(v49);
      }
      glotv3::Writer::Destroy((glotv3::Writer::Self *)&mutex);
    }
    else
    {
      g4_std::string::construct_copy(&v50, &glotv3::errors::OUT_OF_MEMORY);
      g4_std::string::append((int)(uintptr_t)(&v50), "double glotv3::SingletonMutexedProcessor::DetectGameTime()", 0x3Au);
      glotv3::Glotv3Logger::WriteLog(&v50);
      g4_std::string::Destroy(&v50);
    }
    boost::detail::shared_count::Destroy(&v53);
    g4_std::string::Destroy(&v42);
    v28 = *(double *)(*((uint32_t *)v2 + 3297) + 20);
    sub_1321760(v3);
    return v28;
  }
}


// ============================================================================
// Address:   0x135b6e0 (size: 1264 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor18DetectCurrentTokenEv
// Demangled: glotv3::SingletonMutexedProcessor::DetectCurrentToken(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::DetectCurrentToken(glotv3::SingletonMutexedProcessor::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v8;
  typedef int32_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef glotv3::Event::Self *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef glotv3::Event::Self *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef uint8_t _g4_t_v31[20];
  typedef void *_g4_t_v32[7];
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef pthread_mutex_t _g4_t_v38;
  typedef uint8_t _g4_t_v39[4384];
  enum : size_t {
    _g4_s0 = 8960u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v12)) > _g4_s3 ? (8u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v17)) > _g4_s8 ? (36u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v18)) > _g4_s9 ? (40u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v19)) > _g4_s10 ? (44u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v20)) > _g4_s11 ? (48u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v21)) > _g4_s12 ? (52u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v22)) > _g4_s13 ? (56u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v23)) > _g4_s14 ? (60u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v24)) > _g4_s15 ? (64u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v25)) > _g4_s16 ? (68u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v26)) > _g4_s17 ? (72u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v27)) > _g4_s18 ? (76u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v28)) > _g4_s19 ? (80u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v29)) > _g4_s20 ? (84u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v30)) > _g4_s21 ? (88u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v31)) > _g4_s22 ? (92u + sizeof(_g4_t_v31)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v32)) > _g4_s23 ? (112u + sizeof(_g4_t_v32)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v33)) > _g4_s24 ? (140u + sizeof(_g4_t_v33)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v34)) > _g4_s25 ? (144u + sizeof(_g4_t_v34)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v35)) > _g4_s26 ? (148u + sizeof(_g4_t_v35)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v36)) > _g4_s27 ? (152u + sizeof(_g4_t_v36)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v37)) > _g4_s28 ? (156u + sizeof(_g4_t_v37)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v38)) > _g4_s29 ? (160u + sizeof(_g4_t_v38)) : _g4_s29,
    _g4_s31 = (4508u + sizeof(_g4_t_v39)) > _g4_s30 ? (4508u + sizeof(_g4_t_v39)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 152u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4508u);

  mutex = (pthread_mutex_t *)((char *)self + 13408);
  do
    v2 = pthread_mutex_lock(mutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v31,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  g4_std::string::construct_copy(&v13, *(uint32_t *)self);
  g4_std::string::append_str(&v13, &glotv3::system::TOKENIZE_FILE);
  if ( glotv3::Fs::ExistsPathAndIsEmpty((const char **)&v13) )
    glotv3::Fs::RemovePath((const char **)&v13);
  sub_1358000(&v17);
  if ( v17 != 0 )
  {
    if ( glotv3::Fs::ExistsPathAndIsNotEmpty((const char **)&v13) )
    {
      glotv3::Reader::Construct((glotv3::Reader::Self *)v39, (int)(uintptr_t)(&v13));
      v19 = v17;
      v20 = v18;
      if ( v18 != nullptr )
        __sync_add_and_fetch(v18 + 1, 1);
      v12 = glotv3::Reader::ReadNext(v39, &v19);
      boost::detail::shared_count::Destroy(&v20);
      if ( v12 != 0 )
      {
        v8 = sub_134C470((int)(uintptr_t)(&v17));
        __atomic_exchange_n(
          (volatile int32_t *)(*((uint32_t *)self + 3297) + 172),
          glotv3::Event::getKeyPairAsUInt(v8, &glotv3::Event::keyToken),
          __ATOMIC_SEQ_CST);
      }
      else
      {
        __atomic_exchange_n((volatile int32_t *)(*((uint32_t *)self + 3297) + 172), 0, __ATOMIC_SEQ_CST);
        g4_std::string::construct_copy(v14, &glotv3::errors::TOKENIZE_FILE_IS_BORKED);
        glotv3::EventOfError::s_OfType(&v21, &reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_size, (int)(uintptr_t)(v14));
        v23 = (int)(uintptr_t)(v21);
        v24 = v22;
        if ( v22 != nullptr )
          __sync_add_and_fetch(v22 + 1, 1);
        glotv3::SingletonMutexedProcessor::QueueForWriting(self, &v23, 0, 1);
        boost::detail::shared_count::Destroy(&v24);
        boost::detail::shared_count::Destroy(&v22);
        g4_std::string::Destroy(v14);
      }
      glotv3::Reader::Destroy((glotv3::Reader::Self *)v39);
      glotv3::Fs::TruncatePath((char **)&v13);
    }
    else
    {
      glotv3::SingletonMutexedProcessor::RecoverTokenFromV2(self);
    }
    glotv3::Writer::Construct(&v38, (int)(uintptr_t)(&v13));
    v9 = __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)self + 3297) + 172), 1u);
    v32[2] = (void *)(uintptr_t)3;
    v32[6] = nullptr;
    v33 = nullptr;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v34 = 2048;
    v36 = opNew(1u);
    v37 = v36;
    v10 = v34;
    v4 = (uint32_t *)(malloc(v34 + 12));
    v4[1] = 0;
    *v4 = v10;
    v4[2] = (uint32_t)(uintptr_t)(v33);
    v33 = v4;
    v32[0] = (void *)(v9 + 1);
    v5 = sub_134C470((int)(uintptr_t)(&v17));
    glotv3::Event::addKeyPair(v5, &glotv3::Event::keyToken, (glotv3::EventValue::Self *)v32);
    glotv3::EventValue::Destroy(v32);
    v25 = v17;
    v26 = v18;
    if ( v18 != nullptr )
      __sync_add_and_fetch(v18 + 1, 1);
    v11 = glotv3::Writer::WriteNext(&v38, (glotv3::Event::Self **)(&v25));
    boost::detail::shared_count::Destroy(&v26);
    if ( v11 == 0 )
    {
      glotv3::Writer::Finish((glotv3::Writer::Self *)&v38);
      glotv3::Fs::RemovePath((const char **)&v13);
      glotv3::Writer::Open(&v38, &v13);
      g4_std::string::construct_copy(v15, &glotv3::errors::TOKENIZE_FILE_CANNOT_BE_WRITTEN);
      glotv3::EventOfError::s_OfType(&v27, &reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_info, (int)(uintptr_t)(v15));
      v29 = (int)(uintptr_t)(v27);
      v30 = v28;
      if ( v28 != nullptr )
        __sync_add_and_fetch(v28 + 1, 1);
      glotv3::SingletonMutexedProcessor::QueueForWriting(self, &v29, 0, 1);
      boost::detail::shared_count::Destroy(&v30);
      boost::detail::shared_count::Destroy(&v28);
      g4_std::string::Destroy(v15);
    }
    glotv3::Writer::Destroy((glotv3::Writer::Self *)&v38);
  }
  else
  {
    g4_std::string::construct_copy(&v16, &glotv3::errors::OUT_OF_MEMORY);
    g4_std::string::append((int)(uintptr_t)(&v16), "unsigned int glotv3::SingletonMutexedProcessor::DetectCurrentToken()", 0x44u);
    glotv3::Glotv3Logger::WriteLog(&v16);
    g4_std::string::Destroy(&v16);
  }
  v6 = *(uint32_t *)(*((uint32_t *)self + 3297) + 172);
  boost::detail::shared_count::Destroy(&v18);
  g4_std::string::Destroy(&v13);
  sub_1321760(mutex);
  return v6;
}


// ============================================================================
// Address:   0x135bbd0 (size: 1108 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor27SetAutomaticEventParametersEN5boost10shared_ptrINS_5EventEEE
// Demangled: glotv3::SingletonMutexedProcessor::SetAutomaticEventParameters(boost::shared_ptr<glotv3::Event>)
// ============================================================================
int glotv3::SingletonMutexedProcessor::SetAutomaticEventParameters(glotv3::TrackingManager::Self **a1, int a2)
{
  int v2;
  glotv3::Event::Self *v3;
  glotv3::Event::Self *v4;
  glotv3::Event::Self *v5;
  int v6;
  int v7;
  int v8;
  int result;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  void *v20;
  glotv3::Event::Self *v21;
  int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef void *_g4_t_CurrentSessionIdentifier;
  typedef double _g4_t_v26;
  typedef void *_g4_t_ConnectivityType;
  typedef int64_t _g4_t_v28;
  typedef uint8_t *_g4_t_v29;
  typedef int64_t _g4_t_v30[3];
  typedef double _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef double _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef void *_g4_t_v47[7];
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_CurrentSessionIdentifier)) > _g4_s2 ? (16u + sizeof(_g4_t_CurrentSessionIdentifier)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_ConnectivityType)) > _g4_s4 ? (28u + sizeof(_g4_t_ConnectivityType)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v29)) > _g4_s6 ? (52u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v30)) > _g4_s7 ? (56u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v31)) > _g4_s8 ? (80u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v32)) > _g4_s9 ? (88u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v33)) > _g4_s10 ? (104u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v34)) > _g4_s11 ? (108u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v35)) > _g4_s12 ? (112u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v36)) > _g4_s13 ? (116u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v37)) > _g4_s14 ? (120u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v38)) > _g4_s15 ? (124u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v39)) > _g4_s16 ? (128u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (136u + sizeof(_g4_t_v40)) > _g4_s17 ? (136u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v41)) > _g4_s18 ? (152u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v42)) > _g4_s19 ? (156u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v43)) > _g4_s20 ? (160u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v44)) > _g4_s21 ? (164u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v45)) > _g4_s22 ? (168u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v46)) > _g4_s23 ? (172u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v47)) > _g4_s24 ? (176u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (204u + sizeof(_g4_t_v48)) > _g4_s25 ? (204u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (208u + sizeof(_g4_t_v49)) > _g4_s26 ? (208u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (212u + sizeof(_g4_t_v50)) > _g4_s27 ? (212u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (216u + sizeof(_g4_t_v51)) > _g4_s28 ? (216u + sizeof(_g4_t_v51)) : _g4_s28,
    _g4_s30 = (220u + sizeof(_g4_t_v52)) > _g4_s29 ? (220u + sizeof(_g4_t_v52)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_CurrentSessionIdentifier &CurrentSessionIdentifier = *reinterpret_cast<_g4_t_CurrentSessionIdentifier *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_ConnectivityType &ConnectivityType = *reinterpret_cast<_g4_t_ConnectivityType *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 152u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 156u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 164u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 168u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 176u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 204u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 208u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 212u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 216u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 220u);

  ConnectivityType = (void *)glotv3::Porting::GetConnectivityType();
  sub_18FE850((uint32_t *)v30, (int)(*((uint32_t *)a1 + 3297) + 52));
  v28 = v30[0];
  v2 = sub_134C470(a2);
  if ( !glotv3::Event::hasKeyPair(v2, &glotv3::Event::keySessionTime) )
  {
    v32 = 1;
    v33 = 0;
    v34 = nullptr;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v35 = 2048;
    v37 = opNew(1u);
    v38 = v37;
    v23 = v35;
    v10 = (uint32_t *)(malloc(v35 + 12));
    *v10 = v23;
    v10[2] = (uint32_t)(uintptr_t)(v34);
    v10[1] = 0;
    v34 = v10;
    v31 = (double)v28 * 0.000000001;
    v11 = sub_134C470(a2);
    glotv3::Event::addKeyPair(v11, &glotv3::Event::keySessionTime, (glotv3::EventValue::Self *)&v31);
    glotv3::EventValue::Destroy((void **)&v31);
  }
  v3 = (glotv3::Event::Self *)sub_134C470(a2);
  if ( !glotv3::Event::hasConnectivity(v3) )
  {
    v22 = sub_134C470(a2);
    glotv3::Event::setConnectivity(v22, ConnectivityType);
  }
  v4 = (glotv3::Event::Self *)sub_134C470(a2);
  if ( !glotv3::Event::hasToken(v4) )
  {
    v20 = (void *)glotv3::SingletonMutexedProcessor::DetectCurrentToken((glotv3::SingletonMutexedProcessor::Self *)a1);
    v21 = (glotv3::Event::Self *)sub_134C470(a2);
    glotv3::Event::setToken(v21, v20);
  }
  v5 = (glotv3::Event::Self *)sub_134C470(a2);
  if ( !glotv3::Event::hasGameTime(v5) )
  {
    v26 = glotv3::SingletonMutexedProcessor::DetectGameTime(v6, (glotv3::SingletonMutexedProcessor::Self *)a1);
    v40 = 1;
    v41 = 0;
    v42 = nullptr;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v43 = 2048;
    v15 = opNew(1u);
    v16 = v43;
    v45 = v15;
    v46 = v15;
    v17 = (uint32_t *)(malloc(v43 + 12));
    v18 = v42;
    *v17 = v16;
    v17[2] = (uint32_t)(uintptr_t)(v18);
    v17[1] = 0;
    v42 = v17;
    v39 = v26;
    v19 = sub_134C470(a2);
    glotv3::Event::addKeyPair(v19, &glotv3::Event::keyGameTime, (glotv3::EventValue::Self *)&v39);
    glotv3::EventValue::Destroy((void **)&v39);
  }
  v7 = sub_134C470(a2);
  if ( !glotv3::Event::hasKeyPair(v7, &glotv3::Event::keySessionId) )
  {
    CurrentSessionIdentifier = (void *)glotv3::TrackingManager::GetCurrentSessionIdentifier(a1[3297]);
    v47[2] = (void *)(uintptr_t)3;
    v47[6] = nullptr;
    v48 = nullptr;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v49 = 2048;
    v51 = opNew(1u);
    v52 = v51;
    v24 = v49;
    v13 = (uint32_t *)(malloc(v49 + 12));
    v13[1] = 0;
    *v13 = v24;
    v13[2] = (uint32_t)(uintptr_t)(v48);
    v48 = v13;
    v47[0] = CurrentSessionIdentifier;
    v14 = sub_134C470(a2);
    glotv3::Event::addKeyPair(v14, &glotv3::Event::keySessionId, (glotv3::EventValue::Self *)v47);
    glotv3::EventValue::Destroy(v47);
  }
  v8 = sub_134C470(a2);
  result = glotv3::Event::hasKeyPair(v8, &glotv3::Event::keyGameVersion);
  if ( (uint8_t)result == 0 )
  {
    glotv3::TrackingManager::GetGameVersionString((glotv3::TrackingManager::Self *)&v29, (int)(uintptr_t)(a1[3297]));
    v12 = sub_134C470(a2);
    glotv3::Event::addKeyPair(v12, &glotv3::Event::keyGameVersion, &v29);
    return ((g4_std::string::Destroy(&v29)), (int)0);
  }
  return result;
}


// ============================================================================
// Address:   0x135c030 (size: 5801 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor11AsyncWriterEv
// Demangled: glotv3::SingletonMutexedProcessor::AsyncWriter(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::AsyncWriter(glotv3::SingletonMutexedProcessor::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v1;
  pthread_mutex_t *v2;
  int v3;
  pthread_mutex_t *current_thread_data;
  pthread_mutex_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  pthread_mutex_t *v10;
  int v11;
  int v12;
  int v13;
  glotv3::Event::Self *v14;
  glotv3::Event::Self *v15;
  int v16;
  int v17;
  glotv3::DNSClient::Self *v18;
  int v19;
  char v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v28;
  glotv3::Event::Self *v29;
  glotv3::Event::Self *v30;
  char v31; // di
  glotv3::Event::Self *v32;
  int EventType;
  int v34;
  glotv3::Event::Self *v35;
  int *v36;
  int v37;
  pthread_mutex_t *v38;
  pthread_mutex_t *address;
  void **v40;
  uint8_t *v41;
  uint32_t *owner;
  pthread_mutex_t *v43;
  unsigned int nusers;
  pthread_cond_t *v45;
  pthread_mutex_t **lock;
  pthread_mutex_t *v47;
  uint32_t *kind;
  int *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int *v62;
  int v63;
  unsigned int count;
  int v65;
  int v66;
  typedef boost::detail::Self *_g4_t_v67;
  typedef boost::this_thread::Self *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef pthread_mutex_t *_g4_t_v71;
  typedef pthread_mutex_t *_g4_t_v72;
  typedef pthread_mutex_t *_g4_t_v73;
  typedef pthread_mutex_t *_g4_t_v74;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef char _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_HasConnectivity;
  typedef char _g4_t_v79;
  typedef pthread_mutex_t *_g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef pthread_mutex_t *_g4_t_v83;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v84;
  typedef char _g4_t_is_continuation;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v86;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v87;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v88;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v89;
  typedef int _g4_t_v90[4];
  typedef int _g4_t_v91[4];
  typedef int _g4_t_v92[4];
  typedef int _g4_t_v93[4];
  typedef int _g4_t_v94[4];
  typedef char _g4_t_v95[4];
  typedef char _g4_t_v96[4];
  typedef char _g4_t_v97[4];
  typedef char _g4_t_v98[4];
  typedef char _g4_t_v99[4];
  typedef char _g4_t_v100[4];
  typedef char _g4_t_v101[4];
  typedef char _g4_t_v102[4];
  typedef int _g4_t_v103;
  typedef uint32_t _g4_t_v104[3];
  typedef int _g4_t_v105;
  typedef int _g4_t_v106[3];
  typedef int _g4_t_v107;
  typedef int _g4_t_v108[3];
  typedef int _g4_t_v109;
  typedef int _g4_t_v110[3];
  typedef int _g4_t_v111;
  typedef int _g4_t_v112[3];
  typedef struct epoll_event _g4_t_event;
  typedef uint32_t (*_g4_t_v114)(glotv3::SingletonMutexedProcessor::Self *);
  typedef int _g4_t_v115;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v116;
  typedef char _g4_t_v117[20];
  typedef void (**_g4_t_v118)(boost::condition_error::Self *);
  typedef char _g4_t_v119[20];
  typedef char _g4_t_v120[20];
  typedef char _g4_t_v121[20];
  typedef char _g4_t_v122[20];
  typedef char _g4_t_v123[20];
  typedef char _g4_t_v124[20];
  typedef char _g4_t_v125[20];
  typedef char _g4_t_v126[20];
  typedef char _g4_t_v127[20];
  typedef char _g4_t_v128[20];
  typedef uint32_t _g4_t_v129[11];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v67)) > _g4_s0 ? (0u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v68)) > _g4_s1 ? (0u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v69)) > _g4_s2 ? (8u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v70)) > _g4_s3 ? (32u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v71)) > _g4_s4 ? (36u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v72)) > _g4_s5 ? (36u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v73)) > _g4_s6 ? (36u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v74)) > _g4_s7 ? (40u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_mutex)) > _g4_s8 ? (44u + sizeof(_g4_t_mutex)) : _g4_s8,
    _g4_s10 = (49u + sizeof(_g4_t_v76)) > _g4_s9 ? (49u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v77)) > _g4_s10 ? (50u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_HasConnectivity)) > _g4_s11 ? (51u + sizeof(_g4_t_HasConnectivity)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v79)) > _g4_s12 ? (52u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v80)) > _g4_s13 ? (56u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v81)) > _g4_s14 ? (56u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v82)) > _g4_s15 ? (56u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v83)) > _g4_s16 ? (60u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v84)) > _g4_s17 ? (60u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_is_continuation)) > _g4_s18 ? (60u + sizeof(_g4_t_is_continuation)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v86)) > _g4_s19 ? (60u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v87)) > _g4_s20 ? (60u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v88)) > _g4_s21 ? (60u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v89)) > _g4_s22 ? (60u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v90)) > _g4_s23 ? (64u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v91)) > _g4_s24 ? (80u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v92)) > _g4_s25 ? (96u + sizeof(_g4_t_v92)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v93)) > _g4_s26 ? (112u + sizeof(_g4_t_v93)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v94)) > _g4_s27 ? (128u + sizeof(_g4_t_v94)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v95)) > _g4_s28 ? (144u + sizeof(_g4_t_v95)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v96)) > _g4_s29 ? (148u + sizeof(_g4_t_v96)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v97)) > _g4_s30 ? (152u + sizeof(_g4_t_v97)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v98)) > _g4_s31 ? (156u + sizeof(_g4_t_v98)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v99)) > _g4_s32 ? (160u + sizeof(_g4_t_v99)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v100)) > _g4_s33 ? (164u + sizeof(_g4_t_v100)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v101)) > _g4_s34 ? (168u + sizeof(_g4_t_v101)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v102)) > _g4_s35 ? (172u + sizeof(_g4_t_v102)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v103)) > _g4_s36 ? (176u + sizeof(_g4_t_v103)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v104)) > _g4_s37 ? (180u + sizeof(_g4_t_v104)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v105)) > _g4_s38 ? (192u + sizeof(_g4_t_v105)) : _g4_s38,
    _g4_s40 = (196u + sizeof(_g4_t_v106)) > _g4_s39 ? (196u + sizeof(_g4_t_v106)) : _g4_s39,
    _g4_s41 = (208u + sizeof(_g4_t_v107)) > _g4_s40 ? (208u + sizeof(_g4_t_v107)) : _g4_s40,
    _g4_s42 = (212u + sizeof(_g4_t_v108)) > _g4_s41 ? (212u + sizeof(_g4_t_v108)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v109)) > _g4_s42 ? (224u + sizeof(_g4_t_v109)) : _g4_s42,
    _g4_s44 = (228u + sizeof(_g4_t_v110)) > _g4_s43 ? (228u + sizeof(_g4_t_v110)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v111)) > _g4_s44 ? (240u + sizeof(_g4_t_v111)) : _g4_s44,
    _g4_s46 = (244u + sizeof(_g4_t_v112)) > _g4_s45 ? (244u + sizeof(_g4_t_v112)) : _g4_s45,
    _g4_s47 = (256u + sizeof(_g4_t_event)) > _g4_s46 ? (256u + sizeof(_g4_t_event)) : _g4_s46,
    _g4_s48 = (268u + sizeof(_g4_t_v114)) > _g4_s47 ? (268u + sizeof(_g4_t_v114)) : _g4_s47,
    _g4_s49 = (272u + sizeof(_g4_t_v115)) > _g4_s48 ? (272u + sizeof(_g4_t_v115)) : _g4_s48,
    _g4_s50 = (276u + sizeof(_g4_t_v116)) > _g4_s49 ? (276u + sizeof(_g4_t_v116)) : _g4_s49,
    _g4_s51 = (284u + sizeof(_g4_t_v117)) > _g4_s50 ? (284u + sizeof(_g4_t_v117)) : _g4_s50,
    _g4_s52 = (304u + sizeof(_g4_t_v118)) > _g4_s51 ? (304u + sizeof(_g4_t_v118)) : _g4_s51,
    _g4_s53 = (324u + sizeof(_g4_t_v119)) > _g4_s52 ? (324u + sizeof(_g4_t_v119)) : _g4_s52,
    _g4_s54 = (344u + sizeof(_g4_t_v120)) > _g4_s53 ? (344u + sizeof(_g4_t_v120)) : _g4_s53,
    _g4_s55 = (364u + sizeof(_g4_t_v121)) > _g4_s54 ? (364u + sizeof(_g4_t_v121)) : _g4_s54,
    _g4_s56 = (384u + sizeof(_g4_t_v122)) > _g4_s55 ? (384u + sizeof(_g4_t_v122)) : _g4_s55,
    _g4_s57 = (404u + sizeof(_g4_t_v123)) > _g4_s56 ? (404u + sizeof(_g4_t_v123)) : _g4_s56,
    _g4_s58 = (424u + sizeof(_g4_t_v124)) > _g4_s57 ? (424u + sizeof(_g4_t_v124)) : _g4_s57,
    _g4_s59 = (444u + sizeof(_g4_t_v125)) > _g4_s58 ? (444u + sizeof(_g4_t_v125)) : _g4_s58,
    _g4_s60 = (464u + sizeof(_g4_t_v126)) > _g4_s59 ? (464u + sizeof(_g4_t_v126)) : _g4_s59,
    _g4_s61 = (484u + sizeof(_g4_t_v127)) > _g4_s60 ? (484u + sizeof(_g4_t_v127)) : _g4_s60,
    _g4_s62 = (504u + sizeof(_g4_t_v128)) > _g4_s61 ? (504u + sizeof(_g4_t_v128)) : _g4_s61,
    _g4_s63 = (524u + sizeof(_g4_t_v129)) > _g4_s62 ? (524u + sizeof(_g4_t_v129)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 0u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 36u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 49u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 50u);
  _g4_t_HasConnectivity &HasConnectivity = *reinterpret_cast<_g4_t_HasConnectivity *>(_g4_sf + 51u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_is_continuation &is_continuation = *reinterpret_cast<_g4_t_is_continuation *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 60u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 60u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 64u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 80u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 96u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 112u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 128u);
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
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 192u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 196u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 208u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 212u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 224u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 228u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 240u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 244u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 256u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 268u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 272u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 276u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 284u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 304u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 324u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 344u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 364u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 384u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 404u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 424u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 444u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 464u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 484u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 504u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 524u);

  v129[7] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v74 = (pthread_mutex_t *)((char *)self + 13236);
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13236 )
    sub_134E404();
  v2 = (pthread_mutex_t *)((char *)self + 13236);
  do
    v3 = pthread_mutex_lock(v2);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    boost::lock_error::Construct((boost::lock_error::Self *)v117, v3, "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  if ( *((uint8_t *)v1 + 13334) == 0 )
  {
    mutex = (pthread_mutex_t *)((char *)v1 + 13244);
    if ( *((uint8_t *)v1 + 13332) == 0 )
    {
      do
      {
        current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data(v67);
        v83 = current_thread_data;
        if ( current_thread_data != nullptr && ((g4_glibc_pthread_mutex_t *)(current_thread_data))[4].__size[16] != 0 )
        {
          v80 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1)));
          v5 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1)));
          do
            v6 = pthread_mutex_lock(v5);
          while ( v6 == 4 );
          if ( v6 != 0 )
          {
            boost::lock_error::Construct(
              (boost::lock_error::Self *)v119,
              v6,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          ((g4_glibc_pthread_mutex_t *)(v83))[3].__owner = (int)(uintptr_t)(mutex);
          ((g4_glibc_pthread_mutex_t *)(v83))[3].__kind = (int)(uintptr_t)(v1) + 13248;
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              196,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          sub_1321760(v80);
          v81 = 1;
        }
        else
        {
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              200,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          v81 = 0;
        }
        sub_1321760(v74);
        do
          v7 = pthread_cond_wait((pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1), mutex);
        while ( v7 == 4 );
        v8 = v7;
        if ( v81 != 0 )
        {
          if ( pthread_mutex_unlock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              207,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
          do
            v9 = pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v83) + (24 * (1))));
          while ( v9 == 4 );
          if ( v9 != 0 )
          {
            boost::lock_error::Construct(
              (boost::lock_error::Self *)v120,
              v9,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          ((g4_glibc_pthread_mutex_t *)(v83))[3].__owner = 0;
          ((g4_glibc_pthread_mutex_t *)(v83))[3].__kind = 0;
          sub_1321760(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v83) + (24 * (1))));
          v84 = v1;
          v10 = v74;
        }
        else
        {
          if ( pthread_mutex_unlock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              214,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
          v84 = v1;
          v10 = v74;
        }
        do
          v11 = pthread_mutex_lock(v10);
        while ( v11 == 4 );
        v1 = v84;
        if ( v11 != 0 )
        {
          boost::lock_error::Construct(
            (boost::lock_error::Self *)v121,
            v11,
            "boost: mutex lock failed in pthread_mutex_lock");
          std::terminate();
        }
        boost::this_thread::interruption_point(v68);
        if ( v8 != 0 )
        {
          v66 = (int)(uintptr_t)(sub_18F81E0());
          boost::system::system_error::Construct(
            &v118,
            v8,
            v66,
            "boost::condition_variable::wait failed in pthread_cond_wait");
          v118 = (void (**)(boost::condition_error::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093D18));
          std::terminate();
        }
        if ( *((uint8_t *)v84 + 13332) != 0 )
          break;
LABEL_27:
        v12 = *((uint32_t *)v1 + 3319);
        if ( v12 != *((uint32_t *)v1 + 3315) )
        {
          while ( 1 )
          {
            if ( *((uint32_t *)v1 + 3320) == v12 )
              v12 = *(uint32_t *)(*((uint32_t *)v1 + 3322) - 4) + 512;
            v103 = *(uint32_t *)(v12 - 8);
            v13 = *(uint32_t *)(v12 - 4);
            v104[0] = v13;
            if ( v13 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
            v14 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getEventType(v14) == 6 )
              goto LABEL_67;
            v15 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getEventType(v15) == 0 )
            {
              v16 = *((uint32_t *)v1 + 3319);
              if ( v16 == *((uint32_t *)v1 + 3320) )
              {
                opDelete(*((void **)v1 + 3319));
                v49 = (int *)(*((uint32_t *)v1 + 3322) - 4);
                *((uint32_t *)v1 + 3322) = (uint32_t)(uintptr_t)(v49);
                v50 = *v49;
                *((uint32_t *)v1 + 3320) = *v49;
                *((uint32_t *)v1 + 3321) = v50 + 512;
                *((uint32_t *)v1 + 3319) = v50 + 504;
                boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v50 + 508));
              }
              else
              {
                *((uint32_t *)v1 + 3319) = v16 - 8;
                boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v16 - 4));
              }
              v77 = 1;
              if ( *((uint8_t *)v1 + 13420) != 0 )
                goto LABEL_37;
              v38 = *(pthread_mutex_t **)(*((uint32_t *)v1 + 3297) + 84);
              v114 = (uint32_t (*)(glotv3::SingletonMutexedProcessor::Self *))(uintptr_t)(glotv3::SingletonMutexedProcessor::AsyncRecovery);
              v115 = 0;
              v116 = v1;
              is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v114);
              address = (pthread_mutex_t *)_emutls_get_address(&unk_20BABFC);
              if ( ((int32_t *)(address))[0] != 0 )
              {
                v40 = *(void ***)(((int32_t *)(address))[0] + 4);
                if ( v40 != nullptr )
                {
                  v41 = (uint8_t *)(*v40);
                  if ( *v40 != nullptr )
                  {
                    *v40 = nullptr;
                    if ( *v41 > 0x17u )
                    {
                      v41[24] = *v41;
LABEL_90:
                      *(uint32_t *)v41 = 0;
                      *((uint32_t *)v41 + 1) = (uint32_t)(uintptr_t)((void (*)(int, uint32_t *))boost::asio::detail::completion_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor::Self*>>>>::do_complete);
                      *((uint32_t *)v41 + 2) = 0;
                      *((uint32_t *)v41 + 3) = (uint32_t)(uintptr_t)(v114);
                      *((uint32_t *)v41 + 4) = v115;
                      *((uint32_t *)v41 + 5) = (uint32_t)(uintptr_t)(v116);
                      if ( ((uint8_t *)(v38))[20] != 0 || is_continuation != 0 )
                      {
                        lock = (pthread_mutex_t **)((int32_t *)(address))[0];
                        if ( ((int32_t *)(address))[0] != 0 )
                        {
                          while ( v38 != *lock )
                          {
                            lock = (pthread_mutex_t **)lock[2];
                            if ( lock == nullptr )
                              goto LABEL_92;
                          }
                          v47 = lock[1];
                          if ( v47 != nullptr )
                          {
                            ++((int32_t *)(v47))[4];
                            *(uint32_t *)v41 = 0;
                            kind = (uint32_t *)((int32_t *)(v47))[3];
                            if ( kind != nullptr )
                            {
                              *kind = (uint32_t)(uintptr_t)(v41);
                              v77 = 0;
                              ((int32_t *)(v47))[3] = (int)(uintptr_t)(v41);
                            }
                            else
                            {
                              ((int32_t *)(v47))[3] = (int)(uintptr_t)(v41);
                              ((int32_t *)(v47))[2] = (int)(uintptr_t)(v41);
                              v77 = 0;
                            }
                            goto LABEL_37;
                          }
                        }
                      }
LABEL_92:
                      __sync_fetch_and_add(&((g4_glibc_pthread_mutex_t *)(v38))[2].__lock, 1u);
                      v70 = (uint32_t *)(v41);
                      pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v38) + (24 * (1))));
                      *v70 = 0;
                      owner = (uint32_t *)((g4_glibc_pthread_mutex_t *)(v38))[2].__owner;
                      v43 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v38) + (24 * (1)));
                      if ( owner != nullptr )
                      {
                        *owner = (uint32_t)(uintptr_t)(v70);
                        nusers = ((g4_glibc_pthread_mutex_t *)(v38))[2].__nusers;
                        ((g4_glibc_pthread_mutex_t *)(v38))[2].__owner = (int)(uintptr_t)(v70);
                        if ( nusers != 0 )
                        {
LABEL_94:
                          ((g4_glibc_pthread_mutex_t *)(v38))[2].__nusers = *(uint32_t *)(nusers + 20);
                          v45 = *(pthread_cond_t **)(nusers + 4);
                          *(uint32_t *)(nusers + 20) = 0;
                          ((uint8_t *)(v45))[4] = 1;
                          pthread_mutex_unlock(v43);
                          pthread_cond_signal(v45);
                          v77 = 0;
LABEL_37:
                          __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)v1 + 3297) + 176), 1u);
                          v17 = *((uint32_t *)v1 + 3297);
                          v18 = *(glotv3::DNSClient::Self **)(v17 + 140);
                          if ( v18 == nullptr )
                          {
                            __assert2(
                              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                              653,
                              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const"
                              " [with T = glotv3::DNSClient::Self, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
                              "px != 0");
                            v18 = *(glotv3::DNSClient::Self **)(v17 + 140);
                          }
                          HasConnectivity = glotv3::DNSClient::HasConnectivity(v18);
                          v19 = *((uint32_t *)v1 + 3297);
                          v20 = *(uint8_t *)(v19 + 194);
                          v21 = *(uint8_t *)(v19 + 184);
                          v82 = v20 ^ 1;
                          v79 = *((uint8_t *)v1 + 13421) ^ 1;
                          v76 = v21;
                          if ( HasConnectivity != 0 && v82 != 0 && v21 != 0 && v79 != 0 && v77 != 0 )
                          {
                            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_FIRED);
                            do
                              v60 = pthread_mutex_trylock((pthread_mutex_t *)((char *)v1 + 13336));
                            while ( v60 == 4 );
                            if ( v60 != 0 )
                            {
                              v61 = *((uint32_t *)v1 + 3297);
                              if ( *(uint8_t *)(v61 + 194) != 0 )
                              {
                                v73 = *(pthread_mutex_t **)(v61 + 176);
                                glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(v95), (unsigned int)(uintptr_t)(v73));
                                g4_std::string::construct_copy(v96, &glotv3::errors::TIMER_WAS_BLOCKED);
                                g4_std::string::append_str(v96, v95);
                                glotv3::Glotv3Logger::WriteLog(v96);
                                g4_std::string::Destroy(v96);
                                g4_std::string::Destroy(v95);
                                if ( v73 == (pthread_mutex_t *)(10 * ((unsigned int)(uintptr_t)(v73) / 0xA)) )
                                  *(uint8_t *)(*((uint32_t *)v1 + 3297) + 194) = 0;
                              }
                              else
                              {
                                glotv3::Glotv3Logger::WriteLog(&glotv3::errors::ACQUIRED_NETWORK_LOCK_FAILED);
                              }
                            }
                            else
                            {
                              glotv3::Glotv3Logger::WriteLog(&glotv3::errors::ACQUIRED_NETWORK_LOCK);
                              if ( *((uint8_t *)v1 + 13417) == 0 )
                              {
                                if ( *((uint8_t *)v1 + 13422) != 0 )
                                  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::SENDING_IS_BLOCKED_BY_ETS_DELAY);
                                else
                                  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::SENDING_IS_BLOCKED);
                              }
                              if ( *((uint8_t *)v1 + 13417) != 0
                                && (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 24) == 0 )
                              {
                                v87 = (glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 12);
                                if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v1 + 12) != 0 )
                                {
                                  glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 36));
                                  glotv3::Fs::RenamePath(v87, (char *)v1 + 24);
                                  glotv3::Writer::Open((char *)v1 + 36, v87);
                                }
                              }
                              if ( *((uint8_t *)v1 + 13417) != 0
                                && (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 28) == 0 )
                              {
                                v89 = (glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 16);
                                if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v1 + 16) != 0 )
                                {
                                  glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 4384));
                                  glotv3::Fs::RenamePath(v89, (char *)v1 + 28);
                                  glotv3::Writer::Open((char *)v1 + 4384, v89);
                                }
                              }
                              if ( *((uint8_t *)v1 + 13417) != 0
                                && (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 32) == 0 )
                              {
                                v88 = (glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 20);
                                if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v1 + 20) != 0 )
                                {
                                  glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 8732));
                                  glotv3::Fs::RenamePath(v88, (char *)v1 + 32);
                                  glotv3::Writer::Open((char *)v1 + 8732, v88);
                                }
                              }
                              *((uint8_t *)v1 + 13393) = 1;
                              boost::condition_variable::notify_one(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (556))));
                              sub_1321760((char *)v1 + 13336);
                            }
                          }
                          else
                          {
                            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_NOT_FIRED);
                            do
                              v22 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v22 == 4 );
                            if ( v22 != 0 )
                            {
                              boost::lock_error::Construct(
                                (boost::lock_error::Self *)v122,
                                v22,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v90[0] = (int)(uintptr_t)(&dword_213B814);
                            LOBYTE(v114) = HasConnectivity + 48;
                            sub_193A9B0((int)(uintptr_t)(v90), 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            g4_std::string::construct_copy(v97, &glotv3::errors::DETECTED_CONNECTIVITY);
                            g4_std::string::append_str(v97, v90);
                            glotv3::Glotv3Logger::WriteLog(v97);
                            g4_std::string::Destroy(v97);
                            g4_std::string::Destroy(v90);
                            do
                              v23 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v23 == 4 );
                            if ( v23 != 0 )
                            {
                              boost::lock_error::Construct(
                                (boost::lock_error::Self *)v123,
                                v23,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v91[0] = (int)(uintptr_t)(&dword_213B814);
                            LOBYTE(v114) = v82 + 48;
                            sub_193A9B0((int)(uintptr_t)(v91), 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            g4_std::string::construct_copy(v98, &glotv3::errors::DETECTED_NETWORK_OVERWHELMED);
                            g4_std::string::append_str(v98, v91);
                            glotv3::Glotv3Logger::WriteLog(v98);
                            g4_std::string::Destroy(v98);
                            g4_std::string::Destroy(v91);
                            do
                              v24 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v24 == 4 );
                            if ( v24 != 0 )
                            {
                              boost::lock_error::Construct(
                                (boost::lock_error::Self *)v124,
                                v24,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v92[0] = (int)(uintptr_t)(&dword_213B814);
                            LOBYTE(v114) = v76 + 48;
                            sub_193A9B0((int)(uintptr_t)(v92), 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            g4_std::string::construct_copy(v99, &glotv3::errors::DETECTED_ETS_RETRIEVED_FROM_GAIA);
                            g4_std::string::append_str(v99, v92);
                            glotv3::Glotv3Logger::WriteLog(v99);
                            g4_std::string::Destroy(v99);
                            g4_std::string::Destroy(v92);
                            do
                              v25 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v25 == 4 );
                            if ( v25 != 0 )
                            {
                              boost::lock_error::Construct(
                                (boost::lock_error::Self *)v125,
                                v25,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v93[0] = (int)(uintptr_t)(&dword_213B814);
                            LOBYTE(v114) = v79 + 48;
                            sub_193A9B0((int)(uintptr_t)(v93), 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            g4_std::string::construct_copy(v100, &glotv3::errors::DETECTED_NOT_RECOVERING);
                            g4_std::string::append_str(v100, v93);
                            glotv3::Glotv3Logger::WriteLog(v100);
                            g4_std::string::Destroy(v100);
                            g4_std::string::Destroy(v93);
                            do
                              v26 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v26 == 4 );
                            if ( v26 != 0 )
                            {
                              boost::lock_error::Construct(
                                (boost::lock_error::Self *)v126,
                                v26,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v94[0] = (int)(uintptr_t)(&dword_213B814);
                            LOBYTE(v114) = v77 + 48;
                            sub_193A9B0((int)(uintptr_t)(v94), 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            g4_std::string::construct_copy(v101, &glotv3::errors::DETECTED_TIMER_FOR_RECOVERY_NOT_FIRED);
                            g4_std::string::append_str(v101, v94);
                            glotv3::Glotv3Logger::WriteLog(v101);
                            g4_std::string::Destroy(v101);
                            g4_std::string::Destroy(v94);
                          }
                          goto LABEL_60;
                        }
                      }
                      else
                      {
                        nusers = ((g4_glibc_pthread_mutex_t *)(v38))[2].__nusers;
                        ((g4_glibc_pthread_mutex_t *)(v38))[2].__owner = (int)(uintptr_t)(v70);
                        ((g4_glibc_pthread_mutex_t *)(v38))[2].__count = (unsigned int)(uintptr_t)(v70);
                        if ( nusers != 0 )
                          goto LABEL_94;
                      }
                      if ( ((g4_glibc_pthread_mutex_t *)(v38))[1].__size[20] == 0 )
                      {
                        count = ((g4_glibc_pthread_mutex_t *)(v38))[1].__count;
                        if ( count != 0 )
                        {
                          ((g4_glibc_pthread_mutex_t *)(v38))[1].__size[20] = 1;
                          event.data.u64 = count + 28;
                          v69 = *(uint32_t *)(count + 28);
                          v65 = *(uint32_t *)(count + 36);
                          event.events = 0x80000009;
                          epoll_ctl(v65, 3, v69, &event);
                          v43 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v38) + (24 * (1)));
                        }
                      }
                      pthread_mutex_unlock(v43);
                      v77 = 0;
                      goto LABEL_37;
                    }
                    v71 = address;
                    opDelete(v41);
                    address = v71;
                  }
                }
              }
              v72 = address;
              v51 = opNew(0x19u);
              *(uint8_t *)(v51 + 24) = 24;
              v41 = (uint8_t *)v51;
              address = v72;
              goto LABEL_90;
            }
            v29 = (glotv3::Event::Self *)sub_134C470();
            if ( (unsigned int)(glotv3::Event::getEventType(v29) - 2) <= 3 )
              break;
            v30 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getEventType(v30) != 1 )
            {
              v31 = 1;
              v32 = (glotv3::Event::Self *)sub_134C470();
              EventType = glotv3::Event::getEventType(v32);
              if ( (uint8_t)glotv3::SingletonMutexedProcessor::IsBatched(v1, EventType) != 0 )
              {
                v31 = 0;
                v56 = sub_134C470();
                if ( (uint8_t)glotv3::Event::hasKeyPair(v56, &glotv3::Event::keyGameVersion) == 0 )
                {
                  glotv3::TrackingManager::GetGameVersionString((glotv3::TrackingManager::Self *)v102);
                  v57 = sub_134C470();
                  glotv3::Event::addKeyPair(v57, &glotv3::Event::keyGameVersion, v102);
                  g4_std::string::Destroy(v102);
                }
              }
              v34 = sub_134C470();
              if ( (uint8_t)glotv3::Event::hasKeyPair(v34, &glotv3::Event::keyPromotedBatch) != 0 )
              {
                v31 = 1;
                v58 = sub_134C470();
                glotv3::Event::setPriority(v58, 1);
              }
              v35 = (glotv3::Event::Self *)sub_134C470();
              if ( glotv3::Event::getEventType(v35) != 51885
                || (v59 = sub_134C470(),
                    glotv3::Event::getKeyPairAsUInt(v59, &glotv3::EventOfError::k_KeyErrorTrackerId) != 131765) )
              {
                if ( v31 != 0 )
                {
                  v107 = v103;
                  v108[0] = v104[0];
                  if ( v104[0] != 0 )
                    __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
                  glotv3::SingletonMutexedProcessor::SetAutomaticEventParameters((glotv3::TrackingManager::Self **)(v1), (int)(uintptr_t)(&v107));
                  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v108);
                }
              }
              v109 = v103;
              v110[0] = v104[0];
              if ( v104[0] != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
              glotv3::SingletonMutexedProcessor::EncryptEncodeParameters(v1, &v109);
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v110);
              v111 = v103;
              v112[0] = v104[0];
              if ( v104[0] != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
              glotv3::SingletonMutexedProcessor::WriteToStream((int)(uintptr_t)(v1), &v111, 0);
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v112);
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v104);
              goto LABEL_27;
            }
            v52 = *((uint32_t *)v1 + 3319);
            if ( v52 == *((uint32_t *)v1 + 3320) )
            {
              opDelete(*((void **)v1 + 3319));
              v62 = (int *)(*((uint32_t *)v1 + 3322) - 4);
              *((uint32_t *)v1 + 3322) = (uint32_t)(uintptr_t)(v62);
              v63 = *v62;
              *((uint32_t *)v1 + 3320) = *v62;
              *((uint32_t *)v1 + 3321) = v63 + 512;
              *((uint32_t *)v1 + 3319) = v63 + 504;
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v63 + 508));
            }
            else
            {
              *((uint32_t *)v1 + 3319) = v52 - 8;
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v52 - 4));
            }
            do
              v53 = pthread_mutex_lock((pthread_mutex_t *)((char *)v1 + 13336));
            while ( v53 == 4 );
            if ( v53 != 0 )
            {
              boost::lock_error::Construct(
                (boost::lock_error::Self *)v127,
                v53,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 36));
            v86 = (glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 12);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 12) != 0 )
              glotv3::Fs::RemovePath(v86);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 24) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 24);
            glotv3::Writer::Open((char *)v1 + 36, v86);
            sub_1321760((char *)v1 + 13336);
            do
              v54 = pthread_mutex_lock((pthread_mutex_t *)((char *)v1 + 13336));
            while ( v54 == 4 );
            if ( v54 != 0 )
            {
              boost::lock_error::Construct(
                (boost::lock_error::Self *)v128,
                v54,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 4384));
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 16) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 16);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 28) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 28);
            glotv3::Writer::Open((char *)v1 + 4384, v86);
            sub_1321760((char *)v1 + 13336);
            do
              v55 = pthread_mutex_lock((pthread_mutex_t *)((char *)v1 + 13336));
            while ( v55 == 4 );
            if ( v55 != 0 )
            {
              boost::lock_error::Construct(
                (boost::lock_error::Self *)v129,
                v55,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor::Self *)((char *)v1 + 8732));
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 20) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 20);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 32) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 32);
            glotv3::Writer::Open((char *)v1 + 8732, v86);
            sub_1321760((char *)v1 + 13336);
LABEL_60:
            boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v104);
            v12 = *((uint32_t *)v1 + 3319);
            if ( v12 == *((uint32_t *)v1 + 3315) )
              goto LABEL_61;
          }
          v105 = v103;
          v106[0] = v104[0];
          if ( v104[0] != 0 )
            __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
          glotv3::SingletonMutexedProcessor::WriteToLibSpy(v1, &v105);
          boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v106);
LABEL_67:
          v28 = *((uint32_t *)v1 + 3319);
          if ( v28 == *((uint32_t *)v1 + 3320) )
          {
            opDelete(*((void **)v1 + 3319));
            v36 = (int *)(*((uint32_t *)v1 + 3322) - 4);
            *((uint32_t *)v1 + 3322) = (uint32_t)(uintptr_t)(v36);
            v37 = *v36;
            *((uint32_t *)v1 + 3320) = *v36;
            *((uint32_t *)v1 + 3321) = v37 + 512;
            *((uint32_t *)v1 + 3319) = v37 + 504;
            boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v37 + 508));
          }
          else
          {
            *((uint32_t *)v1 + 3319) = v28 - 8;
            boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v28 - 4));
          }
          goto LABEL_60;
        }
LABEL_61:
        *((uint8_t *)v1 + 13334) = 0;
        glotv3::SingletonMutexedProcessor::PurgeBufferQueue(v1);
      }
      while ( *((uint8_t *)v1 + 13334) == 0 && *((uint8_t *)v1 + 13332) == 0 );
    }
  }
  return sub_1321760(v74);
}


// ============================================================================
// Address:   0x135d6e0 (size: 1248 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor20DetectCurrentSessionEv
// Demangled: glotv3::SingletonMutexedProcessor::DetectCurrentSession(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::DetectCurrentSession(glotv3::SingletonMutexedProcessor::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v8;
  typedef int32_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef glotv3::Event::Self *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef glotv3::Event::Self *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef uint8_t _g4_t_v31[20];
  typedef void *_g4_t_v32[7];
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef pthread_mutex_t _g4_t_v38;
  typedef uint8_t _g4_t_v39[4384];
  enum : size_t {
    _g4_s0 = 8960u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v12)) > _g4_s3 ? (8u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v17)) > _g4_s8 ? (36u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v18)) > _g4_s9 ? (40u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v19)) > _g4_s10 ? (44u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v20)) > _g4_s11 ? (48u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v21)) > _g4_s12 ? (52u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v22)) > _g4_s13 ? (56u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v23)) > _g4_s14 ? (60u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v24)) > _g4_s15 ? (64u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v25)) > _g4_s16 ? (68u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v26)) > _g4_s17 ? (72u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v27)) > _g4_s18 ? (76u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v28)) > _g4_s19 ? (80u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v29)) > _g4_s20 ? (84u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v30)) > _g4_s21 ? (88u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v31)) > _g4_s22 ? (92u + sizeof(_g4_t_v31)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v32)) > _g4_s23 ? (112u + sizeof(_g4_t_v32)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v33)) > _g4_s24 ? (140u + sizeof(_g4_t_v33)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v34)) > _g4_s25 ? (144u + sizeof(_g4_t_v34)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v35)) > _g4_s26 ? (148u + sizeof(_g4_t_v35)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v36)) > _g4_s27 ? (152u + sizeof(_g4_t_v36)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v37)) > _g4_s28 ? (156u + sizeof(_g4_t_v37)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v38)) > _g4_s29 ? (160u + sizeof(_g4_t_v38)) : _g4_s29,
    _g4_s31 = (4508u + sizeof(_g4_t_v39)) > _g4_s30 ? (4508u + sizeof(_g4_t_v39)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 152u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4508u);

  mutex = (pthread_mutex_t *)((char *)self + 13404);
  do
    v2 = pthread_mutex_lock(mutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v31,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  g4_std::string::construct_copy(&v13, *(uint32_t *)self);
  g4_std::string::append_str(&v13, &glotv3::system::SESSIONS_FILE);
  if ( glotv3::Fs::ExistsPathAndIsEmpty((const char **)&v13) )
    glotv3::Fs::RemovePath((const char **)&v13);
  sub_1358000(&v17);
  if ( v17 != 0 )
  {
    if ( glotv3::Fs::ExistsPathAndIsNotEmpty((const char **)&v13) )
    {
      glotv3::Reader::Construct((glotv3::Reader::Self *)v39, (int)(uintptr_t)(&v13));
      v19 = v17;
      v20 = v18;
      if ( v18 != nullptr )
        __sync_add_and_fetch(v18 + 1, 1);
      v12 = glotv3::Reader::ReadNext(v39, &v19);
      boost::detail::shared_count::Destroy(&v20);
      if ( v12 != 0 )
      {
        v8 = sub_134C470((int)(uintptr_t)(&v17));
        __atomic_exchange_n(
          (volatile int32_t *)(*((uint32_t *)self + 3297) + 168),
          glotv3::Event::getKeyPairAsUInt(v8, &glotv3::Event::keySessionId),
          __ATOMIC_SEQ_CST);
      }
      else
      {
        __atomic_exchange_n((volatile int32_t *)(*((uint32_t *)self + 3297) + 168), 0, __ATOMIC_SEQ_CST);
        g4_std::string::construct_copy(v14, &glotv3::errors::SESSIONS_FILE_IS_BORKED);
        glotv3::EventOfError::s_OfType(&v21, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_value + 3, (int)(uintptr_t)(v14));
        v23 = (int)(uintptr_t)(v21);
        v24 = v22;
        if ( v22 != nullptr )
          __sync_add_and_fetch(v22 + 1, 1);
        glotv3::SingletonMutexedProcessor::QueueForWriting(self, &v23, 0, 1);
        boost::detail::shared_count::Destroy(&v24);
        boost::detail::shared_count::Destroy(&v22);
        g4_std::string::Destroy(v14);
      }
      glotv3::Reader::Destroy((glotv3::Reader::Self *)v39);
      glotv3::Fs::TruncatePath((char **)&v13);
    }
    glotv3::Writer::Construct(&v38, (int)(uintptr_t)(&v13));
    v9 = __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)self + 3297) + 168), 1u);
    v32[2] = (void *)(uintptr_t)3;
    v32[6] = nullptr;
    v33 = nullptr;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v34 = 2048;
    v36 = opNew(1u);
    v37 = v36;
    v10 = v34;
    v4 = (uint32_t *)(malloc(v34 + 12));
    v4[1] = 0;
    *v4 = v10;
    v4[2] = (uint32_t)(uintptr_t)(v33);
    v33 = v4;
    v32[0] = (void *)(v9 + 1);
    v5 = sub_134C470((int)(uintptr_t)(&v17));
    glotv3::Event::addKeyPair(v5, &glotv3::Event::keySessionId, (glotv3::EventValue::Self *)v32);
    glotv3::EventValue::Destroy(v32);
    v25 = v17;
    v26 = v18;
    if ( v18 != nullptr )
      __sync_add_and_fetch(v18 + 1, 1);
    v11 = glotv3::Writer::WriteNext(&v38, (glotv3::Event::Self **)(&v25));
    boost::detail::shared_count::Destroy(&v26);
    if ( v11 == 0 )
    {
      glotv3::Writer::Finish((glotv3::Writer::Self *)&v38);
      glotv3::Fs::RemovePath((const char **)&v13);
      glotv3::Writer::Open(&v38, &v13);
      g4_std::string::construct_copy(v15, &glotv3::errors::SESSIONS_FILE_CANNOT_BE_WRITTEN);
      glotv3::EventOfError::s_OfType(&v27, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_size + 3, (int)(uintptr_t)(v15));
      v29 = (int)(uintptr_t)(v27);
      v30 = v28;
      if ( v28 != nullptr )
        __sync_add_and_fetch(v28 + 1, 1);
      glotv3::SingletonMutexedProcessor::QueueForWriting(self, &v29, 0, 1);
      boost::detail::shared_count::Destroy(&v30);
      boost::detail::shared_count::Destroy(&v28);
      g4_std::string::Destroy(v15);
    }
    glotv3::Writer::Destroy((glotv3::Writer::Self *)&v38);
  }
  else
  {
    g4_std::string::construct_copy(&v16, &glotv3::errors::OUT_OF_MEMORY);
    g4_std::string::append((int)(uintptr_t)(&v16), "unsigned int glotv3::SingletonMutexedProcessor::DetectCurrentSession()", 0x46u);
    glotv3::Glotv3Logger::WriteLog(&v16);
    g4_std::string::Destroy(&v16);
  }
  v6 = *(uint32_t *)(*((uint32_t *)self + 3297) + 168);
  boost::detail::shared_count::Destroy(&v18);
  g4_std::string::Destroy(&v13);
  sub_1321760(mutex);
  return v6;
}


// ============================================================================
// Address:   0x135dbc0 (size: 2442 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor12DetectDeviceEv
// Demangled: glotv3::SingletonMutexedProcessor::DetectDevice(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::DetectDevice(glotv3::SingletonMutexedProcessor::Self *self)
{
  pthread_mutex_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  glotv3::Event::Self *v8;
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
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef char _g4_t_v23;
  typedef bool _g4_t_v24;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef const void *_g4_t_v31;
  typedef const void *_g4_t_v32;
  typedef const void *_g4_t_v33;
  typedef const void *_g4_t_v34;
  typedef const void *_g4_t_v35;
  typedef const void *_g4_t_v36;
  typedef char _g4_t_v37[4];
  typedef char _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef glotv3::Event::Self *_g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef glotv3::Event::Self *_g4_t_v42;
  typedef volatile int32_t *_g4_t_count;
  typedef int _g4_t_v44;
  typedef volatile int32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef volatile int32_t *_g4_t_v47;
  typedef glotv3::Event::Self *_g4_t_v48;
  typedef volatile int32_t *_g4_t_v49;
  typedef glotv3::Event::Self *_g4_t_v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef volatile int32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef glotv3::Event::Self *_g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  typedef char _g4_t_v60[20];
  typedef char _g4_t_v61[20];
  typedef char _g4_t_v62[20];
  typedef pthread_mutex_t _g4_t_mutex;
  typedef glotv3::SingletonMutexedProcessor::Self **_g4_t_v64;
  enum : size_t {
    _g4_s0 = 4720u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v22)) > _g4_s2 ? (4u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (10u + sizeof(_g4_t_v23)) > _g4_s3 ? (10u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (11u + sizeof(_g4_t_v24)) > _g4_s4 ? (11u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_s1)) > _g4_s7 ? (28u + sizeof(_g4_t_s1)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_s2)) > _g4_s8 ? (32u + sizeof(_g4_t_s2)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v29)) > _g4_s9 ? (36u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v30)) > _g4_s10 ? (40u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v31)) > _g4_s11 ? (44u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v33)) > _g4_s13 ? (52u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v34)) > _g4_s14 ? (56u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v35)) > _g4_s15 ? (60u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v36)) > _g4_s16 ? (64u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v37)) > _g4_s17 ? (68u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v38)) > _g4_s18 ? (72u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v39)) > _g4_s19 ? (76u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v40)) > _g4_s20 ? (80u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v41)) > _g4_s21 ? (84u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v42)) > _g4_s22 ? (96u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_count)) > _g4_s23 ? (100u + sizeof(_g4_t_count)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v44)) > _g4_s24 ? (112u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v45)) > _g4_s25 ? (116u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v46)) > _g4_s26 ? (128u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v47)) > _g4_s27 ? (132u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v48)) > _g4_s28 ? (144u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v49)) > _g4_s29 ? (148u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v50)) > _g4_s30 ? (156u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v51)) > _g4_s31 ? (160u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v52)) > _g4_s32 ? (164u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v53)) > _g4_s33 ? (168u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v54)) > _g4_s34 ? (172u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v55)) > _g4_s35 ? (176u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v56)) > _g4_s36 ? (180u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v57)) > _g4_s37 ? (184u + sizeof(_g4_t_v57)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v58)) > _g4_s38 ? (188u + sizeof(_g4_t_v58)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v59)) > _g4_s39 ? (192u + sizeof(_g4_t_v59)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v60)) > _g4_s40 ? (196u + sizeof(_g4_t_v60)) : _g4_s40,
    _g4_s42 = (216u + sizeof(_g4_t_v61)) > _g4_s41 ? (216u + sizeof(_g4_t_v61)) : _g4_s41,
    _g4_s43 = (236u + sizeof(_g4_t_v62)) > _g4_s42 ? (236u + sizeof(_g4_t_v62)) : _g4_s42,
    _g4_s44 = (256u + sizeof(_g4_t_mutex)) > _g4_s43 ? (256u + sizeof(_g4_t_mutex)) : _g4_s43,
    _g4_s45 = (4632u + sizeof(_g4_t_v64)) > _g4_s44 ? (4632u + sizeof(_g4_t_v64)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 10u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 11u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 28u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_count &count = *reinterpret_cast<_g4_t_count *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 144u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 148u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 156u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 164u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 168u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 172u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 196u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 216u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 236u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 256u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4632u);

  v64 = &self;
  v25 = self;
  v1 = (pthread_mutex_t *)((char *)self + 13412);
  do
    v2 = pthread_mutex_lock(v1);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct(
      v3,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v60,
      v2,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  g4_std::string::construct_copy(&v26, *(uint32_t *)v25);
  g4_std::string::append_str(&v26, &glotv3::system::DEVICEID_FILE);
  G4_MUTEX_LOCK(&(mutex)) = 0;
  G4_MUTEX_COUNT(&(mutex)) = 0u;
  sub_134E810();
  if ( g4_fnstatic_ec81e02332 == 0 )
  {
    g4_fnstatic_ec81e02332 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v4 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v4 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v61,
          v4,
          "boost:: mutex constructor failed in pthread_mutex_init");
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
    v5 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    boost::lock_error::Construct(
      v6,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v62,
      v5,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  v22 = (uint32_t *)(uintptr_t)(sub_13570B0(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  if ( v22 == nullptr )
    std::terminate();
  G4_MUTEX_COUNT(&(mutex)) = (unsigned int)(uintptr_t)(v22);
  v22[1] = 1;
  v22[2] = 1;
  *v22 = ((uint32_t)(uintptr_t)&off_2093C68);
  v22[3] = 0;
  *((uint8_t *)v22 + 16) = 0;
  v7 = nullptr;
  if ( G4_MUTEX_COUNT(&(mutex)) != 0 )
    v7 = (uint8_t *)G4_VCALL<int>(G4_MUTEX_COUNT(&(mutex)), 20);
  v8 = (glotv3::Event::Self *)(v7 + 4);
  if ( v7 != (uint8_t *)-4 )
  {
    glotv3::EventOfUserDevice::Construct((glotv3::EventOfUserDevice::Self *)(v7 + 4));
    v8 = (glotv3::Event::Self *)(v7 + 4);
  }
  *v7 = 1;
  v42 = v8;
  count = ((volatile int32_t *)(intptr_t)G4_MUTEX_COUNT(&(mutex)));
  if ( G4_MUTEX_COUNT(&(mutex)) != 0 )
    __sync_add_and_fetch((volatile int32_t *)(G4_MUTEX_COUNT(&(mutex)) + 4), 1);
  boost::detail::shared_count::Destroy((volatile int32_t **)&G4_MUTEX_COUNT(&(mutex)));
  v40 = v42;
  v41 = count;
  if ( count != nullptr )
    __sync_add_and_fetch(count + 1, 1);
  boost::detail::shared_count::Destroy(&count);
  if ( v40 == nullptr )
  {
    g4_std::string::construct_copy(&v39, &glotv3::errors::OUT_OF_MEMORY);
    g4_std::string::append((int)(uintptr_t)(&v39), "void glotv3::SingletonMutexedProcessor::DetectDevice()", 0x36u);
    glotv3::Glotv3Logger::WriteLog(&v39);
    g4_std::string::Destroy(&v39);
    goto LABEL_29;
  }
  if ( glotv3::Fs::ExistsPath((const char **)&v26) )
  {
    glotv3::Reader::Construct((glotv3::Reader::Self *)&mutex, (int)(uintptr_t)(&v26));
    sub_1358000(&v44);
    v24 = false;
    if ( v44 == 0 )
      goto LABEL_37;
    v46 = v44;
    v47 = v45;
    if ( v45 != nullptr )
      __sync_add_and_fetch(v45 + 1, 1);
    v21 = glotv3::Reader::ReadNext(&mutex, &v46);
    boost::detail::shared_count::Destroy(&v47);
    if ( v21 == 0 )
    {
      g4_std::string::construct_copy(v37, &glotv3::errors::DEVICEID_FILE_IS_BORKED);
      glotv3::EventOfError::s_OfType(&v50, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_size + 1, (int)(uintptr_t)(v37));
      v52 = (int)(uintptr_t)(v50);
      v53 = v51;
      if ( v51 != nullptr )
        __sync_add_and_fetch(v51 + 1, 1);
      glotv3::SingletonMutexedProcessor::QueueForWriting(v25, &v52, 0, 1);
      boost::detail::shared_count::Destroy(&v53);
      boost::detail::shared_count::Destroy(&v51);
      g4_std::string::Destroy(v37);
      v24 = false;
LABEL_37:
      boost::detail::shared_count::Destroy(&v45);
      glotv3::Reader::Destroy((glotv3::Reader::Self *)&mutex);
      if ( !v24 )
        goto LABEL_29;
      goto LABEL_21;
    }
    v10 = sub_134C470((int)(uintptr_t)(&v44));
    glotv3::Event::getKeyPair(&s2, v10, &glotv3::EventOfUserDevice::k_KeyCarrier);
    v11 = sub_134C470((int)(uintptr_t)(&v40));
    glotv3::Event::getKeyPair(&s1, v11, &glotv3::EventOfUserDevice::k_KeyCarrier);
    v23 = 0;
    if ( *((uint32_t *)s1 - 3) == *((uint32_t *)s2 - 3)
      && memcmp(s1, s2, *((uint32_t *)s1 - 3)) == 0
      && (v12 = sub_134C470((int)(uintptr_t)(&v44)),
          glotv3::Event::getKeyPair(&v30, v12, &glotv3::EventOfUserDevice::k_KeyCountry),
          v13 = sub_134C470((int)(uintptr_t)(&v40)),
          glotv3::Event::getKeyPair(&v29, v13, &glotv3::EventOfUserDevice::k_KeyCountry),
          v23 = 1,
          *((uint32_t *)v29 - 3) == *((uint32_t *)v30 - 3))
      && memcmp(v29, v30, *((uint32_t *)v29 - 3)) == 0 )
    {
      v14 = sub_134C470((int)(uintptr_t)(&v44));
      glotv3::Event::getKeyPair(&v32, v14, &glotv3::EventOfUserDevice::k_KeyLanguage);
      v15 = sub_134C470((int)(uintptr_t)(&v40));
      glotv3::Event::getKeyPair(&v31, v15, &glotv3::EventOfUserDevice::k_KeyLanguage);
      v24 = true;
      if ( g4_std::opEq_35f83b(&v31, &v32) )
      {
        v16 = sub_134C470((int)(uintptr_t)(&v44));
        glotv3::Event::getKeyPair(&v34, v16, &glotv3::EventOfUserDevice::k_KeyName);
        v17 = sub_134C470((int)(uintptr_t)(&v40));
        glotv3::Event::getKeyPair(&v33, v17, &glotv3::EventOfUserDevice::k_KeyName);
        if ( g4_std::opEq_35f83b(&v33, &v34) )
        {
          v18 = sub_134C470((int)(uintptr_t)(&v44));
          glotv3::Event::getKeyPair(&v36, v18, &glotv3::EventOfUserDevice::k_KeyFirmware);
          v19 = sub_134C470((int)(uintptr_t)(&v40));
          glotv3::Event::getKeyPair(&v35, v19, &glotv3::EventOfUserDevice::k_KeyFirmware);
          v24 = !g4_std::opEq_35f83b(&v35, &v36);
          g4_std::string::Destroy(&v35);
          g4_std::string::Destroy(&v36);
        }
        g4_std::string::Destroy(&v33);
        g4_std::string::Destroy(&v34);
      }
      g4_std::string::Destroy(&v31);
      g4_std::string::Destroy(&v32);
    }
    else
    {
      v24 = true;
      if ( v23 == 0 )
      {
LABEL_36:
        g4_std::string::Destroy(&s1);
        g4_std::string::Destroy(&s2);
        goto LABEL_37;
      }
    }
    g4_std::string::Destroy(&v29);
    g4_std::string::Destroy(&v30);
    goto LABEL_36;
  }
LABEL_21:
  if ( glotv3::Fs::ExistsPath((const char **)&v26) )
    glotv3::Fs::TruncatePath((char **)&v26);
  v48 = v40;
  v49 = v41;
  if ( v41 != nullptr )
    __sync_add_and_fetch(v41 + 1, 1);
  glotv3::TrackingManager::AddEvent(*((uint32_t *)v25 + 3297), &v48, 0);
  boost::detail::shared_count::Destroy(&v49);
  glotv3::Writer::Construct(&mutex, (int)(uintptr_t)(&v26));
  v54 = (int)(uintptr_t)(v40);
  v55 = v41;
  if ( v41 != nullptr )
    __sync_add_and_fetch(v41 + 1, 1);
  v20 = glotv3::Writer::WriteNext(&mutex, (glotv3::Event::Self **)(&v54));
  boost::detail::shared_count::Destroy(&v55);
  if ( v20 == 0 )
  {
    glotv3::Writer::Finish((glotv3::Writer::Self *)&mutex);
    glotv3::Fs::RemovePath((const char **)&v26);
    glotv3::Writer::Open(&mutex, &v26);
    g4_std::string::construct_copy(v38, &glotv3::errors::DEVICEID_FILE_CANNOT_BE_WRITTEN);
    glotv3::EventOfError::s_OfType(&v56, &reinterpret_cast<G4Elf32Sym *>(stru_202A4)->st_other, (int)(uintptr_t)(v38));
    v58 = (int)(uintptr_t)(v56);
    v59 = v57;
    if ( v57 != nullptr )
      __sync_add_and_fetch(v57 + 1, 1);
    glotv3::SingletonMutexedProcessor::QueueForWriting(v25, &v58, 0, 1);
    boost::detail::shared_count::Destroy(&v59);
    boost::detail::shared_count::Destroy(&v57);
    g4_std::string::Destroy(v38);
  }
  glotv3::Writer::Destroy((glotv3::Writer::Self *)&mutex);
LABEL_29:
  boost::detail::shared_count::Destroy(&v41);
  g4_std::string::Destroy(&v26);
  return sub_1321760(v1);
}


// ============================================================================
// Address:   0x135e6e0 (size: 1212 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor10AsyncTimerEv
// Demangled: glotv3::SingletonMutexedProcessor::AsyncTimer(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::AsyncTimer(glotv3::SingletonMutexedProcessor::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v1;
  unsigned int v2;
  glotv3::TrackingManager::Self *v3;
  unsigned int v4;
  int v5;
  int v6;
  typedef uint32_t *_g4_t_v8;
  typedef char _g4_t_v9;
  typedef int64_t _g4_t_v10;
  typedef int64_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef pthread_mutex_t *_g4_t_v19[3];
  typedef int64_t _g4_t_v20[4];
  typedef glotv3::SingletonMutexedProcessor::Self **_g4_t_v21;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v12)) > _g4_s4 ? (52u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v13)) > _g4_s5 ? (56u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v14)) > _g4_s6 ? (60u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v15)) > _g4_s7 ? (64u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v16)) > _g4_s8 ? (68u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v17)) > _g4_s9 ? (72u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v18)) > _g4_s10 ? (76u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v19)) > _g4_s11 ? (84u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v20)) > _g4_s12 ? (96u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v21)) > _g4_s13 ? (128u + sizeof(_g4_t_v21)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 128u);

  v21 = &self;
  v1 = self;
  __sync_fetch_and_add((volatile int32_t *)self + 3307, 1u);
  if ( *((uint32_t *)v1 + 3308) != 0 )
  {
    __sync_fetch_and_add((volatile int32_t *)v1 + 3308, 0xFFFFFFFF);
    if ( *((uint32_t *)v1 + 3308) == 0 )
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::ETS_DELAY_HAS_ENDED);
      *((uint8_t *)v1 + 13422) = 0;
      *((uint8_t *)v1 + 13417) = 1;
    }
  }
  v2 = 2;
  v9 = glotv3::TrackingManager::s_IsSpyInstantSendingActive ^ 1;
  if ( glotv3::TrackingManager::s_IsSpyInstantSendingActive != 1 )
    v2 = 10;
  if ( *((uint32_t *)v1 + 3307) % v2 == 0 )
  {
    v3 = *((glotv3::TrackingManager::Self **)v1 + 3297);
    if ( *((uint8_t *)v3 + 184) == 0 )
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_FIRED_FOR_RESYNC);
      glotv3::TrackingManager::ResyncWithGaia(*((glotv3::TrackingManager::Self **)v1 + 3297));
      v3 = *((glotv3::TrackingManager::Self **)v1 + 3297);
    }
    if ( *((uint8_t *)v3 + 185) == 0 )
      goto LABEL_8;
    if ( (unsigned int)glotv3::Utils::GetUTCAsSeconds() > *(uint32_t *)(*((uint32_t *)v1 + 3297) + 180) + 7200 )
    {
      v3 = *((glotv3::TrackingManager::Self **)v1 + 3297);
LABEL_8:
      glotv3::TrackingManager::RequestFederationAccessTokenFromGaia(v3);
    }
  }
  if ( v9 != 0 )
    v4 = 30;
  else
    v4 = 2;
  if ( v9 != 0 )
  {
    if ( *((uint32_t *)v1 + 3307) % (v4 / 5) == 0 )
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_FIRED_FOR_BUFFER);
    glotv3::SingletonMutexedProcessor::PurgeBufferQueue(v1);
    if ( *((uint32_t *)v1 + 3307) != 25 )
    {
LABEL_15:
      v5 = *((uint32_t *)v1 + 3307) % v4;
      if ( v5 != 0 )
        goto LABEL_16;
      goto LABEL_25;
    }
  }
  else
  {
    glotv3::SingletonMutexedProcessor::PurgeBufferQueue(v1);
    if ( *((uint32_t *)v1 + 3307) != 1 )
      goto LABEL_15;
  }
  if ( *(uint32_t *)(*((uint32_t *)v1 + 3297) + 140) == 0 )
    goto LABEL_15;
  glotv3::DNSClient::TryToResolveDNS(*(glotv3::DNSClient::Self **)(*((uint32_t *)v1 + 3297) + 140));
  v5 = *((uint32_t *)v1 + 3307) % v4;
  if ( v5 != 0 )
    goto LABEL_16;
LABEL_25:
  __atomic_exchange_n((volatile int32_t *)v1 + 3307, v5, __ATOMIC_SEQ_CST);
  sub_18FE850((uint32_t *)v20, (int)(*((uint32_t *)v1 + 3297) + 52));
  *(double *)(*((uint32_t *)v1 + 3297) + 36) = (double)v20[0] * 0.000000001;
  sub_135E550(&v15);
  v17 = v15;
  v18 = v16;
  if ( v16 != nullptr )
    __sync_add_and_fetch(v16 + 1, 1);
  boost::detail::shared_count::Destroy(&v16);
  if ( v17 != 0 )
  {
    v13 = v17;
    v14 = v18;
    if ( v18 != nullptr )
      __sync_add_and_fetch(v18 + 1, 1);
    glotv3::SingletonMutexedProcessor::QueueForWriting(v1, &v13, 1, 0);
    boost::detail::shared_count::Destroy(&v14);
  }
  else
  {
    g4_std::string::construct_copy(&v12, &glotv3::errors::OUT_OF_MEMORY);
    g4_std::string::append((int)(uintptr_t)(&v12), "void glotv3::SingletonMutexedProcessor::AsyncTimer()", 0x34u);
    glotv3::Glotv3Logger::WriteLog(&v12);
    g4_std::string::Destroy(&v12);
  }
  boost::detail::shared_count::Destroy(&v18);
LABEL_16:
  v17 = 0;
  v18 = (volatile int32_t *)sub_18F81E0(1, 0);
  v8 = (uint32_t *)(*((uint32_t *)v1 + 3298) + 20);
  sub_134D120(&v11);
  v6 = v11;
  v10 = v11;
  if ( ((unsigned int)v11 | (HIDWORD(v11) + 0x80000000)) != 0 )
  {
    v6 = HIDWORD(v11) ^ 0x7FFFFFFF | ~(uint32_t)v11;
    if ( v6 != 0 )
    {
      v6 = v11 ^ 0xFFFFFFFE;
      if ( v11 != 0x7FFFFFFFFFFFFFFELL )
      {
        v6 = 1000000;
        v10 = v11 + 1000000;
      }
    }
  }
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    (int)(uintptr_t)(v8),
    v6,
    v8,
    (int)(uintptr_t)(v1) + 13196,
    &v17);
  *(uint64_t *)((char *)v1 + 13196) = v10;
  v18 = (volatile int32_t *)sub_18F81E0(HIDWORD(v10), v10);
  v19[2] = (pthread_mutex_t *)v1;
  v19[0] = (pthread_mutex_t *)glotv3::SingletonMutexedProcessor::AsyncTimer;
  v17 = 0;
  v19[1] = nullptr;
  return boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor::Self*>>>>(
           (int *)v1 + 3298,
           v19);
}


// ============================================================================
// Address:   0x135eba0 (size: 11239 bytes)
// Symbol:    _ZN6glotv325SingletonMutexedProcessor12AsyncNetworkEv
// Demangled: glotv3::SingletonMutexedProcessor::AsyncNetwork(void)
// ============================================================================
int glotv3::SingletonMutexedProcessor::AsyncNetwork(glotv3::SingletonMutexedProcessor::Self *self)
{
  pthread_mutex_t *v1;
  int v2;
  pthread_mutex_t *current_thread_data;
  pthread_mutex_t *v4;
  int v5;
  int v6;
  int v7;
  pthread_mutex_t *v8;
  int v9;
  pthread_mutex_t *v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int owner;
  int i;
  int *v17;
  int v18;
  int v19;
  int v20;
  unsigned int *v21;
  int v22;
  int spins;
  unsigned int v24;
  int v25;
  int *v26;
  uint8_t *v27;
  unsigned int v29;
  unsigned int v30;
  char v31; // si
  glotv3::Event::Self *v32;
  unsigned int EventType;
  int v34;
  uint8_t *v35;
  unsigned int v36;
  glotv3::Event::Self *v37;
  glotv3::Event::Self *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int KeyPairAsUInt;
  int v45;
  uint8_t *v46;
  unsigned int v47;
  int v48;
  int v49;
  int v50;
  int *v51;
  int *v52;
  int *v53;
  glotv3::Event::Self *v54;
  int v55;
  int *v56;
  int v57;
  int v58;
  bool v59;
  glotv3::Event::Self *v60;
  int SmartCount;
  glotv3::Event::Self *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  uint32_t *v69;
  uint32_t *v70;
  int v71;
  int *v72;
  int *v73;
  int *v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  char *v81;
  int v82;
  void *v83;
  void **v84;
  unsigned int v85;
  void *v86;
  int v87;
  int v88;
  int v89;
  int v90;
  void *v91;
  void **v92;
  unsigned int v93;
  void *v94;
  int v95;
  int v96;
  int v97;
  int v98;
  void **v99;
  void *v100;
  int *v101;
  glotv3::Event::Self *v102;
  int v103;
  int *v104;
  int v105;
  int v106;
  int v107;
  int v108;
  glotv3::Event::Self *v109;
  glotv3::Event::Self *v110;
  int *v111;
  int *v112;
  int *v113;
  int n;
  int v115;
  char *v116;
  glotv3::Event::Self *v117;
  int v118;
  glotv3::Event::Self *v119;
  int *k;
  glotv3::Event::Self *v121;
  unsigned int *v122;
  unsigned int j;
  uint32_t *v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int *v130;
  int v131;
  int v132;
  unsigned int v133;
  unsigned int v134;
  unsigned int v135;
  int v136;
  int v137;
  int v138;
  typedef boost::detail::Self *_g4_t_v139;
  typedef boost::this_thread::Self *_g4_t_v140;
  typedef int _g4_t_v141;
  typedef char *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef char *_g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int *_g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef char _g4_t_v163;
  typedef pthread_mutex_t *_g4_t_v164;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef unsigned int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef int *_g4_t_src;
  typedef glotv3::SingletonMutexedProcessor::Self *_g4_t_v173;
  typedef char *_g4_t_v174;
  typedef int _g4_t_v175;
  typedef unsigned int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef char _g4_t_v179;
  typedef unsigned int _g4_t_v180;
  typedef char _g4_t_IsNotEmpty;
  typedef int _g4_t_v182;
  typedef char _g4_t_v183;
  typedef int _g4_t_v184;
  typedef unsigned int _g4_t_EventBatchSizeMaximum;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef unsigned int *_g4_t_p_count;
  typedef unsigned int _g4_t_v189;
  typedef char *_g4_t_v190;
  typedef int _g4_t_v191;
  typedef int *_g4_t_v192;
  typedef unsigned int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef char _g4_t_v197;
  typedef unsigned int _g4_t_nusers;
  typedef char *_g4_t_v199;
  typedef void *_g4_t_v200;
  typedef void *_g4_t_v201;
  typedef void *_g4_t_v202;
  typedef int *_g4_t_v203;
  typedef int *_g4_t_v204;
  typedef void *_g4_t_v205;
  typedef int *_g4_t_v206;
  typedef pthread_mutex_t *_g4_t_v207;
  typedef unsigned int _g4_t_count;
  typedef char *_g4_t_v209;
  typedef void *_g4_t_v210;
  typedef int _g4_t_v211;
  typedef int *_g4_t_v212;
  typedef int *_g4_t_v213;
  typedef int *_g4_t_v214;
  typedef int *_g4_t_m;
  typedef int _g4_t_SessionId;
  typedef int _g4_t_v217;
  typedef uint32_t _g4_t_v218[3];
  typedef int *_g4_t_v219;
  typedef int _g4_t_v220[4];
  typedef int _g4_t_v221[3];
  typedef char _g4_t_v222[4];
  typedef int _g4_t_v223;
  typedef char _g4_t_v224[4];
  typedef char _g4_t_v225[4];
  typedef char _g4_t_v226[4];
  typedef char _g4_t_v227[4];
  typedef char _g4_t_v228[4];
  typedef char _g4_t_v229[4];
  typedef char _g4_t_v230[4];
  typedef char _g4_t_v231[4];
  typedef char _g4_t_v232[4];
  typedef char _g4_t_v233[4];
  typedef char _g4_t_v234[4];
  typedef char _g4_t_v235[4];
  typedef char _g4_t_v236[4];
  typedef char _g4_t_v237[4];
  typedef char _g4_t_v238[4];
  typedef int _g4_t_v239;
  typedef int _g4_t_v240[3];
  typedef uint8_t *_g4_t_v241;
  typedef int _g4_t_v242[3];
  typedef int _g4_t_v243;
  typedef int _g4_t_v244[3];
  typedef uint8_t *_g4_t_v245;
  typedef int _g4_t_v246[3];
  typedef int _g4_t_v247;
  typedef int _g4_t_v248[3];
  typedef uint8_t *_g4_t_v249;
  typedef int _g4_t_v250[3];
  typedef int _g4_t_v251;
  typedef int _g4_t_v252[3];
  typedef int _g4_t_v253;
  typedef int _g4_t_v254[3];
  typedef int _g4_t_v255;
  typedef int _g4_t_v256[3];
  typedef int _g4_t_v257;
  typedef int _g4_t_v258[3];
  typedef int _g4_t_v259;
  typedef int _g4_t_v260[4];
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef uint32_t _g4_t_v266[2];
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_v273;
  typedef char _g4_t_v274[4];
  typedef int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef char _g4_t_v277[4];
  typedef int _g4_t_v278;
  typedef int _g4_t_v279;
  typedef char _g4_t_v280[4];
  typedef int _g4_t_v281;
  typedef int _g4_t_v282;
  typedef int _g4_t_v283[4];
  typedef uint32_t _g4_t_v284[4];
  typedef int _g4_t_v285;
  typedef uint32_t _g4_t_v286[4];
  typedef uint8_t _g4_t_v287[8];
  typedef char _g4_t_v288[20];
  typedef void (**_g4_t_v289)(boost::condition_error::Self *);
  typedef char _g4_t_v290[20];
  typedef char _g4_t_v291[20];
  typedef char _g4_t_v292[20];
  typedef char _g4_t_v293[20];
  typedef char _g4_t_v294[20];
  typedef char _g4_t_v295[20];
  typedef char _g4_t_v296[20];
  typedef char _g4_t_v297[20];
  typedef char _g4_t_v298[20];
  typedef char _g4_t_v299[20];
  typedef char _g4_t_v300[20];
  typedef int _g4_t_v301;
  typedef int _g4_t_v302;
  typedef void *_g4_t_v303;
  typedef int *_g4_t_v304;
  typedef int *_g4_t_v305;
  typedef int _g4_t_v306;
  typedef void *_g4_t_v307;
  typedef int _g4_t_v308;
  typedef int _g4_t_v309;
  typedef unsigned int _g4_t_v310;
  typedef int _g4_t_v311;
  typedef int _g4_t_v312;
  typedef int *_g4_t_v313;
  typedef void *_g4_t_v314;
  typedef char *_g4_t_v315;
  typedef int _g4_t_v316;
  typedef char *_g4_t_v317;
  typedef unsigned int _g4_t_v318;
  typedef int _g4_t_v319;
  typedef int _g4_t_v320;
  typedef int _g4_t_v321;
  typedef int *_g4_t_v322;
  typedef uint32_t _g4_t_v323[7];
  typedef uint32_t *_g4_t_v324;
  typedef int _g4_t_v325;
  typedef int _g4_t_v326;
  typedef int _g4_t_v327;
  typedef int _g4_t_v328;
  typedef int _g4_t_v329;
  typedef uint32_t _g4_t_v330[1094];
  enum : size_t {
    _g4_s0 = 5472u,
    _g4_s1 = (0u + sizeof(_g4_t_v139)) > _g4_s0 ? (0u + sizeof(_g4_t_v139)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v140)) > _g4_s1 ? (0u + sizeof(_g4_t_v140)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v141)) > _g4_s2 ? (0u + sizeof(_g4_t_v141)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v142)) > _g4_s3 ? (0u + sizeof(_g4_t_v142)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v143)) > _g4_s4 ? (0u + sizeof(_g4_t_v143)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v144)) > _g4_s5 ? (0u + sizeof(_g4_t_v144)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v145)) > _g4_s6 ? (0u + sizeof(_g4_t_v145)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v146)) > _g4_s7 ? (0u + sizeof(_g4_t_v146)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v147)) > _g4_s8 ? (0u + sizeof(_g4_t_v147)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v148)) > _g4_s9 ? (0u + sizeof(_g4_t_v148)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v149)) > _g4_s10 ? (0u + sizeof(_g4_t_v149)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v150)) > _g4_s11 ? (0u + sizeof(_g4_t_v150)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v151)) > _g4_s12 ? (0u + sizeof(_g4_t_v151)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v152)) > _g4_s13 ? (0u + sizeof(_g4_t_v152)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v153)) > _g4_s14 ? (4u + sizeof(_g4_t_v153)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v154)) > _g4_s15 ? (48u + sizeof(_g4_t_v154)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v155)) > _g4_s16 ? (48u + sizeof(_g4_t_v155)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v156)) > _g4_s17 ? (48u + sizeof(_g4_t_v156)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v157)) > _g4_s18 ? (48u + sizeof(_g4_t_v157)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v158)) > _g4_s19 ? (48u + sizeof(_g4_t_v158)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v159)) > _g4_s20 ? (48u + sizeof(_g4_t_v159)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v160)) > _g4_s21 ? (48u + sizeof(_g4_t_v160)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v161)) > _g4_s22 ? (48u + sizeof(_g4_t_v161)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v162)) > _g4_s23 ? (52u + sizeof(_g4_t_v162)) : _g4_s23,
    _g4_s25 = (59u + sizeof(_g4_t_v163)) > _g4_s24 ? (59u + sizeof(_g4_t_v163)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v164)) > _g4_s25 ? (60u + sizeof(_g4_t_v164)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_mutex)) > _g4_s26 ? (64u + sizeof(_g4_t_mutex)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v166)) > _g4_s27 ? (68u + sizeof(_g4_t_v166)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v167)) > _g4_s28 ? (72u + sizeof(_g4_t_v167)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v168)) > _g4_s29 ? (76u + sizeof(_g4_t_v168)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v169)) > _g4_s30 ? (80u + sizeof(_g4_t_v169)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v170)) > _g4_s31 ? (84u + sizeof(_g4_t_v170)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v171)) > _g4_s32 ? (88u + sizeof(_g4_t_v171)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_src)) > _g4_s33 ? (92u + sizeof(_g4_t_src)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v173)) > _g4_s34 ? (96u + sizeof(_g4_t_v173)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v174)) > _g4_s35 ? (100u + sizeof(_g4_t_v174)) : _g4_s35,
    _g4_s37 = (100u + sizeof(_g4_t_v175)) > _g4_s36 ? (100u + sizeof(_g4_t_v175)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v176)) > _g4_s37 ? (104u + sizeof(_g4_t_v176)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v177)) > _g4_s38 ? (104u + sizeof(_g4_t_v177)) : _g4_s38,
    _g4_s40 = (104u + sizeof(_g4_t_v178)) > _g4_s39 ? (104u + sizeof(_g4_t_v178)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v179)) > _g4_s40 ? (108u + sizeof(_g4_t_v179)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v180)) > _g4_s41 ? (108u + sizeof(_g4_t_v180)) : _g4_s41,
    _g4_s43 = (112u + sizeof(_g4_t_IsNotEmpty)) > _g4_s42 ? (112u + sizeof(_g4_t_IsNotEmpty)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v182)) > _g4_s43 ? (112u + sizeof(_g4_t_v182)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v183)) > _g4_s44 ? (116u + sizeof(_g4_t_v183)) : _g4_s44,
    _g4_s46 = (116u + sizeof(_g4_t_v184)) > _g4_s45 ? (116u + sizeof(_g4_t_v184)) : _g4_s45,
    _g4_s47 = (116u + sizeof(_g4_t_EventBatchSizeMaximum)) > _g4_s46 ? (116u + sizeof(_g4_t_EventBatchSizeMaximum)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v186)) > _g4_s47 ? (116u + sizeof(_g4_t_v186)) : _g4_s47,
    _g4_s49 = (116u + sizeof(_g4_t_v187)) > _g4_s48 ? (116u + sizeof(_g4_t_v187)) : _g4_s48,
    _g4_s50 = (120u + sizeof(_g4_t_p_count)) > _g4_s49 ? (120u + sizeof(_g4_t_p_count)) : _g4_s49,
    _g4_s51 = (120u + sizeof(_g4_t_v189)) > _g4_s50 ? (120u + sizeof(_g4_t_v189)) : _g4_s50,
    _g4_s52 = (120u + sizeof(_g4_t_v190)) > _g4_s51 ? (120u + sizeof(_g4_t_v190)) : _g4_s51,
    _g4_s53 = (120u + sizeof(_g4_t_v191)) > _g4_s52 ? (120u + sizeof(_g4_t_v191)) : _g4_s52,
    _g4_s54 = (120u + sizeof(_g4_t_v192)) > _g4_s53 ? (120u + sizeof(_g4_t_v192)) : _g4_s53,
    _g4_s55 = (124u + sizeof(_g4_t_v193)) > _g4_s54 ? (124u + sizeof(_g4_t_v193)) : _g4_s54,
    _g4_s56 = (124u + sizeof(_g4_t_v194)) > _g4_s55 ? (124u + sizeof(_g4_t_v194)) : _g4_s55,
    _g4_s57 = (124u + sizeof(_g4_t_v195)) > _g4_s56 ? (124u + sizeof(_g4_t_v195)) : _g4_s56,
    _g4_s58 = (124u + sizeof(_g4_t_v196)) > _g4_s57 ? (124u + sizeof(_g4_t_v196)) : _g4_s57,
    _g4_s59 = (128u + sizeof(_g4_t_v197)) > _g4_s58 ? (128u + sizeof(_g4_t_v197)) : _g4_s58,
    _g4_s60 = (128u + sizeof(_g4_t_nusers)) > _g4_s59 ? (128u + sizeof(_g4_t_nusers)) : _g4_s59,
    _g4_s61 = (128u + sizeof(_g4_t_v199)) > _g4_s60 ? (128u + sizeof(_g4_t_v199)) : _g4_s60,
    _g4_s62 = (128u + sizeof(_g4_t_v200)) > _g4_s61 ? (128u + sizeof(_g4_t_v200)) : _g4_s61,
    _g4_s63 = (128u + sizeof(_g4_t_v201)) > _g4_s62 ? (128u + sizeof(_g4_t_v201)) : _g4_s62,
    _g4_s64 = (128u + sizeof(_g4_t_v202)) > _g4_s63 ? (128u + sizeof(_g4_t_v202)) : _g4_s63,
    _g4_s65 = (128u + sizeof(_g4_t_v203)) > _g4_s64 ? (128u + sizeof(_g4_t_v203)) : _g4_s64,
    _g4_s66 = (128u + sizeof(_g4_t_v204)) > _g4_s65 ? (128u + sizeof(_g4_t_v204)) : _g4_s65,
    _g4_s67 = (128u + sizeof(_g4_t_v205)) > _g4_s66 ? (128u + sizeof(_g4_t_v205)) : _g4_s66,
    _g4_s68 = (128u + sizeof(_g4_t_v206)) > _g4_s67 ? (128u + sizeof(_g4_t_v206)) : _g4_s67,
    _g4_s69 = (132u + sizeof(_g4_t_v207)) > _g4_s68 ? (132u + sizeof(_g4_t_v207)) : _g4_s68,
    _g4_s70 = (132u + sizeof(_g4_t_count)) > _g4_s69 ? (132u + sizeof(_g4_t_count)) : _g4_s69,
    _g4_s71 = (132u + sizeof(_g4_t_v209)) > _g4_s70 ? (132u + sizeof(_g4_t_v209)) : _g4_s70,
    _g4_s72 = (132u + sizeof(_g4_t_v210)) > _g4_s71 ? (132u + sizeof(_g4_t_v210)) : _g4_s71,
    _g4_s73 = (132u + sizeof(_g4_t_v211)) > _g4_s72 ? (132u + sizeof(_g4_t_v211)) : _g4_s72,
    _g4_s74 = (132u + sizeof(_g4_t_v212)) > _g4_s73 ? (132u + sizeof(_g4_t_v212)) : _g4_s73,
    _g4_s75 = (132u + sizeof(_g4_t_v213)) > _g4_s74 ? (132u + sizeof(_g4_t_v213)) : _g4_s74,
    _g4_s76 = (132u + sizeof(_g4_t_v214)) > _g4_s75 ? (132u + sizeof(_g4_t_v214)) : _g4_s75,
    _g4_s77 = (132u + sizeof(_g4_t_m)) > _g4_s76 ? (132u + sizeof(_g4_t_m)) : _g4_s76,
    _g4_s78 = (132u + sizeof(_g4_t_SessionId)) > _g4_s77 ? (132u + sizeof(_g4_t_SessionId)) : _g4_s77,
    _g4_s79 = (132u + sizeof(_g4_t_v217)) > _g4_s78 ? (132u + sizeof(_g4_t_v217)) : _g4_s78,
    _g4_s80 = (144u + sizeof(_g4_t_v218)) > _g4_s79 ? (144u + sizeof(_g4_t_v218)) : _g4_s79,
    _g4_s81 = (156u + sizeof(_g4_t_v219)) > _g4_s80 ? (156u + sizeof(_g4_t_v219)) : _g4_s80,
    _g4_s82 = (160u + sizeof(_g4_t_v220)) > _g4_s81 ? (160u + sizeof(_g4_t_v220)) : _g4_s81,
    _g4_s83 = (176u + sizeof(_g4_t_v221)) > _g4_s82 ? (176u + sizeof(_g4_t_v221)) : _g4_s82,
    _g4_s84 = (188u + sizeof(_g4_t_v222)) > _g4_s83 ? (188u + sizeof(_g4_t_v222)) : _g4_s83,
    _g4_s85 = (192u + sizeof(_g4_t_v223)) > _g4_s84 ? (192u + sizeof(_g4_t_v223)) : _g4_s84,
    _g4_s86 = (196u + sizeof(_g4_t_v224)) > _g4_s85 ? (196u + sizeof(_g4_t_v224)) : _g4_s85,
    _g4_s87 = (200u + sizeof(_g4_t_v225)) > _g4_s86 ? (200u + sizeof(_g4_t_v225)) : _g4_s86,
    _g4_s88 = (204u + sizeof(_g4_t_v226)) > _g4_s87 ? (204u + sizeof(_g4_t_v226)) : _g4_s87,
    _g4_s89 = (208u + sizeof(_g4_t_v227)) > _g4_s88 ? (208u + sizeof(_g4_t_v227)) : _g4_s88,
    _g4_s90 = (212u + sizeof(_g4_t_v228)) > _g4_s89 ? (212u + sizeof(_g4_t_v228)) : _g4_s89,
    _g4_s91 = (216u + sizeof(_g4_t_v229)) > _g4_s90 ? (216u + sizeof(_g4_t_v229)) : _g4_s90,
    _g4_s92 = (220u + sizeof(_g4_t_v230)) > _g4_s91 ? (220u + sizeof(_g4_t_v230)) : _g4_s91,
    _g4_s93 = (224u + sizeof(_g4_t_v231)) > _g4_s92 ? (224u + sizeof(_g4_t_v231)) : _g4_s92,
    _g4_s94 = (228u + sizeof(_g4_t_v232)) > _g4_s93 ? (228u + sizeof(_g4_t_v232)) : _g4_s93,
    _g4_s95 = (232u + sizeof(_g4_t_v233)) > _g4_s94 ? (232u + sizeof(_g4_t_v233)) : _g4_s94,
    _g4_s96 = (236u + sizeof(_g4_t_v234)) > _g4_s95 ? (236u + sizeof(_g4_t_v234)) : _g4_s95,
    _g4_s97 = (240u + sizeof(_g4_t_v235)) > _g4_s96 ? (240u + sizeof(_g4_t_v235)) : _g4_s96,
    _g4_s98 = (244u + sizeof(_g4_t_v236)) > _g4_s97 ? (244u + sizeof(_g4_t_v236)) : _g4_s97,
    _g4_s99 = (248u + sizeof(_g4_t_v237)) > _g4_s98 ? (248u + sizeof(_g4_t_v237)) : _g4_s98,
    _g4_s100 = (252u + sizeof(_g4_t_v238)) > _g4_s99 ? (252u + sizeof(_g4_t_v238)) : _g4_s99,
    _g4_s101 = (256u + sizeof(_g4_t_v239)) > _g4_s100 ? (256u + sizeof(_g4_t_v239)) : _g4_s100,
    _g4_s102 = (260u + sizeof(_g4_t_v240)) > _g4_s101 ? (260u + sizeof(_g4_t_v240)) : _g4_s101,
    _g4_s103 = (272u + sizeof(_g4_t_v241)) > _g4_s102 ? (272u + sizeof(_g4_t_v241)) : _g4_s102,
    _g4_s104 = (276u + sizeof(_g4_t_v242)) > _g4_s103 ? (276u + sizeof(_g4_t_v242)) : _g4_s103,
    _g4_s105 = (288u + sizeof(_g4_t_v243)) > _g4_s104 ? (288u + sizeof(_g4_t_v243)) : _g4_s104,
    _g4_s106 = (292u + sizeof(_g4_t_v244)) > _g4_s105 ? (292u + sizeof(_g4_t_v244)) : _g4_s105,
    _g4_s107 = (304u + sizeof(_g4_t_v245)) > _g4_s106 ? (304u + sizeof(_g4_t_v245)) : _g4_s106,
    _g4_s108 = (308u + sizeof(_g4_t_v246)) > _g4_s107 ? (308u + sizeof(_g4_t_v246)) : _g4_s107,
    _g4_s109 = (320u + sizeof(_g4_t_v247)) > _g4_s108 ? (320u + sizeof(_g4_t_v247)) : _g4_s108,
    _g4_s110 = (324u + sizeof(_g4_t_v248)) > _g4_s109 ? (324u + sizeof(_g4_t_v248)) : _g4_s109,
    _g4_s111 = (336u + sizeof(_g4_t_v249)) > _g4_s110 ? (336u + sizeof(_g4_t_v249)) : _g4_s110,
    _g4_s112 = (340u + sizeof(_g4_t_v250)) > _g4_s111 ? (340u + sizeof(_g4_t_v250)) : _g4_s111,
    _g4_s113 = (352u + sizeof(_g4_t_v251)) > _g4_s112 ? (352u + sizeof(_g4_t_v251)) : _g4_s112,
    _g4_s114 = (356u + sizeof(_g4_t_v252)) > _g4_s113 ? (356u + sizeof(_g4_t_v252)) : _g4_s113,
    _g4_s115 = (368u + sizeof(_g4_t_v253)) > _g4_s114 ? (368u + sizeof(_g4_t_v253)) : _g4_s114,
    _g4_s116 = (372u + sizeof(_g4_t_v254)) > _g4_s115 ? (372u + sizeof(_g4_t_v254)) : _g4_s115,
    _g4_s117 = (384u + sizeof(_g4_t_v255)) > _g4_s116 ? (384u + sizeof(_g4_t_v255)) : _g4_s116,
    _g4_s118 = (388u + sizeof(_g4_t_v256)) > _g4_s117 ? (388u + sizeof(_g4_t_v256)) : _g4_s117,
    _g4_s119 = (400u + sizeof(_g4_t_v257)) > _g4_s118 ? (400u + sizeof(_g4_t_v257)) : _g4_s118,
    _g4_s120 = (404u + sizeof(_g4_t_v258)) > _g4_s119 ? (404u + sizeof(_g4_t_v258)) : _g4_s119,
    _g4_s121 = (416u + sizeof(_g4_t_v259)) > _g4_s120 ? (416u + sizeof(_g4_t_v259)) : _g4_s120,
    _g4_s122 = (420u + sizeof(_g4_t_v260)) > _g4_s121 ? (420u + sizeof(_g4_t_v260)) : _g4_s121,
    _g4_s123 = (436u + sizeof(_g4_t_v261)) > _g4_s122 ? (436u + sizeof(_g4_t_v261)) : _g4_s122,
    _g4_s124 = (440u + sizeof(_g4_t_v262)) > _g4_s123 ? (440u + sizeof(_g4_t_v262)) : _g4_s123,
    _g4_s125 = (444u + sizeof(_g4_t_v263)) > _g4_s124 ? (444u + sizeof(_g4_t_v263)) : _g4_s124,
    _g4_s126 = (448u + sizeof(_g4_t_v264)) > _g4_s125 ? (448u + sizeof(_g4_t_v264)) : _g4_s125,
    _g4_s127 = (452u + sizeof(_g4_t_v265)) > _g4_s126 ? (452u + sizeof(_g4_t_v265)) : _g4_s126,
    _g4_s128 = (456u + sizeof(_g4_t_v266)) > _g4_s127 ? (456u + sizeof(_g4_t_v266)) : _g4_s127,
    _g4_s129 = (464u + sizeof(_g4_t_v267)) > _g4_s128 ? (464u + sizeof(_g4_t_v267)) : _g4_s128,
    _g4_s130 = (468u + sizeof(_g4_t_v268)) > _g4_s129 ? (468u + sizeof(_g4_t_v268)) : _g4_s129,
    _g4_s131 = (472u + sizeof(_g4_t_v269)) > _g4_s130 ? (472u + sizeof(_g4_t_v269)) : _g4_s130,
    _g4_s132 = (476u + sizeof(_g4_t_v270)) > _g4_s131 ? (476u + sizeof(_g4_t_v270)) : _g4_s131,
    _g4_s133 = (480u + sizeof(_g4_t_v271)) > _g4_s132 ? (480u + sizeof(_g4_t_v271)) : _g4_s132,
    _g4_s134 = (484u + sizeof(_g4_t_v272)) > _g4_s133 ? (484u + sizeof(_g4_t_v272)) : _g4_s133,
    _g4_s135 = (488u + sizeof(_g4_t_v273)) > _g4_s134 ? (488u + sizeof(_g4_t_v273)) : _g4_s134,
    _g4_s136 = (492u + sizeof(_g4_t_v274)) > _g4_s135 ? (492u + sizeof(_g4_t_v274)) : _g4_s135,
    _g4_s137 = (496u + sizeof(_g4_t_v275)) > _g4_s136 ? (496u + sizeof(_g4_t_v275)) : _g4_s136,
    _g4_s138 = (500u + sizeof(_g4_t_v276)) > _g4_s137 ? (500u + sizeof(_g4_t_v276)) : _g4_s137,
    _g4_s139 = (504u + sizeof(_g4_t_v277)) > _g4_s138 ? (504u + sizeof(_g4_t_v277)) : _g4_s138,
    _g4_s140 = (508u + sizeof(_g4_t_v278)) > _g4_s139 ? (508u + sizeof(_g4_t_v278)) : _g4_s139,
    _g4_s141 = (512u + sizeof(_g4_t_v279)) > _g4_s140 ? (512u + sizeof(_g4_t_v279)) : _g4_s140,
    _g4_s142 = (516u + sizeof(_g4_t_v280)) > _g4_s141 ? (516u + sizeof(_g4_t_v280)) : _g4_s141,
    _g4_s143 = (520u + sizeof(_g4_t_v281)) > _g4_s142 ? (520u + sizeof(_g4_t_v281)) : _g4_s142,
    _g4_s144 = (524u + sizeof(_g4_t_v282)) > _g4_s143 ? (524u + sizeof(_g4_t_v282)) : _g4_s143,
    _g4_s145 = (528u + sizeof(_g4_t_v283)) > _g4_s144 ? (528u + sizeof(_g4_t_v283)) : _g4_s144,
    _g4_s146 = (544u + sizeof(_g4_t_v284)) > _g4_s145 ? (544u + sizeof(_g4_t_v284)) : _g4_s145,
    _g4_s147 = (560u + sizeof(_g4_t_v285)) > _g4_s146 ? (560u + sizeof(_g4_t_v285)) : _g4_s146,
    _g4_s148 = (564u + sizeof(_g4_t_v286)) > _g4_s147 ? (564u + sizeof(_g4_t_v286)) : _g4_s147,
    _g4_s149 = (580u + sizeof(_g4_t_v287)) > _g4_s148 ? (580u + sizeof(_g4_t_v287)) : _g4_s148,
    _g4_s150 = (588u + sizeof(_g4_t_v288)) > _g4_s149 ? (588u + sizeof(_g4_t_v288)) : _g4_s149,
    _g4_s151 = (608u + sizeof(_g4_t_v289)) > _g4_s150 ? (608u + sizeof(_g4_t_v289)) : _g4_s150,
    _g4_s152 = (628u + sizeof(_g4_t_v290)) > _g4_s151 ? (628u + sizeof(_g4_t_v290)) : _g4_s151,
    _g4_s153 = (648u + sizeof(_g4_t_v291)) > _g4_s152 ? (648u + sizeof(_g4_t_v291)) : _g4_s152,
    _g4_s154 = (668u + sizeof(_g4_t_v292)) > _g4_s153 ? (668u + sizeof(_g4_t_v292)) : _g4_s153,
    _g4_s155 = (688u + sizeof(_g4_t_v293)) > _g4_s154 ? (688u + sizeof(_g4_t_v293)) : _g4_s154,
    _g4_s156 = (708u + sizeof(_g4_t_v294)) > _g4_s155 ? (708u + sizeof(_g4_t_v294)) : _g4_s155,
    _g4_s157 = (728u + sizeof(_g4_t_v295)) > _g4_s156 ? (728u + sizeof(_g4_t_v295)) : _g4_s156,
    _g4_s158 = (748u + sizeof(_g4_t_v296)) > _g4_s157 ? (748u + sizeof(_g4_t_v296)) : _g4_s157,
    _g4_s159 = (768u + sizeof(_g4_t_v297)) > _g4_s158 ? (768u + sizeof(_g4_t_v297)) : _g4_s158,
    _g4_s160 = (788u + sizeof(_g4_t_v298)) > _g4_s159 ? (788u + sizeof(_g4_t_v298)) : _g4_s159,
    _g4_s161 = (808u + sizeof(_g4_t_v299)) > _g4_s160 ? (808u + sizeof(_g4_t_v299)) : _g4_s160,
    _g4_s162 = (828u + sizeof(_g4_t_v300)) > _g4_s161 ? (828u + sizeof(_g4_t_v300)) : _g4_s161,
    _g4_s163 = (848u + sizeof(_g4_t_v301)) > _g4_s162 ? (848u + sizeof(_g4_t_v301)) : _g4_s162,
    _g4_s164 = (852u + sizeof(_g4_t_v302)) > _g4_s163 ? (852u + sizeof(_g4_t_v302)) : _g4_s163,
    _g4_s165 = (856u + sizeof(_g4_t_v303)) > _g4_s164 ? (856u + sizeof(_g4_t_v303)) : _g4_s164,
    _g4_s166 = (860u + sizeof(_g4_t_v304)) > _g4_s165 ? (860u + sizeof(_g4_t_v304)) : _g4_s165,
    _g4_s167 = (864u + sizeof(_g4_t_v305)) > _g4_s166 ? (864u + sizeof(_g4_t_v305)) : _g4_s166,
    _g4_s168 = (868u + sizeof(_g4_t_v306)) > _g4_s167 ? (868u + sizeof(_g4_t_v306)) : _g4_s167,
    _g4_s169 = (880u + sizeof(_g4_t_v307)) > _g4_s168 ? (880u + sizeof(_g4_t_v307)) : _g4_s168,
    _g4_s170 = (888u + sizeof(_g4_t_v308)) > _g4_s169 ? (888u + sizeof(_g4_t_v308)) : _g4_s169,
    _g4_s171 = (896u + sizeof(_g4_t_v309)) > _g4_s170 ? (896u + sizeof(_g4_t_v309)) : _g4_s170,
    _g4_s172 = (900u + sizeof(_g4_t_v310)) > _g4_s171 ? (900u + sizeof(_g4_t_v310)) : _g4_s171,
    _g4_s173 = (904u + sizeof(_g4_t_v311)) > _g4_s172 ? (904u + sizeof(_g4_t_v311)) : _g4_s172,
    _g4_s174 = (908u + sizeof(_g4_t_v312)) > _g4_s173 ? (908u + sizeof(_g4_t_v312)) : _g4_s173,
    _g4_s175 = (916u + sizeof(_g4_t_v313)) > _g4_s174 ? (916u + sizeof(_g4_t_v313)) : _g4_s174,
    _g4_s176 = (928u + sizeof(_g4_t_v314)) > _g4_s175 ? (928u + sizeof(_g4_t_v314)) : _g4_s175,
    _g4_s177 = (936u + sizeof(_g4_t_v315)) > _g4_s176 ? (936u + sizeof(_g4_t_v315)) : _g4_s176,
    _g4_s178 = (940u + sizeof(_g4_t_v316)) > _g4_s177 ? (940u + sizeof(_g4_t_v316)) : _g4_s177,
    _g4_s179 = (944u + sizeof(_g4_t_v317)) > _g4_s178 ? (944u + sizeof(_g4_t_v317)) : _g4_s178,
    _g4_s180 = (948u + sizeof(_g4_t_v318)) > _g4_s179 ? (948u + sizeof(_g4_t_v318)) : _g4_s179,
    _g4_s181 = (952u + sizeof(_g4_t_v319)) > _g4_s180 ? (952u + sizeof(_g4_t_v319)) : _g4_s180,
    _g4_s182 = (956u + sizeof(_g4_t_v320)) > _g4_s181 ? (956u + sizeof(_g4_t_v320)) : _g4_s181,
    _g4_s183 = (960u + sizeof(_g4_t_v321)) > _g4_s182 ? (960u + sizeof(_g4_t_v321)) : _g4_s182,
    _g4_s184 = (964u + sizeof(_g4_t_v322)) > _g4_s183 ? (964u + sizeof(_g4_t_v322)) : _g4_s183,
    _g4_s185 = (972u + sizeof(_g4_t_v323)) > _g4_s184 ? (972u + sizeof(_g4_t_v323)) : _g4_s184,
    _g4_s186 = (1000u + sizeof(_g4_t_v324)) > _g4_s185 ? (1000u + sizeof(_g4_t_v324)) : _g4_s185,
    _g4_s187 = (1004u + sizeof(_g4_t_v325)) > _g4_s186 ? (1004u + sizeof(_g4_t_v325)) : _g4_s186,
    _g4_s188 = (1008u + sizeof(_g4_t_v326)) > _g4_s187 ? (1008u + sizeof(_g4_t_v326)) : _g4_s187,
    _g4_s189 = (1012u + sizeof(_g4_t_v327)) > _g4_s188 ? (1012u + sizeof(_g4_t_v327)) : _g4_s188,
    _g4_s190 = (1016u + sizeof(_g4_t_v328)) > _g4_s189 ? (1016u + sizeof(_g4_t_v328)) : _g4_s189,
    _g4_s191 = (1020u + sizeof(_g4_t_v329)) > _g4_s190 ? (1020u + sizeof(_g4_t_v329)) : _g4_s190,
    _g4_s192 = (1024u + sizeof(_g4_t_v330)) > _g4_s191 ? (1024u + sizeof(_g4_t_v330)) : _g4_s191
  };
  alignas(16) uint8_t _g4_sf[_g4_s192];
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 0u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 0u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 0u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 0u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 0u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 0u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 0u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 0u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 0u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 0u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 0u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 0u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 0u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 0u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 4u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 48u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 48u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 48u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 48u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 48u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 48u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 48u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 48u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 52u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 59u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 60u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 64u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 68u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 72u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 76u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 80u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 84u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 88u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 92u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 96u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 100u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 100u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 104u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 104u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 104u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 108u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 108u);
  _g4_t_IsNotEmpty &IsNotEmpty = *reinterpret_cast<_g4_t_IsNotEmpty *>(_g4_sf + 112u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 112u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 116u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 116u);
  _g4_t_EventBatchSizeMaximum &EventBatchSizeMaximum = *reinterpret_cast<_g4_t_EventBatchSizeMaximum *>(_g4_sf + 116u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 116u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 116u);
  _g4_t_p_count &p_count = *reinterpret_cast<_g4_t_p_count *>(_g4_sf + 120u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 120u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 120u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 120u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 120u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 124u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 124u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 124u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 124u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 128u);
  _g4_t_nusers &nusers = *reinterpret_cast<_g4_t_nusers *>(_g4_sf + 128u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 128u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 128u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 128u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 128u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 128u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 128u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 128u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 128u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 132u);
  _g4_t_count &count = *reinterpret_cast<_g4_t_count *>(_g4_sf + 132u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 132u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 132u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 132u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 132u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 132u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 132u);
  _g4_t_m &m = *reinterpret_cast<_g4_t_m *>(_g4_sf + 132u);
  _g4_t_SessionId &SessionId = *reinterpret_cast<_g4_t_SessionId *>(_g4_sf + 132u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 132u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 144u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 156u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 160u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 176u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 188u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 192u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 196u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 200u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 204u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 208u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 212u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 216u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 220u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 224u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 228u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 232u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 236u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 240u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 244u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 248u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 252u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 256u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 260u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 272u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 276u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 288u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 292u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 304u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 308u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 320u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 324u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 336u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 340u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 352u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 356u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 368u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 372u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 384u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 388u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 400u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 404u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 416u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 420u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 436u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 440u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 444u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 448u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 452u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 456u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 464u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 468u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 472u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 476u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 480u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 484u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 488u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 492u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 496u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 500u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 504u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 508u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 512u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 516u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 520u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 524u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 528u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 544u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 560u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 564u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 580u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 588u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 608u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 628u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 648u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 668u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 688u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 708u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 728u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 748u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 768u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 788u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 808u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 828u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 848u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 852u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 856u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 860u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 864u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 868u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 880u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 888u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 896u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 900u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 904u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 908u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 916u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 928u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 936u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 940u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 944u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 948u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 952u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 956u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 960u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 964u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 972u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 1000u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 1004u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 1008u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 1012u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 1016u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 1020u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 1024u);

  v330[1090] = (uint32_t)(uintptr_t)(&self);
  v173 = self;
  v164 = (pthread_mutex_t *)((char *)self + 13336);
  if ( self == (glotv3::SingletonMutexedProcessor::Self *)-13336 )
    sub_134E404();
  v1 = (pthread_mutex_t *)((char *)self + 13336);
  do
    v2 = pthread_mutex_lock(v1);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::Construct((boost::lock_error::Self *)v288, v2, "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  if ( *((uint8_t *)v173 + 13393) == 0 )
  {
    mutex = (pthread_mutex_t *)((char *)v173 + 13344);
    if ( *((uint8_t *)v173 + 13392) == 0 )
    {
      while ( 1 )
      {
        current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data(v139);
        v207 = current_thread_data;
        if ( current_thread_data != nullptr && ((g4_glibc_pthread_mutex_t *)(current_thread_data))[4].__size[16] != 0 )
        {
          v4 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(current_thread_data) + (24 * (1)));
          do
            v5 = pthread_mutex_lock(v4);
          while ( v5 == 4 );
          if ( v5 != 0 )
          {
            boost::lock_error::Construct(
              (boost::lock_error::Self *)v290,
              v5,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          ((g4_glibc_pthread_mutex_t *)(v207))[3].__owner = (int)(uintptr_t)(mutex);
          ((g4_glibc_pthread_mutex_t *)(v207))[3].__kind = (int)(uintptr_t)(v173) + 13348;
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              196,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          sub_1321760(v4);
          v197 = 1;
        }
        else
        {
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              200,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          v197 = 0;
        }
        sub_1321760(v164);
        do
          v6 = pthread_cond_wait((pthread_cond_t *)((char *)v173 + 13348), reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v173) + (24 * (556))));
        while ( v6 == 4 );
        v7 = v6;
        if ( v197 != 0 )
        {
          if ( pthread_mutex_unlock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              207,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
          v8 = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v207) + (24 * (1)));
          do
            v9 = pthread_mutex_lock(v8);
          while ( v9 == 4 );
          if ( v9 != 0 )
          {
            boost::lock_error::Construct(
              (boost::lock_error::Self *)v291,
              v9,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          ((g4_glibc_pthread_mutex_t *)(v207))[3].__owner = 0;
          ((g4_glibc_pthread_mutex_t *)(v207))[3].__kind = 0;
          sub_1321760(v8);
          v10 = v164;
        }
        else
        {
          v10 = v164;
          if ( pthread_mutex_unlock(mutex) != 0 )
          {
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              214,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
            v10 = v164;
          }
        }
        do
          v11 = pthread_mutex_lock(v10);
        while ( v11 == 4 );
        if ( v11 != 0 )
        {
          boost::lock_error::Construct(
            (boost::lock_error::Self *)v292,
            v11,
            "boost: mutex lock failed in pthread_mutex_lock");
          std::terminate();
        }
        boost::this_thread::interruption_point(v140);
        if ( v7 != 0 )
        {
          v138 = (int)(uintptr_t)(sub_18F81E0());
          boost::system::system_error::Construct(
            &v289,
            v7,
            v138,
            "boost::condition_variable::wait failed in pthread_cond_wait");
          v289 = (void (**)(boost::condition_error::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093D18));
          std::terminate();
        }
        if ( *((uint8_t *)v173 + 13392) != 0 )
          return sub_1321760(v164);
        IsNotEmpty = glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v173 + 24);
        v179 = glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v173 + 28);
        v162 = (int)(uintptr_t)(v173) + 32;
        v12 = glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v173 + 32);
        v183 = v12;
        if ( IsNotEmpty != 0 || v179 != 0 || v12 != 0 )
          break;
LABEL_92:
        *((uint8_t *)v173 + 13393) = 0;
        if ( *((uint8_t *)v173 + 13393) != 0 || *((uint8_t *)v173 + 13392) != 0 )
          return sub_1321760(v164);
      }
      sub_1358000();
      v329 = 0;
      v330[0] = 0;
      if ( g4_fnstatic_3607360f1c == 0 )
      {
        g4_fnstatic_3607360f1c = 1;
        if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
        {
          v13 = pthread_mutex_init(
                  &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
                  nullptr);
          if ( v13 != 0 )
          {
            boost::thread_resource_error::Construct(
              (boost::thread_resource_error *)v293,
              v13,
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
        v14 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
      while ( v14 == 4 );
      if ( v14 != 0 )
      {
        boost::lock_error::Construct((boost::lock_error::Self *)v294, v14, "boost: mutex lock failed in pthread_mutex_lock");
        std::terminate();
      }
      owner = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
      for ( i = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
            owner != 0;
            owner = *(v17 - 1) )
      {
        v17 = (int *)(owner + i - 4);
        i = *v17;
      }
      sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
      if ( g4_fnstatic_3607360f1c == 0 )
      {
        g4_fnstatic_3607360f1c = 1;
        if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
        {
          v18 = pthread_mutex_init(
                  &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
                  nullptr);
          if ( v18 != 0 )
          {
            boost::thread_resource_error::Construct(
              (boost::thread_resource_error *)v295,
              v18,
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
        v19 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
      while ( v19 == 4 );
      if ( v19 != 0 )
      {
        boost::lock_error::Construct((boost::lock_error::Self *)v296, v19, "boost: mutex lock failed in pthread_mutex_lock");
        std::terminate();
      }
      nusers = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers;
      if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers <= 3 )
      {
        nusers = 4;
      }
      else if ( (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__size[16]
               & 3) != 0 )
      {
        nusers = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
               + 4
               - (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__size[16]
                & 3);
        v20 = nusers & 3;
        if ( nusers <= 3 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/pool/pool.hpp",
            353,
            "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = g"
            "lotv3::event_list_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
            "s >= min_alloc_size");
          v20 = nusers;
        }
        if ( v20 != 0 )
          __assert2(
            "../../../../../lib/glitch/include/boost/pool/pool.hpp",
            354,
            "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = g"
            "lotv3::event_list_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
            "s % min_align == 0");
      }
      v193 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
           / nusers
           + (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
            % nusers != 0);
      if ( v193 != 0 )
      {
        count = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count;
        p_count = &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count;
        if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count != 0 )
        {
          while ( 2 )
          {
            v21 = (unsigned int *)count;
            v22 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
                / nusers
                + (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
                 % nusers != 0);
            while ( --v22 != 0 )
            {
              if ( (unsigned int *)*v21 != (unsigned int *)((char *)v21 + nusers) )
              {
                count = *v21;
                p_count = v21;
                goto LABEL_58;
              }
              v21 = (unsigned int *)*v21;
            }
            if ( v21 != nullptr )
            {
              *p_count = *v21;
              goto LABEL_71;
            }
LABEL_58:
            if ( count != 0 )
              continue;
            break;
          }
        }
      }
      spins = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins;
      if ( v193 >= boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins )
        spins = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
              / nusers
              + (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
               % nusers != 0);
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = spins;
      v24 = nusers * spins + 8;
      count = opNewArray(v24, (const std::nothrow_t *)&std::nothrow);
      if ( count != 0 )
        goto LABEL_62;
      if ( v193 < boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins )
      {
        v133 = (unsigned int)boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins >> 1;
        if ( v193 >= (unsigned int)boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins >> 1 )
          v133 = v193;
        boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = v133;
        v24 = nusers * v133 + 8;
        count = opNewArray(v24, (const std::nothrow_t *)&std::nothrow);
        if ( count != 0 )
        {
LABEL_62:
          v25 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins;
          if ( v193 < boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins )
          {
            sub_60EFD0(
              &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage
            + 1,
              count + nusers * v193,
              v24 - nusers * v193 - 8,
              nusers);
            v25 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins;
          }
          if ( unk_21185BC != 0 )
          {
            if ( unk_21185BC > v25
                             * nusers
                             / boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers )
            {
              v29 = 2 * v25;
              v30 = unk_21185BC
                  * boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers
                  / nusers;
              if ( v29 <= v30 )
                v30 = v29;
              boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = v30;
            }
          }
          else
          {
            boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 2 * v25;
          }
          if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner != 0
            && count >= boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner )
          {
            v122 = (unsigned int *)(boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner
                                  + boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind
                                  - 4);
            for ( j = *(uint32_t *)(boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner
                                + boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind
                                - 8); j != 0 && count >= j; j = *(v122 - 1) )
              v122 = (unsigned int *)(j + *v122 - 4);
            v205 = (void *)*v122;
            v124 = (uint32_t *)(count + v24 - 4);
            *(v124 - 1) = j;
            *v124 = (uint32_t)(uintptr_t)(v205);
            *(v122 - 1) = count;
            *v122 = v24;
          }
          else
          {
            v26 = (int *)((uint32_t *)(count + v24 - 4));
            *(v26 - 1) = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
            *v26 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
            boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = count;
            boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = v24;
          }
        }
      }
LABEL_71:
      sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
      if ( count == 0 )
        goto LABEL_394;
      v330[0] = count;
      v27 = nullptr;
      *(uint32_t *)(count + 4) = 1;
      *(uint32_t *)(count + 8) = 1;
      *(uint32_t *)(count + 12) = 0;
      *(uint8_t *)(count + 16) = 0;
      *(uint32_t *)count = ((uint32_t)(uintptr_t)&off_2093CE8);
      if ( v330[0] != 0 )
        v27 = (uint8_t *)G4_VCALL<int>(v330[0], 20);
      if ( v27 != (uint8_t *)-4 )
        glotv3::EventList::Construct((glotv3::EventList::Self *)(v27 + 4));
      *v27 = 1;
      v241 = v27 + 4;
      v242[0] = v330[0];
      if ( v330[0] != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v330[0] + 4), 1);
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v330);
      if ( IsNotEmpty != 0 )
      {
        v245 = v241;
        v246[0] = v242[0];
        if ( v242[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v242[0] + 4), 1);
        v243 = v239;
        v244[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(v173, 0, &v243, (glotv3::EventList::Self **)(&v245));
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v244);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v246);
      }
      if ( v179 != 0 )
      {
        v249 = v241;
        v250[0] = v242[0];
        if ( v242[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v242[0] + 4), 1);
        v247 = v239;
        v248[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(v173, 1, &v247, (glotv3::EventList::Self **)(&v249));
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v248);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v250);
      }
      if ( v183 == 0 )
      {
LABEL_91:
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v242);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v240);
        goto LABEL_92;
      }
      v304 = &v302;
      v305 = &v302;
      v302 = 0;
      v303 = nullptr;
      v306 = 0;
      glotv3::Reader::Construct((glotv3::Reader::Self *)&v329, v162);
      v163 = 0;
      while ( 1 )
      {
        v251 = v239;
        v252[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        v31 = glotv3::Reader::ReadNext(&v329, &v251);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v252);
        if ( v31 == 0 )
        {
          for ( k = v304; k != &v302; k = (int *)sub_1904890(k) )
          {
            if ( *((uint8_t *)v173 + 13419) != 0
              || (v121 = (glotv3::Event::Self *)sub_134C470(),
                  (SessionId = glotv3::Event::getSessionId(v121)) == glotv3::TrackingManager::GetCurrentSessionIdentifier(*((glotv3::TrackingManager::Self **)v173 + 3297))) )
            {
              v263 = k[5];
              v264 = k[6];
              if ( v264 != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v264 + 4), 1);
              glotv3::SingletonMutexedProcessor::QueueForWriting(v173, (int)(uintptr_t)(&v263), 0, 1);
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v264);
            }
            else
            {
              v265 = k[5];
              v266[0] = k[6];
              if ( v266[0] != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v266[0] + 4), 1);
              glotv3::SingletonMutexedProcessor::AddCompactedEvent((int)(uintptr_t)(v173), (int)(uintptr_t)(&v265));
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v266);
              v163 = 1;
            }
          }
          *((uint8_t *)v173 + 13419) = 1;
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
            (int)(uintptr_t)(&v301),
            v303);
          v303 = nullptr;
          v304 = &v302;
          v305 = &v302;
          v306 = 0;
          if ( v163 != 0 )
          {
            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_FIRED_DUE_TO_COMPACTION);
            sub_135E550();
            v285 = v266[1];
            v286[0] = v267;
            if ( v267 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v267 + 4), 1);
            boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v267);
            v255 = v285;
            v256[0] = v286[0];
            if ( v286[0] != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v286[0] + 4), 1);
            glotv3::SingletonMutexedProcessor::QueueForWriting(v173, (int)(uintptr_t)(&v255), 1, 0);
            boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v256);
            boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v286);
          }
          glotv3::Reader::Destroy((glotv3::Reader::Self *)&v329);
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
            (int)(uintptr_t)(&v301),
            v303);
          glotv3::Fs::RemovePath(v162);
          goto LABEL_91;
        }
        v32 = (glotv3::Event::Self *)sub_134C470();
        EventType = glotv3::Event::getEventType(v32);
        do
          v34 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
        while ( v34 == 4 );
        if ( v34 != 0 )
        {
          boost::lock_error::Construct(
            (boost::lock_error::Self *)v297,
            v34,
            "boost: mutex lock failed in pthread_mutex_lock");
LABEL_394:
          std::terminate();
        }
        v35 = v287;
        v220[0] = (int)(uintptr_t)(&dword_213B814);
        while ( 1 )
        {
          v36 = EventType % 0xA + 48;
          EventType /= 0xAu;
          *(v35 - 1) = v36;
          if ( EventType == 0 )
            break;
          --v35;
        }
        sub_193A9B0((int)(uintptr_t)(v220), 0, dword_213B808[0], v35 - 1, v287 - (v35 - 1));
        sub_1321760(&glotv3::Utils::s_ToStringMutex);
        g4_std::string::construct_copy(v222, v220);
        g4_std::string::append_str(v222, &glotv3::system::HASHTAG);
        g4_std::string::Destroy(v220);
        v170 = (int *)opNew(0x20u);
        src = v170 + 3;
        v171 = opNew(0x200u);
        v170[3] = v171;
        v169 = v171 + 512;
        v37 = (glotv3::Event::Self *)sub_134C470();
        glotv3::Event::getEventType(v37);
        glotv3::SingletonMutexedProcessor::GetEventParameters(&v307);
        v38 = (glotv3::Event::Self *)sub_134C470();
        glotv3::Event::getEventType(v38);
        glotv3::SingletonMutexedProcessor::GetEventParameters(&v314);
        v176 = v310;
        v180 = (unsigned int)(uintptr_t)(v170 + 3);
        v39 = v308;
        v184 = v309;
        v166 = v171 + 512;
        v167 = v171;
        v182 = v171;
        v168 = 8;
        while ( v311 != v39 )
        {
          while ( 1 )
          {
            v284[0] = (uint32_t)(uintptr_t)(v315);
            v284[1] = v316;
            v284[2] = (uint32_t)(uintptr_t)(v317);
            v284[3] = v318;
            v286[1] = v321;
            v40 = v319;
            v286[0] = v320;
            v286[2] = (uint32_t)(uintptr_t)(v322);
            v285 = v319;
            std::__find<std::_Deque_iterator<std::string,std::string const&,std::string const*>,std::string>(v283);
            if ( v283[0] == v40 )
            {
              if ( v182 == v166 - 4 )
              {
                if ( v168 - ((int)(v180 - (uint32_t)(uintptr_t)(v170)) >> 2) <= 1 )
                {
                  v127 = (int)(v180 - (uint32_t)(uintptr_t)(src)) >> 2;
                  v128 = v127 + 1;
                  v129 = v127 + 2;
                  v217 = v128;
                  if ( 2 * v129 >= v168 )
                  {
                    v134 = v168;
                    if ( v168 != 0 )
                    {
                      v135 = 2 * v168 + 2;
                      v168 = v135;
                      if ( v135 > 0x3FFFFFFF )
                        sub_18FFEE0(v134, v135);
                    }
                    else
                    {
                      v168 = 3;
                    }
                    v206 = (int *)opNew(4 * v168);
                    v130 = &v206[(v168 - v129) >> 1];
                    v136 = (int)(v180 + 4 - (uint32_t)(uintptr_t)(src)) >> 2;
                    if ( v136 != 0 )
                      memmove(v130, src, 4 * v136);
                    opDelete(v170);
                    v170 = v206;
                  }
                  else
                  {
                    v130 = &v170[(v168 - v129) >> 1];
                    v131 = v180 + 4 - (uint32_t)(uintptr_t)(src);
                    if ( v130 >= src )
                    {
                      v137 = v131 >> 2;
                      if ( v137 != 0 )
                        memmove(&v130[v128 - v137], src, 4 * v137);
                    }
                    else
                    {
                      v132 = v131 >> 2;
                      if ( v132 != 0 )
                        memmove(v130, src, 4 * v132);
                    }
                  }
                  src = v130;
                  v169 = *v130 + 512;
                  v180 = (unsigned int)(uintptr_t)(&v130[v217 - 1]);
                }
                v125 = opNew(0x200u);
                *(uint32_t *)(v180 + 4) = v125;
                if ( v182 != 0 )
                {
                  g4_std::string::construct_copy(v182, v39);
                  v126 = *(uint32_t *)(v180 + 4);
                  v182 = v126;
                }
                else
                {
                  v182 = v125;
                  v126 = v125;
                }
                v180 += 4;
                v166 = v126 + 512;
                v167 = v182;
              }
              else
              {
                if ( v182 != 0 )
                  g4_std::string::construct_copy(v182, v39);
                v182 += 4;
              }
            }
            v39 += 4;
            if ( v184 != v39 )
              break;
            v39 = *(uint32_t *)(v176 + 4);
            v176 += 4;
            v184 = v39 + 512;
            if ( v311 == v39 )
              goto LABEL_121;
          }
        }
LABEL_121:
        v41 = v171;
        v194 = (int)(uintptr_t)(src);
        v199 = (char *)v169;
LABEL_122:
        v209 = (char *)v41;
        while ( v209 != (char *)v182 )
        {
          g4_std::string::construct_copy(v284, v209);
          sub_134C470();
          glotv3::Event::getKeyPair(&v223);
          v42 = *(uint32_t *)(v223 - 12);
          g4_std::string::Destroy(&v223);
          if ( v42 != 0 )
          {
            sub_134C470();
            glotv3::Event::getKeyPair(v228);
            do
              v49 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
            while ( v49 == 4 );
            if ( v49 != 0 )
            {
              boost::lock_error::Construct(
                (boost::lock_error::Self *)v299,
                v49,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            g4_std::string::construct_copy(v229, v228);
            sub_1321760(&glotv3::Utils::s_ToStringMutex);
            g4_std::string::construct_copy(v227, v284);
            g4_std::string::append_str(v227, &glotv3::system::HASHTAG);
            g4_std::string::construct_copy(v230, v227);
            g4_std::string::append_str(v230, v229);
            g4_std::string::construct_copy(v231, v230);
            g4_std::string::append_str(v231, &glotv3::system::HASHTAG);
            g4_std::string::append_str(v222, v231);
            g4_std::string::Destroy(v231);
            g4_std::string::Destroy(v230);
            g4_std::string::Destroy(v227);
            g4_std::string::Destroy(v229);
            g4_std::string::Destroy(v228);
          }
          else
          {
            v43 = sub_134C470();
            KeyPairAsUInt = glotv3::Event::getKeyPairAsUInt(v43, v284);
            do
              v45 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
            while ( v45 == 4 );
            if ( v45 != 0 )
            {
              boost::lock_error::Construct(
                (boost::lock_error::Self *)v298,
                v45,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            v46 = v287;
            v221[0] = (int)(uintptr_t)(&dword_213B814);
            while ( 1 )
            {
              v47 = KeyPairAsUInt % 0xA + 48;
              KeyPairAsUInt /= 0xAu;
              *(v46 - 1) = v47;
              if ( KeyPairAsUInt == 0 )
                break;
              --v46;
            }
            sub_193A9B0((int)(uintptr_t)(v221), 0, dword_213B808[0], v46 - 1, v287 - (v46 - 1));
            sub_1321760(&glotv3::Utils::s_ToStringMutex);
            g4_std::string::construct_copy(v224, v284);
            g4_std::string::append_str(v224, &glotv3::system::HASHTAG);
            g4_std::string::construct_copy(v225, v224);
            g4_std::string::append_str(v225, v221);
            g4_std::string::construct_copy(v226, v225);
            g4_std::string::append_str(v226, &glotv3::system::HASHTAG);
            g4_std::string::append_str(v222, v226);
            g4_std::string::Destroy(v226);
            g4_std::string::Destroy(v225);
            g4_std::string::Destroy(v224);
            g4_std::string::Destroy(v221);
          }
          g4_std::string::Destroy(v284);
          v209 += 4;
          if ( v199 == v209 )
          {
            v48 = v194;
            v194 += 4;
            v41 = *(uint32_t *)(v48 + 4);
            v199 = (char *)(v41 + 512);
            goto LABEL_122;
          }
        }
        sub_134C470();
        glotv3::Event::getGameVersion((glotv3::Event::Self *)v232);
        sub_134C470();
        glotv3::Event::getKeyPair(v234);
        do
          v50 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
        while ( v50 == 4 );
        if ( v50 != 0 )
        {
          boost::lock_error::Construct(
            (boost::lock_error::Self *)v300,
            v50,
            "boost: mutex lock failed in pthread_mutex_lock");
          std::terminate();
        }
        g4_std::string::construct_copy(v235, v234);
        sub_1321760(&glotv3::Utils::s_ToStringMutex);
        g4_std::string::construct_copy(v233, v232);
        g4_std::string::append_str(v233, &glotv3::system::HASHTAG);
        g4_std::string::construct_copy(v236, v233);
        g4_std::string::append_str(v236, v235);
        g4_std::string::construct_copy(v237, v236);
        g4_std::string::append_str(v237, &glotv3::system::HASHTAG);
        g4_std::string::append_str(v222, v237);
        g4_std::string::Destroy(v237);
        g4_std::string::Destroy(v236);
        g4_std::string::Destroy(v233);
        g4_std::string::Destroy(v235);
        g4_std::string::Destroy(v234);
        glotv3::Utils::GetSHA1(v238);
        g4_std::string::assign_str(v222, v238);
        g4_std::string::Destroy(v238);
        v51 = (int *)v303;
        v210 = (void *)v319;
        v200 = v315;
        if ( v303 != nullptr )
        {
          v52 = &v302;
          do
          {
            while ( (int)g4_std::string::compare_str(v51 + 4, v222) >= 0 )
            {
              v52 = v51;
              v51 = (int *)v51[2];
              if ( v51 == nullptr )
                goto LABEL_146;
            }
            v51 = (int *)v51[3];
          }
          while ( v51 != nullptr );
LABEL_146:
          if ( v52 != &v302 && (int)g4_std::string::compare_str(v222, v52 + 4) >= 0 )
          {
            v53 = &v302;
            v54 = (glotv3::Event::Self *)sub_134C470();
            v55 = glotv3::Event::getEventType(v54);
            EventBatchSizeMaximum = glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(v173, v55);
            v56 = (int *)v303;
            if ( v210 != v200 )
            {
              if ( v303 != nullptr )
              {
                do
                {
                  while ( (int)g4_std::string::compare_str(v56 + 4, v222) >= 0 )
                  {
                    v53 = v56;
                    v56 = (int *)v56[2];
                    if ( v56 == nullptr )
                      goto LABEL_154;
                  }
                  v56 = (int *)v56[3];
                }
                while ( v56 != nullptr );
LABEL_154:
                if ( v53 != &v302 && (int)g4_std::string::compare_str(v222, v53 + 4) >= 0 )
                  goto LABEL_168;
              }
              v268 = 0;
              v269 = 0;
              g4_std::string::construct_copy(v274, v222);
              v275 = v268;
              v276 = v269;
              if ( v269 != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v269 + 4), 1);
              if ( v53 == &v302 )
              {
                if ( v306 != 0 && (int)g4_std::string::compare_str(v305 + 4, v274) < 0 )
                  goto LABEL_292;
              }
              else if ( (int)g4_std::string::compare_str(v274, v53 + 4) >= 0 )
              {
                if ( (int)g4_std::string::compare_str(v53 + 4, v274) >= 0 )
                  goto LABEL_167;
                if ( v305 == v53 )
                  goto LABEL_292;
                v158 = sub_19048E0(v53);
                if ( (int)g4_std::string::compare_str(v274, v158 + 16) < 0 )
                  goto LABEL_292;
              }
              else
              {
                if ( v304 == v53 )
                  goto LABEL_292;
                v154 = sub_1904940(v53);
                if ( (int)g4_std::string::compare_str(v154 + 16, v274) < 0 )
                {
                  if ( *(uint32_t *)(v154 + 12) != 0 )
                  {
                    v57 = opNew(0x1Cu);
                    if ( v57 != -16 )
                    {
                      v155 = v57;
                      g4_std::string::construct_copy(v57 + 16, v274);
                      v57 = v155;
                      *(uint32_t *)(v155 + 20) = v275;
                      v58 = v276;
                      v59 = v276 == 0;
                      *(uint32_t *)(v155 + 24) = v276;
                      if ( !v59 )
                        __sync_add_and_fetch((volatile int32_t *)(v58 + 4), 1);
                    }
                    v156 = (int *)v57;
                    sub_1904970(1, v57, v53, &v302);
                    ++v306;
                    v53 = v156;
LABEL_167:
                    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v276);
                    g4_std::string::Destroy(v274);
                    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v269);
LABEL_168:
                    v285 = v53[5];
                    v286[0] = v53[6];
                    if ( v286[0] != 0 )
                      __sync_add_and_fetch((volatile int32_t *)(v286[0] + 4), 1);
                    v60 = (glotv3::Event::Self *)sub_134C470();
                    SmartCount = glotv3::Event::getSmartCount(v60);
                    v62 = (glotv3::Event::Self *)sub_134C470();
                    glotv3::Event::setSmartCount(v62, SmartCount + 1);
                    v63 = (int)(uintptr_t)(v315);
                    v201 = v317;
                    v189 = v318;
                    while ( v319 != v63 )
                    {
                      while ( 1 )
                      {
                        v64 = sub_134C470();
                        v65 = glotv3::Event::getKeyPairAsUInt(v64, v63);
                        v66 = sub_134C470();
                        v211 = v65 + glotv3::Event::getKeyPairAsUInt(v66, v63);
                        v323[2] = 3;
                        v323[6] = 0;
                        v324 = nullptr;
                        v326 = 0;
                        v327 = 0;
                        v328 = 0;
                        v325 = 2048;
                        v67 = opNew(1u);
                        v68 = v325;
                        v327 = v67;
                        v328 = v67;
                        v69 = (uint32_t *)(malloc(v325 + 12));
                        v70 = v324;
                        *v69 = v68;
                        v69[2] = (uint32_t)(uintptr_t)(v70);
                        v69[1] = 0;
                        v324 = v69;
                        v323[0] = v211;
                        v71 = sub_134C470();
                        v153 = v63;
                        v63 += 4;
                        glotv3::Event::addKeyPair(v71, v153, (glotv3::EventValue::Self *)v323);
                        glotv3::EventValue::Destroy((glotv3::EventValue::Self *)v323);
                        if ( v201 != (void *)v63 )
                          break;
                        v63 = *(uint32_t *)(v189 + 4);
                        v189 += 4;
                        v201 = (void *)(v63 + 512);
                        if ( v319 == v63 )
                          goto LABEL_174;
                      }
                    }
LABEL_174:
                    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v286);
                    if ( glotv3::TrackingManager::s_IsSpyInstantSendingActive == 0 )
                      goto LABEL_263;
                    goto LABEL_175;
                  }
LABEL_292:
                  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(&v219);
                  v53 = v219;
                  goto LABEL_167;
                }
              }
              std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(v218);
              v53 = (int *)v218[0];
              goto LABEL_167;
            }
            if ( v303 != nullptr )
            {
              do
              {
                while ( (int)g4_std::string::compare_str(v56 + 4, v222) >= 0 )
                {
                  v53 = v56;
                  v56 = (int *)v56[2];
                  if ( v56 == nullptr )
                    goto LABEL_298;
                }
                v56 = (int *)v56[3];
              }
              while ( v56 != nullptr );
LABEL_298:
              if ( v53 != &v302 && (int)g4_std::string::compare_str(v222, v53 + 4) >= 0 )
                goto LABEL_308;
            }
            v270 = 0;
            v271 = 0;
            g4_std::string::construct_copy(v277, v222);
            v278 = v270;
            v279 = v271;
            if ( v271 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v271 + 4), 1);
            if ( v53 == &v302 )
            {
              if ( v306 == 0 || (int)g4_std::string::compare_str(v305 + 4, v277) >= 0 )
                goto LABEL_370;
            }
            else
            {
              if ( (int)g4_std::string::compare_str(v277, v53 + 4) < 0 )
              {
                if ( v53 == v304 )
                  goto LABEL_306;
                v159 = sub_1904940(v53);
                if ( (int)g4_std::string::compare_str(v159 + 16, v277) < 0 )
                  goto LABEL_306;
LABEL_370:
                std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(v218);
                v53 = (int *)v218[0];
LABEL_307:
                boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v279);
                g4_std::string::Destroy(v277);
                boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v271);
LABEL_308:
                v285 = v53[5];
                v286[0] = v53[6];
                if ( v286[0] != 0 )
                  __sync_add_and_fetch((volatile int32_t *)(v286[0] + 4), 1);
                v117 = (glotv3::Event::Self *)sub_134C470();
                v118 = glotv3::Event::getCount(v117);
                v119 = (glotv3::Event::Self *)sub_134C470();
                glotv3::Event::setCount(v119, v118 + 1);
                goto LABEL_174;
              }
              if ( (int)g4_std::string::compare_str(v53 + 4, v277) >= 0 )
                goto LABEL_307;
              if ( v53 != v305 )
              {
                v160 = sub_19048E0(v53);
                if ( (int)g4_std::string::compare_str(v277, v160 + 16) >= 0 )
                  goto LABEL_370;
              }
            }
LABEL_306:
            std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(&v219);
            v53 = v219;
            goto LABEL_307;
          }
        }
        v101 = &v302;
        v102 = (glotv3::Event::Self *)sub_134C470();
        v103 = glotv3::Event::getEventType(v102);
        EventBatchSizeMaximum = glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(v173, v103);
        v104 = (int *)v303;
        if ( v303 == nullptr )
          break;
        do
        {
          while ( (int)g4_std::string::compare_str(v104 + 4, v222) >= 0 )
          {
            v101 = v104;
            v104 = (int *)v104[2];
            if ( v104 == nullptr )
              goto LABEL_250;
          }
          v104 = (int *)v104[3];
        }
        while ( v104 != nullptr );
LABEL_250:
        if ( v101 == &v302 || (int)g4_std::string::compare_str(v222, v101 + 4) < 0 )
          break;
LABEL_260:
        v105 = v239;
        v106 = 0;
        v257 = v239;
        v258[0] = v240[0];
        if ( v240[0] != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
          v105 = v257;
          v106 = v258[0];
        }
        v107 = v101[5];
        v101[5] = v105;
        v257 = v107;
        v108 = v101[6];
        v101[6] = v106;
        v258[0] = v108;
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v258);
        if ( glotv3::TrackingManager::s_IsSpyInstantSendingActive == 0 )
        {
LABEL_263:
          v109 = (glotv3::Event::Self *)sub_134C470();
          if ( glotv3::Event::getCount(v109) < EventBatchSizeMaximum )
          {
            v110 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getSmartCount(v110) < EventBatchSizeMaximum )
              goto LABEL_190;
          }
        }
LABEL_175:
        v253 = v239;
        v254[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        glotv3::SingletonMutexedProcessor::AddCompactedEvent((int)(uintptr_t)(v173), (int)(uintptr_t)(&v253));
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v254);
        v212 = &v302;
        v72 = &v302;
        v202 = v303;
        if ( v303 != nullptr )
        {
          v73 = (int *)v303;
          while ( 1 )
          {
            while ( (int)g4_std::string::compare_str(v73 + 4, v222) < 0 )
            {
              v73 = (int *)v73[3];
              if ( v73 == nullptr )
                goto LABEL_183;
            }
            if ( (int)g4_std::string::compare_str(v222, v73 + 4) >= 0 )
              break;
            v212 = v73;
            v73 = (int *)v73[2];
            if ( v73 == nullptr )
            {
LABEL_183:
              v72 = v212;
              goto LABEL_184;
            }
          }
          v111 = (int *)v73[2];
          if ( v73[3] != 0 )
          {
            v192 = (int *)v73[2];
            v112 = (int *)v73[3];
            do
            {
              while ( (int)g4_std::string::compare_str(v222, v112 + 4) < 0 )
              {
                v212 = v112;
                v112 = (int *)v112[2];
                if ( v112 == nullptr )
                  goto LABEL_271;
              }
              v112 = (int *)v112[3];
            }
            while ( v112 != nullptr );
LABEL_271:
            v111 = v192;
          }
          v72 = v73;
          if ( v111 != nullptr )
          {
            v113 = v111;
            do
            {
              if ( (int)g4_std::string::compare_str(v113 + 4, v222) >= 0 )
              {
                v72 = v113;
                v113 = (int *)v113[2];
              }
              else
              {
                v113 = (int *)v113[3];
              }
            }
            while ( v113 != nullptr );
          }
        }
LABEL_184:
        if ( v304 == v72 && v212 == &v302 )
        {
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
            (int)(uintptr_t)(&v301),
            v202);
          v303 = nullptr;
          v304 = &v302;
          v305 = &v302;
          v306 = 0;
          v163 = 1;
        }
        else
        {
          if ( v72 != v212 )
          {
            while ( 1 )
            {
              v74 = (int *)sub_19048E0(v72);
              v75 = sub_1904AE0(v72, &v302);
              boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v75 + 24));
              g4_std::string::Destroy(v75 + 16);
              opDelete((void *)v75);
              --v306;
              if ( v212 == v74 )
                break;
              v72 = v74;
            }
          }
          v163 = 1;
        }
LABEL_190:
        sub_1358000();
        v76 = v261;
        v77 = 0;
        v259 = v261;
        v260[0] = v262;
        if ( v262 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v262 + 4), 1);
          v76 = v259;
          v77 = v260[0];
        }
        v78 = v239;
        v239 = v76;
        v259 = v78;
        v260[0] = v240[0];
        v240[0] = v77;
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v260);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v262);
        g4_std::string::Destroy(v232);
        v203 = v322;
        v186 = v319;
        v177 = v320;
        v195 = v318;
        v190 = v315;
        v174 = v317;
        v213 = (int *)(v318 + 4);
        if ( (unsigned int)(uintptr_t)(v322) > v318 + 4 )
        {
          do
          {
            v79 = *v213;
            v80 = *v213 + 512;
            do
            {
              v141 = v79;
              v79 += 4;
              g4_std::string::Destroy(v141);
            }
            while ( v79 != v80 );
            ++v213;
          }
          while ( v203 > v213 );
        }
        if ( v203 == (int *)v195 )
        {
          if ( (char *)v186 != v190 )
          {
            v116 = v190;
            do
            {
              v152 = v116;
              v116 += 4;
              g4_std::string::Destroy(v152);
            }
            while ( (char *)v186 != v116 );
          }
        }
        else
        {
          if ( v190 != v174 )
          {
            v81 = v190;
            do
            {
              v142 = v81;
              v81 += 4;
              g4_std::string::Destroy(v142);
            }
            while ( v174 != v81 );
          }
          if ( v186 != v177 )
          {
            v82 = v177;
            do
            {
              v143 = v82;
              v82 += 4;
              g4_std::string::Destroy(v143);
            }
            while ( v186 != v82 );
          }
        }
        v83 = v314;
        if ( v314 != nullptr )
        {
          v84 = (void **)v318;
          v85 = (unsigned int)(uintptr_t)(v322 + 1);
          if ( (unsigned int)(uintptr_t)(v322 + 1) > v318 )
          {
            do
            {
              v86 = *v84++;
              opDelete(v86);
            }
            while ( v85 > (unsigned int)(uintptr_t)(v84) );
            v83 = v314;
          }
          opDelete(v83);
        }
        v204 = v313;
        v187 = v311;
        v178 = v312;
        v196 = v310;
        v191 = v308;
        v175 = v309;
        v214 = (int *)(v310 + 4);
        if ( (unsigned int)(uintptr_t)(v313) > v310 + 4 )
        {
          do
          {
            v87 = *v214;
            v88 = *v214 + 512;
            do
            {
              v144 = v87;
              v87 += 4;
              g4_std::string::Destroy(v144);
            }
            while ( v87 != v88 );
            ++v214;
          }
          while ( v204 > v214 );
        }
        if ( v204 == (int *)v196 )
        {
          if ( v187 != v191 )
          {
            v115 = v191;
            do
            {
              v151 = v115;
              v115 += 4;
              g4_std::string::Destroy(v151);
            }
            while ( v187 != v115 );
          }
        }
        else
        {
          if ( v191 != v175 )
          {
            v89 = v191;
            do
            {
              v145 = v89;
              v89 += 4;
              g4_std::string::Destroy(v145);
            }
            while ( v175 != v89 );
          }
          if ( v187 != v178 )
          {
            v90 = v178;
            do
            {
              v146 = v90;
              v90 += 4;
              g4_std::string::Destroy(v146);
            }
            while ( v187 != v90 );
          }
        }
        v91 = v307;
        if ( v307 != nullptr )
        {
          v92 = (void **)v310;
          v93 = (unsigned int)(uintptr_t)(v313 + 1);
          if ( (unsigned int)(uintptr_t)(v313 + 1) > v310 )
          {
            do
            {
              v94 = *v92++;
              opDelete(v94);
            }
            while ( v93 > (unsigned int)(uintptr_t)(v92) );
            v91 = v307;
          }
          opDelete(v91);
        }
        for ( m = src + 1; v180 > (unsigned int)(uintptr_t)(m); ++m )
        {
          v95 = *m;
          v96 = *m + 512;
          do
          {
            v147 = v95;
            v95 += 4;
            g4_std::string::Destroy(v147);
          }
          while ( v95 != v96 );
        }
        if ( (int *)v180 == src )
        {
          for ( n = v171; v182 != n; n += 4 )
          {
            v150 = n;
            g4_std::string::Destroy(v150);
          }
        }
        else
        {
          if ( v169 != v171 )
          {
            v97 = v171;
            do
            {
              v148 = v97;
              v97 += 4;
              g4_std::string::Destroy(v148);
            }
            while ( v169 != v97 );
          }
          if ( v167 != v182 )
          {
            v98 = v167;
            do
            {
              v149 = v98;
              v98 += 4;
              g4_std::string::Destroy(v149);
            }
            while ( v182 != v98 );
          }
        }
        if ( v170 != nullptr )
        {
          if ( v180 + 4 > (unsigned int)(uintptr_t)(src) )
          {
            v99 = (void **)src;
            do
            {
              v100 = *v99++;
              opDelete(v100);
            }
            while ( v180 + 4 > (unsigned int)(uintptr_t)(v99) );
          }
          opDelete(v170);
        }
        g4_std::string::Destroy(v222);
      }
      v272 = 0;
      v273 = 0;
      g4_std::string::construct_copy(v280, v222);
      v281 = v272;
      v282 = v273;
      if ( v273 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v273 + 4), 1);
      if ( v101 == &v302 )
      {
        if ( v306 != 0 && (int)g4_std::string::compare_str(v305 + 4, v280) < 0 )
          goto LABEL_258;
      }
      else if ( (int)g4_std::string::compare_str(v280, v101 + 4) >= 0 )
      {
        if ( (int)g4_std::string::compare_str(v101 + 4, v280) >= 0 )
          goto LABEL_259;
        if ( v101 == v305 || (v161 = sub_19048E0(v101), (int)g4_std::string::compare_str(v280, v161 + 16) < 0) )
        {
LABEL_258:
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(&v219);
          v101 = v219;
LABEL_259:
          boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v282);
          g4_std::string::Destroy(v280);
          boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v273);
          goto LABEL_260;
        }
      }
      else
      {
        if ( v101 == v304 )
          goto LABEL_258;
        v157 = sub_1904940(v101);
        if ( (int)g4_std::string::compare_str(v157 + 16, v280) < 0 )
          goto LABEL_258;
      }
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(v218);
      v101 = (int *)v218[0];
      goto LABEL_259;
    }
  }
  return sub_1321760(v164);
}

