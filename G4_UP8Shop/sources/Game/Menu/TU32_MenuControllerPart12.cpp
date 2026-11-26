#include "Core/Utils/DecompTypes.h"
#include "TU32_MenuControllerPart12.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_C10C70  (binary VA: 0xc10c70)
// Original: sub_C10C70
// ----------------------------------------------------------------------------
int sub_C10C70()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE7D0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE7D0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE7D4), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE7D4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE7D8), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE7D8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE7DC), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE7DC, &unk_20D1280);
  dword_20DE7E0 = 1056964608;
  dword_20DE7E4 = 1056964608;
  dword_20DE7E8 = 1056964608;
  dword_20DE7EC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE7EC, &unk_20D1280);
  dword_20DE7F0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE7F0, &unk_20D1280);
  dword_20DE7F4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE7F4, &unk_20D1280);
  dword_20DE7F8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE7F8, &unk_20D1280);
  dword_20DE7FC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE7FC, &unk_20D1280);
  dword_20DE800 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE800, &unk_20D1280);
  dword_20DE804 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE804, &unk_20D1280);
  dword_20DE808 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE808, &unk_20D1280);
  dword_20DE80C = opNewArray(0x10u);
  dword_20DE7C8 = (int)(uintptr_t)(&dword_20D1870);
  dword_20DE7C4 = 1920234601;
  dword_20DE7CC = (int)(uintptr_t)("GSMain");
  return __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20DE7C4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_C10EA0  (binary VA: 0xc10ea0)
// Original: sub_C10EA0
// ----------------------------------------------------------------------------
int sub_C10EA0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: nullsub_522  (binary VA: 0xc10eb8)
// Original: nullsub_522
// ----------------------------------------------------------------------------
void nullsub_522()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C10EC0  (binary VA: 0xc10ec0)
// Original: sub_C10EC0
// ----------------------------------------------------------------------------
int sub_C10EC0(int a1)
{
  return *(uint32_t *)(a1 + 192);
}

// ----------------------------------------------------------------------------
// Function: sub_C10ED0  (binary VA: 0xc10ed0)
// Original: sub_C10ED0
// ----------------------------------------------------------------------------
int sub_C10ED0(int a1)
{
  return *(uint32_t *)(a1 + 184);
}

