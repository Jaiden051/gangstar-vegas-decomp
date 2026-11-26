#include "Core/Utils/DecompTypes.h"
#include "gaia_CrmFatigueGroup.h"

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::IsImpressionExpired  (binary VA: 0x14ca220)
// Original: gaia::CrmFatigueGroup::IsImpressionExpired
// ----------------------------------------------------------------------------
bool gaia::CrmFatigueGroup::IsImpressionExpired(gaia::CrmFatigueGroup::Self *self, unsigned int a2, int a3)
{
  return a3 - a2 > *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::SetImpression  (binary VA: 0x14cd9d0)
// Original: gaia::CrmFatigueGroup::SetImpression
// ----------------------------------------------------------------------------
uint32_t * gaia::CrmFatigueGroup::SetImpression(gaia::CrmFatigueGroup::Self *self, int a2)
{
  uint32_t *result;
  int v3;
  char *v4;
  int v5;
  unsigned int v6;
  uint32_t *v7;
  uint32_t **v8;
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

  result = *((uint32_t **)self + 12);
  if ( result == (uint32_t *)(*((uint32_t *)self + 14) - 4) )
  {
    v4 = *((char **)self + 15);
    v5 = *((uint32_t *)self + 6);
    v6 = *((uint32_t *)self + 7);
    if ( v6 - ((int)(uintptr_t)(&v4[-v5]) >> 2) <= 1 )
    {
      v26 = *((int **)self + 11);
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
        src = *((void **)self + 11);
        v12 = (*((uint32_t *)self + 15) + 4 - (int)(uintptr_t)(src)) >> 2;
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
        opDelete(*((void **)self + 6));
        *((uint32_t *)self + 7) = v9;
        *((uint32_t *)self + 6) = v24;
        v13 = v20;
      }
      *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v13);
      v14 = *v13;
      *((uint32_t *)self + 9) = *v13;
      *((uint32_t *)self + 10) = v14 + 512;
      v4 = (char *)&v13[v28 - 1];
      *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v4);
      v15 = *(uint32_t *)v4;
      *((uint32_t *)self + 13) = *(uint32_t *)v4;
      *((uint32_t *)self + 14) = v15 + 512;
    }
    *((uint32_t *)v4 + 1) = opNew(0x200u);
    v7 = *((uint32_t **)self + 12);
    if ( v7 != nullptr )
      *v7 = a2;
    v8 = (uint32_t **)(*((uint32_t *)self + 15) + 4);
    *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v8);
    result = *v8;
    *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(*v8);
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(result);
    *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(result + 128);
  }
  else
  {
    v3 = 0;
    if ( result != nullptr )
    {
      *result = a2;
      v3 = *((uint32_t *)self + 12);
    }
    *((uint32_t *)self + 12) = v3 + 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::GetName  (binary VA: 0x14cdc10)
// Original: gaia::CrmFatigueGroup::GetName
// ----------------------------------------------------------------------------
char * gaia::CrmFatigueGroup::GetName(gaia::CrmFatigueGroup::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::Serialize  (binary VA: 0x14cdd30)
// Original: gaia::CrmFatigueGroup::Serialize
// ----------------------------------------------------------------------------
gaia::CrmFatigueGroup::Self * gaia::CrmFatigueGroup::Serialize(gaia::CrmFatigueGroup::Self *self, gaia::CrmFatigueGroup::Self *a2)
{
  char *Name;
  Json::Value::Self *v3;
  Json::Value::Self **v4;
  Json::Value::Self *v5;
  typedef Json::Value::Self *_g4_t_v7;
  typedef Json::Value::Self **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v11)) > _g4_s4 ? (48u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v12)) > _g4_s5 ? (64u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);

  Json::Value::Construct((int)(uintptr_t)(self), nullptr);
  Name = gaia::CrmFatigueGroup::GetName(a2);
  Json::Value::Construct((int)(uintptr_t)(v10), Name);
  v3 = (Json::Value::Self *)Json::Value::opIndex(self, "GroupName");
  Json::Value::opAssign(v3, (const Json::Value::Self *)v10);
  Json::Value::Destroy((Json::Value::Self *)v10);
  Json::Value::Construct((int)(uintptr_t)(v11), &loc_6);
  v4 = *((Json::Value::Self ***)a2 + 8);
  v8 = *((Json::Value::Self ***)a2 + 10);
  v9 = *((uint32_t *)a2 + 11);
  while ( *((Json::Value::Self ***)a2 + 12) != v4 )
  {
    while ( 1 )
    {
      v7 = *v4++;
      Json::Value::Construct((Json::Value::Self *)v12, (unsigned int)(uintptr_t)(v7));
      Json::Value::append((Json::Value::Self *)v11, (const Json::Value::Self *)v12);
      Json::Value::Destroy((Json::Value::Self *)v12);
      if ( v4 != v8 )
        break;
      v4 = *(Json::Value::Self ***)(v9 + 4);
      v8 = v4 + 128;
      v9 += 4;
      if ( *((Json::Value::Self ***)a2 + 12) == v4 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v5 = (Json::Value::Self *)Json::Value::opIndex(self, "ImpressionArray");
  Json::Value::opAssign(v5, (const Json::Value::Self *)v11);
  Json::Value::Destroy((Json::Value::Self *)v11);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::Deserialize  (binary VA: 0x14ce3e0)
// Original: gaia::CrmFatigueGroup::Deserialize
// ----------------------------------------------------------------------------
int gaia::CrmFatigueGroup::Deserialize(gaia::CrmFatigueGroup::Self *self, const Json::Value::Self *a2)
{
  gaia::CrmFatigueGroup::Self *v2;
  Json::Value::Self *v3;
  const Json::Value::Self *v4;
  uint32_t *s2;
  void **v7;
  unsigned int v8;
  void *v9;
  unsigned int v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int *v14;
  int v15;
  unsigned int v16;
  char *v17;
  int *v18;
  int *v19;
  int v20;
  unsigned int v21;
  void *v22;
  const void *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef gaia::CrmFatigueGroup::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_src;
  typedef uint8_t *_g4_t_srca;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef void *_g4_t_s1;
  typedef uint8_t _g4_t_v47[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v32)) > _g4_s1 ? (20u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v33)) > _g4_s2 ? (20u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v34)) > _g4_s3 ? (20u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v35)) > _g4_s4 ? (24u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v37)) > _g4_s6 ? (28u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v38)) > _g4_s7 ? (32u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v39)) > _g4_s8 ? (32u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v40)) > _g4_s9 ? (32u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_src)) > _g4_s10 ? (36u + sizeof(_g4_t_src)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_srca)) > _g4_s11 ? (36u + sizeof(_g4_t_srca)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v43)) > _g4_s12 ? (40u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v44)) > _g4_s13 ? (40u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v45)) > _g4_s14 ? (44u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_s1)) > _g4_s15 ? (60u + sizeof(_g4_t_s1)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v47)) > _g4_s16 ? (64u + sizeof(_g4_t_v47)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 36u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);

  v2 = self;
  v3 = (Json::Value::Self *)Json::Value::opIndex(a2, "GroupName");
  if ( !Json::Value::isNull(v3) )
  {
    Json::Value::asString((Json::Value::Self *)&s1, (int)(uintptr_t)(v3));
    s2 = *((uint32_t **)self + 2);
    if ( *((uint32_t *)s1 - 3) != *(s2 - 3) || memcmp(s1, s2, *((uint32_t *)s1 - 3)) != 0 )
    {
      g4_std::string::Destroy(&s1);
      return -34;
    }
    g4_std::string::Destroy(&s1);
  }
  v4 = (const Json::Value::Self *)Json::Value::opIndex(a2, "ImpressionArray");
  Json::Value::Construct((Json::Value::Self *)v47, v4);
  if ( !Json::Value::isNull((Json::Value::Self *)v47) && (uint8_t)Json::Value::isArray((Json::Value::Self *)v47) != 0 )
  {
    v37 = Json::Value::size((Json::Value::Self *)v47);
    v38 = *((uint32_t *)self + 8);
    v35 = *((uint32_t *)self + 11);
    v7 = (void **)(v35 + 4);
    src = *((void **)self + 9);
    v43 = *((uint32_t *)self + 10);
    if ( *((uint32_t *)self + 15) + 4 > (unsigned int)(v35 + 4) )
    {
      v8 = *((uint32_t *)self + 15) + 4;
      do
      {
        v9 = *v7++;
        opDelete(v9);
      }
      while ( v8 > (unsigned int)(uintptr_t)(v7) );
      v2 = self;
    }
    *((uint32_t *)v2 + 14) = v43;
    *((uint32_t *)v2 + 12) = v38;
    *((uint32_t *)v2 + 13) = (uint32_t)(uintptr_t)(src);
    *((uint32_t *)v2 + 15) = v35;
    if ( v37 > 0 )
    {
      v10 = 0;
      v36 = v2;
      do
      {
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, v10);
        if ( !Json::Value::isNull(v11) && Json::Value::isInt(v11) )
        {
          v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, v10);
          v13 = Json::Value::asInt(v12);
          v14 = *((int **)v36 + 12);
          if ( v14 == (int *)(*((uint32_t *)v36 + 14) - 4) )
          {
            v16 = *((uint32_t *)v36 + 7);
            v17 = *((char **)v36 + 15);
            v39 = *((uint32_t *)v36 + 6);
            if ( v16 - ((int)(uintptr_t)(&v17[-v39]) >> 2) <= 1 )
            {
              srca = *((uint8_t **)v36 + 11);
              v45 = ((v17 - (char *)(srca)) >> 2) + 1;
              v44 = ((v17 - (char *)(srca)) >> 2) + 2;
              if ( v16 > 2 * v44 )
              {
                v28 = v17 + 4 - (char *)(srca);
                v25 = (uint32_t *)(v39 + 4 * ((v16 - v44) >> 1));
                if ( srca <= (uint8_t *)v25 )
                {
                  v30 = v28 >> 2;
                  if ( v30 != 0 )
                  {
                    v34 = v25;
                    memmove(&v25[v45 - v30], srca, 4 * v30);
                    v25 = v34;
                  }
                }
                else
                {
                  v29 = v28 >> 2;
                  if ( v29 != 0 )
                  {
                    v33 = v25;
                    memmove(v25, srca, 4 * v29);
                    v25 = v33;
                  }
                }
              }
              else
              {
                v31 = 3;
                if ( v16 != 0 )
                {
                  v21 = 2 * v16 + 2;
                  v31 = v21;
                  if ( v21 > 0x3FFFFFFF )
                    sub_18FFEE0(v21, v17);
                }
                v40 = opNew(4 * v31);
                v22 = (void *)(v40 + 4 * ((unsigned int)(v31 - v44) >> 1));
                v23 = *((const void **)v36 + 11);
                v24 = (*((uint32_t *)v36 + 15) + 4 - (int)(uintptr_t)(v23)) >> 2;
                if ( v24 != 0 )
                {
                  memmove(v22, v23, 4 * v24);
                  v22 = (void *)(v40 + 4 * ((unsigned int)(v31 - v44) >> 1));
                }
                v32 = (uint32_t *)(v22);
                opDelete(*((void **)v36 + 6));
                *((uint32_t *)v36 + 6) = v40;
                *((uint32_t *)v36 + 7) = v31;
                v25 = v32;
              }
              *((uint32_t *)v36 + 11) = (uint32_t)(uintptr_t)(v25);
              v26 = *v25;
              *((uint32_t *)v36 + 9) = *v25;
              *((uint32_t *)v36 + 10) = v26 + 512;
              v17 = (char *)&v25[v45 - 1];
              *((uint32_t *)v36 + 15) = (uint32_t)(uintptr_t)(v17);
              v27 = *(uint32_t *)v17;
              *((uint32_t *)v36 + 13) = *(uint32_t *)v17;
              *((uint32_t *)v36 + 14) = v27 + 512;
            }
            *((uint32_t *)v17 + 1) = opNew(0x200u);
            v18 = *((int **)v36 + 12);
            if ( v18 != nullptr )
              *v18 = v13;
            v19 = (int *)(*((uint32_t *)v36 + 15) + 4);
            *((uint32_t *)v36 + 15) = (uint32_t)(uintptr_t)(v19);
            v20 = *v19;
            *((uint32_t *)v36 + 13) = *v19;
            *((uint32_t *)v36 + 12) = v20;
            *((uint32_t *)v36 + 14) = v20 + 512;
          }
          else
          {
            v15 = 0;
            if ( v14 != nullptr )
            {
              *v14 = v13;
              v15 = *((uint32_t *)v36 + 12);
            }
            *((uint32_t *)v36 + 12) = v15 + 4;
          }
        }
        ++v10;
      }
      while ( v37 != v10 );
    }
  }
  Json::Value::Destroy((Json::Value::Self *)v47);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::IsValid  (binary VA: 0x14cf100)
