#include "Core/Utils/DecompTypes.h"
#include "iap_ServiceRegistry.h"

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::Construct  (binary VA: 0x1513240)
// Original: iap::ServiceRegistry::ServiceRegistry
// ----------------------------------------------------------------------------
iap::ServiceRegistry::Self * iap::ServiceRegistry::Construct(iap::ServiceRegistry::Self *self, const iap::ServiceFactoryRegistry::Self *a2)
{
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::GetService  (binary VA: 0x1513270)
// Original: iap::ServiceRegistry::GetService
// ----------------------------------------------------------------------------
int iap::ServiceRegistry::GetService(int a1, void **a2, uint32_t *a3)
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
          *a3 = *(uint32_t *)(v15 + 20);
          return 0;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::GetService_ea1513360  (binary VA: 0x1513360)
// Original: iap::ServiceRegistry::GetService
// ----------------------------------------------------------------------------
int iap::ServiceRegistry::GetService_ea1513360(int a1, void **a2, uint32_t *a3)
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
          *a3 = *(uint32_t *)(v15 + 20);
          return 0;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::GetServiceCount  (binary VA: 0x1513450)
// Original: iap::ServiceRegistry::GetServiceCount
// ----------------------------------------------------------------------------
int iap::ServiceRegistry::GetServiceCount(iap::ServiceRegistry::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::Begin  (binary VA: 0x1513460)
// Original: iap::ServiceRegistry::Begin
// ----------------------------------------------------------------------------
iap::ServiceRegistry::Self * iap::ServiceRegistry::Begin(iap::ServiceRegistry::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::End  (binary VA: 0x1513470)
// Original: iap::ServiceRegistry::End
// ----------------------------------------------------------------------------
iap::ServiceRegistry::Self * iap::ServiceRegistry::End(iap::ServiceRegistry::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::Begin_ea1513480  (binary VA: 0x1513480)
// Original: iap::ServiceRegistry::Begin
// ----------------------------------------------------------------------------
iap::ServiceRegistry::Self * iap::ServiceRegistry::Begin_ea1513480(iap::ServiceRegistry::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::End_ea1513490  (binary VA: 0x1513490)
// Original: iap::ServiceRegistry::End
// ----------------------------------------------------------------------------
iap::ServiceRegistry::Self * iap::ServiceRegistry::End_ea1513490(iap::ServiceRegistry::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::HasService  (binary VA: 0x15134a0)
// Original: iap::ServiceRegistry::HasService
// ----------------------------------------------------------------------------
bool iap::ServiceRegistry::HasService(int a1, void **a2)
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
// Function: iap::ServiceRegistry::AddService  (binary VA: 0x1513680)
// Original: iap::ServiceRegistry::AddService
// ----------------------------------------------------------------------------
int iap::ServiceRegistry::AddService(uint32_t *a1, void **a2)
{
  int v2;
  int v4;
  uint32_t *v5;
  size_t v6;
  uint32_t *v7;
  uint32_t *v8;
  size_t v9;
  int v10;
  uint32_t *v11;
  size_t v12;
  uint32_t *v13;
  size_t v14;
  int v15;
  int v16;
  void *v17;
  void *v18;
  size_t v19;
  size_t v20;
  unsigned int v21;
  int v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  typedef size_t _g4_t_i;
  typedef uint32_t *_g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef uint32_t _g4_t_v36[3];
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_i)) > _g4_s0 ? (4u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v33)) > _g4_s6 ? (24u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v34)) > _g4_s7 ? (24u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v35)) > _g4_s8 ? (28u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v36)) > _g4_s9 ? (48u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v37)) > _g4_s10 ? (60u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v38)) > _g4_s11 ? (64u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v39)) > _g4_s12 ? (68u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v40)) > _g4_s13 ? (80u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v41)) > _g4_s14 ? (84u + sizeof(_g4_t_v41)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);

  v2 = -2147483646;
  if ( *((uint32_t *)*a2 - 3) == 0 )
    return v2;
  v2 = 0;
  if ( iap::ServiceRegistry::HasService((int)(uintptr_t)(a1), a2) )
    return v2;
  v37 = 0;
  v2 = iap::ServiceFactoryRegistry::ConstructService(a1[6], a2, (int)(uintptr_t)(&v37));
  if ( v2 < 0 )
    return v2;
  v4 = v37;
  g4_std::string::construct_copy(v36, a2);
  g4_std::string::construct_copy(&v38, v36);
  v39 = v4;
  g4_std::string::construct_copy(&v40, &v38);
  v41 = v39;
  v30 = a1 + 1;
  if ( a1[2] == 0 )
  {
    v13 = a1 + 1;
    goto LABEL_24;
  }
  v5 = (uint32_t *)a1[2];
  v31 = v40;
  v6 = *(v40 - 3);
  for ( i = v6; ; v6 = i )
  {
    v8 = (uint32_t *)v5[4];
    v9 = *(v8 - 3);
    if ( i > v9 )
      v6 = *(v8 - 3);
    v32 = v6;
    v28 = v5;
    v10 = memcmp(v31, v8, v6);
    if ( v10 == 0 )
      v10 = i - v9;
    if ( v10 >= 0 )
      break;
    v7 = (uint32_t *)v28[2];
    v35 = 1;
    if ( v7 == nullptr )
      goto LABEL_15;
LABEL_8:
    v5 = v7;
  }
  v7 = (uint32_t *)v28[3];
  v35 = 0;
  if ( v7 != nullptr )
    goto LABEL_8;