// ----------------------------------------------------------------------------
// Function: sub_C10EE0  (binary VA: 0xc10ee0)
// Original: sub_C10EE0
// ----------------------------------------------------------------------------
int sub_C10EE0(int a1, int a2)
{
  int (*v2)(int);
  uint8_t v4[12];

  v2 = *(int (**)(int))(*(uint32_t *)a1 + 320);
  G4_VCALL<void>(a2, 56);
  (*(void (**)(uint8_t *, int))(*(uint32_t *)a2 + 52))(v4, a2);
  return v2(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C10F50  (binary VA: 0xc10f50)
// Original: sub_C10F50
// ----------------------------------------------------------------------------
void sub_C10F50()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_523  (binary VA: 0xc10f68)
// Original: nullsub_523
// ----------------------------------------------------------------------------
void nullsub_523()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_524  (binary VA: 0xc10f78)
// Original: nullsub_524
// ----------------------------------------------------------------------------
void nullsub_524()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C10F80  (binary VA: 0xc10f80)
// Original: sub_C10F80
// ----------------------------------------------------------------------------
void sub_C10F80()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C10F90  (binary VA: 0xc10f90)
// Original: sub_C10F90
// ----------------------------------------------------------------------------
int sub_C10F90(int64_t a1, char a2)
{
  int result;

  result = a1;
  if ( a2 != 0 )
    *(uint32_t *)(a1 + 176) |= HIDWORD(a1);
  else
    *(uint32_t *)(a1 + 176) &= ~HIDWORD(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_525  (binary VA: 0xc10fb8)
// Original: nullsub_525
// ----------------------------------------------------------------------------
void nullsub_525()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_526  (binary VA: 0xc10fc8)
// Original: nullsub_526
// ----------------------------------------------------------------------------
void nullsub_526()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C10FD0  (binary VA: 0xc10fd0)
// Original: sub_C10FD0
// ----------------------------------------------------------------------------
int sub_C10FD0(int a1)
{
  return *(uint32_t *)(a1 + 176) & 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C10FE0  (binary VA: 0xc10fe0)
// Original: sub_C10FE0
// ----------------------------------------------------------------------------
int sub_C10FE0(uint8_t *a1)
{
  int result;

  result = a1[308];
  if ( (uint8_t)result == 0 )
  {
    if ( G4_VCALL<uint8_t>(a1, 176) != 0 )
    {
      G4_VCALL<void>(a1, 344);
      return a1[308];
    }
    else
    {
      a1[308] = 1;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C11040  (binary VA: 0xc11040)
// Original: sub_C11040
// ----------------------------------------------------------------------------
int sub_C11040(int a1)
{
  return *(uint32_t *)(a1 + 72);
}

// ----------------------------------------------------------------------------
// Function: sub_C11050  (binary VA: 0xc11050)
// Original: sub_C11050
// ----------------------------------------------------------------------------
int sub_C11050(int a1)
{
  return *(uint32_t *)(a1 + 452);
}

// ----------------------------------------------------------------------------
// Function: sub_C11060  (binary VA: 0xc11060)
// Original: sub_C11060
// ----------------------------------------------------------------------------
int sub_C11060(int a1)
{
  return G4_VCALL<int>(a1, 280, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C11080  (binary VA: 0xc11080)
// Original: sub_C11080
// ----------------------------------------------------------------------------
uint32_t ** sub_C11080(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *i;
  int v6;
  uint32_t **result;
  uint32_t **v8;
  uint32_t *v9;

  v1 = *(uint32_t **)(a1[16] + 32);
  v2 = (uint32_t *)v1[4];
  if ( v2 != nullptr )
  {
    do
    {
      G4_VCALL<void>(v2, 136, a1);
      v2 = (uint32_t *)v2[111];
    }
    while ( v2 != nullptr );
    v1 = *(uint32_t **)(a1[16] + 32);
  }
  v3 = (uint32_t *)v1[22];
  if ( v3 != nullptr )
  {
    do
    {
      G4_VCALL<void>(v3, 136, a1);
      v3 = (uint32_t *)v3[111];
    }
    while ( v3 != nullptr );
    v1 = *(uint32_t **)(a1[16] + 32);
  }
  v4 = (uint32_t *)v1[16];
  if ( v4 != nullptr )
  {
    do
    {
      G4_VCALL<void>(v4, 136, a1);
      v4 = (uint32_t *)v4[111];
    }
    while ( v4 != nullptr );
    v1 = *(uint32_t **)(a1[16] + 32);
  }
  for ( i = (uint32_t *)v1[10]; i != nullptr; i = (uint32_t *)i[111] )
    G4_VCALL<void>(i, 136, a1);
  if ( sub_8F0680() != 0 )
  {
    v6 = sub_8F0680();
    G4_VCALL<void>(v6, 136, a1);
  }
  result = (uint32_t **)a1[4];
  v8 = (uint32_t **)a1[5];
  if ( result != v8 )
  {
    do
    {
      v9 = *result++;
      *v9 = 0;
    }
    while ( v8 != result );
    result = (uint32_t **)a1[4];
  }
  a1[5] = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C11180  (binary VA: 0xc11180)
// Original: sub_C11180
// ----------------------------------------------------------------------------
int sub_C11180(int a1, uint8_t a2)
{
  int v2;
  uint8_t v3; // di
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  unsigned int v12;
  uint32_t *v13;
  uint32_t **Children;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  int v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t **v26;
  int v27;
  int v28;
  uint8_t v29;
  int v30;
  int v31;

  v2 = a1;
  v3 = a2;
  sub_B97E00();
  v4 = *(int **)(a1 + 416);
  if ( v4 != nullptr && *(uint8_t *)(a1 + 316) != 0 )
  {
    v29 = a2;
    if ( *(uint8_t *)(dword_20D9370 + 36 * *(uint32_t *)(a1 + 156) + 5) != 0 )
    {
      v29 = a2;
      if ( (unsigned int)(v4[3 * (uint8_t)(a2 + 1) + 1] - v4[3 * (uint8_t)(a2 + 1)]) >> 2 == 0
        && a2 != 0 )
      {
        while ( 1 )
        {
          v29 = v3 - 1;
          if ( (unsigned int)(v4[3 * v3 + 1] - v4[3 * v3]) >> 2 != 0 || v3 == 1 )
            break;
          --v3;
        }
      }
    }
    v5 = *v4;
    if ( (unsigned int)(v4[1] - *v4) >> 2 != 0 )
    {
      v6 = *v4;
      v7 = 0;
      v8 = v4[1];
      while ( 1 )
      {
        v9 = *(uint32_t **)(v5 + 4 * v7);
        if ( (v9[61] & 0x18) != 0x18 )
        {
          G4_VCALL<void>(v9, 76, 1);
          v4 = *(int **)(a1 + 416);
          v6 = *v4;
          v8 = v4[1];
        }
        if ( ++v7 >= (unsigned int)((v8 - v6) >> 2) )
          break;
        v5 = v6;
      }
      v2 = a1;
    }
    v10 = v4[3];
    if ( (unsigned int)(v4[4] - v10) >> 2 != 0 )
    {
      v11 = v4[3];
      v12 = 0;
      while ( 1 )
      {
        v13 = *(uint32_t **)(v10 + 4 * v12);
        if ( (v13[61] & 0x18) != 0x18 )
        {
          G4_VCALL<void>(v13, 76, 1);
          v11 = *(uint32_t *)(*(uint32_t *)(v2 + 416) + 12);
        }
        Children = (uint32_t **)glitch::scene::ISceneNode::getChildren(*(glitch::scene::ISceneNode::Self **)(v11 + 4 * v12));
        v15 = *Children;
        if ( *Children != nullptr && Children != (uint32_t **)(v15) )
        {
          if ( v29 != 0 )
          {
            do
            {
              v18 = v15 - 1;
              if ( v15 == nullptr )
                v18 = nullptr;
              if ( (v18[61] & 0x18) == 0x18 )
              {
                v26 = Children;
                G4_VCALL<void>(v18, 76, 0);
                Children = v26;
              }
              v15 = (uint32_t *)*v15;
            }
            while ( Children != (uint32_t **)(v15) );
          }
          else
          {
            v27 = v2;
            v16 = (uint32_t *)(Children);
            do
            {
              v17 = v15 - 1;
              if ( v15 == nullptr )
                v17 = nullptr;
              if ( (v17[61] & 0x18) != 0x18 )
                G4_VCALL<void>(v17, 76, 1);
              v15 = (uint32_t *)*v15;
            }
            while ( v16 != v15 );
            v2 = v27;
          }
        }
        v4 = *(int **)(v2 + 416);
        ++v12;
        v10 = v4[3];
        if ( v12 >= (v4[4] - v10) >> 2 )
          break;
        v11 = v4[3];
      }
    }
    v30 = 6;
    v28 = 1;
    v31 = v2;
    do
    {
      v20 = v4[v30 + 1];
      v21 = v4[v30];
      if ( (unsigned int)(v20 - v21) >> 2 != 0 )
      {
        v22 = 0;
        v23 = v4[v30];
        if ( v28 == v29 )
        {
          while ( 1 )
          {
            v25 = *(uint32_t **)(v21 + 4 * v22);
            if ( (v25[61] & 0x18) != 0x18 )
            {
              G4_VCALL<void>(v25, 76, 1);
              v4 = *(int **)(v31 + 416);
              v23 = v4[v30];
              v20 = v4[v30 + 1];
            }
            if ( ++v22 >= (unsigned int)((v20 - v23) >> 2) )
              break;
            v21 = v23;
          }
        }
        else
        {
          while ( 1 )
          {
            v24 = *(uint32_t **)(v21 + 4 * v22);
            if ( (v24[61] & 0x18) == 0x18 )
            {
              G4_VCALL<void>(v24, 76, 0);
              v4 = *(int **)(v31 + 416);
              v23 = v4[v30];
              v20 = v4[v30 + 1];
            }
            if ( ++v22 >= (unsigned int)((v20 - v23) >> 2) )
              break;
            v21 = v23;
          }
        }
      }
      ++v28;
      v30 += 3;
    }
    while ( v28 != 3 );
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C114C0  (binary VA: 0xc114c0)
// Original: sub_C114C0
// ----------------------------------------------------------------------------
char sub_C114C0(int *a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  sub_BDEDB0(a1 + 72, a2);
  v3 = sub_BDED20(a1 + 70);
  LOBYTE(v4) = sub_BDEF50(a1 + 72, v3);
  if ( (uint8_t)v4 != 0 )
  {
    if ( a3 != 0 )
    {
      v4 = a1[72];
      v6 = a1[73];
      a1[70] = v4;
      a1[71] = v6;
    }
    else
    {
      v4 = a1[70];
      v5 = a1[71];
      a1[72] = v4;
      a1[73] = v5;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_C11570  (binary VA: 0xc11570)
// Original: sub_C11570
// ----------------------------------------------------------------------------
void sub_C11570(uint8_t *a1, int a2, int a3)
{
  if ( (a1[176] & 1) != 0 )
  {
    G4_VCALL<void>(a1, 316, a3);
    G4_VCALL<void>(a1, 308, a2);
    if ( G4_VCALL<uint8_t>(a1, 176) != 0 )
      G4_VCALL<void>(a1, 344);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C115D0  (binary VA: 0xc115d0)
// Original: sub_C115D0
// ----------------------------------------------------------------------------
int sub_C115D0(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  glitch::scene::ISceneNode::Self *v4;
  int result;

  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v2, 184, a2);
    v3 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v3, 168, a1 + 58);
    v4 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    return (int)(uintptr_t)(glitch::scene::ISceneNode::updateAbsolutePosition(v4, false));
  }
  else
  {
    a1[19] = *a2;
    a1[20] = a2[1];
    result = a2[2];
    a1[21] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C11680  (binary VA: 0xc11680)
// Original: sub_C11680
// ----------------------------------------------------------------------------
int sub_C11680(int a1)
{
  int v1;
  int v2;
  int v3;

  if ( byte_20DE820 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DE820) != 0 )
  {
    dword_20DE828 = 0;
    dword_20DE82C = 0;
    dword_20DE830 = 0;
    dword_20DE834 = 1065353216;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DE820);
  }
  v1 = G4_VCALL<int>(a1, 168);
  v2 = a1 + 88;
  if ( v1 != 0 )
  {
    v3 = G4_VCALL<int>(a1, 168);
    return G4_VCALL<int>(v3, 172);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_C11730  (binary VA: 0xc11730)
// Original: sub_C11730
// ----------------------------------------------------------------------------
int sub_C11730(int a1)
{
  int v1;
  int *v2;

  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v1 = G4_VCALL<int>(a1, 168);
    return G4_VCALL<int>(v1, 64);
  }
  else
  {
    v2 = (int *)(&dword_20DE848);
    if ( byte_20DE840 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DE840) != 0 )
    {
      dword_20DE848 = 2139095039;
      dword_20DE84C = 2139095039;
      dword_20DE850 = 2139095039;
      dword_20DE854 = -8388609;
      dword_20DE858 = -8388609;
      dword_20DE85C = -8388609;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20DE840);
    }
  }
  return (int)(uintptr_t)(v2);
}

// ----------------------------------------------------------------------------
// Function: sub_C117F0  (binary VA: 0xc117f0)
// Original: sub_C117F0
// ----------------------------------------------------------------------------
size_t sub_C117F0(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EB830(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      sub_4EB870(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C11970  (binary VA: 0xc11970)
// Original: sub_C11970
// ----------------------------------------------------------------------------
int sub_C11970(float *a1, float *a2)
{
  float v3; // xmm6_4
  float v4; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  int result;
  float v25; // xmm4_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  double v28; // xmm0_8
  int v29;
  float v30; // xmm3_4
  double v31; // xmm1_8
  float v32; // xmm0_4
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;

  v3 = a1[15];
  v4 = a1[10];
  v5 = a1[14];
  v6 = a1[11];
  v7 = a1[7];
  v8 = a1[6];
  v42 = (float)(v3 * v4) - (float)(v5 * v6);
  v41 = (float)(v8 * v3) - (float)(v7 * v5);
  v9 = (float)(v8 * v6) - (float)(v7 * v4);
  v10 = a1[3];
  v11 = v5 * v10;
  v12 = v8 * v10;
  v13 = v4 * v10;
  v14 = a1[12];
  v40 = v9;
  v15 = a1[2];
  v16 = (float)(v3 * v15) - v11;
  v17 = a1[8];
  v18 = (float)(v6 * v15) - v13;
  v33 = a1[5];
  v19 = (float)(v15 * v7) - v12;
  v34 = a1[9];
  v39 = v16;
  v35 = a1[13];
  v38 = v18;
  v20 = a1[4];
  v37 = (float)(v35 * v17) - (float)(v34 * v14);
  v21 = a1[1];
  v36 = (float)(v35 * v20) - (float)(v33 * v14);
  v22 = (float)(v34 * v20) - (float)(v33 * v17);
  v23 = *a1;
  result = 0;
  v25 = (float)(v35 * v23) - (float)(v14 * v21);
  v26 = (float)(v34 * v23) - (float)(v17 * v21);
  v27 = (float)(v23 * v33) - (float)(v20 * v21);
  v28 = (double)v25 * v40
      + (double)v27 * v42
      + (double)v22 * v39
      + (double)v37 * v19
      - (double)v26 * v41
      - (double)v36 * v38;
  if ( fabs(v28) > 0.00000001 )
  {
    v29 = 0;
    *a2 = (float)((float)(v40 * v35) + (float)(v42 * v33)) - (float)(v41 * v34);
    a2[1] = (float)((float)(v39 * a1[9]) - (float)(v42 * a1[1])) - (float)(v38 * a1[13]);
    a2[2] = (float)((float)(a1[13] * v19) + (float)(v41 * a1[1])) - (float)(v39 * a1[5]);
    a2[3] = (float)((float)(v38 * a1[5]) - (float)(v40 * a1[1])) - (float)(a1[9] * v19);
    a2[4] = (float)((float)(v41 * a1[8]) - (float)(v42 * a1[4])) - (float)(v40 * a1[12]);
    a2[5] = (float)((float)(v38 * a1[12]) + (float)(v42 * *a1)) - (float)(v39 * a1[8]);
    a2[6] = (float)((float)(v39 * a1[4]) - (float)(v41 * *a1)) - (float)(a1[12] * v19);
    a2[7] = (float)((float)(v19 * a1[8]) + (float)(v40 * *a1)) - (float)(v38 * a1[4]);
    a2[8] = (float)((float)(a1[15] * v22) + (float)(v37 * a1[7])) - (float)(v36 * a1[11]);
    a2[9] = (float)((float)(a1[11] * v25) - (float)(v37 * a1[3])) - (float)(a1[15] * v26);
    a2[10] = (float)((float)(a1[15] * v27) + (float)(v36 * a1[3])) - (float)(a1[7] * v25);
    a2[11] = (float)((float)(a1[7] * v26) - (float)(a1[3] * v22)) - (float)(a1[11] * v27);
    a2[12] = (float)((float)(v36 * a1[10]) - (float)(v37 * a1[6])) - (float)(a1[14] * v22);
    a2[13] = (float)((float)(a1[14] * v26) + (float)(v37 * a1[2])) - (float)(a1[10] * v25);
    a2[14] = (float)((float)(v25 * a1[6]) - (float)(v36 * a1[2])) - (float)(a1[14] * v27);
    v30 = (float)((float)(v27 * a1[10]) + (float)(v22 * a1[2])) - (float)(v26 * a1[6]);
    v31 = 1.0 / v28;
    a2[15] = v30;
    do
    {
      v32 = a2[v29] * v31;
      a2[v29++] = v32;
    }
    while ( v29 != 16 );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C11E50  (binary VA: 0xc11e50)
// Original: sub_C11E50
// ----------------------------------------------------------------------------
void sub_C11E50(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  v25 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v25[3];
      v20 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v21 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v22 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v23 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v24 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v19 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_C11E50(a1, v9[3]);
                                      v18 = (uint32_t *)v9[2];
                                      opDelete(v9);
                                      if ( v18 == nullptr )
                                        break;
                                      v9 = v18;
                                    }
                                  }
                                  v10 = (uint32_t *)v8[2];
                                  opDelete(v8);
                                  if ( v10 == nullptr )
                                    break;
                                  v8 = v10;
                                }
                              }
                              v11 = (uint32_t *)v19[2];
                              opDelete(v19);
                              if ( v11 == nullptr )
                                break;
                              v19 = v11;
                              v7 = v11;
                            }
                          }
                          v12 = (uint32_t *)v24[2];
                          opDelete(v24);
                          if ( v12 == nullptr )
                            break;
                          v24 = v12;
                          v6 = v12;
                        }
                      }
                      v13 = (uint32_t *)v23[2];
                      opDelete(v23);
                      if ( v13 == nullptr )
                        break;
                      v23 = v13;
                      v5 = v13;
                    }
                  }
                  v14 = (uint32_t *)v22[2];
                  opDelete(v22);
                  if ( v14 == nullptr )
                    break;
                  v22 = v14;
                  v4 = v14;
                }
              }
              v15 = (uint32_t *)v21[2];
              opDelete(v21);
              if ( v15 == nullptr )
                break;
              v21 = v15;
              v3 = v15;
            }
          }
          v16 = (uint32_t *)v20[2];
          opDelete(v20);
          if ( v16 == nullptr )
            break;
          v20 = v16;
          v2 = v16;
        }
      }
      v17 = (uint32_t *)v25[2];
      opDelete(v25);
      if ( v17 == nullptr )
        break;
      v25 = v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C12000  (binary VA: 0xc12000)
// Original: sub_C12000
// ----------------------------------------------------------------------------
int sub_C12000(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int result;

  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a1, 168);
    return G4_VCALL<int>(v2, 176, a2);
  }
  else
  {
    a1[22] = *a2;
    a1[23] = a2[1];
    a1[24] = a2[2];
    result = a2[3];
    a1[25] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C12080  (binary VA: 0xc12080)
// Original: sub_C12080
// ----------------------------------------------------------------------------
float * sub_C12080(float *result, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm5_4

  v2 = a2[5];
  v3 = *a2;
  v4 = a2[10];
  v5 = (float)(v2 + *a2) + v4;
  if ( v5 <= 0.0 )
  {
    if ( v3 <= v2 || v3 <= v4 )
    {
      if ( v2 > v4 )
      {
        v29 = fsqrt((float)((float)(v2 - v3) - v4) + 1.0);
        v30 = 0.5 / v29;
        v13 = v29 * 0.5;
        v8 = (float)(a2[2] - a2[8]) * v30;
        v12 = (float)(a2[9] + a2[6]) * v30;
        v14 = (float)(a2[4] + a2[1]) * v30;
      }
      else
      {
        v27 = fsqrt((float)((float)(v4 - v3) - v2) + 1.0);
        v28 = 0.5 / v27;
        v12 = v27 * 0.5;
        v8 = (float)(a2[4] - a2[1]) * v28;
        v13 = (float)(a2[9] + a2[6]) * v28;
        v14 = (float)(a2[8] + a2[2]) * v28;
      }
      result[3] = v8;
    }
    else
    {
      v25 = fsqrt((float)((float)(v3 - v2) - v4) + 1.0);
      v26 = 0.5 / v25;
      v14 = v25 * 0.5;
      v8 = (float)(a2[9] - a2[6]) * v26;
      v12 = (float)(a2[2] + a2[8]) * v26;
      v13 = (float)(a2[4] + a2[1]) * v26;
      result[3] = v8;
    }
  }
  else
  {
    v6 = fsqrt(v5 + 1.0);
    v7 = 0.5 / v6;
    v8 = v6 * 0.5;
    v9 = a2[4] - a2[1];
    v10 = a2[2] - a2[8];
    v11 = a2[9] - a2[6];
    result[3] = v8;
    v12 = v9 * v7;
    v13 = v10 * v7;
    v14 = v11 * v7;
  }
  v15 = -v14;
  v16 = -v13;
  v17 = -v12;
  *result = v15;
  result[1] = -v13;
  result[2] = v17;
  v18 = (float)((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v8 * v8)) + (float)(v17 * v17);
  if ( v18 != 0.0 )
  {
    v19 = 1.0 / fsqrt(v18);
    v20 = (float)((float)((float)(v18 * v19) * v19) + -3.0) * (float)(v19 * -0.5);
    v21 = v15 * v20;
    v22 = v16 * v20;
    v23 = v17 * v20;
    v24 = v20 * result[3];
    *result = v21;
    result[1] = v22;
    result[2] = v23;
    result[3] = v24;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C122C0  (binary VA: 0xc122c0)
// Original: sub_C122C0
// ----------------------------------------------------------------------------
void sub_C122C0(float *a1, float *a2)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  double v11;
  double v12;
  double x;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;

  x = *a2 * 0.5;
  v12 = sin(x);
  v17 = cos(x);
  v14 = a2[1] * 0.5;
  v18 = sin(v14);
  v16 = cos(v14);
  v15 = a2[2] * 0.5;
  v19 = sin(v15);
  v11 = cos(v15);
  v4 = v19 * v18 * v12 + v17 * (v11 * v16);
  v5 = v12 * (v11 * v16) - v19 * v18 * v17;
  v6 = v16 * v19 * v12 + v11 * v18 * v17;
  v7 = v17 * (v16 * v19) - v11 * v18 * v12;
  *a1 = v5;
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = v4;
  v8 = (float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) + (float)(v4 * v4);
  if ( v8 != 0.0 )
  {
    v9 = 1.0 / fsqrt(v8);
    v10 = (float)((float)((float)(v8 * v9) * v9) + -3.0) * (float)(v9 * -0.5);
    *a1 = v5 * v10;
    a1[1] = v6 * v10;
    a1[2] = v7 * v10;
    a1[3] = v10 * v4;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C124B0  (binary VA: 0xc124b0)
// Original: sub_C124B0
// ----------------------------------------------------------------------------
uint32_t * sub_C124B0(uint32_t *result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6; // xmm0_4
  int v7; // xmm0_4
  int v8;

  v1 = result[3];
  v8 = result[11];
  v2 = result[1];
  result[1] = result[4];
  v3 = result[2];
  result[2] = result[8];
  v4 = result[6];
  v5 = result[7];
  result[3] = result[12];
  result[4] = v2;
  v6 = result[9];
  result[8] = v3;
  result[6] = v6;
  result[9] = v4;
  v7 = result[13];
  result[12] = v1;
  result[7] = v7;
  result[13] = v5;
  result[11] = result[14];
  result[14] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C12540  (binary VA: 0xc12540)
// Original: sub_C12540
// ----------------------------------------------------------------------------
int sub_C12540(int *a1, float *a2)
{
  int v2;
  float v3; // xmm2_4
  float v4; // xmm0_4
  int v5;
  int (*v6)(int, float *);
  int result;
  typedef float _g4_t_v8[3];
  typedef float _g4_t_v9[3];
  typedef int _g4_t_v10;
  typedef float _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  v2 = *a1;
  v3 = a2[1] * 0.017453292f;
  v4 = a2[2] * 0.017453292f;
  v8[0] = *a2 * 0.017453292f;
  v8[1] = v3;
  v8[2] = v4;
  if ( (*(int (**)(int *))(v2 + 168))(a1) != 0 )
  {
    v5 = G4_VCALL<int>(a1, 168);
    v6 = *(int (**)(int, float *))(*(uint32_t *)v5 + 176);
    sub_C122C0(v11, v8);
    return v6(v5, v11);
  }
  else
  {
    sub_C122C0(v9, v8);
    a1[22] = LODWORD(v9[0]);
    a1[23] = LODWORD(v9[1]);
    a1[24] = LODWORD(v9[2]);
    result = v10;
    a1[25] = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C12620  (binary VA: 0xc12620)
// Original: sub_C12620
// ----------------------------------------------------------------------------
int sub_C12620(int a1)
{
  int result;

  result = G4_VCALL<int>(a1, 40, 1, 0);
  if ( byte_20D4A50 == 0 )
  {
    result = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
    if ( result != 0 )
    {
      sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      result = __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
  }
  if ( byte_20D4A64 == 0 && byte_20D4A98 == 0 )
    return G4_VCALL<int>(a1, 124);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C126E0  (binary VA: 0xc126e0)
// Original: sub_C126E0
// ----------------------------------------------------------------------------
float * sub_C126E0(float *a1, float *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  float *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4

  if ( G4_VCALL<int>(a2, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a2, 168);
    v3 = *(uint32_t *)v2;
    if ( (*(uint8_t *)(v2 + 245) & 8) != 0 )
    {
      v9 = (float *)(*(int (**)(int))(v3 + 64))(v2);
      v10 = (float)(v9[5] + v9[2]) * 0.5;
      v11 = (float)(v9[3] + *v9) * 0.5;
      a1[1] = (float)(v9[4] + v9[1]) * 0.5;
      a1[2] = v10;
      *a1 = v11;
    }
    else
    {
      v4 = (uint32_t *)(*(int (**)(int))(v3 + 72))(v2);
      v5 = v4[14];
      v6 = v4[13];
      v7 = v4[12];
      *((uint32_t *)a1 + 1) = v6;
      *(uint32_t *)a1 = v7;
      *((uint32_t *)a1 + 2) = v5;
    }
  }
  else
  {
    *a1 = a2[19];
    a1[1] = a2[20];
    a1[2] = a2[21];
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C127C0  (binary VA: 0xc127c0)
// Original: sub_C127C0
// ----------------------------------------------------------------------------
float * sub_C127C0(float *a1, int a2)
{
  int v2;
  float *v3;
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;

  if ( byte_20D4920 == 0 )
  {
    v13 = (char *)(&byte_20D4920);
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4920) != 0 )
    {
      memset(&dword_20D4940, 0, 0x40u);
      dword_20D4940 = 1065353216;
      dword_20D4954 = 1065353216;
      dword_20D4968 = 1065353216;
      dword_20D497C = 1065353216;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4920);
    }
  }
  v2 = G4_VCALL<int>(a2, 168, v7, v8, v9, v10, v11, v12, v13);
  v3 = (float *)&dword_20D4940;
  if ( v2 != 0 )
  {
    v14 = G4_VCALL<int>(a2, 168);
    v3 = (float *)(*(int (**)(void))(*(uint32_t *)v14 + 72))();
  }
  v5 = -v3[2];
  v6 = -v3[1];
  *a1 = -*v3;
  a1[1] = v6;
  a1[2] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C128C0  (binary VA: 0xc128c0)
// Original: sub_C128C0
// ----------------------------------------------------------------------------
void * sub_C128C0(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  size_t n;
  void *result;
  void *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *(uint8_t *)(v7 + 12) = *src;
    else
      memcpy((void *)(v7 + 12), src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = &unk_20D3E6C;
  if ( (void *)v7 != &unk_20D3E6C )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = v8;
    *(uint8_t *)(v7 + v8 + 12) = 0;
  }
  v11 = (void *)(*a1 - 12);
  if ( v11 != &unk_20D3E6C )
  {
    result = (void *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (void *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = v7 + 12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C12A20  (binary VA: 0xc12a20)
// Original: sub_C12A20
// ----------------------------------------------------------------------------
float * sub_C12A20(float *a1, int a2)
{
  int v2;
  int *v3;
  float v5; // xmm0_4
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;

  if ( byte_20D4920 == 0 )
  {
    v12 = (char *)(&byte_20D4920);
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4920) != 0 )
    {
      memset(&dword_20D4940, 0, 0x40u);
      dword_20D4940 = 1065353216;
      dword_20D4954 = 1065353216;
      dword_20D4968 = 1065353216;
      dword_20D497C = 1065353216;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4920);
    }
  }
  v2 = G4_VCALL<int>(a2, 168, v6, v7, v8, v9, v10, v11, v12);
  v3 = (int *)(&dword_20D4940);
  if ( v2 != 0 )
  {
    v13 = G4_VCALL<int>(a2, 168);
    v3 = (int *)(*(int (**)(void))(*(uint32_t *)v13 + 72))();
  }
  v5 = -*((float *)v3 + 5);
  *a1 = -*((float *)v3 + 4);
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C12B10  (binary VA: 0xc12b10)
// Original: sub_C12B10
// ----------------------------------------------------------------------------
float * sub_C12B10(float *a1, int a2)
{
  int v2;
  float *v3;
  float v5; // xmm0_4
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;

  if ( byte_20D4920 == 0 )
  {
    v12 = (char *)(&byte_20D4920);
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4920) != 0 )
    {
      memset(&dword_20D4940, 0, 0x40u);
      dword_20D4940 = 1065353216;
      dword_20D4954 = 1065353216;
      dword_20D4968 = 1065353216;
      dword_20D497C = 1065353216;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4920);
    }
  }
  v2 = G4_VCALL<int>(a2, 168, v6, v7, v8, v9, v10, v11, v12);
  v3 = (float *)&dword_20D4940;
  if ( v2 != 0 )
  {
    v13 = G4_VCALL<int>(a2, 168);
    v3 = (float *)(*(int (**)(void))(*(uint32_t *)v13 + 72))();
  }
  v5 = -v3[1];
  *a1 = -*v3;
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C12C00  (binary VA: 0xc12c00)
// Original: sub_C12C00
// ----------------------------------------------------------------------------
float * sub_C12C00(float *a1, int a2)
{
  int v2;
  float *v3;
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;

  if ( byte_20D4920 == 0 )
  {
    v13 = (char *)(&byte_20D4920);
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4920) != 0 )
    {
      memset(&dword_20D4940, 0, 0x40u);
      dword_20D4940 = 1065353216;
      dword_20D4954 = 1065353216;
      dword_20D4968 = 1065353216;
      dword_20D497C = 1065353216;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4920);
    }
  }
  v2 = G4_VCALL<int>(a2, 168, v7, v8, v9, v10, v11, v12, v13);
  v3 = (float *)&dword_20D4940;
  if ( v2 != 0 )
  {
    v14 = G4_VCALL<int>(a2, 168);
    v3 = (float *)(*(int (**)(void))(*(uint32_t *)v14 + 72))();
  }
  v5 = -v3[6];
  v6 = -v3[5];
  *a1 = -v3[4];
  a1[1] = v6;
  a1[2] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C12D00  (binary VA: 0xc12d00)
// Original: sub_C12D00
// ----------------------------------------------------------------------------
int sub_C12D00(int a1)
{
  uint32_t *v1;
  bool v2;
  uint32_t *v3;
  char *v4;
  uint32_t *v5;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  char *v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  uint32_t *v13;
  uint32_t *v14;
  char *v15;
  uint32_t *v16;
  uint32_t *v17;
  char *v18;
  uint32_t *v19;
  uint32_t *v20;
  char *v21;
  uint32_t *v22;
  uint32_t *v23;
  char *v24;
  uint32_t *v25;
  uint32_t *v26;
  char *v27;
  uint32_t *v28;
  char *v29;
  uint32_t *v30;
  uint32_t *v31;
  char *v32;
  uint32_t *v33;
  uint32_t *v34;
  char *v35;
  uint32_t *v36;
  uint32_t *v37;
  char *v38;
  uint32_t *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  char *v43;
  uint32_t *v44;
  uint32_t *v45;
  char *v46;
  uint32_t *v47;
  uint32_t *v48;
  char *v49;
  uint32_t *v50;
  char *v51;
  uint32_t *v52;
  char *v53;
  uint32_t *v54;
  uint32_t *v55;
  char *v56;
  uint32_t *v57;
  uint32_t *v58;
  char *v59;
  uint32_t *v60;
  uint32_t *v61;
  char *v62;
  uint32_t *v63;
  uint32_t *v64;
  char *v65;
  uint32_t *v66;
  uint32_t *v67;
  char *v68;
  uint32_t *v69;
  uint32_t *v70;
  char *v71;
  uint32_t *v72;
  uint32_t *v73;
  char *v74;
  uint32_t *v75;
  uint32_t *v76;
  char *v77;
  uint32_t *v78;
  uint32_t *v79;
  char *v80;
  uint32_t *v81;
  uint32_t *v82;
  char *v83;
  uint32_t *v84;
  uint32_t *v85;
  char *v86;
  uint32_t *v87;
  uint32_t *v88;
  char *v89;
  uint32_t *v90;
  uint32_t *v91;
  char *v92;
  uint32_t *v93;
  uint32_t *v94;
  char *v95;
  uint32_t *v96;
  uint32_t *v97;
  char *v98;
  uint32_t *v99;
  uint32_t *v100;
  char *v101;
  uint32_t *v102;
  uint32_t *v103;
  char *v104;
  uint32_t *v105;
  uint32_t *v106;
  char *v107;
  uint32_t *v108;
  uint32_t *v109;
  char *v110;
  uint32_t *v111;
  uint32_t *v112;
  char *v113;
  uint32_t *v114;
  uint32_t *v115;
  char *v116;
  uint32_t *v117;
  uint32_t *v118;
  char *v119;
  uint32_t *v120;
  uint32_t *v121;
  char *v122;
  uint32_t *v123;
  uint32_t *v124;
  char *v125;
  uint32_t *v126;
  uint32_t *v127;
  char *v128;
  uint32_t *v129;
  uint32_t *v130;
  char *v131;
  uint32_t *v132;
  char *v133;
  uint32_t *v134;
  uint32_t *v135;
  char *v136;
  uint32_t *v137;
  uint32_t *v138;
  char *v139;
  uint32_t *v140;
  char *v141;
  uint32_t *v142;
  uint32_t *v143;
  char *v144;
  uint32_t *v145;
  uint32_t *v146;
  char *v147;
  typedef uint32_t *_g4_t_v149;
  typedef uint32_t *_g4_t_v150;
  typedef uint32_t *_g4_t_v151;
  typedef uint32_t *_g4_t_v152;
  typedef uint32_t *_g4_t_v153;
  typedef uint32_t *_g4_t_v154;
  typedef uint32_t *_g4_t_v155;
  typedef uint32_t *_g4_t_v156;
  typedef uint32_t *_g4_t_v157;
  typedef uint32_t *_g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef uint32_t *_g4_t_v160;
  typedef uint32_t *_g4_t_v161;
  typedef uint32_t *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef uint8_t _g4_t_v180[4];
  typedef void *_g4_t_v181;
  typedef uint8_t _g4_t_v182[4];
  typedef uint8_t _g4_t_v183[4];
  typedef void *_g4_t_v184;
  typedef uint8_t _g4_t_v185[4];
  typedef uint8_t _g4_t_v186[4];
  typedef void *_g4_t_v187;
  typedef uint8_t _g4_t_v188[4];
  typedef uint8_t _g4_t_v189[4];
  typedef void *_g4_t_v190;
  typedef uint8_t _g4_t_v191[4];
  typedef uint8_t _g4_t_v192[4];
  typedef uint8_t _g4_t_v193[4];
  typedef uint8_t _g4_t_v194[4];
  typedef void *_g4_t_v195;
  typedef uint8_t _g4_t_v196[4];
  typedef uint8_t _g4_t_v197[4];
  typedef void *_g4_t_v198;
  typedef uint8_t _g4_t_v199[4];
  typedef uint8_t _g4_t_v200[4];
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v149)) > _g4_s0 ? (12u + sizeof(_g4_t_v149)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v150)) > _g4_s1 ? (12u + sizeof(_g4_t_v150)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v151)) > _g4_s2 ? (12u + sizeof(_g4_t_v151)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v152)) > _g4_s3 ? (12u + sizeof(_g4_t_v152)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v153)) > _g4_s4 ? (12u + sizeof(_g4_t_v153)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v154)) > _g4_s5 ? (12u + sizeof(_g4_t_v154)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v155)) > _g4_s6 ? (12u + sizeof(_g4_t_v155)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v156)) > _g4_s7 ? (12u + sizeof(_g4_t_v156)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v157)) > _g4_s8 ? (12u + sizeof(_g4_t_v157)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v158)) > _g4_s9 ? (12u + sizeof(_g4_t_v158)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v159)) > _g4_s10 ? (12u + sizeof(_g4_t_v159)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v160)) > _g4_s11 ? (12u + sizeof(_g4_t_v160)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v161)) > _g4_s12 ? (12u + sizeof(_g4_t_v161)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v162)) > _g4_s13 ? (12u + sizeof(_g4_t_v162)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v163)) > _g4_s14 ? (16u + sizeof(_g4_t_v163)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v164)) > _g4_s15 ? (40u + sizeof(_g4_t_v164)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v165)) > _g4_s16 ? (44u + sizeof(_g4_t_v165)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v166)) > _g4_s17 ? (56u + sizeof(_g4_t_v166)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v167)) > _g4_s18 ? (60u + sizeof(_g4_t_v167)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v168)) > _g4_s19 ? (64u + sizeof(_g4_t_v168)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v169)) > _g4_s20 ? (68u + sizeof(_g4_t_v169)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v170)) > _g4_s21 ? (72u + sizeof(_g4_t_v170)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v171)) > _g4_s22 ? (76u + sizeof(_g4_t_v171)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v172)) > _g4_s23 ? (80u + sizeof(_g4_t_v172)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v173)) > _g4_s24 ? (84u + sizeof(_g4_t_v173)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v174)) > _g4_s25 ? (88u + sizeof(_g4_t_v174)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v175)) > _g4_s26 ? (92u + sizeof(_g4_t_v175)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v176)) > _g4_s27 ? (96u + sizeof(_g4_t_v176)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v177)) > _g4_s28 ? (100u + sizeof(_g4_t_v177)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v178)) > _g4_s29 ? (104u + sizeof(_g4_t_v178)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v179)) > _g4_s30 ? (108u + sizeof(_g4_t_v179)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v180)) > _g4_s31 ? (112u + sizeof(_g4_t_v180)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v181)) > _g4_s32 ? (116u + sizeof(_g4_t_v181)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v182)) > _g4_s33 ? (120u + sizeof(_g4_t_v182)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v183)) > _g4_s34 ? (124u + sizeof(_g4_t_v183)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v184)) > _g4_s35 ? (128u + sizeof(_g4_t_v184)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v185)) > _g4_s36 ? (132u + sizeof(_g4_t_v185)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v186)) > _g4_s37 ? (136u + sizeof(_g4_t_v186)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v187)) > _g4_s38 ? (140u + sizeof(_g4_t_v187)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v188)) > _g4_s39 ? (144u + sizeof(_g4_t_v188)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v189)) > _g4_s40 ? (148u + sizeof(_g4_t_v189)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v190)) > _g4_s41 ? (152u + sizeof(_g4_t_v190)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v191)) > _g4_s42 ? (156u + sizeof(_g4_t_v191)) : _g4_s42,
    _g4_s44 = (160u + sizeof(_g4_t_v192)) > _g4_s43 ? (160u + sizeof(_g4_t_v192)) : _g4_s43,
    _g4_s45 = (164u + sizeof(_g4_t_v193)) > _g4_s44 ? (164u + sizeof(_g4_t_v193)) : _g4_s44,
    _g4_s46 = (168u + sizeof(_g4_t_v194)) > _g4_s45 ? (168u + sizeof(_g4_t_v194)) : _g4_s45,
    _g4_s47 = (172u + sizeof(_g4_t_v195)) > _g4_s46 ? (172u + sizeof(_g4_t_v195)) : _g4_s46,
    _g4_s48 = (176u + sizeof(_g4_t_v196)) > _g4_s47 ? (176u + sizeof(_g4_t_v196)) : _g4_s47,
    _g4_s49 = (180u + sizeof(_g4_t_v197)) > _g4_s48 ? (180u + sizeof(_g4_t_v197)) : _g4_s48,
    _g4_s50 = (184u + sizeof(_g4_t_v198)) > _g4_s49 ? (184u + sizeof(_g4_t_v198)) : _g4_s49,
    _g4_s51 = (188u + sizeof(_g4_t_v199)) > _g4_s50 ? (188u + sizeof(_g4_t_v199)) : _g4_s50,
    _g4_s52 = (192u + sizeof(_g4_t_v200)) > _g4_s51 ? (192u + sizeof(_g4_t_v200)) : _g4_s51,
    _g4_s53 = (196u + sizeof(_g4_t_v201)) > _g4_s52 ? (196u + sizeof(_g4_t_v201)) : _g4_s52,
    _g4_s54 = (200u + sizeof(_g4_t_v202)) > _g4_s53 ? (200u + sizeof(_g4_t_v202)) : _g4_s53,
    _g4_s55 = (204u + sizeof(_g4_t_v203)) > _g4_s54 ? (204u + sizeof(_g4_t_v203)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 12u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 12u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 12u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 12u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 12u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 12u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 12u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 12u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 12u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 12u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 12u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 12u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 12u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 12u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 16u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 40u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 44u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 60u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 64u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 68u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 72u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 76u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 80u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 84u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 88u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 92u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 96u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 100u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 104u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 108u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 112u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 116u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 120u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 124u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 128u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 132u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 136u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 140u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 144u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 148u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 152u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 156u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 160u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 164u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 168u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 172u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 176u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 180u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 184u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 188u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 192u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 196u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 200u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 204u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v179), (char *)&unk_1B15112, (int)(uintptr_t)(&v166));
  v1 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v3 = v1;
  *v1 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v4 = "NonEmptyString";
  else
    v4 = "type";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v1 + 2), v4, (int)(uintptr_t)(&v166) + 1);
  v3[1] = 168;
  v3[3] = 0;
  *v3 = (uint32_t)(uintptr_t)(&off_204A188);
  sub_A7A910(a1, "type", v3);
  v5 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v6 = v5;
  *v5 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v7 = "NonEmptyString";
  else
    v7 = "scriptLOD";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5 + 2), v7, (int)(uintptr_t)(&v166) + 2);
  v6[1] = 56;
  *v6 = (uint32_t)(uintptr_t)(&off_204A188);
  v6[3] = 0;
  sub_A7A910(a1, "scriptLOD", v6);
  v181 = &dword_213B814;
  g4_std::string::construct_copy(v182, &v181);
  v149 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v183, v182);
    v8 = v149;
    v9 = "id";
  }
  else
  {
    g4_std::string::construct_copy(v183, v182);
    v8 = v149;
    v9 = "NonEmptyString";
  }
  *v149 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v150 = v8;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8 + 2), v9, (int)(uintptr_t)(&v166) + 3);
  *v150 = (uint32_t)(uintptr_t)(&off_204A488);
  v150[1] = 172;
  g4_std::string::construct_copy(v150 + 3, v183);
  g4_std::string::Destroy(v183);
  *v150 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v150 + 4, v182);
  sub_A7A910(a1, "id", v150);
  g4_std::string::Destroy(v182);
  g4_std::string::Destroy(&v181);
  v10 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v11 = v10;
  *v10 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v12 = "NonEmptyString";
  else
    v12 = "flags";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10 + 2), v12, (int)(uintptr_t)(&v167));
  v11[1] = 176;
  v11[3] = 0;
  *v11 = (uint32_t)(uintptr_t)(&off_204A3C8);
  sub_A7A910(a1, "flags", v11);
  v13 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v14 = v13;
  *v13 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v15 = "NonEmptyString";
  else
    v15 = "forceUnloadOnMissionEnd";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13 + 2), v15, (int)(uintptr_t)(&v167) + 1);
  v14[1] = 181;
  *((uint8_t *)v14 + 12) = 0;
  *v14 = (uint32_t)(uintptr_t)(&off_204A448);
  sub_A7A910(a1, "forceUnloadOnMissionEnd", v14);
  v16 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v17 = v16;
  *v16 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v18 = "NonEmptyString";
  else
    v18 = "isAutoSpawning";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16 + 2), v18, (int)(uintptr_t)(&v167) + 2);
  v17[1] = 182;
  *v17 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v17 + 12) = 0;
  sub_A7A910(a1, "isAutoSpawning", v17);
  v19 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v20 = v19;
  *v19 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v21 = "NonEmptyString";
  else
    v21 = "frameActions";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19 + 2), v21, (int)(uintptr_t)(&v167) + 3);
  v20[1] = 184;
  *v20 = (uint32_t)(uintptr_t)(&off_204A188);
  v20[3] = 0;
  sub_A7A910(a1, "frameActions", v20);
  v22 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v23 = v22;
  *v22 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v24 = "NonEmptyString";
  else
    v24 = "isVehicle";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22 + 2), v24, (int)(uintptr_t)(&v168));
  v23[1] = 188;
  *v23 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v23 + 12) = 0;
  sub_A7A910(a1, "isVehicle", v23);
  v25 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v26 = v25;
  *v25 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v27 = "NonEmptyString";
  else
    v27 = "isCop";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25 + 2), v27, (int)(uintptr_t)(&v168) + 1);
  v26[1] = 189;
  *v26 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v26 + 12) = 0;
  sub_A7A910(a1, "isCop", v26);
  v184 = &dword_213B814;
  g4_std::string::construct_copy(v185, &v184);
  v151 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v186, v185);
    v28 = v151;
    v29 = "lodDesc";
  }
  else
  {
    g4_std::string::construct_copy(v186, v185);
    v28 = v151;
    v29 = "NonEmptyString";
  }
  *v151 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v152 = v28;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28 + 2), v29, (int)(uintptr_t)(&v168) + 2);
  *v152 = (uint32_t)(uintptr_t)(&off_204A488);
  v152[1] = 220;
  g4_std::string::construct_copy(v152 + 3, v186);
  g4_std::string::Destroy(v186);
  *v152 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v152 + 4, v185);
  sub_A7A910(a1, "lodDesc", v152);
  g4_std::string::Destroy(v185);
  g4_std::string::Destroy(&v184);
  v30 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v31 = v30;
  *v30 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v32 = "NonEmptyString";
  else
    v32 = "mapIcon";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30 + 2), v32, (int)(uintptr_t)(&v168) + 3);
  v31[1] = 192;
  *v31 = (uint32_t)(uintptr_t)(&off_204A188);
  v31[3] = 0;
  sub_A7A910(a1, "mapIcon", v31);
  v33 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v34 = v33;
  *v33 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v35 = "NonEmptyString";
  else
    v35 = "mapIconCategory";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33 + 2), v35, (int)(uintptr_t)(&v169));
  v34[1] = 196;
  *v34 = (uint32_t)(uintptr_t)(&off_204A188);
  v34[3] = 0;
  sub_A7A910(a1, "mapIconCategory", v34);
  v36 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v37 = v36;
  *v36 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v38 = "NonEmptyString";
  else
    v38 = "mapFlags";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36 + 2), v38, (int)(uintptr_t)(&v169) + 1);
  v37[1] = 200;
  *v37 = (uint32_t)(uintptr_t)(&off_204A3C8);
  v37[3] = 0;
  sub_A7A910(a1, "mapFlags", v37);
  v39 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v40 = v39;
  *v39 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v41 = "NonEmptyString";
  else
    v41 = "hudDirectionMode";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39 + 2), v41, (int)(uintptr_t)(&v169) + 2);
  v40[1] = 204;
  *v40 = (uint32_t)(uintptr_t)(&off_204A188);
  v40[3] = 0;
  sub_A7A910(a1, "hudDirectionMode", v40);
  v187 = &dword_213B814;
  g4_std::string::construct_copy(v188, &v187);
  v153 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v189, v188);
    v42 = v153;
    v43 = "followerIcon";
  }
  else
  {
    g4_std::string::construct_copy(v189, v188);
    v42 = v153;
    v43 = "NonEmptyString";
  }
  *v153 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v154 = v42;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v42 + 2), v43, (int)(uintptr_t)(&v169) + 3);
  *v154 = (uint32_t)(uintptr_t)(&off_204A488);
  v154[1] = 208;
  g4_std::string::construct_copy(v154 + 3, v189);
  g4_std::string::Destroy(v189);
  *v154 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v154 + 4, v188);
  sub_A7A910(a1, "followerIcon", v154);
  g4_std::string::Destroy(v188);
  g4_std::string::Destroy(&v187);
  v44 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v45 = v44;
  *v44 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v46 = "NonEmptyString";
  else
    v46 = "hudOffsetMin";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v44 + 2), v46, (int)(uintptr_t)(&v170));
  v45[1] = 212;
  *v45 = (uint32_t)(uintptr_t)(&off_204A188);
  v45[3] = 0;
  sub_A7A910(a1, "hudOffsetMin", v45);
  v47 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v48 = v47;
  *v47 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v49 = "NonEmptyString";
  else
    v49 = "hudOffsetMax";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v47 + 2), v49, (int)(uintptr_t)(&v170) + 1);
  v48[1] = 216;
  *v48 = (uint32_t)(uintptr_t)(&off_204A188);
  v48[3] = 0;
  sub_A7A910(a1, "hudOffsetMax", v48);
  v190 = &dword_213B814;
  g4_std::string::construct_copy(v191, &v190);
  v155 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v192, v191);
    v50 = v155;
    v51 = "bdae";
  }
  else
  {
    g4_std::string::construct_copy(v192, v191);
    v50 = v155;
    v51 = "NonEmptyString";
  }
  *v155 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v156 = v50;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v50 + 2), v51, (int)(uintptr_t)(&v170) + 2);
  *v156 = (uint32_t)(uintptr_t)(&off_204A488);
  v156[1] = 224;
  g4_std::string::construct_copy(v156 + 3, v192);
  g4_std::string::Destroy(v192);
  *v156 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v156 + 4, v191);
  sub_A7A910(a1, "bdae", v156);
  g4_std::string::Destroy(v191);
  g4_std::string::Destroy(&v190);
  g4_std::string::construct_copy(v180, &v179);
  g4_std::string::construct_copy(v193, v180);
  v157 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v194, v193);
    v52 = v157;
    v53 = "bdaeLowRes";
  }
  else
  {
    g4_std::string::construct_copy(v194, v193);
    v52 = v157;
    v53 = "NonEmptyString";
  }
  *v157 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v158 = v52;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v52 + 2), v53, (int)(uintptr_t)(&v170) + 3);
  *v158 = (uint32_t)(uintptr_t)(&off_204A488);
  v158[1] = 228;
  g4_std::string::construct_copy(v158 + 3, v194);
  g4_std::string::Destroy(v194);
  *v158 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v158 + 4, v193);
  sub_A7A910(a1, "bdaeLowRes", v158);
  g4_std::string::Destroy(v193);
  g4_std::string::Destroy(v180);
  v54 = (uint32_t *)opNew(0x18u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v55 = v54;
  *v54 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v56 = "NonEmptyString";
  else
    v56 = "bdae_scale";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v54 + 2), v56, (int)(uintptr_t)(&v171));
  v55[1] = 232;
  v55[3] = 1065353216;
  v55[4] = 1065353216;
  v55[5] = 1065353216;
  *v55 = (uint32_t)(uintptr_t)(&off_204B1E8);
  sub_A7A910(a1, "bdae_scale", v55);
  v163 = v201;
  v164 = v202;
  v165 = v203;
  v57 = (uint32_t *)opNew(0x18u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v58 = v57;
  *v57 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v59 = "NonEmptyString";
  else
    v59 = "position";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v57 + 2), v59, (int)(uintptr_t)(&v171) + 1);
  v58[1] = 244;
  v58[3] = v163;
  *v58 = (uint32_t)(uintptr_t)(&off_205A0E8);
  v58[4] = v164;
  v58[5] = v165;
  sub_A7A910(a1, "position", v58);
  v60 = (uint32_t *)opNew(0x1Cu);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v61 = v60;
  *v60 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v62 = "NonEmptyString";
  else
    v62 = "rotation";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v60 + 2), v62, (int)(uintptr_t)(&v171) + 2);
  v61[1] = 256;
  v61[3] = 0;
  v61[4] = 0;
  v61[5] = 0;
  v61[6] = 1065353216;
  *v61 = (uint32_t)(uintptr_t)(&off_2059F48);
  sub_A7A910(a1, "rotation", v61);
  v63 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v64 = v63;
  *v63 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v65 = "NonEmptyString";
  else
    v65 = "highlight";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v63 + 2), v65, (int)(uintptr_t)(&v171) + 3);
  v64[1] = 272;
  *v64 = (uint32_t)(uintptr_t)(&off_204A188);
  v64[3] = -1;
  sub_A7A910(a1, "highlight", v64);
  v66 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v67 = v66;
  *v66 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v68 = "NonEmptyString";
  else
    v68 = "isTargetable";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v66 + 2), v68, (int)(uintptr_t)(&v172));
  v67[1] = 277;
  *v67 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v67 + 12) = 0;
  sub_A7A910(a1, "isTargetable", v67);
  v69 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v70 = v69;
  *v69 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v71 = "NonEmptyString";
  else
    v71 = "collisionsEnabled";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v69 + 2), v71, (int)(uintptr_t)(&v172) + 1);
  v70[1] = 278;
  *v70 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v70 + 12) = 0;
  sub_A7A910(a1, "collisionsEnabled", v70);
  v72 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v73 = v72;
  *v72 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v74 = "NonEmptyString";
  else
    v74 = "maxHealth";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v72 + 2), v74, (int)(uintptr_t)(&v172) + 2);
  v73[1] = 296;
  *v73 = (uint32_t)(uintptr_t)(&off_204A188);
  v73[3] = 100;
  sub_A7A910(a1, "maxHealth", v73);
  v75 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v76 = v75;
  *v75 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v77 = "NonEmptyString";
  else
    v77 = "snapToFloor";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v75 + 2), v77, (int)(uintptr_t)(&v172) + 3);
  v76[1] = 300;
  *v76 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v76 + 12) = 1;
  sub_A7A910(a1, "snapToFloor", v76);
  v78 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v79 = v78;
  *v78 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v80 = "NonEmptyString";
  else
    v80 = "autoShowHighlight";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v78 + 2), v80, (int)(uintptr_t)(&v173));
  v79[1] = 276;
  *v79 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v79 + 12) = 0;
  sub_A7A910(a1, "autoShowHighlight", v79);
  v81 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v82 = v81;
  *v81 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v83 = "NonEmptyString";
  else
    v83 = "excludedDamageFilter";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v81 + 2), v83, (int)(uintptr_t)(&v173) + 1);
  v82[1] = 320;
  *v82 = (uint32_t)(uintptr_t)(&off_204A188);
  v82[3] = 0;
  sub_A7A910(a1, "excludedDamageFilter", v82);
  v84 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v85 = v84;
  *v84 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v86 = "NonEmptyString";
  else
    v86 = "invulnerable";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v84 + 2), v86, (int)(uintptr_t)(&v173) + 2);
  v85[1] = 190;
  *v85 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v85 + 12) = 0;
  sub_A7A910(a1, "invulnerable", v85);
  v87 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v88 = v87;
  *v87 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v89 = "NonEmptyString";
  else
    v89 = "water_volumeFactor";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v87 + 2), v89, (int)(uintptr_t)(&v173) + 3);
  v88[1] = 324;
  v88[3] = 1065353216;
  *v88 = (uint32_t)(uintptr_t)(&off_204A308);
  sub_A7A910(a1, "water_volumeFactor", v88);
  v90 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v91 = v90;
  *v90 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v92 = "NonEmptyString";
  else
    v92 = "water_drag";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v90 + 2), v92, (int)(uintptr_t)(&v174));
  v91[1] = 332;
  *v91 = (uint32_t)(uintptr_t)(&off_204A308);
  v91[3] = 1142292480;
  sub_A7A910(a1, "water_drag", v91);
  v93 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v94 = v93;
  *v93 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v95 = "NonEmptyString";
  else
    v95 = "water_density";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v93 + 2), v95, (int)(uintptr_t)(&v174) + 1);
  v94[1] = 328;
  *v94 = (uint32_t)(uintptr_t)(&off_204A308);
  v94[3] = 1148846080;
  sub_A7A910(a1, "water_density", v94);
  v96 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v97 = v96;
  *v96 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v98 = "NonEmptyString";
  else
    v98 = "water_enableDrag";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v96 + 2), v98, (int)(uintptr_t)(&v174) + 2);
  v97[1] = 341;
  *v97 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v97 + 12) = 0;
  sub_A7A910(a1, "water_enableDrag", v97);
  v99 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v100 = v99;
  *v99 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v101 = "NonEmptyString";
  else
    v101 = "water_enableBuoyancy";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v99 + 2), v101, (int)(uintptr_t)(&v174) + 3);
  v100[1] = 340;
  *v100 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v100 + 12) = 0;
  sub_A7A910(a1, "water_enableBuoyancy", v100);
  v102 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v103 = v102;
  *v102 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v104 = "NonEmptyString";
  else
    v104 = "water_deepWaterDepth";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v102 + 2), v104, (int)(uintptr_t)(&v175));
  v103[1] = 344;
  *v103 = (uint32_t)(uintptr_t)(&off_204A308);
  v103[3] = 0;
  sub_A7A910(a1, "water_deepWaterDepth", v103);
  v105 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v106 = v105;
  *v105 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v107 = "NonEmptyString";
  else
    v107 = "water_friction";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v105 + 2), v107, (int)(uintptr_t)(&v175) + 1);
  v106[1] = 336;
  *v106 = (uint32_t)(uintptr_t)(&off_204A308);
  v106[3] = 1065353216;
  sub_A7A910(a1, "water_friction", v106);
  v108 = (uint32_t *)opNew(0x18u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v109 = v108;
  *v108 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v110 = "NonEmptyString";
  else
    v110 = "destroyedColorOffset";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v108 + 2), v110, (int)(uintptr_t)(&v175) + 2);
  v109[1] = 352;
  *v109 = (uint32_t)(uintptr_t)(&off_204B1E8);
  v109[3] = 0;
  v109[4] = 0;
  v109[5] = 0;
  sub_A7A910(a1, "destroyedColorOffset", v109);
  v111 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v112 = v111;
  *v111 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v113 = "NonEmptyString";
  else
    v113 = "LootTableId";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v111 + 2), v113, (int)(uintptr_t)(&v175) + 3);
  v112[1] = 364;
  *v112 = (uint32_t)(uintptr_t)(&off_204A188);
  v112[3] = 0;
  sub_A7A910(a1, "LootTableId", v112);
  v114 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v115 = v114;
  *v114 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v116 = "NonEmptyString";
  else
    v116 = "lockScale";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v114 + 2), v116, (int)(uintptr_t)(&v176));
  v115[1] = 368;
  *v115 = (uint32_t)(uintptr_t)(&off_204A308);
  v115[3] = 0;
  sub_A7A910(a1, "lockScale", v115);
  v117 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v118 = v117;
  *v117 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v119 = "NonEmptyString";
  else
    v119 = "lockScaleMax";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v117 + 2), v119, (int)(uintptr_t)(&v176) + 1);
  v118[1] = 372;
  *v118 = (uint32_t)(uintptr_t)(&off_204A308);
  v118[3] = 0;
  sub_A7A910(a1, "lockScaleMax", v118);
  v120 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v121 = v120;
  *v120 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v122 = "NonEmptyString";
  else
    v122 = "lockOffset";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v120 + 2), v122, (int)(uintptr_t)(&v176) + 2);
  v121[1] = 376;
  *v121 = (uint32_t)(uintptr_t)(&off_204A308);
  v121[3] = 0;
  sub_A7A910(a1, "lockOffset", v121);
  v123 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v124 = v123;
  *v123 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v125 = "NonEmptyString";
  else
    v125 = "displayWithLowRes";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v123 + 2), v125, (int)(uintptr_t)(&v176) + 3);
  v124[1] = 380;
  *v124 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v124 + 12) = 0;
  sub_A7A910(a1, "displayWithLowRes", v124);
  v126 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v127 = v126;
  *v126 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v128 = "NonEmptyString";
  else
    v128 = "updateWithLowRes";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v126 + 2), v128, (int)(uintptr_t)(&v177));
  v127[1] = 381;
  *v127 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v127 + 12) = 0;
  sub_A7A910(a1, "updateWithLowRes", v127);
  v129 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v130 = v129;
  *v129 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v131 = "NonEmptyString";
  else
    v131 = "materialSetID";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v129 + 2), v131, (int)(uintptr_t)(&v177) + 1);
  v130[1] = 348;
  *v130 = (uint32_t)(uintptr_t)(&off_204A188);
  v130[3] = 0;
  sub_A7A910(a1, "materialSetID", v130);
  v195 = &dword_213B814;
  g4_std::string::construct_copy(v196, &v195);
  v159 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v197, v196);
    v132 = v159;
    v133 = "snd_ambient3dLabel";
  }
  else
  {
    g4_std::string::construct_copy(v197, v196);
    v132 = v159;
    v133 = "NonEmptyString";
  }
  *v159 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v160 = v132;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v132 + 2), v133, (int)(uintptr_t)(&v177) + 2);
  *v160 = (uint32_t)(uintptr_t)(&off_204A488);
  v160[1] = 136;
  g4_std::string::construct_copy(v160 + 3, v197);
  g4_std::string::Destroy(v197);
  *v160 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v160 + 4, v196);
  sub_A7A910(a1, "snd_ambient3dLabel", v160);
  g4_std::string::Destroy(v196);
  g4_std::string::Destroy(&v195);
  v134 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v135 = v134;
  *v134 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v136 = "NonEmptyString";
  else
    v136 = "mapZoneOid";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v134 + 2), v136, (int)(uintptr_t)(&v177) + 3);
  v135[1] = 384;
  *v135 = (uint32_t)(uintptr_t)(&off_204A188);
  v135[3] = -1;
  sub_A7A910(a1, "mapZoneOid", v135);
  v137 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v138 = v137;
  *v137 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v139 = "NonEmptyString";
  else
    v139 = "golden";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v137 + 2), v139, (int)(uintptr_t)(&v178));
  v138[1] = 388;
  *v138 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v138 + 12) = 0;
  sub_A7A910(a1, "golden", v138);
  v198 = &dword_213B814;
  g4_std::string::construct_copy(v199, &v198);
  v161 = (uint32_t *)opNew(0x14u);
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    g4_std::string::construct_copy(v200, v199);
    v140 = v161;
    v141 = "diffuseTexture";
  }
  else
  {
    g4_std::string::construct_copy(v200, v199);
    v140 = v161;
    v141 = "NonEmptyString";
  }
  *v161 = (uint32_t)(uintptr_t)(&off_204A1C8);
  v162 = v140;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v140 + 2), v141, (int)(uintptr_t)(&v178) + 1);
  *v162 = (uint32_t)(uintptr_t)(&off_204A488);
  v162[1] = 392;
  g4_std::string::construct_copy(v162 + 3, v200);
  g4_std::string::Destroy(v200);
  *v162 = (uint32_t)(uintptr_t)(&off_204A4C8);
  g4_std::string::construct_copy(v162 + 4, v199);
  sub_A7A910(a1, "diffuseTexture", v162);
  g4_std::string::Destroy(v199);
  g4_std::string::Destroy(&v198);
  v142 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v143 = v142;
  *v142 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v144 = "NonEmptyString";
  else
    v144 = "OcclusionIntertia";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v142 + 2), v144, (int)(uintptr_t)(&v178) + 2);
  v143[1] = 68;
  *v143 = (uint32_t)(uintptr_t)(&off_204A308);
  v143[3] = 1082130432;
  sub_A7A910(a1, "OcclusionIntertia", v143);
  v145 = (uint32_t *)opNew(0x10u);
  v2 = *(uint8_t *)(a1 + 4) == 0;
  v146 = v145;
  *v145 = (uint32_t)(uintptr_t)(&off_204A1C8);
  if ( v2 )
    v147 = "NonEmptyString";
  else
    v147 = "ArrowsStuckIn";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v146 + 2), v147, (int)(uintptr_t)(&v178) + 3);
  v146[1] = 396;
  *v146 = (uint32_t)(uintptr_t)(&off_204A448);
  *((uint8_t *)v146 + 12) = 1;
  sub_A7A910(a1, "ArrowsStuckIn", v146);
  return ((g4_std::string::Destroy(&v179)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C14BB0  (binary VA: 0xc14bb0)
// Original: sub_C14BB0
// ----------------------------------------------------------------------------
unsigned int sub_C14BB0(int a1, char a2, int a3)
{
  unsigned int result;
  unsigned int v5;
  char TechniqueID;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;
  glitch::video::CMaterial::Self *v8;
  char v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  glitch::video::CMaterial::Self *v11;
  char v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::video::CMaterial::Self *v14;
  char v15;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v16;
  glitch::video::CMaterial::Self *v17;
  char v18;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v19;
  glitch::video::CMaterial::Self *v20;
  char v21;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  glitch::video::CMaterial::Self *v23;
  bool v24;
  char v25;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v26;
  glitch::video::CMaterial::Self *v27;
  char v28;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v29;
  glitch::video::CMaterial::Self *v30;
  char v31;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v32;
  glitch::video::CMaterial::Self *v33;
  char v34;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v35;
  glitch::video::CMaterial::Self *v36;
  char v37;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v38;
  glitch::video::CMaterial::Self *v39;
  char v40;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v41;
  char v42;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v43;
  char v44;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v45;
  char v46;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v47;
  char v48;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v49;
  char v50;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v51;
  char v52;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v53;
  char v54;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v55;
  char v56;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v57;
  char v58;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v59;
  char v60;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v61;
  char v62;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v63;
  char v64;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v65;
  void *v66;
  char v67;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v68;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v69;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v70;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v71;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v72;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v73;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v74;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v75;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v76;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v77;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v78;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v79;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v80;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v81;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v82;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v83;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v84;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v85;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v86;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v87;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v88;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v89;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v90;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v91;
  typedef bool _g4_t_v92;
  typedef bool _g4_t_v93;
  typedef bool _g4_t_v94;
  typedef bool _g4_t_v95;
  typedef bool _g4_t_v96;
  typedef bool _g4_t_v97;
  typedef bool _g4_t_v98;
  typedef bool _g4_t_v99;
  typedef bool _g4_t_v100;
  typedef bool _g4_t_v101;
  typedef bool _g4_t_v102;
  typedef bool _g4_t_v103;
  typedef bool _g4_t_v104;
  typedef unsigned int _g4_t_v105;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_obj;
  typedef char _g4_t_obja;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objb;
  typedef char _g4_t_objc;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objd;
  typedef char _g4_t_obje;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objf;
  typedef char _g4_t_objg;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objh;
  typedef char _g4_t_obji;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objj;
  typedef char _g4_t_objk;
  typedef glitch::video::CMaterial::Self *_g4_t_objm;
  typedef glitch::video::CMaterial::Self *_g4_t_objl;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objn;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objo;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objp;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objq;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objr;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objs;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objt;
  typedef char _g4_t_obju;
  typedef char _g4_t_objv;
  typedef char _g4_t_objw;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objx;
  typedef char _g4_t_objy;
  typedef char _g4_t_objz;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objba;
  typedef char _g4_t_objbb;
  typedef char _g4_t_objbc;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbd;
  typedef char _g4_t_objbe;
  typedef char _g4_t_objbf;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbg;
  typedef char _g4_t_objbh;
  typedef char _g4_t_objbi;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbj;
  typedef char _g4_t_objbk;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbl;
  typedef char _g4_t_objbm;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbn;
  typedef char _g4_t_objbo;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbp;
  typedef char _g4_t_objbq;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbr;
  typedef char _g4_t_objbs;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbt;
  typedef char _g4_t_objbu;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_objbv;
  typedef char _g4_t_objbw;
  typedef char _g4_t_v156;
  typedef char _g4_t_v158;
  typedef glitch::video::CMaterial::Self *_g4_t_v159;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v160;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v161;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v162;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v163;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v164;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v165;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v166;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v167;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v168;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v169;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v170;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v171;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v172;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v173;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v174;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v175;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v176;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v177;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v178;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v179;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v180;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v181;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v182;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v183[7];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v68)) > _g4_s0 ? (8u + sizeof(_g4_t_v68)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v69)) > _g4_s1 ? (8u + sizeof(_g4_t_v69)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v70)) > _g4_s2 ? (8u + sizeof(_g4_t_v70)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v71)) > _g4_s3 ? (8u + sizeof(_g4_t_v71)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v72)) > _g4_s4 ? (8u + sizeof(_g4_t_v72)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v73)) > _g4_s5 ? (8u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v74)) > _g4_s6 ? (8u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v75)) > _g4_s7 ? (8u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v76)) > _g4_s8 ? (8u + sizeof(_g4_t_v76)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v77)) > _g4_s9 ? (8u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v78)) > _g4_s10 ? (8u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v79)) > _g4_s11 ? (8u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v80)) > _g4_s12 ? (8u + sizeof(_g4_t_v80)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v81)) > _g4_s13 ? (8u + sizeof(_g4_t_v81)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v82)) > _g4_s14 ? (8u + sizeof(_g4_t_v82)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v83)) > _g4_s15 ? (8u + sizeof(_g4_t_v83)) : _g4_s15,
    _g4_s17 = (8u + sizeof(_g4_t_v84)) > _g4_s16 ? (8u + sizeof(_g4_t_v84)) : _g4_s16,
    _g4_s18 = (8u + sizeof(_g4_t_v85)) > _g4_s17 ? (8u + sizeof(_g4_t_v85)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v86)) > _g4_s18 ? (8u + sizeof(_g4_t_v86)) : _g4_s18,
    _g4_s20 = (8u + sizeof(_g4_t_v87)) > _g4_s19 ? (8u + sizeof(_g4_t_v87)) : _g4_s19,
    _g4_s21 = (8u + sizeof(_g4_t_v88)) > _g4_s20 ? (8u + sizeof(_g4_t_v88)) : _g4_s20,
    _g4_s22 = (8u + sizeof(_g4_t_v89)) > _g4_s21 ? (8u + sizeof(_g4_t_v89)) : _g4_s21,
    _g4_s23 = (8u + sizeof(_g4_t_v90)) > _g4_s22 ? (8u + sizeof(_g4_t_v90)) : _g4_s22,
    _g4_s24 = (8u + sizeof(_g4_t_v91)) > _g4_s23 ? (8u + sizeof(_g4_t_v91)) : _g4_s23,
    _g4_s25 = (12u + sizeof(_g4_t_v92)) > _g4_s24 ? (12u + sizeof(_g4_t_v92)) : _g4_s24,
    _g4_s26 = (12u + sizeof(_g4_t_v93)) > _g4_s25 ? (12u + sizeof(_g4_t_v93)) : _g4_s25,
    _g4_s27 = (12u + sizeof(_g4_t_v94)) > _g4_s26 ? (12u + sizeof(_g4_t_v94)) : _g4_s26,
    _g4_s28 = (12u + sizeof(_g4_t_v95)) > _g4_s27 ? (12u + sizeof(_g4_t_v95)) : _g4_s27,
    _g4_s29 = (12u + sizeof(_g4_t_v96)) > _g4_s28 ? (12u + sizeof(_g4_t_v96)) : _g4_s28,
    _g4_s30 = (12u + sizeof(_g4_t_v97)) > _g4_s29 ? (12u + sizeof(_g4_t_v97)) : _g4_s29,
    _g4_s31 = (12u + sizeof(_g4_t_v98)) > _g4_s30 ? (12u + sizeof(_g4_t_v98)) : _g4_s30,
    _g4_s32 = (12u + sizeof(_g4_t_v99)) > _g4_s31 ? (12u + sizeof(_g4_t_v99)) : _g4_s31,
    _g4_s33 = (12u + sizeof(_g4_t_v100)) > _g4_s32 ? (12u + sizeof(_g4_t_v100)) : _g4_s32,
    _g4_s34 = (12u + sizeof(_g4_t_v101)) > _g4_s33 ? (12u + sizeof(_g4_t_v101)) : _g4_s33,
    _g4_s35 = (12u + sizeof(_g4_t_v102)) > _g4_s34 ? (12u + sizeof(_g4_t_v102)) : _g4_s34,
    _g4_s36 = (12u + sizeof(_g4_t_v103)) > _g4_s35 ? (12u + sizeof(_g4_t_v103)) : _g4_s35,
    _g4_s37 = (12u + sizeof(_g4_t_v104)) > _g4_s36 ? (12u + sizeof(_g4_t_v104)) : _g4_s36,
    _g4_s38 = (16u + sizeof(_g4_t_v105)) > _g4_s37 ? (16u + sizeof(_g4_t_v105)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_obj)) > _g4_s38 ? (32u + sizeof(_g4_t_obj)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_obja)) > _g4_s39 ? (32u + sizeof(_g4_t_obja)) : _g4_s39,
    _g4_s41 = (32u + sizeof(_g4_t_objb)) > _g4_s40 ? (32u + sizeof(_g4_t_objb)) : _g4_s40,
    _g4_s42 = (32u + sizeof(_g4_t_objc)) > _g4_s41 ? (32u + sizeof(_g4_t_objc)) : _g4_s41,
    _g4_s43 = (32u + sizeof(_g4_t_objd)) > _g4_s42 ? (32u + sizeof(_g4_t_objd)) : _g4_s42,
    _g4_s44 = (32u + sizeof(_g4_t_obje)) > _g4_s43 ? (32u + sizeof(_g4_t_obje)) : _g4_s43,
    _g4_s45 = (32u + sizeof(_g4_t_objf)) > _g4_s44 ? (32u + sizeof(_g4_t_objf)) : _g4_s44,
    _g4_s46 = (32u + sizeof(_g4_t_objg)) > _g4_s45 ? (32u + sizeof(_g4_t_objg)) : _g4_s45,
    _g4_s47 = (32u + sizeof(_g4_t_objh)) > _g4_s46 ? (32u + sizeof(_g4_t_objh)) : _g4_s46,
    _g4_s48 = (32u + sizeof(_g4_t_obji)) > _g4_s47 ? (32u + sizeof(_g4_t_obji)) : _g4_s47,
    _g4_s49 = (32u + sizeof(_g4_t_objj)) > _g4_s48 ? (32u + sizeof(_g4_t_objj)) : _g4_s48,
    _g4_s50 = (32u + sizeof(_g4_t_objk)) > _g4_s49 ? (32u + sizeof(_g4_t_objk)) : _g4_s49,
    _g4_s51 = (32u + sizeof(_g4_t_objm)) > _g4_s50 ? (32u + sizeof(_g4_t_objm)) : _g4_s50,
    _g4_s52 = (32u + sizeof(_g4_t_objl)) > _g4_s51 ? (32u + sizeof(_g4_t_objl)) : _g4_s51,
    _g4_s53 = (32u + sizeof(_g4_t_objn)) > _g4_s52 ? (32u + sizeof(_g4_t_objn)) : _g4_s52,
    _g4_s54 = (32u + sizeof(_g4_t_objo)) > _g4_s53 ? (32u + sizeof(_g4_t_objo)) : _g4_s53,
    _g4_s55 = (32u + sizeof(_g4_t_objp)) > _g4_s54 ? (32u + sizeof(_g4_t_objp)) : _g4_s54,
    _g4_s56 = (32u + sizeof(_g4_t_objq)) > _g4_s55 ? (32u + sizeof(_g4_t_objq)) : _g4_s55,
    _g4_s57 = (32u + sizeof(_g4_t_objr)) > _g4_s56 ? (32u + sizeof(_g4_t_objr)) : _g4_s56,
    _g4_s58 = (32u + sizeof(_g4_t_objs)) > _g4_s57 ? (32u + sizeof(_g4_t_objs)) : _g4_s57,
    _g4_s59 = (32u + sizeof(_g4_t_objt)) > _g4_s58 ? (32u + sizeof(_g4_t_objt)) : _g4_s58,
    _g4_s60 = (32u + sizeof(_g4_t_obju)) > _g4_s59 ? (32u + sizeof(_g4_t_obju)) : _g4_s59,
    _g4_s61 = (32u + sizeof(_g4_t_objv)) > _g4_s60 ? (32u + sizeof(_g4_t_objv)) : _g4_s60,
    _g4_s62 = (32u + sizeof(_g4_t_objw)) > _g4_s61 ? (32u + sizeof(_g4_t_objw)) : _g4_s61,
    _g4_s63 = (32u + sizeof(_g4_t_objx)) > _g4_s62 ? (32u + sizeof(_g4_t_objx)) : _g4_s62,
    _g4_s64 = (32u + sizeof(_g4_t_objy)) > _g4_s63 ? (32u + sizeof(_g4_t_objy)) : _g4_s63,
    _g4_s65 = (32u + sizeof(_g4_t_objz)) > _g4_s64 ? (32u + sizeof(_g4_t_objz)) : _g4_s64,
    _g4_s66 = (32u + sizeof(_g4_t_objba)) > _g4_s65 ? (32u + sizeof(_g4_t_objba)) : _g4_s65,
    _g4_s67 = (32u + sizeof(_g4_t_objbb)) > _g4_s66 ? (32u + sizeof(_g4_t_objbb)) : _g4_s66,
    _g4_s68 = (32u + sizeof(_g4_t_objbc)) > _g4_s67 ? (32u + sizeof(_g4_t_objbc)) : _g4_s67,
    _g4_s69 = (32u + sizeof(_g4_t_objbd)) > _g4_s68 ? (32u + sizeof(_g4_t_objbd)) : _g4_s68,
    _g4_s70 = (32u + sizeof(_g4_t_objbe)) > _g4_s69 ? (32u + sizeof(_g4_t_objbe)) : _g4_s69,
    _g4_s71 = (32u + sizeof(_g4_t_objbf)) > _g4_s70 ? (32u + sizeof(_g4_t_objbf)) : _g4_s70,
    _g4_s72 = (32u + sizeof(_g4_t_objbg)) > _g4_s71 ? (32u + sizeof(_g4_t_objbg)) : _g4_s71,
    _g4_s73 = (32u + sizeof(_g4_t_objbh)) > _g4_s72 ? (32u + sizeof(_g4_t_objbh)) : _g4_s72,
    _g4_s74 = (32u + sizeof(_g4_t_objbi)) > _g4_s73 ? (32u + sizeof(_g4_t_objbi)) : _g4_s73,
    _g4_s75 = (32u + sizeof(_g4_t_objbj)) > _g4_s74 ? (32u + sizeof(_g4_t_objbj)) : _g4_s74,
    _g4_s76 = (32u + sizeof(_g4_t_objbk)) > _g4_s75 ? (32u + sizeof(_g4_t_objbk)) : _g4_s75,
    _g4_s77 = (32u + sizeof(_g4_t_objbl)) > _g4_s76 ? (32u + sizeof(_g4_t_objbl)) : _g4_s76,
    _g4_s78 = (32u + sizeof(_g4_t_objbm)) > _g4_s77 ? (32u + sizeof(_g4_t_objbm)) : _g4_s77,
    _g4_s79 = (32u + sizeof(_g4_t_objbn)) > _g4_s78 ? (32u + sizeof(_g4_t_objbn)) : _g4_s78,
    _g4_s80 = (32u + sizeof(_g4_t_objbo)) > _g4_s79 ? (32u + sizeof(_g4_t_objbo)) : _g4_s79,
    _g4_s81 = (32u + sizeof(_g4_t_objbp)) > _g4_s80 ? (32u + sizeof(_g4_t_objbp)) : _g4_s80,
    _g4_s82 = (32u + sizeof(_g4_t_objbq)) > _g4_s81 ? (32u + sizeof(_g4_t_objbq)) : _g4_s81,
    _g4_s83 = (32u + sizeof(_g4_t_objbr)) > _g4_s82 ? (32u + sizeof(_g4_t_objbr)) : _g4_s82,
    _g4_s84 = (32u + sizeof(_g4_t_objbs)) > _g4_s83 ? (32u + sizeof(_g4_t_objbs)) : _g4_s83,
    _g4_s85 = (32u + sizeof(_g4_t_objbt)) > _g4_s84 ? (32u + sizeof(_g4_t_objbt)) : _g4_s84,
    _g4_s86 = (32u + sizeof(_g4_t_objbu)) > _g4_s85 ? (32u + sizeof(_g4_t_objbu)) : _g4_s85,
    _g4_s87 = (32u + sizeof(_g4_t_objbv)) > _g4_s86 ? (32u + sizeof(_g4_t_objbv)) : _g4_s86,
    _g4_s88 = (32u + sizeof(_g4_t_objbw)) > _g4_s87 ? (32u + sizeof(_g4_t_objbw)) : _g4_s87,
    _g4_s89 = (36u + sizeof(_g4_t_v156)) > _g4_s88 ? (36u + sizeof(_g4_t_v156)) : _g4_s88,
    _g4_s90 = (67u + sizeof(_g4_t_v158)) > _g4_s89 ? (67u + sizeof(_g4_t_v158)) : _g4_s89,
    _g4_s91 = (68u + sizeof(_g4_t_v159)) > _g4_s90 ? (68u + sizeof(_g4_t_v159)) : _g4_s90,
    _g4_s92 = (84u + sizeof(_g4_t_v160)) > _g4_s91 ? (84u + sizeof(_g4_t_v160)) : _g4_s91,
    _g4_s93 = (88u + sizeof(_g4_t_v161)) > _g4_s92 ? (88u + sizeof(_g4_t_v161)) : _g4_s92,
    _g4_s94 = (92u + sizeof(_g4_t_v162)) > _g4_s93 ? (92u + sizeof(_g4_t_v162)) : _g4_s93,
    _g4_s95 = (96u + sizeof(_g4_t_v163)) > _g4_s94 ? (96u + sizeof(_g4_t_v163)) : _g4_s94,
    _g4_s96 = (100u + sizeof(_g4_t_v164)) > _g4_s95 ? (100u + sizeof(_g4_t_v164)) : _g4_s95,
    _g4_s97 = (104u + sizeof(_g4_t_v165)) > _g4_s96 ? (104u + sizeof(_g4_t_v165)) : _g4_s96,
    _g4_s98 = (108u + sizeof(_g4_t_v166)) > _g4_s97 ? (108u + sizeof(_g4_t_v166)) : _g4_s97,
    _g4_s99 = (112u + sizeof(_g4_t_v167)) > _g4_s98 ? (112u + sizeof(_g4_t_v167)) : _g4_s98,
    _g4_s100 = (116u + sizeof(_g4_t_v168)) > _g4_s99 ? (116u + sizeof(_g4_t_v168)) : _g4_s99,
    _g4_s101 = (120u + sizeof(_g4_t_v169)) > _g4_s100 ? (120u + sizeof(_g4_t_v169)) : _g4_s100,
    _g4_s102 = (124u + sizeof(_g4_t_v170)) > _g4_s101 ? (124u + sizeof(_g4_t_v170)) : _g4_s101,
    _g4_s103 = (128u + sizeof(_g4_t_v171)) > _g4_s102 ? (128u + sizeof(_g4_t_v171)) : _g4_s102,
    _g4_s104 = (132u + sizeof(_g4_t_v172)) > _g4_s103 ? (132u + sizeof(_g4_t_v172)) : _g4_s103,
    _g4_s105 = (136u + sizeof(_g4_t_v173)) > _g4_s104 ? (136u + sizeof(_g4_t_v173)) : _g4_s104,
    _g4_s106 = (140u + sizeof(_g4_t_v174)) > _g4_s105 ? (140u + sizeof(_g4_t_v174)) : _g4_s105,
    _g4_s107 = (144u + sizeof(_g4_t_v175)) > _g4_s106 ? (144u + sizeof(_g4_t_v175)) : _g4_s106,
    _g4_s108 = (148u + sizeof(_g4_t_v176)) > _g4_s107 ? (148u + sizeof(_g4_t_v176)) : _g4_s107,
    _g4_s109 = (152u + sizeof(_g4_t_v177)) > _g4_s108 ? (152u + sizeof(_g4_t_v177)) : _g4_s108,
    _g4_s110 = (156u + sizeof(_g4_t_v178)) > _g4_s109 ? (156u + sizeof(_g4_t_v178)) : _g4_s109,
    _g4_s111 = (160u + sizeof(_g4_t_v179)) > _g4_s110 ? (160u + sizeof(_g4_t_v179)) : _g4_s110,
    _g4_s112 = (164u + sizeof(_g4_t_v180)) > _g4_s111 ? (164u + sizeof(_g4_t_v180)) : _g4_s111,
    _g4_s113 = (168u + sizeof(_g4_t_v181)) > _g4_s112 ? (168u + sizeof(_g4_t_v181)) : _g4_s112,
    _g4_s114 = (172u + sizeof(_g4_t_v182)) > _g4_s113 ? (172u + sizeof(_g4_t_v182)) : _g4_s113,
    _g4_s115 = (176u + sizeof(_g4_t_v183)) > _g4_s114 ? (176u + sizeof(_g4_t_v183)) : _g4_s114
  };
  alignas(16) uint8_t _g4_sf[_g4_s115];
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 8u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 8u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 8u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 8u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 8u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 8u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 8u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 8u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 8u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 8u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 8u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 8u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 8u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 12u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 12u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 12u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 12u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 12u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 12u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 12u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 12u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 12u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 12u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 12u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 12u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 12u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 16u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 32u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 32u);
  _g4_t_objc &objc = *reinterpret_cast<_g4_t_objc *>(_g4_sf + 32u);
  _g4_t_objd &objd = *reinterpret_cast<_g4_t_objd *>(_g4_sf + 32u);
  _g4_t_obje &obje = *reinterpret_cast<_g4_t_obje *>(_g4_sf + 32u);
  _g4_t_objf &objf = *reinterpret_cast<_g4_t_objf *>(_g4_sf + 32u);
  _g4_t_objg &objg = *reinterpret_cast<_g4_t_objg *>(_g4_sf + 32u);
  _g4_t_objh &objh = *reinterpret_cast<_g4_t_objh *>(_g4_sf + 32u);
  _g4_t_obji &obji = *reinterpret_cast<_g4_t_obji *>(_g4_sf + 32u);
  _g4_t_objj &objj = *reinterpret_cast<_g4_t_objj *>(_g4_sf + 32u);
  _g4_t_objk &objk = *reinterpret_cast<_g4_t_objk *>(_g4_sf + 32u);
  _g4_t_objm &objm = *reinterpret_cast<_g4_t_objm *>(_g4_sf + 32u);
  _g4_t_objl &objl = *reinterpret_cast<_g4_t_objl *>(_g4_sf + 32u);
  _g4_t_objn &objn = *reinterpret_cast<_g4_t_objn *>(_g4_sf + 32u);
  _g4_t_objo &objo = *reinterpret_cast<_g4_t_objo *>(_g4_sf + 32u);
  _g4_t_objp &objp = *reinterpret_cast<_g4_t_objp *>(_g4_sf + 32u);
  _g4_t_objq &objq = *reinterpret_cast<_g4_t_objq *>(_g4_sf + 32u);
  _g4_t_objr &objr = *reinterpret_cast<_g4_t_objr *>(_g4_sf + 32u);
  _g4_t_objs &objs = *reinterpret_cast<_g4_t_objs *>(_g4_sf + 32u);
  _g4_t_objt &objt = *reinterpret_cast<_g4_t_objt *>(_g4_sf + 32u);
  _g4_t_obju &obju = *reinterpret_cast<_g4_t_obju *>(_g4_sf + 32u);
  _g4_t_objv &objv = *reinterpret_cast<_g4_t_objv *>(_g4_sf + 32u);
  _g4_t_objw &objw = *reinterpret_cast<_g4_t_objw *>(_g4_sf + 32u);
  _g4_t_objx &objx = *reinterpret_cast<_g4_t_objx *>(_g4_sf + 32u);
  _g4_t_objy &objy = *reinterpret_cast<_g4_t_objy *>(_g4_sf + 32u);
  _g4_t_objz &objz = *reinterpret_cast<_g4_t_objz *>(_g4_sf + 32u);
  _g4_t_objba &objba = *reinterpret_cast<_g4_t_objba *>(_g4_sf + 32u);
  _g4_t_objbb &objbb = *reinterpret_cast<_g4_t_objbb *>(_g4_sf + 32u);
  _g4_t_objbc &objbc = *reinterpret_cast<_g4_t_objbc *>(_g4_sf + 32u);
  _g4_t_objbd &objbd = *reinterpret_cast<_g4_t_objbd *>(_g4_sf + 32u);
  _g4_t_objbe &objbe = *reinterpret_cast<_g4_t_objbe *>(_g4_sf + 32u);
  _g4_t_objbf &objbf = *reinterpret_cast<_g4_t_objbf *>(_g4_sf + 32u);
  _g4_t_objbg &objbg = *reinterpret_cast<_g4_t_objbg *>(_g4_sf + 32u);
  _g4_t_objbh &objbh = *reinterpret_cast<_g4_t_objbh *>(_g4_sf + 32u);
  _g4_t_objbi &objbi = *reinterpret_cast<_g4_t_objbi *>(_g4_sf + 32u);
  _g4_t_objbj &objbj = *reinterpret_cast<_g4_t_objbj *>(_g4_sf + 32u);
  _g4_t_objbk &objbk = *reinterpret_cast<_g4_t_objbk *>(_g4_sf + 32u);
  _g4_t_objbl &objbl = *reinterpret_cast<_g4_t_objbl *>(_g4_sf + 32u);
  _g4_t_objbm &objbm = *reinterpret_cast<_g4_t_objbm *>(_g4_sf + 32u);
  _g4_t_objbn &objbn = *reinterpret_cast<_g4_t_objbn *>(_g4_sf + 32u);
  _g4_t_objbo &objbo = *reinterpret_cast<_g4_t_objbo *>(_g4_sf + 32u);
  _g4_t_objbp &objbp = *reinterpret_cast<_g4_t_objbp *>(_g4_sf + 32u);
  _g4_t_objbq &objbq = *reinterpret_cast<_g4_t_objbq *>(_g4_sf + 32u);
  _g4_t_objbr &objbr = *reinterpret_cast<_g4_t_objbr *>(_g4_sf + 32u);
  _g4_t_objbs &objbs = *reinterpret_cast<_g4_t_objbs *>(_g4_sf + 32u);
  _g4_t_objbt &objbt = *reinterpret_cast<_g4_t_objbt *>(_g4_sf + 32u);
  _g4_t_objbu &objbu = *reinterpret_cast<_g4_t_objbu *>(_g4_sf + 32u);
  _g4_t_objbv &objbv = *reinterpret_cast<_g4_t_objbv *>(_g4_sf + 32u);
  _g4_t_objbw &objbw = *reinterpret_cast<_g4_t_objbw *>(_g4_sf + 32u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 36u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 67u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 68u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 84u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 88u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 92u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 96u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 100u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 104u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 108u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 112u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 116u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 120u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 124u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 128u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 132u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 136u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 140u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 144u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 148u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 152u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 156u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 160u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 164u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 168u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 172u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 176u);

  v183[3] = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)&a3;
  result = (uint8_t)byte_20D5784;
  v156 = byte_20D5784;
  if ( byte_20D5784 != 0 )
  {
    if ( byte_20D5030 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5030) != 0 )
    {
      sub_804900(&unk_20D5038);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5030);
      __cxa_atexit((void (*)(void *))sub_8136E0, &unk_20D5038, &unk_20D1280);
    }
    v66 = nullptr;
    if ( byte_20D503C == 0 )
      v66 = &unk_20D5038;
    v24 = (uint8_t)sub_804A60(v66) == 0;
    result = 0;
    v67 = v156;
    if ( !v24 )
      v67 = 0;
    v156 = v67;
  }
  v5 = 0;
  if ( a1 != 0 )
  {
    while ( 1 )
    {
      result = G4_VCALL<int>(a1, 160);
      if ( v5 >= result )
        return result;
      (*(void (**)(glitch::video::CMaterial::Self **))(*(uint32_t *)a1 + 156))(&v159);
      if ( v159 != nullptr )
        break;
LABEL_36:
      ++v5;
    }
    if ( glf::Strncmp(*(glf::Self **)(*((uint32_t *)v159 + 1) + 8), "CharacterShader-fx", 0x12u, v105) != 0
      && glf::Strncmp(*(glf::Self **)(*((uint32_t *)v159 + 1) + 8), "GunEffects-fx", 0xDu, v105) != 0 )
    {
      goto LABEL_30;
    }
    v158 = *((uint8_t *)v159 + 8);
    if ( a2 == 0 || v156 == 0 )
    {
      obj = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
      v172 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Irradiance",
                                                                      nullptr,
                                                                      v98);
      TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(obj, (const glitch::core::SSharedString::Self *)&v172);
      v7 = v172;
      if ( v172 != nullptr && __sync_fetch_and_add((volatile int32_t *)v172, 0xFFFFFFFF) == 1 )
      {
        obja = TechniqueID;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v7, v68);
        TechniqueID = obja;
      }
      v8 = v159;
      if ( v158 == TechniqueID )
      {
        objbn = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
        v173 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                        (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Basic",
                                                                        nullptr,
                                                                        v92);
        v56 = glitch::video::CMaterialRenderer::getTechniqueID(objbn, (const glitch::core::SSharedString::Self *)&v173);
        v57 = v173;
        if ( v173 != nullptr && __sync_fetch_and_add((volatile int32_t *)v173, 0xFFFFFFFF) == 1 )
        {
          objbo = v56;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v57, v87);
          v56 = objbo;
        }
        v8 = v159;
        *((uint8_t *)v159 + 8) = v56;
      }
      objb = *((glitch::video::CMaterialRenderer::Self **)v8 + 1);
      v174 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceGold",
                                                                      nullptr,
                                                                      v92);
      v9 = glitch::video::CMaterialRenderer::getTechniqueID(objb, (const glitch::core::SSharedString::Self *)&v174);
      v10 = v174;
      if ( v174 != nullptr && __sync_fetch_and_add((volatile int32_t *)v174, 0xFFFFFFFF) == 1 )
      {
        objc = v9;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v10, v69);
        v9 = objc;
      }
      v11 = v159;
      if ( v158 == v9 )
      {
        objbl = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
        v175 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                        (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"BasicGold",
                                                                        nullptr,
                                                                        v93);
        v54 = glitch::video::CMaterialRenderer::getTechniqueID(objbl, (const glitch::core::SSharedString::Self *)&v175);
        v55 = v175;
        if ( v175 != nullptr && __sync_fetch_and_add((volatile int32_t *)v175, 0xFFFFFFFF) == 1 )
        {
          objbm = v54;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v55, v86);
          v54 = objbm;
        }
        v11 = v159;
        *((uint8_t *)v159 + 8) = v54;
      }
      objd = *((glitch::video::CMaterialRenderer::Self **)v11 + 1);
      v176 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceAlpha",
                                                                      nullptr,
                                                                      v93);
      v12 = glitch::video::CMaterialRenderer::getTechniqueID(objd, (const glitch::core::SSharedString::Self *)&v176);
      v13 = v176;
      if ( v176 != nullptr && __sync_fetch_and_add((volatile int32_t *)v176, 0xFFFFFFFF) == 1 )
      {
        obje = v12;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v13, v70);
        v12 = obje;
      }
      v14 = v159;
      if ( v158 == v12 )
      {
        objbv = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
        v177 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                        (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"BasicAlpha",
                                                                        nullptr,
                                                                        v94);
        v64 = glitch::video::CMaterialRenderer::getTechniqueID(objbv, (const glitch::core::SSharedString::Self *)&v177);
        v65 = v177;
        if ( v177 != nullptr && __sync_fetch_and_add((volatile int32_t *)v177, 0xFFFFFFFF) == 1 )
        {
          objbw = v64;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v65, v91);
          v64 = objbw;
        }
        v14 = v159;
        *((uint8_t *)v159 + 8) = v64;
      }
      objf = *((glitch::video::CMaterialRenderer::Self **)v14 + 1);
      v178 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceNormalMap",
                                                                      nullptr,
                                                                      v94);
      v15 = glitch::video::CMaterialRenderer::getTechniqueID(objf, (const glitch::core::SSharedString::Self *)&v178);
      v16 = v178;
      if ( v178 != nullptr && __sync_fetch_and_add((volatile int32_t *)v178, 0xFFFFFFFF) == 1 )
      {
        objg = v15;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v16, v71);
        v15 = objg;
      }
      v17 = v159;
      if ( v158 == v15 )
      {
        objbt = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
        v179 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                        (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"NormalMap",
                                                                        nullptr,
                                                                        v95);
        v62 = glitch::video::CMaterialRenderer::getTechniqueID(objbt, (const glitch::core::SSharedString::Self *)&v179);
        v63 = v179;
        if ( v179 != nullptr && __sync_fetch_and_add((volatile int32_t *)v179, 0xFFFFFFFF) == 1 )
        {
          objbu = v62;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v63, v90);
          v62 = objbu;
        }
        v17 = v159;
        *((uint8_t *)v159 + 8) = v62;
      }
      objh = *((glitch::video::CMaterialRenderer::Self **)v17 + 1);
      v180 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceNormalMapGold",
                                                                      nullptr,
                                                                      v95);
      v18 = glitch::video::CMaterialRenderer::getTechniqueID(objh, (const glitch::core::SSharedString::Self *)&v180);
      v19 = v180;
      if ( v180 != nullptr && __sync_fetch_and_add((volatile int32_t *)v180, 0xFFFFFFFF) == 1 )
      {
        obji = v18;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v19, v72);
        v18 = obji;
      }
      v20 = v159;
      if ( v158 == v18 )
      {
        objbr = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
        v181 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                        (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"NormalMapGold",
                                                                        nullptr,
                                                                        v96);
        v60 = glitch::video::CMaterialRenderer::getTechniqueID(objbr, (const glitch::core::SSharedString::Self *)&v181);
        v61 = v181;
        if ( v181 != nullptr && __sync_fetch_and_add((volatile int32_t *)v181, 0xFFFFFFFF) == 1 )
        {
          objbs = v60;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v61, v89);
          v60 = objbs;
        }
        v20 = v159;
        *((uint8_t *)v159 + 8) = v60;
      }
      objj = *((glitch::video::CMaterialRenderer::Self **)v20 + 1);
      v182 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceNormalMapAlpha",
                                                                      nullptr,
                                                                      v96);
      v21 = glitch::video::CMaterialRenderer::getTechniqueID(objj, (const glitch::core::SSharedString::Self *)&v182);
      v22 = v182;
      if ( v182 != nullptr && __sync_fetch_and_add((volatile int32_t *)v182, 0xFFFFFFFF) == 1 )
      {
        objk = v21;
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v22, v73);
        v21 = objk;
      }
      if ( v158 == v21 )
      {
        objbp = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
        v183[0] = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                           (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"NormalMapAlpha",
                                                                           nullptr,
                                                                           v97);
        v58 = glitch::video::CMaterialRenderer::getTechniqueID(objbp, (const glitch::core::SSharedString::Self *)v183);
        v59 = v183[0];
        if ( v183[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v183[0], 0xFFFFFFFF) == 1 )
        {
          objbq = v58;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v59, v88);
          v58 = objbq;
        }
        v23 = v159;
        *((uint8_t *)v159 + 8) = v58;
        goto LABEL_31;
      }
