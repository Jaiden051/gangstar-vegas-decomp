#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventValue.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::opAssign  (binary VA: 0x131a320)
// Original: glotv3::EventValue::operator=
// ----------------------------------------------------------------------------
glotv3::EventValue::Self * glotv3::EventValue::opAssign(glotv3::EventValue::Self *self, const glotv3::EventValue::Self *a2)
{
  int v3;
  size_t v4;
  char *v5;

  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  switch ( *((uint32_t *)a2 + 2) )
  {
    case 0:
      *(uint32_t *)self = *(uint32_t *)a2;
      break;
    case 1:
      *(uint64_t *)self = *(uint64_t *)a2;
      break;
    case 4:
    case 5:
      v3 = *(uint32_t *)a2;
      *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
      *(uint32_t *)self = v3;
      break;
    case 6:
      *(uint8_t *)self = *(uint8_t *)a2;
      break;
    case 7:
      if ( *(uint32_t *)a2 != 0 )
      {
        v4 = strlen(*(const char **)a2);
        v5 = (char *)opNewArray(v4 + 1);
        *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
        strcpy(v5, *(const char **)a2);
      }
      else
      {
        *(uint32_t *)self = 0;
      }
      break;
    default:
      *(uint32_t *)self = *(uint32_t *)a2;
      break;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::Construct  (binary VA: 0x131a3f0)
// Original: glotv3::EventValue::EventValue
// ----------------------------------------------------------------------------
glotv3::EventValue::Self * glotv3::EventValue::Construct(glotv3::EventValue::Self *self, char *s)
{
  int v2;
  int v3;
  glotv3::EventValue::Self *result;
  char *v5;
  size_t v6;
  char *v7;

  *((uint32_t *)self + 2) = 7;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 2048;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  v2 = opNew(1u);
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 10) = v2;
  *((uint32_t *)self + 11) = v2;
  result = (glotv3::EventValue::Self *)malloc(v3 + 12);
  *(uint32_t *)result = v3;
  *((uint32_t *)result + 1) = 0;
  *((uint32_t *)result + 2) = *((uint32_t *)self + 7);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(result);
  if ( s != nullptr )
  {
    if ( *s != 0 )
    {
      v6 = strlen(s);
      v7 = (char *)opNewArray(v6 + 1);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v7);
      return (glotv3::EventValue::Self *)strcpy(v7, s);
    }
    else
    {
      v5 = (char *)opNewArray(*((uint32_t *)glotv3::system::NOT_AVAILABLE - 3) + 1);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
      return (glotv3::EventValue::Self *)strcpy(v5, glotv3::system::NOT_AVAILABLE);
    }
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::Construct  (binary VA: 0x131a500)
// Original: glotv3::EventValue::EventValue
// ----------------------------------------------------------------------------
char * glotv3::EventValue::Construct(char **a1, const char **a2)
{
  int v2;
  char *v3;
  char *v4;
  char *v5;
  size_t v7;
  char *v8;

  a1[2] = (char *)(uintptr_t)7;
  a1[6] = nullptr;
  a1[7] = nullptr;
  a1[8] = (char *)(uintptr_t)2048;
  a1[9] = nullptr;
  a1[10] = nullptr;
  a1[11] = nullptr;
  v2 = opNew(1u);
  v3 = a1[8];
  a1[10] = (char *)v2;
  a1[11] = (char *)v2;
  v4 = (char *)malloc((size_t)(v3 + 12));
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)v4 + 1) = 0;
  *((uint32_t *)v4 + 2) = (uint32_t)(uintptr_t)(a1[7]);
  a1[7] = v4;
  if ( *((uint32_t *)*a2 - 3) != 0 )
  {
    v7 = strlen(*a2);
    v8 = (char *)opNewArray(v7 + 1);
    *a1 = v8;
    return strcpy(v8, *a2);
  }
  else
  {
    v5 = (char *)opNewArray(*((uint32_t *)glotv3::system::NOT_AVAILABLE - 3) + 1);
    *a1 = v5;
    return strcpy(v5, glotv3::system::NOT_AVAILABLE);
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::Construct  (binary VA: 0x131a600)
// Original: glotv3::EventValue::EventValue
// ----------------------------------------------------------------------------
char * glotv3::EventValue::Construct(char **a1, int **a2)
{
  int v2;
  char *v3;
  char *v4;
  uint8_t *v5;
  size_t *v6;
  size_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  char v10;
  int v11;
  uint32_t *v12;
  char *v13;
  int v14;
  char *v15;
  char *result;
  size_t *v17;
  size_t v18;
  size_t *v19;
  uint32_t *v20;
  size_t v21;
  char *v22;
  char *v23;
  uint32_t *v24;
  void *v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef size_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef size_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[4];
  typedef const char *_g4_t_v36[2];
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int (**_g4_t_v39)(int);
  typedef int _g4_t_v40;
  typedef int (**_g4_t_v41)(int);
  typedef uint32_t _g4_t_v42[3];
  typedef uint8_t *_g4_t_v43;
  typedef uint8_t *_g4_t_v44;
  typedef uint8_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[2];
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t _g4_t_v49[29];
  typedef int16_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v33)) > _g4_s7 ? (20u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v34)) > _g4_s8 ? (32u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v36)) > _g4_s10 ? (56u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v37)) > _g4_s11 ? (64u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v38)) > _g4_s12 ? (68u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v39)) > _g4_s13 ? (72u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v40)) > _g4_s14 ? (76u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v41)) > _g4_s15 ? (80u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v42)) > _g4_s16 ? (84u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v43)) > _g4_s17 ? (96u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v44)) > _g4_s18 ? (100u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v45)) > _g4_s19 ? (104u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v46)) > _g4_s20 ? (108u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v47)) > _g4_s21 ? (112u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v48)) > _g4_s22 ? (120u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v49)) > _g4_s23 ? (124u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (240u + sizeof(_g4_t_v50)) > _g4_s24 ? (240u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (244u + sizeof(_g4_t_v51)) > _g4_s25 ? (244u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (248u + sizeof(_g4_t_v52)) > _g4_s26 ? (248u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (252u + sizeof(_g4_t_v53)) > _g4_s27 ? (252u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (256u + sizeof(_g4_t_v54)) > _g4_s28 ? (256u + sizeof(_g4_t_v54)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 240u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 244u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 248u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 252u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 256u);

  a1[2] = (char *)(uintptr_t)7;
  a1[6] = nullptr;
  a1[7] = nullptr;
  a1[8] = (char *)(uintptr_t)2048;
  a1[9] = nullptr;
  a1[10] = nullptr;
  a1[11] = nullptr;
  v2 = opNew(1u);
  v3 = a1[8];
  a1[10] = (char *)v2;
  a1[11] = (char *)v2;
  v4 = (char *)malloc((size_t)(v3 + 12));
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)v4 + 1) = 0;
  *((uint32_t *)v4 + 2) = (uint32_t)(uintptr_t)(a1[7]);
  a1[7] = v4;
  if ( *(*a2 - 3) == 0 )
  {
    v15 = (char *)opNewArray(*((uint32_t *)glotv3::system::NOT_AVAILABLE - 3) + 1);
    *a1 = v15;
    return strcpy(v15, glotv3::system::NOT_AVAILABLE);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "\\u", (int)(uintptr_t)(&v34));
  sub_1900810(v49);
  v49[28] = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v49[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v54 = 0;
  v39 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v40 = 0;
  sub_19119D0((char *)&v39 + (uint32_t)(uintptr_t)(*(v39 - 3)), 0);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v42[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v42[-1] + (uint32_t)(uintptr_t)(*(v41 - 3)), 0);
  v39 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v42[1] = 0;
  v42[2] = 0;
  v43 = nullptr;
  v44 = nullptr;
  v45 = nullptr;
  v46 = 0;
  v39 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v49[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v41 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v42[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v47);
  v47[1] = 24;
  v42[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v48 = &dword_213B814;
  sub_19119D0(v49, v42);
  v32 = *a2;
  if ( 4 * *(*a2 - 3) != 0 )
  {
    do
    {
      v31 = *v32;
      v12 = (uint32_t *)g4_std_compat::ostream_write(&v41, v35[0], *(uint32_t *)(v35[0] - 12));
      *(uint32_t *)((char *)v12 + *(uint32_t *)(*v12 - 12) + 12) = *(uint32_t *)((char *)v12 + *(uint32_t *)(*v12 - 12) + 12)
                                                             & 0xFFFFFFB5
                                                             | 8;
      *(uint32_t *)((char *)v12 + *(uint32_t *)(*v12 - 12) + 12) |= 0x4000u;
      v13 = (char *)v12 + *(uint32_t *)(*v12 - 12);
      if ( v13[117] == 0 )
      {
        v14 = *((uint32_t *)v13 + 31);
        if ( v14 == 0 )
          sub_18FFF30(v11);
        if ( *(uint8_t *)(v14 + 28) != 0 )
        {
          v10 = *(uint8_t *)(v14 + 61);
        }
        else
        {
          v29 = *((uint32_t *)v13 + 31);
          sub_18FFC70(v29);
          v10 = G4_VCALL<int>(v29, 24, 32);
        }
        v13[116] = v10;
        v13[117] = 1;
      }
      v13[116] = 48;
      *(uint32_t *)((char *)v12 + *(uint32_t *)(*v12 - 12) + 8) = 4;
      g4_std::ostream::op_shl_int(v12, v31);
      ++v32;
    }
    while ( v32 != &(*a2)[*(*a2 - 3)] );
  }
  v36[0] = (const char *)&dword_213B814;
  if ( v45 != nullptr )
  {
    v5 = v44;
    if ( v45 > v43 )
    {
      if ( v45 == v44 )
      {
        v8 = &dword_213B814;
        goto LABEL_11;
      }
      if ( v44 != nullptr )
      {
        v33 = v45 - v44;
        v6 = (size_t *)sub_1938930(v45 - v44, 0);
        v7 = v6;
        v8 = (uint32_t *)(v6 + 3);
        if ( v33 == 1 )
        {
          *((uint8_t *)v6 + 12) = *v5;
        }
        else
        {
          v28 = v6;
          memcpy(v6 + 3, v5, v33);
          v7 = v28;
        }
        if ( v7 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v7[2] = 0;
          *v7 = v33;
          *((uint8_t *)v7 + v33 + 12) = 0;
        }
LABEL_11:
        v38 = v8;
        g4_std::string::assign_str(v36, &v38);
        v9 = v38 - 3;
        if ( v38 - 3 == dword_213B808 || __sync_fetch_and_add(v38 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_30;
        goto LABEL_13;
      }
LABEL_39:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
    if ( v43 == v44 )
    {
      v20 = &dword_213B814;
      goto LABEL_29;
    }
    if ( v44 != nullptr )
    {
      v26 = v43 - v44;
      v17 = (size_t *)sub_1938930(v43 - v44, 0);
      v18 = v26;
      v19 = v17;
      v20 = (uint32_t *)(v17 + 3);
      if ( v26 == 1 )
      {
        *((uint8_t *)v17 + 12) = *v5;
LABEL_27:
        if ( v19 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v19[2] = 0;
          *v19 = v18;
          *((uint8_t *)v20 + v18) = 0;
        }
LABEL_29:
        v37 = v20;
        g4_std::string::assign_str(v36, &v37);
        v9 = v37 - 3;
        if ( v37 - 3 == dword_213B808 || __sync_fetch_and_add(v37 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_30;
LABEL_13:
        g4_std::string::Rep::M_destroy(v9);
        goto LABEL_30;
      }
    }
    else
    {
      if ( v43 != nullptr )
        goto LABEL_39;
      v19 = (size_t *)sub_1938930(0, 0);
      v20 = (uint32_t *)(v19 + 3);
      v18 = 0;
    }
    v30 = v19;
    v27 = v18;
    memcpy(v20, v5, v18);
    v18 = v27;
    v19 = v30;
    goto LABEL_27;
  }
  g4_std::string::assign_str(v36, &v48);
LABEL_30:
  v21 = strlen(v36[0]);
  v22 = (char *)opNewArray(v21 + 1);
  *a1 = v22;
  strcpy(v22, v36[0]);
  v23 = (char *)(v36[0] - 12);
  if ( (uint32_t *)v36[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v36[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  v39 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v49[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v41 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v42[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v24 = v48 - 3;
  if ( v48 - 3 != dword_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v24);
  v42[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v47);
  v39 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v41 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v42[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v39 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v40 = 0;
  v49[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v49);
  result = (char *)v35[0];
  v25 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v25), (char *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::Destroy  (binary VA: 0x131ad50)
// Original: glotv3::EventValue::~EventValue
// ----------------------------------------------------------------------------
void glotv3::EventValue::Destroy(void **self)
{
  uint32_t *ptr;
  void *v2;

  if ( *self != nullptr && *(self + 2) == (char *)&loc_6 + 1 )
    opDeleteArray(*self);
  ptr = (uint32_t *)(*(self + 7));
  if ( ptr != nullptr && ptr != *(self + 9) )
  {
    while ( 1 )
    {
      v2 = (void *)ptr[2];
      free(ptr);
      *(self + 7) = v2;
      if ( v2 == nullptr || v2 == *(self + 9) )
        break;
      ptr = (uint32_t *)(v2);
    }
  }
  opDelete(*(self + 11));
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::Construct  (binary VA: 0x131add0)
// Original: glotv3::EventValue::EventValue
// ----------------------------------------------------------------------------
glotv3::EventValue::Self * glotv3::EventValue::Construct(glotv3::EventValue::Self *self, const glotv3::EventValue::Self *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  glotv3::EventValue::Self *v5;
  glotv3::EventValue::Self *v6; // kr00_4
  glotv3::EventValue::Self *result;
  size_t v8;
  char *v9;

  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 2048;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  v2 = opNew(1u);
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 10) = v2;
  *((uint32_t *)self + 11) = v2;
  v4 = (uint32_t *)(malloc(v3 + 12));
  *v4 = v3;
  v4[1] = 0;
  v4[2] = *((uint32_t *)self + 7);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v4);
  v5 = *((glotv3::EventValue::Self **)a2 + 2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v5);
  v6 = v5;
  result = (glotv3::EventValue::Self *)((char *)dword_20B9FF4 + (uint32_t)jpt_131AE6F[*((uint32_t *)a2 + 2)]);
  switch ( *((uint32_t *)a2 + 2) )
  {
    case 0:
    case 2:
    case 3:
      result = *(glotv3::EventValue::Self **)a2;
      *(uint32_t *)self = *(uint32_t *)a2;
      break;
    case 1:
      *(uint64_t *)self = *(uint64_t *)a2;
      break;
    case 4:
    case 5:
      result = *(glotv3::EventValue::Self **)a2;
      *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
      break;
    case 6:
      result = (glotv3::EventValue::Self *)*(uint8_t *)a2;
      *(uint8_t *)self = (uint8_t)(uintptr_t)(result);
      break;
    case 7:
      result = *(glotv3::EventValue::Self **)a2;
      if ( *(uint32_t *)a2 != 0 )
      {
        v8 = strlen(*(const char **)a2);
        v9 = (char *)opNewArray(v8 + 1);
        *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
        result = (glotv3::EventValue::Self *)strcpy(v9, *(const char **)a2);
      }
      else
      {
        *(uint32_t *)self = 0;
      }
      break;
    default:
      result = v6;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::op_rapidjson::GenericValue_rapidjson_UTF8_char_rapi_ca157b  (binary VA: 0x131af00)
// Original: `glotv3::EventValue::operator rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&`
// ----------------------------------------------------------------------------
char * glotv3::EventValue::op_rapidjson::GenericValue_rapidjson_UTF8_char_rapi_ca157b(glotv3::EventValue::Self *self)
{
  uint8_t *src;
  uint8_t *i;
  size_t n;
  uint32_t *v4;
  unsigned int v5;
  unsigned int v6;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  double v13; // xmm0_8
  int v14;
  int v15;
  int64_t v16; // xmm0_8
  int v17;
  size_t v18;
  size_t v19;
  size_t v20;
  unsigned int v21;
  int dest;

  switch ( *((uint32_t *)self + 2) )
  {
    case 0:
      v13 = *(float *)self;
      *((uint32_t *)self + 6) = 16902;
      *(double *)((char *)self + 12) = v13;
      break;
    case 1:
      v16 = *(uint64_t *)self;
      *((uint32_t *)self + 6) = 16902;
      *(uint64_t *)((char *)self + 12) = v16;
      break;
    case 2:
      v14 = *(uint32_t *)self;
      *((uint32_t *)self + 6) = 5638;
      *(uint64_t *)((char *)self + 12) = v14;
      if ( v14 >= 0 )
        goto LABEL_26;
      break;
    case 3:
      v15 = *(uint32_t *)self;
      *((uint32_t *)self + 6) = 14854;
      *((uint32_t *)self + 3) = v15;
      *((uint32_t *)self + 4) = 0;
      if ( v15 >= 0 )
LABEL_26:
        *((uint32_t *)self + 6) = 15878;
      break;
    case 4:
      v8 = *((uint32_t *)self + 1);
      v9 = *(uint32_t *)self;
      *((uint32_t *)self + 6) = 4614;
      *((uint32_t *)self + 3) = v9;
      *((uint32_t *)self + 4) = v8;
      if ( v8 < 0 )
      {
        if ( v8 >= -1 && v9 >= 0x80000000 )
          *((uint32_t *)self + 6) = 5638;
      }
      else
      {
        *((uint32_t *)self + 6) = v8 == 0 ? 14854 : 12806;
        if ( (v9 & 0x80000000 | v8) == 0 )
          *((uint32_t *)self + 6) = v8 == 0 ? 15878 : 13830;
      }
      break;
    case 5:
      v10 = *((uint32_t *)self + 1);
      v11 = *(uint32_t *)self;
      *((uint32_t *)self + 3) = *(uint32_t *)self;
      v12 = ((v10 >> 31) & 0xFFFFF000) + 12806;
      *((uint32_t *)self + 4) = v10;
      *((uint32_t *)self + 6) = v12;
      if ( v10 == 0 )
      {
        *((uint32_t *)self + 6) = ((v10 >> 31) & 0xFFFFF000) + 14854;
        v12 = 14854;
      }
      if ( (v11 & 0x80000000 | v10) == 0 )
      {
        BYTE1(v12) |= 4u;
        *((uint32_t *)self + 6) = v12;
      }
      break;
    case 6:
      *((uint32_t *)self + 6) = 258 - (*(uint8_t *)self == 0);
      break;
    case 7:
      src = *(uint8_t **)self;
      for ( i = *(uint8_t **)self; *i != 0; ++i )
        ;
      goto LABEL_4;
    default:
      src = *(uint8_t **)self;
      for ( i = *(uint8_t **)self; *i != 0; ++i )
        ;
LABEL_4:
      n = i - src;
      v4 = *((uint32_t **)self + 7);
      *((uint32_t *)self + 6) = 3145733;
      v5 = (n + 4) & 0xFFFFFFFC;
      v17 = v4[1];
      if ( v5 + v17 > *v4 )
      {
        v6 = *((uint32_t *)self + 8);
        v18 = n;
        if ( v5 >= v6 )
          v6 = (n + 4) & 0xFFFFFFFC;
        v21 = v6;
        v4 = (uint32_t *)(malloc(v6 + 12));
        v4[1] = 0;
        *v4 = v21;
        v4[2] = *((uint32_t *)self + 7);
        *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v4);
        n = v18;
        v17 = v4[1];
      }
      dest = (int)(uintptr_t)(v4) + v17 + 12;
      if ( (dest & 3) != 0 )
      {
        v20 = n;
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          267,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAlloca"
          "tor, size_t = unsigned int]",
          "((uintptr_t) buffer & 3) == 0");
        v4 = *((uint32_t **)self + 7);
        n = v20;
        v17 = v4[1];
      }
      v4[1] = v17 + v5;
      *((uint32_t *)self + 4) = n;
      *((uint32_t *)self + 3) = dest;
      v19 = n;
      memcpy((void *)dest, src, n);
      *(uint8_t *)(*((uint32_t *)self + 3) + v19) = 0;
      break;
  }
  return (char *)self + 12;
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventValue::opEq  (binary VA: 0x131b1d0)
// Original: glotv3::EventValue::operator==
// ----------------------------------------------------------------------------
bool glotv3::EventValue::opEq(glotv3::EventValue::Self *self, const glotv3::EventValue::Self *a2)
{
  bool result;
  int v3;
  const char *s;
  const void *s2;
  size_t n;

  result = false;
  v3 = *((uint32_t *)self + 2);
  if ( v3 == *((uint32_t *)a2 + 2) )
  {
    switch ( v3 )
    {
      case 0:
        result = *(float *)self == *(float *)a2;
        break;
      case 1:
        result = *(double *)self == *(double *)a2;
        break;
      case 2:
      case 3:
        result = *(uint32_t *)self == *(uint32_t *)a2;
        break;
      case 4:
      case 5:
        result = *(uint64_t *)a2 == *(uint64_t *)self;
        break;
      case 6:
        result = *(uint8_t *)self == *(uint8_t *)a2;
        break;
      case 7:
        s = *(const char **)self;
        if ( *(uint32_t *)self != 0 && (s2 = *(const void **)a2, *(uint32_t *)a2 != 0) )
        {
          n = strlen(s);
          result = memcmp(s, s2, n) == 0;
        }
        else
        {
          result = s == *(const char **)a2;
        }
        break;
      default:
        result = false;
        break;
    }
  }
  return result;
}


