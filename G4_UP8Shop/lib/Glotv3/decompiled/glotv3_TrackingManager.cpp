#include "Core/Utils/DecompTypes.h"
#include "glotv3_TrackingManager.h"

void sub_1321DD0(pthread_mutex_t **a1, int *a2);

namespace glotv3 { namespace Utils {
  template<> uint32_t *ToString<unsigned int>(uint32_t *a1, unsigned int a2);
  template<> uint32_t *ToString<int>(uint32_t *a1, int a2);
} }

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetGameTime  (binary VA: 0x1321f70)
// Original: glotv3::TrackingManager::GetGameTime
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::GetGameTime(glotv3::TrackingManager::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v1;

  v1 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
  if ( v1 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v1 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
  }
  return glotv3::SingletonMutexedProcessor::DetectGameTime(0, v1);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetTimeBetweenSessions  (binary VA: 0x1321ff0)
// Original: glotv3::TrackingManager::GetTimeBetweenSessions
// ----------------------------------------------------------------------------
unsigned int glotv3::TrackingManager::GetTimeBetweenSessions(glotv3::TrackingManager::Self *self, bool a2)
{
  int v2;

  v2 = *((uint32_t *)self + 40);
  if ( !a2 )
    return (v2 + 59) / 0x3Cu;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetPreviousTimeSpent  (binary VA: 0x1322020)
// Original: glotv3::TrackingManager::GetPreviousTimeSpent
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::GetPreviousTimeSpent(glotv3::TrackingManager::Self *self)
{
  return *((uint32_t *)self + 41);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetCurrentSessionIdentifier  (binary VA: 0x1322030)
// Original: glotv3::TrackingManager::GetCurrentSessionIdentifier
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::GetCurrentSessionIdentifier(glotv3::TrackingManager::Self *self)
{
  return *((uint32_t *)self + 42);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetCurrentSessionTime  (binary VA: 0x1322040)
// Original: glotv3::TrackingManager::GetCurrentSessionTime
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::GetCurrentSessionTime(glotv3::TrackingManager::Self *self)
{
  __m128d v1;
  double v2; // xmm1_8
  __m128d v3;
  __m128d v4;
  __m128d v5;
  typedef int64_t _g4_t_v7[3];
  typedef glotv3::TrackingManager::Self **_g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v8 = &self;
  sub_18FE850((uint32_t *)v7, (int)(uintptr_t)self + 52);
  v1 = g4_m128_from<__m128d>(COERCE_UNSIGNED_INT64((double)v7[0]));
  g4_m128_lane_ref<double>(v1, 0) = g4_m128_lane_ref<double>(v1, 0) * 0.000000001;
  v2 = fabs(g4_m128_lane_ref<double>(v1, 0));
  if ( v2 < 4503599627370496.0 )
  {
    *(uint64_t *)&g4_m128_lane_ref<double>(v3, 0) = COERCE_UNSIGNED_INT64(v2 + 4503599627370496.0 - 4503599627370496.0)
                                | *(uint64_t *)&g4_m128_lane_ref<double>(v1, 0) & 0x8000000000000000LL;
    g4_m128_lane_ref<double>(v1, 0) = g4_m128_lane_ref<double>(v3, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v1, v3), 0) & 0xBFF0000000000000LL);
  }
  v4 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v4, 0) = g4_m128_lane_ref<double>(v1, 0);
  v5 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v4);
  return _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttpd_epi32(_mm_sub_pd(v4, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v5))),
             _mm_slli_epi32(G4_BITCAST<__m128i>(v5), 0x1Fu)));
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetGGID  (binary VA: 0x1322110)
// Original: glotv3::TrackingManager::GetGGID
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::GetGGID(glotv3::TrackingManager::Self *self)
{
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetGameVersionString  (binary VA: 0x1322120)
// Original: glotv3::TrackingManager::GetGameVersionString
// ----------------------------------------------------------------------------
glotv3::TrackingManager::Self * glotv3::TrackingManager::GetGameVersionString(glotv3::TrackingManager::Self *self, int a2)
{
  g4_std::string::construct_copy(self, a2 + 48);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::Update  (binary VA: 0x1322160)
// Original: glotv3::TrackingManager::Update
// ----------------------------------------------------------------------------
void glotv3::TrackingManager::Update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::GetFedAccessToken  (binary VA: 0x1322170)
// Original: glotv3::TrackingManager::GetFedAccessToken
// ----------------------------------------------------------------------------
glotv3::TrackingManager::Self * glotv3::TrackingManager::GetFedAccessToken(glotv3::TrackingManager::Self *self, int a2)
{
  int v2;
  int v3;
  typedef int (**_g4_t_v5)(std::exception *);
  typedef int (**_g4_t_v6)(std::exception *);
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::TrackingManager::s_FedAccessTokenMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(&v5, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v5 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  g4_std::string::construct_copy(self, a2 + 16);
  do
    v3 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::TrackingManager::s_FedAccessTokenMutex);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    sub_1235D60(&v6, v3, "boost: mutex unlock failed in pthread_mutex_unlock");
    v6 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::SetFedAccessToken  (binary VA: 0x1322230)
// Original: glotv3::TrackingManager::SetFedAccessToken
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::SetFedAccessToken(int a1, int a2)
{
  int v2;
  int result;
  typedef int (**_g4_t_v4)(std::exception *);
  typedef int (**_g4_t_v5)(std::exception *);
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::TrackingManager::s_FedAccessTokenMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(&v4, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v4 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  g4_std::string::assign_str(a1 + 16, a2);
  do
    result = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::TrackingManager::s_FedAccessTokenMutex);
  while ( result == 4 );
  if ( result != 0 )
  {
    sub_1235D60(&v5, result, "boost: mutex unlock failed in pthread_mutex_unlock");
    v5 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::OnPause  (binary VA: 0x13222e0)
// Original: glotv3::TrackingManager::OnPause
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::OnPause(glotv3::TrackingManager::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v1;
  glotv3::DNSClient::Self *v2;
  int result;

  if ( *((uint8_t *)self + 195) != 0 )
  {
    v1 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
    if ( v1 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v1 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
    }
    glotv3::SingletonMutexedProcessor::DetectGameTime(0, v1);
    if ( (uint8_t)glotv3::Fs::ExistsPath((char *)self + 8) != 0 )
    {
      glotv3::Fs::RemovePath((char *)self + 8);
      v2 = *((glotv3::DNSClient::Self **)self + 35);
      if ( v2 != nullptr )
        goto LABEL_6;
    }
    else
    {
      v2 = *((glotv3::DNSClient::Self **)self + 35);
      if ( v2 != nullptr )
      {
LABEL_6:
        glotv3::DNSClient::ResetConnectivity(v2);
        glotv3::Glotv3Logger::WriteLog(&glotv3::errors::PAUSED_AUT);
        result = *((uint8_t *)self + 195);
        *((uint8_t *)self + 195) = 0;
        return result;
      }
    }
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::DNSCl"
      "ient, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
      "px != 0");
    v2 = *((glotv3::DNSClient::Self **)self + 35);
    goto LABEL_6;
  }
  return glotv3::Glotv3Logger::WriteLog(&glotv3::errors::PAUSED_AUT_BUT_NOT_RESUMED);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::BlockSending  (binary VA: 0x1322410)
// Original: glotv3::TrackingManager::BlockSending
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::BlockSending(glotv3::TrackingManager::Self *self)
{
  int result;

  result = *((uint32_t *)self + 33);
  if ( result == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    result = *((uint32_t *)self + 33);
  }
  *(uint8_t *)(result + 13417) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::TriggerSending  (binary VA: 0x1322490)
// Original: glotv3::TrackingManager::TriggerSending
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::TriggerSending(glotv3::TrackingManager::Self *self)
{
  int result;

  result = *((uint32_t *)self + 33);
  if ( result == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    result = *((uint32_t *)self + 33);
  }
  if ( *(uint8_t *)(result + 13422) == 0 )
    *(uint8_t *)(result + 13417) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::BlockTracking  (binary VA: 0x1322510)
// Original: glotv3::TrackingManager::BlockTracking
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::BlockTracking(glotv3::TrackingManager::Self *self)
{
  int result;

  result = *((uint32_t *)self + 33);
  if ( result == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    result = *((uint32_t *)self + 33);
  }
  *(uint8_t *)(result + 13416) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::TriggerTracking  (binary VA: 0x1322590)
// Original: glotv3::TrackingManager::TriggerTracking
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::TriggerTracking(glotv3::TrackingManager::Self *self)
{
  int result;

  result = *((uint32_t *)self + 33);
  if ( result == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    result = *((uint32_t *)self + 33);
  }
  *(uint8_t *)(result + 13416) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ResetFlags  (binary VA: 0x1322610)
// Original: glotv3::TrackingManager::ResetFlags
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::ResetFlags(glotv3::TrackingManager::Self *self)
{
  uint8_t v2[4];

  g4_std::string::construct_copy(v2, self);
  g4_std::string::append_str(v2, &glotv3::system::PRIORITY_FILE);
  *((uint8_t *)self + 187) = glotv3::Fs::ExistsPath(v2) ^ 1;
  return ((g4_std::string::Destroy(v2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ResetTimers  (binary VA: 0x1322680)
// Original: glotv3::TrackingManager::ResetTimers
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::ResetTimers(glotv3::TrackingManager::Self *self)
{
  int result;

  result = sub_18FE4A0((char *)self + 52);
  *(uint64_t *)((char *)self + 28) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::OutputConfigurationParameters  (binary VA: 0x13226c0)
// Original: glotv3::TrackingManager::OutputConfigurationParameters
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::OutputConfigurationParameters(glotv3::TrackingManager::Self *self)
{
  unsigned int v1;
  int v2;
  int *i;
  unsigned int v4;
  int v5;
  typedef int _g4_t_v7[2];
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[24];
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(std::exception *);
  typedef int (**_g4_t_v12)(std::exception *);
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v12)) > _g4_s5 ? (60u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  v1 = *((uint32_t *)self + 11);
  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(&v11, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v11 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  v7[0] = (int)(uintptr_t)(&dword_213B814);
  for ( i = &v10; ; i = (int *)((char *)i - 1) )
  {
    v4 = v1 % 0xA + 48;
    v1 /= 0xAu;
    *((uint8_t *)i - 1) = v4;
    if ( v1 == 0 )
      break;
  }
  sub_193A9B0((int)(uintptr_t)(v7), 0, dword_213B808[0], (char *)i - 1, (char *)&v10 - ((char *)i - 1));
  do
    v5 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    sub_1235D60(&v12, v5, "boost: mutex unlock failed in pthread_mutex_unlock");
    v12 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  g4_std::string::construct_copy(&v8, &glotv3::errors::USING_GGI);
  g4_std::string::append_str(&v8, v7);
  glotv3::Glotv3Logger::WriteLog(&v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(v7);
  g4_std::string::construct_copy(v9, &glotv3::errors::USING_GAME_VERSION);
  g4_std::string::append_str(v9, (char *)self + 48);
  glotv3::Glotv3Logger::WriteLog(v9);
  return ((g4_std::string::Destroy(v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ResetDataDirectoryToOurOwn  (binary VA: 0x1322870)
// Original: glotv3::TrackingManager::ResetDataDirectoryToOurOwn
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::ResetDataDirectoryToOurOwn(glotv3::TrackingManager::Self *self)
{
  typedef uint8_t _g4_t_v2[4];
  typedef uint8_t _g4_t_v3[4];
  typedef uint8_t _g4_t_v4[4];
  typedef uint8_t _g4_t_v5[4];
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  glotv3::Porting::GetDataDirectory((glotv3::Porting::Self *)v3);
  g4_std::string::construct_copy(v4, v3);
  g4_std::string::append_str(v4, &glotv3::system::BACKSLASH);
  g4_std::string::construct_copy(v2, v4);
  g4_std::string::append_str(v2, &glotv3::system::EVENTS_DIRECTORY);
  g4_std::string::Destroy(v4);
  g4_std::string::Destroy(v3);
  if ( (uint8_t)glotv3::Fs::ExistsPath(v2) != 0 || (uint8_t)glotv3::Fs::MakeDirectory(v2) != 0 )
  {
    g4_std::string::construct_copy(v5, v2);
    g4_std::string::append_str(v5, &glotv3::system::BACKSLASH);
    g4_std::string::assign_str(self, v5);
    g4_std::string::Destroy(v5);
  }
  g4_std::string::construct_copy(v6, self);
  g4_std::string::append_str(v6, &glotv3::system::RESUMING_FILE);
  g4_std::string::assign_str((char *)self + 8, v6);
  g4_std::string::Destroy(v6);
  return ((g4_std::string::Destroy(v2)), (int)0);
}



// ============================================================================
// Address:   0x13229c0 (size: 200 bytes)
// Symbol:    _ZN6glotv315TrackingManager15ViaGlwt2ThreadsEPvS1_
// Demangled: glotv3::TrackingManager::ViaGlwt2Threads(void *,void *)
// ============================================================================
void (*glotv3::TrackingManager::ViaGlwt2Threads(
        int a1,
        int a2,
        glotv3::TrackingManager::Self *self,
        pthread_mutex_t **a4))()
{
  int v4;
  void (*result)();
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (15u + sizeof(_g4_t_v8)) > _g4_s0 ? (15u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v9 = 0;
  v10 = (int)(uintptr_t)(sub_18F81E0(a1, a2));
  result = (void (*)())sub_13217C0(a4[1], &v9, v4);
  v6 = v9;
  if ( v9 != 0 )
  {
    result = boost::system::error_code::unspecified_bool_true;
    if ( boost::system::error_code::unspecified_bool_true != nullptr )
    {
      v7 = v10;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v8));
      sub_19042E0(v11, (char *)&v8 + 1);
      g4_std::string::Destroy((char *)&v8 + 1);
      v11[2] = v6;
      v11[3] = v7;
      v11[0] = ((uint32_t)(uintptr_t)&off_2048428);
      v11[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      std::terminate();
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::IsTrackingSessionStarted  (binary VA: 0x1322a90)
// Original: glotv3::TrackingManager::IsTrackingSessionStarted
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::IsTrackingSessionStarted(glotv3::TrackingManager::Self *self)
{
  return *((uint8_t *)self + 195);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::OnExit  (binary VA: 0x1322aa0)
// Original: glotv3::TrackingManager::OnExit
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::OnExit(glotv3::TrackingManager::Self *self)
{
  glotv3::SingletonMutexedProcessor::Self *v1;
  glotv3::SingletonMutexedProcessor::Self *v2;
  pthread_mutex_t *v3;
  pthread_mutex_t *v4;
  unsigned int nusers;
  pthread_cond_t *v6;
  unsigned int count;
  int v8;
  int result;
  boost::thread::Self **v10;
  boost::thread::Self *v11;
  int v12;
  typedef int _g4_t_fd;
  typedef boost::thread::Self **_g4_t_v14;
  typedef int _g4_t_v15;
  typedef struct epoll_event _g4_t_event;
  typedef int (**_g4_t_v17)(std::exception *);
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_fd)) > _g4_s0 ? (8u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_event)) > _g4_s3 ? (32u + sizeof(_g4_t_event)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  v1 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
  if ( v1 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v1 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
  }
  glotv3::SingletonMutexedProcessor::FinishQueing(v1);
  v2 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
  if ( v2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v2 = *((glotv3::SingletonMutexedProcessor::Self **)self + 33);
  }
  glotv3::SingletonMutexedProcessor::FinishNetwork(0, 0, v2);
  v3 = *((pthread_mutex_t **)self + 22);
  if ( __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v3) + (24 * (2)))), 0xFFFFFFFF) == 1 )
    boost::asio::detail::task_io_service::stop(v3);
  v4 = *((pthread_mutex_t **)self + 21);
  pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))));
  nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (2))));
  for ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (2))))[12] = 1; nusers != 0; nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (2)))) )
  {
    G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (2)))) = *(uint32_t *)(nusers + 20);
    *(uint32_t *)(nusers + 20) = 0;
    v6 = *(pthread_cond_t **)(nusers + 4);
    ((uint8_t *)(v6))[4] = 1;
    pthread_cond_signal(v6);
  }
  if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))))[20] == 0 )
  {
    count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))));
    if ( count != 0 )
    {
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))))[20] = 1;
      event.data.u64 = count + 28;
      fd = *(uint32_t *)(count + 28);
      v8 = *(uint32_t *)(count + 36);
      event.events = 0x80000009;
      epoll_ctl(v8, 3, fd, &event);
    }
  }
  result = pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v4) + (24 * (1))));
  v10 = *((boost::thread::Self ***)self + 25);
  v14 = *((boost::thread::Self ***)self + 27);
  v15 = *((uint32_t *)self + 28);
  while ( *((boost::thread::Self ***)self + 29) != v10 )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = boost::th"
          "read, typename boost::detail::sp_member_access<T>::type = boost::thread*]",
          "px != 0");
        v11 = *v10;
      }
      v12 = boost::thread::native_handle((boost::thread::Self *)(uintptr_t)(v11));
      if ( v12 == pthread_self() )
      {
        sub_1235D60(&v17, 35, "boost thread: trying joining itself");
        v17 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v10 += 2;
      result = boost::thread::join_noexcept(v11);
      if ( v10 != v14 )
        break;
      v10 = *(boost::thread::Self ***)(v15 + 4);
      v14 = v10 + 128;
      v15 += 4;
      if ( *((boost::thread::Self ***)self + 29) == v10 )
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::Destroy  (binary VA: 0x1322d10)
// Original: glotv3::TrackingManager::~TrackingManager
// ----------------------------------------------------------------------------
void glotv3::TrackingManager::Destroy(volatile int32_t **self)
{
  int *v1;
  int v2;
  int v3;
  volatile int32_t **v4;
  int v5;
  volatile int32_t **v6;
  int v7;
  volatile int32_t **v8;
  void *v9;
  void **v10;
  unsigned int v11;
  void *v12;
  pthread_mutex_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  volatile int32_t **v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  glotv3::TrackingManager::OnExit((glotv3::TrackingManager::Self *)self);
  boost::detail::shared_count::Destroy(self + 38);
  boost::detail::shared_count::Destroy(self + 36);
  boost::detail::shared_count::Destroy(self + 34);
  v22 = (int)(uintptr_t)(*(self + 29));
  v25 = (int)(uintptr_t)(*(self + 30));
  v20 = (unsigned int)(uintptr_t)(*(self + 32));
  v23 = (int)(uintptr_t)(*(self + 25));
  v24 = (int)(uintptr_t)(*(self + 27));
  v21 = (int)(uintptr_t)(*(self + 28));
  v1 = (int *)(v21 + 4);
  if ( v20 > v21 + 4 )
  {
    do
    {
      v2 = *v1;
      v3 = *v1 + 512;
      do
      {
        v4 = (volatile int32_t **)(v2 + 4);
        v2 += 8;
        boost::detail::shared_count::Destroy(v4);
      }
      while ( v2 != v3 );
      ++v1;
    }
    while ( v20 > (unsigned int)(uintptr_t)(v1) );
  }
  if ( v20 == v21 )
  {
    if ( v22 != v23 )
    {
      v18 = v23;
      do
      {
        v19 = (volatile int32_t **)(v18 + 4);
        v18 += 8;
        boost::detail::shared_count::Destroy(v19);
      }
      while ( v22 != v18 );
    }
  }
  else
  {
    if ( v23 != v24 )
    {
      v5 = v23;
      do
      {
        v6 = (volatile int32_t **)(v5 + 4);
        v5 += 8;
        boost::detail::shared_count::Destroy(v6);
      }
      while ( v24 != v5 );
    }
    if ( v22 != v25 )
    {
      v7 = v25;
      do
      {
        v8 = (volatile int32_t **)(v7 + 4);
        v7 += 8;
        boost::detail::shared_count::Destroy(v8);
      }
      while ( v22 != v7 );
    }
  }
  v9 = (void *)*(self + 23);
  if ( v9 != nullptr )
  {
    v10 = (void **)*(self + 28);
    v11 = (unsigned int)(uintptr_t)(*(self + 32) + 1);
    if ( v11 > (unsigned int)(uintptr_t)(v10) )
    {
      do
      {
        v12 = *v10++;
        opDelete(v12);
      }
      while ( v11 > (unsigned int)(uintptr_t)(v10) );
      v9 = (void *)*(self + 23);
    }
    opDelete(v9);
  }
  v13 = (pthread_mutex_t *)*(self + 22);
  if ( __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v13) + (24 * (2)))), 0xFFFFFFFF) == 1 )
    boost::asio::detail::task_io_service::stop(v13);
  v14 = (int)(uintptr_t)(*(self + 20));
  if ( v14 != 0 )
  {
    v15 = *(uint32_t **)(v14 + 12);
    if ( v15 != nullptr )
    {
      do
      {
        G4_VCALL<void>(v15, 8);
        v15 = (uint32_t *)v15[4];
      }
      while ( v15 != nullptr );
      v16 = *(uint32_t **)(v14 + 12);
      if ( v16 != nullptr )
      {
        while ( 1 )
        {
          v17 = (uint32_t *)v16[4];
          G4_VCALL<void>(v16, 4);
          *(uint32_t *)(v14 + 12) = (uint32_t)(uintptr_t)(v17);
          if ( v17 == nullptr )
            break;
          v16 = v17;
        }
      }
    }
    pthread_mutex_destroy((pthread_mutex_t *)(v14 + 4));
    opDelete((void *)v14);
  }
  g4_std::string::Destroy(self + 12);
  g4_std::string::Destroy(self + 4);
  g4_std::string::Destroy(self + 3);
  g4_std::string::Destroy(self + 2);
  g4_std::string::Destroy(self + 1);
  g4_std::string::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::DelaySending  (binary VA: 0x1323100)
// Original: glotv3::TrackingManager::DelaySending
// ----------------------------------------------------------------------------
void glotv3::TrackingManager::DelaySending(glotv3::TrackingManager::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[4];
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  if ( a2 != 0 )
  {
    v2 = *((uint32_t *)self + 33);
    if ( v2 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v2 = *((uint32_t *)self + 33);
    }
    *(uint8_t *)(v2 + 13422) = 1;
    v3 = *((uint32_t *)self + 33);
    if ( v3 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v3 = *((uint32_t *)self + 33);
    }
    *(uint8_t *)(v3 + 13417) = 0;
    v4 = *((uint32_t *)self + 33);
    if ( v4 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v4 = *((uint32_t *)self + 33);
    }
    __atomic_exchange_n((volatile int32_t *)(v4 + 13232), a2, __ATOMIC_SEQ_CST);
    glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v5), (unsigned int)(uintptr_t)(a2));
    g4_std::string::construct_copy(v6, &glotv3::errors::ETS_HAS_DELAYED_SENDING_FOR);
    g4_std::string::append_str(v6, &v5);
    g4_std::string::construct_copy(v7, v6);
    g4_std::string::append((int)(uintptr_t)(v7), " seconds", 8u);
    glotv3::Glotv3Logger::WriteLog(v7);
    g4_std::string::Destroy(v7);
    g4_std::string::Destroy(v6);
    g4_std::string::Destroy(&v5);
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::AddEvent  (binary VA: 0x13232c0)
// Original: glotv3::TrackingManager::AddEvent
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::AddEvent(int a1, glotv3::Event::Self **a2, char a3)
{
  int *v3;
  int v4;
  glotv3::Event::Self *v5;
  unsigned int EventType;
  char v7;
  glotv3::SingletonMutexedProcessor::Self *v8;
  int v9;
  glotv3::Event::Self *v11;
  glotv3::SingletonMutexedProcessor::Self *v12;
  typedef unsigned int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef volatile int32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef volatile int32_t *_g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v15)) > _g4_s2 ? (15u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v19)) > _g4_s6 ? (36u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v20)) > _g4_s7 ? (48u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v21)) > _g4_s8 ? (52u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v22)) > _g4_s9 ? (56u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v23)) > _g4_s10 ? (60u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  v23[3] = &a1;
  v3 = (int *)a2;
  v4 = a1;
  v5 = *a2;
  v15 = a3;
  if ( *a2 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      ", typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
      "px != 0");
    v5 = (glotv3::Event::Self *)*v3;
  }
  EventType = glotv3::Event::getEventType(v5);
  if ( *(uint32_t *)(v4 + 168) != 0 )
    goto LABEL_4;
  v11 = (glotv3::Event::Self *)*v3;
  if ( *v3 == 0 )
  {
    v14 = EventType;
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      ", typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
      "px != 0");
    v11 = (glotv3::Event::Self *)*v3;
    EventType = v14;
  }
  v13 = EventType;
  if ( (uint8_t)glotv3::Event::isLibspyEvent(v11) != 0 )
  {
LABEL_4:
    v18 = *v3;
    v19 = (volatile int32_t *)v3[1];
    v7 = v15;
    if ( v19 != nullptr )
      __sync_add_and_fetch(v19 + 1, 1);
    v8 = *(glotv3::SingletonMutexedProcessor::Self **)(v4 + 132);
    if ( v8 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v8 = *(glotv3::SingletonMutexedProcessor::Self **)(v4 + 132);
      v7 = v15;
    }
    v9 = ((uint8_t)glotv3::SingletonMutexedProcessor::QueueForWriting(v8, (int)(uintptr_t)(&v18), 1, v7) == 0) - 1 + 2;
    boost::detail::shared_count::Destroy(&v19);
  }
  else if ( v13 == 6 )
  {
    v9 = 2;
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::IGNORED_DATA_BUFFERED_EVENT);
  }
  else
  {
    glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v16), (unsigned int)(uintptr_t)(v13));
    g4_std::string::construct_copy(v17, &glotv3::errors::TOO_EARLY_FOR_EVENTS);
    g4_std::string::append_str(v17, &v16);
    glotv3::EventOfError::s_OfType((glotv3::Event::Self **)&v20, (void *)(uintptr_t)0x202b5u, (int)(uintptr_t)v17);
    v22 = v20;
    v23[0] = v21;
    if ( v21 != nullptr )
      __sync_add_and_fetch(v21 + 1, 1);
    v12 = *(glotv3::SingletonMutexedProcessor::Self **)(v4 + 132);
    if ( v12 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v12 = *(glotv3::SingletonMutexedProcessor::Self **)(v4 + 132);
    }
    glotv3::SingletonMutexedProcessor::QueueForWriting(v12, (int)(uintptr_t)(&v22), 1, 0);
    boost::detail::shared_count::Destroy(v23);
    boost::detail::shared_count::Destroy(&v21);
    g4_std::string::Destroy(v17);
    v9 = 2;
    g4_std::string::Destroy(&v16);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::OutputDebugInformation  (binary VA: 0x1323580)