LABEL_30:
      v23 = v159;
LABEL_31:
      if ( v23 != nullptr )
      {
        v24 = *(uint32_t *)v23 == 2;
        _mm_mfence();
        if ( v24 )
        {
          objl = v23;
          glitch::video::CMaterial::removeFromRootSceneNode(v23);
          v23 = objl;
        }
        if ( __sync_fetch_and_add((volatile int32_t *)v23, 0xFFFFFFFF) == 1 )
        {
          objm = v23;
          glitch::video::CMaterial::Destroy(v23);
          gll_operator_delete_arr((int)(uintptr_t)(objm));
        }
      }
      goto LABEL_36;
    }
    objn = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
    v160 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Basic",
                                                                    nullptr,
                                                                    v98);
    v25 = glitch::video::CMaterialRenderer::getTechniqueID(objn, (const glitch::core::SSharedString::Self *)&v160);
    v26 = v160;
    if ( v160 != nullptr && __sync_fetch_and_add((volatile int32_t *)v160, 0xFFFFFFFF) == 1 )
    {
      objbi = v25;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v26, v74);
      v27 = v159;
      if ( v158 != objbi )
        goto LABEL_46;
    }
    else
    {
      v24 = v158 == v25;
      v27 = v159;
      if ( !v24 )
        goto LABEL_46;
    }
    objbj = *((glitch::video::CMaterialRenderer::Self **)v27 + 1);
    v161 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Irradiance",
                                                                    nullptr,
                                                                    v99);
    v52 = glitch::video::CMaterialRenderer::getTechniqueID(objbj, (const glitch::core::SSharedString::Self *)&v161);
    v53 = v161;
    if ( v161 != nullptr && __sync_fetch_and_add((volatile int32_t *)v161, 0xFFFFFFFF) == 1 )
    {
      objbk = v52;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v53, v85);
      v52 = objbk;
    }
    v27 = v159;
    *((uint8_t *)v159 + 8) = v52;
