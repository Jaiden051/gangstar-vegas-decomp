#include "Core/Utils/DecompTypes.h"
#include "gaia_UserProfile.h"

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::GetStandardProfileString  (binary VA: 0x14d4a00)
// Original: gaia::UserProfile::GetStandardProfileString
// ----------------------------------------------------------------------------
gaia::UserProfile::Self * gaia::UserProfile::GetStandardProfileString(gaia::UserProfile::Self *self, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  g4_std::string::construct_copy(self, a2 + 40);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::SetStandardProfileString  (binary VA: 0x14d4a60)
// Original: gaia::UserProfile::SetStandardProfileString
// ----------------------------------------------------------------------------
int gaia::UserProfile::SetStandardProfileString(int a1, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  g4_std::string::assign_str(a1 + 40, a2);
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::GetStandardProfileStringTemplate  (binary VA: 0x14d4ac0)
// Original: gaia::UserProfile::GetStandardProfileStringTemplate
// ----------------------------------------------------------------------------
gaia::UserProfile::Self * gaia::UserProfile::GetStandardProfileStringTemplate(gaia::UserProfile::Self *self, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  g4_std::string::construct_copy(self, a2 + 44);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::SetStandardProfileStringTemplate  (binary VA: 0x14d4b20)
// Original: gaia::UserProfile::SetStandardProfileStringTemplate
// ----------------------------------------------------------------------------
int gaia::UserProfile::SetStandardProfileStringTemplate(int a1, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  g4_std::string::assign_str(a1 + 44, a2);
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::IsInstance  (binary VA: 0x14d4b80)
// Original: gaia::UserProfile::IsInstance
// ----------------------------------------------------------------------------
void * gaia::UserProfile::IsInstance()
{
  uint32_t *v0;
  void *v1;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  v0 = (uint32_t *)(&gaia::UserProfile::s_instance);
  LOBYTE(v0) = gaia::UserProfile::s_instance != 0;
  v1 = v0;
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::Construct  (binary VA: 0x14d4be0)
// Original: gaia::UserProfile::UserProfile
// ----------------------------------------------------------------------------
gaia::UserProfile::Self * gaia::UserProfile::Construct(gaia::UserProfile::Self *self)
{
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E90);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 36) = 0;
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 28) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::GetInstance  (binary VA: 0x14d4c30)
// Original: gaia::UserProfile::GetInstance
// ----------------------------------------------------------------------------
gaia::UserProfile::Self * gaia::UserProfile::GetInstance()
{
  gaia::UserProfile::Self *v0;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  v0 = (gaia::UserProfile::Self *)gaia::UserProfile::s_instance;
  if ( gaia::UserProfile::s_instance == 0 )
  {
    v0 = (gaia::UserProfile::Self *)opNew(0x30u);
    gaia::UserProfile::Construct(v0);
    gaia::UserProfile::s_instance = (uintptr_t)(uintptr_t)(v0);
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::isDeleteInProgress  (binary VA: 0x14d4cb0)
// Original: gaia::UserProfile::isDeleteInProgress
// ----------------------------------------------------------------------------
int gaia::UserProfile::isDeleteInProgress(gaia::UserProfile::Self *self)
{
  return *((uint8_t *)self + 28);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::IsConflictedAccount  (binary VA: 0x14d4cc0)
// Original: gaia::UserProfile::IsConflictedAccount
// ----------------------------------------------------------------------------
int gaia::UserProfile::IsConflictedAccount(gaia::UserProfile::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexConflictedAccount);
  v1 = *((uint8_t *)self + 37);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexConflictedAccount);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::SetAccountConflicting  (binary VA: 0x14d4d10)
// Original: gaia::UserProfile::SetAccountConflicting
// ----------------------------------------------------------------------------
int gaia::UserProfile::SetAccountConflicting(gaia::UserProfile::Self *self, bool a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexConflictedAccount);
  *((uint8_t *)self + 37) = a2;
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexConflictedAccount);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::EncodeData  (binary VA: 0x14d4d60)
// Original: gaia::UserProfile::EncodeData
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::EncodeData(long double a1, int a2, Json::Value::Self *a3, uint32_t *a4)
{
  glwebtools::Codec::Self *n;
  void *v5;
  char v6; // si
  char *v7;
  char *v8;
  typedef size_t _g4_t_size;
  typedef unsigned int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef glwebtools::Codec::Self *_g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char _g4_t_v17[4];
  typedef char _g4_t_v18[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_size)) > _g4_s0 ? (0u + sizeof(_g4_t_size)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v11)) > _g4_s1 ? (44u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (51u + sizeof(_g4_t_v12)) > _g4_s2 ? (51u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v13)) > _g4_s3 ? (56u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v14)) > _g4_s4 ? (60u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v16)) > _g4_s6 ? (68u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v17)) > _g4_s7 ? (76u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v18)) > _g4_s8 ? (80u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 51u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  g4_std::string::assign_str(a4, (char *)&v12 + 1);
  g4_std::string::Destroy((char *)&v12 + 1);
  Json::StyledWriter::Construct((Json::StyledWriter::Self *)&v14);
  Json::StyledWriter::write(a1, (Json::StyledWriter::Self *)&v13, (const Json::Value::Self *)&v14, a3);
  n = glwebtools::Codec::GetEncryptedXXTEADataSize(*((glwebtools::Codec::Self **)v13 - 3));
  v5 = malloc((size_t)n);
  memset(v5, 0, (size_t)n);
  if ( (uint8_t)glwebtools::Codec::EncryptXXTEA(
                          v13,
                          *((uint32_t *)v13 - 3),
                          (glwebtools::Codec::Self *)v5,
                          n,
                          (unsigned int)(uintptr_t)(&unk_20C68BC)) != 0 )
  {
    v6 = glwebtools::Codec::EncodeBase64((int)(uintptr_t)(v5), (unsigned int)(uintptr_t)(n), a4, 0);
    free(v5);
    v11 = v6 == 0 ? 0xFFFFFFF5 : 0;
  }
  else
  {
    free(v5);
    v11 = 0xFFFFFFF8;
  }
  g4_std::string::Destroy(&v13);
  v14 = (unsigned int)((uint32_t)(uintptr_t)&off_2091B90);
  g4_std::string::Destroy(v18);
  g4_std::string::Destroy(v17);
  v7 = v16;
  v8 = (char *)v15;
  if ( v16 != v15 )
  {
    do
    {
      size = (size_t)v8;
      v8 += 4;
      g4_std::string::Destroy(size);
    }
    while ( v7 != v8 );
    v8 = (char *)v15;
  }
  if ( v8 != nullptr )
    opDelete(v8);
  Json::Writer::Destroy((Json::Writer::Self *)&v14);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::DecodeData  (binary VA: 0x14d4f00)
// Original: gaia::UserProfile::DecodeData
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::DecodeData(int a1, int *a2, Json::Value::Self *a3)
{
  void *size;
  uint8_t *v4;
  void *v5;
  char v6; // si
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void *v16;
  void **v17;
  unsigned int v18;
  void *v19;
  void *v20;
  void **v21;
  unsigned int v22;
  void *v23;
  int v25;
  int v26;
  typedef char _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef void *_g4_t_v37[5];
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef void *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v29)) > _g4_s2 ? (20u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v30)) > _g4_s3 ? (24u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v31)) > _g4_s4 ? (28u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v32)) > _g4_s5 ? (32u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v33)) > _g4_s6 ? (36u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v34)) > _g4_s7 ? (40u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v35)) > _g4_s8 ? (44u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v36)) > _g4_s9 ? (64u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v37)) > _g4_s10 ? (80u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v38)) > _g4_s11 ? (100u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v39)) > _g4_s12 ? (116u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v40)) > _g4_s13 ? (120u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v41)) > _g4_s14 ? (128u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v42)) > _g4_s15 ? (136u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v43)) > _g4_s16 ? (140u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v44)) > _g4_s17 ? (144u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v45)) > _g4_s18 ? (148u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v46)) > _g4_s19 ? (156u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v47)) > _g4_s20 ? (160u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (184u + sizeof(_g4_t_v48)) > _g4_s21 ? (184u + sizeof(_g4_t_v48)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 120u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 136u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 144u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 148u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 156u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);

  size = (void *)glwebtools::Codec::GetDecodedBase64DataSize(a2, 0);
  v4 = (uint8_t *)(malloc((size_t)size));
  memset(v4, 0, (size_t)size);
  glwebtools::Codec::DecodeBase64((glwebtools::Codec::Self **)a2, v4, 0);
  v5 = malloc((size_t)size);
  memset(v5, 0, (size_t)size);
  v27 = glwebtools::Codec::DecryptXXTEA(
          (int)(uintptr_t)(&unk_20C68BC),
          (glwebtools::Codec::Self *)v4,
          (size_t)size,
          (glwebtools::Codec::Self *)v5,
          size,
          (unsigned int)(uintptr_t)(&unk_20C68BC));
  free(v4);
  if ( v27 != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v36), nullptr);
    Json::Reader::Construct((Json::Reader::Self *)v37);
    v6 = Json::Reader::parse((Json::Reader::Self *)v37, (const char *)v5, (const char *)size + (uint32_t)(uintptr_t)(v5), a3, true);
    free(v5);
    v30 = v6 == 0 ? 0xFFFFFFE8 : 0;
    v7 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v34 = v45;
    v32 = v44;
    v33 = v41;
    v29 = v46;
    v31 = v43;
    v35 = v42;
    v28 = (uint32_t *)(v43 + 4);
    if ( v46 > v43 + 4 )
    {
      do
      {
        v9 = 0;
        v10 = *v28 + 12;
        do
        {
          v11 = *(uint32_t *)(v10 + v9);
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
          }
          v9 += 20;
        }
        while ( v9 != 500 );
        ++v28;
      }
      while ( v29 > (unsigned int)(uintptr_t)(v28) );
    }
    if ( v29 == v31 )
    {
      if ( v32 != v33 )
      {
        v25 = v33;
        do
        {
          v26 = v25 + 12;
          v25 += 20;
          g4_std::string::Destroy(v26);
        }
        while ( v32 != v25 );
      }
    }
    else
    {
      if ( v33 != v35 )
      {
        v12 = v33;
        do
        {
          v13 = v12 + 12;
          v12 += 20;
          g4_std::string::Destroy(v13);
        }
        while ( v35 != v12 );
      }
      if ( v32 != v34 )
      {
        v14 = v34;
        do
        {
          v15 = v14 + 12;
          v14 += 20;
          g4_std::string::Destroy(v15);
        }
        while ( v32 != v14 );
      }
    }
    v16 = v40;
    if ( v40 != nullptr )
    {
      v17 = (void **)v43;
      v18 = v46 + 4;
      if ( v46 + 4 > v43 )
      {
        do
        {
          v19 = *v17++;
          opDelete(v19);
        }
        while ( v18 > (unsigned int)(uintptr_t)(v17) );
        v16 = v40;
      }
      opDelete(v16);
    }
    v20 = v37[0];
    if ( v37[0] != nullptr )
    {
      v21 = (void **)v38;
      v22 = v39 + 4;
      if ( v39 + 4 > v38 )
      {
        do
        {
          v23 = *v21++;
          opDelete(v23);
        }
        while ( v22 > (unsigned int)(uintptr_t)(v21) );
        v20 = v37[0];
      }
      opDelete(v20);
    }
    Json::Value::Destroy((Json::Value::Self *)v36);
  }
  else
  {
    free(v5);
    return -6;
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::GetProfileField  (binary VA: 0x14d5280)
// Original: gaia::UserProfile::GetProfileField
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::GetProfileField(int a1, char **a2, Json::Value::Self *a3)
{
  unsigned int v3;
  const Json::Value::Self *v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v3 = 0xFFFFFFE4;
  if ( *(uint8_t *)(a1 + 36) != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v7), nullptr);
    gaia::UserProfile::GetStandardProfileString((gaia::UserProfile::Self *)&v6, a1);
    v3 = gaia::UserProfile::DecodeData(a1, &v6, (Json::Value::Self *)v7);
    if ( v3 == 0 )
    {
      if ( Json::Value::isMember((Json::Value::Self *)v7, a2) )
      {
        v5 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v7, a2);
        Json::Value::opAssign(a3, v5);
      }
      else
      {
        v3 = 0xFFFFFFE5;
      }
    }
    g4_std::string::Destroy(&v6);
    Json::Value::Destroy((Json::Value::Self *)v7);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::GetProfile  (binary VA: 0x14d5370)
