#include "Core/Utils/DecompTypes.h"
#include "gaia_CrmAction.h"

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetUNIXSeconds  (binary VA: 0x14caa30)
// Original: gaia::CrmAction::GetUNIXSeconds
// ----------------------------------------------------------------------------
__time_t gaia::CrmAction::GetUNIXSeconds()
{
  int v0;
  __time_t tv_sec;
  typedef struct timespec _g4_t_tp;
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_tp)) > _g4_s0 ? (0u + sizeof(_g4_t_tp)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_tv)) > _g4_s1 ? (8u + sizeof(_g4_t_tv)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 0u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  v0 = clock_gettime(0, &tp);
  tv_sec = tp.tv_sec;
  if ( v0 == -1 )
  {
    gettimeofday(&tv, nullptr);
    return tv.tv_sec;
  }
  return tv_sec;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Serialize  (binary VA: 0x14caa90)
// Original: gaia::CrmAction::Serialize
// ----------------------------------------------------------------------------
gaia::CrmAction::Self * gaia::CrmAction::Serialize(gaia::CrmAction::Self *self, int a2)
{
  int v2;
  Json::Value::Self *v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  unsigned int i;
  int v10;
  Json::Value::Self *v11;
  int v12;
  int *v13;
  int *v14;
  int *v15;
  int v16;
  Json::Value::Self *v17;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef char *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int *_g4_t_dest;
  typedef int _g4_t_v40;
  typedef int *_g4_t_src;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[44];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v31)) > _g4_s3 ? (4u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v32)) > _g4_s4 ? (4u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v33)) > _g4_s5 ? (4u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v34)) > _g4_s6 ? (4u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v35)) > _g4_s7 ? (4u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v36)) > _g4_s8 ? (8u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v37)) > _g4_s9 ? (12u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v38)) > _g4_s10 ? (12u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_dest)) > _g4_s11 ? (12u + sizeof(_g4_t_dest)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v40)) > _g4_s12 ? (16u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_src)) > _g4_s13 ? (20u + sizeof(_g4_t_src)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v42)) > _g4_s14 ? (28u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v43)) > _g4_s15 ? (44u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v44)) > _g4_s16 ? (48u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v45)) > _g4_s17 ? (64u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v46)) > _g4_s18 ? (80u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v47)) > _g4_s19 ? (96u + sizeof(_g4_t_v47)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);

  if ( ((*(uint32_t *)(a2 + 116) - *(uint32_t *)(a2 + 108)) >> 2)
     + ((*(uint32_t *)(a2 + 124) - *(uint32_t *)(a2 + 128)) >> 2)
     + ((((*(uint32_t *)(a2 + 136) - *(uint32_t *)(a2 + 120)) >> 2) - 1) << 7) != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v44), nullptr);
    v2 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a2 + 52), &gaia::k_szCampaignID));
    Json::Value::asString((Json::Value::Self *)&v43, v2);
    Json::Value::Construct((int)(uintptr_t)(v45), &v43);
    v3 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v44, &gaia::k_szID);
    Json::Value::opAssign(v3, (const Json::Value::Self *)v45);
    Json::Value::Destroy((Json::Value::Self *)v45);
    g4_std::string::Destroy(&v43);
    Json::Value::Construct((int)(uintptr_t)(v46), &loc_6);
    v4 = *(int **)(a2 + 108);
    v37 = (void *)(((*(uint32_t *)(a2 + 116) - (int)(uintptr_t)(v4)) >> 2)
                 + ((*(uint32_t *)(a2 + 124) - *(uint32_t *)(a2 + 128)) >> 2)
                 + ((((*(uint32_t *)(a2 + 136) - *(uint32_t *)(a2 + 120)) >> 2) - 1) << 7));
    if ( v37 != nullptr )
    {
      v5 = 0;
      while ( 1 )
      {
        v30 = v5;
        Json::Value::Construct((Json::Value::Self *)v47, *v4);
        Json::Value::append((Json::Value::Self *)v46, (const Json::Value::Self *)v47);
        Json::Value::Destroy((Json::Value::Self *)v47);
        v6 = *(uint32_t *)(a2 + 108);
        if ( v6 == *(uint32_t *)(a2 + 116) - 4 )
        {
          opDelete(*(void **)(a2 + 112));
          v7 = (int *)(*(uint32_t *)(a2 + 120) + 4);
          *(uint32_t *)(a2 + 120) = (uint32_t)(uintptr_t)(v7);
          v8 = *v7;
          *(uint32_t *)(a2 + 112) = *v7;
          *(uint32_t *)(a2 + 108) = v8;
          *(uint32_t *)(a2 + 116) = v8 + 512;
          v5 = v30 + 1;
          if ( (void *)(v30 + 1) == v37 )
            break;
        }
        else
        {
          v5 = v30 + 1;
          *(uint32_t *)(a2 + 108) = v6 + 4;
          if ( (void *)(v30 + 1) == v37 )
            break;
        }
        v4 = *(int **)(a2 + 108);
      }
    }
    for ( i = 0; i < Json::Value::size((Json::Value::Self *)v46); ++i )
    {
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v46, i);
      v12 = Json::Value::asInt(v11);
      v13 = *(int **)(a2 + 124);
      if ( v13 == (int *)(*(uint32_t *)(a2 + 132) - 4) )
      {
        v38 = *(uint32_t *)(a2 + 104);
        v28 = *(char **)(a2 + 136);
        if ( v38 - ((int)(uintptr_t)(&v28[-*(uint32_t *)(a2 + 100)]) >> 2) <= 1 )
        {
          src = *(int **)(a2 + 120);
          v19 = (v28 - (char *)src) >> 2;
          v20 = v19 + 1;
          v21 = v19 + 2;
          v42 = v20;
          if ( v38 <= 2 * v21 )
          {
            v29 = 3;
            if ( v38 != 0 )
            {
              v29 = 2 * v38 + 2;
              if ( v29 > 0x3FFFFFFF )
                sub_18FFEE0(v21, v12);
            }
            v33 = v12;
            v36 = v21;
            v40 = opNew(4 * v29);
            v23 = v33;
            dest = (int *)(v40 + 4 * ((v29 - v36) >> 1));
            v24 = (*(uint32_t *)(a2 + 136) + 4 - *(uint32_t *)(a2 + 120)) >> 2;
            if ( v24 != 0 )
            {
              memmove(dest, *(const void **)(a2 + 120), 4 * v24);
              v23 = v33;
            }
            v34 = v23;
            opDelete(*(void **)(a2 + 100));
            *(uint32_t *)(a2 + 100) = v40;
            *(uint32_t *)(a2 + 104) = v29;
            v12 = v34;
          }
          else
          {
            dest = (int *)(*(uint32_t *)(a2 + 100) + 4 * ((v38 - v21) >> 1));
            if ( src <= dest )
            {
              v27 = (v28 + 4 - (char *)src) >> 2;
              if ( v27 != 0 )
              {
                v35 = v12;
                memmove(&dest[v20 - v27], src, 4 * v27);
                v12 = v35;
              }
            }
            else
            {
              v22 = (v28 + 4 - (char *)src) >> 2;
              if ( v22 != 0 )
              {
                v32 = v12;
                memmove(dest, src, 4 * v22);
                v12 = v32;
              }
            }
          }
          *(uint32_t *)(a2 + 120) = (uint32_t)(uintptr_t)(dest);
          v25 = *dest;
          *(uint32_t *)(a2 + 112) = *dest;
          *(uint32_t *)(a2 + 116) = v25 + 512;
          v28 = (char *)&dest[v42 - 1];
          *(uint32_t *)(a2 + 136) = (uint32_t)(uintptr_t)(v28);
          v26 = *(uint32_t *)v28;
          *(uint32_t *)(a2 + 128) = *(uint32_t *)v28;
          *(uint32_t *)(a2 + 132) = v26 + 512;
        }
        v31 = v12;
        *((uint32_t *)v28 + 1) = opNew(0x200u);
        v14 = *(int **)(a2 + 124);
        if ( v14 != nullptr )
          *v14 = v31;
        v15 = (int *)(*(uint32_t *)(a2 + 136) + 4);
        *(uint32_t *)(a2 + 136) = (uint32_t)(uintptr_t)(v15);
        v16 = *v15;
        *(uint32_t *)(a2 + 128) = *v15;
        *(uint32_t *)(a2 + 124) = v16;
        *(uint32_t *)(a2 + 132) = v16 + 512;
      }
      else
      {
        v10 = 0;
        if ( v13 != nullptr )
        {
          *v13 = v12;
          v10 = *(uint32_t *)(a2 + 124);
        }
        *(uint32_t *)(a2 + 124) = v10 + 4;
      }
    }
    v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v44, &gaia::k_szImpressions);
    Json::Value::opAssign(v17, (const Json::Value::Self *)v46);
    Json::Value::Construct(self, (const Json::Value::Self *)v44);
    Json::Value::Destroy((Json::Value::Self *)v46);
    Json::Value::Destroy((Json::Value::Self *)v44);
  }
  else
  {
    Json::Value::Construct((int)(uintptr_t)(self), nullptr);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::IsInPendingState  (binary VA: 0x14caf50)
// Original: gaia::CrmAction::IsInPendingState
// ----------------------------------------------------------------------------
int gaia::CrmAction::IsInPendingState(gaia::CrmAction::Self *self)
{
  return *((uint8_t *)self + 140);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Deserialize  (binary VA: 0x14caf60)
// Original: gaia::CrmAction::Deserialize
// ----------------------------------------------------------------------------
int gaia::CrmAction::Deserialize(gaia::CrmAction::Self *self, const Json::Value::Self *a2)
{
  Json::Value::Self *v2;
  int v3;
  int i;
  int *v5;
  bool v6;
  int v7;
  int v9;
  size_t n;
  int v11;
  uint8_t *v12;
  Json::Value::Self *v13;
  int v14;
  int *v15;
  int *v16;
  int *v17;
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
  typedef char *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef Json::Value::Self *_g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int *_g4_t_src;
  typedef int _g4_t_v43;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s2;
  typedef uint8_t _g4_t_v46[8];
  typedef uint8_t _g4_t_v47[36];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v33)) > _g4_s5 ? (16u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v34)) > _g4_s6 ? (16u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v35)) > _g4_s7 ? (20u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v36)) > _g4_s8 ? (24u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v37)) > _g4_s9 ? (24u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v38)) > _g4_s10 ? (28u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v39)) > _g4_s11 ? (28u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v40)) > _g4_s12 ? (28u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v41)) > _g4_s13 ? (32u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_src)) > _g4_s14 ? (36u + sizeof(_g4_t_src)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v43)) > _g4_s15 ? (44u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_s1)) > _g4_s16 ? (56u + sizeof(_g4_t_s1)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_s2)) > _g4_s17 ? (60u + sizeof(_g4_t_s2)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v46)) > _g4_s18 ? (64u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v47)) > _g4_s19 ? (72u + sizeof(_g4_t_v47)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 56u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);

  if ( Json::Value::type(a2) != 7 )
    return -33;
  v2 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szID);
  if ( !Json::Value::isNull(v2) && Json::Value::type(v2) == 4 && *(uint32_t *)(*((uint32_t *)self + 9) - 12) != 0 )
  {
    Json::Value::asString((Json::Value::Self *)&s2, (int)(uintptr_t)(v2));
    v9 = (int)(uintptr_t)(Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szCampaignID));
    Json::Value::asString((Json::Value::Self *)&s1, v9);
    v37 = *((Json::Value::Self **)s1 - 3);
    v38 = *((uint32_t *)s2 - 3);
    n = (size_t)v37;
    if ( v38 <= (unsigned int)(uintptr_t)(v37) )
      n = *((uint32_t *)s2 - 3);
    if ( memcmp(s1, s2, n) != 0 )
    {
      g4_std::string::Destroy(&s1);
      v7 = -33;
      g4_std::string::Destroy(&s2);
      return v7;
    }
    g4_std::string::Destroy(&s1);
    g4_std::string::Destroy(&s2);
    if ( v37 != (Json::Value::Self *)v38 )
      return -33;
  }
  v3 = *((uint32_t *)self + 31);
  for ( i = *((uint32_t *)self + 27); v3 != i; *((uint32_t *)self + 27) = i )
  {
    while ( i == *((uint32_t *)self + 29) - 4 )
    {
      opDelete(*((void **)self + 28));
      v3 = *((uint32_t *)self + 31);
      v5 = (int *)(*((uint32_t *)self + 30) + 4);
      *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(v5);
      i = *v5;
      v6 = v3 == *v5;
      *((uint32_t *)self + 28) = *v5;
      *((uint32_t *)self + 27) = i;
      *((uint32_t *)self + 29) = i + 512;
      if ( v6 )
        goto LABEL_8;
    }
    i += 4;
  }
