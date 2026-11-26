#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorManager.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::Construct  (binary VA: 0x13c6010)
// Original: grapher::ActorManager::ActorManager
// ----------------------------------------------------------------------------
grapher::ActorManager::Self * grapher::ActorManager::Construct(grapher::ActorManager::Self *self)
{
  grapher::ActorManager::Self *result;
  int v2[3];

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C38);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)((char *)self + 44);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)((char *)self + 44);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)((char *)self + 80);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)((char *)self + 80);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)((char *)self + 100);
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)((char *)self + 100);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint8_t *)self + 133) = 1;
  *((uint32_t *)self + 34) = 0;
  result = (grapher::ActorManager::Self *)g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 140, "templates.xml", (int)(uintptr_t)(v2));
  *((uint32_t *)self + 32) = 49;
  *((uint8_t *)self + 132) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::FlushStringTables  (binary VA: 0x13c6130)
// Original: grapher::ActorManager::FlushStringTables
// ----------------------------------------------------------------------------
int * grapher::ActorManager::FlushStringTables(grapher::ActorManager::Self *self)
{
  int *v1;
  int *result;
  int v3;
  grapher::ActorBase::Self **v4;
  grapher::ActorBase::Self *v5;

  v1 = *((int **)self + 7);
  for ( result = *((int **)self + 8); v1 != result; ++v1 )
  {
    v3 = *v1;
    v4 = *(grapher::ActorBase::Self ***)(*v1 + 24);
    if ( v4 != *(grapher::ActorBase::Self ***)(*v1 + 28) )
    {
      do
      {
        v5 = *v4++;
        grapher::ActorBase::FlushStringTables(v5);
      }
      while ( *(grapher::ActorBase::Self ***)(v3 + 28) != v4 );
      result = *((int **)self + 8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::AddIntoUpdateList  (binary VA: 0x13c61a0)
// Original: grapher::ActorManager::AddIntoUpdateList
// ----------------------------------------------------------------------------
void grapher::ActorManager::AddIntoUpdateList(grapher::ActorManager::Self *self, grapher::ActorBase::Self *a2, grapher::ActorContext::Self *a3)
{
  char *v3;
  int v4;
  unsigned int v5;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  int v14;
  size_t v15;
  int v16;
  uint32_t *v17;

  if ( a3 != nullptr && a2 != nullptr )
  {
    v3 = *((char **)self + 17);
    if ( v3 == *((char **)self + 18) )
    {
      v15 = 12;
      v5 = -1431655765 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2);
      if ( v5 != 0 )
      {
        v15 = 0xFFFFFFFC;
        if ( v5 <= 2 * v5 )
        {
          v13 = 8 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2);
          if ( (unsigned int)(1431655766 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2)) > 0x15555555 )
            v13 = -4;
          v15 = v13;
        }
      }
      v14 = -1431655765 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2);
      v16 = gll_operator_new(v15, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v6 = (uint32_t *)(v16 + 12 * v14);
      if ( v6 != nullptr )
      {
        *v6 = (uint32_t)(uintptr_t)(a2);
        v6[1] = (uint32_t)(uintptr_t)(a3);
        v6[2] = 0;
      }
      v7 = *((char **)self + 16);
      v8 = (uint32_t *)v16;
      if ( v3 != v7 )
      {
        v9 = *((char **)self + 16);
        do
        {
          if ( v8 != nullptr )
          {
            *v8 = *(uint32_t *)v9;
            v8[1] = *((uint32_t *)v9 + 1);
            v8[2] = *((uint32_t *)v9 + 2);
          }
          v9 += 12;
          v8 += 3;
        }
        while ( v3 != v9 );
        v8 = (uint32_t *)(v16 + 4 * ((unsigned int)(v3 - (v7 + 12)) >> 2) + 12);
      }
      v10 = *((char **)self + 17);
      v11 = v8 + 3;
      v17 = v11;
      if ( v3 != v10 )
      {
        v12 = v3;
        do
        {
          if ( v11 != nullptr )
          {
            *v11 = *(uint32_t *)v12;
            v11[1] = *((uint32_t *)v12 + 1);
            v11[2] = *((uint32_t *)v12 + 2);
          }
          v12 += 12;
          v11 += 3;
        }
        while ( v10 != v12 );
        v17 += ((unsigned int)(v10 - (v3 + 12)) >> 2) + 3;
      }
      if ( *((uint32_t *)self + 16) != 0 )
        sub_4EB800(*((uint32_t *)self + 16));
      *((uint32_t *)self + 16) = v16;
      *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v17);
      *((uint32_t *)self + 18) = v15 + v16;
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = (uint32_t)(uintptr_t)(a2);
        *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(a3);
        *((uint32_t *)v3 + 2) = 0;
        v4 = *((uint32_t *)self + 17);
      }
      *((uint32_t *)self + 17) = v4 + 12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::RemoveFromUpdateList  (binary VA: 0x13c6380)
// Original: grapher::ActorManager::RemoveFromUpdateList
// ----------------------------------------------------------------------------
void grapher::ActorManager::RemoveFromUpdateList(grapher::ActorManager::Self *self, grapher::ActorBase::Self *a2, grapher::ActorContext::Self *a3)
{
  char *v3;
  int v4;
  unsigned int v5;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  int v14;
  size_t v15;
  int v16;
  uint32_t *v17;

  if ( a3 != nullptr && a2 != nullptr )
  {
    v3 = *((char **)self + 17);
    if ( v3 == *((char **)self + 18) )
    {
      v15 = 12;
      v5 = -1431655765 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2);
      if ( v5 != 0 )
      {
        v15 = 0xFFFFFFFC;
        if ( v5 <= 2 * v5 )
        {
          v13 = 8 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2);
          if ( (unsigned int)(1431655766 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2)) > 0x15555555 )
            v13 = -4;
          v15 = v13;
        }
      }
      v14 = -1431655765 * ((int)(uintptr_t)(&v3[-*((uint32_t *)self + 16)]) >> 2);
      v16 = gll_operator_new(v15, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v6 = (uint32_t *)(v16 + 12 * v14);
      if ( v6 != nullptr )
      {
        *v6 = (uint32_t)(uintptr_t)(a2);
        v6[1] = (uint32_t)(uintptr_t)(a3);
        v6[2] = 1;
      }
      v7 = *((char **)self + 16);
      v8 = (uint32_t *)v16;
      if ( v3 != v7 )
      {
        v9 = *((char **)self + 16);
        do
        {
          if ( v8 != nullptr )
          {
            *v8 = *(uint32_t *)v9;
            v8[1] = *((uint32_t *)v9 + 1);
            v8[2] = *((uint32_t *)v9 + 2);
          }
          v9 += 12;
          v8 += 3;
        }
        while ( v3 != v9 );
        v8 = (uint32_t *)(v16 + 4 * ((unsigned int)(v3 - (v7 + 12)) >> 2) + 12);
      }
      v10 = *((char **)self + 17);
      v11 = v8 + 3;
      v17 = v11;
      if ( v3 != v10 )
      {
        v12 = v3;
        do
        {
          if ( v11 != nullptr )
          {
            *v11 = *(uint32_t *)v12;
            v11[1] = *((uint32_t *)v12 + 1);
            v11[2] = *((uint32_t *)v12 + 2);
          }
          v12 += 12;
          v11 += 3;
        }
        while ( v10 != v12 );
        v17 += ((unsigned int)(v10 - (v3 + 12)) >> 2) + 3;
      }
      if ( *((uint32_t *)self + 16) != 0 )
        sub_4EB800(*((uint32_t *)self + 16));
      *((uint32_t *)self + 16) = v16;
      *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v17);
      *((uint32_t *)self + 18) = v15 + v16;
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = (uint32_t)(uintptr_t)(a2);
        *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(a3);
        *((uint32_t *)v3 + 2) = 1;
        v4 = *((uint32_t *)self + 17);
      }
      *((uint32_t *)self + 17) = v4 + 12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::RemoveFromUpdateList  (binary VA: 0x13c6560)
// Original: grapher::ActorManager::RemoveFromUpdateList
// ----------------------------------------------------------------------------
void grapher::ActorManager::RemoveFromUpdateList(grapher::ActorManager::Self *self, grapher::ActorContext::Self *a2)
{
  char *v2;
  int v3;
  unsigned int v4;
  uint32_t *v5;
  char *v6;
  uint32_t *v7;
  char *v8;
  char *v9;
  uint32_t *v10;
  char *v11;
  int v12;
  int v13;
  size_t v14;
  int v15;
  uint32_t *v16;

  if ( a2 != nullptr )
  {
    v2 = *((char **)self + 17);
    if ( v2 == *((char **)self + 18) )
    {
      v14 = 12;
      v4 = -1431655765 * ((int)(uintptr_t)(&v2[-*((uint32_t *)self + 16)]) >> 2);
      if ( v4 != 0 )
      {
        v14 = 0xFFFFFFFC;
        if ( v4 <= 2 * v4 )
        {
          v12 = 8 * ((int)(uintptr_t)(&v2[-*((uint32_t *)self + 16)]) >> 2);
          if ( (unsigned int)(1431655766 * ((int)(uintptr_t)(&v2[-*((uint32_t *)self + 16)]) >> 2)) > 0x15555555 )
            v12 = -4;
          v14 = v12;
        }
      }
      v13 = -1431655765 * ((int)(uintptr_t)(&v2[-*((uint32_t *)self + 16)]) >> 2);
      v15 = gll_operator_new(v14, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v5 = (uint32_t *)(v15 + 12 * v13);
      if ( v5 != nullptr )
      {
        *v5 = 0;
        v5[1] = (uint32_t)(uintptr_t)(a2);
        v5[2] = 2;
      }
      v6 = *((char **)self + 16);
      v7 = (uint32_t *)v15;
      if ( v2 != v6 )
      {
        v8 = *((char **)self + 16);
        do
        {
          if ( v7 != nullptr )
          {
            *v7 = *(uint32_t *)v8;
            v7[1] = *((uint32_t *)v8 + 1);
            v7[2] = *((uint32_t *)v8 + 2);
          }
          v8 += 12;
          v7 += 3;
        }
        while ( v2 != v8 );
        v7 = (uint32_t *)(v15 + 4 * ((unsigned int)(v2 - (v6 + 12)) >> 2) + 12);
      }
      v9 = *((char **)self + 17);
      v10 = v7 + 3;
      v16 = v10;
      if ( v2 != v9 )
      {
        v11 = v2;
        do
        {
          if ( v10 != nullptr )
          {
            *v10 = *(uint32_t *)v11;
            v10[1] = *((uint32_t *)v11 + 1);
            v10[2] = *((uint32_t *)v11 + 2);
          }
          v11 += 12;
          v10 += 3;
        }
        while ( v9 != v11 );
        v16 += ((unsigned int)(v9 - (v2 + 12)) >> 2) + 3;
      }
      if ( *((uint32_t *)self + 16) != 0 )
        sub_4EB800(*((uint32_t *)self + 16));
      *((uint32_t *)self + 16) = v15;
      *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v16);
      *((uint32_t *)self + 18) = v14 + v15;
    }
    else
    {
      v3 = 0;
      if ( v2 != nullptr )
      {
        *(uint32_t *)v2 = 0;
        *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(a2);
        *((uint32_t *)v2 + 2) = 2;
        v3 = *((uint32_t *)self + 17);
      }
      *((uint32_t *)self + 17) = v3 + 12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::GetActorFile  (binary VA: 0x13c6720)
// Original: grapher::ActorManager::GetActorFile
// ----------------------------------------------------------------------------
int grapher::ActorManager::GetActorFile(int a1, int a2)
{
  uint32_t *v2;
  char *v3;
  char *v4;
  uint8_t *v5;
  unsigned int v6;
  int v7;
  int *v8;
  size_t v9;
  const void *v10;
  int v11;
  typedef size_t _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v17)) > _g4_s4 ? (32u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  g4_std::string::construct_copy(v17, a2);
  v2 = (uint32_t *)v17[0];
  if ( *(int *)(v17[0] - 4) < 0 || (sub_19397C0(v17), v2 = (uint32_t *)v17[0], *(int *)(v17[0] - 4) < 0) )
  {
    v14 = v2;
    v3 = (char *)v2;
    v15 = (char *)v2 + *(v2 - 3);
  }
  else
  {
    sub_19397C0(v17);
    v14 = (uint32_t *)v17[0];
    v15 = (char *)v14 + *(v14 - 3);
    v3 = (char *)v17[0];
    if ( *(int *)(v17[0] - 4) >= 0 )
    {
      sub_19397C0(v17);
      v3 = (char *)v17[0];
      v14 = (uint32_t *)v17[0];
    }
  }
  if ( v15 != v3 )
  {
    v4 = v3;
    v5 = (uint8_t *)(v2);
    do
    {
      v6 = *v4;
      if ( v6 <= 0xFF )
        LOWORD(v6) = *(uint16_t *)(tolower_tab_ + 2 * v6 + 2);
      *v5 = v6;
      ++v4;
      ++v5;
    }
    while ( v4 != v15 );
    v14 = (uint32_t *)v17[0];
  }
  v7 = 0;
  v8 = *(int **)(a1 + 28);
  if ( v8 != *(int **)(a1 + 32) )
  {
    v16 = *(int **)(a1 + 32);
    v9 = *(v14 - 3);
    while ( 1 )
    {
      v7 = *v8;
      v10 = *(const void **)(*v8 + 8);
      if ( *((uint32_t *)v10 - 3) == v9 )
      {
        v13 = v9;
        v11 = memcmp(v10, v14, v9);
        v9 = v13;
        if ( v11 == 0 )
          break;
      }
      if ( v16 == ++v8 )
      {
        v7 = 0;
        break;
      }
    }
  }
  if ( v14 - 3 != dword_213B808 && __sync_fetch_and_add(v14 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v14 - 3);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::GetActorFileFromUniqueId  (binary VA: 0x13c68a0)
// Original: grapher::ActorManager::GetActorFileFromUniqueId
// ----------------------------------------------------------------------------
int grapher::ActorManager::GetActorFileFromUniqueId(grapher::ActorManager::Self *self, int a2)
{
  int result;
  int v3;
  int v4;

  result = 0;
  v3 = a2 >> 20;
  if ( a2 >> 20 >= 0 )
  {
    v4 = *((uint32_t *)self + 7);
    if ( v3 < (*((uint32_t *)self + 8) - v4) >> 2 )
      return *(uint32_t *)(v4 + 4 * v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::AddActorVariable  (binary VA: 0x13c68e0)
// Original: grapher::ActorManager::AddActorVariable
// ----------------------------------------------------------------------------
int grapher::ActorManager::AddActorVariable(grapher::ActorManager::Self *self, grapher::ActorVariable::Self *a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  char *v6;
  int v7;
  unsigned int v8;
  uint32_t *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  uint32_t *v13;
  int v14;
  int v15;
  size_t v16;
  char *v17;
  char *v18;
  unsigned int v19;
  int v20;

  v2 = *((uint32_t *)self + 7);
  v3 = *(uint32_t *)a2 >> 20;
  result = (*((uint32_t *)self + 8) - v2) >> 2;
  if ( v3 < result )
  {
    v5 = *(int **)(v2 + 4 * v3);
    v6 = (char *)v5[4];
    if ( v6 == (char *)v5[5] )
    {
      v8 = (int)(uintptr_t)(&v6[-v5[3]]) >> 2;
      v16 = 4;
      if ( v8 != 0 )
      {
        v16 = 0xFFFFFFFC;
        if ( v8 <= 2 * v8 )
        {
          v14 = 8 * v8;
          if ( 2 * v8 > 0x3FFFFFFF )
            v14 = -4;
          v16 = v14;
        }
      }
      v15 = (int)(uintptr_t)(&v6[-v5[3]]) >> 2;
      v20 = gll_operator_new(v16, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v19 = v20 + 4;
      v9 = (uint32_t *)(v20 + 4 * v15);
      if ( v9 != nullptr )
        *v9 = (uint32_t)(uintptr_t)(a2);
      v17 = (char *)v5[3];
      if ( v6 != v17 )
      {
        v10 = (char *)v5[3];
        v11 = (uint32_t *)v20;
        do
        {
          if ( v11 != nullptr )
            *v11 = *(uint32_t *)v10;
          v10 += 4;
          ++v11;
        }
        while ( v6 != v10 );
        v19 = v20 + 4 * ((unsigned int)(v6 - (v17 + 4)) >> 2) + 8;
      }
      v18 = (char *)v5[4];
      if ( v6 != v18 )
      {
        v12 = v6;
        v13 = (uint32_t *)v19;
        do
        {
          if ( v13 != nullptr )
            *v13 = *(uint32_t *)v12;
          v12 += 4;
          ++v13;
        }
        while ( v18 != v12 );
        v19 += 4 * ((unsigned int)(v18 - (v6 + 4)) >> 2) + 4;
      }
      if ( v5[3] != 0 )
        sub_4EB800(v5[3]);
      v5[3] = v20;
      v5[4] = v19;
      v5[5] = v16 + v20;
    }
    else
    {
      v7 = 0;
      if ( v6 != nullptr )
      {
        *(uint32_t *)v6 = (uint32_t)(uintptr_t)(a2);
        v7 = v5[4];
      }
      v5[4] = v7 + 4;
    }
    return grapher::ActorContext::RegisterAVar(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::GetVariable  (binary VA: 0x13c6a90)
// Original: grapher::ActorManager::GetVariable
// ----------------------------------------------------------------------------
uint32_t * grapher::ActorManager::GetVariable(grapher::ActorManager::Self *self, unsigned int a2)
{
  grapher::ActorFile::Self *ActorFileFromUniqueId;
  uint32_t *result;

  ActorFileFromUniqueId = (grapher::ActorFile::Self *)grapher::ActorManager::GetActorFileFromUniqueId(self, a2);
  result = nullptr;
  if ( ActorFileFromUniqueId != nullptr )
    return grapher::ActorFile::FindVariable(ActorFileFromUniqueId, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::DeleteActorVariable  (binary VA: 0x13c6ae0)
// Original: grapher::ActorManager::DeleteActorVariable
// ----------------------------------------------------------------------------
void grapher::ActorManager::DeleteActorVariable(grapher::ActorManager::Self *self, unsigned int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 7);
  if ( a2 >> 20 < (*((uint32_t *)self + 8) - v2) >> 2 )
    grapher::ActorFile::RemoveActorVariable(*(grapher::ActorFile::Self **)(v2 + 4 * (a2 >> 20)), a2);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::RegisterActorForManualEvent  (binary VA: 0x13c6b30)
// Original: grapher::ActorManager::RegisterActorForManualEvent
// ----------------------------------------------------------------------------
char * grapher::ActorManager::RegisterActorForManualEvent(uint32_t *a1, char **a2, char *a3, int a4)
{
  char *result;
  int v5;
  size_t v6;
  unsigned int v7;
  const char *v8;
  unsigned int v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  char *v28;
  char *v29;
  char *v30;
  char *v31;
  unsigned int v32;
  char v33; // di
  char *v34;
  char v35; // di
  char *v36;
  char *v37;
  char v38; // di
  char *v39;
  char *v40;
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef const char *_g4_t_v52;
  typedef size_t _g4_t_i;
  typedef char *_g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char *_g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t _g4_t_v63[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v41)) > _g4_s0 ? (12u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v42)) > _g4_s1 ? (12u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v43)) > _g4_s2 ? (12u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v44)) > _g4_s3 ? (12u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v45)) > _g4_s4 ? (12u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v46)) > _g4_s5 ? (12u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v47)) > _g4_s6 ? (12u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v48)) > _g4_s7 ? (16u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v49)) > _g4_s8 ? (16u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v50)) > _g4_s9 ? (16u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v51)) > _g4_s10 ? (16u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v52)) > _g4_s11 ? (20u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_i)) > _g4_s12 ? (20u + sizeof(_g4_t_i)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v54)) > _g4_s13 ? (20u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v55)) > _g4_s14 ? (20u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v56)) > _g4_s15 ? (20u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v57)) > _g4_s16 ? (24u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v58)) > _g4_s17 ? (24u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v59)) > _g4_s18 ? (24u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v60)) > _g4_s19 ? (28u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v61)) > _g4_s20 ? (28u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (46u + sizeof(_g4_t_v62)) > _g4_s21 ? (46u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v63)) > _g4_s22 ? (48u + sizeof(_g4_t_v63)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 46u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);

  result = a3;
  if ( a3 == nullptr )
    return result;
  result = *a2;
  if ( *((uint32_t *)*a2 - 3) == 0 )
    return result;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v63), *a2, (int)(uintptr_t)(&v62));
  GLFUtils::ToLowerCase(v63, 0, -1);
  v52 = (const char *)v63[0];
  v5 = v63[0];
  if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
  {
    if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
    {
      v19 = 0;
      v61 = 0;
      memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
      v20 = 0;
      while ( 1 )
      {
        if ( (v20 & 2) != 0 )
          v19 |= 0x40u;
        if ( (v20 & 4) != 0 )
          v19 |= 0x20u;
        if ( (v20 & 8) != 0 )
          v19 |= 0x10u;
        if ( (v20 & 0x10) != 0 )
          v19 |= 8u;
        if ( (v20 & 0x20) != 0 )
          v19 |= 4u;
        if ( (v20 & 0x40) != 0 )
          v19 |= 2u;
        if ( v20 >> 7 != 0 )
          v19 |= 1u;
        v21 = (2 * ((v19 << 25) ^ ((char)v19 >> 7) & 0x4C11DB7))
            ^ (((v19 << 25) ^ ((char)v19 >> 7) & 0x4C11DB7) >> 31)
            & 0x4C11DB7;
        v22 = 31;
        v23 = (2 * ((2 * v21) ^ (v21 >> 31) & 0x4C11DB7)) ^ (((2 * v21) ^ (v21 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
        v24 = (2 * ((2 * v23) ^ (v23 >> 31) & 0x4C11DB7)) ^ (((2 * v23) ^ (v23 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
        v25 = (2 * ((2 * v24) ^ (v24 >> 31) & 0x4C11DB7)) ^ (((2 * v24) ^ (v24 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
        v26 = 0;
        do
        {
          if ( (v25 & 1) != 0 )
            v26 |= 1 << v22;
          --v22;
          v25 >>= 1;
        }
        while ( v22 != -1 );
        g4_fnstatic_9e962ebe99[v61] = v26;
        v27 = v61 + 1;
        v61 = v27;
        if ( v27 == 256 )
          break;
        v20 = v27;
        v19 = -(v27 & 1) & 0x80;
      }
      _cxa_guard_release(g4_guard_5c4b7d5421);
    }
    v5 = v63[0];
  }
  v6 = strlen(v52);
  v7 = 0;
  if ( v6 != 0 )
  {
    v8 = v52;
    v9 = 0xFFFFFFFF;
    for ( i = v6; i != 0; --i )
    {
      v10 = *v8++;
      v9 = (v9 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v9 ^ v10];
    }
    v7 = ~v9;
  }
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    v46 = v7;
    g4_std_compat::string_rep_destroy((void *)(v5 - 12));
    v7 = v46;
  }
  v60 = (char *)(a1 + 20);
  v11 = a1[21];
  if ( v11 == 0 )
    goto LABEL_61;
  v12 = (char *)(a1 + 20);
  result = (char *)a1[21];
  do
  {
    while ( *((uint32_t *)result + 4) >= v7 )
    {
      v12 = result;
      result = *((char **)result + 2);
      if ( result == nullptr )
        goto LABEL_15;
    }
    result = *((char **)result + 3);
  }
  while ( result != nullptr );
LABEL_15:
  if ( v60 == v12 || *((uint32_t *)v12 + 4) > v7 )
  {
    v13 = (char *)(a1 + 20);
    v14 = (char *)a1[21];
    do
    {
      if ( *((uint32_t *)v14 + 4) >= v7 )
      {
        v13 = v14;
        v14 = *((char **)v14 + 2);
      }
      else
      {
        v14 = *((char **)v14 + 3);
      }
    }
    while ( v14 != nullptr );
    v54 = v13;
    if ( v60 != v13 )
    {
      if ( *((uint32_t *)v13 + 4) <= v7 )
      {
LABEL_33:
        *((uint32_t *)v13 + 5) = (uint32_t)(uintptr_t)(a3);
        *((uint32_t *)v13 + 7) = a4;
        return (char *)a4;
      }
      v15 = (char *)a1[22];
      if ( v15 == v13 )
      {
        v47 = v7;
        v40 = (char *)operator new(0x20u);
        v13 = v40;
        if ( v40 != (char *)-16 )
        {
          *((uint32_t *)v40 + 4) = v47;
          *((uint32_t *)v40 + 5) = 0;
          *((uint32_t *)v40 + 6) = 0;
          *((uint32_t *)v40 + 7) = -1;
        }
        sub_1904970(1, v40, v15, v60);
        goto LABEL_32;
      }
      v48 = (char *)a1[21];
      v41 = v7;
      v16 = (char *)sub_1904940(v13);
      v7 = v41;
      v57 = v16;
      v17 = v48;
      if ( *((uint32_t *)v16 + 4) < v41 )
      {
        if ( *((uint32_t *)v16 + 3) != 0 )
        {
          v18 = (char *)operator new(0x20u);
          v13 = v18;
          if ( v18 != (char *)-16 )
          {
            *((uint32_t *)v18 + 4) = v41;
            *((uint32_t *)v18 + 5) = 0;
            *((uint32_t *)v18 + 6) = 0;
            *((uint32_t *)v18 + 7) = -1;
          }
          sub_1904970(1, v18, v54, v60);
LABEL_32:
          ++a1[24];
          goto LABEL_33;
        }
        v38 = v60 == v16;
        v39 = (char *)operator new(0x20u);
        v13 = v39;
        if ( v39 != (char *)-16 )
        {
          *((uint32_t *)v39 + 4) = v41;
          *((uint32_t *)v39 + 5) = 0;
          *((uint32_t *)v39 + 6) = 0;
          *((uint32_t *)v39 + 7) = -1;
        }
        sub_1904970(v38, v39, v57, v60);
LABEL_78:
        ++a1[24];
        goto LABEL_33;
      }
      while ( 1 )
      {
        v58 = *((uint32_t *)v17 + 4);
        if ( v58 > v41 )
        {
          v28 = *((char **)v17 + 2);
          v55 = 1;
        }
        else
        {
          v28 = *((char **)v17 + 3);
          v55 = 0;
        }
        if ( v28 == nullptr )
          break;
        v17 = v28;
      }
      v13 = v17;
      if ( v55 != 0 )
      {
        if ( v15 == v17 )
        {
LABEL_93:
          v33 = 1;
          if ( v60 != v17 )
            v33 = *((uint32_t *)v17 + 4) > v7;
LABEL_75:
          v49 = v17;
          v43 = v7;
          v34 = (char *)operator new(0x20u);
          v13 = v34;
          if ( v34 != (char *)-16 )
          {
            *((uint32_t *)v34 + 4) = v43;
            *((uint32_t *)v34 + 5) = 0;
            *((uint32_t *)v34 + 6) = 0;
            *((uint32_t *)v34 + 7) = -1;
          }
          sub_1904970(v33, v34, v49, v60);
          goto LABEL_78;
        }
        v51 = v17;
        v13 = (char *)sub_19048F0(v17);
        v58 = *((uint32_t *)v13 + 4);
        v7 = v41;
        v17 = v51;
      }
      if ( v7 <= v58 )
        goto LABEL_33;
      goto LABEL_93;
    }
LABEL_61:
    v59 = a1[24];
    if ( v59 != 0 )
    {
      v29 = (char *)a1[23];
      if ( *((uint32_t *)v29 + 4) < v7 )
      {
        v45 = v7;
        v37 = (char *)operator new(0x20u);
        v13 = v37;
        if ( v37 != (char *)-16 )
        {
          *((uint32_t *)v37 + 4) = v45;
          *((uint32_t *)v37 + 5) = 0;
          *((uint32_t *)v37 + 6) = 0;
          *((uint32_t *)v37 + 7) = -1;
        }
        sub_1904970(v60 == v29, v37, v29, v60);
        ++a1[24];
        goto LABEL_33;
      }
    }
    v13 = (char *)a1[21];
    if ( v11 != 0 )
    {
      while ( 1 )
      {
        v59 = *((uint32_t *)v13 + 4);
        if ( v59 > v7 )
        {
          v30 = *((char **)v13 + 2);
          v56 = 1;
        }
        else
        {
          v30 = *((char **)v13 + 3);
          v56 = 0;
        }
        if ( v30 == nullptr )
          break;
        v13 = v30;
      }
      v32 = *((uint32_t *)v13 + 4);
      v17 = v13;
      if ( v56 == 0 )
      {
LABEL_72:
        if ( v7 <= v32 )
          goto LABEL_33;
        v33 = 1;
        if ( v60 != v17 )
          v33 = v7 < v59;
        goto LABEL_75;
      }
    }
    else
    {
      v13 = (char *)(a1 + 20);
    }
    if ( (char *)a1[22] == v13 )
    {
      v35 = 1;
      if ( v60 != v13 )
        v35 = *((uint32_t *)v13 + 4) > v7;
      v44 = v7;
      v36 = (char *)operator new(0x20u);
      if ( v36 != (char *)-16 )
      {
        *((uint32_t *)v36 + 4) = v44;
        *((uint32_t *)v36 + 5) = 0;
        *((uint32_t *)v36 + 6) = 0;
        *((uint32_t *)v36 + 7) = -1;
      }
      v50 = v36;
      sub_1904970(v35, v36, v13, v60);
      ++a1[24];
      v13 = v50;
      goto LABEL_33;
    }
    v42 = v7;
    v31 = (char *)sub_19048F0(v13);
    v32 = *((uint32_t *)v31 + 4);
    v17 = v13;
    v7 = v42;
    v13 = v31;
    goto LABEL_72;
  }
  return result;
}


// ============================================================================
// Address:   0x13c71c0 (size: 705 bytes)
// Symbol:    _ZN7grapher12ActorManager29DeregisterActorForManualEventERKSs
// Demangled: grapher::ActorManager::DeregisterActorForManualEvent(std::string const&)
// ============================================================================
void grapher::ActorManager::DeregisterActorForManualEvent(uint32_t *a1, char **a2)
{
  int v2;
  unsigned int v3;
  size_t v4;
  const char *v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  typedef const char *_g4_t_v20;
  typedef size_t _g4_t_i;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v23)) > _g4_s3 ? (30u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 30u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  if ( *((uint32_t *)*a2 - 3) != 0 )
  {
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v24), *a2, (int)(uintptr_t)(&v23));
    GLFUtils::ToLowerCase(v24, 0, -1);
    v20 = (const char *)v24[0];
    v2 = v24[0];
    if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
    {
      if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
      {
        v11 = 0;
        v22 = 0;
        memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
        v12 = 0;
        while ( 1 )
        {
          if ( (v12 & 2) != 0 )
            v11 |= 0x40u;
          if ( (v12 & 4) != 0 )
            v11 |= 0x20u;
          if ( (v12 & 8) != 0 )
            v11 |= 0x10u;
          if ( (v12 & 0x10) != 0 )
            v11 |= 8u;
          if ( (v12 & 0x20) != 0 )
            v11 |= 4u;
          if ( (v12 & 0x40) != 0 )
            v11 |= 2u;
          if ( v12 >> 7 != 0 )
            v11 |= 1u;
          v13 = (2 * ((v11 << 25) ^ ((char)v11 >> 7) & 0x4C11DB7))
              ^ (((v11 << 25) ^ ((char)v11 >> 7) & 0x4C11DB7) >> 31)
              & 0x4C11DB7;
          v14 = 31;
          v15 = (2 * ((2 * v13) ^ (v13 >> 31) & 0x4C11DB7)) ^ (((2 * v13) ^ (v13 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v16 = (2 * ((2 * v15) ^ (v15 >> 31) & 0x4C11DB7)) ^ (((2 * v15) ^ (v15 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v17 = (2 * ((2 * v16) ^ (v16 >> 31) & 0x4C11DB7)) ^ (((2 * v16) ^ (v16 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v18 = 0;
          do
          {
            if ( (v17 & 1) != 0 )
              v18 |= 1 << v14;
            --v14;
            v17 >>= 1;
          }
          while ( v14 != -1 );
          g4_fnstatic_9e962ebe99[v22] = v18;
          v19 = v22 + 1;
          v22 = v19;
          if ( v19 == 256 )
            break;
          v12 = v19;
          v11 = -(v19 & 1) & 0x80;
        }
        _cxa_guard_release(g4_guard_5c4b7d5421);
      }
      v2 = v24[0];
    }
    v3 = 0;
    v4 = strlen(v20);
    if ( v4 != 0 )
    {
      v5 = v20;
      v6 = 0xFFFFFFFF;
      for ( i = v4; i != 0; --i )
      {
        v7 = *v5++;
        v6 = (v6 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v6 ^ v7];
      }
      v3 = ~v6;
    }
    if ( (uint32_t *)(v2 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v2 - 12));
    }
    v8 = (uint32_t *)a1[21];
    if ( v8 != nullptr )
    {
      v9 = a1 + 20;
      do
      {
        while ( v8[4] >= v3 )
        {
          v9 = v8;
          v8 = (uint32_t *)v8[2];
          if ( v8 == nullptr )
            goto LABEL_14;
        }
        v8 = (uint32_t *)v8[3];
      }
      while ( v8 != nullptr );
LABEL_14:
      if ( a1 + 20 != v9 && v9[4] <= v3 )
      {
        v10 = (void *)sub_1904AE0(v9, a1 + 20);
        opDelete(v10);
        --a1[24];
      }
    }
  }

}
// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::IsActorRegisteredForManualEvent  (binary VA: 0x13c7490)
// Original: grapher::ActorManager::IsActorRegisteredForManualEvent
// ----------------------------------------------------------------------------
bool grapher::ActorManager::IsActorRegisteredForManualEvent(int a1, char **a2, int a3, int a4)
{
  bool result;
  int v5;
  unsigned int v6;
  size_t v7;
  const char *v8;
  unsigned int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  typedef const char *_g4_t_v22;
  typedef size_t _g4_t_i;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v25)) > _g4_s3 ? (30u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 30u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  result = false;
  if ( a3 != 0 && *((uint32_t *)*a2 - 3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), *a2, (int)(uintptr_t)(&v25));
    GLFUtils::ToLowerCase(v26, 0, -1);
    v22 = (const char *)v26[0];
    v5 = v26[0];
    if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
    {
      if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
      {
        v13 = 0;
        v24 = 0;
        memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
        v14 = 0;
        while ( 1 )
        {
          if ( (v14 & 2) != 0 )
            v13 |= 0x40u;
          if ( (v14 & 4) != 0 )
            v13 |= 0x20u;
          if ( (v14 & 8) != 0 )
            v13 |= 0x10u;
          if ( (v14 & 0x10) != 0 )
            v13 |= 8u;
          if ( (v14 & 0x20) != 0 )
            v13 |= 4u;
          if ( (v14 & 0x40) != 0 )
            v13 |= 2u;
          if ( v14 >> 7 != 0 )
            v13 |= 1u;
          v15 = (2 * ((v13 << 25) ^ ((char)v13 >> 7) & 0x4C11DB7))
              ^ (((v13 << 25) ^ ((char)v13 >> 7) & 0x4C11DB7) >> 31)
              & 0x4C11DB7;
          v16 = 31;
          v17 = (2 * ((2 * v15) ^ (v15 >> 31) & 0x4C11DB7)) ^ (((2 * v15) ^ (v15 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v18 = (2 * ((2 * v17) ^ (v17 >> 31) & 0x4C11DB7)) ^ (((2 * v17) ^ (v17 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v19 = (2 * ((2 * v18) ^ (v18 >> 31) & 0x4C11DB7)) ^ (((2 * v18) ^ (v18 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v20 = 0;
          do
          {
            if ( (v19 & 1) != 0 )
              v20 |= 1 << v16;
            --v16;
            v19 >>= 1;
          }
          while ( v16 != -1 );
          g4_fnstatic_9e962ebe99[v24] = v20;
          v21 = v24 + 1;
          v24 = v21;
          if ( v21 == 256 )
            break;
          v14 = v21;
          v13 = -(v21 & 1) & 0x80;
        }
        _cxa_guard_release(g4_guard_5c4b7d5421);
      }
      v5 = v26[0];
    }
    v6 = 0;
    v7 = strlen(v22);
    if ( v7 != 0 )
    {
      v8 = v22;
      v9 = 0xFFFFFFFF;
      for ( i = v7; i != 0; --i )
      {
        v10 = *v8++;
        v9 = (v9 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v9 ^ v10];
      }
      v6 = ~v9;
    }
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy((void *)(v5 - 12));
    }
    result = false;
    v11 = *(uint32_t **)(a1 + 84);
    if ( v11 != nullptr )
    {
      v12 = (uint32_t *)(a1 + 80);
      do
      {
        while ( v11[4] >= v6 )
        {
          v12 = v11;
          v11 = (uint32_t *)v11[2];
          if ( v11 == nullptr )
            goto LABEL_15;
        }
        v11 = (uint32_t *)v11[3];
      }
      while ( v11 != nullptr );
LABEL_15:
      result = false;
      if ( (uint32_t *)(a1 + 80) != v12 && v12[4] <= v6 && v12[5] == a3 )
        return v12[7] == a4;
    }
  }
  return result;
}


// ============================================================================
// Address:   0x13c7760 (size: 91 bytes)
// Symbol:    _ZN7grapher12ActorManager29GetActorFileFromEventNameHashEj
// Demangled: grapher::ActorManager::GetActorFileFromEventNameHash(unsigned int)
// ============================================================================
grapher::ActorFile::Self *grapher::ActorManager::GetActorFileFromEventNameHash(
        grapher::ActorManager::Self *self,
        unsigned int a2)
{
  grapher::ActorFile::Self *result;
  grapher::ActorFile::Self **v3;

  result = nullptr;
  v3 = *((grapher::ActorFile::Self ***)self + 7);
  if ( v3 != *((grapher::ActorFile::Self ***)self + 8) )
  {
    do
    {
      if ( (uint8_t)grapher::ActorFile::HasStartScript(*v3, a2) != 0 )
        return (grapher::ActorFile::Self *)((int *)(*v3));
      ++v3;
    }
    while ( v3 != *((grapher::ActorFile::Self ***)self + 8) );
    return nullptr;
  }
  return (grapher::ActorFile::Self *)((int *)(result));
}


// ============================================================================
// Address:   0x13c77c0 (size: 974 bytes)
// Symbol:    _ZN7grapher12ActorManager15FireManualEventEPKcPNS_12ActorContextE
// Demangled: grapher::ActorManager::FireManualEvent(char const*,grapher::ActorContext *)
// ============================================================================
grapher::ActorFile::Self *grapher::ActorManager::FireManualEvent(
        grapher::ActorManager::Self *self,
        char *a2,
        grapher::ActorContext::Self *obj)
{
  grapher::ActorFile::Self *result;
  unsigned int v4;
  unsigned int v5;
  size_t v6;
  const char *v7;
  unsigned int v8;
  int v9;
  char *v10;
  grapher::ActorFile::Self *v11;
  grapher::ActorFile::Self *v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef const char *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);

  result = (grapher::ActorFile::Self *)a2;
  if ( a2 != nullptr && *a2 != 0 )
  {
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v32), a2, (int)(uintptr_t)(&v31) + 2);
    GLFUtils::ToLowerCase(v32, 0, -1);
    v25 = (const char *)v32[0];
    v4 = v32[0];
    if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
    {
      if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
      {
        v13 = 0;
        v26 = (uint32_t *)(g4_fnstatic_9e962ebe99);
        v14 = 0;
        memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
        v27 = 0;
        while ( 1 )
        {
          if ( (v14 & 2) != 0 )
            v13 |= 0x40u;
          if ( (v14 & 4) != 0 )
            v13 |= 0x20u;
          if ( (v14 & 8) != 0 )
            v13 |= 0x10u;
          if ( (v14 & 0x10) != 0 )
            v13 |= 8u;
          if ( (v14 & 0x20) != 0 )
            v13 |= 4u;
          if ( (v14 & 0x40) != 0 )
            v13 |= 2u;
          if ( v14 >> 7 != 0 )
            v13 |= 1u;
          v15 = (2 * ((v13 << 25) ^ ((char)v13 >> 7) & 0x4C11DB7))
              ^ (((v13 << 25) ^ ((char)v13 >> 7) & 0x4C11DB7) >> 31)
              & 0x4C11DB7;
          v16 = 31;
          v17 = (2 * ((2 * v15) ^ (v15 >> 31) & 0x4C11DB7)) ^ (((2 * v15) ^ (v15 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v18 = (2 * ((2 * v17) ^ (v17 >> 31) & 0x4C11DB7)) ^ (((2 * v17) ^ (v17 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v19 = (2 * ((2 * v18) ^ (v18 >> 31) & 0x4C11DB7)) ^ (((2 * v18) ^ (v18 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v20 = 0;
          do
          {
            if ( (v19 & 1) != 0 )
              v20 |= 1 << v16;
            --v16;
            v19 >>= 1;
          }
          while ( v16 != -1 );
          g4_fnstatic_9e962ebe99[v27] = v20;
          v21 = v27 + 1;
          v27 = v21;
          if ( v21 == 256 )
            break;
          v14 = v21;
          v13 = -(v21 & 1) & 0x80;
        }
        _cxa_guard_release(g4_guard_5c4b7d5421);
      }
      v4 = v32[0];
    }
    v5 = 0;
    v6 = strlen(v25);
    if ( v6 != 0 )
    {
      v7 = v25;
      v8 = 0xFFFFFFFF;
      v25 = (const char *)v6;
      v26 = (uint32_t *)(g4_fnstatic_9e962ebe99);
      v27 = v4;
      do
      {
        v9 = *v7++;
        v8 = (v8 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v8 ^ v9];
        --v25;
      }
      while ( v25 != nullptr );
      v5 = ~v8;
    }
    if ( (uint32_t *)(v4 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v4 - 12));
    }
    v10 = (char *)self + 80;
    v11 = (grapher::ActorFile::Self *)((grapher::ActorManager::Self *)((char *)self + 80));
    v12 = *((grapher::ActorFile::Self **)self + 21);
    if ( v12 != nullptr )
    {
      do
      {
        while ( *((uint32_t *)v12 + 4) >= v5 )
        {
          v11 = v12;
          v12 = *((grapher::ActorFile::Self **)v12 + 2);
          if ( v12 == nullptr )
            goto LABEL_15;
        }
        v12 = *((grapher::ActorFile::Self **)v12 + 3);
      }
      while ( v12 != nullptr );
LABEL_15:
      if ( v10 == (char *)v11 )
      {
        v11 = (grapher::ActorFile::Self *)((grapher::ActorManager::Self *)((char *)self + 80));
      }
      else if ( *((uint32_t *)v11 + 4) > v5 )
      {
        v11 = (grapher::ActorFile::Self *)((grapher::ActorManager::Self *)((char *)self + 80));
      }
    }
    if ( obj == nullptr )
    {
      obj = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 )
      {
        v24 = (char *)self + 80;
        v22 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
        v10 = (char *)self + 80;
        if ( v22 != 0 )
        {
          grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
          __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
          v10 = (char *)self + 80;
        }
      }
    }
    if ( v10 != (char *)v11 )
      return (grapher::ActorFile::Self *)(*(int (**)(uint32_t, uint32_t, grapher::ActorContext::Self *, int, char *, const char *, uint32_t *, unsigned int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(**((uint32_t **)v11 + 5) + 36))(
                                     *((uint32_t *)v11 + 5),
                                     *((uint32_t *)v11 + 7),
                                     obj,
                                     v23,
                                     v24,
                                     v25,
                                     v26,
                                     v27,
                                     v28,
                                     v29,
                                     v30,
                                     v31,
                                     v32[0],
                                     v32[1],
                                     v32[2],
                                     v32[3]);
    v24 = v10;
    result = grapher::ActorManager::GetActorFileFromEventNameHash(self, v5);
    if ( result != nullptr )
    {
      result = (grapher::ActorFile::Self *)grapher::ActorFile::Load(result, true);
      if ( (uint8_t)(uintptr_t)(result) != 0 )
      {
        result = *((grapher::ActorFile::Self **)self + 21);
        if ( result != nullptr )
        {
          v11 = (grapher::ActorFile::Self *)v24;
          do
          {
            if ( *((uint32_t *)result + 4) >= v5 )
            {
              v11 = result;
              result = *((grapher::ActorFile::Self **)result + 2);
            }
            else
            {
              result = *((grapher::ActorFile::Self **)result + 3);
            }
          }
          while ( result != nullptr );
          if ( v24 != (char *)v11 && *((uint32_t *)v11 + 4) <= v5 )
            return (grapher::ActorFile::Self *)(*(int (**)(uint32_t, uint32_t, grapher::ActorContext::Self *, int, char *, const char *, uint32_t *, unsigned int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(**((uint32_t **)v11 + 5) + 36))(
                                           *((uint32_t *)v11 + 5),
                                           *((uint32_t *)v11 + 7),
                                           obj,
                                           v23,
                                           v24,
                                           v25,
                                           v26,
                                           v27,
                                           v28,
                                           v29,
                                           v30,
                                           v31,
                                           v32[0],
                                           v32[1],
                                           v32[2],
                                           v32[3]);
        }
      }
    }
  }
  return (grapher::ActorFile::Self *)((int *)(result));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::Cancel  (binary VA: 0x13c7b90)
// Original: grapher::ActorManager::Cancel
// ----------------------------------------------------------------------------
void grapher::ActorManager::Cancel(grapher::ActorManager::Self *self, grapher::ActorBase::Self *a2, grapher::ActorContext::Self *a3, bool a4, int a5)
{
  int v5;
  void *v6;
  grapher::ActorBase::Self *v7;
  int *v8;
  int *v9;
  int *v10;
  unsigned int v11;
  int *v12;
  char v13;
  int *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  int *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  bool v34;
  int v35;
  int v36;
  int v37;
  int v38;
  typedef int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef bool _g4_t_v51;
  typedef uint32_t _g4_t_v52[5];
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int *_g4_t_v55;
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v39)) > _g4_s0 ? (4u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v41)) > _g4_s2 ? (8u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v42)) > _g4_s3 ? (12u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v43)) > _g4_s4 ? (16u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v44)) > _g4_s5 ? (20u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v45)) > _g4_s6 ? (24u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v46)) > _g4_s7 ? (24u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v47)) > _g4_s8 ? (28u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v48)) > _g4_s9 ? (28u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v49)) > _g4_s10 ? (32u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v50)) > _g4_s11 ? (36u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v51)) > _g4_s12 ? (36u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v52)) > _g4_s13 ? (48u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v53)) > _g4_s14 ? (68u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v54)) > _g4_s15 ? (72u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v55)) > _g4_s16 ? (76u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v56)) > _g4_s17 ? (80u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v57)) > _g4_s18 ? (84u + sizeof(_g4_t_v57)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);

  v52[0] = (uint32_t)(uintptr_t)(v52);
  v52[1] = (uint32_t)(uintptr_t)(v52);
  v53 = 0;
  v54 = nullptr;
  v57 = 0;
  v55 = &v53;
  v56 = &v53;
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(a2);
  sub_1901920(v5, v52);
  while ( 1 )
  {
    v6 = (void *)v52[0];
    if ( (uint32_t *)v52[0] == v52 )
      break;
    v7 = *(grapher::ActorBase::Self **)(v52[0] + 8);
    sub_1901940(v52[0]);
    opDelete(v6);
    if ( v7 != nullptr )
    {
      v8 = v54;
      if ( v54 == nullptr )
      {
        v8 = &v53;
        goto LABEL_48;
      }
      v9 = v54;
      v10 = &v53;
      do
      {
        if ( (unsigned int)(uintptr_t)(v7) > v9[4] )
        {
          v9 = (int *)v9[3];
        }
        else
        {
          v10 = v9;
          v9 = (int *)v9[2];
        }
      }
      while ( v9 != nullptr );
      if ( v10 == &v53 || (unsigned int)(uintptr_t)(v7) < v10[4] )
      {
        while ( 1 )
        {
          v11 = v8[4];
          if ( v11 <= (unsigned int)(uintptr_t)(v7) )
          {
            v12 = (int *)v8[3];
            v13 = 0;
          }
          else
          {
            v12 = (int *)v8[2];
            v13 = 1;
          }
          if ( v12 == nullptr )
            break;
          v8 = v12;
        }
        if ( v13 == 0 )
          goto LABEL_50;
LABEL_48:
        if ( v55 != v8 )
        {
          v11 = *(uint32_t *)(sub_19048F0(v8) + 16);
LABEL_50:
          if ( v11 >= (unsigned int)(uintptr_t)(v7) )
            goto LABEL_51;
        }
        v34 = true;
        if ( v8 != &v53 )
          v34 = v8[4] > (unsigned int)(uintptr_t)(v7);
        v40 = v34;
        v35 = opNew(0x14u);
        if ( v35 != -16 )
          *(uint32_t *)(v35 + 16) = (uint32_t)(uintptr_t)(v7);
        sub_1904970(v40, v35, v8, &v53);
        ++v57;
LABEL_51:
        if ( G4_VCALL<uint8_t>(v7, 32) != 0 )
        {
          G4_VCALL<void>(v7, 28, a3);
          if ( a4 || a2 == v7 )
          {
            v31 = *((uint32_t **)v7 + 5);
            v46 = (uint32_t *)((char *)v7 + 12);
            if ( v31 != (uint32_t *)((char *)v7 + 12) )
            {
              v51 = a5 == -666 || a2 != v7;
              do
              {
                if ( v51 || v31[4] == a5 )
                {
                  v36 = v31[5];
                  v48 = v31[6];
                  if ( v36 != v48 )
                  {
                    v41 = v31;
                    do
                    {
                      v37 = *(uint32_t *)(v36 + 4);
                      v38 = opNew(0xCu);
                      if ( v38 != -8 )
                        *(uint32_t *)(v38 + 8) = v37;
                      v36 += 12;
                      sub_1901920(v38, v52);
                    }
                    while ( v48 != v36 );
                    v31 = v41;
                  }
                }
                v31 = (uint32_t *)sub_19048E0(v31);
              }
              while ( v46 != v31 );
            }
          }
        }
      }
    }
  }
  v14 = v54;
  v47 = v54;
  if ( v54 != nullptr )
  {
    while ( 1 )
    {
      v15 = (uint32_t *)v14[3];
      v45 = v15;
      if ( v15 != nullptr )
      {
        while ( 1 )
        {
          v16 = (uint32_t *)v15[3];
          v44 = v16;
          if ( v16 != nullptr )
          {
            while ( 1 )
            {
              v17 = (uint32_t *)v16[3];
              v49 = v17;
              if ( v17 != nullptr )
              {
                while ( 1 )
                {
                  v18 = (uint32_t *)v17[3];
                  v43 = v18;
                  if ( v18 != nullptr )
                  {
                    while ( 1 )
                    {
                      v19 = (uint32_t *)v18[3];
                      v42 = v19;
                      if ( v19 != nullptr )
                      {
                        while ( 1 )
                        {
                          v20 = v19[3];
                          v50 = (uint32_t *)v20;
                          if ( v20 != 0 )
                          {
                            while ( 1 )
                            {
                              v21 = *(uint32_t **)(v20 + 12);
                              if ( v21 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v22 = v21[3];
                                  if ( v22 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      sub_13C5640(v20, *(uint32_t **)(v22 + 12));
                                      v39 = *(uint32_t *)(v22 + 8);
                                      opDelete((void *)v22);
                                      if ( v39 == 0 )
                                        break;
                                      v22 = v39;
                                    }
                                  }
                                  v23 = (uint32_t *)v21[2];
                                  opDelete(v21);
                                  if ( v23 == nullptr )
                                    break;
                                  v21 = v23;
                                }
                              }
                              v24 = (uint32_t *)v50[2];
                              opDelete(v50);
                              if ( v24 == nullptr )
                                break;
                              v50 = v24;
                              v20 = (int)(uintptr_t)(v24);
                            }
                          }
                          v25 = (uint32_t *)v42[2];
                          opDelete(v42);
                          if ( v25 == nullptr )
                            break;
                          v42 = v25;
                          v19 = v25;
                        }
                      }
                      v26 = (uint32_t *)v43[2];
                      opDelete(v43);
                      if ( v26 == nullptr )
                        break;
                      v43 = v26;
                      v18 = v26;
                    }
                  }
                  v27 = (uint32_t *)v49[2];
                  opDelete(v49);
                  if ( v27 == nullptr )
                    break;
                  v49 = v27;
                  v17 = v27;
                }
              }
              v28 = (uint32_t *)v44[2];
              opDelete(v44);
              if ( v28 == nullptr )
                break;
              v44 = v28;
              v16 = v28;
            }
          }
          v29 = (uint32_t *)v45[2];
          opDelete(v45);
          if ( v29 == nullptr )
            break;
          v45 = v29;
          v15 = v29;
        }
      }
      v30 = (int *)v47[2];
      opDelete(v47);
      if ( v30 == nullptr )
        break;
      v47 = v30;
      v14 = v30;
    }
    v32 = (uint32_t *)v52[0];
    if ( (uint32_t *)v52[0] != v52 )
    {
      while ( 1 )
      {
        v33 = (uint32_t *)*v32;
        opDelete(v32);
        if ( v33 == v52 )
          break;
        v32 = v33;
      }
    }
  }
}



// ============================================================================
// Address:   0x13c7fa0 (size: 838 bytes)
// Symbol:    _ZN7grapher12ActorManager12ManualCancelEPKcPNS_12ActorContextEbi
// Demangled: grapher::ActorManager::ManualCancel(char const*,grapher::ActorContext *,bool,int)
// ============================================================================
void grapher::ActorManager::ManualCancel(
        grapher::ActorManager::Self *self,
        char *a2,
        grapher::ActorContext::Self *obj,
        bool a4,
        int a5)
{
  int v5;
  unsigned int v6;
  size_t v7;
  const char *v8;
  unsigned int v9;
  int v10;
  grapher::ActorBase::Self **v11;
  grapher::ActorBase::Self **v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  typedef const char *_g4_t_v22;
  typedef size_t _g4_t_i;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v25)) > _g4_s3 ? (30u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 30u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  if ( a2 != nullptr && *a2 != 0 )
  {
    if ( obj == nullptr )
    {
      obj = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), a2, (int)(uintptr_t)(&v25));
    GLFUtils::ToLowerCase(v26, 0, -1);
    v22 = (const char *)v26[0];
    v5 = v26[0];
    if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
    {
      if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
      {
        v13 = 0;
        v24 = 0;
        memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
        v14 = 0;
        while ( 1 )
        {
          if ( (v14 & 2) != 0 )
            v13 |= 0x40u;
          if ( (v14 & 4) != 0 )
            v13 |= 0x20u;
          if ( (v14 & 8) != 0 )
            v13 |= 0x10u;
          if ( (v14 & 0x10) != 0 )
            v13 |= 8u;
          if ( (v14 & 0x20) != 0 )
            v13 |= 4u;
          if ( (v14 & 0x40) != 0 )
            v13 |= 2u;
          if ( v14 >> 7 != 0 )
            v13 |= 1u;
          v15 = (2 * ((v13 << 25) ^ ((char)v13 >> 7) & 0x4C11DB7))
              ^ (((v13 << 25) ^ ((char)v13 >> 7) & 0x4C11DB7) >> 31)
              & 0x4C11DB7;
          v16 = 31;
          v17 = (2 * ((2 * v15) ^ (v15 >> 31) & 0x4C11DB7)) ^ (((2 * v15) ^ (v15 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v18 = (2 * ((2 * v17) ^ (v17 >> 31) & 0x4C11DB7)) ^ (((2 * v17) ^ (v17 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v19 = (2 * ((2 * v18) ^ (v18 >> 31) & 0x4C11DB7)) ^ (((2 * v18) ^ (v18 >> 31) & 0x4C11DB7) >> 31) & 0x4C11DB7;
          v20 = 0;
          do
          {
            if ( (v19 & 1) != 0 )
              v20 |= 1 << v16;
            --v16;
            v19 >>= 1;
          }
          while ( v16 != -1 );
          g4_fnstatic_9e962ebe99[v24] = v20;
          v21 = v24 + 1;
          v24 = v21;
          if ( v21 == 256 )
            break;
          v14 = v21;
          v13 = -(v21 & 1) & 0x80;
        }
        _cxa_guard_release(g4_guard_5c4b7d5421);
        v5 = v26[0];
      }
      else
      {
        v5 = v26[0];
      }
    }
    v6 = 0;
    v7 = strlen(v22);
    if ( v7 != 0 )
    {
      v8 = v22;
      v9 = 0xFFFFFFFF;
      for ( i = v7; i != 0; --i )
      {
        v10 = *v8++;
        v9 = (v9 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v9 ^ v10];
      }
      v6 = ~v9;
    }
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy((void *)(v5 - 12));
    }
    v11 = *((grapher::ActorBase::Self ***)self + 21);
    if ( v11 != nullptr )
    {
      v12 = (grapher::ActorBase::Self **)((char *)nullptr + 80);
      do
      {
        while ( (unsigned int)(uintptr_t)(v11[4]) >= v6 )
        {
          v12 = v11;
          v11 = (grapher::ActorBase::Self **)v11[2];
          if ( v11 == nullptr )
            goto LABEL_15;
        }
        v11 = (grapher::ActorBase::Self **)v11[3];
      }
      while ( v11 != nullptr );
LABEL_15:
      if ( (grapher::ActorBase::Self **)((char *)self + 80) != v12 && (unsigned int)(uintptr_t)(v12[4]) <= v6 )
        grapher::ActorManager::Cancel(self, v12[5], obj, a4, a5);
    }
  }
}


// ============================================================================
// Address:   0x13c82f0 (size: 257 bytes)
// Symbol:    _ZN7grapher12ActorManager10QueueEventEPNS_9ActorBaseEiPNS_12ActorContextE
// Demangled: grapher::ActorManager::QueueEvent(grapher::ActorBase *,int,grapher::ActorContext *)
// ============================================================================
grapher::ActorBase::Self **grapher::ActorManager::QueueEvent(
        grapher::ActorManager::Self *self,
        grapher::ActorBase::Self *a2,
        grapher::ActorBase::Self **a3,
        grapher::ActorContext::Self *a4)
{
  uint32_t *v4;

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((__guard *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  if ( (*(uint8_t *)unk_20D5BE4) == 0 )
    return (grapher::ActorBase::Self **)(uintptr_t)(G4_MEM_CALL((uintptr_t)(grapher::ActorBase::_FireEvent), a2, a3, a4));
  v4 = (uint32_t *)gll_operator_new(0x14u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v4 != (uint32_t *)-8 )
  {
    v4[4] = (uint32_t)(uintptr_t)(a3);
    v4[2] = (uint32_t)(uintptr_t)(a2);
    v4[3] = (uint32_t)(uintptr_t)(a4);
  }
  return (grapher::ActorBase::Self **)((int **)((grapher::ActorBase::Self **)sub_1901920(v4, (char *)self + 100)));
}


// ============================================================================
// Address:   0x13c8400 (size: 3287 bytes)
// Symbol:    _ZN7grapher12ActorManager6UpdateEi
// Demangled: grapher::ActorManager::Update(int)
// ============================================================================
unsigned int grapher::ActorManager::Update(grapher::ActorManager::Self *self, int a2)
{
  unsigned int result;
  char *v3;
  uint32_t *v4;
  unsigned int v5;
  int v6;
  char *v7;
  unsigned int v8;
  bool v9;
  bool v10;
  int v11;
  unsigned int v12;
  char **v13;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  unsigned int v19;
  bool v20;
  bool v21;
  int v22;
  char *v23;
  unsigned int v24;
  bool v25;
  unsigned int v26;
  bool v27;
  bool v28;
  bool v29;
  char *v30;
  unsigned int v31;
  bool v32;
  char *v33;
  int v34;
  char *v35;
  unsigned int v36;
  bool v37;
  char *v38;
  bool v39;
  char *k;
  char *v41;
  unsigned int v42;
  bool v43;
  bool v44;
  char *v45;
  char *j;
  char *v47;
  unsigned int v48;
  bool v49;
  bool v50;
  bool v51;
  unsigned int v52;
  char *v53;
  char *v54;
  bool v55;
  char *i;
  char *v57;
  bool v58;
  bool v59;
  char *v60;
  unsigned int v61;
  bool v62;
  unsigned int v63;
  char *v64;
  bool v65;
  unsigned int v66;
  char *v67;
  bool v68;
  char *v69;
  char *v70;
  unsigned int v71;
  char *v72;
  char *v73;
  char v74;
  char *v75;
  char v76;
  unsigned int v77;
  char v78;
  char v79;
  char v80;
  char *v81;
  char v82;
  int v83;
  uint32_t *v84;
  int v85;
  int v86;
  unsigned int v87;
  char *v88;
  uint32_t *v89;
  unsigned int v90;
  char *v91;
  char *v92;
  unsigned int v93;
  char *v94;
  char *v95;

  if ( byte_20D6700 == 0 && _cxa_guard_acquire((__guard *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((__guard *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
  }
  result = *((uint32_t *)self + 17);
  v90 = *((uint32_t *)self + 16);
  if ( result == v90 )
  {
    v3 = (char *)self + 44;
  }
  else
  {
    result = -1431655765 * ((int)(result - v90) >> 2);
    v93 = result;
    if ( result != 0 )
    {
      v86 = 0;
      v85 = 0;
      v3 = (char *)self + 44;
      while ( 1 )
      {
        v4 = (uint32_t *)(v86 + v90);
        v5 = 0xFFFFFFFF;
        v6 = *(uint32_t *)(v86 + v90);
        v87 = *(uint32_t *)(v86 + v90 + 4);
        v83 = v6;
        if ( v6 != 0 )
          v5 = *(uint32_t *)(v6 + 4);
        result = v4[2];
        if ( result == 1 )
        {
          result = *((uint32_t *)self + 12);
          if ( result != 0 )
          {
            v18 = v3;
            do
            {
              while ( 1 )
              {
                v19 = *(uint32_t *)(result + 16);
                v20 = v5 > v19;
                if ( v5 == v19 )
                  v20 = v87 > *(uint32_t *)(result + 20);
                if ( v20 )
                  break;
                v18 = (char *)result;
                result = *(uint32_t *)(result + 8);
                if ( result == 0 )
                  goto LABEL_53;
              }
              result = *(uint32_t *)(result + 12);
            }
            while ( result != 0 );
LABEL_53:
            if ( v3 != v18 )
            {
              result = *((uint32_t *)v18 + 4);
              v21 = v5 < result;
              if ( v5 == result )
                v21 = v87 < *((uint32_t *)v18 + 5);
              if ( !v21 && v83 == *((uint32_t *)v18 + 6) )
              {
                v22 = sub_1904AE0(v18, v3);
                sub_4EB800(v22);
                result = *((uint32_t *)self + 16);
                --*((uint32_t *)self + 15);
                v90 = result;
              }
            }
          }
          goto LABEL_21;
        }
        if ( result == 2 )
        {
          if ( byte_20D5B50 == 0 )
          {
            result = _cxa_guard_acquire((__guard *)&byte_20D5B50);
            if ( result != 0 )
            {
              grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
              _cxa_guard_release((__guard *)&byte_20D5B50);
              result = __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
            }
          }
          if ( (*(uint8_t *)unk_20D5BE4) != 0 )
          {
            v13 = *((char ***)self + 25);
            v14 = (char *)self + 100;
            if ( v13 != (char **)((char *)self + 100) )
            {
              result = (unsigned int)(uintptr_t)(v3);
              while ( 1 )
              {
                v15 = *v13;
                if ( v13[3] == *(char **)(v86 + v90 + 4) )
                {
                  v77 = result;
                  v72 = v14;
                  sub_1901940(v13);
                  sub_4EB800((int)(uintptr_t)(v13));
                  v14 = v72;
                  result = v77;
                }
                if ( v14 == v15 )
                  break;
                v13 = (char **)v15;
              }
              v4 = (uint32_t *)(v86 + v90);
              v3 = (char *)result;
            }
          }
          v16 = *((char **)self + 13);
          if ( v16 == v3 )
          {
            v90 = *((uint32_t *)self + 16);
          }
          else
          {
            v84 = v4;
            while ( 1 )
            {
              result = sub_1904890(v16);
              v17 = (char *)result;
              if ( *((uint32_t *)v16 + 5) == v84[1] )
              {
                v34 = sub_1904AE0(v16, v3);
                result = sub_4EB800(v34);
                --*((uint32_t *)self + 15);
              }
              if ( v3 == v17 )
                break;
              v16 = v17;
            }
            v90 = *((uint32_t *)self + 16);
          }
          goto LABEL_21;
        }
        if ( result == 0 )
          break;
LABEL_21:
        ++v85;
        v86 += 12;
        if ( v85 == v93 )
          goto LABEL_22;
      }
      v88 = v3;
      v94 = *((char **)self + 12);
      if ( v94 != nullptr )
      {
        v7 = *((char **)self + 12);
        do
        {
          while ( 1 )
          {
            v8 = *((uint32_t *)v7 + 4);
            v9 = v5 > v8;
            if ( v5 == v8 )
              v9 = v87 > *((uint32_t *)v7 + 5);
            if ( v9 )
              break;
            v88 = v7;
            v7 = *((char **)v7 + 2);
            if ( v7 == nullptr )
              goto LABEL_17;
          }
          v7 = *((char **)v7 + 3);
        }
        while ( v7 != nullptr );
LABEL_17:
        if ( v88 != v3 )
        {
          result = *((uint32_t *)v88 + 4);
          v10 = v5 < result;
          if ( v5 == result )
          {
            result = (unsigned int)(uintptr_t)(v88);
            v10 = v87 < *((uint32_t *)v88 + 5);
          }
          if ( v10 )
          {
            v88 = v3;
            v23 = *((char **)self + 12);
            goto LABEL_61;
          }
          goto LABEL_21;
        }
        v23 = *((char **)self + 12);
        do
        {
          while ( 1 )
          {
LABEL_61:
            v24 = *((uint32_t *)v23 + 4);
            v25 = v5 > v24;
            if ( v5 == v24 )
              v25 = v87 > *((uint32_t *)v23 + 5);
            if ( v25 )
              break;
            v88 = v23;
            v23 = *((char **)v23 + 2);
            if ( v23 == nullptr )
              goto LABEL_65;
          }
          v23 = *((char **)v23 + 3);
        }
        while ( v23 != nullptr );
LABEL_65:
        v70 = v88;
        if ( v3 != v88 )
        {
          v26 = *((uint32_t *)v88 + 4);
          v27 = v5 < v26;
          if ( v5 == v26 )
            v27 = v87 < *((uint32_t *)v88 + 5);
          if ( !v27 )
            goto LABEL_84;
          if ( v5 == v26 )
            v28 = v87 < *((uint32_t *)v88 + 5);
          else
            v28 = v5 < v26;
          if ( !v28 )
          {
            v29 = v5 > v26;
            if ( v5 == v26 )
              v29 = v87 > *((uint32_t *)v88 + 5);
            if ( !v29 )
              goto LABEL_84;
            v91 = *((char **)self + 14);
            if ( v91 == v88 )
            {
              v68 = v5 < v26;
              if ( v5 == v26 )
                v68 = v87 < *((uint32_t *)v88 + 5);
              v82 = v68;
              v69 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v88 = v69;
              if ( v69 != (char *)-16 )
              {
                *((uint32_t *)v69 + 4) = v5;
                *((uint32_t *)v69 + 5) = v87;
                *((uint32_t *)v69 + 6) = 0;
              }
              sub_1904970(v82, v69, v91, v3);
              goto LABEL_83;
            }
            v71 = *((uint32_t *)v88 + 4);
            v30 = (char *)sub_19048E0(v88);
            v31 = *((uint32_t *)v30 + 4);
            v92 = v30;
            v32 = v5 < v31;
            if ( v5 == v31 )
              v32 = v87 < *((uint32_t *)v92 + 5);
            if ( v32 )
            {
              if ( *((uint32_t *)v88 + 3) == 0 )
              {
                v59 = v5 < v71;
                if ( v5 == v71 )
                  v59 = v87 < *((uint32_t *)v88 + 5);
                v79 = v59;
                v60 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                v88 = v60;
                if ( v60 != (char *)-16 )
                {
                  *((uint32_t *)v60 + 4) = v5;
                  *((uint32_t *)v60 + 5) = v87;
                  *((uint32_t *)v60 + 6) = 0;
                }
                sub_1904970(v79, v60, v70, v3);
                goto LABEL_83;
              }
              v33 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v88 = v33;
              if ( v33 != (char *)-16 )
              {
                *((uint32_t *)v33 + 4) = v5;
                *((uint32_t *)v33 + 5) = v87;
                *((uint32_t *)v33 + 6) = 0;
              }
LABEL_82:
              sub_1904970(1, v33, v92, v3);
LABEL_83:
              ++*((uint32_t *)self + 15);
              v83 = *v4;
LABEL_84:
              result = (unsigned int)(uintptr_t)(v88);
              *((uint32_t *)v88 + 6) = v83;
              v90 = *((uint32_t *)self + 16);
              goto LABEL_21;
            }
            for ( i = v94; ; i = v57 )
            {
              v48 = *((uint32_t *)i + 4);
              v58 = v5 < v48;
              if ( v5 == v48 )
                v58 = v87 < *((uint32_t *)v94 + 5);
              v57 = v58 ? *((char **)v94 + 2) : *((char **)v94 + 3);
              if ( v57 == nullptr )
                break;
              v94 = v57;
            }
            v88 = v94;
            if ( !v58 )
              goto LABEL_135;
            if ( *((char **)self + 13) == v94 )
              goto LABEL_166;
            goto LABEL_134;
          }
          v92 = *((char **)self + 13);
          if ( v92 == v88 )
          {
            v33 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v88 = v33;
            if ( v33 != (char *)-16 )
            {
              *((uint32_t *)v33 + 4) = v5;
              *((uint32_t *)v33 + 5) = v87;
              *((uint32_t *)v33 + 6) = 0;
            }
            goto LABEL_82;
          }
          v35 = (char *)sub_1904940(v88);
          v36 = *((uint32_t *)v35 + 4);
          v37 = v5 > v36;
          if ( v5 == v36 )
            v37 = v87 > *((uint32_t *)v35 + 5);
          if ( !v37 )
          {
            v89 = v4;
            for ( j = v94; ; j = v47 )
            {
              v48 = *((uint32_t *)j + 4);
              v49 = v5 < v48;
              if ( v5 == v48 )
                v49 = v87 < *((uint32_t *)j + 5);
              v47 = v49 ? *((char **)j + 2) : *((char **)j + 3);
              if ( v47 == nullptr )
                break;
            }
            v4 = v89;
            v94 = j;
            v88 = j;
            if ( !v49 )
              goto LABEL_135;
            if ( v92 == j )
            {
LABEL_166:
              v51 = true;
              if ( v3 != v94 )
              {
                v61 = *((uint32_t *)v94 + 4);
                v51 = v5 < v61;
                if ( v5 == v61 )
                  v51 = v87 < *((uint32_t *)v94 + 5);
              }
LABEL_141:
              v74 = v51;
              v53 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v88 = v53;
              if ( v53 != (char *)-16 )
              {
                *((uint32_t *)v53 + 4) = v5;
                *((uint32_t *)v53 + 5) = v87;
                *((uint32_t *)v53 + 6) = 0;
              }
              sub_1904970(v74, v53, v94, v3);
              goto LABEL_83;
            }
LABEL_134:
            v88 = (char *)sub_19048F0(v94);
            v48 = *((uint32_t *)v88 + 4);
LABEL_135:
            v50 = v5 > v48;
            if ( v5 == v48 )
              v50 = v87 > *((uint32_t *)v88 + 5);
            if ( !v50 )
              goto LABEL_84;
            v51 = true;
            if ( v3 != v94 )
            {
              v52 = *((uint32_t *)v94 + 4);
              v51 = v5 < v52;
              if ( v5 == v52 )
                v51 = v87 < *((uint32_t *)v94 + 5);
            }
            goto LABEL_141;
          }
          if ( *((uint32_t *)v35 + 3) != 0 )
          {
            v38 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v88 = v38;
            if ( v38 != (char *)-16 )
            {
              *((uint32_t *)v38 + 4) = v5;
              *((uint32_t *)v38 + 5) = v87;
              *((uint32_t *)v38 + 6) = 0;
            }
            sub_1904970(1, v38, v70, v3);
            goto LABEL_83;
          }
LABEL_118:
          v44 = true;
          if ( v3 != v35 )
          {
            v44 = v5 < v36;
            if ( v5 == v36 )
              v44 = v87 < *((uint32_t *)v35 + 5);
          }
          v73 = v35;
          v78 = v44;
          v45 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v88 = v45;
          if ( v45 != (char *)-16 )
          {
            *((uint32_t *)v45 + 4) = v5;
            *((uint32_t *)v45 + 5) = v87;
            *((uint32_t *)v45 + 6) = 0;
          }
          sub_1904970(v78, v45, v73, v3);
          goto LABEL_83;
        }
      }
      if ( *((uint32_t *)self + 15) != 0 )
      {
        v35 = *((char **)self + 14);
        v36 = *((uint32_t *)v35 + 4);
        v39 = v5 > v36;
        if ( v5 == v36 )
          v39 = v87 > *((uint32_t *)v35 + 5);
        if ( v39 )
          goto LABEL_118;
        v88 = v3;
      }
      if ( v94 != nullptr )
      {
        for ( k = *((char **)self + 12); ; k = v41 )
        {
          v42 = *((uint32_t *)k + 4);
          v43 = v5 < v42;
          if ( v5 == v42 )
            v43 = v87 < *((uint32_t *)k + 5);
          v41 = v43 ? *((char **)k + 2) : *((char **)k + 3);
          if ( v41 == nullptr )
            break;
        }
        v4 = (uint32_t *)(v86 + v90);
        v95 = k;
        if ( !v43 )
          goto LABEL_147;
      }
      else
      {
        v95 = v88;
      }
      if ( *((char **)self + 13) == v95 )
      {
        v65 = true;
        if ( v3 != v95 )
        {
          v66 = *((uint32_t *)v95 + 4);
          v65 = v5 < v66;
          if ( v5 == v66 )
            v65 = v87 < *((uint32_t *)v95 + 5);
        }
        v76 = v65;
        v67 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v67 != (char *)-16 )
        {
          *((uint32_t *)v67 + 4) = v5;
          *((uint32_t *)v67 + 5) = v87;
          *((uint32_t *)v67 + 6) = 0;
        }
        v81 = v67;
        sub_1904970(v76, v67, v95, v3);
        ++*((uint32_t *)self + 15);
        v83 = *v4;
        v95 = v81;
        goto LABEL_150;
      }
      v54 = (char *)sub_19048F0(v95);
      k = v95;
      v42 = *((uint32_t *)v54 + 4);
      v95 = v54;
LABEL_147:
      v55 = v5 > v42;
      if ( v5 == v42 )
        v55 = v87 > *((uint32_t *)v95 + 5);
      if ( v55 )
      {
        v62 = true;
        if ( v3 != k )
        {
          v63 = *((uint32_t *)k + 4);
          v62 = v5 < v63;
          if ( v5 == v63 )
            v62 = v87 < *((uint32_t *)k + 5);
        }
        v75 = k;
        v80 = v62;
        v64 = (char *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v95 = v64;
        if ( v64 != (char *)-16 )
        {
          *((uint32_t *)v64 + 4) = v5;
          *((uint32_t *)v64 + 5) = v87;
          *((uint32_t *)v64 + 6) = 0;
        }
        sub_1904970(v80, v64, v75, v3);
        ++*((uint32_t *)self + 15);
        v83 = *v4;
      }
LABEL_150:
      v88 = v95;
      goto LABEL_84;
    }
    v3 = (char *)self + 44;
LABEL_22:
    *((uint32_t *)self + 17) = v90;
  }
  if ( byte_20D5B50 == 0 )
  {
    result = _cxa_guard_acquire((__guard *)&byte_20D5B50);
    if ( result != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((__guard *)&byte_20D5B50);
      result = __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
  }
  if ( (*(uint8_t *)unk_20D5BE4) != 0 )
  {
    for ( result = *((uint32_t *)self + 25);
          (grapher::ActorManager::Self *)result != (grapher::ActorManager::Self *)((char *)self + 100);
          result = *((uint32_t *)self + 25) )
    {
      G4_MEM_CALL((uintptr_t)(grapher::ActorBase::_FireEvent), 
        *(grapher::ActorBase::Self **)(result + 8),
        *(grapher::ActorBase::Self ***)(result + 16),
        *(grapher::ActorContext::Self **)(result + 12));
      v11 = *((uint32_t *)self + 25);
      sub_1901940(v11);
      sub_4EB800(v11);
    }
  }
  v12 = *((uint32_t *)self + 13);
  if ( (char *)v12 != v3 )
  {
    do
    {
      (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(v12 + 24) + 24))(
        *(uint32_t *)(v12 + 24),
        a2,
        *(uint32_t *)(v12 + 20));
      result = sub_1904890(v12);
      v12 = result;
    }
    while ( v3 != (char *)result );
  }
  return result;
}


// ============================================================================
// Address:   0x13c90e0 (size: 842 bytes)
// Symbol:    _ZN7grapher12ActorManager19GenerateXMLTemplateEv
// Demangled: grapher::ActorManager::GenerateXMLTemplate(void)
// ============================================================================
void grapher::ActorManager::GenerateXMLTemplate(grapher::ActorManager::Self *self)
{
  uint32_t *i;
  int (*v2)(int, int *, int);
  uint32_t *v3;
  void *v4;
  void *v5;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef grapher::ActorManager::Self *_g4_t_v9;
  typedef char _g4_t_v10;
  typedef int _g4_t_v11[4];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[3];
  typedef uint32_t _g4_t_v16[56];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (58u + sizeof(_g4_t_v10)) > _g4_s3 ? (58u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v11)) > _g4_s4 ? (60u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v12)) > _g4_s5 ? (76u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v13)) > _g4_s6 ? (80u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v14)) > _g4_s7 ? (84u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v15)) > _g4_s8 ? (88u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v16)) > _g4_s9 ? (100u + sizeof(_g4_t_v16)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 58u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 76u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 80u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 84u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 88u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 100u);

  v16[52] = (uint32_t)(uintptr_t)(&self);
  v9 = self;
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((__guard *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  if ( (dword_20D5BE0 & 4) == 0 )
  {
    v11[0] = (int)(uintptr_t)(&dword_213B814);
    grapher::ActorBase::SetNewFileId((grapher::ActorBase::Self *)0xFFFFFFFE);
    grapher::ActorVariable::SetNewFileId((grapher::ActorVariable::Self *)0xFFFFFFFE, v7);
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((__guard *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((__guard *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
    }
    g4_std_compat::string_assign((int)(uintptr_t)(v11), "<actors>\n", 9u);
    for ( i = *((uint32_t **)v9 + 4); i != (uint32_t *)((char *)v9 + 8); i = (uint32_t *)sub_1904890(i) )
    {
      v2 = (int (*)(int, int *, int))i[5];
      sub_B7CCD0(&v12);
      g4_std_compat::string_construct_copy(&v13, i + 4);
      v3 = (uint32_t *)v2(-1, &v13, v12);
      v4 = (void *)(v13 - 12);
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std_compat::string_rep_destroy(v4);
      }
      if ( v3 != nullptr )
      {
        grapher::ActorBase::GenerateXMLTemplate((grapher::ActorBase::Self *)&v14, v3);
        g4_std::string::append_str(v11, &v14);
        v5 = (void *)(v14 - 12);
        if ( (uint32_t *)(v14 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) > 0 )
        {
          (*(void (**)(uint32_t *, int))(*v3 + 4))(v3, v8);
        }
        else
        {
          g4_std_compat::string_rep_destroy(v5);
          (*(void (**)(uint32_t *, char *))(*v3 + 4))(v3, &v10);
        }
      }
    }
    g4_std_compat::string_append((int)(uintptr_t)(v11), "</actors>\n", 0xAu);
    sub_B7F7C0((int)(uintptr_t)(v16));
    sub_B7F870(v15, (int)(uintptr_t)(v16), (char *)v11[0], 0x74u);
    sub_B80BD0((int)(uintptr_t)(v16), *((uint32_t *)v9 + 35), "\t", 1, 0);
    sub_B7F610((int)(uintptr_t)(v16));
    v6 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy(v6);
    }
  }
}


// ============================================================================
// Address:   0x13c9430 (size: 177 bytes)
// Symbol:    _ZN7grapher12ActorManager19GenerateBinaryFilesERKSs
// Demangled: grapher::ActorManager::GenerateBinaryFiles(std::string const&)
// ============================================================================
int grapher::ActorManager::GenerateBinaryFiles(int a1, const char **a2)
{
  int result;
  __guard **i;
  __guard *v4;

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((__guard *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  result = dword_20D5BE0 & 5;
  if ( result != 5 )
  {
    for ( i = *(__guard ***)(a1 + 28); i != *(__guard ***)(a1 + 32); result = grapher::ActorFile::Save(v4, a2) )
      v4 = *i++;
  }
  return result;
}


// ============================================================================
// Address:   0x13c94f0 (size: 673 bytes)
// Symbol:    _ZN7grapher12ActorManager7AddFileEPKc
// Demangled: grapher::ActorManager::AddFile(char const*)
// ============================================================================
grapher::ActorFile::Self *grapher::ActorManager::AddFile(grapher::ActorFile::Self ***self, char *a2)
{
  grapher::ActorFile::Self *v_actorFile;
  void *v3;
  void *v5;
  grapher::ActorFile::Self **v6;
  int v7;
  unsigned int v8;
  size_t v9;
  unsigned int v10;
  grapher::ActorFile::Self **v11;
  grapher::ActorFile::Self **v12;
  grapher::ActorFile::Self **v13;
  grapher::ActorFile::Self **v14;
  grapher::ActorFile::Self **v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef grapher::ActorFile::Self **_g4_t_v18;
  typedef grapher::ActorFile::Self **_g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v23)) > _g4_s7 ? (36u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v24)) > _g4_s8 ? (40u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v25)) > _g4_s9 ? (44u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v24), a2, (int)(uintptr_t)(&v23));
  v_actorFile = (grapher::ActorFile::Self *)grapher::ActorManager::GetActorFile(self, &v24);
  v3 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v3);
  }
  if ( v_actorFile == nullptr )
  {
    v16 = *(self + 8) - *(self + 7);
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v25), a2, (int)(uintptr_t)(&v23) + 2);
    v_actorFile = (grapher::ActorFile::Self *)gll_operator_new(
                                        0x3Cu,
                                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorManager.cpp"),
                                        520);
    grapher::ActorFile::Construct(v_actorFile, self, v16, v25);
    v5 = (void *)(v25[0] - 12);
    if ( (uint32_t *)(v25[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy(v5);
    }
    v6 = *(self + 8);
    if ( v6 != *(self + 9) )
    {
      v7 = 0;
      if ( v6 != nullptr )
      {
        *v6 = v_actorFile;
        v7 = (int)(uintptr_t)(*(self + 8));
      }
      *(self + 8) = (grapher::ActorFile::Self **)(v7 + 4);
LABEL_9:
      grapher::ActorFile::Load(v_actorFile, false);
      return v_actorFile;
    }
    v8 = v6 - *(self + 7);
    v9 = 4;
    v10 = 1;
    if ( v8 != 0 )
    {
      v10 = 2 * v8;
      if ( v8 > 2 * v8 || v10 > 0x3FFFFFFF )
      {
        v9 = 0xFFFFFFFC;
        v22 = 0x3FFFFFFF;
        goto LABEL_12;
      }
      v9 = 8 * v8;
    }
    v22 = v10;
LABEL_12:
    v17 = v6 - *(self + 7);
    v20 = gll_operator_new(v9, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v11 = (grapher::ActorFile::Self **)(v20 + 4 * v17);
    if ( v11 != nullptr )
      *v11 = v_actorFile;
    v18 = *(self + 7);
    v12 = (grapher::ActorFile::Self **)v20;
    if ( v6 != v18 )
    {
      v13 = *(self + 7);
      do
      {
        if ( v12 != nullptr )
          *v12 = *v13;
        ++v13;
        ++v12;
      }
      while ( v6 != v13 );
      v12 = (grapher::ActorFile::Self **)(v20 + 4 * ((unsigned int)((char *)v6 - (char *)(v18 + 1)) >> 2) + 4);
    }
    v19 = v12 + 1;
    v21 = (char *)*(self + 8);
    if ( v6 != (grapher::ActorFile::Self **)v21 )
    {
      v14 = v6;
      v15 = v12 + 1;
      do
      {
        if ( v15 != nullptr )
          *v15 = *v14;
        ++v14;
        ++v15;
      }
      while ( v21 != (char *)v14 );
      v19 += ((unsigned int)(v21 - (char *)(v6 + 1)) >> 2) + 1;
    }
    if ( *(self + 7) != nullptr )
      sub_4EB800((int)(uintptr_t)(*(self + 7)));
    *(self + 7) = (grapher::ActorFile::Self **)v20;
    *(self + 8) = v19;
    *(self + 9) = (grapher::ActorFile::Self **)(v20 + 4 * v22);
    goto LABEL_9;
  }
  return v_actorFile;
}


// ============================================================================
// Address:   0x13c97a0 (size: 196 bytes)
// Symbol:    _ZN7grapher12ActorManager8LoadFileEPKcb
// Demangled: grapher::ActorManager::LoadFile(char const*,bool)
// ============================================================================
int grapher::ActorManager::LoadFile(grapher::ActorFile::Self ***self, char *a2, bool a3)
{
  grapher::ActorFile::Self *v_actorFile;
  void *v4;
  typedef grapher::ActorFile::Self *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v7)) > _g4_s1 ? (26u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 26u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v8), a2, (int)(uintptr_t)(&v7));
  v_actorFile = (grapher::ActorFile::Self *)grapher::ActorManager::GetActorFile((int)(uintptr_t)(self), (int)(uintptr_t)(v8));
  v4 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = v_actorFile;
    g4_std_compat::string_rep_destroy(v4);
    v_actorFile = v6;
  }
  if ( v_actorFile == nullptr )
    v_actorFile = grapher::ActorManager::AddFile(self, a2);
  return grapher::ActorFile::Load(v_actorFile, a3);
}


// ============================================================================
// Address:   0x13c9870 (size: 162 bytes)
// Symbol:    _ZN7grapher12ActorManager9UnloadAllEv
// Demangled: grapher::ActorManager::UnloadAll(void)
// ============================================================================
void grapher::ActorManager::UnloadAll(grapher::ActorManager::Self *self)
{
  __guard **i;
  __guard *v2;

  if ( byte_20D6700 == 0 && _cxa_guard_acquire((__guard *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((__guard *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
  }
  for ( i = *((__guard ***)self + 7); i != *((__guard ***)self + 8); ++i )
  {
    v2 = *i;
    grapher::ActorFile::Unload((grapher::ActorFile::Self *)v2, nullptr);
  }
}


// ============================================================================
// Address:   0x13c9920 (size: 396 bytes)
// Symbol:    _ZN7grapher12ActorManager11UnloadActorEPNS_9ActorBaseE
// Demangled: grapher::ActorManager::UnloadActor(grapher::ActorBase *)
// ============================================================================
void grapher::ActorManager::UnloadActor(grapher::ActorManager::Self *self, grapher::ActorBase::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  grapher::ActorManager::Self *v6;
  grapher::ActorBase::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int i;
  grapher::ActorBase::Self **v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  uint32_t *v19;
  void *v20;
  grapher::ActorBase::Self *v21;
  uint32_t *v22;

  v2 = *((uint32_t *)self + 13);
  v3 = (char *)self + 44;
  if ( (grapher::ActorManager::Self *)((char *)self + 44) != (grapher::ActorManager::Self *)v2 )
  {
    do
    {
      v4 = sub_1904890(v2);
      v5 = v4;
      if ( *(grapher::ActorBase::Self **)(v2 + 24) == a2 )
      {
        v14 = sub_1904AE0(v2, v3);
        sub_4EB800(v14);
        --*((uint32_t *)self + 15);
        v2 = v5;
      }
      else
      {
        v2 = v4;
      }
    }
    while ( v3 != (char *)v2 );
  }
  v6 = self;
  v7 = a2;
  v8 = *((uint32_t *)self + 17);
  v9 = *((uint32_t *)self + 16);
  if ( -1431655765 * ((v8 - v9) >> 2) != 0 )
  {
    v10 = *((uint32_t *)self + 17);
    v11 = 0;
    for ( i = *((uint32_t *)self + 16); ; v9 = i )
    {
      v13 = (grapher::ActorBase::Self **)(v9 + 12 * v11);
      if ( a2 == *v13 )
      {
        --v11;
        *v13 = *(grapher::ActorBase::Self **)(v8 - 12);
        v13[1] = *(grapher::ActorBase::Self **)(v8 - 8);
        v13[2] = *(grapher::ActorBase::Self **)(v8 - 4);
        i = *((uint32_t *)self + 16);
        v10 = *((uint32_t *)self + 17) - 12;
        *((uint32_t *)self + 17) = v10;
      }
      if ( ++v11 >= (unsigned int)(-1431655765 * ((v10 - i) >> 2)) )
        break;
      v8 = v10;
    }
    v7 = a2;
    v6 = self;
  }
  v15 = *((uint32_t *)v6 + 22);
  v21 = v7;
  v16 = (char *)v6 + 80;
  if ( (grapher::ActorManager::Self *)((char *)v6 + 80) != (grapher::ActorManager::Self *)v15 )
  {
    do
    {
      v17 = sub_1904890(v15);
      v18 = v17;
      if ( v21 == *(grapher::ActorBase::Self **)(v15 + 20) )
      {
        v20 = (void *)sub_1904AE0(v15, v16);
        operator delete(v20);
        --*((uint32_t *)self + 24);
        v15 = v18;
      }
      else
      {
        v15 = v17;
      }
    }
    while ( v16 != (char *)v15 );
  }
  v19 = *((uint32_t **)self + 25);
  while ( (uint32_t *)((char *)self + 100) != v19 )
  {
    if ( v21 == (grapher::ActorBase::Self *)v19[2] )
    {
      v22 = (uint32_t *)*v19;
      sub_1901940(v19);
      sub_4EB800((int)(uintptr_t)(v19));
      v19 = v22;
    }
    else
    {
      v19 = (uint32_t *)*v19;
    }
  }
}


// ============================================================================
// Address:   0x13c9b40 (size: 2831 bytes)
// Symbol:    _ZN7grapher12ActorManager20ValidateWithTemplateERKSs
// Demangled: grapher::ActorManager::ValidateWithTemplate(std::string const&)
// ============================================================================
int grapher::ActorManager::ValidateWithTemplate(int a1, int *a2)
{
  int result;
  uint8_t v3;
  int v4;
  size_t v5;
  size_t v6;
  size_t v7;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  void *v13;
  char *v14;
  int (*v15)(int, int *, int);
  void *v16;
  int NumProperties;
  int v18;
  uint8_t *v19;
  int v20;
  size_t v21;
  const void **v22;
  int v23;
  const void *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char *v29;
  char *v30;
  int j;
  volatile int32_t *v32;
  uint32_t *v33;
  void *v34;
  uint32_t *v35;
  void *v36;
  size_t v37;
  void *v38;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef uint8_t *_g4_t_v42;
  typedef uint8_t *_g4_t_v43;
  typedef uint8_t *_g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef int _g4_t_i;
  typedef void *_g4_t_v53;
  typedef char *_g4_t_format;
  typedef grapher::ActorBase::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef const void **_g4_t_v57;
  typedef void *_g4_t_s2;
  typedef int _g4_t_s2a;
  typedef int _g4_t_s2b;
  typedef uint32_t _g4_t_v61[3];
  typedef uint32_t _g4_t_v62[4];
  typedef uint32_t _g4_t_v63[4];
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef void *_g4_t_v68[4];
  typedef void *_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v72[3];
  typedef uint32_t *_g4_t_v73[56];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v41)) > _g4_s2 ? (4u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v42)) > _g4_s3 ? (4u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v43)) > _g4_s4 ? (4u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v44)) > _g4_s5 ? (4u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v45)) > _g4_s6 ? (8u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v46)) > _g4_s7 ? (8u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v47)) > _g4_s8 ? (8u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (19u + sizeof(_g4_t_v48)) > _g4_s9 ? (19u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v49)) > _g4_s10 ? (24u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v50)) > _g4_s11 ? (28u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v51)) > _g4_s12 ? (32u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_i)) > _g4_s13 ? (36u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v53)) > _g4_s14 ? (40u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_format)) > _g4_s15 ? (44u + sizeof(_g4_t_format)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v55)) > _g4_s16 ? (48u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v56)) > _g4_s17 ? (52u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v57)) > _g4_s18 ? (52u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_s2)) > _g4_s19 ? (56u + sizeof(_g4_t_s2)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_s2a)) > _g4_s20 ? (56u + sizeof(_g4_t_s2a)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_s2b)) > _g4_s21 ? (56u + sizeof(_g4_t_s2b)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v61)) > _g4_s22 ? (60u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v62)) > _g4_s23 ? (80u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v63)) > _g4_s24 ? (96u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v64)) > _g4_s25 ? (112u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v65)) > _g4_s26 ? (116u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v66)) > _g4_s27 ? (120u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v67)) > _g4_s28 ? (124u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v68)) > _g4_s29 ? (128u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v69)) > _g4_s30 ? (144u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v70)) > _g4_s31 ? (148u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v71)) > _g4_s32 ? (152u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v72)) > _g4_s33 ? (156u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v73)) > _g4_s34 ? (168u + sizeof(_g4_t_v73)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 19u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 56u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 56u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 144u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 148u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 152u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 156u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);

  result = 0;
  v73[52] = (uint32_t *)(&a1);
  v50 = a1;
  v49 = a2;
  if ( (*(uint32_t *)(a1 + 128) & 0x11) == 0x11 )
  {
    sub_B7F7C0((int)(uintptr_t)(v73));
    sub_B80300(v72, v73, *v49, 0x74u, 0);
    v3 = 0;
    if ( v72[0] != 0 )
      goto LABEL_3;
    sub_B7CE80(&v65, (int)(uintptr_t)(v73), (glf::Self *)"actors");
    sub_B7CE80(&v64, (int)(uintptr_t)(&v65), (glf::Self *)"template");
    v48 = 0;
LABEL_5:
    if ( pugi::xml_node::child(&v64) != -1 )
    {
      v62[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      if ( (uint8_t)grapher::GetAttr((int)(uintptr_t)(v62), v64, (glf::Self *)"name") == 0 )
      {
        printf("[grapher][warning] actor template %s not found in code\n", v62[0]);
        goto LABEL_87;
      }
      v4 = *(uint32_t *)(v50 + 12);
      if ( v4 == 0 )
      {
        s2 = (void *)v62[0];
LABEL_90:
        printf("[grapher][warning] template %s not found in code\n", s2);
LABEL_87:
        v38 = (void *)(v62[0] - 12);
        if ( (uint32_t *)(v62[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std_compat::string_rep_destroy(v38);
        }
        goto LABEL_76;
      }
      s2 = (void *)v62[0];
      v56 = v50 + 8;
      v5 = *(uint32_t *)(v62[0] - 12);
      do
      {
        while ( 1 )
        {
          v6 = v5;
          v7 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
          v40 = v5;
          if ( v7 <= v5 )
            v6 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
          v8 = memcmp(*(const void **)(v4 + 16), s2, v6);
          v5 = v40;
          v9 = v7 - v40;
          if ( v8 == 0 )
            v8 = v9;
          if ( v8 < 0 )
            break;
          v56 = v4;
          v4 = *(uint32_t *)(v4 + 8);
          if ( v4 == 0 )
            goto LABEL_16;
        }
        v4 = *(uint32_t *)(v4 + 12);
      }
      while ( v4 != 0 );
LABEL_16:
      if ( v50 + 8 == v56 )
        goto LABEL_90;
      v10 = v40;
      v11 = *(uint32_t *)(*(uint32_t *)(v56 + 16) - 12);
      if ( v11 <= v40 )
        v10 = *(uint32_t *)(*(uint32_t *)(v56 + 16) - 12);
      v12 = memcmp(s2, *(const void **)(v56 + 16), v10);
      if ( v12 == 0 )
        v12 = v40 - v11;
      if ( v12 < 0 )
        goto LABEL_90;
      v69 = nullptr;
      v70 = nullptr;
      v71 = nullptr;
      sub_B7CE80(v68, (int)(uintptr_t)(&v64), (glf::Self *)"property");
      while ( pugi::xml_node::child(v68) != -1 )
      {
        v63[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        if ( (uint8_t)grapher::GetAttr((int)(uintptr_t)(v63), (char)(uintptr_t)(v68)[0], (glf::Self *)"Name") != 0 )
        {
          if ( v70 == v71 )
          {
            sub_13C5D90((int *)&v69, v70, (int)(uintptr_t)(v63));
          }
          else
          {
            v14 = nullptr;
            if ( v70 != nullptr )
            {
              g4_std_compat::string_construct_copy(v70, v63);
              v14 = v70;
            }
            v70 = v14 + 4;
          }
        }
        v13 = (void *)(v63[0] - 12);
        if ( (uint32_t *)(v63[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std_compat::string_rep_destroy(v13);
        }
        pugi::xml_node::next_sibling(v61, (int)(uintptr_t)(v68));
        v68[0] = (void *)v61[0];
      }
      v15 = *(int (**)(int, int *, int))(v56 + 20);
      sub_B7CCD0(&v66);
      g4_std_compat::string_construct_copy(&v67, v62);
      v55 = (grapher::ActorBase::Self *)v15(-1, &v67, v66);
      v16 = (void *)(v67 - 12);
      if ( (uint32_t *)(v67 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std_compat::string_rep_destroy(v16);
      }
      NumProperties = grapher::ActorBase::GetNumProperties(v55);
      if ( NumProperties != (v70 - (char *)((uint8_t *)v69)) >> 2 )
      {
        v18 = grapher::ActorBase::GetNumProperties(v55);
        printf(
          "[grapher][error] actor=%s has wrong number of properties xml=%d exe=%d\n",
          v62[0],
          (v70 - (char *)((uint8_t *)v69)) >> 2,
          v18);
        v48 = 1;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= grapher::ActorBase::GetNumProperties(v55) )
        {
          v29 = v70;
          v30 = (char *)v69;
          s2b = 0;
          if ( v70 - (char *)((uint8_t *)v69) > 3 )
          {
            do
            {
              for ( j = 0; j < grapher::ActorBase::GetNumProperties(v55); ++j )
              {
                grapher::ActorBase::GetPropertyName((grapher::ActorBase::Self *)v68, (int)(uintptr_t)(v55), s2b);
                v32 = (volatile int32_t *)v68[0];
                v33 = *((uint32_t **)v69 + s2b);
                if ( *((uint32_t *)v68[0] - 3) == *(v33 - 3) && memcmp(v68[0], v33, *((uint32_t *)v68[0] - 3)) == 0 )
                {
                  if ( v32 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
                    g4_std_compat::string_rep_destroy((void *)(v32 - 3));
                  break;
                }
                if ( v32 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
                  g4_std_compat::string_rep_destroy((void *)(v32 - 3));
              }
              if ( j == grapher::ActorBase::GetNumProperties(v55) )
              {
                printf(
                  "[grapher][error] actor %s property %s located in %s was not found inside exe\n",
                  v62[0],
                  *((uint32_t *)v69 + s2b),
                  *v49);
                v48 = 1;
              }
              v29 = v70;
              v30 = (char *)v69;
              ++s2b;
            }
            while ( s2b < (v70 - (char *)((uint8_t *)v69)) >> 2 );
          }
          v34 = v30;
          if ( v30 != v29 )
          {
            do
            {
              v35 = (uint32_t *)(*(uint32_t *)v30 - 12);
              if ( v35 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v30 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std_compat::string_rep_destroy(v35);
              }
              v30 += 4;
            }
            while ( v29 != v30 );
            v34 = v69;
          }
          if ( v34 != nullptr )
            operator delete(v34);
          v36 = (void *)(v62[0] - 12);
          if ( (uint32_t *)(v62[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std_compat::string_rep_destroy(v36);
          }
LABEL_76:
          pugi::xml_node::next_sibling(v61, (int)(uintptr_t)(&v64));
          v64 = v61[0];
          goto LABEL_5;
        }
        grapher::ActorBase::GetPropertyName((grapher::ActorBase::Self *)v68, (int)(uintptr_t)(v55), i);
        v19 = (uint8_t *)(v69);
        v51 = v70;
        v20 = (v70 - (char *)((uint8_t *)v69)) >> 2;
        s2a = (v70 - (char *)((uint8_t *)v69)) >> 4;
        format = (char *)v68[0];
        if ( s2a > 0 )
        {
          v21 = *((uint32_t *)v68[0] - 3);
          v22 = (const void **)v69;
          while ( 1 )
          {
            if ( *((uint32_t *)*v22 - 3) == v21 )
            {
              v41 = v19;
              v25 = memcmp(*v22, format, v21);
              v19 = v41;
              if ( v25 == 0 )
                goto LABEL_44;
            }
            v23 = (char *)v22 - (char *)(v19);
            v57 = v22;
            s1 = (void *)v22[1];
            if ( *((uint32_t *)s1 - 3) == v21 )
            {
              v42 = v19;
              v46 = (char *)v22 - (char *)(v19);
              v26 = memcmp(s1, format, v21);
              v19 = v42;
              v23 = v46;
              if ( v26 == 0 )
              {
                ++v22;
                goto LABEL_44;
              }
            }
            v22 += 2;
            v53 = *(void **)&v19[v23 + 8];
            if ( *((uint32_t *)v53 - 3) == v21 )
            {
              v43 = v19;
              v47 = v23;
              v27 = memcmp(v53, format, v21);
              v19 = v43;
              v23 = v47;
              if ( v27 == 0 )
                goto LABEL_44;
            }
            v24 = *(const void **)&v19[v23 + 12];
            v22 = v57 + 3;
            if ( *((uint32_t *)v24 - 3) == v21 )
            {
              v44 = v19;
              v28 = memcmp(v24, format, v21);
              v19 = v44;
              if ( v28 == 0 )
                goto LABEL_44;
            }
            v22 = v57 + 4;
            if ( --s2a == 0 )
            {
              v20 = (v51 - (char *)v22) >> 2;
              goto LABEL_54;
            }
          }
        }
        v22 = (const void **)v69;
LABEL_54:
        if ( v20 == 2 )
          break;
        if ( v20 == 3 )
        {
          v37 = *((uint32_t *)format - 3);
          if ( *((uint32_t *)*v22 - 3) == v37 && memcmp(*v22, format, *((uint32_t *)format - 3)) == 0 )
            goto LABEL_44;
          ++v22;
          goto LABEL_83;
        }
        if ( v20 != 1 )
        {
          v22 = (const void **)v51;
          goto LABEL_44;
        }
        v37 = *((uint32_t *)format - 3);
LABEL_78:
        if ( *((uint32_t *)*v22 - 3) != v37 || memcmp(*v22, format, v37) != 0 )
        {
LABEL_80:
          printf("[grapher][error] actor %s property %s located in exe was not found in %s\n", v62[0], format, *v49);
          v48 = 1;
          format = (char *)v68[0];
          goto LABEL_45;
        }
LABEL_44:
        if ( v51 == (char *)v22 )
          goto LABEL_80;
LABEL_45:
        if ( format - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)format - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std_compat::string_rep_destroy(format - 12);
        }
      }
      v37 = *((uint32_t *)format - 3);
LABEL_83:
      if ( *((uint32_t *)*v22 - 3) == v37 && memcmp(*v22, format, v37) == 0 )
        goto LABEL_44;
      ++v22;
      goto LABEL_78;
    }
    v3 = v48 ^ 1;
LABEL_3:
    v45 = v3;
    sub_B7F610((int)(uintptr_t)(v73));
    return v45;
  }
  return result;
}


// ============================================================================
// Address:   0x13ca650 (size: 205 bytes)
// Symbol:    _ZN7grapher12ActorManager4InitEv
// Demangled: grapher::ActorManager::Init(void)
// ============================================================================
int grapher::ActorManager::Init(grapher::ActorManager::Self *self)
{
  void *obj;

  grapher::ActorBase::SetNewFileId((grapher::ActorBase::Self *)0xFFFFFFFF);
  grapher::ActorVariable::SetNewFileId((grapher::ActorVariable::Self *)0xFFFFFFFF, (int)(uintptr_t)(obj));
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((__guard *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((__guard *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
  }
  Game::Grapher::RegisterAllGameActors((int)(uintptr_t)(self), 1);
  return grapher::ActorManager::ValidateWithTemplate((int)(uintptr_t)(self), (int *)self + 35);
}


// ============================================================================
// Address:   0x13ca720 (size: 290 bytes)
// Symbol:    _ZNK7grapher12ActorManager8NewActorERKSsN4pugi8xml_nodeEj
// Demangled: grapher::ActorManager::NewActor(std::string const&,pugi::xml_node,unsigned int)const
// ============================================================================
int grapher::ActorManager::NewActor(int a1, void **a2, int a3, int a4)
{
  int v4;
  int v5;
  size_t v6;
  size_t n;
  size_t v8;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  int v14;
  int (*v15)(int, uint32_t *, int);
  void *v16;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_s2)) > _g4_s0 ? (4u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v20)) > _g4_s2 ? (28u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v4 = 0;
  v5 = *(uint32_t *)(a1 + 12);
  if ( v5 != 0 )
  {
    v19 = a1 + 8;
    s2 = *a2;
    v6 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        n = v6;
        v8 = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
        if ( v8 <= v6 )
          n = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
        v9 = v8 - v6;
        v10 = memcmp(*(const void **)(v5 + 16), s2, n);
        if ( v10 != 0 )
          v9 = v10;
        if ( v9 < 0 )
          break;
        v19 = v5;
        v5 = *(uint32_t *)(v5 + 8);
        if ( v5 == 0 )
          goto LABEL_10;
      }
      v5 = *(uint32_t *)(v5 + 12);
    }
    while ( v5 != 0 );
LABEL_10:
    v4 = 0;
    if ( a1 + 8 != v19 )
    {
      v11 = v6;
      v12 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
      if ( v12 <= v6 )
        v11 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
      v13 = v6 - v12;
      v14 = memcmp(s2, *(const void **)(v19 + 16), v11);
      if ( v14 == 0 )
        v14 = v13;
      if ( v14 >= 0 )
      {
        v15 = *(int (**)(int, uint32_t *, int))(v19 + 20);
        g4_std_compat::string_construct_copy(v20, a2);
        v4 = v15(a4, v20, a3);
        v16 = (void *)(v20[0] - 12);
        if ( (uint32_t *)(v20[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std_compat::string_rep_destroy(v16);
        }
      }
    }
  }
  return v4;
}


// ============================================================================
// Address:   0x13ca850 (size: 141 bytes)
// Symbol:    _ZN7grapher12ActorManager6UnloadEPKcPNS_12ActorContextE
// Demangled: grapher::ActorManager::Unload(char const*,grapher::ActorContext *)
// ============================================================================
grapher::ActorFile::Self *grapher::ActorManager::Unload(
        grapher::ActorManager::Self *self,
        char *a2,
        grapher::ActorContext::Self *a3)
{
  grapher::ActorFile::Self *result;
  void *v4;
  typedef grapher::ActorFile::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v6)) > _g4_s1 ? (26u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 26u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v7), a2, (int)(uintptr_t)(&v6));
  result = (grapher::ActorFile::Self *)grapher::ActorManager::GetActorFile((int)(uintptr_t)(self), (int)(uintptr_t)(v7));
  v4 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = result;
    g4_std_compat::string_rep_destroy(v4);
    result = v5;
  }
  if ( result != nullptr )
    return (grapher::ActorFile::Self *)grapher::ActorFile::Unload(result, a3);
  return result;
}


// ============================================================================
// Address:   0x13ca8e0 (size: 436 bytes)
// Symbol:    _ZN7grapher12ActorManager23LoadActorsFromFilesListERKSt6vectorISsSaISsEEbPKc
// Demangled: grapher::ActorManager::LoadActorsFromFilesList(std::vector<std::string,std::allocator<std::string>> const&,bool,char const*)
// ============================================================================
int grapher::ActorManager::LoadActorsFromFilesList(grapher::ActorFile::Self ***self, char ***a2, bool a3, char *s)
{
  char **i;
  char *v6;
  size_t v7;
  void *v8;
  grapher::ActorFile::Self *v9;
  typedef size_t _g4_t_v10;
  typedef uint8_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13[4];
  typedef int _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v11)) > _g4_s1 ? (19u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (33u + sizeof(_g4_t_v12)) > _g4_s2 ? (33u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v14)) > _g4_s4 ? (52u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 19u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 33u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);

  v11 = 1;
  if ( (*(uint8_t *)(self + 32) & 1) != 0 )
  {
    for ( i = *a2; a2[1] != i; ++i )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v13), *i, (int)(uintptr_t)(&v12));
      if ( s != nullptr )
      {
        v7 = strlen(s);
        v14[0] = (int)(uintptr_t)(&dword_213B814);
        v10 = v7;
        sub_1939B80(v14, v7 + *((uint32_t *)v13[0] - 3));
        g4_std_compat::string_append((int)(uintptr_t)(v14), s, v10);
        g4_std::string::append_str(v14, v13);
        g4_std::string::assign_str(v13, v14);
        v8 = (void *)(v14[0] - 12);
        if ( (uint32_t *)(v14[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std_compat::string_rep_destroy(v8);
        }
      }
      v9 = grapher::ActorManager::AddFile(self, v13[0]);
      if ( v9 != nullptr )
      {
        if ( a3 )
          v11 |= grapher::ActorFile::Load(v9, true);
      }
      else
      {
        v11 = 0;
      }
      v6 = v13[0] - 12;
      if ( (uint32_t *)v13[0] - 3 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v13[0] - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std_compat::string_rep_destroy(v6);
      }
    }
  }
  grapher::ActorManager::FlushStringTables((grapher::ActorManager::Self *)self);
  return v11;
}


// ============================================================================
// Address:   0x13caaa0 (size: 637 bytes)
// Symbol:    _ZN7grapher12ActorManager14LoadActorFilesEPKcbbb
// Demangled: grapher::ActorManager::LoadActorFiles(char const*,bool,bool,bool)
// ============================================================================
int grapher::ActorManager::LoadActorFiles(
        grapher::ActorManager::Self *self,
        std::vector<GLFUtils::FileListEntry> *a2,
        bool a3,
        char a4,
        char a5)
{
  char v5;
  uint8_t v6;
  char **v7;
  char **v8;
  char *v9;
  int v11;
  int v12;
  int *i;
  char **v14;
  void *v15;
  typedef uint8_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[4];
  typedef char **_g4_t_v19;
  typedef char **_g4_t_v20;
  typedef char **_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (11u + sizeof(_g4_t_v16)) > _g4_s0 ? (11u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (33u + sizeof(_g4_t_v17)) > _g4_s1 ? (33u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v18)) > _g4_s2 ? (36u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v19)) > _g4_s3 ? (52u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v20)) > _g4_s4 ? (56u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v21)) > _g4_s5 ? (60u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v22)) > _g4_s6 ? (76u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v23)) > _g4_s7 ? (80u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v24)) > _g4_s8 ? (84u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v25)) > _g4_s9 ? (88u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v26)) > _g4_s10 ? (92u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v27)) > _g4_s11 ? (96u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 11u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 33u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);

  v19 = nullptr;
  v20 = nullptr;
  v5 = a4;
  v21 = nullptr;
  if ( byte_20D6700 != 0 || (v11 = _cxa_guard_acquire((__guard *)&byte_20D6700), v5 = a4, v11 == 0) )
  {
    if ( (*((uint8_t *)self + 128) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((__guard *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
    v5 = a4;
    if ( (*((uint8_t *)self + 128) & 1) == 0 )
      goto LABEL_3;
  }
  v25 = &v23;
  v26 = &v23;
  v23 = 0;
  v24 = nullptr;
  v27 = 0;
  GLFUtils::ListDir((int)(uintptr_t)(&v22), a2, v5, a5);
  for ( i = v25; i != &v23; i = (int *)sub_1904890(i) )
  {
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v18), (char *)i[5], (int)(uintptr_t)(&v17));
    if ( v20 == v21 )
    {
      sub_13C5D90((int *)&v19, v20, (int)(uintptr_t)(v18));
    }
    else
    {
      v14 = nullptr;
      if ( v20 != nullptr )
      {
        g4_std_compat::string_construct_copy(v20, v18);
        v14 = v20;
      }
      v20 = v14 + 1;
    }
    v15 = (void *)(v18[0] - 12);
    if ( (uint32_t *)(v18[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy(v15);
    }
  }
  sub_13C57F0(v12, v24);
LABEL_3:
  v6 = grapher::ActorManager::LoadActorsFromFilesList((grapher::ActorFile::Self ***)self, &v19, a3, nullptr);
  v7 = v20;
  v8 = v19;
  v16 = v6;
  if ( v20 != v19 )
  {
    do
    {
      v9 = *v8 - 12;
      if ( v9 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*v8 - 1, 0xFFFFFFFF) <= 0 )
        g4_std_compat::string_rep_destroy(v9);
      ++v8;
    }
    while ( v7 != v8 );
    v8 = v19;
  }
  if ( v8 != nullptr )
    operator delete(v8);
  return v16;
}


// ============================================================================
// Address:   0x13cad20 (size: 51 bytes)
// Symbol:    _ZNK7grapher12ActorManager9FindActorEi
// Demangled: grapher::ActorManager::FindActor(int)const
// ============================================================================
int grapher::ActorManager::FindActor(grapher::ActorManager::Self *self, unsigned int a2)
{
  return grapher::ActorFile::GetActor(*(grapher::ActorFile::Self **)(*((uint32_t *)self + 7) + 4 * (a2 >> 20)), a2);
}


// ============================================================================
// Address:   0x13cad60 (size: 42 bytes)
// Symbol:    _ZNK7grapher12ActorManager8GetActorEj
// Demangled: grapher::ActorManager::GetActor(unsigned int)const
// ============================================================================
int grapher::ActorManager::GetActor(grapher::ActorManager::Self *self, unsigned int a2)
{
  return grapher::ActorManager::FindActor(self, a2);
}


// ============================================================================
// Address:   0x13cad90 (size: 51 bytes)
// Symbol:    _ZNK7grapher12ActorManager12FindVariableEi
// Demangled: grapher::ActorManager::FindVariable(int)const
// ============================================================================
uint32_t *grapher::ActorManager::FindVariable(grapher::ActorManager::Self *self, unsigned int a2)
{
  return grapher::ActorFile::FindVariable(*(grapher::ActorFile::Self **)(*((uint32_t *)self + 7) + 4 * (a2 >> 20)), a2);
}


// ============================================================================
// Address:   0x13cadd0 (size: 210 bytes)
// Symbol:    _ZNK7grapher12ActorManager8GetActorERKSsS2_
// Demangled: grapher::ActorManager::GetActor(std::string const&,std::string const&)const
// ============================================================================
grapher::ActorBase::Self *grapher::ActorManager::GetActor(int a1, const void **a2, const void **a3)
{
  grapher::ActorBase::Self *v3;
  int *v4;
  int *v5;
  grapher::ActorBase::Self **v6;
  uint32_t *s1;
  uint32_t *v8;
  int *v10;
  int v11;

  v3 = nullptr;
  v4 = *(int **)(a1 + 28);
  v5 = *(int **)(a1 + 32);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v11 = *v4;
      v6 = *(grapher::ActorBase::Self ***)(*v4 + 24);
      if ( v6 != *(grapher::ActorBase::Self ***)(*v4 + 28) )
        break;
LABEL_11:
      if ( ++v4 == v5 )
        return nullptr;
    }
    v10 = v4;
    while ( 1 )
    {
      v3 = *v6;
      s1 = (uint32_t *)*grapher::ActorBase::GetGraphName(*v6);
      if ( *(s1 - 3) == *((uint32_t *)*a2 - 3) && memcmp(s1, *a2, *(s1 - 3)) == 0 )
      {
        v8 = *(uint32_t **)grapher::ActorBase::GetName(v3);
        if ( *(v8 - 3) == *((uint32_t *)*a3 - 3) && memcmp(v8, *a3, *(v8 - 3)) == 0 )
          break;
      }
      ++v10;
      if ( v6 == *(grapher::ActorBase::Self ***)(v11 + 28) )
      {
        v4 = v10;
        v5 = *(int **)(a1 + 32);
        goto LABEL_11;
      }
    }
  }
  return v3;
}


