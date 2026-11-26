#include "Core/Utils/DecompTypes.h"
#include "chatv2_Utils.h"

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::Helper::GetHost  (binary VA: 0x12378b0)
// Original: chatv2::Utils::Helper::GetHost
// ----------------------------------------------------------------------------
int chatv2::Utils::Helper::GetHost(int a1, uint32_t *a2)
{
  unsigned int v2;
  int v3;

  v2 = g4_std_compat::string_find(a2, "//", 0, 2) + 2;
  v3 = (int)(uintptr_t)(sub_1937EB0(a2, 47, v2));
  if ( v2 > *(uint32_t *)(*a2 - 12) )
    sub_1900210("basic_string::substr");
  sub_193A6F0(a1, a2, v2, v3 - v2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::Helper::GetUrl  (binary VA: 0x1237960)
// Original: chatv2::Utils::Helper::GetUrl
// ----------------------------------------------------------------------------
int chatv2::Utils::Helper::GetUrl(int a1, uint32_t *a2)
{
  int v2;
  unsigned int v3;
  unsigned int v4;

  v2 = g4_std_compat::string_find(a2, "//", 0, 2);
  v3 = (unsigned int)(uintptr_t)(sub_1937EB0(a2, 47, v2 + 2));
  v4 = *(uint32_t *)(*a2 - 12);
  if ( v3 > v4 )
    sub_1900210("basic_string::substr");
  sub_193A6F0(a1, a2, v3, v4 - v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::Helper::ChatLibThreadSleepFor  (binary VA: 0x1237a00)
// Original: chatv2::Utils::Helper::ChatLibThreadSleepFor
// ----------------------------------------------------------------------------
int chatv2::Utils::Helper::ChatLibThreadSleepFor(chatv2::Utils::Helper::Self *self)
{
  struct tm *v1;
  uint16_t tm_mday;
  uint16_t v3;
  uint16_t v4; // si
  int tm_min;
  int tm_sec;
  int tm_hour;
  int16_t v9;
  uint16_t v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int64_t v15; // rax
  int v17;
  uint16_t v18;
  int64_t v33; // 0:edi.4,4:ebp.4
  typedef __suseconds_t _g4_t_tv_usec;
  typedef int _g4_t_v20;
  typedef uint64_t _g4_t_v21;
  typedef int16_t _g4_t_tm_mon;
  typedef int16_t _g4_t_tm_year;
  typedef uint16_t _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int64_t _g4_t_v27 __attribute__((aligned(1)));
  typedef struct timeval _g4_t_tv;
  typedef uint8_t _g4_t_v29[8];
  typedef int (**_g4_t_v30)(int);
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_tv_usec)) > _g4_s0 ? (0u + sizeof(_g4_t_tv_usec)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_tm_mon)) > _g4_s3 ? (24u + sizeof(_g4_t_tm_mon)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_tm_year)) > _g4_s4 ? (26u + sizeof(_g4_t_tm_year)) : _g4_s4,
    _g4_s6 = (38u + sizeof(_g4_t_v24)) > _g4_s5 ? (38u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v25)) > _g4_s6 ? (44u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v26)) > _g4_s7 ? (48u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v27)) > _g4_s8 ? (52u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_tv)) > _g4_s9 ? (60u + sizeof(_g4_t_tv)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v29)) > _g4_s10 ? (68u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v30)) > _g4_s11 ? (76u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_tp)) > _g4_s12 ? (84u + sizeof(_g4_t_tp)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_tv_usec &tv_usec = *reinterpret_cast<_g4_t_tv_usec *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_tm_mon &tm_mon = *reinterpret_cast<_g4_t_tm_mon *>(_g4_sf + 24u);
  _g4_t_tm_year &tm_year = *reinterpret_cast<_g4_t_tm_year *>(_g4_sf + 26u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 38u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 84u);

  gettimeofday(&tv, nullptr);
  *(uint32_t *)&v24[1] = tv.tv_sec;
  tv_usec = tv.tv_usec;
  v1 = gmtime_r((const time_t *)&v24[1], &tp);
  if ( v1 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "could not convert calendar time to UTC time", (int)(uintptr_t)(v24));
    sub_19042E0(v29, &v25);
    std::terminate();
  }
  tm_mday = v1->tm_mday;
  v20 = tm_mday;
  if ( tm_mday == 0 || tm_mday > 0x1Fu )
    sub_1237ECF();
  tm_mon = v1->tm_mon;
  v3 = tm_mon + 1;
  if ( tm_mon == -1 || v3 > 0xCu )
    sub_1237F81();
  tm_year = v1->tm_year;
  v4 = tm_year + 1900;
  if ( (uint16_t)(tm_year + 1900) <= 0x577u || v4 > 0x2710u )
    sub_1237F28();
  if ( v3 <= 0xBu )
  {
    v17 = 1 << v3;
    v18 = 30;
    if ( (v17 & 0xA50) == 0 )
    {
      if ( (v17 & 4) == 0 )
        goto LABEL_9;
      LOBYTE(v18) = 28;
      if ( (((uint8_t)tm_year + 108) & 3) == 0 )
      {
        v18 = 29;
        if ( v4 == 100 * (v4 / 0x64u) )
          v18 = 29 - (v4 % 0x190u != 0);
      }
    }
    if ( tm_mday > v18 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Day of month is not valid for year", (int)(uintptr_t)(v24) + 1);
      sub_19042A0(&v30, &v26);
      v30 = (int (**)(int))(uintptr_t)(&off_2068D98);
      std::terminate();
    }
  }