LABEL_46:
    objo = *((glitch::video::CMaterialRenderer::Self **)v27 + 1);
    v162 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"BasicGold",
                                                                    nullptr,
                                                                    v99);
    v28 = glitch::video::CMaterialRenderer::getTechniqueID(objo, (const glitch::core::SSharedString::Self *)&v162);
    v29 = v162;
    if ( v162 != nullptr && __sync_fetch_and_add((volatile int32_t *)v162, 0xFFFFFFFF) == 1 )
    {
      objbf = v28;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v29, v75);
      v30 = v159;
      if ( v158 != objbf )
        goto LABEL_49;
    }
    else
    {
      v24 = v158 == v28;
      v30 = v159;
      if ( !v24 )
        goto LABEL_49;
    }
    objbg = *((glitch::video::CMaterialRenderer::Self **)v30 + 1);
    v163 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceGold",
                                                                    nullptr,
                                                                    v100);
    v50 = glitch::video::CMaterialRenderer::getTechniqueID(objbg, (const glitch::core::SSharedString::Self *)&v163);
    v51 = v163;
    if ( v163 != nullptr && __sync_fetch_and_add((volatile int32_t *)v163, 0xFFFFFFFF) == 1 )
    {
      objbh = v50;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v51, v84);
      v50 = objbh;
    }
    v30 = v159;
    *((uint8_t *)v159 + 8) = v50;
LABEL_49:
    objp = *((glitch::video::CMaterialRenderer::Self **)v30 + 1);
    v164 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"BasicAlpha",
                                                                    nullptr,
                                                                    v100);
    v31 = glitch::video::CMaterialRenderer::getTechniqueID(objp, (const glitch::core::SSharedString::Self *)&v164);
    v32 = v164;
    if ( v164 != nullptr && __sync_fetch_and_add((volatile int32_t *)v164, 0xFFFFFFFF) == 1 )
    {
      objbc = v31;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v32, v76);
      v33 = v159;
      if ( v158 != objbc )
        goto LABEL_52;
    }
    else
    {
      v24 = v158 == v31;
      v33 = v159;
      if ( !v24 )
        goto LABEL_52;
    }
    objbd = *((glitch::video::CMaterialRenderer::Self **)v33 + 1);
    v165 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceAlpha",
                                                                    nullptr,
                                                                    v101);
    v48 = glitch::video::CMaterialRenderer::getTechniqueID(objbd, (const glitch::core::SSharedString::Self *)&v165);
    v49 = v165;
    if ( v165 != nullptr && __sync_fetch_and_add((volatile int32_t *)v165, 0xFFFFFFFF) == 1 )
    {
      objbe = v48;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v49, v83);
      v48 = objbe;
    }
    v33 = v159;
    *((uint8_t *)v159 + 8) = v48;
LABEL_52:
    objq = *((glitch::video::CMaterialRenderer::Self **)v33 + 1);
    v166 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"NormalMap",
                                                                    nullptr,
                                                                    v101);
    v34 = glitch::video::CMaterialRenderer::getTechniqueID(objq, (const glitch::core::SSharedString::Self *)&v166);
    v35 = v166;
    if ( v166 != nullptr && __sync_fetch_and_add((volatile int32_t *)v166, 0xFFFFFFFF) == 1 )
    {
      objz = v34;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v35, v77);
      v36 = v159;
      if ( v158 != objz )
        goto LABEL_55;
    }
    else
    {
      v24 = v158 == v34;
      v36 = v159;
      if ( !v24 )
        goto LABEL_55;
    }
    objba = *((glitch::video::CMaterialRenderer::Self **)v36 + 1);
    v167 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceNormalMap",
                                                                    nullptr,
                                                                    v102);
    v46 = glitch::video::CMaterialRenderer::getTechniqueID(objba, (const glitch::core::SSharedString::Self *)&v167);
    v47 = v167;
    if ( v167 != nullptr && __sync_fetch_and_add((volatile int32_t *)v167, 0xFFFFFFFF) == 1 )
    {
      objbb = v46;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v47, v82);
      v46 = objbb;
    }
    v36 = v159;
    *((uint8_t *)v159 + 8) = v46;
LABEL_55:
    objr = *((glitch::video::CMaterialRenderer::Self **)v36 + 1);
    v168 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"NormalMapGold",
                                                                    nullptr,
                                                                    v102);
    v37 = glitch::video::CMaterialRenderer::getTechniqueID(objr, (const glitch::core::SSharedString::Self *)&v168);
    v38 = v168;
    if ( v168 != nullptr && __sync_fetch_and_add((volatile int32_t *)v168, 0xFFFFFFFF) == 1 )
    {
      objw = v37;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v38, v78);
      v39 = v159;
      if ( v158 != objw )
        goto LABEL_58;
    }
    else
    {
      v24 = v158 == v37;
      v39 = v159;
      if ( !v24 )
        goto LABEL_58;
    }
    objx = *((glitch::video::CMaterialRenderer::Self **)v39 + 1);
    v169 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceNormalMapGold",
                                                                    nullptr,
                                                                    v103);
    v44 = glitch::video::CMaterialRenderer::getTechniqueID(objx, (const glitch::core::SSharedString::Self *)&v169);
    v45 = v169;
    if ( v169 != nullptr && __sync_fetch_and_add((volatile int32_t *)v169, 0xFFFFFFFF) == 1 )
    {
      objy = v44;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v45, v81);
      v44 = objy;
    }
    v39 = v159;
    *((uint8_t *)v159 + 8) = v44;
LABEL_58:
    objs = *((glitch::video::CMaterialRenderer::Self **)v39 + 1);
    v170 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"NormalMapAlpha",
                                                                    nullptr,
                                                                    v103);
    v40 = glitch::video::CMaterialRenderer::getTechniqueID(objs, (const glitch::core::SSharedString::Self *)&v170);
    v41 = v170;
    if ( v170 != nullptr && __sync_fetch_and_add((volatile int32_t *)v170, 0xFFFFFFFF) == 1 )
    {
      objv = v40;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v41, v79);
      if ( v158 != objv )
        goto LABEL_30;
    }
    else if ( v158 != v40 )
    {
      goto LABEL_30;
    }
    objt = *((glitch::video::CMaterialRenderer::Self **)v159 + 1);
    v171 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                    (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"IrradianceNormalMapAlpha",
                                                                    nullptr,
                                                                    v104);
    v42 = glitch::video::CMaterialRenderer::getTechniqueID(objt, (const glitch::core::SSharedString::Self *)&v171);
    v43 = v171;
    if ( v171 != nullptr && __sync_fetch_and_add((volatile int32_t *)v171, 0xFFFFFFFF) == 1 )
    {
      obju = v42;
      glitch::core::detail::SSharedStringHeapEntry::SData::release(v43, v80);
      v42 = obju;
    }
    v23 = v159;
    *((uint8_t *)v159 + 8) = v42;
    goto LABEL_31;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C15940  (binary VA: 0xc15940)
// Original: sub_C15940
// ----------------------------------------------------------------------------
int sub_C15940(int a1)
{
  void *v1;
  char v2; // di
  int v3;
  int v4;
  glitch::scene::ISceneNode::Self *v5;
  vox::EmitterHandle::Self *v6;
  int *v7;
  int result;
  glf::Self *v9;
  int *v10;
  int *v11;
  int v12;
  typedef glf::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14[32];
  typedef int _g4_t_v15[6];
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v15)) > _g4_s2 ? (56u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v16)) > _g4_s3 ? (80u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (81u + sizeof(_g4_t_v17)) > _g4_s4 ? (81u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v18)) > _g4_s5 ? (84u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v19)) > _g4_s6 ? (88u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v20)) > _g4_s7 ? (92u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 81u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);

  G4_VCALL<void>(a1, 40, 1, 1);
  G4_VCALL<void>(a1, 40, 1024, 0);
  if ( *(uint8_t *)(a1 + 276) != 0 )
    G4_VCALL<void>(a1, 288, *(uint32_t *)(a1 + 272), 1, 1);
  if ( byte_20D5030 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5030) != 0 )
  {
    sub_804900(&unk_20D5038);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5030);
    __cxa_atexit((void (*)(void *))sub_8136E0, &unk_20D5038, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D503C == 0 )
    v1 = &unk_20D5038;
  v2 = 0;
  if ( (uint8_t)sub_804A50(v1) != 0 )
    v2 = *(uint8_t *)(a1 + 60) ^ 1;
  v3 = (*(int (**)(void))(*(uint32_t *)a1 + 168))();
  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 327) != 0 )
    sub_C14BB0(v3, v2, a1);
  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v4 = G4_VCALL<int>(a1, 168);
    glitch::scene::ISceneNode::setAutomaticCulling(v4, 2);
    v5 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    glitch::scene::ISceneNode::updateAbsolutePosition(v5, true);
  }
  v6 = (vox::EmitterHandle::Self *)(a1 + 104);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v7 = (int *)(&dword_20D4AC0);
  result = sub_AB0DA0((int)(uintptr_t)(v7), (vox::EmitterHandle::Self *)(a1 + 104));
  if ( (uint8_t)result == 0 )
  {
    memset(v15, 0, 12);
    v15[3] = 1028443341;
    v15[4] = 1065353216;
    v15[5] = 1065353216;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v9 = *(glf::Self **)(a1 + 136);
    if ( byte_20D4AB0 == 0 )
    {
      v13 = *(glf::Self **)(a1 + 136);
      v12 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
      v9 = v13;
      if ( v12 != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        v9 = v13;
      }
    }
    v10 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v10 = (int *)(&dword_20D4AC0);
    sub_AC3450((vox::EmitterHandle::Self *)v14, (int)(uintptr_t)(v10), 1, v9, v15);
    vox::EmitterHandle::opAssign(v6, (const vox::EmitterHandle::Self *)v14);
    vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v14);
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v11 = (int *)(&dword_20D4AC0);
    return sub_AB2FA0((int)(uintptr_t)(v11), 2, v6, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C15D00  (binary VA: 0xc15d00)
// Original: sub_C15D00
// ----------------------------------------------------------------------------
uint32_t * sub_C15D00(int a1)
{
  int *v1;
  int *v2;
  uint32_t *v3;
  volatile int32_t *v4;
  uint32_t *v5;
  volatile int32_t *v6;
  uint32_t *result;
  glitch::video::CMaterial::Self **v8;
  glitch::video::CMaterial::Self **v9;
  glitch::video::CMaterial::Self *v10;
  bool v11;
  uint32_t *v12;
  uint32_t *v13;
  glitch::video::CMaterial::Self **v14;

  v1 = *(int **)(a1 + 416);
  if ( v1 != nullptr )
  {
    v2 = &v1[3 * *(v1 - 1)];
    while ( v2 != v1 )
    {
      while ( 1 )
      {
        v2 -= 3;
        if ( *v2 == 0 )
          break;
        sub_4EB870(*v2);
        v1 = *(int **)(a1 + 416);
        if ( v2 == v1 )
          goto LABEL_6;
      }
    }
LABEL_6:
    opDeleteArray(v2 - 1);
    *(uint32_t *)(a1 + 416) = 0;
  }
  v3 = *(uint32_t **)(a1 + 72);
  *(uint8_t *)(a1 + 316) = 0;
  if ( v3 != nullptr )
  {
    __sync_add_and_fetch((uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 16) + 4), 1u);
    v4 = (volatile int32_t *)((uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 16)));
    if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 4);
    }
    (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 72) + 76))(*(uint32_t *)(a1 + 72), 0);
    (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 72) + 132))(*(uint32_t *)(a1 + 72));
    v5 = *(uint32_t **)(a1 + 72);
    *(uint32_t *)(a1 + 72) = 0;
    if ( v5 != nullptr )
    {
      v6 = (volatile int32_t *)((uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 16)));
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v6, 8);
        G4_VCALL<void>(v6, 4);
      }
    }
  }
  result = (uint32_t *)G4_VCALL<int>(a1, 348);
  if ( result != nullptr )
  {
    v8 = (glitch::video::CMaterial::Self **)result[5];
    v14 = (glitch::video::CMaterial::Self **)result[4];
    if ( v14 != v8 )
    {
      v9 = (glitch::video::CMaterial::Self **)result[4];
      do
      {
        v10 = *v9;
        if ( *v9 != nullptr )
        {
          v11 = *(uint32_t *)v10 == 2;
          _mm_mfence();
          if ( v11 )
          {
            v13 = result;
            glitch::video::CMaterial::removeFromRootSceneNode(v10);
            result = v13;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF) == 1 )
          {
            v12 = result;
            glitch::video::CMaterial::Destroy(v10);
            gll_operator_delete_arr((int)(uintptr_t)(v10));
            result = v12;
          }
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    result[5] = (uint32_t)(uintptr_t)(v14);
    result[8] = result[7];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C15EA0  (binary VA: 0xc15ea0)
// Original: sub_C15EA0
// ----------------------------------------------------------------------------
int sub_C15EA0(int a1, uint32_t **a2)
{
  void *v3;
  int v4;
  int result;
  int v6;
  uint32_t *v7;
  volatile int32_t *v8;
  typedef uint32_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  if ( *(uint8_t *)(a1 + 380) != 0 )
  {
    v6 = *(uint32_t *)(sub_B97E00() + 16);
    v7 = *a2;
    v9 = *a2;
    if ( v9 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16) + 4), 1u);
    result = sub_871E70(v6, (int)(uintptr_t)(&v9));
    if ( v9 != nullptr )
    {
      v8 = (volatile int32_t *)((uint32_t *)((char *)v9 + *(uint32_t *)(*v9 - 16)));
      result = __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        G4_VCALL<void>(v8, 8);
        return G4_VCALL<int>(v8, 4);
      }
    }
  }
  else
  {
    if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
    {
      sub_5BEF40((int)(uintptr_t)(&unk_20D4D80));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
      __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D4D84 == 0 )
      v3 = &unk_20D4D80;
    v4 = sub_5B9810((int)(uintptr_t)(v3));
    return G4_VCALL<int>(v4, 104, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C15FD0  (binary VA: 0xc15fd0)
// Original: sub_C15FD0
// ----------------------------------------------------------------------------
int sub_C15FD0(int a1)
{
  int v1;
  const char **v3;
  int *v4;
  char v5;
  glf::Self **v6;
  glitch::scene::ISceneNode::Self *v7;
  uint32_t *v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  int *v11;
  int v12;
  int v13;
  glitch::scene::ISceneNode::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef int *_g4_t_v19;
  typedef const char **_g4_t_v20;
  typedef char _g4_t_v21;
  typedef glitch::scene::ISceneNode::Self *_g4_t_v22;
  typedef uint32_t _g4_t_v23[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);

  v23[5] = (uint32_t)(uintptr_t)(&a1);
  v1 = a1;
  if ( *(uint32_t *)(a1 + 72) == 0 )
  {
    if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 161) == 0
      || (v20 = (const char **)(a1 + 228), v18 = g4_std::string::compare(a1 + 228, (char *)&unk_1B15112), v3 = v20, v18 == 0) )
    {
      v3 = (const char **)(v1 + 224);
    }
    v4 = sub_51E020(*v3);
    v5 = *(uint8_t *)(v1 + 381) ^ 1;
    if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 161) == 0
      || (v19 = v4,
          v21 = *(uint8_t *)(v1 + 381) ^ 1,
          v6 = (glf::Self **)(v1 + 228),
          v17 = g4_std::string::compare(v1 + 228, (char *)&unk_1B15112),
          v4 = v19,
          v5 = v21,
          v17 == 0) )
    {
      v6 = (glf::Self **)(v1 + 224);
    }
    sub_87F170(&v22, *v6, (glitch::collada::CColladaFactory::Self *)v4, 1, v5);
    v7 = v22;
    if ( v22 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)((char *)v22 + *(uint32_t *)(*(uint32_t *)v22 - 16) + 4), 1u);
    v8 = *(uint32_t **)(v1 + 72);
    *(uint32_t *)(v1 + 72) = (uint32_t)(uintptr_t)(v7);
    if ( v8 != nullptr )
    {
      v9 = (volatile int32_t *)((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16)));
      if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v9, 8);
        G4_VCALL<void>(v9, 4);
      }
    }
    if ( v22 != nullptr )
    {
      v10 = (volatile int32_t *)((char *)v22 + *(uint32_t *)(*(uint32_t *)v22 - 16));
      if ( __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v10, 8);
        G4_VCALL<void>(v10, 4);
      }
    }
    if ( G4_VCALL<int>(v1, 168) != 0 )
    {
      v11 = (int *)G4_VCALL<int>(v1, 168);
      v12 = *v11;
      v23[0] = *(uint32_t *)(v1 + 244);
      v23[1] = *(uint32_t *)(v1 + 248);
      v23[2] = *(uint32_t *)(v1 + 252);
      (*(void (**)(int *, uint32_t *))(v12 + 184))(v11, v23);
      v13 = G4_VCALL<int>(v1, 168);
      G4_VCALL<void>(v13, 176, v1 + 256);
      v14 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(v1, 168);
      glitch::scene::ISceneNode::updateAbsolutePosition(v14, false);
      v15 = G4_VCALL<int>(v1, 168);
      G4_VCALL<void>(v15, 76, 1);
      v16 = G4_VCALL<int>(v1, 168);
      G4_VCALL<void>(v16, 168, v1 + 232);
      G4_VCALL<void>(v1, 340);
    }
  }
  return G4_VCALL<int>(v1, 168);
}