// Original: gaia::UserProfile::GetProfile
// ----------------------------------------------------------------------------
int gaia::UserProfile::GetProfile(gaia::UserProfile::Self *self, Json::Value::Self *a2)
{
  int v2;
  typedef unsigned int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  v2 = -28;
  if ( *((uint8_t *)self + 36) != 0 )
  {
    gaia::UserProfile::GetStandardProfileString((gaia::UserProfile::Self *)v6, (int)(uintptr_t)(self));
    v4 = gaia::UserProfile::DecodeData((int)(uintptr_t)(self), v6, a2);
    g4_std::string::Destroy(v6);
    v2 = v4;
  }
  v5 = v2;
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::RemoveCustomFields  (binary VA: 0x14d5410)
// Original: gaia::UserProfile::RemoveCustomFields
// ----------------------------------------------------------------------------
gaia::UserProfile::Self * gaia::UserProfile::RemoveCustomFields(gaia::UserProfile::Self *self, int a2)
{
  unsigned int v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  typedef Json::Value::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_v14;
  typedef char _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v15)) > _g4_s5 ? (48u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v16)) > _g4_s6 ? (64u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);

  Json::Value::Construct((int)(uintptr_t)(v15), nullptr);
  gaia::UserProfile::GetStandardProfileString((gaia::UserProfile::Self *)&v11, a2);
  v2 = gaia::UserProfile::DecodeData(a2, &v11, (Json::Value::Self *)v15);
  if ( v2 != 0 )
  {
    Json::Value::Construct(self, v2);
  }
  else
  {
    Json::Value::getMemberNames(v3, (Json::Value::Self *)&v13, v15);
    v4 = (char *)v13;
    v5 = (v14 - (Json::Value::Self *)v13) >> 2;
    v12 = &dword_213B814;
    if ( v5 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        g4_std::string::assign_str(&v12, &v4[4 * v6]);
        if ( *(v12 - 3) == 0 || sub_1937EB0(&v12, 95, 0) != 0 )
        {
          if ( ++v6 == v5 )
            break;
        }
        else
        {
          ++v6;
          Json::Value::removeMember((Json::Value::Self *)v16, v15, (int *)&v12);
          Json::Value::Destroy((Json::Value::Self *)v16);
          if ( v6 == v5 )
            break;
        }
        v4 = (char *)v13;
      }
    }
    Json::Value::Construct(self, (const Json::Value::Self *)v15);
    g4_std::string::Destroy(&v12);
    v7 = v14;
    v8 = (Json::Value::Self *)v13;
    if ( v14 != v13 )
    {
      do
      {
        v10 = v8;
        v8 = (Json::Value::Self *)((char *)v8 + 4);
        g4_std::string::Destroy(v10);
      }
      while ( v7 != v8 );
      v8 = (Json::Value::Self *)v13;
    }
    if ( v8 != nullptr )
      opDelete(v8);
  }
  g4_std::string::Destroy(&v11);
  Json::Value::Destroy((Json::Value::Self *)v15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::AddNewProfile  (binary VA: 0x14d55b0)
// Original: gaia::UserProfile::AddNewProfile
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::AddNewProfile(int a1, Json::Value::Self *a2, char **a3)
{
  int v4;
  char *v5;
  int v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  uint8_t *v10;
  const Json::Value::Self *v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v20)) > _g4_s8 ? (48u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v21)) > _g4_s9 ? (52u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v22)) > _g4_s10 ? (56u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v23)) > _g4_s11 ? (64u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v24)) > _g4_s12 ? (80u + sizeof(_g4_t_v24)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);

  Json::Value::Construct((int)(uintptr_t)(v23), nullptr);
  Json::Value::Construct((int)(uintptr_t)(v24), nullptr);
  gaia::UserProfile::GetStandardProfileString((gaia::UserProfile::Self *)&v18, a1);
  v17 = gaia::UserProfile::DecodeData(a1, &v18, (Json::Value::Self *)v23);
  if ( v17 == 0 )
  {
    gaia::UserProfile::GetStandardProfileStringTemplate((gaia::UserProfile::Self *)&v19, a1);
    v17 = gaia::UserProfile::DecodeData(a1, &v19, (Json::Value::Self *)v24);
    if ( v17 == 0 )
    {
      if ( g4_std::string::compare((int)(uintptr_t)(a3), (char *)&unk_1B15112) != 0 )
      {
        v11 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v23, a3);
        Json::Value::opAssign((Json::Value::Self *)v23, v11);
      }
      Json::Value::getMemberNames(v4, (Json::Value::Self *)&v21, a2);
      v5 = (char *)v21;
      v15 = (v22 - (Json::Value::Self *)v21) >> 2;
      v20 = (int)(uintptr_t)(&dword_213B814);
      if ( v15 > 0 )
      {
        v6 = 0;
        while ( 1 )
        {
          g4_std::string::assign_str(&v20, &v5[4 * v6]);
          if ( *(uint32_t *)(v20 - 12) != 0 )
          {
            if ( sub_1937EB0(&v20, 95, 0) == 0
              || Json::Value::isMember((Json::Value::Self *)v24, (char **)&v20)
              && (v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v24, (char **)&v20),
                  v14 = (Json::Value::Self *)Json::Value::type(v9),
                  v10 = (uint8_t *)Json::Value::opIndex(a2, (char **)&v20),
                  Json::Value::isConvertibleTo(v10, (int)(uintptr_t)(v14)) != 0) )
            {
              v13 = (Json::Value::Self *)Json::Value::opIndex(a2, (char **)&v20);
              v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v23, (char **)&v20);
              Json::Value::opAssign(v7, v13);
            }
          }
          if ( ++v6 == v15 )
            break;
          v5 = (char *)v21;
        }
      }
      Json::Value::opAssign(a2, (const Json::Value::Self *)v23);
      g4_std::string::Destroy(&v20);
      v8 = (Json::Value::Self *)v21;
      v16 = v22;
      if ( v22 != v21 )
      {
        do
        {
          v12 = v8;
          v8 = (Json::Value::Self *)((char *)v8 + 4);
          g4_std::string::Destroy(v12);
        }
        while ( v16 != v8 );
        v8 = (Json::Value::Self *)v21;
      }
      if ( v8 != nullptr )
        opDelete(v8);
    }
    g4_std::string::Destroy(&v19);
  }
  g4_std::string::Destroy(&v18);
  Json::Value::Destroy((Json::Value::Self *)v24);
  Json::Value::Destroy((Json::Value::Self *)v23);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::ValidateProfile  (binary VA: 0x14d58a0)