LABEL_9:
  tm_min = v1->tm_min;
  tm_sec = v1->tm_sec;
  tm_hour = v1->tm_hour;
  v21 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(tv_usec), 0);
  if ( tm_min < 0 || tm_hour < 0 || tm_sec < 0 )
    v33 = 1000000
        * (-3600LL * (int)__builtin_abs(tm_hour) - 60LL * (int)__builtin_abs(tm_min) - (int)__builtin_abs(tm_sec))
        - v21;
  else
    v33 = v21 + 1000000 * (tm_sec + 60LL * tm_min + 3600LL * tm_hour);
  v9 = (14 - (uint16_t)(tm_mon + 1)) / 12;
  v10 = tm_year + 6700 - v9;
  v11 = (v10 >> 2) + 365 * v10 + v20 + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5 - v10 / 0x64u;
  v12 = v10 / 0x190u;
  v13 = v11 + v12 - 32045;
  if ( v11 + v12 == 32045 || v11 + v12 == 32044 || v11 + v12 == 32043 )
  {
    if ( ((unsigned int)v33 | (HIDWORD(v33) + 0x80000000)) != 0 )
    {
      if ( v11 + v12 != 32045 && v11 + v12 != 32044 )
      {
        if ( v11 + v12 != 32043 )
        {
LABEL_35:
          v33 += (unsigned int)v13;
          goto LABEL_19;
        }
LABEL_43:
        v33 = 0x7FFFFFFFFFFFFFFELL;
        goto LABEL_19;
      }
    }
    else if ( v11 + v12 == 32043 )
    {
      goto LABEL_43;
    }
LABEL_37:
    if ( ((unsigned int)v33 | (HIDWORD(v33) + 0x80000000)) != 0 )
    {
      if ( v11 + v12 == 32044 )
      {
        v33 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_19;
      }
      if ( v11 + v12 == 32045 )
      {
        v33 = 0x8000000000000000LL;
        goto LABEL_19;
      }
      goto LABEL_35;
    }
    if ( v11 + v12 != 32044 )
      goto LABEL_19;
    goto LABEL_43;
  }
  if ( ((unsigned int)v33 | (HIDWORD(v33) + 0x80000000)) == 0 )
    goto LABEL_37;
  v14 = 20 * v13;
  v15 = 500654080LL * (unsigned int)v13;
  HIDWORD(v15) += v14;
  v33 += v15;