// ----------------------------------------------------------------------------
// Function: nullsub_527  (binary VA: 0xc16268)
// Original: nullsub_527
// ----------------------------------------------------------------------------
void nullsub_527()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C16270  (binary VA: 0xc16270)
// Original: sub_C16270
// ----------------------------------------------------------------------------
char sub_C16270(int a1, int a2)
{
  int v2;

  *(uint32_t *)(a1 + 404) = *(uint32_t *)(a2 + 4);
  g4_std::string::assign_str(a1 + 408, a2 + 8);
  v2 = *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12);
  if ( v2 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 404);
    if ( v2 != 0 )
      LOBYTE(v2) = sub_A3E5C0(*(uint32_t *)(a1 + 404));
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_C162E0  (binary VA: 0xc162e0)
// Original: sub_C162E0
// ----------------------------------------------------------------------------
int sub_C162E0(int a1, int a2, int a3, int a4)
{
  return G4_VCALL<int>(a1, 336, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_C16310  (binary VA: 0xc16310)
// Original: sub_C16310
// ----------------------------------------------------------------------------
int sub_C16310(uint8_t *a1, uint8_t a2)
{
  int result;

  result = a2;
  if ( a1[397] != a2 )
  {
    result = G4_VCALL<int>(a1, 132, a2);
    a1[397] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16350  (binary VA: 0xc16350)
// Original: sub_C16350
// ----------------------------------------------------------------------------
int sub_C16350(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int result;

  v2 = (uint32_t *)(dword_20D93D0 + 28 * a2);
  v3 = v2[3];
  if ( v3 != -1 )
  {
    a1[48] = v3;
    a1[49] = v2[4];
  }
  v4 = v2[5];
  if ( v4 != 0 )
    a1[50] |= v4;
  result = v2[6];
  if ( result != 0 )
    a1[51] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C163A0  (binary VA: 0xc163a0)
// Original: sub_C163A0
// ----------------------------------------------------------------------------
int sub_C163A0(int a1, int a2)
{
  *(uint32_t *)(a1 + 192) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C163C0  (binary VA: 0xc163c0)
// Original: sub_C163C0
// ----------------------------------------------------------------------------
int sub_C163C0(int a1)
{
  return *(uint32_t *)(a1 + 196);
}

// ----------------------------------------------------------------------------
// Function: sub_C163D0  (binary VA: 0xc163d0)
// Original: sub_C163D0
// ----------------------------------------------------------------------------
int sub_C163D0(int a1)
{
  return *(uint32_t *)(a1 + 200);
}

// ----------------------------------------------------------------------------
// Function: sub_C163E0  (binary VA: 0xc163e0)
// Original: sub_C163E0
// ----------------------------------------------------------------------------
unsigned int sub_C163E0(int a1, unsigned int a2)
{
  unsigned int result;

  result = a2;
  if ( a2 >= 4 )
    result = 0;
  *(uint32_t *)(a1 + 184) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16400  (binary VA: 0xc16400)
// Original: sub_C16400
// ----------------------------------------------------------------------------
int sub_C16400(int a1, int a2)
{
  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 40) + 12))(*(uint32_t *)(a1 + 40), a1);
  return sub_5B4460(*(uint32_t *)(a1 + 64), a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C16450  (binary VA: 0xc16450)
// Original: sub_C16450
// ----------------------------------------------------------------------------
int sub_C16450(uint32_t *a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int result;
  uint32_t v6[6];

  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D4A64 == 0 )
    v1 = (int *)(&dword_20D4A60);
  sub_5B4BF0((int)(uintptr_t)(v1), (int)(uintptr_t)(a1));
  v2 = a1[42];
  v3 = *a1;
  a1[44] |= 0x40u;
  (*(void (**)(uint32_t *, int))(v3 + 264))(a1, v2);
  G4_VCALL<void>(a1, 88, 1);
  G4_VCALL<void>(a1, 316, a1 + 64);
  v4 = *a1;
  v6[0] = a1[61];
  v6[1] = a1[62];
  v6[2] = a1[63];
  (*(void (**)(uint32_t *, uint32_t *))(v4 + 308))(a1, v6);
  result = G4_VCALL<int>(a1, 176);
  if ( (uint8_t)result != 0 )
    return G4_VCALL<int>(a1, 344);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C165A0  (binary VA: 0xc165a0)
// Original: sub_C165A0
// ----------------------------------------------------------------------------
int sub_C165A0(int *a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  glitch::scene::ISceneNode::Self *v5;
  uint32_t v6[6];

  if ( (*((uint8_t *)a1 + 177) & 1) == 0 )
    G4_VCALL<void>(a1, 80, 0);
  G4_VCALL<void>(a1, 316, a1 + 64);
  v1 = *a1;
  v6[0] = a1[61];
  v6[1] = a1[62];
  v6[2] = a1[63];
  (*(void (**)(int *, uint32_t *))(v1 + 308))(a1, v6);
  result = G4_VCALL<int>(a1, 168);
  if ( result != 0 )
  {
    v3 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v3, 168, a1 + 58);
    v4 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v4, 76, (a1[44] & 3) == 3);
    v5 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    return (int)(uintptr_t)(glitch::scene::ISceneNode::updateAbsolutePosition(v5, true));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C166A0  (binary VA: 0xc166a0)
// Original: sub_C166A0
// ----------------------------------------------------------------------------
int sub_C166A0(int a1)
{
  unsigned int v1;
  int *v2;
  int v3;
  bool v4;
  int v5;

  v1 = *(uint32_t *)(a1 + 184);
  if ( v1 >= 4 )
    v1 = 0;
  *(uint32_t *)(a1 + 184) = v1;
  v2 = (int *)(sub_BDEE30((uint32_t *)(a1 + 280), *(uint32_t *)(a1 + 296)));
  v3 = v2[1];
  v4 = *(uint8_t *)(a1 + 277) == 0;
  v5 = *v2;
  *(uint32_t *)(a1 + 292) = v3;
  *(uint32_t *)(a1 + 288) = v5;
  if ( !v4 )
    *(uint32_t *)(a1 + 176) |= 4u;
  if ( *(uint8_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&dword_20D43E0, true) != 0 )
    sub_C165A0((int *)a1);
  return G4_VCALL<int>(a1, 264, *(uint32_t *)(a1 + 168));
}

// ----------------------------------------------------------------------------
// Function: sub_C16750  (binary VA: 0xc16750)
// Original: sub_C16750
// ----------------------------------------------------------------------------
int sub_C16750(int a1, uint8_t a2)
{
  return G4_VCALL<int>(a1, 88, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C16770  (binary VA: 0xc16770)
// Original: sub_C16770
// ----------------------------------------------------------------------------
int sub_C16770(int a1)
{
  return G4_VCALL<int>(a1, 92);
}

// ----------------------------------------------------------------------------
// Function: sub_C16790  (binary VA: 0xc16790)
// Original: sub_C16790
// ----------------------------------------------------------------------------
int sub_C16790(uint32_t *a1)
{
  return G4_VCALL<int>(a1, 288, a1[68], 1, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_C167D0  (binary VA: 0xc167d0)
// Original: sub_C167D0
// ----------------------------------------------------------------------------
int sub_C167D0(int a1, int a2)
{
  *(uint32_t *)(a1 + 148) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C167F0  (binary VA: 0xc167f0)
// Original: sub_C167F0
// ----------------------------------------------------------------------------
int sub_C167F0(int a1, uint8_t a2)
{
  int result;

  result = *(uint32_t *)(a1 + 140);
  if ( result != 0 )
    return sub_78C580(*(uint32_t *)(a1 + 140), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16830  (binary VA: 0xc16830)
// Original: sub_C16830
// ----------------------------------------------------------------------------
int sub_C16830(int a1)
{
  int result;
  int *v2;

  result = 1;
  if ( (*(uint8_t *)(a1 + 178) & 2) != 0 )
  {
    if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
    {
      sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
    v2 = nullptr;
    if ( byte_20D4A64 == 0 )
      v2 = (int *)(&dword_20D4A60);
    return sub_5B4AE0((int)(uintptr_t)(v2), a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C168F0  (binary VA: 0xc168f0)
// Original: sub_C168F0
// ----------------------------------------------------------------------------
bool sub_C168F0(int a1)
{
  return (*(uint8_t *)(a1 + 176) & 0x20) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_C16910  (binary VA: 0xc16910)
// Original: sub_C16910
// ----------------------------------------------------------------------------
long double sub_C16910(int a1, float *a2)
{
  int v2;
  float v3; // xmm0_4
  int v4;
  int v5;
  uint32_t *v7;
  int16_t v8;
  float v9;

  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 328) != 0 )
  {
    v2 = (*(uint32_t *)(a1 + 20) - *(uint32_t *)(a1 + 16)) >> 2;
    if ( v2 > 0 )
    {
      if ( sub_630AE0(*(uint32_t *)(a1 + 8)) )
      {
        v3 = *(float *)(a1 + 12);
      }
      else
      {
        v7 = sub_6347A0();
        v9 = sub_64F270((int)(uintptr_t)(v7), a2, -1);
        v3 = v9;
        *(float *)(a1 + 12) = v9;
      }
      v4 = 0;
      *(float *)a1 = (float)(v3 / *(float *)(a1 + 4))
                   + (float)((float)(1.0 - (float)(1.0 / *(float *)(a1 + 4))) * *(float *)a1);
      do
      {
        v8 = *(uint16_t *)(*(uint32_t *)(a1 + 28) + 4 * v4);
        v5 = *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v4++);
        glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb(
          v5,
          v8,
          0,
          a1);
      }
      while ( v4 != v2 );
    }
  }
  return *(float *)a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C16A00  (binary VA: 0xc16a00)
// Original: sub_C16A00
// ----------------------------------------------------------------------------
long double sub_C16A00(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  long double result; // fst7
  typedef uint32_t _g4_t_v5[3];
  typedef float _g4_t_v6[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);

  v1 = a1[105];
  v2 = sub_8F0680();
  if ( a1 == (uint32_t *)v2 || a1 == *(uint32_t **)(v2 + 2296) || (result = 1.0, (v1 & 8) == 0) )
  {
    v3 = G4_VCALL<int>(a1, 348);
    result = 1.0;
    if ( v3 != 0 )
    {
      (*(void (**)(uint32_t *))(*a1 + 52))(v5);
      v6[0] = *(float *)v5;
      v6[1] = *(float *)&v5[1];
      v6[2] = *(float *)&v5[2];
      return sub_C16910(v3, v6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16AC0  (binary VA: 0xc16ac0)
// Original: sub_C16AC0
// ----------------------------------------------------------------------------
int sub_C16AC0(uint32_t *a1)
{
  int result;
  int v2;
  int i;
  int v4;
  int v5;
  typedef int16_t _g4_t_v6;
  typedef int _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  *a1 = 1065353216;
  a1[3] = 1065353216;
  result = dword_20D90F0 + 540 * dword_20BAD70;
  if ( *(uint8_t *)(result + 328) != 0 )
  {
    v2 = (a1[5] - a1[4]) >> 2;
    if ( v2 > 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = a1[7];
        v7[0] = 1065353216;
        v6 = *(uint16_t *)(v4 + 4 * i);
        v5 = *(uint32_t *)(a1[4] + 4 * i);
        result = glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb(
                   v5,
                   v6,
                   0,
                   v7);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16B60  (binary VA: 0xc16b60)
// Original: sub_C16B60
// ----------------------------------------------------------------------------
int sub_C16B60(uint32_t *a1)
{
  glitch::video::CMaterial::Self **v1;
  glitch::video::CMaterial::Self **v2;
  glitch::video::CMaterial::Self *v3;
  bool v4;
  int result;
  glitch::video::CMaterial::Self **v6;

  v1 = (glitch::video::CMaterial::Self **)a1[5];
  v6 = (glitch::video::CMaterial::Self **)a1[4];
  if ( v6 != v1 )
  {
    v2 = (glitch::video::CMaterial::Self **)a1[4];
    do
    {
      v3 = *v2;
      if ( *v2 != nullptr )
      {
        v4 = *(uint32_t *)v3 == 2;
        _mm_mfence();
        if ( v4 )
          glitch::video::CMaterial::removeFromRootSceneNode(v3);
        if ( __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v3);
          gll_operator_delete_arr((int)(uintptr_t)(v3));
        }
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
  a1[5] = (uint32_t)(uintptr_t)(v6);
  result = a1[7];
  a1[8] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16BF0  (binary VA: 0xc16bf0)
// Original: sub_C16BF0
// ----------------------------------------------------------------------------
uint32_t * sub_C16BF0(int a1)
{
  uint32_t *result;
  glitch::video::CMaterial::Self **v2;
  glitch::video::CMaterial::Self **v3;
  glitch::video::CMaterial::Self *v4;
  bool v5;
  uint32_t *v6;
  uint32_t *v7;
  glitch::video::CMaterial::Self **v8;

  result = (uint32_t *)G4_VCALL<int>(a1, 348);
  if ( result != nullptr )
  {
    v2 = (glitch::video::CMaterial::Self **)result[5];
    v8 = (glitch::video::CMaterial::Self **)result[4];
    if ( v8 != v2 )
    {
      v3 = (glitch::video::CMaterial::Self **)result[4];
      do
      {
        v4 = *v3;
        if ( *v3 != nullptr )
        {
          v5 = *(uint32_t *)v4 == 2;
          _mm_mfence();
          if ( v5 )
          {
            v7 = result;
            glitch::video::CMaterial::removeFromRootSceneNode(v4);
            result = v7;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
          {
            v6 = result;
            glitch::video::CMaterial::Destroy(v4);
            gll_operator_delete_arr((int)(uintptr_t)(v4));
            result = v6;
          }
        }
        ++v3;
      }
      while ( v2 != v3 );
    }
    result[5] = (uint32_t)(uintptr_t)(v8);
    result[8] = result[7];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16C90  (binary VA: 0xc16c90)
// Original: sub_C16C90
// ----------------------------------------------------------------------------
int sub_C16C90(int a1)
{
  int v1;
  int result;
  uint32_t *v3;
  int v4;
  int v5;
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef int *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);

  v20 = &a1;
  v1 = a1;
  result = G4_VCALL<int>(a1, 168);
  if ( result != 0 )
  {
    result = G4_VCALL<int>(v1, 240);
    if ( (uint8_t)result != 0 )
    {
      if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v3 = nullptr;
      if ( byte_20D4E64 == 0 )
        v3 = (uint32_t *)(&unk_20D4E60);
      v4 = sub_974E20(v3);
      (*(void (**)(float *))(*(uint32_t *)v1 + 52))(&v17);
      v5 = *(uint32_t *)v4;
      if ( (*(uint8_t *)(v4 + 245) & 8) != 0 )
      {
        result = (*(int (**)(int))(v5 + 64))(v4);
        v8 = (float)(*(float *)(result + 12) + *(float *)result) * 0.5;
        v7 = (float)(*(float *)(result + 16) + *(float *)(result + 4)) * 0.5;
        v6 = (float)(*(float *)(result + 20) + *(float *)(result + 8)) * 0.5;
      }
      else
      {
        result = (*(int (**)(int))(v5 + 72))(v4);
        v6 = *(float *)(result + 56);
        v7 = *(float *)(result + 52);
        v8 = *(float *)(result + 48);
      }
      v9 = fsqrt(
             (float)((float)((float)(v18 - v7) * (float)(v18 - v7)) + (float)((float)(v17 - v8) * (float)(v17 - v8)))
           + (float)((float)(v19 - v6) * (float)(v19 - v6)))
         * 0.01f;
      *(float *)(v1 + 160) = v9;
      if ( v9 >= 0.0 )
      {
        result = *(uint32_t *)(v1 + 156);
        if ( result >= 0 && result < (unsigned int)dword_20D9380 )
        {
          v10 = dword_20D9370 + 36 * result;
          v11 = *(uint32_t *)(v10 + 24);
          v12 = v11 - 1;
          if ( v11 != 0 )
          {
            v13 = *(float **)(v10 + 20);
            v14 = 0;
            if ( v9 >= *v13 )
            {
              while ( ++v14 != v11 )
              {
                if ( v9 < v13[v14] )
                {
                  v12 = v14;
                  break;
                }
              }
            }
            else
            {
              v12 = 0;
            }
          }
          if ( (uint8_t)sub_62F450(0) == 0 || (*(uint8_t *)unk_20D186C) != 0 )
            goto LABEL_17;
          if ( *(uint32_t *)(*(uint32_t *)(v1 + 408) - 12) != 0 )
          {
            v15 = *(uint32_t *)(v1 + 404);
            if ( v15 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v15 + 36))(*(uint32_t *)(v1 + 404)) != 0 )
            {
              v16 = 0;
              if ( *(int *)(v1 + 1096) > 0 )
                v16 = **(uint32_t **)(v1 + 1104);
              if ( sub_8F0680() == v16 )
LABEL_17:
                v12 = 0;
            }
          }
          result = *(uint8_t *)(v1 + 397);
          if ( (uint8_t)result != v12 && (uint8_t)result != (uint8_t)v12 )
          {
            result = G4_VCALL<int>(v1, 132, (uint8_t)v12);
            *(uint8_t *)(v1 + 397) = result;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C16F50  (binary VA: 0xc16f50)
// Original: sub_C16F50
// ----------------------------------------------------------------------------
int sub_C16F50(int a1, int a2)
{
  int v2;
  int result;
  int *v4;
  int v5;

  v2 = *(uint32_t *)a1;
  *(float *)(a1 + 312) = (float)a2 * 0.001f;
  (*(void (**)(int))(v2 + 72))(a1);
  result = G4_VCALL<int>(a1, 168);
  if ( result != 0 )
  {
    result = *(uint32_t *)(G4_VCALL<int>(a1, 168) + 244) & 0x18;
    if ( result == 24 )
    {
      if ( *(uint8_t *)(a1 + 145) != 0 && *(uint32_t *)(a1 + 140) != 0 )
      {
        if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
        {
          sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
          __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
        }
        v4 = nullptr;
        if ( byte_20D3BC4 == 0 )
          v4 = (int *)(&dword_20D3BC0);
        v5 = sub_971F30((int)(uintptr_t)(v4));
        if ( *(uint32_t *)(a1 + 140) != 0 )
          sub_78C580(*(uint32_t *)(a1 + 140), v5 > 0);
      }
      return sub_C16C90(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C170A0  (binary VA: 0xc170a0)
// Original: sub_C170A0
// ----------------------------------------------------------------------------
int sub_C170A0(int a1)
{
  return *(uint32_t *)(a1 + 176) & 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C170B0  (binary VA: 0xc170b0)
// Original: sub_C170B0
// ----------------------------------------------------------------------------
int sub_C170B0(int a1)
{
  int result;
  const char *v2;
  void *v3;
  uint32_t *v4;
  volatile int32_t *v5;
  int v6;
  void (*v7)(int *, uint32_t **, const char *);
  volatile int32_t *v8;
  typedef int *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  result = G4_VCALL<int>(a1, 168);
  v2 = (const char *)result;
  if ( result != 0 )
  {
    if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
    {
      sub_5BEF40((int)(uintptr_t)(&unk_20D4D80));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
      __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D4D84 == 0 )
      v3 = &unk_20D4D80;
    v9 = (int *)sub_5B9810((int)(uintptr_t)(v3));
    while ( 1 )
    {
      result = glitch::scene::ISceneNode::getSceneNodeFromUID((glitch::scene::ISceneNode::Self *)&v10, v2);
      v4 = v10;
      if ( v10 == nullptr )
        break;
      v5 = (volatile int32_t *)((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 16)));
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v5, 4);
      }
      v6 = *v9;
      v11 = v4;
      v7 = *(void (**)(int *, uint32_t **, const char *))(v6 + 104);
      __sync_add_and_fetch((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 16) + 4), 1u);
      v7(v9, &v11, "gun_arrow-node");
      if ( v11 != nullptr )
      {
        v8 = (volatile int32_t *)((uint32_t *)((char *)v11 + *(uint32_t *)(*v11 - 16)));
        if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v8, 8);
          G4_VCALL<void>(v8, 4);
        }
      }
      G4_VCALL<void>(v4, 76, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C17240  (binary VA: 0xc17240)
// Original: sub_C17240
// ----------------------------------------------------------------------------
int sub_C17240(int a1, char a2)
{
  int v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  float v10; // xmm4_4
  __m128 v11;
  int v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  __m128 v29;
  __m128 v30;
  int v32;
  float *v33;
  void *v34;
  int v35;
  int v36;
  __m128 v37;
  __m128 v38;
  __m128 v39;
  __m128 v40;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  __m128 v44;
  __m128 v45;
  __m128 v46;
  __m128 v47;
  __m128 v48;
  __m128 v49;
  __m128 v50;
  __m128 v51;
  __m128 v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v2 = G4_VCALL<int>(a1, 232);
  if ( a2 != 0 && v2 != 0 )
  {
    if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D4E64 == 0 )
      v3 = &unk_20D4E60;
    v4 = sub_974E20(v3);
    v5 = G4_VCALL<int>(v2, 64);
    v6 = G4_VCALL<int>(v4, 356);
g4_m128_raw(v7) = *(unsigned int *)(v5 + 12);
    if (g4_m128_lane<float>(v7, 0) >= *(float *)(v6 + 108) )
    {
g4_m128_raw(v8) = *(unsigned int *)(v5 + 16);
      if (g4_m128_lane<float>(v8, 0) >= *(float *)(v6 + 112) )
      {
g4_m128_raw(v9) = *(unsigned int *)(v5 + 20);
        if (g4_m128_lane<float>(v9, 0) >= *(float *)(v6 + 116) )
        {
          v56 = *(float *)v5;
          if ( *(float *)v5 <= *(float *)(v6 + 120) )
          {
            v10 = *(float *)(v5 + 4);
            if ( v10 <= *(float *)(v6 + 124) )
            {
              v58 = *(float *)(v5 + 8);
              if ( v58 <= *(float *)(v6 + 128) )
              {
g4_m128_lane<int32_t>(v11, 0) = 0;
                v12 = 0;
                v13 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 20)), g4_m128_from<__m128>(0LL));
                v14 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 16)), g4_m128_from<__m128>(0LL));
                v15 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 12)), g4_m128_from<__m128>(0LL));
                if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v13, v9), 0)
                                                     | *(uint32_t *)(v5 + 8) &g4_m128_lane<int32_t>(v13, 0))
                                                   * *(float *)(v6 + 20))
                                           + *(float *)(v6 + 24))
                                   + (float)(COERCE_FLOAT(
                                               COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v14, v8), 0))
                                             | LODWORD(v10) &g4_m128_lane<int32_t>(v14, 0))
                                           * *(float *)(v6 + 16)))
                           + (float)(COERCE_FLOAT(
                                       COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v15, v7), 0))
                                     | LODWORD(v56) &g4_m128_lane<int32_t>(v15, 0))
                                   * *(float *)(v6 + 12))) <= 0.0 )
                {
                  v16 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 36)), v11);
                  v17 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 32)), v11);
                  LODWORD(v62) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v17, v8), 0))
                               | LODWORD(v10) &g4_m128_lane<int32_t>(v17, 0);
                  v18 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 28)), v11);
                  if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v16, v9), 0)
                                                       | LODWORD(v58) &g4_m128_lane<int32_t>(v16, 0))
                                                     * *(float *)(v6 + 36))
                                             + *(float *)(v6 + 40))
                                     + (float)(v62 * *(float *)(v6 + 32)))
                             + (float)(COERCE_FLOAT(
                                         COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v18, v7), 0))
                                       | LODWORD(v56) &g4_m128_lane<int32_t>(v18, 0))
                                     * *(float *)(v6 + 28))) <= 0.0 )
                  {
                    v19 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 52)), v11);
                    v20 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 48)), v11);
                    LODWORD(v63) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v20, v8), 0))
                                 | LODWORD(v10) &g4_m128_lane<int32_t>(v20, 0);
                    v21 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 44)), v11);
                    if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v19, v9), 0)
                                                         | LODWORD(v58) &g4_m128_lane<int32_t>(v19, 0))
                                                       * *(float *)(v6 + 52))
                                               + *(float *)(v6 + 56))
                                       + (float)(v63 * *(float *)(v6 + 48)))
                               + (float)(COERCE_FLOAT(
                                           COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v21, v7), 0))
                                         | LODWORD(v56) &g4_m128_lane<int32_t>(v21, 0))
                                       * *(float *)(v6 + 44))) <= 0.0 )
                    {
                      v22 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 68)), v11);
                      v23 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 64)), v11);
                      LODWORD(v64) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v23, v8), 0))
                                   | LODWORD(v10) &g4_m128_lane<int32_t>(v23, 0);
                      v24 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 60)), v11);
                      if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v22, v9), 0)
                                                           | LODWORD(v58) &g4_m128_lane<int32_t>(v22, 0))
                                                         * *(float *)(v6 + 68))
                                                 + *(float *)(v6 + 72))
                                         + (float)(v64 * *(float *)(v6 + 64)))
                                 + (float)(COERCE_FLOAT(
                                             COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v24, v7), 0))
                                           | LODWORD(v56) &g4_m128_lane<int32_t>(v24, 0))
                                         * *(float *)(v6 + 60))) <= 0.0 )
                      {
                        v25 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 84)), v11);
                        v26 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 80)), v11);
                        LODWORD(v65) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v26, v8), 0))
                                     | LODWORD(v10) &g4_m128_lane<int32_t>(v26, 0);
                        v27 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 76)), v11);
                        if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v25, v9), 0)
                                                             | LODWORD(v58) &g4_m128_lane<int32_t>(v25, 0))
                                                           * *(float *)(v6 + 84))
                                                   + *(float *)(v6 + 88))
                                           + (float)(v65 * *(float *)(v6 + 80)))
                                   + (float)(COERCE_FLOAT(
                                               COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v27, v7), 0))
                                             | LODWORD(v56) &g4_m128_lane<int32_t>(v27, 0))
                                           * *(float *)(v6 + 76))) <= 0.0 )
                        {
                          v28 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 100)), v11);
g4_m128_lane<int32_t>(v28, 0) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v28, v9), 0) | LODWORD(v58) &g4_m128_lane<int32_t>(v28, 0);
                          v29 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v6 + 96)), v11);
g4_m128_lane<float>(v29, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v29, v8), 0) | LODWORD(v10)
                                                                                            &g4_m128_lane<int32_t>(v29, 0))
                                          * *(float *)(v6 + 96);
                          v30 = _mm_cmplt_ss(g4_m128_u32(*(unsigned int *)(v6 + 92)), v11);
                          LOBYTE(v12) = (float)((float)((float)((float)(g4_m128_lane<float>(v28, 0) * *(float *)(v6 + 100))
                                                              + *(float *)(v6 + 104))
                                                      +g4_m128_lane<float>(v29, 0))
                                              + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v30, g4_m128_from<__m128>(LODWORD(v56))), 0)
                                                        |g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<int32_t>(v30, 0))
                                                      * *(float *)(v6 + 92))) <= 0.0;
                        }
                      }
                    }
                  }
                }
                return v12;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  v32 = G4_VCALL<int>(a1, 168);
  v12 = 0;
  if ( v32 == 0 )
    return v12;
  v33 = (float *)G4_VCALL<int>(a1, 236);
  v66 = *v33;
  v60 = v33[1];
  v67 = v33[2];
  v57 = v33[3];
  v59 = v33[4];
  v61 = v33[5];
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v34 = nullptr;
  if ( byte_20D4E64 == 0 )
    v34 = &unk_20D4E60;
  v35 = sub_974E20(v34);
  v36 = G4_VCALL<int>(v35, 356);
  if ( v57 < *(float *)(v36 + 108)
    || v59 < *(float *)(v36 + 112)
    || v61 < *(float *)(v36 + 116)
    || v66 > *(float *)(v36 + 120)
    || v60 > *(float *)(v36 + 124)
    || v67 > *(float *)(v36 + 128) )
  {
    return 0;
  }
