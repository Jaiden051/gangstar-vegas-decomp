#include "Core/Utils/DecompTypes.h"
#include "glf_PropertyMap.h"

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::SetDefaultProperties  (binary VA: 0xc7cec0)
// Original: glf::PropertyMap::SetDefaultProperties
// ----------------------------------------------------------------------------
void glf::PropertyMap::SetDefaultProperties()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::Value::getAsString  (binary VA: 0xc7cee0)
// Original: glf::PropertyMap::Value::getAsString
// ----------------------------------------------------------------------------
glf::PropertyMap::Value::Self * glf::PropertyMap::Value::getAsString(glf::PropertyMap::Value::Self *self, int a2, char a3)
{
  int v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  size_t *v8;
  volatile int32_t *v9;
  int v10;
  const char *v11;
  const char *v12;
  int v13;
  const char *v14;
  int v15;
  int v16;
  const char *v17;
  int v18;
  const char *v19;
  typedef uint8_t *_g4_t_v20;
  typedef size_t *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef size_t *_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  typedef int (**_g4_t_v34)(int);
  typedef int _g4_t_v35;
  typedef int (**_g4_t_v36)(int);
  typedef uint32_t _g4_t_v37[3];
  typedef uint8_t *_g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef uint8_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[2];
  typedef volatile int32_t *_g4_t_v43;
  typedef uint32_t _g4_t_v44[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v26)) > _g4_s6 ? (20u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v28)) > _g4_s8 ? (24u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v29)) > _g4_s9 ? (24u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v30)) > _g4_s10 ? (24u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v31)) > _g4_s11 ? (28u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v32)) > _g4_s12 ? (40u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v33)) > _g4_s13 ? (44u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v34)) > _g4_s14 ? (48u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v35)) > _g4_s15 ? (52u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v36)) > _g4_s16 ? (56u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v37)) > _g4_s17 ? (60u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v38)) > _g4_s18 ? (72u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v39)) > _g4_s19 ? (76u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v40)) > _g4_s20 ? (80u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v41)) > _g4_s21 ? (84u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v42)) > _g4_s22 ? (88u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v43)) > _g4_s23 ? (96u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v44)) > _g4_s24 ? (100u + sizeof(_g4_t_v44)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);

  sub_1900810(v44);
  v44[28] = 0;
  LOWORD(v44[29]) = 0;
  memset(&v44[30], 0, 16);
  v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v34 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v35 = 0;
  sub_19119D0((char *)&v34 + (uint32_t)(uintptr_t)(*(v34 - 3)), 0);
  v36 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v37[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v37[-1] + (uint32_t)(uintptr_t)(*(v36 - 3)), 0);
  v34 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v34 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v37[1] = 0;
  v37[2] = 0;
  v44[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v38 = nullptr;
  v39 = nullptr;
  v36 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v40 = nullptr;
  v41 = 0;
  v37[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v42);
  v42[1] = 24;
  v37[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v43 = (volatile int32_t *)&dword_213B814;
  sub_19119D0(v44, v37);
  v3 = *(uint32_t *)(a2 + 4);
  switch ( v3 )
  {
    case 4:
      v10 = 0;
      v11 = (const char *)&unk_1B15112;
      if ( a3 != 0 )
      {
        LOBYTE(v10) = 7;
        v11 = "(bool) ";
      }
      v22 = *(uint8_t *)(a2 + 8);
      g4_std_compat::ostream_write(&v36, v11, v10);
      sub_192DB00(&v36, v22);
      break;
    case 1:
      v12 = (const char *)&unk_1B15112;
      v13 = 0;
      if ( a3 != 0 )
      {
        LOBYTE(v13) = 8;
        v12 = "(int32) ";
      }
      v23 = *(uint32_t *)(a2 + 8);
      g4_std_compat::ostream_write(&v36, v12, v13);
      g4_std::ostream::op_shl_int(&v36, v23);
      break;
    case 2:
      v14 = (const char *)&unk_1B15112;
      v31 = *(uint32_t *)(a2 + 12);
      v15 = 0;
      v29 = *(uint32_t *)(a2 + 8);
      if ( a3 != 0 )
      {
        LOBYTE(v15) = 8;
        v14 = "(int64) ";
      }
      g4_std_compat::ostream_write(&v36, v14, v15);
      sub_192DD40(&v36, v29, v31);
      break;
    case 3:
      v18 = 0;
      v30 = *(float *)(a2 + 8);
      v19 = (const char *)&unk_1B15112;
      if ( a3 != 0 )
      {
        LOBYTE(v18) = 8;
        v19 = "(float) ";
      }
      g4_std_compat::ostream_write(&v36, v19, v18);
      g4_std::ostream::op_shl_double(&v36, COERCE__INT64(v30));
      break;
    case 5:
      v16 = 0;
      v17 = (const char *)&unk_1B15112;
      if ( a3 != 0 )
      {
        LOBYTE(v16) = 9;
        v17 = "(string) ";
      }
      g4_std_compat::ostream_write(&v36, v17, v16);
      g4_std_compat::ostream_write(&v36, *(uint32_t *)(a2 + 16), *(uint32_t *)(*(uint32_t *)(a2 + 16) - 12));
      break;
    default:
      break;
  }
  v4 = (volatile int32_t *)&dword_213B814;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v40 == nullptr )
  {
    g4_std::string::assign_str(self, &v43);
    goto LABEL_15;
  }
  if ( v40 > v38 )
  {
    if ( v40 == v39 )
    {
LABEL_14:
      v33 = v4;
      g4_std::string::assign_str(self, &v33);
      v5 = v33 - 3;
      if ( v33 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)v5);
      goto LABEL_15;
    }
    if ( v39 != nullptr )
    {
      v20 = v39;
      v27 = v40 - v39;
      v25 = (size_t *)sub_1938930(v40 - v39, 0);
      v4 = (volatile int32_t *)(v25 + 3);
      if ( v27 == 1 )
      {
        *((uint8_t *)v25 + 12) = *v20;
      }
      else
      {
        memcpy((void *)v4, v20, v27);
        v4 = (volatile int32_t *)(v25 + 3);
      }
      if ( v25 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v25[2] = 0;
        *v25 = v27;
        *((uint8_t *)v25 + v27 + 12) = 0;
      }
      goto LABEL_14;
    }
LABEL_43:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v28 = v39;
  if ( v38 != v39 )
  {
    if ( v39 != nullptr )
    {
      v26 = v38 - v39;
      v8 = (size_t *)sub_1938930(v38 - v39, 0);
      v4 = (volatile int32_t *)(v8 + 3);
      if ( v26 == 1 )
      {
        *((uint8_t *)v8 + 12) = *v28;
LABEL_21:
        if ( v8 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v8[2] = 0;
          *v8 = v26;
          *((uint8_t *)v4 + v26) = 0;
        }
        goto LABEL_23;
      }
    }
    else
    {
      if ( v38 != nullptr )
        goto LABEL_43;
      v8 = (size_t *)sub_1938930(0, 0);
      v4 = (volatile int32_t *)(v8 + 3);
      v26 = 0;
    }
    v21 = v8;
    v24 = v4;
    memcpy((void *)v4, v28, v26);
    v4 = v24;
    v8 = v21;
    goto LABEL_21;
  }
LABEL_23:
  v32 = v4;
  g4_std::string::assign_str(self, &v32);
  v9 = v32 - 3;
  if ( v32 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v9);
LABEL_15:
  v34 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v44[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v36 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v37[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v6 = v43 - 3;
  if ( v43 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v6);
  v37[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v42);
  v34 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v36 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v37[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v34 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v35 = 0;
  v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v44);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::Construct  (binary VA: 0xc7d790)
// Original: glf::PropertyMap::PropertyMap
// ----------------------------------------------------------------------------
void glf::PropertyMap::Construct(glf::PropertyMap::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 29) = 0;
  *((uint8_t *)self + 28) = 0;
  glf::PropertyMap::sThis = (uintptr_t)(uintptr_t)(self);
  glf::PropertyMap::SetDefaultProperties();
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::GetProperties  (binary VA: 0xc7d7f0)
// Original: glf::PropertyMap::GetProperties
// ----------------------------------------------------------------------------
char * glf::PropertyMap::GetProperties(glf::PropertyMap::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::HasProperty  (binary VA: 0xc7d800)
// Original: glf::PropertyMap::HasProperty
// ----------------------------------------------------------------------------
bool glf::PropertyMap::HasProperty(int a1, void **a2)
{
  int v2;
  bool result;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v14;

  v2 = *(uint32_t *)(a1 + 12);
  result = false;
  if ( v2 != 0 )
  {
    v14 = a1 + 8;
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
        n = v5;
        if ( v4 <= v5 )
          n = v4;
        v7 = v5 - v4;
        v8 = memcmp(*(const void **)(v2 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v14 = v2;
        v2 = *(uint32_t *)(v2 + 8);
        if ( v2 == 0 )
          goto LABEL_10;
      }
      v2 = *(uint32_t *)(v2 + 12);
    }
    while ( v2 != 0 );
LABEL_10:
    if ( a1 + 8 == v14 )
    {
      return false;
    }
    else
    {
      v9 = v4;
      v10 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      if ( v10 <= v4 )
        v9 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      v11 = v4 - v10;
      v12 = memcmp(s2, *(const void **)(v14 + 16), v9);
      if ( v12 == 0 )
        v12 = v11;
      return v12 >= 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::GetProperty  (binary VA: 0xc7d8d0)
// Original: glf::PropertyMap::GetProperty
// ----------------------------------------------------------------------------
int glf::PropertyMap::GetProperty(int a1, void **a2)
{
  int v2;
  size_t v3;
  size_t n;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  int result;
  void *s2;
  int v14;

  v2 = *(uint32_t *)(a1 + 12);
  if ( v2 == 0 )
    return a1;
  v14 = a1 + 8;
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      n = v3;
      v5 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      if ( v5 <= v3 )
        n = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      v6 = v5 - v3;
      v7 = memcmp(*(const void **)(v2 + 16), s2, n);
      if ( v7 != 0 )
        v6 = v7;
      if ( v6 < 0 )
        break;
      v14 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_10;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_10:
  if ( a1 + 8 == v14 )
    return a1;
  v8 = v3;
  v9 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
  if ( v9 <= v3 )
    v8 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
  v10 = v3 - v9;
  v11 = memcmp(s2, *(const void **)(v14 + 16), v8);
  if ( v11 == 0 )
    v11 = v10;
  if ( v11 < 0 )
    return a1;
  result = v14 + 36;
  if ( *(uint32_t *)(v14 + 24) != 5 )
    return a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::GetPropertyEx  (binary VA: 0xc7d9c0)
// Original: glf::PropertyMap::GetPropertyEx
// ----------------------------------------------------------------------------
uint32_t * glf::PropertyMap::GetPropertyEx(uint32_t *a1, int a2, void **a3, int a4)
{
  int v4;
  size_t v5;
  size_t n;
  size_t v7;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  void *s2;
  int v19;

  v4 = *(uint32_t *)(a2 + 12);
  v19 = a2 + 8;
  v17 = a2 + 8;
  if ( v4 != 0 )
  {
    s2 = *a3;
    v5 = *((uint32_t *)*a3 - 3);
    do
    {
      while ( 1 )
      {
        n = v5;
        v7 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
        if ( v7 <= v5 )
          n = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
        v8 = v7 - v5;
        v9 = memcmp(*(const void **)(v4 + 16), s2, n);
        if ( v9 != 0 )
          v8 = v9;
        if ( v8 < 0 )
          break;
        v17 = v4;
        v4 = *(uint32_t *)(v4 + 8);
        if ( v4 == 0 )
          goto LABEL_10;
      }
      v4 = *(uint32_t *)(v4 + 12);
    }
    while ( v4 != 0 );
LABEL_10:
    if ( v19 == v17 )
    {
      v17 = a2 + 8;
    }
    else
    {
      v10 = v5;
      v11 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
      if ( v11 <= v5 )
        v10 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
      v12 = v5 - v11;
      v13 = memcmp(s2, *(const void **)(v17 + 16), v10);
      v14 = a2 + 8;
      if ( v13 == 0 )
        v13 = v12;
      if ( v13 >= 0 )
        v14 = v17;
      v17 = v14;
    }
  }
  memset(a1, 0, 0x18u);
  a1[2] = 6;
  a1[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v19 == v17 )
  {
    *a1 = 2;
    return a1;
  }
  else
  {
    a1[1] = *(uint32_t *)(v17 + 20);
    a1[2] = *(uint32_t *)(v17 + 24);
    v15 = *(uint32_t *)(v17 + 32);
    a1[3] = *(uint32_t *)(v17 + 28);
    a1[4] = v15;
    g4_std::string::assign_str(a1 + 5, v17 + 36);
    if ( a4 != 0 )
    {
      *a1 = a4 != a1[2];
      return a1;
    }
    else
    {
      *a1 = 0;
      return a1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::PrintAll  (binary VA: 0xc7db60)
// Original: glf::PropertyMap::PrintAll
// ----------------------------------------------------------------------------
void glf::PropertyMap::PrintAll(glf::PropertyMap::Self *self)
{
  int v1;
  char *v2;
  int v3;
  const char *v4;
  const char *v5;

  v1 = *((uint32_t *)self + 4);
  v2 = (char *)self + 8;
  if ( (glf::PropertyMap::Self *)v1 != (glf::PropertyMap::Self *)((char *)self + 8) )
  {
    do
    {
      while ( 1 )
      {
        v3 = *(uint32_t *)(v1 + 24);
        v4 = *(const char **)(v1 + 16);
        if ( v3 != 1 )
          break;
        glf::Console::Println((glf::Console::Self *)"%s(int32)-> %d", *(const char **)(v1 + 16), *(uint32_t *)(v1 + 28));
LABEL_6:
        v1 = sub_19048E0(v1);
        if ( (char *)v1 == v2 )
          return;
      }
      if ( v3 == 2 )
      {
        glf::Console::Println((glf::Console::Self *)"%s(int64) -> %lld", v4, *(uint32_t *)(v1 + 28), *(uint32_t *)(v1 + 32));
        goto LABEL_6;
      }
      if ( v3 != 4 )
      {
        if ( v3 == 3 )
        {
          glf::Console::Println((glf::Console::Self *)"%s(float) -> %f", *(const char **)(v1 + 16), *(float *)(v1 + 28));
        }
        else if ( v3 == 5 )
        {
          glf::Console::Println((glf::Console::Self *)"%s(string) -> %s", *(const char **)(v1 + 16), *(uint32_t *)(v1 + 36));
        }
        goto LABEL_6;
      }
      v5 = "true";
      if ( *(uint8_t *)(v1 + 28) == 0 )
        v5 = "false";
      glf::Console::Println((glf::Console::Self *)"%s(bool) -> %s", v4, v5);
      v1 = sub_19048E0(v1);
    }
    while ( (char *)v1 != v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::GetTypeName  (binary VA: 0xc7dca0)
// Original: glf::PropertyMap::GetTypeName
// ----------------------------------------------------------------------------
int glf::PropertyMap::GetTypeName(int a1)
{
  uint32_t v2[7];

  v2[0] = (uint32_t)(uintptr_t)("any");
  v2[1] = (uint32_t)(uintptr_t)("int32");
  v2[2] = (uint32_t)(uintptr_t)("int64");
  v2[3] = (uint32_t)(uintptr_t)("float");
  v2[4] = (uint32_t)(uintptr_t)("bool");
  v2[5] = (uint32_t)(uintptr_t)("string");
  v2[6] = (uint32_t)(uintptr_t)("invalid");
  return v2[a1];
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::GetTypeFromName  (binary VA: 0xc7e5e0)
// Original: glf::PropertyMap::GetTypeFromName
// ----------------------------------------------------------------------------
int glf::PropertyMap::GetTypeFromName(glf::PropertyMap::Self *self)
{
  const char *s1;
  int v2;
  int v3;
  const char *TypeName;
  int v5;
  const char *v6;
  int v7;
  const char *v8;
  int v9;
  const char *v10;
  int v11;
  const char *v12;

  s1 = (const char *)glf::PropertyMap::GetTypeName(0);
  v2 = strcmp(s1, (const char *)self);
  v3 = 0;
  if ( v2 != 0 )
  {
    TypeName = (const char *)glf::PropertyMap::GetTypeName(1);
    v5 = strcmp(TypeName, (const char *)self);
    v3 = 1;
    if ( v5 != 0 )
    {
      v6 = (const char *)glf::PropertyMap::GetTypeName(2);
      v7 = strcmp(v6, (const char *)self);
      v3 = 2;
      if ( v7 != 0 )
      {
        v8 = (const char *)glf::PropertyMap::GetTypeName(3);
        v9 = strcmp(v8, (const char *)self);
        v3 = 3;
        if ( v9 != 0 )
        {
          v10 = (const char *)glf::PropertyMap::GetTypeName(4);
          v11 = strcmp(v10, (const char *)self);
          v3 = 4;
          if ( v11 != 0 )
          {
            v12 = (const char *)glf::PropertyMap::GetTypeName(5);
            return 6 - (strcmp(v12, (const char *)self) == 0);
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::SavePersistant  (binary VA: 0xc7e6d0)
// Original: glf::PropertyMap::SavePersistant
// ----------------------------------------------------------------------------
void glf::PropertyMap::SavePersistant(int a1, int a2, int a3, int a4, glf::PropertyMap::Self *self)
{
  glf::PropertyMap::Self *v5;
  int v6;
  size_t v7;
  size_t v8;
  size_t v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  uint32_t *v13;
  char *v14;
  size_t *v15;
  size_t *v16;
  void *retaddr;
  typedef const char *_g4_t_s;
  typedef uint8_t *_g4_t_src;
  typedef size_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef const char *_g4_t_TypeName;
  typedef const char *_g4_t_v22;
  typedef size_t *_g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef size_t _g4_t_n;
  typedef uint8_t *_g4_t_v28;
  typedef const char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t _g4_t_v33[13];
  typedef int (**_g4_t_v34)(int);
  typedef int _g4_t_v35;
  typedef int (**_g4_t_v36)(int);
  typedef uint32_t _g4_t_v37[3];
  typedef uint8_t *_g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef uint8_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[2];
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t _g4_t_v44[29];
  typedef int16_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef glf::PropertyMap::Self **_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef void *_g4_t_v55;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (4u + sizeof(_g4_t_s)) > _g4_s0 ? (4u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_src)) > _g4_s1 ? (4u + sizeof(_g4_t_src)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v20)) > _g4_s3 ? (8u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_TypeName)) > _g4_s4 ? (12u + sizeof(_g4_t_TypeName)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v26)) > _g4_s9 ? (28u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_n)) > _g4_s10 ? (28u + sizeof(_g4_t_n)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v28)) > _g4_s11 ? (28u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v29)) > _g4_s12 ? (48u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v30)) > _g4_s13 ? (64u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v31)) > _g4_s14 ? (68u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v32)) > _g4_s15 ? (72u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v33)) > _g4_s16 ? (76u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v34)) > _g4_s17 ? (128u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v35)) > _g4_s18 ? (132u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v36)) > _g4_s19 ? (136u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v37)) > _g4_s20 ? (140u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v38)) > _g4_s21 ? (152u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v39)) > _g4_s22 ? (156u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v40)) > _g4_s23 ? (160u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v41)) > _g4_s24 ? (164u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v42)) > _g4_s25 ? (168u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v43)) > _g4_s26 ? (176u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v44)) > _g4_s27 ? (180u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (296u + sizeof(_g4_t_v45)) > _g4_s28 ? (296u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (300u + sizeof(_g4_t_v46)) > _g4_s29 ? (300u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (304u + sizeof(_g4_t_v47)) > _g4_s30 ? (304u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (308u + sizeof(_g4_t_v48)) > _g4_s31 ? (308u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (312u + sizeof(_g4_t_v49)) > _g4_s32 ? (312u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (328u + sizeof(_g4_t_v50)) > _g4_s33 ? (328u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (332u + sizeof(_g4_t_v51)) > _g4_s34 ? (332u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (336u + sizeof(_g4_t_v52)) > _g4_s35 ? (336u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (340u + sizeof(_g4_t_v53)) > _g4_s36 ? (340u + sizeof(_g4_t_v53)) : _g4_s36,
    _g4_s38 = (344u + sizeof(_g4_t_v54)) > _g4_s37 ? (344u + sizeof(_g4_t_v54)) : _g4_s37,
    _g4_s39 = (348u + sizeof(_g4_t_v55)) > _g4_s38 ? (348u + sizeof(_g4_t_v55)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 4u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_TypeName &TypeName = *reinterpret_cast<_g4_t_TypeName *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 132u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 136u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 152u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 156u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 160u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 164u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 168u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 180u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 296u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 300u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 304u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 308u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 312u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 328u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 332u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 336u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 340u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 344u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 348u);

  if ( *((uint8_t *)self + 29) != 0 )
  {
    v55 = retaddr;
    v54 = a2;
    v53 = a3;
    v5 = self;
    v52 = a4;
    v51 = a1;
    v50 = &self;
    glf::FileStreamImpl::Construct((glf::IOStream::Self *)v33, (int)(uintptr_t)("properties.bin"), 4122);
    v33[0] = ((uint32_t)(uintptr_t)&off_2048D28);
    if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v33) == 0
      || (glf::PropertyMap::Self *)(v6 = *((uint32_t *)v5 + 4)) == (glf::PropertyMap::Self *)((char *)v5 + 8) )
    {
LABEL_4:
      v33[0] = ((uint32_t)(uintptr_t)&off_2048D28);
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v33);
      return;
    }
    while ( (*(uint8_t *)(v6 + 20) & 1) == 0 )
    {
LABEL_25:
      v6 = sub_19048E0(v6);
      if ( (glf::PropertyMap::Self *)v6 == (glf::PropertyMap::Self *)((char *)v5 + 8) )
        goto LABEL_4;
    }
    s = *(const char **)(v6 + 16);
    glf::PropertyMap::Value::getAsString((glf::PropertyMap::Value::Self *)&v29, v6 + 20, 0);
    v25 = *(uint32_t *)(v6 + 20) & 0xFFFFFFFE;
    sub_1900810(v44);
    v44[28] = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v49 = 0;
    v34 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v35 = 0;
    sub_19119D0((char *)&v34 + (uint32_t)(uintptr_t)(*(v34 - 3)), 0);
    v36 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v37[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v37[-1] + (uint32_t)(uintptr_t)(*(v36 - 3)), 0);
    v34 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v37[1] = 0;
    v37[2] = 0;
    v38 = nullptr;
    v39 = nullptr;
    v40 = nullptr;
    v41 = 0;
    v34 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v44[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v36 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v37[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v42);
    v42[1] = 24;
    v37[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v43 = &dword_213B814;
    sub_19119D0(v44, v37);
    v22 = v29;
    TypeName = (const char *)glf::PropertyMap::GetTypeName(*(uint32_t *)(v6 + 24));
    if ( s != nullptr )
    {
      v7 = strlen(s);
      g4_std_compat::ostream_write(&v36, s, v7);
    }
    else
    {
      sub_1911530((char *)&v37[-1] + (uint32_t)(uintptr_t)(*(v36 - 3)), *(uint32_t *)((char *)&v37[4] + (uint32_t)(uintptr_t)(*(v36 - 3))) | 1);
    }
    g4_std_compat::ostream_write(&v36, " ", 1);
    if ( TypeName != nullptr )
    {
      v8 = strlen(TypeName);
      g4_std_compat::ostream_write(&v36, TypeName, v8);
    }
    else
    {
      sub_1911530((char *)&v37[-1] + (uint32_t)(uintptr_t)(*(v36 - 3)), *(uint32_t *)((char *)&v37[4] + (uint32_t)(uintptr_t)(*(v36 - 3))) | 1);
    }
    g4_std_compat::ostream_write(&v36, " ", 1);
    v26 = (uint32_t *)g4_std::ostream::op_shl_int(&v36, v25);
    g4_std_compat::ostream_write(v26, " ", 1);
    if ( v22 != nullptr )
    {
      v9 = strlen(v22);
      g4_std_compat::ostream_write(v26, v22, v9);
    }
    else
    {
      sub_1911530((char *)v26 + *(uint32_t *)(*v26 - 12), *(uint32_t *)((char *)v26 + *(uint32_t *)(*v26 - 12) + 20) | 1);
    }
    g4_std_compat::ostream_write(v26, &a0[1], 1);
    v10 = &dword_213B814;
    v30 = (char *)&dword_213B814;
    if ( v40 == nullptr )
    {
      g4_std::string::assign_str(&v30, &v43);
LABEL_20:
      glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v33, v30, *((uint32_t *)v30 - 3));
      v12 = v30 - 12;
      if ( v30 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v30 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v34 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
      v44[0] = (uint32_t)(uintptr_t)(&off_20AB014);
      v36 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
      v37[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v13 = v43 - 3;
      if ( v43 - 3 != dword_213B808 && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v13);
      v37[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v42);
      v34 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
      *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
      v36 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
      *(uint32_t *)((char *)&v37[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
      v34 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
      *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
      v35 = 0;
      v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v44);
      v14 = (char *)(v29 - 12);
      if ( v29 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v29 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      goto LABEL_25;
    }
    if ( v40 > v38 )
    {
      if ( v40 != v39 )
      {
        if ( v39 == nullptr )
          goto LABEL_43;
        src = v39;
        n = v40 - v39;
        v23 = (size_t *)sub_1938930(v40 - v39, 0);
        v10 = (uint32_t *)(v23 + 3);
        if ( n == 1 )
        {
          *((uint8_t *)v23 + 12) = *src;
        }
        else
        {
          memcpy(v10, src, n);
          v10 = (uint32_t *)(v23 + 3);
        }
        if ( v23 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v23[2] = 0;
          *v23 = n;
          *((uint8_t *)v23 + n + 12) = 0;
        }
      }
      v32 = v10;
      g4_std::string::assign_str(&v30, &v32);
      v11 = v32 - 3;
      if ( v32 - 3 == dword_213B808 || __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_20;
LABEL_36:
      g4_std::string::Rep::M_destroy(v11);
      goto LABEL_20;
    }
    v28 = v39;
    if ( v38 == v39 )
    {
LABEL_34:
      v31 = v10;
      g4_std::string::assign_str(&v30, &v31);
      v11 = v31 - 3;
      if ( v31 - 3 == dword_213B808 || __sync_fetch_and_add(v31 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_20;
      goto LABEL_36;
    }
    if ( v39 != nullptr )
    {
      v24 = v38 - v39;
      v15 = (size_t *)sub_1938930(v38 - v39, 0);
      v16 = v15;
      v10 = (uint32_t *)(v15 + 3);
      if ( v24 == 1 )
      {
        *((uint8_t *)v15 + 12) = *v28;
LABEL_32:
        if ( v16 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v16[2] = 0;
          *v16 = v24;
          *((uint8_t *)v10 + v24) = 0;
        }
        goto LABEL_34;
      }
    }
    else
    {
      if ( v38 != nullptr )
LABEL_43:
        sub_18FFFD0("basic_string::_S_construct null not valid");
      v16 = (size_t *)sub_1938930(0, 0);
      v10 = (uint32_t *)(v16 + 3);
      v24 = 0;
    }
    v19 = v16;
    v20 = v10;
    memcpy(v10, v28, v24);
    v10 = v20;
    v16 = v19;
    goto LABEL_32;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::SetPersistant  (binary VA: 0xc7e6f0)
// Original: glf::PropertyMap::SetPersistant
// ----------------------------------------------------------------------------
void glf::PropertyMap::SetPersistant(glf::PropertyMap::Self *a1, void **a2)
{
  char *v2;
  size_t v3;
  size_t n;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  unsigned int v9;
  int v10;
  int v11;
  void *s2;
  char *v13;

  v2 = *((char **)a1 + 3);
  if ( v2 != nullptr )
  {
    v13 = (char *)a1 + 8;
    s2 = *a2;
    v3 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        n = v3;
        v5 = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
        if ( v5 <= v3 )
          n = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
        v6 = v5 - v3;
        v7 = memcmp(*((const void **)v2 + 4), s2, n);
        if ( v7 != 0 )
          v6 = v7;
        if ( v6 < 0 )
          break;
        v13 = v2;
        v2 = *((char **)v2 + 2);
        if ( v2 == nullptr )
          goto LABEL_10;
      }
      v2 = *((char **)v2 + 3);
    }
    while ( v2 != nullptr );
LABEL_10:
    if ( (char *)a1 + 8 != v13 )
    {
      v8 = v3;
      v9 = *(uint32_t *)(*((uint32_t *)v13 + 4) - 12);
      if ( v9 <= v3 )
        v8 = *(uint32_t *)(*((uint32_t *)v13 + 4) - 12);
      v10 = v3 - v9;
      v11 = memcmp(s2, *((const void **)v13 + 4), v8);
      if ( v11 == 0 )
        v11 = v10;
      if ( v11 >= 0 )
      {
        *((uint32_t *)v13 + 5) |= 1u;
        glf::PropertyMap::SavePersistant((int)(uintptr_t)(&dword_20B9FF4), v10, v6, v9, a1);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::SetProperty  (binary VA: 0xc7e7d0)
// Original: glf::PropertyMap::SetProperty
// ----------------------------------------------------------------------------
int glf::PropertyMap::SetProperty(glf::PropertyMap::Self *a1, const char **a2, uint32_t *a3, int a4)
{
  int v4;
  char *v5;
  size_t v6;
  size_t v7;
  size_t v8;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  int v14;
  int v15;
  int result;
  int v17;
  char *v18;
  size_t i;
  char *v20;
  uint32_t *v21;
  size_t v22;
  int v23;
  char *v24;
  uint32_t *v25;
  size_t v26;
  size_t v27;
  int v28;
  int v29;
  char *v30;
  void *v31;
  char *v32;
  void *v33;
  void *v34;
  void *v35;
  void *v36;
  const char *v37;
  size_t v38;
  size_t v39;
  unsigned int v40;
  uint32_t *v41;
  char *v42;
  int v43;
  unsigned int v44;
  size_t v45;
  size_t v46;
  int v47;
  unsigned int v48;
  uint32_t *v49;
  char *v50;
  int v51;
  typedef size_t _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef char *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef size_t _g4_t_v63;
  typedef size_t _g4_t_v64;
  typedef const char *_g4_t_v65;
  typedef char _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef uint32_t _g4_t_v68[4];
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[4];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef uint32_t _g4_t_v79[3];
  typedef uint32_t *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t _g4_t_v85[6];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v53)) > _g4_s1 ? (12u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v54)) > _g4_s2 ? (12u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v55)) > _g4_s3 ? (12u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v56)) > _g4_s4 ? (12u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v57)) > _g4_s5 ? (12u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v58)) > _g4_s6 ? (12u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v59)) > _g4_s7 ? (12u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v60)) > _g4_s8 ? (16u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v61)) > _g4_s9 ? (20u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v62)) > _g4_s10 ? (24u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v63)) > _g4_s11 ? (24u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v64)) > _g4_s12 ? (24u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v65)) > _g4_s13 ? (28u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v66)) > _g4_s14 ? (28u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v67)) > _g4_s15 ? (28u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v68)) > _g4_s16 ? (48u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v69)) > _g4_s17 ? (64u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v70)) > _g4_s18 ? (68u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v71)) > _g4_s19 ? (72u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v72)) > _g4_s20 ? (76u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v73)) > _g4_s21 ? (80u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v74)) > _g4_s22 ? (96u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v75)) > _g4_s23 ? (100u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v76)) > _g4_s24 ? (104u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v77)) > _g4_s25 ? (108u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v78)) > _g4_s26 ? (112u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v79)) > _g4_s27 ? (116u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v80)) > _g4_s28 ? (128u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v81)) > _g4_s29 ? (132u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v82)) > _g4_s30 ? (136u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v83)) > _g4_s31 ? (140u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v84)) > _g4_s32 ? (144u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v85)) > _g4_s33 ? (148u + sizeof(_g4_t_v85)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 132u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 136u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 140u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 144u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 148u);

  if ( *((uint8_t *)a1 + 28) == 0 )
    goto LABEL_7;
  v4 = a3[1];
  switch ( v4 )
  {
    case 1:
      glf::Console::Println((glf::Console::Self *)"SetProperty %s -> %d", *a2, a3[2]);
      break;
    case 2:
      glf::Console::Println((glf::Console::Self *)"SetProperty %s -> %lld", *a2, a3[2], a3[3]);
      break;
    case 4:
      v37 = "true";
      if ( *((uint8_t *)a3 + 8) == 0 )
        v37 = "false";
      goto LABEL_51;
    case 3:
      glf::Console::Println((glf::Console::Self *)"SetProperty %s -> %f", *a2, *((float *)a3 + 2));
      break;
    case 5:
      v37 = (const char *)a3[4];
LABEL_51:
      glf::Console::Println((glf::Console::Self *)"SetProperty %s -> %s", *a2, v37);
      break;
    default:
      break;
  }