// Original: glotv3::TrackingManager::OutputDebugInformation
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::OutputDebugInformation(glotv3::TrackingManager::Self *self)
{
  unsigned int v1;
  int v2;
  uint8_t *i;
  unsigned int v4;
  int v5;
  uint64_t FreeSpace; // rdi
  int v7;
  uint8_t *j;
  int v9;
  typedef glotv3::TrackingManager::Self *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16[2];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef uint8_t _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[4];
  typedef uint8_t _g4_t_v32[4];
  typedef uint8_t _g4_t_v33[4];
  typedef uint8_t _g4_t_v34[4];
  typedef uint8_t _g4_t_v35[4];
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[4];
  typedef uint8_t _g4_t_v38[4];
  typedef uint8_t _g4_t_v39[4];
  typedef uint8_t _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[4];
  typedef uint8_t _g4_t_v42[4];
  typedef uint8_t _g4_t_v43[4];
  typedef uint8_t _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[4];
  typedef uint8_t _g4_t_v46[4];
  typedef uint8_t _g4_t_v47[4];
  typedef uint8_t _g4_t_v48[4];
  typedef uint8_t _g4_t_v49[4];
  typedef uint8_t _g4_t_v50[4];
  typedef uint8_t _g4_t_v51[4];
  typedef uint8_t _g4_t_v52[4];
  typedef uint8_t _g4_t_v53[4];
  typedef uint8_t _g4_t_v54[4];
  typedef uint8_t _g4_t_v55[4];
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[4];
  typedef uint8_t _g4_t_v58[4];
  typedef int (**_g4_t_v59)(std::exception *);
  typedef int (**_g4_t_v60)(std::exception *);
  typedef int (**_g4_t_v61)(std::exception *);
  typedef int (**_g4_t_v62)(std::exception *);
  typedef uint8_t _g4_t_v63[20];
  typedef uint32_t _g4_t_v64[8];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (29u + sizeof(_g4_t_v13)) > _g4_s2 ? (29u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v15)) > _g4_s4 ? (36u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v16)) > _g4_s5 ? (52u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v17)) > _g4_s6 ? (60u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v18)) > _g4_s7 ? (64u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v19)) > _g4_s8 ? (68u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v20)) > _g4_s9 ? (72u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v21)) > _g4_s10 ? (76u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v22)) > _g4_s11 ? (80u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v23)) > _g4_s12 ? (84u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v24)) > _g4_s13 ? (88u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v25)) > _g4_s14 ? (92u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v26)) > _g4_s15 ? (96u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v27)) > _g4_s16 ? (100u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v28)) > _g4_s17 ? (104u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v29)) > _g4_s18 ? (108u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v30)) > _g4_s19 ? (112u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v31)) > _g4_s20 ? (116u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v32)) > _g4_s21 ? (120u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v33)) > _g4_s22 ? (124u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v34)) > _g4_s23 ? (128u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v35)) > _g4_s24 ? (132u + sizeof(_g4_t_v35)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v36)) > _g4_s25 ? (136u + sizeof(_g4_t_v36)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v37)) > _g4_s26 ? (140u + sizeof(_g4_t_v37)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v38)) > _g4_s27 ? (144u + sizeof(_g4_t_v38)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v39)) > _g4_s28 ? (148u + sizeof(_g4_t_v39)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v40)) > _g4_s29 ? (152u + sizeof(_g4_t_v40)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v41)) > _g4_s30 ? (156u + sizeof(_g4_t_v41)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v42)) > _g4_s31 ? (160u + sizeof(_g4_t_v42)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v43)) > _g4_s32 ? (164u + sizeof(_g4_t_v43)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v44)) > _g4_s33 ? (168u + sizeof(_g4_t_v44)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v45)) > _g4_s34 ? (172u + sizeof(_g4_t_v45)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v46)) > _g4_s35 ? (176u + sizeof(_g4_t_v46)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v47)) > _g4_s36 ? (180u + sizeof(_g4_t_v47)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v48)) > _g4_s37 ? (184u + sizeof(_g4_t_v48)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v49)) > _g4_s38 ? (188u + sizeof(_g4_t_v49)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v50)) > _g4_s39 ? (192u + sizeof(_g4_t_v50)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v51)) > _g4_s40 ? (196u + sizeof(_g4_t_v51)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v52)) > _g4_s41 ? (200u + sizeof(_g4_t_v52)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v53)) > _g4_s42 ? (204u + sizeof(_g4_t_v53)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v54)) > _g4_s43 ? (208u + sizeof(_g4_t_v54)) : _g4_s43,
    _g4_s45 = (212u + sizeof(_g4_t_v55)) > _g4_s44 ? (212u + sizeof(_g4_t_v55)) : _g4_s44,
    _g4_s46 = (216u + sizeof(_g4_t_v56)) > _g4_s45 ? (216u + sizeof(_g4_t_v56)) : _g4_s45,
    _g4_s47 = (220u + sizeof(_g4_t_v57)) > _g4_s46 ? (220u + sizeof(_g4_t_v57)) : _g4_s46,
    _g4_s48 = (224u + sizeof(_g4_t_v58)) > _g4_s47 ? (224u + sizeof(_g4_t_v58)) : _g4_s47,
    _g4_s49 = (228u + sizeof(_g4_t_v59)) > _g4_s48 ? (228u + sizeof(_g4_t_v59)) : _g4_s48,
    _g4_s50 = (248u + sizeof(_g4_t_v60)) > _g4_s49 ? (248u + sizeof(_g4_t_v60)) : _g4_s49,
    _g4_s51 = (268u + sizeof(_g4_t_v61)) > _g4_s50 ? (268u + sizeof(_g4_t_v61)) : _g4_s50,
    _g4_s52 = (288u + sizeof(_g4_t_v62)) > _g4_s51 ? (288u + sizeof(_g4_t_v62)) : _g4_s51,
    _g4_s53 = (328u + sizeof(_g4_t_v63)) > _g4_s52 ? (328u + sizeof(_g4_t_v63)) : _g4_s52,
    _g4_s54 = (348u + sizeof(_g4_t_v64)) > _g4_s53 ? (348u + sizeof(_g4_t_v64)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 29u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 132u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 136u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 148u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 152u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 156u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 160u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 164u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 188u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 192u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 196u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 200u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 204u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 208u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 212u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 216u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 220u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 224u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 228u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 248u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 268u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 288u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 328u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 348u);

  v64[4] = (uint32_t)(uintptr_t)(&self);
  v11 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "SELECT", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Asynchronous", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "JSON C++", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Not using GAIA", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Not using GLWT2", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Rapid JSON", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::assign_str(&v19, &v22);
  g4_std::string::Destroy(&v22);
  g4_std_compat::string_assign((int)(uintptr_t)(&v20), "Using GAIA", 0xAu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v21), "Using GLWT2", 0xBu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "EPOLL", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::assign_str(&v17, &v23);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "ETSv1", (int)(uintptr_t)(&v14) + 3);
  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::USING_SEPARATOR);
  g4_std::string::construct_copy(v25, &glotv3::errors::USING_TIMER);
  g4_std::string::append_str(v25, &v18);
  glotv3::Glotv3Logger::WriteLog(v25);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_copy(v26, &glotv3::errors::USING_SERIALIZER);
  g4_std::string::append_str(v26, &v19);
  glotv3::Glotv3Logger::WriteLog(v26);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_copy(&v27, &glotv3::errors::USING_THREADS);
  g4_std::string::append((int)(uintptr_t)(&v27), "boost", 5u);
  glotv3::Glotv3Logger::WriteLog(&v27);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_copy(v28, &glotv3::errors::USING_NETWORK_REACTOR);
  g4_std::string::append_str(v28, &v17);
  glotv3::Glotv3Logger::WriteLog(v28);
  g4_std::string::Destroy(v28);
  glotv3::Porting::GetDeviceName((glotv3::Porting::Self *)v29);
  g4_std::string::construct_copy(v30, &glotv3::errors::USING_DEVICE);
  g4_std::string::append_str(v30, v29);
  glotv3::Glotv3Logger::WriteLog(v30);
  g4_std::string::Destroy(v30);
  g4_std::string::Destroy(v29);
  glotv3::Porting::GetPlatformString((glotv3::Porting::Self *)v31);
  g4_std::string::construct_copy(v32, &glotv3::errors::USING_PLATFORM);
  g4_std::string::append_str(v32, v31);
  glotv3::Glotv3Logger::WriteLog(v32);
  g4_std::string::Destroy(v32);
  g4_std::string::Destroy(v31);
  glotv3::Porting::GetDeviceFirmware((glotv3::Porting::Self *)v33);
  g4_std::string::construct_copy(v34, &glotv3::errors::USING_FIRMWARE);
  g4_std::string::append_str(v34, v33);
  glotv3::Glotv3Logger::WriteLog(v34);
  g4_std::string::Destroy(v34);
  g4_std::string::Destroy(v33);
  v1 = 852;
  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(&v59, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v59 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  v15[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  for ( i = v63; ; --i )
  {
    v4 = v1 % 0xA + 48;
    v1 /= 0xAu;
    *(i - 1) = v4;
    if ( v1 == 0 )
      break;
  }
  sub_193A9B0((int)(uintptr_t)(v15), 0, dword_213B808[0], i - 1, v63 - (i - 1));
  do
    v5 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    sub_1235D60(&v60, v5, "boost: mutex unlock failed in pthread_mutex_unlock");
    v60 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  g4_std::string::construct_copy(v35, &glotv3::errors::USING_REVISION);
  g4_std::string::append_str(v35, v15);
  glotv3::Glotv3Logger::WriteLog(v35);
  g4_std::string::Destroy(v35);
  g4_std::string::Destroy(v15);
  glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v36), (unsigned int)(uintptr_t)(0x10u));
  g4_std::string::construct_copy(v37, &glotv3::errors::USING_NETWORK_WORKERS);
  g4_std::string::append_str(v37, &v36);
  glotv3::Glotv3Logger::WriteLog(v37);
  g4_std::string::Destroy(v37);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_copy(v38, &glotv3::errors::USING_DEPENDENCY);
  g4_std::string::append_str(v38, &v20);
  glotv3::Glotv3Logger::WriteLog(v38);
  g4_std::string::Destroy(v38);
  g4_std::string::construct_copy(v39, &glotv3::errors::USING_DEPENDENCY);
  g4_std::string::append_str(v39, &v21);
  glotv3::Glotv3Logger::WriteLog(v39);
  g4_std::string::Destroy(v39);
  glotv3::Porting::GetDeviceMACAddress((glotv3::Porting::Self *)v40);
  g4_std::string::construct_copy(v41, &glotv3::errors::USING_MAC);
  g4_std::string::append_str(v41, v40);
  glotv3::Glotv3Logger::WriteLog(v41);
  g4_std::string::Destroy(v41);
  g4_std::string::Destroy(v40);
  glotv3::Porting::GetDeviceHDIDFV((glotv3::Porting::Self *)v42);
  g4_std::string::construct_copy(v43, &glotv3::errors::USING_HD_IDENTIFIER_FOR_VENDOR);
  g4_std::string::append_str(v43, v42);
  glotv3::Glotv3Logger::WriteLog(v43);
  g4_std::string::Destroy(v43);
  g4_std::string::Destroy(v42);
  glotv3::Porting::GetDeviceIdentifierForVendor((glotv3::Porting::Self *)v44);
  g4_std::string::construct_copy(v45, &glotv3::errors::USING_IDENTIFIER_FOR_VENDOR);
  g4_std::string::append_str(v45, v44);
  glotv3::Glotv3Logger::WriteLog(v45);
  g4_std::string::Destroy(v45);
  g4_std::string::Destroy(v44);
  glotv3::Porting::GetDeviceIdentifier((glotv3::Porting::Self *)v46);
  g4_std::string::construct_copy(v47, &glotv3::errors::USING_IDENTIFIER);
  g4_std::string::append_str(v47, v46);
  glotv3::Glotv3Logger::WriteLog(v47);
  g4_std::string::Destroy(v47);
  g4_std::string::Destroy(v46);
  FreeSpace = glotv3::Fs::getFreeSpace(v11);
  do
    v7 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v7 == 4 );
  if ( v7 != 0 )
  {
    sub_1235D60(&v61, v7, "boost: mutex lock failed in pthread_mutex_lock");
    v61 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  v16[0] = (int)(uintptr_t)(&dword_213B814);
  for ( j = (uint8_t *)(v64); ; --j )
  {
    *(j - 1) = FreeSpace % 0xA + 48;
    FreeSpace /= 0xAu;
    if ( FreeSpace == 0 )
      break;
  }
  sub_193A9B0((int)(uintptr_t)(v16), 0, dword_213B808[0], j - 1, (char *)v64 - (char *)((j - 1)));
  do
    v9 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v9 == 4 );
  if ( v9 != 0 )
  {
    sub_1235D60(&v62, v9, "boost: mutex unlock failed in pthread_mutex_unlock");
    v62 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  g4_std::string::construct_copy(v48, &glotv3::errors::USING_FREE_SPACE);
  g4_std::string::append_str(v48, v16);
  glotv3::Glotv3Logger::WriteLog(v48);
  g4_std::string::Destroy(v48);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_copy(v49, &glotv3::errors::USING_DATA_DIRECTORY);
  g4_std::string::append_str(v49, v11);
  glotv3::Glotv3Logger::WriteLog(v49);
  g4_std::string::Destroy(v49);
  glotv3::Porting::GetDownloadCode((glotv3::Porting::Self *)v50);
  g4_std::string::construct_copy(v51, &glotv3::errors::USING_DOWNLOAD_CODE);
  g4_std::string::append_str(v51, v50);
  glotv3::Glotv3Logger::WriteLog(v51);
  g4_std::string::Destroy(v51);
  g4_std::string::Destroy(v50);
  glotv3::Porting::GetIGPCode((glotv3::Porting::Self *)v52);
  g4_std::string::construct_copy(v53, &glotv3::errors::USING_IGP_CODE);
  g4_std::string::append_str(v53, v52);
  glotv3::Glotv3Logger::WriteLog(v53);
  g4_std::string::Destroy(v53);
  g4_std::string::Destroy(v52);
  glotv3::Porting::GetInjectedIGPCode((glotv3::Porting::Self *)v54);
  g4_std::string::construct_copy(v55, &glotv3::errors::USING_INJECTED_IGP_CODE);
  g4_std::string::append_str(v55, v54);
  glotv3::Glotv3Logger::WriteLog(v55);
  g4_std::string::Destroy(v55);
  g4_std::string::Destroy(v54);
  glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v56), (unsigned int)(uintptr_t)(0));
  g4_std::string::construct_copy(v57, &glotv3::errors::USING_ETS_ENCRYPTION);
  g4_std::string::append_str(v57, &v56);
  glotv3::Glotv3Logger::WriteLog(v57);
  g4_std::string::Destroy(v57);
  g4_std::string::Destroy(&v56);
  g4_std::string::construct_copy(v58, &glotv3::errors::USING_ETS_VERSION);
  g4_std::string::append_str(v58, &v24);
  glotv3::Glotv3Logger::WriteLog(v58);
  g4_std::string::Destroy(v58);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::RequestFederationAccessTokenFromGaia  (binary VA: 0x13244c0)
// Original: glotv3::TrackingManager::RequestFederationAccessTokenFromGaia
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::RequestFederationAccessTokenFromGaia(glotv3::TrackingManager::Self *self)
{
  int result;
  int Instance;
  int v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  int v6;
  int v7;
  typedef Json::Value::Self *_g4_t_v8;
  typedef gaia::Gaia::Self *_g4_t_v9;
  typedef gaia::Gaia::Self *_g4_t_v10;
  typedef Json::Value::Self *_g4_t_v11;
  typedef gaia::Gaia::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[4];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[80];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v9)) > _g4_s1 ? (0u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v10)) > _g4_s2 ? (0u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v11)) > _g4_s3 ? (0u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v12)) > _g4_s4 ? (0u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v13)) > _g4_s5 ? (0u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (42u + sizeof(_g4_t_v14)) > _g4_s6 ? (42u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v15)) > _g4_s7 ? (44u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v16)) > _g4_s8 ? (48u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v17)) > _g4_s9 ? (52u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v18)) > _g4_s10 ? (56u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v19)) > _g4_s11 ? (60u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v20)) > _g4_s12 ? (76u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v21)) > _g4_s13 ? (92u + sizeof(_g4_t_v21)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 42u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);

  result = *((uint8_t *)self + 186);
  if ( (uint8_t)result == 0 )
  {
    Instance = gaia::Gaia::GetInstance(v8);
    ++*(uint32_t *)(Instance + 236);
    gaia::Gaia::GetInstance(v9);
    if ( (uint8_t)gaia::Gaia::IsInitialized(v10) != 0 )
    {
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v21);
      Json::Value::Construct((Json::Value::Self *)v19, 19);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "accountType", (int)(uintptr_t)(&v14));
      v4 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &v15);
      Json::Value::opAssign(v4, (const Json::Value::Self *)v19);
      g4_std::string::Destroy(&v15);
      Json::Value::Destroy((Json::Value::Self *)v19);
      Json::Value::Construct((Json::Value::Self *)v20, "tracking_bi");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "scope", (int)(uintptr_t)(&v14) + 1);
      v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &v16);
      Json::Value::opAssign(v5, (const Json::Value::Self *)v20);
      g4_std::string::Destroy(&v16);
      Json::Value::Destroy((Json::Value::Self *)v20);
      gaia::GaiaRequest::SetRunAsynchronous(
        (gaia::GaiaRequest::Self *)v21,
        (void (__high *)(gaia::GaiaRequest::Self))glotv3::TrackingManager::ViaGaia,
        self);
      v6 = gaia::Gaia::GetInstance(v12);
      v7 = gaia::Gaia_Janus::AuthorizeExclusive(*(gaia::Gaia_Janus::Self **)(v6 + 560), (gaia::GaiaRequest::Self *)v21);
      if ( v7 != 0 )
      {
        glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v17), (int)(v7));
        g4_std::string::construct_copy(v18, &glotv3::errors::GAIA_FED_ACCESS_TOKEN_CANNOT_REQUEST);
        g4_std::string::append_str(v18, &v17);
        glotv3::Glotv3Logger::WriteLog(v18);
        g4_std::string::Destroy(v18);
        g4_std::string::Destroy(&v17);
      }
      else
      {
        *((uint8_t *)self + 185) = 1;
        __atomic_exchange_n((volatile int32_t *)self + 45, glotv3::Utils::GetUTCAsSeconds(v13), __ATOMIC_SEQ_CST);
      }
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v21);
    }
    result = gaia::Gaia::GetInstance(v11);
    v3 = *(uint32_t *)(result + 236);
    if ( v3 > 0 )
      *(uint32_t *)(result + 236) = v3 - 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ViaGaiaActionsManager  (binary VA: 0x13246f0)
// Original: glotv3::TrackingManager::ViaGaiaActionsManager
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::ViaGaiaActionsManager(glotv3::TrackingManager::Self *a1)
{
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);

  result = 0;
  if ( a1 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v2) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
    glotv3::TrackingManager::SetFedAccessToken((int)(uintptr_t)(a1), (int)(uintptr_t)(&v2) + 1);
    g4_std::string::Destroy((char *)&v2 + 1);
    glotv3::TrackingManager::RequestFederationAccessTokenFromGaia(a1);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::OnLaunch  (binary VA: 0x1324840)
// Original: glotv3::TrackingManager::OnLaunch
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::OnLaunch(glotv3::TrackingManager::Self *a1, int a2, int a3, int a4)
{
  int v4;
  glotv3::SingletonMutexedProcessor::Self *v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  if ( *((uint8_t *)a1 + 196) != 0 )
    boost::assertion::detail::assertion_failed_msg_char_id_2f5b3e(
      (boost::assertion::detail::Self *)"(m_DetectedCurrentlyLaunched.load(cpp11::memory_order_relaxed) == false)",
      glotv3::errors::AUT_PREVIOUSLY_LAUNCHED,
      "void glotv3::TrackingManager::OnLaunch(unsigned int, const string&, const string&)",
      "F:/G4/G4_UP8Shop/lib/Glotv3/src/TrackingManager.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_314)->st_value + 3,
      v7);
  *((uint32_t *)a1 + 11) = a2;
  g4_std::string::assign_str((char *)a1 + 48, a3);
  v4 = *((uint32_t *)a1 + 33);
  if ( v4 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v4 = *((uint32_t *)a1 + 33);
  }
  if ( (uint8_t)glotv3::SingletonMutexedProcessor::ParseEventDescriptor(v4, a4) == 0 )
  {
    g4_std::string::construct_copy(v8, &glotv3::errors::DESCRIPTOR_COULD_NOT_BE_ACQUIRED);
    glotv3::EventOfError::s_OfType((glotv3::Event::Self **)&v9, (void *)(uintptr_t)0x202aau, (int)(uintptr_t)v8);
    v11 = v9;
    v12 = v10;
    if ( v10 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1);
    v6 = *((glotv3::SingletonMutexedProcessor::Self **)a1 + 33);
    if ( v6 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v6 = *((glotv3::SingletonMutexedProcessor::Self **)a1 + 33);
    }
    glotv3::SingletonMutexedProcessor::QueueForWriting(v6, (int)(uintptr_t)(&v11), 0, 1);
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v12);
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v10);
    g4_std::string::Destroy(v8);
  }
  *((uint8_t *)a1 + 196) = 1;
  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::LAUNCHED_AUT);
  return glotv3::TrackingManager::OutputConfigurationParameters(a1);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ViaGaia  (binary VA: 0x1324ef0)
