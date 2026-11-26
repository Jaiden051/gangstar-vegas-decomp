#include "Core/Utils/DecompTypes.h"
#include "cxx_stl_runtime_part02.h"

// ----------------------------------------------------------------------------
// Function: sub_190ED00  (binary VA: 0x190ed00)
// Original: sub_190ED00
// ----------------------------------------------------------------------------
char sub_190ED00(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  const void *src;
  size_t v8;
  size_t n;
  int v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  if ( (uint8_t)sub_19404A0(a2) != 0 )
    v2 = (int)(uintptr_t)(sub_193ED70(a2));
  else
    v2 = 0;
  LOBYTE(v3) = sub_1907FD0((uint32_t *)(a1 + 36));
  if ( (uint8_t)v3 != 0 && (*(uint8_t *)(a1 + 69) != 0 || *(uint8_t *)(a1 + 70) != 0) )
  {
    v4 = *(uint32_t *)(a1 + 88);
    if ( v4 == 0 )
      goto LABEL_24;
    v3 = (*(int (**)(uint32_t))(*(uint32_t *)v4 + 20))(*(uint32_t *)(a1 + 88));
    if ( v3 == -1 )
    {
LABEL_13:
      v2 = 0;
      goto LABEL_14;
    }
    if ( *(uint8_t *)(a1 + 69) == 0 )
    {
      if ( *(uint8_t *)(a1 + 70) == 0 )
        goto LABEL_14;
      LOBYTE(v3) = sub_190E1D0(a1);
      if ( (uint8_t)v3 != 0 )
      {
        v3 = *(uint32_t *)(a1 + 60);
        *(uint32_t *)(a1 + 20) = 0;
        *(uint32_t *)(a1 + 4) = v3;
        *(uint32_t *)(a1 + 8) = v3;
        *(uint32_t *)(a1 + 12) = v3;
        *(uint32_t *)(a1 + 16) = 0;
        *(uint32_t *)(a1 + 24) = 0;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    v5 = *(uint32_t *)(a1 + 88);
    if ( v5 == 0 )
LABEL_24:
      sub_18FFF30();
    LOBYTE(v3) = (*(int (**)(uint32_t))(*(uint32_t *)v5 + 24))(*(uint32_t *)(a1 + 88));
    if ( (uint8_t)v3 != 0 )
    {
      if ( v2 != 0 )
      {
        LOBYTE(v3) = G4_VCALL<int>(v2, 24);
        if ( (uint8_t)v3 == 0 )
        {
          (*(void (**)(int *, int, int64_t, int, uint32_t))(*(uint32_t *)a1 + 16))(&v13, a1, (int64_t)0, 1, *(uint32_t *)(a1 + 44));
          LOBYTE(v3) = v14 & v13;
          if ( (v14 & v13) == 0xFFFFFFFF )
            goto LABEL_13;
        }
      }
    }
    else
    {
      v6 = *(uint32_t *)(a1 + 92);
      src = (const void *)(v6
                         + (*(int (**)(uint32_t, int, int, uint32_t, int))(**(uint32_t **)(a1 + 88) + 28))(
                             *(uint32_t *)(a1 + 88),
                             a1 + 56,
                             v6,
                             *(uint32_t *)(a1 + 100),
                             (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4)) >> 2));
      v8 = 0;
      n = *(uint32_t *)(a1 + 104) - (uint32_t)(uintptr_t)(src);
      *(uint32_t *)(a1 + 100) = (uint32_t)(uintptr_t)(src);
      if ( n != 0 )
      {
        v8 = n;
        memmove(*(void **)(a1 + 92), src, n);
      }
      v10 = *(uint32_t *)(a1 + 92);
      *(uint32_t *)(a1 + 20) = 0;
      *(uint32_t *)(a1 + 100) = v10;
      *(uint32_t *)(a1 + 104) = v8 + v10;
      v11 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 4) = v11;
      *(uint32_t *)(a1 + 8) = v11;
      *(uint32_t *)(a1 + 12) = v11;
      v3 = *(uint32_t *)(a1 + 48);
      *(uint32_t *)(a1 + 16) = 0;
      *(uint32_t *)(a1 + 24) = 0;
      *(uint32_t *)(a1 + 52) = v3;
      *(uint32_t *)(a1 + 56) = v3;
    }
  }
LABEL_14:
  *(uint32_t *)(a1 + 88) = v2;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_190EEF0  (binary VA: 0x190eef0)
// Original: sub_190EEF0
// ----------------------------------------------------------------------------
uint32_t * sub_190EEF0(uint32_t *a1, int a2, int64_t a3, int a4, int a5)
{
  int64_t v6; // rax
  int v7;
  int v8;

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( sub_190E1D0(a2) )
  {
    v6 = sub_19081E0(a2 + 36, a3, a4);
    if ( (HIDWORD(v6) & (unsigned int)v6) != 0xFFFFFFFF )
    {
      v7 = *(uint32_t *)(a2 + 92);
      *(uint8_t *)(a2 + 69) = 0;
      *(uint32_t *)(a2 + 104) = v7;
      *(uint32_t *)(a2 + 100) = v7;
      v8 = *(uint32_t *)(a2 + 60);
      *(uint8_t *)(a2 + 70) = 0;
      *(uint32_t *)(a2 + 4) = v8;
      *(uint32_t *)(a2 + 8) = v8;
      *(uint32_t *)(a2 + 12) = v8;
      *(uint32_t *)(a2 + 20) = 0;
      *(uint32_t *)(a2 + 16) = 0;
      *(uint32_t *)(a2 + 24) = 0;
      *(uint32_t *)(a2 + 52) = a5;
      *(uint64_t *)a1 = v6;
      a1[2] = a5;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_190EFE0  (binary VA: 0x190efe0)
// Original: sub_190EFE0
// ----------------------------------------------------------------------------
uint32_t * sub_190EFE0(uint32_t *a1, int a2, int64_t a3, int a4)
{
  int v5;
  bool v6;
  int v7;
  int v8;

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( sub_1907FD0((uint32_t *)(a2 + 36)) )
  {
    if ( *(uint8_t *)(a2 + 84) != 0 )
    {
      v5 = *(uint32_t *)(a2 + 76);
      v6 = *(uint32_t *)(a2 + 8) != *(uint32_t *)(a2 + 4);
      *(uint32_t *)(a2 + 4) = *(uint32_t *)(a2 + 60);
      *(uint8_t *)(a2 + 84) = 0;
      v7 = v5 + 4 * v6;
      v8 = *(uint32_t *)(a2 + 80);
      *(uint32_t *)(a2 + 76) = v7;
      *(uint32_t *)(a2 + 8) = v7;
      *(uint32_t *)(a2 + 12) = v8;
    }
    sub_190EEF0(a1, a2, a3, 0, a4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_190F0A0  (binary VA: 0x190f0a0)
// Original: sub_190F0A0
// ----------------------------------------------------------------------------
uint32_t * sub_190F0A0(uint32_t *a1, int a2, int64_t a3, int a4)
{
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  char v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int64_t v16; // rax
  int v18;
  int64_t v23; // 0:edi.4,4:ebp.4
  typedef int _g4_t_v19;
  typedef bool _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v20)) > _g4_s1 ? (14u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v21)) > _g4_s2 ? (14u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 14u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 14u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);

  v4 = *(uint32_t *)(a2 + 88);
  v5 = 0;
  v20 = true;
  if ( v4 != 0 )
  {
    v6 = G4_VCALL<int>(v4, 20);
    v5 = v6;
    if ( v6 < 0 )
      v5 = 0;
    else
      v20 = v6 <= 0;
  }
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  v7 = sub_1907FD0((uint32_t *)(a2 + 36));
  v8 = a2 + 36;
  if ( v7 && (a3 == 0 || !v20) )
  {
    if ( a4 == 1
      && a3 == 0
      && (*(uint8_t *)(a2 + 70) == 0
       || (v9 = (*(int (**)(uint32_t))(**(uint32_t **)(a2 + 88) + 24))(*(uint32_t *)(a2 + 88)), v8 = a2 + 36, v9 != 0)) )
    {
      v21 = 1;
    }
    else
    {
      if ( *(uint8_t *)(a2 + 84) != 0 )
      {
        v10 = *(uint32_t *)(a2 + 8) == *(uint32_t *)(a2 + 4);
        v11 = *(uint32_t *)(a2 + 76);
        *(uint8_t *)(a2 + 84) = 0;
        v12 = v11 + 4 * !v10;
        v13 = *(uint32_t *)(a2 + 60);
        *(uint32_t *)(a2 + 76) = v12;
        *(uint32_t *)(a2 + 8) = v12;
        v14 = *(uint32_t *)(a2 + 80);
        *(uint32_t *)(a2 + 4) = v13;
        *(uint32_t *)(a2 + 12) = v14;
      }
      v21 = 0;
    }
    v22[0] = *(uint32_t *)(a2 + 48);
    HIDWORD(v23) = (uint64_t)(v5 * a3) >> 32;
    LODWORD(v23) = a3 * v5;
    if ( *(uint8_t *)(a2 + 69) != 0 && a4 == 1 )
    {
      v19 = v8;
      v22[0] = *(uint32_t *)(a2 + 56);
      v18 = sub_190E160(a2, (int)(uintptr_t)(v22));
      v8 = v19;
      v23 += v18;
    }
    if ( v21 != 0 )
    {
      if ( *(uint8_t *)(a2 + 70) != 0 )
      {
        LODWORD(v23) = (*(uint32_t *)(a2 + 20) - *(uint32_t *)(a2 + 16)) >> 2;
        HIDWORD(v23) = (*(uint32_t *)(a2 + 20) - *(uint32_t *)(a2 + 16)) >> 31;
      }
      v16 = sub_19081E0(v8, 0, 1);
      if ( (HIDWORD(v16) & (unsigned int)v16) != 0xFFFFFFFF )
      {
        a1[1] = HIDWORD(v16) + __CFADD__((uint32_t)v16, (uint32_t)v23) + HIDWORD(v23);
        *a1 = v16 + v23;
        a1[2] = v22[0];
      }
    }
    else
    {
      sub_190EEF0(a1, a2, v23, a4, v22[0]);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_190F2C0  (binary VA: 0x190f2c0)
// Original: sub_190F2C0
// ----------------------------------------------------------------------------
int sub_190F2C0(int a1, int a2)
{
  int result;
  char *v3;
  char *v4;
  bool v5;
  unsigned int v6;
  int v7;
  bool v8;
  uint32_t *v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v19)) > _g4_s1 ? (48u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v20)) > _g4_s2 ? (52u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);

  result = -1;
  if ( (*(uint8_t *)(a1 + 44) & 0x10) != 0 )
  {
    if ( *(uint8_t *)(a1 + 69) == 0 )
      goto LABEL_3;
    if ( *(uint8_t *)(a1 + 84) != 0 )
    {
      v10 = *(uint32_t *)(a1 + 76);
      v11 = *(uint32_t *)(a1 + 8) != *(uint32_t *)(a1 + 4);
      *(uint32_t *)(a1 + 12) = *(uint32_t *)(a1 + 80);
      *(uint8_t *)(a1 + 84) = 0;
      v12 = v10 + 4 * v11;
      v13 = *(uint32_t *)(a1 + 60);
      *(uint32_t *)(a1 + 76) = v12;
      *(uint32_t *)(a1 + 4) = v13;
      *(uint32_t *)(a1 + 8) = v12;
    }
    v14 = sub_190E160(a1, a1 + 56);
    sub_190EEF0(v20, a1, v14, 1, *(uint32_t *)(a1 + 56));
    result = -1;
    if ( (v20[1] & v20[0]) != -1 )
    {
LABEL_3:
      v3 = *(char **)(a1 + 16);
      v4 = *(char **)(a1 + 20);
      if ( v3 >= v4 )
      {
        v6 = *(uint32_t *)(a1 + 64);
        if ( v6 <= 1 )
        {
          v19 = a2;
          if ( a2 == -1 )
          {
            *(uint8_t *)(a1 + 70) = 1;
            return 0;
          }
          else
          {
            v17 = sub_190DFC0(a1, (char *)&v19, 1u, v18);
            result = -1;
            if ( v17 )
            {
              *(uint8_t *)(a1 + 70) = 1;
              return a2;
            }
          }
        }
        else
        {
          v7 = *(uint32_t *)(a1 + 60);
          v8 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
          *(uint32_t *)(a1 + 4) = v7;
          *(uint32_t *)(a1 + 8) = v7;
          *(uint32_t *)(a1 + 12) = v7;
          if ( v8 )
          {
            *(uint32_t *)(a1 + 20) = 0;
            *(uint32_t *)(a1 + 16) = 0;
            *(uint32_t *)(a1 + 24) = 0;
          }
          else
          {
            *(uint32_t *)(a1 + 20) = v7;
            *(uint32_t *)(a1 + 16) = v7;
            *(uint32_t *)(a1 + 24) = v7 + 4 * v6 - 4;
          }
          result = 0;
          *(uint8_t *)(a1 + 70) = 1;
          if ( a2 != -1 )
          {
            v9 = *(uint32_t **)(a1 + 20);
            *v9 = a2;
            *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v9 + 1);
            return a2;
          }
        }
      }
      else
      {
        if ( a2 != -1 )
        {
          *(uint32_t *)v4 = a2;
          v4 += 4;
          *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v4);
        }
        v5 = sub_190DFC0(a1, v3, (v4 - v3) >> 2, v18);
        result = -1;
        if ( v5 )
        {
          v15 = *(uint32_t *)(a1 + 60);
          v8 = (*(uint32_t *)(a1 + 44) & 0x10) == 0;
          *(uint32_t *)(a1 + 4) = v15;
          *(uint32_t *)(a1 + 8) = v15;
          *(uint32_t *)(a1 + 12) = v15;
          if ( v8 || (unsigned int)(v16 = *(uint32_t *)(a1 + 64)) <= 1 )
          {
            *(uint32_t *)(a1 + 20) = 0;
            *(uint32_t *)(a1 + 16) = 0;
            *(uint32_t *)(a1 + 24) = 0;
          }
          else
          {
            *(uint32_t *)(a1 + 20) = v15;
            *(uint32_t *)(a1 + 16) = v15;
            *(uint32_t *)(a1 + 24) = v15 + 4 * v16 - 4;
          }
          result = 0;
          if ( a2 != -1 )
            return a2;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_190F4F0  (binary VA: 0x190f4f0)
// Original: sub_190F4F0
// ----------------------------------------------------------------------------
uint32_t * sub_190F4F0(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  bool v4;
  int v5;
  unsigned int v6;

  result = a1;
  v3 = a1[11] & 0x10;
  v4 = (a1[11] & 8) == 0;
  v5 = a1[15];
  a1[1] = v5;
  a1[2] = v5;
  if ( v4 || a2 <= 0 )
  {
    a1[3] = v5;
    if ( v3 == 0 )
      goto LABEL_4;
  }
  else
  {
    a1[3] = v5 + 4 * a2;
    if ( v3 == 0 )
    {
LABEL_4:
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
      return result;
    }
  }
  if ( a2 != 0 )
    goto LABEL_4;
  v6 = a1[16];
  if ( v6 <= 1 )
    goto LABEL_4;
  a1[5] = v5;
  a1[4] = v5;
  a1[6] = v5 + 4 * v6 - 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_190F580  (binary VA: 0x190f580)
// Original: sub_190F580
// ----------------------------------------------------------------------------
int sub_190F580(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = a2[1];
  v3 = *(uint32_t *)(v2 - 12);
  *a1 = v2;
  *(int *)((char *)a1 + v3) = a2[2];
  a1[1] = 0;
  sub_1912230((char *)a1 + *(uint32_t *)(v2 - 12), 0);
  v4 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  sub_190DD80((int)(uintptr_t)(a1 + 2));
  return sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 2);
}

// ----------------------------------------------------------------------------
// Function: sub_190F640  (binary VA: 0x190f640)
// Original: sub_190F640
// ----------------------------------------------------------------------------
int sub_190F640(int a1)
{
  sub_1900810((uint32_t *)(a1 + 116));
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint8_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA06C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA080);
  sub_1912230(a1 + 116, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0AC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA0C0);
  sub_190DD80(a1 + 8);
  return sub_1912230(a1 + 116, a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: sub_190F760  (binary VA: 0x190f760)
// Original: sub_190F760
// ----------------------------------------------------------------------------
int sub_190F760(int *a1, int *a2, char *a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a2[1];
  v5 = *(uint32_t *)(v4 - 12);
  *a1 = v4;
  *(int *)((char *)a1 + v5) = a2[2];
  a1[1] = 0;
  sub_1912230((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190DD80((int)(uintptr_t)(a1 + 2));
  sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 2);
  if ( sub_190E510((int)(uintptr_t)(a1 + 2), a3, a4 | 8) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_190F880  (binary VA: 0x190f880)
// Original: sub_190F880
// ----------------------------------------------------------------------------
int sub_190F880(int a1, char *a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 116));
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA06C);
  *(uint32_t *)(a1 + 232) = 0;
  *(uint8_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA080);
  sub_1912230(a1 + 116, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0AC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA0C0);
  sub_190DD80(a1 + 8);
  sub_1912230(a1 + 116, a1 + 8);
  if ( sub_190E510(a1 + 8, a2, a3 | 8) != 0 )
    return sub_1911E40(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911E40(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_190F9F0  (binary VA: 0x190f9f0)
// Original: sub_190F9F0
// ----------------------------------------------------------------------------
int sub_190F9F0(int *a1, int *a2, char **a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = a2[1];
  v5 = *(uint32_t *)(v4 - 12);
  *a1 = v4;
  *(int *)((char *)a1 + v5) = a2[2];
  a1[1] = 0;
  sub_1912230((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190DD80((int)(uintptr_t)(a1 + 2));
  sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 2);
  if ( sub_190E510((int)(uintptr_t)(a1 + 2), *a3, a4 | 8) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_190FB10  (binary VA: 0x190fb10)
// Original: sub_190FB10
// ----------------------------------------------------------------------------
int sub_190FB10(int a1, char **a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 116));
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA06C);
  *(uint32_t *)(a1 + 232) = 0;
  *(uint8_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA080);
  sub_1912230(a1 + 116, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0AC);
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(&off_20AA0C0);
  sub_190DD80(a1 + 8);
  sub_1912230(a1 + 116, a1 + 8);
  if ( sub_190E510(a1 + 8, *a2, a3 | 8) != 0 )
    return sub_1911E40(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911E40(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_190FC80  (binary VA: 0x190fc80)
// Original: sub_190FC80
// ----------------------------------------------------------------------------
int sub_190FC80(int a1, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1 + 8);
  sub_1908070(a1 + 44);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 36));
  v3 = a2[1];
  *(uint32_t *)a1 = v3;
  result = *(uint32_t *)(v3 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_190FD70  (binary VA: 0x190fd70)
// Original: sub_190FD70
// ----------------------------------------------------------------------------
bool sub_190FD70(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 44));
}

// ----------------------------------------------------------------------------
// Function: sub_190FDA0  (binary VA: 0x190fda0)
// Original: sub_190FDA0
// ----------------------------------------------------------------------------
bool sub_190FDA0(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 44));
}

// ----------------------------------------------------------------------------
// Function: sub_190FDD0  (binary VA: 0x190fdd0)
// Original: sub_190FDD0
// ----------------------------------------------------------------------------
int sub_190FDD0(uint32_t *a1, char *a2, int a3)
{
  if ( sub_190E510((int)(uintptr_t)(a1 + 2), a2, a3 | 8) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_190FE60  (binary VA: 0x190fe60)
// Original: sub_190FE60
// ----------------------------------------------------------------------------
int sub_190FE60(uint32_t *a1, char **a2, int a3)
{
  if ( sub_190E510((int)(uintptr_t)(a1 + 2), *a2, a3 | 8) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_190FEF0  (binary VA: 0x190fef0)
// Original: sub_190FEF0
// ----------------------------------------------------------------------------
int sub_190FEF0(uint32_t *a1)
{
  int result;

  result = sub_190E330((int)(uintptr_t)(a1 + 2));
  if ( result == 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_190FF50  (binary VA: 0x190ff50)
// Original: sub_190FF50
// ----------------------------------------------------------------------------
int sub_190FF50(int *a1, int *a2)
{
  int v2;
  uint32_t *v3;
  int v4;

  v2 = a2[1];
  *a1 = v2;
  v3 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v2 - 12)));
  *v3 = a2[2];
  sub_1912230(v3, 0);
  v4 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  sub_190DD80((int)(uintptr_t)(a1 + 1));
  return sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_1910000  (binary VA: 0x1910000)
// Original: sub_1910000
// ----------------------------------------------------------------------------
int sub_1910000(int a1)
{
  sub_1900810((uint32_t *)(a1 + 112));
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0EC);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA100);
  sub_1912230(a1 + 112, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA12C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA140);
  sub_190DD80(a1 + 4);
  return sub_1912230(a1 + 112, a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910110  (binary VA: 0x1910110)
// Original: sub_1910110
// ----------------------------------------------------------------------------
int sub_1910110(int *a1, int *a2, char *a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;

  v4 = a2[1];
  *a1 = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12)));
  *v5 = a2[2];
  sub_1912230(v5, 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190DD80((int)(uintptr_t)(a1 + 1));
  sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 1);
  if ( sub_190E510((int)(uintptr_t)(a1 + 1), a3, a4 | 0x10) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910220  (binary VA: 0x1910220)
// Original: sub_1910220
// ----------------------------------------------------------------------------
int sub_1910220(int a1, char *a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 112));
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0EC);
  *(uint32_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA100);
  sub_1912230(a1 + 112, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA12C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA140);
  sub_190DD80(a1 + 4);
  sub_1912230(a1 + 112, a1 + 4);
  if ( sub_190E510(a1 + 4, a2, a3 | 0x10) != 0 )
    return sub_1911E40(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911E40(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910380  (binary VA: 0x1910380)
// Original: sub_1910380
// ----------------------------------------------------------------------------
int sub_1910380(int *a1, int *a2, char **a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;

  v4 = a2[1];
  *a1 = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12)));
  *v5 = a2[2];
  sub_1912230(v5, 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  sub_190DD80((int)(uintptr_t)(a1 + 1));
  sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 1);
  if ( sub_190E510((int)(uintptr_t)(a1 + 1), *a3, a4 | 0x10) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910490  (binary VA: 0x1910490)
// Original: sub_1910490
// ----------------------------------------------------------------------------
int sub_1910490(int a1, char **a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 112));
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA0EC);
  *(uint32_t *)(a1 + 228) = 0;
  *(uint8_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA100);
  sub_1912230(a1 + 112, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA12C);
  *(uint32_t *)(a1 + 112) = (uint32_t)(uintptr_t)(&off_20AA140);
  sub_190DD80(a1 + 4);
  sub_1912230(a1 + 112, a1 + 4);
  if ( sub_190E510(a1 + 4, *a2, a3 | 0x10) != 0 )
    return sub_1911E40(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911E40(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_19105F0  (binary VA: 0x19105f0)
// Original: sub_19105F0
// ----------------------------------------------------------------------------
int sub_19105F0(int a1, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1 + 4);
  sub_1908070(a1 + 40);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 32));
  v3 = a2[1];
  *(uint32_t *)a1 = v3;
  result = *(uint32_t *)(v3 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19106D0  (binary VA: 0x19106d0)
// Original: sub_19106D0
// ----------------------------------------------------------------------------
bool sub_19106D0(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 40));
}

// ----------------------------------------------------------------------------
// Function: sub_1910700  (binary VA: 0x1910700)
// Original: sub_1910700
// ----------------------------------------------------------------------------
bool sub_1910700(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 40));
}

// ----------------------------------------------------------------------------
// Function: sub_1910730  (binary VA: 0x1910730)
// Original: sub_1910730
// ----------------------------------------------------------------------------
int sub_1910730(uint32_t *a1, char *a2, int a3)
{
  if ( sub_190E510((int)(uintptr_t)(a1 + 1), a2, a3 | 0x10) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_19107C0  (binary VA: 0x19107c0)
// Original: sub_19107C0
// ----------------------------------------------------------------------------
int sub_19107C0(uint32_t *a1, char **a2, int a3)
{
  if ( sub_190E510((int)(uintptr_t)(a1 + 1), *a2, a3 | 0x10) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910850  (binary VA: 0x1910850)
// Original: sub_1910850
// ----------------------------------------------------------------------------
int sub_1910850(uint32_t *a1)
{
  int result;

  result = sub_190E330((int)(uintptr_t)(a1 + 1));
  if ( result == 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19108B0  (binary VA: 0x19108b0)
// Original: sub_19108B0
// ----------------------------------------------------------------------------
int sub_19108B0(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;

  v2 = a2[2];
  v3 = *(uint32_t *)(v2 - 12);
  *a1 = v2;
  *(int *)((char *)a1 + v3) = a2[3];
  a1[1] = 0;
  sub_1912230((char *)a1 + *(uint32_t *)(v2 - 12), 0);
  v4 = a2[4];
  a1[2] = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8));
  *v5 = a2[5];
  sub_1912230(v5, 0);
  v6 = a2[1];
  *a1 = v6;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[6];
  a1[2] = a2[7];
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_190DD80((int)(uintptr_t)(a1 + 3));
  return sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 3);
}

// ----------------------------------------------------------------------------
// Function: sub_19109D0  (binary VA: 0x19109d0)
// Original: sub_19109D0
// ----------------------------------------------------------------------------
int sub_19109D0(int a1)
{
  sub_1900810((uint32_t *)(a1 + 120));
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint8_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 256) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA1C0);
  sub_1912230(a1 + 120, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA16C);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA180);
  sub_1912230(a1 + 120, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA26C);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA294);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA280);
  sub_190DD80(a1 + 12);
  return sub_1912230(a1 + 120, a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_1910B20  (binary VA: 0x1910b20)
// Original: sub_1910B20
// ----------------------------------------------------------------------------
int sub_1910B20(int *a1, int *a2, char *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;

  v4 = a2[2];
  v5 = *(uint32_t *)(v4 - 12);
  *a1 = v4;
  *(int *)((char *)a1 + v5) = a2[3];
  a1[1] = 0;
  sub_1912230((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v6 = a2[4];
  a1[2] = v6;
  v7 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v6 - 12) + 8));
  *v7 = a2[5];
  sub_1912230(v7, 0);
  v8 = a2[1];
  *a1 = v8;
  *(int *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[6];
  a1[2] = a2[7];
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v9 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_190DD80((int)(uintptr_t)(a1 + 3));
  sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 3);
  if ( sub_190E510((int)(uintptr_t)(a1 + 3), a3, a4) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910C90  (binary VA: 0x1910c90)
// Original: sub_1910C90
// ----------------------------------------------------------------------------
int sub_1910C90(int a1, char *a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 120));
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint8_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 256) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA1C0);
  sub_1912230(a1 + 120, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA16C);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA180);
  sub_1912230(a1 + 120, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA26C);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA294);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA280);
  sub_190DD80(a1 + 12);
  sub_1912230(a1 + 120, a1 + 12);
  if ( sub_190E510(a1 + 12, a2, a3) != 0 )
    return sub_1911E40(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911E40(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910E30  (binary VA: 0x1910e30)
// Original: sub_1910E30
// ----------------------------------------------------------------------------
int sub_1910E30(int *a1, int *a2, char **a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;

  v4 = a2[2];
  *a1 = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  a1[1] = 0;
  sub_1912230((char *)a1 + *(uint32_t *)(v4 - 12), 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v5 - 12) + 8));
  *v6 = a2[5];
  sub_1912230(v6, 0);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_190DD80((int)(uintptr_t)(a1 + 3));
  sub_1912230((char *)a1 + *(uint32_t *)(*a1 - 12), a1 + 3);
  if ( sub_190E510((int)(uintptr_t)(a1 + 3), *a3, a4) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1910F90  (binary VA: 0x1910f90)
// Original: sub_1910F90
// ----------------------------------------------------------------------------
int sub_1910F90(int a1, char **a2, int a3)
{
  sub_1900810((uint32_t *)(a1 + 120));
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint8_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 256) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA1C0);
  sub_1912230(a1 + 120, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA16C);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA180);
  sub_1912230(a1 + 120, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA26C);
  *(uint32_t *)(a1 + 120) = (uint32_t)(uintptr_t)(&off_20AA294);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA280);
  sub_190DD80(a1 + 12);
  sub_1912230(a1 + 120, a1 + 12);
  if ( sub_190E510(a1 + 12, *a2, a3) != 0 )
    return sub_1911E40(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12), 0);
  else
    return sub_1911E40(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1911130  (binary VA: 0x1911130)
// Original: sub_1911130
// ----------------------------------------------------------------------------
int sub_1911130(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[8];
  *(uint32_t *)(a1 + 8) = a2[9];
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA028);
  sub_190E330(a1 + 12);
  sub_1908070(a1 + 48);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 40));
  v3 = a2[1];
  *(uint32_t *)a1 = v3;
  *(uint32_t *)(a1 + *(uint32_t *)(v3 - 12)) = a2[6];
  *(uint32_t *)(a1 + 8) = a2[7];
  v4 = a2[4];
  *(uint32_t *)(a1 + 8) = v4;
  *(uint32_t *)(a1 + *(uint32_t *)(v4 - 12) + 8) = a2[5];
  v5 = a2[2];
  *(uint32_t *)a1 = v5;
  result = *(uint32_t *)(v5 - 12);
  *(uint32_t *)(a1 + result) = a2[3];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911240  (binary VA: 0x1911240)
// Original: sub_1911240
// ----------------------------------------------------------------------------
bool sub_1911240(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 48));
}

// ----------------------------------------------------------------------------
// Function: sub_1911270  (binary VA: 0x1911270)
// Original: sub_1911270
// ----------------------------------------------------------------------------
bool sub_1911270(int a1)
{
  return sub_1907FD0((uint32_t *)(a1 + 48));
}

// ----------------------------------------------------------------------------
// Function: sub_19112A0  (binary VA: 0x19112a0)
// Original: sub_19112A0
// ----------------------------------------------------------------------------
int sub_19112A0(uint32_t *a1, char *a2, int a3)
{
  if ( sub_190E510((int)(uintptr_t)(a1 + 3), a2, a3) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1911330  (binary VA: 0x1911330)
// Original: sub_1911330
// ----------------------------------------------------------------------------
int sub_1911330(uint32_t *a1, char **a2, int a3)
{
  if ( sub_190E510((int)(uintptr_t)(a1 + 3), *a2, a3) != 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), 0);
  else
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
}

// ----------------------------------------------------------------------------
// Function: sub_19113C0  (binary VA: 0x19113c0)
// Original: sub_19113C0
// ----------------------------------------------------------------------------
int sub_19113C0(uint32_t *a1)
{
  int result;

  result = sub_190E330((int)(uintptr_t)(a1 + 3));
  if ( result == 0 )
    return sub_1911E40((char *)a1 + *(uint32_t *)(*a1 - 12), *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911420  (binary VA: 0x1911420)
// Original: sub_1911420
// ----------------------------------------------------------------------------
int sub_1911420(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1911450  (binary VA: 0x1911450)
// Original: sub_1911450
// ----------------------------------------------------------------------------
int sub_1911450(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1911480  (binary VA: 0x1911480)
// Original: sub_1911480
// ----------------------------------------------------------------------------
void sub_1911480(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19114C0  (binary VA: 0x19114c0)
// Original: sub_19114C0
// ----------------------------------------------------------------------------
void sub_19114C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1911530  (binary VA: 0x1911530)
// Original: sub_1911530
// ----------------------------------------------------------------------------
int sub_1911530(int64_t a1)
{
  int64_t v1; // rax
  bool v2;

  v1 = a1;
  if ( *(uint32_t *)(a1 + 120) == 0 )
    HIDWORD(v1) = HIDWORD(a1) | 1;
  v2 = (HIDWORD(v1) & *(uint32_t *)(a1 + 16)) == 0;
  *(uint32_t *)(a1 + 20) = HIDWORD(v1);
  if ( !v2 )
    sub_19004E0("basic_ios::clear");
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1911580  (binary VA: 0x1911580)
// Original: sub_1911580
// ----------------------------------------------------------------------------
int sub_1911580(int64_t a1)
{
  HIDWORD(a1) |= *(uint32_t *)(a1 + 20);
  return sub_1911530(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19115A0  (binary VA: 0x19115a0)
// Original: sub_19115A0
// ----------------------------------------------------------------------------
int sub_19115A0(int a1, int a2)
{
  int result;

  result = a1;
  *(uint32_t *)(a1 + 20) |= a2;
  if ( (a2 & *(uint32_t *)(a1 + 16)) != 0 )
    _cxa_rethrow();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911670  (binary VA: 0x1911670)
// Original: sub_1911670
// ----------------------------------------------------------------------------
int sub_1911670(unsigned int a1, int a2)
{
  int v2;

  v2 = *(uint32_t *)(a1 + 120);
  *(uint32_t *)(a1 + 120) = a2;
  sub_1911530(a1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19116A0  (binary VA: 0x19116a0)
// Original: sub_19116A0
// ----------------------------------------------------------------------------
int sub_19116A0(int a1)
{
  int result;
  uint8_t *v2;

  if ( *(uint8_t *)(a1 + 117) != 0 )
    return *(uint8_t *)(a1 + 116);
  v2 = *(uint8_t **)(a1 + 124);
  if ( v2 == nullptr )
    sub_18FFF30();
  if ( v2[28] != 0 )
  {
    result = (uint8_t)v2[61];
  }
  else
  {
    sub_18FFC70(*(uint8_t **)(a1 + 124));
    result = G4_VCALL<int>(v2, 24, 32);
  }
  *(uint8_t *)(a1 + 116) = result;
  *(uint8_t *)(a1 + 117) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911720  (binary VA: 0x1911720)
// Original: sub_1911720
// ----------------------------------------------------------------------------
int sub_1911720(int a1, char a2)
{
  char v2;
  int result;
  uint8_t *v4;

  v2 = a2;
  if ( *(uint8_t *)(a1 + 117) != 0 )
  {
    result = *(uint8_t *)(a1 + 116);
  }
  else
  {
    v4 = *(uint8_t **)(a1 + 124);
    if ( v4 == nullptr )
      sub_18FFF30();
    if ( v4[28] != 0 )
    {
      result = (uint8_t)v4[61];
    }
    else
    {
      sub_18FFC70(v4);
      result = G4_VCALL<int>(v4, 24, 32);
      v2 = a2;
    }
    *(uint8_t *)(a1 + 116) = result;
    *(uint8_t *)(a1 + 117) = 1;
  }
  *(uint8_t *)(a1 + 116) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19117B0  (binary VA: 0x19117b0)
// Original: sub_19117B0
// ----------------------------------------------------------------------------
int sub_19117B0(int a1, uint8_t a2, char a3)
{
  int v3;
  int result;

  v3 = *(uint32_t *)(a1 + 124);
  if ( v3 == 0 )
    sub_18FFF30();
  result = *(uint8_t *)(v3 + a2 + 285);
  if ( (uint8_t)result == 0 )
  {
    result = G4_VCALL<int>(v3, 32, (char)a2, a3);
    if ( a3 != (uint8_t)result )
      *(uint8_t *)(v3 + a2 + 285) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911840  (binary VA: 0x1911840)
// Original: sub_1911840
// ----------------------------------------------------------------------------
int sub_1911840(int a1, uint8_t a2)
{
  uint8_t *v2;

  v2 = *(uint8_t **)(a1 + 124);
  if ( v2 == nullptr )
    sub_18FFF30();
  if ( v2[28] != 0 )
    return (uint8_t)v2[a2 + 29];
  sub_18FFC70(*(uint8_t **)(a1 + 124));
  return G4_VCALL<int>(v2, 24, (char)a2);
}



// ============================================================================
// Address:   0x19118c0 (size: 105 bytes)
// Symbol:    sub_19118C0
// Demangled: sub_19118C0
// ============================================================================
int (**sub_19118C0(int a1))(int)
{
  sub_1900810((uint32_t *)a1);
  *(uint8_t *)(a1 + 116) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(uint32_t *)(a1 + 112) = 0;
  *(uint8_t *)(a1 + 117) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  return (int (**)(int))(uintptr_t)(&off_20AA2C0);
}
// ----------------------------------------------------------------------------
// Function: sub_1911930  (binary VA: 0x1911930)
// Original: sub_1911930
// ----------------------------------------------------------------------------
int sub_1911930(uint32_t *a1, int a2)
{
  int result;

  if ( (uint8_t)sub_191EA80(a2) != 0 )
    a1[31] = (uint32_t)(uintptr_t)(sub_191CFA0(a2));
  else
    a1[31] = 0;
  if ( (uint8_t)sub_191EC80(a2) != 0 )
    a1[32] = (uint32_t)(uintptr_t)(sub_191D890(a2));
  else
    a1[32] = 0;
  result = sub_191ED00(a2);
  if ( (uint8_t)result != 0 )
  {
    result = (int)(uintptr_t)(sub_191D900(a2));
    a1[33] = result;
  }
  else
  {
    a1[33] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19119D0  (binary VA: 0x19119d0)
// Original: sub_19119D0
// ----------------------------------------------------------------------------
bool sub_19119D0(int a1, int a2)
{
  bool result;

  sub_1953CF0(a1);
  sub_1911930((uint32_t *)a1, a1 + 108);
  result = a2 == 0;
  *(uint8_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = a2;
  *(uint8_t *)(a1 + 117) = 0;
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911A40  (binary VA: 0x1911a40)
// Original: sub_1911A40
// ----------------------------------------------------------------------------
bool sub_1911A40(int a1, int a2)
{
  sub_1900810((uint32_t *)a1);
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(uint8_t *)(a1 + 116) = 0;
  *(uint8_t *)(a1 + 117) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  return sub_19119D0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1911AE0  (binary VA: 0x1911ae0)
// Original: sub_1911AE0
// ----------------------------------------------------------------------------
volatile int32_t ** sub_1911AE0(volatile int32_t **a1, int a2, volatile int32_t **a3)
{
  int v3;
  volatile int32_t **v4;
  typedef int _g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  typedef volatile int32_t *_g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  sub_1901AC0(a1, (volatile int32_t **)(a2 + 108));
  sub_1953D60(&v7);
  sub_1902180(&v7);
  sub_1911930((uint32_t *)a2, (int)(uintptr_t)(a3));
  v3 = *(uint32_t *)(a2 + 120);
  if ( v3 != 0 )
  {
    v4 = (volatile int32_t **)(v3 + 28);
    v6 = *(uint32_t *)(a2 + 120);
    sub_1901AC0(v8, (volatile int32_t **)(v3 + 28));
    G4_VCALL<void>(v6, 8, a3, a3);
    sub_19021E0(v4, a3);
    sub_1902180(v8);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1911BD0  (binary VA: 0x1911bd0)
// Original: sub_1911BD0
// ----------------------------------------------------------------------------
int sub_1911BD0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  bool v12;
  char v13;
  uint8_t *v15;
  uint8_t *v16;
  char v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  typedef int64_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef volatile int32_t *_g4_t_v26[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v25)) > _g4_s3 ? (28u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v26)) > _g4_s4 ? (44u + sizeof(_g4_t_v26)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = *(uint32_t *)(a2 + 100);
    if ( v3 > 8 )
    {
      v18 = opNewArray(8 * v3);
      v19 = *(uint32_t *)(a2 + 100);
      v5 = (uint32_t *)v18;
      v4 = a1 + 36;
      if ( v19 != 0 )
      {
        v20 = v5;
        v21 = 0;
        do
        {
          ++v21;
          *v20 = 0;
          v20[1] = 0;
          v20 += 2;
        }
        while ( v19 != v21 );
        v4 = a1 + 36;
      }
    }
    else
    {
      v4 = a1 + 36;
      v5 = (uint32_t *)(a1 + 36);
    }
    v6 = *(uint32_t *)(a2 + 24);
    v25 = v6;
    if ( v6 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v6 + 12), 1u);
    v23 = v4;
    sub_1900AD0(a1, 0);
    v7 = *(uint32_t *)(a1 + 104);
    if ( v7 != v23 )
    {
      if ( v7 != 0 )
        opDeleteArray(*(void **)(a1 + 104));
      *(uint32_t *)(a1 + 104) = 0;
    }
    sub_1900B40(a1);
    *(uint32_t *)(a1 + 24) = v25;
    v8 = *(uint32_t *)(a2 + 100);
    if ( v8 > 0 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = *(uint32_t *)(a2 + 104);
        v11 = *(uint32_t *)(v10 + 8 * i);
        v5[2 * i + 1] = *(uint32_t *)(v10 + 8 * i + 4);
        v5[2 * i] = v11;
      }
      v2 = a1;
    }
    *(uint32_t *)(v2 + 104) = (uint32_t)(uintptr_t)(v5);
    *(uint32_t *)(v2 + 100) = v8;
    v12 = *(uint8_t *)(a2 + 117) == 0;
    *(uint32_t *)(v2 + 12) = *(uint32_t *)(a2 + 12);
    *(uint32_t *)(v2 + 8) = *(uint32_t *)(a2 + 8);
    *(uint32_t *)(v2 + 4) = *(uint32_t *)(a2 + 4);
    *(uint32_t *)(v2 + 112) = *(uint32_t *)(a2 + 112);
    if ( v12 )
    {
      v15 = *(uint8_t **)(a2 + 124);
      if ( v15 == nullptr )
        goto LABEL_32;
      if ( v15[28] != 0 )
      {
        v13 = v15[61];
      }
      else
      {
        sub_18FFC70(*(uint8_t **)(a2 + 124));
        v13 = G4_VCALL<int>(v15, 24, 32);
      }
      *(uint8_t *)(a2 + 117) = 1;
      v12 = *(uint8_t *)(v2 + 117) == 0;
      *(uint8_t *)(a2 + 116) = v13;
      if ( !v12 )
        goto LABEL_16;
    }
    else
    {
      v13 = *(uint8_t *)(a2 + 116);
      if ( *(uint8_t *)(v2 + 117) != 0 )
      {
LABEL_16:
        *(uint8_t *)(v2 + 116) = v13;
        sub_1901AC0(v26, (volatile int32_t **)(a2 + 108));
        sub_19021E0((volatile int32_t **)(v2 + 108), v26);
        sub_1902180(v26);
        sub_1911930((uint32_t *)v2, v2 + 108);
        sub_1900AD0(v2, 2);
        *(uint32_t *)(v2 + 16) = *(uint32_t *)(a2 + 16);
        HIDWORD(v22) = *(uint32_t *)(v2 + 20);
        LODWORD(v22) = v2;
        sub_1911530(v22);
        return v2;
      }
    }
    v16 = *(uint8_t **)(v2 + 124);
    if ( v16 != nullptr )
    {
      if ( v16[28] != 0 )
      {
        v17 = v16[61];
      }
      else
      {
        v24 = v13;
        sub_18FFC70(v16);
        v17 = G4_VCALL<int>(v16, 24, 32);
        v13 = v24;
      }
      *(uint8_t *)(v2 + 116) = v17;
      *(uint8_t *)(v2 + 117) = 1;
      goto LABEL_16;
    }
LABEL_32:
    sub_18FFF30();
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1911E40  (binary VA: 0x1911e40)
// Original: sub_1911E40
// ----------------------------------------------------------------------------
int sub_1911E40(int64_t a1)
{
  int64_t v1; // rax
  bool v2;

  v1 = a1;
  if ( *(uint32_t *)(a1 + 124) == 0 )
    HIDWORD(v1) = HIDWORD(a1) | 1;
  v2 = (HIDWORD(v1) & *(uint32_t *)(a1 + 16)) == 0;
  *(uint32_t *)(a1 + 20) = HIDWORD(v1);
  if ( !v2 )
    sub_19004E0("basic_ios::clear");
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1911E90  (binary VA: 0x1911e90)
// Original: sub_1911E90
// ----------------------------------------------------------------------------
int sub_1911E90(int64_t a1)
{
  HIDWORD(a1) |= *(uint32_t *)(a1 + 20);
  return sub_1911E40(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1911EB0  (binary VA: 0x1911eb0)
// Original: sub_1911EB0
// ----------------------------------------------------------------------------
int sub_1911EB0(int a1, int a2)
{
  int result;

  result = a1;
  *(uint32_t *)(a1 + 20) |= a2;
  if ( (a2 & *(uint32_t *)(a1 + 16)) != 0 )
    _cxa_rethrow();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1911F80  (binary VA: 0x1911f80)
// Original: sub_1911F80
// ----------------------------------------------------------------------------
int sub_1911F80(unsigned int a1, int a2)
{
  int v2;

  v2 = *(uint32_t *)(a1 + 124);
  *(uint32_t *)(a1 + 124) = a2;
  sub_1911E40(a1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1911FB0  (binary VA: 0x1911fb0)
// Original: sub_1911FB0
// ----------------------------------------------------------------------------
int sub_1911FB0(int a1)
{
  int result;
  int v2;

  if ( *(uint8_t *)(a1 + 120) != 0 )
    return *(uint32_t *)(a1 + 116);
  v2 = *(uint32_t *)(a1 + 128);
  if ( v2 == 0 )
    sub_18FFF30();
  result = G4_VCALL<int>(v2, 40, 32);
  *(uint32_t *)(a1 + 116) = result;
  *(uint8_t *)(a1 + 120) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1912020  (binary VA: 0x1912020)
// Original: sub_1912020
// ----------------------------------------------------------------------------
int sub_1912020(int a1, int a2)
{
  int result;
  int v3;

  if ( *(uint8_t *)(a1 + 120) != 0 )
  {
    result = *(uint32_t *)(a1 + 116);
  }
  else
  {
    v3 = *(uint32_t *)(a1 + 128);
    if ( v3 == 0 )
      sub_18FFF30();
    result = G4_VCALL<int>(v3, 40, 32);
    *(uint32_t *)(a1 + 116) = result;
    *(uint8_t *)(a1 + 120) = 1;
  }
  *(uint32_t *)(a1 + 116) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1912080  (binary VA: 0x1912080)
// Original: sub_1912080
// ----------------------------------------------------------------------------
int sub_1912080(int a1, int a2, char a3)
{
  int v3;

  v3 = *(uint32_t *)(a1 + 128);
  if ( v3 == 0 )
    sub_18FFF30();
  return G4_VCALL<int>(v3, 48, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19120D0  (binary VA: 0x19120d0)
// Original: sub_19120D0
// ----------------------------------------------------------------------------
int sub_19120D0(int a1, char a2)
{
  int v2;

  v2 = *(uint32_t *)(a1 + 128);
  if ( v2 == 0 )
    sub_18FFF30();
  return (*(int (**)(uint32_t, uint32_t))(*(uint32_t *)v2 + 40))(*(uint32_t *)(a1 + 128), a2);
}



// ============================================================================
// Address:   0x1912110 (size: 111 bytes)
// Symbol:    sub_1912110
// Demangled: sub_1912110
// ============================================================================
int (**sub_1912110(int a1))(int)
{
  sub_1900810((uint32_t *)a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA2D0);
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint8_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  return (int (**)(int))(uintptr_t)(&off_20AA2D0);
}
// ----------------------------------------------------------------------------
// Function: sub_1912180  (binary VA: 0x1912180)
// Original: sub_1912180
// ----------------------------------------------------------------------------
int sub_1912180(uint32_t *a1, int a2)
{
  int result;

  if ( (uint8_t)sub_1940420(a2) != 0 )
    a1[32] = (uint32_t)(uintptr_t)(sub_193EB50(a2));
  else
    a1[32] = 0;
  if ( (uint8_t)sub_1940620(a2) != 0 )
    a1[33] = (uint32_t)(uintptr_t)(sub_193F300(a2));
  else
    a1[33] = 0;
  result = sub_19406A0(a2);
  if ( (uint8_t)result != 0 )
  {
    result = (int)(uintptr_t)(sub_193F370(a2));
    a1[34] = result;
  }
  else
  {
    a1[34] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1912230  (binary VA: 0x1912230)
// Original: sub_1912230
// ----------------------------------------------------------------------------
bool sub_1912230(int a1, int a2)
{
  bool result;

  sub_1953CF0(a1);
  sub_1912180((uint32_t *)a1, a1 + 108);
  result = a2 == 0;
  *(uint32_t *)(a1 + 124) = a2;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint8_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19122B0  (binary VA: 0x19122b0)
// Original: sub_19122B0
// ----------------------------------------------------------------------------
bool sub_19122B0(int a1, int a2)
{
  sub_1900810((uint32_t *)a1);
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA2D0);
  *(uint32_t *)(a1 + 116) = 0;
  *(uint8_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  return sub_1912230(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1912350  (binary VA: 0x1912350)
// Original: sub_1912350
// ----------------------------------------------------------------------------
volatile int32_t ** sub_1912350(volatile int32_t **a1, int a2, volatile int32_t **a3)
{
  int v3;
  volatile int32_t **v4;
  typedef int _g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  typedef volatile int32_t *_g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  sub_1901AC0(a1, (volatile int32_t **)(a2 + 108));
  sub_1953D60(&v7);
  sub_1902180(&v7);
  sub_1912180((uint32_t *)a2, (int)(uintptr_t)(a3));
  v3 = *(uint32_t *)(a2 + 124);
  if ( v3 != 0 )
  {
    v4 = (volatile int32_t **)(v3 + 28);
    v6 = *(uint32_t *)(a2 + 124);
    sub_1901AC0(v8, (volatile int32_t **)(v3 + 28));
    G4_VCALL<void>(v6, 8, a3, a3);
    sub_19021E0(v4, a3);
    sub_1902180(v8);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1912440  (binary VA: 0x1912440)
// Original: sub_1912440
// ----------------------------------------------------------------------------
int sub_1912440(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  bool v12;
  int v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  typedef int64_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef volatile int32_t *_g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v24)) > _g4_s2 ? (28u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v25)) > _g4_s3 ? (44u + sizeof(_g4_t_v25)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = *(uint32_t *)(a2 + 100);
    if ( v3 > 8 )
    {
      v18 = opNewArray(8 * v3);
      v19 = *(uint32_t *)(a2 + 100);
      v5 = (uint32_t *)v18;
      v4 = a1 + 36;
      if ( v19 != 0 )
      {
        v20 = v5;
        v21 = 0;
        do
        {
          ++v21;
          *v20 = 0;
          v20[1] = 0;
          v20 += 2;
        }
        while ( v19 != v21 );
        v4 = a1 + 36;
      }
    }
    else
    {
      v4 = a1 + 36;
      v5 = (uint32_t *)(a1 + 36);
    }
    v6 = *(uint32_t *)(a2 + 24);
    v24 = v6;
    if ( v6 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v6 + 12), 1u);
    v23 = v4;
    sub_1900AD0(a1, 0);
    v7 = *(uint32_t *)(a1 + 104);
    if ( v7 != v23 )
    {
      if ( v7 != 0 )
        opDeleteArray(*(void **)(a1 + 104));
      *(uint32_t *)(a1 + 104) = 0;
    }
    sub_1900B40(a1);
    *(uint32_t *)(a1 + 24) = v24;
    v8 = *(uint32_t *)(a2 + 100);
    if ( v8 > 0 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = *(uint32_t *)(a2 + 104);
        v11 = *(uint32_t *)(v10 + 8 * i);
        v5[2 * i + 1] = *(uint32_t *)(v10 + 8 * i + 4);
        v5[2 * i] = v11;
      }
      v2 = a1;
    }
    *(uint32_t *)(v2 + 104) = (uint32_t)(uintptr_t)(v5);
    *(uint32_t *)(v2 + 100) = v8;
    v12 = *(uint8_t *)(a2 + 120) == 0;
    *(uint32_t *)(v2 + 12) = *(uint32_t *)(a2 + 12);
    *(uint32_t *)(v2 + 8) = *(uint32_t *)(a2 + 8);
    *(uint32_t *)(v2 + 4) = *(uint32_t *)(a2 + 4);
    *(uint32_t *)(v2 + 112) = *(uint32_t *)(a2 + 112);
    if ( v12 )
    {
      v15 = *(uint32_t *)(a2 + 128);
      if ( v15 == 0 )
        goto LABEL_26;
      v16 = G4_VCALL<int>(v15, 40, 32);
      *(uint8_t *)(a2 + 120) = 1;
      v12 = *(uint8_t *)(v2 + 120) == 0;
      v13 = v16;
      *(uint32_t *)(a2 + 116) = v16;
      if ( !v12 )
        goto LABEL_16;
    }
    else
    {
      v13 = *(uint32_t *)(a2 + 116);
      if ( *(uint8_t *)(v2 + 120) != 0 )
      {
LABEL_16:
        *(uint32_t *)(v2 + 116) = v13;
        sub_1901AC0(v25, (volatile int32_t **)(a2 + 108));
        sub_19021E0((volatile int32_t **)(v2 + 108), v25);
        sub_1902180(v25);
        sub_1912180((uint32_t *)v2, v2 + 108);
        sub_1900AD0(v2, 2);
        *(uint32_t *)(v2 + 16) = *(uint32_t *)(a2 + 16);
        HIDWORD(v22) = *(uint32_t *)(v2 + 20);
        LODWORD(v22) = v2;
        sub_1911E40(v22);
        return v2;
      }
    }
    v17 = *(uint32_t *)(v2 + 128);
    if ( v17 != 0 )
    {
      *(uint32_t *)(v2 + 116) = G4_VCALL<int>(v17, 40, 32);
      *(uint8_t *)(v2 + 120) = 1;
      goto LABEL_16;
    }
LABEL_26:
    sub_18FFF30();
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1912640  (binary VA: 0x1912640)
// Original: sub_1912640
// ----------------------------------------------------------------------------
int sub_1912640(uint32_t *a1)
{
  return sub_1912660((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1912650  (binary VA: 0x1912650)
// Original: sub_1912650
// ----------------------------------------------------------------------------
int sub_1912650(int a1)
{
  return sub_1912660(a1 - 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1912660  (binary VA: 0x1912660)
// Original: sub_1912660
// ----------------------------------------------------------------------------
int sub_1912660(uint32_t *a1)
{
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA32C);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA36C);
  a1[1] = 0;
  a1[3] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(a1 + 3);
}

// ----------------------------------------------------------------------------
// Function: sub_19126B0  (binary VA: 0x19126b0)
// Original: sub_19126B0
// ----------------------------------------------------------------------------
int sub_19126B0(uint32_t *a1)
{
  return sub_19126D0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19126C0  (binary VA: 0x19126c0)
// Original: sub_19126C0
// ----------------------------------------------------------------------------
int sub_19126C0(int a1)
{
  return sub_19126D0(a1 - 8);
}

// ----------------------------------------------------------------------------
// Function: sub_19126D0  (binary VA: 0x19126d0)
// Original: sub_19126D0
// ----------------------------------------------------------------------------
int sub_19126D0(uint32_t *a1)
{
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA40C);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA44C);
  a1[1] = 0;
  a1[3] = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90(a1 + 3);
}

// ----------------------------------------------------------------------------
// Function: sub_1912720  (binary VA: 0x1912720)
// Original: sub_1912720
// ----------------------------------------------------------------------------
int sub_1912720(char *a1)
{
  return ((sub_1912740(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1912730  (binary VA: 0x1912730)
// Original: sub_1912730
// ----------------------------------------------------------------------------
int sub_1912730(int a1)
{
  return ((sub_1912740((void *)(a1 - 8))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1912740  (binary VA: 0x1912740)
// Original: sub_1912740
// ----------------------------------------------------------------------------
void sub_1912740(uint32_t *a1)
{
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA40C);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA44C);
  a1[1] = 0;
  a1[3] = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90(a1 + 3);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19127A0  (binary VA: 0x19127a0)
// Original: sub_19127A0
// ----------------------------------------------------------------------------
int sub_19127A0(char *a1)
{
  return ((sub_19127C0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19127B0  (binary VA: 0x19127b0)
// Original: sub_19127B0
// ----------------------------------------------------------------------------
int sub_19127B0(int a1)
{
  return ((sub_19127C0((void *)(a1 - 8))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19127C0  (binary VA: 0x19127c0)
// Original: sub_19127C0
// ----------------------------------------------------------------------------
void sub_19127C0(uint32_t *a1)
{
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA32C);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA36C);
  a1[1] = 0;
  a1[3] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(a1 + 3);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1912830  (binary VA: 0x1912830)
// Original: sub_1912830
// ----------------------------------------------------------------------------
int sub_1912830(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int result;

  v3 = a2[1];
  v4 = *(uint32_t *)(v3 - 12);
  *a1 = v3;
  *(int *)((char *)a1 + v4) = a2[2];
  a1[1] = 0;
  sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), a3);
  v5 = a2[3];
  a1[2] = v5;
  v6 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v5 - 12) + 8));
  *v6 = a2[4];
  sub_19119D0((int)(uintptr_t)(v6), a3);
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}



// ============================================================================
// Address:   0x19128f0 (size: 253 bytes)
// Symbol:    sub_19128F0
// Demangled: sub_19128F0
// ============================================================================
int (**sub_19128F0(int a1, int a2))(int)
{
  sub_1900810((uint32_t *)(a1 + 12));
  *(uint32_t *)(a1 + 124) = 0;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA36C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA380);
  sub_19119D0(a1 + 12, a2);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA32C);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA340);
  sub_19119D0(a1 + 12, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA3CC);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA3F4);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA3E0);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA3E0));
}
// ----------------------------------------------------------------------------
// Function: sub_19129F0  (binary VA: 0x19129f0)
// Original: sub_19129F0
// ----------------------------------------------------------------------------
int * sub_19129F0(int *a1, int *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[5];
  a1[2] = a2[6];
  v4 = a2[3];
  a1[2] = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8) = a2[4];
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[2];
  a1[1] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1912A40  (binary VA: 0x1912a40)
// Original: sub_1912A40
// ----------------------------------------------------------------------------
int sub_1912A40(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int result;

  v2 = a2[1];
  v3 = *(uint32_t *)(v2 - 12);
  *a1 = v2;
  *(int *)((char *)a1 + v3) = a2[2];
  a1[1] = 0;
  sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v2 - 12), 0);
  v4 = a2[3];
  a1[2] = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8));
  *v5 = a2[4];
  sub_19119D0((int)(uintptr_t)(v5), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}



// ============================================================================
// Address:   0x1912af0 (size: 253 bytes)
// Symbol:    sub_1912AF0
// Demangled: sub_1912AF0
// ============================================================================
int (**sub_1912AF0(int a1))(int)
{
  sub_1900810((uint32_t *)(a1 + 12));
  *(uint32_t *)(a1 + 124) = 0;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 129) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA36C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA380);
  sub_19119D0(a1 + 12, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA32C);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA340);
  sub_19119D0(a1 + 12, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA3CC);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA3F4);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA3E0);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA3E0));
}
// ----------------------------------------------------------------------------
// Function: sub_1912C00  (binary VA: 0x1912c00)
// Original: sub_1912C00
// ----------------------------------------------------------------------------
int sub_1912C00(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int result;

  v3 = a2[1];
  v4 = *(uint32_t *)(v3 - 12);
  *a1 = v3;
  *(int *)((char *)a1 + v4) = a2[2];
  a1[1] = 0;
  sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), a3);
  v5 = a2[3];
  a1[2] = v5;
  v6 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v5 - 12) + 8));
  *v6 = a2[4];
  sub_1912230((int)(uintptr_t)(v6), a3);
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}



// ============================================================================
// Address:   0x1912cc0 (size: 256 bytes)
// Symbol:    sub_1912CC0
// Demangled: sub_1912CC0
// ============================================================================
int (**sub_1912CC0(int a1, int a2))(int)
{
  sub_1900810((uint32_t *)(a1 + 12));
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA44C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA460);
  sub_1912230(a1 + 12, a2);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA40C);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA420);
  sub_1912230(a1 + 12, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA4AC);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA4D4);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA4C0);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA4C0));
}
// ----------------------------------------------------------------------------
// Function: sub_1912DC0  (binary VA: 0x1912dc0)
// Original: sub_1912DC0
// ----------------------------------------------------------------------------
int * sub_1912DC0(int *a1, int *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[5];
  a1[2] = a2[6];
  v4 = a2[3];
  a1[2] = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8) = a2[4];
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[2];
  a1[1] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1912E10  (binary VA: 0x1912e10)
// Original: sub_1912E10
// ----------------------------------------------------------------------------
int sub_1912E10(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int result;

  v2 = a2[1];
  v3 = *(uint32_t *)(v2 - 12);
  *a1 = v2;
  *(int *)((char *)a1 + v3) = a2[2];
  a1[1] = 0;
  sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v2 - 12), 0);
  v4 = a2[3];
  a1[2] = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8));
  *v5 = a2[4];
  sub_1912230((int)(uintptr_t)(v5), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[5];
  result = a2[6];
  a1[2] = result;
  return result;
}



// ============================================================================
// Address:   0x1912ec0 (size: 256 bytes)
// Symbol:    sub_1912EC0
// Demangled: sub_1912EC0
// ============================================================================
int (**sub_1912EC0(int a1))(int)
{
  sub_1900810((uint32_t *)(a1 + 12));
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint8_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA44C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA460);
  sub_1912230(a1 + 12, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA40C);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA420);
  sub_1912230(a1 + 12, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA4AC);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA4D4);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AA4C0);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA4C0));
}
// ----------------------------------------------------------------------------
// Function: sub_1912FC0  (binary VA: 0x1912fc0)
// Original: sub_1912FC0
// ----------------------------------------------------------------------------
int sub_1912FC0(uint32_t *a1)
{
  return sub_1912FD0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1912FD0  (binary VA: 0x1912fd0)
// Original: sub_1912FD0
// ----------------------------------------------------------------------------
int sub_1912FD0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA52C);
  a1[1] = 0;
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(a1 + 2);
}

// ----------------------------------------------------------------------------
// Function: sub_1913010  (binary VA: 0x1913010)
// Original: sub_1913010
// ----------------------------------------------------------------------------
int sub_1913010(char *a1)
{
  return ((sub_1913020(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1913020  (binary VA: 0x1913020)
// Original: sub_1913020
// ----------------------------------------------------------------------------
void sub_1913020(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA52C);
  a1[1] = 0;
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(a1 + 2);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1913080  (binary VA: 0x1913080)
// Original: sub_1913080
// ----------------------------------------------------------------------------
int sub_1913080(uint32_t *a1)
{
  return sub_1913090((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1913090  (binary VA: 0x1913090)
// Original: sub_1913090
// ----------------------------------------------------------------------------
int sub_1913090(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA56C);
  a1[1] = 0;
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90(a1 + 2);
}

// ----------------------------------------------------------------------------
// Function: sub_19130D0  (binary VA: 0x19130d0)
// Original: sub_19130D0
// ----------------------------------------------------------------------------
int sub_19130D0(char *a1)
{
  return ((sub_19130E0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19130E0  (binary VA: 0x19130e0)
// Original: sub_19130E0
// ----------------------------------------------------------------------------
void sub_19130E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA56C);
  a1[1] = 0;
  a1[2] = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90(a1 + 2);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1913140  (binary VA: 0x1913140)
// Original: sub_1913140
// ----------------------------------------------------------------------------
bool sub_1913140(int *a1, int *a2, int a3)
{
  int v3;

  v3 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[1];
  a1[1] = 0;
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19131A0  (binary VA: 0x19131a0)
// Original: sub_19131A0
// ----------------------------------------------------------------------------
bool sub_19131A0(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA52C);
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA540);
  *(uint8_t *)(a1 + 124) = 0;
  *(uint8_t *)(a1 + 125) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  return sub_19119D0(a1 + 8, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1913270  (binary VA: 0x1913270)
// Original: sub_1913270
// ----------------------------------------------------------------------------
int sub_1913270(int a1, int (*a2)(int))
{
  return a2(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1913290  (binary VA: 0x1913290)
// Original: sub_1913290
// ----------------------------------------------------------------------------
char * sub_1913290(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19132B0  (binary VA: 0x19132b0)
// Original: sub_19132B0
// ----------------------------------------------------------------------------
char * sub_19132B0(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19132E0  (binary VA: 0x19132e0)
// Original: sub_19132E0
// ----------------------------------------------------------------------------
uint32_t * sub_19132E0(uint32_t *a1, char *dest, int a3)
{
  int v3;
  uint8_t *v4;
  uint8_t v5;

  v3 = *(uint32_t *)(*a1 - 12);
  v4 = *(uint8_t **)((char *)a1 + v3 + 124);
  if ( v4 == nullptr )
    sub_18FFF30();
  if ( v4[28] != 0 )
  {
    v5 = v4[39];
  }
  else
  {
    sub_18FFC70(*(uint8_t **)((char *)a1 + v3 + 124));
    v5 = G4_VCALL<int>(v4, 24, 10);
  }
  return (uint32_t *)(uintptr_t)(sub_1904E10(a1, dest, a3, v5));
}

// ----------------------------------------------------------------------------
// Function: sub_1913370  (binary VA: 0x1913370)
// Original: sub_1913370
// ----------------------------------------------------------------------------
bool sub_1913370(int *a1, int *a2)
{
  int v2;

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[1];
  a1[1] = 0;
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v2 - 12), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19133D0  (binary VA: 0x19133d0)
// Original: sub_19133D0
// ----------------------------------------------------------------------------
bool sub_19133D0(int a1)
{
  sub_1900810((uint32_t *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA52C);
  *(uint32_t *)(a1 + 120) = 0;
  *(uint8_t *)(a1 + 124) = 0;
  *(uint8_t *)(a1 + 125) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA540);
  *(uint32_t *)(a1 + 4) = 0;
  return sub_19119D0(a1 + 8, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1913480  (binary VA: 0x1913480)
// Original: sub_1913480
// ----------------------------------------------------------------------------
int sub_1913480(uint8_t *a1, uint32_t *a2, char a3)
{
  int v3;
  char v4;
  char *v5;
  int v6;
  int v7;
  uint32_t *v9;
  uint8_t *v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  uint8_t *v15;
  int64_t v16;

  *a1 = 0;
  v3 = 0;
  v4 = a3;
  v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
  v6 = *((uint32_t *)v5 + 5);
  if ( v6 != 0 )
    goto LABEL_7;
  v7 = *((uint32_t *)v5 + 28);
  if ( v7 != 0 )
  {
    g4_std_compat::ostream_flush(v7);
    v4 = a3;
    v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
  }
  v3 = 0;
  if ( v4 == 0 && (v5[13] & 0x10) != 0 )
  {
    v9 = *((uint32_t **)v5 + 30);
    v10 = (uint8_t *)v9[2];
    if ( (unsigned int)(uintptr_t)(v10) >= v9[3] )
    {
      v11 = (*(int (**)(uint32_t))(*v9 + 36))(*((uint32_t *)v5 + 30));
      v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
    }
    else
    {
      v11 = *v10;
    }
    v12 = *((uint32_t *)v5 + 31);
    if ( v12 == 0 )
      sub_18FFF30();
    if ( v11 == -1 )
    {
LABEL_25:
      v3 = 2;
    }
    else
    {
      if ( (*(uint8_t *)(*(uint32_t *)(v12 + 24) + (uint8_t)v11) & 8) != 0 )
      {
        while ( 1 )
        {
          v13 = v9[2];
          v14 = v9[3];
          if ( v13 >= v14 )
          {
            if ( G4_VCALL<int>(v9, 40) == -1 )
              goto LABEL_24;
            v15 = (uint8_t *)v9[2];
            v14 = v9[3];
          }
          else
          {
            v15 = (uint8_t *)(v13 + 1);
            v9[2] = (uint32_t)(uintptr_t)(v15);
          }
          if ( (unsigned int)(uintptr_t)(v15) >= v14 )
          {
            v15 = (uint8_t *)G4_VCALL<int>(v9, 36);
            if ( v15 == (uint8_t *)-1 )
            {
LABEL_24:
              v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
              goto LABEL_25;
            }
          }
          else
          {
            LOBYTE(v15) = *v15;
          }
          if ( (*(uint8_t *)(*(uint32_t *)(v12 + 24) + (uint8_t)(uintptr_t)(v15)) & 8) == 0 )
          {
            v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
            break;
          }
        }
      }
      v3 = 0;
    }
  }
  v6 = *((uint32_t *)v5 + 5);
  if ( v6 != 0 || v3 != 0 )
  {
LABEL_7:
    LODWORD(v16) = (uint32_t)(uintptr_t)(v5);
    HIDWORD(v16) = v6 | v3 | 4;
    return sub_1911530(v16);
  }
  else
  {
    *a1 = 1;
    return (int)(uintptr_t)(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19135E0  (binary VA: 0x19135e0)
// Original: sub_19135E0
// ----------------------------------------------------------------------------
uint32_t * sub_19135E0(uint32_t *a1, uint32_t *a2)
{
  char *v2;
  typedef char _g4_t_v4;
  typedef uint32_t _g4_t_v5[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v4)) > _g4_s0 ? (3u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 3u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  sub_1913480(&v4, a2, 1);
  if ( v4 != 0 )
  {
    v2 = (char *)a2 + *(uint32_t *)(*a2 - 12);
    if ( (v2[20] & 5) == 0 )
    {
      (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v2 + 30) + 16))(v5, *((uint32_t **)v2 + 30), (int64_t)0, 1, 8);
      *a1 = v5[0];
      a1[1] = v5[1];
      a1[2] = v5[2];
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1913720  (binary VA: 0x1913720)
// Original: sub_1913720
// ----------------------------------------------------------------------------
int sub_1913720(uint32_t *a1)
{
  int v1;
  typedef int64_t _g4_t_v3;
  typedef uint8_t _g4_t_v4[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v4)) > _g4_s1 ? (31u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 31u);

  sub_1913480(v4, a1, 1);
  if ( v4[0] == 0 )
    return -1;
  v1 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  if ( v1 == 0 )
    return -1;
  if ( (*(int (**)(uint32_t))(*(uint32_t *)v1 + 24))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120)) != -1 )
    return 0;
  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 1;
  sub_1911530(v3);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1913820  (binary VA: 0x1913820)
// Original: sub_1913820
// ----------------------------------------------------------------------------
int * sub_1913820(int *a1)
{
  int v1;
  char *v2;
  uint32_t *v3;
  unsigned int v4;
  typedef int64_t _g4_t_v6;
  typedef int64_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v8)) > _g4_s2 ? (31u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  v1 = *a1;
  a1[1] = 0;
  LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v1 - 12));
  HIDWORD(v6) = *(uint32_t *)(v6 + 20) & 0xFFFFFFFD;
  sub_1911530(v6);
  sub_1913480(v8, a1, 1);
  if ( v8[0] == 0 )
    return a1;
  v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v3 = *((uint32_t **)v2 + 30);
  if ( v3 != nullptr )
  {
    v4 = v3[2];
    if ( v3[1] < v4 )
    {
      v3[2] = v4 - 1;
      return a1;
    }
    if ( G4_VCALL<int>(v3, 44, -1) != -1 )
      return a1;
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  }
  LODWORD(v7) = (uint32_t)(uintptr_t)(v2);
  HIDWORD(v7) = *((uint32_t *)v2 + 5) | 1;
  sub_1911530(v7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1913940  (binary VA: 0x1913940)
// Original: sub_1913940
// ----------------------------------------------------------------------------
int * sub_1913940(int *a1, uint8_t a2)
{
  int v2;
  char *v3;
  uint32_t *v4;
  unsigned int v5;
  typedef int64_t _g4_t_v7;
  typedef int64_t _g4_t_v8;
  typedef char _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v9)) > _g4_s2 ? (31u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 31u);

  v2 = *a1;
  a1[1] = 0;
  LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v2 - 12));
  HIDWORD(v7) = *(uint32_t *)(v7 + 20) & 0xFFFFFFFD;
  sub_1911530(v7);
  sub_1913480(&v9, a1, 1);
  if ( v9 != 0 )
  {
    v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v4 = *((uint32_t **)v3 + 30);
    if ( v4 == nullptr )
    {
LABEL_7:
      LODWORD(v8) = (uint32_t)(uintptr_t)(v3);
      HIDWORD(v8) = *((uint32_t *)v3 + 5) | 1;
      sub_1911530(v8);
      return a1;
    }
    v5 = v4[2];
    if ( v4[1] < v5 && a2 == *(uint8_t *)(v5 - 1) )
    {
      v4[2] = v5 - 1;
      return a1;
    }
    if ( G4_VCALL<int>(v4, 44, a2) == -1 )
    {
      v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
      goto LABEL_7;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1913A80  (binary VA: 0x1913a80)
// Original: sub_1913A80
// ----------------------------------------------------------------------------
int sub_1913A80(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  typedef int64_t _g4_t_v7;
  typedef char _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v8)) > _g4_s1 ? (31u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  v3 = a3;
  a1[1] = 0;
  sub_1913480(&v8, a1, 1);
  if ( v8 == 0 )
    return a1[1];
  v4 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v5 = v4[3] - v4[2];
  if ( v4[3] == v4[2] )
  {
    v5 = (*(int (**)(uint32_t))(*v4 + 28))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120));
    if ( v5 > 0 )
      goto LABEL_4;
  }
  else if ( v5 > 0 )
  {
LABEL_4:
    if ( v5 <= a3 )
      v3 = v5;
    a1[1] = (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120) + 32))(
              *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120),
              a2,
              v3);
    return a1[1];
  }
  if ( v5 == -1 )
  {
    LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 2;
    sub_1911530(v7);
  }
  return a1[1];
}

// ----------------------------------------------------------------------------
// Function: sub_1913BC0  (binary VA: 0x1913bc0)
// Original: sub_1913BC0
// ----------------------------------------------------------------------------
uint32_t * sub_1913BC0(uint32_t *a1, int a2, int a3)
{
  int v4;
  typedef int64_t _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v6)) > _g4_s1 ? (31u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_1913480(&v6, a1, 1);
  if ( v6 != 0 )
  {
    v4 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120) + 32))(
           *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120),
           a2,
           a3);
    a1[1] = v4;
    if ( a3 != v4 )
    {
      LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v5) = *(uint32_t *)(v5 + 20) | 6;
      sub_1911530(v5);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1913CD0  (binary VA: 0x1913cd0)
// Original: sub_1913CD0
// ----------------------------------------------------------------------------
int sub_1913CD0(uint32_t *a1)
{
  uint32_t *v1;
  uint8_t *v2;
  int result;
  typedef int64_t _g4_t_v4;
  typedef uint8_t _g4_t_v5[13];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (47u + sizeof(_g4_t_v5)) > _g4_s1 ? (47u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 47u);

  a1[1] = 0;
  sub_1913480(v5, a1, 1);
  if ( v5[0] == 0 )
    return -1;
  v1 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v2 = (uint8_t *)v1[2];
  if ( (unsigned int)(uintptr_t)(v2) < v1[3] )
    return *v2;
  result = (*(int (**)(uint32_t))(*v1 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120));
  if ( result == -1 )
  {
    LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 2;
    sub_1911530(v4);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1913DD0  (binary VA: 0x1913dd0)
// Original: sub_1913DD0
// ----------------------------------------------------------------------------
uint32_t * sub_1913DD0(uint32_t *a1)
{
  uint32_t *v2;
  unsigned int v3;
  typedef int64_t _g4_t_v4;
  typedef uint8_t _g4_t_v5[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v5)) > _g4_s1 ? (31u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_1913480(v5, a1, 1);
  if ( v5[0] == 0 )
    return a1;
  v2 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v3 = v2[2];
  if ( v3 >= v2[3] )
  {
    if ( (*(int (**)(uint32_t))(*v2 + 40))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120)) == -1 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 2;
      sub_1911530(v4);
      return a1;
    }
  }
  else
  {
    v2[2] = v3 + 1;
  }
  a1[1] = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1913EF0  (binary VA: 0x1913ef0)
// Original: sub_1913EF0
// ----------------------------------------------------------------------------
uint32_t * sub_1913EF0(uint32_t *a1, uint32_t *a2, uint8_t a3)
{
  int v3;
  uint32_t *v5;
  uint8_t *v6;
  int v7;
  uint8_t v8;
  uint8_t *v9;
  unsigned int v10;
  unsigned int v11;
  uint8_t *v12;
  int v13;
  typedef int64_t _g4_t_v14;
  typedef char _g4_t_v15[29];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (47u + sizeof(_g4_t_v15)) > _g4_s1 ? (47u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 47u);

  a1[1] = 0;
  sub_1913480(v15, a1, 1);
  v3 = 0;
  if ( v15[0] != 0 )
  {
    v5 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
    v6 = (uint8_t *)v5[2];
    if ( (unsigned int)(uintptr_t)(v6) >= v5[3] )
    {
      v7 = (*(int (**)(uint32_t))(*v5 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120));
      if ( v7 == -1 )
      {
LABEL_19:
        v3 = 2;
        goto LABEL_2;
      }
    }
    else
    {
      v7 = *v6;
    }
    v8 = v7;
    if ( a3 == v7 )
    {
LABEL_17:
      v3 = 0;
      goto LABEL_2;
    }
    while ( 1 )
    {
      v9 = (uint8_t *)a2[5];
      if ( (unsigned int)(uintptr_t)(v9) >= a2[6] )
      {
        if ( G4_VCALL<int>(a2, 52, v8) == -1 )
        {
          v3 = 0;
          break;
        }
      }
      else
      {
        *v9 = v8;
        ++a2[5];
      }
      v10 = v5[3];
      ++a1[1];
      v11 = v5[2];
      if ( v11 >= v10 )
      {
        if ( G4_VCALL<int>(v5, 40) == -1 )
          goto LABEL_19;
        v12 = (uint8_t *)v5[2];
        v10 = v5[3];
      }
      else
      {
        v12 = (uint8_t *)(v11 + 1);
        v5[2] = (uint32_t)(uintptr_t)(v12);
      }
      if ( v10 <= (unsigned int)(uintptr_t)(v12) )
      {
        v13 = G4_VCALL<int>(v5, 36);
        v8 = v13;
        if ( v13 == -1 )
          goto LABEL_19;
      }
      else
      {
        v13 = *v12;
        v8 = *v12;
      }
      if ( a3 == v13 )
        goto LABEL_17;
    }
  }
LABEL_2:
  if ( a1[1] == 0 )
  {
    v3 |= 4u;
LABEL_4:
    LODWORD(v14) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v14) = *(uint32_t *)(v14 + 20) | v3;
    sub_1911530(v14);
    return a1;
  }
  if ( v3 != 0 )
    goto LABEL_4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19140F0  (binary VA: 0x19140f0)
// Original: sub_19140F0
// ----------------------------------------------------------------------------
uint32_t * sub_19140F0(uint32_t *a1, uint32_t *a2)
{
  int v2;
  uint8_t *v3;
  uint8_t v4;

  v2 = *(uint32_t *)(*a1 - 12);
  v3 = *(uint8_t **)((char *)a1 + v2 + 124);
  if ( v3 == nullptr )
    sub_18FFF30();
  if ( v3[28] != 0 )
  {
    v4 = v3[39];
  }
  else
  {
    sub_18FFC70(*(uint8_t **)((char *)a1 + v2 + 124));
    v4 = G4_VCALL<int>(v3, 24, 10);
  }
  return sub_1913EF0(a1, a2, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_1914170  (binary VA: 0x1914170)
// Original: sub_1914170
// ----------------------------------------------------------------------------
uint32_t * sub_1914170(uint32_t *a1, uint8_t *a2, int a3, uint8_t a4)
{
  int v4;
  uint32_t *v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  typedef int64_t _g4_t_v12;
  typedef char _g4_t_v13[29];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (47u + sizeof(_g4_t_v13)) > _g4_s1 ? (47u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 47u);

  a1[1] = 0;
  sub_1913480(v13, a1, 1);
  v4 = 0;
  if ( v13[0] == 0 )
    goto LABEL_2;
  v6 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v7 = (uint8_t *)v6[2];
  if ( (unsigned int)(uintptr_t)(v7) < v6[3] )
    goto LABEL_16;
LABEL_23:
  v10 = G4_VCALL<int>(v6, 36);
  while ( a1[1] + 1 < a3 )
  {
    if ( v10 == -1 )
      goto LABEL_20;
    if ( v10 == a4 )
      goto LABEL_19;
    *a2++ = v10;
    v8 = v6[2];
    v9 = v6[3];
    ++a1[1];
    if ( v8 < v9 )
    {
      v7 = (uint8_t *)(v8 + 1);
      v6[2] = (uint32_t)(uintptr_t)(v7);
      goto LABEL_15;
    }
    v11 = G4_VCALL<int>(v6, 40);
    v10 = -1;
    if ( v11 != -1 )
    {
      v7 = (uint8_t *)v6[2];
      v9 = v6[3];
LABEL_15:
      if ( v9 <= (unsigned int)(uintptr_t)(v7) )
        goto LABEL_23;
LABEL_16:
      v10 = *v7;
    }
  }
  if ( v10 != -1 )
  {
LABEL_19:
    v4 = 0;
    goto LABEL_2;
  }
LABEL_20:
  v4 = 2;
LABEL_2:
  if ( a3 > 0 )
    *a2 = 0;
  if ( a1[1] == 0 )
  {
    v4 |= 4u;
    goto LABEL_6;
  }
  if ( v4 == 0 )
    return a1;
LABEL_6:
  LODWORD(v12) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v12) = *(uint32_t *)(v12 + 20) | v4;
  sub_1911530(v12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914310  (binary VA: 0x1914310)
// Original: sub_1914310
// ----------------------------------------------------------------------------
uint32_t * sub_1914310(uint32_t *a1, uint8_t *a2, int a3)
{
  int v3;
  uint8_t *v4;
  uint8_t v5;

  v3 = *(uint32_t *)(*a1 - 12);
  v4 = *(uint8_t **)((char *)a1 + v3 + 124);
  if ( v4 == nullptr )
    sub_18FFF30();
  if ( v4[28] != 0 )
  {
    v5 = v4[39];
  }
  else
  {
    sub_18FFC70(*(uint8_t **)((char *)a1 + v3 + 124));
    v5 = G4_VCALL<int>(v4, 24, 10);
  }
  return sub_1914170(a1, a2, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: sub_19143A0  (binary VA: 0x19143a0)
// Original: sub_19143A0
// ----------------------------------------------------------------------------
uint32_t * sub_19143A0(uint32_t *a1, uint8_t *a2)
{
  int v2;
  uint32_t *v4;
  uint8_t *v5;
  int v6;
  typedef int64_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v8)) > _g4_s1 ? (31u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_1913480(v8, a1, 1);
  v2 = 0;
  if ( v8[0] != 0 )
  {
    v4 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
    v5 = (uint8_t *)v4[2];
    if ( (unsigned int)(uintptr_t)(v5) >= v4[3] )
    {
      v6 = G4_VCALL<int>(v4, 40);
      v2 = 2;
      if ( v6 == -1 )
        goto LABEL_2;
    }
    else
    {
      LOBYTE(v6) = *v5;
      v4[2] = (uint32_t)(uintptr_t)(v5 + 1);
    }
    a1[1] = 1;
    *a2 = v6;
    v2 = 0;
  }
LABEL_2:
  if ( a1[1] == 0 )
  {
    v2 |= 4u;
LABEL_4:
    LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v7) = *(uint32_t *)(v7 + 20) | v2;
    sub_1911530(v7);
    return a1;
  }
  if ( v2 != 0 )
    goto LABEL_4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19144D0  (binary VA: 0x19144d0)
// Original: sub_19144D0
// ----------------------------------------------------------------------------
int sub_19144D0(uint32_t *a1)
{
  uint32_t *v1;
  uint8_t *v2;
  int result;
  int v4;
  typedef int64_t _g4_t_v5;
  typedef uint8_t _g4_t_v6[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v6)) > _g4_s1 ? (31u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_1913480(v6, a1, 1);
  if ( v6[0] != 0 )
  {
    v1 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
    v2 = (uint8_t *)v1[2];
    if ( (unsigned int)(uintptr_t)(v2) < v1[3] )
    {
      result = *v2;
      v1[2] = (uint32_t)(uintptr_t)(v2 + 1);
LABEL_4:
      a1[1] = 1;
      return result;
    }
    result = G4_VCALL<int>(v1, 40);
    v4 = 2;
    if ( result != -1 )
      goto LABEL_4;
  }
  else
  {
    v4 = 0;
  }
  if ( a1[1] == 0 )
  {
    v4 |= 4u;
LABEL_8:
    LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v5) = *(uint32_t *)(v5 + 20) | v4;
    sub_1911530(v5);
    return -1;
  }
  result = -1;
  if ( v4 != 0 )
    goto LABEL_8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19145F0  (binary VA: 0x19145f0)
// Original: sub_19145F0
// ----------------------------------------------------------------------------
uint32_t * sub_19145F0(uint32_t *a1, int a2)
{
  int v2;
  typedef int64_t _g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v5)) > _g4_s1 ? (30u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v6)) > _g4_s2 ? (31u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 30u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  sub_1913480(&v5, a1, 0);
  if ( v5 != 0 )
  {
    if ( a2 != 0 )
    {
      v2 = sub_1953F10(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120), a2, &v6) == 0 ? 4 : 0;
      if ( v6 != 0 )
      {
        v2 |= 2u;
      }
      else if ( v2 == 0 )
      {
        return a1;
      }
      goto LABEL_5;
    }
  }
  else if ( a2 != 0 )
  {
    return a1;
  }
  v2 = 4;
LABEL_5:
  LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v2;
  sub_1911530(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914710  (binary VA: 0x1914710)
// Original: sub_1914710
// ----------------------------------------------------------------------------
int * sub_1914710(int *a1, uint32_t *a2)
{
  int v2;
  int v3;
  typedef int64_t _g4_t_v5 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v6[15];
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v6)) > _g4_s1 ? (60u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (75u + sizeof(_g4_t_v7)) > _g4_s2 ? (75u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v8)) > _g4_s3 ? (76u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v9)) > _g4_s4 ? (80u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 60u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 75u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 76u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 80u);

  sub_1913480(&v7, a1, 0);
  if ( v7 != 0 )
  {
    v2 = *a1;
    v8 = 0;
    v3 = *(int *)((char *)a1 + *(uint32_t *)(v2 - 12) + 132);
    if ( v3 == 0 )
      sub_18FFF30();
    {
      char *g4_ios = (char *)a1 + *(uint32_t *)(v2 - 12);
      (*(void (**)(uint8_t *, int, uint32_t, int, int, int, char *, int *, int *))(*(uint32_t *)v3 + 12))(
        v6, v3, *((uint32_t *)g4_ios + 30), -1, 0, -1, g4_ios, &v8, &v9);
    }
    *a2 = v9;
    if ( v8 != 0 )
    {
      LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v5) = *(uint32_t *)(v5 + 20) | v8;
      sub_1911530(v5);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914870  (binary VA: 0x1914870)
// Original: sub_1914870
// ----------------------------------------------------------------------------
int * sub_1914870(int *a1, uint16_t *a2)
{
  int v2;
  int v3;
  int v4;
  typedef int64_t _g4_t_v6 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v7[15];
  typedef char _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v7)) > _g4_s1 ? (60u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (75u + sizeof(_g4_t_v8)) > _g4_s2 ? (75u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v9)) > _g4_s3 ? (76u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v10)) > _g4_s4 ? (80u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 75u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 76u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 80u);

  sub_1913480(&v8, a1, 0);
  if ( v8 != 0 )
  {
    v2 = *a1;
    v9 = 0;
    v3 = *(int *)((char *)a1 + *(uint32_t *)(v2 - 12) + 132);
    if ( v3 == 0 )
      sub_18FFF30();
    {
      char *g4_ios = (char *)a1 + *(uint32_t *)(v2 - 12);
      (*(void (**)(uint8_t *, int, uint32_t, int, int, int, char *, int *, int *))(*(uint32_t *)v3 + 12))(
        v7, v3, *((uint32_t *)g4_ios + 30), -1, 0, -1, g4_ios, &v9, &v10);
    }
    if ( v10 >= -32768 )
    {
      if ( v10 > 0x7FFF )
      {
        v4 = v9 | 4;
        v9 |= 4u;
        *a2 = 0x7FFF;
      }
      else
      {
        *a2 = v10;
        v4 = v9;
        if ( v9 == 0 )
          return a1;
      }
    }
    else
    {
      v4 = v9 | 4;
      v9 |= 4u;
      *a2 = 0x8000;
    }
    LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v6) = *(uint32_t *)(v6 + 20) | v4;
    sub_1911530(v6);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914A20  (binary VA: 0x1914a20)
// Original: sub_1914A20
// ----------------------------------------------------------------------------
uint32_t * sub_1914A20(uint32_t *a1)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef char _g4_t_v5;
  typedef uint32_t _g4_t_v6[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (55u + sizeof(_g4_t_v5)) > _g4_s2 ? (55u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v6)) > _g4_s3 ? (56u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 55u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 56u);

  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v3) = *(uint32_t *)(v3 + 20) & 0xFFFFFFFD;
  sub_1911530(v3);
  sub_1913480(&v5, a1, 1);
  if ( v5 != 0 )
  {
    v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    if ( (v1[20] & 5) == 0 )
    {
      (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v1 + 30) + 16))(v6, *((uint32_t **)v1 + 30), (int64_t)0, 0, 8);
      if ( (v6[1] & v6[0]) == -1 )
      {
        LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 4;
        sub_1911530(v4);
      }
    }
  }
  return a1;
}

uint32_t *g4_sub_1914A20(uint32_t *a1, int a2, int a3, int a4)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef char _g4_t_v5;
  typedef uint32_t _g4_t_v6[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (55u + sizeof(_g4_t_v5)) > _g4_s2 ? (55u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v6)) > _g4_s3 ? (56u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 55u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 56u);

  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v3) = *(uint32_t *)(v3 + 20) & 0xFFFFFFFD;
  sub_1911530(v3);
  sub_1913480(&v5, a1, 1);
  if ( v5 != 0 )
  {
    v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    if ( (v1[20] & 5) == 0 )
    {
      (*(void (**)(uint32_t *, uint32_t *, int, int, int, int))(**((uint32_t **)v1 + 30) + 16))(v6, *((uint32_t **)v1 + 30), a2, a3, a4, 8);
      if ( (v6[1] & v6[0]) == -1 )
      {
        LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 4;
        sub_1911530(v4);
      }
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914B80  (binary VA: 0x1914b80)
// Original: sub_1914B80
// ----------------------------------------------------------------------------
uint32_t * sub_1914B80(uint32_t *a1, int a2, int a3, int a4)
{
  char *v4;
  int v6;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef char _g4_t_v9;
  typedef uint32_t _g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (43u + sizeof(_g4_t_v9)) > _g4_s2 ? (43u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v10)) > _g4_s3 ? (44u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 43u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v7) = *(uint32_t *)(v7 + 20) & 0xFFFFFFFD;
  sub_1911530(v7);
  sub_1913480(&v9, a1, 1);
  if ( v9 != 0 )
  {
    v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    if ( (v4[20] & 5) == 0 )
    {
      v6 = *((uint32_t *)v4 + 30);
      v10[3] = a2;
      v10[4] = a3;
      v10[5] = a4;
      (*(void (**)(uint32_t *, int, int, int, int, int))(*(uint32_t *)v6 + 20))(v10, v6, a2, a3, a4, 8);
      if ( (v10[1] & v10[0]) == -1 )
      {
        LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 4;
        sub_1911530(v8);
      }
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914D00  (binary VA: 0x1914d00)
// Original: sub_1914D00
// ----------------------------------------------------------------------------
uint32_t * sub_1914D00(uint32_t *a1)
{
  int v1;
  uint32_t *v2;
  uint8_t *v3;
  unsigned int v5;
  unsigned int v6;
  typedef int64_t _g4_t_v7;
  typedef volatile int32_t *_g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  sub_1901AC0(v8, (volatile int32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 108));
  v1 = (int)(uintptr_t)(sub_191CFA0(v8));
  sub_1902180(v8);
  v2 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v3 = (uint8_t *)v2[2];
  if ( (unsigned int)(uintptr_t)(v3) >= v2[3] )
    goto LABEL_8;
LABEL_2:
  LOBYTE(v3) = *v3;
  do
  {
    if ( (*(uint8_t *)(*(uint32_t *)(v1 + 24) + (uint8_t)(uintptr_t)(v3)) & 8) == 0 )
      return a1;
    v5 = v2[2];
    v6 = v2[3];
    if ( v5 >= v6 )
    {
      if ( G4_VCALL<int>(v2, 40) == -1 )
        break;
      v3 = (uint8_t *)v2[2];
      v6 = v2[3];
    }
    else
    {
      v3 = (uint8_t *)(v5 + 1);
      v2[2] = (uint32_t)(uintptr_t)(v3);
    }
    if ( (unsigned int)(uintptr_t)(v3) < v6 )
      goto LABEL_2;
LABEL_8:
    v3 = (uint8_t *)G4_VCALL<int>(v2, 36);
  }
  while ( v3 != (uint8_t *)-1 );
  LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 2;
  sub_1911530(v7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914DF0  (binary VA: 0x1914df0)
// Original: sub_1914DF0
// ----------------------------------------------------------------------------
uint32_t * sub_1914DF0(uint32_t *a1, uint8_t *a2)
{
  uint32_t *v3;
  uint8_t *v4;
  int v5;
  typedef int64_t _g4_t_v6;
  typedef uint8_t _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v7)) > _g4_s1 ? (31u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);

  sub_1913480(v7, a1, 0);
  if ( v7[0] == 0 )
    return a1;
  v3 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v4 = (uint8_t *)v3[2];
  if ( (unsigned int)(uintptr_t)(v4) >= v3[3] )
  {
    v5 = G4_VCALL<int>(v3, 40);
    if ( v5 == -1 )
    {
      LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v6) = *(uint32_t *)(v6 + 20) | 6;
      sub_1911530(v6);
      return a1;
    }
  }
  else
  {
    LOBYTE(v5) = *v4;
    v3[2] = (uint32_t)(uintptr_t)(v4 + 1);
  }
  *a2 = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1914F30  (binary VA: 0x1914f30)
// Original: sub_1914F30
// ----------------------------------------------------------------------------
uint32_t * sub_1914F30(uint32_t *a1, char *a2)
{
  return (uint32_t *)(uintptr_t)(sub_19053C0(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_1914F60  (binary VA: 0x1914f60)
// Original: sub_1914F60
// ----------------------------------------------------------------------------
uint32_t * sub_1914F60(uint32_t *a1, char *a2)
{
  return (uint32_t *)(uintptr_t)(sub_19053C0(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_1914F90  (binary VA: 0x1914f90)
// Original: sub_1914F90
// ----------------------------------------------------------------------------
uint32_t * sub_1914F90(uint32_t *a1, char a2)
{
  char *v2;
  uint8_t *v4;
  char v5;

  v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( v2[117] == 0 )
  {
    v4 = *((uint8_t **)v2 + 31);
    if ( v4 == nullptr )
      sub_18FFF30();
    if ( v4[28] != 0 )
    {
      v5 = v4[61];
    }
    else
    {
      sub_18FFC70(*((uint8_t **)v2 + 31));
      v5 = G4_VCALL<int>(v4, 24, 32);
    }
    v2[116] = v5;
    v2[117] = 1;
  }
  v2[116] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1915020  (binary VA: 0x1915020)
// Original: sub_1915020
// ----------------------------------------------------------------------------
uint32_t * sub_1915020(uint32_t *a1, int a2)
{
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1915060  (binary VA: 0x1915060)
// Original: sub_1915060
// ----------------------------------------------------------------------------
uint32_t * sub_1915060(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;

  result = a1;
  v3 = 64;
  if ( a2 != 8 )
  {
    LOBYTE(v3) = 2;
    if ( a2 != 10 )
      v3 = 8 * (a2 == 16);
  }
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) = v3
                                                       | *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12)
                                                       & 0xFFFFFFB5;
  return result;
}

// ----------------------------------------------------------------------------
static inline int * g4_istream_extract_num(int *a1, void *a2, size_t vtable_offset)
{
  typedef void (*num_get_fn)(uint8_t *, int, uint32_t, int, int, int, int, int *, void *);
  char sentry_ok = 0;
  int err = 0;

  sub_1913480(&sentry_ok, a1, 0);
  if ( sentry_ok != 0 )
  {
    int ios = (int)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    int facet = *(int *)(uintptr_t)(ios + 132);
    if ( facet == 0 )
      sub_18FFF30();
    uint8_t iter_out[20];
    uint32_t streambuf = *(uint32_t *)(uintptr_t)(ios + 120);
    num_get_fn fn = *(num_get_fn *)(*(uintptr_t *)(uintptr_t)facet + vtable_offset);
    fn(iter_out, facet, streambuf, -1, 0, -1, ios, &err, a2);
    if ( err != 0 )
    {
      uint32_t ios_cur = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      sub_1911530(ios_cur, *(uint32_t *)(uintptr_t)(ios_cur + 20) | (uint32_t)err);
    }
  }
  return a1;
}

// Function: sub_19150E0  (binary VA: 0x19150e0)
// Original: sub_19150E0
// ----------------------------------------------------------------------------
int * sub_19150E0(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 16u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915250  (binary VA: 0x1915250)
// Original: sub_1915250
// ----------------------------------------------------------------------------
int * sub_1915250(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 20u);
}

// ----------------------------------------------------------------------------
// Function: sub_19153C0  (binary VA: 0x19153c0)
// Original: sub_19153C0
// ----------------------------------------------------------------------------
int * sub_19153C0(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 12u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915530  (binary VA: 0x1915530)
// Original: sub_1915530
// ----------------------------------------------------------------------------
int * sub_1915530(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 24u);
}

// ----------------------------------------------------------------------------
// Function: sub_19156A0  (binary VA: 0x19156a0)
// Original: sub_19156A0
// ----------------------------------------------------------------------------
int * sub_19156A0(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 8u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915810  (binary VA: 0x1915810)
// Original: sub_1915810
// ----------------------------------------------------------------------------
int * sub_1915810(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 28u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915980  (binary VA: 0x1915980)
// Original: sub_1915980
// ----------------------------------------------------------------------------
int * sub_1915980(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 32u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915AF0  (binary VA: 0x1915af0)
// Original: sub_1915AF0
// ----------------------------------------------------------------------------
int * sub_1915AF0(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 36u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915C60  (binary VA: 0x1915c60)
// Original: sub_1915C60
// ----------------------------------------------------------------------------
int * sub_1915C60(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 40u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915DD0  (binary VA: 0x1915dd0)
// Original: sub_1915DD0
// ----------------------------------------------------------------------------
int * sub_1915DD0(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 44u);
}

// ----------------------------------------------------------------------------
// Function: sub_1915F40  (binary VA: 0x1915f40)
// Original: sub_1915F40
// ----------------------------------------------------------------------------
int * sub_1915F40(int *a1, void *a2)
{
  return g4_istream_extract_num(a1, a2, 48u);
}

// ----------------------------------------------------------------------------
// Function: sub_19160B0  (binary VA: 0x19160b0)
// Original: sub_19160B0
// ----------------------------------------------------------------------------
bool sub_19160B0(int *a1, int *a2, int a3)
{
  int v3;

  v3 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[1];
  a1[1] = 0;
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1916110  (binary VA: 0x1916110)
// Original: sub_1916110
// ----------------------------------------------------------------------------
bool sub_1916110(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA56C);
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA580);
  *(uint32_t *)(a1 + 124) = 0;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  return sub_1912230(a1 + 8, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19161E0  (binary VA: 0x19161e0)
// Original: sub_19161E0
// ----------------------------------------------------------------------------
int sub_19161E0(int a1, int (*a2)(int))
{
  return a2(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1916200  (binary VA: 0x1916200)
// Original: sub_1916200
// ----------------------------------------------------------------------------
char * sub_1916200(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916220  (binary VA: 0x1916220)
// Original: sub_1916220
// ----------------------------------------------------------------------------
char * sub_1916220(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916250  (binary VA: 0x1916250)
// Original: sub_1916250
// ----------------------------------------------------------------------------
uint32_t * sub_1916250(uint32_t *a1, wchar_t *s1, int a3)
{
  int v3;
  wchar_t v4;

  v3 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
  if ( v3 == 0 )
    sub_18FFF30();
  v4 = G4_VCALL<int>(v3, 40, 10);
  return (uint32_t *)(uintptr_t)(sub_1905D60(a1, s1, a3, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_19162B0  (binary VA: 0x19162b0)
// Original: sub_19162B0
// ----------------------------------------------------------------------------
bool sub_19162B0(int *a1, int *a2)
{
  int v2;

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v2 - 12)) = a2[1];
  a1[1] = 0;
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v2 - 12), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1916310  (binary VA: 0x1916310)
// Original: sub_1916310
// ----------------------------------------------------------------------------
bool sub_1916310(int a1)
{
  sub_1900810((uint32_t *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA56C);
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint8_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AA580);
  *(uint32_t *)(a1 + 4) = 0;
  return sub_1912230(a1 + 8, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19163C0  (binary VA: 0x19163c0)
// Original: sub_19163C0
// ----------------------------------------------------------------------------
int sub_19163C0(uint8_t *a1, uint32_t *a2, char a3)
{
  int v3;
  char v4;
  char *v5;
  int v6;
  int v7;
  uint32_t *v9;
  int *v10;
  int v11;
  int v12;
  char v13;
  int *v14;
  int v15;
  int *v16;
  int64_t v17;
  int v18;
  int v19;

  *a1 = 0;
  v3 = 0;
  v4 = a3;
  v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
  v6 = *((uint32_t *)v5 + 5);
  if ( v6 != 0 )
    goto LABEL_7;
  v7 = *((uint32_t *)v5 + 28);
  if ( v7 != 0 )
  {
    sub_192EAA0(v7);
    v4 = a3;
    v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
  }
  v3 = 0;
  if ( v4 == 0 && (v5[13] & 0x10) != 0 )
  {
    v9 = *((uint32_t **)v5 + 31);
    v10 = (int *)v9[2];
    if ( (unsigned int)(uintptr_t)(v10) >= v9[3] )
    {
      v11 = G4_VCALL<int>(v9, 36);
      v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
    }
    else
    {
      v11 = *v10;
    }
    v12 = *((uint32_t *)v5 + 32);
    if ( v12 == 0 )
      sub_18FFF30();
    if ( v11 == -1 )
    {
LABEL_14:
      v3 = 2;
    }
    else
    {
      while ( 1 )
      {
        v18 = v12;
        v13 = G4_VCALL<int>(v12, 8, 8, v11);
        v12 = v18;
        if ( v13 == 0 )
          break;
        v14 = (int *)v9[2];
        if ( (unsigned int)(uintptr_t)(v14) >= v9[3] )
        {
          v15 = G4_VCALL<int>(v9, 40);
          v12 = v18;
        }
        else
        {
          v15 = *v14;
          v9[2] = (uint32_t)(uintptr_t)(v14 + 1);
        }
        if ( v15 != -1 )
        {
          v16 = (int *)v9[2];
          if ( (unsigned int)(uintptr_t)(v16) >= v9[3] )
          {
            v19 = v12;
            v11 = G4_VCALL<int>(v9, 36);
            v12 = v19;
          }
          else
          {
            v11 = *v16;
          }
          if ( v11 != -1 )
            continue;
        }
        v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
        goto LABEL_14;
      }
      v3 = 0;
      v5 = (char *)a2 + *(uint32_t *)(*a2 - 12);
    }
  }
  v6 = *((uint32_t *)v5 + 5);
  if ( v6 != 0 || v3 != 0 )
  {
LABEL_7:
    LODWORD(v17) = (uint32_t)(uintptr_t)(v5);
    HIDWORD(v17) = v6 | v3 | 4;
    return sub_1911E40(v17);
  }
  else
  {
    *a1 = 1;
    return (int)(uintptr_t)(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1916550  (binary VA: 0x1916550)
// Original: sub_1916550
// ----------------------------------------------------------------------------
uint32_t * sub_1916550(uint32_t *a1, uint32_t *a2)
{
  char *v2;
  typedef char _g4_t_v4;
  typedef uint32_t _g4_t_v5[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v4)) > _g4_s0 ? (3u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 3u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  sub_19163C0(&v4, a2, 1);
  if ( v4 != 0 )
  {
    v2 = (char *)a2 + *(uint32_t *)(*a2 - 12);
    if ( (v2[20] & 5) == 0 )
    {
      (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v2 + 31) + 16))(v5, *((uint32_t **)v2 + 31), (int64_t)0, 1, 8);
      *a1 = v5[0];
      a1[1] = v5[1];
      a1[2] = v5[2];
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916690  (binary VA: 0x1916690)
// Original: sub_1916690
// ----------------------------------------------------------------------------
int sub_1916690(uint32_t *a1)
{
  int v1;
  typedef int64_t _g4_t_v3;
  typedef uint8_t _g4_t_v4[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v4)) > _g4_s1 ? (31u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 31u);

  sub_19163C0(v4, a1, 1);
  if ( v4[0] == 0 )
    return -1;
  v1 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  if ( v1 == 0 )
    return -1;
  if ( (*(int (**)(uint32_t))(*(uint32_t *)v1 + 24))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124)) != -1 )
    return 0;
  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 1;
  sub_1911E40(v3);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916790  (binary VA: 0x1916790)
// Original: sub_1916790
// ----------------------------------------------------------------------------
int * sub_1916790(int *a1)
{
  int v1;
  char *v2;
  uint32_t *v3;
  unsigned int v4;
  int v5;
  typedef int64_t _g4_t_v7;
  typedef int64_t _g4_t_v8;
  typedef uint8_t _g4_t_v9[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v9)) > _g4_s2 ? (31u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 31u);

  v1 = *a1;
  a1[1] = 0;
  LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v1 - 12));
  HIDWORD(v7) = *(uint32_t *)(v7 + 20) & 0xFFFFFFFD;
  sub_1911E40(v7);
  sub_19163C0(v9, a1, 1);
  if ( v9[0] == 0 )
    return a1;
  v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v3 = *((uint32_t **)v2 + 31);
  if ( v3 != nullptr )
  {
    v4 = v3[2];
    if ( v3[1] >= v4 )
    {
      v5 = G4_VCALL<int>(v3, 44, -1);
    }
    else
    {
      v3[2] = v4 - 4;
      v5 = *(uint32_t *)(v4 - 4);
    }
    if ( v5 != -1 )
      return a1;
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  }
  LODWORD(v8) = (uint32_t)(uintptr_t)(v2);
  HIDWORD(v8) = *((uint32_t *)v2 + 5) | 1;
  sub_1911E40(v8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19168C0  (binary VA: 0x19168c0)
// Original: sub_19168C0
// ----------------------------------------------------------------------------
int * sub_19168C0(int *a1, int a2)
{
  int v2;
  char *v3;
  uint32_t *v4;
  unsigned int v5;
  int v6;
  typedef int64_t _g4_t_v8;
  typedef int64_t _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v9)) > _g4_s1 ? (0u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v10)) > _g4_s2 ? (31u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);

  v2 = *a1;
  a1[1] = 0;
  LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v2 - 12));
  HIDWORD(v8) = *(uint32_t *)(v8 + 20) & 0xFFFFFFFD;
  sub_1911E40(v8);
  sub_19163C0(&v10, a1, 1);
  if ( v10 == 0 )
    return a1;
  v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v4 = *((uint32_t **)v3 + 31);
  if ( v4 == nullptr )
  {
LABEL_9:
    LODWORD(v9) = (uint32_t)(uintptr_t)(v3);
    HIDWORD(v9) = *((uint32_t *)v3 + 5) | 1;
    sub_1911E40(v9);
    return a1;
  }
  v5 = v4[2];
  if ( v4[1] < v5 && a2 == *(uint32_t *)(v5 - 4) )
  {
    v4[2] = v5 - 4;
    v6 = a2;
  }
  else
  {
    v6 = G4_VCALL<int>(v4, 44, a2);
  }
  if ( v6 == -1 )
  {
    v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    goto LABEL_9;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916A00  (binary VA: 0x1916a00)
// Original: sub_1916A00
// ----------------------------------------------------------------------------
int sub_1916A00(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  typedef int64_t _g4_t_v6;
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v7)) > _g4_s1 ? (31u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(&v7, a1, 1);
  if ( v7 == 0 )
    return a1[1];
  v3 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v4 = (v3[3] - v3[2]) >> 2;
  if ( v4 != 0 )
  {
    if ( v4 > 0 )
    {
LABEL_4:
      if ( v4 > a3 )
        v4 = a3;
      a1[1] = (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124) + 32))(
                *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124),
                a2,
                v4);
      return a1[1];
    }
  }
  else
  {
    v4 = (*(int (**)(uint32_t))(*v3 + 28))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124));
    if ( v4 > 0 )
      goto LABEL_4;
  }
  if ( v4 == -1 )
  {
    LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v6) = *(uint32_t *)(v6 + 20) | 2;
    sub_1911E40(v6);
  }
  return a1[1];
}

// ----------------------------------------------------------------------------
// Function: sub_1916B40  (binary VA: 0x1916b40)
// Original: sub_1916B40
// ----------------------------------------------------------------------------
uint32_t * sub_1916B40(uint32_t *a1, int a2, int a3)
{
  int v4;
  typedef int64_t _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v6)) > _g4_s1 ? (31u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(&v6, a1, 1);
  if ( v6 != 0 )
  {
    v4 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124) + 32))(
           *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124),
           a2,
           a3);
    a1[1] = v4;
    if ( a3 != v4 )
    {
      LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v5) = *(uint32_t *)(v5 + 20) | 6;
      sub_1911E40(v5);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916C50  (binary VA: 0x1916c50)
// Original: sub_1916C50
// ----------------------------------------------------------------------------
int sub_1916C50(uint32_t *a1)
{
  int result;
  uint32_t *v2;
  int *v3;
  typedef int64_t _g4_t_v4;
  typedef uint8_t _g4_t_v5[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (47u + sizeof(_g4_t_v5)) > _g4_s1 ? (47u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 47u);

  a1[1] = 0;
  sub_19163C0(v5, a1, 1);
  result = -1;
  if ( v5[0] != 0 )
  {
    v2 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v3 = (int *)v2[2];
    if ( (unsigned int)(uintptr_t)(v3) >= v2[3] )
      result = (*(int (**)(uint32_t))(*v2 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124));
    else
      result = *v3;
    if ( result == -1 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 2;
      sub_1911E40(v4);
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1916D60  (binary VA: 0x1916d60)
// Original: sub_1916D60
// ----------------------------------------------------------------------------
uint32_t * sub_1916D60(uint32_t *a1)
{
  uint32_t *v2;
  int *v3;
  int v4;
  typedef int64_t _g4_t_v5;
  typedef uint8_t _g4_t_v6[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v6)) > _g4_s1 ? (31u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(v6, a1, 1);
  if ( v6[0] == 0 )
    return a1;
  v2 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v3 = (int *)v2[2];
  if ( (unsigned int)(uintptr_t)(v3) >= v2[3] )
  {
    v4 = G4_VCALL<int>(v2, 40);
  }
  else
  {
    v4 = *v3;
    v2[2] = (uint32_t)(uintptr_t)(v3 + 1);
  }
  if ( v4 == -1 )
  {
    LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v5) = *(uint32_t *)(v5 + 20) | 2;
    sub_1911E40(v5);
  }
  else
  {
    a1[1] = 1;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1916E90  (binary VA: 0x1916e90)
// Original: sub_1916E90
// ----------------------------------------------------------------------------
uint32_t * sub_1916E90(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  uint32_t *v5;
  int *v6;
  int i;
  int *v8;
  int v9;
  int *v10;
  int v11;
  typedef int64_t _g4_t_v12;
  typedef uint8_t _g4_t_v13[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v13)) > _g4_s1 ? (31u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(v13, a1, 1);
  v3 = 0;
  if ( v13[0] != 0 )
  {
    v5 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v6 = (int *)v5[2];
    if ( (unsigned int)(uintptr_t)(v6) >= v5[3] )
      goto LABEL_18;
LABEL_8:
    for ( i = *v6; i != -1; i = G4_VCALL<int>(v5, 36) )
    {
      if ( a3 == i
        || ((unsigned int)(uintptr_t)(v8 = (int *)a2[5]) >= a2[6]
          ? (v9 = G4_VCALL<int>(a2, 52, i))
          : (*v8 = i, a2[5] = (uint32_t)(uintptr_t)(v8 + 1), v9 = i),
            v9 == -1) )
      {
        v3 = 0;
        goto LABEL_2;
      }
      v10 = (int *)v5[2];
      ++a1[1];
      if ( (unsigned int)(uintptr_t)(v10) >= v5[3] )
      {
        v11 = G4_VCALL<int>(v5, 40);
      }
      else
      {
        v11 = *v10;
        v5[2] = (uint32_t)(uintptr_t)(v10 + 1);
      }
      if ( v11 == -1 )
        break;
      v6 = (int *)v5[2];
      if ( (unsigned int)(uintptr_t)(v6) < v5[3] )
        goto LABEL_8;
LABEL_18:
      ;
    }
    v3 = 2;
  }
LABEL_2:
  if ( a1[1] == 0 )
  {
    v3 |= 4u;
LABEL_4:
    LODWORD(v12) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v12) = *(uint32_t *)(v12 + 20) | v3;
    sub_1911E40(v12);
    return a1;
  }
  if ( v3 != 0 )
    goto LABEL_4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917050  (binary VA: 0x1917050)
// Original: sub_1917050
// ----------------------------------------------------------------------------
uint32_t * sub_1917050(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;

  v2 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
  if ( v2 == 0 )
    sub_18FFF30();
  v3 = G4_VCALL<int>(v2, 40, 10);
  return sub_1916E90(a1, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19170C0  (binary VA: 0x19170c0)
// Original: sub_19170C0
// ----------------------------------------------------------------------------
uint32_t * sub_19170C0(uint32_t *a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v7;
  int *v8;
  int v9;
  int v10;
  int *v11;
  bool v12;
  int v13;
  typedef int64_t _g4_t_v14;
  typedef uint8_t _g4_t_v15[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v15)) > _g4_s1 ? (31u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(v15, a1, 1);
  if ( v15[0] != 0 )
  {
    v7 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v8 = (int *)v7[2];
    if ( (unsigned int)(uintptr_t)(v8) >= v7[3] )
      goto LABEL_19;
LABEL_11:
    v9 = *v8;
    while ( 1 )
    {
      v4 = a1[1];
      v10 = v4 + 1;
      if ( v4 + 1 >= a3 )
        break;
      if ( v9 == -1 )
        goto LABEL_22;
      if ( v9 == a4 )
        goto LABEL_21;
      *a2++ = v9;
      v11 = (int *)v7[2];
      v12 = (unsigned int)(uintptr_t)(v11) < v7[3];
      a1[1] = v10;
      if ( v12 )
      {
        v13 = *v11;
        v7[2] = (uint32_t)(uintptr_t)(v11 + 1);
      }
      else
      {
        v13 = G4_VCALL<int>(v7, 40);
      }
      if ( v13 == -1 )
      {
        v9 = -1;
      }
      else
      {
        v8 = (int *)v7[2];
        if ( (unsigned int)(uintptr_t)(v8) < v7[3] )
          goto LABEL_11;
LABEL_19:
        v9 = G4_VCALL<int>(v7, 36);
      }
    }
    if ( v9 != -1 )
    {
LABEL_21:
      v5 = 0;
      goto LABEL_3;
    }
LABEL_22:
    v5 = 2;
  }
  else
  {
    v4 = a1[1];
    v5 = 0;
  }
LABEL_3:
  if ( a3 > 0 )
    *a2 = 0;
  if ( v4 == 0 )
  {
    v5 |= 4u;
LABEL_7:
    LODWORD(v14) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v14) = *(uint32_t *)(v14 + 20) | v5;
    sub_1911E40(v14);
    return a1;
  }
  if ( v5 != 0 )
    goto LABEL_7;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917250  (binary VA: 0x1917250)
// Original: sub_1917250
// ----------------------------------------------------------------------------
uint32_t * sub_1917250(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;

  v3 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
  if ( v3 == 0 )
    sub_18FFF30();
  v4 = G4_VCALL<int>(v3, 40, 10);
  return sub_19170C0(a1, a2, a3, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_19172B0  (binary VA: 0x19172b0)
// Original: sub_19172B0
// ----------------------------------------------------------------------------
uint32_t * sub_19172B0(uint32_t *a1, int *a2)
{
  int v2;
  int v3;
  uint32_t *v5;
  int *v6;
  int v7;
  typedef int64_t _g4_t_v8;
  typedef uint8_t _g4_t_v9[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v9)) > _g4_s1 ? (31u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(v9, a1, 1);
  if ( v9[0] != 0 )
  {
    v5 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v6 = (int *)v5[2];
    if ( (unsigned int)(uintptr_t)(v6) >= v5[3] )
    {
      v7 = G4_VCALL<int>(v5, 40);
    }
    else
    {
      v7 = *v6;
      v5[2] = (uint32_t)(uintptr_t)(v6 + 1);
    }
    if ( v7 != -1 )
    {
      a1[1] = 1;
      *a2 = v7;
      return a1;
    }
    v2 = a1[1];
    v3 = 2;
  }
  else
  {
    v2 = a1[1];
    v3 = 0;
  }
  if ( v2 == 0 )
  {
    v3 |= 4u;
LABEL_5:
    LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v8) = *(uint32_t *)(v8 + 20) | v3;
    sub_1911E40(v8);
    return a1;
  }
  if ( v3 != 0 )
    goto LABEL_5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19173F0  (binary VA: 0x19173f0)
// Original: sub_19173F0
// ----------------------------------------------------------------------------
int sub_19173F0(uint32_t *a1)
{
  int v1;
  int result;
  uint32_t *v3;
  int *v4;
  typedef int64_t _g4_t_v5;
  typedef uint8_t _g4_t_v6[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v6)) > _g4_s1 ? (31u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  a1[1] = 0;
  sub_19163C0(v6, a1, 1);
  v1 = 0;
  if ( v6[0] != 0 )
  {
    v3 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v4 = (int *)v3[2];
    if ( (unsigned int)(uintptr_t)(v4) >= v3[3] )
    {
      result = G4_VCALL<int>(v3, 40);
    }
    else
    {
      result = *v4;
      v3[2] = (uint32_t)(uintptr_t)(v4 + 1);
    }
    if ( result != -1 )
    {
      a1[1] = 1;
      return result;
    }
    v1 = 2;
  }
  if ( a1[1] == 0 )
  {
    v1 |= 4u;
LABEL_4:
    LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v5) = *(uint32_t *)(v5 + 20) | v1;
    sub_1911E40(v5);
    return -1;
  }
  if ( v1 != 0 )
    goto LABEL_4;
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917520  (binary VA: 0x1917520)
// Original: sub_1917520
// ----------------------------------------------------------------------------
uint32_t * sub_1917520(uint32_t *a1, int a2)
{
  int v2;
  typedef int64_t _g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v5)) > _g4_s1 ? (30u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v6)) > _g4_s2 ? (31u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 30u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  sub_19163C0(&v5, a1, 0);
  if ( v5 != 0 )
  {
    if ( a2 != 0 )
    {
      v2 = sub_1954010(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124), a2, &v6) == 0 ? 4 : 0;
      if ( v6 != 0 )
      {
        v2 |= 2u;
      }
      else if ( v2 == 0 )
      {
        return a1;
      }
      goto LABEL_5;
    }
  }
  else if ( a2 != 0 )
  {
    return a1;
  }
  v2 = 4;
LABEL_5:
  LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v2;
  sub_1911E40(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917640  (binary VA: 0x1917640)
// Original: sub_1917640
// ----------------------------------------------------------------------------
int * sub_1917640(int *a1, uint32_t *a2)
{
  int v2;
  int v3;
  typedef int64_t _g4_t_v5 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v6[15];
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v6)) > _g4_s1 ? (60u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (75u + sizeof(_g4_t_v7)) > _g4_s2 ? (75u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v8)) > _g4_s3 ? (76u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v9)) > _g4_s4 ? (80u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 60u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 75u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 76u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 80u);

  sub_19163C0(&v7, a1, 0);
  if ( v7 != 0 )
  {
    v2 = *a1;
    v8 = 0;
    v3 = *(int *)((char *)a1 + *(uint32_t *)(v2 - 12) + 136);
    if ( v3 == 0 )
      sub_18FFF30();
    {
      char *g4_ios = (char *)a1 + *(uint32_t *)(v2 - 12);
      (*(void (**)(uint8_t *, int, uint32_t, int, int, int, char *, int *, int *))(*(uint32_t *)v3 + 12))(
        v6, v3, *((uint32_t *)g4_ios + 31), -1, 0, -1, g4_ios, &v8, &v9);
    }
    *a2 = v9;
    if ( v8 != 0 )
    {
      LODWORD(v5) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v5) = *(uint32_t *)(v5 + 20) | v8;
      sub_1911E40(v5);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19177A0  (binary VA: 0x19177a0)
// Original: sub_19177A0
// ----------------------------------------------------------------------------
int * sub_19177A0(int *a1, uint16_t *a2)
{
  int v2;
  int v3;
  int v4;
  typedef int64_t _g4_t_v6 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v7[15];
  typedef char _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v7)) > _g4_s1 ? (60u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (75u + sizeof(_g4_t_v8)) > _g4_s2 ? (75u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v9)) > _g4_s3 ? (76u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v10)) > _g4_s4 ? (80u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 60u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 75u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 76u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 80u);

  sub_19163C0(&v8, a1, 0);
  if ( v8 != 0 )
  {
    v2 = *a1;
    v9 = 0;
    v3 = *(int *)((char *)a1 + *(uint32_t *)(v2 - 12) + 136);
    if ( v3 == 0 )
      sub_18FFF30();
    {
      char *g4_ios = (char *)a1 + *(uint32_t *)(v2 - 12);
      (*(void (**)(uint8_t *, int, uint32_t, int, int, int, char *, int *, int *))(*(uint32_t *)v3 + 12))(
        v7, v3, *((uint32_t *)g4_ios + 31), -1, 0, -1, g4_ios, &v9, &v10);
    }
    if ( v10 >= -32768 )
    {
      if ( v10 > 0x7FFF )
      {
        v4 = v9 | 4;
        v9 |= 4u;
        *a2 = 0x7FFF;
      }
      else
      {
        *a2 = v10;
        v4 = v9;
        if ( v9 == 0 )
          return a1;
      }
    }
    else
    {
      v4 = v9 | 4;
      v9 |= 4u;
      *a2 = 0x8000;
    }
    LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v6) = *(uint32_t *)(v6 + 20) | v4;
    sub_1911E40(v6);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917950  (binary VA: 0x1917950)
// Original: sub_1917950
// ----------------------------------------------------------------------------
uint32_t * sub_1917950(uint32_t *a1)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef char _g4_t_v5;
  typedef uint32_t _g4_t_v6[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (55u + sizeof(_g4_t_v5)) > _g4_s2 ? (55u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v6)) > _g4_s3 ? (56u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 55u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 56u);

  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v3) = *(uint32_t *)(v3 + 20) & 0xFFFFFFFD;
  sub_1911E40(v3);
  sub_19163C0(&v5, a1, 1);
  if ( v5 != 0 )
  {
    v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    if ( (v1[20] & 5) == 0 )
    {
      (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v1 + 31) + 16))(v6, *((uint32_t **)v1 + 31), (int64_t)0, 0, 8);
      if ( (v6[1] & v6[0]) == -1 )
      {
        LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 4;
        sub_1911E40(v4);
      }
    }
  }
  return a1;
}

uint32_t *g4_sub_1917950(uint32_t *a1, int a2, int a3, int a4)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef char _g4_t_v5;
  typedef uint32_t _g4_t_v6[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (55u + sizeof(_g4_t_v5)) > _g4_s2 ? (55u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v6)) > _g4_s3 ? (56u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 55u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 56u);

  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v3) = *(uint32_t *)(v3 + 20) & 0xFFFFFFFD;
  sub_1911E40(v3);
  sub_19163C0(&v5, a1, 1);
  if ( v5 != 0 )
  {
    v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    if ( (v1[20] & 5) == 0 )
    {
      (*(void (**)(uint32_t *, uint32_t *, int, int, int, int))(**((uint32_t **)v1 + 31) + 16))(v6, *((uint32_t **)v1 + 31), a2, a3, a4, 8);
      if ( (v6[1] & v6[0]) == -1 )
      {
        LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 4;
        sub_1911E40(v4);
      }
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917AB0  (binary VA: 0x1917ab0)
// Original: sub_1917AB0
// ----------------------------------------------------------------------------
uint32_t * sub_1917AB0(uint32_t *a1, int a2, int a3, int a4)
{
  char *v4;
  int v6;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef char _g4_t_v9;
  typedef uint32_t _g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (43u + sizeof(_g4_t_v9)) > _g4_s2 ? (43u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v10)) > _g4_s3 ? (44u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 43u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
  HIDWORD(v7) = *(uint32_t *)(v7 + 20) & 0xFFFFFFFD;
  sub_1911E40(v7);
  sub_19163C0(&v9, a1, 1);
  if ( v9 != 0 )
  {
    v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    if ( (v4[20] & 5) == 0 )
    {
      v6 = *((uint32_t *)v4 + 31);
      v10[3] = a2;
      v10[4] = a3;
      v10[5] = a4;
      (*(void (**)(uint32_t *, int, int, int, int, int))(*(uint32_t *)v6 + 20))(v10, v6, a2, a3, a4, 8);
      if ( (v10[1] & v10[0]) == -1 )
      {
        LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 4;
        sub_1911E40(v8);
      }
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917C30  (binary VA: 0x1917c30)
// Original: sub_1917C30
// ----------------------------------------------------------------------------
uint32_t * sub_1917C30(uint32_t *a1)
{
  int v1;
  uint32_t *v2;
  int *v3;
  int i;
  int *v6;
  int v7;
  typedef int64_t _g4_t_v8;
  typedef volatile int32_t *_g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v9)) > _g4_s1 ? (44u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  sub_1901AC0(v9, (volatile int32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 108));
  v1 = (int)(uintptr_t)(sub_193EB50(v9));
  sub_1902180(v9);
  v2 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v3 = (int *)v2[2];
  if ( (unsigned int)(uintptr_t)(v3) >= v2[3] )
    goto LABEL_10;
LABEL_2:
  for ( i = *v3; ; i = G4_VCALL<int>(v2, 36) )
  {
    if ( i == -1 )
    {
LABEL_4:
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 2;
      sub_1911E40(v8);
      return a1;
    }
    if ( G4_VCALL<uint8_t>(v1, 8, 8, i) == 0 )
      break;
    v6 = (int *)v2[2];
    if ( (unsigned int)(uintptr_t)(v6) >= v2[3] )
    {
      v7 = G4_VCALL<int>(v2, 40);
    }
    else
    {
      v7 = *v6;
      v2[2] = (uint32_t)(uintptr_t)(v6 + 1);
    }
    if ( v7 == -1 )
      goto LABEL_4;
    v3 = (int *)v2[2];
    if ( (unsigned int)(uintptr_t)(v3) < v2[3] )
      goto LABEL_2;
LABEL_10:
    ;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917D40  (binary VA: 0x1917d40)
// Original: sub_1917D40
// ----------------------------------------------------------------------------
uint32_t * sub_1917D40(uint32_t *a1, int *a2)
{
  uint32_t *v3;
  int *v4;
  int v5;
  typedef int64_t _g4_t_v6;
  typedef uint8_t _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v7)) > _g4_s1 ? (31u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);

  sub_19163C0(v7, a1, 0);
  if ( v7[0] == 0 )
    return a1;
  v3 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v4 = (int *)v3[2];
  if ( (unsigned int)(uintptr_t)(v4) >= v3[3] )
  {
    v5 = G4_VCALL<int>(v3, 40);
  }
  else
  {
    v5 = *v4;
    v3[2] = (uint32_t)(uintptr_t)(v4 + 1);
  }
  if ( v5 == -1 )
  {
    LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v6) = *(uint32_t *)(v6 + 20) | 6;
    sub_1911E40(v6);
  }
  else
  {
    *a2 = v5;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1917E70  (binary VA: 0x1917e70)
// Original: sub_1917E70
// ----------------------------------------------------------------------------
uint32_t * sub_1917E70(uint32_t *a1, int *a2)
{
  int v2;
  char *v4;
  int v5;
  uint32_t *v6;
  int *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  typedef int64_t _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef volatile int32_t *_g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (43u + sizeof(_g4_t_v16)) > _g4_s3 ? (43u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 43u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  sub_19163C0(&v16, a1, 0);
  v2 = 4;
  if ( v16 == 0 )
    goto LABEL_2;
  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v5 = *((uint32_t *)v4 + 2);
  if ( v5 <= 0 )
    v5 = 0x7FFFFFFF;
  sub_1901AC0(v17, (volatile int32_t **)v4 + 27);
  v14 = (int)(uintptr_t)(sub_193EB50(v17));
  sub_1902180(v17);
  v6 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v7 = (int *)v6[2];
  if ( (unsigned int)(uintptr_t)(v7) >= v6[3] )
    v8 = (*(int (**)(uint32_t))(*v6 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124));
  else
    v8 = *v7;
  v15 = v5 - 1;
  v9 = 0;
  while ( v9 < v15 )
  {
    if ( v8 == -1 )
      goto LABEL_10;
    if ( G4_VCALL<uint8_t>(v14, 8, 8, v8) != 0 )
      goto LABEL_21;
    ++v9;
    v10 = (int *)v6[2];
    *a2++ = v8;
    if ( (unsigned int)(uintptr_t)(v10) >= v6[3] )
    {
      v11 = G4_VCALL<int>(v6, 40);
    }
    else
    {
      v11 = *v10;
      v6[2] = (uint32_t)(uintptr_t)(v10 + 1);
    }
    if ( v11 == -1 )
    {
      v8 = -1;
    }
    else
    {
      v12 = (int *)v6[2];
      if ( (unsigned int)(uintptr_t)(v12) >= v6[3] )
        v8 = G4_VCALL<int>(v6, 36);
      else
        v8 = *v12;
    }
  }
  if ( v8 == -1 )
  {
LABEL_10:
    v2 = 2;
    goto LABEL_11;
  }
LABEL_21:
  v2 = 0;
LABEL_11:
  *a2 = 0;
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 8) = 0;
  if ( v9 == 0 )
  {
    v2 |= 4u;
    goto LABEL_2;
  }
  if ( v2 != 0 )
  {
LABEL_2:
    LODWORD(v13) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v13) = *(uint32_t *)(v13 + 20) | v2;
    sub_1911E40(v13);
    return a1;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19180D0  (binary VA: 0x19180d0)
// Original: sub_19180D0
// ----------------------------------------------------------------------------
uint32_t * sub_19180D0(uint32_t *a1, int a2)
{
  char *v2;
  int v4;

  v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( v2[120] == 0 )
  {
    v4 = *((uint32_t *)v2 + 32);
    if ( v4 == 0 )
      sub_18FFF30();
    *((uint32_t *)v2 + 29) = G4_VCALL<int>(v4, 40, 32);
    v2[120] = 1;
  }
  *((uint32_t *)v2 + 29) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918140  (binary VA: 0x1918140)
// Original: sub_1918140
// ----------------------------------------------------------------------------
uint32_t * sub_1918140(uint32_t *a1, int a2)
{
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918180  (binary VA: 0x1918180)
// Original: sub_1918180
// ----------------------------------------------------------------------------
uint32_t * sub_1918180(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;

  result = a1;
  v3 = 64;
  if ( a2 != 8 )
  {
    LOBYTE(v3) = 2;
    if ( a2 != 10 )
      v3 = 8 * (a2 == 16);
  }
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) = v3
                                                       | *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12)
                                                       & 0xFFFFFFB5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1918200  (binary VA: 0x1918200)
// Original: sub_1918200
// ----------------------------------------------------------------------------
int * sub_1918200(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 16))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918370  (binary VA: 0x1918370)
// Original: sub_1918370
// ----------------------------------------------------------------------------
int * sub_1918370(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 20))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19184E0  (binary VA: 0x19184e0)
// Original: sub_19184E0
// ----------------------------------------------------------------------------
int * sub_19184E0(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 12))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918650  (binary VA: 0x1918650)
// Original: sub_1918650
// ----------------------------------------------------------------------------
int * sub_1918650(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 24))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19187C0  (binary VA: 0x19187c0)
// Original: sub_19187C0
// ----------------------------------------------------------------------------
int * sub_19187C0(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 8))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918930  (binary VA: 0x1918930)
// Original: sub_1918930
// ----------------------------------------------------------------------------
int * sub_1918930(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 28))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918AA0  (binary VA: 0x1918aa0)
// Original: sub_1918AA0
// ----------------------------------------------------------------------------
int * sub_1918AA0(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 32))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918C10  (binary VA: 0x1918c10)
// Original: sub_1918C10
// ----------------------------------------------------------------------------
int * sub_1918C10(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 36))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918D80  (binary VA: 0x1918d80)
// Original: sub_1918D80
// ----------------------------------------------------------------------------
int * sub_1918D80(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 40))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1918EF0  (binary VA: 0x1918ef0)
// Original: sub_1918EF0
// ----------------------------------------------------------------------------
int * sub_1918EF0(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 44))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919060  (binary VA: 0x1919060)
// Original: sub_1919060
// ----------------------------------------------------------------------------
int * sub_1919060(int *a1)
{
  int v1;
  int v2;
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[19];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v5)) > _g4_s1 ? (60u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (79u + sizeof(_g4_t_v6)) > _g4_s2 ? (79u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v7)) > _g4_s3 ? (80u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 79u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  sub_19163C0(&v6, a1, 0);
  if ( v6 != 0 )
  {
    v1 = *a1;
    v7 = 0;
    v2 = *(int *)((char *)a1 + *(uint32_t *)(v1 - 12) + 136);
    if ( v2 == 0 )
      sub_18FFF30();
    (*(void (**)(uint8_t *))(*(uint32_t *)v2 + 48))(v5);
    if ( v7 != 0 )
    {
      LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v4) = *(uint32_t *)(v4 + 20) | v7;
      sub_1911E40(v4);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19191D0  (binary VA: 0x19191d0)
// Original: sub_19191D0
// ----------------------------------------------------------------------------
int sub_19191D0(int a1)
{
  return *(uint8_t *)(*(uint32_t *)(a1 + 8) + 17);
}

// ----------------------------------------------------------------------------
// Function: sub_19191E0  (binary VA: 0x19191e0)
// Original: sub_19191E0
// ----------------------------------------------------------------------------
int sub_19191E0(int a1)
{
  return *(uint8_t *)(*(uint32_t *)(a1 + 8) + 18);
}

// ----------------------------------------------------------------------------
// Function: sub_19191F0  (binary VA: 0x19191f0)
// Original: sub_19191F0
// ----------------------------------------------------------------------------
int sub_19191F0(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 44);
}

// ----------------------------------------------------------------------------
// Function: sub_1919200  (binary VA: 0x1919200)
// Original: sub_1919200
// ----------------------------------------------------------------------------
uint32_t * sub_1919200(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 48);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919220  (binary VA: 0x1919220)
// Original: sub_1919220
// ----------------------------------------------------------------------------
uint32_t * sub_1919220(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 52);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919240  (binary VA: 0x1919240)
// Original: sub_1919240
// ----------------------------------------------------------------------------
int sub_1919240(int a1)
{
  return *(uint8_t *)(*(uint32_t *)(a1 + 8) + 17);
}

// ----------------------------------------------------------------------------
// Function: sub_1919250  (binary VA: 0x1919250)
// Original: sub_1919250
// ----------------------------------------------------------------------------
int sub_1919250(int a1)
{
  return *(uint8_t *)(*(uint32_t *)(a1 + 8) + 18);
}

// ----------------------------------------------------------------------------
// Function: sub_1919260  (binary VA: 0x1919260)
// Original: sub_1919260
// ----------------------------------------------------------------------------
int sub_1919260(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 44);
}

// ----------------------------------------------------------------------------
// Function: sub_1919270  (binary VA: 0x1919270)
// Original: sub_1919270
// ----------------------------------------------------------------------------
uint32_t * sub_1919270(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 48);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919290  (binary VA: 0x1919290)
// Original: sub_1919290
// ----------------------------------------------------------------------------
uint32_t * sub_1919290(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 52);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19192B0  (binary VA: 0x19192b0)
// Original: sub_19192B0
// ----------------------------------------------------------------------------
int sub_19192B0(int a1)
{
  return *(uint8_t *)(*(uint32_t *)(a1 + 8) + 36);
}

// ----------------------------------------------------------------------------
// Function: sub_19192C0  (binary VA: 0x19192c0)
// Original: sub_19192C0
// ----------------------------------------------------------------------------
int sub_19192C0(int a1)
{
  return *(uint8_t *)(*(uint32_t *)(a1 + 8) + 37);
}

// ----------------------------------------------------------------------------
// Function: sub_19192D0  (binary VA: 0x19192d0)
// Original: sub_19192D0
// ----------------------------------------------------------------------------
int sub_19192D0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19192E0  (binary VA: 0x19192e0)
// Original: sub_19192E0
// ----------------------------------------------------------------------------
int sub_19192E0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19192F0  (binary VA: 0x19192f0)
// Original: sub_19192F0
// ----------------------------------------------------------------------------
void sub_19192F0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1919300  (binary VA: 0x1919300)
// Original: sub_1919300
// ----------------------------------------------------------------------------
int sub_1919300(int a1, char *a2, char *a3)
{
  char *v3;
  int result;
  int v5;

  v3 = a2;
  result = 0;
  if ( a2 < a3 )
  {
    do
    {
      v5 = *v3++;
      result = v5 + __builtin_rotateleft32(result, 7);
    }
    while ( v3 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1919330  (binary VA: 0x1919330)
// Original: sub_1919330
// ----------------------------------------------------------------------------
uint32_t * sub_1919330(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA968);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919360  (binary VA: 0x1919360)
// Original: sub_1919360
// ----------------------------------------------------------------------------
uint32_t * sub_1919360(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAB88);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919390  (binary VA: 0x1919390)
// Original: sub_1919390
// ----------------------------------------------------------------------------
uint32_t * sub_1919390(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAAC8);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19193C0  (binary VA: 0x19193c0)
// Original: sub_19193C0
// ----------------------------------------------------------------------------
uint32_t * sub_19193C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA90);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19193F0  (binary VA: 0x19193f0)
// Original: sub_19193F0
// ----------------------------------------------------------------------------
uint32_t * sub_19193F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA898);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919420  (binary VA: 0x1919420)
// Original: sub_1919420
// ----------------------------------------------------------------------------
uint32_t * sub_1919420(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA868);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919450  (binary VA: 0x1919450)
// Original: sub_1919450
// ----------------------------------------------------------------------------
uint32_t * sub_1919450(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA828);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919480  (binary VA: 0x1919480)
// Original: sub_1919480
// ----------------------------------------------------------------------------
uint32_t * sub_1919480(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA78);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19194B0  (binary VA: 0x19194b0)
// Original: sub_19194B0
// ----------------------------------------------------------------------------
uint32_t * sub_19194B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA60);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19194E0  (binary VA: 0x19194e0)
// Original: sub_19194E0
// ----------------------------------------------------------------------------
void sub_19194E0(uint32_t *a1)
{
  sub_19193F0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919520  (binary VA: 0x1919520)
// Original: sub_1919520
// ----------------------------------------------------------------------------
uint32_t * sub_1919520(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  sub_1908860(a1 + 2);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919580  (binary VA: 0x1919580)
// Original: sub_1919580
// ----------------------------------------------------------------------------
uint32_t * sub_1919580(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA940);
  sub_1908860(a1 + 2);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19195E0  (binary VA: 0x19195e0)
// Original: sub_19195E0
// ----------------------------------------------------------------------------
uint32_t * sub_19195E0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAB30);
  return sub_1919580(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919600  (binary VA: 0x1919600)
// Original: sub_1919600
// ----------------------------------------------------------------------------
void sub_1919600(uint32_t *a1)
{
  sub_1919580(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919640  (binary VA: 0x1919640)
// Original: sub_1919640
// ----------------------------------------------------------------------------
uint32_t * sub_1919640(int a1)
{
  bool v1;

  v1 = *(uint8_t *)(a1 + 100) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAB70);
  if ( !v1 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      opDeleteArray(*(void **)(a1 + 8));
    if ( *(uint32_t *)(a1 + 20) != 0 )
      opDeleteArray(*(void **)(a1 + 20));
    if ( *(uint32_t *)(a1 + 28) != 0 )
      opDeleteArray(*(void **)(a1 + 28));
  }
  return (uint32_t *)(uintptr_t)(sub_1901990((uint32_t *)a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19196B0  (binary VA: 0x19196b0)
// Original: sub_19196B0
// ----------------------------------------------------------------------------
void sub_19196B0(void *a1)
{
  sub_1919640((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19196F0  (binary VA: 0x19196f0)
// Original: sub_19196F0
// ----------------------------------------------------------------------------
uint32_t * sub_19196F0(int a1)
{
  bool v1;

  v1 = *(uint8_t *)(a1 + 67) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAB60);
  if ( !v1 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      opDeleteArray(*(void **)(a1 + 8));
    if ( *(uint32_t *)(a1 + 20) != 0 )
      opDeleteArray(*(void **)(a1 + 20));
    if ( *(uint32_t *)(a1 + 28) != 0 )
      opDeleteArray(*(void **)(a1 + 28));
    if ( *(uint32_t *)(a1 + 36) != 0 )
      opDeleteArray(*(void **)(a1 + 36));
  }
  return (uint32_t *)(uintptr_t)(sub_1901990((uint32_t *)a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919770  (binary VA: 0x1919770)
// Original: sub_1919770
// ----------------------------------------------------------------------------
void sub_1919770(void *a1)
{
  sub_19196F0((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19197B0  (binary VA: 0x19197b0)
// Original: sub_19197B0
// ----------------------------------------------------------------------------
uint32_t * sub_19197B0(int a1)
{
  bool v1;

  v1 = *(uint8_t *)(a1 + 67) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAB50);
  if ( !v1 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      opDeleteArray(*(void **)(a1 + 8));
    if ( *(uint32_t *)(a1 + 20) != 0 )
      opDeleteArray(*(void **)(a1 + 20));
    if ( *(uint32_t *)(a1 + 28) != 0 )
      opDeleteArray(*(void **)(a1 + 28));
    if ( *(uint32_t *)(a1 + 36) != 0 )
      opDeleteArray(*(void **)(a1 + 36));
  }
  return (uint32_t *)(uintptr_t)(sub_1901990((uint32_t *)a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919830  (binary VA: 0x1919830)
// Original: sub_1919830
// ----------------------------------------------------------------------------
void sub_1919830(void *a1)
{
  sub_19197B0((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919870  (binary VA: 0x1919870)
// Original: sub_1919870
// ----------------------------------------------------------------------------
int sub_1919870(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA9A8);
  return sub_1953560(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19198A0  (binary VA: 0x19198a0)
// Original: sub_19198A0
// ----------------------------------------------------------------------------
uint32_t * sub_19198A0(uint32_t *a1)
{
  char *v1;
  int v2;

  *a1 = (uint32_t)(uintptr_t)(&off_20AA8A8);
  v1 = (char *)a1[4];
  if ( v1 != (char *)(intptr_t)(sub_1902030()) && v1 != nullptr )
    opDeleteArray(v1);
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(a1[2]);
  sub_1908860(a1 + 3);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919930  (binary VA: 0x1919930)
// Original: sub_1919930
// ----------------------------------------------------------------------------
void sub_1919930(uint32_t *a1)
{
  sub_19198A0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919970  (binary VA: 0x1919970)
// Original: sub_1919970
// ----------------------------------------------------------------------------
uint32_t * sub_1919970(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7E8);
  return (uint32_t *)(uintptr_t)(sub_1907AB0(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_19199A0  (binary VA: 0x19199a0)
// Original: sub_19199A0
// ----------------------------------------------------------------------------
int sub_19199A0(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 28), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19199F0  (binary VA: 0x19199f0)
// Original: sub_19199F0
// ----------------------------------------------------------------------------
int sub_19199F0(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 20), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919A40  (binary VA: 0x1919a40)
// Original: sub_1919A40
// ----------------------------------------------------------------------------
int sub_1919A40(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 8), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919A90  (binary VA: 0x1919a90)
// Original: sub_1919A90
// ----------------------------------------------------------------------------
int sub_1919A90(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 36), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919AE0  (binary VA: 0x1919ae0)
// Original: sub_1919AE0
// ----------------------------------------------------------------------------
int sub_1919AE0(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 28), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919B30  (binary VA: 0x1919b30)
// Original: sub_1919B30
// ----------------------------------------------------------------------------
int sub_1919B30(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 20), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919B80  (binary VA: 0x1919b80)
// Original: sub_1919B80
// ----------------------------------------------------------------------------
int sub_1919B80(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 8), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919BD0  (binary VA: 0x1919bd0)
// Original: sub_1919BD0
// ----------------------------------------------------------------------------
int sub_1919BD0(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 36), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919C20  (binary VA: 0x1919c20)
// Original: sub_1919C20
// ----------------------------------------------------------------------------
int sub_1919C20(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 28), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919C70  (binary VA: 0x1919c70)
// Original: sub_1919C70
// ----------------------------------------------------------------------------
int sub_1919C70(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 20), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919CC0  (binary VA: 0x1919cc0)
// Original: sub_1919CC0
// ----------------------------------------------------------------------------
int sub_1919CC0(int a1, int a2)
{
  uint8_t v3[5];

  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 8), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1919D10  (binary VA: 0x1919d10)
// Original: sub_1919D10
// ----------------------------------------------------------------------------
uint32_t * sub_1919D10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA28);
  return (uint32_t *)(uintptr_t)(sub_1907460(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919D40  (binary VA: 0x1919d40)
// Original: sub_1919D40
// ----------------------------------------------------------------------------
uint32_t * sub_1919D40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA9E8);
  return (uint32_t *)(uintptr_t)(sub_1907510(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1919D70  (binary VA: 0x1919d70)
// Original: sub_1919D70
// ----------------------------------------------------------------------------
int sub_1919D70(int a1)
{
  int v2;
  uint32_t *v3;
  int result;
  uint8_t *v5;

  v2 = -1;
  v3 = *(uint32_t **)a1;
  if ( v3 == nullptr )
    return v2;
  if ( *(uint32_t *)(a1 + 4) != -1 )
    return *(uint32_t *)(a1 + 4);
  v5 = (uint8_t *)v3[2];
  if ( (unsigned int)(uintptr_t)(v5) >= v3[3] )
  {
    result = G4_VCALL<int>(v3, 36);
    v2 = 255;
    if ( result == -1 )
    {
      *(uint32_t *)a1 = 0;
      return v2;
    }
  }
  else
  {
    result = *v5;
  }
  *(uint32_t *)(a1 + 4) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1919DD0  (binary VA: 0x1919dd0)
// Original: sub_1919DD0
// ----------------------------------------------------------------------------
void sub_1919DD0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA9E8);
  sub_1907510(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919E10  (binary VA: 0x1919e10)
// Original: sub_1919E10
// ----------------------------------------------------------------------------
void sub_1919E10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA28);
  sub_1907460(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919E50  (binary VA: 0x1919e50)
// Original: sub_1919E50
// ----------------------------------------------------------------------------
void sub_1919E50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA60);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919E90  (binary VA: 0x1919e90)
// Original: sub_1919E90
// ----------------------------------------------------------------------------
void sub_1919E90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA78);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919ED0  (binary VA: 0x1919ed0)
// Original: sub_1919ED0
// ----------------------------------------------------------------------------
void sub_1919ED0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7E8);
  sub_1907AB0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919F10  (binary VA: 0x1919f10)
// Original: sub_1919F10
// ----------------------------------------------------------------------------
void sub_1919F10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA828);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919F50  (binary VA: 0x1919f50)
// Original: sub_1919F50
// ----------------------------------------------------------------------------
void sub_1919F50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA868);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919F90  (binary VA: 0x1919f90)
// Original: sub_1919F90
// ----------------------------------------------------------------------------
void sub_1919F90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA9A8);
  sub_1953560(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1919FD0  (binary VA: 0x1919fd0)
// Original: sub_1919FD0
// ----------------------------------------------------------------------------
void sub_1919FD0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAB30);
  sub_1919580(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A010  (binary VA: 0x191a010)
// Original: sub_191A010
// ----------------------------------------------------------------------------
void sub_191A010(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAB88);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A050  (binary VA: 0x191a050)
// Original: sub_191A050
// ----------------------------------------------------------------------------
void sub_191A050(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA968);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A090  (binary VA: 0x191a090)
// Original: sub_191A090
// ----------------------------------------------------------------------------
void sub_191A090(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA90);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A0D0  (binary VA: 0x191a0d0)
// Original: sub_191A0D0
// ----------------------------------------------------------------------------
void sub_191A0D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA90);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A110  (binary VA: 0x191a110)
// Original: sub_191A110
// ----------------------------------------------------------------------------
uint32_t * sub_191A110(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA90);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191A140  (binary VA: 0x191a140)
// Original: sub_191A140
// ----------------------------------------------------------------------------
void sub_191A140(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAAC8);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A180  (binary VA: 0x191a180)
// Original: sub_191A180
// ----------------------------------------------------------------------------
uint32_t * sub_191A180(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAAC8);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191A1B0  (binary VA: 0x191a1b0)
// Original: sub_191A1B0
// ----------------------------------------------------------------------------
void sub_191A1B0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAAC8);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A1F0  (binary VA: 0x191a1f0)
// Original: sub_191A1F0
// ----------------------------------------------------------------------------
uint32_t * sub_191A1F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  sub_1908860(a1 + 2);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191A250  (binary VA: 0x191a250)
// Original: sub_191A250
// ----------------------------------------------------------------------------
void sub_191A250(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  sub_1908860(a1 + 2);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A2C0  (binary VA: 0x191a2c0)
// Original: sub_191A2C0
// ----------------------------------------------------------------------------
void sub_191A2C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  sub_1908860(a1 + 2);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191A330  (binary VA: 0x191a330)
// Original: sub_191A330
// ----------------------------------------------------------------------------
int sub_191A330(int a1, uint8_t *a2, uint8_t *a3, uint8_t *a4, uint8_t *a5)
{
  char *s;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  int result;
  char *v11;
  char *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  sub_119F570(&v16, a2, a3);
  sub_119F570(&v17, a4, a5);
  s = v16;
  v6 = v17;
  v7 = &v17[*((uint32_t *)v17 - 3)];
  v15 = &v16[*((uint32_t *)v16 - 3)];
  while ( 1 )
  {
    result = sub_19543D0(a1, s, v6);
    if ( result != 0 )
      break;
    v8 = &s[strlen(s)];
    v9 = &v6[strlen(v6)];
    if ( v9 == v7 )
    {
      result = v8 != v15;
      break;
    }
    if ( v8 == v15 )
    {
      result = -1;
      break;
    }
    s = v8 + 1;
    v6 = v9 + 1;
  }
  v11 = v17 - 12;
  if ( v17 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v17 - 1, 0xFFFFFFFF) <= 0 )
  {
    v13 = result;
    g4_std::string::Rep::M_destroy(v11);
    result = v13;
  }
  v12 = v16 - 12;
  if ( v16 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v16 - 1, 0xFFFFFFFF) <= 0 )
  {
    v14 = result;
    g4_std::string::Rep::M_destroy(v12);
    return v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191A490  (binary VA: 0x191a490)
// Original: sub_191A490
// ----------------------------------------------------------------------------
int * sub_191A490(int *a1, int a2, uint8_t *a3, uint8_t *a4)
{
  char *s;
  char *v5;
  int v6;
  int v7;
  int v8;
  size_t v9;
  char *v10;
  void *v11;
  typedef unsigned int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint16_t _g4_t_v16[17];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (26u + sizeof(_g4_t_v16)) > _g4_s3 ? (26u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 26u);

  *a1 = (int)(uintptr_t)(&dword_213B814);
  sub_119F570(&v16[1], a3, a4);
  s = *(char **)&v16[1];
  v13 = 2 * (a4 - a3);
  v15 = *(uint32_t *)&v16[1] + *(uint32_t *)(*(uint32_t *)&v16[1] - 12);
  v5 = (char *)opNewArray(v13);
  while ( 1 )
  {
    v9 = sub_1954410(a2, v5, s, v13);
    if ( v13 <= v9 )
    {
      v13 = v9 + 1;
      if ( v5 != nullptr )
        opDeleteArray(v5);
      v5 = (char *)opNewArray(v13);
      v9 = sub_1954410(a2, v5, s, v13);
    }
    g4_std::string::append((int)(uintptr_t)(a1), v5, v9);
    v10 = &s[strlen(s)];
    if ( v10 == (char *)v15 )
      break;
    v6 = *a1;
    s = v10 + 1;
    v7 = *(uint32_t *)(*a1 - 12);
    v14 = v7 + 1;
    if ( (unsigned int)(v7 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v6 - 4) > 0 )
    {
      sub_1939B80(a1, v14);
      v6 = *a1;
      v7 = *(uint32_t *)(*a1 - 12);
    }
    *(uint8_t *)(v6 + v7) = 0;
    v8 = *a1;
    if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v8 - 4) = 0;
      *(uint32_t *)(v8 - 12) = v14;
      *(uint8_t *)(v8 + v14) = 0;
    }
  }
  if ( v5 != nullptr )
    opDeleteArray(v5);
  v11 = (void *)(*(uint32_t *)&v16[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v16[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v16[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191A680  (binary VA: 0x191a680)
// Original: sub_191A680
// ----------------------------------------------------------------------------
int sub_191A680(int a1, char *s, int a3, char *format, ...)
{
  char *v4;
  char *v5;
  int v6;
  size_t v8;
  void *locale;
  va_list __varargs;

  va_start(__varargs, format);
  v4 = setlocale(1, nullptr);
  v5 = v4;
  if ( v4 == nullptr || strcmp(v4, "C") == 0 )
    return vsprintf(s, format, __varargs);
  v8 = strlen(v4) + 1;
  locale = (void *)opNewArray(v8);
  memcpy(locale, v5, v8);
  setlocale(1, "C");
  v6 = vsprintf(s, format, __varargs);
  if ( locale != nullptr )
  {
    setlocale(1, (const char *)locale);
    opDeleteArray(locale);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_191A790  (binary VA: 0x191a790)
// Original: sub_191A790
// ----------------------------------------------------------------------------
int sub_191A790(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA908);
  return sub_1907330((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191A810  (binary VA: 0x191a810)
// Original: sub_191A810
// ----------------------------------------------------------------------------
int sub_191A810(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA908);
  a1[2] = a2;
  return sub_1907330((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191A890  (binary VA: 0x191a890)
// Original: sub_191A890
// ----------------------------------------------------------------------------
int sub_191A890(uint32_t *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA908);
  a1[2] = 0;
  return sub_1907330((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191A910  (binary VA: 0x191a910)
// Original: sub_191A910
// ----------------------------------------------------------------------------
int sub_191A910(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_191A930  (binary VA: 0x191a930)
// Original: sub_191A930
// ----------------------------------------------------------------------------
int sub_191A930(int a1)
{
  return G4_VCALL<int>(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_191A950  (binary VA: 0x191a950)
// Original: sub_191A950
// ----------------------------------------------------------------------------
int sub_191A950(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191A980  (binary VA: 0x191a980)
// Original: sub_191A980
// ----------------------------------------------------------------------------
int sub_191A980(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191A9B0  (binary VA: 0x191a9b0)
// Original: sub_191A9B0
// ----------------------------------------------------------------------------
int sub_191A9B0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191A9E0  (binary VA: 0x191a9e0)
// Original: sub_191A9E0
// ----------------------------------------------------------------------------
int sub_191A9E0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AA10  (binary VA: 0x191aa10)
// Original: sub_191AA10
// ----------------------------------------------------------------------------
int sub_191AA10(int a1)
{
  return G4_VCALL<int>(a1, 32);
}

// ----------------------------------------------------------------------------
// Function: sub_191AA30  (binary VA: 0x191aa30)
// Original: sub_191AA30
// ----------------------------------------------------------------------------
int sub_191AA30(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AA60  (binary VA: 0x191aa60)
// Original: sub_191AA60
// ----------------------------------------------------------------------------
int sub_191AA60(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 40))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AA90  (binary VA: 0x191aa90)
// Original: sub_191AA90
// ----------------------------------------------------------------------------
int sub_191AA90(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8C8);
  return sub_1907200((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191AB10  (binary VA: 0x191ab10)
// Original: sub_191AB10
// ----------------------------------------------------------------------------
int sub_191AB10(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8C8);
  a1[2] = a2;
  return sub_1907200((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191AB90  (binary VA: 0x191ab90)
// Original: sub_191AB90
// ----------------------------------------------------------------------------
int sub_191AB90(uint32_t *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8C8);
  a1[2] = 0;
  return sub_1907200((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_191AC10  (binary VA: 0x191ac10)
// Original: sub_191AC10
// ----------------------------------------------------------------------------
int sub_191AC10(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_191AC30  (binary VA: 0x191ac30)
// Original: sub_191AC30
// ----------------------------------------------------------------------------
int sub_191AC30(int a1)
{
  return G4_VCALL<int>(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_191AC50  (binary VA: 0x191ac50)
// Original: sub_191AC50
// ----------------------------------------------------------------------------
int sub_191AC50(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AC80  (binary VA: 0x191ac80)
// Original: sub_191AC80
// ----------------------------------------------------------------------------
int sub_191AC80(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191ACB0  (binary VA: 0x191acb0)
// Original: sub_191ACB0
// ----------------------------------------------------------------------------
int sub_191ACB0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191ACE0  (binary VA: 0x191ace0)
// Original: sub_191ACE0
// ----------------------------------------------------------------------------
int sub_191ACE0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AD10  (binary VA: 0x191ad10)
// Original: sub_191AD10
// ----------------------------------------------------------------------------
int sub_191AD10(int a1)
{
  return G4_VCALL<int>(a1, 32);
}

// ----------------------------------------------------------------------------
// Function: sub_191AD30  (binary VA: 0x191ad30)
// Original: sub_191AD30
// ----------------------------------------------------------------------------
int sub_191AD30(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AD60  (binary VA: 0x191ad60)
// Original: sub_191AD60
// ----------------------------------------------------------------------------
int sub_191AD60(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 40))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AD90  (binary VA: 0x191ad90)
// Original: sub_191AD90
// ----------------------------------------------------------------------------
int sub_191AD90(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAB50);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  *(uint8_t *)(a1 + 18) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 48) = 0;
  *(uint8_t *)(a1 + 49) = 0;
  *(uint8_t *)(a1 + 50) = 0;
  *(uint8_t *)(a1 + 51) = 0;
  *(uint8_t *)(a1 + 52) = 0;
  *(uint8_t *)(a1 + 53) = 0;
  *(uint8_t *)(a1 + 54) = 0;
  *(uint8_t *)(a1 + 55) = 0;
  *(uint8_t *)(a1 + 67) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191AE30  (binary VA: 0x191ae30)
// Original: sub_191AE30
// ----------------------------------------------------------------------------
int sub_191AE30(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAB60);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  *(uint8_t *)(a1 + 18) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 48) = 0;
  *(uint8_t *)(a1 + 49) = 0;
  *(uint8_t *)(a1 + 50) = 0;
  *(uint8_t *)(a1 + 51) = 0;
  *(uint8_t *)(a1 + 52) = 0;
  *(uint8_t *)(a1 + 53) = 0;
  *(uint8_t *)(a1 + 54) = 0;
  *(uint8_t *)(a1 + 55) = 0;
  *(uint8_t *)(a1 + 67) = 0;
  return a1;
}



// ============================================================================
// Address:   0x191aed0 (size: 258 bytes)
// Symbol:    sub_191AED0
// Demangled: sub_191AED0
// ============================================================================
int (**sub_191AED0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);
  uint32_t v4[4];

  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA908);
  sub_1907330((int)(uintptr_t)(a1));
  result = (int (**)(int))(uintptr_t)(&off_20AA9E8);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA9E8);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908800(v4, a2);
    sub_1907330((int)(uintptr_t)(a1));
    return (int (**)(int))sub_1908860(v4);
  }
  return result;
}


// ============================================================================
// Address:   0x191afe0 (size: 258 bytes)
// Symbol:    sub_191AFE0
// Demangled: sub_191AFE0
// ============================================================================
int (**sub_191AFE0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);
  uint32_t v4[4];

  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8C8);
  sub_1907200((int)(uintptr_t)(a1));
  result = (int (**)(int))(uintptr_t)(&off_20AAA28);
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA28);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908800(v4, a2);
    sub_1907200((int)(uintptr_t)(a1));
    return (int (**)(int))sub_1908860(v4);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_191B0F0  (binary VA: 0x191b0f0)
// Original: sub_191B0F0
// ----------------------------------------------------------------------------
uint32_t * sub_191B0F0(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA60);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B120  (binary VA: 0x191b120)
// Original: sub_191B120
// ----------------------------------------------------------------------------
int sub_191B120(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B1A0  (binary VA: 0x191b1a0)
// Original: sub_191B1A0
// ----------------------------------------------------------------------------
int sub_191B1A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B220  (binary VA: 0x191b220)
// Original: sub_191B220
// ----------------------------------------------------------------------------
uint32_t * sub_191B220(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA78);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B250  (binary VA: 0x191b250)
// Original: sub_191B250
// ----------------------------------------------------------------------------
int sub_191B250(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B2D0  (binary VA: 0x191b2d0)
// Original: sub_191B2D0
// ----------------------------------------------------------------------------
int sub_191B2D0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B340  (binary VA: 0x191b340)
// Original: sub_191B340
// ----------------------------------------------------------------------------
uint32_t * sub_191B340(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7A8);
  return (uint32_t *)(uintptr_t)(sub_19079A0((int)(uintptr_t)(a1)));
}

// ----------------------------------------------------------------------------
// Function: sub_191B3B0  (binary VA: 0x191b3b0)
// Original: sub_191B3B0
// ----------------------------------------------------------------------------
uint32_t * sub_191B3B0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7A8);
  a1[2] = a2;
  return (uint32_t *)(uintptr_t)(sub_19079A0((int)(uintptr_t)(a1)));
}

// ----------------------------------------------------------------------------
// Function: sub_191B420  (binary VA: 0x191b420)
// Original: sub_191B420
// ----------------------------------------------------------------------------
uint32_t * sub_191B420(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7A8);
  return (uint32_t *)(uintptr_t)(sub_19079A0((int)(uintptr_t)(a1)));
}

// ----------------------------------------------------------------------------
// Function: sub_191B490  (binary VA: 0x191b490)
// Original: sub_191B490
// ----------------------------------------------------------------------------
int sub_191B490(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_191B4B0  (binary VA: 0x191b4b0)
// Original: sub_191B4B0
// ----------------------------------------------------------------------------
int sub_191B4B0(int a1)
{
  return G4_VCALL<int>(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_191B4D0  (binary VA: 0x191b4d0)
// Original: sub_191B4D0
// ----------------------------------------------------------------------------
int sub_191B4D0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B500  (binary VA: 0x191b500)
// Original: sub_191B500
// ----------------------------------------------------------------------------
int sub_191B500(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B530  (binary VA: 0x191b530)
// Original: sub_191B530
// ----------------------------------------------------------------------------
int sub_191B530(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B560  (binary VA: 0x191b560)
// Original: sub_191B560
// ----------------------------------------------------------------------------
int sub_191B560(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAB70);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint8_t *)(a1 + 36) = 0;
  *(uint8_t *)(a1 + 37) = 0;
  *(uint8_t *)(a1 + 100) = 0;
  return a1;
}



// ============================================================================
// Address:   0x191b5c0 (size: 242 bytes)
// Symbol:    sub_191B5C0
// Demangled: sub_191B5C0
// ============================================================================
int (**sub_191B5C0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);
  uint32_t v4[4];

  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7A8);
  sub_19079A0((int)(uintptr_t)(a1));
  result = (int (**)(int))(uintptr_t)(&off_20AA7E8);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA7E8);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908800(v4, a2);
    sub_19079A0((int)(uintptr_t)(a1));
    return (int (**)(int))sub_1908860(v4);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_191B6C0  (binary VA: 0x191b6c0)
// Original: sub_191B6C0
// ----------------------------------------------------------------------------
uint32_t * sub_191B6C0(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA828);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B6F0  (binary VA: 0x191b6f0)
// Original: sub_191B6F0
// ----------------------------------------------------------------------------
int sub_191B6F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B770  (binary VA: 0x191b770)
// Original: sub_191B770
// ----------------------------------------------------------------------------
int sub_191B770(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B7F0  (binary VA: 0x191b7f0)
// Original: sub_191B7F0
// ----------------------------------------------------------------------------
int sub_191B7F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B870  (binary VA: 0x191b870)
// Original: sub_191B870
// ----------------------------------------------------------------------------
int sub_191B870(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B8F0  (binary VA: 0x191b8f0)
// Original: sub_191B8F0
// ----------------------------------------------------------------------------
int sub_191B8F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B970  (binary VA: 0x191b970)
// Original: sub_191B970
// ----------------------------------------------------------------------------
int sub_191B970(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191B9F0  (binary VA: 0x191b9f0)
// Original: sub_191B9F0
// ----------------------------------------------------------------------------
int sub_191B9F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 32))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BA70  (binary VA: 0x191ba70)
// Original: sub_191BA70
// ----------------------------------------------------------------------------
int sub_191BA70(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BAF0  (binary VA: 0x191baf0)
// Original: sub_191BAF0
// ----------------------------------------------------------------------------
int sub_191BAF0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 40))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BB70  (binary VA: 0x191bb70)
// Original: sub_191BB70
// ----------------------------------------------------------------------------
int sub_191BB70(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 44))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BBF0  (binary VA: 0x191bbf0)
// Original: sub_191BBF0
// ----------------------------------------------------------------------------
int sub_191BBF0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 48))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BC70  (binary VA: 0x191bc70)
// Original: sub_191BC70
// ----------------------------------------------------------------------------
uint32_t * sub_191BC70(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA868);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BCA0  (binary VA: 0x191bca0)
// Original: sub_191BCA0
// ----------------------------------------------------------------------------
int sub_191BCA0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BD10  (binary VA: 0x191bd10)
// Original: sub_191BD10
// ----------------------------------------------------------------------------
int sub_191BD10(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BD80  (binary VA: 0x191bd80)
// Original: sub_191BD80
// ----------------------------------------------------------------------------
int sub_191BD80(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BDF0  (binary VA: 0x191bdf0)
// Original: sub_191BDF0
// ----------------------------------------------------------------------------
int sub_191BDF0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BE60  (binary VA: 0x191be60)
// Original: sub_191BE60
// ----------------------------------------------------------------------------
int sub_191BE60(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BED0  (binary VA: 0x191bed0)
// Original: sub_191BED0
// ----------------------------------------------------------------------------
int sub_191BED0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BF40  (binary VA: 0x191bf40)
// Original: sub_191BF40
// ----------------------------------------------------------------------------
int sub_191BF40(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 32))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191BFB0  (binary VA: 0x191bfb0)
// Original: sub_191BFB0
// ----------------------------------------------------------------------------
int sub_191BFB0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C020  (binary VA: 0x191c020)
// Original: sub_191C020
// ----------------------------------------------------------------------------
int sub_191C020(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8A8);
  a1[4] = (uint32_t)(uintptr_t)(sub_1902030());
  return sub_1954650(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191C0A0  (binary VA: 0x191c0a0)
// Original: sub_191C0A0
// ----------------------------------------------------------------------------
int sub_191C0A0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8A8);
  a1[2] = a2;
  a1[4] = (uint32_t)(uintptr_t)(sub_1902030());
  return sub_1954650(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_191C120  (binary VA: 0x191c120)
// Original: sub_191C120
// ----------------------------------------------------------------------------
int sub_191C120(uint32_t *a1, int a2, char *s, int a4)
{
  const char *s2;
  uint8_t *v6;
  void *v7;
  uint8_t *v8;
  void *v9;
  size_t n;
  size_t v11;

  a1[1] = a4 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA8A8);
  s2 = (const char *)(uintptr_t)(sub_1902030());
  if ( strcmp(s, s2) == 0 )
  {
    a1[4] = (uint32_t)(uintptr_t)(s2);
  }
  else
  {
    v11 = strlen(s);
    n = v11 + 1;
    v6 = (uint8_t *)opNewArray(v11 + 1);
    v7 = v6;
    if ( v11 != -1 )
    {
      v8 = &v6[n];
      do
        *v6++ = 0;
      while ( v6 != v8 );
    }
    v9 = v7;
    memcpy(v7, s, n);
    a1[4] = (uint32_t)(uintptr_t)(v9);
  }
  return sub_1954650(a1);
}

// ----------------------------------------------------------------------------
// Function: nullsub_869  (binary VA: 0x191c2b8)
// Original: nullsub_869
// ----------------------------------------------------------------------------
void nullsub_869()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_191C4B0  (binary VA: 0x191c4b0)
// Original: sub_191C4B0
// ----------------------------------------------------------------------------
int sub_191C4B0(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AA898);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint32_t *)(a1 + 108) = 0;
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint8_t *)(a1 + 196) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C660  (binary VA: 0x191c660)
// Original: sub_191C660
// ----------------------------------------------------------------------------
uint32_t * sub_191C660(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AAA90);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C690  (binary VA: 0x191c690)
// Original: sub_191C690
// ----------------------------------------------------------------------------
int sub_191C690(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C710  (binary VA: 0x191c710)
// Original: sub_191C710
// ----------------------------------------------------------------------------
uint32_t * sub_191C710(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AAAA8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C740  (binary VA: 0x191c740)
// Original: sub_191C740
// ----------------------------------------------------------------------------
uint32_t * sub_191C740(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AAAC8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C770  (binary VA: 0x191c770)
// Original: sub_191C770
// ----------------------------------------------------------------------------
int sub_191C770(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_191C790  (binary VA: 0x191c790)
// Original: sub_191C790
// ----------------------------------------------------------------------------
int sub_191C790(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C810  (binary VA: 0x191c810)
// Original: sub_191C810
// ----------------------------------------------------------------------------
int sub_191C810(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C890  (binary VA: 0x191c890)
// Original: sub_191C890
// ----------------------------------------------------------------------------
int sub_191C890(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C910  (binary VA: 0x191c910)
// Original: sub_191C910
// ----------------------------------------------------------------------------
int sub_191C910(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191C990  (binary VA: 0x191c990)
// Original: sub_191C990
// ----------------------------------------------------------------------------
int sub_191C990(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191CA10  (binary VA: 0x191ca10)
// Original: sub_191CA10
// ----------------------------------------------------------------------------
uint32_t * sub_191CA10(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AAB08);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191CA40  (binary VA: 0x191ca40)
// Original: sub_191CA40
// ----------------------------------------------------------------------------
int sub_191CA40(uint32_t *a1, int a2)
{
  int result;

  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA940);
  result = sub_1901FF0();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191CAA0  (binary VA: 0x191caa0)
// Original: sub_191CAA0
// ----------------------------------------------------------------------------
int sub_191CAA0(uint32_t *a1, int a2, int a3, int a4)
{
  int result;

  a1[1] = a4 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA940);
  result = sub_1901FF0();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191CB00  (binary VA: 0x191cb00)
// Original: sub_191CB00
// ----------------------------------------------------------------------------
int sub_191CB00(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 8, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_191CB30  (binary VA: 0x191cb30)
// Original: sub_191CB30
// ----------------------------------------------------------------------------
int sub_191CB30(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 8, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_191CB60  (binary VA: 0x191cb60)
// Original: sub_191CB60
// ----------------------------------------------------------------------------
int sub_191CB60(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191CBB0  (binary VA: 0x191cbb0)
// Original: sub_191CBB0
// ----------------------------------------------------------------------------
int sub_191CBB0(int a1, int a2)
{
  return G4_VCALL<int>(a1, 16, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_191CBE0  (binary VA: 0x191cbe0)
// Original: sub_191CBE0
// ----------------------------------------------------------------------------
uint32_t * sub_191CBE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  return a1;
}



// ============================================================================
// Address:   0x191cc00 (size: 175 bytes)
// Symbol:    sub_191CC00
// Demangled: sub_191CC00
// ============================================================================
int (**sub_191CC00(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  sub_191CA40(a1, a3);
  result = (int (**)(int))(uintptr_t)(&off_20AAB30);
  *a1 = (uint32_t)(uintptr_t)(&off_20AAB30);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}


// ============================================================================
// Address:   0x191ccb0 (size: 175 bytes)
// Symbol:    sub_191CCB0
// Demangled: sub_191CCB0
// ============================================================================
int (**sub_191CCB0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  sub_19536E0(a1, a3);
  result = (int (**)(int))(uintptr_t)(&off_20AA9A8);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA9A8);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_191CD60  (binary VA: 0x191cd60)
// Original: sub_191CD60
// ----------------------------------------------------------------------------
int sub_191CD60(uint32_t *a1, int a2)
{
  int result;

  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  result = sub_1901FF0();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191CDC0  (binary VA: 0x191cdc0)
// Original: sub_191CDC0
// ----------------------------------------------------------------------------
int sub_191CDC0(uint32_t *a1, char a2, int a3)
{
  int result;

  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  result = sub_1908870();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191CE10  (binary VA: 0x191ce10)
// Original: sub_191CE10
// ----------------------------------------------------------------------------
int sub_191CE10(int a1, int a2, int a3, int a4, int a5)
{
  return G4_VCALL<int>(a1, 8, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_191CE50  (binary VA: 0x191ce50)
// Original: sub_191CE50
// ----------------------------------------------------------------------------
int sub_191CE50(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191CE90  (binary VA: 0x191ce90)
// Original: sub_191CE90
// ----------------------------------------------------------------------------
int sub_191CE90(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 16, a2, a3);
}



// ============================================================================
// Address:   0x191cec0 (size: 209 bytes)
// Symbol:    sub_191CEC0
// Demangled: sub_191CEC0
// ============================================================================
int (**sub_191CEC0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AA768);
  a1[2] = sub_1901FF0();
  result = (int (**)(int))(uintptr_t)(&off_20AA788);
  *a1 = (uint32_t)(uintptr_t)(&off_20AA788);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_191CFA0  (binary VA: 0x191cfa0)
// Original: sub_191CFA0
// ----------------------------------------------------------------------------
void * sub_191CFA0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550((&dword_2139F24));
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_68c72b2499,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D010  (binary VA: 0x191d010)
// Original: sub_191D010
// ----------------------------------------------------------------------------
uint32_t * sub_191D010(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint8_t *a8, uint8_t *a9)
{
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;
  char v13;
  uint8_t v14;
  uint8_t *v15;
  uint8_t *v16;
  char v18;
  char v19;
  int v20;
  typedef uint8_t *_g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t _g4_t_v24;
  typedef uint8_t _g4_t_v25;
  typedef uint32_t _g4_t_v26[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v26)) > _g4_s5 ? (40u + sizeof(_g4_t_v26)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);

  v9 = (uint8_t *)(sub_191CFA0(a5 + 108));
  v10 = a8;
  v11 = v9;
  if ( a8 != a9 )
  {
    do
    {
      v12 = *v10;
      v13 = v11[v12 + 285];
      if ( v13 != 0
        || (v21 = v10,
            v13 = G4_VCALL<int>(v11, 32, (char)*v10, 0),
            v10 = v21,
            v13 == 0) )
      {
        if ( v13 != 37 )
          goto LABEL_4;
      }
      else
      {
        v11[v12 + 285] = v13;
        if ( v13 != 37 )
        {
LABEL_4:
          v14 = *v10;
          if ( (uint8_t)a4 == 0 )
          {
            v15 = (uint8_t *)a3[5];
            if ( (unsigned int)(uintptr_t)(v15) >= a3[6] )
            {
              v23 = v10;
              v20 = G4_VCALL<int>(a3, 52, v14);
              v10 = v23;
              LOBYTE(a4) = v20 == -1;
            }
            else
            {
              *v15 = v14;
              ++a3[5];
            }
          }
          v16 = v10;
          goto LABEL_8;
        }
      }
      v16 = v10 + 1;
      if ( a9 == v10 + 1 )
        break;
      v25 = v10[1];
      v18 = v11[v25 + 285];
      if ( v18 != 0
        || (v22 = v10,
            v18 = G4_VCALL<int>(v11, 32, (char)v25, 0),
            v10 = v22,
            v18 == 0) )
      {
        if ( v18 == 79 )
          goto LABEL_15;
      }
      else
      {
        v11[v25 + 285] = v18;
        if ( v18 == 79 )
          goto LABEL_15;
      }
      if ( v18 == 69 )
      {
LABEL_15:
        v16 = v10 + 2;
        if ( a9 == v10 + 2 )
          break;
        v24 = v10[2];
        if ( v11[v24 + 285] == 0 )
        {
          v19 = G4_VCALL<int>(v11, 32, (char)v24, 0);
          if ( v19 != 0 )
            v11[v24 + 285] = v19;
        }
      }
      (*(void (**)(uint32_t *))(*(uint32_t *)a2 + 8))(v26);
      a3 = (uint32_t *)v26[0];
      LOBYTE(a4) = v26[1];
LABEL_8:
      v10 = v16 + 1;
    }
    while ( a9 != v16 + 1 );
  }
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191D290  (binary VA: 0x191d290)
// Original: sub_191D290
// ----------------------------------------------------------------------------
void * sub_191D290(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_21402F8);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_f62e84d515,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D300  (binary VA: 0x191d300)
// Original: sub_191D300
// ----------------------------------------------------------------------------
void * sub_191D300(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B774);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_f09ee458ed,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D370  (binary VA: 0x191d370)
// Original: sub_191D370
// ----------------------------------------------------------------------------
void * sub_191D370(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B790);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_46d8b0a403,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D3E0  (binary VA: 0x191d3e0)
// Original: sub_191D3E0
// ----------------------------------------------------------------------------
void * sub_191D3E0(int a1, int a2)
{
  void *v2;
  int v3;
  size_t v4;
  void *v5;
  bool v6;
  char *v7;
  char *v8;
  void *v9;
  int v10;
  bool v11;
  int v12;
  size_t v13;
  void *v14;
  void *v15;
  int v16;
  size_t v17;
  void *v18;
  void *v19;
  uint8_t *v20;
  char *v21;
  char v22;
  char *v23;
  char v24;
  typedef char *_g4_t_src;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef void *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_src)) > _g4_s0 ? (12u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v27)) > _g4_s1 ? (36u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v28)) > _g4_s2 ? (36u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_dest)) > _g4_s4 ? (40u + sizeof(_g4_t_dest)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v33)) > _g4_s7 ? (52u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v34)) > _g4_s8 ? (60u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v35)) > _g4_s9 ? (64u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v36)) > _g4_s10 ? (68u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v37)) > _g4_s11 ? (72u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v38)) > _g4_s12 ? (76u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v39)) > _g4_s13 ? (80u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v40)) > _g4_s14 ? (84u + sizeof(_g4_t_v40)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);

  *(uint8_t *)(a1 + 100) = 1;
  v2 = sub_191D370(a2);
  (*(void (**)(int *, void *))(*(uint32_t *)v2 + 16))(&v35, v2);
  v3 = v35;
  v4 = *(uint32_t *)(v35 - 12);
  v5 = (void *)(v35 - 12);
  v6 = v35 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 12) = v4;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v4 = *(uint32_t *)(a1 + 12);
  }
  v7 = (char *)opNewArray(v4);
  v31 = v7;
  if ( v4 != 0 )
  {
    v8 = &v7[v4];
    do
      *v7++ = 0;
    while ( v7 != v8 );
  }
  v27 = *(uint32_t *)(a1 + 12);
  (*(void (**)(int *, void *))(*(uint32_t *)v2 + 16))(&v36, v2);
  sub_1937C00((int)(uintptr_t)(&v36), v31, v27, 0);
  v9 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v31);
  v11 = false;
  if ( v10 != 0 && *v31 > 0 )
    v11 = *v31 != 127;
  *(uint8_t *)(a1 + 16) = v11;
  (*(void (**)(int *, void *))(*(uint32_t *)v2 + 20))(&v37, v2);
  v12 = v37;
  v13 = *(uint32_t *)(v37 - 12);
  v14 = (void *)(v37 - 12);
  v6 = v37 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 24) = v13;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v14);
    v13 = *(uint32_t *)(a1 + 24);
  }
  v33 = (void *)opNewArray(v13);
  v28 = *(uint32_t *)(a1 + 24);
  (*(void (**)(int *, void *))(*(uint32_t *)v2 + 20))(&v38, v2);
  sub_1937C00((int)(uintptr_t)(&v38), v33, v28, 0);
  v15 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v33);
  (*(void (**)(int *, void *))(*(uint32_t *)v2 + 24))(&v39, v2);
  v16 = v39;
  v17 = *(uint32_t *)(v39 - 12);
  v18 = (void *)(v39 - 12);
  v6 = v39 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 32) = v17;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v18);
    v17 = *(uint32_t *)(a1 + 32);
  }
  v29 = (void *)opNewArray(v17);
  v32 = *(uint32_t *)(a1 + 32);
  (*(void (**)(int *, void *))(*(uint32_t *)v2 + 24))(v40, v2);
  sub_1937C00((int)(uintptr_t)(v40), v29, v32, 0);
  v19 = (void *)(v40[0] - 12);
  if ( (uint32_t *)(v40[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    src = (char *)&v34 + 3;
    g4_std::string::Rep::M_destroy(v19);
  }
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v29);
  *(uint8_t *)(a1 + 36) = G4_VCALL<int>(v2, 8, src);
  *(uint8_t *)(a1 + 37) = G4_VCALL<int>(v2, 12);
  v20 = (uint8_t *)(sub_191CFA0(a2));
  v21 = (char *)(uintptr_t)(off_20CB480[0]);
  v22 = v20[28];
  if ( v22 == 1 )
  {
    memcpy((void *)(a1 + 38), off_20CB480[0], 0x24u);
  }
  else
  {
    if ( v22 == 0 )
      sub_18FFC70(v20);
    G4_VCALL<void>(v20, 28, v21, v21 + 36, a1 + 38);
  }
  dest = (void *)(a1 + 74);
  v23 = (char *)(uintptr_t)(off_20CB484[0]);
  v24 = v20[28];
  if ( v24 == 1 )
    return memcpy(dest, off_20CB484[0], 0x1Au);
  if ( v24 == 0 )
    sub_18FFC70(v20);
  return (void *)G4_VCALL<int>(v20, 28, v23, v23 + 26, dest);
}

// ----------------------------------------------------------------------------
// Function: sub_191D890  (binary VA: 0x191d890)
// Original: sub_191D890
// ----------------------------------------------------------------------------
void * sub_191D890(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B788);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_d6e5533f26,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D900  (binary VA: 0x191d900)
// Original: sub_191D900
// ----------------------------------------------------------------------------
void * sub_191D900(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B78C);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_02279d5915,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D970  (binary VA: 0x191d970)
// Original: sub_191D970
// ----------------------------------------------------------------------------
void * sub_191D970(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B79C);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_66674c1020,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191D9E0  (binary VA: 0x191d9e0)
// Original: sub_191D9E0
// ----------------------------------------------------------------------------
void * sub_191D9E0(int a1, int a2)
{
  void *v2;
  int v3;
  char *v4;
  char *v5;
  void *v6;
  int v7;
  bool v8;
  int v9;
  void *v10;
  size_t v11;
  bool v12;
  void *v13;
  int v14;
  void *v15;
  size_t v16;
  void *v17;
  int v18;
  void *v19;
  size_t v20;
  void *v21;
  uint8_t *v22;
  char *v23;
  char v24;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef uint8_t _g4_t_v37[12];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45[6];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_src)) > _g4_s0 ? (12u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v27)) > _g4_s1 ? (36u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v28)) > _g4_s2 ? (36u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v31)) > _g4_s5 ? (36u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_dest)) > _g4_s6 ? (36u + sizeof(_g4_t_dest)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v33)) > _g4_s7 ? (40u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v34)) > _g4_s8 ? (48u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v35)) > _g4_s9 ? (52u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v36)) > _g4_s10 ? (56u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v37)) > _g4_s11 ? (60u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v38)) > _g4_s12 ? (80u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v39)) > _g4_s13 ? (84u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v40)) > _g4_s14 ? (88u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v41)) > _g4_s15 ? (92u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v42)) > _g4_s16 ? (96u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v43)) > _g4_s17 ? (100u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v44)) > _g4_s18 ? (104u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v45)) > _g4_s19 ? (108u + sizeof(_g4_t_v45)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);

  *(uint8_t *)(a1 + 67) = 1;
  v2 = sub_191D970(a2);
  *(uint8_t *)(a1 + 17) = G4_VCALL<int>(v2, 8, src);
  *(uint8_t *)(a1 + 18) = G4_VCALL<int>(v2, 12);
  *(uint32_t *)(a1 + 44) = G4_VCALL<int>(v2, 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v38);
  v3 = v38;
  v27 = *(uint32_t *)(v38 - 12);
  *(uint32_t *)(a1 + 12) = v27;
  if ( (uint32_t *)(v3 - 12) == dword_213B808 )
  {
    v4 = (char *)opNewArray(v27);
  }
  else
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    v27 = *(uint32_t *)(a1 + 12);
    v4 = (char *)opNewArray(v27);
  }
  v33 = v4;
  if ( v27 != 0 )
  {
    v5 = &v4[v27];
    do
      *v4++ = 0;
    while ( v4 != v5 );
  }
  v28 = *(uint32_t *)(a1 + 12);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v39);
  sub_1937C00((int)(uintptr_t)(&v39), v33, v28, 0);
  v6 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v33);
  v8 = false;
  if ( v7 != 0 && *v33 > 0 )
    v8 = *v33 != 127;
  *(uint8_t *)(a1 + 16) = v8;
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v40);
  v9 = v40;
  v10 = (void *)(v40 - 12);
  v11 = *(uint32_t *)(v40 - 12);
  v12 = v40 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 24) = v11;
  if ( !v12 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    v11 = *(uint32_t *)(a1 + 24);
  }
  v35 = (void *)opNewArray(v11);
  v29 = *(uint32_t *)(a1 + 24);
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v41);
  sub_1937C00((int)(uintptr_t)(&v41), v35, v29, 0);
  v13 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v35);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v42);
  v14 = v42;
  v15 = (void *)(v42 - 12);
  v16 = *(uint32_t *)(v42 - 12);
  v12 = v42 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 32) = v16;
  if ( !v12 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v15);
    v16 = *(uint32_t *)(a1 + 32);
  }
  v34 = (void *)opNewArray(v16);
  v30 = *(uint32_t *)(a1 + 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v43);
  sub_1937C00((int)(uintptr_t)(&v43), v34, v30, 0);
  v17 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v34);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(&v44);
  v18 = v44;
  v19 = (void *)(v44 - 12);
  v20 = *(uint32_t *)(v44 - 12);
  v12 = v44 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 40) = v20;
  if ( !v12 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v19);
    v20 = *(uint32_t *)(a1 + 40);
  }
  v31 = (void *)opNewArray(v20);
  v36 = *(uint32_t *)(a1 + 40);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(v45);
  sub_1937C00((int)(uintptr_t)(v45), v31, v36, 0);
  v21 = (void *)(v45[0] - 12);
  if ( (uint32_t *)(v45[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v31);
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 36))(v37, v2);
  *(uint32_t *)(a1 + 48) = v36;
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 40))(v37, v2);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(v35);
  v22 = (uint8_t *)(sub_191CFA0(a2));
  dest = (void *)(a1 + 56);
  v23 = (char *)(off_20CB488);
  v24 = v22[28];
  if ( v24 == 1 )
    return memcpy(dest, off_20CB488, 0xBu);
  if ( v24 == 0 )
    sub_18FFC70(v22);
  return (void *)G4_VCALL<int>(v22, 28, v23, v23 + 11, dest);
}

// ----------------------------------------------------------------------------
// Function: sub_191DFE0  (binary VA: 0x191dfe0)
// Original: sub_191DFE0
// ----------------------------------------------------------------------------
void * sub_191DFE0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550((int32_t *)&unk_213B7A0);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_d66baa72ff,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191E050  (binary VA: 0x191e050)
// Original: sub_191E050
// ----------------------------------------------------------------------------
void * sub_191E050(int a1, int a2)
{
  void *v2;
  int v3;
  char *v4;
  char *v5;
  void *v6;
  int v7;
  bool v8;
  int v9;
  void *v10;
  size_t v11;
  bool v12;
  void *v13;
  int v14;
  void *v15;
  size_t v16;
  void *v17;
  int v18;
  void *v19;
  size_t v20;
  void *v21;
  uint8_t *v22;
  char *v23;
  char v24;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef uint8_t _g4_t_v37[12];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45[6];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_src)) > _g4_s0 ? (12u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v27)) > _g4_s1 ? (36u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v28)) > _g4_s2 ? (36u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v31)) > _g4_s5 ? (36u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_dest)) > _g4_s6 ? (36u + sizeof(_g4_t_dest)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v33)) > _g4_s7 ? (40u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v34)) > _g4_s8 ? (48u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v35)) > _g4_s9 ? (52u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v36)) > _g4_s10 ? (56u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v37)) > _g4_s11 ? (60u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v38)) > _g4_s12 ? (80u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v39)) > _g4_s13 ? (84u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v40)) > _g4_s14 ? (88u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v41)) > _g4_s15 ? (92u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v42)) > _g4_s16 ? (96u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v43)) > _g4_s17 ? (100u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v44)) > _g4_s18 ? (104u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v45)) > _g4_s19 ? (108u + sizeof(_g4_t_v45)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);

  *(uint8_t *)(a1 + 67) = 1;
  v2 = sub_191DFE0(a2);
  *(uint8_t *)(a1 + 17) = G4_VCALL<int>(v2, 8, src);
  *(uint8_t *)(a1 + 18) = G4_VCALL<int>(v2, 12);
  *(uint32_t *)(a1 + 44) = G4_VCALL<int>(v2, 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v38);
  v3 = v38;
  v27 = *(uint32_t *)(v38 - 12);
  *(uint32_t *)(a1 + 12) = v27;
  if ( (uint32_t *)(v3 - 12) == dword_213B808 )
  {
    v4 = (char *)opNewArray(v27);
  }
  else
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    v27 = *(uint32_t *)(a1 + 12);
    v4 = (char *)opNewArray(v27);
  }
  v33 = v4;
  if ( v27 != 0 )
  {
    v5 = &v4[v27];
    do
      *v4++ = 0;
    while ( v4 != v5 );
  }
  v28 = *(uint32_t *)(a1 + 12);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v39);
  sub_1937C00((int)(uintptr_t)(&v39), v33, v28, 0);
  v6 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v33);
  v8 = false;
  if ( v7 != 0 && *v33 > 0 )
    v8 = *v33 != 127;
  *(uint8_t *)(a1 + 16) = v8;
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v40);
  v9 = v40;
  v10 = (void *)(v40 - 12);
  v11 = *(uint32_t *)(v40 - 12);
  v12 = v40 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 24) = v11;
  if ( !v12 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    v11 = *(uint32_t *)(a1 + 24);
  }
  v35 = (void *)opNewArray(v11);
  v29 = *(uint32_t *)(a1 + 24);
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v41);
  sub_1937C00((int)(uintptr_t)(&v41), v35, v29, 0);
  v13 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v35);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v42);
  v14 = v42;
  v15 = (void *)(v42 - 12);
  v16 = *(uint32_t *)(v42 - 12);
  v12 = v42 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 32) = v16;
  if ( !v12 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v15);
    v16 = *(uint32_t *)(a1 + 32);
  }
  v34 = (void *)opNewArray(v16);
  v30 = *(uint32_t *)(a1 + 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v43);
  sub_1937C00((int)(uintptr_t)(&v43), v34, v30, 0);
  v17 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v34);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(&v44);
  v18 = v44;
  v19 = (void *)(v44 - 12);
  v20 = *(uint32_t *)(v44 - 12);
  v12 = v44 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 40) = v20;
  if ( !v12 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v19);
    v20 = *(uint32_t *)(a1 + 40);
  }
  v31 = (void *)opNewArray(v20);
  v36 = *(uint32_t *)(a1 + 40);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(v45);
  sub_1937C00((int)(uintptr_t)(v45), v31, v36, 0);
  v21 = (void *)(v45[0] - 12);
  if ( (uint32_t *)(v45[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v31);
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 36))(v37, v2);
  *(uint32_t *)(a1 + 48) = v36;
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 40))(v37, v2);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(v35);
  v22 = (uint8_t *)(sub_191CFA0(a2));
  dest = (void *)(a1 + 56);
  v23 = (char *)(off_20CB488);
  v24 = v22[28];
  if ( v24 == 1 )
    return memcpy(dest, off_20CB488, 0xBu);
  if ( v24 == 0 )
    sub_18FFC70(v22);
  return (void *)G4_VCALL<int>(v22, 28, v23, v23 + 11, dest);
}

// ----------------------------------------------------------------------------
// Function: sub_191E650  (binary VA: 0x191e650)
// Original: sub_191E650
// ----------------------------------------------------------------------------
void * sub_191E650(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B794);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_c22f69ce69,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191E6C0  (binary VA: 0x191e6c0)
// Original: sub_191E6C0
// ----------------------------------------------------------------------------
void * sub_191E6C0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B798);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_e5be51b7b0,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191E730  (binary VA: 0x191e730)
// Original: sub_191E730
// ----------------------------------------------------------------------------
void * sub_191E730(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B784);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_cfb05d2230,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191E7A0  (binary VA: 0x191e7a0)
// Original: sub_191E7A0
// ----------------------------------------------------------------------------
uint32_t * sub_191E7A0(uint32_t *a1, int a2, int a3, bool a4, int a5, int a6, struct tm *a7, char a8, char a9)
{
  uint8_t *v9;
  void *v10;
  char v11;
  char *v12;
  int v13;
  unsigned int v14;
  bool v15; // bp
  int v16;
  typedef char _g4_t_format;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_s[156];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_format)) > _g4_s0 ? (12u + sizeof(_g4_t_format)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v19)) > _g4_s1 ? (13u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v20)) > _g4_s2 ? (14u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v21)) > _g4_s3 ? (15u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_s)) > _g4_s4 ? (16u + sizeof(_g4_t_s)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 13u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 14u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 15u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  v9 = (uint8_t *)(sub_191CFA0(a5 + 108));
  v10 = sub_191E730(a5 + 108);
  if ( v9[28] != 0 )
  {
    v11 = v9[66];
  }
  else
  {
    sub_18FFC70(v9);
    v11 = G4_VCALL<int>(v9, 24, 37);
  }
  format = v11;
  if ( a9 != 0 )
  {
    v21 = 0;
    v19 = a9;
    v20 = a8;
  }
  else
  {
    v20 = 0;
    v19 = a8;
  }
  sub_1954550((int)(uintptr_t)(v10), s, 0x80u, &format, a7);
  v12 = s;
  do
  {
    v13 = *(uint32_t *)v12;
    v12 += 4;
    v14 = ~v13 & (v13 - 16843009) & 0x80808080;
  }
  while ( v14 == 0 );
  v15 = a4;
  if ( (~v13 & (v13 - 16843009) & 0x8080) == 0 )
  {
    v14 >>= 16;
    v12 += 2;
  }
  v16 = &v12[-__CFADD__((uint8_t)v14, (uint8_t)v14) - 3] - s;
  if ( !a4 )
    v15 = v16 != G4_VCALL<int>(a3, 48, s, v16);
  a1[1] = a4;
  *a1 = a3;
  *((uint8_t *)a1 + 4) = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191E930  (binary VA: 0x191e930)
// Original: sub_191E930
// ----------------------------------------------------------------------------
void * sub_191E930(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B780);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_73d7b1d9d5,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191E9A0  (binary VA: 0x191e9a0)
// Original: sub_191E9A0
// ----------------------------------------------------------------------------
void * sub_191E9A0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B77C);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_6273c25d68,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EA10  (binary VA: 0x191ea10)
// Original: sub_191EA10
// ----------------------------------------------------------------------------
void * sub_191EA10(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B778);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_01cb748f19,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EA80  (binary VA: 0x191ea80)
// Original: sub_191EA80
// ----------------------------------------------------------------------------
bool sub_191EA80(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550((&dword_2139F24));
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_68c72b2499,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EB00  (binary VA: 0x191eb00)
// Original: sub_191EB00
// ----------------------------------------------------------------------------
bool sub_191EB00(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_21402F8);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_f62e84d515,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EB80  (binary VA: 0x191eb80)
// Original: sub_191EB80
// ----------------------------------------------------------------------------
bool sub_191EB80(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B774);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_f09ee458ed,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EC00  (binary VA: 0x191ec00)
// Original: sub_191EC00
// ----------------------------------------------------------------------------
bool sub_191EC00(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B790);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_46d8b0a403,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EC80  (binary VA: 0x191ec80)
// Original: sub_191EC80
// ----------------------------------------------------------------------------
bool sub_191EC80(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B788);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_d6e5533f26,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191ED00  (binary VA: 0x191ed00)
// Original: sub_191ED00
// ----------------------------------------------------------------------------
bool sub_191ED00(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B78C);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_02279d5915,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191ED80  (binary VA: 0x191ed80)
// Original: sub_191ED80
// ----------------------------------------------------------------------------
bool sub_191ED80(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550((int32_t *)&unk_213B7A0);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_d66baa72ff,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EE00  (binary VA: 0x191ee00)
// Original: sub_191EE00
// ----------------------------------------------------------------------------
bool sub_191EE00(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B794);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_c22f69ce69,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EE80  (binary VA: 0x191ee80)
// Original: sub_191EE80
// ----------------------------------------------------------------------------
bool sub_191EE80(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B798);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_e5be51b7b0,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EF00  (binary VA: 0x191ef00)
// Original: sub_191EF00
// ----------------------------------------------------------------------------
bool sub_191EF00(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B784);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_cfb05d2230,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191EF80  (binary VA: 0x191ef80)
// Original: sub_191EF80
// ----------------------------------------------------------------------------
bool sub_191EF80(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B780);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_73d7b1d9d5,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191F000  (binary VA: 0x191f000)
// Original: sub_191F000
// ----------------------------------------------------------------------------
bool sub_191F000(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B77C);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_6273c25d68,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191F080  (binary VA: 0x191f080)
// Original: sub_191F080
// ----------------------------------------------------------------------------
bool sub_191F080(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B778);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_01cb748f19,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191F100  (binary VA: 0x191f100)
// Original: sub_191F100
// ----------------------------------------------------------------------------
uint8_t * sub_191F100(uint8_t *a1, char a2, char *a3, int a4, char *a5, char *a6)
{
  unsigned int v7;
  int v8;
  int v9;
  uint8_t *result;
  char *v11;
  uint8_t *v12;
  char v13;
  int v14;
  char *v15;
  char v16; // si
  int v17;
  int v18;
  unsigned int v19;
  char v20; // si
  int v21;
  int v22;
  char v23;
  unsigned int v24;
  uint8_t *v25;
  uint8_t *v26;
  char *v27;
  unsigned int v28;

  v27 = a3;
  v23 = *a3;
  v7 = 0;
  v8 = 0;
  v9 = *a3;
  while ( a6 - a5 > v9 && v23 > 0 && v23 != 127 )
  {
    a6 -= v9;
    if ( v7 >= a4 - 1 )
    {
      ++v8;
    }
    else
    {
      v27 = &a3[++v7];
      v23 = a3[v7];
      v9 = v23;
    }
  }
  result = a1;
  if ( a5 == a6 )
  {
    v28 = v7;
    v15 = v27;
  }
  else
  {
    v11 = a5;
    v12 = a1;
    v24 = v7;
    do
    {
      v13 = *v11++;
      *v12++ = v13;
    }
    while ( v11 != a6 );
    v14 = v11 - a5;
    result = &a1[v14];
    a5 += v14;
    v28 = v24;
    v15 = v27;
  }
  while ( v8 != 0 )
  {
    *result = a2;
    v25 = result + 1;
    v16 = *v15;
    if ( *v15 > 0 )
    {
      v17 = 0;
      do
      {
        result[v17 + 1] = a5[v17];
        ++v17;
      }
      while ( v17 != (uint8_t)(v16 - 1) + 1 );
      v18 = (uint8_t)(v16 - 1) + 1;
      v25 += v18;
      a5 += v18;
    }
    --v8;
    result = v25;
  }
  v19 = v28;
  while ( v19 != 0 )
  {
    --v19;
    *result = a2;
    v26 = result + 1;
    v20 = a3[v19];
    if ( v20 > 0 )
    {
      v21 = 0;
      do
      {
        result[v21 + 1] = a5[v21];
        ++v21;
      }
      while ( v21 != (uint8_t)(v20 - 1) + 1 );
      v22 = (uint8_t)(v20 - 1) + 1;
      v26 += v22;
      a5 += v22;
    }
    result = v26;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191F2E0  (binary VA: 0x191f2e0)
// Original: sub_191F2E0
// ----------------------------------------------------------------------------
uint8_t * sub_191F2E0(int a1, char *a2, int a3, char a4, int a5, uint8_t *a6, char *a7, uint32_t *a8)
{
  uint8_t *result;

  result = (uint8_t *)(sub_191F100(a6, a4, a2, a3, a7, &a7[*a8]) - a6);
  *a8 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191F340  (binary VA: 0x191f340)
// Original: sub_191F340
// ----------------------------------------------------------------------------
uint8_t * sub_191F340(int a1, char *a2, int a3, char a4, char *src, int a6, char *a7, uint32_t *a8)
{
  uint8_t *dest;
  uint8_t *v9;
  uint8_t *result;

  if ( src != nullptr )
  {
    dest = sub_191F100((uint8_t *)a6, a4, a2, a3, a7, src);
    v9 = &dest[-a6];
    memcpy(dest, src, *a8 - (src - a7));
    result = &v9[*a8 - (src - a7)];
  }
  else
  {
    result = &sub_191F100((uint8_t *)a6, a4, a2, a3, a7, &a7[*a8])[-a6];
  }
  *a8 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_191F420  (binary VA: 0x191f420)
// Original: sub_191F420
// ----------------------------------------------------------------------------
uint32_t * sub_191F420(uint32_t *a1, int a2, int a3, bool a4, int a5, char a6, char **a7)
{
  int32_t v7;
  int *v8;
  int v9;
  char *v10;
  unsigned int v11;
  int v12;
  uint8_t *v13;
  char *v14;
  int v15;
  size_t v17;
  int v18;
  size_t v19;
  uint8_t *v20;
  int v21;
  uint8_t *v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  bool v33; // bp
  bool v34;
  void *v35;
  int v36;
  typedef signed int _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t _g4_t_v52[2];
  typedef bool _g4_t_v53;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v38)) > _g4_s1 ? (0u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v40)) > _g4_s3 ? (8u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v41)) > _g4_s4 ? (8u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v42)) > _g4_s5 ? (8u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v43)) > _g4_s6 ? (8u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v44)) > _g4_s7 ? (12u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v45)) > _g4_s8 ? (16u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v46)) > _g4_s9 ? (16u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v47)) > _g4_s10 ? (16u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v48)) > _g4_s11 ? (24u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v49)) > _g4_s12 ? (28u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v50)) > _g4_s13 ? (44u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v51)) > _g4_s14 ? (48u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v52)) > _g4_s15 ? (52u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v53)) > _g4_s16 ? (60u + sizeof(_g4_t_v53)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);

  v39 = (uint32_t *)(sub_191CFA0(a5 + 108));
  v7 = sub_1902550(&dword_213B79C);
  v8 = (int *)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * v7);
  v9 = *v8;
  if ( *v8 == 0 )
  {
    v36 = opNew(0x44u);
    *(uint32_t *)(v36 + 4) = 0;
    *(uint32_t *)(v36 + 8) = 0;
    *(uint32_t *)v36 = (uint32_t)(uintptr_t)(&off_20AAB60);
    *(uint32_t *)(v36 + 12) = 0;
    *(uint8_t *)(v36 + 16) = 0;
    *(uint8_t *)(v36 + 17) = 0;
    *(uint8_t *)(v36 + 18) = 0;
    *(uint32_t *)(v36 + 20) = 0;
    *(uint32_t *)(v36 + 24) = 0;
    *(uint32_t *)(v36 + 28) = 0;
    *(uint32_t *)(v36 + 32) = 0;
    *(uint32_t *)(v36 + 36) = 0;
    *(uint32_t *)(v36 + 40) = 0;
    *(uint32_t *)(v36 + 44) = 0;
    *(uint8_t *)(v36 + 48) = 0;
    *(uint8_t *)(v36 + 49) = 0;
    *(uint8_t *)(v36 + 50) = 0;
    *(uint8_t *)(v36 + 51) = 0;
    *(uint8_t *)(v36 + 52) = 0;
    *(uint8_t *)(v36 + 53) = 0;
    *(uint8_t *)(v36 + 54) = 0;
    *(uint8_t *)(v36 + 55) = 0;
    *(uint8_t *)(v36 + 67) = 0;
    sub_191D9E0(v36, a5 + 108);
    sub_19023D0(*(uint32_t *)(a5 + 108), (volatile int32_t *)v36, v7);
    v9 = *v8;
  }
  v10 = *a7;
  if ( **a7 == *(uint8_t *)(v9 + 56) )
  {
    v49 = *(char **)(v9 + 36);
    v12 = *((uint32_t *)v10 - 3);
    v52[0] = *(uint32_t *)(v9 + 52);
    v44 = *(uint32_t *)(v9 + 40);
    if ( v12 == 0 )
      goto LABEL_7;
    ++v10;
  }
  else
  {
    v11 = *(uint32_t *)(v9 + 32);
    v52[0] = *(uint32_t *)(v9 + 48);
    v49 = *(char **)(v9 + 28);
    v44 = v11;
    v12 = *((uint32_t *)v10 - 3);
  }
  v13 = (uint8_t *)&v10[v12];
  if ( v10 < (char *)v13 )
  {
    v14 = v10;
    v15 = v39[6];
    if ( (*(uint8_t *)(v15 + (uint8_t)*v10) & 4) != 0 )
    {
      do
        ++v14;
      while ( v14 != (char *)v13 && (*(uint8_t *)(v15 + (uint8_t)*v14) & 4) != 0 );
      v17 = v14 - v10;
      if ( v17 != 0 )
      {
        v50 = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(&v50, 2 * v17);
        v18 = *(uint32_t *)(v9 + 44);
        v19 = v17 - v18;
        v37 = v17 - v18;
        if ( (int)(v17 - v18) > 0 )
        {
          if ( v18 < 0 )
            v19 = v17;
          v37 = v19;
          if ( *(uint32_t *)(v9 + 12) != 0 )
          {
            sub_1939050((int)(uintptr_t)(&v50), 0, *(uint32_t *)(v50 - 12), 2 * v19, 0);
            v45 = *(char **)(v9 + 8);
            v20 = (uint8_t *)v50;
            v40 = *(uint32_t *)(v9 + 12);
            v48 = *(uint8_t *)(v9 + 18);
            if ( *(int *)(v50 - 4) >= 0 )
            {
              sub_19397C0(&v50);
              v20 = (uint8_t *)v50;
            }
            v41 = sub_191F100(v20, v48, v45, v40, v10, &v10[v37]);
            v21 = v50;
            if ( *(int *)(v50 - 4) >= 0 )
            {
              sub_19397C0(&v50);
              v21 = v50;
            }
            v22 = &v41[-v21];
            v23 = *(uint32_t *)(v21 - 12);
            if ( (unsigned int)(uintptr_t)(v22) > v23 )
              sub_1900210("basic_string::erase");
            g4_std::string::clear(&v50, v22, v23 - (uint32_t)(uintptr_t)(v22), 0);
          }
          else
          {
            g4_std_compat::string_assign((int)(uintptr_t)(&v50), v10, v19);
          }
          v18 = *(uint32_t *)(v9 + 44);
        }
        if ( v18 > 0 )
        {
          v24 = v50;
          v46 = *(uint8_t *)(v9 + 17);
          v25 = *(uint32_t *)(v50 - 12);
          v42 = v25 + 1;
          if ( (unsigned int)(v25 + 1) > *(uint32_t *)(v50 - 8) || *(int *)(v50 - 4) > 0 )
          {
            sub_1939B80(&v50, v42);
            v24 = v50;
            v25 = *(uint32_t *)(v50 - 12);
          }
          *(uint8_t *)(v24 + v25) = v46;
          v26 = v50;
          if ( (uint32_t *)(v50 - 12) != dword_213B808 )
          {
            *(uint32_t *)(v50 - 4) = 0;
            *(uint32_t *)(v26 - 12) = v42;
            *(uint8_t *)(v26 + v42) = 0;
          }
          if ( v37 < 0 )
          {
            g4_std_compat::string_reserve((int)(uintptr_t)(&v50), -v37, *(uint8_t *)(v9 + 57));
            g4_std::string::append((int)(uintptr_t)(&v50), v10, v17);
          }
          else
          {
            g4_std::string::append((int)(uintptr_t)(&v50), &v10[v37], *(uint32_t *)(v9 + 44));
          }
        }
        v27 = *(uint32_t *)(a5 + 12);
        v28 = 0;
        if ( (v27 & 0x200) != 0 )
          v28 = *(uint32_t *)(v9 + 24);
        v43 = v28 + *(uint32_t *)(v50 - 12) + v44;
        v51 = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(&v51, 2 * v43);
        v47 = v27 & 0xB0;
        v29 = *(uint32_t *)(a5 + 8);
        v30 = 0;
        v38 = v47 == 16 && v43 < v29;
        while ( 2 )
        {
          switch ( *((uint8_t *)v52 + v30) )
          {
            case 0:
              if ( !v38 )
                goto LABEL_36;
              g4_std_compat::string_reserve((int)(uintptr_t)(&v51), v29 - v43, a6);
              if ( ++v30 != 4 )
                continue;
              break;
            case 1:
              if ( v38 )
              {
                g4_std_compat::string_reserve((int)(uintptr_t)(&v51), v29 - v43, a6);
                goto LABEL_36;
              }
              sub_1939C10(&v51, a6);
              if ( ++v30 != 4 )
                continue;
              break;
            case 2:
              if ( (*(uint8_t *)(a5 + 13) & 2) == 0 )
                goto LABEL_36;
              g4_std::string::append((int)(uintptr_t)(&v51), *(void **)(v9 + 20), *(uint32_t *)(v9 + 24));
              if ( ++v30 != 4 )
                continue;
              break;
            case 3:
              if ( v44 == 0 )
                goto LABEL_36;
              sub_1939C10(&v51, *v49);
              if ( ++v30 != 4 )
                continue;
              break;
            case 4:
              g4_std::string::append_str(&v51, &v50);
              if ( ++v30 != 4 )
                continue;
              break;
            default:
LABEL_36:
              if ( ++v30 != 4 )
                continue;
              break;
          }
          break;
        }
        if ( v44 > 1 )
          g4_std::string::append((int)(uintptr_t)(&v51), v49 + 1, v44 - 1);
        v31 = v51;
        v32 = *(uint32_t *)(v51 - 12);
        if ( v29 > v32 )
        {
          if ( v47 == 32 )
            g4_std_compat::string_reserve((int)(uintptr_t)(&v51), v29 - v32, a6);
          else
            sub_1939050((int)(uintptr_t)(&v51), 0, 0, v29 - v32, a6);
          v31 = v51;
          v32 = v29;
        }
        v33 = a4;
        if ( !a4 )
        {
          v34 = v32 == G4_VCALL<int>(a3, 48, v31, v32);
          v31 = v51;
          v33 = !v34;
        }
        v53 = a4;
        v52[1] = a3;
        LOBYTE(v53) = v33;
        LOBYTE(a4) = v33;
        if ( (uint32_t *)(v31 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v31 - 12));
        }
        v35 = (void *)(v50 - 12);
        if ( (uint32_t *)(v50 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v35);
        }
      }
    }
  }
LABEL_7:
  *(uint32_t *)(a5 + 8) = 0;
  *a1 = a3;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_191FBE0  (binary VA: 0x191fbe0)
// Original: sub_191FBE0
// ----------------------------------------------------------------------------
uint32_t * sub_191FBE0(uint32_t *a1, int a2, int a3, bool a4, int a5, char a6, char **a7)
{
  int32_t v7;
  int *v8;
  int v9;
  char *v10;
  unsigned int v11;
  int v12;
  uint8_t *v13;
  char *v14;
  int v15;
  size_t v17;
  int v18;
  size_t v19;
  uint8_t *v20;
  int v21;
  uint8_t *v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  bool v33; // bp
  bool v34;
  void *v35;
  int v36;
  typedef signed int _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t _g4_t_v52[2];
  typedef bool _g4_t_v53;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v38)) > _g4_s1 ? (0u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v40)) > _g4_s3 ? (8u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v41)) > _g4_s4 ? (8u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v42)) > _g4_s5 ? (8u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v43)) > _g4_s6 ? (8u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v44)) > _g4_s7 ? (12u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v45)) > _g4_s8 ? (16u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v46)) > _g4_s9 ? (16u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v47)) > _g4_s10 ? (16u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v48)) > _g4_s11 ? (24u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v49)) > _g4_s12 ? (28u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v50)) > _g4_s13 ? (44u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v51)) > _g4_s14 ? (48u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v52)) > _g4_s15 ? (52u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v53)) > _g4_s16 ? (60u + sizeof(_g4_t_v53)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);

  v39 = (uint32_t *)(sub_191CFA0(a5 + 108));
  v7 = sub_1902550((int32_t *)&unk_213B7A0);
  v8 = (int *)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * v7);
  v9 = *v8;
  if ( *v8 == 0 )
  {
    v36 = opNew(0x44u);
    *(uint32_t *)(v36 + 4) = 0;
    *(uint32_t *)(v36 + 8) = 0;
    *(uint32_t *)v36 = (uint32_t)(uintptr_t)(&off_20AAB50);
    *(uint32_t *)(v36 + 12) = 0;
    *(uint8_t *)(v36 + 16) = 0;
    *(uint8_t *)(v36 + 17) = 0;
    *(uint8_t *)(v36 + 18) = 0;
    *(uint32_t *)(v36 + 20) = 0;
    *(uint32_t *)(v36 + 24) = 0;
    *(uint32_t *)(v36 + 28) = 0;
    *(uint32_t *)(v36 + 32) = 0;
    *(uint32_t *)(v36 + 36) = 0;
    *(uint32_t *)(v36 + 40) = 0;
    *(uint32_t *)(v36 + 44) = 0;
    *(uint8_t *)(v36 + 48) = 0;
    *(uint8_t *)(v36 + 49) = 0;
    *(uint8_t *)(v36 + 50) = 0;
    *(uint8_t *)(v36 + 51) = 0;
    *(uint8_t *)(v36 + 52) = 0;
    *(uint8_t *)(v36 + 53) = 0;
    *(uint8_t *)(v36 + 54) = 0;
    *(uint8_t *)(v36 + 55) = 0;
    *(uint8_t *)(v36 + 67) = 0;
    sub_191E050(v36, a5 + 108);
    sub_19023D0(*(uint32_t *)(a5 + 108), (volatile int32_t *)v36, v7);
    v9 = *v8;
  }
  v10 = *a7;
  if ( **a7 == *(uint8_t *)(v9 + 56) )
  {
    v49 = *(char **)(v9 + 36);
    v12 = *((uint32_t *)v10 - 3);
    v52[0] = *(uint32_t *)(v9 + 52);
    v44 = *(uint32_t *)(v9 + 40);
    if ( v12 == 0 )
      goto LABEL_7;
    ++v10;
  }
  else
  {
    v11 = *(uint32_t *)(v9 + 32);
    v52[0] = *(uint32_t *)(v9 + 48);
    v49 = *(char **)(v9 + 28);
    v44 = v11;
    v12 = *((uint32_t *)v10 - 3);
  }
  v13 = (uint8_t *)&v10[v12];
  if ( v10 < (char *)v13 )
  {
    v14 = v10;
    v15 = v39[6];
    if ( (*(uint8_t *)(v15 + (uint8_t)*v10) & 4) != 0 )
    {
      do
        ++v14;
      while ( v14 != (char *)v13 && (*(uint8_t *)(v15 + (uint8_t)*v14) & 4) != 0 );
      v17 = v14 - v10;
      if ( v17 != 0 )
      {
        v50 = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(&v50, 2 * v17);
        v18 = *(uint32_t *)(v9 + 44);
        v19 = v17 - v18;
        v37 = v17 - v18;
        if ( (int)(v17 - v18) > 0 )
        {
          if ( v18 < 0 )
            v19 = v17;
          v37 = v19;
          if ( *(uint32_t *)(v9 + 12) != 0 )
          {
            sub_1939050((int)(uintptr_t)(&v50), 0, *(uint32_t *)(v50 - 12), 2 * v19, 0);
            v45 = *(char **)(v9 + 8);
            v20 = (uint8_t *)v50;
            v40 = *(uint32_t *)(v9 + 12);
            v48 = *(uint8_t *)(v9 + 18);
            if ( *(int *)(v50 - 4) >= 0 )
            {
              sub_19397C0(&v50);
              v20 = (uint8_t *)v50;
            }
            v41 = sub_191F100(v20, v48, v45, v40, v10, &v10[v37]);
            v21 = v50;
            if ( *(int *)(v50 - 4) >= 0 )
            {
              sub_19397C0(&v50);
              v21 = v50;
            }
            v22 = &v41[-v21];
            v23 = *(uint32_t *)(v21 - 12);
            if ( (unsigned int)(uintptr_t)(v22) > v23 )
              sub_1900210("basic_string::erase");
            g4_std::string::clear(&v50, v22, v23 - (uint32_t)(uintptr_t)(v22), 0);
          }
          else
          {
            g4_std_compat::string_assign((int)(uintptr_t)(&v50), v10, v19);
          }
          v18 = *(uint32_t *)(v9 + 44);
        }
        if ( v18 > 0 )
        {
          v24 = v50;
          v46 = *(uint8_t *)(v9 + 17);
          v25 = *(uint32_t *)(v50 - 12);
          v42 = v25 + 1;
          if ( (unsigned int)(v25 + 1) > *(uint32_t *)(v50 - 8) || *(int *)(v50 - 4) > 0 )
          {
            sub_1939B80(&v50, v42);
            v24 = v50;
            v25 = *(uint32_t *)(v50 - 12);
          }
          *(uint8_t *)(v24 + v25) = v46;
          v26 = v50;
          if ( (uint32_t *)(v50 - 12) != dword_213B808 )
          {
            *(uint32_t *)(v50 - 4) = 0;
            *(uint32_t *)(v26 - 12) = v42;
            *(uint8_t *)(v26 + v42) = 0;
          }
          if ( v37 < 0 )
          {
            g4_std_compat::string_reserve((int)(uintptr_t)(&v50), -v37, *(uint8_t *)(v9 + 57));
            g4_std::string::append((int)(uintptr_t)(&v50), v10, v17);
          }
          else
          {
            g4_std::string::append((int)(uintptr_t)(&v50), &v10[v37], *(uint32_t *)(v9 + 44));
          }
        }
        v27 = *(uint32_t *)(a5 + 12);
        v28 = 0;
        if ( (v27 & 0x200) != 0 )
          v28 = *(uint32_t *)(v9 + 24);
        v43 = v28 + *(uint32_t *)(v50 - 12) + v44;
        v51 = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(&v51, 2 * v43);
        v47 = v27 & 0xB0;
        v29 = *(uint32_t *)(a5 + 8);
        v30 = 0;
        v38 = v47 == 16 && v43 < v29;
        while ( 2 )
        {
          switch ( *((uint8_t *)v52 + v30) )
          {
            case 0:
              if ( !v38 )
                goto LABEL_36;
              g4_std_compat::string_reserve((int)(uintptr_t)(&v51), v29 - v43, a6);
              if ( ++v30 != 4 )
                continue;
              break;
            case 1:
              if ( v38 )
              {
                g4_std_compat::string_reserve((int)(uintptr_t)(&v51), v29 - v43, a6);
                goto LABEL_36;
              }
              sub_1939C10(&v51, a6);
              if ( ++v30 != 4 )
                continue;
              break;
            case 2:
              if ( (*(uint8_t *)(a5 + 13) & 2) == 0 )
                goto LABEL_36;
              g4_std::string::append((int)(uintptr_t)(&v51), *(void **)(v9 + 20), *(uint32_t *)(v9 + 24));
              if ( ++v30 != 4 )
                continue;
              break;
            case 3:
              if ( v44 == 0 )
                goto LABEL_36;
              sub_1939C10(&v51, *v49);
              if ( ++v30 != 4 )
                continue;
              break;
            case 4:
              g4_std::string::append_str(&v51, &v50);
              if ( ++v30 != 4 )
                continue;
              break;
            default:
LABEL_36:
              if ( ++v30 != 4 )
                continue;
              break;
          }
          break;
        }
        if ( v44 > 1 )
          g4_std::string::append((int)(uintptr_t)(&v51), v49 + 1, v44 - 1);
        v31 = v51;
        v32 = *(uint32_t *)(v51 - 12);
        if ( v29 > v32 )
        {
          if ( v47 == 32 )
            g4_std_compat::string_reserve((int)(uintptr_t)(&v51), v29 - v32, a6);
          else
            sub_1939050((int)(uintptr_t)(&v51), 0, 0, v29 - v32, a6);
          v31 = v51;
          v32 = v29;
        }
        v33 = a4;
        if ( !a4 )
        {
          v34 = v32 == G4_VCALL<int>(a3, 48, v31, v32);
          v31 = v51;
          v33 = !v34;
        }
        v53 = a4;
        v52[1] = a3;
        LOBYTE(v53) = v33;
        LOBYTE(a4) = v33;
        if ( (uint32_t *)(v31 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v31 - 12));
        }
        v35 = (void *)(v50 - 12);
        if ( (uint32_t *)(v50 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v35);
        }
      }
    }
  }
LABEL_7:
  *(uint32_t *)(a5 + 8) = 0;
  *a1 = a3;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19203A0  (binary VA: 0x19203a0)
// Original: sub_19203A0
// ----------------------------------------------------------------------------
uint32_t * sub_19203A0(uint32_t *a1, int a2, int a3, bool a4, char a5, int a6, char a7, char **a8)
{
  if ( a5 != 0 )
    sub_191F420(a1, a2, a3, a4, a6, a7, a8);
  else
    sub_191FBE0(a1, a2, a3, a4, a6, a7, a8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1920420  (binary VA: 0x1920420)
// Original: sub_1920420
// ----------------------------------------------------------------------------
uint32_t * sub_1920420(uint32_t *a1, int a2, int a3, bool a4, char a5, int a6, char a7, int64_t a8)
{
  uint8_t *v8;
  char v9;
  char *v10;
  void *v11;
  typedef char _g4_t_v13[338];
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef size_t _g4_t_v16;
  typedef void *_g4_t_dest[2];
  typedef uint16_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (350u + sizeof(_g4_t_v14)) > _g4_s1 ? (350u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (351u + sizeof(_g4_t_v15)) > _g4_s2 ? (351u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (352u + sizeof(_g4_t_v16)) > _g4_s3 ? (352u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (356u + sizeof(_g4_t_dest)) > _g4_s4 ? (356u + sizeof(_g4_t_dest)) : _g4_s4,
    _g4_s6 = (366u + sizeof(_g4_t_v18)) > _g4_s5 ? (366u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (372u + sizeof(_g4_t_v19)) > _g4_s6 ? (372u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (376u + sizeof(_g4_t_v20)) > _g4_s7 ? (376u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 350u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 351u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 352u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 356u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 366u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 372u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 376u);

  v15 = a5;
  v14 = a7;
  *(uint64_t *)dest = a8;
  sub_1901AC0((volatile int32_t **)&v18[1], (volatile int32_t **)(a6 + 108));
  v8 = (uint8_t *)(sub_191CFA0((int)(uintptr_t)(&v18[1])));
  v19 = sub_1901FF0();
  v16 = sub_191A680((int)(uintptr_t)(&v19), v13, 0, "%.*Lf", 0, dest[0], dest[1]);
  sub_1938A90((int)(uintptr_t)(v20), v16, 0, (int)(uintptr_t)(v18));
  dest[0] = (void *)v20[0];
  if ( *(int *)(v20[0] - 4) >= 0 )
  {
    sub_19397C0(v20);
    dest[0] = (void *)v20[0];
  }
  v9 = v8[28];
  v10 = &v13[v16];
  v16 += (size_t)v13;
  if ( v9 == 1 )
  {
    memcpy(dest[0], v13, v10 - v13);
  }
  else
  {
    if ( v9 == 0 )
      sub_18FFC70(v8);
    G4_VCALL<void>(v8, 28, v13, v16, dest[0]);
  }
  if ( v15 != 0 )
    sub_191F420(a1, a2, a3, a4, a6, v14, (char **)v20);
  else
    sub_191FBE0(a1, a2, a3, a4, a6, v14, (char **)v20);
  v11 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  sub_1902180((volatile int32_t **)&v18[1]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1920650  (binary VA: 0x1920650)
// Original: sub_1920650
// ----------------------------------------------------------------------------
void * sub_1920650(int a1, char a2, char *dest, char *src, int a5, int a6)
{
  size_t n;
  int v7;
  char *s;
  int v9;
  uint8_t *v11;
  uint8_t *v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  uint8_t *v23;
  uint8_t *v24;
  uint8_t *v25;

  n = a5 - a6;
  v7 = *(uint32_t *)(a1 + 12) & 0xB0;
  s = dest;
  if ( v7 == 32 )
  {
    memcpy(dest, src, a6);
    return memset(&dest[a6], a2, n);
  }
  else
  {
    v9 = 0;
    if ( v7 == 16 )
    {
      v11 = (uint8_t *)(sub_191CFA0(a1 + 108));
      v12 = v11;
      if ( v11[28] != 0 )
      {
        v16 = v11[74];
      }
      else
      {
        v22 = v11;
        sub_18FFC70(v11);
        v16 = G4_VCALL<int>(v22, 24, 45);
        v12 = v22;
      }
      v13 = *src;
      if ( *src == v16
        || (v12[28] == 0
          ? (v21 = v12,
             sub_18FFC70(v12),
             v17 = G4_VCALL<int>(v21, 24, 43),
             v12 = v21,
             v13 = *src)
          : (v17 = v12[72]),
            v17 == v13) )
      {
        *dest = v13;
        v9 = 1;
        s = dest + 1;
      }
      else
      {
        if ( v12[28] != 0 )
        {
          v18 = v12[77];
        }
        else
        {
          v23 = v12;
          sub_18FFC70(v12);
          v18 = G4_VCALL<int>(v23, 24, 48);
          v12 = v23;
          v13 = *src;
        }
        if ( v13 == v18 && a6 > 1 )
        {
          if ( v12[28] != 0 )
          {
            v14 = v12[149];
          }
          else
          {
            v24 = v12;
            sub_18FFC70(v12);
            v14 = G4_VCALL<int>(v24, 24, 120);
            v12 = v24;
          }
          v19 = src[1];
          if ( v19 == v14
            || (v12[28] == 0
              ? (v25 = v12,
                 sub_18FFC70(v12),
                 v15 = G4_VCALL<int>(v25, 24, 88),
                 v19 = src[1])
              : (v15 = v12[117]),
                v19 == v15) )
          {
            v9 = 2;
            *dest = *src;
            dest[1] = src[1];
            s = dest + 2;
          }
          else
          {
            v9 = 0;
          }
        }
        else
        {
          v9 = 0;
        }
      }
    }
    v20 = v9;
    memset(s, a2, n);
    return memcpy(&s[n], &src[v20], a6 - v20);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19208F0  (binary VA: 0x19208f0)
// Original: sub_19208F0
// ----------------------------------------------------------------------------
void * sub_19208F0(int a1, char a2, int a3, int a4, char *dest, char *src, int *a7)
{
  void *result;

  result = sub_1920650(a4, a2, dest, src, a3, *a7);
  *a7 = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1920950  (binary VA: 0x1920950)
// Original: sub_1920950
// ----------------------------------------------------------------------------
uint32_t * sub_1920950(uint32_t *a1, int a2, int a3, bool a4, int a5, char a6, char a7, int64_t a8)
{
  volatile int32_t **v8;
  int v9;
  int v10;
  void *v11;
  uint8_t *v12;
  char *v13;
  char v14;
  void *v15;
  char *v16;
  int v17;
  char *v18;
  uint8_t *v19;
  char *v20;
  char *v21;
  int v22;
  void *v23;
  bool v24; // si
  void *v26;
  char v27;
  char v28;
  int v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31[3];
  typedef char _g4_t_v32;
  typedef char *_g4_t_format;
  typedef uint8_t *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef bool _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int64_t _g4_t_v38 __attribute__((aligned(1)));
  typedef size_t _g4_t_n;
  typedef void *_g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef void *_g4_t_s;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[40];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v31)) > _g4_s1 ? (28u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v32)) > _g4_s2 ? (31u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_format)) > _g4_s3 ? (32u + sizeof(_g4_t_format)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v34)) > _g4_s4 ? (36u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (43u + sizeof(_g4_t_v35)) > _g4_s5 ? (43u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v36)) > _g4_s6 ? (44u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v37)) > _g4_s7 ? (48u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v38)) > _g4_s8 ? (52u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_n)) > _g4_s9 ? (60u + sizeof(_g4_t_n)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v40)) > _g4_s10 ? (64u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v41)) > _g4_s11 ? (68u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_s)) > _g4_s12 ? (72u + sizeof(_g4_t_s)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v43)) > _g4_s13 ? (84u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v44)) > _g4_s14 ? (88u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v45)) > _g4_s15 ? (92u + sizeof(_g4_t_v45)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 31u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 43u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);

  v37 = a3;
  v36 = a4;
  v35 = a6;
  LOBYTE(n) = a7;
  v40 = (void *)(a5 + 108);
  v38 = a8;
  s = (void *)sub_1902550(&dword_213B790);
  v8 = (volatile int32_t **)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * (uint32_t)(uintptr_t)(s));
  v41 = *v8;
  if ( v41 == nullptr )
  {
    v29 = opNew(0x68u);
    v41 = (volatile int32_t *)v29;
    *(uint32_t *)(v29 + 4) = 0;
    *(uint32_t *)(v29 + 8) = 0;
    *(uint32_t *)v29 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v29 + 12) = 0;
    *(uint8_t *)(v29 + 16) = 0;
    *(uint32_t *)(v29 + 20) = 0;
    *(uint32_t *)(v29 + 24) = 0;
    *(uint32_t *)(v29 + 28) = 0;
    *(uint32_t *)(v29 + 32) = 0;
    *(uint8_t *)(v29 + 36) = 0;
    *(uint8_t *)(v29 + 37) = 0;
    *(uint8_t *)(v29 + 100) = 0;
    sub_191D3E0(v29, (int)(uintptr_t)(v40));
    sub_19023D0(*(uint32_t *)(a5 + 108), v41, (int)(uintptr_t)(s));
    v41 = *v8;
  }
  v9 = *(uint32_t *)(a5 + 4);
  if ( v9 < 0 )
    v9 = 6;
  format = (char *)(v45);
  sub_1953DD0(a5, v45, n);
  v10 = v9 + 312;
  if ( (*(uint8_t *)(a5 + 12) & 4) == 0 )
    v10 = v9 + 30;
  v11 = alloca(v10 + 15);
  s = v31;
  v44 = sub_1901FF0();
  v43 = sub_191A680((int)(uintptr_t)(&v44), (char *)s, 0, format, v9, v38);
  v12 = (uint8_t *)(sub_191CFA0((int)(uintptr_t)(v40)));
  v13 = (char *)v43;
  n = v43;
  LODWORD(v38) = (uint32_t)(uintptr_t)((char *)s + v43);
  v14 = v12[28];
  v15 = alloca(v43 + 15);
  v16 = v31;
  v40 = v31;
  if ( v14 == 1 )
  {
    format = v31;
    memcpy(v31, s, v38 - (uint32_t)(uintptr_t)(s));
    v18 = format;
  }
  else
  {
    if ( v14 == 0 )
    {
      v34 = v12;
      format = v31;
      sub_18FFC70(v12);
      v16 = format;
      v12 = v34;
    }
    v17 = *(uint32_t *)v12;
    format = v16;
    (*(void (**)(uint8_t *, void *, uint32_t, char *))(v17 + 28))(v12, s, v38, v16);
    v13 = (char *)v43;
    v18 = format;
    n = v43;
  }
  format = v18;
  v19 = (uint8_t *)(memchr(s, 46, n));
  v20 = nullptr;
  v21 = format;
  if ( v19 != nullptr )
  {
    v20 = &format[v19 - (uint8_t *)s];
    *v20 = *((uint8_t *)v41 + 36);
  }
  if ( *((uint8_t *)v41 + 16) != 0 )
  {
    if ( v20 != nullptr
      || (int)(uintptr_t)(v13) <= 2
      || (v32 = *((uint8_t *)s + 1)) <= 57
      && (LOBYTE(v38) = *((uint8_t *)s + 2), (char)v38 <= 57)
      && v32 > 47
      && (char)v38 > 47 )
    {
      v26 = alloca(2 * n + 15);
      v40 = v31;
      v27 = *(uint8_t *)s;
      if ( *(uint8_t *)s == 43 || (n = 0, s = nullptr, v27 == 45) )
      {
        --v43;
        v28 = *v21;
        n = 1;
        s = &dword_0 + 1;
        *(uint8_t *)v40 = v28;
      }
      sub_191F340(a2, *((char **)v41 + 2), *((uint32_t *)v41 + 3), *((uint8_t *)v41 + 37), v20, (int)(uintptr_t)(v40) + n, &v21[n], &v43);
      v13 = (char *)s + v43;
      v43 += (int)(uintptr_t)(s);
    }
  }
  v22 = *(uint32_t *)(a5 + 8);
  if ( (int)(uintptr_t)(v13) < v22 )
  {
    v23 = alloca(v22 + 15);
    v30 = *(uint32_t *)(a5 + 8);
    format = v31;
    sub_19208F0(a2, v35, v30, a5, v31, (char *)v40, &v43);
    v13 = (char *)v43;
    v40 = format;
  }
  *(uint32_t *)(a5 + 8) = 0;
  v24 = v36;
  if ( !v36 )
    v24 = G4_VCALL<int>(v37, 48, v40, v13) != (uint32_t)(uintptr_t)(v13);
  a1[1] = v36;
  *a1 = v37;
  *((uint8_t *)a1 + 4) = v24;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1920D80  (binary VA: 0x1920d80)
// Original: sub_1920D80
// ----------------------------------------------------------------------------
uint32_t * sub_1920D80(uint32_t *a1, int a2, int a3, bool a4, int a5, char a6, int64_t a7)
{
  sub_1920950(a1, a2, a3, a4, a5, a6, 76, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1920DE0  (binary VA: 0x1920de0)
// Original: sub_1920DE0
// ----------------------------------------------------------------------------
uint32_t * sub_1920DE0(uint32_t *a1, int a2, int a3, bool a4, int a5, char a6, char a7, int64_t a8)
{
  volatile int32_t **v8;
  int v9;
  int v10;
  void *v11;
  uint8_t *v12;
  char *v13;
  char v14;
  void *v15;
  char *v16;
  int v17;
  char *v18;
  uint8_t *v19;
  char *v20;
  char *v21;
  int v22;
  void *v23;
  bool v24; // si
  void *v26;
  char v27;
  char v28;
  int v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31[3];
  typedef char _g4_t_v32;
  typedef char *_g4_t_format;
  typedef uint8_t *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef bool _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int64_t _g4_t_v38 __attribute__((aligned(1)));
  typedef size_t _g4_t_n;
  typedef void *_g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef void *_g4_t_s;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[40];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v31)) > _g4_s1 ? (28u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v32)) > _g4_s2 ? (31u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_format)) > _g4_s3 ? (32u + sizeof(_g4_t_format)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v34)) > _g4_s4 ? (36u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (43u + sizeof(_g4_t_v35)) > _g4_s5 ? (43u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v36)) > _g4_s6 ? (44u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v37)) > _g4_s7 ? (48u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v38)) > _g4_s8 ? (52u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_n)) > _g4_s9 ? (60u + sizeof(_g4_t_n)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v40)) > _g4_s10 ? (64u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v41)) > _g4_s11 ? (68u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_s)) > _g4_s12 ? (72u + sizeof(_g4_t_s)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v43)) > _g4_s13 ? (84u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v44)) > _g4_s14 ? (88u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v45)) > _g4_s15 ? (92u + sizeof(_g4_t_v45)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 31u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 43u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);

  v37 = a3;
  v36 = a4;
  v35 = a6;
  LOBYTE(n) = a7;
  v40 = (void *)(a5 + 108);
  v38 = a8;
  s = (void *)sub_1902550(&dword_213B790);
  v8 = (volatile int32_t **)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * (uint32_t)(uintptr_t)(s));
  v41 = *v8;
  if ( v41 == nullptr )
  {
    v29 = opNew(0x68u);
    v41 = (volatile int32_t *)v29;
    *(uint32_t *)(v29 + 4) = 0;
    *(uint32_t *)(v29 + 8) = 0;
    *(uint32_t *)v29 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v29 + 12) = 0;
    *(uint8_t *)(v29 + 16) = 0;
    *(uint32_t *)(v29 + 20) = 0;
    *(uint32_t *)(v29 + 24) = 0;
    *(uint32_t *)(v29 + 28) = 0;
    *(uint32_t *)(v29 + 32) = 0;
    *(uint8_t *)(v29 + 36) = 0;
    *(uint8_t *)(v29 + 37) = 0;
    *(uint8_t *)(v29 + 100) = 0;
    sub_191D3E0(v29, (int)(uintptr_t)(v40));
    sub_19023D0(*(uint32_t *)(a5 + 108), v41, (int)(uintptr_t)(s));
    v41 = *v8;
  }
  v9 = *(uint32_t *)(a5 + 4);
  if ( v9 < 0 )
    v9 = 6;
  format = (char *)(v45);
  sub_1953DD0(a5, v45, n);
  v10 = v9 + 312;
  if ( (*(uint8_t *)(a5 + 12) & 4) == 0 )
    v10 = v9 + 30;
  v11 = alloca(v10 + 15);
  s = v31;
  v44 = sub_1901FF0();
  v43 = sub_191A680((int)(uintptr_t)(&v44), (char *)s, 0, format, v9, v38);
  v12 = (uint8_t *)(sub_191CFA0((int)(uintptr_t)(v40)));
  v13 = (char *)v43;
  n = v43;
  LODWORD(v38) = (uint32_t)(uintptr_t)((char *)s + v43);
  v14 = v12[28];
  v15 = alloca(v43 + 15);
  v16 = v31;
  v40 = v31;
  if ( v14 == 1 )
  {
    format = v31;
    memcpy(v31, s, v38 - (uint32_t)(uintptr_t)(s));
    v18 = format;
  }
  else
  {
    if ( v14 == 0 )
    {
      v34 = v12;
      format = v31;
      sub_18FFC70(v12);
      v16 = format;
      v12 = v34;
    }
    v17 = *(uint32_t *)v12;
    format = v16;
    (*(void (**)(uint8_t *, void *, uint32_t, char *))(v17 + 28))(v12, s, v38, v16);
    v13 = (char *)v43;
    v18 = format;
    n = v43;
  }
  format = v18;
  v19 = (uint8_t *)(memchr(s, 46, n));
  v20 = nullptr;
  v21 = format;
  if ( v19 != nullptr )
  {
    v20 = &format[v19 - (uint8_t *)s];
    *v20 = *((uint8_t *)v41 + 36);
  }
  if ( *((uint8_t *)v41 + 16) != 0 )
  {
    if ( v20 != nullptr
      || (int)(uintptr_t)(v13) <= 2
      || (v32 = *((uint8_t *)s + 1)) <= 57
      && (LOBYTE(v38) = *((uint8_t *)s + 2), (char)v38 <= 57)
      && v32 > 47
      && (char)v38 > 47 )
    {
      v26 = alloca(2 * n + 15);
      v40 = v31;
      v27 = *(uint8_t *)s;
      if ( *(uint8_t *)s == 43 || (n = 0, s = nullptr, v27 == 45) )
      {
        --v43;
        v28 = *v21;
        n = 1;
        s = &dword_0 + 1;
        *(uint8_t *)v40 = v28;
      }
      sub_191F340(a2, *((char **)v41 + 2), *((uint32_t *)v41 + 3), *((uint8_t *)v41 + 37), v20, (int)(uintptr_t)(v40) + n, &v21[n], &v43);
      v13 = (char *)s + v43;
      v43 += (int)(uintptr_t)(s);
    }
  }
  v22 = *(uint32_t *)(a5 + 8);
  if ( (int)(uintptr_t)(v13) < v22 )
  {
    v23 = alloca(v22 + 15);
    v30 = *(uint32_t *)(a5 + 8);
    format = v31;
    sub_19208F0(a2, v35, v30, a5, v31, (char *)v40, &v43);
    v13 = (char *)v43;
    v40 = format;
  }
  *(uint32_t *)(a5 + 8) = 0;
  v24 = v36;
  if ( !v36 )
    v24 = G4_VCALL<int>(v37, 48, v40, v13) != (uint32_t)(uintptr_t)(v13);
  a1[1] = v36;
  *a1 = v37;
  *((uint8_t *)a1 + 4) = v24;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1921210  (binary VA: 0x1921210)
// Original: sub_1921210
// ----------------------------------------------------------------------------
uint32_t * sub_1921210(uint32_t *a1, int a2, int a3, bool a4, int a5, char a6, int64_t a7)
{
  sub_1920DE0(a1, a2, a3, a4, a5, a6, 0, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1921270  (binary VA: 0x1921270)
// Original: sub_1921270
// ----------------------------------------------------------------------------
int sub_1921270(uint8_t *a1, unsigned int a2, int a3, int16_t a4, char a5)
{
  uint8_t *v6;
  char v7;
  int v9;
  int v10;

  if ( a5 != 0 )
  {
    v6 = a1;
    do
    {
      --v6;
      v7 = *(uint8_t *)(a3 + a2 % 0xA + 4);
      a2 /= 0xAu;
      *v6 = v7;
    }
    while ( a2 != 0 );
  }
  else if ( (a4 & 0x4A) == 0x40 )
  {
    v6 = a1;
    do
    {
      --v6;
      v10 = a2 & 7;
      a2 >>= 3;
      *v6 = *(uint8_t *)(a3 + v10 + 4);
    }
    while ( a2 != 0 );
  }
  else
  {
    v6 = a1;
    do
    {
      --v6;
      v9 = a2 & 0xF;
      a2 >>= 4;
      *v6 = *(uint8_t *)(a3 + ((a4 & 0x4000) == 0 ? 0xFFFFFFF0 : 0) + 20 + v9);
    }
    while ( a2 != 0 );
  }
  return a1 - v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1921310  (binary VA: 0x1921310)
// Original: sub_1921310
// ----------------------------------------------------------------------------
uint32_t * sub_1921310(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, unsigned int a7)
{
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  char *v13;
  int v14;
  void *v15;
  char v16; // si
  void *v18;
  int v19;
  char v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24[2];
  typedef uint8_t _g4_t_v25[18];
  typedef char _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[7];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v24)) > _g4_s3 ? (28u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v25)) > _g4_s4 ? (30u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v26)) > _g4_s5 ? (48u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v27)) > _g4_s6 ? (80u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (87u + sizeof(_g4_t_v28)) > _g4_s7 ? (87u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v29)) > _g4_s8 ? (88u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v30)) > _g4_s9 ? (92u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v32)) > _g4_s11 ? (100u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v33)) > _g4_s12 ? (104u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v34)) > _g4_s13 ? (120u + sizeof(_g4_t_v34)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 30u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 87u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);

  v32 = a3;
  v28 = a6;
  v29 = a4;
  v33 = sub_1902550(&dword_213B790);
  v7 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v33);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v19 = opNew(0x68u);
    *(uint32_t *)(v19 + 4) = 0;
    *(uint32_t *)v19 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v19 + 8) = 0;
    *(uint32_t *)(v19 + 12) = 0;
    *(uint8_t *)(v19 + 16) = 0;
    *(uint32_t *)(v19 + 20) = 0;
    *(uint32_t *)(v19 + 24) = 0;
    *(uint32_t *)(v19 + 28) = 0;
    *(uint32_t *)(v19 + 32) = 0;
    *(uint8_t *)(v19 + 36) = 0;
    *(uint8_t *)(v19 + 37) = 0;
    *(uint8_t *)(v19 + 100) = 0;
    sub_191D3E0(v19, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v19, v33);
    v8 = *v7;
  }
  v9 = a5[3];
  v27 = v24;
  v31 = v9;
  v30 = v9 & 0x4A;
  LOBYTE(v33) = v30 != 64 && v30 != 8;
  v10 = sub_1921270(&v26, a7, v8 + 38, v9, v33);
  v11 = v10;
  v12 = *(uint8_t *)(v8 + 16) == 0;
  v34[0] = v10;
  v13 = &v27[-v10 + 20];
  if ( !v12 )
  {
    v18 = alloca(16 * ((2 * v10 + 32) / 0x10u));
    v23 = *(uint8_t *)(v8 + 37);
    v22 = *(uint32_t *)(v8 + 12);
    v21 = *(char **)(v8 + 8);
    v27 = (char *)(v25);
    sub_191F2E0(a2, v21, v22, v23, (int)(uintptr_t)(a5), v25, v13, v34);
    v11 = v34[0];
    v13 = v27;
  }
  if ( (uint8_t)v33 == 0 && (v31 & 0x200) != 0 && a7 != 0 )
  {
    if ( v30 == 64 )
    {
      ++v11;
      *(v13 - 1) = *(uint8_t *)(v8 + 42);
      v34[0] = v11;
      --v13;
    }
    else
    {
      v11 += 2;
      v20 = *(uint8_t *)(v8 + ((v31 & 0x4000) != 0) + 40);
      v34[0] = v11;
      *(v13 - 1) = v20;
      *(v13 - 2) = *(uint8_t *)(v8 + 42);
      v13 -= 2;
    }
  }
  v14 = a5[2];
  if ( v11 < v14 )
  {
    v15 = alloca(v14 + 15);
    sub_19208F0(a2, v28, v14, (int)(uintptr_t)(a5), v24, v13, v34);
    v11 = v34[0];
    v13 = v24;
  }
  v16 = v29;
  v12 = (uint8_t)v29 == 0;
  a5[2] = 0;
  if ( v12 && v11 != G4_VCALL<int>(v32, 48, v13, v11) )
    v16 = 1;
  a1[1] = v29;
  *a1 = v32;
  *((uint8_t *)a1 + 4) = v16;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1921600  (binary VA: 0x1921600)
// Original: sub_1921600
// ----------------------------------------------------------------------------
uint32_t * sub_1921600(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, unsigned int a7)
{
  int v7;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v7 = a5[3];
  a5[3] = v7 & 0xFFFFBDB5 | 0x208;
  sub_1921310(&v9, a2, a3, a4, a5, a6, a7);
  a5[3] = v7;
  LOBYTE(a4) = v10;
  *a1 = v9;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19216A0  (binary VA: 0x19216a0)
// Original: sub_19216A0
// ----------------------------------------------------------------------------
uint32_t * sub_19216A0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, unsigned int a7)
{
  sub_1921310(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19216F0  (binary VA: 0x19216f0)
// Original: sub_19216F0
// ----------------------------------------------------------------------------
uint32_t * sub_19216F0(uint32_t *a1, int a2, int a3, bool a4, uint32_t *a5, char a6, int a7)
{
  int *v7;
  int v8;
  unsigned int v9;
  int v10;
  uint8_t *v11;
  int v12;
  char *v13;
  int v14;
  void *v15;
  bool v16; // si
  int v18;
  void *v19;
  int v20;
  char v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25[2];
  typedef uint8_t _g4_t_v26[18];
  typedef char _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef bool _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef volatile int32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v25)) > _g4_s3 ? (36u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v26)) > _g4_s4 ? (38u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v27)) > _g4_s5 ? (56u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v28)) > _g4_s6 ? (96u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v29)) > _g4_s7 ? (100u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (107u + sizeof(_g4_t_v30)) > _g4_s8 ? (107u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v31)) > _g4_s9 ? (108u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v32)) > _g4_s10 ? (112u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v33)) > _g4_s11 ? (116u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v34)) > _g4_s12 ? (120u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v35)) > _g4_s13 ? (124u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v36)) > _g4_s14 ? (128u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v37)) > _g4_s15 ? (144u + sizeof(_g4_t_v37)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 38u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 107u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);

  v34 = a3;
  v32 = a4;
  v30 = a6;
  v36 = sub_1902550(&dword_213B790);
  v7 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v36);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v20 = opNew(0x68u);
    v35 = (volatile int32_t *)v20;
    *(uint32_t *)(v20 + 4) = 0;
    *(uint32_t *)(v20 + 8) = 0;
    *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v20 + 12) = 0;
    *(uint8_t *)(v20 + 16) = 0;
    *(uint32_t *)(v20 + 20) = 0;
    *(uint32_t *)(v20 + 24) = 0;
    *(uint32_t *)(v20 + 28) = 0;
    *(uint32_t *)(v20 + 32) = 0;
    *(uint8_t *)(v20 + 36) = 0;
    *(uint8_t *)(v20 + 37) = 0;
    *(uint8_t *)(v20 + 100) = 0;
    sub_191D3E0(v20, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], v35, v36);
    v8 = *v7;
  }
  v31 = v8 + 38;
  v35 = (volatile int32_t *)a5[3];
  v33 = (uint8_t)(uintptr_t)(v35) & 0x4A;
  LOBYTE(v36) = v33 != 64 && v33 != 8;
  if ( a7 > 0 || (v9 = -a7, (uint8_t)v36 == 0) )
    v9 = a7;
  v29 = v8;
  v28 = v25;
  v10 = sub_1921270(&v27, v9, v31, (int16_t)(uintptr_t)(v35), v36);
  v11 = (uint8_t *)v29;
  v12 = v10;
  v37[0] = v10;
  v13 = &v28[-v10 + 20];
  if ( *(uint8_t *)(v29 + 16) != 0 )
  {
    v19 = alloca(2 * v12 + 17);
    v24 = *(uint8_t *)(v29 + 37);
    v23 = *(uint32_t *)(v29 + 12);
    v22 = *(char **)(v29 + 8);
    v28 = (char *)(v26);
    sub_191F2E0(a2, v22, v23, v24, (int)(uintptr_t)(a5), v26, v13, v37);
    v12 = v37[0];
    v13 = v28;
    v11 = (uint8_t *)v29;
  }
  if ( (uint8_t)v36 != 0 )
  {
    if ( a7 < 0 )
    {
      ++v12;
      *(v13 - 1) = v11[38];
      v37[0] = v12;
      --v13;
    }
    else if ( ((uint16_t)(uintptr_t)(v35) & 0x800) != 0 )
    {
      ++v12;
      *(v13 - 1) = v11[39];
      v37[0] = v12;
      --v13;
    }
  }
  else if ( ((uint16_t)(uintptr_t)(v35) & 0x200) != 0 && a7 != 0 )
  {
    if ( v33 == 64 )
    {
      ++v12;
      *(v13 - 1) = v11[42];
      v37[0] = v12;
      --v13;
    }
    else
    {
      v12 += 2;
      v21 = v11[(((uint16_t)(uintptr_t)(v35) & 0x4000) != 0) + 40];
      v37[0] = v12;
      *(v13 - 1) = v21;
      *(v13 - 2) = v11[42];
      v13 -= 2;
    }
  }
  v14 = a5[2];
  if ( v14 > v12 )
  {
    v15 = alloca(v14 + 15);
    v28 = v25;
    sub_19208F0(a2, v30, v14, (int)(uintptr_t)(a5), v25, v13, v37);
    v12 = v37[0];
    v13 = v28;
  }
  a5[2] = 0;
  v16 = v32;
  if ( !v32 )
    v16 = v12 != G4_VCALL<int>(v34, 48, v13, v12);
  v18 = v34;
  a1[1] = v32;
  *a1 = v18;
  *((uint8_t *)a1 + 4) = v16;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1921A50  (binary VA: 0x1921a50)
// Original: sub_1921A50
// ----------------------------------------------------------------------------
uint32_t * sub_1921A50(uint32_t *a1, int a2, int a3, bool a4, uint32_t *a5, char a6, int a7)
{
  sub_19216F0(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1921AA0  (binary VA: 0x1921aa0)
// Original: sub_1921AA0
// ----------------------------------------------------------------------------
int * sub_1921AA0(int *a1, int a2, int a3, bool a4, uint32_t *a5, bool a6, uint8_t a7)
{
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  int v34;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef void *_g4_t_s;
  typedef int _g4_t_v24;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef bool _g4_t_v33;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_s)) > _g4_s3 ? (24u + sizeof(_g4_t_s)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (39u + sizeof(_g4_t_v26)) > _g4_s6 ? (39u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_n)) > _g4_s7 ? (40u + sizeof(_g4_t_n)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v28)) > _g4_s8 ? (44u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v29)) > _g4_s9 ? (48u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v30)) > _g4_s10 ? (52u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v31)) > _g4_s11 ? (56u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v32)) > _g4_s12 ? (68u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v33)) > _g4_s13 ? (72u + sizeof(_g4_t_v33)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 39u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);

  v26 = a6;
  LOBYTE(n) = a7;
  v24 = a5[3];
  if ( (v24 & 1) != 0 )
  {
    s = (void *)sub_1902550(&dword_213B790);
    v8 = (uint32_t *)(*(uint32_t *)(a5[27] + 12) + 4 * (uint32_t)(uintptr_t)(s));
    v9 = (uint32_t *)*v8;
    if ( *v8 == 0 )
    {
      v19 = opNew(0x68u);
      v22 = (volatile int32_t *)v19;
      *(uint32_t *)(v19 + 4) = 0;
      *(uint32_t *)(v19 + 8) = 0;
      *(uint32_t *)v19 = (uint32_t)(uintptr_t)(&off_20AAB70);
      *(uint32_t *)(v19 + 12) = 0;
      *(uint8_t *)(v19 + 16) = 0;
      *(uint32_t *)(v19 + 20) = 0;
      *(uint32_t *)(v19 + 24) = 0;
      *(uint32_t *)(v19 + 28) = 0;
      *(uint32_t *)(v19 + 32) = 0;
      *(uint8_t *)(v19 + 36) = 0;
      *(uint8_t *)(v19 + 37) = 0;
      *(uint8_t *)(v19 + 100) = 0;
      sub_191D3E0(v19, (int)(uintptr_t)(a5 + 27));
      sub_19023D0(a5[27], v22, (int)(uintptr_t)(s));
      v9 = (uint32_t *)*v8;
    }
    if ( (uint8_t)n != 0 )
    {
      v10 = v9[6];
      v11 = v9[5];
      v12 = a5[2];
      if ( v10 < v12 )
      {
LABEL_8:
        v21 = v11;
        n = v12 - v10;
        v13 = alloca(v12 - v10 + 15);
        s = &v20;
        memset(&v20, v26, v12 - v10);
        v14 = v24 & 0xB0;
        a5[2] = 0;
        v11 = v21;
        v24 = a3;
        v25 = a4;
        v15 = a3;
        if ( v14 == 32 )
        {
          v17 = a4;
          if ( !a4 )
            v17 = v10 != G4_VCALL<int>(a3, 48, v21, v10);
          v31 = v25;
          v30 = a3;
          LOBYTE(v31) = v17;
          if ( v17 == 0 )
          {
            v18 = G4_VCALL<int>(a3, 48, s, n);
            v17 = n != v18;
          }
          goto LABEL_16;
        }
        v26 = a4;
        if ( !a4 )
        {
          v16 = G4_VCALL<int>(a3, 48, s, n);
          v11 = v21;
          v26 = n != v16;
        }
        v32 = a3;
        v33 = v25;
        LOBYTE(v33) = v26;
        v17 = v26;
        if ( v26 )
        {
LABEL_16:
          v34 = v15;
          LOBYTE(a4) = v17;
          goto LABEL_3;
        }
LABEL_15:
        v17 = v10 != G4_VCALL<int>(v15, 48, v11, v10);
        goto LABEL_16;
      }
    }
    else
    {
      v10 = v9[8];
      v11 = v9[7];
      v12 = a5[2];
      if ( v10 < v12 )
        goto LABEL_8;
    }
    v17 = a4;
    a5[2] = 0;
    v15 = a3;
    if ( a4 )
      goto LABEL_16;
    goto LABEL_15;
  }
  sub_19216F0(&v28, a2, a3, a4, a5, v26, a7);
  v34 = v28;
  LOBYTE(a4) = v29;
LABEL_3:
  *a1 = v34;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1921D90  (binary VA: 0x1921d90)
// Original: sub_1921D90
// ----------------------------------------------------------------------------
int sub_1921D90(uint8_t *a1, unsigned int a2, unsigned int a3, int a4, int16_t a5, char a6)
{
  uint64_t v6; // rdi
  uint8_t *v7;
  uint64_t v8;
  char v10;
  char v11;

  v6 = __PAIR64__(a2, a3);
  if ( a6 != 0 )
  {
    v7 = a1;
    do
    {
      *--v7 = *(uint8_t *)(a4 + __PAIR64__(v6, HIDWORD(v6)) % 0xA + 4);
      v8 = __PAIR64__(v6, HIDWORD(v6)) / 0xA;
      LODWORD(v6) = (__PAIR64__(v6, HIDWORD(v6)) / 0xA) >> 32;
      HIDWORD(v6) = v8;
    }
    while ( v6 != 0 );
  }
  else if ( (a5 & 0x4A) == 0x40 )
  {
    v7 = a1;
    do
    {
      v11 = BYTE4(v6);
      --v7;
      HIDWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 3;
      LODWORD(v6) = (unsigned int)v6 >> 3;
      *v7 = *(uint8_t *)(a4 + (v11 & 7) + 4);
    }
    while ( v6 != 0 );
  }
  else
  {
    v7 = a1;
    do
    {
      v10 = BYTE4(v6);
      --v7;
      HIDWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 4;
      LODWORD(v6) = (unsigned int)v6 >> 4;
      *v7 = *(uint8_t *)(a4 + ((a5 & 0x4000) == 0 ? 0xFFFFFFF0 : 0) + 20 + (v10 & 0xF));
    }
    while ( v6 != 0 );
  }
  return a1 - v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1921E90  (binary VA: 0x1921e90)
// Original: sub_1921E90
// ----------------------------------------------------------------------------
uint32_t * sub_1921E90(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, unsigned int a7, unsigned int a8)
{
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  char *v14;
  int v15;
  void *v16;
  char v17; // si
  void *v19;
  int v20;
  char v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25[2];
  typedef uint8_t _g4_t_v26[38];
  typedef char _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint64_t _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v25)) > _g4_s3 ? (36u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v26)) > _g4_s4 ? (38u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v27)) > _g4_s5 ? (76u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v28)) > _g4_s6 ? (112u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (119u + sizeof(_g4_t_v29)) > _g4_s7 ? (119u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (120u + sizeof(_g4_t_v30)) > _g4_s8 ? (120u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v31)) > _g4_s9 ? (128u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v32)) > _g4_s10 ? (132u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v33)) > _g4_s11 ? (136u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v34)) > _g4_s12 ? (140u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (144u + sizeof(_g4_t_v35)) > _g4_s13 ? (144u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (160u + sizeof(_g4_t_v36)) > _g4_s14 ? (160u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 38u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 119u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 120u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);

  v34 = a3;
  v31 = a4;
  v29 = a6;
  v30 = __PAIR64__(a7, a8);
  v35 = sub_1902550(&dword_213B790);
  v8 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v35);
  v9 = *v8;
  if ( *v8 == 0 )
  {
    v20 = opNew(0x68u);
    *(uint32_t *)(v20 + 4) = 0;
    *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v20 + 8) = 0;
    *(uint32_t *)(v20 + 12) = 0;
    *(uint8_t *)(v20 + 16) = 0;
    *(uint32_t *)(v20 + 20) = 0;
    *(uint32_t *)(v20 + 24) = 0;
    *(uint32_t *)(v20 + 28) = 0;
    *(uint32_t *)(v20 + 32) = 0;
    *(uint8_t *)(v20 + 36) = 0;
    *(uint8_t *)(v20 + 37) = 0;
    *(uint8_t *)(v20 + 100) = 0;
    sub_191D3E0(v20, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v20, v35);
    v9 = *v8;
  }
  v10 = a5[3];
  v28 = v25;
  v33 = v10;
  v32 = v10 & 0x4A;
  LOBYTE(v35) = v32 != 64 && v32 != 8;
  v11 = sub_1921D90(&v27, HIDWORD(v30), v30, v9 + 38, v10, v35);
  v12 = v11;
  v13 = *(uint8_t *)(v9 + 16) == 0;
  v36[0] = v11;
  v14 = &v28[-v11 + 40];
  if ( !v13 )
  {
    v19 = alloca(16 * ((2 * v11 + 32) / 0x10u));
    v24 = *(uint8_t *)(v9 + 37);
    v23 = *(uint32_t *)(v9 + 12);
    v22 = *(char **)(v9 + 8);
    v28 = (char *)(v26);
    sub_191F2E0(a2, v22, v23, v24, (int)(uintptr_t)(a5), v26, v14, v36);
    v12 = v36[0];
    v14 = v28;
  }
  if ( (uint8_t)v35 == 0 && (v33 & 0x200) != 0 && v30 != 0 )
  {
    if ( v32 == 64 )
    {
      ++v12;
      *(v14 - 1) = *(uint8_t *)(v9 + 42);
      v36[0] = v12;
      --v14;
    }
    else
    {
      v12 += 2;
      v21 = *(uint8_t *)(v9 + ((v33 & 0x4000) != 0) + 40);
      v36[0] = v12;
      *(v14 - 1) = v21;
      *(v14 - 2) = *(uint8_t *)(v9 + 42);
      v14 -= 2;
    }
  }
  v15 = a5[2];
  if ( v12 < v15 )
  {
    v16 = alloca(v15 + 15);
    sub_19208F0(a2, v29, v15, (int)(uintptr_t)(a5), v25, v14, v36);
    v12 = v36[0];
    v14 = v25;
  }
  v17 = v31;
  v13 = (uint8_t)v31 == 0;
  a5[2] = 0;
  if ( v13 && v12 != G4_VCALL<int>(v34, 48, v14, v12) )
    v17 = 1;
  a1[1] = v31;
  *a1 = v34;
  *((uint8_t *)a1 + 4) = v17;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1922190  (binary VA: 0x1922190)
// Original: sub_1922190
// ----------------------------------------------------------------------------
uint32_t * sub_1922190(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, unsigned int a7, unsigned int a8)
{
  sub_1921E90(a1, a2, a3, a4, a5, a6, a7, a8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19221F0  (binary VA: 0x19221f0)
// Original: sub_19221F0
// ----------------------------------------------------------------------------
uint32_t * sub_19221F0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int64_t a7)
{
  int *v7;
  int v8;
  int v9;
  bool v10;
  char *v11;
  int v12;
  void *v13;
  char v14; // di
  int v16;
  void *v17;
  int v18;
  char v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23[2];
  typedef uint8_t _g4_t_v24[62];
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int64_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int64_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v23)) > _g4_s3 ? (32u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v24)) > _g4_s4 ? (34u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v25)) > _g4_s5 ? (96u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (100u + sizeof(_g4_t_v26)) > _g4_s6 ? (100u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (104u + sizeof(_g4_t_v27)) > _g4_s7 ? (104u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (115u + sizeof(_g4_t_v28)) > _g4_s8 ? (115u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v29)) > _g4_s9 ? (116u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v30)) > _g4_s10 ? (120u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v31)) > _g4_s11 ? (124u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v32)) > _g4_s12 ? (128u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v33)) > _g4_s13 ? (136u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v34)) > _g4_s14 ? (140u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v35)) > _g4_s15 ? (156u + sizeof(_g4_t_v35)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 34u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 115u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 120u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);

  v29 = a4;
  v33 = a3;
  v32 = a7;
  v28 = a6;
  v34 = sub_1902550(&dword_213B790);
  v7 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v34);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v18 = opNew(0x68u);
    *(uint32_t *)(v18 + 4) = 0;
    *(uint32_t *)v18 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v18 + 8) = 0;
    *(uint32_t *)(v18 + 12) = 0;
    *(uint8_t *)(v18 + 16) = 0;
    *(uint32_t *)(v18 + 20) = 0;
    *(uint32_t *)(v18 + 24) = 0;
    *(uint32_t *)(v18 + 28) = 0;
    *(uint32_t *)(v18 + 32) = 0;
    *(uint8_t *)(v18 + 36) = 0;
    *(uint8_t *)(v18 + 37) = 0;
    *(uint8_t *)(v18 + 100) = 0;
    sub_191D3E0(v18, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v18, v34);
    v8 = *v7;
  }
  v31 = a5[3];
  LOBYTE(v34) = (v31 & 0x4A) != 8;
  v30 = v31 & 0x4A;
  LOBYTE(v34) = (v30 != 64) & v34;
  v25 = v23;
  if ( v32 > 0 || (v27 = -v32, (uint8_t)v34 == 0) )
    v27 = v32;
  v9 = sub_1921D90(v25 + 40, v27, HIDWORD(v27), v8 + 38, v31, v34);
  v10 = *(uint8_t *)(v8 + 16) == 0;
  v35[0] = v9;
  v11 = &v25[-v9 + 40];
  if ( !v10 )
  {
    v17 = alloca(2 * v9 + 17);
    v22 = *(uint8_t *)(v8 + 37);
    v21 = *(uint32_t *)(v8 + 12);
    v20 = *(char **)(v8 + 8);
    v26 = (char *)(v24);
    sub_191F2E0(a2, v20, v21, v22, (int)(uintptr_t)(a5), v24, v11, v35);
    v9 = v35[0];
    v11 = v26;
  }
  if ( (uint8_t)v34 != 0 )
  {
    if ( v32 < 0 )
    {
      ++v9;
      *(v11 - 1) = *(uint8_t *)(v8 + 38);
      v35[0] = v9;
      --v11;
    }
    else if ( (v31 & 0x800) != 0 )
    {
      ++v9;
      *(v11 - 1) = *(uint8_t *)(v8 + 39);
      v35[0] = v9;
      --v11;
    }
  }
  else if ( (v31 & 0x200) != 0 && v32 != 0 )
  {
    if ( v30 == 64 )
    {
      ++v9;
      *(v11 - 1) = *(uint8_t *)(v8 + 42);
      v35[0] = v9;
      --v11;
    }
    else
    {
      v9 += 2;
      v19 = *(uint8_t *)(v8 + ((v31 & 0x4000) != 0) + 40);
      v35[0] = v9;
      *(v11 - 1) = v19;
      *(v11 - 2) = *(uint8_t *)(v8 + 42);
      v11 -= 2;
    }
  }
  v12 = a5[2];
  if ( v12 > v9 )
  {
    v13 = alloca(v12 + 15);
    sub_19208F0(a2, v28, v12, (int)(uintptr_t)(a5), v23, v11, v35);
    v9 = v35[0];
    v11 = v23;
  }
  v14 = v29;
  v10 = (uint8_t)v29 == 0;
  a5[2] = 0;
  if ( v10 && v9 != G4_VCALL<int>(v33, 48, v11, v9) )
    v14 = 1;
  v16 = v33;
  a1[1] = v29;
  *a1 = v16;
  *((uint8_t *)a1 + 4) = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1922580  (binary VA: 0x1922580)
// Original: sub_1922580
// ----------------------------------------------------------------------------
uint32_t * sub_1922580(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int64_t a7)
{
  sub_19221F0(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19225E0  (binary VA: 0x19225e0)
// Original: sub_19225E0
// ----------------------------------------------------------------------------
int sub_19225E0(uint32_t *a1)
{
  int result;
  uint32_t *v2;
  uint8_t *v3;
  int v4;

  result = 1;
  v2 = (uint32_t *)*a1;
  if ( *a1 != 0 )
  {
    result = 0;
    if ( a1[1] == -1 )
    {
      v3 = (uint8_t *)v2[2];
      if ( (unsigned int)(uintptr_t)(v3) >= v2[3] )
      {
        v4 = (*(int (**)(uint32_t))(*v2 + 36))(*a1);
        if ( v4 == -1 )
        {
          *a1 = 0;
          return 1;
        }
      }
      else
      {
        v4 = *v3;
      }
      a1[1] = v4;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1922640  (binary VA: 0x1922640)
// Original: sub_1922640
// ----------------------------------------------------------------------------
uint32_t * sub_1922640(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10, int a11, uint32_t *a12)
{
  int v12;
  int v13;
  int i;
  int v15;
  char v17;
  unsigned int v18;
  char v19;
  uint8_t v20;
  uint8_t *v21;

  v12 = 10;
  v21 = (uint8_t *)(sub_191CFA0(a11 + 108));
  if ( a10 != 2 )
  {
    LOWORD(v12) = 1000;
    if ( a10 != 4 )
      v12 = 1;
  }
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    v19 = sub_19225E0(&a3);
    if ( v19 == (uint8_t)sub_19225E0(&a5) )
      break;
    if ( i == a10 )
      goto LABEL_10;
    v20 = sub_1919D70((int)(uintptr_t)(&a3));
    v17 = v21[v20 + 285];
    if ( v17 == 0 )
    {
      v17 = G4_VCALL<int>(v21, 32, (char)v20, 42);
      if ( v17 != 42 )
        v21[v20 + 285] = v17;
    }
    if ( (uint8_t)(v17 - 48) > 9u )
      goto LABEL_7;
    v13 = v17 + 10 * v13 - 48;
    if ( v12 * v13 > a9 || a8 >= v12 + v12 * v13 )
      goto LABEL_7;
    v12 /= 10;
    if ( a3 != nullptr )
    {
      v18 = a3[2];
      if ( v18 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v18 + 1;
      a4 = -1;
    }
  }
  if ( i != a10 )
  {
LABEL_7:
    if ( i != 2 || a10 != 4 )
    {
      *a12 |= 4u;
      goto LABEL_11;
    }
    v13 -= 100;
  }
LABEL_10:
  *a7 = v13;
LABEL_11:
  v15 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19227E0  (binary VA: 0x19227e0)
// Original: sub_19227E0
// ----------------------------------------------------------------------------
uint32_t * sub_19227E0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  int v11;
  char v12; // bp
  int v13;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v16)) > _g4_s1 ? (24u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v9 = a7;
  v10 = a8;
  sub_191CFA0(a7 + 108);
  v17[0] = 0;
  sub_1922640(v15, a2, a3, a4, a5, a6, &v16, 0, 9999, 4, v9, v17);
  a3 = (uint32_t *)v15[0];
  a4 = v15[1];
  if ( v17[0] != 0 )
  {
    *v10 |= 4u;
  }
  else
  {
    v11 = v16 + 100;
    if ( v16 >= 0 )
      v11 = v16 - 1900;
    *(uint32_t *)(a9 + 20) = v11;
  }
  v12 = sub_19225E0(&a3);
  if ( v12 == (uint8_t)sub_19225E0(&a5) )
    *v10 |= 2u;
  v13 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19228F0  (binary VA: 0x19228f0)
// Original: sub_19228F0
// ----------------------------------------------------------------------------
uint32_t * sub_19228F0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  int *v10;
  int i;
  unsigned int v12;
  unsigned int v13;
  char v14;
  char v15; // di
  int v16;
  int v17;
  uint32_t *v18;
  int v20;
  char v21; // bp
  unsigned int v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  char v29; // bp
  char v30; // si
  uint8_t *v31;
  uint32_t *v32;
  int v33;
  int v34;
  uint32_t *v35;
  unsigned int v36;
  char v37;
  unsigned int v38;
  char v39; // bp
  unsigned int v40;
  char v41; // bp
  unsigned int v42;
  unsigned int v43;
  int *v44;
  int v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int32_t _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef bool _g4_t_v63;
  typedef char _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v47)) > _g4_s1 ? (0u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v48)) > _g4_s2 ? (0u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v50)) > _g4_s4 ? (20u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v51)) > _g4_s5 ? (20u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v52)) > _g4_s6 ? (20u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v53)) > _g4_s7 ? (20u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v54)) > _g4_s8 ? (24u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v55)) > _g4_s9 ? (28u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v56)) > _g4_s10 ? (32u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v57)) > _g4_s11 ? (32u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v58)) > _g4_s12 ? (40u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v59)) > _g4_s13 ? (44u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v60)) > _g4_s14 ? (52u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v61)) > _g4_s15 ? (56u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v62)) > _g4_s16 ? (61u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (62u + sizeof(_g4_t_v63)) > _g4_s17 ? (62u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (63u + sizeof(_g4_t_v64)) > _g4_s18 ? (63u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v65)) > _g4_s19 ? (68u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v66)) > _g4_s20 ? (72u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v67)) > _g4_s21 ? (76u + sizeof(_g4_t_v67)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 61u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 62u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 63u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);

  v9 = a7 + 108;
  v56 = (uint32_t *)(sub_191CFA0(a7 + 108));
  v49 = sub_1902550((int32_t *)&unk_213B7A0);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(a7 + 108) + 12) + 4 * v49);
  v55 = *v10;
  if ( *v10 == 0 )
  {
    v45 = opNew(0x44u);
    *(uint32_t *)(v45 + 4) = 0;
    *(uint32_t *)(v45 + 8) = 0;
    *(uint32_t *)v45 = (uint32_t)(uintptr_t)(&off_20AAB50);
    *(uint32_t *)(v45 + 12) = 0;
    *(uint8_t *)(v45 + 16) = 0;
    *(uint8_t *)(v45 + 17) = 0;
    *(uint8_t *)(v45 + 18) = 0;
    *(uint32_t *)(v45 + 20) = 0;
    *(uint32_t *)(v45 + 24) = 0;
    *(uint32_t *)(v45 + 28) = 0;
    *(uint32_t *)(v45 + 32) = 0;
    *(uint32_t *)(v45 + 36) = 0;
    *(uint32_t *)(v45 + 40) = 0;
    *(uint32_t *)(v45 + 44) = 0;
    *(uint8_t *)(v45 + 48) = 0;
    *(uint8_t *)(v45 + 49) = 0;
    *(uint8_t *)(v45 + 50) = 0;
    *(uint8_t *)(v45 + 51) = 0;
    *(uint8_t *)(v45 + 52) = 0;
    *(uint8_t *)(v45 + 53) = 0;
    *(uint8_t *)(v45 + 54) = 0;
    *(uint8_t *)(v45 + 55) = 0;
    *(uint8_t *)(v45 + 67) = 0;
    sub_191E050(v45, v9);
    sub_19023D0(*(uint32_t *)(a7 + 108), (volatile int32_t *)v45, v49);
    v55 = *v10;
  }
  v63 = *(uint32_t *)(v55 + 32) != 0 && *(uint32_t *)(v55 + 40) != 0;
  v65 = &dword_213B814;
  if ( *(uint8_t *)(v55 + 16) != 0 )
    sub_1939B80(&v65, 32);
  v66 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(&v66, 32);
  v58 = 1;
  v59 = 0;
  v54 = 0;
  v61 = 0;
  v62 = 0;
  v67[0] = *(uint32_t *)(v55 + 52);
  v64 = 0;
  v60 = 0;
  while ( 2 )
  {
    v46 = 1;
    switch ( *((uint8_t *)v67 + v59) )
    {
      case 0:
        goto LABEL_58;
      case 1:
        v21 = sub_19225E0(&a3);
        if ( v21 == (uint8_t)sub_19225E0(&a5)
          || (*(uint8_t *)(v56[6] + (uint8_t)sub_1919D70((int)(uintptr_t)(&a3))) & 8) == 0 )
        {
          v46 = 0;
        }
        else if ( a3 != nullptr )
        {
          v38 = a3[2];
          if ( v38 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v38 + 1;
          a4 = -1;
          v46 = 1;
        }
        else
        {
LABEL_58:
          v46 = 1;
        }
        if ( v59 == 3 )
          goto LABEL_16;
        while ( 1 )
        {
          v52 = sub_19225E0(&a3);
          if ( v52 == (uint8_t)sub_19225E0(&a5)
            || (*(uint8_t *)(v56[6] + (uint8_t)sub_1919D70((int)(uintptr_t)(&a3))) & 8) == 0 )
          {
            break;
          }
          if ( a3 != nullptr )
          {
            v22 = a3[2];
            if ( v22 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v22 + 1;
            a4 = -1;
          }
        }
        goto LABEL_14;
      case 2:
        if ( (*(uint8_t *)(a7 + 13) & 2) == 0 && v59 != 0 && v60 <= 1 )
        {
          if ( v59 == 1 )
          {
            if ( !v63 && LOBYTE(v67[0]) != 3 && BYTE2(v67[0]) != 1 )
            {
              v46 = 1;
              goto LABEL_15;
            }
          }
          else
          {
            if ( v59 != 2 )
              goto LABEL_48;
            if ( HIBYTE(v67[0]) != 4 )
            {
              v46 = 1;
              if ( !v63 || HIBYTE(v67[0]) != 3 )
                goto LABEL_15;
            }
          }
        }
        v20 = 0;
        v47 = *(uint32_t *)(v55 + 24);
        while ( 1 )
        {
          v51 = sub_19225E0(&a3);
          if ( v51 == (uint8_t)sub_19225E0(&a5) )
            break;
          if ( v20 == v47 )
            goto LABEL_48;
          if ( (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) != *(uint8_t *)(*(uint32_t *)(v55 + 20) + v20) )
            goto LABEL_82;
          if ( a3 != nullptr )
          {
            v36 = a3[2];
            if ( v36 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v36 + 1;
            a4 = -1;
          }
          ++v20;
        }
        if ( v20 == v47 )
          goto LABEL_48;
LABEL_82:
        v46 = 0;
        if ( v20 != 0 || (*(uint8_t *)(a7 + 13) & 2) != 0 )
          goto LABEL_14;
        goto LABEL_48;
      case 3:
        if ( *(uint32_t *)(v55 + 32) != 0
          && (v39 = sub_19225E0(&a3)) != (uint8_t)sub_19225E0(&a5)
          && (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) == **(uint8_t **)(v55 + 28) )
        {
          v60 = *(uint32_t *)(v55 + 32);
          if ( a3 != nullptr )
          {
            v40 = a3[2];
            if ( v40 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v40 + 1;
            a4 = -1;
            v46 = 1;
          }
          else
          {
LABEL_48:
            v46 = 1;
          }
        }
        else if ( *(uint32_t *)(v55 + 40) != 0
               && (v41 = sub_19225E0(&a3)) != (uint8_t)sub_19225E0(&a5)
               && (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) == **(uint8_t **)(v55 + 36) )
        {
          v60 = *(uint32_t *)(v55 + 40);
          if ( a3 == nullptr )
            goto LABEL_13;
          v42 = a3[2];
          if ( v42 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v42 + 1;
          a4 = -1;
          v46 = 1;
          v64 = 1;
        }
        else
        {
          if ( *(uint32_t *)(v55 + 32) != 0 && *(uint32_t *)(v55 + 40) == 0 )
          {
LABEL_13:
            v46 = 1;
            v64 = 1;
            goto LABEL_14;
          }
          v46 = !v63;
        }
        goto LABEL_14;
      case 4:
        while ( 2 )
        {
          v29 = sub_19225E0(&a3);
          if ( v29 == (uint8_t)sub_19225E0(&a5) )
            goto LABEL_94;
          v30 = sub_1919D70((int)(uintptr_t)(&a3));
          v31 = (uint8_t *)(memchr((const void *)(v55 + 57), v30, 0xAu));
          if ( v31 != nullptr )
          {
            v23 = v31[(uint32_t)(uintptr_t)(off_20CB488) - 56 - v55];
            v24 = v66;
            v53 = v23;
            v25 = *(uint32_t *)(v66 - 12);
            v26 = v25 + 1;
            if ( (unsigned int)(v25 + 1) > *(uint32_t *)(v66 - 8) || *(int *)(v66 - 4) > 0 )
            {
              sub_1939B80(&v66, v25 + 1);
              v24 = v66;
              v25 = *(uint32_t *)(v66 - 12);
            }
            *(uint8_t *)(v24 + v25) = v53;
            v27 = v66;
            if ( (uint32_t *)(v66 - 12) != dword_213B808 )
            {
              *(uint32_t *)(v66 - 4) = 0;
              *(uint32_t *)(v27 - 12) = v26;
              *(uint8_t *)(v27 + v26) = 0;
            }
            ++v54;
            goto LABEL_65;
          }
          if ( v30 == *(uint8_t *)(v55 + 17) && v62 == 0 )
          {
            if ( *(int *)(v55 + 44) > 0 )
            {
              v62 = 1;
              v61 = v54;
              v54 = 0;
LABEL_65:
              if ( a3 != nullptr )
              {
                v28 = a3[2];
                if ( v28 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v28 + 1;
                a4 = -1;
              }
              continue;
            }
LABEL_94:
            v48 = 1;
            goto LABEL_95;
          }
          break;
        }
        if ( *(uint8_t *)(v55 + 16) == 0 || v30 != *(uint8_t *)(v55 + 18) || v62 != 0 )
          goto LABEL_94;
        if ( v54 != 0 )
        {
          v32 = v65;
          v33 = *(v65 - 3);
          v34 = v33 + 1;
          if ( (unsigned int)(v33 + 1) > *(v65 - 2) || (int)*(v65 - 1) > 0 )
          {
            sub_1939B80(&v65, v33 + 1);
            v32 = v65;
            v33 = *(v65 - 3);
          }
          *((uint8_t *)v32 + v33) = v54;
          v35 = v65;
          if ( v65 - 3 == dword_213B808 )
          {
            v54 = 0;
          }
          else
          {
            *(v65 - 1) = 0;
            *(v35 - 3) = v34;
            v54 = 0;
            *((uint8_t *)v35 + v34) = 0;
          }
          goto LABEL_65;
        }
        v48 = 0;
LABEL_95:
        v37 = v48;
        if ( *(uint32_t *)(v66 - 12) == 0 )
          v37 = 0;
        v46 = v37;
LABEL_14:
        if ( v58 <= 3 )
        {
LABEL_15:
          ++v59;
          ++v58;
          if ( v46 != 0 )
            continue;
        }
LABEL_16:
        if ( v60 <= 1 )
        {
          if ( v46 != 0 )
            goto LABEL_23;
          goto LABEL_38;
        }
        if ( v46 == 0 )
          goto LABEL_38;
        v57 = v64 != 0 ? *(uint32_t *)(v55 + 36) : *(uint32_t *)(v55 + 28);
        for ( i = 1; ; ++i )
        {
          v50 = sub_19225E0(&a3);
          if ( v50 == (uint8_t)sub_19225E0(&a5) )
            break;
          if ( i == v60 )
            goto LABEL_23;
          if ( (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) != *(uint8_t *)(v57 + i) )
            goto LABEL_38;
          if ( a3 != nullptr )
          {
            v43 = a3[2];
            if ( v43 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v43 + 1;
            a4 = -1;
          }
        }
        if ( i != v60 )
        {
LABEL_38:
          *a8 |= 4u;
          goto LABEL_39;
        }
LABEL_23:
        if ( *(uint32_t *)(v66 - 12) > 1u )
        {
          v12 = sub_19383A0(&v66, 48, 0);
          if ( v12 != 0 )
          {
            v13 = *(uint32_t *)(v66 - 12);
            if ( v12 == -1 )
              v12 = v13 - 1;
            if ( v13 <= v12 )
              v12 = *(uint32_t *)(v66 - 12);
            g4_std::string::clear(&v66, 0, v12, 0);
          }
        }
        if ( v64 != 0 )
        {
          v44 = (int *)v66;
          if ( *(int *)(v66 - 4) >= 0 )
          {
            sub_19397C0(&v66);
            v44 = (int *)v66;
          }
          if ( *(uint8_t *)v44 != 48 )
          {
            if ( *(v44 - 1) >= 0 )
              sub_19397C0(&v66);
            sub_1939050((int)(uintptr_t)(&v66), 0, 0, 1u, 45);
            *(uint32_t *)(v66 - 4) = -1;
          }
        }
        if ( *(v65 - 3) != 0 )
        {
          v14 = v54;
          if ( v62 != 0 )
            v14 = v61;
          sub_1939C10(&v65, v14);
          if ( (uint8_t)sub_1953E80(*(uint32_t *)(v55 + 8), *(uint32_t *)(v55 + 12), &v65) == 0 )
            *a8 |= 4u;
        }
        if ( v62 != 0 && *(uint32_t *)(v55 + 44) != v54 )
          goto LABEL_38;
        sub_1937C90(a9, &v66);
LABEL_39:
        v15 = sub_19225E0(&a3);
        if ( v15 == (uint8_t)sub_19225E0(&a5) )
          *a8 |= 2u;
        v16 = a4;
        *a1 = (uint32_t)(uintptr_t)(a3);
        v17 = v66;
        a1[1] = v16;
        if ( (uint32_t *)(v17 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v17 - 12));
        }
        v18 = v65 - 3;
        if ( v65 - 3 != dword_213B808 && __sync_fetch_and_add(v65 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v18);
        return a1;
      default:
        goto LABEL_14;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1923580  (binary VA: 0x1923580)
// Original: sub_1923580
// ----------------------------------------------------------------------------
uint32_t * sub_1923580(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  int *v10;
  int i;
  unsigned int v12;
  unsigned int v13;
  char v14;
  char v15; // di
  int v16;
  int v17;
  uint32_t *v18;
  int v20;
  char v21; // bp
  unsigned int v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  char v29; // bp
  char v30; // si
  uint8_t *v31;
  uint32_t *v32;
  int v33;
  int v34;
  uint32_t *v35;
  unsigned int v36;
  char v37;
  unsigned int v38;
  char v39; // bp
  unsigned int v40;
  char v41; // bp
  unsigned int v42;
  unsigned int v43;
  int *v44;
  int v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int32_t _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef bool _g4_t_v63;
  typedef char _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v47)) > _g4_s1 ? (0u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v48)) > _g4_s2 ? (0u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v50)) > _g4_s4 ? (20u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v51)) > _g4_s5 ? (20u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v52)) > _g4_s6 ? (20u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v53)) > _g4_s7 ? (20u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v54)) > _g4_s8 ? (24u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v55)) > _g4_s9 ? (28u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v56)) > _g4_s10 ? (32u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v57)) > _g4_s11 ? (32u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v58)) > _g4_s12 ? (40u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v59)) > _g4_s13 ? (44u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v60)) > _g4_s14 ? (52u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v61)) > _g4_s15 ? (56u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v62)) > _g4_s16 ? (61u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (62u + sizeof(_g4_t_v63)) > _g4_s17 ? (62u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (63u + sizeof(_g4_t_v64)) > _g4_s18 ? (63u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v65)) > _g4_s19 ? (68u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v66)) > _g4_s20 ? (72u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v67)) > _g4_s21 ? (76u + sizeof(_g4_t_v67)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 61u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 62u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 63u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);

  v9 = a7 + 108;
  v56 = (uint32_t *)(sub_191CFA0(a7 + 108));
  v49 = sub_1902550(&dword_213B79C);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(a7 + 108) + 12) + 4 * v49);
  v55 = *v10;
  if ( *v10 == 0 )
  {
    v45 = opNew(0x44u);
    *(uint32_t *)(v45 + 4) = 0;
    *(uint32_t *)(v45 + 8) = 0;
    *(uint32_t *)v45 = (uint32_t)(uintptr_t)(&off_20AAB60);
    *(uint32_t *)(v45 + 12) = 0;
    *(uint8_t *)(v45 + 16) = 0;
    *(uint8_t *)(v45 + 17) = 0;
    *(uint8_t *)(v45 + 18) = 0;
    *(uint32_t *)(v45 + 20) = 0;
    *(uint32_t *)(v45 + 24) = 0;
    *(uint32_t *)(v45 + 28) = 0;
    *(uint32_t *)(v45 + 32) = 0;
    *(uint32_t *)(v45 + 36) = 0;
    *(uint32_t *)(v45 + 40) = 0;
    *(uint32_t *)(v45 + 44) = 0;
    *(uint8_t *)(v45 + 48) = 0;
    *(uint8_t *)(v45 + 49) = 0;
    *(uint8_t *)(v45 + 50) = 0;
    *(uint8_t *)(v45 + 51) = 0;
    *(uint8_t *)(v45 + 52) = 0;
    *(uint8_t *)(v45 + 53) = 0;
    *(uint8_t *)(v45 + 54) = 0;
    *(uint8_t *)(v45 + 55) = 0;
    *(uint8_t *)(v45 + 67) = 0;
    sub_191D9E0(v45, v9);
    sub_19023D0(*(uint32_t *)(a7 + 108), (volatile int32_t *)v45, v49);
    v55 = *v10;
  }
  v63 = *(uint32_t *)(v55 + 32) != 0 && *(uint32_t *)(v55 + 40) != 0;
  v65 = &dword_213B814;
  if ( *(uint8_t *)(v55 + 16) != 0 )
    sub_1939B80(&v65, 32);
  v66 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(&v66, 32);
  v58 = 1;
  v59 = 0;
  v54 = 0;
  v61 = 0;
  v62 = 0;
  v67[0] = *(uint32_t *)(v55 + 52);
  v64 = 0;
  v60 = 0;
  while ( 2 )
  {
    v46 = 1;
    switch ( *((uint8_t *)v67 + v59) )
    {
      case 0:
        goto LABEL_58;
      case 1:
        v21 = sub_19225E0(&a3);
        if ( v21 == (uint8_t)sub_19225E0(&a5)
          || (*(uint8_t *)(v56[6] + (uint8_t)sub_1919D70((int)(uintptr_t)(&a3))) & 8) == 0 )
        {
          v46 = 0;
        }
        else if ( a3 != nullptr )
        {
          v38 = a3[2];
          if ( v38 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v38 + 1;
          a4 = -1;
          v46 = 1;
        }
        else
        {
LABEL_58:
          v46 = 1;
        }
        if ( v59 == 3 )
          goto LABEL_16;
        while ( 1 )
        {
          v52 = sub_19225E0(&a3);
          if ( v52 == (uint8_t)sub_19225E0(&a5)
            || (*(uint8_t *)(v56[6] + (uint8_t)sub_1919D70((int)(uintptr_t)(&a3))) & 8) == 0 )
          {
            break;
          }
          if ( a3 != nullptr )
          {
            v22 = a3[2];
            if ( v22 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v22 + 1;
            a4 = -1;
          }
        }
        goto LABEL_14;
      case 2:
        if ( (*(uint8_t *)(a7 + 13) & 2) == 0 && v59 != 0 && v60 <= 1 )
        {
          if ( v59 == 1 )
          {
            if ( !v63 && LOBYTE(v67[0]) != 3 && BYTE2(v67[0]) != 1 )
            {
              v46 = 1;
              goto LABEL_15;
            }
          }
          else
          {
            if ( v59 != 2 )
              goto LABEL_48;
            if ( HIBYTE(v67[0]) != 4 )
            {
              v46 = 1;
              if ( !v63 || HIBYTE(v67[0]) != 3 )
                goto LABEL_15;
            }
          }
        }
        v20 = 0;
        v47 = *(uint32_t *)(v55 + 24);
        while ( 1 )
        {
          v51 = sub_19225E0(&a3);
          if ( v51 == (uint8_t)sub_19225E0(&a5) )
            break;
          if ( v20 == v47 )
            goto LABEL_48;
          if ( (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) != *(uint8_t *)(*(uint32_t *)(v55 + 20) + v20) )
            goto LABEL_82;
          if ( a3 != nullptr )
          {
            v36 = a3[2];
            if ( v36 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v36 + 1;
            a4 = -1;
          }
          ++v20;
        }
        if ( v20 == v47 )
          goto LABEL_48;
LABEL_82:
        v46 = 0;
        if ( v20 != 0 || (*(uint8_t *)(a7 + 13) & 2) != 0 )
          goto LABEL_14;
        goto LABEL_48;
      case 3:
        if ( *(uint32_t *)(v55 + 32) != 0
          && (v39 = sub_19225E0(&a3)) != (uint8_t)sub_19225E0(&a5)
          && (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) == **(uint8_t **)(v55 + 28) )
        {
          v60 = *(uint32_t *)(v55 + 32);
          if ( a3 != nullptr )
          {
            v40 = a3[2];
            if ( v40 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v40 + 1;
            a4 = -1;
            v46 = 1;
          }
          else
          {
LABEL_48:
            v46 = 1;
          }
        }
        else if ( *(uint32_t *)(v55 + 40) != 0
               && (v41 = sub_19225E0(&a3)) != (uint8_t)sub_19225E0(&a5)
               && (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) == **(uint8_t **)(v55 + 36) )
        {
          v60 = *(uint32_t *)(v55 + 40);
          if ( a3 == nullptr )
            goto LABEL_13;
          v42 = a3[2];
          if ( v42 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v42 + 1;
          a4 = -1;
          v46 = 1;
          v64 = 1;
        }
        else
        {
          if ( *(uint32_t *)(v55 + 32) != 0 && *(uint32_t *)(v55 + 40) == 0 )
          {
LABEL_13:
            v46 = 1;
            v64 = 1;
            goto LABEL_14;
          }
          v46 = !v63;
        }
        goto LABEL_14;
      case 4:
        while ( 2 )
        {
          v29 = sub_19225E0(&a3);
          if ( v29 == (uint8_t)sub_19225E0(&a5) )
            goto LABEL_94;
          v30 = sub_1919D70((int)(uintptr_t)(&a3));
          v31 = (uint8_t *)(memchr((const void *)(v55 + 57), v30, 0xAu));
          if ( v31 != nullptr )
          {
            v23 = v31[(uint32_t)(uintptr_t)(off_20CB488) - 56 - v55];
            v24 = v66;
            v53 = v23;
            v25 = *(uint32_t *)(v66 - 12);
            v26 = v25 + 1;
            if ( (unsigned int)(v25 + 1) > *(uint32_t *)(v66 - 8) || *(int *)(v66 - 4) > 0 )
            {
              sub_1939B80(&v66, v25 + 1);
              v24 = v66;
              v25 = *(uint32_t *)(v66 - 12);
            }
            *(uint8_t *)(v24 + v25) = v53;
            v27 = v66;
            if ( (uint32_t *)(v66 - 12) != dword_213B808 )
            {
              *(uint32_t *)(v66 - 4) = 0;
              *(uint32_t *)(v27 - 12) = v26;
              *(uint8_t *)(v27 + v26) = 0;
            }
            ++v54;
            goto LABEL_65;
          }
          if ( v30 == *(uint8_t *)(v55 + 17) && v62 == 0 )
          {
            if ( *(int *)(v55 + 44) > 0 )
            {
              v62 = 1;
              v61 = v54;
              v54 = 0;
LABEL_65:
              if ( a3 != nullptr )
              {
                v28 = a3[2];
                if ( v28 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v28 + 1;
                a4 = -1;
              }
              continue;
            }
LABEL_94:
            v48 = 1;
            goto LABEL_95;
          }
          break;
        }
        if ( *(uint8_t *)(v55 + 16) == 0 || v30 != *(uint8_t *)(v55 + 18) || v62 != 0 )
          goto LABEL_94;
        if ( v54 != 0 )
        {
          v32 = v65;
          v33 = *(v65 - 3);
          v34 = v33 + 1;
          if ( (unsigned int)(v33 + 1) > *(v65 - 2) || (int)*(v65 - 1) > 0 )
          {
            sub_1939B80(&v65, v33 + 1);
            v32 = v65;
            v33 = *(v65 - 3);
          }
          *((uint8_t *)v32 + v33) = v54;
          v35 = v65;
          if ( v65 - 3 == dword_213B808 )
          {
            v54 = 0;
          }
          else
          {
            *(v65 - 1) = 0;
            *(v35 - 3) = v34;
            v54 = 0;
            *((uint8_t *)v35 + v34) = 0;
          }
          goto LABEL_65;
        }
        v48 = 0;
LABEL_95:
        v37 = v48;
        if ( *(uint32_t *)(v66 - 12) == 0 )
          v37 = 0;
        v46 = v37;
LABEL_14:
        if ( v58 <= 3 )
        {
LABEL_15:
          ++v59;
          ++v58;
          if ( v46 != 0 )
            continue;
        }
LABEL_16:
        if ( v60 <= 1 )
        {
          if ( v46 != 0 )
            goto LABEL_23;
          goto LABEL_38;
        }
        if ( v46 == 0 )
          goto LABEL_38;
        v57 = v64 != 0 ? *(uint32_t *)(v55 + 36) : *(uint32_t *)(v55 + 28);
        for ( i = 1; ; ++i )
        {
          v50 = sub_19225E0(&a3);
          if ( v50 == (uint8_t)sub_19225E0(&a5) )
            break;
          if ( i == v60 )
            goto LABEL_23;
          if ( (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) != *(uint8_t *)(v57 + i) )
            goto LABEL_38;
          if ( a3 != nullptr )
          {
            v43 = a3[2];
            if ( v43 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v43 + 1;
            a4 = -1;
          }
        }
        if ( i != v60 )
        {
LABEL_38:
          *a8 |= 4u;
          goto LABEL_39;
        }
LABEL_23:
        if ( *(uint32_t *)(v66 - 12) > 1u )
        {
          v12 = sub_19383A0(&v66, 48, 0);
          if ( v12 != 0 )
          {
            v13 = *(uint32_t *)(v66 - 12);
            if ( v12 == -1 )
              v12 = v13 - 1;
            if ( v13 <= v12 )
              v12 = *(uint32_t *)(v66 - 12);
            g4_std::string::clear(&v66, 0, v12, 0);
          }
        }
        if ( v64 != 0 )
        {
          v44 = (int *)v66;
          if ( *(int *)(v66 - 4) >= 0 )
          {
            sub_19397C0(&v66);
            v44 = (int *)v66;
          }
          if ( *(uint8_t *)v44 != 48 )
          {
            if ( *(v44 - 1) >= 0 )
              sub_19397C0(&v66);
            sub_1939050((int)(uintptr_t)(&v66), 0, 0, 1u, 45);
            *(uint32_t *)(v66 - 4) = -1;
          }
        }
        if ( *(v65 - 3) != 0 )
        {
          v14 = v54;
          if ( v62 != 0 )
            v14 = v61;
          sub_1939C10(&v65, v14);
          if ( (uint8_t)sub_1953E80(*(uint32_t *)(v55 + 8), *(uint32_t *)(v55 + 12), &v65) == 0 )
            *a8 |= 4u;
        }
        if ( v62 != 0 && *(uint32_t *)(v55 + 44) != v54 )
          goto LABEL_38;
        sub_1937C90(a9, &v66);
LABEL_39:
        v15 = sub_19225E0(&a3);
        if ( v15 == (uint8_t)sub_19225E0(&a5) )
          *a8 |= 2u;
        v16 = a4;
        *a1 = (uint32_t)(uintptr_t)(a3);
        v17 = v66;
        a1[1] = v16;
        if ( (uint32_t *)(v17 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v17 - 12));
        }
        v18 = v65 - 3;
        if ( v65 - 3 != dword_213B808 && __sync_fetch_and_add(v65 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v18);
        return a1;
      default:
        goto LABEL_14;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1924210  (binary VA: 0x1924210)
// Original: sub_1924210
// ----------------------------------------------------------------------------
uint32_t * sub_1924210(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, char a7, int a8, uint32_t *a9, void **a10)
{
  uint8_t *v10;
  volatile int32_t *v11;
  size_t v12;
  void *dest;
  char v14;
  char *v15;
  int v20;
  int v21;
  typedef void *_g4_t_v17;
  typedef uint32_t _g4_t_v18[4];
  typedef void *_g4_t_src[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_src)) > _g4_s2 ? (28u + sizeof(_g4_t_src)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 28u);

  v10 = (uint8_t *)(sub_191CFA0(a8 + 108));
  src[0] = &dword_213B814;
  if ( a7 != 0 )
    sub_1923580(v18, a2, a3, a4, a5, a6, a8, a9, (int)(uintptr_t)(src));
  else
    sub_19228F0(v18, a2, a3, a4, a5, a6, a8, a9, (int)(uintptr_t)(src));
  v20 = v18[0];
  v11 = (volatile int32_t *)src[0];
  v21 = v18[1];
  v12 = *((uint32_t *)src[0] - 3);
  if ( v12 != 0 )
  {
    sub_1939D80((int)(uintptr_t)(a10), v12, 0);
    dest = *a10;
    if ( *((int *)*a10 - 1) >= 0 )
    {
      sub_19397C0(a10);
      dest = *a10;
    }
    v14 = v10[28];
    v15 = (char *)src[0] + v12;
    v17 = src[0];
    if ( v14 == 1 )
    {
      memcpy(dest, src[0], v15 - (char *)src[0]);
      v11 = (volatile int32_t *)src[0];
    }
    else
    {
      if ( v14 == 0 )
        sub_18FFC70(v10);
      G4_VCALL<void>(v10, 28, v17, v15, dest);
      v11 = (volatile int32_t *)src[0];
    }
  }
  *a1 = v20;
  a1[1] = v21;
  if ( v11 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)(v11 - 3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1924430  (binary VA: 0x1924430)
// Original: sub_1924430
// ----------------------------------------------------------------------------
uint32_t * sub_1924430(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, char a7, int a8, uint32_t *a9, int64_t *a10)
{
  int v10;
  int v11;
  char *v12;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_s[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_s)) > _g4_s1 ? (24u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 24u);

  s[0] = (char *)&dword_213B814;
  if ( a7 != 0 )
    sub_1923580(v14, a2, a3, a4, a5, a6, a8, a9, (int)(uintptr_t)(s));
  else
    sub_19228F0(v14, a2, a3, a4, a5, a6, a8, a9, (int)(uintptr_t)(s));
  v10 = v14[0];
  v11 = v14[1];
  s[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(s[0], a10, a9);
  v12 = s[0];
  *a1 = v10;
  a1[1] = v11;
  if ( v12 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1924580  (binary VA: 0x1924580)
// Original: sub_1924580
// ----------------------------------------------------------------------------
uint32_t * sub_1924580(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10, uint32_t *a11)
{
  int *v11;
  void *v12;
  char v13; // si
  int v14;
  int v16;
  int v17;
  const char *v18;
  char v19;
  int v20;
  char v21;
  unsigned int v22;
  size_t v23;
  int v24;
  size_t v25;
  unsigned int v26;
  char v27; // si
  unsigned int v28;
  int *v29;
  char v30;
  unsigned int v31;
  size_t v32;
  size_t v33;
  size_t v34;
  char v35; // di
  char v36; // di
  unsigned int v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef int _g4_t_v41;
  typedef const char *_g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef int *_g4_t_v44;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v38)) > _g4_s0 ? (8u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v39)) > _g4_s1 ? (16u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v40)) > _g4_s2 ? (23u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v41)) > _g4_s3 ? (24u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v42)) > _g4_s4 ? (28u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v43)) > _g4_s5 ? (32u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v44)) > _g4_s6 ? (36u + sizeof(_g4_t_v44)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 23u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);

  v11 = (int *)sub_191CFA0(a10 + 108);
  v12 = alloca(4 * a9 + 15);
  v44 = &v38;
  v13 = sub_19225E0(&a3);
  if ( v13 != (uint8_t)sub_19225E0(&a5) )
  {
    v40 = sub_1919D70((int)(uintptr_t)(&a3));
    if ( a9 != 0 )
    {
      v16 = 0;
      v42 = nullptr;
      v17 = a8;
      do
      {
        while ( 1 )
        {
          v19 = **(uint8_t **)(v17 + 4 * v16);
          if ( v40 != v19 )
          {
            v20 = *v11;
            v39 = v17;
            v21 = (*(int (**)(int *, uint32_t))(v20 + 8))(v11, v19);
            v17 = v39;
            if ( v40 != v21 )
              break;
          }
          v18 = v42;
          v44[(uint32_t)(uintptr_t)(v42)] = v16++;
          v42 = v18 + 1;
          if ( v16 == a9 )
            goto LABEL_10;
        }
        ++v16;
      }
      while ( v16 != a9 );
LABEL_10:
      v41 = 0;
      if ( (unsigned int)(uintptr_t)(v42) <= 1 )
      {
LABEL_26:
        if ( v42 == (const char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
        {
          if ( a3 != nullptr )
          {
            v31 = a3[2];
            if ( v31 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v31 + 1;
            a4 = -1;
          }
          v32 = v41 + 1;
          v42 = *(const char **)(a8 + 4 * *v44);
          v33 = strlen(v42);
          v34 = v33;
          if ( v32 < v33 )
          {
            v43 = v33;
            do
            {
              v35 = sub_19225E0(&a3);
              if ( v35 == (uint8_t)sub_19225E0(&a5) )
                break;
              v36 = v42[v32];
              if ( v36 != (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) )
                break;
              if ( a3 != nullptr )
              {
                v37 = a3[2];
                if ( v37 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v37 + 1;
                a4 = -1;
              }
              ++v32;
            }
            while ( v32 < v43 );
            v34 = v43;
          }
          if ( v32 == v34 )
          {
            *a7 = *v44;
            goto LABEL_3;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v22 = 1;
          v23 = strlen(*(const char **)(a8 + 4 * *v44));
          do
          {
            v24 = v44[v22++];
            v25 = strlen(*(const char **)(a8 + 4 * v24));
            if ( v23 > v25 )
              v23 = v25;
          }
          while ( v22 < (unsigned int)(uintptr_t)(v42) );
          if ( a3 != nullptr )
          {
            v26 = a3[2];
            if ( v26 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v26 + 1;
            a4 = -1;
          }
          if ( ++v41 >= v23 )
            break;
          v27 = sub_19225E0(&a3);
          if ( v27 == (uint8_t)sub_19225E0(&a5) )
            break;
          v28 = 0;
          do
          {
            v29 = &v44[v28];
            v40 = *(uint8_t *)(*(uint32_t *)(a8 + 4 * *v29) + v41);
            v30 = sub_1919D70((int)(uintptr_t)(&a3));
            if ( v40 == v30 )
              ++v28;
            else
              *v29 = v44[(uint32_t)(uintptr_t)(--v42)];
          }
          while ( v28 < (unsigned int)(uintptr_t)(v42) );
          if ( (unsigned int)(uintptr_t)(v42) <= 1 )
            goto LABEL_26;
        }
      }
    }
  }
  *a11 |= 4u;
LABEL_3:
  v14 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1924850  (binary VA: 0x1924850)
// Original: sub_1924850
// ----------------------------------------------------------------------------
uint32_t * sub_1924850(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9, char *s)
{
  size_t v10;
  int v11;
  uint8_t *v12;
  char v13; // bp
  int v14;
  char *v16;
  uint8_t v17;
  char v18;
  char v19; // bp
  size_t v20;
  uint8_t v21;
  char v22;
  uint8_t v23;
  int v24;
  unsigned int v25;
  uint32_t *v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  char v33;
  char v34;
  char v35;
  char v36;
  uint32_t *v37;
  int v38;
  int v39;
  uint32_t *v40;
  int v41;
  int v42;
  int *v43;
  unsigned int v44;
  uint8_t v45;
  int v46;
  char v47;
  unsigned int v48;
  uint8_t v49;
  int v50;
  char v51;
  char v52;
  char v53;
  char v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef size_t _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef char _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef char _g4_t_v78[10];
  typedef uint32_t _g4_t_v79[7];
  typedef uint32_t _g4_t_v80[7];
  typedef uint32_t _g4_t_v81[12];
  typedef uint32_t _g4_t_v82[19];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v55)) > _g4_s0 ? (4u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v56)) > _g4_s1 ? (8u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v57)) > _g4_s2 ? (12u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v58)) > _g4_s3 ? (16u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v59)) > _g4_s4 ? (20u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v60)) > _g4_s5 ? (24u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v61)) > _g4_s6 ? (28u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v62)) > _g4_s7 ? (28u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v63)) > _g4_s8 ? (32u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v64)) > _g4_s9 ? (36u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v65)) > _g4_s10 ? (40u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v66)) > _g4_s11 ? (56u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v67)) > _g4_s12 ? (56u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v68)) > _g4_s13 ? (60u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v69)) > _g4_s14 ? (64u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (71u + sizeof(_g4_t_v70)) > _g4_s15 ? (71u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (71u + sizeof(_g4_t_v71)) > _g4_s16 ? (71u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (71u + sizeof(_g4_t_v72)) > _g4_s17 ? (71u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v73)) > _g4_s18 ? (72u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v74)) > _g4_s19 ? (76u + sizeof(_g4_t_v74)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v75)) > _g4_s20 ? (80u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v76)) > _g4_s21 ? (84u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v77)) > _g4_s22 ? (88u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (94u + sizeof(_g4_t_v78)) > _g4_s23 ? (94u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v79)) > _g4_s24 ? (104u + sizeof(_g4_t_v79)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v80)) > _g4_s25 ? (132u + sizeof(_g4_t_v80)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v81)) > _g4_s26 ? (160u + sizeof(_g4_t_v81)) : _g4_s26,
    _g4_s28 = (208u + sizeof(_g4_t_v82)) > _g4_s27 ? (208u + sizeof(_g4_t_v82)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 71u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 71u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 71u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 94u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 132u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 160u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 208u);

  v10 = 0;
  v11 = a7 + 108;
  v69 = (uint32_t *)(sub_191E730(a7 + 108));
  v12 = (uint8_t *)(sub_191CFA0(v11));
  v68 = strlen(s);
  v75 = 0;
  while ( 1 )
  {
    v13 = sub_19225E0(&a3);
    if ( v13 == (uint8_t)sub_19225E0(&a5) || v10 >= v68 || v75 != 0 )
      break;
    v16 = &s[v10];
    v17 = s[v10];
    v18 = v12[v17 + 285];
    if ( v18 != 0
      || (v66 = v17,
          (v18 = G4_VCALL<int>(v12, 32, (char)v17, 0, v57, v58, v59, v60, v61, v63, v64)) == 0) )
    {
      if ( v18 == 37 )
        goto LABEL_15;
    }
    else
    {
      v12[v66 + 285] = v18;
      if ( v18 == 37 )
      {
LABEL_15:
        v20 = v10 + 1;
        v21 = s[v10 + 1];
        v22 = v12[v21 + 285];
        if ( v22 != 0
          || (v67 = v21,
              (v22 = G4_VCALL<int>(v12, 32, (char)v21, 0)) == 0) )
        {
          v76 = 0;
          if ( v22 == 79 )
            goto LABEL_23;
        }
        else
        {
          v12[v67 + 285] = v22;
          v76 = 0;
          if ( v22 == 79 )
          {
LABEL_23:
            v20 = v10 + 2;
            v23 = s[v10 + 2];
            v24 = v23;
            v22 = v12[v23 + 285];
            if ( v22 == 0 )
            {
              v22 = G4_VCALL<int>(v12, 32, (char)v23, 0);
              if ( v22 != 0 )
                v12[v24 + 285] = v22;
            }
            goto LABEL_20;
          }
        }
        if ( v22 == 69 )
          goto LABEL_23;
LABEL_20:
        switch ( v22 )
        {
          case 'A':
            v26 = (uint32_t *)v69[2];
            v80[0] = v26[11];
            v27 = v26[12];
            v28 = v26[13];
            v80[1] = v27;
            v80[2] = v28;
            v80[3] = *(uint32_t *)(v69[2] + 56);
            v80[4] = *(uint32_t *)(v69[2] + 60);
            v80[5] = *(uint32_t *)(v69[2] + 64);
            v80[6] = *(uint32_t *)(v69[2] + 68);
            sub_1924580(&v73, a2, a3, a4, a5, a6, a9 + 6, (int)(uintptr_t)(v80), 7, a7, &v75);
            goto LABEL_34;
          case 'B':
            v29 = (uint32_t *)v69[2];
            v82[0] = v29[25];
            v30 = v29[26];
            v31 = v29[27];
            v82[1] = v30;
            v82[2] = v31;
            v82[3] = *(uint32_t *)(v69[2] + 112);
            v82[4] = *(uint32_t *)(v69[2] + 116);
            v82[5] = *(uint32_t *)(v69[2] + 120);
            v82[6] = *(uint32_t *)(v69[2] + 124);
            v82[7] = *(uint32_t *)(v69[2] + 128);
            v82[8] = *(uint32_t *)(v69[2] + 132);
            v82[9] = *(uint32_t *)(v69[2] + 136);
            v82[10] = *(uint32_t *)(v69[2] + 140);
            v82[11] = *(uint32_t *)(v69[2] + 144);
            sub_1924580(&v73, a2, a3, a4, a5, a6, a9 + 4, (int)(uintptr_t)(v82), 12, a7, &v75);
            goto LABEL_34;
          case 'C':
          case 'Y':
          case 'y':
            v10 = v20;
            sub_1922640(&v73, a2, a3, a4, a5, a6, &v76, 0, 9999, 4, a7, &v75);
            a3 = v73;
            a4 = v74;
            if ( v75 == 0 )
            {
              v32 = v76 + 100;
              if ( v76 >= 0 )
                v32 = v76 - 1900;
              a9[5] = v32;
            }
            goto LABEL_12;
          case 'D':
            v33 = v12[28];
            if ( v33 == 1 )
            {
              strcpy(v78, "%m/%d/%y");
            }
            else
            {
              if ( v33 == 0 )
                sub_18FFC70(v12);
              G4_VCALL<void>(v12, 28, &aHM_0 /* "%H:%M" */[-9], "%H:%M", v78);
            }
            goto LABEL_45;
          case 'H':
            sub_1922640(&v73, a2, a3, a4, a5, a6, a9 + 2, 0, 23, 2, a7, &v75);
            goto LABEL_34;
          case 'I':
            sub_1922640(&v73, a2, a3, a4, a5, a6, a9 + 2, 1, 12, 2, a7, &v75);
            goto LABEL_34;
          case 'M':
            sub_1922640(&v73, a2, a3, a4, a5, a6, a9 + 1, 0, 59, 2, a7, &v75);
            goto LABEL_34;
          case 'R':
            v34 = v12[28];
            if ( v34 == 1 )
            {
              strcpy(v78, "%H:%M");
            }
            else
            {
              if ( v34 == 0 )
                sub_18FFC70(v12);
              G4_VCALL<void>(v12, 28, &aHMS_1 /* "%H:%M:%S" */[-6], "%H:%M:%S", v78);
            }
LABEL_45:
            v63 = a9;
            v61 = &v75;
            v60 = a7;
            v59 = a6;
            v58 = a5;
            v57 = a4;
            v64 = v78;
            v56 = a3;
            v55 = a2;
            sub_1924850(&v73);
            goto LABEL_34;
          case 'S':
            sub_1922640(&v73, a2, a3, a4, a5, a6, a9, 0, 61, 2, a7, &v75);
            goto LABEL_34;
          case 'T':
            v35 = v12[28];
            if ( v35 == 1 )
            {
              strcpy(v78, "%H:%M:%S");
            }
            else
            {
              if ( v35 == 0 )
                sub_18FFC70(v12);
              G4_VCALL<void>(v12, 28, &aBasicStringCop /* "basic_string::copy" */[-9], "basic_string::copy", v78);
            }
            v63 = a9;
            v61 = &v75;
            v60 = a7;
            v59 = a6;
            v58 = a5;
            v57 = a4;
            v64 = v78;
            v56 = a3;
            v55 = a2;
            goto LABEL_60;
          case 'X':
            v60 = a7;
            v64 = *(char **)(v69[2] + 16);
            v63 = a9;
            v61 = &v75;
            v58 = a5;
            v59 = a6;
            v56 = a3;
            v57 = a4;
            v55 = a2;
LABEL_60:
            sub_1924850(&v73);
            goto LABEL_34;
          case 'Z':
            if ( (*(uint8_t *)(*((uint32_t *)v12 + 6) + (uint8_t)sub_1919D70((int)(uintptr_t)(&a3))) & 1) == 0 )
              goto LABEL_19;
            sub_1924580(&v73, a2, a3, a4, a5, a6, &v77, (int)(uintptr_t)(&off_20CB4E0), 14, a7, &v75);
            a3 = v73;
            a4 = v74;
            v70 = sub_19225E0(&a3);
            if ( v70 == (uint8_t)sub_19225E0(&a5) || v75 != 0 || v77 != 0 )
              goto LABEL_35;
            v71 = sub_1919D70((int)(uintptr_t)(&a3));
            if ( v12[28] != 0 )
            {
              v36 = v12[74];
            }
            else
            {
              sub_18FFC70(v12);
              v36 = G4_VCALL<int>(v12, 24, 45);
            }
            if ( v71 == v36
              || ((v72 = sub_1919D70((int)(uintptr_t)(&a3)), v12[28] == 0)
                ? (sub_18FFC70(v12), v54 = G4_VCALL<int>(v12, 24, 43))
                : (v54 = v12[72]),
                  v72 == v54) )
            {
              sub_1922640(&v73, a2, a3, a4, a5, a6, &v77, 0, 23, 2, a7, &v75);
              a4 = v74;
              a3 = v73;
              sub_1922640(&v73, a2, v73, v74, a5, a6, &v77, 0, 59, 2, a7, &v75);
LABEL_34:
              a3 = v73;
              a4 = v74;
LABEL_35:
              v10 = v20;
            }
            else
            {
              v10 = v20;
            }
            break;
          case 'a':
            v37 = (uint32_t *)v69[2];
            v79[0] = v37[18];
            v38 = v37[19];
            v39 = v37[20];
            v79[1] = v38;
            v79[2] = v39;
            v79[3] = *(uint32_t *)(v69[2] + 84);
            v79[4] = *(uint32_t *)(v69[2] + 88);
            v79[5] = *(uint32_t *)(v69[2] + 92);
            v79[6] = *(uint32_t *)(v69[2] + 96);
            sub_1924580(&v73, a2, a3, a4, a5, a6, a9 + 6, (int)(uintptr_t)(v79), 7, a7, &v75);
            goto LABEL_34;
          case 'b':
          case 'h':
            v40 = (uint32_t *)v69[2];
            v81[0] = v40[37];
            v41 = v40[38];
            v42 = v40[39];
            v81[1] = v41;
            v81[2] = v42;
            v81[3] = *(uint32_t *)(v69[2] + 160);
            v81[4] = *(uint32_t *)(v69[2] + 164);
            v81[5] = *(uint32_t *)(v69[2] + 168);
            v81[6] = *(uint32_t *)(v69[2] + 172);
            v81[7] = *(uint32_t *)(v69[2] + 176);
            v81[8] = *(uint32_t *)(v69[2] + 180);
            v81[9] = *(uint32_t *)(v69[2] + 184);
            v81[10] = *(uint32_t *)(v69[2] + 188);
            v81[11] = *(uint32_t *)(v69[2] + 192);
            sub_1924580(&v73, a2, a3, a4, a5, a6, a9 + 4, (int)(uintptr_t)(v81), 12, a7, &v75);
            goto LABEL_34;
          case 'c':
            v60 = a7;
            v64 = *(char **)(v69[2] + 24);
            v63 = a9;
            v61 = &v75;
            v58 = a5;
            v59 = a6;
            v56 = a3;
            v57 = a4;
            v55 = a2;
            sub_1924850(&v73);
            goto LABEL_34;
          case 'd':
            v65 = a7;
            v62 = 1;
            goto LABEL_74;
          case 'e':
            if ( (*(uint8_t *)(*((uint32_t *)v12 + 6) + (uint8_t)sub_1919D70((int)(uintptr_t)(&a3))) & 8) != 0 )
            {
              v43 = a9 + 3;
              if ( a3 != nullptr )
              {
                v44 = a3[2];
                if ( v44 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v44 + 1;
                a4 = -1;
              }
              sub_1922640(&v73, a2, a3, a4, a5, a6, v43, 1, 9, 1, a7, &v75);
            }
            else
            {
              v65 = a7;
              v62 = 10;
LABEL_74:
              sub_1922640(&v73, a2, a3, a4, a5, a6, a9 + 3, v62, 31, 2, v65, &v75);
            }
            goto LABEL_34;
          case 'm':
            v10 = v20;
            sub_1922640(&v73, a2, a3, a4, a5, a6, &v76, 1, 12, 2, a7, &v75);
            a3 = v73;
            a4 = v74;
            if ( v75 == 0 )
              a9[4] = v76 - 1;
            goto LABEL_12;
          case 'n':
            v45 = sub_1919D70((int)(uintptr_t)(&a3));
            v46 = v45;
            v47 = v12[v45 + 285];
            if ( v47 == 0 )
            {
              v52 = G4_VCALL<int>(v12, 32, (char)v45, 0);
              v47 = v52;
              if ( v52 != 0 )
                v12[v46 + 285] = v52;
            }
            if ( v47 == 10 )
              goto LABEL_85;
            goto LABEL_19;
          case 't':
            v49 = sub_1919D70((int)(uintptr_t)(&a3));
            v50 = v49;
            v51 = v12[v49 + 285];
            if ( v51 == 0 )
            {
              v53 = G4_VCALL<int>(v12, 32, (char)v49, 0);
              v51 = v53;
              if ( v53 != 0 )
                v12[v50 + 285] = v53;
            }
            if ( v51 != 9 )
              goto LABEL_19;
LABEL_85:
            v10 = v20;
            if ( a3 != nullptr )
            {
              v48 = a3[2];
              if ( v48 >= a3[3] )
                G4_VCALL<void>(a3, 40);
              else
                a3[2] = v48 + 1;
              a4 = -1;
              v10 = v20;
            }
            break;
          case 'x':
            v10 = v20;
            v60 = a7;
            v64 = *(char **)(v69[2] + 8);
            v63 = a9;
            v61 = &v75;
            v58 = a5;
            v59 = a6;
            v56 = a3;
            v55 = a2;
            v57 = a4;
            sub_1924850(&v73);
            a3 = v73;
            a4 = v74;
            goto LABEL_12;
          default:
LABEL_19:
            v75 |= 4u;
            v10 = v20;
            break;
        }
        goto LABEL_12;
      }
    }
    v19 = *v16;
    if ( v19 == (uint8_t)sub_1919D70((int)(uintptr_t)(&a3)) )
    {
      if ( a3 != nullptr )
      {
        v25 = a3[2];
        if ( v25 >= a3[3] )
          G4_VCALL<void>(a3, 40, v55, v56);
        else
          a3[2] = v25 + 1;
        a4 = -1;
      }
    }
    else
    {
      v75 |= 4u;
    }
LABEL_12:
    ++v10;
  }
  if ( v10 != v68 || v75 != 0 )
    *a8 |= 4u;
  v14 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1925940  (binary VA: 0x1925940)
// Original: sub_1925940
// ----------------------------------------------------------------------------
uint32_t * sub_1925940(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t v14[5];

  v9 = a7;
  v10 = a8;
  v11 = (uint32_t *)(sub_191E730(a7 + 108));
  sub_1924850(v14, a2, a3, a4, a5, a6, v9, v10, a9, *(char **)(v11[2] + 8));
  a4 = v14[1];
  a3 = (uint32_t *)v14[0];
  LOBYTE(v9) = sub_19225E0(&a3);
  if ( (uint8_t)v9 == (uint8_t)sub_19225E0(&a5) )
    *v10 |= 2u;
  v12 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1925A00  (binary VA: 0x1925a00)
// Original: sub_1925A00
// ----------------------------------------------------------------------------
uint32_t * sub_1925A00(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t v14[5];

  v9 = a7;
  v10 = a8;
  v11 = (uint32_t *)(sub_191E730(a7 + 108));
  sub_1924850(v14, a2, a3, a4, a5, a6, v9, v10, a9, *(char **)(v11[2] + 16));
  a4 = v14[1];
  a3 = (uint32_t *)v14[0];
  LOBYTE(v9) = sub_19225E0(&a3);
  if ( (uint8_t)v9 == (uint8_t)sub_19225E0(&a5) )
    *v10 |= 2u;
  v12 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1925AC0  (binary VA: 0x1925ac0)
// Original: sub_1925AC0
// ----------------------------------------------------------------------------
uint32_t * sub_1925AC0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, unsigned int *a7, int a8, unsigned int a9, int a10, uint32_t *a11)
{
  void *v11;
  char v12; // si
  unsigned int v13;
  char v14; // di
  int *v15;
  int v16;
  bool v17;
  uint32_t *v18;
  unsigned int v19;
  int v20;
  unsigned int v22;
  int v23;
  int *v24;
  int v25;
  char v26;
  int v27;
  char v28;
  unsigned int v29;
  void *v30;
  int v31;
  int v32;
  size_t v33;
  unsigned int v34;
  typedef uint8_t _g4_t_v35[12];
  typedef unsigned int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef unsigned int *_g4_t_v43;
  typedef uint8_t *_g4_t_v44;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v35)) > _g4_s0 ? (4u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v36)) > _g4_s1 ? (16u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v38)) > _g4_s3 ? (24u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v43)) > _g4_s8 ? (44u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v44)) > _g4_s9 ? (48u + sizeof(_g4_t_v44)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);

  v40 = (int *)sub_191CFA0(a10 + 108);
  v11 = alloca(8 * a9 + 15);
  v43 = (unsigned int *)v35;
  v12 = sub_19225E0(&a3);
  if ( v12 == (uint8_t)sub_19225E0(&a5)
    || (LOBYTE(v44) = sub_1919D70((int)(uintptr_t)(&a3)), v42 = (uint32_t *)(2 * a9), 2 * a9 == 0) )
  {
    v13 = 0;
    v44 = nullptr;
    v42 = nullptr;
    goto LABEL_3;
  }
  v22 = 0;
  v41 = 0;
  v23 = a8;
  v24 = v40;
  do
  {
    while ( 1 )
    {
      v26 = **(uint8_t **)(v23 + 4 * v22);
      if ( (uint8_t)(uintptr_t)(v44) != v26 )
      {
        v27 = *v24;
        v39 = v23;
        v28 = (*(int (**)(int *, uint32_t))(v27 + 8))(v24, v26);
        v23 = v39;
        if ( (uint8_t)(uintptr_t)(v44) != v28 )
          break;
      }
      v25 = v41;
      v43[v41] = v22++;
      v41 = v25 + 1;
      if ( (uint32_t *)v22 == v42 )
        goto LABEL_29;
    }
    ++v22;
  }
  while ( (uint32_t *)v22 != v42 );
LABEL_29:
  v13 = v41;
  if ( v41 != 0 )
  {
    if ( a3 != nullptr )
    {
      v29 = a3[2];
      if ( v29 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v29 + 1;
      a4 = -1;
    }
    v30 = alloca(4 * v13 + 15);
    v41 = v13;
    v31 = 0;
    v32 = a8;
    v44 = v35;
    v42 = (uint32_t *)(v35);
    do
    {
      v33 = strlen(*(const char **)(v32 + 4 * v43[v31]));
      *(uint32_t *)&v44[4 * v31++] = v33;
    }
    while ( v31 != v41 );
    v13 = v41;
    v44 = (uint8_t *)(&dword_0 + 1);
  }
  else
  {
    v44 = nullptr;
    v42 = nullptr;
  }
LABEL_3:
  v14 = sub_19225E0(&a3);
  if ( v14 != (uint8_t)sub_19225E0(&a5) )
  {
    LOBYTE(v40) = sub_1919D70((int)(uintptr_t)(&a3));
    if ( v13 != 0 )
    {
      v41 = 0;
      v36 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = (int *)&v43[v36];
          v16 = *v15;
          v37 = &v42[v36];
          v17 = (unsigned int)(uintptr_t)(v44) < *v37;
          v38 = *(uint32_t *)(a8 + 4 * v16);
          if ( v17 )
            break;
          ++v41;
          ++v36;
LABEL_7:
          if ( v36 >= v13 )
            goto LABEL_11;
        }
        if ( (uint8_t)(uintptr_t)(v40) == v44[v38] )
        {
          ++v36;
          goto LABEL_7;
        }
        --v13;
        v18 = v37;
        v17 = v36 < v13;
        *v15 = v43[v13];
        *v18 = v42[v13];
        if ( !v17 )
        {
LABEL_11:
          if ( v41 != v13 )
          {
            if ( a3 != nullptr )
            {
              v19 = a3[2];
              if ( v19 >= a3[3] )
                G4_VCALL<void>(a3, 40);
              else
                a3[2] = v19 + 1;
              a4 = -1;
            }
            ++v44;
            goto LABEL_3;
          }
          goto LABEL_37;
        }
      }
    }
    goto LABEL_21;
  }
LABEL_37:
  if ( v13 != 1 )
  {
    if ( v13 == 2 && ((uint8_t *)*v42 == v44 || (uint8_t *)v42[1] == v44) )
      goto LABEL_39;
LABEL_21:
    *a11 |= 4u;
    goto LABEL_22;
  }
  if ( (uint8_t *)*v42 != v44 )
    goto LABEL_21;
LABEL_39:
  v34 = *v43;
  if ( a9 <= *v43 )
    v34 = *v43 - a9;
  *a7 = v34;
LABEL_22:
  v20 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v20;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1925DA0  (binary VA: 0x1925da0)
// Original: sub_1925DA0
// ----------------------------------------------------------------------------
uint32_t * sub_1925DA0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  char v15; // di
  int v16;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[27];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v20)) > _g4_s2 ? (24u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);

  v9 = a7;
  v10 = a8;
  v18 = a7 + 108;
  v11 = (uint32_t *)(sub_191E730(a7 + 108));
  sub_191CFA0(v18);
  v12 = (uint32_t *)v11[2];
  v22[0] = v12[37];
  v13 = v12[38];
  v14 = v12[39];
  v22[1] = v13;
  v22[2] = v14;
  v22[3] = *(uint32_t *)(v11[2] + 160);
  v22[4] = *(uint32_t *)(v11[2] + 164);
  v22[5] = *(uint32_t *)(v11[2] + 168);
  v22[6] = *(uint32_t *)(v11[2] + 172);
  v22[7] = *(uint32_t *)(v11[2] + 176);
  v22[8] = *(uint32_t *)(v11[2] + 180);
  v22[9] = *(uint32_t *)(v11[2] + 184);
  v22[10] = *(uint32_t *)(v11[2] + 188);
  v22[11] = *(uint32_t *)(v11[2] + 192);
  v22[12] = *(uint32_t *)(v11[2] + 100);
  v22[13] = *(uint32_t *)(v11[2] + 104);
  v22[14] = *(uint32_t *)(v11[2] + 108);
  v22[15] = *(uint32_t *)(v11[2] + 112);
  v22[16] = *(uint32_t *)(v11[2] + 116);
  v22[17] = *(uint32_t *)(v11[2] + 120);
  v22[18] = *(uint32_t *)(v11[2] + 124);
  v22[19] = *(uint32_t *)(v11[2] + 128);
  v22[20] = *(uint32_t *)(v11[2] + 132);
  v22[21] = *(uint32_t *)(v11[2] + 136);
  v22[22] = *(uint32_t *)(v11[2] + 140);
  v22[23] = *(uint32_t *)(v11[2] + 144);
  v21 = 0;
  sub_1925AC0(v19, a2, a3, a4, a5, a6, &v20, (int)(uintptr_t)(v22), 0xCu, v9, &v21);
  a4 = v19[1];
  a3 = (uint32_t *)v19[0];
  if ( v21 != 0 )
    *v10 |= 4u;
  else
    *(uint32_t *)(a9 + 16) = v20;
  v15 = sub_19225E0(&a3);
  if ( v15 == (uint8_t)sub_19225E0(&a5) )
    *v10 |= 2u;
  v16 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v16;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1926010  (binary VA: 0x1926010)
// Original: sub_1926010
// ----------------------------------------------------------------------------
uint32_t * sub_1926010(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  char v16; // di
  int v17;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[2];
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[17];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);

  v9 = a7;
  v10 = a8;
  v19 = a7 + 108;
  v11 = (uint32_t *)(sub_191E730(a7 + 108));
  sub_191CFA0(v19);
  v12 = (uint32_t *)v11[2];
  v23[0] = v12[18];
  v13 = v12[19];
  v14 = v12[20];
  v23[1] = v13;
  v23[2] = v14;
  v23[3] = *(uint32_t *)(v11[2] + 84);
  v23[4] = *(uint32_t *)(v11[2] + 88);
  v23[5] = *(uint32_t *)(v11[2] + 92);
  v23[6] = *(uint32_t *)(v11[2] + 96);
  v23[7] = *(uint32_t *)(v11[2] + 44);
  v23[8] = *(uint32_t *)(v11[2] + 48);
  v23[9] = *(uint32_t *)(v11[2] + 52);
  v23[10] = *(uint32_t *)(v11[2] + 56);
  v23[11] = *(uint32_t *)(v11[2] + 60);
  v15 = v11[2];
  v22 = 0;
  v23[12] = *(uint32_t *)(v15 + 64);
  v23[13] = *(uint32_t *)(v11[2] + 68);
  sub_1925AC0(v20, a2, a3, a4, a5, a6, &v21, (int)(uintptr_t)(v23), 7u, v9, &v22);
  a3 = (uint32_t *)v20[0];
  a4 = v20[1];
  if ( v22 != 0 )
    *v10 |= 4u;
  else
    *(uint32_t *)(a9 + 24) = v21;
  v16 = sub_19225E0(&a3);
  if ( v16 == (uint8_t)sub_19225E0(&a5) )
    *v10 |= 2u;
  v17 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v17;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19261D0  (binary VA: 0x19261d0)
// Original: sub_19261D0
// ----------------------------------------------------------------------------
uint32_t * sub_19261D0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  uint32_t *v9;
  int *v10;
  int v11;
  char v12; // bp
  char v13;
  char v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  bool v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  char v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  char v51;
  bool v52;
  int v53;
  int v54;
  int v55;
  char v56;
  bool v57;
  int v58;
  unsigned int v59;
  char v60; // di
  unsigned int v61;
  char v62; // bp
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  typedef char _g4_t_v70;
  typedef int _g4_t_v71;
  typedef char _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef int32_t _g4_t_v90;
  typedef char _g4_t_v91;
  typedef char _g4_t_v92;
  typedef int _g4_t_v93;
  typedef void *_g4_t_v94;
  typedef void *_g4_t_s;
  typedef char _g4_t_v96;
  typedef uint32_t _g4_t_v97[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v70)) > _g4_s0 ? (0u + sizeof(_g4_t_v70)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v71)) > _g4_s1 ? (0u + sizeof(_g4_t_v71)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v72)) > _g4_s2 ? (0u + sizeof(_g4_t_v72)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v73)) > _g4_s3 ? (0u + sizeof(_g4_t_v73)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v74)) > _g4_s4 ? (0u + sizeof(_g4_t_v74)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v75)) > _g4_s5 ? (0u + sizeof(_g4_t_v75)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v76)) > _g4_s6 ? (0u + sizeof(_g4_t_v76)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v77)) > _g4_s7 ? (0u + sizeof(_g4_t_v77)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v78)) > _g4_s8 ? (0u + sizeof(_g4_t_v78)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v79)) > _g4_s9 ? (0u + sizeof(_g4_t_v79)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v80)) > _g4_s10 ? (0u + sizeof(_g4_t_v80)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v81)) > _g4_s11 ? (0u + sizeof(_g4_t_v81)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v82)) > _g4_s12 ? (0u + sizeof(_g4_t_v82)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v83)) > _g4_s13 ? (0u + sizeof(_g4_t_v83)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v84)) > _g4_s14 ? (0u + sizeof(_g4_t_v84)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v85)) > _g4_s15 ? (20u + sizeof(_g4_t_v85)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v86)) > _g4_s16 ? (20u + sizeof(_g4_t_v86)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v87)) > _g4_s17 ? (20u + sizeof(_g4_t_v87)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v88)) > _g4_s18 ? (20u + sizeof(_g4_t_v88)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v89)) > _g4_s19 ? (20u + sizeof(_g4_t_v89)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v90)) > _g4_s20 ? (24u + sizeof(_g4_t_v90)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v91)) > _g4_s21 ? (24u + sizeof(_g4_t_v91)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v92)) > _g4_s22 ? (24u + sizeof(_g4_t_v92)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v93)) > _g4_s23 ? (32u + sizeof(_g4_t_v93)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v94)) > _g4_s24 ? (36u + sizeof(_g4_t_v94)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_s)) > _g4_s25 ? (40u + sizeof(_g4_t_s)) : _g4_s25,
    _g4_s27 = (47u + sizeof(_g4_t_v96)) > _g4_s26 ? (47u + sizeof(_g4_t_v96)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v97)) > _g4_s27 ? (60u + sizeof(_g4_t_v97)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 0u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 0u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 0u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 0u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 0u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 0u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 0u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 0u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 0u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 0u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 0u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 20u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 20u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 20u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 20u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 24u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 24u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 24u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 40u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 47u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 60u);

  v9 = a9;
  v90 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(a7 + 108) + 12) + 4 * v90);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v67 = opNew(0x68u);
    *(uint32_t *)(v67 + 4) = 0;
    *(uint32_t *)v67 = (uint32_t)(uintptr_t)(&off_20AAB70);
    v68 = a7;
    *(uint32_t *)(v67 + 8) = 0;
    *(uint32_t *)(v67 + 12) = 0;
    *(uint8_t *)(v67 + 16) = 0;
    *(uint32_t *)(v67 + 20) = 0;
    *(uint32_t *)(v67 + 24) = 0;
    *(uint32_t *)(v67 + 28) = 0;
    *(uint32_t *)(v67 + 32) = 0;
    *(uint8_t *)(v67 + 36) = 0;
    *(uint8_t *)(v67 + 37) = 0;
    *(uint8_t *)(v67 + 100) = 0;
    sub_191D3E0(v67, v68 + 108);
    sub_19023D0(*(uint32_t *)(a7 + 108), (volatile int32_t *)v67, v90);
    v11 = *v10;
  }
  v12 = sub_19225E0(&a3);
  if ( v12 == (uint8_t)sub_19225E0(&a5) )
  {
    v70 = 0;
LABEL_5:
    v93 = 0;
    v13 = *(uint8_t *)(v11 + 16);
    v91 = 0;
    v85 = 1;
    goto LABEL_6;
  }
  v56 = sub_1919D70((int)(uintptr_t)(&a3));
  v70 = v56;
  v57 = v56 == *(uint8_t *)(v11 + 75);
  if ( v56 == *(uint8_t *)(v11 + 75) || v56 == *(uint8_t *)(v11 + 74) )
  {
    v13 = *(uint8_t *)(v11 + 16);
    if ( (v13 == 0 || v70 != *(uint8_t *)(v11 + 37)) && v70 != *(uint8_t *)(v11 + 36) )
    {
      sub_1939C10(v9, !v57 ? 45 : 43);
      if ( a3 != nullptr )
      {
        v61 = a3[2];
        if ( v61 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v61 + 1;
        a4 = -1;
      }
      v62 = sub_19225E0(&a3);
      if ( v62 == (uint8_t)sub_19225E0(&a5) )
        goto LABEL_5;
      v70 = sub_1919D70((int)(uintptr_t)(&a3));
      v13 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v13 = *(uint8_t *)(v11 + 16);
  }
  v91 = 0;
  v58 = 0;
  v89 = v9;
  while ( (v13 == 0 || *(uint8_t *)(v11 + 37) != v70) && *(uint8_t *)(v11 + 36) != v70 && *(uint8_t *)(v11 + 78) == v70 )
  {
    if ( v91 == 0 )
    {
      v63 = *v89;
      v64 = *(uint32_t *)(*v89 - 12);
      v65 = v64 + 1;
      if ( (unsigned int)(v64 + 1) > *(uint32_t *)(*v89 - 8) || *(int *)(v63 - 4) > 0 )
      {
        sub_1939B80(v89, v65);
        v63 = *v89;
        v64 = *(uint32_t *)(*v89 - 12);
      }
      *(uint8_t *)(v63 + v64) = 48;
      v66 = *v89;
      if ( (uint32_t *)(*v89 - 12) == dword_213B808 )
      {
        v91 = 1;
      }
      else
      {
        *(uint32_t *)(v66 - 4) = 0;
        *(uint32_t *)(v66 - 12) = v65;
        v91 = 1;
        *(uint8_t *)(v66 + v65) = 0;
      }
    }
    ++v58;
    if ( a3 != nullptr )
    {
      v59 = a3[2];
      if ( v59 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v59 + 1;
      a4 = -1;
    }
    v60 = sub_19225E0(&a3);
    if ( v60 == (uint8_t)sub_19225E0(&a5) )
    {
      v9 = v89;
      v93 = v58;
      v13 = *(uint8_t *)(v11 + 16);
      v85 = 1;
      goto LABEL_6;
    }
    v70 = sub_1919D70((int)(uintptr_t)(&a3));
    v13 = *(uint8_t *)(v11 + 16);
  }
  v9 = v89;
  v93 = v58;
  v85 = 0;
LABEL_6:
  v97[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v13 != 0 )
    sub_1939B80(v97, 32);
  s = (void *)(v11 + 78);
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v22 = v85 == 0;
    v96 = 0;
    v86 = 0;
    if ( !v22 )
      goto LABEL_49;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v70 > 47 && v70 <= 57 )
        {
          v23 = *v9;
          v92 = v70 - 48;
          v24 = *(uint32_t *)(*v9 - 12);
          v74 = v24 + 1;
          if ( (unsigned int)(v24 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v23 - 4) > 0 )
          {
            sub_1939B80(v9, v74);
            v23 = *v9;
            v24 = *(uint32_t *)(*v9 - 12);
          }
          *(uint8_t *)(v23 + v24) = v92 + 48;
          v25 = *v9;
          if ( (uint32_t *)(*v9 - 12) == dword_213B808 )
          {
            v91 = 1;
          }
          else
          {
            *(uint32_t *)(v25 - 4) = 0;
            *(uint32_t *)(v25 - 12) = v74;
            v91 = 1;
            *(uint8_t *)(v25 + v74) = 0;
          }
          goto LABEL_44;
        }
        if ( *(uint8_t *)(v11 + 36) == v70 && v96 == 0 && v86 == 0 )
        {
          sub_1939C10(v9, 46);
          v96 = 1;
          goto LABEL_44;
        }
        if ( *(uint8_t *)(v11 + 92) != v70 && *(uint8_t *)(v11 + 98) != v70 || v86 != 0 || v91 == 0 )
          goto LABEL_49;
        v30 = *v9;
        v31 = *(uint32_t *)(*v9 - 12);
        v76 = v31 + 1;
        if ( (unsigned int)(v31 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v30 - 4) > 0 )
        {
          sub_1939B80(v9, v76);
          v30 = *v9;
          v31 = *(uint32_t *)(*v9 - 12);
        }
        *(uint8_t *)(v30 + v31) = 101;
        v32 = *v9;
        if ( (uint32_t *)(*v9 - 12) != dword_213B808 )
        {
          *(uint32_t *)(v32 - 4) = 0;
          *(uint32_t *)(v32 - 12) = v76;
          *(uint8_t *)(v32 + v76) = 0;
        }
        if ( a3 != nullptr )
        {
          v33 = a3[2];
          if ( v33 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v33 + 1;
          a4 = -1;
        }
        v77 = sub_19225E0(&a3);
        if ( v77 == (uint8_t)sub_19225E0(&a5) )
        {
LABEL_161:
          v86 = 1;
          goto LABEL_49;
        }
        v34 = sub_1919D70((int)(uintptr_t)(&a3));
        v70 = v34;
        v87 = 43;
        if ( v34 != *(uint8_t *)(v11 + 75) )
          break;
LABEL_75:
        v35 = *v9;
        v36 = *(uint32_t *)(*v9 - 12);
        v78 = v36 + 1;
        if ( (unsigned int)(v36 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v35 - 4) > 0 )
        {
          sub_1939B80(v9, v78);
          v35 = *v9;
          v36 = *(uint32_t *)(*v9 - 12);
        }
        *(uint8_t *)(v35 + v36) = v87;
        v37 = *v9;
        if ( (uint32_t *)(*v9 - 12) == dword_213B808 )
        {
          v86 = 1;
        }
        else
        {
          *(uint32_t *)(v37 - 4) = 0;
          *(uint32_t *)(v37 - 12) = v78;
          v86 = 1;
          *(uint8_t *)(v37 + v78) = 0;
        }
LABEL_44:
        if ( a3 != nullptr )
        {
          v26 = a3[2];
          if ( v26 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v26 + 1;
          a4 = -1;
        }
        v75 = sub_19225E0(&a3);
        if ( v75 == (uint8_t)sub_19225E0(&a5) )
          goto LABEL_49;
        v70 = sub_1919D70((int)(uintptr_t)(&a3));
      }
      v86 = 1;
      if ( v34 == *(uint8_t *)(v11 + 74) )
      {
        v87 = 45;
        goto LABEL_75;
      }
    }
  }
  if ( v85 != 0 )
  {
    v86 = 0;
    v96 = 0;
  }
  else
  {
    v14 = *(uint8_t *)(v11 + 16);
    v86 = 0;
    v96 = 0;
    while ( v14 == 0 || *(uint8_t *)(v11 + 37) != v70 )
    {
LABEL_13:
      if ( *(uint8_t *)(v11 + 36) == v70 )
      {
        if ( v96 == 0 && v86 == 0 )
        {
          v38 = v97[0];
          v39 = *(uint32_t *)(v97[0] - 12);
          if ( v39 != 0 )
          {
            v79 = v39 + 1;
            if ( (unsigned int)(v39 + 1) > *(uint32_t *)(v97[0] - 8) || *(int *)(v97[0] - 4) > 0 )
            {
              sub_1939B80(v97, v79);
              v38 = v97[0];
              v39 = *(uint32_t *)(v97[0] - 12);
            }
            *(uint8_t *)(v38 + v39) = v93;
            v40 = v97[0];
            if ( (uint32_t *)(v97[0] - 12) != dword_213B808 )
            {
              *(uint32_t *)(v97[0] - 4) = 0;
              *(uint32_t *)(v40 - 12) = v79;
              *(uint8_t *)(v40 + v79) = 0;
            }
          }
          v41 = *v9;
          v42 = *(uint32_t *)(*v9 - 12);
          v80 = v42 + 1;
          if ( (unsigned int)(v42 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v41 - 4) > 0 )
          {
            sub_1939B80(v9, v80);
            v41 = *v9;
            v42 = *(uint32_t *)(*v9 - 12);
          }
          *(uint8_t *)(v41 + v42) = 46;
          v43 = *v9;
          if ( (uint32_t *)(*v9 - 12) == dword_213B808 )
          {
            v96 = 1;
          }
          else
          {
            *(uint32_t *)(v43 - 4) = 0;
            *(uint32_t *)(v43 - 12) = v80;
            v96 = 1;
            *(uint8_t *)(v43 + v80) = 0;
          }
          goto LABEL_21;
        }
        goto LABEL_49;
      }
      v94 = memchr(s, v70, 0xAu);
      if ( v94 != nullptr )
      {
        v15 = *v9;
        v16 = *(uint32_t *)(*v9 - 12);
        v71 = v16 + 1;
        if ( (unsigned int)(v16 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v15 - 4) > 0 )
        {
          sub_1939B80(v9, v71);
          v15 = *v9;
          v16 = *(uint32_t *)(*v9 - 12);
        }
        *(uint8_t *)(v15 + v16) = (uint8_t)(uintptr_t)(v94) - (uint8_t)(uintptr_t)(s) + 48;
        v17 = *v9;
        if ( (uint32_t *)(*v9 - 12) != dword_213B808 )
        {
          *(uint32_t *)(v17 - 4) = 0;
          *(uint32_t *)(v17 - 12) = v71;
          *(uint8_t *)(v17 + v71) = 0;
        }
        ++v93;
        v91 = 1;
        goto LABEL_21;
      }
      if ( *(uint8_t *)(v11 + 92) != v70 && *(uint8_t *)(v11 + 98) != v70 || v86 != 0 || v91 == 0 )
        goto LABEL_49;
      v44 = v97[0];
      v45 = *(uint32_t *)(v97[0] - 12);
      if ( v45 != 0 && v96 == 0 )
      {
        v81 = v45 + 1;
        if ( (unsigned int)(v45 + 1) > *(uint32_t *)(v97[0] - 8) || *(int *)(v97[0] - 4) > 0 )
        {
          sub_1939B80(v97, v81);
          v44 = v97[0];
          v45 = *(uint32_t *)(v97[0] - 12);
        }
        *(uint8_t *)(v44 + v45) = v93;
        v46 = v97[0];
        if ( (uint32_t *)(v97[0] - 12) != dword_213B808 )
        {
          *(uint32_t *)(v97[0] - 4) = 0;
          *(uint32_t *)(v46 - 12) = v81;
          *(uint8_t *)(v46 + v81) = 0;
        }
      }
      v47 = *v9;
      v48 = *(uint32_t *)(*v9 - 12);
      v82 = v48 + 1;
      if ( (unsigned int)(v48 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v47 - 4) > 0 )
      {
        sub_1939B80(v9, v82);
        v47 = *v9;
        v48 = *(uint32_t *)(*v9 - 12);
      }
      *(uint8_t *)(v47 + v48) = 101;
      v49 = *v9;
      if ( (uint32_t *)(*v9 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v49 - 4) = 0;
        *(uint32_t *)(v49 - 12) = v82;
        *(uint8_t *)(v49 + v82) = 0;
      }
      if ( a3 != nullptr )
      {
        v50 = a3[2];
        if ( v50 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v50 + 1;
        a4 = -1;
      }
      v83 = sub_19225E0(&a3);
      if ( v83 == (uint8_t)sub_19225E0(&a5) )
        goto LABEL_161;
      v51 = sub_1919D70((int)(uintptr_t)(&a3));
      v70 = v51;
      v52 = v51 == *(uint8_t *)(v11 + 75);
      if ( v51 == *(uint8_t *)(v11 + 75) || v51 == *(uint8_t *)(v11 + 74) )
      {
        v14 = *(uint8_t *)(v11 + 16);
        if ( (v14 == 0 || v70 != *(uint8_t *)(v11 + 37)) && v70 != *(uint8_t *)(v11 + 36) )
        {
          v84 = !v52 ? 45 : 43;
          v53 = *v9;
          v54 = *(uint32_t *)(*v9 - 12);
          v88 = v54 + 1;
          if ( (unsigned int)(v54 + 1) > *(uint32_t *)(*v9 - 8) || *(int *)(v53 - 4) > 0 )
          {
            sub_1939B80(v9, v88);
            v53 = *v9;
            v54 = *(uint32_t *)(*v9 - 12);
          }
          *(uint8_t *)(v53 + v54) = v84;
          v55 = *v9;
          if ( (uint32_t *)(*v9 - 12) == dword_213B808 )
          {
            v86 = 1;
          }
          else
          {
            v69 = v88;
            *(uint32_t *)(v55 - 4) = 0;
            *(uint32_t *)(v55 - 12) = v88;
            v86 = 1;
            *(uint8_t *)(v55 + v69) = 0;
          }
          goto LABEL_21;
        }
        v86 = 1;
      }
      else
      {
        v14 = *(uint8_t *)(v11 + 16);
        v86 = 1;
      }
    }
    while ( v96 == 0 && v86 == 0 )
    {
      if ( v93 == 0 )
      {
        g4_std::string::clear(v9, 0, *(uint32_t *)(*v9 - 12), 0);
        break;
      }
      v19 = v97[0];
      v20 = *(uint32_t *)(v97[0] - 12);
      v73 = v20 + 1;
      if ( (unsigned int)(v20 + 1) > *(uint32_t *)(v97[0] - 8) || *(int *)(v97[0] - 4) > 0 )
      {
        sub_1939B80(v97, v73);
        v19 = v97[0];
        v20 = *(uint32_t *)(v97[0] - 12);
      }
      *(uint8_t *)(v19 + v20) = v93;
      v21 = v97[0];
      if ( (uint32_t *)(v97[0] - 12) == dword_213B808 )
      {
        v93 = 0;
      }
      else
      {
        *(uint32_t *)(v97[0] - 4) = 0;
        *(uint32_t *)(v21 - 12) = v73;
        v93 = 0;
        *(uint8_t *)(v21 + v73) = 0;
      }
LABEL_21:
      if ( a3 != nullptr )
      {
        v18 = a3[2];
        if ( v18 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v18 + 1;
        a4 = -1;
      }
      v72 = sub_19225E0(&a3);
      if ( v72 == (uint8_t)sub_19225E0(&a5) )
        break;
      v70 = sub_1919D70((int)(uintptr_t)(&a3));
      if ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v70 )
        goto LABEL_13;
    }
  }
LABEL_49:
  v27 = v97[0];
  if ( *(uint32_t *)(v97[0] - 12) != 0 )
  {
    if ( v96 == 0 && v86 == 0 )
    {
      sub_1939C10(v97, v93);
      v27 = v97[0];
    }
    if ( (uint8_t)sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v97) == 0 )
      *a8 = 4;
  }
  v28 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v28;
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v27 - 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1926ED0  (binary VA: 0x1926ed0)
// Original: sub_1926ED0
// ----------------------------------------------------------------------------
uint32_t * sub_1926ED0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_s[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_s)) > _g4_s2 ? (24u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 24u);

  v9 = (uint32_t *)a8;
  s[0] = (char *)&dword_213B814;
  sub_1939B80(s, 32);
  sub_19261D0(v14, a2, a3, a4, a5, a6, a7, v9, s);
  a3 = (uint32_t *)v14[0];
  a4 = v14[1];
  s[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(s[0], (int64_t *)a9, v9);
  v13 = sub_19225E0(&a3);
  if ( v13 == (uint8_t)sub_19225E0(&a5) )
    *v9 |= 2u;
  v10 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  v11 = s[0];
  a1[1] = v10;
  if ( v11 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1927040  (binary VA: 0x1927040)
// Original: sub_1927040
// ----------------------------------------------------------------------------
uint32_t * sub_1927040(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_nptr[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_nptr)) > _g4_s2 ? (24u + sizeof(_g4_t_nptr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 24u);

  v9 = (uint32_t *)a8;
  nptr[0] = (char *)&dword_213B814;
  sub_1939B80(nptr, 32);
  sub_19261D0(v14, a2, a3, a4, a5, a6, a7, v9, nptr);
  a3 = (uint32_t *)v14[0];
  a4 = v14[1];
  nptr[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(nptr[0], (double *)a9, v9);
  v13 = sub_19225E0(&a3);
  if ( v13 == (uint8_t)sub_19225E0(&a5) )
    *v9 |= 2u;
  v10 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  v11 = nptr[0];
  a1[1] = v10;
  if ( v11 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19271B0  (binary VA: 0x19271b0)
// Original: sub_19271B0
// ----------------------------------------------------------------------------
uint32_t * sub_19271B0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_nptr[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_nptr)) > _g4_s2 ? (24u + sizeof(_g4_t_nptr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 24u);

  v9 = (uint32_t *)a8;
  nptr[0] = (char *)&dword_213B814;
  sub_1939B80(nptr, 32);
  sub_19261D0(v14, a2, a3, a4, a5, a6, a7, v9, nptr);
  a3 = (uint32_t *)v14[0];
  a4 = v14[1];
  nptr[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(nptr[0], (float *)a9, v9);
  v13 = sub_19225E0(&a3);
  if ( v13 == (uint8_t)sub_19225E0(&a5) )
    *v9 |= 2u;
  v10 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  v11 = nptr[0];
  a1[1] = v10;
  if ( v11 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1927320  (binary VA: 0x1927320)
// Original: sub_1927320
// ----------------------------------------------------------------------------
uint32_t * sub_1927320(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char v14; // bp
  char v15;
  uint8_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // bp
  char v21; // bp
  int v22;
  uint32_t *v23;
  int v24;
  int v26;
  int v27;
  int v28;
  int v29;
  char v30;
  int v31;
  int v32;
  bool v33;
  unsigned int v34;
  char v35; // bp
  char v36;
  char v37;
  unsigned int v38;
  char v39; // bp
  int v40;
  unsigned int v41;
  char v42;
  int v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef int32_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef char _g4_t_v49;
  typedef int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef void *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef bool _g4_t_v59;
  typedef uint32_t _g4_t_v60[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v45)) > _g4_s1 ? (12u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v47)) > _g4_s3 ? (16u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v48)) > _g4_s4 ? (16u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v49)) > _g4_s5 ? (16u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v50)) > _g4_s6 ? (20u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v51)) > _g4_s7 ? (24u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_s)) > _g4_s8 ? (28u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_n)) > _g4_s9 ? (32u + sizeof(_g4_t_n)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v54)) > _g4_s10 ? (36u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v55)) > _g4_s11 ? (40u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v56)) > _g4_s12 ? (44u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (45u + sizeof(_g4_t_v57)) > _g4_s13 ? (45u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (46u + sizeof(_g4_t_v58)) > _g4_s14 ? (46u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (47u + sizeof(_g4_t_v59)) > _g4_s15 ? (47u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v60)) > _g4_s16 ? (60u + sizeof(_g4_t_v60)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 45u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 46u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 47u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);

  v9 = a7;
  v46 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v46);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v43 = opNew(0x68u);
    *(uint32_t *)(v43 + 4) = 0;
    *(uint32_t *)(v43 + 8) = 0;
    *(uint32_t *)v43 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v43 + 12) = 0;
    *(uint8_t *)(v43 + 16) = 0;
    *(uint32_t *)(v43 + 20) = 0;
    *(uint32_t *)(v43 + 24) = 0;
    *(uint32_t *)(v43 + 28) = 0;
    *(uint32_t *)(v43 + 32) = 0;
    *(uint8_t *)(v43 + 36) = 0;
    *(uint8_t *)(v43 + 37) = 0;
    *(uint8_t *)(v43 + 100) = 0;
    sub_191D3E0(v43, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v43, v46);
    v11 = *v10;
  }
  v51 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v51 = v13;
  }
  v47 = sub_19225E0(&a3);
  v14 = 0;
  v59 = false;
  if ( v47 == (uint8_t)sub_19225E0(&a5) )
    goto LABEL_8;
  v36 = sub_1919D70((int)(uintptr_t)(&a3));
  v14 = v36;
  v59 = v36 == *(uint8_t *)(v11 + 74);
  if ( v36 == *(uint8_t *)(v11 + 74) || v36 == *(uint8_t *)(v11 + 75) )
  {
    v15 = *(uint8_t *)(v11 + 16);
    if ( (v15 == 0 || v14 != *(uint8_t *)(v11 + 37)) && v14 != *(uint8_t *)(v11 + 36) )
    {
      if ( a3 != nullptr )
      {
        v41 = a3[2];
        if ( v41 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v41 + 1;
        a4 = -1;
      }
      v49 = sub_19225E0(&a3);
      if ( v49 == (uint8_t)sub_19225E0(&a5) )
      {
LABEL_8:
        v15 = *(uint8_t *)(v11 + 16);
        v57 = 1;
        v50 = 0;
        v58 = 0;
        goto LABEL_9;
      }
      v14 = sub_1919D70((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v15 = *(uint8_t *)(v11 + 16);
  }
  v50 = 0;
  v58 = 0;
  v37 = v14;
  while ( 1 )
  {
    if ( v15 != 0 && *(uint8_t *)(v11 + 37) == v37 || *(uint8_t *)(v11 + 36) == v37 )
    {
LABEL_115:
      v14 = v37;
      v57 = 0;
      goto LABEL_9;
    }
    if ( *(uint8_t *)(v11 + 78) == v37 )
    {
      if ( v58 == 0 || v51 == 10 )
      {
        if ( v12 != 0 )
        {
          if ( v51 == 8 )
            v50 = 0;
          else
            ++v50;
          v58 = 1;
        }
        else
        {
          v50 = 0;
          v58 = 1;
          v51 = 8;
        }
        goto LABEL_87;
      }
    }
    else if ( v58 == 0 )
    {
      goto LABEL_115;
    }
    if ( *(uint8_t *)(v11 + 76) != v37 && *(uint8_t *)(v11 + 77) != v37 )
      goto LABEL_115;
    if ( v12 != 0 )
    {
      if ( v51 != 16 )
      {
        v14 = v37;
        v57 = 0;
        goto LABEL_10;
      }
      v50 = 0;
      v58 = 0;
    }
    else
    {
      v50 = 0;
      v58 = 0;
      v51 = 16;
    }
LABEL_87:
    if ( a3 != nullptr )
    {
      v38 = a3[2];
      if ( v38 >= a3[3] )
      {
        v45 = v37;
        G4_VCALL<void>(a3, 40);
        v37 = v45;
      }
      else
      {
        a3[2] = v38 + 1;
      }
      a4 = -1;
    }
    v44 = v37;
    v39 = sub_19225E0(&a3);
    if ( v39 == (uint8_t)sub_19225E0(&a5) )
    {
      v14 = v44;
      v57 = 1;
      v15 = *(uint8_t *)(v11 + 16);
      goto LABEL_9;
    }
    v42 = sub_1919D70((int)(uintptr_t)(&a3));
    v37 = v42;
    if ( v58 == 0 )
      break;
    v15 = *(uint8_t *)(v11 + 16);
  }
  v14 = v42;
  v57 = 0;
  v15 = *(uint8_t *)(v11 + 16);
LABEL_9:
  n = 22;
  if ( v51 != 16 )
LABEL_10:
    n = v51;
  v60[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v60, 32);
  v55 = 0x80000000 - !v59;
  s = (void *)(v11 + 78);
  v54 = v55 / v51;
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v48 = 0;
    v56 = 0;
    if ( v57 == 0 )
    {
      v30 = v14;
      v31 = v14;
      if ( n > 0xA )
        goto LABEL_67;
LABEL_55:
      if ( v30 > 47 && v30 < (char)(n + 48) )
      {
LABEL_57:
        v32 = v31 - 48;
        while ( v32 != -1 )
        {
          if ( v48 > v54 )
          {
            v56 = 1;
          }
          else
          {
            v33 = v55 - v32 < v51 * v48;
            v48 = v51 * v48 + v32;
            v56 |= v33;
            ++v50;
          }
          if ( a3 != nullptr )
          {
            v34 = a3[2];
            if ( v34 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v34 + 1;
            a4 = -1;
          }
          v35 = sub_19225E0(&a3);
          if ( v35 == (uint8_t)sub_19225E0(&a5) )
          {
LABEL_28:
            v21 = 0;
            v57 = 1;
            goto LABEL_29;
          }
          v14 = sub_1919D70((int)(uintptr_t)(&a3));
          v30 = v14;
          v31 = v14;
          if ( n <= 0xA )
            goto LABEL_55;
LABEL_67:
          if ( (uint8_t)(v14 - 48) <= 9u )
            goto LABEL_57;
          if ( (uint8_t)(v14 - 97) <= 5u )
          {
            v32 = v31 - 87;
          }
          else
          {
            if ( (uint8_t)(v14 - 65) > 5u )
              goto LABEL_42;
            v32 = v31 - 55;
          }
        }
      }
    }
    goto LABEL_42;
  }
  v48 = 0;
  v56 = 0;
  if ( v57 != 0 )
  {
LABEL_42:
    v22 = v60[0];
    v21 = 0;
    if ( *(uint32_t *)(v60[0] - 12) == 0 )
      goto LABEL_30;
    goto LABEL_43;
  }
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v14 )
  {
    if ( *(uint8_t *)(v11 + 36) == v14 )
      goto LABEL_42;
    v16 = (uint8_t *)(memchr(s, v14, n));
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - (uint8_t *)s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v54 < v48 )
    {
      v56 = 1;
    }
    else
    {
      v18 = v55 - v17 < v51 * v48;
      v48 = v17 + v51 * v48;
      v56 |= v18;
      ++v50;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 1;
      a4 = -1;
    }
    v20 = sub_19225E0(&a3);
    if ( v20 == (uint8_t)sub_19225E0(&a5) )
      goto LABEL_28;
    v14 = sub_1919D70((int)(uintptr_t)(&a3));
  }
  if ( v50 != 0 )
  {
    v26 = v60[0];
    v27 = *(uint32_t *)(v60[0] - 12);
    v28 = v27 + 1;
    if ( (unsigned int)(v27 + 1) > *(uint32_t *)(v60[0] - 8) || *(int *)(v60[0] - 4) > 0 )
    {
      sub_1939B80(v60, v27 + 1);
      v26 = v60[0];
      v27 = *(uint32_t *)(v60[0] - 12);
    }
    *(uint8_t *)(v26 + v27) = v50;
    v29 = v60[0];
    if ( (uint32_t *)(v60[0] - 12) == dword_213B808 )
    {
      v50 = 0;
    }
    else
    {
      *(uint32_t *)(v60[0] - 4) = 0;
      *(uint32_t *)(v29 - 12) = v28;
      v50 = 0;
      *(uint8_t *)(v29 + v28) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v60[0];
  if ( *(uint32_t *)(v60[0] - 12) != 0 )
  {
LABEL_43:
    sub_1939C10(v60, v50);
    if ( (uint8_t)sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v60) == 0 )
      *a8 = 4;
    v22 = v60[0];
  }
LABEL_30:
  if ( (v50 != 0 || v58 != 0 || *(uint32_t *)(v22 - 12) != 0) && v21 == 0 )
  {
    if ( v56 != 0 )
    {
      *a9 = 0x80000000 - !v59;
      *a8 = 4;
    }
    else
    {
      v40 = -v48;
      if ( !v59 )
        v40 = v48;
      *a9 = v40;
    }
  }
  else
  {
    v23 = a8;
    *a9 = 0;
    *v23 = 4;
  }
  if ( v57 != 0 )
    *a8 |= 2u;
  v24 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v24;
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v22 - 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1927BF0  (binary VA: 0x1927bf0)
// Original: sub_1927BF0
// ----------------------------------------------------------------------------
uint32_t * sub_1927BF0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_1927320(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1927C50  (binary VA: 0x1927c50)
// Original: sub_1927C50
// ----------------------------------------------------------------------------
uint32_t * sub_1927C50(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int *a8, uint8_t *a9)
{
  int v9;
  int *v10;
  char v11; // si
  int v12;
  int32_t v14;
  int *v15;
  int v16;
  bool v17; // di
  bool v18; // bp
  unsigned int v19;
  char v20;
  char v21;
  unsigned int v22;
  int v23;
  int *v24;
  typedef int _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef int _g4_t_v27;
  typedef bool _g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint32_t _g4_t_v30[5];
  typedef unsigned int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_v28)) > _g4_s3 ? (22u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v29)) > _g4_s4 ? (23u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v31)) > _g4_s6 ? (44u + sizeof(_g4_t_v31)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 22u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 23u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  v9 = a7;
  if ( (*(uint8_t *)(a7 + 12) & 1) == 0 )
  {
    v31[0] = 0xFFFFFFFF;
    sub_1927320(v30, a2, a3, a4, a5, a6, a7, a8, (int *)v31);
    a3 = (uint32_t *)v30[0];
    a4 = v30[1];
    if ( v31[0] <= 1 )
    {
      *a9 = v31[0];
    }
    else
    {
      v10 = a8;
      *a9 = 1;
      *v10 = 4;
      v11 = sub_19225E0(&a3);
      if ( v11 == (uint8_t)sub_19225E0(&a5) )
        *a8 |= 2u;
    }
    goto LABEL_5;
  }
  v14 = sub_1902550(&dword_213B790);
  v15 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v14);
  v16 = *v15;
  if ( *v15 == 0 )
  {
    v27 = opNew(0x68u);
    *(uint32_t *)(v27 + 4) = 0;
    *(uint32_t *)(v27 + 8) = 0;
    *(uint32_t *)v27 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v27 + 12) = 0;
    *(uint8_t *)(v27 + 16) = 0;
    *(uint32_t *)(v27 + 20) = 0;
    *(uint32_t *)(v27 + 24) = 0;
    *(uint32_t *)(v27 + 28) = 0;
    *(uint32_t *)(v27 + 32) = 0;
    *(uint8_t *)(v27 + 36) = 0;
    *(uint8_t *)(v27 + 37) = 0;
    *(uint8_t *)(v27 + 100) = 0;
    sub_191D3E0(v27, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v27, v14);
    v16 = *v15;
  }
  v28 = true;
  v17 = *(uint32_t *)(v16 + 32) == 0;
  v18 = *(uint32_t *)(v16 + 24) == 0;
  v19 = 0;
  v26 = true;
LABEL_9:
  if ( v17 )
    goto LABEL_27;
  do
  {
    do
    {
      v25 = v16;
      v29 = sub_19225E0(&a3);
      v20 = sub_19225E0(&a5);
      v16 = v25;
      if ( v29 == v20 )
      {
        v23 = 1;
        goto LABEL_29;
      }
      v21 = sub_1919D70((int)(uintptr_t)(&a3));
      v16 = v25;
      if ( !v17 )
        v26 = v21 == *(uint8_t *)(*(uint32_t *)(v25 + 28) + v19);
      if ( v26 )
      {
        if ( v18 )
          goto LABEL_16;
      }
      else if ( v18 )
      {
        goto LABEL_37;
      }
      v28 = v21 == *(uint8_t *)(*(uint32_t *)(v25 + 20) + v19);
LABEL_16:
      if ( !v28 )
      {
        if ( v17 )
          goto LABEL_28;
        if ( !v26 )
        {
LABEL_37:
          v23 = 0;
          goto LABEL_38;
        }
      }
      ++v19;
      if ( a3 != nullptr )
      {
        v22 = a3[2];
        if ( v22 >= a3[3] )
        {
          G4_VCALL<void>(a3, 40);
          v16 = v25;
        }
        else
        {
          a3[2] = v22 + 1;
        }
        a4 = -1;
      }
      v17 = true;
      if ( v26 )
        v17 = v19 >= *(uint32_t *)(v16 + 32);
      v18 = true;
      if ( !v28 )
        goto LABEL_9;
      v18 = v19 >= *(uint32_t *)(v16 + 24);
    }
    while ( !v17 );
LABEL_27:
    ;
  }
  while ( !v18 );
LABEL_28:
  v23 = 0;
LABEL_29:
  if ( v26 && v19 != 0 && *(uint32_t *)(v16 + 32) == v19 )
  {
    *a9 = 0;
    if ( v28 && *(uint32_t *)(v16 + 24) == v19 )
      *a8 = 4;
    else
LABEL_34:
      *a8 = (v23 << 31 >> 31) & 2;
  }
  else
  {
LABEL_38:
    if ( v28 && v19 != 0 && *(uint32_t *)(v16 + 24) == v19 )
    {
      *a9 = 1;
      goto LABEL_34;
    }
    v24 = a8;
    *a9 = 0;
    *v24 = (uint8_t)v23 == 0 ? 4 : 6;
  }
LABEL_5:
  v12 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1928070  (binary VA: 0x1928070)
// Original: sub_1928070
// ----------------------------------------------------------------------------
uint32_t * sub_1928070(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint16_t *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char v14; // bp
  char v15;
  uint8_t *v16;
  int v17;
  uint16_t v18;
  unsigned int v19;
  char v20; // bp
  char v21; // bp
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  int v33;
  bool v34;
  unsigned int v35;
  char v36; // bp
  char v37;
  char v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  char v43;
  int v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef int32_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef uint16_t _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef void *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef uint16_t _g4_t_v57;
  typedef char _g4_t_v58;
  typedef bool _g4_t_v59;
  typedef uint32_t _g4_t_v60[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v45)) > _g4_s0 ? (12u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v46)) > _g4_s1 ? (12u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v47)) > _g4_s2 ? (16u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v49)) > _g4_s4 ? (16u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v51)) > _g4_s6 ? (40u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v52)) > _g4_s7 ? (44u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v53)) > _g4_s8 ? (50u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (51u + sizeof(_g4_t_v54)) > _g4_s9 ? (51u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_s)) > _g4_s10 ? (52u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_n)) > _g4_s11 ? (56u + sizeof(_g4_t_n)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v57)) > _g4_s12 ? (60u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (62u + sizeof(_g4_t_v58)) > _g4_s13 ? (62u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (63u + sizeof(_g4_t_v59)) > _g4_s14 ? (63u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v60)) > _g4_s15 ? (76u + sizeof(_g4_t_v60)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 50u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 51u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 52u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 62u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 63u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);

  v9 = a7;
  v47 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v47);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v44 = opNew(0x68u);
    *(uint32_t *)(v44 + 4) = 0;
    *(uint32_t *)(v44 + 8) = 0;
    *(uint32_t *)v44 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v44 + 12) = 0;
    *(uint8_t *)(v44 + 16) = 0;
    *(uint32_t *)(v44 + 20) = 0;
    *(uint32_t *)(v44 + 24) = 0;
    *(uint32_t *)(v44 + 28) = 0;
    *(uint32_t *)(v44 + 32) = 0;
    *(uint8_t *)(v44 + 36) = 0;
    *(uint8_t *)(v44 + 37) = 0;
    *(uint8_t *)(v44 + 100) = 0;
    sub_191D3E0(v44, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v44, v47);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v48 = sub_19225E0(&a3);
  v14 = 0;
  v59 = false;
  if ( v48 == (uint8_t)sub_19225E0(&a5) )
    goto LABEL_8;
  v37 = sub_1919D70((int)(uintptr_t)(&a3));
  v14 = v37;
  v59 = v37 == *(uint8_t *)(v11 + 74);
  if ( v37 == *(uint8_t *)(v11 + 74) || v37 == *(uint8_t *)(v11 + 75) )
  {
    v15 = *(uint8_t *)(v11 + 16);
    if ( (v15 == 0 || v14 != *(uint8_t *)(v11 + 37)) && v14 != *(uint8_t *)(v11 + 36) )
    {
      if ( a3 != nullptr )
      {
        v42 = a3[2];
        if ( v42 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v42 + 1;
        a4 = -1;
      }
      v50 = sub_19225E0(&a3);
      if ( v50 == (uint8_t)sub_19225E0(&a5) )
      {
LABEL_8:
        v15 = *(uint8_t *)(v11 + 16);
        v54 = 1;
        v51 = 0;
        v58 = 0;
        goto LABEL_9;
      }
      v14 = sub_1919D70((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v15 = *(uint8_t *)(v11 + 16);
  }
  v51 = 0;
  v58 = 0;
  v38 = v14;
  while ( 1 )
  {
    if ( v15 != 0 && *(uint8_t *)(v11 + 37) == v38 || *(uint8_t *)(v11 + 36) == v38 )
    {
LABEL_115:
      v14 = v38;
      v54 = 0;
      goto LABEL_9;
    }
    if ( *(uint8_t *)(v11 + 78) == v38 )
    {
      if ( v58 == 0 || v52 == 10 )
      {
        if ( v12 != 0 )
        {
          if ( v52 == 8 )
            v51 = 0;
          else
            ++v51;
          v58 = 1;
        }
        else
        {
          v51 = 0;
          v58 = 1;
          v52 = 8;
        }
        goto LABEL_87;
      }
    }
    else if ( v58 == 0 )
    {
      goto LABEL_115;
    }
    if ( *(uint8_t *)(v11 + 76) != v38 && *(uint8_t *)(v11 + 77) != v38 )
      goto LABEL_115;
    if ( v12 != 0 )
    {
      if ( v52 != 16 )
      {
        v14 = v38;
        v54 = 0;
        goto LABEL_10;
      }
      v51 = 0;
      v58 = 0;
    }
    else
    {
      v51 = 0;
      v58 = 0;
      v52 = 16;
    }
LABEL_87:
    if ( a3 != nullptr )
    {
      v39 = a3[2];
      if ( v39 >= a3[3] )
      {
        v46 = v38;
        G4_VCALL<void>(a3, 40);
        v38 = v46;
      }
      else
      {
        a3[2] = v39 + 1;
      }
      a4 = -1;
    }
    v45 = v38;
    v40 = sub_19225E0(&a3);
    if ( v40 == (uint8_t)sub_19225E0(&a5) )
    {
      v14 = v45;
      v54 = 1;
      v15 = *(uint8_t *)(v11 + 16);
      goto LABEL_9;
    }
    v43 = sub_1919D70((int)(uintptr_t)(&a3));
    v38 = v43;
    if ( v58 == 0 )
      break;
    v15 = *(uint8_t *)(v11 + 16);
  }
  v14 = v43;
  v54 = 0;
  v15 = *(uint8_t *)(v11 + 16);
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v60[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v60, 32);
  v57 = 0xFFFF / v52;
  s = (void *)(v11 + 78);
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v49 = 0;
    v53 = 0;
    if ( v54 == 0 )
    {
      v31 = v14;
      v32 = v14;
      if ( n > 0xA )
        goto LABEL_67;
LABEL_55:
      if ( v31 > 47 && v31 < (char)(n + 48) )
      {
LABEL_57:
        v33 = v32 - 48;
        while ( v33 != -1 )
        {
          if ( v49 > v57 )
          {
            v53 = 1;
          }
          else
          {
            v34 = (uint16_t)(v52 * v49) > 0xFFFF - v33;
            v49 = v52 * v49 + v33;
            v53 |= v34;
            ++v51;
          }
          if ( a3 != nullptr )
          {
            v35 = a3[2];
            if ( v35 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v35 + 1;
            a4 = -1;
          }
          v36 = sub_19225E0(&a3);
          if ( v36 == (uint8_t)sub_19225E0(&a5) )
          {
LABEL_28:
            v21 = 0;
            v54 = 1;
            goto LABEL_29;
          }
          v14 = sub_1919D70((int)(uintptr_t)(&a3));
          v31 = v14;
          v32 = v14;
          if ( n <= 0xA )
            goto LABEL_55;
LABEL_67:
          if ( (uint8_t)(v14 - 48) <= 9u )
            goto LABEL_57;
          if ( (uint8_t)(v14 - 97) <= 5u )
          {
            v33 = v32 - 87;
          }
          else
          {
            if ( (uint8_t)(v14 - 65) > 5u )
              goto LABEL_42;
            v33 = v32 - 55;
          }
        }
      }
    }
    goto LABEL_42;
  }
  v49 = 0;
  v53 = 0;
  if ( v54 != 0 )
  {
LABEL_42:
    v22 = v60[0];
    v21 = 0;
    if ( *(uint32_t *)(v60[0] - 12) == 0 )
      goto LABEL_30;
    goto LABEL_43;
  }
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v14 )
  {
    if ( *(uint8_t *)(v11 + 36) == v14 )
      goto LABEL_42;
    v16 = (uint8_t *)(memchr(s, v14, n));
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - (uint8_t *)s;
    if ( v17 >= 16 )
      v17 -= 6;
    v18 = v49;
    if ( v57 < v49 )
    {
      v53 = 1;
    }
    else
    {
      v49 = v17 + v52 * v49;
      v53 |= (uint16_t)(v52 * v18) > 0xFFFF - v17;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 1;
      a4 = -1;
    }
    v20 = sub_19225E0(&a3);
    if ( v20 == (uint8_t)sub_19225E0(&a5) )
      goto LABEL_28;
    v14 = sub_1919D70((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v27 = v60[0];
    v28 = *(uint32_t *)(v60[0] - 12);
    v29 = v28 + 1;
    if ( (unsigned int)(v28 + 1) > *(uint32_t *)(v60[0] - 8) || *(int *)(v60[0] - 4) > 0 )
    {
      sub_1939B80(v60, v28 + 1);
      v27 = v60[0];
      v28 = *(uint32_t *)(v60[0] - 12);
    }
    *(uint8_t *)(v27 + v28) = v51;
    v30 = v60[0];
    if ( (uint32_t *)(v60[0] - 12) == dword_213B808 )
    {
      v51 = 0;
    }
    else
    {
      *(uint32_t *)(v60[0] - 4) = 0;
      *(uint32_t *)(v30 - 12) = v29;
      v51 = 0;
      *(uint8_t *)(v30 + v29) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v60[0];
  if ( *(uint32_t *)(v60[0] - 12) != 0 )
  {
LABEL_43:
    sub_1939C10(v60, v51);
    if ( (uint8_t)sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v60) == 0 )
      *a8 = 4;
    v22 = v60[0];
  }
LABEL_30:
  if ( (v51 != 0 || v58 != 0 || *(uint32_t *)(v22 - 12) != 0) && v21 == 0 )
  {
    if ( v53 != 0 )
    {
      v24 = a8;
      *a9 = -1;
      *v24 = 4;
    }
    else
    {
      LOWORD(v41) = v49;
      if ( v59 )
        v41 = -v49;
      *a9 = v41;
    }
  }
  else
  {
    v23 = a8;
    *a9 = 0;
    *v23 = 4;
  }
  if ( v54 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v22 - 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1928980  (binary VA: 0x1928980)
// Original: sub_1928980
// ----------------------------------------------------------------------------
uint32_t * sub_1928980(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint16_t *a9)
{
  sub_1928070(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19289E0  (binary VA: 0x19289e0)
// Original: sub_19289E0
// ----------------------------------------------------------------------------
uint32_t * sub_19289E0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char v14; // bp
  char v15;
  uint8_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // bp
  char v21; // bp
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  int v33;
  bool v34;
  unsigned int v35;
  char v36; // bp
  char v37;
  char v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  char v43;
  int v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef int32_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef void *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef bool _g4_t_v59;
  typedef uint32_t _g4_t_v60[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v46)) > _g4_s1 ? (0u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v47)) > _g4_s2 ? (4u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v48)) > _g4_s3 ? (4u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v49)) > _g4_s4 ? (4u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v50)) > _g4_s5 ? (4u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v51)) > _g4_s6 ? (8u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v52)) > _g4_s7 ? (12u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_s)) > _g4_s8 ? (16u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_n)) > _g4_s9 ? (20u + sizeof(_g4_t_n)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v55)) > _g4_s10 ? (24u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v56)) > _g4_s11 ? (28u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (29u + sizeof(_g4_t_v57)) > _g4_s12 ? (29u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (30u + sizeof(_g4_t_v58)) > _g4_s13 ? (30u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (31u + sizeof(_g4_t_v59)) > _g4_s14 ? (31u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v60)) > _g4_s15 ? (44u + sizeof(_g4_t_v60)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 29u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 30u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 31u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);

  v9 = a7;
  v47 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v47);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v44 = opNew(0x68u);
    *(uint32_t *)(v44 + 4) = 0;
    *(uint32_t *)(v44 + 8) = 0;
    *(uint32_t *)v44 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v44 + 12) = 0;
    *(uint8_t *)(v44 + 16) = 0;
    *(uint32_t *)(v44 + 20) = 0;
    *(uint32_t *)(v44 + 24) = 0;
    *(uint32_t *)(v44 + 28) = 0;
    *(uint32_t *)(v44 + 32) = 0;
    *(uint8_t *)(v44 + 36) = 0;
    *(uint8_t *)(v44 + 37) = 0;
    *(uint8_t *)(v44 + 100) = 0;
    sub_191D3E0(v44, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v44, v47);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v48 = sub_19225E0(&a3);
  v14 = 0;
  v59 = false;
  if ( v48 == (uint8_t)sub_19225E0(&a5) )
    goto LABEL_8;
  v37 = sub_1919D70((int)(uintptr_t)(&a3));
  v14 = v37;
  v59 = v37 == *(uint8_t *)(v11 + 74);
  if ( v37 == *(uint8_t *)(v11 + 74) || v37 == *(uint8_t *)(v11 + 75) )
  {
    v15 = *(uint8_t *)(v11 + 16);
    if ( (v15 == 0 || v14 != *(uint8_t *)(v11 + 37)) && v14 != *(uint8_t *)(v11 + 36) )
    {
      if ( a3 != nullptr )
      {
        v42 = a3[2];
        if ( v42 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v42 + 1;
        a4 = -1;
      }
      v50 = sub_19225E0(&a3);
      if ( v50 == (uint8_t)sub_19225E0(&a5) )
      {
LABEL_8:
        v15 = *(uint8_t *)(v11 + 16);
        v57 = 1;
        v51 = 0;
        v58 = 0;
        goto LABEL_9;
      }
      v14 = sub_1919D70((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v15 = *(uint8_t *)(v11 + 16);
  }
  v51 = 0;
  v58 = 0;
  v38 = v14;
  while ( 1 )
  {
    if ( v15 != 0 && *(uint8_t *)(v11 + 37) == v38 || *(uint8_t *)(v11 + 36) == v38 )
    {
LABEL_115:
      v14 = v38;
      v57 = 0;
      goto LABEL_9;
    }
    if ( *(uint8_t *)(v11 + 78) == v38 )
    {
      if ( v58 == 0 || v52 == 10 )
      {
        if ( v12 != 0 )
        {
          if ( v52 == 8 )
            v51 = 0;
          else
            ++v51;
          v58 = 1;
        }
        else
        {
          v51 = 0;
          v58 = 1;
          v52 = 8;
        }
        goto LABEL_87;
      }
    }
    else if ( v58 == 0 )
    {
      goto LABEL_115;
    }
    if ( *(uint8_t *)(v11 + 76) != v38 && *(uint8_t *)(v11 + 77) != v38 )
      goto LABEL_115;
    if ( v12 != 0 )
    {
      if ( v52 != 16 )
      {
        v14 = v38;
        v57 = 0;
        goto LABEL_10;
      }
      v51 = 0;
      v58 = 0;
    }
    else
    {
      v51 = 0;
      v58 = 0;
      v52 = 16;
    }
LABEL_87:
    if ( a3 != nullptr )
    {
      v39 = a3[2];
      if ( v39 >= a3[3] )
      {
        v46 = v38;
        G4_VCALL<void>(a3, 40);
        v38 = v46;
      }
      else
      {
        a3[2] = v39 + 1;
      }
      a4 = -1;
    }
    v45 = v38;
    v40 = sub_19225E0(&a3);
    if ( v40 == (uint8_t)sub_19225E0(&a5) )
    {
      v14 = v45;
      v57 = 1;
      v15 = *(uint8_t *)(v11 + 16);
      goto LABEL_9;
    }
    v43 = sub_1919D70((int)(uintptr_t)(&a3));
    v38 = v43;
    if ( v58 == 0 )
      break;
    v15 = *(uint8_t *)(v11 + 16);
  }
  v14 = v43;
  v57 = 0;
  v15 = *(uint8_t *)(v11 + 16);
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v60[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v60, 32);
  v55 = 0xFFFFFFFF / v52;
  s = (void *)(v11 + 78);
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v49 = 0;
    v56 = 0;
    if ( v57 == 0 )
    {
      v31 = v14;
      v32 = v14;
      if ( n > 0xA )
        goto LABEL_67;
LABEL_55:
      if ( v31 > 47 && v31 < (char)(n + 48) )
      {
LABEL_57:
        v33 = v32 - 48;
        while ( v33 != -1 )
        {
          if ( v49 > v55 )
          {
            v56 = 1;
          }
          else
          {
            v34 = ~v33 < v52 * v49;
            v49 = v52 * v49 + v33;
            v56 |= v34;
            ++v51;
          }
          if ( a3 != nullptr )
          {
            v35 = a3[2];
            if ( v35 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v35 + 1;
            a4 = -1;
          }
          v36 = sub_19225E0(&a3);
          if ( v36 == (uint8_t)sub_19225E0(&a5) )
          {
LABEL_28:
            v21 = 0;
            v57 = 1;
            goto LABEL_29;
          }
          v14 = sub_1919D70((int)(uintptr_t)(&a3));
          v31 = v14;
          v32 = v14;
          if ( n <= 0xA )
            goto LABEL_55;
LABEL_67:
          if ( (uint8_t)(v14 - 48) <= 9u )
            goto LABEL_57;
          if ( (uint8_t)(v14 - 97) <= 5u )
          {
            v33 = v32 - 87;
          }
          else
          {
            if ( (uint8_t)(v14 - 65) > 5u )
              goto LABEL_42;
            v33 = v32 - 55;
          }
        }
      }
    }
    goto LABEL_42;
  }
  v49 = 0;
  v56 = 0;
  if ( v57 != 0 )
  {
LABEL_42:
    v22 = v60[0];
    v21 = 0;
    if ( *(uint32_t *)(v60[0] - 12) == 0 )
      goto LABEL_30;
    goto LABEL_43;
  }
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v14 )
  {
    if ( *(uint8_t *)(v11 + 36) == v14 )
      goto LABEL_42;
    v16 = (uint8_t *)(memchr(s, v14, n));
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - (uint8_t *)s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v55 < v49 )
    {
      v56 = 1;
    }
    else
    {
      v18 = ~v17 < v52 * v49;
      v49 = v17 + v52 * v49;
      v56 |= v18;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 1;
      a4 = -1;
    }
    v20 = sub_19225E0(&a3);
    if ( v20 == (uint8_t)sub_19225E0(&a5) )
      goto LABEL_28;
    v14 = sub_1919D70((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v27 = v60[0];
    v28 = *(uint32_t *)(v60[0] - 12);
    v29 = v28 + 1;
    if ( (unsigned int)(v28 + 1) > *(uint32_t *)(v60[0] - 8) || *(int *)(v60[0] - 4) > 0 )
    {
      sub_1939B80(v60, v28 + 1);
      v27 = v60[0];
      v28 = *(uint32_t *)(v60[0] - 12);
    }
    *(uint8_t *)(v27 + v28) = v51;
    v30 = v60[0];
    if ( (uint32_t *)(v60[0] - 12) == dword_213B808 )
    {
      v51 = 0;
    }
    else
    {
      *(uint32_t *)(v60[0] - 4) = 0;
      *(uint32_t *)(v30 - 12) = v29;
      v51 = 0;
      *(uint8_t *)(v30 + v29) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v60[0];
  if ( *(uint32_t *)(v60[0] - 12) != 0 )
  {
LABEL_43:
    sub_1939C10(v60, v51);
    if ( (uint8_t)sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v60) == 0 )
      *a8 = 4;
    v22 = v60[0];
  }
LABEL_30:
  if ( (v51 != 0 || v58 != 0 || *(uint32_t *)(v22 - 12) != 0) && v21 == 0 )
  {
    if ( v56 != 0 )
    {
      v24 = a8;
      *a9 = -1;
      *v24 = 4;
    }
    else
    {
      v41 = -v49;
      if ( !v59 )
        v41 = v49;
      *a9 = v41;
    }
  }
  else
  {
    v23 = a8;
    *a9 = 0;
    *v23 = 4;
  }
  if ( v57 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v22 - 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1929270  (binary VA: 0x1929270)
// Original: sub_1929270
// ----------------------------------------------------------------------------
uint32_t * sub_1929270(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_19289E0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19292D0  (binary VA: 0x19292d0)
// Original: sub_19292D0
// ----------------------------------------------------------------------------
uint32_t * sub_19292D0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char v14; // bp
  char v15;
  uint8_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // bp
  char v21; // bp
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  int v33;
  bool v34;
  unsigned int v35;
  char v36; // bp
  char v37;
  char v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  char v43;
  int v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef int32_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef void *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef bool _g4_t_v59;
  typedef uint32_t _g4_t_v60[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v46)) > _g4_s1 ? (0u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v47)) > _g4_s2 ? (4u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v48)) > _g4_s3 ? (4u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v49)) > _g4_s4 ? (4u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v50)) > _g4_s5 ? (4u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v51)) > _g4_s6 ? (8u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v52)) > _g4_s7 ? (12u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_s)) > _g4_s8 ? (16u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_n)) > _g4_s9 ? (20u + sizeof(_g4_t_n)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v55)) > _g4_s10 ? (24u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v56)) > _g4_s11 ? (28u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (29u + sizeof(_g4_t_v57)) > _g4_s12 ? (29u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (30u + sizeof(_g4_t_v58)) > _g4_s13 ? (30u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (31u + sizeof(_g4_t_v59)) > _g4_s14 ? (31u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v60)) > _g4_s15 ? (44u + sizeof(_g4_t_v60)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 29u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 30u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 31u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);

  v9 = a7;
  v47 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v47);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v44 = opNew(0x68u);
    *(uint32_t *)(v44 + 4) = 0;
    *(uint32_t *)(v44 + 8) = 0;
    *(uint32_t *)v44 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v44 + 12) = 0;
    *(uint8_t *)(v44 + 16) = 0;
    *(uint32_t *)(v44 + 20) = 0;
    *(uint32_t *)(v44 + 24) = 0;
    *(uint32_t *)(v44 + 28) = 0;
    *(uint32_t *)(v44 + 32) = 0;
    *(uint8_t *)(v44 + 36) = 0;
    *(uint8_t *)(v44 + 37) = 0;
    *(uint8_t *)(v44 + 100) = 0;
    sub_191D3E0(v44, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v44, v47);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v48 = sub_19225E0(&a3);
  v14 = 0;
  v59 = false;
  if ( v48 == (uint8_t)sub_19225E0(&a5) )
    goto LABEL_8;
  v37 = sub_1919D70((int)(uintptr_t)(&a3));
  v14 = v37;
  v59 = v37 == *(uint8_t *)(v11 + 74);
  if ( v37 == *(uint8_t *)(v11 + 74) || v37 == *(uint8_t *)(v11 + 75) )
  {
    v15 = *(uint8_t *)(v11 + 16);
    if ( (v15 == 0 || v14 != *(uint8_t *)(v11 + 37)) && v14 != *(uint8_t *)(v11 + 36) )
    {
      if ( a3 != nullptr )
      {
        v42 = a3[2];
        if ( v42 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v42 + 1;
        a4 = -1;
      }
      v50 = sub_19225E0(&a3);
      if ( v50 == (uint8_t)sub_19225E0(&a5) )
      {
LABEL_8:
        v15 = *(uint8_t *)(v11 + 16);
        v57 = 1;
        v51 = 0;
        v58 = 0;
        goto LABEL_9;
      }
      v14 = sub_1919D70((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v15 = *(uint8_t *)(v11 + 16);
  }
  v51 = 0;
  v58 = 0;
  v38 = v14;
  while ( 1 )
  {
    if ( v15 != 0 && *(uint8_t *)(v11 + 37) == v38 || *(uint8_t *)(v11 + 36) == v38 )
    {
LABEL_115:
      v14 = v38;
      v57 = 0;
      goto LABEL_9;
    }
    if ( *(uint8_t *)(v11 + 78) == v38 )
    {
      if ( v58 == 0 || v52 == 10 )
      {
        if ( v12 != 0 )
        {
          if ( v52 == 8 )
            v51 = 0;
          else
            ++v51;
          v58 = 1;
        }
        else
        {
          v51 = 0;
          v58 = 1;
          v52 = 8;
        }
        goto LABEL_87;
      }
    }
    else if ( v58 == 0 )
    {
      goto LABEL_115;
    }
    if ( *(uint8_t *)(v11 + 76) != v38 && *(uint8_t *)(v11 + 77) != v38 )
      goto LABEL_115;
    if ( v12 != 0 )
    {
      if ( v52 != 16 )
      {
        v14 = v38;
        v57 = 0;
        goto LABEL_10;
      }
      v51 = 0;
      v58 = 0;
    }
    else
    {
      v51 = 0;
      v58 = 0;
      v52 = 16;
    }
LABEL_87:
    if ( a3 != nullptr )
    {
      v39 = a3[2];
      if ( v39 >= a3[3] )
      {
        v46 = v38;
        G4_VCALL<void>(a3, 40);
        v38 = v46;
      }
      else
      {
        a3[2] = v39 + 1;
      }
      a4 = -1;
    }
    v45 = v38;
    v40 = sub_19225E0(&a3);
    if ( v40 == (uint8_t)sub_19225E0(&a5) )
    {
      v14 = v45;
      v57 = 1;
      v15 = *(uint8_t *)(v11 + 16);
      goto LABEL_9;
    }
    v43 = sub_1919D70((int)(uintptr_t)(&a3));
    v38 = v43;
    if ( v58 == 0 )
      break;
    v15 = *(uint8_t *)(v11 + 16);
  }
  v14 = v43;
  v57 = 0;
  v15 = *(uint8_t *)(v11 + 16);
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v60[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v60, 32);
  v55 = 0xFFFFFFFF / v52;
  s = (void *)(v11 + 78);
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v49 = 0;
    v56 = 0;
    if ( v57 == 0 )
    {
      v31 = v14;
      v32 = v14;
      if ( n > 0xA )
        goto LABEL_67;
LABEL_55:
      if ( v31 > 47 && v31 < (char)(n + 48) )
      {
LABEL_57:
        v33 = v32 - 48;
        while ( v33 != -1 )
        {
          if ( v49 > v55 )
          {
            v56 = 1;
          }
          else
          {
            v34 = ~v33 < v52 * v49;
            v49 = v52 * v49 + v33;
            v56 |= v34;
            ++v51;
          }
          if ( a3 != nullptr )
          {
            v35 = a3[2];
            if ( v35 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v35 + 1;
            a4 = -1;
          }
          v36 = sub_19225E0(&a3);
          if ( v36 == (uint8_t)sub_19225E0(&a5) )
          {
LABEL_28:
            v21 = 0;
            v57 = 1;
            goto LABEL_29;
          }
          v14 = sub_1919D70((int)(uintptr_t)(&a3));
          v31 = v14;
          v32 = v14;
          if ( n <= 0xA )
            goto LABEL_55;
LABEL_67:
          if ( (uint8_t)(v14 - 48) <= 9u )
            goto LABEL_57;
          if ( (uint8_t)(v14 - 97) <= 5u )
          {
            v33 = v32 - 87;
          }
          else
          {
            if ( (uint8_t)(v14 - 65) > 5u )
              goto LABEL_42;
            v33 = v32 - 55;
          }
        }
      }
    }
    goto LABEL_42;
  }
  v49 = 0;
  v56 = 0;
  if ( v57 != 0 )
  {
LABEL_42:
    v22 = v60[0];
    v21 = 0;
    if ( *(uint32_t *)(v60[0] - 12) == 0 )
      goto LABEL_30;
    goto LABEL_43;
  }
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v14 )
  {
    if ( *(uint8_t *)(v11 + 36) == v14 )
      goto LABEL_42;
    v16 = (uint8_t *)(memchr(s, v14, n));
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - (uint8_t *)s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v55 < v49 )
    {
      v56 = 1;
    }
    else
    {
      v18 = ~v17 < v52 * v49;
      v49 = v17 + v52 * v49;
      v56 |= v18;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 1;
      a4 = -1;
    }
    v20 = sub_19225E0(&a3);
    if ( v20 == (uint8_t)sub_19225E0(&a5) )
      goto LABEL_28;
    v14 = sub_1919D70((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v27 = v60[0];
    v28 = *(uint32_t *)(v60[0] - 12);
    v29 = v28 + 1;
    if ( (unsigned int)(v28 + 1) > *(uint32_t *)(v60[0] - 8) || *(int *)(v60[0] - 4) > 0 )
    {
      sub_1939B80(v60, v28 + 1);
      v27 = v60[0];
      v28 = *(uint32_t *)(v60[0] - 12);
    }
    *(uint8_t *)(v27 + v28) = v51;
    v30 = v60[0];
    if ( (uint32_t *)(v60[0] - 12) == dword_213B808 )
    {
      v51 = 0;
    }
    else
    {
      *(uint32_t *)(v60[0] - 4) = 0;
      *(uint32_t *)(v30 - 12) = v29;
      v51 = 0;
      *(uint8_t *)(v30 + v29) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v60[0];
  if ( *(uint32_t *)(v60[0] - 12) != 0 )
  {
LABEL_43:
    sub_1939C10(v60, v51);
    if ( (uint8_t)sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v60) == 0 )
      *a8 = 4;
    v22 = v60[0];
  }
LABEL_30:
  if ( (v51 != 0 || v58 != 0 || *(uint32_t *)(v22 - 12) != 0) && v21 == 0 )
  {
    if ( v56 != 0 )
    {
      v24 = a8;
      *a9 = -1;
      *v24 = 4;
    }
    else
    {
      v41 = -v49;
      if ( !v59 )
        v41 = v49;
      *a9 = v41;
    }
  }
  else
  {
    v23 = a8;
    *a9 = 0;
    *v23 = 4;
  }
  if ( v57 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v22 - 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1929B60  (binary VA: 0x1929b60)
// Original: sub_1929B60
// ----------------------------------------------------------------------------
uint32_t * sub_1929B60(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  int v9;
  int v10;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[5];
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v12 = *(uint32_t *)(a7 + 12);
  *(uint32_t *)(a7 + 12) = v12 & 0xFFFFFFB5 | 8;
  sub_19292D0(v13, a2, a3, a4, a5, a6, a7, a8, &v14);
  v9 = v13[0];
  v10 = v13[1];
  *(uint32_t *)(a7 + 12) = v12;
  *a9 = v14;
  *a1 = v9;
  a1[1] = v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1929C10  (binary VA: 0x1929c10)
// Original: sub_1929C10
// ----------------------------------------------------------------------------
uint32_t * sub_1929C10(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_19292D0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1929C70  (binary VA: 0x1929c70)
// Original: sub_1929C70
// ----------------------------------------------------------------------------
uint32_t * sub_1929C70(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char v14; // di
  char v15;
  uint64_t v16; // kr08_8
  uint8_t *v17;
  int v18;
  int v19;
  unsigned int v21;
  unsigned int v22; // kr10_4
  unsigned int v23;
  bool v24;
  bool v25; // cc
  char v26;
  unsigned int v27;
  char v28; // di
  char v29; // di
  int v30;
  int v31;
  uint32_t *v32;
  int *v33;
  uint32_t *v34;
  int v35;
  int v37;
  unsigned int v38;
  int *v39;
  uint32_t *v40;
  int v41;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  int v47;
  char v48;
  int v49;
  int v50;
  unsigned int v52;
  unsigned int v53; // kr18_4
  unsigned int v54;
  bool v55; // cc
  char v56;
  unsigned int v57;
  char v58; // di
  char v59;
  char v60;
  unsigned int v61;
  char v62; // di
  unsigned int v63;
  char v64;
  int v65;
  uint64_t v88; // 0:esi.4,4:edi.4
  uint64_t v89; // 0:esi.4,4:edi.4
  typedef uint64_t _g4_t_v66;
  typedef uint64_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int32_t _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint64_t _g4_t_v74;
  typedef int64_t _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77;
  typedef int _g4_t_v78;
  typedef char _g4_t_v79;
  typedef void *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef uint64_t _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef bool _g4_t_v86;
  typedef uint32_t _g4_t_v87[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v66)) > _g4_s0 ? (0u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v67)) > _g4_s1 ? (0u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v68)) > _g4_s2 ? (8u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v69)) > _g4_s3 ? (8u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v70)) > _g4_s4 ? (8u + sizeof(_g4_t_v70)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v71)) > _g4_s5 ? (12u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v72)) > _g4_s6 ? (16u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v73)) > _g4_s7 ? (16u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v74)) > _g4_s8 ? (16u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v75)) > _g4_s9 ? (24u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v76)) > _g4_s10 ? (24u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v77)) > _g4_s11 ? (32u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v78)) > _g4_s12 ? (32u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v79)) > _g4_s13 ? (32u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_s)) > _g4_s14 ? (36u + sizeof(_g4_t_s)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_n)) > _g4_s15 ? (40u + sizeof(_g4_t_n)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v82)) > _g4_s16 ? (48u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v83)) > _g4_s17 ? (60u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (61u + sizeof(_g4_t_v84)) > _g4_s18 ? (61u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (62u + sizeof(_g4_t_v85)) > _g4_s19 ? (62u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (63u + sizeof(_g4_t_v86)) > _g4_s20 ? (63u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v87)) > _g4_s21 ? (76u + sizeof(_g4_t_v87)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 16u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 16u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 16u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 36u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 40u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 48u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 61u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 62u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 63u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);

  v9 = a7;
  v72 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v72);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v65 = opNew(0x68u);
    *(uint32_t *)(v65 + 4) = 0;
    *(uint32_t *)(v65 + 8) = 0;
    *(uint32_t *)v65 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v65 + 12) = 0;
    *(uint8_t *)(v65 + 16) = 0;
    *(uint32_t *)(v65 + 20) = 0;
    *(uint32_t *)(v65 + 24) = 0;
    *(uint32_t *)(v65 + 28) = 0;
    *(uint32_t *)(v65 + 32) = 0;
    *(uint8_t *)(v65 + 36) = 0;
    *(uint8_t *)(v65 + 37) = 0;
    *(uint8_t *)(v65 + 100) = 0;
    sub_191D3E0(v65, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v65, v72);
    v11 = *v10;
  }
  v73 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v73 = v13;
  }
  v77 = sub_19225E0(&a3);
  v14 = 0;
  v86 = false;
  if ( v77 == (uint8_t)sub_19225E0(&a5) )
    goto LABEL_8;
  v59 = sub_1919D70((int)(uintptr_t)(&a3));
  v14 = v59;
  v86 = v59 == *(uint8_t *)(v11 + 74);
  if ( v59 == *(uint8_t *)(v11 + 74) || v59 == *(uint8_t *)(v11 + 75) )
  {
    v15 = *(uint8_t *)(v11 + 16);
    if ( (v15 == 0 || v14 != *(uint8_t *)(v11 + 37)) && v14 != *(uint8_t *)(v11 + 36) )
    {
      if ( a3 != nullptr )
      {
        v63 = a3[2];
        if ( v63 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v63 + 1;
        a4 = -1;
      }
      v79 = sub_19225E0(&a3);
      if ( v79 == (uint8_t)sub_19225E0(&a5) )
      {
LABEL_8:
        v15 = *(uint8_t *)(v11 + 16);
        v84 = 1;
        v78 = 0;
        v85 = 0;
        goto LABEL_9;
      }
      v14 = sub_1919D70((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v15 = *(uint8_t *)(v11 + 16);
  }
  v78 = 0;
  v85 = 0;
  v60 = v14;
  while ( 1 )
  {
    if ( v15 != 0 && *(uint8_t *)(v11 + 37) == v60 || *(uint8_t *)(v11 + 36) == v60 )
    {
LABEL_130:
      v14 = v60;
      v84 = 0;
      goto LABEL_9;
    }
    if ( *(uint8_t *)(v11 + 78) == v60 )
    {
      if ( v85 == 0 || v73 == 10 )
      {
        if ( v12 != 0 )
        {
          if ( v73 == 8 )
            v78 = 0;
          else
            ++v78;
          v85 = 1;
        }
        else
        {
          v78 = 0;
          v85 = 1;
          v73 = 8;
        }
        goto LABEL_102;
      }
    }
    else if ( v85 == 0 )
    {
      goto LABEL_130;
    }
    if ( *(uint8_t *)(v11 + 76) != v60 && *(uint8_t *)(v11 + 77) != v60 )
      goto LABEL_130;
    if ( v12 != 0 )
    {
      if ( v73 != 16 )
      {
        v14 = v60;
        v84 = 0;
        goto LABEL_10;
      }
      v78 = 0;
      v85 = 0;
    }
    else
    {
      v78 = 0;
      v85 = 0;
      v73 = 16;
    }
LABEL_102:
    if ( a3 != nullptr )
    {
      v61 = a3[2];
      if ( v61 >= a3[3] )
      {
        v70 = v60;
        G4_VCALL<void>(a3, 40);
        v60 = v70;
      }
      else
      {
        a3[2] = v61 + 1;
      }
      a4 = -1;
    }
    v69 = v60;
    v62 = sub_19225E0(&a3);
    if ( v62 == (uint8_t)sub_19225E0(&a5) )
    {
      v14 = v69;
      v84 = 1;
      v15 = *(uint8_t *)(v11 + 16);
      goto LABEL_9;
    }
    v64 = sub_1919D70((int)(uintptr_t)(&a3));
    v60 = v64;
    if ( v85 == 0 )
      break;
    v15 = *(uint8_t *)(v11 + 16);
  }
  v14 = v64;
  v84 = 0;
  v15 = *(uint8_t *)(v11 + 16);
LABEL_9:
  n = 22;
  if ( v73 != 16 )
LABEL_10:
    n = v73;
  v87[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v87, 32);
  v82 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v86 )
    v82 = 0x8000000000000000LL;
  v75 = v73;
  v16 = v82 / v73;
  s = (void *)(v11 + 78);
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v74 = 0;
    v83 = 0;
    if ( v84 == 0 )
    {
      v48 = v14;
      v49 = v14;
      if ( n > 0xA )
        goto LABEL_82;
LABEL_67:
      if ( v48 > 47 && v48 < (char)(n + 48) )
      {
LABEL_69:
        v50 = v49 - 48;
        while ( v50 != -1 )
        {
          if ( v16 < v74 )
          {
            v83 = 1;
          }
          else
          {
            HIDWORD(v89) = v50 >> 31;
            LODWORD(v89) = v50;
            v67 = v75 * v74;
            v54 = (v75 * v74) >> 32;
            v53 = v82 - v50;
            v52 = (v82 - v50) >> 32;
            v24 = v52 < v54;
            v55 = v52 <= v54;
            v56 = 1;
            if ( !v24 && (!v55 || v53 >= (unsigned int)v67) )
              v56 = 0;
            v83 |= v56;
            v74 = v89 + v67;
            ++v78;
          }
          if ( a3 != nullptr )
          {
            v57 = a3[2];
            if ( v57 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v57 + 1;
            a4 = -1;
          }
          v58 = sub_19225E0(&a3);
          if ( v58 == (uint8_t)sub_19225E0(&a5) )
          {
LABEL_33:
            v29 = 0;
            v84 = 1;
            goto LABEL_34;
          }
          v14 = sub_1919D70((int)(uintptr_t)(&a3));
          v48 = v14;
          v49 = v14;
          if ( n <= 0xA )
            goto LABEL_67;
LABEL_82:
          if ( (uint8_t)(v14 - 48) <= 9u )
            goto LABEL_69;
          v50 = v49 - 87;
          if ( (uint8_t)(v14 - 97) > 5u )
          {
            if ( (uint8_t)(v14 - 65) > 5u )
              goto LABEL_50;
            v50 = v49 - 55;
          }
        }
      }
    }
    goto LABEL_50;
  }
  v74 = 0;
  v83 = 0;
  if ( v84 != 0 )
  {
LABEL_50:
    v30 = v87[0];
    v29 = 0;
    v31 = *(uint32_t *)(v87[0] - 12);
    v32 = (uint32_t *)(v87[0] - 12);
    if ( v31 == 0 )
      goto LABEL_35;
    goto LABEL_51;
  }
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v14 )
  {
    if ( *(uint8_t *)(v11 + 36) == v14 )
      goto LABEL_50;
    v17 = (uint8_t *)(memchr(s, v14, n));
    if ( v17 == nullptr )
      goto LABEL_50;
    v18 = v17 - (uint8_t *)s;
    v25 = v17 - (uint8_t *)s < 16;
    v19 = v17 - (uint8_t *)s - 6;
    if ( !v25 )
      v18 = v19;
    if ( v16 < v74 )
    {
      v83 = 1;
    }
    else
    {
      HIDWORD(v88) = v18 >> 31;
      LODWORD(v88) = v18;
      v66 = v75 * v74;
      v23 = (v75 * v74) >> 32;
      v22 = v82 - v18;
      v21 = (v82 - v18) >> 32;
      v24 = v21 < v23;
      v25 = v21 <= v23;
      v26 = 1;
      if ( !v24 && (!v25 || v22 >= (unsigned int)v66) )
        v26 = 0;
      v83 |= v26;
      v74 = v88 + v66;
      ++v78;
    }
LABEL_28:
    if ( a3 != nullptr )
    {
      v27 = a3[2];
      if ( v27 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v27 + 1;
      a4 = -1;
    }
    v28 = sub_19225E0(&a3);
    if ( v28 == (uint8_t)sub_19225E0(&a5) )
      goto LABEL_33;
    v14 = sub_1919D70((int)(uintptr_t)(&a3));
  }
  if ( v78 != 0 )
  {
    v44 = v87[0];
    v45 = *(uint32_t *)(v87[0] - 12);
    v46 = v45 + 1;
    if ( (unsigned int)(v45 + 1) > *(uint32_t *)(v87[0] - 8) || *(int *)(v87[0] - 4) > 0 )
    {
      sub_1939B80(v87, v45 + 1);
      v44 = v87[0];
      v45 = *(uint32_t *)(v87[0] - 12);
    }
    *(uint8_t *)(v44 + v45) = v78;
    v47 = v87[0];
    if ( (uint32_t *)(v87[0] - 12) == dword_213B808 )
    {
      v78 = 0;
    }
    else
    {
      *(uint32_t *)(v87[0] - 4) = 0;
      *(uint32_t *)(v47 - 12) = v46;
      v78 = 0;
      *(uint8_t *)(v47 + v46) = 0;
    }
    goto LABEL_28;
  }
  v29 = 1;
LABEL_34:
  v30 = v87[0];
  v31 = *(uint32_t *)(v87[0] - 12);
  v32 = (uint32_t *)(v87[0] - 12);
  if ( v31 != 0 )
  {
LABEL_51:
    v76 = v31 + 1;
    if ( (unsigned int)(v31 + 1) > *(uint32_t *)(v30 - 8) || *(int *)(v30 - 4) > 0 )
    {
      sub_1939B80(v87, v76);
      v30 = v87[0];
      v31 = *(uint32_t *)(v87[0] - 12);
    }
    *(uint8_t *)(v30 + v31) = v78;
    v41 = v87[0];
    v42 = v87[0] - 12;
    if ( (uint32_t *)(v87[0] - 12) != dword_213B808 )
    {
      *(uint32_t *)(v87[0] - 4) = 0;
      *(uint32_t *)(v41 - 12) = v76;
      *(uint8_t *)(v41 + v76) = 0;
      v41 = v87[0];
      v42 = v87[0] - 12;
    }
    v68 = v41;
    v71 = (uint32_t *)v42;
    v43 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v87);
    v30 = v68;
    v32 = v71;
    if ( v43 == 0 )
      *a8 = 4;
  }
LABEL_35:
  if ( (v78 != 0 || v85 != 0 || *(uint32_t *)(v30 - 12) != 0) && v29 == 0 )
  {
    if ( v83 != 0 )
    {
      v37 = -1;
      v38 = 0x7FFFFFFF;
      if ( v86 )
      {
        v37 = 0;
        v38 = 0x80000000;
      }
      v39 = a9;
      *a9 = v37;
      v40 = a8;
      v39[1] = v38;
      *v40 = 4;
    }
    else
    {
      if ( v86 )
        v74 = -(int64_t)v74;
      *(uint64_t *)a9 = v74;
    }
  }
  else
  {
    v33 = a9;
    v34 = a8;
    *a9 = 0;
    v33[1] = 0;
    *v34 = 4;
  }
  if ( v84 != 0 )
    *a8 |= 2u;
  v35 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v35;
  if ( v32 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v32);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192A750  (binary VA: 0x192a750)
// Original: sub_192A750
// ----------------------------------------------------------------------------
uint32_t * sub_192A750(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_1929C70(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192A7B0  (binary VA: 0x192a7b0)
// Original: sub_192A7B0
// ----------------------------------------------------------------------------
uint32_t * sub_192A7B0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  char v14; // di
  char v15;
  uint64_t v16; // kr08_8
  uint8_t *v17;
  int v18;
  bool v19; // cc
  int v20;
  unsigned int v21;
  char v22; // di
  char v23; // di
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  int v33;
  int v34;
  char v35;
  int v36;
  int v37;
  int v38;
  int v39;
  char v40;
  int v41;
  int v42;
  unsigned int v43;
  char v44; // di
  char v45;
  char v46;
  unsigned int v47;
  char v48; // di
  unsigned int v49;
  char v50;
  int v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int32_t _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint64_t _g4_t_v58;
  typedef char _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char _g4_t_v61;
  typedef int64_t _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char _g4_t_v64;
  typedef void *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef bool _g4_t_v69;
  typedef uint32_t _g4_t_v70[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v52)) > _g4_s0 ? (8u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v54)) > _g4_s2 ? (8u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v55)) > _g4_s3 ? (12u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v56)) > _g4_s4 ? (16u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v57)) > _g4_s5 ? (16u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v58)) > _g4_s6 ? (16u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v59)) > _g4_s7 ? (28u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v60)) > _g4_s8 ? (28u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v61)) > _g4_s9 ? (28u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v62)) > _g4_s10 ? (32u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v63)) > _g4_s11 ? (32u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (43u + sizeof(_g4_t_v64)) > _g4_s12 ? (43u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_s)) > _g4_s13 ? (44u + sizeof(_g4_t_s)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_n)) > _g4_s14 ? (48u + sizeof(_g4_t_n)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v67)) > _g4_s15 ? (60u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v68)) > _g4_s16 ? (61u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (63u + sizeof(_g4_t_v69)) > _g4_s17 ? (63u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v70)) > _g4_s18 ? (76u + sizeof(_g4_t_v70)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 43u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 61u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 63u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);

  v9 = a7;
  v56 = sub_1902550(&dword_213B790);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v56);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v51 = opNew(0x68u);
    *(uint32_t *)(v51 + 4) = 0;
    *(uint32_t *)(v51 + 8) = 0;
    *(uint32_t *)v51 = (uint32_t)(uintptr_t)(&off_20AAB70);
    *(uint32_t *)(v51 + 12) = 0;
    *(uint8_t *)(v51 + 16) = 0;
    *(uint32_t *)(v51 + 20) = 0;
    *(uint32_t *)(v51 + 24) = 0;
    *(uint32_t *)(v51 + 28) = 0;
    *(uint32_t *)(v51 + 32) = 0;
    *(uint8_t *)(v51 + 36) = 0;
    *(uint8_t *)(v51 + 37) = 0;
    *(uint8_t *)(v51 + 100) = 0;
    sub_191D3E0(v51, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v51, v56);
    v11 = *v10;
  }
  v57 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v57 = v13;
  }
  v59 = sub_19225E0(&a3);
  v14 = 0;
  v69 = false;
  if ( v59 == (uint8_t)sub_19225E0(&a5) )
    goto LABEL_8;
  v45 = sub_1919D70((int)(uintptr_t)(&a3));
  v14 = v45;
  v69 = v45 == *(uint8_t *)(v11 + 74);
  if ( v45 == *(uint8_t *)(v11 + 74) || v45 == *(uint8_t *)(v11 + 75) )
  {
    v15 = *(uint8_t *)(v11 + 16);
    if ( (v15 == 0 || v14 != *(uint8_t *)(v11 + 37)) && v14 != *(uint8_t *)(v11 + 36) )
    {
      if ( a3 != nullptr )
      {
        v49 = a3[2];
        if ( v49 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v49 + 1;
        a4 = -1;
      }
      v61 = sub_19225E0(&a3);
      if ( v61 == (uint8_t)sub_19225E0(&a5) )
      {
LABEL_8:
        v15 = *(uint8_t *)(v11 + 16);
        v67 = 1;
        v60 = 0;
        v68 = 0;
        goto LABEL_9;
      }
      v14 = sub_1919D70((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
    }
  }
  else
  {
    v15 = *(uint8_t *)(v11 + 16);
  }
  v60 = 0;
  v68 = 0;
  v46 = v14;
  while ( 1 )
  {
    if ( v15 != 0 && *(uint8_t *)(v11 + 37) == v46 || *(uint8_t *)(v11 + 36) == v46 )
    {
LABEL_119:
      v14 = v46;
      v67 = 0;
      goto LABEL_9;
    }
    if ( *(uint8_t *)(v11 + 78) == v46 )
    {
      if ( v68 == 0 || v57 == 10 )
      {
        if ( v12 != 0 )
        {
          if ( v57 == 8 )
            v60 = 0;
          else
            ++v60;
          v68 = 1;
        }
        else
        {
          v60 = 0;
          v68 = 1;
          v57 = 8;
        }
        goto LABEL_89;
      }
    }
    else if ( v68 == 0 )
    {
      goto LABEL_119;
    }
    if ( *(uint8_t *)(v11 + 76) != v46 && *(uint8_t *)(v11 + 77) != v46 )
      goto LABEL_119;
    if ( v12 != 0 )
    {
      if ( v57 != 16 )
      {
        v14 = v46;
        v67 = 0;
        goto LABEL_10;
      }
      v60 = 0;
      v68 = 0;
    }
    else
    {
      v60 = 0;
      v68 = 0;
      v57 = 16;
    }
LABEL_89:
    if ( a3 != nullptr )
    {
      v47 = a3[2];
      if ( v47 >= a3[3] )
      {
        v54 = v46;
        G4_VCALL<void>(a3, 40);
        v46 = v54;
      }
      else
      {
        a3[2] = v47 + 1;
      }
      a4 = -1;
    }
    v53 = v46;
    v48 = sub_19225E0(&a3);
    if ( v48 == (uint8_t)sub_19225E0(&a5) )
    {
      v14 = v53;
      v67 = 1;
      v15 = *(uint8_t *)(v11 + 16);
      goto LABEL_9;
    }
    v50 = sub_1919D70((int)(uintptr_t)(&a3));
    v46 = v50;
    if ( v68 == 0 )
      break;
    v15 = *(uint8_t *)(v11 + 16);
  }
  v14 = v50;
  v67 = 0;
  v15 = *(uint8_t *)(v11 + 16);
LABEL_9:
  n = 22;
  if ( v57 != 16 )
LABEL_10:
    n = v57;
  v70[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v70, 32);
  v62 = v57;
  v16 = 0xFFFFFFFFFFFFFFFFLL / v57;
  s = (void *)(v11 + 78);
  if ( *(uint8_t *)(v11 + 100) == 0 )
  {
    v58 = 0;
    v64 = 0;
    if ( v67 == 0 )
    {
      v40 = v14;
      v41 = v14;
      if ( n > 0xA )
        goto LABEL_70;
LABEL_58:
      if ( v40 > 47 && v40 < (char)(n + 48) )
      {
LABEL_60:
        v42 = v41 - 48;
        while ( v42 != -1 )
        {
          if ( v16 < v58 )
          {
            v64 = 1;
          }
          else
          {
            v64 |= __PAIR64__(~(v42 >> 31), ~v42) < v62 * v58;
            v58 = v42 + v62 * v58;
            ++v60;
          }
          if ( a3 != nullptr )
          {
            v43 = a3[2];
            if ( v43 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v43 + 1;
            a4 = -1;
          }
          v44 = sub_19225E0(&a3);
          if ( v44 == (uint8_t)sub_19225E0(&a5) )
          {
LABEL_28:
            v23 = 0;
            v67 = 1;
            goto LABEL_29;
          }
          v14 = sub_1919D70((int)(uintptr_t)(&a3));
          v40 = v14;
          v41 = v14;
          if ( n <= 0xA )
            goto LABEL_58;
LABEL_70:
          if ( (uint8_t)(v14 - 48) <= 9u )
            goto LABEL_60;
          v42 = v41 - 87;
          if ( (uint8_t)(v14 - 97) > 5u )
          {
            if ( (uint8_t)(v14 - 65) > 5u )
              goto LABEL_42;
            v42 = v41 - 55;
          }
        }
      }
    }
    goto LABEL_42;
  }
  v58 = 0;
  v64 = 0;
  if ( v67 != 0 )
  {
LABEL_42:
    v24 = v70[0];
    v23 = 0;
    v25 = *(uint32_t *)(v70[0] - 12);
    v26 = (uint32_t *)(v70[0] - 12);
    if ( v25 == 0 )
      goto LABEL_30;
    goto LABEL_43;
  }
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint8_t *)(v11 + 37) != v14 )
  {
    if ( *(uint8_t *)(v11 + 36) == v14 )
      goto LABEL_42;
    v17 = (uint8_t *)(memchr(s, v14, n));
    if ( v17 == nullptr )
      goto LABEL_42;
    v18 = v17 - (uint8_t *)s;
    v19 = v17 - (uint8_t *)s < 16;
    v20 = v17 - (uint8_t *)s - 6;
    if ( !v19 )
      v18 = v20;
    if ( v16 < v58 )
    {
      v64 = 1;
    }
    else
    {
      v64 |= __PAIR64__(~(v18 >> 31), ~v18) < v62 * v58;
      v58 = v62 * v58 + v18;
      ++v60;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v21 = a3[2];
      if ( v21 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v21 + 1;
      a4 = -1;
    }
    v22 = sub_19225E0(&a3);
    if ( v22 == (uint8_t)sub_19225E0(&a5) )
      goto LABEL_28;
    v14 = sub_1919D70((int)(uintptr_t)(&a3));
  }
  if ( v60 != 0 )
  {
    v36 = v70[0];
    v37 = *(uint32_t *)(v70[0] - 12);
    v38 = v37 + 1;
    if ( (unsigned int)(v37 + 1) > *(uint32_t *)(v70[0] - 8) || *(int *)(v70[0] - 4) > 0 )
    {
      sub_1939B80(v70, v37 + 1);
      v36 = v70[0];
      v37 = *(uint32_t *)(v70[0] - 12);
    }
    *(uint8_t *)(v36 + v37) = v60;
    v39 = v70[0];
    if ( (uint32_t *)(v70[0] - 12) == dword_213B808 )
    {
      v60 = 0;
    }
    else
    {
      *(uint32_t *)(v70[0] - 4) = 0;
      *(uint32_t *)(v39 - 12) = v38;
      v60 = 0;
      *(uint8_t *)(v39 + v38) = 0;
    }
    goto LABEL_23;
  }
  v23 = 1;
LABEL_29:
  v24 = v70[0];
  v25 = *(uint32_t *)(v70[0] - 12);
  v26 = (uint32_t *)(v70[0] - 12);
  if ( v25 != 0 )
  {
LABEL_43:
    v63 = v25 + 1;
    if ( (unsigned int)(v25 + 1) > *(uint32_t *)(v24 - 8) || *(int *)(v24 - 4) > 0 )
    {
      sub_1939B80(v70, v63);
      v24 = v70[0];
      v25 = *(uint32_t *)(v70[0] - 12);
    }
    *(uint8_t *)(v24 + v25) = v60;
    v33 = v70[0];
    v34 = v70[0] - 12;
    if ( (uint32_t *)(v70[0] - 12) != dword_213B808 )
    {
      *(uint32_t *)(v70[0] - 4) = 0;
      *(uint32_t *)(v33 - 12) = v63;
      *(uint8_t *)(v33 + v63) = 0;
      v33 = v70[0];
      v34 = v70[0] - 12;
    }
    v52 = v33;
    v55 = (uint32_t *)v34;
    v35 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v70);
    v24 = v52;
    v26 = v55;
    if ( v35 == 0 )
      *a8 = 4;
  }
LABEL_30:
  if ( (v60 != 0 || v68 != 0 || *(uint32_t *)(v24 - 12) != 0) && v23 == 0 )
  {
    if ( v64 != 0 )
    {
      v29 = a9;
      v30 = a8;
      *a9 = -1;
      v29[1] = -1;
      *v30 = 4;
    }
    else
    {
      if ( v69 )
        v58 = -(int64_t)v58;
      *(uint64_t *)a9 = v58;
    }
  }
  else
  {
    v27 = a9;
    v28 = a8;
    *a9 = 0;
    v27[1] = 0;
    *v28 = 4;
  }
  if ( v67 != 0 )
    *a8 |= 2u;
  v31 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v31;
  if ( v26 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v26);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B260  (binary VA: 0x192b260)
// Original: sub_192B260
// ----------------------------------------------------------------------------
uint32_t * sub_192B260(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  sub_192A7B0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B2C0  (binary VA: 0x192b2c0)
// Original: sub_192B2C0
// ----------------------------------------------------------------------------
void sub_192B2C0()
{
  if ( byte_213B7A8 == 0 )
    byte_213B7A8 = 1;
  if ( byte_213B7B0 == 0 )
    byte_213B7B0 = 1;
  if ( byte_213B7B8 == 0 )
    byte_213B7B8 = 1;
  if ( byte_213B7C0 == 0 )
    byte_213B7C0 = 1;
  if ( byte_213B7C8 == 0 )
    byte_213B7C8 = 1;
  if ( byte_213B7D0 == 0 )
    byte_213B7D0 = 1;
  if ( byte_213B7D8 == 0 )
    byte_213B7D8 = 1;
  if ( byte_213B7E0 == 0 )
    byte_213B7E0 = 1;
  if ( byte_213B7E8 == 0 )
    byte_213B7E8 = 1;
  if ( byte_213B7F0 == 0 )
    byte_213B7F0 = 1;
  if ( byte_213B7F8 == 0 )
    byte_213B7F8 = 1;
  if ( byte_213B800 == 0 )
    byte_213B800 = 1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B390  (binary VA: 0x192b390)
// Original: sub_192B390
// ----------------------------------------------------------------------------
int sub_192B390(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B3F0  (binary VA: 0x192b3f0)
// Original: sub_192B3F0
// ----------------------------------------------------------------------------
int sub_192B3F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B450  (binary VA: 0x192b450)
// Original: sub_192B450
// ----------------------------------------------------------------------------
void sub_192B450(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 28));
}

// ----------------------------------------------------------------------------
// Function: sub_192B480  (binary VA: 0x192b480)
// Original: sub_192B480
// ----------------------------------------------------------------------------
uint32_t * sub_192B480(uint32_t *a1, int a2, int off, int a4, int a5)
{
  int whence;

  whence = 0;
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( a5 != 0 )
    whence = (a5 != 1) + 1;
  if ( fseek(*(FILE **)(a2 + 32), off, whence) == 0 )
    *(uint64_t *)a1 = ftell(*(FILE **)(a2 + 32));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B520  (binary VA: 0x192b520)
// Original: sub_192B520
// ----------------------------------------------------------------------------
uint32_t * sub_192B520(uint32_t *a1, int a2, int off, int a4, int a5)
{
  int whence;

  whence = 0;
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( a5 != 0 )
    whence = (a5 != 1) + 1;
  if ( fseek(*(FILE **)(a2 + 32), off, whence) == 0 )
    *(uint64_t *)a1 = ftell(*(FILE **)(a2 + 32));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192B5C0  (binary VA: 0x192b5c0)
// Original: sub_192B5C0
// ----------------------------------------------------------------------------
int sub_192B5C0(int a1)
{
  return fflush(*(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192B5F0  (binary VA: 0x192b5f0)
// Original: sub_192B5F0
// ----------------------------------------------------------------------------
int sub_192B5F0(int a1)
{
  return fflush(*(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192B620  (binary VA: 0x192b620)
// Original: sub_192B620
// ----------------------------------------------------------------------------
int sub_192B620(int a1, int a2, int a3)
{
  int i;
  wint_t v5;
  int v7;

  for ( i = 0; a3 != i; ++i )
  {
    v7 = a1;
    v5 = putwc(*(uint32_t *)(a2 + 4 * i), *(FILE **)(a1 + 32));
    a1 = v7;
    if ( v5 == -1 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: sub_192B680  (binary VA: 0x192b680)
// Original: sub_192B680
// ----------------------------------------------------------------------------
wint_t sub_192B680(int a1, wint_t wc)
{
  wint_t result;

  result = wc;
  if ( wc == -1 )
  {
    if ( *(uint32_t *)(a1 + 36) != -1 )
      result = ungetwc(*(uint32_t *)(a1 + 36), *(FILE **)(a1 + 32));
  }
  else
  {
    result = ungetwc(wc, *(FILE **)(a1 + 32));
  }
  *(uint32_t *)(a1 + 36) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192B6F0  (binary VA: 0x192b6f0)
// Original: sub_192B6F0
// ----------------------------------------------------------------------------
wint_t sub_192B6F0(int a1)
{
  wint_t result;

  result = getwc(*(FILE **)(a1 + 32));
  *(uint32_t *)(a1 + 36) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192B730  (binary VA: 0x192b730)
// Original: sub_192B730
// ----------------------------------------------------------------------------
int sub_192B730(int a1, int a2, int a3)
{
  int v3;
  wint_t v4;

  if ( a3 != 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = getwc(*(FILE **)(a1 + 32));
      if ( v4 == -1 )
        break;
      *(uint32_t *)(a2 + 4 * v3++) = v4;
      if ( a3 == v3 )
        goto LABEL_7;
    }
    if ( v3 == 0 )
      goto LABEL_6;
LABEL_7:
    *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 4 * v3 - 4);
    return v3;
  }
  else
  {
LABEL_6:
    *(uint32_t *)(a1 + 36) = -1;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_192B7B0  (binary VA: 0x192b7b0)
// Original: sub_192B7B0
// ----------------------------------------------------------------------------
wint_t sub_192B7B0(int a1)
{
  wint_t v1;

  v1 = getwc(*(FILE **)(a1 + 32));
  return ungetwc(v1, *(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192B800  (binary VA: 0x192b800)
// Original: sub_192B800
// ----------------------------------------------------------------------------
int sub_192B800(int a1, int c)
{
  int result;

  result = c;
  if ( c == -1 )
  {
    if ( *(uint32_t *)(a1 + 36) != -1 )
      result = ungetc(*(uint32_t *)(a1 + 36), *(FILE **)(a1 + 32));
  }
  else
  {
    result = ungetc(c, *(FILE **)(a1 + 32));
  }
  *(uint32_t *)(a1 + 36) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192B870  (binary VA: 0x192b870)
// Original: sub_192B870
// ----------------------------------------------------------------------------
int sub_192B870(int a1)
{
  int result;

  result = getc(*(FILE **)(a1 + 32));
  *(uint32_t *)(a1 + 36) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192B8B0  (binary VA: 0x192b8b0)
// Original: sub_192B8B0
// ----------------------------------------------------------------------------
int sub_192B8B0(int a1)
{
  int v1;

  v1 = getc(*(FILE **)(a1 + 32));
  return ungetc(v1, *(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192B900  (binary VA: 0x192b900)
// Original: sub_192B900
// ----------------------------------------------------------------------------
size_t sub_192B900(int a1, void *ptr, size_t n)
{
  return fwrite(ptr, 1u, n, *(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192B940  (binary VA: 0x192b940)
// Original: sub_192B940
// ----------------------------------------------------------------------------
int sub_192B940(int a1, char *ptr, size_t n)
{
  int result;

  result = fread(ptr, 1u, n, *(FILE **)(a1 + 32));
  if ( result <= 0 )
    *(uint32_t *)(a1 + 36) = -1;
  else
    *(uint32_t *)(a1 + 36) = (uint8_t)ptr[result - 1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192B9B0  (binary VA: 0x192b9b0)
// Original: sub_192B9B0
// ----------------------------------------------------------------------------
int sub_192B9B0(int a1, int c)
{
  if ( c == -1 )
    return -(fflush(*(FILE **)(a1 + 32)) != 0);
  else
    return putc(c, *(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192BA00  (binary VA: 0x192ba00)
// Original: sub_192BA00
// ----------------------------------------------------------------------------
wint_t sub_192BA00(int a1, wchar_t wc)
{
  if ( wc == -1 )
    return -(fflush(*(FILE **)(a1 + 32)) != 0);
  else
    return putwc(wc, *(FILE **)(a1 + 32));
}

// ----------------------------------------------------------------------------
// Function: sub_192BA50  (binary VA: 0x192ba50)
// Original: sub_192BA50
// ----------------------------------------------------------------------------
void sub_192BA50(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_20AB308;
  sub_1902180(a1 + 7);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_192BAA0  (binary VA: 0x192baa0)
// Original: sub_192BAA0
// ----------------------------------------------------------------------------
void sub_192BAA0(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_20AB2C8;
  sub_1902180(a1 + 7);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_192BAF0  (binary VA: 0x192baf0)
// Original: sub_192BAF0
// ----------------------------------------------------------------------------
void sub_192BAF0(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 28));
}

// ----------------------------------------------------------------------------
// Function: sub_192BB20  (binary VA: 0x192bb20)
// Original: sub_192BB20
// ----------------------------------------------------------------------------
int sub_192BB20(int a1, uint32_t *a2)
{
  return (int)(uintptr_t)(g4_std_compat::ostream_write(a1, *a2, *(uint32_t *)(*a2 - 12)));
}

// ----------------------------------------------------------------------------
// Function: sub_192BB60  (binary VA: 0x192bb60)
// Original: sub_192BB60
// ----------------------------------------------------------------------------
uint32_t * sub_192BB60(uint32_t *a1, int *a2)
{
  int v2;
  uint8_t *v3;
  uint8_t v4;

  v2 = *(uint32_t *)(*a1 - 12);
  v3 = *(uint8_t **)((char *)a1 + v2 + 124);
  if ( v3 == nullptr )
    sub_18FFF30();
  if ( v3[28] != 0 )
  {
    v4 = v3[39];
  }
  else
  {
    sub_18FFC70(*(uint8_t **)((char *)a1 + v2 + 124));
    v4 = G4_VCALL<int>(v3, 24, 10);
  }
  return (uint32_t *)(uintptr_t)(sub_1905A30(a1, a2, v4));
}

// ----------------------------------------------------------------------------
// Function: sub_192BBE0  (binary VA: 0x192bbe0)
// Original: sub_192BBE0
// ----------------------------------------------------------------------------
uint32_t * sub_192BBE0(uint32_t *a1, uint32_t *a2)
{
  int v2;
  char *v4;
  int v5;
  uint32_t *v6;
  int *v7;
  int v8;
  unsigned int v9;
  size_t v10;
  uint32_t *v11;
  int *v12;
  int v13;
  uint32_t *v14;
  typedef int64_t _g4_t_v15;
  typedef size_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef wchar_t _g4_t_v21[135];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (43u + sizeof(_g4_t_v19)) > _g4_s4 ? (43u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 43u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);

  sub_19163C0(&v19, a1, 0);
  v2 = 4;
  if ( v19 == 0 )
    goto LABEL_2;
  sub_194E130(a2, 0, *(uint32_t *)(*a2 - 12), 0);
  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v5 = *((uint32_t *)v4 + 2);
  if ( v5 <= 0 )
    v5 = 268435454;
  v18 = v5;
  sub_1901AC0(&v20, (volatile int32_t **)v4 + 27);
  v17 = (int)(uintptr_t)(sub_193EB50(&v20));
  sub_1902180(&v20);
  v6 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  v7 = (int *)v6[2];
  if ( (unsigned int)(uintptr_t)(v7) >= v6[3] )
    v8 = (*(int (**)(uint32_t))(*v6 + 36))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124));
  else
    v8 = *v7;
  v9 = 0;
  v16 = 0;
  if ( v8 != -1 )
  {
    do
    {
      if ( G4_VCALL<uint8_t>(v17, 8, 8, v8) != 0 )
        break;
      if ( v16 == 128 )
      {
        sub_194F410((int)(uintptr_t)(a2), v21, 0x80u);
        v16 = 1;
        v10 = 0;
      }
      else
      {
        v10 = v16++;
      }
      v21[v10] = v8;
      ++v9;
      v11 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
      v12 = (int *)v11[2];
      if ( (unsigned int)(uintptr_t)(v12) >= v11[3] )
      {
        v13 = G4_VCALL<int>(v11, 40);
      }
      else
      {
        v13 = *v12;
        v11[2] = (uint32_t)(uintptr_t)(v12 + 1);
      }
      if ( v13 == -1 )
      {
        v8 = -1;
      }
      else
      {
        v14 = (uint32_t *)v11[2];
        v8 = (unsigned int)(uintptr_t)(v14) >= v11[3] ? G4_VCALL<int>(v11, 36) : *v14;
      }
    }
    while ( v18 > v9 && v8 != -1 );
  }
  sub_194F410((int)(uintptr_t)(a2), v21, v16);
  v2 = 2 * (v8 == -1);
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 8) = 0;
  if ( v9 == 0 )
  {
    v2 |= 4u;
    goto LABEL_2;
  }
  if ( v8 == -1 )
  {
LABEL_2:
    LODWORD(v15) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v15) = *(uint32_t *)(v15 + 20) | v2;
    sub_1911E40(v15);
    return a1;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192BEB0  (binary VA: 0x192beb0)
// Original: sub_192BEB0
// ----------------------------------------------------------------------------
int sub_192BEB0(int a1, uint32_t *a2)
{
  return (int)(uintptr_t)(sub_192F720(a1, *a2, *(uint32_t *)(*a2 - 12)));
}

// ----------------------------------------------------------------------------
// Function: sub_192BEF0  (binary VA: 0x192bef0)
// Original: sub_192BEF0
// ----------------------------------------------------------------------------
uint32_t * sub_192BEF0(uint32_t *a1, int *a2)
{
  int v2;
  wchar_t v3;

  v2 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
  if ( v2 == 0 )
    sub_18FFF30();
  v3 = G4_VCALL<int>(v2, 40, 10);
  return (uint32_t *)(uintptr_t)(sub_19062E0(a1, a2, v3));
}

// ----------------------------------------------------------------------------
// Function: sub_192BF60  (binary VA: 0x192bf60)
// Original: sub_192BF60
// ----------------------------------------------------------------------------
int sub_192BF60(uint32_t *a1, int a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_1903A70(a1 + 7);
  *a1 = (uint32_t)(uintptr_t)(&off_20AAC08);
  a1[9] = -1;
  a1[8] = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_192BFF0  (binary VA: 0x192bff0)
// Original: sub_192BFF0
// ----------------------------------------------------------------------------
int sub_192BFF0(uint32_t *a1, int a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_1903A70(a1 + 7);
  *a1 = (uint32_t)(uintptr_t)(&off_20AAC48);
  a1[9] = -1;
  a1[8] = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_192C080  (binary VA: 0x192c080)
// Original: sub_192C080
// ----------------------------------------------------------------------------
int sub_192C080(char *a1)
{
  return ((sub_192C090(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_192C090  (binary VA: 0x192c090)
// Original: sub_192C090
// ----------------------------------------------------------------------------
void sub_192C090(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AACCC);
  a1[1] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(a1 + 1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_192C0E0  (binary VA: 0x192c0e0)
// Original: sub_192C0E0
// ----------------------------------------------------------------------------
int sub_192C0E0(uint32_t *a1)
{
  return sub_192C0F0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_192C0F0  (binary VA: 0x192c0f0)
// Original: sub_192C0F0
// ----------------------------------------------------------------------------
int sub_192C0F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AACCC);
  a1[1] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(a1 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_192C130  (binary VA: 0x192c130)
// Original: sub_192C130
// ----------------------------------------------------------------------------
int sub_192C130(char *a1)
{
  return ((sub_192C140(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_192C140  (binary VA: 0x192c140)
// Original: sub_192C140
// ----------------------------------------------------------------------------
void sub_192C140(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAD0C);
  a1[1] = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90(a1 + 1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_192C190  (binary VA: 0x192c190)
// Original: sub_192C190
// ----------------------------------------------------------------------------
int sub_192C190(uint32_t *a1)
{
  return sub_192C1A0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_192C1A0  (binary VA: 0x192c1a0)
// Original: sub_192C1A0
// ----------------------------------------------------------------------------
int sub_192C1A0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AAD0C);
  a1[1] = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90(a1 + 1);
}

// ----------------------------------------------------------------------------
// Function: sub_192C1E0  (binary VA: 0x192c1e0)
// Original: sub_192C1E0
// ----------------------------------------------------------------------------
bool sub_192C1E0(int *a1, int *a2, int a3)
{
  int v3;
  uint32_t *v4;

  v3 = *a2;
  *a1 = *a2;
  v4 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v3 - 12)));
  *v4 = a2[1];
  return sub_19119D0((int)(uintptr_t)(v4), a3);
}

// ----------------------------------------------------------------------------
// Function: sub_192C220  (binary VA: 0x192c220)
// Original: sub_192C220
// ----------------------------------------------------------------------------
bool sub_192C220(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 4));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AACCC);
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AACE0);
  *(uint8_t *)(a1 + 120) = 0;
  *(uint8_t *)(a1 + 121) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  return sub_19119D0(a1 + 4, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_192C2E0  (binary VA: 0x192c2e0)
// Original: sub_192C2E0
// ----------------------------------------------------------------------------
int sub_192C2E0(int a1, int (*a2)(int))
{
  return a2(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_192C300  (binary VA: 0x192c300)
// Original: sub_192C300
// ----------------------------------------------------------------------------
char * sub_192C300(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192C320  (binary VA: 0x192c320)
// Original: sub_192C320
// ----------------------------------------------------------------------------
char * sub_192C320(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}


