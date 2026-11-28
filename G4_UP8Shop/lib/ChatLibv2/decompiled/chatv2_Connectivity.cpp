#include "Core/Utils/DecompTypes.h"
#include "chatv2_Connectivity.h"

int g4_asio_create_stream_socket_tcp(uint32_t a1);
void g4_asio_resolver_basic_io_object_construct(void *self, void *io_svc);
pthread_mutex_t *g4_asio_epoll_deregister_descriptor(void *self, int fd, void *a3, bool a4);
int g4_asio_socket_ops_close(int a1, int a2, void *self, uint8_t *a4, uint8_t *a5, uint32_t *a6);

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::Construct  (binary VA: 0x1259c60)
// Original: chatv2::Connectivity::HTTPHeaderOptions::HTTPHeaderOptions
// ----------------------------------------------------------------------------
chatv2::Connectivity::HTTPHeaderOptions::Self * chatv2::Connectivity::HTTPHeaderOptions::Construct(chatv2::Connectivity::HTTPHeaderOptions::Self *self)
{
  chatv2::Connectivity::HTTPHeaderOptions::Self *result;

  sub_1900810((char *)self + 44);
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 160) = 0;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *((uint8_t *)self + 161) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + (uint32_t)(uintptr_t)(self)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)self + *(uint32_t *)(*(uint32_t *)self - 12), 0);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70((char *)self + 32);
  *((uint32_t *)self + 9) = 16;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  result = (chatv2::Connectivity::HTTPHeaderOptions::Self *)sub_19119D0((char *)self + 44, (char *)self + 4);
  *((uint32_t *)self + 46) = (uint32_t)(uintptr_t)(&dword_213B814);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::Construct  (binary VA: 0x1259db0)
// Original: chatv2::Connectivity::HTTPHeaderOptions::HTTPHeaderOptions
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPHeaderOptions::Construct(int a1, int a2, int a3, int a4)
{
  sub_1900810(a1 + 44);
  *(uint32_t *)(a1 + 156) = 0;
  *(uint8_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(uint8_t *)(a1 + 161) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + a1) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(a1 + 32);
  *(uint32_t *)(a1 + 36) = 16;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(&dword_213B814);
  sub_19119D0(a1 + 44, a1 + 4);
  *(uint32_t *)(a1 + 180) = a2;
  g4_std::string::construct_copy(a1 + 184, a3);
  *(uint32_t *)(a1 + 188) = a4;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::Destroy  (binary VA: 0x1259f00)
// Original: chatv2::Connectivity::HTTPHeaderOptions::~HTTPHeaderOptions
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPHeaderOptions::Destroy(chatv2::Connectivity::HTTPHeaderOptions::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint32_t *)self + 46);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v2 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 32);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + (uint32_t)(uintptr_t)(self)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::GetRequestType  (binary VA: 0x125a000)
// Original: chatv2::Connectivity::HTTPHeaderOptions::GetRequestType
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPHeaderOptions::GetRequestType(chatv2::Connectivity::HTTPHeaderOptions::Self *self)
{
  return *((uint32_t *)self + 45);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::GetUserAgent  (binary VA: 0x125a010)
// Original: chatv2::Connectivity::HTTPHeaderOptions::GetUserAgent
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::HTTPHeaderOptions::GetUserAgent(chatv2::Connectivity::HTTPHeaderOptions::Self *self)
{
  return (char *)self + 184;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::GetConnectionType  (binary VA: 0x125a020)
// Original: chatv2::Connectivity::HTTPHeaderOptions::GetConnectionType
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPHeaderOptions::GetConnectionType(chatv2::Connectivity::HTTPHeaderOptions::Self *self)
{
  return *((uint32_t *)self + 47);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPHeaderOptions::ToString  (binary VA: 0x125a030)
// Original: chatv2::Connectivity::HTTPHeaderOptions::ToString
// ----------------------------------------------------------------------------
uint32_t * chatv2::Connectivity::HTTPHeaderOptions::ToString(uint32_t *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  int v5;
  int v6;
  void *v7;
  int v8;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;
  size_t *v13;
  size_t *v14;
  volatile int32_t *v15;
  volatile int32_t *v16;
  size_t v17;
  char v18;
  const char *v19;
  int v20;
  size_t v21;
  const char *v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *v28;
  void *v29;
  void *v30;
  int v32;
  int v33;
  int v34;
  size_t *v35;
  void *v36;
  int v37;
  uint32_t *v38;
  int v39;
  size_t v40;
  char v41;
  int v42;
  int v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef size_t *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef const char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef size_t *_g4_t_v57;
  typedef const char *_g4_t_v58;
  typedef const char *_g4_t_v59;
  typedef const char *_g4_t_v60;
  typedef const char *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef const char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef size_t _g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef size_t _g4_t_v68;
  typedef int _g4_t_v69;
  typedef size_t _g4_t_v70;
  typedef int _g4_t_v71;
  typedef uint32_t _g4_t_v72[4];
  typedef int _g4_t_v73[4];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef volatile int32_t *_g4_t_v76;
  typedef volatile int32_t *_g4_t_v77;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v44)) > _g4_s0 ? (0u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v45)) > _g4_s1 ? (0u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v46)) > _g4_s2 ? (0u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v47)) > _g4_s3 ? (4u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v48)) > _g4_s4 ? (4u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v49)) > _g4_s5 ? (4u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v50)) > _g4_s6 ? (4u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v51)) > _g4_s7 ? (4u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v52)) > _g4_s8 ? (4u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v53)) > _g4_s9 ? (4u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v54)) > _g4_s10 ? (4u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v55)) > _g4_s11 ? (4u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v56)) > _g4_s12 ? (4u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v57)) > _g4_s13 ? (4u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v58)) > _g4_s14 ? (4u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v59)) > _g4_s15 ? (4u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v60)) > _g4_s16 ? (4u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v61)) > _g4_s17 ? (4u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v62)) > _g4_s18 ? (8u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (8u + sizeof(_g4_t_v63)) > _g4_s19 ? (8u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_v64)) > _g4_s20 ? (12u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v65)) > _g4_s21 ? (16u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v66)) > _g4_s22 ? (20u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v67)) > _g4_s23 ? (20u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v68)) > _g4_s24 ? (20u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v69)) > _g4_s25 ? (20u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v70)) > _g4_s26 ? (20u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (30u + sizeof(_g4_t_v71)) > _g4_s27 ? (30u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v72)) > _g4_s28 ? (40u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v73)) > _g4_s29 ? (56u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v74)) > _g4_s30 ? (72u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v75)) > _g4_s31 ? (76u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v76)) > _g4_s32 ? (80u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v77)) > _g4_s33 ? (84u + sizeof(_g4_t_v77)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 20u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 20u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 30u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);

  sub_1911530(a2 + 44, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), (char *)&unk_1B15112, (int)(uintptr_t)(&v71));
  g4_std_compat::string_assign(a2 + 40, (void *)v74, *(uint32_t *)(v74 - 12));
  v5 = 0;
  v6 = *(uint32_t *)(a2 + 40);
  if ( (*(uint8_t *)(a2 + 36) & 3) != 0 )
    v5 = *(uint32_t *)(v6 - 12);
  sub_1931CD0(a2 + 4, v6, 0, v5);
  v7 = (void *)(v74 - 12);
  if ( (uint32_t *)(v74 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = *(uint32_t *)(a2 + 180);
  if ( v8 != 0 )
  {
    if ( v8 == 1 )
    {
      v62 = *(uint32_t *)(*a4 - 12);
      g4_std_compat::ostream_write(a2, "POST ", 5);
      v51 = (int)(uintptr_t)(g4_std_compat::ostream_write(a2, *a3, *(uint32_t *)(*a3 - 12)));
      g4_std_compat::ostream_write(v51, " HTTP/1.1", 9);
      v52 = (int)(uintptr_t)(g4_std_compat::ostream_write(v51, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
      g4_std_compat::ostream_write(v52, "Host: ", 6);
      v32 = (int)(uintptr_t)(g4_std_compat::ostream_write(v52, *a5, *(uint32_t *)(*a5 - 12)));
      v53 = (int)(uintptr_t)(g4_std_compat::ostream_write(v32, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
      g4_std_compat::ostream_write(v53, "Accept: */*", 11);
      v54 = (int)(uintptr_t)(g4_std_compat::ostream_write(v53, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
      g4_std_compat::ostream_write(v54, "User-Agent: ", 12);
      v33 = (int)(uintptr_t)(g4_std_compat::ostream_write(v54, *(uint32_t *)(a2 + 184), *(uint32_t *)(*(uint32_t *)(a2 + 184) - 12)));
      v55 = (int)(uintptr_t)(g4_std_compat::ostream_write(v33, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
      g4_std_compat::ostream_write(v55, "Content-Type: application/x-www-form-urlencoded", 47);
      v56 = (int)(uintptr_t)(g4_std_compat::ostream_write(v55, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
      g4_std_compat::ostream_write(v56, "Content-Length: ", 16);
      v34 = (int)(uintptr_t)(sub_192D8B0(v56, v62));
      g4_std_compat::ostream_write(v34, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
    }
  }
  else
  {
    g4_std_compat::ostream_write(a2, "GET ", 4);
    v47 = (int)(uintptr_t)(g4_std_compat::ostream_write(a2, *a3, *(uint32_t *)(*a3 - 12)));
    g4_std_compat::ostream_write(v47, " HTTP/1.1", 9);
    g4_std_compat::ostream_write(v47, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
  }
  v9 = *(uint32_t *)(a2 + 188);
  if ( v9 == 0 )
  {
    g4_std_compat::ostream_write(a2, "Connection: close", 17);
LABEL_8:
    g4_std_compat::ostream_write(a2, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
    goto LABEL_9;
  }
  if ( v9 == 1 )
  {
    g4_std_compat::ostream_write(a2, "Connection: keep-alive", 22);
    goto LABEL_8;
  }
LABEL_9:
  g4_std_compat::ostream_write(a2, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
  if ( *(uint32_t *)(*a4 - 12) != 0 )
    g4_std_compat::ostream_write(a2, *a4, *(uint32_t *)(*a4 - 12));
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = *(uint8_t **)(a2 + 24);
  if ( v10 == nullptr )
  {
    g4_std::string::assign_str(a1, a2 + 40);
    goto LABEL_20;
  }
  v11 = *(uint8_t **)(a2 + 16);
  v12 = *(uint8_t **)(a2 + 20);
  if ( v10 > v11 )
  {
    if ( v10 == v12 )
    {
      v15 = (volatile int32_t *)&dword_213B814;
      goto LABEL_19;
    }
    if ( v12 != nullptr )
    {
      v66 = v10 - v12;
      v13 = (size_t *)sub_1938930(v10 - v12, 0);
      v14 = v13;
      v15 = (volatile int32_t *)(v13 + 3);
      if ( v66 == 1 )
      {
        *((uint8_t *)v13 + 12) = *v12;
      }
      else
      {
        v48 = v13;
        memcpy(v13 + 3, v12, v66);
        v14 = v48;
      }
      if ( v14 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v14[2] = 0;
        *v14 = v66;
        *((uint8_t *)v14 + v66 + 12) = 0;
      }
LABEL_19:
      v77 = v15;
      g4_std::string::assign_str(a1, &v77);
      v16 = v77 - 3;
      if ( v77 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) || __sync_fetch_and_add(v77 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_20;
      goto LABEL_54;
    }
LABEL_80:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  if ( v11 == v12 )
  {
    v36 = &dword_213B814;
    goto LABEL_52;
  }
  if ( v12 == nullptr )
  {
    if ( v11 != nullptr )
      goto LABEL_80;
    v35 = (size_t *)sub_1938930(0, 0);
    v36 = v35 + 3;
    v68 = 0;
    goto LABEL_49;
  }
  v68 = v11 - v12;
  v35 = (size_t *)sub_1938930(v11 - v12, 0);
  v36 = v35 + 3;
  if ( v68 != 1 )
  {
LABEL_49:
    v57 = v35;
    memcpy(v36, v12, v68);
    v35 = v57;
    goto LABEL_50;
  }
  *((uint8_t *)v35 + 12) = *v12;
LABEL_50:
  if ( v35 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v35[2] = 0;
    *v35 = v68;
    *((uint8_t *)v36 + v68) = 0;
  }
LABEL_52:
  v76 = (volatile int32_t *)v36;
  g4_std::string::assign_str(a1, &v76);
  v16 = v76 - 3;
  if ( v76 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v76 - 1, 0xFFFFFFFF) <= 0 )
LABEL_54:
    g4_std::string::Rep::M_destroy((void *)v16);
LABEL_20:
  v17 = 0;
  v73[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v73), 0x80u, 0);
  v18 = aHttpheaderopti /* " HTTPHeaderOptions , message: {0}\n" */[0];
  v19 = " HTTPHeaderOptions , message: {0}\n";
  v64 = 0;
  while ( 1 )
  {
    v22 = v19 + 1;
    if ( v18 != 123 )
    {
      v20 = v73[0];
      v21 = v17 + 1;
      if ( v17 + 1 > *(uint32_t *)(v73[0] - 12) )
      {
        v45 = v18;
        sub_1939D80((int)(uintptr_t)(v73), v17 + 65, 0);
        v20 = v73[0];
        v21 = v17 + 1;
        v18 = v45;
      }
      if ( *(int *)(v20 - 4) >= 0 )
      {
        v49 = v21;
        v44 = v18;
        sub_19397C0(v73);
        v20 = v73[0];
        v21 = v49;
        v18 = v44;
      }
      *(uint8_t *)(v20 + v17) = v18;
      v19 = v22;
      v17 = v21;
      goto LABEL_26;
    }
    v23 = v19[1];
    if ( v23 == 123 )
    {
      v42 = v73[0];
      if ( v17 + 2 > *(uint32_t *)(v73[0] - 12) )
      {
        v61 = v19;
        sub_1939D80((int)(uintptr_t)(v73), v17 + 66, 0);
        v42 = v73[0];
        v19 = v61;
      }
      v70 = v17 + 1;
      if ( *(int *)(v42 - 4) >= 0 )
      {
        v58 = v19;
        sub_19397C0(v73);
        v42 = v73[0];
        v19 = v58;
      }
      *(uint8_t *)(v42 + v17) = 123;
      v43 = v73[0];
      if ( *(int *)(v73[0] - 4) >= 0 )
      {
        v59 = v19;
        sub_19397C0(v73);
        v43 = v73[0];
        v19 = v59;
      }
      v19 += 2;
      v17 += 2;
      *(uint8_t *)(v43 + v70) = 123;
      goto LABEL_26;
    }
    if ( v23 == 0 )
      goto LABEL_66;
    v67 = v17;
    v24 = 1;
    v25 = 0;
    while ( 1 )
    {
      v23 = *v22;
      if ( (uint8_t)(*v22 - 48) > 9u )
        break;
      v26 = v24 * v25;
      ++v22;
      v24 *= 10;
      v25 = v26 + v23 - 48;
      if ( *v22 == 0 )
      {
        v27 = v25;
        v23 = 0;
        v17 = v67;
        goto LABEL_34;
      }
    }
    v27 = v25;
    v17 = v67;
    if ( v24 == 1 )
LABEL_66:
      v27 = v64++;
    if ( v23 == 58 )
    {
      v23 = v22[1];
      if ( v23 == 120 || (v19 = v22 + 2, v23 == 88) )
      {
        v23 = v22[2];
        v19 = v22 + 3;
      }
    }
    else
    {
LABEL_34:
      v19 = v22 + 1;
    }
    if ( v23 != 125 )
      break;
    if ( v27 != 0 )
    {
      v50 = v19;
      sub_1939D80((int)(uintptr_t)(v73), v17, 0);
      v19 = v50;
      v18 = *v50;
      if ( *v50 == 0 )
        goto LABEL_38;
    }
    else
    {
      v69 = *(uint32_t *)(*a1 - 12);
      if ( v17 + v69 > *(uint32_t *)(v73[0] - 12) )
      {
        v60 = v19;
        sub_1939D80((int)(uintptr_t)(v73), v17 + v69 + 64, 0);
        v19 = v60;
        v69 = *(uint32_t *)(*a1 - 12);
      }
      if ( v69 != 0 )
      {
        v37 = 0;
        v63 = v19;
        v65 = v17;
        v38 = a1;
        do
        {
          v39 = v73[0];
          v40 = v37 + v65;
          if ( *(int *)(v73[0] - 4) >= 0 )
          {
            v46 = v38;
            sub_19397C0(v73);
            v39 = v73[0];
            v38 = v46;
          }
          v41 = *(uint8_t *)(*v38 + v37++);
          *(uint8_t *)(v39 + v40) = v41;
        }
        while ( v37 != v69 );
        v19 = v63;
        v17 = v37 + v65;
      }
LABEL_26:
      v18 = *v19;
      if ( *v19 == 0 )
        goto LABEL_38;
    }
  }
  sub_1939D80((int)(uintptr_t)(v73), v17, 0);
LABEL_38:
  sub_1939D80((int)(uintptr_t)(v73), v17, 0);
  g4_std::string::construct_copy(v72, v73);
  v28 = (void *)(v73[0] - 12);
  if ( (uint32_t *)(v73[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v73[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "ChatLib", (int)(uintptr_t)(&v71) + 1);
  chatv2::Utils::Log(
    3,
    0,
    &v75,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPHeaderOptions.cpp",
    75,
    v72);
  v29 = (void *)(v75 - 12);
  if ( (uint32_t *)(v75 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  v30 = (void *)(v72[0] - 12);
  if ( (uint32_t *)(v72[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v72[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPParameter::Construct  (binary VA: 0x125aac0)
// Original: chatv2::Connectivity::HTTPParameter::HTTPParameter
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPParameter::Construct(int a1, int a2, int a3)
{
  g4_std::string::construct_copy(a1, a2);
  return (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 4, a3));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPParameter::Destroy  (binary VA: 0x125ab10)
// Original: chatv2::Connectivity::HTTPParameter::~HTTPParameter
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPParameter::Destroy(chatv2::Connectivity::HTTPParameter::Self *self)
{
  int v1;
  uint32_t *v2;

  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v2 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPParameter::GetName  (binary VA: 0x125aba0)
// Original: chatv2::Connectivity::HTTPParameter::GetName
// ----------------------------------------------------------------------------
chatv2::Connectivity::HTTPParameter::Self * chatv2::Connectivity::HTTPParameter::GetName(chatv2::Connectivity::HTTPParameter::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPParameter::GetValue  (binary VA: 0x125abb0)
// Original: chatv2::Connectivity::HTTPParameter::GetValue
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::HTTPParameter::GetValue(chatv2::Connectivity::HTTPParameter::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPRequest::Construct  (binary VA: 0x125abc0)
// Original: chatv2::Connectivity::HTTPRequest::HTTPRequest
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPRequest::Construct(int a1, int a2, uint32_t *a3)
{
  int v3;
  int result;

  *(uint32_t *)a1 = *a3;
  v3 = a3[1];
  *(uint32_t *)(a1 + 4) = v3;
  if ( v3 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
  sub_1900810(a1 + 52);
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(uint8_t *)(a1 + 168) = 0;
  *(uint8_t *)(a1 + 169) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0(*(uint32_t *)(*(uint32_t *)(a1 + 8) - 12) + a1 + 8, 0);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(a1 + 40);
  *(uint32_t *)(a1 + 44) = 16;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
  sub_19119D0(a1 + 52, a1 + 12);
  result = (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 188, a2));
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPRequest::Destroy  (binary VA: 0x125ad40)
// Original: chatv2::Connectivity::HTTPRequest::~HTTPRequest
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPRequest::Destroy(char **self)
{
  chatv2::Connectivity::HTTPRequest::Self *v1;
  int v2;
  char *v3;
  int v4;
  char *v5;
  int v6;
  volatile int32_t *v7;
  int v8;
  int v9;
  volatile int32_t *v10;
  void (*v11)(char **, char **, int);
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v15)) > _g4_s3 ? (46u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v16)) > _g4_s4 ? (47u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 46u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 47u);

  v1 = (chatv2::Connectivity::HTTPRequest::Self *)self;
  v2 = (int)(uintptr_t)(*(self + 51));
  if ( v2 != 0 )
  {
    if ( (v2 & 1) == 0 )
    {
      v11 = *(void (**)(char **, char **, int))(v2 & 0xFFFFFFFE);
      if ( v11 != nullptr )
        v11(self + 52, self + 52, 2);
    }
    *(self + 51) = nullptr;
  }
  v3 = *(self + 48);
  if ( *(self + 49) != v3 )
  {
    v4 = (int)(uintptr_t)(*(self + 48));
    v5 = v3 + 4;
    v6 = (int)(uintptr_t)(*(self + 49));
    do
    {
      while ( 1 )
      {
        v7 = *(volatile int32_t **)&v5[v4 - (uint32_t)(uintptr_t)(v3)];
        if ( v7 != nullptr && __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF) == 1 )
        {
          v14 = v3;
          v13 = v5;
          G4_VCALL<void>(v7, 8);
          v3 = v14;
          v5 = v13;
          if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
            break;
        }
        v4 += 8;
        if ( v6 == v4 )
          goto LABEL_11;
      }
      v4 += 8;
      (*(void (**)(char *, char *, volatile int32_t *))(*v7 + 12))(v13, v14, v7);
      v5 = v13;
      v3 = v14;
    }
    while ( v6 != v4 );
LABEL_11:
    v1 = (chatv2::Connectivity::HTTPRequest::Self *)self;
    v3 = *(self + 48);
  }
  if ( v3 != nullptr )
    opDelete(v3);
  v8 = *((uint32_t *)v1 + 47);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = &v15;
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  *((uint32_t *)v1 + 13) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v9 = *((uint32_t *)v1 + 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = &v16;
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)v1 + 40);
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + (uint32_t)(uintptr_t)(v1) + 8) = (uint32_t)(uintptr_t)(&off_20AAE80);
  *((uint32_t *)v1 + 13) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)v1 + 52);
  v10 = *((volatile int32_t **)v1 + 1);
  if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v10, 8, v12);
    if ( __sync_fetch_and_add(v10 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v10, 12);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPRequest::OnHTTPResponseReceivedHandler  (binary VA: 0x125af50)
// Original: chatv2::Connectivity::HTTPRequest::OnHTTPResponseReceivedHandler
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPRequest::OnHTTPResponseReceivedHandler(int a1, int *a2)
{
  int result;
  int v3;
  volatile int32_t *v4;
  int v5;
  int v6;
  int (*v7)(int, int *);
  volatile int32_t *v8;
  int (*v9)(int, int *);
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef int (**_g4_t_v13)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v10)) > _g4_s0 ? (15u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 15u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  result = a1;
  v3 = *(uint32_t *)(a1 + 204);
  if ( v3 != 0 )
  {
    v4 = (volatile int32_t *)a2[1];
    v5 = *a2;
    if ( v4 != nullptr )
    {
      __sync_add_and_fetch(v4 + 1, 1);
      v6 = *(uint32_t *)(a1 + 204);
      if ( v6 == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10) + 1, "call to empty boost::function", (int)(uintptr_t)(&v10));
        sub_19042E0(&v13, (char *)&v10 + 1);
        g4_std::string::Destroy((char *)&v10 + 1);
        v13 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
        std::terminate();
      }
      v11 = v5;
      v7 = *(int (**)(int, int *))((v6 & 0xFFFFFFFE) + 4);
      v12 = v4;
      __sync_add_and_fetch(v4 + 1, 1);
      result = v7(a1 + 208, &v11);
    }
    else
    {
      v11 = *a2;
      v9 = *(int (**)(int, int *))((v3 & 0xFFFFFFFE) + 4);
      v12 = nullptr;
      result = v9(a1 + 208, &v11);
    }
    v8 = v12;
    if ( v12 != nullptr )
    {
      result = __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = G4_VCALL<int>(v8, 8);
        if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
          result = G4_VCALL<int>(v8, 12);
      }
    }
    if ( v4 != nullptr )
    {
      result = __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = G4_VCALL<int>(v4, 8);
        if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
          return G4_VCALL<int>(v4, 12);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPRequest::FillContent  (binary VA: 0x125b0b0)
// Original: chatv2::Connectivity::HTTPRequest::FillContent
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPRequest::FillContent(int a1, uint32_t *a2)
{
  chatv2::Connectivity::HTTPParameter::Self **i;
  chatv2::Connectivity::HTTPParameter::Self *v3;
  chatv2::Connectivity::HTTPParameter::Self *v4;
  int Name;
  void *v6;
  void *v7;
  void *v8;
  size_t v9;
  char v10;
  int v11;
  size_t v12;
  uint8_t *v13;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  size_t v22;
  char v23;
  void *v24;
  void *v25;
  void *v26;
  int result;
  int v28;
  int v29;
  typedef size_t _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef int _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef int _g4_t_Value;
  typedef const char *_g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[4];
  typedef uint32_t _g4_t_v43[4];
  typedef uint32_t _g4_t_v44[4];
  typedef int _g4_t_v45[2];
  typedef int _g4_t_v46;
  typedef int _g4_t_v47[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v32)) > _g4_s2 ? (16u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v33)) > _g4_s3 ? (16u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v34)) > _g4_s4 ? (24u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v35)) > _g4_s5 ? (28u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v36)) > _g4_s6 ? (32u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v37)) > _g4_s7 ? (32u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_Value)) > _g4_s8 ? (36u + sizeof(_g4_t_Value)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v39)) > _g4_s9 ? (36u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v40)) > _g4_s10 ? (36u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (49u + sizeof(_g4_t_v41)) > _g4_s11 ? (49u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v42)) > _g4_s12 ? (56u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v43)) > _g4_s13 ? (72u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v44)) > _g4_s14 ? (88u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v45)) > _g4_s15 ? (104u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v46)) > _g4_s16 ? (112u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v47)) > _g4_s17 ? (116u + sizeof(_g4_t_v47)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_Value &Value = *reinterpret_cast<_g4_t_Value *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 49u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);

  for ( i = *(chatv2::Connectivity::HTTPParameter::Self ***)(a1 + 192);
        i != *(chatv2::Connectivity::HTTPParameter::Self ***)(a1 + 196);
        i += 2 )
  {
    v3 = *i;
    if ( *i == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPParameter, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPParameter*]",
        "px != 0");
      v3 = *i;
    }
    Value = (int)(uintptr_t)(chatv2::Connectivity::HTTPParameter::GetValue(v3));
    v4 = *i;
    if ( *i == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPParameter, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPParameter*]",
        "px != 0");
      v4 = *i;
    }
    Name = (int)(uintptr_t)(chatv2::Connectivity::HTTPParameter::GetName(v4));
    g4_std::string::construct_copy(v42, Name);
    g4_std::string::append((int)(uintptr_t)(v42), "=", 1u);
    g4_std::string::construct_copy(v43, v42);
    g4_std::string::append_str(v43, Value);
    g4_std::string::construct_copy(&v46, v43);
    g4_std::string::append((int)(uintptr_t)(&v46), "&", 1u);
    g4_std::string::append_str(a2, &v46);
    v6 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v43[0] - 12);
    if ( (uint32_t *)(v43[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v42[0] - 12);
    if ( (uint32_t *)(v42[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
  }
  v9 = 0;
  v45[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v45), 0x80u, 0);
  v34 = 0;
  v10 = aHttprequestFil /* " HTTPRequest FillContent , content: {0}\n" */[0];
  v39 = " HTTPRequest FillContent , content: {0}\n";
  while ( 1 )
  {
    v13 = (uint8_t *)(v39 + 1);
    if ( v10 != 123 )
    {
      v11 = v45[0];
      v12 = v9 + 1;
      if ( v9 + 1 > *(uint32_t *)(v45[0] - 12) )
      {
        v32 = v10;
        sub_1939D80((int)(uintptr_t)(v45), v9 + 65, 0);
        v11 = v45[0];
        v12 = v9 + 1;
        v10 = v32;
      }
      if ( *(int *)(v11 - 4) >= 0 )
      {
        v33 = v10;
        v30 = v12;
        sub_19397C0(v45);
        v11 = v45[0];
        v12 = v30;
        v10 = v33;
      }
      *(uint8_t *)(v11 + v9) = v10;
      ++v39;
      v9 = v12;
      goto LABEL_16;
    }
    v14 = v39[1];
    if ( v14 == 123 )
    {
      v28 = v45[0];
      if ( v9 + 2 > *(uint32_t *)(v45[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v45), v9 + 66, 0);
        v28 = v45[0];
        v37 = v9 + 1;
        if ( *(int *)(v45[0] - 4) < 0 )
          goto LABEL_51;
      }
      else
      {
        v37 = v9 + 1;
        if ( *(int *)(v45[0] - 4) < 0 )
        {
LABEL_51:
          *(uint8_t *)(v28 + v9) = 123;
          v29 = v45[0];
          if ( *(int *)(v45[0] - 4) >= 0 )
          {
            sub_19397C0(v45);
            v29 = v45[0];
          }
          v39 += 2;
          v9 += 2;
          *(uint8_t *)(v29 + v37) = 123;
          goto LABEL_16;
        }
      }
      sub_19397C0(v45);
      v28 = v45[0];
      goto LABEL_51;
    }
    if ( v14 == 0 )
      goto LABEL_41;
    v40 = v9;
    v15 = 1;
    v16 = 0;
    while ( 1 )
    {
      v14 = *v13;
      if ( (uint8_t)(*v13 - 48) > 9u )
        break;
      v17 = v15 * v16;
      ++v13;
      v15 *= 10;
      v16 = v17 + v14 - 48;
      if ( *v13 == 0 )
      {
        v18 = v16;
        v14 = 0;
        v9 = v40;
        goto LABEL_24;
      }
    }
    v18 = v16;
    v9 = v40;
    if ( v15 == 1 )
LABEL_41:
      v18 = v34++;
    if ( v14 == 58 )
    {
      v14 = v13[1];
      if ( v14 == 120 || v14 == 88 )
      {
        v14 = v13[2];
        v39 = (const char *)(v13 + 3);
      }
      else
      {
        v39 = (const char *)(v13 + 2);
      }
    }
    else
    {
LABEL_24:
      v39 = (const char *)(v13 + 1);
    }
    if ( v14 != 125 )
      break;
    if ( v18 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v45), v9, 0);
LABEL_16:
      v10 = *v39;
      if ( *v39 == 0 )
        goto LABEL_35;
    }
    else
    {
      v36 = *(uint32_t *)(*a2 - 12);
      if ( v9 + v36 > *(uint32_t *)(v45[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v45), v9 + v36 + 64, 0);
        v36 = *(uint32_t *)(*a2 - 12);
      }
      if ( v36 == 0 )
        goto LABEL_16;
      v19 = 0;
      v35 = v9;
      v20 = a2;
      do
      {
        v21 = v45[0];
        v22 = v19 + v35;
        if ( *(int *)(v45[0] - 4) >= 0 )
        {
          v31 = v20;
          sub_19397C0(v45);
          v21 = v45[0];
          v20 = v31;
        }
        v23 = *(uint8_t *)(*v20 + v19++);
        *(uint8_t *)(v21 + v22) = v23;
      }
      while ( v19 != v36 );
      v9 = v19 + v35;
      v10 = *v39;
      if ( *v39 == 0 )
        goto LABEL_35;
    }
  }
  sub_1939D80((int)(uintptr_t)(v45), v9, 0);
LABEL_35:
  sub_1939D80((int)(uintptr_t)(v45), v9, 0);
  g4_std::string::construct_copy(v44, v45);
  v24 = (void *)(v45[0] - 12);
  if ( (uint32_t *)(v45[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v47), "ChatLib", (int)(uintptr_t)(&v41));
  chatv2::Utils::Log(3, 0, v47, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPRequest.cpp", 33, v44);
  v25 = (void *)(v47[0] - 12);
  if ( (uint32_t *)(v47[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v25);
  }
  v26 = (void *)(v44[0] - 12);
  if ( (uint32_t *)(v44[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  result = *(uint32_t *)(*a2 - 12);
  if ( result != 0 )
    return (int)(uintptr_t)(g4_std::string::clear(a2, result - 1, 1, 0));
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPRequest::FillFullRequest  (binary VA: 0x125b7f0)
// Original: chatv2::Connectivity::HTTPRequest::FillFullRequest
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPRequest::FillFullRequest(int a1, uint32_t *a2, uint32_t *a3)
{
  int v3;
  int v4;
  void *v5;
  chatv2::Connectivity::HTTPHeaderOptions::Self *v6;
  int RequestType;
  int v8;
  void *v9;
  chatv2::Connectivity::HTTPHeaderOptions::Self *v10;
  int v11;
  int v12;
  int v13;
  chatv2::Connectivity::HTTPHeaderOptions::Self *v14;
  int ConnectionType;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  size_t *v19;
  size_t *v20;
  volatile int32_t *v21;
  volatile int32_t *v22;
  void *v23;
  size_t v24;
  char v25;
  int v26;
  size_t v27;
  uint8_t *v28;
  char v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  size_t v37;
  char v38;
  void *v39;
  void *v40;
  void *v41;
  int result;
  char *v43;
  size_t *v44;
  volatile int32_t *v45;
  int v46;
  int v47;
  typedef size_t _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef size_t *_g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef size_t *_g4_t_v58;
  typedef uint32_t *_g4_t_UserAgent;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef size_t _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef int _g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef const char *_g4_t_v68;
  typedef size_t _g4_t_v69;
  typedef size_t _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint32_t _g4_t_v74[4];
  typedef uint32_t _g4_t_v75[4];
  typedef int _g4_t_v76[3];
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef volatile int32_t *_g4_t_v80;
  typedef volatile int32_t *_g4_t_v81;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v48)) > _g4_s0 ? (4u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v49)) > _g4_s1 ? (4u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v50)) > _g4_s2 ? (8u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v51)) > _g4_s3 ? (8u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v52)) > _g4_s4 ? (8u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v53)) > _g4_s5 ? (8u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v54)) > _g4_s6 ? (8u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v55)) > _g4_s7 ? (8u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v56)) > _g4_s8 ? (8u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v57)) > _g4_s9 ? (8u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v58)) > _g4_s10 ? (8u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_UserAgent)) > _g4_s11 ? (12u + sizeof(_g4_t_UserAgent)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v60)) > _g4_s12 ? (16u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v61)) > _g4_s13 ? (20u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v62)) > _g4_s14 ? (20u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v63)) > _g4_s15 ? (24u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v64)) > _g4_s16 ? (24u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v65)) > _g4_s17 ? (24u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v66)) > _g4_s18 ? (28u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v67)) > _g4_s19 ? (28u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v68)) > _g4_s20 ? (28u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v69)) > _g4_s21 ? (28u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v70)) > _g4_s22 ? (28u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (33u + sizeof(_g4_t_v71)) > _g4_s23 ? (33u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v72)) > _g4_s24 ? (36u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v73)) > _g4_s25 ? (48u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v74)) > _g4_s26 ? (64u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v75)) > _g4_s27 ? (80u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v76)) > _g4_s28 ? (96u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v77)) > _g4_s29 ? (108u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v78)) > _g4_s30 ? (112u + sizeof(_g4_t_v78)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v79)) > _g4_s31 ? (116u + sizeof(_g4_t_v79)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v80)) > _g4_s32 ? (120u + sizeof(_g4_t_v80)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v81)) > _g4_s33 ? (124u + sizeof(_g4_t_v81)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_UserAgent &UserAgent = *reinterpret_cast<_g4_t_UserAgent *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 33u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 120u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 124u);

  sub_1911530(a1 + 52, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), (char *)&unk_1B15112, (int)(uintptr_t)(&v71));
  g4_std_compat::string_assign(a1 + 48, (void *)v77, *(uint32_t *)(v77 - 12));
  v3 = 0;
  v4 = *(uint32_t *)(a1 + 48);
  if ( (*(uint8_t *)(a1 + 44) & 3) != 0 )
    v3 = *(uint32_t *)(v4 - 12);
  sub_1931CD0(a1 + 12, v4, 0, v3);
  v5 = (void *)(v77 - 12);
  if ( (uint32_t *)(v77 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v73 = &dword_213B814;
  chatv2::Connectivity::HTTPRequest::FillContent(a1, (uint32_t *)(&v73));
  v6 = *(chatv2::Connectivity::HTTPHeaderOptions::Self **)a1;
  if ( *(uint32_t *)a1 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPHeaderOptions, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPHeaderOptions*]",
      "px != 0");
    v6 = *(chatv2::Connectivity::HTTPHeaderOptions::Self **)a1;
  }
  RequestType = chatv2::Connectivity::HTTPHeaderOptions::GetRequestType(v6);
  v63 = RequestType;
  if ( RequestType != 0 )
  {
    if ( RequestType == 1 )
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "POST", (int)(uintptr_t)(&v72));
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), (char *)&off_1B6AF81, (int)(uintptr_t)(&v71) + 2);
  }
  v66 = a1 + 8;
  v8 = (int)(uintptr_t)(g4_std_compat::ostream_write(a1 + 8, v78, *(uint32_t *)(v78 - 12)));
  g4_std_compat::ostream_write(v8, " ", 1);
  g4_std_compat::ostream_write(v8, *(uint32_t *)(a1 + 188), *(uint32_t *)(*(uint32_t *)(a1 + 188) - 12));
  v9 = (void *)(v78 - 12);
  if ( (uint32_t *)(v78 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  if ( v63 == 0 )
  {
    v61 = 0;
    if ( *(v73 - 3) == 0 )
      goto LABEL_11;
    g4_std_compat::ostream_write(v66, "?", 1);
    g4_std_compat::ostream_write(v66, v73, *(v73 - 3));
  }
  v61 = *(v73 - 3);
LABEL_11:
  v10 = *(chatv2::Connectivity::HTTPHeaderOptions::Self **)a1;
  if ( *(uint32_t *)a1 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPHeaderOptions, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPHeaderOptions*]",
      "px != 0");
    v10 = *(chatv2::Connectivity::HTTPHeaderOptions::Self **)a1;
  }
  UserAgent = (uint32_t *)chatv2::Connectivity::HTTPHeaderOptions::GetUserAgent(v10);
  g4_std_compat::ostream_write(v66, " HTTP/1.1", 9);
  v50 = (int)(uintptr_t)(g4_std_compat::ostream_write(v66, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
  g4_std_compat::ostream_write(v50, "Host: ", 6);
  v11 = (int)(uintptr_t)(g4_std_compat::ostream_write(v50, *a3, *(uint32_t *)(*a3 - 12)));
  v51 = (int)(uintptr_t)(g4_std_compat::ostream_write(v11, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
  g4_std_compat::ostream_write(v51, "Accept: */*", 11);
  v52 = (int)(uintptr_t)(g4_std_compat::ostream_write(v51, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
  g4_std_compat::ostream_write(v52, "User-Agent: ", 12);
  v12 = (int)(uintptr_t)(g4_std_compat::ostream_write(v52, *UserAgent, *(uint32_t *)(*UserAgent - 12)));
  v53 = (int)(uintptr_t)(g4_std_compat::ostream_write(v12, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
  g4_std_compat::ostream_write(v53, "Content-Type: application/x-www-form-urlencoded", 47);
  v54 = (int)(uintptr_t)(g4_std_compat::ostream_write(v53, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12)));
  g4_std_compat::ostream_write(v54, "Content-Length: ", 16);
  v13 = (int)(uintptr_t)(sub_192D8B0(v54, v61));
  g4_std_compat::ostream_write(v13, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
  v14 = *(chatv2::Connectivity::HTTPHeaderOptions::Self **)a1;
  if ( *(uint32_t *)a1 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPHeaderOptions, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPHeaderOptions*]",
      "px != 0");
    v14 = *(chatv2::Connectivity::HTTPHeaderOptions::Self **)a1;
  }
  ConnectionType = chatv2::Connectivity::HTTPHeaderOptions::GetConnectionType(v14);
  if ( ConnectionType != 0 )
  {
    if ( ConnectionType != 1 )
      goto LABEL_18;
    g4_std_compat::ostream_write(v66, "Connection: keep-alive", 22);
  }
  else
  {
    g4_std_compat::ostream_write(v66, "Connection: close", 17);
  }
  g4_std_compat::ostream_write(v66, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
LABEL_18:
  g4_std_compat::ostream_write(v66, chatv2::System::NIX_EOL, *(uint32_t *)(chatv2::System::NIX_EOL - 12));
  if ( v63 == 1 && *(v73 - 3) != 0 )
    g4_std_compat::ostream_write(v66, v73, *(v73 - 3));
  v16 = *(uint8_t **)(a1 + 32);
  v74[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v16 != nullptr )
  {
    v17 = *(uint8_t **)(a1 + 24);
    v18 = *(uint8_t **)(a1 + 28);
    if ( v16 > v17 )
    {
      if ( v16 == v18 )
      {
        v21 = (volatile int32_t *)&dword_213B814;
        goto LABEL_27;
      }
      if ( v18 != nullptr )
      {
        v67 = v16 - v18;
        v19 = (size_t *)sub_1938930(v16 - v18, 0);
        v20 = v19;
        v21 = (volatile int32_t *)(v19 + 3);
        if ( v67 == 1 )
        {
          *((uint8_t *)v19 + 12) = *v18;
        }
        else
        {
          v55 = v19;
          memcpy(v19 + 3, v18, v67);
          v20 = v55;
        }
        if ( v20 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v20[2] = 0;
          *v20 = v67;
          *((uint8_t *)v20 + v67 + 12) = 0;
        }
LABEL_27:
        v81 = v21;
        g4_std::string::assign_str(v74, &v81);
        v22 = v81 - 3;
        if ( v81 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) || __sync_fetch_and_add(v81 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_28;
        goto LABEL_73;
      }
LABEL_96:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
    if ( v17 == v18 )
    {
      v45 = (volatile int32_t *)&dword_213B814;
      goto LABEL_71;
    }
    if ( v18 != nullptr )
    {
      v70 = v17 - v18;
      v44 = (size_t *)sub_1938930(v17 - v18, 0);
      v45 = (volatile int32_t *)(v44 + 3);
      if ( v70 == 1 )
      {
        *((uint8_t *)v44 + 12) = *v18;
LABEL_69:
        if ( v44 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v44[2] = 0;
          *v44 = v70;
          *((uint8_t *)v45 + v70) = 0;
        }
LABEL_71:
        v80 = v45;
        g4_std::string::assign_str(v74, &v80);
        v22 = v80 - 3;
        if ( v80 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) || __sync_fetch_and_add(v80 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_28;
LABEL_73:
        g4_std::string::Rep::M_destroy((void *)v22);
        goto LABEL_28;
      }
    }
    else
    {
      if ( v17 != nullptr )
        goto LABEL_96;
      v44 = (size_t *)sub_1938930(0, 0);
      v45 = (volatile int32_t *)(v44 + 3);
      v70 = 0;
    }
    v58 = v44;
    memcpy((void *)v45, v18, v70);
    v44 = v58;
    goto LABEL_69;
  }
  g4_std::string::assign_str(v74, a1 + 48);
LABEL_28:
  g4_std::string::assign_str(a2, v74);
  v23 = (void *)(v74[0] - 12);
  if ( (uint32_t *)(v74[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  v24 = 0;
  v76[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v76), 0x80u, 0);
  v60 = 0;
  v25 = aHttprequestFil_0 /* " HTTPRequest FillFullRequest , request: {0}\n" */[0];
  v68 = " HTTPRequest FillFullRequest , request: {0}\n";
  while ( 1 )
  {
    v28 = (uint8_t *)(v68 + 1);
    if ( v25 != 123 )
    {
      v26 = v76[0];
      v27 = v24 + 1;
      if ( v24 + 1 > *(uint32_t *)(v76[0] - 12) )
      {
        v56 = v25;
        sub_1939D80((int)(uintptr_t)(v76), v24 + 65, 0);
        v26 = v76[0];
        v27 = v24 + 1;
        v25 = v56;
      }
      if ( *(int *)(v26 - 4) >= 0 )
      {
        v57 = v25;
        v48 = v27;
        sub_19397C0(v76);
        v26 = v76[0];
        v27 = v48;
        v25 = v57;
      }
      *(uint8_t *)(v26 + v24) = v25;
      ++v68;
      v24 = v27;
      goto LABEL_35;
    }
    v29 = v68[1];
    if ( v29 == 123 )
    {
      v46 = v76[0];
      if ( v24 + 2 > *(uint32_t *)(v76[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v76), v24 + 66, 0);
        v46 = v76[0];
      }
      v65 = v24 + 1;
      if ( *(int *)(v46 - 4) >= 0 )
      {
        sub_19397C0(v76);
        v46 = v76[0];
      }
      *(uint8_t *)(v46 + v24) = 123;
      v47 = v76[0];
      if ( *(int *)(v76[0] - 4) >= 0 )
      {
        sub_19397C0(v76);
        v47 = v76[0];
      }
      v68 += 2;
      v24 += 2;
      *(uint8_t *)(v47 + v65) = 123;
      goto LABEL_35;
    }
    if ( v29 == 0 )
      goto LABEL_79;
    v69 = v24;
    v30 = 1;
    v31 = 0;
    while ( 1 )
    {
      v29 = *v28;
      if ( (uint8_t)(*v28 - 48) > 9u )
        break;
      v32 = v30 * v31;
      ++v28;
      v30 *= 10;
      v31 = v32 + v29 - 48;
      if ( *v28 == 0 )
      {
        v33 = v31;
        v29 = 0;
        v24 = v69;
        goto LABEL_43;
      }
    }
    v33 = v31;
    v24 = v69;
    if ( v30 == 1 )
LABEL_79:
      v33 = v60++;
    if ( v29 == 58 )
    {
      v29 = v28[1];
      if ( v29 == 120 || v29 == 88 )
      {
        v29 = v28[2];
        v68 = (const char *)(v28 + 3);
      }
      else
      {
        v68 = (const char *)(v28 + 2);
      }
    }
    else
    {
LABEL_43:
      v68 = (const char *)(v28 + 1);
    }
    if ( v29 != 125 )
      break;
    if ( v33 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v76), v24, 0);
LABEL_35:
      v25 = *v68;
      if ( *v68 == 0 )
        goto LABEL_54;
    }
    else
    {
      v64 = *(uint32_t *)(*a2 - 12);
      if ( v24 + v64 > *(uint32_t *)(v76[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v76), v24 + v64 + 64, 0);
        v64 = *(uint32_t *)(*a2 - 12);
      }
      if ( v64 == 0 )
        goto LABEL_35;
      v34 = 0;
      v62 = v24;
      v35 = a2;
      do
      {
        v36 = v76[0];
        v37 = v34 + v62;
        if ( *(int *)(v76[0] - 4) >= 0 )
        {
          v49 = v35;
          sub_19397C0(v76);
          v36 = v76[0];
          v35 = v49;
        }
        v38 = *(uint8_t *)(*v35 + v34++);
        *(uint8_t *)(v36 + v37) = v38;
      }
      while ( v34 != v64 );
      v24 = v34 + v62;
      v25 = *v68;
      if ( *v68 == 0 )
        goto LABEL_54;
    }
  }
  sub_1939D80((int)(uintptr_t)(v76), v24, 0);
LABEL_54:
  sub_1939D80((int)(uintptr_t)(v76), v24, 0);
  g4_std::string::construct_copy(v75, v76);
  v39 = (void *)(v76[0] - 12);
  if ( (uint32_t *)(v76[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v39);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "ChatLib", (int)(uintptr_t)(&v71) + 1);
  chatv2::Utils::Log(
    3,
    0,
    &v79,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPRequest.cpp",
    77,
    v75);
  v40 = (void *)(v79 - 12);
  if ( (uint32_t *)(v79 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v40);
  }
  v41 = (void *)(v75[0] - 12);
  if ( (uint32_t *)(v75[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v41);
  }
  result = (int)(uintptr_t)(v73);
  v43 = (char *)(v73 - 3);
  if ( v73 - 3 != dword_213B808 && __sync_fetch_and_add(v73 - 1, 0xFFFFFFFF) <= 0 )
    return ((g4_std::string::Rep::M_destroy(v43)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPRequest::AddHTTPParameter  (binary VA: 0x125c4d0)
// Original: chatv2::Connectivity::HTTPRequest::AddHTTPParameter
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPRequest::AddHTTPParameter(int a1, uint32_t *a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int v5;

  result = a1;
  v3 = *(uint32_t **)(a1 + 196);
  if ( v3 == *(uint32_t **)(a1 + 200) )
    return g4_std_compat::vector_fill_insert(a1 + 192, v3, a2);
  v4 = 0;
  if ( v3 != nullptr )
  {
    *v3 = *a2;
    v5 = a2[1];
    v3[1] = v5;
    if ( v5 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1);
    v4 = *(uint32_t *)(a1 + 196);
  }
  *(uint32_t *)(a1 + 196) = v4 + 8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::HTTPStatus::ToStatusEnum  (binary VA: 0x125ca00)
// Original: chatv2::Connectivity::HTTPResponse::HTTPStatus::ToStatusEnum
// ----------------------------------------------------------------------------
char chatv2::Connectivity::HTTPResponse::HTTPStatus::ToStatusEnum(chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *self)
{
  char result;

  result = -109;
  if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_184)->st_shndx + 1) )
  {
    if ( (int)(uintptr_t)(self) <= 403 )
    {
      result = -54;
      if ( self == (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&dword_C8 + 2) )
        return result;
      if ( (int)(uintptr_t)(self) <= 202 )
      {
        result = -56;
        if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)&dword_C8 )
        {
          result = -55;
          if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&dword_C8 + 1) )
            return -100;
        }
      }
      else
      {
        result = -112;
        if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_184)->st_info )
        {
          result = -111;
          if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_184)->st_other )
          {
            result = 46;
            if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_124)->st_size + 2) )
              return -100;
          }
        }
      }
    }
    else
    {
      result = -103;
      if ( self == (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value + 1) )
        return result;
      if ( (int)(uintptr_t)(self) > 409 )
      {
        result = -12;
        if ( self == (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)&stru_1F4 )
          return result;
        result = -9;
        if ( self == (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_name + 3) )
          return result;
        result = -83;
        if ( self == (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_1A4)->st_size + 1) )
          return result;
        return -100;
      }
      result = -108;
      if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)&stru_194 )
      {
        result = -104;
        if ( self != (chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value )
          return -100;
      }
    }
  }
  return result;
}