// Original: glotv3::TrackingManager::ViaGaia
// ----------------------------------------------------------------------------
char glotv3::TrackingManager::ViaGaia(gaia::GaiaRequest::Self *a1)
{
  gaia::GaiaRequest::Self *v1;
  int ResponseCode;
  char *OperationCode;
  int v4;
  uint32_t *v5;
  int v6;
  int *v7;
  int v8;
  uint8_t *v9;
  int v10;
  int ResponseType;
  int Response;
  uint8_t *v13;
  uint8_t *i;
  uint8_t *v15;
  char *v16;
  typedef uint32_t *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_Caller;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[4];
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[4];
  typedef uint8_t _g4_t_v32[4];
  typedef uint8_t _g4_t_v33[4];
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[4];
  typedef int (**_g4_t_v36)(std::exception *);
  typedef int (**_g4_t_v37)(std::exception *);
  typedef char *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int (**_g4_t_v40)(int);
  typedef uint32_t _g4_t_v41[4];
  typedef void *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t _g4_t_v48[29];
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef gaia::GaiaRequest::Self **_g4_t_v55;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Caller)) > _g4_s2 ? (16u + sizeof(_g4_t_Caller)) : _g4_s2,
    _g4_s4 = (34u + sizeof(_g4_t_v21)) > _g4_s3 ? (34u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v26)) > _g4_s8 ? (52u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v27)) > _g4_s9 ? (56u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v28)) > _g4_s10 ? (60u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v29)) > _g4_s11 ? (64u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v30)) > _g4_s12 ? (68u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v31)) > _g4_s13 ? (72u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v32)) > _g4_s14 ? (76u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v33)) > _g4_s15 ? (80u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v34)) > _g4_s16 ? (84u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v35)) > _g4_s17 ? (88u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v36)) > _g4_s18 ? (92u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v37)) > _g4_s19 ? (112u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v38)) > _g4_s20 ? (132u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v39)) > _g4_s21 ? (136u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v40)) > _g4_s22 ? (140u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v41)) > _g4_s23 ? (144u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v42)) > _g4_s24 ? (160u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v43)) > _g4_s25 ? (164u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v44)) > _g4_s26 ? (168u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v45)) > _g4_s27 ? (172u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v46)) > _g4_s28 ? (176u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (180u + sizeof(_g4_t_v47)) > _g4_s29 ? (180u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (184u + sizeof(_g4_t_v48)) > _g4_s30 ? (184u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (300u + sizeof(_g4_t_v49)) > _g4_s31 ? (300u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (301u + sizeof(_g4_t_v50)) > _g4_s32 ? (301u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (304u + sizeof(_g4_t_v51)) > _g4_s33 ? (304u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (308u + sizeof(_g4_t_v52)) > _g4_s34 ? (308u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (312u + sizeof(_g4_t_v53)) > _g4_s35 ? (312u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (316u + sizeof(_g4_t_v54)) > _g4_s36 ? (316u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (332u + sizeof(_g4_t_v55)) > _g4_s37 ? (332u + sizeof(_g4_t_v55)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_Caller &Caller = *reinterpret_cast<_g4_t_Caller *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 34u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 160u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 164u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 300u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 301u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 304u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 308u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 312u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 316u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 332u);

  v55 = &a1;
  v1 = a1;
  Caller = gaia::GaiaRequest::GetCaller(a1);
  ResponseCode = gaia::GaiaRequest::GetResponseCode(v1);
  OperationCode = (char *)gaia::GaiaRequest::GetOperationCode(v1);
  v19 = OperationCode;
  if ( ResponseCode != 0 )
  {
    if ( OperationCode == (char *)(uintptr_t)(uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_9C4)->st_name + 3 )
    {
      if ( ResponseCode == 403 )
        *(uint8_t *)(Caller + 186) = 1;
      *(uint8_t *)(Caller + 185) = 0;
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v30), (int)(ResponseCode));
      g4_std::string::construct_copy(v31, &glotv3::errors::GAIA_FED_ACCESS_TOKEN_REQUEST_FAILED);
      g4_std::string::append_str(v31, &v30);
      glotv3::Glotv3Logger::WriteLog(v31);
      g4_std::string::Destroy(v31);
      g4_std::string::Destroy(&v30);
    }
    glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v34), (int)(ResponseCode));
    do
      v4 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
    while ( v4 == 4 );
    if ( v4 != 0 )
    {
      sub_1235D60(&v36, v4, "boost: mutex lock failed in pthread_mutex_lock");
      v36 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
    v22 = (int)(uintptr_t)(&dword_213B814);
    v38 = &v21;
    v39 = &v22;
    sub_1900810(v48);
    v48[28] = 0;
    v49 = 0;
    v48[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v40 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v41[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v41[-1] + (uint32_t)(uintptr_t)(*(v40 - 3)), 0);
    memset(&v41[1], 0, 12);
    v40 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v42 = nullptr;
    v48[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v43 = nullptr;
    v44 = 0;
    v41[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v45);
    v47 = &dword_213B814;
    v41[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v46 = 16;
    sub_19119D0(v48, v41);
    v5 = (uint32_t *)g4_std::ostream::op_shl_int(&v40, v19);
    v6 = *(uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 12) + 20) & 5;
    v38 = (char *)v42;
    v39 = v43;
    if ( v6 == 0 )
    {
      sub_193A9B0((int)(uintptr_t)(&v22), 0, *(uint32_t *)(v22 - 12), v42, (char *)v43 - (char *)((uint8_t *)v42));
      v40 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
      v48[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
      v41[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      g4_std::string::Destroy(&v47);
      v41[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v45);
      v40 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
      *(uint32_t *)((char *)&v41[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
      v48[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v48);
      do
        v10 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
      while ( v10 == 4 );
      if ( v10 == 0 )
      {
        g4_std::string::construct_copy(v32, &glotv3::errors::GAIA_REQUEST_FAILED);
        g4_std::string::append_str(v32, &v22);
        g4_std::string::construct_copy(v33, v32);
        g4_std::string::append_str(v33, &glotv3::system::HASHTAG);
        g4_std::string::construct_copy(v35, v33);
        g4_std::string::append_str(v35, &v34);
        glotv3::Glotv3Logger::WriteLog(v35);
        g4_std::string::Destroy(v35);
        g4_std::string::Destroy(v33);
        g4_std::string::Destroy(v32);
        g4_std::string::Destroy(&v22);
        g4_std::string::Destroy(&v34);
        return (char)(uintptr_t)(OperationCode);
      }
      sub_1235D60(&v37, v10, "boost: mutex unlock failed in pthread_mutex_unlock");
      v37 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    }
    std::terminate();
  }
  if ( OperationCode == (char *)(uintptr_t)(uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_9C4)->st_name + 3 )
  {
    if ( gaia::GaiaRequest::GetResponseType(v1) == 3 )
    {
      v38 = (char *)&dword_213B814;
      gaia::GaiaRequest::GetResponse(v1, &v38);
      glotv3::TrackingManager::SetFedAccessToken(Caller, (int)(uintptr_t)(&v38));
      g4_std::string::Destroy(&v38);
    }
    else
    {
      ResponseType = gaia::GaiaRequest::GetResponseType(v1);
      glotv3::Utils::ToString_eResponseType(&v28, ResponseType);
      g4_std::string::construct_copy(v29, &glotv3::errors::GAIA_ETS_REQUEST_INVALID_RESPONSE);
      g4_std::string::append_str(v29, &v28);
      glotv3::Glotv3Logger::WriteLog(v29);
      g4_std::string::Destroy(v29);
      g4_std::string::Destroy(&v28);
      LOBYTE(OperationCode) = *(uint8_t *)(Caller + 185);
      *(uint8_t *)(Caller + 185) = 0;
    }
  }
  else
  {
    if ( OperationCode != (char *)(uintptr_t)(uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_BB4)->st_value + 2 )
      return (char)(uintptr_t)(OperationCode);
    if ( gaia::GaiaRequest::GetResponseType(v1) != 3 )
    {
      v7 = &v26;
      v8 = gaia::GaiaRequest::GetResponseType(v1);
      glotv3::Utils::ToString_eResponseType(&v26, v8);
      v9 = v27;
      g4_std::string::construct_copy(v27, &glotv3::errors::GAIA_ETS_REQUEST_INVALID_RESPONSE);
LABEL_18:
      g4_std::string::append_str(v9, v7);
      glotv3::Glotv3Logger::WriteLog(v9);
      g4_std::string::Destroy(v9);
      g4_std::string::Destroy(v7);
      return (char)(uintptr_t)(OperationCode);
    }
    v18 = (uint32_t *)(Caller + 12);
    Response = gaia::GaiaRequest::GetResponse(v1, Caller + 12);
    if ( Response != 0 )
    {
      v7 = &v24;
      v9 = v25;
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v24), (int)(Response));
      g4_std::string::construct_copy(v25, &glotv3::errors::GAIA_ETS_REQUEST_ERROR);
      goto LABEL_18;
    }
    OperationCode = *(char **)(*(uint32_t *)(Caller + 12) - 12);
    if ( OperationCode != nullptr )
    {
      g4_std::string::construct_copy(v23, &glotv3::errors::GAIA_GOT_ETS_SERVER_AS);
      g4_std::string::append_str(v23, v18);
      glotv3::Glotv3Logger::WriteLog(v23);
      g4_std::string::Destroy(v23);
      v13 = *(uint8_t **)(Caller + 12);
      for ( i = &v13[*((uint32_t *)v13 - 3)]; i != v13; ++v13 )
      {
        if ( i != v13 && *v13 == 104 )
        {
          v15 = v13;
          v16 = "http://";
          while ( 1 )
          {
            ++v15;
            ++v16;
            if ( i == v15 )
              break;
            if ( v16 == "" )
            {
              if ( v15 == v13 )
                goto LABEL_35;
              goto LABEL_34;
            }
            if ( *v15 != *v16 )
              goto LABEL_38;
          }
          if ( v16 == "" )
          {
LABEL_34:
            boost::algorithm::replace_first_string_char_8_char_1_5ed2d6(v18, "http://", (char *)&unk_1B15112);
            break;
          }
        }
LABEL_38:
        ;
      }
LABEL_35:
      LOBYTE(OperationCode) = *(uint8_t *)(Caller + 184);
      *(uint8_t *)(Caller + 184) = 1;
    }
  }
  return (char)(uintptr_t)(OperationCode);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::SpawnWorkers  (binary VA: 0x1325e20)
// Original: glotv3::TrackingManager::SpawnWorkers
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::SpawnWorkers(glotv3::TrackingManager::Self *self)
{
  int v1;
  int v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  glotv3::TCPServer::Self *v11;
  glotv3::TCPServer::Self *v12;
  int v13;
  glotv3::TCPServer::Self *v14;
  int v15;
  unsigned int v16;
  unsigned int MaximumRequiredConcurrency;
  unsigned int MinimumRequiredConcurrency;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  int v37;
  glotv3::Porting::Self *v38;
  int v39;
  unsigned int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  glotv3::DNSClient::Self *v53;
  glotv3::DNSClient::Self *v54;
  int v56;
  int v57;
  int v58;
  int v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef unsigned int _g4_t_i;
  typedef glotv3::TrackingManager::Self *_g4_t_v68;
  typedef int _g4_t_v69[2];
  typedef char _g4_t_v70[4];
  typedef char _g4_t_v71[4];
  typedef int _g4_t_v72;
  typedef char _g4_t_v73[4];
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77[3];
  typedef glotv3::TCPServer::Self *_g4_t_v78;
  typedef int _g4_t_v79[3];
  typedef int _g4_t_v80;
  typedef int _g4_t_v81[3];
  typedef int _g4_t_v82;
  typedef int _g4_t_v83[3];
  typedef int64_t _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86[3];
  typedef int _g4_t_v87;
  typedef int _g4_t_v88[3];
  typedef glotv3::TCPServer::Self *_g4_t_v89;
  typedef int _g4_t_v90[3];
  typedef int _g4_t_v91;
  typedef int _g4_t_v92[3];
  typedef int _g4_t_v93;
  typedef int _g4_t_v94[3];
  typedef int _g4_t_v95;
  typedef int _g4_t_v96[3];
  typedef int _g4_t_v97;
  typedef int _g4_t_v98[3];
  typedef int _g4_t_v99;
  typedef int _g4_t_v100[3];
  typedef int _g4_t_v101;
  typedef int _g4_t_v102[3];
  typedef int _g4_t_v103;
  typedef int _g4_t_v104[3];
  typedef int _g4_t_v105;
  typedef int _g4_t_v106[3];
  typedef int _g4_t_v107;
  typedef int _g4_t_v108[3];
  typedef int *_g4_t_v109;
  typedef uint32_t *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef uint32_t _g4_t_v113[6];
  typedef uint32_t _g4_t_v114[4];
  typedef int _g4_t_v115;
  typedef uint32_t (*_g4_t_v116)(glotv3::SingletonMutexedProcessor::Self *);
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int (**_g4_t_v120)(std::exception *);
  typedef uint32_t (*_g4_t_v121)(glotv3::SingletonMutexedProcessor::Self *);
  typedef uint32_t _g4_t_v122[2];
  typedef int _g4_t_v123;
  typedef uint8_t _g4_t_v124[12];
  typedef int (**_g4_t_v125)(std::exception *);
  typedef int (**_g4_t_v126)(std::exception *);
  typedef int (**_g4_t_v127)(std::exception *);
  typedef int (**_g4_t_v128)(std::exception *);
  typedef int (**_g4_t_v129)(std::exception *);
  typedef int (**_g4_t_v130)(std::exception *);
  typedef int (**_g4_t_v131)(std::exception *);
  typedef int (**_g4_t_v132)(std::exception *);
  typedef glotv3::Porting::Self *_g4_t_v133;
  typedef boost::thread::Self *_g4_t_v134;
  typedef int _g4_t_v135;
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (0u + sizeof(_g4_t_v60)) > _g4_s0 ? (0u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v61)) > _g4_s1 ? (0u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v62)) > _g4_s2 ? (0u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v63)) > _g4_s3 ? (8u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v64)) > _g4_s4 ? (12u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v65)) > _g4_s5 ? (16u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v66)) > _g4_s6 ? (20u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_i)) > _g4_s7 ? (24u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v68)) > _g4_s8 ? (28u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v69)) > _g4_s9 ? (40u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v70)) > _g4_s10 ? (48u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v71)) > _g4_s11 ? (52u + sizeof(_g4_t_v71)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v72)) > _g4_s12 ? (56u + sizeof(_g4_t_v72)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v73)) > _g4_s13 ? (60u + sizeof(_g4_t_v73)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v74)) > _g4_s14 ? (64u + sizeof(_g4_t_v74)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v75)) > _g4_s15 ? (68u + sizeof(_g4_t_v75)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v76)) > _g4_s16 ? (72u + sizeof(_g4_t_v76)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v77)) > _g4_s17 ? (76u + sizeof(_g4_t_v77)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v78)) > _g4_s18 ? (88u + sizeof(_g4_t_v78)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v79)) > _g4_s19 ? (92u + sizeof(_g4_t_v79)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v80)) > _g4_s20 ? (104u + sizeof(_g4_t_v80)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v81)) > _g4_s21 ? (108u + sizeof(_g4_t_v81)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v82)) > _g4_s22 ? (120u + sizeof(_g4_t_v82)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v83)) > _g4_s23 ? (124u + sizeof(_g4_t_v83)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v84)) > _g4_s24 ? (136u + sizeof(_g4_t_v84)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v85)) > _g4_s25 ? (152u + sizeof(_g4_t_v85)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v86)) > _g4_s26 ? (156u + sizeof(_g4_t_v86)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v87)) > _g4_s27 ? (168u + sizeof(_g4_t_v87)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v88)) > _g4_s28 ? (172u + sizeof(_g4_t_v88)) : _g4_s28,
    _g4_s30 = (184u + sizeof(_g4_t_v89)) > _g4_s29 ? (184u + sizeof(_g4_t_v89)) : _g4_s29,
    _g4_s31 = (188u + sizeof(_g4_t_v90)) > _g4_s30 ? (188u + sizeof(_g4_t_v90)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v91)) > _g4_s31 ? (200u + sizeof(_g4_t_v91)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v92)) > _g4_s32 ? (204u + sizeof(_g4_t_v92)) : _g4_s32,
    _g4_s34 = (216u + sizeof(_g4_t_v93)) > _g4_s33 ? (216u + sizeof(_g4_t_v93)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v94)) > _g4_s34 ? (220u + sizeof(_g4_t_v94)) : _g4_s34,
    _g4_s36 = (232u + sizeof(_g4_t_v95)) > _g4_s35 ? (232u + sizeof(_g4_t_v95)) : _g4_s35,
    _g4_s37 = (236u + sizeof(_g4_t_v96)) > _g4_s36 ? (236u + sizeof(_g4_t_v96)) : _g4_s36,
    _g4_s38 = (248u + sizeof(_g4_t_v97)) > _g4_s37 ? (248u + sizeof(_g4_t_v97)) : _g4_s37,
    _g4_s39 = (252u + sizeof(_g4_t_v98)) > _g4_s38 ? (252u + sizeof(_g4_t_v98)) : _g4_s38,
    _g4_s40 = (264u + sizeof(_g4_t_v99)) > _g4_s39 ? (264u + sizeof(_g4_t_v99)) : _g4_s39,
    _g4_s41 = (268u + sizeof(_g4_t_v100)) > _g4_s40 ? (268u + sizeof(_g4_t_v100)) : _g4_s40,
    _g4_s42 = (280u + sizeof(_g4_t_v101)) > _g4_s41 ? (280u + sizeof(_g4_t_v101)) : _g4_s41,
    _g4_s43 = (284u + sizeof(_g4_t_v102)) > _g4_s42 ? (284u + sizeof(_g4_t_v102)) : _g4_s42,
    _g4_s44 = (296u + sizeof(_g4_t_v103)) > _g4_s43 ? (296u + sizeof(_g4_t_v103)) : _g4_s43,
    _g4_s45 = (300u + sizeof(_g4_t_v104)) > _g4_s44 ? (300u + sizeof(_g4_t_v104)) : _g4_s44,
    _g4_s46 = (312u + sizeof(_g4_t_v105)) > _g4_s45 ? (312u + sizeof(_g4_t_v105)) : _g4_s45,
    _g4_s47 = (316u + sizeof(_g4_t_v106)) > _g4_s46 ? (316u + sizeof(_g4_t_v106)) : _g4_s46,
    _g4_s48 = (328u + sizeof(_g4_t_v107)) > _g4_s47 ? (328u + sizeof(_g4_t_v107)) : _g4_s47,
    _g4_s49 = (332u + sizeof(_g4_t_v108)) > _g4_s48 ? (332u + sizeof(_g4_t_v108)) : _g4_s48,
    _g4_s50 = (344u + sizeof(_g4_t_v109)) > _g4_s49 ? (344u + sizeof(_g4_t_v109)) : _g4_s49,
    _g4_s51 = (348u + sizeof(_g4_t_v110)) > _g4_s50 ? (348u + sizeof(_g4_t_v110)) : _g4_s50,
    _g4_s52 = (352u + sizeof(_g4_t_v111)) > _g4_s51 ? (352u + sizeof(_g4_t_v111)) : _g4_s51,
    _g4_s53 = (356u + sizeof(_g4_t_v112)) > _g4_s52 ? (356u + sizeof(_g4_t_v112)) : _g4_s52,
    _g4_s54 = (360u + sizeof(_g4_t_v113)) > _g4_s53 ? (360u + sizeof(_g4_t_v113)) : _g4_s53,
    _g4_s55 = (384u + sizeof(_g4_t_v114)) > _g4_s54 ? (384u + sizeof(_g4_t_v114)) : _g4_s54,
    _g4_s56 = (400u + sizeof(_g4_t_v115)) > _g4_s55 ? (400u + sizeof(_g4_t_v115)) : _g4_s55,
    _g4_s57 = (404u + sizeof(_g4_t_v116)) > _g4_s56 ? (404u + sizeof(_g4_t_v116)) : _g4_s56,
    _g4_s58 = (408u + sizeof(_g4_t_v117)) > _g4_s57 ? (408u + sizeof(_g4_t_v117)) : _g4_s57,
    _g4_s59 = (412u + sizeof(_g4_t_v118)) > _g4_s58 ? (412u + sizeof(_g4_t_v118)) : _g4_s58,
    _g4_s60 = (416u + sizeof(_g4_t_v119)) > _g4_s59 ? (416u + sizeof(_g4_t_v119)) : _g4_s59,
    _g4_s61 = (420u + sizeof(_g4_t_v120)) > _g4_s60 ? (420u + sizeof(_g4_t_v120)) : _g4_s60,
    _g4_s62 = (440u + sizeof(_g4_t_v121)) > _g4_s61 ? (440u + sizeof(_g4_t_v121)) : _g4_s61,
    _g4_s63 = (444u + sizeof(_g4_t_v122)) > _g4_s62 ? (444u + sizeof(_g4_t_v122)) : _g4_s62,
    _g4_s64 = (452u + sizeof(_g4_t_v123)) > _g4_s63 ? (452u + sizeof(_g4_t_v123)) : _g4_s63,
    _g4_s65 = (460u + sizeof(_g4_t_v124)) > _g4_s64 ? (460u + sizeof(_g4_t_v124)) : _g4_s64,
    _g4_s66 = (472u + sizeof(_g4_t_v125)) > _g4_s65 ? (472u + sizeof(_g4_t_v125)) : _g4_s65,
    _g4_s67 = (492u + sizeof(_g4_t_v126)) > _g4_s66 ? (492u + sizeof(_g4_t_v126)) : _g4_s66,
    _g4_s68 = (512u + sizeof(_g4_t_v127)) > _g4_s67 ? (512u + sizeof(_g4_t_v127)) : _g4_s67,
    _g4_s69 = (532u + sizeof(_g4_t_v128)) > _g4_s68 ? (532u + sizeof(_g4_t_v128)) : _g4_s68,
    _g4_s70 = (552u + sizeof(_g4_t_v129)) > _g4_s69 ? (552u + sizeof(_g4_t_v129)) : _g4_s69,
    _g4_s71 = (572u + sizeof(_g4_t_v130)) > _g4_s70 ? (572u + sizeof(_g4_t_v130)) : _g4_s70,
    _g4_s72 = (592u + sizeof(_g4_t_v131)) > _g4_s71 ? (592u + sizeof(_g4_t_v131)) : _g4_s71,
    _g4_s73 = (612u + sizeof(_g4_t_v132)) > _g4_s72 ? (612u + sizeof(_g4_t_v132)) : _g4_s72,
    _g4_s74 = (640u + sizeof(_g4_t_v133)) > _g4_s73 ? (640u + sizeof(_g4_t_v133)) : _g4_s73,
    _g4_s75 = (644u + sizeof(_g4_t_v134)) > _g4_s74 ? (644u + sizeof(_g4_t_v134)) : _g4_s74,
    _g4_s76 = (648u + sizeof(_g4_t_v135)) > _g4_s75 ? (648u + sizeof(_g4_t_v135)) : _g4_s75
  };
  alignas(16) uint8_t _g4_sf[_g4_s76];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 0u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 52u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 68u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 104u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 108u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 120u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 124u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 136u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 152u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 156u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 168u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 172u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 184u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 188u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 200u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 204u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 216u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 220u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 232u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 236u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 248u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 252u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 264u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 268u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 280u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 284u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 296u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 300u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 312u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 316u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 328u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 332u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 344u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 348u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 352u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 356u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 360u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 384u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 400u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 404u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 408u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 412u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 416u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 420u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 440u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 444u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 452u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 460u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 472u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 492u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 512u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 532u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 552u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 572u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 592u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 612u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 640u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 644u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 648u);

  v133 = (glotv3::Porting::Self *)&self;
  v68 = self;
  v121 = nullptr;
  v1 = opNew(0x2Cu);
  *(uint32_t *)(v1 + 4) = 1;
  *(uint32_t *)(v1 + 8) = 1;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2093588);
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  v122[0] = v1;
  v2 = G4_VCALL<int>(v1, 20);
  v3 = (uint8_t *)v2;
  v4 = v2 + 4;
  if ( v2 != -4 )
    glotv3::DNSClient::Construct((glotv3::DNSClient::Self *)(v2 + 4), v68);
  *v3 = 1;
  v76 = v4;
  v77[0] = v122[0];
  if ( v122[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v122[0] + 4), 1);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v122);
  v5 = v76;
  v6 = 0;
  v87 = v76;
  v88[0] = v77[0];
  if ( v77[0] != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v77[0] + 4), 1);
    v5 = v87;
    v6 = v88[0];
  }
  v7 = *((uint32_t *)v68 + 35);
  *((uint32_t *)v68 + 35) = v5;
  v87 = v7;
  v8 = *((uint32_t *)v68 + 36);
  *((uint32_t *)v68 + 36) = v6;
  v88[0] = v8;
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v88);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v77);
  if ( glotv3::TrackingManager::s_IsSpyTcpLoggingActive != 0 )
  {
    v134 = (boost::thread::Self *)(uintptr_t)0x1F0Au;
    glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(v70), (unsigned int)(uintptr_t)(0u));
    g4_std::string::construct_copy(v71, &glotv3::errors::TCP_FOR_LIBSPY_WAS_OPENED);
    g4_std::string::append_str(v71, v70);
    glotv3::Glotv3Logger::WriteLog(v71);
    g4_std::string::Destroy(v71);
    g4_std::string::Destroy(v70);
    v121 = nullptr;
    v9 = opNew(0x50u);
    *(uint32_t *)(v9 + 4) = 1;
    *(uint32_t *)(v9 + 8) = 1;
    *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_20935A8);
    *(uint32_t *)(v9 + 12) = 0;
    *(uint8_t *)(v9 + 16) = 0;
    v122[0] = v9;
    v10 = (uint8_t *)G4_VCALL<int>(v9, 20);
    v11 = (glotv3::TCPServer::Self *)(v10 + 4);
    if ( v10 != (uint8_t *)-4 )
    {
      glotv3::TCPServer::Construct(v11, v68);
      v11 = (glotv3::TCPServer::Self *)(v10 + 4);
    }
    *v10 = 1;
    v78 = v11;
    v79[0] = v122[0];
    if ( v122[0] != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v122[0] + 4), 1);
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v122);
    v12 = v78;
    v13 = 0;
    v89 = v78;
    v90[0] = v79[0];
    if ( v79[0] != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v79[0] + 4), 1);
      v12 = v89;
      v13 = v90[0];
    }
    v14 = *((glotv3::TCPServer::Self **)v68 + 37);
    *((uint32_t *)v68 + 37) = (uint32_t)(uintptr_t)(v12);
    v89 = v14;
    v15 = *((uint32_t *)v68 + 38);
    *((uint32_t *)v68 + 38) = v13;
    v90[0] = v15;
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v90);
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v79);
    if ( *((uint32_t *)v68 + 37) == 0 )
    {
      glotv3::TrackingManager::s_IsSpyTcpLoggingActive = 0;
      g4_std::string::construct_copy(&v72, &glotv3::errors::OUT_OF_MEMORY);
      g4_std::string::append((int)(uintptr_t)(&v72), "void glotv3::TrackingManager::SpawnWorkers()", 0x2Cu);
      glotv3::Glotv3Logger::WriteLog(&v72);
      g4_std::string::Destroy(&v72);
    }
  }
  v16 = boost::thread::hardware_concurrency(v133);
  MaximumRequiredConcurrency = glotv3::Porting::GetMaximumRequiredConcurrency(v133);
  MinimumRequiredConcurrency = glotv3::Porting::GetMinimumRequiredConcurrency(v133);
  if ( MaximumRequiredConcurrency <= v16 )
    v16 = MaximumRequiredConcurrency;
  if ( v16 >= MinimumRequiredConcurrency )
    MinimumRequiredConcurrency = v16;
  v63 = MinimumRequiredConcurrency;
  if ( glotv3::Porting::GetPlatform(v133) == 2 )
    v63 -= (glotv3::TrackingManager::s_IsSpyTcpLoggingActive == 0) - 1;
  if ( v63 != 0 )
  {
    for ( i = 0; i != v63; ++i )
    {
      v134 = (boost::thread::Self *)(size_t (*)())boost::asio::io_service::run;
      v135 = 0;
      boost::bind_unsigned_int_asio_io_ser_01e93a(
        v113,
        (int)(uintptr_t)(int (*)(pthread_mutex_t **))&boost::asio::io_service::run,
        0,
        (int)(uintptr_t)((char *)v68 + 80));
      v19 = opNew(8u);
      v64 = v113[0];
      v65 = v113[1];
      v66 = v113[2];
      v20 = (int *)v19;
      v21 = opNew(0x80u);
      *(uint32_t *)(v21 + 4) = 0;
      *(uint32_t *)(v21 + 8) = 0;
      *(uint32_t *)(v21 + 12) = 0;
      *(uint32_t *)v21 = ((uint32_t)(uintptr_t)&off_20A9450);
      *(uint32_t *)(v21 + 16) = 0;
      *(uint32_t *)(v21 + 20) = 0;
      v22 = pthread_mutex_init((pthread_mutex_t *)(v21 + 24), nullptr);
      if ( v22 != 0 )
      {
        sub_1235D60(&v125, v22, "boost:: mutex constructor failed in pthread_mutex_init");
        v125 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v23 = pthread_mutex_init((pthread_mutex_t *)(v21 + 28), nullptr);
      if ( v23 != 0 )
      {
        sub_1235D60(
          &v127,
          v23,
          "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
        v127 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v24 = pthread_cond_init((pthread_cond_t *)(v21 + 32), nullptr);
      if ( v24 != 0 )
      {
        v62 = v24;
        v58 = pthread_mutex_destroy((pthread_mutex_t *)(v21 + 28));
        v59 = v62;
        if ( v58 != 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
            69,
            "boost::condition_variable::condition_variable()",
            "!pthread_mutex_destroy(&internal_mutex)");
          v59 = v62;
        }
        sub_1235D60(
          &v126,
          v59,
          "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
        v126 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v25 = pthread_mutex_init((pthread_mutex_t *)(v21 + 36), nullptr);
      if ( v25 != 0 )
      {
        sub_1235D60(&v128, v25, "boost:: mutex constructor failed in pthread_mutex_init");
        v128 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v26 = pthread_mutex_init((pthread_mutex_t *)(v21 + 40), nullptr);
      if ( v26 != 0 )
      {
        sub_1235D60(
          &v130,
          v26,
          "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
        v130 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v27 = pthread_cond_init((pthread_cond_t *)(v21 + 44), nullptr);
      if ( v27 != 0 )
      {
        v61 = v27;
        v56 = pthread_mutex_destroy((pthread_mutex_t *)(v21 + 40));
        v57 = v61;
        if ( v56 != 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
            69,
            "boost::condition_variable::condition_variable()",
            "!pthread_mutex_destroy(&internal_mutex)");
          v57 = v61;
        }
        sub_1235D60(
          &v129,
          v57,
          "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
        v129 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      *(uint32_t *)(v21 + 116) = v64;
      *(uint32_t *)(v21 + 68) = v21 + 60;
      *(uint32_t *)(v21 + 72) = v21 + 60;
      *(uint32_t *)(v21 + 124) = v66;
      *(uint32_t *)v21 = ((uint32_t)(uintptr_t)&off_20935C8);
      *(uint32_t *)(v21 + 120) = v65;
      *(uint8_t *)(v21 + 48) = 0;
      *(uint8_t *)(v21 + 49) = 0;
      *(uint8_t *)(v21 + 50) = 0;
      *(uint32_t *)(v21 + 52) = 0;
      *(uint32_t *)(v21 + 60) = 0;
      *(uint32_t *)(v21 + 64) = 0;
      *(uint32_t *)(v21 + 76) = 0;
      *(uint32_t *)(v21 + 80) = 0;
      *(uint32_t *)(v21 + 84) = 0;
      *(uint32_t *)(v21 + 88) = 0;
      *(uint32_t *)(v21 + 92) = 0;
      *(uint32_t *)(v21 + 96) = 0;
      *(uint32_t *)(v21 + 100) = 0;
      *(uint32_t *)(v21 + 104) = 0;
      *(uint32_t *)(v21 + 108) = 0;
      *(uint8_t *)(v21 + 112) = 1;
      *(uint8_t *)(v21 + 113) = 0;
      *v20 = v21;
      v20[1] = 0;
      v75 = 0;
      v28 = (uint32_t *)opNew(0x10u);
      v28[1] = 1;
      v28[2] = 1;
      *v28 = ((uint32_t)(uintptr_t)&off_2093648);
      v28[3] = v21;
      v29 = v20[1];
      v20[1] = (int)(uintptr_t)(v28);
      v75 = v29;
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v75);
      v30 = *(uint32_t *)(v21 + 8);
      if ( v30 == 0 || *(uint32_t *)(v30 + 4) == 0 )
      {
        v31 = v20[1];
        v111 = v21;
        v112 = v31;
        v32 = v21;
        if ( v31 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v31 + 4), 1);
          v32 = v111;
          v30 = *(uint32_t *)(v21 + 8);
        }
        *(uint32_t *)(v21 + 4) = v32;
        v33 = v112;
        if ( v30 != v112 )
        {
          if ( v112 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v112 + 8), 1);
            v30 = *(uint32_t *)(v21 + 8);
          }
          if ( v30 != 0 && __sync_fetch_and_add((volatile int32_t *)(v30 + 8), 0xFFFFFFFF) == 1 )
          {
            v60 = v33;
            G4_VCALL<void>(v30, 12);
            v33 = v60;
          }
          *(uint32_t *)(v21 + 8) = v33;
        }
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v112);
      }
      if ( (uint8_t)boost::thread::start_thread_noexcept((boost::thread::Self *)v20) == 0 )
      {
        sub_1235D60(&v120, 11, "boost::thread_resource_error");
        v120 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      v109 = v20;
      v110 = nullptr;
      v34 = (uint32_t *)opNew(0x10u);
      v34[1] = 1;
      v34[2] = 1;
      *v34 = ((uint32_t)(uintptr_t)&off_20935E8);
      v34[3] = (uint32_t)(uintptr_t)(v20);
      v35 = v110;
      v110 = v34;
      v74 = v35;
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v74);
      g4_std::deque_shared_ptr_thread_c8d33b::push_back((char *)v68 + 92, &v109);
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v110);
      v36 = *((uint32_t *)v68 + 29);
      v37 = *((uint32_t *)v68 + 32);
      if ( v36 == *((uint32_t *)v68 + 30) )
      {
        v36 = *(uint32_t *)(v37 - 4) + 512;
        v38 = *(glotv3::Porting::Self **)(*(uint32_t *)(v37 - 4) + 504);
        if ( v38 != nullptr )
          goto LABEL_45;
      }
      else
      {
        v38 = *(glotv3::Porting::Self **)(v36 - 8);
        if ( v38 != nullptr )
          goto LABEL_45;
      }
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        646,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::thread,"
        " typename boost::detail::sp_dereference<T>::type = boost::thread&]",
        "px != 0");
      v38 = *(glotv3::Porting::Self **)(v36 - 8);
LABEL_45:
      glotv3::Porting::SetThreadPriority(v38, v134);
      do
        v39 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
      while ( v39 == 4 );
      if ( v39 != 0 )
      {
        sub_1235D60(&v131, v39, "boost: mutex lock failed in pthread_mutex_lock");
        v131 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      v40 = i;
      v41 = v124;
      v69[0] = (int)(uintptr_t)(&dword_213B814);
      while ( 1 )
      {
        *(v41 - 1) = v40 % 0xA + 48;
        v40 /= 0xAu;
        if ( v40 == 0 )
          break;
        --v41;
      }
      sub_193A9B0((int)(uintptr_t)(v69), 0, dword_213B808[0], v41 - 1, v124 - (v41 - 1));
      do
        v42 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
      while ( v42 == 4 );
      if ( v42 != 0 )
      {
        sub_1235D60(&v132, v42, "boost: mutex unlock failed in pthread_mutex_unlock");
        v132 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      g4_std::string::construct_copy(v73, &glotv3::errors::STARTED_ASIO_WORKER);
      g4_std::string::append_str(v73, v69);
      glotv3::Glotv3Logger::WriteLog(v73);
      g4_std::string::Destroy(v73);
      g4_std::string::Destroy(v69);
    }
  }
  v43 = *((uint32_t *)v68 + 34);
  v44 = *((uint32_t *)v68 + 33);
  v80 = v44;
  v81[0] = v43;
  if ( v43 == 0 )
  {
    v93 = v44;
    v94[0] = 0;
    goto LABEL_90;
  }
  __sync_add_and_fetch((volatile int32_t *)(v43 + 4), 1);
  v44 = v80;
  v93 = v80;
  v94[0] = v81[0];
  if ( v81[0] == 0 )
  {
LABEL_90:
    v91 = v44;
    v92[0] = 0;
    goto LABEL_91;
  }
  __sync_add_and_fetch((volatile int32_t *)(v81[0] + 4), 1);
  v44 = v93;
  v91 = v93;
  v92[0] = v94[0];
  if ( v94[0] == 0 )
  {
LABEL_91:
    v95 = v44;
    v96[0] = 0;
    goto LABEL_60;
  }
  __sync_add_and_fetch((volatile int32_t *)(v94[0] + 4), 1);
  v95 = v91;
  v96[0] = v92[0];
  if ( v92[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v92[0] + 4), 1);
LABEL_60:
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v92);
  v113[4] = 0;
  v113[3] = (uint32_t)(uintptr_t)(glotv3::SingletonMutexedProcessor::AsyncWriter);
  v113[5] = v95;
  v114[0] = v96[0];
  if ( v96[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v96[0] + 4), 1);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v96);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v94);
  sub_1321DD0((pthread_mutex_t **)((char *)v68 + 84), (int *)&v113[3]);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v114);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v81);
  v45 = *((uint32_t *)v68 + 34);
  v46 = *((uint32_t *)v68 + 33);
  v82 = v46;
  v83[0] = v45;
  if ( v45 == 0 )
  {
    v99 = v46;
    v100[0] = 0;
    goto LABEL_93;
  }
  __sync_add_and_fetch((volatile int32_t *)(v45 + 4), 1);
  v46 = v82;
  v99 = v82;
  v100[0] = v83[0];
  if ( v83[0] == 0 )
  {
LABEL_93:
    v97 = v46;
    v98[0] = 0;
    goto LABEL_94;
  }
  __sync_add_and_fetch((volatile int32_t *)(v83[0] + 4), 1);
  v46 = v99;
  v97 = v99;
  v98[0] = v100[0];
  if ( v100[0] == 0 )
  {
LABEL_94:
    v101 = v46;
    v102[0] = 0;
    goto LABEL_67;
  }
  __sync_add_and_fetch((volatile int32_t *)(v100[0] + 4), 1);
  v101 = v97;
  v102[0] = v98[0];
  if ( v98[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v98[0] + 4), 1);