g4_m128_lane<int32_t>(v37, 0) = 0;
  v12 = 0;
  v38 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 20)), g4_m128_from<__m128>(0LL));
  v39 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 16)), g4_m128_from<__m128>(0LL));
  v40 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 12)), g4_m128_from<__m128>(0LL));
  if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v38, g4_m128_from<__m128>(LODWORD(v61))), 0)
                                       | LODWORD(v67) &g4_m128_lane<int32_t>(v38, 0))
                                     * *(float *)(v36 + 20))
                             + *(float *)(v36 + 24))
                     + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v39, g4_m128_from<__m128>(LODWORD(v59))), 0) | LODWORD(v60)
                                                                                                 &g4_m128_lane<int32_t>(v39, 0))
                             * *(float *)(v36 + 16)))
             + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v40, g4_m128_from<__m128>(LODWORD(v57))), 0) | LODWORD(v66)
                                                                                         &g4_m128_lane<int32_t>(v40, 0))
                     * *(float *)(v36 + 12))) <= 0.0 )
  {
    v41 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 36)), v37);
    v42 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 32)), v37);
    v43 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 28)), v37);
    if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v41, g4_m128_from<__m128>(LODWORD(v61))), 0)
                                         | LODWORD(v67) &g4_m128_lane<int32_t>(v41, 0))
                                       * *(float *)(v36 + 36))
                               + *(float *)(v36 + 40))
                       + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v42, g4_m128_from<__m128>(LODWORD(v59))), 0) | LODWORD(v60) &g4_m128_lane<int32_t>(v42, 0))
                               * *(float *)(v36 + 32)))
               + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v43, g4_m128_from<__m128>(LODWORD(v57))), 0) | LODWORD(v66)
                                                                                           &g4_m128_lane<int32_t>(v43, 0))
                       * *(float *)(v36 + 28))) <= 0.0 )
    {
      v44 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 52)), v37);
      v45 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 48)), v37);
      v46 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 44)), v37);
      if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v44, g4_m128_from<__m128>(LODWORD(v61))), 0)
                                           | LODWORD(v67) &g4_m128_lane<int32_t>(v44, 0))
                                         * *(float *)(v36 + 52))
                                 + *(float *)(v36 + 56))
                         + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v45, g4_m128_from<__m128>(LODWORD(v59))), 0)
                                   | LODWORD(v60) &g4_m128_lane<int32_t>(v45, 0))
                                 * *(float *)(v36 + 48)))
                 + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v46, g4_m128_from<__m128>(LODWORD(v57))), 0) | LODWORD(v66)
                                                                                             &g4_m128_lane<int32_t>(v46, 0))
                         * *(float *)(v36 + 44))) <= 0.0 )
      {
        v47 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 68)), v37);
        v48 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 64)), v37);
        v49 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 60)), v37);
        if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v47, g4_m128_from<__m128>(LODWORD(v61))), 0)
                                             | LODWORD(v67) &g4_m128_lane<int32_t>(v47, 0))
                                           * *(float *)(v36 + 68))
                                   + *(float *)(v36 + 72))
                           + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v48, g4_m128_from<__m128>(LODWORD(v59))), 0)
                                     | LODWORD(v60) &g4_m128_lane<int32_t>(v48, 0))
                                   * *(float *)(v36 + 64)))
                   + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v49, g4_m128_from<__m128>(LODWORD(v57))), 0) | LODWORD(v66)
                                                                                               &g4_m128_lane<int32_t>(v49, 0))
                           * *(float *)(v36 + 60))) <= 0.0 )
        {
          v50 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 84)), v37);
          v51 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 80)), v37);
          v52 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 76)), v37);
          if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v50, g4_m128_from<__m128>(LODWORD(v61))), 0)
                                               | LODWORD(v67) &g4_m128_lane<int32_t>(v50, 0))
                                             * *(float *)(v36 + 84))
                                     + *(float *)(v36 + 88))
                             + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v51, g4_m128_from<__m128>(LODWORD(v59))), 0)
                                       | LODWORD(v60) &g4_m128_lane<int32_t>(v51, 0))
                                     * *(float *)(v36 + 80)))
                     + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v52, g4_m128_from<__m128>(LODWORD(v57))), 0) | LODWORD(v66)
                                                                                                 &g4_m128_lane<int32_t>(v52, 0))
                             * *(float *)(v36 + 76))) <= 0.0 )
          {
            v53 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 100)), v37);
            v54 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 96)), v37);
            v55 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v36 + 92)), v37);
            LOBYTE(v12) = (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v53, g4_m128_from<__m128>(LODWORD(v61))), 0)
                                                          | LODWORD(v67) &g4_m128_lane<int32_t>(v53, 0))
                                                        * *(float *)(v36 + 100))
                                                + *(float *)(v36 + 104))
                                        + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v54, g4_m128_from<__m128>(LODWORD(v59))), 0)
                                                  | LODWORD(v60) &g4_m128_lane<int32_t>(v54, 0))
                                                * *(float *)(v36 + 96)))
                                + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v55, g4_m128_from<__m128>(LODWORD(v57))), 0)
                                          | LODWORD(v66) &g4_m128_lane<int32_t>(v55, 0))
                                        * *(float *)(v36 + 92))) <= 0.0;
          }
        }
      }
    }
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: sub_C17A90  (binary VA: 0xc17a90)
// Original: sub_C17A90
// ----------------------------------------------------------------------------
int sub_C17A90(int a1, float *a2)
{
  int v2;
  int (*v3)(int, float *);
  int result;
  typedef float _g4_t_v5[4];
  typedef float _g4_t_v6[3];
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a1, 168);
    v3 = *(int (**)(int, float *))(*(uint32_t *)v2 + 176);
    sub_C122C0(v5, a2);
    return v3(v2, v5);
  }
  else
  {
    sub_C122C0(v6, a2);
    *(float *)(a1 + 88) = v6[0];
    *(float *)(a1 + 92) = v6[1];
    *(float *)(a1 + 96) = v6[2];
    result = v7;
    *(uint32_t *)(a1 + 100) = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C17B30  (binary VA: 0xc17b30)
// Original: sub_C17B30
// ----------------------------------------------------------------------------
int sub_C17B30(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int result;

  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a1, 168);
    return G4_VCALL<int>(v2, 176, a2);
  }
  else
  {
    a1[22] = *a2;
    a1[23] = a2[1];
    a1[24] = a2[2];
    result = a2[3];
    a1[25] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C17BB0  (binary VA: 0xc17bb0)
// Original: sub_C17BB0
// ----------------------------------------------------------------------------
uint32_t * sub_C17BB0(uint32_t *a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;

  if ( G4_VCALL<int>(a2, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a2, 168);
    v3 = (uint32_t *)G4_VCALL<int>(v2, 172);
    *a1 = *v3;
    a1[1] = v3[1];
    v4 = v3[2];
    v5 = v3[3];
    a1[2] = v4;
    a1[3] = v5;
  }
  else
  {
    *a1 = a2[22];
    a1[1] = a2[23];
    a1[2] = a2[24];
    a1[3] = a2[25];
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C17C30  (binary VA: 0xc17c30)
// Original: sub_C17C30
// ----------------------------------------------------------------------------
int sub_C17C30(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return g4_std_compat::string_assign(a1 + 172, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_C17C80  (binary VA: 0xc17c80)
// Original: sub_C17C80
// ----------------------------------------------------------------------------
int sub_C17C80(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 172, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_C17CB0  (binary VA: 0xc17cb0)
// Original: sub_C17CB0
// ----------------------------------------------------------------------------
int sub_C17CB0(int a1)
{
  int v1;
  char s[256];

  v1 = *(uint32_t *)(a1 + 408);
  if ( *(uint32_t *)(v1 - 12) == 0 )
    v1 = 0;
  sprintf(s, "%s_%x", v1, a1);
  return g4_std_compat::string_assign(a1 + 172, s, strlen(s));
}

// ----------------------------------------------------------------------------
// Function: sub_C17D80  (binary VA: 0xc17d80)
// Original: sub_C17D80
// ----------------------------------------------------------------------------
int sub_C17D80(uint32_t *a1)
{
  int *v1;
  int v2;
  const char *v3;
  const char *v4;
  const char *v5;
  int v6;
  int result;
  int *v8;
  typedef char _g4_t_v9[4];
  typedef float _g4_t_v10[3];
  typedef char _g4_t_v11[64];
  typedef char _g4_t_v12[64];
  typedef char _g4_t_s[284];
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (84u + sizeof(_g4_t_v12)) > _g4_s3 ? (84u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (148u + sizeof(_g4_t_s)) > _g4_s4 ? (148u + sizeof(_g4_t_s)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 84u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 148u);

  if ( G4_VCALL<int>(a1, 44) != 0 )
    G4_VCALL<void>(a1, 44);
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D4A64 == 0 )
    v1 = (int *)(&dword_20D4A60);
  if ( (uint8_t)sub_5B4AE0((int)(uintptr_t)(v1), (int)(uintptr_t)(a1)) != 0 )
  {
    if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
    {
      sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D4A64 == 0 )
      v8 = (int *)(&dword_20D4A60);
    sub_5B4B30((int)(uintptr_t)(v8), (int)(uintptr_t)(a1), (char *)&unk_1B15112);
    if ( G4_VCALL<int>(a1, 168) != 0 )
      goto LABEL_8;
  }
  else if ( G4_VCALL<int>(a1, 168) != 0 )
  {
LABEL_8:
    (*(void (**)(float *))(*a1 + 52))(v10);
    sprintf(s, "(%f, %f, %f)", v10[0], v10[1], v10[2]);
    goto LABEL_9;
  }
  strcpy(s, "N/A");
LABEL_9:
  v2 = a1[44];
  v3 = (const char *)&unk_1B15112;
  v4 = "E";
  v5 = "R";
  if ( (v2 & 1) == 0 )
    v4 = (const char *)&unk_1B15112;
  if ( (v2 & 0x200) == 0 )
    v5 = (const char *)&unk_1B15112;
  if ( (a1[44] & 1) == 0 )
    v3 = "D";
  sprintf(v9, "%s%s%s", v4, v5, v3);
  v6 = a1[42];
  switch ( v6 )
  {
    case 17:
      strcpy(v11, "NPC");
      break;
    case 4:
      strcpy(v11, "Car");
      break;
    case 28:
      strcpy(v11, "ParkedCar");
      break;
    default:
      sprintf(v11, "%i", a1[42]);
      break;
  }
  result = G4_VCALL<int>(a1, 192);
  if ( result != 17 && result != 4 && result != 28 )
    return sprintf(v12, "%i", result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18050  (binary VA: 0xc18050)
// Original: sub_C18050
// ----------------------------------------------------------------------------
int sub_C18050(int a1, int a2, char *s)
{
  int result;

  result = a2;
  switch ( a2 )
  {
    case 4:
      *(uint32_t *)s = 7496003;
      break;
    case 17:
      *(uint32_t *)s = 4411470;
      break;
    case 28:
      strcpy(s, "ParkedCar");
      break;
    default:
      return sprintf(s, "%i", a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C180D0  (binary VA: 0xc180d0)
// Original: sub_C180D0
// ----------------------------------------------------------------------------
uint32_t * sub_C180D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&unk_20D3E78);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C180F0  (binary VA: 0xc180f0)
// Original: sub_C180F0
// ----------------------------------------------------------------------------
int sub_C180F0(int a1, char a2)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    result = *(uint32_t *)(a1 + 404);
    if ( result != 0 )
      return G4_VCALL<int>(result, 60, ((a2 & 0x20) == 0) << a2,
               ((a2 & 0x20) != 0) << a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18150  (binary VA: 0xc18150)
// Original: sub_C18150
// ----------------------------------------------------------------------------
unsigned int sub_C18150(int a1, char a2)
{
  unsigned int result;

  result = G4_VCALL<int>(a1, 168);
  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 327) != 0 )
    return sub_C14BB0(result, a2, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C181C0  (binary VA: 0xc181c0)
// Original: sub_C181C0
// ----------------------------------------------------------------------------
unsigned int sub_C181C0(int a1)
{
  void *v1;
  unsigned int result;

  if ( byte_20D5030 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5030) != 0 )
  {
    sub_804900((int)(uintptr_t)(&unk_20D5038));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5030);
    __cxa_atexit((void (*)(void *))sub_8136E0, &unk_20D5038, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D503C == 0 )
    v1 = &unk_20D5038;
  result = sub_804A50((int)(uintptr_t)(v1));
  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 327) != 0 )
    return sub_C14BB0(a1, result, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C182B0  (binary VA: 0xc182b0)
// Original: sub_C182B0
// ----------------------------------------------------------------------------
unsigned int sub_C182B0(int a1, char a2)
{
  unsigned int result;

  result = a1;
  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 327) != 0 )
    return sub_C14BB0(a1, a2, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18320  (binary VA: 0xc18320)
// Original: sub_C18320
// ----------------------------------------------------------------------------
bool sub_C18320(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 420);
  v2 = sub_8F0680();
  return a1 == v2 || a1 == *(uint32_t *)(v2 + 2296) || (v1 & 8) == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_C18390  (binary VA: 0xc18390)
// Original: sub_C18390
// ----------------------------------------------------------------------------
bool sub_C18390(int a1, unsigned int a2)
{
  bool result;
  int v3;
  int v4;

  result = false;
  if ( a2 <= 3 )
  {
    v3 = *(uint32_t *)(a1 + 420);
    v4 = sub_8F0680();
    return v4 != a1 && a1 != *(uint32_t *)(v4 + 2296) && 1 << a2 == ((1 << a2) & v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18410  (binary VA: 0xc18410)
// Original: sub_C18410
// ----------------------------------------------------------------------------
int sub_C18410(uint8_t *a1)
{
  int result;

  result = a1[424];
  a1[424] = 1;
  if ( (uint8_t)result != 1 )
  {
    result = G4_VCALL<int>(a1, 168);
    if ( result != 0 )
      return G4_VCALL<int>(a1, 112, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18450  (binary VA: 0xc18450)
// Original: sub_C18450
// ----------------------------------------------------------------------------
int sub_C18450(int a1)
{
  int result;

  result = G4_VCALL<int>(a1, 168);
  if ( result != 0 )
    return G4_VCALL<int>(a1, 112, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18480  (binary VA: 0xc18480)
// Original: sub_C18480
// ----------------------------------------------------------------------------
int sub_C18480(int a1)
{
  int result;

  result = G4_VCALL<int>(a1, 168);
  if ( result != 0 )
    return G4_VCALL<int>(a1, 108, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C184B0  (binary VA: 0xc184b0)
// Original: sub_C184B0
// ----------------------------------------------------------------------------
glitch::scene::ISceneNode::Self * sub_C184B0(float a1, float a2, float a3, __m128 a4, float a5, int32_t a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, int a16, float a17, float a18, float a19, int a20, float a21, float a22, float a23, int a24, float a25, float a26, float a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, float a41, float a42, float a43, int a44, float a45, float a46, float a47, int a48, float a49, float a50, float a51, int a52, float a53, float a54, float a55, int a56, float a57, float a58, float a59, int a60)
{
  float v60;
  int v61;
  glitch::scene::ISceneNode::Self *result;
  int v63;
  int v64;
  int v65;
  __m128 v66;
  __m128 v67;
  float v68; // xmm0_4
  volatile int32_t *v69;
  glitch::scene::ISceneNode::Self *retaddr;

  v60 = a2;
  v61 = (*(int (**)(float))(*(uint32_t *)LODWORD(a1) + 168))(COERCE_FLOAT(LODWORD(a1)));
  result = (glitch::scene::ISceneNode::Self *)(*(int (**)(float))(*(uint32_t *)LODWORD(v60) + 168))(COERCE_FLOAT(LODWORD(v60)));
  retaddr = result;
  if ( result != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)((char *)result + *(uint32_t *)(*(uint32_t *)result - 16) + 4), 1u);
    result = retaddr;
    if ( v61 == 0 )
      goto LABEL_8;
    v63 = G4_VCALL<int>(v61, 72);
    a13 = *(float *)v63;
    a14 = *(float *)(v63 + 4);
    a15 = *(float *)(v63 + 8);
    a16 = *(uint32_t *)(v63 + 12);
    a17 = *(float *)(v63 + 16);
    a18 = *(float *)(v63 + 20);
    a19 = *(float *)(v63 + 24);
    a20 = *(uint32_t *)(v63 + 28);
    a21 = *(float *)(v63 + 32);
    a22 = *(float *)(v63 + 36);
    a23 = *(float *)(v63 + 40);
    a24 = *(uint32_t *)(v63 + 44);
    a25 = *(float *)(v63 + 48);
    a26 = *(float *)(v63 + 52);
    a27 = *(float *)(v63 + 56);
    a28 = *(uint32_t *)(v63 + 60);
    v64 = G4_VCALL<int>(retaddr, 72);
    a29 = *(uint32_t *)v64;
    a30 = *(uint32_t *)(v64 + 4);
    a31 = *(uint32_t *)(v64 + 8);
    a32 = *(uint32_t *)(v64 + 12);
    a33 = *(uint32_t *)(v64 + 16);
    a34 = *(uint32_t *)(v64 + 20);
    a35 = *(uint32_t *)(v64 + 24);
    a36 = *(uint32_t *)(v64 + 28);
    a37 = *(uint32_t *)(v64 + 32);
    a38 = *(uint32_t *)(v64 + 36);
    a39 = *(uint32_t *)(v64 + 40);
    a40 = *(uint32_t *)(v64 + 44);
    a41 = *(float *)(v64 + 48);
    a42 = *(float *)(v64 + 52);
    a43 = *(float *)(v64 + 56);
    a44 = *(uint32_t *)(v64 + 60);
    sub_C12080();
    sub_C12080();
    if ( (uint8_t)sub_C11970(&a13, &a45) != 0 )
    {
      a13 = a45;
      a14 = a46;
      a15 = a47;
      a16 = a48;
      a17 = a49;
      a18 = a50;
      a19 = a51;
      a20 = a52;
      a21 = a53;
      a22 = a54;
      a23 = a55;
      a24 = a56;
      a25 = a57;
      a26 = a58;
      a27 = a59;
      a28 = a60;
    }
    v65 = *((uint32_t *)retaddr + 52);
    a2 = (float)((float)((float)(a14 * a41) + (float)(a18 * a42)) + a26) + (float)(a22 * a43);
    a3 = (float)((float)((float)(a15 * a41) + (float)(a19 * a42)) + a27) + (float)(a23 * a43);
    a1 = (float)((float)((float)(a41 * a13) + (float)(a42 * a17)) + a25) + (float)(a43 * a21);
    G4_VCALL<void>(v65, 116, &retaddr);
    (*(void (**)(float, float *))(*(uint32_t *)LODWORD(v60) + 308))(COERCE_FLOAT(LODWORD(v60)), &a1);
    v66 = _mm_xor_ps(g4_to_m128((unsigned int)a6), g4_m128_from<__m128>(0x80000000));
    a5 = -a5;
    a6 =g4_m128_lane<int32_t>(v66, 0);
    a7 = -a7;
g4_m128_lane<float>(a4, 3) = (float)((float)((float)(a8 * a12) - (float)(a9 * a5)) - (float)(a10 *g4_m128_lane<float>(v66, 0)))
                   - (float)(a11 * a7);
    v67 = v66;
g4_m128_lane<float>(a4, 2) = (float)((float)((float)(a7 * a12) + (float)(a10 * a5)) + (float)(a11 * a8))
                   - (float)(a9 *g4_m128_lane<float>(v66, 0));
g4_m128_lane<float>(a4, 1) = (float)((float)((float)(g4_m128_lane<float>(v66, 0) * a12) + (float)(a9 * a7)) + (float)(a10 * a8))
                   - (float)(a11 * a5);
g4_m128_lane<float>(a4, 0) = (float)((float)((float)(a5 * a12) + (float)(g4_m128_lane<float>(v66, 0) * a11)) + (float)(a9 * a8))
                   - (float)(a7 * a10);
g4_m128_lane<float>(v67, 0) = (float)((float)((float)(g4_m128_lane<float>(a4, 1) *g4_m128_lane<float>(a4, 1)) + (float)(g4_m128_lane<float>(a4, 0) *g4_m128_lane<float>(a4, 0)))
                            + (float)(g4_m128_lane<float>(a4, 2) *g4_m128_lane<float>(a4, 2)))
                    + (float)(g4_m128_lane<float>(a4, 3) *g4_m128_lane<float>(a4, 3));
    if (g4_m128_lane<float>(v67, 0) != 0.0 )
    {
      v68 = 1.0 / fsqrt(g4_m128_lane<float>(v67, 0));
g4_m128_lane<float>(v67, 0) = (float)((float)((float)(g4_m128_lane<float>(v67, 0) * v68) * v68) + -3.0) * (float)(v68 * -0.5);
      a4 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), a4);
    }
    (*(void (**)(float, __m128 *))(*(uint32_t *)LODWORD(v60) + 316))(COERCE_FLOAT(LODWORD(v60)), &a4);
    G4_VCALL<void>(v61, 104, &retaddr);
    glitch::scene::ISceneNode::updateAbsolutePosition(retaddr, false);
    result = retaddr;
    if ( retaddr != nullptr )
    {
LABEL_8:
      v69 = (volatile int32_t *)((char *)result + *(uint32_t *)(*(uint32_t *)result - 16));
      result = (glitch::scene::ISceneNode::Self *)__sync_fetch_and_add(v69 + 1, 0xFFFFFFFF);
      if ( result == (glitch::scene::ISceneNode::Self *)((char *)&dword_0 + 1) )
      {
        G4_VCALL<void>(v69, 8);
        return (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(v69, 4);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18A00  (binary VA: 0xc18a00)
// Original: sub_C18A00
// ----------------------------------------------------------------------------
uint32_t * sub_C18A00(uint8_t *a1, int a2, int a3, uint32_t *a4, int a5, int a6, uint8_t *a7, uint32_t *a8, float a9, float a10, float a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31)
{
  uint32_t *result;
  int *v32;
  int v33;
  float *v34;
  float v35;
  float v36;
  float v37;
  void *v38;
  int v39;
  volatile int32_t *v40;
  volatile int32_t *v41;
  float *v42;
  float v43; // xmm0_4
  float v44; // xmm2_4
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
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
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;

  v81 = G4_VCALL<int>(a1, 168, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80);
  result = (uint32_t *)G4_VCALL<int>(a2, 168);
  a7 = (uint8_t *)(result);
  if ( result != nullptr )
  {
    __sync_add_and_fetch((uint32_t *)((char *)result + *(uint32_t *)(*result - 16) + 4), 1u);
    result = (uint32_t *)(a7);
    if ( a7 != nullptr )
    {
      if ( v81 == 0 )
        goto LABEL_17;
      v32 = (int *)G4_VCALL<int>(a7, 72);
      a16 = *v32;
      a17 = v32[1];
      a18 = v32[2];
      a19 = v32[3];
      a20 = v32[4];
      a21 = v32[5];
      a22 = v32[6];
      a23 = v32[7];
      a24 = v32[8];
      a25 = v32[9];
      a26 = v32[10];
      a27 = v32[11];
      a28 = v32[12];
      a29 = v32[13];
      a30 = v32[14];
      a31 = v32[15];
      sub_C12080((float *)&a12, (float *)&a16);
      v33 = *(uint32_t *)a7;
      if ( (a7[245] & 8) != 0 )
      {
        v42 = (float *)(*(int (**)(uint8_t *))(v33 + 64))(a7);
        v43 = (float)(v42[5] + v42[2]) * 0.5;
        v44 = (float)(v42[3] + *v42) * 0.5;
        a10 = (float)(v42[4] + v42[1]) * 0.5;
        a11 = v43;
        a9 = v44;
      }
      else
      {
        v34 = (float *)(*(int (**)(uint8_t *))(v33 + 72))(a7);
        v35 = v34[14];
        v36 = v34[13];
        v37 = v34[12];
        a10 = v36;
        a9 = v37;
        a11 = v35;
      }
      G4_VCALL<void>(v81, 116, &a7);
      a4 = (uint32_t *)(a7);
      if ( a7 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)&a7[*(uint32_t *)(*(uint32_t *)a7 - 16) + 4], 1u);
      if ( a1[380] != 0 )
      {
        v45 = *(uint32_t *)(sub_B97E00() + 16);
        a8 = a4;
        if ( a4 != nullptr )
          __sync_add_and_fetch((uint32_t *)((char *)a4 + *(uint32_t *)(*a4 - 16) + 4), 1u);
        sub_871E70(v45, (int)(uintptr_t)(&a8));
        if ( a8 != nullptr )
          sub_5459C0((uint32_t *)((char *)a8 + *(uint32_t *)(*a8 - 16)));
      }
      else
      {
        if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
        {
          sub_5BEF40((int)(uintptr_t)(&unk_20D4D80));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
          __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
        }
        v38 = nullptr;
        if ( byte_20D4D84 == 0 )
          v38 = &unk_20D4D80;
        v39 = sub_5B9810((int)(uintptr_t)(v38));
        G4_VCALL<void>(v39, 104, &a4);
      }
      if ( a4 != nullptr )
      {
        v40 = (volatile int32_t *)((uint32_t *)((char *)a4 + *(uint32_t *)(*a4 - 16)));
        if ( __sync_fetch_and_add(v40 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v40, 8);
          G4_VCALL<void>(v40, 4);
        }
      }
      G4_VCALL<void>(a2, 308, &a9);
      G4_VCALL<void>(a2, 316, &a12);
      result = (uint32_t *)(a7);
      if ( a7 != nullptr )
      {
LABEL_17:
        v41 = (volatile int32_t *)((uint32_t *)((char *)result + *(uint32_t *)(*result - 16)));
        result = (uint32_t *)__sync_fetch_and_add(v41 + 1, 0xFFFFFFFF);
        if ( result == (uint32_t *)(uintptr_t)((int *)((char *)&dword_0 + 1)) )
        {
          G4_VCALL<void>(v41, 8);
          return (uint32_t *)G4_VCALL<int>(v41, 4);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C18D50  (binary VA: 0xc18d50)
// Original: sub_C18D50
// ----------------------------------------------------------------------------
int sub_C18D50(float *a1)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v6;
  float v7; // xmm0_4
  typedef float _g4_t_v8;
  typedef uint32_t _g4_t_v9[3];
  typedef uint8_t _g4_t_v10[12];
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v9)) > _g4_s1 ? (52u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v10)) > _g4_s2 ? (64u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v11)) > _g4_s3 ? (76u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v12)) > _g4_s4 ? (80u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v13)) > _g4_s5 ? (84u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 76u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 84u);

  v1 = *((uint32_t *)a1 + 107);
  if ( v1 == -1 )
  {
    *((uint32_t *)a1 + 107) = dword_20DDD80;
    (*(void (**)(uint32_t *))(*(uint32_t *)a1 + 52))(v9);
    a1[108] = *(float *)v9;
    a1[109] = *(float *)&v9[1];
    a1[110] = *(float *)&v9[2];
    v1 = *((uint32_t *)a1 + 107);
  }
  v2 = dword_20DDD80 - v1;
  if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v3 = sub_973AF0();
  v4 = 0;
  if ( v2 >= v3 )
  {
    v6 = sub_8F0680();
    (*(void (**)(uint8_t *))(*(uint32_t *)v6 + 52))(v10);
    (*(void (**)(float *))(*(uint32_t *)a1 + 52))(&v11);
    v7 = (float)((float)((float)(a1[109] - v12) * (float)(a1[109] - v12))
               + (float)((float)(a1[108] - v11) * (float)(a1[108] - v11)))
       + (float)((float)(a1[110] - v13) * (float)(a1[110] - v13));
    if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
    {
      sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
      __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
    }
    v8 = sub_973B00();
    v4 = 1;
    if ( v8 < v7 )
    {
      a1[107] = NAN;
      return 0;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_C18FC0  (binary VA: 0xc18fc0)
// Original: sub_C18FC0
// ----------------------------------------------------------------------------
uint32_t * sub_C18FC0(uint32_t *a1, uint32_t *a2)
{
  a1[61] = *a2;
  a1[62] = a2[1];
  a1[63] = a2[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C18FF0  (binary VA: 0xc18ff0)
// Original: sub_C18FF0
// ----------------------------------------------------------------------------
uint32_t * sub_C18FF0(uint32_t *a1, uint32_t *a2)
{
  a1[64] = *a2;
  a1[65] = a2[1];
  a1[66] = a2[2];
  a1[67] = a2[3];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C19020  (binary VA: 0xc19020)
// Original: sub_C19020
// ----------------------------------------------------------------------------
int sub_C19020(uint32_t *a1)
{
  int *v1;
  int v2;
  int result;

  v1 = (int *)(sub_BDEE30(a1 + 70, a1[74]));
  v2 = v1[1];
  result = *v1;
  a1[72] = result;
  a1[73] = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C19080  (binary VA: 0xc19080)
// Original: sub_C19080
// ----------------------------------------------------------------------------
int sub_C19080(int a1)
{
  int v1;

  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 161) == 0 )
    return a1 + 224;
  v1 = a1 + 228;
  if ( g4_std::string::compare(a1 + 228, (char *)&unk_1B15112) == 0 )
    return a1 + 224;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_C19100  (binary VA: 0xc19100)
// Original: sub_C19100
// ----------------------------------------------------------------------------
int sub_C19100(int a1, uint32_t **a2)
{
  void *v2;
  int v3;
  int result;
  int v5;
  uint32_t *v6;
  volatile int32_t *v7;
  typedef uint32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  if ( *(uint8_t *)(a1 + 380) != 0 )
  {
    v5 = *(uint32_t *)(sub_B97E00() + 16);
    v6 = *a2;
    v8 = *a2;
    if ( v8 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16) + 4), 1u);
    result = sub_871E70(v5, (int)(uintptr_t)(&v8));
    if ( v8 != nullptr )
    {
      v7 = (volatile int32_t *)((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16)));
      result = __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        G4_VCALL<void>(v7, 8);
        return G4_VCALL<int>(v7, 4);
      }
    }
  }
  else
  {
    if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
    {
      sub_5BEF40((int)(uintptr_t)(&unk_20D4D80));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
      __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
    }
    v2 = nullptr;
    if ( byte_20D4D84 == 0 )
      v2 = &unk_20D4D80;
    v3 = sub_5B9810((int)(uintptr_t)(v2));
    return G4_VCALL<int>(v3, 104, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C19230  (binary VA: 0xc19230)
// Original: sub_C19230
// ----------------------------------------------------------------------------
void sub_C19230(int a1)
{
  int v1;
  int v2;
  int *v3;
  void (*v4)(int *, int, char **, uint32_t **);
  uint32_t *v5;
  volatile int32_t *v6;
  void (*v7)(int *, int, char **, uint32_t **);
  uint32_t *v8;
  volatile int32_t *v9;
  void (*v10)(int *, int, char **, uint32_t **);
  uint32_t *v11;
  volatile int32_t *v12;
  void (*v13)(int *, int, char **, uint32_t **);
  uint32_t *v14;
  volatile int32_t *v15;
  uint32_t *v16;
  int v17;
  void (*v18)(int *, int, char **, uint32_t **);
  volatile int32_t *v19;
  int v20;
  void (*v21)(int *, int, char **, uint32_t **);
  volatile int32_t *v22;
  int v23;
  void (*v24)(int *, int, char **, uint32_t **);
  volatile int32_t *v25;
  int v26;
  void (*v27)(int *, int, char **, uint32_t **);
  volatile int32_t *v28;
  char *v29;
  int v30;
  int v31;
  int8_t *v32;
  glitch::scene::ISceneNode::Self **v33;
  int v34;
  glitch::scene::ISceneNode::Self **v35;
  glitch::scene::ISceneNode::Self *v36;
  int *v37;
  char *v38;
  size_t v39;
  int v40;
  const char *v41;
  int32_t v42;
  char *v43;
  char *v44;
  volatile int32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  const char *v48;
  int32_t v49;
  int v50;
  int32_t v51;
  int32_t v52;
  int32_t v53;
  char v54;
  int v55;
  uint32_t *v56;
  int32_t v57;
  int32_t v58;
  int32_t v59;
  int v60;
  int32_t *v61;
  int32_t v62;
  int32_t v63;
  int32_t v64;
  int32_t *v65;
  int32_t v66;
  int32_t v67;
  int32_t v68;
  glitch::scene::ISceneNode::Self **v69;
  int v70;
  int v71;
  const char *v72;
  int v73;
  typedef volatile int32_t *_g4_t_v74;
  typedef volatile int32_t *_g4_t_v75;
  typedef volatile int32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef const char *_g4_t_v78;
  typedef const char *_g4_t_v79;
  typedef char *_g4_t_v80;
  typedef const char *_g4_t_v81;
  typedef char _g4_t_v82;
  typedef glitch::scene::ISceneNode::Self **_g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef const char *_g4_t_v86;
  typedef int32_t _g4_t_v87;
  typedef uint32_t *_g4_t_Children;
  typedef const char **_g4_t_v89;
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  typedef int _g4_t_v92;
  typedef const char *_g4_t_v93[2];
  typedef glitch::scene::ISceneNode::Self *_g4_t_v94;
  typedef const char *_g4_t_v95;
  typedef uint32_t *_g4_t_v96;
  typedef uint32_t *_g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef uint32_t *_g4_t_v101;
  typedef uint32_t *_g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef glitch::scene::ISceneNode::Self **_g4_t_v104;
  typedef glitch::scene::ISceneNode::Self **_g4_t_v105;
  typedef glitch::scene::ISceneNode::Self **_g4_t_v106;
  typedef char *_g4_t_v107;
  typedef char *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint32_t _g4_t_v110[8];
  typedef __m128i _g4_t_v111;
  typedef __m128i _g4_t_v112;
  typedef __m128i _g4_t_v113;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v74)) > _g4_s0 ? (8u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v75)) > _g4_s1 ? (8u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v76)) > _g4_s2 ? (8u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v77)) > _g4_s3 ? (8u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v78)) > _g4_s4 ? (8u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v79)) > _g4_s5 ? (8u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v80)) > _g4_s6 ? (8u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v81)) > _g4_s7 ? (8u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (15u + sizeof(_g4_t_v82)) > _g4_s8 ? (15u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v83)) > _g4_s9 ? (16u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v84)) > _g4_s10 ? (20u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v85)) > _g4_s11 ? (32u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v86)) > _g4_s12 ? (40u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v87)) > _g4_s13 ? (40u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_Children)) > _g4_s14 ? (40u + sizeof(_g4_t_Children)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v89)) > _g4_s15 ? (44u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (59u + sizeof(_g4_t_v90)) > _g4_s16 ? (59u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v91)) > _g4_s17 ? (60u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (61u + sizeof(_g4_t_v92)) > _g4_s18 ? (61u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v93)) > _g4_s19 ? (64u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v94)) > _g4_s20 ? (72u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v95)) > _g4_s21 ? (76u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v96)) > _g4_s22 ? (80u + sizeof(_g4_t_v96)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v97)) > _g4_s23 ? (84u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v98)) > _g4_s24 ? (88u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v99)) > _g4_s25 ? (92u + sizeof(_g4_t_v99)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v100)) > _g4_s26 ? (96u + sizeof(_g4_t_v100)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v101)) > _g4_s27 ? (100u + sizeof(_g4_t_v101)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v102)) > _g4_s28 ? (104u + sizeof(_g4_t_v102)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v103)) > _g4_s29 ? (108u + sizeof(_g4_t_v103)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v104)) > _g4_s30 ? (112u + sizeof(_g4_t_v104)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v105)) > _g4_s31 ? (116u + sizeof(_g4_t_v105)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v106)) > _g4_s32 ? (120u + sizeof(_g4_t_v106)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v107)) > _g4_s33 ? (128u + sizeof(_g4_t_v107)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v108)) > _g4_s34 ? (132u + sizeof(_g4_t_v108)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v109)) > _g4_s35 ? (136u + sizeof(_g4_t_v109)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v110)) > _g4_s36 ? (144u + sizeof(_g4_t_v110)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v111)) > _g4_s37 ? (176u + sizeof(_g4_t_v111)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v112)) > _g4_s38 ? (192u + sizeof(_g4_t_v112)) : _g4_s38,
    _g4_s40 = (208u + sizeof(_g4_t_v113)) > _g4_s39 ? (208u + sizeof(_g4_t_v113)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 8u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 8u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 8u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 8u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 15u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 16u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 20u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 32u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_Children &Children = *reinterpret_cast<_g4_t_Children *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 59u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 60u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 61u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 64u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 72u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 76u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 80u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 84u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 88u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 92u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 100u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 108u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 120u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 128u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 132u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 136u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 144u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 176u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 192u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 208u);

  if ( *(uint8_t *)(a1 + 316) != 0 )
    return;
  *(uint8_t *)(a1 + 316) = 1;
  v1 = a1 + 220;
  v2 = sub_5B3FE0(*(uint32_t *)(a1 + 64), a1 + 220);
  *(uint32_t *)(a1 + 156) = v2;
  if ( v2 < 0 || v2 >= (unsigned int)dword_20D9380 )
  {
    g4_std::string::clear(v1, 0, *(uint32_t *)(*(uint32_t *)(a1 + 220) - 12), 0);
    return;
  }
  g4_std::string::clear(v1, 0, *(uint32_t *)(*(uint32_t *)(a1 + 220) - 12), 0);
  v104 = nullptr;
  v111 = g4_to_m128i(0);
  v105 = nullptr;
  v112 = g4_to_m128i(0);
  v106 = nullptr;
  v113 = g4_to_m128i(0);
  v3 = *(int **)(sub_B97E00() + 16);
  v107 = nullptr;
  v108 = nullptr;
  v109 = 0;
  v4 = *(void (**)(int *, int, char **, uint32_t **))(*v3 + 36);
  v5 = (uint32_t *)G4_VCALL<int>(a1, 168);
  v96 = v5;
  if ( v5 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 16) + 4), 1u);
  v4(v3, 1835360612, &v107, &v96);
  if ( v96 != nullptr )
  {
    v6 = (volatile int32_t *)((uint32_t *)((char *)v96 + *(uint32_t *)(*v96 - 16)));
    if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v6, 8);
      G4_VCALL<void>(v6, 4);
    }
  }
  v7 = *(void (**)(int *, int, char **, uint32_t **))(*v3 + 36);
  v8 = (uint32_t *)G4_VCALL<int>(a1, 168);
  v97 = v8;
  if ( v8 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16) + 4), 1u);
  v7(v3, 1936023908, &v107, &v97);
  if ( v97 != nullptr )
  {
    v9 = (volatile int32_t *)((uint32_t *)((char *)v97 + *(uint32_t *)(*v97 - 16)));
    if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v9, 8);
      G4_VCALL<void>(v9, 4);
    }
  }
  v10 = *(void (**)(int *, int, char **, uint32_t **))(*v3 + 36);
  v11 = (uint32_t *)G4_VCALL<int>(a1, 168);
  v98 = v11;
  if ( v11 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v11 + *(uint32_t *)(*v11 - 16) + 4), 1u);
  v10(v3, 1298489700, &v107, &v98);
  if ( v98 != nullptr )
  {
    v12 = (volatile int32_t *)((uint32_t *)((char *)v98 + *(uint32_t *)(*v98 - 16)));
    if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v12, 8);
      G4_VCALL<void>(v12, 4);
    }
  }
  v13 = *(void (**)(int *, int, char **, uint32_t **))(*v3 + 36);
  v14 = (uint32_t *)G4_VCALL<int>(a1, 168);
  v99 = v14;
  if ( v14 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v14 + *(uint32_t *)(*v14 - 16) + 4), 1u);
  v13(v3, 1734697316, &v107, &v99);
  if ( v99 != nullptr )
  {
    v15 = (volatile int32_t *)((uint32_t *)((char *)v99 + *(uint32_t *)(*v99 - 16)));
    if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v15, 8);
      G4_VCALL<void>(v15, 4);
    }
  }
  v16 = (uint32_t *)G4_VCALL<int>(a1, 332);
  if ( v16 != nullptr )
  {
    v17 = *v3;
    v100 = v16;
    v18 = *(void (**)(int *, int, char **, uint32_t **))(v17 + 36);
    __sync_add_and_fetch((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16) + 4), 1u);
    v18(v3, 1835360612, &v107, &v100);
    if ( v100 != nullptr )
    {
      v19 = (volatile int32_t *)((uint32_t *)((char *)v100 + *(uint32_t *)(*v100 - 16)));
      if ( __sync_fetch_and_add(v19 + 1, 0xFFFFFFFF) == 1 )
      {
        v74 = v19;
        G4_VCALL<void>(v19, 8);
        G4_VCALL<void>(v74, 4);
      }
    }
    v20 = *v3;
    v101 = v16;
    v21 = *(void (**)(int *, int, char **, uint32_t **))(v20 + 36);
    __sync_add_and_fetch((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16) + 4), 1u);
    v21(v3, 1936023908, &v107, &v101);
    if ( v101 != nullptr )
    {
      v22 = (volatile int32_t *)((uint32_t *)((char *)v101 + *(uint32_t *)(*v101 - 16)));
      if ( __sync_fetch_and_add(v22 + 1, 0xFFFFFFFF) == 1 )
      {
        v75 = v22;
        G4_VCALL<void>(v22, 8);
        G4_VCALL<void>(v75, 4);
      }
    }
    v23 = *v3;
    v102 = v16;
    v24 = *(void (**)(int *, int, char **, uint32_t **))(v23 + 36);
    __sync_add_and_fetch((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16) + 4), 1u);
    v24(v3, 1298489700, &v107, &v102);
    if ( v102 != nullptr )
    {
      v25 = (volatile int32_t *)((uint32_t *)((char *)v102 + *(uint32_t *)(*v102 - 16)));
      if ( __sync_fetch_and_add(v25 + 1, 0xFFFFFFFF) == 1 )
      {
        v76 = v25;
        G4_VCALL<void>(v25, 8);
        G4_VCALL<void>(v76, 4);
      }
    }
    v26 = *v3;
    v103 = v16;
    v27 = *(void (**)(int *, int, char **, uint32_t **))(v26 + 36);
    __sync_add_and_fetch((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16) + 4), 1u);
    v27(v3, 1734697316, &v107, &v103);
    if ( v103 != nullptr )
    {
      v28 = (volatile int32_t *)((uint32_t *)((char *)v103 + *(uint32_t *)(*v103 - 16)));
      if ( __sync_fetch_and_add(v28 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v28, 8);
        G4_VCALL<void>(v28, 4);
      }
    }
  }
  v29 = v107;
  v84 = 0;
  v82 = 0;
  if ( (unsigned int)(v108 - v107) >> 2 != 0 )
  {
    v30 = 0;
    while ( 1 )
    {
      v94 = *(glitch::scene::ISceneNode::Self **)(*(uint32_t *)&v29[4 * v30] + 208);
      v86 = (const char *)G4_VCALL<int>(v94, 48);
      sprintf((char *)v110, "%d", 0);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "_lod", (int)(uintptr_t)(&v90));
      g4_std::string::append((int)(uintptr_t)(&v95), v110, strlen((const char *)v110));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v93), "__p0_", (int)(uintptr_t)(&v91));
      g4_std::string::append((int)(uintptr_t)(v93), v110, strlen((const char *)v110));
      g4_std::string::append((int)(uintptr_t)(v93), "__00", 4u);
      if ( strstr(v86, v95) != nullptr || strstr(v86, v93[0]) != nullptr )
        break;
      g4_std::string::Destroy(v93);
      g4_std::string::Destroy(&v95);
      sprintf((char *)v110, "%d", 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "_lod", (int)(uintptr_t)(&v90));
      g4_std::string::append((int)(uintptr_t)(&v95), v110, strlen((const char *)v110));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v93), "__p0_", (int)(uintptr_t)(&v91));
      g4_std::string::append((int)(uintptr_t)(v93), v110, strlen((const char *)v110));
      g4_std::string::append((int)(uintptr_t)(v93), "__00", 4u);
      if ( strstr(v86, v95) != nullptr || strstr(v86, v93[0]) != nullptr )
      {
        v31 = 2;
        v84 = 1;
        goto LABEL_42;
      }
      g4_std::string::Destroy(v93);
      g4_std::string::Destroy(&v95);
      sprintf((char *)v110, "%d", 2);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "_lod", (int)(uintptr_t)(&v90));
      g4_std::string::append((int)(uintptr_t)(&v95), v110, strlen((const char *)v110));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v93), "__p0_", (int)(uintptr_t)(&v91));
      g4_std::string::append((int)(uintptr_t)(v93), v110, strlen((const char *)v110));
      g4_std::string::append((int)(uintptr_t)(v93), "__00", 4u);
      if ( strstr(v86, v95) != nullptr || strstr(v86, v93[0]) != nullptr )
      {
        v31 = 3;
        v84 = 2;
        goto LABEL_42;
      }
      g4_std::string::Destroy(v93);
      g4_std::string::Destroy(&v95);
      if ( v105 == v106 )
      {
        sub_C117F0();
      }
      else
      {
        v69 = nullptr;
        if ( v105 != nullptr )
        {
          *v105 = v94;
          v69 = v105;
        }
        v105 = v69 + 1;
      }