// ============================================================================
// Address:   0x125cac0 (size: 44 bytes)
// Symbol:    _ZN6chatv212Connectivity12HTTPResponseC2Ev
// Demangled: chatv2::Connectivity::HTTPResponse::HTTPResponse(void)
// ============================================================================
// Alternative name is '_ZN6chatv212Connectivity12HTTPResponseC1Ev'
chatv2::Connectivity::HTTPResponse::Self *chatv2::Connectivity::HTTPResponse::Construct(
        chatv2::Connectivity::HTTPResponse::Self *self)
{
  *(uint32_t *)self = -100;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::Destroy  (binary VA: 0x125caf0)
// Original: chatv2::Connectivity::HTTPResponse::~HTTPResponse
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPResponse::Destroy(chatv2::Connectivity::HTTPResponse::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::ToString  (binary VA: 0x125cb80)
// Original: chatv2::Connectivity::HTTPResponse::ToString
// ----------------------------------------------------------------------------
chatv2::Connectivity::HTTPResponse::Self * chatv2::Connectivity::HTTPResponse::ToString(chatv2::Connectivity::HTTPResponse::Self *self, uint32_t *a2)
{
  volatile int32_t *v2;
  uint8_t *v3;
  uint32_t *v4;
  size_t *v5;
  volatile int32_t *v6;
  size_t *v7;
  void *v8;
  void *v9;
  void *v10;
  size_t v11;
  char v12;
  const char *v13;
  int v14;
  size_t v15;
  const char *v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  void *v23;
  void *v24;
  volatile int32_t *v25;
  int v27;
  chatv2::Connectivity::HTTPResponse::Self *v28;
  int v29;
  size_t v30;
  char v31;
  int v32;
  int v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v36;
  typedef size_t *_g4_t_v37;
  typedef size_t *_g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef const char *_g4_t_v40;
  typedef const char *_g4_t_v41;
  typedef const char *_g4_t_v42;
  typedef const char *_g4_t_v43;
  typedef const char *_g4_t_v44;
  typedef const char *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef int _g4_t_v53[3];
  typedef uint32_t _g4_t_v54[4];
  typedef int _g4_t_v55[4];
  typedef int _g4_t_v56[4];
  typedef uint32_t _g4_t_v57[4];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef volatile int32_t *_g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef int (**_g4_t_v62)(int);
  typedef uint32_t _g4_t_v63[3];
  typedef uint8_t *_g4_t_v64;
  typedef uint8_t *_g4_t_v65;
  typedef uint8_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t _g4_t_v68[2];
  typedef volatile int32_t *_g4_t_v69;
  typedef uint32_t _g4_t_v70[29];
  typedef int16_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v40)) > _g4_s6 ? (8u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v41)) > _g4_s7 ? (8u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v42)) > _g4_s8 ? (8u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v43)) > _g4_s9 ? (8u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v44)) > _g4_s10 ? (8u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v45)) > _g4_s11 ? (12u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v46)) > _g4_s12 ? (16u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v47)) > _g4_s13 ? (20u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v48)) > _g4_s14 ? (20u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v49)) > _g4_s15 ? (20u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v50)) > _g4_s16 ? (24u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v51)) > _g4_s17 ? (24u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v52)) > _g4_s18 ? (24u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v53)) > _g4_s19 ? (32u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v54)) > _g4_s20 ? (44u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v55)) > _g4_s21 ? (60u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v56)) > _g4_s22 ? (76u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v57)) > _g4_s23 ? (92u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v58)) > _g4_s24 ? (108u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v59)) > _g4_s25 ? (112u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v60)) > _g4_s26 ? (116u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v61)) > _g4_s27 ? (120u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v62)) > _g4_s28 ? (124u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v63)) > _g4_s29 ? (128u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v64)) > _g4_s30 ? (140u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v65)) > _g4_s31 ? (144u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v66)) > _g4_s32 ? (148u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v67)) > _g4_s33 ? (152u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v68)) > _g4_s34 ? (156u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v69)) > _g4_s35 ? (164u + sizeof(_g4_t_v69)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v70)) > _g4_s36 ? (168u + sizeof(_g4_t_v70)) : _g4_s36,
    _g4_s38 = (284u + sizeof(_g4_t_v71)) > _g4_s37 ? (284u + sizeof(_g4_t_v71)) : _g4_s37,
    _g4_s39 = (288u + sizeof(_g4_t_v72)) > _g4_s38 ? (288u + sizeof(_g4_t_v72)) : _g4_s38,
    _g4_s40 = (292u + sizeof(_g4_t_v73)) > _g4_s39 ? (292u + sizeof(_g4_t_v73)) : _g4_s39,
    _g4_s41 = (296u + sizeof(_g4_t_v74)) > _g4_s40 ? (296u + sizeof(_g4_t_v74)) : _g4_s40,
    _g4_s42 = (300u + sizeof(_g4_t_v75)) > _g4_s41 ? (300u + sizeof(_g4_t_v75)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 140u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 148u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 152u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 156u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 164u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 284u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 288u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 292u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 296u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 300u);

  v2 = (volatile int32_t *)&dword_213B814;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  sub_1900810(v70);
  v70[28] = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v70[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v75 = 0;
  v62 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v63[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v63[-1] + (uint32_t)(uintptr_t)(*(v62 - 3)), 0);
  v63[1] = 0;
  v63[2] = 0;
  v64 = nullptr;
  v65 = nullptr;
  v66 = nullptr;
  v67 = 0;
  v62 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v70[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v63[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v68);
  v68[1] = 16;
  v69 = (volatile int32_t *)&dword_213B814;
  v63[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_19119D0(v70, v63);
  g4_std::ostream::op_shl_int(&v62, *a2);
  v54[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v66 != nullptr )
  {
    v3 = v65;
    if ( v66 > v64 )
    {
      if ( v66 == v65 )
        goto LABEL_9;
      if ( v65 != nullptr )
      {
        v47 = v66 - v65;
        v4 = (uint32_t *)sub_1938930(v66 - v65, 0);
        v5 = (size_t *)(v4);
        v2 = (volatile int32_t *)(v4 + 3);
        if ( v47 == 1 )
        {
          *((uint8_t *)v4 + 12) = *v3;
        }
        else
        {
          v37 = (size_t *)(v4);
          memcpy(v4 + 3, v3, v47);
          v5 = v37;
        }
        if ( v5 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v5[2] = 0;
          *v5 = v47;
          *((uint8_t *)v5 + v47 + 12) = 0;
        }
LABEL_9:
        v61 = v2;
        g4_std::string::assign_str(v54, &v61);
        v6 = v61 - 3;
        if ( v61 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) || __sync_fetch_and_add(v61 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_19;
        goto LABEL_11;
      }
LABEL_68:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
    if ( v64 == v65 )
    {
LABEL_18:
      v60 = v2;
      g4_std::string::assign_str(v54, &v60);
      v6 = v60 - 3;
      if ( v60 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) || __sync_fetch_and_add(v60 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_19;
LABEL_11:
      g4_std::string::Rep::M_destroy((void *)v6);
      goto LABEL_19;
    }
    if ( v65 != nullptr )
    {
      v48 = v64 - v65;
      v7 = (size_t *)sub_1938930(v64 - v65, 0);
      v2 = (volatile int32_t *)(v7 + 3);
      if ( v48 == 1 )
      {
        *((uint8_t *)v7 + 12) = *v3;
LABEL_16:
        if ( v7 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v7[2] = 0;
          *v7 = v48;
          *((uint8_t *)v2 + v48) = 0;
        }
        goto LABEL_18;
      }
    }
    else
    {
      if ( v64 != nullptr )
        goto LABEL_68;
      v7 = (size_t *)sub_1938930(0, 0);
      v2 = (volatile int32_t *)(v7 + 3);
      v48 = 0;
    }
    v38 = v7;
    memcpy((void *)v2, v3, v48);
    v7 = v38;
    goto LABEL_16;
  }
  g4_std::string::assign_str(v54, &v69);
LABEL_19:
  v55[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(v55, *(uint32_t *)(v54[0] - 12) + 28);
  g4_std::string::append((int)(uintptr_t)(v55), "HTTP Response: Status code: ", 0x1Cu);
  g4_std::string::append_str(v55, v54);
  g4_std::string::assign_str(self, v55);
  v8 = (void *)(v55[0] - 12);
  if ( (uint32_t *)(v55[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v54[0] - 12);
  if ( (uint32_t *)(v54[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v56[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(v56, *(uint32_t *)(a2[2] - 12) + 10);
  g4_std::string::append((int)(uintptr_t)(v56), "; Content:", 0xAu);
  g4_std::string::append_str(v56, a2 + 2);
  g4_std::string::append_str(self, v56);
  v10 = (void *)(v56[0] - 12);
  if ( (uint32_t *)(v56[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = 0;
  v58 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v58), 0x80u, 0);
  v12 = aHttpresponseTo /* " HTTPResponse ToString , content: {0}\n" */[0];
  v13 = " HTTPResponse ToString , content: {0}\n";
  v46 = 0;
  while ( 1 )
  {
    v16 = v13 + 1;
    if ( v12 != 123 )
    {
      v14 = v58;
      v15 = v11 + 1;
      if ( v11 + 1 > *(uint32_t *)(v58 - 12) )
      {
        v35 = v12;
        sub_1939D80((int)(uintptr_t)(&v58), v11 + 65, 0);
        v14 = v58;
        v15 = v11 + 1;
        v12 = v35;
      }
      if ( *(int *)(v14 - 4) >= 0 )
      {
        v39 = v15;
        v34 = v12;
        sub_19397C0(&v58);
        v14 = v58;
        v15 = v39;
        v12 = v34;
      }
      *(uint8_t *)(v14 + v11) = v12;
      v13 = v16;
      v11 = v15;
      goto LABEL_28;
    }
    v17 = v13[1];
    if ( v17 == 123 )
    {
      v32 = v58;
      if ( v11 + 2 > *(uint32_t *)(v58 - 12) )
      {
        v44 = v13;
        sub_1939D80((int)(uintptr_t)(&v58), v11 + 66, 0);
        v32 = v58;
        v13 = v44;
      }
      v52 = v11 + 1;
      if ( *(int *)(v32 - 4) >= 0 )
      {
        v41 = v13;
        sub_19397C0(&v58);
        v32 = v58;
        v13 = v41;
      }
      *(uint8_t *)(v32 + v11) = 123;
      v33 = v58;
      if ( *(int *)(v58 - 4) >= 0 )
      {
        v42 = v13;
        sub_19397C0(&v58);
        v33 = v58;
        v13 = v42;
      }
      v13 += 2;
      v11 += 2;
      *(uint8_t *)(v33 + v52) = 123;
      goto LABEL_28;
    }
    if ( v17 == 0 )
      goto LABEL_54;
    v50 = v11;
    v18 = 1;
    v19 = 0;
    while ( 1 )
    {
      v17 = *v16;
      if ( (uint8_t)(*v16 - 48) > 9u )
        break;
      v20 = v18 * v19;
      ++v16;
      v18 *= 10;
      v19 = v20 + v17 - 48;
      if ( *v16 == 0 )
      {
        v21 = v19;
        v17 = 0;
        v11 = v50;
        goto LABEL_36;
      }
    }
    v21 = v19;
    v11 = v50;
    if ( v18 == 1 )
LABEL_54:
      v21 = v46++;
    if ( v17 == 58 )
    {
      v17 = v16[1];
      if ( v17 == 120 || (v13 = v16 + 2, v17 == 88) )
      {
        v17 = v16[2];
        v13 = v16 + 3;
      }
    }
    else
    {
LABEL_36:
      v13 = v16 + 1;
    }
    if ( v17 != 125 )
      break;
    if ( v21 != 0 )
    {
      v40 = v13;
      sub_1939D80((int)(uintptr_t)(&v58), v11, 0);
      v13 = v40;
      v12 = *v40;
      if ( *v40 == 0 )
        goto LABEL_40;
    }
    else
    {
      v51 = *(uint32_t *)(*(uint32_t *)self - 12);
      if ( v11 + v51 > *(uint32_t *)(v58 - 12) )
      {
        v43 = v13;
        sub_1939D80((int)(uintptr_t)(&v58), v11 + v51 + 64, 0);
        v13 = v43;
        v51 = *(uint32_t *)(*(uint32_t *)self - 12);
      }
      if ( v51 != 0 )
      {
        v27 = 0;
        v45 = v13;
        v49 = v11;
        v28 = self;
        do
        {
          v29 = v58;
          v30 = v27 + v49;
          if ( *(int *)(v58 - 4) >= 0 )
          {
            v36 = v28;
            sub_19397C0(&v58);
            v29 = v58;
            v28 = v36;
          }
          v31 = *(uint8_t *)(*(uint32_t *)v28 + v27++);
          *(uint8_t *)(v29 + v30) = v31;
        }
        while ( v27 != v51 );
        v13 = v45;
        v11 = v27 + v49;
      }
LABEL_28:
      v12 = *v13;
      if ( *v13 == 0 )
        goto LABEL_40;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v58), v11, 0);
LABEL_40:
  sub_1939D80((int)(uintptr_t)(&v58), v11, 0);
  g4_std::string::construct_copy(v57, &v58);
  v22 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "ChatLib", (int)(uintptr_t)(v53));
  chatv2::Utils::Log(
    3,
    0,
    &v59,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPResponse.cpp",
    64,
    v57);
  v23 = (void *)(v59 - 12);
  if ( (uint32_t *)(v59 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  v24 = (void *)(v57[0] - 12);
  if ( (uint32_t *)(v57[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  v62 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v70[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v63[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v25 = v69 - 3;
  if ( v69 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v69 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v25);
  v63[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v68);
  v62 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v63[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v70[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v70);
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::IsOK  (binary VA: 0x125d660)
// Original: chatv2::Connectivity::HTTPResponse::IsOK
// ----------------------------------------------------------------------------
bool chatv2::Connectivity::HTTPResponse::IsOK(chatv2::Connectivity::HTTPResponse::Self *self)
{
  return (unsigned int)(*(uint32_t *)self - 200) <= 2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::SetStatus  (binary VA: 0x125d680)
// Original: chatv2::Connectivity::HTTPResponse::SetStatus
// ----------------------------------------------------------------------------
uint32_t * chatv2::Connectivity::HTTPResponse::SetStatus(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::SetStatusMessage  (binary VA: 0x125d690)
// Original: chatv2::Connectivity::HTTPResponse::SetStatusMessage
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPResponse::SetStatusMessage(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 4, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::SetContentLength  (binary VA: 0x125d6c0)
// Original: chatv2::Connectivity::HTTPResponse::SetContentLength
// ----------------------------------------------------------------------------
chatv2::Connectivity::HTTPResponse::Self * chatv2::Connectivity::HTTPResponse::SetContentLength(chatv2::Connectivity::HTTPResponse::Self *self, int a2)
{
  *((uint32_t *)self + 3) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::SetContent  (binary VA: 0x125d6d0)
// Original: chatv2::Connectivity::HTTPResponse::SetContent
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPResponse::SetContent(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 8, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::GetStatus  (binary VA: 0x125d700)
// Original: chatv2::Connectivity::HTTPResponse::GetStatus
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPResponse::GetStatus(chatv2::Connectivity::HTTPResponse::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::GetStatusMessage  (binary VA: 0x125d710)
// Original: chatv2::Connectivity::HTTPResponse::GetStatusMessage
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::HTTPResponse::GetStatusMessage(chatv2::Connectivity::HTTPResponse::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::GetContentLength  (binary VA: 0x125d720)
// Original: chatv2::Connectivity::HTTPResponse::GetContentLength
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPResponse::GetContentLength(chatv2::Connectivity::HTTPResponse::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPResponse::GetContent  (binary VA: 0x125d730)
// Original: chatv2::Connectivity::HTTPResponse::GetContent
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::HTTPResponse::GetContent(chatv2::Connectivity::HTTPResponse::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPSClient::Destroy  (binary VA: 0x125d740)
// Original: chatv2::Connectivity::HTTPSClient::~HTTPSClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPSClient::Destroy(chatv2::Connectivity::HTTPSClient::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092768);
  chatv2::Connectivity::HTTPClient::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPSClient::Destroy_ea125d770  (binary VA: 0x125d770)
// Original: chatv2::Connectivity::HTTPSClient::~HTTPSClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPSClient::Destroy_ea125d770(chatv2::Connectivity::HTTPSClient::Self *self)
{
  chatv2::Connectivity::HTTPSClient::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x125d7b0 (size: 92 bytes)
// Symbol:    _ZN6chatv212Connectivity11HTTPSClientC1ERKSsRN5boost4asio10io_serviceERNS5_3ssl7contextEb
// Demangled: chatv2::Connectivity::HTTPSClient::HTTPSClient(std::string const&,boost::asio::io_service &,boost::asio::ssl::context &,bool)
// ============================================================================
// Alternative name is '_ZN6chatv212Connectivity11HTTPSClientC2ERKSsRN5boost4asio10io_serviceERNS5_3ssl7contextEb'
int (**chatv2::Connectivity::HTTPSClient::HTTPSClient(
        uint32_t *a1,
        int a2,
        int a3,
        int a4,
        uint8_t a5))(chatv2::Connectivity::IClient::Self *, int)
{
  chatv2::Connectivity::HTTPClient::Construct(a1, a2, a3, a4, a5);
  *a1 = (uint32_t)(uintptr_t)(&off_2092768);
  return (int (**)(chatv2::Connectivity::IClient::Self *, int))(uintptr_t)(&off_2092768);
}
// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::Destroy  (binary VA: 0x125dc40)
// Original: chatv2::Connectivity::IClient::~IClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::IClient::Destroy(chatv2::Connectivity::IClient::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  void (*v10)(char *, char *, int);
  void (*v11)(char *, char *, int);
  void (*v12)(char *, char *, int);
  void (*v13)(char *, char *, int);
  void (*v14)(char *, char *, int);
  void (*v15)(char *, char *, int);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20927A8);
  v1 = *((uint32_t *)self + 25);
  if ( v1 != 0 )
  {
    if ( (v1 & 1) == 0 )
    {
      v12 = *(void (**)(char *, char *, int))(v1 & 0xFFFFFFFE);
      if ( v12 != nullptr )
        v12((char *)self + 104, (char *)self + 104, 2);
    }
    *((uint32_t *)self + 25) = 0;
  }
  v2 = *((uint32_t *)self + 21);
  if ( v2 != 0 )
  {
    if ( (v2 & 1) == 0 )
    {
      v11 = *(void (**)(char *, char *, int))(v2 & 0xFFFFFFFE);
      if ( v11 != nullptr )
        v11((char *)self + 88, (char *)self + 88, 2);
    }
    *((uint32_t *)self + 21) = 0;
  }
  v3 = *((uint32_t *)self + 17);
  if ( v3 != 0 )
  {
    if ( (v3 & 1) == 0 )
    {
      v10 = *(void (**)(char *, char *, int))(v3 & 0xFFFFFFFE);
      if ( v10 != nullptr )
        v10((char *)self + 72, (char *)self + 72, 2);
    }
    *((uint32_t *)self + 17) = 0;
  }
  v4 = *((uint32_t *)self + 13);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) == 0 )
    {
      v15 = *(void (**)(char *, char *, int))(v4 & 0xFFFFFFFE);
      if ( v15 != nullptr )
        v15((char *)self + 56, (char *)self + 56, 2);
    }
    *((uint32_t *)self + 13) = 0;
  }
  v5 = *((uint32_t *)self + 9);
  if ( v5 != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v14 = *(void (**)(char *, char *, int))(v5 & 0xFFFFFFFE);
      if ( v14 != nullptr )
        v14((char *)self + 40, (char *)self + 40, 2);
    }
    *((uint32_t *)self + 9) = 0;
  }
  v6 = *((uint32_t *)self + 5);
  if ( v6 != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v13 = *(void (**)(char *, char *, int))(v6 & 0xFFFFFFFE);
      if ( v13 != nullptr )
        v13((char *)self + 24, (char *)self + 24, 2);
    }
    *((uint32_t *)self + 5) = 0;
  }
  v7 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::Destroy_ea125de80  (binary VA: 0x125de80)
// Original: chatv2::Connectivity::IClient::~IClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::IClient::Destroy_ea125de80(chatv2::Connectivity::IClient::Self *self)
{
  chatv2::Connectivity::IClient::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::GetAddress  (binary VA: 0x125dec0)
// Original: chatv2::Connectivity::IClient::GetAddress
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::IClient::GetAddress(chatv2::Connectivity::IClient::Self *self)
{
  return (char *)self + 12;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::GetId  (binary VA: 0x125ded0)
// Original: chatv2::Connectivity::IClient::GetId
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::IClient::GetId(chatv2::Connectivity::IClient::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::SetState  (binary VA: 0x125dee0)
// Original: chatv2::Connectivity::IClient::SetState
// ----------------------------------------------------------------------------
int32_t chatv2::Connectivity::IClient::SetState(int a1, int32_t a2)
{
  return __atomic_exchange_n((volatile int32_t *)(a1 + 4), a2, __ATOMIC_SEQ_CST);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::OnStartupCompleted  (binary VA: 0x125def0)
// Original: chatv2::Connectivity::IClient::OnStartupCompleted
// ----------------------------------------------------------------------------
int chatv2::Connectivity::IClient::OnStartupCompleted(chatv2::Connectivity::IClient::Self *self)
{
  int result;

  chatv2::Connectivity::IClient::SetState((int)(uintptr_t)(self), 1);
  result = *((uint32_t *)self + 5);
  if ( result != 0 && boost::function0<void>::dummy::nonnull != nullptr )
    return (*(int (**)(char *))((result & 0xFFFFFFFE) + 4))((char *)self + 24);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::Construct  (binary VA: 0x125df50)
// Original: chatv2::Connectivity::IClient::IClient
// ----------------------------------------------------------------------------
int32_t chatv2::Connectivity::IClient::Construct(uint32_t *a1, int a2)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20927A8);
  g4_std::string::construct_copy(a1 + 2, a2);
  a1[5] = 0;
  a1[9] = 0;
  a1[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[13] = 0;
  a1[17] = 0;
  a1[21] = 0;
  a1[25] = 0;
  return chatv2::Connectivity::IClient::SetState((int)(uintptr_t)(a1), 2);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::GetState  (binary VA: 0x125dfe0)
// Original: chatv2::Connectivity::IClient::GetState
// ----------------------------------------------------------------------------
int chatv2::Connectivity::IClient::GetState(chatv2::Connectivity::IClient::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::IClient::IsStarted  (binary VA: 0x125dff0)
// Original: chatv2::Connectivity::IClient::IsStarted
// ----------------------------------------------------------------------------
bool chatv2::Connectivity::IClient::IsStarted(chatv2::Connectivity::IClient::Self *self)
{
  return *((uint32_t *)self + 1) == 1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::Stop  (binary VA: 0x125e330)
// Original: chatv2::Connectivity::TCPClient::Stop
// ----------------------------------------------------------------------------
int chatv2::Connectivity::TCPClient::Stop(chatv2::Connectivity::TCPClient::Self *self)
{
  int result;
  size_t v2;
  char v3;
  uint8_t *v4;
  int v5;
  size_t v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  size_t v20;
  char v21;
  int v22;
  uint32_t *v23;
  int v24;
  size_t v25;
  char v26;
  int v27;
  uint32_t *v28;
  int v29;
  size_t v30;
  char v31;
  int v32;
  int v33;
  typedef size_t _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef const char *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t _g4_t_v51[2];
  typedef int _g4_t_v52;
  typedef int _g4_t_v53[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v35)) > _g4_s1 ? (12u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v37)) > _g4_s3 ? (12u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v38)) > _g4_s4 ? (16u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v39)) > _g4_s5 ? (16u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v41)) > _g4_s7 ? (36u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v43)) > _g4_s9 ? (36u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v44)) > _g4_s10 ? (40u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v45)) > _g4_s11 ? (40u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v46)) > _g4_s12 ? (40u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v47)) > _g4_s13 ? (40u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v48)) > _g4_s14 ? (44u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v49)) > _g4_s15 ? (44u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (63u + sizeof(_g4_t_v50)) > _g4_s16 ? (63u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v51)) > _g4_s17 ? (64u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v52)) > _g4_s18 ? (72u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v53)) > _g4_s19 ? (76u + sizeof(_g4_t_v53)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 63u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);

  result = chatv2::Connectivity::IClient::GetState((chatv2::Connectivity::IClient::Self *)(self));
  if ( result == 2 )
    return result;
  v51[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = 0;
  sub_1939D80((int)(uintptr_t)(v51), 0x80u, 0);
  v40 = 0;
  v3 = aTcpclientStopI /* " TCPClient Stop, identifier : {0}, host: {1},..." */[0];
  v48 = " TCPClient Stop, identifier : {0}, host: {1}, port: {2}\n";
  while ( 1 )
  {
    v4 = (uint8_t *)(v48 + 1);
    if ( v3 == 123 )
      break;
    v5 = v51[0];
    v6 = v2 + 1;
    if ( v2 + 1 > *(uint32_t *)(v51[0] - 12) )
    {
      v38 = v3;
      sub_1939D80((int)(uintptr_t)(v51), v2 + 65, 0);
      v5 = v51[0];
      v6 = v2 + 1;
      v3 = v38;
    }
    if ( *(int *)(v5 - 4) >= 0 )
    {
      v39 = v3;
      v34 = v6;
      sub_19397C0(v51);
      v5 = v51[0];
      v6 = v34;
      v3 = v39;
    }
    *(uint8_t *)(v5 + v2) = v3;
    ++v48;
    v2 = v6;
LABEL_9:
    v3 = *v48;
    if ( *v48 == 0 )
      goto LABEL_10;
  }
  v12 = v48[1];
  if ( v12 == 123 )
  {
    v32 = v51[0];
    if ( v2 + 2 > *(uint32_t *)(v51[0] - 12) )
    {
      sub_1939D80((int)(uintptr_t)(v51), v2 + 66, 0);
      v32 = v51[0];
    }
    v47 = v2 + 1;
    if ( *(int *)(v32 - 4) >= 0 )
    {
      sub_19397C0(v51);
      v32 = v51[0];
    }
    *(uint8_t *)(v32 + v2) = 123;
    v33 = v51[0];
    if ( *(int *)(v51[0] - 4) >= 0 )
    {
      sub_19397C0(v51);
      v33 = v51[0];
    }
    v48 += 2;
    v2 += 2;
    *(uint8_t *)(v33 + v47) = 123;
    goto LABEL_9;
  }
  if ( v12 == 0 )
    goto LABEL_29;
  v49 = v2;
  v13 = 1;
  v14 = 0;
  while ( 1 )
  {
    v12 = *v4;
    if ( (uint8_t)(*v4 - 48) > 9u )
      break;
    v15 = v13 * v14;
    ++v4;
    v13 *= 10;
    v14 = v15 + v12 - 48;
    if ( *v4 == 0 )
    {
      v16 = v14;
      v12 = 0;
      v2 = v49;
      goto LABEL_22;
    }
  }
  v16 = v14;
  v2 = v49;
  if ( v13 == 1 )
LABEL_29:
    v16 = v40++;
  if ( v12 == 58 )
  {
    v12 = v4[1];
    if ( v12 == 120 || v12 == 88 )
    {
      v12 = v4[2];
      v48 = (const char *)(v4 + 3);
    }
    else
    {
      v48 = (const char *)(v4 + 2);
    }
  }
  else
  {
LABEL_22:
    v48 = (const char *)(v4 + 1);
  }
  if ( v12 == 125 )
  {
    if ( v16 == 1 )
    {
      v45 = *(uint32_t *)(*((uint32_t *)self + 29) - 12);
      if ( v2 + v45 > *(uint32_t *)(v51[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v51), v2 + v45 + 64, 0);
        v45 = *(uint32_t *)(*((uint32_t *)self + 29) - 12);
      }
      if ( v45 != 0 )
      {
        v22 = 0;
        v23 = (uint32_t *)((char *)self + 116);
        v42 = v2;
        do
        {
          v24 = v51[0];
          v25 = v22 + v42;
          if ( *(int *)(v51[0] - 4) >= 0 )
          {
            v36 = v23;
            sub_19397C0(v51);
            v24 = v51[0];
            v23 = v36;
          }
          v26 = *(uint8_t *)(*v23 + v22++);
          *(uint8_t *)(v24 + v25) = v26;
        }
        while ( v22 != v45 );
        v2 = v22 + v42;
      }
    }
    else if ( v16 != 0 )
    {
      if ( v16 == 2 )
      {
        v46 = *(uint32_t *)(*((uint32_t *)self + 30) - 12);
        if ( v2 + v46 > *(uint32_t *)(v51[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v51), v2 + v46 + 64, 0);
          v46 = *(uint32_t *)(*((uint32_t *)self + 30) - 12);
        }
        if ( v46 != 0 )
        {
          v27 = 0;
          v28 = (uint32_t *)((char *)self + 120);
          v43 = v2;
          do
          {
            v29 = v51[0];
            v30 = v27 + v43;
            if ( *(int *)(v51[0] - 4) >= 0 )
            {
              v37 = v28;
              sub_19397C0(v51);
              v29 = v51[0];
              v28 = v37;
            }
            v31 = *(uint8_t *)(*v28 + v27++);
            *(uint8_t *)(v29 + v30) = v31;
          }
          while ( v27 != v46 );
          v2 = v27 + v43;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(v51), v2, 0);
      }
    }
    else
    {
      v44 = *(uint32_t *)(*((uint32_t *)self + 2) - 12);
      if ( v2 + v44 > *(uint32_t *)(v51[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v51), v2 + v44 + 64, 0);
        v44 = *(uint32_t *)(*((uint32_t *)self + 2) - 12);
      }
      if ( v44 != 0 )
      {
        v17 = 0;
        v18 = (uint32_t *)((char *)self + 8);
        v41 = v2;
        do
        {
          v19 = v51[0];
          v20 = v17 + v41;
          if ( *(int *)(v51[0] - 4) >= 0 )
          {
            v35 = v18;
            sub_19397C0(v51);
            v19 = v51[0];
            v18 = v35;
          }
          v21 = *(uint8_t *)(*v18 + v17++);
          *(uint8_t *)(v19 + v20) = v21;
        }
        while ( v17 != v44 );
        v2 = v17 + v41;
      }
    }
    goto LABEL_9;
  }
  sub_1939D80((int)(uintptr_t)(v51), v2, 0);
LABEL_10:
  sub_1939D80((int)(uintptr_t)(v51), v2, 0);
  g4_std::string::construct_copy(&v52, v51);
  g4_std::string::Destroy(v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), "ChatLib", (int)(uintptr_t)(&v50));
  chatv2::Utils::Log(3, 0, v53, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/TCPClient.cpp", 235, &v52);
  g4_std::string::Destroy(v53);
  g4_std::string::Destroy(&v52);
  v7 = *((uint32_t *)self + 31);
  if ( v7 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
      "px != 0");
    v7 = *((uint32_t *)self + 31);
  }
  G4_VCALL<void>(v7, 20);
  v8 = *((uint32_t *)self + 41);
  v9 = *((uint32_t *)self + 38);
  v10 = v8 - v9;
  if ( v8 > *((uint32_t *)self + 39) )
  {
    *((uint32_t *)self + 37) = *((uint32_t *)self + 45);
    *((uint32_t *)self + 39) = v8;
  }
  v11 = *((uint32_t *)self + 93);
  *((uint32_t *)self + 38) = v10 + v9;
  *((uint32_t *)self + 94) = v11;
  return chatv2::Connectivity::IClient::SetState((int)(uintptr_t)(self), 2);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::Destroy  (binary VA: 0x125f670)
// Original: chatv2::Connectivity::TCPClient::~TCPClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::TCPClient::Destroy(chatv2::Connectivity::TCPClient::Self *self)
{
  volatile int32_t *v1;
  int v2;
  int v3;
  typedef volatile int32_t *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20927C8);
  chatv2::Connectivity::TCPClient::Stop(self);
  if ( *((uint32_t *)self + 93) != 0 )
    opDelete(*((void **)self + 93));
  *((uint32_t *)self + 59) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *((uint32_t *)self + 49) = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy((char *)self + 232);
  *((uint32_t *)self + 49) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 224);
  *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + (uint32_t)(uintptr_t)(self) + 192) = (uint32_t)(uintptr_t)(&off_20AAE80);
  *((uint32_t *)self + 59) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 236);
  *((uint32_t *)self + 36) = ((uint32_t)(uintptr_t)&off_20928A8);
  if ( *((uint32_t *)self + 45) != 0 )
    opDelete(*((void **)self + 45));
  *((uint32_t *)self + 36) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 172);
  *((uint32_t *)self + 34) = 0;
  v1 = *((volatile int32_t **)self + 35);
  *((uint32_t *)self + 35) = 0;
  v4 = v1;
  boost::detail::shared_count::Destroy(&v4);
  boost::detail::shared_count::Destroy((volatile int32_t **)self + 35);
  boost::detail::shared_count::Destroy((volatile int32_t **)self + 32);
  v2 = *((uint32_t *)self + 30);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 29);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  chatv2::Connectivity::IClient::Destroy((chatv2::Connectivity::IClient::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::Destroy_ea125f830  (binary VA: 0x125f830)
// Original: chatv2::Connectivity::TCPClient::~TCPClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::TCPClient::Destroy_ea125f830(chatv2::Connectivity::TCPClient::Self *self)
{
  chatv2::Connectivity::TCPClient::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::OnWrite  (binary VA: 0x125f870)
// Original: chatv2::Connectivity::TCPClient::OnWrite
// ----------------------------------------------------------------------------
int chatv2::Connectivity::TCPClient::OnWrite(chatv2::Connectivity::TCPClient::Self *self, const boost::system::error_code::Self *a2)
{
  int v2;
  int result;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)a2 == 0 || boost::system::error_code::unspecified_bool_true == nullptr )
    return (*(int (**)(chatv2::Connectivity::TCPClient::Self *))(v2 + 28))(self);
  (*(void (**)(chatv2::Connectivity::TCPClient::Self *))(v2 + 4))(self);
  result = *((uint32_t *)self + 21);
  if ( result != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
    return (*(int (**)(char *, const boost::system::error_code::Self *))((result & 0xFFFFFFFE) + 4))(
             (char *)self + 88,
             a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::ReadComplete  (binary VA: 0x125f8f0)
// Original: chatv2::Connectivity::TCPClient::ReadComplete
// ----------------------------------------------------------------------------
bool chatv2::Connectivity::TCPClient::ReadComplete(char **self, const boost::system::error_code::Self *a2, unsigned int a3)
{
  int v3;
  bool v4;
  typedef bool _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v7)) > _g4_s1 ? (11u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 11u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  if ( *(uint32_t *)a2 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
  {
    (*(void (**)(char *))(**((uint32_t **)a2 + 1) + 12))((char *)&v7 + 1);
    g4_std::string::Destroy((char *)&v7 + 1);
    return false;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), *(self + 38), (int)(uintptr_t)(&v7));
    v3 = (int)(uintptr_t)(*(self + 9));
    v4 = false;
    if ( v3 != 0 && boost::function2<bool,std::string &,unsigned int>::dummy::nonnull != nullptr )
      v4 = (*(uint8_t (**)(char *, int *, unsigned int))((v3 & 0xFFFFFFFE) + 4))(
             (char *)self + 40,
             &v8,
             a3) == 0;
    v6 = v4;
    g4_std::string::Destroy(&v8);
    return v6;
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::OnRead  (binary VA: 0x125f9c0)
// Original: chatv2::Connectivity::TCPClient::OnRead
// ----------------------------------------------------------------------------
const boost::system::error_code::Self * chatv2::Connectivity::TCPClient::OnRead(chatv2::Connectivity::TCPClient::Self *self, const boost::system::error_code::Self *a2, signed int a3)
{
  const boost::system::error_code::Self *result;
  signed int v4;
  uint32_t *v5;
  int v6;
  int v7;
  signed int v8;
  uint8_t *v9;
  signed int v10;
  signed int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint8_t *v18;
  uint8_t *v19;
  uint32_t *v20;
  unsigned int v21;
  unsigned int v22;
  uint32_t *v23;
  typedef char *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef signed int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t *_g4_t_v33;
  typedef signed int _g4_t_v34;
  typedef signed int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef signed int _g4_t_v37;
  typedef void (*_g4_t_v38)(char *, int *, char *);
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef uint32_t _g4_t_v42[2];
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t _g4_t_v45[2];
  typedef uint8_t _g4_t_v46[20];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v25)) > _g4_s1 ? (20u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v27)) > _g4_s3 ? (28u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v30)) > _g4_s6 ? (36u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v31)) > _g4_s7 ? (40u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v32)) > _g4_s8 ? (44u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v34)) > _g4_s10 ? (48u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v35)) > _g4_s11 ? (48u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v36)) > _g4_s12 ? (52u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v37)) > _g4_s13 ? (56u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v38)) > _g4_s14 ? (56u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v39)) > _g4_s15 ? (56u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v40)) > _g4_s16 ? (60u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (79u + sizeof(_g4_t_v41)) > _g4_s17 ? (79u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v42)) > _g4_s18 ? (80u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v43)) > _g4_s19 ? (88u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v44)) > _g4_s20 ? (92u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v45)) > _g4_s21 ? (96u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v46)) > _g4_s22 ? (104u + sizeof(_g4_t_v46)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 79u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);

  result = a2;
  v4 = a3;
  if ( *(uint32_t *)a2 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
  {
    v14 = *((uint32_t *)self + 25);
    if ( v14 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
      return (const boost::system::error_code::Self *)(*(int (**)(char *, const boost::system::error_code::Self *))((v14 & 0xFFFFFFFE) + 4))(
                                                  (char *)self + 104,
                                                  a2);
  }
  else
  {
    v5 = v45;
    v6 = *((uint32_t *)self + 41) - *((uint32_t *)self + 38);
    v31 = *((uint32_t *)self + 38);
    v7 = v6;
    v45[0] = v31;
    v37 = v6;
    if ( v6 == 0 )
      v5 = (uint32_t *)(v46);
    v45[1] = v6;
    v8 = a3;
    if ( a3 <= 0 )
    {
      v35 = 0;
      if ( a3 != 0 )
      {
        v36 = -a3;
        v29 = v5;
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          406,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "position_ >= abs_n && \"iterator out of bounds\"");
        v20 = v29;
        if ( v29 != v45 )
        {
          v21 = 0;
          do
          {
            if ( v20 != v45 )
            {
              v22 = *(v20 - 1);
              if ( v22 != 0 )
              {
                v20 -= 2;
                v21 = v22;
              }
              else
              {
                v23 = v20 - 2;
                while ( v23 != v45 )
                {
                  v23 -= 2;
                  if ( v23[1] != 0 )
                  {
                    v20 = v23;
                    v21 = v23[1];
                    break;
                  }
                }
              }
            }
            if ( v36 <= v21 )
            {
              v35 -= v36;
              goto LABEL_15;
            }
            v36 -= v21;
            v35 -= v21;
          }
          while ( v20 != v45 );
          if ( v36 == 0 )
            goto LABEL_15;
        }
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          424,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "abs_n == 0 && \"iterator out of bounds\"");
      }
    }
    else
    {
      if ( v5 == (uint32_t *)v46 )
      {
        v28 = v5;
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          371,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "current_ != end_ && \"iterator out of bounds\"");
        v4 = a3;
        v5 = v28;
      }
      if ( v37 > v4 )
      {
        v34 = 0;
LABEL_14:
        v35 = v8 + v34;
      }
      else
      {
        v9 = (uint8_t *)(v5 + 2);
        v8 = v4 - v37;
        if ( v5 + 2 == (uint32_t *)v46 )
        {
          v35 = v37;
        }
        else
        {
          v32 = v7;
          v10 = v37;
          while ( 1 )
          {
            v11 = v5[3];
            if ( v11 > v8 )
            {
              v34 = v10;
              v7 = v32;
              goto LABEL_14;
            }
            v8 -= v11;
            v10 += v11;
            if ( v9 + 8 == v46 )
              break;
            v5 = (uint32_t *)(v9);
            v9 += 8;
          }
          v35 = v10;
          v7 = v32;
        }
        if ( v8 != 0 )
          __assert2(
            "../../../../../lib/boost/asio/buffers_iterator.hpp",
            394,
            "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence ="
            " boost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
            "n == 0 && \"iterator out of bounds\"");
      }
    }
LABEL_15:
    v12 = (uint8_t *)(v45);
    if ( v37 == 0 )
      v12 = v46;
    if ( v35 != 0 )
    {
      v24 = &v41;
      v30 = (signed int *)sub_1938930(v35, 0);
      v39 = 0;
      v33 = (uint8_t *)(v30 + 3);
      v40 = v7;
      v15 = 0;
      v25 = v12;
      v16 = v31;
      v17 = 0;
      do
      {
        v33[v17] = *(uint8_t *)(v16 + v15);
        if ( v25 == v46 )
        {
          v27 = v15;
          v26 = v16;
          __assert2(
            "../../../../../lib/boost/asio/buffers_iterator.hpp",
            316,
            "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio"
            "::const_buffers_1, ByteType = char]",
            "current_ != end_ && \"iterator out of bounds\"");
          v16 = v26;
          v15 = v27;
        }
        ++v39;
        if ( ++v15 == v40 )
        {
          if ( v25 + 8 == v46 )
          {
            v40 = v15;
            v25 = v46;
            v15 = 0;
          }
          else
          {
            v16 = *((uint32_t *)v25 + 2);
            if ( *((uint32_t *)v25 + 3) != 0 )
            {
              v40 = *((uint32_t *)v25 + 3);
              v25 += 8;
              v15 = 0;
            }
            else
            {
              v18 = v25 + 16;
              do
              {
                v19 = v18;
                if ( v18 == v46 )
                {
                  v15 = 0;
                  v40 = 0;
                  v25 = v46;
                  goto LABEL_35;
                }
                v16 = *(uint32_t *)v18;
                v18 += 8;
              }
              while ( *((uint32_t *)v18 - 1) == 0 );
              v40 = *((uint32_t *)v18 - 1);
              v25 = v19;
              v15 = 0;
            }
          }
        }
LABEL_35:
        v17 = v39;
      }
      while ( v35 != v39 );
      if ( v30 != (int *)(uintptr_t)(dword_213B808) )
      {
        v30[2] = 0;
        *v30 = v35;
        *((uint8_t *)v30 + v35 + 12) = 0;
      }
    }
    else
    {
      v33 = (uint8_t *)(&dword_213B814);
    }
    v42[0] = (uint32_t)(uintptr_t)(v33);
    if ( *((uint32_t *)self + 13) != 0 && boost::function1<void,std::string>::dummy::nonnull != nullptr )
    {
      g4_std::string::construct_copy(&v43, v42);
      v13 = *((uint32_t *)self + 13);
      if ( v13 == 0 )
      {
        sub_1243080(v46);
        std::terminate();
      }
      v38 = *(void (**)(char *, int *, char *))((v13 & 0xFFFFFFFE) + 4);
      g4_std::string::construct_copy(&v44, &v43);
      v38((char *)self + 56, &v44, v24);
      g4_std::string::Destroy(&v44);
      g4_std::string::Destroy(&v43);
    }
    return (g4_std::string::Destroy(v42), (const boost::system::error_code::Self *)0);
  }
  return result;
}