LABEL_67:
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v98);
  v114[2] = 0;
  v114[1] = (uint32_t)(uintptr_t)(glotv3::SingletonMutexedProcessor::AsyncNetwork);
  v114[3] = v101;
  v115 = v102[0];
  if ( v102[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v102[0] + 4), 1);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v102);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v100);
  sub_1321DD0((pthread_mutex_t **)((char *)v68 + 84), (int *)&v114[1]);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v115);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v83);
  v84 = 1000000;
  v47 = *((uint32_t *)v68 + 33);
  if ( v47 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v47 = *((uint32_t *)v68 + 33);
  }
  boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
    0,
    v47 + 13192,
    (uint32_t *)&v84);
  v48 = *((uint32_t *)v68 + 34);
  v49 = *((uint32_t *)v68 + 33);
  v85 = v49;
  v86[0] = v48;
  if ( v48 == 0 )
  {
    v105 = v49;
    v106[0] = 0;
    goto LABEL_96;
  }
  __sync_add_and_fetch((volatile int32_t *)(v48 + 4), 1);
  v49 = v85;
  v105 = v85;
  v106[0] = v86[0];
  if ( v86[0] == 0 )
  {
LABEL_96:
    v103 = v49;
    v104[0] = 0;
    goto LABEL_97;
  }
  __sync_add_and_fetch((volatile int32_t *)(v86[0] + 4), 1);
  v49 = v105;
  v103 = v105;
  v104[0] = v106[0];
  if ( v106[0] == 0 )
  {
LABEL_97:
    v107 = v49;
    v108[0] = 0;
    goto LABEL_76;
  }
  __sync_add_and_fetch((volatile int32_t *)(v106[0] + 4), 1);
  v107 = v103;
  v108[0] = v104[0];
  if ( v104[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
LABEL_76:
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v104);
  v117 = 0;
  v116 = (uint32_t (*)(glotv3::SingletonMutexedProcessor::Self *))(uintptr_t)(glotv3::SingletonMutexedProcessor::AsyncTimer);
  v118 = v107;
  v119 = v108[0];
  if ( v108[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v108[0] + 4), 1);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v108);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v106);
  v50 = *((uint32_t *)v68 + 33);
  if ( v50 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v50 = *((uint32_t *)v68 + 33);
  }
  v51 = v50 + 13196;
  v52 = *(uint32_t *)(v50 + 13192);
  v122[1] = v118;
  v121 = v116;
  v122[0] = v117;
  v123 = v119;
  if ( v119 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v119 + 4), 1);
  boost::asio::detail::deadline_timer_service_asio_time_traits_posix_t_ba0efa::async_wait_bi_bind_t_void_mfi_mf0_v_55a673(
    v52 + 20,
    v51,
    &v121);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v123);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v119);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v86);
  v53 = *((glotv3::DNSClient::Self **)v68 + 35);
  if ( v53 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::DNSCl"
      "ient, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
      "px != 0");
    v53 = *((glotv3::DNSClient::Self **)v68 + 35);
  }
  glotv3::DNSClient::ResetConnectivity(v53);
  v54 = *((glotv3::DNSClient::Self **)v68 + 35);
  if ( v54 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::DNSCl"
      "ient, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
      "px != 0");
    v54 = *((glotv3::DNSClient::Self **)v68 + 35);
  }
  return glotv3::DNSClient::TryToResolveDNS(v54);
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ResyncWithGaia  (binary VA: 0x1327160)
// Original: glotv3::TrackingManager::ResyncWithGaia
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::ResyncWithGaia(glotv3::TrackingManager::Self *self)
{
  int Instance;
  uint32_t *v2;
  int *v3;
  int *v4;
  bool v5;
  int v6;
  int v7;
  void *v8;
  int v9;
  uint32_t *v10;
  int result;
  int v12;
  int v13;
  Json::Value::Self *v14;
  gaia::Gaia::Self *v15;
  int v16;
  typedef gaia::Gaia::Self *_g4_t_v17;
  typedef gaia::Gaia::Self *_g4_t_v18;
  typedef gaia::Gaia::Self *_g4_t_v19;
  typedef gaia::Gaia::Self *_g4_t_v20;
  typedef gaia::Gaia::Self *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int *_g4_t_v23;
  typedef uint32_t _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[16];
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int (*_g4_t_v31)(glotv3::TrackingManager::Self *);
  typedef glotv3::TrackingManager::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v20)) > _g4_s3 ? (4u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v21)) > _g4_s4 ? (4u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v24)) > _g4_s7 ? (48u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (63u + sizeof(_g4_t_v25)) > _g4_s8 ? (63u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v26)) > _g4_s9 ? (68u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v27)) > _g4_s10 ? (84u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v28)) > _g4_s11 ? (88u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v29)) > _g4_s12 ? (92u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v30)) > _g4_s13 ? (96u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v31)) > _g4_s14 ? (100u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v32)) > _g4_s15 ? (104u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v33)) > _g4_s16 ? (108u + sizeof(_g4_t_v33)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 63u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);

  Instance = gaia::Gaia::GetInstance(v17);
  ++*(uint32_t *)(Instance + 236);
  gaia::Gaia::GetInstance(v18);
  if ( (uint8_t)gaia::Gaia::IsInitialized(v19) == 0 )
    goto LABEL_23;
  if ( *((uint8_t *)self + 184) != 0 )
  {
    v2 = (uint32_t *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance;
    v3 = *(int **)(ISingleton<gaia::GaiaActionsManager::Self>::s_instance + 12);
    if ( v3 == nullptr )
      goto LABEL_31;
  }
  else
  {
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)&v31);
    Json::Value::Construct((int)(uintptr_t)(v26), &glotv3::system::ETS_GAIA_SERVICE_NAME);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25) + 1, "serviceName", (int)(uintptr_t)(&v25));
    v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(&v31, (char *)&v25 + 1);
    Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
    g4_std::string::Destroy((char *)&v25 + 1);
    Json::Value::Destroy((Json::Value::Self *)v26);
    gaia::GaiaRequest::SetRunAsynchronous(
      (gaia::GaiaRequest::Self *)&v31,
      (void (__high *)(gaia::GaiaRequest::Self))glotv3::TrackingManager::ViaGaia,
      self);
    v15 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance(v21);
    gaia::Gaia::GetServiceUrl(v15, (gaia::GaiaRequest::Self *)&v31);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)&v31);
    v2 = (uint32_t *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance;
    v3 = *(int **)(ISingleton<gaia::GaiaActionsManager::Self>::s_instance + 12);
    if ( v3 == nullptr )
      goto LABEL_31;
  }
  v4 = (int *)(v2 + 2);
  do
  {
    while ( v3[4] >= 0 )
    {
      v4 = v3;
      v3 = (int *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_8;
    }
    v3 = (int *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_8:
  if ( v2 + 2 != (uint32_t *)(uintptr_t)(v4) )
  {
    if ( v4[4] <= 0 )
      goto LABEL_16;
    v5 = v4 == (int *)v2[4];
    v27 = 0;
    v28 = nullptr;
    v30 = 0;
    v29 = 0;
    v6 = (int)(uintptr_t)(v2 + 1);
    if ( v5 )
      goto LABEL_13;
    v22 = v2 + 1;
    v7 = sub_1904940(v4);
    v6 = (int)(uintptr_t)(v22);
    if ( *(int *)(v7 + 16) < 0 )
    {
      if ( *(uint32_t *)(v7 + 12) != 0 )
      {
LABEL_13:
        sub_1320D60(v24, v6, (int)(uintptr_t)(v4), (int)(uintptr_t)(v4), &v27);
        v4 = (int *)v24[0];
        v8 = v28;
        goto LABEL_14;
      }
      goto LABEL_33;
    }
    goto LABEL_34;
  }
LABEL_31:
  v16 = v2[6];
  v27 = 0;
  v28 = nullptr;
  v30 = 0;
  v29 = 0;
  v6 = (int)(uintptr_t)(v2 + 1);
  if ( v16 != 0 )
  {
    v7 = v2[5];
    if ( *(int *)(v7 + 16) < 0 )
    {
LABEL_33:
      sub_1320D60(v24, v6, 0, v7, &v27);
      v4 = (int *)v24[0];
      v8 = v28;
      goto LABEL_14;
    }
  }
LABEL_34:
  sub_1320EC0((int)(uintptr_t)(&v23), v6, &v27);
  v4 = v23;
  v8 = v28;
LABEL_14:
  if ( v8 != nullptr )
    opDelete(v8);
LABEL_16:
  v9 = v4[5];
  v10 = (uint32_t *)v4[6];
  if ( (uint32_t *)v9 == v10 )
  {
LABEL_26:
    v31 = glotv3::TrackingManager::ViaGaiaActionsManager;
    v32 = self;
    LOBYTE(v33) = 1;
    if ( (uint32_t *)v4[7] == v10 )
    {
      g4_std_compat::vector_insert_aux(
        (int)(uintptr_t)(v4 + 5),
        (int)(uintptr_t)(v10),
        (int *)&v31);
    }
    else
    {
      v13 = 0;
      if ( v10 != nullptr )
      {
        *v10 = (uint32_t)(uintptr_t)(glotv3::TrackingManager::ViaGaiaActionsManager);
        v10[1] = (uint32_t)(uintptr_t)(v32);
        v10[2] = v33;
        v13 = v4[6];
      }
      v4[6] = v13 + 12;
    }
  }
  else
  {
    while ( *(int (**)(glotv3::TrackingManager::Self *))v9 != glotv3::TrackingManager::ViaGaiaActionsManager
         || self != *(glotv3::TrackingManager::Self **)(v9 + 4) )
    {
      v9 += 12;
      if ( v10 == (uint32_t *)v9 )
        goto LABEL_26;
    }
    if ( *(uint8_t *)(v9 + 8) == 0 )
      *(uint8_t *)(v9 + 8) = 1;
  }
LABEL_23:
  result = gaia::Gaia::GetInstance(v20);
  v12 = *(uint32_t *)(result + 236);
  if ( v12 > 0 )
    *(uint32_t *)(result + 236) = v12 - 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::ActivateSpyIfConfigured  (binary VA: 0x1327810)
// Original: glotv3::TrackingManager::ActivateSpyIfConfigured
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::ActivateSpyIfConfigured(glotv3::TrackingManager::Self *self)
{
  void *v2;
  unsigned int v3;
  uint32_t *v4;
  void *v5;
  glotv3::Porting::Self *v6;
  int v7;
  void *v8;
  uint32_t *v9;
  glotv3::Porting::Self *v10;
  uint32_t *v11;
  glotv3::Porting::Self *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  void *v22;
  int v23;
  char **v24;
  int v25;
  char **v26;
  int v27;
  int *v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  typedef char **_g4_t_v36;
  typedef const bool *_g4_t_v37;
  typedef void *_g4_t_v38;
  typedef glotv3::Porting::Self *_g4_t_v39;
  typedef void *_g4_t_v40;
  typedef void *_g4_t_v41;
  typedef glotv3::Porting::Self *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef void *_g4_t_v44;
  typedef glotv3::Porting::Self *_g4_t_v45;
  typedef glotv3::Porting::Self *_g4_t_v46;
  typedef glotv3::Porting::Self *_g4_t_v47;
  typedef glotv3::Porting::Self *_g4_t_v48;
  typedef glotv3::Porting::Self *_g4_t_v49;
  typedef glotv3::Porting::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char _g4_t_v60[4];
  typedef char _g4_t_v61[4];
  typedef char _g4_t_v62[4];
  typedef char _g4_t_v63[4];
  typedef int _g4_t_v64;
  typedef char *_g4_t_v65;
  typedef char *_g4_t_v66[2];
  typedef int _g4_t_v67[3];
  typedef int _g4_t_v68;
  typedef char *_g4_t_v69[3];
  typedef char *_g4_t_v70;
  typedef char *_g4_t_v71[3];
  typedef char *_g4_t_v72;
  typedef void *_g4_t_ptr;
  typedef unsigned int _g4_t_v74;
  typedef void *_g4_t_v75;
  typedef void *_g4_t_v76;
  typedef void *_g4_t_v77;
  typedef uint8_t _g4_t_v78[236];
  typedef int _g4_t_v79;
  typedef int64_t _g4_t_v80;
  typedef int _g4_t_v81;
  typedef void **_g4_t_p_ptr;
  typedef uint32_t **_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef glotv3::Porting::Self *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef uint32_t _g4_t_v95[11];
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef glotv3::TrackingManager::Self **_g4_t_v98;
  enum : size_t {
    _g4_s0 = 1008u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v37)) > _g4_s1 ? (8u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v38)) > _g4_s2 ? (32u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v39)) > _g4_s3 ? (32u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v40)) > _g4_s4 ? (32u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v41)) > _g4_s5 ? (32u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v42)) > _g4_s6 ? (32u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v43)) > _g4_s7 ? (32u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v44)) > _g4_s8 ? (32u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v45)) > _g4_s9 ? (36u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v46)) > _g4_s10 ? (36u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v47)) > _g4_s11 ? (36u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v48)) > _g4_s12 ? (36u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v50)) > _g4_s14 ? (36u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v51)) > _g4_s15 ? (40u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v52)) > _g4_s16 ? (40u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v53)) > _g4_s17 ? (44u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v54)) > _g4_s18 ? (44u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v55)) > _g4_s19 ? (44u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v56)) > _g4_s20 ? (48u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (62u + sizeof(_g4_t_v57)) > _g4_s21 ? (62u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (63u + sizeof(_g4_t_v58)) > _g4_s22 ? (63u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v59)) > _g4_s23 ? (64u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v60)) > _g4_s24 ? (68u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v61)) > _g4_s25 ? (72u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v62)) > _g4_s26 ? (76u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v63)) > _g4_s27 ? (80u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v64)) > _g4_s28 ? (84u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v65)) > _g4_s29 ? (88u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v66)) > _g4_s30 ? (92u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v67)) > _g4_s31 ? (100u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v68)) > _g4_s32 ? (112u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v69)) > _g4_s33 ? (116u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v70)) > _g4_s34 ? (128u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v71)) > _g4_s35 ? (132u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v72)) > _g4_s36 ? (144u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_ptr)) > _g4_s37 ? (148u + sizeof(_g4_t_ptr)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v74)) > _g4_s38 ? (152u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v75)) > _g4_s39 ? (156u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v76)) > _g4_s40 ? (160u + sizeof(_g4_t_v76)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v77)) > _g4_s41 ? (164u + sizeof(_g4_t_v77)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v78)) > _g4_s42 ? (168u + sizeof(_g4_t_v78)) : _g4_s42,
    _g4_s44 = (404u + sizeof(_g4_t_v79)) > _g4_s43 ? (404u + sizeof(_g4_t_v79)) : _g4_s43,
    _g4_s45 = (408u + sizeof(_g4_t_v80)) > _g4_s44 ? (408u + sizeof(_g4_t_v80)) : _g4_s44,
    _g4_s46 = (416u + sizeof(_g4_t_v81)) > _g4_s45 ? (416u + sizeof(_g4_t_v81)) : _g4_s45,
    _g4_s47 = (420u + sizeof(_g4_t_p_ptr)) > _g4_s46 ? (420u + sizeof(_g4_t_p_ptr)) : _g4_s46,
    _g4_s48 = (424u + sizeof(_g4_t_v83)) > _g4_s47 ? (424u + sizeof(_g4_t_v83)) : _g4_s47,
    _g4_s49 = (428u + sizeof(_g4_t_v84)) > _g4_s48 ? (428u + sizeof(_g4_t_v84)) : _g4_s48,
    _g4_s50 = (432u + sizeof(_g4_t_v85)) > _g4_s49 ? (432u + sizeof(_g4_t_v85)) : _g4_s49,
    _g4_s51 = (436u + sizeof(_g4_t_v86)) > _g4_s50 ? (436u + sizeof(_g4_t_v86)) : _g4_s50,
    _g4_s52 = (440u + sizeof(_g4_t_v87)) > _g4_s51 ? (440u + sizeof(_g4_t_v87)) : _g4_s51,
    _g4_s53 = (444u + sizeof(_g4_t_v88)) > _g4_s52 ? (444u + sizeof(_g4_t_v88)) : _g4_s52,
    _g4_s54 = (448u + sizeof(_g4_t_v89)) > _g4_s53 ? (448u + sizeof(_g4_t_v89)) : _g4_s53,
    _g4_s55 = (660u + sizeof(_g4_t_v90)) > _g4_s54 ? (660u + sizeof(_g4_t_v90)) : _g4_s54,
    _g4_s56 = (664u + sizeof(_g4_t_v91)) > _g4_s55 ? (664u + sizeof(_g4_t_v91)) : _g4_s55,
    _g4_s57 = (668u + sizeof(_g4_t_v92)) > _g4_s56 ? (668u + sizeof(_g4_t_v92)) : _g4_s56,
    _g4_s58 = (672u + sizeof(_g4_t_v93)) > _g4_s57 ? (672u + sizeof(_g4_t_v93)) : _g4_s57,
    _g4_s59 = (676u + sizeof(_g4_t_v94)) > _g4_s58 ? (676u + sizeof(_g4_t_v94)) : _g4_s58,
    _g4_s60 = (680u + sizeof(_g4_t_v95)) > _g4_s59 ? (680u + sizeof(_g4_t_v95)) : _g4_s59,
    _g4_s61 = (724u + sizeof(_g4_t_v96)) > _g4_s60 ? (724u + sizeof(_g4_t_v96)) : _g4_s60,
    _g4_s62 = (728u + sizeof(_g4_t_v97)) > _g4_s61 ? (728u + sizeof(_g4_t_v97)) : _g4_s61,
    _g4_s63 = (924u + sizeof(_g4_t_v98)) > _g4_s62 ? (924u + sizeof(_g4_t_v98)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 62u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 63u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 100u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 112u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 116u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 128u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 132u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 144u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 148u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 152u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 156u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 160u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 164u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 168u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 404u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 408u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 416u);
  _g4_t_p_ptr &p_ptr = *reinterpret_cast<_g4_t_p_ptr *>(_g4_sf + 420u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 424u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 428u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 432u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 436u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 440u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 444u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 448u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 660u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 664u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 668u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 672u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 676u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 680u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 724u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 728u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 924u);

  v98 = &self;
  glotv3::Porting::GetDataDirectory((glotv3::Porting::Self *)v60);
  g4_std::string::construct_copy(v61, v60);
  g4_std::string::append_str(v61, &glotv3::system::BACKSLASH);
  g4_std::string::construct_copy(&v59, v61);
  g4_std::string::append_str(&v59, &glotv3::system::QADEBUG_TXT_FILE);
  g4_std::string::Destroy(v61);
  g4_std::string::Destroy(v60);
  if ( glotv3::Porting::GetPlatform() == 1 )
  {
    g4_std::string::construct_copy(v62, &glotv3::system::QADEBUG_ANDROID_PATH_FIX);
    g4_std::string::append_str(v62, &glotv3::system::BACKSLASH);
    g4_std::string::construct_copy(v69, v62);
    g4_std::string::append_str(v69, &glotv3::system::QADEBUG_TXT_FILE);
    g4_std::string::Destroy(v62);
    if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty(v69) != 0 )
    {
      sub_190C190((int)(uintptr_t)(&v90), v69[0], 8);
      sub_190CB20((int)(uintptr_t)(&ptr), v59, 50);
      sub_192CCB0(&ptr, &v92);
      if ( sub_190AC60(&v74) == 0 )
        sub_1911530((char *)&ptr + *((uint32_t *)ptr - 3), *(uint32_t *)&v78[*((uint32_t *)ptr - 3)] | 4);
      if ( sub_190AC60(&v92) == 0 )
        sub_1911530((char *)&v90 + *(uint32_t *)(v90 - 12), *(uint32_t *)((char *)v95 + *(uint32_t *)(v90 - 12)) | 4);
      glotv3::Fs::RemovePath(v69);
      g4_std::string::construct_copy(v63, &glotv3::system::QADEBUG_ANDROID_PATH_FIX);
      g4_std::string::append_str(v63, &glotv3::system::BACKSLASH);
      g4_std::string::construct_copy(v71, v63);
      g4_std::string::append_str(v71, &glotv3::system::QADEBUG_WAS_HERE);
      g4_std::string::Destroy(v63);
      sub_190CB20((int)(uintptr_t)(&v79), v71[0], 50);
      glotv3::Porting::GetDataDirectory((glotv3::Porting::Self *)&v64);
      v55 = (int)(uintptr_t)(g4_std_compat::ostream_write(
              &v79,
              glotv3::errors::USING_DATA_DIRECTORY,
              *(uint32_t *)(glotv3::errors::USING_DATA_DIRECTORY - 12)));
      v31 = (int)(uintptr_t)(g4_std_compat::ostream_write(v55, v64, *(uint32_t *)(v64 - 12)));
      sub_192CE40(v31);
      g4_std::string::Destroy(&v64);
      if ( sub_190AC60(&v80) == 0 )
        sub_1911530((char *)&v79 + *(uint32_t *)(v79 - 12), *(unsigned int *)((char *)&v83 + *(uint32_t *)(v79 - 12)) | 4);
      sub_190AF80(&v79);
      g4_std::string::Destroy(v71);
      sub_190AF80(&ptr);
      sub_190B2B0(&v90);
    }
    g4_std::string::Destroy(v69);
  }
  if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty(&v59) != 0 )
  {
    v68 = 0;
    ptr = nullptr;
    v75 = nullptr;
    v76 = nullptr;
    v77 = nullptr;
    v74 = 2048;
    v2 = (void *)opNew(1u);
    v3 = v74;
    v76 = v2;
    v77 = v2;
    v4 = (uint32_t *)(malloc(v74 + 12));
    v5 = ptr;
    *v4 = v3;
    v4[2] = (uint32_t)(uintptr_t)(v5);
    v4[1] = 0;
    ptr = v4;
    v81 = 0;
    p_ptr = &ptr;
    v83 = nullptr;
    v84 = 0;
    v85 = 0;
    v86 = 0;
    v87 = 2048;
    v51 = v4[1];
    if ( (unsigned int)(v51 + 2048) > *v4 )
    {
      v16 = v74;
      if ( v74 <= 0x800 )
        v16 = (v87 + 3) & 0xFFFFFFFC;
      v40 = (void *)v16;
      v4 = (uint32_t *)(malloc(v16 + 12));
      v4[1] = 0;
      *v4 = (uint32_t)(uintptr_t)(v40);
      v4[2] = (uint32_t)(uintptr_t)(ptr);
      ptr = v4;
      v51 = v4[1];
    }
    v53 = (int)(uintptr_t)(v4) + v51 + 12;
    if ( (v53 & 3) != 0 )
    {
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        267,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v4 = (uint32_t *)(ptr);
      v51 = *((uint32_t *)ptr + 1);
    }
    v4[1] = v51 + 2048;
    v84 = v53;
    v85 = v53;
    v86 = v53 + v87;
    v88 = 0;
    v89 = 0;
    v36 = &v59;
    glotv3::Fs::AsString(&v65);
    v66[0] = v65;
    v66[1] = v65;
    v81 = 0;
    v90 = 0;
    v91 = nullptr;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95[0] = 256;
    v6 = (glotv3::Porting::Self *)opNew(0x14u);
    *(uint32_t *)v6 = 0;
    *((uint32_t *)v6 + 1) = 2048;
    *((uint32_t *)v6 + 2) = 0;
    *((uint32_t *)v6 + 3) = 0;
    *((uint32_t *)v6 + 4) = 0;
    v45 = v6;
    v7 = opNew(1u);
    v8 = *((void **)v45 + 1);
    *((uint32_t *)v45 + 3) = v7;
    *((uint32_t *)v45 + 4) = v7;
    v38 = v8;
    v9 = (uint32_t *)(malloc((size_t)v8 + 12));
    v9[1] = 0;
    *v9 = (uint32_t)(uintptr_t)(v38);
    v10 = v45;
    v9[2] = *(uint32_t *)v45;
    *(uint32_t *)v45 = (uint32_t)(uintptr_t)(v9);
    v90 = (int)(uintptr_t)(v45);
    v91 = v45;
    v11 = *(uint32_t **)v45;
    v56 = (v95[0] + 3) & 0xFFFFFFFC;
    v52 = *(uint32_t *)(*(uint32_t *)v45 + 4);
    if ( v52 + v56 > **(uint32_t **)v45 )
    {
      v17 = *((uint32_t *)v45 + 1);
      if ( v56 >= v17 )
        v17 = (v95[0] + 3) & 0xFFFFFFFC;
      v41 = (void *)v17;
      v11 = (uint32_t *)(malloc(v17 + 12));
      v11[1] = 0;
      *v11 = (uint32_t)(uintptr_t)(v41);
      v10 = v45;
      v11[2] = *(uint32_t *)v45;
      *(uint32_t *)v45 = (uint32_t)(uintptr_t)(v11);
      v52 = v11[1];
    }
    v54 = (int)(uintptr_t)(v11) + v52 + 12;
    if ( (v54 & 3) != 0 )
    {
      v46 = v10;
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        (int)(uintptr_t)((char *)&dword_108 + 3),
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v11 = *(uint32_t **)v46;
      v52 = *(uint32_t *)(*(uint32_t *)v46 + 4);
    }
    v11[1] = v56 + v52;
    v92 = v54;
    v93 = v54;
    v94 = v54 + v95[0];
    v96 = 0;
    v97 = 0;
    if ( (uint8_t)sub_13276C0(
                            (int)(uintptr_t)(&v90),
                            v66,
                            (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&v79) != 0 )
    {
      v15 = v85;
      if ( v85 - v84 != 16 )
      {
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          1135,
          "rapidjson::GenericDocument<Encoding, Allocator>& rapidjson::GenericDocument<Encoding, Allocator>::ParseStream("
          "Stream&) [with unsigned int parseFlags = 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Enco"
          "ding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericDocument<Encoding, A"
          "llocator> = rapidjson::GenericDocument<rapidjson::UTF8<> >]",
          "stack_.GetSize () == sizeof (ValueType)");
        v15 = v85;
        if ( (unsigned int)(v85 - v84) <= 0xF )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            83,
            "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >,"
            " Allocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
            "GetSize () >= count * sizeof (T)");
          v15 = v85;
        }
      }
      v85 = v15 - 16;
      v79 = *(uint32_t *)(v15 - 16);
      v80 = *(uint64_t *)(v15 - 12);
      v81 = *(uint32_t *)(v15 - 4);
      *(uint32_t *)(v15 - 4) = 0;
      v88 = 0;
      v89 = 0;
    }
    else
    {
      v88 = v96;
      v89 = v97;
      v85 = v84;
    }
    v12 = v91;
    if ( v91 != nullptr )
    {
      v13 = *(uint32_t **)v91;
      if ( *(uint32_t *)v91 != 0 && v13 != *((uint32_t **)v91 + 2) )
      {
        while ( 1 )
        {
          v14 = (uint32_t *)v13[2];
          v39 = v12;
          free(v13);
          v12 = v39;
          *(uint32_t *)v39 = (uint32_t)(uintptr_t)(v14);
          if ( v14 == nullptr || v14 == *((uint32_t **)v39 + 2) )
            break;
          v13 = v14;
        }
      }
      v42 = v12;
      opDelete(*((void **)v12 + 4));
      opDelete(v42);
    }
    if ( v81 != 0 && sub_1320740(&v79, "GLOT") != 0 )
    {
      v29 = sub_1320740(&v79, "GLOT");
      v30 = (int *)(v29 + 16);
      if ( v29 == 0 )
      {
        v30 = (int *)&g4_rapidjson_NullValue;
        if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
        {
          v32 = _cxa_guard_acquire(g4_guard_d940a9bded);
          v30 = (int *)&g4_rapidjson_NullValue;
          if ( v32 != 0 )
            v30 = (int *)sub_1320060();
        }
      }
      if ( v30 == v67 )
      {
        v47 = (glotv3::Porting::Self *)v30;
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          237,
          "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidjso"
          "n::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAl"
          "locator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
          "this != & rhs");
        v30 = (int *)v47;
      }
      v67[0] = *v30;
      v67[1] = v30[1];
      v67[2] = v30[2];
      v68 = v30[3];
      v30[3] = 0;
    }
    if ( v68 != 0 )
    {
      v70 = nullptr;
      v72 = nullptr;
      v93 = 0;
      if ( sub_1320740(v67, "NOW") != 0 )
      {
        v23 = sub_1320740(v67, "NOW");
        v24 = (char **)(v23 + 16);
        if ( v23 == 0 )
        {
          v24 = (char **)&g4_rapidjson_NullValue;
          if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
          {
            v35 = _cxa_guard_acquire(g4_guard_d940a9bded);
            v24 = (char **)&g4_rapidjson_NullValue;
            if ( v35 != 0 )
              v24 = (char **)sub_1320060();
          }
        }
        if ( v24 == v69 )
        {
          v50 = (glotv3::Porting::Self *)v24;
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
          v24 = (char **)v50;
        }
        v69[0] = *v24;
        v69[1] = v24[1];
        v69[2] = v24[2];
        v70 = v24[3];
        v24[3] = nullptr;
      }
      if ( sub_1320740(v67, "LOG") != 0 )
      {
        v25 = sub_1320740(v67, "LOG");
        v26 = (char **)(v25 + 16);
        if ( v25 == 0 )
        {
          v26 = (char **)&g4_rapidjson_NullValue;
          if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
          {
            v34 = _cxa_guard_acquire(g4_guard_d940a9bded);
            v26 = (char **)&g4_rapidjson_NullValue;
            if ( v34 != 0 )
              v26 = (char **)sub_1320060();
          }
        }
        if ( v26 == v71 )
        {
          v49 = (glotv3::Porting::Self *)v26;
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
          v26 = (char **)v49;
        }
        v71[0] = *v26;
        v71[1] = v26[1];
        v71[2] = v26[2];
        v72 = v26[3];
        v26[3] = nullptr;
      }

// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (sub_1320740(v67, &off_1B6E530) != 0)
{
        v27 = sub_1320740(v67, &off_1B6E530);
        v28 = (int *)(v27 + 16);
        if ( v27 == 0 )
        {
          v28 = (int *)&g4_rapidjson_NullValue;
          if ( LOBYTE(g4_guard_d940a9bded[0]) == 0 )
          {
            v33 = _cxa_guard_acquire(g4_guard_d940a9bded);
            v28 = (int *)&g4_rapidjson_NullValue;
            if ( v33 != 0 )
              v28 = (int *)sub_1320060();
          }
        }

// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v28 == &v90)
{
          v48 = (glotv3::Porting::Self *)v28;
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            237,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator=(rapidj"
            "son::GenericValue<Encoding, Allocator>&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPo"
            "olAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
            "this != & rhs");
          v28 = (int *)v48;
        }

        v90 = *v28;
        v91 = (glotv3::Porting::Self *)v28[1];
        v92 = v28[2];
        v93 = v28[3];
        v28[3] = 0;
      }
      glotv3::TrackingManager::s_IsSpyInstantSendingActive = 0;
      glotv3::TrackingManager::s_IsSpyStreamLoggingActive = 0;
      v57 = 0;
      glotv3::Glotv3Logger::SetIsSpyStreamLoggingActive((glotv3::Glotv3Logger::Self *)&v57, (const bool *)v36);
      glotv3::TrackingManager::s_IsSpyTcpLoggingActive = 0;
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v70 != nullptr)
{
        if ( (BYTE1(v70) & 4) == 0 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            679,
            "int rapidjson::GenericValue<Encoding, Allocator>::GetInt() const [with Encoding = rapidjson::UTF8<>, Allocat"
            "or = rapidjson::MemoryPoolAllocator<>]",
            "flags_ & kIntFlag");
        if ( v69[0] == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
          glotv3::TrackingManager::s_IsSpyInstantSendingActive = 1;
      }

// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v72 != nullptr)
{
        if ( (BYTE1(v72) & 4) == 0 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            679,
            "int rapidjson::GenericValue<Encoding, Allocator>::GetInt() const [with Encoding = rapidjson::UTF8<>, Allocat"
            "or = rapidjson::MemoryPoolAllocator<>]",
            "flags_ & kIntFlag");
        if ( v71[0] == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
        {
          glotv3::TrackingManager::s_IsSpyStreamLoggingActive = 1;
          v58 = 1;
          glotv3::Glotv3Logger::SetIsSpyStreamLoggingActive((glotv3::Glotv3Logger::Self *)&v58, v37);
        }
      }

// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v93 != 0)
{
        if ( (v93 & 0x400) == 0 )
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            679,
            "int rapidjson::GenericValue<Encoding, Allocator>::GetInt() const [with Encoding = rapidjson::UTF8<>, Allocat"
            "or = rapidjson::MemoryPoolAllocator<>]",
            "flags_ & kIntFlag");
        if ( v90 == 1 )
          glotv3::TrackingManager::s_IsSpyTcpLoggingActive = glotv3::configuration::DISABLED_LIVE_LOGGING == 0;
      }

    }
    g4_std::string::Destroy(&v65);
    v18 = (uint32_t *)(v83);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (v83 != nullptr)
{
      v19 = *v83;
      if ( *v83 != nullptr && v19 != v83[2] )
      {
        while ( 1 )
        {
          v20 = (uint32_t *)v19[2];
          v43 = v18;
          free(v19);
          v18 = v43;
          *v43 = (uint32_t)(uintptr_t)(v20);
          if ( v20 == nullptr || v20 == (uint32_t *)v43[2] )
            break;
          v19 = v20;
        }
      }
      v44 = v18;
      opDelete((void *)v18[4]);
      opDelete(v44);
    }

    v21 = (uint32_t *)(ptr);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (ptr != nullptr && ptr != v75)
{
      while ( 1 )
      {
        v22 = (void *)v21[2];
        free(v21);
        ptr = v22;
        if ( v22 == nullptr || v22 == v75 )
          break;
        v21 = (uint32_t *)(v22);
      }
    }

    opDelete(v77);
  }
  return ((g4_std::string::Destroy(&v59)), (int)0);
}
// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::Construct  (binary VA: 0x13288c0)
// Original: glotv3::TrackingManager::TrackingManager
// ----------------------------------------------------------------------------
char glotv3::TrackingManager::Construct(glotv3::TrackingManager::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  pthread_mutex_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  volatile int32_t *v18;
  uint32_t *v19;
  volatile int32_t *v20;
  uint32_t *v21;
  volatile int32_t *v22;
  char result;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[5];
  typedef uint32_t *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef int _g4_t_v31[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v26)) > _g4_s2 ? (31u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v27)) > _g4_s3 ? (36u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v28)) > _g4_s4 ? (40u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v29)) > _g4_s5 ? (52u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v30)) > _g4_s6 ? (56u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v31)) > _g4_s7 ? (60u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 31u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);

  g4_std::string::construct_copy(a1, a2);
  g4_std::string::append_str(a1, &glotv3::system::BACKSLASH);
  g4_std::string::construct_copy((char *)a1 + 4, a3);
  g4_std::string::append_str((char *)a1 + 4, &glotv3::system::BACKSLASH);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_copy((char *)a1 + 12, &glotv3::configuration::DEFAULT_ETS_SERVER);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(a1) + 16, (char *)&unk_1B15112, (int)(uintptr_t)(v26));
  *(uint64_t *)((char *)a1 + 20) = 0;
  *(uint64_t *)((char *)a1 + 28) = 0;
  *(uint64_t *)((char *)a1 + 36) = 0;
  *((uint32_t *)a1 + 11) = 0;
  g4_std::string::construct_copy((char *)a1 + 48, &glotv3::configuration::DEFAULT_GAME_VERSION_STRING);
  sub_18FE4A0((char *)a1 + 52);
  v24 = opNew(0x10u);
  v3 = pthread_mutex_init((pthread_mutex_t *)(v24 + 4), nullptr);
  v6 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
  v31[0] = v3;
  v31[1] = v6;
  if ( v3 == 0 || boost::system::error_code::unspecified_bool_true == nullptr )
  {
    *(uint32_t *)(v24 + 8) = (uint32_t)(uintptr_t)((char *)a1 + 80);
    v7 = (pthread_mutex_t *)opNew(0x44u);
    ((int32_t *)(v7))[1] = 0;
    ((int32_t *)(v7))[2] = 0;
    ((int32_t *)(v7))[3] = (int)(uintptr_t)(a1) + 80;
    ((int32_t *)(v7))[4] = 0;
    ((uint8_t *)(v7))[20] = 0;
    ((int32_t *)(v7))[0] = (int)((uint32_t)(uintptr_t)&off_2092308);
    v25 = pthread_mutex_init(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (1))), nullptr);
    v31[1] = (int)(uintptr_t)(sub_18F81E0(v9, v8));
    v31[0] = v25;
    if ( v25 == 0 || boost::system::error_code::unspecified_bool_true == nullptr )
    {
      G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (1)))) = 0;
      G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (1)))) = 0;
      G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (1)))) = 0;
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (1)))) = 0;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (1))))[20] = 1;
      G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (2)))) = 0;
      G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (2)))) = 0;
      G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (2)))) = 0;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (2))))[12] = 0;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (2))))[13] = 0;
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v7) + (24 * (2)))) = 0;
      *(uint32_t *)(v24 + 12) = (uint32_t)(uintptr_t)(v7);
      ((int32_t *)(v7))[1] = 0;
      ((int32_t *)(v7))[2] = (int)(uintptr_t)(&unk_20D3FB8);
      *(uint32_t *)(*(uint32_t *)(v24 + 12) + 16) = 0;
      *((uint32_t *)a1 + 20) = v24;
      v10 = *(uint32_t *)(v24 + 12);
      *((uint32_t *)a1 + 21) = v10;
      *((uint32_t *)a1 + 22) = v10;
      __sync_fetch_and_add((volatile int32_t *)(v10 + 48), 1u);
      *((uint32_t *)a1 + 23) = 0;
      *((uint32_t *)a1 + 25) = 0;
      *((uint32_t *)a1 + 26) = 0;
      *((uint32_t *)a1 + 27) = 0;
      *((uint32_t *)a1 + 28) = 0;
      *((uint32_t *)a1 + 29) = 0;
      *((uint32_t *)a1 + 30) = 0;
      *((uint32_t *)a1 + 31) = 0;
      *((uint32_t *)a1 + 32) = 0;
      *((uint32_t *)a1 + 24) = 8;
      v11 = opNew(0x20u);
      v12 = *((uint32_t *)a1 + 24);
      *((uint32_t *)a1 + 23) = v11;
      v13 = (int *)(v11 + ((2 * v12 - 2) & 0xFFFFFFFC));
      *v13 = opNew(0x200u);
      *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(v13);
      v14 = *v13;
      *((uint32_t *)a1 + 32) = (uint32_t)(uintptr_t)(v13);
      *((uint32_t *)a1 + 26) = v14;
      *((uint32_t *)a1 + 27) = v14 + 512;
      v15 = *v13;
      *((uint32_t *)a1 + 25) = v14;
      *((uint32_t *)a1 + 30) = v15;
      *((uint32_t *)a1 + 29) = v15;
      *((uint32_t *)a1 + 33) = 0;
      *((uint32_t *)a1 + 34) = 0;
      *((uint32_t *)a1 + 35) = 0;
      *((uint32_t *)a1 + 36) = 0;
      *((uint32_t *)a1 + 37) = 0;
      *((uint32_t *)a1 + 31) = v15 + 512;
      *((uint32_t *)a1 + 38) = 0;
      *((uint32_t *)a1 + 39) = 0;
      *((uint32_t *)a1 + 40) = 0;
      *((uint32_t *)a1 + 41) = 0;
      *((uint32_t *)a1 + 42) = 0;
      *((uint32_t *)a1 + 43) = 0;
      *((uint32_t *)a1 + 44) = 0;
      *((uint32_t *)a1 + 45) = 0;
      *((uint8_t *)a1 + 184) = 0;
      *((uint8_t *)a1 + 185) = 0;
      *((uint8_t *)a1 + 186) = 0;
      *((uint8_t *)a1 + 187) = 0;
      *((uint8_t *)a1 + 188) = 1;
      *((uint8_t *)a1 + 189) = 0;
      *((uint8_t *)a1 + 190) = 0;
      *((uint8_t *)a1 + 191) = 0;
      *((uint8_t *)a1 + 192) = 0;
      *((uint8_t *)a1 + 193) = 0;
      *((uint8_t *)a1 + 194) = 0;
      *((uint8_t *)a1 + 195) = 0;
      *((uint8_t *)a1 + 196) = 0;
      *((uint8_t *)a1 + 197) = 0;
      glotv3::TrackingManager::ResetDataDirectoryToOurOwn(a1);
      glotv3::TrackingManager::ActivateSpyIfConfigured(a1);
      glotv3::TrackingManager::ResetFlags(a1);
      glotv3::TrackingManager::OutputDebugInformation(a1);
      v16 = (uint32_t *)opNew(0x3470u);
      glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(v16, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1) + 4, (int)(uintptr_t)(a1));
      v29 = v16;
      v30 = nullptr;
      *(uint32_t *)&v26[1] = 0;
      v17 = opNew(0x10u);
      *(uint32_t *)(v17 + 4) = 1;
      *(uint32_t *)(v17 + 8) = 1;
      *(uint32_t *)v17 = ((uint32_t)(uintptr_t)&off_2093508);
      *(uint32_t *)(v17 + 12) = (uint32_t)(uintptr_t)(v16);
      v18 = v30;
      v30 = (volatile int32_t *)v17;
      *(uint32_t *)&v26[1] = (uint32_t)(uintptr_t)(v18);
      boost::detail::shared_count::Destroy((volatile int32_t **)&v26[1]);
      v19 = v29;
      v20 = nullptr;
      v27 = v29;
      v28 = v30;
      if ( v30 != nullptr )
      {
        __sync_add_and_fetch(v30 + 1, 1);
        v19 = v27;
        v20 = v28;
      }
      v21 = *((uint32_t **)a1 + 33);
      *((uint32_t *)a1 + 33) = (uint32_t)(uintptr_t)(v19);
      v27 = v21;
      v22 = *((volatile int32_t **)a1 + 34);
      *((uint32_t *)a1 + 34) = (uint32_t)(uintptr_t)(v20);
      v28 = v22;
      boost::detail::shared_count::Destroy(&v28);
      boost::detail::shared_count::Destroy(&v30);
      glotv3::TrackingManager::SpawnWorkers(a1);
      result = glotv3::TrackingManager::s_AcquiredSingletonInstance;
      glotv3::TrackingManager::s_AcquiredSingletonInstance = 1;
      return result;
    }
  }
  sub_1320116(v31, "mutex");
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::getInstance  (binary VA: 0x1328da0)
// Original: glotv3::TrackingManager::getInstance
// ----------------------------------------------------------------------------
glotv3::TrackingManager::Self * glotv3::TrackingManager::getInstance(glotv3::TrackingManager::Self *self)
{
  int v1;
  int v3;
  int v4;
  glotv3::TrackingManager::Self *v5;
  int v6;
  glotv3::TrackingManager::Self *v7;
  volatile int32_t *v8;
  typedef glotv3::TrackingManager::Self *_g4_t_v9;
  typedef glotv3::TrackingManager::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef volatile int32_t *_g4_t_v13;
  typedef glotv3::TrackingManager::Self *_g4_t_v14;
  typedef volatile int32_t *_g4_t_v15;
  typedef int (**_g4_t_v16)(std::exception *);
  typedef int (**_g4_t_v17)(std::exception *);
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v15)) > _g4_s6 ? (36u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v16)) > _g4_s7 ? (40u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v17)) > _g4_s8 ? (60u + sizeof(_g4_t_v17)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  if ( glotv3::TrackingManager::s_AcquiredSingletonInstance == 0 )
  {
    do
      v3 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::TrackingManager::s_StaticInitializationMutex);
    while ( v3 == 4 );
    if ( v3 != 0 )
    {
      sub_1235D60(&v16, v3, "boost: mutex lock failed in pthread_mutex_lock");
      v16 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
    if ( glotv3::TrackingManager::s_OneInstance == 0 )
    {
      glotv3::Porting::GetDataDirectory((glotv3::Porting::Self *)&v11);
      glotv3::Porting::GetResourceDirectory((glotv3::Porting::Self *)&v12);
      v9 = (glotv3::TrackingManager::Self *)opNew(0xC8u);
      glotv3::TrackingManager::Construct(v9, (int)(uintptr_t)(&v11), (int)(uintptr_t)(&v12));
      v5 = v9;
      if ( v9 != nullptr && v9 == (glotv3::TrackingManager::Self *)glotv3::TrackingManager::s_OneInstance )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          624,
          "void boost::shared_ptr<T>::reset(Y*) [with Y = glotv3::TrackingManager::Self, T = glotv3::TrackingManager]",
          "p == 0 || p != px");
        v5 = v9;
      }
      v14 = v5;
      v10 = v5;
      v15 = nullptr;
      v13 = nullptr;
      v6 = opNew(0x10u);
      *(uint32_t *)(v6 + 4) = 1;
      *(uint32_t *)(v6 + 8) = 1;
      *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_20934A8);
      *(uint32_t *)(v6 + 12) = (uint32_t)(uintptr_t)(v10);
      v13 = v15;
      v15 = (volatile int32_t *)v6;
      boost::detail::shared_count::Destroy(&v13);
      v7 = v14;
      v14 = (glotv3::TrackingManager::Self *)glotv3::TrackingManager::s_OneInstance;
      glotv3::TrackingManager::s_OneInstance = (uintptr_t)(uintptr_t)(v7);
      v8 = (volatile int32_t *)(*(uint8_t **)unk_2117114);
      *(uintptr_t *)(unk_2117114) = (uintptr_t)(v15);
      v15 = v8;
      boost::detail::shared_count::Destroy(&v15);
      g4_std::string::Destroy(&v12);
      g4_std::string::Destroy(&v11);
    }
    do
      v4 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::TrackingManager::s_StaticInitializationMutex);
    while ( v4 == 4 );
    if ( v4 != 0 )
    {
      sub_1235D60(&v17, v4, "boost: mutex unlock failed in pthread_mutex_unlock");
      v17 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
  }
  *(uint32_t *)self = glotv3::TrackingManager::s_OneInstance;
  v1 = (int)(uintptr_t)((*(uint8_t **)unk_2117114));
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)((*(uint8_t **)unk_2117114));
  if ( v1 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::OnResume  (binary VA: 0x1329480)
// Original: glotv3::TrackingManager::OnResume
// ----------------------------------------------------------------------------
void glotv3::TrackingManager::OnResume(glotv3::TrackingManager::Self *self)
{
  glotv3::TrackingManager::Self *v1;
  glotv3::DNSClient::Self *v2;
  int v3;
  glotv3::SingletonMutexedProcessor::Self *v4;
  glotv3::SingletonMutexedProcessor::Self *v5;
  unsigned int v6;
  glotv3::SingletonMutexedProcessor::Self *v7;
  unsigned int TimeBetweenSessions;
  unsigned int v9;
  uint8_t *v10;
  glotv3::EventOfGameLaunchResume::Self *v11;
  unsigned int ChannelID;
  unsigned int v13;
  uint8_t *v14;
  uint8_t *v15;
  char HasUninstallPersistentKey;
  unsigned int v17;
  uint8_t *v18;
  glotv3::Event::Self *v19;
  unsigned int v20;
  uint8_t *v21;
  glotv3::Event::Self *v22;
  size_t v23;
  size_t v24;
  size_t v25;
  size_t v26;
  size_t v27;
  size_t v28;
  void *v29;
  size_t v30;
  size_t v31;
  size_t v32;
  size_t v33;
  int v34;
  size_t v35;
  unsigned int v36;
  uint8_t *v37;
  glotv3::Event::Self *v38;
  typedef glotv3::Porting::Self *_g4_t_v39;
  typedef glotv3::EventOfGameLaunchResume::Self *_g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef void *_g4_t_v42;
  typedef uint8_t *_g4_t_v43;
  typedef uint8_t *_g4_t_v44;
  typedef char _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef void *_g4_t_s1[4];
  typedef void *_g4_t_v53[4];
  typedef void *_g4_t_v54[3];
  typedef int _g4_t_v55;
  typedef char _g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef char _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef char _g4_t_v60[4];
  typedef char _g4_t_v61[4];
  typedef char _g4_t_v62[4];
  typedef char _g4_t_v63[4];
  typedef char _g4_t_v64[4];
  typedef int _g4_t_v65;
  typedef char _g4_t_v66[4];
  typedef char _g4_t_v67[4];
  typedef char _g4_t_v68[4];
  typedef char _g4_t_v69[4];
  typedef char _g4_t_v70[4];
  typedef char _g4_t_v71[4];
  typedef glotv3::EventOfGameLaunchResume::Self *_g4_t_v72;
  typedef volatile int32_t *_g4_t_v73;
  typedef glotv3::EventOfGameLaunchResume::Self *_g4_t_v74;
  typedef volatile int32_t *_g4_t_v75;
  typedef glotv3::Event::Self *_g4_t_v76;
  typedef volatile int32_t *_g4_t_v77;
  typedef void *_g4_t_s2;
  typedef volatile int32_t *_g4_t_v79;
  typedef void *_g4_t_v80;
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
  typedef volatile int32_t *_g4_t_v97[3];
  typedef int _g4_t_v98;
  typedef volatile int32_t *_g4_t_v99;
  typedef void *_g4_t_v100;
  typedef volatile int32_t **_g4_t_v101;
  typedef volatile int32_t **_g4_t_v102;
  typedef int _g4_t_v103;
  typedef glotv3::TrackingManager::Self **_g4_t_v104;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (8u + sizeof(_g4_t_v39)) > _g4_s0 ? (8u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v40)) > _g4_s1 ? (48u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v41)) > _g4_s2 ? (48u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v42)) > _g4_s3 ? (48u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v43)) > _g4_s4 ? (52u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v44)) > _g4_s5 ? (52u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v45)) > _g4_s6 ? (60u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v46)) > _g4_s7 ? (64u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v47)) > _g4_s8 ? (64u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v48)) > _g4_s9 ? (64u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v49)) > _g4_s10 ? (64u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v50)) > _g4_s11 ? (64u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v51)) > _g4_s12 ? (64u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_s1)) > _g4_s13 ? (72u + sizeof(_g4_t_s1)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v53)) > _g4_s14 ? (88u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v54)) > _g4_s15 ? (104u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v55)) > _g4_s16 ? (116u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v56)) > _g4_s17 ? (120u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v57)) > _g4_s18 ? (124u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v58)) > _g4_s19 ? (128u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v59)) > _g4_s20 ? (132u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v60)) > _g4_s21 ? (136u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v61)) > _g4_s22 ? (140u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v62)) > _g4_s23 ? (144u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v63)) > _g4_s24 ? (148u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v64)) > _g4_s25 ? (152u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v65)) > _g4_s26 ? (156u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v66)) > _g4_s27 ? (160u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v67)) > _g4_s28 ? (164u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v68)) > _g4_s29 ? (168u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v69)) > _g4_s30 ? (172u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v70)) > _g4_s31 ? (176u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v71)) > _g4_s32 ? (180u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v72)) > _g4_s33 ? (184u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v73)) > _g4_s34 ? (188u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v74)) > _g4_s35 ? (200u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v75)) > _g4_s36 ? (204u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (216u + sizeof(_g4_t_v76)) > _g4_s37 ? (216u + sizeof(_g4_t_v76)) : _g4_s37,
    _g4_s39 = (220u + sizeof(_g4_t_v77)) > _g4_s38 ? (220u + sizeof(_g4_t_v77)) : _g4_s38,
    _g4_s40 = (232u + sizeof(_g4_t_s2)) > _g4_s39 ? (232u + sizeof(_g4_t_s2)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v79)) > _g4_s40 ? (236u + sizeof(_g4_t_v79)) : _g4_s40,
    _g4_s42 = (248u + sizeof(_g4_t_v80)) > _g4_s41 ? (248u + sizeof(_g4_t_v80)) : _g4_s41,
    _g4_s43 = (252u + sizeof(_g4_t_v81)) > _g4_s42 ? (252u + sizeof(_g4_t_v81)) : _g4_s42,
    _g4_s44 = (264u + sizeof(_g4_t_v82)) > _g4_s43 ? (264u + sizeof(_g4_t_v82)) : _g4_s43,
    _g4_s45 = (268u + sizeof(_g4_t_v83)) > _g4_s44 ? (268u + sizeof(_g4_t_v83)) : _g4_s44,
    _g4_s46 = (280u + sizeof(_g4_t_v84)) > _g4_s45 ? (280u + sizeof(_g4_t_v84)) : _g4_s45,
    _g4_s47 = (284u + sizeof(_g4_t_v85)) > _g4_s46 ? (284u + sizeof(_g4_t_v85)) : _g4_s46,
    _g4_s48 = (296u + sizeof(_g4_t_v86)) > _g4_s47 ? (296u + sizeof(_g4_t_v86)) : _g4_s47,
    _g4_s49 = (300u + sizeof(_g4_t_v87)) > _g4_s48 ? (300u + sizeof(_g4_t_v87)) : _g4_s48,
    _g4_s50 = (312u + sizeof(_g4_t_v88)) > _g4_s49 ? (312u + sizeof(_g4_t_v88)) : _g4_s49,
    _g4_s51 = (316u + sizeof(_g4_t_v89)) > _g4_s50 ? (316u + sizeof(_g4_t_v89)) : _g4_s50,
    _g4_s52 = (328u + sizeof(_g4_t_v90)) > _g4_s51 ? (328u + sizeof(_g4_t_v90)) : _g4_s51,
    _g4_s53 = (332u + sizeof(_g4_t_v91)) > _g4_s52 ? (332u + sizeof(_g4_t_v91)) : _g4_s52,
    _g4_s54 = (344u + sizeof(_g4_t_v92)) > _g4_s53 ? (344u + sizeof(_g4_t_v92)) : _g4_s53,
    _g4_s55 = (348u + sizeof(_g4_t_v93)) > _g4_s54 ? (348u + sizeof(_g4_t_v93)) : _g4_s54,
    _g4_s56 = (360u + sizeof(_g4_t_v94)) > _g4_s55 ? (360u + sizeof(_g4_t_v94)) : _g4_s55,
    _g4_s57 = (364u + sizeof(_g4_t_v95)) > _g4_s56 ? (364u + sizeof(_g4_t_v95)) : _g4_s56,
    _g4_s58 = (376u + sizeof(_g4_t_v96)) > _g4_s57 ? (376u + sizeof(_g4_t_v96)) : _g4_s57,
    _g4_s59 = (380u + sizeof(_g4_t_v97)) > _g4_s58 ? (380u + sizeof(_g4_t_v97)) : _g4_s58,
    _g4_s60 = (392u + sizeof(_g4_t_v98)) > _g4_s59 ? (392u + sizeof(_g4_t_v98)) : _g4_s59,
    _g4_s61 = (396u + sizeof(_g4_t_v99)) > _g4_s60 ? (396u + sizeof(_g4_t_v99)) : _g4_s60,
    _g4_s62 = (400u + sizeof(_g4_t_v100)) > _g4_s61 ? (400u + sizeof(_g4_t_v100)) : _g4_s61,
    _g4_s63 = (404u + sizeof(_g4_t_v101)) > _g4_s62 ? (404u + sizeof(_g4_t_v101)) : _g4_s62,
    _g4_s64 = (408u + sizeof(_g4_t_v102)) > _g4_s63 ? (408u + sizeof(_g4_t_v102)) : _g4_s63,
    _g4_s65 = (412u + sizeof(_g4_t_v103)) > _g4_s64 ? (412u + sizeof(_g4_t_v103)) : _g4_s64,
    _g4_s66 = (432u + sizeof(_g4_t_v104)) > _g4_s65 ? (432u + sizeof(_g4_t_v104)) : _g4_s65
  };
  alignas(16) uint8_t _g4_sf[_g4_s66];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 104u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 132u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 136u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 140u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 148u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 152u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 156u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 160u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 164u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 168u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 172u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 176u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 180u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 184u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 188u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 200u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 204u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 216u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 220u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 232u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 236u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 248u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 252u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 264u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 268u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 280u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 284u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 296u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 300u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 312u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 316u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 328u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 332u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 344u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 348u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 360u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 364u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 376u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 380u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 392u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 396u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 400u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 404u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 408u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 412u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 432u);

  v104 = &self;
  v1 = self;
  if ( *((uint8_t *)self + 195) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::RESUMED_AUT_BUT_NOT_PAUSED);
  }
  else
  {
    if ( *((uint8_t *)self + 196) != 0 )
    {
      glotv3::Glotv3Logger::WriteLog(&glotv3::errors::RESUMED_AUT);
      glotv3::TrackingManager::ResetTimers(v1);
      v2 = *((glotv3::DNSClient::Self **)v1 + 35);
      if ( v2 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::D"
          "NSClient, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
          "px != 0");
        v2 = *((glotv3::DNSClient::Self **)v1 + 35);
      }
      glotv3::DNSClient::TryToResolveDNS(v2);
      glotv3::Porting::EraseIdentifiersCache();
      glotv3::TrackingManager::ResyncWithGaia(v1);
      if ( (uint64_t)glotv3::Fs::getFreeSpace(v1) < 5 )
        *((uint8_t *)v1 + 193) = 1;
      *((uint8_t *)v1 + 191) = 0;
      *((uint8_t *)v1 + 192) = 0;
      *((uint8_t *)v1 + 197) = 0;
      v3 = *((uint32_t *)v1 + 33);
      if ( v3 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::S"
          "ingletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
          "px != 0");
        v3 = *((uint32_t *)v1 + 33);
      }
      *(uint8_t *)(v3 + 13419) = 0;
      v4 = *((glotv3::SingletonMutexedProcessor::Self **)v1 + 33);
      if ( v4 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::S"
          "ingletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
          "px != 0");
        v4 = *((glotv3::SingletonMutexedProcessor::Self **)v1 + 33);
      }
      glotv3::SingletonMutexedProcessor::DetectGameTime(0, v4);
      if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 8) != 0 )
      {
        *((uint8_t *)v1 + 190) = 1;
      }
      else
      {
        *((uint8_t *)v1 + 189) = *((uint8_t *)v1 + 188) ^ 1;
        glotv3::Fs::TouchPath((char *)v1 + 8);
      }
      v5 = *((glotv3::SingletonMutexedProcessor::Self **)v1 + 33);
      if ( v5 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::S"
          "ingletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
          "px != 0");
        v5 = *((glotv3::SingletonMutexedProcessor::Self **)v1 + 33);
      }
      v6 = glotv3::SingletonMutexedProcessor::DetectCurrentSession(v5);
      glotv3::Utils::ToString<unsigned int>((uint32_t *)(uintptr_t)(&v55), (unsigned int)(uintptr_t)(v6));
      g4_std::string::construct_copy(v56, &glotv3::errors::USING_SESSION_ID);
      g4_std::string::append_str(v56, &v55);
      glotv3::Glotv3Logger::WriteLog(v56);
      g4_std::string::Destroy(v56);
      g4_std::string::Destroy(&v55);
      v7 = *((glotv3::SingletonMutexedProcessor::Self **)v1 + 33);
      if ( v7 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::S"
          "ingletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
          "px != 0");
        v7 = *((glotv3::SingletonMutexedProcessor::Self **)v1 + 33);
      }
      glotv3::SingletonMutexedProcessor::DetectDevice(v7);
      TimeBetweenSessions = glotv3::TrackingManager::GetTimeBetweenSessions(v1, false);
      v98 = 0;
      v99 = nullptr;
      sub_1320FA0();
      v9 = sub_13290A0();
      if ( v9 == 0 )
        goto LABEL_143;
      v99 = (volatile int32_t *)v9;
      *(uint32_t *)(v9 + 4) = 1;
      *(uint32_t *)(v9 + 8) = 1;
      *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2093728);
      *(uint32_t *)(v9 + 12) = 0;
      *(uint8_t *)(v9 + 16) = 0;
      v10 = nullptr;
      if ( v99 != nullptr )
        v10 = (uint8_t *)G4_VCALL<int>(v99, 20);
      v11 = (glotv3::EventOfGameLaunchResume::Self *)(v10 + 4);
      if ( v10 != (uint8_t *)-4 )
      {
        v43 = v10;
        v40 = (glotv3::EventOfGameLaunchResume::Self *)(v10 + 4);
        glotv3::EventOfGameLaunchResume::Construct(
          (glotv3::EventOfGameLaunchResume::Self *)(v10 + 4),
          *((uint8_t *)v1 + 187),
          *((uint8_t *)v1 + 189),
          *((uint8_t *)v1 + 190),
          (double)*((unsigned int *)v1 + 41),
          TimeBetweenSessions);
        v11 = v40;
        v10 = v43;
      }
      *v10 = 1;
      v74 = v11;
      v75 = v99;
      if ( v99 != nullptr )
        __sync_add_and_fetch(v99 + 1, 1);
      boost::detail::shared_count::Destroy(&v99);
      v72 = v74;
      v73 = v75;
      if ( v75 != nullptr )
        __sync_add_and_fetch(v75 + 1, 1);
      boost::detail::shared_count::Destroy(&v75);
      glotv3::EventOfGameLaunchResume::ResetDetectedLaunchAfterRestartDevice(v72, *((uint8_t *)v1 + 197));
      ChannelID = glotv3::Porting::GetChannelID(v39);
      glotv3::EventOfGameLaunchResume::SetChannelID(v72, ChannelID);
      if ( v72 != nullptr )
      {
        v76 = (glotv3::Event::Self *)(v72);
        v77 = v73;
        if ( v73 != nullptr )
          __sync_add_and_fetch(v73 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v1), &v76, 0);
        boost::detail::shared_count::Destroy(&v77);
      }
      else
      {
        g4_std::string::construct_copy(&v57, &glotv3::errors::OUT_OF_MEMORY);
        g4_std::string::append((int)(uintptr_t)(&v57), "void glotv3::TrackingManager::OnResume()", 0x28u);
        glotv3::Glotv3Logger::WriteLog(&v57);
        g4_std::string::Destroy(&v57);
      }
      if ( glotv3::Porting::GetPlatform() == 1 && *((uint8_t *)v1 + 187) != 0 )
      {
        v99 = nullptr;
        v100 = nullptr;
        v103 = 0;
        v101 = &v99;
        v102 = &v99;
        if ( (uint8_t)glotv3::Porting::TryGetInstallReferral((glotv3::Porting::Self *)&v98) != 0 )
        {
          v96 = nullptr;
          v97[0] = nullptr;
          sub_1320FA0();
          v13 = sub_13290A0();
          if ( v13 == 0 )
            goto LABEL_143;
          v97[0] = (volatile int32_t *)v13;
          *(uint32_t *)(v13 + 4) = 1;
          *(uint32_t *)(v13 + 8) = 1;
          *(uint32_t *)v13 = ((uint32_t)(uintptr_t)&off_2093748);
          *(uint32_t *)(v13 + 12) = 0;
          *(uint8_t *)(v13 + 16) = 0;
          v14 = nullptr;
          if ( v97[0] != nullptr )
            v14 = (uint8_t *)(*(int (**)(volatile int32_t *))(*v97[0] + 20))(v97[0]);
          v15 = v14 + 4;
          if ( v14 != (uint8_t *)-4 )
          {
            v44 = v14;
            v41 = v14 + 4;
            glotv3::EventOfInstallReferral::Construct((glotv3::EventOfInstallReferral::Self *)(v14 + 4));
            v15 = v41;
            v14 = v44;
          }
          *v14 = 1;
          v80 = v15;
          v81 = v97[0];
          if ( v97[0] != nullptr )
            __sync_add_and_fetch(v97[0] + 1, 1);
          boost::detail::shared_count::Destroy(v97);
          s2 = v80;
          v79 = v81;
          if ( v81 != nullptr )
            __sync_add_and_fetch(v81 + 1, 1);
          boost::detail::shared_count::Destroy(&v81);
          glotv3::EventOfInstallReferral::SetInstallRefferal(
            (glotv3::EventOfInstallReferral::Self *)s2,
            (std::map<std::string,std::string> *)&v98);
          if ( s2 != nullptr )
          {
            v82 = (glotv3::Event::Self *)s2;
            v83 = v79;
            if ( v79 != nullptr )
              __sync_add_and_fetch(v79 + 1, 1);
            glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v1), &v82, 0);
            boost::detail::shared_count::Destroy(&v83);
          }
          else
          {
            g4_std::opAdd_35f83b(
              (int)(uintptr_t)(v58),
              (int)(uintptr_t)(&glotv3::errors::OUT_OF_MEMORY),
              "void glotv3::TrackingManager::OnResume()");
            glotv3::Glotv3Logger::WriteLog(v58);
            g4_std::string::Destroy(v58);
          }
          boost::detail::shared_count::Destroy(&v79);
        }
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          (int)(uintptr_t)(&v98),
          v100);
      }
      if ( glotv3::Porting::GetPlatform() == 1 )
      {
        v98 = 0;
        v99 = nullptr;
        sub_1320FA0();
        v20 = sub_13290A0();
        if ( v20 == 0 )
          goto LABEL_143;
        v99 = (volatile int32_t *)v20;
        *(uint32_t *)(v20 + 4) = 1;
        *(uint32_t *)(v20 + 8) = 1;
        *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_2093768);
        *(uint32_t *)(v20 + 12) = 0;
        *(uint8_t *)(v20 + 16) = 0;
        v21 = nullptr;
        if ( v99 != nullptr )
          v21 = (uint8_t *)G4_VCALL<int>(v99, 20);
        v22 = (glotv3::Event::Self *)(v21 + 4);
        if ( v21 != (uint8_t *)-4 )
        {
          glotv3::EventOfGlotAppDetails::Construct((glotv3::EventOfGlotAppDetails::Self *)(v21 + 4));
          v22 = (glotv3::Event::Self *)(v21 + 4);
        }
        *v21 = 1;
        v84 = v22;
        v85 = v99;
        if ( v99 != nullptr )
          __sync_add_and_fetch(v99 + 1, 1);
        boost::detail::shared_count::Destroy(&v99);
        v96 = v84;
        v97[0] = v85;
        if ( v85 != nullptr )
          __sync_add_and_fetch(v85 + 1, 1);
        boost::detail::shared_count::Destroy(&v85);
        if ( v96 != nullptr )
        {
          v86 = v96;
          v87 = v97[0];
          if ( v97[0] != nullptr )
            __sync_add_and_fetch(v97[0] + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v1), &v86, 0);
          boost::detail::shared_count::Destroy(&v87);
        }
        else
        {
          g4_std::string::construct_copy(&v59, &glotv3::errors::OUT_OF_MEMORY);
          g4_std::string::append((int)(uintptr_t)(&v59), "void glotv3::TrackingManager::OnResume()", 0x28u);
          glotv3::Glotv3Logger::WriteLog(&v59);
          g4_std::string::Destroy(&v59);
        }
        boost::detail::shared_count::Destroy(v97);
      }
      if ( glotv3::Porting::GetPlatform() != 2 )
      {
LABEL_34:
        *((uint8_t *)v1 + 187) = 0;
        *((uint8_t *)v1 + 189) = 0;
        *((uint8_t *)v1 + 188) = 0;
        *((uint8_t *)v1 + 190) = 0;
        *((uint8_t *)v1 + 195) = 1;
        boost::detail::shared_count::Destroy(&v73);
        return;
      }
      HasUninstallPersistentKey = glotv3::Porting::GetApplicationHasUninstallPersistentKey();
      if ( *((uint8_t *)v1 + 187) != 0 )
      {
        if ( HasUninstallPersistentKey != 0 )
        {
          v98 = 0;
          v99 = nullptr;
          sub_1320FA0();
          v17 = sub_13290A0();
          if ( v17 == 0 )
            goto LABEL_143;
          v99 = (volatile int32_t *)v17;
          *(uint32_t *)(v17 + 4) = 1;
          *(uint32_t *)(v17 + 8) = 1;
          *(uint32_t *)v17 = ((uint32_t)(uintptr_t)&off_2093788);
          *(uint32_t *)(v17 + 12) = 0;
          *(uint8_t *)(v17 + 16) = 0;
          v18 = nullptr;
          if ( v99 != nullptr )
            v18 = (uint8_t *)G4_VCALL<int>(v99, 20);
          v19 = (glotv3::Event::Self *)(v18 + 4);
          if ( v18 != (uint8_t *)-4 )
          {
            glotv3::EventOfReinstall::Construct((glotv3::EventOfReinstall::Self *)(v18 + 4));
            v19 = (glotv3::Event::Self *)(v18 + 4);
          }
          *v18 = 1;
          v88 = v19;
          v89 = v99;
          if ( v99 != nullptr )
            __sync_add_and_fetch(v99 + 1, 1);
          boost::detail::shared_count::Destroy(&v99);
          v96 = v88;
          v97[0] = v89;
          if ( v89 != nullptr )
            __sync_add_and_fetch(v89 + 1, 1);
          boost::detail::shared_count::Destroy(&v89);
          if ( v96 != nullptr )
          {
            v90 = v96;
            v91 = v97[0];
            if ( v97[0] != nullptr )
              __sync_add_and_fetch(v97[0] + 1, 1);
            glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v1), &v90, 0);
            boost::detail::shared_count::Destroy(&v91);
          }
          else
          {
            g4_std::opAdd_35f83b(
              (int)(uintptr_t)(v60),
              (int)(uintptr_t)(&glotv3::errors::OUT_OF_MEMORY),
              "void glotv3::TrackingManager::OnResume()");
            glotv3::Glotv3Logger::WriteLog(v60);
            g4_std::string::Destroy(v60);
          }
          boost::detail::shared_count::Destroy(v97);
          v45 = 1;
          goto LABEL_85;
        }
      }
      else
      {
        v45 = 0;
        if ( HasUninstallPersistentKey != 0 )
        {
LABEL_85:
          glotv3::Porting::GetDeviceIdentifierForVendor((glotv3::Porting::Self *)s1);
          v23 = *((uint32_t *)s1[0] - 3);
          v24 = *((uint32_t *)glotv3::configuration::DEFAULT_UDID - 3);
          v46 = v24;
          if ( v24 > v23 )
            v24 = *((uint32_t *)s1[0] - 3);
          if ( memcmp(s1[0], glotv3::configuration::DEFAULT_UDID, v24) == 0 && v23 == v46 )
          {
            g4_std::string::construct_copy(v61, &glotv3::system::ODD_ZERO_STRING);
            g4_std::string::assign_str(s1, v61);
            g4_std::string::Destroy(v61);
          }
          glotv3::Porting::GetDeviceIdentifierForAdvertising((glotv3::Porting::Self *)v53);
          v25 = *((uint32_t *)v53[0] - 3);
          v26 = *((uint32_t *)glotv3::configuration::DEFAULT_UDID - 3);
          v47 = v26;
          if ( v26 > v25 )
            v26 = *((uint32_t *)v53[0] - 3);
          if ( memcmp(v53[0], glotv3::configuration::DEFAULT_UDID, v26) == 0 && v25 == v47 )
          {
            g4_std::string::construct_copy(v62, &glotv3::system::ODD_ZERO_STRING);
            g4_std::string::assign_str(v53, v62);
            g4_std::string::Destroy(v62);
          }
          glotv3::Porting::GetIdentifierPersistentAtUnistall((int)(uintptr_t)(v54));
          v27 = *((uint32_t *)v54[0] - 3);
          if ( v27 == 0 )
            goto LABEL_96;
          v35 = *((uint32_t *)glotv3::configuration::DEFAULT_UDID - 3);
          v51 = v35;
          if ( v35 > v27 )
            v35 = *((uint32_t *)v54[0] - 3);
          if ( memcmp(v54[0], glotv3::configuration::DEFAULT_UDID, v35) == 0 && v27 == v51 )
          {
LABEL_96:
            g4_std::string::construct_copy(v63, &glotv3::system::ODD_ZERO_STRING);
            g4_std::string::assign_str(v54, v63);
            g4_std::string::Destroy(v63);
          }
          glotv3::Porting::GetIdentifierPersistentAtUnistall((int)(uintptr_t)(&s2));
          v28 = *((uint32_t *)s2 - 3);
          if ( v28 == 0 )
            goto LABEL_98;
          v33 = *((uint32_t *)glotv3::configuration::DEFAULT_UDID - 3);
          v50 = v33;
          v42 = s2;
          if ( v33 > v28 )
            v33 = *((uint32_t *)s2 - 3);
          v34 = memcmp(s2, glotv3::configuration::DEFAULT_UDID, v33);
          v29 = v42;
          if ( v34 == 0 && v28 == v50 )
          {
LABEL_98:
            g4_std::string::construct_copy(v64, &glotv3::system::ODD_ZERO_STRING);
            g4_std::string::assign_str(&s2, v64);
            g4_std::string::Destroy(v64);
            v29 = s2;
            v28 = *((uint32_t *)s2 - 3);
          }
          v30 = *((uint32_t *)v53[0] - 3);
          v48 = v30;
          if ( v28 <= v30 )
            v30 = v28;
          if ( memcmp(v53[0], v29, v30) == 0 && v48 == v28 )
          {
            v31 = *((uint32_t *)s1[0] - 3);
            v32 = *((uint32_t *)v54[0] - 3);
            v49 = v32;
            if ( v32 > v31 )
              v32 = *((uint32_t *)s1[0] - 3);
            if ( memcmp(s1[0], v54[0], v32) == 0 && v31 == v49 )
              goto LABEL_107;
          }
          v98 = 0;
          v99 = nullptr;
          sub_1320FA0();
          v36 = sub_13290A0();
          if ( v36 != 0 )
          {
            v99 = (volatile int32_t *)v36;
            *(uint32_t *)(v36 + 4) = 1;
            *(uint32_t *)(v36 + 8) = 1;
            *(uint32_t *)v36 = ((uint32_t)(uintptr_t)&off_20937A8);
            *(uint32_t *)(v36 + 12) = 0;
            *(uint8_t *)(v36 + 16) = 0;
            v37 = nullptr;
            if ( v99 != nullptr )
              v37 = (uint8_t *)G4_VCALL<int>(v99, 20);
            v38 = (glotv3::Event::Self *)(v37 + 4);
            if ( v37 != (uint8_t *)-4 )
            {
              glotv3::EventOfUserIdentifiersChanged::Construct(
                (glotv3::Event::Self *)(v37 + 4),
                (int)(uintptr_t)(&s2),
                (int)(uintptr_t)(v53),
                (int)(uintptr_t)(v54),
                (int)(uintptr_t)(s1),
                v45);
              v38 = (glotv3::Event::Self *)(v37 + 4);
            }
            *v37 = 1;
            v92 = v38;
            v93 = v99;
            if ( v99 != nullptr )
              __sync_add_and_fetch(v99 + 1, 1);
            boost::detail::shared_count::Destroy(&v99);
            v96 = v92;
            v97[0] = v93;
            if ( v93 != nullptr )
              __sync_add_and_fetch(v93 + 1, 1);
            boost::detail::shared_count::Destroy(&v93);
            if ( v96 != nullptr )
            {
              v94 = v96;
              v95 = v97[0];
              if ( v97[0] != nullptr )
                __sync_add_and_fetch(v97[0] + 1, 1);
              glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v1), &v94, 0);
              boost::detail::shared_count::Destroy(&v95);
            }
            else
            {
              g4_std::string::construct_copy(&v65, &glotv3::errors::OUT_OF_MEMORY);
              g4_std::string::append((int)(uintptr_t)(&v65), "void glotv3::TrackingManager::OnResume()", 0x28u);
              glotv3::Glotv3Logger::WriteLog(&v65);
              g4_std::string::Destroy(&v65);
            }
            if ( (uint8_t)glotv3::Porting::SetIdentifierPersistentAtUninstall() == 0 )
            {
              g4_std::string::construct_copy(v66, &glotv3::errors::FAILED_SET_IDENTIFIER_PERSISTENT_AT_UNINSTALL_WITH_KEY_VALUE);
              g4_std::string::append_str(v66, &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFAOld);
              g4_std::string::construct_copy(v67, v66);
              g4_std::string::append_str(v67, &glotv3::system::HASHTAG);
              g4_std::string::construct_copy(v68, v67);
              g4_std::string::append_str(v68, v53);
              glotv3::Glotv3Logger::WriteLog(v68);
              g4_std::string::Destroy(v68);
              g4_std::string::Destroy(v67);
              g4_std::string::Destroy(v66);
            }
            if ( (uint8_t)glotv3::Porting::SetIdentifierPersistentAtUninstall() == 0 )
            {
              g4_std::string::construct_copy(v69, &glotv3::errors::FAILED_SET_IDENTIFIER_PERSISTENT_AT_UNINSTALL_WITH_KEY_VALUE);
              g4_std::string::append_str(v69, &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVOld);
              g4_std::string::construct_copy(v70, v69);
              g4_std::string::append_str(v70, &glotv3::system::HASHTAG);
              g4_std::string::construct_copy(v71, v70);
              g4_std::string::append_str(v71, s1);
              glotv3::Glotv3Logger::WriteLog(v71);
              g4_std::string::Destroy(v71);
              g4_std::string::Destroy(v70);
              g4_std::string::Destroy(v69);
            }
            boost::detail::shared_count::Destroy(v97);
LABEL_107:
            g4_std::string::Destroy(&s2);
            g4_std::string::Destroy(v54);
            g4_std::string::Destroy(v53);
            g4_std::string::Destroy(s1);
            goto LABEL_34;
          }
