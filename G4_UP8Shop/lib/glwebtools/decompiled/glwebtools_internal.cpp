#include "Core/Utils/DecompTypes.h"
#include "glwebtools_internal.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_13D52A0  (binary VA: 0x13d52a0)
// Original: sub_13D52A0
// ----------------------------------------------------------------------------
int sub_13D52A0(int a1)
{
  int result;

  result = 63;
  if ( (uint8_t)a1 != 47 )
  {
    result = 62;
    if ( (uint8_t)a1 != 43 )
    {
      if ( (char)a1 <= 57 )
      {
        return a1 + 4;
      }
      else
      {
        result = a1 - 65;
        if ( (char)a1 > 90 )
          return a1 - 71;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13D76D0  (binary VA: 0x13d76d0)
// Original: sub_13D76D0
// ----------------------------------------------------------------------------
unsigned int sub_13D76D0(int a1, void **a2)
{
  void *v2;
  unsigned int v3;
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[7];
  typedef char _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v10)) > _g4_s3 ? (50u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v11)) > _g4_s4 ? (52u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v12)) > _g4_s5 ? (56u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v15)) > _g4_s8 ? (92u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v16)) > _g4_s9 ? (96u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v17)) > _g4_s10 ? (100u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v18)) > _g4_s11 ? (104u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v19)) > _g4_s12 ? (116u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v20)) > _g4_s13 ? (124u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v21)) > _g4_s14 ? (216u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v22)) > _g4_s15 ? (220u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (221u + sizeof(_g4_t_v23)) > _g4_s16 ? (221u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v24)) > _g4_s17 ? (224u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (228u + sizeof(_g4_t_v25)) > _g4_s18 ? (228u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (232u + sizeof(_g4_t_v26)) > _g4_s19 ? (232u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v27)) > _g4_s20 ? (236u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 116u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 216u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 220u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 221u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 224u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 228u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 232u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 236u);

  sub_1900810(v18);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v14[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v15);
  v16 = 0;
  v2 = *a2;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v17), v2, *((uint32_t *)v2 - 3), (int)(uintptr_t)(&v10));
  v16 = 24;
  sub_1931CD0(v14, v17, 0, 0);
  sub_19119D0(v18, v14);
  v19 |= 1u;
  sub_1915250(&v11, a1);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = (v20 & 5) != 0 ? 0x80000002 : 0;
  v7 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = v3;
    g4_std::string::Rep::M_destroy(v7);
    v3 = v6;
  }
  v5 = v3;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v18);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_13D79F0  (binary VA: 0x13d79f0)
// Original: sub_13D79F0
// ----------------------------------------------------------------------------
unsigned int sub_13D79F0(int a1, void **a2)
{
  void *v2;
  unsigned int v3;
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[7];
  typedef char _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v10)) > _g4_s3 ? (50u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v11)) > _g4_s4 ? (52u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v12)) > _g4_s5 ? (56u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v15)) > _g4_s8 ? (92u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v16)) > _g4_s9 ? (96u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v17)) > _g4_s10 ? (100u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v18)) > _g4_s11 ? (104u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v19)) > _g4_s12 ? (116u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v20)) > _g4_s13 ? (124u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v21)) > _g4_s14 ? (216u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v22)) > _g4_s15 ? (220u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (221u + sizeof(_g4_t_v23)) > _g4_s16 ? (221u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v24)) > _g4_s17 ? (224u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (228u + sizeof(_g4_t_v25)) > _g4_s18 ? (228u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (232u + sizeof(_g4_t_v26)) > _g4_s19 ? (232u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v27)) > _g4_s20 ? (236u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 116u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 216u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 220u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 221u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 224u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 228u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 232u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 236u);

  sub_1900810(v18);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v14[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v15);
  v16 = 0;
  v2 = *a2;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v17), v2, *((uint32_t *)v2 - 3), (int)(uintptr_t)(&v10));
  v16 = 24;
  sub_1931CD0(v14, v17, 0, 0);
  sub_19119D0(v18, v14);
  v19 |= 1u;
  sub_1914710(&v11, a1);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = (v20 & 5) != 0 ? 0x80000002 : 0;
  v7 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = v3;
    g4_std::string::Rep::M_destroy(v7);
    v3 = v6;
  }
  v5 = v3;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v18);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_13D7D10  (binary VA: 0x13d7d10)
// Original: sub_13D7D10
// ----------------------------------------------------------------------------
unsigned int sub_13D7D10(int a1, void **a2)
{
  void *v2;
  unsigned int v3;
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[7];
  typedef char _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v10)) > _g4_s3 ? (50u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v11)) > _g4_s4 ? (52u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v12)) > _g4_s5 ? (56u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v15)) > _g4_s8 ? (92u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v16)) > _g4_s9 ? (96u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v17)) > _g4_s10 ? (100u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v18)) > _g4_s11 ? (104u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v19)) > _g4_s12 ? (116u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v20)) > _g4_s13 ? (124u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v21)) > _g4_s14 ? (216u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v22)) > _g4_s15 ? (220u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (221u + sizeof(_g4_t_v23)) > _g4_s16 ? (221u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v24)) > _g4_s17 ? (224u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (228u + sizeof(_g4_t_v25)) > _g4_s18 ? (228u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (232u + sizeof(_g4_t_v26)) > _g4_s19 ? (232u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v27)) > _g4_s20 ? (236u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 116u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 216u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 220u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 221u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 224u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 228u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 232u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 236u);

  sub_1900810(v18);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v14[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v15);
  v16 = 0;
  v2 = *a2;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v17), v2, *((uint32_t *)v2 - 3), (int)(uintptr_t)(&v10));
  v16 = 24;
  sub_1931CD0(v14, v17, 0, 0);
  sub_19119D0(v18, v14);
  v19 |= 1u;
  sub_19156A0(&v11, a1);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = (v20 & 5) != 0 ? 0x80000002 : 0;
  v7 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = v3;
    g4_std::string::Rep::M_destroy(v7);
    v3 = v6;
  }
  v5 = v3;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v18);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_13D8030  (binary VA: 0x13d8030)
// Original: sub_13D8030
// ----------------------------------------------------------------------------
unsigned int sub_13D8030(int a1, void **a2)
{
  void *v2;
  unsigned int v3;
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[7];
  typedef char _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v10)) > _g4_s3 ? (50u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v11)) > _g4_s4 ? (52u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v12)) > _g4_s5 ? (56u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v15)) > _g4_s8 ? (92u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v16)) > _g4_s9 ? (96u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v17)) > _g4_s10 ? (100u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v18)) > _g4_s11 ? (104u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v19)) > _g4_s12 ? (116u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v20)) > _g4_s13 ? (124u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v21)) > _g4_s14 ? (216u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v22)) > _g4_s15 ? (220u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (221u + sizeof(_g4_t_v23)) > _g4_s16 ? (221u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v24)) > _g4_s17 ? (224u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (228u + sizeof(_g4_t_v25)) > _g4_s18 ? (228u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (232u + sizeof(_g4_t_v26)) > _g4_s19 ? (232u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v27)) > _g4_s20 ? (236u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 116u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 216u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 220u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 221u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 224u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 228u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 232u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 236u);

  sub_1900810(v18);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v14[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v15);
  v16 = 0;
  v2 = *a2;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v17), v2, *((uint32_t *)v2 - 3), (int)(uintptr_t)(&v10));
  v16 = 24;
  sub_1931CD0(v14, v17, 0, 0);
  sub_19119D0(v18, v14);
  v19 |= 1u;
  sub_1915C60(&v11, a1);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = (v20 & 5) != 0 ? 0x80000002 : 0;
  v7 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = v3;
    g4_std::string::Rep::M_destroy(v7);
    v3 = v6;
  }
  v5 = v3;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v18);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_13D8350  (binary VA: 0x13d8350)
// Original: sub_13D8350
// ----------------------------------------------------------------------------
unsigned int sub_13D8350(int a1, void **a2)
{
  void *v2;
  unsigned int v3;
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[7];
  typedef char _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v10)) > _g4_s3 ? (50u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v11)) > _g4_s4 ? (52u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v12)) > _g4_s5 ? (56u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v15)) > _g4_s8 ? (92u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v16)) > _g4_s9 ? (96u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v17)) > _g4_s10 ? (100u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v18)) > _g4_s11 ? (104u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v19)) > _g4_s12 ? (116u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v20)) > _g4_s13 ? (124u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v21)) > _g4_s14 ? (216u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v22)) > _g4_s15 ? (220u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (221u + sizeof(_g4_t_v23)) > _g4_s16 ? (221u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v24)) > _g4_s17 ? (224u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (228u + sizeof(_g4_t_v25)) > _g4_s18 ? (228u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (232u + sizeof(_g4_t_v26)) > _g4_s19 ? (232u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v27)) > _g4_s20 ? (236u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 50u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 116u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 216u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 220u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 221u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 224u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 228u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 232u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 236u);

  sub_1900810(v18);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  memset(&v14[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v15);
  v16 = 0;
  v2 = *a2;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v17), v2, *((uint32_t *)v2 - 3), (int)(uintptr_t)(&v10));
  v16 = 24;
  sub_1931CD0(v14, v17, 0, 0);
  sub_19119D0(v18, v14);
  v19 |= 1u;
  sub_1915AF0(&v11, a1);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v18[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = (v20 & 5) != 0 ? 0x80000002 : 0;
  v7 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = v3;
    g4_std::string::Rep::M_destroy(v7);
    v3 = v6;
  }
  v5 = v3;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v15);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  v18[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v18);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_int_id_3c1d17  (binary VA: 0x13d8ea0)
// Original: glwebtools::CustomArgument::SetType<int>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_int_id_3c1d17(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_unsigned_int_c13960  (binary VA: 0x13d8eb0)
// Original: glwebtools::CustomArgument::SetType<unsigned int>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_unsigned_int_c13960(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_float_id_0d9c87  (binary VA: 0x13d8ec0)
// Original: glwebtools::CustomArgument::SetType<float>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_float_id_0d9c87(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_double_id_1bf09d  (binary VA: 0x13d8ed0)
// Original: glwebtools::CustomArgument::SetType<double>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_double_id_1bf09d(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_bool_id_e025d9  (binary VA: 0x13d8ee0)
// Original: glwebtools::CustomArgument::SetType<bool>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_bool_id_e025d9(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_char_const_38f1e3  (binary VA: 0x13d8ef0)
// Original: glwebtools::CustomArgument::SetType<char const*>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_char_const_38f1e3(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 6;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_string_const_52abae  (binary VA: 0x13d8f00)
// Original: glwebtools::CustomArgument::SetType<std::string const&>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_string_const_52abae(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 6;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::SetType_glwebtools_JSONValue_con_13d198  (binary VA: 0x13d8f10)
// Original: glwebtools::CustomArgument::SetType<glwebtools::JSONValue const&>
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::SetType_glwebtools_JSONValue_con_13d198(glwebtools::CustomArgument::Self *self)
{
  *((uint32_t *)self + 1) = 7;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::find  (binary VA: 0x13d9940)
// Original: std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::find
// ----------------------------------------------------------------------------
std::_Rb_tree<glwebtools::CustomAttribute::Self, glwebtools::CustomAttribute::Self, std::_Identity<glwebtools::CustomAttribute::Self>, std::less<glwebtools::CustomAttribute::Self>, glwebtools::SAllocator<glwebtools::CustomAttribute::Self, (glwebtools::MemHint)4>> * g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::find(std::_Rb_tree<glwebtools::CustomAttribute::Self, glwebtools::CustomAttribute::Self, std::_Identity<glwebtools::CustomAttribute::Self>, std::less<glwebtools::CustomAttribute::Self>, glwebtools::SAllocator<glwebtools::CustomAttribute::Self, (glwebtools::MemHint)4>> *self, const glwebtools::CustomAttribute::Self *a2, glwebtools::CustomAttribute::Self *a3)
{
  char *v3;
  glwebtools::CustomAttribute::Self *v4;
  uint32_t *s1;
  const void *s2;
  size_t v7;
  size_t v8;
  size_t n;
  int v10;
  int v11;
  glwebtools::CustomAttribute::Self *v12;
  uint32_t *v13;
  const void *v14;
  size_t v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  char *v21;

  v3 = *((char **)a2 + 2);
  if ( v3 == nullptr )
    goto LABEL_17;
  v21 = (char *)a2 + 4;
  do
  {
    while ( 1 )
    {
      v4 = glwebtools::CustomAttribute::key(a3);
      s1 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v3 + 16));
      s2 = *(const void **)v4;
      v7 = *(s1 - 3);
      v8 = *(uint32_t *)(*(uint32_t *)v4 - 12);
      n = v7;
      if ( v8 <= v7 )
        n = v8;
      v10 = v7 - v8;
      v11 = memcmp(s1, s2, n);
      if ( v11 != 0 )
        v10 = v11;
      if ( v10 < 0 )
        break;
      v21 = v3;
      v3 = *((char **)v3 + 2);
      if ( v3 == nullptr )
        goto LABEL_10;
    }
    v3 = *((char **)v3 + 3);
  }
  while ( v3 != nullptr );
LABEL_10:
  if ( (char *)a2 + 4 == v21 )
    goto LABEL_17;
  v12 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v21 + 16));
  v13 = *(uint32_t **)glwebtools::CustomAttribute::key(a3);
  v14 = *(const void **)v12;
  v15 = *(v13 - 3);
  v16 = *(uint32_t *)(*(uint32_t *)v12 - 12);
  v17 = v15;
  if ( v16 <= v15 )
    v17 = v16;
  v18 = v15 - v16;
  v19 = memcmp(v13, v14, v17);
  if ( v19 == 0 )
    v19 = v18;
  if ( v19 < 0 )
LABEL_17:
    v21 = (char *)a2 + 4;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v21);
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase  (binary VA: 0x13d9a40)
// Original: std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
        a1,
        v2[3]);
      v3 = v2[5];
      v4 = (uint32_t *)v2[2];
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v5 = v2[4];
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)(v2));
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13D9AF0  (binary VA: 0x13d9af0)
// Original: sub_13D9AF0
// ----------------------------------------------------------------------------
int sub_13D9AF0()
{
  sub_1900D70(&unk_2119748);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119748, &unk_20D1280);
  glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)&glwebtools::CustomAttributeList::InvalidArgument);
  return __cxa_atexit(
           (void (*)(void *))glwebtools::CustomArgument::Destroy,
           &glwebtools::CustomAttributeList::InvalidArgument,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4d8b23::M_erase  (binary VA: 0x13dcac0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_4d8b23::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_string_pair_string_const_4d8b23::M_erase(
        a1,
        v2[3]);
      v3 = v2[4];
      v4 = (uint32_t *)v2[2];
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)(v2));
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_erase  (binary VA: 0x13dcb40)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_erase(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_erase(
        a1,
        *(uint32_t *)(v2 + 12));
      v3 = *(uint32_t *)(v2 + 8);
      result = sub_4EBEE0(v2);
      if ( v3 == 0 )
        break;
      v2 = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_erase  (binary VA: 0x13dcba0)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_erase(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_erase(
        a1,
        *(uint32_t *)(v2 + 12));
      v3 = *(uint32_t *)(v2 + 8);
      result = sub_4EBEE0(v2);
      if ( v3 == 0 )
        break;
      v2 = v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert  (binary VA: 0x13dcc00)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(int *a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v8;
  int v9;

  v8 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v8 = (unsigned int)*a5 < *(uint32_t *)(a4 + 16);
  v5 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v5 != -16 )
  {
    v6 = *a5;
    *(uint32_t *)(v5 + 20) = a5[1];
    *(uint32_t *)(v5 + 16) = v6;
  }
  v9 = v5;
  sub_1904970(v8, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert_unique  (binary VA: 0x13dccf0)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  unsigned int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( (unsigned int)*a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert_unique  (binary VA: 0x13dcdd0)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlConnectionCore *>,(glwebtools::MemHint)4>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= (unsigned int)*a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( (unsigned int)*a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      a4);
  else
    g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert  (binary VA: 0x13dcf60)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(int *a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v8;
  int v9;

  v8 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v8 = (unsigned int)*a5 < *(uint32_t *)(a4 + 16);
  v5 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v5 != -16 )
  {
    v6 = *a5;
    *(uint32_t *)(v5 + 20) = a5[1];
    *(uint32_t *)(v5 + 16) = v6;
  }
  v9 = v5;
  sub_1904970(v8, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert_unique  (binary VA: 0x13dd050)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  unsigned int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( (unsigned int)*a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert_unique  (binary VA: 0x13dd130)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,glwebtools::UrlRequestCore *>,std::_Select1st<std::pair<unsigned int const,glwebtools::UrlRequestCore *>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,glwebtools::UrlRequestCore *>,(glwebtools::MemHint)4>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= (unsigned int)*a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( (unsigned int)*a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      a4);
  else
    g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert  (binary VA: 0x13dd2c0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(int *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v10 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    v6 = v12;
    *(uint32_t *)(v12 + 20) = *(uint32_t *)(a5 + 4);
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert_unique  (binary VA: 0x13dd3e0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert_unique(int a1, int a2, void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  typedef size_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_s1)) > _g4_s4 ? (24u + sizeof(_g4_t_s1)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v11 = a2 + 4;
    goto LABEL_17;
  }
  v3 = *(uint32_t *)(a2 + 8);
  s1 = *a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v19 = v3;
    if ( v4 <= v7 )
      n = v4;
    v18 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v19 + 8);
    v21 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v19 + 12);
  v21 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v19;
  v12 = v10;
  v13 = v18;
  v14 = v19;
  if ( v21 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == *(uint32_t *)(a2 + 12) )
  {
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
      v23,
      a2,
      0,
      v11,
      (int)(uintptr_t)(a3));
  }
  else
  {
    v14 = sub_19048F0(v11);
    s1 = *a3;
    v4 = *((uint32_t *)*a3 - 3);
    v12 = *(uint32_t **)(v14 + 16);
    v7 = *(v12 - 3);
    v13 = v7;
    if ( v4 <= v7 )
      v13 = *((uint32_t *)s1 - 3);
LABEL_12:
    v20 = v14;
    v15 = v7 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = v20;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
      v23,
      a2,
      0,
      v11,
      (int)(uintptr_t)(a3));
  }
  *(uint32_t *)a1 = v23[0];
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert_unique  (binary VA: 0x13dd560)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,glwebtools::TaskGroup *>,std::_Select1st<std::pair<std::string const,glwebtools::TaskGroup *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,glwebtools::TaskGroup *>,(glwebtools::MemHint)4>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert_unique(int *a1, int *a2, int a3, const void **a4)
{
  const void *s1;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v10;
  int v12;
  const void **v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  const void **v18;
  size_t v19;
  size_t v20;
  int v21;
  int v22;
  int v23;
  size_t v24;
  size_t v25;
  size_t v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef size_t _g4_t_v31;
  typedef void *_g4_t_s2;
  typedef const void **_g4_t_v33;
  typedef const void **_g4_t_v34;
  typedef int _g4_t_v35[5];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v31)) > _g4_s2 ? (40u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_s2)) > _g4_s3 ? (48u + sizeof(_g4_t_s2)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v33)) > _g4_s4 ? (48u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v34)) > _g4_s5 ? (48u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v35)) > _g4_s6 ? (56u + sizeof(_g4_t_v35)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);

  if ( (int *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_35;
    v23 = a2[4];
    v24 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
    v25 = *((uint32_t *)*a4 - 3);
    v26 = v24;
    if ( v25 <= v24 )
      v26 = *((uint32_t *)*a4 - 3);
    v27 = v24 - v25;
    v28 = memcmp(*(const void **)(v23 + 16), *a4, v26);
    if ( v28 == 0 )
      v28 = v27;
    if ( v28 >= 0 )
      goto LABEL_35;
    v29 = v23;
    v30 = (int)(uintptr_t)(a4);
LABEL_37:
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      v29,
      v30);
    return a1;
  }
  s1 = *a4;
  v5 = *((uint32_t *)*a4 - 3);
  v6 = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  n = v5;
  if ( v6 <= v5 )
    n = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  s2 = *(void **)(a3 + 16);
  v31 = n;
  v8 = memcmp(*a4, s2, n);
  if ( v8 == 0 )
    v8 = v5 - v6;
  if ( v8 < 0 )
  {
    v12 = a2[3];
    if ( v12 == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v12,
        a2[3],
        (int)(uintptr_t)(a4));
      return a1;
    }
    v13 = (const void **)sub_1904940(a3);
    v14 = v5;
    v15 = *((uint32_t *)v13[4] - 3);
    v33 = v13;
    if ( v15 <= v5 )
      v14 = *((uint32_t *)v13[4] - 3);
    v16 = v15 - v5;
    v17 = memcmp(v13[4], s1, v14);
    if ( v17 != 0 )
      v16 = v17;
    if ( v16 >= 0 )
      goto LABEL_35;
    v30 = (int)(uintptr_t)(a4);
    if ( v33[3] != nullptr )
    {
      g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        a3,
        a3,
        (int)(uintptr_t)(a4));
      return a1;
    }
    v29 = (int)(uintptr_t)(v33);
    goto LABEL_37;
  }
  v9 = memcmp(s2, s1, v31);
  v10 = v6 - v5;
  if ( v9 != 0 )
    v10 = v9;
  if ( v10 >= 0 )
  {
    *a1 = a3;
    return a1;
  }
  if ( a2[4] == a3 )
  {
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a2[4],
      (int)(uintptr_t)(a4));
    return a1;
  }
  v18 = (const void **)sub_19048E0(a3);
  v19 = v5;
  v20 = *((uint32_t *)v18[4] - 3);
  v34 = v18;
  if ( v20 <= v5 )
    v19 = *((uint32_t *)v18[4] - 3);
  v21 = v5 - v20;
  v22 = memcmp(s1, v18[4], v19);
  if ( v22 != 0 )
    v21 = v22;
  if ( v21 >= 0 )
  {
LABEL_35:
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert_unique(
      (int)(uintptr_t)(v35),
      (int)(uintptr_t)(a2),
      (void **)a4);
    *a1 = v35[0];
    return a1;
  }
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      (int)(uintptr_t)(v34),
      (int)(uintptr_t)(v34),
      (int)(uintptr_t)(a4));
  else
    g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      (int)(uintptr_t)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_glwebtools_HandleManager_dc99ad::M_insert_aux  (binary VA: 0x13ddd60)
// Original: std::vector<glwebtools::HandleManagerNode,glwebtools::SAllocator<glwebtools::HandleManagerNode,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_glwebtools_HandleManager_dc99ad::M_insert_aux(int *a1, char *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  char *v9;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  uint32_t *v15;
  int v16;
  char *v17;
  uint32_t *v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  uint8_t v25;
  unsigned int v26;
  int v27;
  int v28;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
      v4 = a1[1];
    }
    v5 = v4 + 12;
    v6 = (char *)(v4 - 12);
    a1[1] = v5;
    v7 = *a3;
    v25 = *((uint8_t *)a3 + 4);
    v28 = a3[1];
    v8 = -1431655765 * ((v6 - a2) >> 2);
    v23 = a3[2];
    v9 = v6;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        v9 -= 12;
        --v8;
        *(uint32_t *)v6 = *(uint32_t *)v9;
        *((uint32_t *)v6 + 1) = *((uint32_t *)v9 + 1);
        *((uint32_t *)v6 + 2) = *((uint32_t *)v9 + 2);
        if ( v8 == 0 )
          break;
        v6 -= 12;
      }
    }
    *((uint32_t *)a2 + 1) = v28;
    *(uint32_t *)a2 = v7;
    *((uint32_t *)a2 + 2) = v23;
    a2[4] = v25;
    return v25;
  }
  v11 = *a1;
  v12 = -1431655765 * (((int)(uintptr_t)(v3) - *a1) >> 2);
  if ( v12 != 0 )
  {
    v13 = 2 * v12;
    if ( v12 > 2 * v12 || v13 > 0x15555555 )
    {
      v27 = -4;
      v14 = -1431655765 * ((int)(uintptr_t)(&a2[-v11]) >> 2);
    }
    else
    {
      v27 = 24 * v12;
      v14 = -1431655765 * ((int)(uintptr_t)(&a2[-v11]) >> 2);
      if ( v13 == 0 )
      {
        v26 = 12;
        v24 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v27 = 12;
    v14 = -1431655765 * ((int)(uintptr_t)(&a2[-v11]) >> 2);
  }
  v22 = v14;
  v24 = sub_4EBE70(v27, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  v26 = v24 + 12;
  v14 = v22;
LABEL_13:
  v15 = (uint32_t *)(v24 + 12 * v14);
  if ( v15 != nullptr )
  {
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
  }
  v16 = *a1;
  if ( (char *)*a1 != a2 )
  {
    v17 = (char *)*a1;
    v18 = (uint32_t *)v24;
    do
    {
      if ( v18 != nullptr )
      {
        *v18 = *(uint32_t *)v17;
        v18[1] = *((uint32_t *)v17 + 1);
        v18[2] = *((uint32_t *)v17 + 2);
      }
      v17 += 12;
      v18 += 3;
    }
    while ( v17 != a2 );
    v26 = v24 + 4 * ((unsigned int)(uintptr_t)(&a2[-v16 - 12]) >> 2) + 24;
  }
  v19 = (char *)a1[1];
  if ( v19 != a2 )
  {
    v20 = a2;
    v21 = (uint32_t *)v26;
    do
    {
      if ( v21 != nullptr )
      {
        *v21 = *(uint32_t *)v20;
        v21[1] = *((uint32_t *)v20 + 1);
        v21[2] = *((uint32_t *)v20 + 2);
      }
      v20 += 12;
      v21 += 3;
    }
    while ( v19 != v20 );
    v26 += 4 * ((unsigned int)(v19 - (a2 + 12)) >> 2) + 12;
  }
  if ( *a1 != 0 )
    sub_4EBEE0(*a1);
  *a1 = v24;
  a1[1] = v26;
  a1[2] = v27 + v24;
  return v27 + v24;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_pair_string_glwebtools_J_91bc19::M_insert_aux  (binary VA: 0x13df1e0)
// Original: std::vector<std::pair<std::string,glwebtools::JSONValue>>::_M_insert_aux
// ----------------------------------------------------------------------------
uint32_t * g4_std::vector_pair_string_glwebtools_J_91bc19::M_insert_aux(void **a1, char *a2, int a3)
{
  void **v3;
  char *v4;
  uint8_t *v5;
  char *v6;
  int v7;
  int v8;
  uint32_t *result;
  void *v10;
  void *v11;
  uint8_t *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef void **_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void **_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v30)) > _g4_s4 ? (8u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v31)) > _g4_s5 ? (8u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v32)) > _g4_s6 ? (12u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v33)) > _g4_s7 ? (16u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v34)) > _g4_s8 ? (20u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v36)) > _g4_s10 ? (40u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v37)) > _g4_s11 ? (44u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);

  v3 = a1;
  v4 = a2;
  v5 = (uint8_t *)(a1[1]);
  if ( v5 != a1[2] )
  {
    v6 = nullptr;
    if ( v5 != nullptr )
    {
      g4_std::string::construct_copy(a1[1], v5 - 8);
      g4_std::string::construct_copy(v5 + 4, v5 - 4);
      v6 = (char *)a1[1];
    }
    a1[1] = v6 + 8;
    g4_std::string::construct_copy(&v36, a3);
    g4_std::string::construct_copy(v37, a3 + 4);
    v7 = (int)(uintptr_t)(a1[1]) - 16;
    v8 = (v7 - (int)(uintptr_t)(a2)) >> 3;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        g4_std::string::assign_str(v7, v7 - 8);
        g4_std::string::assign_str(v7 + 4, v7 - 4);
        if ( --v8 == 0 )
          break;
        v7 -= 8;
      }
      v4 = a2;
    }
    g4_std::string::assign_str(v4, &v36);
    g4_std::string::assign_str(v4 + 4, v37);
    result = dword_213B808;
    v10 = (void *)(v37[0] - 12);
    if ( (uint32_t *)(v37[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
      result = dword_213B808;
    }
    v11 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808 )
    {
      result = (uint32_t *)__sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF);
      if ( (int)(uintptr_t)(result) <= 0 )
        return (g4_std::string::Rep::M_destroy(v11), (uint32_t *)0);
    }
    return result;
  }
  v12 = (uint8_t *)(*a1);
  v13 = (v5 - (uint8_t *)*a1) >> 3;
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x1FFFFFFF )
    {
      v34 = -8;
      v15 = (a2 - (char *)(v12)) >> 3;
    }
    else
    {
      v15 = (a2 - (char *)(v12)) >> 3;
      v34 = 16 * v13;
      if ( v14 == 0 )
      {
        v16 = 8;
        v33 = 0;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v34 = 8;
    v15 = (a2 - (char *)(v12)) >> 3;
  }
  v26 = v15;
  v33 = opNew(v34);
  v16 = v33 + 8;
  v15 = v26;
LABEL_16:
  v17 = v33 + 8 * v15;
  if ( v17 != 0 )
  {
    v27 = v33 + 8 * v15;
    g4_std::string::construct_copy(v17, a3);
    g4_std::string::construct_copy(v27 + 4, a3 + 4);
  }
  if ( *a1 != a2 )
  {
    v18 = v33;
    v19 = (char *)*a1;
    do
    {
      if ( v18 != 0 )
      {
        g4_std::string::construct_copy(v18, v19);
        g4_std::string::construct_copy(v18 + 4, v19 + 4);
      }
      v19 += 8;
      v18 += 8;
    }
    while ( v19 != a2 );
    v3 = a1;
    v16 = v18 + 8;
  }
  v32 = (char *)v3[1];
  if ( v32 != a2 )
  {
    v30 = v3;
    v20 = (char *)v3[1];
    do
    {
      if ( v16 != 0 )
      {
        g4_std::string::construct_copy(v16, v4);
        g4_std::string::construct_copy(v16 + 4, v4 + 4);
      }
      v4 += 8;
      v16 += 8;
    }
    while ( v20 != v4 );
    v3 = v30;
    v32 = (char *)v30[1];
  }
  v31 = (char *)*v3;
  if ( *v3 != v32 )
  {
    v21 = (char *)*v3;
    v35 = v3;
    v22 = dword_213B808;
    v23 = (int)(uintptr_t)(*v3) + 4;
    do
    {
      v24 = *(uint32_t *)(v23 + v21 - v31);
      if ( (uint32_t *)(v24 - 12) != v22 && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        v28 = v22;
        g4_std::string::Rep::M_destroy((void *)(v24 - 12));
        v22 = v28;
      }
      v25 = (uint32_t *)(*(uint32_t *)v21 - 12);
      if ( v25 != v22 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        v29 = v22;
        g4_std::string::Rep::M_destroy(v25);
        v22 = v29;
      }
      v21 += 8;
    }
    while ( v21 != v32 );
    v3 = v35;
    v31 = (char *)*v35;
  }
  if ( v31 != nullptr )
    opDelete(v31);
  v3[1] = (void *)v16;
  *v3 = (void *)v33;
  v3[2] = (void *)(v34 + v33);
  return (uint32_t *)(v34 + v33);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_pair_unsigned_int_glwebt_200b3f::M_insert_aux  (binary VA: 0x13df5a0)
// Original: std::vector<std::pair<unsigned int,glwebtools::JSONValue>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_pair_unsigned_int_glwebt_200b3f::M_insert_aux(void **a1, char *a2, int *a3)
{
  void **v3;
  int *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  int result;
  void *v11;
  char *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  char *v18;
  char *v19;
  char *v20;
  char *v21;
  uint8_t *v22;
  char *v23;
  int v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void **_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef void **_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v28)) > _g4_s3 ? (12u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v29)) > _g4_s4 ? (16u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v30)) > _g4_s5 ? (20u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v31)) > _g4_s6 ? (20u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v32)) > _g4_s7 ? (20u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v33)) > _g4_s8 ? (24u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v34)) > _g4_s9 ? (28u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v35)) > _g4_s10 ? (40u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v36)) > _g4_s11 ? (44u + sizeof(_g4_t_v36)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (char *)a1[1];
  if ( v6 != a1[2] )
  {
    v7 = nullptr;
    if ( v6 != nullptr )
    {
      *(uint32_t *)v6 = *((uint32_t *)v6 - 2);
      g4_std::string::construct_copy(v6 + 4, v6 - 4);
      v7 = (char *)a1[1];
      v4 = a3;
    }
    a1[1] = v7 + 8;
    v35 = *v4;
    g4_std::string::construct_copy(v36, v4 + 1);
    v26 = (char *)a1[1];
    if ( (v26 - 16 - a2) >> 3 > 0 )
    {
      v8 = v26 - 8;
      v30 = (v26 - 16 - a2) >> 3;
      while ( 1 )
      {
        v9 = v8 - 8;
        *((uint32_t *)v8 - 2) = *((uint32_t *)v8 - 4);
        g4_std::string::assign_str(v8 - 4, v8 - 12);
        if ( --v30 == 0 )
          break;
        v8 = v9;
      }
    }
    *(uint32_t *)a2 = v35;
    g4_std::string::assign_str(a2 + 4, v36);
    result = v36[0];
    v11 = (void *)(v36[0] - 12);
    if ( (uint32_t *)(v36[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v11)), (int)0);
    }
    return result;
  }
  v12 = (char *)*a1;
  v13 = (v6 - (char *)((uint8_t *)*a1)) >> 3;
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x1FFFFFFF )
    {
      v34 = -8;
      v15 = (a2 - v12) >> 3;
    }
    else
    {
      v34 = 16 * v13;
      v15 = (a2 - v12) >> 3;
      if ( v14 == 0 )
      {
        v16 = (uint32_t *)byte_8;
        v29 = 0;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v34 = 8;
    v15 = (a2 - v12) >> 3;
  }
  v25 = v15;
  v29 = opNew(v34);
  v16 = (uint32_t *)(v29 + 8);
  v4 = a3;
  v15 = v25;
LABEL_14:
  v27 = (int *)(v29 + 8 * v15);
  if ( v27 != nullptr )
  {
    *v27 = *v4;
    g4_std::string::construct_copy(v27 + 1, v4 + 1);
  }
  if ( *a1 != a2 )
  {
    v17 = (uint32_t *)v29;
    v18 = (char *)*a1;
    do
    {
      if ( v17 != nullptr )
      {
        *v17 = *(uint32_t *)v18;
        g4_std::string::construct_copy(v17 + 1, v18 + 4);
      }
      v18 += 8;
      v17 += 2;
    }
    while ( v18 != a2 );
    v5 = a2;
    v3 = a1;
    v16 = v17 + 2;
  }
  v28 = (char *)v3[1];
  if ( v28 != a2 )
  {
    v31 = v3;
    v19 = (char *)v3[1];
    do
    {
      if ( v16 != nullptr )
      {
        *v16 = *(uint32_t *)v5;
        g4_std::string::construct_copy(v16 + 1, v5 + 4);
      }
      v5 += 8;
      v16 += 2;
    }
    while ( v19 != v5 );
    v3 = v31;
    v28 = (char *)v31[1];
  }
  v20 = (char *)*v3;
  if ( *v3 != v28 )
  {
    v32 = v16;
    v33 = v3;
    v21 = (char *)*v3;
    v22 = (uint8_t *)(*v3);
    v23 = v20 + 4;
    do
    {
      v24 = *(uint32_t *)&v23[v21 - (char *)(v22)];
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v24 - 12));
      }
      v21 += 8;
    }
    while ( v21 != v28 );
    v3 = v33;
    v16 = v32;
    v20 = (char *)*v33;
  }
  if ( v20 != nullptr )
    opDelete(v20);
  v3[1] = v16;
  *v3 = (void *)v29;
  v3[2] = (void *)(v34 + v29);
  return v34 + v29;
}