// ============================================================================
// Address:   0x125ff00 (size: 485 bytes)
// Symbol:    _ZN6chatv212Connectivity9TCPClient6DoReadEv
// Demangled: chatv2::Connectivity::TCPClient::DoRead(void)
// ============================================================================
int (*chatv2::Connectivity::TCPClient::DoRead(
        chatv2::Connectivity::TCPClient::Self *self,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        unsigned int a20,
        int a21))(int *, int *, int)
{
  int v21;
  int v22;
  int v23;
  int (*result)(int *, int *, int);
  void (*v25)(int *, int *, int);
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void (*_g4_t_v31)(int, char *, uint32_t *, uint32_t *, int, int, int, uint32_t, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int);
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[3];
  typedef uint32_t _g4_t_v36[3];
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[4];
  typedef uint32_t _g4_t_v41[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v29)) > _g4_s3 ? (8u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v30)) > _g4_s4 ? (8u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v31)) > _g4_s5 ? (12u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v32)) > _g4_s6 ? (16u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v33)) > _g4_s7 ? (20u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v34)) > _g4_s8 ? (24u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v36)) > _g4_s10 ? (40u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v37)) > _g4_s11 ? (52u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v38)) > _g4_s12 ? (56u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v39)) > _g4_s13 ? (60u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v40)) > _g4_s14 ? (64u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v41)) > _g4_s15 ? (80u + sizeof(_g4_t_v41)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);

  v21 = *((uint32_t *)self + 31);
  if ( v21 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
      "px != 0");
    v21 = *((uint32_t *)self + 31);
  }
  v31 = *(void (**)(int, char *, uint32_t *, uint32_t *, int, int, int, uint32_t, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int))(*(uint32_t *)v21 + 4);
  sub_125E160(v36, (int)(uintptr_t)(chatv2::Connectivity::TCPClient::OnRead), 0, (int)(uintptr_t)(self));
  v22 = v36[1];
  v37 = v36[0];
  v39 = v36[2];
  v27 = v36[0];
  v29 = v36[2];
  v41[0] = 0;
  v38 = v36[1];
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v41[1] = v27;
    v41[2] = v22;
    v41[3] = v29;
    v41[0] = (uint32_t)(uintptr_t)((char *)g4_fnstatic_b719f5d536 + 1);
  }
  sub_125E180(v35, 25, 0, (int)(uintptr_t)(self));
  v23 = v35[1];
  v37 = v35[0];
  v39 = v35[2];
  v28 = v35[0];
  v30 = v35[2];
  v40[0] = 0;
  v38 = v35[1];
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v40[1] = v28;
    v40[2] = v23;
    v40[3] = v30;
    v40[0] = (uint32_t)(uintptr_t)((char *)g4_fnstatic_4ebcb74380 + 1);
  }
  v31(
    v21,
    (char *)self + 144,
    v40,
    v41,
    v26,
    v28,
    v30,
    (uint32_t)(uintptr_t)(v31),
    v32,
    v33,
    v34,
    v35[0],
    v35[1],
    v35[2],
    v36[0],
    v36[1],
    v36[2],
    v37,
    v38,
    v39);
  if ( a16 != 0 && (a16 & 1) == 0 )
  {
    v25 = *(void (**)(int *, int *, int))(a16 & 0xFFFFFFFE);
    if ( v25 != nullptr )
      v25(&a17, &a17, 2);
  }
  result = (int (*)(int *, int *, int))a20;
  if ( a20 != 0 && (a20 & 1) == 0 )
  {
    result = *(int (**)(int *, int *, int))(a20 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(int *, int *, int))result(&a21, &a21, 2);
  }
  return result;
}


