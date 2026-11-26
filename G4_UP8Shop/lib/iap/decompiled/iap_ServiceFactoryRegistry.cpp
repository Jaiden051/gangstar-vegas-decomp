#include "Core/Utils/DecompTypes.h"
#include "iap_ServiceFactoryRegistry.h"

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryRegistry::ConstructService  (binary VA: 0x1513580)
// Original: iap::ServiceFactoryRegistry::ConstructService
// ----------------------------------------------------------------------------
int iap::ServiceFactoryRegistry::ConstructService(int a1, void **a2, int a3)
{
  size_t v3;
  int result;
  int v5;
  size_t n;
  size_t v7;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  void *s2;
  int v15;

  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  result = -2147483646;
  if ( v3 != 0 )
  {
    v5 = *(uint32_t *)(a1 + 8);
    if ( v5 != 0 )
    {
      v15 = a1 + 4;
      do
      {
        while ( 1 )
        {
          n = v3;
          v7 = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
          if ( v7 <= v3 )
            n = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
          v8 = v7 - v3;
          v9 = memcmp(*(const void **)(v5 + 16), s2, n);
          if ( v9 != 0 )
            v8 = v9;
          if ( v8 < 0 )
            break;
          v15 = v5;
          v5 = *(uint32_t *)(v5 + 8);
          if ( v5 == 0 )
            goto LABEL_11;
        }
        v5 = *(uint32_t *)(v5 + 12);
      }
      while ( v5 != 0 );
LABEL_11:
      if ( a1 + 4 == v15 )
      {
        return -2147483646;
      }
      else
      {
        v10 = v3;
        v11 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
        if ( v11 <= v3 )
          v10 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
        v12 = v3 - v11;
        v13 = memcmp(s2, *(const void **)(v15 + 16), v10);
        if ( v13 != 0 )
          v12 = v13;
        result = -2147483646;
        if ( v12 >= 0 )
        {
          result = (***(int (****)(uint32_t, int))(v15 + 20))(*(uint32_t *)(v15 + 20), a3);
          if ( result > 0 )
            return v5;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryRegistry::DestroyService  (binary VA: 0x1513a40)
// Original: iap::ServiceFactoryRegistry::DestroyService
// ----------------------------------------------------------------------------
int iap::ServiceFactoryRegistry::DestroyService(int a1, void **a2, int a3)
{
  size_t v3;
  int result;
  int v5;
  size_t n;
  size_t v7;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  void *s2;
  int v15;

  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  result = -2147483646;
  if ( v3 != 0 )
  {
    v5 = *(uint32_t *)(a1 + 8);
    if ( v5 != 0 )
    {
      v15 = a1 + 4;
      do
      {
        while ( 1 )
        {
          n = v3;
          v7 = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
          if ( v7 <= v3 )
            n = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
          v8 = v7 - v3;
          v9 = memcmp(*(const void **)(v5 + 16), s2, n);
          if ( v9 != 0 )
            v8 = v9;
          if ( v8 < 0 )
            break;
          v15 = v5;
          v5 = *(uint32_t *)(v5 + 8);
          if ( v5 == 0 )
            goto LABEL_11;
        }
        v5 = *(uint32_t *)(v5 + 12);
      }
      while ( v5 != 0 );
LABEL_11:
      if ( a1 + 4 == v15 )
      {
        return -2147483646;
      }
      else
      {
        v10 = v3;
        v11 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
        if ( v11 <= v3 )
          v10 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
        v12 = v3 - v11;
        v13 = memcmp(s2, *(const void **)(v15 + 16), v10);
        if ( v13 != 0 )
          v12 = v13;
        result = -2147483646;
        if ( v12 >= 0 )
        {
          result = (*(int (**)(uint32_t, int))(**(uint32_t **)(v15 + 20) + 4))(*(uint32_t *)(v15 + 20), a3);
          if ( result > 0 )
            return v5;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryRegistry::IsServiceRegistered  (binary VA: 0x1513ca0)
// Original: iap::ServiceFactoryRegistry::IsServiceRegistered
// ----------------------------------------------------------------------------
bool iap::ServiceFactoryRegistry::IsServiceRegistered(int a1, void **a2)
{
  size_t v2;
  bool result;
  int v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v14;

  s2 = *a2;
  v2 = *((uint32_t *)*a2 - 3);
  result = false;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 8);
    if ( v4 != 0 )
    {
      v14 = a1 + 4;
      do
      {
        while ( 1 )
        {
          n = v2;
          v6 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
          if ( v6 <= v2 )
            n = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
          v7 = v6 - v2;
          v8 = memcmp(*(const void **)(v4 + 16), s2, n);
          if ( v8 != 0 )
            v7 = v8;
          if ( v7 < 0 )
            break;
          v14 = v4;
          v4 = *(uint32_t *)(v4 + 8);
          if ( v4 == 0 )
            goto LABEL_12;
        }
        v4 = *(uint32_t *)(v4 + 12);
      }
      while ( v4 != 0 );
LABEL_12:
      if ( a1 + 4 == v14 )
      {
        return false;
      }
      else
      {
        v9 = v2;
        v10 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
        if ( v10 <= v2 )
          v9 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
        v11 = v2 - v10;
        v12 = memcmp(s2, *(const void **)(v14 + 16), v9);
        if ( v12 == 0 )
          v12 = v11;
        return v12 >= 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryRegistry::UnregisterServiceFactory  (binary VA: 0x1513d80)
// Original: iap::ServiceFactoryRegistry::UnregisterServiceFactory
// ----------------------------------------------------------------------------
int iap::ServiceFactoryRegistry::UnregisterServiceFactory(int a1, void **a2)
{
  int v2;
  size_t v3;
  int v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  void *s2;
  int v19;
  int v20;

  v2 = -2147483646;
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 8);
    if ( v4 != 0 )
    {
      v20 = a1 + 4;
      v19 = a1 + 4;
      do
      {
        while ( 1 )
        {
          n = v3;
          v6 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
          if ( v6 <= v3 )
            n = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
          v7 = v6 - v3;
          v8 = memcmp(*(const void **)(v4 + 16), s2, n);
          if ( v8 != 0 )
            v7 = v8;
          if ( v7 < 0 )
            break;
          v19 = v4;
          v4 = *(uint32_t *)(v4 + 8);
          if ( v4 == 0 )
            goto LABEL_11;
        }
        v4 = *(uint32_t *)(v4 + 12);
      }
      while ( v4 != 0 );
LABEL_11:
      v2 = -2147483646;
      if ( v20 != v19 )
      {
        v9 = v3;
        v10 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
        if ( v10 <= v3 )
          v9 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
        v11 = v3 - v10;
        v12 = memcmp(s2, *(const void **)(v19 + 16), v9);
        if ( v12 == 0 )
          v12 = v11;
        if ( v12 >= 0 )
        {
          v13 = *(uint32_t *)(v19 + 20);
          if ( v13 != 0 )
          {
            (*(void (**)(uint32_t))(*(uint32_t *)v13 + 8))(*(uint32_t *)(v19 + 20));
            sub_4EBEE0(*(uint32_t *)(v19 + 20));
          }
          v14 = sub_1904AE0(v19, v20);
          v15 = *(uint32_t *)(v14 + 16);
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            v17 = v14;
            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
            v14 = v17;
          }
          v2 = 0;
          sub_4EBEE0(v14);
          --*(uint32_t *)(a1 + 20);
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryRegistry::Clear  (binary VA: 0x15141b0)
// Original: iap::ServiceFactoryRegistry::Clear
// ----------------------------------------------------------------------------
char * iap::ServiceFactoryRegistry::Clear(iap::ServiceFactoryRegistry::Self *self)
{
  char *result;
  iap::ServiceFactoryRegistry::Self *v2;
  int v3;
  int v4;
  char *v5;
  uint32_t *s1;
  size_t n;
  size_t v8;
  int v9;
  int v10;
  char *i;
  char *v12;
  int v13;
  int v14;
  char *v15;
  size_t v16;
  size_t v17;
  size_t v18;
  int v19;
  char *v20;
  size_t v21;
  size_t v22;
  int v23;
  int v24;
  typedef char *_g4_t_s2;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char _g4_t_v37;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_s2)) > _g4_s0 ? (4u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v29)) > _g4_s4 ? (20u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v31)) > _g4_s6 ? (28u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v32)) > _g4_s7 ? (28u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v33)) > _g4_s8 ? (32u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v34)) > _g4_s9 ? (36u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v35)) > _g4_s10 ? (40u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v36)) > _g4_s11 ? (44u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (63u + sizeof(_g4_t_v37)) > _g4_s12 ? (63u + sizeof(_g4_t_v37)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 63u);

  result = *((char **)self + 5);
  while ( result != nullptr )
  {
    v2 = self;
    v3 = *((uint32_t *)self + 3);
    v35 = (char *)v3;
    v4 = *(uint32_t *)(v3 + 20);
    if ( v4 != 0 )
    {
      (*(void (**)(uint32_t, char *))(*(uint32_t *)v4 + 8))(*(uint32_t *)(v3 + 20), s2);
      sub_4EBEE0(*(uint32_t *)(v3 + 20));
      v35 = *((char **)self + 3);
      v2 = self;
    }
    v34 = *((uint32_t *)v2 + 2);
    v33 = (char *)self + 4;
    v28 = (char *)self + 4;
    v31 = (char *)self + 4;
    if ( v34 != 0 )
    {
      v5 = *((char **)v2 + 2);
      v30 = *(uint32_t **)(v3 + 16);
      v29 = *(v30 - 3);
      while ( 1 )
      {
        while ( 1 )
        {
          s1 = *((uint32_t **)v5 + 4);
          n = v29;
          v8 = *(s1 - 3);
          if ( v29 > v8 )
            n = *(s1 - 3);
          v26 = n;
          v9 = memcmp(s1, v30, n);
          if ( v9 == 0 )
            v9 = v8 - v29;
          if ( v9 >= 0 )
            break;
          v5 = *((char **)v5 + 3);
          if ( v5 == nullptr )
            goto LABEL_17;
        }
        v10 = memcmp(v30, s1, v26);
        if ( v10 == 0 )
          v10 = v29 - v8;
        if ( v10 >= 0 )
          break;
        v31 = v5;
        v5 = *((char **)v5 + 2);
        if ( v5 == nullptr )
        {
LABEL_17:
          v28 = v31;
          goto LABEL_18;
        }
      }
      v15 = *((char **)v5 + 3);
      v36 = *((char **)v5 + 2);
      v16 = v29;
      v28 = v31;
      if ( v15 != nullptr )
      {
        v32 = v5;
        do
        {
          while ( 1 )
          {
            v17 = v16;
            v18 = *(uint32_t *)(*((uint32_t *)v15 + 4) - 12);
            if ( v18 <= v16 )
              v17 = *(uint32_t *)(*((uint32_t *)v15 + 4) - 12);
            v19 = memcmp(v30, *((const void **)v15 + 4), v17);
            if ( v19 == 0 )
              v19 = v16 - v18;
            if ( v19 >= 0 )
              break;
            v28 = v15;
            v15 = *((char **)v15 + 2);
            if ( v15 == nullptr )
              goto LABEL_35;
          }
          v15 = *((char **)v15 + 3);
        }
        while ( v15 != nullptr );
LABEL_35:
        v5 = v32;
      }
      v31 = v5;
      if ( v36 != nullptr )
      {
        v20 = v36;
        do
        {
          v21 = *(uint32_t *)(*((uint32_t *)v20 + 4) - 12);
          v22 = v21;
          if ( v16 <= v21 )
            v22 = v16;
          v23 = v21 - v16;
          v24 = memcmp(*((const void **)v20 + 4), v30, v22);
          if ( v24 == 0 )
            v24 = v23;
          if ( v24 >= 0 )
          {
            v31 = v20;
            v20 = *((char **)v20 + 2);
          }
          else
          {
            v20 = *((char **)v20 + 3);
          }
        }
        while ( v20 != nullptr );
      }
    }
LABEL_18:
    if ( v31 == v35 && v33 == v28 )
    {
      g4_std::Rb_tree_string_pair_string_const_cfc3ba::M_erase(
        (int)(uintptr_t)(self),
        v34);
      result = (char *)self + 4;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v33);
      *((uint32_t *)self + 2) = 0;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v33);
      *((uint32_t *)self + 5) = 0;
      return result;
    }
    if ( v31 == v28 )
    {
      result = *((char **)self + 5);
    }
    else
    {
      for ( i = v31; ; i = v12 )
      {
        v12 = (char *)sub_19048E0(i);
        v13 = sub_1904AE0(i, v33);
        v14 = *(uint32_t *)(v13 + 16);
        if ( (uint32_t *)(v14 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
        {
          v27 = v13;
          s2 = &v37;
          g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          v13 = v27;
        }
        sub_4EBEE0(v13);
        result = (char *)(*((uint32_t *)self + 5) - 1);
        *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
        if ( v28 == v12 )
          break;
      }
    }
  }
  return result;
}