// Original: gaia::UserProfile::ValidateProfile
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::ValidateProfile(gaia::UserProfile::Self *self, Json::Value::Self *a2)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  uint8_t *v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v19)) > _g4_s7 ? (56u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v20)) > _g4_s8 ? (64u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v21)) > _g4_s9 ? (80u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  Json::Value::Construct((int)(uintptr_t)(v20), nullptr);
  gaia::UserProfile::GetStandardProfileStringTemplate((gaia::UserProfile::Self *)&v16, (int)(uintptr_t)(self));
  v15 = gaia::UserProfile::DecodeData((int)(uintptr_t)(self), &v16, (Json::Value::Self *)v20);
  if ( v15 == 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v21), nullptr);
    Json::Value::getMemberNames(v3, (Json::Value::Self *)&v18, a2);
    v4 = (char *)v18;
    v5 = (v19 - (Json::Value::Self *)v18) >> 2;
    v17 = (int)(uintptr_t)(&dword_213B814);
    if ( v5 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        g4_std::string::assign_str(&v17, &v4[4 * v6]);
        if ( *(uint32_t *)(v17 - 12) != 0 )
        {
          if ( sub_1937EB0(&v17, 95, 0) == 0
            || Json::Value::isMember((Json::Value::Self *)v20, (char **)&v17)
            && (v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v20, (char **)&v17),
                v14 = (Json::Value::Self *)Json::Value::type(v10),
                v11 = (uint8_t *)Json::Value::opIndex(a2, (char **)&v17),
                Json::Value::isConvertibleTo(v11, (int)(uintptr_t)(v14)) != 0) )
          {
            v13 = (Json::Value::Self *)Json::Value::opIndex(a2, (char **)&v17);
            v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v21, (char **)&v17);
            Json::Value::opAssign(v7, v13);
          }
        }
        if ( ++v6 == v5 )
          break;
        v4 = (char *)v18;
      }
    }
    Json::Value::opAssign(a2, (const Json::Value::Self *)v21);
    g4_std::string::Destroy(&v17);
    v8 = v19;
    v9 = (Json::Value::Self *)v18;
    if ( v19 != v18 )
    {
      do
      {
        v12 = v9;
        v9 = (Json::Value::Self *)((char *)v9 + 4);
        g4_std::string::Destroy(v12);
      }
      while ( v8 != v9 );
      v9 = (Json::Value::Self *)v18;
    }
    if ( v9 != nullptr )
      opDelete(v9);
    Json::Value::Destroy((Json::Value::Self *)v21);
  }
  g4_std::string::Destroy(&v16);
  Json::Value::Destroy((Json::Value::Self *)v20);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::Destroy  (binary VA: 0x14e1be0)
// Original: gaia::UserProfile::~UserProfile
// ----------------------------------------------------------------------------
void gaia::UserProfile::Destroy(gaia::UserProfile::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E90);
  g4_std::string::Destroy((char *)self + 44);
  g4_std::string::Destroy((char *)self + 40);
  gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::Destroy_ea14e1c40  (binary VA: 0x14e1c40)