LABEL_7:
  v60 = (char *)a1 + 8;
  *a3 = a4;
  v5 = *((char **)a1 + 3);
  if ( v5 != nullptr )
  {
    v62 = (char *)a1 + 8;
    v65 = *a2;
    v6 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v7 = *(uint32_t *)(*((uint32_t *)v5 + 4) - 12);
        v8 = v7;
        v53 = v6;
        if ( v6 <= v7 )
          v8 = v6;
        v9 = memcmp(*((const void **)v5 + 4), v65, v8);
        v6 = v53;
        v10 = v7 - v53;
        if ( v9 == 0 )
          v9 = v10;
        if ( v9 < 0 )
          break;
        v62 = v5;
        v5 = *((char **)v5 + 2);
        if ( v5 == nullptr )
          goto LABEL_16;
      }
      v5 = *((char **)v5 + 3);
    }
    while ( v5 != nullptr );
LABEL_16:
    if ( v60 != v62 )
    {
      v11 = *(uint32_t *)(*((uint32_t *)v62 + 4) - 12);
      v12 = v11;
      if ( v53 <= v11 )
        v12 = v53;
      v13 = memcmp(v65, *((const void **)v62 + 4), v12);
      if ( v13 == 0 )
        v13 = v53 - v11;
      if ( v13 >= 0 )
      {
        v14 = *((uint32_t *)v62 + 5);
        *a3 = v14;
        *((uint32_t *)v62 + 5) = v14;
        *((uint32_t *)v62 + 6) = a3[1];
        v15 = a3[3];
        *((uint32_t *)v62 + 7) = a3[2];
        *((uint32_t *)v62 + 8) = v15;
        result = (int)(uintptr_t)(g4_std::string::assign_str(v62 + 36, a3 + 4));
        goto LABEL_23;
      }
    }
  }
  v69 = a4;
  v17 = a3[3];
  v70 = a3[1];
  v71 = a3[2];
  v72 = v17;
  g4_std::string::construct_copy(v73, a3 + 4);
  g4_std::string::construct_copy(v68, a2);
  g4_std::string::construct_copy(&v74, v68);
  v75 = v69;
  v76 = v70;
  v78 = v72;
  v77 = v71;
  g4_std::string::construct_copy(v79, v73);
  g4_std::string::construct_copy(&v80, &v74);
  v81 = v75;
  v82 = v76;
  v84 = v78;
  v83 = v77;
  g4_std::string::construct_copy(v85, v79);
  v18 = *((char **)a1 + 3);
  if ( v18 == nullptr )
  {
    v24 = (char *)a1 + 8;
    goto LABEL_53;
  }
  v61 = v80;
  v52 = *(v80 - 3);
  for ( i = v52; ; i = v52 )
  {
    v21 = *((uint32_t **)v18 + 4);
    v22 = *(v21 - 3);
    if ( v52 > v22 )
      i = *(v21 - 3);
    v63 = i;
    v54 = v18;
    v23 = memcmp(v61, v21, i);
    v24 = v54;
    if ( v23 == 0 )
      v23 = v52 - v22;
    if ( v23 >= 0 )
      break;
    v20 = *((char **)v54 + 2);
    v66 = 1;
    if ( v20 == nullptr )
      goto LABEL_36;
LABEL_29:
    v18 = v20;
  }
  v20 = *((char **)v54 + 3);
  v66 = 0;
  if ( v20 != nullptr )
    goto LABEL_29;
