#include "Core/Utils/DecompTypes.h"
#include "TU21_MenuControllerPart1.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_BDE430  (binary VA: 0xbde430)
// Original: sub_BDE430
// ----------------------------------------------------------------------------
const char * sub_BDE430()
{
  const char *result;
  typedef glf::TlsNode::Self *_g4_t_lpfunc;
  typedef glf::TlsNode::Self *_g4_t_lpfunca;
  typedef glf::TlsNode::Self *_g4_t_lpfuncb;
  typedef glf::TlsNode::Self *_g4_t_lpfuncc;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_lpfunc)) > _g4_s0 ? (0u + sizeof(_g4_t_lpfunc)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_lpfunca)) > _g4_s1 ? (0u + sizeof(_g4_t_lpfunca)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_lpfuncb)) > _g4_s2 ? (0u + sizeof(_g4_t_lpfuncb)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_lpfuncc)) > _g4_s3 ? (0u + sizeof(_g4_t_lpfuncc)) : _g4_s3,
    _g4_s5 = (42u + sizeof(_g4_t_v5)) > _g4_s4 ? (42u + sizeof(_g4_t_v5)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v6)) > _g4_s5 ? (44u + sizeof(_g4_t_v6)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_lpfunc &lpfunc = *reinterpret_cast<_g4_t_lpfunc *>(_g4_sf + 0u);
  _g4_t_lpfunca &lpfunca = *reinterpret_cast<_g4_t_lpfunca *>(_g4_sf + 0u);
  _g4_t_lpfuncb &lpfuncb = *reinterpret_cast<_g4_t_lpfuncb *>(_g4_sf + 0u);
  _g4_t_lpfuncc &lpfuncc = *reinterpret_cast<_g4_t_lpfuncc *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 42u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 44u);

  dword_20DDE80 = 1;
  dword_20DDE84 = 1065353216;
  dword_20DDE88 = 1135322726;
  dword_20DDE8C = 0;
  dword_20DDE70 = 0;
  dword_20DDE74 = 0;
  dword_20DDE60 = 0;
  dword_20DDE64 = 0;
  sub_1900D70(&unk_20DE238);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE238, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE23C), "UNKNOWN", (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE23C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE240), "IMEI", (int)(uintptr_t)(&v5) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE240, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE244), "HDIDFV", (int)(uintptr_t)(&v6));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE244, &unk_20D1280);
  dword_20DE248 = 1056964608;
  dword_20DE24C = 1056964608;
  dword_20DE250 = 1056964608;
  dword_20DE254 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE254, &unk_20D1280);
  dword_20DE258 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE258, &unk_20D1280);
  dword_20DE25C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE25C, &unk_20D1280);
  dword_20DE260 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE260, &unk_20D1280);
  dword_20DE264 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE264, &unk_20D1280);
  dword_20DE268 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE268, &unk_20D1280);
  dword_20DE26C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE26C, &unk_20D1280);
  dword_20DE270 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE270, &unk_20D1280);
  dword_20DE274 = opNewArray(0x10u);
  dword_20DE278 = (uint32_t)(uintptr_t)(sub_18F8270());
  dword_20DE27C = (uint32_t)(uintptr_t)(sub_18F8270());
  dword_20DE280 = (uint32_t)(uintptr_t)(sub_18F81E0());
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_20DE284 = (uint32_t)(uintptr_t)(sub_18F81E0());
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_20DE290 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_20DE2A0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_20DE2A4 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DDE10), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DDE10, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DDE0C), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DDE0C, &unk_20D1280);
  glf::Mutex::Construct(&unk_20DDE04, 0);
  __cxa_atexit((void (*)(void *))glf::Mutex::Destroy, &unk_20DDE04, &unk_20D1280);
  dword_20DDDF8 = 0;
  LOBYTE(dword_20DDDFC) = 0;
  dword_20DDDB0 = 0;
  __cxa_atexit((void (*)(void *))sub_BD2370, &dword_20DDDB0, &unk_20D1280);
  dword_20DDDA0 = 0;
  __cxa_atexit((void (*)(void *))sub_BD2320, &dword_20DDDA0, &unk_20D1280);
  dword_20DDAF0 = 0;
  __cxa_atexit((void (*)(void *))((int (*)(int *))sub_5ED480), &dword_20DDAF0, &unk_20D1280);
  dword_20DDAE0 = 0;
  dword_20DDAE4 = 0;
  __cxa_atexit((void (*)(void *))sub_B6D880, nullptr, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DDAC0), "pc", (int)(uintptr_t)(&v6) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DDAC0, &unk_20D1280);
  dword_20DE2C0 = *(uint32_t *)glf::TlsNode::GetHead(lpfunc);
  dword_20DE2C4 = 128;
  dword_20DE2C8 = 0;
  dword_20DE2CC = (int)(uintptr_t)(&unk_20DE300);
  dword_20DE2D0 = 0;
  dword_20DE2D4 = 0;
  dword_20DE2D8 = 0;
  dword_20DE2DC = 0;
  dword_20DE2E0 = 0;
  glf::TlsNode::Init((glf::TlsNode::Self *)&dword_20DE2C0);
  *(uint32_t *)glf::TlsNode::GetHead(lpfunca) = (uint32_t)(uintptr_t)(&dword_20DE2C0);
  __cxa_atexit((void (*)(void *))sub_B66B10, &dword_20DE2C0, &unk_20D1280);
  memset(&unk_20DE300, 0, 0x80u);
  dword_20DE380 = *(uint32_t *)glf::TlsNode::GetHead(lpfuncb);
  dword_20DE384 = 4;
  dword_20DE38C = (int)(uintptr_t)(&unk_1CA4328);
  dword_20DE388 = 0;
  dword_20DE390 = 0;
  dword_20DE394 = 0;
  dword_20DE398 = 0;
  dword_20DE39C = 0;
  dword_20DE3A0 = 0;
  glf::TlsNode::Init((glf::TlsNode::Self *)&dword_20DE380);
  *(uint32_t *)glf::TlsNode::GetHead(lpfuncc) = (uint32_t)(uintptr_t)(&dword_20DE380);
  __cxa_atexit((void (*)(void *))sub_BC2770, &dword_20DE380, &unk_20D1280);
  glf::Mutex::Construct(&unk_20DE3A4, 0);
  result = (const char *)__cxa_atexit((void (*)(void *))glf::Mutex::Destroy, &unk_20DE3A4, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    result = (const char *)__cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    result = (const char *)__cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    result = (const char *)__cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    result = (const char *)__cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    result = (const char *)__cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    result = "static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default_barrier_reseter]";
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    result = "static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fct_ptr_barrier_reseter]";
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    result = "static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]";
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( byte_20D3F20 == 0 )
  {
    result = "static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_ops::noop_deleter]";
    byte_20D3F20 = 1;
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEC30  (binary VA: 0xbdec30)
// Original: sub_BDEC30
// ----------------------------------------------------------------------------
int sub_BDEC30(int a1, uint32_t *a2)
{
  sub_BDEC30(*a2, *a2 + dword_20DE620);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEC80  (binary VA: 0xbdec80)
// Original: sub_BDEC80
// ----------------------------------------------------------------------------
int sub_BDEC80()
{
  time_t v0;
  int result;

  v0 = time(nullptr);
  srand48(v0);
  dword_20DE624 = lrand48();
  result = lrand48();
  dword_20DE620 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDECC0  (binary VA: 0xbdecc0)
// Original: sub_BDECC0
// ----------------------------------------------------------------------------
uint32_t * sub_BDECC0(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = dword_20DE620;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDECE0  (binary VA: 0xbdece0)
// Original: sub_BDECE0
// ----------------------------------------------------------------------------
uint32_t * sub_BDECE0(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = dword_20DE620 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDED00  (binary VA: 0xbded00)
// Original: sub_BDED00
// ----------------------------------------------------------------------------
uint32_t * sub_BDED00(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = dword_20DE620 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDED20  (binary VA: 0xbded20)
// Original: sub_BDED20
// ----------------------------------------------------------------------------
int sub_BDED20(int *a1)
{
  int result;

  result = -1;
  if ( *a1 != -1 )
  {
    result = a1[1] - dword_20DE620;
    if ( *a1 != result )
    {
      *a1 = result;
      a1[1] = result + dword_20DE620;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDED60  (binary VA: 0xbded60)
// Original: sub_BDED60
// ----------------------------------------------------------------------------
void sub_BDED60(int *a1)
{
  int v1;

  if ( *a1 != -1 )
  {
    v1 = a1[1] - dword_20DE620;
    if ( *a1 != v1 )
    {
      *a1 = v1;
      a1[1] = dword_20DE620 + v1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BDEDA0  (binary VA: 0xbdeda0)
// Original: sub_BDEDA0
// ----------------------------------------------------------------------------
int sub_BDEDA0(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEDB0  (binary VA: 0xbdedb0)
// Original: sub_BDEDB0
// ----------------------------------------------------------------------------
uint32_t * sub_BDEDB0(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;

  result = a1;
  v3 = -1;
  if ( *a1 != -1 )
    v3 = a1[1] - dword_20DE620;
  v4 = a2 + v3;
  *a1 = v4;
  a1[1] = dword_20DE620 + v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEDF0  (binary VA: 0xbdedf0)
// Original: sub_BDEDF0
// ----------------------------------------------------------------------------
uint32_t * sub_BDEDF0(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;

  result = a1;
  v3 = -1;
  if ( *a1 != -1 )
    v3 = a1[1] - dword_20DE620;
  v4 = v3 - a2;
  *a1 = v4;
  a1[1] = dword_20DE620 + v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEE30  (binary VA: 0xbdee30)
// Original: sub_BDEE30
// ----------------------------------------------------------------------------
uint32_t * sub_BDEE30(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = dword_20DE620 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEE50  (binary VA: 0xbdee50)
// Original: sub_BDEE50
// ----------------------------------------------------------------------------
bool sub_BDEE50(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 == v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEE90  (binary VA: 0xbdee90)
// Original: sub_BDEE90
// ----------------------------------------------------------------------------
bool sub_BDEE90(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 >= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEED0  (binary VA: 0xbdeed0)
// Original: sub_BDEED0
// ----------------------------------------------------------------------------
bool sub_BDEED0(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 > v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEF10  (binary VA: 0xbdef10)
// Original: sub_BDEF10
// ----------------------------------------------------------------------------
bool sub_BDEF10(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 <= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEF50  (binary VA: 0xbdef50)
// Original: sub_BDEF50
// ----------------------------------------------------------------------------
bool sub_BDEF50(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 < v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEF90  (binary VA: 0xbdef90)
// Original: sub_BDEF90
// ----------------------------------------------------------------------------
int sub_BDEF90(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 * v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDEFD0  (binary VA: 0xbdefd0)
// Original: sub_BDEFD0
// ----------------------------------------------------------------------------
int sub_BDEFD0(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return v2 / a2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF030  (binary VA: 0xbdf030)
// Original: sub_BDF030
// ----------------------------------------------------------------------------
int sub_BDF030(int *a1, float a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return (int)(float)((float)v2 / a2);
}

// ----------------------------------------------------------------------------
// Function: sub_BDF080  (binary VA: 0xbdf080)
// Original: sub_BDF080
// ----------------------------------------------------------------------------
int sub_BDF080(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return a2 + v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF0C0  (binary VA: 0xbdf0c0)
// Original: sub_BDF0C0
// ----------------------------------------------------------------------------
int sub_BDF0C0(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  return v2 - a2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF100  (binary VA: 0xbdf100)
// Original: sub_BDF100
// ----------------------------------------------------------------------------
int sub_BDF100(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE620;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE620;
    }
  }
  return v2 * v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF170  (binary VA: 0xbdf170)
// Original: sub_BDF170
// ----------------------------------------------------------------------------
int sub_BDF170(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE620;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE620;
    }
  }
  return v2 / v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF1E0  (binary VA: 0xbdf1e0)
// Original: sub_BDF1E0
// ----------------------------------------------------------------------------
int sub_BDF1E0(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE620;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE620;
    }
  }
  return v2 + v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF250  (binary VA: 0xbdf250)
// Original: sub_BDF250
// ----------------------------------------------------------------------------
int sub_BDF250(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE620;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE620;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE620;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE620;
    }
  }
  return v2 - v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF2C0  (binary VA: 0xbdf2c0)
// Original: sub_BDF2C0
// ----------------------------------------------------------------------------
int sub_BDF2C0(int *a1)
{
  int v1;

  v1 = -1;
  if ( *a1 != -1 )
  {
    v1 = a1[1] - dword_20DE620;
    if ( *a1 != v1 )
    {
      *a1 = v1;
      a1[1] = v1 + dword_20DE620;
    }
  }
  return -v1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF300  (binary VA: 0xbdf300)
// Original: sub_BDF300
// ----------------------------------------------------------------------------
int * sub_BDF300(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE620;
  v3 = v2 - 1;
  *a1 = v3;
  a1[1] = dword_20DE620 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF340  (binary VA: 0xbdf340)
// Original: sub_BDF340
// ----------------------------------------------------------------------------
int * sub_BDF340(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE620;
  v3 = v2 - 1;
  *a1 = v3;
  a1[1] = dword_20DE620 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF380  (binary VA: 0xbdf380)
// Original: sub_BDF380
// ----------------------------------------------------------------------------
int * sub_BDF380(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE620;
  v3 = v2 + 1;
  *a1 = v3;
  a1[1] = dword_20DE620 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF3C0  (binary VA: 0xbdf3c0)
// Original: sub_BDF3C0
// ----------------------------------------------------------------------------
int * sub_BDF3C0(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE620;
  v3 = v2 + 1;
  *a1 = v3;
  a1[1] = dword_20DE620 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF400  (binary VA: 0xbdf400)
// Original: sub_BDF400
// ----------------------------------------------------------------------------
int sub_BDF400(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE620;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE620;
    }
  }
  return a1 - v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF440  (binary VA: 0xbdf440)
// Original: sub_BDF440
// ----------------------------------------------------------------------------
int sub_BDF440(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE620;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE620;
    }
  }
  return a1 + v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF480  (binary VA: 0xbdf480)
// Original: sub_BDF480
// ----------------------------------------------------------------------------
int sub_BDF480(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE620;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE620;
    }
  }
  return a1 * v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF4C0  (binary VA: 0xbdf4c0)
// Original: sub_BDF4C0
// ----------------------------------------------------------------------------
int sub_BDF4C0(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE620;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE620;
    }
  }
  return a1 / v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF520  (binary VA: 0xbdf520)
// Original: sub_BDF520
// ----------------------------------------------------------------------------
bool sub_BDF520(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE620;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE620;
    }
  }
  return a1 <= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF560  (binary VA: 0xbdf560)
// Original: sub_BDF560
// ----------------------------------------------------------------------------
int sub_BDF560(int a1, uint32_t *a2)
{
  g4_std::ostream::op_shl_int(a1, *a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF5A0  (binary VA: 0xbdf5a0)
// Original: sub_BDF5A0
// ----------------------------------------------------------------------------
int sub_BDF5A0(int a1, uint32_t *a2)
{
  int v2;
  uint32_t v4[4];

  v2 = *a2 + dword_20DE620;
  v4[0] = *a2;
  v4[1] = v2;
  sub_BDEC30(a1, v4);
  return a1;
}