// Original: gaia::UserProfile::~UserProfile
// ----------------------------------------------------------------------------
void gaia::UserProfile::Destroy_ea14e1c40(gaia::UserProfile::Self *self)
{
  gaia::UserProfile::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::RefreshProfile  (binary VA: 0x14e3da0)
// Original: gaia::UserProfile::RefreshProfile
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::RefreshProfile(long double a1, gaia::UserProfile::Self *a2, char a3, int a4, int a5)
{
  int v5;
  int v6;
  unsigned int Profile;
  gaia::BaseJSONServiceResponse::Self *v8;
  gaia::BaseJSONServiceResponse::Self *v9;
  uint32_t *v11;
  gaia::ThreadManager::Self *Instance;
  Json::Value::Self *v13;
  int v14;
  int v15;
  int v16;
  gaia::BaseJSONServiceResponse::Self *JSONMessage;
  gaia::BaseJSONServiceResponse::Self *v18;
  Json::Value::Self *v19;
  int v20;
  uint32_t *v21;
  bool v22;
  uint32_t *v23;
  uint32_t *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  int v27;
  const char **v28;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int64_t _g4_t_v38 __attribute__((aligned(1)));
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef char _g4_t_v50[4];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef glotv3::Event::Self *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef glotv3::Event::Self *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v58;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef void (**_g4_t_v61)(Json::FastWriter::Self *);
  typedef char _g4_t_v62[8];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[44];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v30)) > _g4_s1 ? (52u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v31)) > _g4_s2 ? (52u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v32)) > _g4_s3 ? (52u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v33)) > _g4_s4 ? (52u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v34)) > _g4_s5 ? (52u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v35)) > _g4_s6 ? (60u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (78u + sizeof(_g4_t_v36)) > _g4_s7 ? (78u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v37)) > _g4_s8 ? (80u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v38)) > _g4_s9 ? (84u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v39)) > _g4_s10 ? (92u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v40)) > _g4_s11 ? (96u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v41)) > _g4_s12 ? (100u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v42)) > _g4_s13 ? (104u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v43)) > _g4_s14 ? (108u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v44)) > _g4_s15 ? (112u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v45)) > _g4_s16 ? (116u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v46)) > _g4_s17 ? (120u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v47)) > _g4_s18 ? (124u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v48)) > _g4_s19 ? (128u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v49)) > _g4_s20 ? (132u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v50)) > _g4_s21 ? (136u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v51)) > _g4_s22 ? (140u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v52)) > _g4_s23 ? (144u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v53)) > _g4_s24 ? (148u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v54)) > _g4_s25 ? (152u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v55)) > _g4_s26 ? (156u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v56)) > _g4_s27 ? (160u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v57)) > _g4_s28 ? (164u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v58)) > _g4_s29 ? (168u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v59)) > _g4_s30 ? (172u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v60)) > _g4_s31 ? (176u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v61)) > _g4_s32 ? (180u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v62)) > _g4_s33 ? (184u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v63)) > _g4_s34 ? (192u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v64)) > _g4_s35 ? (208u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (224u + sizeof(_g4_t_v65)) > _g4_s36 ? (224u + sizeof(_g4_t_v65)) : _g4_s36,
    _g4_s38 = (240u + sizeof(_g4_t_v66)) > _g4_s37 ? (240u + sizeof(_g4_t_v66)) : _g4_s37,
    _g4_s39 = (256u + sizeof(_g4_t_v67)) > _g4_s38 ? (256u + sizeof(_g4_t_v67)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 78u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 132u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 140u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 152u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 156u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 160u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 168u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 172u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 176u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 180u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 184u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 192u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 208u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 224u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 240u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 256u);

  v58 = nullptr;
  v59 = nullptr;
  v60 = 0;
  if ( a3 != 0 )
  {
    v11 = (uint32_t *)opNew(0x44u);
    *v11 = a5;
    v11[1] = a4;
    v11[2] = 1026;
    Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
    v11[7] = 0;
    v11[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
    v11[13] = 0;
    v11[14] = 0;
    v11[15] = 0;
    v11[16] = 0;
    Instance = gaia::ThreadManager::GetInstance();
    Profile = gaia::ThreadManager::pushTask((int)(uintptr_t)(Instance), (int)(uintptr_t)(v11));
    goto LABEL_4;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), (char *)&unk_1B15112, (int)(uintptr_t)(&v37));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38) + 4, "me", (int)(uintptr_t)(&v36));
  v5 = *((uint32_t *)a2 + 8);
  v6 = gaia::Gaia::GetInstance();
  Profile = gaia::Gaia_Seshat::GetProfile(
              *(gaia::Gaia::Self **)(v6 + 568),
              v5,
              (int)(uintptr_t)(&v58),
              (uint32_t *)&v38 + 1,
              &v39,
              &v40,
              0,
              0,
              0);
  g4_std::string::Destroy((char *)&v38 + 4);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v40);
  if ( Profile != 0 )
  {
    if ( Profile != 404 )
      goto LABEL_4;
    Json::Value::Construct((int)(uintptr_t)(v67), nullptr);
    Json::Value::Construct((Json::Value::Self *)v63, 0);
    v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, "total_playtime");
    Json::Value::opAssign(v13, (const Json::Value::Self *)v63);
    Json::Value::Destroy((Json::Value::Self *)v63);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "me", (int)(uintptr_t)(&v37) + 1);
    v14 = *((uint32_t *)a2 + 8);
    v15 = gaia::Gaia::GetInstance();
    Profile = gaia::Gaia_Seshat::SetProfile(
                a1,
                *(gaia::Gaia::Self **)(v15 + 568),
                v14,
                (Json::Value::Self *)v67,
                4,
                &v41,
                &v42,
                &v43,
                0,
                0,
                0);
    g4_std::string::Destroy(&v41);
    g4_std::string::Destroy(&v42);
    g4_std::string::Destroy(&v43);
    if ( Profile != 0 )
      goto LABEL_29;
    Json::Value::clear((Json::Value::Self *)v67);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), (char *)&unk_1B15112, (int)(uintptr_t)(&v38) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), (char *)&unk_1B15112, (int)(uintptr_t)(&v38) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "me", (int)(uintptr_t)(&v38));
    v35 = *((char **)a2 + 8);
    v16 = gaia::Gaia::GetInstance();
    v30 = gaia::Gaia_Seshat::GetProfile(*(gaia::Gaia::Self **)(v16 + 568), (int)(uintptr_t)(v35), (int)(uintptr_t)(&v58), &v44, &v45, &v46, 0, 0, 0);
    g4_std::string::Destroy(&v44);
    g4_std::string::Destroy(&v45);
    g4_std::string::Destroy(&v46);
    Profile = v30;
    if ( v30 != 0 )
    {
LABEL_29:
      Json::Value::Destroy((Json::Value::Self *)v67);
      goto LABEL_4;
    }
    Json::Value::Destroy((Json::Value::Self *)v67);
  }
  Json::Value::Construct((int)(uintptr_t)(v64), nullptr);
  if ( -858993459 * ((v59 - v58) >> 2) != 0 )
  {
    JSONMessage = gaia::BaseJSONServiceResponse::GetJSONMessage(v58);
    Json::Value::Construct((Json::Value::Self *)v65, JSONMessage);
    if ( Json::Value::isMember((Json::Value::Self *)v65, "_account_conflicted") )
    {
      v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v65, "_account_conflicted");
      if ( Json::Value::type(v25) == 5 )
      {
        Json::Value::Construct((Json::Value::Self *)v66, true);
        v28 = (const char **)Json::Value::opIndex((Json::Value::Self *)v65, "_account_conflicted");
        v34 = Json::Value::opEq(v28, (const Json::Value::Self *)v66);
        Json::Value::Destroy((Json::Value::Self *)v66);
        if ( v34 != 0 )
          gaia::UserProfile::SetAccountConflicting(a2, true);
      }
      v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v65, "_account_conflicted");
      if ( Json::Value::type(v26) == 4 )
      {
        v27 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v65, "_account_conflicted"));
        Json::Value::asString((Json::Value::Self *)&v47, v27);
        if ( g4_std::string::compare((int)(uintptr_t)(&v47), "true") == 0 )
          gaia::UserProfile::SetAccountConflicting(a2, true);
        g4_std::string::Destroy(&v47);
      }
    }
    Json::Value::Destroy((Json::Value::Self *)v65);
    v18 = gaia::BaseJSONServiceResponse::GetJSONMessage(v58);
    Json::Value::opAssign((Json::Value::Self *)v64, v18);
    v48 = &dword_213B814;
    Profile = gaia::UserProfile::EncodeData(a1, (int)(uintptr_t)(a2), (Json::Value::Self *)v64, (uint32_t *)(&v48));
    g4_std::string::construct_copy(v49, &v48);
    gaia::UserProfile::SetStandardProfileString((int)(uintptr_t)(a2), (int)(uintptr_t)(v49));
    g4_std::string::Destroy(v49);
    Json::Value::Construct((int)(uintptr_t)(v67), nullptr);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, "standard_profile");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v64);
    Json::FastWriter::Construct((Json::FastWriter::Self *)&v61);
    Json::FastWriter::write((Json::FastWriter::Self *)v50, (const Json::Value::Self *)&v61, (Json::Value::Self *)v67);
    boost::make_shared_ec64e5(&v54);
    v56 = v54;
    v57 = v55;
    if ( v55 != nullptr )
      ++v55[1];
    glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v52);
    v20 = v52;
    if ( v52 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Tra"
        "ckingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
        "px != 0");
      v20 = v52;
    }
    glotv3::TrackingManager::AddEvent(v20, &v56, 0);
    v21 = v53;
    if ( v53 != nullptr )
    {
      v22 = v53[1]-- == 1;
      if ( v22 )
      {
        v33 = v21;
        G4_VCALL<void>(v21, 8);
        v22 = v33[2]-- == 1;
        if ( v22 )
          G4_VCALL<void>(v33, 12);
      }
    }
    v23 = v57;
    if ( v57 != nullptr )
    {
      v22 = v57[1]-- == 1;
      if ( v22 )
      {
        v32 = v23;
        G4_VCALL<void>(v23, 8);
        v22 = v32[2]-- == 1;
        if ( v22 )
          G4_VCALL<void>(v32, 12);
      }
    }
    v24 = v55;
    if ( v55 != nullptr )
    {
      v22 = v55[1]-- == 1;
      if ( v22 )
      {
        v31 = v24;
        G4_VCALL<void>(v24, 8);
        v22 = v31[2]-- == 1;
        if ( v22 )
          G4_VCALL<void>(v31, 12);
      }
    }
    g4_std::string::Destroy(v50);
    v61 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
    g4_std::string::Destroy(v62);
    Json::Writer::Destroy((Json::Writer::Self *)&v61);
    Json::Value::Destroy((Json::Value::Self *)v67);
    g4_std::string::Destroy(&v48);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v38) + 3);
    gaia::UserProfile::SetStandardProfileString((int)(uintptr_t)(a2), (int)(uintptr_t)(&v51));
    Profile = 0xFFFFFFE2;
    g4_std::string::Destroy(&v51);
  }
  Json::Value::Destroy((Json::Value::Self *)v64);
