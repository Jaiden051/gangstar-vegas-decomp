#include "Core/Utils/DecompTypes.h"
#include "glf_Socket.h"

// ----------------------------------------------------------------------------
// Function: glf::Socket::Init  (binary VA: 0xcce110)
// Original: glf::Socket::Init
// ----------------------------------------------------------------------------
int glf::Socket::Init()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Deinit  (binary VA: 0xcce120)
// Original: glf::Socket::Deinit
// ----------------------------------------------------------------------------
int glf::Socket::Deinit()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::GetHostName  (binary VA: 0xcce130)
// Original: glf::Socket::GetHostName
// ----------------------------------------------------------------------------
glf::Socket::Self * glf::Socket::GetHostName(glf::Socket::Self *self)
{
  char name[257];

  gethostname(&name[1], 0x100u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), &name[1], (int)(uintptr_t)(name));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::MakeAddr  (binary VA: 0xcce1b0)
// Original: glf::Socket::MakeAddr
// ----------------------------------------------------------------------------
glf::Socket::Self * glf::Socket::MakeAddr(glf::Socket::Self *self, char *cp, int16_t a3)
{
  *(uint32_t *)self = __builtin_bswap32(inet_addr(cp));
  *((uint16_t *)self + 2) = a3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::GetAddrIP  (binary VA: 0xcce200)
// Original: glf::Socket::GetAddrIP
// ----------------------------------------------------------------------------
char * glf::Socket::GetAddrIP(unsigned int *a1)
{
  return inet_ntoa(g4_in_addr(__builtin_bswap32(*a1)));
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Construct  (binary VA: 0xcce230)
// Original: glf::Socket::Socket
// ----------------------------------------------------------------------------
glf::Socket::Self * glf::Socket::Construct(glf::Socket::Self *self)
{
  glf::Socket::Self *result;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  int v5;
  __m128i *v6;
  unsigned int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E900);
  result = (glf::Socket::Self *)sub_4EBD10(0x108u, 1);
  *((uint32_t *)result + 1) = -1;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(self);
  v2 = -((uint8_t)(((uint8_t)(uintptr_t)result + 8) & 0xF) >> 2) & 3;
  if ( v2 != 0 )
  {
    v3 = 0;
    v13 = 0;
    while ( 1 )
    {
      *((uint32_t *)result + v3 + 2) = -1;
      v4 = v3 + 1;
      v5 = 63 - v13;
      if ( v2 <= v4 )
        break;
      v13 = v4;
      v3 = v4;
    }
  }
  else
  {
    v5 = 64;
    v4 = 0;
  }
  v14 = 64 - v2;
  v12 = (64 - v2) >> 2;
  v11 = 4 * v12;
  if ( 4 * v12 == 0 )
    goto LABEL_9;
  v6 = (__m128i *)((char *)result + 4 * v2 + 8);
  v7 = 0;
  do
  {
    ++v7;
    *v6++ = g4_m128_from<__m128i>(-1LL);
  }
  while ( v7 < v12 );
  v4 += v11;
  v5 -= v11;
  if ( v14 != v11 )
  {
LABEL_9:
    v8 = 4 * v5;
    v9 = 0;
    v10 = (char *)result + 4 * v4;
    do
    {
      *(uint32_t *)&v10[v9 + 8] = -1;
      v9 += 4;
    }
    while ( v9 != v8 );
  }
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 20) = 0;
  *((uint32_t *)self + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Close  (binary VA: 0xcce360)
// Original: glf::Socket::Close
// ----------------------------------------------------------------------------
int glf::Socket::Close(glf::Socket::Self *self)
{
  glf::Self **v1;
  int result;
  int i;

  v1 = *((glf::Self ***)self + 7);
  *((uint8_t *)*v1 + 20) = 0;
  result = (int)(uintptr_t)(v1[1]);
  if ( result >= 0 )
  {
    for ( i = 0; i != 64; ++i )
    {
      if ( v1[i + 2] != (glf::Self *)-1 )
      {
        glf::closesocket(v1[i + 2]);
        v1[i + 2] = (glf::Self *)-1;
      }
    }
    result = (int)(uintptr_t)(v1[1]);
    if ( result != -1 )
    {
      result = glf::closesocket(v1[1]);
      v1[1] = (glf::Self *)-1;
    }
  }
  *((uint32_t *)self + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Destroy  (binary VA: 0xcce3e0)
// Original: glf::Socket::~Socket
// ----------------------------------------------------------------------------
void glf::Socket::Destroy(glf::Self ***self)
{
  glf::Self **v1;
  int i;

  *self = (glf::Self **)((uint32_t)(uintptr_t)&off_206E900);
  glf::Socket::Close((glf::Socket::Self *)self);
  v1 = *(self + 7);
  if ( v1 != nullptr )
  {
    *((uint8_t *)*v1 + 20) = 0;
    if ( (int)(uintptr_t)(v1[1]) >= 0 )
    {
      for ( i = 0; i != 64; ++i )
      {
        if ( v1[i + 2] != (glf::Self *)-1 )
        {
          glf::closesocket(v1[i + 2]);
          v1[i + 2] = (glf::Self *)-1;
        }
      }
      if ( v1[1] != (glf::Self *)-1 )
      {
        glf::closesocket(v1[1]);
        v1[1] = (glf::Self *)-1;
      }
    }
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Destroy_eacce470  (binary VA: 0xcce470)
// Original: glf::Socket::~Socket
// ----------------------------------------------------------------------------
void glf::Socket::Destroy_eacce470(glf::Self ***self)
{
  glf::Socket::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::GetLastError  (binary VA: 0xcce4b0)
// Original: glf::Socket::GetLastError
// ----------------------------------------------------------------------------
int glf::Socket::GetLastError(glf::Socket::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::ClearError  (binary VA: 0xcce4c0)
// Original: glf::Socket::ClearError
// ----------------------------------------------------------------------------
glf::Socket::Self * glf::Socket::ClearError(glf::Socket::Self *self)
{
  *((uint32_t *)self + 6) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::IsOpened  (binary VA: 0xcce4d0)
// Original: glf::Socket::IsOpened
// ----------------------------------------------------------------------------
int glf::Socket::IsOpened(glf::Socket::Self *self)
{
  return *((uint8_t *)self + 20);
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::OpenTcp  (binary VA: 0xcce4e0)
// Original: glf::Socket::OpenTcp
// ----------------------------------------------------------------------------
bool glf::Socket::OpenTcp(int **a1, int a2)
{
  int *v2;
  int i;
  glf::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_optval[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_optval)) > _g4_s2 ? (28u + sizeof(_g4_t_optval)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 28u);

  glf::Socket::Close((glf::Socket::Self *)a1);
  v2 = a1[7];
  a1[1] = nullptr;
  a1[2] = (int *)(&dword_0 + 1);
  a1[3] = (int *)a2;
  *(uint8_t *)(*v2 + 20) = 0;
  if ( v2[1] >= 0 )
  {
    for ( i = 0; i != 64; ++i )
    {
      v4 = (glf::Self *)v2[i + 2];
      if ( v4 != (glf::Self *)-1 )
      {
        v10 = i;
        glf::closesocket(v4);
        i = v10;
        v2[v10 + 2] = -1;
      }
    }
    if ( v2[1] != -1 )
    {
      glf::closesocket((glf::Self *)v2[1]);
      v2[1] = -1;
    }
  }
  v5 = socket(2, 1, 0);
  v6 = 0;
  v2[1] = v5;
  if ( v5 != 0 )
  {
    if ( *(uint32_t *)(*v2 + 4) == 1 )
    {
      optval[0] = a2 & 1;
      v11 = setsockopt(v5, 1, 6, optval, 4u);
      glf::SocketGetLastError();
      if ( v11 < 0 )
        goto LABEL_19;
    }
    else
    {
      glf::SocketGetLastError();
    }
    optval[0] = (a2 & 2) != 0;
    if ( setsockopt(v2[1], 1, 2, optval, 4u) >= 0 )
    {
      v7 = fcntl(v2[1], 3, 0);
      v8 = v7;
      BYTE1(v7) |= 8u;
      BYTE1(v8) &= ~8u;
      if ( (a2 & 8) == 0 )
        v8 = v7;
      fcntl(v2[1], 4, v8);
      if ( *(uint32_t *)(*v2 + 4) != 0 || (optval[0] = (a2 & 0x10) != 0, setsockopt(v2[1], 6, 1, optval, 4u) >= 0) )
      {
        v6 = v2[1];
        goto LABEL_17;
      }
    }
LABEL_19:
    *(uint32_t *)(*v2 + 24) = 7;
    v6 = v2[1];
  }
LABEL_17:
  *((uint8_t *)a1 + 20) = v6 != 0;
  return v6 != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::OpenUdp  (binary VA: 0xcce6e0)
// Original: glf::Socket::OpenUdp
// ----------------------------------------------------------------------------
bool glf::Socket::OpenUdp(int **a1, int a2)
{
  int *v2;
  int i;
  glf::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_optval[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_optval)) > _g4_s2 ? (28u + sizeof(_g4_t_optval)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 28u);

  glf::Socket::Close((glf::Socket::Self *)a1);
  v2 = a1[7];
  a1[1] = (int *)(&dword_0 + 1);
  a1[2] = nullptr;
  a1[3] = (int *)a2;
  *(uint8_t *)(*v2 + 20) = 0;
  if ( v2[1] >= 0 )
  {
    for ( i = 0; i != 64; ++i )
    {
      v4 = (glf::Self *)v2[i + 2];
      if ( v4 != (glf::Self *)-1 )
      {
        v10 = i;
        glf::closesocket(v4);
        i = v10;
        v2[v10 + 2] = -1;
      }
    }
    if ( v2[1] != -1 )
    {
      glf::closesocket((glf::Self *)v2[1]);
      v2[1] = -1;
    }
  }
  v5 = socket(2, 2, 0);
  v6 = 0;
  v2[1] = v5;
  if ( v5 != 0 )
  {
    if ( *(uint32_t *)(*v2 + 4) == 1 )
    {
      optval[0] = a2 & 1;
      v11 = setsockopt(v5, 1, 6, optval, 4u);
      glf::SocketGetLastError();
      if ( v11 < 0 )
        goto LABEL_19;
    }
    else
    {
      glf::SocketGetLastError();
    }
    optval[0] = (a2 & 2) != 0;
    if ( setsockopt(v2[1], 1, 2, optval, 4u) >= 0 )
    {
      v7 = fcntl(v2[1], 3, 0);
      v8 = v7;
      BYTE1(v7) |= 8u;
      BYTE1(v8) &= ~8u;
      if ( (a2 & 8) == 0 )
        v8 = v7;
      fcntl(v2[1], 4, v8);
      if ( *(uint32_t *)(*v2 + 4) != 0 || (optval[0] = (a2 & 0x10) != 0, setsockopt(v2[1], 6, 1, optval, 4u) >= 0) )
      {
        v6 = v2[1];
        goto LABEL_17;
      }
    }
LABEL_19:
    *(uint32_t *)(*v2 + 24) = 7;
    v6 = v2[1];
  }
LABEL_17:
  *((uint8_t *)a1 + 20) = v6 != 0;
  return v6 != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Open  (binary VA: 0xcce8e0)
// Original: glf::Socket::Open
// ----------------------------------------------------------------------------
bool glf::Socket::Open(int **a1, int *a2, int *a3, int a4)
{
  int *v4;
  int i;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_optval[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_optval)) > _g4_s1 ? (28u + sizeof(_g4_t_optval)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 28u);

  glf::Socket::Close((glf::Socket::Self *)a1);
  v4 = a1[7];
  a1[2] = a3;
  a1[1] = a2;
  a1[3] = (int *)a4;
  *(uint8_t *)(*v4 + 20) = 0;
  if ( v4[1] >= 0 )
  {
    for ( i = 0; i != 64; ++i )
    {
      if ( v4[i + 2] != -1 )
      {
        glf::closesocket((glf::Self *)v4[i + 2]);
        v4[i + 2] = -1;
      }
    }
    if ( v4[1] != -1 )
    {
      glf::closesocket((glf::Self *)v4[1]);
      v4[1] = -1;
    }
  }
  v6 = socket(2, (a2 == (int *)((char *)&dword_0 + 1)) + 1, 0);
  v7 = 0;
  v4[1] = v6;
  if ( v6 != 0 )
  {
    if ( *(uint32_t *)(*v4 + 4) == 1 )
    {
      optval[0] = a4 & 1;
      v11 = setsockopt(v6, 1, 6, optval, 4u);
      glf::SocketGetLastError();
      if ( v11 < 0 )
        goto LABEL_19;
    }
    else
    {
      glf::SocketGetLastError();
    }
    optval[0] = (a4 & 2) != 0;
    if ( setsockopt(v4[1], 1, 2, optval, 4u) >= 0 )
    {
      v8 = fcntl(v4[1], 3, 0);
      v9 = v8;
      BYTE1(v8) |= 8u;
      BYTE1(v9) &= ~8u;
      if ( (a4 & 8) == 0 )
        v9 = v8;
      fcntl(v4[1], 4, v9);
      if ( *(uint32_t *)(*v4 + 4) != 0 || (optval[0] = (a4 & 0x10) != 0, setsockopt(v4[1], 6, 1, optval, 4u) >= 0) )
      {
        v7 = v4[1];
        goto LABEL_17;
      }
    }
LABEL_19:
    *(uint32_t *)(*v4 + 24) = 7;
    v7 = v4[1];
  }
LABEL_17:
  *((uint8_t *)a1 + 20) = v7 != 0;
  return v7 != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Bind  (binary VA: 0xcceae0)
// Original: glf::Socket::Bind
// ----------------------------------------------------------------------------
bool glf::Socket::Bind(int a1, int a2)
{
  int v2;
  int16_t v3;
  int v4;
  typedef int _g4_t_fd;
  typedef struct sockaddr _g4_t_addr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_fd)) > _g4_s0 ? (0u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_addr)) > _g4_s1 ? (16u + sizeof(_g4_t_addr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 0u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 16u);

  addr.sa_family = 2;
  v2 = *(uint32_t *)(a1 + 28);
  v3 = *(uint16_t *)(a2 + 4);
  *(uint32_t *)&addr.sa_data[2] = __builtin_bswap32(*(uint32_t *)a2);
  fd = *(uint32_t *)(v2 + 4);
  *(uint16_t *)addr.sa_data = __builtin_rotateright16(v3, 8);
  v4 = bind(fd, &addr, 0x10u);
  glf::SocketGetLastError();
  return v4 == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Connect  (binary VA: 0xcceb50)
// Original: glf::Socket::Connect
// ----------------------------------------------------------------------------
int glf::Socket::Connect(int a1, int a2)
{
  uint32_t *v2;
  int16_t v3;
  int v4;
  int LastError;
  int result;
  typedef int _g4_t_fd;
  typedef struct sockaddr _g4_t_addr;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_fd)) > _g4_s0 ? (0u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_addr)) > _g4_s1 ? (16u + sizeof(_g4_t_addr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 0u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 16u);

  addr.sa_family = 2;
  v2 = *(uint32_t **)(a1 + 28);
  v3 = *(uint16_t *)(a2 + 4);
  *(uint32_t *)&addr.sa_data[2] = __builtin_bswap32(*(uint32_t *)a2);
  fd = v2[1];
  *(uint16_t *)addr.sa_data = __builtin_rotateright16(v3, 8);
  v4 = connect(fd, &addr, 0x10u);
  LastError = glf::SocketGetLastError();
  if ( LastError == 106 )
  {
    *(uint32_t *)(*v2 + 24) = 0;
LABEL_4:
    ++*(uint32_t *)(a1 + 16);
    return 1;
  }
  if ( LastError == 11 )
  {
    *(uint32_t *)(*v2 + 24) = 4;
    return 0;
  }
  result = 0;
  if ( v4 == 0 )
    goto LABEL_4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::IsConnected  (binary VA: 0xccec10)
// Original: glf::Socket::IsConnected
// ----------------------------------------------------------------------------
bool glf::Socket::IsConnected(glf::Socket::Self *self)
{
  bool result;

  result = false;
  if ( *((int *)self + 6) <= 0 )
    return *((uint32_t *)self + 4) > 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Listen  (binary VA: 0xccec30)
// Original: glf::Socket::Listen
// ----------------------------------------------------------------------------
bool glf::Socket::Listen(glf::Socket::Self *self, int n)
{
  return listen(*(uint32_t *)(*((uint32_t *)self + 7) + 4), n) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Accept  (binary VA: 0xccec70)
// Original: glf::Socket::Accept
// ----------------------------------------------------------------------------
int glf::Socket::Accept(int a1, int a2)
{
  int v2;
  int v3;
  int fd;
  int v5;
  typedef socklen_t _g4_t_addr_len;
  typedef struct sockaddr _g4_t_addr;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_addr_len)) > _g4_s0 ? (12u + sizeof(_g4_t_addr_len)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_addr)) > _g4_s1 ? (16u + sizeof(_g4_t_addr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_addr_len &addr_len = *reinterpret_cast<_g4_t_addr_len *>(_g4_sf + 12u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 16u);

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 28);
  while ( *(uint32_t *)(v3 + 4 * v2 + 8) != -1 )
  {
    if ( ++v2 == 64 )
      return -1;
  }
  fd = *(uint32_t *)(v3 + 4);
  addr_len = 16;
  v5 = accept(fd, &addr, &addr_len);
  if ( v5 != -1 )
  {
    *(uint32_t *)(v3 + 4 * v2 + 8) = v5;
    *(uint16_t *)(a2 + 4) = __builtin_rotateright16(*(uint16_t *)addr.sa_data, 8);
    *(uint32_t *)a2 = __builtin_bswap32(*(unsigned int *)&addr.sa_data[2]);
    ++*(uint32_t *)(a1 + 16);
    return v2;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Reject  (binary VA: 0xcced10)
// Original: glf::Socket::Reject
// ----------------------------------------------------------------------------
int glf::Socket::Reject(glf::Socket::Self *self, int a2)
{
  int result;
  int v3;

  result = 0;
  v3 = *((uint32_t *)self + 7);
  if ( a2 >= 0 && *(int *)(v3 + 4 * a2 + 8) >= 0 )
  {
    glf::closesocket(*(glf::Self **)(v3 + 4 * a2 + 8));
    *(uint32_t *)(v3 + 4 * a2 + 8) = -1;
    --*((uint32_t *)self + 4);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Send  (binary VA: 0xcced80)
// Original: glf::Socket::Send
// ----------------------------------------------------------------------------
ssize_t glf::Socket::Send(glf::Socket::Self *self, void *buf, size_t n, int a4)
{
  uint32_t *v4;
  int fd;
  ssize_t result;

  if ( *((uint8_t *)self + 20) != 0 )
  {
    v4 = *((uint32_t **)self + 7);
    fd = v4[a4 + 2];
    if ( fd == -1 )
      fd = v4[1];
    result = send(fd, buf, n, 0);
    if ( result < 0 )
      *(uint32_t *)(*v4 + 24) = 7;
  }
  else
  {
    *((uint32_t *)self + 6) = 2;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::SendTo  (binary VA: 0xccee20)
// Original: glf::Socket::SendTo
// ----------------------------------------------------------------------------
ssize_t glf::Socket::SendTo(int a1, int a2, void *buf, size_t n)
{
  uint32_t *v4;
  int fd;
  ssize_t result;
  typedef struct sockaddr _g4_t_addr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_addr)) > _g4_s0 ? (0u + sizeof(_g4_t_addr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 0u);

  if ( *(uint8_t *)(a1 + 20) != 0 )
  {
    v4 = *(uint32_t **)(a1 + 28);
    *(uint32_t *)&addr.sa_data[2] = __builtin_bswap32(*(uint32_t *)a2);
    *(uint16_t *)addr.sa_data = __builtin_rotateright16(*(uint16_t *)(a2 + 4), 8);
    fd = v4[1];
    addr.sa_family = 2;
    result = sendto(fd, buf, n, 0, &addr, 0x10u);
    if ( result < 0 )
      *(uint32_t *)(*v4 + 24) = 7;
  }
  else
  {
    *(uint32_t *)(a1 + 24) = 2;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::IsReadable  (binary VA: 0xcceec0)
// Original: glf::Socket::IsReadable
// ----------------------------------------------------------------------------
int glf::Socket::IsReadable(glf::Socket::Self *self, int a2)
{
  uint32_t *v2;
  unsigned int v3;
  int v4;
  int v5;
  typedef struct timeval _g4_t_timeout;
  typedef fd_set _g4_t_readfds;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_timeout)) > _g4_s0 ? (8u + sizeof(_g4_t_timeout)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_readfds)) > _g4_s1 ? (16u + sizeof(_g4_t_readfds)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_timeout &timeout = *reinterpret_cast<_g4_t_timeout *>(_g4_sf + 8u);
  _g4_t_readfds &readfds = *reinterpret_cast<_g4_t_readfds *>(_g4_sf + 16u);

  if ( *((uint8_t *)self + 20) != 0 )
  {
    v2 = *((uint32_t **)self + 7);
    v3 = v2[a2 + 2];
    if ( v3 == -1 )
      v3 = v2[1];
    memset(&readfds, 0, sizeof(readfds));
    FD_SET(v3, &readfds);
    timeout.tv_sec = 0;
    timeout.tv_usec = 0;
    v4 = select(v3 + 1, &readfds, nullptr, nullptr, &timeout);
    v5 = 0;
    if ( v4 != 0 )
    {
      if ( v4 < 0 )
        *(uint32_t *)(*v2 + 24) = 7;
      else
        LOBYTE(v5) = FD_ISSET(v3, &readfds) != 0;
    }
  }
  else
  {
    *((uint32_t *)self + 6) = 2;
    return 0;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::Receive  (binary VA: 0xccefd0)
// Original: glf::Socket::Receive
// ----------------------------------------------------------------------------
ssize_t glf::Socket::Receive(glf::Socket::Self *self, void *buf, size_t n, int a4)
{
  uint32_t *v4;
  int fd;
  ssize_t v6;
  ssize_t v7;

  if ( *((uint8_t *)self + 20) != 0 )
  {
    v4 = *((uint32_t **)self + 7);
    fd = v4[a4 + 2];
    if ( fd == -1 )
      fd = v4[1];
    v6 = recv(fd, buf, n, 0);
    v7 = v6;
    if ( v6 != 0 )
    {
      if ( v6 < 0 )
      {
        if ( glf::SocketGetLastError() == 11 )
          return 0;
        else
          *(uint32_t *)(*v4 + 24) = 7;
      }
    }
    else
    {
      *(uint32_t *)(*v4 + 24) = 6;
    }
  }
  else
  {
    *((uint32_t *)self + 6) = 2;
    return 0;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::ReceiveFrom  (binary VA: 0xccf090)
// Original: glf::Socket::ReceiveFrom
// ----------------------------------------------------------------------------
ssize_t glf::Socket::ReceiveFrom(int a1, int a2, void *buf, size_t n)
{
  int v5;
  ssize_t v6;
  int LastError;
  unsigned int v8;
  typedef int _g4_t_v9;
  typedef socklen_t _g4_t_addr_len;
  typedef struct sockaddr _g4_t_addr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_addr_len)) > _g4_s1 ? (16u + sizeof(_g4_t_addr_len)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_addr)) > _g4_s2 ? (20u + sizeof(_g4_t_addr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_addr_len &addr_len = *reinterpret_cast<_g4_t_addr_len *>(_g4_sf + 16u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 20u);

  if ( *(uint8_t *)(a1 + 20) != 0 )
  {
    v5 = *(uint32_t *)(a1 + 28);
    addr_len = 16;
    v9 = v5;
    v6 = recvfrom(*(uint32_t *)(v5 + 4), buf, n, 0, &addr, &addr_len);
    LastError = glf::SocketGetLastError();
    v8 = *(uint32_t *)&addr.sa_data[2];
    if ( v6 < 0 )
    {
      if ( LastError == 11 )
        v6 = 0;
      else
        *(uint32_t *)(*(uint32_t *)v9 + 24) = 7;
      v8 = *(uint32_t *)&addr.sa_data[2];
    }
    *(uint32_t *)a2 = __builtin_bswap32(v8);
    *(uint16_t *)(a2 + 4) = __builtin_rotateright16(*(uint16_t *)addr.sa_data, 8);
    return v6;
  }
  else
  {
    *(uint32_t *)(a1 + 24) = 2;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Socket::GetAddress  (binary VA: 0xccf170)
// Original: glf::Socket::GetAddress
// ----------------------------------------------------------------------------
int glf::Socket::GetAddress(int a1, int a2)
{
  int *v2;
  typedef socklen_t _g4_t_len;
  typedef struct sockaddr _g4_t_addr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_len)) > _g4_s0 ? (0u + sizeof(_g4_t_len)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_addr)) > _g4_s1 ? (4u + sizeof(_g4_t_addr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_len &len = *reinterpret_cast<_g4_t_len *>(_g4_sf + 0u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 4u);

  v2 = *(int **)(a1 + 28);
  len = 16;
  if ( getsockname(v2[1], &addr, &len) < 0 )
  {
    *(uint32_t *)(*v2 + 24) = 7;
    return 0;
  }
  else
  {
    *(uint32_t *)a2 = 0;
    *(uint16_t *)(a2 + 4) = __builtin_rotateright16(*(uint16_t *)addr.sa_data, 8);
    return 1;
  }
}