// ============================================================================
// Address:   0x12600f0 (size: 714 bytes)
// Symbol:    _ZN6chatv212Connectivity9TCPClient7DoWriteERKSs
// Demangled: chatv2::Connectivity::TCPClient::DoWrite(std::string const&)
// ============================================================================
int (*chatv2::Connectivity::TCPClient::DoWrite(
        chatv2::Connectivity::IClient::Self *a1,
        char **a2))(uint32_t *, uint32_t *, int)
{
  int (*result)(uint32_t *, uint32_t *, int);
  void **v3;
  char *v4;
  char *v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  size_t n;
  chatv2::Connectivity::IClient::Self *v13;
  int v14;
  int v15;
  typedef void *_g4_t_src;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t *_g4_t_dest;
  typedef void (*_g4_t_v25)(int, void **, unsigned int *);
  typedef char *_g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef uint32_t _g4_t_v28[3];
  typedef unsigned int _g4_t_v29;
  typedef uint32_t _g4_t_v30[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_src)) > _g4_s0 ? (8u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v20)) > _g4_s4 ? (12u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v21)) > _g4_s5 ? (16u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v23)) > _g4_s7 ? (16u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_dest)) > _g4_s8 ? (20u + sizeof(_g4_t_dest)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v25)) > _g4_s9 ? (20u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v26)) > _g4_s10 ? (24u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v27)) > _g4_s11 ? (28u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v28)) > _g4_s12 ? (52u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v29)) > _g4_s13 ? (64u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v30)) > _g4_s14 ? (68u + sizeof(_g4_t_v30)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);

  result = (int (*)(uint32_t *, uint32_t *, int))chatv2::Connectivity::IClient::GetState(a1);
  if ( result == (int (*)(uint32_t *, uint32_t *, int))((char *)&dword_0 + 1) )
  {
    v3 = (void **)((char *)a1 + 372);
    v4 = *((char **)a1 + 93);
    *((uint32_t *)a1 + 94) = (uint32_t)(uintptr_t)(v4);
    v5 = *a2;
    v6 = *((uint32_t *)*a2 - 3);
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        if ( *((char **)a1 + 95) == v4 )
        {
          v8 = v4 - (char *)((uint8_t *)*v3);
          if ( v8 == -1 )
            sub_1900180("vector::_M_insert_aux");
          v27 = 1;
          if ( v8 != 0 )
          {
            v9 = -1;
            if ( v8 <= 2 * v8 )
              v9 = 2 * v8;
            v27 = v9;
          }
          v21 = v4 - (char *)((uint8_t *)*v3);
          v17 = v6;
          dest = (uint8_t *)opNew(v27);
          v6 = v17;
          if ( &dest[v21] != nullptr )
            dest[v21] = *v5;
          src = *v3;
          v10 = 0;
          if ( v4 != *v3 )
          {
            memmove(dest, src, v4 - (char *)((uint8_t *)src));
            v6 = v17;
            v10 = v4 - (char *)((uint8_t *)src);
          }
          v26 = (char *)(&dest[v10 + 1]);
          v11 = 0;
          n = *((uint32_t *)a1 + 94) - (uint32_t)(uintptr_t)(v4);
          if ( n != 0 )
          {
            v22 = *((uint32_t *)a1 + 94) - (uint32_t)(uintptr_t)(v4);
            v18 = v6;
            memmove(v26, v4, n);
            v6 = v18;
            v11 = v22;
          }
          v4 = &v26[v11];
          if ( *v3 != nullptr )
          {
            v19 = v6;
            opDelete(*v3);
            v6 = v19;
          }
          *((uint32_t *)a1 + 94) = (uint32_t)(uintptr_t)(v4);
          *v3 = dest;
          *((uint32_t *)a1 + 95) = (uint32_t)(uintptr_t)(&dest[v27]);
        }
        else
        {
          v7 = 0;
          if ( v4 != nullptr )
          {
            *v4 = *v5;
            v7 = *((uint32_t *)a1 + 94);
          }
          v4 = (char *)(v7 + 1);
          *((uint32_t *)a1 + 94) = v7 + 1;
        }
        if ( --v6 == 0 )
          break;
        ++v5;
      }
    }
    v13 = a1;
    v14 = *((uint32_t *)a1 + 31);
    if ( v14 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
        "px != 0");
      v13 = a1;
      v14 = *((uint32_t *)a1 + 31);
    }
    v25 = *(void (**)(int, void **, unsigned int *))(*(uint32_t *)v14 + 12);
    sub_125E160(v28, (int)(uintptr_t)(chatv2::Connectivity::TCPClient::OnWrite), 0, (int)(uintptr_t)(v13));
    v15 = v28[1];
    v23 = v28[0];
    v20 = v28[2];
    v29 = 0;
    if ( (uint8_t)sub_59D630() == 0 )
    {
      v30[0] = v23;
      v30[1] = v15;
      v30[2] = v20;
      v29 = (unsigned int)(uintptr_t)(g4_fnstatic_b719f5d536)
          + 1;
    }
    v25(v14, v3, &v29);
    result = (int (*)(uint32_t *, uint32_t *, int))v29;
    if ( v29 != 0 && (v29 & 1) == 0 )
    {
      result = *(int (**)(uint32_t *, uint32_t *, int))(v29 & 0xFFFFFFFE);
      if ( result != nullptr )
        return (int (*)(uint32_t *, uint32_t *, int))result(v30, v30, 2);
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::OnVerifyConnection  (binary VA: 0x12603c0)
// Original: chatv2::Connectivity::TCPClient::OnVerifyConnection
// ----------------------------------------------------------------------------
void chatv2::Connectivity::TCPClient::OnVerifyConnection(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  bool v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int *v14;
  volatile int32_t *v15;
  void (*v16)(uint8_t *, uint8_t *, int);
  char *v17;
  int v18;
  volatile int32_t *v19;
  int v20;
  uint32_t *v21;
  int *v22;
  int *v23;
  int *v24;
  int *v25;
  uint32_t *v26;
  bool v27;
  void (*v28)(int, int *, int *);
  int v29;
  int v30;
  uint8_t v31[7];
  int v32;
  int v33;
  char v34[4];
  int v35;
  char v36[4];
  int v37;
  int v38;
  char v39[4];
  int v40;
  int v41[2];
  volatile int32_t *v42;
  uint32_t *v43;
  volatile int32_t *v44;
  int v45;
  int v46;
  volatile int32_t *v47[4];
  int v48;
  volatile int32_t *v49[2];
  int v50;
  uint8_t v51[12];
  int v52;
  int v53;
  int v54;
  int v55;
  volatile int32_t *v56;
  volatile int32_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  volatile int32_t *v62;
  volatile int32_t *v63;
  int v64;
  int v65;
  int v66;
  int v67;
  volatile int32_t *v68[5];

  v68[4] = (volatile int32_t *)&a1;
  v3 = a2;
  v4 = a1;
  if ( *a2 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31[4]), " On verify connection was successful\n", (int)(uintptr_t)(&v31[1]));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "ChatLib", (int)(uintptr_t)(&v30));
    chatv2::Utils::Log(
      3u,
      0,
      (int)(uintptr_t)(&v32),
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/TCPClient.cpp",
      201,
      (int)(uintptr_t)(&v31[4]));
    g4_std::string::Destroy(&v32);
    g4_std::string::Destroy(&v31[4]);
    chatv2::Connectivity::IClient::SetState((int)(uintptr_t)(v4), 1);
    G4_VCALL<void>(v4, 12);
    return;
  }
  v21 = a3;
  v5 = (int)(uintptr_t)(sub_18F81E0());
  v6 = v21;
  if ( v5 == v3[1] && *v3 == 125 )
  {
    v25 = &v33;
    (*(void (**)(int *))(*(uint32_t *)v5 + 12))(&v33);
    sub_125EEF0((int)(uintptr_t)(v34), v4 + 2, v4 + 29, v4 + 30, &v33);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "ChatLib", (int)(uintptr_t)(v31));
    chatv2::Utils::Log(
      3u,
      0,
      (int)(uintptr_t)(&v35),
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/TCPClient.cpp",
      207,
      (int)(uintptr_t)(v34));
    g4_std::string::Destroy(&v35);
    v17 = v34;
    goto LABEL_31;
  }
  v7 = v21[2];
  v43 = nullptr;
  v44 = nullptr;
  v29 = v7 + 1;
  v21[2] = v7 + 1;
  v8 = (uint32_t *)*v21;
  v45 = 0;
  if ( v8 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = std::vector<b"
      "oost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<b"
      "oost::asio::ip::tcp> > >, typename boost::detail::sp_member_access<T>::type = std::vector<boost::asio::ip::basic_r"
      "esolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp> > >*]",
      "px != 0");
    v6 = v21;
    v8 = (uint32_t *)*v21;
  }
  if ( v29 == 954437177 * ((v8[1] - *v8) >> 2) )
  {
    *v6 = 0;
    v41[1] = (int)(uintptr_t)(v8);
    v19 = (volatile int32_t *)v6[1];
    v6[1] = 0;
    v42 = v19;
    v26 = v6;
    boost::detail::shared_count::Destroy(&v42);
    v6 = v26;
    v26[2] = 0;
    v8 = (uint32_t *)*v26;
  }
  if ( v8 != nullptr )
  {
    v9 = false;
    if ( v8 == v43 )
      v9 = v6[2] == v45;
  }
  else
  {
    v9 = v43 == nullptr;
  }
  v27 = v9;
  v22 = (int *)(v6);
  boost::detail::shared_count::Destroy(&v44);
  v10 = v3[1];
  if ( v27 )
  {
    v25 = &v40;
    (*(void (**)(int *))(*(uint32_t *)v10 + 12))(&v40);
    sub_125EEF0((int)(uintptr_t)(v39), v4 + 2, v4 + 29, v4 + 30, &v40);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v41), "ChatLib", (int)(uintptr_t)(&v31[3]));
    chatv2::Utils::Log(
      3u,
      0,
      (int)(uintptr_t)(v41),
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/TCPClient.cpp",
      221,
      (int)(uintptr_t)(v39));
    g4_std::string::Destroy(v41);
    v17 = v39;
LABEL_31:
    g4_std::string::Destroy(v17);
    g4_std::string::Destroy(v25);
    v18 = v4[17];
    if ( v18 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
      (*(void (**)(uint32_t *, uint32_t *))((v18 & 0xFFFFFFFE) + 4))(v4 + 18, v3);
    return;
  }
  (*(void (**)(int *))(*(uint32_t *)v10 + 12))(&v37);
  sub_125EEF0((int)(uintptr_t)(v36), v4 + 2, v4 + 29, v4 + 30, &v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "ChatLib", (int)(uintptr_t)(&v31[2]));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v38),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/TCPClient.cpp",
    214,
    (int)(uintptr_t)(v36));
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(v36);
  g4_std::string::Destroy(&v37);
  v11 = v4[31];
  v12 = v22;
  if ( v11 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
      "px != 0");
    v11 = v4[31];
    v12 = v22;
  }
  v23 = v12;
  G4_VCALL<void>(v11, 20);
  v13 = v4[31];
  v14 = v23;
  v20 = v13;
  if ( v13 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
      "px != 0");
    v14 = v23;
    v20 = v4[31];
    v13 = v20;
  }
  v28 = *(void (**)(int, int *, int *))(*(uint32_t *)v13 + 16);
  v48 = *v14;
  v49[0] = (volatile int32_t *)v14[1];
  if ( v49[0] != nullptr )
    __sync_add_and_fetch(v49[0] + 1, 1);
  v49[1] = (volatile int32_t *)v14[2];
  v24 = v14;
  sub_125F550(&v58, (int)chatv2::Connectivity::TCPClient::OnConnect, 0, (int)(uintptr_t)(v4), &v48);
  v52 = v58;
  v53 = v59;
  v54 = v60;
  v55 = v61;
  v56 = v62;
  if ( v62 != nullptr )
  {
    __sync_add_and_fetch(v62 + 1, 1);
    v64 = v52;
    v15 = v63;
    v66 = v54;
    v57 = v63;
    v50 = 0;
    v65 = v53;
    v67 = v55;
    v68[0] = v56;
    if ( v56 != nullptr )
    {
      __sync_add_and_fetch(v56 + 1, 1);
      v15 = v57;
    }
  }
  else
  {
    v15 = v63;
    v65 = v59;
    v57 = v63;
    v50 = 0;
    v64 = v58;
    v66 = v60;
    v67 = v61;
    v68[0] = nullptr;
  }
  v68[1] = v15;
  boost::function1<void,boost::system::error_code::Self const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,chatv2::Connectivity::TCPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<chatv2::Connectivity::TCPClient::Self*>,boost::arg<1>,boost::_bi::value<boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>>>>(
    &v50,
    &v64);
  boost::detail::shared_count::Destroy(v68);
  boost::detail::shared_count::Destroy(&v56);
  v46 = *v24;
  v47[0] = (volatile int32_t *)v24[1];
  if ( v47[0] != nullptr )
    __sync_add_and_fetch(v47[0] + 1, 1);
  v47[1] = (volatile int32_t *)v24[2];
  v28(v20, &v46, &v50);
  boost::detail::shared_count::Destroy(v47);
  if ( v50 != 0 )
  {
    if ( (v50 & 1) == 0 )
    {
      v16 = *(void (**)(uint8_t *, uint8_t *, int))(v50 & 0xFFFFFFFE);
      if ( v16 != nullptr )
        v16(v51, v51, 2);
    }
    v50 = 0;
  }
  boost::detail::shared_count::Destroy(&v62);
  boost::detail::shared_count::Destroy(v49);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::Construct  (binary VA: 0x1261230)
// Original: chatv2::Connectivity::TCPClient::TCPClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::TCPClient::Construct(int a1, int a2, boost::asio::io_service *a3, uint32_t *a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9, int a10, int a11, uint8_t *a12, volatile int32_t *a13)
{
  int v13;
  int v14;
  int v15;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  volatile int32_t *v19;
  uint8_t *v20;
  volatile int32_t *v21;
  char *v22;
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
  int v33;
  int v34;
  int v35;
  int v36;
  uint8_t *v37;

  chatv2::Connectivity::IClient::Construct((uint32_t *)a1, a2);
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20927C8);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_asio_resolver_basic_io_object_construct(
    (void *)(a1 + 132),
    a3);
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 144) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  sub_1903A70(a1 + 172);
  *(uint32_t *)(a1 + 176) = -1;
  *(uint32_t *)(a1 + 144) = ((uint32_t)(uintptr_t)&off_20928A8);
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  sub_125E1C0((char *)(a1 + 180), 128);
  v13 = *(uint32_t *)(a1 + 180);
  *(uint32_t *)(a1 + 148) = v13;
  *(uint32_t *)(a1 + 152) = v13;
  *(uint32_t *)(a1 + 156) = v13;
  *(uint32_t *)(a1 + 164) = v13;
  *(uint32_t *)(a1 + 160) = v13;
  *(uint32_t *)(a1 + 168) = v13 + 128;
  sub_1900810(a1 + 236);
  *(uint32_t *)(a1 + 348) = 0;
  *(uint32_t *)(a1 + 236) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(uint8_t *)(a1 + 352) = 0;
  *(uint8_t *)(a1 + 353) = 0;
  *(uint32_t *)(a1 + 356) = 0;
  *(uint32_t *)(a1 + 360) = 0;
  *(uint32_t *)(a1 + 192) = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)(a1 + 364) = 0;
  *(uint32_t *)(a1 + 368) = 0;
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + a1 + 192) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0(*(uint32_t *)(*(uint32_t *)(a1 + 192) - 12) + a1 + 192, 0);
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 216) = 0;
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)(a1 + 236) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)(a1 + 192) = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 196) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(a1 + 224);
  *(uint32_t *)(a1 + 232) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 228) = 16;
  *(uint32_t *)(a1 + 196) = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_19119D0(a1 + 236, a1 + 196);
  *(uint32_t *)(a1 + 372) = 0;
  *(uint32_t *)(a1 + 376) = 0;
  *(uint32_t *)(a1 + 380) = 0;
  v22 = (char *)opNew(0x800u);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(v22);
  *(uint32_t *)(a1 + 380) = (uint32_t)(uintptr_t)(v22 + 2048);
  *(uint32_t *)(a1 + 376) = (uint32_t)(uintptr_t)(v22);
  memset(v22, 0, 0x800u);
  *(uint32_t *)(a1 + 376) = *(uint32_t *)(a1 + 380);
  SSL_CTX_ctrl(*a4, 32, -2147463169, 0);
  v14 = opNew(0xB4u);
  *(uint32_t *)(v14 + 4) = 1;
  *(uint32_t *)(v14 + 8) = 1;
  *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_20928E8);
  v15 = *(uint32_t *)v14;
  *(uint32_t *)(v14 + 12) = 0;
  *(uint8_t *)(v14 + 16) = 0;
  v16 = (uint8_t *)(*(int (**)(int, int, int, int, int, int, int, int (**)(int), int, int, int, int, uint32_t, int, int, int, int, int, int, int))(v15 + 20))(
                   v14,
                   v23,
                   v24,
                   v25,
                   v26,
                   a1 + 196,
                   a1 + 236,
                   (int (**)(int))(uintptr_t)(&off_20AB2C8),
                   v27,
                   v28,
                   v29,
                   v30,
                   0,
                   v14,
                   v31,
                   v32,
                   v33,
                   v34,
                   v35,
                   v36);
  v17 = v16 + 4;
  if ( v16 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::SSLSocket::Construct(v17, a3, a4);
    v17 = v16 + 4;
  }
  *v16 = 1;
  v37 = v17;
  a5 = a9;
  if ( a9 != nullptr )
    __sync_add_and_fetch(a9 + 1, 1);
  boost::detail::shared_count::Destroy(&a9);
  v18 = v37;
  v19 = nullptr;
  a12 = v37;
  a13 = a5;
  if ( a5 != nullptr )
  {
    __sync_add_and_fetch(a5 + 1, 1);
    v18 = a12;
    v19 = a13;
  }
  v20 = *(uint8_t **)(a1 + 124);
  *(uint32_t *)(a1 + 124) = (uint32_t)(uintptr_t)(v18);
  a12 = v20;
  v21 = *(volatile int32_t **)(a1 + 128);
  *(uint32_t *)(a1 + 128) = (uint32_t)(uintptr_t)(v19);
  a13 = v21;
  boost::detail::shared_count::Destroy(&a13);
  boost::detail::shared_count::Destroy(&a5);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::Construct  (binary VA: 0x1262020)
// Original: chatv2::Connectivity::TCPClient::TCPClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::TCPClient::Construct(int a1, int a2, boost::asio::io_service *a3, int a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9, int a10, int a11, chatv2::Connectivity::SimpleSocket::Self *a12, volatile int32_t *a13)
{
  int v13;
  int v14;
  int v15;
  uint8_t *v16;
  chatv2::Connectivity::SimpleSocket::Self *v17;
  chatv2::Connectivity::SimpleSocket::Self *v18;
  volatile int32_t *v19;
  chatv2::Connectivity::SimpleSocket::Self *v20;
  volatile int32_t *v21;
  char *v22;
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
  int v33;
  int v34;
  int v35;
  int v36;
  chatv2::Connectivity::SimpleSocket::Self *v37;

  chatv2::Connectivity::IClient::Construct((uint32_t *)a1, a2);
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20927C8);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_asio_resolver_basic_io_object_construct(
    (void *)(a1 + 132),
    a3);
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 144) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  sub_1903A70(a1 + 172);
  *(uint32_t *)(a1 + 176) = -1;
  *(uint32_t *)(a1 + 144) = ((uint32_t)(uintptr_t)&off_20928A8);
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  sub_125E1C0((char *)(a1 + 180), 128);
  v13 = *(uint32_t *)(a1 + 180);
  *(uint32_t *)(a1 + 148) = v13;
  *(uint32_t *)(a1 + 152) = v13;
  *(uint32_t *)(a1 + 156) = v13;
  *(uint32_t *)(a1 + 164) = v13;
  *(uint32_t *)(a1 + 160) = v13;
  *(uint32_t *)(a1 + 168) = v13 + 128;
  sub_1900810(a1 + 236);
  *(uint32_t *)(a1 + 348) = 0;
  *(uint32_t *)(a1 + 236) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(uint8_t *)(a1 + 352) = 0;
  *(uint8_t *)(a1 + 353) = 0;
  *(uint32_t *)(a1 + 356) = 0;
  *(uint32_t *)(a1 + 360) = 0;
  *(uint32_t *)(a1 + 192) = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)(a1 + 364) = 0;
  *(uint32_t *)(a1 + 368) = 0;
  *(uint32_t *)((char *)*(&off_20AAE6C - 3) + a1 + 192) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0(*(uint32_t *)(*(uint32_t *)(a1 + 192) - 12) + a1 + 192, 0);
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 216) = 0;
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)(a1 + 236) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)(a1 + 192) = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 196) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(a1 + 224);
  *(uint32_t *)(a1 + 232) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 228) = 16;
  *(uint32_t *)(a1 + 196) = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_19119D0(a1 + 236, a1 + 196);
  *(uint32_t *)(a1 + 372) = 0;
  *(uint32_t *)(a1 + 376) = 0;
  *(uint32_t *)(a1 + 380) = 0;
  v22 = (char *)opNew(0x800u);
  *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(v22);
  *(uint32_t *)(a1 + 380) = (uint32_t)(uintptr_t)(v22 + 2048);
  *(uint32_t *)(a1 + 376) = (uint32_t)(uintptr_t)(v22);
  memset(v22, 0, 0x800u);
  *(uint32_t *)(a1 + 376) = *(uint32_t *)(a1 + 380);
  v14 = opNew(0x2Cu);
  *(uint32_t *)(v14 + 4) = 1;
  *(uint32_t *)(v14 + 8) = 1;
  *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_2092808);
  v15 = *(uint32_t *)v14;
  *(uint32_t *)(v14 + 12) = 0;
  *(uint8_t *)(v14 + 16) = 0;
  v16 = (uint8_t *)(*(int (**)(int, int, int, int, int, int, int, int (**)(int), int, int, int, int, uint32_t, int, int, int, int, int, int, int))(v15 + 20))(
                   v14,
                   v23,
                   v24,
                   v25,
                   v26,
                   a1 + 196,
                   a1 + 236,
                   (int (**)(int))(uintptr_t)(&off_20AB2C8),
                   v27,
                   v28,
                   v29,
                   v30,
                   0,
                   v14,
                   v31,
                   v32,
                   v33,
                   v34,
                   v35,
                   v36);
  v17 = (chatv2::Connectivity::SimpleSocket::Self *)(v16 + 4);
  if ( v16 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::SimpleSocket::Construct(v17, a3);
    v17 = (chatv2::Connectivity::SimpleSocket::Self *)(v16 + 4);
  }
  *v16 = 1;
  v37 = v17;
  a5 = a9;
  if ( a9 != nullptr )
    __sync_add_and_fetch(a9 + 1, 1);
  boost::detail::shared_count::Destroy(&a9);
  v18 = v37;
  v19 = nullptr;
  a12 = v37;
  a13 = a5;
  if ( a5 != nullptr )
  {
    __sync_add_and_fetch(a5 + 1, 1);
    v18 = a12;
    v19 = a13;
  }
  v20 = *(chatv2::Connectivity::SimpleSocket::Self **)(a1 + 124);
  *(uint32_t *)(a1 + 124) = (uint32_t)(uintptr_t)(v18);
  a12 = v20;
  v21 = *(volatile int32_t **)(a1 + 128);
  *(uint32_t *)(a1 + 128) = (uint32_t)(uintptr_t)(v19);
  a13 = v21;
  boost::detail::shared_count::Destroy(&a13);
  boost::detail::shared_count::Destroy(&a5);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::TCPClient::Start  (binary VA: 0x1262410)