LABEL_4:
  v8 = v59;
  v9 = v58;
  if ( v59 != v58 )
  {
    do
    {
      v29 = v9;
      v9 = (gaia::BaseJSONServiceResponse::Self *)((char *)v9 + 20);
      gaia::BaseJSONServiceResponse::Destroy(v29);
    }
    while ( v8 != v9 );
    v9 = v58;
  }
  if ( v9 != nullptr )
    opDelete(v9);
  return Profile;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::SetProfileField  (binary VA: 0x14e4690)
// Original: gaia::UserProfile::SetProfileField
// ----------------------------------------------------------------------------
int gaia::UserProfile::SetProfileField(int a1, long double a2, gaia::UserProfile::Self *a3, Json::Value::Self *a4, int a5, char a6, int a7, int a8)
{
  char *v8;
  char *v9;
  Json::Value::Self *v10;
  const char **v11;
  long double v12; // fst7
  uint32_t *v14;
  Json::Value::Self *v15;
  gaia::ThreadManager::Self *v16;
  char *v17;
  typedef size_t _g4_t_v18;
  typedef size_t _g4_t_v19;
  typedef int _g4_t_Instance;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef unsigned int _g4_t_refreshed;
  typedef Json::Value::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint16_t _g4_t_v26[3];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef uint8_t _g4_t_v31[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_Instance)) > _g4_s2 ? (60u + sizeof(_g4_t_Instance)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v21)) > _g4_s3 ? (64u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v22)) > _g4_s4 ? (64u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_refreshed)) > _g4_s5 ? (72u + sizeof(_g4_t_refreshed)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v24)) > _g4_s6 ? (72u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v25)) > _g4_s7 ? (76u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (86u + sizeof(_g4_t_v26)) > _g4_s8 ? (86u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v27)) > _g4_s9 ? (92u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v28)) > _g4_s10 ? (96u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v29)) > _g4_s11 ? (100u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v30)) > _g4_s12 ? (104u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v31)) > _g4_s13 ? (112u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_refreshed &refreshed = *reinterpret_cast<_g4_t_refreshed *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 86u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);

  refreshed = 0xFFFFFFE4;
  if ( *((uint8_t *)a3 + 36) == 0 )
    return refreshed;
  if ( a6 == 0 )
  {
    Json::Value::getMemberNames(a1, (Json::Value::Self *)&v29, a4);
    v8 = v30;
    v9 = (char *)v29;
    if ( v30 - (char *)((uint8_t *)v29) <= 3 )
    {
      refreshed = 0xFFFFFFE3;
    }
    else
    {
      g4_std::string::construct_copy(&v26[1], v29);
      Json::Value::Construct((int)(uintptr_t)(v31), nullptr);
      v21 = (Json::Value::Self *)Json::Value::opIndex(a4, (const char **)&v26[1]);
      v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v31, (char **)&v26[1]);
      Json::Value::opAssign(v10, v21);
      gaia::UserProfile::ValidateProfile(a3, (Json::Value::Self *)v31);
      v22 = (Json::Value::Self *)Json::Value::opIndex(a4, (const char **)&v26[1]);
      v11 = (const char **)Json::Value::opIndex((Json::Value::Self *)v31, (char **)&v26[1]);
      if ( Json::Value::opEq(v11, v22) == 0 )
      {
        Json::Value::Destroy((Json::Value::Self *)v31);
        g4_std::string::Destroy(&v26[1]);
        v17 = v30;
        v9 = (char *)v29;
        if ( v30 != v29 )
        {
          do
          {
            v19 = (size_t)v9;
            v9 += 4;
            g4_std::string::Destroy(v19);
          }
          while ( v17 != v9 );
          v9 = (char *)v29;
        }
        refreshed = 0xFFFFFFE1;
        if ( v9 == nullptr )
          return refreshed;
LABEL_12:
        opDelete(v9);
        return refreshed;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(v26) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "me", (int)(uintptr_t)(v26));
      v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v31, (char **)&v26[1]);
      v25 = *((uint32_t *)a3 + 8);
      Instance = gaia::Gaia::GetInstance();
      refreshed = gaia::Gaia_Seshat::SetProfile(
                    a2,
                    *(gaia::Gaia::Self **)(Instance + 568),
                    v25,
                    v24,
                    a5,
                    &v27,
                    &v26[1],
                    &v28,
                    0,
                    0,
                    0);
      g4_std::string::Destroy(&v27);
      g4_std::string::Destroy(&v28);
      if ( refreshed == 0 )
        refreshed = gaia::UserProfile::RefreshProfile(v12, a3, 0, 0, 0);
      Json::Value::Destroy((Json::Value::Self *)v31);
      g4_std::string::Destroy(&v26[1]);
      v8 = v30;
      v9 = (char *)v29;
    }
    if ( v8 != v9 )
    {
      do
      {
        v18 = (size_t)v9;
        v9 += 4;
        g4_std::string::Destroy(v18);
      }
      while ( v9 != v8 );
      v9 = (char *)v29;
    }
    if ( v9 == nullptr )
      return refreshed;
    goto LABEL_12;
  }
  v14 = (uint32_t *)opNew(0x44u);
  *v14 = a8;
  v14[1] = a7;
  v14[2] = 1023;
  Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
  v14[7] = 0;
  v14[8] = 0;
  Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
  v14[13] = 0;
  v14[14] = 0;
  v14[15] = 0;
  v14[16] = 0;
  v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "newProfileField");
  Json::Value::opAssign(v15, a4);
  v16 = gaia::ThreadManager::GetInstance();
  return gaia::ThreadManager::pushTask((int)(uintptr_t)(v16), (int)(uintptr_t)(v14));
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::MergeProfile  (binary VA: 0x14e4a10)
// Original: gaia::UserProfile::MergeProfile
// ----------------------------------------------------------------------------
int gaia::UserProfile::MergeProfile(long double a1, gaia::UserProfile::Self *a2, Json::Value::Self *a3, char a4, int a5, int a6, int a7, uint32_t *a8)
{
  int result;
  int v9;
  long double v10; // fst7
  unsigned int refreshed;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  gaia::ThreadManager::Self *Instance;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_v20)) > _g4_s3 ? (22u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v21)) > _g4_s4 ? (28u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v23)) > _g4_s6 ? (48u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v24)) > _g4_s7 ? (64u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 22u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);

  result = -28;
  if ( *((uint8_t *)a2 + 36) != 0 )
  {
    if ( a4 != 0 )
    {
      v12 = (uint32_t *)opNew(0x44u);
      *v12 = a6;
      v12[1] = a5;
      v12[2] = 1022;
      Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
      v12[7] = 0;
      v12[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
      v12[13] = 0;
      v12[14] = 0;
      v12[15] = 0;
      v12[16] = 0;
      v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "newProfile");
      Json::Value::opAssign(v13, a3);
      Json::Value::Construct((Json::Value::Self *)v22, a7);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "visibility");
      Json::Value::opAssign(v14, (const Json::Value::Self *)v22);
      Json::Value::Destroy((Json::Value::Self *)v22);
      Json::Value::Construct((int)(uintptr_t)(v23), a8);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "selector");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Instance = gaia::ThreadManager::GetInstance();
      return gaia::ThreadManager::pushTask((int)(uintptr_t)(Instance), (int)(uintptr_t)(v12));
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v24, a3);
      gaia::UserProfile::ValidateProfile(a2, (Json::Value::Self *)v24);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "merge", (int)(uintptr_t)(v20) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "me", (int)(uintptr_t)(v20));
      v17 = *((uint32_t *)a2 + 8);
      v9 = gaia::Gaia::GetInstance();
      v18 = gaia::Gaia_Seshat::SetProfile(
              a1,
              *(gaia::Gaia::Self **)(v9 + 568),
              v17,
              (Json::Value::Self *)v24,
              a7,
              &v20[1],
              a8,
              &v21,
              0,
              0,
              0);
      g4_std::string::Destroy(&v20[1]);
      g4_std::string::Destroy(&v21);
      refreshed = v18;
      if ( v18 == 0 )
        refreshed = gaia::UserProfile::RefreshProfile(v10, a2, 0, 0, 0);
      v19 = refreshed;
      Json::Value::Destroy((Json::Value::Self *)v24);
      return v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::UpdateProfile  (binary VA: 0x14e4cb0)
