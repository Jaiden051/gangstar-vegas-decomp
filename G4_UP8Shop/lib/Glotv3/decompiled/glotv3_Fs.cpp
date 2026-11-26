#include "Core/Utils/DecompTypes.h"
#include "glotv3_Fs.h"

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::ExistsPath  (binary VA: 0x13431b0)
// Original: glotv3::Fs::ExistsPath
// ----------------------------------------------------------------------------
bool glotv3::Fs::ExistsPath(const char **a1)
{
  int v1;
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
  struct stat buf;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[5];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (14u + sizeof(_g4_t_v13)) > _g4_s0 ? (14u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 14u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  do
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v13));
    sub_19042E0(v16, &v14);
    g4_std::string::Destroy(&v14);
    v16[2] = v4;
    v16[3] = v11;
    v16[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v16[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = (int)(uintptr_t)(stat(*a1, &buf));
  do
  {
    v6 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v9 = v6;
  }
  while ( v6 == 4 );
  if ( v6 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v13) + 1);
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v9;
    v17[3] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v5 == 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::ExistsPathAndIsNotEmpty  (binary VA: 0x13432f0)
// Original: glotv3::Fs::ExistsPathAndIsNotEmpty
// ----------------------------------------------------------------------------
bool glotv3::Fs::ExistsPathAndIsNotEmpty(const char **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int64_t v5; // rax
  int v6;
  int v7;
  int v8;
  int v9;
  struct stat buf;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef bool _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t _g4_t_v18[5];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v14)) > _g4_s3 ? (46u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v15)) > _g4_s4 ? (48u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v16)) > _g4_s5 ? (52u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v17)) > _g4_s6 ? (56u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v18)) > _g4_s7 ? (76u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 46u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);

  do
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v14));
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v4;
    v17[3] = v11;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v13 = false;
  if ( stat(*a1, &buf) == 0 )
  {
    HIDWORD(v5) = buf.st_blksize >> 31;
    LODWORD(v5) = buf.st_blksize >> 31;
    v13 = (((uint64_t)(v5 - *(uint64_t *)&buf.st_size) >> 32) & 0x80000000) != 0LL;
  }
  do
  {
    v6 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v9 = v6;
  }
  while ( v6 == 4 );
  if ( v6 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v14) + 1);
    sub_19042E0(v18, &v16);
    g4_std::string::Destroy(&v16);
    v18[2] = v9;
    v18[3] = v12;
    v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v18[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::AsString  (binary VA: 0x1343470)
// Original: glotv3::Fs::AsString
// ----------------------------------------------------------------------------
uint32_t * glotv3::Fs::AsString(uint32_t *a1, const char **a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[5];
  typedef uint32_t _g4_t_v22[5];
  typedef uint8_t *_g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int (**_g4_t_v25)(int);
  typedef uint32_t _g4_t_v26[4];
  typedef void *_g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[4];
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t _g4_t_v33[29];
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int (**_g4_t_v40)(int);
  typedef int _g4_t_v41;
  typedef int _g4_t_v42[7];
  typedef uint8_t _g4_t_v43[8];
  typedef uint8_t _g4_t_v44[68];
  typedef uint32_t _g4_t_v45[29];
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v15)) > _g4_s1 ? (20u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v17)) > _g4_s3 ? (54u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (57u + sizeof(_g4_t_v18)) > _g4_s4 ? (57u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v19)) > _g4_s5 ? (60u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v20)) > _g4_s6 ? (64u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v21)) > _g4_s7 ? (68u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v22)) > _g4_s8 ? (88u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v23)) > _g4_s9 ? (108u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v24)) > _g4_s10 ? (112u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v25)) > _g4_s11 ? (116u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v26)) > _g4_s12 ? (120u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v27)) > _g4_s13 ? (136u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v28)) > _g4_s14 ? (140u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v29)) > _g4_s15 ? (144u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_v30)) > _g4_s16 ? (148u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v31)) > _g4_s17 ? (152u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v32)) > _g4_s18 ? (156u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v33)) > _g4_s19 ? (160u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (276u + sizeof(_g4_t_v34)) > _g4_s20 ? (276u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (277u + sizeof(_g4_t_v35)) > _g4_s21 ? (277u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (280u + sizeof(_g4_t_v36)) > _g4_s22 ? (280u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (284u + sizeof(_g4_t_v37)) > _g4_s23 ? (284u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (288u + sizeof(_g4_t_v38)) > _g4_s24 ? (288u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (292u + sizeof(_g4_t_v39)) > _g4_s25 ? (292u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (296u + sizeof(_g4_t_v40)) > _g4_s26 ? (296u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (300u + sizeof(_g4_t_v41)) > _g4_s27 ? (300u + sizeof(_g4_t_v41)) : _g4_s27,
    _g4_s29 = (304u + sizeof(_g4_t_v42)) > _g4_s28 ? (304u + sizeof(_g4_t_v42)) : _g4_s28,
    _g4_s30 = (332u + sizeof(_g4_t_v43)) > _g4_s29 ? (332u + sizeof(_g4_t_v43)) : _g4_s29,
    _g4_s31 = (340u + sizeof(_g4_t_v44)) > _g4_s30 ? (340u + sizeof(_g4_t_v44)) : _g4_s30,
    _g4_s32 = (408u + sizeof(_g4_t_v45)) > _g4_s31 ? (408u + sizeof(_g4_t_v45)) : _g4_s31,
    _g4_s33 = (524u + sizeof(_g4_t_v46)) > _g4_s32 ? (524u + sizeof(_g4_t_v46)) : _g4_s32,
    _g4_s34 = (525u + sizeof(_g4_t_v47)) > _g4_s33 ? (525u + sizeof(_g4_t_v47)) : _g4_s33,
    _g4_s35 = (528u + sizeof(_g4_t_v48)) > _g4_s34 ? (528u + sizeof(_g4_t_v48)) : _g4_s34,
    _g4_s36 = (532u + sizeof(_g4_t_v49)) > _g4_s35 ? (532u + sizeof(_g4_t_v49)) : _g4_s35,
    _g4_s37 = (536u + sizeof(_g4_t_v50)) > _g4_s36 ? (536u + sizeof(_g4_t_v50)) : _g4_s36,
    _g4_s38 = (540u + sizeof(_g4_t_v51)) > _g4_s37 ? (540u + sizeof(_g4_t_v51)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 54u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 57u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 148u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 152u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 156u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 160u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 276u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 277u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 280u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 284u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 288u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 292u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 296u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 300u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 304u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 332u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 340u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 408u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 524u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 525u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 528u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 532u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 536u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 540u);

  if ( glotv3::Fs::ExistsPathAndIsNotEmpty(a2) )
  {
    do
      v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    while ( v2 == 4 );
    v5 = v2;
    if ( v2 != 0 )
    {
      v13 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v17) + 1);
      sub_19042E0(v21, &v19);
      g4_std::string::Destroy(&v19);
      v21[2] = v5;
      v21[3] = v13;
      v21[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v21[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      std::terminate();
    }
    v15 = (char *)*a2;
    sub_1900810(v45);
    v45[28] = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v45[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v40 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
    *(int (***)(int))((char *)&v40 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
    v41 = 0;
    sub_19119D0((char *)&v40 + (uint32_t)(uintptr_t)(*(v40 - 3)), 0);
    v40 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
    v45[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
    sub_190A6D0(v42);
    sub_19119D0(v45, v42);
    if ( sub_190AE40((int)(uintptr_t)(v42), v15, 12) != 0 )
      sub_1911530((char *)&v40 + (uint32_t)(uintptr_t)(*(v40 - 3)), 0);
    else
      sub_1911530((char *)&v40 + (uint32_t)(uintptr_t)(*(v40 - 3)), *(int *)((char *)&v40 + (uint32_t)(uintptr_t)(*(v40 - 3)) + 20) | 4);
    v23 = (uint8_t *)((char *)&v18 + 1);
    v24 = &v19;
    *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
    sub_1900810(v33);
    v33[28] = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v33[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v25 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v26[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v26[-1] + (uint32_t)(uintptr_t)(*(v25 - 3)), 0);
    v25 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v33[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v26[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    memset(&v26[1], 0, 12);
    v27 = nullptr;
    v28 = nullptr;
    v29 = 0;
    sub_1903A70(v30);
    v26[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v32 = &dword_213B814;
    v31 = 16;
    sub_19119D0(v33, v26);
    v6 = (uint32_t *)sub_192CCB0(&v25, v42);
    v14 = *(uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 20);
    v23 = (uint8_t *)(v27);
    v24 = v28;
    if ( (v14 & 5) != 0 )
LABEL_7:
      std::terminate();
    sub_193A9B0((int)(uintptr_t)(a1), 0, *(uint32_t *)(*a1 - 12), v27, (char *)v28 - (char *)((uint8_t *)v27));
    v25 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v33[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v26[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v16 = v32 - 3;
    if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v16);
    v26[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v30);
    v25 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v26[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    v33[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v33);
    v40 = (int (**)(int))(uintptr_t)(&off_20A9E2C);
    v45[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
    v42[0] = (int)(uintptr_t)(&off_20A9DA8);
    sub_190AC60(v42);
    sub_1908070(v44);
    v42[0] = (int)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v43);
    v40 = (int (**)(int))(uintptr_t)(&off_20A9DEC);
    *(int (***)(int))((char *)&v40 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(uintptr_t)(&off_20A9E00);
    v41 = 0;
    v45[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v45);
    do
      v8 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    while ( v8 == 4 );
    v11 = v8;
    if ( v8 != 0 )
    {
      v12 = (int)(uintptr_t)(sub_18F81E0(v10, v9));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v18));
      sub_19042E0(v22, &v20);
      g4_std::string::Destroy(&v20);
      v22[2] = v11;
      v22[3] = v12;
      v22[4] = (uint32_t)(uintptr_t)(&dword_213B814);
      v22[0] = ((uint32_t)(uintptr_t)&off_20495E0);
      goto LABEL_7;
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(a1), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::ExistsPathAndIsEmpty  (binary VA: 0x1343af0)
// Original: glotv3::Fs::ExistsPathAndIsEmpty
// ----------------------------------------------------------------------------
bool glotv3::Fs::ExistsPathAndIsEmpty(const char **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  struct stat buf;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef bool _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[5];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v12)) > _g4_s2 ? (15u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v13)) > _g4_s3 ? (30u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v17)) > _g4_s7 ? (60u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 15u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  do
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v10 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v13));
    sub_19042E0(v16, &v14);
    g4_std::string::Destroy(&v14);
    v16[2] = v4;
    v16[3] = v10;
    v16[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v16[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v12 = false;
  if ( stat(*a1, &buf) == 0 )
    v12 = buf.st_size == 0 && buf.st_blksize == 0;
  do
  {
    v5 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v8 = v5;
  }
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v7, v6));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v13) + 1);
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v8;
    v17[3] = v11;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::MakeDirectory  (binary VA: 0x1343c60)
// Original: glotv3::Fs::MakeDirectory
// ----------------------------------------------------------------------------
bool glotv3::Fs::MakeDirectory(const char **a1)
{
  int v1;
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
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v13)) > _g4_s0 ? (14u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 14u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  do
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v13));
    sub_19042E0(v16, &v14);
    g4_std::string::Destroy(&v14);
    v16[2] = v4;
    v16[3] = v11;
    v16[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v16[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = mkdir(*a1, 0x1FDu);
  do
  {
    v6 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v9 = v6;
  }
  while ( v6 == 4 );
  if ( v6 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v13) + 1);
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v9;
    v17[3] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v5 == 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::ReadDirectory  (binary VA: 0x1343da0)
// Original: glotv3::Fs::ReadDirectory
// ----------------------------------------------------------------------------
int glotv3::Fs::ReadDirectory(const char **a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  void *v7;
  struct dirent *v8;
  int v9;
  char *v10;
  unsigned int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v20;
  uint32_t *v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  void *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef void *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t *_g4_t_v42;
  typedef const void *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef DIR *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[5];
  typedef uint32_t _g4_t_v51[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v37)) > _g4_s5 ? (12u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v38)) > _g4_s6 ? (12u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v39)) > _g4_s7 ? (12u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v40)) > _g4_s8 ? (16u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v41)) > _g4_s9 ? (20u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v42)) > _g4_s10 ? (24u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v43)) > _g4_s11 ? (24u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v44)) > _g4_s12 ? (28u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v45)) > _g4_s13 ? (32u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v46)) > _g4_s14 ? (48u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v47)) > _g4_s15 ? (52u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v48)) > _g4_s16 ? (68u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v49)) > _g4_s17 ? (72u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v50)) > _g4_s18 ? (76u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v51)) > _g4_s19 ? (96u + sizeof(_g4_t_v51)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v2 == 4 );
  v5 = v2;
  if ( v2 != 0 )
  {
    v38 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v46) + 1);
    sub_19042E0(v50, &v48);
    g4_std::string::Destroy(&v48);
    v50[2] = v5;
    v50[3] = v38;
    v50[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v50[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v45 = opendir(*a1);
  if ( v45 != nullptr )
  {
    while ( 1 )
    {
      v8 = readdir(v45);
      if ( v8 == nullptr )
        break;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v47), &v8->d_name[8], (int)(uintptr_t)(&v46));
      v9 = *(uint32_t *)(a2 + 24);
      if ( v9 == *(uint32_t *)(a2 + 32) - 4 )
      {
        v10 = *(char **)(a2 + 36);
        v11 = *(uint32_t *)(a2 + 4);
        if ( v11 - ((int)(uintptr_t)(&v10[-*(uint32_t *)a2]) >> 2) <= 1 )
        {
          v42 = *(uint8_t **)(a2 + 20);
          v40 = ((v10 - (char *)(v42)) >> 2) + 1;
          v41 = ((v10 - (char *)(v42)) >> 2) + 2;
          if ( v11 <= 2 * v41 )
          {
            v23 = 3;
            if ( v11 != 0 )
            {
              v23 = 2 * v11 + 2;
              if ( v23 > 0x3FFFFFFF )
                sub_18FFEE0(v11, v23);
            }
            v32 = v23;
            v24 = opNew(4 * v23);
            v25 = v32;
            v44 = v24;
            v26 = (void *)(v24 + 4 * ((v32 - v41) >> 1));
            v43 = *(const void **)(a2 + 20);
            v27 = (*(uint32_t *)(a2 + 36) + 4 - (int)(uintptr_t)(v43)) >> 2;
            if ( v27 != 0 )
            {
              v37 = v26;
              memmove(v26, v43, 4 * v27);
              v26 = v37;
              v25 = v32;
            }
            v33 = v25;
            v35 = (uint32_t *)(v26);
            opDelete(*(void **)a2);
            *(uint32_t *)a2 = v44;
            *(uint32_t *)(a2 + 4) = v33;
            v21 = v35;
          }
          else
          {
            v20 = v10 + 4 - (char *)(v42);
            v21 = (uint32_t *)(*(uint32_t *)a2 + 4 * ((v11 - v41) >> 1));
            if ( v42 <= (uint8_t *)v21 )
            {
              v30 = v20 >> 2;
              if ( v30 != 0 )
              {
                v36 = v21;
                memmove(&v21[v40 - v30], v42, 4 * v30);
                v21 = v36;
              }
            }
            else
            {
              v22 = v20 >> 2;
              if ( v22 != 0 )
              {
                v34 = v21;
                memmove(v21, v42, 4 * v22);
                v21 = v34;
              }
            }
          }
          *(uint32_t *)(a2 + 20) = (uint32_t)(uintptr_t)(v21);
          v28 = *v21;
          *(uint32_t *)(a2 + 12) = *v21;
          *(uint32_t *)(a2 + 16) = v28 + 512;
          v10 = (char *)&v21[v40 - 1];
          *(uint32_t *)(a2 + 36) = (uint32_t)(uintptr_t)(v10);
          v29 = *(uint32_t *)v10;
          *(uint32_t *)(a2 + 28) = *(uint32_t *)v10;
          *(uint32_t *)(a2 + 32) = v29 + 512;
        }
        *((uint32_t *)v10 + 1) = opNew(0x200u);
        v12 = *(uint32_t *)(a2 + 24);
        if ( v12 != 0 )
          g4_std::string::construct_copy(v12, v47);
        v13 = (int *)(*(uint32_t *)(a2 + 36) + 4);
        *(uint32_t *)(a2 + 36) = (uint32_t)(uintptr_t)(v13);
        v14 = *v13;
        *(uint32_t *)(a2 + 28) = *v13;
        *(uint32_t *)(a2 + 24) = v14;
        *(uint32_t *)(a2 + 32) = v14 + 512;
      }
      else
      {
        v6 = 0;
        if ( v9 != 0 )
        {
          g4_std::string::construct_copy(v9, v47);
          v6 = *(uint32_t *)(a2 + 24);
        }
        *(uint32_t *)(a2 + 24) = v6 + 4;
      }
      v7 = (void *)(v47[0] - 12);
      if ( (uint32_t *)(v47[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v47[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
    }
    v31 = 1;
    closedir(v45);
  }
  else
  {
    v31 = 0;
  }
  do
    v15 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v15 == 4 );
  v18 = v15;
  if ( v15 != 0 )
  {
    v39 = (int)(uintptr_t)(sub_18F81E0(v17, v16));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v46) + 3);
    sub_19042E0(v51, &v49);
    g4_std::string::Destroy(&v49);
    v51[2] = v18;
    v51[3] = v39;
    v51[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v51[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v31;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::TouchPath  (binary VA: 0x13441b0)
// Original: glotv3::Fs::TouchPath
// ----------------------------------------------------------------------------
bool glotv3::Fs::TouchPath(char **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[5];
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19[7];
  typedef uint8_t _g4_t_v20[8];
  typedef uint8_t _g4_t_v21[68];
  typedef uint32_t _g4_t_v22[29];
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v13)) > _g4_s1 ? (26u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v16)) > _g4_s4 ? (36u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v17)) > _g4_s5 ? (56u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v18)) > _g4_s6 ? (76u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v19)) > _g4_s7 ? (80u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v20)) > _g4_s8 ? (108u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v21)) > _g4_s9 ? (116u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (184u + sizeof(_g4_t_v22)) > _g4_s10 ? (184u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (300u + sizeof(_g4_t_v23)) > _g4_s11 ? (300u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (301u + sizeof(_g4_t_v24)) > _g4_s12 ? (301u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (304u + sizeof(_g4_t_v25)) > _g4_s13 ? (304u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (308u + sizeof(_g4_t_v26)) > _g4_s14 ? (308u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (312u + sizeof(_g4_t_v27)) > _g4_s15 ? (312u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (316u + sizeof(_g4_t_v28)) > _g4_s16 ? (316u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 26u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 108u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 116u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 184u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 300u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 301u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 304u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 308u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 312u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 316u);

  do
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v1 == 4 );
  v4 = v1;
  if ( v1 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v13));
    sub_19042E0(v16, &v14);
    g4_std::string::Destroy(&v14);
    v16[2] = v4;
    v16[3] = v11;
    v16[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v16[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  sub_1900810(v22);
  v22[28] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v22[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v28 = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v19[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v19[-1] + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v22[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v19);
  sub_19119D0(v22, v19);
  if ( (uint8_t)sub_1907FD0(v21) != 0 && sub_190AC60(v19) == 0 )
    sub_1911530((char *)&v19[-1] + (uint32_t)(uintptr_t)(*(v18 - 3)), *(int *)((char *)&v19[4] + (uint32_t)(uintptr_t)(*(v18 - 3))) | 4);
  if ( sub_190AE40((int)(uintptr_t)(v19), *a1, 23) != 0 )
    sub_1911530((char *)&v19[-1] + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  else
    sub_1911530((char *)&v19[-1] + (uint32_t)(uintptr_t)(*(v18 - 3)), *(int *)((char *)&v19[4] + (uint32_t)(uintptr_t)(*(v18 - 3))) | 4);
  if ( (uint8_t)sub_1907FD0(v21) == 0 )
  {
    if ( sub_190AE40((int)(uintptr_t)(v19), *a1, 54) != 0 )
      sub_1911530((char *)&v19[-1] + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
    else
      sub_1911530((char *)&v19[-1] + (uint32_t)(uintptr_t)(*(v18 - 3)), *(int *)((char *)&v19[4] + (uint32_t)(uintptr_t)(*(v18 - 3))) | 4);
  }
  v12 = v22[5];
  v18 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v22[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v19[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v19);
  sub_1908070(v21);
  v19[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v20);
  v18 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v19[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v22);
  do
    v5 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v5 == 4 );
  v8 = v5;
  if ( v5 != 0 )
  {
    v10 = (int)(uintptr_t)(sub_18F81E0(v7, v6));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v13) + 1);
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v8;
    v17[3] = v10;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v12 == 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::TouchPathAndDump  (binary VA: 0x1344580)
// Original: glotv3::Fs::TouchPathAndDump
// ----------------------------------------------------------------------------
bool glotv3::Fs::TouchPathAndDump(char **a1, uint32_t *a2)
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
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t _g4_t_v18[5];
  typedef int (**_g4_t_v19)(int);
  typedef int _g4_t_v20[7];
  typedef uint8_t _g4_t_v21[8];
  typedef uint8_t _g4_t_v22[68];
  typedef uint32_t _g4_t_v23[29];
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v14)) > _g4_s1 ? (26u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v18)) > _g4_s5 ? (56u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v19)) > _g4_s6 ? (76u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v20)) > _g4_s7 ? (80u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v21)) > _g4_s8 ? (108u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v22)) > _g4_s9 ? (116u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (184u + sizeof(_g4_t_v23)) > _g4_s10 ? (184u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (300u + sizeof(_g4_t_v24)) > _g4_s11 ? (300u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (301u + sizeof(_g4_t_v25)) > _g4_s12 ? (301u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (304u + sizeof(_g4_t_v26)) > _g4_s13 ? (304u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (308u + sizeof(_g4_t_v27)) > _g4_s14 ? (308u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (312u + sizeof(_g4_t_v28)) > _g4_s15 ? (312u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (316u + sizeof(_g4_t_v29)) > _g4_s16 ? (316u + sizeof(_g4_t_v29)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 26u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 116u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 184u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 300u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 301u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 304u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 308u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 312u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 316u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v2 == 4 );
  v5 = v2;
  if ( v2 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v14));
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v5;
    v17[3] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  sub_1900810(v23);
  v23[28] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v23[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v29 = 0;
  v19 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v20[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
  v19 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v23[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v20);
  sub_19119D0(v23, v20);
  if ( (uint8_t)sub_1907FD0(v22) != 0 && sub_190AC60(v20) == 0 )
    sub_1911530((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), *(int *)((char *)&v20[4] + (uint32_t)(uintptr_t)(*(v19 - 3))) | 4);
  if ( sub_190AE40((int)(uintptr_t)(v20), *a1, 23) != 0 )
    sub_1911530((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
  else
    sub_1911530((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), *(int *)((char *)&v20[4] + (uint32_t)(uintptr_t)(*(v19 - 3))) | 4);
  if ( (uint8_t)sub_1907FD0(v22) == 0 )
  {
    if ( sub_190AE40((int)(uintptr_t)(v20), *a1, 54) != 0 )
      sub_1911530((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
    else
      sub_1911530((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), *(int *)((char *)&v20[4] + (uint32_t)(uintptr_t)(*(v19 - 3))) | 4);
  }
  sub_192C9E0(&v19, a2, *(uint32_t *)(*a2 - 12));
  v13 = v23[5];
  v19 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v23[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v20[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v20);
  sub_1908070(v22);
  v20[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v21);
  v19 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v20[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v23);
  do
    v6 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v6 == 4 );
  v9 = v6;
  if ( v6 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v14) + 1);
    sub_19042E0(v18, &v16);
    g4_std::string::Destroy(&v16);
    v18[2] = v9;
    v18[3] = v11;
    v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v18[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v13 == 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::RenamePath  (binary VA: 0x1344970)
// Original: glotv3::Fs::RenamePath
// ----------------------------------------------------------------------------
int glotv3::Fs::RenamePath(const char **a1, const char **a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t _g4_t_v18[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v13)) > _g4_s1 ? (15u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v14)) > _g4_s2 ? (30u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v16)) > _g4_s4 ? (36u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v17)) > _g4_s5 ? (40u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v18)) > _g4_s6 ? (60u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 15u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 30u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    v12 = v2;
    v10 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v14));
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[3] = v10;
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v13 = 1;
  if ( rename(*a1, *a2) != 0 )
  {
    perror("[GLOTv3]: Cannot rename: ");
    if ( rename(*a1, *a2) != 0 )
    {
      perror("[GLOTv3]: Cannot rename: ");
      if ( rename(*a1, *a2) != 0 )
      {
        perror("[GLOTv3]: Cannot rename: ");
        if ( rename(*a1, *a2) != 0 )
        {
          perror("[GLOTv3]: Cannot rename: ");
          if ( rename(*a1, *a2) != 0 )
          {
            perror("[GLOTv3]: Cannot rename: ");
            v13 = 0;
          }
        }
      }
    }
  }
  do
  {
    v5 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v8 = v5;
  }
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    v11 = (int)(uintptr_t)(sub_18F81E0(v7, v6));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v14) + 1);
    sub_19042E0(v18, &v16);
    g4_std::string::Destroy(&v16);
    v18[2] = v8;
    v18[3] = v11;
    v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v18[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::TruncatePath  (binary VA: 0x1344b60)
// Original: glotv3::Fs::TruncatePath
// ----------------------------------------------------------------------------
int glotv3::Fs::TruncatePath(char **a1)
{
  typedef uint8_t _g4_t_v2;
  typedef int (**_g4_t_v3)(int);
  typedef int _g4_t_v4[7];
  typedef uint8_t _g4_t_v5[8];
  typedef uint8_t _g4_t_v6[68];
  typedef uint32_t _g4_t_v7[29];
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (11u + sizeof(_g4_t_v2)) > _g4_s0 ? (11u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v4)) > _g4_s2 ? (32u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v5)) > _g4_s3 ? (60u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v6)) > _g4_s4 ? (68u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (136u + sizeof(_g4_t_v7)) > _g4_s5 ? (136u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (252u + sizeof(_g4_t_v8)) > _g4_s6 ? (252u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (253u + sizeof(_g4_t_v9)) > _g4_s7 ? (253u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (256u + sizeof(_g4_t_v10)) > _g4_s8 ? (256u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (260u + sizeof(_g4_t_v11)) > _g4_s9 ? (260u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (264u + sizeof(_g4_t_v12)) > _g4_s10 ? (264u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (268u + sizeof(_g4_t_v13)) > _g4_s11 ? (268u + sizeof(_g4_t_v13)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 11u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 32u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 68u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 136u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 252u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 253u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 256u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 260u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 264u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 268u);

  sub_1900810(v7);
  v7[28] = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v7[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v3 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v4[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v4[-1] + (uint32_t)(uintptr_t)(*(v3 - 3)), 0);
  v3 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v7[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v4);
  sub_19119D0(v7, v4);
  if ( sub_190AE40((int)(uintptr_t)(v4), *a1, 48) != 0 )
    sub_1911530((char *)&v4[-1] + (uint32_t)(uintptr_t)(*(v3 - 3)), 0);
  else
    sub_1911530((char *)&v4[-1] + (uint32_t)(uintptr_t)(*(v3 - 3)), *(int *)((char *)&v4[4] + (uint32_t)(uintptr_t)(*(v3 - 3))) | 4);
  v2 = sub_1907FD0(v6);
  if ( v2 != 0 && sub_190AC60(v4) == 0 )
    sub_1911530((char *)&v4[-1] + (uint32_t)(uintptr_t)(*(v3 - 3)), *(int *)((char *)&v4[4] + (uint32_t)(uintptr_t)(*(v3 - 3))) | 4);
  v3 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v7[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v4[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v4);
  sub_1908070(v6);
  v4[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v5);
  v3 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v4[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v7[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v7);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::RemovePath  (binary VA: 0x1344d90)
// Original: glotv3::Fs::RemovePath
// ----------------------------------------------------------------------------
int glotv3::Fs::RemovePath(const char **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t _g4_t_v18[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v14)) > _g4_s0 ? (14u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 14u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  do
  {
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v4 = v1;
  }
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    v12 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v14));
    sub_19042E0(v17, &v15);
    g4_std::string::Destroy(&v15);
    v17[2] = v4;
    v17[3] = v12;
    v17[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v17[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v5 = remove(*a1);
  LOBYTE(v5) = v5 == 0;
  v6 = v5;
  if ( !(uint8_t)v5 )
    perror("[GLOTv3]: Cannot remove: ");
  do
  {
    v7 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Fs::s_PathMutex);
    v10 = v7;
  }
  while ( v7 == 4 );
  if ( v7 != 0 )
  {
    v13 = (int)(uintptr_t)(sub_18F81E0(v9, v8));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v14) + 1);
    sub_19042E0(v18, &v16);
    g4_std::string::Destroy(&v16);
    v18[2] = v10;
    v18[3] = v13;
    v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v18[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Fs::getFreeSpace  (binary VA: 0x1344ed0)
// Original: glotv3::Fs::getFreeSpace
// ----------------------------------------------------------------------------
uint64_t glotv3::Fs::getFreeSpace(const char **a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  uint8_t *i;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  void *v13;
  struct statfs buf;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[5];
  typedef uint32_t _g4_t_v24[10];
  typedef uint8_t _g4_t_v25[11];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v19)) > _g4_s4 ? (36u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v20)) > _g4_s5 ? (48u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v21)) > _g4_s6 ? (52u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v24)) > _g4_s9 ? (80u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (121u + sizeof(_g4_t_v25)) > _g4_s10 ? (121u + sizeof(_g4_t_v25)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 121u);

  if ( statfs(*a1, &buf) == 0 )
    return (*(uint64_t *)&buf.f_ffree * (uint64_t)(unsigned int)buf.f_bsize) >> 20;
  if ( statfs(*a1, &buf) == 0 )
    return (*(uint64_t *)&buf.f_ffree * (uint64_t)(unsigned int)buf.f_bsize) >> 20;
  if ( statfs(*a1, &buf) == 0 )
    return (*(uint64_t *)&buf.f_ffree * (uint64_t)(unsigned int)buf.f_bsize) >> 20;
  if ( statfs(*a1, &buf) == 0 )
    return (*(uint64_t *)&buf.f_ffree * (uint64_t)(unsigned int)buf.f_bsize) >> 20;
  v17 = (int)(uintptr_t)(statfs(*a1, &buf));
  if ( v17 == 0 )
    return (*(uint64_t *)&buf.f_ffree * (uint64_t)(unsigned int)buf.f_bsize) >> 20;
  do
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v1 == 4 );
  v4 = v1;
  if ( v1 != 0 )
  {
    v16 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v18));
    sub_19042E0(v23, &v21);
    g4_std::string::Destroy(&v21);
    v23[2] = v4;
    v23[3] = v16;
    v23[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v23[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v19[0] = (int)(uintptr_t)(&dword_213B814);
  v5 = __builtin_abs(v17);
  for ( i = v25; ; --i )
  {
    *(i - 1) = v5 % 0xA + 48;
    v5 /= 0xAu;
    if ( v5 == 0 )
      break;
  }
  if ( v17 < 0 )
  {
    v7 = i - 2;
    *(i - 2) = 45;
  }
  else
  {
    v7 = i - 1;
  }
  sub_193A9B0((int)(uintptr_t)(v19), 0, dword_213B808[0], v7, v25 - v7);
  do
    v8 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v8 == 4 );
  v11 = v8;
  if ( v8 != 0 )
  {
    v15 = (int)(uintptr_t)(sub_18F81E0(v10, v9));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v18) + 1);
    sub_19042E0(v24, &v22);
    g4_std::string::Destroy(&v22);
    v24[3] = v15;
    v24[2] = v11;
    v24[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v24[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  g4_std::string::construct_copy(&v20, &glotv3::errors::FREE_SPACE_DETECTION_FAILED);
  g4_std::string::append_str(&v20, v19);
  glotv3::Glotv3Logger::WriteLog(&v20);
  v12 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v19[0] - 12);
  if ( (uint32_t *)(v19[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  return 0;
}