// Original: gaia::CrmFatigueGroup::IsValid
// ----------------------------------------------------------------------------
int gaia::CrmFatigueGroup::IsValid(gaia::CrmFatigueGroup::Self *self)
{
  return *((uint8_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::InitializeFatigueGroup  (binary VA: 0x14dc390)
// Original: gaia::CrmFatigueGroup::InitializeFatigueGroup
// ----------------------------------------------------------------------------
int gaia::CrmFatigueGroup::InitializeFatigueGroup(gaia::CrmFatigueGroup::Self *self, const Json::Value::Self *a2)
{
  int v2;
  Json::Value::Self *v3;
  unsigned int v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  int *v9;
  int v10;
  int v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v19)) > _g4_s7 ? (36u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v20)) > _g4_s8 ? (40u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v21)) > _g4_s9 ? (44u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  v2 = -34;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "name", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "limit", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "max", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "interval", (int)(uintptr_t)(&v14) + 3);
  v3 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&v15);
  if ( Json::Value::isString(v3) )
  {
    Json::Value::asString((Json::Value::Self *)v19, (int)(uintptr_t)(v3));
    g4_std::string::assign_str((char *)self + 8, v19);
    v4 = 0;
    g4_std::string::Destroy(v19);
    v5 = (Json::Value::Self *)Json::Value::opIndex(a2, (const char **)&v16);
    if ( (uint8_t)Json::Value::isArray(v5) != 0 )
    {
      while ( v4 < Json::Value::size(v5) )
      {
        v6 = (Json::Value::Self *)Json::Value::opIndex(v5, v4);
        v12 = (Json::Value::Self *)Json::Value::opIndex(v6, (const char **)&v17);
        v7 = (Json::Value::Self *)Json::Value::opIndex(v5, v4);
        v13 = (Json::Value::Self *)Json::Value::opIndex(v7, (const char **)&v18);
        if ( Json::Value::isNull(v12)
          || Json::Value::isConvertibleTo(v12, 1) == 0
          || Json::Value::isNull(v13)
          || Json::Value::isConvertibleTo(v13, 1) == 0 )
        {
          v2 = -34;
          goto LABEL_6;
        }
        v21 = Json::Value::asInt(v13);
        v20 = Json::Value::asInt(v12);
        if ( v21 > *(uint32_t *)self )
        {
          *(uint32_t *)self = v21;
          v9 = *((int **)self + 4);
          if ( v9 == *((int **)self + 5) )
          {
LABEL_18:
            g4_std::vector_gaia_CrmImpressionLimit_bdda80::M_insert_aux((int)(uintptr_t)(self) + 12, v9, (int)(uintptr_t)(&v20));
            goto LABEL_16;
          }
        }
        else
        {
          v9 = *((int **)self + 4);
          if ( v9 == *((int **)self + 5) )
            goto LABEL_18;
        }
        v10 = 0;
        if ( v9 != nullptr )
        {
          v11 = v20;
          v9[1] = v21;
          *v9 = v11;
          v10 = *((uint32_t *)self + 4);
        }
        *((uint32_t *)self + 4) = v10 + 8;
LABEL_16:
        ++v4;
      }
    }
    *((uint8_t *)self + 4) = 1;
    v2 = 0;
  }