LABEL_143:
          std::terminate();
        }
      }
      v45 = 0;
      if ( (uint8_t)glotv3::Porting::SetApplicationUninstallPersistentKey() == 0 )
        glotv3::Glotv3Logger::WriteLog(&glotv3::errors::FAILED_STORE_APP_INSTALL_KEY);
      goto LABEL_85;
    }
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::RESUMED_AUT_BUT_NOT_LAUNCHED);
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::AddEvent  (binary VA: 0x132a5e0)
// Original: glotv3::TrackingManager::AddEvent
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::AddEvent(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  unsigned int v5;
  glotv3::SingletonMutexedProcessor::Self *v6;
  glotv3::SingletonMutexedProcessor::Self *v8;
  char IsEventInDescriptor;
  unsigned int v10;
  glotv3::SingletonMutexedProcessor::Self *v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  void *v19;
  void **v20;
  unsigned int v21;
  void *v22;
  glotv3::SingletonMutexedProcessor::Self *v23;
  glotv3::SingletonMutexedProcessor::Self *v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  volatile int32_t *v28;
  uint8_t *v29;
  glotv3::Event::Self *v30;
  unsigned int v31;
  const glotv3::EventValue::Self *v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef uint8_t *_g4_t_v53;
  typedef glotv3::Event::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int *_g4_t_v67;
  typedef char _g4_t_v68[4];
  typedef int _g4_t_v69;
  typedef char _g4_t_v70[4];
  typedef int _g4_t_v71;
  typedef char _g4_t_v72[4];
  typedef int _g4_t_v73;
  typedef char _g4_t_v74[4];
  typedef char _g4_t_v75[4];
  typedef glotv3::Event::Self *_g4_t_v76;
  typedef volatile int32_t *_g4_t_v77;
  typedef glotv3::Event::Self *_g4_t_v78;
  typedef volatile int32_t *_g4_t_v79[4];
  typedef volatile int32_t *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef volatile int32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef volatile int32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef volatile int32_t *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef volatile int32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef volatile int32_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef volatile int32_t *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef volatile int32_t *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef volatile int32_t *_g4_t_v96;
  typedef void *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef unsigned int _g4_t_v104;
  typedef void *_g4_t_v105[18];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v41)) > _g4_s1 ? (0u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v42)) > _g4_s2 ? (0u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v43)) > _g4_s3 ? (0u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v44)) > _g4_s4 ? (4u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v45)) > _g4_s5 ? (8u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v46)) > _g4_s6 ? (12u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v47)) > _g4_s7 ? (16u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v48)) > _g4_s8 ? (16u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v49)) > _g4_s9 ? (16u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v50)) > _g4_s10 ? (16u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v51)) > _g4_s11 ? (16u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v52)) > _g4_s12 ? (16u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v53)) > _g4_s13 ? (20u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v54)) > _g4_s14 ? (24u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v55)) > _g4_s15 ? (28u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v56)) > _g4_s16 ? (32u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v57)) > _g4_s17 ? (36u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v58)) > _g4_s18 ? (40u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v59)) > _g4_s19 ? (40u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v60)) > _g4_s20 ? (44u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v61)) > _g4_s21 ? (48u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v62)) > _g4_s22 ? (52u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v63)) > _g4_s23 ? (52u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v64)) > _g4_s24 ? (52u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v65)) > _g4_s25 ? (56u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v66)) > _g4_s26 ? (56u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v67)) > _g4_s27 ? (60u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v68)) > _g4_s28 ? (64u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v69)) > _g4_s29 ? (68u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v70)) > _g4_s30 ? (72u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v71)) > _g4_s31 ? (76u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v72)) > _g4_s32 ? (80u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v73)) > _g4_s33 ? (84u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v74)) > _g4_s34 ? (88u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v75)) > _g4_s35 ? (92u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v76)) > _g4_s36 ? (96u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (100u + sizeof(_g4_t_v77)) > _g4_s37 ? (100u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (112u + sizeof(_g4_t_v78)) > _g4_s38 ? (112u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (116u + sizeof(_g4_t_v79)) > _g4_s39 ? (116u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (132u + sizeof(_g4_t_v80)) > _g4_s40 ? (132u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v81)) > _g4_s41 ? (144u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v82)) > _g4_s42 ? (148u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v83)) > _g4_s43 ? (152u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (156u + sizeof(_g4_t_v84)) > _g4_s44 ? (156u + sizeof(_g4_t_v84)) : _g4_s44,
    _g4_s46 = (160u + sizeof(_g4_t_v85)) > _g4_s45 ? (160u + sizeof(_g4_t_v85)) : _g4_s45,
    _g4_s47 = (164u + sizeof(_g4_t_v86)) > _g4_s46 ? (164u + sizeof(_g4_t_v86)) : _g4_s46,
    _g4_s48 = (168u + sizeof(_g4_t_v87)) > _g4_s47 ? (168u + sizeof(_g4_t_v87)) : _g4_s47,
    _g4_s49 = (172u + sizeof(_g4_t_v88)) > _g4_s48 ? (172u + sizeof(_g4_t_v88)) : _g4_s48,
    _g4_s50 = (176u + sizeof(_g4_t_v89)) > _g4_s49 ? (176u + sizeof(_g4_t_v89)) : _g4_s49,
    _g4_s51 = (180u + sizeof(_g4_t_v90)) > _g4_s50 ? (180u + sizeof(_g4_t_v90)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v91)) > _g4_s51 ? (184u + sizeof(_g4_t_v91)) : _g4_s51,
    _g4_s53 = (188u + sizeof(_g4_t_v92)) > _g4_s52 ? (188u + sizeof(_g4_t_v92)) : _g4_s52,
    _g4_s54 = (192u + sizeof(_g4_t_v93)) > _g4_s53 ? (192u + sizeof(_g4_t_v93)) : _g4_s53,
    _g4_s55 = (196u + sizeof(_g4_t_v94)) > _g4_s54 ? (196u + sizeof(_g4_t_v94)) : _g4_s54,
    _g4_s56 = (200u + sizeof(_g4_t_v95)) > _g4_s55 ? (200u + sizeof(_g4_t_v95)) : _g4_s55,
    _g4_s57 = (204u + sizeof(_g4_t_v96)) > _g4_s56 ? (204u + sizeof(_g4_t_v96)) : _g4_s56,
    _g4_s58 = (208u + sizeof(_g4_t_v97)) > _g4_s57 ? (208u + sizeof(_g4_t_v97)) : _g4_s57,
    _g4_s59 = (216u + sizeof(_g4_t_v98)) > _g4_s58 ? (216u + sizeof(_g4_t_v98)) : _g4_s58,
    _g4_s60 = (220u + sizeof(_g4_t_v99)) > _g4_s59 ? (220u + sizeof(_g4_t_v99)) : _g4_s59,
    _g4_s61 = (224u + sizeof(_g4_t_v100)) > _g4_s60 ? (224u + sizeof(_g4_t_v100)) : _g4_s60,
    _g4_s62 = (228u + sizeof(_g4_t_v101)) > _g4_s61 ? (228u + sizeof(_g4_t_v101)) : _g4_s61,
    _g4_s63 = (232u + sizeof(_g4_t_v102)) > _g4_s62 ? (232u + sizeof(_g4_t_v102)) : _g4_s62,
    _g4_s64 = (236u + sizeof(_g4_t_v103)) > _g4_s63 ? (236u + sizeof(_g4_t_v103)) : _g4_s63,
    _g4_s65 = (244u + sizeof(_g4_t_v104)) > _g4_s64 ? (244u + sizeof(_g4_t_v104)) : _g4_s64,
    _g4_s66 = (256u + sizeof(_g4_t_v105)) > _g4_s65 ? (256u + sizeof(_g4_t_v105)) : _g4_s65
  };
  alignas(16) uint8_t _g4_sf[_g4_s66];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 88u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 132u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 144u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 148u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 152u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 156u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 160u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 164u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 168u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 172u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 176u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 180u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 184u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 188u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 192u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 196u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 200u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 204u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 208u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 216u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 220u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 224u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 228u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 232u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 236u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 244u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 256u);

  v105[14] = &a1;
  v2 = a2;
  v3 = a1;
  v4 = (uint32_t *)*a2;
  if ( *a2 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      "Params, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
      "px != 0");
    v4 = (uint32_t *)*v2;
  }
  v5 = v4[10];
  if ( *(uint8_t *)(v3 + 193) != 0 )
  {
    g4_std::string::construct_copy(v68, &glotv3::errors::NOT_ENOUGH_SPACE_FOR_TRACKING);
    glotv3::EventOfError::s_OfType((glotv3::Event::Self **)&v81, (void *)(uintptr_t)0x202b3u, (int)(uintptr_t)v68);
    v83 = v81;
    v84 = v82;
    if ( v82 != nullptr )
      __sync_add_and_fetch(v82 + 1, 1);
    v6 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
    if ( v6 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v6 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
    }
    glotv3::SingletonMutexedProcessor::QueueForWriting(v6, (int)(uintptr_t)(&v83), 1, 0);
    boost::detail::shared_count::Destroy(&v84);
    boost::detail::shared_count::Destroy(&v82);
    g4_std::string::Destroy(v68);
    glotv3::TrackingManager::BlockTracking((glotv3::TrackingManager::Self *)v3);
    return 2;
  }
  v8 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
  if ( v8 == nullptr )
  {
    v49 = v5;
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v8 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
    v5 = v49;
  }
  v47 = v5;
  IsEventInDescriptor = glotv3::SingletonMutexedProcessor::IsEventInDescriptor(v8, v5);
  v10 = v47;
  if ( IsEventInDescriptor == 0 )
  {
    glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v69), (int)(v47));
    g4_std::string::construct_copy(v70, &glotv3::errors::CANNOT_FIND_IN_DESCRIPTOR_EVENT);
    g4_std::string::append_str(v70, &v69);
    glotv3::EventOfError::s_OfType((glotv3::Event::Self **)&v85, (void *)(uintptr_t)0x3u, (int)(uintptr_t)v70);
    v87 = v85;
    v88 = v86;
    if ( v86 != nullptr )
      __sync_add_and_fetch(v86 + 1, 1);
    v11 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
    if ( v11 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Sin"
        "gletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
        "px != 0");
      v11 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
    }
    glotv3::SingletonMutexedProcessor::QueueForWriting(v11, (int)(uintptr_t)(&v87), 1, 0);
    boost::detail::shared_count::Destroy(&v88);
    boost::detail::shared_count::Destroy(&v86);
    g4_std::string::Destroy(v70);
    g4_std::string::Destroy(&v69);
    return 2;
  }
  v12 = *(uint32_t *)(v3 + 132);
  if ( v12 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
      "px != 0");
    v12 = *(uint32_t *)(v3 + 132);
    v10 = v47;
  }
  v45 = v10;
  v48 = v10;
  v46 = 0;
  v44 = v12;
  glotv3::SingletonMutexedProcessor::GetEventParameters(&v97);
  v62 = (uint32_t *)*v2;
  v13 = v48;
  if ( *v2 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      "Params, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
      "px != 0");
    v13 = v48;
    v62 = (uint32_t *)*v2;
  }
  v60 = v101;
  v61 = -1431655765 * ((v62[6] - v62[7]) >> 4)
      + 2 * (5 * ((v62[9] - v62[5]) >> 2) - 5)
      - 1431655765 * ((v62[4] - v62[2]) >> 4);
  v55 = v103;
  v63 = v104;
  v57 = v98;
  v58 = v102;
  v56 = v100;
  v14 = ((((int)(v104 - v101) >> 2) - 1) << 7) + ((v102 - v103) >> 2) + ((v100 - v98) >> 2);
  if ( v61 != v14 )
  {
    if ( v61 < v14 )
    {
      glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v71), (int)(v13));
      g4_std::string::construct_copy(v72, &glotv3::errors::TOO_FEW_PARAMETERS);
      g4_std::string::append_str(v72, &v71);
      glotv3::EventOfError::s_OfType((glotv3::Event::Self **)&v89, (void *)(uintptr_t)0x202b6u, (int)(uintptr_t)v72);
      v91 = v89;
      v92 = v90;
      if ( v90 != nullptr )
        __sync_add_and_fetch(v90 + 1, 1);
      v24 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
      if ( v24 == nullptr )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::S"
          "ingletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
          "px != 0");
        v24 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
      }
      glotv3::SingletonMutexedProcessor::QueueForWriting(v24, (int)(uintptr_t)(&v91), 1, 0);
      boost::detail::shared_count::Destroy(&v92);
      boost::detail::shared_count::Destroy(&v90);
      g4_std::string::Destroy(v72);
      g4_std::string::Destroy(&v71);
      v58 = v102;
      v55 = v103;
      v63 = v104;
      v57 = v98;
      v56 = v100;
      v60 = v101;
      v65 = 0;
    }
    else
    {
      v65 = 0;
      if ( v61 > v14 )
      {
        glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v73), (int)(v13));
        g4_std::string::construct_copy(v74, &glotv3::errors::TOO_MANY_PARAMETERS);
        g4_std::string::append_str(v74, &v73);
        glotv3::EventOfError::s_OfType((glotv3::Event::Self **)&v93, (void *)(uintptr_t)0x202b7u, (int)(uintptr_t)v74);
        v95 = v93;
        v96 = v94;
        if ( v94 != nullptr )
          __sync_add_and_fetch(v94 + 1, 1);
        v23 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
        if ( v23 == nullptr )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3:"
            ":SingletonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor::Self*]",
            "px != 0");
          v23 = *(glotv3::SingletonMutexedProcessor::Self **)(v3 + 132);
        }
        glotv3::SingletonMutexedProcessor::QueueForWriting(v23, (int)(uintptr_t)(&v95), 1, 0);
        boost::detail::shared_count::Destroy(&v96);
        boost::detail::shared_count::Destroy(&v94);
        g4_std::string::Destroy(v74);
        g4_std::string::Destroy(&v73);
        v58 = v102;
        v55 = v103;
        v63 = v104;
        v57 = v98;
        v56 = v100;
        v60 = v101;
        v65 = 0;
      }
    }
    goto LABEL_25;
  }
  v50 = v13;
  v79[3] = nullptr;
  v80 = nullptr;
  sub_1320FA0();
  v26 = sub_13290A0();
  v27 = v50;
  if ( v26 == 0 )
    std::terminate();
  v80 = (volatile int32_t *)v26;
  *(uint32_t *)(v26 + 4) = 1;
  *(uint32_t *)v26 = ((uint32_t)(uintptr_t)&off_20936E8);
  v28 = v80;
  *(uint32_t *)(v26 + 8) = 1;
  *(uint32_t *)(v26 + 12) = 0;
  *(uint8_t *)(v26 + 16) = 0;
  v29 = nullptr;
  if ( v28 != nullptr )
  {
    v29 = (uint8_t *)G4_VCALL<int>(v28, 20, v44, v45, v46);
    v27 = v50;
  }
  v30 = (glotv3::Event::Self *)(v29 + 4);
  if ( v29 != (uint8_t *)-4 )
  {
    v53 = v29;
    v51 = v27;
    v54 = (glotv3::Event::Self *)(v29 + 4);
    glotv3::Event::Construct((glotv3::Event::Self *)(v29 + 4), false);
    v30 = v54;
    v27 = v51;
    v29 = v53;
  }
  *v29 = 1;
  v76 = v30;
  v77 = v80;
  if ( v80 != nullptr )
    __sync_add_and_fetch(v80 + 1, 1);
  v52 = v27;
  boost::detail::shared_count::Destroy(&v80);
  if ( v76 == nullptr )
  {
    g4_std::opAdd_35f83b(
      (int)(uintptr_t)(v75),
      (int)(uintptr_t)(&glotv3::errors::OUT_OF_MEMORY),
      "glotv3::TrackingManager::Statuses glotv3::TrackingManager::AddEvent(boost::shared_ptr<glotv3::EventParams>)");
    glotv3::Glotv3Logger::WriteLog(v75);
    g4_std::string::Destroy(v75);
    v65 = 2;
    goto LABEL_86;
  }
  glotv3::Event::setEventType(v76, v52);
  if ( v61 == 0 )
    goto LABEL_83;
  v59 = v3;
  v66 = 0;
  v31 = 0;
  v64 = v2;
  do
  {
    v35 = (uint32_t *)*v64;
    if ( *v64 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v35 = (uint32_t *)*v64;
    }
    v36 = v35[2];
    if ( v31 >= -1431655765 * ((v35[6] - v35[7]) >> 4)
              + 2 * (5 * ((v35[9] - v35[5]) >> 2) - 5)
              - 1431655765 * ((v35[4] - v36) >> 4) )
LABEL_88:
      sub_1900210("deque::_M_range_check");
    v37 = v31 - 1431655765 * ((v36 - v35[3]) >> 4);
    if ( v37 < 0 )
    {
      v38 = ~(~v37 / 0xAu);
    }
    else
    {
      if ( v37 <= 9 )
      {
        v32 = (const glotv3::EventValue::Self *)(v66 + v36);
        goto LABEL_66;
      }
      v38 = v37 / 10;
    }
    v32 = (const glotv3::EventValue::Self *)(*(uint32_t *)(v35[5] + 4 * v38) + 48 * (v37 - 10 * v38));
LABEL_66:
    glotv3::EventValue::Construct((glotv3::EventValue::Self *)v105, v32);
    if ( v31 >= ((v102 - v103) >> 2) + ((((int)(v104 - v101) >> 2) - 1) << 7) + ((v100 - v98) >> 2) )
      goto LABEL_88;
    v33 = v31 + ((v98 - v99) >> 2);
    if ( v33 < 0 )
    {
      v39 = ((unsigned int)v33 >> 7) | 0xFE000000;
    }
    else
    {
      if ( v33 <= 127 )
      {
        v34 = v98 + 4 * v31;
        goto LABEL_70;
      }
      v39 = v33 >> 7;
    }
    v34 = *(uint32_t *)(v101 + 4 * v39) + 4 * (v33 - (v39 << 7));
LABEL_70:
    ++v31;
    glotv3::Event::addKeyPair((int)(uintptr_t)(v76), v34, (glotv3::EventValue::Self *)v105);
    glotv3::EventValue::Destroy(v105);
    v66 += 48;
  }
  while ( v31 != v61 );
  v3 = v59;