// ============================================================================
// Address:   0x13caeb0 (size: 97 bytes)
// Symbol:    _ZN7grapher12ActorManager16ClearBreakpointsEv
// Demangled: grapher::ActorManager::ClearBreakpoints(void)
// ============================================================================
int *grapher::ActorManager::ClearBreakpoints(grapher::ActorManager::Self *self)
{
  int *v1;
  int *result;
  int v3;
  grapher::ActorBase::Self **v4;

  v1 = *((int **)self + 7);
  for ( result = *((int **)self + 8); v1 != result; ++v1 )
  {
    v3 = *v1;
    v4 = *(grapher::ActorBase::Self ***)(*v1 + 24);
    if ( v4 != *(grapher::ActorBase::Self ***)(*v1 + 28) )
    {
      do
      {
        ++v1;
        grapher::ActorBase::ClearBreakpoints(*v4);
      }
      while ( v4 != *(grapher::ActorBase::Self ***)(v3 + 28) );
      result = *((int **)self + 8);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x13caf20 (size: 97 bytes)
// Symbol:    _ZN7grapher12ActorManager21UpdateVariableDisplayEv
// Demangled: grapher::ActorManager::UpdateVariableDisplay(void)
// ============================================================================
int *grapher::ActorManager::UpdateVariableDisplay(grapher::ActorManager::Self *self)
{
  int *v1;
  int *result;
  int v3;
  int v4;

  v1 = *((int **)self + 7);
  for ( result = *((int **)self + 8); v1 != result; ++v1 )
  {
    v3 = *v1;
    v4 = *(uint32_t *)(*v1 + 24);
    if ( v4 != *(uint32_t *)(*v1 + 28) )
    {
      do
      {
        ++v1;
        grapher::ActorBase::UpdateDisplay();
      }
      while ( v4 != *(uint32_t *)(v3 + 28) );
      result = *((int **)self + 8);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x13caf90 (size: 225 bytes)
// Symbol:    _ZN7grapher12ActorManager9SerializeEPKcS2_
// Demangled: grapher::ActorManager::Serialize(char const*,char const*)
// ============================================================================
grapher::ActorFile::Self *grapher::ActorManager::Serialize(grapher::ActorManager::Self *self, char *a2, char *a3)
{
  int v3;
  grapher::ActorFile::Self *result;
  grapher::ActorFile::Self *v5;
  char *v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v7)) > _g4_s0 ? (10u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v3 = *((uint32_t *)self + 32);
  result = grapher::ActorManager::AddFile((grapher::ActorFile::Self ***)self, a2);
  v5 = result;
  if ( result != nullptr )
  {
    grapher::ActorFile::Load(result, false);
    *((uint32_t *)self + 32) = 38;
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v8), a3, (int)(uintptr_t)(&v7));
    grapher::ActorFile::Save(v5, v8);
    v6 = (char *)(v8[0] - 12);
    if ( (uint32_t *)v8[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v8[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy(v6);
    }
    result = (grapher::ActorFile::Self *)grapher::ActorFile::Unload(v5, nullptr);
  }
  *((uint32_t *)self + 32) = v3;
  return result;
}


// ============================================================================
// Address:   0x13cb080 (size: 432 bytes)
// Symbol:    _ZNK7grapher12ActorManager9DBG_PrintERSo
// Demangled: grapher::ActorManager::DBG_Print(std::ostream &)const
// ============================================================================
unsigned int grapher::ActorManager::DBG_Print(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  unsigned int result;
  int v5;
  int v6;
  char *v7;
  int v8;
  char *v9;
  uint32_t *v10;
  int j;
  grapher::ActorBase::Self *v12;
  char *v13;
  int v14;
  unsigned int i;
  int v16;

  g4_std_compat::ostream_write(a2, "\n===============================================================================\n", 81);
  g4_std_compat::ostream_write(a2, "MANUAL EVENTS:\n", 15);
  v2 = a1[22];
  if ( (uint32_t *)v2 != a1 + 20 )
  {
    do
    {
      grapher::ActorBase::DBG_Print(*(grapher::ActorBase::Self **)(v2 + 20), a2);
      v2 = sub_19048E0(v2);
    }
    while ( a1 + 20 != (uint32_t *)v2 );
  }
  g4_std_compat::ostream_write(a2, "ACTORS:\n", 8);
  v3 = a1[7];
  result = (unsigned int)(a1[8] - v3) >> 2;
  if ( result != 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v5 = 0;
      v16 = 0;
      v6 = *(uint32_t *)(v3 + 4 * i);
      v13 = *(char **)(v6 + 24);
      v7 = *(char **)(v6 + 28);
      v8 = (v7 - v13) >> 2;
      if ( v8 != 0 )
      {
        v5 = gll_operator_new(4 * v8, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v7 = *(char **)(v6 + 28);
        v16 = v5;
        v13 = *(char **)(v6 + 24);
      }
      if ( v7 != v13 )
      {
        v9 = v13;
        v10 = (uint32_t *)v5;
        do
        {
          if ( v10 != nullptr )
            *v10 = *(uint32_t *)v9;
          v9 += 4;
          ++v10;
        }
        while ( v9 != v7 );
        v14 = (int)(v5 + 4 * ((unsigned int)(v9 - (v13 + 4)) >> 2) + 4 - v16) >> 2;
        if ( v14 != 0 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v12 = *(grapher::ActorBase::Self **)(v5 + 4 * j);
            grapher::ActorBase::DBG_Print(v12, a2);
          }
        }
      }
      if ( v5 != 0 )
        sub_4EB800(v5);
      v3 = a1[7];
      result = (a1[8] - v3) >> 2;
    }
  }
  return result;
}


// ============================================================================
// Address:   0x13cb230 (size: 522 bytes)
// Symbol:    _ZN7grapher12ActorManager9CancelAllEv
// Demangled: grapher::ActorManager::CancelAll(void)
// ============================================================================
grapher::ActorManager::Self *grapher::ActorManager::CancelAll(grapher::ActorManager::Self *self)
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
  char *v11;
  grapher::ActorManager::Self *v12;
  char *v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  *((uint32_t *)self + 17) = *((uint32_t *)self + 16);
  v17 = *((uint32_t *)self + 12);
  if ( v17 != 0 )
  {
    while ( 1 )
    {
      v18 = *(uint32_t *)(v17 + 12);
      if ( v18 != 0 )
      {
        while ( 1 )
        {
          v19 = *(uint32_t *)(v18 + 12);
          if ( v19 != 0 )
          {
            while ( 1 )
            {
              v20 = *(uint32_t *)(v19 + 12);
              if ( v20 != 0 )
              {
                while ( 1 )
                {
                  v21 = *(uint32_t *)(v20 + 12);
                  if ( v21 != 0 )
                  {
                    while ( 1 )
                    {
                      v22 = *(uint32_t *)(v21 + 12);
                      if ( v22 != 0 )
                      {
                        while ( 1 )
                        {
                          v16 = *(uint32_t *)(v22 + 12);
                          if ( v16 != 0 )
                          {
                            while ( 1 )
                            {
                              v15 = *(uint32_t *)(v16 + 12);
                              if ( v15 != 0 )
                              {
                                while ( 1 )
                                {
                                  v1 = *(uint32_t *)(v15 + 12);
                                  if ( v1 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_grapher_ContextualActor_8c72b1::M_erase(
                                        (char *)self + 40,
                                        *(uint32_t *)(v1 + 12));
                                      v2 = *(uint32_t *)(v1 + 8);
                                      sub_4EB800(v1);
                                      if ( v2 == 0 )
                                        break;
                                      v1 = v2;
                                    }
                                  }
                                  v3 = *(uint32_t *)(v15 + 8);
                                  sub_4EB800(v15);
                                  if ( v3 == 0 )
                                    break;
                                  v15 = v3;
                                }
                              }
                              v4 = *(uint32_t *)(v16 + 8);
                              sub_4EB800(v16);
                              if ( v4 == 0 )
                                break;
                              v16 = v4;
                            }
                          }
                          v5 = *(uint32_t *)(v22 + 8);
                          sub_4EB800(v22);
                          if ( v5 == 0 )
                            break;
                          v22 = v5;
                        }
                      }
                      v6 = *(uint32_t *)(v21 + 8);
                      sub_4EB800(v21);
                      if ( v6 == 0 )
                        break;
                      v21 = v6;
                    }
                  }
                  v7 = *(uint32_t *)(v20 + 8);
                  sub_4EB800(v20);
                  if ( v7 == 0 )
                    break;
                  v20 = v7;
                }
              }
              v8 = *(uint32_t *)(v19 + 8);
              sub_4EB800(v19);
              if ( v8 == 0 )
                break;
              v19 = v8;
            }
          }
          v9 = *(uint32_t *)(v18 + 8);
          sub_4EB800(v18);
          if ( v9 == 0 )
            break;
          v18 = v9;
        }
      }
      v10 = *(uint32_t *)(v17 + 8);
      sub_4EB800(v17);
      if ( v10 == 0 )
        break;
      v17 = v10;
    }
  }
  v11 = (char *)self + 100;
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)((char *)self + 44);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)((char *)self + 44);
  v12 = *((grapher::ActorManager::Self **)self + 25);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 15) = 0;
  if ( v12 != (grapher::ActorManager::Self *)((char *)self + 100) )
  {
    while ( 1 )
    {
      v13 = *(char **)v12;
      sub_4EB800((int)(uintptr_t)(v12));
      if ( v13 == v11 )
        break;
      v12 = (grapher::ActorManager::Self *)v13;
    }
  }
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(v11);
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(v11);
  return self;
}