LABEL_36:
  v25 = v21;
  v26 = v52;
  v27 = v63;
  if ( v66 == 0 )
    goto LABEL_37;
LABEL_53:
  if ( *((char **)a1 + 4) == v24 )
  {
    LOBYTE(v44) = 1;
    if ( v24 != v60 )
    {
      v45 = *(uint32_t *)(*((uint32_t *)v24 + 4) - 12);
      v46 = *(v80 - 3);
      v64 = v45;
      if ( v45 > v46 )
        v45 = *(v80 - 3);
      v58 = v24;
      v47 = memcmp(v80, *((const void **)v24 + 4), v45);
      v48 = v46 - v64;
      v24 = v58;
      if ( v47 != 0 )
        v48 = v47;
      v44 = v48 >> 31;
    }
    v59 = v24;
    v49 = (uint32_t *)opNew(0x28u);
    v50 = v59;
    if ( v49 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v49 + 4, &v80);
      v49[5] = v81;
      v49[6] = v82;
      v51 = v83;
      v49[8] = v84;
      v49[7] = v51;
      g4_std::string::construct_copy(v49 + 9, v85);
      v50 = v59;
    }
    sub_1904970(v44, v49, v50, v60);
    ++*((uint32_t *)a1 + 6);
  }
  else
  {
    v56 = v24;
    v25 = *(uint32_t **)(sub_19048F0(v24) + 16);
    v61 = v80;
    v24 = v56;
    v22 = *(v25 - 3);
    v26 = *(v80 - 3);
    v27 = v22;
    if ( v26 <= v22 )
      v27 = *(v80 - 3);
LABEL_37:
    v55 = v24;
    v28 = v22 - v26;
    v29 = memcmp(v25, v61, v27);
    v30 = v55;
    if ( v29 == 0 )
      v29 = v28;
    if ( v29 < 0 )
    {
      LOBYTE(v67) = 1;
      if ( v55 != v60 )
      {
        v38 = *(uint32_t *)(*((uint32_t *)v55 + 4) - 12);
        v39 = v38;
        if ( v26 <= v38 )
          v39 = v26;
        v40 = memcmp(v61, *((const void **)v55 + 4), v39);
        v30 = v55;
        if ( v40 == 0 )
          v40 = v26 - v38;
        v67 = v40 >> 31;
      }
      v57 = v30;
      v41 = (uint32_t *)opNew(0x28u);
      v42 = v57;
      if ( v41 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v41 + 4, &v80);
        v41[5] = v81;
        v41[6] = v82;
        v43 = v83;
        v41[8] = v84;
        v41[7] = v43;
        g4_std::string::construct_copy(v41 + 9, v85);
        v42 = v57;
      }
      sub_1904970(v67, v41, v42, v60);
      ++*((uint32_t *)a1 + 6);
    }
  }
  v31 = (void *)(v85[0] - 12);
  if ( (uint32_t *)(v85[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v85[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  v32 = (char *)(v80 - 3);
  if ( v80 - 3 != dword_213B808 && __sync_fetch_and_add(v80 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v32);
  v33 = (void *)(v79[0] - 12);
  if ( (uint32_t *)(v79[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v79[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v33);
  }
  v34 = (void *)(v74 - 12);
  if ( (uint32_t *)(v74 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v34);
  }
  v35 = (void *)(v68[0] - 12);
  if ( (uint32_t *)(v68[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v35);
  }
  result = v73[0];
  v36 = (void *)(v73[0] - 12);
  if ( (uint32_t *)(v73[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v73[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v36);
  }
LABEL_23:
  if ( (*(uint8_t *)a3 & 1) != 0 )
    return ((glf::PropertyMap::SavePersistant(0, 0, 0, 0, a1)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::SetProperty  (binary VA: 0xc7ef00)
// Original: glf::PropertyMap::SetProperty
// ----------------------------------------------------------------------------
uint32_t * glf::PropertyMap::SetProperty(glf::PropertyMap::Self *a1, const char **a2, int a3, int a4)
{
  uint32_t *result;
  uint32_t *v5;
  typedef int _g4_t_v6[4];
  typedef uint32_t *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v6[0] = 0;
  v6[1] = 5;
  v7 = &dword_213B814;
  g4_std::string::assign_str(&v7, a3);
  glf::PropertyMap::SetProperty(a1, a2, v6, a4);
  result = v7;
  v5 = v7 - 3;
  if ( v7 - 3 != dword_213B808 && __sync_fetch_and_add(v7 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(v5), (uint32_t *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::SetProperty  (binary VA: 0xc7efb0)
// Original: glf::PropertyMap::SetProperty
// ----------------------------------------------------------------------------
uint32_t * glf::PropertyMap::SetProperty(glf::PropertyMap::Self *a1, const char **a2, char *s, int a4)
{
  uint32_t *result;
  size_t v5;
  typedef uint32_t _g4_t_v6[4];
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v6[0] = 0;
  v6[1] = 5;
  result = &dword_213B814;
  v7[0] = (int)(uintptr_t)(&dword_213B814);
  if ( s != nullptr )
  {
    v5 = strlen(s);
    g4_std_compat::string_assign((int)(uintptr_t)(v7), s, v5);
    glf::PropertyMap::SetProperty(a1, a2, v6, a4);
    result = (uint32_t *)v7[0];
  }
  if ( result - 3 != dword_213B808 && __sync_fetch_and_add(result - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(result - 3), (uint32_t *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::LoadLastPersistant  (binary VA: 0xc7f070)
// Original: glf::PropertyMap::LoadLastPersistant
// ----------------------------------------------------------------------------
void glf::PropertyMap::LoadLastPersistant()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::Value::FromString  (binary VA: 0xc7f080)
// Original: glf::PropertyMap::Value::FromString
// ----------------------------------------------------------------------------
glf::PropertyMap::Value::Self * glf::PropertyMap::Value::FromString(glf::PropertyMap::Value::Self *self, glf::PropertyMap::Self *a2, char *s)
{
  size_t v4;
  int v5;
  int v6;
  typedef char *_g4_t_format;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_format)) > _g4_s0 ? (4u + sizeof(_g4_t_format)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  switch ( glf::PropertyMap::GetTypeFromName(a2, format) )
  {
    case 1:
      sscanf(s, "%d", &v8);
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 1;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      *((uint32_t *)self + 2) = v8;
      break;
    case 2:
      sscanf(s, "%lld", &v8);
      v5 = v9;
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      v6 = v8;
      *((uint32_t *)self + 1) = 2;
      *((uint32_t *)self + 2) = v6;
      *((uint32_t *)self + 3) = v5;
      break;
    case 3:
      sscanf(s, "%f", &v8);
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 3;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      *((uint32_t *)self + 2) = v8;
      break;
    case 4:
      if ( strcmp(s, "false") == 0 )
      {
        *(uint32_t *)self = 0;
        *((uint32_t *)self + 1) = 4;
        *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        *((uint8_t *)self + 8) = 0;
      }
      else
      {
        if ( strcmp(s, "true") != 0 )
          goto LABEL_2;
        *(uint32_t *)self = 0;
        *((uint32_t *)self + 1) = 4;
        *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        *((uint8_t *)self + 8) = 1;
      }
      break;
    case 5:
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 5;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      v4 = strlen(s);
      g4_std_compat::string_assign((int)(uintptr_t)(self) + 16, s, v4);
      break;
    default:
LABEL_2:
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 6;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      break;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::PropertyMap::Destroy  (binary VA: 0xc7f290)
// Original: glf::PropertyMap::~PropertyMap
// ----------------------------------------------------------------------------
void glf::PropertyMap::Destroy(void **self)
{
  char *v1;

  glf::PropertyMap::sThis = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,glf::PropertyMap::Value::Self>,std::_Select1st<std::pair<std::string const,glf::PropertyMap::Value::Self>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::PropertyMap::Value::Self>>>::_M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
  v1 = (char *)*self - 12;
  if ( v1 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*self - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}