LABEL_19:
  if ( ((unsigned int)v33 | (HIDWORD(v33) + 0x80000000)) != 0
    && (HIDWORD(v33) ^ 0x7FFFFFFF | ~(uint32_t)v33) != 0
    && ((unsigned int)v33 ^ 0xFFFFFFFE | HIDWORD(v33) ^ 0x7FFFFFFF) != 0 )
  {
    v33 += 1000LL * (unsigned int)(uintptr_t)(self);
  }
  v27 = v33;
  return ((boost::this_thread::sleep(&v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::SetLogVerbosity  (binary VA: 0x1238410)
// Original: chatv2::Utils::SetLogVerbosity
// ----------------------------------------------------------------------------
chatv2::Utils::Self * chatv2::Utils::SetLogVerbosity(chatv2::Utils::Self *self)
{
  dword_2115E20 = (int)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::Log  (binary VA: 0x1238430)
// Original: chatv2::Utils::Log
// ----------------------------------------------------------------------------
char * chatv2::Utils::Log(unsigned int a1, int a2, int a3, char *a4, int a5, int a6)
{
  char *result;
  int v7;
  unsigned int v8;
  void *v9;
  char *v10;
  typedef int _g4_t_v11;
  typedef char *_g4_t_v12[3];
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (1u + sizeof(_g4_t_v11)) > _g4_s0 ? (1u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 1u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  result = (char *)a1;
  if ( dword_2115E20 >= a1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), a4, (int)(uintptr_t)(&v11));
    v7 = sub_1938190((int)(uintptr_t)(v12), "/\\", -1, 2u);
    if ( v7 > 0 )
    {
      v8 = v7 + 1;
      if ( v8 > *((uint32_t *)v12[0] - 3) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(&v13, v12, v8, -1);
      g4_std::string::assign_str(v12, &v13);
      v9 = (void *)(v13 - 12);
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
    }
    jcore::log::Log(a2, a3, v12[0], a5, a6);
    result = v12[0];
    v10 = v12[0] - 12;
    if ( (uint32_t *)v12[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v12[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      return (g4_std::string::Rep::M_destroy(v10), (char *)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::GetLogVerbosity  (binary VA: 0x12385a0)
// Original: chatv2::Utils::GetLogVerbosity
// ----------------------------------------------------------------------------
int chatv2::Utils::GetLogVerbosity()
{
  return dword_2115E20;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::Construct  (binary VA: 0x1278250)
// Original: chatv2::Utils::SyncQueue<boost::shared_ptr<chatv2::Connectivity::HTTPRequest>>::SyncQueue
// ----------------------------------------------------------------------------
int chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::Construct(chatv2::Utils::SyncQueue<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *self)
{
  int v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef void **_g4_t_v12;
  typedef int *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  typedef int _g4_t_v16[4];
  typedef uint32_t _g4_t_v17[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (39u + sizeof(_g4_t_v14)) > _g4_s3 ? (39u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v16)) > _g4_s5 ? (60u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v17)) > _g4_s6 ? (76u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 39u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);

  v12 = (void **)opNew(0x20u);
  if ( v12 + 3 >= v12 + 4 )
  {
    v11 = (int)(uintptr_t)(v12[3]);
  }
  else
  {
    v11 = opNew(0x200u);
    v12[3] = (void *)v11;
  }
  *((uint32_t *)self + 1) = 8;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  v1 = opNew(0x20u);
  v2 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v1;
  v3 = v1 + ((2 * v2 - 2) & 0xFFFFFFFC);
  v13 = (int *)v3;
  v4 = v3 + 4;
  if ( v3 < v3 + 4 )
  {
    v5 = (int *)v3;
    do
      *v5++ = opNew(0x200u);
    while ( v4 > (unsigned int)(uintptr_t)(v5) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v13);
  v6 = *v13;
  *((uint32_t *)self + 3) = *v13;
  *((uint32_t *)self + 4) = v6 + 512;
  *((uint32_t *)self + 9) = v4 - 4;
  v7 = *(uint32_t *)(v4 - 4);
  *((uint32_t *)self + 2) = v6;
  *((uint32_t *)self + 7) = v7;
  *((uint32_t *)self + 6) = v7;
  v16[0] = v11;
  v16[1] = v11;
  v16[2] = v11 + 512;
  v16[3] = (int)(uintptr_t)(v12 + 3);
  v15[2] = v11 + 512;
  v15[0] = v11;
  v15[1] = v11;
  v15[3] = (int)(uintptr_t)(v12 + 3);
  *((uint32_t *)self + 8) = v7 + 512;
  sub_1273C00(v15, v16);
  if ( v12 != nullptr )
  {
    if ( v12 + 3 < v12 + 4 )
      opDelete(v12[3]);
    opDelete(v12);
  }
  result = pthread_mutex_init((pthread_mutex_t *)((char *)self + 40), nullptr);
  v9 = result;
  if ( result != 0 )
  {
    v10 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v14));
    sub_19042E0(v17, (char *)&v14 + 1);
    g4_std::string::Destroy((char *)&v14 + 1);
    v17[2] = v9;
    v17[3] = v10;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_2049568);
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::ForEach  (binary VA: 0x127a320)
// Original: chatv2::Utils::SyncQueue<boost::shared_ptr<chatv2::Connectivity::HTTPRequest>>::ForEach
// ----------------------------------------------------------------------------
void chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::ForEach(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  volatile int32_t *v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  bool v10;
  int v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  void (*v14)(uint32_t *, int *);
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  volatile int32_t *v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint16_t _g4_t_v29[5];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef volatile int32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef volatile int32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[5];
  typedef uint32_t _g4_t_v44[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v29)) > _g4_s2 ? (30u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v30)) > _g4_s3 ? (40u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v31)) > _g4_s4 ? (44u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v32)) > _g4_s5 ? (48u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v33)) > _g4_s6 ? (52u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v34)) > _g4_s7 ? (64u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v35)) > _g4_s8 ? (68u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v36)) > _g4_s9 ? (80u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v37)) > _g4_s10 ? (84u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v38)) > _g4_s11 ? (96u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v39)) > _g4_s12 ? (100u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v40)) > _g4_s13 ? (104u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v41)) > _g4_s14 ? (108u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v42)) > _g4_s15 ? (112u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v43)) > _g4_s16 ? (120u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v44)) > _g4_s17 ? (140u + sizeof(_g4_t_v44)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 30u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 120u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);

  *(uint32_t *)&v29[1] = a1 + 40;
  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 40));
  while ( v2 == 4 );
  v3 = v2;
  if ( v2 != 0 )
  {
    v27 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(v29));
    sub_19042E0(v43, &v30);
    g4_std::string::Destroy(&v30);
    v43[2] = v3;
    v43[3] = v27;
    v43[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v43[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  if ( *a2 == 0 || (v4 = *(uint32_t *)(a1 + 24), v5 = *(int **)(a1 + 8), (int *)v4 == v5) )
  {
    boost::lock_guard<int>::Destroy((pthread_mutex_t **)&v29[1]);
    return;
  }
  if ( v4 == *(uint32_t *)(a1 + 28) )
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 36) - 4) + 512;
  v32 = *(uint32_t *)(v4 - 8);
  v6 = *(volatile int32_t **)(v4 - 4);
  v33 = v6;
  if ( v6 != nullptr )
  {
    __sync_add_and_fetch(v6 + 1, 1);
    v5 = *(int **)(a1 + 8);
  }
  v34 = 0;
  v35 = nullptr;
  v7 = 0;
  while ( 1 )
  {
    v11 = *v5;
    v12 = (volatile int32_t *)v5[1];
    v13 = nullptr;
    v38 = v11;
    v39 = v12;
    if ( v12 != nullptr )
    {
      __sync_add_and_fetch(v12 + 1, 1);
      v11 = v38;
      v7 = v34;
      v13 = v39;
    }
    v38 = v7;
    v39 = v35;
    v34 = v11;
    v35 = v13;
    boost::detail::shared_count::Destroy(&v39);
    v36 = v34;
    v37 = v13;
    if ( v13 != nullptr )
      __sync_add_and_fetch(v35 + 1, 1);
    if ( *a2 == 0 )
    {
      sub_1243080(&v42);
      std::terminate();
    }
    v14 = *(void (**)(uint32_t *, int *))((*a2 & 0xFFFFFFFE) + 4);
    v40 = v36;
    v41 = v37;
    if ( v37 != nullptr )
      __sync_add_and_fetch(v37 + 1, 1);
    v14(a2 + 1, &v40);
    boost::detail::shared_count::Destroy(&v41);
    boost::detail::shared_count::Destroy(&v37);
    v15 = *(uint32_t *)(a1 + 16);
    v16 = *(uint32_t *)(a1 + 8);
    if ( v16 == v15 - 8 )
    {
      boost::detail::shared_count::Destroy((volatile int32_t **)(v15 - 4));
      opDelete(*(void **)(a1 + 12));
      v25 = (int *)(*(uint32_t *)(a1 + 20) + 4);
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v25);
      v26 = *v25;
      *(uint32_t *)(a1 + 12) = *v25;
      *(uint32_t *)(a1 + 8) = v26;
      *(uint32_t *)(a1 + 16) = v26 + 512;
    }
    else
    {
      boost::detail::shared_count::Destroy((volatile int32_t **)(v16 + 4));
      *(uint32_t *)(a1 + 8) += 8;
    }
    v17 = *(uint32_t **)(a1 + 24);
    if ( v17 != (uint32_t *)(*(uint32_t *)(a1 + 32) - 8) )
      break;
    v18 = *(uint32_t *)(a1 + 36);
    if ( (unsigned int)(*(uint32_t *)(a1 + 4) - ((v18 - *(uint32_t *)a1) >> 2)) <= 1 )
    {
      g4_std_compat::deque_reallocate_map(
        (std::deque<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *)a1,
        1u,
        false);
      v18 = *(uint32_t *)(a1 + 36);
    }
    *(uint32_t *)(v18 + 4) = opNew(0x200u);
    v19 = *(uint32_t **)(a1 + 24);
    if ( v19 != nullptr )
    {
      *v19 = v34;
      v20 = v35;
      v10 = v35 == nullptr;
      v19[1] = (uint32_t)(uintptr_t)(v35);
      if ( !v10 )
        __sync_add_and_fetch(v20 + 1, 1);
    }
    v21 = (int *)(*(uint32_t *)(a1 + 36) + 4);
    *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v21);
    v22 = *v21;
    *(uint32_t *)(a1 + 28) = *v21;
    *(uint32_t *)(a1 + 24) = v22;
    *(uint32_t *)(a1 + 32) = v22 + 512;
    v7 = v34;
    if ( v34 == v32 )
      goto LABEL_33;
LABEL_16:
    v5 = *(int **)(a1 + 8);
  }
  v8 = 0;
  if ( v17 != nullptr )
  {
    *v17 = v34;
    v9 = v35;
    v10 = v35 == nullptr;
    v17[1] = (uint32_t)(uintptr_t)(v35);
    if ( !v10 )
      __sync_add_and_fetch(v9 + 1, 1);
    v8 = *(uint32_t *)(a1 + 24);
  }
  *(uint32_t *)(a1 + 24) = v8 + 8;
  v7 = v34;
  if ( v34 != v32 )
    goto LABEL_16;
LABEL_33:
  boost::detail::shared_count::Destroy(&v35);
  boost::detail::shared_count::Destroy(&v33);
  do
    v23 = pthread_mutex_unlock(*(pthread_mutex_t **)&v29[1]);
  while ( v23 == 4 );
  v24 = v23;
  if ( v23 != 0 )
  {
    v28 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(v29) + 1);
    sub_19042E0(v44, &v31);
    g4_std::string::Destroy(&v31);
    v44[2] = v24;
    v44[3] = v28;
    v44[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v44[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
}