// ============================================================================
// Address:   0x13cb440 (size: 944 bytes)
// Symbol:    _ZN7grapher12ActorManager15FlushDataTablesEv
// Demangled: grapher::ActorManager::FlushDataTables(void)
// ============================================================================
int grapher::ActorManager::FlushDataTables(grapher::ActorManager::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  int result;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;

  grapher::ActorManager::UnloadAll(self);
  v27 = *((uint32_t **)self + 21);
  if ( v27 != nullptr )
  {
    while ( 1 )
    {
      v29 = (uint32_t *)v27[3];
      if ( v29 != nullptr )
      {
        while ( 1 )
        {
          v31 = (uint32_t *)v29[3];
          if ( v31 != nullptr )
          {
            while ( 1 )
            {
              v35 = (uint32_t *)v31[3];
              if ( v35 != nullptr )
              {
                while ( 1 )
                {
                  v37 = (uint32_t *)v35[3];
                  if ( v37 != nullptr )
                  {
                    while ( 1 )
                    {
                      v33 = (uint32_t *)v37[3];
                      if ( v33 != nullptr )
                      {
                        while ( 1 )
                        {
                          v25 = (uint32_t *)v33[3];
                          if ( v25 != nullptr )
                          {
                            while ( 1 )
                            {
                              v23 = (uint32_t *)v25[3];
                              if ( v23 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v1 = v23[3];
                                  if ( v1 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      std::_Rb_tree<unsigned int,std::pair<unsigned int const,grapher::ManualEventActor>,std::_Select1st<std::pair<unsigned int const,grapher::ManualEventActor>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,grapher::ManualEventActor>>>::_M_erase(
                                        (int)(uintptr_t)(self) + 76,
                                        *(void **)(v1 + 12));
                                      v2 = *(uint32_t *)(v1 + 8);
                                      operator delete((void *)v1);
                                      if ( v2 == 0 )
                                        break;
                                      v1 = v2;
                                    }
                                  }
                                  v3 = (uint32_t *)v23[2];
                                  operator delete(v23);
                                  if ( v3 == nullptr )
                                    break;
                                  v23 = v3;
                                }
                              }
                              v4 = (uint32_t *)v25[2];
                              operator delete(v25);
                              if ( v4 == nullptr )
                                break;
                              v25 = v4;
                            }
                          }
                          v5 = (uint32_t *)v33[2];
                          operator delete(v33);
                          if ( v5 == nullptr )
                            break;
                          v33 = v5;
                        }
                      }
                      v6 = (uint32_t *)v37[2];
                      operator delete(v37);
                      if ( v6 == nullptr )
                        break;
                      v37 = v6;
                    }
                  }
                  v7 = (uint32_t *)v35[2];
                  operator delete(v35);
                  if ( v7 == nullptr )
                    break;
                  v35 = v7;
                }
              }
              v8 = (uint32_t *)v31[2];
              operator delete(v31);
              if ( v8 == nullptr )
                break;
              v31 = v8;
            }
          }
          v9 = (uint32_t *)v29[2];
          operator delete(v29);
          if ( v9 == nullptr )
            break;
          v29 = v9;
        }
      }
      v10 = (uint32_t *)v27[2];
      operator delete(v27);
      if ( v10 == nullptr )
        break;
      v27 = v10;
    }
  }
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)((char *)self + 80);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)((char *)self + 80);
  v11 = *((uint32_t **)self + 12);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 24) = 0;
  v26 = v11;
  if ( v11 != nullptr )
  {
    while ( 1 )
    {
      v28 = (uint32_t *)v26[3];
      if ( v28 != nullptr )
      {
        while ( 1 )
        {
          v30 = (uint32_t *)v28[3];
          if ( v30 != nullptr )
          {
            while ( 1 )
            {
              v32 = (uint32_t *)v30[3];
              if ( v32 != nullptr )
              {
                while ( 1 )
                {
                  v34 = (uint32_t *)v32[3];
                  if ( v34 != nullptr )
                  {
                    while ( 1 )
                    {
                      v36 = (uint32_t *)v34[3];
                      if ( v36 != nullptr )
                      {
                        while ( 1 )
                        {
                          v38 = (uint32_t *)v36[3];
                          if ( v38 != nullptr )
                          {
                            while ( 1 )
                            {
                              v24 = (uint32_t *)v38[3];
                              if ( v24 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v12 = v24[3];
                                  if ( v12 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_grapher_ContextualActor_8c72b1::M_erase(
                                        (char *)self + 40,
                                        *(uint32_t *)(v12 + 12));
                                      v13 = *(uint32_t *)(v12 + 8);
                                      sub_4EB800(v12);
                                      if ( v13 == 0 )
                                        break;
                                      v12 = v13;
                                    }
                                  }
                                  v14 = (uint32_t *)v24[2];
                                  sub_4EB800((int)(uintptr_t)(v24));
                                  if ( v14 == nullptr )
                                    break;
                                  v24 = v14;
                                }
                              }
                              v15 = (uint32_t *)v38[2];
                              sub_4EB800((int)(uintptr_t)(v38));
                              if ( v15 == nullptr )
                                break;
                              v38 = v15;
                            }
                          }
                          v16 = (uint32_t *)v36[2];
                          sub_4EB800((int)(uintptr_t)(v36));
                          if ( v16 == nullptr )
                            break;
                          v36 = v16;
                        }
                      }
                      v17 = (uint32_t *)v34[2];
                      sub_4EB800((int)(uintptr_t)(v34));
                      if ( v17 == nullptr )
                        break;
                      v34 = v17;
                    }
                  }
                  v18 = (uint32_t *)v32[2];
                  sub_4EB800((int)(uintptr_t)(v32));
                  if ( v18 == nullptr )
                    break;
                  v32 = v18;
                }
              }
              v19 = (uint32_t *)v30[2];
              sub_4EB800((int)(uintptr_t)(v30));
              if ( v19 == nullptr )
                break;
              v30 = v19;
            }
          }
          v20 = (uint32_t *)v28[2];
          sub_4EB800((int)(uintptr_t)(v28));
          if ( v20 == nullptr )
            break;
          v28 = v20;
        }
      }
      v21 = (uint32_t *)v26[2];
      sub_4EB800((int)(uintptr_t)(v26));
      if ( v21 == nullptr )
        break;
      v26 = v21;
    }
  }
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)((char *)self + 44);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)((char *)self + 44);
  result = *((uint32_t *)self + 16);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = result;
  return result;
}


