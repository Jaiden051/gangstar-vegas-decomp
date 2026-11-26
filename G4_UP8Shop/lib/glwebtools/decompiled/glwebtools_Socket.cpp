#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Socket.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Socket::GetNetInterfaceInfoArray  (binary VA: 0x13d4950)
// Original: glwebtools::Socket::GetNetInterfaceInfoArray
// ----------------------------------------------------------------------------
int glwebtools::Socket::GetNetInterfaceInfoArray(glwebtools::Socket::Self *self)
{
  int v1;
  int v2;
  char *v3;
  size_t v4;
  int v5;
  int v6;
  void *v7;
  void *v8;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef char *_g4_t_src;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_s[19];
  typedef char _g4_t_dest[32];
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 1216u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_src)) > _g4_s3 ? (32u + sizeof(_g4_t_src)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (45u + sizeof(_g4_t_s)) > _g4_s6 ? (45u + sizeof(_g4_t_s)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_dest)) > _g4_s7 ? (64u + sizeof(_g4_t_dest)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v18)) > _g4_s8 ? (96u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 45u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);

  v1 = 0;
  v2 = socket(2, 2, 0);
  if ( v2 != -1 )
  {
    v12 = 1024;
    src = &v18;
    if ( ioctl(v2, 0x8912u, &v12) != -1 )
    {
      v3 = src;
      v1 = 1;
      v11 = &src[v12 & 0xFFFFFFE0];
      if ( src != v11 )
      {
        do
        {
          strcpy(dest, v3);
          if ( ioctl(v2, 0x8913u, dest) == 0 && (dest[16] & 8) == 0 && ioctl(v2, 0x8927u, dest) == 0 )
          {
            v14 = (int)(uintptr_t)(&dword_213B814);
            v15 = (int)(uintptr_t)(&dword_213B814);
            g4_std_compat::string_assign((int)(uintptr_t)(&v14), dest, strlen(dest));
            sprintf(
              s,
              "%02X:%02X:%02X:%02X:%02X:%02X",
              (uint8_t)dest[18],
              (uint8_t)dest[19],
              (uint8_t)dest[20],
              (uint8_t)dest[21],
              (uint8_t)dest[22],
              (uint8_t)dest[23]);
            v4 = strlen(s);
            g4_std_compat::string_assign((int)(uintptr_t)(&v15), s, v4);
            v5 = *((uint32_t *)self + 1);
            if ( v5 == *((uint32_t *)self + 2) )
            {
              g4_std::vector_glwebtools_NetInterfaceI_0efdbd::M_insert_aux(
                self,
                v5,
                &v14);
            }
            else
            {
              v6 = 0;
              if ( v5 != 0 )
              {
                v10 = *((char **)self + 1);
                g4_std::string::construct_copy(v5, &v14);
                g4_std::string::construct_copy(v10 + 4, &v15);
                v6 = *((uint32_t *)self + 1);
              }
              *((uint32_t *)self + 1) = v6 + 8;
            }
            v7 = (void *)(v15 - 12);
            if ( (uint32_t *)(v15 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v7);
            }
            v8 = (void *)(v14 - 12);
            if ( (uint32_t *)(v14 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v8);
            }
          }
          v3 += 32;
        }
        while ( v11 != v3 );
        return 1;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Socket::GetMacAddressFromName  (binary VA: 0x13d4c00)
// Original: glwebtools::Socket::GetMacAddressFromName
// ----------------------------------------------------------------------------
int glwebtools::Socket::GetMacAddressFromName(char **a1, int a2)
{
  int v2;
  int v3;
  const char **v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  typedef char *_g4_t_s1;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v12)) > _g4_s3 ? (15u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 15u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v13 = 0;
  v14 = nullptr;
  v15 = 0;
  if ( (uint8_t)glwebtools::Socket::GetNetInterfaceInfoArray((glwebtools::Socket::Self *)&v13) != 0 )
  {
    v2 = v13;
    v10 = v14;
    v12 = 0;
    v11 = ((int)(uintptr_t)(v14) - v13) >> 3;
    if ( v11 != 0 )
    {
      v3 = 0;
      s1 = *a1;
      do
      {
        v4 = (const char **)(v2 + 8 * v3);
        if ( strcasecmp(s1, *v4) == 0 )
        {
          g4_std::string::assign_str(a2, v4 + 1);
          v2 = v13;
          v10 = v14;
          v12 = 1;
          goto LABEL_7;
        }
        ++v3;
      }
      while ( v3 != v11 );
      v12 = 0;
    }
  }
  else
  {
    v2 = v13;
    v10 = v14;
    v12 = 0;
  }
LABEL_7:
  if ( (uint32_t *)v2 != v10 )
  {
    v5 = (uint32_t *)v2;
    do
    {
      v6 = v5[1];
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v6 - 12));
      }
      v7 = (uint32_t *)(*v5 - 12);
      if ( v7 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      v5 += 2;
    }
    while ( v5 != v10 );
    v2 = v13;
  }
  if ( v2 != 0 )
    sub_4EBEE0(v2);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Socket::GetMacAddressFromIndex  (binary VA: 0x13d4d80)
// Original: glwebtools::Socket::GetMacAddressFromIndex
// ----------------------------------------------------------------------------
int glwebtools::Socket::GetMacAddressFromIndex(unsigned int a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v8)) > _g4_s1 ? (15u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v9 = 0;
  v10 = nullptr;
  v11 = 0;
  if ( (uint8_t)glwebtools::Socket::GetNetInterfaceInfoArray((glwebtools::Socket::Self *)&v9) != 0 )
  {
    v2 = v9;
    v7 = v10;
    v8 = 0;
    if ( a1 < ((int)(uintptr_t)(v10) - v9) >> 3 )
    {
      g4_std::string::assign_str(a2, v9 + 8 * a1 + 4);
      v2 = v9;
      v7 = v10;
      v8 = 1;
    }
  }
  else
  {
    v2 = v9;
    v7 = v10;
    v8 = 0;
  }
  if ( (uint32_t *)v2 != v7 )
  {
    v3 = (uint32_t *)v2;
    do
    {
      v4 = v3[1];
      if ( (uint32_t *)(v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
      }
      v5 = (uint32_t *)(*v3 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      v3 += 2;
    }
    while ( v3 != v7 );
    v2 = v9;
  }
  if ( v2 != 0 )
    sub_4EBEE0(v2);
  return v8;
}