LABEL_8:
  v7 = 0;
  v36 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szImpressions);
  if ( Json::Value::isNull(v36) || Json::Value::type(v36) != 6 )
    return v7;
  Json::Value::begin((Json::Value::Self *)v46, v36);
  while ( 1 )
  {
    Json::Value::end((Json::Value::Self *)v47, (int)(uintptr_t)(v36));
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase::Self *)v46, (const Json::ValueIteratorBase::Self *)v47) != 0 )
      break;
    v12 = (uint8_t *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v46);
    if ( Json::Value::isConvertibleTo(v12, 1) == 0 )
      return -33;
    v13 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v46);
    v14 = Json::Value::asInt(v13);
    v15 = *((int **)self + 31);
    if ( v15 == (int *)(*((uint32_t *)self + 33) - 4) )
    {
      v39 = *((uint32_t *)self + 26);
      v28 = *((char **)self + 34);
      if ( v39 - ((int)(uintptr_t)(&v28[-*((uint32_t *)self + 25)]) >> 2) <= 1 )
      {
        src = *((int **)self + 30);
        v19 = (v28 - (char *)src) >> 2;
        v20 = v19 + 1;
        v21 = v19 + 2;
        v43 = v20;
        if ( v39 <= 2 * v21 )
        {
          v29 = 3;
          if ( v39 != 0 )
          {
            v29 = 2 * v39 + 2;
            if ( v29 > 0x3FFFFFFF )
              sub_18FFEE0(v21, v14);
          }
          v31 = v14;
          v35 = v21;
          v41 = opNew(4 * v29);
          v25 = v31;
          v40 = (int *)(v41 + 4 * ((v29 - v35) >> 1));
          v26 = (*((uint32_t *)self + 34) + 4 - *((uint32_t *)self + 30)) >> 2;
          if ( v26 != 0 )
          {
            memmove(v40, *((const void **)self + 30), 4 * v26);
            v25 = v31;
          }
          v32 = v25;
          opDelete(*((void **)self + 25));
          *((uint32_t *)self + 25) = v41;
          *((uint32_t *)self + 26) = v29;
          v14 = v32;
        }
        else
        {
          v40 = (int *)(*((uint32_t *)self + 25) + 4 * ((v39 - v21) >> 1));
          if ( src <= v40 )
          {
            v27 = (v28 + 4 - (char *)src) >> 2;
            if ( v27 != 0 )
            {
              v33 = v14;
              memmove(&v40[v20 - v27], src, 4 * v27);
              v14 = v33;
            }
          }
          else
          {
            v22 = (v28 + 4 - (char *)src) >> 2;
            if ( v22 != 0 )
            {
              v34 = v14;
              memmove(v40, src, 4 * v22);
              v14 = v34;
            }
          }
        }
        *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(v40);
        v23 = *v40;
        *((uint32_t *)self + 28) = *v40;
        *((uint32_t *)self + 29) = v23 + 512;
        v28 = (char *)&v40[v43 - 1];
        *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(v28);
        v24 = *(uint32_t *)v28;
        *((uint32_t *)self + 32) = *(uint32_t *)v28;
        *((uint32_t *)self + 33) = v24 + 512;
      }
      v30 = v14;
      *((uint32_t *)v28 + 1) = opNew(0x200u);
      v16 = *((int **)self + 31);
      if ( v16 != nullptr )
        *v16 = v30;
      v17 = (int *)(*((uint32_t *)self + 34) + 4);
      *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(v17);
      v18 = *v17;
      *((uint32_t *)self + 32) = *v17;
      *((uint32_t *)self + 31) = v18;
      *((uint32_t *)self + 33) = v18 + 512;
    }
    else
    {
      v11 = 0;
      if ( v15 != nullptr )
      {
        *v15 = v14;
        v11 = *((uint32_t *)self + 31);
      }
      *((uint32_t *)self + 31) = v11 + 4;
    }
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)v46);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::ExtractTags  (binary VA: 0x14cb450)
// Original: gaia::CrmAction::ExtractTags
// ----------------------------------------------------------------------------
int gaia::CrmAction::ExtractTags(int a1, Json::Value::Self *a2, uint32_t *a3)
{
  int v4;
  void *v5;
  unsigned int v6;
  void *v7;
  void *v8;
  Json::Value::Self *v9;
  typedef Json::Value::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v10 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szTags);
  if ( Json::Value::isNull(v10) || Json::Value::type(v10) != 6 )
    return -34;
  v11 = Json::Value::size(v10);
  if ( v11 > 0 )
  {
    v4 = *(uint32_t *)(*a3 - 12);
    v5 = Json::Value::opIndex(v10, 0u);
    Json::Value::asString((Json::Value::Self *)&v12, (int)(uintptr_t)(v5));
    sub_1939B80(a3, v4 + v11 * (*(uint32_t *)(v12 - 12) + 1));
    v6 = 0;
    g4_std::string::Destroy(&v12);
    while ( 1 )
    {
      v7 = Json::Value::opIndex(v10, v6);
      Json::Value::asString((Json::Value::Self *)&v13, (int)(uintptr_t)(v7));
      g4_std::string::append_str(a3, &v13);
      v8 = (void *)(v13 - 12);
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      if ( v11 == ++v6 )
        break;
      if ( v6 != 0 )
        g4_std::string::append((int)(uintptr_t)(a3), (void *)"-", 1u);
    }
  }
  Json::Value::Construct((int)(uintptr_t)(v14), a3);
  v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a1 + 52), (char **)&gaia::k_szTags);
  Json::Value::opAssign(v9, (const Json::Value::Self *)v14);
  Json::Value::Destroy((Json::Value::Self *)v14);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Update  (binary VA: 0x14cb600)