// ----------------------------------------------------------------------------
// Function: sub_13DF8D0  (binary VA: 0x13df8d0)
// Original: sub_13DF8D0
// ----------------------------------------------------------------------------
int sub_13DF8D0()
{
  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&glwebtools::JSONObject::s_invalid_value);
  __cxa_atexit(
    (void (*)(void *))glwebtools::JSONValue::Destroy,
    &glwebtools::JSONObject::s_invalid_value,
    &unk_20D1280);
  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&glwebtools::JSONArray::s_invalid_value);
  return __cxa_atexit(
           (void (*)(void *))glwebtools::JSONValue::Destroy,
           &glwebtools::JSONArray::s_invalid_value,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_insert  (binary VA: 0x13e2c00)
// Original: std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_insert(int *a1, int a2, int a3, int a4, glwebtools::CustomAttribute::Self *a5)
{
  unsigned int v5;
  int v6;
  const void **v8;
  size_t v9;
  size_t n;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  const void **v15;
  size_t v16;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v15 = (const void **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(a4 + 16));
    v8 = (const void **)glwebtools::CustomAttribute::key(a5);
    v9 = *((uint32_t *)*v8 - 3);
    n = *((uint32_t *)*v15 - 3);
    v16 = n;
    if ( n > v9 )
      n = *((uint32_t *)*v8 - 3);
    v11 = memcmp(*v8, *v15, n);
    v12 = v9 - v16;
    if ( v11 != 0 )
      v12 = v11;
    v5 = v12 >> 31;
  }
  v6 = sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v6 != -16 )
  {
    v13 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    glwebtools::CustomArgument::Construct(
      (glwebtools::CustomArgument::Self *)(v13 + 20),
      (glwebtools::CustomAttribute::Self *)((char *)a5 + 4));
    v6 = v13;
  }
  v14 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13E2D50  (binary VA: 0x13e2d50)
// Original: sub_13E2D50
// ----------------------------------------------------------------------------
int sub_13E2D50()
{
  sub_1900D70(&unk_2119764);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119764, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_13E50F0  (binary VA: 0x13e50f0)
// Original: sub_13E50F0
// ----------------------------------------------------------------------------
int sub_13E50F0()
{
  sub_1900D70(&unk_2119768);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119768, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_13E5140  (binary VA: 0x13e5140)
// Original: sub_13E5140
// ----------------------------------------------------------------------------
int sub_13E5140(uint32_t *a1, uint8_t *a2)
{
  uint8_t *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
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
  int v19;
  int v20;
  int v21;
  int v22;
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
  int result;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v72)) > _g4_s0 ? (4u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v73)) > _g4_s1 ? (8u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v74)) > _g4_s2 ? (12u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v75)) > _g4_s3 ? (16u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v76)) > _g4_s4 ? (28u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v77)) > _g4_s5 ? (32u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v78)) > _g4_s6 ? (36u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v79)) > _g4_s7 ? (40u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v80)) > _g4_s8 ? (44u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v81)) > _g4_s9 ? (48u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v82)) > _g4_s10 ? (52u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v83)) > _g4_s11 ? (56u + sizeof(_g4_t_v83)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v84)) > _g4_s12 ? (60u + sizeof(_g4_t_v84)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v85)) > _g4_s13 ? (64u + sizeof(_g4_t_v85)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v86)) > _g4_s14 ? (68u + sizeof(_g4_t_v86)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v87)) > _g4_s15 ? (72u + sizeof(_g4_t_v87)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v88)) > _g4_s16 ? (76u + sizeof(_g4_t_v88)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v89)) > _g4_s17 ? (80u + sizeof(_g4_t_v89)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v90)) > _g4_s18 ? (84u + sizeof(_g4_t_v90)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v91)) > _g4_s19 ? (88u + sizeof(_g4_t_v91)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 28u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 48u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 68u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 72u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 76u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 80u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 84u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 88u);

  v2 = a2 + 64;
  v75 = a1[2];
  v3 = &v76;
  v72 = a1[3];
  v73 = a1[4];
  v74 = a1[5];
  do
  {
    v4 = (a2[2] << 16) + (a2[1] << 8) + *a2;
    v5 = a2[3];
    a2 += 4;
    *v3++ = v4 + (v5 << 24);
  }
  while ( a2 != v2 );
  v6 = v72 + __builtin_rotateleft32((v72 & v73 | v74 & ~v72) + v75 + v76 - 680876936, 7);
  v7 = v6 + __builtin_rotateleft32((v6 & v72 | v73 & ~v6) + v74 + v77 - 389564586, 12);
  v8 = v7 + __builtin_rotateleft32((v6 & v7 | v72 & ~v7) + v73 + v78 + 606105819, 17);
  v9 = v8 + __builtin_rotateleft32(v72 + v79 - 1044525330 + (v7 & v8 | v6 & ~v8), 22);
  v10 = v9 + __builtin_rotateleft32(v6 + v80 - 176418897 + (v8 & v9 | v7 & ~v9), 7);
  v11 = v10 + __builtin_rotateleft32(v7 + v81 + 1200080426 + (v9 & v10 | v8 & ~v10), 12);
  v12 = v11 + __builtin_rotateleft32(v8 + v82 - 1473231341 + (v10 & v11 | v9 & ~v11), 17);
  v13 = v12 + __builtin_rotateleft32(v9 + v83 - 45705983 + (v11 & v12 | v10 & ~v12), 22);
  v14 = v13 + __builtin_rotateleft32(v10 + v84 + 1770035416 + (v12 & v13 | v11 & ~v13), 7);
  v15 = v14 + __builtin_rotateleft32(v11 + v85 - 1958414417 + (v13 & v14 | v12 & ~v14), 12);
  v16 = v15 + __builtin_rotateleft32(v12 + v86 - 42063 + (v14 & v15 | v13 & ~v15), 17);
  v17 = v16 + __builtin_rotateleft32(v13 + v87 - 1990404162 + (v15 & v16 | v14 & ~v16), 22);
  v18 = v17 + __builtin_rotateleft32(v14 + v88 + 1804603682 + (v16 & v17 | v15 & ~v17), 7);
  v19 = v18 + __builtin_rotateleft32(v15 + v89 - 40341101 + (v17 & v18 | v16 & ~v18), 12);
  v20 = v19 + __builtin_rotateleft32(v16 + v90 - 1502002290 + (v18 & v19 | v17 & ~v19), 17);
  v21 = v20 + __builtin_rotateleft32(v17 + v91 + 1236535329 + (v19 & v20 | v18 & ~v20), 22);
  v22 = v21 + __builtin_rotateleft32(v77 + v18 - 165796510 + (v20 & ~v19 | v19 & v21), 5);
  v23 = v22 + __builtin_rotateleft32(v82 + v19 - 1069501632 + (v21 & ~v20 | v20 & v22), 9);
  v24 = v23 + __builtin_rotateleft32(v87 + v20 + 643717713 + (v22 & ~v21 | v21 & v23), 14);
  v25 = v24 + __builtin_rotateleft32(v76 + v21 - 373897302 + (v23 & ~v22 | v22 & v24), 20);
  v26 = v25 + __builtin_rotateleft32(v81 + v22 - 701558691 + (v24 & ~v23 | v23 & v25), 5);
  v27 = v26 + __builtin_rotateleft32(v86 + v23 + 38016083 + (v25 & ~v24 | v24 & v26), 9);
  v28 = v27 + __builtin_rotateleft32(v91 + v24 - 660478335 + (v26 & ~v25 | v25 & v27), 14);
  v29 = v28 + __builtin_rotateleft32((v27 & ~v26 | v26 & v28) + v80 + v25 - 405537848, 20);
  v30 = v29 + __builtin_rotateleft32(v85 + v26 + 568446438 + (v28 & ~v27 | v27 & v29), 5);
  v31 = v30 + __builtin_rotateleft32(v90 + v27 - 1019803690 + (v29 & ~v28 | v28 & v30), 9);
  v32 = v31 + __builtin_rotateleft32((v30 & ~v29 | v29 & v31) + v79 + v28 - 187363961, 14);
  v33 = v32 + __builtin_rotateleft32(v84 + v29 + 1163531501 + (v31 & ~v30 | v30 & v32), 20);
  v34 = v33 + __builtin_rotateleft32(v89 + v30 - 1444681467 + (v32 & ~v31 | v31 & v33), 5);
  v35 = v34 + __builtin_rotateleft32((v33 & ~v32 | v32 & v34) + v78 + v31 - 51403784, 9);
  v36 = v35 + __builtin_rotateleft32(v83 + v32 + 1735328473 + (v34 & ~v33 | v33 & v35), 14);
  v37 = v36 + __builtin_rotateleft32(v88 + v33 - 1926607734 + (v35 & ~v34 | v34 & v36), 20);
  v38 = v37 + __builtin_rotateleft32(v81 + v34 - 378558 + (v37 ^ v35 ^ v36), 4);
  v39 = v38 + __builtin_rotateleft32(v84 + v35 - 2022574463 + (v38 ^ v36 ^ v37), 11);
  v40 = v39 + __builtin_rotateleft32(v87 + v36 + 1839030562 + (v39 ^ v37 ^ v38), 16);
  v41 = v40 + __builtin_rotateleft32(v90 + v37 - 35309556 + (v40 ^ v38 ^ v39), 23);
  v42 = v41 + __builtin_rotateleft32(v77 + v38 - 1530992060 + (v41 ^ v39 ^ v40), 4);
  v43 = v42 + __builtin_rotateleft32(v80 + v39 + 1272893353 + (v42 ^ v40 ^ v41), 11);
  v44 = v43 + __builtin_rotateleft32(v83 + v40 - 155497632 + (v43 ^ v41 ^ v42), 16);
  v45 = v44 + __builtin_rotateleft32(v86 + v41 - 1094730640 + (v44 ^ v42 ^ v43), 23);
  v46 = v45 + __builtin_rotateleft32((v45 ^ v43 ^ v44) + v89 + v42 + 681279174, 4);
  v47 = v46 + __builtin_rotateleft32((v46 ^ v44 ^ v45) + v76 + v43 - 358537222, 11);
  v48 = v47 + __builtin_rotateleft32(v79 + v44 - 722521979 + (v47 ^ v45 ^ v46), 16);
  v49 = v48 + __builtin_rotateleft32((v48 ^ v46 ^ v47) + v82 + v45 + 76029189, 23);
  v50 = v49 + __builtin_rotateleft32((v49 ^ v47 ^ v48) + v85 + v46 - 640364487, 4);
  v51 = v50 + __builtin_rotateleft32(v88 + v47 - 421815835 + (v50 ^ v48 ^ v49), 11);
  v52 = v51 + __builtin_rotateleft32((v51 ^ v49 ^ v50) + v91 + v48 + 530742520, 16);
  v53 = v52 + __builtin_rotateleft32((v52 ^ v50 ^ v51) + v78 + v49 - 995338651, 23);
  v54 = v53 + __builtin_rotateleft32(v76 + v50 - 198630844 + (v52 ^ (v53 | ~v51)), 6);
  v55 = v54 + __builtin_rotateleft32((v53 ^ (v54 | ~v52)) + v83 + v51 + 1126891415, 10);
  v56 = v55 + __builtin_rotateleft32((v54 ^ (v55 | ~v53)) + v90 + v52 - 1416354905, 15);
  v57 = v56 + __builtin_rotateleft32(v81 + v53 - 57434055 + (v55 ^ (v56 | ~v54)), 21);
  v58 = v57 + __builtin_rotateleft32((v56 ^ (v57 | ~v55)) + v88 + v54 + 1700485571, 6);
  v59 = v58 + __builtin_rotateleft32((v57 ^ (v58 | ~v56)) + v79 + v55 - 1894986606, 10);
  v60 = v59 + __builtin_rotateleft32(v86 + v56 - 1051523 + (v58 ^ (v59 | ~v57)), 15);
  v61 = v60 + __builtin_rotateleft32((v59 ^ (v60 | ~v58)) + v77 + v57 - 2054922799, 21);
  v62 = v61 + __builtin_rotateleft32((v60 ^ (v61 | ~v59)) + v84 + v58 + 1873313359, 6);
  v63 = v62 + __builtin_rotateleft32(v91 + v59 - 30611744 + (v61 ^ (v62 | ~v60)), 10);
  v64 = v63 + __builtin_rotateleft32((v62 ^ (v63 | ~v61)) + v82 + v60 - 1560198380, 15);
  v65 = v64 + __builtin_rotateleft32((v63 ^ (v64 | ~v62)) + v89 + v61 + 1309151649, 21);
  v66 = v65 + __builtin_rotateleft32(v80 + v62 - 145523070 + (v64 ^ (v65 | ~v63)), 6);
  v67 = v66 + __builtin_rotateleft32((v65 ^ (v66 | ~v64)) + v87 + v63 - 1120210379, 10);
  v68 = v78 + v64 + 718787259 + (v66 ^ (v67 | ~v65));
  a1[2] = v66 + v75;
  v69 = v67 + __builtin_rotateleft32(v68, 15);
  result = v69 + v72 + __builtin_rotateleft32(v85 + v65 - 343485551 + (v67 ^ (v69 | ~v66)), 21);
  a1[3] = result;
  a1[4] = v73 + v69;
  a1[5] = v74 + v67;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13E5CB0  (binary VA: 0x13e5cb0)
// Original: sub_13E5CB0
// ----------------------------------------------------------------------------
pthread_t sub_13E5CB0()
{
  return pthread_self();
}

// ----------------------------------------------------------------------------
// Function: sub_13E5CD0  (binary VA: 0x13e5cd0)
// Original: sub_13E5CD0
// ----------------------------------------------------------------------------
int sub_13E5CD0(char a1, int a2)
{
  glwebtools::Mutex::Self *v3;

  v3 = *(glwebtools::Mutex::Self **)(*(uint32_t *)dword_2119774 + 4 * a2);
  if ( (a1 & 1) != 0 )
    return glwebtools::Mutex::Lock(v3);
  else
    return glwebtools::Mutex::Unlock(v3);
}

// ----------------------------------------------------------------------------
// Function: sub_13E5D20  (binary VA: 0x13e5d20)
// Original: sub_13E5D20
// ----------------------------------------------------------------------------
int sub_13E5D20(int *a1)
{
  bool v2;
  int result;
  int v4;
  int v5;
  unsigned int v6;
  void (***v7)(uint32_t);

  v2 = CRYPTO_get_locking_callback() == 0;
  result = *a1;
  if ( !v2 && (unsigned int)(a1[1] - result) >> 2 != 0 )
  {
    CRYPTO_set_id_callback(0);
    CRYPTO_set_locking_callback(0);
    v4 = a1[1];
    v5 = *a1;
    result = *a1;
    if ( (unsigned int)(v4 - *a1) >> 2 != 0 )
    {
      v6 = 0;
      do
      {
        v7 = *(void (****)(uint32_t))(v5 + 4 * v6);
        if ( v7 != nullptr )
        {
          (**v7)((uint32_t)(uintptr_t)(v7));
          sub_4EBEE0(*(uint32_t *)(*a1 + 4 * v6));
          v5 = *a1;
          v4 = a1[1];
        }
        ++v6;
      }
      while ( v6 < (v4 - v5) >> 2 );
      result = v5;
    }
    a1[1] = v5;
  }
  if ( result != 0 )
    return sub_4EBEE0(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13E62B0  (binary VA: 0x13e62b0)
// Original: sub_13E62B0
// ----------------------------------------------------------------------------
int sub_13E62B0()
{
  dword_2119770 = 0;
  dword_211976C = (int)((uint32_t)(uintptr_t)&off_2094CE0);
  return __cxa_atexit((void (*)(void *))glwebtools::Atomic_int_id_7c2220::Destroy, &dword_211976C, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::opShr_63f692  (binary VA: 0x13e8140)
// Original: glwebtools::operator>><std::string>
// ----------------------------------------------------------------------------
int glwebtools::opShr_63f692(glwebtools::Json::Value::Self *a1, int a2)
{
  int v2;
  const glwebtools::Json::Value::Self *v3;
  void *v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  g4_std::string::construct_copy(&v6, a2);
  v7 = *(uint32_t *)(a2 + 4);
  v2 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a1) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a1) != 0 )
  {
    LOWORD(v2) = 2;
    if ( (uint8_t)glwebtools::Json::Value::isMember(a1, (int)(uintptr_t)(&v6)) != 0 )
    {
      v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a1, (int)(uintptr_t)(&v6));
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v8, v3);
      v2 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v8, v7);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v8);
    }
  }
  v4 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::op_std_string_const  (binary VA: 0x13e8230)