// Original: gaia::UserProfile::UpdateProfile
// ----------------------------------------------------------------------------
int gaia::UserProfile::UpdateProfile(long double a1, gaia::UserProfile::Self *a2, Json::Value::Self *a3, char a4, int a5, int a6, int a7, char **a8)
{
  int result;
  int v9;
  long double v10; // fst7
  unsigned int refreshed;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  gaia::ThreadManager::Self *Instance;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_v20)) > _g4_s3 ? (22u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v21)) > _g4_s4 ? (28u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v23)) > _g4_s6 ? (48u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v24)) > _g4_s7 ? (64u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 22u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);

  result = -28;
  if ( *((uint8_t *)a2 + 36) != 0 )
  {
    if ( a4 != 0 )
    {
      v12 = (uint32_t *)opNew(0x44u);
      *v12 = a6;
      v12[1] = a5;
      v12[2] = 1021;
      Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
      v12[7] = 0;
      v12[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
      v12[13] = 0;
      v12[14] = 0;
      v12[15] = 0;
      v12[16] = 0;
      v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "newProfile");
      Json::Value::opAssign(v13, a3);
      Json::Value::Construct((Json::Value::Self *)v22, a7);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "visibility");
      Json::Value::opAssign(v14, (const Json::Value::Self *)v22);
      Json::Value::Destroy((Json::Value::Self *)v22);
      Json::Value::Construct((int)(uintptr_t)(v23), a8);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "selector");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Instance = gaia::ThreadManager::GetInstance();
      return gaia::ThreadManager::pushTask((int)(uintptr_t)(Instance), (int)(uintptr_t)(v12));
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v24, a3);
      gaia::UserProfile::AddNewProfile((int)(uintptr_t)(a2), (Json::Value::Self *)v24, a8);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), (char *)&unk_1B15112, (int)(uintptr_t)(v20) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "me", (int)(uintptr_t)(v20));
      v17 = *((uint32_t *)a2 + 8);
      v9 = gaia::Gaia::GetInstance();
      v18 = gaia::Gaia_Seshat::SetProfile(
              a1,
              *(gaia::Gaia::Self **)(v9 + 568),
              v17,
              (Json::Value::Self *)v24,
              a7,
              &v20[1],
              a8,
              &v21,
              0,
              0,
              0);
      g4_std::string::Destroy(&v20[1]);
      g4_std::string::Destroy(&v21);
      refreshed = v18;
      if ( v18 == 0 )
        refreshed = gaia::UserProfile::RefreshProfile(v10, a2, 0, 0, 0);
      v19 = refreshed;
      Json::Value::Destroy((Json::Value::Self *)v24);
      return v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::DeleteProfile  (binary VA: 0x14e4f60)
// Original: gaia::UserProfile::DeleteProfile
// ----------------------------------------------------------------------------
unsigned int gaia::UserProfile::DeleteProfile(long double a1, gaia::UserProfile::Self *a2, char a3, int a4, int a5)
{
  unsigned int result;
  int v6;
  int v7;
  uint32_t *v8;
  gaia::ThreadManager::Self *Instance;

  result = 0xFFFFFFE4;
  if ( *((uint8_t *)a2 + 36) != 0 )
  {
    if ( a3 != 0 )
    {
      v8 = (uint32_t *)opNew(0x44u);
      *v8 = a5;
      v8[1] = a4;
      v8[2] = 1025;
      Json::Value::Construct((int)(uintptr_t)(v8 + 3), nullptr);
      v8[7] = 0;
      v8[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v8 + 9), nullptr);
      v8[13] = 0;
      v8[14] = 0;
      v8[15] = 0;
      v8[16] = 0;
      Instance = gaia::ThreadManager::GetInstance();
      return gaia::ThreadManager::pushTask((int)(uintptr_t)(Instance), (int)(uintptr_t)(v8));
    }
    else
    {
      v6 = *((uint32_t *)a2 + 8);
      v7 = gaia::Gaia::GetInstance();
      result = gaia::Gaia_Seshat::DeleteProfile(*(gaia::Gaia::Self **)(v7 + 568), v6, 0, 0, 0);
      if ( result == 0 )
        return gaia::UserProfile::RefreshProfile(a1, a2, 0, 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::DeleteCustomFields  (binary VA: 0x14e5090)
// Original: gaia::UserProfile::DeleteCustomFields
// ----------------------------------------------------------------------------
int gaia::UserProfile::DeleteCustomFields(long double a1, gaia::UserProfile::Self *a2, char a3, int a4, int a5)
{
  int result;
  int v6;
  int v7;
  unsigned int refreshed;
  uint32_t *v9;
  gaia::ThreadManager::Self *Instance;
  long double v11; // fst7
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[7];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v16)) > _g4_s4 ? (17u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 17u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  result = -28;
  if ( *((uint8_t *)a2 + 36) != 0 )
  {
    if ( a3 != 0 )
    {
      v9 = (uint32_t *)opNew(0x44u);
      *v9 = a5;
      v9[1] = a4;
      v9[2] = 1024;
      Json::Value::Construct((int)(uintptr_t)(v9 + 3), nullptr);
      v9[7] = 0;
      v9[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v9 + 9), nullptr);
      v9[13] = 0;
      v9[14] = 0;
      v9[15] = 0;
      v9[16] = 0;
      Instance = gaia::ThreadManager::GetInstance();
      return gaia::ThreadManager::pushTask((int)(uintptr_t)(Instance), (int)(uintptr_t)(v9));
    }
    else
    {
      gaia::UserProfile::RemoveCustomFields((gaia::UserProfile::Self *)v19, (int)(uintptr_t)(a2));
      v6 = *((uint32_t *)a2 + 8);
      v7 = gaia::Gaia::GetInstance();
      refreshed = gaia::Gaia_Seshat::DeleteProfile(*(gaia::Gaia::Self **)(v7 + 568), v6, 0, 0, 0);
      if ( refreshed == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v16[2]));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v16[1]));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16[3]), "me", (int)(uintptr_t)(v16));
        v15 = *((uint32_t *)a2 + 8);
        v12 = gaia::Gaia::GetInstance();
        v14 = gaia::Gaia_Seshat::SetProfile(
                a1,
                *(gaia::Gaia::Self **)(v12 + 568),
                v15,
                (Json::Value::Self *)v19,
                4,
                &v16[3],
                &v17,
                &v18,
                0,
                0,
                0);
        g4_std::string::Destroy(&v16[3]);
        g4_std::string::Destroy(&v17);
        g4_std::string::Destroy(&v18);
        refreshed = v14;
        if ( v14 == 0 )
          refreshed = gaia::UserProfile::RefreshProfile(v11, a2, 0, 0, 0);
      }
      v13 = refreshed;
      Json::Value::Destroy((Json::Value::Self *)v19);
      return v13;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::ForceCloseAsyncCalls  (binary VA: 0x14e52f0)
