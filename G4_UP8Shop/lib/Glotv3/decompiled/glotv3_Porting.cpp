#include "Core/Utils/DecompTypes.h"
#include "glotv3_Porting.h"

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::Encrypt  (binary VA: 0x131bd20)
// Original: glotv3::Porting::Encrypt
// ----------------------------------------------------------------------------
int glotv3::Porting::Encrypt(int a1, int a2)
{
  g4_std::string::construct_copy(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::Decrypt  (binary VA: 0x131bfb0)
// Original: glotv3::Porting::Decrypt
// ----------------------------------------------------------------------------
int glotv3::Porting::Decrypt(int a1, int a2)
{
  g4_std::string::construct_copy(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::EncryptXXTEAEncodeBase64  (binary VA: 0x131c190)
// Original: glotv3::Porting::EncryptXXTEAEncodeBase64
// ----------------------------------------------------------------------------
int glotv3::Porting::EncryptXXTEAEncodeBase64(glwebtools::Codec::Self **a1, uint32_t *a2)
{
  glwebtools::Codec::Self **v2;
  glotv3::TrackingManager::Self *v3;
  unsigned int GGID;
  volatile int32_t *v5;
  char *v6;
  int v7;
  glwebtools::Codec::Self *v8;
  int v9;
  glwebtools::Codec::Self *v10;
  int v11;
  __m128d v13;
  __m128d v14;
  int v15;
  typedef unsigned int _g4_t_v16;
  typedef const unsigned int *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef unsigned int _g4_t_EncryptedXXTEADataSize;
  typedef uint32_t *_g4_t_v21;
  typedef glotv3::TrackingManager::Self *_g4_t_v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef unsigned int _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v17)) > _g4_s1 ? (20u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v19)) > _g4_s3 ? (36u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_EncryptedXXTEADataSize)) > _g4_s4 ? (40u + sizeof(_g4_t_EncryptedXXTEADataSize)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v22)) > _g4_s6 ? (56u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v23)) > _g4_s7 ? (60u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v24)) > _g4_s8 ? (64u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_EncryptedXXTEADataSize &EncryptedXXTEADataSize = *reinterpret_cast<_g4_t_EncryptedXXTEADataSize *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);

  v24[6] = (unsigned int)(uintptr_t)(&a1);
  v2 = a1;
  v21 = a2;
  if ( *((uint32_t *)*a1 - 3) == 0 )
  {
    v11 = 1;
    g4_std::string::clear(a2, 0, *(uint32_t *)(*a2 - 12), 0);
    return v11;
  }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v22);
  v3 = v22;
  if ( v22 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v3 = v22;
  }
  GGID = glotv3::TrackingManager::GetGGID(v3);
  v5 = v23;
  if ( v23 != nullptr && __sync_fetch_and_add(v23 + 1, 0xFFFFFFFF) == 1 )
  {
    v18 = GGID;
    G4_VCALL<void>(v5, 8);
    GGID = v18;
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 12);
      GGID = v18;
    }
  }
  v24[0] = GGID;
  v6 = nullptr;
  v24[1] = GGID * GGID;
  v7 = ~GGID;
  v24[3] = 4242 * GGID;
  v8 = *v2;
  v24[2] = v7;
  EncryptedXXTEADataSize = (unsigned int)(uintptr_t)(glwebtools::Codec::GetEncryptedXXTEADataSize(*((glwebtools::Codec::Self **)v8 - 3), v16));
  v9 = 0;
  if ( EncryptedXXTEADataSize != 0 )
  {
    v9 = opNew(EncryptedXXTEADataSize);
    v6 = (char *)v9;
  }
  v19 = &v6[EncryptedXXTEADataSize - v9];
  memset(v6, 0, (size_t)v19);
  v10 = *v2;
  v11 = 0;
  if ( (uint8_t)glwebtools::Codec::EncryptXXTEA(v10, *((uint32_t *)v10 - 3), v6, v19, (unsigned int)(uintptr_t)(v24), v17) != 0 )
  {
    g4_std::string::clear(v21, 0, *(uint32_t *)(*v21 - 12), 0);
    v13 = g4_to_m128d(0);
    g4_m128_lane_ref<double>(v13, 0) = (double)EncryptedXXTEADataSize * 1.4;
    v14 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v13);
    sub_1939B80(
      v21,
      _mm_cvtsi128_si32(
        _mm_xor_si128(
          _mm_cvttpd_epi32(_mm_sub_pd(v13, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v14))),
          _mm_slli_epi32(G4_BITCAST<__m128i>(v14), 0x1Fu))));
    v15 = glwebtools::Codec::EncodeBase64(v6, v19, v21, 0);
    LOBYTE(v15) = (uint8_t)v15 != 0;
    v11 = v15;
    if ( v6 == nullptr )
      return v11;
  }
  else if ( v6 == nullptr )
  {
    return v11;
  }
  opDelete(v6);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::DecodeBase64DecryptXXTEA  (binary VA: 0x131c420)
