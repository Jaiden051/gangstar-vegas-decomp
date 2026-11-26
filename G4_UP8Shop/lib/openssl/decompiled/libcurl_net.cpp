#include "Core/Utils/DecompTypes.h"
#include "libcurl_net.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: curl_global_init  (binary VA: 0x1a49590)
// Original: curl_global_init
// ----------------------------------------------------------------------------
int curl_global_init(int a1)
{
  int v1;
  int result;
  int v3;

  v1 = dword_2142594++;
  result = 0;
  if ( v1 == 0 )
  {
    Curl_cmalloc = (uint32_t)(uintptr_t)(&malloc);
    Curl_cfree = (uint32_t)(uintptr_t)(&free);
    Curl_crealloc = (uint32_t)(uintptr_t)(&realloc);
    Curl_cstrdup = (uint32_t)(uintptr_t)(&strdup);
    Curl_ccalloc = (uint32_t)(uintptr_t)(&calloc);
    if ( (a1 & 1) == 0 || (v3 = Curl_ssl_init(), result = 2, v3 != 0) )
    {
      dword_2142598 = a1;
      Curl_srand();
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_global_init_mem  (binary VA: 0x1a49640)
// Original: curl_global_init_mem
// ----------------------------------------------------------------------------
char curl_global_init_mem(int a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{
  int v6;

  LOBYTE(v6) = 2;
  if ( a3 != nullptr && a2 != nullptr && a5 != nullptr && a4 != nullptr && a6 != nullptr )
  {
    LOBYTE(v6) = 0;
    if ( dword_2142594 == 0 )
    {
      v6 = curl_global_init(a1);
      if ( v6 == 0 )
      {
        Curl_cmalloc = (uint32_t)(uintptr_t)(a2);
        Curl_cfree = (uint32_t)(uintptr_t)(a3);
        Curl_cstrdup = (uint32_t)(uintptr_t)(a5);
        Curl_crealloc = (uint32_t)(uintptr_t)(a4);
        Curl_ccalloc = (uint32_t)(uintptr_t)(a6);
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: curl_global_cleanup  (binary VA: 0x1a49700)
// Original: curl_global_cleanup
// ----------------------------------------------------------------------------
int curl_global_cleanup()
{
  int result;

  result = dword_2142594;
  if ( dword_2142594 != 0 )
  {
    result = dword_2142594 - 1;
    dword_2142594 = result;
    if ( result == 0 )
    {
      result = Curl_global_host_cache_dtor();
      if ( (dword_2142598 & 1) != 0 )
        result = Curl_ssl_cleanup();
      dword_2142598 = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_init  (binary VA: 0x1a49760)
// Original: curl_easy_init
// ----------------------------------------------------------------------------
int curl_easy_init()
{
  int v0;
  int v1;
  int v2;
  uint32_t v4[4];

  if ( dword_2142594 != 0 || (v0 = curl_global_init(3), v1 = 0, v0 == 0) )
  {
    v2 = Curl_open(v4);
    v1 = 0;
    if ( v2 == 0 )
      return v4[0];
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_setopt  (binary VA: 0x1a497b0)
// Original: curl_easy_setopt
// ----------------------------------------------------------------------------
int curl_easy_setopt(int a1, int a2, ...)
{
  int result;
  va_list va;

  va_start(va, a2);
  result = 43;
  if ( a1 != 0 )
    return Curl_setopt(a1, a2, g4_va_cast<char *>(va));
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_perform  (binary VA: 0x1a497f0)
// Original: curl_easy_perform
// ----------------------------------------------------------------------------
int curl_easy_perform(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  result = 43;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 16);
    if ( v2 == 0 || *(uint32_t *)(v2 + 20) == 0 )
    {
      if ( *(uint8_t *)(a1 + 697) == 0 )
        goto LABEL_19;
      v3 = *(uint32_t *)(a1 + 4);
      if ( v3 == 2 )
        goto LABEL_19;
      if ( v3 == 1 )
      {
        Curl_hash_destroy(*(uint32_t *)a1);
        *(uint32_t *)(a1 + 4) = 0;
        *(uint32_t *)a1 = 0;
      }
      v4 = (int)(uintptr_t)(Curl_global_host_cache_init());
      if ( v4 != 0 )
      {
        *(uint32_t *)a1 = v4;
        *(uint32_t *)(a1 + 4) = 2;
      }
      else
      {
LABEL_19:
        if ( *(uint32_t *)a1 == 0 )
        {
          *(uint32_t *)(a1 + 4) = 1;
          v5 = (int)(uintptr_t)(Curl_mk_dnscache());
          *(uint32_t *)a1 = v5;
          result = 27;
          if ( v5 == 0 )
            return result;
        }
      }
    }
    if ( *(uint32_t *)(a1 + 1192) != 0 )
      return Curl_perform(a1);
    v6 = (int)(uintptr_t)(Curl_mk_connc(0, -1));
    *(uint32_t *)(a1 + 1192) = v6;
    result = 27;
    if ( v6 != 0 )
      return Curl_perform(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_cleanup  (binary VA: 0x1a498f0)
// Original: curl_easy_cleanup
// ----------------------------------------------------------------------------
int curl_easy_cleanup(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return Curl_close(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_easy_addmulti  (binary VA: 0x1a49920)
// Original: Curl_easy_addmulti
// ----------------------------------------------------------------------------
int Curl_easy_addmulti(int a1, int a2)
{
  int result;

  result = a2;
  *(uint32_t *)(a1 + 8) = a2;
  if ( a2 == 0 )
    *(uint32_t *)(a1 + 1188) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_easy_initHandleData  (binary VA: 0x1a49940)
// Original: Curl_easy_initHandleData
// ----------------------------------------------------------------------------
int Curl_easy_initHandleData(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  int result;
  uint16_t *v4;

  v1 = 240;
  v2 = (uint16_t *)(a1 + 20);
  if ( ((a1 + 20) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 21);
    *(uint8_t *)(a1 + 20) = 0;
    LOBYTE(v1) = -17;
    if ( ((a1 + 21) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  result = 0;
  memset(v2, 0, 4 * (v1 >> 2));
  v4 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v4++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  *(uint32_t *)(a1 + 32) = -1;
  *(uint32_t *)(a1 + 36) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_getinfo  (binary VA: 0x1a499d0)
// Original: curl_easy_getinfo
// ----------------------------------------------------------------------------
int curl_easy_getinfo(int a1, int a2, int a3)
{
  return Curl_getinfo(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: curl_easy_duphandle  (binary VA: 0x1a49a10)
// Original: curl_easy_duphandle
// ----------------------------------------------------------------------------
uint32_t * curl_easy_duphandle(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v1 = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0x86A0u));
  if ( v1 != nullptr )
  {
    v2 = ((int (*)(int))Curl_cmalloc)(256);
    v1[302] = v2;
    if ( v2 != 0 )
    {
      v1[303] = 256;
      if ( Curl_dupset(v1, a1) == 0 )
      {
        v1[298] = 0;
        v1[301] = -1;
        v1[249] = *(uint32_t *)(a1 + 996);
        *((uint8_t *)v1 + 988) = *(uint8_t *)(a1 + 988);
        v3 = *(uint32_t *)(a1 + 940);
        if ( v3 == 0
          || (v4 = (int)(uintptr_t)(Curl_cookie_init(a1, *(char **)(v3 + 4), v1[235], *(uint8_t *)(a1 + 488))), v1[235] = v4, v4 != 0) )
        {
          if ( *(uint32_t *)(a1 + 932) == 0 || (v5 = (int)(uintptr_t)(Curl_slist_duplicate(*(uint32_t *)(a1 + 932))), v1[233] = v5, v5 != 0) )
          {
            if ( *(uint32_t *)(a1 + 916) == 0 )
            {
LABEL_11:
              if ( *(uint32_t *)(a1 + 924) == 0 )
              {
LABEL_14:
                Curl_easy_initHandleData((int)(uintptr_t)(v1));
                v1[8615] = -1059136595;
                return v1;
              }
              v7 = ((int (*)(uint32_t))Curl_cstrdup)(*(uint32_t *)(a1 + 924));
              v1[231] = v7;
              if ( v7 != 0 )
              {
                *((uint8_t *)v1 + 928) = 1;
                goto LABEL_14;
              }
              goto LABEL_15;
            }
            v6 = ((int (*)(uint32_t))Curl_cstrdup)(*(uint32_t *)(a1 + 916));
            v1[229] = v6;
            if ( v6 != 0 )
            {
              *((uint8_t *)v1 + 920) = 1;
              goto LABEL_11;
            }
          }
        }
      }
    }
LABEL_15:
    v9 = v1[298];
    if ( v9 != 0 && *(uint32_t *)(v9 + 8) == 0 )
      Curl_rm_connc(v1[298]);
    if ( v1[302] != 0 )
      ((void (*)(uint32_t))Curl_cfree)(v1[302]);
    if ( v1[233] != 0 )
      curl_slist_free_all(v1[233]);
    if ( v1[229] != 0 )
      ((void (*)(uint32_t))Curl_cfree)(v1[229]);
    if ( v1[231] != 0 )
      ((void (*)(uint32_t))Curl_cfree)(v1[231]);
    Curl_freeset(v1);
    v10 = (int)(uintptr_t)(v1);
    v1 = nullptr;
    ((void (*)(int))Curl_cfree)(v10);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_reset  (binary VA: 0x1a49bf0)
// Original: curl_easy_reset
// ----------------------------------------------------------------------------
int curl_easy_reset(int a1)
{
  uint16_t *v1;
  int v2;
  unsigned int v3;
  uint16_t *v4;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;
  int result;

  v1 = (uint16_t *)(a1 + 260);
  Curl_safefree(*(uint32_t *)(a1 + 34224));
  v2 = *(uint32_t *)(a1 + 34260);
  *(uint32_t *)(a1 + 34224) = 0;
  Curl_safefree(v2);
  *(uint32_t *)(a1 + 34260) = 0;
  Curl_freeset(a1);
  v3 = 656;
  if ( ((a1 + 260) & 1) != 0 )
  {
    v1 = (uint16_t *)(a1 + 261);
    *(uint8_t *)(a1 + 260) = 0;
    LOBYTE(v3) = -113;
    if ( ((a1 + 261) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v3 -= 2;
  ++v1;
LABEL_3:
  memset(v1, 0, 4 * (v3 >> 2));
  v4 = &v1[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v4++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  v5 = (uint16_t *)(a1 + 944);
  Curl_init_userdefined(a1 + 260);
  v6 = 244;
  if ( ((a1 + 944) & 1) != 0 )
  {
    v5 = (uint16_t *)(a1 + 945);
    *(uint8_t *)(a1 + 944) = 0;
    LOBYTE(v6) = -13;
    if ( ((a1 + 945) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( (((uint8_t)a1 - 80) & 2) == 0 )
  {
    goto LABEL_9;
  }
  *v5 = 0;
  v6 -= 2;
  ++v5;
LABEL_9:
  memset(v5, 0, 4 * (v6 >> 2));
  v7 = &v5[2 * (v6 >> 2)];
  if ( (v6 & 2) != 0 )
    *v7++ = 0;
  if ( (v6 & 1) != 0 )
    *(uint8_t *)v7 = 0;
  result = Curl_easy_initHandleData(a1);
  *(uint32_t *)(a1 + 996) |= 0x10u;
  *(uint32_t *)(a1 + 33988) = -1;
  *(uint32_t *)(a1 + 33992) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_pause  (binary VA: 0x1a49d70)
// Original: curl_easy_pause
// ----------------------------------------------------------------------------
int curl_easy_pause(int *a1, char a2)
{
  unsigned int v2;
  int v3;
  int v4;
  size_t n;
  char *v6;
  int *v7;
  size_t v8;
  int v9;
  int v10;
  int v12;
  char *v13;
  int *v14;
  void *dest;
  int *v16;
  char *src;
  int v18;
  int v19;
  char *v20;

  v2 = (8 * a2) & 0x20 | a1[58] & 0xFFFFFFCF | -(a2 & 1) & 0x10;
  v3 = 0;
  a1[58] = v2;
  if ( (v2 & 0x10) == 0 )
  {
    v20 = (char *)a1[8503];
    v3 = 0;
    if ( v20 != nullptr )
    {
      v4 = a1[8505];
      n = a1[8504];
      a1[8503] = 0;
      v19 = v4;
      v6 = v20;
      v7 = a1;
      while ( 1 )
      {
        v8 = 0x4000;
        if ( n <= 0x4000 )
          v8 = n;
        v16 = v7;
        v9 = (int)(uintptr_t)(Curl_client_write(v7[8566], v19, v6, v8));
        v7 = v16;
        if ( v9 != 0 )
        {
LABEL_9:
          v10 = v9;
          goto LABEL_10;
        }
        if ( n != v8 && v16[8503] != 0 )
          break;
        v6 += v8;
        n -= v8;
        if ( n == 0 )
          goto LABEL_9;
      }
      v12 = v16[8503];
      v13 = v6;
      v14 = v16;
      src = v13;
      dest = (void *)((int (*)(int, size_t))Curl_crealloc)(v12, n);
      if ( dest != nullptr )
      {
        v14[8503] = (int)(uintptr_t)(dest);
        memcpy(dest, src, n);
        v14[8504] = n;
        v10 = 0;
      }
      else
      {
        ((void (*)(char *, uint32_t, int))Curl_cfree)(src, 0, v14[8503]);
        v14[8503] = 0;
        v10 = 27;
      }
LABEL_10:
      v18 = v10;
      ((void (*)(char *))Curl_cfree)(v20);
      return v18;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_recv  (binary VA: 0x1a49ef0)
// Original: curl_easy_recv
// ----------------------------------------------------------------------------
int curl_easy_recv(int a1, void *a2, size_t a3, int *a4)
{
  int result;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  result = 43;
  if ( a1 != 0 )
  {
    if ( *(uint8_t *)(a1 + 701) != 0 )
    {
      v5 = Curl_getconnectinfo(a1, &v7);
      if ( v5 == -1 )
      {
        Curl_failf(a1, "Failed to get recent socket");
        return 1;
      }
      else
      {
        *a4 = 0;
        result = Curl_read(v7, v5, a2, a3, (int)(uintptr_t)(&v6));
        if ( result == 0 )
          *a4 = v6;
      }
    }
    else
    {
      Curl_failf(a1, "CONNECT_ONLY is required!");
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_easy_send  (binary VA: 0x1a49fd0)
// Original: curl_easy_send
// ----------------------------------------------------------------------------
int curl_easy_send(int a1, int a2, int a3, uint32_t *a4)
{
  int result;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  result = 43;
  v7 = 0;
  if ( a1 != 0 )
  {
    if ( *(uint8_t *)(a1 + 701) != 0 )
    {
      v5 = Curl_getconnectinfo(a1, &v7);
      if ( v5 == -1 )
      {
        Curl_failf(a1, "Failed to get recent socket");
        return 1;
      }
      else
      {
        *a4 = 0;
        result = Curl_write(v7, v5, a2, a3, &v6);
        if ( v6 == -1 )
        {
          return 55;
        }
        else if ( result != 0 || v6 != 0 )
        {
          *a4 = v6;
        }
        else
        {
          return 81;
        }
      }
    }
    else
    {
      Curl_failf(a1, "CONNECT_ONLY is required!");
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_initinfo  (binary VA: 0x1a4a0e0)
// Original: Curl_initinfo
// ----------------------------------------------------------------------------
int Curl_initinfo(int a1)
{
  int v1;

  *(uint64_t *)(a1 + 1024) = 0;
  *(uint64_t *)(a1 + 1032) = 0;
  *(uint64_t *)(a1 + 1048) = 0;
  v1 = *(uint32_t *)(a1 + 34340);
  *(uint32_t *)(a1 + 34300) = 0;
  *(uint32_t *)(a1 + 34308) = 0;
  *(uint64_t *)(a1 + 1056) = 0;
  *(uint32_t *)(a1 + 34312) = -1;
  *(uint64_t *)(a1 + 1000) = 0;
  *(uint64_t *)(a1 + 1064) = 0;
  if ( v1 != 0 )
    ((void (*)(int))Curl_cfree)(v1);
  *(uint32_t *)(a1 + 34340) = 0;
  *(uint32_t *)(a1 + 34320) = 0;
  *(uint32_t *)(a1 + 34324) = 0;
  *(uint32_t *)(a1 + 34336) = 0;
  *(uint8_t *)(a1 + 34348) = 0;
  *(uint8_t *)(a1 + 34400) = 0;
  *(uint32_t *)(a1 + 34396) = 0;
  *(uint32_t *)(a1 + 34448) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_getinfo  (binary VA: 0x1a4a1b0)
// Original: Curl_getinfo
// ----------------------------------------------------------------------------
int Curl_getinfo(int a1, unsigned int a2, uint32_t *a3)
{
  int result;
  int v4;
  uint32_t *v5;
  double *v6;
  uint32_t *v7;
  long double v8; // fst7
  void *v9;
  int v10;
  uint32_t *v11;

  result = 43;
  if ( a1 == 0 )
    return result;
  v4 = a2 & 0xF00000;
  if ( (a2 & 0xF00000) == 0x200000 )
  {
    v7 = a3;
    if ( a3 == nullptr )
      return result;
    v11 = nullptr;
    v5 = nullptr;
    v6 = nullptr;
  }
  else if ( (a2 & 0xF00000) <= 0x200000 )
  {
    if ( v4 != 0x100000 )
      return 43;
    v5 = a3;
    if ( a3 == nullptr )
      return result;
    v11 = nullptr;
    v6 = nullptr;
    v7 = nullptr;
  }
  else if ( v4 == 3145728 )
  {
    v6 = (double *)a3;
    if ( a3 == nullptr )
      return result;
    v11 = nullptr;
    v5 = nullptr;
    v7 = nullptr;
  }
  else
  {
    if ( v4 != 0x400000 )
      return 43;
    v11 = a3;
    if ( a3 == nullptr )
      return result;
    v5 = nullptr;
    v6 = nullptr;
    v7 = nullptr;
  }
  if ( a2 == 2097187 )
  {
    *v7 = *(uint8_t *)(a1 + 34316);
    return 0;
  }
  if ( a2 > 0x200023 )
  {
    if ( a2 == 3145736 )
    {
      *v6 = (double)*(int64_t *)(a1 + 964);
      return 0;
    }
    if ( a2 > 0x300008 )
    {
      if ( a2 == 3145745 )
      {
        *v6 = *(double *)(a1 + 1056);
        return 0;
      }
      else if ( a2 > 0x300011 )
      {
        if ( a2 == 4194331 )
        {
          *v11 = Curl_ssl_engines_list(a1);
          return 0;
        }
        else if ( a2 > 0x40001B )
        {
          if ( (Elf32_Rel *)a2 == (Elf32_Rel *)(&stru_40001C) )
          {
            *v11 = (uint32_t)(uintptr_t)(Curl_cookie_list(a1));
            return 0;
          }
          else
          {
            if ( a2 != 4194338 )
              return 43;
            *v11 = a1 + 34452;
            return 0;
          }
        }
        else if ( a2 == 3145747 )
        {
          *v6 = *(double *)(a1 + 1064);
          return 0;
        }
        else
        {
          if ( a2 != 3145761 )
            return 43;
          *v6 = *(double *)(a1 + 1040);
          return 0;
        }
      }
      else if ( a2 == 3145738 )
      {
        *v6 = (double)*(int64_t *)(a1 + 1016);
        return 0;
      }
      else if ( a2 < 0x30000A )
      {
        *v6 = (double)*(int64_t *)(a1 + 1008);
        return 0;
      }
      else
      {
        if ( a2 == 3145743 )
        {
          v8 = -1.0;
          if ( (*(uint8_t *)(a1 + 996) & 0x40) != 0 )
            v8 = (long double)*(int64_t *)(a1 + 948);
        }
        else
        {
          if ( a2 != 3145744 )
            return 43;
          v8 = -1.0;
          if ( (*(uint8_t *)(a1 + 996) & 0x20) != 0 )
            v8 = (long double)*(int64_t *)(a1 + 956);
        }
        *v6 = v8;
        return 0;
      }
    }
    if ( a2 == 2097194 )
    {
      *v7 = *(uint32_t *)(a1 + 34448);
      return 0;
    }
    if ( a2 > 0x20002A )
    {
      if ( a2 == 3145733 )
      {
        *v6 = *(double *)(a1 + 1032);
        return 0;
      }
      else if ( a2 > 0x300005 )
      {
        if ( a2 == 3145734 )
          *v6 = *(double *)(a1 + 1048);
        else
          *v6 = (double)*(int64_t *)(a1 + 972);
        return 0;
      }
      else if ( (char *)a2 == "_ZN20hkpBvTreeStreamAgent7cleanupER18hkpConstraintOwner" )
      {
        *v6 = *(double *)(a1 + 1000);
        return 0;
      }
      else
      {
        if ( a2 != 3145732 )
          return 43;
        *v6 = *(double *)(a1 + 1024);
        return 0;
      }
    }
    switch ( a2 )
    {
      case 0x200025u:
        *v7 = *(uint32_t *)(a1 + 34248);
        return 0;
      case 0x200026u:
        v10 = *(uint32_t *)(a1 + 34252);
LABEL_79:
        *v7 = v10;
        return 0;
      case 0x200027u:
        *v7 = *(uint32_t *)(a1 + 34256);
        return 0;
      case 0x200028u:
        *v7 = *(uint32_t *)(a1 + 34396);
        return 0;
      default:
        return 43;
    }
  }
  if ( a2 == 2097163 )
  {
    *v7 = *(uint32_t *)(a1 + 34320);
    return 0;
  }
  if ( a2 <= 0x20000B )
  {
    switch ( a2 )
    {
      case 0x100001u:
        v9 = *(void **)(a1 + 916);
        if ( v9 == nullptr )
          v9 = &unk_1B15112;
        *v5 = (uint32_t)(uintptr_t)(v9);
        return 0;
      case 0x100012u:
        *v5 = *(uint32_t *)(a1 + 34340);
        return 0;
      case 0x100015u:
        *v5 = *(uint32_t *)(a1 + 612);
        return 0;
      case 0x10001Eu:
        *v5 = *(uint32_t *)(a1 + 34192);
        return 0;
      case 0x10001Fu:
        *v5 = *(uint32_t *)(a1 + 34344);
        return 0;
      case 0x100020u:
        *v5 = a1 + 34348;
        return 0;
      case 0x100024u:
        *v5 = *(uint32_t *)(a1 + 856);
        return 0;
      case 0x100029u:
        *v5 = a1 + 34400;
        return 0;
      case 0x200002u:
        *v7 = *(uint32_t *)(a1 + 34300);
        return 0;
      default:
        return 43;
    }
  }
  if ( a2 == 2097174 )
  {
    *v7 = *(uint32_t *)(a1 + 34304);
    return 0;
  }
  if ( a2 > 0x200016 )
  {
    if ( a2 == 2097177 )
    {
      *v7 = *(uint32_t *)(a1 + 34032);
      return 0;
    }
    if ( a2 <= 0x200019 )
    {
      if ( a2 == 2097175 )
        *v7 = *(uint32_t *)(a1 + 34332);
      else
        *v7 = *(uint32_t *)(a1 + 34328);
      return 0;
    }
    if ( a2 == 2097178 )
    {
      *v7 = *(uint32_t *)(a1 + 34336);
      return 0;
    }
    if ( a2 != 2097181 )
      return 43;
    v10 = Curl_getconnectinfo(a1, 0);
    if ( v10 == -1 )
    {
      *v7 = -1;
      return 0;
    }
    goto LABEL_79;
  }
  if ( a2 == 2097165 )
  {
    *v7 = *(uint32_t *)(a1 + 544);
    return 0;
  }
  else if ( a2 < 0x20000D )
  {
    *v7 = *(uint32_t *)(a1 + 34324);
    return 0;
  }
  else
  {
    if ( a2 != 2097166 )
    {
      if ( a2 == 2097172 )
      {
        *v7 = *(uint32_t *)(a1 + 304);
        return 0;
      }
      return 43;
    }
    *v7 = *(uint32_t *)(a1 + 34312);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_init  (binary VA: 0x1a4a840)
// Original: Curl_hash_init
// ----------------------------------------------------------------------------
char Curl_hash_init(int *a1, int a2, int a3, int a4, int a5)
{
  char result;
  int v6;
  int v7;
  int v8;
  int v9;

  if ( a3 == 0 || a2 == 0 || a5 == 0 || a4 == 0 )
    return 1;
  a1[1] = a3;
  a1[4] = a2;
  a1[3] = a5;
  a1[2] = a4;
  a1[5] = 0;
  v6 = ((int (*)(int))Curl_cmalloc)(4 * a2);
  *a1 = v6;
  result = 1;
  if ( v6 != 0 )
  {
    result = 0;
    if ( a2 > 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        *(uint32_t *)(v6 + 4 * v7) = (uint32_t)(uintptr_t)(Curl_llist_alloc(sub_1A4A7E0));
        v6 = *a1;
        if ( *(uint32_t *)(*a1 + 4 * v7) == 0 )
          break;
        if ( ++v7 == a2 )
          return 0;
      }
      if ( v7 != 0 )
      {
        v8 = 4 * v7 - 4;
        do
        {
          v9 = *(uint32_t *)(v6 + v8);
          v8 -= 4;
          Curl_llist_destroy(v9, 0);
          --v7;
          v6 = *a1;
        }
        while ( v7 != 0 );
      }
      ((void (*)(int))Curl_cfree)(v6);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_alloc  (binary VA: 0x1a4a960)
// Original: Curl_hash_alloc
// ----------------------------------------------------------------------------
int * Curl_hash_alloc(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int *v7;

  if ( a2 == 0 || a1 == 0 || a4 == 0 || a3 == 0 )
    return nullptr;
  v4 = (int *)((int (*)(int))Curl_cmalloc)(24);
  if ( v4 != nullptr )
  {
    LOBYTE(v5) = Curl_hash_init(v4, a1, a2, a3, a4);
    if ( v5 != 0 )
    {
      v7 = v4;
      v4 = nullptr;
      ((void (*)(int *))Curl_cfree)(v7);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_add  (binary VA: 0x1a4aa10)
// Original: Curl_hash_add
// ----------------------------------------------------------------------------
int Curl_hash_add(int *a1, void *src, size_t a3, int a4)
{
  int v4;
  size_t n;
  uint32_t *v6;
  int i;
  uint32_t *v8;
  int v9;
  void *dest;
  int v12;
  uint32_t *v13;
  void *v14;
  int v15;

  v4 = (int)(uintptr_t)(a1);
  n = a3;
  v12 = *a1;
  v15 = *(uint32_t *)(v12 + 4 * ((int (*)(void *, size_t, int))a1[1])(src, a3, a1[4]));
  if ( *(uint32_t *)v15 != 0 )
  {
    v6 = *(uint32_t **)v15;
    for ( i = ((int (*)(uint32_t, uint32_t, void *, size_t))a1[2])(
                *(uint32_t *)(*v6 + 4),
                *(uint32_t *)(*v6 + 8),
                src,
                a3);
          ;
          i = ((int (*)(uint32_t, uint32_t, void *, size_t))a1[2])(
                *(uint32_t *)(*v6 + 4),
                *(uint32_t *)(*v6 + 8),
                src,
                a3) )
    {
      if ( i != 0 )
      {
        v8 = v6;
        v4 = (int)(uintptr_t)(a1);
        n = a3;
        Curl_llist_remove(v15, v8, a1);
        --a1[5];
        goto LABEL_7;
      }
      v6 = (uint32_t *)v6[2];
      if ( v6 == nullptr )
        break;
    }
    v4 = (int)(uintptr_t)(a1);
    n = a3;
  }
LABEL_7:
  v9 = ((int (*)(int))Curl_cmalloc)(12);
  if ( v9 == 0 )
    return 0;
  v13 = (uint32_t *)v9;
  dest = (void *)((int (*)(size_t))Curl_cmalloc)(n);
  if ( dest != nullptr )
  {
    v14 = dest;
    memcpy(dest, src, n);
    v13[1] = (uint32_t)(uintptr_t)(v14);
    v13[2] = n;
    *v13 = a4;
    if ( Curl_llist_insert_next(v15, *(uint32_t *)(v15 + 4), v13) != 0 )
    {
      ++*(uint32_t *)(v4 + 20);
    }
    else
    {
      ((void (*)(uint32_t))Curl_cfree)(v13[1]);
      ((void (*)(uint32_t *))Curl_cfree)(v13);
      return 0;
    }
    return a4;
  }
  else
  {
    ((void (*)(uint32_t *))Curl_cfree)(v13);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_delete  (binary VA: 0x1a4abc0)
// Original: Curl_hash_delete
// ----------------------------------------------------------------------------
int Curl_hash_delete(int *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int result;
  uint32_t **v6;

  v3 = *a1;
  v6 = *(uint32_t ***)(v3 + 4 * ((int (*)(int, int, int))a1[1])(a2, a3, a1[4]));
  v4 = *v6;
  result = 1;
  if ( *v6 != nullptr )
  {
    do
    {
      if ( ((int (*)(uint32_t, uint32_t, int, int))a1[2])(*(uint32_t *)(*v4 + 4), *(uint32_t *)(*v4 + 8), a2, a3) != 0 )
      {
        Curl_llist_remove(v6, v4, a1);
        return 0;
      }
      v4 = (uint32_t *)v4[2];
    }
    while ( v4 != nullptr );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_pick  (binary VA: 0x1a4ac60)
// Original: Curl_hash_pick
// ----------------------------------------------------------------------------
int Curl_hash_pick(int *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int result;
  int v6;

  v3 = *a1;
  v4 = **(uint32_t ***)(v3 + 4 * ((int (*)(int, int, int))a1[1])(a2, a3, a1[4]));
  result = 0;
  if ( v4 != nullptr )
  {
    do
    {
      v6 = *v4;
      if ( ((int (*)(uint32_t, uint32_t, int, int))a1[2])(*(uint32_t *)(*v4 + 4), *(uint32_t *)(*v4 + 8), a2, a3) != 0 )
        return *(uint32_t *)v6;
      v4 = (uint32_t *)v4[2];
    }
    while ( v4 != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_clean  (binary VA: 0x1a4ace0)
// Original: Curl_hash_clean
// ----------------------------------------------------------------------------
int Curl_hash_clean(uint32_t *a1)
{
  int v1;

  if ( (int)a1[4] > 0 )
  {
    v1 = 0;
    do
    {
      Curl_llist_destroy(*(uint32_t *)(*a1 + 4 * v1), a1);
      *(uint32_t *)(*a1 + 4 * v1++) = 0;
    }
    while ( a1[4] > v1 );
  }
  return ((int (*)(uint32_t))Curl_cfree)(*a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_clean_with_criterium  (binary VA: 0x1a4ad40)
// Original: Curl_hash_clean_with_criterium
// ----------------------------------------------------------------------------
uint32_t * Curl_hash_clean_with_criterium(uint32_t *a1, int a2, int (*a3)(int, uint32_t))
{
  uint32_t *result;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;

  result = (uint32_t *)a1[4];
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v7 = 0;
    do
    {
      result = *(uint32_t **)(*a1 + 4 * v7);
      v6 = result;
      v4 = *result;
      if ( *result != 0 )
      {
        while ( 1 )
        {
          v5 = *(uint32_t *)(v4 + 8);
          result = (uint32_t *)a3(a2, **(uint32_t **)v4);
          if ( result != nullptr )
          {
            result = (uint32_t *)Curl_llist_remove(v6, v4, a1);
            --a1[5];
            if ( v5 == 0 )
              break;
          }
          else if ( v5 == 0 )
          {
            break;
          }
          v4 = v5;
        }
      }
      ++v7;
    }
    while ( a1[4] > v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_destroy  (binary VA: 0x1a4adf0)
// Original: Curl_hash_destroy
// ----------------------------------------------------------------------------
int Curl_hash_destroy(uint32_t *a1)
{
  int result;

  if ( a1 != nullptr )
  {
    Curl_hash_clean(a1);
    return ((int (*)(uint32_t *))Curl_cfree)(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_hash_str  (binary VA: 0x1a4ae30)
// Original: Curl_hash_str
// ----------------------------------------------------------------------------
int Curl_hash_str(unsigned int a1, int a2, unsigned int a3)
{
  unsigned int v3;
  char *v4;
  int v5;
  int v6;

  v3 = 5381;
  v4 = (char *)a1;
  if ( a1 < a1 + a2 )
  {
    do
    {
      v5 = 33 * v3;
      v6 = *v4++;
      v3 = v5 ^ v6;
    }
    while ( v4 != (char *)(a1 + a2) );
  }
  return v3 % a3;
}

// ----------------------------------------------------------------------------
// Function: Curl_str_key_compare  (binary VA: 0x1a4ae70)
// Original: Curl_str_key_compare
// ----------------------------------------------------------------------------
bool Curl_str_key_compare(uint8_t *s1, size_t n, uint8_t *s2, int a4)
{
  bool result;

  result = false;
  if ( n == a4 && *s1 == *s2 )
    return memcmp(s1, s2, n) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_global_host_cache_init  (binary VA: 0x1a4af50)
// Original: Curl_global_host_cache_init
// ----------------------------------------------------------------------------
int * Curl_global_host_cache_init()
{
  int *result;
  int v1;
  int v2;

  result = (int *)(uintptr_t)(((int *)(&dword_21425A0)));
  if ( dword_214259C == 0 )
  {
    LOBYTE(v1) = Curl_hash_init(((int *)(&dword_21425A0)), 7, (int)(uintptr_t)(Curl_hash_str), (int)(uintptr_t)(Curl_str_key_compare), (int)(uintptr_t)(sub_1A4AF00));
    v2 = v1;
    result = nullptr;
    if ( v2 == 0 )
    {
      dword_214259C = 1;
      return (int *)(uintptr_t)(((int *)(&dword_21425A0)));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_global_host_cache_dtor  (binary VA: 0x1a4afe0)
// Original: Curl_global_host_cache_dtor
// ----------------------------------------------------------------------------
int Curl_global_host_cache_dtor()
{
  int result;

  if ( dword_214259C != 0 )
  {
    result = Curl_hash_clean((&dword_21425A0));
    dword_214259C = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_num_addresses  (binary VA: 0x1a4b020)
// Original: Curl_num_addresses
// ----------------------------------------------------------------------------
int Curl_num_addresses(int a1)
{
  int v1;
  int result;

  v1 = a1;
  for ( result = 0; v1 != 0; ++result )
    v1 = *(uint32_t *)(v1 + 28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_printable_address  (binary VA: 0x1a4b040)
// Original: Curl_printable_address
// ----------------------------------------------------------------------------
int Curl_printable_address(int a1, char *a2, int a3)
{
  if ( *(uint32_t *)(a1 + 4) == 2 )
    return (int)(uintptr_t)(Curl_inet_ntop(2, *(uint32_t *)(a1 + 24) + 4, a2, a3));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_hostcache_prune  (binary VA: 0x1a4b0a0)
// Original: Curl_hostcache_prune
// ----------------------------------------------------------------------------
uint32_t * Curl_hostcache_prune(uint32_t *a1)
{
  uint32_t *result;
  uint32_t *v2;
  typedef time_t _g4_t_timer;
  typedef uint32_t _g4_t_v4[5];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_timer)) > _g4_s0 ? (4u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  if ( a1[151] != -1 )
  {
    result = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      if ( a1[4] != 0 )
        Curl_share_lock(a1, 3, 2);
      time(&timer);
      v2 = (uint32_t *)*a1;
      v4[0] = a1[151];
      v4[1] = timer;
      Curl_hash_clean_with_criterium(v2, (int)(uintptr_t)(v4), (int (*)(int, uint32_t))sub_1A4AEE0);
      result = (uint32_t *)a1[4];
      if ( result != nullptr )
        return (uint32_t *)Curl_share_unlock(a1, 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_cache_addr  (binary VA: 0x1a4b140)
// Original: Curl_cache_addr
// ----------------------------------------------------------------------------
int Curl_cache_addr(int **a1, int a2, const char *a3, int a4)
{
  const char *v4;
  int v5;
  char *v6;
  size_t v7;
  uint32_t *v8;
  int v9;
  char *s;

  v4 = (const char *)curl_maprintf("%s:%d", a3, a4);
  v5 = 0;
  v6 = (char *)v4;
  if ( v4 != nullptr )
  {
    v7 = strlen(v4);
    v8 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 12);
    v5 = (int)(uintptr_t)(v8);
    if ( v8 != nullptr )
    {
      v8[2] = 0;
      *v8 = a2;
      time((time_t *)(v8 + 1));
      if ( *(uint32_t *)(v5 + 4) == 0 )
        *(uint32_t *)(v5 + 4) = 1;
      v9 = Curl_hash_add(*a1, v6, v7 + 1, v5);
      if ( v9 != 0 )
      {
        ++*(uint32_t *)(v9 + 8);
        v5 = v9;
      }
      else
      {
        s = (char *)v5;
        v5 = 0;
        ((void (*)(char *))Curl_cfree)(s);
      }
    }
    ((void (*)(char *))Curl_cfree)(v6);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: Curl_resolv  (binary VA: 0x1a4b250)
// Original: Curl_resolv
// ----------------------------------------------------------------------------
int Curl_resolv(int ***a1, char *a2, int a3, int *a4)
{
  int **v4;
  const char *v5;
  int v6;
  size_t v7;
  int v8;
  int v9;
  int v10;
  typedef char *_g4_t_s;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int *_g4_t_v15;
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v14)) > _g4_s2 ? (36u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_timer)) > _g4_s4 ? (44u + sizeof(_g4_t_timer)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 44u);

  v4 = *a1;
  *a4 = 0;
  v5 = (const char *)curl_maprintf("%s:%d", a2, a3);
  v6 = (int)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    v7 = strlen(v5);
    if ( v4[4] != nullptr )
      Curl_share_lock(v4, 3, 2);
    v8 = Curl_hash_pick(*v4, v6, v7 + 1);
    s = (char *)v6;
    v9 = -1;
    ((void (*)(char *))Curl_cfree)(s);
    if ( v8 != 0 )
    {
      if ( v4[151] != (int *)-1
        && *v4 != nullptr
        && (time(&timer), v10 = timer - *(uint32_t *)(v8 + 4), (int)(uintptr_t)(v15 = v4[151]) <= v10) )
      {
        v8 = 0;
        Curl_hash_clean_with_criterium(*v4, (int)(uintptr_t)(&v15), (int (*)(int, uint32_t))sub_1A4AEE0);
      }
      else
      {
        ++*(uint32_t *)(v8 + 8);
        v9 = 0;
      }
    }
    if ( v4[4] != nullptr )
      Curl_share_unlock(v4, 3);
    if ( v8 != 0 )
      goto LABEL_12;
    if ( (uint8_t)Curl_ipvalid(a1) != 0 )
    {
      v13 = Curl_getaddrinfo((int)(uintptr_t)(a1), a2, a3, (int)(uintptr_t)(&v14));
      if ( v13 != 0 )
      {
        if ( v4[4] != nullptr )
          Curl_share_lock(v4, 3, 2);
        v8 = Curl_cache_addr(v4, v13, a2, a3);
        if ( v4[4] != nullptr )
          Curl_share_unlock(v4, 3);
        if ( v8 != 0 )
          v9 = 0;
        else
          Curl_freeaddrinfo(v13);
        goto LABEL_12;
      }
      if ( v14 == 0 )
      {
LABEL_12:
        *a4 = v8;
        return v9;
      }
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: Curl_resolv_timeout  (binary VA: 0x1a4b460)
// Original: Curl_resolv_timeout
// ----------------------------------------------------------------------------
int Curl_resolv_timeout(int ***a1, char *a2, int a3, int *a4, int a5)
{
  *a4 = 0;
  if ( a5 != 0 )
    Curl_infof(*a1, "timeout on name lookup is not supported\n");
  return Curl_resolv(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: Curl_resolv_unlock  (binary VA: 0x1a4b4e0)
// Original: Curl_resolv_unlock
// ----------------------------------------------------------------------------
int Curl_resolv_unlock(int a1, uint32_t *a2)
{
  bool v2;
  int result;

  if ( *(uint32_t *)(a1 + 16) != 0 )
    Curl_share_lock(a1, 3, 2);
  v2 = a2[2]-- == 1;
  if ( v2 && a2[1] == 0 )
  {
    Curl_freeaddrinfo(*a2);
    ((void (*)(uint32_t *))Curl_cfree)(a2);
  }
  result = *(uint32_t *)(a1 + 16);
  if ( result != 0 )
    return Curl_share_unlock(a1, 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_mk_dnscache  (binary VA: 0x1a4b580)
// Original: Curl_mk_dnscache
// ----------------------------------------------------------------------------
int * Curl_mk_dnscache()
{
  return Curl_hash_alloc(7, (int)(uintptr_t)(Curl_hash_str), (int)(uintptr_t)(Curl_str_key_compare), (int)(uintptr_t)(sub_1A4AF00));
}

// ----------------------------------------------------------------------------
// Function: Curl_ipvalid  (binary VA: 0x1a4b5c0)
// Original: Curl_ipvalid
// ----------------------------------------------------------------------------
bool Curl_ipvalid(int a1)
{
  return *(uint32_t *)(a1 + 488) != 2;
}

// ----------------------------------------------------------------------------
// Function: Curl_ipv4_resolve_r  (binary VA: 0x1a4b5e0)
// Original: Curl_ipv4_resolve_r
// ----------------------------------------------------------------------------
int Curl_ipv4_resolve_r(char *name, int a2)
{
  int result;
  struct hostent *v3;
  uint8_t v4[16];

  if ( (int)Curl_inet_pton(2, name, v4) > 0 )
    return (int)(uintptr_t)(Curl_ip2addr(2, v4, name, a2));
  v3 = (struct hostent *)(gethostbyname(name));
  result = 0;
  if ( v3 != nullptr )
    return (int)(uintptr_t)(Curl_he2ai(v3, a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_getaddrinfo  (binary VA: 0x1a4b670)
// Original: Curl_getaddrinfo
// ----------------------------------------------------------------------------
int Curl_getaddrinfo(uint32_t *a1, char *a2, int a3, uint32_t *a4)
{
  int result;

  *a4 = 0;
  result = Curl_ipv4_resolve_r(a2, a3);
  if ( result == 0 )
  {
    Curl_infof(*a1, "Curl_ipv4_resolve_r failed for %s\n");
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_inet_ntop  (binary VA: 0x1a4b6f0)
// Original: Curl_inet_ntop
// ----------------------------------------------------------------------------
char * Curl_inet_ntop(int a1, int a2, int a3, uint8_t *a4, char *dest, unsigned int a6)
{
  char *v6;
  char *v8;
  int v9;
  unsigned int v10;
  bool v11;
  char *v12;
  unsigned int v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_src[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_src)) > _g4_s1 ? (16u + sizeof(_g4_t_src)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);

  v6 = dest;
  if ( a3 == 2 )
  {
    v14 = a4[3];
    src[0] = 0;
    curl_msnprintf(src, 16, "%d.%d.%d.%d", *a4, a4[1], a4[2], v14);
    v8 = src;
    do
    {
      v9 = *(uint32_t *)v8;
      v8 += 4;
      v10 = ~v9 & (v9 - 16843009) & 0x80808080;
    }
    while ( v10 == 0 );
    v11 = (~v9 & (v9 - 16843009) & 0x8080) == 0;
    if ( (~v9 & (v9 - 16843009) & 0x8080) == 0 )
      v10 >>= 16;
    v12 = v8 + 2;
    if ( v11 )
      v8 += 2;
    v13 = &v8[-__CFADD__((uint8_t)v10, (uint8_t)v10) - 3] - src;
    if ( a6 > v13 && v13 != 0 )
    {
      strcpy(dest, src);
    }
    else
    {
      *(uint32_t *)__errno(v12, v13) = 28;
      return nullptr;
    }
  }
  else
  {
    *(uint32_t *)__errno(a1, a2) = 97;
    return nullptr;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: Curl_inet_pton  (binary VA: 0x1a4b7f0)
// Original: Curl_inet_pton
// ----------------------------------------------------------------------------
int Curl_inet_pton(int a1, int a2, int a3, char *a4, uint32_t *a5)
{
  int result;
  int *v7;
  int v8;
  int c;
  char *v10;
  uint8_t v11;
  unsigned int v12;
  typedef int *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  if ( a3 == 2 )
  {
    LOBYTE(v15) = 0;
    v7 = &v15;
    v14 = 0;
    v8 = 0;
LABEL_5:
    while ( 2 )
    {
      c = *a4++;
      if ( c != 0 )
      {
        while ( 1 )
        {
          v13 = v7;
          v10 = (char *)(strchr("0123456789", c));
          v7 = v13;
          if ( v10 == nullptr )
            break;
          v11 = *(uint8_t *)v13;
          if ( v8 != 0 && v11 == 0 )
            return 0;
          v12 = &v10[10 * v11] - "0123456789";
          if ( v12 > 0xFF )
            return 0;
          *(uint8_t *)v13 = v12;
          if ( v8 != 0 )
          {
            v8 = 1;
            goto LABEL_5;
          }
          if ( ++v14 > 4 )
            return 0;
          c = *a4++;
          LOWORD(v8) = 1;
          if ( c == 0 )
            goto LABEL_13;
        }
        if ( c == 46 && v8 != 0 && v14 != 4 )
        {
          *((uint8_t *)v13 + 1) = 0;
          v8 = 0;
          v7 = (int *)((char *)v13 + 1);
          continue;
        }
        return 0;
      }
      else
      {
LABEL_13:
        result = 0;
        if ( v14 > 3 )
        {
          *a5 = v15;
          return 1;
        }
      }
      break;
    }
  }
  else
  {
    *(uint32_t *)__errno(a1, a2) = 97;
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_llist_alloc  (binary VA: 0x1a4b920)
// Original: Curl_llist_alloc
// ----------------------------------------------------------------------------
uint32_t * Curl_llist_alloc(int a1)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x10u));
  if ( result != nullptr )
  {
    result[3] = 0;
    result[2] = a1;
    *result = 0;
    result[1] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_llist_insert_next  (binary VA: 0x1a4b970)
// Original: Curl_llist_insert_next
// ----------------------------------------------------------------------------
int Curl_llist_insert_next(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int result;
  int v5;
  int v6;
  int v7;

  v3 = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0xCu));
  result = 0;
  if ( v3 != nullptr )
  {
    *v3 = a3;
    if ( a1[3] != 0 )
    {
      if ( a2 != 0 )
      {
        v5 = *(uint32_t *)(a2 + 8);
        v3[1] = a2;
        v3[2] = v5;
        v6 = *(uint32_t *)(a2 + 8);
        if ( v6 != 0 )
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v3);
        else
          a1[1] = (uint32_t)(uintptr_t)(v3);
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v3);
      }
      else
      {
        v7 = *a1;
        v3[1] = 0;
        v3[2] = v7;
        *(uint32_t *)(*a1 + 4) = (uint32_t)(uintptr_t)(v3);
        *a1 = (uint32_t)(uintptr_t)(v3);
      }
    }
    else
    {
      *a1 = (uint32_t)(uintptr_t)(v3);
      v3[1] = 0;
      *(uint32_t *)(*a1 + 8) = 0;
      a1[1] = (uint32_t)(uintptr_t)(v3);
    }
    ++a1[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_llist_remove  (binary VA: 0x1a4ba30)
// Original: Curl_llist_remove
// ----------------------------------------------------------------------------
int Curl_llist_remove(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v5;

  if ( a2 != nullptr && *(uint32_t *)(a1 + 12) != 0 )
  {
    if ( *(uint32_t **)a1 == a2 )
    {
      v5 = a2[2];
      *(uint32_t *)a1 = v5;
      if ( v5 != 0 )
        *(uint32_t *)(a2[2] + 4) = 0;
      else
        *(uint32_t *)(a1 + 4) = 0;
    }
    else
    {
      *(uint32_t *)(a2[1] + 8) = a2[2];
      v3 = a2[2];
      if ( v3 != 0 )
        *(uint32_t *)(v3 + 4) = a2[1];
      else
        *(uint32_t *)(a1 + 4) = a2[1];
    }
    (*(void (**)(int, uint32_t))(a1 + 8))(a3, *a2);
    ((void (*)(uint32_t *))Curl_cfree)(a2);
    --*(uint32_t *)(a1 + 12);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: Curl_llist_destroy  (binary VA: 0x1a4bae0)
// Original: Curl_llist_destroy
// ----------------------------------------------------------------------------
int Curl_llist_destroy(int a1, int a2)
{
  int result;

  if ( a1 != 0 )
  {
    while ( *(uint32_t *)(a1 + 12) != 0 )
      Curl_llist_remove(a1, *(uint32_t **)(a1 + 4), a2);
    return ((int (*)(int))Curl_cfree)(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_llist_count  (binary VA: 0x1a4bb30)
// Original: Curl_llist_count
// ----------------------------------------------------------------------------
int Curl_llist_count(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: Curl_llist_move  (binary VA: 0x1a4bb40)
// Original: Curl_llist_move
// ----------------------------------------------------------------------------
int Curl_llist_move(uint32_t *a1, int a2, uint32_t *a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = 0;
  if ( a2 != 0 )
  {
    v5 = a1[3];
    if ( v5 != 0 )
    {
      if ( *a1 == a2 )
      {
        v9 = *(uint32_t *)(a2 + 8);
        *a1 = v9;
        if ( v9 != 0 )
        {
          *(uint32_t *)(*(uint32_t *)(a2 + 8) + 4) = 0;
          v5 = a1[3];
        }
        else
        {
          a1[1] = 0;
        }
      }
      else
      {
        *(uint32_t *)(*(uint32_t *)(a2 + 4) + 8) = *(uint32_t *)(a2 + 8);
        v6 = *(uint32_t *)(a2 + 8);
        if ( v6 != 0 )
        {
          *(uint32_t *)(v6 + 4) = *(uint32_t *)(a2 + 4);
          v5 = a1[3];
        }
        else
        {
          v5 = a1[3];
          a1[1] = *(uint32_t *)(a2 + 4);
        }
      }
      a1[3] = v5 - 1;
      if ( a3[3] != 0 )
      {
        v7 = *(uint32_t *)(a4 + 8);
        *(uint32_t *)(a2 + 4) = a4;
        *(uint32_t *)(a2 + 8) = v7;
        v8 = *(uint32_t *)(a4 + 8);
        if ( v8 != 0 )
          *(uint32_t *)(v8 + 4) = a2;
        else
          a3[1] = a2;
        *(uint32_t *)(a4 + 8) = a2;
      }
      else
      {
        *a3 = a2;
        *(uint32_t *)(a2 + 4) = 0;
        *(uint32_t *)(*a3 + 8) = 0;
        a3[1] = a2;
      }
      ++a3[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_msnprintf  (binary VA: 0x1a4bd80)
// Original: curl_msnprintf
// ----------------------------------------------------------------------------
int curl_msnprintf(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  return curl_mvsnprintf(a1, a2, a3, g4_va_cast<char *>(va));
}

// ----------------------------------------------------------------------------
// Function: curl_mvsnprintf  (binary VA: 0x1a4d180)
// Original: curl_mvsnprintf
// ----------------------------------------------------------------------------
int curl_mvsnprintf(uint8_t *a1, int a2, char *a3, unsigned int *a4)
{
  int result;
  typedef uint8_t *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v6 = 0;
  v5 = a1;
  v7 = a2;
  result = sub_1A4BDC0((int)(uintptr_t)(&v5), (int (*)(uint32_t, int))sub_1A4BC70, a3, a4);
  if ( v7 != 0 )
  {
    if ( v7 == v6 )
      *(v5 - 1) = 0;
    else
      *v5 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_maprintf  (binary VA: 0x1a4d200)
// Original: curl_maprintf
// ----------------------------------------------------------------------------
int curl_maprintf(char *a1, ...)
{
  int result;
  va_list va;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v3)) > _g4_s1 ? (4u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v4)) > _g4_s2 ? (8u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v5)) > _g4_s3 ? (12u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  va_start(va, a1);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( sub_1A4BDC0((int)(uintptr_t)(&v2), (int (*)(uint32_t, int))sub_1A4BCA0, a1, g4_va_cast<unsigned int *>(va)) == -1 || v5 != 0 )
  {
    result = 0;
    if ( v4 != 0 )
    {
      ((void (*)(int))Curl_cfree)(v2);
      return 0;
    }
  }
  else if ( v4 != 0 )
  {
    *(uint8_t *)(v2 + v3) = 0;
    return v2;
  }
  else
  {
    return ((int (*)(void *))Curl_cstrdup)(&unk_1B15112);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_mvaprintf  (binary VA: 0x1a4d2c0)
// Original: curl_mvaprintf
// ----------------------------------------------------------------------------
int curl_mvaprintf(char *a1, unsigned int *a2)
{
  int result;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( sub_1A4BDC0((int)(uintptr_t)(&v3), (int (*)(uint32_t, int))sub_1A4BCA0, a1, a2) == -1 || v6 != 0 )
  {
    result = 0;
    if ( v5 != 0 )
    {
      ((void (*)(int))Curl_cfree)(v3);
      return 0;
    }
  }
  else if ( v5 != 0 )
  {
    *(uint8_t *)(v3 + v4) = 0;
    return v3;
  }
  else
  {
    return ((int (*)(void *))Curl_cstrdup)(&unk_1B15112);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_msprintf  (binary VA: 0x1a4d380)
// Original: curl_msprintf
// ----------------------------------------------------------------------------
int curl_msprintf(uint8_t *a1, char *a2, unsigned int a3)
{
  int result;

  result = sub_1A4BDC0((int)(uintptr_t)(&a1), (int (*)(uint32_t, int))sub_1A4BD60, a2, &a3);
  *a1 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_mprintf  (binary VA: 0x1a4d3c0)
// Original: curl_mprintf
// ----------------------------------------------------------------------------
int curl_mprintf(char *a1, ...)
{
  va_list va;

  va_start(va, a1);
  return sub_1A4BDC0(((int)(uintptr_t)stdout), (int (*)(uint32_t, int))&fputc, a1, g4_va_cast<unsigned int *>(va));
}

// ----------------------------------------------------------------------------
// Function: curl_mfprintf  (binary VA: 0x1a4d400)
// Original: curl_mfprintf
// ----------------------------------------------------------------------------
int curl_mfprintf(int a1, char *a2, ...)
{
  va_list va;

  va_start(va, a2);
  return sub_1A4BDC0(a1, (int (*)(uint32_t, int))&fputc, a2, g4_va_cast<unsigned int *>(va));
}

// ----------------------------------------------------------------------------
// Function: curl_mvsprintf  (binary VA: 0x1a4d440)
// Original: curl_mvsprintf
// ----------------------------------------------------------------------------
int curl_mvsprintf(uint8_t *a1, char *a2, unsigned int *a3)
{
  int result;

  result = sub_1A4BDC0((int)(uintptr_t)(&a1), (int (*)(uint32_t, int))sub_1A4BD60, a2, a3);
  *a1 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_mvprintf  (binary VA: 0x1a4d480)
// Original: curl_mvprintf
// ----------------------------------------------------------------------------
int curl_mvprintf(char *a1, unsigned int *a2)
{
  return sub_1A4BDC0(((int)(uintptr_t)stdout), (int (*)(uint32_t, int))&fputc, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: curl_mvfprintf  (binary VA: 0x1a4d4a0)
// Original: curl_mvfprintf
// ----------------------------------------------------------------------------
int curl_mvfprintf(int a1, char *a2, unsigned int *a3)
{
  return sub_1A4BDC0(a1, (int (*)(uint32_t, int))&fputc, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: Curl_write  (binary VA: 0x1a4d4d0)
// Original: Curl_write
// ----------------------------------------------------------------------------
int Curl_write(int a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  uint32_t v8[4];

  v8[0] = 0;
  v5 = (*(int (**)(int, bool, int, int, uint32_t *))(a1 + 4 * ((*(uint32_t *)(a1 + 308) == a2) + 80)))(
         a1,
         *(uint32_t *)(a1 + 308) == a2,
         a3,
         a4,
         v8);
  v6 = 0;
  *a5 = v5;
  if ( v5 >= 0 )
    return v6;
  v6 = v8[0];
  if ( v8[0] == 0 )
    return 55;
  if ( v8[0] != 81 )
    return v6;
  *a5 = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_read_plain  (binary VA: 0x1a4d560)
// Original: Curl_read_plain
// ----------------------------------------------------------------------------
int Curl_read_plain(int fd, void *buf, size_t n, ssize_t *a4)
{
  ssize_t v4;
  int v5;
  int v6;
  int result;
  int v8;

  v4 = recv(fd, buf, n, 0);
  if ( v4 == -1 )
  {
    v8 = *(uint32_t *)__errno(v6, v5);
    if ( v8 == 4 )
      return 81;
    result = 56;
    if ( v8 == 11 )
      return 81;
  }
  else
  {
    *a4 = v4;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_read  (binary VA: 0x1a4d5d0)
// Original: Curl_read
// ----------------------------------------------------------------------------
int Curl_read(int *a1, int a2, void *dest, int a4, size_t *a5)
{
  int v5;
  int v6;
  bool v7;
  bool v8;
  signed int v9;
  void *v10;
  signed int n;
  int result;
  int v13;
  int v14;
  size_t v15;
  typedef size_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v17)) > _g4_s1 ? (15u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 15u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v5 = *a1;
  v18[0] = 56;
  v6 = *(uint32_t *)(v5 + 8);
  if ( v6 != 0 && (uint8_t)Curl_multi_canPipeline(v6) != 0 )
  {
    v13 = a1[77];
    *a5 = 0;
    v14 = a1[142];
    v15 = a1[143] - v14;
    if ( a4 <= v15 )
      v15 = a4;
    if ( v15 != 0 )
    {
      v16 = v15;
      memcpy(dest, (const void *)(a1[141] + v14), v15);
      a1[142] += v16;
      *((uint8_t *)a1 + 457) = 0;
      *a5 = v16;
      return 0;
    }
    v8 = v13 == a2;
    v9 = 0x4000;
    v10 = (void *)a1[141];
    if ( (unsigned int)a4 <= 0x4000 )
      v9 = a4;
    v17 = 1;
  }
  else
  {
    v7 = a1[77] == a2;
    *a5 = 0;
    v8 = v7;
    v17 = 0;
    v9 = *(uint32_t *)(*a1 + 608);
    if ( v9 == 0 )
      v9 = 0x4000;
    v10 = dest;
    if ( v9 > a4 )
      v9 = a4;
  }
  n = ((int (*)(int *, bool, void *, signed int, int *))a1[v8 + 78])(a1, v8, v10, v9, v18);
  result = v18[0];
  if ( n >= 0 )
  {
    if ( v17 != 0 )
    {
      memcpy(dest, (const void *)a1[141], n);
      a1[143] = n;
      a1[142] = n;
    }
    *a5 += n;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_debug  (binary VA: 0x1a4d770)
// Original: Curl_debug
// ----------------------------------------------------------------------------
int Curl_debug(int a1, unsigned int a2, void *ptr, size_t size, int a5)
{
  int v5;
  const char *v6;
  const char *v7;
  int (*v8)(int, unsigned int, void *, size_t, uint32_t);
  int v9;
  char *v11; // kr00_4
  int (*v12)(int, uint32_t, char *, size_t, uint32_t);
  size_t v13;
  char v14[172];

  if ( *(uint8_t *)(a1 + 652) != 0 && a5 != 0 )
  {
    v5 = *(uint32_t *)(a5 + 132);
    if ( v5 != 0 )
    {
      if ( a2 == 2 )
      {
        v6 = "Header";
        v7 = "to";
      }
      else if ( a2 <= 2 )
      {
        if ( a2 != 1 )
          goto LABEL_8;
        v6 = "Header";
        v7 = "from";
      }
      else if ( a2 == 3 )
      {
        v6 = "Data";
        v7 = "from";
      }
      else
      {
        v6 = "Data";
        v7 = "to";
        if ( a2 != 4 )
          goto LABEL_8;
      }
      curl_msnprintf((int)(uintptr_t)(v14), 160, (int)(uintptr_t)("[%s %s %s]"), v6, v7, v5);
      v11 = &v14[strlen(v14)];
      v12 = *(int (**)(int, uint32_t, char *, size_t, uint32_t))(a1 + 368);
      v13 = v11 - v14;
      if ( v12 != nullptr )
      {
        v9 = v12(a1, 0, v14, v13, *(uint32_t *)(a1 + 264));
        if ( v9 != 0 )
          return v9;
      }
      else
      {
        fwrite(&unk_1D359FB, 2u, 1u, *(FILE **)(a1 + 260));
        fwrite(v14, v13, 1u, *(FILE **)(a1 + 260));
      }
    }
  }
LABEL_8:
  v8 = *(int (**)(int, unsigned int, void *, size_t, uint32_t))(a1 + 368);
  if ( v8 != nullptr )
    return v8(a1, a2, ptr, size, *(uint32_t *)(a1 + 264));
  v9 = 0;
  if ( a2 <= 2 )
  {
    fwrite((char *)&unk_1D359FB + 3 * a2, 2u, 1u, *(FILE **)(a1 + 260));
    fwrite(ptr, size, 1u, *(FILE **)(a1 + 260));
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: Curl_sendf  (binary VA: 0x1a4da10)
// Original: Curl_sendf
// ----------------------------------------------------------------------------
int Curl_sendf(int a1, int *a2, char *a3, ...)
{
  int v3;
  const char *s;
  size_t v5;
  char *i;
  size_t v7;
  va_list va;
  typedef int _g4_t_v9;
  typedef const char *_g4_t_v10;
  typedef size_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  va_start(va, a3);
  v3 = 27;
  v9 = *a2;
  s = (const char *)curl_mvaprintf(a3, g4_va_cast<unsigned int *>(va));
  v10 = s;
  if ( s != nullptr )
  {
    v11[0] = 0;
    v5 = strlen(s);
    for ( i = (char *)v10; ; i += v7 )
    {
      v3 = Curl_write((int)(uintptr_t)(a2), a1, (int)(uintptr_t)(i), v5, (int *)v11);
      if ( v3 != 0 )
        break;
      if ( *(uint8_t *)(v9 + 676) != 0 )
      {
        Curl_debug(v9, 4u, i, v11[0], (int)(uintptr_t)(a2));
        v7 = v11[0];
        if ( v11[0] == v5 )
          break;
      }
      else
      {
        v7 = v11[0];
        if ( v11[0] == v5 )
          break;
      }
      v5 -= v7;
    }
    ((void (*)(const char *))Curl_cfree)(v10);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Curl_failf  (binary VA: 0x1a4db10)
// Original: Curl_failf
// ----------------------------------------------------------------------------
int Curl_failf(int a1, char *a2, ...)
{
  char *s;
  int result;
  size_t v4;
  va_list va;

  va_start(va, a2);
  s = (char *)(a1 + 1216);
  curl_mvsnprintf((uint8_t *)(a1 + 1216), 0x4000, a2, g4_va_cast<unsigned int *>(va));
  result = *(uint32_t *)(a1 + 268);
  if ( result != 0 && *(uint8_t *)(a1 + 34028) == 0 )
  {
    result = curl_msnprintf(result, 256, (int)(uintptr_t)("%s"), s);
    *(uint8_t *)(a1 + 34028) = 1;
  }
  if ( *(uint8_t *)(a1 + 676) != 0 )
  {
    v4 = strlen(s);
    if ( v4 <= 0x3FFE )
    {
      *(uint8_t *)(a1 + v4 + 1216) = 10;
      *(uint8_t *)(a1 + v4++ + 1217) = 0;
    }
    return Curl_debug(a1, 0, s, v4, 0);
  }
  return result;
}



// ============================================================================
// Address:   0x1a4dc00 (size: 988 bytes)
// Symbol:    Curl_client_write
// Demangled: Curl_client_write
// ============================================================================
int (*Curl_client_write(int a1, int a2, char *s, size_t a4))(char *, int, size_t, uint32_t)
{
  size_t n;
  int v5;
  int (*result)(char *, int, size_t, uint32_t);
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;
  int i;
  char *v16;
  void *v17;
  void *v18;
  char *v19;
  size_t v20;
  char *v21;
  size_t v22;

  n = a4;
  v5 = *(uint32_t *)a1;
  if ( a4 == 0 )
    n = strlen(s);
  if ( (*(uint8_t *)(v5 + 232) & 0x10) != 0 )
  {
    result = (int (*)(char *, int, size_t, uint32_t))&dword_38;
    if ( *(uint32_t *)(v5 + 34020) == a2 )
    {
      v20 = n + *(uint32_t *)(v5 + 34016);
      v10 = ((int (*)(uint32_t, size_t))Curl_crealloc)(*(uint32_t *)(v5 + 34012), v20);
      result = (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
      if ( v10 != 0 )
      {
        memcpy((void *)(v10 + *(uint32_t *)(v5 + 34016)), s, n);
        *(uint32_t *)(v5 + 34012) = v10;
        *(uint32_t *)(v5 + 34016) = v20;
        return nullptr;
      }
    }
    return result;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (*(uint8_t *)(*(uint32_t *)(a1 + 480) + 56) & 4) != 0 && *(uint8_t *)(a1 + 976) == 65 && n != 0 && s != nullptr )
    {
      if ( *(uint8_t *)(v5 + 34206) != 0 )
      {
        if ( *s == 10 )
        {
          memmove(s, s + 1, --n);
          ++*(uint64_t *)(v5 + 34208);
        }
        *(uint8_t *)(v5 + 34206) = 0;
      }
      v11 = (char *)memchr(s, 13, n);
      v12 = v11;
      if ( v11 != nullptr )
      {
        v21 = &s[n - 1];
        v13 = v11;
        if ( v21 > v11 )
        {
          v22 = n;
          v14 = v11;
          for ( i = memcmp(v11, "\r\n", 2u); ; i = memcmp(v12, "\r\n", 2u) )
          {
            if ( i != 0 )
            {
              *v14 = *v12 == 13 ? 10 : *v12;
              v16 = v12;
            }
            else
            {
              v16 = v12 + 1;
              *v14 = v12[1];
              ++*(uint64_t *)(v5 + 34208);
            }
            ++v14;
            v12 = v16 + 1;
            if ( v21 <= v16 + 1 )
              break;
          }
          v13 = v14;
          n = v22;
        }
        v19 = &s[n];
        if ( v19 > v12 )
        {
          if ( *v12 == 13 )
          {
            *v13 = 10;
            *(uint8_t *)(v5 + 34206) = 1;
          }
          else
          {
            *v13 = *v12;
          }
          ++v13;
        }
        if ( v19 > v13 )
          *v13 = 0;
        n = v13 - s;
      }
    }
    if ( n != 0 )
    {
      v9 = (*(int (**)(char *, int, size_t, uint32_t))(v5 + 340))(s, 1, n, *(uint32_t *)(v5 + 276));
      if ( v9 == 268435457 )
      {
        v17 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), n));
        result = (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
        if ( v17 != nullptr )
        {
          memcpy(v17, s, n);
          *(uint32_t *)(v5 + 34012) = (uint32_t)(uintptr_t)(v17);
          *(uint32_t *)(v5 + 34016) = n;
          *(uint32_t *)(v5 + 34020) = a2;
          *(uint32_t *)(v5 + 232) |= 0x10u;
          return nullptr;
        }
        return result;
      }
      if ( n != v9 )
      {
        Curl_failf(v5, "Failed writing body (%zu != %zu)", v9, n);
        return (int (*)(char *, int, size_t, uint32_t))(&dword_14 + 3);
      }
    }
  }
  result = nullptr;
  if ( (a2 & 2) == 0 )
    return result;
  result = *(int (**)(char *, int, size_t, uint32_t))(v5 + 344);
  if ( result != nullptr )
  {
    v7 = result(s, 1, n, *(uint32_t *)(v5 + 284));
  }
  else
  {
    if ( *(uint32_t *)(v5 + 284) == 0 )
      return result;
    v7 = (*(int (**)(char *, int, size_t, uint32_t))(v5 + 340))(s, 1, n, *(uint32_t *)(v5 + 284));
  }
  v8 = v7;
  if ( v7 == 268435457 )
  {
    v18 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), n));
    result = (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
    if ( v18 != nullptr )
    {
      memcpy(v18, s, n);
      *(uint32_t *)(v5 + 34012) = (uint32_t)(uintptr_t)(v18);
      *(uint32_t *)(v5 + 34016) = n;
      *(uint32_t *)(v5 + 34020) = 2;
      *(uint32_t *)(v5 + 232) |= 0x10u;
      return nullptr;
    }
  }
  else
  {
    result = nullptr;
    if ( v8 != n )
    {
      Curl_failf(v5, "Failed writing header");
      return (int (*)(char *, int, size_t, uint32_t))(&dword_14 + 3);
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: Curl_recv_plain  (binary VA: 0x1a4dfe0)
// Original: Curl_recv_plain
// ----------------------------------------------------------------------------
ssize_t Curl_recv_plain(int *a1, int a2, void *buf, size_t n, uint32_t *a5)
{
  int v5;
  int v6;
  ssize_t v7;
  uint32_t *v9;
  int v10;
  int v11;

  v7 = recv(a1[a2 + 76], buf, n, 0);
  *a5 = 0;
  if ( v7 == -1 )
  {
    v9 = (uint32_t *)__errno(v6, v5);
    if ( *v9 == 4 || *v9 == 11 )
    {
      *a5 = 81;
    }
    else
    {
      v11 = *v9;
      v10 = Curl_strerror(a1, *v9);
      Curl_failf(*a1, "Recv failure: %s", v10);
      *(uint32_t *)(*a1 + 34032) = v11;
      *a5 = 56;
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: Curl_send_plain  (binary VA: 0x1a4e0c0)
// Original: Curl_send_plain
// ----------------------------------------------------------------------------
ssize_t Curl_send_plain(int *a1, int a2, void *buf, size_t n, uint32_t *a5)
{
  int v5;
  int v6;
  ssize_t v7;
  uint32_t *v9;
  int v10;
  int v11;

  v7 = send(a1[a2 + 76], buf, n, 0x4000);
  *a5 = 0;
  if ( v7 == -1 )
  {
    v9 = (uint32_t *)__errno(v6, v5);
    if ( *v9 == 4 || *v9 == 11 )
    {
      *a5 = 81;
      return 0;
    }
    else
    {
      v11 = *v9;
      v10 = Curl_strerror(a1, *v9);
      Curl_failf(*a1, "Send failure: %s", v10);
      *(uint32_t *)(*a1 + 34032) = v11;
      *a5 = 55;
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: Curl_write_plain  (binary VA: 0x1a4e1a0)
// Original: Curl_write_plain
// ----------------------------------------------------------------------------
int Curl_write_plain(int *a1, int a2, void *a3, size_t a4, ssize_t *a5)
{
  int v6[4];

  *a5 = Curl_send_plain(a1, a1[77] == a2, a3, a4, v6);
  return v6[0];
}

// ----------------------------------------------------------------------------
// Function: Curl_infof  (binary VA: 0x1a4e200)
// Original: Curl_infof
// ----------------------------------------------------------------------------
void Curl_infof(int a1, char *a2, ...)
{
  size_t v2;
  char s[2049];
  va_list va;

  va_start(va, a2);
  if ( a1 != 0 && *(uint8_t *)(a1 + 676) != 0 )
  {
    curl_mvsnprintf(s, 2049, a2, g4_va_cast<unsigned int *>(va));
    v2 = strlen(s);
    Curl_debug(a1, 0, s, v2, 0);
  }
}

// ----------------------------------------------------------------------------
// Function: curl_share_init  (binary VA: 0x1a4e2b0)
// Original: curl_share_init
// ----------------------------------------------------------------------------
uint32_t * curl_share_init()
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0x1Cu));
  if ( result != nullptr )
    *result |= 2u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_share_setopt  (binary VA: 0x1a4e2f0)
// Original: curl_share_setopt
// ----------------------------------------------------------------------------
int curl_share_setopt(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int *v5;
  int v6;
  uint32_t *v7;

  result = 2;
  if ( a1[1] == 0 )
  {
    switch ( a2 )
    {
      case 1:
        *a1 |= 1 << a3;
        if ( a3 == 2 )
        {
          result = 0;
          if ( a1[6] == 0 )
          {
            v6 = (int)(uintptr_t)(Curl_cookie_init(0, nullptr, 0, 1));
            a1[6] = v6;
            result = v6 == 0 ? 4 : 0;
          }
        }
        else
        {
          if ( a3 != 3 )
            goto LABEL_4;
          result = 0;
          if ( a1[5] == 0 )
          {
            v5 = Curl_mk_dnscache();
            a1[5] = (uint32_t)(uintptr_t)(v5);
            result = v5 == nullptr ? 4 : 0;
          }
        }
        break;
      case 2:
        *a1 &= __builtin_rotateleft32(-2, a3);
        if ( a3 == 3 )
        {
          v7 = (uint32_t *)a1[5];
          result = 0;
          if ( v7 != nullptr )
          {
            Curl_hash_destroy(v7);
            a1[5] = 0;
            result = 0;
          }
        }
        else if ( a3 > 3 )
        {
          if ( a3 > 5 )
            goto LABEL_4;
          result = 0;
        }
        else
        {
          if ( a3 != 2 )
            goto LABEL_4;
          v4 = a1[6];
          result = 0;
          if ( v4 != 0 )
          {
            Curl_cookie_cleanup(v4);
            a1[6] = 0;
            result = 0;
          }
        }
        break;
      case 3:
        a1[2] = a3;
        result = 0;
        break;
      case 4:
        a1[3] = a3;
        result = 0;
        break;
      case 5:
        a1[4] = a3;
        result = 0;
        break;
      default:
LABEL_4:
        result = 1;
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_share_cleanup  (binary VA: 0x1a4e490)
// Original: curl_share_cleanup
// ----------------------------------------------------------------------------
int curl_share_cleanup(int a1)
{
  int result;
  void (*v2)(uint32_t, int, int, uint32_t);
  void (*v3)(uint32_t, int, uint32_t);
  void (*v4)(uint32_t, int, uint32_t);

  result = 3;
  if ( a1 != 0 )
  {
    v2 = *(void (**)(uint32_t, int, int, uint32_t))(a1 + 8);
    if ( v2 != nullptr )
      v2(0, 1, 2, *(uint32_t *)(a1 + 16));
    if ( *(uint32_t *)(a1 + 4) != 0 )
    {
      v4 = *(void (**)(uint32_t, int, uint32_t))(a1 + 12);
      result = 2;
      if ( v4 != nullptr )
      {
        v4(0, 1, *(uint32_t *)(a1 + 16));
        return 2;
      }
    }
    else
    {
      if ( *(uint32_t *)(a1 + 20) != 0 )
      {
        Curl_hash_destroy(*(uint32_t **)(a1 + 20));
        *(uint32_t *)(a1 + 20) = 0;
      }
      if ( *(uint32_t *)(a1 + 24) != 0 )
        Curl_cookie_cleanup(*(uint32_t *)(a1 + 24));
      v3 = *(void (**)(uint32_t, int, uint32_t))(a1 + 12);
      if ( v3 != nullptr )
        v3(0, 1, *(uint32_t *)(a1 + 16));
      ((void (*)(int))Curl_cfree)(a1);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_share_lock  (binary VA: 0x1a4e570)
// Original: Curl_share_lock
// ----------------------------------------------------------------------------
char Curl_share_lock(int a1, int a2, int a3)
{
  char result;
  uint32_t *v4;
  void (*v5)(int, int, int, uint32_t);

  result = 3;
  v4 = *(uint32_t **)(a1 + 16);
  if ( v4 != nullptr )
  {
    result = 0;
    if ( ((1 << a2) & *v4) != 0 )
    {
      v5 = (void (*)(int, int, int, uint32_t))v4[2];
      if ( v5 != nullptr )
      {
        v5(a1, a2, a3, v4[4]);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_share_unlock  (binary VA: 0x1a4e5e0)
// Original: Curl_share_unlock
// ----------------------------------------------------------------------------
char Curl_share_unlock(int a1, int a2)
{
  char result;
  uint32_t *v3;
  void (*v4)(int, int, uint32_t);

  result = 3;
  v3 = *(uint32_t **)(a1 + 16);
  if ( v3 != nullptr )
  {
    result = 0;
    if ( ((1 << a2) & *v3) != 0 )
    {
      v4 = (void (*)(int, int, uint32_t))v3[3];
      if ( v4 != nullptr )
      {
        v4(a1, a2, v3[4]);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_slist_append  (binary VA: 0x1a4e640)
// Original: curl_slist_append
// ----------------------------------------------------------------------------
int * curl_slist_append(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;

  v2 = a1;
  v3 = (int *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 8u);
  if ( v3 == nullptr )
    return nullptr;
  v4 = ((int (*)(int))Curl_cstrdup)(a2);
  if ( v4 != 0 )
  {
    v3[1] = 0;
    *v3 = v4;
    v5 = a1;
    if ( a1 != 0 )
    {
      while ( *(uint32_t *)(v5 + 4) != 0 )
        v5 = *(uint32_t *)(v5 + 4);
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v3);
    }
    else
    {
      return v3;
    }
  }
  else
  {
    v2 = 0;
    ((void (*)(int *))Curl_cfree)(v3);
  }
  return (int *)v2;
}

// ----------------------------------------------------------------------------
// Function: curl_slist_free_all  (binary VA: 0x1a4e6c0)
// Original: curl_slist_free_all
// ----------------------------------------------------------------------------
int curl_slist_free_all(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  int result;

  v1 = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v1[1];
      if ( *v1 != 0 )
        ((void (*)(uint32_t))Curl_cfree)(*v1);
      result = ((int (*)(uint32_t *))Curl_cfree)(v1);
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_slist_duplicate  (binary VA: 0x1a4e710)
// Original: Curl_slist_duplicate
// ----------------------------------------------------------------------------
int * Curl_slist_duplicate(int *a1)
{
  int *result;
  int *v2;
  int *v3;

  result = nullptr;
  v2 = nullptr;
  v3 = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      result = curl_slist_append((int)(uintptr_t)(v2), *v3);
      if ( result == nullptr )
        break;
      v3 = (int *)v3[1];
      if ( v3 == nullptr )
        return result;
      v2 = result;
    }
    curl_slist_free_all(v2);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_config_matches  (binary VA: 0x1a4e7b0)
// Original: Curl_ssl_config_matches
// ----------------------------------------------------------------------------
bool Curl_ssl_config_matches(uint32_t *a1, uint32_t *a2)
{
  return *a1 == *a2
      && a1[2] == a2[2]
      && a1[3] == a2[3]
      && sub_1A4E760(a1[4], a2[4])
      && sub_1A4E760(a1[5], a2[5])
      && sub_1A4E760(a1[8], a2[8])
      && sub_1A4E760(a1[9], a2[9])
      && sub_1A4E760(a1[10], a2[10]);
}

// ----------------------------------------------------------------------------
// Function: Curl_clone_ssl_config  (binary VA: 0x1a4e850)
// Original: Curl_clone_ssl_config
// ----------------------------------------------------------------------------
int Curl_clone_ssl_config(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  *(uint8_t *)(a2 + 56) = *(uint8_t *)(a1 + 56);
  *(uint32_t *)(a2 + 12) = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a2 + 8) = *(uint32_t *)(a1 + 8);
  *(uint32_t *)a2 = *(uint32_t *)a1;
  if ( *(uint32_t *)(a1 + 20) != 0 )
  {
    v2 = ((int (*)(uint32_t))Curl_cstrdup)(*(uint32_t *)(a1 + 20));
    v3 = 0;
    *(uint32_t *)(a2 + 20) = v2;
    if ( v2 == 0 )
      return v3;
    v4 = *(uint32_t *)(a1 + 16);
    if ( v4 != 0 )
    {
LABEL_4:
      v5 = ((int (*)(int))Curl_cstrdup)(v4);
      v3 = 0;
      *(uint32_t *)(a2 + 16) = v5;
      if ( v5 == 0 )
        return v3;
      v6 = *(uint32_t *)(a1 + 40);
      if ( v6 != 0 )
        goto LABEL_6;
      goto LABEL_14;
    }
  }
  else
  {
    *(uint32_t *)(a2 + 20) = 0;
    v4 = *(uint32_t *)(a1 + 16);
    if ( v4 != 0 )
      goto LABEL_4;
  }
  *(uint32_t *)(a2 + 16) = 0;
  v6 = *(uint32_t *)(a1 + 40);
  if ( v6 != 0 )
  {
LABEL_6:
    v7 = ((int (*)(int))Curl_cstrdup)(v6);
    v3 = 0;
    *(uint32_t *)(a2 + 40) = v7;
    if ( v7 != 0 )
    {
      v8 = *(uint32_t *)(a1 + 36);
      if ( v8 != 0 )
        goto LABEL_8;
LABEL_15:
      *(uint32_t *)(a2 + 36) = 0;
      v10 = *(uint32_t *)(a1 + 32);
      if ( v10 != 0 )
        goto LABEL_10;
      goto LABEL_16;
    }
    return v3;
  }
LABEL_14:
  *(uint32_t *)(a2 + 40) = 0;
  v8 = *(uint32_t *)(a1 + 36);
  if ( v8 == 0 )
    goto LABEL_15;
LABEL_8:
  v9 = ((int (*)(int))Curl_cstrdup)(v8);
  v3 = 0;
  *(uint32_t *)(a2 + 36) = v9;
  if ( v9 == 0 )
    return v3;
  v10 = *(uint32_t *)(a1 + 32);
  if ( v10 != 0 )
  {
LABEL_10:
    v11 = ((int (*)(int))Curl_cstrdup)(v10);
    *(uint32_t *)(a2 + 32) = v11;
    LOBYTE(v3) = v11 != 0;
    return v3;
  }
LABEL_16:
  *(uint32_t *)(a2 + 32) = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: Curl_free_ssl_config  (binary VA: 0x1a4e970)
// Original: Curl_free_ssl_config
// ----------------------------------------------------------------------------
int Curl_free_ssl_config(uint32_t *a1)
{
  Curl_safefree(a1[5]);
  Curl_safefree(a1[4]);
  Curl_safefree(a1[10]);
  Curl_safefree(a1[9]);
  return Curl_safefree(a1[8]);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_init  (binary VA: 0x1a4ea40)
// Original: Curl_ssl_init
// ----------------------------------------------------------------------------
int Curl_ssl_init()
{
  int result;

  result = 1;
  if ( byte_21425B8 == 0 )
  {
    byte_21425B8 = 1;
    return Curl_ossl_init();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_cleanup  (binary VA: 0x1a4ea70)
// Original: Curl_ssl_cleanup
// ----------------------------------------------------------------------------
int Curl_ssl_cleanup()
{
  int result;

  if ( byte_21425B8 != 0 )
  {
    result = Curl_ossl_cleanup();
    byte_21425B8 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_connect  (binary VA: 0x1a4eaa0)
// Original: Curl_ssl_connect
// ----------------------------------------------------------------------------
int Curl_ssl_connect(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int result;

  v2 = &a1[6 * a2];
  *((uint8_t *)v2 + 328) = 1;
  v2[83] = 1;
  result = Curl_ossl_connect(a1, a2);
  if ( result == 0 )
  {
    Curl_pgrsTime(*a1, 3);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_connect_nonblocking  (binary VA: 0x1a4eb10)
// Original: Curl_ssl_connect_nonblocking
// ----------------------------------------------------------------------------
int Curl_ssl_connect_nonblocking(uint32_t *a1, int a2, uint8_t *a3)
{
  int result;

  LOBYTE(a1[6 * a2 + 82]) = 1;
  result = Curl_ossl_connect_nonblocking(a1, a2, a3);
  if ( result == 0 && *a3 != 0 )
  {
    Curl_pgrsTime(*a1, 3);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_getsessionid  (binary VA: 0x1a4eb90)
// Original: Curl_ssl_getsessionid
// ----------------------------------------------------------------------------
int Curl_ssl_getsessionid(int *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int *v12;
  int v13;

  result = 1;
  v4 = a1;
  v5 = *a1;
  if ( *((uint8_t *)a1 + 432) != 0 )
  {
    if ( *(int *)(v5 + 584) <= 0 )
    {
LABEL_12:
      *a2 = 0;
      return 1;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(uint32_t *)(v5 + 34004) + v6;
        if ( *(uint32_t *)(v8 + 4) != 0 )
        {
          v13 = v5;
          v12 = v4;
          v9 = Curl_raw_equal(v4[32], *(uint32_t *)v8);
          v5 = v13;
          v4 = v12;
          if ( v9 != 0 && *((uint16_t *)v12 + 78) == *(uint16_t *)(v8 + 16) )
          {
            v10 = Curl_ssl_config_matches(a1 + 94, (uint32_t *)(v8 + 20));
            v5 = v13;
            v4 = v12;
            if ( v10 )
              break;
          }
        }
        ++v7;
        v6 += 80;
        if ( *(uint32_t *)(v5 + 584) <= v7 )
          goto LABEL_12;
      }
      v11 = *(uint32_t *)(v13 + 34008) + 1;
      *(uint32_t *)(v13 + 34008) = v11;
      *(uint32_t *)(v8 + 12) = v11;
      *a2 = *(uint32_t *)(v8 + 4);
      result = 0;
      if ( a3 != nullptr )
        *a3 = *(uint32_t *)(v8 + 8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_delsessionid  (binary VA: 0x1a4ecb0)
// Original: Curl_ssl_delsessionid
// ----------------------------------------------------------------------------
uint32_t * Curl_ssl_delsessionid(int a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;
  uint32_t *v5;

  result = *(uint32_t **)a1;
  v3 = *(uint32_t *)(*(uint32_t *)a1 + 584);
  if ( v3 > 0 )
  {
    result = (uint32_t *)result[8501];
    v4 = 0;
    v5 = result + 20;
    if ( result[1] == a2 )
    {
      return (uint32_t *)sub_1A4E9D0(result);
    }
    else
    {
      while ( ++v4 != v3 )
      {
        result = v5;
        v5 += 20;
        if ( *(v5 - 19) == a2 )
          return (uint32_t *)sub_1A4E9D0(result);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_addsessionid  (binary VA: 0x1a4ed00)
// Original: Curl_ssl_addsessionid
// ----------------------------------------------------------------------------
int Curl_ssl_addsessionid(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  uint32_t *v12;
  uint32_t *v13;
  char *v14;

  v13 = *(uint32_t **)a1;
  v12 = *(uint32_t **)(*(uint32_t *)a1 + 34004);
  v3 = v12[3];
  v14 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(a1 + 128)));
  v4 = 27;
  if ( v14 == nullptr )
    return v4;
  v5 = v13[146];
  if ( v5 > 1 )
  {
    v6 = v13[8501];
    v7 = v6 + 80;
    if ( *(uint32_t *)(v6 + 84) == 0 )
      goto LABEL_10;
    v8 = v6 + 160;
    v9 = 1;
    while ( 1 )
    {
      if ( *(uint32_t *)(v7 + 12) < v3 )
      {
        v3 = *(uint32_t *)(v7 + 12);
        v12 = (uint32_t *)v7;
      }
      if ( ++v9 == v5 )
        break;
      v7 = v8;
      v8 += 80;
      if ( *(uint32_t *)(v8 - 76) == 0 )
        goto LABEL_10;
    }
  }
  else if ( v5 != 1 )
  {
    v7 = v13[8501] + 80;
LABEL_10:
    *(uint32_t *)(v7 + 4) = a2;
    *(uint32_t *)(v7 + 8) = a3;
    *(uint32_t *)(v7 + 12) = v13[8502];
    if ( *(uint32_t *)v7 != 0 )
      ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)v7);
    *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v14);
    *(uint16_t *)(v7 + 16) = *(uint16_t *)(a1 + 156);
    v10 = Curl_clone_ssl_config(a1 + 376, v7 + 20);
    v4 = 0;
    if ( v10 != 0 )
      return v4;
    *(uint32_t *)(v7 + 4) = 0;
    ((void (*)(char *))Curl_cfree)(v14);
    return 27;
  }
  sub_1A4E9D0(v12);
  v7 = (int)(uintptr_t)(v12);
  goto LABEL_10;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_close_all  (binary VA: 0x1a4ee60)
// Original: Curl_ssl_close_all
// ----------------------------------------------------------------------------
int Curl_ssl_close_all(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *(uint32_t *)(a1 + 34004);
  if ( v1 != 0 )
  {
    if ( *(int *)(a1 + 584) > 0 )
    {
      v2 = 0;
      v3 = 0;
      do
      {
        ++v3;
        sub_1A4E9D0((uint32_t *)(v2 + v1));
        v2 += 80;
        v1 = *(uint32_t *)(a1 + 34004);
      }
      while ( *(uint32_t *)(a1 + 584) > v3 );
    }
    ((void (*)(int))Curl_cfree)(v1);
    *(uint32_t *)(a1 + 34004) = 0;
  }
  return Curl_ossl_close_all(a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_close  (binary VA: 0x1a4eee0)
// Original: Curl_ssl_close
// ----------------------------------------------------------------------------
int Curl_ssl_close(int a1, int a2)
{
  return ((Curl_ossl_close(a1, a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_shutdown  (binary VA: 0x1a4ef10)
// Original: Curl_ssl_shutdown
// ----------------------------------------------------------------------------
int Curl_ssl_shutdown(int a1, int a2)
{
  int v2;
  int v3;
  int v5;

  v2 = Curl_ossl_shutdown(a1, a2);
  v3 = 80;
  if ( v2 == 0 )
  {
    LOBYTE(v3) = 0;
    v5 = a1 + 24 * a2;
    *(uint8_t *)(v5 + 328) = 0;
    *(uint32_t *)(v5 + 332) = 0;
    *(uint32_t *)(a1 + 4 * a2 + 312) = (uint32_t)(uintptr_t)(Curl_recv_plain);
    *(uint32_t *)(a1 + 4 * a2 + 320) = (uint32_t)(uintptr_t)(((ssize_t (*)(int *, int, void *, size_t, uint32_t *))Curl_send_plain));
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_set_engine  (binary VA: 0x1a4efa0)
// Original: Curl_ssl_set_engine
// ----------------------------------------------------------------------------
int Curl_ssl_set_engine(int a1, char *a2)
{
  return Curl_ossl_set_engine(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_set_engine_default  (binary VA: 0x1a4efd0)
// Original: Curl_ssl_set_engine_default
// ----------------------------------------------------------------------------
int Curl_ssl_set_engine_default(int a1)
{
  return Curl_ossl_set_engine_default(a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_engines_list  (binary VA: 0x1a4f000)
// Original: Curl_ssl_engines_list
// ----------------------------------------------------------------------------
int Curl_ssl_engines_list(int a1)
{
  return Curl_ossl_engines_list(a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_initsessions  (binary VA: 0x1a4f030)
// Original: Curl_ssl_initsessions
// ----------------------------------------------------------------------------
char Curl_ssl_initsessions(uint32_t *a1, size_t a2)
{
  char result;
  void *v3;

  result = 0;
  if ( a1[8501] == 0 )
  {
    v3 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), a2, 80));
    result = 27;
    if ( v3 != nullptr )
    {
      a1[146] = a2;
      a1[8501] = (uint32_t)(uintptr_t)(v3);
      a1[8502] = 1;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_version  (binary VA: 0x1a4f0b0)
// Original: Curl_ssl_version
// ----------------------------------------------------------------------------
int Curl_ssl_version(int a1, int a2)
{
  return Curl_ossl_version(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_check_cxn  (binary VA: 0x1a4f0e0)
// Original: Curl_ssl_check_cxn
// ----------------------------------------------------------------------------
int Curl_ssl_check_cxn(int a1)
{
  return Curl_ossl_check_cxn(a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_data_pending  (binary VA: 0x1a4f110)
// Original: Curl_ssl_data_pending
// ----------------------------------------------------------------------------
int Curl_ssl_data_pending(int a1, int a2)
{
  return Curl_ossl_data_pending(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: Curl_ssl_free_certinfo  (binary VA: 0x1a4f140)
// Original: Curl_ssl_free_certinfo
// ----------------------------------------------------------------------------
int Curl_ssl_free_certinfo(int a1)
{
  int v1;
  uint32_t *v2;
  int result;

  if ( *(uint32_t *)(a1 + 34452) != 0 )
  {
    if ( *(int *)(a1 + 34452) > 0 )
    {
      v1 = 0;
      do
      {
        v2 = *(uint32_t **)(*(uint32_t *)(a1 + 34456) + 4 * v1++);
        curl_slist_free_all(v2);
      }
      while ( *(uint32_t *)(a1 + 34452) > v1 );
    }
    result = ((int (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 34456));
    *(uint32_t *)(a1 + 34452) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_seed  (binary VA: 0x1a51c40)
// Original: Curl_ossl_seed
// ----------------------------------------------------------------------------
int Curl_ossl_seed(int a1)
{
  char *v1;
  const char *s;
  int v3;
  signed int v4;
  int file;

  if ( byte_21425BC == 0 || *(uint32_t *)(a1 + 820) != 0 || *(uint32_t *)(a1 + 816) != 0 )
  {
    if ( *(uint32_t *)(a1 + 572) == 0 )
    {
      file = 0;
      goto LABEL_7;
    }
    v1 = *(char **)(a1 + 820);
    if ( v1 == nullptr )
      v1 = (char *)&unk_1B15112;
    file = RAND_load_file(v1, 0x400u);
    if ( file <= 500 )
    {
LABEL_7:
      while ( 1 )
      {
        s = (const char *)Curl_FormBoundary();
        v3 = (int)(uintptr_t)(s);
        if ( s == nullptr )
          break;
        v4 = strlen(s);
        RAND_add(v3, v4, COERCE__INT64((double)(v4 >> 1)));
        ((void (*)(int))Curl_cfree)(v3);
        if ( RAND_status() != 0 )
        {
          *(uint8_t *)(a1 + 1216) = 0;
          RAND_file_name(a1 + 1216, 0x4000);
          if ( *(uint8_t *)(a1 + 1216) == 0 || file + RAND_load_file((char *)(a1 + 1216), 0x400u) <= 500 )
            Curl_infof(a1, "libcurl is now using a weak random seed!\n");
          break;
        }
      }
    }
    byte_21425BC = 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_init  (binary VA: 0x1a52f80)
// Original: Curl_ossl_init
// ----------------------------------------------------------------------------
int Curl_ossl_init()
{
  int v0;
  int v1;

  SSL_load_error_strings();
  v0 = SSL_library_init();
  v1 = 0;
  if ( v0 != 0 )
  {
    OPENSSL_add_all_algorithms_noconf();
    return 1;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_cleanup  (binary VA: 0x1a52fc0)
// Original: Curl_ossl_cleanup
// ----------------------------------------------------------------------------
int Curl_ossl_cleanup()
{
  ERR_free_strings();
  EVP_cleanup();
  ENGINE_cleanup();
  return CRYPTO_cleanup_all_ex_data();
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_check_cxn  (binary VA: 0x1a52ff0)
// Original: Curl_ossl_check_cxn
// ----------------------------------------------------------------------------
int Curl_ossl_check_cxn(int a1)
{
  int v1;
  int v2;
  uint8_t v4[13];

  v1 = SSL_peek(*(uint32_t *)(a1 + 340), (int)(uintptr_t)(v4), 1);
  v2 = 1;
  if ( v1 <= 0 )
    return -(v1 != 0);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_set_engine  (binary VA: 0x1a53040)
// Original: Curl_ossl_set_engine
// ----------------------------------------------------------------------------
int Curl_ossl_set_engine(int a1, char *a2)
{
  uint32_t *v2;
  unsigned int error;
  char v5[268];

  v2 = (uint32_t *)ENGINE_by_id(a2);
  if ( v2 != nullptr )
  {
    if ( *(uint32_t *)(a1 + 34152) != 0 )
    {
      ENGINE_finish(*(uint32_t **)(a1 + 34152));
      ENGINE_free(*(uint32_t **)(a1 + 34152));
      *(uint32_t *)(a1 + 34152) = 0;
    }
    if ( ENGINE_init(v2) != 0 )
    {
      *(uint32_t *)(a1 + 34152) = (uint32_t)(uintptr_t)(v2);
      return 0;
    }
    else
    {
      ENGINE_free(v2);
      error = ERR_get_error();
      ERR_error_string_n(error, v5, 0x100u);
      Curl_failf(a1, "Failed to initialise SSL Engine '%s':\n%s", a2, v5);
      return 66;
    }
  }
  else
  {
    Curl_failf(a1, "SSL Engine '%s' not found", a2);
    return 53;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_set_engine_default  (binary VA: 0x1a53160)
// Original: Curl_ossl_set_engine_default
// ----------------------------------------------------------------------------
int Curl_ossl_set_engine_default(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int id;
  int v7;

  v1 = *(uint32_t *)(a1 + 34152);
  v2 = 0;
  if ( v1 != 0 )
  {
    v3 = ENGINE_set_default(v1, 0xFFFF);
    v7 = *(uint32_t *)(a1 + 34152);
    if ( v3 <= 0 )
    {
      id = ENGINE_get_id(v7);
      v2 = 54;
      Curl_failf(a1, "set default crypto engine '%s' failed", id);
    }
    else
    {
      v4 = ENGINE_get_id(v7);
      Curl_infof(a1, "set default crypto engine '%s'\n", v4);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_engines_list  (binary VA: 0x1a53200)
// Original: Curl_ossl_engines_list
// ----------------------------------------------------------------------------
int Curl_ossl_engines_list()
{
  int v0;
  uint32_t *first;
  int *v2;
  int id;
  int *v4;

  v0 = 0;
  first = (uint32_t *)ENGINE_get_first();
  if ( first != nullptr )
  {
    v2 = nullptr;
    while ( 1 )
    {
      id = ENGINE_get_id((int)(uintptr_t)(first));
      v4 = curl_slist_append(v0, id);
      v0 = (int)(uintptr_t)(v4);
      if ( v4 == nullptr )
        break;
      if ( v2 == nullptr )
        v2 = v4;
      first = (uint32_t *)ENGINE_get_next(first);
      if ( first == nullptr )
        return v0;
    }
    curl_slist_free_all(v2);
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_close  (binary VA: 0x1a53270)
// Original: Curl_ossl_close
// ----------------------------------------------------------------------------
void Curl_ossl_close(int a1, int a2)
{
  int v2;

  v2 = *(uint32_t *)(a1 + 24 * a2 + 320 + 20);
  if ( v2 != 0 )
  {
    SSL_shutdown(v2);
    SSL_set_connect_state(*(uint32_t *)(a1 + 24 * a2 + 320 + 20));
    SSL_free(*(char **)(a1 + 24 * a2 + 320 + 20));
    *(uint32_t *)(a1 + 24 * a2 + 320 + 20) = 0;
  }
  if ( *(uint32_t *)(a1 + 24 * a2 + 320 + 16) != 0 )
  {
    SSL_CTX_free(*(char **)(a1 + 24 * a2 + 320 + 16));
    *(uint32_t *)(a1 + 24 * a2 + 320 + 16) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_shutdown  (binary VA: 0x1a532f0)
// Original: Curl_ossl_shutdown
// ----------------------------------------------------------------------------
int Curl_ossl_shutdown(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  unsigned int error;
  int v10;
  int v11;
  int v12;
  char *v13;
  int shutdown;
  uint32_t *v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18[148];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v18)) > _g4_s1 ? (24u + sizeof(_g4_t_v18)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);

  v17 = *a1;
  if ( *(uint32_t *)(*a1 + 692) == 2 )
    SSL_shutdown(a1[6 * a2 + 85]);
  v2 = 0;
  if ( a1[6 * a2 + 85] == 0 )
    return v2;
  while ( 1 )
  {
    v3 = Curl_socket_ready(a1[a2 + 76], -1, 10000);
    if ( v3 <= 0 )
    {
      if ( v3 != 0 )
      {
        v16 = (uint32_t *)__errno(v5, v4);
        v2 = -1;
        Curl_failf(v17, "select/poll on SSL socket, errno: %d", *v16);
      }
      else
      {
        v2 = 0;
        Curl_failf(v17, "SSL shutdown timeout");
      }
      goto LABEL_9;
    }
    ERR_clear_error();
    v6 = &a1[6 * a2];
    v7 = SSL_read(v6[85], (int)(uintptr_t)(v18), 120);
    LOBYTE(v8) = SSL_get_error(v6[85], v7);
    if ( v8 != 2 )
      break;
    Curl_infof(v17, "SSL_ERROR_WANT_READ\n");
  }
  if ( v8 > 2 )
  {
    if ( v8 == 3 )
    {
      v2 = 0;
      Curl_infof(v17, "SSL_ERROR_WANT_WRITE\n");
    }
    else
    {
      if ( v8 == 6 )
        goto LABEL_14;
LABEL_8:
      error = ERR_get_error();
      v12 = *(uint32_t *)__errno(v11, v10);
      v13 = ERR_error_string(error, v18);
      v2 = 0;
      Curl_failf(*a1, "SSL read: %s, errno %d", v13, v12);
    }
LABEL_9:
    if ( *(uint8_t *)(v17 + 676) == 0 )
      goto LABEL_10;
    goto LABEL_15;
  }
  if ( v8 != 0 )
    goto LABEL_8;
LABEL_14:
  v2 = 0;
  if ( *(uint8_t *)(v17 + 676) != 0 )
  {
LABEL_15:
    shutdown = SSL_get_shutdown(a1[6 * a2 + 85]);
    switch ( shutdown )
    {
      case 2:
        Curl_infof(v17, "SSL_get_shutdown() returned SSL_RECEIVED_SHUTDOWN\n");
        break;
      case 3:
        Curl_infof(v17, "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN|SSL_RECEIVED__SHUTDOWN\n");
        break;
      case 1:
        Curl_infof(v17, "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN\n");
        break;
      default:
        break;
    }
  }
LABEL_10:
  SSL_free((char *)a1[6 * a2 + 85]);
  a1[6 * a2 + 85] = 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_session_free  (binary VA: 0x1a53590)
// Original: Curl_ossl_session_free
// ----------------------------------------------------------------------------
void Curl_ossl_session_free(char *a1)
{
  SSL_SESSION_free(a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_close_all  (binary VA: 0x1a535c0)
// Original: Curl_ossl_close_all
// ----------------------------------------------------------------------------
int Curl_ossl_close_all(int a1, int a2, int a3)
{
  ERR_remove_state(a1, a2);
  if ( *(uint32_t *)(a3 + 34152) != 0 )
  {
    ENGINE_finish(*(uint32_t **)(a3 + 34152));
    ENGINE_free(*(uint32_t **)(a3 + 34152));
    *(uint32_t *)(a3 + 34152) = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_connect_nonblocking  (binary VA: 0x1a53620)
// Original: Curl_ossl_connect_nonblocking
// ----------------------------------------------------------------------------
char Curl_ossl_connect_nonblocking(void **a1, int a2, uint8_t *a3)
{
  return sub_1A51D90(a1, a2, 1, a3);
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_connect  (binary VA: 0x1a53640)
// Original: Curl_ossl_connect
// ----------------------------------------------------------------------------
char Curl_ossl_connect(void **a1, int a2)
{
  uint8_t v3[13];

  v3[0] = 0;
  return sub_1A51D90(a1, a2, 0, v3);
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_data_pending  (binary VA: 0x1a53670)
// Original: Curl_ossl_data_pending
// ----------------------------------------------------------------------------
bool Curl_ossl_data_pending(int a1, int a2)
{
  bool result;

  result = false;
  if ( *(uint32_t *)(a1 + 24 * a2 + 340) != 0 )
    return SSL_pending(*(uint32_t *)(a1 + 24 * a2 + 340)) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ossl_version  (binary VA: 0x1a536b0)
// Original: Curl_ossl_version
// ----------------------------------------------------------------------------
int Curl_ossl_version(int a1, int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  uint8_t v7[14];

  v7[1] = 0;
  v2 = SSLeay();
  if ( v2 <= (unsigned int)(uintptr_t)(((uint8_t *)(uintptr_t)0x905FFFu)) )
  {
    v7[0] = 0;
    v5 = 1;
    v4 = 0;
    v3 = 0;
  }
  else
  {
    if ( (v2 & 0xFF0) != 0 )
      v7[0] = (v2 >> 4) + 96;
    else
      v7[0] = 0;
    v3 = (uint8_t)(v2 >> 12);
    v4 = (uint8_t)(v2 >> 20);
    v5 = v2 >> 28;
  }
  return curl_msnprintf(a1, a2, (int)(uintptr_t)("OpenSSL/%lx.%lx.%lx%s"), v5, v4, v3, v7);
}

// ----------------------------------------------------------------------------
// Function: curl_easy_strerror  (binary VA: 0x1a53750)
// Original: curl_easy_strerror
// ----------------------------------------------------------------------------
const char * curl_easy_strerror(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "No error";
      break;
    case 1:
      result = "Unsupported protocol";
      break;
    case 2:
      result = "Failed initialization";
      break;
    case 3:
      result = "URL using bad/illegal format or missing URL";
      break;
    case 4:
      result = "A requested feature, protocol or option was not found built-in in this libcurl due to a build-time decision.";
      break;
    case 5:
      result = "Couldn't resolve proxy name";
      break;
    case 6:
      result = "Couldn't resolve host name";
      break;
    case 7:
      result = "Couldn't connect to server";
      break;
    case 8:
      result = "FTP: weird server reply";
      break;
    case 9:
      result = "Access denied to remote resource";
      break;
    case 11:
      result = "FTP: unknown PASS reply";
      break;
    case 13:
      result = "FTP: unknown PASV reply";
      break;
    case 14:
      result = "FTP: unknown 227 response format";
      break;
    case 15:
      result = "FTP: can't figure out the host in the PASV response";
      break;
    case 17:
      result = "FTP: couldn't set file type";
      break;
    case 18:
      result = "Transferred a partial file";
      break;
    case 19:
      result = "FTP: couldn't retrieve (RETR failed) the specified file";
      break;
    case 21:
      result = "Quote command returned error";
      break;
    case 22:
      result = "HTTP response code said error";
      break;
    case 23:
      result = "Failed writing received data to disk/application";
      break;
    case 25:
      result = "Upload failed (at start/before it took off)";
      break;
    case 26:
      result = "Failed to open/read local data from file/application";
      break;
    case 27:
      result = "Out of memory";
      break;
    case 28:
      result = "Timeout was reached";
      break;
    case 30:
      result = "FTP: command PORT failed";
      break;
    case 31:
      result = "FTP: command REST failed";
      break;
    case 33:
      result = "Requested range was not delivered by the server";
      break;
    case 34:
      result = "Internal problem setting up the POST";
      break;
    case 35:
      result = "SSL connect error";
      break;
    case 36:
      result = "Couldn't resume download";
      break;
    case 37:
      result = "Couldn't read a file:// file";
      break;
    case 38:
      result = "LDAP: cannot bind";
      break;
    case 39:
      result = "LDAP: search failed";
      break;
    case 41:
      result = "A required function in the library was not found";
      break;
    case 42:
      result = "Operation was aborted by an application callback";
      break;
    case 43:
      result = "A libcurl function was given a bad argument";
      break;
    case 45:
      result = "Failed binding local connection end";
      break;
    case 47:
      result = "Number of redirects hit maximum amount";
      break;
    case 48:
      result = "An unknown option was passed in to libcurl";
      break;
    case 49:
      result = "Malformed telnet option";
      break;
    case 51:
      result = "SSL peer certificate or SSH remote key was not OK";
      break;
    case 52:
      result = "Server returned nothing (no headers, no data)";
      break;
    case 53:
      result = "SSL crypto engine not found";
      break;
    case 54:
      result = "Can not set SSL crypto engine as default";
      break;
    case 55:
      result = "Failed sending data to the peer";
      break;
    case 56:
      result = "Failure when receiving data from the peer";
      break;
    case 58:
      result = "Problem with the local SSL certificate";
      break;
    case 59:
      result = "Couldn't use specified SSL cipher";
      break;
    case 60:
      result = "Peer certificate cannot be authenticated with given CA certificates";
      break;
    case 61:
      result = "Unrecognized or bad HTTP Content or Transfer-Encoding";
      break;
    case 62:
      result = "Invalid LDAP URL";
      break;
    case 63:
      result = "Maximum file size exceeded";
      break;
    case 64:
      result = "Requested SSL level failed";
      break;
    case 65:
      result = "Send failed since rewinding of the data stream failed";
      break;
    case 66:
      result = "Failed to initialise SSL crypto engine";
      break;
    case 67:
      result = "Login denied";
      break;
    case 68:
      result = "TFTP: File Not Found";
      break;
    case 69:
      result = "TFTP: Access Violation";
      break;
    case 70:
      result = "Disk full or allocation exceeded";
      break;
    case 71:
      result = "TFTP: Illegal operation";
      break;
    case 72:
      result = "TFTP: Unknown transfer ID";
      break;
    case 73:
      result = "Remote file already exists";
      break;
    case 74:
      result = "TFTP: No such user";
      break;
    case 75:
      result = "Conversion failed";
      break;
    case 76:
      result = "Caller must register CURLOPT_CONV_ callback options";
      break;
    case 77:
      result = "Problem with the SSL CA cert (path? access rights?)";
      break;
    case 78:
      result = "Remote file not found";
      break;
    case 79:
      result = "Error in the SSH layer";
      break;
    case 80:
      result = "Failed to shut down the SSL connection";
      break;
    case 81:
      result = "Socket not ready for send/recv";
      break;
    case 82:
      result = "Failed to load CRL file (path? access rights?, format?)";
      break;
    case 83:
      result = "Issuer check against peer certificate failed";
      break;
    case 84:
      result = "FTP: The server did not accept the PRET command.";
      break;
    case 85:
      result = "RTSP CSeq mismatch or invalid CSeq";
      break;
    case 86:
      result = "RTSP session error";
      break;
    case 87:
      result = "Unable to parse FTP file list";
      break;
    case 88:
      result = "Chunk callback failed";
      break;
    default:
      result = "Unknown error";
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_strerror  (binary VA: 0x1a539a0)
// Original: curl_multi_strerror
// ----------------------------------------------------------------------------
const char * curl_multi_strerror(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case -1:
      result = "Please call curl_multi_perform() soon";
      break;
    case 0:
      result = "No error";
      break;
    case 1:
      result = "Invalid multi handle";
      break;
    case 2:
      result = "Invalid easy handle";
      break;
    case 3:
      result = "Out of memory";
      break;
    case 4:
      result = "Internal error";
      break;
    case 5:
      result = "Invalid socket argument";
      break;
    case 6:
      result = "Unknown option";
      break;
    default:
      result = "Unknown error";
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_share_strerror  (binary VA: 0x1a53a10)
// Original: curl_share_strerror
// ----------------------------------------------------------------------------
const char * curl_share_strerror(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "No error";
      break;
    case 1:
      result = "Unknown share option";
      break;
    case 2:
      result = "Share currently in use";
      break;
    case 3:
      result = "Invalid share handle";
      break;
    case 4:
      result = "Out of memory";
      break;
    default:
      result = "CURLSHcode unknown";
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_strerror  (binary VA: 0x1a53a60)
// Original: Curl_strerror
// ----------------------------------------------------------------------------
int Curl_strerror(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  char *v7;
  char *v8;
  int v9;
  int v10;
  int v11;

  v4 = *(uint32_t *)__errno(a1, a2);
  *(uint8_t *)(a3 + 624) = 0;
  v5 = a3 + 624;
  if ( strerror_r(a4, (char *)(uintptr_t)(a3 + 624), 255) != 0 && *(uint8_t *)(a3 + 624) == 0 )
    curl_msnprintf(a3 + 624, 255, (int)(uintptr_t)("Unknown error %d"), a4);
  *(uint8_t *)(a3 + 879) = 0;
  v6 = (char *)(strrchr((const char *)(a3 + 624), 10));
  if ( v6 != nullptr && (int)(uintptr_t)(&v6[-v5]) > 1 )
    *v6 = 0;
  v7 = (char *)(strrchr((const char *)(a3 + 624), 13));
  if ( v7 != nullptr )
  {
    v8 = &v7[-v5];
    if ( (int)(uintptr_t)(&v7[-v5]) > 0 )
      *v7 = 0;
  }
  if ( *(uint32_t *)__errno(v9, v8) != v4 )
    *(uint32_t *)__errno(v11, v10) = v4;
  return a3 + 624;
}

// ----------------------------------------------------------------------------
// Function: Curl_fillreadbuffer  (binary VA: 0x1a53ce0)
// Original: Curl_fillreadbuffer
// ----------------------------------------------------------------------------
int Curl_fillreadbuffer(int a1, char *a2, unsigned int *a3)
{
  int v3;
  char *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  size_t n;
  void *dest;
  char *v10;
  size_t v11;
  int16_t *v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_s;
  typedef uint8_t _g4_t_src[23];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s)) > _g4_s2 ? (12u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (21u + sizeof(_g4_t_src)) > _g4_s3 ? (21u + sizeof(_g4_t_src)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 21u);

  v3 = *(uint32_t *)a1;
  v4 = a2;
  if ( *(uint8_t *)(*(uint32_t *)a1 + 257) != 0 )
  {
    v4 = a2 - 12;
    v5 = *(uint32_t *)(v3 + 252) + 10;
    *(uint32_t *)(v3 + 252) = v5;
  }
  else
  {
    v5 = *(uint32_t *)(v3 + 252);
  }
  v14 = v4;
  v6 = (*(int (**)(int, int, char *, uint32_t))(a1 + 584))(v5, 1, v4, *(uint32_t *)(a1 + 588));
  v7 = v6;
  if ( v6 == 0x10000000 )
  {
    Curl_failf(v3, "operation aborted by callback");
    *a3 = 0;
    return 42;
  }
  else if ( v6 == 268435457 )
  {
    *(uint32_t *)(v3 + 232) |= 0x20u;
    if ( *(uint8_t *)(v3 + 257) != 0 )
      *(uint32_t *)(v3 + 252) -= 10;
    *a3 = 0;
    return 0;
  }
  else if ( (unsigned int)(uintptr_t)(v14) < v6 )
  {
    *a3 = 0;
    Curl_failf(v3, "read function returned funny value");
    return 26;
  }
  else
  {
    if ( *(uint8_t *)(v3 + 259) == 0 && *(uint8_t *)(v3 + 257) != 0 )
    {
      s = (char *)&a0[1];
      if ( *(uint8_t *)(v3 + 489) == 0 )
      {
        v13 = (int16_t *)"\r\n";
        if ( *(uint8_t *)(v3 + 655) != 0 )
          v13 = (int16_t *)(&a0[1]);
        s = (char *)v13;
      }
      n = curl_msnprintf((int)(uintptr_t)(src), 11, (int)(uintptr_t)("%x%s"), v7, s);
      dest = (void *)(*(uint32_t *)(v3 + 252) - n);
      v10 = (char *)(n + v7);
      *(uint32_t *)(v3 + 252) = (uint32_t)(uintptr_t)(dest);
      v15 = (char *)n;
      memcpy(dest, src, n);
      v11 = strlen(s);
      memcpy(&v10[*(uint32_t *)(v3 + 252)], s, v11);
      if ( v10 == v15 )
        *(uint8_t *)(v3 + 236) = 1;
      v7 = (unsigned int)(uintptr_t)(&v10[strlen(s)]);
    }
    *a3 = v7;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_readrewind  (binary VA: 0x1a53f10)
// Original: Curl_readrewind
// ----------------------------------------------------------------------------
int Curl_readrewind(int a1)
{
  int v1;
  int v2;
  int v3;
  int (*v5)(uint32_t, uint32_t, uint32_t, uint32_t);
  int v6;
  int (*v7)(int, int, uint32_t);
  int v8;

  v1 = 0;
  v2 = *(uint32_t *)a1;
  *(uint8_t *)(a1 + 451) = 0;
  v3 = *(uint32_t *)(v2 + 316);
  *(uint32_t *)(v2 + 232) &= ~2u;
  if ( v3 == 0 && *(uint32_t *)(v2 + 532) != 3 )
  {
    v5 = *(int (**)(uint32_t, uint32_t, uint32_t, uint32_t))(v2 + 320);
    if ( v5 != nullptr )
    {
      v6 = v5(*(uint32_t *)(v2 + 400), 0, 0, 0);
      if ( v6 != 0 )
      {
        LOWORD(v1) = 65;
        Curl_failf(v2, "seek callback returned error %d", v6);
      }
    }
    else
    {
      v7 = *(int (**)(int, int, uint32_t))(v2 + 372);
      if ( v7 != nullptr )
      {
        v8 = v7(v2, 1, *(uint32_t *)(v2 + 420));
        Curl_infof(v2, "the ioctl callback returned %d\n", v8);
        if ( v8 != 0 )
        {
          v1 = 65;
          Curl_failf(v2, "ioctl callback returned error %d", v8);
        }
      }
      else if ( *(size_t (**)(void *, size_t, size_t, FILE *))(v2 + 352) != (size_t (*)(void *, size_t, size_t, FILE *))&fread
             || fseek(*(FILE **)(v2 + 280), 0, 0) == -1 )
      {
        v1 = 65;
        Curl_failf(v2, "necessary data rewind wasn't possible");
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: Curl_meets_timecondition  (binary VA: 0x1a54080)
// Original: Curl_meets_timecondition
// ----------------------------------------------------------------------------
int Curl_meets_timecondition(int a1, int a2)
{
  int result;
  int v3;

  result = 1;
  if ( a2 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 528);
    if ( v3 != 0 )
    {
      if ( *(uint32_t *)(a1 + 524) != 2 )
      {
        if ( a2 > v3 )
          return result;
        Curl_infof(a1, "The requested document is not new enough\n");
LABEL_7:
        *(uint8_t *)(a1 + 34316) = 1;
        return 0;
      }
      if ( a2 >= v3 )
      {
        Curl_infof(a1, "The requested document is not old enough\n");
        goto LABEL_7;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_readwrite  (binary VA: 0x1a54110)
// Original: Curl_readwrite
// ----------------------------------------------------------------------------
int Curl_readwrite(int a1, bool *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int (*v10)(char *, int, size_t, uint32_t);
  int (*v11)(int, int, size_t *, char *);
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v21;
  int v22;
  unsigned int v23;
  bool v24;
  int (*v25)(int, int, size_t *, char *);
  char canPipeline;
  unsigned int v27;
  int v28;
  int v29;
  bool v30;
  bool v31;
  int v32;
  int v33;
  size_t v34;
  int64_t v35; // rax
  int v36;
  int v37;
  int v38;
  int v40;
  int v41;
  int v42;
  size_t v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char v50;
  int v51;
  int v52;
  int v53;
  int v54;
  size_t v55;
  void *v56;
  int64_t v95; // 0:ecx.4,4:^60.4
  int64_t v96; // 0:edi.4,4:ebp.4
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef bool _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int64_t _g4_t_v74;
  typedef char _g4_t_v75;
  typedef int64_t _g4_t_v76;
  typedef size_t _g4_t_v77;
  typedef int64_t _g4_t_v78;
  typedef int64_t _g4_t_v79;
  typedef uint64_t _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int64_t _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint64_t _g4_t_v86;
  typedef int _g4_t_v87;
  typedef size_t _g4_t_v88;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef char _g4_t_v92;
  typedef size_t _g4_t_v93;
  typedef size_t _g4_t_v94[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v57)) > _g4_s0 ? (12u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v58)) > _g4_s1 ? (16u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v59)) > _g4_s2 ? (20u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v60)) > _g4_s3 ? (48u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v61)) > _g4_s4 ? (48u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v62)) > _g4_s5 ? (48u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v63)) > _g4_s6 ? (48u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v64)) > _g4_s7 ? (48u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v65)) > _g4_s8 ? (48u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v66)) > _g4_s9 ? (48u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v67)) > _g4_s10 ? (48u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v68)) > _g4_s11 ? (48u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v69)) > _g4_s12 ? (48u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v70)) > _g4_s13 ? (48u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v71)) > _g4_s14 ? (48u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v72)) > _g4_s15 ? (52u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v73)) > _g4_s16 ? (52u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v74)) > _g4_s17 ? (56u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v75)) > _g4_s18 ? (56u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v76)) > _g4_s19 ? (56u + sizeof(_g4_t_v76)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v77)) > _g4_s20 ? (56u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v78)) > _g4_s21 ? (56u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v79)) > _g4_s22 ? (64u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v80)) > _g4_s23 ? (64u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v81)) > _g4_s24 ? (64u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v82)) > _g4_s25 ? (64u + sizeof(_g4_t_v82)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v83)) > _g4_s26 ? (64u + sizeof(_g4_t_v83)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v84)) > _g4_s27 ? (68u + sizeof(_g4_t_v84)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v85)) > _g4_s28 ? (72u + sizeof(_g4_t_v85)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v86)) > _g4_s29 ? (72u + sizeof(_g4_t_v86)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v87)) > _g4_s30 ? (84u + sizeof(_g4_t_v87)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v88)) > _g4_s31 ? (88u + sizeof(_g4_t_v88)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v90)) > _g4_s32 ? (104u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (108u + sizeof(_g4_t_v91)) > _g4_s33 ? (108u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (119u + sizeof(_g4_t_v92)) > _g4_s34 ? (119u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v93)) > _g4_s35 ? (120u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v94)) > _g4_s36 ? (124u + sizeof(_g4_t_v94)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 64u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 64u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 64u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 68u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 72u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 104u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 108u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 119u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 120u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 124u);

  v2 = *(uint32_t *)a1;
  v87 = *(uint32_t *)(a1 + 1008);
  *(uint32_t *)(a1 + 1008) = 0;
  v3 = -1;
  v4 = *(uint32_t *)(v2 + 232);
  if ( (v4 & 0x15) == 1 )
    v3 = *(uint32_t *)(a1 + 492);
  v5 = -1;
  if ( (v4 & 0x2A) == 2 )
    v5 = *(uint32_t *)(a1 + 496);
  if ( v87 != 0 )
  {
    if ( v87 != 4 )
      goto LABEL_7;
LABEL_105:
    Curl_failf(v2, "select/poll returned error");
    return 55;
  }
  v64 = v2;
  v87 = Curl_socket_ready(v3, v5, 0);
  v2 = v64;
  if ( v87 == 4 )
    goto LABEL_105;
LABEL_7:
  v6 = *(uint32_t *)(v2 + 232);
  v7 = v2 + 20;
  v85 = 0;
  if ( (v6 & 1) == 0 || (v87 & 1) == 0 && *(uint8_t *)(a1 + 457) == 0 )
    goto LABEL_47;
  v92 = 0;
  v85 = 0;
  v88 = 0;
  v8 = v2;
  *a2 = false;
  while ( 1 )
  {
    v9 = 0x4000;
    HIDWORD(v74) = *(uint32_t *)(v7 + 4);
    if ( *(uint32_t *)(v8 + 608) != 0 )
      v9 = *(uint32_t *)(v8 + 608);
    if ( (LODWORD(v74) = *(uint32_t *)v7, (*(uint32_t *)(v7 + 4) & *(uint32_t *)v7) == -1)
      || *(uint8_t *)(v7 + 64) != 0
      || (v79 = *(uint64_t *)(v7 + 24),
          v23 = v74 - v79,
          v24 = (((uint64_t)(v74 - v79) >> 32) & 0x80000000) != 0LL,
          v76 = v74 - v79,
          SHIDWORD(v76) > 0)
      || !v24 && v23 >= v9
      || (v9 = v76, (uint32_t)v76 != 0) )
    {
      v10 = (int (*)(char *, int, size_t, uint32_t))Curl_read(
                                                            (int *)a1,
                                                            *(uint32_t *)(a1 + 492),
                                                            *(void **)(v7 + 200),
                                                            v9,
                                                            v94);
      if ( v10 == (int (*)(char *, int, size_t, uint32_t))((char *)&dword_50 + 1) )
      {
        v2 = v8;
        v27 = *(uint32_t *)(v8 + 232);
        goto LABEL_101;
      }
      if ( v10 != nullptr )
        return (int)(uintptr_t)(v10);
      v79 = *(uint64_t *)(v8 + 44);
    }
    else
    {
      v94[0] = 0;
    }
    if ( v79 == 0 && *(uint64_t *)(v7 + 32) == 0 )
    {
      Curl_pgrsTime(v8, 5);
      if ( *(uint32_t *)(v7 + 124) != 0 )
      {
        curlx_tvnow(&v90);
        v38 = v90;
        *(uint32_t *)(v7 + 120) = v91;
        *(uint32_t *)(v7 + 116) = v38;
      }
    }
    if ( v94[0] != 0 )
    {
      if ( (int)v94[0] <= 0 )
      {
LABEL_100:
        v2 = v8;
        v27 = *(uint32_t *)(v8 + 232) & 0xFFFFFFFE;
        v85 = 1;
        *(uint32_t *)(v8 + 232) = v27;
        goto LABEL_101;
      }
      v75 = 0;
    }
    else
    {
      if ( *(uint32_t *)(v7 + 196) != 0 )
        goto LABEL_100;
      v75 = 1;
    }
    *(uint8_t *)(*(uint32_t *)(v7 + 200) + v94[0]) = 0;
    *(uint32_t *)(v7 + 84) = *(uint32_t *)(v7 + 200);
    v11 = *(int (**)(int, int, size_t *, char *))(*(uint32_t *)(a1 + 480) + 48);
    if ( v11 != nullptr )
    {
      v10 = (int (*)(char *, int, size_t, uint32_t))v11(v8, a1, v94, &v92);
      if ( v10 != nullptr )
        return (int)(uintptr_t)(v10);
      if ( v92 != 0 )
        goto LABEL_97;
    }
    if ( *(uint8_t *)(v7 + 64) != 0 )
    {
      LOBYTE(v93) = 0;
      v10 = (int (*)(char *, int, size_t, uint32_t))Curl_http_readwrite_headers(v8, a1, v94, &v93);
      if ( v10 != nullptr )
        return (int)(uintptr_t)(v10);
      v25 = *(int (**)(int, int, size_t *, char *))(*(uint32_t *)(a1 + 480) + 48);
      if ( v25 != nullptr && *(int64_t *)(v7 + 12) <= 0 && (int)v94[0] > 0 )
      {
        v10 = (int (*)(char *, int, size_t, uint32_t))v25(v8, a1, v94, &v92);
        if ( v10 != nullptr )
          return (int)(uintptr_t)(v10);
        if ( v92 != 0 )
        {
LABEL_97:
          v2 = v8;
LABEL_98:
          v27 = *(uint32_t *)(v2 + 232);
LABEL_99:
          v85 = 1;
          goto LABEL_101;
        }
      }
      if ( (uint8_t)v93 != 0 )
        break;
    }
    if ( *(uint32_t *)(v7 + 84) == 0 || *(uint8_t *)(v7 + 64) != 0 || (int)v94[0] <= 0 && v75 == 0 )
      goto LABEL_76;
    v12 = *(uint32_t *)(v7 + 196);
    if ( v12 == 0 && v75 == 0 && (*(uint32_t *)(*(uint32_t *)(a1 + 480) + 56) & 0x40001) != 0 )
    {
      if ( *(uint32_t *)(v8 + 244) != 0 )
      {
        if ( *(uint8_t *)(a1 + 436) != 0 )
        {
          *(uint32_t *)(v8 + 232) &= ~1u;
          v13 = 0;
          *a2 = true;
          return v13;
        }
        *(uint8_t *)(v7 + 217) = 1;
        Curl_infof(v8, "Ignoring the response-body\n");
      }
      if ( *(uint64_t *)(v8 + 34240) != 0
        && *(uint8_t *)(v7 + 100) == 0
        && *(uint32_t *)(v8 + 532) == 1
        && *(uint8_t *)(v7 + 217) == 0 )
      {
        v13 = 33;
        Curl_failf(v8, "HTTP server doesn't seem to support byte ranges. Cannot resume.");
        return v13;
      }
      if ( *(uint32_t *)(v8 + 524) != 0
        && *(uint32_t *)(v8 + 34236) == 0
        && (uint8_t)Curl_meets_timecondition(v8, *(uint32_t *)(v7 + 192)) == 0 )
      {
        v2 = v8;
        v85 = 1;
        *a2 = true;
        *(uint8_t *)(a1 + 436) = 1;
        goto LABEL_45;
      }
      v12 = *(uint32_t *)(v8 + 216);
    }
    *(uint32_t *)(v7 + 196) = v12 + 1;
    if ( *(uint8_t *)(v8 + 676) != 0 )
    {
      v58 = a1;
      if ( *(uint32_t *)(v7 + 68) == 0 )
        goto LABEL_143;
      Curl_debug(v8, 3u, *(void **)(v8 + 1208), *(uint32_t *)(v7 + 80), a1);
      if ( *(uint32_t *)(v7 + 68) == 1 )
      {
        v58 = a1;
LABEL_143:
        Curl_debug(v8, 3u, *(void **)(v7 + 84), v94[0], v58);
        if ( *(uint8_t *)(v7 + 236) == 0 )
          goto LABEL_62;
        goto LABEL_144;
      }
    }
    if ( *(uint8_t *)(v7 + 236) == 0 )
      goto LABEL_62;
LABEL_144:
    v37 = Curl_httpchunk_read(a1, *(char **)(v7 + 84), v94[0], (int)(uintptr_t)(v94));
    if ( v37 > 0 )
    {
      if ( v37 == 4 )
      {
        v13 = 23;
        Curl_failf(v8, "Failed writing data");
      }
      else
      {
        v13 = 56;
        Curl_failf(v8, "Received problem %d in the chunky parser", v37);
      }
      return v13;
    }
    if ( v37 == -1 )
    {
      *(uint32_t *)(v7 + 212) &= ~1u;
      if ( *(uint32_t *)(a1 + 36) != 0 )
      {
        v73 = *(uint32_t *)(a1 + 36);
        Curl_infof(*(uint32_t *)a1, "Leftovers after chunking: %zu bytes", v73);
        if ( *(uint32_t *)(*(uint32_t *)a1 + 8) != 0
          && (uint8_t)Curl_multi_canPipeline(*(uint32_t *)(*(uint32_t *)a1 + 8)) != 0 )
        {
          Curl_infof(*(uint32_t *)a1, "Rewinding %zu bytes\n", v73);
          *(uint8_t *)(a1 + 457) = 1;
          *(uint32_t *)(a1 + 568) -= v73;
        }
      }
    }
LABEL_62:
    if ( *(uint32_t *)(v7 + 68) != 0 )
    {
      if ( *(uint8_t *)(v7 + 217) != 0 )
      {
        v86 = *(uint64_t *)(v8 + 44);
      }
      else
      {
        v86 = *(uint64_t *)(v7 + 24) +g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*(uint32_t *)(v7 + 80)), 0);
        *(uint64_t *)(v7 + 24) = v86;
      }
    }
    else
    {
      v86 = *(uint64_t *)(v8 + 44);
    }
    v95 = *(uint64_t *)(v7 + 12);
    if ( ((unsigned int)v95 & HIDWORD(v95)) == 0xFFFFFFFF )
    {
      v80 = v86 + (int)v94[0];
      goto LABEL_66;
    }
    v80 = v86 + (int)v94[0];
    if ( v95 <= (int64_t)(v86 + (int)v94[0]) )
    {
      v28 = v86;
      v81 = *(uint32_t *)(v7 + 12);
      v88 = v86 + v94[0] - v95;
      if ( v88 != 0 && *(uint8_t *)(v7 + 217) == 0 )
      {
        if ( *(uint32_t *)(*(uint32_t *)a1 + 8) == 0 )
          goto LABEL_114;
        if ( (uint8_t)Curl_multi_canPipeline(*(uint32_t *)(*(uint32_t *)a1 + 8)) != 0 )
        {
          Curl_infof(
            v8,
            "Rewinding stream by : %zu bytes on url %s (size = %lld, maxdownload = %lld, bytecount = %lld, nread = %zd)\n",
            v88,
            *(uint32_t *)(v8 + 34228),
            *(uint32_t *)v7,
            *(uint32_t *)(v7 + 4),
            *(uint32_t *)(v7 + 12),
            *(uint32_t *)(v7 + 16),
            *(uint32_t *)(v7 + 24),
            *(uint32_t *)(v7 + 28),
            v94[0]);
          *(uint8_t *)(a1 + 457) = 1;
          *(uint32_t *)(a1 + 568) -= v88;
        }
        else
        {
          v86 = *(uint64_t *)(v8 + 44);
          v95 = *(uint64_t *)(v8 + 32);
LABEL_114:
          Curl_infof(
            v8,
            "Excess found in a non pipelined read: excess = %zu, size = %lld, maxdownload = %lld, bytecount = %lld\n",
            v88,
            *(uint32_t *)v7,
            *(uint32_t *)(v7 + 4),
            (uint32_t)v95,
            HIDWORD(v95),
            v86);
        }
        v86 = *(uint64_t *)(v8 + 44);
        v81 = *(uint32_t *)(v8 + 32);
        v28 = v86;
      }
      v94[0] = v81 - v28;
      if ( v81 - v28 < 0 )
      {
        v94[0] = 0;
        v82 = 0;
      }
      else
      {
        v82 = v81 - v28;
      }
      *(uint32_t *)(v7 + 212) &= ~1u;
      v80 = v82 + v86;
    }
LABEL_66:
    *(uint64_t *)(v7 + 24) = v80;
    Curl_pgrsSetDownloadCounter(v8, v80, HIDWORD(v80));
    if ( *(uint8_t *)(v7 + 236) != 0 )
      goto LABEL_76;
    if ( v94[0] != 0 )
    {
      if ( *(uint32_t *)(v7 + 68) == 0 )
        goto LABEL_69;
    }
    else if ( *(uint32_t *)(v7 + 68) == 0 )
    {
      if ( v75 == 0 )
        goto LABEL_76;
      goto LABEL_69;
    }
    if ( *(uint8_t *)(v7 + 217) == 0 )
    {
      if ( (*(uint32_t *)(v7 + 16) & *(uint32_t *)(v7 + 12)) != -1 )
      {
        v43 = *(uint32_t *)(v7 + 80);
        if ( *(uint64_t *)(v7 + 12) < (int64_t)v43 )
          v10 = Curl_client_write(a1, 1, *(char **)(v8 + 1208), *(uint32_t *)(v7 + 12));
        else
LABEL_202:
          v10 = Curl_client_write(a1, 1, *(char **)(v8 + 1208), v43);
        if ( v10 != nullptr )
          return (int)(uintptr_t)(v10);
        goto LABEL_179;
      }
      v43 = *(uint32_t *)(v8 + 100);
      goto LABEL_202;
    }
LABEL_179:
    if ( *(uint32_t *)(v7 + 68) > 1u )
      goto LABEL_180;
LABEL_69:
    if ( *(uint8_t *)(*(uint32_t *)a1 + 709) == 0 )
    {
      v21 = *(uint32_t *)(v7 + 128);
      if ( v21 == 1 )
      {
        if ( *(uint8_t *)(v7 + 217) != 0 )
        {
LABEL_180:
          *(uint32_t *)(v7 + 68) = 0;
          goto LABEL_76;
        }
        v10 = (int (*)(char *, int, size_t, uint32_t))Curl_unencode_deflate_write(a1, v7, v94[0]);
        goto LABEL_75;
      }
      if ( v21 == 2 )
      {
        if ( *(uint8_t *)(v7 + 217) != 0 )
          goto LABEL_180;
        v10 = (int (*)(char *, int, size_t, uint32_t))Curl_unencode_gzip_write(a1, v7, v94[0]);
        goto LABEL_75;
      }
      if ( v21 != 0 )
      {
        Curl_failf(
          v8,
          "Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.");
        v13 = 61;
        *(uint32_t *)(v8 + 88) = 0;
        return v13;
      }
    }
    if ( *(uint8_t *)(v7 + 217) != 0 )
      goto LABEL_180;
    v10 = Curl_client_write(a1, 1, *(char **)(v7 + 84), v94[0]);
LABEL_75:
    *(uint32_t *)(v7 + 68) = 0;
    if ( v10 != nullptr )
      return (int)(uintptr_t)(v10);
LABEL_76:
    v22 = *(uint32_t *)(a1 + 480);
    if ( *(uint32_t *)(v22 + 48) != 0 && v88 != 0 && *(uint8_t *)(a1 + 457) == 0 )
    {
      *(uint32_t *)(v8 + 104) += v94[0];
      v94[0] = v88;
      v13 = (*(int (**)(int, int, size_t *, char *))(*(uint32_t *)(a1 + 480) + 48))(v8, a1, v94, &v92);
      v2 = v8;
      if ( v13 != 0 )
        return v13;
      v27 = *(uint32_t *)(v8 + 232);
      if ( v92 != 0 )
      {
        v27 |= 1u;
        *(uint32_t *)(v8 + 232) = v27;
      }
      goto LABEL_99;
    }
    if ( v75 != 0 )
    {
      *(uint32_t *)(v7 + 212) &= ~1u;
      v22 = *(uint32_t *)(a1 + 480);
    }
    if ( (*(uint8_t *)(v22 + 56) & 0x30) == 0 && (uint8_t)Curl_ssl_data_pending(a1, 0) == 0 )
      goto LABEL_97;
    v85 = 1;
  }
  v2 = v8;
  if ( (int)v94[0] <= 0 )
    goto LABEL_98;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 8) != 0
    && (canPipeline = Curl_multi_canPipeline(*(uint32_t *)(*(uint32_t *)a1 + 8)), v2 = v8, canPipeline != 0) )
  {
    Curl_infof(v8, "Rewinding stream by : %zd bytes on url %s (zero-length body)\n", v94[0], *(uint32_t *)(v8 + 34228));
    v55 = v94[0];
    *(uint8_t *)(a1 + 457) = 1;
    *(uint32_t *)(a1 + 568) -= v55;
    v2 = v8;
    v85 = 1;
    v27 = *(uint32_t *)(v8 + 232);
  }
  else
  {
    v62 = v2;
    Curl_infof(
      v2,
      "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n",
      v94[0],
      *(uint32_t *)(v2 + 34228));
    v2 = v62;
    v85 = 1;
    v27 = *(uint32_t *)(v62 + 232);
  }
LABEL_101:
  if ( (v27 & 3) == 2 && *(uint8_t *)(a1 + 436) != 0 )
  {
    v63 = v2;
    Curl_infof(v2, "we are done reading and this is set to close, stop send\n");
    v2 = v63;
    *(uint32_t *)(v63 + 232) &= ~2u;
  }
LABEL_45:
  v13 = 0;
  if ( *a2 )
    return v13;
  v6 = *(uint32_t *)(v2 + 232);
LABEL_47:
  if ( (v6 & 2) != 0 && (v87 & 2) != 0 )
  {
    if ( *(uint64_t *)(v2 + 44) == 0 && *(uint64_t *)(v2 + 52) == 0 )
    {
      v69 = v2;
      Curl_pgrsTime(v2, 5);
      v2 = v69;
    }
    v29 = *(uint32_t *)(v2 + 248);
    v85 |= 2u;
    if ( v29 != 0 )
      goto LABEL_195;
    v30 = *(uint8_t *)(v2 + 236) == 0;
    *(uint32_t *)(v2 + 252) = *(uint32_t *)(v2 + 224);
    if ( !v30 )
      goto LABEL_186;
    if ( *(uint32_t *)(v2 + 144) == 2 && *(uint32_t *)(*(uint32_t *)(v2 + 34260) + 76) == 2 )
    {
      *(uint32_t *)(v2 + 144) = 1;
      *(uint32_t *)(v2 + 232) &= ~2u;
      v70 = v2;
      curlx_tvnow(&v90);
      v51 = v90;
      *(uint32_t *)(v7 + 120) = v91;
      *(uint32_t *)(v7 + 116) = v51;
      v85 &= ~2u;
      Curl_expire(v70, 1000);
      v2 = v70;
      goto LABEL_49;
    }
    v31 = false;
    if ( (*(uint32_t *)(*(uint32_t *)(a1 + 480) + 56) & 0x40001) != 0 )
      v31 = *(uint32_t *)(*(uint32_t *)(v2 + 34260) + 76) == 1;
    v72 = v31;
    v65 = v2;
    v13 = Curl_fillreadbuffer(a1, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3FF4)->st_info, v94);
    v2 = v65;
    if ( v13 != 0 )
      return v13;
    v77 = v94[0];
    if ( v94[0] != 0 )
    {
      if ( (int)v94[0] > 0 )
      {
        *(uint32_t *)(v65 + 248) = v94[0];
        if ( v72 )
        {
          v32 = *(uint32_t *)(v65 + 252);
          v29 = v77;
          goto LABEL_132;
        }
        if ( *(uint8_t *)(v65 + 489) == 0 && *(uint8_t *)(v65 + 655) == 0 )
        {
          v32 = *(uint32_t *)(v65 + 252);
          v29 = v77;
          goto LABEL_132;
        }
        v13 = *(uint32_t *)(v65 + 34024);
        if ( v13 == 0 )
        {
          v56 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x8000));
          v2 = v65;
          v13 = (int)(uintptr_t)(v56);
          *(uint32_t *)(v65 + 34024) = (uint32_t)(uintptr_t)(v56);
          if ( v56 == nullptr )
          {
            LOWORD(v13) = 27;
            Curl_failf(v65, "Failed to alloc scratch buffer!");
            return v13;
          }
        }
        v49 = 0;
        while ( 1 )
        {
          v50 = *(uint8_t *)(*(uint32_t *)(v2 + 252) + v49);
          if ( v50 == 10 )
          {
            *(uint8_t *)(v13 + v29++) = 13;
            *(uint8_t *)(*(uint32_t *)(v2 + 34024) + v29) = 10;
            if ( *(uint8_t *)(v2 + 489) == 0 )
              ++*(uint64_t *)(v2 + 440);
          }
          else
          {
            *(uint8_t *)(v13 + v29) = v50;
          }
          ++v49;
          ++v29;
          if ( v49 == v77 )
            break;
          v13 = *(uint32_t *)(v2 + 34024);
        }
        if ( v49 != v29 )
        {
          v32 = *(uint32_t *)(v2 + 34024);
          *(uint32_t *)(v2 + 248) = v29;
          *(uint32_t *)(v2 + 252) = v32;
LABEL_132:
          v66 = v2;
          v13 = Curl_write(a1, *(uint32_t *)(a1 + 496), v32, v29, (int *)&v93);
          v33 = v66;
          if ( v13 == 0 )
          {
            if ( *(uint8_t *)(v66 + 676) != 0 )
            {
              Curl_debug(v66, 4u, *(void **)(v66 + 252), v93, a1);
              v33 = v66;
            }
            v34 = v93;
            v35 = *(uint64_t *)(v33 + 52) + (int)v93;
            *(uint64_t *)(v33 + 52) = v35;
            if ( v35 == *(uint64_t *)(v33 + 440) )
            {
              *(uint8_t *)(v33 + 236) = 1;
              v71 = v33;
              Curl_infof(v33, "We are completely uploaded and fine\n");
              v34 = v93;
              v33 = v71;
            }
            v36 = *(uint32_t *)(v33 + 248);
            if ( v36 == v34 )
            {
              v30 = *(uint8_t *)(v33 + 236) == 0;
              *(uint32_t *)(v33 + 252) = *(uint32_t *)(v33 + 224);
              *(uint32_t *)(v33 + 248) = 0;
              if ( !v30 )
                *(uint32_t *)(v33 + 232) &= ~2u;
            }
            else
            {
              *(uint32_t *)(v33 + 252) += v34;
              *(uint32_t *)(v33 + 248) = v36 - v34;
            }
            v67 = v33;
            Curl_pgrsSetUploadCounter(v33, *(uint32_t *)(v33 + 52), *(uint32_t *)(v33 + 56));
            v2 = v67;
            goto LABEL_49;
          }
          return v13;
        }
        v29 = *(uint32_t *)(v2 + 248);
LABEL_195:
        v32 = *(uint32_t *)(v2 + 252);
        goto LABEL_132;
      }
      v44 = *(uint32_t *)(v65 + 232);
    }
    else
    {
LABEL_186:
      v44 = *(uint32_t *)(v2 + 232);
      if ( (v44 & 0x20) != 0 )
        goto LABEL_49;
    }
    *(uint32_t *)(v2 + 232) = v44 & 0xFFFFFFFD;
    if ( *(uint8_t *)(a1 + 451) == 0 )
      goto LABEL_49;
    v68 = v2;
    v13 = Curl_readrewind(a1);
    v2 = v68;
    if ( v13 == 0 )
      goto LABEL_49;
    return v13;
  }
LABEL_49:
  v60 = (uint32_t *)v2;
  curlx_tvnow(&v90);
  v14 = v91;
  *(uint32_t *)(v7 + 56) = v90;
  *(uint32_t *)(v7 + 60) = v14;
  v15 = v60;
  if ( v85 != 0 )
  {
    v16 = (uint32_t *)v60[7];
    if ( v16 != nullptr )
    {
      v17 = v60[11];
      v16[1] = v60[12];
      *v16 = v17;
    }
    v18 = (uint32_t *)v60[10];
    if ( v18 != nullptr )
    {
      v19 = v60[13];
      v18[1] = v60[14];
      *v18 = v19;
    }
  }
  else if ( v60[36] == 1 )
  {
    v48 = curlx_tvdiff(*(uint32_t *)(v7 + 56), *(uint32_t *)(v7 + 60), *(uint32_t *)(v7 + 116), *(uint32_t *)(v7 + 120));
    v15 = v60;
    if ( v48 > 1000 )
    {
      v60[36] = 0;
      v60[58] |= 2u;
      Curl_infof((int)(uintptr_t)(v60), "Done waiting for 100-continue\n");
      v15 = v60;
    }
  }
  v61 = (int)(uintptr_t)(v15);
  v13 = 42;
  if ( Curl_pgrsUpdate(a1) != 0 )
    return v13;
  v13 = Curl_speedcheck(v61, *(uint32_t *)(v7 + 56), *(uint32_t *)(v7 + 60));
  if ( v13 != 0 )
    return v13;
  if ( *(uint32_t *)(v61 + 232) != 0 )
  {
    v42 = Curl_timeleft(v61, v61 + 76, 0);
    v41 = v61;
    if ( v42 >= 0 )
      goto LABEL_172;
    v45 = *(uint32_t *)(v61 + 20);
    v46 = *(uint32_t *)(v61 + 24);
    if ( (v46 & v45) == 0xFFFFFFFF )
    {
      v52 = *(uint32_t *)(v61 + 44);
      v53 = *(uint32_t *)(v61 + 48);
      v54 = curlx_tvdiff(*(uint32_t *)(v7 + 56), *(uint32_t *)(v7 + 60), *(uint32_t *)(v61 + 1080), *(uint32_t *)(v61 + 1084));
      v57 = v52;
      v13 = 28;
      Curl_failf(v61, "Operation timed out after %ld milliseconds with %lld bytes received", v54, v57, v53);
    }
    else
    {
      v83 = *(uint32_t *)(v61 + 44);
      v84 = *(uint32_t *)(v61 + 48);
      v47 = curlx_tvdiff(*(uint32_t *)(v7 + 56), *(uint32_t *)(v7 + 60), *(uint32_t *)(v61 + 1080), *(uint32_t *)(v61 + 1084));
      v59 = v45;
      v13 = 28;
      Curl_failf(
        v61,
        "Operation timed out after %ld milliseconds with %lld out of %lld bytes received",
        v47,
        v83,
        v84,
        v59,
        v46);
    }
    return v13;
  }
  if ( *(uint8_t *)(v61 + 667) == 0 )
  {
    v96 = *(uint64_t *)(v61 + 20);
    if ( (HIDWORD(v96) & (unsigned int)v96) != 0xFFFFFFFF )
    {
      v78 = *(uint64_t *)(v61 + 44);
      if ( v78 != v96 && v78 != *(uint64_t *)(v61 + 34208) + v96 && *(uint32_t *)(v61 + 244) == 0 )
      {
        v13 = 18;
        Curl_failf(v61, "transfer closed with %lld bytes remaining to read", v96 - v78);
        return v13;
      }
    }
    if ( *(uint8_t *)(v61 + 256) != 0 && *(uint32_t *)(a1 + 28) != 8 )
    {
      v13 = 18;
      Curl_failf(v61, "transfer closed with outstanding read data remaining");
      return v13;
    }
  }
  v40 = Curl_pgrsUpdate(a1);
  v41 = v61;
  if ( v40 != 0 )
    return 42;
LABEL_172:
  *a2 = (*(uint8_t *)(v41 + 232) & 0x33) == 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_single_getsock  (binary VA: 0x1a55590)
// Original: Curl_single_getsock
// ----------------------------------------------------------------------------
int Curl_single_getsock(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int (*v4)(int *, uint32_t *, int);
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = *a1;
  v4 = *(int (**)(int *, uint32_t *, int))(a1[120] + 40);
  if ( v4 != nullptr )
    return v4(a1, a2, a3);
  result = 0;
  if ( a3 > 1 )
  {
    v6 = *(uint32_t *)(v3 + 232);
    if ( (v6 & 0x15) == 1 )
    {
      *a2 = a1[123];
      result = 1;
      v6 = *(uint32_t *)(v3 + 232);
    }
    if ( (v6 & 0x2A) == 2 )
    {
      v7 = a1[124];
      if ( a1[123] == v7 )
      {
        v9 = 0x10000;
        if ( (v6 & 1) != 0 )
          return v9 | result;
        v8 = 0;
      }
      else
      {
        v8 = v6 & 1;
      }
      a2[v8] = v7;
      v9 = 1 << (v8 + 16);
      return v9 | result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_sleep_time  (binary VA: 0x1a55650)
// Original: Curl_sleep_time
// ----------------------------------------------------------------------------
int Curl_sleep_time(int64_t a1, int64_t a2, int a3)
{
  int result;
  int64_t v4; // rax
  int64_t v5;
  int64_t v6; // 0:esi.4,4:edi.4

  result = 0;
  v6 = a1;
  if ( a1 != 0 )
  {
    if ( a2 <= a1 + (a1 >> 10) )
    {
      v5 = 0;
      if ( a2 < a1 - (a1 >> 10) )
        v6 = (a1 >> 6) + a1;
    }
    else
    {
      v5 = 1;
      v6 = a1 - (a1 >> 6);
    }
    v4 = 8000 * a3 / v6;
    if ( v4 >= v5 )
    {
      if ( (HIDWORD(v4) | ((uint32_t)v4 + 0x80000000)) == 0 )
        return 0x7FFFFFFF;
      LODWORD(v5) = 8000 * a3 / v6;
    }
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_pretransfer  (binary VA: 0x1a557a0)
// Original: Curl_pretransfer
// ----------------------------------------------------------------------------
int Curl_pretransfer(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;

  if ( *(uint32_t *)(a1 + 916) != 0 )
  {
    LOBYTE(v1) = Curl_ssl_initsessions((uint32_t *)a1, *(uint32_t *)(a1 + 584));
    v2 = v1;
    if ( v1 == 0 )
    {
      v4 = *(uint32_t *)(a1 + 296);
      *(uint32_t *)(a1 + 304) = 0;
      *(uint32_t *)(a1 + 34112) = v4;
      *(uint32_t *)(a1 + 34128) = *(uint32_t *)(a1 + 300);
      *(uint8_t *)(a1 + 33996) = 0;
      *(uint8_t *)(a1 + 34028) = 0;
      *(uint32_t *)(a1 + 34200) = 0;
      *(uint8_t *)(a1 + 34268) = 0;
      *(uint8_t *)(a1 + 34144) = 0;
      Curl_safefree(*(uint32_t *)(a1 + 34344));
      v5 = *(uint32_t *)(a1 + 932);
      *(uint32_t *)(a1 + 34344) = 0;
      if ( v5 != 0 )
        Curl_cookie_loadfiles(a1);
      if ( *(uint32_t *)(a1 + 936) != 0 && (v6 = sub_1A53B60(a1)) != 0 )
      {
        return v6;
      }
      else
      {
        *(uint8_t *)(a1 + 34036) = 1;
        Curl_initinfo(a1);
        Curl_pgrsStartNow(a1);
        if ( *(uint32_t *)(a1 + 424) != 0 )
          Curl_expire(a1, *(uint32_t *)(a1 + 424));
        if ( *(uint32_t *)(a1 + 428) != 0 )
          Curl_expire(a1, *(uint32_t *)(a1 + 428));
      }
    }
  }
  else
  {
    v2 = 3;
    Curl_failf(a1, "No URL set!");
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Curl_posttransfer  (binary VA: 0x1a55900)
// Original: Curl_posttransfer
// ----------------------------------------------------------------------------
int Curl_posttransfer()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_follow  (binary VA: 0x1a55910)
// Original: Curl_follow
// ----------------------------------------------------------------------------
int Curl_follow(int a1, char *s, int a3)
{
  int v3;
  char *v4;
  const char *v5;
  char *v6;
  char v7;
  char *v8;
  char *v9;
  char *v10;
  int v11;
  char *v12;
  char *v13;
  char v14;
  int v15;
  char *v16;
  char v17;
  int v18;
  char v19;
  char *v20;
  char v21;
  char v22;
  int result;
  char v24;
  size_t v25;
  char *v26;
  char v27; // si
  bool v28;
  size_t v29;
  char v30;
  char *v31;
  char *v32;
  char v33; // si
  int v34;
  int v35;
  char *v36;
  char *v37;
  char *v38;
  const char *v39;
  char v40;
  char *v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_haystack;
  typedef char *_g4_t_dest;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v43)) > _g4_s1 ? (12u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v44)) > _g4_s2 ? (12u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v45)) > _g4_s3 ? (16u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v46)) > _g4_s4 ? (16u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_haystack)) > _g4_s5 ? (20u + sizeof(_g4_t_haystack)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_dest)) > _g4_s6 ? (24u + sizeof(_g4_t_dest)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_n)) > _g4_s7 ? (28u + sizeof(_g4_t_n)) : _g4_s7,
    _g4_s9 = (47u + sizeof(_g4_t_v50)) > _g4_s8 ? (47u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v51)) > _g4_s9 ? (48u + sizeof(_g4_t_v51)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_haystack &haystack = *reinterpret_cast<_g4_t_haystack *>(_g4_sf + 20u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 47u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);

  v3 = a1;
  if ( a3 == 3 )
  {
    v35 = *(uint32_t *)(a1 + 308);
    if ( v35 != -1 && v35 <= *(uint32_t *)(a1 + 304) )
    {
      Curl_failf(a1, "Maximum (%ld) redirects followed", *(uint32_t *)(a1 + 308));
      return 47;
    }
    ++*(uint32_t *)(a1 + 304);
    v28 = *(uint8_t *)(a1 + 666) == 0;
    *(uint8_t *)(a1 + 33996) = 1;
    if ( !v28 )
    {
      if ( *(uint8_t *)(a1 + 928) != 0 )
        ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 924));
      v36 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(a1 + 916)));
      *(uint32_t *)(a1 + 924) = (uint32_t)(uintptr_t)(v36);
      if ( v36 == nullptr )
      {
        *(uint8_t *)(a1 + 928) = 0;
        return 27;
      }
      *(uint8_t *)(a1 + 928) = 1;
    }
  }
  if ( sscanf(s, "%15[^?&/:]://%c", &v51, &v50) != 2 )
  {
    haystack = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(a1 + 916)));
    if ( haystack == nullptr )
      return 27;
    v4 = strstr(haystack, "//");
    v5 = v4 + 2;
    if ( v4 == nullptr )
      v5 = haystack;
    v45 = (char *)v5;
    if ( *s == 47 )
    {
      v37 = (char *)(strchr(v5, 47));
      if ( v37 != nullptr )
      {
        v38 = strchr(v45, 63);
        if ( v37 > v38 && v38 != nullptr )
          v37 = v38;
        *v37 = 0;
        v12 = s;
        v14 = *s;
      }
      else
      {
        v41 = strchr(v45, 63);
        v14 = 47;
        if ( v41 == nullptr )
        {
          v12 = s;
LABEL_22:
          v16 = v12;
          v17 = 1;
          v15 = 0;
          do
          {
            while ( v14 == 32 )
            {
              v18 = v15 + 3;
              ++v15;
              ++v16;
              if ( v17 != 0 )
                v15 = v18;
              v14 = *v16;
              if ( *v16 == 0 )
                goto LABEL_30;
            }
            ++v16;
            if ( v14 == 63 )
              v17 = 0;
            ++v15;
            v14 = *v16;
          }
          while ( *v16 != 0 );
LABEL_30:
          n = strlen(haystack);
          dest = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v15 + n + 2);
          if ( dest == nullptr )
          {
            ((void (*)(char *))Curl_cfree)(haystack);
            return 27;
          }
          memcpy(dest, haystack, n);
          v19 = *v12;
          if ( *v12 != 47 )
          {
            if ( v45 != nullptr && *v45 == 0 )
            {
LABEL_36:
              v20 = &dest[n];
              if ( v19 != 0 )
              {
LABEL_37:
                v21 = 1;
                while ( v19 == 32 )
                {
                  if ( v21 != 0 )
                  {
                    ++v12;
                    *v20 = 37;
                    v20[1] = 50;
                    v20[2] = 48;
                    v19 = *v12;
                    v20 += 3;
                    if ( *v12 == 0 )
                      goto LABEL_45;
                  }
                  else
                  {
                    *v20++ = 43;
LABEL_41:
                    v19 = *++v12;
                    if ( *v12 == 0 )
                      goto LABEL_45;
                  }
                }
                *v20 = v19;
                if ( v19 == 63 )
                  v21 = 0;
                ++v20;
                goto LABEL_41;
              }
LABEL_45:
              *v20 = 0;
              ((void (*)(char *))Curl_cfree)(haystack);
              ((void (*)(char *))Curl_cfree)(s);
              s = dest;
              v22 = 0;
              if ( a3 == 1 )
                goto LABEL_46;
LABEL_71:
              if ( v22 != 0 )
                *(uint8_t *)(v3 + 34036) = 0;
              if ( *(uint8_t *)(v3 + 920) != 0 )
                ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v3 + 916));
              else
                *(uint8_t *)(v3 + 920) = 1;
              *(uint32_t *)(v3 + 916) = (uint32_t)(uintptr_t)(s);
              Curl_infof(v3, "Issue another request to this URL: '%s'\n", s);
              v34 = *(uint32_t *)(v3 + 34300);
              if ( v34 == 302 )
              {
                if ( (unsigned int)(*(uint32_t *)(v3 + 532) - 2) <= 1 && *(uint8_t *)(v3 + 313) == 0 )
                {
                  Curl_infof(v3, "Violate RFC 2616/10.3.3 and switch from POST to GET\n");
                  *(uint32_t *)(v3 + 532) = 1;
                }
              }
              else if ( v34 == 303 )
              {
                if ( *(uint32_t *)(v3 + 532) != 1 )
                {
                  v28 = *(uint8_t *)(v3 + 667) == 0;
                  *(uint32_t *)(v3 + 532) = 1;
                  v39 = "HEAD";
                  if ( v28 )
                    v39 = (const char *)&off_1B6AF81;
                  Curl_infof(v3, "Disables POST, goes with %s\n", v39);
                }
              }
              else if ( v34 == 301 && (unsigned int)(*(uint32_t *)(v3 + 532) - 2) <= 1 && *(uint8_t *)(v3 + 312) == 0 )
              {
                Curl_infof(v3, "Violate RFC 2616/10.3.2 and switch from POST to GET\n");
                *(uint32_t *)(v3 + 532) = 1;
              }
              Curl_pgrsTime(v3, 8);
              Curl_pgrsResetTimes(v3);
              return 0;
            }
            if ( v19 != 63 )
            {
              dest[n++] = 47;
              v19 = *v12;
              goto LABEL_36;
            }
          }
          v20 = &dest[n];
          goto LABEL_37;
        }
        *v41 = 0;
        v12 = s;
        v14 = *s;
      }
LABEL_21:
      v15 = 0;
      if ( v14 == 0 )
        goto LABEL_30;
      goto LABEL_22;
    }
    v42 = *s;
    v6 = (char *)(strchr(v5, 63));
    v7 = v42;
    if ( v6 != nullptr )
    {
      *v6 = 0;
      v7 = *s;
    }
    if ( v7 != 63 )
    {
      v43 = v7;
      v8 = strrchr(v45, 47);
      v7 = v43;
      if ( v8 != nullptr )
      {
        *v8 = 0;
        v7 = *s;
      }
    }
    v44 = v7;
    v9 = strchr(v45, 47);
    v10 = v9 + 1;
    if ( v9 == nullptr )
      v10 = nullptr;
    v11 = 0;
    v45 = v10;
    v12 = s;
    if ( v44 != 46 )
    {
LABEL_15:
      if ( v10 != nullptr && v11 != 0 )
      {
        do
        {
          v13 = strrchr(v45, 47);
          if ( v13 == nullptr )
          {
            v3 = a1;
            *v45 = 0;
            v14 = *v12;
            goto LABEL_21;
          }
          --v11;
          *v13 = 0;
        }
        while ( v11 != 0 );
        v3 = a1;
      }
      v14 = *v12;
      goto LABEL_21;
    }
    v40 = s[1];
    if ( v40 == 47 )
    {
      v12 = s + 2;
      if ( s[2] != 46 )
        goto LABEL_15;
      v40 = s[3];
    }
    v11 = 0;
    if ( v40 == 46 )
    {
      do
      {
        if ( v12[2] != 47 )
          break;
        v12 += 3;
        ++v11;
        if ( *v12 != 46 )
          break;
      }
      while ( v12[1] == 46 );
    }
    goto LABEL_15;
  }
  if ( strchr(s, 32) == nullptr )
  {
    v22 = 1;
    goto LABEL_70;
  }
  v24 = *s;
  v25 = 1;
  if ( *s != 0 )
  {
    v26 = s;
    v27 = 1;
    LOBYTE(v25) = 0;
    do
    {
      while ( v24 == 32 )
      {
        v29 = v25 + 3;
        ++v26;
        ++v25;
        if ( v27 != 0 )
          v25 = v29;
        v24 = *v26;
        if ( *v26 == 0 )
          goto LABEL_58;
      }
      v28 = v24 == 63;
      v24 = *++v26;
      if ( v28 )
        v27 = 0;
      ++v25;
    }
    while ( v24 != 0 );
LABEL_58:
    ++v25;
  }
  v46 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v25);
  result = 27;
  if ( v46 != nullptr )
  {
    v30 = *s;
    v31 = v46;
    if ( *s != 0 )
    {
      v32 = s;
      v33 = 1;
      while ( v30 == 32 )
      {
        if ( v33 != 0 )
        {
          ++v32;
          *v31 = 37;
          v31[1] = 50;
          v31[2] = 48;
          v30 = *v32;
          v31 += 3;
          if ( *v32 == 0 )
            goto LABEL_69;
        }
        else
        {
          *v31++ = 43;
LABEL_65:
          v30 = *++v32;
          if ( *v32 == 0 )
            goto LABEL_69;
        }
      }
      *v31 = v30;
      if ( v30 == 63 )
        v33 = 0;
      ++v31;
      goto LABEL_65;
    }
LABEL_69:
    *v31 = 0;
    ((void (*)(char *))Curl_cfree)(s);
    s = v46;
    v22 = 1;
LABEL_70:
    if ( a3 == 1 )
    {
LABEL_46:
      result = 0;
      *(uint32_t *)(v3 + 34344) = (uint32_t)(uintptr_t)(s);
      return result;
    }
    goto LABEL_71;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_reconnect_request  (binary VA: 0x1a560c0)
// Original: Curl_reconnect_request
// ----------------------------------------------------------------------------
int Curl_reconnect_request(int *a1)
{
  int v1;
  int result;
  typedef char _g4_t_v3;
  typedef char _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (10u + sizeof(_g4_t_v3)) > _g4_s0 ? (10u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v4)) > _g4_s1 ? (11u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 10u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 11u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v5 = *a1;
  v1 = *(uint32_t *)v5;
  Curl_infof(*(uint32_t *)v5, "Re-used connection seems dead, get a new one\n");
  *(uint8_t *)(v5 + 436) = 1;
  result = Curl_done(&v5, 0, 0);
  if ( result == 55 || result == 0 )
  {
    v4 = 1;
    result = Curl_connect(v1, a1, &v3, &v4);
    if ( result == 0 && v3 != 0 )
      return 6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_retry_request  (binary VA: 0x1a56180)
// Original: Curl_retry_request
// ----------------------------------------------------------------------------
int Curl_retry_request(int a1, char **a2)
{
  int v2;
  int v3;
  char *v4;

  v2 = *(uint32_t *)a1;
  *a2 = nullptr;
  if ( *(uint8_t *)(v2 + 669) == 0 || (v3 = 0, (*(uint32_t *)(*(uint32_t *)(a1 + 480) + 56) & 0x40001) != 0) )
  {
    if ( *(uint8_t *)(v2 + 34268) != 0
      || (v3 = 0, *(uint64_t *)(v2 + 44) + *(int *)(v2 + 60) == 0)
      && *(uint8_t *)(a1 + 437) != 0
      && *(uint8_t *)(v2 + 667) == 0
      && *(uint32_t *)(v2 + 888) != 11 )
    {
      v3 = 27;
      Curl_infof(*(uint32_t *)a1, "Connection died, retrying a fresh connect\n");
      v4 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(*(uint32_t *)a1 + 916)));
      *a2 = v4;
      if ( v4 != nullptr )
      {
        *(uint8_t *)(a1 + 436) = 1;
        *(uint8_t *)(a1 + 447) = 1;
        LOWORD(v3) = 0;
        if ( *(uint64_t *)(*(uint32_t *)(v2 + 34260) + 32) != 0 )
          Curl_readrewind(a1);
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Curl_perform  (binary VA: 0x1a56aa0)
// Original: Curl_perform
// ----------------------------------------------------------------------------
int Curl_perform(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;

  if ( *(uint8_t *)(a1 + 896) == 0 )
    return sub_1A56290(a1);
  result = Curl_wildcard_init(a1 + 34272);
  if ( result == 0 )
  {
    v2 = sub_1A56290(a1);
    if ( v2 != 0 )
    {
      Curl_wildcard_dtor(a1 + 34272);
      return v2;
    }
    else
    {
      while ( *(uint32_t *)(a1 + 34272) != 6 )
      {
        v3 = sub_1A56290(a1);
        if ( v3 != 0 )
          goto LABEL_6;
      }
      v3 = 0;
LABEL_6:
      v4 = v3;
      Curl_wildcard_dtor(a1 + 34272);
      *(uint32_t *)(a1 + 34272) = 0;
      return v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_setup_transfer  (binary VA: 0x1a56b70)
// Original: Curl_setup_transfer
// ----------------------------------------------------------------------------
int Curl_setup_transfer(int *a1, int a2, int64_t a3, char a4, int a5, int a6, int a7)
{
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  result = HIDWORD(a3);
  v8 = *a1;
  v9 = -1;
  if ( a2 != -1 )
    v9 = a1[a2 + 76];
  a1[123] = v9;
  v10 = -1;
  if ( a6 != -1 )
    v10 = a1[a6 + 76];
  a1[124] = v10;
  *(uint32_t *)(v8 + 20) = a3;
  *(uint8_t *)(v8 + 258) = a4;
  *(uint32_t *)(v8 + 28) = a5;
  *(uint32_t *)(v8 + 24) = HIDWORD(a3);
  *(uint32_t *)(v8 + 40) = a7;
  if ( a4 != 0
    || (*(uint8_t *)(v8 + 84) = 0,
        a3 > 0 && (result = (int)(uintptr_t)(Curl_pgrsSetDownloadSize(v8, a3, HIDWORD(a3))), *(uint8_t *)(v8 + 258) != 0))
    || *(uint8_t *)(v8 + 667) == 0 )
  {
    if ( a1[123] != -1 )
      *(uint32_t *)(v8 + 232) |= 1u;
    if ( a1[124] != -1 )
    {
      if ( *(uint8_t *)(v8 + 34204) != 0 )
      {
        result = *(uint32_t *)(v8 + 34260);
        if ( *(uint32_t *)(result + 76) == 2 )
        {
          v11 = *(uint32_t *)(v8 + 68);
          v12 = *(uint32_t *)(v8 + 72);
          *(uint32_t *)(v8 + 144) = 1;
          *(uint32_t *)(v8 + 136) = v11;
          *(uint32_t *)(v8 + 140) = v12;
          return ((Curl_expire(v8, 1000)), (int)0);
        }
        *(uint32_t *)(v8 + 144) = 2;
      }
      *(uint32_t *)(v8 + 232) |= 2u;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_safefree  (binary VA: 0x1a57000)
// Original: Curl_safefree
// ----------------------------------------------------------------------------
int Curl_safefree(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return ((int (*)(int))Curl_cfree)(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_freeset  (binary VA: 0x1a57340)
// Original: Curl_freeset
// ----------------------------------------------------------------------------
int Curl_freeset(int a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = 37;
  v2 = 0;
  do
  {
    v3 = *(uint32_t *)(a1 + 4 * v2++ + 724);
    result = Curl_safefree(v3);
    --v1;
  }
  while ( v1 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_dupset  (binary VA: 0x1a57380)
// Original: Curl_dupset
// ----------------------------------------------------------------------------
int Curl_dupset(uint16_t *a1, int a2)
{
  unsigned int v2;
  uint16_t *v3;
  uint16_t *v4;
  int v5;
  int v6;
  int result;

  v2 = 148;
  std::memcpy(a1 + 130, (const void *)(a2 + 260), 656);
  v3 = a1 + 362;
  if ( ((unsigned int)(uintptr_t)(a1 + 362) & 1) != 0 )
  {
    v3 = (uint16_t *)((char *)a1 + 725);
    *((uint8_t *)a1 + 724) = 0;
    LOBYTE(v2) = -109;
    if ( (((unsigned int)(uintptr_t)(a1) + 725) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (((uint8_t)(uintptr_t)(a1) - 44) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v3 = 0;
  v2 -= 2;
  ++v3;
LABEL_3:
  memset(v3, 0, 4 * (v2 >> 2));
  v4 = &v3[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  v5 = 37;
  v6 = 0;
  do
  {
    result = sub_1A56CC0((int *)&a1[2 * v6 + 362], *(uint32_t *)(a2 + 4 * (v6 + 180) + 4));
    if ( result != 0 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_mk_connc  (binary VA: 0x1a57430)
// Original: Curl_mk_connc
// ----------------------------------------------------------------------------
uint32_t * Curl_mk_connc(int a1, int a2)
{
  size_t v2;
  uint32_t *v3;
  void *v4;
  uint32_t *v6;

  if ( a1 != 0 )
  {
    v2 = 10;
    if ( a2 <= 0 )
      goto LABEL_5;
  }
  else
  {
    v2 = 5;
    if ( a2 <= 0 )
      goto LABEL_5;
  }
  v2 = 0x1FFFFFFF;
  if ( a2 <= 0x1FFFFFFF )
    v2 = a2;
LABEL_5:
  v3 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 12);
  if ( v3 != nullptr )
  {
    v4 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), v2, 4));
    *v3 = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
    {
      v3[1] = v2;
    }
    else
    {
      v6 = v3;
      v3 = nullptr;
      ((void (*)(uint32_t *))Curl_cfree)(v6);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Curl_rm_connc  (binary VA: 0x1a574e0)
// Original: Curl_rm_connc
// ----------------------------------------------------------------------------
int Curl_rm_connc(int *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *a1;
  if ( *a1 != 0 )
  {
    if ( a1[1] > 0 )
    {
      v2 = 0;
      do
      {
        v3 = *(uint32_t *)(v1 + 4 * v2++);
        sub_1A57030(v3);
        v1 = *a1;
      }
      while ( a1[1] > v2 );
    }
    ((void (*)(int))Curl_cfree)(v1);
  }
  return ((int (*)(int *))Curl_cfree)(a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_init_userdefined  (binary VA: 0x1a57540)
// Original: Curl_init_userdefined
// ----------------------------------------------------------------------------
int Curl_init_userdefined(int a1)
{
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(stdin);
  *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(((char *)stdout));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(((char *)stderr));
  *(uint32_t *)(a1 + 80) = (uint32_t)(uintptr_t)(&fwrite);
  *(uint32_t *)(a1 + 92) = (uint32_t)(uintptr_t)(((unsigned int (*)(void *, unsigned int, unsigned int, vox::StreamCursorInterface::Self *))fread));
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 180) = -1;
  *(uint32_t *)(a1 + 184) = -1;
  *(uint32_t *)(a1 + 64) = -1;
  *(uint32_t *)(a1 + 68) = -1;
  *(uint32_t *)(a1 + 48) = -1;
  *(uint32_t *)(a1 + 272) = 1;
  *(uint32_t *)(a1 + 628) = 1;
  *(uint8_t *)(a1 + 420) = 1;
  *(uint8_t *)(a1 + 421) = 1;
  *(uint8_t *)(a1 + 422) = 0;
  *(uint32_t *)(a1 + 376) = 1;
  *(uint32_t *)(a1 + 344) = 60;
  *(uint32_t *)(a1 + 324) = 5;
  *(uint32_t *)(a1 + 12) = 1080;
  *(uint32_t *)(a1 + 340) = 0;
  *(uint32_t *)(a1 + 36) = 1;
  *(uint32_t *)(a1 + 40) = 1;
  *(uint8_t *)(a1 + 399) = 1;
  *(uint32_t *)(a1 + 288) = 1;
  *(uint32_t *)(a1 + 292) = 2;
  *(uint32_t *)(a1 + 444) = -1;
  *(uint8_t *)(a1 + 336) = 1;
  *(uint32_t *)(a1 + 452) = 420;
  *(uint32_t *)(a1 + 456) = 493;
  *(uint32_t *)(a1 + 616) = -1;
  *(uint32_t *)(a1 + 620) = -1041;
  *(uint8_t *)(a1 + 636) = 0;
  *(uint32_t *)(a1 + 640) = 0;
  *(uint32_t *)(a1 + 644) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_open  (binary VA: 0x1a576c0)
// Original: Curl_open
// ----------------------------------------------------------------------------
int Curl_open(uint32_t *a1)
{
  uint32_t *v1;
  int result;
  void *v3;
  int inited;
  int v5;

  v1 = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0x86A0u));
  result = 27;
  if ( v1 != nullptr )
  {
    v1[8615] = -1059136595;
    v3 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 256));
    v1[302] = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
    {
      Curl_easy_initHandleData((int)(uintptr_t)(v1));
      inited = Curl_init_userdefined((int)(uintptr_t)(v1 + 65));
      v1[249] |= 0x10u;
      v5 = inited;
      v1[303] = 256;
      v1[301] = -1;
      v1[8497] = -1;
      v1[8498] = -1;
      v1[8568] = 0;
      v1[8571] = 0;
      v1[227] = 0;
      if ( inited == 0 )
      {
        *a1 = (uint32_t)(uintptr_t)(v1);
        return 0;
      }
      if ( v1[302] != 0 )
        ((void (*)(uint32_t))Curl_cfree)(v1[302]);
    }
    else
    {
      v5 = 27;
    }
    Curl_freeset((int)(uintptr_t)(v1));
    ((void (*)(uint32_t *))Curl_cfree)(v1);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_isPipeliningEnabled  (binary VA: 0x1a577f0)
// Original: Curl_isPipeliningEnabled
// ----------------------------------------------------------------------------
int Curl_isPipeliningEnabled(int a1)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return Curl_multi_canPipeline(*(uint32_t *)(a1 + 8));
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_disconnect  (binary VA: 0x1a57820)
// Original: Curl_disconnect
// ----------------------------------------------------------------------------
int Curl_disconnect(int a1, uint8_t a2)
{
  int v2;
  bool v3;
  bool v4;
  int v5;
  void (*v6)(int, uint32_t);
  uint32_t *v7;
  int v9;

  if ( a1 == 0 )
    return 0;
  v2 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 == 0 )
    return 0;
  if ( *(uint32_t *)(a1 + 56) != 0 )
  {
    Curl_resolv_unlock(v2, *(uint32_t **)(a1 + 56));
    *(uint32_t *)(a1 + 56) = 0;
  }
  Curl_hostcache_prune((uint32_t *)v2);
  v3 = *(uint32_t *)(a1 + 592) != 0;
  v4 = *(uint32_t *)(a1 + 608) != 0;
  if ( *(uint32_t *)(a1 + 592) != 0 )
  {
    v5 = *(uint32_t *)(v2 + 34112);
    *(uint8_t *)(v2 + 34124) = 0;
    *(uint32_t *)(v2 + 34116) = v5;
  }
  if ( v4 )
  {
    v9 = *(uint32_t *)(v2 + 34128);
    *(uint8_t *)(v2 + 34140) = 0;
    *(uint32_t *)(v2 + 34132) = v9;
  }
  else if ( !v3 )
  {
LABEL_9:
    if ( *(uint32_t *)(v2 + 244) != 0 )
    {
      ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v2 + 244));
      *(uint32_t *)(v2 + 244) = 0;
    }
    v6 = *(void (**)(int, uint32_t))(*(uint32_t *)(a1 + 480) + 44);
    if ( v6 != nullptr )
      v6(a1, a2);
    if ( *(uint32_t *)(a1 + 52) != -1 )
    {
      Curl_infof(v2, "Closing connection #%ld\n", *(uint32_t *)(a1 + 52));
      v7 = *(uint32_t **)(v2 + 1192);
      if ( v7 != nullptr )
        *(uint32_t *)(*v7 + 4 * *(uint32_t *)(a1 + 52)) = 0;
    }
    Curl_ssl_close(a1, 0);
    if ( (uint8_t)Curl_isPipeliningEnabled(v2) != 0 )
    {
      sub_1A56E20(*(uint32_t **)(a1 + 548), 1);
      sub_1A56E20(*(uint32_t **)(a1 + 552), 1);
      sub_1A56E20(*(uint32_t **)(a1 + 556), 1);
      sub_1A56E20(*(uint32_t **)(a1 + 560), 0);
    }
    sub_1A57030(a1);
    *(uint32_t *)(v2 + 34264) = 0;
    Curl_speedinit(v2);
    return 0;
  }
  *(uint8_t *)(v2 + 34144) = 0;
  Curl_ntlm_cleanup(a1);
  goto LABEL_9;
}

// ----------------------------------------------------------------------------
// Function: Curl_close  (binary VA: 0x1a59ca0)
// Original: Curl_close
// ----------------------------------------------------------------------------
int Curl_close(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *(uint32_t *)(a1 + 8);
  Curl_expire(a1, 0);
  if ( v1 != 0 )
    curl_multi_remove_handle(*(uint32_t *)(a1 + 8), a1);
  v2 = *(uint32_t *)(a1 + 34188);
  if ( v2 != 0 )
  {
    Curl_llist_destroy(v2, 0);
    *(uint32_t *)(a1 + 34188) = 0;
  }
  v3 = *(uint32_t *)(a1 + 1192);
  *(uint32_t *)(a1 + 34460) = 0;
  if ( v3 != 0 && *(uint32_t *)(v3 + 8) == 0 )
  {
    while ( sub_1A579F0(a1) != -1 )
      ;
    Curl_rm_connc(*(int **)(a1 + 1192));
    if ( *(uint32_t *)(a1 + 34216) != 0 )
      goto LABEL_8;
  }
  else if ( *(uint32_t *)(a1 + 34216) != 0 )
  {
LABEL_8:
    *(uint8_t *)(a1 + 34220) = 1;
    return 0;
  }
  if ( *(uint32_t *)(a1 + 4) == 1 )
  {
    Curl_hash_destroy(*(uint32_t **)a1);
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)a1 = 0;
  }
  if ( *(uint8_t *)(a1 + 34234) != 0 )
    ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 34236));
  Curl_safefree(*(uint32_t *)(a1 + 34224));
  Curl_safefree(*(uint32_t *)(a1 + 34260));
  Curl_ssl_close_all(a1);
  Curl_safefree(*(uint32_t *)(a1 + 34000));
  Curl_safefree(*(uint32_t *)(a1 + 34024));
  Curl_ssl_free_certinfo(a1);
  if ( *(uint8_t *)(a1 + 928) != 0 )
    ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 924));
  if ( *(uint8_t *)(a1 + 920) != 0 )
    ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 916));
  Curl_safefree(*(uint32_t *)(a1 + 1208));
  Curl_flush_cookies(a1, 1);
  Curl_digest_cleanup(a1);
  Curl_safefree(*(uint32_t *)(a1 + 34340));
  Curl_safefree(*(uint32_t *)(a1 + 34344));
  if ( *(uint32_t *)(a1 + 16) != 0 )
  {
    Curl_share_lock(a1, 1, 2);
    --*(uint32_t *)(*(uint32_t *)(a1 + 16) + 4);
    Curl_share_unlock(a1, 1);
  }
  Curl_freeset(a1);
  ((void (*)(int))Curl_cfree)(a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_ch_connc  (binary VA: 0x1a59ec0)
// Original: Curl_ch_connc
// ----------------------------------------------------------------------------
int Curl_ch_connc(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  v3 = 1;
  if ( a3 > 0 )
    v3 = a3;
  v12 = v3;
  if ( a2 != nullptr )
  {
    if ( v3 < a2[1] )
    {
      v8 = v3;
      v9 = 4 * v3;
      do
      {
        ++v8;
        v10 = *(uint32_t *)(*a2 + v9);
        v9 += 4;
        Curl_disconnect(v10, 0);
      }
      while ( a2[1] > v8 );
      if ( v12 >= *(uint32_t *)(a1 + 1204) )
        *(uint32_t *)(a1 + 1204) = -1;
    }
    v4 = 0x1FFFFFFF;
    if ( v12 <= 0x1FFFFFFF )
      v4 = v12;
    v5 = ((int (*)(uint32_t, int))Curl_crealloc)(*a2, 4 * v4);
    result = 27;
    if ( v5 != 0 )
    {
      v7 = a2[1];
      if ( v7 < v4 )
      {
        do
          *(uint32_t *)(v5 + 4 * v7++) = 0;
        while ( v7 != v4 );
      }
      *a2 = v5;
      a2[1] = v4;
      return 0;
    }
  }
  else
  {
    v11 = Curl_mk_connc(0, v3);
    *(uint32_t *)(a1 + 1192) = (uint32_t)(uintptr_t)(v11);
    return v11 == nullptr ? 0x1B : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_setopt  (binary VA: 0x1a59fd0)
// Original: Curl_setopt
// ----------------------------------------------------------------------------
int Curl_setopt(int a1, unsigned int a2, int *a3)
{
  int *v3;
  bool v4;
  int v5;
  int *v6;
  const char *v7;
  const char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  const char *v16;
  const char *v17;
  int v18;
  const char *v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  const char *v23;
  const char *src;
  int v25;
  int v26;
  int v27;
  const char *v28;
  unsigned int v29;
  unsigned int v30;
  const char *v31;
  int v32;
  const char *v33;
  int *v34;
  int *v35;
  const char *v36;
  const char *v37;
  const char *v38;
  int *v39;
  size_t v40;
  void *dest;
  char *v42;
  int v43;
  void *v44;

  v3 = a3;
  if ( a2 == 10007 )
  {
    v6 = (int *)(a1 + 792);
    goto LABEL_39;
  }
  if ( a2 <= 0x2717 )
  {
    if ( a2 == 99 )
    {
      *(uint8_t *)(a1 + 696) = *a3 != 0;
      return 0;
    }
    if ( a2 > 0x63 )
    {
      if ( a2 == 156 )
      {
        v5 = 0;
        *(uint32_t *)(a1 + 428) = *a3;
        return v5;
      }
      if ( a2 <= 0x9C )
      {
        if ( a2 == 121 )
        {
          *(uint8_t *)(a1 + 698) = *a3 != 0;
          return 0;
        }
        if ( a2 > 0x79 )
        {
          if ( a2 == 139 )
          {
            v5 = 0;
            *(uint16_t *)(a1 + 332) = curlx_sltous(*a3);
            return v5;
          }
          if ( a2 > 0x8B )
          {
            if ( a2 == 150 )
            {
              *(uint8_t *)(a1 + 596) = *a3 != 0;
              return 0;
            }
            if ( a2 > 0x96 )
            {
              if ( a2 == 154 )
              {
                v5 = 0;
                *(uint32_t *)(a1 + 692) = *a3;
                return v5;
              }
              if ( a2 == 155 )
              {
                v5 = 0;
                *(uint32_t *)(a1 + 424) = *a3;
                return v5;
              }
            }
            else
            {
              if ( a2 == 140 )
              {
                v5 = 0;
                *(uint32_t *)(a1 + 336) = curlx_sltosi(*a3);
                return v5;
              }
              if ( a2 == 141 )
              {
                *(uint8_t *)(a1 + 701) = *a3 != 0;
                return 0;
              }
            }
          }
          else
          {
            if ( a2 == 136 )
            {
              *(uint8_t *)(a1 + 699) = *a3 != 0;
              return 0;
            }
            if ( a2 > 0x88 )
            {
              if ( a2 == 137 )
              {
                *(uint8_t *)(a1 + 700) = *a3 != 0;
                return 0;
              }
              else
              {
                v5 = 0;
                *(uint32_t *)(a1 + 636) = *a3;
              }
              return v5;
            }
            if ( a2 == 129 )
            {
              v5 = 0;
              *(uint32_t *)(a1 + 688) = *a3;
              return v5;
            }
          }
        }
        else
        {
          if ( a2 == 110 )
          {
            v20 = *a3;
            if ( *a3 == 1 )
            {
              *(uint32_t *)(a1 + 640) = 1;
              return 0;
            }
            else if ( v20 == 2 )
            {
              *(uint32_t *)(a1 + 640) = 2;
              return 0;
            }
            else
            {
              v5 = 48;
              if ( v20 == 0 )
              {
                *(uint32_t *)(a1 + 640) = 0;
                return 0;
              }
            }
            return v5;
          }
          if ( a2 > 0x6E )
          {
            if ( a2 == 113 )
            {
              v5 = 0;
              *(uint32_t *)(a1 + 624) = *a3;
              return v5;
            }
            if ( a2 <= 0x71 )
            {
              if ( a2 == 111 )
              {
                v21 = *a3;
                if ( (*a3 & 0x10) != 0 )
                {
                  *(uint8_t *)(a1 + 34142) = 1;
                  v21 = v21 & 0xFFFFFFED | 2;
                }
                else
                {
                  *(uint8_t *)(a1 + 34142) = 0;
                }
                v22 = v21 & 0xFFFFFFFB;
                v5 = 4;
                if ( v22 != 0 )
                {
                  *(uint32_t *)(a1 + 300) = v22;
                  LOWORD(v5) = 0;
                }
              }
              else
              {
                v5 = 0;
                *(uint32_t *)(a1 + 432) = 1000 * *a3;
              }
              return v5;
            }
            if ( a2 == 114 )
            {
              v5 = 0;
              *(uint64_t *)(a1 + 628) = *a3;
              return v5;
            }
            if ( a2 == 119 )
            {
              v5 = 0;
              *(uint32_t *)(a1 + 684) = *a3;
              return v5;
            }
          }
          else
          {
            if ( a2 == 105 )
            {
              *(uint8_t *)(a1 + 663) = *a3 != 0;
              return 0;
            }
            if ( a2 > 0x69 )
            {
              if ( a2 == 106 )
              {
                *(uint8_t *)(a1 + 681) = *a3 != 0;
                return 0;
              }
              if ( a2 == 107 )
              {
                v29 = *a3;
                if ( (*a3 & 0x10) != 0 )
                {
                  *(uint8_t *)(a1 + 34126) = 1;
                  v29 = v29 & 0xFFFFFFED | 2;
                }
                else
                {
                  *(uint8_t *)(a1 + 34126) = 0;
                }
                v30 = v29 & 0xFFFFFFFB;
                v5 = 4;
                if ( v30 != 0 )
                {
                  *(uint32_t *)(a1 + 296) = v30;
                  LOWORD(v5) = 0;
                }
                return v5;
              }
            }
            else if ( a2 == 101 )
            {
              v5 = 0;
              *(uint32_t *)(a1 + 600) = *a3;
              return v5;
            }
          }
        }
        return 48;
      }
      if ( a2 == 182 )
      {
        v5 = 0;
        *(uint32_t *)(a1 + 880) = *a3;
        return v5;
      }
      if ( a2 <= 0xB6 )
      {
        if ( a2 == 161 )
        {
          v27 = *a3 & 1;
          *(uint8_t *)(a1 + 313) = (*a3 & 2) != 0;
          *(uint8_t *)(a1 + 312) = v27;
          return 0;
        }
        if ( a2 <= 0xA1 )
        {
          if ( a2 == 158 )
          {
            *(uint8_t *)(a1 + 709) = *a3 == 0;
            return 0;
          }
          else if ( a2 < 0x9E )
          {
            *(uint8_t *)(a1 + 708) = *a3 == 0;
            return 0;
          }
          else
          {
            v5 = 0;
            if ( a2 == 159 )
              *(uint32_t *)(a1 + 712) = *a3;
            else
              *(uint32_t *)(a1 + 716) = *a3;
          }
          return v5;
        }
        switch ( a2 )
        {
          case 0xA6u:
            if ( *a3 != 0 )
            {
              v5 = 48;
              if ( *a3 == 1 )
              {
                *(uint8_t *)(a1 + 720) = 1;
                return 0;
              }
            }
            else
            {
              *(uint8_t *)(a1 + 720) = 0;
              return 0;
            }
            return v5;
          case 0xABu:
            v5 = 0;
            *(uint32_t *)(a1 + 872) = curlx_sltoui(*a3);
            return v5;
          case 0xACu:
            *(uint8_t *)(a1 + 597) = *a3 != 0;
            return 0;
          case 0xB2u:
            v5 = 0;
            *(uint32_t *)(a1 + 436) = *a3;
            return v5;
          case 0xB5u:
            v5 = 0;
            *(uint32_t *)(a1 + 876) = *a3;
            return v5;
          default:
            return 48;
        }
      }
      if ( a2 == 207 )
      {
        *(uint8_t *)(a1 + 662) = *a3 != 0;
        return 0;
      }
      if ( a2 <= 0xCF )
      {
        switch ( a2 )
        {
          case 0xBCu:
            *(uint8_t *)(a1 + 682) = *a3 != 0;
            return 0;
          case 0xBDu:
            v14 = 0;
            v15 = *a3 - 1;
            if ( v15 <= 0xA )
              v14 = dword_1D35C40[v15];
            *(uint32_t *)(a1 + 888) = v14;
            return 0;
          case 0xC1u:
          case 0xC2u:
            v5 = 0;
            *(uint32_t *)(a1 + 34248) = *a3;
            return v5;
          case 0xC5u:
            *(uint8_t *)(a1 + 896) = *a3 != 0;
            return 0;
          default:
            return 48;
        }
      }
      if ( a2 == 10004 )
      {
        v6 = (int *)(a1 + 788);
        goto LABEL_39;
      }
      if ( a2 <= 0x2714 )
      {
        if ( a2 == 10001 )
        {
          v5 = 0;
          *(uint32_t *)(a1 + 276) = *a3;
          return v5;
        }
        if ( a2 == 10002 )
        {
          if ( *(uint8_t *)(a1 + 920) != 0 )
          {
            ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 916));
            *(uint8_t *)(a1 + 920) = 0;
            v3 = a3;
          }
          v5 = sub_1A56CC0((int *)(a1 + 800), *v3);
          *(uint32_t *)(a1 + 916) = *(uint32_t *)(a1 + 800);
          return v5;
        }
        return 48;
      }
      if ( a2 == 10005 )
      {
        v34 = (int *)(a1 + 836);
        v35 = (int *)(a1 + 840);
      }
      else
      {
        v34 = (int *)(a1 + 844);
        v35 = (int *)(a1 + 848);
      }
      return sub_1A57220((const char *)*a3, v34, v35);
    }
    if ( a2 == 53 )
    {
      *(uint8_t *)(a1 + 655) = *a3 != 0;
      return 0;
    }
    if ( a2 <= 0x35 )
    {
      if ( a2 == 41 )
      {
        *(uint8_t *)(a1 + 676) = *a3 != 0;
        return 0;
      }
      if ( a2 <= 0x29 )
      {
        switch ( a2 )
        {
          case 3u:
            v5 = 0;
            *(uint32_t *)(a1 + 292) = *a3;
            return v5;
          case 0xDu:
            v5 = 0;
            *(uint32_t *)(a1 + 424) = 1000 * *a3;
            return v5;
          case 0xEu:
            v5 = 0;
            *(uint64_t *)(a1 + 440) = *a3;
            return v5;
          case 0x13u:
            v5 = 0;
            *(uint32_t *)(a1 + 448) = *a3;
            return v5;
          case 0x14u:
            v5 = 0;
            *(uint32_t *)(a1 + 452) = *a3;
            return v5;
          case 0x15u:
            v5 = 0;
            *(uint64_t *)(a1 + 472) = *a3;
            return v5;
          case 0x1Bu:
            *(uint8_t *)(a1 + 489) = *a3 != 0;
            return 0;
          case 0x20u:
            v5 = 0;
            *(uint32_t *)(a1 + 540) = *a3;
            return v5;
          case 0x21u:
            v5 = 0;
            *(uint32_t *)(a1 + 524) = *a3;
            return v5;
          case 0x22u:
            v5 = 0;
            *(uint32_t *)(a1 + 528) = *a3;
            return v5;
          default:
            return 48;
        }
      }
      if ( a2 != 46 )
      {
        if ( a2 <= 0x2E )
        {
          if ( a2 == 43 )
          {
            v4 = *a3 == 0;
            *(uint8_t *)(a1 + 659) = *a3 != 0;
            if ( v4 )
              *(uint32_t *)(a1 + 996) &= ~0x10u;
            else
              *(uint32_t *)(a1 + 996) |= 0x10u;
            return 0;
          }
          else if ( a2 < 0x2B )
          {
            *(uint8_t *)(a1 + 664) = *a3 != 0;
            return 0;
          }
          else
          {
            if ( a2 == 44 )
              *(uint8_t *)(a1 + 667) = *a3 != 0;
            else
              *(uint8_t *)(a1 + 660) = *a3 != 0;
            return 0;
          }
        }
        if ( a2 == 50 )
        {
          *(uint8_t *)(a1 + 656) = *a3 != 0;
          return 0;
        }
        if ( a2 > 0x32 )
        {
          if ( a2 == 51 )
          {
            v5 = 0;
            *(uint32_t *)(a1 + 672) = *a3;
          }
          else
          {
            *(uint8_t *)(a1 + 661) = *a3 != 0;
            return 0;
          }
          return v5;
        }
        if ( a2 == 47 )
        {
          if ( *a3 != 0 )
          {
            *(uint32_t *)(a1 + 532) = 2;
            *(uint8_t *)(a1 + 667) = 0;
          }
          else
          {
            *(uint32_t *)(a1 + 532) = 1;
          }
          return 0;
        }
        if ( a2 == 48 )
        {
          *(uint8_t *)(a1 + 657) = *a3 != 0;
          return 0;
        }
        return 48;
      }
    }
    else
    {
      if ( a2 == 75 )
      {
        *(uint8_t *)(a1 + 678) = *a3 != 0;
        return 0;
      }
      if ( a2 > 0x4B )
      {
        switch ( a2 )
        {
          case 'N':
            v5 = 0;
            *(uint32_t *)(a1 + 428) = 1000 * *a3;
            return v5;
          case 'P':
            v5 = 0;
            if ( *a3 != 0 )
            {
              *(uint32_t *)(a1 + 532) = 1;
              *(uint8_t *)(a1 + 669) = 0;
              *(uint8_t *)(a1 + 667) = 0;
            }
            return v5;
          case 'Q':
            v5 = 0;
            *(uint32_t *)(a1 + 552) = *a3;
            return v5;
          case 'T':
            v5 = 0;
            *(uint32_t *)(a1 + 536) = *a3;
            return v5;
          case 'U':
            *(uint8_t *)(a1 + 680) = *a3 != 0;
            return 0;
          case 'Z':
            return Curl_ssl_set_engine_default(a1);
          case '[':
            *(uint8_t *)(a1 + 697) = *a3 != 0;
            return 0;
          case '\\':
            v5 = 0;
            *(uint32_t *)(a1 + 604) = *a3;
            return v5;
          case '`':
            *(uint8_t *)(a1 + 488) = *a3 != 0;
            return 0;
          case 'b':
            v33 = (const char *)*a3;
            v5 = 0;
            *(uint32_t *)(a1 + 608) = *a3;
            if ( (unsigned int)(uintptr_t)(v33 - 1) > 0x3FFE )
              *(uint32_t *)(a1 + 608) = 0;
            return v5;
          default:
            return 48;
        }
      }
      if ( a2 == 61 )
      {
        *(uint8_t *)(a1 + 654) = *a3 != 0;
        return 0;
      }
      if ( a2 > 0x3D )
      {
        switch ( a2 )
        {
          case '@':
            v5 = 0;
            *(uint32_t *)(a1 + 548) = *a3;
            return v5;
          case 'D':
            v5 = 0;
            *(uint32_t *)(a1 + 308) = *a3;
            return v5;
          case 'E':
            *(uint8_t *)(a1 + 653) = *a3 != 0;
            return 0;
          case 'G':
            return Curl_ch_connc(a1, *(uint32_t **)(a1 + 1192), *a3);
          case 'J':
            *(uint8_t *)(a1 + 679) = *a3 != 0;
            return 0;
          default:
            return 48;
        }
      }
      if ( a2 == 58 )
      {
        *(uint8_t *)(a1 + 666) = *a3 != 0;
        return 0;
      }
      if ( a2 > 0x3A )
      {
        if ( a2 == 59 )
        {
          v5 = 0;
          *(uint32_t *)(a1 + 272) = *a3;
        }
        else
        {
          v31 = (const char *)*a3;
          v32 = *a3 >> 31;
          if ( *a3 > *(uint64_t *)(a1 + 324) && *(uint32_t *)(a1 + 316) == *(uint32_t *)(a1 + 784) )
          {
            sub_1A56CC0((int *)(a1 + 784), 0);
            *(uint32_t *)(a1 + 316) = 0;
          }
          *(uint32_t *)(a1 + 324) = (uint32_t)(uintptr_t)(v31);
          *(uint32_t *)(a1 + 328) = v32;
          return 0;
        }
        return v5;
      }
      if ( a2 != 54 )
        return 48;
    }
    v4 = *a3 == 0;
    *(uint8_t *)(a1 + 669) = *a3 != 0;
    if ( v4 )
    {
      *(uint32_t *)(a1 + 532) = 1;
    }
    else
    {
      *(uint32_t *)(a1 + 532) = 4;
      *(uint8_t *)(a1 + 667) = 0;
    }
    return 0;
  }
  if ( a2 == 10149 )
  {
    v5 = 0;
    *(uint32_t *)(a1 + 380) = *a3;
    return v5;
  }
  if ( a2 > 0x27A5 )
  {
    switch ( a2 )
    {
      case 0x27B4u:
        v5 = 0;
        *(uint32_t *)(a1 + 388) = *a3;
        return v5;
      case 0x27B5u:
        src = (const char *)*a3;
        if ( *a3 == 0 || ((v25 = *(uint32_t *)(a1 + 328)) & *(uint32_t *)(a1 + 324)) == 0xFFFFFFFF )
        {
          v5 = sub_1A56CC0((int *)(a1 + 784), *a3);
        }
        else
        {
          v5 = 27;
          if ( v25 == 0 )
          {
            sub_1A56CC0((int *)(a1 + 784), 0);
            v40 = 1;
            if ( *(uint64_t *)(a1 + 324) != 0 )
              v40 = *(uint32_t *)(a1 + 324);
            dest = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v40));
            if ( dest != nullptr )
            {
              if ( *(uint64_t *)(a1 + 324) != 0 )
              {
                v44 = dest;
                memcpy(dest, src, *(uint32_t *)(a1 + 324));
                dest = v44;
              }
              *(uint32_t *)(a1 + 784) = (uint32_t)(uintptr_t)(dest);
              v5 = 0;
            }
          }
        }
        v26 = *(uint32_t *)(a1 + 784);
        *(uint32_t *)(a1 + 532) = 2;
        *(uint32_t *)(a1 + 316) = v26;
        return v5;
      case 0x27B8u:
        v5 = 0;
        *(uint32_t *)(a1 + 400) = *a3;
        return v5;
      case 0x27B9u:
        v6 = (int *)(a1 + 828);
        break;
      case 0x27BAu:
        v6 = (int *)(a1 + 832);
        break;
      case 0x27BDu:
        v6 = (int *)(a1 + 836);
        break;
      case 0x27BEu:
        v6 = (int *)(a1 + 840);
        break;
      case 0x27BFu:
        v6 = (int *)(a1 + 844);
        break;
      case 0x27C0u:
        v6 = (int *)(a1 + 848);
        break;
      case 0x27C1u:
        v6 = (int *)(a1 + 852);
        break;
      case 0x27CAu:
        v6 = (int *)(a1 + 868);
        break;
      case 0x27CBu:
        v5 = 0;
        *(uint32_t *)(a1 + 884) = *a3;
        return v5;
      case 0x27CEu:
        v6 = (int *)(a1 + 856);
        break;
      case 0x27CFu:
        v6 = (int *)(a1 + 860);
        break;
      case 0x27D0u:
        v6 = (int *)(a1 + 864);
        break;
      case 0x27D3u:
        v5 = 0;
        *(uint32_t *)(a1 + 288) = *a3;
        return v5;
      case 0x27D9u:
        v5 = 0;
        *(uint32_t *)(a1 + 34296) = *a3;
        return v5;
      case 0x27DAu:
        v5 = 0;
        *(uint32_t *)(a1 + 912) = *a3;
        return v5;
      case 0x27DBu:
        v23 = (const char *)*a3;
        v5 = 0;
        *(uint32_t *)(a1 + 520) = *a3;
        *(uint32_t *)(a1 + 936) = (uint32_t)(uintptr_t)(v23);
        return v5;
      case 0x27E1u:
        v5 = 0;
        *(uint32_t *)(a1 + 396) = *a3;
        return v5;
      case 0x4E2Bu:
        v4 = *a3 == 0;
        *(uint32_t *)(a1 + 340) = *a3;
        if ( v4 )
        {
          *(uint32_t *)(a1 + 360) = 0;
          *(uint32_t *)(a1 + 340) = (uint32_t)(uintptr_t)(&fwrite);
        }
        else
        {
          *(uint32_t *)(a1 + 360) = 1;
        }
        return 0;
      case 0x4E2Cu:
        v4 = *a3 == 0;
        *(uint32_t *)(a1 + 352) = *a3;
        if ( v4 )
        {
          *(uint32_t *)(a1 + 356) = 0;
          *(uint32_t *)(a1 + 352) = (uint32_t)(uintptr_t)(((unsigned int (*)(void *, unsigned int, unsigned int, vox::StreamCursorInterface::Self *))fread));
        }
        else
        {
          *(uint32_t *)(a1 + 356) = 1;
        }
        return 0;
      case 0x4E58u:
        v4 = *a3 == 0;
        *(uint32_t *)(a1 + 364) = *a3;
        *(uint8_t *)(a1 + 988) = !v4;
        return 0;
      case 0x4E6Fu:
        v5 = 0;
        *(uint32_t *)(a1 + 344) = *a3;
        return v5;
      case 0x4E7Eu:
        v5 = 0;
        *(uint32_t *)(a1 + 368) = *a3;
        return v5;
      case 0x4E8Cu:
        v5 = 0;
        *(uint32_t *)(a1 + 588) = *a3;
        return v5;
      case 0x4EA2u:
        v5 = 0;
        *(uint32_t *)(a1 + 372) = *a3;
        return v5;
      case 0x4EAEu:
        v5 = 0;
        *(uint32_t *)(a1 + 404) = *a3;
        return v5;
      case 0x4EAFu:
        v5 = 0;
        *(uint32_t *)(a1 + 408) = *a3;
        return v5;
      case 0x4EB0u:
        v5 = 0;
        *(uint32_t *)(a1 + 412) = *a3;
        return v5;
      case 0x4EB4u:
        v5 = 0;
        *(uint32_t *)(a1 + 376) = *a3;
        return v5;
      case 0x4EC3u:
        v5 = 0;
        *(uint32_t *)(a1 + 384) = *a3;
        return v5;
      case 0x4EC7u:
        v5 = 0;
        *(uint32_t *)(a1 + 320) = *a3;
        return v5;
      case 0x4EE4u:
        v5 = 0;
        *(uint32_t *)(a1 + 348) = *a3;
        return v5;
      case 0x4EE6u:
        v5 = 0;
        *(uint32_t *)(a1 + 900) = *a3;
        return v5;
      case 0x4EE7u:
        v5 = 0;
        *(uint32_t *)(a1 + 904) = *a3;
        return v5;
      case 0x4EE8u:
        v5 = 0;
        *(uint32_t *)(a1 + 908) = *a3;
        return v5;
      case 0x4EF0u:
        v5 = 0;
        *(uint32_t *)(a1 + 392) = *a3;
        return v5;
      case 0x75A3u:
        v28 = (const char *)*a3;
        *(uint32_t *)(a1 + 444) = a3[1];
        *(uint32_t *)(a1 + 440) = (uint32_t)(uintptr_t)(v28);
        return 0;
      case 0x75A4u:
        v17 = (const char *)*a3;
        *(uint32_t *)(a1 + 476) = a3[1];
        *(uint32_t *)(a1 + 472) = (uint32_t)(uintptr_t)(v17);
        return 0;
      case 0x75A5u:
        v16 = (const char *)*a3;
        *(uint32_t *)(a1 + 632) = a3[1];
        *(uint32_t *)(a1 + 628) = (uint32_t)(uintptr_t)(v16);
        return 0;
      case 0x75A8u:
        v18 = a3[1];
        v19 = (const char *)*a3;
        if ( *(uint64_t *)a3 > *(uint64_t *)(a1 + 324) && *(uint32_t *)(a1 + 316) == *(uint32_t *)(a1 + 784) )
        {
          sub_1A56CC0((int *)(a1 + 784), 0);
          *(uint32_t *)(a1 + 316) = 0;
        }
        *(uint32_t *)(a1 + 328) = v18;
        *(uint32_t *)(a1 + 324) = (uint32_t)(uintptr_t)(v19);
        return 0;
      case 0x75C1u:
        v38 = (const char *)*a3;
        *(uint32_t *)(a1 + 460) = a3[1];
        *(uint32_t *)(a1 + 456) = (uint32_t)(uintptr_t)(v38);
        return 0;
      case 0x75C2u:
        v37 = (const char *)*a3;
        *(uint32_t *)(a1 + 468) = a3[1];
        *(uint32_t *)(a1 + 464) = (uint32_t)(uintptr_t)(v37);
        return 0;
      default:
        return 48;
    }
LABEL_39:
    v7 = (const char *)*a3;
    return sub_1A56CC0(v6, (int)(uintptr_t)(v7));
  }
  if ( a2 == 10070 )
  {
    v5 = 0;
    *(uint32_t *)(a1 + 516) = *a3;
    return v5;
  }
  if ( a2 <= 0x2756 )
  {
    if ( a2 == 10026 )
    {
      v6 = (int *)(a1 + 768);
      goto LABEL_39;
    }
    if ( a2 <= 0x272A )
    {
      if ( a2 == 10017 )
      {
        v5 = sub_1A56CC0((int *)(a1 + 760), *a3);
        *(uint8_t *)(a1 + 658) = *(uint32_t *)(a1 + 760) != 0;
        return v5;
      }
      if ( a2 <= 0x2721 )
      {
        switch ( a2 )
        {
          case 0x2719u:
            v5 = 0;
            *(uint32_t *)(a1 + 280) = *a3;
            return v5;
          case 0x271Au:
            v5 = 0;
            *(uint32_t *)(a1 + 268) = *a3;
            return v5;
          case 0x271Fu:
            *(uint32_t *)(a1 + 316) = *a3;
            sub_1A56CC0((int *)(a1 + 784), 0);
            v5 = 0;
            *(uint32_t *)(a1 + 532) = 2;
            return v5;
          case 0x2720u:
            if ( *(uint8_t *)(a1 + 928) != 0 )
            {
              ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 924));
              *(uint8_t *)(a1 + 928) = 0;
              v3 = a3;
            }
            v5 = sub_1A56CC0((int *)(a1 + 796), *v3);
            *(uint32_t *)(a1 + 924) = *(uint32_t *)(a1 + 796);
            return v5;
          default:
            return 48;
        }
      }
      if ( a2 == 10023 )
      {
        v5 = 0;
        *(uint32_t *)(a1 + 480) = *a3;
        return v5;
      }
      if ( a2 > 0x2727 )
      {
        if ( a2 == 10024 )
        {
          v5 = 0;
          *(uint32_t *)(a1 + 484) = *a3;
          *(uint32_t *)(a1 + 532) = 3;
          *(uint8_t *)(a1 + 667) = 0;
          return v5;
        }
        v6 = (int *)(a1 + 724);
        goto LABEL_39;
      }
      if ( a2 == 10018 )
      {
        v6 = (int *)(a1 + 824);
      }
      else
      {
        if ( a2 != 10022 )
          return 48;
        v6 = (int *)(a1 + 732);
      }
      goto LABEL_39;
    }
    switch ( a2 )
    {
      case 0x272Cu:
        v5 = 0;
        *(uint32_t *)(a1 + 492) = *a3;
        return v5;
      case 0x272Du:
        v5 = 0;
        *(uint32_t *)(a1 + 284) = *a3;
        return v5;
      case 0x272Fu:
        v5 = 0;
        if ( *a3 != 0 )
        {
          LOWORD(v5) = 27;
          v39 = curl_slist_append(*(uint32_t *)(a1 + 932), *a3);
          if ( v39 != nullptr )
          {
            *(uint32_t *)(a1 + 932) = (uint32_t)(uintptr_t)(v39);
            LOWORD(v5) = 0;
          }
        }
        return v5;
      case 0x2734u:
        v6 = (int *)(a1 + 740);
        goto LABEL_39;
      case 0x2735u:
        v5 = 0;
        v4 = *a3 == 0;
        *(uint32_t *)(a1 + 260) = *a3;
        if ( v4 )
          *(uint32_t *)(a1 + 260) = (uint32_t)(uintptr_t)(((char *)stderr));
        return v5;
      case 0x2737u:
        v5 = 0;
        *(uint32_t *)(a1 + 496) = *a3;
        return v5;
      case 0x2749u:
        v5 = 0;
        *(uint32_t *)(a1 + 416) = *a3;
        return v5;
      case 0x274Eu:
        v6 = (int *)(a1 + 744);
        goto LABEL_39;
      case 0x274Fu:
        v5 = sub_1A56CC0((int *)(a1 + 776), *a3);
        *(uint8_t *)(a1 + 677) = *(uint32_t *)(a1 + 776) != 0;
        return v5;
      case 0x2751u:
        v6 = (int *)(a1 + 808);
        goto LABEL_39;
      default:
        return 48;
    }
  }
  if ( a2 == 10097 )
  {
    v6 = (int *)(a1 + 804);
    goto LABEL_39;
  }
  if ( a2 <= 0x2771 )
  {
    if ( a2 == 10086 )
    {
      v6 = (int *)(a1 + 728);
    }
    else
    {
      if ( a2 > 0x2766 )
      {
        if ( a2 == 10089 )
        {
          v5 = 0;
          if ( *a3 != 0 && *(uint8_t *)*a3 != 0 )
            return Curl_ssl_set_engine(a1, (char *)*a3);
          return v5;
        }
        if ( a2 <= 0x2769 )
        {
          if ( a2 == 10087 )
            v6 = (int *)(a1 + 764);
          else
            v6 = (int *)(a1 + 772);
          goto LABEL_39;
        }
        if ( a2 == 10093 )
        {
          v5 = 0;
          *(uint32_t *)(a1 + 500) = *a3;
          return v5;
        }
        if ( a2 == 10095 )
        {
          v5 = 0;
          *(uint32_t *)(a1 + 264) = *a3;
          return v5;
        }
        return 48;
      }
      switch ( a2 )
      {
        case 0x275Cu:
          v6 = (int *)(a1 + 820);
          break;
        case 0x275Du:
          v6 = (int *)(a1 + 816);
          break;
        case 0x2762u:
          v5 = sub_1A56CC0((int *)(a1 + 736), *a3);
          *(uint32_t *)(a1 + 940) = (uint32_t)(uintptr_t)(Curl_cookie_init(a1, nullptr, *(uint32_t *)(a1 + 940), *(uint8_t *)(a1 + 488)));
          return v5;
        case 0x2763u:
          v6 = (int *)(a1 + 812);
          break;
        default:
          return 48;
      }
    }
    goto LABEL_39;
  }
  switch ( a2 )
  {
    case 0x2774u:
      v9 = (const char *)*a3;
      if ( *(uint32_t *)(a1 + 16) != 0 )
      {
        Curl_share_lock(a1, 1, 2);
        if ( *(uint32_t *)(a1 + 4) == 4 )
        {
          *(uint32_t *)a1 = 0;
          *(uint32_t *)(a1 + 4) = 0;
        }
        v10 = *(uint32_t *)(a1 + 16);
        if ( *(uint32_t *)(v10 + 24) == *(uint32_t *)(a1 + 940) )
          *(uint32_t *)(a1 + 940) = 0;
        --*(uint32_t *)(v10 + 4);
        Curl_share_unlock(a1, 1);
      }
      v5 = 0;
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v9);
      if ( v9 != nullptr )
      {
        Curl_share_lock(a1, 1, 2);
        ++*(uint32_t *)(*(uint32_t *)(a1 + 16) + 4);
        v11 = *(uint32_t *)(a1 + 16);
        v12 = *(uint32_t *)(v11 + 20);
        if ( v12 != 0 )
        {
          if ( *(uint32_t *)(a1 + 4) == 1 )
          {
            Curl_hash_destroy(*(uint32_t **)a1);
            v11 = *(uint32_t *)(a1 + 16);
            v12 = *(uint32_t *)(v11 + 20);
          }
          *(uint32_t *)a1 = v12;
          *(uint32_t *)(a1 + 4) = 4;
        }
        v13 = *(uint32_t *)(v11 + 24);
        if ( v13 != 0 )
        {
          if ( *(uint32_t *)(a1 + 940) != 0 )
          {
            Curl_cookie_cleanup(*(uint32_t *)(a1 + 940));
            v13 = *(uint32_t *)(*(uint32_t *)(a1 + 16) + 24);
          }
          *(uint32_t *)(a1 + 940) = v13;
        }
        v5 = 0;
        Curl_share_unlock(a1, 1);
      }
      return v5;
    case 0x2776u:
      v7 = (const char *)*a3;
      if ( *a3 != 0 && *v7 == 0 )
        v7 = "deflate, gzip";
      v6 = (int *)(a1 + 748);
      return sub_1A56CC0(v6, (int)(uintptr_t)(v7));
    case 0x2777u:
      v5 = 0;
      *(uint32_t *)(a1 + 612) = *a3;
      return v5;
    case 0x2778u:
      v5 = 0;
      *(uint32_t *)(a1 + 620) = *a3;
      return v5;
    case 0x277Du:
      v5 = 0;
      *(uint32_t *)(a1 + 592) = *a3;
      return v5;
    case 0x2786u:
      return sub_1A56CC0((int *)(a1 + 780), *a3);
    case 0x2793u:
      v5 = 0;
      *(uint32_t *)(a1 + 420) = *a3;
      return v5;
    case 0x2796u:
      v6 = (int *)(a1 + 752);
      goto LABEL_39;
    case 0x2797u:
      v36 = (const char *)*a3;
      v5 = 0;
      if ( *a3 != 0 )
      {
        if ( Curl_raw_equal(*a3, &off_1B23A1E) != 0 )
        {
          Curl_cookie_clearall(*(uint32_t *)(a1 + 940));
        }
        else if ( Curl_raw_equal(v36, "SESS") != 0 )
        {
          Curl_cookie_clearsess(*(uint32_t *)(a1 + 940));
        }
        else if ( Curl_raw_equal(v36, "FLUSH") != 0 )
        {
          Curl_flush_cookies(a1, 0);
        }
        else
        {
          if ( *(uint32_t *)(a1 + 940) == 0 )
            *(uint32_t *)(a1 + 940) = (uint32_t)(uintptr_t)(Curl_cookie_init(a1, nullptr, 0, 1));
          v42 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v36));
          v43 = (int)(uintptr_t)(v42);
          v5 = 27;
          if ( v42 != nullptr )
          {
            if ( Curl_raw_nequal("Set-Cookie:", v42, 11) != 0 )
              Curl_cookie_add(a1, *(uint32_t *)(a1 + 940), 1, v43 + 11, nullptr, nullptr);
            else
              Curl_cookie_add(a1, *(uint32_t *)(a1 + 940), 0, v43, nullptr, nullptr);
            v5 = 0;
            ((void (*)(int))Curl_cfree)(v43);
          }
        }
      }
      return v5;
    case 0x27A3u:
      v6 = (int *)(a1 + 756);
      goto LABEL_39;
    default:
      return 48;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_addHandleToPipeline  (binary VA: 0x1a5baf0)
// Original: Curl_addHandleToPipeline
// ----------------------------------------------------------------------------
int Curl_addHandleToPipeline(int a1, uint32_t *a2)
{
  return Curl_llist_insert_next(a2, a2[1], a1) == 0 ? 0x1B : 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_removeHandleFromPipeline  (binary VA: 0x1a5bb30)
// Original: Curl_removeHandleFromPipeline
// ----------------------------------------------------------------------------
int Curl_removeHandleFromPipeline(int a1, uint32_t *a2)
{
  int result;
  uint32_t *v3;

  result = 0;
  v3 = (uint32_t *)*a2;
  if ( *a2 != 0 )
  {
    do
    {
      if ( *v3 == a1 )
      {
        Curl_llist_remove((int)(uintptr_t)(a2), v3, 0);
        return 1;
      }
      v3 = (uint32_t *)v3[2];
    }
    while ( v3 != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_getoff_all_pipelines  (binary VA: 0x1a5bba0)
// Original: Curl_getoff_all_pipelines
// ----------------------------------------------------------------------------
int Curl_getoff_all_pipelines(int a1, int a2)
{
  int **v2;
  bool v3;
  int *v4;
  int v5;
  int v7;
  bool v8;

  v2 = *(int ***)(a2 + 552);
  if ( *(uint8_t *)(a2 + 544) != 0 )
  {
    v7 = 0;
    if ( *v2 != nullptr )
      v7 = **v2;
    v8 = a1 == v7;
  }
  else
  {
    v8 = false;
  }
  v3 = false;
  if ( *(uint8_t *)(a2 + 545) != 0 )
  {
    v4 = **(int ***)(a2 + 548);
    v5 = 0;
    if ( v4 != nullptr )
      v5 = *v4;
    v3 = a1 == v5;
  }
  if ( Curl_removeHandleFromPipeline(a1, v2) != 0 && v8 )
    *(uint8_t *)(a2 + 544) = 0;
  if ( Curl_removeHandleFromPipeline(a1, *(uint32_t **)(a2 + 548)) != 0 && v3 )
    *(uint8_t *)(a2 + 545) = 0;
  Curl_removeHandleFromPipeline(a1, *(uint32_t **)(a2 + 556));
  return Curl_removeHandleFromPipeline(a1, *(uint32_t **)(a2 + 560));
}

// ----------------------------------------------------------------------------
// Function: Curl_connected_proxy  (binary VA: 0x1a5bcb0)
// Original: Curl_connected_proxy
// ----------------------------------------------------------------------------
int Curl_connected_proxy(int a1)
{
  unsigned int v1;

  v1 = *(uint32_t *)(a1 + 276);
  switch ( v1 )
  {
    case 4u:
      return Curl_SOCKS4(*(uint32_t *)(a1 + 268), *(char **)(a1 + 128), *(uint16_t *)(a1 + 156), 0, a1, 0);
    case 5u:
    case 7u:
      return Curl_SOCKS5(
               *(void **)(a1 + 268),
               *(void **)(a1 + 272),
               *(char **)(a1 + 128),
               *(uint16_t *)(a1 + 156),
               0,
               a1);
    case 6u:
      return Curl_SOCKS4(*(uint32_t *)(a1 + 268), *(char **)(a1 + 128), *(uint16_t *)(a1 + 156), 0, a1, 1);
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_verboseconnect  (binary VA: 0x1a5bd90)
// Original: Curl_verboseconnect
// ----------------------------------------------------------------------------
void Curl_verboseconnect(int a1)
{
  int v1;

  if ( *(uint8_t *)(*(uint32_t *)a1 + 676) != 0 )
  {
    if ( *(uint8_t *)(a1 + 438) != 0 )
      v1 = *(uint32_t *)(a1 + 148);
    else
      v1 = *(uint32_t *)(a1 + 132);
    Curl_infof(
      *(uint32_t *)a1,
      "Connected to %s (%s) port %ld (#%ld)\n",
      v1,
      a1 + 64,
      *(uint32_t *)(a1 + 152),
      *(uint32_t *)(a1 + 52));
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_protocol_getsock  (binary VA: 0x1a5be10)
// Original: Curl_protocol_getsock
// ----------------------------------------------------------------------------
int Curl_protocol_getsock(int a1, int a2, int a3)
{
  int (*v3)(int, int, int);
  int result;

  v3 = *(int (**)(int, int, int))(*(uint32_t *)(a1 + 480) + 32);
  result = 0;
  if ( v3 != nullptr )
    return v3(a1, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_doing_getsock  (binary VA: 0x1a5be50)
// Original: Curl_doing_getsock
// ----------------------------------------------------------------------------
int Curl_doing_getsock(int a1, int a2, int a3)
{
  int result;
  int (*v4)(int, int, int);

  result = 0;
  if ( a1 != 0 )
  {
    v4 = *(int (**)(int, int, int))(*(uint32_t *)(a1 + 480) + 36);
    if ( v4 != nullptr )
      return v4(a1, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_protocol_connecting  (binary VA: 0x1a5be90)
// Original: Curl_protocol_connecting
// ----------------------------------------------------------------------------
int Curl_protocol_connecting(int a1, uint8_t *a2)
{
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 480) + 24) != 0 )
  {
    *a2 = 0;
    return (*(int (**)(int, uint8_t *))(*(uint32_t *)(a1 + 480) + 24))(a1, a2);
  }
  else
  {
    *a2 = 1;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_protocol_doing  (binary VA: 0x1a5bee0)
// Original: Curl_protocol_doing
// ----------------------------------------------------------------------------
int Curl_protocol_doing(int a1, uint8_t *a2)
{
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 480) + 28) != 0 )
  {
    *a2 = 0;
    return (*(int (**)(int, uint8_t *))(*(uint32_t *)(a1 + 480) + 28))(a1, a2);
  }
  else
  {
    *a2 = 1;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_protocol_connect  (binary VA: 0x1a5bf30)
// Original: Curl_protocol_connect
// ----------------------------------------------------------------------------
int Curl_protocol_connect(int a1, uint8_t *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  uint32_t v6[2];

  v2 = *(uint32_t *)a1;
  *a2 = 0;
  if ( *(uint8_t *)(a1 + 445) == 0 )
  {
    Curl_pgrsTime(v2, 2);
    Curl_verboseconnect(a1);
    result = 0;
    if ( *(uint8_t *)(a1 + 446) != 0 )
      return result;
  }
  else if ( *(uint8_t *)(a1 + 446) != 0 )
  {
    result = 0;
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 480) + 24) == 0 )
      *a2 = 1;
    return result;
  }
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 480) + 20) != 0 )
  {
    curlx_tvnow(v6);
    v4 = v6[1];
    *(uint32_t *)(a1 + 288) = v6[0];
    v5 = *(uint32_t *)(a1 + 480);
    *(uint32_t *)(a1 + 292) = v4;
    result = (*(int (**)(int, uint8_t *))(v5 + 20))(a1, a2);
    if ( result == 0 )
    {
      *(uint8_t *)(a1 + 446) = 1;
      return 0;
    }
  }
  else
  {
    *a2 = 1;
    *(uint8_t *)(a1 + 446) = 1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_setup_conn  (binary VA: 0x1a5c030)
// Original: Curl_setup_conn
// ----------------------------------------------------------------------------
int Curl_setup_conn(int a1, uint8_t *a2)
{
  int v2;
  int v3;
  int result;
  bool v5;
  int v6;
  int v7;
  int v8;
  const char *v9;
  uint8_t *v10;
  int v11;
  int v12;
  typedef uint32_t _g4_t_v13[4];
  typedef char _g4_t_v14;
  typedef uint32_t _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v14)) > _g4_s1 ? (27u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 27u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v2 = *(uint32_t *)a1;
  Curl_pgrsTime(*(uint32_t *)a1, 1);
  if ( (*(uint8_t *)(*(uint32_t *)(a1 + 480) + 60) & 0x10) != 0 )
  {
    *a2 = 1;
    return 0;
  }
  *a2 = 0;
  *(uint8_t *)(a1 + 458) = 0;
  if ( *(uint32_t *)(v2 + 824) == 0
    || (Curl_safefree(*(uint32_t *)(a1 + 504)),
        v3 = curl_maprintf("User-Agent: %s\r\n", *(uint32_t *)(v2 + 824)),
        *(uint32_t *)(a1 + 504) = v3,
        result = 27,
        v3 != 0) )
  {
    *(uint32_t *)(v2 + 60) = 0;
    *(uint32_t *)(v2 + 34208) = 0;
    *(uint32_t *)(v2 + 34212) = 0;
    if ( *(uint32_t *)(a1 + 304) == -1 )
    {
      while ( 1 )
      {
        v5 = *(uint8_t *)(a1 + 438) == 0;
        v14 = 0;
        if ( v5 )
        {
          v6 = *(uint32_t *)(a1 + 128);
          v7 = *(uint32_t *)(a1 + 52);
          v8 = *(uint32_t *)(a1 + 152);
          v9 = (const char *)&unk_1B15112;
        }
        else
        {
          v6 = *(uint32_t *)(a1 + 144);
          v7 = *(uint32_t *)(a1 + 52);
          v8 = *(uint32_t *)(a1 + 152);
          v9 = "proxy ";
        }
        Curl_infof(v2, "About to connect() to %s%s port %ld (#%ld)\n", v9, v6, v8, v7);
        result = Curl_connecthost(a1, *(uint32_t *)(a1 + 56), a1 + 304, v15, &v14);
        if ( result != 0 )
          break;
        v5 = v14 == 0;
        *(uint32_t *)(a1 + 60) = v15[0];
        if ( v5 )
          goto LABEL_9;
        result = Curl_connected_proxy(a1);
        if ( result != 0 )
          break;
        if ( v14 == 0 )
          goto LABEL_9;
        result = Curl_protocol_connect(a1, a2);
        if ( result == 0 )
          *(uint8_t *)(a1 + 445) = 1;
LABEL_10:
        if ( *(uint8_t *)(a1 + 458) == 0 )
        {
          v11 = result;
          if ( result == 0 )
            goto LABEL_17;
          return result;
        }
        v10 = *(uint8_t **)(v2 + 268);
        if ( v10 != nullptr )
          *v10 = 0;
        *(uint8_t *)(v2 + 34028) = 0;
        if ( *(uint32_t *)(a1 + 304) != -1 )
        {
          v11 = result;
          goto LABEL_15;
        }
      }
      v14 = 0;
LABEL_9:
      *(uint8_t *)(a1 + 445) = 0;
      goto LABEL_10;
    }
    v11 = 0;
LABEL_15:
    Curl_pgrsTime(v2, 2);
    Curl_pgrsTime(v2, 3);
    *(uint8_t *)(a1 + 445) = 1;
    *a2 = 1;
    Curl_verboseconnect(a1);
    Curl_updateconninfo(a1, *(uint32_t *)(a1 + 304));
LABEL_17:
    curlx_tvnow(v13);
    v12 = v13[0];
    *(uint32_t *)(a1 + 292) = v13[1];
    *(uint32_t *)(a1 + 288) = v12;
    return v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_connect  (binary VA: 0x1a5c2c0)
// Original: Curl_connect
// ----------------------------------------------------------------------------
int Curl_connect(int a1, int *a2, uint8_t *a3, uint8_t *a4)
{
  int v4;
  int v5;
  int v7;

  *a3 = 0;
  v4 = sub_1A57BE0(a1, a2, a3);
  if ( v4 != 0 )
    goto LABEL_8;
  v5 = *a2;
  if ( *(uint32_t *)(*(uint32_t *)(*a2 + 548) + 12) != 0 || *(uint32_t *)(*(uint32_t *)(v5 + 552) + 12) != 0 )
  {
    *a4 = 1;
    return v4;
  }
  if ( *a3 == 0 )
  {
    v4 = Curl_setup_conn(v5, a4);
    if ( v4 != 0 )
    {
LABEL_8:
      if ( *a2 != 0 )
      {
        v7 = v4;
        Curl_disconnect(*a2, 0);
        *a2 = 0;
        return v7;
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Curl_done  (binary VA: 0x1a5c380)
// Original: Curl_done
// ----------------------------------------------------------------------------
int Curl_done(int **a1, int a2, uint8_t a3)
{
  int v3;
  int *v4;
  int v5;
  int (*v7)(int *, int, uint32_t);
  int v8;
  int v9;
  int v10;

  v3 = 0;
  v4 = *a1;
  v5 = **a1;
  if ( *((uint8_t *)*a1 + 456) != 0 )
    return v3;
  Curl_getoff_all_pipelines(v5, (int)(uintptr_t)(*a1));
  if ( *(uint32_t *)(v4[137] + 12) + *(uint32_t *)(v4[138] + 12) != 0
    && *(uint8_t *)(v5 + 678) == 0
    && *((uint8_t *)v4 + 436) == 0 )
  {
    return v3;
  }
  *((uint8_t *)v4 + 456) = 1;
  if ( *(uint32_t *)(v5 + 244) != 0 )
  {
    ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v5 + 244));
    *(uint32_t *)(v5 + 244) = 0;
  }
  if ( *(uint32_t *)(v5 + 240) != 0 )
  {
    ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v5 + 240));
    *(uint32_t *)(v5 + 240) = 0;
  }
  if ( v4[14] != 0 )
  {
    Curl_resolv_unlock(v5, (uint32_t *)v4[14]);
    v4[14] = 0;
  }
  v3 = 0;
  v7 = *(int (**)(int *, int, uint32_t))(v4[120] + 12);
  if ( v7 != nullptr )
    v3 = v7(v4, a2, a3);
  Curl_pgrsDone(v4);
  if ( *(uint32_t *)(v5 + 34012) != 0 )
  {
    ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v5 + 34012));
    *(uint32_t *)(v5 + 34012) = 0;
  }
  if ( *(uint8_t *)(v5 + 678) == 0 && *((uint8_t *)v4 + 436) == 0 && a3 == 0 )
  {
    v8 = v4[13];
    if ( v8 != -1 )
    {
      *((uint8_t *)v4 + 48) = 0;
      *(uint32_t *)(v5 + 1204) = v8;
      if ( *((uint8_t *)v4 + 439) != 0 )
        v9 = v4[37];
      else
        v9 = v4[33];
      Curl_infof(v5, "Connection #%ld to host %s left intact\n", v4[13], v9);
      goto LABEL_21;
    }
  }
  v10 = Curl_disconnect((int)(uintptr_t)(v4), a3);
  if ( v10 == 0 )
  {
LABEL_21:
    *a1 = nullptr;
    return v3;
  }
  if ( v3 == 0 )
    v3 = v10;
  *a1 = nullptr;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Curl_do  (binary VA: 0x1a5c580)
// Original: Curl_do
// ----------------------------------------------------------------------------
int Curl_do(int **a1, uint8_t *a2)
{
  int *v2;
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  int (*v8)(int *, uint8_t *);
  int result;
  int v10;
  uint32_t v11[5];

  v2 = *a1;
  v3 = **a1;
  *((uint8_t *)v2 + 456) = 0;
  *((uint8_t *)v2 + 444) = 0;
  v4 = *(uint8_t *)(v3 + 667) == 0;
  *(uint8_t *)(v3 + 34204) = 0;
  if ( v4 )
  {
    if ( *(uint32_t *)(v3 + 532) == 5 )
      *(uint32_t *)(v3 + 532) = 1;
  }
  else
  {
    *(uint32_t *)(v3 + 532) = 5;
  }
  Curl_easy_initHandleData(v3);
  curlx_tvnow(v11);
  v5 = v11[0];
  *(uint32_t *)(v3 + 72) = v11[1];
  *(uint32_t *)(v3 + 68) = v5;
  v6 = *(uint32_t *)(v3 + 72);
  *(uint32_t *)(v3 + 76) = *(uint32_t *)(v3 + 68);
  *(uint32_t *)(v3 + 220) = v3 + 1216;
  *(uint32_t *)(v3 + 224) = v3 + 17601;
  v7 = *(uint32_t *)(v3 + 1208);
  *(uint32_t *)(v3 + 80) = v6;
  *(uint32_t *)(v3 + 96) = v7;
  *(uint8_t *)(v3 + 84) = 1;
  *(uint32_t *)(v3 + 44) = 0;
  *(uint32_t *)(v3 + 48) = 0;
  *(uint8_t *)(v3 + 237) = 0;
  Curl_pgrsTime(v3, 4);
  Curl_speedinit(v3);
  Curl_pgrsSetUploadCounter(v3, 0, 0);
  Curl_pgrsSetDownloadCounter(v3, 0, 0);
  v8 = *(int (**)(int *, uint8_t *))(v2[120] + 8);
  result = 0;
  if ( v8 != nullptr )
  {
    result = v8(v2, a2);
    if ( result == 55 )
    {
      if ( *((uint8_t *)v2 + 437) == 0 )
        return result;
      if ( *(uint32_t *)(v3 + 8) != 0 )
        return result;
      result = Curl_reconnect_request((int *)a1);
      if ( result != 0 )
        return result;
      v2 = *a1;
      result = (*(int (**)(int *, uint8_t *))((*a1)[120] + 8))(*a1, a2);
    }
    if ( result == 0 && *a2 != 0 )
    {
      *(uint8_t *)(*v2 + 256) = 0;
      v10 = v2[124];
      if ( v2[123] >= v10 )
        v10 = v2[123];
      *(uint32_t *)(*v2 + 228) = v10 + 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_do_more  (binary VA: 0x1a5c760)
// Original: Curl_do_more
// ----------------------------------------------------------------------------
int Curl_do_more(uint32_t *a1)
{
  int (*v1)(uint32_t *);
  int result;
  int v3;

  v1 = *(int (**)(uint32_t *))(a1[120] + 16);
  if ( v1 == nullptr || (result = v1(a1)) == 0 )
  {
    *(uint8_t *)(*a1 + 256) = 0;
    v3 = a1[124];
    if ( a1[123] >= v3 )
      v3 = a1[123];
    *(uint32_t *)(*a1 + 228) = v3 + 1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_reset_reqproto  (binary VA: 0x1a5c7c0)
// Original: Curl_reset_reqproto
// ----------------------------------------------------------------------------
int Curl_reset_reqproto(int *a1)
{
  int v1;
  int result;

  v1 = *a1;
  result = *(uint32_t *)(*a1 + 34260);
  if ( result != 0 && *(int **)(v1 + 34264) != a1 )
  {
    result = ((int (*)(uint32_t))Curl_cfree)(*(uint32_t *)(*a1 + 34260));
    *(uint32_t *)(v1 + 34260) = 0;
  }
  *(uint32_t *)(v1 + 34264) = (uint32_t)(uintptr_t)(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_wildcard_init  (binary VA: 0x1a5c930)
// Original: Curl_wildcard_init
// ----------------------------------------------------------------------------
int Curl_wildcard_init(int a1)
{
  uint32_t *v1;

  v1 = Curl_llist_alloc((int)(uintptr_t)(Curl_fileinfo_dtor));
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v1);
  return v1 == nullptr ? 0x1B : 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_wildcard_dtor  (binary VA: 0x1a5c970)
// Original: Curl_wildcard_dtor
// ----------------------------------------------------------------------------
void Curl_wildcard_dtor(uint32_t *a1)
{
  void (*v1)(uint32_t);
  int v2;

  if ( a1 != nullptr )
  {
    v1 = (void (*)(uint32_t))a1[5];
    if ( v1 != nullptr )
    {
      v1(a1[4]);
      a1[5] = 0;
      a1[4] = 0;
    }
    v2 = a1[3];
    if ( v2 != 0 )
    {
      Curl_llist_destroy(v2, 0);
      a1[3] = 0;
    }
    if ( a1[1] != 0 )
    {
      ((void (*)(uint32_t))Curl_cfree)(a1[1]);
      a1[1] = 0;
    }
    if ( a1[2] != 0 )
    {
      ((void (*)(uint32_t))Curl_cfree)(a1[2]);
      a1[2] = 0;
    }
    a1[6] = 0;
    *a1 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_timeleft  (binary VA: 0x1a5cc00)
// Original: Curl_timeleft
// ----------------------------------------------------------------------------
int Curl_timeleft(uint32_t *a1, uint32_t *a2, char a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int result;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[20];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v3 = a2;
  v4 = a1[106];
  v5 = v4 > 0;
  if ( a3 != 0 )
  {
    v7 = 300000;
    if ( (int)a1[107] > 0 )
      v5 |= 2u;
    if ( v5 == 2 )
    {
      v4 = a1[107];
      goto LABEL_9;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v5 == 3 )
  {
    if ( v4 > a1[107] )
      v4 = a1[107];
  }
  else if ( v5 != 1 )
  {
    result = 0;
    if ( a3 == 0 )
      return result;
    v4 = v7;
  }
LABEL_9:
  if ( a2 == nullptr )
  {
    curlx_tvnow(v8);
    v3 = (uint32_t *)(v8);
  }
  result = v4 - curlx_tvdiff(*v3, v3[1], a1[270], a1[271]);
  if ( result == 0 )
    return -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_persistconninfo  (binary VA: 0x1a5cd10)
// Original: Curl_persistconninfo
// ----------------------------------------------------------------------------
int Curl_persistconninfo(int *a1)
{
  int v1;
  int v2;
  int result;

  v1 = *a1;
  *(uint32_t *)(v1 + 34348) = *(int *)((char *)a1 + 158);
  *(uint32_t *)(v1 + 34352) = *(int *)((char *)a1 + 162);
  *(uint32_t *)(v1 + 34356) = *(int *)((char *)a1 + 166);
  *(uint32_t *)(v1 + 34360) = *(int *)((char *)a1 + 170);
  *(uint32_t *)(v1 + 34364) = *(int *)((char *)a1 + 174);
  *(uint32_t *)(v1 + 34368) = *(int *)((char *)a1 + 178);
  *(uint32_t *)(v1 + 34372) = *(int *)((char *)a1 + 182);
  *(uint32_t *)(v1 + 34376) = *(int *)((char *)a1 + 186);
  *(uint32_t *)(v1 + 34380) = *(int *)((char *)a1 + 190);
  *(uint32_t *)(v1 + 34384) = *(int *)((char *)a1 + 194);
  *(uint32_t *)(v1 + 34388) = *(int *)((char *)a1 + 198);
  *(uint16_t *)(v1 + 34392) = *((uint16_t *)a1 + 101);
  v2 = *a1 + 34400;
  *(uint32_t *)v2 = a1[52];
  *(uint32_t *)(v2 + 4) = a1[53];
  *(uint32_t *)(v2 + 8) = a1[54];
  *(uint32_t *)(v2 + 12) = a1[55];
  *(uint32_t *)(v2 + 16) = a1[56];
  *(uint32_t *)(v2 + 20) = a1[57];
  *(uint32_t *)(v2 + 24) = a1[58];
  *(uint32_t *)(v2 + 28) = a1[59];
  *(uint32_t *)(v2 + 32) = a1[60];
  *(uint32_t *)(v2 + 36) = a1[61];
  *(uint32_t *)(v2 + 40) = a1[62];
  *(uint16_t *)(v2 + 44) = *((uint16_t *)a1 + 126);
  *(uint32_t *)(*a1 + 34396) = a1[51];
  result = *a1;
  *(uint32_t *)(*a1 + 34448) = a1[64];
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_updateconninfo  (binary VA: 0x1a5ce30)
// Original: Curl_updateconninfo
// ----------------------------------------------------------------------------
int Curl_updateconninfo(int a1, int fd)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
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
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  typedef socklen_t _g4_t_len;
  typedef struct sockaddr _g4_t_addr;
  typedef struct sockaddr _g4_t_v29;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_len)) > _g4_s0 ? (12u + sizeof(_g4_t_len)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_addr)) > _g4_s1 ? (16u + sizeof(_g4_t_addr)) : _g4_s1,
    _g4_s3 = (144u + sizeof(_g4_t_v29)) > _g4_s2 ? (144u + sizeof(_g4_t_v29)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_len &len = *reinterpret_cast<_g4_t_len *>(_g4_sf + 12u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);

  v2 = *(uint32_t *)a1;
  if ( *(uint8_t *)(a1 + 437) != 0 )
    return Curl_persistconninfo((int *)a1);
  len = 128;
  if ( getpeername(fd, &addr, &len) != 0 )
  {
    v11 = *(uint32_t *)__errno(v3, &len);
    v14 = Curl_strerror(v13, v12, a1, v11);
    return Curl_failf(v2, "getpeername() failed with errno %d: %s", v11, v14);
  }
  len = 128;
  if ( getsockname(fd, &v29, &len) != 0 )
  {
    v15 = *(uint32_t *)__errno(v5, v4);
    v18 = Curl_strerror(v17, v16, a1, v15);
    return Curl_failf(v2, "getsockname() failed with errno %d: %s", v15, v18);
  }
  if ( (uint8_t)sub_1A5CB30((uint8_t *)&addr, (char *)(a1 + 158), v5, (uint32_t *)(a1 + 204)) == 0 )
  {
    v19 = *(uint32_t *)__errno(v7, v6);
    v22 = Curl_strerror(v21, v20, a1, v19);
    return Curl_failf(v2, "ssrem inet_ntop() failed with errno %d: %s", v19, v22);
  }
  if ( (uint8_t)sub_1A5CB30((uint8_t *)&v29, (char *)(a1 + 208), v7, (uint32_t *)(a1 + 256)) != 0 )
    return Curl_persistconninfo((int *)a1);
  v23 = *(uint32_t *)__errno(v9, v8);
  v26 = Curl_strerror(v25, v24, a1, v23);
  return Curl_failf(v2, "ssloc inet_ntop() failed with errno %d: %s", v23, v26);
}

// ----------------------------------------------------------------------------
// Function: Curl_getconnectinfo  (binary VA: 0x1a5d030)
// Original: Curl_getconnectinfo
// ----------------------------------------------------------------------------
int Curl_getconnectinfo(int a1, int *a2)
{
  int v2;
  int v3;
  int fd;
  uint8_t buf[13];

  v2 = *(uint32_t *)(a1 + 1204);
  if ( v2 == -1 )
    return -1;
  v3 = *(uint32_t *)(**(uint32_t **)(a1 + 1192) + 4 * v2);
  if ( v3 == 0 )
    return -1;
  if ( a2 != nullptr )
    *a2 = v3;
  fd = *(uint32_t *)(v3 + 304);
  if ( *(uint8_t *)(v3 + 328) == 0 )
  {
    if ( recv(fd, buf, 1u, 2) == 0 )
      return -1;
    return fd;
  }
  if ( Curl_ssl_check_cxn(v3) == 0 )
    return -1;
  return fd;
}

// ----------------------------------------------------------------------------
// Function: Curl_closesocket  (binary VA: 0x1a5d0e0)
// Original: Curl_closesocket
// ----------------------------------------------------------------------------
int Curl_closesocket(int a1, int fd)
{
  int (*v2)(uint32_t, int);

  if ( a1 != 0 && (v2 = *(int (**)(uint32_t, int))(a1 + 40)) != nullptr )
    return v2(*(uint32_t *)(a1 + 44), fd);
  else
    return close(fd);
}

// ----------------------------------------------------------------------------
// Function: Curl_connecthost  (binary VA: 0x1a5daa0)
// Original: Curl_connecthost
// ----------------------------------------------------------------------------
int Curl_connecthost(int *a1, int *a2, uint32_t *a3, int *a4, uint8_t *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  bool v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v16 = -1;
  v13 = (uint32_t *)*a1;
  curlx_tvnow(&v17);
  *a5 = 0;
  v12 = Curl_timeleft(v13, &v17, 1);
  if ( v12 < 0 )
  {
    Curl_failf((int)(uintptr_t)(v13), "Connection time-out");
    return 28;
  }
  else
  {
    v5 = Curl_num_addresses(*a2);
    a1[118] = v5;
    a1[119] = v12 / v5;
    v6 = *a2;
    if ( *a2 != 0 )
    {
      while ( 1 )
      {
        v9 = 0;
        if ( v13[297] != 2 )
          v9 = a1[119];
        result = sub_1A5D130(a1, v6, v9, &v16, a5);
        if ( result != 0 )
          break;
        if ( v16 != -1 )
        {
          *a3 = v16;
          goto LABEL_16;
        }
        curlx_tvnow(&v14);
        v7 = v14;
        v8 = v15;
        v12 -= curlx_tvdiff(v14, v15, v17, v18);
        if ( v12 < 0 )
        {
          Curl_failf((int)(uintptr_t)(v13), "connect() timed out!");
          return 28;
        }
        v6 = *(uint32_t *)(v6 + 28);
        v17 = v7;
        v18 = v8;
        if ( v6 == 0 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v6 = 0;
      v11 = v16 == -1;
      *a3 = v16;
      if ( v11 )
      {
        Curl_failf((int)(uintptr_t)(v13), "couldn't connect to host");
        return 7;
      }
      else
      {
LABEL_16:
        if ( a4 != nullptr )
          *a4 = v6;
        ++v13[8584];
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_is_connected  (binary VA: 0x1a5dc80)
// Original: Curl_is_connected
// ----------------------------------------------------------------------------
int Curl_is_connected(int a1, int a2, uint8_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[2];
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v27)) > _g4_s3 ? (20u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v29)) > _g4_s5 ? (32u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v30)) > _g4_s6 ? (36u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v31)) > _g4_s7 ? (40u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v32)) > _g4_s8 ? (44u + sizeof(_g4_t_v32)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);

  v29 = 0;
  v3 = a2 + 76;
  v4 = *(uint32_t *)a1;
  v5 = *(uint32_t *)(a1 + 4 * (a2 + 76));
  *a3 = 0;
  v25 = (uint32_t *)v4;
  v26 = v5;
  if ( *(uint8_t *)(a1 + 445) != 0 )
  {
    *a3 = 1;
    return 0;
  }
  curlx_tvnow(v28);
  v31 = v28[0];
  v32 = v28[1];
  if ( Curl_timeleft(v25, &v31, 1) < 0 )
  {
    Curl_failf((int)(uintptr_t)(v25), "Connection time-out");
    return 28;
  }
  v8 = sub_1A5CA10(a1, v26, 0);
  if ( v8 == 1 )
  {
    v20 = curlx_tvdiff(v31, v32, *(uint32_t *)(a1 + 464), *(uint32_t *)(a1 + 468));
    v6 = 0;
    if ( v20 < *(uint32_t *)(a1 + 476) )
      return v6;
    Curl_infof((int)(uintptr_t)(v25), "After %ldms connect time, move on!\n", *(uint32_t *)(a1 + 476));
  }
  else
  {
    if ( v8 != 0 )
    {
      if ( v8 == 2 )
      {
        sub_1A5CAB0(v26, &v29);
        v23 = Curl_strerror(v22, v21, a1, v29);
        Curl_infof((int)(uintptr_t)(v25), "%s\n", v23);
      }
      else
      {
        Curl_infof((int)(uintptr_t)(v25), "Connection failed\n");
      }
    }
    else if ( (uint8_t)sub_1A5CAB0(v26, &v29) != 0 )
    {
      v6 = Curl_connected_proxy(a1);
      if ( v6 == 0 )
      {
        *(uint8_t *)(a1 + 445) = 1;
        *a3 = 1;
        Curl_pgrsTime(v25, 2);
        Curl_verboseconnect(a1);
        Curl_updateconninfo(a1, v26);
        return 0;
      }
      return v6;
    }
    if ( v29 != 0 )
    {
      v25[8508] = v29;
      v19 = (uint32_t *)__errno(v25, v9);
      *v19 = v29;
    }
  }
  v10 = *(uint32_t *)(a1 + 4 * v3);
  *(uint32_t *)(a1 + 4 * v3) = -1;
  v27 = v10;
  *a3 = 0;
  if ( a2 != 0 )
    goto LABEL_20;
  v11 = *(uint32_t *)(*(uint32_t *)(a1 + 60) + 28);
  if ( v11 == 0 )
  {
LABEL_19:
    v10 = v27;
LABEL_20:
    Curl_closesocket(a1, v10);
    v15 = 7;
LABEL_21:
    v24 = v15;
    v16 = *(uint32_t *)__errno(v14, v15);
    v29 = v16;
    v25[8508] = v16;
    v18 = Curl_strerror((int)(uintptr_t)(v25), v17, a1, v16);
    Curl_failf((int)(uintptr_t)(v25), "Failed connect to %s:%ld; %s", *(uint32_t *)(a1 + 128), *(uint32_t *)(a1 + 152), v18);
    return v24;
  }
  while ( 1 )
  {
    v13 = sub_1A5D130((int *)a1, v11, 0, &v30, a3);
    if ( v13 != 0 )
    {
      v15 = v13;
      goto LABEL_21;
    }
    v12 = v30;
    if ( v30 != -1 )
      break;
    v11 = *(uint32_t *)(v11 + 28);
    if ( v11 == 0 )
      goto LABEL_19;
  }
  *(uint32_t *)(a1 + 60) = v11;
  *(uint32_t *)(a1 + 304) = v12;
  Curl_closesocket(a1, v27);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_unencode_deflate_write  (binary VA: 0x1a5e3a0)
// Original: Curl_unencode_deflate_write
// ----------------------------------------------------------------------------
int Curl_unencode_deflate_write(int *a1, uint32_t *a2, int a3)
{
  int v3;

  if ( a2[33] != 0 )
    goto LABEL_4;
  a2[42] = 0;
  a2[43] = 0;
  a2[44] = 0;
  a2[34] = 0;
  a2[35] = 0;
  if ( inflateInit_(a2 + 34, "1.2.3", 56) == 0 )
  {
    a2[33] = 1;
LABEL_4:
    v3 = a2[21];
    a2[35] = a3;
    a2[34] = v3;
    return sub_1A5E160(a1, (int)(uintptr_t)(a2));
  }
  return sub_1A5E100(*a1, a2[40]);
}

// ----------------------------------------------------------------------------
// Function: Curl_unencode_gzip_write  (binary VA: 0x1a5e490)
// Original: Curl_unencode_gzip_write
// ----------------------------------------------------------------------------
int Curl_unencode_gzip_write(int *a1, int a2, int n)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  void *dest;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v23)) > _g4_s1 ? (28u + sizeof(_g4_t_v23)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  v22 = (uint32_t *)(a2 + 136);
  v3 = *(uint32_t *)(a2 + 132);
  switch ( v3 )
  {
    case 0:
      *(uint32_t *)(a2 + 168) = 0;
      *(uint32_t *)(a2 + 172) = 0;
      *(uint32_t *)(a2 + 176) = 0;
      *(uint32_t *)(a2 + 136) = 0;
      *(uint32_t *)(a2 + 140) = 0;
      strcmp(zlibVersion(), "1.2.0.4");
      if ( inflateInit2_(v22, 47, "1.2.3", 56) != 0 )
        return sub_1A5E100(*a1, *(uint32_t *)(a2 + 160));
      *(uint32_t *)(a2 + 132) = 4;
      break;
    case 4:
      break;
    case 1:
      v12 = *(uint8_t **)(a2 + 84);
      if ( n > 9 )
      {
        if ( *v12 != 31 || v12[1] != 0x8B )
          goto LABEL_20;
        v14 = sub_1A5DFD0(v12, n, v23);
        if ( v14 == 0 )
        {
          v15 = v23[0];
          v16 = v23[0] + *(uint32_t *)(a2 + 84);
          *(uint32_t *)(a2 + 132) = 3;
          *(uint32_t *)(a2 + 136) = v16;
          v4 = n - v15;
          *(uint32_t *)(a2 + 140) = v4;
          goto LABEL_6;
        }
        if ( v14 != 2 )
        {
LABEL_20:
          v5 = sub_1A5E100(*a1, *(uint32_t *)(a2 + 160));
          inflateEnd(v22);
          *(uint32_t *)(a2 + 132) = 0;
          return v5;
        }
      }
      *(uint32_t *)(a2 + 140) = n;
      dest = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), n));
      *(uint32_t *)(a2 + 136) = (uint32_t)(uintptr_t)(dest);
      if ( dest != nullptr )
      {
        v5 = 0;
        memcpy(dest, *(const void **)(a2 + 84), *(uint32_t *)(a2 + 140));
        *(uint32_t *)(a2 + 132) = 2;
      }
      else
      {
        v5 = 27;
        inflateEnd(v22);
        *(uint32_t *)(a2 + 132) = 0;
      }
      return v5;
    case 2:
      v7 = *(uint32_t *)(a2 + 140) + n;
      *(uint32_t *)(a2 + 140) = v7;
      v8 = *(uint32_t *)(a2 + 136);
      v9 = ((int (*)(int, int))Curl_crealloc)(v8, v7);
      *(uint32_t *)(a2 + 136) = v9;
      if ( v9 == 0 )
      {
        ((void (*)(int))Curl_cfree)(v8);
        v5 = 27;
        inflateEnd(v22);
        *(uint32_t *)(a2 + 132) = 0;
        return v5;
      }
      v5 = 0;
      memcpy((void *)(*(uint32_t *)(a2 + 140) + v9 - n), *(const void **)(a2 + 84), n);
      v10 = *(uint32_t *)(a2 + 140);
      v11 = *(uint8_t **)(a2 + 136);
      if ( v10 > 9 )
      {
        if ( *v11 != 31 || v11[1] != 0x8B )
        {
LABEL_12:
          ((void (*)(uint8_t *))Curl_cfree)(v11);
          v5 = sub_1A5E100(*a1, *(uint32_t *)(a2 + 160));
          inflateEnd(v22);
          *(uint32_t *)(a2 + 132) = 0;
          return v5;
        }
        v17 = sub_1A5DFD0(v11, v10, v23);
        if ( v17 != 0 )
        {
          if ( v17 == 2 )
            return v5;
          v11 = *(uint8_t **)(a2 + 136);
          goto LABEL_12;
        }
        ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a2 + 136));
        v18 = v23[0];
        v19 = *(uint32_t *)(a2 + 140);
        v20 = v23[0];
        *(uint32_t *)(a2 + 132) = 3;
        v21 = v20 - v19;
        v4 = v19 - v18;
        *(uint32_t *)(a2 + 136) = *(uint32_t *)(a2 + 84) + n + v21;
        *(uint32_t *)(a2 + 140) = v4;
LABEL_6:
        v5 = 0;
        if ( v4 != 0 )
          return sub_1A5E160(a1, a2);
      }
      return v5;
    default:
      *(uint32_t *)(a2 + 136) = *(uint32_t *)(a2 + 84);
      v4 = n;
      *(uint32_t *)(a2 + 140) = n;
      goto LABEL_6;
  }
  *(uint32_t *)(a2 + 136) = *(uint32_t *)(a2 + 84);
  *(uint32_t *)(a2 + 140) = n;
  return sub_1A5E160(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: Curl_unencode_cleanup  (binary VA: 0x1a5e880)
// Original: Curl_unencode_cleanup
// ----------------------------------------------------------------------------
int Curl_unencode_cleanup(int *a1)
{
  int v1;
  int result;

  v1 = *a1;
  result = *(uint32_t *)(*a1 + 152);
  if ( result != 0 )
  {
    result = inflateEnd((uint32_t *)(v1 + 156));
    *(uint32_t *)(v1 + 152) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_add  (binary VA: 0x1a5eb00)
// Original: Curl_cookie_add
// ----------------------------------------------------------------------------
uint32_t * Curl_cookie_add(int a1, int **a2, char a3, const char *a4, char *a5, char *a6)
{
  uint32_t *v6;
  const char *v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;
  int v14;
  char *v15;
  bool v16;
  uint32_t *v17;
  const char *v18;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  const char *v25;
  char *v26;
  const char *v27;
  char v28;
  char v29;
  char *v30;
  char *v31;
  char *v32;
  int v33;
  void *v34;
  char v35;
  int *v36;
  int v37;
  int v38;
  char v39;
  size_t v40;
  char *v41;
  char v42;
  const char *v43;
  char v44;
  char v45;
  char *v46;
  const char *v47;
  const char *v48;
  int i;
  int v50;
  char *v51;
  bool v52;
  const char *v53;
  const char *v54;
  size_t v55;
  char *v56;
  char *v57;
  const char *v58;
  char *v59;
  char *v60;
  int v61;
  char *v62;
  int v63;
  char *v64;
  int v65;
  char *v66;
  int v67;
  typedef time_t *_g4_t_c;
  typedef char *_g4_t_s;
  typedef char _g4_t_sa;
  typedef char _g4_t_delim;
  typedef char *_g4_t_delima;
  typedef char *_g4_t_v73;
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef time_t _g4_t_v79;
  typedef char *_g4_t_save_ptr;
  typedef uint8_t _g4_t_v81[1052];
  enum : size_t {
    _g4_s0 = 1232u,
    _g4_s1 = (4u + sizeof(_g4_t_c)) > _g4_s0 ? (4u + sizeof(_g4_t_c)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_s)) > _g4_s1 ? (60u + sizeof(_g4_t_s)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_sa)) > _g4_s2 ? (60u + sizeof(_g4_t_sa)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_delim)) > _g4_s3 ? (64u + sizeof(_g4_t_delim)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_delima)) > _g4_s4 ? (64u + sizeof(_g4_t_delima)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v73)) > _g4_s5 ? (68u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (83u + sizeof(_g4_t_v74)) > _g4_s6 ? (83u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v75)) > _g4_s7 ? (84u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v76)) > _g4_s8 ? (84u + sizeof(_g4_t_v76)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v77)) > _g4_s9 ? (88u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v78)) > _g4_s10 ? (92u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v79)) > _g4_s11 ? (104u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_save_ptr)) > _g4_s12 ? (108u + sizeof(_g4_t_save_ptr)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v81)) > _g4_s13 ? (112u + sizeof(_g4_t_v81)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_c &c = *reinterpret_cast<_g4_t_c *>(_g4_sf + 4u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 60u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 60u);
  _g4_t_delim &delim = *reinterpret_cast<_g4_t_delim *>(_g4_sf + 64u);
  _g4_t_delima &delima = *reinterpret_cast<_g4_t_delima *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 83u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 92u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_save_ptr &save_ptr = *reinterpret_cast<_g4_t_save_ptr *>(_g4_sf + 108u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);

  v79 = time(nullptr);
  v6 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 48);
  v7 = a4;
  if ( v6 == nullptr )
    return v6;
  if ( a3 == 0 )
  {
    save_ptr = nullptr;
    if ( memcmp(a4, "#HttpOnly_", 0xAu) == 0 )
    {
      v7 = a4 + 10;
      *((uint8_t *)v6 + 46) = 1;
    }
    if ( *v7 != 35 )
    {
      s = (char *)v7;
      v8 = (char *)(strchr(v7, 13));
      if ( v8 != nullptr )
        *v8 = 0;
      v9 = strchr(s, 10);
      if ( v9 != nullptr )
        *v9 = 0;
      v10 = strtok_r(s, "\t", &save_ptr);
      v11 = v10;
      if ( v10 != nullptr )
      {
        v12 = strchr(v10, 58);
        v13 = v11;
        v14 = 0;
        if ( v12 == nullptr )
        {
          v73 = (char *)v6;
          v15 = v13;
          do
          {
            switch ( v14 )
            {
              case 0:
                v14 = 1;
                v22 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), &v15[*v15 == 46]));
                v16 = v22 == nullptr;
                *((uint32_t *)v73 + 4) = (uint32_t)(uintptr_t)(v22);
                break;
              case 1:
                v14 = 2;
                v73[32] = Curl_raw_equal(v15, "TRUE") != 0;
                LOBYTE(v16) = 0;
                break;
              case 2:
                if ( strcmp("TRUE", v15) == 0 || strcmp("FALSE", v15) == 0 )
                {
                  v21 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), "/"));
                  *((uint32_t *)v73 + 3) = (uint32_t)(uintptr_t)(v21);
                  LOBYTE(v16) = v21 == nullptr;
                  goto LABEL_30;
                }
                v56 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v15));
                v14 = 3;
                v16 = v56 == nullptr;
                *((uint32_t *)v73 + 3) = (uint32_t)(uintptr_t)(v56);
                break;
              case 3:
                LOBYTE(v16) = 0;
LABEL_30:
                v73[44] = Curl_raw_equal(v15, "TRUE") != 0;
                v14 = 4;
                break;
              case 4:
                v14 = 5;
                LOBYTE(v16) = 0;
                *(uint64_t *)(v73 + 20) = strtoll(v15, nullptr, 10);
                break;
              case 5:
                v20 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v15));
                v14 = 6;
                *((uint32_t *)v73 + 1) = (uint32_t)(uintptr_t)(v20);
                v16 = v20 == nullptr;
                break;
              case 6:
                v23 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v15));
                v14 = 7;
                v16 = v23 == nullptr;
                *((uint32_t *)v73 + 2) = (uint32_t)(uintptr_t)(v23);
                break;
              default:
                ++v14;
                LOBYTE(v16) = 0;
                break;
            }
            v15 = strtok_r(nullptr, "\t", &save_ptr);
          }
          while ( v15 != nullptr && !v16 );
          v6 = (uint32_t *)(v73);
          if ( v14 == 6 )
          {
            v57 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), (const char *)&unk_1B15112));
            *((uint32_t *)v73 + 2) = (uint32_t)(uintptr_t)(v57);
            if ( v57 == nullptr )
              goto LABEL_41;
            LOWORD(v14) = 7;
          }
          if ( v16 || v14 != 7 )
            goto LABEL_41;
          goto LABEL_67;
        }
      }
    }
LABEL_37:
    ((void (*)(uint32_t *))Curl_cfree)(v6);
    return nullptr;
  }
  delima = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 5000);
  if ( delima == nullptr )
    goto LABEL_37;
  v24 = (char *)(strchr(a4, 59));
  v25 = a4;
  v26 = v24;
  v27 = a4;
  v28 = *a4;
  if ( *a4 != 0 && (v28 == 9 || v28 == 32) )
  {
    do
      v29 = *++v25;
    while ( *v25 != 0 && (v29 == 9 || v29 == 32) );
    v27 = v25;
  }
  v74 = 0;
  while ( 1 )
  {
    v30 = (char *)(strchr(v27, 61));
    if ( v30 != nullptr && (v26 > v30 || v26 == nullptr) )
    {
      *delima = 0;
      v81[0] = 0;
      if ( sscanf(v27, "%1023[^;=]=%4999[^;\r\n]", v81, delima) > 0 )
      {
        v40 = strlen(delima);
        if ( v40 != 0 )
        {
          v41 = &delima[v40 - 1];
          if ( *v41 == 9 || *v41 == 32 )
          {
            do
            {
              --v40;
              *v41 = 0;
              if ( v40 == 0 )
                break;
              v41 = &delima[v40 - 1];
              v42 = delima[v40 - 1];
            }
            while ( v42 == 9 || v42 == 32 );
          }
        }
        v43 = delima;
        v44 = *delima;
        if ( *delima != 0 && (v44 == 9 || v44 == 32) )
        {
          v43 = delima;
          do
            v45 = *++v43;
          while ( *v43 != 0 && (v45 == 9 || v45 == 32) );
        }
        if ( Curl_raw_equal("path", v81) != 0 )
        {
          if ( v6[3] != 0 )
            ((void (*)(uint32_t))Curl_cfree)(v6[3]);
          v46 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v43));
          v6[3] = (uint32_t)(uintptr_t)(v46);
          if ( v46 == nullptr )
            goto LABEL_125;
        }
        else if ( Curl_raw_equal("domain", v81) != 0 )
        {
          v75 = *v43;
          v77 = v6;
          v78 = v26;
          v47 = v43;
          v48 = &v43[*v43 == 46];
          for ( i = 1; ; i += v50 )
          {
            v51 = (char *)(strchr(v48, 46));
            if ( v51 == nullptr )
              break;
            v50 = v48 != v51;
            v48 = v51 + 1;
          }
          v6 = v77;
          v52 = i == 1;
          v53 = v47;
          v26 = v78;
          if ( v52 )
          {
            Curl_infof(a1, "skipped cookie with illegal dotcount domain: %s\n", v53);
            v74 = 1;
          }
          else
          {
            v54 = &v53[v75 == 46];
            if ( a5 != nullptr
              && ((v76 = strlen(v54), v55 = strlen(a5), v76 > v55) || Curl_raw_equal(v54, &a5[v55 - v76]) == 0) )
            {
              Curl_infof(a1, "skipped cookie with bad tailmatch domain: %s\n", v54);
              v74 = 1;
            }
            else
            {
              v58 = &v54[*v54 == 46];
              if ( v77[4] != 0 )
                ((void (*)(uint32_t))Curl_cfree)(v77[4]);
              v59 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v58));
              v77[4] = (uint32_t)(uintptr_t)(v59);
              if ( v59 == nullptr )
                goto LABEL_125;
              *((uint8_t *)v77 + 32) = 1;
            }
          }
        }
        else if ( Curl_raw_equal("version", v81) != 0 )
        {
          if ( v6[9] != 0 )
            ((void (*)(uint32_t))Curl_cfree)(v6[9]);
          v60 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v43));
          v6[9] = (uint32_t)(uintptr_t)(v60);
          if ( v60 == nullptr )
            goto LABEL_125;
        }
        else if ( Curl_raw_equal("max-age", v81) != 0 )
        {
          if ( v6[10] != 0 )
            ((void (*)(uint32_t))Curl_cfree)(v6[10]);
          v62 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v43));
          v6[10] = (uint32_t)(uintptr_t)(v62);
          if ( v62 == nullptr )
            goto LABEL_125;
          v63 = strtol(&v62[*v62 == 34], nullptr, 10);
          *(uint64_t *)(v6 + 5) = v79 + v63;
        }
        else if ( Curl_raw_equal("expires", v81) != 0 )
        {
          if ( v6[7] != 0 )
            ((void (*)(uint32_t))Curl_cfree)(v6[7]);
          v64 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v43));
          v6[7] = (uint32_t)(uintptr_t)(v64);
          if ( v64 == nullptr )
            goto LABEL_125;
          c = &v79;
          v65 = curl_getdate(delima);
          *(uint64_t *)(v6 + 5) = v65;
          if ( v65 != 0 )
          {
            if ( v65 < 0 )
            {
              v6[5] = 0;
              v6[6] = 0;
            }
          }
          else
          {
            v6[5] = 1;
            v6[6] = 0;
          }
        }
        else if ( v6[1] == 0 )
        {
          v6[1] = G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v81);
          v66 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v43));
          v67 = v6[1];
          v6[2] = (uint32_t)(uintptr_t)(v66);
          if ( v67 == 0 || v66 == nullptr )
            goto LABEL_125;
        }
      }
    }
    else if ( sscanf(v27, "%4999[^;\r\n]", delima) != 0 )
    {
      if ( Curl_raw_equal("secure", delima) != 0 )
      {
        *((uint8_t *)v6 + 44) = 1;
      }
      else if ( Curl_raw_equal("httponly", delima) != 0 )
      {
        *((uint8_t *)v6 + 46) = 1;
      }
    }
    if ( v26 == nullptr || *v26 == 0 )
      break;
    v39 = v26[1];
    v27 = v26 + 1;
    if ( v39 != 0 && (v39 == 32 || v39 == 9) )
    {
      do
        v39 = *++v27;
      while ( *v27 != 0 && (v39 == 9 || v39 == 32) );
    }
    sa = v39;
    v26 = (char *)(strchr(v27, 59));
    if ( v26 == nullptr )
    {
      if ( sa == 0 )
        break;
      v26 = (char *)(strchr(v27, 0));
      if ( v26 == nullptr )
        break;
    }
  }
  if ( v74 != 0
    || v6[4] == 0
    && a5 != nullptr
    && (v61 = ((int (*)(char *, time_t *))Curl_cstrdup)(a5, c), v6[4] = v61, v61 == 0) )
  {
LABEL_125:
    ((void (*)(char *))Curl_cfree)(delima);
    sub_1A5E8D0(v6);
    return nullptr;
  }
  if ( a6 != nullptr && v6[3] == 0 )
  {
    v31 = strchr(a6, 63);
    v32 = v31 != nullptr ? (char *)Curl_memrchr(a6, 47, v31 - a6) : strrchr(a6, 47);
    if ( v32 != nullptr )
    {
      v33 = v32 - a6;
      v34 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v32 - a6 + 2));
      v6[3] = (uint32_t)(uintptr_t)(v34);
      if ( v34 == nullptr )
        goto LABEL_125;
      memcpy(v34, a6, v33 + 1);
      *(uint8_t *)(v6[3] + v33 + 1) = 0;
    }
  }
  ((void (*)(char *))Curl_cfree)(delima);
  if ( v6[1] == 0 )
    goto LABEL_41;
LABEL_67:
  v35 = *((uint8_t *)a2 + 8);
  if ( v35 == 0 && *((uint8_t *)a2 + 16) != 0 && *(uint64_t *)(v6 + 5) == 0 )
  {
LABEL_41:
    sub_1A5E8D0(v6);
    return nullptr;
  }
  *((uint8_t *)v6 + 45) = v35;
  v36 = *a2;
  if ( *a2 == nullptr )
  {
    delim = 0;
    v17 = nullptr;
    goto LABEL_18;
  }
  while ( 1 )
  {
    if ( Curl_raw_equal(v36[1], v6[1]) == 0 )
      goto LABEL_95;
    v37 = v36[4];
    if ( v37 != 0 )
    {
      if ( v6[4] == 0 || Curl_raw_equal(v37, v6[4]) == 0 )
        goto LABEL_95;
    }
    else if ( v6[4] != 0 )
    {
      goto LABEL_95;
    }
    v38 = v36[3];
    if ( v38 != 0 )
      break;
    if ( v6[3] == 0 )
      goto LABEL_77;
LABEL_95:
    if ( *v36 == 0 )
    {
      v17 = (uint32_t *)(v36);
      delim = 0;
      goto LABEL_18;
    }
    v36 = (int *)*v36;
  }
  if ( v6[3] == 0 || Curl_raw_equal(v38, v6[3]) == 0 )
    goto LABEL_95;
LABEL_77:
  if ( *((uint8_t *)v6 + 45) == 0 && *((uint8_t *)v36 + 45) != 0 )
    goto LABEL_41;
  *v6 = *v36;
  ((void (*)(int))Curl_cfree)(v36[1]);
  if ( v36[2] != 0 )
    ((void (*)(int))Curl_cfree)(v36[2]);
  if ( v36[4] != 0 )
    ((void (*)(int))Curl_cfree)(v36[4]);
  if ( v36[3] != 0 )
    ((void (*)(int))Curl_cfree)(v36[3]);
  if ( v36[7] != 0 )
    ((void (*)(int))Curl_cfree)(v36[7]);
  if ( v36[9] != 0 )
    ((void (*)(int))Curl_cfree)(v36[9]);
  if ( v36[10] != 0 )
    ((void (*)(int))Curl_cfree)(v36[10]);
  *v36 = *v6;
  v36[1] = v6[1];
  v36[2] = v6[2];
  v36[3] = v6[3];
  v36[4] = v6[4];
  v36[5] = v6[5];
  v36[6] = v6[6];
  v36[7] = v6[7];
  v36[8] = v6[8];
  v36[9] = v6[9];
  v36[10] = v6[10];
  v36[11] = v6[11];
  v17 = (uint32_t *)(v36);
  ((void (*)(uint32_t *))Curl_cfree)(v6);
  while ( *v17 != 0 )
    v17 = (uint32_t *)*v17;
  v6 = (uint32_t *)(v36);
  delim = 1;
LABEL_18:
  if ( *((uint8_t *)a2 + 8) != 0 )
  {
    v18 = "Replaced";
    if ( delim == 0 )
      v18 = "Added";
    Curl_infof(
      a1,
      "%s cookie %s=\"%s\" for domain %s, path %s, expire %lld\n",
      v18,
      v6[1],
      v6[2],
      v6[4],
      v6[3],
      v6[5],
      v6[6]);
  }
  if ( delim == 0 )
  {
    if ( v17 != nullptr )
      *v17 = (uint32_t)(uintptr_t)(v6);
    else
      *a2 = (int *)(v6);
  }
  a2[3] = (int *)((char *)a2[3] + 1);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_init  (binary VA: 0x1a5f8a0)
// Original: Curl_cookie_init
// ----------------------------------------------------------------------------
uint32_t * Curl_cookie_init(int a1, char *filename, uint32_t *a3, char a4)
{
  uint32_t *v4;
  FILE *stream;
  char *s;
  int v7;
  char v8;
  const char *v9;
  char v10;
  char v11;
  const char *v13;
  char v14;

  v4 = a3;
  if ( a3 == nullptr )
  {
    v4 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 20);
    if ( v4 == nullptr )
      return v4;
    v13 = "none";
    if ( filename != nullptr )
      v13 = filename;
    v4[1] = G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v13);
  }
  *((uint8_t *)v4 + 8) = 0;
  if ( filename == nullptr )
    goto LABEL_16;
  if ( curl_strequal(filename, "-") != 0 )
  {
    v14 = 0;
    *((uint8_t *)v4 + 16) = a4;
    stream = stdin;
LABEL_5:
    s = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 5000);
    if ( s != nullptr )
    {
      while ( fgets(s, 5000, stream) != nullptr )
      {
        v7 = Curl_raw_nequal("Set-Cookie:", s, 11);
        v8 = 0;
        v9 = s;
        if ( v7 != 0 )
        {
          v9 = s + 11;
          v8 = 1;
        }
        v10 = *v9;
        if ( *v9 != 0 && (v10 == 32 || v10 == 9) )
        {
          do
            v11 = *++v9;
          while ( *v9 != 0 && (v11 == 9 || v11 == 32) );
        }
        Curl_cookie_add(a1, (int **)v4, v8, v9, nullptr, nullptr);
      }
      ((void (*)(char *))Curl_cfree)(s);
    }
    if ( v14 != 0 )
      fclose(stream);
    goto LABEL_17;
  }
  if ( *filename != 0 )
  {
    stream = fopen(filename, "r");
    *((uint8_t *)v4 + 16) = a4;
    if ( stream != nullptr )
    {
      v14 = 1;
      goto LABEL_5;
    }
  }
  else
  {
LABEL_16:
    *((uint8_t *)v4 + 16) = a4;
  }
LABEL_17:
  *((uint8_t *)v4 + 8) = 1;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_loadfiles  (binary VA: 0x1a5fa80)
// Original: Curl_cookie_loadfiles
// ----------------------------------------------------------------------------
void Curl_cookie_loadfiles(int a1)
{
  int v1;
  uint32_t *v2;

  v1 = *(uint32_t *)(a1 + 932);
  if ( v1 != 0 )
  {
    Curl_share_lock(a1, 2, 2);
    v2 = *(uint32_t **)(a1 + 940);
    do
    {
      v2 = Curl_cookie_init(a1, *(char **)v1, v2, *(uint8_t *)(a1 + 488));
      *(uint32_t *)(a1 + 940) = (uint32_t)(uintptr_t)(v2);
      v1 = *(uint32_t *)(v1 + 4);
    }
    while ( v1 != 0 );
    Curl_share_unlock(a1, 2);
    curl_slist_free_all(*(uint32_t **)(a1 + 932));
    *(uint32_t *)(a1 + 932) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_getlist  (binary VA: 0x1a5fb20)
// Original: Curl_cookie_getlist
// ----------------------------------------------------------------------------
uint32_t * Curl_cookie_getlist(int **a1, char *s, char *s2, char a4)
{
  time_t v4;
  int *v5;
  int v6;
  const char *v7;
  size_t n;
  uint32_t *v9;
  size_t v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  size_t v15;
  size_t v16;
  uint32_t *v17;
  uint32_t *i;
  uint32_t *v19;
  size_t v20;
  uint32_t *v21;
  int v22;
  size_t nmemb;

  v4 = time(nullptr);
  if ( a1 == nullptr )
    return nullptr;
  v5 = *a1;
  if ( *a1 == nullptr )
    return nullptr;
  nmemb = 0;
  v21 = nullptr;
  do
  {
    while ( 1 )
    {
      if ( *(uint64_t *)(v5 + 5) != 0 && *(uint64_t *)(v5 + 5) <= v4 || *((uint8_t *)v5 + 44) != 0 && a4 == 0 )
        goto LABEL_5;
      v6 = v5[4];
      if ( v6 == 0 )
        break;
      if ( *((uint8_t *)v5 + 32) != 0 )
      {
        v20 = strlen((const char *)v5[4]);
        v11 = strlen(s);
        if ( v20 > v11 )
          goto LABEL_5;
        if ( Curl_raw_equal(v6, &s[v11 - v20]) != 0 )
          break;
        if ( *((uint8_t *)v5 + 32) != 0 )
          goto LABEL_5;
        v6 = v5[4];
      }
      if ( Curl_raw_equal(s, v6) != 0 )
        break;
LABEL_5:
      v5 = (int *)*v5;
      if ( v5 == nullptr )
        goto LABEL_16;
    }
    v7 = (const char *)v5[3];
    if ( v7 != nullptr )
    {
      n = strlen((const char *)v5[3]);
      if ( strncmp(v7, s2, n) != 0 )
        goto LABEL_5;
    }
    v9 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 48);
    if ( v9 == nullptr )
      goto LABEL_30;
    *v9 = *v5;
    v9[1] = v5[1];
    v9[2] = v5[2];
    v9[3] = v5[3];
    v9[4] = v5[4];
    v9[5] = v5[5];
    v9[6] = v5[6];
    v9[7] = v5[7];
    v9[8] = v5[8];
    v9[9] = v5[9];
    v9[10] = v5[10];
    v9[11] = v5[11];
    *v9 = (uint32_t)(uintptr_t)(v21);
    v5 = (int *)*v5;
    ++nmemb;
    v21 = v9;
  }
  while ( v5 != nullptr );
LABEL_16:
  if ( nmemb == 0 )
    return v21;
  v12 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 4 * nmemb);
  if ( v12 == nullptr )
  {
LABEL_30:
    if ( v21 == nullptr )
      return v21;
    for ( i = v21; ; i = v19 )
    {
      v19 = (uint32_t *)*i;
      ((void (*)(uint32_t *))Curl_cfree)(i);
      if ( v19 == nullptr )
        break;
    }
    return nullptr;
  }
  if ( v21 != nullptr )
  {
    v13 = v12;
    v14 = v21;
    do
    {
      *v13 = (uint32_t)(uintptr_t)(v14);
      v14 = (uint32_t *)*v14;
      ++v13;
    }
    while ( v14 != nullptr );
  }
  qsort(v12, nmemb, 4u, (__compar_fn_t)sub_1A5EA80);
  v15 = nmemb - 1;
  v22 = *v12;
  if ( nmemb != 1 )
  {
    v16 = 0;
    do
    {
      v17 = (uint32_t *)v12[v16++];
      *v17 = v12[v16];
    }
    while ( v16 < v15 );
  }
  *(uint32_t *)v12[v15] = 0;
  ((void (*)(uint32_t *))Curl_cfree)(v12);
  return (uint32_t *)v22;
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_freelist  (binary VA: 0x1a5fdc0)
// Original: Curl_cookie_freelist
// ----------------------------------------------------------------------------
uint32_t * Curl_cookie_freelist(uint32_t *a1, char a2)
{
  uint32_t *result;
  uint32_t *v3;

  result = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)*result;
      if ( a2 != 0 )
      {
        result = (uint32_t *)sub_1A5E8D0(result);
        if ( v3 == nullptr )
          return result;
      }
      else
      {
        result = (uint32_t *)((int (*)(uint32_t *))Curl_cfree)(result);
        if ( v3 == nullptr )
          return result;
      }
      result = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_clearall  (binary VA: 0x1a5fe10)
// Original: Curl_cookie_clearall
// ----------------------------------------------------------------------------
uint32_t * Curl_cookie_clearall(int a1)
{
  uint32_t *result;

  if ( a1 != 0 )
  {
    result = Curl_cookie_freelist(*(uint32_t **)a1, 1);
    *(uint32_t *)a1 = 0;
    *(uint32_t *)(a1 + 12) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_clearsess  (binary VA: 0x1a5fe60)
// Original: Curl_cookie_clearsess
// ----------------------------------------------------------------------------
void Curl_cookie_clearsess(uint32_t *a1)
{
  uint32_t *v1;
  int *v2;
  int *v3;
  int *v4;
  int *v5;
  uint32_t *v6;

  v1 = a1;
  if ( a1 != nullptr )
  {
    v2 = (int *)*a1;
    v3 = (int *)*a1;
    v4 = (int *)*a1;
    if ( *a1 != 0 )
    {
      while ( 1 )
      {
        v5 = (int *)*v4;
        if ( *(uint64_t *)(v4 + 5) != 0 )
        {
          v3 = v4;
          if ( v5 == nullptr )
            goto LABEL_12;
        }
        else
        {
          if ( v2 == v4 )
            v2 = (int *)*v4;
          if ( v3 == v4 )
            v3 = (int *)*v4;
          else
            *v3 = (int)(uintptr_t)(v5);
          v6 = v1;
          sub_1A5E8D0(v4);
          v1 = v6;
          --v6[3];
          if ( v5 == nullptr )
          {
LABEL_12:
            *v1 = (uint32_t)(uintptr_t)(v2);
            return;
          }
        }
        v4 = v5;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_cleanup  (binary VA: 0x1a5fed0)
// Original: Curl_cookie_cleanup
// ----------------------------------------------------------------------------
void Curl_cookie_cleanup(int a1)
{
  uint32_t *v1;
  uint32_t *v2;

  if ( a1 != 0 )
  {
    if ( *(uint32_t *)(a1 + 4) != 0 )
      ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 4));
    v1 = *(uint32_t **)a1;
    if ( *(uint32_t *)a1 != 0 )
    {
      while ( 1 )
      {
        v2 = (uint32_t *)*v1;
        sub_1A5E8D0(v1);
        if ( v2 == nullptr )
          break;
        v1 = v2;
      }
    }
    ((void (*)(int))Curl_cfree)(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_cookie_list  (binary VA: 0x1a5ff30)
// Original: Curl_cookie_list
// ----------------------------------------------------------------------------
int * Curl_cookie_list(int a1)
{
  int *v1;
  int v2;
  uint32_t *v3;
  int *v4;
  int v5;
  int v6;
  int *v8;

  v1 = nullptr;
  v2 = *(uint32_t *)(a1 + 940);
  if ( v2 == 0 )
    return v1;
  if ( *(uint32_t *)(v2 + 12) == 0 )
    return v1;
  v3 = *(uint32_t **)v2;
  if ( *(uint32_t *)v2 == 0 )
    return v1;
  v8 = nullptr;
  while ( 1 )
  {
    v5 = sub_1A5E960((int)(uintptr_t)(v3));
    v6 = v5;
    if ( v5 == 0 )
    {
      v1 = nullptr;
      curl_slist_free_all(v8);
      return v1;
    }
    v1 = curl_slist_append((int)(uintptr_t)(v1), v5);
    ((void (*)(int))Curl_cfree)(v6);
    if ( v1 == nullptr )
      break;
    v3 = (uint32_t *)*v3;
    v4 = v8;
    if ( v8 == nullptr )
      v4 = v1;
    v8 = v4;
    if ( v3 == nullptr )
      return v1;
  }
  curl_slist_free_all(v8);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: Curl_flush_cookies  (binary VA: 0x1a5fff0)
// Original: Curl_flush_cookies
// ----------------------------------------------------------------------------
int Curl_flush_cookies(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  const char *v4;
  int v5;
  uint32_t *v7;
  int v8;
  int v9;
  char n;
  FILE *stream;
  char v12;

  v2 = (uint32_t *)a1;
  if ( *(uint32_t *)(a1 + 736) != 0 )
  {
    if ( *(uint32_t *)(a1 + 932) != 0 )
      Curl_cookie_loadfiles(a1);
    Curl_share_lock(a1, 2, 2);
    v3 = *(uint32_t *)(a1 + 940);
    v4 = *(const char **)(a1 + 736);
    if ( v3 == 0 || *(uint32_t *)(v3 + 12) == 0 )
      goto LABEL_6;
    if ( curl_strequal("-", *(char **)(a1 + 736)) != 0 )
    {
      v12 = 1;
      stream = stdout;
    }
    else
    {
      stream = fopen(v4, "w");
      if ( stream == nullptr )
        goto LABEL_19;
      v12 = 0;
    }
    fwrite(
      "# Netscape HTTP Cookie File\n"
      "# http://curl.haxx.se/rfc/cookie_spec.html\n"
      "# This file was generated by libcurl! Edit at your own risk.\n"
      "\n",
      1u,
      0x85u,
      stream);
    v7 = *(uint32_t **)v3;
    if ( v7 == nullptr )
    {
LABEL_27:
      if ( v12 == 0 )
        fclose(stream);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v8 = sub_1A5E960();
      v9 = v8;
      if ( v8 == 0 )
        break;
      curl_mfprintf((int)(uintptr_t)stream, (char *)"%s\n", v8);
      ((void (*)(int))Curl_cfree)(v9);
      v7 = (uint32_t *)*v7;
      if ( v7 == nullptr )
      {
        v2 = (uint32_t *)a1;
        goto LABEL_27;
      }
    }
    v2 = (uint32_t *)a1;
    curl_mfprintf((int)(uintptr_t)stream, (char *)"#\n# Fatal libcurl error\n", n);
    if ( v12 == 0 )
      fclose(stream);
LABEL_19:
    Curl_infof((int)(uintptr_t)v2, (char *)"WARNING: failed to save cookies in %s\n", v2[184]);
    goto LABEL_6;
  }
  if ( a2 != 0 && *(uint32_t *)(a1 + 932) != 0 )
    curl_slist_free_all(*(uint32_t *)(a1 + 932));
  Curl_share_lock(a1, 2, 2);
LABEL_6:
  if ( a2 != 0 )
  {
    v5 = v2[4];
    if ( v5 == 0 || v2[235] != *(uint32_t *)(v5 + 24) )
      Curl_cookie_cleanup(v2[235]);
  }
  return Curl_share_unlock(v2, 2);
}

// ----------------------------------------------------------------------------
// Function: Curl_freeaddrinfo  (binary VA: 0x1a60230)
// Original: Curl_freeaddrinfo
// ----------------------------------------------------------------------------
int Curl_freeaddrinfo(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  int result;

  v1 = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      if ( v1[6] != 0 )
        ((void (*)(uint32_t))Curl_cfree)(v1[6]);
      if ( v1[5] != 0 )
        ((void (*)(uint32_t))Curl_cfree)(v1[5]);
      v2 = (uint32_t *)v1[7];
      result = ((int (*)(uint32_t *))Curl_cfree)(v1);
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_he2ai  (binary VA: 0x1a60290)
// Original: Curl_he2ai
// ----------------------------------------------------------------------------
uint32_t * Curl_he2ai(int a1, int16_t a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  char *v5;
  void *v6;
  int v7;
  int v8;
  int v10;
  uint32_t *i;
  uint32_t *v12;

  if ( a1 == 0 )
    return nullptr;
  v2 = nullptr;
  v12 = **(uint32_t ***)(a1 + 16);
  if ( v12 == nullptr )
    return v2;
  v10 = 4;
  for ( i = nullptr; ; i = v4 )
  {
    v4 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 32);
    if ( v4 == nullptr )
      goto LABEL_18;
    v5 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)a1));
    v4[5] = (uint32_t)(uintptr_t)(v5);
    if ( v5 == nullptr )
    {
      ((void (*)(uint32_t *))Curl_cfree)(v4);
LABEL_18:
      Curl_freeaddrinfo(v2);
      return nullptr;
    }
    v6 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 16));
    v4[6] = (uint32_t)(uintptr_t)(v6);
    if ( v6 == nullptr )
      break;
    if ( v2 == nullptr )
      v2 = v4;
    if ( i != nullptr )
      i[7] = (uint32_t)(uintptr_t)(v4);
    v7 = *(uint32_t *)(a1 + 8);
    v4[2] = 1;
    v4[1] = v7;
    v4[4] = 16;
    if ( v7 == 2 )
    {
      v8 = v4[6];
      *(uint32_t *)(v8 + 4) = *v12;
      *(uint16_t *)v8 = *(uint32_t *)(a1 + 8);
      *(uint16_t *)(v8 + 2) = __builtin_rotateright16(a2, 8);
    }
    v3 = *(uint32_t **)(*(uint32_t *)(a1 + 16) + v10);
    v12 = v3;
    v10 += 4;
    if ( v3 == nullptr )
      return v2;
  }
  ((void (*)(uint32_t))Curl_cfree)(v4[5]);
  ((void (*)(uint32_t *))Curl_cfree)(v4);
  Curl_freeaddrinfo(v2);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: Curl_ip2addr  (binary VA: 0x1a60410)
// Original: Curl_ip2addr
// ----------------------------------------------------------------------------
uint32_t * Curl_ip2addr(int a1, char **a2, const char *a3, int16_t a4)
{
  uint32_t *v4;
  char **v5;
  char *v6;
  char *v7;
  char *v8;

  v4 = nullptr;
  v5 = (char **)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x20u);
  if ( v5 != nullptr )
  {
    v6 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), a3));
    v7 = v6;
    if ( v6 != nullptr )
    {
      if ( a1 == 2 )
      {
        v8 = *a2;
        v5[6] = (char *)(v5 + 5);
        v5[5] = v8;
        *v5 = v6;
        v5[1] = nullptr;
        v5[2] = (char *)((uint8_t *)(&dword_0 + 2));
        v5[3] = (char *)((uint8_t *)&loc_4);
        v5[7] = nullptr;
        v5[4] = (char *)(v5 + 6);
        v4 = Curl_he2ai((int)(uintptr_t)(v5), a4);
      }
      ((void (*)(char *))Curl_cfree)(v7);
      ((void (*)(char **))Curl_cfree)(v5);
    }
    else
    {
      ((void (*)(char **))Curl_cfree)(v5);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Curl_str2addr  (binary VA: 0x1a604f0)
// Original: Curl_str2addr
// ----------------------------------------------------------------------------
uint32_t * Curl_str2addr(int a1, int a2, char *a3, int16_t a4)
{
  int v4;
  uint32_t *result;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v4 = Curl_inet_pton(a1, a2, 2, a3, &v6);
  result = nullptr;
  if ( v4 > 0 )
    return Curl_ip2addr(2, &v6, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_memrchr  (binary VA: 0x1a60560)
// Original: Curl_memrchr
// ----------------------------------------------------------------------------
uint8_t * Curl_memrchr(unsigned int a1, char a2, int a3)
{
  uint8_t *result;

  result = (uint8_t *)(a1 + a3 - 1);
  if ( a1 > (unsigned int)(uintptr_t)(result) )
    return nullptr;
  if ( *result != a2 )
  {
    while ( a1 <= (unsigned int)(uintptr_t)(--result) )
    {
      if ( *result == a2 )
        return result;
    }
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_rand  (binary VA: 0x1a605a0)
// Original: Curl_rand
// ----------------------------------------------------------------------------
int Curl_rand()
{
  dword_21425C0 = 1103515245 * dword_21425C0 + 12345;
  return __builtin_rotateright32(dword_21425C0, 16);
}

// ----------------------------------------------------------------------------
// Function: Curl_srand  (binary VA: 0x1a605d0)
// Original: Curl_srand
// ----------------------------------------------------------------------------
int Curl_srand()
{
  dword_21425C0 = time(nullptr);
  Curl_rand();
  Curl_rand();
  return Curl_rand();
}

// ----------------------------------------------------------------------------
// Function: curl_easy_escape  (binary VA: 0x1a60b30)
// Original: curl_easy_escape
// ----------------------------------------------------------------------------
uint8_t * curl_easy_escape(int a1, char *s, size_t a3)
{
  size_t v3;
  uint8_t *v4;
  char *v5;
  int v6;
  uint8_t v7;
  int v9;
  int v10;
  char v11;
  size_t v12;
  size_t v13;
  size_t v14;

  v3 = a3;
  if ( a3 == 0 )
    v3 = strlen(s);
  v14 = v3 + 1;
  v4 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v3 + 1);
  if ( v4 == nullptr )
    return v4;
  if ( v14 == 1 )
  {
    v6 = 0;
LABEL_9:
    v4[v6] = 0;
    return v4;
  }
  v5 = s;
  v12 = v14;
  v13 = v14;
  v6 = 0;
  while ( 2 )
  {
    v7 = *v5;
    switch ( *v5 )
    {
      case '-':
      case '.':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '_':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
      case '~':
        v4[v6++] = v7;
        goto LABEL_8;
      default:
        v12 += 2;
        if ( v12 <= v13 )
          goto LABEL_14;
        v13 *= 2;
        v11 = *v5;
        v9 = ((int (*)(uint8_t *, size_t))Curl_crealloc)(v4, v13);
        v7 = v11;
        if ( v9 != 0 )
        {
          v4 = (uint8_t *)v9;
LABEL_14:
          v10 = (int)(uintptr_t)(&v4[v6]);
          v6 += 3;
          curl_msnprintf(v10, 4, (int)(uintptr_t)("%%%02X"), v7);
LABEL_8:
          if ( ++v5 == &s[v14 - 1] )
            goto LABEL_9;
          continue;
        }
        ((void (*)(uint8_t *))Curl_cfree)(v4);
        return nullptr;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: curl_escape  (binary VA: 0x1a60c60)
// Original: curl_escape
// ----------------------------------------------------------------------------
uint8_t * curl_escape(char *a1, size_t a2)
{
  return curl_easy_escape(0, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: curl_easy_unescape  (binary VA: 0x1a60ca0)
// Original: curl_easy_unescape
// ----------------------------------------------------------------------------
uint8_t * curl_easy_unescape(int a1, char *s, int a3, uint32_t *a4)
{
  char *v4;
  size_t v5;
  uint8_t *v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  char v11;
  int v12;
  int v13;
  uint8_t v14;
  char v15;
  typedef uint8_t *_g4_t_v17;
  typedef uint8_t _g4_t_v18;
  typedef uint8_t _g4_t_v19;
  typedef char _g4_t_nptr[3];
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v18)) > _g4_s1 ? (14u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v19)) > _g4_s2 ? (15u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_nptr)) > _g4_s3 ? (25u + sizeof(_g4_t_nptr)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_endptr)) > _g4_s4 ? (28u + sizeof(_g4_t_endptr)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 14u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 15u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 25u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 28u);

  v4 = s;
  v5 = a3 + 1;
  if ( a3 == 0 )
    v5 = strlen(s) + 1;
  v6 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v5);
  if ( v6 != nullptr )
  {
    v7 = v5 - 1;
    v8 = 0;
    v9 = 0;
    if ( v7 > 0 )
    {
      v10 = v6;
      do
      {
        while ( 1 )
        {
          v11 = *v4;
          if ( *v4 == 37 )
          {
            v17 = v10;
            v18 = v4[1];
            v12 = isxdigit(v18);
            v11 = 37;
            v10 = v17;
            if ( v12 != 0 )
            {
              v19 = v4[2];
              v13 = isxdigit(v19);
              v10 = v17;
              v11 = 37;
              if ( v13 != 0 )
                break;
            }
          }
          --v7;
          v10[v9] = v11;
          ++v4;
          ++v9;
          if ( v7 <= 0 )
            goto LABEL_11;
        }
        nptr[0] = v18;
        nptr[1] = v19;
        nptr[2] = 0;
        v14 = strtoul(nptr, &endptr, 16);
        v15 = curlx_ultouc(v14);
        v10 = v17;
        v7 -= 3;
        v4 += 3;
        v17[v9++] = v15;
      }
      while ( v7 > 0 );
LABEL_11:
      v6 = v10;
      v8 = v9;
    }
    v6[v8] = 0;
    if ( a4 != nullptr )
      *a4 = v9;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: curl_unescape  (binary VA: 0x1a60de0)
// Original: curl_unescape
// ----------------------------------------------------------------------------
uint8_t * curl_unescape(char *a1, int a2)
{
  return curl_easy_unescape(0, a1, a2, nullptr);
}

// ----------------------------------------------------------------------------
// Function: curl_free  (binary VA: 0x1a60e20)
// Original: curl_free
// ----------------------------------------------------------------------------
int curl_free(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return ((int (*)(int))Curl_cfree)(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_fileinfo_alloc  (binary VA: 0x1a61ab0)
// Original: Curl_fileinfo_alloc
// ----------------------------------------------------------------------------
uint8_t * Curl_fileinfo_alloc()
{
  uint8_t *result;
  uint16_t *v1;
  unsigned int v2;
  uint8_t *v3;

  result = (uint8_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x48u));
  if ( result != nullptr )
  {
    v1 = (uint16_t *)(result);
    v2 = 72;
    if ( ((uint8_t)(uintptr_t)(result) & 1) != 0 )
    {
      *result = 0;
      v1 = (uint16_t *)(result + 1);
      LOWORD(v2) = 71;
    }
    if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
    {
      *v1 = 0;
      v2 -= 2;
      ++v1;
    }
    memset(v1, 0, 4 * (v2 >> 2));
    v3 = (uint8_t *)(&v1[2 * (v2 >> 2)]);
    if ( (v2 & 2) == 0 )
    {
      if ( (v2 & 1) == 0 )
        return result;
LABEL_9:
      *v3 = 0;
      return result;
    }
    *(uint16_t *)v3 = 0;
    v3 += 2;
    if ( (v2 & 1) != 0 )
      goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_fileinfo_dtor  (binary VA: 0x1a61b60)
// Original: Curl_fileinfo_dtor
// ----------------------------------------------------------------------------
int Curl_fileinfo_dtor(int a1, int a2)
{
  int result;

  if ( a2 != 0 )
  {
    if ( *(uint32_t *)(a2 + 60) != 0 )
      ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a2 + 60));
    return ((int (*)(int))Curl_cfree)(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_formadd  (binary VA: 0x1a62100)
// Original: curl_formadd
// ----------------------------------------------------------------------------
char * curl_formadd(uint32_t *a1, uint32_t **a2, char a3)
{
  char **v3;
  unsigned int *v4;
  char **v5;
  char **v6;
  char *v7;
  unsigned int v8;
  const char *v9;
  char **v10;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  const char *v16;
  char *v17;
  char *v18;
  const char *v19;
  char *v20;
  char **v21;
  char *v22;
  char *v23;
  char *v24;
  const char *v25;
  char *v26;
  const char *v27;
  const char *v28;
  char *v29;
  char *v30;
  uint32_t *i;
  uint32_t *v32;
  uint32_t *v33;
  char *v34;
  size_t v35;
  char *v36;
  char *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  const char *v41;
  int v42;
  size_t v43;
  size_t v44;
  int v45;
  char *v46;
  char *v47;
  int v48;
  char *v49;
  char *s;
  char *v51;
  char *v52;
  char *v53;
  char *v54;
  char *v55;
  char *v56;
  char *v57;
  char *v58;
  char *v59;
  char v60;
  char *v61;
  char *v62;
  const char *v63;
  const char *v64;
  char *v65;
  char *v66;
  const char *v67;
  char *v68;
  char *(*v69)(const char *);
  char *v70;
  char *v71;
  uint32_t *v72;
  char *v73;
  char *v74;
  size_t v75;
  char **v76;

  v3 = (char **)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0x40u);
  v4 = (unsigned int *)&a3;
  v5 = v3;
  v59 = (char *)((uint8_t *)(&dword_0 + 1));
  if ( v3 != nullptr )
  {
    v6 = v3;
    v63 = nullptr;
    v7 = nullptr;
    v60 = 0;
    while ( 1 )
    {
      if ( v60 != 0 )
      {
LABEL_4:
        if ( v7 != nullptr )
        {
          v8 = *(uint32_t *)v7;
          v9 = *((const char **)v7 + 1);
          v7 += 8;
          v63 = v9;
          if ( v8 != 17 )
          {
            if ( v8 > 0x13 )
              goto LABEL_7;
            goto LABEL_16;
          }
          v60 = 0;
        }
      }
      v8 = *v4;
      if ( *v4 == 17 )
      {
        v6 = v5;
        v76 = v5;
        v64 = nullptr;
        for ( i = nullptr; *v6 != nullptr && v6[3] != nullptr || i != nullptr; i = v33 )
        {
          if ( v6[5] != nullptr && ((uint8_t)(uintptr_t)(v6)[8] & 1) != 0 )
            break;
          v37 = v6[8];
          if ( ((uint8_t)(uintptr_t)(v37) & 9) == 9 || v6[9] == nullptr && ((uint8_t)(uintptr_t)(v37) & 0x30) == 0x30 )
            break;
          if ( ((uint8_t)(uintptr_t)(v37) & 0xA) == 0xA )
            break;
          if ( ((uint8_t)(uintptr_t)(v37) & 0x11) != 0 && v6[6] == nullptr )
          {
            v62 = v6[3];
            v69 = (char *(*)(const char *))(uintptr_t)(Curl_cstrdup);
            v41 = "application/octet-stream";
            if ( v64 != nullptr )
              v41 = v64;
            v67 = v41;
            if ( v6[3] != nullptr )
            {
              v42 = 0;
              v72 = i;
              do
              {
                v43 = strlen(v62);
                v44 = strlen(&aGif_1 /* ".gif" */[12 * v42]);
                if ( v43 >= v44 && curl_strequal(&v62[v43 - v44], &aGif_1 /* ".gif" */[12 * v42]) != 0 )
                {
                  i = v72;
                  v67 = *(const char **)&aGif_1 /* ".gif" */[12 * v42 + 8];
                  goto LABEL_148;
                }
                ++v42;
              }
              while ( v42 != 6 );
              i = v72;
            }
LABEL_148:
            v45 = (int)(uintptr_t)(v69(v67));
            v6[6] = (char *)v45;
            if ( v45 == 0 )
            {
LABEL_124:
              v5 = v76;
              v59 = (char *)((uint8_t *)(&dword_0 + 1));
              goto LABEL_125;
            }
            *((uint8_t *)v6 + 28) = 1;
          }
          v38 = v6[8];
          if ( v76 == v6 && ((uint8_t)(uintptr_t)(v38) & 4) == 0 )
          {
            if ( *v6 == nullptr )
              goto LABEL_124;
            v39 = sub_1A62050(*v6, (size_t)v6[2]);
            *v6 = v39;
            if ( v39 == nullptr )
              goto LABEL_124;
            *((uint8_t *)v6 + 4) = 1;
            v38 = v6[8];
          }
          if ( ((uint8_t)(uintptr_t)(v38) & 0x6B) != 0 )
          {
            v61 = v6[3];
          }
          else
          {
            v61 = sub_1A62050(v6[3], (size_t)v6[5]);
            v6[3] = v61;
            if ( v61 == nullptr )
              goto LABEL_124;
            *((uint8_t *)v6 + 16) = 1;
            v38 = v6[8];
          }
          v65 = v6[13];
          v66 = v6[11];
          v68 = v6[14];
          v70 = v6[6];
          v71 = v6[10];
          v73 = v6[9];
          v74 = v6[5];
          v75 = (size_t)v6[2];
          v58 = v38;
          v54 = *v6;
          v32 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 52);
          v33 = v32;
          v34 = v58;
          if ( v32 == nullptr )
            goto LABEL_124;
          v32[1] = (uint32_t)(uintptr_t)(v54);
          v35 = 0;
          if ( v54 != nullptr )
          {
            v35 = v75;
            if ( v75 == 0 )
            {
              v35 = strlen(v54);
              v34 = v58;
            }
          }
          v33[2] = v35;
          v33[3] = (uint32_t)(uintptr_t)(v61);
          v33[4] = (uint32_t)(uintptr_t)(v74);
          v33[5] = (uint32_t)(uintptr_t)(v73);
          v33[6] = (uint32_t)(uintptr_t)(v71);
          v33[7] = (uint32_t)(uintptr_t)(v70);
          v33[8] = (uint32_t)(uintptr_t)(v68);
          v33[11] = (uint32_t)(uintptr_t)(v66);
          v33[10] = (uint32_t)(uintptr_t)(v34);
          v33[12] = (uint32_t)(uintptr_t)(v65);
          if ( i != nullptr )
          {
            v33[9] = i[9];
            i[9] = (uint32_t)(uintptr_t)(v33);
          }
          else
          {
            v40 = *a2;
            if ( *a2 == nullptr )
              v40 = a1;
            *v40 = (uint32_t)(uintptr_t)(v33);
            *a2 = v33;
          }
          v36 = v6[6];
          v6 = (char **)v6[15];
          if ( v36 == nullptr )
            v36 = (char *)v64;
          v64 = v36;
          if ( v6 == nullptr )
          {
            v5 = v76;
            v59 = nullptr;
            goto LABEL_11;
          }
        }
        v5 = v76;
        v59 = (char *)((uint8_t *)(&loc_4 + 1));
        if ( *((uint8_t *)v6 + 4) == 0 )
          goto LABEL_126;
        goto LABEL_132;
      }
      ++v4;
      if ( v8 > 0x13 )
      {
LABEL_7:
        v59 = (char *)((uint8_t *)&loc_4);
        goto LABEL_8;
      }
LABEL_16:
      switch ( v8 )
      {
        case 0u:
        case 9u:
        case 0x11u:
        case 0x12u:
          goto LABEL_7;
        case 1u:
          goto LABEL_21;
        case 2u:
          v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 4);
LABEL_21:
          if ( *v6 != nullptr )
            goto LABEL_19;
          v12 = (char *)v63;
          if ( v60 == 0 )
            v12 = (char *)*v4++;
          if ( v12 == nullptr )
            goto LABEL_94;
          *v6 = v12;
          continue;
        case 3u:
          if ( v6[2] != nullptr )
            goto LABEL_19;
          v13 = (char *)v63;
          if ( v60 == 0 )
            v13 = (char *)*v4++;
          v6[2] = v13;
          continue;
        case 4u:
          goto LABEL_18;
        case 5u:
          v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 8);
LABEL_18:
          if ( v6[3] != nullptr )
            goto LABEL_19;
          v15 = (char *)v63;
          if ( v60 == 0 )
            v15 = (char *)*v4++;
          if ( v15 == nullptr )
            goto LABEL_94;
          goto LABEL_35;
        case 6u:
          if ( v6[5] != nullptr )
            goto LABEL_19;
          v30 = (char *)v63;
          if ( v60 == 0 )
            v30 = (char *)*v4++;
          v6[5] = v30;
          continue;
        case 7u:
          if ( v6[8] != nullptr )
            goto LABEL_19;
          v28 = v63;
          if ( v60 == 0 )
            v28 = (const char *)*v4++;
          if ( v28 == nullptr )
            goto LABEL_94;
          v53 = v7;
          v29 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v28));
          v6[3] = v29;
          v7 = v53;
          if ( v29 == nullptr )
            goto LABEL_151;
          v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 2);
          *((uint8_t *)v6 + 16) = 1;
          continue;
        case 8u:
          if ( v60 != 0 )
          {
            v59 = (char *)((uint8_t *)&loc_6);
            goto LABEL_8;
          }
          v7 = (char *)*v4;
          if ( *v4 == 0 )
            goto LABEL_94;
          ++v4;
          v60 = 1;
          goto LABEL_4;
        case 0xAu:
          v27 = v63;
          if ( v60 == 0 )
            v27 = (const char *)*v4++;
          if ( v6[3] != nullptr )
          {
            if ( ((uint8_t)(uintptr_t)(v6)[8] & 1) == 0 )
              goto LABEL_19;
            if ( v27 == nullptr )
            {
LABEL_94:
              v59 = (char *)((uint8_t *)(&dword_0 + 3));
              goto LABEL_8;
            }
            s = (char *)v27;
            goto LABEL_64;
          }
          if ( v27 == nullptr )
            goto LABEL_94;
          v56 = v7;
          v47 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v27));
          v6[3] = v47;
          v7 = v56;
          if ( v47 == nullptr )
          {
LABEL_151:
            v59 = (char *)((uint8_t *)(&dword_0 + 1));
            goto LABEL_8;
          }
          v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 1);
          *((uint8_t *)v6 + 16) = 1;
          continue;
        case 0xBu:
          v25 = v63;
          if ( v60 == 0 )
            v25 = (const char *)*v4++;
          if ( v6[3] != nullptr )
          {
            if ( ((uint8_t)(uintptr_t)(v6)[8] & 0x10) == 0 )
              goto LABEL_19;
            if ( v25 == nullptr )
              goto LABEL_94;
            s = (char *)v25;
LABEL_64:
            v52 = v7;
            v26 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), s));
            v21 = (char **)sub_1A61BB0((int)(uintptr_t)(v26), 0, (int)(uintptr_t)(v6));
LABEL_65:
            v6 = v21;
            v7 = v52;
            if ( v21 == nullptr )
            {
              v59 = (char *)((uint8_t *)(&dword_0 + 1));
              goto LABEL_11;
            }
          }
          else
          {
            v48 = 3;
            if ( v25 != nullptr )
            {
              v57 = v7;
              v49 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v25));
              v6[3] = v49;
              v7 = v57;
              v48 = v49 == nullptr;
            }
            v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 0x10);
            if ( v48 != 0 )
            {
              v59 = (char *)v48;
LABEL_8:
              if ( v6 == nullptr )
              {
LABEL_11:
                while ( 1 )
                {
                  v10 = (char **)v5[15];
                  ((void (*)(char **))Curl_cfree)(v5);
                  if ( v10 == nullptr )
                    break;
                  v5 = v10;
                }
                return v59;
              }
LABEL_125:
              if ( *((uint8_t *)v6 + 4) == 0 )
              {
LABEL_126:
                if ( *((uint8_t *)v6 + 16) == 0 )
                  goto LABEL_127;
LABEL_133:
                ((void (*)(char *))Curl_cfree)(v6[3]);
                if ( *((uint8_t *)v6 + 28) != 0 )
                  goto LABEL_134;
                goto LABEL_128;
              }
LABEL_132:
              ((void (*)(char *))Curl_cfree)(*v6);
              if ( *((uint8_t *)v6 + 16) != 0 )
                goto LABEL_133;
LABEL_127:
              if ( *((uint8_t *)v6 + 28) != 0 )
LABEL_134:
                ((void (*)(char *))Curl_cfree)(v6[6]);
LABEL_128:
              if ( *((uint8_t *)v6 + 48) != 0 )
                ((void (*)(char *))Curl_cfree)(v6[11]);
              goto LABEL_11;
            }
          }
          break;
        case 0xCu:
          v23 = v6[9];
          v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 0x20);
          if ( v23 != nullptr )
            goto LABEL_19;
          v24 = (char *)v63;
          if ( v60 == 0 )
            v24 = (char *)*v4++;
          if ( v24 == nullptr )
            goto LABEL_94;
          v6[9] = v24;
          continue;
        case 0xDu:
          if ( v6[10] != nullptr )
            goto LABEL_19;
          v22 = (char *)v63;
          if ( v60 == 0 )
            v22 = (char *)*v4++;
          v6[10] = v22;
          continue;
        case 0xEu:
          v19 = v63;
          if ( v60 == 0 )
            v19 = (const char *)*v4++;
          if ( v6[6] != nullptr )
          {
            if ( ((uint8_t)(uintptr_t)(v6)[8] & 1) == 0 )
              goto LABEL_19;
            if ( v19 == nullptr )
              goto LABEL_94;
            v52 = v7;
            v20 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v19));
            v21 = (char **)sub_1A61BB0(0, (int)(uintptr_t)(v20), (int)(uintptr_t)(v6));
            goto LABEL_65;
          }
          if ( v19 == nullptr )
            goto LABEL_94;
          v55 = v7;
          v46 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v19));
          v6[6] = v46;
          v7 = v55;
          if ( v46 == nullptr )
            goto LABEL_151;
          *((uint8_t *)v6 + 28) = 1;
          continue;
        case 0xFu:
          v18 = (char *)v63;
          if ( v60 != 0 )
          {
            if ( v6[14] != nullptr )
              goto LABEL_19;
          }
          else
          {
            v18 = (char *)*v4++;
            if ( v6[14] != nullptr )
            {
LABEL_19:
              v59 = (char *)((uint8_t *)(&dword_0 + 2));
              goto LABEL_8;
            }
          }
          v6[14] = v18;
          continue;
        case 0x10u:
          v16 = v63;
          if ( v60 != 0 )
          {
            if ( v6[11] != nullptr )
              goto LABEL_19;
          }
          else
          {
            v16 = (const char *)*v4++;
            if ( v6[11] != nullptr )
              goto LABEL_19;
          }
          v51 = v7;
          v17 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v16));
          v6[11] = v17;
          v7 = v51;
          if ( v17 == nullptr )
            goto LABEL_151;
          *((uint8_t *)v6 + 48) = 1;
          continue;
        case 0x13u:
          v14 = v6[13];
          v6[8] = (char *)((unsigned int)(uintptr_t)(v6[8]) | 0x40);
          if ( v14 != nullptr )
            goto LABEL_19;
          v15 = (char *)v63;
          if ( v60 == 0 )
            v15 = (char *)*v4++;
          if ( v15 == nullptr )
            goto LABEL_94;
          v6[13] = v15;
LABEL_35:
          v6[3] = v15;
          continue;
      }
    }
  }
  return v59;
}

// ----------------------------------------------------------------------------
// Function: Curl_formclean  (binary VA: 0x1a629a0)
// Original: Curl_formclean
// ----------------------------------------------------------------------------
uint32_t ** Curl_formclean(uint32_t **a1)
{
  uint32_t **result;
  uint32_t *v2;
  uint32_t *v3;

  result = a1;
  v2 = *a1;
  if ( *a1 != nullptr )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)*v2;
      if ( v2[1] <= 1u )
        ((void (*)(uint32_t))Curl_cfree)(v2[2]);
      ((void (*)(uint32_t *))Curl_cfree)(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
    *a1 = nullptr;
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_formfree  (binary VA: 0x1a62a20)
// Original: curl_formfree
// ----------------------------------------------------------------------------
void curl_formfree(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;

  v1 = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      if ( v1[9] != 0 )
        curl_formfree(v1[9]);
      v3 = v1[10];
      if ( (v3 & 4) == 0 && v1[1] != 0 )
      {
        ((void (*)(uint32_t))Curl_cfree)(v1[1]);
        v3 = v1[10];
      }
      if ( (v3 & 0x48) == 0 && v1[3] != 0 )
        ((void (*)(uint32_t))Curl_cfree)(v1[3]);
      if ( v1[7] != 0 )
        ((void (*)(uint32_t))Curl_cfree)(v1[7]);
      if ( v1[11] != 0 )
        ((void (*)(uint32_t))Curl_cfree)(v1[11]);
      ((void (*)(uint32_t *))Curl_cfree)(v1);
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_FormInit  (binary VA: 0x1a62ab0)
// Original: Curl_FormInit
// ----------------------------------------------------------------------------
char Curl_FormInit(uint32_t *a1, int a2)
{
  char result;

  result = 1;
  if ( a2 != 0 )
  {
    *a1 = a2;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_FormReader  (binary VA: 0x1a62ae0)
// Original: Curl_FormReader
// ----------------------------------------------------------------------------
int Curl_FormReader(char *a1, int a2, int a3, uint32_t *a4)
{
  size_t v4;
  uint32_t *v5;
  int v6;
  size_t n;
  size_t v8;
  uint32_t *v9;
  int v11;

  v4 = 0;
  v5 = (uint32_t *)*a4;
  if ( *a4 == 0 )
    return v4;
  v11 = a3 * a2;
  if ( (unsigned int)(v5[1] - 2) <= 1 )
  {
    v4 = sub_1A61C40((int)(uintptr_t)(a4), a1, v11);
    if ( v4 != 0 )
      return v4;
    v5 = (uint32_t *)*a4;
  }
  v6 = a4[1];
  v4 = 0;
  while ( 1 )
  {
    n = v5[3] - v6;
    v8 = v11 - v4;
    if ( n > v11 - v4 )
      break;
    memcpy(&a1[v4], (const void *)(v5[2] + v6), n);
    v9 = (uint32_t *)*a4;
    v4 = *(uint32_t *)(*a4 + 12) + v4 - a4[1];
    a4[1] = 0;
    v5 = (uint32_t *)*v9;
    *a4 = (uint32_t)(uintptr_t)(v5);
    if ( v5 == nullptr || v5[1] > 1u )
      return v4;
    v6 = 0;
  }
  memcpy(&a1[v4], (const void *)(v5[2] + v6), v8);
  a4[1] += v8;
  return a3 * a2;
}

// ----------------------------------------------------------------------------
// Function: Curl_formpostheader  (binary VA: 0x1a62bd0)
// Original: Curl_formpostheader
// ----------------------------------------------------------------------------
int Curl_formpostheader(uint32_t **a1, uint32_t *a2)
{
  uint32_t *v2;
  int result;

  v2 = *a1;
  if ( *a1 == nullptr )
    return 0;
  result = v2[2];
  *a2 = v2[3];
  *a1 = (uint32_t *)**a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_FormBoundary  (binary VA: 0x1a62c00)
// Original: Curl_FormBoundary
// ----------------------------------------------------------------------------
char * Curl_FormBoundary()
{
  char *s;
  char *v1;
  size_t v2;

  s = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x29u);
  v1 = s;
  if ( s != nullptr )
  {
    strcpy(s, "----------------------------");
    v2 = strlen(s);
    if ( v2 <= 0x27 )
    {
      do
        v1[v2++] = a0123456789abcd_6 /* "0123456789abcdef" */[Curl_rand() & 0xF];
      while ( v2 != 40 );
    }
    v1[40] = 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: Curl_getformdata  (binary VA: 0x1a62ca0)
// Original: Curl_getformdata
// ----------------------------------------------------------------------------
int Curl_getformdata(int a1, uint32_t *a2, int *a3, const char *a4, uint64_t *a5)
{
  int v5;
  const char *v6;
  int v7;
  int i;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v16;
  int v17;
  bool v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  size_t v23;
  FILE *v24;
  typedef size_t _g4_t_size;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int64_t _g4_t_v34;
  typedef char _g4_t_ptr[540];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_size)) > _g4_s0 ? (4u + sizeof(_g4_t_size)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v26)) > _g4_s1 ? (40u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v27)) > _g4_s2 ? (40u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v28)) > _g4_s3 ? (40u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v29)) > _g4_s4 ? (48u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v30)) > _g4_s5 ? (52u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v31)) > _g4_s6 ? (56u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v32)) > _g4_s7 ? (64u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v33)) > _g4_s8 ? (68u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v34)) > _g4_s9 ? (72u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_ptr)) > _g4_s10 ? (80u + sizeof(_g4_t_ptr)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 80u);

  v5 = 0;
  v6 = a4;
  v32 = nullptr;
  v34 = 0;
  *a2 = 0;
  if ( a3 == nullptr )
    return v5;
  v31 = Curl_FormBoundary();
  LOWORD(v5) = 27;
  if ( v31 == nullptr )
    return v5;
  if ( a4 == nullptr )
    v6 = "Content-Type: multipart/form-data";
  v7 = sub_1A61FC0(&v32, nullptr, "%s; boundary=%s\r\n", v6, v31);
  if ( v7 != 0 )
  {
    ((void (*)(char *))Curl_cfree)(v31);
    return v7;
  }
  v30 = nullptr;
  v33 = v32;
  while ( 2 )
  {
    if ( v34 != 0 )
    {
      v5 = sub_1A61FC0(&v32, &v34, "\r\n");
      if ( v5 != 0 )
        break;
    }
    v5 = sub_1A61FC0(&v32, &v34, "--%s\r\n", v31);
    if ( v5 != 0 )
      break;
    v5 = sub_1A61FC0(&v32, &v34, "Content-Disposition: form-data; name=\"");
    if ( v5 != 0 )
      break;
    v5 = sub_1A61DF0(&v32, 0, (char *)a3[1], a3[2], &v34);
    if ( v5 != 0 )
      break;
    v5 = sub_1A61FC0(&v32, &v34, "\"");
    if ( v5 != 0 )
      break;
    if ( a3[9] != 0 )
    {
      v30 = Curl_FormBoundary();
      i = sub_1A61FC0(&v32, &v34, "\r\nContent-Type: multipart/mixed, boundary=%s\r\n", v30);
      if ( i != 0 )
      {
LABEL_28:
        v5 = i;
        break;
      }
      v9 = a3[9];
    }
    else
    {
      v9 = 0;
    }
    v29 = a3;
    if ( v9 != 0 )
    {
LABEL_17:
      v10 = 0;
      v11 = v29[11];
      if ( v11 != 0 )
        goto LABEL_18;
      v10 = sub_1A61D30((const char *)v29[3]);
      if ( v10 == 0 )
      {
        Curl_formclean(&v33);
        v5 = 27;
        ((void (*)(char *))Curl_cfree)(v31);
        return v5;
      }
      v11 = v29[11];
      if ( v11 != 0 )
      {
LABEL_18:
        v26 = v10;
        v12 = sub_1A61FC0(&v32, &v34, "\r\n--%s\r\nContent-Disposition: attachment; filename=\"%s\"", v30, v11);
        v13 = v26;
        v5 = v12;
        if ( v26 == 0 )
          goto LABEL_20;
      }
      else
      {
        v28 = v10;
        v5 = sub_1A61FC0(&v32, &v34, "\r\n--%s\r\nContent-Disposition: attachment; filename=\"%s\"", v30, v10);
        v13 = v28;
      }
      ((void (*)(int))Curl_cfree)(v13);
LABEL_20:
      if ( v5 == 0 )
        goto LABEL_21;
      break;
    }
    while ( 1 )
    {
      v20 = a3[10];
      if ( (v20 & 0x51) != 0 )
      {
        v21 = a3[11];
        v22 = 0;
        if ( v21 == 0 )
        {
          if ( (v20 & 1) == 0 )
            goto LABEL_20;
          v21 = sub_1A61D30((const char *)a3[3]);
          v22 = v21;
          if ( a3[11] != 0 )
            v21 = a3[11];
        }
        v27 = v22;
        v5 = sub_1A61FC0(&v32, &v34, "; filename=\"%s\"", v21);
        if ( v27 != 0 )
          ((void (*)(int))Curl_cfree)(v27);
        goto LABEL_20;
      }
LABEL_21:
      if ( v29[7] != 0 )
      {
        v5 = sub_1A61FC0(&v32, &v34, "\r\nContent-Type: %s", v29[7]);
        if ( v5 != 0 )
          goto LABEL_29;
      }
      if ( v29[8] != 0 )
      {
        v14 = (uint32_t *)v29[8];
        for ( i = sub_1A61FC0(&v32, &v34, "\r\n%s", *v14); i == 0; i = sub_1A61FC0(&v32, &v34, "\r\n%s", *v14) )
        {
          v14 = (uint32_t *)v14[1];
          if ( v14 == nullptr )
            goto LABEL_32;
        }
        goto LABEL_28;
      }
      if ( v5 != 0 )
        goto LABEL_29;
LABEL_32:
      v5 = sub_1A61FC0(&v32, &v34, "\r\n\r\n");
      if ( v5 != 0 )
        goto LABEL_29;
      v16 = a3[10];
      if ( (v16 & 3) == 0 )
      {
        if ( (v16 & 0x10) != 0 )
        {
          v17 = sub_1A61DF0(&v32, 1u, (char *)a3[5], a3[6], &v34);
        }
        else
        {
          size = a3[4];
          if ( (v16 & 0x40) != 0 )
            v17 = sub_1A61DF0(&v32, 2u, (char *)a3[12], size, &v34);
          else
            v17 = sub_1A61DF0(&v32, 1u, (char *)a3[3], size, &v34);
        }
        goto LABEL_37;
      }
      if ( curl_strequal("-", (char *)v29[3]) == 0 )
      {
        v24 = fopen((const char *)v29[3], "rb");
        if ( v24 == nullptr )
        {
          if ( a1 != 0 )
            Curl_failf(a1, "couldn't open file \"%s\"\n", v29[3]);
          v5 = 26;
          *a2 = 0;
          goto LABEL_29;
        }
        if ( v24 != stdin )
        {
          fclose(v24);
          v17 = sub_1A61DF0(&v32, 3u, (char *)v29[3], 0, &v34);
LABEL_37:
          v5 = v17;
          v18 = v17 == 0;
          goto LABEL_38;
        }
      }
      while ( 1 )
      {
        v23 = fread(ptr, 1u, 0x200u, stdin);
        if ( v23 == 0 )
          break;
        i = sub_1A61DF0(&v32, 1u, ptr, v23, &v34);
        if ( i != 0 )
          goto LABEL_28;
      }
      v18 = true;
LABEL_38:
      v19 = (int *)v29[9];
      v29 = v19;
      if ( !v18 || v19 == nullptr )
        break;
      if ( a3[9] != 0 )
        goto LABEL_17;
    }
    if ( v5 != 0 )
    {
      i = v5;
      goto LABEL_28;
    }
    if ( a3[9] == 0
      || (v5 = sub_1A61FC0(&v32, &v34, "\r\n--%s--", v30), ((void (*)(char *))Curl_cfree)(v30), v5 == 0) )
    {
      a3 = (int *)*a3;
      if ( a3 != nullptr )
        continue;
      v5 = sub_1A61FC0(&v32, &v34, "\r\n--%s--\r\n", v31);
      if ( v5 == 0 )
      {
        *a5 = v34;
        ((void (*)(char *))Curl_cfree)(v31);
        *a2 = (uint32_t)(uintptr_t)(v33);
        return 0;
      }
    }
    break;
  }
LABEL_29:
  Curl_formclean(&v33);
  ((void (*)(char *))Curl_cfree)(v31);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: curl_formget  (binary VA: 0x1a63370)
// Original: curl_formget
// ----------------------------------------------------------------------------
int curl_formget(int *a1, int a2, int (*a3)(int, uint8_t *, size_t))
{
  int result;
  uint32_t *v4;
  size_t v5;
  int v6;
  size_t v7;
  typedef size_t _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int64_t _g4_t_v10;
  typedef FILE *_g4_t_v11[2];
  typedef FILE *_g4_t_stream;
  typedef uint8_t _g4_t_v13[8220];
  enum : size_t {
    _g4_s0 = 8336u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_stream)) > _g4_s4 ? (40u + sizeof(_g4_t_stream)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  result = Curl_getformdata(0, &v9, a1, nullptr, &v10);
  if ( result == 0 )
  {
    v4 = v9;
    if ( v9 != nullptr )
    {
      while ( (unsigned int)(v4[1] - 2) > 1 )
      {
        v5 = v4[3];
        if ( v5 != a3(a2, (uint8_t *)v4[2], v5) )
          goto LABEL_14;
LABEL_5:
        v4 = (uint32_t *)*v4;
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      Curl_FormInit(v11, (int)(uintptr_t)(v4));
      while ( 1 )
      {
        v7 = sub_1A61C40((int)(uintptr_t)(v11), v13, 0x2000u);
        if ( v7 == -1 )
          break;
        v8 = v7;
        v6 = a3(a2, v13, v7);
        if ( v6 != v8 )
          break;
        if ( v6 == 0 )
          goto LABEL_5;
      }
      if ( stream != nullptr )
        fclose(stream);
LABEL_14:
      Curl_formclean(&v9);
      return -1;
    }
    else
    {
LABEL_6:
      Curl_formclean(&v9);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_getenv  (binary VA: 0x1a634c0)
// Original: curl_getenv
// ----------------------------------------------------------------------------
int curl_getenv(char *name)
{
  char *v1;
  int result;

  v1 = getenv(name);
  result = 0;
  if ( v1 != nullptr && *v1 != 0 )
    return (int)G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_http_done  (binary VA: 0x1a63ad0)
// Original: Curl_http_done
// ----------------------------------------------------------------------------
int Curl_http_done(int a1, int a2, char a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v8;

  v3 = *(uint32_t *)a1;
  v4 = *(uint32_t *)(*(uint32_t *)a1 + 34260);
  Curl_unencode_cleanup((int *)a1);
  *(uint32_t *)(a1 + 584) = *(uint32_t *)(v3 + 352);
  *(uint32_t *)(a1 + 588) = *(uint32_t *)(v3 + 280);
  *(uint32_t *)(a1 + 576) = *(uint32_t *)(v3 + 320);
  *(uint32_t *)(a1 + 580) = *(uint32_t *)(v3 + 400);
  if ( v4 == 0 )
    return 0;
  v5 = *(uint32_t **)(v4 + 80);
  if ( v5 != nullptr )
  {
    v8 = *(uint32_t *)(v4 + 80);
    ((void (*)(uint32_t))Curl_cfree)(*v5);
    ((void (*)(int))Curl_cfree)(v8);
    *(uint32_t *)(v4 + 80) = 0;
  }
  v6 = *(uint32_t *)(v3 + 532);
  if ( v6 == 3 )
  {
    *(uint64_t *)(v3 + 44) = *(uint64_t *)(v4 + 32) + *(uint64_t *)(v4 + 24);
    Curl_formclean((uint32_t **)v4);
    if ( *(uint32_t *)(v4 + 48) != 0 )
    {
      fclose(*(FILE **)(v4 + 48));
      *(uint32_t *)(v4 + 48) = 0;
    }
  }
  else if ( v6 == 4 )
  {
    *(uint64_t *)(v3 + 44) = *(uint64_t *)(v4 + 32) + *(uint64_t *)(v4 + 24);
  }
  if ( a2 == 0
    && a3 == 0
    && *(uint8_t *)(a1 + 447) == 0
    && *(uint64_t *)(v4 + 24) + *(int *)(v3 + 60) - *(int *)(v3 + 64) <= 0LL )
  {
    Curl_failf(v3, "Empty reply from server");
    return 52;
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: Curl_http_connect  (binary VA: 0x1a64120)
// Original: Curl_http_connect
// ----------------------------------------------------------------------------
int Curl_http_connect(int a1, uint8_t *a2)
{
  bool v2;
  int v3;
  int result;

  v2 = *(uint8_t *)(a1 + 448) == 0;
  v3 = *(uint32_t *)a1;
  *(uint8_t *)(a1 + 436) = 0;
  if ( v2
    || *(uint8_t *)(a1 + 439) == 0
    || (result = Curl_proxyCONNECT((void *)(uintptr_t)a1, 0, *(uint32_t *)(a1 + 128), *(uint16_t *)(a1 + 156))) == 0 )
  {
    if ( *(uint8_t *)(a1 + 449) != 0 )
    {
      return 0;
    }
    else if ( (*(uint8_t *)(*(uint32_t *)(a1 + 484) + 60) & 1) != 0 )
    {
      if ( *(uint32_t *)(v3 + 1188) == 2 )
      {
        return sub_1A63840(a1, a2);
      }
      else
      {
        result = Curl_ssl_connect((uint32_t *)a1, 0);
        if ( result == 0 )
          *a2 = 1;
      }
    }
    else
    {
      *a2 = 1;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_checkheaders  (binary VA: 0x1a64220)
// Original: Curl_checkheaders
// ----------------------------------------------------------------------------
int Curl_checkheaders(int a1, char *s)
{
  size_t v2;
  uint32_t *v3;
  int result;

  v2 = strlen(s);
  v3 = *(uint32_t **)(a1 + 480);
  result = 0;
  if ( v3 != nullptr )
  {
    do
    {
      if ( Curl_raw_nequal(*v3, s, v2) != 0 )
        return *v3;
      v3 = (uint32_t *)v3[1];
    }
    while ( v3 != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_http_auth_act  (binary VA: 0x1a64580)
// Original: Curl_http_auth_act
// ----------------------------------------------------------------------------
int Curl_http_auth_act(uint8_t *a1)
{
  int result;
  int v2;
  int v3;
  char v4;
  int v5;
  char v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;

  result = 0;
  v2 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(*(uint32_t *)a1 + 132);
  if ( (unsigned int)(v3 - 100) > 0x63 )
  {
    if ( *(uint8_t *)(v2 + 34144) != 0 )
      return *(uint8_t *)(v2 + 660) != 0 ? 0x16 : 0;
    v4 = 0;
    if ( a1[440] != 0 && (v3 == 401 || a1[450] != 0 && v3 <= 299) )
    {
      v5 = *(uint32_t *)(v2 + 34120) & *(uint32_t *)(v2 + 34112);
      if ( (v5 & 4) != 0 )
      {
        *(uint32_t *)(v2 + 34116) = 4;
      }
      else if ( (v5 & 2) != 0 )
      {
        *(uint32_t *)(v2 + 34116) = 2;
      }
      else if ( (v5 & 8) != 0 )
      {
        *(uint32_t *)(v2 + 34116) = 8;
      }
      else
      {
        if ( (v5 & 1) == 0 )
        {
          *(uint32_t *)(v2 + 34116) = 0x40000000;
          *(uint32_t *)(v2 + 34120) = 0;
          *(uint8_t *)(v2 + 34144) = 1;
          v4 = 0;
          goto LABEL_13;
        }
        *(uint32_t *)(v2 + 34116) = 1;
      }
      *(uint32_t *)(v2 + 34120) = 0;
      v4 = 1;
    }
LABEL_13:
    v6 = 0;
    if ( a1[441] != 0 && (v3 == 407 || a1[450] != 0 && v3 <= 299) )
    {
      v12 = *(uint32_t *)(v2 + 34136) & *(uint32_t *)(v2 + 34128);
      if ( (v12 & 4) != 0 )
      {
        *(uint32_t *)(v2 + 34132) = 4;
      }
      else if ( (v12 & 2) != 0 )
      {
        *(uint32_t *)(v2 + 34132) = 2;
      }
      else if ( (v12 & 8) != 0 )
      {
        *(uint32_t *)(v2 + 34132) = 8;
      }
      else
      {
        if ( (v12 & 1) == 0 )
        {
          *(uint32_t *)(v2 + 34132) = 0x40000000;
          *(uint32_t *)(v2 + 34136) = 0;
          *(uint8_t *)(v2 + 34144) = 1;
          v6 = 0;
          goto LABEL_17;
        }
        *(uint32_t *)(v2 + 34132) = 1;
      }
      *(uint32_t *)(v2 + 34136) = 0;
      v6 = 1;
    }
LABEL_17:
    if ( v4 != 0 || v6 != 0 )
    {
      Curl_safefree(*(uint32_t *)(v2 + 244));
      v7 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(v2 + 916)));
      *(uint32_t *)(v2 + 244) = (uint32_t)(uintptr_t)(v7);
      result = 27;
      if ( v7 == nullptr )
        return result;
      v8 = *(uint32_t *)(v2 + 532);
      if ( v8 != 5 && v8 != 1 && a1[451] == 0 )
      {
        result = sub_1A63EA0((int)(uintptr_t)(a1));
        if ( result != 0 )
          return result;
      }
    }
    else if ( *(int *)(v2 + 132) <= 299 && *(uint8_t *)(v2 + 34124) == 0 && a1[450] != 0 )
    {
      v10 = *(uint32_t *)(v2 + 532);
      if ( v10 != 5 && v10 != 1 )
      {
        v11 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(v2 + 916)));
        *(uint32_t *)(v2 + 244) = (uint32_t)(uintptr_t)(v11);
        result = 27;
        if ( v11 == nullptr )
          return result;
        *(uint8_t *)(v2 + 34124) = 1;
      }
    }
    v9 = sub_1A63770(a1);
    result = 0;
    if ( v9 != 0 )
    {
      Curl_failf(v2, "The requested URL returned error: %d", *(uint32_t *)(v2 + 132));
      return 22;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_http_output_auth  (binary VA: 0x1a64880)
// Original: Curl_http_output_auth
// ----------------------------------------------------------------------------
int Curl_http_output_auth(int a1, int a2, char *a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;

  v4 = a2;
  v5 = *(uint32_t *)a1;
  if ( (*(uint8_t *)(a1 + 439) == 0 || *(uint8_t *)(a1 + 441) == 0) && *(uint8_t *)(a1 + 440) == 0 )
  {
    *(uint8_t *)(v5 + 34124) = 1;
    *(uint8_t *)(v5 + 34140) = 1;
    return 0;
  }
  v6 = *(uint32_t *)(v5 + 34112);
  if ( v6 != 0 && *(uint32_t *)(v5 + 34116) == 0 )
    *(uint32_t *)(v5 + 34116) = v6;
  v7 = *(uint32_t *)(v5 + 34128);
  if ( v7 != 0 && *(uint32_t *)(v5 + 34132) == 0 )
    *(uint32_t *)(v5 + 34132) = v7;
  if ( *(uint8_t *)(a1 + 439) != 0 && *(uint8_t *)(a1 + 448) == a4 )
  {
    result = sub_1A64290(a1, v5 + 34128, a2, a3, 1);
    v4 = a2;
    if ( result != 0 )
      return result;
  }
  else
  {
    *(uint8_t *)(v5 + 34140) = 1;
  }
  if ( *(uint8_t *)(v5 + 33996) == 0 )
    return sub_1A64290(a1, v5 + 34112, v4, a3, 0);
  if ( *(uint8_t *)(a1 + 454) != 0 )
    return sub_1A64290(a1, v5 + 34112, v4, a3, 0);
  v8 = *(uint32_t *)(v5 + 34000);
  if ( v8 == 0 )
    return sub_1A64290(a1, v5 + 34112, v4, a3, 0);
  if ( *(uint8_t *)(v5 + 663) != 0 )
    return sub_1A64290(a1, v5 + 34112, v4, a3, 0);
  v11 = v4;
  v10 = Curl_raw_equal(v8, *(uint32_t *)(a1 + 128));
  v4 = v11;
  if ( v10 != 0 )
    return sub_1A64290(a1, v5 + 34112, v4, a3, 0);
  *(uint8_t *)(v5 + 34124) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_http_input_auth  (binary VA: 0x1a64a20)
// Original: Curl_http_input_auth
// ----------------------------------------------------------------------------
int Curl_http_input_auth(int *a1, int a2, int a3)
{
  int v3;
  uint8_t *v4;
  int v5;
  uint32_t *v7;

  v3 = *a1;
  if ( a2 == 407 )
  {
    v4 = (uint8_t *)(a3 + 19);
    v7 = (uint32_t *)(v3 + 34328);
    v5 = v3 + 34128;
  }
  else
  {
    v4 = (uint8_t *)(a3 + 17);
    v7 = (uint32_t *)(v3 + 34332);
    v5 = v3 + 34112;
  }
  while ( *v4 != 0 && isspace((uint8_t)*v4) != 0 )
    ++v4;
  if ( Curl_raw_nequal("NTLM", v4, 4) == 0 )
  {
    if ( Curl_raw_nequal("Digest", v4, 6) != 0 )
    {
      if ( (*(uint8_t *)(v5 + 8) & 2) != 0 )
      {
        Curl_infof(v3, "Ignoring duplicate digest auth header.\n");
        return 0;
      }
      *v7 |= 2u;
      *(uint32_t *)(v5 + 8) |= 2u;
      if ( Curl_input_digest(a1, a2 == 407, v4) == 4 )
        return 0;
    }
    else
    {
      if ( Curl_raw_nequal("Basic", v4, 5) == 0 )
        return 0;
      *v7 |= 1u;
      *(uint32_t *)(v5 + 8) |= 1u;
      if ( *(uint32_t *)(v5 + 4) != 1 )
        return 0;
      *(uint32_t *)(v5 + 8) = 0;
    }
LABEL_12:
    Curl_infof(v3, "Authentication problem. Ignoring this.\n");
    *(uint8_t *)(v3 + 34144) = 1;
    return 0;
  }
  *v7 |= 8u;
  *(uint32_t *)(v5 + 8) |= 8u;
  if ( *(uint32_t *)(v5 + 4) != 8 )
    return 0;
  if ( Curl_input_ntlm(a1, a2 == 407, v4) == 1 )
    goto LABEL_12;
  *(uint8_t *)(v3 + 34144) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_add_buffer_init  (binary VA: 0x1a64be0)
// Original: Curl_add_buffer_init
// ----------------------------------------------------------------------------
void * Curl_add_buffer_init()
{
  return (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0xCu));
}

// ----------------------------------------------------------------------------
// Function: Curl_add_buffer_send  (binary VA: 0x1a64c10)
// Original: Curl_add_buffer_send
// ----------------------------------------------------------------------------
int Curl_add_buffer_send(char **a1, int *a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  size_t v8;
  char *v9;
  int v10;
  char *v11;
  size_t n;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_src;
  typedef size_t _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_src)) > _g4_s4 ? (16u + sizeof(_g4_t_src)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  v19 = (size_t)a1[2];
  v17 = a2[a5 + 76];
  v5 = *(uint32_t *)(*a2 + 34260);
  src = *a1;
  if ( (*(uint8_t *)(a2[120] + 60) & 1) != 0 )
  {
    n = 0x4000;
    if ( v19 <= 0x4000 )
      n = (size_t)a1[2];
    v15 = n;
    memcpy((void *)(*a2 + 17601), src, n);
    src = (char *)(*a2 + 17601);
    v6 = Curl_write((int)(uintptr_t)(a2), v17, (int)(uintptr_t)(src), v15, v21);
  }
  else
  {
    v6 = Curl_write((int)(uintptr_t)(a2), v17, (int)(uintptr_t)(src), (int)(uintptr_t)(a1[2]), v21);
  }
  v14 = v6;
  if ( v6 != 0 )
    goto LABEL_13;
  v7 = v21[0];
  v8 = v21[0];
  if ( v19 - a4 <= v21[0] )
    v8 = v19 - a4;
  v20 = v21[0] - v8;
  if ( *(uint8_t *)(*a2 + 676) != 0 )
  {
    v16 = v8;
    Curl_debug(*a2, 2u, src, v8, (int)(uintptr_t)(a2));
    v7 = v21[0];
    if ( v16 < v21[0] )
    {
      Curl_debug(*a2, 4u, &src[v16], v20, (int)(uintptr_t)(a2));
      v7 = v21[0];
    }
  }
  if ( v20 != 0 )
    *(uint64_t *)(v5 + 32) +=g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(v20), 0);
  *a3 += v7;
  if ( v5 == 0 )
  {
    if ( v19 != v7 )
      return 55;
    *((uint8_t *)a2 + 545) = 0;
LABEL_13:
    v11 = *a1;
    if ( *a1 == nullptr )
    {
LABEL_15:
      ((void (*)(char **))Curl_cfree)(a1);
      return v14;
    }
LABEL_14:
    ((void (*)(char *))Curl_cfree)(v11);
    goto LABEL_15;
  }
  if ( v19 == v7 )
  {
    *(uint32_t *)(v5 + 76) = 2;
    v11 = *a1;
    if ( *a1 == nullptr )
      goto LABEL_15;
    goto LABEL_14;
  }
  v9 = *a1;
  *(uint32_t *)(v5 + 56) = a2[146];
  *(uint32_t *)(v5 + 60) = a2[147];
  v10 = *(uint32_t *)(v5 + 12);
  *(uint32_t *)(v5 + 68) = *(uint32_t *)(v5 + 4);
  *(uint32_t *)(v5 + 64) = v10;
  *(uint32_t *)(v5 + 72) = *(uint32_t *)(v5 + 8);
  a2[146] = (int)(uintptr_t)(sub_1A63890);
  a2[147] = (int)(uintptr_t)(a2);
  *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(&v9[v7]);
  *(uint32_t *)(v5 + 4) = v19 - v7;
  *(uint32_t *)(v5 + 8) = 0;
  *(uint32_t *)(v5 + 80) = (uint32_t)(uintptr_t)(a1);
  *(uint32_t *)(v5 + 76) = 1;
  return v14;
}

// ----------------------------------------------------------------------------
// Function: Curl_add_buffer  (binary VA: 0x1a64e90)
// Original: Curl_add_buffer
// ----------------------------------------------------------------------------
int Curl_add_buffer(char **a1, void *src, int n)
{
  signed int v3;
  char *v4;
  size_t v5;

  v3 = (signed int)(uintptr_t)(a1[2]);
  v4 = *a1;
  if ( ~n < (unsigned int)v3 )
    goto LABEL_15;
  if ( v4 != nullptr && n + v3 <= (unsigned int)(uintptr_t)(a1[1] - 1) )
    goto LABEL_12;
  v5 = 0xFFFFFFFF;
  if ( n >= 0 && v3 >= 0 && ~(2 * n) >= (unsigned int)(2 * v3) )
    v5 = 2 * (n + v3);
  if ( v4 != nullptr )
    v4 = (char *)((int (*)(char *, size_t))Curl_crealloc)(v4, v5);
  else
    v4 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v5);
  if ( v4 == nullptr )
  {
    v4 = *a1;
LABEL_15:
    Curl_safefree((int)(uintptr_t)(v4));
    ((void (*)(char **))Curl_cfree)(a1);
    return 27;
  }
  *a1 = v4;
  a1[1] = (char *)v5;
  v3 = (signed int)(uintptr_t)(a1[2]);
LABEL_12:
  memcpy(&v4[v3], src, n);
  a1[2] += n;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_add_bufferf  (binary VA: 0x1a64f90)
// Original: Curl_add_bufferf
// ----------------------------------------------------------------------------
int Curl_add_bufferf(char **a1, char *a2, ...)
{
  const char *s;
  char *v3;
  size_t v4;
  int v6;
  va_list va;

  va_start(va, a2);
  s = (const char *)curl_mvaprintf(a2, g4_va_cast<unsigned int *>(va));
  v3 = (char *)s;
  if ( s != nullptr )
  {
    v4 = strlen(s);
    v6 = Curl_add_buffer(a1, v3, v4);
    ((void (*)(char *))Curl_cfree)(v3);
    return v6;
  }
  else
  {
    if ( *a1 != nullptr )
      ((void (*)(char *))Curl_cfree)(*a1);
    ((void (*)(char **))Curl_cfree)(a1);
    return 27;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_compareheader  (binary VA: 0x1a65030)
// Original: Curl_compareheader
// ----------------------------------------------------------------------------
int Curl_compareheader(int a1, char *s, char *a3)
{
  size_t v3;
  int v4;
  int v5;
  const char *v6;
  uint8_t i;
  char *v8;
  size_t v9;
  size_t v10;
  size_t v11;

  v3 = strlen(s);
  v4 = Curl_raw_nequal(a1, s, v3);
  v5 = 0;
  if ( v4 == 0 )
    return v5;
  v6 = (const char *)(a1 + v3);
  for ( i = *v6; *v6 != 0; i = *++v6 )
  {
    if ( isspace(i) == 0 )
      break;
  }
  v8 = (char *)(strchr(v6, 13));
  if ( v8 == nullptr )
  {
    v8 = (char *)(strchr(v6, 10));
    if ( v8 == nullptr )
      v8 = (char *)(strchr(v6, 0));
  }
  v9 = v8 - v6;
  v10 = strlen(a3);
  v5 = 0;
  v11 = v10;
  if ( v9 < v10 )
    return v5;
  do
  {
    if ( Curl_raw_nequal(v6, a3, v11) != 0 )
      return 1;
    --v9;
    ++v6;
  }
  while ( v11 <= v9 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_add_custom_headers  (binary VA: 0x1a65200)
// Original: Curl_add_custom_headers
// ----------------------------------------------------------------------------
int Curl_add_custom_headers(int a1, char **a2)
{
  int v2;
  int result;
  const char *v4;
  char *v5;
  uint8_t v6;
  uint8_t *v7;

  v2 = *(uint32_t *)(*(uint32_t *)a1 + 480);
  result = 0;
  if ( v2 != 0 )
  {
    while ( 1 )
    {
      v4 = *(const char **)v2;
      v5 = (char *)(strchr(*(const char **)v2, 58));
      if ( v5 == nullptr )
        goto LABEL_16;
      v6 = v5[1];
      v7 = (uint8_t *)(v5 + 1);
      if ( v6 == 0 )
        goto LABEL_16;
      while ( isspace(v6) != 0 )
      {
        v6 = *++v7;
        if ( *v7 == 0 )
          goto LABEL_16;
      }
      if ( *(uint32_t *)(a1 + 524) != 0 )
      {
        if ( Curl_raw_nequal("Host:", v4, 5) != 0 )
          goto LABEL_16;
        v4 = *(const char **)v2;
      }
      if ( *(uint32_t *)(*(uint32_t *)a1 + 532) == 3 )
      {
        if ( Curl_raw_nequal("Content-Type:", v4, 13) != 0 )
          goto LABEL_16;
        v4 = *(const char **)v2;
      }
      if ( *(uint8_t *)(a1 + 450) != 0 )
      {
        if ( Curl_raw_nequal("Content-Length", v4, 14) != 0 )
          goto LABEL_16;
        v4 = *(const char **)v2;
      }
      if ( *(uint32_t *)(a1 + 536) == 0 )
        goto LABEL_15;
      if ( Curl_raw_nequal("Connection", v4, 10) == 0 )
      {
        v4 = *(const char **)v2;
LABEL_15:
        result = Curl_add_bufferf(a2, "%s\r\n", v4);
        if ( result != 0 )
          return result;
      }
LABEL_16:
      v2 = *(uint32_t *)(v2 + 4);
      if ( v2 == 0 )
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_add_timecondition  (binary VA: 0x1a65380)
// Original: Curl_add_timecondition
// ----------------------------------------------------------------------------
int Curl_add_timecondition(int a1, char **a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[6];
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v7)) > _g4_s1 ? (60u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v8)) > _g4_s2 ? (68u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (92u + sizeof(_g4_t_v9)) > _g4_s3 ? (92u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 68u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 92u);

  v2 = Curl_gmtime(*(uint32_t *)(a1 + 528), (int)(uintptr_t)(v8));
  if ( v2 != 0 )
  {
    v7 = v2;
    Curl_failf(a1, "Invalid TIMEVALUE\n");
    return v7;
  }
  else
  {
    v3 = 6;
    if ( v9 != 0 )
      v3 = v9 - 1;
    curl_msnprintf(
      a1 + 1216,
      0x3FFF,
      (int)(uintptr_t)("%s, %02d %s %4d %02d:%02d:%02d GMT"),
      *(&Curl_wkday + v3),
      v8[3],
      (&Curl_month)[v8[4]],
      v8[5] + 1900,
      v8[2],
      v8[1],
      v8[0]);
    v4 = *(uint32_t *)(a1 + 524);
    v6 = a1 + 1216;
    if ( v4 == 2 )
    {
      return Curl_add_bufferf(a2, "If-Unmodified-Since: %s\r\n", v6);
    }
    else if ( v4 == 3 )
    {
      return Curl_add_bufferf(a2, "Last-Modified: %s\r\n", v6);
    }
    else
    {
      return Curl_add_bufferf(a2, "If-Modified-Since: %s\r\n", v6);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_http  (binary VA: 0x1a65500)
// Original: Curl_http
// ----------------------------------------------------------------------------
int Curl_http(int *a1, uint8_t *a2)
{
  int v2;
  int v3;
  unsigned int v4;
  char *v5;
  int v6;
  int v7;
  char *v8;
  uint16_t v9;
  int v10;
  const char *v11;
  int v12;
  const char *v13;
  int v14;
  int v16;
  const char *s;
  const char *v18;
  char *v19;
  const char *v20;
  const char *v21;
  char *v22;
  char *v23;
  char *v24;
  char *v25;
  char v26;
  int v27;
  const char *v28;
  int v29;
  int v30;
  const char *v31;
  int v32;
  size_t v33;
  void *v34;
  uint8_t *v35;
  void *v36;
  void *v37;
  void *v38;
  void *v39;
  void *v40;
  uint8_t *v41;
  void *v42;
  void *v43;
  void *v44;
  char *v45;
  bool v46; // di
  const char *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  const char *v54;
  char *v55;
  int (*v56)(int, uint32_t, int, uint32_t);
  int v57;
  const char *v58;
  const char *v59;
  char *v60;
  char *v61;
  char *v62;
  int v63;
  const char *v64;
  int v65;
  int v66;
  int64_t v67; // rax
  int64_t v68; // rax
  unsigned int v69;
  unsigned int v70;
  int64_t v71; // rax
  int64_t v72; // rax
  int64_t v73; // rax
  int v74;
  bool v75;
  const char *v76;
  char *v77;
  char v78;
  char *v79;
  size_t v80;
  char v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  uint32_t **v88;
  int v89;
  void *v90;
  int v91;
  const char *v92;
  int64_t v93; // rax
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef char *_g4_t_v97;
  typedef char *_g4_t_v98;
  typedef char *_g4_t_v99;
  typedef char *_g4_t_v100;
  typedef char *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef const char *_g4_t_v103;
  typedef void *_g4_t_v104;
  typedef int64_t _g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef int64_t _g4_t_v107;
  typedef int64_t _g4_t_v108;
  typedef const char *_g4_t_v109;
  typedef void *_g4_t_v110;
  typedef char *_g4_t_v111;
  typedef char *_g4_t_v112;
  typedef char *_g4_t_v113;
  typedef char *_g4_t_v114;
  typedef bool _g4_t_v115;
  typedef size_t _g4_t_v116;
  typedef void *_g4_t_v117;
  typedef char *_g4_t_v118;
  typedef char *_g4_t_v119;
  typedef size_t _g4_t_n;
  typedef char **_g4_t_v121;
  typedef const char *_g4_t_v122;
  typedef int _g4_t_v123;
  typedef void *_g4_t_v124;
  typedef void *_g4_t_v125;
  typedef void *_g4_t_v126;
  typedef const char *_g4_t_v127;
  typedef size_t _g4_t_v128;
  typedef uint32_t _g4_t_v129[2];
  typedef char _g4_t_v130;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v94)) > _g4_s0 ? (8u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v95)) > _g4_s1 ? (12u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v96)) > _g4_s2 ? (48u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v97)) > _g4_s3 ? (56u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v98)) > _g4_s4 ? (60u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v99)) > _g4_s5 ? (60u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v100)) > _g4_s6 ? (60u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v101)) > _g4_s7 ? (60u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v102)) > _g4_s8 ? (64u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v103)) > _g4_s9 ? (64u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v104)) > _g4_s10 ? (64u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v105)) > _g4_s11 ? (64u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v106)) > _g4_s12 ? (72u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v107)) > _g4_s13 ? (72u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v108)) > _g4_s14 ? (72u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v109)) > _g4_s15 ? (84u + sizeof(_g4_t_v109)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v110)) > _g4_s16 ? (84u + sizeof(_g4_t_v110)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v111)) > _g4_s17 ? (88u + sizeof(_g4_t_v111)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v112)) > _g4_s18 ? (92u + sizeof(_g4_t_v112)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v113)) > _g4_s19 ? (92u + sizeof(_g4_t_v113)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v114)) > _g4_s20 ? (92u + sizeof(_g4_t_v114)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v115)) > _g4_s21 ? (96u + sizeof(_g4_t_v115)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v116)) > _g4_s22 ? (96u + sizeof(_g4_t_v116)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v117)) > _g4_s23 ? (96u + sizeof(_g4_t_v117)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v118)) > _g4_s24 ? (112u + sizeof(_g4_t_v118)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v119)) > _g4_s25 ? (112u + sizeof(_g4_t_v119)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_n)) > _g4_s26 ? (116u + sizeof(_g4_t_n)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v121)) > _g4_s27 ? (116u + sizeof(_g4_t_v121)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v122)) > _g4_s28 ? (120u + sizeof(_g4_t_v122)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v123)) > _g4_s29 ? (124u + sizeof(_g4_t_v123)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v124)) > _g4_s30 ? (128u + sizeof(_g4_t_v124)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v125)) > _g4_s31 ? (132u + sizeof(_g4_t_v125)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v126)) > _g4_s32 ? (136u + sizeof(_g4_t_v126)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v127)) > _g4_s33 ? (140u + sizeof(_g4_t_v127)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v128)) > _g4_s34 ? (144u + sizeof(_g4_t_v128)) : _g4_s34,
    _g4_s36 = (151u + sizeof(_g4_t_v129)) > _g4_s35 ? (151u + sizeof(_g4_t_v129)) : _g4_s35,
    _g4_s37 = (159u + sizeof(_g4_t_v130)) > _g4_s36 ? (159u + sizeof(_g4_t_v130)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 8u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 12u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 48u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 56u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 60u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 60u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 60u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 64u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 64u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 64u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 64u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 72u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 72u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 84u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 84u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 88u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 92u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 92u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 96u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 96u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 96u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 112u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 112u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 116u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 116u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 120u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 124u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 128u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 132u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 136u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 140u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 144u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 151u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 159u);

  v2 = (int)(uintptr_t)(a1);
  v129[0] = 0;
  v129[1] = 0;
  v130 = 0;
  v3 = *a1;
  v118 = (char *)a1[32];
  v112 = *(char **)(*a1 + 34228);
  v4 = *(uint32_t *)(*a1 + 532);
  *a2 = 1;
  v106 = v4;
  Curl_reset_reqproto(a1);
  v111 = *(char **)(v3 + 34260);
  if ( v111 == nullptr )
  {
    v55 = (char *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 84);
    v111 = v55;
    v102 = 27;
    if ( v55 == nullptr )
      return v102;
    *(uint32_t *)(v3 + 34260) = (uint32_t)(uintptr_t)(v55);
  }
  if ( *(uint8_t *)(v3 + 33996) == 0 )
  {
    if ( *(uint32_t *)(v3 + 34000) != 0 )
      ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v3 + 34000));
    v5 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), (const char *)a1[32]));
    *(uint32_t *)(v3 + 34000) = (uint32_t)(uintptr_t)(v5);
    v102 = 27;
    if ( v5 == nullptr )
      return v102;
  }
  if ( (*(uint8_t *)(a1[120] + 56) & 5) != 0 )
  {
    v16 = 4;
    if ( *(uint8_t *)(v3 + 669) == 0 )
      v16 = v106;
    v106 = v16;
    v109 = *(const char **)(v3 + 740);
    if ( v109 != nullptr )
      goto LABEL_8;
  }
  else
  {
    v109 = *(const char **)(v3 + 740);
    if ( v109 != nullptr )
      goto LABEL_8;
  }
  v109 = "HEAD";
  if ( *(uint8_t *)(v3 + 667) == 0 )
  {
    v109 = "PUT";
    if ( v106 != 4 )
    {
      if ( v106 > 4 )
      {
        v109 = "HEAD";
        if ( v106 == 5 )
          goto LABEL_8;
      }
      else if ( v106 >= 2 )
      {
        v109 = "POST";
        goto LABEL_8;
      }
      v109 = (const char *)&off_1B6AF81;
    }
  }
LABEL_8:
  if ( Curl_checkheaders(v3, "User-Agent:") != 0 && a1[126] != 0 )
  {
    ((void (*)(int))Curl_cfree)(a1[126]);
    a1[126] = 0;
  }
  v6 = Curl_http_output_auth((int)(uintptr_t)(a1), (int)(uintptr_t)(v109), v112, 0);
  v102 = v6;
  if ( v6 != 0 )
    return v102;
  if ( *(uint8_t *)(v3 + 34125) != 0 || *(uint8_t *)(v3 + 34141) != 0 )
    LOBYTE(v6) = v106 != 1 && v106 != 5;
  *((uint8_t *)a1 + 450) = v6;
  Curl_safefree(a1[130]);
  if ( *(uint32_t *)(v3 + 924) != 0 && Curl_checkheaders(v3, "Referer:") == 0 )
    a1[130] = curl_maprintf("Referer: %s\r\n", *(uint32_t *)(v3 + 924));
  else
    a1[130] = 0;
  v123 = 0;
  if ( *(uint32_t *)(v3 + 732) != 0 && Curl_checkheaders(v3, "Cookie:") == 0 )
    v123 = *(uint32_t *)(v3 + 732);
  if ( Curl_checkheaders(v3, "Accept-Encoding:") == 0 && *(uint32_t *)(v3 + 748) != 0 )
  {
    Curl_safefree(a1[127]);
    v49 = curl_maprintf("Accept-Encoding: %s\r\n", *(uint32_t *)(v3 + 748));
    a1[127] = v49;
    v102 = 27;
    if ( v49 == 0 )
      return v102;
  }
  if ( Curl_checkheaders(v3, "TE:") == 0 && *(uint8_t *)(v3 + 662) != 0 )
  {
    v50 = Curl_checkheaders(v3, "Connection:");
    Curl_safefree(a1[134]);
    v51 = v50 != 0 ? curl_maprintf("%s, TE\r\nTE: gzip\r\n", v50) : (int)G4_MEM_CALL((uintptr_t)(Curl_cstrdup), "Connection: TE\r\nTE: gzip\r\n");
    a1[134] = v51;
    v102 = 27;
    if ( v51 == 0 )
      return v102;
  }
  v7 = Curl_checkheaders(v3, "Transfer-Encoding:");
  if ( v7 != 0 )
  {
    *(uint8_t *)(v3 + 257) = Curl_compareheader(v7, "Transfer-Encoding:", "chunked");
    v122 = (const char *)&unk_1B15112;
  }
  else if ( (*(uint8_t *)(a1[120] + 56) & 1) != 0
         && *(uint8_t *)(v3 + 669) != 0
         && (*(uint32_t *)(v3 + 444) & *(uint32_t *)(v3 + 440)) == -1 )
  {
    if ( *((uint8_t *)a1 + 450) != 0 )
    {
      if ( *(uint8_t *)(v3 + 257) == 0 )
      {
        v122 = (const char *)&unk_1B15112;
        goto LABEL_24;
      }
    }
    else
    {
      v52 = *(uint32_t *)(v3 + 536);
      if ( v52 != 2 && (v52 == 1 || (v53 = a1[70]) != 11 && (v53 == 10 || *(uint32_t *)(v3 + 34200) == 10)) )
      {
        Curl_failf(v3, "Chunky upload is not supported by HTTP 1.0");
        return 25;
      }
      *(uint8_t *)(v3 + 257) = 1;
    }
    v122 = "Transfer-Encoding: chunked\r\n";
  }
  else
  {
    *(uint8_t *)(v3 + 257) = 0;
    v122 = (const char *)&unk_1B15112;
  }
LABEL_24:
  Curl_safefree(a1[131]);
  v8 = (char *)Curl_checkheaders(v3, "Host:");
  if ( v8 != nullptr && (*(uint8_t *)(v3 + 33996) == 0 || Curl_raw_equal(*(uint32_t *)(v3 + 34000), a1[32]) != 0) )
  {
    s = (const char *)sub_1A639C0(v8);
    v18 = s;
    v102 = 27;
    if ( s == nullptr )
      return v102;
    if ( *s != 0 )
    {
      v19 = (char *)(strchr(s, 58));
      if ( v19 != nullptr )
        *v19 = 0;
      Curl_safefree(a1[132]);
      a1[132] = (int)(uintptr_t)(v18);
    }
    else
    {
      ((void (*)(const char *))Curl_cfree)(s);
    }
    a1[131] = 0;
  }
  else
  {
    v9 = *((uint16_t *)a1 + 78);
    v10 = *(uint32_t *)(a1[121] + 56);
    if ( (v10 & 2) != 0 && v9 == 443 || (v10 & 1) != 0 && v9 == 80 )
    {
      v58 = (const char *)&unk_1B15112;
      v59 = (const char *)&unk_1B15112;
      if ( *((uint8_t *)a1 + 442) != 0 )
      {
        v58 = "]";
        v59 = "[";
      }
      v14 = curl_maprintf("Host: %s%s%s\r\n", v59, v118, v58);
      a1[131] = v14;
    }
    else
    {
      v11 = (const char *)&unk_1B15112;
      v12 = v9;
      v13 = (const char *)&unk_1B15112;
      if ( *((uint8_t *)a1 + 442) != 0 )
      {
        v11 = "]";
        v13 = "[";
      }
      v14 = curl_maprintf("Host: %s%s%s:%hu\r\n", v13, v118, v11, v12);
      a1[131] = v14;
    }
    v102 = 27;
    if ( v14 == 0 )
      return v102;
  }
  v115 = false;
  if ( *((uint8_t *)a1 + 439) != 0 && *((uint8_t *)a1 + 448) == 0 )
  {
    v20 = (const char *)a1[33];
    v103 = (const char *)a1[32];
    v21 = *(const char **)(v3 + 916);
    if ( v20 != v103 )
    {
      v98 = (char *)a1[33];
      v22 = (char *)(strstr(v21, v20));
      if ( v22 != nullptr )
      {
        v97 = v22;
        v113 = (char *)strlen(v98);
        n = strlen(v103);
        v116 = strlen(v21);
        v23 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), n + v116 + 1 - (uint32_t)(uintptr_t)(v113));
        v102 = 27;
        if ( v23 == nullptr )
          return v102;
        v99 = v23;
        memcpy(v23, v21, v97 - v21);
        memcpy(&v99[v97 - v21], (const void *)a1[32], n);
        memcpy(&v99[v97 - v21 + n], &v97[(uint32_t)(uintptr_t)(v113)], v116 + v21 - v97 + 1 - (uint32_t)(uintptr_t)(v113));
        v24 = v99;
        if ( *(uint8_t *)(v3 + 920) != 0 )
        {
          ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v3 + 916));
          v24 = v99;
        }
        *(uint32_t *)(v3 + 916) = (uint32_t)(uintptr_t)(v24);
        *(uint8_t *)(v3 + 920) = 1;
        v21 = v24;
      }
    }
    v112 = (char *)v21;
    v115 = false;
    if ( Curl_raw_nequal("ftp://", v21, 6) != 0 )
    {
      if ( *(uint8_t *)(v3 + 720) != 0 )
      {
        v25 = (char *)(strstr(v21, ";type="));
        if ( v25 == nullptr
          || (v26 = v25[6]) != 0
          && v25[7] == 0
          && ((uint8_t)(v78 = Curl_raw_toupper(v26) - 65) > 8u || ((1 << v78) & 0x109) == 0) )
        {
          v79 = (char *)v129;
          if ( **(uint8_t **)(v3 + 34228) == 0 )
          {
            v80 = strlen(v21);
            v79 = (char *)v129;
            if ( v21[v80 - 1] != 47 )
            {
              LOBYTE(v129[0]) = 47;
              v79 = (char *)v129 + 1;
            }
          }
          curl_msnprintf((int)(uintptr_t)(v79), 8, (int)(uintptr_t)(";type=%c"), *(uint8_t *)(v3 + 655) == 0 ? 105 : 97);
        }
      }
      v112 = (char *)v21;
      v115 = false;
      if ( *((uint8_t *)a1 + 440) != 0 )
        v115 = *((uint8_t *)a1 + 455) == 0;
    }
  }
  if ( v106 != 3
    || (v54 = (const char *)Curl_checkheaders(v3, "Content-Type:"),
        (v102 = Curl_getformdata(v3, v111, *(int **)(v3 + 484), v54, v111 + 4)) == 0) )
  {
    v27 = Curl_checkheaders(v3, "Accept:");
    v28 = nullptr;
    if ( v27 == 0 )
      v28 = "Accept: */*\r\n";
    *((uint32_t *)v111 + 5) = (uint32_t)(uintptr_t)(v28);
    if ( v106 - 2 <= 2 )
    {
      v29 = *(uint32_t *)(v3 + 34244);
      if ( *(uint64_t *)(v3 + 34240) != 0 )
      {
        if ( v29 < 0 )
        {
          *(uint32_t *)(v3 + 34240) = 0;
          *(uint32_t *)(v3 + 34244) = 0;
        }
        else if ( *(uint8_t *)(v3 + 33996) == 0 )
        {
          v56 = (int (*)(int, uint32_t, int, uint32_t))a1[144];
          if ( v56 != nullptr )
          {
            v57 = v56(a1[145], *(uint32_t *)(v3 + 34240), v29, 0);
            if ( v57 != 0 )
            {
              if ( v57 == 2 )
              {
                v67 = *(uint64_t *)(v3 + 34240);
                v105 = 0;
                while ( 1 )
                {
                  v68 = v67 - v105;
                  v69 = v68 > 0x4000 ? 0x4000 : curlx_sotouz(v68);
                  v70 = (*(int (**)(int, int, unsigned int, uint32_t))(v3 + 352))(
                          v3 + 1216,
                          1,
                          v69,
                          *(uint32_t *)(v3 + 280));
                  v105 += v70;
                  if ( v69 < v70 || v70 == 0 )
                    break;
                  v67 = *(uint64_t *)(v3 + 34240);
                  if ( v105 >= v67 )
                    goto LABEL_195;
                }
                Curl_failf(v3, "Could only read %lld bytes from the input", v105);
                return 26;
              }
              else
              {
                Curl_failf(v3, "Could not seek stream");
                return 26;
              }
            }
          }
LABEL_195:
          v71 = *(uint64_t *)(v3 + 440);
          if ( v71 > 0 )
          {
            v72 = v71 - *(uint64_t *)(v3 + 34240);
            *(uint64_t *)(v3 + 440) = v72;
            if ( v72 <= 0 )
            {
              Curl_failf(v3, "File already completely uploaded");
              return 18;
            }
          }
        }
      }
    }
    if ( *(uint8_t *)(v3 + 34233) != 0 )
    {
      if ( v106 == 5 || v106 == 1 )
      {
        if ( Curl_checkheaders(v3, "Range:") == 0 )
        {
          if ( a1[129] != 0 )
            ((void (*)(int))Curl_cfree)(a1[129]);
          a1[129] = curl_maprintf("Range: bytes=%s\r\n", *(uint32_t *)(v3 + 34236));
          goto LABEL_78;
        }
        if ( v106 == 1 )
          goto LABEL_78;
      }
      if ( Curl_checkheaders(v3, "Content-Range:") == 0 )
      {
        if ( a1[129] != 0 )
          ((void (*)(int))Curl_cfree)(a1[129]);
        if ( *(int *)(v3 + 476) < 0 )
        {
          v74 = curl_maprintf(
                  "Content-Range: bytes 0-%lld/%lld\r\n",
                  *(uint32_t *)(v3 + 440) - 1,
                  (uint32_t)(((uint64_t)(*(uint64_t *)(v3 + 440) + 0xFFFFFFFFLL) >> 32) - 1),
                  *(uint32_t *)(v3 + 440),
                  *(uint32_t *)(v3 + 444));
          a1[129] = v74;
        }
        else
        {
          v73 = *(uint64_t *)(v3 + 34240);
          v74 = v73 != 0
              ? curl_maprintf(
                  "Content-Range: bytes %s%lld/%lld\r\n",
                  *(uint32_t *)(v3 + 34236),
                  *(uint32_t *)(v3 + 440) + (uint32_t)v73 - 1,
                  (uint32_t)(((uint64_t)(*(uint64_t *)(v3 + 440) + v73 + 0xFFFFFFFFLL) >> 32) - 1),
                  *(uint64_t *)(v3 + 440) + v73)
              : curl_maprintf(
                  "Content-Range: bytes %s/%lld\r\n",
                  *(uint32_t *)(v3 + 34236),
                  *(uint32_t *)(v3 + 440),
                  *(uint32_t *)(v3 + 444));
          a1[129] = v74;
        }
        v102 = 27;
        if ( v74 == 0 )
          return v102;
      }
    }
LABEL_78:
    v30 = *(uint32_t *)(v3 + 536);
    v31 = "1.1";
    if ( v30 != 2 )
    {
      v31 = "1.0";
      if ( v30 != 1 )
      {
        v32 = a1[70];
        v31 = "1.1";
        if ( v32 != 11 )
        {
          v31 = "1.0";
          if ( v32 != 10 && *(uint32_t *)(v3 + 34200) != 10 )
            v31 = "1.1";
        }
      }
    }
    v121 = (char **)Curl_add_buffer_init();
    v102 = 27;
    if ( v121 == nullptr )
      return v102;
    v102 = Curl_add_bufferf(v121, "%s ", v109);
    if ( v102 != 0 )
      return v102;
    if ( v115 )
    {
      v102 = Curl_add_bufferf(v121, "ftp://%s:%s@%s", a1[65], a1[66], v112 + 6);
    }
    else
    {
      v33 = strlen(v112);
      v102 = Curl_add_buffer(v121, v112, v33);
    }
    if ( v102 != 0 )
      return v102;
    v127 = (const char *)&unk_1B15112;
    if ( *((uint8_t *)a1 + 439) != 0 && *((uint8_t *)a1 + 448) == 0 )
    {
      v75 = Curl_checkheaders(v3, "Proxy-Connection:") == 0;
      v76 = "Proxy-Connection: Keep-Alive\r\n";
      if ( !v75 )
        v76 = (const char *)&unk_1B15112;
      v127 = v76;
    }
    v104 = &unk_1B15112;
    if ( *(uint32_t *)(v3 + 924) != 0 )
    {
      v34 = &unk_1B15112;
      if ( a1[130] != 0 )
        v34 = (void *)a1[130];
      v104 = v34;
    }
    v35 = *(uint8_t **)(v3 + 748);
    v125 = &unk_1B15112;
    if ( v35 != nullptr && *v35 != 0 )
    {
      v36 = &unk_1B15112;
      if ( a1[127] != 0 )
        v36 = (void *)a1[127];
      v125 = v36;
    }
    v37 = (void *)a1[134];
    v38 = &unk_1B15112;
    v126 = &unk_1B15112;
    v39 = *((void **)v111 + 5);
    if ( v37 == nullptr )
      v37 = &unk_1B15112;
    v110 = v37;
    v40 = (void *)a1[131];
    if ( v39 == nullptr )
      v39 = &unk_1B15112;
    if ( v40 == nullptr )
      v40 = &unk_1B15112;
    v117 = v40;
    v41 = *(uint8_t **)(v3 + 824);
    if ( v41 != nullptr && *v41 != 0 )
    {
      if ( a1[126] != 0 )
        v38 = (void *)a1[126];
      v126 = v38;
    }
    v42 = &unk_1B15112;
    v124 = &unk_1B15112;
    if ( *(uint8_t *)(v3 + 34233) != 0 )
    {
      if ( a1[129] != 0 )
        v42 = (void *)a1[129];
      v124 = v42;
    }
    v43 = (void *)a1[128];
    v44 = (void *)a1[125];
    if ( v43 == nullptr )
      v43 = &unk_1B15112;
    if ( v44 == nullptr )
      v44 = &unk_1B15112;
    v102 = Curl_add_bufferf(
             v121,
             "%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",
             v129,
             v31,
             v44,
             v43,
             v124,
             v126,
             v117,
             v39,
             v110,
             v125,
             v104,
             v127,
             v122);
    Curl_safefree(a1[128]);
    a1[128] = 0;
    if ( v102 != 0 )
      return v102;
    if ( v123 != 0 )
    {
      v45 = nullptr;
      v46 = true;
      if ( *(uint32_t *)(v3 + 940) == 0 )
        goto LABEL_122;
    }
    else if ( *(uint32_t *)(v3 + 940) == 0 )
    {
      goto LABEL_127;
    }
    Curl_share_lock(v3, 2, 2);
    v60 = (char *)a1[132];
    if ( v60 == nullptr )
      v60 = v118;
    v114 = (char *)Curl_cookie_getlist(
                     *(int ***)(v3 + 940),
                     v60,
                     *(char **)(v3 + 34228),
                     (*(uint8_t *)(a1[120] + 56) & 2) != 0);
    Curl_share_unlock(v3, 2);
    if ( v114 != nullptr )
    {
      v119 = (char *)v3;
      v61 = v114;
      v62 = nullptr;
      do
      {
        v66 = *((uint32_t *)v61 + 2);
        if ( v66 != 0 )
        {
          if ( v62 != nullptr )
          {
            v63 = *((uint32_t *)v61 + 1);
            v64 = "; ";
          }
          else
          {
            v65 = Curl_add_bufferf(v121, "Cookie: ");
            if ( v65 != 0 )
            {
LABEL_209:
              v77 = v62;
              v2 = (int)(uintptr_t)(a1);
              v3 = (int)(uintptr_t)(v119);
              v102 = v65;
              v46 = false;
              goto LABEL_210;
            }
            v66 = *((uint32_t *)v61 + 2);
            v63 = *((uint32_t *)v61 + 1);
            v64 = (const char *)&unk_1B15112;
          }
          v65 = Curl_add_bufferf(v121, "%s%s=%s", v64, v63, v66);
          if ( v65 != 0 )
            goto LABEL_209;
          ++v62;
        }
        v61 = *(char **)v61;
      }
      while ( v61 != nullptr );
      v77 = v62;
      v2 = (int)(uintptr_t)(a1);
      v3 = (int)(uintptr_t)(v119);
      v46 = true;
LABEL_210:
      v101 = v77;
      Curl_cookie_freelist(v114, 0);
      v45 = v101;
      if ( !v46 )
        goto LABEL_125;
    }
    else
    {
      v46 = true;
      v45 = nullptr;
    }
LABEL_122:
    if ( v123 != 0 )
    {
      v47 = "; ";
      if ( v45 == nullptr )
      {
        v102 = Curl_add_bufferf(v121, "Cookie: ");
        v45 = nullptr;
        if ( v102 != 0 )
          return v102;
        v47 = (const char *)&unk_1B15112;
      }
      v100 = v45;
      v102 = Curl_add_bufferf(v121, "%s%s", v47, v123);
      v45 = v100 + 1;
      v46 = v102 == 0;
    }
LABEL_125:
    if ( v45 != nullptr && v46 )
      v102 = Curl_add_buffer(v121, "\r\n", 2);
    if ( v102 != 0 )
      return v102;
LABEL_127:
    if ( *(uint32_t *)(v3 + 524) != 0 )
    {
      v102 = Curl_add_timecondition(v3, v121);
      if ( v102 != 0 )
        return v102;
    }
    v102 = Curl_add_custom_headers(v2, v121);
    if ( v102 != 0 )
      return v102;
    *((uint32_t *)v111 + 3) = 0;
    Curl_pgrsSetUploadSize(v3, 0, 0);
    if ( v106 == 3 )
    {
      if ( *(uint32_t *)v111 == 0 || *(uint8_t *)(v2 + 450) != 0 )
      {
        v48 = Curl_add_bufferf(v121, "Content-Length: 0\r\n\r\n");
        if ( v48 != 0 )
          return v48;
        v83 = Curl_add_buffer_send(v121, (int *)v2, (uint32_t *)(v3 + 34324), 0, 0);
        if ( v83 != 0 )
        {
          Curl_failf(v3, "Failed sending POST request");
          return v83;
        }
        Curl_setup_transfer((int *)v2, 0, -1, 1, (int)(uintptr_t)(v111 + 24), -1, 0);
LABEL_250:
        if ( *((uint64_t *)v111 + 4) != 0 )
        {
          Curl_pgrsSetUploadCounter(v3, *((uint32_t *)v111 + 8), *((uint32_t *)v111 + 9));
          v75 = Curl_pgrsUpdate(v2) == 0;
          v86 = 42;
          if ( v75 )
            return 0;
          return v86;
        }
        return v102;
      }
      v88 = (uint32_t **)(v111 + 40);
      LOBYTE(v89) = Curl_FormInit((uint32_t *)v111 + 10, *(uint32_t *)v111);
      if ( v89 != 0 )
      {
        Curl_failf(v3, "Internal HTTP POST error!");
        return 34;
      }
      *((uint32_t *)v111 + 13) = *(uint32_t *)(v2 + 584);
      *(uint32_t *)(v2 + 584) = (uint32_t)(uintptr_t)(Curl_FormReader);
      *(uint32_t *)(v2 + 588) = (uint32_t)(uintptr_t)(v88);
      *((uint32_t *)v111 + 19) = 2;
      if ( *(uint8_t *)(v3 + 257) == 0 )
      {
        v48 = Curl_add_bufferf(v121, "Content-Length: %lld\r\n", *((uint32_t *)v111 + 1), *((uint32_t *)v111 + 2));
        if ( v48 != 0 )
          return v48;
      }
      v48 = sub_1A65140(v3, v2, v121);
      if ( v48 != 0 )
        return v48;
      v128 = 0;
      v90 = (void *)Curl_formpostheader(v88, &v128);
      if ( v90 == nullptr )
      {
        Curl_failf(v3, "Could not get Content-Type header line!");
        return 34;
      }
      v48 = Curl_add_buffer(v121, v90, v128);
      if ( v48 != 0 )
        return v48;
      v48 = Curl_add_buffer(v121, "\r\n", 2);
      if ( v48 != 0 )
        return v48;
      Curl_pgrsSetUploadSize(v3, *((uint32_t *)v111 + 1), *((uint32_t *)v111 + 2));
      v91 = Curl_add_buffer_send(v121, (int *)v2, (uint32_t *)(v3 + 34324), 0, 0);
      if ( v91 != 0 )
      {
        Curl_failf(v3, "Failed sending POST request");
        Curl_formclean((uint32_t **)v111);
        return v91;
      }
      v94 = 0;
      v95 = (int)(uintptr_t)(v111 + 32);
LABEL_249:
      Curl_setup_transfer((int *)v2, 0, -1, 1, (int)(uintptr_t)(v111 + 24), v94, v95);
      goto LABEL_250;
    }
    if ( v106 == 4 )
    {
      v108 = 0;
      if ( *(uint8_t *)(v2 + 450) != 0
        || (v108 = *(uint64_t *)(v3 + 440), (HIDWORD(v108) & (unsigned int)v108) != 0xFFFFFFFF) )
      {
        if ( *(uint8_t *)(v3 + 257) == 0 )
        {
          v48 = Curl_add_bufferf(v121, "Content-Length: %lld\r\n", v108);
          if ( v48 != 0 )
            return v48;
        }
      }
      v48 = sub_1A65140(v3, v2, v121);
      if ( v48 != 0 )
        return v48;
      v48 = Curl_add_buffer(v121, "\r\n", 2);
      if ( v48 != 0 )
        return v48;
      Curl_pgrsSetUploadSize(v3, v108, HIDWORD(v108));
      v87 = Curl_add_buffer_send(v121, (int *)v2, (uint32_t *)(v3 + 34324), 0, 0);
      if ( v87 != 0 )
      {
        Curl_failf(v3, "Failed sending PUT request");
        return v87;
      }
      if ( v108 != 0 )
      {
        v84 = 0;
        v85 = (int)(uintptr_t)(v111 + 32);
        goto LABEL_248;
      }
LABEL_291:
      v85 = 0;
      v84 = -1;
      goto LABEL_248;
    }
    if ( v106 != 2 )
    {
      v48 = Curl_add_buffer(v121, "\r\n", 2);
      if ( v48 != 0 )
        return v48;
      v83 = Curl_add_buffer_send(v121, (int *)v2, (uint32_t *)(v3 + 34324), 0, 0);
      if ( v83 != 0 )
      {
        Curl_failf(v3, "Failed sending HTTP request");
        return v83;
      }
LABEL_246:
      if ( *((uint32_t *)v111 + 3) != 0 )
      {
        v84 = 0;
        v85 = (int)(uintptr_t)(v111 + 32);
LABEL_248:
        v95 = v85;
        v94 = v84;
        goto LABEL_249;
      }
      goto LABEL_291;
    }
    v81 = *(uint8_t *)(v2 + 450);
    v107 = 0;
    if ( v81 == 0 )
    {
      v107 = *(uint64_t *)(v3 + 324);
      if ( (HIDWORD(v107) & (unsigned int)v107) == 0xFFFFFFFF )
      {
        v92 = *(const char **)(v3 + 316);
        if ( v92 != nullptr )
          v107 = strlen(v92);
      }
    }
    if ( *(uint8_t *)(v3 + 257) == 0 && (v81 != 0 || Curl_checkheaders(v3, "Content-Length:") == 0) )
    {
      v48 = Curl_add_bufferf(v121, "Content-Length: %lld\r\n", v107);
      if ( v48 != 0 )
        return v48;
    }
    if ( Curl_checkheaders(v3, "Content-Type:") == 0 )
    {
      v48 = Curl_add_bufferf(v121, "Content-Type: application/x-www-form-urlencoded\r\n");
      if ( v48 != 0 )
        return v48;
    }
    v82 = Curl_checkheaders(v3, "Expect:");
    if ( v82 != 0 )
    {
      *(uint8_t *)(v3 + 34204) = Curl_compareheader(v82, "Expect:", "100-continue");
    }
    else if ( (uint64_t)v107 > 0x400 )
    {
      v48 = sub_1A65140(v3, v2, v121);
      if ( v48 != 0 )
        return v48;
    }
    else
    {
      *(uint8_t *)(v3 + 34204) = 0;
    }
    if ( *(uint32_t *)(v3 + 316) != 0 )
    {
      if ( *(uint8_t *)(v3 + 34204) == 0 && v107 <= 0xFFFF )
      {
        v48 = Curl_add_buffer(v121, "\r\n", 2);
        if ( v48 != 0 )
          return v48;
        if ( *(uint8_t *)(v3 + 257) != 0 )
        {
          v48 = Curl_add_bufferf(v121, "%x\r\n", (uint32_t)v107);
          if ( v48 == 0 )
          {
            v48 = Curl_add_buffer(v121, *(void **)(v3 + 316), v107);
            if ( v48 == 0 )
              v48 = Curl_add_buffer(v121, "\r\n0\r\n\r\n", 7);
          }
          v96 = v107 + 7;
        }
        else
        {
          v48 = Curl_add_buffer(v121, *(void **)(v3 + 316), v107);
          v96 = v107;
        }
        if ( v48 != 0 )
          return v48;
        Curl_pgrsSetUploadSize(v3, v107, HIDWORD(v107));
        goto LABEL_245;
      }
      *(uint64_t *)(v111 + 4) = v107;
      *((uint32_t *)v111 + 3) = *(uint32_t *)(v3 + 316);
      *((uint32_t *)v111 + 19) = 2;
      *(uint32_t *)(v2 + 588) = v2;
      *(uint32_t *)(v2 + 584) = (uint32_t)(uintptr_t)(sub_1A63890);
      Curl_pgrsSetUploadSize(v3, *((uint32_t *)v111 + 1), *((uint32_t *)v111 + 2));
      v48 = Curl_add_buffer(v121, "\r\n", 2);
    }
    else
    {
      v48 = Curl_add_buffer(v121, "\r\n", 2);
      if ( v48 != 0 )
        return v48;
      if ( *(uint8_t *)(v3 + 257) == 0 || *(uint8_t *)(v2 + 450) == 0 )
      {
        v96 = 0;
        if ( *(uint64_t *)(v3 + 324) != 0 )
        {
          v93 = v107;
          if ( v107 == 0 )
            v93 = -1;
          Curl_pgrsSetUploadSize(v3, v93, HIDWORD(v93));
          v96 = 0;
          if ( *(uint8_t *)(v2 + 450) == 0 )
          {
            *((uint32_t *)v111 + 3) = (uint32_t)(uintptr_t)(v111 + 12);
            *(uint64_t *)(v111 + 4) = v107;
          }
        }
        goto LABEL_245;
      }
      v48 = Curl_add_buffer(v121, "\r\n0\r\n\r\n", 7);
    }
    if ( v48 != 0 )
      return v48;
    v96 = 0;
LABEL_245:
    v83 = Curl_add_buffer_send(v121, (int *)v2, (uint32_t *)(v3 + 34324), v96, 0);
    if ( v83 != 0 )
    {
      Curl_failf(v3, "Failed sending HTTP POST request");
      return v83;
    }
    goto LABEL_246;
  }
  return v102;
}

// ----------------------------------------------------------------------------
// Function: Curl_http_readwrite_headers  (binary VA: 0x1a67240)
// Original: Curl_http_readwrite_headers
// ----------------------------------------------------------------------------
int Curl_http_readwrite_headers(int a1, int a2, size_t *a3, uint8_t *a4)
{
  int v4;
  uint8_t *s;
  void *v8;
  int v9;
  int v10;
  const char *v11;
  int v12;
  char v13;
  size_t v14;
  int v15;
  size_t v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int (*v33)(char *, int, size_t, uint32_t);
  int v34;
  int v35;
  int v36;
  const char *v37;
  int v38;
  int v39;
  uint8_t *i;
  uint8_t v41;
  time_t v42;
  int v43;
  uint8_t *v44;
  uint8_t v45;
  int v46;
  int v47;
  uint8_t *v48;
  const char *v49;
  char j;
  int64_t v51; // rax
  bool v52;
  char *v53;
  int v54;
  int v55;
  char *v56;
  int64_t v73; // 0:^2C.4,4:ecx.4
  typedef size_t _g4_t_v57;
  typedef size_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef size_t _g4_t_v60;
  typedef size_t _g4_t_v61;
  typedef size_t _g4_t_v62;
  typedef uint8_t _g4_t_v63;
  typedef size_t _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef size_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int (*_g4_t_v69)(char *, int, size_t, uint32_t);
  typedef size_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef time_t _g4_t_v72;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v57)) > _g4_s0 ? (8u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v58)) > _g4_s1 ? (8u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v59)) > _g4_s2 ? (8u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v60)) > _g4_s3 ? (8u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v61)) > _g4_s4 ? (8u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v62)) > _g4_s5 ? (8u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v63)) > _g4_s6 ? (8u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v64)) > _g4_s7 ? (8u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v65)) > _g4_s8 ? (12u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v66)) > _g4_s9 ? (12u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v67)) > _g4_s10 ? (16u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v68)) > _g4_s11 ? (20u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v69)) > _g4_s12 ? (24u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v70)) > _g4_s13 ? (28u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v71)) > _g4_s14 ? (40u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v72)) > _g4_s15 ? (44u + sizeof(_g4_t_v72)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 20u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 24u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);

  v4 = a1;
  v68 = a1 + 20;
  s = *(uint8_t **)(a1 + 104);
  while ( 1 )
  {
    *(uint32_t *)(v4 + 108) = (uint32_t)(uintptr_t)(s);
    v57 = (size_t)s;
    v8 = memchr(s, 10, *a3);
    *(uint32_t *)(v4 + 112) = (uint32_t)(uintptr_t)(v8);
    if ( v8 == nullptr )
    {
      v67 = sub_1A63D00(v4, v68, *a3);
      if ( v67 == 0
        && *(uint32_t *)(v4 + 92) == 0
        && *(uint32_t *)(v4 + 100) > 5u
        && sub_1A63E20(*(uint32_t *)(v4 + 620), *(uint32_t *)(v4 + 1208)) == 0 )
      {
        *(uint8_t *)(v4 + 84) = 0;
        *(uint32_t *)(v4 + 88) = 2;
      }
      return v67;
    }
    v9 = (int)(uintptr_t)(v8) - v57 + 1;
    *a3 -= v9;
    v65 = v9;
    v10 = *(uint32_t *)(v4 + 112) + 1;
    *(uint32_t *)(v4 + 104) = v10;
    v67 = sub_1A63D00(v4, v68, v10 - *(uint32_t *)(v4 + 108));
    if ( v67 != 0 )
      return v67;
    v11 = *(const char **)(v4 + 1208);
    *(uint32_t *)(v4 + 112) = *(uint32_t *)(v4 + 96);
    v12 = *(uint32_t *)(v4 + 92);
    *(uint32_t *)(v4 + 116) = (uint32_t)(uintptr_t)(v11);
    if ( v12 == 0 && *(uint32_t *)(v4 + 100) > 5u )
    {
      if ( sub_1A63E20(*(uint32_t *)(v4 + 620), (int)(uintptr_t)(v11)) == 0 )
      {
        *(uint8_t *)(v4 + 84) = 0;
        if ( *a3 != 0 )
        {
          *(uint32_t *)(v4 + 88) = 1;
        }
        else
        {
          *(uint32_t *)(v4 + 88) = 2;
          *a3 = v65;
        }
        return v67;
      }
      v11 = *(const char **)(v4 + 116);
    }
    v13 = *v11;
    if ( *v11 == 13 )
    {
      *(uint32_t *)(v4 + 116) = (uint32_t)(uintptr_t)(v11 + 1);
      v13 = *++v11;
      goto LABEL_8;
    }
    if ( v13 != 10 )
    {
      v26 = *(uint32_t *)(v4 + 92);
      *(uint32_t *)(v4 + 92) = v26 + 1;
      if ( v26 != 0 )
        goto LABEL_48;
      v27 = *(uint32_t *)(*(uint32_t *)(a2 + 480) + 56);
      if ( (v27 & 1) != 0 )
      {
        if ( sscanf(v11, " HTTP/%d.%d %3d", &v71, a2 + 280, v4 + 132) == 3 )
        {
          *(uint32_t *)(a2 + 280) += 10 * v71;
        }
        else
        {
          v43 = sscanf(*(const char **)(v4 + 116), " HTTP %3d", v4 + 132);
          *(uint32_t *)(a2 + 280) = 10;
          if ( v43 == 0 )
          {
            if ( sub_1A63E20(*(uint32_t *)(v4 + 620), *(uint32_t *)(v4 + 116)) == 0 )
              goto LABEL_70;
            *(uint32_t *)(v4 + 132) = 200;
            *(uint32_t *)(a2 + 280) = 10;
          }
        }
      }
      else
      {
        if ( (v27 & 0x40000) == 0 || sscanf(v11, " RTSP/%d.%d %3d", &v72, a2 + 284, v4 + 132) != 3 )
        {
LABEL_70:
          *(uint8_t *)(v4 + 84) = 0;
          return 0;
        }
        v42 = v72;
        *(uint32_t *)(a2 + 280) = 11;
        *(uint32_t *)(a2 + 284) += 10 * v42;
      }
      v28 = *(uint32_t *)(v4 + 132);
      v29 = *(uint32_t *)(v4 + 34200);
      *(uint32_t *)(v4 + 34300) = v28;
      *(uint32_t *)(v4 + 34308) = *(uint32_t *)(a2 + 280);
      v30 = *(uint32_t *)(a2 + 280);
      if ( v29 == 0 || v29 > v30 )
        *(uint32_t *)(v4 + 34200) = v30;
      if ( *(uint8_t *)(v4 + 660) != 0 && v28 > 399 )
      {
        if ( v28 == 401 )
        {
          if ( *(uint8_t *)(a2 + 440) == 0 )
            goto LABEL_38;
        }
        else if ( v28 != 407 || *(uint8_t *)(a2 + 441) == 0 )
        {
LABEL_38:
          if ( *(uint64_t *)(v4 + 34240) == 0 || *(uint32_t *)(v4 + 532) != 1 || v28 != 416 )
          {
            Curl_failf(v4, "The requested URL returned error: %d", v28);
            return 22;
          }
        }
      }
      if ( *(uint32_t *)(a2 + 280) == 10 )
      {
        Curl_infof(v4, "HTTP 1.0, assume close after body\n");
        *(uint8_t *)(a2 + 436) = 1;
        v28 = *(uint32_t *)(v4 + 132);
      }
      else if ( *(int *)(a2 + 280) > 10 && *(uint8_t *)(a2 + 436) == 0 )
      {
        *(uint8_t *)(a2 + 546) = 1;
        v28 = *(uint32_t *)(v4 + 132);
      }
      if ( v28 == 204 || v28 == 304 )
      {
        if ( *(uint32_t *)(v4 + 524) != 0 )
          *(uint8_t *)(v4 + 34316) = 1;
        *(uint32_t *)(v4 + 20) = 0;
        *(uint32_t *)(v4 + 24) = 0;
        *(uint32_t *)(v4 + 32) = 0;
        *(uint32_t *)(v4 + 36) = 0;
        *(uint8_t *)(v4 + 238) = 1;
        v11 = *(const char **)(v4 + 116);
        goto LABEL_50;
      }
      v11 = *(const char **)(v4 + 116);
LABEL_48:
      if ( *(uint8_t *)(v4 + 238) == 0 && *(uint8_t *)(v4 + 699) == 0 )
      {
        if ( Curl_raw_nequal("Content-Length:", v11, 15) != 0 )
        {
          v73 = strtoll((const char *)(*(uint32_t *)(v4 + 116) + 15), nullptr, 10);
          if ( *(uint64_t *)(v4 + 628) != 0 && v73 > *(uint64_t *)(v4 + 628) )
          {
            Curl_failf(v4, "Maximum file size exceeded");
            return 63;
          }
          if ( v73 < 0 )
          {
            *(uint8_t *)(a2 + 436) = 1;
            Curl_infof(v4, "Negative content-length: %lld, closing after transfer\n", (uint32_t)v73, HIDWORD(v73));
          }
          else
          {
            *(uint32_t *)(v4 + 24) = HIDWORD(v73);
            *(uint32_t *)(v4 + 20) = v73;
            *(uint32_t *)(v4 + 32) = v73;
            *(uint32_t *)(v4 + 36) = HIDWORD(v73);
            Curl_pgrsSetDownloadSize(v4, v73, HIDWORD(v73));
          }
          goto LABEL_59;
        }
        v11 = *(const char **)(v4 + 116);
      }
LABEL_50:
      if ( Curl_raw_nequal("Content-Type:", v11, 13) != 0 )
      {
        v37 = (const char *)sub_1A639C0(*(char **)(v4 + 116));
        if ( v37 == nullptr )
          return 27;
        if ( *v37 != 0 )
        {
          v62 = (size_t)v37;
          Curl_safefree(*(uint32_t *)(v4 + 34340));
          *(uint32_t *)(v4 + 34340) = v62;
          goto LABEL_59;
        }
        goto LABEL_83;
      }
      v31 = *(uint32_t *)(a2 + 280);
      if ( v31 == 10 )
      {
        if ( *(uint8_t *)(a2 + 439) == 0 )
          goto LABEL_87;
        if ( (uint8_t)Curl_compareheader(*(uint32_t *)(v4 + 116), "Proxy-Connection:", "keep-alive") != 0 )
        {
          *(uint8_t *)(a2 + 436) = 0;
          Curl_infof(v4, "HTTP/1.0 proxy connection set to keep alive!\n");
          goto LABEL_59;
        }
        v31 = *(uint32_t *)(a2 + 280);
      }
      if ( v31 == 11 )
      {
        if ( *(uint8_t *)(a2 + 439) == 0 )
          goto LABEL_57;
        if ( (uint8_t)Curl_compareheader(*(uint32_t *)(v4 + 116), "Proxy-Connection:", "close") != 0 )
        {
          *(uint8_t *)(a2 + 436) = 1;
          Curl_infof(v4, "HTTP/1.1 proxy connection set close!\n");
          goto LABEL_59;
        }
        v31 = *(uint32_t *)(a2 + 280);
      }
      if ( v31 != 10 )
      {
LABEL_57:
        if ( (uint8_t)Curl_compareheader(*(uint32_t *)(v4 + 116), "Connection:", "close") != 0 )
        {
          *(uint8_t *)(a2 + 436) = 1;
LABEL_59:
          v32 = 3 - (*(uint8_t *)(v4 + 664) == 0);
          if ( *(uint8_t *)(v4 + 676) != 0 )
          {
            v61 = 3 - (*(uint8_t *)(v4 + 664) == 0);
            Curl_debug(v4, 1u, *(void **)(v4 + 116), *(uint32_t *)(v4 + 100), a2);
            v32 = v61;
          }
          v33 = Curl_client_write(a2, v32, *(char **)(v4 + 116), *(uint32_t *)(v4 + 100));
          if ( v33 != nullptr )
            return (int)(uintptr_t)(v33);
          v34 = *(uint32_t *)(v4 + 100);
          *(uint32_t *)(v4 + 34320) += v34;
          *(uint32_t *)(v4 + 60) += v34;
          goto LABEL_63;
        }
        if ( Curl_raw_nequal("Transfer-Encoding:", *(uint32_t *)(v4 + 116), 18) != 0 )
        {
          v70 = a3;
          v38 = a2;
          v39 = v4;
          for ( i = (uint8_t *)(*(uint32_t *)(v4 + 116) + 18); ; i += 10 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v41 = *i;
                      if ( *i == 0 )
                        goto LABEL_115;
LABEL_113:
                      v63 = v41;
                      if ( isspace(v41) == 0 && v63 != 44 )
                        break;
                      ++i;
                    }
                    while ( 1 )
                    {
LABEL_115:
                      if ( Curl_raw_nequal("chunked", i, 7) != 0 )
                      {
                        *(uint8_t *)(v39 + 256) = 1;
                        Curl_httpchunk_init(v38);
                        i += 7;
                        if ( *(uint32_t *)(v39 + 148) != 0 )
                          goto LABEL_122;
                      }
                      else if ( *(uint32_t *)(v39 + 148) != 0 )
                      {
                        goto LABEL_122;
                      }
                      if ( Curl_raw_nequal("identity", i, 8) == 0 )
                        break;
                      i += 8;
                      *(uint32_t *)(v39 + 148) = 0;
                      v41 = *i;
                      if ( *i != 0 )
                        goto LABEL_113;
                    }
                    if ( Curl_raw_nequal("deflate", i, 7) == 0 )
                      break;
                    *(uint32_t *)(v39 + 148) = 1;
                    i += 7;
                  }
                  if ( Curl_raw_nequal("gzip", i, 4) == 0 )
                    break;
                  *(uint32_t *)(v39 + 148) = 2;
                  i += 4;
                }
                if ( Curl_raw_nequal("x-gzip", i, 6) == 0 )
                  break;
                *(uint32_t *)(v39 + 148) = 2;
                i += 6;
              }
              if ( Curl_raw_nequal("compress", i, 8) == 0 )
                break;
              *(uint32_t *)(v39 + 148) = 3;
              i += 8;
            }
            if ( Curl_raw_nequal("x-compress", i, 10) == 0 )
              break;
            *(uint32_t *)(v39 + 148) = 3;
          }
LABEL_122:
          v4 = v39;
          a2 = v38;
          a3 = v70;
          goto LABEL_59;
        }
        if ( Curl_raw_nequal("Content-Encoding:", *(uint32_t *)(v4 + 116), 17) != 0 && *(uint32_t *)(v4 + 748) != 0 )
        {
          v44 = (uint8_t *)(*(uint32_t *)(v4 + 116) + 17);
          v45 = *v44;
          if ( *v44 != 0 )
          {
            v66 = a3;
            v46 = a2;
            v47 = v4;
            v48 = (uint8_t *)(*(uint32_t *)(v4 + 116) + 17);
            do
            {
              if ( isspace(v45) == 0 )
                break;
              v45 = *++v48;
            }
            while ( *v48 != 0 );
            v44 = v48;
            v4 = v47;
            a2 = v46;
            a3 = v66;
          }
          v64 = (size_t)v44;
          if ( Curl_raw_nequal("identity", v44, 8) != 0 )
          {
            *(uint32_t *)(v4 + 148) = 0;
          }
          else if ( Curl_raw_nequal("deflate", v64, 7) != 0 )
          {
            *(uint32_t *)(v4 + 148) = 1;
          }
          else if ( Curl_raw_nequal("gzip", v64, 4) != 0 || Curl_raw_nequal("x-gzip", v64, 6) != 0 )
          {
            *(uint32_t *)(v4 + 148) = 2;
          }
          else if ( Curl_raw_nequal("compress", v64, 8) != 0 || Curl_raw_nequal("x-compress", v64, 10) != 0 )
          {
            *(uint32_t *)(v4 + 148) = 3;
          }
          goto LABEL_59;
        }
        if ( Curl_raw_nequal("Content-Range:", *(uint32_t *)(v4 + 116), 14) != 0 )
        {
          v49 = (const char *)(*(uint32_t *)(v4 + 116) + 14);
          for ( j = *v49; (uint8_t)(*v49 - 48) > 9u; j = *++v49 )
          {
            if ( j == 0 )
              break;
          }
          v51 = strtoll(v49, nullptr, 10);
          *(uint64_t *)(v4 + 124) = v51;
          if ( *(uint64_t *)(v4 + 34240) == v51 )
            *(uint8_t *)(v4 + 120) = 1;
          goto LABEL_59;
        }
        if ( *(uint32_t *)(v4 + 940) != 0 && Curl_raw_nequal("Set-Cookie:", *(uint32_t *)(v4 + 116), 11) != 0 )
        {
          Curl_share_lock(v4, 2, 2);
          v56 = *(char **)(a2 + 528);
          if ( v56 == nullptr )
            v56 = *(char **)(a2 + 128);
          Curl_cookie_add(
            v4,
            *(int ***)(v4 + 940),
            1,
            (const char *)(*(uint32_t *)(v4 + 116) + 11),
            v56,
            *(char **)(v4 + 34228));
          Curl_share_unlock(v4, 2);
          goto LABEL_59;
        }
        if ( Curl_raw_nequal("Last-Modified:", *(uint32_t *)(v4 + 116), 14) != 0
          && (*(uint32_t *)(v4 + 524) != 0 || *(uint8_t *)(v4 + 653) != 0) )
        {
          v72 = time(nullptr);
          v54 = curl_getdate((char *)(*(uint32_t *)(v4 + 116) + 14));
          v52 = *(uint8_t *)(v4 + 653) == 0;
          *(uint32_t *)(v4 + 212) = v54;
          if ( !v52 )
            *(uint32_t *)(v4 + 34312) = v54;
          goto LABEL_59;
        }
        if ( Curl_raw_nequal("WWW-Authenticate:", *(uint32_t *)(v4 + 116), 17) != 0 && *(uint32_t *)(v4 + 132) == 401 )
        {
          v55 = 401;
        }
        else
        {
          v52 = Curl_raw_nequal("Proxy-authenticate:", *(uint32_t *)(v4 + 116), 19) == 0;
          v55 = *(uint32_t *)(v4 + 132);
          if ( v52 || v55 != 407 )
          {
            if ( (unsigned int)(v55 - 300) > 0x63
              || Curl_raw_nequal("Location:", *(uint32_t *)(v4 + 116), 9) == 0
              || *(uint32_t *)(v4 + 240) != 0 )
            {
              if ( (*(uint8_t *)(*(uint32_t *)(a2 + 480) + 58) & 4) != 0 )
                return 4;
              goto LABEL_59;
            }
            v37 = (const char *)sub_1A639C0(*(char **)(v4 + 116));
            if ( v37 == nullptr )
              return 27;
            if ( *v37 != 0 )
            {
              v52 = *(uint8_t *)(v4 + 661) == 0;
              *(uint32_t *)(v4 + 240) = (uint32_t)(uintptr_t)(v37);
              if ( !v52 )
              {
                v53 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v37));
                *(uint32_t *)(v4 + 244) = (uint32_t)(uintptr_t)(v53);
                if ( v53 == nullptr )
                  return 27;
                v33 = (int (*)(char *, int, size_t, uint32_t))sub_1A63EA0(a2);
                if ( v33 != nullptr )
                  return (int)(uintptr_t)(v33);
              }
              goto LABEL_59;
            }
LABEL_83:
            ((void (*)(const char *))Curl_cfree)(v37);
            goto LABEL_59;
          }
        }
        v33 = (int (*)(char *, int, size_t, uint32_t))Curl_http_input_auth((int *)a2, v55, *(uint32_t *)(v4 + 116));
        if ( v33 != nullptr )
          return (int)(uintptr_t)(v33);
        goto LABEL_59;
      }
LABEL_87:
      if ( (uint8_t)Curl_compareheader(*(uint32_t *)(v4 + 116), "Connection:", "keep-alive") != 0 )
      {
        *(uint8_t *)(a2 + 436) = 0;
        Curl_infof(v4, "HTTP/1.0 connection set to keep alive!\n");
        goto LABEL_59;
      }
      goto LABEL_57;
    }
LABEL_8:
    if ( v13 == 10 )
      *(uint32_t *)(v4 + 116) = (uint32_t)(uintptr_t)(v11 + 1);
    v14 = *(uint32_t *)(v4 + 132);
    if ( v14 - 100 > 0x63 )
    {
      v36 = *(uint32_t *)(v4 + 24) & *(uint32_t *)(v4 + 20);
      *(uint8_t *)(v4 + 84) = 0;
      if ( v36 == -1
        && *(uint8_t *)(v4 + 256) == 0
        && *(uint8_t *)(a2 + 436) == 0
        && *(int *)(a2 + 280) > 10
        && (*(uint8_t *)(*(uint32_t *)(a2 + 480) + 58) & 4) == 0 )
      {
        Curl_infof(v4, "no chunk, no close, no size. Assume close to signal end\n");
        *(uint8_t *)(a2 + 436) = 1;
        v14 = *(uint32_t *)(v4 + 132);
      }
      if ( v14 == 417 )
      {
        *(uint32_t *)(v4 + 144) = 3;
        *(uint32_t *)(v4 + 232) &= ~2u;
      }
    }
    else
    {
      v15 = *(uint32_t *)(v4 + 144);
      *(uint8_t *)(v4 + 84) = 1;
      *(uint32_t *)(v4 + 92) = 0;
      if ( v15 != 0 )
      {
        *(uint32_t *)(v4 + 144) = 0;
        *(uint32_t *)(v4 + 232) |= 2u;
      }
    }
    v58 = v14;
    if ( sub_1A63770((uint8_t *)a2) != 0 )
    {
      Curl_failf(v4, "The requested URL returned error: %d", v58);
      return 22;
    }
    v59 = *(uint32_t *)(v4 + 116) - *(uint32_t *)(v4 + 1208);
    v69 = Curl_client_write(a2, 3 - (*(uint8_t *)(v4 + 664) == 0), *(char **)(v4 + 1208), v59);
    v16 = v59;
    if ( v69 != nullptr )
      return (int)(uintptr_t)(v69);
    v17 = *(uint32_t *)(v4 + 132) - 100;
    v18 = v59 + *(uint32_t *)(v4 + 60);
    *(uint32_t *)(v4 + 34320) += v59;
    *(uint32_t *)(v4 + 60) = v18;
    if ( v17 >= 0x64 )
      v18 = 0;
    *(uint32_t *)(v4 + 64) = v18;
    if ( *a4 == 0 )
    {
      v33 = (int (*)(char *, int, size_t, uint32_t))Curl_http_auth_act((uint8_t *)a2);
      v16 = v59;
      if ( v33 != nullptr )
        return (int)(uintptr_t)(v33);
      if ( *(uint8_t *)(a2 + 451) != 0 )
      {
        Curl_infof(v4, "Keep sending data to get tossed away!\n");
        *(uint32_t *)(v4 + 232) |= 2u;
        v16 = v59;
      }
    }
    if ( *(uint8_t *)(v4 + 84) == 0 )
      break;
LABEL_63:
    v35 = *(uint32_t *)(v4 + 1208);
    *(uint32_t *)(v4 + 100) = 0;
    *(uint32_t *)(v4 + 96) = v35;
    if ( *a4 != 0 )
      return v67;
    s = *(uint8_t **)(v4 + 104);
    if ( *s == 0 )
      return 0;
  }
  if ( *(uint8_t *)(v4 + 667) != 0 )
  {
    *a4 = 1;
    v19 = *(uint32_t *)(v4 + 20);
    v20 = *(uint32_t *)(v4 + 24);
    goto LABEL_21;
  }
  if ( *(uint8_t *)(v4 + 256) != 0 )
  {
    *(uint32_t *)(v4 + 20) = -1;
    *(uint32_t *)(v4 + 24) = -1;
    *(uint32_t *)(v4 + 32) = -1;
    *(uint32_t *)(v4 + 36) = -1;
    goto LABEL_73;
  }
  v19 = *(uint32_t *)(v4 + 20);
  v20 = *(uint32_t *)(v4 + 24);
LABEL_21:
  if ( (v20 & v19) == 0xFFFFFFFF )
  {
LABEL_73:
    v24 = a4;
    if ( *(uint64_t *)(v4 + 32) != 0 )
      goto LABEL_74;
LABEL_23:
    *v24 = 1;
LABEL_24:
    *(uint32_t *)(v4 + 232) &= ~1u;
  }
  else
  {
    v60 = v16;
    Curl_pgrsSetDownloadSize(v4, v19, v20);
    v21 = *(uint32_t *)(v4 + 20);
    v22 = *(uint32_t *)(v4 + 24);
    *(uint32_t *)(v4 + 36) = v22;
    v23 = v21 | v22;
    *(uint32_t *)(v4 + 32) = v21;
    v24 = a4;
    v16 = v60;
    if ( v23 == 0 )
      goto LABEL_23;
LABEL_74:
    if ( *v24 != 0 )
      goto LABEL_24;
  }
  v67 = 0;
  if ( *(uint8_t *)(v4 + 676) == 0 )
    return v67;
  Curl_debug(v4, 1u, *(void **)(v4 + 108), v16, a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_httpchunk_init  (binary VA: 0x1a683c0)
// Original: Curl_httpchunk_init
// ----------------------------------------------------------------------------
uint32_t * Curl_httpchunk_init(uint32_t *a1)
{
  a1[6] = 0;
  a1[9] = 0;
  a1[7] = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Curl_httpchunk_read  (binary VA: 0x1a683e0)
// Original: Curl_httpchunk_read
// ----------------------------------------------------------------------------
int Curl_httpchunk_read(int a1, char *a2, size_t a3, uint32_t *a4)
{
  size_t v4;
  char *v5;
  size_t v6;
  int v7;
  int result;
  char v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  size_t v15;
  int v16;
  int (*v17)(char *, int, size_t, uint32_t);
  char v18;
  int v19;
  int v20;
  bool v21;
  int v22;
  size_t v23;
  size_t v24;
  size_t v25;
  int v26;
  int v27;

  v4 = a3;
  v5 = a2;
  v6 = a3;
  v7 = *(uint32_t *)a1;
  *a4 = 0;
  if ( *(uint8_t *)(v7 + 708) == 0
    || *(uint8_t *)(v7 + 237) != 0
    || (v26 = v7, v21 = Curl_client_write(a1, 1, a2, a3) == nullptr, result = 4, v7 = v26, v4 = a3, v21) )
  {
    if ( v4 == 0 )
      return 0;
    v27 = v7;
    while ( 1 )
    {
      switch ( *(uint32_t *)(a1 + 28) )
      {
        case 1:
          v18 = *v5;
          if ( (uint8_t)(*v5 - 65) <= 5u
            || (uint8_t)(v18 - 48) <= 9u
            || (uint8_t)(v18 - 97) <= 5u )
          {
            v20 = *(uint32_t *)(a1 + 24);
            if ( v20 <= 15 )
            {
              *(uint8_t *)(a1 + v20 + 4) = v18;
              ++v5;
              --v6;
              *(uint32_t *)(a1 + 24) = v20 + 1;
              goto LABEL_11;
            }
            return 1;
          }
          else
          {
            v19 = *(uint32_t *)(a1 + 24);
            if ( v19 != 0 )
            {
              *(uint8_t *)(a1 + v19 + 4) = 0;
              *(uint32_t *)(a1 + 32) = strtoul((const char *)(a1 + 4), nullptr, 16);
              *(uint32_t *)(a1 + 28) = 2;
              goto LABEL_11;
            }
            return 2;
          }
        case 2:
          if ( *v5 == 13 )
            *(uint32_t *)(a1 + 28) = 3;
          --v6;
          ++v5;
          goto LABEL_11;
        case 3:
          if ( *v5 == 10 )
          {
            if ( *(uint32_t *)(a1 + 32) != 0 )
            {
              *(uint32_t *)(a1 + 28) = 4;
            }
            else
            {
              *(uint32_t *)(a1 + 28) = 9;
              *(uint32_t *)(a1 + 888) = 0;
            }
          }
          goto LABEL_15;
        case 4:
          v14 = *(uint32_t *)a1;
          v15 = *(uint32_t *)(a1 + 32);
          if ( v6 <= v15 )
            v15 = v6;
          if ( *(uint8_t *)(v14 + 709) != 0 )
            goto LABEL_36;
          v16 = *(uint32_t *)(v27 + 148);
          if ( v16 == 1 )
          {
            *(uint32_t *)(v27 + 104) = (uint32_t)(uintptr_t)(v5);
            v25 = v15;
            v17 = (int (*)(char *, int, size_t, uint32_t))Curl_unencode_deflate_write(
                                                                  (int *)a1,
                                                                  (uint32_t *)(v27 + 20),
                                                                  v15);
            v15 = v25;
LABEL_57:
            if ( v17 != nullptr )
              return 4;
            goto LABEL_58;
          }
          if ( v16 == 2 )
          {
            *(uint32_t *)(v27 + 104) = (uint32_t)(uintptr_t)(v5);
            v24 = v15;
            v17 = (int (*)(char *, int, size_t, uint32_t))Curl_unencode_gzip_write((int *)a1, v27 + 20, v15);
            v15 = v24;
            goto LABEL_57;
          }
          if ( v16 != 0 )
          {
            Curl_failf(
              v14,
              "Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.");
            return 6;
          }
LABEL_36:
          if ( *(uint8_t *)(v27 + 237) == 0 && *(uint8_t *)(v27 + 708) == 0 )
          {
            v23 = v15;
            v17 = Curl_client_write(a1, 1, v5, v15);
            v15 = v23;
            goto LABEL_57;
          }
LABEL_58:
          v5 += v15;
          v6 -= v15;
          *a4 += v15;
          v21 = *(uint32_t *)(a1 + 32) == v15;
          *(uint32_t *)(a1 + 32) -= v15;
          if ( v21 )
            *(uint32_t *)(a1 + 28) = 5;
          goto LABEL_11;
        case 5:
          if ( *v5 != 13 )
            return 3;
          *(uint32_t *)(a1 + 28) = 6;
          ++v5;
          --v6;
          goto LABEL_11;
        case 6:
          if ( *v5 != 10 )
            return 3;
          ++v5;
          Curl_httpchunk_init((uint32_t *)a1);
          --v6;
          goto LABEL_11;
        case 7:
          if ( *v5 != 13 )
            return 3;
          *(uint32_t *)(a1 + 28) = 8;
          ++v5;
          --v6;
          goto LABEL_11;
        case 8:
          if ( *v5 != 10 )
            return 3;
          *(uint32_t *)(a1 + 36) = v6 - 1;
          return -1;
        case 9:
          v9 = *v5;
          if ( *v5 == 13 )
          {
            v22 = *(uint32_t *)(a1 + 888);
            if ( v22 == 0 )
            {
              *(uint32_t *)(a1 + 28) = 11;
              goto LABEL_11;
            }
            *(uint8_t *)(*(uint32_t *)(a1 + 880) + v22) = 13;
            *(uint8_t *)(*(uint32_t *)(a1 + 880) + v22 + 1) = 10;
            *(uint32_t *)(a1 + 888) = v22 + 2;
            *(uint8_t *)(*(uint32_t *)(a1 + 880) + v22 + 2) = 0;
            if ( *(uint8_t *)(v27 + 708) == 0
              && Curl_client_write(a1, 2, *(char **)(a1 + 880), *(uint32_t *)(a1 + 888)) != nullptr )
            {
              return 4;
            }
            *(uint32_t *)(a1 + 888) = 0;
            *(uint32_t *)(a1 + 28) = 10;
          }
          else
          {
            v10 = *(uint32_t *)(a1 + 888);
            v11 = *(uint32_t *)(a1 + 884);
            if ( v10 < v11 )
            {
              v13 = *(uint8_t **)(a1 + 880);
            }
            else
            {
              if ( v11 != 0 )
              {
                v12 = 2 * v11;
                *(uint32_t *)(a1 + 884) = v12;
                v13 = (uint8_t *)((int (*)(uint32_t, int))Curl_crealloc)(*(uint32_t *)(a1 + 880), v12 + 3);
              }
              else
              {
                *(uint32_t *)(a1 + 884) = 128;
                v13 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 131);
              }
              if ( v13 == nullptr )
                return 7;
              *(uint32_t *)(a1 + 880) = (uint32_t)(uintptr_t)(v13);
              v10 = *(uint32_t *)(a1 + 888);
              v9 = *v5;
            }
            v13[v10] = v9;
            *(uint32_t *)(a1 + 888) = v10 + 1;
          }
LABEL_15:
          ++v5;
          --v6;
LABEL_11:
          if ( v6 == 0 )
            return 0;
          break;
        case 0xA:
          if ( *v5 != 10 )
            return 3;
          *(uint32_t *)(a1 + 28) = 11;
          goto LABEL_15;
        case 0xB:
          if ( *v5 == 13 )
          {
            ++v5;
            --v6;
            *(uint32_t *)(a1 + 28) = 8;
          }
          else
          {
            *(uint32_t *)(a1 + 28) = 9;
          }
          goto LABEL_11;
        default:
          return 5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_input_digest  (binary VA: 0x1a68a00)
// Original: Curl_input_digest
// ----------------------------------------------------------------------------
int Curl_input_digest(uint32_t *a1, char a2, uint8_t *a3)
{
  uint8_t *v3;
  int v4;
  uint8_t v5;
  int v6;
  int v7;
  char *v8;
  uint8_t v9;
  int v10;
  char v11;
  int j;
  uint8_t *v14;
  char *v15;
  char v16;
  char *v17;
  int v18;
  char v19; // bp
  int v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  char *s;
  char *i;
  int v27;
  char v28;
  char *v29;
  char *v30;
  typedef uint8_t _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char *_g4_t_save_ptr;
  typedef uint8_t _g4_t_v40[256];
  typedef uint8_t _g4_t_v41[1052];
  enum : size_t {
    _g4_s0 = 1440u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v35)) > _g4_s4 ? (32u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v36)) > _g4_s5 ? (32u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v37)) > _g4_s6 ? (36u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (43u + sizeof(_g4_t_v38)) > _g4_s7 ? (43u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_save_ptr)) > _g4_s8 ? (60u + sizeof(_g4_t_save_ptr)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v40)) > _g4_s9 ? (64u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (320u + sizeof(_g4_t_v41)) > _g4_s10 ? (320u + sizeof(_g4_t_v41)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 43u);
  _g4_t_save_ptr &save_ptr = *reinterpret_cast<_g4_t_save_ptr *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 320u);

  v3 = a3;
  v4 = *a1 + 34040;
  if ( a2 != 0 )
    v4 = *a1 + 34076;
  v33 = v4;
  v5 = *a3;
  if ( *a3 != 0 )
  {
    do
    {
      if ( isspace(v5) == 0 )
        break;
      v5 = *++v3;
    }
    while ( *v3 != 0 );
  }
  v6 = Curl_raw_nequal("Digest", v3, 6);
  v7 = 0;
  if ( v6 == 0 )
    return v7;
  v8 = (char *)(v3 + 6);
  v37 = *(uint32_t *)v33;
  sub_1A688E0((int *)v33);
  v9 = v3[6];
  v34 = 0;
  v38 = 0;
LABEL_9:
  if ( v9 == 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v31 = v9;
    v10 = isspace(v9);
    v11 = v31;
    if ( v10 == 0 )
      break;
    v9 = *++v8;
    if ( v9 == 0 )
      goto LABEL_12;
  }
  if ( v31 == 61 )
  {
    v40[0] = 0;
    v15 = v8;
LABEL_23:
    v16 = v15[1];
    if ( v16 == 34 )
    {
      v8 = v15 + 2;
      v35 = 1;
      v16 = v15[2];
    }
    else
    {
      v8 = v15 + 1;
      v35 = 0;
    }
    v17 = (char *)(v41);
    if ( v16 != 0 )
    {
      v18 = 1022;
      v19 = 0;
      while ( v16 != 34 )
      {
        if ( v16 <= 34 )
        {
          if ( v16 == 10 || v16 == 13 )
          {
            v20 = 0;
            goto LABEL_30;
          }
          goto LABEL_29;
        }
        if ( v16 == 44 )
        {
          v20 = 0;
          if ( v35 != 0 )
            goto LABEL_29;
LABEL_30:
          v16 = *++v8;
          if ( *v8 == 0 )
            goto LABEL_38;
          goto LABEL_31;
        }
        if ( v16 != 92 || v19 != 0 )
          goto LABEL_29;
        ++v8;
        *v17 = 92;
        v16 = *v8;
        ++v17;
        v20 = v18;
        v19 = 1;
        if ( *v8 == 0 )
          goto LABEL_38;
LABEL_31:
        v18 = v20 - 1;
        if ( v20 == 0 )
          goto LABEL_38;
      }
      if ( v19 == 0 )
      {
        v20 = 0;
        if ( v35 != 0 )
          goto LABEL_30;
      }
LABEL_29:
      *v17 = v16;
      v20 = v18;
      ++v17;
      v19 = 0;
      goto LABEL_30;
    }
LABEL_38:
    *v17 = 0;
    if ( Curl_raw_equal(v40, "nonce") != 0 )
    {
      v21 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v41));
      *(uint32_t *)v33 = (uint32_t)(uintptr_t)(v21);
      if ( v21 != nullptr )
        goto LABEL_43;
      return 3;
    }
    if ( Curl_raw_equal(v40, "stale") != 0 )
    {
      if ( Curl_raw_equal(v41, "true") != 0 )
      {
        *(uint8_t *)(v33 + 16) = 1;
        *(uint32_t *)(v33 + 32) = 1;
      }
      goto LABEL_43;
    }
    if ( Curl_raw_equal(v40, "realm") != 0 )
    {
      v23 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v41));
      *(uint32_t *)(v33 + 8) = (uint32_t)(uintptr_t)(v23);
      if ( v23 != nullptr )
        goto LABEL_43;
      return 3;
    }
    if ( Curl_raw_equal(v40, "opaque") != 0 )
    {
      v24 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v41));
      *(uint32_t *)(v33 + 20) = (uint32_t)(uintptr_t)(v24);
      if ( v24 != nullptr )
        goto LABEL_43;
      return 3;
    }
    if ( Curl_raw_equal(v40, "qop") == 0 )
    {
      if ( Curl_raw_equal(v40, "algorithm") == 0 )
        goto LABEL_43;
      v29 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v41));
      *(uint32_t *)(v33 + 28) = (uint32_t)(uintptr_t)(v29);
      if ( v29 != nullptr )
      {
        if ( Curl_raw_equal(v41, "MD5-sess") != 0 )
        {
          *(uint32_t *)(v33 + 12) = 1;
          goto LABEL_43;
        }
        if ( Curl_raw_equal(v41, "MD5") != 0 )
        {
          *(uint32_t *)(v33 + 12) = 0;
          goto LABEL_43;
        }
        return 2;
      }
      return 3;
    }
    s = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), v41));
    v36 = s;
    if ( s == nullptr )
      return 3;
    for ( i = strtok_r(s, ",", &save_ptr); i != nullptr; i = strtok_r(nullptr, ",", &save_ptr) )
    {
      if ( Curl_raw_equal(i, "auth") != 0 )
      {
        v38 = 1;
      }
      else
      {
        v27 = Curl_raw_equal(i, "auth-int");
        v28 = v34;
        if ( v27 != 0 )
          v28 = 1;
        v34 = v28;
      }
    }
    ((void (*)(char *))Curl_cfree)(v36);
    if ( v38 != 0 )
    {
      v30 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), "auth"));
    }
    else
    {
      if ( v34 == 0 )
        goto LABEL_43;
      v30 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), "auth-int"));
    }
    *(uint32_t *)(v33 + 24) = (uint32_t)(uintptr_t)(v30);
    if ( v30 == nullptr )
      return 3;
LABEL_43:
    while ( *v8 != 0 )
    {
      v32 = *v8;
      if ( isspace((uint8_t)*v8) == 0 )
      {
        v22 = v8;
        if ( v32 == 44 )
        {
          ++v8;
          v9 = v22[1];
        }
        else
        {
          v9 = *v8;
        }
        goto LABEL_9;
      }
      ++v8;
    }
LABEL_12:
    v40[0] = 0;
    goto LABEL_13;
  }
  for ( j = 0; j != 255; ++j )
  {
    v14 = &v40[j + 1];
    v40[j] = v11;
    v15 = &v8[j + 1];
    v11 = v8[j + 1];
    if ( v11 == 61 || v11 == 0 )
    {
      *v14 = 0;
      if ( v11 != 61 )
        goto LABEL_13;
      goto LABEL_23;
    }
  }
  *v14 = 0;
LABEL_13:
  if ( v37 == 0 )
    return *(uint32_t *)v33 == 0 ? 1 : 4;
  v7 = 1;
  if ( *(uint8_t *)(v33 + 16) != 0 )
    return *(uint32_t *)v33 == 0 ? 1 : 4;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: Curl_output_digest  (binary VA: 0x1a68fd0)
// Original: Curl_output_digest
// ----------------------------------------------------------------------------
int Curl_output_digest(int *a1, char a2, int a3, char *s)
{
  int v4;
  uint32_t *v5;
  void *v6;
  void *v7;
  char *v8;
  int v9;
  void *v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  const char *v17;
  const char *v18;
  size_t v19;
  const char *v20;
  const char *v21;
  int v23;
  size_t v24;
  int v25;
  char *v26;
  const char *v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39[7];
  typedef int _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[33];
  typedef uint8_t _g4_t_v42[61];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v30)) > _g4_s2 ? (0u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v31)) > _g4_s3 ? (0u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v32)) > _g4_s4 ? (0u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v33)) > _g4_s5 ? (0u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v34)) > _g4_s6 ? (4u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v35)) > _g4_s7 ? (8u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v36)) > _g4_s8 ? (16u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v37)) > _g4_s9 ? (24u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v38)) > _g4_s10 ? (32u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (39u + sizeof(_g4_t_v39)) > _g4_s11 ? (39u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (46u + sizeof(_g4_t_v40)) > _g4_s12 ? (46u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (62u + sizeof(_g4_t_v41)) > _g4_s13 ? (62u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (95u + sizeof(_g4_t_v42)) > _g4_s14 ? (95u + sizeof(_g4_t_v42)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 39u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 46u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 62u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 95u);

  v4 = *a1;
  if ( a2 != 0 )
  {
    v5 = (uint32_t *)(v4 + 34076);
    v34 = a1 + 125;
    v6 = (void *)a1[67];
    v7 = (void *)a1[68];
    v35 = v4 + 34128;
  }
  else
  {
    v5 = (uint32_t *)(v4 + 34040);
    v34 = a1 + 128;
    v6 = (void *)a1[65];
    v7 = (void *)a1[66];
    v35 = v4 + 34112;
  }
  if ( *v34 != 0 )
  {
    v28 = *a1;
    Curl_safefree(*v34);
    *v34 = 0;
    v4 = v28;
  }
  if ( v6 == nullptr )
    v6 = &unk_1B15112;
  if ( v7 == nullptr )
    v7 = &unk_1B15112;
  if ( *v5 != 0 )
  {
    *(uint8_t *)(v35 + 12) = 1;
    if ( v5[8] != 0 )
    {
      if ( v5[1] != 0 )
        goto LABEL_12;
    }
    else
    {
      v23 = v5[1];
      v5[8] = 1;
      if ( v23 != 0 )
        goto LABEL_12;
    }
    v32 = v4;
    curlx_tvnow(&v37);
    curl_msnprintf((int)(uintptr_t)(v39), 7, (int)(uintptr_t)("%06ld"), v37);
    v24 = strlen(v39);
    v25 = Curl_base64_encode(v32, v39, v24, (int)(uintptr_t)(&v38));
    v9 = 27;
    if ( v25 == 0 )
      return v9;
    v5[1] = v38;
LABEL_12:
    v8 = (char *)curl_maprintf("%s:%s:%s", v6, v5[2], v7);
    v9 = 27;
    if ( v8 == nullptr )
      return v9;
    v29 = (int)(uintptr_t)(v8);
    Curl_md5it((int)(uintptr_t)(v40), v8);
    ((void (*)(int))Curl_cfree)(v29);
    v10 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 33));
    v36 = (int)(uintptr_t)(v10);
    v9 = 27;
    if ( v10 == nullptr )
      return v9;
    sub_1A689A0((int)(uintptr_t)(v40), (int)(uintptr_t)(v10));
    if ( v5[3] == 1 )
    {
      v26 = (char *)curl_maprintf("%s:%s:%s", v36, *v5, v5[1]);
      v9 = 27;
      if ( v26 == nullptr )
        return v9;
      v33 = (int)(uintptr_t)(v26);
      Curl_md5it((int)(uintptr_t)(v40), v26);
      ((void (*)(int))Curl_cfree)(v33);
      sub_1A689A0((int)(uintptr_t)(v40), v36);
    }
    if ( *(uint8_t *)(v35 + 14) != 0 && (v11 = strchr(s, 63)) != nullptr )
      v12 = (char *)curl_maprintf("%s:%.*s", a3, v11 - s, s);
    else
      v12 = (char *)curl_maprintf("%s:%s", a3, s);
    if ( v12 == nullptr )
    {
      ((void (*)(int))Curl_cfree)(v36);
      return 27;
    }
    v13 = v5[6];
    if ( v13 != 0 )
    {
      v30 = (int)(uintptr_t)(v12);
      Curl_raw_equal(v13, "auth-int");
      v12 = (char *)v30;
    }
    v31 = (int)(uintptr_t)(v12);
    Curl_md5it((int)(uintptr_t)(v40), v12);
    ((void (*)(int))Curl_cfree)(v31);
    sub_1A689A0((int)(uintptr_t)(v40), (int)(uintptr_t)(v42));
    v14 = v5[6];
    if ( v14 != 0 )
      v15 = (char *)curl_maprintf("%s:%s:%08x:%s:%s:%s", v36, *v5, v5[8], v5[1], v14, v42);
    else
      v15 = (char *)curl_maprintf("%s:%s:%s", v36, *v5, v42);
    ((void (*)(int))Curl_cfree)(v36);
    v9 = 27;
    if ( v15 == nullptr )
      return v9;
    Curl_md5it((int)(uintptr_t)(v40), v15);
    ((void (*)(char *))Curl_cfree)(v15);
    sub_1A689A0((int)(uintptr_t)(v40), (int)(uintptr_t)(v41));
    v16 = v5[6];
    if ( v16 != 0 )
    {
      v17 = "Proxy-";
      if ( a2 == 0 )
        v17 = (const char *)&unk_1B15112;
      *v34 = curl_maprintf(
               "%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, "
               "qop=\"%s\", response=\"%s\"",
               v17,
               v6,
               v5[2],
               *v5,
               s,
               v5[1],
               v5[8],
               v16,
               v41);
      if ( Curl_raw_equal(v5[6], "auth") != 0 )
        ++v5[8];
      v18 = (const char *)*v34;
    }
    else
    {
      v27 = "Proxy-";
      if ( a2 == 0 )
        v27 = (const char *)&unk_1B15112;
      v18 = (const char *)curl_maprintf(
                            "%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\"",
                            v27,
                            v6,
                            v5[2],
                            *v5,
                            s,
                            v41);
      *v34 = (int)(uintptr_t)(v18);
    }
    v9 = 27;
    if ( v18 == nullptr )
      return v9;
    if ( v5[5] != 0 )
    {
      v18 = (const char *)curl_maprintf("%s, opaque=\"%s\"", v18, v5[5]);
      v9 = 27;
      if ( v18 == nullptr )
        return v9;
      ((void (*)(int))Curl_cfree)(*v34);
      *v34 = (int)(uintptr_t)(v18);
    }
    if ( v5[7] == 0 )
      goto LABEL_37;
    v18 = (const char *)curl_maprintf("%s, algorithm=\"%s\"", v18, v5[7]);
    v9 = 27;
    if ( v18 != nullptr )
    {
      ((void (*)(int))Curl_cfree)(*v34);
      *v34 = (int)(uintptr_t)(v18);
LABEL_37:
      v19 = strlen(v18);
      v20 = (const char *)((int (*)(const char *, size_t))Curl_crealloc)(v18, v19 + 3);
      v21 = v20;
      v9 = 27;
      if ( v20 != nullptr )
      {
        strcpy((char *)&v20[strlen(v20)], "\r\n");
        *v34 = (int)(uintptr_t)(v21);
        return 0;
      }
    }
    return v9;
  }
  *(uint8_t *)(v35 + 12) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_digest_cleanup  (binary VA: 0x1a69600)
// Original: Curl_digest_cleanup
// ----------------------------------------------------------------------------
int Curl_digest_cleanup(int a1)
{
  sub_1A688E0((int *)(a1 + 34040));
  return sub_1A688E0((int *)(a1 + 34076));
}

// ----------------------------------------------------------------------------
// Function: Curl_input_ntlm  (binary VA: 0x1a698a0)
// Original: Curl_input_ntlm
// ----------------------------------------------------------------------------
int Curl_input_ntlm(int a1, char a2, uint8_t *a3)
{
  uint8_t *v3;
  uint32_t *v4;
  uint8_t v5;
  int v6;
  int v7;
  uint8_t v9;
  uint8_t *v10;
  unsigned int v11;
  const char *s1;
  typedef void *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v3 = a3;
  v4 = (uint32_t *)(a1 + 608);
  if ( a2 == 0 )
    v4 = (uint32_t *)(a1 + 592);
  v5 = *a3;
  if ( *a3 != 0 )
  {
    do
    {
      if ( isspace(v5) == 0 )
        break;
      v5 = *++v3;
    }
    while ( *v3 != 0 );
  }
  v6 = Curl_raw_nequal("NTLM", v3, 4);
  v7 = 3;
  if ( v6 == 0 )
    return v7;
  v9 = v3[4];
  v10 = v3 + 4;
  if ( v9 != 0 )
  {
    while ( isspace(v9) != 0 )
    {
      v9 = *++v10;
      if ( *v10 == 0 )
        goto LABEL_19;
    }
    v11 = Curl_base64_decode(v10, &v13);
    s1 = (const char *)v13;
    v7 = 1;
    if ( v13 != nullptr )
    {
      *v4 = 2;
      v4[1] = 0;
      if ( v11 > 0x1F && strcmp(s1, "NTLMSSP") == 0 && memcmp(s1 + 8, &unk_1D35E64, 4u) == 0 )
      {
        v4[1] = (*((uint8_t *)s1 + 23) << 24)
              | *((uint8_t *)s1 + 20)
              | (*((uint8_t *)s1 + 22) << 16)
              | (*((uint8_t *)s1 + 21) << 8);
        v4[2] = *((uint32_t *)s1 + 6);
        v4[3] = *((uint32_t *)s1 + 7);
        ((void (*)(const char *))Curl_cfree)(s1);
        return 3;
      }
      else
      {
        ((void (*)(const char *))Curl_cfree)(s1);
        return 1;
      }
    }
    return v7;
  }
LABEL_19:
  v7 = 1;
  if ( *v4 != 0 )
    return v7;
  *v4 = 1;
  return 3;
}

// ----------------------------------------------------------------------------
// Function: Curl_output_ntlm  (binary VA: 0x1a69a40)
// Original: Curl_output_ntlm
// ----------------------------------------------------------------------------
int Curl_output_ntlm(int *a1, char a2)
{
  unsigned int v2;
  int16_t *v3;
  int16_t *v4;
  int v5;
  const char *v6;
  const char *v7;
  int v8;
  int result;
  char *v10;
  char *v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  char *v18;
  int v19;
  char v20;
  size_t v21;
  char *v22;
  int v23;
  char v24;
  size_t v25;
  char *v26;
  int v27;
  char v28;
  int v29;
  const char *v30;
  int v31;
  size_t v32;
  size_t v33;
  const char *v34;
  size_t v35;
  typedef size_t _g4_t_n;
  typedef int *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int *_g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef const char *_g4_t_src;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char _g4_t_v51[9];
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[6];
  typedef uint8_t _g4_t_v59[24];
  typedef uint32_t _g4_t_v60[2];
  typedef uint32_t _g4_t_v61[3];
  typedef char _g4_t_v62;
  typedef int _g4_t_v63[32];
  typedef char _g4_t_v64[4];
  typedef uint32_t _g4_t_v65[255];
  typedef char _g4_t_s[4];
  typedef char _g4_t_v67;
  typedef int16_t _g4_t_v68;
  typedef int16_t _g4_t_v69;
  enum : size_t {
    _g4_s0 = 2448u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v37)) > _g4_s1 ? (4u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v38)) > _g4_s2 ? (8u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v39)) > _g4_s3 ? (16u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v40)) > _g4_s4 ? (20u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v41)) > _g4_s5 ? (20u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v43)) > _g4_s7 ? (28u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v44)) > _g4_s8 ? (36u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v45)) > _g4_s9 ? (40u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_src)) > _g4_s10 ? (44u + sizeof(_g4_t_src)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v47)) > _g4_s11 ? (48u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v48)) > _g4_s12 ? (52u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v49)) > _g4_s13 ? (56u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v50)) > _g4_s14 ? (60u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (67u + sizeof(_g4_t_v51)) > _g4_s15 ? (67u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v52)) > _g4_s16 ? (76u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v53)) > _g4_s17 ? (80u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v54)) > _g4_s18 ? (84u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v55)) > _g4_s19 ? (88u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v56)) > _g4_s20 ? (92u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v57)) > _g4_s21 ? (96u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v58)) > _g4_s22 ? (100u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v59)) > _g4_s23 ? (124u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v60)) > _g4_s24 ? (148u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v61)) > _g4_s25 ? (156u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v62)) > _g4_s26 ? (168u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v63)) > _g4_s27 ? (172u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (303u + sizeof(_g4_t_v64)) > _g4_s28 ? (303u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (307u + sizeof(_g4_t_v65)) > _g4_s29 ? (307u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (1327u + sizeof(_g4_t_s)) > _g4_s30 ? (1327u + sizeof(_g4_t_s)) : _g4_s30,
    _g4_s32 = (1331u + sizeof(_g4_t_v67)) > _g4_s31 ? (1331u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (1332u + sizeof(_g4_t_v68)) > _g4_s32 ? (1332u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (1334u + sizeof(_g4_t_v69)) > _g4_s33 ? (1334u + sizeof(_g4_t_v69)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 67u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 88u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 100u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 148u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 156u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 168u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 172u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 303u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 307u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 1327u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 1331u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 1332u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 1334u);

  v2 = 1020;
  v3 = &v68;
  *(uint32_t *)s = 0;
  v67 = 0;
  if ( ((unsigned int)(uintptr_t)(&v68) & 2) != 0 )
  {
    v68 = 0;
    v2 = 1018;
    v3 = &v69;
  }
  memset(v3, 0, 4 * (v2 >> 2));
  v4 = &v3[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4 = 0;
  v40 = strlen(s);
  v47 = 0;
  if ( a2 != 0 )
  {
    v5 = *a1 + 34128;
    v39 = a1 + 125;
    v6 = (const char *)a1[67];
    v7 = (const char *)a1[68];
    v37 = a1 + 152;
  }
  else
  {
    v5 = *a1 + 34112;
    v39 = a1 + 128;
    v6 = (const char *)a1[65];
    v7 = (const char *)a1[66];
    v37 = a1 + 148;
  }
  v38 = v5;
  if ( v6 == nullptr )
    v6 = (const char *)&unk_1B15112;
  *(uint8_t *)(v5 + 12) = 0;
  if ( v7 == nullptr )
    v7 = (const char *)&unk_1B15112;
  if ( *v37 == 2 )
  {
    v44 = v37[1] & 1;
    v10 = (char *)(strchr(v6, 92));
    if ( v10 != nullptr || (v10 = (char *)(strchr(v6, 47))) != nullptr )
    {
      v45 = v10 + 1;
      v41 = v10 - v6;
      src = v6;
    }
    else
    {
      v45 = (char *)v6;
      v41 = 0;
      src = (const char *)&unk_1B15112;
    }
    v43 = strlen(v45);
    if ( Curl_gethostname(s, 1024) != 0 )
    {
      Curl_infof(*a1, "gethostname() failed, continuing without!");
      v42 = 0;
    }
    else
    {
      v11 = strchr(s, 46);
      if ( v11 != nullptr )
        *v11 = 0;
      v42 = strlen(s);
    }
    if ( v44 != 0 )
    {
      v43 *= 2;
      v41 *= 2;
      v42 *= 2;
    }
    if ( (*((uint8_t *)v37 + 6) & 8) != 0 )
    {
      Curl_ossl_seed(*a1);
      RAND_bytes((int)(uintptr_t)(&v48), 8);
      v52 = v48;
      v53 = v49;
      v61[1] = v49;
      v54 = 0;
      v12 = v37[2];
      v55 = 0;
      v60[0] = v12;
      v60[1] = v37[3];
      v56 = 0;
      v57 = 0;
      v61[0] = v48;
      MD5_Init((int)(uintptr_t)(v63));
      MD5_Update((int)(uintptr_t)(v63), (char *)v60, 0x10u);
      MD5_Final(&v50, (int)(uintptr_t)(v63));
      v13 = sub_1A697E0(v7, (int)(uintptr_t)(v59));
      result = 27;
      if ( v13 == 27 )
        return result;
      sub_1A69700(v59, (uint8_t *)&v50, v58);
    }
    else
    {
      v31 = sub_1A697E0(v7, (int)(uintptr_t)(v59));
      result = 27;
      if ( v31 == 27 )
        return result;
      sub_1A69700(v59, (uint8_t *)v37 + 8, v58);
      v32 = strlen(v7);
      v33 = 14 - v32;
      if ( v32 > 0xD )
      {
        v33 = 0;
        v32 = 14;
      }
      n = v33;
      Curl_strntoupper(&v50, v7, v32);
      memset(&v51[v32 - 1], 0, n);
      sub_1A69630(&v50, v63);
      DES_ecb_encrypt((&byte_1D35E68), v60, (int)(uintptr_t)(v63), 1);
      sub_1A69630(v51, v63);
      DES_ecb_encrypt((&byte_1D35E68), v61, (int)(uintptr_t)(v63), 1);
      v61[2] = 0;
      v62 = 0;
      sub_1A69700(v60, (uint8_t *)v37 + 8, &v52);
    }
    v14 = v37[1];
    v15 = curl_msnprintf(
            (int)(uintptr_t)(v64),
            1024,
            (int)(uintptr_t)(&unk_1BEE018),
            0,
            0,
            0,
            0,
            24,
            0,
            24,
            0,
            64,
            0,
            0,
            0,
            24,
            0,
            24,
            0,
            88,
            0,
            0,
            0,
            (uint8_t)v41,
            BYTE1(v41),
            (uint8_t)v41,
            BYTE1(v41),
            112,
            0,
            0,
            0,
            (uint8_t)v43,
            BYTE1(v43),
            (uint8_t)v43,
            BYTE1(v43),
            (uint8_t)(v41 + 112),
            (uint8_t)((uint16_t)(v41 + 112) >> 8),
            0,
            0,
            (uint8_t)v42,
            BYTE1(v42),
            (uint8_t)v42,
            BYTE1(v42),
            (uint8_t)(v41 + 112 + v43),
            (uint8_t)((uint16_t)(v41 + 112 + v43) >> 8),
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (uint8_t)v14,
            BYTE1(v14),
            BYTE2(v14),
            HIBYTE(v14));
    v16 = v15;
    if ( v15 <= 0x3E7 )
    {
      *(uint32_t *)&v64[v15] = v52;
      *(uint32_t *)((char *)v65 + v15) = v53;
      *(uint32_t *)((char *)&v65[1] + v15) = v54;
      *(uint32_t *)((char *)&v65[2] + v15) = v55;
      *(uint32_t *)((char *)&v65[3] + v15) = v56;
      *(uint32_t *)((char *)&v65[4] + v15) = v57;
      v17 = v15 + 24;
      if ( v16 + 24 > 0x3E7 )
      {
        v16 += 24;
      }
      else
      {
        *(uint32_t *)((char *)&v65[5] + v16) = v58[0];
        *(uint32_t *)&v64[v17 + 4] = v58[1];
        *(uint32_t *)((char *)&v65[1] + v17) = v58[2];
        *(uint32_t *)((char *)&v65[2] + v17) = v58[3];
        *(uint32_t *)((char *)&v65[3] + v17) = v58[4];
        *(uint32_t *)((char *)&v65[4] + v17) = v58[5];
        v16 += 48;
      }
    }
    if ( v16 + v43 + v41 + v42 > 0x3FF )
    {
      Curl_failf(*a1, "user + domain + host name too big");
      return 27;
    }
    else
    {
      if ( v44 != 0 )
      {
        v18 = &v64[v16];
        if ( v41 >> 1 != 0 )
        {
          v19 = 0;
          do
          {
            v20 = src[v19];
            v18[2 * v19 + 1] = 0;
            v18[2 * v19++] = v20;
          }
          while ( v19 != v41 >> 1 );
        }
        v21 = v41 + v16;
        v22 = &v64[v21];
        if ( v43 >> 1 != 0 )
        {
          v23 = 0;
          do
          {
            v24 = v45[v23];
            v22[2 * v23 + 1] = 0;
            v22[2 * v23++] = v24;
          }
          while ( v23 != v43 >> 1 );
        }
        v25 = v43 + v21;
        v26 = &v64[v25];
        if ( v42 >> 1 != 0 )
        {
          v27 = 0;
          do
          {
            v28 = s[v27];
            v26[2 * v27 + 1] = 0;
            v26[2 * v27++] = v28;
          }
          while ( v27 != v42 >> 1 );
        }
      }
      else
      {
        memcpy(&v64[v16], src, v41);
        v35 = v41 + v16;
        memcpy(&v64[v35], v45, v43);
        v25 = v43 + v35;
        memcpy(&v64[v25], s, v42);
      }
      v29 = Curl_base64_encode(0, v64, v42 + v25, (int)(uintptr_t)(&v47));
      result = 27;
      if ( v29 != 0 )
      {
        Curl_safefree(*v39);
        v30 = "Proxy-";
        if ( a2 == 0 )
          v30 = (const char *)&unk_1B15112;
        *v39 = curl_maprintf("%sAuthorization: NTLM %s\r\n", v30, v47);
        ((void (*)(int))Curl_cfree)(v47);
        *v37 = 3;
        *(uint8_t *)(v38 + 12) = 1;
        return 0;
      }
    }
  }
  else if ( *v37 == 3 )
  {
    if ( *v39 != 0 )
    {
      ((void (*)(int))Curl_cfree)(*v39);
      *v39 = 0;
    }
    *(uint8_t *)(v38 + 12) = 1;
    return 0;
  }
  else
  {
    curl_msnprintf(
      (int)(uintptr_t)(v64),
      1024,
      (int)(uintptr_t)(&unk_1BEDFAC),
      0,
      0,
      0,
      0,
      6,
      130,
      8,
      0,
      0,
      0,
      0,
      0,
      (uint8_t)v40,
      BYTE1(v40),
      0,
      0,
      (uint8_t)v40,
      BYTE1(v40),
      (uint8_t)v40,
      BYTE1(v40),
      0,
      0,
      0,
      0,
      s,
      &unk_1B15112);
    v8 = Curl_base64_encode(0, v64, v40 + 32, (int)(uintptr_t)(&v47));
    result = 27;
    if ( v8 != 0 )
    {
      Curl_safefree(*v39);
      v34 = "Proxy-";
      if ( a2 == 0 )
        v34 = (const char *)&unk_1B15112;
      *v39 = curl_maprintf("%sAuthorization: NTLM %s\r\n", v34, v47);
      ((void (*)(int))Curl_cfree)(v47);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_ntlm_cleanup  (binary VA: 0x1a6a6a0)
// Original: Curl_ntlm_cleanup
// ----------------------------------------------------------------------------
void Curl_ntlm_cleanup()
{
  ;
}



// ============================================================================
// Address:   0x1a6a6b0 (size: 3504 bytes)
// Symbol:    Curl_proxyCONNECT
// Demangled: Curl_proxyCONNECT
// ============================================================================
int (*Curl_proxyCONNECT(int a1, int a2, int a3, uint16_t a4))(char *, int, size_t, uint32_t)
{
  int v4;
  uint64_t v5; // rdi
  char *v6;
  char *v7;
  int v8;
  const char *v9;
  bool v10;
  const char *v11;
  int v12;
  void *v13;
  void *v14;
  int v15;
  int (*result)(char *, int, size_t, uint32_t);
  int v17;
  int v18;
  int v19; // kr00_4
  int v20;
  int v21;
  int v22;
  char *v23;
  size_t v24;
  char v25;
  int v26;
  int64_t v27; // kr08_8
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef size_t _g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef uint8_t *_g4_t_ptr;
  typedef void *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef const char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char _g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v32)) > _g4_s3 ? (12u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v33)) > _g4_s4 ? (12u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v34)) > _g4_s5 ? (16u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v35)) > _g4_s6 ? (16u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v36)) > _g4_s7 ? (20u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v37)) > _g4_s8 ? (24u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_s)) > _g4_s9 ? (28u + sizeof(_g4_t_s)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_sa)) > _g4_s10 ? (28u + sizeof(_g4_t_sa)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_ptr)) > _g4_s11 ? (32u + sizeof(_g4_t_ptr)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v41)) > _g4_s12 ? (32u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v42)) > _g4_s13 ? (36u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v43)) > _g4_s14 ? (40u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v44)) > _g4_s15 ? (44u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v45)) > _g4_s16 ? (44u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v46)) > _g4_s17 ? (48u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v47)) > _g4_s18 ? (48u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (63u + sizeof(_g4_t_v48)) > _g4_s19 ? (63u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v49)) > _g4_s20 ? (64u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v50)) > _g4_s21 ? (80u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (86u + sizeof(_g4_t_v51)) > _g4_s22 ? (86u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (87u + sizeof(_g4_t_v52)) > _g4_s23 ? (87u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v53)) > _g4_s24 ? (88u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v54)) > _g4_s25 ? (92u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v55)) > _g4_s26 ? (100u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v56)) > _g4_s27 ? (104u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v57)) > _g4_s28 ? (108u + sizeof(_g4_t_v57)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 28u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 63u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 86u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 87u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 100u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 104u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);

  v4 = 3600000;
  v55 = 0;
  v52 = 0;
  v36 = *(uint32_t *)a1;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 424) != 0 )
    v4 = *(uint32_t *)(v36 + 424);
  v43 = v4;
  v5 = 0;
  v50 = a2 + 76;
  v42 = *(uint32_t *)(a1 + 4 * (a2 + 76));
  *(uint8_t *)(a1 + 458) = 0;
  while ( 1 )
  {
    if ( *(uint8_t *)(a1 + 449) == 0 )
    {
      Curl_infof(v36, "Establish HTTP proxy tunnel to %s:%hu\n", a3, a4);
      if ( *(uint32_t *)(v36 + 244) != 0 )
      {
        free(*(void **)(v36 + 244));
        *(uint32_t *)(v36 + 244) = 0;
      }
      v34 = Curl_add_buffer_init();
      if ( v34 == nullptr )
        return (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
      v6 = (char *)curl_maprintf("%s:%hu", a3, a4);
      v7 = v6;
      if ( v6 == nullptr )
      {
        free(v34);
        return (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
      }
      v8 = Curl_http_output_auth(a1, (int)(uintptr_t)("CONNECT"), v6, 1);
      if ( v8 != 0 )
        goto LABEL_22;
      v9 = "1.1";
      if ( *(uint32_t *)(a1 + 276) == 1 )
        v9 = "1.0";
      s = (char *)v9;
      ptr = (uint8_t *)(&unk_1B15112);
      if ( Curl_checkheaders(v36, "Host:") == 0 )
      {
        ptr = (uint8_t *)curl_maprintf("Host: %s\r\n", v7);
        if ( ptr == nullptr )
        {
          free(v34);
          free(v7);
          return (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
        }
      }
      v10 = Curl_checkheaders(v36, "Proxy-Connection:") == 0;
      v11 = "Proxy-Connection: Keep-Alive\r\n";
      if ( !v10 )
        v11 = (const char *)&unk_1B15112;
      v44 = v11;
      v12 = Curl_checkheaders(v36, "User-Agent:");
      v13 = &unk_1B15112;
      if ( v12 == 0 && *(uint32_t *)(v36 + 824) != 0 )
        v13 = *(void **)(a1 + 504);
      v14 = *(void **)(a1 + 500);
      if ( v14 == nullptr )
        v14 = &unk_1B15112;
      v15 = Curl_add_bufferf((char **)v34, "CONNECT %s:%hu HTTP/%s\r\n%s%s%s%s", a3, a4, s, ptr, v14, v13, v44);
      if ( *ptr != 0 )
      {
        v33 = v15;
        free(ptr);
        v15 = v33;
      }
      if ( v15 != 0
        || (v15 = Curl_add_custom_headers(a1, (char **)v34)) != 0
        || (v15 = Curl_add_bufferf((char **)v34, "\r\n")) != 0
        || (v15 = Curl_add_buffer_send((char **)v34, (int *)a1, (uint32_t *)(v36 + 34324), 0, a2)) != 0 )
      {
        v29 = v15;
        Curl_failf(v36, "Failed sending CONNECT to proxy");
        v34 = nullptr;
        v8 = v29;
LABEL_22:
        v30 = v8;
        free(v7);
        Curl_safefree((int)(uintptr_t)(v34));
        return (int (*)(char *, int, size_t, uint32_t))v30;
      }
      free(v7);
      Curl_safefree(0);
      *(uint8_t *)(a1 + 449) = 1;
    }
    curlx_tvnow(&v53);
    if ( v43 - curlx_tvdiff(v53, v54, *(uint32_t *)(a1 + 288), *(uint32_t *)(a1 + 292)) <= 0 )
      goto LABEL_87;
    if ( *(uint32_t *)(v36 + 1188) == 2 && Curl_socket_ready(v42, -1, 0) == 0 )
      return nullptr;
    v41 = &dword_0 + 1;
    v46 = 0;
    v37 = 0;
    v17 = 0;
    v51 = 0;
    *(uint8_t *)(a1 + 449) = 0;
    sa = (char *)(v36 + 1216);
    v45 = (char *)(v36 + 1216);
LABEL_41:
    if ( v17 == 0 && v41 != nullptr )
      break;
LABEL_49:
    if ( v17 != 0 )
      return (int (*)(char *, int, size_t, uint32_t))&dword_38;
    if ( *(uint32_t *)(v36 + 34304) != 200 )
    {
      result = (int (*)(char *, int, size_t, uint32_t))Curl_http_auth_act((uint8_t *)a1);
      if ( result != nullptr )
        return result;
      if ( *(uint8_t *)(a1 + 436) != 0 )
      {
        v51 = 1;
LABEL_61:
        if ( *(uint32_t *)(v36 + 244) != 0 )
        {
          Curl_closesocket(a1, *(uint32_t *)(a1 + 4 * v50));
          *(uint32_t *)(a1 + 4 * v50) = -1;
        }
LABEL_63:
        if ( *(uint32_t *)(v36 + 132) == 200 )
        {
          Curl_safefree(*(uint32_t *)(a1 + 500));
          *(uint32_t *)(a1 + 500) = 0;
          *(uint8_t *)(v36 + 34140) = 1;
          Curl_infof(v36, "Proxy replied OK to CONNECT request\n");
          *(uint8_t *)(v36 + 237) = 0;
          return nullptr;
        }
        else
        {
          Curl_failf(v36, "Received HTTP code %d from proxy after CONNECT", *(uint32_t *)(v36 + 132));
          result = (int (*)(char *, int, size_t, uint32_t))&dword_38;
          if ( v51 != 0 && *(uint32_t *)(v36 + 244) != 0 )
            *(uint8_t *)(a1 + 458) = 1;
        }
        return result;
      }
    }
    if ( v51 != 0 )
      goto LABEL_61;
    if ( *(uint32_t *)(v36 + 244) == 0 )
      goto LABEL_63;
  }
  curlx_tvnow(&v53);
  v20 = curlx_tvdiff(v53, v54, *(uint32_t *)(a1 + 288), *(uint32_t *)(a1 + 292));
  if ( v43 - v20 <= 0 )
  {
LABEL_87:
    Curl_failf(v36, "Proxy CONNECT aborted due to timeout");
    return (int (*)(char *, int, size_t, uint32_t))&dword_38;
  }
  v21 = 1000;
  if ( v43 - v20 <= 1000 )
    v21 = v43 - v20;
  v22 = Curl_socket_ready(v42, -1, v21);
  if ( v22 == -1 )
  {
    v17 = 1;
    Curl_failf(v36, "Proxy CONNECT aborted due to select/poll error");
    goto LABEL_39;
  }
  v17 = 0;
  if ( v22 == 0 )
    goto LABEL_39;
  v18 = Curl_read((int *)a1, v42, v45, 0x4000 - v37, (size_t *)&v56);
  if ( v18 == 81 )
    goto LABEL_40;
  if ( v18 != 0 )
  {
    v41 = nullptr;
    goto LABEL_39;
  }
  v49 = v56;
  if ( v56 <= 0 )
  {
    if ( *(uint32_t *)(v36 + 300) != 0 && *(uint32_t *)(v36 + 34136) != 0 )
    {
      v41 = nullptr;
      v17 = 0;
      *(uint8_t *)(a1 + 458) = 1;
    }
    else
    {
      v17 = 1;
      Curl_failf(v36, "Proxy CONNECT aborted");
      v41 = nullptr;
    }
    goto LABEL_39;
  }
  if ( (int)(uintptr_t)(v41) > 1 )
  {
    if ( v5 != 0 )
    {
      v19 = HIDWORD(v5) - v56;
      LODWORD(v5) = (__PAIR64__(v5, HIDWORD(v5)) - v56) >> 32;
      HIDWORD(v5) -= v56;
      if ( __SPAIR64__(v5, v19) <= 0 )
        goto LABEL_89;
    }
    else
    {
      v57[0] = 0;
      if ( Curl_httpchunk_read(a1, (char *)(v36 + 1216), v56, v57) == -1 )
        goto LABEL_88;
      Curl_infof(v36, "Read %zd bytes of chunk, continue\n", v57[0]);
    }
    v37 = 0;
    v45 = (char *)(v36 + 1216);
    v17 = 0;
    goto LABEL_39;
  }
  v23 = v45 + 1;
  v35 = nullptr;
  v24 = v46;
  while ( 1 )
  {
    ++v24;
    v45 = v23;
    if ( *(v23 - 1) == 10 )
      break;
LABEL_68:
    ++v35;
    ++v23;
    if ( v56 <= (int)(uintptr_t)(v35) )
    {
      v46 = v24;
      v37 += v49;
      v17 = 0;
      goto LABEL_39;
    }
  }
  if ( *(uint8_t *)(v36 + 676) != 0 )
  {
    v32 = v24;
    Curl_debug(v36, 1u, sa, v24, a1);
    v24 = v32;
  }
  v31 = v24;
  result = Curl_client_write(a1, 3 - (*(uint8_t *)(v36 + 664) == 0), sa, v24);
  if ( result != nullptr )
    return result;
  if ( *sa != 10 && *sa != 13 )
  {
    v47 = &sa[v31];
    v25 = sa[v31];
    sa[v31] = 0;
    v48 = v25;
    if ( Curl_raw_nequal("WWW-Authenticate:", sa, 17) != 0 && *(uint32_t *)(v36 + 132) == 401 )
    {
      v26 = 401;
    }
    else if ( Curl_raw_nequal("Proxy-authenticate:", sa, 19) == 0 || (v26 = 407, *(uint32_t *)(v36 + 132) != 407) )
    {
      if ( Curl_raw_nequal("Content-Length:", sa, 15) != 0 )
      {
        v27 = strtoll(sa + 15, nullptr, 10);
        v5 = __PAIR64__(v27, HIDWORD(v27));
      }
      else
      {
        if ( (uint8_t)Curl_compareheader((int)(uintptr_t)(sa), "Connection:", "close") == 0 )
        {
          if ( (uint8_t)Curl_compareheader((int)(uintptr_t)(sa), "Transfer-Encoding:", "chunked") != 0 )
          {
            Curl_infof(v36, "CONNECT responded chunked\n");
            Curl_httpchunk_init((uint32_t *)a1);
            v52 = 1;
            goto LABEL_81;
          }
          if ( (uint8_t)Curl_compareheader((int)(uintptr_t)(sa), "Proxy-Connection:", "close") == 0 )
          {
            if ( sscanf(sa, "HTTP/1.%d %d", &v55, v36 + 132) == 2 )
              *(uint32_t *)(v36 + 34304) = *(uint32_t *)(v36 + 132);
            goto LABEL_81;
          }
        }
        v51 = 1;
      }
LABEL_81:
      sa = v23;
      v24 = 0;
      *v47 = v48;
      goto LABEL_68;
    }
    result = (int (*)(char *, int, size_t, uint32_t))Curl_http_input_auth((int *)a1, v26, (int)(uintptr_t)(sa));
    if ( result != nullptr )
      return result;
    goto LABEL_81;
  }
  v46 = v31;
  if ( *(uint32_t *)(v36 + 132) != 407 || *(uint8_t *)(v36 + 34144) != 0 )
    goto LABEL_89;
  if ( v5 != 0 )
  {
    Curl_infof(v36, "Ignore %lld bytes of response-body\n", HIDWORD(v5), (uint32_t)v5);
    LODWORD(v5) = (__PAIR64__(v5, HIDWORD(v5)) - (v56 - (int)(uintptr_t)(v35))) >> 32;
    HIDWORD(v5) -= v56 - (uint32_t)(uintptr_t)(v35);
    if ( __SPAIR64__(v5, HIDWORD(v5)) <= 0 )
      goto LABEL_89;
LABEL_116:
    v41 = &dword_0 + 2;
    v45 = (char *)(v36 + 1216);
    v37 = 0;
    v17 = 0;
  }
  else
  {
    if ( v52 != 0 )
    {
      v28 = v56 - (uint32_t)(uintptr_t)(v35);
      *(uint8_t *)(v36 + 237) = 1;
      Curl_infof(v36, "%zd bytes of chunk left\n", v28);
      if ( sa[1] == 10 )
      {
        ++v35;
        ++sa;
      }
      if ( Curl_httpchunk_read(a1, sa + 1, v56 - (uint32_t)(uintptr_t)(v35), &v56) != -1 )
      {
        Curl_infof(v36, "Read %zd bytes of chunk, continue\n", v56);
        goto LABEL_116;
      }
LABEL_88:
      Curl_infof(v36, "chunk reading DONE\n");
    }
LABEL_89:
    v41 = nullptr;
    v45 = (char *)(v36 + 1216);
    v37 = 0;
    v17 = 0;
  }
LABEL_39:
  if ( Curl_pgrsUpdate(a1) == 0 )
  {
LABEL_40:
    if ( v37 <= 0x3FFF )
      goto LABEL_41;
    goto LABEL_49;
  }
  return (int (*)(char *, int, size_t, uint32_t))word_2A;
}
// ----------------------------------------------------------------------------
// Function: Curl_if2ip  (binary VA: 0x1a6b460)
// Original: Curl_if2ip
// ----------------------------------------------------------------------------
int Curl_if2ip()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_md5it  (binary VA: 0x1a6b470)
// Original: Curl_md5it
// ----------------------------------------------------------------------------
int Curl_md5it(uint32_t *a1, char *s)
{
  size_t v2;
  int v4[23];

  MD5_Init((int)(uintptr_t)(v4));
  v2 = strlen(s);
  MD5_Update((int)(uintptr_t)(v4), s, v2);
  return MD5_Final(a1, (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: curl_multi_init  (binary VA: 0x1a6bea0)
// Original: curl_multi_init
// ----------------------------------------------------------------------------
uint32_t * curl_multi_init()
{
  uint32_t *v0;
  uint32_t *v1;
  int *v2;
  int *v3;
  uint32_t *v4;
  uint32_t *v5;

  v0 = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0x80u));
  v1 = v0;
  if ( v0 == nullptr )
    return v1;
  *v0 = 764702;
  v2 = Curl_mk_dnscache();
  v1[21] = (uint32_t)(uintptr_t)(v2);
  if ( v2 == nullptr )
    goto LABEL_8;
  v3 = Curl_hash_alloc(911, (int)(uintptr_t)(sub_1A6B530), (int)(uintptr_t)(sub_1A6B510), (int)(uintptr_t)(sub_1A6B4E0));
  v1[23] = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
  {
    v4 = Curl_mk_connc(1, -1);
    v1[25] = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
    {
      v5 = Curl_llist_alloc((int)(uintptr_t)(&g4_noop_ret0));
      v1[18] = (uint32_t)(uintptr_t)(v5);
      if ( v5 != nullptr )
      {
        v1[1] = (uint32_t)(uintptr_t)(v1 + 1);
        v1[2] = (uint32_t)(uintptr_t)(v1 + 1);
        return v1;
      }
    }
LABEL_8:
    if ( v1[23] != 0 )
      Curl_hash_destroy((uint32_t *)v1[23]);
  }
  if ( v1[21] != 0 )
    Curl_hash_destroy((uint32_t *)v1[21]);
  if ( v1[25] != 0 )
    Curl_rm_connc((int *)v1[25]);
  G4_MEM_CALL((uintptr_t)(Curl_cfree), v1);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: Curl_multi_canPipeline  (binary VA: 0x1a6bfa0)
// Original: Curl_multi_canPipeline
// ----------------------------------------------------------------------------
int Curl_multi_canPipeline(int a1)
{
  return *(uint8_t *)(a1 + 96);
}

// ----------------------------------------------------------------------------
// Function: Curl_multi_handlePipeBreak  (binary VA: 0x1a6bfb0)
// Original: Curl_multi_handlePipeBreak
// ----------------------------------------------------------------------------
int Curl_multi_handlePipeBreak(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 616);
  if ( result != 0 )
    *(uint32_t *)(result + 12) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_fdset  (binary VA: 0x1a6bfd0)
// Original: curl_multi_fdset
// ----------------------------------------------------------------------------
int curl_multi_fdset(uint32_t *a1, int32_t *a2, int32_t *a3, int a4, int *a5)
{
  int result;
  int i;
  int v7;
  int j;
  signed int v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  result = 1;
  if ( a1 != nullptr && *a1 == 764702 )
  {
    v10 = (uint32_t *)a1[1];
    for ( i = -1; v10 != a1 + 1; v10 = (uint32_t *)*v10 )
    {
      v7 = sub_1A6B950(v10, v11);
      for ( j = 0; j != 5; ++j )
      {
        v9 = -1;
        if ( _bittest(&v7, (uint8_t)j) )
        {
          v9 = v11[j];
          _bittestandset(a2, v9);
        }
        if ( _bittest(&v7, (uint8_t)(j + 16)) )
        {
          v9 = v11[j];
          _bittestandset(a3, v9);
        }
        if ( v9 == -1 )
          break;
        if ( i < v9 )
          i = v9;
      }
    }
    *a5 = i;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_cleanup  (binary VA: 0x1a6c080)
// Original: curl_multi_cleanup
// ----------------------------------------------------------------------------
int curl_multi_cleanup(char *a1)
{
  int result;
  uint32_t *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  void **v8;
  uint32_t *v9;
  char *v10;
  uint32_t *v11;
  char *v12;

  result = 1;
  if ( a1 != nullptr && *(uint32_t *)a1 == 764702 )
  {
    v2 = *((uint32_t **)a1 + 21);
    *(uint32_t *)a1 = 0;
    Curl_hash_destroy(v2);
    Curl_hash_destroy(*((uint32_t **)a1 + 23));
    v3 = *((int **)a1 + 25);
    *((uint32_t *)a1 + 21) = 0;
    *((uint32_t *)a1 + 23) = 0;
    if ( v3[1] > 0 )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = 4 * v4;
          v6 = *(uint32_t *)(*v3 + 4 * v4);
          if ( v6 != 0 && (*(uint8_t *)(*(uint32_t *)(v6 + 480) + 60) & 4) != 0 )
            break;
          if ( v3[1] <= ++v4 )
            goto LABEL_10;
        }
        Curl_disconnect(v6, 0);
        ++v4;
        *(uint32_t *)(**((uint32_t **)a1 + 25) + v5) = 0;
        v3 = *((int **)a1 + 25);
      }
      while ( v3[1] > v4 );
    }
LABEL_10:
    v7 = *((uint32_t **)a1 + 27);
    if ( v7 != nullptr )
    {
      while ( 1 )
      {
        *(uint32_t *)(v7[1] + 34216) = 0;
        if ( *(uint8_t *)(v7[1] + 34220) != 0 )
          Curl_close(v7[1]);
        v11 = (uint32_t *)*v7;
        G4_MEM_CALL((uintptr_t)(Curl_cfree), v7);
        if ( v11 == nullptr )
          break;
        v7 = v11;
      }
      v3 = *((int **)a1 + 25);
    }
    Curl_rm_connc(v3);
    Curl_llist_destroy(*((uint32_t *)a1 + 18), 0);
    v8 = *((void ***)a1 + 1);
    if ( v8 != (void **)(a1 + 4) )
    {
      while ( 1 )
      {
        v9 = (uint32_t *)(v8[2]);
        v10 = (char *)*v8;
        if ( v9[1] == 3 )
        {
          *v9 = 0;
          *((uint32_t *)v8[2] + 1) = 0;
          v9 = (uint32_t *)(v8[2]);
        }
        v9[298] = 0;
        v12 = v10;
        Curl_easy_addmulti((int)(uintptr_t)(v8[2]), 0);
        G4_MEM_CALL((uintptr_t)(Curl_cfree), v8);
        if ( v12 == a1 + 4 )
          break;
        v8 = (void **)v12;
      }
    }
    G4_MEM_CALL((uintptr_t)(Curl_cfree), a1);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_info_read  (binary VA: 0x1a6c230)
// Original: curl_multi_info_read
// ----------------------------------------------------------------------------
int curl_multi_info_read(uint32_t *a1, int *a2)
{
  int v2;
  int **v3;
  int v4;

  v2 = 0;
  *a2 = 0;
  if ( a1 != nullptr && *a1 == 764702 && Curl_llist_count(a1[18]) != 0 )
  {
    v3 = (int **)a1[18];
    v2 = **v3;
    Curl_llist_remove((int)(uintptr_t)(v3), *v3, 0);
    v4 = Curl_llist_count(a1[18]);
    *a2 = curlx_uztosi(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_setopt  (binary VA: 0x1a6c2d0)
// Original: curl_multi_setopt
// ----------------------------------------------------------------------------
int curl_multi_setopt(int a1, unsigned int a2, int a3)
{
  int result;

  result = 1;
  if ( a1 != 0 && *(uint32_t *)a1 == 764702 )
  {
    switch ( a2 )
    {
      case 3u:
        *(uint8_t *)(a1 + 96) = a3 != 0;
        return 0;
      case 6u:
        *(uint32_t *)(a1 + 104) = a3;
        return 0;
      case 0x2712u:
        *(uint32_t *)(a1 + 80) = a3;
        return 0;
      case 0x2715u:
        *(uint32_t *)(a1 + 116) = a3;
        return 0;
      case 0x4E21u:
        *(uint32_t *)(a1 + 76) = a3;
        return 0;
      case 0x4E24u:
        *(uint32_t *)(a1 + 112) = a3;
        return 0;
      default:
        return 6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_timeout  (binary VA: 0x1a6c380)
// Original: curl_multi_timeout
// ----------------------------------------------------------------------------
int curl_multi_timeout(uint32_t *a1, int *a2)
{
  int result;

  result = 1;
  if ( a1 != nullptr && *a1 == 764702 )
  {
    if ( a1[22] != 0 )
      sub_1A6B7C0(a1 + 22, a2);
    else
      *a2 = -1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_expire  (binary VA: 0x1a6c3d0)
// Original: Curl_expire
// ----------------------------------------------------------------------------
void Curl_expire(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  bool v7; // cc
  int *v8;
  int v9;
  int v10;
  int v11;
  typedef uint32_t _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v2 = a1[2];
  if ( v2 != 0 )
  {
    if ( a2 != 0 )
    {
      curlx_tvnow(v12);
      v13 = a2 / 1000 + v12[0];
      v5 = v12[1] + 1000 * (a2 % 1000);
      v14 = v5;
      if ( v5 > 999999 )
      {
        v13 = a2 / 1000 + v12[0] + 1;
        v14 = v5 - 1000000;
      }
      if ( a1[8539] != 0 || (v6 = a1 + 8541, a1[8540] != 0) )
      {
        v7 = curlx_tvdiff(v13, v14, a1[8539], a1[8540]) <= 0;
        v8 = (int *)a1[8547];
        if ( !v7 )
        {
          sub_1A6B590(v8, &v13);
          return;
        }
        v6 = a1 + 8541;
        sub_1A6B590(v8, a1 + 8539);
        v9 = Curl_splayremovebyaddr(*(uint32_t *)(v2 + 88), a1 + 8541, v2 + 88);
        if ( v9 != 0 )
          Curl_infof((int)(uintptr_t)(a1), "Internal error removing splay node = %d\n", v9);
      }
      v10 = v13;
      v11 = v14;
      a1[8539] = v13;
      a1[8540] = v11;
      a1[8546] = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(v2 + 88) = (uint32_t)(uintptr_t)(Curl_splayinsert(v10, v11, *(uint32_t *)(v2 + 88), v6));
    }
    else if ( a1[8539] != 0 || a1[8540] != 0 )
    {
      v3 = a1[8547];
      v4 = Curl_splayremovebyaddr(*(uint32_t *)(v2 + 88), a1 + 8541, v2 + 88);
      if ( v4 != 0 )
        Curl_infof((int)(uintptr_t)(a1), "Internal error clearing splay node = %d\n", v4);
      while ( *(uint32_t *)(v3 + 12) != 0 )
        Curl_llist_remove(v3, *(uint32_t **)(v3 + 4), 0);
      a1[8539] = 0;
      a1[8540] = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: curl_multi_perform  (binary VA: 0x1a6d910)
// Original: curl_multi_perform
// ----------------------------------------------------------------------------
int curl_multi_perform(int *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int *v5;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  curlx_tvnow(v11);
  v2 = v11[0];
  v3 = v11[1];
  v9 = 1;
  if ( a1 == nullptr || *a1 != 764702 )
    return v9;
  v5 = (int *)a1[1];
  v9 = 0;
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v8 = v5[2];
      v10 = (uint32_t *)(v8 + 34272);
      if ( *(uint8_t *)(v8 + 896) != 0 && *(uint32_t *)(v8 + 34284) == 0 && Curl_wildcard_init((int)(uintptr_t)(v10)) != 0 )
        return 3;
      do
        v6 = sub_1A6C730((int)(uintptr_t)(a1), v2, v3, v5);
      while ( v6 == -1 );
      if ( *(uint8_t *)(v5[2] + 896) == 0 )
        goto LABEL_17;
      if ( v6 != 0 || *(uint32_t *)(v8 + 34272) == 6 )
        break;
LABEL_11:
      v5 = (int *)*v5;
      if ( v5 == a1 + 1 )
        goto LABEL_12;
    }
    v7 = v6;
    Curl_wildcard_dtor(v10);
    v6 = v7;
LABEL_17:
    if ( v6 == 0 )
      v6 = v9;
    v9 = v6;
    goto LABEL_11;
  }
  do
  {
LABEL_12:
    a1[22] = (int)(uintptr_t)(Curl_splaygetbest(v2, v3, a1[22], v12));
    if ( v12[0] == 0 )
      break;
    sub_1A6B690(v2, v3, a1 + 22, *(uint32_t **)(v12[0] + 20));
  }
  while ( v12[0] != 0 );
  *a2 = a1[17];
  if ( v9 <= 0 )
    sub_1A6B880(a1);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_socket_all  (binary VA: 0x1a6ddc0)
// Original: curl_multi_socket_all
// ----------------------------------------------------------------------------
int curl_multi_socket_all(int *a1, uint32_t *a2)
{
  int result;
  int v3;

  result = sub_1A6DAD0((int)(uintptr_t)(a1), 1, -1, 0, a2);
  v3 = result;
  if ( result <= 0 )
  {
    sub_1A6B880(a1);
    return v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_socket_action  (binary VA: 0x1a6de20)
// Original: curl_multi_socket_action
// ----------------------------------------------------------------------------
int curl_multi_socket_action(int *a1, int a2, int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = sub_1A6DAD0((int)(uintptr_t)(a1), 0, a2, a3, a4);
  v5 = result;
  if ( result <= 0 )
  {
    sub_1A6B880(a1);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_socket  (binary VA: 0x1a6de80)
// Original: curl_multi_socket
// ----------------------------------------------------------------------------
int curl_multi_socket(int *a1, int a2, uint32_t *a3)
{
  int result;
  int v4;

  result = sub_1A6DAD0((int)(uintptr_t)(a1), 0, a2, 0, a3);
  v4 = result;
  if ( result <= 0 )
  {
    sub_1A6B880(a1);
    return v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_remove_handle  (binary VA: 0x1a6dee0)
// Original: curl_multi_remove_handle
// ----------------------------------------------------------------------------
char curl_multi_remove_handle(int *a1, uint32_t *a2)
{
  char result;
  int *v3;
  int **v4;
  uint8_t v5; // bp
  int *v6;
  unsigned int v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  int *v25;
  int **v26;
  int *v27;
  uint32_t *v28;
  void *v29;
  int v30;
  int **v31;
  int v32;
  int v33;
  uint32_t *v34;
  bool v35;
  char v36;
  int v37;

  result = 1;
  v3 = a1;
  if ( a1 != nullptr && *a1 == 764702 )
  {
    result = 2;
    if ( a2[8615] == -1059136595 )
    {
      v4 = (int **)a2[3];
      v31 = v4;
      if ( v4 != nullptr )
      {
        v35 = false;
        v5 = (unsigned int)(uintptr_t)(v4[4]) <= 0xE;
        v6 = v4[3];
        if ( v6 != nullptr )
          v35 = *v6 == (uint32_t)(uintptr_t)(v4[2]);
        if ( (unsigned int)(uintptr_t)(v4[4]) <= 0xE )
        {
          --a1[17];
          v6 = v4[3];
        }
        if ( v6 != nullptr && (unsigned int)(*(uint32_t *)(v6[137] + 12) + *(uint32_t *)(v6[138] + 12)) > 1 )
        {
          v7 = (unsigned int)(uintptr_t)(v4[4]);
          if ( v7 > 6 && v7 <= 0xE )
          {
            *((uint8_t *)v6 + 436) = 1;
            *v4[3] = (int)(uintptr_t)(v4[2]);
          }
        }
        Curl_expire(v4[2], 0);
        v8 = a2[8547];
        if ( v8 != 0 )
        {
          Curl_llist_destroy(v8, 0);
          a2[8547] = 0;
        }
        v9 = v31[2];
        if ( v9[1] == 3 )
        {
          *v9 = 0;
          v31[2][1] = 0;
        }
        v10 = (int)(uintptr_t)(v31[3]);
        if ( v10 != 0 )
        {
          if ( v35 )
          {
            Curl_done(v31 + 3, (int)(uintptr_t)(v31[5]), v5);
            v11 = v31[3];
            if ( v11 != nullptr )
              *v11 = (int)(uintptr_t)(v31[2]);
          }
          else
          {
            Curl_getoff_all_pipelines((int)(uintptr_t)(v31[2]), v10);
          }
        }
        v12 = (uint32_t *)a1[25];
        v32 = (int)(uintptr_t)(v31[2]);
        if ( (int)v12[1] > 0 )
        {
          v13 = 0;
          while ( 1 )
          {
            v33 = 4 * v13;
            v14 = *(uint32_t **)(*v12 + 4 * v13);
            v30 = (int)(uintptr_t)(v14);
            if ( v14 == nullptr || v32 != *v14 )
              goto LABEL_25;
            if ( (*(uint8_t *)(v14[120] + 60) & 4) != 0 )
            {
              v36 = 1;
              v34 = nullptr;
              if ( a1[27] == 0 )
                goto LABEL_67;
              v37 = v13;
              v15 = (uint32_t *)a1[27];
              do
              {
                v16 = (int *)a1[25];
                v17 = v16[1];
                if ( v17 <= 0 )
                {
                  v19 = v15[1];
LABEL_36:
                  v22 = (uint32_t *)*v15;
                  *(uint32_t *)(v19 + 34216) = 0;
                  if ( *(uint8_t *)(v15[1] + 34220) != 0 )
                  {
                    Curl_infof(v32, "Delayed kill of easy handle %p\n", v15[1]);
                    Curl_close(v15[1]);
                  }
                  if ( v34 != nullptr )
                    *v34 = (uint32_t)(uintptr_t)(v22);
                  else
                    a1[27] = (int)(uintptr_t)(v22);
                  v29 = v15;
                  v15 = v22;
                  G4_MEM_CALL((uintptr_t)(Curl_cfree), v29);
                }
                else
                {
                  v18 = *v16;
                  v19 = v15[1];
                  v20 = 0;
                  while ( 1 )
                  {
                    v21 = *(uint32_t **)(v18 + 4 * v20);
                    if ( v21 != nullptr && *v21 == v19 )
                      break;
                    if ( ++v20 == v17 )
                      goto LABEL_36;
                  }
                  v34 = v15;
                  v15 = (uint32_t *)*v15;
                  if ( v32 == v19 )
                    v36 = 0;
                }
              }
              while ( v15 != nullptr );
              v13 = v37;
              if ( v36 != 0 )
              {
LABEL_67:
                v28 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 8);
                if ( v28 == nullptr )
                {
                  Curl_disconnect(v30, 0);
                  *(uint32_t *)(*(uint32_t *)a1[25] + v33) = 0;
                  v12 = (uint32_t *)a1[25];
                  goto LABEL_25;
                }
                v28[1] = v32;
                *v28 = a1[27];
                a1[27] = (int)(uintptr_t)(v28);
              }
              *(uint32_t *)(v32 + 34216) = (uint32_t)(uintptr_t)(a1);
              v12 = (uint32_t *)a1[25];
            }
            else
            {
              *v14 = 0;
              v12 = (uint32_t *)a1[25];
            }
LABEL_25:
            if ( ++v13 >= v12[1] )
            {
              v3 = a1;
              v32 = (int)(uintptr_t)(v31[2]);
              break;
            }
          }
        }
        if ( *(uint32_t *)(*(uint32_t *)(v32 + 1192) + 8) == 1 )
        {
          *(uint32_t *)(v32 + 1192) = 0;
          v31[2][301] = -1;
          v27 = v31[3];
          if ( v27 != nullptr && v35 && *(uint32_t *)(v27[137] + 12) + *(uint32_t *)(v27[138] + 12) == 0 )
            v27[13] = -1;
        }
        v31[4] = (int *)((uint32_t *)(byte_9 + 6));
        sub_1A6BA70((int)(uintptr_t)(v3), v31);
        Curl_easy_addmulti((int)(uintptr_t)(v31[2]), 0);
        v23 = (uint32_t *)v3[18];
        v24 = (uint32_t *)*v23;
        if ( *v23 != 0 )
        {
          v25 = v31[2];
          if ( *(int **)(*v24 + 4) == v25 )
          {
LABEL_60:
            Curl_llist_remove((int)(uintptr_t)(v23), v24, 0);
          }
          else
          {
            while ( 1 )
            {
              v24 = (uint32_t *)v24[2];
              if ( v24 == nullptr )
                break;
              if ( *(int **)(*v24 + 4) == v25 )
                goto LABEL_60;
            }
          }
        }
        v26 = (int **)v31[1];
        if ( v26 != nullptr )
          *v26 = *v31;
        if ( *v31 != nullptr )
          (*v31)[1] = (int)(uintptr_t)(v31[1]);
        v31[2][154] = 0;
        v31[2][3] = 0;
        G4_MEM_CALL((uintptr_t)(Curl_cfree), v31);
        --v3[16];
        sub_1A6B880(v3);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_add_handle  (binary VA: 0x1a6e3c0)
// Original: curl_multi_add_handle
// ----------------------------------------------------------------------------
int curl_multi_add_handle(int a1, uint32_t *a2)
{
  int v2;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  unsigned int v16;
  uint16_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;

  v2 = 1;
  if ( a1 == 0 )
    return v2;
  if ( *(uint32_t *)a1 != 764702 )
    return v2;
  LOBYTE(v2) = 2;
  if ( a2[8615] != -1059136595 )
    return v2;
  if ( a2[2] != 0 )
    return v2;
  v4 = Curl_llist_alloc((int)(uintptr_t)(sub_1A6B560));
  a2[8547] = (uint32_t)(uintptr_t)(v4);
  v2 = 3;
  if ( v4 == nullptr )
    return v2;
  v5 = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 60);
  v2 = 3;
  if ( v5 == nullptr )
    return v2;
  v6 = *(uint32_t **)(a1 + 108);
  if ( v6 != nullptr )
  {
    v7 = (uint32_t *)*v6;
    if ( (uint32_t *)v6[1] == a2 )
    {
      v20 = (uint32_t *)*v6;
      G4_MEM_CALL((uintptr_t)(Curl_cfree), *(void **)(a1 + 108));
      *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(v20);
    }
    else
    {
      while ( v7 != nullptr )
      {
        if ( (uint32_t *)v7[1] == a2 )
        {
          v18 = v6;
          v19 = (uint32_t *)*v7;
          G4_MEM_CALL((uintptr_t)(Curl_cfree), v7);
          *v18 = (uint32_t)(uintptr_t)(v19);
          break;
        }
        v6 = v7;
        v7 = (uint32_t *)*v7;
      }
    }
  }
  v5[2] = (uint32_t)(uintptr_t)(a2);
  sub_1A6B670((int)(uintptr_t)(a2), v5 + 4, 0);
  *(uint32_t *)(v5[2] + 12) = (uint32_t)(uintptr_t)(v5);
  v8 = v5[2];
  if ( *(uint32_t *)v8 == 0
    || *(uint32_t *)(v8 + 4) == 1
    && (Curl_hash_destroy(*(uint32_t **)v8), *(uint32_t *)v5[2] = 0,
                                           *(uint32_t *)(v5[2] + 4) = 0,
                                           *(uint32_t *)(v8 = v5[2]) == 0)
    || *(uint32_t *)(v8 + 4) == 0 )
  {
    *(uint32_t *)v8 = *(uint32_t *)(a1 + 84);
    *(uint32_t *)(v5[2] + 4) = 3;
    v8 = v5[2];
  }
  v9 = *(uint32_t *)(v8 + 1192);
  if ( v9 != 0 )
  {
    if ( *(uint32_t *)(v9 + 8) == 0 )
    {
      Curl_rm_connc(*(int **)(v8 + 1192));
      *(uint32_t *)(v5[2] + 1192) = *(uint32_t *)(a1 + 100);
      v8 = v5[2];
    }
  }
  else
  {
    *(uint32_t *)(v8 + 1192) = *(uint32_t *)(a1 + 100);
    v8 = v5[2];
  }
  *(uint32_t *)(*(uint32_t *)(v8 + 1192) + 8) = 1;
  *v5 = a1 + 4;
  v5[1] = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v5);
  *(uint32_t *)v5[1] = (uint32_t)(uintptr_t)(v5);
  Curl_easy_addmulti((int)(uintptr_t)(a2), a1);
  *(uint32_t *)(v5[2] + 616) = (uint32_t)(uintptr_t)(v5);
  Curl_expire((uint32_t *)v5[2], 1);
  v10 = *(uint32_t **)(a1 + 100);
  v11 = *(uint32_t *)(a1 + 64) + 1;
  *(uint32_t *)(a1 + 64) = v11;
  v12 = 4 * v11;
  v13 = v10[1];
  if ( v12 > v13 )
  {
    v14 = *(uint32_t *)(a1 + 104);
    if ( v14 == 0 || v12 <= v14 )
    {
LABEL_24:
      if ( Curl_ch_connc((int)(uintptr_t)(a2), v10, v12) != 0 )
      {
        curl_multi_remove_handle((int *)a1, a2);
        return 3;
      }
      goto LABEL_25;
    }
    if ( v13 < v14 )
    {
      v12 = *(uint32_t *)(a1 + 104);
      goto LABEL_24;
    }
  }
LABEL_25:
  v15 = (uint8_t *)(a1 + 120);
  ++*(uint32_t *)(a1 + 68);
  v16 = 8;
  if ( ((a1 + 120) & 1) != 0 )
  {
    *v15 = 0;
    v15 = (uint8_t *)(a1 + 121);
    LOBYTE(v16) = 7;
  }
  if ( ((uint8_t)(uintptr_t)(v15) & 2) != 0 )
  {
    *(uint16_t *)v15 = 0;
    v15 += 2;
    v16 -= 2;
  }
  memset(v15, 0, 4 * (v16 >> 2));
  v17 = (uint16_t *)(&v15[4 * (v16 >> 2)]);
  if ( (v16 & 2) != 0 )
    *v17++ = 0;
  if ( (v16 & 1) != 0 )
    *(uint8_t *)v17 = 0;
  sub_1A6B880((int *)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: curl_multi_assign  (binary VA: 0x1a6e660)
// Original: curl_multi_assign
// ----------------------------------------------------------------------------
int curl_multi_assign(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = 5;
  if ( a2 != -1 )
  {
    v4 = Curl_hash_pick(*(int **)(a1 + 92), (int)(uintptr_t)(&a2), 4);
    if ( v4 != 0 )
    {
      LOWORD(v3) = 0;
      *(uint32_t *)(v4 + 16) = a3;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Curl_parsenetrc  (binary VA: 0x1a6e6c0)
// Original: Curl_parsenetrc
// ----------------------------------------------------------------------------
int Curl_parsenetrc(int a1, char *dest, char *a3, char *filename)
{
  int v4;
  char *v5;
  int v6;
  bool v7;
  int v8;
  int v10;
  int v11;
  __uid_t v12;
  struct passwd *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef bool _g4_t_v16;
  typedef FILE *_g4_t_stream;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char *_g4_t_pw_gecos;
  typedef char *_g4_t_save_ptr;
  typedef char _g4_t_s[284];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_stream)) > _g4_s3 ? (20u + sizeof(_g4_t_stream)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (25u + sizeof(_g4_t_v19)) > _g4_s5 ? (25u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (26u + sizeof(_g4_t_v20)) > _g4_s6 ? (26u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (27u + sizeof(_g4_t_v21)) > _g4_s7 ? (27u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_pw_gecos)) > _g4_s8 ? (28u + sizeof(_g4_t_pw_gecos)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_save_ptr)) > _g4_s9 ? (44u + sizeof(_g4_t_save_ptr)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_s)) > _g4_s10 ? (48u + sizeof(_g4_t_s)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 25u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 26u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 27u);
  _g4_t_pw_gecos &pw_gecos = *reinterpret_cast<_g4_t_pw_gecos *>(_g4_sf + 28u);
  _g4_t_save_ptr &save_ptr = *reinterpret_cast<_g4_t_save_ptr *>(_g4_sf + 44u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);

  v16 = *dest != 0;
  if ( filename != nullptr )
  {
    v21 = 0;
    v20 = 0;
    pw_gecos = nullptr;
  }
  else
  {
    pw_gecos = (char *)curl_getenv("HOME");
    v20 = 1;
    if ( pw_gecos == nullptr )
    {
      v12 = geteuid();
      v13 = (struct passwd *)(getpwuid(v12));
      v14 = -1;
      if ( v13 == nullptr )
        return v14;
      pw_gecos = v13->pw_gecos;
      if ( pw_gecos == nullptr )
        return v14;
      v20 = 0;
    }
    filename = (char *)curl_maprintf("%s%s%s", pw_gecos, "/", ".netrc");
    v21 = 1;
    if ( filename == nullptr )
    {
      v14 = -1;
      if ( v20 != 0 )
        G4_MEM_CALL((uintptr_t)(Curl_cfree), pw_gecos);
      return v14;
    }
  }
  stream = fopen(filename, "r");
  if ( stream != nullptr )
  {
    v15 = 0;
    v19 = 0;
    v18 = 0;
    v4 = 0;
    v14 = 1;
LABEL_5:
    while ( fgets(s, 256, stream) != nullptr )
    {
      v5 = strtok_r(s, " \t\n", &save_ptr);
      if ( v5 != nullptr )
      {
        while ( *dest == 0 || *a3 == 0 )
        {
          if ( v4 == 1 )
          {
            v6 = Curl_raw_equal(a1, v5);
            v4 = v6 != 0 ? 3 : 0;
            v7 = v6 == 0;
            v8 = 0;
            if ( v7 )
              v8 = v14;
            v14 = v8;
          }
          else if ( v4 != 0 )
          {
            if ( v4 == 3 )
            {
              if ( v18 != 0 )
              {
                if ( v16 )
                  v15 = Curl_raw_equal(dest, v5);
                else
                  strncpy(dest, v5, 0x3Fu);
                v18 = 0;
              }
              else if ( v19 != 0 )
              {
                if ( v15 != 0 || !v16 )
                {
                  strncpy(a3, v5, 0x3Fu);
                  v19 = 0;
                }
                else
                {
                  v15 = 0;
                  v19 = 0;
                }
              }
              else if ( Curl_raw_equal("login", v5) != 0 )
              {
                v18 = 1;
              }
              else if ( Curl_raw_equal("password", v5) != 0 )
              {
                v19 = 1;
              }
              else
              {
                v10 = Curl_raw_equal("machine", v5);
                v11 = 0;
                if ( v10 == 0 )
                  v11 = v15;
                v15 = v11;
                if ( v10 != 0 )
                  v4 = 1;
              }
            }
          }
          else
          {
            v4 = Curl_raw_equal("machine", v5) != 0;
          }
          v5 = strtok_r(nullptr, " \t\n", &save_ptr);
          if ( v5 == nullptr )
            goto LABEL_5;
        }
        break;
      }
    }
    fclose(stream);
  }
  else
  {
    v14 = 1;
  }
  if ( v20 != 0 )
    G4_MEM_CALL((uintptr_t)(Curl_cfree), pw_gecos);
  if ( v21 != 0 )
    G4_MEM_CALL((uintptr_t)(Curl_cfree), filename);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: curl_getdate  (binary VA: 0x1a6eaa0)
// Original: curl_getdate
// ----------------------------------------------------------------------------
int curl_getdate(char *s)
{
  uint8_t v1;
  const char *nptr;
  int v3;
  uint8_t v4; // bp
  int v5;
  int v6;
  char *v7;
  bool v8;
  int result;
  char *v10; // kr00_4
  unsigned int v11;
  char v12;
  bool v13;
  int v14;
  char **v15;
  int v16;
  char **v17;
  int i;
  void **v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef const char *_g4_t_v32;
  typedef bool _g4_t_v33;
  typedef int _g4_t_v34;
  typedef const char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char *_g4_t_endptr;
  typedef uint32_t _g4_t_v40[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v27)) > _g4_s1 ? (16u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v28)) > _g4_s2 ? (20u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v29)) > _g4_s3 ? (24u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v34)) > _g4_s8 ? (40u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v35)) > _g4_s9 ? (44u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v36)) > _g4_s10 ? (48u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v37)) > _g4_s11 ? (52u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v38)) > _g4_s12 ? (56u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_endptr)) > _g4_s13 ? (60u + sizeof(_g4_t_endptr)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v40)) > _g4_s14 ? (64u + sizeof(_g4_t_v40)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);

  v36 = -1;
  v37 = -1;
  v38 = -1;
  v1 = *s;
  if ( *s == 0 )
  {
    v8 = true;
    v28 = -1;
    v27 = -1;
    v31 = -1;
    v29 = -1;
    goto LABEL_67;
  }
  nptr = s;
  v26 = 0;
  v33 = false;
  v28 = -1;
  v27 = -1;
  v29 = -1;
  v31 = -1;
  v34 = -1;
  do
  {
    while ( 1 )
    {
      v3 = v1;
      v4 = v1;
      if ( isalnum(v1) != 0 )
        break;
      v1 = *++nptr;
      if ( *nptr == 0 )
      {
        v4 = 0;
        if ( isalpha(0) == 0 )
          goto LABEL_7;
LABEL_24:
        memset(v40, 0, 32);
        sscanf(nptr, "%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]", v40);
        v10 = (char *)v40 + strlen((const char *)v40);
        v11 = v10 - (char *)v40;
        if ( v34 == -1 )
        {
          v15 = (char **)(uintptr_t)(((uint32_t)(uintptr_t)&off_204692C));
          if ( v11 < 4 )
            v15 = (char **)&Curl_wkday;
          v35 = nptr;
          v16 = 0;
          v17 = v15;
          do
          {
            if ( Curl_raw_equal(v40, v17[v16]) != 0 )
            {
              v34 = v16;
              nptr = &v35[v10 - (char *)v40];
              goto LABEL_15;
            }
            ++v16;
          }
          while ( v16 != 7 );
          v11 = v10 - (char *)v40;
          nptr = v35;
          if ( v31 != -1 )
            goto LABEL_26;
        }
        else if ( v31 != -1 )
        {
LABEL_26:
          if ( v29 != -1 )
            return -1;
          goto LABEL_51;
        }
        v32 = nptr;
        for ( i = 0; i != 12; ++i )
        {
          if ( Curl_raw_equal(v40, (&Curl_month)[i]) != 0 )
          {
            v31 = i;
            nptr = &v32[v11];
            goto LABEL_15;
          }
        }
        nptr = v32;
        if ( v29 != -1 )
          return -1;
LABEL_51:
        v30 = v11;
        v19 = (void **)(&off_1D35F00);
        while ( Curl_raw_equal(v40, v19) == 0 )
        {
          v19 += 3;
          if ( v19 == (void **)&unk_1D36230 )
            return -1;
        }
        nptr += v30;
        v29 = 60 * (uint32_t)(uintptr_t)(v19[2]);
        goto LABEL_15;
      }
    }
    if ( isalpha(v3) != 0 )
      goto LABEL_24;
LABEL_7:
    if ( (unsigned int)v4 - 48 > 9 )
      goto LABEL_15;
    if ( v38 == -1 )
    {
      if ( sscanf(nptr, "%02d:%02d:%02d", &v36, &v37, &v38) == 3 )
      {
        nptr += 8;
        goto LABEL_15;
      }
      if ( v38 == -1 && sscanf(nptr, "%02d:%02d", &v36, &v37) == 2 )
      {
        nptr += 5;
        v38 = 0;
        goto LABEL_15;
      }
    }
    v5 = strtol(nptr, &endptr, 10);
    v6 = curlx_sltosi(v5);
    v7 = (char *)(endptr - nptr);
    if ( v29 == -1 && v6 <= 1400 && v7 == (char *)&loc_4 )
    {
      if ( s < nptr )
      {
        v12 = *(nptr - 1);
        v13 = v12 == 43;
        if ( v12 == 45 || v12 == 43 )
        {
          v14 = 60 * (-40 * (v6 / 100) + v6);
          nptr = endptr;
          if ( v13 )
            v14 = -60 * (-40 * (v6 / 100) + v6);
          v29 = v14;
          goto LABEL_15;
        }
      }
    }
    else if ( v7 == (char *)(intptr_t)(byte_8) && v27 == -1 )
    {
      if ( v28 == -1 && v31 == -1 )
      {
        v27 = v6 / 10000;
        nptr = endptr;
        v31 = v6 % 10000 / 100 - 1;
        v28 = v6 % 100;
        goto LABEL_15;
      }
      v27 = -1;
    }
    if ( v28 != -1 || v33 )
    {
      if ( !v33 )
        return -1;
    }
    else
    {
      v28 = -1;
      if ( (unsigned int)(v6 - 1) <= 0x1E )
      {
        nptr = endptr;
        v28 = v6;
        v33 = true;
        goto LABEL_15;
      }
    }
    if ( v27 != -1 )
      return -1;
    v27 = v6;
    if ( v6 <= 1899 )
    {
      v20 = v6 + 1900;
      if ( v6 < 71 )
        v20 = v6 + 2000;
      v27 = v20;
    }
    nptr = endptr;
    v33 = v28 != -1;
LABEL_15:
    v1 = *nptr;
    ++v26;
  }
  while ( *nptr != 0 && v26 <= 5 );
  v8 = v28 == -1 || v31 == -1;
  if ( v38 == -1 )
  {
LABEL_67:
    v36 = 0;
    v37 = 0;
    v38 = 0;
  }
  result = -1;
  if ( !v8 && v27 != -1 )
  {
    result = 0x7FFFFFFF;
    if ( v27 <= 2037 )
    {
      result = 0;
      if ( v27 > 1969 )
      {
        if ( v31 < 0 )
        {
          v27 += (11 - v31) / 12;
          v21 = 11 - (11 - v31) % 12;
        }
        else
        {
          v21 = v31;
          if ( v31 > 11 )
          {
            v27 += v31 / -12;
            v21 = v31 % 12;
          }
        }
        v22 = v27 - (v31 <= 1);
        v23 = v22 + 3;
        if ( v22 >= 0 )
          v23 = v27 - (v31 <= 1);
        v24 = (uint64_t)(1374389535LL * (v27 - (v31 <= 1))) >> 32;
        v25 = v38
            + 60
            * (v37
             + 60
             * (v36
              + 24 * (v28 + dword_1D36240[v21] + (v23 >> 2) - (v24 >> 5) + (v24 >> 7) - 477 + 365 * v27 - 719050 - 1)));
        if ( v25 == -1 )
        {
          return -1;
        }
        else
        {
          result = v25;
          if ( v29 != -1 )
          {
            result = v29 + v25;
            if ( v29 > 0 && v25 > result )
              return -1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_gmtime  (binary VA: 0x1a6f150)
// Original: Curl_gmtime
// ----------------------------------------------------------------------------
int Curl_gmtime(time_t timer, int *a2)
{
  int *v2;
  struct tm *v3;
  int result;

  v2 = a2;
  v3 = gmtime(&timer);
  result = 43;
  if ( v3 != nullptr )
  {
    *v2 = v3->tm_sec;
    v2[1] = v3->tm_min;
    v2[2] = v3->tm_hour;
    v2[3] = v3->tm_mday;
    v2[4] = v3->tm_mon;
    v2[5] = v3->tm_year;
    v2[6] = v3->tm_wday;
    v2[7] = v3->tm_yday;
    v2[8] = v3->tm_isdst;
    v2[9] = v3->tm_gmtoff;
    v2[10] = (int)(uintptr_t)(v3->tm_zone);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsResetTimes  (binary VA: 0x1a6f690)
// Original: Curl_pgrsResetTimes
// ----------------------------------------------------------------------------
uint64_t * Curl_pgrsResetTimes(uint64_t *a1)
{
  a1[128] = 0;
  a1[129] = 0;
  a1[131] = 0;
  a1[132] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsTime  (binary VA: 0x1a6f6c0)
// Original: Curl_pgrsTime
// ----------------------------------------------------------------------------
void Curl_pgrsTime(int a1, int a2)
{
  int v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  switch ( a2 )
  {
    case 1:
      curlx_tvnow(&v3);
      *(double *)(a1 + 1024) = curlx_tvdiff_secs(v3, v4, *(uint32_t *)(a1 + 1080), *(uint32_t *)(a1 + 1084));
      break;
    case 2:
      curlx_tvnow(&v3);
      *(double *)(a1 + 1032) = curlx_tvdiff_secs(v3, v4, *(uint32_t *)(a1 + 1080), *(uint32_t *)(a1 + 1084));
      break;
    case 3:
      curlx_tvnow(&v3);
      *(double *)(a1 + 1040) = curlx_tvdiff_secs(v3, v4, *(uint32_t *)(a1 + 1080), *(uint32_t *)(a1 + 1084));
      break;
    case 4:
      curlx_tvnow(&v3);
      *(double *)(a1 + 1048) = curlx_tvdiff_secs(v3, v4, *(uint32_t *)(a1 + 1080), *(uint32_t *)(a1 + 1084));
      break;
    case 5:
      curlx_tvnow(&v3);
      *(double *)(a1 + 1056) = curlx_tvdiff_secs(v3, v4, *(uint32_t *)(a1 + 1080), *(uint32_t *)(a1 + 1084));
      break;
    case 7:
      curlx_tvnow(&v3);
      v2 = v3;
      *(uint32_t *)(a1 + 1084) = v4;
      *(uint32_t *)(a1 + 1080) = v2;
      break;
    case 8:
      curlx_tvnow(&v3);
      *(double *)(a1 + 1064) = curlx_tvdiff_secs(v3, v4, *(uint32_t *)(a1 + 1072), *(uint32_t *)(a1 + 1076));
      break;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsStartNow  (binary VA: 0x1a6f910)
// Original: Curl_pgrsStartNow
// ----------------------------------------------------------------------------
int Curl_pgrsStartNow(uint32_t *a1)
{
  int result;
  uint32_t v2[3];

  a1[296] = 0;
  curlx_tvnow(v2);
  result = v2[0];
  a1[269] = v2[1];
  a1[268] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsSetDownloadCounter  (binary VA: 0x1a6f970)
// Original: Curl_pgrsSetDownloadCounter
// ----------------------------------------------------------------------------
int Curl_pgrsSetDownloadCounter(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 964) = a2;
  *(uint32_t *)(a1 + 968) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsSetUploadCounter  (binary VA: 0x1a6f9a0)
// Original: Curl_pgrsSetUploadCounter
// ----------------------------------------------------------------------------
int Curl_pgrsSetUploadCounter(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 972) = a2;
  *(uint32_t *)(a1 + 976) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsSetDownloadSize  (binary VA: 0x1a6f9d0)
// Original: Curl_pgrsSetDownloadSize
// ----------------------------------------------------------------------------
uint32_t * Curl_pgrsSetDownloadSize(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  a1[237] = a2;
  a1[238] = a3;
  if ( a3 < 0 )
    a1[249] &= ~0x40u;
  else
    a1[249] |= 0x40u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_pgrsSetUploadSize  (binary VA: 0x1a6fa00)
// Original: Curl_pgrsSetUploadSize
// ----------------------------------------------------------------------------
uint32_t * Curl_pgrsSetUploadSize(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  a1[239] = a2;
  a1[240] = a3;
  if ( a3 < 0 )
    a1[249] &= ~0x20u;
  else
    a1[249] |= 0x20u;
  return result;
}



// ============================================================================
// Address:   0x1a6fa30 (size: 3187 bytes)
// Symbol:    Curl_pgrsUpdate
// Demangled: Curl_pgrsUpdate
// ============================================================================
int (*Curl_pgrsUpdate(int *a1))(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)
{
  int v1;
  int v2;
  int v3;
  double v4; // xmm0_8
  double v5; // xmm1_8
  char v6;
  bool v7;
  int64_t v8; // kr18_8
  int v9;
  int v10;
  int v11;
  int v12;
  int64_t v13; // rax
  int64_t v14; // xmm1_8
  int v15;
  int (*result)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
  int v17;
  int64_t v18; // rax
  int64_t v21; // rdi
  int64_t v23; // rax
  int v24;
  int64_t v25; // rax
  int64_t v27; // kr10_8
  int v28;
  int64_t v65; // 0:edx.4,4:eax.4
  int64_t v66; // 0:edx.4,4:eax.4
  int64_t v67; // 0:edx.4,4:eax.4
  int64_t v68; // 0:esi.4,4:edi.4
  int64_t v69; // 0:esi.4,4:edi.4
  typedef g4_int128_t _g4_t_streama;
  typedef int64_t _g4_t_stream;
  typedef int64_t _g4_t_v31;
  typedef int _g4_t_v32;
  typedef double _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int (*_g4_t_v35)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
  typedef double _g4_t_v36;
  typedef double _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int64_t _g4_t_v39;
  typedef int64_t _g4_t_v40;
  typedef int64_t _g4_t_v41;
  typedef int64_t _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int64_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int64_t _g4_t_v46;
  typedef int64_t _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int64_t _g4_t_v49;
  typedef int64_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char _g4_t_v56[10];
  typedef char _g4_t_v57[10];
  typedef char _g4_t_v58[10];
  typedef uint8_t _g4_t_v59[10];
  typedef uint8_t _g4_t_v60[10];
  typedef uint8_t _g4_t_v61[10];
  typedef uint8_t _g4_t_v62[10];
  typedef uint8_t _g4_t_v63[10];
  typedef uint8_t _g4_t_v64[38];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_streama)) > _g4_s0 ? (0u + sizeof(_g4_t_streama)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_stream)) > _g4_s1 ? (0u + sizeof(_g4_t_stream)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v31)) > _g4_s2 ? (8u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (84u + sizeof(_g4_t_v32)) > _g4_s3 ? (84u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (96u + sizeof(_g4_t_v33)) > _g4_s4 ? (96u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (124u + sizeof(_g4_t_v34)) > _g4_s5 ? (124u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (124u + sizeof(_g4_t_v35)) > _g4_s6 ? (124u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v36)) > _g4_s7 ? (128u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v37)) > _g4_s8 ? (128u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v38)) > _g4_s9 ? (128u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v39)) > _g4_s10 ? (128u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v40)) > _g4_s11 ? (128u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v41)) > _g4_s12 ? (128u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v42)) > _g4_s13 ? (136u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v43)) > _g4_s14 ? (136u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v44)) > _g4_s15 ? (136u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v45)) > _g4_s16 ? (136u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v46)) > _g4_s17 ? (144u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v47)) > _g4_s18 ? (144u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v48)) > _g4_s19 ? (152u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (152u + sizeof(_g4_t_v49)) > _g4_s20 ? (152u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v50)) > _g4_s21 ? (160u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (160u + sizeof(_g4_t_v51)) > _g4_s22 ? (160u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v52)) > _g4_s23 ? (168u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v53)) > _g4_s24 ? (172u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (184u + sizeof(_g4_t_v54)) > _g4_s25 ? (184u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (188u + sizeof(_g4_t_v55)) > _g4_s26 ? (188u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (198u + sizeof(_g4_t_v56)) > _g4_s27 ? (198u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v57)) > _g4_s28 ? (208u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (218u + sizeof(_g4_t_v58)) > _g4_s29 ? (218u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (228u + sizeof(_g4_t_v59)) > _g4_s30 ? (228u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (238u + sizeof(_g4_t_v60)) > _g4_s31 ? (238u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (248u + sizeof(_g4_t_v61)) > _g4_s32 ? (248u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (258u + sizeof(_g4_t_v62)) > _g4_s33 ? (258u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (268u + sizeof(_g4_t_v63)) > _g4_s34 ? (268u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (278u + sizeof(_g4_t_v64)) > _g4_s35 ? (278u + sizeof(_g4_t_v64)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_streama &streama = *reinterpret_cast<_g4_t_streama *>(_g4_sf + 0u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 124u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 128u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 136u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 136u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 136u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 144u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 152u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 160u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 168u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 172u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 184u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 188u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 198u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 208u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 218u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 228u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 238u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 248u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 258u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 268u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 278u);

  v1 = *a1;
  v2 = *(uint32_t *)(*a1 + 1184);
  curlx_tvnow(&v54);
  v3 = v54;
  v42 = *(uint64_t *)(v1 + 964);
  v48 = v55;
  v36 = (double)v42;
  v4 = (double)(v55 - *(uint32_t *)(v1 + 1076)) * 0.000001 + (double)(v54 - *(uint32_t *)(v1 + 1072));
  *(double *)(v1 + 1000) = v4;
  v46 = *(uint64_t *)(v1 + 972);
  if ( v4 <= 0.0 )
  {
    *(uint64_t *)(v1 + 1008) = (int64_t)v36;
    v37 = (double)v46;
    v5 = 1.0;
  }
  else
  {
    v5 = v4;
    *(uint64_t *)(v1 + 1008) = (int64_t)(v36 / v4);
    v37 = (double)v46;
  }
  v6 = 0;
  v7 = *(uint32_t *)(v1 + 944) == v3;
  *(uint64_t *)(v1 + 1016) = (int64_t)(v37 / v5);
  if ( !v7 )
  {
    *(uint32_t *)(v1 + 944) = v3;
    v38 = v2 % 6 + 136;
    v8 = v46;
    if ( v46 < v42 )
      v8 = v42;
    v9 = v2 % 6 + 142;
    *(uint64_t *)(v1 + 8 * v38) = v8;
    *(uint32_t *)(v1 + 8 * v9 + 4) = v48;
    *(uint32_t *)(v1 + 8 * v9) = v3;
    v10 = *(uint32_t *)(v1 + 1184) + 1;
    *(uint32_t *)(v1 + 1184) = v10;
    if ( v10 == 1 )
    {
      v65 = *(uint64_t *)(v1 + 1016);
      if ( v65 < *(uint64_t *)(v1 + 1008) )
        v65 = *(uint64_t *)(v1 + 1008);
      *(uint64_t *)(v1 + 980) = v65;
      v6 = 1;
    }
    else
    {
      v11 = 0;
      if ( v10 > 5 )
        v11 = v10 % 6;
      v12 = curlx_tvdiff(v3, v48, *(uint32_t *)(v1 + 8 * v11 + 1136), *(uint32_t *)(v1 + 8 * v11 + 1140));
      if ( v12 == 0 )
        v12 = 1;
      v13 = *(uint64_t *)(v1 + 8 * v38) - *(uint64_t *)(v1 + 8 * v11 + 1088);
      if ( v13 > 4294967 )
      {
        v14 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(HIDWORD(v13))), 0);
        v6 = 1;
        *(uint64_t *)(v1 + 980) = (int64_t)((double)v14 / ((double)v12 * 0.001));
      }
      else
      {
        v17 = 1000 * HIDWORD(v13);
        v18 = 1000LL * (unsigned int)v13;
        LODWORD(streama) = v18;
        HIDWORD(streama) = v12 >> 31;
        *(uint64_t *)((char *)&streama + 4) = __PAIR64__(v12, v17 + HIDWORD(v18));
        *(uint64_t *)(v1 + 980) = (int64_t)streama / *((uint64_t *)&streama + 1);
        v6 = 1;
      }
    }
  }
  v15 = *(uint32_t *)(v1 + 996);
  result = nullptr;
  if ( (v15 & 0x10) == 0 )
  {
    result = *(int (**)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(v1 + 364);
    if ( result != nullptr )
    {
      result = (int (*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))result(*(uint32_t *)(v1 + 416), COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 948)), HIDWORD(COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 948))), COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 964)), HIDWORD(COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 964))), COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 956)), HIDWORD(COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 956))), COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 972)), HIDWORD(COERCE_UNSIGNED_INT64((double)*(int64_t *)(v1 + 972))));
      if ( result != nullptr )
      {
        v35 = result;
        Curl_failf(v1, "Callback aborted");
        return v35;
      }
      return result;
    }
    if ( v6 == 0 )
      return result;
    if ( (v15 & 0x80u) == 0 )
    {
      if ( *(uint64_t *)(v1 + 34240) != 0 )
        curl_mfprintf(
          *(uint32_t *)(v1 + 260),
          "** Resuming transfer from byte position %lld\n",
          *(uint32_t *)(v1 + 34240),
          *(uint32_t *)(v1 + 34244));
      curl_mfprintf(
        *(uint32_t *)(v1 + 260),
        "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n"
        "                                 Dload  Upload   Total   Spent    Left  Speed\n");
      v15 = *(uint32_t *)(v1 + 996);
      LOBYTE(v15) = v15 | 0x80;
      *(uint32_t *)(v1 + 996) = v15;
    }
    v39 = 0;
    v49 = 0;
    if ( (v15 & 0x20) == 0 )
    {
LABEL_33:
      v68 = 0;
      v47 = 0;
      if ( (v15 & 0x40) != 0 )
      {
        v67 = *(uint64_t *)(v1 + 1008);
        if ( v67 <= 0 )
        {
          v68 = 0;
          v47 = 0;
          goto LABEL_38;
        }
        v43 = *(uint32_t *)(v1 + 948);
        v34 = *(uint32_t *)(v1 + 952);
        v68 = *(uint64_t *)(v1 + 948) / v67;
        if ( v34 < 0 )
        {
LABEL_75:
          v47 = 0;
          goto LABEL_38;
        }
        if ( __SPAIR64__(v34, v43) <= 10000 )
        {
          if ( v43 != 0 )
          {
            v47 = 100LL * *(uint64_t *)(v1 + 964) / __SPAIR64__(v34, v43);
            goto LABEL_38;
          }
          goto LABEL_75;
        }
        v47 = *(uint64_t *)(v1 + 964) / (__SPAIR64__(v34, v43) / 100);
      }
LABEL_38:
      v44 = (int64_t)v4;
      if ( v68 < v39 )
        v68 = v39;
      if ( v68 >= 0 && (SHIDWORD(v68) > 0 || (uint32_t)v68 != 0) )
        v23 = v68 - v44;
      else
        v23 = 0;
      sub_1A6F1D0(v56, v23);
      sub_1A6F1D0(v57, v68);
      sub_1A6F1D0(v58, v44);
      v24 = *(uint32_t *)(v1 + 996);
      if ( (v24 & 0x20) != 0 )
      {
        v40 = *(uint64_t *)(v1 + 956);
        v50 = *(uint64_t *)(v1 + 972);
      }
      else
      {
        v40 = *(uint64_t *)(v1 + 972);
        v50 = v40;
      }
      if ( (v24 & 0x40) != 0 )
        v25 = *(uint64_t *)(v1 + 948);
      else
        v25 = *(uint64_t *)(v1 + 964);
      v41 = v25 + v40;
      v69 = v50 + *(uint64_t *)(v1 + 964);
      if ( v41 < 0 )
        goto LABEL_67;
      if ( v41 > 10000 )
      {
        v27 = v69 / (v41 / 100);
      }
      else
      {
        if ( (uint32_t)v41 == 0 )
        {
LABEL_67:
          v27 = 0;
          goto LABEL_49;
        }
        v27 = 100 * v69 / v41;
      }
LABEL_49:
      v45 = sub_1A6F3F0(*(uint64_t *)(v1 + 980), (int)(uintptr_t)(v64));
      v51 = sub_1A6F3F0(*(uint64_t *)(v1 + 1016), (int)(uintptr_t)(v63));
      v52 = sub_1A6F3F0(*(uint64_t *)(v1 + 1008), (int)(uintptr_t)(v62));
      v53 = sub_1A6F3F0(*(uint64_t *)(v1 + 972), (int)(uintptr_t)(v60));
      v32 = sub_1A6F3F0(*(uint64_t *)(v1 + 964), (int)(uintptr_t)(v59));
      v28 = sub_1A6F3F0(v41, (int)(uintptr_t)(v61));
      curl_mfprintf(
        *(uint32_t *)(v1 + 260),
        "\r%3lld %s  %3lld %s  %3lld %s  %s  %s %s %s %s %s",
        v27,
        v28,
        v47,
        v32,
        v49,
        v53,
        v52,
        v51,
        v57,
        v58,
        v56,
        v45);
      fflush(*(FILE **)(v1 + 260));
      return nullptr;
    }
    v66 = *(uint64_t *)(v1 + 1016);
    if ( v66 <= 0 )
    {
      v39 = 0;
      v49 = 0;
      goto LABEL_33;
    }
    v21 = *(uint64_t *)(v1 + 956);
    v39 = v21 / v66;
    if ( v21 >= 0 )
    {
      if ( v21 > 10000 )
      {
        v33 = v4;
        v31 = v21 / 100;
        stream = *(uint64_t *)(v1 + 972);
      }
      else
      {
        if ( (uint32_t)v21 == 0 )
          goto LABEL_77;
        v31 = *(uint64_t *)(v1 + 956);
        stream = 100LL * *(uint64_t *)(v1 + 972);
        v33 = v4;
      }
      v49 = stream / v31;
      v4 = v33;
      goto LABEL_33;
    }
LABEL_77:
    v49 = 0;
    goto LABEL_33;
  }
  return result;
}


// ============================================================================
// Address:   0x1a706b0 (size: 114 bytes)
// Symbol:    Curl_pgrsDone
// Demangled: Curl_pgrsDone
// ============================================================================
int (*Curl_pgrsDone(int *a1))(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)
{
  int v1;
  int (*result)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

  v1 = *a1;
  *(uint32_t *)(*a1 + 944) = 0;
  result = Curl_pgrsUpdate(a1);
  if ( (*(uint8_t *)(v1 + 996) & 0x10) == 0 && *(uint8_t *)(v1 + 988) == 0 )
    result = (int (*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))curl_mfprintf(*(uint32_t *)(v1 + 260), (char *)&a0[1]);
  *(uint32_t *)(v1 + 1184) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: Curl_raw_toupper  (binary VA: 0x1a70730)
// Original: Curl_raw_toupper
// ----------------------------------------------------------------------------
int Curl_raw_toupper(uint8_t a1)
{
  int result;

  result = a1;
  switch ( a1 )
  {
    case 'a':
      result = 65;
      break;
    case 'b':
      result = 66;
      break;
    case 'c':
      result = 67;
      break;
    case 'd':
      result = 68;
      break;
    case 'e':
      result = 69;
      break;
    case 'f':
      result = 70;
      break;
    case 'g':
      result = 71;
      break;
    case 'h':
      result = 72;
      break;
    case 'i':
      result = 73;
      break;
    case 'j':
      result = 74;
      break;
    case 'k':
      result = 75;
      break;
    case 'l':
      result = 76;
      break;
    case 'm':
      result = 77;
      break;
    case 'n':
      result = 78;
      break;
    case 'o':
      result = 79;
      break;
    case 'p':
      result = 80;
      break;
    case 'q':
      result = 81;
      break;
    case 'r':
      result = 82;
      break;
    case 's':
      result = 83;
      break;
    case 't':
      result = 84;
      break;
    case 'u':
      result = 85;
      break;
    case 'v':
      result = 86;
      break;
    case 'w':
      result = 87;
      break;
    case 'x':
      result = 88;
      break;
    case 'y':
      result = 89;
      break;
    case 'z':
      result = 90;
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_raw_equal  (binary VA: 0x1a70830)
// Original: Curl_raw_equal
// ----------------------------------------------------------------------------
bool Curl_raw_equal(uint8_t *a1, uint8_t *a2)
{
  uint8_t *v2;
  uint8_t v4;
  char v5; // bp
  char v6; // di

  v2 = a1;
  v4 = *a1;
  if ( *a1 != 0 )
  {
    while ( *a2 != 0 )
    {
      v5 = Curl_raw_toupper(v4);
      if ( v5 != (uint8_t)Curl_raw_toupper(*a2) )
      {
        v4 = *v2;
        break;
      }
      ++v2;
      ++a2;
      v4 = *v2;
      if ( *v2 == 0 )
        break;
    }
  }
  v6 = Curl_raw_toupper(v4);
  return v6 == (char)Curl_raw_toupper(*a2);
}

// ----------------------------------------------------------------------------
// Function: Curl_raw_nequal  (binary VA: 0x1a708c0)
// Original: Curl_raw_nequal
// ----------------------------------------------------------------------------
bool Curl_raw_nequal(uint8_t *a1, uint8_t *a2, int a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int v5;
  uint8_t v6;
  char v7; // di
  bool result;
  char v9;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *a1;
  if ( *a1 != 0 && a3 != 0 && *a2 != 0 )
  {
    do
    {
      v9 = Curl_raw_toupper(v6);
      if ( v9 != (uint8_t)Curl_raw_toupper(*v4) )
        goto LABEL_9;
      ++v3;
      --v5;
      v6 = *v3;
      ++v4;
    }
    while ( *v3 != 0 && *v4 != 0 && v5 != 0 );
  }
  result = true;
  if ( v5 != 0 )
  {
LABEL_9:
    v7 = Curl_raw_toupper(*v3);
    return v7 == (char)Curl_raw_toupper(*v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_strntoupper  (binary VA: 0x1a70980)
// Original: Curl_strntoupper
// ----------------------------------------------------------------------------
void Curl_strntoupper(uint8_t *a1, uint8_t *a2, int a3)
{
  int i;
  char v6;

  for ( i = a3; i != 0; --i )
  {
    *a1++ = Curl_raw_toupper(*a2);
    v6 = *a2++;
    if ( v6 == 0 )
      break;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_socket_ready  (binary VA: 0x1a70b30)
// Original: Curl_socket_ready
// ----------------------------------------------------------------------------
int Curl_socket_ready(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5;
  int v6;
  struct timeval *timeout;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_nfds;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef fd_set _g4_t_readfds;
  typedef fd_set _g4_t_writefds;
  typedef fd_set _g4_t_exceptfds;
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (8u + sizeof(_g4_t_nfds)) > _g4_s0 ? (8u + sizeof(_g4_t_nfds)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_readfds)) > _g4_s7 ? (48u + sizeof(_g4_t_readfds)) : _g4_s7,
    _g4_s9 = (176u + sizeof(_g4_t_writefds)) > _g4_s8 ? (176u + sizeof(_g4_t_writefds)) : _g4_s8,
    _g4_s10 = (304u + sizeof(_g4_t_exceptfds)) > _g4_s9 ? (304u + sizeof(_g4_t_exceptfds)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_nfds &nfds = *reinterpret_cast<_g4_t_nfds *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_readfds &readfds = *reinterpret_cast<_g4_t_readfds *>(_g4_sf + 48u);
  _g4_t_writefds &writefds = *reinterpret_cast<_g4_t_writefds *>(_g4_sf + 176u);
  _g4_t_exceptfds &exceptfds = *reinterpret_cast<_g4_t_exceptfds *>(_g4_sf + 304u);

  v15 = 0;
  v16 = 0;
  if ( a4 != -1 || a3 != -1 )
  {
    v5 = 0;
    if ( a5 > 0 )
    {
      curlx_tvnow(&v17);
      v5 = a5;
      v15 = v17;
      v16 = v18;
    }
    v6 = 32;
    memset(&exceptfds, 0, sizeof(exceptfds));
    memset(&readfds, 0, sizeof(readfds));
    if ( a3 == -1 )
    {
      v6 = -1;
    }
    else
    {
      if ( a3 > 0x3FF )
        goto LABEL_39;
      FD_SET(a3, &readfds);
      FD_SET(a3, &exceptfds);
      v6 = a3;
    }
    memset(&writefds, 0, sizeof(writefds));
    if ( a4 == -1 )
    {
LABEL_11:
      timeout = nullptr;
      if ( a5 >= 0 )
        timeout = (struct timeval *)&v19;
      nfds = v6 + 1;
LABEL_14:
      if ( a5 > 0 )
      {
        v19 = v5 / 1000;
        v20 = 1000 * (v5 % 1000);
        goto LABEL_16;
      }
      while ( 1 )
      {
        if ( a5 == 0 )
        {
          v19 = 0;
          v20 = 0;
        }
LABEL_16:
        v8 = select(nfds, &readfds, &writefds, &exceptfds, timeout);
        v11 = v8;
        if ( v8 != -1 )
          break;
        v12 = *(uint32_t *)__errno(v10, v9);
        if ( v12 != 4 && v12 != 0 )
          return v11;
        if ( a5 > 0 )
        {
          curlx_tvnow(&v17);
          v5 = a5 - curlx_tvdiff(v17, v18, v15, v16);
          if ( v5 > 0 )
            goto LABEL_14;
          return v11;
        }
      }
      if ( v8 < 0 )
        return -1;
      if ( v8 != 0 )
      {
        v11 = 0;
        if ( a3 != -1 )
        {
          v11 = FD_ISSET(a3, &readfds) != 0;
          if ( FD_ISSET(a3, &exceptfds) != 0 )
            v11 |= 4u;
        }
        if ( a4 != -1 )
        {
          if ( FD_ISSET(a4, &writefds) != 0 )
            v11 |= 2u;
          if ( FD_ISSET(a4, &exceptfds) != 0 )
            return v11 | 4;
          return v11;
        }
      }
      return v11;
    }
    if ( a4 <= 0x3FF )
    {
      FD_SET(a4, &writefds);
      FD_SET(a4, &exceptfds);
      if ( v6 < (int)a4 )
        v6 = a4;
      goto LABEL_11;
    }
LABEL_39:
    *(uint32_t *)__errno(0, v6) = 22;
    return -1;
  }
  return sub_1A709F0(a5, a2, a1);
}

// ----------------------------------------------------------------------------
// Function: Curl_poll  (binary VA: 0x1a70e30)
// Original: Curl_poll
// ----------------------------------------------------------------------------
int Curl_poll(int a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v8;
  unsigned int *v9;
  int v10;
  unsigned int v11;
  int16_t v12; // si
  int *v13;
  int v14;
  int nfds;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  typedef struct timeval *_g4_t_timeout;
  typedef int16_t _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef fd_set _g4_t_readfds;
  typedef fd_set _g4_t_writefds;
  typedef fd_set _g4_t_exceptfds;
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (8u + sizeof(_g4_t_timeout)) > _g4_s0 ? (8u + sizeof(_g4_t_timeout)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v29)) > _g4_s7 ? (40u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v30)) > _g4_s8 ? (44u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_readfds)) > _g4_s9 ? (48u + sizeof(_g4_t_readfds)) : _g4_s9,
    _g4_s11 = (176u + sizeof(_g4_t_writefds)) > _g4_s10 ? (176u + sizeof(_g4_t_writefds)) : _g4_s10,
    _g4_s12 = (304u + sizeof(_g4_t_exceptfds)) > _g4_s11 ? (304u + sizeof(_g4_t_exceptfds)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_timeout &timeout = *reinterpret_cast<_g4_t_timeout *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_readfds &readfds = *reinterpret_cast<_g4_t_readfds *>(_g4_sf + 48u);
  _g4_t_writefds &writefds = *reinterpret_cast<_g4_t_writefds *>(_g4_sf + 176u);
  _g4_t_exceptfds &exceptfds = *reinterpret_cast<_g4_t_exceptfds *>(_g4_sf + 304u);

  v24 = 0;
  v25 = 0;
  if ( a3 == nullptr )
    return sub_1A709F0(a5, a2, a1);
  a1 = a4;
  if ( a4 == 0 )
    return sub_1A709F0(a5, a2, a1);
  if ( *a3 == -1 )
  {
    v5 = 0;
    a2 = a4;
    while ( ++v5 != a4 )
    {
      if ( a3[2 * v5] != -1 )
        goto LABEL_9;
    }
    return sub_1A709F0(a5, a2, a1);
  }
LABEL_9:
  if ( a5 <= 0 )
  {
    v26 = 0;
  }
  else
  {
    curlx_tvnow(&v27);
    v24 = v27;
    v25 = v28;
    v26 = a5;
  }
  memset(&readfds, 0, sizeof(readfds));
  memset(&writefds, 0, sizeof(writefds));
  memset(&exceptfds, 0, sizeof(exceptfds));
  v8 = 0;
  v9 = a3;
  v10 = -1;
  while ( 1 )
  {
    v11 = *v9;
    *((uint16_t *)v9 + 3) = 0;
    if ( v11 != -1 )
      break;
LABEL_23:
    ++v8;
    v9 += 2;
    if ( v8 == a4 )
    {
      v13 = &v29;
      if ( a5 < 0 )
        v13 = nullptr;
      v14 = v26;
      timeout = (struct timeval *)v13;
      nfds = v10 + 1;
      while ( 1 )
      {
        if ( a5 > 0 )
        {
          v29 = v14 / 1000;
          v30 = 1000 * (v14 % 1000);
          goto LABEL_29;
        }
        do
        {
          if ( a5 == 0 )
          {
            v29 = 0;
            v30 = 0;
          }
LABEL_29:
          v16 = select(nfds, &readfds, &writefds, &exceptfds, timeout);
          v6 = v16;
          if ( v16 != -1 )
          {
            if ( v16 < 0 )
              return -1;
            if ( v16 == 0 )
              return v6;
            v6 = 0;
            v20 = 0;
            while ( 2 )
            {
              v21 = a3[2 * v20];
              HIWORD(a3[2 * v20 + 1]) = 0;
              if ( v21 != -1 )
              {
                v23 = 0;
                if ( FD_ISSET(v21, &readfds) != 0 )
                {
                  HIWORD(a3[2 * v20 + 1]) = 1;
                  v23 = 1;
                }
                if ( FD_ISSET(v21, &writefds) != 0 )
                {
                  v23 |= 4u;
                  HIWORD(a3[2 * v20 + 1]) = v23;
                }
                if ( FD_ISSET(v21, &exceptfds) != 0 )
                {
                  HIWORD(a3[2 * v20 + 1]) = v23 | 2;
                  goto LABEL_42;
                }
                if ( v23 != 0 )
LABEL_42:
                  ++v6;
              }
              if ( ++v20 == a4 )
                return v6;
              continue;
            }
          }
          v19 = *(uint32_t *)__errno(v18, v17);
          if ( v19 != 4 && v19 != 0 )
            return v6;
        }
        while ( a5 <= 0 );
        curlx_tvnow(&v27);
        v14 = a5 - curlx_tvdiff(v27, v28, v24, v25);
        if ( v14 <= 0 )
          return v6;
      }
    }
  }
  if ( v11 <= 0x3FF )
  {
    v12 = *((uint16_t *)v9 + 2);
    if ( (v12 & 0x1C7) != 0 )
    {
      if ( v10 < (int)v11 )
        v10 = v11;
      if ( (v12 & 0x41) != 0 )
      {
        FD_SET(v11, &readfds);
        v12 = *((uint16_t *)v9 + 2);
      }
      if ( (v12 & 0x104) != 0 )
      {
        FD_SET(*v9, &writefds);
        v12 = *((uint16_t *)v9 + 2);
      }
      if ( (v12 & 0x82) != 0 )
        FD_SET(*v9, &exceptfds);
    }
    goto LABEL_23;
  }
  *(uint32_t *)__errno(v8, v11) = 22;
  return -1;
}

// ----------------------------------------------------------------------------
// Function: Curl_blockread_all  (binary VA: 0x1a71190)
// Original: Curl_blockread_all
// ----------------------------------------------------------------------------
int Curl_blockread_all(int a1, int a2, char *a3, size_t a4, uint32_t *a5, int a6)
{
  int v7;
  int v8;
  int result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[5];
  typedef ssize_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v10 = 0;
  *a5 = 0;
  while ( 1 )
  {
    do
    {
      curlx_tvnow(v11);
      v7 = curlx_tvdiff(v11[0], v11[1], *(uint32_t *)(a1 + 296), *(uint32_t *)(a1 + 300));
      if ( v7 > a6 )
        return 28;
      if ( Curl_socket_ready(v8, a6 - v7, a2, 0xFFFFFFFF, a6 - v7) <= 0 )
        return -1;
      result = Curl_read_plain(a2, a3, a4, v12);
    }
    while ( result == 81 );
    if ( result != 0 )
      return result;
    if ( a4 == v12[0] )
      break;
    if ( v12[0] == 0 )
      return -1;
    a4 -= v12[0];
    a3 += v12[0];
    v10 += v12[0];
  }
  *a5 = v10 + a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_SOCKS4  (binary VA: 0x1a712a0)
// Original: Curl_SOCKS4
// ----------------------------------------------------------------------------
int Curl_SOCKS4(int a1, char *src, int a3, int a4, int ***a5, char a6)
{
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  size_t v10;
  size_t v11;
  int result;
  int v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int16_t _g4_t_v23;
  typedef int16_t _g4_t_v24;
  typedef int16_t _g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27[64];
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef uint8_t _g4_t_v35;
  typedef char _g4_t_s;
  typedef uint8_t _g4_t_v37;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v21)) > _g4_s7 ? (40u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v22)) > _g4_s8 ? (44u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (50u + sizeof(_g4_t_v23)) > _g4_s9 ? (50u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v24)) > _g4_s10 ? (52u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (54u + sizeof(_g4_t_v25)) > _g4_s11 ? (54u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v26)) > _g4_s12 ? (56u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (58u + sizeof(_g4_t_v27)) > _g4_s13 ? (58u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (122u + sizeof(_g4_t_v28)) > _g4_s14 ? (122u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (123u + sizeof(_g4_t_v29)) > _g4_s15 ? (123u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v30)) > _g4_s16 ? (124u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (125u + sizeof(_g4_t_v31)) > _g4_s17 ? (125u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (126u + sizeof(_g4_t_v32)) > _g4_s18 ? (126u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (127u + sizeof(_g4_t_v33)) > _g4_s19 ? (127u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v34)) > _g4_s20 ? (128u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (129u + sizeof(_g4_t_v35)) > _g4_s21 ? (129u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (130u + sizeof(_g4_t_s)) > _g4_s22 ? (130u + sizeof(_g4_t_s)) : _g4_s22,
    _g4_s24 = (131u + sizeof(_g4_t_v37)) > _g4_s23 ? (131u + sizeof(_g4_t_v37)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 50u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 54u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 58u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 122u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 123u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 125u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 126u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 127u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 129u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 130u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 131u);

  v6 = (int)(uintptr_t)(*a5);
  v7 = (int)(uintptr_t)(a5[a4 + 76]);
  v20 = Curl_timeleft(*a5, nullptr, 1);
  if ( v20 < 0 )
  {
    Curl_failf(v6, "Connection time-out");
    return 28;
  }
  curlx_nonblock();
  v28 = 4;
  v30 = BYTE1(a3);
  v29 = 1;
  v31 = a3;
  if ( a6 == 0 )
  {
    v13 = Curl_resolv(a5, src, a3, &v22);
    result = 5;
    if ( v13 == -1 )
      return result;
    if ( v22 != 0 && *(uint32_t *)v22 != 0 )
    {
      Curl_printable_address(*(uint32_t *)v22, v27, 64);
      if ( sscanf(v27, "%hu.%hu.%hu.%hu", &v23, &v24, &v25, &v26) == 4 )
      {
        v32 = v23;
        v33 = v24;
        v34 = v25;
        v35 = v26;
        Curl_resolv_unlock(v6, (uint32_t *)v22);
        goto LABEL_3;
      }
      Curl_resolv_unlock(v6, (uint32_t *)v22);
    }
    Curl_failf(v6, "Failed to resolve \"%s\" for SOCKS4 connect.", src);
    return 6;
  }
LABEL_3:
  s = 0;
  if ( a1 != 0 )
    strlcat(g4_unfortify_char_ptr(&s), (const char *)(uintptr_t)a1, 254);
  v8 = strlen(&s);
  v9 = 0;
  v10 = v8 + 9;
  if ( a6 != 0 )
  {
    v14 = (char *)(v8 + 9);
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 1;
    v11 = strlen(src);
    v10 = (size_t)v14;
    v19 = (int)(uintptr_t)(&v14[v11 + 1]);
    if ( v19 <= 262 )
    {
      v18 = v11 + 1;
      strcpy(&v28 + (uint32_t)(uintptr_t)(v14), src);
      v10 = v19;
      v9 = v18;
    }
    else
    {
      v9 = 0;
    }
  }
  v15 = (char *)v10;
  v17 = v9;
  if ( Curl_write_plain((int *)a5, v7, &v28, v10, &v22) != 0
    || (char *)v22 != v15
    || a6 != 0
    && v17 == 0
    && ((v16 = (char *)(strlen(src) + 1), Curl_write_plain((int *)a5, v7, src, (size_t)v16, &v22) != 0)
     || (char *)v22 != v16) )
  {
    Curl_failf(v6, "Failed to send SOCKS4 connect request.");
    return 7;
  }
  else
  {
    if ( Curl_blockread_all((int)(uintptr_t)(a5), v7, &v28, 8u, &v21, v20) != 0 || v21 != 8 )
    {
      Curl_failf(v6, "Failed to receive SOCKS4 connect request ack.");
      return 7;
    }
    if ( v28 != 0 )
    {
      Curl_failf(v6, "SOCKS4 reply has wrong version, version should be 4.");
      return 7;
    }
    else
    {
      switch ( v29 )
      {
        case 'Z':
          if ( a6 != 0 )
            Curl_infof(v6, "SOCKS4a request granted.\n");
          else
            Curl_infof(v6, "SOCKS4 request granted.\n");
          curlx_nonblock();
          return 0;
        case '[':
          Curl_failf(
            v6,
            "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.",
            v32,
            v33,
            v34,
            v35,
            v37 | ((uint8_t)s << 8),
            91);
          return 7;
        case '\\':
          Curl_failf(
            v6,
            "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot conne"
            "ct to identd on the client.",
            v32,
            v33,
            v34,
            v35,
            v37 | ((uint8_t)s << 8),
            92);
          return 7;
        case ']':
          Curl_failf(
            v6,
            "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and id"
            "entd report different user-ids.",
            v32,
            v33,
            v34,
            v35,
            v37 | ((uint8_t)s << 8),
            93);
          return 7;
        default:
          Curl_failf(
            v6,
            "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.",
            v32,
            v33,
            v34,
            v35,
            v37 | ((uint8_t)s << 8),
            v29);
          return 7;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_SOCKS5  (binary VA: 0x1a71900)
// Original: Curl_SOCKS5
// ----------------------------------------------------------------------------
int Curl_SOCKS5(const char *src, const char *a2, char *s, int a4, int a5, int *a6)
{
  uint32_t *v6;
  size_t v7;
  int v8;
  int v9;
  int v10;
  char *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  size_t v17;
  int v18;
  unsigned int v19; // kr04_4
  size_t v20;
  unsigned int v21; // kr08_4
  size_t v22;
  int v23;
  size_t v24;
  unsigned int v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int16_t _g4_t_v36;
  typedef int16_t _g4_t_v37;
  typedef int16_t _g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40[64];
  typedef uint8_t _g4_t_v41;
  typedef uint8_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef uint8_t _g4_t_dest;
  typedef uint8_t _g4_t_v47;
  typedef uint8_t _g4_t_v48;
  typedef uint8_t _g4_t_v49;
  typedef uint8_t _g4_t_v50;
  typedef char _g4_t_v51[602];
  enum : size_t {
    _g4_s0 = 816u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_n)) > _g4_s5 ? (24u + sizeof(_g4_t_n)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v32)) > _g4_s6 ? (31u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v34)) > _g4_s8 ? (40u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v35)) > _g4_s9 ? (44u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v36)) > _g4_s10 ? (48u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (50u + sizeof(_g4_t_v37)) > _g4_s11 ? (50u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (54u + sizeof(_g4_t_v39)) > _g4_s13 ? (54u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v40)) > _g4_s14 ? (56u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v41)) > _g4_s15 ? (120u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (121u + sizeof(_g4_t_v42)) > _g4_s16 ? (121u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (122u + sizeof(_g4_t_v43)) > _g4_s17 ? (122u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (123u + sizeof(_g4_t_v44)) > _g4_s18 ? (123u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v45)) > _g4_s19 ? (124u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (125u + sizeof(_g4_t_dest)) > _g4_s20 ? (125u + sizeof(_g4_t_dest)) : _g4_s20,
    _g4_s22 = (126u + sizeof(_g4_t_v47)) > _g4_s21 ? (126u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (127u + sizeof(_g4_t_v48)) > _g4_s22 ? (127u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v49)) > _g4_s23 ? (128u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (129u + sizeof(_g4_t_v50)) > _g4_s24 ? (129u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (130u + sizeof(_g4_t_v51)) > _g4_s25 ? (130u + sizeof(_g4_t_v51)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 31u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 50u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 54u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 121u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 122u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 123u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 125u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 126u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 127u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 129u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 130u);

  v6 = (uint32_t *)*a6;
  v30 = a6[a5 + 76];
  v7 = strlen(s);
  n = v7;
  v32 = 1;
  if ( a6[69] != 5 )
  {
    v32 = 0;
    if ( v7 > 0xFF )
    {
      Curl_infof((int)(uintptr_t)(v6), "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n", v7);
      v32 = 1;
    }
  }
  v29 = Curl_timeleft(v6, nullptr, 1);
  if ( v29 < 0 )
  {
    v10 = 28;
    Curl_failf((int)(uintptr_t)(v6), "Connection time-out");
    return v10;
  }
  curlx_nonblock();
  v9 = Curl_socket_ready(v30, v8, 0xFFFFFFFF, v30, v29);
  if ( v9 == -1 )
  {
    v12 = "SOCKS5: no connection here";
LABEL_14:
    v10 = 7;
    Curl_failf(*a6, v12);
    return v10;
  }
  if ( v9 == 0 )
  {
    v13 = "SOCKS5: connection timeout";
LABEL_17:
    v10 = 28;
    Curl_failf(*a6, v13);
    return v10;
  }
  if ( (v9 & 4) != 0 )
  {
    v12 = "SOCKS5: error occurred during connection";
    goto LABEL_14;
  }
  v41 = 5;
  v43 = 0;
  v42 = 2 - (src == nullptr);
  v44 = 2;
  curlx_nonblock();
  if ( Curl_write_plain(a6, v30, &v41, v42 + 2, &v34) != 0 || v42 + 2 != v34 )
  {
    v10 = 7;
    Curl_failf((int)(uintptr_t)(v6), "Unable to send initial SOCKS5 request.");
    return v10;
  }
  curlx_nonblock();
  v16 = Curl_socket_ready(v15, v14, v30, 0xFFFFFFFF, v29);
  if ( v16 == -1 )
  {
    v12 = "SOCKS5 nothing to read";
    goto LABEL_14;
  }
  if ( v16 == 0 )
  {
    v13 = "SOCKS5 read timeout";
    goto LABEL_17;
  }
  if ( (v16 & 4) != 0 )
  {
    v10 = 56;
    Curl_failf(*a6, "SOCKS5 read error occurred");
    return v10;
  }
  curlx_nonblock();
  if ( Curl_blockread_all((int)(uintptr_t)(a6), v30, (char *)&v41, 2u, &v33, v29) != 0 || v33 != 2 )
  {
    v10 = 7;
    Curl_failf((int)(uintptr_t)(v6), "Unable to receive initial SOCKS5 response.");
    return v10;
  }
  if ( v41 != 5 )
  {
    v10 = 7;
    Curl_failf((int)(uintptr_t)(v6), "Received invalid version in initial SOCKS5 response.");
    return v10;
  }
  switch ( v42 )
  {
    case 0u:
LABEL_34:
      v41 = 5;
      v42 = 1;
      v43 = 0;
      if ( v32 == 0 )
      {
        v45 = n;
        v44 = 3;
        memcpy(&dest, s, n);
        *(&dest + n) = BYTE1(a4);
        *(&v47 + n) = a4;
        v17 = n + 7;
LABEL_36:
        v26 = v17;
        v10 = Curl_write_plain(a6, v30, &v41, v17, &v34);
        if ( v10 != 0 || v34 != v26 )
        {
          v10 = 7;
          Curl_failf((int)(uintptr_t)(v6), "Failed to send SOCKS5 connect request.");
          return v10;
        }
        if ( Curl_blockread_all((int)(uintptr_t)(a6), v30, (char *)&v41, 0xAu, &v33, v29) != 0 || v33 != 10 )
        {
LABEL_68:
          v10 = 7;
          Curl_failf((int)(uintptr_t)(v6), "Failed to receive SOCKS5 connect request ack.");
          return v10;
        }
        if ( v41 != 5 )
        {
          v10 = 7;
          Curl_failf((int)(uintptr_t)(v6), "SOCKS5 reply has wrong version, version should be 5.");
          return v10;
        }
        if ( v42 != 0 )
        {
          v10 = 7;
          Curl_failf(
            (int)(uintptr_t)(v6),
            "Can't complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)",
            v45,
            dest,
            v47,
            v48,
            v50 | (v49 << 8),
            v42);
          return v10;
        }
        if ( v44 == 3 )
        {
          v25 = v45 + 7;
          if ( v25 <= 0xA )
            goto LABEL_75;
        }
        else
        {
          if ( v44 != 4 )
            goto LABEL_75;
          v25 = 22;
        }
        v28 = v25 - 10;
        if ( Curl_blockread_all((int)(uintptr_t)(a6), v30, v51, v25 - 10, &v33, v29) != 0 || v33 != v28 )
          goto LABEL_68;
LABEL_75:
        curlx_nonblock();
        return v10;
      }
      v10 = 6;
      v18 = Curl_resolv((int ***)a6, s, a4, (int *)&v35);
      v44 = 1;
      if ( v18 == -1 || v18 == 1 )
        return v10;
      if ( v35 != nullptr && *v35 != 0 )
      {
        Curl_printable_address(*v35, v40, 64);
        if ( sscanf(v40, "%hu.%hu.%hu.%hu", &v36, &v37, &v38, &v39) == 4 )
        {
          v45 = v36;
          dest = v37;
          v47 = v38;
          v48 = v39;
          Curl_resolv_unlock((int)(uintptr_t)(v6), v35);
          v17 = 10;
          v49 = BYTE1(a4);
          v50 = a4;
          goto LABEL_36;
        }
        Curl_resolv_unlock((int)(uintptr_t)(v6), v35);
      }
      v10 = 6;
      Curl_failf((int)(uintptr_t)(v6), "Failed to resolve \"%s\" for SOCKS5 connect.", s);
      return v10;
    case 2u:
      if ( a2 != nullptr && src != nullptr )
      {
        v19 = strlen(src) + 1;
        v20 = v19 - 1;
        v21 = strlen(a2) + 1;
        v41 = 1;
        v42 = v19 - 1;
        v22 = v21 - 1;
        if ( v19 != 1 )
        {
          memcpy(&v43, src, v20);
          v20 = v19 - 1;
        }
        *(&v43 + v20) = v22;
        v23 = v20 + 3;
        if ( v21 != 1 )
        {
          v27 = v23;
          memcpy(&v41 + v23, a2, v22);
          v23 = v27;
        }
      }
      else
      {
        v41 = 1;
        v42 = 0;
        v43 = 0;
        v22 = 0;
        v23 = 3;
      }
      v24 = v23 + v22;
      if ( Curl_write_plain(a6, v30, &v41, v24, &v34) != 0 || v24 != v34 )
      {
        v10 = 7;
        Curl_failf((int)(uintptr_t)(v6), "Failed to send SOCKS5 sub-negotiation request.");
        return v10;
      }
      if ( Curl_blockread_all((int)(uintptr_t)(a6), v30, (char *)&v41, 2u, &v33, v29) != 0 || v33 != 2 )
      {
        v10 = 7;
        Curl_failf((int)(uintptr_t)(v6), "Unable to receive SOCKS5 sub-negotiation response.");
        return v10;
      }
      if ( v42 != 0 )
      {
        v10 = 7;
        Curl_failf((int)(uintptr_t)(v6), "User was rejected by the SOCKS5 server (%d %d).", v41, v42);
        return v10;
      }
      goto LABEL_34;
    case 1u:
      v10 = 7;
      Curl_failf((int)(uintptr_t)(v6), "SOCKS5 GSSAPI per-message authentication is not supported.");
      break;
    case 0xFF:
      if ( src != nullptr && *src != 0 )
      {
        v10 = 7;
        Curl_failf((int)(uintptr_t)(v6), "No authentication method was acceptable.");
      }
      else
      {
        v10 = 7;
        Curl_failf(
          (int)(uintptr_t)(v6),
          "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password"
          ", since none was supplied to the server on this connection.)");
      }
      break;
    default:
      v10 = 7;
      Curl_failf((int)(uintptr_t)(v6), "Undocumented SOCKS5 mode attempted to be used by server.");
      break;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: Curl_speedinit  (binary VA: 0x1a72260)
// Original: Curl_speedinit
// ----------------------------------------------------------------------------
int Curl_speedinit(int a1)
{
  *(uint32_t *)(a1 + 1196) = 0;
  *(uint32_t *)(a1 + 1200) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Curl_speedcheck  (binary VA: 0x1a72280)
// Original: Curl_speedcheck
// ----------------------------------------------------------------------------
int Curl_speedcheck(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v6;
  int v7;

  if ( *(int *)(a1 + 984) >= 0 && *(uint32_t *)(a1 + 452) != 0 )
  {
    v6 = Curl_tvlong(*(uint32_t *)(a1 + 1196));
    v3 = *(uint32_t *)(a1 + 448);
    if ( v6 != 0 && *(uint64_t *)(a1 + 980) < v3 )
    {
      v7 = curlx_tvdiff(a2, a3, *(uint32_t *)(a1 + 1196), *(uint32_t *)(a1 + 1200));
      if ( v7 / 1000 <= *(uint32_t *)(a1 + 452) )
      {
        v4 = 0;
        Curl_expire((uint32_t *)a1, v7);
      }
      else
      {
        v4 = 28;
        Curl_failf(
          a1,
          "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
          *(uint32_t *)(a1 + 448),
          *(uint32_t *)(a1 + 452));
      }
      return v4;
    }
  }
  else
  {
    v3 = *(uint32_t *)(a1 + 448);
  }
  *(uint32_t *)(a1 + 1196) = a2;
  v4 = 0;
  *(uint32_t *)(a1 + 1200) = a3;
  if ( v3 != 0 )
    Curl_expire((uint32_t *)a1, 1000 * *(uint32_t *)(a1 + 452));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Curl_splay  (binary VA: 0x1a723d0)
// Original: Curl_splay
// ----------------------------------------------------------------------------
int * Curl_splay(int a1, int a2, int *a3)
{
  int *result;
  int *v4;
  int *v5;
  bool i; // cc
  int *v7;
  int *v8;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  result = a3;
  if ( a3 == nullptr )
    return result;
  v4 = &v10;
  v11 = 0;
  v10 = 0;
  v5 = &v10;
  while ( 1 )
  {
    for ( i = a1 <= result[3]; a1 >= result[3]; i = a1 <= result[3] )
    {
      if ( i )
      {
        if ( a2 < result[4] )
          break;
        if ( a2 <= result[4] )
          goto LABEL_7;
      }
      v8 = (int *)result[1];
      if ( v8 == nullptr )
      {
LABEL_7:
        v7 = (int *)*result;
        goto LABEL_8;
      }
      if ( a1 >= v8[3] && (a1 > v8[3] || a2 > v8[4]) )
      {
        result[1] = *v8;
        v9 = v8[1];
        *v8 = (int)(uintptr_t)(result);
        if ( v9 == 0 )
        {
          v7 = result;
          result = v8;
          goto LABEL_8;
        }
        result = v8;
      }
      v5[1] = (int)(uintptr_t)(result);
      v5 = result;
      result = (int *)result[1];
    }
    v7 = (int *)*result;
    if ( *result == 0 )
      goto LABEL_8;
    if ( a1 < v7[3] || a1 <= v7[3] && a2 < v7[4] )
      break;
    v7 = result;
LABEL_22:
    *v4 = (int)(uintptr_t)(v7);
    v4 = v7;
    result = (int *)*v7;
  }
  *result = v7[1];
  v7[1] = (int)(uintptr_t)(result);
  if ( *v7 != 0 )
    goto LABEL_22;
  result = v7;
  v7 = nullptr;
LABEL_8:
  v5[1] = (int)(uintptr_t)(v7);
  *v4 = result[1];
  *result = v11;
  result[1] = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_splayinsert  (binary VA: 0x1a724c0)
// Original: Curl_splayinsert
// ----------------------------------------------------------------------------
int * Curl_splayinsert(int a1, int a2, int *a3, uint32_t *a4)
{
  int *result;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = a3;
  if ( a4 != nullptr )
  {
    if ( a3 == nullptr )
    {
      a4[1] = 0;
      *a4 = 0;
      goto LABEL_9;
    }
    v5 = Curl_splay(a1, a2, a3);
    v6 = v5[3];
    if ( v6 == a1 )
    {
      v7 = v5[4];
      if ( v7 == a2 )
      {
        a4[2] = (uint32_t)(uintptr_t)(v5);
        a4[4] = v7;
        a4[3] = v6;
        *a4 = *v5;
        a4[1] = v5[1];
        *v5 = (int)(uintptr_t)(a4);
        v5[3] = -1;
        v5[4] = -1;
        return (int *)(a4);
      }
    }
    else if ( v6 > a1 )
    {
      goto LABEL_8;
    }
    if ( v6 < a1 || v5[4] <= a2 )
    {
      v9 = v5[1];
      *a4 = (uint32_t)(uintptr_t)(v5);
      a4[1] = v9;
      v5[1] = 0;
      goto LABEL_9;
    }
LABEL_8:
    v8 = *v5;
    a4[1] = (uint32_t)(uintptr_t)(v5);
    *a4 = v8;
    *v5 = 0;
LABEL_9:
    a4[3] = a1;
    a4[4] = a2;
    a4[2] = 0;
    return (int *)(a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_splaygetbest  (binary VA: 0x1a725b0)
// Original: Curl_splaygetbest
// ----------------------------------------------------------------------------
int * Curl_splaygetbest(int a1, int a2, int *a3, int **a4)
{
  int *v4;
  int *v5;
  int v6;
  int *v7;
  int *v9;
  int v10;
  int *v11;

  v4 = a3;
  if ( a3 == nullptr )
    goto LABEL_7;
  v5 = Curl_splay(a1, a2, a3);
  v4 = v5;
  if ( v5[3] <= a1 )
  {
    if ( v5[3] < a1 )
      goto LABEL_11;
    if ( v5[4] <= a2 )
      goto LABEL_10;
  }
  v6 = *v5;
  if ( *v4 == 0 )
    goto LABEL_7;
  v7 = Curl_splay(*(uint32_t *)(v6 + 12), *(uint32_t *)(v6 + 16), v4);
  v4 = v7;
  if ( v7[3] > a1 )
    goto LABEL_7;
  if ( v7[3] >= a1 )
  {
LABEL_10:
    if ( v4[4] > a2 )
    {
LABEL_7:
      *a4 = nullptr;
      return v4;
    }
  }
LABEL_11:
  v9 = (int *)v4[2];
  if ( v9 != nullptr )
  {
    v10 = v4[3];
    v9[4] = v4[4];
    v9[3] = v10;
    v9[1] = v4[1];
    *v9 = *v4;
    *a4 = v4;
    return v9;
  }
  else
  {
    if ( *v4 != 0 )
    {
      v11 = Curl_splay(a1, a2, (int *)*v4);
      v11[1] = v4[1];
    }
    else
    {
      v11 = (int *)v4[1];
    }
    *a4 = v4;
    return v11;
  }
}

// ----------------------------------------------------------------------------
// Function: Curl_splayremovebyaddr  (binary VA: 0x1a726b0)
// Original: Curl_splayremovebyaddr
// ----------------------------------------------------------------------------
int Curl_splayremovebyaddr(int *a1, int *a2, int **a3)
{
  int *v3;
  int result;
  int *v5;
  int *v6;
  int v7;

  if ( a2 == nullptr || a1 == nullptr )
    return 1;
  if ( a2[3] == -1 && a2[4] == -1 )
  {
    result = 3;
    if ( *a2 != 0 )
    {
      *(uint32_t *)(*a2 + 8) = a2[2];
      v5 = (int *)a2[2];
      if ( v5 != nullptr )
        *v5 = *a2;
      *a2 = 0;
      *a3 = a1;
      return 0;
    }
  }
  else
  {
    v3 = Curl_splay(a2[3], a2[4], a1);
    result = 2;
    if ( v3 == a2 )
    {
      v6 = (int *)a2[2];
      if ( v6 != nullptr )
      {
        v7 = a2[3];
        v6[4] = a2[4];
        v6[3] = v7;
        v6[1] = a2[1];
        *v6 = *a2;
      }
      else if ( *a2 != 0 )
      {
        v6 = Curl_splay(a2[3], a2[4], (int *)*a2);
        v6[1] = a2[1];
      }
      else
      {
        v6 = (int *)a2[1];
      }
      *a3 = v6;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: curl_strequal  (binary VA: 0x1a727a0)
// Original: curl_strequal
// ----------------------------------------------------------------------------
bool curl_strequal(char *s1, char *s2)
{
  return strcasecmp(s1, s2) == 0;
}

// ----------------------------------------------------------------------------
// Function: curl_strnequal  (binary VA: 0x1a727e0)
// Original: curl_strnequal
// ----------------------------------------------------------------------------
bool curl_strnequal(char *s1, char *s2, size_t n)
{
  return strncasecmp(s1, s2, n) == 0;
}

// ----------------------------------------------------------------------------
// Function: Curl_tvlong  (binary VA: 0x1a72920)
// Original: Curl_tvlong
// ----------------------------------------------------------------------------
int Curl_tvlong(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Curl_base64_decode  (binary VA: 0x1a729d0)
// Original: Curl_base64_decode
// ----------------------------------------------------------------------------
int Curl_base64_decode(uint8_t *a1, uint32_t *a2)
{
  unsigned int v2;
  int v3;
  char i;
  unsigned int v5;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  int v13;
  int v14;
  uint8_t *v15;
  int v16;
  typedef uint8_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[31];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (45u + sizeof(_g4_t_v21)) > _g4_s4 ? (45u + sizeof(_g4_t_v21)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 45u);

  v2 = 0;
  v3 = (int)(uintptr_t)(a1);
  *a2 = 0;
  for ( i = *a1; i != 0; i = a1[v2] )
  {
    if ( i == 61 )
      break;
    ++v2;
  }
  v20 = 0;
  if ( i == 61 )
  {
    if ( a1[v2 + 1] == 61 )
    {
      v2 += 2;
      v20 = 2;
    }
    else
    {
      ++v2;
      v20 = 1;
    }
  }
  v5 = v2 >> 2;
  v19 = v5;
  if ( v5 == 0 )
    return 0;
  v7 = 3 * v5;
  v18 = 3 * v5 - v20;
  v8 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v18 + 4);
  v17 = v8;
  if ( v8 == nullptr )
    return 0;
  *a2 = (uint32_t)(uintptr_t)(v8);
  if ( v19 != 1 )
  {
    v9 = v8;
    v10 = (int)(uintptr_t)(&v8[v7 - 3]);
    v11 = v9;
    v12 = a1;
    v13 = v10;
    do
    {
      v14 = (int)(uintptr_t)(v12);
      v15 = v11;
      v11 += 3;
      v12 += 4;
      sub_1A72930(v15, v14);
    }
    while ( v11 != (uint8_t *)v13 );
    v3 = (int)(uintptr_t)(&a1[4 * v19 - 4]);
    v17 += 3 * v19 - 3;
  }
  sub_1A72930(v21, v3);
  v16 = 0;
  do
  {
    v17[v16] = v21[v16];
    ++v16;
  }
  while ( v16 != 3 - v20 );
  v17[v16] = 0;
  return v18;
}

// ----------------------------------------------------------------------------
// Function: Curl_base64_encode  (binary VA: 0x1a72b20)
// Original: Curl_base64_encode
// ----------------------------------------------------------------------------
size_t Curl_base64_encode(int a1, char *s, size_t a3, char **a4)
{
  size_t v4;
  char *v5;
  size_t result;
  char *i;
  int v8;
  int j;
  uint8_t v10;
  uint8_t v11;
  uint8_t v12;
  char *v13;
  uint8_t v14;
  uint8_t v15;
  uint8_t v16;

  v4 = a3;
  v5 = s;
  *a4 = nullptr;
  if ( a3 == 0 )
    v4 = strlen(s);
  v13 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 4 * v4 / 3 + 4);
  result = 0;
  if ( v13 != nullptr )
  {
    for ( i = v13; v4 != 0; i += 4 )
    {
      v8 = 0;
      for ( j = 0; j != 3; ++j )
      {
        if ( v4 != 0 )
        {
          ++v8;
          *(&v14 + j) = *v5++;
          --v4;
        }
        else
        {
          *(&v14 + j) = 0;
        }
      }
      v12 = v14 >> 2;
      v10 = (16 * (v14 & 3)) | (v15 >> 4);
      v11 = (4 * (v15 & 0xF)) | (v16 >> 6);
      if ( v8 == 1 )
      {
        curl_msnprintf((int)(uintptr_t)(i), 5, (int)(uintptr_t)("%c%c=="), byte_1D36320[v12], byte_1D36320[v10]);
      }
      else if ( v8 == 2 )
      {
        curl_msnprintf((int)(uintptr_t)(i), 5, (int)(uintptr_t)("%c%c%c="), byte_1D36320[v12], byte_1D36320[v10], byte_1D36320[v11]);
      }
      else
      {
        curl_msnprintf(
          (int)(uintptr_t)(i),
          5,
          (int)(uintptr_t)("%c%c%c%c"),
          byte_1D36320[v12],
          byte_1D36320[v10],
          byte_1D36320[v11],
          byte_1D36320[v16 & 0x3F]);
      }
    }
    *i = 0;
    *a4 = v13;
    return strlen(v13);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Curl_gethostname  (binary VA: 0x1a72d40)
// Original: Curl_gethostname
// ----------------------------------------------------------------------------
int Curl_gethostname()
{
  return -1;
}