// Original: chatv2::Connectivity::TCPClient::Start
// ----------------------------------------------------------------------------
void chatv2::Connectivity::TCPClient::Start(chatv2::Connectivity::IClient::Self *a1, uint32_t *a2)
{
  size_t v2;
  char v3;
  int v4;
  size_t v5;
  uint8_t *v6;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  size_t v15;
  char v16;
  void *v17;
  void *v18;
  unsigned int v19;
  size_t v20;
  void **v21;
  void **v22;
  size_t v23;
  void **v24;
  void **v25;
  size_t v26;
  void **v27;
  void **v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  size_t v34;
  char v35;
  void **v36;
  uint8_t *v37;
  char v38;
  uint8_t *i;
  int v40;
  uint32_t *v41;
  uint32_t *v42;
  int v43;
  int v44;
  typedef uint32_t *_g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef size_t _g4_t_v55;
  typedef const char *_g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef char _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[3];
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef void *_g4_t_src[2];
  typedef size_t _g4_t_v66;
  typedef void *_g4_t_dest[2];
  typedef size_t _g4_t_v68;
  typedef uint32_t _g4_t_v69[3];
  typedef void *_g4_t_v70[2];
  typedef size_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef void *_g4_t_v75[2];
  typedef size_t _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t _g4_t_v78[8];
  typedef int _g4_t_v79;
  typedef uint8_t _g4_t_v80[16];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v45)) > _g4_s0 ? (4u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v46)) > _g4_s1 ? (48u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v47)) > _g4_s2 ? (48u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v48)) > _g4_s3 ? (48u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v49)) > _g4_s4 ? (52u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v50)) > _g4_s5 ? (52u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v51)) > _g4_s6 ? (60u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v52)) > _g4_s7 ? (64u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v53)) > _g4_s8 ? (68u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v54)) > _g4_s9 ? (68u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v55)) > _g4_s10 ? (68u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v56)) > _g4_s11 ? (72u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v57)) > _g4_s12 ? (72u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v58)) > _g4_s13 ? (72u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v59)) > _g4_s14 ? (96u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v60)) > _g4_s15 ? (100u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v61)) > _g4_s16 ? (112u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v62)) > _g4_s17 ? (116u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v63)) > _g4_s18 ? (120u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v64)) > _g4_s19 ? (124u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_src)) > _g4_s20 ? (132u + sizeof(_g4_t_src)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v66)) > _g4_s21 ? (140u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_dest)) > _g4_s22 ? (148u + sizeof(_g4_t_dest)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v68)) > _g4_s23 ? (156u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v69)) > _g4_s24 ? (164u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v70)) > _g4_s25 ? (176u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v71)) > _g4_s26 ? (184u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v72)) > _g4_s27 ? (188u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v73)) > _g4_s28 ? (192u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v74)) > _g4_s29 ? (196u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v75)) > _g4_s30 ? (204u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (212u + sizeof(_g4_t_v76)) > _g4_s31 ? (212u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (216u + sizeof(_g4_t_v77)) > _g4_s32 ? (216u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (220u + sizeof(_g4_t_v78)) > _g4_s33 ? (220u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v79)) > _g4_s34 ? (252u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (256u + sizeof(_g4_t_v80)) > _g4_s35 ? (256u + sizeof(_g4_t_v80)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 96u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 100u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 124u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 148u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 156u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 164u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 176u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 184u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 188u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 196u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 204u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 212u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 216u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 220u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 252u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 256u);

  if ( chatv2::Connectivity::IClient::GetState(a1) != 2 )
    return;
  v2 = 0;
  chatv2::Connectivity::IClient::SetState((int)(uintptr_t)(a1), 0);
  v72 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v72), 0x80u, 0);
  v51 = 0;
  v3 = aTcpclientStart /* " TCPClient started, identifier : {0}, address..." */[0];
  v56 = " TCPClient started, identifier : {0}, address: {1}\n";
  while ( 1 )
  {
    v6 = (uint8_t *)(v56 + 1);
    if ( v3 != 123 )
    {
      v4 = v72;
      v5 = v2 + 1;
      if ( v2 + 1 > *(uint32_t *)(v72 - 12) )
      {
        v49 = v3;
        sub_1939D80((int)(uintptr_t)(&v72), v2 + 65, 0);
        v4 = v72;
        v5 = v2 + 1;
        v3 = v49;
      }
      if ( *(int *)(v4 - 4) >= 0 )
      {
        v50 = v3;
        v46 = v5;
        sub_19397C0(&v72);
        v4 = v72;
        v5 = v46;
        v3 = v50;
      }
      *(uint8_t *)(v4 + v2) = v3;
      ++v56;
      v2 = v5;
      goto LABEL_9;
    }
    v7 = v56[1];
    if ( v7 == 123 )
    {
      v43 = v72;
      if ( v2 + 2 > *(uint32_t *)(v72 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v72), v2 + 66, 0);
        v43 = v72;
      }
      v55 = v2 + 1;
      if ( *(int *)(v43 - 4) >= 0 )
      {
        sub_19397C0(&v72);
        v43 = v72;
      }
      *(uint8_t *)(v43 + v2) = 123;
      v44 = v72;
      if ( *(int *)(v72 - 4) >= 0 )
      {
        sub_19397C0(&v72);
        v44 = v72;
      }
      v56 += 2;
      v2 += 2;
      *(uint8_t *)(v44 + v55) = 123;
      goto LABEL_9;
    }
    if ( v7 == 0 )
      goto LABEL_57;
    v57 = v2;
    v8 = 1;
    v9 = 0;
    while ( 1 )
    {
      v7 = *v6;
      if ( (uint8_t)(*v6 - 48) > 9u )
        break;
      v10 = v8 * v9;
      ++v6;
      v8 *= 10;
      v9 = v10 + v7 - 48;
      if ( *v6 == 0 )
      {
        v11 = v9;
        v7 = 0;
        v2 = v57;
        goto LABEL_17;
      }
    }
    v11 = v9;
    v2 = v57;
    if ( v8 == 1 )
LABEL_57:
      v11 = v51++;
    if ( v7 == 58 )
    {
      v7 = v6[1];
      if ( v7 == 120 || v7 == 88 )
      {
        v7 = v6[2];
        v56 = (const char *)(v6 + 3);
      }
      else
      {
        v56 = (const char *)(v6 + 2);
      }
    }
    else
    {
LABEL_17:
      v56 = (const char *)(v6 + 1);
    }
    if ( v7 != 125 )
      break;
    if ( v11 != 0 )
    {
      if ( v11 == 1 )
      {
        v54 = *(uint32_t *)(*a2 - 12);
        if ( v2 + v54 > *(uint32_t *)(v72 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v72), v2 + v54 + 64, 0);
          v54 = *(uint32_t *)(*a2 - 12);
        }
        if ( v54 != 0 )
        {
          v12 = 0;
          v52 = v2;
          v32 = a2;
          do
          {
            v33 = v72;
            v34 = v12 + v52;
            if ( *(int *)(v72 - 4) >= 0 )
            {
              v48 = v32;
              sub_19397C0(&v72);
              v33 = v72;
              v32 = v48;
            }
            v35 = *(uint8_t *)(*v32 + v12++);
            *(uint8_t *)(v33 + v34) = v35;
          }
          while ( v12 != v54 );
          goto LABEL_27;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(&v72), v2, 0);
      }
LABEL_9:
      v3 = *v56;
      if ( *v56 == 0 )
        goto LABEL_28;
    }
    else
    {
      v53 = *(uint32_t *)(*((uint32_t *)a1 + 2) - 12);
      if ( v2 + v53 > *(uint32_t *)(v72 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v72), v2 + v53 + 64, 0);
        v53 = *(uint32_t *)(*((uint32_t *)a1 + 2) - 12);
      }
      if ( v53 == 0 )
        goto LABEL_9;
      v12 = 0;
      v13 = (uint32_t *)((char *)a1 + 8);
      v52 = v2;
      do
      {
        v14 = v72;
        v15 = v12 + v52;
        if ( *(int *)(v72 - 4) >= 0 )
        {
          v47 = v13;
          sub_19397C0(&v72);
          v14 = v72;
          v13 = v47;
        }
        v16 = *(uint8_t *)(*v13 + v12++);
        *(uint8_t *)(v14 + v15) = v16;
      }
      while ( v12 != v53 );
LABEL_27:
      v2 = v12 + v52;
      v3 = *v56;
      if ( *v56 == 0 )
        goto LABEL_28;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v72), v2, 0);
LABEL_28:
  sub_1939D80((int)(uintptr_t)(&v72), v2, 0);
  g4_std::string::construct_copy(v60, &v72);
  g4_std::string::Destroy(&v72);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "ChatLib", (int)(uintptr_t)(&v59));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v61),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/TCPClient.cpp",
    124,
    (int)(uintptr_t)(v60));
  v17 = (void *)(v61 - 12);
  if ( (uint32_t *)(v61 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v60[0] - 12);
  if ( (uint32_t *)(v60[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  _BitScanReverse(&v19, (char *)src + 1 - (char *)src);
  src[0] = &dword_38 + 2;
  v62 = nullptr;
  v63 = nullptr;
  v64 = 0;
  v66 = 1;
  g4_std::introsort_loop_char_int_ebd26b((char *)src, (char *)src + 1, 2 * (31 - (v19 ^ 0x1F)));
  if ( (char *)src + 1 - (char *)src > 16 )
  {
    v36 = dest;
    g4_std::insertion_sort_char_id_0e6aff((char *)src, (char *)dest);
    do
    {
      v37 = (uint8_t *)(v36);
      v38 = *((uint8_t *)v36 - 1);
      v58 = *(uint8_t *)v36;
      if ( *(char *)v36 < v38 )
      {
        v37 = (uint8_t *)((char *)v36 - 1);
        for ( i = (uint8_t *)(v36); ; i = v37-- )
        {
          *i = v38;
          v38 = *(v37 - 1);
          if ( v58 >= v38 )
            break;
        }
      }
      v36 = (void **)((char *)v36 + 1);
      *v37 = v58;
    }
    while ( v36 != (void **)((char *)src + 1) );
  }
  else
  {
    g4_std::insertion_sort_char_id_0e6aff((char *)src, (char *)src + 1);
  }
  v20 = v66;
  dest[0] = nullptr;
  v68 = v66;
  v21 = dest;
  v22 = src;
  if ( v66 > 8 )
  {
    v21 = (void **)opNewArray(v66);
    dest[0] = v21;
    v22 = (void **)src[0];
    v20 = v68;
  }
  memcpy(v21, v22, v20);
  v23 = v68;
  v70[0] = nullptr;
  v71 = v68;
  v24 = v70;
  v25 = dest;
  if ( v68 > 8 )
  {
    v24 = (void **)opNewArray(v68);
    v70[0] = v24;
    v25 = (void **)dest[0];
    v23 = v71;
  }
  memcpy(v24, v25, v23);
  v26 = v71;
  v75[0] = nullptr;
  v76 = v71;
  if ( v71 > 8 )
  {
    v28 = (void **)opNewArray(v71);
    v75[0] = v28;
    v27 = (void **)v70[0];
    v26 = v76;
  }
  else
  {
    v27 = v70;
    v28 = v75;
  }
  memcpy(v28, v27, v26);
  v77 = 1;
  if ( v71 > 8 && v70[0] != nullptr )
    opDeleteArray(v70[0]);
  sub_1265660(&v62, a2, v75);
  if ( v76 > 8 && v75[0] != nullptr )
    opDeleteArray(v75[0]);
  if ( v68 > 8 && dest[0] != nullptr )
    opDeleteArray(dest[0]);
  if ( v66 > 8 && src[0] != nullptr )
    opDeleteArray(src[0]);
  if ( (unsigned int)((char *)v63 - (char *)v62) <= 7 )
  {
    v72 = 0;
    v73 = (int)(uintptr_t)(sub_18F81E0());
    v73 = (int)(uintptr_t)(sub_18F81E0());
    v72 = 22;
    v40 = *((uint32_t *)a1 + 17);
    if ( v40 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
      (*(void (**)(char *, int *))((v40 & 0xFFFFFFFE) + 4))((char *)a1 + 72, &v72);
    v41 = v63;
    v31 = v62;
    if ( v63 != v62 )
    {
      do
      {
        v42 = (uint32_t *)(*v31 - 12);
        if ( v42 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v31 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v42);
        ++v31;
      }
      while ( v41 != v31 );
LABEL_53:
      v31 = v62;
    }
  }
  else
  {
    g4_std::string::assign_str((char *)a1 + 116, v62);
    g4_std::string::assign_str((char *)a1 + 120, v62 + 1);
    memset(v78, 0, sizeof(v78));
    g4_std::string::construct_copy(&v79, (char *)a1 + 116);
    g4_std::string::construct_copy(v80, (char *)a1 + 120);
    v78[0] = 1024;
    v78[1] = 0;
    v78[2] = 1;
    v78[3] = 6;
    memset(&v78[4], 0, 16);
    sub_125E1A0(v69, (int)chatv2::Connectivity::TCPClient::OnResolve, 0, (int)(uintptr_t)(a1));
    v29 = *((uint32_t *)a1 + 33);
    v72 = v69[0];
    v73 = v69[1];
    v74 = v69[2];
    boost::asio::detail::resolver_service<boost::asio::ip::tcp>::async_resolve<boost::_bi::bind_t<void,boost::_mfi::mf2<void,chatv2::Connectivity::TCPClient::Self,boost::system::error_code::Self const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>,boost::_bi::list3<boost::_bi::value<chatv2::Connectivity::TCPClient::Self*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>>(
      v29 + 20,
      (char *)a1 + 136,
      v78,
      &v72);
    g4_std::string::Destroy(v80);
    g4_std::string::Destroy(&v79);
    v30 = v63;
    v31 = v62;
    if ( v63 != v62 )
    {
      do
      {
        v45 = v31++;
        g4_std::string::Destroy(v45);
      }
      while ( v30 != v31 );
      goto LABEL_53;
    }
  }
  if ( v31 != nullptr )
    opDelete(v31);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::DirectWriteRequest  (binary VA: 0x1273650)
// Original: chatv2::Connectivity::HTTPClient::DirectWriteRequest
// ----------------------------------------------------------------------------
char * chatv2::Connectivity::HTTPClient::DirectWriteRequest(chatv2::Connectivity::IClient::Self *a1, int *a2)
{
  int v2;
  uint32_t *v3;
  char *result;
  char *v5;
  char *v6[4];

  v6[0] = (char *)&dword_213B814;
  v2 = *a2;
  v3 = (uint32_t *)((char *)a1 + 116);
  if ( *a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v3 = (uint32_t *)((char *)a1 + 116);
    v2 = *a2;
  }
  chatv2::Connectivity::HTTPRequest::FillFullRequest(v2, (uint32_t *)(v6), v3);
  chatv2::Connectivity::TCPClient::DoWrite(a1, v6);
  result = v6[0];
  v5 = v6[0] - 12;
  if ( (uint32_t *)v6[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v6[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v5), (char *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::Destroy  (binary VA: 0x1273d10)
// Original: chatv2::Connectivity::HTTPClient::~HTTPClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::Destroy(chatv2::Connectivity::HTTPClient::Self *self)
{
  int v1;
  void *v2;
  void **v3;
  unsigned int v4;
  void *v5;
  typedef g4_int128_t _g4_t_v6;
  typedef int _g4_t_v7[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092A28);
  do
    v1 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 428));
  while ( v1 == 4 );
  if ( v1 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  v7[0] = *((uint32_t *)self + 103);
  v7[1] = *((uint32_t *)self + 104);
  v7[2] = *((uint32_t *)self + 105);
  v7[3] = *((uint32_t *)self + 106);
  v6 = *(g4_int128_t *)((char *)self + 396);
  sub_1273C00((int *)&v6, v7);
  v2 = *((void **)self + 97);
  if ( v2 != nullptr )
  {
    v3 = *((void ***)self + 102);
    v4 = *((uint32_t *)self + 106) + 4;
    if ( v4 > (unsigned int)(uintptr_t)(v3) )
    {
      do
      {
        v5 = *v3++;
        opDelete(v5);
      }
      while ( v4 > (unsigned int)(uintptr_t)(v3) );
      v2 = *((void **)self + 97);
    }
    opDelete(v2);
  }
  chatv2::Connectivity::TCPClient::Destroy((chatv2::Connectivity::TCPClient::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::Destroy_ea1273e30  (binary VA: 0x1273e30)
// Original: chatv2::Connectivity::HTTPClient::~HTTPClient
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::Destroy_ea1273e30(chatv2::Connectivity::HTTPClient::Self *self)
{
  chatv2::Connectivity::HTTPClient::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x1274100 (size: 1916 bytes)
// Symbol:    _ZN6chatv212Connectivity10HTTPClient6DoReadEv
// Demangled: chatv2::Connectivity::HTTPClient::DoRead(void)
// ============================================================================
int (*chatv2::Connectivity::HTTPClient::DoRead(
        chatv2::Connectivity::HTTPClient::Self *self,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        unsigned int a32,
        int a33))(int *, int *, int)
{
  size_t v33;
  char v34;
  int v35;
  size_t v36;
  uint8_t *v37;
  char v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  size_t v46;
  char v47;
  void *v48;
  void *v49;
  void *v50;
  chatv2::Connectivity::HTTPClient::Self *v51;
  int v52;
  int v53;
  int (*result)(int *, int *, int);
  int v55;
  uint32_t *v56;
  int v57;
  size_t v58;
  char v59;
  int v60;
  uint32_t *v61;
  int v62;
  size_t v63;
  char v64;
  int v65;
  int v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef size_t _g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef size_t _g4_t_v86;
  typedef size_t _g4_t_v87;
  typedef const char *_g4_t_v88;
  typedef size_t _g4_t_v89;
  typedef void (*_g4_t_v90)(int, char *, void *, uint32_t *, int, int, int, int, int, int, int, int, int, uint32_t *, uint32_t *, uint32_t *, int, size_t, size_t, uint32_t, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int);
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef uint32_t _g4_t_v95[4];
  typedef uint32_t _g4_t_v96[4];
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef uint32_t _g4_t_v101[7];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v67)) > _g4_s0 ? (4u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v68)) > _g4_s1 ? (8u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v69)) > _g4_s2 ? (12u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v70)) > _g4_s3 ? (16u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v71)) > _g4_s4 ? (20u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v72)) > _g4_s5 ? (24u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v73)) > _g4_s6 ? (28u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v74)) > _g4_s7 ? (32u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v75)) > _g4_s8 ? (32u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v76)) > _g4_s9 ? (32u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v77)) > _g4_s10 ? (32u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v78)) > _g4_s11 ? (32u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v79)) > _g4_s12 ? (36u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v80)) > _g4_s13 ? (36u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v81)) > _g4_s14 ? (36u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v82)) > _g4_s15 ? (40u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v83)) > _g4_s16 ? (44u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v84)) > _g4_s17 ? (48u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v85)) > _g4_s18 ? (52u + sizeof(_g4_t_v85)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v86)) > _g4_s19 ? (56u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v87)) > _g4_s20 ? (60u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v88)) > _g4_s21 ? (64u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v89)) > _g4_s22 ? (64u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v90)) > _g4_s23 ? (64u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v91)) > _g4_s24 ? (68u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v92)) > _g4_s25 ? (72u + sizeof(_g4_t_v92)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v93)) > _g4_s26 ? (76u + sizeof(_g4_t_v93)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v94)) > _g4_s27 ? (80u + sizeof(_g4_t_v94)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v95)) > _g4_s28 ? (84u + sizeof(_g4_t_v95)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v96)) > _g4_s29 ? (100u + sizeof(_g4_t_v96)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v97)) > _g4_s30 ? (116u + sizeof(_g4_t_v97)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v98)) > _g4_s31 ? (120u + sizeof(_g4_t_v98)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v99)) > _g4_s32 ? (124u + sizeof(_g4_t_v99)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v100)) > _g4_s33 ? (128u + sizeof(_g4_t_v100)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v101)) > _g4_s34 ? (132u + sizeof(_g4_t_v101)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 4u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 24u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 36u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 40u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 48u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 64u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 64u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 64u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 68u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 72u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 76u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 80u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 84u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 116u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 120u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 124u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 128u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 132u);

  v33 = 0;
  v84 = (uint32_t *)((char *)self + 120);
  v83 = (uint32_t *)((char *)self + 116);
  v82 = (uint32_t *)((char *)self + 8);
  v97 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v97), 0x80u, 0);
  v85 = 0;
  v34 = aHttpReadIdenti[0];
  v88 = " HTTP Read, identifeir: {0}, host: {1}, m_port: {2}\n";
  while ( 1 )
  {
    v37 = (uint8_t *)(v88 + 1);
    if ( v34 != 123 )
    {
      v35 = v97;
      v36 = v33 + 1;
      if ( v33 + 1 > *(uint32_t *)(v97 - 12) )
      {
        v79 = v34;
        sub_1939D80((int)(uintptr_t)(&v97), v33 + 65, 0);
        v35 = v97;
        v36 = v33 + 1;
        v34 = v79;
      }
      if ( *(int *)(v35 - 4) >= 0 )
      {
        v80 = v34;
        v74 = v36;
        sub_19397C0(&v97);
        v35 = v97;
        v36 = v74;
        v34 = v80;
      }
      *(uint8_t *)(v35 + v33) = v34;
      ++v88;
      v33 = v36;
      goto LABEL_7;
    }
    v38 = v88[1];
    if ( v38 == 123 )
    {
      v65 = v97;
      if ( v33 + 2 > *(uint32_t *)(v97 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33 + 66, 0);
        v65 = v97;
        v87 = v33 + 1;
        if ( *(int *)(v97 - 4) < 0 )
          goto LABEL_67;
      }
      else
      {
        v87 = v33 + 1;
        if ( *(int *)(v97 - 4) < 0 )
        {
LABEL_67:
          *(uint8_t *)(v65 + v33) = 123;
          v66 = v97;
          if ( *(int *)(v97 - 4) >= 0 )
          {
            sub_19397C0(&v97);
            v66 = v97;
          }
          v88 += 2;
          v33 += 2;
          *(uint8_t *)(v66 + v87) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(&v97);
      v65 = v97;
      goto LABEL_67;
    }
    if ( v38 == 0 )
      goto LABEL_41;
    v89 = v33;
    v39 = 1;
    v40 = 0;
    while ( 1 )
    {
      v38 = *v37;
      if ( (uint8_t)(*v37 - 48) > 9u )
        break;
      v41 = v39 * v40;
      ++v37;
      v39 *= 10;
      v40 = v41 + v38 - 48;
      if ( *v37 == 0 )
      {
        v42 = v40;
        v38 = 0;
        v33 = v89;
        goto LABEL_15;
      }
    }
    v42 = v40;
    v33 = v89;
    if ( v39 == 1 )
LABEL_41:
      v42 = v85++;
    if ( v38 == 58 )
    {
      v38 = v37[1];
      if ( v38 == 120 || v38 == 88 )
      {
        v38 = v37[2];
        v88 = (const char *)(v37 + 3);
      }
      else
      {
        v88 = (const char *)(v37 + 2);
      }
    }
    else
    {
LABEL_15:
      v88 = (const char *)(v37 + 1);
    }
    if ( v38 != 125 )
      break;
    if ( v42 == 1 )
    {
      v87 = *(uint32_t *)(*v83 - 12);
      if ( v33 + v87 > *(uint32_t *)(v97 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33 + v87 + 64, 0);
        v87 = *(uint32_t *)(*((uint32_t *)self + 29) - 12);
      }
      if ( v87 != 0 )
      {
        v60 = 0;
        v61 = (uint32_t *)((char *)self + 116);
        v86 = v33;
        do
        {
          v62 = v97;
          v63 = v60 + v86;
          if ( *(int *)(v97 - 4) >= 0 )
          {
            v78 = v61;
            sub_19397C0(&v97);
            v62 = v97;
            v61 = v78;
          }
          v64 = *(uint8_t *)(*v61 + v60++);
          *(uint8_t *)(v62 + v63) = v64;
        }
        while ( v60 != v87 );
        v33 = v60 + v86;
        goto LABEL_27;
      }
      goto LABEL_7;
    }
    if ( v42 != 0 )
    {
      if ( v42 == 2 )
      {
        v87 = *(uint32_t *)(*v84 - 12);
        if ( v33 + v87 > *(uint32_t *)(v97 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v97), v33 + v87 + 64, 0);
          v87 = *(uint32_t *)(*((uint32_t *)self + 30) - 12);
        }
        if ( v87 != 0 )
        {
          v55 = 0;
          v56 = (uint32_t *)((char *)self + 120);
          v86 = v33;
          do
          {
            v57 = v97;
            v58 = v55 + v86;
            if ( *(int *)(v97 - 4) >= 0 )
            {
              v77 = v56;
              sub_19397C0(&v97);
              v57 = v97;
              v56 = v77;
            }
            v59 = *(uint8_t *)(*v56 + v55++);
            *(uint8_t *)(v57 + v58) = v59;
          }
          while ( v55 != v87 );
          v33 = v55 + v86;
          goto LABEL_27;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33, 0);
      }
LABEL_7:
      v34 = *v88;
      if ( *v88 == 0 )
        goto LABEL_28;
    }
    else
    {
      v87 = *(uint32_t *)(*v82 - 12);
      if ( v33 + v87 > *(uint32_t *)(v97 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33 + v87 + 64, 0);
        v87 = *(uint32_t *)(*((uint32_t *)self + 2) - 12);
      }
      if ( v87 == 0 )
        goto LABEL_7;
      v43 = 0;
      v44 = (uint32_t *)((char *)self + 8);
      v86 = v33;
      do
      {
        v45 = v97;
        v46 = v43 + v86;
        if ( *(int *)(v97 - 4) >= 0 )
        {
          v75 = v44;
          sub_19397C0(&v97);
          v45 = v97;
          v44 = v75;
        }
        v47 = *(uint8_t *)(*v44 + v43++);
        *(uint8_t *)(v45 + v46) = v47;
      }
      while ( v43 != v87 );
      v33 = v43 + v86;
LABEL_27:
      v34 = *v88;
      if ( *v88 == 0 )
        goto LABEL_28;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v97), v33, 0);
LABEL_28:
  sub_1939D80((int)(uintptr_t)(&v97), v33, 0);
  g4_std::string::construct_copy(v95, &v97);
  v48 = (void *)(v97 - 12);
  if ( (uint32_t *)(v97 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v48);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v96), "ChatLib", (int)(uintptr_t)(&v94));
  chatv2::Utils::Log(3, 0, v96, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp", 71, v95);
  v49 = (void *)(v96[0] - 12);
  if ( (uint32_t *)(v96[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v96[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v49);
  }
  v50 = (void *)(v95[0] - 12);
  if ( (uint32_t *)(v95[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v95[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v50);
  }
  v51 = self;
  v52 = *((uint32_t *)self + 31);
  if ( v52 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
      "px != 0");
    v51 = self;
    v52 = *((uint32_t *)self + 31);
  }
  v90 = *(void (**)(int, char *, void *, uint32_t *, int, int, int, int, int, int, int, int, int, uint32_t *, uint32_t *, uint32_t *, int, size_t, size_t, uint32_t, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)v52 + 8);
  sub_1273500(chatv2::Connectivity::HTTPClient::ReadStatusLine, 0, v51);
  v53 = v96[2];
  v97 = v96[1];
  v99 = v96[3];
  v81 = v96[1];
  v76 = v96[3];
  v101[0] = 0;
  v98 = v96[2];
  if ( (uint8_t)sub_59D630(&v97) == 0 )
  {
    v101[1] = v81;
    v101[2] = v53;
    v101[3] = v76;
    v101[0] = (uint32_t)(uintptr_t)((char *)g4_fnstatic_febe39a7d7 + 1);
  }
  v90(
    v52,
    (char *)self + 144,
    &chatv2::System::NIX_EOL,
    v101,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v76,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    (uint32_t)(uintptr_t)(v90),
    v91,
    v92,
    v93,
    v94,
    v95[0],
    v95[1],
    v95[2],
    v95[3],
    v96[0],
    v96[1],
    v96[2],
    v96[3],
    v97,
    v98,
    v99,
    v100);
  result = (int (*)(int *, int *, int))a32;
  if ( a32 != 0 && (a32 & 1) == 0 )
  {
    result = *(int (**)(int *, int *, int))(a32 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(int *, int *, int))result(&a33, &a33, 2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::OnReadEnded  (binary VA: 0x1274b00)
// Original: chatv2::Connectivity::HTTPClient::OnReadEnded
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::OnReadEnded(int a1, int *a2)
{
  pthread_mutex_t *v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  volatile int32_t *v20;
  bool v21;
  int v22;
  int v23;
  int v24;
  int *v25;
  volatile int32_t *v26;
  int *v27;
  int v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  volatile int32_t *v41;
  int v42;
  volatile int32_t *v43;
  int v44;
  volatile int32_t *v45;
  int v46;
  volatile int32_t *v47;
  uint32_t v48[5];
  uint32_t v49[5];
  uint32_t v50[5];
  uint32_t v51[8];

  v40 = 0;
  v41 = nullptr;
  v2 = (pthread_mutex_t *)(a1 + 428);
  do
  {
    v3 = pthread_mutex_lock(v2);
    v4 = v3;
  }
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    v32 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v35));
    sub_19042E0(v48, &v36);
    g4_std::string::Destroy(&v36);
    v48[2] = v4;
    v48[3] = v32;
    v48[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v48[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = *(int **)(a1 + 396);
  if ( *(int **)(a1 + 412) != v5 )
  {
    v6 = *v5;
    v7 = (volatile int32_t *)v5[1];
    v8 = nullptr;
    v46 = v6;
    v47 = v7;
    if ( v7 != nullptr )
    {
      __sync_add_and_fetch(v7 + 1, 1);
      v6 = v46;
      v8 = v47;
    }
    v9 = v40;
    v40 = v6;
    v46 = v9;
    v47 = v41;
    v41 = v8;
    boost::detail::shared_count::Destroy(&v47);
    v10 = *(uint32_t *)(a1 + 404);
    v11 = *(uint32_t *)(a1 + 396);
    if ( v11 == v10 - 8 )
    {
      boost::detail::shared_count::Destroy((volatile int32_t **)(v10 - 4));
      opDelete(*(void **)(a1 + 400));
      v29 = (int *)(*(uint32_t *)(a1 + 408) + 4);
      *(uint32_t *)(a1 + 408) = (uint32_t)(uintptr_t)(v29);
      v30 = *v29;
      *(uint32_t *)(a1 + 400) = *v29;
      *(uint32_t *)(a1 + 396) = v30;
      *(uint32_t *)(a1 + 404) = v30 + 512;
    }
    else
    {
      boost::detail::shared_count::Destroy((volatile int32_t **)(v11 + 4));
      *(uint32_t *)(a1 + 396) += 8;
    }
  }
  do
  {
    v12 = pthread_mutex_unlock(v2);
    v13 = v12;
  }
  while ( v12 == 4 );
  if ( v12 != 0 )
  {
    v33 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v35) + 1);
    sub_19042E0(v49, &v37);
    g4_std::string::Destroy(&v37);
    v49[2] = v13;
    v49[3] = v33;
    v49[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v49[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v14 = v40;
  if ( v40 != 0 )
  {
    v42 = *a2;
    v43 = (volatile int32_t *)a2[1];
    if ( v43 != nullptr )
    {
      __sync_add_and_fetch(v43 + 1, 1);
      v14 = v40;
    }
    chatv2::Connectivity::HTTPRequest::OnHTTPResponseReceivedHandler(v14, &v42);
    boost::detail::shared_count::Destroy(&v43);
    if ( *(uint8_t *)(a1 + 384) != 0 )
    {
      v44 = v40;
      v45 = v41;
      if ( v41 != nullptr )
        __sync_add_and_fetch(v41 + 1, 1);
      do
      {
        v15 = pthread_mutex_lock(v2);
        v16 = v15;
      }
      while ( v15 == 4 );
      if ( v15 != 0 )
      {
        v31 = (int)(uintptr_t)(sub_18F81E0());
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v35) + 2);
        sub_19042E0(v50, &v38);
        g4_std::string::Destroy(&v38);
        v50[2] = v16;
        v50[3] = v31;
        v50[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v50[0] = ((uint32_t)(uintptr_t)&off_20495E0);
        std::terminate();
      }
      v17 = a1;
      v18 = *(int **)(a1 + 412);
      if ( v18 == (int *)(*(uint32_t *)(a1 + 420) - 8) )
      {
        v24 = *(uint32_t *)(a1 + 424);
        if ( (unsigned int)(*(uint32_t *)(a1 + 392) - ((v24 - *(uint32_t *)(a1 + 388)) >> 2)) <= 1 )
        {
          g4_std_compat::deque_reallocate_map(
            (std::deque<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *)(a1 + 388),
            1u,
            false);
          v24 = *(uint32_t *)(a1 + 424);
        }
        *(uint32_t *)(v24 + 4) = opNew(0x200u);
        v25 = *(int **)(a1 + 412);
        if ( v25 != nullptr )
        {
          *v25 = v44;
          v26 = v45;
          v21 = v45 == nullptr;
          v25[1] = (int)(uintptr_t)(v45);
          if ( !v21 )
            __sync_add_and_fetch(v26 + 1, 1);
        }
        v27 = (int *)(*(uint32_t *)(a1 + 424) + 4);
        *(uint32_t *)(a1 + 424) = (uint32_t)(uintptr_t)(v27);
        v28 = *v27;
        *(uint32_t *)(a1 + 416) = *v27;
        *(uint32_t *)(a1 + 412) = v28;
        *(uint32_t *)(a1 + 420) = v28 + 512;
      }
      else
      {
        v19 = 0;
        if ( v18 != nullptr )
        {
          *v18 = v44;
          v20 = v45;
          v21 = v45 == nullptr;
          v18[1] = (int)(uintptr_t)(v45);
          if ( !v21 )
          {
            v17 = a1;
            __sync_add_and_fetch(v20 + 1, 1);
          }
          v19 = *(uint32_t *)(v17 + 412);
        }
        *(uint32_t *)(a1 + 412) = v19 + 8;
      }
      do
      {
        v22 = pthread_mutex_unlock(v2);
        v23 = v22;
      }
      while ( v22 == 4 );
      if ( v22 != 0 )
      {
        v34 = (int)(uintptr_t)(sub_18F81E0());
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v35) + 3);
        sub_19042E0(v51, &v39);
        g4_std::string::Destroy(&v39);
        v51[2] = v23;
        v51[3] = v34;
        v51[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v51[0] = ((uint32_t)(uintptr_t)&off_20495E0);
        std::terminate();
      }
      boost::detail::shared_count::Destroy(&v45);
      G4_VCALL<void>(a1, 28);
    }
  }
  boost::detail::shared_count::Destroy(&v41);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::SetContent  (binary VA: 0x1275120)
// Original: chatv2::Connectivity::HTTPClient::SetContent
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPClient::SetContent(uint32_t *a1, int a2)
{
  chatv2::Connectivity::HTTPResponse::Self *v2;
  bool v3;
  int v4;
  chatv2::Connectivity::HTTPResponse::Self **v5;
  int ContentLength;
  chatv2::Connectivity::HTTPResponse::Self **v7;
  int v8;
  int v9;
  chatv2::Connectivity::HTTPResponse::Self **v10;
  chatv2::Connectivity::HTTPResponse::Self *v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  size_t v15;
  char v16;
  int v17;
  size_t v18;
  uint8_t *v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  size_t v27;
  char v28;
  void *v29;
  void *v30;
  void *v31;
  chatv2::Connectivity::HTTPResponse::Self *v32;
  int result;
  char *v34;
  chatv2::Connectivity::HTTPResponse::Self *v35;
  chatv2::Connectivity::HTTPResponse::Self *v36;
  chatv2::Connectivity::HTTPResponse::Self **v37;
  chatv2::Connectivity::HTTPResponse::Self **v38;
  unsigned int v39;
  unsigned int v40;
  chatv2::Connectivity::HTTPResponse::Self **v41;
  int v42;
  int v43;
  typedef size_t _g4_t_v44;
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef chatv2::Connectivity::HTTPResponse::Self **_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v53;
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v54;
  typedef uint8_t *_g4_t_v55;
  typedef size_t _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef size_t _g4_t_v61;
  typedef int _g4_t_v62;
  typedef const char *_g4_t_v63;
  typedef size_t _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef uint32_t _g4_t_v68[4];
  typedef int _g4_t_v69[3];
  typedef int _g4_t_v70;
  typedef uint32_t _g4_t_v71[2];
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v72;
  typedef int _g4_t_v73[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v44)) > _g4_s0 ? (8u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v45)) > _g4_s1 ? (8u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v46)) > _g4_s2 ? (12u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v47)) > _g4_s3 ? (12u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v48)) > _g4_s4 ? (12u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v49)) > _g4_s5 ? (12u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v50)) > _g4_s6 ? (16u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v51)) > _g4_s7 ? (24u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v52)) > _g4_s8 ? (24u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v53)) > _g4_s9 ? (28u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v54)) > _g4_s10 ? (28u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v55)) > _g4_s11 ? (32u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v56)) > _g4_s12 ? (32u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v57)) > _g4_s13 ? (32u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v58)) > _g4_s14 ? (36u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v59)) > _g4_s15 ? (36u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v60)) > _g4_s16 ? (36u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v61)) > _g4_s17 ? (36u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v62)) > _g4_s18 ? (40u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v63)) > _g4_s19 ? (40u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v64)) > _g4_s20 ? (40u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v65)) > _g4_s21 ? (40u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (63u + sizeof(_g4_t_v66)) > _g4_s22 ? (63u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v67)) > _g4_s23 ? (68u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v68)) > _g4_s24 ? (84u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v69)) > _g4_s25 ? (100u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v70)) > _g4_s26 ? (112u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v71)) > _g4_s27 ? (116u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v72)) > _g4_s28 ? (124u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v73)) > _g4_s29 ? (128u + sizeof(_g4_t_v73)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 63u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 124u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 128u);

  v2 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  v3 = *(uint32_t *)a2 == 0;
  v53 = (chatv2::Connectivity::HTTPResponse::Self *)a1[38];
  v62 = a1[41] - (uint32_t)(uintptr_t)(v53);
  v4 = v62;
  v71[0] = (uint32_t)(uintptr_t)(v53);
  v71[1] = v62;
  if ( v3 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v2 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  }
  v5 = (chatv2::Connectivity::HTTPResponse::Self **)v71;
  ContentLength = chatv2::Connectivity::HTTPResponse::GetContentLength(v2);
  if ( v62 == 0 )
    v5 = &v72;
  if ( ContentLength <= 0 )
  {
    v59 = 0;
    if ( ContentLength != 0 )
    {
      v57 = -ContentLength;
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        406,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "position_ >= abs_n && \"iterator out of bounds\"");
      if ( v5 != (chatv2::Connectivity::HTTPResponse::Self **)(uintptr_t)(v71) )
      {
        v39 = 0;
        do
        {
          if ( v5 != (chatv2::Connectivity::HTTPResponse::Self **)(uintptr_t)(v71) )
          {
            v40 = (unsigned int)(uintptr_t)(*(v5 - 1));
            if ( v40 != 0 )
            {
              v5 -= 2;
              v39 = v40;
            }
            else
            {
              v41 = v5 - 2;
              while ( v41 != (chatv2::Connectivity::HTTPResponse::Self **)(uintptr_t)(v71) )
              {
                v41 -= 2;
                if ( v41[1] != nullptr )
                {
                  v5 = v41;
                  v39 = (unsigned int)(uintptr_t)(v41[1]);
                  break;
                }
              }
            }
          }
          if ( v39 >= v57 )
          {
            v4 = v62;
            v59 -= v57;
            goto LABEL_16;
          }
          v57 -= v39;
          v59 -= v39;
        }
        while ( v5 != (chatv2::Connectivity::HTTPResponse::Self **)(uintptr_t)(v71) );
        v4 = v62;
        if ( v57 == 0 )
          goto LABEL_16;
      }
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        424,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "abs_n == 0 && \"iterator out of bounds\"");
    }
  }
  else
  {
    if ( v5 == &v72 )
    {
      v49 = ContentLength;
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        371,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "current_ != end_ && \"iterator out of bounds\"");
      ContentLength = v49;
    }
    if ( ContentLength < v62 )
    {
      v58 = 0;
LABEL_15:
      v59 = ContentLength + v58;
    }
    else
    {
      ContentLength -= v62;
      v7 = v5 + 2;
      if ( v5 + 2 == &v72 )
      {
        v59 = v62;
      }
      else
      {
        v8 = v62;
        while ( 1 )
        {
          v9 = (int)(uintptr_t)(v5[3]);
          if ( v9 > ContentLength )
          {
            v58 = v8;
            v4 = v62;
            goto LABEL_15;
          }
          ContentLength -= v9;
          v8 += v9;
          if ( v7 + 2 == &v72 )
            break;
          v5 = v7;
          v7 += 2;
        }
        v59 = v8;
        v4 = v62;
      }
      if ( ContentLength != 0 )
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          394,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "n == 0 && \"iterator out of bounds\"");
    }
  }