// Original: gaia::CrmAction::Update
// ----------------------------------------------------------------------------
int gaia::CrmAction::Update(gaia::CrmAction::Self *self)
{
  Json::Value::Self *v2;
  Json::Value::Self *v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  typedef Json::Value::Self *_g4_t_v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_v14;
  typedef Json::Value::Self *_g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[28];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v13)) > _g4_s2 ? (4u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v14)) > _g4_s3 ? (4u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v16)) > _g4_s5 ? (12u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v17)) > _g4_s6 ? (12u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v18)) > _g4_s7 ? (12u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v19)) > _g4_s8 ? (12u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v20)) > _g4_s9 ? (12u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v21)) > _g4_s10 ? (12u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v22)) > _g4_s11 ? (12u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v23)) > _g4_s12 ? (12u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v24)) > _g4_s13 ? (12u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v25)) > _g4_s14 ? (12u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v26)) > _g4_s15 ? (12u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v27)) > _g4_s16 ? (16u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v28)) > _g4_s17 ? (32u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v29)) > _g4_s18 ? (48u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v30)) > _g4_s19 ? (64u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v31)) > _g4_s20 ? (80u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v32)) > _g4_s21 ? (96u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v33)) > _g4_s22 ? (112u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v34)) > _g4_s23 ? (128u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v35)) > _g4_s24 ? (144u + sizeof(_g4_t_v35)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v36)) > _g4_s25 ? (160u + sizeof(_g4_t_v36)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v37)) > _g4_s26 ? (176u + sizeof(_g4_t_v37)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v38)) > _g4_s27 ? (192u + sizeof(_g4_t_v38)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v39)) > _g4_s28 ? (208u + sizeof(_g4_t_v39)) : _g4_s28,
    _g4_s30 = (224u + sizeof(_g4_t_v40)) > _g4_s29 ? (224u + sizeof(_g4_t_v40)) : _g4_s29,
    _g4_s31 = (240u + sizeof(_g4_t_v41)) > _g4_s30 ? (240u + sizeof(_g4_t_v41)) : _g4_s30,
    _g4_s32 = (256u + sizeof(_g4_t_v42)) > _g4_s31 ? (256u + sizeof(_g4_t_v42)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 176u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 192u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 208u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 224u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 240u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 256u);

  if ( *((uint8_t *)self + 140) != 0 )
  {
    *((uint8_t *)self + 140) = 0;
    Json::Value::Construct((int)(uintptr_t)(v27), (uint32_t *)self + 10);
    v2 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szPointcutArguments);
    Json::Value::opAssign(v2, (const Json::Value::Self *)v27);
    Json::Value::Destroy((Json::Value::Self *)v27);
    switch ( *((uint32_t *)self + 7) )
    {
      case 6:
        v4 = (Json::Value::Self *)v28;
        v25 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v28, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v25)(self, 6, 1, v28);
        goto LABEL_7;
      case 7:
        v4 = (Json::Value::Self *)v29;
        v24 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v29, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v24)(self, 7, 1, v29);
        goto LABEL_7;
      case 8:
        v4 = (Json::Value::Self *)v30;
        v23 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v30, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v23)(self, 8, 1, v30);
        goto LABEL_7;
      case 9:
        v20 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v34, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v20)(self, 9, 1, v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((int)(uintptr_t)(v35), nullptr);
        Json::Value::Construct((Json::Value::Self *)v36, 51855);
        v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v35, &gaia::k_szType);
        Json::Value::opAssign(v5, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        Json::Value::Construct((int)(uintptr_t)(v37), (char *)&loc_6 + 1);
        v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v35, &gaia::k_szData);
        Json::Value::opAssign(v6, (const Json::Value::Self *)v37);
        Json::Value::Destroy((Json::Value::Self *)v37);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v35, &gaia::k_szData);
        v11 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szPointcutId);
        v7 = (Json::Value::Self *)Json::Value::opIndex(v21, &gaia::k_szPointcutId);
        Json::Value::opAssign(v7, v11);
        v12 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szItem);
        v8 = (Json::Value::Self *)Json::Value::opIndex(v21, &gaia::k_szRewardName);
        Json::Value::opAssign(v8, v12);
        v13 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szQuantity);
        v9 = (Json::Value::Self *)Json::Value::opIndex(v21, &gaia::k_szRewardAmount);
        Json::Value::opAssign(v9, v13);
        v14 = (Json::Value::Self *)Json::Value::opIndex(
                               (gaia::CrmAction::Self *)((char *)self + 52),
                               &gaia::k_szPointcutArguments);
        v10 = (Json::Value::Self *)Json::Value::opIndex(v21, &gaia::k_szPointcutArguments);
        Json::Value::opAssign(v10, v14);
        v22 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v38, (const Json::Value::Self *)v35);
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v22)(self, 12, 1, v38);
        Json::Value::Destroy((Json::Value::Self *)v38);
        Json::Value::Destroy((Json::Value::Self *)v35);
        break;
      case 0xA:
        v4 = (Json::Value::Self *)v39;
        v19 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v39, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v19)(self, 10, 1, v39);
        goto LABEL_7;
      case 0xB:
        v4 = (Json::Value::Self *)v40;
        v18 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v40, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v18)(self, 11, 1, v40);
        goto LABEL_7;
      case 0xC:
        v4 = (Json::Value::Self *)v41;
        v17 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v41, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v17)(self, 12, 1, v41);
        goto LABEL_7;
      case 0xD:
        v4 = (Json::Value::Self *)v31;
        v16 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v31, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v16)(self, 13, 1, v31);
        goto LABEL_7;
      case 0xE:
        v4 = (Json::Value::Self *)v32;
        v15 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v32, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v15)(self, 14, 1, v32);
        goto LABEL_7;
      case 0xF:
        v4 = (Json::Value::Self *)v33;
        v26 = *(Json::Value::Self **)(*(uint32_t *)self + 8);
        Json::Value::Construct((Json::Value::Self *)v33, (gaia::CrmAction::Self *)((char *)self + 52));
        ((void (*)(gaia::CrmAction::Self *, int, int, uint8_t *))v26)(self, 15, 1, v33);
LABEL_7:
        Json::Value::Destroy(v4);
        break;
      default:
        break;
    }
    g4_std_compat::string_assign((int)(uintptr_t)(self) + 40, &unk_1B15112, 0);
    Json::Value::Construct((Json::Value::Self *)v42, (const char *)&unk_1B15112);
    v3 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szPointcutId);
    Json::Value::opAssign(v3, (const Json::Value::Self *)v42);
    Json::Value::Destroy((Json::Value::Self *)v42);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Evaluate  (binary VA: 0x14cbb90)
