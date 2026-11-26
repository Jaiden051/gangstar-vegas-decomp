#include "Core/Utils/DecompTypes.h"
#include "glwebtools_AttributeFormatter.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::Assert  (binary VA: 0x1403b70)
// Original: glwebtools::AttributeFormatter::Assert
// ----------------------------------------------------------------------------
int glwebtools::AttributeFormatter::Assert(const char **a1)
{
  return (int)(uintptr_t)(glwebtools::Console::Print((glwebtools::Console::Self *)((char *)&dword_0 + 1), (unsigned int)(uintptr_t)("Assert: %s"), *a1));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::ToString  (binary VA: 0x1403bb0)
// Original: glwebtools::AttributeFormatter::ToString
// ----------------------------------------------------------------------------
glwebtools::AttributeFormatter::Self * glwebtools::AttributeFormatter::ToString(glwebtools::AttributeFormatter::Self *self, char a2)
{
  void *v2;
  uint32_t *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int (**_g4_t_v8)(int);
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef uint32_t _g4_t_v11[2];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t _g4_t_v20[29];
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v12)) > _g4_s6 ? (40u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v13)) > _g4_s7 ? (44u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v14)) > _g4_s8 ? (48u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v15)) > _g4_s9 ? (52u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v16)) > _g4_s10 ? (56u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v17)) > _g4_s11 ? (60u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v18)) > _g4_s12 ? (64u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v19)) > _g4_s13 ? (68u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v20)) > _g4_s14 ? (72u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (188u + sizeof(_g4_t_v21)) > _g4_s15 ? (188u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (189u + sizeof(_g4_t_v22)) > _g4_s16 ? (189u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (192u + sizeof(_g4_t_v23)) > _g4_s17 ? (192u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (196u + sizeof(_g4_t_v24)) > _g4_s18 ? (196u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (200u + sizeof(_g4_t_v25)) > _g4_s19 ? (200u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (204u + sizeof(_g4_t_v26)) > _g4_s20 ? (204u + sizeof(_g4_t_v26)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 188u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 189u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 192u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 196u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 200u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 204u);

  sub_1900810(v20);
  v20[28] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v26 = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  sub_19119D0((char *)&v8 + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v11[1] = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v12 = 0;
  v13 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v14 = nullptr;
  v15 = 0;
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v16 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v17);
  v18 = 24;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v19 = &dword_213B814;
  sub_19119D0(v20, v11);
  *(int *)((char *)&v12 + (uint32_t)(uintptr_t)(*(v10 - 3))) |= 1u;
  sub_192DB00(&v10, a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
  {
    if ( v15 > (unsigned int)v13 )
    {
      sub_11A9950(&v7, v14, (uint8_t *)v15);
      g4_std::string::assign_str(self, &v7);
      v5 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(&v6, v14, (uint8_t *)v13);
      g4_std::string::assign_str(self, &v6);
      v2 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(self, &v19);
  }
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = v19 - 3;
  if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v17);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::ToString  (binary VA: 0x1403f80)
// Original: glwebtools::AttributeFormatter::ToString
// ----------------------------------------------------------------------------
glwebtools::AttributeFormatter::Self * glwebtools::AttributeFormatter::ToString(glwebtools::AttributeFormatter::Self *self, int64_t a2, int a3)
{
  void *v3;
  uint32_t *v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int (**_g4_t_v9)(int);
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef uint32_t _g4_t_v12[3];
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v14)) > _g4_s7 ? (48u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v15)) > _g4_s8 ? (52u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v16)) > _g4_s9 ? (56u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v18)) > _g4_s11 ? (64u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v19)) > _g4_s12 ? (68u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v20)) > _g4_s13 ? (72u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v21)) > _g4_s14 ? (84u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (184u + sizeof(_g4_t_v22)) > _g4_s15 ? (184u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (188u + sizeof(_g4_t_v23)) > _g4_s16 ? (188u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (189u + sizeof(_g4_t_v24)) > _g4_s17 ? (189u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v25)) > _g4_s18 ? (192u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (196u + sizeof(_g4_t_v26)) > _g4_s19 ? (196u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (200u + sizeof(_g4_t_v27)) > _g4_s20 ? (200u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (204u + sizeof(_g4_t_v28)) > _g4_s21 ? (204u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 184u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 188u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 189u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 192u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 196u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 200u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 204u);

  sub_1900810(v20);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v28 = 0;
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v10 = 0;
  sub_19119D0((char *)&v9 + (uint32_t)(uintptr_t)(*(v9 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v12[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v12[-1] + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v12[1] = 0;
  v9 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v12[2] = 0;
  v13 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v14 = nullptr;
  v15 = 0;
  v11 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v16 = 0;
  v12[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v17);
  v18 = 24;
  v12[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v19 = &dword_213B814;
  sub_19119D0(v20, v12);
  v21 |= 4u;
  v20[1] = a3;
  g4_std::ostream::op_shl_double(&v11, a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
  {
    if ( v15 > (unsigned int)v13 )
    {
      sub_11A9950(&v8, v14, (uint8_t *)v15);
      g4_std::string::assign_str(self, &v8);
      v6 = (void *)(v8 - 12);
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
    }
    else
    {
      sub_11A9950(&v7, v14, (uint8_t *)v13);
      g4_std::string::assign_str(self, &v7);
      v3 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(self, &v19);
  }
  v9 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v11 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v12[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v4 = v19 - 3;
  if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v12[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v17);
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v12[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v10 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::ToString  (binary VA: 0x1404350)
// Original: glwebtools::AttributeFormatter::ToString
// ----------------------------------------------------------------------------
glwebtools::AttributeFormatter::Self * glwebtools::AttributeFormatter::ToString(glwebtools::AttributeFormatter::Self *self, unsigned int a2)
{
  void *v2;
  uint32_t *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int (**_g4_t_v8)(int);
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef uint32_t _g4_t_v11[3];
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t _g4_t_v19[29];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v12)) > _g4_s6 ? (44u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v13)) > _g4_s7 ? (48u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v14)) > _g4_s8 ? (52u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v15)) > _g4_s9 ? (56u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v16)) > _g4_s10 ? (60u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v17)) > _g4_s11 ? (64u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v18)) > _g4_s12 ? (68u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v19)) > _g4_s13 ? (72u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (188u + sizeof(_g4_t_v20)) > _g4_s14 ? (188u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (189u + sizeof(_g4_t_v21)) > _g4_s15 ? (189u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v22)) > _g4_s16 ? (192u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (196u + sizeof(_g4_t_v23)) > _g4_s17 ? (196u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (200u + sizeof(_g4_t_v24)) > _g4_s18 ? (200u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (204u + sizeof(_g4_t_v25)) > _g4_s19 ? (204u + sizeof(_g4_t_v25)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 188u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 189u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 192u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 196u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 200u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 204u);

  sub_1900810(v19);
  v19[28] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v25 = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  sub_19119D0((char *)&v8 + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v11[1] = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v11[2] = 0;
  v12 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = nullptr;
  v14 = 0;
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v15 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v16);
  v17 = 24;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v18 = &dword_213B814;
  sub_19119D0(v19, v11);
  sub_192D8B0(&v10, a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v14 != 0 )
  {
    if ( v14 > (unsigned int)v12 )
    {
      sub_11A9950(&v7, v13, (uint8_t *)v14);
      g4_std::string::assign_str(self, &v7);
      v5 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(&v6, v13, (uint8_t *)v12);
      g4_std::string::assign_str(self, &v6);
      v2 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(self, &v18);
  }
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v16);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v19);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::ToString  (binary VA: 0x1404700)
// Original: glwebtools::AttributeFormatter::ToString
// ----------------------------------------------------------------------------
glwebtools::AttributeFormatter::Self * glwebtools::AttributeFormatter::ToString(glwebtools::AttributeFormatter::Self *self, int a2)
{
  void *v2;
  uint32_t *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int (**_g4_t_v8)(int);
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef uint32_t _g4_t_v11[3];
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t _g4_t_v19[29];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v12)) > _g4_s6 ? (44u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v13)) > _g4_s7 ? (48u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v14)) > _g4_s8 ? (52u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v15)) > _g4_s9 ? (56u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v16)) > _g4_s10 ? (60u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v17)) > _g4_s11 ? (64u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v18)) > _g4_s12 ? (68u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v19)) > _g4_s13 ? (72u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (188u + sizeof(_g4_t_v20)) > _g4_s14 ? (188u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (189u + sizeof(_g4_t_v21)) > _g4_s15 ? (189u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v22)) > _g4_s16 ? (192u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (196u + sizeof(_g4_t_v23)) > _g4_s17 ? (196u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (200u + sizeof(_g4_t_v24)) > _g4_s18 ? (200u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (204u + sizeof(_g4_t_v25)) > _g4_s19 ? (204u + sizeof(_g4_t_v25)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 188u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 189u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 192u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 196u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 200u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 204u);

  sub_1900810(v19);
  v19[28] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v25 = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  sub_19119D0((char *)&v8 + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v11[1] = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v11[2] = 0;
  v12 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = nullptr;
  v14 = 0;
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v15 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v16);
  v17 = 24;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v18 = &dword_213B814;
  sub_19119D0(v19, v11);
  g4_std::ostream::op_shl_int(&v10, a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v14 != 0 )
  {
    if ( v14 > (unsigned int)v12 )
    {
      sub_11A9950(&v7, v13, (uint8_t *)v14);
      g4_std::string::assign_str(self, &v7);
      v5 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(&v6, v13, (uint8_t *)v12);
      g4_std::string::assign_str(self, &v6);
      v2 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(self, &v18);
  }
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v16);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v19);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::ToString  (binary VA: 0x1404ab0)
// Original: glwebtools::AttributeFormatter::ToString
// ----------------------------------------------------------------------------
glwebtools::AttributeFormatter::Self * glwebtools::AttributeFormatter::ToString(glwebtools::AttributeFormatter::Self *self, float a2, int a3)
{
  void *v3;
  uint32_t *v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int (**_g4_t_v9)(int);
  typedef int _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef uint32_t _g4_t_v12[3];
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v14)) > _g4_s7 ? (48u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v15)) > _g4_s8 ? (52u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v16)) > _g4_s9 ? (56u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v18)) > _g4_s11 ? (64u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v19)) > _g4_s12 ? (68u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v20)) > _g4_s13 ? (72u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v21)) > _g4_s14 ? (84u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (184u + sizeof(_g4_t_v22)) > _g4_s15 ? (184u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (188u + sizeof(_g4_t_v23)) > _g4_s16 ? (188u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (189u + sizeof(_g4_t_v24)) > _g4_s17 ? (189u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v25)) > _g4_s18 ? (192u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (196u + sizeof(_g4_t_v26)) > _g4_s19 ? (196u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (200u + sizeof(_g4_t_v27)) > _g4_s20 ? (200u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (204u + sizeof(_g4_t_v28)) > _g4_s21 ? (204u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 184u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 188u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 189u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 192u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 196u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 200u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 204u);

  sub_1900810(v20);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v28 = 0;
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v10 = 0;
  sub_19119D0((char *)&v9 + (uint32_t)(uintptr_t)(*(v9 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v12[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v12[-1] + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v12[1] = 0;
  v9 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v12[2] = 0;
  v13 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v14 = nullptr;
  v15 = 0;
  v11 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v16 = 0;
  v12[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v17);
  v18 = 24;
  v12[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v19 = &dword_213B814;
  sub_19119D0(v20, v12);
  v21 |= 4u;
  v20[1] = a3;
  g4_std::ostream::op_shl_double(&v11, COERCE__INT64(a2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v15 != 0 )
  {
    if ( v15 > (unsigned int)v13 )
    {
      sub_11A9950(&v8, v14, (uint8_t *)v15);
      g4_std::string::assign_str(self, &v8);
      v6 = (void *)(v8 - 12);
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
    }
    else
    {
      sub_11A9950(&v7, v14, (uint8_t *)v13);
      g4_std::string::assign_str(self, &v7);
      v3 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(self, &v19);
  }
  v9 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v11 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v12[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v4 = v19 - 3;
  if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v12[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v17);
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v12[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v9 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v9 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v10 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::AttributeFormatter::ToString  (binary VA: 0x1404e70)
// Original: glwebtools::AttributeFormatter::ToString
// ----------------------------------------------------------------------------
glwebtools::AttributeFormatter::Self * glwebtools::AttributeFormatter::ToString(glwebtools::AttributeFormatter::Self *self, int64_t a2)
{
  void *v2;
  uint32_t *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int (**_g4_t_v8)(int);
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef uint32_t _g4_t_v11[3];
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t _g4_t_v19[29];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v12)) > _g4_s6 ? (44u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v13)) > _g4_s7 ? (48u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v14)) > _g4_s8 ? (52u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v15)) > _g4_s9 ? (56u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v16)) > _g4_s10 ? (60u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v17)) > _g4_s11 ? (64u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v18)) > _g4_s12 ? (68u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v19)) > _g4_s13 ? (72u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (188u + sizeof(_g4_t_v20)) > _g4_s14 ? (188u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (189u + sizeof(_g4_t_v21)) > _g4_s15 ? (189u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v22)) > _g4_s16 ? (192u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (196u + sizeof(_g4_t_v23)) > _g4_s17 ? (196u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (200u + sizeof(_g4_t_v24)) > _g4_s18 ? (200u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (204u + sizeof(_g4_t_v25)) > _g4_s19 ? (204u + sizeof(_g4_t_v25)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 188u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 189u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 192u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 196u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 200u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 204u);

  sub_1900810(v19);
  v19[28] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v25 = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  sub_19119D0((char *)&v8 + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v11[1] = 0;
  v11[2] = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v12 = 0;
  v13 = nullptr;
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14 = 0;
  v15 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v16);
  v17 = 24;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v18 = &dword_213B814;
  sub_19119D0(v19, v11);
  sub_192DD40(&v10, a2, HIDWORD(a2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v14 != 0 )
  {
    if ( v14 > (unsigned int)v12 )
    {
      sub_11A9950(&v7, v13, (uint8_t *)v14);
      g4_std::string::assign_str(self, &v7);
      v5 = (void *)(v7 - 12);
      if ( (uint32_t *)(v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(&v6, v13, (uint8_t *)v12);
      g4_std::string::assign_str(self, &v6);
      v2 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(self, &v18);
  }
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v16);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v19);
  return self;
}