// Original: gaia::UserProfile::ForceCloseAsyncCalls
// ----------------------------------------------------------------------------
int gaia::UserProfile::ForceCloseAsyncCalls()
{
  gaia::ThreadManagerService::Self **Instance;
  gaia::ThreadManagerService::Self **v1;
  gaia::Gaia::Self *v2;
  gaia::ThreadManagerService::Self **v3;
  int result;

  Instance = (gaia::ThreadManagerService::Self **)gaia::ThreadManager::GetInstance();
  gaia::ThreadManager::CancelIdleRequestForUserProfile(Instance);
  while ( 1 )
  {
    v3 = (gaia::ThreadManagerService::Self **)gaia::ThreadManager::GetInstance();
    result = gaia::ThreadManager::HasRequestForUserProfile(v3);
    if ( (uint8_t)result == 0 )
      break;
    v1 = (gaia::ThreadManagerService::Self **)gaia::ThreadManager::GetInstance();
    gaia::ThreadManager::CancelIdleRequestForUserProfile(v1);
    v2 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
    gaia::Gaia::CancelRunningRequestForUserProfile(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::Release  (binary VA: 0x14e5350)
// Original: gaia::UserProfile::Release
// ----------------------------------------------------------------------------
int gaia::UserProfile::Release()
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (6u + sizeof(_g4_t_v1)) > _g4_s0 ? (6u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v2)) > _g4_s1 ? (8u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v3)) > _g4_s2 ? (12u + sizeof(_g4_t_v3)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 6u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  if ( gaia::UserProfile::s_instance != 0 )
  {
    *(uint8_t *)(gaia::UserProfile::s_instance + 28) = 1;
    gaia::UserProfile::ForceCloseAsyncCalls();
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v2), (char *)&unk_1B15112, (int)(uintptr_t)(&v1));
    gaia::UserProfile::SetStandardProfileString(gaia::UserProfile::s_instance, (int)(uintptr_t)(&v2));
    g4_std::string::Destroy(&v2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v3), (char *)&unk_1B15112, (int)(uintptr_t)(&v1) + 1);
    gaia::UserProfile::SetStandardProfileStringTemplate(gaia::UserProfile::s_instance, (int)(uintptr_t)(v3));
    g4_std::string::Destroy(v3);
    *(uint8_t *)(gaia::UserProfile::s_instance + 36) = 0;
  }
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
}