LABEL_16:
  v10 = (chatv2::Connectivity::HTTPResponse::Self **)v71;
  if ( v62 == 0 )
    v10 = &v72;
  if ( v59 == 0 )
  {
    v55 = (uint8_t *)(&dword_213B814);
    goto LABEL_20;
  }
  v52 = (uint32_t *)sub_1938930(v59, 0);
  v65 = 0;
  v55 = (uint8_t *)(v52 + 3);
  v35 = v53;
  v36 = nullptr;
  v50 = v10;
  v54 = (chatv2::Connectivity::HTTPResponse::Self *)v4;
  while ( 1 )
  {
LABEL_72:
    v55[v65] = *((uint8_t *)v36 + (uint32_t)(uintptr_t)(v35));
    if ( v50 == &v72 )
    {
      v48 = v36;
      v45 = v35;
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        316,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio::co"
        "nst_buffers_1, ByteType = char]",
        "current_ != end_ && \"iterator out of bounds\"");
      v35 = v45;
      v36 = v48;
    }
    ++v65;
    v36 = (chatv2::Connectivity::HTTPResponse::Self *)((char *)v36 + 1);
    if ( v36 == v54 )
    {
      if ( v50 + 2 != &v72 )
        break;
      v54 = v36;
      v36 = nullptr;
      v50 = &v72;
    }
LABEL_71:
    if ( v65 == v59 )
      goto LABEL_81;
  }
  v35 = v50[2];
  v36 = v50[3];
  if ( v36 != nullptr )
  {
    v54 = v50[3];
    v50 += 2;
    v36 = nullptr;
    goto LABEL_71;
  }
  v37 = v50 + 4;
  while ( 1 )
  {
    v38 = v37;
    if ( v37 == &v72 )
      break;
    v35 = *v37;
    v37 += 2;
    if ( *(v37 - 1) != nullptr )
    {
      v50 = v38;
      v54 = *(v37 - 1);
      goto LABEL_71;
    }
  }
  v54 = nullptr;
  v50 = &v72;
  if ( v65 != v59 )
    goto LABEL_72;
LABEL_81:
  if ( v52 != dword_213B808 )
  {
    v52[2] = 0;
    *v52 = v65;
    *((uint8_t *)v52 + v65 + 12) = 0;
  }
LABEL_20:
  v67 = (uint32_t *)(v55);
  v11 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v11 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  }
  v12 = chatv2::Connectivity::HTTPResponse::GetContentLength(v11);
  v13 = a1[41];
  if ( a1[39] < v13 )
  {
    a1[37] = a1[45];
    a1[39] = v13;
  }
  v14 = a1[38] + v12;
  if ( v13 < v14 )
    v14 = v13;
  a1[38] = v14;
  v15 = 0;
  v69[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v69), 0x80u, 0);
  v16 = aHttpSetContent /* " HTTP Set content , content: {0}\n" */[0];
  v63 = " HTTP Set content , content: {0}\n";
  v51 = 0;
  while ( 1 )
  {
    v19 = (uint8_t *)(v63 + 1);
    if ( v16 != 123 )
    {
      v17 = v69[0];
      v18 = v15 + 1;
      if ( v15 + 1 > *(uint32_t *)(v69[0] - 12) )
      {
        v46 = v16;
        sub_1939D80((int)(uintptr_t)(v69), v15 + 65, 0);
        v17 = v69[0];
        v18 = v15 + 1;
        v16 = v46;
      }
      if ( *(int *)(v17 - 4) >= 0 )
      {
        v47 = v16;
        v44 = v18;
        sub_19397C0(v69);
        v17 = v69[0];
        v18 = v44;
        v16 = v47;
      }
      *(uint8_t *)(v17 + v15) = v16;
      ++v63;
      v15 = v18;
LABEL_32:
      v16 = *v63;
      if ( *v63 == 0 )
        goto LABEL_51;
      continue;
    }
    v20 = v63[1];
    if ( v20 == 123 )
    {
      v42 = v69[0];
      if ( v15 + 2 > *(uint32_t *)(v69[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v69), v15 + 66, 0);
        v42 = v69[0];
        v61 = v15 + 1;
        if ( *(int *)(v69[0] - 4) < 0 )
          goto LABEL_100;
      }
      else
      {
        v61 = v15 + 1;
        if ( *(int *)(v69[0] - 4) < 0 )
        {
LABEL_100:
          *(uint8_t *)(v42 + v15) = 123;
          v43 = v69[0];
          if ( *(int *)(v69[0] - 4) >= 0 )
          {
            sub_19397C0(v69);
            v43 = v69[0];
          }
          v63 += 2;
          v15 += 2;
          *(uint8_t *)(v43 + v61) = 123;
          goto LABEL_32;
        }
      }
      sub_19397C0(v69);
      v42 = v69[0];
      goto LABEL_100;
    }
    if ( v20 == 0 )
      goto LABEL_61;
    v64 = v15;
    v21 = 1;
    v22 = 0;
    while ( 1 )
    {
      v20 = *v19;
      if ( (uint8_t)(*v19 - 48) > 9u )
        break;
      v23 = v21 * v22;
      ++v19;
      v21 *= 10;
      v22 = v23 + v20 - 48;
      if ( *v19 == 0 )
      {
        v24 = v22;
        v20 = 0;
        v15 = v64;
        goto LABEL_40;
      }
    }
    v24 = v22;
    v15 = v64;
    if ( v21 == 1 )
LABEL_61:
      v24 = v51++;
    if ( v20 == 58 )
    {
      v20 = v19[1];
      if ( v20 == 120 || v20 == 88 )
      {
        v20 = v19[2];
        v63 = (const char *)(v19 + 3);
      }
      else
      {
        v63 = (const char *)(v19 + 2);
      }
    }
    else
    {
LABEL_40:
      v63 = (const char *)(v19 + 1);
    }
    if ( v20 != 125 )
      break;
    if ( v24 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v69), v15, 0);
      goto LABEL_32;
    }
    v60 = *(v67 - 3);
    if ( v15 + v60 > *(uint32_t *)(v69[0] - 12) )
    {
      sub_1939D80((int)(uintptr_t)(v69), v15 + v60 + 64, 0);
      v60 = *(v67 - 3);
    }
    if ( v60 == 0 )
      goto LABEL_32;
    v25 = 0;
    v56 = v15;
    do
    {
      v26 = v69[0];
      v27 = v25 + v56;
      if ( *(int *)(v69[0] - 4) >= 0 )
      {
        sub_19397C0(v69);
        v26 = v69[0];
      }
      v28 = *((uint8_t *)v67 + v25++);
      *(uint8_t *)(v26 + v27) = v28;
    }
    while ( v25 != v60 );
    v15 = v25 + v56;
    v16 = *v63;
    if ( *v63 == 0 )
      goto LABEL_51;
  }
  sub_1939D80((int)(uintptr_t)(v69), v15, 0);
