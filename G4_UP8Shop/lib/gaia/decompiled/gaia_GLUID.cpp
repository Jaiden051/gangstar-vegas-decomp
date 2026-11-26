#include "Core/Utils/DecompTypes.h"
#include "gaia_GLUID.h"

// ----------------------------------------------------------------------------
// Function: gaia::GLUID::Destroy  (binary VA: 0x1386ef0)
// Original: gaia::GLUID::~GLUID
// ----------------------------------------------------------------------------
void gaia::GLUID::Destroy(gaia::GLUID::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::GLUID::Deserialize  (binary VA: 0x14ea820)
// Original: gaia::GLUID::Deserialize
// ----------------------------------------------------------------------------
int gaia::GLUID::Deserialize(int *a1, int a2)
{
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  void **v12;
  unsigned int v13;
  void *v14;
  void *v15;
  void **v16;
  unsigned int v17;
  void *v18;
  Json::Value::Self *v20;
  int v21;
  size_t n;
  Json::Value::Self *v23;
  int v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  Json::Value::Self *v27;
  Json::Value::Self *v28;
  Json::Value::Self *v29;
  int v30;
  Json::Value::Self *v31;
  int v32;
  int i;
  int v34;
  typedef uint8_t *_g4_t_ptr;
  typedef unsigned int _g4_t_size;
  typedef int _g4_t_DecodedBase64DataSize;
  typedef char *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef glwebtools::Codec::Self *_g4_t_v47;
  typedef void *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint8_t _g4_t_v50[4];
  typedef uint8_t _g4_t_v51[4];
  typedef void **_g4_t_v52[2];
  typedef uint8_t _g4_t_v53[16];
  typedef void *_g4_t_v54[5];
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef void *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_ptr)) > _g4_s0 ? (8u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_size)) > _g4_s1 ? (12u + sizeof(_g4_t_size)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_DecodedBase64DataSize)) > _g4_s2 ? (12u + sizeof(_g4_t_DecodedBase64DataSize)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v38)) > _g4_s3 ? (16u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v39)) > _g4_s4 ? (20u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v40)) > _g4_s5 ? (24u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v41)) > _g4_s6 ? (28u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v42)) > _g4_s7 ? (32u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v43)) > _g4_s8 ? (36u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v44)) > _g4_s9 ? (40u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (47u + sizeof(_g4_t_v45)) > _g4_s10 ? (47u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (63u + sizeof(_g4_t_v46)) > _g4_s11 ? (63u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v47)) > _g4_s12 ? (68u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v48)) > _g4_s13 ? (72u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v49)) > _g4_s14 ? (76u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v50)) > _g4_s15 ? (80u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v51)) > _g4_s16 ? (84u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v52)) > _g4_s17 ? (88u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v53)) > _g4_s18 ? (96u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v54)) > _g4_s19 ? (112u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v55)) > _g4_s20 ? (132u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v56)) > _g4_s21 ? (148u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v57)) > _g4_s22 ? (152u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v58)) > _g4_s23 ? (160u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (168u + sizeof(_g4_t_v59)) > _g4_s24 ? (168u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (172u + sizeof(_g4_t_v60)) > _g4_s25 ? (172u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v61)) > _g4_s26 ? (176u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v62)) > _g4_s27 ? (180u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (188u + sizeof(_g4_t_v63)) > _g4_s28 ? (188u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v64)) > _g4_s29 ? (192u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (216u + sizeof(_g4_t_v65)) > _g4_s30 ? (216u + sizeof(_g4_t_v65)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 8u);
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 12u);
  _g4_t_DecodedBase64DataSize &DecodedBase64DataSize = *reinterpret_cast<_g4_t_DecodedBase64DataSize *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 47u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 63u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 132u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 148u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 152u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 160u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 168u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 176u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 180u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 188u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 192u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 216u);

  Json::Value::Construct((int)(uintptr_t)(v53), nullptr);
  Json::Reader::Construct((Json::Reader::Self *)v54);
  v45 = 0;
  if ( (uint8_t)Json::Reader::parse((const char **)v54, a2, (Json::Value::Self *)v53, 1) != 0 )
  {
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    if ( Json::Value::isMember((Json::Value::Self *)v53, "data") )
    {
      v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "data");
      if ( Json::Value::type(v20) == 4 )
      {
        v21 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v53, "data"));
        Json::Value::asString((Json::Value::Self *)v52, v21);
        size = glwebtools::Codec::GetDecodedBase64DataSize((int *)v52, 0);
        ptr = (uint8_t *)(malloc(size));
        if ( glwebtools::Codec::DecodeBase64((glwebtools::Codec::Self **)v52, ptr, 0) == 0 )
        {
          free(ptr);
          g4_std::string::Destroy(v52);
          goto LABEL_2;
        }
        n = 16;
        if ( size <= 0x10 )
          n = size;
        memcpy(a1 + 1, ptr, n);
        free(ptr);
        g4_std::string::Destroy(v52);
        if ( Json::Value::isMember((Json::Value::Self *)v53, "password") )
        {
          v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "password");
          if ( Json::Value::type(v23) == 4 )
          {
            v24 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v53, "password"));
            Json::Value::asString((Json::Value::Self *)&v47, v24);
            DecodedBase64DataSize = glwebtools::Codec::GetDecodedBase64DataSize((int *)&v47, 0);
            v48 = malloc(DecodedBase64DataSize);
            v52[0] = (void **)((uint32_t)(uintptr_t)&off_2095FB8);
            v52[1] = &v48;
            if ( glwebtools::Codec::DecodeBase64(&v47, v48, 0) == 0 )
            {
              gaia::MemoryScope_Free::Destroy(v52);
              g4_std::string::Destroy(&v47);
              goto LABEL_2;
            }
            sub_193A970((int)(uintptr_t)(&v49), v48, DecodedBase64DataSize, (int)(uintptr_t)(&v46));
            g4_std::string::assign_str(a1 + 6, &v49);
            g4_std::string::Destroy(&v49);
            gaia::MemoryScope_Free::Destroy(v52);
            g4_std::string::Destroy(&v47);
            if ( Json::Value::isMember((Json::Value::Self *)v53, "ver") )
            {
              v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "ver");
              if ( Json::Value::type(v25) == 1 )
              {
                v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "ver");
                *a1 = Json::Value::asInt(v26);
                if ( Json::Value::isMember((Json::Value::Self *)v53, "gen") )
                {
                  v27 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "gen");
                  v45 = 0;
                  if ( Json::Value::type(v27) == 1 )
                  {
                    v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "gen");
                    a1[7] = Json::Value::asInt(v28);
                    sub_1938F10((int)(uintptr_t)(a1 + 5), (char *)&unk_1B15112);
                    if ( Json::Value::isMember((Json::Value::Self *)v53, "pck_name") )
                    {
                      v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "pck_name");
                      if ( Json::Value::type(v29) != 4 )
                        goto LABEL_2;
                      v30 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v53, "pck_name"));
                      Json::Value::asString((Json::Value::Self *)v50, v30);
                      g4_std::string::assign_str(a1 + 5, v50);
                      g4_std::string::Destroy(v50);
                    }
                    sub_1938F10((int)(uintptr_t)(a1 + 8), (char *)&unk_1B15112);
                    v45 = 1;
                    if ( Json::Value::isMember((Json::Value::Self *)v53, "time") )
                    {
                      v31 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v53, "time");
                      v45 = 0;
                      if ( Json::Value::type(v31) == 4 )
                      {
                        v32 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v53, "time"));
                        Json::Value::asString((Json::Value::Self *)v51, v32);
                        g4_std::string::assign_str(a1 + 8, v51);
                        g4_std::string::Destroy(v51);
                        v45 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_2:
  v2 = (void *)(v65 - 12);
  if ( (uint32_t *)(v65 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v64 - 12);
  if ( (uint32_t *)(v64 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v43 = v62;
  v41 = v61;
  v40 = v58;
  v39 = v63;
  v42 = v60;
  v44 = v59;
  v38 = (char *)(v60 + 4);
  if ( v63 > v60 + 4 )
  {
    do
    {
      v4 = 0;
      v5 = *(uint32_t *)v38 + 12;
      do
      {
        v6 = *(uint32_t *)(v5 + v4);
        if ( (uint32_t *)(v6 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v6 - 12));
        }
        v4 += 20;
      }
      while ( v4 != 500 );
      v38 += 4;
    }
    while ( v39 > (unsigned int)(uintptr_t)(v38) );
  }
  if ( v39 == v42 )
  {
    for ( i = v40; v41 != i; i += 20 )
    {
      v34 = *(uint32_t *)(i + 12);
      if ( (uint32_t *)(v34 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v34 - 12));
      }
    }
  }
  else
  {
    if ( v40 != v44 )
    {
      v7 = v40;
      do
      {
        v8 = v7 + 12;
        v7 += 20;
        g4_std::string::Destroy(v8);
      }
      while ( v44 != v7 );
    }
    if ( v41 != v43 )
    {
      v9 = v43;
      do
      {
        v10 = v9 + 12;
        v9 += 20;
        g4_std::string::Destroy(v10);
      }
      while ( v41 != v9 );
    }
  }
  v11 = v57;
  if ( v57 != nullptr )
  {
    v12 = (void **)v60;
    v13 = v63 + 4;
    if ( v63 + 4 > v60 )
    {
      do
      {
        v14 = *v12++;
        opDelete(v14);
      }
      while ( v13 > (unsigned int)(uintptr_t)(v12) );
      v11 = v57;
    }
    opDelete(v11);
  }
  v15 = v54[0];
  if ( v54[0] != nullptr )
  {
    v16 = (void **)v55;
    v17 = v56 + 4;
    if ( v56 + 4 > v55 )
    {
      do
      {
        v18 = *v16++;
        opDelete(v18);
      }
      while ( v17 > (unsigned int)(uintptr_t)(v16) );
      v15 = v54[0];
    }
    opDelete(v15);
  }
  Json::Value::Destroy((Json::Value::Self *)v53);
  return v45;
}