// Original: gaia::CrmAction::Evaluate
// ----------------------------------------------------------------------------
bool gaia::CrmAction::Evaluate(int a1, const char **a2, int a3, const char **a4, Json::Value::Self *a5)
{
  int v5;
  Json::Value::Self *v6;
  size_t v8;
  size_t v9;
  size_t n;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void **v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  size_t v25;
  size_t v26;
  size_t v27;
  int v28;
  int v29;
  int v30;
  typedef int _g4_t_v31;
  typedef bool _g4_t_v32;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s2[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v31)) > _g4_s0 ? (8u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v32)) > _g4_s1 ? (15u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s1)) > _g4_s2 ? (16u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_s2)) > _g4_s3 ? (20u + sizeof(_g4_t_s2)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 15u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 16u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 20u);

  v5 = 0;
  v6 = (Json::Value::Self *)Json::Value::opIndex(a5, a2);
  if ( !Json::Value::isNull(v6) )
  {
    if ( Json::Value::type(v6) == 1 || Json::Value::type(v6) == 2 || Json::Value::type(v6) == 3 )
    {
      v13 = Json::Value::asInt(v6);
      v14 = 0;
      if ( *((uint32_t *)*a4 - 3) <= 9u )
      {
        v17 = s2;
        strcpy((char *)s2, *a4);
        v18 = (char)(uintptr_t)s2[0];
        v14 = 0;
        if ( (uint8_t)(LOBYTE(s2[0]) - 48) <= 9u )
        {
          do
          {
            v17 = (void **)((char *)v17 + 1);
            v14 = v18 + 10 * v14 - 48;
            v18 = *(uint8_t *)v17;
          }
          while ( (uint8_t)(*(uint8_t *)v17 - 48) <= 9u );
        }
      }
      v31 = v14;
      if ( g4_std::string::compare(a3, ">") != 0 )
      {
        v15 = g4_std::string::compare(a3, "==");
        v16 = v31;
        if ( v15 != 0 )
        {
          if ( g4_std::string::compare(a3, "<") != 0 )
          {
            v23 = g4_std::string::compare(a3, "!=");
            v5 = 0;
            v24 = v31;
            if ( v23 == 0 )
            {
              LOBYTE(v24) = v13 != v31;
              return v24;
            }
          }
          else
          {
            return v13 < v31;
          }
        }
        else
        {
          LOBYTE(v16) = v13 == v31;
          return v16;
        }
      }
      else
      {
        return v13 > v31;
      }
    }
    else if ( Json::Value::type(v6) == 5 )
    {
      LOBYTE(v19) = Json::Value::asBool(v6);
      v20 = v19;
      v32 = g4_std::string::compare((int)(uintptr_t)(a4), "true") == 0;
      if ( g4_std::string::compare(a3, "==") != 0 )
      {
        v22 = v32 ^ v20;
        if ( g4_std::string::compare(a3, "!=") == 0 )
          return v22;
      }
      else
      {
        LOBYTE(v21) = (uint8_t)v20 == v32;
        return v21;
      }
    }
    else if ( Json::Value::type(v6) == 4 )
    {
      Json::Value::asString((Json::Value::Self *)&s1, (int)(uintptr_t)(v6));
      g4_std::string::construct_copy(s2, a4);
      if ( g4_std::string::compare(a3, "==") != 0 )
      {
        if ( g4_std::string::compare(a3, "!=") == 0 )
        {
          v25 = *((uint32_t *)s2[0] - 3);
          v26 = *((uint32_t *)s1 - 3);
          v27 = v26;
          if ( v25 <= v26 )
            v27 = *((uint32_t *)s2[0] - 3);
          v28 = v26 - v25;
          v29 = memcmp(s1, s2[0], v27);
          if ( v29 == 0 )
            v29 = v28;
          LOBYTE(v30) = v29 != 0;
          v5 = v30;
        }
      }
      else
      {
        v8 = *((uint32_t *)s1 - 3);
        v9 = *((uint32_t *)s2[0] - 3);
        n = v8;
        if ( v9 <= v8 )
          n = *((uint32_t *)s2[0] - 3);
        v11 = v8 - v9;
        v12 = memcmp(s1, s2[0], n);
        if ( v12 == 0 )
          v12 = v11;
        LOBYTE(v12) = v12 == 0;
        v5 = v12;
      }
      g4_std::string::Destroy(s2);
      g4_std::string::Destroy(&s1);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::CheckMathConditions  (binary VA: 0x14cbee0)
// Original: gaia::CrmAction::CheckMathConditions
// ----------------------------------------------------------------------------
int gaia::CrmAction::CheckMathConditions(gaia::CrmAction::Self *self, const Json::Value::Self *a2, const Json::Value::Self *a3)
{
  unsigned int v3;
  Json::Value::Self *v4;
  void *v5;
  char *v6;
  void *v7;
  char *v8;
  char *v9;
  char *v10;
  bool v11;
  uint8_t v12;
  void *v13;
  void *v14;
  void *v15;
  typedef char *_g4_t_delim;
  typedef char *_g4_t_delima;
  typedef uint8_t _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef char *_g4_t_src;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_delim)) > _g4_s0 ? (8u + sizeof(_g4_t_delim)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_delima)) > _g4_s1 ? (8u + sizeof(_g4_t_delima)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v20)) > _g4_s3 ? (36u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_src)) > _g4_s5 ? (48u + sizeof(_g4_t_src)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v23)) > _g4_s6 ? (52u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v24)) > _g4_s7 ? (56u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_delim &delim = *reinterpret_cast<_g4_t_delim *>(_g4_sf + 8u);
  _g4_t_delima &delima = *reinterpret_cast<_g4_t_delima *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  v3 = 0;
  v19 = 1;
  while ( 1 )
  {
    if ( v3 >= Json::Value::size(a2) )
      return v19;
    v4 = (Json::Value::Self *)Json::Value::opIndex(a2, v3);
    if ( Json::Value::type(v4) != 4 )
      break;
    v5 = Json::Value::opIndex(a2, v3);
    Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v5));
    delim = v21;
    v6 = (char *)malloc(*((uint32_t *)v21 - 3) + 1);
    if ( delim - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)delim - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(delim - 12);
    }
    v7 = Json::Value::opIndex(a2, v3);
    Json::Value::asString((Json::Value::Self *)&src, (int)(uintptr_t)(v7));
    delima = src;
    strcpy(v6, src);
    if ( delima - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)delima - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(delima - 12);
    }
    v8 = strtok(v6, " ");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), v8, (int)(uintptr_t)(&v20));
    v9 = strtok(nullptr, " ");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), v9, (int)(uintptr_t)(&v20) + 1);
    v10 = strtok(nullptr, (const char *)&unk_1B15112);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), v10, (int)(uintptr_t)(&v20) + 2);
    v11 = gaia::CrmAction::Evaluate((int)(uintptr_t)(self), (const char **)&v23, (int)(uintptr_t)(&v24), (const char **)v25, (Json::Value::Self *)(a3));
    v12 = v19;
    if ( v19 != 0 )
      v12 = v11;
    v19 = v12;
    free(v6);
    v13 = (void *)(v25[0] - 12);
    if ( (uint32_t *)(v25[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    ++v3;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetActionType  (binary VA: 0x14cc1c0)
// Original: gaia::CrmAction::GetActionType
// ----------------------------------------------------------------------------
int gaia::CrmAction::GetActionType(gaia::CrmAction::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetTypeSpecificFields  (binary VA: 0x14cc1d0)
// Original: gaia::CrmAction::GetTypeSpecificFields
// ----------------------------------------------------------------------------
char * gaia::CrmAction::GetTypeSpecificFields(gaia::CrmAction::Self *self)
{
  return (char *)self + 52;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::TrySetCachedTimestamp  (binary VA: 0x14cc1e0)
// Original: gaia::CrmAction::TrySetCachedTimestamp
// ----------------------------------------------------------------------------
gaia::CrmAction::Self * gaia::CrmAction::TrySetCachedTimestamp(gaia::CrmAction::Self *self, unsigned int a2)
{
  gaia::CrmAction::Self *result;

  result = self;
  if ( *((uint32_t *)self + 36) < a2 )
    *((uint32_t *)self + 36) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetCurrentOrCachedTimestamp  (binary VA: 0x14cc200)
// Original: gaia::CrmAction::GetCurrentOrCachedTimestamp
// ----------------------------------------------------------------------------
__time_t gaia::CrmAction::GetCurrentOrCachedTimestamp(gaia::CrmAction::Self *self)
{
  __time_t result;

  result = *((uint32_t *)self + 36);
  if ( result == 0 )
    return gaia::CrmAction::GetUNIXSeconds();
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetPriority  (binary VA: 0x14cc230)
// Original: gaia::CrmAction::GetPriority
// ----------------------------------------------------------------------------
int gaia::CrmAction::GetPriority(gaia::CrmAction::Self *self)
{
  return *((uint32_t *)self + 38);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetFatigueGroup  (binary VA: 0x14cc240)
// Original: gaia::CrmAction::GetFatigueGroup
// ----------------------------------------------------------------------------
gaia::CrmAction::Self * gaia::CrmAction::GetFatigueGroup(gaia::CrmAction::Self *self, int a2)
{
  gaia::CrmAction::Self *result;
  int v3;

  result = self;
  *(uint32_t *)self = *(uint32_t *)(a2 + 160);
  v3 = *(uint32_t *)(a2 + 164);
  *((uint32_t *)self + 1) = v3;
  if ( v3 != 0 )
    ++*(uint32_t *)(v3 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::GetFatigueGroupName  (binary VA: 0x14cc270)
// Original: gaia::CrmAction::GetFatigueGroupName
// ----------------------------------------------------------------------------
char * gaia::CrmAction::GetFatigueGroupName(gaia::CrmAction::Self *self)
{
  return (char *)self + 156;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::SetFatigueGroup  (binary VA: 0x14cdc20)
// Original: gaia::CrmAction::SetFatigueGroup
// ----------------------------------------------------------------------------
int gaia::CrmAction::SetFatigueGroup(uint32_t *a1, int a2)
{
  gaia::CrmFatigueGroup::Self *v2;
  int v3;
  uint32_t *s1;
  uint32_t *s2;
  int v7;
  gaia::CrmFatigueGroup::Self *v8;
  uint32_t *v9;
  bool v10;

  v2 = *(gaia::CrmFatigueGroup::Self **)a2;
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::CrmFati"
      "gueGroup, typename boost::detail::sp_member_access<T>::type = gaia::CrmFatigueGroup*]",
      "px != 0");
    v2 = *(gaia::CrmFatigueGroup::Self **)a2;
  }
  v3 = 0;
  s1 = *(uint32_t **)gaia::CrmFatigueGroup::GetName(v2);
  s2 = (uint32_t *)a1[39];
  if ( *(s1 - 3) == *(s2 - 3) && memcmp(s1, s2, *(s1 - 3)) == 0 )
  {
    v7 = *(uint32_t *)(a2 + 4);
    v8 = *(gaia::CrmFatigueGroup::Self **)a2;
    if ( v7 != 0 )
      ++*(uint32_t *)(v7 + 4);
    v9 = (uint32_t *)a1[41];
    a1[40] = (uint32_t)(uintptr_t)(v8);
    a1[41] = v7;
    v3 = 1;
    if ( v9 != nullptr )
    {
      v10 = v9[1]-- == 1;
      if ( v10 )
      {
        G4_VCALL<void>(v9, 8);
        v10 = v9[2]-- == 1;
        if ( v10 )
          G4_VCALL<void>(v9, 12);
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::ExtractTypeSpecificFields  (binary VA: 0x14d6f40)
// Original: gaia::CrmAction::ExtractTypeSpecificFields
// ----------------------------------------------------------------------------
int gaia::CrmAction::ExtractTypeSpecificFields(gaia::CrmAction::Self *self, const Json::Value::Self *a2)
{
  uint32_t *s1;
  Json::Value::Self *v3;
  size_t n;
  int v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  int v8;
  int result;
  size_t v10;
  size_t v11;
  size_t v12;
  char **v13;
  char *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  unsigned int v19;
  Json::Value::Self *v20;
  size_t v21;
  size_t v22;
  size_t v23;
  size_t v24;
  size_t v25;
  typedef char *_g4_t_s2;
  typedef Json::Value::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef Json::Value::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef Json::Value::Self *_g4_t_v37;
  typedef Json::Value::Self *_g4_t_v38;
  typedef Json::Value::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[4];
  typedef uint8_t _g4_t_v44[16];
  typedef char _g4_t_v45;
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef char _g4_t_v48;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_s2)) > _g4_s0 ? (4u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v27)) > _g4_s1 ? (20u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v28)) > _g4_s2 ? (20u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v33)) > _g4_s7 ? (20u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v34)) > _g4_s8 ? (20u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v35)) > _g4_s9 ? (20u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v36)) > _g4_s10 ? (20u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v37)) > _g4_s11 ? (24u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v38)) > _g4_s12 ? (24u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v39)) > _g4_s13 ? (24u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (47u + sizeof(_g4_t_v40)) > _g4_s14 ? (47u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v41)) > _g4_s15 ? (52u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v42)) > _g4_s16 ? (56u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v43)) > _g4_s17 ? (60u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v44)) > _g4_s18 ? (64u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v45)) > _g4_s19 ? (80u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v46)) > _g4_s20 ? (96u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v47)) > _g4_s21 ? (112u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v48)) > _g4_s22 ? (128u + sizeof(_g4_t_v48)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 47u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);

  if ( gaia::ExtractMandatoryField_string_5d9116(a2, 4, (int)(uintptr_t)(&gaia::k_szType), (int)(uintptr_t)(self) + 32) == -34 )
  {
    return -34;
  }
  else
  {
    s1 = *((uint32_t **)self + 8);
    v3 = (Json::Value::Self *)*(s1 - 3);
    n = (size_t)v3;
    v27 = *((Json::Value::Self **)gaia::k_szPopup - 3);
    if ( v27 <= v3 )
      n = *((uint32_t *)gaia::k_szPopup - 3);
    v5 = memcmp(*((const void **)self + 8), gaia::k_szPopup, n);
    if ( v5 != 0 || v3 != v27 )
    {
      v10 = (size_t)v3;
      v28 = *((Json::Value::Self **)gaia::k_szAdNonGamePopups - 3);
      if ( v28 <= v3 )
        v10 = *((uint32_t *)gaia::k_szAdNonGamePopups - 3);
      v5 = memcmp(s1, gaia::k_szAdNonGamePopups, v10);
      if ( v5 != 0 || v3 != v28 )
      {
        v11 = (size_t)v3;
        v29 = *((Json::Value::Self **)gaia::k_szAd3rdParty - 3);
        if ( v29 <= v3 )
          v11 = *((uint32_t *)gaia::k_szAd3rdParty - 3);
        v5 = memcmp(s1, gaia::k_szAd3rdParty, v11);
        if ( v5 != 0 || v3 != v29 )
        {
          v12 = (size_t)v3;
          v30 = *((Json::Value::Self **)gaia::k_szGiveObject - 3);
          if ( v30 <= v3 )
            v12 = *((uint32_t *)gaia::k_szGiveObject - 3);
          v5 = memcmp(s1, gaia::k_szGiveObject, v12);
          if ( v5 != 0 || v3 != v30 )
          {
            v21 = (size_t)v3;
            v32 = *((Json::Value::Self **)gaia::k_szLaunchUrl - 3);
            if ( v32 <= v3 )
              v21 = *((uint32_t *)gaia::k_szLaunchUrl - 3);
            v5 = memcmp(s1, gaia::k_szLaunchUrl, v21);
            if ( v5 != 0 || v3 != v32 )
            {
              v22 = (size_t)v3;
              v33 = *((Json::Value::Self **)gaia::k_szLaunchStore - 3);
              if ( v33 <= v3 )
                v22 = *((uint32_t *)gaia::k_szLaunchStore - 3);
              v5 = memcmp(s1, gaia::k_szLaunchStore, v22);
              if ( v5 != 0 || v3 != v33 )
              {
                v23 = (size_t)v3;
                v34 = *((Json::Value::Self **)gaia::k_szLogEvent - 3);
                if ( v34 <= v3 )
                  v23 = *((uint32_t *)gaia::k_szLogEvent - 3);
                v5 = memcmp(s1, gaia::k_szLogEvent, v23);
                if ( v5 != 0 || v3 != v34 )
                {
                  v24 = (size_t)v3;
                  v35 = *((Json::Value::Self **)gaia::k_szGLAdsBanner - 3);
                  if ( v35 <= v3 )
                    v24 = *((uint32_t *)gaia::k_szGLAdsBanner - 3);
                  v5 = memcmp(s1, gaia::k_szGLAdsBanner, v24);
                  if ( v5 != 0 || v3 != v35 )
                  {
                    v25 = (size_t)v3;
                    v36 = *((Json::Value::Self **)gaia::k_szGLAdsInterstitial - 3);
                    if ( v36 <= v3 )
                      v25 = *((uint32_t *)gaia::k_szGLAdsInterstitial - 3);
                    v5 = memcmp(s1, gaia::k_szGLAdsInterstitial, v25);
                    if ( v5 != 0 || v3 != v36 )
                    {
                      if ( g4_std::string::compare_str((char *)self + 32, &gaia::k_szGLAdsButton) != 0 )
                      {
                        v5 = *((uint32_t *)self + 7);
                      }
                      else
                      {
                        *((uint32_t *)self + 7) = 15;
                        v5 = 15;
                      }
                    }
                    else
                    {
                      *((uint32_t *)self + 7) = 14;
                      LOBYTE(v5) = 14;
                    }
                  }
                  else
                  {
                    *((uint32_t *)self + 7) = 13;
                    LOBYTE(v5) = 13;
                  }
                }
                else
                {
                  *((uint32_t *)self + 7) = 12;
                  LOBYTE(v5) = 12;
                }
              }
              else
              {
                *((uint32_t *)self + 7) = 11;
                LOBYTE(v5) = 11;
              }
            }
            else
            {
              *((uint32_t *)self + 7) = 10;
              LOBYTE(v5) = 10;
            }
          }
          else
          {
            *((uint32_t *)self + 7) = 9;
            LOBYTE(v5) = 9;
          }
        }
        else
        {
          *((uint32_t *)self + 7) = 8;
          LOBYTE(v5) = 8;
        }
      }
      else
      {
        *((uint32_t *)self + 7) = 7;
        LOBYTE(v5) = 7;
      }
    }
    else
    {
      *((uint32_t *)self + 7) = 6;
      LOBYTE(v5) = 6;
    }
    v6 = (Json::Value::Self *)((gaia::CrmAction::Self *)((char *)self + 52));
    Json::Value::Construct((Json::Value::Self *)v44, v5);
    v7 = (Json::Value::Self *)Json::Value::opIndex(
                          (gaia::CrmAction::Self *)((char *)self + 52),
                          (char **)&gaia::k_szCrmActionType);
    Json::Value::opAssign(v7, (const Json::Value::Self *)v44);
    Json::Value::Destroy((Json::Value::Self *)v44);
    switch ( *((uint32_t *)self + 7) )
    {
      case 6:
        v13 = (char **)&gaia::k_szPopupId;
        v37 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPopupId);
        v8 = -34;
        if ( Json::Value::isNull(v37) || Json::Value::type(v37) != 4 )
          return v8;
        v14 = (char *)&v40 + 1;
        Json::Value::asString((Json::Value::Self *)((char *)&v40 + 1), (int)(uintptr_t)(v37));
        s2 = (char *)&v40 + 1;
        v15 = (Json::Value::Self *)&v45;
        goto LABEL_36;
      case 7:
        g4_std::string::construct_copy(&v41, &gaia::k_szTags_);
        goto LABEL_27;
      case 8:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v40));
        goto LABEL_27;
      case 9:
        v8 = -34;
        v17 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szItem);
        if ( !Json::Value::isNull(v17) && Json::Value::type(v17) == 4 )
        {
          Json::Value::asString((Json::Value::Self *)&v42, (int)(uintptr_t)(v17));
          Json::Value::Construct((int)(uintptr_t)(v46), &v42);
          v18 = (Json::Value::Self *)Json::Value::opIndex(v6, &gaia::k_szItem);
          Json::Value::opAssign(v18, (const Json::Value::Self *)v46);
          Json::Value::Destroy((Json::Value::Self *)v46);
          g4_std::string::Destroy(&v42);
          v39 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&gaia::k_szQuantity);
          if ( !Json::Value::isNull(v39) && Json::Value::isConvertibleTo(v39, 1) != 0 )
          {
            v19 = Json::Value::asUInt(v39);
            Json::Value::Construct((Json::Value::Self *)v47, v19);
            v20 = (Json::Value::Self *)Json::Value::opIndex(v6, &gaia::k_szQuantity);
            Json::Value::opAssign(v20, (const Json::Value::Self *)v47);
            v8 = 0;
            Json::Value::Destroy((Json::Value::Self *)v47);
          }
        }
        return v8;
      case 0xA:
        v13 = (char **)&gaia::k_szUrl;
        v38 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szUrl);
        v8 = -34;
        if ( Json::Value::isNull(v38) || Json::Value::type(v38) != 4 )
          return v8;
        v14 = (char *)(v43);
        Json::Value::asString((Json::Value::Self *)v43, (int)(uintptr_t)(v38));
        s2 = (char *)(v43);
        v15 = (Json::Value::Self *)&v48;