LABEL_83:
  v78 = v76;
  v79[0] = v77;
  if ( v77 != nullptr )
    __sync_add_and_fetch(v77 + 1, 1);
  v65 = glotv3::TrackingManager::AddEvent(v3, &v78, 0);
  boost::detail::shared_count::Destroy(v79);
LABEL_86:
  boost::detail::shared_count::Destroy(&v77);
  v58 = v102;
  v55 = v103;
  v63 = v104;
  v57 = v98;
  v56 = v100;
  v60 = v101;
LABEL_25:
  v67 = (int *)(v60 + 4);
  if ( v60 + 4 < v63 )
  {
    do
    {
      v15 = *v67;
      v16 = *v67 + 512;
      do
      {
        v40 = v15;
        v15 += 4;
        g4_std::string::Destroy(v40);
      }
      while ( v15 != v16 );
      ++v67;
    }
    while ( (unsigned int)(uintptr_t)(v67) < v63 );
  }
  if ( v63 == v60 )
  {
    if ( v58 != v57 )
    {
      v25 = v57;
      do
      {
        v43 = v25;
        v25 += 4;
        g4_std::string::Destroy(v43);
      }
      while ( v25 != v58 );
    }
  }
  else
  {
    if ( v57 != v56 )
    {
      v17 = v57;
      do
      {
        v41 = v17;
        v17 += 4;
        g4_std::string::Destroy(v41);
      }
      while ( v17 != v56 );
    }
    if ( v58 != v55 )
    {
      v18 = v55;
      do
      {
        v42 = v18;
        v18 += 4;
        g4_std::string::Destroy(v42);
      }
      while ( v18 != v58 );
    }
  }
  v19 = v97;
  if ( v97 != nullptr )
  {
    v20 = (void **)v101;
    v21 = v104 + 4;
    if ( v104 + 4 > v101 )
    {
      do
      {
        v22 = *v20++;
        opDelete(v22);
      }
      while ( v21 > (unsigned int)(uintptr_t)(v20) );
      v19 = v97;
    }
    opDelete(v19);
  }
  return v65;
}