// ----------------------------------------------------------------------------
// Function: gaia::GLUID::SetTime  (binary VA: 0x14ed000)
// Original: gaia::GLUID::SetTime
// ----------------------------------------------------------------------------
int gaia::GLUID::SetTime(gaia::GLUID::Self *self, int a2)
{
  typedef int _g4_t_v3;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
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
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[29];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v7)) > _g4_s4 ? (16u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v8)) > _g4_s5 ? (20u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v9)) > _g4_s6 ? (24u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v10)) > _g4_s7 ? (28u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v11)) > _g4_s8 ? (32u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v15)) > _g4_s12 ? (56u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v16)) > _g4_s13 ? (60u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v17)) > _g4_s14 ? (64u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v18)) > _g4_s15 ? (68u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v19)) > _g4_s16 ? (72u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (188u + sizeof(_g4_t_v20)) > _g4_s17 ? (188u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (189u + sizeof(_g4_t_v21)) > _g4_s18 ? (189u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (192u + sizeof(_g4_t_v22)) > _g4_s19 ? (192u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (196u + sizeof(_g4_t_v23)) > _g4_s20 ? (196u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (200u + sizeof(_g4_t_v24)) > _g4_s21 ? (200u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (204u + sizeof(_g4_t_v25)) > _g4_s22 ? (204u + sizeof(_g4_t_v25)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
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

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), (char *)&unk_1B15112, (int)(uintptr_t)(&v3));
  sub_1900810(v19);
  v19[28] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  v25 = 0;
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v9 = 0;
  sub_19119D0((char *)&v8 + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  v10 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v11[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v11[-1] + (uint32_t)(uintptr_t)(*(v10 - 3)), 0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v8 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v11[1] = 0;
  v11[2] = 0;
  v12 = 0;
  v13 = nullptr;
  v14 = 0;
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v15 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v16);
  v17 = 0;
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v18), v4, *((uint32_t *)v4 - 3), (int)(uintptr_t)(&v3) + 1);
  v17 = 24;
  sub_1931CD0(v11, v18, 0, 0);
  sub_19119D0(v19, v11);
  g4_std::string::Destroy(&v4);
  sub_192D620(&v10, a2);
  v5 = &dword_213B814;
  if ( v14 != 0 )
  {
    if ( v14 > (unsigned int)v12 )
    {
      sub_11A9950(&v7, v13, (uint8_t *)v14);
      g4_std::string::assign_str(&v5, &v7);
      g4_std::string::Destroy(&v7);
    }
    else
    {
      sub_11A9950(&v6, v13, (uint8_t *)v12);
      g4_std::string::assign_str(&v5, &v6);
      g4_std::string::Destroy(&v6);
    }
  }
  else
  {
    g4_std::string::assign_str(&v5, &v18);
  }
  g4_std::string::assign_str((char *)self + 32, &v5);
  g4_std::string::Destroy(&v5);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v10 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v11[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v18);
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
  return sub_1900B90(v19);
}