LABEL_36:
        v31 = v15;
        Json::Value::Construct((int)(uintptr_t)(v15), s2);
        v16 = (Json::Value::Self *)Json::Value::opIndex(v6, v13);
        Json::Value::opAssign(v16, v31);
        Json::Value::Destroy(v31);
        g4_std::string::Destroy(v14);
        goto LABEL_29;
      case 0xD:
      case 0xE:
      case 0xF:
        v41 = (int)(uintptr_t)(&dword_213B814);
LABEL_27:
        if ( gaia::CrmAction::ExtractTags((int)(uintptr_t)(self), a2, &v41) == -34 )
        {
          g4_std::string::Destroy(&v41);
          return -34;
        }
        g4_std::string::Destroy(&v41);
LABEL_29:
        result = 0;
        break;
      default:
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::CheckTriggerConditions  (binary VA: 0x14d7580)
// Original: gaia::CrmAction::CheckTriggerConditions
// ----------------------------------------------------------------------------
int gaia::CrmAction::CheckTriggerConditions(gaia::CrmAction::Self *a1, int a2, Json::Value::Self *a3)
{
  unsigned int v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  size_t n;
  Json::Value::Self *v7;
  int v8;
  unsigned int v10;
  void *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  typedef Json::Value::Self *_g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s1;
  typedef uint8_t _g4_t_v22[4];
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v17)) > _g4_s2 ? (0u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v18)) > _g4_s3 ? (4u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v19)) > _g4_s4 ? (4u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_s2)) > _g4_s5 ? (24u + sizeof(_g4_t_s2)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_s1)) > _g4_s6 ? (28u + sizeof(_g4_t_s1)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v25)) > _g4_s10 ? (44u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v26)) > _g4_s11 ? (48u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v27)) > _g4_s12 ? (64u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v28)) > _g4_s13 ? (80u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 24u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);

  v3 = 0;
  g4_std::string::construct_copy(&s2, a2);
  v4 = (Json::Value::Self *)((gaia::CrmAction::Self *)((char *)a1 + 68));
  while ( 1 )
  {
    if ( v3 >= Json::Value::size(v4) )
    {
      v8 = -35;
      goto LABEL_15;
    }
    v5 = (Json::Value::Self *)Json::Value::opIndex(v4, v3);
    v15 = (Json::Value::Self *)Json::Value::opIndex(v5, &gaia::k_szName);
    if ( !Json::Value::isNull(v15) && Json::Value::type(v15) == 4 )
    {
      Json::Value::asString((Json::Value::Self *)&s1, (int)(uintptr_t)(v15));
      v16 = *((Json::Value::Self **)s1 - 3);
      v18 = *((uint32_t *)s2 - 3);
      n = (size_t)v16;
      if ( v18 <= (unsigned int)(uintptr_t)(v16) )
        n = *((uint32_t *)s2 - 3);
      if ( memcmp(s1, s2, n) != 0 || v16 != (Json::Value::Self *)v18 )
      {
        g4_std::string::Destroy(&s1);
        goto LABEL_2;
      }
      g4_std::string::Destroy(&s1);
      v19 = (Json::Value::Self *)Json::Value::opIndex(v5, &gaia::k_szConditions);
      if ( Json::Value::isNull(v19) || Json::Value::type(v19) != 6 || Json::Value::size(v19) == 0 )
      {
        g4_std_compat::string_assign((int)(uintptr_t)(a1) + 40, "NA", 2u);
        goto LABEL_12;
      }
      if ( (uint8_t)gaia::CrmAction::CheckMathConditions(a1, v19, a3) != 0 )
        break;
    }
LABEL_2:
    ++v3;
  }
  v17 = (Json::Value::Self *)((gaia::CrmAction::Self *)((char *)a1 + 40));
  v10 = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(a1) + 40, &unk_1B15112, 0);
  while ( v10 < Json::Value::size(v19) )
  {
    if ( v10 != 0 )
      g4_std::string::append((int)(uintptr_t)(v17), ", ", 2u);
    v11 = Json::Value::opIndex(v19, v10++);
    Json::Value::asString((Json::Value::Self *)v22, (int)(uintptr_t)(v11));
    g4_std::string::append_str(v17, v22);
    g4_std::string::Destroy(v22);
  }
LABEL_12:
  v24 = -1;
  v25 = -1;
  v23 = (int)(uintptr_t)(&dword_213B814);
  v7 = (Json::Value::Self *)Json::Value::opIndex(v5, &gaia::k_szPointcutArgs);
  if ( !Json::Value::isNull(v7) && Json::Value::type(v7) == 7 )
  {
    gaia::ExtractOptionalField_string_601e68(v7, 4, (int)(uintptr_t)(&gaia::k_szPopupAdsLocation), (int)(uintptr_t)(&v23));
    Json::Value::Construct((int)(uintptr_t)(v26), &v23);
    v12 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)a1 + 52), &gaia::k_szPopupAdsLocation);
    Json::Value::opAssign(v12, (const Json::Value::Self *)v26);
    Json::Value::Destroy((Json::Value::Self *)v26);
    gaia::ExtractOptionalField_int_id_85ac4a(v7, 1, (int)(uintptr_t)(&gaia::k_displayTime), (int)(uintptr_t)(&v24));
    Json::Value::Construct((Json::Value::Self *)v27, v24);
    v13 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)a1 + 52), &gaia::k_displayTime);
    Json::Value::opAssign(v13, (const Json::Value::Self *)v27);
    Json::Value::Destroy((Json::Value::Self *)v27);
    gaia::ExtractOptionalField_int_id_85ac4a(v7, 1, (int)(uintptr_t)(&gaia::k_cooldown), (int)(uintptr_t)(&v25));
    Json::Value::Construct((Json::Value::Self *)v28, v25);
    v14 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)a1 + 52), &gaia::k_cooldown);
    Json::Value::opAssign(v14, (const Json::Value::Self *)v28);
    Json::Value::Destroy((Json::Value::Self *)v28);
  }
  v8 = 0;
  g4_std::string::Destroy(&v23);
LABEL_15:
  g4_std::string::Destroy(&s2);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::CheckIfActionIsAvailable  (binary VA: 0x14d8aa0)