// Original: glotv3::Porting::DecodeBase64DecryptXXTEA
// ----------------------------------------------------------------------------
int glotv3::Porting::DecodeBase64DecryptXXTEA(uint32_t *a1, void **a2)
{
  glotv3::TrackingManager::Self *v2;
  unsigned int GGID;
  volatile int32_t *v4;
  void *s;
  size_t DecodedBase64DataSize;
  int v7;
  size_t n;
  int v9;
  void *v11;
  void *v12;
  int v13;
  typedef const unsigned int *_g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef glotv3::TrackingManager::Self *_g4_t_v16;
  typedef volatile int32_t *_g4_t_v17;
  typedef unsigned int _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v17)) > _g4_s3 ? (44u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v18)) > _g4_s4 ? (48u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  if ( *(uint32_t *)(*a1 - 12) == 0 )
  {
    v9 = 1;
    g4_std::string::clear(a2, 0, *((uint32_t *)*a2 - 3), 0);
    return v9;
  }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v16);
  v2 = v16;
  if ( v16 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
      "px != 0");
    v2 = v16;
  }
  GGID = glotv3::TrackingManager::GetGGID(v2);
  v4 = v17;
  if ( v17 != nullptr && __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
  {
    v15 = GGID;
    G4_VCALL<void>(v4, 8);
    GGID = v15;
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 12);
      GGID = v15;
    }
  }
  v18[0] = GGID;
  v18[1] = GGID * GGID;
  v18[2] = ~GGID;
  v18[3] = 4242 * GGID;
  s = nullptr;
  DecodedBase64DataSize = glwebtools::Codec::GetDecodedBase64DataSize(a1, 0);
  v7 = 0;
  if ( DecodedBase64DataSize != 0 )
  {
    v7 = opNew(DecodedBase64DataSize);
    s = (void *)v7;
  }
  n = (size_t)s + DecodedBase64DataSize - v7;
  memset(s, 0, n);
  v9 = 0;
  if ( glwebtools::Codec::DecodeBase64(a1, (unsigned int)(uintptr_t)(s), 0) != 0 )
  {
    g4_std::string::clear(a2, 0, *((uint32_t *)*a2 - 3), 0);
    sub_1939D80((int)(uintptr_t)(a2), n, 0);
    v11 = *a2;
    v12 = *((void **)*a2 - 3);
    if ( *((int *)*a2 - 1) >= 0 )
    {
      sub_19397C0(a2);
      v11 = *a2;
    }
    v13 = glwebtools::Codec::DecryptXXTEA((glwebtools::Codec::Self *)s, n, v11, v12, (unsigned int)(uintptr_t)(v18), v14);
    LOBYTE(v13) = (uint8_t)v13 != 0;
    v9 = v13;
    if ( s != nullptr )
      goto LABEL_10;
  }
  else if ( s != nullptr )
  {
LABEL_10:
    opDelete(s);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceAnonymousId  (binary VA: 0x131c660)
// Original: glotv3::Porting::GetDeviceAnonymousId
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceAnonymousId(glotv3::Porting::Self *self)
{
  char *v1;
  size_t v2;
  size_t v3;
  size_t v4;
  int v5;
  int v6;
  size_t v7;
  size_t v8;
  int v9;
  void *v10;
  int Instance;
  int v13;
  int v14;
  char *v15;
  size_t v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  size_t v21;
  size_t v22;
  int v23;
  char *v24;
  size_t v25;
  size_t v26;
  size_t v27;
  int v28;
  int v29;
  size_t v30;
  size_t v31;
  int v32;
  void *v33;
  gaia::Gaia::Self *v34;
  void *v35;
  volatile int32_t *v36;
  uint32_t *v37;
  void *v38;
  volatile int32_t *v39;
  uint32_t *v40;
  typedef gaia::Gaia::Self *_g4_t_v41;
  typedef gaia::Gaia::Self *_g4_t_v42;
  typedef gaia::Gaia::Self *_g4_t_v43;
  typedef gaia::Gaia::Self *_g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef glotv3::Porting::Self *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s2a;
  typedef void *_g4_t_s2b;
  typedef int _g4_t_v55[2];
  typedef char _g4_t_v56;
  typedef int _g4_t_v57[4];
  typedef uint32_t *_g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef int _g4_t_v62[3];
  typedef volatile int32_t *_g4_t_v63;
  typedef uint32_t _g4_t_v64[9];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v42)) > _g4_s1 ? (8u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v43)) > _g4_s2 ? (8u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v44)) > _g4_s3 ? (8u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v45)) > _g4_s4 ? (32u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v46)) > _g4_s5 ? (32u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v47)) > _g4_s6 ? (32u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v48)) > _g4_s7 ? (36u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v49)) > _g4_s8 ? (40u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v50)) > _g4_s9 ? (40u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v51)) > _g4_s10 ? (44u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_s2)) > _g4_s11 ? (48u + sizeof(_g4_t_s2)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_s2a)) > _g4_s12 ? (48u + sizeof(_g4_t_s2a)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_s2b)) > _g4_s13 ? (48u + sizeof(_g4_t_s2b)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v55)) > _g4_s14 ? (52u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (63u + sizeof(_g4_t_v56)) > _g4_s15 ? (63u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v57)) > _g4_s16 ? (72u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v58)) > _g4_s17 ? (88u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v59)) > _g4_s18 ? (104u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v60)) > _g4_s19 ? (116u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v61)) > _g4_s20 ? (120u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v62)) > _g4_s21 ? (124u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v63)) > _g4_s22 ? (136u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v64)) > _g4_s23 ? (140u + sizeof(_g4_t_v64)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 48u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 63u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 88u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 104u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 136u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 140u);

  v64[5] = (uint32_t)(uintptr_t)(&self);
  v48 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v57), "GetDeviceAnonymousId", (int)(uintptr_t)(&v56));
  v1 = (char *)glotv3::Porting::s_CachedIdentifiers[2];
  if ( glotv3::Porting::s_CachedIdentifiers[2] != 0 )
  {
    s2 = (void *)v57[0];
    v51 = (char *)&glotv3::Porting::s_CachedIdentifiers[1];
    v2 = *(uint32_t *)(v57[0] - 12);
    do
    {
      while ( 1 )
      {
        v3 = *(uint32_t *)(*((uint32_t *)v1 + 4) - 12);
        v4 = v3;
        v45 = v2;
        if ( v2 <= v3 )
          v4 = v2;
        v5 = memcmp(*((const void **)v1 + 4), s2, v4);
        v2 = v45;
        v6 = v3 - v45;
        if ( v5 == 0 )
          v5 = v6;
        if ( v5 < 0 )
          break;
        v51 = v1;
        v1 = *((char **)v1 + 2);
        if ( v1 == nullptr )
          goto LABEL_10;
      }
      v1 = *((char **)v1 + 3);
    }
    while ( v1 != nullptr );
LABEL_10:
    if ( v51 != (char *)&glotv3::Porting::s_CachedIdentifiers[1] )
    {
      v7 = v45;
      v8 = *(uint32_t *)(*((uint32_t *)v51 + 4) - 12);
      if ( v8 <= v45 )
        v7 = *(uint32_t *)(*((uint32_t *)v51 + 4) - 12);
      v9 = memcmp(s2, *((const void **)v51 + 4), v7);
      if ( v9 == 0 )
        v9 = v45 - v8;
      if ( v9 >= 0 )
      {
        g4_std::string::construct_copy(v48, v51 + 20);
        goto LABEL_17;
      }
    }
  }
  glotv3::Utils::GetUUID((glotv3::Utils::Self *)&v60);
  Instance = gaia::Gaia::GetInstance(v41);
  ++*(uint32_t *)(Instance + 236);
  gaia::Gaia::GetInstance(v42);
  if ( (uint8_t)gaia::Gaia::IsInitialized(v43) != 0 )
  {
    v34 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance(v44);
    gaia::Gaia::GetCredentialDetails(v34, 19, 2, (gaia::Gaia::Self *)&v60);
  }
  v13 = gaia::Gaia::GetInstance(v44);
  v14 = *(uint32_t *)(v13 + 236);
  if ( v14 > 0 )
    *(uint32_t *)(v13 + 236) = v14 - 1;
  v15 = (char *)glotv3::Porting::s_CachedIdentifiers[2];
  if ( glotv3::Porting::s_CachedIdentifiers[2] == 0 )
  {
    v49 = (char *)&glotv3::Porting::s_CachedIdentifiers[1];
LABEL_57:
    v58 = &dword_213B814;
    g4_std::string::construct_copy(&v61, v57);
    g4_std::string::construct_copy(v62, &v58);
    sub_131B830(v55, glotv3::Porting::s_CachedIdentifiers, (int)(uintptr_t)(v49), (const void **)&v61);
    v49 = (char *)v55[0];
    v35 = (void *)(v62[0] - 12);
    if ( (uint32_t *)(v62[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v35);
    }
    v36 = v61 - 3;
    if ( v61 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v61 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v36);
    v37 = v58 - 3;
    if ( v58 - 3 != dword_213B808 && __sync_fetch_and_add(v58 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v37);
    goto LABEL_38;
  }
  s2a = (void *)v57[0];
  v49 = (char *)&glotv3::Porting::s_CachedIdentifiers[1];
  v16 = *(uint32_t *)(v57[0] - 12);
  do
  {
    while ( 1 )
    {
      v17 = v16;
      v18 = *(uint32_t *)(*((uint32_t *)v15 + 4) - 12);
      v46 = v16;
      if ( v18 <= v16 )
        v17 = *(uint32_t *)(*((uint32_t *)v15 + 4) - 12);
      v19 = memcmp(*((const void **)v15 + 4), s2a, v17);
      v16 = v46;
      v20 = v18 - v46;
      if ( v19 == 0 )
        v19 = v20;
      if ( v19 < 0 )
        break;
      v49 = v15;
      v15 = *((char **)v15 + 2);
      if ( v15 == nullptr )
        goto LABEL_32;
    }
    v15 = *((char **)v15 + 3);
  }
  while ( v15 != nullptr );
LABEL_32:
  if ( v49 == (char *)&glotv3::Porting::s_CachedIdentifiers[1] )
    goto LABEL_57;
  v21 = v46;
  v22 = *(uint32_t *)(*((uint32_t *)v49 + 4) - 12);
  if ( v22 <= v46 )
    v21 = *(uint32_t *)(*((uint32_t *)v49 + 4) - 12);
  v23 = memcmp(s2a, *((const void **)v49 + 4), v21);
  if ( v23 == 0 )
    v23 = v46 - v22;
  if ( v23 < 0 )
    goto LABEL_57;
LABEL_38:
  g4_std::string::assign_str(v49 + 20, &v60);
  v24 = (char *)glotv3::Porting::s_CachedIdentifiers[2];
  if ( glotv3::Porting::s_CachedIdentifiers[2] != 0 )
  {
    s2b = (void *)v57[0];
    v50 = (char *)&glotv3::Porting::s_CachedIdentifiers[1];
    v25 = *(uint32_t *)(v57[0] - 12);
    do
    {
      while ( 1 )
      {
        v26 = v25;
        v27 = *(uint32_t *)(*((uint32_t *)v24 + 4) - 12);
        v47 = v25;
        if ( v27 <= v25 )
          v26 = *(uint32_t *)(*((uint32_t *)v24 + 4) - 12);
        v28 = memcmp(*((const void **)v24 + 4), s2b, v26);
        v25 = v47;
        v29 = v27 - v47;
        if ( v28 == 0 )
          v28 = v29;
        if ( v28 < 0 )
          break;
        v50 = v24;
        v24 = *((char **)v24 + 2);
        if ( v24 == nullptr )
          goto LABEL_47;
      }
      v24 = *((char **)v24 + 3);
    }
    while ( v24 != nullptr );
LABEL_47:
    if ( v50 != (char *)&glotv3::Porting::s_CachedIdentifiers[1] )
    {
      v30 = v47;
      v31 = *(uint32_t *)(*((uint32_t *)v50 + 4) - 12);
      if ( v31 <= v47 )
        v30 = *(uint32_t *)(*((uint32_t *)v50 + 4) - 12);
      v32 = memcmp(s2b, *((const void **)v50 + 4), v30);
      if ( v32 == 0 )
        v32 = v47 - v31;
      if ( v32 >= 0 )
        goto LABEL_53;
    }
  }
  else
  {
    v50 = (char *)&glotv3::Porting::s_CachedIdentifiers[1];
  }
  v59 = &dword_213B814;
  g4_std::string::construct_copy(&v63, v57);
  g4_std::string::construct_copy(v64, &v59);
  sub_131B830(v55, glotv3::Porting::s_CachedIdentifiers, (int)(uintptr_t)(v50), (const void **)&v63);
  v50 = (char *)v55[0];
  v38 = (void *)(v64[0] - 12);
  if ( (uint32_t *)(v64[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v38);
  }
  v39 = v63 - 3;
  if ( v63 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v63 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v39);
  v40 = v59 - 3;
  if ( v59 - 3 != dword_213B808 && __sync_fetch_and_add(v59 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v40);
LABEL_53:
  g4_std::string::construct_copy(v48, v50 + 20);
  v33 = (void *)(v60 - 12);
  if ( (uint32_t *)(v60 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v33);
  }
LABEL_17:
  v10 = (void *)(v57[0] - 12);
  if ( (uint32_t *)(v57[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  return v48;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetFederationAccessToken  (binary VA: 0x131cc80)
// Original: glotv3::Porting::GetFederationAccessToken
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetFederationAccessToken(glotv3::Porting::Self *self)
{
  int Instance;
  int v2;
  int v3;
  int v4;
  gaia::Gaia::Self *v6;
  gaia::Gaia::Self *v7;
  gaia::Gaia::Self *v8;

  g4_std::string::construct_copy(self, &glotv3::system::ETS_NOT_AVAILABLE_STRING);
  Instance = gaia::Gaia::GetInstance(v6);
  ++*(uint32_t *)(Instance + 236);
  v2 = gaia::Gaia::GetInstance(v7);
  if ( gaia::Gaia_Janus::GetJanusToken(*(glwebtools::Mutex::Self **)(v2 + 560), 19, (int)(uintptr_t)(self)) != 0 )
    g4_std::string::assign_str(self, &glotv3::system::ETS_NOT_AVAILABLE_STRING);
  v3 = gaia::Gaia::GetInstance(v8);
  v4 = *(uint32_t *)(v3 + 236);
  if ( v4 > 0 )
    *(uint32_t *)(v3 + 236) = v4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetGameloftDeviceIdentifier  (binary VA: 0x131cd20)
// Original: glotv3::Porting::GetGameloftDeviceIdentifier
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetGameloftDeviceIdentifier(glotv3::Porting::Self *self)
{
  int Instance;
  int v2;
  int v3;
  int v4;
  gaia::Gaia::Self *v6;
  gaia::Gaia::Self *v7;
  gaia::Gaia::Self *v8;

  g4_std::string::construct_copy(self, &glotv3::configuration::DEFAULT_GDID);
  Instance = gaia::Gaia::GetInstance(v6);
  ++*(uint32_t *)(Instance + 236);
  v2 = gaia::Gaia::GetInstance(v7);
  if ( gaia::Gaia::GetGameloftDeviceId(v2, self) != 0 )
    g4_std::string::assign_str(self, &glotv3::configuration::DEFAULT_GDID);
  v3 = gaia::Gaia::GetInstance(v8);
  v4 = *(uint32_t *)(v3 + 236);
  if ( v4 > 0 )
    *(uint32_t *)(v3 + 236) = v4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetMinimumRequiredConcurrency  (binary VA: 0x131cdb0)
// Original: glotv3::Porting::GetMinimumRequiredConcurrency
// ----------------------------------------------------------------------------
int glotv3::Porting::GetMinimumRequiredConcurrency()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetMaximumRequiredConcurrency  (binary VA: 0x131cdc0)
// Original: glotv3::Porting::GetMaximumRequiredConcurrency
// ----------------------------------------------------------------------------
int glotv3::Porting::GetMaximumRequiredConcurrency()
{
  return 5;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceHDIDFV  (binary VA: 0x131cdd0)
// Original: glotv3::Porting::GetDeviceHDIDFV
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceHDIDFV(glotv3::Porting::Self *self)
{
  identifiers::GetCurrentHDIDFV(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetIGPCode  (binary VA: 0x131ce10)
// Original: glotv3::Porting::GetIGPCode
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetIGPCode(glotv3::Porting::Self *self)
{
  GameUtils_GetDefaultIGP((int)(uintptr_t)(self));
  if ( *(uint32_t *)(*(uint32_t *)self - 12) == 0 )
    g4_std::string::assign_str(self, &glotv3::system::NOT_AVAILABLE);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetInjectedIGPCode  (binary VA: 0x131ce70)
// Original: glotv3::Porting::GetInjectedIGPCode
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetInjectedIGPCode(glotv3::Porting::Self *self)
{
  GameUtils_GetInjectedIGP((int)(uintptr_t)(self));
  if ( *(uint32_t *)(*(uint32_t *)self - 12) == 0 )
    g4_std::string::assign_str(self, &glotv3::system::NOT_AVAILABLE);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDownloadCode  (binary VA: 0x131ced0)
// Original: glotv3::Porting::GetDownloadCode
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDownloadCode(glotv3::Porting::Self *self)
{
  GameUtils_GetInjectedSerialKey((int)(uintptr_t)(self));
  if ( *(uint32_t *)(*(uint32_t *)self - 12) == 0 )
    g4_std::string::assign_str(self, &glotv3::system::NOT_AVAILABLE);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::SetThreadPriority  (binary VA: 0x131cf30)
// Original: glotv3::Porting::SetThreadPriority
// ----------------------------------------------------------------------------
bool glotv3::Porting::SetThreadPriority(glotv3::Porting::Self *self)
{
  pthread_t target_thread;
  pthread_t v2;
  typedef struct sched_param _g4_t_param;
  typedef int _g4_t_policy;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_param)) > _g4_s0 ? (8u + sizeof(_g4_t_param)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_policy)) > _g4_s1 ? (12u + sizeof(_g4_t_policy)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_param &param = *reinterpret_cast<_g4_t_param *>(_g4_sf + 8u);
  _g4_t_policy &policy = *reinterpret_cast<_g4_t_policy *>(_g4_sf + 12u);

  target_thread = boost::thread::native_handle((boost::thread::Self *)self);
  pthread_getschedparam(target_thread, &policy, &param);
  param.sched_priority = sched_get_priority_min(0);
  v2 = boost::thread::native_handle((boost::thread::Self *)self);
  return pthread_setschedparam(v2, 0, &param) != 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetPlatform  (binary VA: 0x131cfc0)
// Original: glotv3::Porting::GetPlatform
// ----------------------------------------------------------------------------
int glotv3::Porting::GetPlatform()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetPlatformString  (binary VA: 0x131cfd0)
// Original: glotv3::Porting::GetPlatformString
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetPlatformString(glotv3::Porting::Self *self)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (11u + sizeof(_g4_t_v2)) > _g4_s0 ? (11u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 11u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  switch ( glotv3::Porting::GetPlatform() )
  {
    case 0:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "win32", (int)(uintptr_t)(&v2));
      break;
    case 1:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "android", (int)(uintptr_t)(&v3));
      break;
    case 2:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&off_1B1DB5C, (int)(uintptr_t)(&v3) + 1);
      break;
    case 3:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "w8", (int)(uintptr_t)(&v3) + 2);
      break;
    case 4:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "wp8", (int)(uintptr_t)(&v3) + 3);
      break;
    default:
      g4_std::string::construct_copy(self, &glotv3::system::ETS_NOT_AVAILABLE_STRING);
      break;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDataDirectory  (binary VA: 0x131d0d0)
// Original: glotv3::Porting::GetDataDirectory
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDataDirectory(glotv3::Porting::Self *self)
{
  GameUtils_GetSaveFolder((int)(uintptr_t)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetResourceDirectory  (binary VA: 0x131d110)
// Original: glotv3::Porting::GetResourceDirectory
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetResourceDirectory(glotv3::Porting::Self *self)
{
  GameUtils_GetSDFolder((int)(uintptr_t)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceCarrierName  (binary VA: 0x131d150)
// Original: glotv3::Porting::GetDeviceCarrierName
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceCarrierName(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetCarrierName((DeviceUtils::Self *)v4);
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::system::NOT_AVAILABLE);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceCountry  (binary VA: 0x131d200)
// Original: glotv3::Porting::GetDeviceCountry
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceCountry(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetCountry((DeviceUtils::Self *)v4);
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::system::NOT_AVAILABLE);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceLanguage  (binary VA: 0x131d2b0)
// Original: glotv3::Porting::GetDeviceLanguage
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceLanguage(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetLanguage((DeviceUtils::Self *)v4);
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::system::NOT_AVAILABLE);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceName  (binary VA: 0x131d360)
// Original: glotv3::Porting::GetDeviceName
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceName(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetDeviceName((int)(uintptr_t)(v4));
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::system::NOT_AVAILABLE);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceFirmware  (binary VA: 0x131d410)
// Original: glotv3::Porting::GetDeviceFirmware
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceFirmware(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetFirmware((int)(uintptr_t)(v4));
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::system::NOT_AVAILABLE);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceIdentifierForVendor  (binary VA: 0x131d4c0)
// Original: glotv3::Porting::GetDeviceIdentifierForVendor
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceIdentifierForVendor(glotv3::Porting::Self *self)
{
  g4_std::string::construct_copy(self, &glotv3::configuration::DEFAULT_UDID);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceIdentifier  (binary VA: 0x131d500)
// Original: glotv3::Porting::GetDeviceIdentifier
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceIdentifier(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  void *v3;
  void *v5;
  void *v6;
  typedef uint32_t _g4_t_v7[4];
  typedef uint32_t _g4_t_v8[4];
  typedef uint32_t _g4_t_v9[4];
  typedef uint32_t _g4_t_v10[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  v10[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetAndroidId((int)(uintptr_t)(v7));
  if ( *(uint32_t *)(v7[0] - 12) != 0 )
  {
    g4_std::string::construct_copy(v1, v7);
  }
  else
  {
    DeviceUtils_GetSerial((int)(uintptr_t)(v8));
    if ( *(uint32_t *)(v8[0] - 12) != 0 )
    {
      g4_std::string::construct_copy(v1, v8);
    }
    else
    {
      DeviceUtils_GetCPUSerial((int)(uintptr_t)(v9));
      if ( *(uint32_t *)(v9[0] - 12) != 0 )
      {
        g4_std::string::construct_copy(v1, v9);
      }
      else
      {
        DeviceUtils_GetMacAddress((int)(uintptr_t)(v10));
        if ( *(uint32_t *)(v10[0] - 12) != 0 )
          g4_std::string::construct_copy(v1, v10);
        else
          g4_std::string::construct_copy(v1, &glotv3::configuration::DEFAULT_UDID);
        v5 = (void *)(v10[0] - 12);
        if ( (uint32_t *)(v10[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
      }
      v6 = (void *)(v9[0] - 12);
      if ( (uint32_t *)(v9[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
    }
    v2 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
  }
  v3 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceMACAddress  (binary VA: 0x131d6f0)
// Original: glotv3::Porting::GetDeviceMACAddress
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceMACAddress(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetMacAddress((int)(uintptr_t)(v4));
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::configuration::DEFAULT_MAC);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceIsJbOrRt  (binary VA: 0x131d7a0)
// Original: glotv3::Porting::GetDeviceIsJbOrRt
// ----------------------------------------------------------------------------
bool glotv3::Porting::GetDeviceIsJbOrRt()
{
  return GameUtils_IsDeviceJbOrRt();
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetApplicationIsEncrypted  (binary VA: 0x131d7c0)
// Original: glotv3::Porting::GetApplicationIsEncrypted
// ----------------------------------------------------------------------------
int glotv3::Porting::GetApplicationIsEncrypted()
{
  return GameUtils_IsAppEnc();
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetConnectivityType  (binary VA: 0x131d7e0)
// Original: glotv3::Porting::GetConnectivityType
// ----------------------------------------------------------------------------
int glotv3::Porting::GetConnectivityType()
{
  unsigned int hasConnectivity;
  Elf32_Sym *v1;

  hasConnectivity = GameUtils_hasConnectivity();
  v1 = (Elf32_Sym *)(&stru_25254);
  if ( hasConnectivity <= 8 )
    return dword_1CFEC80[hasConnectivity];
  return (int)(uintptr_t)(v1);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetPublisherHostId  (binary VA: 0x131d810)
// Original: glotv3::Porting::GetPublisherHostId
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetPublisherHostId(glotv3::Porting::Self *self)
{
  g4_std::string::construct_copy(self, &glotv3::configuration::DEFAULT_PHID);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetDeviceIdentifierForAdvertising  (binary VA: 0x131d850)
// Original: glotv3::Porting::GetDeviceIdentifierForAdvertising
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetDeviceIdentifierForAdvertising(glotv3::Porting::Self *self)
{
  g4_std::string::construct_copy(self, &glotv3::configuration::DEFAULT_UDID);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetIdentifierPersistentAtUnistall  (binary VA: 0x131d890)
// Original: glotv3::Porting::GetIdentifierPersistentAtUnistall
// ----------------------------------------------------------------------------
int glotv3::Porting::GetIdentifierPersistentAtUnistall(int a1)
{
  g4_std::string::construct_copy(a1, &glotv3::system::NOT_AVAILABLE);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::SetIdentifierPersistentAtUninstall  (binary VA: 0x131d8d0)
// Original: glotv3::Porting::SetIdentifierPersistentAtUninstall
// ----------------------------------------------------------------------------
int glotv3::Porting::SetIdentifierPersistentAtUninstall()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetApplicationHasUninstallPersistentKey  (binary VA: 0x131d8e0)
// Original: glotv3::Porting::GetApplicationHasUninstallPersistentKey
// ----------------------------------------------------------------------------
int glotv3::Porting::GetApplicationHasUninstallPersistentKey()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::SetApplicationUninstallPersistentKey  (binary VA: 0x131d8f0)
// Original: glotv3::Porting::SetApplicationUninstallPersistentKey
// ----------------------------------------------------------------------------
int glotv3::Porting::SetApplicationUninstallPersistentKey()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetChannelID  (binary VA: 0x131d900)
// Original: glotv3::Porting::GetChannelID
// ----------------------------------------------------------------------------
int glotv3::Porting::GetChannelID(glotv3::Porting::Self *self)
{
  int v1;
  char v2;
  void *v3;
  typedef char _g4_t_v5;
  typedef uint32_t _g4_t_v6[3];
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v6)) > _g4_s1 ? (32u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v7)) > _g4_s2 ? (44u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v1 = 0;
  v6[0] = 0;
  GameUtils_GetMetaDataValue((GameUtils::Self *)v7, glotv3::system::META_DATA_KEY_CHANNEL_ID);
  v2 = glotv3::Utils::TryParseStringToUInt(v7, v6);
  v3 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = v2;
    g4_std::string::Rep::M_destroy(v3);
    v2 = v5;
  }
  if ( v2 != 0 )
    return v6[0];
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetIMEI  (binary VA: 0x131d9b0)
// Original: glotv3::Porting::GetIMEI
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetIMEI(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetIMEI((int)(uintptr_t)(v4));
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::configuration::DEFAULT_IDENTIFIER);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetAndroidID  (binary VA: 0x131da60)
// Original: glotv3::Porting::GetAndroidID
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetAndroidID(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetAndroidId((int)(uintptr_t)(v4));
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::configuration::DEFAULT_IDENTIFIER);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetSerialNumber  (binary VA: 0x131db10)
// Original: glotv3::Porting::GetSerialNumber
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetSerialNumber(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetSerial((int)(uintptr_t)(v4));
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::configuration::DEFAULT_IDENTIFIER);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::TryGetInstallReferral  (binary VA: 0x131dbc0)
// Original: glotv3::Porting::TryGetInstallReferral
// ----------------------------------------------------------------------------
int glotv3::Porting::TryGetInstallReferral(glotv3::Porting::Self *self)
{
  uint8_t *v1;
  uint32_t *v2;
  int v3;
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *v7;
  uint32_t *v8;
  int result;
  int v10;
  uint32_t *v11;
  char *v12;
  void *v13;
  void *v14;
  void *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint8_t *v18;
  uint32_t *v19;
  uint8_t *v20;
  int v21;
  size_t v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  size_t v27;
  size_t v28;
  int v29;
  void *v30;
  void *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint8_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  uint32_t *v39;
  size_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  void *v43;
  volatile int32_t *v44;
  uint32_t *v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef uint8_t _g4_t_v52;
  typedef uint8_t _g4_t_v53;
  typedef uint8_t _g4_t_v54;
  typedef uint8_t _g4_t_v55;
  typedef uint8_t _g4_t_v56;
  typedef uint8_t _g4_t_v57;
  typedef glotv3::Porting::Self *_g4_t_v58;
  typedef uint8_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef void *_g4_t_s2;
  typedef size_t *_g4_t_s2a;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef uint8_t *_g4_t_v67;
  typedef int _g4_t_v68[4];
  typedef char _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71[4];
  typedef int _g4_t_v72[4];
  typedef int _g4_t_v73[4];
  typedef void *_g4_t_src[4];
  typedef uint32_t *_g4_t_v75;
  typedef int _g4_t_v76[4];
  typedef uint32_t _g4_t_v77[4];
  typedef uint32_t _g4_t_v78[4];
  typedef uint32_t *_g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef volatile int32_t *_g4_t_v82;
  typedef uint32_t _g4_t_v83[9];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v47)) > _g4_s1 ? (0u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v48)) > _g4_s2 ? (0u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v49)) > _g4_s3 ? (0u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v50)) > _g4_s4 ? (0u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v51)) > _g4_s5 ? (4u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v52)) > _g4_s6 ? (4u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v53)) > _g4_s7 ? (4u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v54)) > _g4_s8 ? (4u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v55)) > _g4_s9 ? (4u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v56)) > _g4_s10 ? (4u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v57)) > _g4_s11 ? (4u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v58)) > _g4_s12 ? (16u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v59)) > _g4_s13 ? (20u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v60)) > _g4_s14 ? (24u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_s2)) > _g4_s15 ? (28u + sizeof(_g4_t_s2)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_s2a)) > _g4_s16 ? (28u + sizeof(_g4_t_s2a)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_n)) > _g4_s17 ? (32u + sizeof(_g4_t_n)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_na)) > _g4_s18 ? (32u + sizeof(_g4_t_na)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_nb)) > _g4_s19 ? (32u + sizeof(_g4_t_nb)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_nc)) > _g4_s20 ? (32u + sizeof(_g4_t_nc)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v67)) > _g4_s21 ? (36u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v68)) > _g4_s22 ? (40u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v69)) > _g4_s23 ? (56u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (57u + sizeof(_g4_t_v70)) > _g4_s24 ? (57u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v71)) > _g4_s25 ? (76u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v72)) > _g4_s26 ? (92u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v73)) > _g4_s27 ? (108u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_src)) > _g4_s28 ? (124u + sizeof(_g4_t_src)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v75)) > _g4_s29 ? (140u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v76)) > _g4_s30 ? (156u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v77)) > _g4_s31 ? (172u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v78)) > _g4_s32 ? (188u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v79)) > _g4_s33 ? (204u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v80)) > _g4_s34 ? (212u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (216u + sizeof(_g4_t_v81)) > _g4_s35 ? (216u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (220u + sizeof(_g4_t_v82)) > _g4_s36 ? (220u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (224u + sizeof(_g4_t_v83)) > _g4_s37 ? (224u + sizeof(_g4_t_v83)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 32u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 32u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 57u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 108u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 140u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 156u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 172u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 188u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 204u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 212u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 216u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 220u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 224u);

  v83[5] = (uint32_t)(uintptr_t)(&self);
  v58 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v71), "referrer", (int)(uintptr_t)(&v69));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v72), "rsend_referrer", (int)(uintptr_t)(&v70));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v73), "utm_source", (int)(uintptr_t)(&v70) + 1);
  GameUtils_ReadSharedPrefenceString((int)(uintptr_t)(src), (ABundle::Self *)v71[0], (ABundle::Self *)&unk_1B15112, (ABundle::Self *)v72[0]);
  if ( g4_std_compat::string_find(src, v73[0], 0, *(uint32_t *)(v73[0] - 12)) == -1 )
  {
    result = 0;
    goto LABEL_27;
  }
  v1 = (uint8_t *)(src[0]);
  v2 = (uint32_t *)(src[0]);
  if ( *((int *)src[0] - 1) >= 0 )
  {
    sub_19397C0(src);
    v1 = (uint8_t *)(src[0]);
    if ( *((int *)src[0] - 1) >= 0 )
      sub_19397C0(src);
    v2 = (uint32_t *)(src[0]);
  }
  v67 = (uint8_t *)((char *)v2 + *(v2 - 3));
  v3 = v67 - v1;
  v4 = (v67 - v1) >> 2;
  if ( v4 <= 0 )
  {
    v5 = v1;
    goto LABEL_18;
  }
  if ( *v1 == 35 )
  {
    v5 = v1;
    goto LABEL_22;
  }
  if ( v1[1] == 35 )
  {
    v5 = v1 + 1;
    goto LABEL_39;
  }
  if ( v1[2] == 35 )
  {
    v5 = v1 + 2;
    goto LABEL_39;
  }
  if ( v1[3] == 35 )
  {
    v6 = v1 + 3;
LABEL_38:
    v5 = v6;
LABEL_39:
    if ( v1 == v5 )
      goto LABEL_23;
    goto LABEL_32;
  }
  v5 = v1;
  while ( 1 )
  {
    --v4;
    v7 = v5 + 4;
    v5 += 4;
    if ( v4 == 0 )
      break;
    if ( *v7 == 35 )
      goto LABEL_22;
    v6 = v5 + 1;
    if ( v7[1] != 35 )
    {
      v6 = v5 + 2;
      if ( v7[2] != 35 )
      {
        v6 = v5 + 3;
        if ( v7[3] != 35 )
          continue;
      }
    }
    goto LABEL_38;
  }
  v3 = v67 - v5;
