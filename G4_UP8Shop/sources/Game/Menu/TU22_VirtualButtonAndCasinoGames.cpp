#include "Core/Utils/DecompTypes.h"
#include "TU22_VirtualButtonAndCasinoGames.h"

// ----------------------------------------------------------------------------
// Function: sub_BDF5F0  (binary VA: 0xbdf5f0)
// Original: sub_BDF5F0
// ----------------------------------------------------------------------------
int sub_BDF5F0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE628);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE628, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE62C), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE62C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE630), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE630, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE634), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE634, &unk_20D1280);
  dword_20DE638 = 1056964608;
  dword_20DE63C = 1056964608;
  dword_20DE640 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF6F0  (binary VA: 0xbdf6f0)
// Original: sub_BDF6F0
// ----------------------------------------------------------------------------
int sub_BDF6F0(int a1, uint32_t *a2)
{
  sub_BDF6F0(*a2, *a2 + dword_20DE650);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF740  (binary VA: 0xbdf740)
// Original: sub_BDF740
// ----------------------------------------------------------------------------
int sub_BDF740()
{
  time_t v0;
  int result;

  v0 = time(nullptr);
  srand48(v0);
  dword_20DE654 = lrand48();
  result = lrand48();
  dword_20DE650 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF780  (binary VA: 0xbdf780)
// Original: sub_BDF780
// ----------------------------------------------------------------------------
uint32_t * sub_BDF780(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = dword_20DE650;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF7A0  (binary VA: 0xbdf7a0)
// Original: sub_BDF7A0
// ----------------------------------------------------------------------------
uint32_t * sub_BDF7A0(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = dword_20DE650 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF7C0  (binary VA: 0xbdf7c0)
// Original: sub_BDF7C0
// ----------------------------------------------------------------------------
uint32_t * sub_BDF7C0(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = dword_20DE650 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF7E0  (binary VA: 0xbdf7e0)
// Original: sub_BDF7E0
// ----------------------------------------------------------------------------
int sub_BDF7E0(int *a1)
{
  int result;

  result = -1;
  if ( *a1 != -1 )
  {
    result = a1[1] - dword_20DE650;
    if ( *a1 != result )
    {
      *a1 = result;
      a1[1] = result + dword_20DE650;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF830  (binary VA: 0xbdf830)
// Original: sub_BDF830
// ----------------------------------------------------------------------------
uint32_t * sub_BDF830(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;

  result = a1;
  v3 = -1;
  if ( *a1 != -1 )
    v3 = a1[1] - dword_20DE650;
  v4 = a2 + v3;
  *a1 = v4;
  a1[1] = dword_20DE650 + v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF870  (binary VA: 0xbdf870)
// Original: sub_BDF870
// ----------------------------------------------------------------------------
uint32_t * sub_BDF870(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;

  result = a1;
  v3 = -1;
  if ( *a1 != -1 )
    v3 = a1[1] - dword_20DE650;
  v4 = v3 - a2;
  *a1 = v4;
  a1[1] = dword_20DE650 + v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF8B0  (binary VA: 0xbdf8b0)
// Original: sub_BDF8B0
// ----------------------------------------------------------------------------
uint32_t * sub_BDF8B0(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = dword_20DE650 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF8D0  (binary VA: 0xbdf8d0)
// Original: sub_BDF8D0
// ----------------------------------------------------------------------------
bool sub_BDF8D0(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 == v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF910  (binary VA: 0xbdf910)
// Original: sub_BDF910
// ----------------------------------------------------------------------------
bool sub_BDF910(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 == v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF950  (binary VA: 0xbdf950)
// Original: sub_BDF950
// ----------------------------------------------------------------------------
bool sub_BDF950(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 >= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF990  (binary VA: 0xbdf990)
// Original: sub_BDF990
// ----------------------------------------------------------------------------
bool sub_BDF990(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 >= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDF9D0  (binary VA: 0xbdf9d0)
// Original: sub_BDF9D0
// ----------------------------------------------------------------------------
bool sub_BDF9D0(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 > v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFA10  (binary VA: 0xbdfa10)
// Original: sub_BDFA10
// ----------------------------------------------------------------------------
bool sub_BDFA10(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 > v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFA50  (binary VA: 0xbdfa50)
// Original: sub_BDFA50
// ----------------------------------------------------------------------------
bool sub_BDFA50(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 <= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFA90  (binary VA: 0xbdfa90)
// Original: sub_BDFA90
// ----------------------------------------------------------------------------
bool sub_BDFA90(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 < v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFAD0  (binary VA: 0xbdfad0)
// Original: sub_BDFAD0
// ----------------------------------------------------------------------------
int sub_BDFAD0(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 * v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFB10  (binary VA: 0xbdfb10)
// Original: sub_BDFB10
// ----------------------------------------------------------------------------
int sub_BDFB10(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return v2 / a2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFB70  (binary VA: 0xbdfb70)
// Original: sub_BDFB70
// ----------------------------------------------------------------------------
int sub_BDFB70(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return a2 + v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFBB0  (binary VA: 0xbdfbb0)
// Original: sub_BDFBB0
// ----------------------------------------------------------------------------
int sub_BDFBB0(int *a1, int a2)
{
  int v2;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  return v2 - a2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFBF0  (binary VA: 0xbdfbf0)
// Original: sub_BDFBF0
// ----------------------------------------------------------------------------
int sub_BDFBF0(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE650;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE650;
    }
  }
  return v2 * v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFC60  (binary VA: 0xbdfc60)
// Original: sub_BDFC60
// ----------------------------------------------------------------------------
int sub_BDFC60(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2;
  unsigned int v3;

  v2 = 0xFFFFFFFF;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  v3 = 0xFFFFFFFF;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE650;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE650;
    }
  }
  return v2 / v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFCD0  (binary VA: 0xbdfcd0)
// Original: sub_BDFCD0
// ----------------------------------------------------------------------------
int sub_BDFCD0(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE650;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE650;
    }
  }
  return v2 + v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFD40  (binary VA: 0xbdfd40)
// Original: sub_BDFD40
// ----------------------------------------------------------------------------
int sub_BDFD40(int *a1, int *a2)
{
  int v2;
  int v3;

  v2 = -1;
  if ( *a1 != -1 )
  {
    v2 = a1[1] - dword_20DE650;
    if ( *a1 != v2 )
    {
      *a1 = v2;
      a1[1] = v2 + dword_20DE650;
    }
  }
  v3 = -1;
  if ( *a2 != -1 )
  {
    v3 = a2[1] - dword_20DE650;
    if ( *a2 != v3 )
    {
      *a2 = v3;
      a2[1] = v3 + dword_20DE650;
    }
  }
  return v2 - v3;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFDB0  (binary VA: 0xbdfdb0)
// Original: sub_BDFDB0
// ----------------------------------------------------------------------------
int sub_BDFDB0(int *a1)
{
  int v1;

  v1 = -1;
  if ( *a1 != -1 )
  {
    v1 = a1[1] - dword_20DE650;
    if ( *a1 != v1 )
    {
      *a1 = v1;
      a1[1] = v1 + dword_20DE650;
    }
  }
  return -v1;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFDF0  (binary VA: 0xbdfdf0)
// Original: sub_BDFDF0
// ----------------------------------------------------------------------------
int * sub_BDFDF0(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE650;
  v3 = v2 - 1;
  *a1 = v3;
  a1[1] = dword_20DE650 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFE30  (binary VA: 0xbdfe30)
// Original: sub_BDFE30
// ----------------------------------------------------------------------------
int * sub_BDFE30(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE650;
  v3 = v2 - 1;
  *a1 = v3;
  a1[1] = dword_20DE650 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFE70  (binary VA: 0xbdfe70)
// Original: sub_BDFE70
// ----------------------------------------------------------------------------
int * sub_BDFE70(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE650;
  v3 = v2 + 1;
  *a1 = v3;
  a1[1] = dword_20DE650 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFEB0  (binary VA: 0xbdfeb0)
// Original: sub_BDFEB0
// ----------------------------------------------------------------------------
int * sub_BDFEB0(int *a1)
{
  int *result;
  int v2;
  int v3;

  result = a1;
  v2 = -1;
  if ( *a1 != -1 )
    v2 = a1[1] - dword_20DE650;
  v3 = v2 + 1;
  *a1 = v3;
  a1[1] = dword_20DE650 + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFEF0  (binary VA: 0xbdfef0)
// Original: sub_BDFEF0
// ----------------------------------------------------------------------------
int sub_BDFEF0(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 - v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFF30  (binary VA: 0xbdff30)
// Original: sub_BDFF30
// ----------------------------------------------------------------------------
int sub_BDFF30(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 + v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFF70  (binary VA: 0xbdff70)
// Original: sub_BDFF70
// ----------------------------------------------------------------------------
int sub_BDFF70(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 + v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFFB0  (binary VA: 0xbdffb0)
// Original: sub_BDFFB0
// ----------------------------------------------------------------------------
int sub_BDFFB0(int a1, int *a2)
{
  int v2;

  v2 = -1;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 * v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BDFFF0  (binary VA: 0xbdfff0)
// Original: sub_BDFFF0
// ----------------------------------------------------------------------------
int sub_BDFFF0(unsigned int a1, unsigned int *a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 / v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0050  (binary VA: 0xbe0050)
// Original: sub_BE0050
// ----------------------------------------------------------------------------
int sub_BE0050(float a1, unsigned int *a2)
{
  unsigned int v2;
  __m128 v3;
  __m128 v4;
  v2 = 0xFFFFFFFF;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
g4_m128_raw(v3) = 0;
g4_m128_lane<float>(v3, 0) = a1 / (float)((float)((float)HIWORD(v2) * 65536.0) + (float)(uint16_t)v2);
  v4 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v3);
  return _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttps_epi32(_mm_sub_ps(v3, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v4))),
             _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v4)), 0x1Fu)));
}

// ----------------------------------------------------------------------------
// Function: sub_BE00E0  (binary VA: 0xbe00e0)
// Original: sub_BE00E0
// ----------------------------------------------------------------------------
int sub_BE00E0(unsigned int a1, unsigned int *a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 / v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0140  (binary VA: 0xbe0140)
// Original: sub_BE0140
// ----------------------------------------------------------------------------
bool sub_BE0140(unsigned int a1, unsigned int *a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 <= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0180  (binary VA: 0xbe0180)
// Original: sub_BE0180
// ----------------------------------------------------------------------------
bool sub_BE0180(unsigned int a1, unsigned int *a2)
{
  unsigned int v2;

  v2 = 0xFFFFFFFF;
  if ( *a2 != -1 )
  {
    v2 = a2[1] - dword_20DE650;
    if ( *a2 != v2 )
    {
      *a2 = v2;
      a2[1] = v2 + dword_20DE650;
    }
  }
  return a1 <= v2;
}

// ----------------------------------------------------------------------------
// Function: sub_BE01C0  (binary VA: 0xbe01c0)
// Original: sub_BE01C0
// ----------------------------------------------------------------------------
int sub_BE01C0(int a1, uint32_t *a2)
{
  sub_192D8B0(a1, *a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0200  (binary VA: 0xbe0200)
// Original: sub_BE0200
// ----------------------------------------------------------------------------
int sub_BE0200(int a1, uint32_t *a2)
{
  int v2;
  uint32_t v4[4];

  v2 = *a2 + dword_20DE650;
  v4[0] = *a2;
  v4[1] = v2;
  sub_BDF6F0(a1, v4);
  return a1;
}