// Original: gaia::CrmAction::CheckIfActionIsAvailable
// ----------------------------------------------------------------------------
int gaia::CrmAction::CheckIfActionIsAvailable(gaia::CrmAction::Self *self)
{
  Json::Value::Self *v1;
  Json::Value::Self *v2;
  typedef uint8_t _g4_t_IsPopupAvailable;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (15u + sizeof(_g4_t_IsPopupAvailable)) > _g4_s0 ? (15u + sizeof(_g4_t_IsPopupAvailable)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v8)) > _g4_s4 ? (48u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v9)) > _g4_s5 ? (64u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v10)) > _g4_s6 ? (80u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_IsPopupAvailable &IsPopupAvailable = *reinterpret_cast<_g4_t_IsPopupAvailable *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 64u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 80u);

  Json::Value::Construct((int)(uintptr_t)(v7), nullptr);
  Json::Value::Construct((int)(uintptr_t)(v8), &gaia::k_szTrue);
  v1 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v7, &gaia::k_szCheckingOfflineValue);
  Json::Value::opAssign(v1, (const Json::Value::Self *)v8);
  Json::Value::Destroy((Json::Value::Self *)v8);
  g4_std::string::construct_copy(&v5, &gaia::k_szCheckingOfflineValue);
  gaia::CrmManager::LogEventViaGLOT(*((uint32_t *)self + 21), (Json::Value::Self *)v7, (char **)&v5);
  g4_std::string::Destroy(&v5);
  if ( *((uint8_t *)self + 148) != 0
    || (IsPopupAvailable = 0, (uint8_t)gaia::CrmManager::GetOnlineStatus(*((gaia::CrmManager::Self **)self + 21)) != 0) )
  {
    Json::Value::Construct((int)(uintptr_t)(v9), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v10), &gaia::k_szTrue);
    v2 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v9, &gaia::k_szCheckingIsPopupAvailable);
    Json::Value::opAssign(v2, (const Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    g4_std::string::construct_copy(&v6, &gaia::k_szCheckingIsPopupAvailable);
    gaia::CrmManager::LogEventViaGLOT(*((uint32_t *)self + 21), (Json::Value::Self *)v9, &v6);
    g4_std::string::Destroy(&v6);
    if ( *((uint32_t *)self + 7) == 6 )
      IsPopupAvailable = gaia::CrmManager::IsPopupAvailable(
                           *((gaia::CrmManager::Self **)self + 21),
                           (gaia::CrmAction::Self *)((char *)self + 52));
    else
      IsPopupAvailable = 1;
    Json::Value::Destroy((Json::Value::Self *)v9);
  }
  Json::Value::Destroy((Json::Value::Self *)v7);
  return IsPopupAvailable;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::ExtractLimitData  (binary VA: 0x14dbe30)
// Original: gaia::CrmAction::ExtractLimitData
// ----------------------------------------------------------------------------
int gaia::CrmAction::ExtractLimitData(gaia::CrmAction::Self *self, const Json::Value::Self *a2)
{
  Json::Value::Self *v3;
  Json::Value::Self *v4;
  int *v5;
  int v6;
  int v7;
  typedef Json::Value::Self *_g4_t_v8;
  typedef Json::Value::Self *_g4_t_v9;
  typedef Json::Value::Self *_g4_t_v10;
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[8];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v9 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szLimit);
  if ( !Json::Value::isNull(v9) && Json::Value::type(v9) == 6 )
  {
    Json::Value::begin((Json::Value::Self *)v11, v9);
    while ( 1 )
    {
      Json::Value::end((Json::Value::Self *)v12, (int)(uintptr_t)(v9));
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase::Self *)v11, (const Json::ValueIteratorBase::Self *)v12) != 0 )
        break;
      v3 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v11);
      v8 = (Json::Value::Self *)Json::Value::opIndex(v3, &gaia::k_szMax);
      v4 = (Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v11);
      v10 = (Json::Value::Self *)Json::Value::opIndex(v4, &gaia::k_szInterval);
      if ( Json::Value::isNull(v8)
        || Json::Value::isConvertibleTo(v8, 1) == 0
        || Json::Value::isNull(v10)
        || Json::Value::isConvertibleTo(v10, 1) == 0 )
      {
        return -34;
      }
      v14 = Json::Value::asInt(v10);
      v13 = Json::Value::asInt(v8);
      v5 = *((int **)self + 23);
      if ( v5 == *((int **)self + 24) )
      {
        g4_std::vector_gaia_CrmImpressionLimit_bdda80::M_insert_aux((int)(uintptr_t)(self) + 88, *((void **)self + 23), (int)(uintptr_t)(&v13));
      }
      else
      {
        v6 = 0;
        if ( v5 != nullptr )
        {
          v7 = v13;
          v5[1] = v14;
          *v5 = v7;
          v6 = *((uint32_t *)self + 23);
        }
        *((uint32_t *)self + 23) = v6 + 8;
      }
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)v11);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::ExtractTypeIndependentFields  (binary VA: 0x14dbff0)
// Original: gaia::CrmAction::ExtractTypeIndependentFields
// ----------------------------------------------------------------------------
int gaia::CrmAction::ExtractTypeIndependentFields(gaia::CrmAction::Self *self, const Json::Value::Self *a2)
{
  int v2;
  Json::Value::Self *v3;
  const Json::Value::Self *v4;
  Json::Value::Self *v6;
  char v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  typedef Json::Value::Self *_g4_t_v10;
  typedef Json::Value::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint8_t _g4_t_v13[16];
  typedef uint8_t _g4_t_v14[16];
  typedef uint8_t _g4_t_v15[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);

  v2 = -34;
  if ( gaia::ExtractMandatoryField_string_5d9116(a2, 4, (int)(uintptr_t)(&gaia::k_szID), (int)(uintptr_t)(self) + 36) != -34 )
  {
    Json::Value::Construct((int)(uintptr_t)(v12), (uint32_t *)self + 9);
    v3 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szCampaignID);
    Json::Value::opAssign(v3, (const Json::Value::Self *)v12);
    Json::Value::Destroy((Json::Value::Self *)v12);
    if ( (uint8_t)gaia::ExtractOptionalField_int_id_85ac4a(a2, 1, (int)(uintptr_t)(&gaia::k_szPriority), (int)(uintptr_t)(self) + 152) != 0 )
    {
      Json::Value::Construct((Json::Value::Self *)v13, *((uint32_t *)self + 38));
      v9 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), (char **)&gaia::k_szPriority);
      Json::Value::opAssign(v9, (const Json::Value::Self *)v13);
      Json::Value::Destroy((Json::Value::Self *)v13);
    }
    v10 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szOffline);
    if ( !Json::Value::isNull(v10) && Json::Value::isConvertibleTo(v10, 5) != 0 )
    {
      v7 = Json::Value::asBool(v10);
      *((uint8_t *)self + 148) = v7;
      Json::Value::Construct((Json::Value::Self *)v14, v7);
      v8 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), (char **)&gaia::k_szOffline);
      Json::Value::opAssign(v8, (const Json::Value::Self *)v14);
      Json::Value::Destroy((Json::Value::Self *)v14);
    }
    if ( (uint8_t)gaia::ExtractOptionalField_string_601e68(a2, 4, (int)(uintptr_t)(&gaia::k_szFatigueGroup), (int)(uintptr_t)(self) + 156) != 0 )
    {
      Json::Value::Construct((int)(uintptr_t)(v15), (uint32_t *)self + 39);
      v6 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)self + 52), &gaia::k_szFatigueGroup);
      Json::Value::opAssign(v6, (const Json::Value::Self *)v15);
      Json::Value::Destroy((Json::Value::Self *)v15);
    }
    v2 = -34;
    if ( gaia::CrmAction::ExtractLimitData(self, a2) != -34 )
    {
      v11 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szFrequency);
      if ( !Json::Value::isNull(v11) )
      {
        if ( Json::Value::type(v11) == 3 )
        {
          *(double *)((char *)self + 44) = Json::Value::asDouble(v11);
        }
        else if ( Json::Value::isConvertibleTo(v11, 1) != 0 )
        {
          *(double *)((char *)self + 44) = (double)Json::Value::asInt(v11);
        }
        v2 = 0;
        v4 = (const Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szPointcuts);
        if ( !Json::Value::isNull(v4) && Json::Value::type(v4) == 6 )
          Json::Value::opAssign((gaia::CrmAction::Self *)((char *)self + 68), v4);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Initialize  (binary VA: 0x14dc320)
// Original: gaia::CrmAction::Initialize
// ----------------------------------------------------------------------------
int gaia::CrmAction::Initialize(gaia::CrmAction::Self *self, const Json::Value::Self *a2)
{
  int v2;

  v2 = -34;
  if ( gaia::CrmAction::ExtractTypeIndependentFields(self, a2) != -34
    && gaia::CrmAction::ExtractTypeSpecificFields(self, a2) != -34 )
  {
    return 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Destroy  (binary VA: 0x14e1c80)
// Original: gaia::CrmAction::~CrmAction
// ----------------------------------------------------------------------------
void gaia::CrmAction::Destroy(gaia::CrmAction::Self *self)
{
  uint32_t *v1;
  bool v2;
  void *v3;
  void **v4;
  unsigned int v5;
  void *v6;

  v1 = *((uint32_t **)self + 41);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E20);
  if ( v1 != nullptr )
  {
    v2 = v1[1]-- == 1;
    if ( v2 )
    {
      G4_VCALL<void>(v1, 8);
      v2 = v1[2]-- == 1;
      if ( v2 )
        G4_VCALL<void>(v1, 12);
    }
  }
  g4_std::string::Destroy((char *)self + 156);
  v3 = *((void **)self + 25);
  if ( v3 != nullptr )
  {
    v4 = *((void ***)self + 30);
    v5 = *((uint32_t *)self + 34) + 4;
    if ( v5 > (unsigned int)(uintptr_t)(v4) )
    {
      do
      {
        v6 = *v4++;
        opDelete(v6);
      }
      while ( v5 > (unsigned int)(uintptr_t)(v4) );
      v3 = *((void **)self + 25);
    }
    opDelete(v3);
  }
  if ( *((uint32_t *)self + 22) != 0 )
    opDelete(*((void **)self + 22));
  Json::Value::Destroy((gaia::CrmAction::Self *)((char *)self + 68));
  Json::Value::Destroy((gaia::CrmAction::Self *)((char *)self + 52));
  g4_std::string::Destroy((char *)self + 40);
  g4_std::string::Destroy((char *)self + 36);
  g4_std::string::Destroy((char *)self + 32);
  gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Destroy_ea14e1d90  (binary VA: 0x14e1d90)
// Original: gaia::CrmAction::~CrmAction
// ----------------------------------------------------------------------------
void gaia::CrmAction::Destroy_ea14e1d90(gaia::CrmAction::Self *self)
{
  gaia::CrmAction::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Construct  (binary VA: 0x14e1fe0)
// Original: gaia::CrmAction::CrmAction
// ----------------------------------------------------------------------------
gaia::CrmAction::Self * gaia::CrmAction::Construct(gaia::CrmAction::Self *self, gaia::CrmManager::Self *a2)
{
  gaia::CrmAction::Self *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  void *v12;
  void **v13;
  unsigned int v14;
  void *v15;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef void *_g4_t_v19[2];
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v19)) > _g4_s2 ? (24u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v21)) > _g4_s4 ? (36u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v23)) > _g4_s6 ? (44u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v24)) > _g4_s7 ? (48u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v25)) > _g4_s8 ? (52u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v26)) > _g4_s9 ? (56u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v27)) > _g4_s10 ? (60u + sizeof(_g4_t_v27)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);

  v2 = self;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E20);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  Json::Value::Construct((int)(uintptr_t)(self) + 52, nullptr);
  Json::Value::Construct((int)(uintptr_t)(self) + 68, nullptr);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  v19[0] = nullptr;
  v19[1] = nullptr;
  v20 = nullptr;
  v21 = 0;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  g4_std::Deque_base_unsigned_int_f0086f::M_initialize_map((std::_Deque_base<unsigned int> *)v19, 0);
  v3 = (int)(v27 - v23) >> 2;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  v4 = v3 - 1;
  v5 = v24 - v25;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  g4_std::Deque_base_unsigned_int_f0086f::M_initialize_map(
    (gaia::CrmAction::Self *)((char *)self + 100),
    (v5 >> 2) + (v4 << 7) + v22 - v20);
  v6 = v22;
  v17 = *((uint32_t *)self + 30);
  v18 = v23;
  v7 = v20;
  v8 = *((uint32_t **)self + 27);
  v9 = *((uint32_t **)self + 29);
  v10 = ((((int)(v27 - v23) >> 2) - 1) << 7) + ((v24 - v25) >> 2) + v22 - v20;
  if ( v10 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *v7++;
        *v8 = v11;
        if ( v7 == v6 )
        {
          v7 = *(int **)(v18 + 4);
          v18 += 4;
          v6 = v7 + 128;
        }
        if ( ++v8 == v9 )
          break;
        if ( --v10 == 0 )
          goto LABEL_8;
      }
      v8 = *(uint32_t **)(v17 + 4);
      --v10;
      v17 += 4;
      v9 = v8 + 128;
    }
    while ( v10 != 0 );
