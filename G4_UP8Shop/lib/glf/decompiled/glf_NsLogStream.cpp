#include "Core/Utils/DecompTypes.h"
#include "glf_NsLogStream.h"

// ----------------------------------------------------------------------------
// Function: glf::NsLogStream::Print  (binary VA: 0xc91420)
// Original: glf::NsLogStream::Print
// ----------------------------------------------------------------------------
int glf::NsLogStream::Print(glf::NsLogStream::Self *self, const glf::PrintParams::Self *a2)
{
  int v2;
  size_t v3;
  uint32_t *v4;
  uint32_t *v5;
  size_t *v6;
  void *v7;
  uint32_t *v8;
  size_t v10;
  size_t v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef size_t *_g4_t_v15;
  typedef const char *_g4_t_v16;
  typedef const char *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef size_t *_g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef size_t _g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[2];
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int (**_g4_t_v26)(int);
  typedef int _g4_t_v27;
  typedef int (**_g4_t_v28)(int);
  typedef uint32_t _g4_t_v29[3];
  typedef uint8_t *_g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef uint8_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[2];
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t _g4_t_v36[29];
  typedef int16_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v17)) > _g4_s5 ? (8u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v18)) > _g4_s6 ? (12u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v19)) > _g4_s7 ? (16u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v20)) > _g4_s8 ? (16u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v21)) > _g4_s9 ? (20u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v22)) > _g4_s10 ? (20u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v23)) > _g4_s11 ? (40u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v24)) > _g4_s12 ? (48u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v25)) > _g4_s13 ? (52u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v26)) > _g4_s14 ? (56u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v27)) > _g4_s15 ? (60u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v28)) > _g4_s16 ? (64u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v29)) > _g4_s17 ? (68u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v30)) > _g4_s18 ? (80u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v31)) > _g4_s19 ? (84u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v32)) > _g4_s20 ? (88u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v33)) > _g4_s21 ? (92u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v34)) > _g4_s22 ? (96u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v35)) > _g4_s23 ? (104u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v36)) > _g4_s24 ? (108u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v37)) > _g4_s25 ? (224u + sizeof(_g4_t_v37)) : _g4_s25,
    _g4_s27 = (228u + sizeof(_g4_t_v38)) > _g4_s26 ? (228u + sizeof(_g4_t_v38)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v39)) > _g4_s27 ? (232u + sizeof(_g4_t_v39)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v40)) > _g4_s28 ? (236u + sizeof(_g4_t_v40)) : _g4_s28,
    _g4_s30 = (240u + sizeof(_g4_t_v41)) > _g4_s29 ? (240u + sizeof(_g4_t_v41)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 224u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 228u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 232u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 236u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 240u);

  sub_1900810(v36);
  v36[28] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v36[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v41 = 0;
  v26 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v26 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v27 = 0;
  sub_19119D0((char *)&v26 + (uint32_t)(uintptr_t)(*(v26 - 3)), 0);
  v28 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v29[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v29[-1] + (uint32_t)(uintptr_t)(*(v28 - 3)), 0);
  v26 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v26 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v29[1] = 0;
  v26 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[2] = 0;
  v30 = nullptr;
  v36[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v31 = nullptr;
  v32 = nullptr;
  v28 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v33 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v34);
  v34[1] = 24;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v35 = &dword_213B814;
  sub_19119D0(v36, v29);
  if ( glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 2) && **((uint8_t **)a2 + 3) != 0 )
  {
    v16 = *((const char **)a2 + 3);
    g4_std_compat::ostream_write(&v28, "[", 1);
    v10 = strlen(v16);
    g4_std_compat::ostream_write(&v28, v16, v10);
    g4_std_compat::ostream_write(&v28, "]", 1);
  }
  if ( glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 4) )
  {
    v17 = (const char *)(uintptr_t)(glf::gLogLevelNames[*((uint32_t *)a2 + 4)]);
    g4_std_compat::ostream_write(&v28, "[lvl:", 5);
    if ( v17 != nullptr )
    {
      v11 = strlen(v17);
      g4_std_compat::ostream_write(&v28, v17, v11);
    }
    else
    {
      sub_1911530((char *)&v29[-1] + (uint32_t)(uintptr_t)(*(v28 - 3)), *(uint32_t *)((char *)&v29[4] + (uint32_t)(uintptr_t)(*(v28 - 3))) | 1);
    }
    g4_std_compat::ostream_write(&v28, "]", 1);
  }
  if ( glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 8) )
  {
    v12 = *((uint32_t *)a2 + 5);
    g4_std_compat::ostream_write(&v28, "[tid:", 5);
    v2 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(&v28, v12));
    g4_std_compat::ostream_write(v2, "]", 1);
  }
  if ( *(uint32_t *)a2 != 0 )
  {
    v13 = *(uint32_t *)a2;
    v3 = strlen(*(const char **)a2);
    g4_std_compat::ostream_write(&v28, v13, v3);
  }
  else
  {
    sub_1911530((char *)&v29[-1] + (uint32_t)(uintptr_t)(*(v28 - 3)), *(uint32_t *)((char *)&v29[4] + (uint32_t)(uintptr_t)(*(v28 - 3))) | 1);
  }
  v4 = &dword_213B814;
  v23[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v32 == nullptr )
  {
    g4_std::string::assign_str(v23, &v35);
    goto LABEL_27;
  }
  if ( v32 <= v30 )
  {
    v22 = v31;
    if ( v30 == v31 )
      goto LABEL_26;
    if ( v31 != nullptr )
    {
      v20 = v30 - v31;
      v6 = (size_t *)sub_1938930(v30 - v31, 0);
      v4 = (uint32_t *)(v6 + 3);
      if ( v20 == 1 )
      {
        *((uint8_t *)v6 + 12) = *v22;
LABEL_24:
        if ( v6 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v6[2] = 0;
          *v6 = v20;
          *((uint8_t *)v4 + v20) = 0;
        }
LABEL_26:
        v24 = v4;
        g4_std::string::assign_str(v23, &v24);
        v5 = v24 - 3;
        if ( v24 - 3 != dword_213B808 && __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_19;
        goto LABEL_27;
      }
    }
    else
    {
      if ( v30 != nullptr )
        goto LABEL_36;
      v6 = (size_t *)sub_1938930(0, 0);
      v4 = (uint32_t *)(v6 + 3);
      v20 = 0;
    }
    v15 = v6;
    v18 = v4;
    memcpy(v4, v22, v20);
    v4 = v18;
    v6 = v15;
    goto LABEL_24;
  }
  if ( v32 == v31 )
    goto LABEL_17;
  if ( v31 == nullptr )
LABEL_36:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v14 = v31;
  v21 = v32 - v31;
  v19 = (size_t *)sub_1938930(v32 - v31, 0);
  v4 = (uint32_t *)(v19 + 3);
  if ( v21 == 1 )
  {
    *((uint8_t *)v19 + 12) = *v14;
  }
  else
  {
    memcpy(v4, v14, v21);
    v4 = (uint32_t *)(v19 + 3);
  }
  if ( v19 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v19[2] = 0;
    *v19 = v21;
    *((uint8_t *)v19 + v21 + 12) = 0;
  }
LABEL_17:
  v25 = v4;
  g4_std::string::assign_str(v23, &v25);
  v5 = v25 - 3;
  if ( v25 - 3 != dword_213B808 && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
LABEL_19:
    g4_std::string::Rep::M_destroy(v5);
LABEL_27:
  glf::MyNsLog();
  v7 = (void *)(v23[0] - 12);
  if ( (uint32_t *)(v23[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v26 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v36[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v28 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v29[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v8 = v35 - 3;
  if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v34);
  v26 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v26 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v28 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v29[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v26 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v26 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v27 = 0;
  v36[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v36);
}

// ----------------------------------------------------------------------------
// Function: glf::NsLogStream::Destroy  (binary VA: 0xc92e80)
// Original: glf::NsLogStream::~NsLogStream
// ----------------------------------------------------------------------------
void glf::NsLogStream::Destroy(glf::NsLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::NsLogStream::Destroy_eac92f90  (binary VA: 0xc92f90)
// Original: glf::NsLogStream::~NsLogStream
// ----------------------------------------------------------------------------
void glf::NsLogStream::Destroy_eac92f90(glf::NsLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