// Original: glwebtools::operator<<<std::string const>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::op_std_string_const(glwebtools::JsonWriter::Self *a1, int a2)
{
  int v2;
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = *(uint32_t *)(a2 + 4);
  v10[1] = v2;
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
  {
    glwebtools::Json::Value::Construct(v11, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v12, v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, (int)(uintptr_t)(v10));
    glwebtools::Json::Value::opAssign(v9, v7);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_13E8370  (binary VA: 0x13e8370)
// Original: sub_13E8370
// ----------------------------------------------------------------------------
int sub_13E8370()
{
  sub_1900D70(&unk_21197B4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21197B4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::internal::SHA256_Init  (binary VA: 0x13e83c0)
// Original: glwebtools::internal::SHA256_Init
// ----------------------------------------------------------------------------
int glwebtools::internal::SHA256_Init(int a1)
{
  uint16_t *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  if ( a1 != 0 )
  {
    v1 = (uint16_t *)(a1 + 40);
    *(uint32_t *)a1 = 1779033703;
    *(uint32_t *)(a1 + 4) = -1150833019;
    *(uint32_t *)(a1 + 8) = 1013904242;
    *(uint32_t *)(a1 + 12) = -1521486534;
    *(uint32_t *)(a1 + 16) = 1359893119;
    *(uint32_t *)(a1 + 20) = -1694144372;
    *(uint32_t *)(a1 + 24) = 528734635;
    v2 = 64;
    *(uint32_t *)(a1 + 28) = 1541459225;
    if ( ((a1 + 40) & 1) != 0 )
    {
      *(uint8_t *)(a1 + 40) = 0;
      v1 = (uint16_t *)(a1 + 41);
      LOWORD(v2) = 63;
    }
    if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
    {
      *v1 = 0;
      v2 -= 2;
      ++v1;
    }
    result = 0;
    memset(v1, 0, 4 * (v2 >> 2));
    v4 = &v1[2 * (v2 >> 2)];
    if ( (v2 & 2) != 0 )
    {
      *v4++ = 0;
      if ( (v2 & 1) == 0 )
        goto LABEL_8;
    }
    else if ( (v2 & 1) == 0 )
    {
LABEL_8:
      *(uint32_t *)(a1 + 32) = 0;
      *(uint32_t *)(a1 + 36) = 0;
      return result;
    }
    *(uint8_t *)v4 = 0;
    goto LABEL_8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::internal::SHA256_Transform  (binary VA: 0x13e84c0)
// Original: glwebtools::internal::SHA256_Transform
// ----------------------------------------------------------------------------
int * glwebtools::internal::SHA256_Transform(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  int v33;

  v29 = (uint32_t *)(a1 + 10);
  v26 = a1[1];
  v33 = a1[2];
  v2 = *a1;
  v3 = a1[4];
  v23 = a1[3];
  v30 = a1[5];
  v4 = a1[7];
  v24 = a1[6];
  v5 = 0;
  while ( 1 )
  {
    v8 = __builtin_bswap32(*(uint32_t *)(a2 + v5 * 4));
    v9 = dword_1D0FA00[v5] + v8 + v4;
    v29[v5++] = v8;
    v31 = (__builtin_rotateleft32(v3, 7) ^ __builtin_rotateleft32(v3, 26) ^ __builtin_rotateleft32(v3, 21))
        + v9
        + (v3 & v30 ^ v24 & ~v3);
    v10 = v31
        + (__builtin_rotateleft32(v2, 10) ^ __builtin_rotateleft32(v2, 30) ^ __builtin_rotateleft32(v2, 19))
        + (v26 & v33 ^ v2 & (v33 ^ v26));
    v11 = v23 + v31;
    v27 = v10;
    if ( v5 == 16 )
      break;
    v6 = v30;
    v4 = v24;
    v30 = v3;
    v24 = v6;
    v3 = v23 + v31;
    v7 = v26;
    v26 = v2;
    v23 = v33;
    v33 = v7;
    v2 = v27;
  }
  v32 = v3;
  v28 = v2;
  v12 = 16;
  while ( 1 )
  {
    v14 = v29[++v12 & 0xF];
    v15 = v14 >> 3;
    v22 = __builtin_rotateleft32(v14, 25) ^ __builtin_rotateleft32(v14, 14);
    v16 = v29[((uint8_t)v12 + 13) & 0xF];
    v17 = dword_1D0F9FC[v12]
        + v24
        + (v11 & v32 ^ v30 & ~v11)
        + (__builtin_rotateleft32(v11, 7) ^ __builtin_rotateleft32(v11, 26) ^ __builtin_rotateleft32(v11, 21));
    v18 = ((v16 >> 10) ^ __builtin_rotateleft32(v16, 15) ^ __builtin_rotateleft32(v16, 13))
        + *(uint32_t *)((char *)v29 + ((4 * (uint8_t)v12 + 60) & 0x3C))
        + v29[((uint8_t)v12 + 8) & 0xF]
        + (v15 ^ v22);
    *(uint32_t *)((char *)v29 + ((4 * (uint8_t)v12 + 60) & 0x3C)) = v18;
    v25 = v17 + v18;
    v19 = (v28 & v26 ^ v10 & (v26 ^ v28))
        + (__builtin_rotateleft32(v10, 10) ^ __builtin_rotateleft32(v10, 30) ^ __builtin_rotateleft32(v10, 19))
        + v17
        + v18;
    v20 = v33 + v25;
    if ( v12 == 64 )
      break;
    v24 = v30;
    v30 = v32;
    v32 = v11;
    v13 = v28;
    v11 = v20;
    v28 = v10;
    v33 = v26;
    v26 = v13;
    v10 = v19;
  }
  *a1 += v19;
  a1[1] += v10;
  a1[5] += v11;
  a1[3] += v26;
  a1[4] += v20;
  a1[6] += v32;
  a1[2] += v28;
  a1[7] += v30;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::internal::SHA256_Update  (binary VA: 0x13e8750)
// Original: glwebtools::internal::SHA256_Update
// ----------------------------------------------------------------------------
void glwebtools::internal::SHA256_Update(int a1, char *src, size_t a3)
{
  size_t v3;
  char *v4;
  int v5;
  size_t n;
  void *dest;
  size_t v8;
  char *v9;
  size_t v10;
  size_t v11;
  size_t v12;
  char *v13;

  v3 = a3;
  v4 = src;
  if ( a3 != 0 )
  {
    if ( src == nullptr || a1 == 0 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/glwebtools_sha256.cpp",
        450,
        "void glwebtools::internal::SHA256_Update(glwebtools::internal::SHA256_CTX*, const sha2_byte*, size_t)",
        "context != (SHA256_CTX*)0 && data != (sha2_byte*)0");
    v5 = (*(uint64_t *)(a1 + 32) >> 3) & 0x3F;
    if ( ((*(uint64_t *)(a1 + 32) >> 3) & 0x3F) != 0 )
    {
      n = 64 - v5;
      dest = (void *)(a1 + v5 + 40);
      if ( a3 < n )
      {
        memcpy(dest, src, a3);
        *(uint64_t *)(a1 + 32) += 8 * a3;
        return;
      }
      v12 = n;
      memcpy(dest, src, n);
      *(uint64_t *)(a1 + 32) += 8 * v12;
      v3 = a3 - v12;
      v4 = &src[v12];
      glwebtools::internal::SHA256_Transform((int *)(uintptr_t)(a1), a1 + 40);
    }
    v8 = v3;
    v9 = v4;
    if ( v3 > 0x3F )
    {
      do
      {
        v13 = v9;
        v10 = v8;
        glwebtools::internal::SHA256_Transform((int *)(uintptr_t)(a1), (int)(uintptr_t)(v9));
        *(uint64_t *)(a1 + 32) += 512LL;
        v8 = v10 - 64;
        v9 = v13 + 64;
      }
      while ( v10 - 64 > 0x3F );
      v8 = v3 & 0x3F;
      v4 += ((v3 - 64) & 0xFFFFFFC0) + 64;
    }
    if ( v8 != 0 )
    {
      v11 = v8;
      memcpy((void *)(a1 + 40), v4, v8);
      *(uint64_t *)(a1 + 32) += 8 * v11;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::internal::SHA256_Final  (binary VA: 0x13e88e0)
// Original: glwebtools::internal::SHA256_Final
// ----------------------------------------------------------------------------
int glwebtools::internal::SHA256_Final(int a1, int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int v5;
  uint16_t *v6;
  uint16_t *v7;
  int v8;
  int i;
  uint32_t v10;
  uint16_t *v11;
  unsigned int v12;
  int result;
  uint16_t *v14;
  unsigned int v15;
  uint16_t *v16;
  uint16_t *v17;
  int v18;

  if ( a2 == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/glwebtools_sha256.cpp",
      494,
      "void glwebtools::internal::SHA256_Final(glwebtools::internal::sha2_byte*, glwebtools::internal::SHA256_CTX*)",
      "context != (SHA256_CTX*)0");
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a2 + 36);
    v18 = *(uint64_t *)(a2 + 32) >> 3;
    *(uint32_t *)(a2 + 36) = __builtin_bswap32(*(uint32_t *)(a2 + 32));
    *(uint32_t *)(a2 + 32) = __builtin_bswap32(v2);
    v3 = v18 & 0x3F;
    if ( (v18 & 0x3F) != 0 )
    {
      *(uint8_t *)(a2 + v3 + 40) = 0x80;
      if ( (unsigned int)(v3 + 1) <= 0x38 )
      {
        memset((void *)(a2 + v3 + 41), 0, 55 - v3);
        v4 = a2 + 40;
      }
      else
      {
        if ( v3 != 63 )
          memset((void *)(a2 + v3 + 41), 0, 63 - v3);
        glwebtools::internal::SHA256_Transform((int *)(uintptr_t)(a2), a2 + 40);
        v4 = a2 + 40;
        v5 = 56;
        v6 = (uint16_t *)(a2 + 40);
        if ( (((uint8_t)a2 + 40) & 1) != 0 )
        {
          *(uint8_t *)(a2 + 40) = 0;
          v6 = (uint16_t *)(a2 + 41);
          LOWORD(v5) = 55;
        }
        if ( ((uint8_t)(uintptr_t)(v6) & 2) != 0 )
        {
          *v6 = 0;
          v5 -= 2;
          ++v6;
        }
        memset(v6, 0, 4 * (v5 >> 2));
        v7 = &v6[2 * (v5 >> 2)];
        if ( (v5 & 2) != 0 )
          *v7++ = 0;
        if ( (v5 & 1) != 0 )
          *(uint8_t *)v7 = 0;
      }
      goto LABEL_16;
    }
    v4 = a2 + 40;
    v15 = 56;
    v16 = (uint16_t *)(a2 + 40);
    if ( (((uint8_t)a2 + 40) & 1) != 0 )
    {
      *(uint8_t *)(a2 + 40) = 0;
      v16 = (uint16_t *)(a2 + 41);
      LOWORD(v15) = 55;
    }
    if ( ((uint8_t)(uintptr_t)(v16) & 2) != 0 )
    {
      *v16 = 0;
      v15 -= 2;
      ++v16;
    }
    memset(v16, 0, 4 * (v15 >> 2));
    v17 = &v16[2 * (v15 >> 2)];
    if ( (v15 & 2) != 0 )
    {
      *v17++ = 0;
      if ( (v15 & 1) == 0 )
        goto LABEL_31;
    }
    else if ( (v15 & 1) == 0 )
    {
LABEL_31:
      *(uint8_t *)(a2 + 40) = 0x80;
      goto LABEL_16;
    }
    *(uint8_t *)v17 = 0;
    *(uint8_t *)(a2 + 40) = 0x80;
LABEL_16:
    v8 = *(uint32_t *)(a2 + 32);
    *(uint32_t *)(a2 + 100) = *(uint32_t *)(a2 + 36);
    *(uint32_t *)(a2 + 96) = v8;
    glwebtools::internal::SHA256_Transform((int *)(uintptr_t)(a2), v4);
    for ( i = 0; i != 8; ++i )
    {
      v10 = __builtin_bswap32(*(uint32_t *)(a2 + 4 * i));
      *(uint32_t *)(a2 + 4 * i) = v10;
      *(uint32_t *)(a1 + 4 * i) = v10;
    }
  }
  v11 = (uint16_t *)a2;
  v12 = 104;
  if ( (a2 & 1) != 0 )
  {
    v11 = (uint16_t *)(a2 + 1);
    *(uint8_t *)a2 = 0;
    LOBYTE(v12) = 103;
    if ( ((a2 + 1) & 2) == 0 )
      goto LABEL_20;
  }
  else if ( (a2 & 2) == 0 )
  {
    goto LABEL_20;
  }
  *v11 = 0;
  v12 -= 2;
  ++v11;
LABEL_20:
  result = 0;
  memset(v11, 0, 4 * (v12 >> 2));
  v14 = &v11[2 * (v12 >> 2)];
  if ( (v12 & 2) != 0 )
    *v14++ = 0;
  if ( (v12 & 1) != 0 )
    *(uint8_t *)v14 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::internal::SHA256_End  (binary VA: 0x13e8b70)
// Original: glwebtools::internal::SHA256_End
// ----------------------------------------------------------------------------
int glwebtools::internal::SHA256_End(int a1, int a2)
{
  uint16_t *v2;
  int i;
  char v4;
  int v5;
  unsigned int v7;
  uint16_t *v8;
  uint8_t v9[60];

  v2 = (uint16_t *)a1;
  if ( a1 == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/glwebtools_sha256.cpp",
      557,
      "char* glwebtools::internal::SHA256_End(glwebtools::internal::SHA256_CTX*, char*)",
      "context != (SHA256_CTX*)0");
  if ( a2 != 0 )
  {
    glwebtools::internal::SHA256_Final((int)(uintptr_t)(v9), a1);
    for ( i = 0; i != 32; ++i )
    {
      v4 = a0123456789abcd_0 /* "0123456789abcdef" */[v9[i] & 0xF];
      *(uint8_t *)(a2 + 2 * i) = a0123456789abcd_0 /* "0123456789abcdef" */[v9[i] >> 4];
      *(uint8_t *)(a2 + 2 * i + 1) = v4;
    }
    v5 = a2 + 64;
    *(uint8_t *)(a2 + 64) = 0;
  }
  else
  {
    v7 = 104;
    if ( (a1 & 1) != 0 )
    {
      *(uint8_t *)a1 = 0;
      LOBYTE(v7) = 103;
      v2 = (uint16_t *)(a1 + 1);
    }
    if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
    {
      *v2 = 0;
      v7 -= 2;
      ++v2;
    }
    memset(v2, 0, 4 * (v7 >> 2));
    v8 = &v2[2 * (v7 >> 2)];
    if ( (v7 & 2) != 0 )
      *v8++ = 0;
    if ( (v7 & 1) != 0 )
      *(uint8_t *)v8 = 0;
    v5 = 0;
  }
  memset(v9, 0, 0x20u);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::internal::SHA256_Data  (binary VA: 0x13e8c80)
// Original: glwebtools::internal::SHA256_Data
// ----------------------------------------------------------------------------
int glwebtools::internal::SHA256_Data(glwebtools::internal::Self *self, size_t a2, unsigned int a3)
{
  int v4[27];

  glwebtools::internal::SHA256_Init((int)(uintptr_t)(v4));
  glwebtools::internal::SHA256_Update((int)(uintptr_t)(v4), (char *)self, a2);
  return glwebtools::internal::SHA256_End((int)(uintptr_t)(v4), a3);
}

// ----------------------------------------------------------------------------
// Function: sub_13EAE30  (binary VA: 0x13eae30)
// Original: sub_13EAE30
// ----------------------------------------------------------------------------
int sub_13EAE30(uint16_t *a1)
{
  typedef char _g4_t_nptr[2];
  typedef char _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_nptr)) > _g4_s0 ? (12u + sizeof(_g4_t_nptr)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v3)) > _g4_s1 ? (14u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 14u);

  v3 = 0;
  *(uint16_t *)nptr = *a1;
  return atoi(nptr);
}

// ----------------------------------------------------------------------------
// Function: sub_13EAE60  (binary VA: 0x13eae60)
// Original: sub_13EAE60
// ----------------------------------------------------------------------------
int sub_13EAE60(int a1, uint32_t *a2)
{
  int v2;
  char s2[32];

  v2 = 0;
  *(uint32_t *)s2 = 0;
  *(uint16_t *)s2 = *(uint16_t *)a1;
  s2[2] = *(uint8_t *)(a1 + 2);
  while ( strcmp((const char *)&off_1D0FC60 + 4 * v2, s2) != 0 )
  {
    if ( ++v2 == 12 )
      return -2147483646;
  }
  *a2 = v2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::op_char_const_const  (binary VA: 0x13f17e0)
// Original: glwebtools::operator<<<char const* const>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::op_char_const_const(glwebtools::JsonWriter::Self *a1, int a2)
{
  char **v2;
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = *(char ***)(a2 + 4);
  v10[1] = (int)(uintptr_t)(v2);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
  {
    glwebtools::Json::Value::Construct(v11, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
  v3 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v12, *v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, (int)(uintptr_t)(v10));
    glwebtools::Json::Value::opAssign(v9, v7);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::op_char_const_5  (binary VA: 0x13f1920)
// Original: glwebtools::operator<<<char const[5]>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::op_char_const_5(glwebtools::JsonWriter::Self *a1, int a2)
{
  char *v2;
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = *(char **)(a2 + 4);
  v10[1] = (int)(uintptr_t)(v2);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
  {
    glwebtools::Json::Value::Construct(v11, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
  v3 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v12, v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, (int)(uintptr_t)(v10));
    glwebtools::Json::Value::opAssign(v9, v7);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::op_char_const_6  (binary VA: 0x13f1a60)
// Original: glwebtools::operator<<<char const[6]>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::op_char_const_6(glwebtools::JsonWriter::Self *a1, int a2)
{
  char *v2;
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = *(char **)(a2 + 4);
  v10[1] = (int)(uintptr_t)(v2);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
  {
    glwebtools::Json::Value::Construct(v11, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
  v3 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v12, v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, (int)(uintptr_t)(v10));
    glwebtools::Json::Value::opAssign(v9, v7);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::op_int_const  (binary VA: 0x13f1ba0)
// Original: glwebtools::operator<<<int const>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::op_int_const(glwebtools::JsonWriter::Self *a1, int a2)
{
  int *v2;
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = *(int **)(a2 + 4);
  v10[1] = (int)(uintptr_t)(v2);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
  {
    glwebtools::Json::Value::Construct(v11, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v12, *v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, (int)(uintptr_t)(v10));
    glwebtools::Json::Value::opAssign(v9, v7);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::op_double_const  (binary VA: 0x13f1ce0)
// Original: glwebtools::operator<<<double const>
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::op_double_const(glwebtools::JsonWriter::Self *a1, int a2)
{
  double *v2;
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  g4_std::string::construct_copy(v10, a2);
  v2 = *(double **)(a2 + 4);
  v10[1] = (int)(uintptr_t)(v2);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
  {
    glwebtools::Json::Value::Construct(v11, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
  v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v12, *v2);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
    v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, (int)(uintptr_t)(v10));
    glwebtools::Json::Value::opAssign(v9, v7);
    v3 = nullptr;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  v4 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_957cd7::M_erase  (binary VA: 0x13f1e20)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_957cd7::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_string_pair_string_const_957cd7::M_erase(
        a1,
        v2[3]);
      v3 = v2[5];
      v4 = (uint32_t *)v2[2];
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v5 = v2[4];
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)(v2));
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13F1ED0  (binary VA: 0x13f1ed0)
// Original: sub_13F1ED0
// ----------------------------------------------------------------------------
int sub_13F1ED0()
{
  sub_1900D70(&unk_21197C8);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21197C8, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert  (binary VA: 0x13f55a0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(int *a1, int a2, int a3, int a4, const char **a5)
{
  unsigned int v5;
  int v6;
  int v8;
  int v9;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v5 = (unsigned int)strcasecmp(*a5, *(const char **)(a4 + 16)) >> 31;
  v6 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v6 != -16 )
  {
    v8 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    g4_std::string::construct_copy(v8 + 20, a5 + 1);
    v6 = v8;
  }
  v9 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert_unique  (binary VA: 0x13f56c0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert_unique(int a1, int a2, const char **a3)
{
  uint32_t *v3;
  const char *s1;
  uint32_t *v5;
  char v6;
  const char *s2;
  uint32_t *v8;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 != nullptr )
  {
    s1 = *a3;
    while ( 1 )
    {
      s2 = (const char *)v3[4];
      if ( strcasecmp(s1, s2) < 0 )
      {
        v5 = (uint32_t *)v3[2];
        v6 = 1;
        if ( v5 == nullptr )
          goto LABEL_7;
      }
      else
      {
        v5 = (uint32_t *)v3[3];
        v6 = 0;
        if ( v5 == nullptr )
        {
LABEL_7:
          v8 = v3;
          if ( v6 == 0 )
            goto LABEL_8;
          goto LABEL_11;
        }
      }
      v3 = v5;
    }
  }
  v3 = (uint32_t *)(a2 + 4);
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v8 = (uint32_t *)sub_19048F0(v3);
  s2 = (const char *)v8[4];
  s1 = *a3;
LABEL_8:
  v10 = v8;
  if ( strcasecmp(s2, s1) < 0 )
  {
LABEL_13:
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
      v11,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    *(uint32_t *)a1 = v11[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v10);
    *(uint8_t *)(a1 + 4) = 0;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert_unique  (binary VA: 0x13f57c0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,glwebtools::StringLowerCaseCompare<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert_unique(int *a1, int *a2, int a3, const char **a4)
{
  int v4;
  int v5;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef char *_g4_t_s1;
  typedef int _g4_t_v11[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v9)) > _g4_s2 ? (0u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_s1)) > _g4_s3 ? (4u + sizeof(_g4_t_s1)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);

  v4 = a3;
  if ( (int *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 || (v4 = a2[4], strcasecmp(*(const char **)(v4 + 16), *a4) >= 0) )
    {
LABEL_15:
      g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert_unique(
        (int)(uintptr_t)(v11),
        (int)(uintptr_t)(a2),
        a4);
      *a1 = v11[0];
      return a1;
    }
LABEL_17:
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      v4,
      a4);
    return a1;
  }
  s2 = *(char **)(a3 + 16);
  s1 = (char *)*a4;
  if ( strcasecmp(*a4, s2) >= 0 )
  {
    if ( strcasecmp(s2, s1) >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a2[4] == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a2[4],
        a4);
      return a1;
    }
    v9 = (char *)sub_19048E0(a3);
    if ( strcasecmp(s1, *((const char **)v9 + 4)) >= 0 )
      goto LABEL_15;
    if ( *(uint32_t *)(a3 + 12) != 0 )
    {
      g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        (int)(uintptr_t)(v9),
        (int)(uintptr_t)(v9),
        a4);
      return a1;
    }
    goto LABEL_17;
  }
  v5 = a2[3];
  if ( v5 == a3 )
  {
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v5,
      a2[3],
      a4);
    return a1;
  }
  v8 = (char *)sub_1904940(a3);
  if ( strcasecmp(*((const char **)v8 + 4), s1) >= 0 )
    goto LABEL_15;
  if ( *((uint32_t *)v8 + 3) != 0 )
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      a3,
      a3,
      a4);
  else
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      (int)(uintptr_t)(v8),
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13F5A90  (binary VA: 0x13f5a90)
// Original: sub_13F5A90
// ----------------------------------------------------------------------------
int ** sub_13F5A90()
{
  if ( byte_21197E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_21197E0) != 0 )
  {
    dword_21197E8 = (int)((uint32_t)(uintptr_t)&off_2094E68);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_21197E0);
    __cxa_atexit(
      (void (*)(void *))glwebtools::Json::DefaultValueAllocator::Destroy,
      &dword_21197E8,
      &unk_20D1280);
  }
  return (int **)(&off_20C689C);
}

// ----------------------------------------------------------------------------
// Function: sub_13F5B20  (binary VA: 0x13f5b20)
// Original: sub_13F5B20
// ----------------------------------------------------------------------------
uint32_t * sub_13F5B20(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *result;
  int v6;

  v3 = *(uint32_t **)a1;
  v4 = *(uint32_t **)(a1 + 8);
  v6 = *(uint32_t *)(a1 + 12);
  result = a3 + 3;
  while ( a2 != v3 )
  {
    if ( v3 != nullptr )
    {
      *v3 = *a3;
      v3[1] = a3[1];
      v3[2] = a3[2];
      g4_std::string::construct_copy(v3 + 3, a3 + 3);
      result = (uint32_t *)a3[4];
      v3[4] = (uint32_t)(uintptr_t)(result);
    }
    v3 += 5;
    if ( v4 == v3 )
    {
      v3 = *(uint32_t **)(v6 + 4);
      result = (uint32_t *)(v6 + 4);
      v6 += 4;
      v4 = v3 + 125;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase  (binary VA: 0x1400a20)
// Original: std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase(
        a1,
        v2[3]);
      v3 = (void **)v2[2];
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)(v2 + 6));
      glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)(v2 + 4));
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: std::op_glwebtools_Json_Value_CZString_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value_std_Select1st_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value_std_less_glwebtools_Json_Value_CZString_std_allocator_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value  (binary VA: 0x1400a90)
// Original: `std::operator<<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>`
// ----------------------------------------------------------------------------
char std::op_glwebtools_Json_Value_CZString_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value_std_Select1st_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value_std_less_glwebtools_Json_Value_CZString_std_allocator_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value(const std::_Rb_tree<glwebtools::Json::Value::CZString::Self, std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>, std::_Select1st<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>, std::less<glwebtools::Json::Value::CZString::Self>, std::allocator<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>> *a1, const std::_Rb_tree<glwebtools::Json::Value::CZString::Self, std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>, std::_Select1st<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>, std::less<glwebtools::Json::Value::CZString::Self>, std::allocator<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>> *a2)
{
  int v2;
  const char **v3;
  const char **v5;
  char *v6;

  v2 = *((uint32_t *)a2 + 3);
  v6 = (char *)a2 + 4;
  v5 = *((const char ***)a1 + 3);
  if ( v5 == (const char **)((char *)a1 + 4) )
    return v6 != (char *)v2;
  if ( (char *)v2 == v6 )
    return 0;
  while ( 1 )
  {
    v3 = v5 + 4;
    if ( glwebtools::Json::Value::CZString::opLt(v5 + 4, (const char **)(v2 + 16)) != 0
      || glwebtools::Json::Value::CZString::opLt((const char **)(v2 + 16), v3) == 0
      && glwebtools::Json::Value::opLt((glwebtools::Json::Value::Self *)(v5 + 6), (const char **)(v2 + 24)) != 0 )
    {
      return 1;
    }
    if ( glwebtools::Json::Value::CZString::opLt((const char **)(v2 + 16), v3) != 0 )
      return 0;
    if ( glwebtools::Json::Value::CZString::opLt(v3, (const char **)(v2 + 16)) == 0
      && glwebtools::Json::Value::opLt((glwebtools::Json::Value::Self *)(v2 + 24), v5 + 6) != 0 )
    {
      break;
    }
    v5 = (const char **)sub_19048E0(v5);
    v2 = sub_19048E0(v2);
    if ( (const char **)((char *)a1 + 4) == v5 )
      return v6 != (char *)v2;
    if ( v6 == (char *)v2 )
      return 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux  (binary VA: 0x1400be0)
// Original: std::vector<glwebtools::Json::PathArgument const*>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux(int a1, char *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  char *dest;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  int v23;
  char *v24;
  int v25;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a3;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *(uint32_t *)src = v6;
    return;
  }
  v7 = *(uint8_t **)a1;
  v8 = ((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2;
  if ( v8 != 0 )
  {
    v9 = 2 * v8;
    if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
    {
      v25 = -4;
      v10 = (src - (char *)(v7)) >> 2;
    }
    else
    {
      v25 = 8 * v8;
      v19 = src - (char *)(v7);
      dest = nullptr;
      v10 = v19 >> 2;
      if ( v9 == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v25 = 4;
    v10 = (src - (char *)(v7)) >> 2;
  }
  v23 = v10;
  dest = (char *)opNew(v25);
  v10 = v23;
LABEL_11:
  v12 = &dest[4 * v10];
  if ( v12 != nullptr )
    *(uint32_t *)v12 = *a3;
  v13 = 0;
  v14 = (int)(uintptr_t)(&src[-*(uint32_t *)a1]) >> 2;
  if ( v14 != 0 )
  {
    v13 = 4 * v14;
    v21 = dest;
    memmove(dest, *(const void **)a1, 4 * v14);
    dest = v21;
  }
  v15 = &dest[v13 + 4];
  v16 = 0;
  v17 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
  if ( v17 != 0 )
  {
    v16 = 4 * v17;
    v22 = dest;
    v24 = v15;
    memmove(v15, src, 4 * v17);
    v15 = v24;
    dest = v22;
  }
  v18 = &v15[v16];
  if ( *(uint32_t *)a1 != 0 )
  {
    v20 = dest;
    opDelete(*(void **)a1);
    dest = v20;
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v18);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v25]);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_glwebtools_Json_PathArgu_3ae128::M_insert_aux  (binary VA: 0x1400da0)
// Original: std::vector<glwebtools::Json::PathArgument>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_glwebtools_Json_PathArgu_3ae128::M_insert_aux(int *a1, uint32_t *a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int v12;
  int result;
  void *v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
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
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v33)) > _g4_s4 ? (16u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v34)) > _g4_s5 ? (20u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v35)) > _g4_s6 ? (20u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v36)) > _g4_s7 ? (24u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v37)) > _g4_s8 ? (36u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v38)) > _g4_s9 ? (40u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v39)) > _g4_s10 ? (44u + sizeof(_g4_t_v39)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);

  v3 = a1;
  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    v5 = 0;
    if ( v4 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v4 - 12);
      *(uint32_t *)(v4 + 4) = *(uint32_t *)(v4 - 8);
      *(uint32_t *)(v4 + 8) = *(uint32_t *)(v4 - 4);
      v5 = a1[1];
    }
    a1[1] = v5 + 12;
    g4_std::string::construct_copy(&v37, a3);
    v6 = a1[1];
    v38 = *(uint32_t *)(a3 + 4);
    v39 = *(uint32_t *)(a3 + 8);
    v7 = v6 - 24;
    v32 = v6;
    v8 = -1431655765 * ((v6 - 24 - (int)(uintptr_t)(a2)) >> 2);
    if ( v8 > 0 )
    {
      v9 = v6 - 36;
      for ( i = v6 - 12; ; i = v11 )
      {
        v11 = i - 12;
        v29 = v9;
        g4_std::string::assign_str(i - 12, i - 24);
        v9 = v29;
        v12 = v11 - v32;
        --v8;
        *(uint32_t *)(v12 + v7 + 28) = *(uint32_t *)(v11 - v32 + v29 + 28);
        *(uint32_t *)(v12 + v7 + 32) = *(uint32_t *)(v11 - v32 + v29 + 32);
        if ( v8 == 0 )
          break;
      }
    }
    g4_std::string::assign_str(a2, &v37);
    a2[1] = v38;
    a2[2] = v39;
    result = v37;
    v14 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v14)), (int)0);
    }
    return result;
  }
  v15 = *a1;
  v16 = -1431655765 * ((v4 - *a1) >> 2);
  if ( v16 != 0 )
  {
    v17 = 2 * v16;
    if ( v16 > 2 * v16 || v17 > 0x15555555 )
    {
      v36 = -4;
      v18 = -1431655765 * (((int)(uintptr_t)(a2) - v15) >> 2);
    }
    else
    {
      v36 = 24 * v16;
      v18 = -1431655765 * (((int)(uintptr_t)(a2) - v15) >> 2);
      if ( v17 == 0 )
      {
        v19 = 12;
        v33 = 0;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v36 = 12;
    v18 = -1431655765 * (((int)(uintptr_t)(a2) - v15) >> 2);
  }
  v30 = v18;
  v33 = opNew(v36);
  v19 = v33 + 12;
  v18 = v30;
LABEL_14:
  v20 = v33 + 12 * v18;
  if ( v20 != 0 )
  {
    v31 = v33 + 12 * v18;
    g4_std::string::construct_copy(v20, a3);
    *(uint32_t *)(v31 + 4) = *(uint32_t *)(a3 + 4);
    *(uint32_t *)(v31 + 8) = *(uint32_t *)(a3 + 8);
  }
  v21 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 != a2 )
  {
    v22 = v33;
    do
    {
      if ( v22 != 0 )
      {
        g4_std::string::construct_copy(v22, v21);
        *(uint32_t *)(v22 + 4) = v21[1];
        *(uint32_t *)(v22 + 8) = v21[2];
      }
      v21 += 3;
      v22 += 12;
    }
    while ( v21 != a2 );
    v3 = a1;
    v19 = v22 + 12;
  }
  v23 = (uint32_t *)v3[1];
  if ( v23 != a2 )
  {
    v34 = v3;
    v24 = a2;
    v25 = v3[1];
    do
    {
      if ( v19 != 0 )
      {
        g4_std::string::construct_copy(v19, v24);
        *(uint32_t *)(v19 + 4) = v24[1];
        *(uint32_t *)(v19 + 8) = v24[2];
      }
      v24 += 3;
      v19 += 12;
    }
    while ( (uint32_t *)v25 != v24 );
    v3 = v34;
    v23 = (uint32_t *)v34[1];
  }
  v26 = (uint32_t *)*v3;
  if ( (uint32_t *)*v3 != v23 )
  {
    v35 = v19;
    v27 = v23;
    do
    {
      v28 = (uint32_t *)(*v26 - 12);
      if ( v28 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v26 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v28);
      v26 += 3;
    }
    while ( v26 != v27 );
    v19 = v35;
    v26 = (uint32_t *)*v3;
  }
  if ( v26 != nullptr )
    opDelete(v26);
  v3[1] = v19;
  *v3 = v33;
  v3[2] = v36 + v33;
  return v36 + v33;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_erase_at_end  (binary VA: 0x14010b0)
// Original: std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_erase_at_end
// ----------------------------------------------------------------------------
int g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_erase_at_end(uint32_t *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  void **i;
  void *v11;
  int result;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v19 = a1[7];
  v18 = a1[6];
  v16 = *a2;
  v17 = a1[9];
  v21 = a2[3];
  v20 = a2[2];
  v15 = (uint32_t *)(v21 + 4);
  if ( v17 > v21 + 4 )
  {
    do
    {
      v2 = 0;
      v3 = *v15 + 12;
      do
      {
        v4 = *(uint32_t *)(v3 + v2);
        if ( (uint32_t *)(v4 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v4 - 12));
        }
        v2 += 20;
      }
      while ( v2 != 500 );
      ++v15;
    }
    while ( v17 > (unsigned int)(uintptr_t)(v15) );
  }
  if ( v17 == v21 )
  {
    if ( v18 != v16 )
    {
      v13 = v16;
      do
      {
        v14 = *(uint32_t *)(v13 + 12);
        if ( (uint32_t *)(v14 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v14 - 12));
        }
        v13 += 20;
      }
      while ( v18 != v13 );
    }
  }
  else
  {
    if ( v16 != v20 )
    {
      v5 = v16;
      do
      {
        v6 = *(uint32_t *)(v5 + 12);
        if ( (uint32_t *)(v6 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v6 - 12));
        }
        v5 += 20;
      }
      while ( v20 != v5 );
    }
    if ( v18 != v19 )
    {
      v7 = v19;
      do
      {
        v8 = *(uint32_t *)(v7 + 12);
        if ( (uint32_t *)(v8 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        }
        v7 += 20;
      }
      while ( v18 != v7 );
    }
  }
  v9 = a1[9] + 4;
  for ( i = (void **)(a2[3] + 4); v9 > (unsigned int)(uintptr_t)(i); ++i )
  {
    v11 = *i;
    opDelete(v11);
  }
  a1[6] = *a2;
  a1[7] = a2[1];
  a1[8] = a2[2];
  result = a2[3];
  a1[9] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_Json_Value_766a9a::push_back  (binary VA: 0x1401310)