// ============================================================================
// Address:   0x13cb7f0 (size: 63 bytes)
// Symbol:    _ZN7grapher12ActorManager8ClearAllEv
// Demangled: grapher::ActorManager::ClearAll(void)
// ============================================================================
int grapher::ActorManager::ClearAll(grapher::ActorManager::Self *self)
{
  int result;

  grapher::ActorManager::FlushDataTables(self);
  result = *((uint32_t *)self + 31);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*((uint32_t *)self + 31));
  return result;
}


// ============================================================================
// Address:   0x13cb830 (size: 247 bytes)
// Symbol:    _ZN7grapher12ActorManager9TerminateEv
// Demangled: grapher::ActorManager::Terminate(void)
// ============================================================================
void grapher::ActorManager::Terminate(grapher::ActorManager::Self *self)
{
  grapher::ActorManager::CancelAll(self);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((__guard *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::ClearAll((grapher::ActorManager::Self *)&unk_20D5B60);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((__guard *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((__guard *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
  }
  grapher::ActorContext::Reset((grapher::ActorContext::Self *)&unk_20D6720);
}


// ============================================================================
// Address:   0x13cb930 (size: 90 bytes)
// Symbol:    _ZN7grapher12ActorManager6ReloadEv
// Demangled: grapher::ActorManager::Reload(void)
// ============================================================================
int grapher::ActorManager::Reload(grapher::ActorFile::Self ***self)
{
  int result;
  grapher::ActorFile::Self **i;
  grapher::ActorFile::Self *v3;

  grapher::ActorManager::Terminate((grapher::ActorManager::Self *)self);
  grapher::ActorManager::UnloadAll((grapher::ActorManager::Self *)self);
  result = grapher::ActorManager::Init((grapher::ActorManager::Self *)self);
  for ( i = *(self + 7); i != *(self + 8); result = grapher::ActorFile::Load(v3, true) )
    v3 = *i++;
  return result;
}


// ============================================================================
// Address:   0x13cb990 (size: 1126 bytes)
// Symbol:    _ZN7grapher12ActorManagerD1Ev
// Demangled: grapher::ActorManager::Destroy()
// ============================================================================
// Alternative name is '_ZN7grapher12ActorManagerD2Ev'
void grapher::ActorManager::Destroy(grapher::ActorManager::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  grapher::ActorManager::Self *v5;
  grapher::ActorManager::Self *v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C38);
  grapher::ActorManager::ClearAll(self);
  v1 = *((uint32_t *)self + 35);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t **)self + 29);
  v3 = *((uint32_t **)self + 28);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = *((uint32_t **)self + 28);
  }
  if ( v3 != nullptr )
    opDelete(v3);
  v5 = *((grapher::ActorManager::Self **)self + 25);
  if ( v5 != (grapher::ActorManager::Self *)((char *)self + 100) )
  {
    while ( 1 )
    {
      v6 = *(grapher::ActorManager::Self **)v5;
      sub_4EB800((int)(uintptr_t)(v5));
      if ( v6 == (grapher::ActorManager::Self *)((char *)self + 100) )
        break;
      v5 = v6;
    }
  }
  v31 = *((uint32_t **)self + 21);
  if ( v31 != nullptr )
  {
    while ( 1 )
    {
      v33 = (uint32_t *)v31[3];
      if ( v33 != nullptr )
      {
        while ( 1 )
        {
          v35 = (uint32_t *)v33[3];
          if ( v35 != nullptr )
          {
            while ( 1 )
            {
              v37 = (uint32_t *)v35[3];
              if ( v37 != nullptr )
              {
                while ( 1 )
                {
                  v39 = (uint32_t *)v37[3];
                  if ( v39 != nullptr )
                  {
                    while ( 1 )
                    {
                      v41 = (uint32_t *)v39[3];
                      if ( v41 != nullptr )
                      {
                        while ( 1 )
                        {
                          v29 = (uint32_t *)v41[3];
                          if ( v29 != nullptr )
                          {
                            while ( 1 )
                            {
                              v27 = (uint32_t *)v29[3];
                              if ( v27 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v7 = v27[3];
                                  if ( v7 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_unsigned_int_pair_unsign_a40f74::M_erase(
                                        (int)(uintptr_t)(self) + 76,
                                        *(void **)(v7 + 12));
                                      v8 = *(uint32_t *)(v7 + 8);
                                      opDelete((void *)v7);
                                      if ( v8 == 0 )
                                        break;
                                      v7 = v8;
                                    }
                                  }
                                  v9 = (uint32_t *)v27[2];
                                  opDelete(v27);
                                  if ( v9 == nullptr )
                                    break;
                                  v27 = v9;
                                }
                              }
                              v10 = (uint32_t *)v29[2];
                              opDelete(v29);
                              if ( v10 == nullptr )
                                break;
                              v29 = v10;
                            }
                          }
                          v11 = (uint32_t *)v41[2];
                          opDelete(v41);
                          if ( v11 == nullptr )
                            break;
                          v41 = v11;
                        }
                      }
                      v12 = (uint32_t *)v39[2];
                      opDelete(v39);
                      if ( v12 == nullptr )
                        break;
                      v39 = v12;
                    }
                  }
                  v13 = (uint32_t *)v37[2];
                  opDelete(v37);
                  if ( v13 == nullptr )
                    break;
                  v37 = v13;
                }
              }
              v14 = (uint32_t *)v35[2];
              opDelete(v35);
              if ( v14 == nullptr )
                break;
              v35 = v14;
            }
          }
          v15 = (uint32_t *)v33[2];
          opDelete(v33);
          if ( v15 == nullptr )
            break;
          v33 = v15;
        }
      }
      v16 = (uint32_t *)v31[2];
      opDelete(v31);
      if ( v16 == nullptr )
        break;
      v31 = v16;
    }
  }
  if ( *((uint32_t *)self + 16) != 0 )
    sub_4EB800(*((uint32_t *)self + 16));
  v30 = *((uint32_t **)self + 12);
  if ( v30 != nullptr )
  {
    while ( 1 )
    {
      v34 = (uint32_t *)v30[3];
      if ( v34 != nullptr )
      {
        while ( 1 )
        {
          v38 = (uint32_t *)v34[3];
          if ( v38 != nullptr )
          {
            while ( 1 )
            {
              v32 = (uint32_t *)v38[3];
              if ( v32 != nullptr )
              {
                while ( 1 )
                {
                  v40 = (uint32_t *)v32[3];
                  if ( v40 != nullptr )
                  {
                    while ( 1 )
                    {
                      v36 = (uint32_t *)v40[3];
                      if ( v36 != nullptr )
                      {
                        while ( 1 )
                        {
                          v42 = (uint32_t *)v36[3];
                          if ( v42 != nullptr )
                          {
                            while ( 1 )
                            {
                              v28 = (uint32_t *)v42[3];
                              if ( v28 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v17 = v28[3];
                                  if ( v17 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_grapher_ContextualActor_8c72b1::M_erase(
                                        (char *)self + 40,
                                        *(uint32_t *)(v17 + 12));
                                      v18 = *(uint32_t *)(v17 + 8);
                                      sub_4EB800(v17);
                                      if ( v18 == 0 )
                                        break;
                                      v17 = v18;
                                    }
                                  }
                                  v19 = (uint32_t *)v28[2];
                                  sub_4EB800((int)(uintptr_t)(v28));
                                  if ( v19 == nullptr )
                                    break;
                                  v28 = v19;
                                }
                              }
                              v20 = (uint32_t *)v42[2];
                              sub_4EB800((int)(uintptr_t)(v42));
                              if ( v20 == nullptr )
                                break;
                              v42 = v20;
                            }
                          }
                          v21 = (uint32_t *)v36[2];
                          sub_4EB800((int)(uintptr_t)(v36));
                          if ( v21 == nullptr )
                            break;
                          v36 = v21;
                        }
                      }
                      v22 = (uint32_t *)v40[2];
                      sub_4EB800((int)(uintptr_t)(v40));
                      if ( v22 == nullptr )
                        break;
                      v40 = v22;
                    }
                  }
                  v23 = (uint32_t *)v32[2];
                  sub_4EB800((int)(uintptr_t)(v32));
                  if ( v23 == nullptr )
                    break;
                  v32 = v23;
                }
              }
              v24 = (uint32_t *)v38[2];
              sub_4EB800((int)(uintptr_t)(v38));
              if ( v24 == nullptr )
                break;
              v38 = v24;
            }
          }
          v25 = (uint32_t *)v34[2];
          sub_4EB800((int)(uintptr_t)(v34));
          if ( v25 == nullptr )
            break;
          v34 = v25;
        }
      }
      v26 = (uint32_t *)v30[2];
      sub_4EB800((int)(uintptr_t)(v30));
      if ( v26 == nullptr )
        break;
      v30 = v26;
    }
  }
  if ( *((uint32_t *)self + 7) != 0 )
    sub_4EB800(*((uint32_t *)self + 7));
  g4_std::Rb_tree_string_pair_string_const_ec3052::M_erase(
    (char *)self + 4,
    *((uint32_t *)self + 3));
}


// ============================================================================
// Address:   0x13cbe00 (size: 56 bytes)
// Symbol:    _ZN7grapher12ActorManagerD0Ev
// Demangled: grapher::ActorManager::Destroy()
// ============================================================================
void grapher::ActorManager::DestroyDeleting(grapher::ActorManager::Self *self)
{
  grapher::ActorManager::Destroy(self);
  opDelete(self);
}

// ============================================================================
// Address:   0x654b60
// Symbol:    _ZN7grapher12ActorManager11GetInstanceEv
// Demangled: grapher::ActorManager::GetInstance()
// ============================================================================
uintptr_t grapher::ActorManager::GetInstance()
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return (uintptr_t)&unk_20D5B60;
}