LABEL_18:
  if ( v3 == 2 )
  {
LABEL_44:
    if ( *v5 == 35 )
      goto LABEL_22;
    ++v5;
    goto LABEL_46;
  }
  if ( v3 == 3 )
  {
    if ( *v5 == 35 )
      goto LABEL_22;
    ++v5;
    goto LABEL_44;
  }
  if ( v3 != 1 )
  {
    v5 = v67;
    goto LABEL_22;
  }
LABEL_46:
  if ( *v5 != 35 )
    v5 = v67;
LABEL_22:
  if ( v1 == v5 )
  {
LABEL_23:
    v8 = &dword_213B814;
    goto LABEL_24;
  }
LABEL_32:
  n = v5 - v1;
  v16 = (uint32_t *)sub_1938930(v5 - v1, 0);
  v17 = v16;
  v8 = v16 + 3;
  if ( n == 1 )
  {
    *((uint8_t *)v16 + 12) = *v1;
  }
  else
  {
    v46 = (size_t)v16;
    memcpy(v16 + 3, v1, n);
    v17 = (uint32_t *)v46;
  }
  if ( v17 != dword_213B808 )
  {
    v17[2] = 0;
    *v17 = n;
    *((uint8_t *)v17 + n + 12) = 0;
  }
LABEL_24:
  v75 = v8;
  v76[0] = (int)(uintptr_t)(&dword_213B814);
  result = glotv3::Utils::UrlDecode(&v75, v76);
  v10 = v76[0];
  if ( (uint8_t)result != 0 )
  {
    v59 = (uint8_t *)v76[0];
    v18 = (uint8_t *)v76[0];
    if ( *(int *)(v76[0] - 4) >= 0 )
    {
      sub_19397C0(v76);
      v59 = (uint8_t *)v76[0];
      if ( *(int *)(v76[0] - 4) >= 0 )
        sub_19397C0(v76);
      v18 = (uint8_t *)v76[0];
    }
    g4_std::string::append((int)(uintptr_t)(v76), "&", 1u);
    v10 = v76[0];
    while ( 1 )
    {
      if ( *(int *)(v10 - 4) >= 0 )
      {
        sub_19397C0(v76);
        v10 = v76[0];
      }
      if ( v18 == (uint8_t *)(v10 + *(uint32_t *)(v10 - 12)) )
      {
        result = 1;
        goto LABEL_25;
      }
      na = (size_t)(v18 + 1);
      if ( *v18 == 38 )
        break;
LABEL_54:
      v18 = (uint8_t *)na;
    }
    v19 = &dword_213B814;
    if ( v18 != v59 )
    {
      v37 = (uint32_t *)sub_1938930(v18 - v59, 0);
      v38 = v18 - v59;
      v39 = v37;
      v19 = v37 + 3;
      if ( v18 - v59 == 1 )
      {
        *((uint8_t *)v37 + 12) = *v59;
      }
      else
      {
        v48 = (size_t)v37;
        memcpy(v19, v59, v18 - v59);
        v38 = v18 - v59;
        v39 = (uint32_t *)v48;
      }
      if ( v39 != dword_213B808 )
      {
        v39[2] = 0;
        *v39 = v38;
        *((uint8_t *)v39 + v38 + 12) = 0;
      }
    }
    v77[0] = (uint32_t)(uintptr_t)(v19);
    v78[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( v18 != v59 )
    {
      v20 = v59;
      if ( *v59 == 61 )
      {
LABEL_84:
        v32 = &dword_213B814;
        if ( v59 != v20 )
        {
          nc = v20 - v59;
          v41 = (uint32_t *)sub_1938930(v20 - v59, 0);
          v42 = v41;
          v32 = v41 + 3;
          if ( v20 - v59 == 1 )
          {
            *((uint8_t *)v41 + 12) = *v59;
          }
          else
          {
            v50 = (size_t)(v41 + 3);
            v51 = (size_t)v41;
            memcpy(v41 + 3, v59, nc);
            v42 = (uint32_t *)v51;
            v32 = (uint32_t *)v50;
          }
          if ( v42 != dword_213B808 )
          {
            v42[2] = 0;
            *v42 = nc;
            *((uint8_t *)v42 + nc + 12) = 0;
          }
        }
        v80 = v32;
        g4_std::string::assign_str(v77, &v80);
        v33 = v80 - 3;
        if ( v80 - 3 != dword_213B808 && __sync_fetch_and_add(v80 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v33);
        v34 = v20 + 1;
        v35 = &dword_213B814;
        if ( v20 + 1 != v18 )
        {
          nb = v18 - v34;
          v40 = (size_t *)sub_1938930(v18 - v34, 0);
          s2a = v40;
          v35 = (uint32_t *)(v40 + 3);
          if ( nb == 1 )
          {
            *((uint8_t *)v40 + 12) = v20[1];
          }
          else
          {
            v49 = (size_t)(v40 + 3);
            memcpy(v35, v20 + 1, nb);
            v35 = (uint32_t *)v49;
          }
          if ( s2a != (size_t *)(uintptr_t)(dword_213B808) )
          {
            s2a[2] = 0;
            *s2a = nb;
            *((uint8_t *)s2a + nb + 12) = 0;
          }
        }
        v81 = v35;
        g4_std::string::assign_str(v78, &v81);
        v36 = v81 - 3;
        if ( v81 - 3 != dword_213B808 && __sync_fetch_and_add(v81 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v36);
      }
      else
      {
        while ( ++v20 != v18 )
        {
          if ( *v20 == 61 )
            goto LABEL_84;
        }
      }
    }
    na = (size_t)(v18 + 1);
    v59 = v18 + 1;
    v21 = *((uint32_t *)v58 + 2);
    if ( v21 != 0 )
    {
      s2 = (void *)v77[0];
      v60 = (int)(uintptr_t)(v58) + 4;
      v22 = *(uint32_t *)(v77[0] - 12);
      do
      {
        while ( 1 )
        {
          v23 = *(uint32_t *)(*(uint32_t *)(v21 + 16) - 12);
          v24 = v23;
          v47 = v22;
          if ( v22 <= v23 )
            v24 = v22;
          v25 = memcmp(*(const void **)(v21 + 16), s2, v24);
          v22 = v47;
          v26 = v23 - v47;
          if ( v25 == 0 )
            v25 = v26;
          if ( v25 < 0 )
            break;
          v60 = v21;
          v21 = *(uint32_t *)(v21 + 8);
          if ( v21 == 0 )
            goto LABEL_74;
        }
        v21 = *(uint32_t *)(v21 + 12);
      }
      while ( v21 != 0 );
LABEL_74:
      if ( (glotv3::Porting::Self *)((char *)v58 + 4) != (glotv3::Porting::Self *)v60 )
      {
        v27 = *(uint32_t *)(*(uint32_t *)(v60 + 16) - 12);
        v28 = v27;
        if ( v47 <= v27 )
          v28 = v47;
        v29 = memcmp(s2, *(const void **)(v60 + 16), v28);
        if ( v29 == 0 )
          v29 = v47 - v27;
        if ( v29 >= 0 )
          goto LABEL_80;
      }
    }
    else
    {
      v60 = (int)(uintptr_t)(v58) + 4;
    }
    v79 = &dword_213B814;
    g4_std::string::construct_copy(&v82, v77);
    g4_std::string::construct_copy(v83, &v79);
    sub_131B830(v68, v58, v60, (const void **)&v82);
    v60 = v68[0];
    v43 = (void *)(v83[0] - 12);
    if ( (uint32_t *)(v83[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v83[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v43);
    }
    v44 = v82 - 3;
    if ( v82 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v82 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v44);
    v45 = v79 - 3;
    if ( v79 - 3 != dword_213B808 && __sync_fetch_and_add(v79 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v45);
LABEL_80:
    g4_std::string::assign_str(v60 + 20, v78);
    v30 = (void *)(v78[0] - 12);
    if ( (uint32_t *)(v78[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v78[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    v31 = (void *)(v77[0] - 12);
    if ( (uint32_t *)(v77[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v77[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v31);
    }
    v10 = v76[0];
    goto LABEL_54;
  }
LABEL_25:
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    v56 = result;
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
    result = v56;
  }
  v11 = v75 - 3;
  if ( v75 - 3 != dword_213B808 && __sync_fetch_and_add(v75 - 1, 0xFFFFFFFF) <= 0 )
  {
    v57 = result;
    g4_std::string::Rep::M_destroy(v11);
    result = v57;
  }
LABEL_27:
  v12 = (char *)src[0] - 12;
  if ( (char *)src[0] - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)src[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    v55 = result;
    g4_std::string::Rep::M_destroy(v12);
    result = v55;
  }
  v13 = (void *)(v73[0] - 12);
  if ( (uint32_t *)(v73[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v73[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v53 = result;
    g4_std::string::Rep::M_destroy(v13);
    result = v53;
  }
  v14 = (void *)(v72[0] - 12);
  if ( (uint32_t *)(v72[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v72[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v54 = result;
    g4_std::string::Rep::M_destroy(v14);
    result = v54;
  }
  v15 = (void *)(v71[0] - 12);
  if ( (uint32_t *)(v71[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v71[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v52 = result;
    g4_std::string::Rep::M_destroy(v15);
    return v52;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetGoogleAdvertisingID  (binary VA: 0x131e720)
// Original: glotv3::Porting::GetGoogleAdvertisingID
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetGoogleAdvertisingID(glotv3::Porting::Self *self)
{
  glotv3::Porting::Self *v1;
  void *v2;
  uint32_t v4[7];

  v4[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  DeviceUtils_GetGoogleAdId((DeviceUtils::Self *)v4);
  if ( *(uint32_t *)(v4[0] - 12) != 0 )
    g4_std::string::construct_copy(v1, v4);
  else
    g4_std::string::construct_copy(v1, &glotv3::configuration::DEFAULT_IDENTIFIER);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::GetWindowsAdvertisingID  (binary VA: 0x131e7d0)
// Original: glotv3::Porting::GetWindowsAdvertisingID
// ----------------------------------------------------------------------------
glotv3::Porting::Self * glotv3::Porting::GetWindowsAdvertisingID(glotv3::Porting::Self *self)
{
  g4_std::string::construct_copy(self, &glotv3::configuration::DEFAULT_IDENTIFIER);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Porting::EraseIdentifiersCache  (binary VA: 0x131e810)
// Original: glotv3::Porting::EraseIdentifiersCache
// ----------------------------------------------------------------------------
uint32_t * glotv3::Porting::EraseIdentifiersCache()
{
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(glotv3::Porting::s_CachedIdentifiers),
    (void *)glotv3::Porting::s_CachedIdentifiers[2]);
  glotv3::Porting::s_CachedIdentifiers[2] = 0;
  glotv3::Porting::s_CachedIdentifiers[3] = (uintptr_t)(uintptr_t)(&glotv3::Porting::s_CachedIdentifiers[1]);
  glotv3::Porting::s_CachedIdentifiers[4] = (uintptr_t)(uintptr_t)(&glotv3::Porting::s_CachedIdentifiers[1]);
  glotv3::Porting::s_CachedIdentifiers[5] = 0;
  return (uint32_t *)(&glotv3::Porting::s_CachedIdentifiers[1]);
}