// Original: std::deque<glwebtools::Json::Value *>::push_back
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self ** g4_std::deque_glwebtools_Json_Value_766a9a::push_back(std::deque<glwebtools::Json::Value::Self *> *self, glwebtools::Json::Value::Self **a2)
{
  glwebtools::Json::Value::Self **result;
  int v3;
  char *v4;
  int v5;
  unsigned int v6;
  glwebtools::Json::Value::Self **v7;
  glwebtools::Json::Value::Self ***v8;
  unsigned int v9;
  int v10;
  void *dest;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int *v21;
  int *v22;
  void *v23;
  int v24;
  int v25;
  int *v26;
  void *src;
  int v28;

  result = *((glwebtools::Json::Value::Self ***)self + 6);
  if ( result == (glwebtools::Json::Value::Self **)(*((uint32_t *)self + 8) - 4) )
  {
    v4 = *((char **)self + 9);
    v5 = *(uint32_t *)self;
    v6 = *((uint32_t *)self + 1);
    if ( v6 - ((int)(uintptr_t)(&v4[-*(uint32_t *)self]) >> 2) <= 1 )
    {
      v26 = *((int **)self + 5);
      v28 = ((v4 - (char *)v26) >> 2) + 1;
      v19 = ((v4 - (char *)v26) >> 2) + 2;
      if ( v6 > 2 * v19 )
      {
        v16 = v4 + 4 - (char *)v26;
        v13 = (int *)(v5 + 4 * ((v6 - v19) >> 1));
        if ( v26 <= v13 )
        {
          v18 = v16 >> 2;
          if ( v18 != 0 )
          {
            v22 = (int *)(v5 + 4 * ((v6 - v19) >> 1));
            memmove(&v13[v28 - v18], v26, 4 * v18);
            v13 = v22;
          }
        }
        else
        {
          v17 = v16 >> 2;
          if ( v17 != 0 )
          {
            v21 = (int *)(v5 + 4 * ((v6 - v19) >> 1));
            memmove(v13, v26, 4 * v17);
            v13 = v21;
          }
        }
      }
      else
      {
        v9 = 3;
        if ( v6 != 0 )
        {
          v9 = 2 * v6 + 2;
          if ( v9 > 0x3FFFFFFF )
            sub_18FFEE0(v5, 2 * v19);
        }
        v10 = opNew(4 * v9);
        dest = (void *)(v10 + 4 * ((v9 - v19) >> 1));
        src = *((void **)self + 5);
        v12 = (*((uint32_t *)self + 9) + 4 - (int)(uintptr_t)(src)) >> 2;
        if ( v12 != 0 )
        {
          v23 = (void *)(v10 + 4 * ((v9 - v19) >> 1));
          v25 = v10;
          memmove(dest, src, 4 * v12);
          v10 = v25;
          dest = v23;
        }
        v20 = (int *)dest;
        v24 = v10;
        opDelete(*(void **)self);
        *((uint32_t *)self + 1) = v9;
        *(uint32_t *)self = v24;
        v13 = v20;
      }
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v13);
      v14 = *v13;
      *((uint32_t *)self + 3) = *v13;
      *((uint32_t *)self + 4) = v14 + 512;
      v4 = (char *)&v13[v28 - 1];
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v4);
      v15 = *(uint32_t *)v4;
      *((uint32_t *)self + 7) = *(uint32_t *)v4;
      *((uint32_t *)self + 8) = v15 + 512;
    }
    *((uint32_t *)v4 + 1) = opNew(0x200u);
    v7 = *((glwebtools::Json::Value::Self ***)self + 6);
    if ( v7 != nullptr )
      *v7 = *a2;
    v8 = (glwebtools::Json::Value::Self ***)(*((uint32_t *)self + 9) + 4);
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v8);
    result = *v8;
    *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(*v8);
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(result);
    *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(result + 128);
  }
  else
  {
    v3 = 0;
    if ( result != nullptr )
    {
      *result = *a2;
      v3 = *((uint32_t *)self + 6);
    }
    *((uint32_t *)self + 6) = v3 + 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_copy  (binary VA: 0x1401550)
// Original: std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_copy(int a1, uint32_t *a2, int a3)
{
  int v3;
  int *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v10;

  v10 = (uint32_t *)opNew(0x28u);
  if ( v10 != (uint32_t *)-16 )
  {
    glwebtools::Json::Value::CZString::Construct(
      (glwebtools::Json::Value::CZString::Self *)(v10 + 4),
      (const glwebtools::Json::Value::CZString::Self *)(a2 + 4));
    glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)(v10 + 6), (const glwebtools::Json::Value::Self *)(a2 + 6));
  }
  *v10 = *a2;
  v10[2] = 0;
  v10[3] = 0;
  v10[1] = a3;
  v3 = a2[3];
  if ( v3 != 0 )
    v10[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_copy(
               a1,
               (uint32_t *)(uintptr_t)(v3),
               (int)(uintptr_t)(v10)));
  v4 = (int *)a2[2];
  v5 = v10;
  if ( v4 != nullptr )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)opNew(0x28u);
      if ( v6 != (uint32_t *)-16 )
      {
        glwebtools::Json::Value::CZString::Construct(
          (glwebtools::Json::Value::CZString::Self *)(v6 + 4),
          (const glwebtools::Json::Value::CZString::Self *)(v4 + 4));
        glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)(v6 + 6), (const glwebtools::Json::Value::Self *)(v4 + 6));
      }
      v7 = *v4;
      v6[2] = 0;
      *v6 = v7;
      v6[3] = 0;
      v5[2] = (uint32_t)(uintptr_t)(v6);
      v6[1] = (uint32_t)(uintptr_t)(v5);
      v8 = v4[3];
      if ( v8 != 0 )
        v6[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_copy(
                  a1,
                  (uint32_t *)(uintptr_t)(v8),
                  (int)(uintptr_t)(v6)));
      v4 = (int *)v4[2];
      if ( v4 == nullptr )
        break;
      v5 = v6;
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert  (binary VA: 0x1401670)
// Original: std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(int *a1, int a2, int a3, int a4, const char **a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = glwebtools::Json::Value::CZString::opLt(a5, (const char **)(a4 + 16)) != 0;
  v5 = opNew(0x28u);
  if ( v5 != -16 )
  {
    v7 = v5;
    glwebtools::Json::Value::CZString::Construct(
      (glwebtools::Json::Value::CZString::Self *)(v5 + 16),
      (const glwebtools::Json::Value::CZString::Self *)a5);
    glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)(v7 + 24), (const glwebtools::Json::Value::Self *)(a5 + 2));
    v5 = v7;
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique  (binary VA: 0x1401770)
// Original: std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique(int a1, int a2, const char **a3)
{
  int v3;
  int v4;
  char v5;
  int v6;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 == 0 )
  {
    v3 = a2 + 4;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v5 = glwebtools::Json::Value::CZString::opLt(a3, (const char **)(v3 + 16));
    if ( v5 == 0 )
      break;
    v4 = *(uint32_t *)(v3 + 8);
    if ( v4 == 0 )
      goto LABEL_7;
LABEL_4:
    v3 = v4;
  }
  v4 = *(uint32_t *)(v3 + 12);
  if ( v4 != 0 )
    goto LABEL_4;
LABEL_7:
  if ( v5 != 0 )
  {
LABEL_8:
    if ( v3 != *(uint32_t *)(a2 + 12) )
    {
      v6 = sub_19048F0(v3);
      goto LABEL_10;
    }
    g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
      v10,
      a2,
      0,
      v3,
      a3);
LABEL_14:
    v8 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v8;
    return a1;
  }
  else
  {
    v6 = v3;
LABEL_10:
    v9 = v6;
    if ( glwebtools::Json::Value::CZString::opLt((const char **)(v6 + 16), a3) != 0 )
    {
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
        v10,
        a2,
        0,
        v3,
        a3);
      goto LABEL_14;
    }
    *(uint32_t *)a1 = v9;
    *(uint8_t *)(a1 + 4) = 0;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique  (binary VA: 0x1401880)
// Original: std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique(int *a1, int *a2, int a3, const char **a4)
{
  int v4;
  typedef glwebtools::Json::Value::CZString::Self *_g4_t_v6;
  typedef glwebtools::Json::Value::CZString::Self *_g4_t_v7;
  typedef int _g4_t_v8[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);

  if ( (int *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 || glwebtools::Json::Value::CZString::opLt((const char **)(a2[4] + 16), a4) == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  if ( glwebtools::Json::Value::CZString::opLt(a4, (const char **)(a3 + 16)) != 0 )
  {
    v4 = a2[3];
    if ( v4 == a3 )
    {
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v4,
        a2[3],
        a4);
      return a1;
    }
    v6 = (glwebtools::Json::Value::CZString::Self *)sub_1904940(a3);
    if ( glwebtools::Json::Value::CZString::opLt((const char **)v6 + 4, a4) != 0 )
    {
      if ( *((uint32_t *)v6 + 3) != 0 )
        g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          a4);
      else
        g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          0,
          (int)(uintptr_t)(v6),
          a4);
      return a1;
    }
LABEL_14:
    g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique(
      (int)(uintptr_t)(v8),
      (int)(uintptr_t)(a2),
      a4);
    *a1 = v8[0];
    return a1;
  }
  if ( glwebtools::Json::Value::CZString::opLt((const char **)(a3 + 16), a4) == 0 )
  {
    *a1 = a3;
    return a1;
  }
  if ( a2[4] == a3 )
  {
LABEL_17:
    g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a2[4],
      a4);
    return a1;
  }
  v7 = (glwebtools::Json::Value::CZString::Self *)sub_19048E0(a3);
  if ( glwebtools::Json::Value::CZString::opLt(a4, (const char **)v7 + 4) == 0 )
    goto LABEL_14;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      (int)(uintptr_t)(v7),
      (int)(uintptr_t)(v7),
      a4);
  else
    g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase_aux  (binary VA: 0x1401aa0)
// Original: std::_Rb_tree<glwebtools::Json::Value::CZString,std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>,std::_Select1st<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>,std::less<glwebtools::Json::Value::CZString>,std::allocator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>>>::_M_erase_aux
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase_aux(int a1, int a2)
{
  int v2;

  v2 = sub_1904AE0(a2, a1 + 4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)(v2 + 24));
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)(v2 + 16));
  opDelete((void *)v2);
  --*(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Deque_base_glwebtools_Json_Value_44bc38::M_initialize_map  (binary VA: 0x1401b10)
// Original: std::_Deque_base<glwebtools::Json::Value *>::_M_initialize_map
// ----------------------------------------------------------------------------
int g4_std::Deque_base_glwebtools_Json_Value_44bc38::M_initialize_map(std::_Deque_base<glwebtools::Json::Value::Self *> *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;

  v2 = (a2 >> 7) + 1;
  v3 = (a2 >> 7) + 3;
  if ( v3 < 8 )
    v3 = 8;
  *((uint32_t *)self + 1) = v3;
  v4 = opNew(4 * v3);
  v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v4;
  v6 = (int *)(v4 + 4 * ((v5 - v2) >> 1));
  v12 = v6;
  v7 = (unsigned int)(uintptr_t)(&v6[v2]);
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    v8 = v6;
    do
      *v8++ = opNew(0x200u);
    while ( v7 > (unsigned int)(uintptr_t)(v8) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  v9 = *v12;
  *((uint32_t *)self + 3) = *v12;
  *((uint32_t *)self + 4) = v9 + 512;
  *((uint32_t *)self + 9) = v7 - 4;
  v10 = *(uint32_t *)(v7 - 4);
  *((uint32_t *)self + 2) = v9;
  *((uint32_t *)self + 7) = v10;
  *((uint32_t *)self + 8) = v10 + 512;
  result = v10 + 4 * (a2 & 0x7F);
  *((uint32_t *)self + 6) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map  (binary VA: 0x1401bc0)
// Original: std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_reallocate_map
// ----------------------------------------------------------------------------
int g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(std::deque<glwebtools::Json::Reader::ErrorInfo> *self, unsigned int a2, bool a3)
{
  int *src;
  unsigned int v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int *dest;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  const void *v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int result;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;

  src = *((int **)self + 5);
  v25 = *((uint32_t *)self + 9);
  v4 = *((uint32_t *)self + 1);
  v5 = ((v25 - (int)(uintptr_t)(src)) >> 2) + 1;
  v6 = v5 + a2;
  if ( v4 <= 2 * (v5 + a2) )
  {
    v13 = a2;
    if ( a2 < v4 )
      v13 = *((uint32_t *)self + 1);
    v26 = v4 + v13 + 2;
    if ( v26 > 0x3FFFFFFF )
      sub_18FFEE0(v4, v6);
    v14 = opNew(4 * v26);
    v15 = 0;
    if ( a3 )
      v15 = 4 * a2;
    v16 = *((const void **)self + 5);
    dest = (int *)(v14 + v15 + 4 * ((v26 - (v5 + a2)) >> 1));
    v17 = (*((uint32_t *)self + 9) + 4 - (int)(uintptr_t)(v16)) >> 2;
    if ( v17 != 0 )
    {
      v24 = v14;
      memmove(dest, v16, 4 * v17);
      v14 = v24;
    }
    v23 = v14;
    opDelete(*(void **)self);
    *(uint32_t *)self = v23;
    *((uint32_t *)self + 1) = v26;
  }
  else
  {
    v7 = v4 - v6;
    v8 = 0;
    v9 = v7 >> 1;
    if ( a3 )
      v8 = 4 * a2;
    dest = (int *)(*(uint32_t *)self + v8 + 4 * v9);
    v11 = v25 + 4 - (uint32_t)(uintptr_t)(src);
    if ( src <= dest )
    {
      v22 = v11 >> 2;
      if ( v22 != 0 )
        memmove(&dest[v5 - v22], src, 4 * v22);
    }
    else
    {
      v12 = v11 >> 2;
      if ( v12 != 0 )
        memmove(dest, src, 4 * v12);
    }
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(dest);
  v18 = *dest;
  *((uint32_t *)self + 3) = *dest;
  *((uint32_t *)self + 4) = v18 + 500;
  v19 = &dest[v5 - 1];
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v19);
  v20 = *v19;
  *((uint32_t *)self + 7) = v20;
  result = v20 + 500;
  *((uint32_t *)self + 8) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_front  (binary VA: 0x1401d70)
// Original: std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_reserve_elements_at_front
// ----------------------------------------------------------------------------
std::deque<glwebtools::Json::Reader::ErrorInfo> * g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_front(std::deque<glwebtools::Json::Reader::ErrorInfo> *self, std::deque<glwebtools::Json::Reader::ErrorInfo> *a2, unsigned int a3)
{
  std::deque<glwebtools::Json::Reader::ErrorInfo> *v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;

  v3 = a2;
  v4 = *((uint32_t *)a2 + 2);
  v5 = *((uint32_t *)a2 + 3);
  v6 = -858993459 * ((v4 - v5) >> 2);
  v7 = v6;
  if ( v6 >= a3 )
  {
LABEL_10:
    v9 = *((int **)v3 + 5);
    goto LABEL_11;
  }
  v8 = a3 - v6;
  v9 = *((int **)a2 + 5);
  if ( v8 > 214748364
          - (-858993459 * ((*((uint32_t *)a2 + 4) - v4) >> 2)
           + 5 * (5 * ((*((uint32_t *)a2 + 9) - (int)(uintptr_t)(v9)) >> 2) - 5)
           - 858993459 * ((*((uint32_t *)a2 + 6) - *((uint32_t *)a2 + 7)) >> 2)) )
    sub_1900180("deque::_M_new_elements_at_front");
  v10 = (v8 + 24) / 0x19;
  if ( v10 > ((int)(uintptr_t)(v9) - *(uint32_t *)a2) >> 2 )
  {
    g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(a2, v10, true);
    v9 = *((int **)a2 + 5);
  }
  v11 = 2;
  if ( v10 != 0 )
  {
    while ( 1 )
    {
      v9[-v11 + 1] = opNew(0x1F4u);
      if ( v10 < v11 )
        break;
      ++v11;
      v9 = *((int **)a2 + 5);
    }
    v3 = a2;
    v4 = *((uint32_t *)a2 + 2);
    v5 = *((uint32_t *)a2 + 3);
    v7 = -858993459 * ((v4 - v5) >> 2);
    goto LABEL_10;
  }
  v4 = *((uint32_t *)a2 + 2);
  v5 = *((uint32_t *)a2 + 3);
  v7 = -858993459 * ((v4 - v5) >> 2);
LABEL_11:
  v12 = v7 - a3;
  v13 = *((uint32_t *)v3 + 4);
  if ( (int)(v7 - a3) < 0 )
  {
    v14 = ~(~v12 / 0x19u);
  }
  else
  {
    if ( v12 <= 24 )
    {
      v15 = v4 - 20 * a3;
      goto LABEL_15;
    }
    v14 = v12 / 25;
  }
  v9 += v14;
  v5 = *v9;
  v13 = *v9 + 500;
  v15 = *v9 + 20 * (v12 - 25 * v14);
LABEL_15:
  *((uint32_t *)self + 1) = v5;
  *(uint32_t *)self = v15;
  *((uint32_t *)self + 2) = v13;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v9);
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_back  (binary VA: 0x1401f50)
// Original: std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_reserve_elements_at_back
// ----------------------------------------------------------------------------
std::deque<glwebtools::Json::Reader::ErrorInfo> * g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_back(std::deque<glwebtools::Json::Reader::ErrorInfo> *self, std::deque<glwebtools::Json::Reader::ErrorInfo> *a2, unsigned int a3)
{
  std::deque<glwebtools::Json::Reader::ErrorInfo> *v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int *v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;

  v3 = a2;
  v4 = *((uint32_t *)a2 + 8);
  v5 = *((uint32_t *)a2 + 6);
  v6 = -858993459 * ((v4 - v5) >> 2) - 1;
  if ( v6 >= a3 )
    goto LABEL_10;
  v7 = a3 - v6;
  v8 = *((int **)a2 + 9);
  if ( v7 > 214748364
          - (-858993459 * ((v5 - *((uint32_t *)a2 + 7)) >> 2)
           + 5 * (5 * (((int)(uintptr_t)(v8) - *((uint32_t *)a2 + 5)) >> 2) - 5)
           - 858993459 * ((*((uint32_t *)a2 + 4) - *((uint32_t *)a2 + 2)) >> 2)) )
    sub_1900180("deque::_M_new_elements_at_back");
  v9 = (v7 + 24) / 0x19;
  if ( v9 + 1 > *((uint32_t *)a2 + 1) - (((int)(uintptr_t)(v8) - *(uint32_t *)a2) >> 2) )
  {
    g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(a2, v9, false);
    v8 = *((int **)a2 + 9);
  }
  v10 = 1;
  if ( v9 != 0 )
  {
    v11 = v9;
    while ( 1 )
    {
      v12 = &v8[v10++];
      *v12 = opNew(0x1F4u);
      if ( v11 < v10 )
        break;
      v8 = *((int **)a2 + 9);
    }
    v3 = a2;
    v5 = *((uint32_t *)a2 + 6);
    v4 = *((uint32_t *)a2 + 8);
LABEL_10:
    v8 = *((int **)v3 + 9);
    goto LABEL_11;
  }
  v5 = *((uint32_t *)a2 + 6);
  v4 = *((uint32_t *)a2 + 8);
LABEL_11:
  v13 = *((uint32_t *)v3 + 7);
  v14 = a3 - 858993459 * ((v5 - v13) >> 2);
  if ( v14 < 0 )
  {
    v15 = ~(~v14 / 0x19u);
  }
  else
  {
    if ( v14 <= 24 )
    {
      v16 = v5 + 20 * a3;
      goto LABEL_15;
    }
    v15 = v14 / 25;
  }
  v8 += v15;
  v13 = *v8;
  v4 = *v8 + 500;
  v16 = *v8 + 20 * (v14 - 25 * v15);
LABEL_15:
  *((uint32_t *)self + 2) = v4;
  *(uint32_t *)self = v16;
  *((uint32_t *)self + 1) = v13;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::fill_glwebtools_Json_Reader_E_d2da25  (binary VA: 0x1402120)
// Original: std::fill<glwebtools::Json::Reader::ErrorInfo>
// ----------------------------------------------------------------------------
unsigned int g4_std::fill_glwebtools_Json_Reader_E_d2da25(int a1, uint32_t *a2, uint32_t *a3)
{
  int v3;
  unsigned int result;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t **v13;

  v3 = *(uint32_t *)(a1 + 12);
  v13 = (uint32_t **)(v3 + 4);
  result = a2[3];
  if ( v3 + 4 < result )
  {
    do
    {
      v5 = *v13;
      v6 = (int)(uintptr_t)(*v13 + 125);
      do
      {
        *v5 = *a3;
        v5[1] = a3[1];
        v5[2] = a3[2];
        g4_std::string::assign_str(v5 + 3, a3 + 3);
        v5[4] = a3[4];
        v5 += 5;
      }
      while ( v5 != (uint32_t *)v6 );
      ++v13;
      result = a2[3];
    }
    while ( result > (unsigned int)(uintptr_t)(v13) );
    v3 = *(uint32_t *)(a1 + 12);
  }
  if ( result == v3 )
  {
    if ( *a2 != *(uint32_t *)a1 )
    {
      v11 = (uint32_t *)*a2;
      v12 = *(uint32_t **)a1;
      do
      {
        *v12 = *a3;
        v12[1] = a3[1];
        v12[2] = a3[2];
        g4_std::string::assign_str(v12 + 3, a3 + 3);
        result = a3[4];
        v12[4] = result;
        v12 += 5;
      }
      while ( v11 != v12 );
    }
  }
  else
  {
    result = *(uint32_t *)(a1 + 8);
    v7 = *(uint32_t **)a1;
    if ( result != *(uint32_t *)a1 )
    {
      v8 = *(uint32_t **)(a1 + 8);
      do
      {
        *v7 = *a3;
        v7[1] = a3[1];
        v7[2] = a3[2];
        g4_std::string::assign_str(v7 + 3, a3 + 3);
        result = a3[4];
        v7[4] = result;
        v7 += 5;
      }
      while ( v8 != v7 );
    }
    if ( *a2 != a2[1] )
    {
      v9 = (uint32_t *)*a2;
      v10 = (uint32_t *)a2[1];
      do
      {
        *v10 = *a3;
        v10[1] = a3[1];
        v10[2] = a3[2];
        g4_std::string::assign_str(v10 + 3, a3 + 3);
        result = a3[4];
        v10[4] = result;
        v10 += 5;
      }
      while ( v9 != v10 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::copy_backward_glwebtools_Json_Reader_E_f2c95d  (binary VA: 0x14022c0)
// Original: std::copy_backward<glwebtools::Json::Reader::ErrorInfo>
// ----------------------------------------------------------------------------
int * g4_std::copy_backward_glwebtools_Json_Reader_E_f2c95d(int *a1, uint32_t *a2, int *a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int i;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int *v30;
  int *v31;
  int v32;
  int v33;

  v28 = *a4;
  v29 = a4[1];
  v31 = (int *)a4[3];
  v30 = (int *)a3[3];
  v32 = a3[1];
  v33 = a4[2];
  v27 = *a3;
  for ( i = -858993459 * ((*a3 - v32) >> 2) + 5 * (5 * (((int)(uintptr_t)(v30) - a2[3]) >> 2) - 5) - 858993459 * ((a2[2] - *a2) >> 2);
        i > 0;
        i -= v23 )
  {
    v4 = v27;
    v5 = v27;
    v25 = -858993459 * ((v27 - v32) >> 2);
    v26 = -858993459 * ((v28 - v29) >> 2);
    v6 = v25;
    if ( v25 == 0 )
    {
      v6 = 25;
      v5 = *(v30 - 1) + 500;
      v4 = v5;
    }
    v7 = -858993459 * ((v28 - v29) >> 2);
    v22 = v28;
    if ( v26 == 0 )
    {
      v22 = *(v31 - 1) + 500;
      v7 = 25;
    }
    if ( v6 > i )
      v6 = i;
    if ( v6 <= v7 )
      v7 = v6;
    v23 = v7;
    v21 = -858993459 * ((v4 - (v5 - 20 * v7)) >> 2);
    if ( v21 > 0 )
    {
      v8 = v22;
      v9 = (uint32_t *)(v5 - 20);
      v10 = v22 - 20;
      while ( 1 )
      {
        v11 = v8 - 20 - v22;
        *(uint32_t *)(v11 + v22) = *v9;
        *(uint32_t *)(v11 + v10 + 24) = v9[1];
        *(uint32_t *)(v11 + v10 + 28) = v9[2];
        v20 = v8 - 20;
        g4_std::string::assign_str(v8 - 8, v9 + 3);
        v12 = v9[4];
        v9 -= 5;
        v13 = v21-- == 1;
        *(uint32_t *)(v11 + v10 + 36) = v12;
        if ( v13 )
          break;
        v8 = v20;
      }
    }
    v14 = v25 - v23;
    if ( v25 - v23 < 0 )
    {
      v18 = ~(~v14 / 0x19u);
    }
    else
    {
      if ( v14 <= 24 )
      {
        v15 = v26 - v23;
        v27 -= 20 * v23;
        if ( v26 - v23 < 0 )
          goto LABEL_25;
        goto LABEL_17;
      }
      v18 = v14 / 25;
    }
    v30 += v18;
    v32 = *v30;
    v19 = 5 * (v14 - 25 * v18);
    v15 = v26 - v23;
    v27 = *v30 + 4 * v19;
    if ( v26 - v23 < 0 )
    {
LABEL_25:
      v17 = ~(~v15 / 0x19u);
      goto LABEL_22;
    }
LABEL_17:
    if ( v15 > 24 )
    {
      v17 = v15 / 25;
LABEL_22:
      v31 += v17;
      v29 = *v31;
      v33 = *v31 + 500;
      v28 = *v31 + 20 * (v15 - 25 * v17);
      continue;
    }
    v28 -= 20 * v23;
  }
  *a1 = v28;
  a1[1] = v29;
  a1[2] = v33;
  a1[3] = (int)(uintptr_t)(v31);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_insert_aux  (binary VA: 0x14025a0)
// Original: std::deque<glwebtools::Json::Reader::ErrorInfo>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_insert_aux(std::deque<glwebtools::Json::Reader::ErrorInfo> *a1, int *a2, int a3, uint32_t *a4)
{
  std::deque<glwebtools::Json::Reader::ErrorInfo> *v4;
  uint32_t *v5;
  int v6;
  int v7;
  unsigned int v8;
  int *v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  bool v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  bool v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int *v33;
  unsigned int v34;
  int *v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int *v50;
  int v51;
  int v52;
  uint32_t *v53;
  uint32_t *v54;
  int result;
  void *v56;
  int v57;
  int v58;
  int v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  unsigned int v63;
  unsigned int v64;
  int *v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> *_g4_t_v72;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int *_g4_t_v86;
  typedef int *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> *_g4_t_v94;
  typedef int *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef uint32_t *_g4_t_v97;
  typedef int *_g4_t_v98;
  typedef int *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint32_t *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef uint32_t *_g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> *_g4_t_i;
  typedef int _g4_t_v122;
  typedef uint32_t *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef unsigned int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef signed int _g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef int *_g4_t_v132;
  typedef uint32_t *_g4_t_v133;
  typedef unsigned int _g4_t_v134;
  typedef unsigned int _g4_t_v135;
  typedef signed int _g4_t_v136;
  typedef unsigned int _g4_t_v137;
  typedef int *_g4_t_v138;
  typedef signed int _g4_t_v139;
  typedef unsigned int _g4_t_v140;
  typedef unsigned int _g4_t_v141;
  typedef unsigned int _g4_t_v142;
  typedef unsigned int _g4_t_v143;
  typedef unsigned int _g4_t_v144;
  typedef int _g4_t_v145[6];
  typedef uint32_t _g4_t_v146[4];
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int *_g4_t_v150;
  typedef uint32_t _g4_t_v151[4];
  typedef int _g4_t_v152[4];
  typedef int _g4_t_v153[4];
  typedef uint32_t _g4_t_v154[4];
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> **_g4_t_v160;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v72)) > _g4_s0 ? (4u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v73)) > _g4_s1 ? (8u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v74)) > _g4_s2 ? (8u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v75)) > _g4_s3 ? (8u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v76)) > _g4_s4 ? (8u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v77)) > _g4_s5 ? (12u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v78)) > _g4_s6 ? (12u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v79)) > _g4_s7 ? (16u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v80)) > _g4_s8 ? (16u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v81)) > _g4_s9 ? (16u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v82)) > _g4_s10 ? (16u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v83)) > _g4_s11 ? (20u + sizeof(_g4_t_v83)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v84)) > _g4_s12 ? (20u + sizeof(_g4_t_v84)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v85)) > _g4_s13 ? (20u + sizeof(_g4_t_v85)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v86)) > _g4_s14 ? (24u + sizeof(_g4_t_v86)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v87)) > _g4_s15 ? (24u + sizeof(_g4_t_v87)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v88)) > _g4_s16 ? (24u + sizeof(_g4_t_v88)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v89)) > _g4_s17 ? (28u + sizeof(_g4_t_v89)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v90)) > _g4_s18 ? (28u + sizeof(_g4_t_v90)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v91)) > _g4_s19 ? (28u + sizeof(_g4_t_v91)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v92)) > _g4_s20 ? (32u + sizeof(_g4_t_v92)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v93)) > _g4_s21 ? (32u + sizeof(_g4_t_v93)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v94)) > _g4_s22 ? (32u + sizeof(_g4_t_v94)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v95)) > _g4_s23 ? (36u + sizeof(_g4_t_v95)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v96)) > _g4_s24 ? (40u + sizeof(_g4_t_v96)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v97)) > _g4_s25 ? (40u + sizeof(_g4_t_v97)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v98)) > _g4_s26 ? (40u + sizeof(_g4_t_v98)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v99)) > _g4_s27 ? (44u + sizeof(_g4_t_v99)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v100)) > _g4_s28 ? (44u + sizeof(_g4_t_v100)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v101)) > _g4_s29 ? (44u + sizeof(_g4_t_v101)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v102)) > _g4_s30 ? (44u + sizeof(_g4_t_v102)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v103)) > _g4_s31 ? (44u + sizeof(_g4_t_v103)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v104)) > _g4_s32 ? (48u + sizeof(_g4_t_v104)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v105)) > _g4_s33 ? (48u + sizeof(_g4_t_v105)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v106)) > _g4_s34 ? (48u + sizeof(_g4_t_v106)) : _g4_s34,
    _g4_s36 = (48u + sizeof(_g4_t_v107)) > _g4_s35 ? (48u + sizeof(_g4_t_v107)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v108)) > _g4_s36 ? (48u + sizeof(_g4_t_v108)) : _g4_s36,
    _g4_s38 = (48u + sizeof(_g4_t_v109)) > _g4_s37 ? (48u + sizeof(_g4_t_v109)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v110)) > _g4_s38 ? (48u + sizeof(_g4_t_v110)) : _g4_s38,
    _g4_s40 = (52u + sizeof(_g4_t_v111)) > _g4_s39 ? (52u + sizeof(_g4_t_v111)) : _g4_s39,
    _g4_s41 = (52u + sizeof(_g4_t_v112)) > _g4_s40 ? (52u + sizeof(_g4_t_v112)) : _g4_s40,
    _g4_s42 = (52u + sizeof(_g4_t_v113)) > _g4_s41 ? (52u + sizeof(_g4_t_v113)) : _g4_s41,
    _g4_s43 = (52u + sizeof(_g4_t_v114)) > _g4_s42 ? (52u + sizeof(_g4_t_v114)) : _g4_s42,
    _g4_s44 = (52u + sizeof(_g4_t_v115)) > _g4_s43 ? (52u + sizeof(_g4_t_v115)) : _g4_s43,
    _g4_s45 = (52u + sizeof(_g4_t_v116)) > _g4_s44 ? (52u + sizeof(_g4_t_v116)) : _g4_s44,
    _g4_s46 = (56u + sizeof(_g4_t_v117)) > _g4_s45 ? (56u + sizeof(_g4_t_v117)) : _g4_s45,
    _g4_s47 = (56u + sizeof(_g4_t_v118)) > _g4_s46 ? (56u + sizeof(_g4_t_v118)) : _g4_s46,
    _g4_s48 = (56u + sizeof(_g4_t_v119)) > _g4_s47 ? (56u + sizeof(_g4_t_v119)) : _g4_s47,
    _g4_s49 = (56u + sizeof(_g4_t_v120)) > _g4_s48 ? (56u + sizeof(_g4_t_v120)) : _g4_s48,
    _g4_s50 = (56u + sizeof(_g4_t_i)) > _g4_s49 ? (56u + sizeof(_g4_t_i)) : _g4_s49,
    _g4_s51 = (56u + sizeof(_g4_t_v122)) > _g4_s50 ? (56u + sizeof(_g4_t_v122)) : _g4_s50,
    _g4_s52 = (56u + sizeof(_g4_t_v123)) > _g4_s51 ? (56u + sizeof(_g4_t_v123)) : _g4_s51,
    _g4_s53 = (56u + sizeof(_g4_t_v124)) > _g4_s52 ? (56u + sizeof(_g4_t_v124)) : _g4_s52,
    _g4_s54 = (60u + sizeof(_g4_t_v125)) > _g4_s53 ? (60u + sizeof(_g4_t_v125)) : _g4_s53,
    _g4_s55 = (60u + sizeof(_g4_t_v126)) > _g4_s54 ? (60u + sizeof(_g4_t_v126)) : _g4_s54,
    _g4_s56 = (60u + sizeof(_g4_t_v127)) > _g4_s55 ? (60u + sizeof(_g4_t_v127)) : _g4_s55,
    _g4_s57 = (60u + sizeof(_g4_t_v128)) > _g4_s56 ? (60u + sizeof(_g4_t_v128)) : _g4_s56,
    _g4_s58 = (60u + sizeof(_g4_t_v129)) > _g4_s57 ? (60u + sizeof(_g4_t_v129)) : _g4_s57,
    _g4_s59 = (60u + sizeof(_g4_t_v130)) > _g4_s58 ? (60u + sizeof(_g4_t_v130)) : _g4_s58,
    _g4_s60 = (60u + sizeof(_g4_t_v131)) > _g4_s59 ? (60u + sizeof(_g4_t_v131)) : _g4_s59,
    _g4_s61 = (60u + sizeof(_g4_t_v132)) > _g4_s60 ? (60u + sizeof(_g4_t_v132)) : _g4_s60,
    _g4_s62 = (60u + sizeof(_g4_t_v133)) > _g4_s61 ? (60u + sizeof(_g4_t_v133)) : _g4_s61,
    _g4_s63 = (64u + sizeof(_g4_t_v134)) > _g4_s62 ? (64u + sizeof(_g4_t_v134)) : _g4_s62,
    _g4_s64 = (64u + sizeof(_g4_t_v135)) > _g4_s63 ? (64u + sizeof(_g4_t_v135)) : _g4_s63,
    _g4_s65 = (64u + sizeof(_g4_t_v136)) > _g4_s64 ? (64u + sizeof(_g4_t_v136)) : _g4_s64,
    _g4_s66 = (64u + sizeof(_g4_t_v137)) > _g4_s65 ? (64u + sizeof(_g4_t_v137)) : _g4_s65,
    _g4_s67 = (64u + sizeof(_g4_t_v138)) > _g4_s66 ? (64u + sizeof(_g4_t_v138)) : _g4_s66,
    _g4_s68 = (64u + sizeof(_g4_t_v139)) > _g4_s67 ? (64u + sizeof(_g4_t_v139)) : _g4_s67,
    _g4_s69 = (64u + sizeof(_g4_t_v140)) > _g4_s68 ? (64u + sizeof(_g4_t_v140)) : _g4_s68,
    _g4_s70 = (64u + sizeof(_g4_t_v141)) > _g4_s69 ? (64u + sizeof(_g4_t_v141)) : _g4_s69,
    _g4_s71 = (64u + sizeof(_g4_t_v142)) > _g4_s70 ? (64u + sizeof(_g4_t_v142)) : _g4_s70,
    _g4_s72 = (64u + sizeof(_g4_t_v143)) > _g4_s71 ? (64u + sizeof(_g4_t_v143)) : _g4_s71,
    _g4_s73 = (64u + sizeof(_g4_t_v144)) > _g4_s72 ? (64u + sizeof(_g4_t_v144)) : _g4_s72,
    _g4_s74 = (68u + sizeof(_g4_t_v145)) > _g4_s73 ? (68u + sizeof(_g4_t_v145)) : _g4_s73,
    _g4_s75 = (96u + sizeof(_g4_t_v146)) > _g4_s74 ? (96u + sizeof(_g4_t_v146)) : _g4_s74,
    _g4_s76 = (112u + sizeof(_g4_t_v147)) > _g4_s75 ? (112u + sizeof(_g4_t_v147)) : _g4_s75,
    _g4_s77 = (116u + sizeof(_g4_t_v148)) > _g4_s76 ? (116u + sizeof(_g4_t_v148)) : _g4_s76,
    _g4_s78 = (120u + sizeof(_g4_t_v149)) > _g4_s77 ? (120u + sizeof(_g4_t_v149)) : _g4_s77,
    _g4_s79 = (124u + sizeof(_g4_t_v150)) > _g4_s78 ? (124u + sizeof(_g4_t_v150)) : _g4_s78,
    _g4_s80 = (128u + sizeof(_g4_t_v151)) > _g4_s79 ? (128u + sizeof(_g4_t_v151)) : _g4_s79,
    _g4_s81 = (144u + sizeof(_g4_t_v152)) > _g4_s80 ? (144u + sizeof(_g4_t_v152)) : _g4_s80,
    _g4_s82 = (160u + sizeof(_g4_t_v153)) > _g4_s81 ? (160u + sizeof(_g4_t_v153)) : _g4_s81,
    _g4_s83 = (176u + sizeof(_g4_t_v154)) > _g4_s82 ? (176u + sizeof(_g4_t_v154)) : _g4_s82,
    _g4_s84 = (192u + sizeof(_g4_t_v155)) > _g4_s83 ? (192u + sizeof(_g4_t_v155)) : _g4_s83,
    _g4_s85 = (196u + sizeof(_g4_t_v156)) > _g4_s84 ? (196u + sizeof(_g4_t_v156)) : _g4_s84,
    _g4_s86 = (200u + sizeof(_g4_t_v157)) > _g4_s85 ? (200u + sizeof(_g4_t_v157)) : _g4_s85,
    _g4_s87 = (204u + sizeof(_g4_t_v158)) > _g4_s86 ? (204u + sizeof(_g4_t_v158)) : _g4_s86,
    _g4_s88 = (208u + sizeof(_g4_t_v159)) > _g4_s87 ? (208u + sizeof(_g4_t_v159)) : _g4_s87,
    _g4_s89 = (220u + sizeof(_g4_t_v160)) > _g4_s88 ? (220u + sizeof(_g4_t_v160)) : _g4_s88
  };
  alignas(16) uint8_t _g4_sf[_g4_s89];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 8u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 12u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 12u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 16u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 16u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 16u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 16u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 20u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 20u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 24u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 24u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 28u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 44u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 44u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 48u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 48u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 52u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 52u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 52u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 56u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 56u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 56u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 56u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 60u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 60u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 60u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 60u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 60u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 60u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 60u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 60u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 60u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 64u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 64u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 64u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 64u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 64u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 64u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 64u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 64u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 64u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 64u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 64u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 68u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 96u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 112u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 116u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 120u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 124u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 128u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 144u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 160u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 176u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 192u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 196u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 200u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 204u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 208u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 220u);

  v160 = &a1;
  v95 = a2;
  v4 = a1;
  v96 = a3;
  v5 = a4;
  v6 = -858993459 * ((*((uint32_t *)v4 + 4) - *((uint32_t *)v4 + 2)) >> 2);
  v111 = v6 + 5 * (5 * ((a2[3] - *((uint32_t *)a1 + 5)) >> 2) - 5) - 858993459 * ((*v95 - v95[1]) >> 2);
  v125 = v6
       + 5 * (5 * ((*((uint32_t *)v4 + 9) - *((uint32_t *)v4 + 5)) >> 2) - 5)
       - 858993459 * ((*((uint32_t *)v4 + 6) - *((uint32_t *)v4 + 7)) >> 2);
  v155 = *a4;
  v156 = a4[1];
  v157 = a4[2];
  g4_std::string::construct_copy(&v158, a4 + 3);
  v159 = v5[4];
  if ( (int)(v125 >> 1) <= v111 )
  {
    v140 = *((uint32_t *)v4 + 8);
    v31 = *((uint32_t *)v4 + 6);
    v32 = -858993459 * ((int)(v140 - v31) >> 2) - 1;
    if ( v96 > v32 )
    {
      v33 = *((int **)v4 + 9);
      if ( v96 - v32 > 214748364
                     - (-858993459 * ((*((uint32_t *)v4 + 4) - *((uint32_t *)v4 + 2)) >> 2)
                      + 5 * (5 * (((int)(uintptr_t)(v33) - *((uint32_t *)v4 + 5)) >> 2) - 5)
                      - 858993459 * ((v31 - *((uint32_t *)v4 + 7)) >> 2)) )
        sub_1900180("deque::_M_new_elements_at_back");
      v141 = (v96 - v32 + 24) / 0x19;
      if ( v141 + 1 > *((uint32_t *)v4 + 1) - (((int)(uintptr_t)(v33) - *(uint32_t *)v4) >> 2) )
      {
        g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(v4, v141, false);
        v33 = *((int **)v4 + 9);
      }
      v34 = 1;
      if ( v141 == 0 )
      {
        v140 = *((uint32_t *)v4 + 8);
        v31 = *((uint32_t *)v4 + 6);
LABEL_64:
        v107 = *((uint32_t *)v4 + 7);
        v36 = -858993459 * ((v31 - v107) >> 2) + v96;
        v101 = v36;
        if ( v36 < 0 )
        {
          v37 = ~(~v36 / 0x19u);
        }
        else
        {
          if ( v36 <= 24 )
          {
            v91 = v33;
            v85 = v31 + 20 * v96;
            v93 = *((uint32_t *)v4 + 7);
            v78 = v140;
LABEL_68:
            v148 = *((uint32_t *)v4 + 7);
            v149 = v140;
            v38 = v125 - v111;
            v147 = v31;
            v39 = -858993459 * ((v31 - v107) >> 2) - (v125 - v111);
            v150 = v33;
            v130 = v125 - v111;
            v122 = v39;
            if ( v39 < 0 )
            {
              v64 = ~(~v39 / 0x19u);
            }
            else
            {
              if ( v39 <= 24 )
              {
                v114 = v33;
                v40 = v31 - 20 * v38;
                v41 = v107;
                goto LABEL_71;
              }
              v64 = v39 / 25;
            }
            v65 = &v33[v64];
            v41 = *v65;
            v114 = v65;
            v140 = *v65 + 500;
            v40 = *v65 + 20 * (v122 - 25 * v64);
LABEL_71:
            v95[2] = v140;
            *v95 = v40;
            v95[1] = v41;
            v95[3] = (int)(uintptr_t)(v114);
            if ( v130 > v96 )
            {
              v142 = *((uint32_t *)v4 + 6);
              v102 = *((uint32_t *)v4 + 7);
              v131 = *((uint32_t **)v4 + 8);
              v42 = -858993459 * ((int)(v142 - v102) >> 2) - v96;
              if ( v42 < 0 )
              {
                v70 = ~(~v42 / 0x19u);
              }
              else
              {
                if ( v42 <= 24 )
                {
                  v87 = *((int **)v4 + 9);
                  v75 = v142 - 20 * v96;
                  v81 = *((uint32_t *)v4 + 8);
LABEL_75:
                  v115 = *((uint32_t *)v4 + 9);
                  v123 = (uint32_t *)v81;
                  v72 = v4;
                  v108 = v87;
                  v43 = (uint32_t *)v75;
                  v44 = *((uint32_t **)v4 + 6);
                  while ( (uint32_t *)v142 != v43 )
                  {
                    while ( 1 )
                    {
                      if ( v44 != nullptr )
                      {
                        *v44 = *v43;
                        v44[1] = v43[1];
                        v44[2] = v43[2];
                        g4_std::string::construct_copy(v44 + 3, v43 + 3);
                        v44[4] = v43[4];
                      }
                      v43 += 5;
                      if ( v43 == v123 )
                      {
                        v43 = (uint32_t *)v108[1];
                        ++v108;
                        v123 = v43 + 125;
                      }
                      v44 += 5;
                      if ( v131 != v44 )
                        break;
                      v45 = v115;
                      v115 += 4;
                      v44 = *(uint32_t **)(v45 + 4);
                      v131 = v44 + 125;
                      if ( (uint32_t *)v142 == v43 )
                        goto LABEL_83;
                    }
                  }
LABEL_83:
                  v153[0] = v147;
                  v153[1] = v148;
                  v46 = v149;
                  *((uint32_t *)v72 + 7) = v93;
                  *((uint32_t *)v72 + 9) = (uint32_t)(uintptr_t)(v91);
                  v153[2] = v46;
                  v47 = (int)(uintptr_t)(v150);
                  *((uint32_t *)v72 + 6) = v85;
                  v153[3] = v47;
                  *((uint32_t *)v72 + 8) = v78;
                  v152[2] = v81;
                  v151[0] = *v95;
                  v151[1] = v95[1];
                  v151[2] = v95[2];
                  v48 = v95[3];
                  v152[0] = v75;
                  v152[1] = v102;
                  v152[3] = (int)(uintptr_t)(v87);
                  v151[3] = v48;
                  g4_std::copy_backward_glwebtools_Json_Reader_E_f2c95d(v145, v151, v152, v153);
                  v49 = v95[1];
                  v50 = (int *)v95[3];
                  v143 = v95[2];
                  v51 = v96 - 858993459 * ((*v95 - v49) >> 2);
                  if ( v51 < 0 )
                  {
                    v71 = ~(~v51 / 0x19u);
                  }
                  else
                  {
                    if ( v51 <= 24 )
                    {
                      v52 = *v95 + 20 * v96;
LABEL_86:
                      v154[1] = v49;
                      v154[3] = (uint32_t)(uintptr_t)(v50);
                      v154[2] = v143;
                      v154[0] = v52;
                      g4_std::fill_glwebtools_Json_Reader_E_d2da25((int)(uintptr_t)(v95), v154, (uint32_t *)(&v155));
                      goto LABEL_104;
                    }
                    v71 = v51 / 25;
                  }
                  v50 += v71;
                  v49 = *v50;
                  v143 = *v50 + 500;
                  v52 = *v50 + 20 * (v51 - 25 * v71);
                  goto LABEL_86;
                }
                v70 = v42 / 25;
              }
              v87 = (int *)(4 * v70 + *((uint32_t *)v4 + 9));
              v102 = *v87;
              v81 = *v87 + 500;
              v75 = *v87 + 20 * (v42 - 25 * v70);
              goto LABEL_75;
            }
            v110 = *((uint32_t **)v4 + 6);
            v57 = v96 - 858993459 * ((v40 - v41) >> 2);
            if ( v57 < 0 )
            {
              v67 = ~(~v57 / 0x19u);
            }
            else
            {
              if ( v57 <= 24 )
              {
                v58 = 5 * v96;
                v98 = v114;
                v59 = v40 + 4 * v58;
                v124 = v140;
LABEL_109:
                v133 = *((uint32_t **)v4 + 8);
                v82 = (uint32_t *)v40;
                v103 = *((uint32_t *)v4 + 9);
                v60 = *((uint32_t **)v4 + 6);
                v88 = (uint32_t *)v59;
                v76 = v4;
                while ( 1 )
                {
                  v61 = v88;
                  do
                  {
                    if ( v60 == v88 )
                    {
                      v62 = v82;
                      while ( v110 != v62 )
                      {
                        while ( 1 )
                        {
                          if ( v61 != nullptr )
                          {
                            *v61 = *v62;
                            v61[1] = v62[1];
                            v61[2] = v62[2];
                            g4_std::string::construct_copy(v61 + 3, v62 + 3);
                            v61[4] = v62[4];
                          }
                          v62 += 5;
                          if ( v62 == (uint32_t *)v140 )
                          {
                            v62 = (uint32_t *)v114[1];
                            ++v114;
                            v140 = (unsigned int)(uintptr_t)(v62 + 125);
                          }
                          v61 += 5;
                          if ( (uint32_t *)v124 != v61 )
                            break;
                          v61 = (uint32_t *)v98[1];
                          ++v98;
                          v124 = (int)(uintptr_t)(v61 + 125);
                          if ( v110 == v62 )
                            goto LABEL_124;
                        }
                      }
LABEL_124:
                      *((uint32_t *)v76 + 6) = v85;
                      *((uint32_t *)v76 + 7) = v93;
                      *((uint32_t *)v76 + 8) = v78;
                      *((uint32_t *)v76 + 9) = (uint32_t)(uintptr_t)(v91);
                      g4_std::fill_glwebtools_Json_Reader_E_d2da25((int)(uintptr_t)(v95), (uint32_t *)(&v147), (uint32_t *)(&v155));
                      goto LABEL_104;
                    }
                    if ( v60 != nullptr )
                    {
                      *v60 = v155;
                      v60[1] = v156;
                      v60[2] = v157;
                      g4_std::string::construct_copy(v60 + 3, &v158);
                      v60[4] = v159;
                    }
                    v60 += 5;
                  }
                  while ( v133 != v60 );
                  v60 = *(uint32_t **)(v103 + 4);
                  v103 += 4;
                  v133 = v60 + 125;
                }
              }
              v67 = v57 / 25;
            }
            v98 = &v114[v67];
            v124 = *v98 + 500;
            v59 = *v98 + 20 * (v57 - 25 * v67);
            goto LABEL_109;
          }
          v37 = v36 / 25;
        }
        v91 = &v33[v37];
        v93 = *v91;
        v78 = *v91 + 500;
        v85 = *v91 + 20 * (v101 - 25 * v37);
        goto LABEL_68;
      }
      for ( i = v4; ; v33 = *((int **)i + 9) )
      {
        v35 = &v33[v34++];
        *v35 = opNew(0x1F4u);
        if ( v141 < v34 )
          break;
      }
      v4 = i;
      v31 = *((uint32_t *)i + 6);
      v140 = *((uint32_t *)i + 8);
    }
    v33 = *((int **)v4 + 9);
    goto LABEL_64;
  }
  v7 = *((uint32_t *)v4 + 2);
  v126 = *((uint32_t *)v4 + 3);
  v8 = -858993459 * ((v7 - v126) >> 2);
  v134 = v8;
  if ( v96 > v8 )
  {
    v9 = *((int **)v4 + 5);
    if ( v96 - v8 > 214748364
                  - (-858993459 * ((*((uint32_t *)v4 + 4) - v7) >> 2)
                   + 5 * (5 * ((*((uint32_t *)v4 + 9) - (int)(uintptr_t)(v9)) >> 2) - 5)
                   - 858993459 * ((*((uint32_t *)v4 + 6) - *((uint32_t *)v4 + 7)) >> 2)) )
      sub_1900180("deque::_M_new_elements_at_front");
    v10 = (v96 - v8 + 24) / 0x19;
    v135 = v10;
    if ( v10 > ((int)(uintptr_t)(v9) - *(uint32_t *)v4) >> 2 )
    {
      g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(v4, v10, true);
      v9 = *((int **)v4 + 5);
    }
    v11 = 2;
    if ( v135 == 0 )
    {
      v126 = *((uint32_t *)v4 + 3);
      v7 = *((uint32_t *)v4 + 2);
      v134 = -858993459 * ((v7 - v126) >> 2);
      goto LABEL_12;
    }
    while ( 1 )
    {
      v9[-v11 + 1] = opNew(0x1F4u);
      if ( v135 < v11 )
        break;
      ++v11;
      v9 = *((int **)v4 + 5);
    }
    v7 = *((uint32_t *)v4 + 2);
    v126 = *((uint32_t *)v4 + 3);
    v134 = -858993459 * ((v7 - v126) >> 2);
  }
  v9 = *((int **)v4 + 5);