LABEL_47:
      v29 = v107;
      if ( ++v30 >= (unsigned int)((v108 - v107) >> 2) )
        goto LABEL_48;
    }
    v31 = 1;
    v84 = 0;
LABEL_42:
    v32 = &g4_m128_lane<int8_t>(v111, 12 * v31);
    v33 = *((glitch::scene::ISceneNode::Self ***)v32 + 1);
    if ( v33 == *((glitch::scene::ISceneNode::Self ***)v32 + 2) )
    {
      sub_C117F0();
    }
    else
    {
      v34 = 0;
      if ( v33 != nullptr )
      {
        *v33 = v94;
        v34 = *((uint32_t *)v32 + 1);
      }
      *((uint32_t *)v32 + 1) = v34 + 4;
    }
    g4_std::string::Destroy(v93);
    g4_std::string::Destroy(&v95);
    v82 = 1;
    goto LABEL_47;
  }
LABEL_48:
  v83 = v105;
  if ( v105 != v104 )
  {
    v85 = (int)(uintptr_t)(v104);
    v35 = v104;
    do
    {
      v36 = *v35;
      v94 = *v35;
      if ( *(uint32_t *)(a1 + 168) == 17 )
      {
        v87 =g4_m128_lane<int32_t>(v112, 3);
        v37 = (int *)g4_m128_lane<int32_t>(v112, 2);
        if (g4_m128_lane<int32_t>(v112, 3) !=g4_m128_lane<int32_t>(v112, 2) )
        {
          v89 = &v95;
          while ( 1 )
          {
            v77 = *v37;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "_lod1", (int)(uintptr_t)(&v92));
            v38 = (char *)G4_VCALL<int>(v77, 48);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v110), v38, (int)(uintptr_t)(&v92) + 1);
            v78 = v95;
            v39 = strlen(v95);
            v40 = g4_std_compat::string_find(v110, v78, 0, v39);
            if ( v40 != 0 )
            {
              sub_193A9B0((int)(uintptr_t)(v110), v40, 5, &unk_1B15112, 0);
              v79 = (const char *)v110[0];
              v41 = (const char *)G4_VCALL<int>(v94, 48);
              if ( strcmp(v41, v79) == 0 )
                break;
            }
            ++v37;
            g4_std::string::Destroy(v110);
            g4_std::string::Destroy(&v95);
            if ( (int *)v87 == v37 )
              goto LABEL_56;
          }
          g4_std::string::Destroy(v110);
LABEL_88:
          g4_std::string::Destroy(v89);
          if (g4_m128_lane<int32_t>(v112, 0) ==g4_m128_lane<int32_t>(v112, 1) )
          {
LABEL_98:
            sub_C117F0();
          }
          else
          {
            v49 = 0;
            if (g4_m128_lane<int32_t>(v112, 0) != 0 )
            {
              *(uint32_t *)g4_m128_lane<int32_t>(v112, 0) = (uint32_t)(uintptr_t)(v94);
              v49 =g4_m128_lane<int32_t>(v112, 0);
            }
g4_m128_lane<int32_t>(v112, 0) = v49 + 4;
          }
        }
      }
      else
      {
        Children = (uint32_t *)glitch::scene::ISceneNode::getChildren(v36);
        if ( *Children != 0 && Children != (uint32_t *)*Children )
        {
          v89 = (const char **)v110;
          v46 = (uint32_t *)*Children;
          while ( 1 )
          {
            v47 = v46 - 1;
            if ( v46 == nullptr )
              v47 = nullptr;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v110), "_lod", (int)(uintptr_t)(&v92) + 2);
            if ( G4_VCALL<int>(v47, 48) != 0 )
            {
              v81 = (const char *)v110[0];
              v48 = (const char *)G4_VCALL<int>(v47, 48);
              if ( strstr(v48, v81) != nullptr )
                goto LABEL_88;
            }
            g4_std::string::Destroy(v110);
            v46 = (uint32_t *)*v46;
            if ( Children == v46 )
            {
LABEL_56:
              if (g4_m128_lane<int32_t>(v111, 1) ==g4_m128_lane<int32_t>(v111, 2) )
                goto LABEL_98;
              v42 = 0;
              if (g4_m128_lane<int32_t>(v111, 1) != 0 )
              {
                *(uint32_t *)g4_m128_lane<int32_t>(v111, 1) = (uint32_t)(uintptr_t)(v94);
                v42 =g4_m128_lane<int32_t>(v111, 1);
              }
g4_m128_lane<int32_t>(v111, 1) = v42 + 4;
              break;
            }
          }
        }
      }
      v85 += 4;
      v35 = (glitch::scene::ISceneNode::Self **)v85;
    }
    while ( v83 != (glitch::scene::ISceneNode::Self **)v85 );
  }
  if ( v82 != 0 )
  {
    v50 = sub_4EBC30(0x34u, 1);
    *(uint32_t *)v50 = 4;
    *(__m128i *)(v50 + 4) = g4_m128_from<__m128i>(0LL);
    *(__m128i *)(v50 + 20) = g4_m128_from<__m128i>(0LL);
    *(__m128i *)(v50 + 36) = g4_m128_from<__m128i>(0LL);
    *(uint32_t *)(a1 + 416) = v50 + 4;
    v51 = *(uint32_t *)(v50 + 4);
    *(uint32_t *)(v50 + 4) =g4_m128_lane<int32_t>(v111, 0);
g4_m128_lane<int32_t>(v111, 0) = v51;
    v52 = *(uint32_t *)(v50 + 8);
    *(uint32_t *)(v50 + 8) =g4_m128_lane<int32_t>(v111, 1);
g4_m128_lane<int32_t>(v111, 1) = v52;
    v53 = *(uint32_t *)(v50 + 12);
    *(uint32_t *)(v50 + 12) =g4_m128_lane<int32_t>(v111, 2);
    v54 = 0;
g4_m128_lane<int32_t>(v111, 2) = v53;
    v55 = 1;
    if (g4_m128_lane<int32_t>(v112, 0) !=g4_m128_lane<int32_t>(v111, 3) )
    {
      v56 = *(uint32_t **)(a1 + 416);
      v57 = v56[3];
      v56[3] =g4_m128_lane<int32_t>(v111, 3);
g4_m128_lane<int32_t>(v111, 3) = v57;
      v58 = v56[4];
      v56[4] =g4_m128_lane<int32_t>(v112, 0);
g4_m128_lane<int32_t>(v112, 0) = v58;
      v59 = v56[5];
      v56[5] =g4_m128_lane<int32_t>(v112, 1);
g4_m128_lane<int32_t>(v112, 1) = v59;
      v55 = 2;
      v54 = 1;
    }
    if (g4_m128_lane<int32_t>(v112, 3) ==g4_m128_lane<int32_t>(v112, 2) && v84 != 0 )
    {
      v54 = 0;
    }
    else
    {
      v60 = 3 * v55++;
      v61 = (int32_t *)(*(uint32_t *)(a1 + 416) + 4 * v60);
      v62 = *v61;
      *v61 =g4_m128_lane<int32_t>(v112, 2);
g4_m128_lane<int32_t>(v112, 2) = v62;
      v63 = v61[1];
      v61[1] =g4_m128_lane<int32_t>(v112, 3);
g4_m128_lane<int32_t>(v112, 3) = v63;
      v64 = v61[2];
      v61[2] =g4_m128_lane<int32_t>(v113, 0);
g4_m128_lane<int32_t>(v113, 0) = v64;
    }
    if (g4_m128_lane<int32_t>(v113, 2) ==g4_m128_lane<int32_t>(v113, 1) && v84 > 1 )
      goto LABEL_118;
    v65 = (int32_t *)(*(uint32_t *)(a1 + 416) + 12 * v55);
    v66 = *v65;
    *v65 =g4_m128_lane<int32_t>(v113, 1);
g4_m128_lane<int32_t>(v113, 1) = v66;
    v67 = v65[1];
    v65[1] =g4_m128_lane<int32_t>(v113, 2);
g4_m128_lane<int32_t>(v113, 2) = v67;
    v68 = v65[2];
    v65[2] =g4_m128_lane<int32_t>(v113, 3);
g4_m128_lane<int32_t>(v113, 3) = v68;
    if ( v54 == 0 )
    {
LABEL_118:
      v70 = sub_4EBDC0(0x3Fu);
      *(uint32_t *)(v70 + 4) = 50;
      *(uint32_t *)(v70 + 8) = 0;
      std::memcpy((void *)(v70 + 12), "ERROR [for ARTIST]: There are missing lod nodes:\n\n", 50);
      if ( (void *)v70 != &unk_20D3E6C )
      {
        *(uint32_t *)(v70 + 8) = 0;
        *(uint32_t *)v70 = 50;
        *(uint8_t *)(v70 + 62) = 0;
      }
      v110[0] = v70 + 12;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v110,
        "\nPlease verify file: ");
      v71 = G4_VCALL<int>(a1, 168);
      v72 = (const char *)G4_VCALL<int>(v71, 96);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v110,
        v72);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v110,
        (const char *)&a0[1]);
      v73 = v110[0] - 12;
      if ( (void *)(v110[0] - 12) != &unk_20D3E6C
        && __sync_fetch_and_add((volatile int32_t *)(v110[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr(v73);
      }
    }
    G4_VCALL<void>(a1, 132, 0);
  }
  v43 = v108;
  v44 = v107;
  if ( v108 != v107 )
  {
    do
    {
      if ( *(uint32_t *)v44 != 0 )
      {
        v45 = (volatile int32_t *)(*(uint32_t *)(**(uint32_t **)v44 - 16) + *(uint32_t *)v44);
        if ( __sync_fetch_and_add(v45 + 1, 0xFFFFFFFF) == 1 )
        {
          v80 = v43;
          G4_VCALL<void>(v45, 8);
          G4_VCALL<void>(v45, 4);
          v43 = v80;
        }
      }
      v44 += 4;
    }
    while ( v43 != v44 );
    v44 = v107;
  }
  if ( v44 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v44));
  if ( v104 != nullptr )
    sub_4EB870((int)(uintptr_t)(v104));
  if (g4_m128_lane<int32_t>(v113, 1) != 0 )
    sub_4EB870(g4_m128_lane<int32_t>(v113, 1));
  if (g4_m128_lane<int32_t>(v112, 2) != 0 )
    sub_4EB870(g4_m128_lane<int32_t>(v112, 2));
  if (g4_m128_lane<int32_t>(v111, 3) != 0 )
    sub_4EB870(g4_m128_lane<int32_t>(v111, 3));
  if (g4_m128_lane<int32_t>(v111, 0) != 0 )
    sub_4EB870(g4_m128_lane<int32_t>(v111, 0));
}

// ----------------------------------------------------------------------------
// Function: sub_C1A310  (binary VA: 0xc1a310)
// Original: sub_C1A310
// ----------------------------------------------------------------------------
void sub_C1A310(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7[4];

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 452);
  if ( a2 != 0 )
    v2 = a2 + 12;
  if ( v3 != 0 )
    sub_5459F0(a1 + 452, v3 + 16);
  if ( v2 != 0 )
  {
    v4 = 0;
    *(uint32_t *)(a1 + 452) = v2 - 12;
    v7[0] = a1 + 452;
    if ( v2 != 12 )
      v4 = v2;
    v5 = *(char **)(v4 + 8);
    if ( v5 == *(char **)(v4 + 12) )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v4 + 4, v5, v7);
    }
    else
    {
      v6 = 0;
      if ( v5 != nullptr )
      {
        *(uint32_t *)v5 = a1 + 452;
        v6 = *(uint32_t *)(v4 + 8);
      }
      *(uint32_t *)(v4 + 8) = v6 + 4;
    }
  }
  else
  {
    *(uint32_t *)(a1 + 452) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1A3E0  (binary VA: 0xc1a3e0)
// Original: sub_C1A3E0
// ----------------------------------------------------------------------------
void * sub_C1A3E0(int a1, int a2)
{
  bool v2;
  int *v3;
  void *result;
  int v5[7];

  sub_734B50(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206B548);
  v2 = byte_20D4A50 == 0;
  *(uint32_t *)(a1 + 12) = ((uint32_t)(uintptr_t)&off_206B6BC);
  *(uint8_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 61) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0(&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  v2 = byte_20D4A64 == 0;
  *(uint32_t *)(a1 + 72) = 0;
  if ( v2 )
    v3 = (int *)(&dword_20D4A60);
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 104) = ((uint32_t)(uintptr_t)&off_208D8A8);
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 1065353216;
  *(uint32_t *)(a1 + 108) = -1;
  *(uint32_t *)(a1 + 112) = -1;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 136) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 172) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint8_t *)(a1 + 144) = -1;
  *(uint8_t *)(a1 + 145) = 0;
  *(uint32_t *)(a1 + 148) = -1;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint8_t *)(a1 + 180) = 0;
  *(uint8_t *)(a1 + 181) = 0;
  *(uint8_t *)(a1 + 182) = 0;
  *(uint32_t *)(a1 + 184) = -1;
  *(uint8_t *)(a1 + 188) = 0;
  *(uint8_t *)(a1 + 189) = 0;
  *(uint32_t *)(a1 + 208) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 220) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint8_t *)(a1 + 190) = 0;
  *(uint32_t *)(a1 + 192) = -1;
  *(uint32_t *)(a1 + 196) = -1;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 216) = 0;
  g4_std::string::construct_from_cstr(a1 + 224, (char *)&unk_1B15112, (int)(uintptr_t)(v5));
  g4_std::string::construct_from_cstr(a1 + 228, (char *)&unk_1B15112, (int)(uintptr_t)(v5) + 1);
  *(uint32_t *)(a1 + 232) = 1065353216;
  *(uint32_t *)(a1 + 236) = 1065353216;
  *(uint32_t *)(a1 + 240) = 1065353216;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 256) = 0;
  *(uint32_t *)(a1 + 260) = 0;
  *(uint32_t *)(a1 + 264) = 0;
  *(uint32_t *)(a1 + 268) = 1065353216;
  *(uint32_t *)(a1 + 272) = -1;
  *(uint8_t *)(a1 + 276) = 0;
  *(uint8_t *)(a1 + 277) = 0;
  *(uint8_t *)(a1 + 278) = 0;
  sub_BDECE0(a1 + 280, 100);
  sub_BDECE0(a1 + 288, 100);
  *(uint32_t *)(a1 + 392) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 296) = 100;
  *(uint8_t *)(a1 + 300) = 0;
  *(uint32_t *)(a1 + 304) = 0;
  *(uint8_t *)(a1 + 308) = 0;
  *(uint8_t *)(a1 + 309) = 0;
  *(uint32_t *)(a1 + 312) = 1015580809;
  *(uint8_t *)(a1 + 316) = 0;
  *(uint32_t *)(a1 + 320) = 0;
  *(uint32_t *)(a1 + 324) = 1065353216;
  *(uint32_t *)(a1 + 328) = 1148846080;
  *(uint32_t *)(a1 + 332) = 1148846080;
  *(uint32_t *)(a1 + 336) = 1065353216;
  *(uint8_t *)(a1 + 340) = 0;
  *(uint8_t *)(a1 + 341) = 0;
  *(uint32_t *)(a1 + 344) = 0;
  *(uint32_t *)(a1 + 348) = 0;
  *(uint32_t *)(a1 + 352) = 0;
  *(uint32_t *)(a1 + 356) = 0;
  *(uint32_t *)(a1 + 360) = 0;
  *(uint32_t *)(a1 + 364) = -1;
  *(uint32_t *)(a1 + 368) = 1065353216;
  *(uint32_t *)(a1 + 372) = 1065353216;
  *(uint32_t *)(a1 + 376) = 1120403456;
  *(uint8_t *)(a1 + 380) = 0;
  *(uint8_t *)(a1 + 381) = 0;
  *(uint32_t *)(a1 + 384) = -1;
  *(uint8_t *)(a1 + 397) = -1;
  result = sub_AB7AC0(a1 + 400, nullptr);
  *(uint32_t *)(a1 + 412) = -1;
  *(uint32_t *)(a1 + 416) = 0;
  *(uint32_t *)(a1 + 420) = 0;
  *(uint8_t *)(a1 + 424) = 1;
  *(uint32_t *)(a1 + 428) = -1;
  *(uint32_t *)(a1 + 432) = 0;
  *(uint32_t *)(a1 + 436) = 0;
  *(uint32_t *)(a1 + 440) = 0;
  *(uint32_t *)(a1 + 444) = 0;
  *(uint32_t *)(a1 + 448) = 0;
  *(uint32_t *)(a1 + 452) = 0;
  *(uint32_t *)(a1 + 456) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1A860  (binary VA: 0xc1a860)
// Original: sub_C1A860
// ----------------------------------------------------------------------------
void sub_C1A860(int a1)
{
  int v1;
  char v2;
  int *v3;
  int *v4;
  bool v5;

  if ( *(uint32_t *)(a1 + 140) != 0 )
  {
    sub_7B1980(*(uint32_t **)(a1 + 140));
    v1 = *(uint32_t *)(a1 + 140);
    if ( v1 != 0 )
      sub_5459F0(a1 + 140, v1 + 4);
    *(uint32_t *)(a1 + 140) = 0;
  }
  v2 = *(uint8_t *)(a1 + 144);
  if ( v2 >= 0 && v2 < (unsigned int)dword_20D93E0 )
  {
    v5 = byte_20D4980 == 0;
    *(uint32_t *)(a1 + 192) = -1;
    if ( !v5 )
      goto LABEL_8;
  }
  else if ( byte_20D4980 != 0 )
  {
    goto LABEL_8;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
LABEL_8:
  v3 = nullptr;
  if ( byte_20D49A8 == 0 )
    v3 = (int *)(&dword_20D49A0);
  sub_82B920((int)(uintptr_t)(v3), a1, 0);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D49A8 == 0 )
    v4 = (int *)(&dword_20D49A0);
  sub_82B920((int)(uintptr_t)(v4), a1, 40);
}

// ----------------------------------------------------------------------------
// Function: sub_C1AA10  (binary VA: 0xc1aa10)
// Original: sub_C1AA10
// ----------------------------------------------------------------------------
void sub_C1AA10(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  if ( (a1[44] & 1) != 0 )
  {
    G4_VCALL<void>(a1, 124);
    sub_C1A860((int)(uintptr_t)(a1));
    v1 = *a1;
    a1[44] &= 0xFFFFFDFC;
    v2 = a1[16];
    if ( (*(int (**)(uint32_t *))(v1 + 168))(a1) != 0 )
    {
      v3 = G4_VCALL<int>(a1, 168);
      G4_VCALL<void>(v3, 76, 0);
      v4 = G4_VCALL<int>(a1, 168);
      G4_VCALL<void>(v4, 132);
      G4_VCALL<void>(a1, 84);
    }
    if ( G4_VCALL<int>(a1, 332) != 0 )
    {
      v5 = G4_VCALL<int>(a1, 332);
      G4_VCALL<void>(v5, 132);
    }
    G4_VCALL<void>(v2, 8, a1);
    sub_5B4460(v2, (int)(uintptr_t)(a1), 3);
    G4_VCALL<void>(a1, 264, a1[42]);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1AB20  (binary VA: 0xc1ab20)
// Original: sub_C1AB20
// ----------------------------------------------------------------------------
void sub_C1AB20(uint32_t *a1, char a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;

  if ( G4_VCALL<int>(a1, 168) != 0 )
  {
    v2 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v2, 76, 0);
    v3 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v3, 132);
  }
  if ( G4_VCALL<int>(a1, 332) != 0 )
  {
    v4 = G4_VCALL<int>(a1, 332);
    G4_VCALL<void>(v4, 76, 0);
    v5 = G4_VCALL<int>(a1, 332);
    G4_VCALL<void>(v5, 132);
  }
  a1[44] &= 0xFFFFFFFC;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D4A64 == 0 )
    v6 = (int *)(&dword_20D4A60);
  G4_VCALL<void>(v6, 8, a1);
  if ( a2 != 0 )
    sub_5B4460((int)(uintptr_t)(v6), (int)(uintptr_t)(a1), 1);
  else
    sub_5B4460((int)(uintptr_t)(v6), (int)(uintptr_t)(a1), 3);
  sub_C1A860((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_C1ACA0  (binary VA: 0xc1aca0)
// Original: sub_C1ACA0
// ----------------------------------------------------------------------------
int sub_C1ACA0(int a1)
{
  return sub_C1ACB0(a1 - 12);
}



// ============================================================================
// Address:   0xc1acb0 (size: 368 bytes)
// Symbol:    sub_C1ACB0
// Demangled: sub_C1ACB0
// ============================================================================
void ( **sub_C1ACB0(uint32_t *a1))()
{
  int v1;
  int v2;
  uint32_t *v3;
  volatile int32_t *v4;

  *a1 = ((uint32_t)(uintptr_t)&off_206B548);
  a1[3] = ((uint32_t)(uintptr_t)&off_206B6BC);
  if ( *(uint32_t *)(a1[102] - 12) != 0 && a1[101] != 0 )
    sub_A3E700(a1[101]);
  sub_C1A860((int)(uintptr_t)(a1));
  sub_C15D00((int)(uintptr_t)(a1));
  v1 = a1[113];
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1 + 113), v1 + 16);
  a1[113] = 0;
  g4_std::string::Destroy(a1 + 102);
  g4_std::string::Destroy(a1 + 98);
  g4_std::string::Destroy(a1 + 57);
  g4_std::string::Destroy(a1 + 56);
  g4_std::string::Destroy(a1 + 55);
  g4_std::string::Destroy(a1 + 52);
  g4_std::string::Destroy(a1 + 43);
  v2 = a1[35];
  if ( v2 != 0 )
    sub_5459F0((int)(uintptr_t)(a1 + 35), v2 + 4);
  a1[35] = 0;
  g4_std::string::Destroy(a1 + 34);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)(a1 + 26));
  v3 = (uint32_t *)a1[18];
  if ( v3 == nullptr )
    return (void (**)())(uintptr_t)(sub_71C220((int)(uintptr_t)(a1)));
  v4 = (volatile int32_t *)((uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 16)));
  if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) != 1 )
    return (void (**)())(uintptr_t)(sub_71C220((int)(uintptr_t)(a1)));
  G4_VCALL<void>(v4, 8);
  G4_VCALL<void>(v4, 4);
  return (void (**)())(uintptr_t)(sub_71C220((int)(uintptr_t)(a1)));
}
// ----------------------------------------------------------------------------
// Function: sub_C1AE20  (binary VA: 0xc1ae20)
// Original: sub_C1AE20
// ----------------------------------------------------------------------------
int sub_C1AE20(int a1)
{
  return ((sub_C1AE30((void *)(a1 - 12))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C1AE30  (binary VA: 0xc1ae30)
// Original: sub_C1AE30
// ----------------------------------------------------------------------------
void sub_C1AE30(uint32_t *a1)
{
  sub_C1ACB0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C1AE70  (binary VA: 0xc1ae70)
// Original: sub_C1AE70
// ----------------------------------------------------------------------------
int sub_C1AE70(int a1, float *a2, unsigned int a3, float a4, float a5, int a6, unsigned int a7, char a8, int a9, int a10, int a11, float a12, int a13, int a14, float a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36)
{
  int v36;
  float v37; // xmm0_4
  unsigned int v38;
  float v39; // xmm1_4
  int v40;
  float v41; // xmm0_4
  int v42;
  int v43;
  int result;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
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
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  uint8_t v89;

  v36 = G4_VCALL<int>(a1, 328, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88);
  v37 = a2[2];
  v38 = 0;
  v39 = a4 + v37;
  v40 = *((uint32_t *)a2 + 1);
  v41 = v37 + a5;
  if ( a3 < 0x20 )
    v38 = a3;
  v42 = *(uint32_t *)a2;
  a11 = *((uint32_t *)a2 + 1);
  a14 = v40;
  a7 = v38;
  a9 = v36;
  a10 = v42;
  a5 = COERCE_FLOAT(&off_204B138);
  a13 = v42;
  a12 = v39;
  a6 = 0;
  a15 = v41;
  a8 = 1;
  a18 = 0;
  a19 = 0;
  a20 = 0;
  a21 = 0;
  a22 = 0;
  a23 = 0;
  a24 = 0;
  a25 = 0;
  a26 = 0;
  a29 = 0;
  a30 = 0;
  a31 = 0;
  a32 = 0;
  a33 = 0;
  a34 = 0;
  a17 = 0;
  a27 = -1;
  a28 = -1;
  a16 = -1;
  a35 = 0;
  a36 = 0;
  v43 = sub_6645E0();
  result = G4_VCALL<int>(v43, 48, &a5, &a16);
  if ( (uint8_t)result != 0
    || (a15 = (float)((float)-a5 - a5) + a15,
        v45 = sub_6645E0(),
        (uint8_t)(result = G4_VCALL<int>(v45, 48, &a5, &a16)) != 0) )
  {
    *(uint32_t *)a2 = a32;
    *((uint32_t *)a2 + 1) = a33;
    *((uint32_t *)a2 + 2) = a34;
  }
  if ( a17 != 0 )
  {
    v89 = result;
    sub_5459F0((int)(uintptr_t)(&a17), a17 + 4);
    return v89;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1B080  (binary VA: 0xc1b080)
// Original: sub_C1B080
// ----------------------------------------------------------------------------
int sub_C1B080(int *a1)
{
  int *v1;
  int v2;
  int v3;
  char v4;
  int v5;
  int result;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef float _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[15];
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef float _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int *_g4_t_v34;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v14)) > _g4_s6 ? (32u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v15)) > _g4_s7 ? (36u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v16)) > _g4_s8 ? (40u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v17)) > _g4_s9 ? (44u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v18)) > _g4_s10 ? (56u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v19)) > _g4_s11 ? (68u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v20)) > _g4_s12 ? (72u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v21)) > _g4_s13 ? (76u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v22)) > _g4_s14 ? (80u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v23)) > _g4_s15 ? (84u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v24)) > _g4_s16 ? (88u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v25)) > _g4_s17 ? (92u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v26)) > _g4_s18 ? (96u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v27)) > _g4_s19 ? (100u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v28)) > _g4_s20 ? (104u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v29)) > _g4_s21 ? (164u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v30)) > _g4_s22 ? (168u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v31)) > _g4_s23 ? (172u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v32)) > _g4_s24 ? (176u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v33)) > _g4_s25 ? (180u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v34)) > _g4_s26 ? (204u + sizeof(_g4_t_v34)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
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
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 164u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 168u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 172u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 176u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 180u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 204u);

  v34 = (int *)&a1;
  v1 = a1;
  (*(void (**)(int *, int *, int, int, int, int, int, int))(*a1 + 52))(&v15, a1, v8, v9, v10, v11, v12, v13);
  v2 = G4_VCALL<int>(v1, 328);
  v21 = v15;
  v22 = v16;
  v24 = v15;
  v25 = v16;
  v18[0] = (uint32_t)(uintptr_t)(&off_204B138);
  v20 = v2;
  v18[1] = 0;
  v23 = v17 + 100.0;
  v18[2] = 4;
  v26 = v17 + -50000.0;
  v19 = 1;
  memset(&v28[12], 0, 12);
  v29 = 0;
  v30 = 0;
  v31 = 0.0;
  memset(v28, 0, 40);
  v28[10] = -1;
  v28[11] = -1;
  v27 = -1;
  v32 = 0;
  v33 = 0;
  v3 = sub_6645E0();
  v4 = G4_VCALL<int>(v3, 48, v18, &v27);
  if ( v4 != 0
    || (v26 = v26 + 100000.0,
        v7 = sub_6645E0(),
        (v4 = G4_VCALL<int>(v7, 48, v18, &v27)) != 0) )
  {
    v15 = v29;
    v16 = v30;
    v17 = v31;
  }
  if ( v28[0] != 0 )
  {
    v14 = v4;
    sub_5459F0((int)(uintptr_t)(v28), v28[0] + 4);
    v4 = v14;
  }
  *((uint8_t *)v1 + 308) = v4;
  v5 = *v1;
  v28[0] = 0;
  (*(void (**)(int *, int *))(v5 + 308))(v1, &v15);
  result = *((uint8_t *)v1 + 308);
  if ( (uint8_t)result != 0 )
    *((uint8_t *)v1 + 309) = 0;
  else
    --v1[76];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1B2D0  (binary VA: 0xc1b2d0)