// ----------------------------------------------------------------------------
// Function: gaia::UserProfile::Initialize  (binary VA: 0x14e5430)
// Original: gaia::UserProfile::Initialize
// ----------------------------------------------------------------------------
int gaia::UserProfile::Initialize(long double a1, gaia::UserProfile::Self *a2, int a3, char a4, int a5, int a6)
{
  int result;
  char IsInitialized;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  Json::Value::Self *v27;
  Json::Value::Self *v28;
  Json::Value::Self *v29;
  Json::Value::Self *v30;
  Json::Value::Self *v31;
  Json::Value::Self *v32;
  Json::Value::Self *v33;
  Json::Value::Self *v34;
  Json::Value::Self *v35;
  long double v36; // fst7
  unsigned int refreshed;
  uint32_t *v38;
  Json::Value::Self *v39;
  gaia::ThreadManager::Self *Instance;
  typedef Json::Value::Self *_g4_t_v41;
  typedef Json::Value::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint8_t _g4_t_v45[4];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[16];
  typedef uint8_t _g4_t_v56[16];
  typedef uint8_t _g4_t_v57[16];
  typedef uint8_t _g4_t_v58[16];
  typedef uint8_t _g4_t_v59[16];
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[16];
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[16];
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[16];
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[44];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v42)) > _g4_s1 ? (4u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v43)) > _g4_s2 ? (19u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v44)) > _g4_s3 ? (24u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v45)) > _g4_s4 ? (28u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v46)) > _g4_s5 ? (32u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v47)) > _g4_s6 ? (48u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v48)) > _g4_s7 ? (64u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v49)) > _g4_s8 ? (80u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v50)) > _g4_s9 ? (96u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v51)) > _g4_s10 ? (112u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v52)) > _g4_s11 ? (128u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v53)) > _g4_s12 ? (144u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (160u + sizeof(_g4_t_v54)) > _g4_s13 ? (160u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (176u + sizeof(_g4_t_v55)) > _g4_s14 ? (176u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (192u + sizeof(_g4_t_v56)) > _g4_s15 ? (192u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (208u + sizeof(_g4_t_v57)) > _g4_s16 ? (208u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v58)) > _g4_s17 ? (224u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (240u + sizeof(_g4_t_v59)) > _g4_s18 ? (240u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (256u + sizeof(_g4_t_v60)) > _g4_s19 ? (256u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (272u + sizeof(_g4_t_v61)) > _g4_s20 ? (272u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (288u + sizeof(_g4_t_v62)) > _g4_s21 ? (288u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (304u + sizeof(_g4_t_v63)) > _g4_s22 ? (304u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (320u + sizeof(_g4_t_v64)) > _g4_s23 ? (320u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (336u + sizeof(_g4_t_v65)) > _g4_s24 ? (336u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (352u + sizeof(_g4_t_v66)) > _g4_s25 ? (352u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (368u + sizeof(_g4_t_v67)) > _g4_s26 ? (368u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (384u + sizeof(_g4_t_v68)) > _g4_s27 ? (384u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (400u + sizeof(_g4_t_v69)) > _g4_s28 ? (400u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (416u + sizeof(_g4_t_v70)) > _g4_s29 ? (416u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (432u + sizeof(_g4_t_v71)) > _g4_s30 ? (432u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (448u + sizeof(_g4_t_v72)) > _g4_s31 ? (448u + sizeof(_g4_t_v72)) : _g4_s31,
    _g4_s33 = (464u + sizeof(_g4_t_v73)) > _g4_s32 ? (464u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (480u + sizeof(_g4_t_v74)) > _g4_s33 ? (480u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (496u + sizeof(_g4_t_v75)) > _g4_s34 ? (496u + sizeof(_g4_t_v75)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 19u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 128u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 144u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 192u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 208u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 224u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 240u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 256u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 272u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 288u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 304u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 320u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 336u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 352u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 368u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 384u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 400u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 416u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 432u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 448u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 464u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 480u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 496u);

  result = 0;
  if ( *((uint8_t *)a2 + 36) == 0 )
  {
    gaia::Gaia::GetInstance();
    IsInitialized = gaia::Gaia::IsInitialized();
    result = -21;
    if ( IsInitialized != 0 )
    {
      if ( a4 != 0 )
      {
        v38 = (uint32_t *)opNew(0x44u);
        *v38 = a6;
        v38[1] = a5;
        v38[2] = 1020;
        Json::Value::Construct((int)(uintptr_t)(v38 + 3), nullptr);
        v38[7] = 0;
        v38[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v38 + 9), nullptr);
        v38[13] = 0;
        v38[14] = 0;
        v38[15] = 0;
        v38[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v46, a3);
        v39 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v38 + 3), "accountType");
        Json::Value::opAssign(v39, (const Json::Value::Self *)v46);
        Json::Value::Destroy((Json::Value::Self *)v46);
        Instance = gaia::ThreadManager::GetInstance();
        return gaia::ThreadManager::pushTask((int)(uintptr_t)(Instance), (int)(uintptr_t)(v38));
      }
      else
      {
        gaia::UserProfile::SetAccountConflicting(a2, false);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v43));
        gaia::UserProfile::SetStandardProfileString((int)(uintptr_t)(a2), (int)(uintptr_t)(&v43) + 1);
        g4_std::string::Destroy((char *)&v43 + 1);
        *((uint32_t *)a2 + 8) = a3;
        Json::Value::Construct((int)(uintptr_t)(v47), nullptr);
        Json::Value::Construct((Json::Value::Self *)v48, "gllive:myuser");
        v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "credential");
        Json::Value::opAssign(v8, (const Json::Value::Self *)v48);
        Json::Value::Destroy((Json::Value::Self *)v48);
        Json::Value::Construct((Json::Value::Self *)v49, "2012-01-10 13:37:17Z");
        v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "created");
        Json::Value::opAssign(v9, (const Json::Value::Self *)v49);
        Json::Value::Destroy((Json::Value::Self *)v49);
        Json::Value::Construct((Json::Value::Self *)v50, "2012-01-10 13:37:17Z");
        v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "modified");
        Json::Value::opAssign(v10, (const Json::Value::Self *)v50);
        Json::Value::Destroy((Json::Value::Self *)v50);
        Json::Value::Construct((Json::Value::Self *)v51, "2012-01-10 13:37:17Z");
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "last_session");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v51);
        Json::Value::Destroy((Json::Value::Self *)v51);
        Json::Value::Construct((Json::Value::Self *)v52, 123);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "total_spent");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v52);
        Json::Value::Destroy((Json::Value::Self *)v52);
        Json::Value::Construct((Json::Value::Self *)v53, (const char *)&off_1B71E9C);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "total_spent_currency");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v53);
        Json::Value::Destroy((Json::Value::Self *)v53);
        Json::Value::Construct((Json::Value::Self *)v54, "2012-01-10 13:37:17Z");
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "last_purchase");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v54);
        Json::Value::Destroy((Json::Value::Self *)v54);
        Json::Value::Construct((Json::Value::Self *)v55, "fsdfsfd");
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "adid");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v55);
        Json::Value::Destroy((Json::Value::Self *)v55);
        Json::Value::Construct((Json::Value::Self *)v56, "fasdfsdf");
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "operation");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v56);
        Json::Value::Destroy((Json::Value::Self *)v56);
        Json::Value::Construct((int)(uintptr_t)(v57), nullptr);
        Json::Value::Construct((Json::Value::Self *)v58, "id");
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, "id");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v58);
        Json::Value::Destroy((Json::Value::Self *)v58);
        Json::Value::Construct((Json::Value::Self *)v59, "Samsung_GT-I9000");
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, "model");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v59);
        Json::Value::Destroy((Json::Value::Self *)v59);
        Json::Value::Construct((Json::Value::Self *)v60, "WIFI Country Operation");
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, "carrier");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v60);
        Json::Value::Destroy((Json::Value::Self *)v60);
        Json::Value::Construct((int)(uintptr_t)(v61), nullptr);
        Json::Value::Construct((Json::Value::Self *)v62, "googleplay");
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v61, "name");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v62);
        Json::Value::Destroy((Json::Value::Self *)v62);
        Json::Value::Construct((Json::Value::Self *)v63, "usd");
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v61, "currency");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v63);
        Json::Value::Destroy((Json::Value::Self *)v63);
        v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, "valid_stores");
        Json::Value::append(v22, (const Json::Value::Self *)v61);
        Json::Value::Construct((int)(uintptr_t)(v64), nullptr);
        Json::Value::Construct((Json::Value::Self *)v65, "creditcard");
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v64, "name");
        Json::Value::opAssign(v23, (const Json::Value::Self *)v65);
        Json::Value::Destroy((Json::Value::Self *)v65);
        Json::Value::Construct((Json::Value::Self *)v66, "pes");
        v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v64, "currency");
        Json::Value::opAssign(v24, (const Json::Value::Self *)v66);
        Json::Value::Destroy((Json::Value::Self *)v66);
        v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, "valid_stores");
        Json::Value::append(v25, (const Json::Value::Self *)v64);
        Json::Value::Construct((Json::Value::Self *)v67, "12312313");
        v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v57, "download_code");
        Json::Value::opAssign(v26, (const Json::Value::Self *)v67);
        Json::Value::Destroy((Json::Value::Self *)v67);
        v27 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "devices");
        Json::Value::append(v27, (const Json::Value::Self *)v57);
        Json::Value::Construct((Json::Value::Self *)v68, 3);
        v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "level");
        Json::Value::opAssign(v28, (const Json::Value::Self *)v68);
        Json::Value::Destroy((Json::Value::Self *)v68);
        Json::Value::Construct((Json::Value::Self *)v69, 1000);
        v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "xp");
        Json::Value::opAssign(v29, (const Json::Value::Self *)v69);
        Json::Value::Destroy((Json::Value::Self *)v69);
        Json::Value::Construct((Json::Value::Self *)v70, 144);
        v30 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "total_playtime");
        Json::Value::opAssign(v30, (const Json::Value::Self *)v70);
        Json::Value::Destroy((Json::Value::Self *)v70);
        Json::Value::Construct((Json::Value::Self *)v71, "ca");
        v31 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "country");
        Json::Value::opAssign(v31, (const Json::Value::Self *)v71);
        Json::Value::Destroy((Json::Value::Self *)v71);
        Json::Value::Construct((Json::Value::Self *)v72, "fr");
        v32 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "language");
        Json::Value::opAssign(v32, (const Json::Value::Self *)v72);
        Json::Value::Destroy((Json::Value::Self *)v72);
        Json::Value::Construct((int)(uintptr_t)(v73), nullptr);
        Json::Value::Construct((Json::Value::Self *)v74, 123);
        v33 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v73, "cash");
        Json::Value::opAssign(v33, (const Json::Value::Self *)v74);
        Json::Value::Destroy((Json::Value::Self *)v74);
        Json::Value::Construct((Json::Value::Self *)v75, 123);
        v34 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v73, "coins");
        Json::Value::opAssign(v34, (const Json::Value::Self *)v75);
        Json::Value::Destroy((Json::Value::Self *)v75);
        v35 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "inventory");
        Json::Value::opAssign(v35, (const Json::Value::Self *)v73);
        v44 = &dword_213B814;
        v41 = (Json::Value::Self *)gaia::UserProfile::EncodeData(a1, (int)(uintptr_t)(a2), (Json::Value::Self *)v47, (uint32_t *)(&v44));
        g4_std::string::construct_copy(v45, &v44);
        gaia::UserProfile::SetStandardProfileStringTemplate((int)(uintptr_t)(a2), (int)(uintptr_t)(v45));
        g4_std::string::Destroy(v45);
        refreshed = (unsigned int)(uintptr_t)(v41);
        if ( v41 == nullptr )
        {
          refreshed = gaia::UserProfile::RefreshProfile(v36, a2, 0, 0, 0);
          if ( refreshed == 0 )
            *((uint8_t *)a2 + 36) = 1;
        }
        v42 = (Json::Value::Self *)refreshed;
        g4_std::string::Destroy(&v44);
        Json::Value::Destroy((Json::Value::Self *)v73);
        Json::Value::Destroy((Json::Value::Self *)v64);
        Json::Value::Destroy((Json::Value::Self *)v61);
        Json::Value::Destroy((Json::Value::Self *)v57);
        Json::Value::Destroy((Json::Value::Self *)v47);
        return (int)(uintptr_t)(v42);
      }
    }
  }
  return result;
}