LABEL_12:
  v104 = *((uint32_t *)v4 + 4);
  v117 = v134 - v96;
  if ( (int)(v134 - v96) < 0 )
    goto LABEL_145;
  if ( (int)(v134 - v96) <= 24 )
  {
    v79 = v7 - 20 * v96;
    v99 = v9;
    v83 = *((uint32_t *)v4 + 4);
    v89 = v126;
    goto LABEL_17;
  }
  if ( v117 <= 0 )
LABEL_145:
    v12 = ~(~v117 / 0x19u);
  else
    v12 = v117 / 25;
  v99 = &v9[v12];
  v89 = *v99;
  v83 = *v99 + 500;
  v79 = *v99 + 20 * (v117 - 25 * v12);
LABEL_17:
  v148 = v126;
  v13 = (int)(v134 + v111) < 0;
  v14 = v134 + v111;
  v147 = v7;
  v149 = v104;
  v150 = v9;
  v136 = v134 + v111;
  if ( v13 )
    goto LABEL_144;
  if ( v14 <= 24 )
  {
    v118 = v7 + 20 * v111;
    v15 = v126;
    goto LABEL_20;
  }
  if ( v136 <= 0 )
LABEL_144:
    v66 = ~(~v136 / 0x19u);
  else
    v66 = v136 / 25;
  v9 += v66;
  v15 = *v9;
  v104 = *v9 + 500;
  v118 = *v9 + 20 * (v136 - 25 * v66);
LABEL_20:
  v95[1] = v15;
  v95[3] = (int)(uintptr_t)(v9);
  *v95 = v118;
  v95[2] = v104;
  v16 = *((uint32_t **)v4 + 2);
  if ( v111 < v96 )
  {
    v97 = *((uint32_t **)v4 + 2);
    v116 = *((uint32_t **)v4 + 4);
    v144 = v83;
    v94 = v4;
    v109 = *((uint32_t *)v4 + 5);
    v132 = v99;
    v53 = (uint32_t *)v79;
    while ( v16 != (uint32_t *)v118 )
    {
      while ( 1 )
      {
        if ( v53 != nullptr )
        {
          *v53 = *v16;
          v53[1] = v16[1];
          v53[2] = v16[2];
          g4_std::string::construct_copy(v53 + 3, v16 + 3);
          v53[4] = v16[4];
        }
        v16 += 5;
        if ( v16 == v116 )
        {
          v16 = *(uint32_t **)(v109 + 4);
          v109 += 4;
          v116 = v16 + 125;
        }
        v53 += 5;
        if ( (uint32_t *)v144 != v53 )
          break;
        v53 = (uint32_t *)v132[1];
        ++v132;
        v144 = (unsigned int)(uintptr_t)(v53 + 125);
        if ( v16 == (uint32_t *)v118 )
          goto LABEL_97;
      }
    }
LABEL_97:
    v54 = v53;
    while ( v97 != v54 )
    {
      if ( v54 != nullptr )
      {
        *v54 = v155;
        v54[1] = v156;
        v54[2] = v157;
        g4_std::string::construct_copy(v54 + 3, &v158);
        v54[4] = v159;
      }
      v54 += 5;
      if ( (uint32_t *)v144 == v54 )
      {
        v54 = (uint32_t *)v132[1];
        ++v132;
        v144 = (unsigned int)(uintptr_t)(v54 + 125);
      }
    }
    *((uint32_t *)v94 + 2) = v79;
    *((uint32_t *)v94 + 3) = v89;
    *((uint32_t *)v94 + 4) = v83;
    *((uint32_t *)v94 + 5) = (uint32_t)(uintptr_t)(v99);
    g4_std::fill_glwebtools_Json_Reader_E_d2da25((int)(uintptr_t)(&v147), (uint32_t *)(v95), (uint32_t *)(&v155));
    goto LABEL_104;
  }
  v92 = *((uint32_t *)v4 + 3);
  v137 = *((uint32_t *)v4 + 4);
  v112 = *((uint32_t *)v4 + 5);
  v17 = -858993459 * (((int)(uintptr_t)(v16) - v92) >> 2) + v96;
  if ( v17 < 0 )
  {
    v68 = ~(~v17 / 0x19u);
  }
  else
  {
    if ( v17 <= 24 )
    {
      v86 = *((int **)v4 + 5);
      v77 = *((uint32_t *)v4 + 4);
      v119 = (int)(uintptr_t)(&v16[5 * v96]);
      goto LABEL_24;
    }
    v68 = v17 / 25;
  }
  v86 = (int *)(4 * v68 + v112);
  v92 = *v86;
  v77 = *v86 + 500;
  v119 = *v86 + 20 * (v17 - 25 * v68);
LABEL_24:
  v105 = v99;
  v73 = v4;
  v127 = (uint32_t *)v83;
  v18 = (uint32_t *)v79;
  while ( v16 != (uint32_t *)v119 )
  {
    while ( 1 )
    {
      if ( v18 != nullptr )
      {
        *v18 = *v16;
        v18[1] = v16[1];
        v18[2] = v16[2];
        g4_std::string::construct_copy(v18 + 3, v16 + 3);
        v18[4] = v16[4];
      }
      v16 += 5;
      if ( v16 == (uint32_t *)v137 )
      {
        v16 = *(uint32_t **)(v112 + 4);
        v137 = (unsigned int)(uintptr_t)(v16 + 125);
        v112 += 4;
      }
      v18 += 5;
      if ( v127 != v18 )
        break;
      v18 = (uint32_t *)v105[1];
      ++v105;
      v127 = v18 + 125;
      if ( v16 == (uint32_t *)v119 )
        goto LABEL_32;
    }
  }
LABEL_32:
  *((uint32_t *)v73 + 2) = v79;
  *((uint32_t *)v73 + 3) = v89;
  *((uint32_t *)v73 + 4) = v83;
  *((uint32_t *)v73 + 5) = (uint32_t)(uintptr_t)(v99);
  v106 = v147;
  v90 = v148;
  v74 = v149;
  v84 = v150;
  v128 = *v95;
  v19 = v95[1];
  v138 = (int *)v95[3];
  v20 = -858993459 * ((*v95 - v19) >> 2);
  v113 = 5 * (5 * (v138 - v86) - 5) - 858993459 * ((*v95 - v19) >> 2) - 858993459 * ((v77 - (int)(uintptr_t)(v16)) >> 2);
  if ( v113 <= 0 )
    goto LABEL_50;
  v120 = (int)(uintptr_t)(v16);
  do
  {
    v21 = -858993459 * ((v77 - v120) >> 2);
    if ( -858993459 * ((v74 - v106) >> 2) <= v21 )
      v21 = -858993459 * ((v74 - v106) >> 2);
    if ( v21 > v113 )
      v21 = v113;
    v129 = v21;
    v100 = 20 * v21;
    v80 = 20 * v21 + v120;
    v139 = -858993459 * ((20 * v21) >> 2);
    if ( v139 > 0 )
    {
      v22 = (uint32_t *)v120;
      v23 = (uint32_t *)v106;
      do
      {
        *v23 = *v22;
        v23[1] = v22[1];
        v23[2] = v22[2];
        g4_std::string::assign_str(v23 + 3, v22 + 3);
        v24 = v139-- == 1;
        v23[4] = v22[4];
        v22 += 5;
        v23 += 5;
      }
      while ( !v24 );
    }
    v25 = v129 - 858993459 * ((v120 - v92) >> 2);
    if ( v25 < 0 )
    {
      v26 = ~(~v25 / 0x19u);
    }
    else
    {
      v120 = v80;
      if ( v25 <= 24 )
        goto LABEL_45;
      v26 = v25 / 25;
    }
    v86 += v26;
    v92 = *v86;
    v77 = *v86 + 500;
    v120 = *v86 + 20 * (v25 - 25 * v26);
LABEL_45:
    v27 = v129 - 858993459 * ((v106 - v90) >> 2);
    if ( v27 < 0 )
    {
      v63 = ~(~v27 / 0x19u);
    }
    else
    {
      if ( v27 <= 24 )
      {
        v106 += v100;
        goto LABEL_48;
      }
      v63 = v27 / 25;
    }
    v84 += v63;
    v90 = *v84;
    v74 = *v84 + 500;
    v106 = *v84 + 20 * (v27 - 25 * v63);
LABEL_48:
    v113 -= v129;
  }
  while ( v113 > 0 );
  v19 = v95[1];
  v138 = (int *)v95[3];
  v128 = *v95;
  v20 = -858993459 * ((*v95 - v19) >> 2);
LABEL_50:
  v28 = v20 - v96;
  v29 = v95[2];
  if ( v28 < 0 )
  {
    v69 = ~(~v28 / 0x19u);
  }
  else
  {
    if ( v28 <= 24 )
    {
      v30 = v128 - 20 * v96;
      goto LABEL_53;
    }
    v69 = v28 / 25;
  }
  v138 += v69;
  v19 = *v138;
  v29 = *v138 + 500;
  v30 = *v138 + 20 * (v28 - 25 * v69);
LABEL_53:
  v146[1] = v19;
  v146[0] = v30;
  v146[2] = v29;
  v146[3] = (uint32_t)(uintptr_t)(v138);
  g4_std::fill_glwebtools_Json_Reader_E_d2da25((int)(uintptr_t)(v146), (uint32_t *)(v95), (uint32_t *)(&v155));
LABEL_104:
  result = v158;
  v56 = (void *)(v158 - 12);
  if ( (uint32_t *)(v158 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v158 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v56)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1403A50  (binary VA: 0x1403a50)
// Original: sub_1403A50
// ----------------------------------------------------------------------------
int ** sub_1403A50()
{
  sub_1900D70(&unk_21197EC);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21197EC, &unk_20D1280);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(&glwebtools::Json::Value::null_value), nullptr);
  __cxa_atexit((void (*)(void *))glwebtools::Json::Value::Destroy, &glwebtools::Json::Value::null_value, &unk_20D1280);
  return sub_13F5A90();
}