// Original: sub_C1B2D0
// ----------------------------------------------------------------------------
void sub_C1B2D0(int a1, uint32_t *a2)
{
  int *v2;
  char *v3;
  bool v4;
  int v5;
  uint32_t *v6;
  char *v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  int v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  if ( a2 != nullptr )
  {
    v2 = (int *)G4_VCALL<int>(a2, 16);
    if ( v2 != nullptr )
    {
      if ( v2 == (int *)(uintptr_t)(&dword_20DE814) )
      {
LABEL_8:
        if ( *(uint32_t *)(a1 + 140) != 0 )
        {
          v3 = (char *)a2[5];
          v4 = v3 == (char *)a2[6];
          v15[0] = (uint32_t)(uintptr_t)(a2);
          v16[0] = (int)(uintptr_t)(v15);
          if ( v4 )
          {
            g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux((int)(uintptr_t)(a2 + 4), v3, v16);
            v6 = (uint32_t *)v15[0];
          }
          else
          {
            v5 = 0;
            v6 = a2;
            if ( v3 != nullptr )
            {
              *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v15);
              v5 = a2[5];
              v6 = (uint32_t *)v15[0];
            }
            a2[5] = v5 + 4;
          }
          v7 = nullptr;
          v8 = *(uint32_t *)(a1 + 140);
          if ( v6 != nullptr )
            v7 = (char *)(v6 + 3);
          v9 = *(uint32_t *)(v8 + 260);
          if ( v9 != 0 )
          {
            v14 = *(uint32_t *)(a1 + 140);
            sub_5459F0(v8 + 260, v9 + 16);
            v8 = v14;
          }
          if ( v7 != nullptr )
          {
            v10 = nullptr;
            *(uint32_t *)(v8 + 260) = (uint32_t)(uintptr_t)(v7 - 12);
            v11 = v8 + 260;
            v16[0] = v11;
            if ( v7 != (char *)(uintptr_t)(&byte_9[3]) )
              v10 = v7;
            v12 = *((char **)v10 + 2);
            if ( v12 == *((char **)v10 + 3) )
            {
              g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux((int)(uintptr_t)(v10 + 4), v12, v16);
            }
            else
            {
              v13 = 0;
              if ( v12 != nullptr )
              {
                *(uint32_t *)v12 = v11;
                v13 = *((uint32_t *)v10 + 2);
              }
              *((uint32_t *)v10 + 2) = v13 + 4;
            }
          }
          else
          {
            *(uint32_t *)(v8 + 260) = 0;
          }
          if ( v15[0] != 0 )
            sub_5459F0((int)(uintptr_t)(v15), v15[0] + 16);
        }
      }
      else
      {
        while ( 1 )
        {
          v2 = (int *)v2[1];
          if ( v2 == nullptr )
            break;
          if ( v2 == (int *)(uintptr_t)(&dword_20DE814) )
            goto LABEL_8;
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1B440  (binary VA: 0xc1b440)
// Original: sub_C1B440
// ----------------------------------------------------------------------------
int sub_C1B440(int a1, int a2, char a3, int a4)
{
  int v4;
  int result;
  int v6;
  char v7; // di
  int *v8;
  int *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  void *v17;
  void *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_obj;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_obj)) > _g4_s1 ? (16u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v21)) > _g4_s2 ? (24u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v22)) > _g4_s3 ? (32u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v23)) > _g4_s4 ? (48u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v24)) > _g4_s5 ? (52u + sizeof(_g4_t_v24)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  v24[5] = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  result = a2;
  v6 = a4;
  v7 = a3;
  *(uint8_t *)(a1 + 144) = a2;
  if ( result >= 0 && result < (unsigned int)dword_20D93E0 )
  {
    *(uint8_t *)(v4 + 145) = (*(uint8_t *)(v4 + 200) & 0x40) != 0;
    obj = result;
    v19 = v6;
    sub_C1A860(v4);
    if ( v19 != 0 )
    {
      v10 = (uint32_t *)(dword_20D93D0 + 28 * obj);
      v11 = v10[3];
      if ( v11 != -1 )
      {
        *(uint32_t *)(v4 + 192) = v11;
        *(uint32_t *)(v4 + 196) = v10[4];
      }
      v12 = v10[5];
      if ( v12 != 0 )
        *(uint32_t *)(v4 + 200) |= v12;
      v13 = v10[6];
      if ( v13 != 0 )
        *(uint32_t *)(v4 + 204) = v13;
      v21 = v10[2];
      if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
      {
        sub_7B3590(v17, &dword_20D4B80);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
        __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
      }
      v14 = nullptr;
      if ( byte_20D4B84 == 0 )
        v14 = &dword_20D4B80;
      if ( sub_78CBA0((int)(uintptr_t)(v14), v21) )
      {
        v15 = *(uint32_t *)v4;
        v22 = nullptr;
        (*(void (**)(uint32_t *))(v15 + 52))(v24);
        if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
        {
          sub_7B3590(v18, &dword_20D4B80);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
          __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
        }
        v16 = nullptr;
        if ( byte_20D4B84 == 0 )
          v16 = &dword_20D4B80;
        sub_7B21C0(&v23, (int)(uintptr_t)(v16), v21, v24, v4, &v22, 0);
        sub_5F7820((uint32_t *)(v4 + 140), v23);
        sub_5F7820(&v23, 0);
        if ( v22 != nullptr )
          sub_5459C0((uint32_t *)((char *)v22 + *(uint32_t *)(*v22 - 16)));
        if ( *(uint32_t *)(v4 + 140) != 0 )
          sub_7AFE60(*(uint32_t *)(v4 + 140));
      }
    }
    if ( v7 != 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D49A8 == 0 )
        v9 = (int *)(&dword_20D49A0);
      sub_82B8C0((int)(uintptr_t)(v9), v4, 0);
    }
    result = *(uint32_t *)(v4 + 204);
    if ( result != 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D49A8 == 0 )
        v8 = (int *)(&dword_20D49A0);
      return sub_82B8C0((int)(uintptr_t)(v8), v4, 40);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1B7F0  (binary VA: 0xc1b7f0)
// Original: sub_C1B7F0
// ----------------------------------------------------------------------------
int sub_C1B7F0(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  glitch::video::CMaterial::Self **v6;
  glitch::video::CMaterial::Self **v7;
  glitch::video::CMaterial::Self *v8;
  bool v9;
  int v10;
  int result;
  int v12;
  int v13;
  uint16_t ParameterID;
  glitch::video::CMaterial::Self **v15;
  int v16;
  volatile int32_t *v17;
  uint32_t *v18;
  int v19;
  glitch::video::CMaterial::Self *v20;
  int v21;
  uint32_t *v22;
  char *v23;
  uint32_t *v24;
  char *v25;
  uint32_t *v26;
  unsigned int v27;
  typedef int _g4_t_v28;
  typedef glitch::video::CMaterial::Self **_g4_t_v29;
  typedef glitch::video::CMaterial::Self **_g4_t_v30;
  typedef int _g4_t_v31;
  typedef glitch::video::CMaterial::Self *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef uint16_t _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef glitch::video::CMaterial::Self *_g4_t_v44[3];
  typedef uint32_t _g4_t_v45[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v31)) > _g4_s3 ? (8u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v32)) > _g4_s4 ? (8u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v33)) > _g4_s5 ? (8u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v34)) > _g4_s6 ? (8u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v36)) > _g4_s8 ? (32u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v37)) > _g4_s9 ? (36u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v38)) > _g4_s10 ? (36u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v39)) > _g4_s11 ? (36u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v40)) > _g4_s12 ? (40u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v41)) > _g4_s13 ? (40u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v42)) > _g4_s14 ? (44u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v43)) > _g4_s15 ? (48u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v44)) > _g4_s16 ? (52u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v45)) > _g4_s17 ? (64u + sizeof(_g4_t_v45)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);

  v45[3] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a3;
  v43 = a2;
  v5 = (char *)a1[4];
  *a1 = 1065353216;
  v42 = v5;
  v6 = (glitch::video::CMaterial::Self **)v3[5];
  v3[3] = 1065353216;
  v3[1] = v4;
  if ( v42 != (char *)v6 )
  {
    v40 = (size_t)v3;
    v7 = (glitch::video::CMaterial::Self **)v42;
    do
    {
      v8 = *v7;
      if ( *v7 != nullptr )
      {
        v9 = *(uint32_t *)v8 == 2;
        _mm_mfence();
        if ( v9 )
        {
          v30 = v6;
          glitch::video::CMaterial::removeFromRootSceneNode(v8);
          v6 = v30;
        }
        if ( __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
        {
          v29 = v6;
          glitch::video::CMaterial::Destroy(v8);
          gll_operator_delete_arr((int)(uintptr_t)(v8));
          v6 = v29;
        }
      }
      ++v7;
    }
    while ( v6 != v7 );
    v3 = (uint32_t *)v40;
  }
  v3[5] = (uint32_t)(uintptr_t)(v42);
  v3[8] = v3[7];
  v10 = dword_20DE810;
  v3[2] = dword_20DE810;
  dword_20DE810 = v10 + 1;
  result = v43;
  if ( v43 != 0 )
  {
    result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v43 + 288) + 16) + 32) + 124);
    if ( result > 0 )
    {
      v12 = 0;
      v13 = v43;
      do
      {
        (*(void (**)(glitch::video::CMaterial::Self **))(*(uint32_t *)v13 + 156))(v44);
        if ( v44[0] != nullptr )
        {
          ParameterID = glitch::video::CMaterialRenderer::getParameterID(
                          *((glitch::video::CMaterialRenderer::Self **)v44[0] + 1),
                          "SunOcclusionFactor",
                          0);
          if ( ParameterID != 0xFFFF )
          {
            v15 = (glitch::video::CMaterial::Self **)v3[5];
            if ( v15 == (glitch::video::CMaterial::Self **)v3[6] )
            {
              v34 = ParameterID;
              g4_std::vector_intrusive_ptr_video_CMat_3cbec7::M_insert_aux(
                v3 + 4,
                v15,
                v44);
              ParameterID = v34;
            }
            else
            {
              v16 = 0;
              if ( v15 != nullptr )
              {
                v17 = (volatile int32_t *)v44[0];
                v9 = v44[0] == nullptr;
                *v15 = v44[0];
                if ( !v9 )
                  __sync_add_and_fetch(v17, 1u);
                v16 = v3[5];
              }
              v3[5] = v16 + 4;
            }
            v18 = (uint32_t *)v3[8];
            v28 = ParameterID;
            if ( v18 == (uint32_t *)v3[9] )
            {
              v21 = ((int)(uintptr_t)(v18) - v3[7]) >> 2;
              v41 = 4;
              v37 = v21;
              if ( v21 != 0 )
              {
                v27 = 2 * v21;
                if ( v37 > v27 || v27 > 0x3FFFFFFF )
                  v41 = -4;
                else
                  v41 = 8 * v37;
              }
              v33 = (char *)v3[8];
              v35 = sub_4EB830(v41);
              v36 = v35 + 4;
              v22 = (uint32_t *)(v35 + 4 * v37);
              if ( v22 != nullptr )
                *v22 = v28;
              v38 = (char *)v3[7];
              if ( v33 != v38 )
              {
                v23 = (char *)v3[7];
                v24 = (uint32_t *)v35;
                do
                {
                  if ( v24 != nullptr )
                    *v24 = *(uint32_t *)v23;
                  v23 += 4;
                  ++v24;
                }
                while ( v33 != v23 );
                v36 = v35 + 4 * ((unsigned int)(v33 - (v38 + 4)) >> 2) + 8;
              }
              v39 = (char *)v3[8];
              if ( v33 != v39 )
              {
                v25 = v33;
                v26 = (uint32_t *)v36;
                do
                {
                  if ( v26 != nullptr )
                    *v26 = *(uint32_t *)v25;
                  v25 += 4;
                  ++v26;
                }
                while ( v39 != v25 );
                v36 += 4 * ((unsigned int)(v39 - (v33 + 4)) >> 2) + 4;
              }
              if ( v3[7] != 0 )
                sub_4EB870(v3[7]);
              v3[7] = v35;
              v3[8] = v36;
              v3[9] = v41 + v35;
            }
            else
            {
              v19 = 0;
              if ( v18 != nullptr )
              {
                *v18 = v28;
                v19 = v3[8];
              }
              v3[8] = v19 + 4;
            }
            v45[0] = 1065353216;
            glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb(
              v44[0],
              v28,
              0,
              v45);
          }
          v20 = v44[0];
          if ( v44[0] != nullptr )
          {
            v9 = *(uint32_t *)v44[0] == 2;
            _mm_mfence();
            if ( v9 )
            {
              v32 = v20;
              glitch::video::CMaterial::removeFromRootSceneNode(v20);
              v20 = v32;
            }
            if ( __sync_fetch_and_add((volatile int32_t *)v20, 0xFFFFFFFF) == 1 )
            {
              v31 = (int)(uintptr_t)(v20);
              glitch::video::CMaterial::Destroy(v20);
              gll_operator_delete_arr(v31);
            }
          }
        }
        v13 = v43;
        ++v12;
        result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v43 + 288) + 16) + 32);
      }
      while ( v12 < *(uint32_t *)(result + 124) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1BB90  (binary VA: 0xc1bb90)
// Original: sub_C1BB90
// ----------------------------------------------------------------------------
int sub_C1BB90(uint32_t *a1)
{
  int result;
  uint32_t *v2;
  int v3;
  int v4;

  result = G4_VCALL<int>(a1, 348);
  v2 = (uint32_t *)result;
  if ( result != 0 )
  {
    v3 = a1[17];
    v4 = G4_VCALL<int>(a1, 168);
    return sub_C1B7F0(v2, v4, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1BBF0  (binary VA: 0xc1bbf0)
// Original: sub_C1BBF0
// ----------------------------------------------------------------------------
int sub_C1BBF0(int a1)
{
  int v1;
  int v2;
  int result;
  glitch::scene::ISceneNode::Self *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  volatile int32_t *v9;
  int v10;
  bool v11;
  int v12;
  uint32_t *v13;
  volatile int32_t *v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);

  v1 = *(uint32_t *)(a1 + 176);
  v2 = v1;
  BYTE1(v2) = BYTE1(v1) & 0xFD;
  *(uint32_t *)(a1 + 176) = v2;
  if ( (v1 & 1) == 0 )
  {
    v5 = *(uint32_t *)a1;
    *(uint32_t *)(a1 + 176) = v2 | 3;
    if ( (*(int (**)(int))(v5 + 168))(a1) == 0 )
      sub_C1BB90((uint32_t *)a1);
    G4_VCALL<void>(a1, 80, 1);
    (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 64) + 8))(*(uint32_t *)(a1 + 64), a1);
    sub_5B4460(*(uint32_t *)(a1 + 64), a1, 0);
    if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D2D64 == 0 )
      v6 = (uint32_t *)(&unk_20D2D60);
    sub_7B82C0(v6[27], a1);
  }
  if ( G4_VCALL<int>(a1, 168) != 0
    && *(uint32_t *)(G4_VCALL<int>(a1, 168) + 208) == 0 )
  {
    v7 = *(uint32_t *)(a1 + 176) & 3;
    v8 = (uint32_t *)G4_VCALL<int>(a1, 168);
    v15 = v8;
    if ( v8 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16) + 4), 1u);
    sub_C15EA0(a1, &v15);
    if ( v15 != nullptr )
    {
      v9 = (volatile int32_t *)((uint32_t *)((char *)v15 + *(uint32_t *)(*v15 - 16)));
      if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v9, 8);
        G4_VCALL<void>(v9, 4);
      }
    }
    v10 = G4_VCALL<int>(a1, 168);
    v11 = v7 == 3;
    G4_VCALL<void>(v10, 76, v11);
    if ( G4_VCALL<int>(a1, 332) != 0 )
    {
      v12 = G4_VCALL<int>(a1, 332);
      G4_VCALL<void>(v12, 76, v11);
      v13 = (uint32_t *)G4_VCALL<int>(a1, 332);
      v16 = v13;
      if ( v13 != nullptr )
        __sync_add_and_fetch((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16) + 4), 1u);
      sub_C15EA0(a1, &v16);
      if ( v16 != nullptr )
      {
        v14 = (volatile int32_t *)((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16)));
        if ( __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v14, 8);
          G4_VCALL<void>(v14, 4);
        }
      }
    }
  }
  result = G4_VCALL<int>(a1, 168);
  if ( result != 0 )
  {
    v4 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    result = (int)(uintptr_t)(glitch::scene::ISceneNode::updateAbsolutePosition(v4, true));
  }
  *(uint8_t *)(a1 + 424) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1BE90  (binary VA: 0xc1be90)
// Original: sub_C1BE90
// ----------------------------------------------------------------------------
uint32_t * sub_C1BE90(uint32_t *a1, int a2, int *a3, int *a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  uint32_t *v7;
  uint32_t *i;
  char v11;

  if ( a2 != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 1;
    if ( a3 != (int *)(uintptr_t)(&dword_20D7CDC) )
      v11 = *a4 < (unsigned int)a3[4];
  }
  v4 = (uint32_t *)opNew(0x2Cu);
  if ( v4 != (uint32_t *)-16 )
  {
    v5 = *a4;
    v4[6] = 0;
    v4[4] = v5;
    v4[7] = 0;
    v4[10] = 0;
    v4[8] = (uint32_t)(uintptr_t)(v4 + 6);
    v4[9] = (uint32_t)(uintptr_t)(v4 + 6);
    v6 = (int *)a4[3];
    if ( v6 != nullptr )
    {
      v7 = g4_std::Rb_tree_unsigned_int_pair_unsign_cdf969::M_copy(
             (int)(uintptr_t)(v4 + 5),
             v6,
             (int)(uintptr_t)(v4 + 6));
      v4[7] = (uint32_t)(uintptr_t)(v7);
      for ( i = v7; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      v4[8] = (uint32_t)(uintptr_t)(i);
      while ( v7[3] != 0 )
        v7 = (uint32_t *)v7[3];
      v4[9] = (uint32_t)(uintptr_t)(v7);
      v4[10] = a4[6];
    }
  }
  sub_1904970(v11, v4, a3, &dword_20D7CDC);
  ++dword_20D7CEC;
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1BFB0  (binary VA: 0xc1bfb0)
// Original: sub_C1BFB0
// ----------------------------------------------------------------------------
int sub_C1BFB0(int a1, int *a2)
{
  int *v3;
  unsigned int v4;
  int *v5;
  char v6; // bp
  unsigned int v7;
  int v9;
  typedef int *_g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = (int *)dword_20D7CE0;
  if ( dword_20D7CE0 == 0 )
  {
    v3 = (int *)(&dword_20D7CDC);
    goto LABEL_10;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 <= v4 )
      break;
    v5 = (int *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (int *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v11 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v7 )
      goto LABEL_9;
LABEL_12:
    sub_C1BE90(v12, 0, v11, a2);
LABEL_13:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_10:
  if ( (int *)dword_20D7CE4 == v3 )
  {
    sub_C1BE90(v12, 0, v3, a2);
    goto LABEL_13;
  }
  v11 = v3;
  v3 = (int *)sub_19048F0(v3);
  if ( *a2 > (unsigned int)v3[4] )
    goto LABEL_12;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1C090  (binary VA: 0xc1c090)
// Original: sub_C1C090
// ----------------------------------------------------------------------------
int sub_C1C090(int a1, int a2, char *s)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;

  switch ( a2 )
  {
    case 0:
      v5 = dword_20D9BB0;
      result = *(uint32_t *)(v5 + 44 * sub_5A5890(s, 0xC73A983A) + 8);
      break;
    case 1:
      v6 = dword_20D9BB0;
      result = *(uint32_t *)(v6 + 44 * sub_5A5890(s, 0xC73A983A) + 12);
      break;
    case 2:
      v7 = dword_20D9BB0;
      result = *(uint32_t *)(v7 + 44 * sub_5A5890(s, 0xC73A983A) + 16);
      break;
    case 3:
      v8 = dword_20D9BB0;
      result = *(uint32_t *)(v8 + 44 * sub_5A5890(s, 0xC73A983A) + 20);
      break;
    case 4:
      v9 = dword_20D9BB0;
      result = *(uint32_t *)(v9 + 44 * sub_5A5890(s, 0xC73A983A) + 24);
      break;
    case 5:
      v10 = dword_20D9BB0;
      result = *(uint32_t *)(v10 + 44 * sub_5A5890(s, 0xC73A983A) + 28);
      break;
    case 6:
      v11 = dword_20D9BB0;
      result = *(uint32_t *)(v11 + 44 * sub_5A5890(s, 0xC73A983A) + 32);
      break;
    case 7:
      v4 = dword_20D9BB0;
      result = *(uint32_t *)(v4 + 44 * sub_5A5890(s, 0xC73A983A) + 36);
      break;
    case 8:
      v3 = dword_20D9BB0;
      result = *(uint32_t *)(v3 + 44 * sub_5A5890(s, 0xC73A983A) + 40);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1C280  (binary VA: 0xc1c280)
// Original: sub_C1C280
// ----------------------------------------------------------------------------
int * sub_C1C280()
{
  return (int *)(&dword_20DE814);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_intrusive_ptr_video_CMat_3cbec7::M_insert_aux  (binary VA: 0xc1c2a0)
// Original: std::vector<boost::intrusive_ptr<glitch::video::CMaterial>,GameAllocator<boost::intrusive_ptr<glitch::video::CMaterial>>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_intrusive_ptr_video_CMat_3cbec7::M_insert_aux(glitch::video::CMaterial::Self **a1, glitch::video::CMaterial::Self **a2, volatile int32_t **a3)
{
  glitch::video::CMaterial::Self **v3;
  volatile int32_t **v4;
  volatile int32_t **v5;
  volatile int32_t **v6;
  glitch::video::CMaterial::Self *v7;
  volatile int32_t *v8;
  glitch::video::CMaterial::Self *v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  glitch::video::CMaterial::Self *v14;
  bool v15;
  glitch::video::CMaterial::Self *v16;
  int result;
  glitch::video::CMaterial::Self *v18;
  unsigned int v19;
  size_t v20;
  int v21;
  volatile int32_t **v22;
  volatile int32_t **v23;
  volatile int32_t *v24;
  volatile int32_t **v25;
  uint32_t *v26;
  volatile int32_t *v27;
  volatile int32_t **v28;
  volatile int32_t *v29;
  int v30;
  glitch::video::CMaterial::Self **v31;
  glitch::video::CMaterial::Self **v32;
  glitch::video::CMaterial::Self *v33;
  int v34;
  int v35;
  volatile int32_t **v36;
  volatile int32_t *v37;
  glitch::video::CMaterial::Self *v38;
  glitch::video::CMaterial::Self *v39;
  size_t v40;
  size_t v41;
  volatile int32_t **v42;

  v3 = a1;
  v4 = a3;
  v5 = (volatile int32_t **)a2;
  v6 = (volatile int32_t **)a1[1];
  if ( v6 != (volatile int32_t **)a1[2] )
  {
    v7 = nullptr;
    if ( v6 != nullptr )
    {
      v8 = *(v6 - 1);
      *v6 = v8;
      if ( v8 != nullptr )
        __sync_add_and_fetch(v8, 1u);
      v7 = a1[1];
    }
    v9 = (glitch::video::CMaterial::Self *)((char *)v7 + 4);
    a1[1] = v9;
    v37 = *a3;
    if ( *a3 != nullptr )
    {
      __sync_add_and_fetch(*a3, 1u);
      v9 = a1[1];
    }
    v10 = ((glitch::video::CMaterial::Self *)((char *)v9 - 8) - (glitch::video::CMaterial::Self *)a2) >> 2;
    if ( v10 > 0 )
    {
      v11 = (int)(uintptr_t)(v9) - 12;
      v40 = (size_t)v9 - 8;
      v12 = -4 * v10;
      do
      {
        v13 = *(volatile int32_t **)(v11 + v12 + 4 * v10);
        if ( v13 != nullptr )
          __sync_add_and_fetch(v13, 1u);
        v14 = *(glitch::video::CMaterial::Self **)(v40 + v12 + 4 * v10);
        *(uint32_t *)(v40 + v12 + 4 * v10) = (uint32_t)(uintptr_t)(v13);
        if ( v14 != nullptr )
        {
          v15 = *(uint32_t *)v14 == 2;
          _mm_mfence();
          if ( v15 )
          {
            v35 = v11;
            glitch::video::CMaterial::removeFromRootSceneNode(v14);
            v11 = v35;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v14, 0xFFFFFFFF) == 1 )
          {
            v34 = v11;
            glitch::video::CMaterial::Destroy(v14);
            gll_operator_delete_arr((int)(uintptr_t)(v14));
            v11 = v34;
          }
        }
        --v10;
      }
      while ( v10 != 0 );
    }
    if ( v37 != nullptr )
      __sync_add_and_fetch(v37, 1u);
    v16 = *a2;
    *a2 = (glitch::video::CMaterial::Self *)v37;
    if ( v16 != nullptr )
    {
      v15 = *(uint32_t *)v16 == 2;
      _mm_mfence();
      if ( v15 )
        glitch::video::CMaterial::removeFromRootSceneNode(v16);
      if ( __sync_fetch_and_add((volatile int32_t *)v16, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v16);
        gll_operator_delete_arr((int)(uintptr_t)(v16));
      }
    }
    result = (int)(uintptr_t)(v37);
    if ( v37 != nullptr )
    {
      v15 = *v37 == 2;
      _mm_mfence();
      if ( v15 )
        glitch::video::CMaterial::removeFromRootSceneNode((glitch::video::CMaterial::Self *)v37);
      result = __sync_fetch_and_add(v37, 0xFFFFFFFF);
      if ( result == 1 )
      {
        glitch::video::CMaterial::Destroy((glitch::video::CMaterial::Self *)v37);
        return gll_operator_delete_arr((int)(uintptr_t)(v37));
      }
    }
    return result;
  }
  v18 = *a1;
  v19 = ((char *)v6 - (char *)*a1) >> 2;
  if ( v19 == 0 )
  {
    v41 = 4;
    v20 = 4;
    v21 = ((char *)a2 - (char *)v18) >> 2;
LABEL_33:
    v38 = (glitch::video::CMaterial::Self *)sub_4EB830(v20);
    v4 = a3;
    v22 = (volatile int32_t **)((char *)v38 + 4);
    goto LABEL_34;
  }
  v39 = (glitch::video::CMaterial::Self *)(2 * v19);
  if ( v19 > 2 * v19 || 2 * v19 > 0x3FFFFFFF )
  {
    v41 = 0xFFFFFFFC;
    v20 = 0xFFFFFFFC;
    v21 = ((char *)a2 - (char *)v18) >> 2;
    goto LABEL_33;
  }
  v20 = 8 * v19;
  v21 = ((char *)a2 - (char *)v18) >> 2;
  v41 = v20;
  if ( v39 != nullptr )
    goto LABEL_33;
  v22 = (volatile int32_t **)&loc_4;
  v38 = nullptr;
LABEL_34:
  v23 = (volatile int32_t **)((char *)v38 + 4 * v21);
  if ( v23 != nullptr )
  {
    v24 = *v4;
    *v23 = v24;
    if ( v24 != nullptr )
      __sync_add_and_fetch(v24, 1u);
  }
  v25 = (volatile int32_t **)*a1;
  if ( *a1 != (glitch::video::CMaterial::Self *)a2 )
  {
    v26 = (uint32_t *)(v38);
    do
    {
      if ( v26 != nullptr )
      {
        v27 = *v25;
        v15 = *v25 == nullptr;
        *v26 = (uint32_t)(uintptr_t)(*v25);
        if ( !v15 )
          __sync_add_and_fetch(v27, 1u);
      }
      ++v25;
      ++v26;
    }
    while ( v25 != (volatile int32_t **)a2 );
    v22 = (volatile int32_t **)(v26 + 1);
  }
  v28 = (volatile int32_t **)a1[1];
  if ( v28 != (volatile int32_t **)a2 )
  {
    do
    {
      if ( v22 != nullptr )
      {
        v29 = *v5;
        v15 = *v5 == nullptr;
        *v22 = *v5;
        if ( !v15 )
          __sync_add_and_fetch(v29, 1u);
      }
      ++v5;
      ++v22;
    }
    while ( v28 != v5 );
    v28 = (volatile int32_t **)a1[1];
  }
  v30 = (int)(uintptr_t)(*a1);
  if ( *a1 != (glitch::video::CMaterial::Self *)v28 )
  {
    v42 = v22;
    v31 = (glitch::video::CMaterial::Self **)v28;
    v32 = (glitch::video::CMaterial::Self **)*a1;
    do
    {
      v33 = *v32;
      if ( *v32 != nullptr )
      {
        v15 = *(uint32_t *)v33 == 2;
        _mm_mfence();
        if ( v15 )
          glitch::video::CMaterial::removeFromRootSceneNode(v33);
        if ( __sync_fetch_and_add((volatile int32_t *)v33, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v33);
          gll_operator_delete_arr((int)(uintptr_t)(v33));
        }
      }
      ++v32;
    }
    while ( v32 != v31 );
    v3 = a1;
    v22 = v42;
    v30 = (int)(uintptr_t)(*a1);
  }
  if ( v30 != 0 )
  {
    v36 = v22;
    sub_4EB870(v30);
    v22 = v36;
  }
  v3[1] = (glitch::video::CMaterial::Self *)v22;
  *v3 = v38;
  v3[2] = (glitch::video::CMaterial::Self *)((char *)v38 + v41);
  return (int)(uintptr_t)(v38) + v41;
}