LABEL_8:
    v2 = self;
  }
  v12 = v19[0];
  if ( v19[0] != nullptr )
  {
    v13 = (void **)v23;
    v14 = v27 + 4;
    if ( v27 + 4 > v23 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v19[0];
    }
    opDelete(v12);
  }
  *((uint8_t *)v2 + 140) = 0;
  *((uint32_t *)v2 + 36) = 0;
  *((uint8_t *)v2 + 148) = 1;
  *((uint32_t *)v2 + 38) = 0;
  *((uint32_t *)v2 + 40) = 0;
  *((uint32_t *)v2 + 41) = 0;
  *((uint32_t *)v2 + 39) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (gaia::CrmAction::Self *)&dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::CheckCooldowns  (binary VA: 0x14e2350)
// Original: gaia::CrmAction::CheckCooldowns
// ----------------------------------------------------------------------------
int gaia::CrmAction::CheckCooldowns(gaia::CrmAction::Self *self)
{
  gaia::CrmAction::Self *v1;
  int **v2;
  int *v3;
  int v4; // kr00_4
  int result;
  int v6;
  int v7;
  unsigned int *v8;
  int v9;
  int *v10;
  int *v11;
  int *v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  void **v18;
  unsigned int v19;
  void *v20;
  int v21;
  unsigned int v22;
  char v23; // bp
  bool v24;
  void *v25;
  void **v26;
  unsigned int v27;
  void *v28;
  typedef unsigned int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_i;
  typedef int *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef gaia::CrmAction::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef void *_g4_t_v43[2];
  typedef int *_g4_t_v44;
  typedef void *_g4_t_v45;
  typedef int *_g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v30)) > _g4_s1 ? (24u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v31)) > _g4_s2 ? (24u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_i)) > _g4_s6 ? (32u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v36)) > _g4_s7 ? (32u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v37)) > _g4_s8 ? (32u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v38)) > _g4_s9 ? (36u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v39)) > _g4_s10 ? (36u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v40)) > _g4_s11 ? (40u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v41)) > _g4_s12 ? (40u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v42)) > _g4_s13 ? (44u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v43)) > _g4_s14 ? (56u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v44)) > _g4_s15 ? (64u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v45)) > _g4_s16 ? (68u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v46)) > _g4_s17 ? (72u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v47)) > _g4_s18 ? (76u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v48)) > _g4_s19 ? (80u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v49)) > _g4_s20 ? (84u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v50)) > _g4_s21 ? (88u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v51)) > _g4_s22 ? (92u + sizeof(_g4_t_v51)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 84u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 88u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 92u);

  v1 = self;
  if ( (unsigned int)(*((uint32_t *)self + 23) - *((uint32_t *)self + 22)) >> 3 != 0 )
  {
    v2 = *((int ***)self + 30);
    v30 = *((uint32_t **)self + 29);
    v3 = *((int **)self + 27);
    for ( i = 1; ; i = 0 )
    {
      while ( 1 )
      {
        if ( v30
           - (uint32_t *)(v3
)           + ((((*((uint32_t *)self + 34) - (int)(uintptr_t)(v2)) >> 2) - 1) << 7)
           + ((*((uint32_t *)self + 31) - *((uint32_t *)self + 32)) >> 2) == 0
          || i == 0 )
        {
          goto LABEL_4;
        }
        v21 = *((uint32_t *)self + 22);
        v34 = *v3;
        v22 = 0;
        v23 = i;
        if ( (unsigned int)(*((uint32_t *)self + 23) - v21) >> 3 != 0 )
          break;
LABEL_37:
        if ( v3 == (int *)(uintptr_t)(v30 - 1) )
        {
          opDelete(*((void **)self + 28));
          v2 = (int **)(*((uint32_t *)self + 30) + 4);
          *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(v2);
          v3 = *v2;
          *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(*v2);
          *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(v3);
          v30 = (uint32_t *)(v3 + 128);
          *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)(v3 + 128);
        }
        else
        {
          ++v3;
          v2 = *((int ***)self + 30);
          *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(v3);
        }
      }
      do
      {
        v32 = *(uint32_t *)(v21 + 8 * v22++ + 4);
        v24 = gaia::CrmAction::GetCurrentOrCachedTimestamp(self) - v34 < v32;
        v21 = *((uint32_t *)self + 22);
        if ( v24 )
          v23 = 0;
      }
      while ( v22 < (*((uint32_t *)self + 23) - v21) >> 3 );
      if ( v23 != 0 )
      {
        v3 = *((int **)self + 27);
        v30 = *((uint32_t **)self + 29);
        goto LABEL_37;
      }
      v2 = *((int ***)self + 30);
      v30 = *((uint32_t **)self + 29);
      v3 = *((int **)self + 27);
    }
  }