// ----------------------------------------------------------------------------
// Function: sub_14056C0  (binary VA: 0x14056c0)
// Original: sub_14056C0
// ----------------------------------------------------------------------------
int sub_14056C0()
{
  dword_2119800 = 0;
  dword_21197FC = (int)((uint32_t)(uintptr_t)&off_2094CE0);
  return __cxa_atexit((void (*)(void *))glwebtools::Atomic_int_id_7c2220::Destroy, &dword_21197FC, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_glwebtools_ServerSideEve_87f268::M_push_back_aux  (binary VA: 0x1406cb0)
// Original: std::deque<glwebtools::ServerSideEvent>::_M_push_back_aux
// ----------------------------------------------------------------------------
int g4_std::deque_glwebtools_ServerSideEve_87f268::M_push_back_aux(std::deque<glwebtools::ServerSideEvent::Self> *self, const glwebtools::ServerSideEvent::Self *a2)
{
  char *v2;
  int v3;
  unsigned int v4;
  int v5;
  int *v6;
  int result;
  int v8;
  int *dest;
  int v10;
  unsigned int v11;
  int v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int *v20;
  int *v21;
  void *v22;
  int v23;
  int v24;
  int *src;
  void *v26;
  int v27;

  v2 = *((char **)self + 9);
  v3 = *(uint32_t *)self;
  v4 = *((uint32_t *)self + 1);
  if ( v4 - ((int)(uintptr_t)(&v2[-*(uint32_t *)self]) >> 2) <= 1 )
  {
    src = *((int **)self + 5);
    v27 = ((v2 - (char *)src) >> 2) + 1;
    v18 = ((v2 - (char *)src) >> 2) + 2;
    if ( v4 <= 2 * v18 )
    {
      v11 = 3;
      if ( v4 != 0 )
      {
        v11 = 2 * v4 + 2;
        if ( v11 > 0x3FFFFFFF )
          sub_18FFEE0(v3, 2 * v18);
      }
      v12 = opNew(4 * v11);
      v13 = (void *)(v12 + 4 * ((v11 - v18) >> 1));
      v26 = *((void **)self + 5);
      v14 = (*((uint32_t *)self + 9) + 4 - (int)(uintptr_t)(v26)) >> 2;
      if ( v14 != 0 )
      {
        v22 = (void *)(v12 + 4 * ((v11 - v18) >> 1));
        v24 = v12;
        memmove(v13, v26, 4 * v14);
        v12 = v24;
        v13 = v22;
      }
      v20 = (int *)v13;
      v23 = v12;
      opDelete(*(void **)self);
      *((uint32_t *)self + 1) = v11;
      *(uint32_t *)self = v23;
      dest = v20;
    }
    else
    {
      v8 = v2 + 4 - (char *)src;
      dest = (int *)(v3 + 4 * ((v4 - v18) >> 1));
      if ( src <= dest )
      {
        v17 = v8 >> 2;
        if ( v17 != 0 )
        {
          v21 = (int *)(v3 + 4 * ((v4 - v18) >> 1));
          memmove(&dest[v27 - v17], src, 4 * v17);
          dest = v21;
        }
      }
      else
      {
        v10 = v8 >> 2;
        if ( v10 != 0 )
        {
          v19 = (int *)(v3 + 4 * ((v4 - v18) >> 1));
          memmove(dest, src, 4 * v10);
          dest = v19;
        }
      }
    }
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(dest);
    v15 = *dest;
    *((uint32_t *)self + 3) = *dest;
    *((uint32_t *)self + 4) = v15 + 512;
    v2 = (char *)&dest[v27 - 1];
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v2);
    v16 = *(uint32_t *)v2;
    *((uint32_t *)self + 7) = *(uint32_t *)v2;
    *((uint32_t *)self + 8) = v16 + 512;
  }
  *((uint32_t *)v2 + 1) = opNew(0x200u);
  v5 = *((uint32_t *)self + 6);
  if ( v5 != 0 )
  {
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v5, a2);
    *(uint8_t *)(v5 + 6) = *((uint8_t *)a2 + 6);
    *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v5 + 8, (char *)a2 + 8);
    *(uint8_t *)(v5 + 14) = *((uint8_t *)a2 + 14);
    *(uint32_t *)(v5 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v5 + 16, (char *)a2 + 16);
    *(uint8_t *)(v5 + 22) = *((uint8_t *)a2 + 22);
    *(uint32_t *)(v5 + 24) = *((uint32_t *)a2 + 6);
    *(uint8_t *)(v5 + 30) = *((uint8_t *)a2 + 30);
  }
  v6 = (int *)(*((uint32_t *)self + 9) + 4);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v6);
  result = *v6;
  *((uint32_t *)self + 7) = *v6;
  *((uint32_t *)self + 6) = result;
  *((uint32_t *)self + 8) = result + 512;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_glwebtools_ServerSideEve_670e48::M_insert_aux  (binary VA: 0x1407a50)
// Original: std::vector<glwebtools::ServerSideEventParser::Field>::_M_insert_aux
// ----------------------------------------------------------------------------
uint32_t * g4_std::vector_glwebtools_ServerSideEve_670e48::M_insert_aux(void **a1, char *a2, int a3)
{
  void **v3;
  char *v4;
  uint8_t *v5;
  char *v6;
  int v7;
  int v8;
  uint32_t *result;
  void *v10;
  void *v11;
  uint8_t *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef void **_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void **_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v30)) > _g4_s4 ? (8u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v31)) > _g4_s5 ? (8u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v32)) > _g4_s6 ? (12u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v33)) > _g4_s7 ? (16u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v34)) > _g4_s8 ? (20u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v36)) > _g4_s10 ? (40u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v37)) > _g4_s11 ? (44u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);

  v3 = a1;
  v4 = a2;
  v5 = (uint8_t *)(a1[1]);
  if ( v5 != a1[2] )
  {
    v6 = nullptr;
    if ( v5 != nullptr )
    {
      g4_std::string::construct_copy(a1[1], v5 - 8);
      g4_std::string::construct_copy(v5 + 4, v5 - 4);
      v6 = (char *)a1[1];
    }
    a1[1] = v6 + 8;
    g4_std::string::construct_copy(&v36, a3);
    g4_std::string::construct_copy(v37, a3 + 4);
    v7 = (int)(uintptr_t)(a1[1]) - 16;
    v8 = (v7 - (int)(uintptr_t)(a2)) >> 3;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        g4_std::string::assign_str(v7, v7 - 8);
        g4_std::string::assign_str(v7 + 4, v7 - 4);
        if ( --v8 == 0 )
          break;
        v7 -= 8;
      }
      v4 = a2;
    }
    g4_std::string::assign_str(v4, &v36);
    g4_std::string::assign_str(v4 + 4, v37);
    result = dword_213B808;
    v10 = (void *)(v37[0] - 12);
    if ( (uint32_t *)(v37[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
      result = dword_213B808;
    }
    v11 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808 )
    {
      result = (uint32_t *)__sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF);
      if ( (int)(uintptr_t)(result) <= 0 )
        return (g4_std::string::Rep::M_destroy(v11), (uint32_t *)0);
    }
    return result;
  }
  v12 = (uint8_t *)(*a1);
  v13 = (v5 - (uint8_t *)*a1) >> 3;
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x1FFFFFFF )
    {
      v34 = -8;
      v15 = (a2 - (char *)(v12)) >> 3;
    }
    else
    {
      v15 = (a2 - (char *)(v12)) >> 3;
      v34 = 16 * v13;
      if ( v14 == 0 )
      {
        v16 = 8;
        v33 = 0;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v34 = 8;
    v15 = (a2 - (char *)(v12)) >> 3;
  }
  v26 = v15;
  v33 = opNew(v34);
  v16 = v33 + 8;
  v15 = v26;
LABEL_16:
  v17 = v33 + 8 * v15;
  if ( v17 != 0 )
  {
    v27 = v33 + 8 * v15;
    g4_std::string::construct_copy(v17, a3);
    g4_std::string::construct_copy(v27 + 4, a3 + 4);
  }
  if ( *a1 != a2 )
  {
    v18 = v33;
    v19 = (char *)*a1;
    do
    {
      if ( v18 != 0 )
      {
        g4_std::string::construct_copy(v18, v19);
        g4_std::string::construct_copy(v18 + 4, v19 + 4);
      }
      v19 += 8;
      v18 += 8;
    }
    while ( v19 != a2 );
    v3 = a1;
    v16 = v18 + 8;
  }
  v32 = (char *)v3[1];
  if ( v32 != a2 )
  {
    v30 = v3;
    v20 = (char *)v3[1];
    do
    {
      if ( v16 != 0 )
      {
        g4_std::string::construct_copy(v16, v4);
        g4_std::string::construct_copy(v16 + 4, v4 + 4);
      }
      v4 += 8;
      v16 += 8;
    }
    while ( v20 != v4 );
    v3 = v30;
    v32 = (char *)v30[1];
  }
  v31 = (char *)*v3;
  if ( *v3 != v32 )
  {
    v21 = (char *)*v3;
    v35 = v3;
    v22 = dword_213B808;
    v23 = (int)(uintptr_t)(*v3) + 4;
    do
    {
      v24 = *(uint32_t *)(v23 + v21 - v31);
      if ( (uint32_t *)(v24 - 12) != v22 && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        v28 = v22;
        g4_std::string::Rep::M_destroy((void *)(v24 - 12));
        v22 = v28;
      }
      v25 = (uint32_t *)(*(uint32_t *)v21 - 12);
      if ( v25 != v22 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        v29 = v22;
        g4_std::string::Rep::M_destroy(v25);
        v22 = v29;
      }
      v21 += 8;
    }
    while ( v21 != v32 );
    v3 = v35;
    v31 = (char *)*v35;
  }
  if ( v31 != nullptr )
    opDelete(v31);
  v3[1] = (void *)v16;
  *v3 = (void *)v33;
  v3[2] = (void *)(v34 + v33);
  return (uint32_t *)(v34 + v33);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSAchievement_e77c94::Destroy  (binary VA: 0x14133a0)
// Original: std::vector<sociallib::SNSAchievementData>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_sociallib_SNSAchievement_e77c94::Destroy(std::vector<sociallib::SNSAchievementData::Self> *self)
{
  int v1;
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint8_t *v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v1 = *(uint32_t *)self;
  v18 = *((char **)self + 1);
  v17 = *(uint8_t **)self;
  if ( v18 != *(char **)self )
  {
    v2 = *(char **)self;
    v20 = v1 + 56;
    v19 = v1 + 52;
    v30 = v1 + 48;
    v29 = v1 + 44;
    v28 = v1 + 40;
    v27 = v1 + 36;
    v26 = v1 + 32;
    v25 = v1 + 28;
    v24 = v1 + 24;
    v23 = v1 + 20;
    v22 = v1 + 8;
    v21 = v1 + 4;
    do
    {
      v3 = v2 - (char *)(v17);
      v4 = *(uint32_t *)(v2 - (char *)(v17) + v20);
      if ( (uint32_t *)(v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
      }
      v5 = *(uint32_t *)(v3 + v19);
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      v6 = *(uint32_t *)(v3 + v30);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v6 - 12));
      }
      v7 = *(uint32_t *)(v3 + v29);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
      }
      v8 = *(uint32_t *)(v3 + v28);
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
      }
      v9 = *(uint32_t *)(v3 + v27);
      if ( (uint32_t *)(v9 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v9 - 12));
      }
      v10 = *(uint32_t *)(v3 + v26);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
      }
      v11 = *(uint32_t *)(v3 + v25);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
      }
      v12 = *(uint32_t *)(v3 + v24);
      if ( (uint32_t *)(v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
      }
      v13 = *(uint32_t *)(v3 + v23);
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v13 - 12));
      }
      v14 = *(uint32_t *)(v3 + v22);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v14 - 12));
      }
      v15 = *(uint32_t *)(v3 + v21);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v15 - 12));
      }
      v16 = (uint32_t *)(*(uint32_t *)v2 - 12);
      if ( v16 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v2 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v16);
      v2 += 68;
    }
    while ( v18 != v2 );
    v17 = *(uint8_t **)self;
  }
  if ( v17 != nullptr )
    opDelete(v17);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSLikeData_4d2cfa::Destroy  (binary VA: 0x1413750)
// Original: std::vector<sociallib::SNSLikeData>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_sociallib_SNSLikeData_4d2cfa::Destroy(std::vector<sociallib::SNSLikeData::Self> *self)
{
  int v1;
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint8_t *v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v1 = *(uint32_t *)self;
  v14 = *((char **)self + 1);
  v13 = *(uint8_t **)self;
  if ( v14 != *(char **)self )
  {
    v2 = *(char **)self;
    v22 = v1 + 36;
    v21 = v1 + 32;
    v20 = v1 + 28;
    v19 = v1 + 24;
    v18 = v1 + 16;
    v17 = v1 + 12;
    v16 = v1 + 8;
    v15 = v1 + 4;
    do
    {
      v3 = v2 - (char *)(v13);
      v4 = *(uint32_t *)(v2 - (char *)(v13) + v22);
      if ( (uint32_t *)(v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
      }
      v5 = *(uint32_t *)(v3 + v21);
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      v6 = *(uint32_t *)(v3 + v20);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v6 - 12));
      }
      v7 = *(uint32_t *)(v3 + v19);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
      }
      v8 = *(uint32_t *)(v3 + v18);
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
      }
      v9 = *(uint32_t *)(v3 + v17);
      if ( (uint32_t *)(v9 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v9 - 12));
      }
      v10 = *(uint32_t *)(v3 + v16);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v10 - 12));
      }
      v11 = *(uint32_t *)(v3 + v15);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
      }
      v12 = (uint32_t *)(*(uint32_t *)v2 - 12);
      if ( v12 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v2 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v12);
      v2 += 52;
    }
    while ( v14 != v2 );
    v13 = *(uint8_t **)self;
  }
  if ( v13 != nullptr )
    opDelete(v13);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::Construct  (binary VA: 0x14139f0)
// Original: std::vector<sociallib::SNSLeaderboardRowData>::vector
// ----------------------------------------------------------------------------
int g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::Construct(std::vector<sociallib::SNSLeaderboardRowData::Self> *self, const std::vector<sociallib::SNSLeaderboardRowData::Self> *a2)
{
  int v2;
  uint32_t *v3;
  int result;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *i;
  int v8;

  v2 = 0;
  v3 = nullptr;
  result = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
  *(uint32_t *)self = 0;
  v5 = 954437177 * result;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( 954437177 * result != 0 )
  {
    if ( v5 > 0x71C71C7 )
      sub_18FFEE0(self, v5);
    v2 = result;
    result = opNew(4 * result);
    v3 = (uint32_t *)result;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&v3[v2]);
  v6 = *((uint32_t **)a2 + 1);
  for ( i = *(uint32_t **)a2; v6 != i; v3 += 9 )
  {
    if ( v3 != nullptr )
    {
      g4_std::string::construct_copy(v3, i);
      g4_std::string::construct_copy(v3 + 1, i + 1);
      v8 = i[3];
      v3[2] = i[2];
      v3[3] = v8;
      v3[4] = i[4];
      g4_std::string::construct_copy(v3 + 5, i + 5);
      g4_std::string::construct_copy(v3 + 6, i + 6);
      g4_std::string::construct_copy(v3 + 7, i + 7);
      result = (int)(uintptr_t)(g4_std::string::construct_copy(v3 + 8, i + 8));
    }
    i += 9;
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSLikeData_4d2cfa::Construct  (binary VA: 0x1413b10)
// Original: std::vector<sociallib::SNSLikeData>::vector
// ----------------------------------------------------------------------------
int g4_std::vector_sociallib_SNSLikeData_4d2cfa::Construct(std::vector<sociallib::SNSLikeData::Self> *self, const std::vector<sociallib::SNSLikeData::Self> *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int i;
  int v9;

  v3 = 0;
  v9 = 0;
  v4 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
  *(uint32_t *)self = 0;
  v5 = -991146299 * v4;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( -991146299 * v4 != 0 )
  {
    if ( v5 > 0x4EC4EC4 )
      sub_18FFEE0(v2, v5);
    v3 = 4 * v4;
    v9 = opNew(4 * v4);
  }
  *(uint32_t *)self = v9;
  *((uint32_t *)self + 1) = v9;
  *((uint32_t *)self + 2) = v9 + v3;
  v6 = *((uint32_t *)a2 + 1);
  for ( i = *(uint32_t *)a2; v6 != i; v9 += 52 )
  {
    if ( v9 != 0 )
    {
      g4_std::string::construct_copy(v9, i);
      g4_std::string::construct_copy(v9 + 4, i + 4);
      g4_std::string::construct_copy(v9 + 8, i + 8);
      g4_std::string::construct_copy(v9 + 12, i + 12);
      g4_std::string::construct_copy(v9 + 16, i + 16);
      *(uint8_t *)(v9 + 20) = *(uint8_t *)(i + 20);
      g4_std::string::construct_copy(v9 + 24, i + 24);
      g4_std::string::construct_copy(v9 + 28, i + 28);
      g4_std::string::construct_copy(v9 + 32, i + 32);
      g4_std::string::construct_copy(v9 + 36, i + 36);
      *(uint32_t *)(v9 + 40) = *(uint32_t *)(i + 40);
      *(uint32_t *)(v9 + 44) = *(uint32_t *)(i + 44);
      *(uint32_t *)(v9 + 48) = *(uint32_t *)(i + 48);
    }
    i += 52;
  }
  *((uint32_t *)self + 1) = v9;
  return v9;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase  (binary VA: 0x1413cb0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
        a1,
        v2[3]);
      v3 = (void **)v2[2];
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v2 + 12));
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(v2 + 5),
        v2[7]);
      g4_std::string::Destroy(v2 + 4);
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_erase  (binary VA: 0x1413f60)
// Original: std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_erase(
        a1,
        v2[3]);
      v3 = (void **)v2[2];
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase  (binary VA: 0x1413fc0)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
        a1,
        v2[3]);
      v3 = (void **)v2[2];
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::set_sociallib_ClientSNSEnum_c5a1e1::Destroy  (binary VA: 0x1414020)
// Original: std::set<sociallib::ClientSNSEnum>::~set
// ----------------------------------------------------------------------------
void g4_std::set_sociallib_ClientSNSEnum_c5a1e1::Destroy(void ***self)
{
  g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
    (int)(uintptr_t)(self),
    *(self + 2));
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_erase  (binary VA: 0x1414050)
// Original: std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_erase(int a1, void *a2)
{
  void *v2;
  void *v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_erase(
        a1,
        *((void **)v2 + 3));
      v3 = *((void **)v2 + 2);
      g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
        (int)(uintptr_t)(v2) + 20,
        *((void ***)v2 + 7));
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_sociallib_SNSInterfaceDe_2a3f71::Destroy  (binary VA: 0x14140c0)
// Original: std::map<sociallib::SNSInterfaceDeviceEnum,std::set<sociallib::ClientSNSEnum>>::~map
// ----------------------------------------------------------------------------
void g4_std::map_sociallib_SNSInterfaceDe_2a3f71::Destroy(void **self)
{
  g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_erase(
    (int)(uintptr_t)(self),
    *(self + 2));
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_erase  (binary VA: 0x14140f0)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (void **)v2[2];
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_sociallib_ClientSNSEnum_b47e82::Destroy  (binary VA: 0x1414150)
// Original: std::map<sociallib::ClientSNSEnum,bool>::~map
// ----------------------------------------------------------------------------
void g4_std::map_sociallib_ClientSNSEnum_b47e82::Destroy(void ***self)
{
  g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_erase(
    (int)(uintptr_t)(self),
    *(self + 2));
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy  (binary VA: 0x1414180)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(int a1, uint32_t *a2, int a3)
{
  int v3;
  int *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v10;

  v10 = (uint32_t *)opNew(0x14u);
  if ( v10 != (uint32_t *)-16 )
    v10[4] = a2[4];
  *v10 = *a2;
  v10[2] = 0;
  v10[3] = 0;
  v10[1] = a3;
  v3 = a2[3];
  if ( v3 != 0 )
    v10[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
               a1,
               v3,
               v10));
  v4 = (int *)a2[2];
  v5 = v10;
  if ( v4 != nullptr )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)opNew(0x14u);
      if ( v6 != (uint32_t *)-16 )
        v6[4] = v4[4];
      v7 = *v4;
      v6[2] = 0;
      *v6 = v7;
      v6[3] = 0;
      v5[2] = (uint32_t)(uintptr_t)(v6);
      v6[1] = (uint32_t)(uintptr_t)(v5);
      v8 = v4[3];
      if ( v8 != 0 )
        v6[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
                  a1,
                  v8,
                  v6));
      v4 = (int *)v4[2];
      if ( v4 == nullptr )
        break;
      v5 = v6;
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_insert  (binary VA: 0x1414270)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,sociallib::ClientSNSEnum,std::_Identity<sociallib::ClientSNSEnum>,std::less<sociallib::ClientSNSEnum>,std::allocator<sociallib::ClientSNSEnum>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_insert(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  char v5; // bp
  int v6;
  int v8;

  v5 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v5 = *a5 < *(uint32_t *)(a4 + 16);
  v6 = opNew(0x14u);
  if ( v6 != -16 )
    *(uint32_t *)(v6 + 16) = *a5;
  v8 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::set_sociallib_ClientSNSEnum_c5a1e1::insert  (binary VA: 0x1414320)
// Original: std::set<sociallib::ClientSNSEnum>::insert
// ----------------------------------------------------------------------------
int g4_std::set_sociallib_ClientSNSEnum_c5a1e1::insert(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  int v7;
  char v8; // bp
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 <= v4 )
      break;
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v10 = (int)(uintptr_t)(v3);
  if ( v6 == 0 )
  {
    v8 = 0;
    if ( v7 >= v4 )
      goto LABEL_9;
LABEL_13:
    v8 = 1;
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_insert(
      v11,
      a2,
      0,
      v10,
      a3);
    v3 = (uint32_t *)v11[0];
    goto LABEL_9;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v3 )
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_insert(
      v11,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    v8 = 1;
    v3 = (uint32_t *)v11[0];
    goto LABEL_9;
  }
  v8 = 0;
  v10 = (int)(uintptr_t)(v3);
  v3 = (uint32_t *)sub_19048F0(v3);
  if ( v3[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  *(uint8_t *)(a1 + 4) = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_586eb0::M_copy  (binary VA: 0x1414440)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_copy
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_586eb0::M_copy(int a1, int a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *i;
  int v12;
  int v13;
  int v15;

  v15 = opNew(0x44u);
  if ( v15 != -16 )
  {
    g4_std::string::construct_copy(v15 + 16, a2 + 16);
    *(uint32_t *)(v15 + 24) = 0;
    *(uint32_t *)(v15 + 28) = 0;
    *(uint32_t *)(v15 + 40) = 0;
    *(uint32_t *)(v15 + 32) = v15 + 24;
    *(uint32_t *)(v15 + 36) = v15 + 24;
    if ( *(uint32_t *)(a2 + 28) != 0 )
    {
      v3 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             v15 + 20,
             *(uint32_t **)(a2 + 28),
             v15 + 24);
      v4 = v3;
      *(uint32_t *)(v15 + 28) = (uint32_t)(uintptr_t)(v3);
      while ( v4[2] != 0 )
        v4 = (uint32_t *)v4[2];
      *(uint32_t *)(v15 + 32) = (uint32_t)(uintptr_t)(v4);
      while ( v3[3] != 0 )
        v3 = (uint32_t *)v3[3];
      *(uint32_t *)(v15 + 36) = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(v15 + 40) = *(uint32_t *)(a2 + 40);
    }
    *(uint8_t *)(v15 + 44) = *(uint8_t *)(a2 + 44);
    sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
      (sociallib::CDynamicMemoryStream::Self *)(v15 + 48),
      (const sociallib::CDynamicMemoryStream::Self *)(a2 + 48));
  }
  *(uint32_t *)v15 = *(uint32_t *)a2;
  *(uint32_t *)(v15 + 8) = 0;
  *(uint32_t *)(v15 + 12) = 0;
  *(uint32_t *)(v15 + 4) = a3;
  v5 = *(uint32_t *)(a2 + 12);
  if ( v5 != 0 )
    *(uint32_t *)(v15 + 12) = g4_std::Rb_tree_string_pair_string_const_586eb0::M_copy(
                              a1,
                              v5,
                              v15);
  v6 = *(int **)(a2 + 8);
  v7 = v15;
  if ( v6 != nullptr )
  {
    while ( 1 )
    {
      v8 = opNew(0x44u);
      if ( v8 != -16 )
      {
        g4_std::string::construct_copy(v8 + 16, v6 + 4);
        *(uint32_t *)(v8 + 24) = 0;
        *(uint32_t *)(v8 + 28) = 0;
        *(uint32_t *)(v8 + 40) = 0;
        *(uint32_t *)(v8 + 32) = v8 + 24;
        *(uint32_t *)(v8 + 36) = v8 + 24;
        v9 = (uint32_t *)v6[7];
        if ( v9 != nullptr )
        {
          v10 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                  v8 + 20,
                  v9,
                  v8 + 24);
          *(uint32_t *)(v8 + 28) = (uint32_t)(uintptr_t)(v10);
          for ( i = v10; i[2] != 0; i = (uint32_t *)i[2] )
            ;
          *(uint32_t *)(v8 + 32) = (uint32_t)(uintptr_t)(i);
          while ( v10[3] != 0 )
            v10 = (uint32_t *)v10[3];
          *(uint32_t *)(v8 + 36) = (uint32_t)(uintptr_t)(v10);
          *(uint32_t *)(v8 + 40) = v6[10];
        }
        *(uint8_t *)(v8 + 44) = *((uint8_t *)v6 + 44);
        sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
          (sociallib::CDynamicMemoryStream::Self *)(v8 + 48),
          (const sociallib::CDynamicMemoryStream::Self *)(v6 + 12));
      }
      v12 = *v6;
      *(uint32_t *)(v8 + 8) = 0;
      *(uint32_t *)v8 = v12;
      *(uint32_t *)(v8 + 12) = 0;
      *(uint32_t *)(v7 + 8) = v8;
      *(uint32_t *)(v8 + 4) = v7;
      v13 = v6[3];
      if ( v13 != 0 )
        *(uint32_t *)(v8 + 12) = g4_std::Rb_tree_string_pair_string_const_586eb0::M_copy(
                                 a1,
                                 v13,
                                 v8);
      v6 = (int *)v6[2];
      if ( v6 == nullptr )
        break;
      v7 = v8;
    }
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert  (binary VA: 0x1414670)
// Original: std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_insert_
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(uint32_t *a1, int a2, int a3, int a4, int *a5)
{
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *i;
  char v11;

  v11 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v11 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = (uint32_t *)opNew(0x2Cu);
  if ( v5 != (uint32_t *)-16 )
  {
    v6 = *a5;
    v5[6] = 0;
    v5[4] = v6;
    v5[7] = 0;
    v5[10] = 0;
    v5[8] = (uint32_t)(uintptr_t)(v5 + 6);
    v5[9] = (uint32_t)(uintptr_t)(v5 + 6);
    v7 = (uint32_t *)a5[3];
    if ( v7 != nullptr )
    {
      v8 = g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
             (int)(uintptr_t)(v5 + 5),
             v7,
             (int)(uintptr_t)(v5 + 6));
      v5[7] = (uint32_t)(uintptr_t)(v8);
      for ( i = v8; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      v5[8] = (uint32_t)(uintptr_t)(i);
      while ( v8[3] != 0 )
        v8 = (uint32_t *)v8[3];
      v5[9] = (uint32_t)(uintptr_t)(v8);
      v5[10] = a5[6];
    }
  }
  sub_1904970(v11, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique  (binary VA: 0x1414780)
// Original: std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  uint32_t v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( v7[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique  (binary VA: 0x1414860)
// Original: std::_Rb_tree<sociallib::SNSInterfaceDeviceEnum,std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>,std::_Select1st<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>,std::less<sociallib::SNSInterfaceDeviceEnum>,std::allocator<std::pair<sociallib::SNSInterfaceDeviceEnum const,std::set<sociallib::ClientSNSEnum>>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        v5,
        v5,
        a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(
          (uint32_t *)(a1),
          (int)(uintptr_t)(a2),
          a3,
          a3,
          a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        0,
        v6,
        v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      v8,
      v8,
      a4);
  else
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_sociallib_SNSInterfaceDe_2a3f71::opIndex  (binary VA: 0x14149f0)
// Original: std::map<sociallib::SNSInterfaceDeviceEnum,std::set<sociallib::ClientSNSEnum>>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_sociallib_SNSInterfaceDe_2a3f71::opIndex(uint32_t *a1, int *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  typedef int _g4_t_v6[4];
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int *_g4_t_v10;
  typedef int *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v9)) > _g4_s3 ? (36u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v12)) > _g4_s6 ? (48u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v13)) > _g4_s7 ? (52u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v14)) > _g4_s8 ? (56u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v15)) > _g4_s9 ? (60u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v16)) > _g4_s10 ? (64u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v17)) > _g4_s11 ? (68u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v18)) > _g4_s12 ? (72u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v19)) > _g4_s13 ? (76u + sizeof(_g4_t_v19)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);

  v2 = (uint32_t *)a1[2];
  if ( v2 == nullptr )
  {
    v4 = (int)(uintptr_t)(a1 + 1);
    v3 = *a2;
LABEL_8:
    v10 = &v8;
    v11 = &v8;
    v13 = v3;
    v17 = &v15;
    v18 = &v15;
    v8 = 0;
    v9 = nullptr;
    v12 = 0;
    v15 = 0;
    v16 = nullptr;
    v19 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(
      v6,
      a1,
      v4,
      &v13);
    v4 = v6[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v14),
      (void **)v16);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v7),
      (void **)v9);
    return v4 + 20;
  }
  v3 = *a2;
  v4 = (int)(uintptr_t)(a1 + 1);
  do
  {
    while ( v3 <= v2[4] )
    {
      v4 = (int)(uintptr_t)(v2);
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( a1 + 1 == (uint32_t *)v4 || v3 < *(uint32_t *)(v4 + 16) )
    goto LABEL_8;
  return v4 + 20;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert  (binary VA: 0x1414af0)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(int *a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v8;
  int v9;

  v8 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v8 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x18u);
  if ( v5 != -16 )
  {
    v6 = *a5;
    *(uint32_t *)(v5 + 20) = a5[1];
    *(uint32_t *)(v5 + 16) = v6;
  }
  v9 = v5;
  sub_1904970(v8, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique  (binary VA: 0x1414bb0)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( v7[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique  (binary VA: 0x1414c90)
// Original: std::_Rb_tree<sociallib::ClientSNSEnum,std::pair<sociallib::ClientSNSEnum const,bool>,std::_Select1st<std::pair<sociallib::ClientSNSEnum const,bool>>,std::less<sociallib::ClientSNSEnum>,std::allocator<std::pair<sociallib::ClientSNSEnum const,bool>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      a4);
  else
    g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert  (binary VA: 0x1414e20)
// Original: std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(int *a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v8;
  int v9;

  v8 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v8 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x18u);
  if ( v5 != -16 )
  {
    v6 = *a5;
    *(uint32_t *)(v5 + 20) = a5[1];
    *(uint32_t *)(v5 + 16) = v6;
  }
  v9 = v5;
  sub_1904970(v8, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique  (binary VA: 0x1414ee0)
// Original: std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( *a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique  (binary VA: 0x1414fc0)
// Original: std::_Rb_tree<int,std::pair<int const,sociallib::SNSWrapperBase *>,std::_Select1st<std::pair<int const,sociallib::SNSWrapperBase *>>,std::less<int>,std::allocator<std::pair<int const,sociallib::SNSWrapperBase *>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      a4);
  else
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_14157A0  (binary VA: 0x14157a0)
// Original: sub_14157A0
// ----------------------------------------------------------------------------
int * sub_14157A0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  int v5[7];

  sub_1900D70(&unk_2119860);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119860, &unk_20D1280);
  dword_2119864 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2119868 = v0;
  dword_211986C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2119870 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2119874 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2119878 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_211987C = (int)(uintptr_t)(&dword_20D3F88);
  dword_211984C = 0;
  *(uintptr_t *)(unk_2119850) = (uintptr_t)(0);
  *(uintptr_t *)(unk_211985C) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2119854) = (uintptr_t)(&dword_211984C);
  *(uintptr_t *)(unk_2119858) = (uintptr_t)(&dword_211984C);
  __cxa_atexit(
    (void (*)(void *))g4_std::map_sociallib_SNSInterfaceDe_2a3f71::Destroy,
    &sociallib::ClientSNSInterface::s_supportedSNSDeviceConfigData,
    &unk_20D1280);
  dword_2119834 = 0;
  *(uintptr_t *)(unk_2119838) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2119844) = (uintptr_t)(0);
  *(uintptr_t *)(unk_211983C) = (uintptr_t)(&dword_2119834);
  *(uintptr_t *)(unk_2119840) = (uintptr_t)(&dword_2119834);
  __cxa_atexit(
    (void (*)(void *))g4_std::set_sociallib_ClientSNSEnum_c5a1e1::Destroy,
    &sociallib::ClientSNSInterface::s_supportedSNS,
    &unk_20D1280);
  dword_211981C = 0;
  *(uintptr_t *)(unk_2119824) = (uintptr_t)(&dword_211981C);
  *(uintptr_t *)(unk_2119828) = (uintptr_t)(&dword_211981C);
  *(uintptr_t *)(unk_2119820) = (uintptr_t)(0);
  *(uintptr_t *)(unk_211982C) = (uintptr_t)(0);
  __cxa_atexit(
    (void (*)(void *))g4_std::map_sociallib_ClientSNSEnum_b47e82::Destroy,
    &sociallib::ClientSNSInterface::s_isSnsInitializedMap,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::ClientSNSInterface::openUrlStr), (char *)&unk_1B15112, (int)(uintptr_t)(v5));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::ClientSNSInterface::openUrlStr, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::ClientSNSInterface::facebookInstallTrackingUrl), (char *)&unk_1B15112, (int)(uintptr_t)(v5) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::ClientSNSInterface::facebookInstallTrackingUrl, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( g4_guard_c6263ceff1[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_c6263ceff1) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::ti_ = (void *)("static char const* boost::detai"
                                                                                         "l::sp_typeid_<T>::name() [with "
                                                                                         "T = boost::detail::sp_ms_delete"
                                                                                         "r<FacebookInstallEvent::Self>]");
  }

  result = (int *)&byte_20D3F20;
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (byte_20D3F20 == 0)
{
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }

  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_141B7C0  (binary VA: 0x141b7c0)