LABEL_6:
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::Construct  (binary VA: 0x14e22a0)
// Original: gaia::CrmFatigueGroup::CrmFatigueGroup
// ----------------------------------------------------------------------------
gaia::CrmFatigueGroup::Self * gaia::CrmFatigueGroup::Construct(gaia::CrmFatigueGroup::Self *self, const Json::Value::Self *a2)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = 0;
  *((uint8_t *)self + 4) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  g4_std::Deque_base_unsigned_int_f0086f::M_initialize_map((gaia::CrmFatigueGroup::Self *)((char *)self + 24), 0);
  return (gaia::CrmFatigueGroup::Self *)gaia::CrmFatigueGroup::InitializeFatigueGroup(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::DeleteExpiredImpressions  (binary VA: 0x14e2cd0)
// Original: gaia::CrmFatigueGroup::DeleteExpiredImpressions
// ----------------------------------------------------------------------------
int gaia::CrmFatigueGroup::DeleteExpiredImpressions(unsigned int **self, int a2)
{
  gaia::CrmFatigueGroup::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int *v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  int v13;
  typedef unsigned int *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef gaia::CrmFatigueGroup::Self *_g4_t_v20;
  typedef unsigned int *_g4_t_v21;
  typedef unsigned int *_g4_t_v22;
  typedef char _g4_t_v23[16];
  typedef unsigned int *_g4_t_v24;
  typedef unsigned int *_g4_t_v25;
  typedef unsigned int *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef bool (*_g4_t_v32)(gaia::CrmFatigueGroup::Self *, unsigned int, int);
  typedef int _g4_t_v33;
  typedef gaia::CrmFatigueGroup::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int *_g4_t_v44;
  typedef unsigned int *_g4_t_v45;
  typedef unsigned int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef gaia::CrmFatigueGroup::Self **_g4_t_v48;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v22)) > _g4_s7 ? (28u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v24)) > _g4_s9 ? (48u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v25)) > _g4_s10 ? (52u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v26)) > _g4_s11 ? (56u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v27)) > _g4_s12 ? (60u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v28)) > _g4_s13 ? (64u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v29)) > _g4_s14 ? (68u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v30)) > _g4_s15 ? (72u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v31)) > _g4_s16 ? (76u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v32)) > _g4_s17 ? (80u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v33)) > _g4_s18 ? (84u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v34)) > _g4_s19 ? (88u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v35)) > _g4_s20 ? (92u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v36)) > _g4_s21 ? (96u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v37)) > _g4_s22 ? (100u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v38)) > _g4_s23 ? (104u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v39)) > _g4_s24 ? (108u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v40)) > _g4_s25 ? (112u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v41)) > _g4_s26 ? (116u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v42)) > _g4_s27 ? (120u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v43)) > _g4_s28 ? (124u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v44)) > _g4_s29 ? (128u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v45)) > _g4_s30 ? (132u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v46)) > _g4_s31 ? (136u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v47)) > _g4_s32 ? (140u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v48)) > _g4_s33 ? (152u + sizeof(_g4_t_v48)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 132u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 136u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 140u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 152u);

  v48 = (gaia::CrmFatigueGroup::Self **)&self;
  v2 = (gaia::CrmFatigueGroup::Self *)self;
  v19 = a2;
  v32 = gaia::CrmFatigueGroup::IsImpressionExpired;
  v33 = 0;
  v34 = (gaia::CrmFatigueGroup::Self *)self;
  v3 = (int)(uintptr_t)(*(self + 15));
  v4 = (int)(uintptr_t)(*(self + 14));
  v21 = *(self + 12);
  v28 = v21;
  v31 = v3;
  v29 = (int)(uintptr_t)(*(self + 13));
  v30 = v4;
  v35 = a2;
  v37 = v29;
  v38 = v4;
  v5 = (int)(uintptr_t)(*(self + 8));
  v6 = (int)(uintptr_t)(*(self + 15));
  v36 = v21;
  v39 = v6;
  v40 = v5;
  v7 = (int)(uintptr_t)(*(self + 10));
  v8 = (int)(uintptr_t)(*(self + 11));
  v41 = (int)(uintptr_t)(*(self + 9));
  v42 = v7;
  v43 = v8;
  g4_std::find_if_Deque_iterator_unsigned_9d8b9b(&v44);
  v22 = v44;
  v15 = v45;
  v18 = v46;
  v16 = v47;
  if ( v21 == v44 )
  {
    v24 = v21;
    v25 = v45;
    v26 = v46;
    v27 = v47;
  }
  else
  {
    v9 = v46;
    v10 = v44 + 1;
    v11 = v47;
    if ( v44 + 1 == v46 )
    {
      v11 = v47 + 4;
      v10 = *(unsigned int **)(v47 + 4);
      v9 = v10 + 128;
    }
    v17 = v11;
    v20 = v2;
LABEL_5:
    v12 = v9;
    while ( v21 != v10 )
    {
      if ( !gaia::CrmFatigueGroup::IsImpressionExpired(v20, *v10, v19) )
      {
        *v22++ = *v10;
        if ( v18 == v22 )
        {
          v13 = v16;
          v16 += 4;
          v15 = *(unsigned int **)(v13 + 4);
          v18 = v15 + 128;
          v22 = v15;
        }
      }
      if ( v12 == ++v10 )
      {
        v10 = *(unsigned int **)(v17 + 4);
        v17 += 4;
        v9 = v10 + 128;
        goto LABEL_5;
      }
    }
    v24 = v22;
    v25 = v15;
    v26 = v18;
    v27 = v16;
  }
  return (int)(uintptr_t)(g4_std::deque_unsigned_int_482b01::erase(v23));
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmFatigueGroup::CanBeTriggered  (binary VA: 0x14e2f50)
// Original: gaia::CrmFatigueGroup::CanBeTriggered
// ----------------------------------------------------------------------------
int gaia::CrmFatigueGroup::CanBeTriggered(unsigned int **self, int a2)
{
  int result;
  unsigned int *v3;
  unsigned int *v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int *v10;
  int v11;

  gaia::CrmFatigueGroup::DeleteExpiredImpressions(self, a2);
  result = 1;
  v3 = *(self + 4);
  if ( *(self + 3) != v3 )
  {
    v11 = (int)(uintptr_t)(*(self + 12));
    v9 = (v11 - (int)(uintptr_t)(*(self + 13))) >> 2;
    v4 = *(self + 3);
    while ( *v4 > ((v11 - (int)(uintptr_t)(*(self + 13))) >> 2)
                + ((*(self + 15) - *(self + 11) - 1) << 7)
                + *(self + 10)
                - *(self + 8) )
    {
LABEL_3:
      v4 += 2;
      if ( v3 == v4 )
        return 1;
    }
    v5 = *v4 - 1;
    v6 = v9 - v5;
    if ( v9 - v5 < 0 )
    {
      v8 = ((unsigned int)v6 >> 7) | 0xFE000000;
    }
    else
    {
      if ( v6 <= 127 )
      {
        v7 = v11 - 4 * v5;
        v10 = *(self + 15);
        if ( (unsigned int *)v7 == *(self + 13) )
LABEL_13:
          v7 = *(v10 - 1) + 512;
LABEL_8:
        if ( a2 - *(uint32_t *)(v7 - 4) < v4[1] )
          return 0;
        goto LABEL_3;
      }
      v8 = v6 >> 7;
    }
    v10 = &(*(self + 15))[v8];
    v7 = *v10 + 4 * (v6 - (v8 << 7));
    if ( v7 != *v10 )
      goto LABEL_8;
    goto LABEL_13;
  }
  return result;
}