LABEL_4:
  v4 = lrand48();
  result = -35;
  if ( (double)(v4 % 100) * 0.01 > *(double *)((char *)self + 44) )
    return result;
  v6 = *((uint32_t *)self + 23);
  v7 = *((uint32_t *)self + 22);
  result = 0;
  if ( (unsigned int)(v6 - v7) >> 3 == 0 )
    return result;
  v33 = 0;
  while ( 1 )
  {
    v8 = (unsigned int *)(v7 + 8 * v33);
    v31 = *v8;
    v42 = v8[1];
    v9 = ((*((uint32_t *)v1 + 31) - *((uint32_t *)v1 + 32)) >> 2)
       + ((((*((uint32_t *)v1 + 34) - *((uint32_t *)v1 + 30)) >> 2) - 1) << 7);
    if ( *v8 <= v9 + ((*((uint32_t *)v1 + 29) - *((uint32_t *)v1 + 27)) >> 2) )
      break;
LABEL_7:
    if ( ++v33 >= (unsigned int)((v6 - v7) >> 3) )
      return 0;
  }
  v29 = v9 + ((*((uint32_t *)v1 + 29) - *((uint32_t *)v1 + 27)) >> 2);
  v43[0] = nullptr;
  v43[1] = nullptr;
  v44 = nullptr;
  v45 = nullptr;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  g4_std::Deque_base_unsigned_int_f0086f::M_initialize_map((std::_Deque_base<unsigned int> *)v43, v29);
  v10 = *((int **)v1 + 27);
  v36 = *((int **)v1 + 29);
  v40 = *((uint32_t *)v1 + 30);
  v11 = v44;
  v12 = v46;
  v13 = v47;
  v14 = ((((*((uint32_t *)v1 + 34) - v40) >> 2) - 1) << 7)
      + ((*((uint32_t *)v1 + 31) - *((uint32_t *)v1 + 32)) >> 2)
      + v36
      - v10;
  if ( v14 > 0 )
  {
    v38 = v1;
    do
    {
      while ( 1 )
      {
        v15 = *v10++;
        *v11 = v15;
        if ( v10 == v36 )
        {
          v10 = *(int **)(v40 + 4);
          v36 = v10 + 128;
          v40 += 4;
        }
        if ( ++v11 == v12 )
          break;
        if ( --v14 == 0 )
          goto LABEL_16;
      }
      v11 = *(int **)(v13 + 4);
      v13 += 4;
      --v14;
      v12 = v11 + 128;
    }
    while ( v14 != 0 );
LABEL_16:
    v1 = v38;
    v13 = v47;
    v12 = v46;
    v11 = v44;
  }
  v37 = v51;
  v41 = v48;
  v39 = v49;
  while ( v31 < ((v41 - v39) >> 2) + ((((int)(v37 - v13) >> 2) - 1) << 7) + v12 - v11 )
  {
    if ( v11 == v12 - 1 )
    {
      opDelete(v45);
      v37 = v51;
      v41 = v48;
      v39 = v49;
      v13 = v47 + 4;
      v47 = v13;
      v11 = *(int **)v13;
      v45 = v11;
      v44 = v11;
      v12 = v11 + 128;
      v46 = v11 + 128;
    }
    else
    {
      v44 = ++v11;
    }
  }
  v16 = *v11;
  if ( v42 <= gaia::CrmAction::GetCurrentOrCachedTimestamp(v1) - v16 )
  {
    v17 = v43[0];
    if ( v43[0] != nullptr )
    {
      v18 = (void **)v47;
      v19 = v51 + 4;
      if ( v51 + 4 > v47 )
      {
        do
        {
          v20 = *v18++;
          opDelete(v20);
        }
        while ( v19 > (unsigned int)(uintptr_t)(v18) );
        v17 = v43[0];
      }
      opDelete(v17);
    }
    v7 = *((uint32_t *)v1 + 22);
    v6 = *((uint32_t *)v1 + 23);
    goto LABEL_7;
  }
  v25 = v43[0];
  result = -35;
  if ( v43[0] != nullptr )
  {
    v26 = (void **)v47;
    v27 = v51 + 4;
    if ( v51 + 4 > v47 )
    {
      do
      {
        v28 = *v26++;
        opDelete(v28);
      }
      while ( v27 > (unsigned int)(uintptr_t)(v26) );
      v25 = v43[0];
    }
    opDelete(v25);
    return -35;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::CheckFatigueGroupConstraints  (binary VA: 0x14e3090)
// Original: gaia::CrmAction::CheckFatigueGroupConstraints
// ----------------------------------------------------------------------------
int gaia::CrmAction::CheckFatigueGroupConstraints(unsigned int ***self, unsigned int a2)
{
  int result;

  result = 1;
  if ( *(self + 40) != nullptr )
    return gaia::CrmFatigueGroup::CanBeTriggered(*(self + 40), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmAction::Trigger  (binary VA: 0x14e3360)
// Original: gaia::CrmAction::Trigger
// ----------------------------------------------------------------------------
int gaia::CrmAction::Trigger(gaia::CrmAction::Self *a1, uint32_t *a2, Json::Value::Self *a3, unsigned int a4)
{
  __time_t CurrentOrCachedTimestamp;
  Json::Value::Self *v5;
  __time_t v6;
  __time_t *v7;
  int v8;
  int result;
  __time_t v10;
  gaia::CrmFatigueGroup::Self *v11;
  char *v12;
  int v13;
  unsigned int v14;
  __time_t *v15;
  int *v16;
  int v17;
  int v18;
  int *dest;
  int v20;
  int v21;
  int v22;
  Json::Value::Self *v23;
  int *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  unsigned int v27;
  int v28;
  void *v29;
  int v30;
  int v31;
  typedef int _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef int *_g4_t_v36;
  typedef __time_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int *_g4_t_src;
  typedef void *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[4];
  typedef int _g4_t_v45;
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v37)) > _g4_s5 ? (16u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v38)) > _g4_s6 ? (16u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v39)) > _g4_s7 ? (16u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_src)) > _g4_s8 ? (20u + sizeof(_g4_t_src)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v41)) > _g4_s9 ? (20u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v42)) > _g4_s10 ? (24u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v43)) > _g4_s11 ? (36u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v44)) > _g4_s12 ? (40u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v46)) > _g4_s14 ? (48u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v47)) > _g4_s15 ? (64u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v48)) > _g4_s16 ? (80u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v49)) > _g4_s17 ? (96u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v50)) > _g4_s18 ? (112u + sizeof(_g4_t_v50)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);

  if ( gaia::CrmAction::CheckTriggerConditions(a1, (int)(uintptr_t)(a2), a3) != 0 )
    return -35;
  gaia::CrmAction::TrySetCachedTimestamp(a1, a4);
  CurrentOrCachedTimestamp = gaia::CrmAction::GetCurrentOrCachedTimestamp(a1);
  if ( (uint8_t)gaia::CrmAction::CheckFatigueGroupConstraints((unsigned int ***)a1, CurrentOrCachedTimestamp) == 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v49), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v50), &gaia::k_szTrue);
    v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v49, &gaia::k_szFatigueGroupLimitFailed);
    Json::Value::opAssign(v23, (const Json::Value::Self *)v50);
    v24 = &v45;
    Json::Value::Destroy((Json::Value::Self *)v50);
    g4_std::string::construct_copy(&v45, &gaia::k_szFatigueGroupLimitFailed);
LABEL_26:
    gaia::CrmManager::LogEventViaGLOT(*((uint32_t *)a1 + 21), (Json::Value::Self *)v49, (char **)v24);
    g4_std::string::Destroy(v24);
    Json::Value::Destroy((Json::Value::Self *)v49);
    return -35;
  }
  if ( gaia::CrmAction::CheckCooldowns(a1) != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v49), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v48), &gaia::k_szTrue);
    v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v49, &gaia::k_szPopupCooldownNotReady);
    Json::Value::opAssign(v25, (const Json::Value::Self *)v48);
    v24 = (int *)v44;
    Json::Value::Destroy((Json::Value::Self *)v48);
    g4_std::string::construct_copy(v44, &gaia::k_szPopupCooldownNotReady);
    goto LABEL_26;
  }
  if ( (uint8_t)gaia::CrmAction::CheckIfActionIsAvailable(a1) != 0 )
  {
    *((uint8_t *)a1 + 140) = 1;
    Json::Value::Construct((int)(uintptr_t)(v46), a2);
    v5 = (Json::Value::Self *)Json::Value::opIndex((gaia::CrmAction::Self *)((char *)a1 + 52), &gaia::k_szPointcutId);
    Json::Value::opAssign(v5, (const Json::Value::Self *)v46);
    Json::Value::Destroy((Json::Value::Self *)v46);
    if ( *((uint32_t *)a1 + 23) != *((uint32_t *)a1 + 22) )
    {
      v6 = gaia::CrmAction::GetCurrentOrCachedTimestamp(a1);
      v7 = *((__time_t **)a1 + 31);
      if ( v7 == (__time_t *)(*((uint32_t *)a1 + 33) - 4) )
      {
        v12 = *((char **)a1 + 34);
        v13 = *((uint32_t *)a1 + 25);
        v14 = *((uint32_t *)a1 + 26);
        if ( v14 - ((int)(uintptr_t)(&v12[-v13]) >> 2) <= 1 )
        {
          src = *((int **)a1 + 30);
          v42 = ((v12 - (char *)src) >> 2) + 1;
          v32 = ((v12 - (char *)src) >> 2) + 2;
          if ( v14 <= 2 * v32 )
          {
            v27 = 3;
            if ( v14 != 0 )
            {
              v27 = 2 * v14 + 2;
              if ( v27 > 0x3FFFFFFF )
                sub_18FFEE0(v13, 2 * v32);
            }
            v28 = opNew(4 * v27);
            v29 = (void *)(v28 + 4 * ((v27 - v32) >> 1));
            v41 = *((void **)a1 + 30);
            v30 = (*((uint32_t *)a1 + 34) + 4 - (int)(uintptr_t)(v41)) >> 2;
            if ( v30 != 0 )
            {
              v35 = (void *)(v28 + 4 * ((v27 - v32) >> 1));
              v39 = v28;
              memmove(v29, v41, 4 * v30);
              v28 = v39;
              v29 = v35;
            }
            v33 = (int *)v29;
            v38 = v28;
            opDelete(*((void **)a1 + 25));
            *((uint32_t *)a1 + 26) = v27;
            *((uint32_t *)a1 + 25) = v38;
            dest = v33;
          }
          else
          {
            v18 = v12 + 4 - (char *)src;
            dest = (int *)(v13 + 4 * ((v14 - v32) >> 1));
            if ( src <= dest )
            {
              v31 = v18 >> 2;
              if ( v31 != 0 )
              {
                v34 = (int *)(v13 + 4 * ((v14 - v32) >> 1));
                memmove(&dest[v42 - v31], src, 4 * v31);
                dest = v34;
              }
            }
            else
            {
              v20 = v18 >> 2;
              if ( v20 != 0 )
              {
                v36 = (int *)(v13 + 4 * ((v14 - v32) >> 1));
                memmove(dest, src, 4 * v20);
                dest = v36;
              }
            }
          }
          *((uint32_t *)a1 + 30) = (uint32_t)(uintptr_t)(dest);
          v21 = *dest;
          *((uint32_t *)a1 + 28) = *dest;
          *((uint32_t *)a1 + 29) = v21 + 512;
          v12 = (char *)&dest[v42 - 1];
          *((uint32_t *)a1 + 34) = (uint32_t)(uintptr_t)(v12);
          v22 = *(uint32_t *)v12;
          *((uint32_t *)a1 + 32) = *(uint32_t *)v12;
          *((uint32_t *)a1 + 33) = v22 + 512;
        }
        *((uint32_t *)v12 + 1) = opNew(0x200u);
        v15 = *((__time_t **)a1 + 31);
        if ( v15 != nullptr )
          *v15 = v6;
        v16 = (int *)(*((uint32_t *)a1 + 34) + 4);
        *((uint32_t *)a1 + 34) = (uint32_t)(uintptr_t)(v16);
        v17 = *v16;
        *((uint32_t *)a1 + 32) = *v16;
        *((uint32_t *)a1 + 31) = v17;
        *((uint32_t *)a1 + 33) = v17 + 512;
      }
      else
      {
        v8 = 0;
        if ( v7 != nullptr )
        {
          *v7 = v6;
          v8 = *((uint32_t *)a1 + 31);
        }
        *((uint32_t *)a1 + 31) = v8 + 4;
      }
    }
    result = 0;
    if ( *((uint32_t *)a1 + 40) != 0 )
    {
      v10 = gaia::CrmAction::GetCurrentOrCachedTimestamp(a1);
      v11 = *((gaia::CrmFatigueGroup::Self **)a1 + 40);
      if ( v11 == nullptr )
      {
        v37 = v10;
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = gaia::Crm"
          "FatigueGroup, typename boost::detail::sp_member_access<T>::type = gaia::CrmFatigueGroup*]",
          "px != 0");
        v11 = *((gaia::CrmFatigueGroup::Self **)a1 + 40);
        v10 = v37;
      }
      gaia::CrmFatigueGroup::SetImpression(v11, v10);
      return 0;
    }
  }
  else
  {
    Json::Value::Construct((int)(uintptr_t)(v49), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v47), &gaia::k_szTrue);
    v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v49, &gaia::k_szPopupNotAvailable);
    Json::Value::opAssign(v26, (const Json::Value::Self *)v47);
    Json::Value::Destroy((Json::Value::Self *)v47);
    g4_std::string::construct_copy(&v43, &gaia::k_szPopupNotAvailable);
    gaia::CrmManager::LogEventViaGLOT(*((uint32_t *)a1 + 21), (Json::Value::Self *)v49, (char **)&v43);
    g4_std::string::Destroy(&v43);
    Json::Value::Destroy((Json::Value::Self *)v49);
    return -36;
  }
  return result;
}