// ----------------------------------------------------------------------------
// Function: glotv3::TrackingManager::AddEvent  (binary VA: 0x132b2c0)
// Original: glotv3::TrackingManager::AddEvent
// ----------------------------------------------------------------------------
int glotv3::TrackingManager::AddEvent(int a1, int a2, glotv3::EventValue::Self *a3, glotv3::EventValue::Self *a4, glotv3::EventValue::Self *a5, glotv3::EventValue::Self *a6, glotv3::EventValue::Self *a7, glotv3::EventValue::Self *a8, glotv3::EventValue::Self *a9, glotv3::EventValue::Self *a10, glotv3::EventValue::Self *a11, glotv3::EventValue::Self *a12, glotv3::EventValue::Self *a13, glotv3::EventValue::Self *a14, glotv3::EventValue::Self *a15, glotv3::EventValue::Self *a16, glotv3::EventValue::Self *a17, glotv3::EventValue::Self *a18, glotv3::EventValue::Self *a19, glotv3::EventValue::Self *a20, glotv3::EventValue::Self *a21, glotv3::EventValue::Self *a22, glotv3::EventValue::Self *a23, glotv3::EventValue::Self *a24, glotv3::EventValue::Self *a25, glotv3::EventValue::Self *a26, glotv3::EventValue::Self *a27, glotv3::EventValue::Self *a28, glotv3::EventValue::Self *a29, glotv3::EventValue::Self *a30, glotv3::EventValue::Self *a31, glotv3::EventValue::Self *a32, glotv3::EventValue::Self *a33, glotv3::EventValue::Self *a34, glotv3::EventValue::Self *a35, glotv3::EventValue::Self *a36, glotv3::EventValue::Self *a37, glotv3::EventValue::Self *a38, glotv3::EventValue::Self *a39, glotv3::EventValue::Self *a40, glotv3::EventValue::Self *a41, glotv3::EventValue::Self *a42)
{
  int v43;
  int v44;
  uint8_t *v45;
  glotv3::EventParams *v46;
  glotv3::EventValue::Self *v47;
  int v48;
  glotv3::EventValue::Self *v50;
  glotv3::EventValue::Self *v51;
  int v52;
  glotv3::EventValue::Self *v53;
  int v54;
  int v55;
  glotv3::EventValue::Self *v56;
  int v57;
  int v58;
  glotv3::EventValue::Self *v59;
  int v60;
  int v61;
  glotv3::EventValue::Self *v62;
  int v63;
  int v64;
  glotv3::EventValue::Self *v65;
  int v66;
  int v67;
  glotv3::EventValue::Self *v68;
  int v69;
  int v70;
  glotv3::EventValue::Self *v71;
  int v72;
  int v73;
  glotv3::EventValue::Self *v74;
  int v75;
  int v76;
  glotv3::EventValue::Self *v77;
  int v78;
  int v79;
  glotv3::EventValue::Self *v80;
  int v81;
  int v82;
  glotv3::EventValue::Self *v83;
  int v84;
  int v85;
  glotv3::EventValue::Self *v86;
  int v87;
  int v88;
  glotv3::EventValue::Self *v89;
  int v90;
  int v91;
  glotv3::EventValue::Self *v92;
  int v93;
  int v94;
  glotv3::EventValue::Self *v95;
  int v96;
  int v97;
  glotv3::EventValue::Self *v98;
  int v99;
  int v100;
  glotv3::EventValue::Self *v101;
  int v102;
  int v103;
  glotv3::EventValue::Self *v104;
  int v105;
  int v106;
  glotv3::EventValue::Self *v107;
  int v108;
  int v109;
  glotv3::EventValue::Self *v110;
  int v111;
  int v112;
  glotv3::EventValue::Self *v113;
  int v114;
  int v115;
  glotv3::EventValue::Self *v116;
  int v117;
  int v118;
  glotv3::EventValue::Self *v119;
  int v120;
  int v121;
  glotv3::EventValue::Self *v122;
  int v123;
  int v124;
  glotv3::EventValue::Self *v125;
  int v126;
  int v127;
  glotv3::EventValue::Self *v128;
  int v129;
  int v130;
  glotv3::EventValue::Self *v131;
  int v132;
  int v133;
  glotv3::EventValue::Self *v134;
  int v135;
  int v136;
  glotv3::EventValue::Self *v137;
  int v138;
  int v139;
  glotv3::EventValue::Self *v140;
  int v141;
  int v142;
  glotv3::EventValue::Self *v143;
  int v144;
  int v145;
  glotv3::EventValue::Self *v146;
  int v147;
  int v148;
  glotv3::EventValue::Self *v149;
  int v150;
  int v151;
  glotv3::EventValue::Self *v152;
  int v153;
  int v154;
  glotv3::EventValue::Self *v155;
  int v156;
  int v157;
  glotv3::EventValue::Self *v158;
  int v159;
  int v160;
  glotv3::EventValue::Self *v161;
  int v162;
  int v163;
  glotv3::EventValue::Self *v164;
  int v165;
  int v166;
  glotv3::EventValue::Self *v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  glotv3::EventValue::Self *v187;
  glotv3::EventValue::Self *v188;

  v43 = opNew(0x40u);
  *(uint32_t *)(v43 + 4) = 1;
  *(uint32_t *)(v43 + 8) = 1;
  *(uint32_t *)v43 = ((uint32_t)(uintptr_t)&off_20936A8);
  v44 = *(uint32_t *)v43;
  *(uint32_t *)(v43 + 12) = 0;
  *(uint8_t *)(v43 + 16) = 0;
  v45 = (uint8_t *)(*(int (**)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, int, int, int))(v44 + 20))(
                   v43,
                   v170,
                   v171,
                   v172,
                   v173,
                   v174,
                   v175,
                   v176,
                   v177,
                   v178,
                   v179,
                   v180,
                   v181,
                   v182,
                   v183,
                   v184,
                   0,
                   v43,
                   v185,
                   v186);
  v46 = (glotv3::EventParams *)(v45 + 4);
  if ( v45 != (uint8_t *)-4 )
  {
    glotv3::EventParams::Construct(v46, a2);
    v46 = (glotv3::EventParams *)(v45 + 4);
  }
  *v45 = 1;
  v188 = (glotv3::EventValue::Self *)(v46);
  a5 = a13;
  if ( a13 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)a13 + 1, 1);
  boost::detail::shared_count::Destroy((volatile int32_t **)&a13);
  if ( !glotv3::EventValue::opEq(a3, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v50 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v50 = nullptr;
    }
    v51 = *((glotv3::EventValue::Self **)v50 + 6);
    if ( v51 == (glotv3::EventValue::Self *)(*((uint32_t *)v50 + 8) - 48) )
    {
      sub_1320240((void **)v50, a3);
    }
    else
    {
      v52 = 0;
      if ( v51 != nullptr )
      {
        v187 = v50;
        glotv3::EventValue::Construct(v51, a3);
        v50 = v187;
        v52 = *((uint32_t *)v187 + 6);
      }
      *((uint32_t *)v50 + 6) = v52 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(v188, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v167 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v167 = nullptr;
    }
    v168 = *((uint32_t *)v167 + 6);
    if ( v168 == *((uint32_t *)v167 + 8) - 48 )
    {
      sub_1320240((void **)v167, v188);
    }
    else
    {
      v169 = 0;
      if ( v168 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v167 + 6), v188);
        v169 = *((uint32_t *)v167 + 6);
      }
      *((uint32_t *)v167 + 6) = v169 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a5, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v164 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v164 = nullptr;
    }
    v165 = *((uint32_t *)v164 + 6);
    if ( v165 == *((uint32_t *)v164 + 8) - 48 )
    {
      sub_1320240((void **)v164, a5);
    }
    else
    {
      v166 = 0;
      if ( v165 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v164 + 6), a5);
        v166 = *((uint32_t *)v164 + 6);
      }
      *((uint32_t *)v164 + 6) = v166 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a6, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v161 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v161 = nullptr;
    }
    v162 = *((uint32_t *)v161 + 6);
    if ( v162 == *((uint32_t *)v161 + 8) - 48 )
    {
      sub_1320240((void **)v161, a6);
    }
    else
    {
      v163 = 0;
      if ( v162 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v161 + 6), a6);
        v163 = *((uint32_t *)v161 + 6);
      }
      *((uint32_t *)v161 + 6) = v163 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a7, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v158 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v158 = nullptr;
    }
    v159 = *((uint32_t *)v158 + 6);
    if ( v159 == *((uint32_t *)v158 + 8) - 48 )
    {
      sub_1320240((void **)v158, a7);
    }
    else
    {
      v160 = 0;
      if ( v159 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v158 + 6), a7);
        v160 = *((uint32_t *)v158 + 6);
      }
      *((uint32_t *)v158 + 6) = v160 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a8, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v155 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v155 = nullptr;
    }
    v156 = *((uint32_t *)v155 + 6);
    if ( v156 == *((uint32_t *)v155 + 8) - 48 )
    {
      sub_1320240((void **)v155, a8);
    }
    else
    {
      v157 = 0;
      if ( v156 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v155 + 6), a8);
        v157 = *((uint32_t *)v155 + 6);
      }
      *((uint32_t *)v155 + 6) = v157 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a9, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v152 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v152 = nullptr;
    }
    v153 = *((uint32_t *)v152 + 6);
    if ( v153 == *((uint32_t *)v152 + 8) - 48 )
    {
      sub_1320240((void **)v152, a9);
    }
    else
    {
      v154 = 0;
      if ( v153 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v152 + 6), a9);
        v154 = *((uint32_t *)v152 + 6);
      }
      *((uint32_t *)v152 + 6) = v154 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a10, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v149 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v149 = nullptr;
    }
    v150 = *((uint32_t *)v149 + 6);
    if ( v150 == *((uint32_t *)v149 + 8) - 48 )
    {
      sub_1320240((void **)v149, a10);
    }
    else
    {
      v151 = 0;
      if ( v150 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v149 + 6), a10);
        v151 = *((uint32_t *)v149 + 6);
      }
      *((uint32_t *)v149 + 6) = v151 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a11, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v146 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v146 = nullptr;
    }
    v147 = *((uint32_t *)v146 + 6);
    if ( v147 == *((uint32_t *)v146 + 8) - 48 )
    {
      sub_1320240((void **)v146, a11);
    }
    else
    {
      v148 = 0;
      if ( v147 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v146 + 6), a11);
        v148 = *((uint32_t *)v146 + 6);
      }
      *((uint32_t *)v146 + 6) = v148 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a12, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v143 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v143 = nullptr;
    }
    v144 = *((uint32_t *)v143 + 6);
    if ( v144 == *((uint32_t *)v143 + 8) - 48 )
    {
      sub_1320240((void **)v143, a12);
    }
    else
    {
      v145 = 0;
      if ( v144 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v143 + 6), a12);
        v145 = *((uint32_t *)v143 + 6);
      }
      *((uint32_t *)v143 + 6) = v145 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a13, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v140 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v140 = nullptr;
    }
    v141 = *((uint32_t *)v140 + 6);
    if ( v141 == *((uint32_t *)v140 + 8) - 48 )
    {
      sub_1320240((void **)v140, a13);
    }
    else
    {
      v142 = 0;
      if ( v141 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v140 + 6), a13);
        v142 = *((uint32_t *)v140 + 6);
      }
      *((uint32_t *)v140 + 6) = v142 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a14, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v137 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v137 = nullptr;
    }
    v138 = *((uint32_t *)v137 + 6);
    if ( v138 == *((uint32_t *)v137 + 8) - 48 )
    {
      sub_1320240((void **)v137, a14);
    }
    else
    {
      v139 = 0;
      if ( v138 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v137 + 6), a14);
        v139 = *((uint32_t *)v137 + 6);
      }
      *((uint32_t *)v137 + 6) = v139 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a15, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v134 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v134 = nullptr;
    }
    v135 = *((uint32_t *)v134 + 6);
    if ( v135 == *((uint32_t *)v134 + 8) - 48 )
    {
      sub_1320240((void **)v134, a15);
    }
    else
    {
      v136 = 0;
      if ( v135 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v134 + 6), a15);
        v136 = *((uint32_t *)v134 + 6);
      }
      *((uint32_t *)v134 + 6) = v136 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a16, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v131 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v131 = nullptr;
    }
    v132 = *((uint32_t *)v131 + 6);
    if ( v132 == *((uint32_t *)v131 + 8) - 48 )
    {
      sub_1320240((void **)v131, a16);
    }
    else
    {
      v133 = 0;
      if ( v132 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v131 + 6), a16);
        v133 = *((uint32_t *)v131 + 6);
      }
      *((uint32_t *)v131 + 6) = v133 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a17, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v128 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v128 = nullptr;
    }
    v129 = *((uint32_t *)v128 + 6);
    if ( v129 == *((uint32_t *)v128 + 8) - 48 )
    {
      sub_1320240((void **)v128, a17);
    }
    else
    {
      v130 = 0;
      if ( v129 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v128 + 6), a17);
        v130 = *((uint32_t *)v128 + 6);
      }
      *((uint32_t *)v128 + 6) = v130 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a18, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v125 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v125 = nullptr;
    }
    v126 = *((uint32_t *)v125 + 6);
    if ( v126 == *((uint32_t *)v125 + 8) - 48 )
    {
      sub_1320240((void **)v125, a18);
    }
    else
    {
      v127 = 0;
      if ( v126 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v125 + 6), a18);
        v127 = *((uint32_t *)v125 + 6);
      }
      *((uint32_t *)v125 + 6) = v127 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a19, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v122 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v122 = nullptr;
    }
    v123 = *((uint32_t *)v122 + 6);
    if ( v123 == *((uint32_t *)v122 + 8) - 48 )
    {
      sub_1320240((void **)v122, a19);
    }
    else
    {
      v124 = 0;
      if ( v123 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v122 + 6), a19);
        v124 = *((uint32_t *)v122 + 6);
      }
      *((uint32_t *)v122 + 6) = v124 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a20, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v119 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v119 = nullptr;
    }
    v120 = *((uint32_t *)v119 + 6);
    if ( v120 == *((uint32_t *)v119 + 8) - 48 )
    {
      sub_1320240((void **)v119, a20);
    }
    else
    {
      v121 = 0;
      if ( v120 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v119 + 6), a20);
        v121 = *((uint32_t *)v119 + 6);
      }
      *((uint32_t *)v119 + 6) = v121 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a21, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v116 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v116 = nullptr;
    }
    v117 = *((uint32_t *)v116 + 6);
    if ( v117 == *((uint32_t *)v116 + 8) - 48 )
    {
      sub_1320240((void **)v116, a21);
    }
    else
    {
      v118 = 0;
      if ( v117 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v116 + 6), a21);
        v118 = *((uint32_t *)v116 + 6);
      }
      *((uint32_t *)v116 + 6) = v118 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a22, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v113 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v113 = nullptr;
    }
    v114 = *((uint32_t *)v113 + 6);
    if ( v114 == *((uint32_t *)v113 + 8) - 48 )
    {
      sub_1320240((void **)v113, a22);
    }
    else
    {
      v115 = 0;
      if ( v114 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v113 + 6), a22);
        v115 = *((uint32_t *)v113 + 6);
      }
      *((uint32_t *)v113 + 6) = v115 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a23, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v110 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v110 = nullptr;
    }
    v111 = *((uint32_t *)v110 + 6);
    if ( v111 == *((uint32_t *)v110 + 8) - 48 )
    {
      sub_1320240((void **)v110, a23);
    }
    else
    {
      v112 = 0;
      if ( v111 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v110 + 6), a23);
        v112 = *((uint32_t *)v110 + 6);
      }
      *((uint32_t *)v110 + 6) = v112 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a24, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v107 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v107 = nullptr;
    }
    v108 = *((uint32_t *)v107 + 6);
    if ( v108 == *((uint32_t *)v107 + 8) - 48 )
    {
      sub_1320240((void **)v107, a24);
    }
    else
    {
      v109 = 0;
      if ( v108 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v107 + 6), a24);
        v109 = *((uint32_t *)v107 + 6);
      }
      *((uint32_t *)v107 + 6) = v109 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a25, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v104 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v104 = nullptr;
    }
    v105 = *((uint32_t *)v104 + 6);
    if ( v105 == *((uint32_t *)v104 + 8) - 48 )
    {
      sub_1320240((void **)v104, a25);
    }
    else
    {
      v106 = 0;
      if ( v105 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v104 + 6), a25);
        v106 = *((uint32_t *)v104 + 6);
      }
      *((uint32_t *)v104 + 6) = v106 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a26, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v101 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v101 = nullptr;
    }
    v102 = *((uint32_t *)v101 + 6);
    if ( v102 == *((uint32_t *)v101 + 8) - 48 )
    {
      sub_1320240((void **)v101, a26);
    }
    else
    {
      v103 = 0;
      if ( v102 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v101 + 6), a26);
        v103 = *((uint32_t *)v101 + 6);
      }
      *((uint32_t *)v101 + 6) = v103 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a27, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v98 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v98 = nullptr;
    }
    v99 = *((uint32_t *)v98 + 6);
    if ( v99 == *((uint32_t *)v98 + 8) - 48 )
    {
      sub_1320240((void **)v98, a27);
    }
    else
    {
      v100 = 0;
      if ( v99 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v98 + 6), a27);
        v100 = *((uint32_t *)v98 + 6);
      }
      *((uint32_t *)v98 + 6) = v100 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a28, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v95 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v95 = nullptr;
    }
    v96 = *((uint32_t *)v95 + 6);
    if ( v96 == *((uint32_t *)v95 + 8) - 48 )
    {
      sub_1320240((void **)v95, a28);
    }
    else
    {
      v97 = 0;
      if ( v96 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v95 + 6), a28);
        v97 = *((uint32_t *)v95 + 6);
      }
      *((uint32_t *)v95 + 6) = v97 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a29, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v92 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v92 = nullptr;
    }
    v93 = *((uint32_t *)v92 + 6);
    if ( v93 == *((uint32_t *)v92 + 8) - 48 )
    {
      sub_1320240((void **)v92, a29);
    }
    else
    {
      v94 = 0;
      if ( v93 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v92 + 6), a29);
        v94 = *((uint32_t *)v92 + 6);
      }
      *((uint32_t *)v92 + 6) = v94 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a30, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v89 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v89 = nullptr;
    }
    v90 = *((uint32_t *)v89 + 6);
    if ( v90 == *((uint32_t *)v89 + 8) - 48 )
    {
      sub_1320240((void **)v89, a30);
    }
    else
    {
      v91 = 0;
      if ( v90 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v89 + 6), a30);
        v91 = *((uint32_t *)v89 + 6);
      }
      *((uint32_t *)v89 + 6) = v91 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a31, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v86 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v86 = nullptr;
    }
    v87 = *((uint32_t *)v86 + 6);
    if ( v87 == *((uint32_t *)v86 + 8) - 48 )
    {
      sub_1320240((void **)v86, a31);
    }
    else
    {
      v88 = 0;
      if ( v87 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v86 + 6), a31);
        v88 = *((uint32_t *)v86 + 6);
      }
      *((uint32_t *)v86 + 6) = v88 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a32, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v83 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v83 = nullptr;
    }
    v84 = *((uint32_t *)v83 + 6);
    if ( v84 == *((uint32_t *)v83 + 8) - 48 )
    {
      sub_1320240((void **)v83, a32);
    }
    else
    {
      v85 = 0;
      if ( v84 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v83 + 6), a32);
        v85 = *((uint32_t *)v83 + 6);
      }
      *((uint32_t *)v83 + 6) = v85 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a33, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v80 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v80 = nullptr;
    }
    v81 = *((uint32_t *)v80 + 6);
    if ( v81 == *((uint32_t *)v80 + 8) - 48 )
    {
      sub_1320240((void **)v80, a33);
    }
    else
    {
      v82 = 0;
      if ( v81 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v80 + 6), a33);
        v82 = *((uint32_t *)v80 + 6);
      }
      *((uint32_t *)v80 + 6) = v82 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a34, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v77 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v77 = nullptr;
    }
    v78 = *((uint32_t *)v77 + 6);
    if ( v78 == *((uint32_t *)v77 + 8) - 48 )
    {
      sub_1320240((void **)v77, a34);
    }
    else
    {
      v79 = 0;
      if ( v78 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v77 + 6), a34);
        v79 = *((uint32_t *)v77 + 6);
      }
      *((uint32_t *)v77 + 6) = v79 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a35, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v74 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v74 = nullptr;
    }
    v75 = *((uint32_t *)v74 + 6);
    if ( v75 == *((uint32_t *)v74 + 8) - 48 )
    {
      sub_1320240((void **)v74, a35);
    }
    else
    {
      v76 = 0;
      if ( v75 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v74 + 6), a35);
        v76 = *((uint32_t *)v74 + 6);
      }
      *((uint32_t *)v74 + 6) = v76 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a36, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v71 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v71 = nullptr;
    }
    v72 = *((uint32_t *)v71 + 6);
    if ( v72 == *((uint32_t *)v71 + 8) - 48 )
    {
      sub_1320240((void **)v71, a36);
    }
    else
    {
      v73 = 0;
      if ( v72 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v71 + 6), a36);
        v73 = *((uint32_t *)v71 + 6);
      }
      *((uint32_t *)v71 + 6) = v73 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a37, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v68 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v68 = nullptr;
    }
    v69 = *((uint32_t *)v68 + 6);
    if ( v69 == *((uint32_t *)v68 + 8) - 48 )
    {
      sub_1320240((void **)v68, a37);
    }
    else
    {
      v70 = 0;
      if ( v69 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v68 + 6), a37);
        v70 = *((uint32_t *)v68 + 6);
      }
      *((uint32_t *)v68 + 6) = v70 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a38, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v65 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v65 = nullptr;
    }
    v66 = *((uint32_t *)v65 + 6);
    if ( v66 == *((uint32_t *)v65 + 8) - 48 )
    {
      sub_1320240((void **)v65, a38);
    }
    else
    {
      v67 = 0;
      if ( v66 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v65 + 6), a38);
        v67 = *((uint32_t *)v65 + 6);
      }
      *((uint32_t *)v65 + 6) = v67 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a39, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v62 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v62 = nullptr;
    }
    v63 = *((uint32_t *)v62 + 6);
    if ( v63 == *((uint32_t *)v62 + 8) - 48 )
    {
      sub_1320240((void **)v62, a39);
    }
    else
    {
      v64 = 0;
      if ( v63 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v62 + 6), a39);
        v64 = *((uint32_t *)v62 + 6);
      }
      *((uint32_t *)v62 + 6) = v64 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a40, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v59 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v59 = nullptr;
    }
    v60 = *((uint32_t *)v59 + 6);
    if ( v60 == *((uint32_t *)v59 + 8) - 48 )
    {
      sub_1320240((void **)v59, a40);
    }
    else
    {
      v61 = 0;
      if ( v60 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v59 + 6), a40);
        v61 = *((uint32_t *)v59 + 6);
      }
      *((uint32_t *)v59 + 6) = v61 + 48;
    }
  }
  if ( !glotv3::EventValue::opEq(a41, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
  {
    v56 = v188;
    if ( v188 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Eve"
        "ntParams, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
        "px != 0");
      v56 = nullptr;
    }
    v57 = *((uint32_t *)v56 + 6);
    if ( v57 == *((uint32_t *)v56 + 8) - 48 )
    {
      sub_1320240((void **)v56, a41);
    }
    else
    {
      v58 = 0;
      if ( v57 != 0 )
      {
        glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v56 + 6), a41);
        v58 = *((uint32_t *)v56 + 6);
      }
      *((uint32_t *)v56 + 6) = v58 + 48;
    }
  }
  if ( glotv3::EventValue::opEq(a42, (const glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty) )
    goto LABEL_45;
  v53 = v188;
  if ( v188 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event"
      "Params, typename boost::detail::sp_member_access<T>::type = glotv3::EventParams*]",
      "px != 0");
    v53 = nullptr;
  }
  v54 = *((uint32_t *)v53 + 6);
  if ( v54 == *((uint32_t *)v53 + 8) - 48 )
  {
    sub_1320240((void **)v53, a42);
LABEL_45:
    v47 = v188;
    goto LABEL_46;
  }
  v55 = 0;
  v47 = v53;
  if ( v54 != 0 )
  {
    glotv3::EventValue::Construct(*((glotv3::EventValue::Self **)v53 + 6), a42);
    v55 = *((uint32_t *)v53 + 6);
    v47 = v188;
  }
  *((uint32_t *)v53 + 6) = v55 + 48;
LABEL_46:
  a8 = v47;
  a9 = a5;
  if ( a5 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)a5 + 1, 1);
  v48 = glotv3::TrackingManager::AddEvent(a1, &a8);
  boost::detail::shared_count::Destroy((volatile int32_t **)&a9);
  boost::detail::shared_count::Destroy((volatile int32_t **)&a5);
  return v48;
}