LABEL_51:
  sub_1939D80((int)(uintptr_t)(v69), v15, 0);
  g4_std::string::construct_copy(v68, v69);
  v29 = (void *)(v69[0] - 12);
  if ( (uint32_t *)(v69[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "ChatLib", (int)(uintptr_t)(&v66));
  chatv2::Utils::Log(
    3,
    0,
    &v70,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp",
    200,
    v68);
  v30 = (void *)(v70 - 12);
  if ( (uint32_t *)(v70 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
  v31 = (void *)(v68[0] - 12);
  if ( (uint32_t *)(v68[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  v32 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v32 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  }
  chatv2::Connectivity::HTTPResponse::SetContent((int)(uintptr_t)(v32), (int)(uintptr_t)(&v67));
  v72 = *(chatv2::Connectivity::HTTPResponse::Self **)a2;
  v73[0] = *(uint32_t *)(a2 + 4);
  if ( v73[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v73[0] + 4), 1);
  chatv2::Connectivity::HTTPClient::OnReadEnded((int)(uintptr_t)(a1), (int *)(&v72));
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v73);
  result = (int)(uintptr_t)(v67);
  v34 = (char *)(v67 - 3);
  if ( v67 - 3 != dword_213B808 && __sync_fetch_and_add(v67 - 1, 0xFFFFFFFF) <= 0 )
    return ((g4_std::string::Rep::M_destroy(v34)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::ReadContent  (binary VA: 0x1275b70)
// Original: chatv2::Connectivity::HTTPClient::ReadContent
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::ReadContent(uint32_t *a1, int a2, int a3, int *a4)
{
  int v4;
  void *v5;
  void *v6;
  void *v7;
  int v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[3];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef volatile int32_t *_g4_t_v15[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v13)) > _g4_s4 ? (60u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v14)) > _g4_s5 ? (64u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v15)) > _g4_s6 ? (68u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);

  v15[5] = (volatile int32_t *)&a1;
  v4 = a2;
  v9 = a1;
  if ( *(uint32_t *)a2 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
  {
    (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 4) + 12))(v11);
    sub_1273730(v12, " HTTP ReadContent error , message: {0}\n", v11);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "ChatLib", (int)(uintptr_t)(&v10));
    chatv2::Utils::Log(
      3u,
      0,
      (int)(uintptr_t)(&v13),
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp",
      185,
      (int)(uintptr_t)(v12));
    v5 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = v9[25];
    if ( v8 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
      (*(void (**)(uint32_t *, int))((v8 & 0xFFFFFFFE) + 4))(v9 + 26, v4);
  }
  else
  {
    v14 = *a4;
    v15[0] = (volatile int32_t *)a4[1];
    if ( v15[0] != nullptr )
      __sync_add_and_fetch(v15[0] + 1, 1);
    chatv2::Connectivity::HTTPClient::SetContent(v9, (int)(uintptr_t)(&v14));
    boost::detail::shared_count::Destroy(v15);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::ReadStatusLine  (binary VA: 0x1275d30)
// Original: chatv2::Connectivity::HTTPClient::ReadStatusLine
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::ReadStatusLine(int a1, int a2, int a3, chatv2::Connectivity::HTTPClient::Self *self, const boost::system::error_code::Self *a5)
{
  int v5;
  volatile int32_t v6;
  int v7;
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  char v13;
  int v14;
  void *v15;
  uint32_t *v16;
  void *v17;
  uint32_t *v18;
  void *v19;
  int v20;
  char v21;
  void *v22;
  void *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  void *v28;
  void (*v29)(uint8_t *, uint8_t *, int);
  void *v30;
  uint32_t *v31;
  void *v32;
  int v33;
  chatv2::Connectivity::HTTPResponse::Self *v34;
  int v35;
  void *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  void (*v42)(int, char *, int *, unsigned int *);
  chatv2::Connectivity::HTTPClient::Self *v43;
  uint8_t v44[3];
  uint32_t v45[4];
  uint32_t v46[4];
  uint32_t v47[4];
  chatv2::Connectivity::HTTPResponse::HTTPStatus::Self *v48;
  int v49;
  int v50;
  int v51;
  int v52;
  volatile int32_t *v53[4];
  volatile int32_t *v54;
  int v55;
  volatile int32_t *v56;
  int v57;
  volatile int32_t *v58;
  unsigned int v59;
  uint8_t v60[24];
  int (*v61[4])(int, int, int);
  volatile int32_t *v62;
  int (**v63)(int);
  int v64;
  uint32_t v65[29];
  uint16_t v66[2];
  int v67;
  int v68;
  int v69;
  int v70;
  int (**v71)(int);
  int v72;
  int (**v73)(int);
  uint32_t v74[7];
  uint32_t v75[2];
  uint32_t *v76;
  uint32_t v77[29];
  int16_t v78;
  int v79;
  int v80;
  int v81;
  int v82;
  chatv2::Connectivity::HTTPClient::Self **v83;
  void *v84;
  int v85;
  int v86;
  int v87;
  void *v88;
  void *retaddr;

  if ( *(uint32_t *)a5 == 0 || boost::system::error_code::unspecified_bool_true == nullptr )
  {
    v36 = v88;
    v88 = retaddr;
    v87 = a1;
    v86 = a2;
    v85 = a3;
    v84 = v36;
    v83 = &self;
    v43 = self;
    v53[3] = nullptr;
    v5 = opNew(0x24u);
    *(uint32_t *)(v5 + 4) = 1;
    *(uint32_t *)(v5 + 8) = 1;
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_2092A68);
    v54 = (volatile int32_t *)v5;
    v6 = *(uint32_t *)v5;
    *(uint32_t *)(v5 + 12) = 0;
    *(uint8_t *)(v5 + 16) = 0;
    v7 = (*(int (**)(int))(v6 + 20))(v5);
    v8 = (uint8_t *)v7;
    v9 = v7 + 4;
    if ( v7 != -4 )
      chatv2::Connectivity::HTTPResponse::Construct((chatv2::Connectivity::HTTPResponse::Self *)(v7 + 4));
    *v8 = 1;
    v52 = v9;
    v53[0] = v54;
    if ( v54 != nullptr )
      __sync_add_and_fetch(v54 + 1, 1);
    boost::detail::shared_count::Destroy(&v54);
    sub_1900810(v65);
    v65[28] = 0;
    v66[0] = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v63 = (int (**)(int))(uintptr_t)(&off_20AA52C);
    v65[0] = (uint32_t)(uintptr_t)(&off_20AA540);
    v70 = 0;
    v64 = 0;
    sub_19119D0(v65, (char *)v43 + 144);
    v45[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v11 = (int)(uintptr_t)(*(v63 - 3));
    v12 = *(uint8_t **)((char *)v66 + v11);
    if ( v12 != nullptr )
    {
      if ( v12[28] != 0 )
      {
        v13 = v12[39];
      }
      else
      {
        sub_18FFC70(*(uint32_t *)((char *)v66 + v11));
        v13 = G4_VCALL<int>(v12, 24, 10);
      }
      sub_1905A30(&v63, v45, v13);
      v14 = g4_std_compat::string_find(
              v45,
              chatv2::Connectivity::HTTP_VERSION,
              0,
              *(uint32_t *)(chatv2::Connectivity::HTTP_VERSION - 12));
      if ( v14 == -1 )
      {
        if ( *((uint8_t *)v43 + 384) != 0 )
        {
          v33 = *(uint32_t *)(v45[0] - 12);
          v34 = (chatv2::Connectivity::HTTPResponse::Self *)v52;
          if ( v52 == 0 )
          {
            __assert2(
              "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv"
              "2::Connectivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
              "px != 0");
            v34 = (chatv2::Connectivity::HTTPResponse::Self *)v52;
          }
          chatv2::Connectivity::HTTPResponse::SetContentLength(v34, v33);
          v35 = v52;
          if ( v52 == 0 )
          {
            __assert2(
              "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv"
              "2::Connectivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
              "px != 0");
            v35 = v52;
          }
          chatv2::Connectivity::HTTPResponse::SetContent(v35, (int)(uintptr_t)(v45));
          v57 = v52;
          v58 = v53[0];
          if ( v53[0] != nullptr )
            __sync_add_and_fetch(v53[0] + 1, 1);
          chatv2::Connectivity::HTTPClient::OnReadEnded((int)(uintptr_t)(v43), &v57);
          boost::detail::shared_count::Destroy(&v58);
        }
        goto LABEL_22;
      }
      v38 = v14;
      sub_1900810(v77);
      v77[28] = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v77[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      v82 = 0;
      v71 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
      *(int (***)(int))((char *)&v71 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
      v72 = 0;
      sub_19119D0((char *)&v71 + (uint32_t)(uintptr_t)(*(v71 - 3)), 0);
      v73 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
      *(uint32_t *)((char *)&v74[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
      sub_19119D0((char *)&v74[-1] + (uint32_t)(uintptr_t)(*(v73 - 3)), 0);
      v71 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
      *(int (***)(int))((char *)&v71 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
      memset(&v74[1], 0, 24);
      v71 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
      v77[0] = (uint32_t)(uintptr_t)(&off_20AB014);
      v73 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
      v74[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1903A70(v75);
      v75[1] = 24;
      v74[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v76 = &dword_213B814;
      sub_19119D0(v77, v74);
      if ( (unsigned int)(*(uint32_t *)(chatv2::Connectivity::HTTP_VERSION - 12) + v38) > *(uint32_t *)(v45[0] - 12) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(&v51, v45, *(uint32_t *)(chatv2::Connectivity::HTTP_VERSION - 12) + v38, -1);
      g4_std_compat::ostream_write(&v73, v51, *(uint32_t *)(v51 - 12));
      v15 = (void *)(v51 - 12);
      if ( (uint32_t *)(v51 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      v46[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v16 = (uint32_t *)sub_1915250(&v71, &v48);
      if ( (*((uint8_t *)v16 + *(uint32_t *)(*v16 - 12) + 20) & 5) != 0 )
      {
        v17 = (void *)(v46[0] - 12);
        if ( (uint32_t *)(v46[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v17);
        }
        v71 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
        v77[0] = (uint32_t)(uintptr_t)(&off_20AB014);
        v73 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
        v74[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
        v18 = v76 - 3;
        if ( v76 - 3 != dword_213B808 && __sync_fetch_and_add(v76 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v18);
        v74[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
        sub_1902180(v75);
        v71 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
        *(int (***)(int))((char *)&v71 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
        v73 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
        *(uint32_t *)((char *)&v74[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
        v71 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
        *(int (***)(int))((char *)&v71 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
        v72 = 0;
        v77[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
        sub_1900B90(v77);
LABEL_22:
        v19 = (void *)(v45[0] - 12);
        if ( (uint32_t *)(v45[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v19);
        }
LABEL_23:
        v64 = 0;
        v63 = (int (**)(int))(uintptr_t)(&off_20AA52C);
        v65[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
        sub_1900B90(v65);
        boost::detail::shared_count::Destroy(v53);
        return;
      }
      v20 = *(uint32_t *)((char *)&v77[18] + (uint32_t)(uintptr_t)(*(v71 - 3)));
      if ( v20 != 0 )
      {
        if ( *(uint8_t *)(v20 + 28) != 0 )
        {
          v21 = *(uint8_t *)(v20 + 39);
        }
        else
        {
          v40 = *(uint32_t *)((char *)&v77[18] + (uint32_t)(uintptr_t)(*(v71 - 3)));
          sub_18FFC70(v40);
          v21 = G4_VCALL<int>(v40, 24, 10);
        }
        sub_1905A30(&v71, v46, v21);
        jcore::Format_string_char_62_unsigned_9f54ba(v47);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "ChatLib", (int)(uintptr_t)(v44));
        chatv2::Utils::Log(
          3u,
          0,
          (int)(uintptr_t)(&v50),
          "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp",
          120,
          (int)(uintptr_t)(v47));
        v22 = (void *)(v50 - 12);
        if ( (uint32_t *)(v50 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v22);
        }
        v23 = (void *)(v47[0] - 12);
        if ( (uint32_t *)(v47[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v23);
        }
        LOBYTE(v24) = chatv2::Connectivity::HTTPResponse::HTTPStatus::ToStatusEnum(v48);
        v25 = (uint32_t *)v52;
        if ( v52 == 0 )
        {
          v41 = v24;
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Connectivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
            "px != 0");
          v25 = (uint32_t *)v52;
          v24 = v41;
        }
        chatv2::Connectivity::HTTPResponse::SetStatus(v25, v24);
        v26 = v52;
        if ( v52 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Connectivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
            "px != 0");
          v26 = v52;
        }
        chatv2::Connectivity::HTTPResponse::SetStatusMessage(v26, (int)(uintptr_t)(v46));
        v27 = *((uint32_t *)v43 + 31);
        if ( v27 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Connectivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
            "px != 0");
          v27 = *((uint32_t *)v43 + 31);
        }
        v42 = *(void (**)(int, char *, int *, unsigned int *))(*(uint32_t *)v27 + 8);
        v55 = v52;
        v56 = v53[0];
        if ( v53[0] != nullptr )
          __sync_add_and_fetch(v53[0] + 1, 1);
        v39 = v27;
        sub_1273B00(v61, (int)chatv2::Connectivity::HTTPClient::ReadHeaders, 0, (int)(uintptr_t)(v43), &v55);
        sub_1274880((int (***)(int, int, int))&v59, v61);
        g4_std::string::construct_copy(&v49, &chatv2::System::NIX_EOL);
        g4_std::string::append_str(&v49, &chatv2::System::NIX_EOL);
        v42(v39, (char *)v43 + 144, &v49, &v59);
        v28 = (void *)(v49 - 12);
        if ( (uint32_t *)(v49 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v28);
        }
        if ( v59 != 0 )
        {
          if ( (v59 & 1) == 0 )
          {
            v29 = *(void (**)(uint8_t *, uint8_t *, int))(v59 & 0xFFFFFFFE);
            if ( v29 != nullptr )
              v29(v60, v60, 2);
          }
          v59 = 0;
        }
        boost::detail::shared_count::Destroy(&v62);
        boost::detail::shared_count::Destroy(&v56);
        v30 = (void *)(v46[0] - 12);
        if ( (uint32_t *)(v46[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
        v71 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
        v77[0] = (uint32_t)(uintptr_t)(&off_20AB014);
        v73 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
        v74[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
        v31 = v76 - 3;
        if ( v76 - 3 != dword_213B808 && __sync_fetch_and_add(v76 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v31);
        v74[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
        sub_1902180(v75);
        v71 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
        *(int (***)(int))((char *)&v71 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
        v73 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
        *(uint32_t *)((char *)&v74[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
        v71 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
        *(int (***)(int))((char *)&v71 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
        v72 = 0;
        v77[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
        sub_1900B90(v77);
        v32 = (void *)(v45[0] - 12);
        if ( (uint32_t *)(v45[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v32);
        }
        goto LABEL_23;
      }
    }
    sub_18FFF30(v10);
  }
  v37 = *((uint32_t *)self + 25);
  if ( v37 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
    (*(void (**)(char *, const boost::system::error_code::Self *))((v37 & 0xFFFFFFFE) + 4))((char *)self + 104, a5);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::ClearRequests  (binary VA: 0x1277230)
// Original: chatv2::Connectivity::HTTPClient::ClearRequests
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::ClearRequests(chatv2::Connectivity::HTTPClient::Self *self)
{
  int v1;
  int v2;
  int v3;
  void **v4;
  int *v5;
  void *v6;
  void **v7;
  unsigned int v8;
  void *v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef void **_g4_t_v19;
  typedef uint16_t _g4_t_v20[9];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[4];
  typedef int _g4_t_v24[4];
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26[4];
  typedef uint32_t _g4_t_v27[5];
  typedef uint32_t _g4_t_v28[5];
  typedef uint32_t _g4_t_v29[2];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (46u + sizeof(_g4_t_v20)) > _g4_s8 ? (46u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v21)) > _g4_s9 ? (64u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v22)) > _g4_s10 ? (68u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v23)) > _g4_s11 ? (72u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v24)) > _g4_s12 ? (88u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v25)) > _g4_s13 ? (104u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v26)) > _g4_s14 ? (120u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v27)) > _g4_s15 ? (136u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v28)) > _g4_s16 ? (156u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (176u + sizeof(_g4_t_v29)) > _g4_s17 ? (176u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (184u + sizeof(_g4_t_v30)) > _g4_s18 ? (184u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (188u + sizeof(_g4_t_v31)) > _g4_s19 ? (188u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (192u + sizeof(_g4_t_v32)) > _g4_s20 ? (192u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (196u + sizeof(_g4_t_v33)) > _g4_s21 ? (196u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (200u + sizeof(_g4_t_v34)) > _g4_s22 ? (200u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (204u + sizeof(_g4_t_v35)) > _g4_s23 ? (204u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v36)) > _g4_s24 ? (208u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (212u + sizeof(_g4_t_v37)) > _g4_s25 ? (212u + sizeof(_g4_t_v37)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 46u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 156u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 176u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 184u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 188u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 192u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 196u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 200u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 204u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 208u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 212u);

  *(uint32_t *)&v20[1] = (uint32_t)(uintptr_t)((char *)self + 428);
  do
    v1 = pthread_mutex_lock((pthread_mutex_t *)((char *)self + 428));
  while ( v1 == 4 );
  v2 = v1;
  if ( v1 != 0 )
  {
    v13 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(v20));
    sub_19042E0(v27, &v21);
    g4_std::string::Destroy(&v21);
    v27[2] = v2;
    v27[3] = v13;
    v27[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v27[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  if ( *((uint32_t *)self + 103) == *((uint32_t *)self + 99) )
  {
    g4_noop_dtor((boost::lock_guard<boost::mutex::Self> *)&v20[1]);
  }
  else
  {
    v3 = opNew(0x20u);
    v15 = v3 + 12;
    v4 = (void **)v3;
    v14 = v3 + 16;
    if ( v3 + 12 >= (unsigned int)(v3 + 16) )
    {
      v17 = *(uint32_t *)(v3 + 12);
    }
    else
    {
      v17 = opNew(0x200u);
      v4[3] = (void *)v17;
    }
    v29[1] = 8;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v29[0] = opNew(0x20u);
    v18 = (int *)(v29[0] + 12);
    v16 = v29[0] + 16;
    if ( v29[0] + 12 < (unsigned int)(v29[0] + 16) )
    {
      v5 = (int *)(v29[0] + 12);
      do
        *v5++ = opNew(0x200u);
      while ( v18 + 1 > v5 );
    }
    v33 = (unsigned int)(uintptr_t)(v18);
    v31 = *v18;
    v32 = v31 + 512;
    v37 = v16 - 4;
    v35 = *(uint32_t *)(v16 - 4);
    v34 = v35;
    v30 = v31;
    v36 = v35 + 512;
    g4_std_compat::op_assign(
      (chatv2::Connectivity::HTTPClient::Self *)((char *)self + 388),
      (const std::deque<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *)v29);
    v24[0] = v34;
    v24[1] = v35;
    v24[2] = v36;
    v24[3] = v37;
    v23[0] = v30;
    v23[1] = v31;
    v23[2] = v32;
    v23[3] = v33;
    sub_1273C00(v23, v24);
    v6 = (void *)v29[0];
    if ( v29[0] != 0 )
    {
      v7 = (void **)v33;
      if ( v37 + 4 > v33 )
      {
        v19 = v4;
        v8 = v37 + 4;
        do
        {
          v9 = *v7++;
          opDelete(v9);
        }
        while ( v8 > (unsigned int)(uintptr_t)(v7) );
        v4 = v19;
        v6 = (void *)v29[0];
      }
      opDelete(v6);
    }
    v26[2] = v17 + 512;
    v26[3] = v15;
    v26[0] = v17;
    v26[1] = v17;
    v25[0] = v17;
    v25[1] = v17;
    v25[2] = v17 + 512;
    v25[3] = v15;
    sub_1273C00(v25, v26);
    if ( v4 != nullptr )
    {
      if ( v15 < v14 )
        opDelete(v4[3]);
      opDelete(v4);
    }
    do
      v10 = pthread_mutex_unlock(*(pthread_mutex_t **)&v20[1]);
    while ( v10 == 4 );
    v11 = v10;
    if ( v10 != 0 )
    {
      v12 = (int)(uintptr_t)(sub_18F81E0());
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(v20) + 1);
      sub_19042E0(v28, &v22);
      g4_std::string::Destroy(&v22);
      v28[2] = v11;
      v28[3] = v12;
      v28[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v28[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::OnStartupCompleted  (binary VA: 0x1277670)
// Original: chatv2::Connectivity::HTTPClient::OnStartupCompleted
// ----------------------------------------------------------------------------
int chatv2::Connectivity::HTTPClient::OnStartupCompleted(chatv2::Connectivity::HTTPClient::Self *self)
{
  void *v1;
  void *v2;
  int result;
  void (*v4)(uint32_t *, uint32_t *, int);
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[5];
  typedef unsigned int _g4_t_v8;
  typedef uint32_t _g4_t_v9[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v8)) > _g4_s3 ? (36u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v9)) > _g4_s4 ? (40u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  chatv2::Connectivity::IClient::SetState((int)(uintptr_t)(self), 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), " HTTP StartupCompleted \n", (int)(uintptr_t)(&v5) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "ChatLib", (int)(uintptr_t)(&v5));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(v7),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp",
    37,
    (int)(uintptr_t)(v6));
  v1 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v8 = 0;
  v7[1] = (int)(uintptr_t)(chatv2::Connectivity::HTTPClient::DirectWriteRequest);
  v7[2] = 0;
  v7[3] = (int)(uintptr_t)(self);
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v9[0] = (uint32_t)(uintptr_t)(chatv2::Connectivity::HTTPClient::DirectWriteRequest);
    v9[1] = 0;
    v9[2] = (uint32_t)(uintptr_t)(self);
    v8 = (unsigned int)(uintptr_t)(&g4_fnstatic_46320b0105)
       + 1;
  }
  chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::ForEach((char *)self + 388, &v8);
  if ( v8 != 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      v4 = *(void (**)(uint32_t *, uint32_t *, int))(v8 & 0xFFFFFFFE);
      if ( v4 != nullptr )
        v4(v9, v9, 2);
    }
    v8 = 0;
  }
  result = *((uint32_t *)self + 5);
  if ( result != 0 && boost::function0<void>::dummy::nonnull != nullptr )
    return (*(int (**)(char *))((result & 0xFFFFFFFE) + 4))((char *)self + 24);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::DoWrite  (binary VA: 0x1277840)
// Original: chatv2::Connectivity::HTTPClient::DoWrite
// ----------------------------------------------------------------------------
void chatv2::Connectivity::HTTPClient::DoWrite(int **a1, int *a2)
{
  pthread_mutex_t *v2;
  int v3;
  int v4;
  chatv2::Connectivity::IClient::Self *v5;
  int *v6;
  int v7;
  volatile int32_t *v8;
  bool v9;
  int v10;
  int v11;
  void *v12;
  void *v13;
  int *v14;
  int *v15;
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
  typedef volatile int32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[5];
  typedef uint32_t _g4_t_v32[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v20)) > _g4_s1 ? (0u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v21)) > _g4_s2 ? (14u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v25)) > _g4_s6 ? (28u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v26)) > _g4_s7 ? (32u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v27)) > _g4_s8 ? (36u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v28)) > _g4_s9 ? (40u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v29)) > _g4_s10 ? (52u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v30)) > _g4_s11 ? (56u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v31)) > _g4_s12 ? (60u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v32)) > _g4_s13 ? (80u + sizeof(_g4_t_v32)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 14u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);

  v27 = *a2;
  v28 = (volatile int32_t *)a2[1];
  if ( v28 != nullptr )
    __sync_add_and_fetch(v28 + 1, 1);
  v2 = (pthread_mutex_t *)(a1 + 107);
  do
  {
    v3 = pthread_mutex_lock(v2);
    v4 = v3;
  }
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    v20 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v21));
    sub_19042E0(v31, &v24);
    g4_std::string::Destroy(&v24);
    v31[2] = v4;
    v31[3] = v20;
    v31[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v31[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = (chatv2::Connectivity::IClient::Self *)a1;
  v6 = a1[103];
  if ( v6 == a1[105] - 2 )
  {
    v14 = a1[106];
    if ( (unsigned int)(uintptr_t)(a1[98]) - (v14 - a1[97]) <= 1 )
    {
      g4_std_compat::deque_reallocate_map(
        (std::deque<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *)(a1 + 97),
        1u,
        false);
      v14 = a1[106];
    }
    v14[1] = opNew(0x200u);
    v15 = a1[103];
    if ( v15 != nullptr )
    {
      *v15 = v27;
      v16 = v28;
      v9 = v28 == nullptr;
      v15[1] = (int)(uintptr_t)(v28);
      if ( !v9 )
        __sync_add_and_fetch(v16 + 1, 1);
    }
    v17 = a1[106] + 1;
    a1[106] = v17;
    v18 = (int *)*v17;
    a1[104] = (int *)*v17;
    a1[103] = v18;
    a1[105] = v18 + 128;
  }
  else
  {
    v7 = 0;
    if ( v6 != nullptr )
    {
      *v6 = v27;
      v8 = v28;
      v9 = v28 == nullptr;
      v6[1] = (int)(uintptr_t)(v28);
      if ( !v9 )
      {
        v5 = (chatv2::Connectivity::IClient::Self *)a1;
        __sync_add_and_fetch(v8 + 1, 1);
      }
      v7 = *((uint32_t *)v5 + 103);
    }
    a1[103] = (int *)(v7 + 8);
  }
  do
  {
    v10 = pthread_mutex_unlock(v2);
    v11 = v10;
  }
  while ( v10 == 4 );
  if ( v10 != 0 )
  {
    v19 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v21) + 1);
    sub_19042E0(v32, &v25);
    g4_std::string::Destroy(&v25);
    v32[2] = v11;
    v32[3] = v19;
    v32[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v32[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  boost::detail::shared_count::Destroy(&v28);
  if ( chatv2::Connectivity::IClient::GetState((chatv2::Connectivity::IClient::Self *)a1) == 1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), " HTTP DoWrite \n", (int)(uintptr_t)(&v22) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "ChatLib", (int)(uintptr_t)(&v22));
    chatv2::Utils::Log(
      3u,
      0,
      (int)(uintptr_t)(&v26),
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp",
      64,
      (int)(uintptr_t)(&v23));
    v12 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v29 = *a2;
    v30 = (volatile int32_t *)a2[1];
    if ( v30 != nullptr )
      __sync_add_and_fetch(v30 + 1, 1);
    chatv2::Connectivity::HTTPClient::DirectWriteRequest((chatv2::Connectivity::IClient::Self *)a1, &v29);
    boost::detail::shared_count::Destroy(&v30);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SimpleSocket::VerifyConnection  (binary VA: 0x127ab70)
// Original: chatv2::Connectivity::SimpleSocket::VerifyConnection
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SimpleSocket::VerifyConnection(int a1, int *a2)
{
  int result;
  uint32_t v3[3];

  v3[0] = 0;
  v3[1] = (uint32_t)(uintptr_t)(sub_18F81E0());
  result = *a2;
  if ( *a2 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
    return (*(int (**)(int *, uint32_t *))((result & 0xFFFFFFFE) + 4))(a2 + 1, v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SimpleSocket::Close  (binary VA: 0x127abd0)
// Original: chatv2::Connectivity::SimpleSocket::Close
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SimpleSocket::Close(chatv2::Connectivity::SimpleSocket::Self *self)
{
  void *v1;
  void *v2;
  int v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[2];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v8)) > _g4_s4 ? (36u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v9)) > _g4_s5 ? (44u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v10)) > _g4_s6 ? (48u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  if ( *((uint32_t *)self + 2) != -1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), " SimpleSocket Close \n", (int)(uintptr_t)(&v7) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "ChatLib", (int)(uintptr_t)(&v7));
    chatv2::Utils::Log(
      3,
      0,
      &v9,
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/SimpleSocket.cpp",
      46,
      v8);
    v1 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v1);
    }
    v2 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    sub_18F81E0();
    if ( *((uint32_t *)self + 2) == -1 )
      goto LABEL_7;
    g4_asio_epoll_deregister_descriptor(
      *(void **)(*((uint32_t *)self + 1) + 20),
      *((uint32_t *)self + 2),
      (void *)((char *)self + 16),
      (*((uint8_t *)self + 12) & 0x40) == 0);
    v3 = *((uint32_t *)self + 2);
    if ( v3 == -1 )
      goto LABEL_7;
    *(uint32_t *)__errno() = 0;
    v6 = close(v3);
    v5 = (int)(uintptr_t)(sub_18F81E0());
    v4 = *(uint32_t *)__errno();
    if ( v6 == 0 )
      goto LABEL_7;
    if ( sub_18F81E0() == (int *)(intptr_t)(v5) && v4 == 11 || sub_18F81E0() == (int *)(intptr_t)(v5) && v4 == 11 )
    {
      v10 = 0;
      ioctl(v3, 0x5421u, &v10);
      *((uint8_t *)self + 12) &= 0xFCu;
      *(uint32_t *)__errno() = 0;
      v6 = close(v3);
      sub_18F81E0();
      __errno();
    }
    if ( v6 == 0 )
LABEL_7:
      sub_18F81E0();
    *((uint32_t *)self + 2) = -1;
    *((uint8_t *)self + 12) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SimpleSocket::Construct  (binary VA: 0x127adf0)
// Original: chatv2::Connectivity::SimpleSocket::SimpleSocket
// ----------------------------------------------------------------------------
chatv2::Connectivity::SimpleSocket::Self * chatv2::Connectivity::SimpleSocket::Construct(chatv2::Connectivity::SimpleSocket::Self *self, boost::asio::io_service *a2)
{
  int v2;
  boost::asio::io_service::service *v3;
  void *v4;
  chatv2::Connectivity::SimpleSocket::Self *result;
  boost::asio::io_service::service *v6;
  int v7;
  void *v8;
  int v9;
  boost::asio::io_service *v10;
  boost::asio::io_service::service *v11;
  pthread_mutex_t *mutex;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092AA8);
  v2 = *(uint32_t *)a2;
  mutex = (pthread_mutex_t *)(*(uint32_t *)a2 + 4);
  pthread_mutex_lock(mutex);
  v3 = *(boost::asio::io_service::service **)(v2 + 12);
  if ( v3 != nullptr )
  {
    if ( &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id != nullptr )
    {
      while ( 1 )
      {
        v4 = *((void **)v3 + 2);
        if ( v4 != nullptr
          && v4 == &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id )
        {
          goto LABEL_7;
        }
        v3 = *((boost::asio::io_service::service **)v3 + 4);
        if ( v3 == nullptr )
          goto LABEL_9;
      }
    }
    do
      v3 = *((boost::asio::io_service::service **)v3 + 4);
    while ( v3 != nullptr );
  }
LABEL_9:
  pthread_mutex_unlock(mutex);
  v6 = (boost::asio::io_service::service *)(uintptr_t)g4_asio_create_stream_socket_tcp(*(uint32_t *)(v2 + 8));
  *((uint32_t *)v6 + 1) = 0;
  *((uint32_t *)v6 + 2) = (uint32_t)(uintptr_t)(&boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id);
  v11 = v6;
  pthread_mutex_lock(mutex);
  v7 = *(uint32_t *)(v2 + 12);
  if ( v7 == 0 )
  {
LABEL_17:
    *((uint32_t *)v11 + 4) = v7;
    v3 = v11;
    *(uint32_t *)(v2 + 12) = (uint32_t)(uintptr_t)(v11);
    goto LABEL_7;
  }
  v3 = *(boost::asio::io_service::service **)(v2 + 12);
  if ( &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id == nullptr )
  {
    v9 = *(uint32_t *)(v2 + 12);
    do
      v9 = *(uint32_t *)(v9 + 16);
    while ( v9 != 0 );
    goto LABEL_17;
  }
  while ( 1 )
  {
    v8 = *((void **)v3 + 2);
    if ( v8 != nullptr
      && v8 == &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id )
    {
      break;
    }
    v3 = *((boost::asio::io_service::service **)v3 + 4);
    if ( v3 == nullptr )
      goto LABEL_17;
  }
  G4_VCALL<void>(v11, 4);
LABEL_7:
  result = (chatv2::Connectivity::SimpleSocket::Self *)pthread_mutex_unlock(mutex);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 5) = 2;
  *((uint32_t *)self + 2) = -1;
  *((uint8_t *)self + 12) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SimpleSocket::AsyncConnect  (binary VA: 0x127af10)
// Original: chatv2::Connectivity::SimpleSocket::AsyncConnect
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SimpleSocket::AsyncConnect(int a1, int a2, int a3)
{
  void *v3;
  void *v4;
  uint32_t *v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef struct sockaddr _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v13)) > _g4_s4 ? (40u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v15)) > _g4_s6 ? (48u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), " SimpleSocket AsyncConnect \n", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "ChatLib", (int)(uintptr_t)(&v9));
  chatv2::Utils::Log(
    3,
    0,
    &v11,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/SimpleSocket.cpp",
    56,
    v10);
  v3 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = *(uint32_t **)a2;
  v6 = *(uint32_t *)(a2 + 8);
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = std::vector<boos"
      "t::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boos"
      "t::asio::ip::tcp> > >, typename boost::detail::sp_dereference<T>::type = std::vector<boost::asio::ip::basic_resolv"
      "er_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp> > >&]",
      "px != 0");
    v5 = *(uint32_t **)a2;
  }
  v7 = *v5 + 36 * v6;
  v12 = *(struct sockaddr *)v7;
  v13 = *(uint32_t *)(v7 + 16);
  v14 = *(uint32_t *)(v7 + 20);
  v15 = *(uint32_t *)(v7 + 24);
  return boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::AsyncConnect<boost::function<void(boost::system::error_code::Self const&)>>(
           a1 + 4,
           &v12,
           a3);
}



// ============================================================================
// Address:   0x127b0b0 (size: 488 bytes)
// Symbol:    _ZN6chatv212Connectivity12SimpleSocket10AsyncWriteERSt6vectorIcSaIcEEN5boost8functionIFvRKNS6_6system10error_codeEjEEE
// Demangled: chatv2::Connectivity::SimpleSocket::AsyncWrite(std::vector<char,std::allocator<char>> &,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// ============================================================================
int (*chatv2::Connectivity::SimpleSocket::AsyncWrite(
        int a1,
        int *a2,
        unsigned int *a3))(unsigned int *, unsigned int *, int)
{
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int (*result)(unsigned int *, unsigned int *, int);
  void (*v11)(uint32_t *, uint32_t *, int);
  typedef uint32_t _g4_t_v12[2];
  typedef unsigned int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef uint32_t _g4_t_v23[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v19)) > _g4_s7 ? (56u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v20)) > _g4_s8 ? (60u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v21)) > _g4_s9 ? (64u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v22)) > _g4_s10 ? (68u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v23)) > _g4_s11 ? (72u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);

  v13 = 0;
  v3 = *a2;
  v4 = *a3;
  v5 = a2[1] - *a2;
  if ( *a2 == a2[1] )
    v3 = 0;
  if ( v4 != 0 )
  {
    v13 = *a3;
    if ( (v4 & 1) != 0 )
    {
      v14 = a3[1];
      v6 = a3[3];
      v15 = a3[2];
      v16 = v6;
    }
    else
    {
      (*(void (**)(unsigned int *, unsigned int *, uint32_t))(v4 & 0xFFFFFFFE))(a3 + 1, &v14, 0);
    }
  }
  sub_18F81E0();
  v18 = v3;
  v17 = (uint32_t *)(a1 + 4);
  v19 = v5;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( v13 == 0 )
    goto LABEL_9;
  v22 = v13;
  if ( (v13 & 1) != 0 )
  {
    v23[0] = v14;
    v23[1] = v15;
    v23[2] = v16;
LABEL_9:
    v20 = 1;
    v7 = 0;
    goto LABEL_10;
  }
  (*(void (**)(unsigned int *, uint32_t *, uint32_t))(v13 & 0xFFFFFFFE))(&v14, v23, 0);
  v7 = v21;
  v5 = v19;
  v20 = 1;
  if ( v21 > v19 )
  {
    v8 = 0;
    v9 = 0;
    goto LABEL_12;
  }
LABEL_10:
  v8 = v5 - v7;
  v9 = v7 + v18;
  if ( v8 > 0x10000 )
    v8 = 0x10000;
LABEL_12:
  v12[0] = v9;
  v12[1] = v8;
  boost::asio::stream_socket_service<boost::asio::ip::tcp>::async_send<boost::asio::mutable_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::mutable_buffers_1,boost::asio::detail::transfer_all_t,boost::function<void(boost::system::error_code::Self const&,unsigned int)>>>(
    *v17,
    v17 + 1,
    v12,
    0,
    &v17);
  if ( v22 != 0 )
  {
    if ( (v22 & 1) == 0 )
    {
      v11 = *(void (**)(uint32_t *, uint32_t *, int))(v22 & 0xFFFFFFFE);
      if ( v11 != nullptr )
        v11(v23, v23, 2);
    }
    v22 = 0;
  }
  result = (int (*)(unsigned int *, unsigned int *, int))v13;
  if ( v13 != 0 && (v13 & 1) == 0 )
  {
    result = *(int (**)(unsigned int *, unsigned int *, int))(v13 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(unsigned int *, unsigned int *, int))result(&v14, &v14, 2);
  }
  return result;
}


// ============================================================================
// Address:   0x127b2a0 (size: 461 bytes)
// Symbol:    _ZN6chatv212Connectivity12SimpleSocket14AsyncReadUntilERN5boost4asio15basic_streambufISaIcEEERKSsNS2_8functionIFvRKNS2_6system10error_codeEjEEE
// Demangled: chatv2::Connectivity::SimpleSocket::AsyncReadUntil(boost::asio::basic_streambuf<std::allocator<char>> &,std::string const&,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// ============================================================================
int (*chatv2::Connectivity::SimpleSocket::AsyncReadUntil(
        int a1,
        int a2,
        int a3,
        unsigned int *a4))(unsigned int *, unsigned int *, int)
{
  unsigned int v4;
  void *v5;
  int (*result)(unsigned int *, unsigned int *, int);
  void (*v7)(uint32_t *, uint32_t *, int);
  typedef uint32_t _g4_t_v8[2];
  typedef unsigned int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef uint32_t _g4_t_v13[2];
  typedef uint32_t _g4_t_v14[3];
  typedef unsigned int _g4_t_v15;
  typedef uint32_t _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v14)) > _g4_s6 ? (56u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v15)) > _g4_s7 ? (68u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v16)) > _g4_s8 ? (72u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);

  v9 = 0;
  v4 = *a4;
  if ( *a4 != 0 )
  {
    v9 = *a4;
    if ( (v4 & 1) != 0 )
    {
      v10 = a4[1];
      v11 = a4[2];
      v12 = a4[3];
    }
    else
    {
      (*(void (**)(unsigned int *, unsigned int *, uint32_t))(v4 & 0xFFFFFFFE))(a4 + 1, &v10, 0);
    }
  }
  v8[0] = 0;
  v8[1] = (uint32_t)(uintptr_t)(sub_18F81E0());
  v13[1] = a2;
  v13[0] = a1 + 4;
  g4_std::string::construct_copy(v14, a3);
  v14[1] = 0;
  v14[2] = 0;
  v15 = 0;
  if ( v9 != 0 )
  {
    v15 = v9;
    if ( (v9 & 1) != 0 )
    {
      v16[0] = v10;
      v16[1] = v11;
      v16[2] = v12;
    }
    else
    {
      (*(void (**)(unsigned int *, uint32_t *, uint32_t))(v9 & 0xFFFFFFFE))(&v10, v16, 0);
    }
  }
  boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::function<void(boost::system::error_code::Self const&,unsigned int)>>::opCall(
    v13,
    v8,
    0,
    1);
  if ( v15 != 0 )
  {
    if ( (v15 & 1) == 0 )
    {
      v7 = *(void (**)(uint32_t *, uint32_t *, int))(v15 & 0xFFFFFFFE);
      if ( v7 != nullptr )
        v7(v16, v16, 2);
    }
    v15 = 0;
  }
  v5 = (void *)(v14[0] - 12);
  if ( (uint32_t *)(v14[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  result = (int (*)(unsigned int *, unsigned int *, int))v9;
  if ( v9 != 0 && (v9 & 1) == 0 )
  {
    result = *(int (**)(unsigned int *, unsigned int *, int))(v9 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(unsigned int *, unsigned int *, int))result(&v10, &v10, 2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::ISocketBase::Destroy  (binary VA: 0x127bde0)
// Original: chatv2::Connectivity::ISocketBase::~ISocketBase
// ----------------------------------------------------------------------------
void chatv2::Connectivity::ISocketBase::Destroy(chatv2::Connectivity::ISocketBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092AE8);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::ISocketBase::Destroy_ea127c2b0  (binary VA: 0x127c2b0)
// Original: chatv2::Connectivity::ISocketBase::~ISocketBase
// ----------------------------------------------------------------------------
void chatv2::Connectivity::ISocketBase::Destroy_ea127c2b0(chatv2::Connectivity::ISocketBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092AE8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SimpleSocket::Destroy  (binary VA: 0x127e000)
// Original: chatv2::Connectivity::SimpleSocket::~SimpleSocket
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SimpleSocket::Destroy(chatv2::Connectivity::SimpleSocket::Self *self)
{
  int fd;
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_optval[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_optval)) > _g4_s3 ? (24u + sizeof(_g4_t_optval)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 24u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092AA8);
  if ( *((uint32_t *)self + 2) != -1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *(void **)(*((uint32_t *)self + 1) + 20),
      *((uint32_t *)self + 2),
      (void *)((pthread_mutex_t **)self + 4),
      (*((uint8_t *)self + 12) & 0x40) == 0);
    sub_18F81E0();
    fd = *((uint32_t *)self + 2);
    if ( fd == -1 )
      goto LABEL_5;
    if ( (*((uint8_t *)self + 12) & 8) != 0 )
    {
      optval[0] = 0;
      optval[1] = 0;
      sub_18F81E0();
      *((uint8_t *)self + 12) |= 8u;
      *(uint32_t *)__errno() = 0;
      v3 = setsockopt(fd, 1, 13, optval, 8u);
      sub_18F81E0();
      __errno();
      if ( v3 == 0 )
        sub_18F81E0();
    }
    *(uint32_t *)__errno() = 0;
    v2 = close(fd);
    v4 = (int)(uintptr_t)(sub_18F81E0());
    v5 = *(uint32_t *)__errno();
    if ( v2 == 0 )
      goto LABEL_5;
    if ( sub_18F81E0() == (int *)(intptr_t)(v4) && v5 == 11 || sub_18F81E0() == (int *)(intptr_t)(v4) && v5 == 11 )
    {
      v6 = 0;
      ioctl(fd, 0x5421u, &v6);
      *((uint8_t *)self + 12) &= 0xFCu;
      *(uint32_t *)__errno() = 0;
      v2 = close(fd);
      sub_18F81E0();
      __errno();
    }
    if ( v2 == 0 )
LABEL_5:
      sub_18F81E0();
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092AE8);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SimpleSocket::Destroy_ea127e1d0  (binary VA: 0x127e1d0)
// Original: chatv2::Connectivity::SimpleSocket::~SimpleSocket
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SimpleSocket::Destroy_ea127e1d0(chatv2::Connectivity::SimpleSocket::Self *self)
{
  int fd;
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_optval[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_optval)) > _g4_s3 ? (24u + sizeof(_g4_t_optval)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 24u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092AA8);
  if ( *((uint32_t *)self + 2) != -1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *(void **)(*((uint32_t *)self + 1) + 20),
      *((uint32_t *)self + 2),
      (void *)((pthread_mutex_t **)self + 4),
      (*((uint8_t *)self + 12) & 0x40) == 0);
    sub_18F81E0();
    fd = *((uint32_t *)self + 2);
    if ( fd == -1 )
      goto LABEL_5;
    if ( (*((uint8_t *)self + 12) & 8) != 0 )
    {
      optval[0] = 0;
      optval[1] = 0;
      sub_18F81E0();
      *((uint8_t *)self + 12) |= 8u;
      *(uint32_t *)__errno() = 0;
      v3 = setsockopt(fd, 1, 13, optval, 8u);
      sub_18F81E0();
      __errno();
      if ( v3 == 0 )
        sub_18F81E0();
    }
    *(uint32_t *)__errno() = 0;
    v2 = close(fd);
    v4 = (int)(uintptr_t)(sub_18F81E0());
    v5 = *(uint32_t *)__errno();
    if ( v2 == 0 )
      goto LABEL_5;
    if ( sub_18F81E0() == (int *)(intptr_t)(v4) && v5 == 11 || sub_18F81E0() == (int *)(intptr_t)(v4) && v5 == 11 )
    {
      v6 = 0;
      ioctl(fd, 0x5421u, &v6);
      *((uint8_t *)self + 12) &= 0xFCu;
      *(uint32_t *)__errno() = 0;
      v2 = close(fd);
      sub_18F81E0();
      __errno();
    }
    if ( v2 == 0 )
LABEL_5:
      sub_18F81E0();
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092AE8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::Close  (binary VA: 0x12821b0)
// Original: chatv2::Connectivity::SSLSocket::Close
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SSLSocket::Close(chatv2::Connectivity::SSLSocket::Self *self)
{
  int result;
  int fd;
  int v3;
  int v4;
  int v5;
  int v6;
  typedef boost::system::error_code::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11[4];
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v8)) > _g4_s1 ? (30u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  result = *((uint32_t *)self + 39);
  if ( *(uint32_t *)(result + 4) != -1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), " SSLSocket Close \n", (int)(uintptr_t)(&v8) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "ChatLib", (int)(uintptr_t)(&v8));
    chatv2::Utils::Log(
      3,
      0,
      &v10,
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/SSLSocket.cpp",
      (char *)off_3C + 1,
      &v9);
    g4_std::string::Destroy(&v10);
    g4_std::string::Destroy(&v9);
    *(uint32_t *)v11 = 0;
    v12 = (int)(uintptr_t)(sub_18F81E0());
    fd = *(uint32_t *)(*((uint32_t *)self + 39) + 4);
    if ( fd == -1 )
    {
      v12 = (int)(uintptr_t)(sub_18F81E0());
      *(uint32_t *)v11 = 9;
    }
    else
    {
      *(uint32_t *)__errno() = 0;
      v3 = shutdown(fd, 2);
      v4 = (int)(uintptr_t)(sub_18F81E0());
      *(uint32_t *)v11 = *(uint32_t *)__errno();
      v12 = v4;
      if ( v3 == 0 )
      {
        v12 = (int)(uintptr_t)(sub_18F81E0());
        *(uint32_t *)v11 = 0;
      }
    }
    v5 = *((uint32_t *)self + 39);
    v6 = -1;
    if ( *(uint32_t *)(v5 + 4) != -1 )
    {
      g4_asio_epoll_deregister_descriptor(
        *(void **)(*(uint32_t *)v5 + 20),
        *(uint32_t *)(v5 + 4),
        (void *)(v5 + 12),
        (*(uint8_t *)(v5 + 8) & 0x40) == 0);
      v6 = *(uint32_t *)(v5 + 4);
    }
    result = g4_asio_socket_ops_close(
               0,
               0,
               (void *)(uintptr_t)v6,
               (uint8_t *)(v5 + 8),
               nullptr,
               (uint32_t *)v11);
    *(uint32_t *)(v5 + 4) = -1;
    *(uint8_t *)(v5 + 8) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::VerifyCertificate  (binary VA: 0x1282370)
// Original: chatv2::Connectivity::SSLSocket::VerifyCertificate
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SSLSocket::VerifyCertificate(int a1, int a2, uint32_t *a3)
{
  int current_cert;
  int subject_name;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_dest[268];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (7u + sizeof(_g4_t_v6)) > _g4_s0 ? (7u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_dest)) > _g4_s2 ? (16u + sizeof(_g4_t_dest)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 7u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);

  current_cert = X509_STORE_CTX_get_current_cert(*a3);
  subject_name = X509_get_subject_name(current_cert);
  X509_NAME_oneline(subject_name, dest, 0x100u);
  jcore::Format_std_string_char_39_char_99f235((char *)&v6 + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "ChatLib", (int)(uintptr_t)(&v6));
  chatv2::Utils::Log(
    3,
    0,
    &v7,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/SSLSocket.cpp",
    26,
    (char *)&v6 + 1);
  g4_std::string::Destroy(&v7);
  g4_std::string::Destroy((char *)&v6 + 1);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::Construct  (binary VA: 0x1282a10)
// Original: chatv2::Connectivity::SSLSocket::SSLSocket
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SSLSocket::Construct(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int verify_callback;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int verify_mode;
  int v13;
  int v14;

  *a1 = (uint32_t)(uintptr_t)(&off_2092B88);
  boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>>::Construct<boost::asio::io_service>(
    a1 + 1,
    a2,
    a3);
  a1[39] = (uint32_t)(uintptr_t)(a1 + 1);
  sub_18F81E0(v4, v3);
  verify_callback = SSL_get_verify_callback(a1[6]);
  SSL_set_verify(a1[6], 0, verify_callback);
  sub_18F81E0(v7, v6);
  sub_18F81E0(v9, v8);
  v10 = (uint32_t *)opNew(0x10u);
  *v10 = ((uint32_t)(uintptr_t)&off_2092BD0);
  v10[1] = 33;
  v10[2] = 0;
  v10[3] = (uint32_t)(uintptr_t)(a1);
  if ( SSL_get_ex_data(a1[6], 0) != 0 )
  {
    v11 = SSL_get_ex_data(a1[6], 0);
    if ( v11 != 0 )
      G4_VCALL<void>(v11, 4);
  }
  SSL_set_ex_data(a1[6], 0, v10);
  verify_mode = SSL_get_verify_mode(a1[6]);
  SSL_set_verify(a1[6], verify_mode, boost::asio::ssl::detail::engine::verify_callback_function);
  return (int)(uintptr_t)(sub_18F81E0(v14, v13));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::AsyncConnect  (binary VA: 0x1282b40)
// Original: chatv2::Connectivity::SSLSocket::AsyncConnect
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SSLSocket::AsyncConnect(int a1, int a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef struct sockaddr _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (10u + sizeof(_g4_t_v7)) > _g4_s0 ? (10u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v11)) > _g4_s4 ? (36u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  v3 = *(uint32_t **)a2;
  v4 = *(uint32_t *)(a2 + 8);
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = std::vector<boos"
      "t::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boos"
      "t::asio::ip::tcp> > >, typename boost::detail::sp_dereference<T>::type = std::vector<boost::asio::ip::basic_resolv"
      "er_entry<boost::asio::ip::tcp>, std::allocator<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp> > >&]",
      "px != 0");
    v3 = *(uint32_t **)a2;
  }
  v5 = *v3 + 36 * v4;
  v10 = *(struct sockaddr *)v5;
  v11 = *(uint32_t *)(v5 + 16);
  v12 = *(uint32_t *)(v5 + 20);
  v13 = *(uint32_t *)(v5 + 24);
  boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::AsyncConnect<boost::function<void(boost::system::error_code::Self const&)>>(
    *(int **)(a1 + 156),
    &v10,
    a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), " SSLSocket AsyncConnect \n", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "ChatLib", (int)(uintptr_t)(&v7));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v9),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/SSLSocket.cpp",
    72,
    (int)(uintptr_t)(&v8));
  g4_std::string::Destroy(&v9);
  return ((g4_std::string::Destroy(&v8)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::VerifyConnection  (binary VA: 0x1282c80)
// Original: chatv2::Connectivity::SSLSocket::VerifyConnection
// ----------------------------------------------------------------------------
int chatv2::Connectivity::SSLSocket::VerifyConnection(int a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void (*v8)(int *, int *, int);
  void (*v10)(uint32_t *, uint32_t *, int);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[8];
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[6];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (14u + sizeof(_g4_t_v11)) > _g4_s0 ? (14u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v18)) > _g4_s7 ? (56u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v19)) > _g4_s8 ? (88u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v20)) > _g4_s9 ? (92u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 14u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);

  v3 = a2;
  v14 = 0;
  v4 = *a2;
  if ( *a2 != 0 )
  {
    v14 = *a2;
    if ( (v4 & 1) != 0 )
    {
      v15 = a2[1];
      v16 = a2[2];
      v17 = a2[3];
    }
    else
    {
      (*(void (**)(uint32_t *, int *, uint32_t))(v4 & 0xFFFFFFFE))(a2 + 1, &v15, 0);
    }
  }
  v5 = (int)(uintptr_t)(sub_18F81E0(v2, v3));
  v18[0] = a1 + 4;
  v18[1] = a1 + 24;
  memset(&v18[2], 0, 16);
  v18[6] = (uint32_t)(uintptr_t)(sub_18F81E0(v7, v6));
  v18[7] = 0;
  v19 = 0;
  if ( v14 != 0 )
  {
    v19 = v14;
    if ( (v14 & 1) != 0 )
    {
      v20[0] = v15;
      v20[1] = v16;
      v20[2] = v17;
    }
    else
    {
      (*(void (**)(int *, uint32_t *, uint32_t))(v14 & 0xFFFFFFFE))(&v15, v20, 0);
    }
  }
  boost::asio::ssl::detail::io_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::ssl::detail::handshake_op,boost::function<void(boost::system::error_code::Self const&)>>::opCall(
    v18,
    0,
    v5,
    0,
    1);
  if ( v19 != 0 )
  {
    if ( (v19 & 1) == 0 )
    {
      v10 = *(void (**)(uint32_t *, uint32_t *, int))(v19 & 0xFFFFFFFE);
      if ( v10 != nullptr )
        v10(v20, v20, 2);
    }
    v19 = 0;
  }
  if ( v14 != 0 )
  {
    if ( (v14 & 1) == 0 )
    {
      v8 = *(void (**)(int *, int *, int))(v14 & 0xFFFFFFFE);
      if ( v8 != nullptr )
        v8(&v15, &v15, 2);
    }
    v14 = 0;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), " SSLSocket VerifyConnection \n", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "ChatLib", (int)(uintptr_t)(&v11));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v13),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/SSLSocket.cpp",
    34,
    (int)(uintptr_t)(&v12));
  g4_std::string::Destroy(&v13);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}



// ============================================================================
// Address:   0x1282eb0 (size: 840 bytes)
// Symbol:    _ZN6chatv212Connectivity9SSLSocket9AsyncReadERN5boost4asio15basic_streambufISaIcEEENS2_8functionIFjRKNS2_6system10error_codeEjEEENS8_IFvSC_jEEE
// Demangled: chatv2::Connectivity::SSLSocket::AsyncRead(boost::asio::basic_streambuf<std::allocator<char>> &,boost::function<unsigned int ()(boost::system::error_code const&,unsigned int)>,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// ============================================================================
int (*chatv2::Connectivity::SSLSocket::AsyncRead(
        int a1,
        int a2,
        unsigned int *a3,
        boost::function<void(boost::system::error_code::Self const&, unsigned int)> *a4))(unsigned int *, unsigned int *, int)
{
  unsigned int v4;
  int v5;
  int v6;
  unsigned int v7;
  int (*result)(unsigned int *, unsigned int *, int);
  void (*v9)(unsigned int *, unsigned int *, int);
  void (*v10)(uint32_t *, uint32_t *, int);
  void (*v11)(unsigned int *, unsigned int *, int);
  typedef uint32_t _g4_t_v12[2];
  typedef unsigned int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef uint8_t _g4_t_v25[20];
  typedef unsigned int _g4_t_v26;
  typedef uint32_t _g4_t_v27[7];
  typedef uint8_t _g4_t_v28[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v20)) > _g4_s8 ? (48u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v21)) > _g4_s9 ? (52u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v22)) > _g4_s10 ? (56u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v23)) > _g4_s11 ? (60u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v24)) > _g4_s12 ? (64u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v25)) > _g4_s13 ? (80u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v26)) > _g4_s14 ? (100u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v27)) > _g4_s15 ? (104u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v28)) > _g4_s16 ? (132u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
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
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 132u);

  v13 = 0;
  v4 = *a3;
  if ( *a3 != 0 )
  {
    v13 = *a3;
    if ( (v4 & 1) != 0 )
    {
      v14 = a3[1];
      v15 = a3[2];
      v16 = a3[3];
    }
    else
    {
      (*(void (**)(unsigned int *, unsigned int *, uint32_t))(v4 & 0xFFFFFFFE))(a3 + 1, &v14, 0);
    }
  }
  boost::function_void_system_error_code_c_982356::Construct(
    (boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v25,
    a4);
  v12[0] = 0;
  v12[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v6, v5));
  v7 = v13;
  v21 = 0;
  if ( v13 == 0 )
  {
    v17 = 0;
    v26 = 0;
    goto LABEL_13;
  }
  v21 = v13;
  if ( (v13 & 1) != 0 )
  {
    v22 = v14;
    v23 = v15;
    v24 = v16;
  }
  else
  {
    (*(void (**)(unsigned int *, unsigned int *, uint32_t))(v13 & 0xFFFFFFFE))(&v14, &v22, 0);
    v7 = v21;
    v17 = 0;
    if ( v21 == 0 )
    {
      v26 = 0;
      goto LABEL_13;
    }
  }
  v17 = v7;
  if ( (v7 & 1) != 0 )
  {
    v18 = v22;
    v19 = v23;
    v20 = v24;
  }
  else
  {
    (*(void (**)(unsigned int *, unsigned int *, uint32_t))(v7 & 0xFFFFFFFE))(&v22, &v18, 0);
    v7 = v17;
    v26 = 0;
    if ( v17 == 0 )
      goto LABEL_13;
  }
  v26 = v7;
  if ( (v7 & 1) != 0 )
  {
    v27[0] = v18;
    v27[1] = v19;
    v27[2] = v20;
  }
  else
  {
    (*(void (**)(unsigned int *, uint32_t *, uint32_t))(v7 & 0xFFFFFFFE))(&v18, v27, 0);
    v7 = v17;
    if ( v17 == 0 )
      goto LABEL_13;
  }
  if ( (v7 & 1) == 0 )
  {
    v11 = *(void (**)(unsigned int *, unsigned int *, int))(v7 & 0xFFFFFFFE);
    if ( v11 != nullptr )
      v11(&v18, &v18, 2);
  }
  v17 = 0;
LABEL_13:
  v27[3] = a1 + 4;
  v27[4] = a2;
  v27[5] = 0;
  v27[6] = 0;
  boost::function_void_system_error_code_c_982356::Construct(
    (boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v28,
    (const boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v25);
  boost::asio::detail::read_streambuf_op<boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>>,std::allocator<char>,boost::function<unsigned int(boost::system::error_code::Self const&,unsigned int)>,boost::function<void(boost::system::error_code::Self const&,unsigned int)>>::opCall(
    &v26,
    v12,
    0,
    1);
  g4_noop_dtor((boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v28);
  if ( v26 != 0 )
  {
    if ( (v26 & 1) == 0 )
    {
      v10 = *(void (**)(uint32_t *, uint32_t *, int))(v26 & 0xFFFFFFFE);
      if ( v10 != nullptr )
        v10(v27, v27, 2);
    }
    v26 = 0;
  }
  if ( v21 != 0 )
  {
    if ( (v21 & 1) == 0 )
    {
      v9 = *(void (**)(unsigned int *, unsigned int *, int))(v21 & 0xFFFFFFFE);
      if ( v9 != nullptr )
        v9(&v22, &v22, 2);
    }
    v21 = 0;
  }
  g4_noop_dtor((boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v25);
  result = (int (*)(unsigned int *, unsigned int *, int))v13;
  if ( v13 != 0 && (v13 & 1) == 0 )
  {
    result = *(int (**)(unsigned int *, unsigned int *, int))(v13 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(unsigned int *, unsigned int *, int))result(&v14, &v14, 2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::AsyncReadUntil  (binary VA: 0x1283200)
// Original: chatv2::Connectivity::SSLSocket::AsyncReadUntil
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SSLSocket::AsyncReadUntil(int a1, int a2, int a3, const boost::function<void(boost::system::error_code::Self const&, unsigned int)> *a4)
{
  int v4;
  int v5;
  typedef uint32_t _g4_t_v6[2];
  typedef uint8_t _g4_t_v7[20];
  typedef uint32_t _g4_t_v8[2];
  typedef uint8_t _g4_t_v9[4];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v9)) > _g4_s3 ? (36u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v12)) > _g4_s6 ? (48u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  boost::function_void_system_error_code_c_982356::Construct(
    (boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v7,
    a4);
  v6[0] = 0;
  v6[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v5, v4));
  v8[0] = a1 + 4;
  v8[1] = a2;
  g4_std::string::construct_copy(v9, a3);
  v10 = 0;
  v11 = 0;
  boost::function_void_system_error_code_c_982356::Construct(
    (boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v12,
    (const boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v7);
  boost::asio::detail::read_until_delim_string_op<boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>>,std::allocator<char>,boost::function<void(boost::system::error_code::Self const&,unsigned int)>>::opCall(
    v8,
    v6,
    0,
    1);
  g4_noop_dtor((boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v12);
  g4_std::string::Destroy(v9);
  g4_noop_dtor((boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v7);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::AsyncWrite  (binary VA: 0x1283930)
// Original: chatv2::Connectivity::SSLSocket::AsyncWrite
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SSLSocket::AsyncWrite(int a1, int *a2, boost::function<void(boost::system::error_code::Self const&, unsigned int)> *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef uint32_t _g4_t_v8[2];
  typedef uint8_t _g4_t_v9[20];
  typedef int _g4_t_v10[5];
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v11)) > _g4_s3 ? (48u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);

  v3 = *a2;
  v4 = a2[1];
  v5 = v4 - *a2;
  if ( *a2 == v4 )
    v3 = 0;
  boost::function_void_system_error_code_c_982356::Construct(
    (boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v9,
    a3);
  v8[0] = 0;
  v8[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v7, v6));
  v10[1] = v3;
  v10[0] = a1 + 4;
  v10[2] = v5;
  v10[3] = 0;
  v10[4] = 0;
  boost::function_void_system_error_code_c_982356::Construct(
    (boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v11,
    (const boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v9);
  sub_1283760(v10, v8, 0, 1);
  g4_noop_dtor((boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v11);
  g4_noop_dtor((boost::function<void(boost::system::error_code::Self const&, unsigned int)> *)v9);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::Destroy  (binary VA: 0x1285650)
// Original: chatv2::Connectivity::SSLSocket::~SSLSocket
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SSLSocket::Destroy(int a1, int a2, void **self)
{
  void **v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void **v8;
  void (*v9)(uint32_t, uint32_t, uint32_t, uint32_t);
  bool v10;
  uint32_t *v11;
  void **v12;
  int v13;
  int v14;
  int v15;
  void **v16;
  void (*v17)(uint32_t, uint32_t, uint32_t, uint32_t);
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  typedef void **_g4_t_v23;
  typedef uint32_t _g4_t_v24[2];
  typedef bool _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v24)) > _g4_s1 ? (24u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v26)) > _g4_s3 ? (36u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);

  v3 = self;
  *self = &off_2092B88;
  if ( *(self + 31) != nullptr )
    opDelete(*(self + 31));
  if ( *(self + 26) != nullptr )
    opDelete(*(self + 26));
  v4 = (int)(uintptr_t)(*(self + 17));
  *(uint32_t *)v25 = 0;
  v26 = (int)(uintptr_t)(sub_18F81E0(a1, a2));
  sub_1282480((uint32_t *)(v4 + 20), (int)(uintptr_t)(self + 18), v5, v25);
  v8 = (void **)*(self + 21);
  if ( v8 != nullptr )
  {
    do
    {
      v10 = *v8 == nullptr;
      *(self + 21) = *v8;
      if ( v10 )
        *(self + 22) = nullptr;
      *v8 = nullptr;
      v9 = (void (*)(uint32_t, uint32_t, uint32_t, uint32_t))v8[1];
      v24[0] = 0;
      v24[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v7, v6));
      v9(0, (uint32_t)(uintptr_t)(v8), (uint32_t)(uintptr_t)(v24), 0);
      v8 = (void **)*(self + 21);
    }
    while ( v8 != nullptr );
    v3 = self;
  }
  v11 = (uint32_t *)(v3[8]);
  *(uint32_t *)v25 = 0;
  v12 = v3 + 8;
  v26 = (int)(uintptr_t)(sub_18F81E0(v7, v6));
  sub_1282480(v11 + 5, (int)(uintptr_t)(v3 + 9), v13, v25);
  v16 = (void **)v3[12];
  if ( v16 != nullptr )
  {
    v23 = v3;
    do
    {
      v10 = *v16 == nullptr;
      v12[4] = *v16;
      if ( v10 )
        v12[5] = nullptr;
      *v16 = nullptr;
      v17 = (void (*)(uint32_t, uint32_t, uint32_t, uint32_t))v16[1];
      v27[0] = 0;
      v27[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v15, v14));
      v17(0, (uint32_t)(uintptr_t)(v16), (uint32_t)(uintptr_t)(v27), 0);
      v16 = (void **)v12[4];
    }
    while ( v16 != nullptr );
    v3 = v23;
  }
  if ( SSL_get_ex_data(v3[6], 0) != 0 )
  {
    v18 = SSL_get_ex_data(v3[6], 0);
    if ( v18 != 0 )
      G4_VCALL<void>(v18, 4);
    SSL_set_ex_data(v3[6], 0, 0);
  }
  BIO_free(v3[7]);
  SSL_free(v3[6]);
  if ( v3[2] != (void *)-1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *((void **)v3[1] + 5),
      (int)(uintptr_t)(v3[2]),
      (void *)((pthread_mutex_t **)v3 + 4),
      ((uint8_t)(uintptr_t)(v3)[3] & 0x40) == 0);
    *(uint32_t *)v25 = 0;
    v26 = (int)(uintptr_t)(sub_18F81E0(v20, v19));
    g4_asio_socket_ops_close(
      v22,
      v21,
      v3[2],
      (uint8_t *)v3 + 12,
      (uint8_t *)&dword_0 + 1,
      (uint32_t *)v25);
  }
  *v3 = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2092AE8));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::SSLSocket::Destroy_ea12858a0  (binary VA: 0x12858a0)
// Original: chatv2::Connectivity::SSLSocket::~SSLSocket
// ----------------------------------------------------------------------------
void chatv2::Connectivity::SSLSocket::Destroy_ea12858a0(int a1, int a2, void **self)
{
  chatv2::Connectivity::SSLSocket::Destroy(a1, a2, self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::Construct  (binary VA: 0x1274b00)
// Original: chatv2::Connectivity::HTTPClient::HTTPClient(std::string const&, boost::asio::io_service &, boost::asio::ssl::context &, bool)
// ----------------------------------------------------------------------------
namespace chatv2 { namespace Connectivity { namespace HTTPClient { int Construct(uint32_t *a1, int a2, int a3, int a4, uint8_t a5); } } }
int chatv2::Connectivity::HTTPClient::Construct(uint32_t *a1, int a2, int a3, int a4, uint8_t a5)
{
  volatile int32_t *t_a5 = nullptr;
  volatile int32_t *t_a9 = nullptr;
  uint8_t *t_a12 = nullptr;
  volatile int32_t *t_a13 = nullptr;
  chatv2::Connectivity::TCPClient::Construct(
    (int)(uintptr_t)a1,
    a2,
    (boost::asio::io_service *)(uintptr_t)a3,
    (uint32_t *)(uintptr_t)a4,
    t_a5, 0, 0, 0, t_a9, 0, 0, t_a12, t_a13);
  *a1 = (uint32_t)(uintptr_t)(&off_2092A28);
  *((uint8_t *)a1 + 384) = a5;
  return chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::Construct(
    (chatv2::Utils::SyncQueue<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *)((char *)a1 + 388));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Connectivity::HTTPClient::Construct  (binary VA: 0x1274b80)
// Original: chatv2::Connectivity::HTTPClient::HTTPClient(std::string const&, boost::asio::io_service &, bool)
// ----------------------------------------------------------------------------
namespace chatv2 { namespace Connectivity { namespace HTTPClient { int Construct(int a1, uint32_t *a2, int a3, uint8_t a4); } } }
int chatv2::Connectivity::HTTPClient::Construct(int a1, uint32_t *a2, int a3, uint8_t a4)
{
  volatile int32_t *t_a5 = nullptr;
  volatile int32_t *t_a9 = nullptr;
  chatv2::Connectivity::SimpleSocket::Self *t_a12 = nullptr;
  volatile int32_t *t_a13 = nullptr;
  chatv2::Connectivity::TCPClient::Construct(
    a1,
    (int)(uintptr_t)a2,
    (boost::asio::io_service *)(uintptr_t)a3,
    0,
    t_a5, 0, 0, 0, t_a9, 0, 0, t_a12, t_a13);
  *(uint32_t *)(uintptr_t)a1 = (uint32_t)(uintptr_t)(&off_2092A28);
  *(uint8_t *)((uintptr_t)a1 + 384) = a4;
  return chatv2::Utils::SyncQueue_shared_ptr_chatv2_Connec_02c069::Construct(
    (chatv2::Utils::SyncQueue<boost::shared_ptr<chatv2::Connectivity::HTTPRequest::Self>> *)((uintptr_t)a1 + 388));
}