// Original: sub_141B7C0
// ----------------------------------------------------------------------------
int sub_141B7C0()
{
  sub_1900D70(&unk_2119890);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119890, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_string_86c307::M_fill_insert  (binary VA: 0x141cbc0)
// Original: std::vector<std::string>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_string_86c307::M_fill_insert(int *a1, uint32_t *a2, unsigned int a3, int a4)
{
  size_t v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  bool v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int i;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  unsigned int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  size_t v23;
  int v24;
  unsigned int v25;
  int v26;
  size_t v27;
  int v28;
  size_t v29;
  void *v30;
  size_t v31;
  size_t v32;
  size_t v33;
  int v34;
  size_t v35;
  typedef size_t _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef uint32_t _g4_t_v50[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v36)) > _g4_s0 ? (0u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v37)) > _g4_s1 ? (0u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v38)) > _g4_s2 ? (24u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v39)) > _g4_s3 ? (28u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v40)) > _g4_s4 ? (28u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v41)) > _g4_s5 ? (28u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v42)) > _g4_s6 ? (32u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v43)) > _g4_s7 ? (36u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v44)) > _g4_s8 ? (36u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v45)) > _g4_s9 ? (36u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v46)) > _g4_s10 ? (40u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v47)) > _g4_s11 ? (40u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v48)) > _g4_s12 ? (40u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v49)) > _g4_s13 ? (40u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v50)) > _g4_s14 ? (60u + sizeof(_g4_t_v50)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);

  v4 = (size_t)a2;
  if ( a3 == 0 )
    return;
  v5 = a1[1];
  if ( a3 > (a1[2] - v5) >> 2 )
  {
    v6 = (v5 - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v6 )
      sub_1900180("vector::_M_fill_insert");
    v7 = a3;
    if ( v6 >= a3 )
      v7 = v6;
    v8 = ((int)(uintptr_t)(a2) - *a1) >> 2;
    v9 = __CFADD__(v7, v6);
    v10 = v7 + v6;
    if ( v9 || v10 > 0x3FFFFFFF )
    {
      v46 = 0xFFFFFFFC;
      v11 = opNew(0xFFFFFFFC);
    }
    else
    {
      if ( v10 == 0 )
      {
        v46 = 0;
        v43 = 0;
LABEL_9:
        v12 = v43 + 4 * v8;
        for ( i = a3; i != 0; --i )
        {
          if ( v12 != 0 )
            g4_std::string::construct_copy(v12, a4);
          v12 += 4;
        }
        v14 = a2;
        v15 = v43;
        v16 = (uint32_t *)*a1;
        if ( (uint32_t *)*a1 != a2 )
        {
          do
          {
            if ( v15 != 0 )
              g4_std::string::construct_copy(v15, v16);
            ++v16;
            v15 += 4;
          }
          while ( a2 != v16 );
        }
        v17 = (uint32_t *)a1[1];
        v18 = v15 + 4 * a3;
        if ( v17 != a2 )
        {
          v19 = a1[1];
          do
          {
            if ( v18 != 0 )
              g4_std::string::construct_copy(v18, v14);
            ++v14;
            v18 += 4;
          }
          while ( (uint32_t *)v19 != v14 );
          v17 = (uint32_t *)a1[1];
        }
        v20 = (uint32_t *)*a1;
        if ( (uint32_t *)*a1 != v17 )
        {
          v39 = v18;
          v21 = v17;
          do
          {
            v22 = (uint32_t *)(*v20 - 12);
            if ( v22 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v20 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v22);
            ++v20;
          }
          while ( v20 != v21 );
          v18 = v39;
          v20 = (uint32_t *)*a1;
        }
        if ( v20 != nullptr )
          opDelete(v20);
        *a1 = v43;
        a1[1] = v18;
        a1[2] = v46 + v43;
        return;
      }
      v46 = 4 * v10;
      v11 = opNew(4 * v10);
    }
    v43 = v11;
    goto LABEL_9;
  }
  g4_std::string::construct_copy(v50, a4);
  v23 = a1[1];
  v44 = (int)(v23 - (uint32_t)(uintptr_t)(a2)) >> 2;
  if ( a3 < v44 )
  {
    v49 = 4 * a3;
    v45 = v23 - 4 * a3;
    v31 = v45;
    if ( v45 != v23 )
    {
      v41 = a1[1];
      v32 = v23 - 4 * a3;
      do
      {
        if ( v23 != 0 )
          g4_std::string::construct_copy(v23, v32);
        v32 += 4;
        v23 += 4;
      }
      while ( v41 != v32 );
      v23 = v41;
      v4 = (size_t)a2;
      v31 = a1[1];
    }
    a1[1] = v49 + v31;
    if ( (int)(v45 - v4) >> 2 > 0 )
    {
      v42 = v4;
      v33 = v45;
      v34 = (int)(v45 - v4) >> 2;
      do
      {
        v23 -= 4;
        v38 = v33 - 4;
        g4_std::string::assign_str(v23, v33 - 4);
        --v34;
        v33 = v38;
      }
      while ( v34 != 0 );
      v4 = v42;
    }
    v35 = v4 + v49;
    while ( v35 != v4 )
    {
      v37 = v4;
      v4 += 4;
      g4_std::string::assign_str(v37, v50);
    }
  }
  else
  {
    v24 = a1[1];
    if ( a3 != v44 )
    {
      v47 = a1[1];
      v25 = a3 - v44;
      do
      {
        if ( v23 != 0 )
          g4_std::string::construct_copy(v23, v50);
        v23 += 4;
        --v25;
      }
      while ( v25 != 0 );
      v23 = v47;
      v4 = (size_t)a2;
      v24 = a1[1];
    }
    v26 = v24 + 4 * (a3 - v44);
    a1[1] = v26;
    if ( v23 == v4 )
    {
      a1[1] = v26 + 4 * v44;
    }
    else
    {
      v40 = v23;
      v48 = v4;
      v27 = v4;
      v28 = v26;
      do
      {
        if ( v28 != 0 )
          g4_std::string::construct_copy(v28, v27);
        v27 += 4;
        v28 += 4;
      }
      while ( v40 != v27 );
      v29 = v48;
      a1[1] += 4 * v44;
      do
      {
        v36 = v29;
        v29 += 4;
        g4_std::string::assign_str(v36, v50);
      }
      while ( v40 != v29 );
    }
  }
  v30 = (void *)(v50[0] - 12);
  if ( (uint32_t *)(v50[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_141CFB0  (binary VA: 0x141cfb0)
// Original: sub_141CFB0
// ----------------------------------------------------------------------------
int sub_141CFB0()
{
  sociallib::SNSRequestState::static_initSNSNames((sociallib::SNSRequestState::Self *)&sociallib::SNSRequestState::s_snsNames);
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    &sociallib::SNSRequestState::s_snsNames,
    &unk_20D1280);
  sociallib::SNSRequestState::static_initSNSRequestTypeNames((sociallib::SNSRequestState::Self *)&sociallib::SNSRequestState::s_snsRequestTypeNames);
  return __cxa_atexit(
           (void (*)(void *))g4_std::vector_string_86c307::Destroy,
           &sociallib::SNSRequestState::s_snsRequestTypeNames,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_141D1D0  (binary VA: 0x141d1d0)
// Original: sub_141D1D0
// ----------------------------------------------------------------------------
int sub_141D1D0(int a1, int a2, int a3)
{
  g4_std::string::construct_copy(a1, a2);
  g4_std::string::append_str(a1, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: XP_API_MALLOC  (binary VA: 0x141ec80)
// Original: XP_API_MALLOC
// ----------------------------------------------------------------------------
void * XP_API_MALLOC(size_t size)
{
  return malloc(size);
}

// ----------------------------------------------------------------------------
// Function: XP_API_FREE  (binary VA: 0x141ecb0)
// Original: XP_API_FREE
// ----------------------------------------------------------------------------
void XP_API_FREE(void *ptr)
{
  if ( ptr != nullptr )
    free(ptr);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRLEN  (binary VA: 0x141ece0)
// Original: XP_API_STRLEN
// ----------------------------------------------------------------------------
size_t XP_API_STRLEN(const char *s)
{
  size_t result;

  result = 0;
  if ( s != nullptr )
    return strlen(s);
  return result;
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRCMP  (binary VA: 0x141ed10)
// Original: XP_API_STRCMP
// ----------------------------------------------------------------------------
int XP_API_STRCMP(char *s1, char *s2)
{
  return strcmp(s1, s2);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRNCMP  (binary VA: 0x141ed40)
// Original: XP_API_STRNCMP
// ----------------------------------------------------------------------------
int XP_API_STRNCMP(char *s1, char *s2, size_t n)
{
  return strncmp(s1, s2, n);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRCASECMP  (binary VA: 0x141ed80)
// Original: XP_API_STRCASECMP
// ----------------------------------------------------------------------------
int XP_API_STRCASECMP(char *s1, char *s2)
{
  return strcasecmp(s1, s2);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRNEW  (binary VA: 0x141edb0)
// Original: XP_API_STRNEW
// ----------------------------------------------------------------------------
void * XP_API_STRNEW(const char *src)
{
  void *s;
  size_t n;

  s = nullptr;
  if ( src != nullptr )
  {
    n = XP_API_STRLEN(src);
    s = (void *)opNewArray(n + 1);
    memset(s, 0, n + 1);
    memcpy(s, src, n);
  }
  return s;
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRCPY  (binary VA: 0x141ee40)
// Original: XP_API_STRCPY
// ----------------------------------------------------------------------------
char * XP_API_STRCPY(char *dest, char *src)
{
  return strcpy(dest, src);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRNCPY  (binary VA: 0x141ee70)
// Original: XP_API_STRNCPY
// ----------------------------------------------------------------------------
char * XP_API_STRNCPY(char *dest, char *src, size_t n)
{
  return strncpy(dest, src, n);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRCAT  (binary VA: 0x141eeb0)
// Original: XP_API_STRCAT
// ----------------------------------------------------------------------------
char * XP_API_STRCAT(char *dest, char *src)
{
  return strcat(dest, src);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRTRIM  (binary VA: 0x141eee0)
// Original: XP_API_STRTRIM
// ----------------------------------------------------------------------------
const char * XP_API_STRTRIM(const char *a1)
{
  int v1;
  signed int v2;
  int v3;
  char v4; // bp
  char v5;
  char v6;
  signed int v8;

  if ( a1 != nullptr )
  {
    v1 = 0;
    v2 = XP_API_STRLEN(a1);
    if ( v2 > 0 )
    {
      v3 = 0;
      v4 = 1;
      v8 = v2;
      do
      {
        v5 = a1[v3];
        if ( v5 != 32 || (v6 = v4, v4 = 1, v6 == 0) )
        {
          ((char *)a1)[v1] = v5;
          v4 = 0;
          ++v1;
        }
        ++v3;
      }
      while ( v3 != v8 );
    }
    ((char *)a1)[v1] = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRSTR  (binary VA: 0x141ef50)
// Original: XP_API_STRSTR
// ----------------------------------------------------------------------------
char * XP_API_STRSTR(char *haystack, char *needle)
{
  return strstr(haystack, needle);
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRCHRFIND  (binary VA: 0x141ef80)
// Original: XP_API_STRCHRFIND
// ----------------------------------------------------------------------------
char * XP_API_STRCHRFIND(char *a1, uint8_t a2, int a3)
{
  char *v3;
  char v4;
  char *v5;
  int v6;

  v3 = a1;
  v4 = *a1;
  if ( a3 > 0 && v4 != 0 )
  {
    v5 = a1 + 1;
    v6 = 0;
    do
    {
      v3 = v5;
      v6 += v4 == (char)a2;
      v4 = *v5++;
    }
    while ( v6 < a3 && v4 != 0 );
  }
  else
  {
    v6 = 0;
  }
  if ( v6 != a3 )
    return nullptr;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: XP_API_STRCHR  (binary VA: 0x141eff0)
// Original: XP_API_STRCHR
// ----------------------------------------------------------------------------
char * XP_API_STRCHR(char *s, char a2, int a3)
{
  if ( a3 == 1 )
    return strchr(s, a2);
  else
    return strrchr(s, a2);
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_INIT  (binary VA: 0x141f040)
// Original: XP_DEBUG_INIT
// ----------------------------------------------------------------------------
void XP_DEBUG_INIT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_FINALIZE  (binary VA: 0x141f050)
// Original: XP_DEBUG_FINALIZE
// ----------------------------------------------------------------------------
void XP_DEBUG_FINALIZE()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_OUT  (binary VA: 0x141f060)
// Original: XP_DEBUG_OUT
// ----------------------------------------------------------------------------
void XP_DEBUG_OUT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: XP_API_ATOI  (binary VA: 0x141f070)
// Original: XP_API_ATOI
// ----------------------------------------------------------------------------
int XP_API_ATOI(char *nptr)
{
  return atoi(nptr);
}

// ----------------------------------------------------------------------------
// Function: XP_API_FTOA  (binary VA: 0x141f0a0)
// Original: XP_API_FTOA
// ----------------------------------------------------------------------------
char * XP_API_FTOA(int a1, char *s)
{
  sprintf(s, "%f", *(float *)&a1);
  return s;
}

// ----------------------------------------------------------------------------
// Function: XP_API_ATOF  (binary VA: 0x141f0f0)
// Original: XP_API_ATOF
// ----------------------------------------------------------------------------
long double XP_API_ATOF(char *nptr)
{
  return strtod(nptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: XP_API_ITOA  (binary VA: 0x141f120)
// Original: XP_API_ITOA
// ----------------------------------------------------------------------------
char * XP_API_ITOA(int a1, char *a2, int a3)
{
  int v3;
  char *v4;
  int v5; // et2
  char v6;
  char *v7;
  char i; // si
  char v9; // bp
  typedef char _g4_t_v11;
  typedef char _g4_t_v12[49];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = a1;
  strcpy(v12, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  if ( a1 != 0 )
  {
    v4 = a2;
    v11 = 0;
    if ( a1 < 0 )
    {
      *a2 = 45;
      v4 = a2 + 1;
      v3 = -a1;
      v11 = 1;
    }
    while ( 1 )
    {
      v5 = v3 % a3;
      v3 /= a3;
      v6 = v12[v5];
      *v4 = v6;
      if ( v3 == 0 )
        break;
      ++v4;
    }
    v7 = &a2[-(v11 == 0) + 1];
    v4[1] = 0;
    if ( v7 < v4 )
    {
      for ( i = v6; ; i = *v4 )
      {
        v9 = *v7;
        *v7 = i;
        *v4 = v9;
        if ( ++v7 >= --v4 )
          break;
      }
    }
    return a2;
  }
  else
  {
    *a2 = 48;
    a2[1] = 0;
    return a2;
  }
}

// ----------------------------------------------------------------------------
// Function: ConvertUnicodeToUTF8  (binary VA: 0x141f210)
// Original: ConvertUnicodeToUTF8
// ----------------------------------------------------------------------------
int ConvertUnicodeToUTF8(char *a1, const uint16_t *a2, int a3)
{
  int v3;
  int v5;
  unsigned int v6;
  char v7;

  v3 = 0;
  if ( a3 > 0 )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = a2[v5];
        if ( (uint16_t)v6 > 0x7Fu )
          break;
        *a1 = v6;
        ++v3;
        ++a1;
LABEL_4:
        if ( ++v5 == a3 )
          goto LABEL_8;
      }
      if ( (uint16_t)v6 > 0x7FFu )
      {
        v3 += 3;
        *a1 = ((int)(uint16_t)v6 >> 12) | 0xE0;
        a1[1] = ((int)a2[v5] >> 6) & 0x3F | 0x80;
        a1[2] = a2[v5] & 0x3F | 0x80;
        a1 += 3;
        goto LABEL_4;
      }
      v3 += 2;
      *a1 = (v6 >> 6) | 0xC0;
      v7 = a2[v5++] & 0x3F;
      a1[1] = v7 | 0x80;
      a1 += 2;
    }
    while ( v5 != a3 );
  }
LABEL_8:
  *a1 = 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ConvertUTF8ToUnicode  (binary VA: 0x141f2b0)
// Original: ConvertUTF8ToUnicode
// ----------------------------------------------------------------------------
int ConvertUTF8ToUnicode(uint16_t *a1, const char *a2, int a3)
{
  int result;
  int v5;
  int v6;
  int16_t v7; // di
  char v8;
  uint16_t v9; // di
  int16_t v10; // di
  char v11;

  result = 0;
  if ( a3 > 0 )
  {
    v5 = 1;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v11 = a2[v6];
        if ( (v11 & 0xE0) != 0xE0 )
          break;
        v7 = (v11 << 12) | a2[v6 + 2] & 0x3F;
        v8 = a2[v6 + 1];
        v6 += 3;
        v9 = ((v8 & 0x3F) << 6) | v7;
        result = v5;
        *a1 = v9;
        ++v5;
        ++a1;
        if ( v6 >= a3 )
          goto LABEL_8;
      }
      if ( (v11 & 0xC0) == 0xC0 )
      {
        v10 = a2[v6 + 1] & 0x3F;
        v6 += 2;
        result = v5;
        *a1 = ((v11 & 0x1F) << 6) | v10;
      }
      else
      {
        ++v6;
        *a1 = v11;
        result = v5;
      }
      ++a1;
      ++v5;
    }
    while ( v6 < a3 );
  }
LABEL_8:
  *a1 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TranslateUnicode2Utf8  (binary VA: 0x141f380)
// Original: TranslateUnicode2Utf8
// ----------------------------------------------------------------------------
int TranslateUnicode2Utf8(char **a1, uint16_t *a2, int a3, int a4)
{
  char *s;

  if ( a4 != 0 )
  {
    s = (char *)opNewArray(3 * a3 + 1);
    *a1 = s;
  }
  else
  {
    s = *a1;
  }
  memset(s, 0, 3 * a3 + 1);
  return ConvertUnicodeToUTF8(*a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: TranslateUtf82Unicode  (binary VA: 0x141f410)
// Original: TranslateUtf82Unicode
// ----------------------------------------------------------------------------
int TranslateUtf82Unicode(uint16_t **a1, char *a2, int a3, int a4)
{
  uint16_t *s;

  if ( a4 != 0 )
  {
    s = (uint16_t *)opNewArray(2 * a3 + 2);
    *a1 = s;
  }
  else
  {
    s = *a1;
  }
  memset(s, 0, 2 * a3 + 2);
  return ConvertUTF8ToUnicode(*a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: UTF8ToUnicode_Old  (binary VA: 0x141f4a0)
// Original: UTF8ToUnicode_Old
// ----------------------------------------------------------------------------
int UTF8ToUnicode_Old(uint16_t *a1, const char *a2)
{
  const char *v2;
  char v4; // di
  int result;
  char v6;
  int v7;
  bool v8;
  char v9; // bp
  int v10;
  char v11;
  const char *v12;
  int v13;
  int16_t v14; // di
  const char *v15;

  v2 = a2;
  v4 = *a2;
  result = *(uint8_t *)a2;
  if ( (uint8_t)result != 0 )
  {
    while ( 1 )
    {
      while ( v4 >= 0 )
      {
        ++v2;
        *a1 = v4;
LABEL_4:
        v4 = *v2;
        ++a1;
        result = *(uint8_t *)v2;
        if ( (uint8_t)result == 0 )
          return result;
      }
      v6 = 4 * v4;
      if ( (v4 & 0x20) == 0 )
        break;
      v7 = 1;
      do
      {
        ++v7;
        v8 = (v6 & 0x40) != 0;
        v6 *= 2;
      }
      while ( v8 );
      v9 = v7 + 1;
      if ( v7 <= 5 )
        goto LABEL_13;
      ++v2;
      *a1++ = v4;
      v4 = *v2;
      result = *(uint8_t *)v2;
      if ( (uint8_t)result == 0 )
        return result;
    }
    v9 = 2;
    v7 = 1;
LABEL_13:
    v10 = v6;
    v11 = v9;
    v12 = &v2[v7];
    v15 = v2 + 1;
    v13 = v10 >> v11;
    do
    {
      v14 = *++v2 & 0x3F;
      LOWORD(v13) = v14 | ((uint16_t)v13 << 6);
    }
    while ( v2 != v12 );
    *a1 = v13;
    v2 = &v15[v7];
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ConvertUnicodeToUTF8_Old  (binary VA: 0x141f570)
// Original: ConvertUnicodeToUTF8_Old
// ----------------------------------------------------------------------------
int ConvertUnicodeToUTF8_Old(char *a1, const uint16_t *a2)
{
  int v2;
  char *v3;
  const uint16_t *v4;
  int16_t v5; // di
  int16_t v6;
  uint16_t v7;
  const uint16_t *v8;
  const uint16_t *v10;
  int16_t v11;
  int16_t v12;
  uint16_t v13;
  int v14;
  uint16_t v15;

  if ( a1 != nullptr )
  {
    if ( ((uint8_t)(uintptr_t)(a2) & 1) != 0 )
    {
      v2 = 0;
      v3 = a1;
      v15 = *(uint8_t *)a2 + (*((uint8_t *)a2 + 1) << 8);
      if ( v15 != 0 )
      {
        v4 = a2 + 1;
        do
        {
          if ( v15 <= 0x7Fu )
          {
            *v3++ = v15;
          }
          else if ( v15 > 0x7FFu )
          {
            *v3 = (v15 >> 12) | 0xE0;
            v3[1] = ((v15 & 0xFC0) >> 6) | 0x80;
            v3[2] = v15 & 0x3F | 0x80;
            v3 += 3;
          }
          else
          {
            *v3 = ((v15 & 0x7C0) >> 6) | 0xC0;
            v3[1] = v15 & 0x3F | 0x80;
            v3 += 2;
          }
          v5 = *(uint8_t *)v4;
          v6 = *((uint8_t *)v4++ + 1) << 8;
          v15 = v5 + v6;
        }
        while ( v5 + v6 != 0 );
LABEL_17:
        v2 = v3 - a1;
      }
      goto LABEL_18;
    }
    v7 = *a2;
    v2 = 0;
    v3 = a1;
    if ( *a2 == 0 )
    {
LABEL_18:
      *v3 = 0;
      return v2;
    }
    v8 = a2 + 1;
    while ( 1 )
    {
      while ( v7 <= 0x7Fu )
      {
        *v3++ = v7;
LABEL_13:
        v7 = *v8++;
        if ( v7 == 0 )
          goto LABEL_17;
      }
      if ( v7 > 0x7FFu )
      {
        *v3 = (v7 >> 12) | 0xE0;
        v3[2] = v7 & 0x3F | 0x80;
        v3[1] = ((v7 & 0xFC0) >> 6) | 0x80;
        v3 += 3;
        goto LABEL_13;
      }
      v3[1] = v7 & 0x3F | 0x80;
      *v3 = ((v7 & 0x7C0) >> 6) | 0xC0;
      v7 = *v8;
      v3 += 2;
      ++v8;
      if ( v7 == 0 )
        goto LABEL_17;
    }
  }
  v10 = a2;
  v2 = 1;
  while ( 1 )
  {
    v11 = *(uint8_t *)v10;
    v12 = *((uint8_t *)v10++ + 1) << 8;
    v13 = v11 + v12;
    if ( v13 == 0 )
      break;
    if ( v13 > 0x7Fu )
    {
      v14 = v2 + 2;
      v2 += 3;
      if ( v13 <= 0x7FFu )
        v2 = v14;
    }
    else
    {
      ++v2;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: XP_API_FILE_OPEN  (binary VA: 0x141f750)
// Original: XP_API_FILE_OPEN
// ----------------------------------------------------------------------------
int XP_API_FILE_OPEN(char *filename, char *modes)
{
  int v2;
  FILE *v3;
  int result;

  v2 = 0;
  while ( l_file_list[v2] != 0 )
  {
    if ( ++v2 == 8 )
      return 0;
  }
  v3 = fopen(filename, modes);
  result = 0;
  if ( v3 != nullptr )
  {
    l_file_list[v2] = (uint32_t)(uintptr_t)(v3);
    return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: XP_API_FILE_CLOSE  (binary VA: 0x141f7b0)
// Original: XP_API_FILE_CLOSE
// ----------------------------------------------------------------------------
int XP_API_FILE_CLOSE(int a1)
{
  int result;

  result = l_file_list[a1 - 1];
  if ( result != 0 )
  {
    result = fclose((FILE *)l_file_list[a1 - 1]);
    l_file_list[a1 - 1] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: XP_API_FILE_READ  (binary VA: 0x141f800)
// Original: XP_API_FILE_READ
// ----------------------------------------------------------------------------
size_t XP_API_FILE_READ(void *ptr, size_t size, size_t n, int a4)
{
  return fread(ptr, size, n, (FILE *)l_file_list[a4 - 1]);
}

// ----------------------------------------------------------------------------
// Function: XP_API_FILE_WRITE  (binary VA: 0x141f850)
// Original: XP_API_FILE_WRITE
// ----------------------------------------------------------------------------
size_t XP_API_FILE_WRITE(void *ptr, size_t size, size_t n, int a4)
{
  return fwrite(ptr, size, n, (FILE *)l_file_list[a4 - 1]);
}

// ----------------------------------------------------------------------------
// Function: XP_API_FILE_GET_LENGTH  (binary VA: 0x141f8a0)
// Original: XP_API_FILE_GET_LENGTH
// ----------------------------------------------------------------------------
int XP_API_FILE_GET_LENGTH(int a1)
{
  int v1;
  int v3;

  fseek((FILE *)l_file_list[a1 - 1], 0, 0);
  v1 = ftell((FILE *)l_file_list[a1 - 1]);
  fseek((FILE *)l_file_list[a1 - 1], 0, 2);
  v3 = ftell((FILE *)l_file_list[a1 - 1]);
  fseek((FILE *)l_file_list[a1 - 1], 0, 0);
  return v3 - v1;
}

// ----------------------------------------------------------------------------
// Function: XP_API_PARSE_DATA  (binary VA: 0x141f960)
// Original: XP_API_PARSE_DATA
// ----------------------------------------------------------------------------
int XP_API_PARSE_DATA(int a1, uint8_t *a2, int a3, char a4)
{
  int v4;
  int64_t v5; // rax
  char v6;

  v4 = 0;
  v5 = 0x1FFFFFFFFLL;
  *a2 = 0;
  while ( 1 )
  {
    v6 = *(uint8_t *)(a1 + HIDWORD(v5) - 1);
    if ( v6 == 0 )
      break;
    if ( v6 == a4 )
    {
      --a3;
    }
    else if ( a3 != 0 )
    {
      if ( a3 < 0 )
        return v5;
    }
    else
    {
      if ( (uint32_t)v5 == -1 )
        LODWORD(v5) = HIDWORD(v5) - 1;
      a2[v4] = v6;
      a2[++v4] = 0;
    }
    ++HIDWORD(v5);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: XP_API_PARSE_DATA_NEW  (binary VA: 0x141f9e0)
// Original: XP_API_PARSE_DATA_NEW
// ----------------------------------------------------------------------------
int XP_API_PARSE_DATA_NEW(int a1, void **a2, int a3, char a4)
{
  int v4;
  int i;
  char v7;
  size_t v8;
  void *s;
  size_t n;

  v4 = -1;
  for ( i = 1; ; ++i )
  {
    v7 = *(uint8_t *)(a1 + i - 1);
    if ( v7 == 0 )
      break;
    if ( v7 == a4 )
    {
      --a3;
    }
    else if ( a3 != 0 )
    {
      if ( a3 < 0 )
        break;
    }
    else if ( v4 == -1 )
    {
      v4 = i - 1;
    }
  }
  v8 = i - 1 - v4;
  n = i - v4;
  s = (void *)opNewArray(i - v4);
  *a2 = s;
  memset(s, 0, n);
  memcpy(*a2, (const void *)(v4 + a1), v8);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: XP_API_GET_TIME  (binary VA: 0x141fa90)
// Original: XP_API_GET_TIME
// ----------------------------------------------------------------------------
uint64_t XP_API_GET_TIME()
{
  bool v0;
  uint64_t result; // rax
  typedef struct timespec _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);

  v0 = clock_gettime(0, &v2) == -1;
  result = -1;
  if ( !v0 )
    return 1000 * (v2.tv_sec + v2.tv_nsec / 0x3B9ACA00uLL);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSEncDec_GetCharFromKeyByIndex  (binary VA: 0x141fb30)
// Original: SSEncDec_GetCharFromKeyByIndex
// ----------------------------------------------------------------------------
int SSEncDec_GetCharFromKeyByIndex(int a1)
{
  int result;

  if ( a1 <= 25 )
    return a1 + 97;
  if ( a1 <= 51 )
    return a1 + 39;
  if ( a1 <= 61 )
    return a1 - 4;
  result = 95;
  if ( a1 != 62 )
    return 45;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSEncDec_GetKeyFromChar  (binary VA: 0x141fb70)
// Original: SSEncDec_GetKeyFromChar
// ----------------------------------------------------------------------------
int SSEncDec_GetKeyFromChar(uint8_t a1)
{
  int result;

  result = 63;
  if ( a1 != 45 )
  {
    result = 62;
    if ( a1 != 95 )
    {
      if ( (char)a1 <= 57 )
      {
        return a1 + 4;
      }
      else
      {
        result = a1 - 39;
        if ( (char)a1 > 90 )
          return a1 - 97;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSEncDec_ByteArray2Blob  (binary VA: 0x141fbb0)
// Original: SSEncDec_ByteArray2Blob
// ----------------------------------------------------------------------------
char * SSEncDec_ByteArray2Blob(uint8_t *a1, int a2)
{
  size_t n;
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  int v10;
  char *s;
  int v13;

  n = 2;
  v13 = 1;
  v3 = 8 * a2 / 6;
  if ( v3 != 0 )
  {
    n = v3 + 3;
    v13 = v3 + 2;
  }
  s = (char *)opNewArray(n);
  memset(s, 0, n);
  if ( s == nullptr )
    return s;
  if ( a2 > 0 )
  {
    v4 = 1;
    v5 = 8;
    v6 = 0;
    while ( 1 )
    {
      v9 = (int)a1[v6] >> (8 - v5);
      if ( v5 <= 5 )
      {
        if ( a2 <= ++v6 )
        {
          v8 = v4 - 1;
          s[v8] = SSEncDec_GetCharFromKeyByIndex(v9 & 0x3F);
          return s;
        }
        v7 = v5;
        v5 += 2;
        s[v4 - 1] = SSEncDec_GetCharFromKeyByIndex(((uint8_t)v9 | (uint8_t)(a1[v6] << v7)) & 0x3F);
      }
      else
      {
        v5 -= 6;
        if ( v5 == 0 )
        {
          ++v6;
          v5 = 8;
        }
        s[v4 - 1] = SSEncDec_GetCharFromKeyByIndex(v9 & 0x3F);
        v10 = v4;
        if ( v6 >= a2 )
        {
          if ( v5 == 8 )
            goto LABEL_18;
          return s;
        }
      }
      ++v4;
    }
  }
  v10 = 0;
LABEL_18:
  if ( v13 == 1 )
    return s;
  s[v10] = SSEncDec_GetCharFromKeyByIndex(0);
  return s;
}

// ----------------------------------------------------------------------------
// Function: SSEncDec_String2Blob  (binary VA: 0x141fd00)
// Original: SSEncDec_String2Blob
// ----------------------------------------------------------------------------
char * SSEncDec_String2Blob(char *s)
{
  size_t v1;

  v1 = strlen(s);
  return SSEncDec_ByteArray2Blob((uint8_t *)s, v1);
}

// ----------------------------------------------------------------------------
// Function: SSEncDec_Blob2ByteArray  (binary VA: 0x141fd40)
// Original: SSEncDec_Blob2ByteArray
// ----------------------------------------------------------------------------
signed int SSEncDec_Blob2ByteArray(uint8_t **a1, char *s)
{
  uint8_t *v2;
  signed int v3;
  int v4;
  signed int i;
  char KeyFromChar;
  char v7;
  int v9;
  signed int v10;

  v10 = (6 * strlen(s)) >> 3;
  v2 = (uint8_t *)opNewArray(v10 + 1);
  v3 = 0;
  do
    v2[v3++] = 0;
  while ( v10 >= v3 );
  v9 = 8;
  v4 = 0;
  for ( i = 0; i < (int)XP_API_STRLEN(s); ++i )
  {
    KeyFromChar = SSEncDec_GetKeyFromChar(s[i]);
    v2[v4] |= KeyFromChar << (8 - v9);
    if ( v9 > 6 )
    {
      v9 -= 6;
    }
    else if ( v4 < v10 - 1 )
    {
      v7 = v9;
      ++v4;
      v9 += 2;
      v2[v4] |= KeyFromChar >> v7;
    }
  }
  *a1 = v2;
  return v10;
}

// ----------------------------------------------------------------------------
// Function: SSEncDec_Blob2String  (binary VA: 0x141fe20)
// Original: SSEncDec_Blob2String
// ----------------------------------------------------------------------------
uint8_t * SSEncDec_Blob2String(char *s)
{
  size_t v1;
  size_t n;
  typedef uint8_t *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v1 = strlen(s);
  v4 = (uint8_t *)opNewArray(v1);
  n = strlen(s);
  memset(v4, 0, n);
  SSEncDec_Blob2ByteArray(&v4, s);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: XP_API_GetNationality  (binary VA: 0x141fea0)
// Original: XP_API_GetNationality
// ----------------------------------------------------------------------------
char * XP_API_GetNationality(char *a1)
{
  return XP_API_STRCPY(a1, "CN");
}

// ----------------------------------------------------------------------------
// Function: XP_API_GET_RANDOM  (binary VA: 0x141fed0)
// Original: XP_API_GET_RANDOM
// ----------------------------------------------------------------------------
int XP_API_GET_RANDOM(const char *a1)
{
  int v1;
  signed int v2;
  int i;
  int v4;
  time_t v6;

  if ( byte_2119900 == 0 )
  {
    byte_2119900 = 1;
    v6 = time(nullptr);
    srand48(v6);
  }
  v1 = 0;
  if ( a1 != nullptr )
  {
    v2 = XP_API_STRLEN(a1);
    if ( v2 > 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = a1[i];
        v1 += v4;
      }
    }
  }
  return v1 + lrand48();
}

// ----------------------------------------------------------------------------
// Function: XP_API_IP_STR2INT  (binary VA: 0x141ff50)
// Original: XP_API_IP_STR2INT
// ----------------------------------------------------------------------------
int XP_API_IP_STR2INT(char *a1)
{
  int v1;
  char *v3;
  char *v4;
  uint8_t v5;
  char v6;
  typedef char *_g4_t_src;
  typedef int _g4_t_v9;
  typedef char _g4_t_dest[4];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_src)) > _g4_s0 ? (4u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_dest)) > _g4_s2 ? (16u + sizeof(_g4_t_dest)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v1 = 0;
  v9 = 0;
  while ( 1 )
  {
    src = a1;
    *(uint32_t *)dest = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v3 = XP_API_STRSTR(a1, ".");
    v4 = v3;
    if ( v3 == nullptr )
      break;
    *(uint32_t *)dest = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    memcpy(dest, src, v3 - src);
    v5 = XP_API_ATOI(dest);
    v6 = 8 * v1++;
    a1 = v4 + 1;
    v9 |= v5 << v6;
    if ( v1 == 4 )
      return v9;
  }
  *(uint32_t *)dest = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  XP_API_STRCPY(dest, src);
  return ((uint8_t)XP_API_ATOI(dest) << (8 * v1)) | v9;
}

// ----------------------------------------------------------------------------
// Function: XP_API_IP_INT2STR  (binary VA: 0x1420080)
// Original: XP_API_IP_INT2STR
// ----------------------------------------------------------------------------
char * XP_API_IP_INT2STR(unsigned int a1, char *s)
{
  sprintf(s, "%d.%d.%d.%d", (uint8_t)a1, BYTE1(a1), (int)(a1 & 0xFF0000) >> 16, HIBYTE(a1));
  return s;
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_OPEN_SENDDATA_LOG  (binary VA: 0x14200f0)
// Original: XP_DEBUG_OPEN_SENDDATA_LOG
// ----------------------------------------------------------------------------
FILE * XP_DEBUG_OPEN_SENDDATA_LOG()
{
  FILE *result;

  result = fopen("log_send.txt", "wt");
  fp_send = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_CLOSE_SENDDATA_LOG  (binary VA: 0x1420130)
// Original: XP_DEBUG_CLOSE_SENDDATA_LOG
// ----------------------------------------------------------------------------
int XP_DEBUG_CLOSE_SENDDATA_LOG()
{
  return fclose(fp_send);
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_SAVE_SENDDATA_LOG  (binary VA: 0x1420160)
// Original: XP_DEBUG_SAVE_SENDDATA_LOG
// ----------------------------------------------------------------------------
size_t XP_DEBUG_SAVE_SENDDATA_LOG(const char *ptr, size_t n)
{
  return fwrite(ptr, 1u, n, fp_send);
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_OPEN_RECVDATA_LOG  (binary VA: 0x14201a0)
// Original: XP_DEBUG_OPEN_RECVDATA_LOG
// ----------------------------------------------------------------------------
FILE * XP_DEBUG_OPEN_RECVDATA_LOG()
{
  FILE *result;

  result = fopen("log_recv.txt", "wt");
  fp_recv = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_CLOSE_RECVDATA_LOG  (binary VA: 0x14201e0)
// Original: XP_DEBUG_CLOSE_RECVDATA_LOG
// ----------------------------------------------------------------------------
int XP_DEBUG_CLOSE_RECVDATA_LOG()
{
  return fclose(fp_recv);
}

// ----------------------------------------------------------------------------
// Function: XP_DEBUG_SAVE_RECVDATA_LOG  (binary VA: 0x1420210)
// Original: XP_DEBUG_SAVE_RECVDATA_LOG
// ----------------------------------------------------------------------------
size_t XP_DEBUG_SAVE_RECVDATA_LOG(const char *ptr, size_t n)
{
  return fwrite(ptr, 1u, n, fp_recv);
}

// ----------------------------------------------------------------------------
// Function: getValue  (binary VA: 0x1420250)
// Original: getValue
// ----------------------------------------------------------------------------
int getValue(int a1, uint8_t *a2, int a3, char a4)
{
  int v4;
  int v5;
  char v7;

  v4 = 1;
  v5 = 0;
  *a2 = 0;
  while ( 1 )
  {
    v7 = *(uint8_t *)(a1 + v4 - 1);
    if ( v7 == 0 )
      break;
    if ( v7 == a4 )
    {
      --a3;
    }
    else if ( a3 != 0 )
    {
      if ( a3 < 0 )
        return 0;
    }
    else
    {
      a2[v5] = v7;
      a2[++v5] = 0;
    }
    ++v4;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: XP_API_TOLOWER  (binary VA: 0x14202c0)
// Original: XP_API_TOLOWER
// ----------------------------------------------------------------------------
void XP_API_TOLOWER(char *a1, char *a2)
{
  char v2;
  int v3;
  int v4;

  if ( a2 != nullptr && a1 != nullptr )
  {
    v2 = *a1;
    v4 = 0;
    if ( *a1 != 0 )
    {
      v3 = 0;
      do
      {
        while ( (uint8_t)(v2 - 65) <= 0x19u )
        {
          ++v3;
          a2[v4] = v2 + 32;
          v4 = v3;
          v2 = a1[v3];
          if ( v2 == 0 )
            goto LABEL_8;
        }
        ++v3;
        a2[v4] = v2;
        v4 = v3;
        v2 = a1[v3];
      }
      while ( v2 != 0 );
    }
LABEL_8:
    a2[v4] = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1420D10  (binary VA: 0x1420d10)
// Original: sub_1420D10
// ----------------------------------------------------------------------------
int sub_1420D10()
{
  sub_1900D70(&unk_2119904);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119904, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_erase  (binary VA: 0x1423d60)
// Original: std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_erase(int a1, void **a2)
{
  void **v2;
  volatile int32_t *v3;
  void **v4;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (volatile int32_t *)v2[5];
      v4 = (void **)v2[2];
      if ( v3 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert  (binary VA: 0x1423ef0)
// Original: std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x18u);
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *a5;
    v7 = v5;
    g4_std::string::construct_copy(v5 + 20, a5 + 1);
    v5 = v7;
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique  (binary VA: 0x1423fd0)
// Original: std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( *a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique  (binary VA: 0x14240b0)
// Original: std::_Rb_tree<sociallib::SNS_PERMISSION,std::pair<sociallib::SNS_PERMISSION const,std::string>,std::_Select1st<std::pair<sociallib::SNS_PERMISSION const,std::string>>,std::less<sociallib::SNS_PERMISSION>,std::allocator<std::pair<sociallib::SNS_PERMISSION const,std::string>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1424240  (binary VA: 0x1424240)
// Original: sub_1424240
// ----------------------------------------------------------------------------
int sub_1424240()
{
  sub_1900D70(&unk_2119908);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119908, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: FacebookInstallEvent::Construct  (binary VA: 0x1424290)
// Original: FacebookInstallEvent::FacebookInstallEvent
// ----------------------------------------------------------------------------
int FacebookInstallEvent::Construct(glotv3::Event::Self *a1, uint8_t **a2)
{
  int result;
  void *v3;
  uint16_t v4[3];

  glotv3::Event::Construct(a1, false);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095418);
  glotv3::Event::setEventType(a1, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_2CF84)->st_size + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "deeplink", (int)(uintptr_t)(v4));
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v4[1], a2);
  result = *(uint32_t *)&v4[1];
  v3 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FacebookInstallEvent::Destroy  (binary VA: 0x1424350)
// Original: FacebookInstallEvent::~FacebookInstallEvent
// ----------------------------------------------------------------------------
void FacebookInstallEvent::Destroy(FacebookInstallEvent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095418);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: FacebookInstallEvent::Destroy_ea1424380  (binary VA: 0x1424380)
// Original: FacebookInstallEvent::~FacebookInstallEvent
// ----------------------------------------------------------------------------
void FacebookInstallEvent::Destroy_ea1424380(FacebookInstallEvent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095418);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: sub_14243D0  (binary VA: 0x14243d0)
// Original: sub_14243D0
// ----------------------------------------------------------------------------
int * sub_14243D0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_211990C);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211990C, &unk_20D1280);
  dword_2119910 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2119914 = v0;
  dword_2119918 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_211991C = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2119920 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2119924 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2119928 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_sociallib_GLWTManager_Se_a745fe::push_back  (binary VA: 0x1426660)
// Original: std::deque<sociallib::GLWTManager::ServiceRequest *>::push_back
// ----------------------------------------------------------------------------
char * g4_std::deque_sociallib_GLWTManager_Se_a745fe::push_back(void **a1, uint32_t *a2)
{
  char *result;
  char *v3;
  char *v4;
  char *v5;
  unsigned int v6;
  char *v7;
  char *v8;
  unsigned int v9;
  int v10;
  void *dest;
  int v12;
  char *v13;
  char *v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  void *v23;
  int v24;
  int v25;
  char *v26;
  char *src;
  int v28;

  result = (char *)a1[6];
  if ( result == (char *)a1[8] - 4 )
  {
    v4 = (char *)a1[9];
    v5 = (char *)*a1;
    v6 = (unsigned int)(uintptr_t)(a1[1]);
    if ( v6 - ((v4 - (char *)((uint8_t *)*a1)) >> 2) <= 1 )
    {
      v26 = (char *)a1[5];
      v28 = ((v4 - v26) >> 2) + 1;
      v19 = ((v4 - v26) >> 2) + 2;
      if ( v6 > 2 * v19 )
      {
        v16 = v4 + 4 - v26;
        v13 = &v5[4 * ((v6 - v19) >> 1)];
        if ( v26 <= v13 )
        {
          v18 = v16 >> 2;
          if ( v18 != 0 )
          {
            v22 = &v5[4 * ((v6 - v19) >> 1)];
            memmove(&v13[4 * v28 + -4 * v18], v26, 4 * v18);
            v13 = v22;
          }
        }
        else
        {
          v17 = v16 >> 2;
          if ( v17 != 0 )
          {
            v21 = &v5[4 * ((v6 - v19) >> 1)];
            memmove(v13, v26, 4 * v17);
            v13 = v21;
          }
        }
      }
      else
      {
        v9 = 3;
        if ( v6 != 0 )
        {
          v9 = 2 * v6 + 2;
          if ( v9 > 0x3FFFFFFF )
            sub_18FFEE0(v5, 2 * v19);
        }
        v10 = opNew(4 * v9);
        dest = (void *)(v10 + 4 * ((v9 - v19) >> 1));
        src = (char *)a1[5];
        v12 = ((uint8_t *)a1[9] + 4 - (uint8_t *)(src)) >> 2;
        if ( v12 != 0 )
        {
          v23 = (void *)(v10 + 4 * ((v9 - v19) >> 1));
          v25 = v10;
          memmove(dest, src, 4 * v12);
          v10 = v25;
          dest = v23;
        }
        v20 = (char *)dest;
        v24 = v10;
        opDelete(*a1);
        a1[1] = (void *)v9;
        *a1 = (void *)v24;
        v13 = v20;
      }
      a1[5] = v13;
      v14 = *(char **)v13;
      a1[3] = *(void **)v13;
      a1[4] = v14 + 512;
      v4 = &v13[4 * v28 - 4];
      a1[9] = v4;
      v15 = *(char **)v4;
      a1[7] = *(void **)v4;
      a1[8] = v15 + 512;
    }
    *((uint32_t *)v4 + 1) = opNew(0x200u);
    v7 = (char *)a1[6];
    if ( v7 != nullptr )
      *(uint32_t *)v7 = *a2;
    v8 = (char *)a1[9] + 4;
    a1[9] = v8;
    result = *(char **)v8;
    a1[7] = *(void **)v8;
    a1[6] = result;
    a1[8] = result + 512;
  }
  else
  {
    v3 = nullptr;
    if ( result != nullptr )
    {
      *(uint32_t *)result = *a2;
      v3 = (char *)a1[6];
    }
    a1[6] = v3 + 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Deque_base_sociallib_GLWTManager_Se_c95a1e::M_initialize_map  (binary VA: 0x14268a0)
// Original: std::_Deque_base<sociallib::GLWTManager::ServiceRequest *>::_M_initialize_map
// ----------------------------------------------------------------------------
int g4_std::Deque_base_sociallib_GLWTManager_Se_c95a1e::M_initialize_map(std::_Deque_base<sociallib::GLWTManager::ServiceRequest *> *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;

  v2 = (a2 >> 7) + 1;
  v3 = (a2 >> 7) + 3;
  if ( v3 < 8 )
    v3 = 8;
  *((uint32_t *)self + 1) = v3;
  v4 = opNew(4 * v3);
  v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v4;
  v6 = (int *)(v4 + 4 * ((v5 - v2) >> 1));
  v12 = v6;
  v7 = (unsigned int)(uintptr_t)(&v6[v2]);
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    v8 = v6;
    do
      *v8++ = opNew(0x200u);
    while ( v7 > (unsigned int)(uintptr_t)(v8) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  v9 = *v12;
  *((uint32_t *)self + 3) = *v12;
  *((uint32_t *)self + 4) = v9 + 512;
  *((uint32_t *)self + 9) = v7 - 4;
  v10 = *(uint32_t *)(v7 - 4);
  *((uint32_t *)self + 2) = v9;
  *((uint32_t *)self + 7) = v10;
  *((uint32_t *)self + 8) = v10 + 512;
  result = v10 + 4 * (a2 & 0x7F);
  *((uint32_t *)self + 6) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1427120  (binary VA: 0x1427120)
// Original: sub_1427120
// ----------------------------------------------------------------------------
int sub_1427120()
{
  sub_1900D70(&unk_211992C);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211992C, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::remove_gnu_cxx_normal_iterator_2782df  (binary VA: 0x14285c0)
// Original: std::remove<__gnu_cxx::__normal_iterator<char *,std::string>,char>
// ----------------------------------------------------------------------------
uint32_t * g4_std::remove_gnu_cxx_normal_iterator_2782df(uint32_t *a1, uint8_t *a2, uint8_t *a3, char *a4)
{
  uint8_t *v4;
  int v5;
  int v6;
  char v7;
  uint8_t *v8;
  uint8_t *v9;
  uint8_t *i;
  char v12;

  v4 = a2;
  v5 = a3 - a2;
  v6 = (a3 - a2) >> 2;
  if ( v6 > 0 )
  {
    v7 = *a4;
    if ( *a2 != *a4 )
    {
      if ( v7 == a2[1] )
      {
        v4 = a2 + 1;
      }
      else if ( v7 == a2[2] )
      {
        v4 = a2 + 2;
      }
      else if ( v7 == a2[3] )
      {
        v4 = a2 + 3;
      }
      else
      {
        do
        {
          --v6;
          v9 = v4 + 4;
          v4 += 4;
          if ( v6 == 0 )
          {
            v5 = a3 - v4;
            goto LABEL_13;
          }
          if ( *v9 == v7 )
            goto LABEL_17;
          v8 = v4 + 1;
          if ( v9[1] == v7 )
            break;
          v8 = v4 + 2;
          if ( v9[2] == v7 )
            break;
          v8 = v4 + 3;
        }
        while ( v9[3] != v7 );
        v4 = v8;
      }
    }
    goto LABEL_17;
  }
LABEL_13:
  if ( v5 == 2 )
  {
    v12 = *a4;
LABEL_25:
    if ( v12 == *v4 )
      goto LABEL_17;
    ++v4;
    goto LABEL_27;
  }
  if ( v5 == 3 )
  {
    v12 = *a4;
    if ( *v4 == *a4 )
      goto LABEL_17;
    ++v4;
    goto LABEL_25;
  }
  if ( v5 != 1 )
  {
LABEL_16:
    *a1 = (uint32_t)(uintptr_t)(a3);
    return a1;
  }
  v12 = *a4;
LABEL_27:
  if ( *v4 != v12 )
    goto LABEL_16;
LABEL_17:
  if ( a3 == v4 )
    goto LABEL_16;
  for ( i = v4 + 1; i != a3; ++i )
  {
    if ( *i != *a4 )
      *v4++ = *i;
  }
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_14286E0  (binary VA: 0x14286e0)
// Original: sub_14286E0
// ----------------------------------------------------------------------------
int sub_14286E0()
{
  sub_1900D70(&unk_2119930);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119930, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert  (binary VA: 0x142b100)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(int *a1, int a2, int a3, int a4, const void **a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *((uint32_t *)*a5 - 3);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *((uint32_t *)*a5 - 3);
    v10 = memcmp(*a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x18u);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    g4_std::string::construct_copy(v12 + 20, a5 + 1);
    v6 = v12;
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique  (binary VA: 0x142b210)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(int *a1, uint32_t *a2, int a3, const void **a4)
{
  const void *s1;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v10;
  int v12;
  const void **v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  const void **v18;
  size_t v19;
  size_t v20;
  int v21;
  int v22;
  int v23;
  size_t v24;
  size_t v25;
  size_t v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef const void **_g4_t_v30;
  typedef size_t _g4_t_v31;
  typedef void *_g4_t_s2;
  typedef const void **_g4_t_v33;
  typedef const void **_g4_t_v34;
  typedef int _g4_t_v35[5];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v31)) > _g4_s2 ? (40u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_s2)) > _g4_s3 ? (48u + sizeof(_g4_t_s2)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v33)) > _g4_s4 ? (48u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v34)) > _g4_s5 ? (48u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v35)) > _g4_s6 ? (56u + sizeof(_g4_t_v35)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);

  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_35;
    v23 = a2[4];
    v24 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
    v25 = *((uint32_t *)*a4 - 3);
    v26 = v24;
    if ( v25 <= v24 )
      v26 = *((uint32_t *)*a4 - 3);
    v27 = v24 - v25;
    v28 = memcmp(*(const void **)(v23 + 16), *a4, v26);
    if ( v28 == 0 )
      v28 = v27;
    if ( v28 >= 0 )
      goto LABEL_35;
    v29 = v23;
    v30 = a4;
LABEL_37:
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      v29,
      v30);
    return a1;
  }
  s1 = *a4;
  v5 = *((uint32_t *)*a4 - 3);
  v6 = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  n = v5;
  if ( v6 <= v5 )
    n = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  s2 = *(void **)(a3 + 16);
  v31 = n;
  v8 = memcmp(*a4, s2, n);
  if ( v8 == 0 )
    v8 = v5 - v6;
  if ( v8 < 0 )
  {
    v12 = a2[3];
    if ( v12 == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v12,
        a2[3],
        a4);
      return a1;
    }
    v13 = (const void **)sub_1904940(a3);
    v14 = v5;
    v15 = *((uint32_t *)v13[4] - 3);
    v33 = v13;
    if ( v15 <= v5 )
      v14 = *((uint32_t *)v13[4] - 3);
    v16 = v15 - v5;
    v17 = memcmp(v13[4], s1, v14);
    if ( v17 != 0 )
      v16 = v17;
    if ( v16 >= 0 )
      goto LABEL_35;
    v30 = a4;
    if ( v33[3] != nullptr )
    {
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        a3,
        a3,
        a4);
      return a1;
    }
    v29 = (int)(uintptr_t)(v33);
    goto LABEL_37;
  }
  v9 = memcmp(s2, s1, v31);
  v10 = v6 - v5;
  if ( v9 != 0 )
    v10 = v9;
  if ( v10 >= 0 )
  {
    *a1 = a3;
    return a1;
  }
  if ( a2[4] == a3 )
  {
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a2[4],
      a4);
    return a1;
  }
  v18 = (const void **)sub_19048E0(a3);
  v19 = v5;
  v20 = *((uint32_t *)v18[4] - 3);
  v34 = v18;
  if ( v20 <= v5 )
    v19 = *((uint32_t *)v18[4] - 3);
  v21 = v5 - v20;
  v22 = memcmp(s1, v18[4], v19);
  if ( v22 != 0 )
    v21 = v22;
  if ( v21 >= 0 )
  {
LABEL_35:
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
      (int)(uintptr_t)(v35),
      a2,
      a4);
    *a1 = v35[0];
    return a1;
  }
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      (int)(uintptr_t)(v34),
      (int)(uintptr_t)(v34),
      a4);
  else
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert  (binary VA: 0x142b500)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,sociallib::SNSUserData>,std::_Select1st<std::pair<std::string const,sociallib::SNSUserData>>,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(int *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *i;
  size_t v10;
  size_t n;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  size_t v15;

  LOBYTE(v14) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v10 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v15 = n;
    if ( n > v10 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v12 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v13 = v10 - v15;
    if ( v12 == 0 )
      v12 = v13;
    v14 = v12 >> 31;
  }
  v5 = opNew(0x44u);
  if ( v5 != -16 )
  {
    g4_std::string::construct_copy(v5 + 16, a5);
    *(uint32_t *)(v5 + 24) = 0;
    *(uint32_t *)(v5 + 28) = 0;
    *(uint32_t *)(v5 + 40) = 0;
    *(uint32_t *)(v5 + 32) = v5 + 24;
    *(uint32_t *)(v5 + 36) = v5 + 24;
    v6 = *(uint32_t **)(a5 + 12);
    if ( v6 != nullptr )
    {
      v7 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             v5 + 20,
             v6,
             v5 + 24);
      *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v7);
      for ( i = v7; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *(uint32_t *)(v5 + 32) = (uint32_t)(uintptr_t)(i);
      while ( v7[3] != 0 )
        v7 = (uint32_t *)v7[3];
      *(uint32_t *)(v5 + 36) = (uint32_t)(uintptr_t)(v7);
      *(uint32_t *)(v5 + 40) = *(uint32_t *)(a5 + 24);
    }
    *(uint8_t *)(v5 + 44) = *(uint8_t *)(a5 + 28);
    sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
      (sociallib::CDynamicMemoryStream::Self *)(v5 + 48),
      (const sociallib::CDynamicMemoryStream::Self *)(a5 + 32));
  }
  sub_1904970(v14, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_142B650  (binary VA: 0x142b650)
// Original: sub_142B650
// ----------------------------------------------------------------------------
int sub_142B650()
{
  sub_1900D70(&unk_2119934);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119934, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_142BE60  (binary VA: 0x142be60)
// Original: sub_142BE60
// ----------------------------------------------------------------------------
int sub_142BE60()
{
  sub_1900D70(&unk_2119938);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119938, &unk_20D1280);
}