LABEL_15:
  v11 = v8;
  v12 = i;
  v13 = v28;
  v14 = v32;
  if ( v35 == 0 )
    goto LABEL_16;
LABEL_24:
  if ( (uint32_t *)a1[3] == v13 )
  {
    LOBYTE(v33) = 1;
    if ( v30 != v13 )
    {
      v23 = *(uint32_t *)(v13[4] - 12);
      v24 = *(v40 - 3);
      v34 = v23;
      if ( v23 > v24 )
        v23 = *(v40 - 3);
      v25 = memcmp(v40, (const void *)v13[4], v23);
      v26 = v24 - v34;
      if ( v25 == 0 )
        v25 = v26;
      LOBYTE(v33) = v25 < 0;
    }
    v22 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v22 != -16 )
    {
      g4_std::string::construct_copy(v22 + 16, &v40);
      *(uint32_t *)(v22 + 20) = v41;
    }
    goto LABEL_36;
  }
  v11 = *(uint32_t **)(sub_19048F0(v13) + 16);
  v31 = v40;
  v9 = *(v11 - 3);
  v12 = *(v40 - 3);
  v14 = v9;
  if ( v12 <= v9 )
    v14 = *(v40 - 3);
LABEL_16:
  v29 = v12;
  v15 = memcmp(v11, v31, v14);
  v16 = v9 - v29;
  if ( v15 == 0 )
    v15 = v16;
  if ( v15 < 0 )
  {
    LOBYTE(v33) = 1;
    if ( v30 != v13 )
    {
      v19 = *(uint32_t *)(v13[4] - 12);
      v20 = v19;
      if ( v29 <= v19 )
        v20 = v29;
      v21 = memcmp(v31, (const void *)v13[4], v20);
      if ( v21 == 0 )
        v21 = v29 - v19;
      v33 = v21 >> 31;
    }
    v22 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v22 != -16 )
    {
      g4_std::string::construct_copy(v22 + 16, &v40);
      *(uint32_t *)(v22 + 20) = v41;
    }
LABEL_36:
    sub_1904970(v33, v22, v13, v30);
    v31 = v40;
    ++a1[5];
  }
  if ( v31 - 3 != dword_213B808 && __sync_fetch_and_add(v31 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v31 - 3);
  v17 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808 )
  {
    v2 = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v18);
    return v2;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::RemoveService  (binary VA: 0x1513b40)
// Original: iap::ServiceRegistry::RemoveService
// ----------------------------------------------------------------------------
int iap::ServiceRegistry::RemoveService(uint32_t *a1, void **a2)
{
  int result;
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
  const void *s2;
  uint32_t *v17;
  uint32_t *v18;

  result = -2147483646;
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  if ( v3 != 0 )
  {
    v4 = a1[2];
    if ( v4 != 0 )
    {
      v18 = a1 + 1;
      v17 = a1 + 1;
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
          v17 = (uint32_t *)v4;
          v4 = *(uint32_t *)(v4 + 8);
          if ( v4 == 0 )
            goto LABEL_11;
        }
        v4 = *(uint32_t *)(v4 + 12);
      }
      while ( v4 != 0 );
LABEL_11:
      if ( v18 == v17 )
      {
        return -2147483646;
      }
      else
      {
        v9 = v3;
        v10 = *(uint32_t *)(v17[4] - 12);
        if ( v10 <= v3 )
          v9 = *(uint32_t *)(v17[4] - 12);
        v11 = v3 - v10;
        v12 = memcmp(s2, (const void *)v17[4], v9);
        if ( v12 != 0 )
          v11 = v12;
        result = -2147483646;
        if ( v11 >= 0 )
        {
          iap::ServiceFactoryRegistry::DestroyService(a1[6], a2, (int)(uintptr_t)(v17 + 5));
          v13 = sub_1904AE0(v17, v18);
          v14 = *(uint32_t *)(v13 + 16);
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = v13;
            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
            v13 = v15;
          }
          sub_4EBEE0(v13);
          result = 0;
          --a1[5];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceRegistry::Clear  (binary VA: 0x1513ee0)
// Original: iap::ServiceRegistry::Clear
// ----------------------------------------------------------------------------
char * iap::ServiceRegistry::Clear(iap::ServiceRegistry::Self *self)
{
  char *result;
  iap::ServiceRegistry::Self *v2;
  int v3;
  void (***v4)(uint32_t, char *);
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
    v4 = *(void (****)(uint32_t, char *))(v3 + 20);
    if ( v4 != nullptr )
    {
      (**v4)(*(uint32_t *)(v3 + 20), s2);
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
      g4_std::Rb_tree_string_pair_string_const_26d452::M_erase(
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


